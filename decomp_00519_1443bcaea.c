// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1443bcaea FUN_1443bcaea body=93 status=ok
// SIG undefined FUN_1443bcaea(void)

void FUN_1443bcaea(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba50e70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1443bcb48 FUN_1443bcb48 body=126 status=ok
// SIG undefined FUN_1443bcb48(void)

void FUN_1443bcb48(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba50e70;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443bcbb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443bcbd0 FUN_1443bcbd0 body=20 status=ok
// SIG undefined FUN_1443bcbd0(void)

undefined1 FUN_1443bcbd0(longlong param_1)

{
  FUN_1443bcbe4(param_1 + 0x18);
  return 1;
}



// FUNCTION 1443bcbe4 FUN_1443bcbe4 body=123 status=ok
// SIG undefined FUN_1443bcbe4(void)

void FUN_1443bcbe4(undefined8 *param_1)

{
  int *piVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_148fc6cea(*param_1,&local_28);
  FUN_1443ba262(*(undefined8 *)(local_28 + 0x20));
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



// FUNCTION 1443bcc70 FUN_1443bcc70 body=111 status=ok
// SIG undefined FUN_1443bcc70(void)

undefined8 * FUN_1443bcc70(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14ba50ee0;
  plVar1 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1443bccc1;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1443bccc1:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443bccf4 FUN_1443bccf4 body=115 status=ok
// SIG undefined FUN_1443bccf4(void)

void FUN_1443bccf4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba50ee0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_14009d848(puVar1 + 3,param_1 + 0x18);
  return;
}



// FUNCTION 1443bcd68 FUN_1443bcd68 body=115 status=ok
// SIG undefined FUN_1443bcd68(void)

void FUN_1443bcd68(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba50ee0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_14009d848(puVar1 + 3,param_1 + 0x18);
  return;
}



// FUNCTION 1443bcddc FUN_1443bcddc body=149 status=ok
// SIG undefined FUN_1443bcddc(void)

void FUN_1443bcddc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba50ee0;
  (p_Var1->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  p_Var1->EntryCount = 0;
  FUN_14009d848(&(p_Var1->ProcessLocksList).Blink,param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443bce62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443bce90 FUN_1443bce90 body=38 status=ok
// SIG undefined FUN_1443bce90(void)

undefined8 FUN_1443bce90(longlong param_1)

{
  undefined8 in_RAX;
  undefined7 uVar1;
  undefined7 extraout_var;
  
  uVar1 = (undefined7)((ulonglong)in_RAX >> 8);
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0 && *(int *)(param_1 + 0x20) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x60))();
    uVar1 = extraout_var;
  }
  return CONCAT71(uVar1,1);
}



// FUNCTION 1443bceb6 FUN_1443bceb6 body=935 status=ok
// SIG undefined FUN_1443bceb6(void)

void FUN_1443bceb6(void)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1446f470e(&DAT_14cbf4fe8,L"UNSET",1);
  FUN_1446f470e(&DAT_14cbf5008,L"ClientQosResponse",1);
  FUN_1446f470e(&DAT_14cbf5018,L"ServerQosRequest",1);
  ppuStack_60 = &PTR_FUN_14ba4dc90;
  local_68 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/Qos",&PTR_FUN_14ba4dcb0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Qos",&PTR_FUN_14ba4e3c0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Qos",&PTR_FUN_14ba4e850,1,0);
  local_48 = 0x800000014ba4e8a0;
  local_34 = 3;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_146670900(&local_48);
  ppuStack_60 = &PTR_FUN_14ba4fe30;
  local_58 = 2;
  local_68 = 6;
  FUN_14282b410(L"/Script/Qos",&PTR_FUN_14ba4ff60,1,&PTR_FUN_14ba4fe70);
  FUN_140056680(&DAT_14cbf5188,L"QosStats_DatacenterEvent");
  atexit((_func_5014 *)&LAB_1443bbc8a);
  FUN_140056680(&DAT_14cbf5198,L"SessionId");
  atexit((_func_5014 *)&LAB_1443bbc9b);
  FUN_140056680(&DAT_14cbf51a8,L"Version");
  atexit((_func_5014 *)&LAB_1443bbcac);
  FUN_140056680(&DAT_14cbf51b8,L"Timestamp");
  atexit((_func_5014 *)&LAB_1443bbcbd);
  FUN_140056680(&DAT_14cbf51c8,L"TotalTime");
  atexit((_func_5014 *)&LAB_1443bbcce);
  FUN_140056680(&DAT_14cbf51d8,L"DeterminationType");
  atexit((_func_5014 *)&LAB_1443bbcdf);
  FUN_140056680(&DAT_14cbf51e8,L"NumRegions");
  atexit((_func_5014 *)&LAB_1443bbcf0);
  FUN_140056680(&DAT_14cbf51f8,L"RegionDetailsv2");
  atexit((_func_5014 *)&LAB_1443bbd01);
  FUN_140056680(&DAT_14cbf5208,L"NumResults");
  atexit((_func_5014 *)&LAB_1443bbd12);
  FUN_140056680(&DAT_14cbf5218,L"NumSuccessCount");
  atexit((_func_5014 *)&LAB_1443bbd23);
  FUN_140056680(&DAT_14cbf5228,L"NetworkType");
  atexit((_func_5014 *)&LAB_1443bbd34);
  FUN_140056680(&DAT_14cbf5238,L"BestRegionId");
  atexit((_func_5014 *)&LAB_1443bbd45);
  FUN_140056680(&DAT_14cbf5248,L"BestRegionPing");
  atexit((_func_5014 *)&LAB_1443bbd56);
  FUN_140056680(&DAT_14cbf5258,L"BestEndpointId");
  atexit((_func_5014 *)&LAB_1443bbd67);
  FUN_140056680(&DAT_14cbf5268,L"BestEndpointPing");
  atexit((_func_5014 *)&LAB_1443bbd78);
  FUN_140056680(&DAT_14cbf5278,L"ChosenbRegionId");
  atexit((_func_5014 *)&LAB_1443bbd89);
  FUN_140056680(&DAT_14cbf5288,L"ChosenSubRegionId");
  atexit((_func_5014 *)&LAB_1443bbd9a);
  FUN_140056680(&DAT_14cbf5298,L"ChosenSubRegionPing");
  atexit((_func_5014 *)&LAB_1443bbdab);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443bd336 FUN_1443bd336 body=55 status=ok
// SIG undefined FUN_1443bd336(void)

void FUN_1443bd336(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf53c0 == 0) {
    uVar1 = FUN_1410510fd();
    DAT_14cbf53c0 = FUN_14171c317(FUN_146670f1e,uVar1,L"ESocialChannelType");
  }
  return;
}



// FUNCTION 1443bd396 FUN_1443bd396 body=3020 status=ok
// SIG undefined FUN_1443bd396(void)

void FUN_1443bd396(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined **ppuVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined ***pppuVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined8 local_130;
  wchar_t *local_128;
  code *local_120;
  undefined1 *local_118;
  undefined ***local_110;
  code *local_108;
  code *local_100;
  undefined8 local_f8;
  longlong *local_f0;
  undefined **local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  byte local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined **local_b8;
  int local_b0;
  undefined4 uStack_ac;
  undefined ***local_a8;
  undefined **local_98;
  longlong local_90;
  undefined **local_78;
  undefined **local_70;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  (**(code **)(**(longlong **)(param_1 + 0x40) + 0x30))(*(longlong **)(param_1 + 0x40),param_1);
  *(undefined1 *)(param_1 + 0x78) = 3;
  if (*(longlong *)(param_1 + 0x60) != 0) goto LAB_1443bd3dc;
  uVar6 = *param_2;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x60) = uVar6;
    plVar11 = *(longlong **)(param_1 + 0x68);
    if (plVar11 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x68) = 0;
LAB_1443bd463:
      LOCK();
      plVar3 = plVar11 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x0001443bd456:
        if (iVar2 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x60) = uVar6;
    plVar11 = *(longlong **)(param_1 + 0x68);
    if (plVar3 == plVar11) {
      LOCK();
      plVar11 = plVar3 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar11 = plVar3;
        goto joined_r0x0001443bd456;
      }
    }
    else {
      *(longlong **)(param_1 + 0x68) = plVar3;
      if (plVar11 != (longlong *)0x0) goto LAB_1443bd463;
    }
  }
  FUN_148fd2006(*(longlong *)(param_1 + 0x60) + 0x10,&local_b8,param_1);
  FUN_148fd2108(*(longlong *)(param_1 + 0x60) + 0x28,&local_b8,param_1);
  if (*(char *)(param_1 + 0x79) == '\x01') {
    uVar6 = FUN_14001cc68(0x40,0x10);
    FUN_148fd2d5a(uVar6,param_1);
    lVar7 = *(longlong *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = uVar6;
    if (lVar7 != 0) {
      FUN_1443bfc8a(lVar7);
      FUN_1400020a8(lVar7);
    }
  }
  lVar7 = FUN_145a91644();
  if (DAT_14c951858 == 0) {
    local_b8 = (undefined **)FUN_1449e2820;
    local_100 = FUN_14081d0ea;
    local_108 = FUN_14081d0ea;
    local_118 = &LAB_1468c5283;
    local_120 = FUN_142809da0;
    local_128 = L"Engine";
    local_130 = 0x400000000;
    local_138 = 0x10000000;
    local_140 = 8;
    local_148 = 0x50;
    local_110 = &local_b8;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  lVar8 = *(longlong *)(param_1 + 0x20);
  if (lVar8 == 0) {
    lVar10 = 0;
  }
  else {
    do {
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
         (lVar10 = lVar8,
         *(longlong *)
          (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
         != lVar7 + 0x30)) {
        lVar10 = 0;
      }
    } while ((lVar10 == 0) && (lVar8 = *(longlong *)(lVar8 + 0x20), lVar8 != 0));
  }
  lVar7 = FUN_145988618();
  if (DAT_14c951858 == 0) {
    local_b8 = (undefined **)FUN_1449e2820;
    local_100 = FUN_14081d0ea;
    local_108 = FUN_14081d0ea;
    local_118 = &LAB_1468c5283;
    local_120 = FUN_142809da0;
    local_128 = L"Engine";
    local_130 = 0x400000000;
    local_138 = 0x10000000;
    local_140 = 8;
    local_148 = 0x50;
    local_110 = &local_b8;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  lVar8 = *(longlong *)(lVar10 + 0x20);
  if (lVar8 == 0) {
    lVar10 = 0;
  }
  else {
    do {
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
         (lVar10 = lVar8,
         *(longlong *)
          (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
         != lVar7 + 0x30)) {
        lVar10 = 0;
      }
    } while ((lVar10 == 0) && (lVar8 = *(longlong *)(lVar8 + 0x20), lVar8 != 0));
  }
  (**(code **)(**(longlong **)(param_1 + 0x60) + 8))(*(longlong **)(param_1 + 0x60),&local_b8);
  local_70 = local_b8;
  if (CONCAT44(uStack_ac,local_b0) != 0) {
    LOCK();
    piVar1 = (int *)(CONCAT44(uStack_ac,local_b0) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_60 = 0;
  local_78 = &PTR_FUN_14a5af930;
  local_58 = 0;
  uStack_50 = 0;
  lVar7 = FUN_148fd2272(lVar10);
  plVar3 = (longlong *)CONCAT44(uStack_ac,local_b0);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar3 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  if (lVar7 == 0) {
    lVar7 = FUN_145a91644();
    if (DAT_14c951858 == 0) {
      local_b8 = (undefined **)FUN_1449e2820;
      local_100 = FUN_14081d0ea;
      local_108 = FUN_14081d0ea;
      local_118 = &LAB_1468c5283;
      local_120 = FUN_142809da0;
      local_128 = L"Engine";
      local_130 = 0x400000000;
      local_138 = 0x10000000;
      local_140 = 8;
      local_148 = 0x50;
      local_110 = &local_b8;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar8 = *(longlong *)(param_1 + 0x20);
    if (lVar8 == 0) {
      lVar10 = 0;
    }
    else {
      do {
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
           (lVar10 = lVar8,
           *(longlong *)
            (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) {
          lVar10 = 0;
        }
      } while ((lVar10 == 0) && (lVar8 = *(longlong *)(lVar8 + 0x20), lVar8 != 0));
    }
    lVar7 = FUN_145988618();
    if (DAT_14c951858 == 0) {
      local_b8 = (undefined **)FUN_1449e2820;
      local_100 = FUN_14081d0ea;
      local_108 = FUN_14081d0ea;
      local_118 = &LAB_1468c5283;
      local_120 = FUN_142809da0;
      local_128 = L"Engine";
      local_130 = 0x400000000;
      local_138 = 0x10000000;
      local_140 = 8;
      local_148 = 0x50;
      local_110 = &local_b8;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar8 = *(longlong *)(lVar10 + 0x20);
    if (lVar8 == 0) {
      lVar10 = 0;
    }
    else {
      do {
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
           (lVar10 = lVar8,
           *(longlong *)
            (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) {
          lVar10 = 0;
        }
      } while ((lVar10 == 0) && (lVar8 = *(longlong *)(lVar8 + 0x20), lVar8 != 0));
    }
    if (*(int *)(lVar10 + 0xb0) < 1) {
      lVar7 = 0;
    }
    else {
      lVar7 = **(longlong **)(lVar10 + 0xa8);
    }
  }
  local_a8 = (undefined ***)0x0;
  local_98 = &PTR_LAB_14ba5bb10;
  local_b8 = (undefined **)FUN_1443d5e70;
  local_90 = param_1;
  (**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,&local_f8);
  local_e0 = local_f8;
  local_d8 = local_f0;
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
    UNLOCK();
  }
  local_d0 = 0;
  local_e8 = &PTR_FUN_14a5af930;
  local_c8 = 0;
  uStack_c0 = 0;
  FUN_148fd2398(lVar7,&local_e8,&local_b8,0);
  local_e8 = &PTR_FUN_14a5af930;
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  local_e8 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_d0])(&local_e0);
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_f0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_f0)(local_f0);
      LOCK();
      piVar1 = (int *)((longlong)local_f0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_f0 + 0x10))(local_f0);
      }
    }
  }
  if (local_b8 != (undefined **)0x0) {
    pppuVar9 = local_a8;
    if (local_a8 == (undefined ***)0x0) {
      pppuVar9 = &local_98;
    }
    (*(code *)(*pppuVar9)[2])();
  }
  cVar5 = FUN_148fd1e76(param_1);
  if (cVar5 == '\0') {
    lVar7 = *(longlong *)(param_1 + 0x80);
    if (lVar7 != 0) {
      FUN_140056680(&local_b8,L"InitialMemberData");
      FUN_1405e9454(lVar7 + 0x30,&local_b8);
      if (local_b8 != (undefined **)0x0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) & 0xfd;
  }
  FUN_1448b6402(param_1 + 0xb8,&local_b8,param_3);
  FUN_1443bdf63(&local_b8,param_1);
  ppuVar4 = local_b8;
  if ((longlong)local_b0 != 0) {
    lVar7 = 0;
    do {
      FUN_1443be424(param_1,*(undefined8 *)((longlong)ppuVar4 + lVar7));
      lVar7 = lVar7 + 8;
    } while ((longlong)local_b0 * 8 != lVar7);
  }
  lVar7 = FUN_145a91644();
  if (DAT_14c951858 == 0) {
    local_e8 = (undefined **)FUN_1449e2820;
    local_100 = FUN_14081d0ea;
    local_108 = FUN_14081d0ea;
    local_118 = &LAB_1468c5283;
    local_120 = FUN_142809da0;
    local_128 = L"Engine";
    local_130 = 0x400000000;
    local_138 = 0x10000000;
    local_140 = 8;
    local_148 = 0x50;
    local_110 = &local_e8;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  lVar8 = *(longlong *)(param_1 + 0x20);
  if (lVar8 == 0) {
    lVar10 = 0;
  }
  else {
    do {
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
         (lVar10 = lVar8,
         *(longlong *)
          (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
         != lVar7 + 0x30)) {
        lVar10 = 0;
      }
    } while ((lVar10 == 0) && (lVar8 = *(longlong *)(lVar8 + 0x20), lVar8 != 0));
  }
  lVar7 = FUN_145988618();
  if (DAT_14c951858 == 0) {
    local_e8 = (undefined **)FUN_1449e2820;
    local_100 = FUN_14081d0ea;
    local_108 = FUN_14081d0ea;
    local_118 = &LAB_1468c5283;
    local_120 = FUN_142809da0;
    local_128 = L"Engine";
    local_130 = 0x400000000;
    local_138 = 0x10000000;
    local_140 = 8;
    local_148 = 0x50;
    local_110 = &local_e8;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  lVar8 = *(longlong *)(lVar10 + 0x20);
  if (lVar8 == 0) {
    lVar10 = 0;
  }
  else {
    do {
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
         (lVar10 = lVar8,
         *(longlong *)
          (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
         != lVar7 + 0x30)) {
        lVar10 = 0;
      }
    } while ((lVar10 == 0) && (lVar8 = *(longlong *)(lVar8 + 0x20), lVar8 != 0));
  }
  FUN_148fd2450(lVar10 + 0x180,&local_e8,param_1,FUN_148fd2546);
  lVar7 = FUN_145a91644();
  if (DAT_14c951858 == 0) {
    local_e8 = (undefined **)FUN_1449e2820;
    local_100 = FUN_14081d0ea;
    local_108 = FUN_14081d0ea;
    local_118 = &LAB_1468c5283;
    local_120 = FUN_142809da0;
    local_128 = L"Engine";
    local_130 = 0x400000000;
    local_138 = 0x10000000;
    local_140 = 8;
    local_148 = 0x50;
    local_110 = &local_e8;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  lVar8 = *(longlong *)(param_1 + 0x20);
  if (lVar8 == 0) {
    lVar10 = 0;
  }
  else {
    do {
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
         (lVar10 = lVar8,
         *(longlong *)
          (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
         != lVar7 + 0x30)) {
        lVar10 = 0;
      }
    } while ((lVar10 == 0) && (lVar8 = *(longlong *)(lVar8 + 0x20), lVar8 != 0));
  }
  lVar7 = FUN_145988618();
  if (DAT_14c951858 == 0) {
    local_e8 = (undefined **)FUN_1449e2820;
    local_100 = FUN_14081d0ea;
    local_108 = FUN_14081d0ea;
    local_118 = &LAB_1468c5283;
    local_120 = FUN_142809da0;
    local_128 = L"Engine";
    local_130 = 0x400000000;
    local_138 = 0x10000000;
    local_140 = 8;
    local_148 = 0x50;
    local_110 = &local_e8;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  lVar8 = *(longlong *)(lVar10 + 0x20);
  if (lVar8 == 0) {
    lVar10 = 0;
  }
  else {
    do {
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
         (lVar10 = lVar8,
         *(longlong *)
          (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
         != lVar7 + 0x30)) {
        lVar10 = 0;
      }
    } while ((lVar10 == 0) && (lVar8 = *(longlong *)(lVar8 + 0x20), lVar8 != 0));
  }
  FUN_148fd2450(lVar10 + 0x198,&local_e8,param_1,FUN_148fd26a8);
  if (local_b8 != (undefined **)0x0) {
    FUN_1400020a8();
  }
LAB_1443bd3dc:
  if ((local_48 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443bdf63 FUN_1443bdf63 body=1216 status=ok
// SIG undefined FUN_1443bdf63(void)

longlong * FUN_1443bdf63(longlong *param_1,longlong *param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  code *local_a0;
  undefined1 *local_98;
  undefined ***local_90;
  code *local_88;
  code *local_80;
  undefined **local_78;
  undefined1 local_70 [16];
  byte local_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *param_1 = 0;
  param_1[1] = 0;
  lVar3 = (**(code **)(*param_2 + 0x180))(param_2);
  lVar3 = *(longlong *)(lVar3 + 0x1f0);
  if ((lVar3 != 0) && ((longlong)*(int *)(lVar3 + 0x40) != 0)) {
    plVar7 = *(longlong **)(lVar3 + 0x38);
    plVar6 = plVar7 + *(int *)(lVar3 + 0x40);
    do {
      lVar3 = *plVar7;
      if (lVar3 != 0) {
        lVar4 = FUN_145a91644();
        if (DAT_14c951858 == 0) {
          local_78 = (undefined **)FUN_1449e2820;
          local_80 = FUN_14081d0ea;
          local_88 = FUN_14081d0ea;
          local_98 = &LAB_1468c5283;
          local_a0 = FUN_142809da0;
          local_a8 = L"Engine";
          local_b0 = 0x400000000;
          local_b8 = 0x10000000;
          local_c0 = 8;
          local_c8 = 0x50;
          local_90 = &local_78;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858);
        }
        lVar8 = param_2[4];
        if (lVar8 == 0) {
          lVar5 = 0;
        }
        else {
          do {
            if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
               (lVar5 = lVar8,
               *(longlong *)
                (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar4 + 0x38) * 8) != lVar4 + 0x30)) {
              lVar5 = 0;
            }
          } while ((lVar5 == 0) && (lVar8 = *(longlong *)(lVar8 + 0x20), lVar8 != 0));
        }
        lVar4 = FUN_145988618();
        if (DAT_14c951858 == 0) {
          local_78 = (undefined **)FUN_1449e2820;
          local_80 = FUN_14081d0ea;
          local_88 = FUN_14081d0ea;
          local_98 = &LAB_1468c5283;
          local_a0 = FUN_142809da0;
          local_a8 = L"Engine";
          local_b0 = 0x400000000;
          local_b8 = 0x10000000;
          local_c0 = 8;
          local_c8 = 0x50;
          local_90 = &local_78;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858);
        }
        lVar8 = *(longlong *)(lVar5 + 0x20);
        if (lVar8 == 0) {
          lVar5 = 0;
        }
        else {
          do {
            if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
               (lVar5 = lVar8,
               *(longlong *)
                (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar4 + 0x38) * 8) != lVar4 + 0x30)) {
              lVar5 = 0;
            }
          } while ((lVar5 == 0) && (lVar8 = *(longlong *)(lVar8 + 0x20), lVar8 != 0));
        }
        if ((longlong)*(int *)(lVar5 + 0xb0) != 0) {
          lVar4 = 0;
          do {
            plVar10 = *(longlong **)(*(longlong *)(lVar5 + 0xa8) + lVar4);
            if (((int)plVar10[0x1c] == 0) ||
               (uVar2 = *(uint *)((longlong)plVar10 + 0xdc), (int)uVar2 < 0)) {
LAB_1443be11b:
              lVar8 = 0;
            }
            else {
              lVar8 = 0;
              if ((int)uVar2 < DAT_14c9647dc) {
                plVar9 = (longlong *)
                         ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
                if (((plVar9 == (longlong *)0x0) || ((int)plVar9[2] != (int)plVar10[0x1c])) ||
                   ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)) goto LAB_1443be11b;
                lVar8 = *plVar9;
              }
            }
            if (lVar8 == lVar3) goto LAB_1443be123;
            lVar4 = lVar4 + 8;
          } while ((longlong)*(int *)(lVar5 + 0xb0) * 8 != lVar4);
        }
        plVar10 = (longlong *)0x0;
LAB_1443be123:
        cVar1 = (**(code **)(*plVar10 + 0x2a8))(plVar10);
        if (cVar1 == '\0') {
          lVar3 = FUN_145a91644();
          if (DAT_14c951858 == 0) {
            local_78 = (undefined **)FUN_1449e2820;
            local_80 = FUN_14081d0ea;
            local_88 = FUN_14081d0ea;
            local_98 = &LAB_1468c5283;
            local_a0 = FUN_142809da0;
            local_a8 = L"Engine";
            local_b0 = 0x400000000;
            local_b8 = 0x10000000;
            local_c0 = 8;
            local_c8 = 0x50;
            local_90 = &local_78;
            FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858);
          }
          lVar4 = param_2[4];
          if (lVar4 == 0) {
            lVar8 = 0;
          }
          else {
            do {
              if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
                 (lVar8 = lVar4,
                 *(longlong *)
                  (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                  (longlong)*(int *)(lVar3 + 0x38) * 8) != lVar3 + 0x30)) {
                lVar8 = 0;
              }
            } while ((lVar8 == 0) && (lVar4 = *(longlong *)(lVar4 + 0x20), lVar4 != 0));
          }
          FUN_148fcdaa6(plVar10[0xe],&local_78,0);
          lVar3 = FUN_148fd8170(lVar8,&local_78);
          local_78 = &PTR_FUN_14a5af930;
          if (local_58 != 0) {
            FUN_1400020a8();
          }
          local_78 = &PTR_FUN_14a184370;
          (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_60])(local_70);
          if (lVar3 == 0) goto LAB_1443bdfda;
        }
        lVar3 = param_1[1];
        uVar2 = (int)lVar3 + 1;
        *(uint *)(param_1 + 1) = uVar2;
        if (*(uint *)((longlong)param_1 + 0xc) < uVar2) {
          FUN_148fe7080(param_1);
        }
        *(longlong **)(*param_1 + (longlong)(int)lVar3 * 8) = plVar10;
      }
LAB_1443bdfda:
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1443be424 FUN_1443be424 body=873 status=ok
// SIG undefined FUN_1443be424(void)

void FUN_1443be424(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined ***pppuVar6;
  undefined *puVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_f8 [40];
  ulonglong local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  undefined **local_b8;
  ulonglong local_b0;
  longlong *local_a8;
  byte local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined **local_88 [2];
  undefined ***local_78;
  byte local_70;
  undefined **local_68;
  undefined8 *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_60 = &local_c0;
  local_c0 = 0;
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14ba5bc10;
  local_88[0] = (undefined **)&LAB_1443d5ee8;
  (**(code **)(**(longlong **)(param_1 + 0x60) + 8))(*(longlong **)(param_1 + 0x60),&local_d0);
  local_b0 = local_d0;
  local_a8 = local_c8;
  if (local_c8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_c8 + 1) = (int)local_c8[1] + 1;
    UNLOCK();
  }
  local_a0 = 0;
  local_b8 = &PTR_FUN_14a5af930;
  local_98 = 0;
  uStack_90 = 0;
  FUN_148fd2398(param_2,&local_b8,local_88,0);
  local_b8 = &PTR_FUN_14a5af930;
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  local_b8 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_a0])(&local_b0);
  if (local_c8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_c8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_c8)(local_c8);
      LOCK();
      piVar2 = (int *)((longlong)local_c8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_c8 + 0x10))(local_c8);
      }
    }
  }
  if (local_88[0] != (undefined **)0x0) {
    pppuVar6 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar6 = &local_68;
    }
    (*(code *)(*pppuVar6)[2])();
  }
  FUN_148fcdaa6(*(undefined8 *)(param_2 + 0x70),local_88,0);
  if ((*(byte *)(param_1 + 0x78) & 1) != 0) {
    lVar9 = *(longlong *)(param_1 + 0x80);
    if (lVar9 != 0) {
      FUN_1405e6804(local_88,&local_b8);
      FUN_1405e9454(lVar9 + 0x30,&local_b8);
      if (local_b8 != (undefined **)0x0) {
        FUN_1400020a8();
      }
    }
    uVar4 = local_c0;
    local_b8 = (undefined **)0x0;
    local_b0 = local_b0 & 0xffffffff00000000;
    FUN_1446efa72(&local_b8,0,3,0x10);
    ppuVar5 = local_b8;
    local_b0 = CONCAT44(local_b0._4_4_,3);
    *local_b8 = (undefined *)&PTR_LAB_14ba5bca0;
    LOCK();
    UNLOCK();
    puVar7 = (undefined *)(DAT_14c758608 + 1);
    lVar9 = DAT_14c758608 + 1;
    if (puVar7 == (undefined *)0x0) {
      LOCK();
      UNLOCK();
      puVar7 = (undefined *)(DAT_14c758608 + 2);
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    local_b8[2] = puVar7;
    *local_b8 = (undefined *)&PTR_FUN_14ba5bc30;
    local_b8[3] = (undefined *)0x0;
    iVar8 = 0;
    if (param_1 != 0) {
      uVar3 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_b8 + 3) = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar8 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar8 = DAT_14c964868 + 1;
        UNLOCK();
        iVar10 = DAT_14c964868 + 1;
        bVar11 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar8;
        if (bVar11) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar10);
        }
        LOCK();
        iVar8 = *(int *)(lVar9 + 0x10);
        bVar11 = iVar8 == 0;
        if (bVar11) {
          *(int *)(lVar9 + 0x10) = iVar10;
          iVar8 = 0;
        }
        UNLOCK();
        if (bVar11) {
          iVar8 = iVar10;
        }
      }
    }
    *(int *)((longlong)ppuVar5 + 0x1c) = iVar8;
    ppuVar5[4] = FUN_1443bfa9a;
    FUN_148fd2ca2(uVar4,&local_b8);
    if ((int)local_b0 != 0) {
      if (local_b8 == (undefined **)0x0) goto LAB_1443be57d;
      (**(code **)*local_b8)(local_b8,0);
      FUN_1446efa72(&local_b8,0,0,0x10);
      local_b0 = local_b0 & 0xffffffff00000000;
    }
    if (local_b8 != (undefined **)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1443be57d:
  local_88[0] = &PTR_FUN_14a5af930;
  if (local_68 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  local_88[0] = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_70])();
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443be78e FUN_1443be78e body=2404 status=ok
// SIG undefined FUN_1443be78e(void)

void FUN_1443be78e(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  undefined **ppuVar9;
  void *pvVar10;
  char cVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  ushort uVar19;
  ulonglong uVar20;
  ushort uVar21;
  ulonglong uVar22;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined8 *local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  wchar_t *local_198;
  code *local_190;
  undefined1 *local_188;
  undefined8 *local_180;
  code *local_178;
  code *local_170;
  longlong *local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  byte local_130;
  void *local_128;
  int local_120;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined4 local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  plVar13 = (longlong *)param_1[8];
  FUN_143e6d8ca(&local_68);
  FUN_148fd279e(&local_148);
  cVar11 = (**(code **)(*plVar13 + 0x18))(plVar13);
  if (cVar11 == '\0') {
    (**(code **)(*plVar13 + 0x20))(plVar13);
  }
  else {
    plVar1 = plVar13 + 5;
    iVar4 = (int)plVar13[6];
    if (iVar4 == (int)uStack_140) {
      if (1 < iVar4) {
        lVar17 = 0;
        while( true ) {
          uVar19 = *(ushort *)(*plVar1 + lVar17);
          uVar20 = (ulonglong)uVar19;
          uVar21 = *(ushort *)((longlong)local_148 + lVar17);
          if (uVar19 != uVar21) break;
          if (uVar19 == 0) goto LAB_1443be865;
LAB_1443be82b:
          lVar17 = lVar17 + 2;
        }
        if ((uVar21 | uVar19) < 0x80) {
          uVar19 = (ushort)(byte)(&DAT_149e05da0)[uVar20];
          uVar22 = (ulonglong)uVar21;
          uVar21 = (ushort)(byte)(&DAT_149e05da0)[uVar22];
          if ((&DAT_149e05da0)[uVar20] == (&DAT_149e05da0)[uVar22]) goto LAB_1443be82b;
        }
        if (uVar19 != uVar21) goto LAB_1443bec02;
      }
    }
    else if ((int)uStack_140 + iVar4 != 1) {
LAB_1443bec02:
      (**(code **)(*plVar13 + 0x20))(plVar13);
      if ((longlong)(int)plVar13[0x1c] != 0) {
        lVar17 = 0;
        do {
          if ((*(int *)(plVar13[0x1b] + 8 + lVar17) != 0) &&
             (*(longlong *)(plVar13[0x1b] + lVar17) != 0)) {
            FUN_148fe7106(&local_e8,plVar1);
            FUN_148fe2a7c(plVar1,&local_148);
            FUN_148fe6a20(plVar13 + 0x1b,plVar1,&local_e8);
            FUN_1458ea6a8(&local_e8);
            goto LAB_1443bec56;
          }
          lVar17 = lVar17 + 0x10;
        } while ((longlong)(int)plVar13[0x1c] * 0x10 != lVar17);
      }
      FUN_148fe2a7c(plVar1,&local_148);
LAB_1443bec56:
      FUN_148fe6ad0(plVar13 + 0x18,plVar1);
      if (((int)plVar13[2] != 0) && ((longlong *)plVar13[1] != (longlong *)0x0)) {
        (**(code **)(*(longlong *)plVar13[1] + 0x60))();
      }
    }
  }
LAB_1443be865:
  FUN_1458ea6a8(&local_148);
  if (CONCAT44(uStack_64,local_68) != 0) {
    FUN_1400020a8();
  }
  plVar13 = (longlong *)param_1[8];
  FUN_148fcdaa6(param_1[0xe],&local_148,1);
  cVar11 = (**(code **)(*plVar13 + 0x18))(plVar13);
  if (cVar11 == '\0') {
    (**(code **)(*plVar13 + 0x20))(plVar13);
  }
  else {
    plVar1 = plVar13 + 0x10;
    cVar11 = FUN_140ba41f1(plVar1);
    if (cVar11 == '\0') {
      (**(code **)(*plVar13 + 0x20))(plVar13);
      if ((longlong)(int)plVar13[0x22] != 0) {
        lVar17 = 0;
        do {
          if ((*(int *)(plVar13[0x21] + 8 + lVar17) != 0) &&
             (*(longlong *)(plVar13[0x21] + lVar17) != 0)) {
            plVar3 = plVar13 + 0x11;
            local_e8 = &PTR_FUN_14a184370;
            local_d0 = CONCAT31(local_d0._1_3_,*(byte *)(plVar13 + 0x13));
            local_160 = plVar13 + 0x21;
            (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[*(byte *)(plVar13 + 0x13)])
                      (&uStack_e0,plVar3);
            local_e8 = &PTR_FUN_14a5af930;
            local_c8 = 0;
            uStack_c0 = 0;
            if (plVar1 != &local_148) {
              local_78 = CONCAT71(local_78._1_7_,local_130);
              (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[local_130])
                        (&local_88,&uStack_140);
              local_58 = local_78;
              local_68 = (undefined4)local_88;
              uStack_64 = local_88._4_4_;
              uStack_60 = (undefined4)uStack_80;
              uStack_5c = uStack_80._4_4_;
              uVar20 = plVar13[0x13];
              lVar17 = *plVar3;
              plVar8 = (longlong *)plVar13[0x12];
              *(undefined4 *)plVar3 = (undefined4)local_88;
              *(undefined4 *)((longlong)plVar13 + 0x8c) = local_88._4_4_;
              *(undefined4 *)(plVar13 + 0x12) = (undefined4)uStack_80;
              *(undefined4 *)((longlong)plVar13 + 0x94) = uStack_80._4_4_;
              plVar13[0x13] = local_78;
              local_88 = lVar17;
              uStack_80 = plVar8;
              local_78 = uVar20;
              (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[uVar20 & 0xff])(&local_88);
              pvVar10 = local_128;
              *(int *)(plVar13 + 0x15) = local_120;
              if (local_120 == 0 && *(int *)((longlong)plVar13 + 0xac) == 0) {
                *(undefined4 *)((longlong)plVar13 + 0xac) = 0;
              }
              else {
                FUN_1447a127e(plVar13 + 0x14,local_120);
                if (local_120 != 0) {
                  memcpy((void *)plVar13[0x14],pvVar10,(longlong)local_120);
                }
              }
            }
            FUN_148fe6b74(local_160,plVar1,&local_e8);
            local_e8 = &PTR_FUN_14a5af930;
            if (local_c8 != 0) {
              FUN_1400020a8();
            }
            local_e8 = &PTR_FUN_14a184370;
            (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[(byte)local_d0])(&uStack_e0);
            goto LAB_1443bef82;
          }
          lVar17 = lVar17 + 0x10;
        } while ((longlong)(int)plVar13[0x22] * 0x10 != lVar17);
      }
      if (plVar1 != &local_148) {
        local_58 = CONCAT71(local_58._1_7_,local_130);
        (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[local_130])(&local_68,&uStack_140);
        local_d8 = local_58;
        local_e8 = (undefined **)CONCAT44(uStack_64,local_68);
        uStack_e0 = CONCAT44(uStack_5c,uStack_60);
        uVar20 = plVar13[0x13];
        lVar17 = plVar13[0x11];
        uVar6 = *(undefined4 *)((longlong)plVar13 + 0x8c);
        lVar12 = plVar13[0x12];
        uVar7 = *(undefined4 *)((longlong)plVar13 + 0x94);
        *(undefined4 *)(plVar13 + 0x11) = local_68;
        *(undefined4 *)((longlong)plVar13 + 0x8c) = uStack_64;
        *(undefined4 *)(plVar13 + 0x12) = uStack_60;
        *(undefined4 *)((longlong)plVar13 + 0x94) = uStack_5c;
        plVar13[0x13] = local_58;
        local_68 = (int)lVar17;
        uStack_64 = uVar6;
        uStack_60 = (int)lVar12;
        uStack_5c = uVar7;
        local_58 = uVar20;
        (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[uVar20 & 0xff])(&local_68);
        pvVar10 = local_128;
        *(int *)(plVar13 + 0x15) = local_120;
        if (local_120 == 0 && *(int *)((longlong)plVar13 + 0xac) == 0) {
          *(undefined4 *)((longlong)plVar13 + 0xac) = 0;
        }
        else {
          FUN_1447a127e(plVar13 + 0x14,local_120);
          if (local_120 != 0) {
            memcpy((void *)plVar13[0x14],pvVar10,(longlong)local_120);
          }
        }
      }
LAB_1443bef82:
      FUN_147bd2fca(plVar13 + 0x1e,plVar1);
      if (((int)plVar13[2] != 0) && ((longlong *)plVar13[1] != (longlong *)0x0)) {
        (**(code **)(*(longlong *)plVar13[1] + 0x60))();
      }
    }
  }
  local_148 = &PTR_FUN_14a5af930;
  if (local_128 != (void *)0x0) {
    FUN_1400020a8();
  }
  local_148 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_130])();
  lVar17 = FUN_145a91644();
  if (DAT_14c951858 == 0) {
    local_180 = &local_e8;
    local_e8 = (undefined **)FUN_1449e2820;
    local_170 = FUN_14081d0ea;
    local_178 = FUN_14081d0ea;
    local_188 = &LAB_1468c5283;
    local_190 = FUN_142809da0;
    local_198 = L"Engine";
    local_1a0 = 0x400000000;
    local_1a8 = 0x10000000;
    local_1b0 = (undefined8 *)CONCAT44(local_1b0._4_4_,8);
    local_1b8 = CONCAT44(local_1b8._4_4_,0x50);
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  lVar12 = param_1[4];
  if (lVar12 == 0) {
    lVar18 = 0;
  }
  else {
    do {
      if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x38) < *(int *)(lVar17 + 0x38)) ||
         (lVar18 = lVar12,
         *(longlong *)
          (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar17 + 0x38) * 8) != lVar17 + 0x30)) {
        lVar18 = 0;
      }
    } while ((lVar18 == 0) && (lVar12 = *(longlong *)(lVar12 + 0x20), lVar12 != 0));
  }
  local_148 = (undefined **)0x0;
  uStack_140 = 0;
  lVar17 = FUN_145988618();
  if (DAT_14c951858 == 0) {
    local_180 = &local_e8;
    local_e8 = (undefined **)FUN_1449e2820;
    local_170 = FUN_14081d0ea;
    local_178 = FUN_14081d0ea;
    local_188 = &LAB_1468c5283;
    local_190 = FUN_142809da0;
    local_198 = L"Engine";
    local_1a0 = 0x400000000;
    local_1a8 = 0x10000000;
    local_1b0 = (undefined8 *)CONCAT44(local_1b0._4_4_,8);
    local_1b8 = CONCAT44(local_1b8._4_4_,0x50);
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  lVar12 = *(longlong *)(lVar18 + 0x20);
  if (lVar12 == 0) {
    lVar16 = 0;
  }
  else {
    do {
      if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x38) < *(int *)(lVar17 + 0x38)) ||
         (lVar16 = lVar12,
         *(longlong *)
          (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar17 + 0x38) * 8) != lVar17 + 0x30)) {
        lVar16 = 0;
      }
    } while ((lVar16 == 0) && (lVar12 = *(longlong *)(lVar12 + 0x20), lVar12 != 0));
  }
  lVar17 = FUN_148fd2892(lVar16,*(longlong *)(lVar18 + 0x70) + 0x28);
  if (lVar17 == 0) {
    (**(code **)(*param_1 + 0x180))(param_1);
    local_e8 = (undefined **)0x0;
    plVar13 = (longlong *)FUN_1401e3228();
    (**(code **)(*plVar13 + 0x40))(plVar13,&local_68);
    plVar13 = (longlong *)CONCAT44(uStack_64,local_68);
    if (plVar13 == (longlong *)0x0) {
      local_88 = 0;
      uStack_80 = (longlong *)0x0;
    }
    else {
      FUN_148fd1d62(param_1,&local_e8);
      uVar14 = FUN_14127b0d4(&local_e8);
      uVar5 = *(undefined8 *)(*(longlong *)(lVar18 + 0x70) + 0x18);
      uVar15 = FUN_14127b0d4(lVar18 + 0x80);
      local_1b0 = &DAT_14cb8e138;
      local_1b8 = uVar14;
      (**(code **)(*plVar13 + 0xe8))(plVar13,&local_88,uVar15,uVar5);
      local_e8 = &PTR_FUN_14a5af930;
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
      local_e8 = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[(byte)local_d0])();
      lVar17 = local_88;
      if (local_88 != 0) {
        local_e8 = (undefined **)((ulonglong)local_e8 & 0xffffffffffffff00);
        uStack_e0 = 0;
        local_d8 = 0;
        local_d0 = 0;
        FUN_140056680(&local_158,L"JoinMethod");
        cVar11 = FUN_148fd2900(lVar17,&local_158,&local_e8);
        if (CONCAT44(uStack_154,local_158) != 0) {
          FUN_1400020a8();
        }
        if (cVar11 != '\0') {
          FUN_140b74056(&local_e8,&local_158);
          local_148 = (undefined **)CONCAT44(uStack_154,local_158);
          uStack_140 = CONCAT44(uStack_14c,uStack_150);
        }
        FUN_140c3a2ac(&local_e8);
      }
    }
    plVar13 = uStack_80;
    if (uStack_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = uStack_80 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*uStack_80)(uStack_80);
        LOCK();
        piVar2 = (int *)((longlong)plVar13 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
    plVar13 = (longlong *)CONCAT44(uStack_5c,uStack_60);
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar13 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar2 = (int *)((longlong)plVar13 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
  }
  else {
    FUN_1400021e4(lVar17 + 0xc,&local_e8);
    local_148 = local_e8;
    uStack_140 = uStack_e0;
  }
  ppuVar9 = local_148;
  FUN_1443bf0f4(param_1[8],&local_148);
  if (ppuVar9 != (undefined **)0x0) {
    FUN_1400020a8(ppuVar9);
  }
  if ((local_48 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443bf0f4 FUN_1443bf0f4 body=619 status=ok
// SIG undefined FUN_1443bf0f4(void)

void FUN_1443bf0f4(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  void *pvVar3;
  char cVar4;
  longlong lVar5;
  ushort uVar6;
  ulonglong uVar7;
  ushort uVar8;
  ulonglong uVar9;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar4 = (**(code **)(*param_1 + 0x18))();
  if (cVar4 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
  }
  plVar1 = param_1 + 0x31;
  iVar2 = (int)param_1[0x32];
  if (iVar2 == (int)param_2[1]) {
    if (1 < iVar2) {
      lVar5 = 0;
      while( true ) {
        uVar6 = *(ushort *)(*plVar1 + lVar5);
        uVar7 = (ulonglong)uVar6;
        uVar8 = *(ushort *)(*param_2 + lVar5);
        if (uVar6 != uVar8) break;
        if (uVar6 == 0) goto LAB_1443bf352;
LAB_1443bf16b:
        lVar5 = lVar5 + 2;
      }
      if ((uVar8 | uVar6) < 0x80) {
        uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
        uVar9 = (ulonglong)uVar8;
        uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
        if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar9]) goto LAB_1443bf16b;
      }
      if (uVar6 != uVar8) goto LAB_1443bf1d0;
    }
  }
  else if ((int)param_2[1] + iVar2 != 1) {
LAB_1443bf1d0:
    (**(code **)(*param_1 + 0x20))(param_1);
    if ((longlong)(int)param_1[0x37] != 0) {
      lVar5 = 0;
      do {
        if ((*(int *)(param_1[0x36] + 8 + lVar5) != 0) &&
           (*(longlong *)(param_1[0x36] + lVar5) != 0)) {
          local_50 = (void *)0x0;
          local_48 = (int)param_1[0x32];
          lVar5 = (longlong)local_48;
          pvVar3 = (void *)param_1[0x31];
          if (lVar5 == 0) {
            local_44 = 0;
          }
          else {
            FUN_1446dd670(&local_50,local_48,0);
            memcpy(local_50,pvVar3,lVar5 * 2);
          }
          if (plVar1 != param_2) {
            iVar2 = (int)param_2[1];
            pvVar3 = (void *)*param_2;
            *(int *)(param_1 + 0x32) = iVar2;
            if (iVar2 == 0 && *(int *)((longlong)param_1 + 0x194) == 0) {
              *(undefined4 *)((longlong)param_1 + 0x194) = 0;
            }
            else {
              FUN_1446dd670(plVar1,iVar2);
              if (iVar2 != 0) {
                memcpy((void *)*plVar1,pvVar3,(longlong)iVar2 * 2);
              }
            }
          }
          FUN_140b9d292(param_1 + 0x36,plVar1,&local_50);
          if (local_50 != (void *)0x0) {
            FUN_1400020a8();
          }
          goto LAB_1443bf32e;
        }
        lVar5 = lVar5 + 0x10;
      } while ((longlong)(int)param_1[0x37] * 0x10 != lVar5);
    }
    if (plVar1 != param_2) {
      iVar2 = (int)param_2[1];
      pvVar3 = (void *)*param_2;
      *(int *)(param_1 + 0x32) = iVar2;
      if (iVar2 == 0 && *(int *)((longlong)param_1 + 0x194) == 0) {
        *(undefined4 *)((longlong)param_1 + 0x194) = 0;
      }
      else {
        FUN_1446dd670(plVar1,iVar2);
        if (iVar2 != 0) {
          memcpy((void *)*plVar1,pvVar3,(longlong)iVar2 * 2);
        }
      }
    }
LAB_1443bf32e:
    FUN_1411f311e(param_1 + 0x33,plVar1);
    if (((int)param_1[2] != 0) && ((longlong *)param_1[1] != (longlong *)0x0)) {
      (**(code **)(*(longlong *)param_1[1] + 0x60))();
    }
  }
LAB_1443bf352:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443bf568 FUN_1443bf568 body=525 status=ok
// SIG undefined FUN_1443bf568(void)

undefined8 FUN_1443bf568(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined2 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined **ppuVar8;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  code *local_a0;
  undefined1 *local_98;
  undefined ***local_90;
  code *local_88;
  code *local_80;
  undefined2 *local_78;
  undefined8 uStack_70;
  undefined **local_68;
  int local_60;
  byte local_50;
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_148fd1d62(param_1,&local_68);
  FUN_145da5dd4(&local_68,&local_78);
  iVar3 = (int)uStack_70;
  puVar2 = local_78;
  local_78 = (undefined2 *)0x0;
  uStack_70 = 0;
  local_68 = &PTR_FUN_14a5af930;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  local_68 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_50])();
  lVar4 = FUN_145a91644();
  if (DAT_14c951858 == 0) {
    local_68 = (undefined **)FUN_1449e2820;
    local_80 = FUN_14081d0ea;
    local_88 = FUN_14081d0ea;
    local_98 = &LAB_1468c5283;
    local_a0 = FUN_142809da0;
    local_a8 = L"Engine";
    local_b0 = 0x400000000;
    local_b8 = 0x10000000;
    local_c0 = 8;
    local_c8 = 0x50;
    local_90 = &local_68;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  lVar5 = *(longlong *)(param_1 + 0x20);
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  else {
    do {
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
         (lVar6 = lVar5,
         *(longlong *)
          (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
         != lVar4 + 0x30)) {
        lVar6 = 0;
      }
    } while ((lVar6 == 0) && (lVar5 = *(longlong *)(lVar5 + 0x20), lVar5 != 0));
  }
  plVar1 = *(longlong **)(*(longlong *)(lVar6 + 0x70) + 0x18);
  (**(code **)(*plVar1 + 0x30))(plVar1,&local_68);
  ppuVar8 = (undefined **)&DAT_149dfb77a;
  if (local_60 != 0) {
    ppuVar8 = local_68;
  }
  puVar7 = &DAT_149dfb77a;
  if (iVar3 != 0) {
    puVar7 = puVar2;
  }
  FUN_140002266(param_2,L"%s, Party (%s)",puVar7,ppuVar8);
  if (local_68 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  if (puVar2 != (undefined2 *)0x0) {
    FUN_1400020a8(puVar2);
  }
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443bf776 FUN_1443bf776 body=262 status=ok
// SIG undefined FUN_1443bf776(void)

void FUN_1443bf776(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_38 [2];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = (**(code **)(*(longlong *)param_1[8] + 0x18))();
  if (cVar2 == '\0') {
    local_48 = 0x80002000;
    cVar2 = FUN_143e6bb8c(param_2 + 0x28,param_1[7],param_1[8],0);
    if (cVar2 != '\0') {
      (**(code **)(*(longlong *)param_1[8] + 0x10))((longlong *)param_1[8],param_1[9]);
      (**(code **)(*(longlong *)param_1[8] + 8))((longlong *)param_1[8],param_1[9]);
      (**(code **)(**(longlong **)(param_1[7] + 0xb8) + 0x60))
                (*(longlong **)(param_1[7] + 0xb8),param_1[9],param_1[8],1);
    }
  }
  bVar3 = *(byte *)(param_1 + 0xf);
  if ((bVar3 & 2) != 0) {
    lVar1 = param_1[0x10];
    if (lVar1 != 0) {
      FUN_140056680(local_38,L"InitialMemberData");
      local_28 = local_38;
      FUN_140c8411c(lVar1 + 0x30);
      if (local_38[0] != 0) {
        FUN_1400020a8();
      }
      bVar3 = *(byte *)(param_1 + 0xf);
    }
    *(byte *)(param_1 + 0xf) = bVar3 & 0xfd;
    if ((bVar3 & 0xfd) == 0) {
      (**(code **)(*param_1 + 0x2a0))(param_1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443bf87e FUN_1443bf87e body=539 status=ok
// SIG undefined FUN_1443bf87e(void)

void FUN_1443bf87e(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  longlong local_58;
  undefined8 uStack_50;
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar10 = param_1[0x10];
  if (lVar10 != 0) {
    param_1[0x10] = 0;
    FUN_1443bfc8a(lVar10);
    FUN_1400020a8(lVar10);
  }
  lVar10 = param_1[0xe];
  local_58 = 0;
  uStack_50 = 0;
  (**(code **)(*(longlong *)param_1[0xc] + 0x18))((longlong *)param_1[0xc],local_48);
  FUN_140056680(local_68,L"prefDisplayName");
  FUN_148fd2b88(lVar10,local_68,local_48);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  cVar4 = FUN_148fd1e76(param_1);
  if (cVar4 != '\0') {
    (**(code **)(*param_1 + 0x2a8))(param_1);
  }
  plVar1 = param_1 + 0x17;
  iVar5 = *(int *)((longlong)param_1 + 0xcc);
  *(int *)((longlong)param_1 + 0xcc) = iVar5 + 1;
  uVar6 = (ulonglong)(int)param_1[0x18];
  if ((longlong)uVar6 < 1) {
    *(int *)((longlong)param_1 + 0xcc) = iVar5;
  }
  else {
    bVar8 = false;
    do {
      lVar10 = uVar6 * 0x10 + -8;
      uVar11 = uVar6;
      while (((*(int *)(*plVar1 + lVar10) != 0 &&
              (plVar2 = *(longlong **)(*plVar1 + -8 + lVar10), plVar2 != (longlong *)0x0)) &&
             (cVar4 = (**(code **)(*plVar2 + 0x60))(), cVar4 != '\0'))) {
        lVar10 = lVar10 + -0x10;
        bVar3 = uVar11 < 2;
        uVar11 = uVar11 - 1;
        if (bVar3) {
          iVar5 = *(int *)((longlong)param_1 + 0xcc) + -1;
          *(int *)((longlong)param_1 + 0xcc) = iVar5;
          if (bVar8) goto LAB_1443bf9cb;
          goto LAB_1443bfa3c;
        }
      }
      uVar6 = uVar11 - 1;
      bVar8 = true;
    } while (1 < uVar11);
    iVar5 = *(int *)((longlong)param_1 + 0xcc) + -1;
    *(int *)((longlong)param_1 + 0xcc) = iVar5;
LAB_1443bf9cb:
    if (iVar5 < 1) {
      iVar5 = (int)param_1[0x18];
      iVar7 = iVar5;
      if (0 < iVar5) {
        iVar9 = 0;
        do {
          if (((*(int *)(*plVar1 + 8 + (longlong)iVar9 * 0x10) == 0) ||
              (plVar2 = *(longlong **)(*plVar1 + (longlong)iVar9 * 0x10), plVar2 == (longlong *)0x0)
              ) || (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
            FUN_14005b288(plVar1,iVar9);
            FUN_14005b248(plVar1);
          }
          else {
            iVar9 = iVar9 + 1;
          }
          iVar7 = (int)param_1[0x18];
        } while (iVar9 < iVar7);
      }
      iVar9 = 2;
      if (2 < iVar7 * 2) {
        iVar9 = iVar7 * 2;
      }
      *(int *)(param_1 + 0x19) = iVar9;
      if ((iVar9 < iVar5) && (*(int *)((longlong)param_1 + 0xc4) != iVar7)) {
        FUN_14045812c(plVar1);
      }
    }
  }
LAB_1443bfa3c:
  FUN_1448a8284(plVar1);
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443bfa9a FUN_1443bfa9a body=232 status=ok
// SIG undefined FUN_1443bfa9a(void)

void FUN_1443bfa9a(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  longlong lVar2;
  char cVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  longlong *local_58;
  undefined **local_50 [3];
  byte local_38;
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_148fcdaa6(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0x70),local_50,0);
  if ((*(byte *)(param_1 + 0xf) & 1) != 0) {
    lVar2 = param_1[0x10];
    if (lVar2 != 0) {
      FUN_1405e6804(local_50,local_68);
      local_58 = local_68;
      FUN_140c8411c(lVar2 + 0x30);
      if (local_68[0] != 0) {
        FUN_1400020a8();
      }
    }
    cVar3 = FUN_1443bfb83(param_1);
    if (cVar3 != '\0') {
      pbVar1 = (byte *)(param_1 + 0xf);
      *pbVar1 = *pbVar1 & 0xfe;
      if (*pbVar1 == 0) {
        (**(code **)(*param_1 + 0x2a0))(param_1);
      }
    }
  }
  local_50[0] = &PTR_FUN_14a5af930;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  local_50[0] = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_38])();
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443bfb83 FUN_1443bfb83 body=261 status=ok
// SIG undefined FUN_1443bfb83(void)

ulonglong FUN_1443bfb83(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  longlong local_88;
  int local_80;
  undefined **local_78;
  undefined1 local_70 [16];
  byte local_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1443bdf63(&local_88,param_1);
  lVar2 = local_88;
  if ((longlong)local_80 == 0) {
    uVar4 = 0;
  }
  else {
    lVar5 = 0;
    do {
      uVar1 = *(undefined8 *)(lVar2 + lVar5);
      FUN_148fd1d62(param_1,&local_78);
      lVar3 = FUN_148fcd00c(uVar1,&local_78);
      local_78 = &PTR_FUN_14a5af930;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      local_78 = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_60])(local_70);
      if ((lVar3 == 0) || (*(char *)(lVar3 + 0x80) == '\0')) {
        uVar4 = 0;
        goto LAB_1443bfc4e;
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)local_80 * 8 != lVar5);
    uVar4 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  }
LAB_1443bfc4e:
  if (local_88 != 0) {
    FUN_1400020a8(local_88);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 1443bfc8a FUN_1443bfc8a body=86 status=ok
// SIG undefined FUN_1443bfc8a(void)

void FUN_1443bfc8a(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  FUN_148fd2f38();
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1443bfce0 FUN_1443bfce0 body=69 status=ok
// SIG undefined FUN_1443bfce0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1443bfce0(void)

{
  _DAT_14cbf5530 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001443bfd22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf5538,1);
  return;
}



// FUNCTION 1443bfd25 FUN_1443bfd25 body=69 status=ok
// SIG undefined FUN_1443bfd25(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1443bfd25(void)

{
  _DAT_14cbf5540 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001443bfd67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf5548,1);
  return;
}



// FUNCTION 1443bfd6a FUN_1443bfd6a body=638 status=ok
// SIG undefined FUN_1443bfd6a(void)

ulonglong FUN_1443bfd6a(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  undefined **ppuVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined ***pppuVar8;
  bool bVar9;
  undefined1 auStack_c8 [32];
  undefined8 **local_a8;
  undefined8 *local_a0;
  int local_98;
  undefined **local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  undefined **local_70;
  uint local_68;
  undefined4 uStack_64;
  byte local_58;
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (1 < *(int *)(param_2 + 8)) {
    if ((&DAT_149fc1b6e)[*(byte *)(param_3 + 0x18)] == '\x01') {
      if ((*(longlong **)(param_3 + 8) != (longlong *)0x0) &&
         (cVar3 = (**(code **)(**(longlong **)(param_3 + 8) + 0x28))(), cVar3 != '\0')) {
LAB_1443bfe04:
        pppuVar8 = &local_70;
        FUN_148fd38a4(param_1,pppuVar8);
        if ((&DAT_149fc1b6e)[local_58] == '\x01') {
          bVar9 = true;
          if (((longlong *)CONCAT44(uStack_64,local_68) != (longlong *)0x0) &&
             (cVar3 = (**(code **)(*(longlong *)CONCAT44(uStack_64,local_68) + 0x28))(),
             cVar3 != '\0')) {
LAB_1443bfe4d:
            ppuVar2 = *(undefined ***)(param_1 + 0x18);
            (**(code **)(**(longlong **)(param_1 + 0x10) + 0x180))();
            local_90 = ppuVar2;
            plVar5 = (longlong *)FUN_1401e3228();
            (**(code **)(*plVar5 + 0x20))(plVar5,&local_80);
            pppuVar8 = &local_90;
            (**(code **)(*local_80 + 0x18))(local_80,pppuVar8,param_2);
            bVar9 = local_90 == (undefined **)0x0;
            if (!bVar9) {
              local_a8 = (undefined8 **)param_4;
              FUN_148fd38f6(&local_a0,param_1,param_2,param_3);
              uVar6 = FUN_14127b0d4(&local_70);
              ppuVar2 = local_90;
              uVar7 = FUN_14127b0d4(&local_70);
              local_a8 = &local_a0;
              uVar4 = (**(code **)(*local_80 + 0x1b0))(local_80,uVar7,ppuVar2,uVar6);
              pppuVar8 = (undefined ***)(ulonglong)uVar4;
              if (local_98 != 0) {
                if (local_a0 == (undefined8 *)0x0) goto LAB_1443bfe9f;
                (**(code **)*local_a0)(local_a0,0);
                FUN_1446efa72(&local_a0,0,0,0x10);
                local_98 = 0;
              }
              if (local_a0 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
            }
LAB_1443bfe9f:
            if (local_88 != (longlong *)0x0) {
              LOCK();
              plVar5 = local_88 + 1;
              *(int *)plVar5 = (int)*plVar5 + -1;
              UNLOCK();
              if ((int)*plVar5 == 0) {
                (**(code **)*local_88)(local_88);
                LOCK();
                piVar1 = (int *)((longlong)local_88 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_88 + 0x10))(local_88);
                }
              }
            }
            if (local_78 != (longlong *)0x0) {
              LOCK();
              plVar5 = local_78 + 1;
              *(int *)plVar5 = (int)*plVar5 + -1;
              UNLOCK();
              if ((int)*plVar5 == 0) {
                (**(code **)*local_78)(local_78);
                LOCK();
                piVar1 = (int *)((longlong)local_78 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_78 + 0x10))(local_78);
                }
              }
            }
          }
        }
        else {
          if ((local_68 & 0xffffff) != 0) goto LAB_1443bfe4d;
          bVar9 = true;
        }
        local_70 = &PTR_FUN_14a5af930;
        if (local_50 != 0) {
          FUN_1400020a8();
        }
        local_70 = &PTR_FUN_14a184370;
        (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_58])(&local_68);
        if (!bVar9) goto LAB_1443bfdd2;
      }
    }
    else if ((*(uint *)(param_3 + 8) & 0xffffff) != 0) goto LAB_1443bfe04;
  }
  pppuVar8 = (undefined ***)0x0;
LAB_1443bfdd2:
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)pppuVar8 & 0xffffff01;
}



// FUNCTION 1443bffea FUN_1443bffea body=205 status=ok
// SIG undefined FUN_1443bffea(void)

void FUN_1443bffea(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined **local_58 [3];
  byte local_40;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(*(longlong *)(param_1 + 0x10) + 0xb0) < 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = **(undefined8 **)(*(longlong *)(param_1 + 0x10) + 0xa8);
  }
  lVar1 = FUN_148fcd00c(uVar2,param_2 + 0x20);
  if (lVar1 != 0) {
    FUN_148fcdaa6(lVar1,local_58,1);
    FUN_1443bfd6a(param_1,param_2 + 0x10,local_58,param_3);
    local_58[0] = &PTR_FUN_14a5af930;
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    local_58[0] = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_40])();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443c00b8 FUN_1443c00b8 body=609 status=ok
// SIG undefined FUN_1443c00b8(void)

void FUN_1443c00b8(longlong param_1,undefined4 param_2,char param_3,longlong param_4,
                  longlong *param_5,undefined8 *param_6,longlong *param_7)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined1 local_68 [8];
  undefined8 *local_60;
  int local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_3 == '\0') || (*(longlong **)(param_4 + 0x100) == (longlong *)0x0)) {
LAB_1443c0131:
    plVar4 = (longlong *)FUN_140a68038(1);
    if (plVar4 == (longlong *)0x0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      (**(code **)(*plVar4 + 0x10))(plVar4,&local_50);
      plVar4 = local_50;
    }
    if (plVar4 == DAT_14cb8e208) {
      puVar2 = *(undefined8 **)(param_1 + 0x18);
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x180))();
      local_60 = puVar2;
      plVar4 = (longlong *)FUN_1401e3228();
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_50);
      plVar4 = local_50;
      local_78 = param_7;
      FUN_148fd3a88(&local_60,param_1,param_5,param_6);
      (**(code **)(*plVar4 + 0x2f0))(plVar4,local_68,param_2,&local_60);
      if (local_58 == 0) {
LAB_1443c02a6:
        if (local_60 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_60 != (undefined8 *)0x0) {
        (**(code **)*local_60)(local_60,0);
        FUN_1446efa72(&local_60,0,0,0x10);
        local_58 = 0;
        goto LAB_1443c02a6;
      }
      uVar5 = FUN_14127b0d4(param_6);
      (**(code **)(*local_50 + 0x2e8))(local_50,param_2,uVar5);
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
    }
  }
  else {
    cVar3 = (**(code **)(**(longlong **)(param_4 + 0x100) + 0x20))();
    if (cVar3 == '\0') goto LAB_1443c0131;
    plVar4 = (longlong *)*param_7;
    if (plVar4 != (longlong *)0x0 && (int)param_7[1] != 0) {
      (**(code **)(*plVar4 + 0x60))(plVar4,1,param_4);
    }
  }
  if (*param_5 != 0) {
    FUN_1400020a8();
  }
  *param_6 = &PTR_FUN_14a5af930;
  if (param_6[4] != 0) {
    FUN_1400020a8();
  }
  *param_6 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(param_6 + 3)])(param_6 + 1);
  if ((int)param_7[1] != 0) {
    puVar2 = (undefined8 *)*param_7;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1443c01e2;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(param_7,0,0,0x10);
    *(undefined4 *)(param_7 + 1) = 0;
  }
  if (*param_7 != 0) {
    FUN_1400020a8();
  }
LAB_1443c01e2:
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443c031a FUN_1443c031a body=647 status=ok
// SIG undefined FUN_1443c031a(void)

void FUN_1443c031a(longlong param_1,undefined4 param_2,undefined4 param_3,longlong *param_4,
                  longlong *param_5,undefined8 *param_6,longlong *param_7)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined **local_160;
  longlong *local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_188;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x180))();
  local_168 = uVar3;
  plVar6 = (longlong *)FUN_1401e3228();
  (**(code **)(*plVar6 + 0x20))(plVar6,&local_160);
  (**(code **)(*local_160 + 0x300))(local_160,param_2,param_1);
  plVar6 = local_158;
  if (local_158 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_158 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_158)(local_158);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (((char)param_3 == '\0') || ((int)param_4[1] < 1)) {
    local_160 = &PTR_FUN_14b4c3b18;
    local_158 = (longlong *)0x0;
    uStack_150 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_138 = &PTR_FUN_14b4c3b20;
    local_130 = 0;
    uStack_128 = 0;
    local_120 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_108 = FUN_1414a827a();
    local_e0 = 0;
    local_d8 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    local_d4 = 0xffffffff00000080;
    local_cc = 0;
    local_c0 = 0;
    local_b8 = 0;
    local_90 = 0;
    local_88 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_84 = 0xffffffff00000080;
    local_7c = 0;
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    local_48 = 9999;
  }
  else {
    lVar5 = *param_4;
    FUN_14589e2aa(&local_160,lVar5);
    local_48 = *(undefined4 *)(lVar5 + 0x118);
  }
  plVar6 = (longlong *)*param_7;
  if (plVar6 != (longlong *)0x0 && (int)param_7[1] != 0) {
    (**(code **)(*plVar6 + 0x60))(plVar6,param_3,&local_160);
  }
  FUN_14124efea(&local_160);
  if (*param_5 != 0) {
    FUN_1400020a8();
  }
  *param_6 = &PTR_FUN_14a5af930;
  if (param_6[4] != 0) {
    FUN_1400020a8();
  }
  *param_6 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(param_6 + 3)])(param_6 + 1);
  if ((int)param_7[1] != 0) {
    puVar4 = (undefined8 *)*param_7;
    if (puVar4 == (undefined8 *)0x0) goto LAB_1443c0550;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(param_7,0,0,0x10);
    *(undefined4 *)(param_7 + 1) = 0;
  }
  if (*param_7 != 0) {
    FUN_1400020a8();
  }
LAB_1443c0550:
  if ((local_40 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443c05a2 FUN_1443c05a2 body=741 status=ok
// SIG undefined FUN_1443c05a2(void)

void FUN_1443c05a2(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x44) == 0) {
LAB_1443c0852:
    lVar4 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x40);
    lVar4 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar3 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar3 == (longlong *)0x0) ||
         (((int)plVar3[2] != *(int *)(param_1 + 0x44) || ((*(uint *)(plVar3 + 1) & 0x10200000) != 0)
          ))) goto LAB_1443c0852;
      lVar4 = *plVar3;
    }
  }
  FUN_148fecb54(&local_38,param_1);
  FUN_148fe9d4e(lVar4 + 0x2a8,local_40,&local_38);
  if (local_30 == 0) {
LAB_1443c066f:
    if (local_38 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)(local_38,0);
    FUN_1446efa72(&local_38,0,0,0x10);
    local_30 = 0;
    goto LAB_1443c066f;
  }
  FUN_148fed112(&local_38,param_1);
  FUN_148fed02a(lVar4 + 0x2d8,local_40,&local_38);
  if (local_30 == 0) {
LAB_1443c06db:
    if (local_38 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)(local_38,0);
    FUN_1446efa72(&local_38,0,0,0x10);
    local_30 = 0;
    goto LAB_1443c06db;
  }
  lVar2 = *(longlong *)(lVar4 + 0x40);
  FUN_148fed5f6(&local_38,param_1);
  FUN_1448b6402(lVar2 + 0x68,local_40,&local_38);
  if (local_30 == 0) {
LAB_1443c0748:
    if (local_38 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)(local_38,0);
    FUN_1446efa72(&local_38,0,0,0x10);
    local_30 = 0;
    goto LAB_1443c0748;
  }
  FUN_148fedac8(&local_38,param_1);
  FUN_148fe99d8(lVar4 + 0x278,local_40,&local_38);
  if (local_30 == 0) {
LAB_1443c07b4:
    if (local_38 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)(local_38,0);
    FUN_1446efa72(&local_38,0,0,0x10);
    local_30 = 0;
    goto LAB_1443c07b4;
  }
  FUN_148fee086(&local_38,param_1);
  FUN_148fedf9e(lVar4 + 0x2c0,local_40,&local_38);
  if (local_30 != 0) {
    if (local_38 == (undefined8 *)0x0) goto LAB_1443c0829;
    (**(code **)*local_38)(local_38,0);
    FUN_1446efa72(&local_38,0,0,0x10);
    local_30 = 0;
  }
  if (local_38 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1443c0829:
  FUN_1443c0bf6(param_1);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443c0888 FUN_1443c0888 body=314 status=ok
// SIG undefined FUN_1443c0888(void)

void FUN_1443c0888(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  int local_30;
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined1 *)(param_1 + 0x88) = 2;
  puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x30) + 0x18);
  (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x30) + 0x10) + 0x180))();
  local_38 = puVar2;
  plVar3 = (longlong *)FUN_1401e3228();
  (**(code **)(*plVar3 + 0x20))(plVar3,&local_28);
  (**(code **)(*local_28 + 0x418))(local_28,param_1);
  FUN_148fd462a(&local_38,param_1,&LAB_1443c2dea);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  (**(code **)(*local_28 + 0xe8))(local_28,DAT_14c892fc0,&local_38);
  if (local_30 != 0) {
    if (local_38 == (undefined8 *)0x0) goto LAB_1443c0977;
    (**(code **)*local_38)(local_38,0);
    FUN_1446efa72(&local_38,0,0,0x10);
    local_30 = 0;
  }
  if (local_38 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1443c0977:
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_20 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443c09c4 FUN_1443c09c4 body=235 status=ok
// SIG undefined FUN_1443c09c4(void)

void FUN_1443c09c4(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((param_1[0x12] != 0) && (param_1[0x13] != 0)) && (0 < *(int *)(param_1[0x13] + 8))) {
    FUN_1401cb356();
    local_20 = param_1[0x12];
    local_18 = param_1[0x13];
    if (local_18 != 0) {
      LOCK();
      *(int *)(local_18 + 0xc) = *(int *)(local_18 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_20);
    plVar3 = (longlong *)param_1[0x13];
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
  }
  *(undefined1 *)(param_1 + 0x11) = 3;
  local_28 = param_1[1];
  if (local_28 == 0) {
    local_28 = 0;
    local_30 = 0;
  }
  else {
    iVar4 = *(int *)(local_28 + 8);
    local_30 = 0;
    do {
      if (iVar4 == 0) {
        local_28 = 0;
        goto LAB_1443c0a7b;
      }
      LOCK();
      iVar2 = *(int *)(local_28 + 8);
      bVar5 = iVar4 == iVar2;
      if (bVar5) {
        *(int *)(local_28 + 8) = iVar4 + 1;
        iVar2 = iVar4;
      }
      iVar4 = iVar2;
      UNLOCK();
    } while (!bVar5);
    local_30 = *param_1;
  }
LAB_1443c0a7b:
  FUN_148fd4248(param_1 + 4);
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443c0ab0 FUN_1443c0ab0 body=326 status=ok
// SIG undefined FUN_1443c0ab0(void)

void FUN_1443c0ab0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  if (*(char *)(param_1 + 0x88) == '\0') {
    FUN_1443c0888(param_1);
  }
  plVar3 = *(longlong **)(param_1 + 0x98);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  if (*(int *)(param_1 + 0x6c) != -1) {
    if (*(longlong *)(param_1 + 0x60) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0xffffffff00000000;
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x38);
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
  plVar3 = (longlong *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x28) == 0) {
LAB_1443c0b81:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 0x28) = 0;
      goto LAB_1443c0b81;
    }
  }
  plVar3 = (longlong *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x18) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_1443c0bc4;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_1443c0bc4:
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001443c0bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1443c0bf6 FUN_1443c0bf6 body=2031 status=ok
// SIG undefined FUN_1443c0bf6(void)

void FUN_1443c0bf6(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char cVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong lVar13;
  ushort uVar14;
  ulonglong uVar15;
  ushort uVar16;
  ulonglong uVar17;
  longlong lVar18;
  bool bVar19;
  undefined1 auStack_198 [40];
  undefined **local_170;
  int local_168;
  longlong *local_160;
  longlong *local_158;
  undefined1 local_150 [8];
  undefined8 *local_148;
  int local_140;
  longlong *local_138;
  longlong *local_130;
  undefined **local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (((((*(int *)(param_1 + 0x44) == 0) || (uVar2 = *(uint *)(param_1 + 0x40), (int)uVar2 < 0)) ||
       (DAT_14c9647dc <= (int)uVar2)) ||
      ((lVar13 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar13 == 0 ||
       (*(int *)(lVar13 + 0x10) != *(int *)(param_1 + 0x44))))) ||
     (((*(uint *)(lVar13 + 8) & 0x10200000) != 0 || (1 < *(int *)(param_1 + 0x58)))))
  goto LAB_1443c0c69;
  ppuVar9 = *(undefined ***)(*(longlong *)(param_1 + 0x30) + 0x18);
  (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x30) + 0x10) + 0x180))();
  local_128 = ppuVar9;
  plVar7 = (longlong *)FUN_1401e3228();
  (**(code **)(*plVar7 + 0x20))(plVar7,&local_160);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  lVar13 = (**(code **)(*local_160 + 0x20))(local_160,DAT_14c892fc0);
  if (lVar13 == 0) {
    lVar13 = FUN_148fd3f20(param_1);
    if (lVar13 != 0) {
      if (*(int *)(lVar13 + 0x18) < 2) {
        if (*(int *)(param_1 + 0x44) == 0) {
LAB_1443c1265:
          uVar10 = 0;
        }
        else {
          uVar2 = *(uint *)(param_1 + 0x40);
          uVar10 = 0;
          if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
            puVar11 = (undefined8 *)
                      ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
            if ((puVar11 == (undefined8 *)0x0) ||
               ((*(int *)(puVar11 + 2) != *(int *)(param_1 + 0x44) ||
                ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)))) goto LAB_1443c1265;
            uVar10 = *puVar11;
          }
        }
        FUN_148fce6f6(uVar10,&local_170);
        ppuVar9 = local_170;
        if ((longlong)local_168 != 0) {
          lVar18 = 0;
          do {
            lVar8 = *(longlong *)((longlong)ppuVar9 + lVar18);
            cVar6 = FUN_148fd1e76(lVar8);
            if ((cVar6 != '\0') && (cVar6 = FUN_148fd411c(lVar13,lVar8), cVar6 != '\0')) {
              if (((*(char *)(param_1 + 0x88) == '\0') &&
                  (((*(int *)(param_1 + 0x44) != 0 &&
                    (uVar2 = *(uint *)(param_1 + 0x40), -1 < (int)uVar2)) &&
                   ((int)uVar2 < DAT_14c9647dc)))) &&
                 (((lVar13 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8),
                   lVar13 != 0 && (*(int *)(lVar13 + 0x10) == *(int *)(param_1 + 0x44))) &&
                  (lVar18 = *(longlong *)(lVar8 + 0x40), (*(uint *)(lVar13 + 8) & 0x10200000) == 0))
                 )) {
                local_128 = &PTR_FUN_14b4c3b20;
                local_120 = 0;
                uStack_118 = 0;
                local_110 = 0;
                local_108 = 0;
                uStack_100 = 0;
                local_f8 = FUN_1414a827a();
                local_d0 = 0;
                local_c8 = 0;
                local_f0 = 0;
                uStack_e8 = 0;
                local_c4 = 0xffffffff00000080;
                local_bc = 0;
                local_b0 = 0;
                local_a8 = 0;
                local_80 = 0;
                local_78 = 0;
                local_a0 = 0;
                uStack_98 = 0;
                local_74 = 0xffffffff00000080;
                local_6c = 0;
                local_60 = 0;
                local_58 = 0;
                if ((&DAT_149fc1b6e)[*(byte *)(lVar18 + 0x98)] == '\x01') {
                  if ((*(longlong **)(lVar18 + 0x88) != (longlong *)0x0) &&
                     (cVar6 = (**(code **)(**(longlong **)(lVar18 + 0x88) + 0x28))(), cVar6 != '\0')
                     ) {
LAB_1443c1297:
                    cVar6 = FUN_148fd42d6(param_1,&local_128);
                    if (cVar6 != '\0') {
                      FUN_1443c1bde(param_1 + 0x78,DAT_14cbf5560);
                      puVar11 = *(undefined8 **)(*(longlong *)(param_1 + 0x30) + 0x18);
                      (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x30) + 0x10) + 0x180))()
                      ;
                      local_148 = puVar11;
                      plVar7 = (longlong *)FUN_1401e3228();
                      (**(code **)(*plVar7 + 0x20))(plVar7,&local_138);
                      plVar7 = local_138;
                      FUN_148fd462a(&local_148,param_1,FUN_1443c1c90);
                      (**(code **)(*plVar7 + 0x50))(plVar7,local_150,&local_148);
                      if (local_140 == 0) {
LAB_1443c134e:
                        if (local_148 != (undefined8 *)0x0) {
                          FUN_1400020a8();
                        }
                      }
                      else if (local_148 != (undefined8 *)0x0) {
                        (**(code **)*local_148)(local_148,0);
                        FUN_1446efa72(&local_148,0,0,0x10);
                        local_140 = 0;
                        goto LAB_1443c134e;
                      }
                      if (DAT_14c87ead8 == '\0') {
                        FUN_140024d3a(&DAT_14c87eb00);
                        DAT_14c87ead8 = '\x01';
                      }
                      uVar5 = DAT_14c892fc0;
                      uVar10 = FUN_14127b0d4(lVar18 + 0x80);
                      (**(code **)(*local_138 + 0x40))(local_138,uVar10,uVar5,&local_128);
                      if (local_130 != (longlong *)0x0) {
                        LOCK();
                        plVar7 = local_130 + 1;
                        *(int *)plVar7 = (int)*plVar7 + -1;
                        UNLOCK();
                        if ((int)*plVar7 == 0) {
                          (**(code **)*local_130)(local_130);
                          LOCK();
                          piVar1 = (int *)((longlong)local_130 + 0xc);
                          *piVar1 = *piVar1 + -1;
                          UNLOCK();
                          if (*piVar1 == 0) {
                            (**(code **)(*local_130 + 0x10))(local_130);
                          }
                        }
                      }
                    }
                  }
                }
                else if ((*(uint *)(lVar18 + 0x88) & 0xffffff) != 0) goto LAB_1443c1297;
                FUN_14124f074(&local_128);
              }
              break;
            }
            lVar18 = lVar18 + 8;
          } while ((longlong)local_168 * 8 != lVar18);
        }
        goto LAB_1443c100a;
      }
      if (*(int *)(param_1 + 0x44) == 0) {
LAB_1443c126c:
        uVar10 = 0;
      }
      else {
        uVar2 = *(uint *)(param_1 + 0x40);
        uVar10 = 0;
        if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
          puVar11 = (undefined8 *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if ((puVar11 == (undefined8 *)0x0) ||
             ((*(int *)(puVar11 + 2) != *(int *)(param_1 + 0x44) ||
              ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)))) goto LAB_1443c126c;
          uVar10 = *puVar11;
        }
      }
      plVar7 = (longlong *)(lVar13 + 0x10);
      FUN_148fce6f6(uVar10,&local_128);
      if ((longlong)(int)local_120 == 0) {
        bVar19 = true;
      }
      else {
        iVar3 = *(int *)(lVar13 + 0x18);
        ppuVar9 = local_128;
        do {
          iVar4 = *(int *)(*(longlong *)(*ppuVar9 + 0x40) + 0xb8);
          if (iVar4 == iVar3) {
            if (1 < iVar3) {
              lVar18 = 0;
              while( true ) {
                uVar14 = *(ushort *)(*(longlong *)(*(longlong *)(*ppuVar9 + 0x40) + 0xb0) + lVar18);
                uVar15 = (ulonglong)uVar14;
                uVar16 = *(ushort *)(*plVar7 + lVar18);
                if (uVar14 != uVar16) break;
                if (uVar14 == 0) goto LAB_1443c1161;
LAB_1443c112a:
                lVar18 = lVar18 + 2;
              }
              if ((uVar16 | uVar14) < 0x80) {
                uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
                uVar17 = (ulonglong)uVar16;
                uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
                if ((&DAT_149e05da0)[uVar15] == (&DAT_149e05da0)[uVar17]) goto LAB_1443c112a;
              }
              if (uVar14 != uVar16) goto LAB_1443c11cc;
            }
LAB_1443c1161:
            if (*(int *)(param_1 + 0x6c) == -1) goto LAB_1443c11db;
            if (*(int *)(param_1 + 0x68) == iVar3) {
              if (1 < iVar3) {
                lVar18 = 0;
                while( true ) {
                  uVar14 = *(ushort *)(*(longlong *)(param_1 + 0x60) + lVar18);
                  uVar15 = (ulonglong)uVar14;
                  uVar16 = *(ushort *)(*plVar7 + lVar18);
                  if (uVar14 != uVar16) break;
                  if (uVar14 == 0) goto LAB_1443c11cc;
LAB_1443c1195:
                  lVar18 = lVar18 + 2;
                }
                if ((uVar16 | uVar14) < 0x80) {
                  uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
                  uVar17 = (ulonglong)uVar16;
                  uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
                  if ((&DAT_149e05da0)[uVar15] == (&DAT_149e05da0)[uVar17]) goto LAB_1443c1195;
                }
                if (uVar14 != uVar16) goto LAB_1443c11db;
              }
            }
            else if (*(int *)(param_1 + 0x68) + iVar3 != 1) goto LAB_1443c11db;
          }
          else if (iVar4 + iVar3 == 1) goto LAB_1443c1161;
LAB_1443c11cc:
          ppuVar9 = ppuVar9 + 1;
        } while (ppuVar9 != local_128 + (int)local_120);
        ppuVar9 = (undefined **)0x0;
LAB_1443c11db:
        bVar19 = ppuVar9 == (undefined **)0x0;
      }
      if (local_128 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      if (bVar19) {
        if (*(int *)(param_1 + 0x44) == 0) {
LAB_1443c1273:
          plVar12 = (longlong *)0x0;
        }
        else {
          uVar2 = *(uint *)(param_1 + 0x40);
          plVar12 = (longlong *)0x0;
          if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
            puVar11 = (undefined8 *)
                      ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
            if ((puVar11 == (undefined8 *)0x0) ||
               ((*(int *)(puVar11 + 2) != *(int *)(param_1 + 0x44) ||
                ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)))) goto LAB_1443c1273;
            plVar12 = (longlong *)*puVar11;
          }
        }
        cVar6 = (**(code **)(*plVar12 + 0x2b8))(plVar12,plVar7);
        if (cVar6 == '\0') goto LAB_1443c1014;
      }
      FUN_148fd407c(param_1,lVar13);
    }
  }
  else {
    if (*(int *)(param_1 + 0x44) == 0) {
LAB_1443c11e4:
      lVar18 = 0;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x40);
      lVar18 = 0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        plVar7 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((plVar7 == (longlong *)0x0) ||
           (((int)plVar7[2] != *(int *)(param_1 + 0x44) ||
            ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)))) goto LAB_1443c11e4;
        lVar18 = *plVar7;
      }
    }
    lVar8 = FUN_148fd8170(lVar18,lVar18 + 0x80);
    lVar18 = *(longlong *)(lVar8 + 0x40);
    FUN_141551f14(lVar13);
    iVar3 = *(int *)(lVar18 + 0xb8);
    local_170 = local_128;
    if (iVar3 == (int)local_120) {
      if (1 < iVar3) {
        lVar13 = 0;
        while( true ) {
          uVar14 = *(ushort *)(*(longlong *)(lVar18 + 0xb0) + lVar13);
          uVar15 = (ulonglong)uVar14;
          uVar16 = *(ushort *)((longlong)local_128 + lVar13);
          if (uVar14 != uVar16) break;
          if (uVar14 == 0) goto LAB_1443c100a;
LAB_1443c0fd0:
          lVar13 = lVar13 + 2;
        }
        if ((uVar16 | uVar14) < 0x80) {
          uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
          uVar17 = (ulonglong)uVar16;
          uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
          if ((&DAT_149e05da0)[uVar15] == (&DAT_149e05da0)[uVar17]) goto LAB_1443c0fd0;
        }
        if (uVar14 != uVar16) goto LAB_1443c104c;
      }
    }
    else if ((int)local_120 + iVar3 != 1) {
LAB_1443c104c:
      cVar6 = FUN_148fd3dec(param_1);
      local_170 = local_128;
      if (cVar6 != '\0') {
        FUN_1443c13e6(*(undefined8 *)(lVar8 + 0x40),&local_128);
        local_170 = local_128;
      }
    }
LAB_1443c100a:
    if (local_170 != (undefined **)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1443c1014:
  if (local_158 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_158 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_158)(local_158);
      LOCK();
      piVar1 = (int *)((longlong)local_158 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_158 + 0x10))(local_158);
      }
    }
  }
LAB_1443c0c69:
  if ((local_50 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443c13e6 FUN_1443c13e6 body=619 status=ok
// SIG undefined FUN_1443c13e6(void)

void FUN_1443c13e6(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  void *pvVar3;
  char cVar4;
  longlong lVar5;
  ushort uVar6;
  ulonglong uVar7;
  ushort uVar8;
  ulonglong uVar9;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar4 = (**(code **)(*param_1 + 0x18))();
  if (cVar4 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
  }
  plVar1 = param_1 + 0x16;
  iVar2 = (int)param_1[0x17];
  if (iVar2 == (int)param_2[1]) {
    if (1 < iVar2) {
      lVar5 = 0;
      while( true ) {
        uVar6 = *(ushort *)(*plVar1 + lVar5);
        uVar7 = (ulonglong)uVar6;
        uVar8 = *(ushort *)(*param_2 + lVar5);
        if (uVar6 != uVar8) break;
        if (uVar6 == 0) goto LAB_1443c1644;
LAB_1443c145d:
        lVar5 = lVar5 + 2;
      }
      if ((uVar8 | uVar6) < 0x80) {
        uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
        uVar9 = (ulonglong)uVar8;
        uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
        if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar9]) goto LAB_1443c145d;
      }
      if (uVar6 != uVar8) goto LAB_1443c14c2;
    }
  }
  else if ((int)param_2[1] + iVar2 != 1) {
LAB_1443c14c2:
    (**(code **)(*param_1 + 0x20))(param_1);
    if ((longlong)(int)param_1[0x28] != 0) {
      lVar5 = 0;
      do {
        if ((*(int *)(param_1[0x27] + 8 + lVar5) != 0) &&
           (*(longlong *)(param_1[0x27] + lVar5) != 0)) {
          local_50 = (void *)0x0;
          local_48 = (int)param_1[0x17];
          lVar5 = (longlong)local_48;
          pvVar3 = (void *)param_1[0x16];
          if (lVar5 == 0) {
            local_44 = 0;
          }
          else {
            FUN_1446dd670(&local_50,local_48,0);
            memcpy(local_50,pvVar3,lVar5 * 2);
          }
          if (plVar1 != param_2) {
            iVar2 = (int)param_2[1];
            pvVar3 = (void *)*param_2;
            *(int *)(param_1 + 0x17) = iVar2;
            if (iVar2 == 0 && *(int *)((longlong)param_1 + 0xbc) == 0) {
              *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
            }
            else {
              FUN_1446dd670(plVar1,iVar2);
              if (iVar2 != 0) {
                memcpy((void *)*plVar1,pvVar3,(longlong)iVar2 * 2);
              }
            }
          }
          FUN_140b9d292(param_1 + 0x27,plVar1,&local_50);
          if (local_50 != (void *)0x0) {
            FUN_1400020a8();
          }
          goto LAB_1443c1620;
        }
        lVar5 = lVar5 + 0x10;
      } while ((longlong)(int)param_1[0x28] * 0x10 != lVar5);
    }
    if (plVar1 != param_2) {
      iVar2 = (int)param_2[1];
      pvVar3 = (void *)*param_2;
      *(int *)(param_1 + 0x17) = iVar2;
      if (iVar2 == 0 && *(int *)((longlong)param_1 + 0xbc) == 0) {
        *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
      }
      else {
        FUN_1446dd670(plVar1,iVar2);
        if (iVar2 != 0) {
          memcpy((void *)*plVar1,pvVar3,(longlong)iVar2 * 2);
        }
      }
    }
LAB_1443c1620:
    FUN_1411f311e(param_1 + 0x24,plVar1);
    if (((int)param_1[2] != 0) && ((longlong *)param_1[1] != (longlong *)0x0)) {
      (**(code **)(*(longlong *)param_1[1] + 0x60))();
    }
  }
LAB_1443c1644:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443c166c FUN_1443c166c body=61 status=ok
// SIG undefined FUN_1443c166c(void)

void FUN_1443c166c(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = FUN_148fd3dec();
  FUN_1443c0bf6(param_1);
  if (cVar1 == '\0') {
    cVar1 = FUN_148fd3dec(param_1);
    if (cVar1 != '\0') {
      FUN_1443c2df0(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1443c1712 FUN_1443c1712 body=1226 status=ok
// SIG undefined FUN_1443c1712(void)

void FUN_1443c1712(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  int local_c0;
  longlong *local_b8;
  longlong *local_b0;
  undefined **local_a8;
  longlong *local_a0 [2];
  byte local_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined **local_78;
  uint local_70;
  undefined4 uStack_6c;
  byte local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_a8 = &PTR_FUN_14a184370;
  local_90 = *(byte *)(*(longlong *)(param_2 + 0x40) + 0x98);
  (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[local_90])
            (local_a0,*(longlong *)(param_2 + 0x40) + 0x88);
  local_a8 = &PTR_FUN_14a5af930;
  local_88 = 0;
  uStack_80 = 0;
  if (((&DAT_149fc1b6e)[local_90] == '\x01') && (local_a0[0] != (longlong *)0x0)) {
    (**(code **)(*local_a0[0] + 0x28))();
  }
  plVar6 = (longlong *)FUN_140a68038(1);
  if (plVar6 == (longlong *)0x0) {
    ppuVar7 = (undefined **)0x0;
  }
  else {
    (**(code **)(*plVar6 + 0x10))(plVar6,&local_78);
    ppuVar7 = local_78;
  }
  if ((ppuVar7 == DAT_14cb8e208) &&
     (FUN_140b6e8c2(*(longlong *)(param_2 + 0x40) + 0x80,&local_78), local_78 == DAT_14cb8e208)) {
    plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0x18);
    (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x30) + 0x10) + 0x180))();
    local_b8 = plVar6;
    plVar6 = (longlong *)FUN_1401e3228();
    (**(code **)(*plVar6 + 0x20))(plVar6,&local_78);
    ppuVar7 = local_78;
    uVar8 = FUN_14127b0d4(*(longlong *)(param_2 + 0x40) + 0x80);
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    (**(code **)(*ppuVar7 + 0x3c0))(ppuVar7,DAT_14c892fc0,uVar8);
    plVar6 = (longlong *)CONCAT44(uStack_6c,local_70);
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
  }
  cVar5 = FUN_148fd1e76(param_2);
  if (((((cVar5 == '\0') || (*(int *)(param_1 + 0x44) == 0)) ||
       (uVar3 = *(uint *)(param_1 + 0x40), (int)uVar3 < 0)) ||
      ((DAT_14c9647dc <= (int)uVar3 ||
       (plVar6 = (longlong *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       plVar6 == (longlong *)0x0)))) ||
     (((int)plVar6[2] != *(int *)(param_1 + 0x44) || ((*(uint *)(plVar6 + 1) & 0x10200000) != 0))))
  goto LAB_1443c1b5f;
  if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
    lVar9 = *plVar6;
  }
  else {
    lVar9 = 0;
  }
  if (*(char *)(lVar9 + 0x226) != '\0') goto LAB_1443c1b5f;
  ppuVar7 = *(undefined ***)(*(longlong *)(param_1 + 0x30) + 0x18);
  (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x30) + 0x10) + 0x180))();
  local_78 = ppuVar7;
  plVar6 = (longlong *)FUN_1401e3228();
  (**(code **)(*plVar6 + 0x20))(plVar6,&local_b8);
  plVar6 = local_b8;
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  lVar9 = (**(code **)(*plVar6 + 0x20))(plVar6,DAT_14c892fc0);
  if (lVar9 != 0) {
    local_78 = &PTR_FUN_14a184370;
    local_60 = *(byte *)(*(longlong *)(param_2 + 0x40) + 0x98);
    (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[local_60])
              (&local_70,*(longlong *)(param_2 + 0x40) + 0x88);
    local_78 = &PTR_FUN_14a5af930;
    local_58 = 0;
    uStack_50 = 0;
    if ((&DAT_149fc1b6e)[local_60] == '\x01') {
      if (((longlong *)CONCAT44(uStack_6c,local_70) != (longlong *)0x0) &&
         (cVar5 = (**(code **)(*(longlong *)CONCAT44(uStack_6c,local_70) + 0x28))(), cVar5 != '\0'))
      {
LAB_1443c19fc:
        plVar6 = local_b8;
        uVar8 = FUN_14127b0d4(&local_78);
        (**(code **)(*plVar6 + 0x3c0))(plVar6,*(undefined8 *)(lVar9 + 0x118),uVar8);
        plVar6 = local_b8;
        local_c8 = (undefined8 *)0x0;
        local_c0 = 0;
        FUN_1446efa72(&local_c8,0,2,0x10);
        local_c0 = 2;
        *local_c8 = &PTR_LAB_14b438700;
        LOCK();
        UNLOCK();
        lVar11 = DAT_14c758608 + 1;
        lVar4 = DAT_14c758608 + 1;
        if (lVar11 == 0) {
          LOCK();
          UNLOCK();
          lVar11 = DAT_14c758608 + 2;
          lVar4 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar4;
        local_c8[2] = lVar11;
        *local_c8 = &PTR_FUN_14ba5c5b0;
        uVar8 = *(undefined8 *)(lVar9 + 0x118);
        uVar10 = FUN_14127b0d4(&local_78);
        (**(code **)(*plVar6 + 0x3f8))(plVar6,uVar10,uVar8,&local_c8);
        if (local_c0 != 0) {
          if (local_c8 == (undefined8 *)0x0) goto LAB_1443c1b07;
          (**(code **)*local_c8)(local_c8,0);
          FUN_1446efa72(&local_c8,0,0,0x10);
          local_c0 = 0;
        }
        if (local_c8 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
    else if ((local_70 & 0xffffff) != 0) goto LAB_1443c19fc;
LAB_1443c1b07:
    local_78 = &PTR_FUN_14a5af930;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    local_78 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_60])(&local_70);
  }
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_b0 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar2 = (int *)((longlong)local_b0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_b0 + 0x10))(local_b0);
      }
    }
  }
LAB_1443c1b5f:
  local_a8 = &PTR_FUN_14a5af930;
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  local_a8 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_90])(local_a0);
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443c1bde FUN_1443c1bde body=176 status=ok
// SIG undefined FUN_1443c1bde(void)

void FUN_1443c1bde(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  uint uVar4;
  undefined1 auStack_68 [32];
  LARGE_INTEGER local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  QueryPerformanceCounter(&local_48);
  dVar3 = DAT_14c83f420;
  lVar2 = param_1[1];
  uVar4 = (int)lVar2 + 1;
  *(uint *)(param_1 + 1) = uVar4;
  if (*(uint *)((longlong)param_1 + 0xc) < uVar4) {
    FUN_149005a96(param_1);
  }
  lVar1 = *param_1;
  lVar2 = (longlong)(int)lVar2 * 0x18;
  *(undefined8 *)(lVar1 + lVar2) = 0;
  *(double *)(lVar1 + 8 + lVar2) = (double)local_48.QuadPart * dVar3 + 16777216.0;
  *(undefined8 *)(lVar1 + 0x10 + lVar2) = 0;
  *(undefined8 *)(*param_1 + lVar2) = param_2;
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443c1c90 FUN_1443c1c90 body=1060 status=ok
// SIG undefined FUN_1443c1c90(void)

void FUN_1443c1c90(longlong param_1,undefined8 param_2,char param_3)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 *local_70;
  int local_68;
  undefined8 *local_60;
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar7 = *(undefined8 **)(*(longlong *)(param_1 + 0x30) + 0x18);
  (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x30) + 0x10) + 0x180))();
  local_60 = puVar7;
  plVar5 = (longlong *)FUN_1401e3228();
  (**(code **)(*plVar5 + 0x20))(plVar5,&local_50);
  (**(code **)(*local_50 + 0x60))(local_50,param_1);
  if (param_3 == '\0') {
    if (*(char *)(param_1 + 0x88) == '\x01') {
      FUN_1443c09c4(param_1);
    }
    else {
      if (((((*(int *)(param_1 + 0x44) != 0) && (uVar2 = *(uint *)(param_1 + 0x40), -1 < (int)uVar2)
            ) && ((int)uVar2 < DAT_14c9647dc)) &&
          ((puVar7 = (undefined8 *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
           puVar7 != (undefined8 *)0x0 && (*(int *)(puVar7 + 2) == *(int *)(param_1 + 0x44))))) &&
         ((*(uint *)(puVar7 + 1) & 0x10200000) == 0)) {
        if ((*(uint *)(puVar7 + 1) & 0x10200000) == 0) {
          uVar6 = *puVar7;
        }
        else {
          uVar6 = 0;
        }
        FUN_1443c2d5c(uVar6,CONCAT71((int7)((ulonglong)puVar7 >> 8),1));
      }
      if ((DAT_14c7649a8 == 0) &&
         (((*(longlong *)(param_1 + 0x90) == 0 || (*(longlong *)(param_1 + 0x98) == 0)) ||
          (*(int *)(*(longlong *)(param_1 + 0x98) + 8) < 1)))) {
        uVar6 = FUN_1401cb356();
        uVar3 = DAT_14c7649ac;
        FUN_148fd4a98(&local_70,param_1,FUN_1443c3256);
        local_78 = uVar3;
        FUN_1405f67fc(uVar6,&local_60,&local_70,
                      L"FPartyPlatformSessionMonitor_HandleCreateSessionComplete_HandleRetryEstablishingSession"
                     );
        *(undefined8 **)(param_1 + 0x90) = local_60;
        local_60 = (undefined8 *)0x0;
        plVar5 = *(longlong **)(param_1 + 0x98);
        *(longlong **)(param_1 + 0x98) = local_58;
        local_58 = (longlong *)0x0;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar5 + 0x10))();
          }
          if (local_58 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)local_58 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_58 + 0x10))();
            }
          }
        }
        if (local_68 != 0) {
          if (local_70 == (undefined8 *)0x0) goto LAB_1443c1d9b;
          (**(code **)*local_70)(local_70,0);
          FUN_1446efa72(&local_70,0,0,0x10);
          local_68 = 0;
        }
        if (local_70 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
    goto LAB_1443c1d9b;
  }
  FUN_1443c3046(param_1 + 0x78,DAT_14cbf5560);
  FUN_148fd4d5e(&local_60,param_1);
  (**(code **)(*local_50 + 0x408))(local_50,&local_70,&local_60);
  if ((int)local_58 == 0) {
LAB_1443c1e59:
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_60 != (undefined8 *)0x0) {
    (**(code **)*local_60)(local_60,0);
    FUN_1446efa72(&local_60,0,0,0x10);
    local_58 = (longlong *)((ulonglong)local_58._4_4_ << 0x20);
    goto LAB_1443c1e59;
  }
  if (((((*(int *)(param_1 + 0x44) != 0) && (uVar2 = *(uint *)(param_1 + 0x40), -1 < (int)uVar2)) &&
       ((int)uVar2 < DAT_14c9647dc)) &&
      ((puVar7 = (undefined8 *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       puVar7 != (undefined8 *)0x0 && (*(int *)(puVar7 + 2) == *(int *)(param_1 + 0x44))))) &&
     ((*(uint *)(puVar7 + 1) & 0x10200000) == 0)) {
    if ((*(uint *)(puVar7 + 1) & 0x10200000) == 0) {
      uVar6 = *puVar7;
    }
    else {
      uVar6 = 0;
    }
    uVar8 = 0;
    FUN_1443c2d5c(uVar6,0);
    if (*(int *)(param_1 + 0x44) != 0) {
      uVar2 = *(uint *)(param_1 + 0x40);
      uVar8 = 0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        puVar7 = (undefined8 *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((puVar7 == (undefined8 *)0x0) ||
           ((*(int *)(puVar7 + 2) != *(int *)(param_1 + 0x44) ||
            ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)))) {
          uVar8 = 0;
        }
        else {
          uVar8 = *puVar7;
        }
      }
    }
    FUN_148fce6f6(uVar8,&local_60);
    puVar7 = local_60;
    lVar9 = (longlong)(int)local_58;
    if (lVar9 != 0) {
      lVar10 = 0;
      do {
        uVar6 = *(undefined8 *)((longlong)puVar7 + lVar10);
        cVar4 = FUN_148fd1e76(uVar6);
        if (cVar4 != '\0') {
          FUN_1443c20b6(param_1,uVar6);
        }
        lVar10 = lVar10 + 8;
      } while (lVar9 * 8 != lVar10);
    }
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8(local_60);
    }
    if (*(char *)(param_1 + 0x71) != '\0') {
      *(undefined1 *)(param_1 + 0x71) = 0;
      FUN_1443c2df0(param_1);
    }
  }
  if ((*(int *)(param_1 + 0x18) != 0) && (*(longlong **)(param_1 + 0x10) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x60))();
  }
  if (*(char *)(param_1 + 0x88) == '\x01') {
    FUN_1443c0888(param_1);
  }
LAB_1443c1d9b:
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_48 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443c20b6 FUN_1443c20b6 body=880 status=ok
// SIG undefined FUN_1443c20b6(void)

void FUN_1443c20b6(longlong param_1,longlong param_2)

{
  int *piVar1;
  uint uVar2;
  undefined **ppuVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  int local_90;
  longlong local_88 [2];
  longlong *local_78;
  longlong *local_70;
  undefined **local_68;
  uint local_60;
  undefined4 uStack_5c;
  byte local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (((((*(int *)(param_1 + 0x44) == 0) || (uVar2 = *(uint *)(param_1 + 0x40), (int)uVar2 < 0)) ||
       (DAT_14c9647dc <= (int)uVar2)) ||
      ((plVar10 = (longlong *)
                  ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar10 == (longlong *)0x0 || ((int)plVar10[2] != *(int *)(param_1 + 0x44))))) ||
     ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)) goto LAB_1443c23d7;
  if ((*(uint *)(plVar10 + 1) & 0x10200000) == 0) {
    lVar6 = *plVar10;
  }
  else {
    lVar6 = 0;
  }
  if (*(char *)(lVar6 + 0x226) != '\0') goto LAB_1443c23d7;
  ppuVar3 = *(undefined ***)(*(longlong *)(param_1 + 0x30) + 0x18);
  (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x30) + 0x10) + 0x180))();
  local_68 = ppuVar3;
  plVar10 = (longlong *)FUN_1401e3228();
  (**(code **)(*plVar10 + 0x20))(plVar10,&local_78);
  plVar10 = local_78;
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  lVar6 = (**(code **)(*plVar10 + 0x20))(plVar10,DAT_14c892fc0);
  if ((lVar6 != 0) && (*(longlong *)(lVar6 + 0x100) != 0)) {
    FUN_141551f14(lVar6,local_88);
    FUN_1443c13e6(*(undefined8 *)(param_2 + 0x40),local_88);
    local_68 = &PTR_FUN_14a184370;
    local_50 = *(byte *)(*(longlong *)(param_2 + 0x40) + 0x98);
    (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[local_50])
              (&local_60,*(longlong *)(param_2 + 0x40) + 0x88);
    local_68 = &PTR_FUN_14a5af930;
    local_48 = 0;
    uStack_40 = 0;
    if ((&DAT_149fc1b6e)[local_50] == '\x01') {
      if (((longlong *)CONCAT44(uStack_5c,local_60) != (longlong *)0x0) &&
         (cVar5 = (**(code **)(*(longlong *)CONCAT44(uStack_5c,local_60) + 0x28))(), cVar5 != '\0'))
      {
LAB_1443c226e:
        plVar10 = local_78;
        uVar7 = FUN_14127b0d4(&local_68);
        (**(code **)(*plVar10 + 0x390))(plVar10,*(undefined8 *)(lVar6 + 0x118),uVar7,0);
        local_98 = (undefined8 *)0x0;
        local_90 = 0;
        FUN_1446efa72(&local_98,0,2,0x10);
        local_90 = 2;
        *local_98 = &PTR_LAB_14b4f2b90;
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 1;
        lVar4 = DAT_14c758608 + 1;
        if (lVar9 == 0) {
          LOCK();
          UNLOCK();
          lVar9 = DAT_14c758608 + 2;
          lVar4 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar4;
        local_98[2] = lVar9;
        *local_98 = &PTR_FUN_14ba5c540;
        uVar7 = *(undefined8 *)(lVar6 + 0x118);
        uVar8 = FUN_14127b0d4(&local_68);
        (**(code **)(*local_78 + 0x3f0))(local_78,uVar8,uVar7,&local_98);
        if (local_90 != 0) {
          if (local_98 == (undefined8 *)0x0) goto LAB_1443c2376;
          (**(code **)*local_98)(local_98,0);
          FUN_1446efa72(&local_98,0,0,0x10);
          local_90 = 0;
        }
        if (local_98 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
    else if ((local_60 & 0xffffff) != 0) goto LAB_1443c226e;
LAB_1443c2376:
    local_68 = &PTR_FUN_14a5af930;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    local_68 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_50])(&local_60);
    if (local_88[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_70 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
LAB_1443c23d7:
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443c2428 FUN_1443c2428 body=735 status=ok
// SIG undefined FUN_1443c2428(void)

void FUN_1443c2428(longlong param_1,char param_2,longlong param_3)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auStack_1b8 [32];
  undefined1 local_198 [8];
  longlong *local_190;
  longlong *local_188;
  undefined8 *local_180;
  int local_178;
  undefined4 local_68;
  undefined **local_60 [3];
  byte local_48;
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_1443c3046(param_1 + 0x78,DAT_14cbf5550);
  if (*(char *)(param_1 + 0x88) == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_1b8);
  }
  if (param_2 == '\0') {
    if ((local_30 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
      FUN_1443c3290(param_1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  if (*(int *)(param_1 + 0x6c) != -1) {
    if (*(longlong *)(param_1 + 0x60) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0xffffffff00000000;
  }
  puVar7 = *(undefined8 **)(*(longlong *)(param_1 + 0x30) + 0x18);
  (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x30) + 0x10) + 0x180))();
  local_180 = puVar7;
  plVar5 = (longlong *)FUN_1401e3228();
  (**(code **)(*plVar5 + 0x20))(plVar5,&local_190);
  FUN_148fd38a4(*(undefined8 *)(param_1 + 0x30),local_60);
  FUN_1443c1bde(param_1 + 0x78,DAT_14cbf5558);
  plVar5 = local_190;
  FUN_148fd491c(&local_180,param_1);
  (**(code **)(*plVar5 + 0x218))(plVar5,local_198,&local_180);
  if (local_178 != 0) {
    if (local_180 == (undefined8 *)0x0) goto LAB_1443c25ae;
    (**(code **)*local_180)(local_180,0);
    FUN_1446efa72(&local_180,0,0,0x10);
    local_178 = 0;
  }
  if (local_180 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1443c25ae:
  FUN_14589e2aa(&local_180,param_3);
  local_68 = *(undefined4 *)(param_3 + 0x118);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  uVar3 = DAT_14c892fc0;
  uVar6 = FUN_14127b0d4(local_60);
  cVar4 = (**(code **)(*local_190 + 0x208))(local_190,uVar6,uVar3,&local_180);
  if (cVar4 == '\0') {
    if (*(longlong *)(param_1 + 0x50) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    if (((*(int *)(param_1 + 0x44) != 0) && (uVar2 = *(uint *)(param_1 + 0x40), -1 < (int)uVar2)) &&
       ((int)uVar2 < DAT_14c9647dc)) {
      puVar7 = (undefined8 *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if (((puVar7 != (undefined8 *)0x0) && (*(int *)(puVar7 + 2) == *(int *)(param_1 + 0x44))) &&
         ((*(uint *)(puVar7 + 1) & 0x10200000) == 0)) {
        if ((*(uint *)(puVar7 + 1) & 0x10200000) == 0) {
          uVar6 = *puVar7;
        }
        else {
          uVar6 = 0;
        }
        FUN_1443c2d5c(uVar6,CONCAT71((int7)((ulonglong)puVar7 >> 8),1));
      }
    }
  }
  FUN_14124efea(&local_180);
  local_60[0] = &PTR_FUN_14a5af930;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  local_60[0] = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_48])();
  if (local_188 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_188 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_188)(local_188);
      LOCK();
      piVar1 = (int *)((longlong)local_188 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_188 + 0x10))(local_188);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_1b8);
}



// FUNCTION 1443c272c FUN_1443c272c body=1583 status=ok
// SIG undefined FUN_1443c272c(void)

void FUN_1443c272c(longlong param_1,undefined8 param_2,uint param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  wchar_t *pwVar12;
  undefined2 *puVar13;
  longlong lVar14;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  undefined8 *local_a8;
  longlong *plStack_a0;
  longlong local_98;
  int local_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  longlong *local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar11 = *(undefined8 **)(*(longlong *)(param_1 + 0x30) + 0x18);
  (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x30) + 0x10) + 0x180))();
  local_88 = puVar11;
  plVar8 = (longlong *)FUN_1401e3228();
  (**(code **)(*plVar8 + 0x20))(plVar8,&local_70);
  FUN_1443c3046(param_1 + 0x78,DAT_14cbf5558);
  (**(code **)(*local_70 + 0x228))(local_70,param_1);
  if (*(char *)(param_1 + 0x88) == '\x01') {
    if (*(longlong *)(param_1 + 0x50) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    if ((param_3 & 0xfffffffb) == 0) {
      FUN_1443c0888(param_1);
    }
    else {
      FUN_1443c09c4();
    }
    goto LAB_1443c283d;
  }
  if (((((param_3 & 0xfffffffb) != 0) || (iVar6 = *(int *)(param_1 + 0x44), iVar6 == 0)) ||
      (uVar7 = *(uint *)(param_1 + 0x40), (int)uVar7 < 0)) ||
     (((DAT_14c9647dc <= (int)uVar7 ||
       (lVar10 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8), lVar10 == 0)) ||
      ((*(int *)(lVar10 + 0x10) != iVar6 || ((*(uint *)(lVar10 + 8) & 0x10200000) != 0)))))) {
    FUN_1443c3290(param_1);
    goto LAB_1443c283d;
  }
  if (*(longlong *)(param_1 + 0x50) == 0) {
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
LAB_1443c299f:
    uVar7 = *(uint *)(param_1 + 0x40);
    uVar9 = 0;
    if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) {
      puVar11 = (undefined8 *)
                ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
      if ((puVar11 == (undefined8 *)0x0) ||
         ((*(int *)(puVar11 + 2) != iVar6 || ((*(uint *)(puVar11 + 1) & 0x10200000) != 0))))
      goto LAB_1443c2d36;
      uVar9 = *puVar11;
    }
  }
  else {
    FUN_1400020a8();
    iVar6 = *(int *)(param_1 + 0x44);
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    if (iVar6 != 0) goto LAB_1443c299f;
LAB_1443c2d36:
    uVar9 = 0;
  }
  FUN_1443c2d5c(uVar9,0);
  plVar8 = local_70;
  FUN_148fd4d5e(&local_88,param_1);
  (**(code **)(*plVar8 + 0x408))(plVar8,&local_98,&local_88);
  if ((int)uStack_80 == 0) {
LAB_1443c2a4f:
    if (local_88 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_88 != (undefined8 *)0x0) {
    (**(code **)*local_88)(local_88,0);
    FUN_1446efa72(&local_88,0,0,0x10);
    uStack_80 = (ulonglong)uStack_80._4_4_ << 0x20;
    goto LAB_1443c2a4f;
  }
  if (*(int *)(param_1 + 0x44) == 0) {
LAB_1443c2d3d:
    uVar9 = 0;
  }
  else {
    uVar7 = *(uint *)(param_1 + 0x40);
    uVar9 = 0;
    if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) {
      puVar11 = (undefined8 *)
                ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
      if ((puVar11 == (undefined8 *)0x0) ||
         ((*(int *)(puVar11 + 2) != *(int *)(param_1 + 0x44) ||
          ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)))) goto LAB_1443c2d3d;
      uVar9 = *puVar11;
    }
  }
  FUN_148fce6f6(uVar9,&local_88);
  puVar11 = local_88;
  lVar10 = (longlong)(int)uStack_80;
  if (lVar10 != 0) {
    lVar14 = 0;
    do {
      uVar9 = *(undefined8 *)((longlong)puVar11 + lVar14);
      cVar5 = FUN_148fd1e76(uVar9);
      if (cVar5 != '\0') {
        FUN_1443c20b6(param_1,uVar9);
      }
      lVar14 = lVar14 + 8;
    } while (lVar10 * 8 != lVar14);
  }
  if (local_88 != (undefined8 *)0x0) {
    FUN_1400020a8(local_88);
  }
  cVar5 = FUN_148fd3dec(param_1);
  if (cVar5 != '\0') {
    FUN_1443c2df0(param_1);
  }
  plVar8 = (longlong *)FUN_140a68038(1);
  if (plVar8 == (longlong *)0x0) {
    puVar11 = (undefined8 *)0x0;
  }
  else {
    (**(code **)(*plVar8 + 0x10))(plVar8,&local_88);
    puVar11 = local_88;
  }
  if (puVar11 != DAT_14cb8e208) goto LAB_1443c283d;
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  if (*(int *)(param_1 + 0x44) == 0) {
LAB_1443c2d4b:
    uVar9 = 0;
  }
  else {
    uVar7 = *(uint *)(param_1 + 0x40);
    uVar9 = 0;
    if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) {
      puVar11 = (undefined8 *)
                ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
      if ((puVar11 == (undefined8 *)0x0) ||
         ((*(int *)(puVar11 + 2) != *(int *)(param_1 + 0x44) ||
          ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)))) goto LAB_1443c2d4b;
      uVar9 = *puVar11;
    }
  }
  FUN_148fce6f6(uVar9,&local_98);
  if ((longlong)local_90 != 0) {
    lVar14 = 0;
    local_b0 = local_98;
    lVar10 = local_98;
    do {
      lVar3 = *(longlong *)(lVar10 + lVar14);
      FUN_140b6e8c2(*(longlong *)(lVar3 + 0x40) + 0x80,&local_a8);
      if (local_a8 == DAT_14cb8e208) {
        FUN_1408e4d18(*(longlong *)(lVar3 + 0x40) + 0x80,&local_a8);
        uVar4 = uStack_80;
        plVar8 = plStack_a0;
        puVar11 = local_a8;
        local_a8 = (undefined8 *)0x0;
        plStack_a0 = (longlong *)0x0;
        lVar10 = (longlong)(int)uStack_80;
        uVar7 = (int)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar7);
        if (uStack_80._4_4_ < uVar7) {
          FUN_1413eac7e(&local_88,uVar4 & 0xffffffff);
        }
        local_88[lVar10 * 2] = puVar11;
        local_88[lVar10 * 2 + 1] = plVar8;
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
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
        plVar8 = plStack_a0;
        lVar10 = local_b0;
        if (plStack_a0 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_a0 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plStack_a0)(plStack_a0);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            lVar10 = local_b0;
            if (*piVar1 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
              lVar10 = local_b0;
            }
          }
        }
      }
      lVar14 = lVar14 + 8;
    } while ((longlong)local_90 * 8 != lVar14);
  }
  if (local_98 != 0) {
    FUN_1400020a8(local_98);
  }
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  (**(code **)(*local_70 + 0x398))(local_70,DAT_14c892fc0,&local_88,0);
  FUN_14127b1cd(local_88,uStack_80 & 0xffffffff);
  if (local_88 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1443c283d:
  if (((((*(int *)(param_1 + 0x44) != 0) && (uVar7 = *(uint *)(param_1 + 0x40), -1 < (int)uVar7)) &&
       ((int)uVar7 < DAT_14c9647dc)) &&
      ((puVar11 = (undefined8 *)
                  ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
       puVar11 != (undefined8 *)0x0 && (*(int *)(puVar11 + 2) == *(int *)(param_1 + 0x44))))) &&
     ((*(uint *)(puVar11 + 1) & 0x10200000) == 0)) {
    if ((*(uint *)(puVar11 + 1) & 0x10200000) == 0) {
      plVar8 = (longlong *)*puVar11;
    }
    else {
      plVar8 = (longlong *)0x0;
    }
    if (param_3 < 5) {
      pwVar12 = (wchar_t *)(&PTR_u_Success_14ba60d28)[param_3];
    }
    else {
      pwVar12 = L"UnknownError";
    }
    FUN_140056680(&local_88,pwVar12);
    if (*(int *)(param_1 + 0x58) == 0) {
      puVar13 = &DAT_149dfb77a;
    }
    else {
      puVar13 = *(undefined2 **)(param_1 + 0x50);
    }
    FUN_140056680(&local_98,puVar13);
    (**(code **)(*plVar8 + 0x2c0))(plVar8,&local_98,&local_88);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    if (local_88 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_68 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)local_68 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_68 + 0x10))(local_68);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443c2d5c FUN_1443c2d5c body=141 status=ok
// SIG undefined FUN_1443c2d5c(void)

void FUN_1443c2d5c(longlong param_1,byte param_2)

{
  char cVar1;
  char cVar2;
  
  if (*(byte *)(param_1 + 0x226) != param_2) {
    if ((*(char *)(param_1 + 0x225) == '\x01') && (*(char *)(param_1 + 0x224) == '\x01')) {
      *(byte *)(param_1 + 0x226) = param_2;
      return;
    }
    cVar1 = '\x01';
    if (*(byte *)(param_1 + 0x226) == 0) {
      if (*(char *)(param_1 + 0x22b) == '\x01') {
        cVar1 = *(char *)(param_1 + 0x22a);
      }
      else {
        cVar1 = '\0';
      }
    }
    *(byte *)(param_1 + 0x226) = param_2;
    if (*(char *)(param_1 + 0x225) != '\0') {
      param_2 = (param_2 | *(byte *)(param_1 + 0x224)) & 1;
    }
    if (param_2 == 0) {
      if (*(char *)(param_1 + 0x22b) == '\0') {
        if (cVar1 != '\0') {
          cVar2 = '\0';
          goto LAB_1443c2ddd;
        }
      }
      else {
        cVar2 = *(char *)(param_1 + 0x22a);
        if (cVar1 != cVar2) {
LAB_1443c2ddd:
          FUN_140898514(param_1 + 800,cVar2);
          return;
        }
      }
    }
    else {
      cVar2 = '\x01';
      if (cVar1 == '\0') goto LAB_1443c2ddd;
    }
  }
  return;
}



// FUNCTION 1443c2df0 FUN_1443c2df0 body=252 status=ok
// SIG undefined FUN_1443c2df0(void)

void FUN_1443c2df0(longlong param_1)

{
  int *piVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 *local_40;
  int local_38;
  undefined1 local_30 [8];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = FUN_148fd3dec();
  if (((cVar2 != '\0') && (*(char *)(param_1 + 0x70) == '\0')) &&
     (*(char *)(param_1 + 0x88) == '\0')) {
    *(undefined1 *)(param_1 + 0x70) = 1;
    uVar3 = FUN_1401cb356();
    FUN_148fd4a98(&local_40,param_1,FUN_1443c2eee);
    local_48 = 0;
    FUN_1405f67fc(uVar3,local_30,&local_40,L"FPartyPlatformSessionMonitor_HandleQueuedSessionUpdate"
                 );
    if (local_28 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
    }
    if (local_38 != 0) {
      if (local_40 == (undefined8 *)0x0) goto LAB_1443c2e21;
      (**(code **)*local_40)(local_40,0);
      FUN_1446efa72(&local_40,0,0,0x10);
      local_38 = 0;
    }
    if (local_40 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1443c2e21:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443c2eee FUN_1443c2eee body=343 status=ok
// SIG undefined FUN_1443c2eee(void)

undefined8 FUN_1443c2eee(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined1 *)(param_1 + 0x70) = 0;
  if (*(char *)(param_1 + 0x88) == '\0') {
    cVar3 = FUN_148fd3dec();
    if (cVar3 != '\0') {
      uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x18);
      (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x30) + 0x10) + 0x180))();
      local_20 = uVar2;
      plVar4 = (longlong *)FUN_1401e3228();
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_30);
      plVar4 = local_30;
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      lVar5 = (**(code **)(*plVar4 + 0x20))(plVar4,DAT_14c892fc0);
      if (lVar5 != 0) {
        if (*(int *)(lVar5 + 0x148) - 2U < 5) {
          cVar3 = FUN_148fd42d6(param_1,lVar5 + 0x28);
          if (cVar3 != '\0') {
            if (DAT_14c87ead8 == '\0') {
              FUN_140024d3a(&DAT_14c87eb00);
              DAT_14c87ead8 = '\x01';
            }
            (**(code **)(*local_30 + 0x98))(local_30,DAT_14c892fc0,lVar5 + 0x28,1);
          }
        }
        else if (*(int *)(lVar5 + 0x148) == 1) {
          *(undefined1 *)(param_1 + 0x71) = 1;
        }
      }
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
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443c3046 FUN_1443c3046 body=132 status=ok
// SIG undefined FUN_1443c3046(void)

void FUN_1443c3046(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    plVar2 = (longlong *)*param_1;
    lVar1 = (longlong)*(int *)(param_1 + 1) * 0x18;
    do {
      if (*plVar2 == param_2) {
        if (plVar2 != (longlong *)0x0) {
          QueryPerformanceCounter(&local_20);
          plVar2[2] = (longlong)((double)local_20.QuadPart * DAT_14c83f420 + 16777216.0);
        }
        break;
      }
      plVar2 = plVar2 + 3;
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != 0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443c30cc FUN_1443c30cc body=393 status=ok
// SIG undefined FUN_1443c30cc(void)

void FUN_1443c30cc(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 *local_60;
  int local_58;
  undefined8 local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((*(int *)(param_1 + 0x44) != 0) && (uVar2 = *(uint *)(param_1 + 0x40), -1 < (int)uVar2)) &&
     ((int)uVar2 < DAT_14c9647dc)) {
    puVar6 = (undefined8 *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((puVar6 != (undefined8 *)0x0) && (*(int *)(puVar6 + 2) == *(int *)(param_1 + 0x44))) &&
       ((*(uint *)(puVar6 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar6 + 1) & 0x10200000) == 0) {
        uVar5 = *puVar6;
      }
      else {
        uVar5 = 0;
      }
      FUN_1443c2d5c(uVar5,CONCAT71((int7)((ulonglong)puVar6 >> 8),1));
      uVar5 = FUN_1401cb356();
      uVar4 = DAT_14c7649ac;
      FUN_148fd4a98(&local_60,param_1,FUN_1443c3256);
      local_68 = uVar4;
      FUN_1405f67fc(uVar5,&local_50,&local_60,
                    L"FPartyPlatformSessionMonitor_HandleRetryEstablishingSession");
      *(undefined8 *)(param_1 + 0x90) = local_50;
      local_50 = 0;
      plVar3 = *(longlong **)(param_1 + 0x98);
      *(longlong **)(param_1 + 0x98) = local_48;
      local_48 = (longlong *)0x0;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
        if (local_48 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_48 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_48 + 0x10))();
          }
        }
      }
      if (local_58 != 0) {
        if (local_60 == (undefined8 *)0x0) goto LAB_1443c312b;
        (**(code **)*local_60)(local_60,0);
        FUN_1446efa72(&local_60,0,0,0x10);
        local_58 = 0;
      }
      if (local_60 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_1443c312b:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443c3256 FUN_1443c3256 body=58 status=ok
// SIG undefined FUN_1443c3256(void)

undefined8 FUN_1443c3256(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_1443c0bf6(param_1);
  return 0;
}



// FUNCTION 1443c3290 FUN_1443c3290 body=497 status=ok
// SIG undefined FUN_1443c3290(void)

void FUN_1443c3290(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  ushort uVar9;
  ulonglong uVar10;
  ushort uVar11;
  ulonglong uVar12;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 *local_60;
  int local_58;
  undefined8 local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar5 = FUN_148fd3f20();
  if (lVar5 != 0) {
    plVar3 = (longlong *)(param_1 + 0x50);
    iVar2 = *(int *)(lVar5 + 0x18);
    if (iVar2 == *(int *)(param_1 + 0x58)) {
      if (1 < iVar2) {
        lVar7 = *plVar3;
        lVar8 = 0;
        while( true ) {
          uVar9 = *(ushort *)(*(longlong *)(lVar5 + 0x10) + lVar8);
          uVar10 = (ulonglong)uVar9;
          uVar11 = *(ushort *)(lVar7 + lVar8);
          if (uVar9 != uVar11) break;
          if (uVar9 == 0) goto LAB_1443c32be;
LAB_1443c3415:
          lVar8 = lVar8 + 2;
        }
        if ((uVar11 | uVar9) < 0x80) {
          uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
          uVar12 = (ulonglong)uVar11;
          uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
          if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar12]) goto LAB_1443c3415;
        }
        if (uVar9 != uVar11) goto LAB_1443c345b;
      }
    }
    else if (*(int *)(param_1 + 0x58) + iVar2 != 1) {
      lVar7 = *plVar3;
LAB_1443c345b:
      if (lVar7 != 0) {
        FUN_1400020a8();
      }
      *plVar3 = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
    }
  }
LAB_1443c32be:
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  uVar6 = FUN_1401cb356();
  uVar4 = DAT_14c7649ac;
  FUN_148fd4a98(&local_60,param_1,FUN_1443c3256);
  local_68 = uVar4;
  FUN_1405f67fc(uVar6,&local_50,&local_60,
                L"FPartyPlatformSessionMonitor_ProcessJoinFailure_HandleRetryEstablishingSession");
  *(undefined8 *)(param_1 + 0x90) = local_50;
  local_50 = 0;
  plVar3 = *(longlong **)(param_1 + 0x98);
  *(longlong **)(param_1 + 0x98) = local_48;
  local_48 = (longlong *)0x0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_48 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_48 + 0x10))();
      }
    }
  }
  if (local_58 != 0) {
    if (local_60 == (undefined8 *)0x0) goto LAB_1443c33ae;
    (**(code **)*local_60)(local_60,0);
    FUN_1446efa72(&local_60,0,0,0x10);
    local_58 = 0;
  }
  if (local_60 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1443c33ae:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443c349b FUN_1443c349b body=55 status=ok
// SIG undefined FUN_1443c349b(void)

void FUN_1443c349b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf5570 == 0) {
    uVar1 = FUN_1410510fd();
    DAT_14cbf5570 = FUN_14171c317(FUN_14667162a,uVar1,L"EPartyType");
  }
  return;
}



// FUNCTION 1443c34d2 FUN_1443c34d2 body=55 status=ok
// SIG undefined FUN_1443c34d2(void)

void FUN_1443c34d2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf5588 == 0) {
    uVar1 = FUN_1410510fd();
    DAT_14cbf5588 = FUN_14171c317(FUN_146671659,uVar1,L"EPartyInviteRestriction");
  }
  return;
}



// FUNCTION 1443c3509 FUN_1443c3509 body=55 status=ok
// SIG undefined FUN_1443c3509(void)

void FUN_1443c3509(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf55a0 == 0) {
    uVar1 = FUN_1410510fd();
    DAT_14cbf55a0 = FUN_14171c317(FUN_146671688,uVar1,L"EPartyJoinDenialReason");
  }
  return;
}



// FUNCTION 1443c3540 FUN_1443c3540 body=55 status=ok
// SIG undefined FUN_1443c3540(void)

void FUN_1443c3540(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf55b8 == 0) {
    uVar1 = FUN_1410510fd();
    DAT_14cbf55b8 = FUN_14171c317(FUN_1466716b7,uVar1,L"EApprovalAction");
  }
  return;
}



// FUNCTION 1443c3577 FUN_1443c3577 body=55 status=ok
// SIG undefined FUN_1443c3577(void)

void FUN_1443c3577(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf55d0 == 0) {
    uVar1 = FUN_1410510fd();
    DAT_14cbf55d0 = FUN_14171c317(FUN_1466716e6,uVar1,L"ESocialPartyInviteMethod");
  }
  return;
}



// FUNCTION 1443c35ae FUN_1443c35ae body=55 status=ok
// SIG undefined FUN_1443c35ae(void)

void FUN_1443c35ae(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf55e8 == 0) {
    uVar1 = FUN_1410510fd();
    DAT_14cbf55e8 = FUN_14171c317(FUN_146671715,uVar1,L"ESocialPartyInviteFailureReason");
  }
  return;
}



// FUNCTION 1443c35e5 FUN_1443c35e5 body=69 status=ok
// SIG undefined FUN_1443c35e5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1443c35e5(void)

{
  _DAT_14cbf5670 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001443c3627. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf5678,1);
  return;
}



// FUNCTION 1443c362a FUN_1443c362a body=69 status=ok
// SIG undefined FUN_1443c362a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1443c362a(void)

{
  _DAT_14cbf5680 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001443c366c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf5688,1);
  return;
}



// FUNCTION 1443c3670 FUN_1443c3670 body=492 status=ok
// SIG undefined FUN_1443c3670(void)

undefined4 FUN_1443c3670(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_e8 [32];
  undefined8 **local_c8;
  undefined8 *local_b8;
  ulonglong uStack_b0;
  longlong *local_a8;
  longlong *local_a0;
  undefined **local_98 [3];
  byte local_80;
  longlong local_78;
  undefined **local_68 [3];
  byte local_50;
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  cVar3 = (**(code **)(*param_1 + 0x2c8))();
  if (cVar3 == '\0') {
    uVar4 = 0;
    goto LAB_1443c36aa;
  }
  (**(code **)(*param_1 + 0x180))(param_1);
  local_68[0] = (undefined **)0x0;
  plVar5 = (longlong *)FUN_1401e3228();
  (**(code **)(*plVar5 + 0x40))(plVar5,&local_a8);
  local_b8 = (undefined8 *)0x0;
  uStack_b0 = 0;
  FUN_148fd1d62(param_3,local_68);
  uVar6 = FUN_14127b0d4(local_68);
  uVar2 = *(undefined8 *)(param_1[0xe] + 0x18);
  (**(code **)(*param_2 + 0x350))(param_2,local_98);
  uVar7 = FUN_14127b0d4(local_98);
  local_c8 = &local_b8;
  uVar4 = (**(code **)(*local_a8 + 0x98))(local_a8,uVar7,uVar2,uVar6);
  local_98[0] = &PTR_FUN_14a5af930;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  local_98[0] = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_80])();
  local_68[0] = &PTR_FUN_14a5af930;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  local_68[0] = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_50])();
  if ((int)uStack_b0 == 0) {
LAB_1443c3814:
    if (local_b8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_b8 != (undefined8 *)0x0) {
    (**(code **)*local_b8)(local_b8,0);
    FUN_1446efa72(&local_b8,0,0,0x10);
    uStack_b0 = uStack_b0 & 0xffffffff00000000;
    goto LAB_1443c3814;
  }
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_a0 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
LAB_1443c36aa:
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443c385e FUN_1443c385e body=267 status=ok
// SIG undefined FUN_1443c385e(void)

void FUN_1443c385e(longlong *param_1,char *param_2)

{
  undefined2 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_48 [36];
  undefined2 local_24;
  undefined1 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar2 = (**(code **)(*param_1 + 0x18))();
  if (cVar2 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  if (((*(char *)((longlong)param_1 + 0x21) != *param_2) ||
      (*(char *)((longlong)param_1 + 0x22) != param_2[1])) ||
     (*(char *)((longlong)param_1 + 0x23) != param_2[2])) {
    puVar1 = (undefined2 *)((longlong)param_1 + 0x21);
    (**(code **)(*param_1 + 0x20))(param_1);
    if ((longlong)(int)param_1[9] != 0) {
      lVar3 = 0;
      do {
        if ((*(int *)(param_1[8] + 8 + lVar3) != 0) && (*(longlong *)(param_1[8] + lVar3) != 0)) {
          local_22 = *(undefined1 *)((longlong)param_1 + 0x23);
          local_24 = *puVar1;
          *puVar1 = *(undefined2 *)param_2;
          *(char *)((longlong)param_1 + 0x23) = param_2[2];
          FUN_148fe7e0e(param_1 + 8,puVar1);
          goto LAB_1443c3924;
        }
        lVar3 = lVar3 + 0x10;
      } while ((longlong)(int)param_1[9] * 0x10 != lVar3);
    }
    *(char *)((longlong)param_1 + 0x23) = param_2[2];
    *puVar1 = *(undefined2 *)param_2;
LAB_1443c3924:
    FUN_148fe7ebe(param_1 + 5,puVar1);
    if (((int)param_1[2] != 0) && ((longlong *)param_1[1] != (longlong *)0x0)) {
      (**(code **)(*(longlong *)param_1[1] + 0x60))();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443c397c FUN_1443c397c body=1556 status=ok
// SIG undefined FUN_1443c397c(void)

void FUN_1443c397c(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined **ppuVar2;
  int iVar3;
  longlong *plVar4;
  undefined *puVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  void *pvVar10;
  char cVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  size_t sVar16;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  wchar_t *local_e8;
  code *local_e0;
  undefined1 *local_d8;
  undefined ***local_d0;
  code *local_c8;
  code *local_c0;
  undefined **local_b8;
  longlong *local_b0;
  longlong lStack_a8;
  byte local_a0;
  void *local_98;
  ulonglong uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (param_1[0xe] != 0) goto LAB_1443c39a8;
  (**(code **)(*(longlong *)param_1[8] + 0x30))((longlong *)param_1[8],param_1);
  lVar12 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    param_1[0xe] = lVar12;
    plVar15 = (longlong *)param_1[0xf];
    if (plVar15 != (longlong *)0x0) {
      param_1[0xf] = 0;
LAB_1443c3a42:
      LOCK();
      plVar4 = plVar15 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
joined_r0x0001443c3a35:
        if (iVar3 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    param_1[0xe] = lVar12;
    plVar15 = (longlong *)param_1[0xf];
    if (plVar4 == plVar15) {
      LOCK();
      plVar15 = plVar4 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
        plVar15 = plVar4;
        goto joined_r0x0001443c3a35;
      }
    }
    else {
      param_1[0xf] = (longlong)plVar4;
      if (plVar15 != (longlong *)0x0) goto LAB_1443c3a42;
    }
  }
  (**(code **)(*(longlong *)*param_2 + 0x20))();
  uVar7 = *(undefined4 *)((longlong)local_b8 + 0x14);
  uVar8 = *(undefined4 *)(local_b8 + 3);
  uVar9 = *(undefined4 *)((longlong)local_b8 + 0x1c);
  *(undefined4 *)(param_1 + 0x35) = *(undefined4 *)(local_b8 + 2);
  *(undefined4 *)((longlong)param_1 + 0x1ac) = uVar7;
  *(undefined4 *)(param_1 + 0x36) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = uVar9;
  ppuVar2 = (undefined **)(param_1 + 0x37);
  if (ppuVar2 != local_b8 + 4) {
    iVar3 = *(int *)(local_b8 + 5);
    puVar5 = local_b8[4];
    *(int *)(param_1 + 0x38) = iVar3;
    if (iVar3 == 0 && *(int *)((longlong)param_1 + 0x1c4) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x1c4) = 0;
    }
    else {
      FUN_1446dd670(ppuVar2);
      if (iVar3 != 0) {
        memcpy(*ppuVar2,puVar5,(longlong)iVar3 * 2);
      }
    }
  }
  ppuVar2 = (undefined **)(param_1 + 0x39);
  if (ppuVar2 != local_b8 + 6) {
    iVar3 = *(int *)(local_b8 + 7);
    puVar5 = local_b8[6];
    *(int *)(param_1 + 0x3a) = iVar3;
    if (iVar3 == 0 && *(int *)((longlong)param_1 + 0x1d4) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x1d4) = 0;
    }
    else {
      FUN_1446dd670(ppuVar2);
      if (iVar3 != 0) {
        memcpy(*ppuVar2,puVar5,(longlong)iVar3 * 2);
      }
    }
  }
  ppuVar2 = (undefined **)(param_1 + 0x3b);
  if (ppuVar2 != local_b8 + 8) {
    iVar3 = *(int *)(local_b8 + 9);
    puVar5 = local_b8[8];
    *(int *)(param_1 + 0x3c) = iVar3;
    if (iVar3 == 0 && *(int *)((longlong)param_1 + 0x1e4) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x1e4) = 0;
    }
    else {
      FUN_1446dd670(ppuVar2);
      if (iVar3 != 0) {
        memcpy(*ppuVar2,puVar5,(longlong)iVar3 * 2);
      }
    }
  }
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_b0 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar1 = (int *)((longlong)local_b0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_b0 + 0x10))(local_b0);
      }
    }
  }
  local_b0 = *(longlong **)(*param_2 + 0x30);
  lStack_a8 = *(longlong *)(*param_2 + 0x38);
  if (lStack_a8 != 0) {
    LOCK();
    *(int *)(lStack_a8 + 8) = *(int *)(lStack_a8 + 8) + 1;
    UNLOCK();
  }
  local_a0 = 0;
  local_b8 = &PTR_FUN_14a5af930;
  local_98 = (void *)0x0;
  uStack_90 = 0;
  if (&local_b8 != (undefined ***)(param_1 + 0x16)) {
    local_78 = local_78 & 0xffffffffffffff00;
    if (lStack_a8 != 0) {
      LOCK();
      *(int *)(lStack_a8 + 8) = *(int *)(lStack_a8 + 8) + 1;
      UNLOCK();
    }
    local_58 = local_78;
    local_88._0_4_ = SUB84(local_b0,0);
    local_88._4_4_ = (undefined4)((ulonglong)local_b0 >> 0x20);
    uStack_80._0_4_ = (undefined4)lStack_a8;
    uStack_80._4_4_ = (undefined4)((ulonglong)lStack_a8 >> 0x20);
    local_68 = (undefined4)local_88;
    uStack_64 = local_88._4_4_;
    uStack_60 = (undefined4)uStack_80;
    uStack_5c = uStack_80._4_4_;
    uVar6 = param_1[0x19];
    lVar12 = param_1[0x17];
    lVar13 = param_1[0x18];
    *(undefined4 *)(param_1 + 0x17) = (undefined4)local_88;
    *(undefined4 *)((longlong)param_1 + 0xbc) = local_88._4_4_;
    *(undefined4 *)(param_1 + 0x18) = (undefined4)uStack_80;
    *(undefined4 *)((longlong)param_1 + 0xc4) = uStack_80._4_4_;
    param_1[0x19] = local_78;
    local_88 = lVar12;
    uStack_80 = lVar13;
    local_78 = uVar6;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[uVar6 & 0xff])();
    pvVar10 = local_98;
    iVar3 = (int)uStack_90;
    sVar16 = (size_t)(int)uStack_90;
    *(int *)(param_1 + 0x1b) = (int)uStack_90;
    if ((int)uStack_90 == 0 && *(int *)((longlong)param_1 + 0xdc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
    }
    else {
      FUN_1447a127e(param_1 + 0x1a);
      if (iVar3 != 0) {
        memcpy((void *)param_1[0x1a],pvVar10,sVar16);
      }
    }
    local_b8 = &PTR_FUN_14a5af930;
    if (local_98 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  local_b8 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_a0])(&local_b0);
  lVar12 = FUN_145988618();
  if (DAT_14c951858 == 0) {
    local_b8 = (undefined **)FUN_1449e2820;
    local_c0 = FUN_14081d0ea;
    local_c8 = FUN_14081d0ea;
    local_d8 = &LAB_1468c5283;
    local_e0 = FUN_142809da0;
    local_e8 = L"Engine";
    local_f0 = 0x400000000;
    local_f8 = 0x10000000;
    local_100 = 8;
    local_108 = 0x50;
    local_d0 = &local_b8;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  lVar13 = param_1[4];
  if (lVar13 == 0) {
    lVar14 = 0;
  }
  else {
    do {
      if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) < *(int *)(lVar12 + 0x38)) ||
         (lVar14 = lVar13,
         *(longlong *)
          (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar12 + 0x38) * 8) != lVar12 + 0x30)) {
        lVar14 = 0;
      }
    } while ((lVar14 == 0) && (lVar13 = *(longlong *)(lVar13 + 0x20), lVar13 != 0));
  }
  if (*(int *)(lVar14 + 0xb0) < 1) {
    local_b0 = (longlong *)0x0;
    lStack_a8 = 0;
    local_a0 = 0;
    local_b8 = &PTR_FUN_14a5af930;
    local_98 = (void *)0x0;
    uStack_90 = 0;
  }
  else {
    FUN_148fcdaa6(*(undefined8 *)(**(longlong **)(lVar14 + 0xa8) + 0x70),&local_b8,0);
  }
  if (&local_b8 != (undefined ***)(param_1 + 0x10)) {
    local_78 = CONCAT71(local_78._1_7_,local_a0);
    (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[local_a0])(&local_88,&local_b0);
    local_58 = local_78;
    local_68 = (undefined4)local_88;
    uStack_64 = local_88._4_4_;
    uStack_60 = (undefined4)uStack_80;
    uStack_5c = uStack_80._4_4_;
    uVar6 = param_1[0x13];
    lVar12 = param_1[0x11];
    lVar13 = param_1[0x12];
    *(undefined4 *)(param_1 + 0x11) = (undefined4)local_88;
    *(undefined4 *)((longlong)param_1 + 0x8c) = local_88._4_4_;
    *(undefined4 *)(param_1 + 0x12) = (undefined4)uStack_80;
    *(undefined4 *)((longlong)param_1 + 0x94) = uStack_80._4_4_;
    param_1[0x13] = local_78;
    local_88 = lVar12;
    uStack_80 = lVar13;
    local_78 = uVar6;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[uVar6 & 0xff])(&local_88);
    pvVar10 = local_98;
    iVar3 = (int)uStack_90;
    sVar16 = (size_t)(int)uStack_90;
    *(int *)(param_1 + 0x15) = (int)uStack_90;
    if ((int)uStack_90 == 0 && *(int *)((longlong)param_1 + 0xac) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xac) = 0;
    }
    else {
      FUN_1447a127e(param_1 + 0x14,uStack_90 & 0xffffffff);
      if (iVar3 != 0) {
        memcpy((void *)param_1[0x14],pvVar10,sVar16);
      }
    }
  }
  local_b8 = &PTR_FUN_14a5af930;
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
  local_b8 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_a0])();
  if ((&DAT_149fc1b6e)[*(byte *)(param_1 + 0x13)] == '\x01') {
    if (((longlong *)param_1[0x11] == (longlong *)0x0) ||
       (cVar11 = (**(code **)(*(longlong *)param_1[0x11] + 0x28))(), cVar11 == '\0'))
    goto LAB_1443c39a8;
  }
  else if ((*(uint *)(param_1 + 0x11) & 0xffffff) == 0) goto LAB_1443c39a8;
  (**(code **)(*param_1 + 0x2e8))(param_1);
LAB_1443c39a8:
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443c3f92 FUN_1443c3f92 body=5548 status=ok
// SIG undefined FUN_1443c3f92(void)

void FUN_1443c3f92(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  uint uVar4;
  longlong *plVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  undefined8 *puVar18;
  bool bVar19;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  byte local_a6;
  byte local_a5;
  int local_a4;
  undefined8 *local_a0;
  int local_98;
  int local_94;
  longlong local_90;
  longlong *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  ulonglong uStack_70;
  longlong *local_68;
  longlong *local_60;
  undefined8 *local_58;
  int local_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  (**(code **)(*param_1 + 0x180))();
  local_58 = (undefined8 *)0x0;
  plVar9 = (longlong *)FUN_1401e3228(&local_58);
  (**(code **)(*plVar9 + 0x40))(plVar9,&local_68);
  plVar9 = local_68;
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar18 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14ba5c9a0;
  LOCK();
  UNLOCK();
  lVar12 = DAT_14c758608 + 1;
  lVar17 = DAT_14c758608 + 1;
  if (lVar12 == 0) {
    LOCK();
    UNLOCK();
    lVar12 = DAT_14c758608 + 2;
    lVar17 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar17;
  local_58[2] = lVar12;
  *local_58 = &PTR_FUN_14ba5c930;
  local_58[3] = 0;
  iVar13 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar4 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_58 + 3) = uVar4;
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar17 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar17 = 0;
    }
    iVar13 = *(int *)(lVar17 + 0x10);
    if (*(int *)(lVar17 + 0x10) == 0) {
      LOCK();
      iVar13 = DAT_14c964868 + 1;
      UNLOCK();
      iVar15 = DAT_14c964868 + 1;
      bVar19 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar13;
      if (bVar19) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar15);
      }
      LOCK();
      iVar13 = *(int *)(lVar17 + 0x10);
      bVar19 = iVar13 == 0;
      if (bVar19) {
        *(int *)(lVar17 + 0x10) = iVar15;
        iVar13 = 0;
      }
      UNLOCK();
      if (bVar19) {
        iVar13 = iVar15;
      }
    }
  }
  *(int *)((longlong)puVar18 + 0x1c) = iVar13;
  puVar18[4] = FUN_148fd68a2;
  (**(code **)(*plVar9 + 0x1d8))(plVar9,&local_78,&local_58);
  if (local_50 == 0) {
LAB_1443c40ff:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
    goto LAB_1443c40ff;
  }
  plVar9 = local_68;
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar18 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14ba5ca80;
  LOCK();
  UNLOCK();
  lVar12 = DAT_14c758608 + 1;
  lVar17 = DAT_14c758608 + 1;
  if (lVar12 == 0) {
    LOCK();
    UNLOCK();
    lVar12 = DAT_14c758608 + 2;
    lVar17 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar17;
  local_58[2] = lVar12;
  *local_58 = &PTR_FUN_14ba5ca10;
  local_58[3] = 0;
  iVar13 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar4 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_58 + 3) = uVar4;
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar17 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar17 = 0;
    }
    iVar13 = *(int *)(lVar17 + 0x10);
    if (*(int *)(lVar17 + 0x10) == 0) {
      LOCK();
      iVar13 = DAT_14c964868 + 1;
      UNLOCK();
      iVar15 = DAT_14c964868 + 1;
      bVar19 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar13;
      if (bVar19) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar15);
      }
      LOCK();
      iVar13 = *(int *)(lVar17 + 0x10);
      bVar19 = iVar13 == 0;
      if (bVar19) {
        *(int *)(lVar17 + 0x10) = iVar15;
        iVar13 = 0;
      }
      UNLOCK();
      if (bVar19) {
        iVar13 = iVar15;
      }
    }
  }
  *(int *)((longlong)puVar18 + 0x1c) = iVar13;
  puVar18[4] = FUN_1443c5540;
  (**(code **)(*plVar9 + 0x1f8))(plVar9,&local_78,&local_58);
  if (local_50 == 0) {
LAB_1443c422d:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
    goto LAB_1443c422d;
  }
  plVar9 = local_68;
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar18 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14ba5cb60;
  LOCK();
  UNLOCK();
  lVar12 = DAT_14c758608 + 1;
  lVar17 = DAT_14c758608 + 1;
  if (lVar12 == 0) {
    LOCK();
    UNLOCK();
    lVar12 = DAT_14c758608 + 2;
    lVar17 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar17;
  local_58[2] = lVar12;
  *local_58 = &PTR_FUN_14ba5caf0;
  local_58[3] = 0;
  iVar13 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar4 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_58 + 3) = uVar4;
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar17 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar17 = 0;
    }
    iVar13 = *(int *)(lVar17 + 0x10);
    if (*(int *)(lVar17 + 0x10) == 0) {
      LOCK();
      iVar13 = DAT_14c964868 + 1;
      UNLOCK();
      iVar15 = DAT_14c964868 + 1;
      bVar19 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar13;
      if (bVar19) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar15);
      }
      LOCK();
      iVar13 = *(int *)(lVar17 + 0x10);
      bVar19 = iVar13 == 0;
      if (bVar19) {
        *(int *)(lVar17 + 0x10) = iVar15;
        iVar13 = 0;
      }
      UNLOCK();
      if (bVar19) {
        iVar13 = iVar15;
      }
    }
  }
  *(int *)((longlong)puVar18 + 0x1c) = iVar13;
  puVar18[4] = FUN_1443c5606;
  (**(code **)(*plVar9 + 0x338))(plVar9,&local_78,&local_58);
  if (local_50 == 0) {
LAB_1443c435e:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
    goto LAB_1443c435e;
  }
  plVar9 = local_68;
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar18 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14ba5cb60;
  LOCK();
  UNLOCK();
  lVar12 = DAT_14c758608 + 1;
  lVar17 = DAT_14c758608 + 1;
  if (lVar12 == 0) {
    LOCK();
    UNLOCK();
    lVar12 = DAT_14c758608 + 2;
    lVar17 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar17;
  local_58[2] = lVar12;
  *local_58 = &PTR_FUN_14ba5caf0;
  local_58[3] = 0;
  iVar13 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar4 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_58 + 3) = uVar4;
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar17 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar17 = 0;
    }
    iVar13 = *(int *)(lVar17 + 0x10);
    if (*(int *)(lVar17 + 0x10) == 0) {
      LOCK();
      iVar13 = DAT_14c964868 + 1;
      UNLOCK();
      iVar15 = DAT_14c964868 + 1;
      bVar19 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar13;
      if (bVar19) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar15);
      }
      LOCK();
      iVar13 = *(int *)(lVar17 + 0x10);
      bVar19 = iVar13 == 0;
      if (bVar19) {
        *(int *)(lVar17 + 0x10) = iVar15;
        iVar13 = 0;
      }
      UNLOCK();
      if (bVar19) {
        iVar13 = iVar15;
      }
    }
  }
  *(int *)((longlong)puVar18 + 0x1c) = iVar13;
  puVar18[4] = FUN_1443c5b08;
  (**(code **)(*plVar9 + 0x358))(plVar9,&local_78,&local_58);
  if (local_50 == 0) {
LAB_1443c447e:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
    goto LAB_1443c447e;
  }
  plVar9 = local_68;
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar18 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14ba5cc40;
  LOCK();
  UNLOCK();
  lVar12 = DAT_14c758608 + 1;
  lVar17 = DAT_14c758608 + 1;
  if (lVar12 == 0) {
    LOCK();
    UNLOCK();
    lVar12 = DAT_14c758608 + 2;
    lVar17 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar17;
  local_58[2] = lVar12;
  *local_58 = &PTR_FUN_14ba5cbd0;
  local_58[3] = 0;
  iVar13 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar4 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_58 + 3) = uVar4;
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar17 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar17 = 0;
    }
    iVar13 = *(int *)(lVar17 + 0x10);
    if (*(int *)(lVar17 + 0x10) == 0) {
      LOCK();
      iVar13 = DAT_14c964868 + 1;
      UNLOCK();
      iVar15 = DAT_14c964868 + 1;
      bVar19 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar13;
      if (bVar19) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar15);
      }
      LOCK();
      iVar13 = *(int *)(lVar17 + 0x10);
      bVar19 = iVar13 == 0;
      if (bVar19) {
        *(int *)(lVar17 + 0x10) = iVar15;
        iVar13 = 0;
      }
      UNLOCK();
      if (bVar19) {
        iVar13 = iVar15;
      }
    }
  }
  *(int *)((longlong)puVar18 + 0x1c) = iVar13;
  puVar18[4] = FUN_148fd698a;
  (**(code **)(*plVar9 + 0x178))(plVar9,&local_78,&local_58);
  if (local_50 == 0) {
LAB_1443c45ac:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
    goto LAB_1443c45ac;
  }
  plVar9 = local_68;
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar18 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14ba5cd20;
  LOCK();
  UNLOCK();
  lVar12 = DAT_14c758608 + 1;
  lVar17 = DAT_14c758608 + 1;
  if (lVar12 == 0) {
    LOCK();
    UNLOCK();
    lVar12 = DAT_14c758608 + 2;
    lVar17 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar17;
  local_58[2] = lVar12;
  *local_58 = &PTR_FUN_14ba5ccb0;
  local_58[3] = 0;
  iVar13 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar4 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_58 + 3) = uVar4;
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar17 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar17 = 0;
    }
    iVar13 = *(int *)(lVar17 + 0x10);
    if (*(int *)(lVar17 + 0x10) == 0) {
      LOCK();
      iVar13 = DAT_14c964868 + 1;
      UNLOCK();
      iVar15 = DAT_14c964868 + 1;
      bVar19 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar13;
      if (bVar19) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar15);
      }
      LOCK();
      iVar13 = *(int *)(lVar17 + 0x10);
      bVar19 = iVar13 == 0;
      if (bVar19) {
        *(int *)(lVar17 + 0x10) = iVar15;
        iVar13 = 0;
      }
      UNLOCK();
      if (bVar19) {
        iVar13 = iVar15;
      }
    }
  }
  *(int *)((longlong)puVar18 + 0x1c) = iVar13;
  puVar18[4] = FUN_1443c5c8e;
  (**(code **)(*plVar9 + 0x198))(plVar9,&local_78,&local_58);
  if (local_50 == 0) {
LAB_1443c46da:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
    goto LAB_1443c46da;
  }
  plVar9 = local_68;
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar18 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14ba5ce00;
  LOCK();
  UNLOCK();
  lVar12 = DAT_14c758608 + 1;
  lVar17 = DAT_14c758608 + 1;
  if (lVar12 == 0) {
    LOCK();
    UNLOCK();
    lVar12 = DAT_14c758608 + 2;
    lVar17 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar17;
  local_58[2] = lVar12;
  *local_58 = &PTR_FUN_14ba5cd90;
  local_58[3] = 0;
  iVar13 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar4 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_58 + 3) = uVar4;
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar17 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar17 = 0;
    }
    iVar13 = *(int *)(lVar17 + 0x10);
    if (*(int *)(lVar17 + 0x10) == 0) {
      LOCK();
      iVar13 = DAT_14c964868 + 1;
      UNLOCK();
      iVar15 = DAT_14c964868 + 1;
      bVar19 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar13;
      if (bVar19) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar15);
      }
      LOCK();
      iVar13 = *(int *)(lVar17 + 0x10);
      bVar19 = iVar13 == 0;
      if (bVar19) {
        *(int *)(lVar17 + 0x10) = iVar15;
        iVar13 = 0;
      }
      UNLOCK();
      if (bVar19) {
        iVar13 = iVar15;
      }
    }
  }
  *(int *)((longlong)puVar18 + 0x1c) = iVar13;
  puVar18[4] = FUN_148fd6b00;
  (**(code **)(*plVar9 + 600))(plVar9,&local_78,&local_58);
  if (local_50 == 0) {
LAB_1443c4808:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
    goto LAB_1443c4808;
  }
  plVar9 = local_68;
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar18 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14ba5cee0;
  LOCK();
  UNLOCK();
  lVar12 = DAT_14c758608 + 1;
  lVar17 = DAT_14c758608 + 1;
  if (lVar12 == 0) {
    LOCK();
    UNLOCK();
    lVar12 = DAT_14c758608 + 2;
    lVar17 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar17;
  local_58[2] = lVar12;
  *local_58 = &PTR_FUN_14ba5ce70;
  local_58[3] = 0;
  iVar13 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar4 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_58 + 3) = uVar4;
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar17 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar17 = 0;
    }
    iVar13 = *(int *)(lVar17 + 0x10);
    if (*(int *)(lVar17 + 0x10) == 0) {
      LOCK();
      iVar13 = DAT_14c964868 + 1;
      UNLOCK();
      iVar15 = DAT_14c964868 + 1;
      bVar19 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar13;
      if (bVar19) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar15);
      }
      LOCK();
      iVar13 = *(int *)(lVar17 + 0x10);
      bVar19 = iVar13 == 0;
      if (bVar19) {
        *(int *)(lVar17 + 0x10) = iVar15;
        iVar13 = 0;
      }
      UNLOCK();
      if (bVar19) {
        iVar13 = iVar15;
      }
    }
  }
  *(int *)((longlong)puVar18 + 0x1c) = iVar13;
  puVar18[4] = FUN_148fd6b4a;
  (**(code **)(*plVar9 + 0x278))(plVar9,&local_78,&local_58);
  if (local_50 == 0) {
LAB_1443c4936:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
    goto LAB_1443c4936;
  }
  plVar9 = local_68;
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar18 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14ba5ce00;
  LOCK();
  UNLOCK();
  lVar12 = DAT_14c758608 + 1;
  lVar17 = DAT_14c758608 + 1;
  if (lVar12 == 0) {
    LOCK();
    UNLOCK();
    lVar12 = DAT_14c758608 + 2;
    lVar17 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar17;
  local_58[2] = lVar12;
  *local_58 = &PTR_FUN_14ba5cd90;
  local_58[3] = 0;
  iVar13 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar4 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_58 + 3) = uVar4;
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar17 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar17 = 0;
    }
    iVar13 = *(int *)(lVar17 + 0x10);
    if (*(int *)(lVar17 + 0x10) == 0) {
      LOCK();
      iVar13 = DAT_14c964868 + 1;
      UNLOCK();
      iVar15 = DAT_14c964868 + 1;
      bVar19 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar13;
      if (bVar19) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar15);
      }
      LOCK();
      iVar13 = *(int *)(lVar17 + 0x10);
      bVar19 = iVar13 == 0;
      if (bVar19) {
        *(int *)(lVar17 + 0x10) = iVar15;
        iVar13 = 0;
      }
      UNLOCK();
      if (bVar19) {
        iVar13 = iVar15;
      }
    }
  }
  *(int *)((longlong)puVar18 + 0x1c) = iVar13;
  puVar18[4] = FUN_1443c5d62;
  (**(code **)(*plVar9 + 0x218))(plVar9,&local_78,&local_58);
  if (local_50 == 0) {
LAB_1443c4a56:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
    goto LAB_1443c4a56;
  }
  plVar9 = local_68;
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar18 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14ba5cfc0;
  LOCK();
  UNLOCK();
  lVar12 = DAT_14c758608 + 1;
  lVar17 = DAT_14c758608 + 1;
  if (lVar12 == 0) {
    LOCK();
    UNLOCK();
    lVar12 = DAT_14c758608 + 2;
    lVar17 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar17;
  local_58[2] = lVar12;
  *local_58 = &PTR_FUN_14ba5cf50;
  local_58[3] = 0;
  iVar13 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar4 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_58 + 3) = uVar4;
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar17 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar17 = 0;
    }
    iVar13 = *(int *)(lVar17 + 0x10);
    if (*(int *)(lVar17 + 0x10) == 0) {
      LOCK();
      iVar13 = DAT_14c964868 + 1;
      UNLOCK();
      iVar15 = DAT_14c964868 + 1;
      bVar19 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar13;
      if (bVar19) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar15);
      }
      LOCK();
      iVar13 = *(int *)(lVar17 + 0x10);
      bVar19 = iVar13 == 0;
      if (bVar19) {
        *(int *)(lVar17 + 0x10) = iVar15;
        iVar13 = 0;
      }
      UNLOCK();
      if (bVar19) {
        iVar13 = iVar15;
      }
    }
  }
  *(int *)((longlong)puVar18 + 0x1c) = iVar13;
  puVar18[4] = FUN_1443c5fe2;
  (**(code **)(*plVar9 + 0x238))(plVar9,&local_78,&local_58);
  if (local_50 == 0) {
LAB_1443c4b84:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
    goto LAB_1443c4b84;
  }
  plVar9 = local_68;
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar18 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14ba5d0a0;
  LOCK();
  UNLOCK();
  lVar12 = DAT_14c758608 + 1;
  lVar17 = DAT_14c758608 + 1;
  if (lVar12 == 0) {
    LOCK();
    UNLOCK();
    lVar12 = DAT_14c758608 + 2;
    lVar17 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar17;
  local_58[2] = lVar12;
  *local_58 = &PTR_FUN_14ba5d030;
  local_58[3] = 0;
  iVar13 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar4 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_58 + 3) = uVar4;
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar17 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar17 = 0;
    }
    iVar13 = *(int *)(lVar17 + 0x10);
    if (*(int *)(lVar17 + 0x10) == 0) {
      LOCK();
      iVar13 = DAT_14c964868 + 1;
      UNLOCK();
      iVar15 = DAT_14c964868 + 1;
      bVar19 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar13;
      if (bVar19) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar15);
      }
      LOCK();
      iVar13 = *(int *)(lVar17 + 0x10);
      bVar19 = iVar13 == 0;
      if (bVar19) {
        *(int *)(lVar17 + 0x10) = iVar15;
        iVar13 = 0;
      }
      UNLOCK();
      if (bVar19) {
        iVar13 = iVar15;
      }
    }
  }
  *(int *)((longlong)puVar18 + 0x1c) = iVar13;
  puVar18[4] = &LAB_148fd6bac;
  (**(code **)(*plVar9 + 0x3b8))(plVar9,&local_78,&local_58);
  if (local_50 != 0) {
    if (local_58 == (undefined8 *)0x0) goto LAB_1443c4cc3;
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
  }
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1443c4cc3:
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  uVar11 = *(undefined8 *)(param_1[0xe] + 0x18);
  plVar9 = param_1 + 0x10;
  uVar10 = FUN_14127b0d4(plVar9);
  (**(code **)(*local_68 + 0x100))(local_68,uVar10,uVar11,&local_78);
  puVar18 = local_78;
  iVar13 = (int)uStack_70;
  lVar17 = (longlong)(int)uStack_70;
  if (lVar17 != 0) {
    local_88 = param_1;
    uVar11 = FUN_14127b0d4(plVar9);
    local_a0 = puVar18;
    plVar5 = (longlong *)*puVar18;
    (**(code **)(*plVar5 + 8))(plVar5,&local_58);
    bVar6 = (**(code **)*local_58)(local_58,uVar11);
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
    local_80 = local_a0 + 2;
    iVar15 = 0;
    iVar14 = 0;
    do {
      local_a6 = bVar6;
      local_a5 = local_a6 ^ 1;
      lVar12 = (longlong)iVar14;
      local_98 = iVar14 + 1;
      if (iVar14 + 1 < iVar13) {
        local_98 = iVar13;
      }
      local_90 = lVar12 * 0x10;
      puVar18 = local_80 + lVar12 * 2;
      bVar6 = local_a6 & 1;
      local_a4 = iVar15;
      local_94 = iVar14;
      do {
        lVar12 = lVar12 + 1;
        iVar15 = local_98;
        if (lVar17 <= lVar12) break;
        uVar11 = FUN_14127b0d4(plVar9);
        (**(code **)(*(longlong *)*puVar18 + 8))((longlong *)*puVar18,&local_58);
        bVar7 = (**(code **)*local_58)(local_58,uVar11);
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
        iVar14 = iVar14 + 1;
        puVar18 = puVar18 + 2;
        iVar15 = iVar14;
      } while (bVar6 == bVar7);
      iVar14 = iVar15;
      iVar15 = local_a4;
      iVar16 = iVar14 - local_94;
      if ((local_a6 & 1) == 0) {
        if (local_a4 != local_94) {
          memmove(local_a0 + (longlong)local_a4 * 2,(void *)(local_90 + (longlong)local_a0),
                  (longlong)iVar16 << 4);
        }
        iVar15 = iVar15 + iVar16;
      }
      else {
        FUN_148ff1546(local_90 + (longlong)local_a0,iVar16);
        iVar15 = local_a4;
      }
      param_1 = local_88;
      bVar6 = local_a5;
    } while (lVar12 < lVar17);
    uStack_70 = CONCAT44(uStack_70._4_4_,iVar15);
    if (iVar15 < iVar13) {
      uVar11 = FUN_14127b0d4(plVar9);
      FUN_1443c6702(param_1,uVar11);
      iVar15 = (int)uStack_70;
    }
    puVar18 = local_78;
    if (iVar15 != 0) {
      lVar17 = 0;
      do {
        (**(code **)(**(longlong **)((longlong)puVar18 + lVar17) + 8))
                  (*(longlong **)((longlong)puVar18 + lVar17),&local_58);
        FUN_1443c6702(param_1,local_58);
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
        lVar17 = lVar17 + 0x10;
      } while ((longlong)iVar15 * 0x10 != lVar17);
    }
  }
  uVar3 = *(undefined1 *)(param_1[0xe] + 0x41);
  FUN_14127b0d4(plVar9);
  local_b8 = uVar3;
  FUN_1443c5c8e(param_1);
  cVar8 = FUN_140ba41f1(plVar9,param_1 + 0x16);
  if (cVar8 != '\0') {
    (**(code **)(*param_1 + 0x2f0))(param_1);
    (**(code **)(*param_1 + 0x300))(param_1,1);
  }
  FUN_148fd6bba(param_1);
  FUN_148ff1546(local_78,uStack_70 & 0xffffffff);
  if (local_78 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_60 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)local_60 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_60 + 0x10))(local_60);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443c5540 FUN_1443c5540 body=197 status=ok
// SIG undefined FUN_1443c5540(void)

void FUN_1443c5540(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  longlong param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  char cVar3;
  
  if (*param_4 == DAT_14cb8e138) {
    puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x70) + 0x18);
    cVar3 = (**(code **)*puVar1)(puVar1,param_3);
    if (cVar3 != '\0') {
      cVar3 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x18))();
      if (cVar3 == '\0') {
        cVar3 = FUN_143e6bb8c(param_5 + 0x28,*(undefined8 *)(param_1 + 0x38),
                              *(undefined8 *)(param_1 + 0x40),0,0x80002000);
        if (cVar3 != '\0') {
          (**(code **)(**(longlong **)(param_1 + 0x40) + 0x10))
                    (*(longlong **)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
          (**(code **)(**(longlong **)(param_1 + 0x40) + 8))
                    (*(longlong **)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
          plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 0xb8);
          (**(code **)(*plVar2 + 0x60))
                    (plVar2,*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x40),1);
        }
      }
      if (*(char *)(param_1 + 0x229) == '\0') {
        *(undefined1 *)(param_1 + 0x229) = 1;
        FUN_148fd6bba(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1443c5606 FUN_1443c5606 body=1280 status=ok
// SIG undefined FUN_1443c5606(void)

void FUN_1443c5606(longlong *param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8;
  uint local_1a0;
  undefined8 *local_198;
  undefined8 local_190;
  longlong *local_188;
  byte local_17a;
  byte local_179;
  longlong *local_178;
  longlong *local_170;
  undefined8 *local_168;
  ulonglong uStack_160;
  undefined8 local_158;
  longlong *plStack_150;
  undefined8 local_f8;
  longlong *local_f0;
  undefined **local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined **local_90;
  undefined8 local_88;
  longlong lStack_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  cVar7 = FUN_140ba41f1(param_1 + 0x10,param_1 + 0x16);
  if ((cVar7 != '\0') &&
     (cVar7 = (**(code **)**(undefined8 **)(param_1[0xe] + 0x18))
                        (*(undefined8 **)(param_1[0xe] + 0x18),param_3), cVar7 != '\0')) {
    local_168 = (undefined8 *)0x0;
    uStack_160 = 0;
    (**(code **)(*param_4 + 0x28))(param_4,&local_168);
    puVar13 = local_168;
    (**(code **)(*param_1 + 0x180))(param_1);
    local_158 = 0;
    plVar10 = (longlong *)FUN_1401e3228();
    (**(code **)(*plVar10 + 0x40))(plVar10,&local_178);
    (**(code **)(*param_1 + 0x360))(param_1,&local_17a,&local_168,1);
    if (local_179 - 1 < 2) {
      local_e0 = 0;
      uStack_d8 = 0;
      local_d0 = 0;
      local_e8 = &PTR_FUN_14a5af930;
      local_a0 = 0;
      local_98 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      plStack_150 = *(longlong **)(param_2 + 0x10);
      if (plStack_150 == (longlong *)0x0) {
LAB_1443c575a:
        local_158 = 0;
        plStack_150 = (longlong *)0x0;
        bVar15 = true;
      }
      else {
        iVar8 = (int)plStack_150[1];
        do {
          if (iVar8 == 0) goto LAB_1443c575a;
          LOCK();
          iVar6 = (int)plStack_150[1];
          bVar15 = iVar8 == iVar6;
          if (bVar15) {
            *(int *)(plStack_150 + 1) = iVar8 + 1;
            iVar6 = iVar8;
          }
          iVar8 = iVar6;
          UNLOCK();
        } while (!bVar15);
        local_158 = *(undefined8 *)(param_2 + 8);
        LOCK();
        *(int *)(plStack_150 + 1) = (int)plStack_150[1] + 1;
        UNLOCK();
        bVar15 = false;
      }
      plVar10 = plStack_150;
      FUN_147841a2a(&local_e8,&local_158);
      plVar3 = plStack_150;
      if (plStack_150 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_150 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_150)(plStack_150);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      if (!bVar15) {
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
      if ((int)uStack_160 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uStack_160 & 0xffffffff);
      }
      if ((int)uStack_b0._4_4_ < (int)uStack_160) {
        FUN_148ff2824();
      }
      if ((int)uStack_160 != 0) {
        local_198 = local_168 + (longlong)(int)uStack_160 * 2;
        puVar13 = local_168;
        do {
          plVar10 = (longlong *)*puVar13;
          plVar3 = (longlong *)puVar13[1];
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
          }
          (**(code **)(*plVar10 + 0x20))(plVar10,&local_190);
          uVar11 = (**(code **)(*plVar10 + 0x18))(plVar10);
          puVar12 = (undefined8 *)(**(code **)(*plVar10 + 8))(plVar10);
          uVar5 = uStack_b0;
          lVar14 = (longlong)(int)uStack_b0;
          uVar9 = (int)uStack_b0 + 1;
          uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar9);
          if (uStack_b0._4_4_ < uVar9) {
            FUN_148ff2978(&local_b8,uVar5 & 0xffffffff);
          }
          lVar4 = local_b8;
          local_f8 = local_190;
          local_f0 = local_188;
          if (local_188 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_188 + 1) = (int)local_188[1] + 1;
            UNLOCK();
          }
          FUN_148fd279e(&local_158,uVar11);
          local_88 = *puVar12;
          lStack_80 = puVar12[1];
          if (lStack_80 != 0) {
            LOCK();
            *(int *)(lStack_80 + 8) = *(int *)(lStack_80 + 8) + 1;
            UNLOCK();
          }
          local_78 = 0;
          local_90 = &PTR_FUN_14a5af930;
          local_70 = 0;
          uStack_68 = 0;
          FUN_148ff2894(lVar4 + lVar14 * 0x98,&local_90,&local_158,&local_f8);
          plVar10 = local_188;
          if (local_188 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_188 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_188)(local_188);
              LOCK();
              piVar2 = (int *)((longlong)plVar10 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar10 + 0x10))(plVar10);
              }
            }
          }
          if (plVar3 != (longlong *)0x0) {
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
          }
          puVar13 = puVar13 + 2;
        } while (puVar13 != local_198);
      }
      local_a8 = 0;
      puVar13 = (undefined8 *)FUN_14001cc68(0x60,0x10);
      *puVar13 = 0;
      FUN_148ff2aca(puVar13 + 1,&local_e8);
      if (puVar13 != (undefined8 *)0x0) {
        puVar12 = (undefined8 *)param_1[0x3e];
        param_1[0x3e] = (longlong)puVar13;
        *puVar12 = puVar13;
      }
      bVar15 = true;
      if ((((((int)param_1[0x42] != 0) &&
            (uVar9 = *(uint *)((longlong)param_1 + 0x20c), -1 < (int)uVar9)) &&
           ((int)uVar9 < DAT_14c9647dc)) &&
          ((plVar10 = (longlong *)
                      ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
           plVar10 != (longlong *)0x0 && ((int)plVar10[2] == (int)param_1[0x42])))) &&
         ((*(uint *)(plVar10 + 1) & 0x10200000) == 0)) {
        bVar15 = *plVar10 == 0;
      }
      if ((bVar15) && (local_179 == 2)) {
        FUN_1443c7370(param_1);
      }
      FUN_14601549e(&local_e8);
    }
    else {
      puVar13 = (undefined8 *)(**(code **)(*(longlong *)*puVar13 + 8))();
      local_1a0 = (uint)local_17a;
      local_1a8 = local_179 != 3 && local_17a == 0;
      (**(code **)(*local_178 + 0x68))(local_178,param_2,param_3,*puVar13);
    }
    if (local_170 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_170 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*local_170)(local_170);
        LOCK();
        piVar2 = (int *)((longlong)local_170 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_170 + 0x10))(local_170);
        }
      }
    }
    FUN_148fe8eb3(local_168,uStack_160 & 0xffffffff);
    if (local_168 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443c5b08 FUN_1443c5b08 body=388 status=ok
// SIG undefined FUN_1443c5b08(void)

void FUN_1443c5b08(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  uint local_c0;
  undefined8 *local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong *local_90;
  longlong *local_88;
  byte local_7a;
  char local_79;
  undefined8 *local_78;
  ulonglong uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  cVar2 = (**(code **)**(undefined8 **)(param_1[0xe] + 0x18))
                    (*(undefined8 **)(param_1[0xe] + 0x18),param_3);
  if (cVar2 != '\0') {
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    (**(code **)(*param_4 + 0x28))(param_4,&local_78);
    puVar4 = local_78;
    (**(code **)(*param_1 + 0x360))(param_1,&local_7a,&local_78,0);
    (**(code **)(*param_1 + 0x180))(param_1);
    local_68 = 0;
    plVar3 = (longlong *)FUN_1401e3228();
    (**(code **)(*plVar3 + 0x40))(plVar3,&local_90);
    local_a8 = 0;
    uStack_a0 = 0;
    puVar4 = (undefined8 *)(**(code **)(*(longlong *)*puVar4 + 8))();
    local_c0 = (uint)local_7a;
    local_c8 = local_7a == 0 && local_79 != '\x03';
    local_b8 = &local_a8;
    (**(code **)(*local_90 + 0x70))(local_90,param_2,param_3,*puVar4);
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_88 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar1 = (int *)((longlong)local_88 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_88 + 0x10))(local_88);
        }
      }
    }
    FUN_148fe8eb3(local_78,uStack_70 & 0xffffffff);
    if (local_78 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443c5c8e FUN_1443c5c8e body=212 status=ok
// SIG undefined FUN_1443c5c8e(void)

void FUN_1443c5c8e(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  undefined1 param_5)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  undefined8 unaff_RSI;
  
  if ((char)param_4 == '\x06') {
    bVar1 = 1;
  }
  else {
    if ((param_4 & 0xff) != 5) goto LAB_1443c5d2a;
    bVar1 = 0;
  }
  if (*(char *)(param_1 + 0x225) == '\x01') {
    if (*(byte *)(param_1 + 0x224) == bVar1) goto LAB_1443c5d2a;
    cVar2 = '\x01';
    if ((*(byte *)(param_1 + 0x224) & 1) == 0) goto LAB_1443c5ce0;
  }
  else {
LAB_1443c5ce0:
    cVar2 = '\x01';
    if (*(char *)(param_1 + 0x226) == '\0') {
      if (*(char *)(param_1 + 0x22b) == '\x01') {
        cVar2 = *(char *)(param_1 + 0x22a);
      }
      else {
        cVar2 = '\0';
      }
    }
  }
  *(byte *)(param_1 + 0x224) = bVar1;
  *(undefined1 *)(param_1 + 0x225) = 1;
  if ((bVar1 == 0) && (*(char *)(param_1 + 0x226) == '\0')) {
    if (*(char *)(param_1 + 0x22b) == '\0') {
      if (cVar2 == '\0') goto LAB_1443c5d2a;
      cVar3 = '\0';
    }
    else {
      cVar3 = *(char *)(param_1 + 0x22a);
      if (cVar2 == cVar3) goto LAB_1443c5d2a;
    }
  }
  else {
    cVar3 = '\x01';
    if (cVar2 != '\0') goto LAB_1443c5d2a;
  }
  FUN_140898514(param_1 + 800,cVar3);
LAB_1443c5d2a:
  FUN_148ff4466(param_1 + 0x2f0,param_4,
                CONCAT71((int7)((ulonglong)unaff_RSI >> 8),param_5) & 0xffffffff);
  return;
}



// FUNCTION 1443c5d62 FUN_1443c5d62 body=639 status=ok
// SIG undefined FUN_1443c5d62(void)

void FUN_1443c5d62(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined ***pppuVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  void *_Src;
  int iVar7;
  char cVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  size_t _Size;
  bool bVar12;
  undefined1 auStack_d8 [32];
  undefined **local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  byte local_a0;
  void *local_98;
  ulonglong uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  cVar8 = (**(code **)**(undefined8 **)(param_1[0xe] + 0x18))
                    (*(undefined8 **)(param_1[0xe] + 0x18),param_3);
  if (cVar8 != '\0') {
    pppuVar3 = (undefined ***)(param_1 + 0x16);
    plVar10 = (longlong *)FUN_148fd8170(param_1,pppuVar3);
    plVar11 = *(longlong **)(param_4 + 0x10);
    if (plVar11 == (longlong *)0x0) {
LAB_1443c5ded:
      plVar11 = (longlong *)0x0;
    }
    else {
      iVar9 = (int)plVar11[1];
      do {
        if (iVar9 == 0) goto LAB_1443c5ded;
        LOCK();
        iVar7 = (int)plVar11[1];
        bVar12 = iVar9 == iVar7;
        if (bVar12) {
          *(int *)(plVar11 + 1) = iVar9 + 1;
          iVar7 = iVar9;
        }
        iVar9 = iVar7;
        UNLOCK();
      } while (!bVar12);
    }
    local_b0 = 0;
    if (plVar11 != (longlong *)0x0) {
      local_b0 = *(undefined8 *)(param_4 + 8);
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    local_a0 = 0;
    local_b8 = &PTR_FUN_14a5af930;
    local_98 = (void *)0x0;
    uStack_90 = 0;
    local_a8 = plVar11;
    if (&local_b8 != pppuVar3) {
      local_78 = local_78 & 0xffffffffffffff00;
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
      }
      local_58 = local_78;
      local_88._0_4_ = (undefined4)local_b0;
      local_88._4_4_ = (undefined4)((ulonglong)local_b0 >> 0x20);
      uStack_80._0_4_ = SUB84(plVar11,0);
      uStack_80._4_4_ = (undefined4)((ulonglong)plVar11 >> 0x20);
      local_68 = (undefined4)local_88;
      uStack_64 = local_88._4_4_;
      uStack_60 = (undefined4)uStack_80;
      uStack_5c = uStack_80._4_4_;
      uVar4 = param_1[0x19];
      lVar5 = param_1[0x17];
      lVar6 = param_1[0x18];
      *(undefined4 *)(param_1 + 0x17) = (undefined4)local_88;
      *(undefined4 *)((longlong)param_1 + 0xbc) = local_88._4_4_;
      *(undefined4 *)(param_1 + 0x18) = (undefined4)uStack_80;
      *(undefined4 *)((longlong)param_1 + 0xc4) = uStack_80._4_4_;
      param_1[0x19] = local_78;
      local_88 = lVar5;
      uStack_80 = lVar6;
      local_78 = uVar4;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[uVar4 & 0xff])();
      _Src = local_98;
      iVar9 = (int)uStack_90;
      _Size = (size_t)(int)uStack_90;
      *(int *)(param_1 + 0x1b) = (int)uStack_90;
      if ((int)uStack_90 == 0 && *(int *)((longlong)param_1 + 0xdc) == 0) {
        *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
      }
      else {
        FUN_1447a127e(param_1 + 0x1a,uStack_90 & 0xffffffff);
        if (iVar9 != 0) {
          memcpy((void *)param_1[0x1a],_Src,_Size);
        }
      }
      local_b8 = &PTR_FUN_14a5af930;
      if (local_98 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    local_b8 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_a0])(&local_b0);
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
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x2b8))(plVar10);
      cVar8 = FUN_148fd1e76(plVar10);
      if (cVar8 != '\0') {
        (**(code **)(*param_1 + 0x300))(param_1,0);
      }
    }
    plVar11 = (longlong *)FUN_148fd8170(param_1,pppuVar3);
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 0x2b0))(plVar11);
      cVar8 = FUN_148fd1e76(plVar11);
      if (cVar8 != '\0') {
        (**(code **)(*param_1 + 0x300))(param_1,1);
      }
    }
    FUN_148fd6cde(param_1);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443c5fe2 FUN_1443c5fe2 body=1822 status=ok
// SIG undefined FUN_1443c5fe2(void)

void FUN_1443c5fe2(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  bool bVar16;
  undefined1 auStack_208 [32];
  longlong *local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined1 local_178 [8];
  longlong *local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  longlong local_150;
  int local_144;
  undefined **local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  longlong local_110;
  undefined8 uStack_108;
  undefined1 local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined **local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined **local_b8;
  longlong *plStack_b0;
  longlong *local_a8;
  byte local_a0;
  longlong local_98;
  undefined8 uStack_90;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_208;
  cVar7 = (**(code **)**(undefined8 **)(param_1[0xe] + 0x18))
                    (*(undefined8 **)(param_1[0xe] + 0x18),param_3);
  if (cVar7 != '\0') {
    plVar12 = *(longlong **)(param_4 + 0x10);
    if (plVar12 == (longlong *)0x0) {
LAB_1443c606b:
      plVar12 = (longlong *)0x0;
    }
    else {
      iVar9 = (int)plVar12[1];
      do {
        if (iVar9 == 0) goto LAB_1443c606b;
        LOCK();
        iVar6 = (int)plVar12[1];
        bVar16 = iVar9 == iVar6;
        if (bVar16) {
          *(int *)(plVar12 + 1) = iVar9 + 1;
          iVar6 = iVar9;
        }
        iVar9 = iVar6;
        UNLOCK();
      } while (!bVar16);
    }
    plVar3 = param_1 + 0x1c;
    plStack_b0 = (longlong *)0x0;
    if (plVar12 != (longlong *)0x0) {
      plStack_b0 = *(longlong **)(param_4 + 8);
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
    }
    local_a0 = 0;
    local_b8 = &PTR_FUN_14a5af930;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = plVar12;
    uVar8 = FUN_147bede77(&local_b8);
    iVar9 = FUN_148ff1fe4(plVar3,uVar8,&local_b8);
    if (iVar9 == -1) {
      lVar11 = 0;
    }
    else {
      lVar11 = (longlong)iVar9 * 0x40 + *plVar3;
    }
    puVar13 = (undefined8 *)(lVar11 + 0x30);
    if (lVar11 == 0) {
      puVar13 = (undefined8 *)0x0;
    }
    local_b8 = &PTR_FUN_14a5af930;
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    local_b8 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_a0])(&plStack_b0);
    if (plVar12 != (longlong *)0x0) {
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
    if (puVar13 != (undefined8 *)0x0) {
      uVar14 = CONCAT71((int7)((ulonglong)plVar12 >> 8),param_5);
      cVar7 = (**(code **)*param_2)(param_2,param_4);
      if (cVar7 == '\0') {
        local_1e8 = (longlong *)*puVar13;
        plVar12 = *(longlong **)(param_4 + 0x10);
        if (plVar12 == (longlong *)0x0) {
LAB_1443c61cd:
          plVar12 = (longlong *)0x0;
        }
        else {
          iVar9 = (int)plVar12[1];
          do {
            if (iVar9 == 0) goto LAB_1443c61cd;
            LOCK();
            iVar6 = (int)plVar12[1];
            bVar16 = iVar9 == iVar6;
            if (bVar16) {
              *(int *)(plVar12 + 1) = iVar9 + 1;
              iVar6 = iVar9;
            }
            iVar9 = iVar6;
            UNLOCK();
          } while (!bVar16);
        }
        plStack_b0 = (longlong *)0x0;
        if (plVar12 != (longlong *)0x0) {
          plStack_b0 = *(longlong **)(param_4 + 8);
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        local_a0 = 0;
        local_b8 = &PTR_FUN_14a5af930;
        local_98 = 0;
        uStack_90 = 0;
        local_a8 = plVar12;
        FUN_148ff396e(plVar3,&local_b8);
        local_b8 = &PTR_FUN_14a5af930;
        if (local_98 != 0) {
          FUN_1400020a8();
        }
        local_b8 = &PTR_FUN_14a184370;
        (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_a0])(&plStack_b0);
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar12 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
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
        plVar12 = local_1e8;
        FUN_148ff3b7c(param_1 + 0x58,local_1e8,uVar14 & 0xffffffff);
        FUN_140b6e8c2(plVar12[8] + 0x80,&local_1e0);
        FUN_148fd2fac(&local_150,local_1e0);
        if (local_144 != -1) {
          FUN_1443c70c4(param_1,&local_150);
        }
        (**(code **)(*plVar12 + 0x2c0))(plVar12,uVar14 & 0xffffffff);
        FUN_144757f48(plVar12,0x40000000);
        uVar10 = *(uint *)((longlong)plVar12 + 0xc);
        if ((int)uVar10 < DAT_14c9647dc) {
          lVar11 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
        }
        else {
          lVar11 = 0;
        }
        do {
          uVar10 = *(uint *)(lVar11 + 8);
          if ((uVar10 >> 0x15 & 1) != 0) break;
          LOCK();
          bVar16 = uVar10 == *(uint *)(lVar11 + 8);
          if (bVar16) {
            *(uint *)(lVar11 + 8) = uVar10 | 0x200000;
          }
          UNLOCK();
        } while (!bVar16);
        cVar7 = FUN_140ba41f1(param_1 + 0x10,param_1 + 0x16);
        if (cVar7 != '\0') {
          (**(code **)(*param_1 + 0x180))(param_1);
          local_b8 = (undefined **)0x0;
          plVar12 = (longlong *)FUN_1401e3228();
          (**(code **)(*plVar12 + 0x40))(plVar12,local_178);
          local_188 = 0;
          local_198 = 0;
          uStack_190 = 0;
          local_1a8 = 0;
          uStack_1a0 = 0;
          local_1b8 = 0;
          uStack_1b0 = 0;
          local_1c8 = 0;
          uStack_1c0 = 0;
          local_1d8 = 0;
          uStack_1d0 = 0;
          local_128 = 0;
          local_138 = 0;
          uStack_130 = 0;
          local_140 = &PTR_FUN_14a5af930;
          local_f8 = 0;
          local_f0 = 0;
          local_120 = 0;
          uStack_118 = 0;
          local_110 = 0;
          uStack_108 = 0;
          plStack_b0 = (longlong *)param_2[2];
          if (plStack_b0 == (longlong *)0x0) {
LAB_1443c641e:
            local_b8 = (undefined **)0x0;
            plStack_b0 = (longlong *)0x0;
            bVar16 = true;
          }
          else {
            iVar9 = (int)plStack_b0[1];
            do {
              if (iVar9 == 0) goto LAB_1443c641e;
              LOCK();
              iVar6 = (int)plStack_b0[1];
              bVar16 = iVar9 == iVar6;
              if (bVar16) {
                *(int *)(plStack_b0 + 1) = iVar9 + 1;
                iVar6 = iVar9;
              }
              iVar9 = iVar6;
              UNLOCK();
            } while (!bVar16);
            local_b8 = (undefined **)param_2[1];
            LOCK();
            *(int *)(plStack_b0 + 1) = (int)plStack_b0[1] + 1;
            UNLOCK();
            bVar16 = false;
          }
          plVar12 = plStack_b0;
          FUN_147841a2a(&local_140,&local_b8);
          plVar3 = plStack_b0;
          if (plStack_b0 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_b0 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_b0)(plStack_b0);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
          if (!bVar16) {
            LOCK();
            plVar3 = plVar12 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
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
          uVar14 = uStack_108;
          plVar12 = *(longlong **)(param_4 + 0x10);
          if (plVar12 == (longlong *)0x0) {
LAB_1443c64c7:
            plVar12 = (longlong *)0x0;
          }
          else {
            iVar9 = (int)plVar12[1];
            do {
              if (iVar9 == 0) goto LAB_1443c64c7;
              LOCK();
              iVar6 = (int)plVar12[1];
              bVar16 = iVar9 == iVar6;
              if (bVar16) {
                *(int *)(plVar12 + 1) = iVar9 + 1;
                iVar6 = iVar9;
              }
              iVar9 = iVar6;
              UNLOCK();
            } while (!bVar16);
          }
          uVar15 = 0;
          if (plVar12 != (longlong *)0x0) {
            uVar15 = *(undefined8 *)(param_4 + 8);
          }
          lVar11 = (longlong)(int)uStack_108;
          uVar10 = (int)uStack_108 + 1;
          uStack_108 = CONCAT44(uStack_108._4_4_,uVar10);
          if (uStack_108._4_4_ < uVar10) {
            FUN_148ff2978(&local_110,uVar14 & 0xffffffff);
          }
          lVar5 = local_110;
          local_168 = 0;
          uStack_160 = 0;
          FUN_148fe7106(&local_b8,&local_1d8);
          local_d0 = 0;
          local_e0 = uVar15;
          local_d8 = plVar12;
          if (plVar12 == (longlong *)0x0) {
            local_e8 = &PTR_FUN_14a5af930;
            local_c8 = 0;
            uStack_c0 = 0;
            FUN_148ff2894(lVar5 + lVar11 * 0x98,&local_e8,&local_b8,&local_168);
          }
          else {
            LOCK();
            *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
            UNLOCK();
            local_d0 = 0;
            local_e8 = &PTR_FUN_14a5af930;
            local_c8 = 0;
            uStack_c0 = 0;
            FUN_148ff2894(lVar5 + lVar11 * 0x98,&local_e8,&local_b8,&local_168);
            LOCK();
            plVar3 = plVar12 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
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
          local_100 = 1;
          local_f0 = 1;
          puVar13 = (undefined8 *)FUN_14001cc68(0x60,0x10);
          *puVar13 = 0;
          FUN_148ff2aca(puVar13 + 1,&local_140);
          if (puVar13 != (undefined8 *)0x0) {
            puVar4 = (undefined8 *)param_1[0x3e];
            param_1[0x3e] = (longlong)puVar13;
            *puVar4 = puVar13;
          }
          if ((((((int)param_1[0x42] == 0) ||
                (uVar10 = *(uint *)((longlong)param_1 + 0x20c), (int)uVar10 < 0)) ||
               (DAT_14c9647dc <= (int)uVar10)) ||
              ((plVar12 = (longlong *)
                          ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
               plVar12 == (longlong *)0x0 || ((int)plVar12[2] != (int)param_1[0x42])))) ||
             (((*(uint *)(plVar12 + 1) & 0x10200000) != 0 || (*plVar12 == 0)))) {
            FUN_1443c7370(param_1);
          }
          FUN_14601549e(&local_140);
          FUN_1458ea6a8(&local_1d8);
          if (local_170 != (longlong *)0x0) {
            LOCK();
            plVar12 = local_170 + 1;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)*plVar12 == 0) {
              (**(code **)*local_170)(local_170);
              LOCK();
              piVar2 = (int *)((longlong)local_170 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*local_170 + 0x10))(local_170);
              }
            }
          }
        }
        FUN_148fd6cde(param_1);
        if ((local_144 != -1) && (local_150 != 0)) {
          FUN_1400020a8();
        }
      }
      else if (*(char *)((longlong)param_1 + 0x227) == '\0') {
        FUN_1443c844a(param_1,uVar14 & 0xffffffff);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443c6702 FUN_1443c6702 body=1897 status=ok
// SIG undefined FUN_1443c6702(void)

undefined ** FUN_1443c6702(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined ***pppuVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  longlong lVar14;
  undefined **ppuVar15;
  int iVar16;
  longlong *plVar17;
  bool bVar18;
  undefined1 auStack_168 [32];
  longlong *local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined8 local_130;
  wchar_t *local_128;
  code *local_120;
  undefined1 *local_118;
  undefined ****local_110;
  code *local_108;
  code *local_100;
  undefined1 local_e9;
  undefined **local_e8;
  longlong *local_e0;
  undefined *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong local_b8;
  undefined1 local_ac [4];
  undefined ***local_a8;
  undefined **local_a0;
  longlong *local_98;
  byte local_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined **local_78;
  longlong local_70;
  longlong *local_68;
  byte local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  cVar6 = (**(code **)(*param_2 + 0x28))(param_2);
  if (cVar6 == '\0') {
    ppuVar13 = (undefined **)0x0;
    goto LAB_1443c673d;
  }
  plVar17 = (longlong *)param_2[2];
  if (plVar17 == (longlong *)0x0) {
LAB_1443c6777:
    plVar17 = (longlong *)0x0;
  }
  else {
    iVar8 = (int)plVar17[1];
    do {
      if (iVar8 == 0) goto LAB_1443c6777;
      LOCK();
      iVar16 = (int)plVar17[1];
      bVar18 = iVar8 == iVar16;
      if (bVar18) {
        *(int *)(plVar17 + 1) = iVar8 + 1;
        iVar16 = iVar8;
      }
      iVar8 = iVar16;
      UNLOCK();
    } while (!bVar18);
  }
  local_70 = 0;
  if (plVar17 != (longlong *)0x0) {
    local_70 = param_2[1];
  }
  local_60 = 0;
  local_68 = plVar17;
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
    UNLOCK();
    local_60 = 0;
    local_78 = &PTR_FUN_14a5af930;
    local_58 = 0;
    uStack_50 = 0;
    LOCK();
    plVar9 = plVar17 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar17)(plVar17);
      LOCK();
      piVar2 = (int *)((longlong)plVar17 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
      }
    }
  }
  else {
    local_78 = &PTR_FUN_14a5af930;
    local_58 = 0;
    uStack_50 = 0;
  }
  plVar17 = param_1 + 0x1c;
  uVar7 = FUN_147bede77(&local_78);
  iVar8 = FUN_148ff1fe4(plVar17,uVar7,&local_78);
  if (iVar8 == -1) {
LAB_1443c68ac:
    lVar10 = FUN_145988618();
    if (DAT_14c951858 == 0) {
      local_110 = &local_a8;
      local_a8 = (undefined ***)FUN_1449e2820;
      local_100 = FUN_14081d0ea;
      local_108 = FUN_14081d0ea;
      local_118 = &LAB_1468c5283;
      local_120 = FUN_142809da0;
      local_128 = L"Engine";
      local_130 = 0x400000000;
      local_138 = 0x10000000;
      local_140 = 8;
      local_148 = (longlong *)CONCAT44(local_148._4_4_,0x50);
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar11 = param_1[4];
    if (lVar11 == 0) {
      lVar14 = 0;
    }
    else {
      do {
        if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x38) < *(int *)(lVar10 + 0x38)) ||
           (lVar14 = lVar11,
           *(longlong *)
            (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar10 + 0x38) * 8) != lVar10 + 0x30)) {
          lVar14 = 0;
        }
      } while ((lVar14 == 0) && (lVar11 = *(longlong *)(lVar11 + 0x20), lVar11 != 0));
    }
    plVar9 = (longlong *)param_2[2];
    if (plVar9 == (longlong *)0x0) {
LAB_1443c6906:
      plVar9 = (longlong *)0x0;
    }
    else {
      iVar8 = (int)plVar9[1];
      do {
        if (iVar8 == 0) goto LAB_1443c6906;
        LOCK();
        iVar16 = (int)plVar9[1];
        bVar18 = iVar8 == iVar16;
        if (bVar18) {
          *(int *)(plVar9 + 1) = iVar8 + 1;
          iVar16 = iVar8;
        }
        iVar8 = iVar16;
        UNLOCK();
      } while (!bVar18);
    }
    local_a0 = (undefined **)0x0;
    if (plVar9 != (longlong *)0x0) {
      local_a0 = (undefined **)param_2[1];
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    local_90 = 0;
    local_a8 = (undefined ***)&PTR_FUN_14a5af930;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = plVar9;
    local_e9 = FUN_148fd2aa4(lVar14,&local_a8);
    local_a8 = (undefined ***)&PTR_FUN_14a5af930;
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    local_a8 = (undefined ***)&PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_90])(&local_a0);
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
    (**(code **)(*param_1 + 0x370))(param_1,&local_b8,local_e9);
    lVar10 = local_b8;
    if (((local_b8 == 0) || (lVar11 = FUN_1459f5a9e(), lVar11 == 0)) ||
       (*(int *)(lVar10 + 0x38) < *(int *)(lVar11 + 0x38))) {
      ppuVar13 = (undefined **)0x0;
    }
    else {
      ppuVar13 = (undefined **)0x0;
      if ((*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
           lVar11 + 0x30) && (local_b8 != 0)) {
        uVar4 = *(undefined8 *)(param_1[0xe] + 0x18);
        (**(code **)(*param_1 + 0x180))(param_1);
        local_a8 = (undefined ***)0x0;
        plVar9 = (longlong *)FUN_1401e3228();
        (**(code **)(*plVar9 + 0x40))(plVar9,&local_c8);
        uVar12 = FUN_14127b0d4(param_1 + 0x10);
        local_148 = param_2;
        (**(code **)(*local_c8 + 0xd8))(local_c8,&local_d8,uVar12,uVar4);
        lVar10 = local_b8;
        if ((undefined **)local_d8 == (undefined **)0x0) {
          ppuVar13 = (undefined **)0x0;
        }
        else {
          if (((local_b8 == 0) || (lVar11 = FUN_1459f5a9e(), lVar11 == 0)) ||
             ((*(int *)(lVar10 + 0x38) < *(int *)(lVar11 + 0x38) ||
              (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8)
               != lVar11 + 0x30)))) {
            local_b8 = 0;
          }
          ppuVar13 = (undefined **)FUN_148fd750f(param_1,local_b8);
          local_e8 = ppuVar13;
          if ((ppuVar13 != (undefined **)0x0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(ppuVar13);
          }
          local_a0 = (undefined **)&local_e8;
          local_a8 = &local_78;
          FUN_148ff2052(plVar17,local_ac,&local_a8);
          local_a8 = (undefined ***)0x0;
          local_a0 = (undefined **)((ulonglong)local_a0 & 0xffffffff00000000);
          FUN_1446efa72(&local_a8,0,3,0x10);
          pppuVar5 = local_a8;
          local_a0 = (undefined **)CONCAT44(local_a0._4_4_,3);
          *local_a8 = &PTR_LAB_14ba5c850;
          local_a8[1] = ppuVar13;
          LOCK();
          UNLOCK();
          ppuVar15 = (undefined **)(DAT_14c758608 + 1);
          lVar10 = DAT_14c758608 + 1;
          if (ppuVar15 == (undefined **)0x0) {
            LOCK();
            UNLOCK();
            ppuVar15 = (undefined **)(DAT_14c758608 + 2);
            lVar10 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar10;
          local_a8[2] = ppuVar15;
          *local_a8 = &PTR_FUN_14ba5d1f0;
          local_a8[3] = (undefined **)0x0;
          iVar8 = 0;
          if (param_1 != (longlong *)0x0) {
            uVar3 = *(uint *)((longlong)param_1 + 0xc);
            *(uint *)(local_a8 + 3) = uVar3;
            if ((int)uVar3 < DAT_14c9647dc) {
              lVar10 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
            }
            else {
              lVar10 = 0;
            }
            iVar8 = *(int *)(lVar10 + 0x10);
            if (*(int *)(lVar10 + 0x10) == 0) {
              LOCK();
              iVar8 = DAT_14c964868 + 1;
              UNLOCK();
              iVar16 = DAT_14c964868 + 1;
              bVar18 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar8;
              if (bVar18) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar16);
              }
              LOCK();
              iVar8 = *(int *)(lVar10 + 0x10);
              bVar18 = iVar8 == 0;
              if (bVar18) {
                *(int *)(lVar10 + 0x10) = iVar16;
                iVar8 = 0;
              }
              UNLOCK();
              if (bVar18) {
                iVar8 = iVar16;
              }
            }
          }
          plVar17 = local_d0;
          *(int *)((longlong)pppuVar5 + 0x1c) = iVar8;
          pppuVar5[4] = (undefined **)FUN_148fd75c0;
          local_e8 = (undefined **)local_d8;
          local_e0 = local_d0;
          if (local_d0 == (longlong *)0x0) {
            FUN_1443bd396(ppuVar13,&local_e8,&local_a8);
          }
          else {
            LOCK();
            *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
            UNLOCK();
            FUN_1443bd396(ppuVar13,&local_e8,&local_a8);
            if (plVar17 != (longlong *)0x0) {
              LOCK();
              plVar9 = plVar17 + 1;
              *(int *)plVar9 = (int)*plVar9 + -1;
              UNLOCK();
              if ((int)*plVar9 == 0) {
                (**(code **)*plVar17)(plVar17);
                LOCK();
                piVar2 = (int *)((longlong)plVar17 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar17 + 0x10))(plVar17);
                }
              }
            }
          }
          if ((int)local_a0 == 0) {
LAB_1443c6d33:
            if (local_a8 != (undefined ***)0x0) {
              FUN_1400020a8();
            }
          }
          else if (local_a8 != (undefined ***)0x0) {
            (*(code *)**local_a8)(local_a8,0);
            FUN_1446efa72(&local_a8,0,0,0x10);
            local_a0 = (undefined **)((ulonglong)local_a0 & 0xffffffff00000000);
            goto LAB_1443c6d33;
          }
          (**(code **)(*param_1 + 0x310))(param_1,ppuVar13);
        }
        if (local_d0 != (longlong *)0x0) {
          LOCK();
          plVar17 = local_d0 + 1;
          *(int *)plVar17 = (int)*plVar17 + -1;
          UNLOCK();
          if ((int)*plVar17 == 0) {
            (**(code **)*local_d0)(local_d0);
            LOCK();
            piVar2 = (int *)((longlong)local_d0 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_d0 + 0x10))(local_d0);
            }
          }
        }
        if (local_c0 != (longlong *)0x0) {
          LOCK();
          plVar17 = local_c0 + 1;
          *(int *)plVar17 = (int)*plVar17 + -1;
          UNLOCK();
          if ((int)*plVar17 == 0) {
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
      }
    }
  }
  else {
    if ((*plVar17 + (longlong)iVar8 * 0x40 == 0) ||
       (plVar9 = (longlong *)((longlong)iVar8 * 0x40 + *plVar17 + 0x30), plVar9 == (longlong *)0x0))
    goto LAB_1443c68ac;
    ppuVar13 = (undefined **)*plVar9;
  }
  local_78 = &PTR_FUN_14a5af930;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  local_78 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_60])(&local_70);
LAB_1443c673d:
  if ((local_48 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return ppuVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443c6e6c FUN_1443c6e6c body=590 status=ok
// SIG undefined FUN_1443c6e6c(void)

void FUN_1443c6e6c(longlong *param_1,undefined1 param_2)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined8 **local_70;
  undefined8 *local_68;
  int local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  (**(code **)(*param_1 + 0x180))();
  local_68 = (undefined8 *)0x0;
  plVar6 = (longlong *)FUN_1401e3228(&local_68);
  (**(code **)(*plVar6 + 0x40))(plVar6,&local_58);
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  FUN_1446efa72(&local_68,0,3,0x10);
  puVar4 = local_68;
  local_60 = 3;
  *local_68 = &PTR_LAB_14ba5d6c0;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar10 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar10 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar10;
  local_68[2] = lVar8;
  *local_68 = &PTR_FUN_14ba5d650;
  local_68[3] = 0;
  iVar5 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar2 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_68 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    iVar5 = *(int *)(lVar10 + 0x10);
    if (*(int *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar5 = *(int *)(lVar10 + 0x10);
      bVar11 = iVar5 == 0;
      if (bVar11) {
        *(int *)(lVar10 + 0x10) = iVar9;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar11) {
        iVar5 = iVar9;
      }
    }
  }
  *(int *)((longlong)puVar4 + 0x1c) = iVar5;
  puVar4[4] = FUN_1443c7bfc;
  uVar3 = *(undefined8 *)(param_1[0xe] + 0x18);
  uVar7 = FUN_14127b0d4(param_1 + 0x10);
  local_78 = param_2;
  local_70 = &local_68;
  (**(code **)(*local_58 + 0x28))(local_58,uVar7,uVar3,param_1 + 0x33);
  if (local_60 != 0) {
    if (local_68 == (undefined8 *)0x0) goto LAB_1443c6ffe;
    (**(code **)*local_68)(local_68,0);
    FUN_1446efa72(&local_68,0,0,0x10);
    local_60 = 0;
  }
  if (local_68 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1443c6ffe:
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_50 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443c70c4 FUN_1443c70c4 body=683 status=ok
// SIG undefined FUN_1443c70c4(void)

void FUN_1443c70c4(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  longlong lVar9;
  longlong lVar10;
  ushort uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ushort uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong *plVar17;
  undefined1 auStack_128 [32];
  undefined **local_108;
  undefined1 local_100 [16];
  byte local_f0;
  void *local_e8;
  int local_e0;
  longlong *local_d8;
  int local_d0;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  ulonglong local_a0;
  void *local_98;
  int local_90;
  int local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong local_78;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  cVar8 = FUN_140ba41f1(param_1 + 0x80,param_1 + 0xb0);
  if ((cVar8 != '\0') &&
     (lVar9 = FUN_148fd50f6(*(longlong *)(param_1 + 0x40) + 0x58,param_2), lVar9 != 0)) {
    FUN_148fce6f6(param_1,&local_d8);
    if ((longlong)local_d0 == 0) {
      bVar3 = true;
      lVar16 = 0;
    }
    else {
      plVar1 = local_d8 + local_d0;
      lVar10 = 0;
      plVar17 = local_d8;
      do {
        lVar16 = *plVar17;
        iVar2 = *(int *)(*(longlong *)(lVar16 + 0x40) + 0xb8);
        if (iVar2 == *(int *)(lVar9 + 0x18)) {
          if (1 < iVar2) {
            lVar13 = 0;
            while( true ) {
              uVar11 = *(ushort *)(*(longlong *)(*(longlong *)(lVar16 + 0x40) + 0xb0) + lVar13);
              uVar12 = (ulonglong)uVar11;
              uVar14 = *(ushort *)(*(longlong *)(lVar9 + 0x10) + lVar13);
              if (uVar11 != uVar14) break;
              if (uVar11 == 0) goto LAB_1443c71ee;
LAB_1443c71b7:
              lVar13 = lVar13 + 2;
            }
            if ((uVar14 | uVar11) < 0x80) {
              uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
              uVar15 = (ulonglong)uVar14;
              uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
              if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar15]) goto LAB_1443c71b7;
            }
            if (uVar11 != uVar14) goto LAB_1443c720c;
          }
LAB_1443c71ee:
          cVar8 = FUN_148fd411c(lVar9,lVar16);
          if (cVar8 != '\0') {
            bVar3 = false;
            goto LAB_1443c7230;
          }
          cVar8 = FUN_148fd1e76(lVar16);
          lVar10 = lVar16;
          if (cVar8 != '\0') {
            bVar3 = true;
            goto LAB_1443c7230;
          }
        }
        else if (*(int *)(lVar9 + 0x18) + iVar2 == 1) goto LAB_1443c71ee;
LAB_1443c720c:
        plVar17 = plVar17 + 1;
      } while (plVar17 != plVar1);
      bVar3 = true;
      lVar16 = lVar10;
    }
LAB_1443c7230:
    if (local_d8 != (longlong *)0x0) {
      FUN_1400020a8(local_d8);
    }
    if (bVar3) {
      if (lVar16 == 0) {
        FUN_148fd520a(*(undefined8 *)(param_1 + 0x40),param_2);
      }
      else {
        FUN_148fd7b42(&local_d8,lVar9);
        FUN_148fd1d62(lVar16,&local_108);
        local_78 = CONCAT71(local_78._1_7_,local_f0);
        (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[local_f0])(&local_88,local_100);
        uVar15 = local_78;
        uVar7 = uStack_7c;
        uVar6 = uStack_80;
        uVar5 = uStack_84;
        uVar4 = local_88;
        uVar12 = local_a0;
        local_78 = local_a0;
        local_88 = local_b0;
        uStack_84 = uStack_ac;
        uStack_80 = uStack_a8;
        uStack_7c = uStack_a4;
        local_b0 = uVar4;
        uStack_ac = uVar5;
        uStack_a8 = uVar6;
        uStack_a4 = uVar7;
        local_a0 = uVar15;
        (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[uVar12 & 0xff])(&local_88);
        _Src = local_e8;
        local_90 = local_e0;
        if (local_e0 == 0 && local_8c == 0) {
          local_8c = 0;
        }
        else {
          FUN_1447a127e(&local_98,local_e0);
          if (local_e0 != 0) {
            memcpy(local_98,_Src,(longlong)local_e0);
          }
        }
        local_108 = &PTR_FUN_14a5af930;
        if (local_e8 != (void *)0x0) {
          FUN_1400020a8();
        }
        local_108 = &PTR_FUN_14a184370;
        (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_f0])(local_100);
        FUN_148fd5054(*(undefined8 *)(param_1 + 0x40),&local_d8);
        FUN_148fd7c24(&local_d8);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443c7370 FUN_1443c7370 body=2186 status=ok
// SIG undefined FUN_1443c7370(void)

void FUN_1443c7370(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined **ppuVar5;
  longlong lVar6;
  undefined1 uVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  bool bVar19;
  undefined1 auStack_238 [32];
  longlong *local_218;
  undefined1 local_210;
  longlong local_208;
  longlong local_200;
  undefined8 *local_1f8;
  void *local_1f0;
  longlong local_1e8;
  undefined8 uStack_1e0;
  longlong local_1d8 [3];
  undefined8 local_1c0;
  longlong *local_1b8;
  longlong *plStack_1b0;
  undefined **local_1a8;
  longlong lStack_1a0;
  longlong local_198;
  ulonglong uStack_190;
  longlong local_188;
  undefined8 uStack_180;
  undefined2 local_178;
  byte local_176;
  undefined1 local_175;
  undefined4 local_174;
  longlong local_168;
  longlong *local_158;
  longlong local_148 [5];
  undefined **local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  longlong local_f0;
  ulonglong uStack_e8;
  char local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulonglong local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_238;
  if ((int)param_1[0x42] == 0) {
LAB_1443c74d1:
    lVar12 = 0;
  }
  else {
    uVar10 = *(uint *)((longlong)param_1 + 0x20c);
    lVar12 = 0;
    if ((-1 < (int)uVar10) && ((int)uVar10 < DAT_14c9647dc)) {
      plVar14 = (longlong *)
                ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
      if ((plVar14 == (longlong *)0x0) ||
         (((int)plVar14[2] != (int)param_1[0x42] || ((*(uint *)(plVar14 + 1) & 0x10200000) != 0))))
      goto LAB_1443c74d1;
      lVar12 = *plVar14;
    }
  }
  cVar8 = FUN_140ba41f1(param_1 + 0x10,param_1 + 0x16);
  if ((lVar12 != 0) || (cVar8 == '\0')) goto LAB_1443c7419;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  local_120 = &PTR_FUN_14a5af930;
  local_d8 = 0;
  local_d0 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  cVar8 = FUN_148fd8352(param_1 + 0x3e);
  if (cVar8 != '\0') {
    *(undefined8 *)((longlong)param_1 + 0x204) = 0;
    uVar11 = (**(code **)(*param_1 + 0x180))(param_1);
    local_1a8 = (undefined **)0x0;
    plVar14 = (longlong *)FUN_1401e3228();
    if (plVar14 == (longlong *)0x0) {
      local_1b8 = (longlong *)0x0;
      plStack_1b0 = (longlong *)0x0;
LAB_1443c78f8:
      FUN_1443c8aa0(param_1);
      FUN_1443c8c48(param_1);
    }
    else {
      (**(code **)(*plVar14 + 0x20))(plVar14,&local_1b8);
      if (local_1b8 == (longlong *)0x0) goto LAB_1443c78f8;
      FUN_148fd80dc(param_1,&local_1c0);
      lVar12 = (**(code **)(*local_1b8 + 0x20))(local_1b8,local_1c0);
      plVar14 = local_1b8;
      if (lVar12 == 0) goto LAB_1443c78f8;
      local_1d8[0] = 0;
      local_1d8[1] = 0;
      local_208 = lVar12;
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      cVar8 = (**(code **)(*plVar14 + 0x378))(plVar14,local_1c0,local_1d8,DAT_14c892fc8);
      if (cVar8 == '\0') {
LAB_1443c78e9:
        if (local_1d8[0] != 0) {
          FUN_1400020a8();
        }
        goto LAB_1443c78f8;
      }
      local_188 = 0;
      uStack_180 = 0;
      local_198 = 0;
      uStack_190 = 0;
      local_1a8 = (undefined **)0x0;
      lStack_1a0 = 0;
      local_178 = 0x100;
      local_176 = local_176 & 0xe0;
      local_175 = 0;
      local_174 = 8;
      lVar13 = 0;
      local_168 = 0;
      local_158 = (longlong *)0x0;
      lVar12 = param_1[0xc];
      if (lVar12 != 0) {
        lVar13 = FUN_1458f2cea();
        if (((lVar13 == 0) || (*(int *)(lVar12 + 0x38) < *(int *)(lVar13 + 0x38))) ||
           (*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8) !=
            lVar13 + 0x30)) {
          lVar13 = 0;
        }
        else {
          lVar13 = param_1[0xc];
        }
      }
      local_c8 = (undefined **)0x0;
      uStack_c0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      uStack_ac = 0x3ff00000;
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      uStack_84 = 0x3ff00000;
      uStack_80 = 0;
      uStack_7c = 0x3ff00000;
      local_78 = 0x3ff0000000000000;
      uStack_70 = 0;
      lVar12 = FUN_141037e38(uVar11,lVar13,&local_c8,&local_1a8);
      if (local_168 != 0) {
        plVar14 = local_158;
        if (local_158 == (longlong *)0x0) {
          plVar14 = local_148;
        }
        (**(code **)(*plVar14 + 0x10))();
      }
      if (lVar12 == 0) goto LAB_1443c78e9;
      uVar10 = *(uint *)(lVar12 + 0xc);
      *(uint *)((longlong)param_1 + 0x20c) = uVar10;
      if ((int)uVar10 < DAT_14c9647dc) {
        lVar13 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
      }
      else {
        lVar13 = 0;
      }
      iVar9 = *(int *)(lVar13 + 0x10);
      if (*(int *)(lVar13 + 0x10) == 0) {
        LOCK();
        iVar9 = DAT_14c964868 + 1;
        UNLOCK();
        iVar16 = DAT_14c964868 + 1;
        bVar19 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar9;
        if (bVar19) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar16);
        }
        LOCK();
        iVar9 = *(int *)(lVar13 + 0x10);
        bVar19 = iVar9 == 0;
        if (bVar19) {
          *(int *)(lVar13 + 0x10) = iVar16;
          iVar9 = 0;
        }
        UNLOCK();
        if (bVar19) {
          iVar9 = iVar16;
        }
      }
      *(int *)(param_1 + 0x42) = iVar9;
      FUN_141551f14(local_208,&local_1a8);
      if ((int)param_1[0x42] == 0) {
LAB_1443c7b9a:
        uVar11 = 0;
      }
      else {
        uVar10 = *(uint *)((longlong)param_1 + 0x20c);
        uVar11 = 0;
        if ((-1 < (int)uVar10) && ((int)uVar10 < DAT_14c9647dc)) {
          puVar15 = (undefined8 *)
                    ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
          if ((puVar15 == (undefined8 *)0x0) ||
             ((*(int *)(puVar15 + 2) != (int)param_1[0x42] ||
              ((*(uint *)(puVar15 + 1) & 0x10200000) != 0)))) goto LAB_1443c7b9a;
          uVar11 = *puVar15;
        }
      }
      cVar8 = (**(code **)(*param_1 + 0x378))(param_1,uVar11,&local_1a8);
      if (local_1a8 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      if (cVar8 == '\0') goto LAB_1443c78e9;
      FUN_148fd83a6(lVar12 + 0x3d8,param_1);
      FUN_148fd8440(lVar12 + 0x420,param_1);
      local_1e8 = 0;
      uStack_1e0 = 0;
      if ((int)uStack_e8 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uStack_e8 & 0xffffffff);
      }
      if ((uStack_e8 & 0xffffffff) != 0) {
        FUN_148ff4a78();
        if ((longlong)(int)uStack_e8 != 0) {
          lVar12 = (longlong)(int)uStack_e8 * 0x98;
          lVar13 = local_f0;
          do {
            uVar3 = uStack_1e0;
            lVar17 = (longlong)(int)uStack_1e0;
            uVar10 = (int)uStack_1e0 + 1;
            uStack_1e0 = CONCAT44(uStack_1e0._4_4_,uVar10);
            if (uStack_1e0._4_4_ < uVar10) {
              FUN_148a4ecde(&local_1e8,uVar3 & 0xffffffff);
            }
            lVar6 = local_1e8;
            lVar17 = lVar17 * 0x58;
            lVar18 = local_1e8 + lVar17;
            *(undefined1 *)(local_1e8 + 0x18 + lVar17) = 0;
            puVar15 = (undefined8 *)(local_1e8 + 8 + lVar17);
            *puVar15 = 0;
            puVar15[1] = 0;
            *(undefined ***)(local_1e8 + lVar17) = &PTR_FUN_14a5af930;
            *(undefined4 *)(local_1e8 + 0x54 + lVar17) = 0;
            puVar15 = (undefined8 *)(local_1e8 + 0x20 + lVar17);
            *puVar15 = 0;
            puVar15[1] = 0;
            puVar15 = (undefined8 *)(local_1e8 + 0x30 + lVar17);
            *puVar15 = 0;
            puVar15[1] = 0;
            puVar15 = (undefined8 *)(local_1e8 + 0x40 + lVar17);
            *puVar15 = 0;
            puVar15[1] = 0;
            *(undefined1 *)(local_1e8 + 0x50 + lVar17) = 0;
            if (lVar13 != lVar18) {
              plVar14 = (longlong *)(lVar17 + 8 + local_1e8);
              local_b8 = CONCAT71(local_b8._1_7_,*(byte *)(lVar13 + 0x18));
              local_200 = lVar12;
              (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[*(byte *)(lVar13 + 0x18)])
                        (&local_c8,lVar13 + 8);
              local_198 = local_b8;
              local_1a8 = local_c8;
              lStack_1a0 = uStack_c0;
              uVar3 = plVar14[2];
              ppuVar5 = (undefined **)*plVar14;
              lVar12 = plVar14[1];
              *(undefined4 *)plVar14 = (undefined4)local_c8;
              *(undefined4 *)((longlong)plVar14 + 4) = local_c8._4_4_;
              *(undefined4 *)(plVar14 + 1) = (undefined4)uStack_c0;
              *(undefined4 *)((longlong)plVar14 + 0xc) = uStack_c0._4_4_;
              plVar14[2] = local_b8;
              local_c8 = ppuVar5;
              uStack_c0 = lVar12;
              local_b8 = uVar3;
              (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[uVar3 & 0xff])(&local_c8);
              iVar9 = *(int *)(lVar13 + 0x28);
              pvVar4 = *(void **)(lVar13 + 0x20);
              *(int *)(lVar18 + 0x28) = iVar9;
              if (iVar9 == 0 && *(int *)(lVar18 + 0x2c) == 0) {
                *(undefined4 *)(lVar18 + 0x2c) = 0;
                lVar12 = local_200;
              }
              else {
                local_1f8 = (undefined8 *)(lVar17 + 0x20 + lVar6);
                local_1f0 = pvVar4;
                FUN_1447a127e(local_1f8,iVar9);
                lVar12 = local_200;
                if (iVar9 != 0) {
                  memcpy((void *)*local_1f8,local_1f0,(longlong)iVar9);
                }
              }
            }
            puVar15 = (undefined8 *)(lVar17 + 0x40 + lVar6);
            if ((undefined8 *)(lVar13 + 0x30) != puVar15) {
              iVar9 = *(int *)(lVar13 + 0x38);
              pvVar4 = *(void **)(lVar13 + 0x30);
              *(int *)(lVar18 + 0x48) = iVar9;
              if (iVar9 == 0 && *(int *)(lVar18 + 0x4c) == 0) {
                *(undefined4 *)(lVar18 + 0x4c) = 0;
              }
              else {
                FUN_1446dd670(puVar15,iVar9);
                if (iVar9 != 0) {
                  memcpy((void *)*puVar15,pvVar4,(longlong)iVar9 * 2);
                }
              }
            }
            bVar19 = true;
            if ((local_e0 == '\0') && (*(longlong *)(lVar13 + 0x88) != 0)) {
              cVar8 = FUN_148fd54e9();
              bVar19 = cVar8 == '\x01';
            }
            *(bool *)(lVar18 + 0x50) = bVar19;
            lVar13 = lVar13 + 0x98;
            lVar12 = lVar12 + -0x98;
          } while (lVar12 != 0);
        }
      }
      uVar7 = local_d0;
      if ((int)param_1[0x42] == 0) {
LAB_1443c7ba1:
        plVar14 = (longlong *)0x0;
      }
      else {
        uVar10 = *(uint *)((longlong)param_1 + 0x20c);
        plVar14 = (longlong *)0x0;
        if ((-1 < (int)uVar10) && ((int)uVar10 < DAT_14c9647dc)) {
          puVar15 = (undefined8 *)
                    ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
          if ((puVar15 == (undefined8 *)0x0) ||
             ((*(int *)(puVar15 + 2) != (int)param_1[0x42] ||
              ((*(uint *)(puVar15 + 1) & 0x10200000) != 0)))) goto LAB_1443c7ba1;
          plVar14 = (longlong *)*puVar15;
        }
      }
      uVar11 = FUN_148fd8170(param_1,param_1 + 0x16);
      FUN_148fd1d62(uVar11,&local_1a8);
      FUN_141551f14(local_208,&local_c8);
      local_210 = uVar7;
      local_218 = &local_1e8;
      cVar8 = (**(code **)(*plVar14 + 0x700))(plVar14,local_1d8,&local_c8,&local_1a8);
      if (local_c8 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      local_1a8 = &PTR_FUN_14a5af930;
      if (local_188 != 0) {
        FUN_1400020a8();
      }
      local_1a8 = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[uStack_190 & 0xff])();
      FUN_1458da195(local_1e8,uStack_1e0 & 0xffffffff);
      if (local_1e8 != 0) {
        FUN_1400020a8();
      }
      if (local_1d8[0] != 0) {
        FUN_1400020a8();
      }
      if (cVar8 == '\0') goto LAB_1443c78f8;
    }
    plVar14 = plStack_1b0;
    if (plStack_1b0 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_1b0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_1b0)(plStack_1b0);
        LOCK();
        piVar2 = (int *)((longlong)plVar14 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
    }
  }
  FUN_14601549e(&local_120);
LAB_1443c7419:
  if ((local_60 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443c7bfc FUN_1443c7bfc body=505 status=ok
// SIG undefined FUN_1443c7bfc(void)

void FUN_1443c7bfc(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  void *pvVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar4 = *(longlong **)(param_1 + 0x70);
  if (plVar4 != (longlong *)0x0) {
    if (param_4 == '\x01') {
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_40);
      uVar6 = *(undefined4 *)(local_40 + 0x14);
      uVar7 = *(undefined4 *)(local_40 + 0x18);
      uVar8 = *(undefined4 *)(local_40 + 0x1c);
      *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(local_40 + 0x10);
      *(undefined4 *)(param_1 + 0x1ac) = uVar6;
      *(undefined4 *)(param_1 + 0x1b0) = uVar7;
      *(undefined4 *)(param_1 + 0x1b4) = uVar8;
      puVar2 = (undefined8 *)(param_1 + 0x1b8);
      if (puVar2 != (undefined8 *)(local_40 + 0x20)) {
        iVar3 = *(int *)(local_40 + 0x28);
        pvVar5 = *(void **)(local_40 + 0x20);
        *(int *)(param_1 + 0x1c0) = iVar3;
        if (iVar3 == 0 && *(int *)(param_1 + 0x1c4) == 0) {
          *(undefined4 *)(param_1 + 0x1c4) = 0;
        }
        else {
          FUN_1446dd670(puVar2,iVar3);
          if (iVar3 != 0) {
            memcpy((void *)*puVar2,pvVar5,(longlong)iVar3 * 2);
          }
        }
      }
      puVar2 = (undefined8 *)(param_1 + 0x1c8);
      if (puVar2 != (undefined8 *)(local_40 + 0x30)) {
        iVar3 = *(int *)(local_40 + 0x38);
        pvVar5 = *(void **)(local_40 + 0x30);
        *(int *)(param_1 + 0x1d0) = iVar3;
        if (iVar3 == 0 && *(int *)(param_1 + 0x1d4) == 0) {
          *(undefined4 *)(param_1 + 0x1d4) = 0;
        }
        else {
          FUN_1446dd670(puVar2,iVar3);
          if (iVar3 != 0) {
            memcpy((void *)*puVar2,pvVar5,(longlong)iVar3 * 2);
          }
        }
      }
      puVar2 = (undefined8 *)(param_1 + 0x1d8);
      if (puVar2 != (undefined8 *)(local_40 + 0x40)) {
        iVar3 = *(int *)(local_40 + 0x48);
        pvVar5 = *(void **)(local_40 + 0x40);
        *(int *)(param_1 + 0x1e0) = iVar3;
        if (iVar3 == 0 && *(int *)(param_1 + 0x1e4) == 0) {
          *(undefined4 *)(param_1 + 0x1e4) = 0;
        }
        else {
          FUN_1446dd670(puVar2,iVar3);
          if (iVar3 != 0) {
            memcpy((void *)*puVar2,pvVar5,(longlong)iVar3 * 2);
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
      FUN_148ff2c92(param_1 + 0x2d8,param_1 + 0x198);
    }
    else {
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_40);
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
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443c7df6 FUN_1443c7df6 body=436 status=ok
// SIG undefined FUN_1443c7df6(void)

void FUN_1443c7df6(longlong param_1,void **param_2,longlong param_3)

{
  int iVar1;
  void *_Src;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  ushort uVar5;
  ulonglong uVar6;
  ushort uVar7;
  ulonglong uVar8;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined1 local_88 [16];
  void *local_78;
  int local_70;
  int local_6c;
  longlong local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_140b6e8c2(*(longlong *)(param_3 + 0x40) + 0x80,&local_90);
  FUN_148fd2fac(&local_38,local_90);
  if (local_2c == -1) goto LAB_1443c7e4b;
  lVar3 = FUN_148fd50f6(*(longlong *)(param_1 + 0x40) + 0x58,&local_38);
  if (lVar3 != 0) {
    cVar2 = FUN_148fd411c(lVar3);
    if (cVar2 != '\0') {
      if (*(int *)(param_2 + 1) < 2) {
        if (*(int *)(lVar3 + 0x18) < 2) {
LAB_1443c7f37:
          FUN_148fd7b42(local_88,lVar3);
          if (&local_78 != param_2) {
            iVar1 = *(int *)(param_2 + 1);
            _Src = *param_2;
            local_70 = iVar1;
            if (iVar1 == 0 && local_6c == 0) {
              local_6c = 0;
            }
            else {
              FUN_1446dd670(&local_78,iVar1);
              if (iVar1 != 0) {
                memcpy(local_78,_Src,(longlong)iVar1 * 2);
              }
            }
          }
          FUN_148fd5054(*(undefined8 *)(param_1 + 0x40),local_88);
          FUN_148fd7c24(local_88);
        }
        else {
          FUN_1443c70c4(param_1,&local_38);
        }
      }
      else {
        if (*(int *)(lVar3 + 0x18) != *(int *)(param_2 + 1)) goto LAB_1443c7f37;
        lVar4 = 0;
        while( true ) {
          uVar5 = *(ushort *)(*(longlong *)(lVar3 + 0x10) + lVar4);
          uVar6 = (ulonglong)uVar5;
          uVar7 = *(ushort *)((longlong)*param_2 + lVar4);
          if (uVar5 != uVar7) break;
          if (uVar5 == 0) goto LAB_1443c7e8c;
LAB_1443c7f07:
          lVar4 = lVar4 + 2;
        }
        if ((uVar7 | uVar5) < 0x80) {
          uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
          uVar8 = (ulonglong)uVar7;
          uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
          if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar8]) goto LAB_1443c7f07;
        }
        if (uVar5 != uVar7) goto LAB_1443c7f37;
      }
    }
  }
LAB_1443c7e8c:
  if ((local_2c != -1) && (local_38 != 0)) {
    FUN_1400020a8();
  }
LAB_1443c7e4b:
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443c7fac FUN_1443c7fac body=795 status=ok
// SIG undefined FUN_1443c7fac(void)

void FUN_1443c7fac(longlong param_1,longlong param_2,longlong param_3)

{
  void *_Src;
  undefined **ppuVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined8 uStack_180;
  undefined **local_170;
  undefined1 local_168 [16];
  byte local_158;
  longlong local_150;
  undefined **local_140;
  undefined **local_138;
  undefined8 uStack_130;
  ulonglong local_128;
  void *local_120;
  undefined8 uStack_118;
  longlong local_110;
  undefined8 uStack_108;
  undefined1 local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  ulonglong local_d8;
  byte local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  ulonglong local_a8;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if (*(longlong *)(param_2 + 0x30) != 0) {
    cVar6 = FUN_140ba41f1((undefined ***)(param_1 + 0x80),param_1 + 0xb0);
    if (cVar6 != '\0') {
      lVar8 = FUN_148fd8170(param_1,param_2);
      if (lVar8 != 0) {
        cVar6 = FUN_148fd1e76();
        if (cVar6 != '\0') {
          local_138 = (undefined **)0x0;
          uStack_130 = 0;
          local_128 = local_128 & 0xffffffffffffff00;
          local_140 = &PTR_FUN_14a5af930;
          local_f8 = 0;
          local_f0 = 0;
          local_120 = (void *)0x0;
          uStack_118 = 0;
          local_110 = 0;
          uStack_108 = 0;
          if ((undefined ***)(param_1 + 0x80) != &local_140) {
            local_d8 = CONCAT71(local_d8._1_7_,*(byte *)(param_1 + 0x98));
            (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[*(byte *)(param_1 + 0x98)])
                      (&local_e8,param_1 + 0x88);
            uVar5 = local_d8;
            uVar4 = uStack_dc;
            uVar3 = uStack_e0;
            uVar2 = local_128;
            local_a8 = local_d8;
            local_b8 = (undefined4)local_e8;
            uStack_b4 = local_e8._4_4_;
            uStack_b0 = uStack_e0;
            uStack_ac = uStack_dc;
            local_d8 = local_128;
            ppuVar1 = local_138;
            uStack_e0 = (undefined4)uStack_130;
            uStack_dc = uStack_130._4_4_;
            local_138 = local_e8;
            uStack_130 = CONCAT44(uVar4,uVar3);
            local_128 = uVar5;
            local_e8 = ppuVar1;
            (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[uVar2 & 0xff])(&local_e8);
            uVar7 = *(uint *)(param_1 + 0xa8);
            _Src = *(void **)(param_1 + 0xa0);
            uStack_118 = CONCAT44(uStack_118._4_4_,uVar7);
            if (uVar7 == 0 && uStack_118._4_4_ == 0) {
              uStack_118 = (ulonglong)uVar7;
            }
            else {
              FUN_1447a127e(&local_120,uVar7);
              if (uVar7 != 0) {
                memcpy(local_120,_Src,(longlong)(int)uVar7);
              }
            }
          }
          lVar8 = *(longlong *)(param_3 + 0x40);
          FUN_148fd1d62(param_3,&local_170);
          uVar2 = uStack_108;
          lVar10 = (longlong)(int)uStack_108;
          uVar7 = (int)uStack_108 + 1;
          uStack_108 = CONCAT44(uStack_108._4_4_,uVar7);
          if (uStack_108._4_4_ < uVar7) {
            FUN_148ff2978(&local_110,uVar2 & 0xffffffff);
          }
          lVar10 = lVar10 * 0x98 + local_110;
          local_188 = 0;
          uStack_180 = 0;
          FUN_148fe7106(&local_b8,lVar8 + 0x28);
          local_e8 = &PTR_FUN_14a184370;
          local_d0 = local_158;
          (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[local_158])(&uStack_e0,local_168);
          local_e8 = &PTR_FUN_14a5af930;
          local_c8 = 0;
          uStack_c0 = 0;
          FUN_148ff2894(lVar10,&local_e8,&local_b8,&local_188);
          local_170 = &PTR_FUN_14a5af930;
          if (local_150 != 0) {
            FUN_1400020a8();
          }
          local_170 = &PTR_FUN_14a184370;
          (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_158])(local_168);
          local_100 = 1;
          local_f8 = *(undefined8 *)(param_2 + 0x30);
          FUN_148fd8610(param_1 + 0x1f0);
          if ((((*(int *)(param_1 + 0x210) == 0) ||
               (uVar7 = *(uint *)(param_1 + 0x20c), (int)uVar7 < 0)) ||
              (DAT_14c9647dc <= (int)uVar7)) ||
             (((plVar9 = (longlong *)
                         ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
               plVar9 == (longlong *)0x0 || ((int)plVar9[2] != *(int *)(param_1 + 0x210))) ||
              (((*(uint *)(plVar9 + 1) & 0x10200000) != 0 || (*plVar9 == 0)))))) {
            FUN_1443c7370(param_1);
          }
          FUN_14601549e(&local_140);
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443c82c8 FUN_1443c82c8 body=384 status=ok
// SIG undefined FUN_1443c82c8(void)

void FUN_1443c82c8(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong unaff_RBP;
  longlong lVar4;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined **local_78;
  undefined1 local_70 [16];
  byte local_60;
  longlong local_58;
  undefined8 uStack_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(char *)(param_1 + 0x240) == '\x01') {
    lVar2 = FUN_148fd8170(param_1,param_1 + 0x80);
    lVar2 = *(longlong *)(lVar2 + 0x40);
    local_78 = &PTR_FUN_14a184370;
    local_60 = *(byte *)(lVar2 + 0x1e0);
    (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[local_60])(local_70,lVar2 + 0x1d0);
    local_78 = &PTR_FUN_14a5af930;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = *(longlong *)(lVar2 + 0x1f8);
    if ((longlong)(int)param_2[1] != 0) {
      lVar2 = *param_2;
      lVar4 = (longlong)(int)param_2[1] * 0x48;
      do {
        if ((*(longlong *)(lVar2 + 0x30) == local_48) &&
           (lVar3 = FUN_148fd8170(param_1,lVar2), lVar3 != 0)) {
          unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),*(undefined1 *)(lVar2 + 0x40));
          cVar1 = FUN_148fd1e76(lVar3);
          if (cVar1 != '\0') {
            FUN_140212f8e(local_88);
            local_90 = 0;
            local_98 = 0;
            local_a0 = 0;
            local_a8 = 0;
            FUN_14021300e(local_80,0x7b2,1,1);
            FUN_148fd86b4(param_1,unaff_RBP & 0xffffffff);
            break;
          }
        }
        lVar2 = lVar2 + 0x48;
        lVar4 = lVar4 + -0x48;
      } while (lVar4 != 0);
    }
    local_78 = &PTR_FUN_14a5af930;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    local_78 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_60])(local_70);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443c844a FUN_1443c844a body=309 status=ok
// SIG undefined FUN_1443c844a(void)

void FUN_1443c844a(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStack_68 [40];
  longlong *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)((longlong)param_1 + 0x227) == '\0') {
    *(undefined1 *)((longlong)param_1 + 0x227) = 1;
    FUN_1443c8c48(param_1);
    FUN_148feacbe(param_1 + 0x4c,param_2);
  }
  FUN_148fce6f6(param_1,&local_40);
  if ((longlong)local_38 != 0) {
    plVar1 = local_40 + local_38;
    plVar5 = local_40;
    do {
      plVar3 = (longlong *)*plVar5;
      (**(code **)(*plVar3 + 0x2c0))(plVar3,0);
      FUN_144757f48();
      uVar2 = *(uint *)((longlong)plVar3 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      do {
        uVar2 = *(uint *)(lVar4 + 8);
        if ((uVar2 >> 0x15 & 1) != 0) break;
        LOCK();
        bVar6 = uVar2 == *(uint *)(lVar4 + 8);
        if (bVar6) {
          *(uint *)(lVar4 + 8) = uVar2 | 0x200000;
        }
        UNLOCK();
      } while (!bVar6);
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar1);
  }
  if (local_40 != (longlong *)0x0) {
    FUN_1400020a8(local_40);
  }
  (**(code **)(*param_1 + 0x318))(param_1,param_2);
  if ((int)param_1[0x1d] != *(int *)((longlong)param_1 + 0x114)) {
    FUN_148ff4b2c(param_1 + 0x1c);
    FUN_148ff4c70(param_1 + 0x1c);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443c8580 FUN_1443c8580 body=545 status=ok
// SIG undefined FUN_1443c8580(void)

void FUN_1443c8580(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4,
                  longlong *param_5)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_b8 [39];
  undefined1 local_91;
  longlong local_90;
  longlong local_88;
  int local_80;
  undefined **local_78;
  undefined1 local_70 [16];
  byte local_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_91 = param_4;
  local_90 = param_1;
  FUN_148fce6f6(param_1,&local_88);
  lVar7 = local_88;
  if ((longlong)local_80 != 0) {
    lVar6 = 0;
    do {
      plVar2 = *(longlong **)(lVar7 + lVar6);
      FUN_148fd1d62(plVar2,&local_78);
      uVar5 = FUN_14127b0d4(&local_78);
      cVar4 = (**(code **)*param_2)(param_2,uVar5);
      local_78 = &PTR_FUN_14a5af930;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      local_78 = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_60])(local_70);
      if (cVar4 != '\0') {
        lVar7 = 0;
        (**(code **)(*plVar2 + 0x2c0))(plVar2,0);
        FUN_144757f48(plVar2,0x40000000);
        uVar1 = *(uint *)((longlong)plVar2 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        goto LAB_1443c871e;
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)local_80 * 8 != lVar6);
  }
  goto LAB_1443c864c;
  while( true ) {
    LOCK();
    bVar8 = uVar1 == *(uint *)(lVar7 + 8);
    if (bVar8) {
      *(uint *)(lVar7 + 8) = uVar1 | 0x200000;
    }
    UNLOCK();
    if (bVar8) break;
LAB_1443c871e:
    uVar1 = *(uint *)(lVar7 + 8);
    if ((uVar1 >> 0x15 & 1) != 0) break;
  }
  lVar7 = local_90 + 0xe0;
  FUN_148fd1d62(plVar2,&local_78);
  FUN_148ff396e(lVar7,&local_78);
  local_78 = &PTR_FUN_14a5af930;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  local_78 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_60])();
LAB_1443c864c:
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((int)param_5[1] != 0) {
    plVar2 = (longlong *)*param_5;
    if (plVar2 == (longlong *)0x0) goto LAB_1443c86b6;
    (**(code **)(*plVar2 + 0x60))(plVar2,local_91);
    if ((int)param_5[1] != 0) {
      puVar3 = (undefined8 *)*param_5;
      if (puVar3 == (undefined8 *)0x0) goto LAB_1443c86b6;
      (**(code **)*puVar3)(puVar3,0);
      FUN_1446efa72(param_5,0,0,0x10);
      *(undefined4 *)(param_5 + 1) = 0;
    }
  }
  if (*param_5 != 0) {
    FUN_1400020a8();
  }
LAB_1443c86b6:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443c87a2 FUN_1443c87a2 body=609 status=ok
// SIG undefined FUN_1443c87a2(void)

void FUN_1443c87a2(longlong *param_1,char param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  undefined8 *local_a8;
  int local_a0;
  undefined8 local_98;
  undefined2 local_90 [2];
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  byte local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == '\x02') {
    FUN_1443c8a04(param_1,1);
    local_98 = 0;
    lVar3 = (**(code **)(*param_1 + 0x180))(param_1);
    if (*(longlong *)(lVar3 + 0x1f0) == 0) {
      puVar4 = (undefined8 *)(lVar3 + 0x458);
    }
    else {
      puVar4 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
    }
    uVar2 = *puVar4;
    local_a8 = (undefined8 *)0x0;
    local_a0 = 0;
    FUN_1446efa72(&local_a8,0,3,0x10);
    puVar4 = local_a8;
    local_a0 = 3;
    *local_a8 = &PTR_LAB_14a1c8830;
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
    local_a8[2] = lVar5;
    *local_a8 = &PTR_FUN_14ba5d5e0;
    local_a8[3] = 0;
    iVar6 = 0;
    if (param_1 != (longlong *)0x0) {
      uVar1 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(local_a8 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      iVar6 = *(int *)(lVar3 + 0x10);
      if (*(int *)(lVar3 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        iVar7 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar7);
        }
        LOCK();
        iVar6 = *(int *)(lVar3 + 0x10);
        bVar8 = iVar6 == 0;
        if (bVar8) {
          *(int *)(lVar3 + 0x10) = iVar7;
          iVar6 = 0;
        }
        UNLOCK();
        if (bVar8) {
          iVar6 = iVar7;
        }
      }
    }
    *(int *)((longlong)puVar4 + 0x1c) = iVar6;
    puVar4[4] = param_1;
    local_88 = 0;
    local_80 = 0;
    FUN_14487d8d8(&local_88,&local_a8);
    local_48 = 1;
    local_b8 = local_90;
    local_90[0] = 0;
    local_8c = 0xbf800000;
    FUN_1406f4044(uVar2,&local_98,&local_88,0x42700000);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
    if (local_a0 != 0) {
      if (local_a8 == (undefined8 *)0x0) goto LAB_1443c8963;
      (**(code **)*local_a8)(local_a8,0);
      FUN_1446efa72(&local_a8,0,0,0x10);
      local_a0 = 0;
    }
    if (local_a8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1443c8963:
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443c8a04 FUN_1443c8a04 body=155 status=ok
// SIG undefined FUN_1443c8a04(void)

void FUN_1443c8a04(longlong param_1,byte param_2)

{
  byte bVar1;
  byte bVar2;
  
  if ((*(char *)(param_1 + 0x22b) == '\x01') && (*(byte *)(param_1 + 0x22a) == param_2)) {
    return;
  }
  if ((*(char *)(param_1 + 0x225) == '\x01') && (*(char *)(param_1 + 0x224) == '\x01')) {
    *(byte *)(param_1 + 0x22a) = param_2;
    *(undefined1 *)(param_1 + 0x22b) = 1;
    bVar2 = 1;
    bVar1 = 1;
LAB_1443c8a75:
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 0x226);
      goto LAB_1443c8a82;
    }
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x226);
    bVar2 = bVar1;
    if (*(char *)(param_1 + 0x22b) == '\x01' && bVar1 == 0) {
      bVar2 = *(byte *)(param_1 + 0x22a);
    }
    *(byte *)(param_1 + 0x22a) = param_2;
    *(undefined1 *)(param_1 + 0x22b) = 1;
    if (*(char *)(param_1 + 0x225) != '\0') {
      bVar1 = *(byte *)(param_1 + 0x224);
      goto LAB_1443c8a75;
    }
LAB_1443c8a82:
    if ((bVar1 & 1) == 0) {
      if (bVar2 == param_2) {
        return;
      }
      goto LAB_1443c8a93;
    }
  }
  param_2 = 1;
  if (bVar2 != 0) {
    return;
  }
LAB_1443c8a93:
  FUN_140898514(param_1 + 800,param_2);
  return;
}



// FUNCTION 1443c8aa0 FUN_1443c8aa0 body=422 status=ok
// SIG undefined FUN_1443c8aa0(void)

void FUN_1443c8aa0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  undefined **local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  char local_58;
  undefined8 local_50;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  (**(code **)(*param_1 + 0x180))();
  local_98 = (undefined **)0x0;
  plVar5 = (longlong *)FUN_1401e3228(&local_98);
  (**(code **)(*plVar5 + 0x40))(plVar5,&local_a8);
  uVar3 = *(undefined8 *)(param_1[0xe] + 0x18);
  local_80 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = &PTR_FUN_14a5af930;
  local_50 = 0;
  local_48 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  if (*(longlong *)param_1[0x3f] != 0) {
    do {
      FUN_148fd84da(param_1 + 0x3e,&local_98);
      FUN_1408e4d18(local_68,&local_b8);
      plVar5 = local_b0;
      uVar4 = local_b8;
      if (local_b0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_b0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_b0)(local_b0);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      plVar5 = local_a8;
      if (local_58 == '\x01') {
        FUN_1443c9740(param_1,&local_98,2);
      }
      else {
        uVar6 = FUN_14127b0d4(&local_98);
        local_c0 = 2;
        local_c8 = 0;
        (**(code **)(*plVar5 + 0x68))(plVar5,uVar6,uVar3,uVar4);
      }
    } while (*(longlong *)param_1[0x3f] != 0);
  }
  FUN_14601549e(&local_98);
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_a0 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar2 = (int *)((longlong)local_a0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_a0 + 0x10))(local_a0);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443c8c48 FUN_1443c8c48 body=280 status=ok
// SIG undefined FUN_1443c8c48(void)

void FUN_1443c8c48(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  if (((*(int *)(param_1 + 0x210) != 0) && (uVar1 = *(uint *)(param_1 + 0x20c), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(param_1 + 0x210))) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 &&
        (plVar3 = (longlong *)*plVar3, plVar3 != (longlong *)0x0)))) {
      *(longlong *)(param_1 + 0x204) = plVar3[0x2e];
      if ((int)plVar3[0x7c] != 0) {
        puVar2 = (undefined8 *)plVar3[0x7b];
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,0);
          FUN_1446efa72(plVar3 + 0x7b,0,0,0x10);
          *(undefined4 *)(plVar3 + 0x7c) = 0;
        }
      }
      if ((int)plVar3[0x85] != 0) {
        puVar2 = (undefined8 *)plVar3[0x84];
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,0);
          FUN_1446efa72(plVar3 + 0x84,0,0,0x10);
          *(undefined4 *)(plVar3 + 0x85) = 0;
        }
      }
      (**(code **)(*plVar3 + 0x640))(plVar3);
      *(undefined8 *)(param_1 + 0x20c) = 0;
    }
  }
  return;
}



// FUNCTION 1443c8d60 FUN_1443c8d60 body=508 status=ok
// SIG undefined FUN_1443c8d60(void)

void FUN_1443c8d60(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined8 *local_58;
  int local_50;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)((longlong)param_1 + 0x227) == '\x01') {
    if (*param_2 != 0 && (int)param_2[1] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
    }
    goto LAB_1443c8d9c;
  }
  *(undefined1 *)((longlong)param_1 + 0x227) = 1;
  FUN_1443c8c48();
  FUN_148feacbe(param_1 + 0x4c,1);
  plVar2 = *(longlong **)(param_1[0xe] + 0x18);
  if ((&DAT_149fc1b6e)[*(byte *)(param_1 + 0x13)] == '\x01') {
    if (((longlong *)param_1[0x11] != (longlong *)0x0) &&
       (cVar3 = (**(code **)(*(longlong *)param_1[0x11] + 0x28))(), cVar3 != '\0')) {
LAB_1443c8e4a:
      cVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
      if (cVar3 != '\0') {
        (**(code **)(*param_1 + 0x180))(param_1);
        local_58 = (undefined8 *)0x0;
        plVar4 = (longlong *)FUN_1401e3228(&local_58);
        (**(code **)(*plVar4 + 0x40))(plVar4,&local_48);
        FUN_148fd81dc(&local_58,param_1,FUN_148fd7c8a,param_2);
        uVar5 = FUN_14127b0d4(param_1 + 0x10);
        local_68 = &local_58;
        (**(code **)(*local_48 + 0x58))(local_48,uVar5,plVar2,1);
        if (local_50 == 0) {
LAB_1443c8f36:
          if (local_58 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
        }
        else if (local_58 != (undefined8 *)0x0) {
          (**(code **)*local_58)(local_58,0);
          FUN_1446efa72(&local_58,0,0,0x10);
          local_50 = 0;
          goto LAB_1443c8f36;
        }
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
        goto LAB_1443c8d9c;
      }
    }
  }
  else if ((*(uint *)(param_1 + 0x11) & 0xffffff) != 0) goto LAB_1443c8e4a;
  if (*param_2 != 0 && (int)param_2[1] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
  }
LAB_1443c8d9c:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443c8f80 FUN_1443c8f80 body=465 status=ok
// SIG undefined FUN_1443c8f80(void)

void FUN_1443c8f80(longlong *param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined8 *local_58;
  int local_50;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)((longlong)param_1 + 0x227) == '\x01') {
    if (*param_3 != 0 && (int)param_3[1] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
    }
    goto LAB_1443c9038;
  }
  plVar2 = *(longlong **)(param_1[0xe] + 0x18);
  if ((&DAT_149fc1b6e)[*(byte *)(param_2 + 0x18)] == '\x01') {
    if ((*(longlong **)(param_2 + 8) != (longlong *)0x0) &&
       (cVar3 = (**(code **)(**(longlong **)(param_2 + 8) + 0x28))(), cVar3 != '\0')) {
LAB_1443c9017:
      cVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
      if (cVar3 != '\0') {
        (**(code **)(*param_1 + 0x180))(param_1);
        local_58 = (undefined8 *)0x0;
        plVar4 = (longlong *)FUN_1401e3228(&local_58);
        (**(code **)(*plVar4 + 0x40))(plVar4,&local_48);
        FUN_148fd81dc(&local_58,param_1,FUN_1443c8580,param_3);
        uVar5 = FUN_14127b0d4(param_2);
        local_68 = &local_58;
        (**(code **)(*local_48 + 0x58))(local_48,uVar5,plVar2,1);
        if (local_50 == 0) {
LAB_1443c912b:
          if (local_58 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
        }
        else if (local_58 != (undefined8 *)0x0) {
          (**(code **)*local_58)(local_58,0);
          FUN_1446efa72(&local_58,0,0,0x10);
          local_50 = 0;
          goto LAB_1443c912b;
        }
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
        goto LAB_1443c9038;
      }
    }
  }
  else if ((*(uint *)(param_2 + 8) & 0xffffff) != 0) goto LAB_1443c9017;
  if (*param_3 != 0 && (int)param_3[1] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
  }
LAB_1443c9038:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443c9174 FUN_1443c9174 body=91 status=ok
// SIG undefined FUN_1443c9174(void)

void FUN_1443c9174(undefined8 param_1)

{
  FUN_1443c8aa0(param_1);
  FUN_1443c8c48(param_1);
  return;
}



// FUNCTION 1443c91d0 FUN_1443c91d0 body=1361 status=ok
// SIG undefined FUN_1443c91d0(void)

void FUN_1443c91d0(longlong *param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  void *pvVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  char cVar11;
  longlong *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
  longlong *plVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  undefined8 *puVar22;
  bool bVar23;
  undefined1 auStack_1b8 [32];
  undefined1 local_198;
  uint local_190;
  longlong *local_188;
  longlong *local_180;
  longlong local_178;
  undefined8 uStack_170;
  undefined **local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined1 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  char local_120;
  undefined8 local_118;
  char local_110;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  byte local_f0;
  longlong local_e8;
  undefined **local_d0;
  longlong *local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  longlong local_a0;
  ulonglong uStack_98;
  char local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  uVar16 = param_2 - 3;
  if ((uVar16 < 8) && ((0xe9U >> (uVar16 & 0x1f) & 1) != 0)) {
    uVar18 = 0x805000400040404 >> ((char)uVar16 * '\b' & 0x3fU);
    local_158 = 0;
    uStack_150 = 0;
    local_148 = 0;
    local_160 = &PTR_FUN_14a5af930;
    local_118 = 0;
    local_110 = '\0';
    local_140 = 0;
    uStack_138 = 0;
    local_130 = 0;
    uStack_128 = 0;
    local_188 = param_1;
    cVar11 = FUN_148fd84da(param_1 + 0x3e);
    plVar17 = local_188;
    if (cVar11 != '\0') {
      (**(code **)(*local_188 + 0x180))(local_188);
      local_108 = (undefined **)0x0;
      plVar12 = (longlong *)FUN_1401e3228();
      (**(code **)(*plVar12 + 0x40))(plVar12,&local_d0);
      if (local_120 == '\x01') {
        FUN_1443c9740(plVar17,&local_160,uVar18 & 0xffffffff);
      }
      else if (local_110 == '\0') {
        uVar13 = FUN_14127b0d4(local_130);
        uVar15 = *(undefined8 *)(local_188[0xe] + 0x18);
        uVar14 = FUN_14127b0d4(&local_160);
        local_198 = (param_2 - 6U & 0xfffffffd) == 0;
        local_190 = (uint)uVar18 & 0xd;
        (**(code **)(*local_d0 + 0x68))(local_d0,uVar14,uVar15,uVar13);
      }
      if (local_c8 != (longlong *)0x0) {
        LOCK();
        plVar17 = local_c8 + 1;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)*plVar17 == 0) {
          (**(code **)*local_c8)(local_c8);
          LOCK();
          piVar1 = (int *)((longlong)local_c8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_c8 + 0x10))(local_c8);
          }
        }
      }
    }
    local_c8 = (longlong *)0x0;
    uStack_c0 = 0;
    local_b8 = 0;
    local_d0 = &PTR_FUN_14a5af930;
    local_88 = 0;
    local_80 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    cVar11 = FUN_148fd8352(param_1 + 0x3e);
    if (cVar11 == '\0') {
      FUN_1443c8c48(local_188);
    }
    else if ((((((int)local_188[0x42] == 0) ||
               (uVar16 = *(uint *)((longlong)local_188 + 0x20c), (int)uVar16 < 0)) ||
              (DAT_14c9647dc <= (int)uVar16)) ||
             ((plVar17 = (longlong *)
                         ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8)),
              plVar17 == (longlong *)0x0 || ((int)plVar17[2] != (int)local_188[0x42])))) ||
            (((*(uint *)(plVar17 + 1) & 0x10200000) != 0 ||
             (plVar17 = (longlong *)*plVar17, plVar17 == (longlong *)0x0)))) {
      FUN_1443c8aa0();
    }
    else {
      local_178 = 0;
      uStack_170 = 0;
      if ((int)uStack_98 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uStack_98 & 0xffffffff);
      }
      local_180 = plVar17;
      if ((uStack_98 & 0xffffffff) != 0) {
        FUN_148ff4a78();
        if ((longlong)(int)uStack_98 != 0) {
          lVar20 = (longlong)(int)uStack_98 * 0x98;
          lVar19 = local_a0;
          do {
            uVar18 = uStack_170;
            lVar21 = (longlong)(int)uStack_170;
            uVar16 = (int)uStack_170 + 1;
            uStack_170 = CONCAT44(uStack_170._4_4_,uVar16);
            if (uStack_170._4_4_ < uVar16) {
              FUN_148a4ecde(&local_178,uVar18 & 0xffffffff);
            }
            lVar10 = local_178;
            lVar21 = lVar21 * 0x58;
            lVar2 = local_178 + lVar21;
            *(undefined1 *)(local_178 + 0x18 + lVar21) = 0;
            puVar22 = (undefined8 *)(local_178 + 8 + lVar21);
            *puVar22 = 0;
            puVar22[1] = 0;
            *(undefined ***)(local_178 + lVar21) = &PTR_FUN_14a5af930;
            *(undefined4 *)(local_178 + 0x54 + lVar21) = 0;
            puVar22 = (undefined8 *)(local_178 + 0x20 + lVar21);
            *puVar22 = 0;
            puVar22[1] = 0;
            puVar22 = (undefined8 *)(local_178 + 0x30 + lVar21);
            *puVar22 = 0;
            puVar22[1] = 0;
            puVar22 = (undefined8 *)(local_178 + 0x40 + lVar21);
            *puVar22 = 0;
            puVar22[1] = 0;
            *(undefined1 *)(local_178 + 0x50 + lVar21) = 0;
            if (lVar19 != lVar2) {
              lVar3 = local_178 + lVar21;
              local_68 = CONCAT71(local_68._1_7_,*(byte *)(lVar19 + 0x18));
              (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[*(byte *)(lVar19 + 0x18)])
                        (&local_78,lVar19 + 8);
              local_f8 = local_68;
              local_108 = (undefined **)CONCAT44(uStack_74,local_78);
              uStack_100 = uStack_70;
              uStack_fc = uStack_6c;
              uVar18 = *(ulonglong *)(lVar3 + 0x18);
              uVar6 = *(undefined4 *)(lVar3 + 8);
              uVar7 = *(undefined4 *)(lVar3 + 0xc);
              uVar8 = *(undefined4 *)(lVar3 + 0x10);
              uVar9 = *(undefined4 *)(lVar3 + 0x14);
              *(undefined4 *)(lVar3 + 8) = local_78;
              *(undefined4 *)(lVar3 + 0xc) = uStack_74;
              *(undefined4 *)(lVar3 + 0x10) = uStack_70;
              *(undefined4 *)(lVar3 + 0x14) = uStack_6c;
              *(ulonglong *)(lVar3 + 0x18) = local_68;
              local_78 = uVar6;
              uStack_74 = uVar7;
              uStack_70 = uVar8;
              uStack_6c = uVar9;
              local_68 = uVar18;
              (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[uVar18 & 0xff])();
              iVar4 = *(int *)(lVar19 + 0x28);
              pvVar5 = *(void **)(lVar19 + 0x20);
              *(int *)(lVar2 + 0x28) = iVar4;
              if (iVar4 == 0 && *(int *)(lVar2 + 0x2c) == 0) {
                *(undefined4 *)(lVar2 + 0x2c) = 0;
              }
              else {
                puVar22 = (undefined8 *)(lVar10 + lVar21 + 0x20);
                FUN_1447a127e(puVar22,iVar4);
                if (iVar4 != 0) {
                  memcpy((void *)*puVar22,pvVar5,(longlong)iVar4);
                }
              }
            }
            puVar22 = (undefined8 *)(lVar10 + lVar21 + 0x40);
            if ((undefined8 *)(lVar19 + 0x30) != puVar22) {
              iVar4 = *(int *)(lVar19 + 0x38);
              pvVar5 = *(void **)(lVar19 + 0x30);
              *(int *)(lVar2 + 0x48) = iVar4;
              if (iVar4 == 0 && *(int *)(lVar2 + 0x4c) == 0) {
                *(undefined4 *)(lVar2 + 0x4c) = 0;
              }
              else {
                FUN_1446dd670(puVar22,iVar4);
                if (iVar4 != 0) {
                  memcpy((void *)*puVar22,pvVar5,(longlong)iVar4 * 2);
                }
              }
            }
            bVar23 = true;
            if ((local_90 == '\0') && (*(longlong *)(lVar19 + 0x88) != 0)) {
              cVar11 = FUN_148fd54e9();
              bVar23 = cVar11 == '\x01';
            }
            *(bool *)(lVar2 + 0x50) = bVar23;
            lVar19 = lVar19 + 0x98;
            lVar20 = lVar20 + -0x98;
          } while (lVar20 != 0);
        }
      }
      uVar15 = FUN_148fd8170(local_188,local_188 + 0x16);
      FUN_148fd1d62(uVar15,&local_108);
      (**(code **)(*local_180 + 0x708))(local_180,&local_108,&local_178,0);
      local_108 = &PTR_FUN_14a5af930;
      if (local_e8 != 0) {
        FUN_1400020a8();
      }
      local_108 = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_f0])();
      FUN_1458da195(local_178,uStack_170 & 0xffffffff);
      if (local_178 != 0) {
        FUN_1400020a8();
      }
    }
    FUN_14601549e(&local_d0);
    FUN_14601549e(&local_160);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_1b8);
  }
  FUN_1443c8aa0(param_1);
  if ((local_60 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1443c8c48(param_1);
  return;
}



// FUNCTION 1443c9740 FUN_1443c9740 body=882 status=ok
// SIG undefined FUN_1443c9740(void)

void FUN_1443c9740(longlong param_1,longlong param_2,undefined1 param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  void *_Src;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined4 local_110;
  undefined **local_100;
  uint local_f8;
  uint local_f4;
  byte local_e8;
  void *local_e0;
  uint local_d8;
  undefined **local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulonglong local_b8;
  void *local_b0;
  ulonglong uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong local_78;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((*(int *)(param_2 + 0x38) != 0) && (*(longlong *)(param_2 + 0x48) != 0)) {
    lVar5 = FUN_148fd8170(param_1,*(undefined8 *)(param_2 + 0x30));
    if (lVar5 != 0) {
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = local_b8 & 0xffffffffffffff00;
      local_d0 = &PTR_FUN_14a5af930;
      local_b0 = (void *)0x0;
      uStack_a8 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = 0;
      FUN_148fd1d62(lVar5,&local_100);
      local_78 = CONCAT71(local_78._1_7_,local_e8);
      (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[local_e8])(&local_88,&local_f8);
      uVar4 = local_78;
      uVar3 = local_b8;
      local_78 = local_b8;
      local_88 = (undefined4)local_c8;
      uStack_84 = local_c8._4_4_;
      uStack_80 = (undefined4)uStack_c0;
      uStack_7c = uStack_c0._4_4_;
      local_b8 = uVar4;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[uVar3 & 0xff])(&local_88);
      _Src = local_e0;
      uStack_a8 = CONCAT44(uStack_a8._4_4_,local_d8);
      if ((longlong)(int)local_d8 == 0) {
        uStack_a8 = (ulonglong)local_d8;
      }
      else {
        FUN_1447a127e(&local_b0,local_d8,0);
        memcpy(local_b0,_Src,(longlong)(int)local_d8);
      }
      local_100 = &PTR_FUN_14a5af930;
      if (local_e0 != (void *)0x0) {
        FUN_1400020a8(local_e0);
      }
      local_100 = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_e8])(&local_f8);
      local_a0 = *(undefined8 *)(param_2 + 0x48);
      FUN_140212f8e(&local_88);
      lVar5 = CONCAT44(uStack_84,local_88);
      local_110 = 0;
      local_118 = 0;
      local_120 = 0;
      local_128 = 0;
      FUN_14021300e(&local_100,0x7b2,1,1);
      uStack_98 = (lVar5 - (longlong)local_100) / 10000000;
      local_90 = param_3;
      lVar5 = FUN_148fd8170(param_1,param_1 + 0x80);
      local_100 = (undefined **)0x0;
      uVar6 = *(uint *)(*(longlong *)(lVar5 + 0x40) + 0x208);
      uVar2 = *(undefined8 *)(*(longlong *)(lVar5 + 0x40) + 0x200);
      if (uVar6 == 0) {
        local_f4 = 0;
        uVar6 = 0;
      }
      else {
        local_f8 = uVar6;
        FUN_148fe5742(&local_100,uVar6,0);
        FUN_148fe57b5(local_100,uVar2,uVar6);
        uVar6 = local_f8;
      }
      local_f8 = uVar6 + 1;
      if (local_f4 < local_f8) {
        FUN_148ff4e54(&local_100,uVar6);
      }
      ppuVar1 = local_100 + (longlong)(int)uVar6 * 9;
      *ppuVar1 = (undefined *)&PTR_FUN_14a184370;
      *(undefined1 *)(ppuVar1 + 3) = (undefined1)local_b8;
      (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[local_b8 & 0xff])(ppuVar1 + 1,&local_c8)
      ;
      *ppuVar1 = (undefined *)&PTR_FUN_14a5af930;
      ppuVar1[4] = (undefined *)0x0;
      ppuVar1[5] = (undefined *)0x0;
      *(undefined4 *)(ppuVar1 + 6) = (undefined4)local_a0;
      *(undefined4 *)((longlong)ppuVar1 + 0x34) = local_a0._4_4_;
      *(undefined4 *)(ppuVar1 + 7) = (undefined4)uStack_98;
      *(undefined4 *)((longlong)ppuVar1 + 0x3c) = uStack_98._4_4_;
      *(undefined1 *)(ppuVar1 + 8) = local_90;
      lVar5 = FUN_148fd8170(param_1,param_1 + 0x80);
      FUN_1443ca5c2(*(undefined8 *)(lVar5 + 0x40),&local_100);
      FUN_1443c9e10(param_1);
      FUN_148fe56e5(local_100,local_f8);
      if (local_100 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      local_d0 = &PTR_FUN_14a5af930;
      if (local_b0 != (void *)0x0) {
        FUN_1400020a8();
      }
      local_d0 = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_b8 & 0xff])(&local_c8);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443c9ab4 FUN_1443c9ab4 body=830 status=ok
// SIG undefined FUN_1443c9ab4(void)

void FUN_1443c9ab4(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  ulonglong uVar4;
  void *pvVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  char cVar9;
  longlong lVar10;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  byte local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  cVar9 = (**(code **)(*param_1 + 0x18))();
  if (cVar9 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_e8);
  }
  plVar1 = param_1 + 0x39;
  cVar9 = FUN_140ba41f1(plVar1);
  if ((cVar9 == '\0') || (param_1[0x3f] != param_2[6])) {
    (**(code **)(*param_1 + 0x20))(param_1);
    if ((longlong)(int)param_1[0x46] != 0) {
      lVar10 = 0;
      do {
        if ((*(int *)(param_1[0x45] + 8 + lVar10) != 0) &&
           (*(longlong *)(param_1[0x45] + lVar10) != 0)) {
          plVar2 = param_1 + 0x3a;
          local_c8 = &PTR_FUN_14a184370;
          local_b0 = *(byte *)(param_1 + 0x3c);
          (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[local_b0])(&uStack_c0,plVar2);
          local_c8 = &PTR_FUN_14a5af930;
          local_a8 = 0;
          uStack_a0 = 0;
          local_98 = param_1[0x3f];
          if (plVar1 != param_2) {
            local_78 = CONCAT71(local_78._1_7_,*(byte *)(param_2 + 3));
            (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[*(byte *)(param_2 + 3)])
                      (&local_88,param_2 + 1);
            local_58 = local_78;
            local_68 = local_88;
            uStack_64 = uStack_84;
            uStack_60 = uStack_80;
            uStack_5c = uStack_7c;
            uVar4 = param_1[0x3c];
            lVar10 = *plVar2;
            uVar6 = *(undefined4 *)((longlong)param_1 + 0x1d4);
            lVar8 = param_1[0x3b];
            uVar7 = *(undefined4 *)((longlong)param_1 + 0x1dc);
            *(undefined4 *)plVar2 = local_88;
            *(undefined4 *)((longlong)param_1 + 0x1d4) = uStack_84;
            *(undefined4 *)(param_1 + 0x3b) = uStack_80;
            *(undefined4 *)((longlong)param_1 + 0x1dc) = uStack_7c;
            param_1[0x3c] = local_78;
            local_88 = (int)lVar10;
            uStack_84 = uVar6;
            uStack_80 = (int)lVar8;
            uStack_7c = uVar7;
            local_78 = uVar4;
            (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[uVar4 & 0xff])(&local_88);
            iVar3 = (int)param_2[5];
            pvVar5 = (void *)param_2[4];
            *(int *)(param_1 + 0x3e) = iVar3;
            if (iVar3 == 0 && *(int *)((longlong)param_1 + 500) == 0) {
              *(undefined4 *)((longlong)param_1 + 500) = 0;
            }
            else {
              FUN_1447a127e(param_1 + 0x3d,iVar3);
              if (iVar3 != 0) {
                memcpy((void *)param_1[0x3d],pvVar5,(longlong)iVar3);
              }
            }
          }
          param_1[0x3f] = param_2[6];
          FUN_148fe6d76(param_1 + 0x45,plVar1,&local_c8);
          local_c8 = &PTR_FUN_14a5af930;
          if (local_a8 != 0) {
            FUN_1400020a8();
          }
          local_c8 = &PTR_FUN_14a184370;
          (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_b0])(&uStack_c0);
          goto LAB_1443c9c7c;
        }
        lVar10 = lVar10 + 0x10;
      } while ((longlong)(int)param_1[0x46] * 0x10 != lVar10);
    }
    if (plVar1 != param_2) {
      local_58 = CONCAT71(local_58._1_7_,*(byte *)(param_2 + 3));
      (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[*(byte *)(param_2 + 3)])
                (&local_68,param_2 + 1);
      local_b8 = local_58;
      local_c8 = (undefined **)CONCAT44(uStack_64,local_68);
      uStack_c0 = uStack_60;
      uStack_bc = uStack_5c;
      uVar4 = param_1[0x3c];
      lVar10 = param_1[0x3a];
      uVar6 = *(undefined4 *)((longlong)param_1 + 0x1d4);
      lVar8 = param_1[0x3b];
      uVar7 = *(undefined4 *)((longlong)param_1 + 0x1dc);
      *(undefined4 *)(param_1 + 0x3a) = local_68;
      *(undefined4 *)((longlong)param_1 + 0x1d4) = uStack_64;
      *(undefined4 *)(param_1 + 0x3b) = uStack_60;
      *(undefined4 *)((longlong)param_1 + 0x1dc) = uStack_5c;
      param_1[0x3c] = local_58;
      local_68 = (int)lVar10;
      uStack_64 = uVar6;
      uStack_60 = (int)lVar8;
      uStack_5c = uVar7;
      local_58 = uVar4;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[uVar4 & 0xff])(&local_68);
      iVar3 = (int)param_2[5];
      pvVar5 = (void *)param_2[4];
      *(int *)(param_1 + 0x3e) = iVar3;
      if (iVar3 == 0 && *(int *)((longlong)param_1 + 500) == 0) {
        *(undefined4 *)((longlong)param_1 + 500) = 0;
      }
      else {
        FUN_1447a127e(param_1 + 0x3d,iVar3);
        if (iVar3 != 0) {
          memcpy((void *)param_1[0x3d],pvVar5,(longlong)iVar3);
        }
      }
    }
    param_1[0x3f] = param_2[6];
LAB_1443c9c7c:
    FUN_148fe6e26(param_1 + 0x42,plVar1);
    if (((int)param_1[2] != 0) && ((longlong *)param_1[1] != (longlong *)0x0)) {
      (**(code **)(*(longlong *)param_1[1] + 0x60))();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443c9e10 FUN_1443c9e10 body=1969 status=ok
// SIG undefined FUN_1443c9e10(void)

void FUN_1443c9e10(longlong *param_1)

{
  undefined **ppuVar1;
  undefined4 *puVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  char cVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined *puVar17;
  longlong lVar18;
  longlong *plVar19;
  int iVar20;
  int iVar21;
  longlong *plVar22;
  size_t _Size;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  bool bVar27;
  float fVar28;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_188;
  undefined4 local_180;
  longlong local_170;
  longlong local_168;
  void *local_160;
  longlong *local_158;
  longlong *local_150;
  longlong *local_148;
  int local_140;
  undefined8 local_138;
  undefined1 local_130 [16];
  byte local_120;
  undefined **local_118;
  undefined8 uStack_110;
  byte local_100;
  void *local_f8;
  ulonglong uStack_f0;
  undefined **local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  ulonglong local_d0;
  void *local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  byte local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  ulonglong local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_140212f8e(&local_118);
  ppuVar1 = local_118;
  local_180 = 0;
  local_188 = 0;
  local_190 = 0;
  local_198 = (undefined8 *)((ulonglong)local_198._4_4_ << 0x20);
  FUN_14021300e(&local_e8,0x7b2,1,1);
  lVar26 = (longlong)ppuVar1 - (longlong)local_e8;
  (**(code **)(*param_1 + 0x380))(param_1,&local_148);
  if ((longlong)local_140 == 0) {
    local_170 = 0;
  }
  else {
    local_168 = lVar26 / 10000000;
    plVar19 = local_148 + local_140;
    local_170 = 0;
    plVar22 = local_148;
    local_158 = param_1;
    do {
      lVar26 = *plVar22;
      if ((lVar26 != 0) && (cVar12 = FUN_148fd1e76(lVar26), cVar12 != '\0')) {
        lVar15 = *(longlong *)(lVar26 + 0x40);
        local_e8 = &PTR_FUN_14a184370;
        local_d0 = CONCAT71(local_d0._1_7_,*(byte *)(lVar15 + 0x1e0));
        (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[*(byte *)(lVar15 + 0x1e0)])
                  (&local_e0,lVar15 + 0x1d0);
        local_e8 = &PTR_FUN_14a5af930;
        local_c8 = (void *)0x0;
        uStack_c0 = 0;
        local_b8 = *(longlong *)(lVar15 + 0x1f8);
        lVar15 = local_170;
        if (0 < local_b8) {
          lVar14 = local_b8 + *(int *)((longlong)param_1 + 0x254);
          lVar15 = lVar14 - local_168;
          if (lVar15 == 0 || lVar14 < local_168) {
            FUN_148fd86b4(param_1,1);
            FUN_148fd875c(&local_138);
            local_118 = &PTR_FUN_14a184370;
            local_100 = local_120;
            (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[local_120])(&uStack_110,local_130)
            ;
            local_118 = &PTR_FUN_14a5af930;
            local_f8 = (void *)0x0;
            uStack_f0 = 0;
            local_88 = CONCAT71(local_88._1_7_,local_100);
            (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[local_100])(&local_98,&uStack_110)
            ;
            uVar10 = local_88;
            uVar9 = uStack_8c;
            uVar7 = uStack_90;
            uVar6 = uStack_94;
            uVar5 = local_98;
            uVar8 = local_d0;
            local_68 = local_88;
            local_78 = local_98;
            uStack_74 = uStack_94;
            uStack_70 = uStack_90;
            uStack_6c = uStack_8c;
            local_88 = local_d0;
            local_98 = local_e0;
            uStack_94 = uStack_dc;
            uStack_90 = uStack_d8;
            uStack_8c = uStack_d4;
            local_e0 = uVar5;
            uStack_dc = uVar6;
            uStack_d8 = uVar7;
            uStack_d4 = uVar9;
            local_d0 = uVar10;
            (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[uVar8 & 0xff])(&local_98);
            iVar20 = (int)uStack_f0;
            _Size = (size_t)(int)uStack_f0;
            uStack_c0 = CONCAT44(uStack_c0._4_4_,(int)uStack_f0);
            if ((int)uStack_f0 == 0 && uStack_c0._4_4_ == 0) {
              uStack_c0 = uStack_f0 & 0xffffffff;
            }
            else {
              local_160 = local_f8;
              FUN_1447a127e(&local_c8,uStack_f0 & 0xffffffff);
              if (iVar20 != 0) {
                memcpy(local_c8,local_160,_Size);
              }
            }
            local_118 = &PTR_FUN_14a5af930;
            if (local_f8 != (void *)0x0) {
              FUN_1400020a8();
            }
            local_118 = &PTR_FUN_14a184370;
            (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_100])(&uStack_110);
            local_138 = &PTR_FUN_14a184370;
            (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_120])(local_130);
            local_b8 = 0;
            FUN_1443c9ab4(*(undefined8 *)(lVar26 + 0x40),&local_e8);
            param_1 = local_158;
            lVar15 = local_170;
          }
        }
        local_170 = lVar15;
        lVar15 = *(longlong *)(lVar26 + 0x40);
        local_118 = (undefined **)0x0;
        uStack_110 = 0;
        iVar20 = *(int *)(lVar15 + 0x208);
        iVar21 = 0;
        if ((longlong)iVar20 != 0) {
          lVar14 = *(longlong *)(lVar15 + 0x200);
          local_160 = (void *)(lVar14 + 8);
          lVar18 = 0;
          lVar23 = local_168;
          local_150 = plVar19;
          do {
            uVar8 = uStack_110;
            lVar24 = (longlong)(int)param_1[0x4b] + *(longlong *)(lVar14 + 0x38 + lVar18);
            lVar25 = lVar24 - lVar23;
            lVar11 = local_170;
            if (lVar25 != 0 && lVar23 <= lVar24) {
              lVar23 = (longlong)(int)uStack_110;
              uVar13 = (int)uStack_110 + 1;
              uStack_110 = CONCAT44(uStack_110._4_4_,uVar13);
              if (uStack_110._4_4_ < uVar13) {
                FUN_148ff4e54(&local_118,uVar8 & 0xffffffff);
              }
              ppuVar1 = local_118 + lVar23 * 9 + 1;
              ppuVar1[-1] = (undefined *)&PTR_FUN_14a184370;
              bVar3 = *(byte *)(lVar14 + 0x18 + lVar18);
              *(byte *)(ppuVar1 + 2) = bVar3;
              (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[bVar3])
                        (ppuVar1,(longlong)local_160 + lVar18);
              ppuVar1[-1] = (undefined *)&PTR_FUN_14a5af930;
              ppuVar1[3] = (undefined *)0x0;
              ppuVar1[4] = (undefined *)0x0;
              puVar2 = (undefined4 *)(lVar14 + 0x30 + lVar18);
              uVar5 = puVar2[1];
              uVar6 = puVar2[2];
              uVar7 = puVar2[3];
              *(undefined4 *)(ppuVar1 + 5) = *puVar2;
              *(undefined4 *)((longlong)ppuVar1 + 0x2c) = uVar5;
              *(undefined4 *)(ppuVar1 + 6) = uVar6;
              *(undefined4 *)((longlong)ppuVar1 + 0x34) = uVar7;
              *(undefined1 *)(ppuVar1 + 7) = *(undefined1 *)(lVar14 + 0x40 + lVar18);
              lVar23 = local_168;
              param_1 = local_158;
              lVar11 = lVar25;
              if ((local_170 != 0) && (lVar11 = local_170, lVar25 <= local_170)) {
                lVar11 = lVar25;
              }
            }
            local_170 = lVar11;
            plVar19 = local_150;
            lVar18 = lVar18 + 0x48;
          } while ((longlong)iVar20 * 0x48 != lVar18);
          iVar21 = *(int *)(lVar15 + 0x208);
          if (*(int *)(lVar15 + 0x208) != (int)uStack_110) {
            FUN_1443ca5c2(*(undefined8 *)(lVar26 + 0x40),&local_118);
            iVar21 = (int)uStack_110;
          }
        }
        FUN_148fe56e5(local_118,iVar21);
        if (local_118 != (undefined **)0x0) {
          FUN_1400020a8();
        }
        local_e8 = &PTR_FUN_14a5af930;
        if (local_c8 != (void *)0x0) {
          FUN_1400020a8();
        }
        local_e8 = &PTR_FUN_14a184370;
        (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_d0 & 0xff])(&local_e0);
      }
      plVar22 = plVar22 + 1;
    } while (plVar22 != plVar19);
  }
  if (local_148 != (longlong *)0x0) {
    FUN_1400020a8(local_148);
  }
  if (0 < local_170) {
    lVar26 = (**(code **)(*param_1 + 0x180))(param_1);
    if (*(longlong *)(lVar26 + 0x1f0) == 0) {
      puVar16 = (undefined8 *)(lVar26 + 0x458);
    }
    else {
      puVar16 = (undefined8 *)(*(longlong *)(lVar26 + 0x1f0) + 0xf0);
    }
    uVar4 = *puVar16;
    local_118 = (undefined **)0x0;
    uStack_110 = uStack_110 & 0xffffffff00000000;
    FUN_1446efa72(&local_118,0,3,0x10);
    ppuVar1 = local_118;
    uStack_110 = CONCAT44(uStack_110._4_4_,3);
    *local_118 = (undefined *)&PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    puVar17 = (undefined *)(DAT_14c758608 + 1);
    lVar26 = DAT_14c758608 + 1;
    if (puVar17 == (undefined *)0x0) {
      LOCK();
      UNLOCK();
      puVar17 = (undefined *)(DAT_14c758608 + 2);
      lVar26 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar26;
    fVar28 = (float)local_170;
    local_118[2] = puVar17;
    *local_118 = (undefined *)&PTR_FUN_14ba5d960;
    local_118[3] = (undefined *)0x0;
    iVar20 = 0;
    if (param_1 != (longlong *)0x0) {
      uVar13 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(local_118 + 3) = uVar13;
      if ((int)uVar13 < DAT_14c9647dc) {
        lVar26 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
      }
      else {
        lVar26 = 0;
      }
      iVar20 = *(int *)(lVar26 + 0x10);
      if (*(int *)(lVar26 + 0x10) == 0) {
        LOCK();
        iVar20 = DAT_14c964868 + 1;
        UNLOCK();
        iVar21 = DAT_14c964868 + 1;
        bVar27 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar20;
        if (bVar27) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar21);
        }
        LOCK();
        iVar20 = *(int *)(lVar26 + 0x10);
        bVar27 = iVar20 == 0;
        if (bVar27) {
          *(int *)(lVar26 + 0x10) = iVar21;
          iVar20 = 0;
        }
        UNLOCK();
        if (bVar27) {
          iVar20 = iVar21;
        }
      }
    }
    *(int *)((longlong)ppuVar1 + 0x1c) = iVar20;
    ppuVar1[4] = FUN_1443c9e10;
    local_e8 = (undefined **)0x0;
    local_e0 = 0;
    FUN_14487d8d8(&local_e8,&local_118);
    local_a8 = 1;
    local_198 = &local_138;
    uVar13 = (uint)local_138;
    local_138 = (undefined **)CONCAT44(0xbf800000,uVar13 & 0xffff0000);
    FUN_1406f4044(uVar4,param_1 + 0x49,&local_e8,fVar28);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_a8])(&local_e8);
    if ((int)uStack_110 != 0) {
      if (local_118 == (undefined **)0x0) goto LAB_1443ca512;
      (**(code **)*local_118)(local_118,0);
      FUN_1446efa72(&local_118,0,0,0x10);
      uStack_110 = uStack_110 & 0xffffffff00000000;
    }
    if (local_118 != (undefined **)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1443ca512:
  if ((local_60 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443ca5c2 FUN_1443ca5c2 body=380 status=ok
// SIG undefined FUN_1443ca5c2(void)

void FUN_1443ca5c2(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar3 = (**(code **)(*param_1 + 0x18))();
  if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
  }
  plVar1 = param_1 + 0x40;
  if ((int)param_1[0x41] == *(int *)(param_2 + 8)) {
    cVar3 = FUN_148fe6eca(*plVar1);
    if (cVar3 != '\0') goto LAB_1443ca6a9;
  }
  (**(code **)(*param_1 + 0x20))(param_1);
  if ((longlong)(int)param_1[0x4c] != 0) {
    lVar4 = 0;
    do {
      if ((*(int *)(param_1[0x4b] + 8 + lVar4) != 0) && (*(longlong *)(param_1[0x4b] + lVar4) != 0))
      {
        local_50 = 0;
        iVar2 = (int)param_1[0x41];
        lVar4 = param_1[0x40];
        local_48 = iVar2;
        if (iVar2 == 0) {
          local_44 = 0;
        }
        else {
          FUN_148fe5742(&local_50,iVar2,0);
          FUN_148fe57b5(local_50,lVar4,iVar2);
        }
        FUN_148fe5686(plVar1,param_2);
        FUN_148fe6f2c(param_1 + 0x4b,plVar1,&local_50);
        FUN_148fe56e5(local_50,local_48);
        if (local_50 != 0) {
          FUN_1400020a8();
        }
        goto LAB_1443ca685;
      }
      lVar4 = lVar4 + 0x10;
    } while ((longlong)(int)param_1[0x4c] * 0x10 != lVar4);
  }
  FUN_148fe5686(plVar1,param_2);
LAB_1443ca685:
  FUN_148fe6fdc(param_1 + 0x48,plVar1);
  if (((int)param_1[2] != 0) && ((longlong *)param_1[1] != (longlong *)0x0)) {
    (**(code **)(*(longlong *)param_1[1] + 0x60))();
  }
LAB_1443ca6a9:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443ca75a FUN_1443ca75a body=545 status=ok
// SIG undefined FUN_1443ca75a(void)

ulonglong FUN_1443ca75a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  wchar_t *pwVar5;
  longlong *plVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  wchar_t *local_68;
  int local_60;
  undefined8 *local_58;
  ulonglong uStack_50;
  wchar_t *local_48;
  ulonglong uStack_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_30 = param_3;
  cVar2 = FUN_140988638(&local_30,L"DEBUG",1);
  if (cVar2 == '\0') {
    uVar7 = 0;
  }
  else {
    plVar6 = (longlong *)(param_1 + -0x28);
    local_48 = (wchar_t *)0x0;
    uStack_40 = 0;
    local_78 = 0;
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    FUN_14063337c(local_30,L"CONTEXT=",&local_48,1);
    cVar2 = FUN_140988638(&local_30,L"HELP",1);
    if (cVar2 == '\0') {
      if (1 < (int)uStack_40) {
        local_58 = (undefined8 *)0x0;
        uStack_50 = 0;
        FUN_140b1283a(&local_68,L"CONTEXT=",&local_48);
        pwVar5 = local_68;
        if (local_60 == 0) {
          pwVar5 = L"";
        }
        FUN_140988638(&local_30,pwVar5,1);
        if (local_68 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        FUN_140056680(&local_68,&DAT_14a176c16);
        if ((int)uStack_40 == local_60) {
          bVar9 = true;
          if (1 < (int)uStack_40) {
            iVar3 = wcscmp(local_48,local_68);
            bVar9 = iVar3 == 0;
          }
        }
        else {
          bVar9 = local_60 + (int)uStack_40 == 1;
        }
        if (local_68 != (wchar_t *)0x0) {
          FUN_1400020a8(local_68);
        }
        if (bVar9) {
          (**(code **)(*plVar6 + 0x2e8))(plVar6,&local_58);
        }
        else {
          uStack_50 = CONCAT44(uStack_50._4_4_,1);
          FUN_1447a1bd6(&local_58,0);
          pwVar5 = local_48;
          puVar1 = local_58;
          *local_58 = 0;
          lVar8 = (longlong)(int)uStack_40;
          *(int *)(local_58 + 1) = (int)uStack_40;
          if (lVar8 == 0) {
            *(undefined4 *)((longlong)local_58 + 0xc) = 0;
          }
          else {
            FUN_1446dd670(local_58,uStack_40 & 0xffffffff,0);
            memcpy((void *)*puVar1,pwVar5,lVar8 * 2);
          }
        }
        uVar4 = (**(code **)(*plVar6 + 0x2f8))(plVar6,local_30,&local_58);
        uVar7 = (ulonglong)uVar4;
        FUN_1447a1747(local_58,uStack_50 & 0xffffffff);
        if (local_58 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
    else {
      (**(code **)(*plVar6 + 0x2f0))(plVar6);
    }
    if (local_48 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 1443ca97c FUN_1443ca97c body=169 status=ok
// SIG undefined FUN_1443ca97c(void)

void FUN_1443ca97c(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x30) == 0) {
LAB_1443ca9b8:
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(plVar1,0,0,0x10);
      *(undefined4 *)(param_1 + 0x30) = 0;
      goto LAB_1443ca9b8;
    }
  }
  plVar1 = (longlong *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x20) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1443ca9fb;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1443ca9fb:
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1443caa26 FUN_1443caa26 body=208 status=ok
// SIG undefined FUN_1443caa26(void)

undefined8 * FUN_1443caa26(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  _Src = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 * 2);
  }
  param_1[3] = param_2[3];
  lVar2 = param_2[4];
  param_1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  FUN_148ff4dd0(param_1 + 5,param_2 + 5);
  param_1[7] = param_2[7];
  lVar2 = param_2[8];
  param_1[8] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  param_1[9] = param_2[9];
  lVar2 = param_2[10];
  param_1[10] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 1443caaf6 FUN_1443caaf6 body=163 status=ok
// SIG undefined FUN_1443caaf6(void)

void FUN_1443caaf6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1443cab9a(param_1 + 0x60);
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_14a5af930;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(param_1 + 0x40)])(param_1 + 0x30);
  plVar3 = *(longlong **)(param_1 + 0x20);
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
  plVar3 = *(longlong **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x0001443cab8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1443cab9a FUN_1443cab9a body=200 status=ok
// SIG undefined FUN_1443cab9a(void)

void FUN_1443cab9a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  plVar3 = *(longlong **)(param_1 + 0x50);
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
  plVar3 = *(longlong **)(param_1 + 0x40);
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
  plVar3 = (longlong *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x30) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_1443cac2a;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_1443cac2a:
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1443cac62 FUN_1443cac62 body=141 status=ok
// SIG undefined FUN_1443cac62(void)

void FUN_1443cac62(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  
  plVar1 = (longlong *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x30) != 0) {
    puVar4 = (undefined8 *)*plVar1;
    if (puVar4 == (undefined8 *)0x0) goto LAB_1443caca6;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1443caca6:
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar1)(plVar1);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1443cacf0 FUN_1443cacf0 body=141 status=ok
// SIG undefined FUN_1443cacf0(void)

void FUN_1443cacf0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  
  plVar1 = (longlong *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x30) != 0) {
    puVar4 = (undefined8 *)*plVar1;
    if (puVar4 == (undefined8 *)0x0) goto LAB_1443cad34;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1443cad34:
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar1)(plVar1);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1443cad7e FUN_1443cad7e body=1003 status=ok
// SIG undefined FUN_1443cad7e(void)

void FUN_1443cad7e(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong *param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined4 local_144;
  longlong local_140;
  longlong *local_138;
  longlong *local_130;
  longlong *local_128;
  longlong *local_120;
  longlong *local_118;
  undefined **local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar6 = FUN_148fd89a6();
  local_108 = 0;
  uStack_100 = 0;
  local_110 = &PTR_FUN_14ba5ae40;
  uVar5 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_bc = 0xffffffff00000080;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_158 = 0x80002000;
  cVar4 = FUN_143e6d052(param_3,param_4,&local_e8,0);
  if (cVar4 == '\0') goto LAB_1443cb112;
  lVar10 = *(longlong *)(lVar6 + 0x20);
  if (lVar10 == 0) {
    plVar7 = (longlong *)FUN_14001cc68(0xd8);
    plVar7[1] = (longlong)&DAT_100000001;
    *plVar7 = (longlong)&PTR_FUN_14ba5dfd0;
    plVar9 = plVar7 + 2;
    memset(plVar7 + 3,0,0xc0);
    plVar7[2] = (longlong)&PTR_FUN_14ba5ae40;
    plVar7[5] = 0;
    plVar7[6] = 0;
    plVar7[7] = 0;
    plVar7[8] = 0;
    *(undefined8 *)((longlong)plVar7 + 100) = 0xffffffff00000080;
    plVar7[0x11] = 0;
    plVar7[0x12] = 0;
    *(undefined8 *)((longlong)plVar7 + 0xb4) = 0xffffffff00000080;
    local_120 = plVar9;
    local_118 = plVar7;
    FUN_148ff55b2(&local_120,plVar9);
    if (plVar7 == (longlong *)0x0) {
      *(undefined8 *)(lVar6 + 0x20) = 0x10;
      plVar9 = *(longlong **)(lVar6 + 0x28);
      if (plVar9 != (longlong *)0x0) {
        *(undefined8 *)(lVar6 + 0x28) = 0;
LAB_1443caf25:
        LOCK();
        plVar7 = plVar9 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
joined_r0x0001443caf18:
          if (iVar2 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      *(longlong **)(lVar6 + 0x20) = plVar9;
      plVar9 = *(longlong **)(lVar6 + 0x28);
      if (plVar7 == plVar9) {
        LOCK();
        plVar9 = plVar7 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
          plVar9 = plVar7;
          goto joined_r0x0001443caf18;
        }
      }
      else {
        *(longlong **)(lVar6 + 0x28) = plVar7;
        if (plVar9 != (longlong *)0x0) goto LAB_1443caf25;
      }
    }
    plVar9 = local_118;
    if (local_118 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_118 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_118)(local_118);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    lVar10 = *(longlong *)(lVar6 + 0x20);
  }
  *(undefined4 *)(lVar10 + 0x18) = (undefined4)local_f8;
  *(undefined4 *)(lVar10 + 0x1c) = local_f8._4_4_;
  *(undefined4 *)(lVar10 + 0x20) = (undefined4)uStack_f0;
  *(undefined4 *)(lVar10 + 0x24) = uStack_f0._4_4_;
  FUN_140c39ec6(lVar10 + 0x28,&local_e8);
  FUN_1410b2022(lVar10 + 0x78,&local_98);
  plVar9 = *(longlong **)(lVar6 + 0x10);
  if (plVar9 == (longlong *)0x0) {
    uVar5 = 0;
    goto LAB_1443cb112;
  }
  FUN_148fd9c60(lVar6,&local_120);
  if (local_120 == (longlong *)0x0) {
    uVar5 = 0;
  }
  else {
    (**(code **)(*plVar9 + 0x40))(plVar9,&local_130);
    if (local_130 == (longlong *)0x0) {
      uVar5 = 0;
    }
    else {
      local_144 = 0x11111111;
      (**(code **)(*local_130 + 200))(local_130,&local_140,local_120);
      if (local_140 == 0) {
LAB_1443cb09a:
        uVar5 = 0;
      }
      else {
        uVar3 = *(undefined8 *)(local_140 + 0x18);
        if (DAT_14cbf5500 == 0) {
          uVar8 = FUN_1410510fd();
          DAT_14cbf5500 = FUN_140002ddd(FUN_146671502,uVar8,L"PartyMemberRepData");
          if (DAT_14cbf5500 == 0) goto LAB_1443cb09a;
        }
        if ((*(int *)(param_3 + 0x38) < *(int *)(DAT_14cbf5500 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(param_3 + 0x30) + (longlong)*(int *)(DAT_14cbf5500 + 0x38) * 8) !=
            DAT_14cbf5500 + 0x30)) goto LAB_1443cb09a;
        local_158 = *(undefined8 *)(lVar6 + 0x20);
        uVar5 = (**(code **)(*local_130 + 0xb0))(local_130,local_120,uVar3,&DAT_14cb8e138);
      }
      if (local_138 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_138 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*local_138)(local_138);
          LOCK();
          piVar1 = (int *)((longlong)local_138 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_138 + 0x10))(local_138);
          }
        }
      }
    }
    if (local_128 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_128 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_128)(local_128);
        LOCK();
        piVar1 = (int *)((longlong)local_128 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_128 + 0x10))(local_128);
        }
      }
    }
  }
  plVar9 = local_118;
  if (local_118 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_118 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_118)(local_118);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
LAB_1443cb112:
  plVar9 = (longlong *)*param_5;
  if (plVar9 != (longlong *)0x0 && (int)param_5[1] != 0) {
    (**(code **)(*plVar9 + 0x60))(plVar9,uVar5);
  }
  FUN_148fdb04c(&local_110);
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443cb16a FUN_1443cb16a body=915 status=ok
// SIG undefined FUN_1443cb16a(void)

void FUN_1443cb16a(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined4 local_144;
  longlong local_140;
  longlong *local_138;
  longlong *local_130;
  longlong *local_128;
  longlong *local_120;
  longlong *local_118;
  undefined **local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  int local_b4;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar4 = FUN_148fd89a6();
  local_108 = 0;
  uStack_100 = 0;
  local_110 = &PTR_FUN_14ba5ae40;
  uVar3 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_bc = 0xffffffff00000080;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  FUN_143e6d200(&local_110,param_3);
  if ((int)uStack_e0 <= local_b4) goto LAB_1443cb4aa;
  lVar7 = *(longlong *)(lVar4 + 0x20);
  if (lVar7 == 0) {
    plVar5 = (longlong *)FUN_14001cc68(0xd8);
    plVar5[1] = (longlong)&DAT_100000001;
    *plVar5 = (longlong)&PTR_FUN_14ba5dfd0;
    plVar6 = plVar5 + 2;
    memset(plVar5 + 3,0,0xc0);
    plVar5[2] = (longlong)&PTR_FUN_14ba5ae40;
    plVar5[5] = 0;
    plVar5[6] = 0;
    plVar5[7] = 0;
    plVar5[8] = 0;
    *(undefined8 *)((longlong)plVar5 + 100) = 0xffffffff00000080;
    plVar5[0x11] = 0;
    plVar5[0x12] = 0;
    *(undefined8 *)((longlong)plVar5 + 0xb4) = 0xffffffff00000080;
    local_120 = plVar6;
    local_118 = plVar5;
    FUN_148ff55b2(&local_120,plVar6);
    if (plVar5 == (longlong *)0x0) {
      *(undefined8 *)(lVar4 + 0x20) = 0x10;
      plVar6 = *(longlong **)(lVar4 + 0x28);
      if (plVar6 != (longlong *)0x0) {
        *(undefined8 *)(lVar4 + 0x28) = 0;
LAB_1443cb318:
        LOCK();
        plVar5 = plVar6 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
joined_r0x0001443cb30b:
          if (iVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      *(longlong **)(lVar4 + 0x20) = plVar6;
      plVar6 = *(longlong **)(lVar4 + 0x28);
      if (plVar5 == plVar6) {
        LOCK();
        plVar6 = plVar5 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
          plVar6 = plVar5;
          goto joined_r0x0001443cb30b;
        }
      }
      else {
        *(longlong **)(lVar4 + 0x28) = plVar5;
        if (plVar6 != (longlong *)0x0) goto LAB_1443cb318;
      }
    }
    plVar6 = local_118;
    if (local_118 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_118 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_118)(local_118);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    lVar7 = *(longlong *)(lVar4 + 0x20);
  }
  *(undefined4 *)(lVar7 + 0x18) = (undefined4)local_f8;
  *(undefined4 *)(lVar7 + 0x1c) = local_f8._4_4_;
  *(undefined4 *)(lVar7 + 0x20) = (undefined4)uStack_f0;
  *(undefined4 *)(lVar7 + 0x24) = uStack_f0._4_4_;
  FUN_140c39ec6(lVar7 + 0x28,&local_e8);
  FUN_1410b2022(lVar7 + 0x78,&local_98);
  plVar6 = *(longlong **)(lVar4 + 0x10);
  if (plVar6 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    FUN_148fd9c60(lVar4,&local_120);
    if (local_120 == (longlong *)0x0) {
      uVar3 = 0;
    }
    else {
      (**(code **)(*plVar6 + 0x40))(plVar6,&local_130);
      if (local_130 == (longlong *)0x0) {
        uVar3 = 0;
      }
      else {
        local_144 = 0x11111111;
        (**(code **)(*local_130 + 200))(local_130,&local_140,local_120);
        if (local_140 == 0) {
          uVar3 = 0;
        }
        else {
          local_158 = *(undefined8 *)(lVar4 + 0x20);
          uVar3 = (**(code **)(*local_130 + 0xb0))
                            (local_130,local_120,*(undefined8 *)(local_140 + 0x18),&DAT_14cb8e138);
        }
        if (local_138 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_138 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*local_138)(local_138);
            LOCK();
            piVar1 = (int *)((longlong)local_138 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_138 + 0x10))(local_138);
            }
          }
        }
      }
      if (local_128 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_128 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_128)(local_128);
          LOCK();
          piVar1 = (int *)((longlong)local_128 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_128 + 0x10))(local_128);
          }
        }
      }
    }
    plVar6 = local_118;
    if (local_118 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_118 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_118)(local_118);
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
LAB_1443cb4aa:
  plVar6 = (longlong *)*param_4;
  if (plVar6 != (longlong *)0x0 && (int)param_4[1] != 0) {
    (**(code **)(*plVar6 + 0x60))(plVar6,uVar3);
  }
  FUN_148fdb04c(&local_110);
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443cb4fe FUN_1443cb4fe body=4670 status=ok
// SIG undefined FUN_1443cb4fe(void)

ulonglong FUN_1443cb4fe(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  void *pvVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  char cVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 unaff_RSI;
  undefined7 uVar16;
  undefined **ppuVar15;
  undefined1 uVar17;
  ushort uVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  ushort uVar22;
  undefined1 auStack_138 [32];
  ulonglong local_118;
  longlong *local_108;
  longlong *local_100;
  void *local_f8;
  undefined8 local_f0;
  void *local_e8;
  int local_e0;
  undefined4 local_dc;
  longlong local_d8 [2];
  undefined8 local_c8;
  undefined8 uStack_c0;
  int local_b8;
  undefined4 uStack_b4;
  longlong local_a8;
  undefined8 *local_90;
  int local_88;
  longlong *local_80;
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  longlong *local_60;
  uint local_58;
  undefined4 local_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uVar16 = (undefined7)((ulonglong)unaff_RSI >> 8);
  ppuVar15 = (undefined **)CONCAT71(uVar16,1);
  local_50 = param_2;
  cVar7 = FUN_140988638(&local_50,L"LOGIN",1);
  local_108 = param_1;
  if (cVar7 != '\0') {
    if ((int)param_3[1] < 2) {
      local_60 = (longlong *)0x0;
      local_58 = *(uint *)((undefined8 *)*param_3 + 1);
      lVar13 = (longlong)(int)local_58;
      pvVar4 = *(void **)*param_3;
      if (lVar13 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,pvVar4,lVar13 * 2);
      }
      FUN_14619c2be(&local_70,&local_50,0);
      FUN_14619c2be(&local_80,&local_50,0);
      if (1 < iStack_68) {
        iVar12 = 0x200;
        do {
          plVar11 = local_60;
          if (iVar12 < 0 || local_78 < 2) break;
          local_f8 = (void *)0x0;
          lVar13 = (longlong)(int)local_58;
          local_f0 = CONCAT44(local_f0._4_4_,local_58);
          local_100 = param_1;
          if (lVar13 == 0) {
            local_f0 = (ulonglong)local_58;
          }
          else {
            FUN_1446dd670(&local_f8,local_58,0);
            memcpy(local_f8,plVar11,lVar13 * 2);
          }
          local_90 = (undefined8 *)0x0;
          local_88 = 0;
          FUN_1446efa72(&local_90,0,3,0x10);
          param_1 = local_108;
          local_88 = 3;
          *local_90 = &PTR_LAB_149e06450;
          LOCK();
          UNLOCK();
          lVar10 = DAT_14c758608 + 1;
          lVar13 = DAT_14c758608 + 1;
          if (lVar10 == 0) {
            LOCK();
            UNLOCK();
            lVar10 = DAT_14c758608 + 2;
            lVar13 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar13;
          local_90[2] = lVar10;
          *local_90 = &PTR_FUN_14ba5dff0;
          local_90[3] = local_100;
          local_90[4] = local_f8;
          local_f8 = (void *)0x0;
          *(int *)(local_90 + 5) = (int)local_f0;
          *(undefined4 *)((longlong)local_90 + 0x2c) = local_f0._4_4_;
          local_f0 = 0;
          FUN_140056680(local_d8,L"epic");
          local_118 = local_118 & 0xffffffffffffff00;
          FUN_1489ba396(&local_c8,local_d8,&local_70,&local_80);
          (**(code **)(*param_1 + 0x2a8))(param_1,&local_60,&local_c8,&local_90);
          if (local_a8 != 0) {
            FUN_1400020a8();
          }
          if (CONCAT44(uStack_b4,local_b8) != 0) {
            FUN_1400020a8();
          }
          if (local_c8 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          if (local_d8[0] != 0) {
            FUN_1400020a8();
          }
          if (local_88 == 0) {
LAB_1443cc275:
            if (local_90 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
          }
          else if (local_90 != (undefined8 *)0x0) {
            (**(code **)*local_90)(local_90,0);
            FUN_1446efa72(&local_90,0,0,0x10);
            local_88 = 0;
            goto LAB_1443cc275;
          }
          if (local_f8 != (void *)0x0) {
            FUN_1400020a8();
          }
          local_118 = 0;
          cVar7 = FUN_14063337c(local_50,L"CONTEXT=",&local_60,1);
          if (cVar7 == '\0') break;
          FUN_140b1283a(&local_c8,L"CONTEXT=",&local_60);
          plVar11 = (longlong *)&DAT_149dfb77a;
          if ((int)uStack_c0 != 0) {
            plVar11 = local_c8;
          }
          FUN_140988638(&local_50,plVar11);
          if (local_c8 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          FUN_14619c2be(&local_c8,&local_50);
          if (CONCAT44(uStack_6c,local_70) != 0) {
            FUN_1400020a8();
          }
          local_70 = (undefined4)local_c8;
          uStack_6c = local_c8._4_4_;
          iStack_68 = (int)uStack_c0;
          uStack_64 = uStack_c0._4_4_;
          FUN_14619c2be(&local_c8);
          if (local_80 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          local_80 = local_c8;
          local_78 = (int)uStack_c0;
          local_74 = uStack_c0._4_4_;
          iVar12 = iVar12 + -1;
        } while (1 < iStack_68);
      }
      if (local_80 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (CONCAT44(uStack_6c,local_70) != 0) {
        FUN_1400020a8();
      }
      if (local_60 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    goto LAB_1443cc3fd;
  }
  ppuVar15 = (undefined **)CONCAT71(uVar16,1);
  cVar7 = FUN_140988638(&local_50,L"LOGOUT",1);
  if (cVar7 == '\0') {
    cVar7 = FUN_140988638(&local_50,L"JOINPARTY",1);
    if (cVar7 != '\0') {
      FUN_14619c2be(&local_60,&local_50,0);
      FUN_14619c2be(&local_70,&local_50,0);
      FUN_14619c2be(&local_80,&local_50,0);
      if ((longlong)(int)param_3[1] != 0) {
        puVar14 = (undefined8 *)*param_3;
        lVar13 = (longlong)(int)param_3[1] << 4;
        ppuVar15 = (undefined **)&local_c8;
        do {
          local_f8 = (void *)0x0;
          uVar20 = *(uint *)(puVar14 + 1);
          pvVar4 = (void *)*puVar14;
          local_f0 = CONCAT44(local_f0._4_4_,uVar20);
          local_100 = param_1;
          if ((longlong)(int)uVar20 == 0) {
            local_f0 = (ulonglong)uVar20;
          }
          else {
            FUN_1446dd670(&local_f8,uVar20,0);
            memcpy(local_f8,pvVar4,(longlong)(int)uVar20 * 2);
          }
          plVar11 = local_80;
          local_e8 = (void *)0x0;
          lVar10 = (longlong)local_78;
          local_e0 = local_78;
          if (lVar10 == 0) {
            local_dc = 0;
          }
          else {
            FUN_1446dd670(&local_e8,local_78,0);
            memcpy(local_e8,plVar11,lVar10 * 2);
          }
          local_90 = (undefined8 *)0x0;
          local_88 = 0;
          FUN_1446efa72(&local_90,0,4,0x10);
          puVar6 = local_90;
          pvVar4 = local_f8;
          local_88 = 4;
          *local_90 = &PTR_LAB_149e06450;
          LOCK();
          UNLOCK();
          lVar8 = DAT_14c758608 + 1;
          lVar10 = DAT_14c758608 + 1;
          if (lVar8 == 0) {
            LOCK();
            UNLOCK();
            lVar8 = DAT_14c758608 + 2;
            lVar10 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar10;
          local_90[2] = lVar8;
          *local_90 = &PTR_FUN_14ba5e0d0;
          local_90[3] = local_100;
          local_90[4] = 0;
          lVar10 = (longlong)(int)local_f0;
          *(int *)(local_90 + 5) = (int)local_f0;
          if (lVar10 == 0) {
            *(undefined4 *)((longlong)local_90 + 0x2c) = 0;
          }
          else {
            puVar3 = local_90 + 4;
            FUN_1446dd670(puVar3,local_f0 & 0xffffffff,0);
            param_1 = local_108;
            memcpy((void *)*puVar3,pvVar4,lVar10 * 2);
          }
          pvVar4 = local_e8;
          puVar6[6] = 0;
          lVar10 = (longlong)local_e0;
          *(int *)(puVar6 + 7) = local_e0;
          if (lVar10 == 0) {
            *(undefined4 *)((longlong)puVar6 + 0x3c) = 0;
          }
          else {
            FUN_1446dd670(puVar6 + 6,local_e0,0);
            memcpy((void *)puVar6[6],pvVar4,lVar10 * 2);
          }
          FUN_140056680(local_d8,L"epic");
          local_118 = local_118 & 0xffffffffffffff00;
          FUN_1489ba396(ppuVar15,local_d8,&local_60,&local_70);
          (**(code **)(*param_1 + 0x2a8))(param_1,puVar14,ppuVar15,&local_90);
          if (local_a8 != 0) {
            FUN_1400020a8();
          }
          if (CONCAT44(uStack_b4,local_b8) != 0) {
            FUN_1400020a8();
          }
          if (local_c8 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          if (local_d8[0] != 0) {
            FUN_1400020a8();
          }
          if (local_88 == 0) {
LAB_1443cbff3:
            if (local_90 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
          }
          else if (local_90 != (undefined8 *)0x0) {
            (**(code **)*local_90)();
            FUN_1446efa72(&local_90,0,0,0x10);
            local_88 = 0;
            goto LAB_1443cbff3;
          }
          if (local_e8 != (void *)0x0) {
            FUN_1400020a8();
          }
          if (local_f8 != (void *)0x0) {
            FUN_1400020a8();
          }
          puVar14 = puVar14 + 2;
          lVar13 = lVar13 + -0x10;
        } while (lVar13 != 0);
      }
      if (local_80 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      plVar11 = local_60;
      if (CONCAT44(uStack_6c,local_70) != 0) {
        FUN_1400020a8();
        plVar11 = local_60;
      }
      goto LAB_1443cc3f0;
    }
    ppuVar15 = (undefined **)CONCAT71(uVar16,1);
    cVar7 = FUN_140988638(&local_50,&DAT_14ba56c08,1);
    if (cVar7 != '\0') {
      if ((longlong)(int)param_3[1] != 0) {
        puVar14 = (undefined8 *)*param_3;
        lVar13 = (longlong)(int)param_3[1] << 4;
        do {
          uStack_c0 = (longlong *)0x0;
          local_b8 = *(int *)(puVar14 + 1);
          lVar10 = (longlong)local_b8;
          pvVar4 = (void *)*puVar14;
          local_c8 = param_1;
          if (lVar10 == 0) {
            uStack_b4 = 0;
          }
          else {
            FUN_1446dd670(&uStack_c0,local_b8,0);
            memcpy(uStack_c0,pvVar4,lVar10 * 2);
          }
          local_100 = (longlong *)0x0;
          local_f8 = (void *)((ulonglong)local_f8 & 0xffffffff00000000);
          FUN_1446efa72(&local_100,0,3,0x10);
          plVar11 = uStack_c0;
          local_f8 = (void *)CONCAT44(local_f8._4_4_,3);
          *local_100 = (longlong)&PTR_LAB_14ba5e300;
          LOCK();
          UNLOCK();
          lVar8 = DAT_14c758608 + 1;
          lVar10 = DAT_14c758608 + 1;
          if (lVar8 == 0) {
            LOCK();
            UNLOCK();
            lVar8 = DAT_14c758608 + 2;
            lVar10 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar10;
          local_100[2] = lVar8;
          *local_100 = (longlong)&PTR_FUN_14ba5e290;
          local_100[3] = (longlong)local_c8;
          local_100[4] = 0;
          lVar10 = (longlong)local_b8;
          *(int *)(local_100 + 5) = local_b8;
          if (lVar10 == 0) {
            *(undefined4 *)((longlong)local_100 + 0x2c) = 0;
          }
          else {
            plVar9 = local_100 + 4;
            FUN_1446dd670(plVar9,local_b8,0);
            memcpy((void *)*plVar9,plVar11,lVar10 * 2);
          }
          param_1 = local_108;
          (**(code **)(*local_108 + 0x2c0))(local_108);
          if ((int)local_f8 == 0) {
LAB_1443cb925:
            if (local_100 != (longlong *)0x0) {
              FUN_1400020a8();
            }
          }
          else if (local_100 != (longlong *)0x0) {
            (**(code **)*local_100)();
            FUN_1446efa72(&local_100,0,0,0x10);
            local_f8 = (void *)((ulonglong)local_f8 & 0xffffffff00000000);
            goto LAB_1443cb925;
          }
          if (uStack_c0 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          puVar14 = puVar14 + 2;
          lVar13 = lVar13 + -0x10;
        } while (lVar13 != 0);
      }
      goto LAB_1443cc3fd;
    }
    ppuVar15 = (undefined **)CONCAT71(uVar16,1);
    cVar7 = FUN_140988638(&local_50,L"LEAVEPARTY",1);
    if (cVar7 != '\0') {
      if ((longlong)(int)param_3[1] != 0) {
        puVar14 = (undefined8 *)*param_3;
        lVar13 = (longlong)(int)param_3[1] << 4;
        do {
          uStack_c0 = (longlong *)0x0;
          local_b8 = *(int *)(puVar14 + 1);
          lVar10 = (longlong)local_b8;
          pvVar4 = (void *)*puVar14;
          local_c8 = param_1;
          if (lVar10 == 0) {
            uStack_b4 = 0;
          }
          else {
            FUN_1446dd670(&uStack_c0,local_b8,0);
            memcpy(uStack_c0,pvVar4,lVar10 * 2);
          }
          local_100 = (longlong *)0x0;
          local_f8 = (void *)((ulonglong)local_f8 & 0xffffffff00000000);
          FUN_1446efa72(&local_100,0,3,0x10);
          plVar11 = uStack_c0;
          local_f8 = (void *)CONCAT44(local_f8._4_4_,3);
          *local_100 = (longlong)&PTR_LAB_149e06450;
          LOCK();
          UNLOCK();
          lVar8 = DAT_14c758608 + 1;
          lVar10 = DAT_14c758608 + 1;
          if (lVar8 == 0) {
            LOCK();
            UNLOCK();
            lVar8 = DAT_14c758608 + 2;
            lVar10 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar10;
          local_100[2] = lVar8;
          *local_100 = (longlong)&PTR_FUN_14ba5e370;
          local_100[3] = (longlong)local_c8;
          local_100[4] = 0;
          lVar10 = (longlong)local_b8;
          *(int *)(local_100 + 5) = local_b8;
          if (lVar10 == 0) {
            *(undefined4 *)((longlong)local_100 + 0x2c) = 0;
          }
          else {
            plVar9 = local_100 + 4;
            FUN_1446dd670(plVar9,local_b8,0);
            memcpy((void *)*plVar9,plVar11,lVar10 * 2);
          }
          param_1 = local_108;
          (**(code **)(*local_108 + 0x2c8))(local_108);
          if ((int)local_f8 == 0) {
LAB_1443cbb05:
            if (local_100 != (longlong *)0x0) {
              FUN_1400020a8();
            }
          }
          else if (local_100 != (longlong *)0x0) {
            (**(code **)*local_100)();
            FUN_1446efa72(&local_100,0,0,0x10);
            local_f8 = (void *)((ulonglong)local_f8 & 0xffffffff00000000);
            goto LAB_1443cbb05;
          }
          if (uStack_c0 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          puVar14 = puVar14 + 2;
          lVar13 = lVar13 + -0x10;
        } while (lVar13 != 0);
      }
      goto LAB_1443cc3fd;
    }
    cVar7 = FUN_140988638(&local_50,L"AUTOACCEPTFRIENDINVITES",1);
    if (cVar7 != '\0') {
      ppuVar15 = (undefined **)0x0;
      FUN_14619c2be(&local_c8,&local_50,0);
      plVar9 = (longlong *)&DAT_149dfb77a;
      if ((int)uStack_c0 != 0) {
        plVar9 = local_c8;
      }
      while( true ) {
        uVar18 = *(ushort *)((longlong)plVar9 + (longlong)ppuVar15);
        uVar19 = (ulonglong)uVar18;
        uVar22 = *(ushort *)((longlong)ppuVar15 + 0x149e06346);
        plVar11 = local_c8;
        if (uVar18 != uVar22) {
          if ((uVar22 | uVar18) < 0x80) {
            uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar19];
            uVar21 = (ulonglong)uVar22;
            uVar22 = (ushort)(byte)(&DAT_149e05da0)[uVar21];
            if ((&DAT_149e05da0)[uVar19] == (&DAT_149e05da0)[uVar21]) goto LAB_1443cc480;
          }
          uVar17 = 1;
          if (uVar18 == uVar22) goto LAB_1443cc5ac;
          lVar13 = 0;
          goto LAB_1443cc4bd;
        }
        if (uVar18 == 0) break;
LAB_1443cc480:
        ppuVar15 = (undefined **)((longlong)ppuVar15 + 2);
      }
      uVar17 = 1;
      goto LAB_1443cc5ac;
    }
    cVar7 = FUN_140988638(&local_50,L"AUTOACCEPTPARTYINVITES",1);
    if (cVar7 != '\0') {
      ppuVar15 = (undefined **)0x0;
      FUN_14619c2be(&local_c8,&local_50,0);
      plVar9 = (longlong *)&DAT_149dfb77a;
      if ((int)uStack_c0 != 0) {
        plVar9 = local_c8;
      }
      while( true ) {
        uVar18 = *(ushort *)((longlong)plVar9 + (longlong)ppuVar15);
        uVar19 = (ulonglong)uVar18;
        uVar22 = *(ushort *)((longlong)ppuVar15 + 0x149e06346);
        plVar11 = local_c8;
        if (uVar18 != uVar22) {
          if ((uVar22 | uVar18) < 0x80) {
            uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar19];
            uVar21 = (ulonglong)uVar22;
            uVar22 = (ushort)(byte)(&DAT_149e05da0)[uVar21];
            if ((&DAT_149e05da0)[uVar19] == (&DAT_149e05da0)[uVar21]) goto LAB_1443cc608;
          }
          uVar17 = 1;
          if (uVar18 == uVar22) goto LAB_1443cc734;
          lVar13 = 0;
          goto LAB_1443cc645;
        }
        if (uVar18 == 0) break;
LAB_1443cc608:
        ppuVar15 = (undefined **)((longlong)ppuVar15 + 2);
      }
      uVar17 = 1;
      goto LAB_1443cc734;
    }
    cVar7 = FUN_140988638(&local_50,L"DUMPPARTY",1);
    if (cVar7 == '\0') {
      ppuVar15 = (undefined **)0x0;
      goto LAB_1443cc3fd;
    }
    ppuVar15 = (undefined **)0x0;
    if ((longlong)(int)param_3[1] != 0) {
      lVar13 = *param_3;
      lVar10 = (longlong)(int)param_3[1] << 4;
      do {
        lVar8 = FUN_148fd89a6(param_1,lVar13);
        plVar11 = *(longlong **)(lVar8 + 0x10);
        if (plVar11 != (longlong *)0x0) {
          (**(code **)(*plVar11 + 0x40))(plVar11,&local_c8);
          plVar5 = uStack_c0;
          plVar9 = local_c8;
          if (uStack_c0 != (longlong *)0x0) {
            LOCK();
            plVar1 = uStack_c0 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*uStack_c0)(uStack_c0);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
          }
          if (plVar9 != (longlong *)0x0) {
            (**(code **)(*plVar11 + 0x40))(plVar11,&local_c8);
            (**(code **)(*local_c8 + 0x418))();
            plVar11 = uStack_c0;
            if (uStack_c0 != (longlong *)0x0) {
              LOCK();
              plVar9 = uStack_c0 + 1;
              *(int *)plVar9 = (int)*plVar9 + -1;
              UNLOCK();
              if ((int)*plVar9 == 0) {
                (**(code **)*uStack_c0)(uStack_c0);
                LOCK();
                piVar2 = (int *)((longlong)plVar11 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar11 + 0x10))(plVar11);
                }
              }
            }
          }
        }
        lVar13 = lVar13 + 0x10;
        lVar10 = lVar10 + -0x10;
      } while (lVar10 != 0);
      ppuVar15 = (undefined **)0x0;
    }
  }
  else {
    if ((longlong)(int)param_3[1] == 0) goto LAB_1443cc3fd;
    puVar14 = (undefined8 *)*param_3;
    lVar13 = (longlong)(int)param_3[1] << 4;
    ppuVar15 = &PTR_FUN_14ba5e060;
    do {
      uStack_c0 = (longlong *)0x0;
      local_b8 = *(int *)(puVar14 + 1);
      lVar10 = (longlong)local_b8;
      pvVar4 = (void *)*puVar14;
      local_c8 = param_1;
      if (lVar10 == 0) {
        uStack_b4 = 0;
      }
      else {
        FUN_1446dd670(&uStack_c0,local_b8,0);
        memcpy(uStack_c0,pvVar4,lVar10 * 2);
      }
      local_100 = (longlong *)0x0;
      local_f8 = (void *)((ulonglong)local_f8 & 0xffffffff00000000);
      FUN_1446efa72(&local_100,0,3,0x10);
      plVar11 = uStack_c0;
      local_f8 = (void *)CONCAT44(local_f8._4_4_,3);
      *local_100 = (longlong)&PTR_LAB_149e06450;
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 1;
      lVar10 = DAT_14c758608 + 1;
      if (lVar8 == 0) {
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 2;
        lVar10 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar10;
      local_100[2] = lVar8;
      *local_100 = (longlong)&PTR_FUN_14ba5e060;
      local_100[3] = (longlong)local_c8;
      local_100[4] = 0;
      lVar10 = (longlong)local_b8;
      *(int *)(local_100 + 5) = local_b8;
      if (lVar10 == 0) {
        *(undefined4 *)((longlong)local_100 + 0x2c) = 0;
      }
      else {
        plVar9 = local_100 + 4;
        FUN_1446dd670(plVar9,local_b8,0);
        memcpy((void *)*plVar9,plVar11,lVar10 * 2);
      }
      param_1 = local_108;
      (**(code **)(*local_108 + 0x2b0))(local_108);
      if ((int)local_f8 == 0) {
LAB_1443cb726:
        if (local_100 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_100 != (longlong *)0x0) {
        (**(code **)*local_100)();
        FUN_1446efa72(&local_100,0,0,0x10);
        local_f8 = (void *)((ulonglong)local_f8 & 0xffffffff00000000);
        goto LAB_1443cb726;
      }
      if (uStack_c0 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      puVar14 = puVar14 + 2;
      lVar13 = lVar13 + -0x10;
    } while (lVar13 != 0);
  }
  goto LAB_1443cc3fa;
LAB_1443cc4bd:
  uVar18 = *(ushort *)((longlong)plVar9 + lVar13);
  uVar20 = (uint)uVar18;
  uVar22 = *(ushort *)((longlong)&DAT_149e0209e + lVar13);
  ppuVar15 = (undefined **)(ulonglong)uVar22;
  param_1 = local_108;
  if (uVar18 != uVar22) {
    if ((uVar22 | uVar18) < 0x80) {
      uVar20 = (uint)(byte)(&DAT_149e05da0)[uVar18];
      ppuVar15 = (undefined **)(ulonglong)(byte)(&DAT_149e05da0)[uVar22];
      if ((&DAT_149e05da0)[uVar18] == (&DAT_149e05da0)[uVar22]) goto LAB_1443cc4d6;
    }
    uVar17 = 1;
    if (uVar20 != (uint)ppuVar15) {
      lVar13 = 0;
      goto LAB_1443cc511;
    }
    goto LAB_1443cc5ac;
  }
  uVar17 = 1;
  if (uVar18 == 0) goto LAB_1443cc5ac;
LAB_1443cc4d6:
  lVar13 = lVar13 + 2;
  goto LAB_1443cc4bd;
LAB_1443cc511:
  uVar18 = *(ushort *)((longlong)plVar9 + lVar13);
  uVar19 = (ulonglong)uVar18;
  uVar22 = *(ushort *)((longlong)L"false" + lVar13);
  if (uVar18 != uVar22) {
    ppuVar15 = (undefined **)(ulonglong)(uint)(uVar22 | uVar18);
    if ((uVar22 | uVar18) < 0x80) {
      uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar19];
      uVar21 = (ulonglong)uVar22;
      uVar22 = (ushort)(byte)(&DAT_149e05da0)[uVar21];
      if ((&DAT_149e05da0)[uVar19] == (&DAT_149e05da0)[uVar21]) goto LAB_1443cc526;
    }
    if (uVar18 != uVar22) {
      lVar13 = 0;
      goto LAB_1443cc55b;
    }
    goto LAB_1443cc59f;
  }
  if (uVar18 == 0) goto LAB_1443cc59f;
LAB_1443cc526:
  lVar13 = lVar13 + 2;
  goto LAB_1443cc511;
LAB_1443cc55b:
  uVar18 = *(ushort *)((longlong)plVar9 + lVar13);
  uVar19 = (ulonglong)uVar18;
  uVar22 = *(ushort *)((longlong)&DAT_149e25dfc + lVar13);
  if (uVar18 == uVar22) {
    if (uVar18 == 0) goto LAB_1443cc59f;
LAB_1443cc570:
    lVar13 = lVar13 + 2;
    goto LAB_1443cc55b;
  }
  ppuVar15 = (undefined **)(ulonglong)(uint)(uVar22 | uVar18);
  if ((uVar22 | uVar18) < 0x80) {
    uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar19];
    uVar21 = (ulonglong)uVar22;
    uVar22 = (ushort)(byte)(&DAT_149e05da0)[uVar21];
    if ((&DAT_149e05da0)[uVar19] == (&DAT_149e05da0)[uVar21]) goto LAB_1443cc570;
  }
  if (uVar18 != uVar22) goto LAB_1443cc3f0;
LAB_1443cc59f:
  uVar17 = 0;
LAB_1443cc5ac:
  *(undefined1 *)(param_1 + 6) = uVar17;
  goto LAB_1443cc3f0;
LAB_1443cc645:
  uVar18 = *(ushort *)((longlong)plVar9 + lVar13);
  uVar20 = (uint)uVar18;
  uVar22 = *(ushort *)((longlong)&DAT_149e0209e + lVar13);
  ppuVar15 = (undefined **)(ulonglong)uVar22;
  param_1 = local_108;
  if (uVar18 != uVar22) {
    if ((uVar22 | uVar18) < 0x80) {
      uVar20 = (uint)(byte)(&DAT_149e05da0)[uVar18];
      ppuVar15 = (undefined **)(ulonglong)(byte)(&DAT_149e05da0)[uVar22];
      if ((&DAT_149e05da0)[uVar18] == (&DAT_149e05da0)[uVar22]) goto LAB_1443cc65e;
    }
    uVar17 = 1;
    if (uVar20 != (uint)ppuVar15) {
      lVar13 = 0;
      goto LAB_1443cc699;
    }
    goto LAB_1443cc734;
  }
  uVar17 = 1;
  if (uVar18 == 0) goto LAB_1443cc734;
LAB_1443cc65e:
  lVar13 = lVar13 + 2;
  goto LAB_1443cc645;
LAB_1443cc699:
  uVar18 = *(ushort *)((longlong)plVar9 + lVar13);
  uVar19 = (ulonglong)uVar18;
  uVar22 = *(ushort *)((longlong)L"false" + lVar13);
  if (uVar18 != uVar22) {
    ppuVar15 = (undefined **)(ulonglong)(uint)(uVar22 | uVar18);
    if ((uVar22 | uVar18) < 0x80) {
      uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar19];
      uVar21 = (ulonglong)uVar22;
      uVar22 = (ushort)(byte)(&DAT_149e05da0)[uVar21];
      if ((&DAT_149e05da0)[uVar19] == (&DAT_149e05da0)[uVar21]) goto LAB_1443cc6ae;
    }
    if (uVar18 != uVar22) {
      lVar13 = 0;
      goto LAB_1443cc6e3;
    }
    goto LAB_1443cc727;
  }
  if (uVar18 == 0) goto LAB_1443cc727;
LAB_1443cc6ae:
  lVar13 = lVar13 + 2;
  goto LAB_1443cc699;
LAB_1443cc6e3:
  uVar18 = *(ushort *)((longlong)plVar9 + lVar13);
  uVar19 = (ulonglong)uVar18;
  uVar22 = *(ushort *)((longlong)&DAT_149e25dfc + lVar13);
  if (uVar18 == uVar22) {
    if (uVar18 == 0) goto LAB_1443cc727;
LAB_1443cc6f8:
    lVar13 = lVar13 + 2;
    goto LAB_1443cc6e3;
  }
  ppuVar15 = (undefined **)(ulonglong)(uint)(uVar22 | uVar18);
  if ((uVar22 | uVar18) < 0x80) {
    uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar19];
    uVar21 = (ulonglong)uVar22;
    uVar22 = (ushort)(byte)(&DAT_149e05da0)[uVar21];
    if ((&DAT_149e05da0)[uVar19] == (&DAT_149e05da0)[uVar21]) goto LAB_1443cc6f8;
  }
  if (uVar18 != uVar22) goto LAB_1443cc3f0;
LAB_1443cc727:
  uVar17 = 0;
LAB_1443cc734:
  *(undefined1 *)((longlong)param_1 + 0x31) = uVar17;
LAB_1443cc3f0:
  if (plVar11 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_1443cc3fa:
  ppuVar15 = (undefined **)CONCAT71((int7)((ulonglong)ppuVar15 >> 8),1);
LAB_1443cc3fd:
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)ppuVar15 & 0xffffffff;
}



// FUNCTION 1443cc73e FUN_1443cc73e body=75 status=ok
// SIG undefined FUN_1443cc73e(void)

void FUN_1443cc73e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
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
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1443cc789 FUN_1443cc789 body=69 status=ok
// SIG undefined FUN_1443cc789(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1443cc789(void)

{
  _DAT_14cbf56c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001443cc7cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf56d0,1);
  return;
}



// FUNCTION 1443cc7f0 FUN_1443cc7f0 body=557 status=ok
// SIG undefined FUN_1443cc7f0(void)

void FUN_1443cc7f0(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  code *local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cbf5728 == 0) {
    (**(code **)(*param_1 + 0x2c0))(param_1);
  }
  plVar3 = (longlong *)FUN_140a68038(1);
  if (plVar3 == (longlong *)0x0) {
    local_28 = (code *)0x0;
  }
  else {
    (**(code **)(*plVar3 + 0x10))(plVar3,&local_28);
  }
  local_38 = local_28;
  lVar4 = FUN_148fdede0();
  if ((lVar4 != 0) && (1 < *(int *)(lVar4 + 0x30))) {
    FUN_148fd302e(&local_38,param_1);
    plVar3 = (longlong *)CONCAT44(uStack_2c,local_30);
    if (plVar3 == (longlong *)0x0) {
      param_1[0x19] = (longlong)local_38;
      plVar5 = (longlong *)param_1[0x1a];
      if (plVar5 != (longlong *)0x0) {
        param_1[0x1a] = 0;
LAB_1443cc8e4:
        LOCK();
        plVar3 = plVar5 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
joined_r0x0001443cc8d4:
          if (iVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      param_1[0x19] = (longlong)local_38;
      plVar5 = (longlong *)param_1[0x1a];
      if (plVar3 == plVar5) {
        LOCK();
        plVar5 = plVar3 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
          plVar5 = plVar3;
          goto joined_r0x0001443cc8d4;
        }
      }
      else {
        param_1[0x1a] = (longlong)plVar3;
        if (plVar5 != (longlong *)0x0) goto LAB_1443cc8e4;
      }
    }
    plVar3 = (longlong *)CONCAT44(uStack_2c,local_30);
    if (plVar3 != (longlong *)0x0) {
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
  }
  lVar4 = (**(code **)(*param_1 + 0x180))(param_1);
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)(lVar4 + 0x1f0);
  }
  local_38 = (code *)&LAB_1443cca1e;
  local_30 = 0;
  FUN_148fdc884(lVar4 + 0x60,local_40,param_1);
  if (*(longlong *)(lVar4 + 0x30) == 0) {
LAB_1443cc98f:
    local_38 = FUN_1443cca32;
    local_30 = 0;
    FUN_148fdc984(local_40,param_1);
  }
  else {
    lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x30) + 0x2a0);
    if ((DAT_14c950c29 == '\x01') && (lVar4 != 0)) {
      FUN_1456cec3c();
    }
    else if (lVar4 == 0) goto LAB_1443cc98f;
    FUN_1443cca32(param_1);
  }
  local_38 = FUN_1443ccb6e;
  local_30 = 0;
  FUN_148fdca7e(local_40,param_1);
  lVar4 = (**(code **)(*param_1 + 0x180))(param_1);
  if (lVar4 != 0) {
    FUN_1443ccb6e(param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443cca32 FUN_1443cca32 body=315 status=ok
// SIG undefined FUN_1443cca32(void)

void FUN_1443cca32(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  code *local_48;
  undefined4 local_40;
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((DAT_14c872bd8 == '\0') && ((char)param_1[9] == '\0')) {
    FUN_140457ffc(&DAT_14cadbe48,param_1);
    lVar1 = (**(code **)(*param_1 + 0x180))(param_1);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = *(longlong *)(lVar1 + 0x1f0);
    }
    if (*(longlong *)(lVar1 + 0x30) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = *(longlong *)(*(longlong *)(lVar1 + 0x30) + 0x2a0);
      if ((DAT_14c950c29 == '\x01') && (lVar3 != 0)) {
        FUN_1456cec3c(lVar3);
      }
    }
    local_48 = FUN_1443cfc94;
    local_40 = 0;
    FUN_148fdeb08(lVar3 + 0x2a0,local_38,param_1,&local_48);
    local_48 = FUN_1443cfcfa;
    local_40 = 0;
    FUN_148fdeb08(lVar3 + 0x2b8,local_38,param_1,&local_48);
    if (0 < *(int *)(lVar1 + 0x40)) {
      uVar2 = 0;
      do {
        FUN_1443cef02(param_1,*(undefined8 *)(*(longlong *)(lVar1 + 0x38) + uVar2 * 8),
                      uVar2 & 0xffffffff);
        uVar2 = uVar2 + 1;
      } while ((longlong)uVar2 < (longlong)*(int *)(lVar1 + 0x40));
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443ccb6e FUN_1443ccb6e body=625 status=ok
// SIG undefined FUN_1443ccb6e(void)

void FUN_1443ccb6e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  int local_58;
  undefined8 local_50;
  longlong *local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((DAT_14c872bd8 != '\0') || (*(char *)(param_1 + 0x48) != '\0')) ||
     (FUN_148fde0c8(param_1), *(longlong *)(param_1 + 0x178) != 0)) goto LAB_1443ccb9b;
  local_60 = (undefined8 *)0x0;
  plVar5 = (longlong *)FUN_1401e3228();
  if (plVar5 == (longlong *)0x0) {
    local_48 = (longlong *)0x0;
    plStack_40 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar5 + 0x40))(plVar5,&local_48);
    plVar5 = local_48;
    if (local_48 != (longlong *)0x0) {
      local_60 = (undefined8 *)0x0;
      local_58 = 0;
      FUN_1446efa72(&local_60,0,3,0x10);
      puVar4 = local_60;
      local_58 = 3;
      *local_60 = &PTR_LAB_14ba5f650;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar9 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar9 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar9;
      local_60[2] = lVar6;
      *local_60 = &PTR_FUN_14ba5f5e0;
      local_60[3] = 0;
      iVar7 = 0;
      if (param_1 != 0) {
        uVar3 = *(uint *)(param_1 + 0xc);
        *(uint *)(local_60 + 3) = uVar3;
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar9 = 0;
        }
        iVar7 = *(int *)(lVar9 + 0x10);
        if (*(int *)(lVar9 + 0x10) == 0) {
          LOCK();
          iVar7 = DAT_14c964868 + 1;
          UNLOCK();
          iVar8 = DAT_14c964868 + 1;
          bVar10 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar7;
          if (bVar10) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar8);
          }
          LOCK();
          iVar7 = *(int *)(lVar9 + 0x10);
          bVar10 = iVar7 == 0;
          if (bVar10) {
            *(int *)(lVar9 + 0x10) = iVar8;
            iVar7 = 0;
          }
          UNLOCK();
          if (bVar10) {
            iVar7 = iVar8;
          }
        }
      }
      *(int *)((longlong)puVar4 + 0x1c) = iVar7;
      puVar4[4] = &LAB_1443cfdf4;
      *(undefined4 *)(puVar4 + 5) = 0;
      (**(code **)(*plVar5 + 0x378))(plVar5,&local_50,&local_60);
      *(undefined8 *)(param_1 + 0x178) = local_50;
      if (local_58 != 0) {
        if (local_60 == (undefined8 *)0x0) goto LAB_1443ccd46;
        (**(code **)*local_60)(local_60,0);
        FUN_1446efa72(&local_60,0,0,0x10);
        local_58 = 0;
      }
      if (local_60 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_1443ccd46:
  plVar5 = plStack_40;
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
LAB_1443ccb9b:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443ccde0 FUN_1443ccde0 body=696 status=ok
// SIG undefined FUN_1443ccde0(void)

void FUN_1443ccde0(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  bool bVar16;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  uint *local_70;
  ulonglong local_68;
  longlong *local_60;
  longlong *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = *(uint *)(param_1 + 5);
  if (uVar2 == 0) {
    uVar11 = 1;
    uVar14 = 0;
    iVar12 = 0;
    uVar9 = 0;
  }
  else {
    puVar3 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar3 = (uint *)(param_1 + 2);
    }
    uVar9 = *puVar3;
    if (uVar9 == 0) {
      iVar12 = uVar2 + 0x1e;
      if (-1 < (int)(uVar2 - 1)) {
        iVar12 = uVar2 - 1;
      }
      uVar14 = 0;
      uVar6 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar6 = uVar14;
      }
      iVar12 = 0;
      do {
        if (uVar6 == uVar14) goto LAB_1443cce8d;
        iVar12 = iVar12 + 0x20;
        uVar9 = puVar3[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar9 == 0);
    }
    else {
      uVar14 = 0;
      iVar12 = 0;
    }
    uVar11 = (ulonglong)(-uVar9 & uVar9);
    uVar6 = uVar11 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (iVar12 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    if ((int)uVar2 <= (int)uVar9) {
      uVar9 = uVar2;
    }
  }
  if (uVar9 != uVar2) {
    uVar15 = 0xffffffff;
    local_78 = (ulonglong)uVar2;
    local_70 = (uint *)(param_1 + 2);
    local_60 = param_1;
    do {
      lVar8 = *param_1;
      local_68 = uVar14;
      FUN_148fce6f6(*(undefined8 *)(lVar8 + 8 + (longlong)(int)uVar9 * 0x18),&local_58);
      if ((longlong)local_50 != 0) {
        plVar1 = local_58 + local_50;
        plVar10 = local_58;
        do {
          lVar7 = *plVar10;
          FUN_144757f48(lVar7,0x40000000);
          uVar2 = *(uint *)(lVar7 + 0xc);
          if ((int)uVar2 < DAT_14c9647dc) {
            lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
          }
          else {
            lVar7 = 0;
          }
          do {
            uVar2 = *(uint *)(lVar7 + 8);
            if ((uVar2 >> 0x15 & 1) != 0) break;
            LOCK();
            bVar16 = uVar2 == *(uint *)(lVar7 + 8);
            if (bVar16) {
              *(uint *)(lVar7 + 8) = uVar2 | 0x200000;
            }
            UNLOCK();
          } while (!bVar16);
          plVar10 = plVar10 + 1;
          param_1 = local_60;
        } while (plVar10 != plVar1);
      }
      if (local_58 != (longlong *)0x0) {
        FUN_1400020a8(local_58);
      }
      lVar8 = *(longlong *)(lVar8 + (longlong)(int)uVar9 * 0x18 + 8);
      FUN_144757f48(lVar8,0x40000000);
      uVar2 = *(uint *)(lVar8 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      do {
        uVar2 = *(uint *)(lVar8 + 8);
        if ((uVar2 >> 0x15 & 1) != 0) break;
        LOCK();
        bVar16 = uVar2 == *(uint *)(lVar8 + 8);
        if (bVar16) {
          *(uint *)(lVar8 + 8) = uVar2 | 0x200000;
        }
        UNLOCK();
      } while (!bVar16);
      uVar15 = uVar15 & ~(uint)uVar11;
      puVar3 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar3 = local_70;
      }
      uVar2 = *(uint *)(param_1 + 5);
      iVar13 = (int)local_68;
      lVar8 = (longlong)iVar13;
      uVar9 = puVar3[lVar8] & uVar15;
      uVar14 = local_68;
      if (uVar9 == 0) {
        iVar4 = uVar2 + 0x1e;
        if (-1 < (int)(uVar2 - 1)) {
          iVar4 = uVar2 - 1;
        }
        iVar4 = iVar4 >> 5;
        iVar12 = iVar12 + 0x20;
        iVar5 = iVar4;
        if (iVar4 < iVar13) {
          iVar5 = iVar13;
        }
        if (iVar13 < iVar4) {
          lVar7 = 0;
          do {
            uVar9 = puVar3[lVar8 + lVar7 + 1];
            if (uVar9 != 0) {
              uVar14 = (ulonglong)(iVar13 + (int)lVar7 + 1);
              uVar15 = 0xffffffff;
              goto LAB_1443cd04c;
            }
            iVar12 = iVar12 + 0x20;
            lVar7 = lVar7 + 1;
          } while (iVar5 - lVar8 != lVar7);
          uVar15 = 0xffffffff;
          iVar13 = iVar5;
        }
        uVar14 = (ulonglong)(iVar13 + 1);
        uVar9 = uVar2;
      }
      else {
LAB_1443cd04c:
        uVar11 = (ulonglong)(-uVar9 & uVar9);
        uVar6 = uVar11 * 2 + 1;
        lVar8 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        uVar9 = (iVar12 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
        if ((int)uVar2 <= (int)uVar9) {
          uVar9 = uVar2;
        }
      }
    } while (uVar9 != (uint)local_78);
  }
LAB_1443cce8d:
  FUN_148fe860e(param_1);
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443cd09a FUN_1443cd09a body=249 status=ok
// SIG undefined FUN_1443cd09a(void)

void FUN_1443cd09a(longlong *param_1,longlong param_2,char *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x2e0))();
  plVar2 = *(longlong **)(param_2 + 0x68);
  if (plVar2 != (longlong *)0x0 && *(int *)(param_2 + 0x70) != 0) {
    (**(code **)(*plVar2 + 0x60))(plVar2,param_3);
  }
  iVar1 = *(int *)(param_2 + 8);
  FUN_148ffbe88(param_1 + 10,param_2 + 8);
  if ((iVar1 == 0x11111111) && (*param_3 != '\x01')) {
    lVar3 = FUN_148fde686(param_1,0);
    if (lVar3 == 0) {
      local_38 = (undefined8 *)0x0;
      uStack_30 = 0;
      FUN_1443cd3a4(param_1,&local_38);
      if ((int)uStack_30 != 0) {
        if (local_38 == (undefined8 *)0x0) goto LAB_1443cd101;
        (**(code **)*local_38)(local_38,0);
        FUN_1446efa72(&local_38,0,0,0x10);
        uStack_30 = uStack_30 & 0xffffffff00000000;
      }
      if (local_38 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_1443cd101:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443cd194 FUN_1443cd194 body=526 status=ok
// SIG undefined FUN_1443cd194(void)

void FUN_1443cd194(longlong param_1,longlong param_2,undefined8 *param_3,ulonglong param_4,
                  undefined8 param_5,longlong *param_6)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_98 [32];
  undefined **local_78;
  undefined8 local_70;
  longlong *local_68;
  byte local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  plVar3 = param_6;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((DAT_14c872bd8 == '\0') && (*(char *)(param_1 + 0x48) == '\0')) {
    uVar9 = param_4 & 0xffffffff;
    if ((char)param_4 == '\x01') {
      plVar6 = (longlong *)FUN_1443cebc4(param_1,param_2,*param_3,&param_5);
      uVar9 = CONCAT71((int7)(uVar9 >> 8),0x9c);
      if (plVar6 != (longlong *)0x0) {
        lVar7 = plVar6[8];
        (**(code **)(*plVar6 + 0x2f8))(plVar6,&local_78);
        FUN_1443c385e(lVar7,&local_78);
        plVar10 = *(longlong **)(param_2 + 0x10);
        if (plVar10 == (longlong *)0x0) {
LAB_1443cd296:
          plVar10 = (longlong *)0x0;
        }
        else {
          iVar5 = (int)plVar10[1];
          do {
            if (iVar5 == 0) goto LAB_1443cd296;
            LOCK();
            iVar4 = (int)plVar10[1];
            bVar11 = iVar5 == iVar4;
            if (bVar11) {
              *(int *)(plVar10 + 1) = iVar5 + 1;
              iVar4 = iVar5;
            }
            iVar5 = iVar4;
            UNLOCK();
          } while (!bVar11);
        }
        local_70 = 0;
        if (plVar10 != (longlong *)0x0) {
          local_70 = *(undefined8 *)(param_2 + 8);
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
        }
        local_60 = 0;
        local_78 = &PTR_FUN_14a5af930;
        local_58 = 0;
        uStack_50 = 0;
        local_68 = plVar10;
        lVar7 = FUN_148fd8170(plVar6,&local_78);
        local_78 = &PTR_FUN_14a5af930;
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        local_78 = &PTR_FUN_14a184370;
        (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_60])(&local_70);
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar6 = plVar10 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
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
        uVar9 = CONCAT71((int7)((ulonglong)plVar10 >> 8),1);
        if (lVar7 != 0) {
          uVar2 = *(undefined8 *)(lVar7 + 0x40);
          FUN_1400021e4(&DAT_14cbf5330,&local_78);
          FUN_1443bf0f4(uVar2,&local_78);
          if (local_78 != (undefined **)0x0) {
            FUN_1400020a8();
          }
        }
      }
    }
    if ((int)plVar3[1] != 0) {
      plVar6 = (longlong *)*plVar3;
      if (plVar6 == (longlong *)0x0) goto LAB_1443cd23f;
      (**(code **)(*plVar6 + 0x60))(plVar6,uVar9 & 0xffffffff);
    }
  }
  puVar8 = (undefined8 *)*plVar3;
  if ((int)plVar3[1] != 0) {
    if (puVar8 == (undefined8 *)0x0) goto LAB_1443cd23f;
    (**(code **)*puVar8)(puVar8,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(plVar3 + 1) = 0;
    puVar8 = (undefined8 *)*plVar3;
  }
  if (puVar8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1443cd23f:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443cd3a4 FUN_1443cd3a4 body=956 status=ok
// SIG undefined FUN_1443cd3a4(void)

void FUN_1443cd3a4(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_118 [32];
  longlong **local_f8;
  undefined4 local_ec;
  longlong *local_e8;
  int local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8;
  undefined2 local_c7;
  undefined1 local_c5;
  undefined2 local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  code *local_88;
  undefined4 local_80;
  undefined8 *local_78;
  int local_70;
  longlong *local_68;
  longlong *plStack_60;
  undefined **local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  byte local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *(undefined1 *)(param_1 + 0x14) = 1;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c5 = 1;
  local_c8 = 0;
  local_c4 = 1;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_c7 = 0;
  plVar4 = (longlong *)FUN_145b138ac();
  lVar5 = plVar4[0x22];
  if (lVar5 == 0) {
    (**(code **)(*plVar4 + 1000))(plVar4);
    lVar5 = plVar4[0x22];
  }
  local_c0 = CONCAT44(*(undefined4 *)(lVar5 + 0x38),(undefined4)local_c0);
  local_58 = (undefined **)FUN_1443cd762;
  local_50 = (longlong *)((ulonglong)local_50._4_4_ << 0x20);
  FUN_148fdd332(&local_e8,param_1,&local_58,param_2);
  local_ec = 0x11111111;
  lVar5 = FUN_148fdcd7a(param_1,&local_ec,1);
  if (lVar5 == 0) {
    if ((int)param_1[0x16] < 1) {
      local_50 = (longlong *)0x0;
      uStack_48 = 0;
      local_40 = 0;
      local_58 = &PTR_FUN_14a5af930;
      local_38 = 0;
      uStack_30 = 0;
    }
    else {
      FUN_148fcdaa6(*(undefined8 *)(*(longlong *)param_1[0x15] + 0x70),&local_58,0);
    }
    (**(code **)(*param_1 + 0x180))(param_1);
    local_78 = (undefined8 *)0x0;
    plVar4 = (longlong *)FUN_1401e3228(&local_78);
    if (plVar4 == (longlong *)0x0) {
      local_68 = (longlong *)0x0;
      plStack_60 = (longlong *)0x0;
LAB_1443cd551:
      if (local_e8 != (longlong *)0x0 && local_e0 != 0) {
        (**(code **)(*local_e8 + 0x60))(local_e8,0x9c);
      }
    }
    else {
      (**(code **)(*plVar4 + 0x40))(plVar4,&local_68);
      if (local_68 == (longlong *)0x0) goto LAB_1443cd551;
      if ((&DAT_149fc1b6e)[local_40] == '\x01') {
        if ((local_50 != (longlong *)0x0) &&
           (cVar3 = (**(code **)(*local_50 + 0x28))(), cVar3 != '\0')) goto LAB_1443cd69f;
        goto LAB_1443cd551;
      }
      if (((ulonglong)local_50 & 0xffffff) == 0) goto LAB_1443cd551;
LAB_1443cd69f:
      plVar4 = local_68;
      local_88 = FUN_1443cd194;
      local_80 = 0;
      local_f8 = &local_e8;
      FUN_148fdd24c(&local_78,param_1,&local_88,&local_ec);
      uVar6 = FUN_14127b0d4(&local_58);
      local_f8 = &local_78;
      (**(code **)(*plVar4 + 0x20))(plVar4,uVar6,0x11111111,&local_d8);
      if (local_70 == 0) {
LAB_1443cd73c:
        if (local_78 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_78 != (undefined8 *)0x0) {
        (**(code **)*local_78)(local_78,0);
        FUN_1446efa72(&local_78,0,0,0x10);
        local_70 = 0;
        goto LAB_1443cd73c;
      }
    }
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
    local_58 = &PTR_FUN_14a5af930;
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    local_58 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_40])();
  }
  else if (local_e8 != (longlong *)0x0 && local_e0 != 0) {
    (**(code **)(*local_e8 + 0x60))(local_e8,0x9d);
  }
  if (local_e0 != 0) {
    if (local_e8 == (longlong *)0x0) goto LAB_1443cd61f;
    (**(code **)*local_e8)(local_e8,0);
    FUN_1446efa72(&local_e8,0,0,0x10);
    local_e0 = 0;
  }
  if (local_e8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_1443cd61f:
  FUN_146015444(&local_d8);
  if ((local_28 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443cd762 FUN_1443cd762 body=806 status=ok
// SIG undefined FUN_1443cd762(void)

void FUN_1443cd762(longlong param_1,undefined4 param_2,longlong *param_3)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((DAT_14c872bd8 == '\0') && (*(char *)(param_1 + 0x48) == '\0')) {
    *(undefined1 *)(param_1 + 0xa0) = 0;
    if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x60))(plVar2,param_2);
    }
    if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
      lVar7 = param_1 + 0x88;
      if (*(longlong *)(param_1 + 0x90) != 0) {
        lVar7 = *(longlong *)(param_1 + 0x90);
      }
      iVar3 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x98) - 1U & 0x11111111) * 4);
      if (iVar3 != -1) {
        do {
          lVar7 = *(longlong *)(param_1 + 0x50) + (longlong)iVar3 * 0xe8;
          if (*(int *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar3 * 0xe8) == 0x11111111) {
            if (lVar7 + 8 == 0 || lVar7 == 0) break;
            FUN_1443c3046(lVar7 + 0x80,DAT_14cbf5708);
            if ((char)param_2 == '\x01') {
              local_48 = (undefined8 *)CONCAT44(local_48._4_4_,0x11111111);
              plVar2 = (longlong *)FUN_148fdcd7a(param_1,&local_48,1);
              if (plVar2 != (longlong *)0x0) {
                FUN_1443c1bde(lVar7 + 0x80,DAT_14cbf56f0);
                if (*(char *)((longlong)plVar2 + 0x227) != '\0') break;
                local_48 = (undefined8 *)0x0;
                local_40 = 0;
                FUN_1446efa72(&local_48,0,3,0x10);
                puVar4 = local_48;
                local_40 = 3;
                *local_48 = &PTR_LAB_14ba5e990;
                local_48[1] = plVar2;
                LOCK();
                UNLOCK();
                lVar5 = DAT_14c758608 + 1;
                lVar7 = DAT_14c758608 + 1;
                if (lVar5 == 0) {
                  LOCK();
                  UNLOCK();
                  lVar5 = DAT_14c758608 + 2;
                  lVar7 = DAT_14c758608 + 2;
                }
                DAT_14c758608 = lVar7;
                local_48[2] = lVar5;
                *local_48 = &PTR_FUN_14ba5e920;
                local_48[3] = 0;
                iVar3 = 0;
                if (param_1 != 0) {
                  uVar1 = *(uint *)(param_1 + 0xc);
                  *(uint *)(local_48 + 3) = uVar1;
                  if ((int)uVar1 < DAT_14c9647dc) {
                    lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
                  }
                  else {
                    lVar7 = 0;
                  }
                  iVar3 = *(int *)(lVar7 + 0x10);
                  if (*(int *)(lVar7 + 0x10) == 0) {
                    LOCK();
                    iVar3 = DAT_14c964868 + 1;
                    UNLOCK();
                    iVar6 = DAT_14c964868 + 1;
                    bVar8 = DAT_14c964868 < 1000;
                    DAT_14c964868 = iVar3;
                    if (bVar8) {
                      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                    L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                    ,iVar6);
                    }
                    LOCK();
                    iVar3 = *(int *)(lVar7 + 0x10);
                    bVar8 = iVar3 == 0;
                    if (bVar8) {
                      *(int *)(lVar7 + 0x10) = iVar6;
                      iVar3 = 0;
                    }
                    UNLOCK();
                    if (bVar8) {
                      iVar3 = iVar6;
                    }
                  }
                }
                *(int *)((longlong)puVar4 + 0x1c) = iVar3;
                puVar4[4] = &DAT_1443cda8a;
                *(undefined4 *)(puVar4 + 5) = 0;
                (**(code **)(*plVar2 + 0x2a0))(plVar2,&local_48);
                if (local_40 != 0) {
                  if (local_48 == (undefined8 *)0x0) break;
                  (**(code **)*local_48)(local_48,0);
                  FUN_1446efa72(&local_48,0,0,0x10);
                  local_40 = 0;
                }
                if (local_48 != (undefined8 *)0x0) {
                  FUN_1400020a8();
                }
                break;
              }
            }
            FUN_1443cda8c(param_1,lVar7 + 8);
            break;
          }
          iVar3 = *(int *)(lVar7 + 0xe0);
        } while (iVar3 != -1);
      }
    }
  }
  puVar4 = (undefined8 *)*param_3;
  if ((int)param_3[1] != 0) {
    if (puVar4 == (undefined8 *)0x0) goto LAB_1443cd88e;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(param_3,0,0,0x10);
    *(undefined4 *)(param_3 + 1) = 0;
    puVar4 = (undefined8 *)*param_3;
  }
  if (puVar4 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1443cd88e:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443cda8c FUN_1443cda8c body=1225 status=ok
// SIG undefined FUN_1443cda8c(void)

void FUN_1443cda8c(longlong *param_1,longlong param_2)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  char cVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined8 **local_a0;
  undefined4 local_94;
  undefined8 *local_90;
  int local_88;
  longlong *local_80;
  longlong *local_78;
  undefined **local_70;
  longlong *local_68;
  undefined8 uStack_60;
  byte local_58;
  longlong local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  (**(code **)(*param_1 + 0x180))();
  local_70 = (undefined **)0x0;
  plVar6 = (longlong *)FUN_1401e3228();
  (**(code **)(*plVar6 + 0x40))(plVar6,&local_80);
  if ((int)param_1[0x16] < 1) {
    local_68 = (longlong *)0x0;
    uStack_60 = 0;
    local_58 = 0;
    local_70 = &PTR_FUN_14a5af930;
    local_50 = 0;
    uStack_48 = 0;
    uVar7 = 0;
  }
  else {
    FUN_148fcdaa6(*(undefined8 *)(*(longlong *)param_1[0x15] + 0x70),&local_70,0);
    uVar7 = (ulonglong)local_58;
  }
  if ((&DAT_149fc1b6e)[uVar7] == '\x01') {
    if ((local_68 == (longlong *)0x0) || (cVar5 = (**(code **)(*local_68 + 0x28))(), cVar5 == '\0'))
    goto LAB_1443cddcb;
  }
  else if (((ulonglong)local_68 & 0xffffff) == 0) goto LAB_1443cddcb;
  FUN_1443c1bde(param_2 + 0x78,DAT_14cbf56f8);
  if (*(longlong *)(param_2 + 0x48) == 0) {
    (**(code **)(**(longlong **)(param_2 + 0x58) + 0x18))(*(longlong **)(param_2 + 0x58),&local_94);
    local_90 = (undefined8 *)0x0;
    local_88 = 0;
    FUN_1446efa72(&local_90,0,3,0x10);
    puVar4 = local_90;
    local_88 = 3;
    *local_90 = &PTR_LAB_14ba5f260;
    *(undefined4 *)(local_90 + 1) = local_94;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar12 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar12 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar12;
    local_90[2] = lVar9;
    *local_90 = &PTR_FUN_14ba5f1f0;
    local_90[3] = 0;
    iVar11 = 0;
    if (param_1 != (longlong *)0x0) {
      uVar2 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(local_90 + 3) = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar12 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar12 = 0;
      }
      iVar11 = *(int *)(lVar12 + 0x10);
      if (*(int *)(lVar12 + 0x10) == 0) {
        LOCK();
        iVar11 = DAT_14c964868 + 1;
        UNLOCK();
        iVar10 = DAT_14c964868 + 1;
        bVar13 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar11;
        if (bVar13) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar10);
        }
        LOCK();
        iVar11 = *(int *)(lVar12 + 0x10);
        bVar13 = iVar11 == 0;
        if (bVar13) {
          *(int *)(lVar12 + 0x10) = iVar10;
          iVar11 = 0;
        }
        UNLOCK();
        if (bVar13) {
          iVar11 = iVar10;
        }
      }
    }
    *(int *)((longlong)puVar4 + 0x1c) = iVar11;
    puVar4[4] = FUN_1443cf0ac;
    *(undefined4 *)(puVar4 + 5) = 0;
    uVar3 = *(undefined8 *)(param_2 + 0x58);
    uVar8 = FUN_14127b0d4(&local_70);
    (**(code **)(*local_80 + 0x30))(local_80,uVar8,uVar3,&local_90);
  }
  else {
    local_90 = (undefined8 *)0x0;
    local_88 = 0;
    FUN_1446efa72(&local_90,0,3,0x10);
    puVar4 = local_90;
    local_88 = 3;
    *local_90 = &PTR_LAB_14ba5f260;
    *(undefined4 *)(local_90 + 1) = 0x11111111;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar12 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar12 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar12;
    local_90[2] = lVar9;
    *local_90 = &PTR_FUN_14ba5f1f0;
    local_90[3] = 0;
    iVar11 = 0;
    if (param_1 != (longlong *)0x0) {
      uVar2 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(local_90 + 3) = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar12 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar12 = 0;
      }
      iVar11 = *(int *)(lVar12 + 0x10);
      if (*(int *)(lVar12 + 0x10) == 0) {
        LOCK();
        iVar11 = DAT_14c964868 + 1;
        UNLOCK();
        iVar10 = DAT_14c964868 + 1;
        bVar13 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar11;
        if (bVar13) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar10);
        }
        LOCK();
        iVar11 = *(int *)(lVar12 + 0x10);
        bVar13 = iVar11 == 0;
        if (bVar13) {
          *(int *)(lVar12 + 0x10) = iVar10;
          iVar11 = 0;
        }
        UNLOCK();
        if (bVar13) {
          iVar11 = iVar10;
        }
      }
    }
    *(int *)((longlong)puVar4 + 0x1c) = iVar11;
    puVar4[4] = FUN_1443cf0ac;
    *(undefined4 *)(puVar4 + 5) = 0;
    lVar12 = *(longlong *)(param_2 + 0x48);
    local_94 = 0x11111111;
    uVar3 = *(undefined8 *)(lVar12 + 0x10);
    uVar8 = FUN_14127b0d4(&local_70);
    local_a8 = lVar12 + 0x20;
    local_a0 = &local_90;
    (**(code **)(*local_80 + 0x50))(local_80,uVar8,uVar3,&local_94);
  }
  if (local_88 != 0) {
    if (local_90 == (undefined8 *)0x0) goto LAB_1443cddcb;
    (**(code **)*local_90)(local_90,0);
    FUN_1446efa72(&local_90,0,0,0x10);
    local_88 = 0;
  }
  if (local_90 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1443cddcb:
  local_70 = &PTR_FUN_14a5af930;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  local_70 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_58])(&local_68);
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_78 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar1 = (int *)((longlong)local_78 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_78 + 0x10))(local_78);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443cdf56 FUN_1443cdf56 body=407 status=ok
// SIG undefined FUN_1443cdf56(void)

undefined8 * FUN_1443cdf56(longlong *param_1,undefined8 *param_2,uint *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *plStack_40;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x180))();
  local_30 = 0;
  plVar4 = (longlong *)FUN_1401e3228();
  if (plVar4 == (longlong *)0x0) {
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar4 + 0x40))(plVar4,&local_48);
    if (local_48 != 0) {
      if ((int)param_1[0xb] != *(int *)((longlong)param_1 + 0x84)) {
        plVar4 = param_1 + 0x11;
        if ((longlong *)param_1[0x12] != (longlong *)0x0) {
          plVar4 = (longlong *)param_1[0x12];
        }
        iVar6 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[0x13] - 1U & *param_3) * 4);
        if (iVar6 != -1) {
          do {
            if (*(uint *)(param_1[10] + (longlong)iVar6 * 0xe8) == *param_3) {
              *(undefined2 *)param_2 = 0xa9;
              *(undefined4 *)((longlong)param_2 + 4) = 0;
              goto LAB_1443ce050;
            }
            iVar6 = *(int *)((longlong)iVar6 * 0xe8 + param_1[10] + 0xe0);
          } while (iVar6 != -1);
        }
      }
      (**(code **)(*param_1 + 0x2d8))(param_1,&local_30,param_3);
      lVar3 = local_30;
      if (local_30 != 0) {
        lVar5 = FUN_145a91644();
        if ((((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
            (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
             lVar5 + 0x30)) && (local_30 != 0)) {
          *param_2 = 1;
          goto LAB_1443ce050;
        }
      }
      *(undefined4 *)((longlong)param_2 + 4) = 0;
      *(undefined2 *)param_2 = 0x16a2;
      goto LAB_1443ce050;
    }
  }
  *(undefined4 *)((longlong)param_2 + 4) = 0;
  *(undefined2 *)param_2 = 0x3a2;
LAB_1443ce050:
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
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443ce0ee FUN_1443ce0ee body=893 status=ok
// SIG undefined FUN_1443ce0ee(void)

undefined8 * FUN_1443ce0ee(longlong *param_1,undefined8 *param_2,longlong *param_3,int *param_4)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_d8 [32];
  int local_b8 [22];
  longlong *local_60;
  longlong *local_58;
  char local_50;
  undefined7 uStack_4f;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  (**(code **)(*param_1 + 0x2c8))(param_1,&local_50,param_4);
  if (local_50 != '\x01') {
    *param_2 = CONCAT71(uStack_4f,local_50);
    goto LAB_1443ce166;
  }
  cVar3 = (**(code **)(*(longlong *)param_3[4] + 0x2a8))();
  if (cVar3 == '\0') {
    *(undefined4 *)((longlong)param_2 + 4) = 0;
    *(undefined2 *)param_2 = 0xca2;
    goto LAB_1443ce166;
  }
  cVar3 = FUN_148fcfeec(param_3);
  if (cVar3 == '\x02') {
    *(undefined4 *)((longlong)param_2 + 4) = 0;
    *(undefined2 *)param_2 = 0x10a2;
    goto LAB_1443ce166;
  }
  lVar6 = FUN_148fd162a(param_3,param_4);
  if (lVar6 != 0) {
    *(undefined2 *)param_2 = 0xaa;
LAB_1443ce1c6:
    *(undefined4 *)((longlong)param_2 + 4) = 0;
    goto LAB_1443ce166;
  }
  cVar3 = FUN_148fddcfe(param_3);
  if (cVar3 != '\0') {
    *(undefined4 *)((longlong)param_2 + 4) = 0;
    *(undefined2 *)param_2 = 0x17a2;
    goto LAB_1443ce166;
  }
  (**(code **)(*param_3 + 0x360))(param_3,&local_60,param_4);
  if (local_60 == (longlong *)0x0) {
    cVar3 = FUN_148fcefaa(param_3,1);
    if (cVar3 == '\0') {
      cVar3 = FUN_148fdde98(param_3);
      *(undefined4 *)((longlong)param_2 + 4) = 0;
      if (cVar3 == '\0') {
LAB_1443ce3d0:
        *(undefined2 *)param_2 = 0x12a2;
      }
      else {
        *(undefined2 *)param_2 = 0x7a2;
      }
    }
    else {
      bVar4 = (**(code **)(*param_1 + 0x300))(param_1);
      (**(code **)(*param_3 + 0x2b8))(param_3,local_b8);
      cVar3 = FUN_148fdde36(local_b8);
      if (cVar3 == '\0') {
        FUN_1458ea6a8(local_b8);
      }
      else {
        FUN_1458ea6a8(local_b8);
        if ((bVar4 & 0xfe) == 2) {
          *(undefined4 *)((longlong)param_2 + 4) = 0;
          *(undefined2 *)param_2 = 0x8a2;
          goto LAB_1443ce351;
        }
      }
      plVar7 = (longlong *)FUN_148fd3674(param_3,1);
      if (plVar7 == (longlong *)0x0) {
        *(undefined4 *)((longlong)param_2 + 4) = 0;
        *(undefined2 *)param_2 = 0xea2;
      }
      else {
        uVar5 = *(uint *)(plVar7 + 2);
        if ((uVar5 & 4) == 0) {
          *(undefined4 *)((longlong)param_2 + 4) = 0;
          goto LAB_1443ce3d0;
        }
        lVar6 = param_3[0x1c];
        if ((longlong)(int)lVar6 != 0) {
          lVar2 = param_3[0x1b];
          lVar8 = 0;
          do {
            (**(code **)(**(longlong **)(lVar2 + lVar8) + 0x18))
                      (*(longlong **)(lVar2 + lVar8),local_b8);
            if (local_b8[0] == *param_4) goto LAB_1443ce228;
            lVar8 = lVar8 + 0x10;
          } while ((longlong)(int)lVar6 * 0x10 != lVar8);
          uVar5 = *(uint *)(plVar7 + 2);
        }
        if ((uVar5 & 8) == 0) {
          *(undefined4 *)((longlong)param_2 + 4) = 0;
          *(undefined2 *)param_2 = 0xfa2;
        }
        else {
          if (((longlong *)*plVar7 != (longlong *)0x0) &&
             (cVar3 = (**(code **)(*(longlong *)*plVar7 + 0x28))(), cVar3 != '\0'))
          goto LAB_1443ce228;
          *(undefined4 *)((longlong)param_2 + 4) = 0;
          *(undefined2 *)param_2 = 0x13a2;
        }
      }
    }
  }
  else {
    cVar3 = (**(code **)(*local_60 + 8))();
    if (cVar3 == '\0') {
      *(undefined2 *)param_2 = 0xab;
      *(undefined4 *)((longlong)param_2 + 4) = 0;
    }
    else {
      cVar3 = (**(code **)(*local_60 + 0x50))();
      if (cVar3 != '\0') {
LAB_1443ce228:
        if (local_58 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_58 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
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
        *(undefined2 *)param_2 = 1;
        goto LAB_1443ce1c6;
      }
      uVar5 = (**(code **)(*local_60 + 0x60))();
      cVar3 = '\0';
      if (uVar5 < 0x42) {
        cVar3 = (char)uVar5;
      }
      if (cVar3 == '\a') {
        lVar6 = param_3[0x1c];
        if ((longlong)(int)lVar6 != 0) {
          lVar2 = param_3[0x1b];
          lVar8 = 0;
          do {
            (**(code **)(**(longlong **)(lVar2 + lVar8) + 0x18))
                      (*(longlong **)(lVar2 + lVar8),local_b8);
            if (local_b8[0] == *param_4) goto LAB_1443ce228;
            lVar8 = lVar8 + 0x10;
          } while ((longlong)(int)lVar6 * 0x10 != lVar8);
          goto LAB_1443ce2cb;
        }
        *(undefined4 *)((longlong)param_2 + 4) = 0;
        *(undefined1 *)((longlong)param_2 + 1) = 7;
      }
      else {
LAB_1443ce2cb:
        *(undefined4 *)((longlong)param_2 + 4) = 0;
        *(char *)((longlong)param_2 + 1) = cVar3;
        if (cVar3 == '\0') goto LAB_1443ce351;
      }
      *(undefined1 *)param_2 = 0xa2;
    }
  }
LAB_1443ce351:
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_58 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
LAB_1443ce166:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1443ce46c FUN_1443ce46c body=1413 status=ok
// SIG undefined FUN_1443ce46c(void)

void FUN_1443ce46c(longlong *param_1,longlong *param_2,undefined **param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  void *_Src;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong *plVar13;
  int iVar14;
  int iVar15;
  undefined ***pppuVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auStack_238 [32];
  undefined8 local_218;
  undefined8 *local_210;
  int local_208;
  char local_200 [8];
  undefined **local_1f8;
  undefined8 uStack_1f0;
  undefined **local_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  ulonglong local_1d0;
  void *local_1c8;
  int iStack_1c0;
  int iStack_1bc;
  undefined4 uStack_1b8;
  undefined4 local_1b4;
  longlong local_1a8;
  undefined4 local_1a0;
  longlong local_190 [13];
  longlong *local_128;
  int local_120;
  undefined1 local_108 [80];
  undefined **local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  byte local_a0;
  void *local_98;
  int local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_218 = param_4;
  FUN_148fdc728(local_190,param_2,param_3,param_5);
  local_1c8 = (void *)0x0;
  iStack_1c0 = 0;
  local_1e8 = (undefined **)0x0;
  uStack_1e0 = (longlong *)0x0;
  iStack_1bc = 0x80;
  uStack_1b8 = 0xffffffff;
  local_1b4 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  FUN_14058acb2(&local_1e8,param_2 + 6);
  FUN_146b4993e(local_108,&local_1e8);
  local_1a0 = 0;
  if (local_1a8 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(&local_1e8);
  (**(code **)(*param_1 + 0x2b8))(param_1,local_200,param_2,param_3);
  if (local_200[0] == '\x01') {
    local_1e8 = param_3;
    uStack_1e0 = local_190;
    FUN_148ff6f64(param_1 + 10,&local_b8,&local_1e8);
    lVar12 = (longlong)(int)local_b8;
    lVar17 = param_1[10];
    lVar2 = lVar17 + lVar12 * 0xe8;
    (**(code **)(*param_2 + 0x360))(param_2,&local_1e8,param_3);
    plVar13 = uStack_1e0;
    pppuVar16 = (undefined ***)(lVar17 + lVar12 * 0xe8 + 0x60);
    if (pppuVar16 != &local_1e8) {
      *(undefined ***)(lVar2 + 0x60) = local_1e8;
      local_1e8 = (undefined **)0x0;
      plVar4 = *(longlong **)(lVar2 + 0x68);
      if (uStack_1e0 != plVar4) {
        uStack_1e0 = (longlong *)0x0;
        *(longlong **)(lVar2 + 0x68) = plVar13;
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
      }
    }
    plVar13 = uStack_1e0;
    if (uStack_1e0 != (longlong *)0x0) {
      LOCK();
      plVar4 = uStack_1e0 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*uStack_1e0)(uStack_1e0);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
    if (*pppuVar16 == (undefined **)0x0) {
      FUN_1443c1bde(lVar2 + 0x80,DAT_14cbf56e0);
      lVar2 = param_1[0x19];
      local_210 = (undefined8 *)0x0;
      local_208 = 0;
      FUN_1446efa72(&local_210,0,3,0x10);
      puVar5 = local_210;
      local_208 = 3;
      *local_210 = &PTR_LAB_14ba5f030;
      *(undefined4 *)(local_210 + 1) = *(undefined4 *)param_3;
      LOCK();
      UNLOCK();
      lVar12 = DAT_14c758608 + 1;
      lVar17 = DAT_14c758608 + 1;
      if (lVar12 == 0) {
        LOCK();
        UNLOCK();
        lVar12 = DAT_14c758608 + 2;
        lVar17 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar17;
      local_210[2] = lVar12;
      *local_210 = &PTR_FUN_14ba5efc0;
      local_210[3] = 0;
      iVar15 = 0;
      if (param_1 != (longlong *)0x0) {
        uVar3 = *(uint *)((longlong)param_1 + 0xc);
        *(uint *)(local_210 + 3) = uVar3;
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar17 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar17 = 0;
        }
        iVar15 = *(int *)(lVar17 + 0x10);
        if (*(int *)(lVar17 + 0x10) == 0) {
          LOCK();
          iVar15 = DAT_14c964868 + 1;
          UNLOCK();
          iVar14 = DAT_14c964868 + 1;
          bVar18 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar15;
          if (bVar18) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar14);
          }
          LOCK();
          iVar15 = *(int *)(lVar17 + 0x10);
          bVar18 = iVar15 == 0;
          if (bVar18) {
            *(int *)(lVar17 + 0x10) = iVar14;
            iVar15 = 0;
          }
          UNLOCK();
          if (bVar18) {
            iVar15 = iVar14;
          }
        }
      }
      *(int *)((longlong)puVar5 + 0x1c) = iVar15;
      puVar5[4] = FUN_1443ce9f2;
      *(undefined4 *)(puVar5 + 5) = 0;
      local_1f8 = (undefined **)0x0;
      uStack_1f0 = 0;
      uStack_1e0 = (longlong *)0x0;
      uStack_1d8 = 0;
      local_1d0 = local_1d0 & 0xffffffffffffff00;
      local_1e8 = &PTR_FUN_14a5af930;
      local_1c8 = (void *)0x0;
      iStack_1c0 = 0;
      iStack_1bc = 0;
      plVar13 = (longlong *)FUN_148fd3674(param_2,1);
      if (plVar13 != (longlong *)0x0) {
        plVar13 = (longlong *)*plVar13;
        if (plVar13 != (longlong *)0x0) {
          (**(code **)(*plVar13 + 0x30))(plVar13,&local_b8);
          local_1f8 = local_b8;
          uStack_1f0 = CONCAT44(uStack_ac,uStack_b0);
        }
        FUN_148fcdaa6(param_2,&local_b8,1);
        local_78 = CONCAT71(local_78._1_7_,local_a0);
        (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[local_a0])(&local_88,&uStack_b0);
        uVar11 = local_78;
        uVar10 = uStack_7c;
        uVar9 = uStack_80;
        uVar8 = uStack_84;
        uVar7 = local_88;
        uVar6 = local_1d0;
        local_58 = local_78;
        local_68 = local_88;
        uStack_64 = uStack_84;
        uStack_60 = uStack_80;
        uStack_5c = uStack_7c;
        local_78 = local_1d0;
        local_88 = (undefined4)uStack_1e0;
        uStack_84 = uStack_1e0._4_4_;
        uStack_80 = (undefined4)uStack_1d8;
        uStack_7c = uStack_1d8._4_4_;
        uStack_1e0 = (longlong *)CONCAT44(uVar8,uVar7);
        uStack_1d8 = CONCAT44(uVar10,uVar9);
        local_1d0 = uVar11;
        (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[uVar6 & 0xff])(&local_88);
        _Src = local_98;
        iStack_1c0 = local_90;
        if (local_90 == 0 && iStack_1bc == 0) {
          iStack_1bc = 0;
        }
        else {
          FUN_1447a127e(&local_1c8,local_90);
          if (local_90 != 0) {
            memcpy(local_1c8,_Src,(longlong)local_90);
          }
        }
        local_b8 = &PTR_FUN_14a5af930;
        if (local_98 != (void *)0x0) {
          FUN_1400020a8();
        }
        local_b8 = &PTR_FUN_14a184370;
        (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_a0])(&uStack_b0);
      }
      FUN_1443bfd6a(lVar2,&local_1f8,&local_1e8,&local_210);
      local_1e8 = &PTR_FUN_14a5af930;
      if (local_1c8 != (void *)0x0) {
        FUN_1400020a8();
      }
      local_1e8 = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_1d0 & 0xff])(&uStack_1e0);
      if (local_1f8 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      if (local_208 != 0) {
        if (local_210 == (undefined8 *)0x0) goto LAB_1443ce94e;
        (**(code **)*local_210)(local_210,0);
        FUN_1446efa72(&local_210,0,0,0x10);
        local_208 = 0;
      }
      if (local_210 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      FUN_148fdceac(param_1,lVar2 + 8);
    }
  }
  else {
    (**(code **)(*param_1 + 0x2e0))(param_1,local_190,local_200);
    if (local_128 != (longlong *)0x0 && local_120 != 0) {
      (**(code **)(*local_128 + 0x60))(local_128,local_200);
    }
  }
LAB_1443ce94e:
  FUN_148fdd144(local_190);
  if ((local_48 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443ce9f2 FUN_1443ce9f2 body=462 status=ok
// SIG undefined FUN_1443ce9f2(void)

void FUN_1443ce9f2(longlong param_1,char param_2,undefined8 param_3,uint param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((DAT_14c872bd8 == '\0') && (*(char *)(param_1 + 0x48) == '\0')) &&
     (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84))) {
    lVar4 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x90);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x98) - 1U & param_4) * 4);
    if (iVar5 != -1) {
      do {
        lVar4 = *(longlong *)(param_1 + 0x50) + (longlong)iVar5 * 0xe8;
        if (*(uint *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar5 * 0xe8) == param_4) {
          lVar6 = lVar4 + 8;
          if (lVar6 == 0 || lVar4 == 0) break;
          FUN_1443c3046(lVar4 + 0x80,DAT_14cbf56e0);
          if (param_2 == '\0') {
            local_50._2_6_ = (uint6)((ulonglong)local_50 >> 0x10) & 0xffff;
            local_50 = CONCAT62(local_50._2_6_,0x13a2);
          }
          else {
            FUN_148fdcc26(param_1,&local_50,param_3);
            plVar1 = local_48;
            if ((longlong *)(lVar4 + 0x60) != &local_50) {
              *(longlong *)(lVar4 + 0x60) = local_50;
              local_50 = 0;
              plVar3 = *(longlong **)(lVar4 + 0x68);
              if (local_48 != plVar3) {
                local_48 = (longlong *)0x0;
                *(longlong **)(lVar4 + 0x68) = plVar1;
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
            plVar1 = local_48;
            if (local_48 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_48 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*local_48)(local_48);
                LOCK();
                piVar2 = (int *)((longlong)plVar1 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar1 + 0x10))(plVar1);
                }
              }
            }
            if (*(longlong *)(lVar4 + 0x60) != 0) {
              FUN_148fdceac(param_1,lVar6);
              break;
            }
            local_50._2_6_ = (uint6)((ulonglong)local_50 >> 0x10) & 0xffff;
            local_50 = CONCAT62(local_50._2_6_,0x14a2);
          }
          FUN_1443cd09a(param_1,lVar6);
          break;
        }
        iVar5 = *(int *)(lVar4 + 0xe0);
      } while (iVar5 != -1);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443cebc4 FUN_1443cebc4 body=828 status=ok
// SIG undefined FUN_1443cebc4(void)

longlong FUN_1443cebc4(longlong *param_1,undefined8 param_2,undefined8 *param_3,code *param_4)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong local_90;
  longlong local_88;
  code *local_80;
  longlong *local_78;
  longlong local_70;
  longlong *local_68;
  longlong *local_60;
  code *local_58;
  undefined8 local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  (**(code **)(*param_1 + 0x180))();
  local_58 = (code *)0x0;
  plVar4 = (longlong *)FUN_1401e3228();
  (**(code **)(*plVar4 + 0x40))(plVar4,&local_68);
  (**(code **)(*param_1 + 0x2d8))(param_1,&local_70,param_4);
  (**(code **)(*local_68 + 200))(local_68,&local_80,param_2,param_4);
  lVar6 = local_70;
  if ((((local_80 == (code *)0x0) || (local_70 == 0)) || (lVar5 = FUN_145a91644(), lVar5 == 0)) ||
     (*(int *)(lVar6 + 0x38) < *(int *)(lVar5 + 0x38))) {
LAB_1443cec5b:
    lVar7 = 0;
    goto LAB_1443cec5d;
  }
  lVar7 = 0;
  if ((*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
       lVar5 + 0x30) || (local_70 == 0)) goto LAB_1443cec5d;
  cVar3 = (**(code **)*param_3)(param_3,*(undefined8 *)(local_80 + 0x18));
  lVar6 = local_70;
  if (cVar3 == '\0') goto LAB_1443cec5b;
  if (local_70 == 0) {
LAB_1443ced61:
    local_70 = 0;
  }
  else {
    lVar5 = FUN_145a91644();
    if (((lVar5 == 0) || (*(int *)(lVar6 + 0x38) < *(int *)(lVar5 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
        lVar5 + 0x30)) goto LAB_1443ced61;
  }
  lVar6 = FUN_148fde71b(param_1,local_70);
  local_58 = FUN_1443cf43a;
  local_50._0_4_ = 0;
  local_98 = &local_88;
  local_88 = lVar6;
  FUN_148fde7cc(lVar6 + 0x260,&local_90,param_1,&local_58);
  local_58 = FUN_1443cf4de;
  local_50._0_4_ = 0;
  local_98 = &local_88;
  FUN_148fde7cc(lVar6 + 0x278,&local_90,param_1,&local_58);
  local_58 = FUN_1443cf792;
  local_50 = (longlong *)((ulonglong)local_50._4_4_ << 0x20);
  local_98 = &local_88;
  FUN_148fde8e0(lVar6 + 0x290,&local_90,param_1,&local_58);
  local_90 = lVar6;
  if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar6);
  }
  local_58 = param_4;
  local_50 = &local_90;
  FUN_148ffc4c6(param_1 + 0x1b,local_44,&local_58);
  plVar4 = local_78;
  local_58 = local_80;
  local_50 = local_78;
  if (local_78 == (longlong *)0x0) {
    FUN_1443c397c(lVar6,&local_58);
  }
  else {
    LOCK();
    *(int *)(local_78 + 1) = (int)local_78[1] + 1;
    UNLOCK();
    FUN_1443c397c(lVar6);
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
  lVar7 = local_88;
  if (*(int *)(*(longlong *)(local_88 + 0x70) + 0x28) == 0x11111111) {
    local_58 = FUN_1443cf816;
    local_50 = (longlong *)((ulonglong)local_50 & 0xffffffff00000000);
    local_98 = &local_88;
    FUN_148fde9f4(local_88 + 0x2f0,&local_90,param_1);
    FUN_1443cf816(param_1,*(undefined1 *)(*(longlong *)(lVar7 + 0x70) + 0x40),
                  *(undefined1 *)(*(longlong *)(lVar7 + 0x70) + 0x41),lVar7);
  }
LAB_1443cec5d:
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_78 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar1 = (int *)((longlong)local_78 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_78 + 0x10))(local_78);
      }
    }
  }
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_60 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)local_60 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_60 + 0x10))(local_60);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar7;
}



// FUNCTION 1443cef02 FUN_1443cef02 body=359 status=ok
// SIG undefined FUN_1443cef02(void)

void FUN_1443cef02(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_78 [32];
  undefined4 *local_58;
  code *local_50;
  undefined4 local_48;
  undefined1 local_40 [12];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = param_1[8];
  if (lVar4 != 0) {
    lVar2 = FUN_1459237bc();
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      lVar4 = param_1[8];
      goto LAB_1443cef56;
    }
  }
  lVar4 = 0;
LAB_1443cef56:
  pcVar3 = (code *)FUN_148fde432(param_1,lVar4);
  local_50 = pcVar3;
  if ((pcVar3 != (code *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(pcVar3);
  }
  FUN_148fde4e2(param_1 + 0x15,&local_50,param_3);
  (**(code **)(*(longlong *)pcVar3 + 0x2a0))(pcVar3,param_2);
  (**(code **)(*param_1 + 0x2f0))(param_1,pcVar3);
  local_34 = 0xffffffff;
  if ((((*(int *)(pcVar3 + 0xe0) != 0) && (uVar1 = *(uint *)(pcVar3 + 0xdc), -1 < (int)uVar1)) &&
      (((int)uVar1 < DAT_14c9647dc &&
       (((plVar5 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
         plVar5 != (longlong *)0x0 && ((int)plVar5[2] == *(int *)(pcVar3 + 0xe0))) &&
        ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)))))) && (*plVar5 != 0)) {
    local_34 = *(undefined4 *)(*plVar5 + 0xe0);
  }
  local_58 = &local_34;
  local_50 = FUN_1443cf06a;
  local_48 = 0;
  FUN_148fde564(pcVar3 + 0x268,local_40,param_1);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443cf06a FUN_1443cf06a body=65 status=ok
// SIG undefined FUN_1443cf06a(void)

void FUN_1443cf06a(longlong param_1)

{
  if (((DAT_14c872bd8 == '\0') && (*(char *)(param_1 + 0x48) == '\0')) &&
     (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84))) {
    FUN_148ff6cfc(param_1 + 0x50);
    FUN_148ff6e46(param_1 + 0x50);
    return;
  }
  return;
}



// FUNCTION 1443cf0ac FUN_1443cf0ac body=909 status=ok
// SIG undefined FUN_1443cf0ac(void)

void FUN_1443cf0ac(longlong *param_1,undefined8 param_2,undefined8 param_3,byte param_4,uint param_5
                  ,uint param_6)

{
  int *piVar1;
  uint uVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_98 [32];
  undefined8 **local_78;
  undefined8 *local_70;
  int local_68;
  longlong *local_60;
  longlong *local_58;
  undefined2 local_50;
  uint local_4c;
  ulonglong local_48;
  
  uVar2 = param_6;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((DAT_14c872bd8 != '\0') || ((char)param_1[9] != '\0')) goto LAB_1443cf33d;
  local_4c = 0;
  local_50 = (ushort)param_4;
  if (param_4 == 0xa2) {
    bVar10 = false;
    cVar4 = (char)param_5;
    if (0x41 < param_5) {
      cVar4 = '\0';
    }
    local_50 = CONCAT11(cVar4,0xa2);
    if (cVar4 != '\0') {
      local_50 = CONCAT11(cVar4,0xa2);
      bVar10 = false;
    }
  }
  else {
    local_4c = param_5;
    bVar10 = param_4 == 1;
  }
  if ((int)param_1[0xb] != *(int *)((longlong)param_1 + 0x84)) {
    plVar5 = param_1 + 0x11;
    if ((longlong *)param_1[0x12] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[0x12];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[0x13] - 1U & param_6) * 4);
    if (iVar6 != -1) {
      do {
        lVar9 = param_1[10] + (longlong)iVar6 * 0xe8;
        if (*(uint *)(param_1[10] + (longlong)iVar6 * 0xe8) == param_6) {
          if (lVar9 + 8 != 0 && lVar9 != 0) {
            FUN_1443c3046(lVar9 + 0x80,DAT_14cbf56f8);
            if (bVar10) {
              if (*(char *)((longlong)param_1 + 0xc1) != '\x01') {
                FUN_1443c1bde(lVar9 + 0x80,DAT_14cbf5700);
                goto LAB_1443cf33d;
              }
              lVar7 = FUN_1443cebc4(param_1,param_2,param_3,&param_6);
              if (lVar7 == 0) {
                local_50 = 0x9c;
              }
            }
            FUN_1443cd09a(param_1,lVar9 + 8,&local_50);
            goto LAB_1443cf33d;
          }
          break;
        }
        iVar6 = *(int *)(lVar9 + 0xe0);
      } while (iVar6 != -1);
    }
  }
  if (!bVar10) {
    local_78 = (undefined8 **)CONCAT44(local_78._4_4_,param_6);
    FUN_1443d016e(param_1);
    goto LAB_1443cf33d;
  }
  (**(code **)(*param_1 + 0x180))(param_1);
  local_70 = (undefined8 *)0x0;
  plVar5 = (longlong *)FUN_1401e3228(&local_70);
  (**(code **)(*plVar5 + 0x40))(plVar5,&local_60);
  local_70 = (undefined8 *)0x0;
  local_68 = 0;
  FUN_1446efa72(&local_70,0,3,0x10);
  puVar3 = local_70;
  local_68 = 3;
  *local_70 = &PTR_LAB_14ba5f730;
  *(uint *)(local_70 + 1) = uVar2;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  local_70[2] = lVar7;
  *local_70 = &PTR_FUN_14ba5f6c0;
  local_70[3] = 0;
  iVar6 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar2 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_70 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar6 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar6 = *(int *)(lVar9 + 0x10);
      bVar10 = iVar6 == 0;
      if (bVar10) {
        *(int *)(lVar9 + 0x10) = iVar8;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar6 = iVar8;
      }
    }
  }
  *(int *)((longlong)puVar3 + 0x1c) = iVar6;
  puVar3[4] = FUN_1443d016e;
  *(undefined4 *)(puVar3 + 5) = 0;
  local_78 = &local_70;
  (**(code **)(*local_60 + 0x58))(local_60,param_2,param_3,1);
  if (local_68 == 0) {
LAB_1443cf2fa:
    if (local_70 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_70 != (undefined8 *)0x0) {
    (**(code **)*local_70)(local_70,0);
    FUN_1446efa72(&local_70,0,0,0x10);
    local_68 = 0;
    goto LAB_1443cf2fa;
  }
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_58 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
LAB_1443cf33d:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443cf43a FUN_1443cf43a body=162 status=ok
// SIG undefined FUN_1443cf43a(void)

void FUN_1443cf43a(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  longlong *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((DAT_14c872bd8 == '\0') && (param_3 != 0)) && (*(char *)(param_1 + 0x48) == '\0')) {
    lVar1 = *(longlong *)(param_3 + 0x70) + 0x28;
    FUN_148ffd9fc(param_1 + 0xd8,lVar1);
    local_40 = param_3;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_3);
    }
    local_30 = &local_40;
    local_38 = lVar1;
    FUN_148ffc4c6(param_1 + 0x128,local_24);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443cf4de FUN_1443cf4de body=669 status=ok
// SIG undefined FUN_1443cf4de(void)

void FUN_1443cf4de(longlong *param_1,undefined4 param_2,longlong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  uint *puVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((DAT_14c872bd8 == '\0') && (param_3 != 0)) && ((char)param_1[9] == '\0')) {
    puVar6 = (uint *)(*(longlong *)(param_3 + 0x70) + 0x28);
    FUN_148ffd9fc(param_1 + 0x25,puVar6);
    if ((int)param_1[0x1c] != *(int *)((longlong)param_1 + 0x10c)) {
      plVar5 = param_1 + 0x22;
      if ((longlong *)param_1[0x23] != (longlong *)0x0) {
        plVar5 = (longlong *)param_1[0x23];
      }
      iVar7 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[0x24] - 1U & *puVar6) * 4);
      if (iVar7 != -1) {
        lVar4 = param_1[0x1b];
        do {
          if (*(uint *)(lVar4 + (longlong)iVar7 * 0x18) == *puVar6) {
            FUN_148ffd9fc(param_1 + 0x1b,puVar6);
            break;
          }
          iVar7 = *(int *)(lVar4 + (longlong)iVar7 * 0x18 + 0x10);
        } while (iVar7 != -1);
      }
    }
    (**(code **)(*param_1 + 0x2e8))(param_1,param_3,param_2);
    FUN_144757f48(param_3,0x40000000);
    uVar1 = *(uint *)(param_3 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    do {
      uVar1 = *(uint *)(lVar4 + 8);
      if ((uVar1 >> 0x15 & 1) != 0) break;
      LOCK();
      bVar8 = uVar1 == *(uint *)(lVar4 + 8);
      if (bVar8) {
        *(uint *)(lVar4 + 8) = uVar1 | 0x200000;
      }
      UNLOCK();
    } while (!bVar8);
    if ((int)param_1[0xb] != *(int *)((longlong)param_1 + 0x84)) {
      plVar5 = param_1 + 0x11;
      if ((longlong *)param_1[0x12] != (longlong *)0x0) {
        plVar5 = (longlong *)param_1[0x12];
      }
      iVar7 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[0x13] - 1U & *puVar6) * 4);
      if (iVar7 != -1) {
        do {
          lVar4 = param_1[10] + (longlong)iVar7 * 0xe8;
          if (*(uint *)(param_1[10] + (longlong)iVar7 * 0xe8) == *puVar6) {
            if (lVar4 + 8 != 0 && lVar4 != 0) {
              FUN_1443c3046(lVar4 + 0x80,DAT_14cbf56f0);
              if ((*(longlong *)(lVar4 + 0x60) != 0) || (*(longlong *)(lVar4 + 0x50) != 0)) {
                    /* WARNING: Subroutine does not return */
                FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
              }
              uVar2 = (ulonglong)local_48 >> 0x10;
              local_48 = (undefined8 *)CONCAT62((uint6)uVar2 & 0xffff,0x1a2);
              FUN_1443cd09a(param_1,lVar4 + 8);
            }
            break;
          }
          iVar7 = *(int *)(lVar4 + 0xe0);
        } while (iVar7 != -1);
      }
    }
    if (*(int *)(*(longlong *)(param_3 + 0x70) + 0x28) == 0x11111111) {
      if ((int)param_1[0x16] < 1) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = *(longlong **)param_1[0x15];
      }
      cVar3 = (**(code **)(*plVar5 + 0x2c8))();
      if (cVar3 != '\0') {
        local_48 = (undefined8 *)0x0;
        uStack_40 = 0;
        FUN_1443cd3a4(param_1,&local_48);
        if ((int)uStack_40 != 0) {
          if (local_48 == (undefined8 *)0x0) goto LAB_1443cf511;
          (**(code **)*local_48)(local_48,0);
          FUN_1446efa72(&local_48,0,0,0x10);
          uStack_40 = uStack_40 & 0xffffffff00000000;
        }
        if (local_48 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
LAB_1443cf511:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443cf792 FUN_1443cf792 body=132 status=ok
// SIG undefined FUN_1443cf792(void)

void FUN_1443cf792(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  
  if (((DAT_14c872bd8 == '\0') && (param_2 != 0)) && (*(char *)(param_1 + 0x48) == '\0')) {
    FUN_148ffd9fc(param_1 + 0xd8,*(longlong *)(param_2 + 0x70) + 0x28);
    FUN_144757f48(param_2,0x40000000);
    uVar1 = *(uint *)(param_2 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    do {
      uVar1 = *(uint *)(lVar2 + 8);
      if ((uVar1 >> 0x15 & 1) != 0) {
        return;
      }
      LOCK();
      bVar3 = uVar1 == *(uint *)(lVar2 + 8);
      if (bVar3) {
        *(uint *)(lVar2 + 8) = uVar1 | 0x200000;
      }
      UNLOCK();
    } while (!bVar3);
  }
  return;
}



// FUNCTION 1443cf816 FUN_1443cf816 body=1148 status=ok
// SIG undefined FUN_1443cf816(void)

void FUN_1443cf816(longlong *param_1,char param_2,char param_3,longlong *param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_158 [36];
  undefined4 local_134;
  undefined4 *local_130;
  longlong **local_128;
  int local_11c;
  longlong *local_118;
  int iStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined **local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  longlong local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if ((DAT_14c872bd8 != '\0') || ((char)param_1[9] != '\0')) goto LAB_1443cf97f;
  if (param_2 == '\x05') {
    *(undefined1 *)(param_1 + 0x18) = 1;
    if (param_1[6] == 0) goto LAB_1443cf97f;
    cVar3 = (**(code **)(*param_1 + 0x308))(param_1);
    if (cVar3 != '\0') {
      local_d0 = param_1[6];
      plVar6 = (longlong *)param_1[7];
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      local_118 = (longlong *)0x0;
      iStack_110 = 0x11111111;
      uStack_10c = (undefined4)*(undefined8 *)(local_d0 + 0x30);
      uStack_108 = (undefined4)((ulonglong)*(undefined8 *)(local_d0 + 0x30) >> 0x20);
      local_f8 = 0;
      uStack_f0 = 0;
      local_e8 = 0;
      local_100 = &PTR_FUN_14a5af930;
      local_e0 = 0;
      uStack_d8 = 0;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      local_70 = 0;
      local_68 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      uStack_b4 = 0;
      uStack_b0 = 0;
      uStack_ac = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_64 = 0xffffffff00000080;
      local_5c = 0;
      local_50 = 0;
      local_48 = 0;
      local_c8 = plVar6;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar6 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
      local_130 = &local_134;
      local_134 = 0x11111111;
      local_128 = &local_118;
      FUN_148ffd7ee(param_1 + 10,&local_11c);
      lVar5 = param_1[10];
      FUN_148fdd144(&local_118);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar6 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
      FUN_1443c1bde(lVar5 + (longlong)local_11c * 0xe8 + 0x80,DAT_14cbf56f0);
      local_118 = (longlong *)0x0;
      iStack_110 = 0;
      uStack_10c = 0;
      (**(code **)(*param_4 + 0x2a0))(param_4,&local_118);
      if (iStack_110 != 0) {
        if (local_118 == (longlong *)0x0) goto LAB_1443cf949;
        (**(code **)*local_118)(local_118,0);
        FUN_1446efa72(&local_118,0,0,0x10);
        iStack_110 = 0;
      }
      if (local_118 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
LAB_1443cf949:
    param_1[6] = 0;
    plVar6 = (longlong *)param_1[7];
    if (plVar6 == (longlong *)0x0) goto LAB_1443cf97f;
    param_1[7] = 0;
    LOCK();
    plVar4 = plVar6 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1443cf97f;
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_1443cf97f;
    lVar5 = *plVar6;
  }
  else {
    if (param_2 != '\x06') goto LAB_1443cf97f;
    *(undefined1 *)(param_1 + 0x18) = 0;
    if (param_3 == '\x05') {
      plVar6 = (longlong *)FUN_145b138ac();
      lVar5 = plVar6[0x22];
      if (lVar5 == 0) {
        (**(code **)(*plVar6 + 1000))(plVar6);
        lVar5 = plVar6[0x22];
      }
      if (*(char *)(lVar5 + 0x3e) == '\x01') {
        local_118 = (longlong *)0x0;
        iStack_110 = 0;
        uStack_10c = 0;
        (**(code **)(*param_4 + 0x2a0))(param_4,&local_118);
        if (iStack_110 != 0) {
          if (local_118 == (longlong *)0x0) goto LAB_1443cf87b;
          (**(code **)*local_118)(local_118,0);
          FUN_1446efa72(&local_118,0,0,0x10);
          iStack_110 = 0;
        }
        if (local_118 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
    }
LAB_1443cf87b:
    if (((param_1[6] != 0) || ((char)param_4[0x26] != '\x01')) ||
       ((int)param_4[0x1d] - *(int *)((longlong)param_4 + 0x114) < 2)) goto LAB_1443cf97f;
    plVar4 = (longlong *)FUN_14001cc68(0x48,0x10);
    plVar4[1] = (longlong)&DAT_100000001;
    *plVar4 = (longlong)&PTR_FUN_14ba5f7a0;
    plVar6 = plVar4 + 2;
    FUN_148fdc490(plVar6,param_4);
    iStack_110 = (int)plVar4;
    uStack_10c = (undefined4)((ulonglong)plVar4 >> 0x20);
    local_118 = plVar6;
    FUN_148ffd74a(&local_118,plVar6);
    if (plVar4 == (longlong *)0x0) {
      param_1[6] = 0x10;
      plVar6 = (longlong *)param_1[7];
      if (plVar6 != (longlong *)0x0) {
        param_1[7] = 0;
LAB_1443cfc28:
        LOCK();
        plVar4 = plVar6 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
joined_r0x0001443cfc53:
          if (iVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      param_1[6] = (longlong)plVar6;
      plVar6 = (longlong *)param_1[7];
      if (plVar4 == plVar6) {
        LOCK();
        plVar6 = plVar4 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
          plVar6 = plVar4;
          goto joined_r0x0001443cfc53;
        }
      }
      else {
        param_1[7] = (longlong)plVar4;
        if (plVar6 != (longlong *)0x0) goto LAB_1443cfc28;
      }
    }
    plVar6 = (longlong *)CONCAT44(uStack_10c,iStack_110);
    if (plVar6 == (longlong *)0x0) goto LAB_1443cf97f;
    LOCK();
    plVar4 = plVar6 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1443cf97f;
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_1443cf97f;
    lVar5 = *plVar6;
  }
  (**(code **)(lVar5 + 0x10))(plVar6);
LAB_1443cf97f:
  if ((local_38 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443cfc94 FUN_1443cfc94 body=101 status=ok
// SIG undefined FUN_1443cfc94(void)

void FUN_1443cfc94(longlong *param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((DAT_14c872bd8 == '\0') && ((char)param_1[9] == '\0')) {
    lVar1 = (**(code **)(*param_1 + 0x180))(param_1);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = *(longlong *)(lVar1 + 0x1f0);
    }
    if (((int)param_2 < 0) || (*(int *)(lVar1 + 0x40) <= (int)param_2)) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 0x38) + (ulonglong)param_2 * 8);
    }
    FUN_1443cef02(param_1,uVar2,param_2);
    return;
  }
  return;
}



// FUNCTION 1443cfcfa FUN_1443cfcfa body=249 status=ok
// SIG undefined FUN_1443cfcfa(void)

ulonglong FUN_1443cfcfa(longlong param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = local_20;
  if ((((DAT_14c872bd8 == '\0') && (*(char *)(param_1 + 0x48) == '\0')) && (-1 < (int)param_2)) &&
     ((int)param_2 < *(int *)(param_1 + 0xb0))) {
    uVar3 = *(ulonglong *)(param_1 + 0xa8);
    lVar4 = *(longlong *)(uVar3 + (ulonglong)param_2 * 8);
    if (lVar4 != 0) {
      local_30 = lVar4;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar4);
      }
      local_28 = &local_30;
      FUN_148ffd29c((ulonglong *)(param_1 + 0xa8));
      FUN_148ffb4e0(param_1 + 0x198,lVar4);
      FUN_144757f48(lVar4,0x40000000);
      uVar2 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      do {
        uVar2 = *(uint *)(lVar4 + 8);
        uVar3 = (ulonglong)uVar2;
        if ((uVar2 >> 0x15 & 1) != 0) break;
        LOCK();
        uVar1 = *(uint *)(lVar4 + 8);
        if (uVar2 == uVar1) {
          *(uint *)(lVar4 + 8) = uVar2 | 0x200000;
        }
        else {
          uVar3 = (ulonglong)uVar1;
        }
        UNLOCK();
      } while (uVar2 != uVar1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1443cfe18 FUN_1443cfe18 body=806 status=ok
// SIG undefined FUN_1443cfe18(void)

void FUN_1443cfe18(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  uint param_5)

{
  char cVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  uVar2 = param_5;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((DAT_14c872bd8 == '\0') && (*(char *)(param_1 + 0x48) == '\0')) &&
     (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84))) {
    lVar9 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x90);
    }
    iVar5 = *(int *)(lVar9 + (ulonglong)(*(int *)(param_1 + 0x98) - 1U & param_5) * 4);
    if (iVar5 != -1) {
      do {
        lVar9 = *(longlong *)(param_1 + 0x50) + (longlong)iVar5 * 0xe8;
        if (*(uint *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar5 * 0xe8) == param_5) {
          if (lVar9 + 8 == 0 || lVar9 == 0) break;
          cVar1 = *(char *)(param_4 + 0x40);
          if (cVar1 != '\x01') {
            uVar2 = *(uint *)(param_4 + 0x44);
            local_48 = (undefined8 *)(CONCAT71((int7)((ulonglong)local_48 >> 8),cVar1) & 0xffffffff)
            ;
            if (cVar1 == -0x5e) {
              uVar6 = 0;
              if (uVar2 < 0x42) {
                uVar6 = uVar2;
              }
              local_48._0_2_ = CONCAT11((char)uVar6,(byte)local_48);
              if ((char)uVar6 != '\0') {
                local_48 = (undefined8 *)CONCAT71(local_48._1_7_,0xa2);
              }
            }
            else {
              local_48._0_2_ = (ushort)(byte)local_48;
              local_48 = (undefined8 *)CONCAT44(uVar2,(undefined4)local_48);
            }
            FUN_1443cd09a(param_1,lVar9 + 8,&local_48);
            break;
          }
          plVar4 = (longlong *)FUN_148fdcd7a(param_1,&param_5,1);
          if (plVar4 == (longlong *)0x0) {
            if ((uVar2 == 0x11111111 & *(byte *)(param_1 + 0xa0)) != 1) {
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
            }
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
          }
          FUN_1443c1bde(lVar9 + 0x80,DAT_14cbf56f0);
          if (*(char *)((longlong)plVar4 + 0x227) != '\0') break;
          local_48 = (undefined8 *)0x0;
          local_40 = 0;
          FUN_1446efa72(&local_48,0,3,0x10);
          puVar3 = local_48;
          local_40 = 3;
          *local_48 = &PTR_LAB_14ba5e990;
          local_48[1] = plVar4;
          LOCK();
          UNLOCK();
          lVar7 = DAT_14c758608 + 1;
          lVar9 = DAT_14c758608 + 1;
          if (lVar7 == 0) {
            LOCK();
            UNLOCK();
            lVar7 = DAT_14c758608 + 2;
            lVar9 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar9;
          local_48[2] = lVar7;
          *local_48 = &PTR_FUN_14ba5e920;
          local_48[3] = 0;
          iVar5 = 0;
          if (param_1 != 0) {
            uVar2 = *(uint *)(param_1 + 0xc);
            *(uint *)(local_48 + 3) = uVar2;
            if ((int)uVar2 < DAT_14c9647dc) {
              lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
            }
            else {
              lVar9 = 0;
            }
            iVar5 = *(int *)(lVar9 + 0x10);
            if (*(int *)(lVar9 + 0x10) == 0) {
              LOCK();
              iVar5 = DAT_14c964868 + 1;
              UNLOCK();
              iVar8 = DAT_14c964868 + 1;
              bVar10 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar5;
              if (bVar10) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar8);
              }
              LOCK();
              iVar5 = *(int *)(lVar9 + 0x10);
              bVar10 = iVar5 == 0;
              if (bVar10) {
                *(int *)(lVar9 + 0x10) = iVar8;
                iVar5 = 0;
              }
              UNLOCK();
              if (bVar10) {
                iVar5 = iVar8;
              }
            }
          }
          *(int *)((longlong)puVar3 + 0x1c) = iVar5;
          puVar3[4] = &DAT_1443cda8a;
          *(undefined4 *)(puVar3 + 5) = 0;
          (**(code **)(*plVar4 + 0x2a0))(plVar4,&local_48);
          if (local_40 != 0) {
            if (local_48 == (undefined8 *)0x0) break;
            (**(code **)*local_48)(local_48,0);
            FUN_1446efa72(&local_48,0,0,0x10);
            local_40 = 0;
          }
          if (local_48 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
          break;
        }
        iVar5 = *(int *)(lVar9 + 0xe0);
      } while (iVar5 != -1);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443d016e FUN_1443d016e body=229 status=ok
// SIG undefined FUN_1443d016e(void)

void FUN_1443d016e(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  int in_stack_00000028;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((DAT_14c872bd8 == '\0') &&
     (in_stack_00000028 == 0x11111111 && *(char *)(param_1 + 0x48) == '\0')) {
    if (*(int *)(param_1 + 0xb0) < 1) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = (longlong *)**(undefined8 **)(param_1 + 0xa8);
    }
    cVar1 = (**(code **)(*plVar3 + 0x2c8))();
    if (cVar1 != '\0') {
      lVar2 = FUN_148fde686(param_1,1);
      if (lVar2 == 0) {
        local_28 = (undefined8 *)0x0;
        uStack_20 = 0;
        FUN_1443cd3a4(param_1,&local_28);
        if ((int)uStack_20 != 0) {
          if (local_28 == (undefined8 *)0x0) goto LAB_1443d01c3;
          (**(code **)*local_28)(local_28,0);
          FUN_1446efa72(&local_28,0,0,0x10);
          uStack_20 = uStack_20 & 0xffffffff00000000;
        }
        if (local_28 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
LAB_1443d01c3:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443d0254 FUN_1443d0254 body=41 status=ok
// SIG undefined FUN_1443d0254(void)

void FUN_1443d0254(void)

{
  DAT_14cbf57d0 = 0;
  if (DAT_14cbf57c8 != 0) {
    FUN_1400020a8();
  }
  FUN_145d7202c();
  return;
}



// FUNCTION 1443d027e FUN_1443d027e body=738 status=ok
// SIG undefined FUN_1443d027e(void)

void FUN_1443d027e(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_98 [40];
  undefined1 local_70 [8];
  undefined8 *local_68;
  int local_60;
  undefined4 uStack_5c;
  longlong *local_58;
  longlong *plStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar6 = (longlong *)FUN_148fcd308(param_1,0);
  if (plVar6 == (longlong *)0x0) {
    local_58 = (longlong *)0x0;
    plStack_50 = (longlong *)0x0;
    goto LAB_1443d04a5;
  }
  (**(code **)(*plVar6 + 0x80))(plVar6,&local_58);
  if (local_58 == (longlong *)0x0) goto LAB_1443d04a5;
  (**(code **)(*local_58 + 0xa0))(local_58,param_3,param_1);
  (**(code **)(*local_58 + 0x38))(local_58,param_3,param_1);
  (**(code **)(*local_58 + 200))(local_58,param_3,param_1);
  plVar6 = local_58;
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  FUN_1446efa72(&local_68,0,3,0x10);
  puVar4 = local_68;
  local_60 = 3;
  *local_68 = &PTR_LAB_14b4e4d10;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  local_68[2] = lVar7;
  *local_68 = &PTR_FUN_14ba5fc60;
  local_68[3] = 0;
  iVar5 = 0;
  if (param_1 != 0) {
    uVar3 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_68 + 3) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar5 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar5 = *(int *)(lVar8 + 0x10);
      bVar10 = iVar5 == 0;
      if (bVar10) {
        *(int *)(lVar8 + 0x10) = iVar9;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar5 = iVar9;
      }
    }
  }
  *(int *)((longlong)puVar4 + 0x1c) = iVar5;
  puVar4[4] = FUN_1443d0e1e;
  *(undefined4 *)(puVar4 + 5) = 0;
  (**(code **)(*plVar6 + 0x28))(plVar6,local_70,param_2,&local_68);
  if (local_60 == 0) {
LAB_1443d0422:
    if (local_68 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_68 != (undefined8 *)0x0) {
    (**(code **)*local_68)(local_68,0);
    FUN_1446efa72(&local_68,0,0,0x10);
    local_60 = 0;
    goto LAB_1443d0422;
  }
  iVar5 = (**(code **)(*local_58 + 0x138))(local_58,param_2);
  if (iVar5 == 2) {
    (**(code **)(*local_58 + 0x110))(local_58,&local_68,param_2);
    if (local_68 != (undefined8 *)0x0) {
      FUN_1443d0e1e(param_1,param_2);
    }
    plVar6 = (longlong *)CONCAT44(uStack_5c,local_60);
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
  }
LAB_1443d04a5:
  plVar6 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443d0562 FUN_1443d0562 body=282 status=ok
// SIG undefined FUN_1443d0562(void)

ulonglong FUN_1443d0562(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *plStack_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x180))();
  local_20 = 0;
  plVar5 = (longlong *)FUN_1401e3228();
  if (plVar5 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar5 + 0x80))(plVar5,&local_38);
    if (local_38 != (longlong *)0x0) {
      uVar6 = 0xffffffff;
      if (((((int)param_1[0x1c] != 0) &&
           (uVar3 = *(uint *)((longlong)param_1 + 0xdc), -1 < (int)uVar3)) &&
          ((int)uVar3 < DAT_14c9647dc)) &&
         (((plVar5 = (longlong *)
                     ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
           plVar5 != (longlong *)0x0 && ((int)plVar5[2] == (int)param_1[0x1c])) &&
          (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (*plVar5 != 0)))))) {
        uVar6 = *(undefined4 *)(*plVar5 + 0xe0);
      }
      iVar4 = (**(code **)(*local_38 + 0x138))(local_38,uVar6);
      uVar7 = CONCAT71((int7)((ulonglong)param_1 >> 8),iVar4 == 2);
      goto LAB_1443d0636;
    }
  }
  uVar7 = 0;
LAB_1443d0636:
  plVar5 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443d067e FUN_1443d067e body=1920 status=ok
// SIG undefined FUN_1443d067e(void)

void FUN_1443d067e(longlong *param_1,longlong param_2,undefined4 param_3,undefined ***param_4,
                  char param_5)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  void *_Src;
  int iVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined ***pppuVar9;
  int iVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar11;
  undefined1 auStack_1b8 [32];
  undefined ***local_198;
  undefined ***local_190;
  undefined1 local_188;
  code *local_178;
  undefined4 local_170;
  undefined8 *local_168;
  int local_160;
  longlong local_158 [2];
  undefined1 local_148;
  undefined **local_138;
  longlong *local_130;
  longlong *local_128;
  char local_119;
  undefined **local_118;
  longlong *local_110;
  byte local_100;
  longlong local_f8;
  undefined **local_e8;
  undefined1 local_e0 [16];
  byte local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined **local_b8 [2];
  undefined8 local_a8 [6];
  undefined **local_78;
  undefined8 uStack_70;
  longlong *local_68;
  byte local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_119 = param_5;
  puVar1 = (uint *)(param_2 + 8);
  if ((&DAT_149fc1b6e)[*(byte *)(param_2 + 0x18)] == '\x01') {
    if ((*(longlong **)puVar1 == (longlong *)0x0) ||
       (cVar5 = (**(code **)(**(longlong **)puVar1 + 0x28))(), cVar5 == '\0')) goto LAB_1443d06f2;
  }
  else if ((*puVar1 & 0xffffff) == 0) goto LAB_1443d06f2;
  plVar6 = (longlong *)FUN_148fcd00c(param_1,param_2);
  if (plVar6 != (longlong *)0x0) {
LAB_1443d0733:
    if (*param_4 != (undefined **)0x0 && plVar6 != (longlong *)0x0) {
      if ((param_5 == '\0') || ((char)plVar6[0x10] != '\0')) {
        pppuVar9 = param_4 + 4;
        if ((undefined ***)param_4[2] != (undefined ***)0x0) {
          pppuVar9 = (undefined ***)param_4[2];
        }
        (*(code *)(*pppuVar9)[1])(pppuVar9);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_1b8);
      }
      FUN_148fdf856(&local_78,param_4);
      FUN_148fd2ca2(plVar6,&local_78);
      if ((int)uStack_70 != 0) {
        if (local_78 == (undefined **)0x0) goto LAB_1443d06f2;
        (**(code **)*local_78)(local_78,0);
        FUN_1446efa72(&local_78,0,0,0x10);
        uStack_70 = (undefined **)((ulonglong)uStack_70._4_4_ << 0x20);
      }
      if (local_78 != (undefined **)0x0) {
        FUN_1400020a8();
      }
    }
    goto LAB_1443d06f2;
  }
  cVar5 = FUN_1443d0562(param_1);
  if (cVar5 == '\0') goto LAB_1443d06f2;
  if ((char)param_3 == '\0') {
    lVar8 = param_1[6];
    if ((((lVar8 == 0) || (lVar7 = FUN_14120add8(), lVar7 == 0)) ||
        (*(int *)(lVar8 + 0x38) < *(int *)(lVar7 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
        lVar7 + 0x30)) {
      lVar8 = 0;
    }
    else {
      lVar8 = param_1[6];
    }
    plVar6 = (longlong *)FUN_148fdf021(param_1,lVar8);
    uVar11 = extraout_XMM0_Da_00;
    if ((plVar6 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
      uVar11 = FUN_1456cec3c(plVar6);
    }
    iVar10 = (int)param_1[0x10];
    *(uint *)(param_1 + 0x10) = iVar10 + 1U;
    if (*(uint *)((longlong)param_1 + 0x84) < iVar10 + 1U) {
      uVar11 = FUN_148fe986c(param_1 + 0xf,iVar10);
    }
    *(longlong **)(param_1[0xf] + (longlong)iVar10 * 8) = plVar6;
    if ((plVar6 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
      uVar11 = FUN_1456cec3c(plVar6);
    }
    if ((((int)plVar6[0x12] == *(int *)((longlong)plVar6 + 0xbc)) && ((char)plVar6[0x10] == '\0'))
       && (lVar8 = FUN_148fdc7e6(uVar11,0), lVar8 != 0)) {
      (**(code **)(*plVar6 + 0x3a8))(plVar6,0,param_2);
      FUN_1443d3372(plVar6);
    }
    goto LAB_1443d0733;
  }
  plVar6 = (longlong *)FUN_148fdc7e6(extraout_XMM0_Da,0);
  if (plVar6 == (longlong *)0x0) {
    local_138 = (undefined **)0x0;
  }
  else {
    (**(code **)(*plVar6 + 0x10))(plVar6,&local_138);
  }
  (**(code **)(*param_1 + 0x180))(param_1);
  local_78 = local_138;
  plVar6 = (longlong *)FUN_1401e3228();
  (**(code **)(*plVar6 + 0xb8))(plVar6,&local_130);
  plVar6 = (longlong *)FUN_148fcd308(param_1,param_3);
  if (plVar6 == (longlong *)0x0) {
LAB_1443d09e6:
    uStack_70 = (undefined **)0x0;
LAB_1443d09ee:
    local_78 = (undefined **)0x0;
    local_148 = 0;
    local_158[1] = 0;
    local_158[0] = 0;
    iVar10 = 0;
  }
  else {
    (**(code **)(*plVar6 + 0x10))(plVar6,&local_78);
    lVar8 = FUN_148fdede0(&local_78);
    local_158[0] = 0;
    local_158[1] = 0;
    local_148 = 0;
    if (lVar8 == 0) goto LAB_1443d09e6;
    local_78 = (undefined **)0x0;
    uVar3 = *(uint *)(lVar8 + 0x40);
    _Src = *(void **)(lVar8 + 0x38);
    uStack_70 = (undefined **)CONCAT44(uStack_70._4_4_,uVar3);
    if ((longlong)(int)uVar3 == 0) {
      uStack_70 = (undefined **)(ulonglong)uVar3;
      goto LAB_1443d09ee;
    }
    FUN_1446dd670(&local_78,uVar3,0);
    memcpy(local_78,_Src,(longlong)(int)uVar3 * 2);
    iVar10 = (int)uStack_70;
  }
  iVar4 = iVar10 + -1;
  if (iVar10 == 0) {
    iVar4 = 0;
  }
  FUN_1402980a2(local_158,local_78,iVar4);
  if (local_78 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  FUN_1405e6804(param_2,&local_168);
  (**(code **)(*local_130 + 0x58))(local_130,&local_118,local_158,&local_168);
  local_60 = 0;
  uStack_70 = local_118;
  local_68 = local_110;
  if (local_110 == (longlong *)0x0) {
    local_78 = &PTR_FUN_14a5af930;
    local_58 = 0;
    uStack_50 = 0;
  }
  else {
    LOCK();
    *(int *)(local_110 + 1) = (int)local_110[1] + 1;
    UNLOCK();
    local_60 = 0;
    local_78 = &PTR_FUN_14a5af930;
    local_58 = 0;
    uStack_50 = 0;
    if (local_110 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_110 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_110)(local_110);
        LOCK();
        piVar2 = (int *)((longlong)local_110 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_110 + 0x10))(local_110);
        }
      }
    }
  }
  if (local_168 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((&DAT_149fc1b6e)[local_60] == '\x01') {
    if ((uStack_70 == (undefined **)0x0) ||
       (cVar5 = (**(code **)(*uStack_70 + 0x28))(), cVar5 == '\0')) goto LAB_1443d0b32;
LAB_1443d0c4c:
    local_b8[0] = *param_4;
    local_a8[0] = 0;
    if (local_b8[0] != (undefined **)0x0) {
      pppuVar9 = param_4 + 4;
      if ((undefined ***)param_4[2] != (undefined ***)0x0) {
        pppuVar9 = (undefined ***)param_4[2];
      }
      (*(code *)**pppuVar9)(pppuVar9,local_a8);
    }
    local_e8 = &PTR_FUN_14a184370;
    local_d0 = *(byte *)(param_2 + 0x18);
    (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[local_d0])(local_e0,puVar1);
    local_e8 = &PTR_FUN_14a5af930;
    local_c8 = 0;
    uStack_c0 = 0;
    local_190 = local_b8;
    local_198 = &local_e8;
    local_188 = 0;
    FUN_148fdf402(param_1,param_3,1,&local_78);
  }
  else {
    if (((ulonglong)uStack_70 & 0xffffff) != 0) goto LAB_1443d0c4c;
LAB_1443d0b32:
    FUN_148fcdaa6(param_1[0xe],&local_118,0);
    local_178 = FUN_148fdf402;
    local_170 = 0;
    local_190 = (undefined ***)&local_119;
    local_198 = param_4;
    FUN_148fdf6b4(&local_168,param_1,&local_178,param_2);
    FUN_1405e6804(param_2,&local_178);
    FUN_148fdf7a4(param_1,param_3,&local_178,&local_168);
    if (local_178 != (code *)0x0) {
      FUN_1400020a8();
    }
    if (local_160 == 0) {
LAB_1443d0be6:
      if (local_168 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_168 != (undefined8 *)0x0) {
      (**(code **)*local_168)(local_168,0);
      FUN_1446efa72(&local_168,0,0,0x10);
      local_160 = 0;
      goto LAB_1443d0be6;
    }
    local_118 = &PTR_FUN_14a5af930;
    if (local_f8 != 0) {
      FUN_1400020a8();
    }
    local_118 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_100])();
  }
  local_78 = &PTR_FUN_14a5af930;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  local_78 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_60])(&uStack_70);
  if (local_158[0] != 0) {
    FUN_1400020a8();
  }
  if (local_128 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_128 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_128)(local_128);
      LOCK();
      piVar2 = (int *)((longlong)local_128 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_128 + 0x10))(local_128);
      }
    }
  }
LAB_1443d06f2:
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443d0e1e FUN_1443d0e1e body=940 status=ok
// SIG undefined FUN_1443d0e1e(void)

void FUN_1443d0e1e(longlong *param_1,int param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong unaff_RBP;
  longlong *plVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  undefined **local_90;
  longlong *local_88;
  longlong *local_80;
  byte local_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar7 = -1;
  if (((((int)param_1[0x1c] != 0) && (uVar3 = *(uint *)((longlong)param_1 + 0xdc), -1 < (int)uVar3))
      && ((int)uVar3 < DAT_14c9647dc)) &&
     (((plVar9 = (longlong *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       plVar9 != (longlong *)0x0 && ((int)plVar9[2] == (int)param_1[0x1c])) &&
      (((*(uint *)(plVar9 + 1) & 0x10200000) == 0 && (*plVar9 != 0)))))) {
    iVar7 = *(int *)(*plVar9 + 0xe0);
  }
  if (iVar7 == param_2) {
    if (param_4 == 0) {
LAB_1443d1164:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_d8);
    }
    if (param_4 == 2) {
      if ((int)param_1[0x10] == 0) {
        iVar7 = 0;
      }
      else {
        (**(code **)(*param_1 + 0x2e8))(param_1);
        iVar7 = (int)param_1[0x10];
      }
      *(uint *)(param_1 + 0x10) = iVar7 + 1U;
      if (*(uint *)((longlong)param_1 + 0x84) < iVar7 + 1U) {
        FUN_148fe986c(param_1 + 0xf,iVar7);
      }
      plVar9 = (longlong *)param_1[0xe];
      *(longlong **)(param_1[0xf] + (longlong)iVar7 * 8) = plVar9;
      if ((plVar9 != (longlong *)0x0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(plVar9);
        plVar9 = (longlong *)param_1[0xe];
      }
      lVar5 = DAT_14cbf5710;
      lVar11 = (longlong)DAT_14cbf5718;
      if (lVar11 != 0) {
        lVar4 = plVar9[4];
        lVar12 = 0;
        local_b8 = lVar11;
        do {
          unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),*(undefined1 *)(lVar5 + lVar12));
          plVar8 = (longlong *)FUN_148fcd308(lVar4,unaff_RBP & 0xffffffff);
          (**(code **)(*plVar8 + 0x80))(plVar8,&local_a0);
          if (local_a0 != (longlong *)0x0) {
            uVar10 = 0xffffffff;
            if (((*(int *)(lVar4 + 0xe0) != 0) && (uVar3 = *(uint *)(lVar4 + 0xdc), -1 < (int)uVar3)
                ) && (((int)uVar3 < DAT_14c9647dc &&
                      ((((plVar8 = (longlong *)
                                   ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
                         plVar8 != (longlong *)0x0 && ((int)plVar8[2] == *(int *)(lVar4 + 0xe0))) &&
                        ((*(uint *)(plVar8 + 1) & 0x10200000) == 0)) && (*plVar8 != 0)))))) {
              uVar10 = *(undefined4 *)(*plVar8 + 0xe0);
            }
            (**(code **)(*local_a0 + 0x110))(local_a0,&local_b0,uVar10);
            plVar8 = local_a8;
            local_78 = 0;
            local_88 = local_b0;
            local_80 = local_a8;
            if (local_a8 == (longlong *)0x0) {
              local_90 = &PTR_FUN_14a5af930;
              local_70 = 0;
              uStack_68 = 0;
            }
            else {
              LOCK();
              *(int *)(local_a8 + 1) = (int)local_a8[1] + 1;
              UNLOCK();
              local_78 = 0;
              local_90 = &PTR_FUN_14a5af930;
              local_70 = 0;
              uStack_68 = 0;
              if (local_a8 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_a8 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*local_a8)(local_a8);
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
            iVar7 = (**(code **)(*local_a0 + 0x138))(local_a0,uVar10);
            lVar11 = local_b8;
            if (iVar7 == 2) {
              if ((&DAT_149fc1b6e)[local_78] == '\x01') {
                if ((local_88 != (longlong *)0x0) &&
                   (cVar6 = (**(code **)(*local_88 + 0x28))(), cVar6 != '\0')) {
LAB_1443d10c0:
                  (**(code **)(*plVar9 + 0x3a8))(plVar9,unaff_RBP & 0xffffffff,&local_90);
                }
              }
              else if (((ulonglong)local_88 & 0xffffff) != 0) goto LAB_1443d10c0;
            }
            local_90 = &PTR_FUN_14a5af930;
            if (local_70 != 0) {
              FUN_1400020a8();
            }
            local_90 = &PTR_FUN_14a184370;
            (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_78])(&local_88);
          }
          plVar8 = local_98;
          if (local_98 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_98 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_98)(local_98);
              LOCK();
              piVar2 = (int *)((longlong)plVar8 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar8 + 0x10))(plVar8);
              }
            }
          }
          lVar12 = lVar12 + 1;
        } while (lVar11 != lVar12);
      }
      FUN_1443d3372(plVar9);
      cVar6 = (**(code **)(*param_1 + 0x2a8))(param_1);
      if (cVar6 != '\0') goto LAB_1443d1164;
    }
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443d11f4 FUN_1443d11f4 body=694 status=ok
// SIG undefined FUN_1443d11f4(void)

undefined4 FUN_1443d11f4(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_d8 [32];
  undefined8 **local_b8;
  code *local_b0;
  undefined4 local_a8;
  longlong local_a0 [2];
  undefined8 *local_90;
  int local_88;
  undefined **local_80;
  longlong *local_78;
  longlong *plStack_70;
  undefined1 local_59;
  undefined **local_58;
  uint local_50;
  undefined4 uStack_4c;
  byte local_40;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_59 = (undefined1)param_3;
  plVar5 = (longlong *)FUN_148fdc7e6(param_1,param_3);
  if (plVar5 == (longlong *)0x0) {
    local_80 = (undefined **)0x0;
  }
  else {
    (**(code **)(*plVar5 + 0x10))(plVar5,&local_80);
  }
  (**(code **)(*param_1 + 0x180))(param_1);
  local_58 = local_80;
  plVar5 = (longlong *)FUN_1401e3228();
  if (plVar5 == (longlong *)0x0) {
    local_78 = (longlong *)0x0;
    plStack_70 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar5 + 0x28))(plVar5,&local_78);
  }
  FUN_148fcdaa6(param_2,&local_58,param_3);
  if (local_78 != (longlong *)0x0) {
    if ((&DAT_149fc1b6e)[local_40] == '\x01') {
      if (((longlong *)CONCAT44(uStack_4c,local_50) != (longlong *)0x0) &&
         (cVar3 = (**(code **)(*(longlong *)CONCAT44(uStack_4c,local_50) + 0x28))(), cVar3 != '\0'))
      {
LAB_1443d137e:
        plVar5 = local_78;
        FUN_148fcc728(param_2,local_a0);
        local_b0 = FUN_148fdfa7c;
        local_a8 = 0;
        local_b8 = (undefined8 **)local_a0;
        FUN_148fdf98c(&local_90,param_1,&local_b0,&local_59);
        uVar6 = FUN_14127b0d4(&local_58);
        uVar4 = 0xffffffff;
        if ((((int)param_1[0x1c] != 0) &&
            (((uVar2 = *(uint *)((longlong)param_1 + 0xdc), -1 < (int)uVar2 &&
              ((int)uVar2 < DAT_14c9647dc)) &&
             (plVar7 = (longlong *)
                       ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
             plVar7 != (longlong *)0x0)))) &&
           ((((int)plVar7[2] == (int)param_1[0x1c] && ((*(uint *)(plVar7 + 1) & 0x10200000) == 0))
            && (*plVar7 != 0)))) {
          uVar4 = *(undefined4 *)(*plVar7 + 0xe0);
        }
        local_b8 = &local_90;
        uVar4 = (**(code **)(*plVar5 + 0xf8))(plVar5,uVar4,uVar6,param_1 + 8);
        if (local_88 == 0) {
LAB_1443d1482:
          if (local_90 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
        }
        else if (local_90 != (undefined8 *)0x0) {
          (**(code **)*local_90)(local_90,0);
          FUN_1446efa72(&local_90,0,0,0x10);
          local_88 = 0;
          goto LAB_1443d1482;
        }
        if (local_a0[0] != 0) {
          FUN_1400020a8();
        }
        goto LAB_1443d12ec;
      }
    }
    else if ((local_50 & 0xffffff) != 0) goto LAB_1443d137e;
  }
  uVar4 = 0;
LAB_1443d12ec:
  local_58 = &PTR_FUN_14a5af930;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  local_58 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_40])();
  plVar5 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar7 = plStack_70 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1443d14ac FUN_1443d14ac body=791 status=ok
// SIG undefined FUN_1443d14ac(void)

undefined4 FUN_1443d14ac(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_d8 [32];
  undefined8 **local_b8;
  longlong local_a8 [2];
  undefined8 *local_98;
  int local_90;
  longlong *local_88;
  longlong *local_80;
  undefined **local_78 [3];
  byte local_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar5 = (longlong *)FUN_148fcd308(param_1,param_3);
  (**(code **)(*plVar5 + 0x28))(plVar5,&local_88);
  local_98 = (undefined8 *)0x0;
  local_90 = 0;
  FUN_1446efa72(&local_98,0,3,0x10);
  puVar3 = local_98;
  local_90 = 3;
  *local_98 = &PTR_LAB_14b438950;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  local_98[2] = lVar7;
  *local_98 = &PTR_FUN_14ba5fdb0;
  local_98[3] = 0;
  iVar10 = 0;
  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_98 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar10 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).");
      }
      LOCK();
      iVar10 = *(int *)(lVar9 + 0x10);
      bVar11 = iVar10 == 0;
      if (bVar11) {
        *(int *)(lVar9 + 0x10) = iVar8;
        iVar10 = 0;
      }
      UNLOCK();
      if (bVar11) {
        iVar10 = iVar8;
      }
    }
  }
  *(int *)((longlong)puVar3 + 0x1c) = iVar10;
  puVar3[4] = &LAB_148fdfd5c;
  *(undefined4 *)(puVar3 + 5) = 0;
  FUN_140056680(local_a8,L"default");
  FUN_148fcdaa6(param_2,local_78,param_3);
  uVar6 = FUN_14127b0d4(local_78);
  uVar4 = 0xffffffff;
  if ((((*(int *)(param_1 + 0xe0) != 0) && (uVar2 = *(uint *)(param_1 + 0xdc), -1 < (int)uVar2)) &&
      ((int)uVar2 < DAT_14c9647dc)) &&
     (((plVar5 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar5 != (longlong *)0x0 && ((int)plVar5[2] == *(int *)(param_1 + 0xe0))) &&
      (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (*plVar5 != 0)))))) {
    uVar4 = *(undefined4 *)(*plVar5 + 0xe0);
  }
  local_b8 = &local_98;
  uVar4 = (**(code **)(*local_88 + 0x100))(local_88,uVar4,uVar6,local_a8);
  local_78[0] = &PTR_FUN_14a5af930;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  local_78[0] = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_60])();
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_90 != 0) {
    if (local_98 == (undefined8 *)0x0) goto LAB_1443d16fa;
    (**(code **)*local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90 = 0;
  }
  if (local_98 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1443d16fa:
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_80 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1443d17c4 FUN_1443d17c4 body=491 status=ok
// SIG undefined FUN_1443d17c4(void)

void FUN_1443d17c4(longlong *param_1,int param_2,undefined4 param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RBP;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88;
  longlong local_80;
  undefined **local_78;
  undefined8 local_70;
  longlong *local_68;
  byte local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((char)param_3 != '\0') {
    iVar5 = -1;
    if (((((int)param_1[0x1c] != 0) &&
         (uVar3 = *(uint *)((longlong)param_1 + 0xdc), -1 < (int)uVar3)) &&
        ((int)uVar3 < DAT_14c9647dc)) &&
       (((plVar6 = (longlong *)
                   ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
         plVar6 != (longlong *)0x0 && ((int)plVar6[2] == (int)param_1[0x1c])) &&
        (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 && (*plVar6 != 0)))))) {
      iVar5 = *(int *)(*plVar6 + 0xe0);
    }
    if (iVar5 == param_2) {
      plVar6 = *(longlong **)(param_4 + 0x10);
      if (plVar6 == (longlong *)0x0) {
LAB_1443d18c2:
        plVar6 = (longlong *)0x0;
      }
      else {
        iVar5 = (int)plVar6[1];
        do {
          if (iVar5 == 0) goto LAB_1443d18c2;
          LOCK();
          iVar4 = (int)plVar6[1];
          bVar7 = iVar5 == iVar4;
          if (bVar7) {
            *(int *)(plVar6 + 1) = iVar5 + 1;
            iVar4 = iVar5;
          }
          iVar5 = iVar4;
          UNLOCK();
        } while (!bVar7);
      }
      local_70 = 0;
      if (plVar6 != (longlong *)0x0) {
        local_70 = *(undefined8 *)(param_4 + 8);
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      local_60 = 0;
      local_78 = &PTR_FUN_14a5af930;
      local_58 = 0;
      uStack_50 = 0;
      local_68 = plVar6;
      local_80 = FUN_148fcd00c(param_1,&local_78);
      local_78 = &PTR_FUN_14a5af930;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      local_78 = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_60])(&local_70);
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
      if (local_80 != 0) {
        FUN_1443d31da(local_80,CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_7) & 0xffffffff);
      }
    }
  }
  local_88 = param_7;
  local_90 = param_6;
  local_98 = param_5;
  (**(code **)(*param_1 + 0x318))(param_1,param_2,param_3,param_4);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443d19b0 FUN_1443d19b0 body=605 status=ok
// SIG undefined FUN_1443d19b0(void)

void FUN_1443d19b0(longlong *param_1,int param_2,undefined4 param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined ***pppuVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined **local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  byte local_a0;
  longlong local_98;
  undefined8 uStack_90;
  code *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  longlong *local_60;
  undefined1 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((char)param_3 != '\0') {
    iVar5 = -1;
    if (((((int)param_1[0x1c] != 0) &&
         (uVar3 = *(uint *)((longlong)param_1 + 0xdc), -1 < (int)uVar3)) &&
        ((int)uVar3 < DAT_14c9647dc)) &&
       (((plVar7 = (longlong *)
                   ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
         plVar7 != (longlong *)0x0 && ((int)plVar7[2] == (int)param_1[0x1c])) &&
        (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 && (*plVar7 != 0)))))) {
      iVar5 = *(int *)(*plVar7 + 0xe0);
    }
    if (iVar5 == param_2) {
      local_78 = (undefined ***)0x0;
      local_68 = &PTR_LAB_14ba60890;
      local_58 = param_7;
      local_88[0] = FUN_1443deac2;
      plVar7 = *(longlong **)(param_4 + 0x10);
      if (plVar7 == (longlong *)0x0) {
LAB_1443d1abd:
        plVar7 = (longlong *)0x0;
      }
      else {
        iVar5 = (int)plVar7[1];
        do {
          if (iVar5 == 0) goto LAB_1443d1abd;
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
      }
      local_b0 = 0;
      if (plVar7 != (longlong *)0x0) {
        local_b0 = *(undefined8 *)(param_4 + 8);
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      local_a0 = 0;
      local_b8 = &PTR_FUN_14a5af930;
      local_98 = 0;
      uStack_90 = 0;
      local_d8 = CONCAT71(local_d8._1_7_,1);
      local_a8 = plVar7;
      local_60 = param_1;
      FUN_1443d067e(param_1,&local_b8,param_7,local_88);
      local_b8 = &PTR_FUN_14a5af930;
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      local_b8 = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_a0])(&local_b0);
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
      if (local_88[0] != (code *)0x0) {
        pppuVar6 = local_78;
        if (local_78 == (undefined ***)0x0) {
          pppuVar6 = &local_68;
        }
        (*(code *)(*pppuVar6)[2])();
      }
    }
  }
  local_c8 = param_7;
  local_d0 = param_6;
  local_d8 = param_5;
  (**(code **)(*param_1 + 800))(param_1,param_2,param_3,param_4);
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443d1c0e FUN_1443d1c0e body=683 status=ok
// SIG undefined FUN_1443d1c0e(void)

void FUN_1443d1c0e(longlong *param_1,int param_2,undefined4 param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,byte param_7)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 unaff_RBP;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  byte local_88;
  longlong local_80;
  undefined **local_78;
  undefined8 local_70;
  longlong *local_68;
  byte local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((char)param_3 != '\0') {
    iVar6 = -1;
    if (((((int)param_1[0x1c] != 0) &&
         (uVar3 = *(uint *)((longlong)param_1 + 0xdc), -1 < (int)uVar3)) &&
        ((int)uVar3 < DAT_14c9647dc)) &&
       (((plVar8 = (longlong *)
                   ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
         plVar8 != (longlong *)0x0 && ((int)plVar8[2] == (int)param_1[0x1c])) &&
        (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 && (*plVar8 != 0)))))) {
      iVar6 = *(int *)(*plVar8 + 0xe0);
    }
    if (iVar6 == param_2) {
      plVar8 = *(longlong **)(param_4 + 0x10);
      if (plVar8 == (longlong *)0x0) {
LAB_1443d1d0c:
        plVar8 = (longlong *)0x0;
      }
      else {
        iVar6 = (int)plVar8[1];
        do {
          if (iVar6 == 0) goto LAB_1443d1d0c;
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
      }
      local_70 = 0;
      if (plVar8 != (longlong *)0x0) {
        local_70 = *(undefined8 *)(param_4 + 8);
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
      local_60 = 0;
      local_78 = &PTR_FUN_14a5af930;
      local_58 = 0;
      uStack_50 = 0;
      local_68 = plVar8;
      local_80 = FUN_148fcd00c(param_1,&local_78);
      local_78 = &PTR_FUN_14a5af930;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      local_78 = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_60])(&local_70);
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
      lVar4 = local_80;
      if ((local_80 != 0) && (*(int *)(local_80 + 0x90) != *(int *)(local_80 + 0xbc))) {
        lVar7 = local_80 + 0xc0;
        if (*(longlong *)(local_80 + 200) != 0) {
          lVar7 = *(longlong *)(local_80 + 200);
        }
        iVar6 = *(int *)(lVar7 + (ulonglong)(*(int *)(local_80 + 0xd0) - 1U & (uint)param_7) * 4);
        if (iVar6 != -1) {
          do {
            lVar7 = *(longlong *)(local_80 + 0x88) + (longlong)iVar6 * 0x80;
            if (*(byte *)(*(longlong *)(local_80 + 0x88) + (longlong)iVar6 * 0x80) == param_7) {
              if ((lVar7 + 8U & 0xfffffffffffffff7) != 0) {
                if (((*(longlong *)(lVar7 + 0x68) != 0) &&
                    (plVar8 = *(longlong **)(lVar7 + 0x70), plVar8 != (longlong *)0x0)) &&
                   (0 < (int)plVar8[1])) {
                  *(undefined8 *)(lVar7 + 0x68) = 0;
                  *(undefined8 *)(lVar7 + 0x70) = 0;
                  LOCK();
                  piVar2 = (int *)((longlong)plVar8 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar8 + 0x10))();
                  }
                }
                FUN_1490069a4(lVar4 + 0x188,
                              CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_7) & 0xffffffff,0);
              }
              break;
            }
            iVar6 = *(int *)(lVar7 + 0x78);
          } while (iVar6 != -1);
        }
      }
    }
  }
  local_88 = param_7;
  local_90 = param_6;
  local_98 = param_5;
  (**(code **)(*param_1 + 0x328))(param_1,param_2,param_3,param_4);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443d1eba FUN_1443d1eba body=748 status=ok
// SIG undefined FUN_1443d1eba(void)

void FUN_1443d1eba(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined ***pppuVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  undefined ***pppuVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined8 *local_c0;
  undefined **local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  byte local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined **local_88;
  undefined8 local_80;
  undefined ***local_78;
  byte local_70;
  undefined **local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  pppuVar8 = *(undefined ****)(param_2 + 0x10);
  if (pppuVar8 == (undefined ***)0x0) {
LAB_1443d1ef6:
    pppuVar8 = (undefined ***)0x0;
  }
  else {
    iVar6 = *(int *)(pppuVar8 + 1);
    do {
      if (iVar6 == 0) goto LAB_1443d1ef6;
      LOCK();
      iVar4 = *(int *)(pppuVar8 + 1);
      bVar10 = iVar6 == iVar4;
      if (bVar10) {
        *(int *)(pppuVar8 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar10);
  }
  local_80 = 0;
  if (pppuVar8 != (undefined ***)0x0) {
    local_80 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(pppuVar8 + 1) = *(int *)(pppuVar8 + 1) + 1;
    UNLOCK();
  }
  local_70 = 0;
  local_88 = &PTR_FUN_14a5af930;
  local_68 = (undefined **)0x0;
  uStack_60 = 0;
  local_c0 = param_3;
  local_78 = pppuVar8;
  plVar7 = (longlong *)FUN_148fcd00c(param_1,&local_88);
  local_88 = &PTR_FUN_14a5af930;
  if (local_68 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  local_88 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_70])(&local_80);
  if (pppuVar8 != (undefined ***)0x0) {
    LOCK();
    pppuVar1 = pppuVar8 + 1;
    *(int *)pppuVar1 = *(int *)pppuVar1 + -1;
    UNLOCK();
    if (*(int *)pppuVar1 == 0) {
      (*(code *)**pppuVar8)(pppuVar8);
      LOCK();
      piVar2 = (int *)((longlong)pppuVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (*(code *)(*pppuVar8)[2])(pppuVar8);
      }
    }
  }
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x388))(plVar7,param_4);
    cVar5 = FUN_148fd006a(plVar7);
    if (cVar5 != '\0') {
      local_58 = *local_c0;
      plVar7 = (longlong *)local_c0[1];
      if (plVar7 == (longlong *)0x0) {
        local_50 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        local_50 = plVar7;
      }
      local_68 = &PTR_LAB_14ba607f0;
      local_78 = (undefined ***)0x0;
      local_88 = (undefined **)&LAB_1443de0c8;
      plVar9 = *(longlong **)(param_2 + 0x10);
      if (plVar9 == (longlong *)0x0) {
LAB_1443d20a3:
        plVar9 = (longlong *)0x0;
      }
      else {
        iVar6 = (int)plVar9[1];
        do {
          if (iVar6 == 0) goto LAB_1443d20a3;
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
      }
      local_b0 = 0;
      if (plVar9 != (longlong *)0x0) {
        local_b0 = *(undefined8 *)(param_2 + 8);
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      local_a0 = 0;
      local_b8 = &PTR_FUN_14a5af930;
      local_98 = 0;
      uStack_90 = 0;
      local_c8 = 1;
      local_a8 = plVar9;
      uStack_60 = param_1;
      FUN_1443d067e(param_1,&local_b8,0,&local_88);
      local_b8 = &PTR_FUN_14a5af930;
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      local_b8 = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_a0])(&local_b0);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar9 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
      if (local_88 != (undefined **)0x0) {
        pppuVar8 = &local_68;
        if (local_78 != (undefined ***)0x0) {
          pppuVar8 = local_78;
        }
        (*(code *)(*pppuVar8)[2])(pppuVar8);
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar7 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
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
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443d21a8 FUN_1443d21a8 body=902 status=ok
// SIG undefined FUN_1443d21a8(void)

void FUN_1443d21a8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined4 uVar12;
  longlong lVar13;
  ulonglong unaff_RBP;
  int iVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_d8 [44];
  int local_ac;
  longlong *local_a8;
  longlong local_a0;
  undefined8 *local_98;
  int local_90;
  longlong *local_88;
  longlong *local_80;
  undefined **local_78;
  uint local_70;
  undefined4 uStack_6c;
  byte local_60;
  longlong local_58;
  ulonglong local_48;
  
  lVar5 = DAT_14cbf5710;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar15 = (longlong)DAT_14cbf5718;
  if (lVar15 != 0) {
    local_a0 = param_1 + 0x40;
    lVar13 = 0;
    do {
      uVar3 = *(undefined1 *)(lVar5 + lVar13);
      unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),uVar3);
      FUN_148fcdaa6(*(undefined8 *)(param_1 + 0x70),&local_78,unaff_RBP & 0xffffffff);
      if ((&DAT_149fc1b6e)[local_60] == '\x01') {
        if (((longlong *)CONCAT44(uStack_6c,local_70) != (longlong *)0x0) &&
           (cVar8 = (**(code **)(*(longlong *)CONCAT44(uStack_6c,local_70) + 0x28))(), cVar8 != '\0'
           )) {
LAB_1443d228e:
          plVar10 = (longlong *)FUN_148fcd308(param_1,unaff_RBP & 0xffffffff);
          (**(code **)(*plVar10 + 0x28))(plVar10,&local_88);
          if (local_88 != (longlong *)0x0) {
            local_a8 = local_88;
            local_98 = (undefined8 *)0x0;
            local_90 = 0;
            FUN_1446efa72(&local_98,0,3,0x10);
            puVar6 = local_98;
            local_90 = 3;
            *local_98 = &PTR_LAB_14ba60520;
            *(undefined1 *)(local_98 + 1) = uVar3;
            LOCK();
            UNLOCK();
            lVar11 = DAT_14c758608 + 1;
            lVar7 = DAT_14c758608 + 1;
            if (lVar11 == 0) {
              LOCK();
              UNLOCK();
              lVar11 = DAT_14c758608 + 2;
              lVar7 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar7;
            local_98[2] = lVar11;
            *local_98 = &PTR_FUN_14ba604b0;
            local_98[3] = 0;
            if (param_1 == 0) {
              iVar9 = 0;
            }
            else {
              uVar4 = *(uint *)(param_1 + 0xc);
              *(uint *)(local_98 + 3) = uVar4;
              if ((int)uVar4 < DAT_14c9647dc) {
                unaff_RBP = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
              }
              else {
                unaff_RBP = 0;
              }
              iVar9 = *(int *)(unaff_RBP + 0x10);
              if (*(int *)(unaff_RBP + 0x10) == 0) {
                LOCK();
                iVar9 = DAT_14c964868 + 1;
                UNLOCK();
                iVar14 = DAT_14c964868 + 1;
                bVar16 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar9;
                if (bVar16) {
                  local_ac = iVar14;
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar14);
                  iVar14 = local_ac;
                }
                LOCK();
                iVar9 = *(int *)(unaff_RBP + 0x10);
                bVar16 = iVar9 == 0;
                if (bVar16) {
                  *(int *)(unaff_RBP + 0x10) = iVar14;
                  iVar9 = 0;
                }
                UNLOCK();
                if (bVar16) {
                  iVar9 = iVar14;
                }
              }
            }
            *(int *)((longlong)puVar6 + 0x1c) = iVar9;
            puVar6[4] = FUN_1443d2530;
            *(undefined4 *)(puVar6 + 5) = 0;
            uVar12 = 0xffffffff;
            if ((((*(int *)(param_1 + 0xe0) != 0) &&
                 (uVar4 = *(uint *)(param_1 + 0xdc), -1 < (int)uVar4)) &&
                ((int)uVar4 < DAT_14c9647dc)) &&
               (((plVar10 = (longlong *)
                            ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
                 plVar10 != (longlong *)0x0 && ((int)plVar10[2] == *(int *)(param_1 + 0xe0))) &&
                (((*(uint *)(plVar10 + 1) & 0x10200000) == 0 && (*plVar10 != 0)))))) {
              uVar12 = *(undefined4 *)(*plVar10 + 0xe0);
            }
            (**(code **)(*local_a8 + 0xe8))(local_a8,uVar12,local_a0,&local_98);
            if (local_90 != 0) {
              if (local_98 == (undefined8 *)0x0) goto LAB_1443d2442;
              (**(code **)*local_98)(local_98,0);
              FUN_1446efa72(&local_98,0,0,0x10);
              local_90 = 0;
            }
            if (local_98 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
          }
LAB_1443d2442:
          plVar10 = local_80;
          if (local_80 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_80 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
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
      }
      else if ((local_70 & 0xffffff) != 0) goto LAB_1443d228e;
      local_78 = &PTR_FUN_14a5af930;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      local_78 = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_60])(&local_70);
      lVar13 = lVar13 + 1;
    } while (lVar15 != lVar13);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443d2530 FUN_1443d2530 body=932 status=ok
// SIG undefined FUN_1443d2530(void)

void FUN_1443d2530(longlong *param_1,undefined4 param_2,ulonglong param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined8 unaff_R15;
  undefined8 *puVar10;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined1 local_150;
  undefined1 local_141;
  longlong *local_140;
  undefined4 local_134;
  undefined8 local_130;
  longlong *local_128;
  undefined1 *local_120;
  longlong *local_118;
  longlong *local_110;
  longlong *local_108;
  ulonglong uStack_100;
  undefined8 local_f0;
  longlong *local_e8;
  undefined4 local_df;
  undefined3 uStack_db;
  undefined **local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  byte local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined1 *local_a8 [2];
  longlong *local_98;
  longlong local_88 [5];
  ulonglong local_60;
  
  uVar7 = (undefined4)param_3;
  puVar10 = (undefined8 *)CONCAT71((int7)((ulonglong)unaff_R15 >> 8),param_6);
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_140 = param_1;
  if ((char)param_3 != '\0') {
    local_108 = (longlong *)0x0;
    uStack_100 = 0;
    plVar5 = (longlong *)FUN_148fdc7e6(0,(ulonglong)puVar10 & 0xffffffff);
    local_141 = (undefined1)(param_3 & 0xffffffff);
    if (plVar5 == (longlong *)0x0) {
      local_120 = (undefined1 *)0x0;
    }
    else {
      (**(code **)(*plVar5 + 0x10))(plVar5,&local_120);
    }
    (**(code **)(*local_140 + 0x180))();
    local_a8[0] = local_120;
    plVar5 = (longlong *)FUN_1401e3228();
    (**(code **)(*plVar5 + 0x28))(plVar5,&local_118);
    local_134 = param_2;
    local_130 = param_4;
    (**(code **)(*local_118 + 0x1c8))(local_118,param_2,param_4,&local_108);
    uVar8 = CONCAT71((int7)((param_3 & 0xffffffff) >> 8),param_6);
    if ((longlong)(int)uStack_100 != 0) {
      local_128 = local_140 + 0x3e;
      plVar9 = local_108 + (longlong)(int)uStack_100 * 2;
      puVar10 = &local_d0;
      plVar5 = local_108;
      do {
        lVar3 = *plVar5;
        lVar4 = plVar5[1];
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
          UNLOCK();
        }
        local_a8[0] = (undefined1 *)0x0;
        local_98 = (longlong *)0x0;
        local_98 = (longlong *)FUN_14001cc68(0x28,8);
        *local_98 = (longlong)&PTR_FUN_14ba60750;
        local_98[1] = lVar3;
        local_98[2] = lVar4;
        uVar8 = CONCAT71((int7)((ulonglong)lVar4 >> 8),param_6);
        *(undefined1 *)(local_98 + 3) = param_6;
        *(uint *)((longlong)local_98 + 0x1c) = CONCAT31(uStack_db,local_df._3_1_);
        *(undefined4 *)((longlong)local_98 + 0x19) = local_df;
        local_98[4] = (longlong)local_128;
        if (local_98 + 1 != (longlong *)0x0) {
          local_a8[0] = &LAB_149004702;
        }
        (**(code **)(*(longlong *)*plVar5 + 8))((longlong *)*plVar5,&local_f0);
        local_d0 = local_f0;
        local_c8 = local_e8;
        if (local_e8 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_e8 + 1) = (int)local_e8[1] + 1;
          UNLOCK();
        }
        local_c0 = 0;
        local_d8 = &PTR_FUN_14a5af930;
        local_b8 = 0;
        uStack_b0 = 0;
        local_158 = CONCAT71(local_158._1_7_,1);
        FUN_1443d067e(local_140,&local_d8,uVar8 & 0xffffffff,local_a8);
        local_d8 = &PTR_FUN_14a5af930;
        if (local_b8 != 0) {
          FUN_1400020a8();
        }
        local_d8 = &PTR_FUN_14a184370;
        (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_c0])(puVar10);
        plVar6 = local_e8;
        if (local_e8 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_e8 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_e8)(local_e8);
            LOCK();
            piVar2 = (int *)((longlong)plVar6 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
        }
        if (local_a8[0] != (undefined1 *)0x0) {
          plVar6 = local_98;
          if (local_98 == (longlong *)0x0) {
            plVar6 = local_88;
          }
          (**(code **)(*plVar6 + 0x10))();
        }
        plVar5 = plVar5 + 2;
      } while (plVar5 != plVar9);
    }
    (**(code **)(*local_140 + 0x338))(local_140,uVar8 & 0xffffffff,&local_108);
    if (local_110 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_110 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_110)(local_110);
        LOCK();
        piVar2 = (int *)((longlong)local_110 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_110 + 0x10))(local_110);
        }
      }
    }
    FUN_140b6c1c2(local_108,uStack_100 & 0xffffffff);
    param_4 = local_130;
    if (local_108 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    uVar7 = (undefined4)CONCAT71((int7)(uVar8 >> 8),local_141);
    puVar10 = (undefined8 *)CONCAT71((int7)((ulonglong)puVar10 >> 8),param_6);
    param_2 = local_134;
  }
  plVar5 = local_140;
  FUN_148fe24de(local_140,(ulonglong)puVar10 & 0xffffffff);
  local_150 = SUB81(puVar10,0);
  local_158 = param_5;
  (**(code **)(*plVar5 + 0x300))(plVar5,param_2,uVar7,param_4);
  if ((local_60 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443d28d6 FUN_1443d28d6 body=997 status=ok
// SIG undefined FUN_1443d28d6(void)

void FUN_1443d28d6(longlong *param_1,undefined8 *param_2,ulonglong param_3,undefined8 param_4,
                  undefined1 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  byte bVar10;
  undefined4 uVar11;
  undefined1 auStack_168 [32];
  undefined1 local_148;
  byte local_131;
  longlong *local_130;
  undefined8 *local_128;
  undefined8 local_120;
  longlong *local_118;
  ulonglong uStack_110;
  undefined **local_108;
  longlong *local_100;
  longlong *local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  undefined4 local_df;
  undefined3 uStack_db;
  undefined **local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  byte local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined **local_a8 [2];
  longlong *local_98;
  byte local_90;
  longlong local_88 [5];
  ulonglong local_60;
  longlong *plVar12;
  
  plVar12 = (longlong *)(param_3 & 0xffffffff);
  uVar11 = (undefined4)param_3;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_130 = param_1;
  FUN_148fcdaa6(param_1[0xe],local_a8,param_5);
  uVar6 = FUN_14127b0d4(local_a8);
  bVar5 = (**(code **)*param_2)(param_2,uVar6);
  local_a8[0] = &PTR_FUN_14a5af930;
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  local_a8[0] = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_90])();
  bVar10 = (byte)plVar12;
  if ((bVar5 & bVar10) == 1) {
    plVar7 = (longlong *)FUN_148fdc7e6();
    local_131 = bVar10;
    local_120 = param_4;
    if (plVar7 == (longlong *)0x0) {
      local_108 = (undefined **)0x0;
    }
    else {
      (**(code **)(*plVar7 + 0x10))(plVar7,&local_108);
    }
    plVar7 = local_130;
    (**(code **)(*local_130 + 0x180))(local_130);
    local_a8[0] = local_108;
    plVar8 = (longlong *)FUN_1401e3228();
    (**(code **)(*plVar8 + 0x28))(plVar8,&local_100);
    (**(code **)(*local_100 + 0x220))(local_100,plVar7);
    local_118 = (longlong *)0x0;
    uStack_110 = 0;
    local_128 = param_2;
    (**(code **)(*local_100 + 0x278))(local_100,param_2,&local_118);
    if ((longlong)(int)uStack_110 != 0) {
      plVar7 = local_130 + 0x41;
      plVar8 = local_118 + (longlong)(int)uStack_110 * 2;
      plVar12 = local_118;
      do {
        lVar3 = *plVar12;
        lVar4 = plVar12[1];
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
          UNLOCK();
        }
        local_a8[0] = (undefined **)0x0;
        local_98 = (longlong *)0x0;
        local_98 = (longlong *)FUN_14001cc68(0x28,8);
        *local_98 = (longlong)&PTR_FUN_14ba60770;
        local_98[1] = lVar3;
        local_98[2] = lVar4;
        *(undefined1 *)(local_98 + 3) = param_5;
        *(uint *)((longlong)local_98 + 0x1c) = CONCAT31(uStack_db,local_df._3_1_);
        *(undefined4 *)((longlong)local_98 + 0x19) = local_df;
        local_98[4] = (longlong)plVar7;
        if (local_98 + 1 != (longlong *)0x0) {
          local_a8[0] = (undefined **)&LAB_149004962;
        }
        (**(code **)(*(longlong *)*plVar12 + 8))((longlong *)*plVar12,&local_f0);
        local_d0 = local_f0;
        local_c8 = local_e8;
        if (local_e8 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_e8 + 1) = (int)local_e8[1] + 1;
          UNLOCK();
        }
        local_c0 = 0;
        local_d8 = &PTR_FUN_14a5af930;
        local_b8 = 0;
        uStack_b0 = 0;
        local_148 = 1;
        FUN_1443d067e(local_130,&local_d8,param_5,local_a8);
        local_d8 = &PTR_FUN_14a5af930;
        if (local_b8 != 0) {
          FUN_1400020a8();
        }
        local_d8 = &PTR_FUN_14a184370;
        (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_c0])(&local_d0);
        plVar9 = local_e8;
        if (local_e8 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_e8 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_e8)(local_e8);
            LOCK();
            piVar2 = (int *)((longlong)plVar9 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
        if (local_a8[0] != (undefined **)0x0) {
          plVar9 = local_98;
          if (local_98 == (longlong *)0x0) {
            plVar9 = local_88;
          }
          (**(code **)(*plVar9 + 0x10))();
        }
        plVar12 = plVar12 + 2;
      } while (plVar12 != plVar8);
    }
    (**(code **)(*local_130 + 0x340))(local_130,param_5,&local_118);
    FUN_145cf835c(local_118,uStack_110 & 0xffffffff);
    if (local_118 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    param_4 = local_120;
    uVar11 = (undefined4)CONCAT71((int7)((ulonglong)plVar12 >> 8),local_131);
    param_2 = local_128;
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_f8 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*local_f8)(local_f8);
        LOCK();
        piVar2 = (int *)((longlong)local_f8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        param_2 = local_128;
        if (*piVar2 == 0) {
          (**(code **)(*local_f8 + 0x10))(local_f8);
          param_2 = local_128;
        }
      }
    }
  }
  local_148 = param_5;
  (**(code **)(*local_130 + 0x308))(local_130,param_2,uVar11,param_4);
  if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443d2cbc FUN_1443d2cbc body=1021 status=ok
// SIG undefined FUN_1443d2cbc(void)

void FUN_1443d2cbc(undefined **param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  longlong *plVar1;
  int *piVar2;
  undefined **ppuVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  byte bVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined **ppuVar11;
  longlong *plVar12;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined1 local_140;
  byte local_131;
  undefined **local_130;
  undefined8 *local_128;
  undefined8 local_120;
  longlong *local_118;
  ulonglong uStack_110;
  undefined **local_108;
  longlong *local_100;
  longlong *local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  undefined4 local_df;
  undefined3 uStack_db;
  undefined **local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  byte local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined **local_a8 [2];
  longlong *local_98;
  byte local_90;
  longlong local_88 [5];
  ulonglong local_60;
  
  bVar6 = (byte)param_4;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_130 = param_1;
  FUN_148fcdaa6(param_1[0xe],local_a8,param_6);
  uVar8 = FUN_14127b0d4(local_a8);
  bVar7 = (**(code **)*param_2)(param_2,uVar8);
  local_a8[0] = &PTR_FUN_14a5af930;
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  local_a8[0] = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_90])();
  if ((bVar7 & bVar6) == 1) {
    plVar9 = (longlong *)FUN_148fdc7e6();
    local_131 = bVar6;
    if (plVar9 == (longlong *)0x0) {
      local_108 = (undefined **)0x0;
    }
    else {
      (**(code **)(*plVar9 + 0x10))(plVar9,&local_108);
    }
    ppuVar11 = local_130;
    (**(code **)(*local_130 + 0x180))(local_130);
    local_a8[0] = local_108;
    plVar9 = (longlong *)FUN_1401e3228();
    (**(code **)(*plVar9 + 0x28))(plVar9,&local_100);
    (**(code **)(*local_100 + 0x200))(local_100,ppuVar11);
    local_118 = (longlong *)0x0;
    uStack_110 = 0;
    local_128 = param_2;
    local_120 = param_3;
    (**(code **)(*local_100 + 0x230))(local_100,param_2,param_3,&local_118);
    if ((longlong)(int)uStack_110 != 0) {
      ppuVar3 = local_130 + 0x44;
      plVar12 = local_118 + (longlong)(int)uStack_110 * 2;
      plVar9 = local_118;
      do {
        lVar4 = *plVar9;
        lVar5 = plVar9[1];
        if (lVar5 != 0) {
          LOCK();
          *(int *)(lVar5 + 0xc) = *(int *)(lVar5 + 0xc) + 1;
          UNLOCK();
        }
        local_a8[0] = (undefined **)0x0;
        local_98 = (longlong *)0x0;
        local_98 = (longlong *)FUN_14001cc68(0x28,8);
        *local_98 = (longlong)&PTR_FUN_14ba60790;
        local_98[1] = lVar4;
        local_98[2] = lVar5;
        *(undefined1 *)(local_98 + 3) = param_6;
        *(uint *)((longlong)local_98 + 0x1c) = CONCAT31(uStack_db,local_df._3_1_);
        *(undefined4 *)((longlong)local_98 + 0x19) = local_df;
        local_98[4] = (longlong)ppuVar3;
        if (local_98 + 1 != (longlong *)0x0) {
          local_a8[0] = (undefined **)&LAB_149004b00;
        }
        (**(code **)(*(longlong *)*plVar9 + 8))((longlong *)*plVar9,&local_f0);
        local_d0 = local_f0;
        local_c8 = local_e8;
        if (local_e8 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_e8 + 1) = (int)local_e8[1] + 1;
          UNLOCK();
        }
        local_c0 = 0;
        ppuVar11 = &PTR_FUN_14a5af930;
        local_d8 = &PTR_FUN_14a5af930;
        local_b8 = 0;
        uStack_b0 = 0;
        local_148 = CONCAT71(local_148._1_7_,1);
        FUN_1443d067e(local_130,&local_d8,param_6,local_a8);
        local_d8 = &PTR_FUN_14a5af930;
        if (local_b8 != 0) {
          FUN_1400020a8();
        }
        local_d8 = &PTR_FUN_14a184370;
        (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_c0])(&local_d0);
        plVar10 = local_e8;
        if (local_e8 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_e8 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_e8)(local_e8);
            LOCK();
            piVar2 = (int *)((longlong)plVar10 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
        }
        if (local_a8[0] != (undefined **)0x0) {
          plVar10 = local_98;
          if (local_98 == (longlong *)0x0) {
            plVar10 = local_88;
          }
          (**(code **)(*plVar10 + 0x10))();
        }
        plVar9 = plVar9 + 2;
      } while (plVar9 != plVar12);
    }
    (**(code **)(*local_130 + 0x348))(local_130,param_6,&local_118);
    FUN_148fa218b(local_118,uStack_110 & 0xffffffff);
    if (local_118 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    param_4 = (undefined4)CONCAT71((int7)((ulonglong)ppuVar11 >> 8),local_131);
    param_3 = local_120;
    param_2 = local_128;
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_f8 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_f8)(local_f8);
        LOCK();
        piVar2 = (int *)((longlong)local_f8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        param_3 = local_120;
        param_2 = local_128;
        if (*piVar2 == 0) {
          (**(code **)(*local_f8 + 0x10))(local_f8);
          param_3 = local_120;
          param_2 = local_128;
        }
      }
    }
  }
  local_140 = param_6;
  local_148 = param_5;
  (**(code **)(*local_130 + 0x310))(local_130,param_2,param_3,param_4);
  if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443d30ba FUN_1443d30ba body=99 status=ok
// SIG undefined FUN_1443d30ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1443d30ba(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    plVar3 = (longlong *)(param_1 + 0x60);
    if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x50);
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14a5af930;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14a184370;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x28)) {
  case 1:
    return;
  case 2:
    *(code **)(param_1 + 0x18) = switchD_1458da17c::caseD_0;
    *(undefined **)(param_1 + 0x20) = (undefined *)0x1470afba2;
    LOCK();
    FUN_1470afba4 = FUN_1470afba4 + 1;
    UNLOCK();
    return;
  case 3:
    *(undefined4 *)(param_1 + 0x18) = 0x4053b5c6;
    return;
  }
  plVar3 = *(longlong **)(param_1 + 0x20);
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
                    /* WARNING: Could not recover jumptable at 0x00014053b5f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1443d311e FUN_1443d311e body=187 status=ok
// SIG undefined FUN_1443d311e(void)

void FUN_1443d311e(longlong param_1,uint param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x90) != *(int *)(param_1 + 0xbc)) {
    lVar4 = param_1 + 0xc0;
    if (*(longlong *)(param_1 + 200) != 0) {
      lVar4 = *(longlong *)(param_1 + 200);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0xd0) - 1U & param_2 & 0xff) * 4);
    if (iVar3 != -1) {
      do {
        lVar4 = *(longlong *)(param_1 + 0x88) + (longlong)iVar3 * 0x80;
        if (*(char *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar3 * 0x80) == (char)param_2) {
          if ((lVar4 + 8U & 0xfffffffffffffff7) == 0) {
            return;
          }
          if (((*(longlong *)(lVar4 + 0x48) != 0) &&
              (plVar2 = *(longlong **)(lVar4 + 0x50), plVar2 != (longlong *)0x0)) &&
             (0 < (int)plVar2[1])) {
            *(undefined8 *)(lVar4 + 0x48) = 0;
            *(undefined8 *)(lVar4 + 0x50) = 0;
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar2 + 0x10))();
            }
          }
          FUN_149006a52(param_1 + 0x170,param_2);
          return;
        }
        iVar3 = *(int *)(lVar4 + 0x78);
      } while (iVar3 != -1);
    }
  }
  return;
}



// FUNCTION 1443d31da FUN_1443d31da body=187 status=ok
// SIG undefined FUN_1443d31da(void)

void FUN_1443d31da(longlong param_1,uint param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x90) != *(int *)(param_1 + 0xbc)) {
    lVar4 = param_1 + 0xc0;
    if (*(longlong *)(param_1 + 200) != 0) {
      lVar4 = *(longlong *)(param_1 + 200);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0xd0) - 1U & param_2 & 0xff) * 4);
    if (iVar3 != -1) {
      do {
        lVar4 = *(longlong *)(param_1 + 0x88) + (longlong)iVar3 * 0x80;
        if (*(char *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar3 * 0x80) == (char)param_2) {
          if ((lVar4 + 8U & 0xfffffffffffffff7) == 0) {
            return;
          }
          if (((*(longlong *)(lVar4 + 0x48) != 0) &&
              (plVar2 = *(longlong **)(lVar4 + 0x50), plVar2 != (longlong *)0x0)) &&
             (0 < (int)plVar2[1])) {
            *(undefined8 *)(lVar4 + 0x48) = 0;
            *(undefined8 *)(lVar4 + 0x50) = 0;
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar2 + 0x10))();
            }
          }
          FUN_149006a52(param_1 + 0x158,param_2);
          return;
        }
        iVar3 = *(int *)(lVar4 + 0x78);
      } while (iVar3 != -1);
    }
  }
  return;
}



// FUNCTION 1443d3295 FUN_1443d3295 body=55 status=ok
// SIG undefined FUN_1443d3295(void)

void FUN_1443d3295(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf57e0 == 0) {
    uVar1 = FUN_1410510fd();
    DAT_14cbf57e0 = FUN_14171c317(FUN_146671b27,uVar1,L"ESocialSubsystem");
  }
  return;
}



// FUNCTION 1443d32cc FUN_1443d32cc body=55 status=ok
// SIG undefined FUN_1443d32cc(void)

void FUN_1443d32cc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf57f8 == 0) {
    uVar1 = FUN_1410510fd();
    DAT_14cbf57f8 = FUN_14171c317(FUN_146671b56,uVar1,L"ESocialRelationship");
  }
  return;
}



// FUNCTION 1443d3303 FUN_1443d3303 body=55 status=ok
// SIG undefined FUN_1443d3303(void)

void FUN_1443d3303(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf5810 == 0) {
    uVar1 = FUN_1410510fd();
    DAT_14cbf5810 = FUN_14171c317(FUN_146671531,uVar1,L"ECrossplayPreference");
  }
  return;
}



// FUNCTION 1443d333a FUN_1443d333a body=55 status=ok
// SIG undefined FUN_1443d333a(void)

void FUN_1443d333a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf5840 == 0) {
    uVar1 = FUN_1410510fd();
    DAT_14cbf5840 = FUN_14171c317(FUN_146671bee,uVar1,L"EPlatformIconDisplayRule");
  }
  return;
}



// FUNCTION 1443d3372 FUN_1443d3372 body=383 status=ok
// SIG undefined FUN_1443d3372(void)

void FUN_1443d3372(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  
  if (((*(char *)(param_1 + 0x80) == '\0') && (*(int *)(param_1 + 0x28) == 0)) &&
     (*(int *)(param_1 + 0x90) != *(int *)(param_1 + 0xbc))) {
    piVar3 = (int *)(param_1 + 0xc0);
    if (*(int **)(param_1 + 200) != (int *)0x0) {
      piVar3 = *(int **)(param_1 + 200);
    }
    iVar4 = *piVar3;
    if (iVar4 != -1) {
      do {
        lVar1 = *(longlong *)(param_1 + 0x88) + (longlong)iVar4 * 0x80;
        if (*(char *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar4 * 0x80) == '\0') {
          if ((lVar1 + 8U & 0xfffffffffffffff7) == 0) {
            return;
          }
          if (((*(longlong *)(lVar1 + 0x38) != 0) && (*(longlong *)(lVar1 + 0x40) != 0)) &&
             (0 < *(int *)(*(longlong *)(lVar1 + 0x40) + 8))) {
            *(undefined1 *)(param_1 + 0x80) = 1;
            lVar1 = *(longlong *)(param_1 + 0xe8);
            iVar4 = *(int *)(param_1 + 0xf0);
            *(undefined8 *)(param_1 + 0xe8) = 0;
            *(undefined8 *)(param_1 + 0xf0) = 0;
            FUN_149005b2a(0,0);
            *(undefined4 *)(param_1 + 0xf0) = 0;
            if ((longlong)iVar4 != 0) {
              lVar5 = 0;
              do {
                if ((*(int *)(lVar1 + 8 + lVar5) != 0) &&
                   (plVar2 = *(longlong **)(lVar1 + lVar5), plVar2 != (longlong *)0x0)) {
                  (**(code **)(*plVar2 + 0x60))(plVar2,param_1);
                }
                lVar5 = lVar5 + 0x10;
              } while ((longlong)iVar4 << 4 != lVar5);
            }
            FUN_149005b2a(lVar1,iVar4);
            if (lVar1 == 0) {
              return;
            }
            FUN_1400020a8(lVar1);
            return;
          }
          iVar4 = *(int *)(param_1 + 0xf4);
          FUN_149005b2a(*(undefined8 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xf0));
          *(undefined4 *)(param_1 + 0xf0) = 0;
          if ((iVar4 < 0) && (*(int *)(param_1 + 0xf4) != 0)) {
            FUN_149005cb4(param_1 + 0xe8);
          }
          FUN_148fe28f0(*(undefined8 *)(param_1 + 0x20),param_1);
          return;
        }
        iVar4 = *(int *)(lVar1 + 0x78);
      } while (iVar4 != -1);
    }
  }
  return;
}



// FUNCTION 1443d34f2 FUN_1443d34f2 body=1549 status=ok
// SIG undefined FUN_1443d34f2(void)

undefined8 FUN_1443d34f2(longlong *param_1,undefined8 **param_2)

{
  int *piVar1;
  uint uVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  bool bVar12;
  undefined1 auStack_d8 [32];
  undefined8 **local_b8;
  undefined8 **local_b0;
  longlong local_a8 [2];
  undefined8 *local_98;
  int local_90;
  longlong *local_88;
  longlong *local_80;
  undefined **local_78;
  int local_70;
  byte local_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  cVar4 = FUN_148fd006a();
  if (cVar4 != '\0') {
    plVar5 = (longlong *)FUN_148fcd308(param_1[4],0);
    (**(code **)(*plVar5 + 0x28))(plVar5,&local_88);
    if (*(int *)(param_2 + 1) < 2) {
      (**(code **)(*param_1 + 0x2a0))(param_1,&local_78);
      if (local_78 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      bVar12 = true;
      if (1 < local_70) {
        local_98 = (undefined8 *)0x0;
        local_90 = 0;
        FUN_1446efa72(&local_98,0,3,0x10);
        puVar3 = local_98;
        local_90 = 3;
        *local_98 = &PTR_LAB_14ba60960;
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 1;
        lVar10 = DAT_14c758608 + 1;
        if (lVar7 == 0) {
          LOCK();
          UNLOCK();
          lVar7 = DAT_14c758608 + 2;
          lVar10 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar10;
        local_98[2] = lVar7;
        *local_98 = &PTR_FUN_14ba608f0;
        local_98[3] = 0;
        iVar9 = 0;
        if (param_1 != (longlong *)0x0) {
          uVar2 = *(uint *)((longlong)param_1 + 0xc);
          *(uint *)(local_98 + 3) = uVar2;
          if ((int)uVar2 < DAT_14c9647dc) {
            lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
          }
          else {
            lVar10 = 0;
          }
          iVar9 = *(int *)(lVar10 + 0x10);
          if (*(int *)(lVar10 + 0x10) == 0) {
            LOCK();
            iVar9 = DAT_14c964868 + 1;
            UNLOCK();
            iVar11 = DAT_14c964868 + 1;
            bVar12 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar9;
            if (bVar12) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar11);
            }
            LOCK();
            iVar9 = *(int *)(lVar10 + 0x10);
            bVar12 = iVar9 == 0;
            if (bVar12) {
              *(int *)(lVar10 + 0x10) = iVar11;
              iVar9 = 0;
            }
            UNLOCK();
            if (bVar12) {
              iVar9 = iVar11;
            }
          }
        }
        *(int *)((longlong)puVar3 + 0x1c) = iVar9;
        puVar3[4] = &LAB_148fe3130;
        FUN_140056680(local_a8,L"default");
        FUN_148fcdaa6(param_1,&local_78,0);
        uVar6 = FUN_14127b0d4(&local_78);
        iVar9 = *(int *)(param_1[4] + 0xe0);
        uVar8 = 0xffffffff;
        if (((iVar9 != 0) && (uVar2 = *(uint *)(param_1[4] + 0xdc), -1 < (int)uVar2)) &&
           (((int)uVar2 < DAT_14c9647dc &&
            ((((plVar5 = (longlong *)
                         ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
               plVar5 != (longlong *)0x0 && ((int)plVar5[2] == iVar9)) &&
              ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)) && (*plVar5 != 0)))))) {
          uVar8 = *(undefined4 *)(*plVar5 + 0xe0);
        }
        local_b8 = &local_98;
        (**(code **)(*local_88 + 0x118))(local_88,uVar8,uVar6,local_a8);
        goto LAB_1443d3906;
      }
    }
    else {
      local_98 = (undefined8 *)0x0;
      local_90 = 0;
      FUN_1446efa72(&local_98,0,3,0x10);
      puVar3 = local_98;
      local_90 = 3;
      *local_98 = &PTR_LAB_14ba60960;
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 1;
      lVar10 = DAT_14c758608 + 1;
      if (lVar7 == 0) {
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 2;
        lVar10 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar10;
      local_98[2] = lVar7;
      *local_98 = &PTR_FUN_14ba608f0;
      local_98[3] = 0;
      iVar9 = 0;
      if (param_1 != (longlong *)0x0) {
        uVar2 = *(uint *)((longlong)param_1 + 0xc);
        *(uint *)(local_98 + 3) = uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar10 = 0;
        }
        iVar9 = *(int *)(lVar10 + 0x10);
        if (*(int *)(lVar10 + 0x10) == 0) {
          LOCK();
          iVar9 = DAT_14c964868 + 1;
          UNLOCK();
          iVar11 = DAT_14c964868 + 1;
          bVar12 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar9;
          if (bVar12) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar11);
          }
          LOCK();
          iVar9 = *(int *)(lVar10 + 0x10);
          bVar12 = iVar9 == 0;
          if (bVar12) {
            *(int *)(lVar10 + 0x10) = iVar11;
            iVar9 = 0;
          }
          UNLOCK();
          if (bVar12) {
            iVar9 = iVar11;
          }
        }
      }
      *(int *)((longlong)puVar3 + 0x1c) = iVar9;
      puVar3[4] = &LAB_148fe3130;
      FUN_140056680(local_a8,L"default");
      FUN_148fcdaa6(param_1,&local_78,0);
      uVar6 = FUN_14127b0d4(&local_78);
      iVar9 = *(int *)(param_1[4] + 0xe0);
      uVar8 = 0xffffffff;
      if ((((iVar9 != 0) && (uVar2 = *(uint *)(param_1[4] + 0xdc), -1 < (int)uVar2)) &&
          ((int)uVar2 < DAT_14c9647dc)) &&
         (((plVar5 = (longlong *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
           plVar5 != (longlong *)0x0 && ((int)plVar5[2] == iVar9)) &&
          (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (*plVar5 != 0)))))) {
        uVar8 = *(undefined4 *)(*plVar5 + 0xe0);
      }
      local_b8 = param_2;
      local_b0 = &local_98;
      (**(code **)(*local_88 + 0x110))(local_88,uVar8,uVar6,local_a8);
LAB_1443d3906:
      local_78 = &PTR_FUN_14a5af930;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      local_78 = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_60])();
      if (local_a8[0] != 0) {
        FUN_1400020a8();
      }
      if (local_90 == 0) {
LAB_1443d3988:
        if (local_98 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_98 != (undefined8 *)0x0) {
        (**(code **)*local_98)(local_98,0);
        FUN_1446efa72(&local_98,0,0,0x10);
        local_90 = 0;
        goto LAB_1443d3988;
      }
      bVar12 = false;
    }
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_80 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
    uVar6 = 1;
    if (!bVar12) goto LAB_1443d3563;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
    DAT_14c844840 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    DAT_14c844840[1] = 0;
    *DAT_14c844840 = &PTR_FUN_149e19310;
    DAT_14c844840[2] = 0xffffffffffffffff;
    DAT_14c844840[3] = 0;
    DAT_14c844840[4] = 0;
    DAT_14c844840[5] = 0;
    if (DAT_14c844840 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = *(int *)(DAT_14c844840 + 1) + 1;
      UNLOCK();
    }
    DAT_14c844848 = 0;
    atexit(FUN_142760bef);
    _Init_thread_footer(&DAT_14c844850);
  }
  FUN_140498822(param_1 + 0x1f,&DAT_14c844840);
  uVar6 = 0;
LAB_1443d3563:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1443d3b00 FUN_1443d3b00 body=882 status=ok
// SIG undefined FUN_1443d3b00(void)

undefined8 * FUN_1443d3b00(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined **_Src;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined ***pppuVar5;
  longlong lVar6;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  wchar_t *local_c8;
  code *local_c0;
  undefined1 *local_b8;
  undefined ***local_b0;
  code *local_a8;
  code *local_a0;
  undefined **local_98;
  undefined8 uStack_90;
  undefined **local_80;
  int local_78;
  undefined4 local_74;
  byte local_68;
  longlong local_60;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_98 = (undefined **)0x0;
  uStack_90 = 0;
  if (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x70) == param_1) {
LAB_1443d3b37:
    FUN_143e6d8ca(&local_80);
  }
  else {
    lVar3 = FUN_148fd3674(0,0);
    lVar4 = FUN_148fd3674(param_1,1);
    if ((lVar4 != 0) && ((~*(uint *)(lVar4 + 0x10) & 5) == 0)) goto LAB_1443d3b37;
    if ((lVar3 != 0) && ((~*(uint *)(lVar3 + 0x10) & 5) == 0)) {
LAB_1443d3d8f:
      FUN_1489bdfca(lVar3,&local_80);
      iVar2 = local_78 + -1;
      if (local_78 == 0) {
        iVar2 = 0;
      }
      FUN_1402980a2(&local_98,local_80,iVar2);
      if (local_80 != (undefined **)0x0) {
        FUN_1400020a8();
      }
LAB_1443d3dca:
      local_78 = (int)uStack_90;
      goto LAB_1443d3b5d;
    }
    if ((lVar4 == 0) || ((*(byte *)(lVar4 + 0x10) & 1) == 0)) {
      if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0x10) & 1) != 0)) goto LAB_1443d3d8f;
      lVar3 = *(longlong *)(param_1 + 0x20);
      lVar4 = FUN_145988618();
      if (DAT_14c951858 == 0) {
        local_b0 = &local_80;
        local_80 = (undefined **)FUN_1449e2820;
        local_a0 = FUN_14081d0ea;
        local_a8 = FUN_14081d0ea;
        local_b8 = &LAB_1468c5283;
        local_c0 = FUN_142809da0;
        local_c8 = L"Engine";
        local_d0 = 0x400000000;
        local_d8 = 0x10000000;
        local_e0 = 8;
        local_e8 = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar3 = *(longlong *)(lVar3 + 0x20);
      if (lVar3 == 0) {
        lVar6 = 0;
      }
      else {
        do {
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
             (lVar6 = lVar3,
             *(longlong *)
              (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar4 + 0x38) * 8) != lVar4 + 0x30)) {
            lVar6 = 0;
          }
        } while ((lVar6 == 0) && (lVar3 = *(longlong *)(lVar3 + 0x20), lVar3 != 0));
      }
      lVar3 = FUN_148fde686(lVar6,0);
      if (lVar3 != 0) {
        FUN_148fcdaa6(param_1,&local_80,0);
        lVar3 = FUN_148fd8170(lVar3,&local_80);
        local_80 = &PTR_FUN_14a5af930;
        if (local_60 != 0) {
          FUN_1400020a8();
        }
        local_80 = &PTR_FUN_14a184370;
        (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_68])();
        if (lVar3 != 0) {
          uVar1 = *(uint *)(*(longlong *)(lVar3 + 0x40) + 0x30);
          if ((1 < (int)uVar1) &&
             (pppuVar5 = (undefined ***)(*(longlong *)(lVar3 + 0x40) + 0x28), &local_98 != pppuVar5)
             ) {
            _Src = *pppuVar5;
            uStack_90 = CONCAT44(uStack_90._4_4_,uVar1);
            FUN_1446dd670(&local_98,(ulonglong)uVar1,uStack_90._4_4_);
            memcpy(local_98,_Src,(ulonglong)uVar1 * 2);
          }
        }
      }
      goto LAB_1443d3dca;
    }
    FUN_143e6d8ca(&local_80);
    if (local_98 != (undefined **)0x0) {
      FUN_1400020a8();
    }
  }
  uStack_90 = CONCAT44(local_74,local_78);
  local_98 = local_80;
LAB_1443d3b5d:
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[10] = 0;
  if (1 < local_78) {
    FUN_148fd279e(&local_80,&local_98);
    FUN_148fe8daa(param_2,&local_80);
    FUN_1458ea6a8(&local_80);
  }
  if (local_98 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1443d3e74 FUN_1443d3e74 body=714 status=ok
// SIG undefined FUN_1443d3e74(void)

longlong * FUN_1443d3e74(longlong *param_1,longlong *param_2,byte param_3,void **param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined4 local_150;
  undefined4 local_148;
  undefined8 local_140;
  wchar_t *local_138;
  code *local_130;
  undefined1 *local_128;
  code **local_120;
  code *local_118;
  code *local_110;
  longlong local_108;
  undefined8 local_100;
  undefined1 local_f8 [88];
  void *local_a0;
  int local_98;
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_178;
  (**(code **)(*param_1 + 0x2b8))(param_1,&local_a0);
  FUN_143e6d8ca(&local_108);
  FUN_148fd279e(local_f8,&local_108);
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  if (&local_a0 != param_4) {
    *(int *)(param_4 + 1) = local_98;
    if (local_98 == 0 && *(int *)((longlong)param_4 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_4 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_4,local_98);
      if (local_98 != 0) {
        memcpy(*param_4,local_a0,(longlong)local_98 * 2);
      }
    }
  }
  (**(code **)(*param_1 + 0x2c8))(param_1,&local_108,&local_a0);
  if (param_3 == 4) {
LAB_1443d402a:
    FUN_14020fad6(param_4,&DAT_149dfb77a);
    FUN_140056680(param_2,&DAT_149dfb77a);
  }
  else {
    if (param_3 == 1) {
      cVar1 = FUN_148fdde36(&local_a0);
LAB_1443d4002:
      if (cVar1 == '\0') goto LAB_1443d402a;
    }
    else if (param_3 != 0) {
      if ((param_3 & 0xfe) == 2) {
        lVar3 = param_1[4];
        lVar2 = FUN_145988618();
        if (DAT_14c951858 == 0) {
          local_120 = &local_48;
          local_48 = FUN_1449e2820;
          local_110 = FUN_14081d0ea;
          local_118 = FUN_14081d0ea;
          local_128 = &LAB_1468c5283;
          local_130 = FUN_142809da0;
          local_138 = L"Engine";
          local_140 = 0x400000000;
          local_148 = 0x10000000;
          local_150 = 8;
          local_158 = 0x50;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
        }
        lVar3 = *(longlong *)(lVar3 + 0x20);
        if (lVar3 == 0) {
          lVar4 = 0;
        }
        else {
          do {
            if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
               (lVar4 = lVar3,
               *(longlong *)
                (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar2 + 0x38) * 8) != lVar2 + 0x30)) {
              lVar4 = 0;
            }
          } while ((lVar4 == 0) && (lVar3 = *(longlong *)(lVar3 + 0x20), lVar3 != 0));
        }
        lVar3 = FUN_148fde686(lVar4,0);
        if ((lVar3 != 0) && (cVar1 = FUN_148fd7d4e(lVar3), cVar1 == '\0')) goto LAB_1443d402a;
      }
      cVar1 = FUN_148fdde36(&local_a0);
      if (param_3 != 2) {
        if (param_3 != 3) goto LAB_1443d402a;
        goto LAB_1443d4002;
      }
    }
    *param_2 = local_108;
    local_108 = 0;
    *(undefined4 *)(param_2 + 1) = (undefined4)local_100;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_100._4_4_;
    local_100 = 0;
  }
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  FUN_1458ea6a8(local_f8);
  FUN_1458ea6a8(&local_a0);
  if ((local_40 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1443d4150 FUN_1443d4150 body=451 status=ok
// SIG undefined FUN_1443d4150(void)

ulonglong FUN_1443d4150(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong **pplVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  undefined **local_58;
  longlong local_50;
  longlong *local_48;
  byte local_40;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar4 = (longlong *)FUN_148fcd308(*(undefined8 *)(param_1 + 0x20));
  if (plVar4 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    pplVar8 = &local_68;
    (**(code **)(*plVar4 + 0x28))(plVar4,pplVar8);
    if (local_68 == (longlong *)0x0) {
      bVar10 = false;
    }
    else {
      FUN_148fcdaa6(param_1,&local_58,param_2);
      if ((&DAT_149fc1b6e)[local_40] == '\x01') {
        lVar7 = local_50;
        if (local_48 == (longlong *)0x0) {
          plVar4 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)(local_48 + 1) = (int)local_48[1] + 1;
          UNLOCK();
          plVar4 = local_48;
        }
      }
      else {
        plVar4 = (longlong *)0x0;
        lVar7 = 0;
      }
      local_58 = &PTR_FUN_14a5af930;
      if (local_38 != 0) {
        FUN_1400020a8();
      }
      local_58 = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_40])();
      bVar10 = lVar7 != 0;
      pplVar8 = (longlong **)0x0;
      if (bVar10) {
        iVar2 = *(int *)(*(longlong *)(param_1 + 0x20) + 0xe0);
        uVar5 = 0xffffffff;
        if ((((iVar2 != 0) &&
             (uVar3 = *(uint *)(*(longlong *)(param_1 + 0x20) + 0xdc), -1 < (int)uVar3)) &&
            ((int)uVar3 < DAT_14c9647dc)) &&
           (((plVar9 = (longlong *)
                       ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
             plVar9 != (longlong *)0x0 && ((int)plVar9[2] == iVar2)) &&
            (((*(uint *)(plVar9 + 1) & 0x10200000) == 0 && (*plVar9 != 0)))))) {
          uVar5 = *(undefined4 *)(*plVar9 + 0xe0);
        }
        uVar3 = (**(code **)(*local_68 + 0x260))(local_68,uVar5,lVar7);
        pplVar8 = (longlong **)(ulonglong)uVar3;
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar4 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
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
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_60 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)local_60 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_60 + 0x10))(local_60);
        }
      }
    }
    uVar6 = CONCAT71((int7)((ulonglong)pplVar8 >> 8),(byte)pplVar8 & bVar10);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443d4314 FUN_1443d4314 body=451 status=ok
// SIG undefined FUN_1443d4314(void)

ulonglong FUN_1443d4314(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong **pplVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  undefined **local_58;
  longlong local_50;
  longlong *local_48;
  byte local_40;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar4 = (longlong *)FUN_148fcd308(*(undefined8 *)(param_1 + 0x20));
  if (plVar4 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    pplVar8 = &local_68;
    (**(code **)(*plVar4 + 0x28))(plVar4,pplVar8);
    if (local_68 == (longlong *)0x0) {
      bVar10 = false;
    }
    else {
      FUN_148fcdaa6(param_1,&local_58,param_2);
      if ((&DAT_149fc1b6e)[local_40] == '\x01') {
        lVar7 = local_50;
        if (local_48 == (longlong *)0x0) {
          plVar4 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)(local_48 + 1) = (int)local_48[1] + 1;
          UNLOCK();
          plVar4 = local_48;
        }
      }
      else {
        plVar4 = (longlong *)0x0;
        lVar7 = 0;
      }
      local_58 = &PTR_FUN_14a5af930;
      if (local_38 != 0) {
        FUN_1400020a8();
      }
      local_58 = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_40])();
      bVar10 = lVar7 != 0;
      pplVar8 = (longlong **)0x0;
      if (bVar10) {
        iVar2 = *(int *)(*(longlong *)(param_1 + 0x20) + 0xe0);
        uVar5 = 0xffffffff;
        if ((((iVar2 != 0) &&
             (uVar3 = *(uint *)(*(longlong *)(param_1 + 0x20) + 0xdc), -1 < (int)uVar3)) &&
            ((int)uVar3 < DAT_14c9647dc)) &&
           (((plVar9 = (longlong *)
                       ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
             plVar9 != (longlong *)0x0 && ((int)plVar9[2] == iVar2)) &&
            (((*(uint *)(plVar9 + 1) & 0x10200000) == 0 && (*plVar9 != 0)))))) {
          uVar5 = *(undefined4 *)(*plVar9 + 0xe0);
        }
        uVar3 = (**(code **)(*local_68 + 0x268))(local_68,uVar5,lVar7);
        pplVar8 = (longlong **)(ulonglong)uVar3;
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar4 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
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
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_60 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)local_60 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_60 + 0x10))(local_60);
        }
      }
    }
    uVar6 = CONCAT71((int7)((ulonglong)pplVar8 >> 8),(byte)pplVar8 & bVar10);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443d44d8 FUN_1443d44d8 body=404 status=ok
// SIG undefined FUN_1443d44d8(void)

undefined4 FUN_1443d44d8(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  longlong *local_68;
  longlong *local_60;
  undefined **local_58 [3];
  byte local_40;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar3 = FUN_148fcf75e();
  if (iVar3 == 2) {
    plVar5 = (longlong *)FUN_148fcd308(*(undefined8 *)(param_1 + 0x20),param_2);
    (**(code **)(*plVar5 + 0x28))(plVar5,&local_68);
    FUN_140056680(local_78,L"default");
    FUN_148fcdaa6(param_1,local_58,param_2);
    uVar6 = FUN_14127b0d4(local_58);
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x20) + 0xe0);
    uVar4 = 0xffffffff;
    if ((((iVar3 != 0) && (uVar2 = *(uint *)(*(longlong *)(param_1 + 0x20) + 0xdc), -1 < (int)uVar2)
         ) && ((int)uVar2 < DAT_14c9647dc)) &&
       (((plVar5 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
         plVar5 != (longlong *)0x0 && ((int)plVar5[2] == iVar3)) &&
        (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (*plVar5 != 0)))))) {
      uVar4 = *(undefined4 *)(*plVar5 + 0xe0);
    }
    uVar4 = (**(code **)(*local_68 + 0x108))(local_68,uVar4,uVar6,local_78);
    local_58[0] = &PTR_FUN_14a5af930;
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    local_58[0] = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_40])();
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_60 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)local_60 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_60 + 0x10))(local_60);
        }
      }
    }
  }
  else {
    uVar4 = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443d466e FUN_1443d466e body=403 status=ok
// SIG undefined FUN_1443d466e(void)

undefined4 FUN_1443d466e(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  longlong *local_68;
  longlong *local_60;
  undefined **local_58 [3];
  byte local_40;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar4 = FUN_148fcefaa();
  if (cVar4 == '\0') {
    uVar5 = 0;
  }
  else {
    plVar6 = (longlong *)FUN_148fcd308(*(undefined8 *)(param_1 + 0x20),param_2);
    (**(code **)(*plVar6 + 0x28))(plVar6,&local_68);
    FUN_140056680(local_78,L"default");
    FUN_148fcdaa6(param_1,local_58,param_2);
    uVar7 = FUN_14127b0d4(local_58);
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x20) + 0xe0);
    uVar5 = 0xffffffff;
    if ((((iVar2 != 0) && (uVar3 = *(uint *)(*(longlong *)(param_1 + 0x20) + 0xdc), -1 < (int)uVar3)
         ) && ((int)uVar3 < DAT_14c9647dc)) &&
       (((plVar6 = (longlong *)
                   ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
         plVar6 != (longlong *)0x0 && ((int)plVar6[2] == iVar2)) &&
        (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 && (*plVar6 != 0)))))) {
      uVar5 = *(undefined4 *)(*plVar6 + 0xe0);
    }
    uVar5 = (**(code **)(*local_68 + 0x140))(local_68,uVar5,uVar7,local_78);
    local_58[0] = &PTR_FUN_14a5af930;
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    local_58[0] = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_40])();
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_60 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)local_60 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_60 + 0x10))(local_60);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443d481c FUN_1443d481c body=428 status=ok
// SIG undefined FUN_1443d481c(void)

void FUN_1443d481c(longlong param_1,longlong *param_2,undefined4 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong *local_80;
  undefined **local_78;
  undefined8 local_70;
  longlong *local_68;
  byte local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  (**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,&local_88);
  local_70 = local_88;
  local_68 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
    UNLOCK();
  }
  local_60 = 0;
  local_78 = &PTR_FUN_14a5af930;
  local_58 = 0;
  uStack_50 = 0;
  lVar6 = FUN_148fe2c90(param_1,&local_78,param_3);
  local_78 = &PTR_FUN_14a5af930;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  local_78 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_60])(&local_70);
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_80 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  lVar2 = *param_2;
  plVar3 = *(longlong **)(lVar6 + 0x68);
  if (plVar3 == (longlong *)0x0) {
    lVar8 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar8 = 0;
    do {
      if (iVar5 == 0) goto LAB_1443d4950;
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
    lVar8 = *(longlong *)(lVar6 + 0x60);
    LOCK();
    plVar7 = plVar3 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
LAB_1443d4950:
  if (lVar2 != lVar8) {
    *(longlong *)(lVar6 + 0x60) = *param_2;
    plVar3 = (longlong *)param_2[1];
    plVar7 = *(longlong **)(lVar6 + 0x68);
    if (plVar7 != plVar3) {
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
        plVar7 = *(longlong **)(lVar6 + 0x68);
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
      *(longlong **)(lVar6 + 0x68) = plVar3;
    }
    FUN_1490069a4(param_1 + 0x188,param_3,1);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443d49ca FUN_1443d49ca body=396 status=ok
// SIG undefined FUN_1443d49ca(void)

void FUN_1443d49ca(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  longlong *local_78;
  undefined **local_70;
  undefined8 local_68;
  longlong *local_60;
  byte local_58;
  longlong local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  (**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,&local_80);
  local_68 = local_80;
  local_60 = local_78;
  if (local_78 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_78 + 1) = (int)local_78[1] + 1;
    UNLOCK();
  }
  local_58 = 0;
  local_70 = &PTR_FUN_14a5af930;
  local_50 = 0;
  uStack_48 = 0;
  lVar6 = FUN_148fe2c90(param_1,&local_70,param_3);
  local_70 = &PTR_FUN_14a5af930;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  local_70 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_58])(&local_68);
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_78 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar1 = (int *)((longlong)local_78 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_78 + 0x10))(local_78);
      }
    }
  }
  lVar2 = *param_2;
  plVar3 = *(longlong **)(lVar6 + 0x58);
  if (plVar3 == (longlong *)0x0) {
    lVar8 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar8 = 0;
    do {
      if (iVar5 == 0) goto LAB_1443d4af5;
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
    lVar8 = *(longlong *)(lVar6 + 0x50);
    LOCK();
    plVar7 = plVar3 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
LAB_1443d4af5:
  if (lVar2 != lVar8) {
    *(longlong *)(lVar6 + 0x50) = *param_2;
    plVar3 = (longlong *)param_2[1];
    plVar7 = *(longlong **)(lVar6 + 0x58);
    if (plVar7 != plVar3) {
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
        plVar7 = *(longlong **)(lVar6 + 0x58);
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
      *(longlong **)(lVar6 + 0x58) = plVar3;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443d4b58 FUN_1443d4b58 body=2587 status=ok
// SIG undefined FUN_1443d4b58(void)

void FUN_1443d4b58(longlong param_1,byte param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined ***pppuVar2;
  int *piVar3;
  int iVar4;
  undefined ***pppuVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  uint *puVar9;
  longlong *plVar10;
  undefined8 uVar11;
  byte bVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  byte *pbVar17;
  longlong lVar18;
  uint uVar19;
  int iVar20;
  longlong *plVar21;
  ulonglong uVar22;
  int iVar23;
  byte *pbVar24;
  longlong lVar25;
  ulonglong uVar26;
  uint uVar27;
  bool bVar28;
  undefined1 auStack_148 [32];
  longlong *local_128;
  longlong local_120;
  undefined **local_118;
  longlong local_110;
  byte *local_108;
  longlong *plStack_100;
  byte local_e9;
  byte *local_e8;
  longlong *plStack_e0;
  byte *local_d8;
  undefined ***local_d0;
  undefined8 local_c8;
  undefined ***local_c0;
  undefined **local_b8;
  longlong *local_b0 [2];
  byte local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_e9 = param_2;
  if (*(int *)(param_1 + 0x90) != *(int *)(param_1 + 0xbc)) {
    lVar15 = param_1 + 0xc0;
    if (*(longlong *)(param_1 + 200) != 0) {
      lVar15 = *(longlong *)(param_1 + 200);
    }
    iVar8 = *(int *)(lVar15 + (ulonglong)(*(int *)(param_1 + 0xd0) - 1U & (uint)param_2) * 4);
    if (iVar8 != -1) {
      lVar15 = *(longlong *)(param_1 + 0x88);
      do {
        if (*(byte *)(lVar15 + (longlong)iVar8 * 0x80) == param_2) goto LAB_1443d4c1d;
        iVar8 = *(int *)((longlong)iVar8 * 0x80 + lVar15 + 0x78);
      } while (iVar8 != -1);
    }
  }
  bVar12 = *(byte *)(param_3 + 3);
  uVar26 = (ulonglong)bVar12;
  ppuVar1 = param_3 + 1;
  if ((&DAT_149fc1b6e)[uVar26] == '\x01') {
    if (((longlong *)*ppuVar1 == (longlong *)0x0) ||
       (cVar6 = (**(code **)(*(longlong *)*ppuVar1 + 0x28))(), cVar6 == '\0')) goto LAB_1443d4c1d;
    bVar12 = *(byte *)(param_3 + 3);
    uVar26 = (ulonglong)bVar12;
  }
  else if (((ulonglong)*ppuVar1 & 0xffffff) == 0) goto LAB_1443d4c1d;
  local_b8 = &PTR_FUN_14a184370;
  local_a0 = bVar12;
  (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[uVar26])(local_b0,ppuVar1);
  local_b8 = &PTR_FUN_14a5af930;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_c8 = &local_e9;
  local_c0 = &local_b8;
  FUN_149005ce4((longlong *)(param_1 + 0x88),&local_d8,&local_c8);
  FUN_148fe2dd4(&local_b8);
  lVar15 = *(longlong *)(param_1 + 0x20);
  plVar10 = (longlong *)(lVar15 + 0x88);
  uVar7 = FUN_147bede77(param_3);
  iVar8 = FUN_148ffe348(plVar10,uVar7,param_3);
  local_128 = plVar10;
  local_120 = lVar15;
  if (iVar8 == -1) {
    if (param_1 == 0) {
      local_c8._0_4_ = 0;
      iVar8 = 0;
      uVar27 = (uint)local_c8;
    }
    else {
      uVar27 = *(uint *)(param_1 + 0xc);
      local_c8 = (byte *)(ulonglong)uVar27;
      if ((int)uVar27 < DAT_14c9647dc) {
        lVar25 = (ulonglong)((uVar27 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar27 >> 0x10) * 8);
      }
      else {
        lVar25 = 0;
      }
      iVar8 = *(int *)(lVar25 + 0x10);
      if (*(int *)(lVar25 + 0x10) == 0) {
        LOCK();
        iVar8 = DAT_14c964868 + 1;
        UNLOCK();
        iVar23 = DAT_14c964868 + 1;
        bVar28 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar8;
        if (bVar28) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar23);
        }
        LOCK();
        iVar8 = *(int *)(lVar25 + 0x10);
        bVar28 = iVar8 == 0;
        if (bVar28) {
          *(int *)(lVar25 + 0x10) = iVar23;
          iVar8 = 0;
        }
        UNLOCK();
        uVar27 = (uint)local_c8;
        if (bVar28) {
          iVar8 = iVar23;
        }
      }
    }
    local_c8._0_4_ = uVar27;
    local_c8 = (byte *)CONCAT44(iVar8,(uint)local_c8);
    local_b8 = param_3;
    local_b0[0] = &local_c8;
    FUN_1490016f6(local_128,&local_d8);
  }
  else {
    local_b8 = *(undefined ***)(param_1 + 0x18);
    FUN_1400021e4(&local_b8,&local_c8);
    pbVar17 = (byte *)&DAT_149dfb77a;
    if ((int)local_c0 != 0) {
      pbVar17 = local_c8;
    }
    FUN_145da5dd4(param_3,&local_d8);
    pbVar24 = (byte *)&DAT_149dfb77a;
    if ((int)local_d0 != 0) {
      pbVar24 = local_d8;
    }
    FUN_140002266(&local_b8,
                  L"SubsystemId [%s] for user [%s] is already in the UsersBySubsystemIds map.\n",
                  pbVar24,pbVar17);
    plVar10 = local_128;
    if (local_d8 != (byte *)0x0) {
      FUN_1400020a8();
    }
    if (local_c8 != (byte *)0x0) {
      FUN_1400020a8();
    }
    FUN_1400020e8(&local_b8,L"Currently in the map:\n",0x16);
    iVar8 = *(int *)(lVar15 + 0xb0);
    local_118 = param_3;
    local_110 = param_1;
    if (iVar8 == 0) {
      uVar22 = 1;
      uVar26 = 0;
      iVar23 = 0;
      iVar20 = 0;
    }
    else {
      puVar9 = *(uint **)(lVar15 + 0xa8);
      if (*(uint **)(lVar15 + 0xa8) == (uint *)0x0) {
        puVar9 = (uint *)(lVar15 + 0x98);
      }
      uVar27 = *puVar9;
      if (uVar27 == 0) {
        iVar23 = iVar8 + 0x1e;
        if (-1 < iVar8 + -1) {
          iVar23 = iVar8 + -1;
        }
        uVar26 = 0;
        uVar16 = (ulonglong)(uint)(iVar23 >> 5);
        if (iVar23 >> 5 < 1) {
          uVar16 = uVar26;
        }
        iVar23 = 0;
        do {
          if (uVar16 == uVar26) goto LAB_1443d4eb5;
          iVar23 = iVar23 + 0x20;
          uVar27 = puVar9[uVar26 + 1];
          uVar26 = uVar26 + 1;
        } while (uVar27 == 0);
      }
      else {
        uVar26 = 0;
        iVar23 = 0;
      }
      uVar22 = (ulonglong)(-uVar27 & uVar27);
      uVar16 = uVar22 * 2 + 1;
      lVar25 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar25 == 0; lVar25 = lVar25 + -1) {
        }
      }
      iVar20 = (iVar23 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
      if (iVar8 <= iVar20) {
        iVar20 = iVar8;
      }
    }
    if (iVar20 != iVar8) {
      uVar27 = 0xffffffff;
      do {
        lVar25 = *plVar10 + (longlong)iVar20 * 0x40;
        iVar20 = *(int *)(*plVar10 + 0x34 + (longlong)iVar20 * 0x40);
        if ((((iVar20 == 0) || (uVar19 = *(uint *)(lVar25 + 0x30), (int)uVar19 < 0)) ||
            (DAT_14c9647dc <= (int)uVar19)) ||
           (((plVar21 = (longlong *)
                        ((ulonglong)((uVar19 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8)),
             plVar21 == (longlong *)0x0 || ((int)plVar21[2] != iVar20)) ||
            ((*(uint *)(plVar21 + 1) & 0x10200000) != 0)))) {
          FUN_145da5dd4(lVar25,&local_e8);
          pbVar17 = (byte *)&DAT_149dfb77a;
          if ((int)plStack_e0 != 0) {
            pbVar17 = local_e8;
          }
          FUN_140002266(&local_c8,L"ID: [%s], User: [%s]\n",pbVar17,L"ERROR - INVALID USER!");
          iVar20 = (int)local_c0 + -1;
          if ((int)local_c0 == 0) {
            iVar20 = 0;
          }
          FUN_1400020e8(&local_b8,local_c8,iVar20);
          pbVar17 = local_e8;
          if (local_c8 != (byte *)0x0) {
            FUN_1400020a8();
            pbVar17 = local_e8;
          }
        }
        else {
          if ((*(uint *)(plVar21 + 1) & 0x10200000) == 0) {
            lVar18 = *plVar21;
          }
          else {
            lVar18 = 0;
          }
          local_c8 = *(byte **)(lVar18 + 0x18);
          FUN_1400021e4(&local_c8,&local_d8);
          pbVar17 = (byte *)&DAT_149dfb77a;
          if ((int)local_d0 != 0) {
            pbVar17 = local_d8;
          }
          FUN_145da5dd4(lVar25,&local_e8);
          pbVar24 = (byte *)&DAT_149dfb77a;
          if ((int)plStack_e0 != 0) {
            pbVar24 = local_e8;
          }
          FUN_140002266(&local_c8,L"ID: [%s], User: [%s]\n",pbVar24,pbVar17);
          iVar20 = (int)local_c0 + -1;
          if ((int)local_c0 == 0) {
            iVar20 = 0;
          }
          FUN_1400020e8(&local_b8,local_c8,iVar20);
          if (local_c8 != (byte *)0x0) {
            FUN_1400020a8();
          }
          plVar10 = local_128;
          pbVar17 = local_d8;
          if (local_e8 != (byte *)0x0) {
            FUN_1400020a8();
            pbVar17 = local_d8;
          }
        }
        if (pbVar17 != (byte *)0x0) {
          FUN_1400020a8();
        }
        uVar27 = uVar27 & ~(uint)uVar22;
        puVar9 = *(uint **)(local_120 + 0xa8);
        if (*(uint **)(local_120 + 0xa8) == (uint *)0x0) {
          puVar9 = (uint *)(lVar15 + 0x98);
        }
        iVar4 = *(int *)(local_120 + 0xb0);
        iVar20 = (int)uVar26;
        lVar25 = (longlong)iVar20;
        uVar19 = puVar9[lVar25] & uVar27;
        if (uVar19 == 0) {
          iVar13 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar13 = iVar4 + -1;
          }
          iVar13 = iVar13 >> 5;
          iVar23 = iVar23 + 0x20;
          iVar14 = iVar13;
          if (iVar13 < iVar20) {
            iVar14 = iVar20;
          }
          if (iVar20 < iVar13) {
            lVar18 = 0;
            do {
              uVar19 = puVar9[lVar25 + lVar18 + 1];
              if (uVar19 != 0) {
                uVar26 = (ulonglong)(iVar20 + (int)lVar18 + 1);
                uVar27 = 0xffffffff;
                goto LAB_1443d5242;
              }
              iVar23 = iVar23 + 0x20;
              lVar18 = lVar18 + 1;
            } while (iVar14 - lVar25 != lVar18);
            uVar27 = 0xffffffff;
            iVar20 = iVar14;
          }
          uVar26 = (ulonglong)(iVar20 + 1);
          plVar10 = local_128;
          iVar20 = iVar4;
        }
        else {
LAB_1443d5242:
          uVar22 = (ulonglong)(-uVar19 & uVar19);
          uVar16 = uVar22 * 2 + 1;
          lVar25 = 0x3f;
          if (uVar16 != 0) {
            for (; uVar16 >> lVar25 == 0; lVar25 = lVar25 + -1) {
            }
          }
          iVar20 = (iVar23 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
          if (iVar4 <= iVar20) {
            iVar20 = iVar4;
          }
        }
      } while (iVar20 != iVar8);
    }
LAB_1443d4eb5:
    lVar15 = local_120;
    param_3 = local_118;
    param_1 = local_110;
    if (local_b8 != (undefined **)0x0) {
      FUN_1400020a8();
      lVar15 = local_120;
      param_3 = local_118;
      param_1 = local_110;
    }
  }
  plVar10 = (longlong *)FUN_148fcd308(lVar15,local_e9);
  if (plVar10 == (longlong *)0x0) goto LAB_1443d4c1d;
  (**(code **)(*plVar10 + 0xb8))(plVar10,&local_b8);
  ppuVar1 = local_b8;
  if (local_b8 != (undefined **)0x0) {
    uVar11 = FUN_14127b0d4(param_3);
    uVar7 = 0xffffffff;
    if (((*(int *)(lVar15 + 0xe0) != 0) && (uVar27 = *(uint *)(lVar15 + 0xdc), -1 < (int)uVar27)) &&
       (((int)uVar27 < DAT_14c9647dc &&
        ((((plVar10 = (longlong *)
                      ((ulonglong)((uVar27 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar27 >> 0x10) * 8)),
           plVar10 != (longlong *)0x0 && ((int)plVar10[2] == *(int *)(lVar15 + 0xe0))) &&
          ((*(uint *)(plVar10 + 1) & 0x10200000) == 0)) && (*plVar10 != 0)))))) {
      uVar7 = *(undefined4 *)(*plVar10 + 0xe0);
    }
    (**(code **)(*ppuVar1 + 0x38))(ppuVar1,&local_c8,uVar7,uVar11);
    pppuVar5 = local_c0;
    if ((local_c8 == (byte *)0x0) ||
       (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x70) == param_1)) {
      local_d8 = (byte *)0x0;
      local_d0._0_4_ = 0;
      FUN_1446efa72(&local_d8,0,3,0x10);
      pbVar17 = local_d8;
      local_d0 = (undefined ***)CONCAT44(local_d0._4_4_,3);
      *(undefined ***)local_d8 = &PTR_LAB_14ba60b20;
      LOCK();
      UNLOCK();
      lVar18 = DAT_14c758608 + 1;
      lVar25 = DAT_14c758608 + 1;
      if (lVar18 == 0) {
        LOCK();
        UNLOCK();
        lVar18 = DAT_14c758608 + 2;
        lVar25 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar25;
      *(longlong *)(local_d8 + 0x10) = lVar18;
      *(undefined ***)local_d8 = &PTR_FUN_14ba60ab0;
      local_d8[0x18] = 0;
      local_d8[0x19] = 0;
      local_d8[0x1a] = 0;
      local_d8[0x1b] = 0;
      local_d8[0x1c] = 0;
      local_d8[0x1d] = 0;
      local_d8[0x1e] = 0;
      local_d8[0x1f] = 0;
      iVar8 = 0;
      if (param_1 != 0) {
        uVar27 = *(uint *)(param_1 + 0xc);
        *(uint *)(local_d8 + 0x18) = uVar27;
        if ((int)uVar27 < DAT_14c9647dc) {
          lVar25 = (ulonglong)((uVar27 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar27 >> 0x10) * 8);
        }
        else {
          lVar25 = 0;
        }
        iVar8 = *(int *)(lVar25 + 0x10);
        if (*(int *)(lVar25 + 0x10) == 0) {
          LOCK();
          iVar8 = DAT_14c964868 + 1;
          UNLOCK();
          iVar23 = DAT_14c964868 + 1;
          bVar28 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar8;
          if (bVar28) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar23);
          }
          LOCK();
          iVar8 = *(int *)(lVar25 + 0x10);
          bVar28 = iVar8 == 0;
          if (bVar28) {
            *(int *)(lVar25 + 0x10) = iVar23;
            iVar8 = 0;
          }
          UNLOCK();
          lVar15 = local_120;
          if (bVar28) {
            iVar8 = iVar23;
          }
        }
      }
      *(int *)(pbVar17 + 0x1c) = iVar8;
      *(code **)(pbVar17 + 0x20) = FUN_1443d5958;
      FUN_1408e4d18(param_3,&local_108);
      local_e8 = local_108;
      plStack_e0 = plStack_100;
      local_108 = (byte *)0x0;
      plStack_100 = (longlong *)0x0;
      FUN_148fe457a(lVar15,local_e9,&local_e8,&local_d8);
      plVar10 = plStack_e0;
      if (plStack_e0 != (longlong *)0x0) {
        LOCK();
        plVar21 = plStack_e0 + 1;
        *(int *)plVar21 = (int)*plVar21 + -1;
        UNLOCK();
        if ((int)*plVar21 == 0) {
          (**(code **)*plStack_e0)(plStack_e0);
          LOCK();
          piVar3 = (int *)((longlong)plVar10 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
      plVar10 = plStack_100;
      if (plStack_100 != (longlong *)0x0) {
        LOCK();
        plVar21 = plStack_100 + 1;
        *(int *)plVar21 = (int)*plVar21 + -1;
        UNLOCK();
        if ((int)*plVar21 == 0) {
          (**(code **)*plStack_100)(plStack_100);
          LOCK();
          piVar3 = (int *)((longlong)plVar10 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      if ((int)local_d0 != 0) {
        if (local_d8 == (byte *)0x0) goto LAB_1443d543d;
        (*(code *)**(undefined8 **)local_d8)(local_d8,0);
        FUN_1446efa72(&local_d8,0,0,0x10);
        local_d0 = (undefined ***)((ulonglong)local_d0 & 0xffffffff00000000);
      }
      if (local_d8 != (byte *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      local_d8 = local_c8;
      local_d0 = local_c0;
      if (local_c0 == (undefined ***)0x0) {
        FUN_1443d5574(param_1,local_e9,&local_d8);
      }
      else {
        LOCK();
        *(int *)(local_c0 + 1) = *(int *)(local_c0 + 1) + 1;
        UNLOCK();
        FUN_1443d5574(param_1,local_e9);
        if (pppuVar5 != (undefined ***)0x0) {
          LOCK();
          pppuVar2 = pppuVar5 + 1;
          *(int *)pppuVar2 = *(int *)pppuVar2 + -1;
          UNLOCK();
          if (*(int *)pppuVar2 == 0) {
            (*(code *)**pppuVar5)(pppuVar5);
            LOCK();
            piVar3 = (int *)((longlong)pppuVar5 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (*(code *)(*pppuVar5)[2])(pppuVar5);
            }
          }
        }
      }
    }
LAB_1443d543d:
    pppuVar5 = local_c0;
    if (local_c0 != (undefined ***)0x0) {
      LOCK();
      pppuVar2 = local_c0 + 1;
      *(int *)pppuVar2 = *(int *)pppuVar2 + -1;
      UNLOCK();
      if (*(int *)pppuVar2 == 0) {
        (*(code *)**local_c0)(local_c0);
        LOCK();
        piVar3 = (int *)((longlong)pppuVar5 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (*(code *)(*pppuVar5)[2])(pppuVar5);
        }
      }
    }
  }
  plVar10 = local_b0[0];
  if (local_b0[0] != (longlong *)0x0) {
    LOCK();
    plVar21 = local_b0[0] + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar3 = (int *)((longlong)plVar10 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
LAB_1443d4c1d:
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443d5574 FUN_1443d5574 body=995 status=ok
// SIG undefined FUN_1443d5574(void)

void FUN_1443d5574(longlong *param_1,byte param_2,undefined8 *param_3)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined1 auStack_108 [32];
  longlong *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong local_c8;
  int local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  longlong local_a0 [2];
  undefined **local_90;
  longlong *local_88;
  longlong *local_80;
  byte local_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((int)param_1[0x12] != *(int *)((longlong)param_1 + 0xbc)) {
    plVar4 = param_1 + 0x18;
    if ((longlong *)param_1[0x19] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x19];
    }
    iVar6 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[0x1a] - 1U & (uint)param_2) * 4);
    if (iVar6 != -1) {
      do {
        lVar5 = param_1[0x11] + (longlong)iVar6 * 0x80;
        if (*(byte *)(param_1[0x11] + (longlong)iVar6 * 0x80) == param_2) goto LAB_1443d5604;
        iVar6 = *(int *)(lVar5 + 0x78);
      } while (iVar6 != -1);
    }
  }
  lVar5 = 0;
LAB_1443d5604:
  *(undefined8 *)(lVar5 + 0x38) = *param_3;
  plVar4 = (longlong *)param_3[1];
  plVar7 = *(longlong **)(lVar5 + 0x40);
  if (plVar7 != plVar4) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
      plVar7 = *(longlong **)(lVar5 + 0x40);
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
    *(longlong **)(lVar5 + 0x40) = plVar4;
  }
  if ((param_2 == 0) && ((longlong)DAT_14cbf5718 != 0)) {
    pbVar9 = DAT_14cbf5710 + DAT_14cbf5718;
    pbVar8 = DAT_14cbf5710;
    do {
      bVar2 = *pbVar8;
      if ((int)param_1[0x12] != *(int *)((longlong)param_1 + 0xbc)) {
        plVar4 = (longlong *)param_1[0x19];
        if ((longlong *)param_1[0x19] == (longlong *)0x0) {
          plVar4 = param_1 + 0x18;
        }
        iVar6 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[0x1a] - 1U & (uint)bVar2) * 4);
        if (iVar6 != -1) {
          do {
            if (*(byte *)(param_1[0x11] + (longlong)iVar6 * 0x80) == bVar2) goto LAB_1443d56fb;
            iVar6 = *(int *)((longlong)iVar6 * 0x80 + param_1[0x11] + 0x78);
          } while (iVar6 != -1);
        }
      }
      plVar4 = (longlong *)FUN_148fcd308(param_1[4],bVar2);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,&local_90);
        lVar5 = FUN_148fdede0(&local_90);
        if ((lVar5 != 0) && (1 < *(int *)(lVar5 + 0x40))) {
          FUN_140002266(local_a0,L"%s:id",*(undefined8 *)(lVar5 + 0x38));
          local_b8 = 0;
          uStack_b0 = 0;
          cVar3 = (**(code **)(*(longlong *)*param_3 + 0x20))
                            ((longlong *)*param_3,local_a0,&local_b8);
          if ((cVar3 != '\0') && (1 < (int)uStack_b0)) {
            FUN_148fdecf8(&local_c8,bVar2);
            if (1 < local_c0) {
              FUN_140c540b4(&local_b8,local_c8,local_c0 + -1,1);
            }
            (**(code **)(*plVar4 + 0x80))(plVar4,&local_e8);
            (**(code **)(*local_e8 + 0x120))(local_e8,&local_d8,&local_b8);
            plVar4 = local_d0;
            local_78 = 0;
            local_88 = local_d8;
            local_80 = local_d0;
            if (local_d0 == (longlong *)0x0) {
              local_90 = &PTR_FUN_14a5af930;
              local_70 = 0;
              uStack_68 = 0;
            }
            else {
              LOCK();
              *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
              UNLOCK();
              local_78 = 0;
              local_90 = &PTR_FUN_14a5af930;
              local_70 = 0;
              uStack_68 = 0;
              if (local_d0 != (longlong *)0x0) {
                LOCK();
                plVar7 = local_d0 + 1;
                *(int *)plVar7 = (int)*plVar7 + -1;
                UNLOCK();
                if ((int)*plVar7 == 0) {
                  (**(code **)*local_d0)(local_d0);
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
            plVar4 = local_e0;
            if (local_e0 != (longlong *)0x0) {
              LOCK();
              plVar7 = local_e0 + 1;
              *(int *)plVar7 = (int)*plVar7 + -1;
              UNLOCK();
              if ((int)*plVar7 == 0) {
                (**(code **)*local_e0)(local_e0);
                LOCK();
                piVar1 = (int *)((longlong)plVar4 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar4 + 0x10))(plVar4);
                }
              }
            }
            if ((&DAT_149fc1b6e)[local_78] == '\x01') {
              if ((local_88 != (longlong *)0x0) &&
                 (cVar3 = (**(code **)(*local_88 + 0x28))(), cVar3 != '\0')) {
LAB_1443d58eb:
                (**(code **)(*param_1 + 0x3a8))(param_1,bVar2,&local_90);
              }
            }
            else if (((ulonglong)local_88 & 0xffffff) != 0) goto LAB_1443d58eb;
            local_90 = &PTR_FUN_14a5af930;
            if (local_70 != 0) {
              FUN_1400020a8();
            }
            local_90 = &PTR_FUN_14a184370;
            (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_78])(&local_88);
            if (local_c8 != 0) {
              FUN_1400020a8();
            }
          }
          if (local_b8 != 0) {
            FUN_1400020a8();
          }
          if (local_a0[0] != 0) {
            FUN_1400020a8();
          }
        }
      }
LAB_1443d56fb:
      pbVar8 = pbVar8 + 1;
    } while (pbVar8 != pbVar9);
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443d5958 FUN_1443d5958 body=160 status=ok
// SIG undefined FUN_1443d5958(void)

void FUN_1443d5958(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
  lVar3 = *param_4;
  if (lVar3 != 0) {
    plVar4 = (longlong *)param_4[1];
    local_28 = lVar3;
    local_20 = plVar4;
    if (plVar4 == (longlong *)0x0) {
      FUN_1443d5574(param_1,param_2,&local_28);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      FUN_1443d5574(param_1);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_1443d3372(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443d5a74 FUN_1443d5a74 body=187 status=ok
// SIG undefined FUN_1443d5a74(void)

void FUN_1443d5a74(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  ushort uVar4;
  ulonglong uVar5;
  ushort uVar6;
  ulonglong uVar7;
  
  plVar1 = param_1 + 5;
  iVar2 = (int)param_1[6];
  if (iVar2 == (int)param_2[1]) {
    if (1 < iVar2) {
      lVar3 = 0;
      while( true ) {
        uVar4 = *(ushort *)(*plVar1 + lVar3);
        uVar5 = (ulonglong)uVar4;
        uVar6 = *(ushort *)(*param_2 + lVar3);
        if (uVar4 != uVar6) break;
        if (uVar4 == 0) {
          return;
        }
LAB_1443d5ac0:
        lVar3 = lVar3 + 2;
      }
      if ((uVar6 | uVar4) < 0x80) {
        uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
        uVar7 = (ulonglong)uVar6;
        uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
        if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar7]) goto LAB_1443d5ac0;
      }
      if (uVar4 != uVar6) goto LAB_1443d5aec;
    }
  }
  else if ((int)param_2[1] + iVar2 != 1) {
LAB_1443d5aec:
    (**(code **)(*param_1 + 0x20))(param_1);
    FUN_148fe6a20(param_1 + 0x1b,plVar1,param_2);
    FUN_148fe6ad0(param_1 + 0x18,plVar1);
    return;
  }
  return;
}



// FUNCTION 1443d5b30 FUN_1443d5b30 body=92 status=ok
// SIG undefined FUN_1443d5b30(void)

void FUN_1443d5b30(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  
  plVar1 = param_1 + 0x10;
  cVar2 = FUN_140ba41f1(plVar1);
  if (cVar2 != '\0') {
    return;
  }
  (**(code **)(*param_1 + 0x20))(param_1);
  FUN_148fe6b74(param_1 + 0x21,plVar1,param_2);
  FUN_147bd2fca(param_1 + 0x1e,plVar1);
  return;
}



// FUNCTION 1443d5b8c FUN_1443d5b8c body=193 status=ok
// SIG undefined FUN_1443d5b8c(void)

void FUN_1443d5b8c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  ushort uVar4;
  ulonglong uVar5;
  ushort uVar6;
  ulonglong uVar7;
  
  plVar1 = param_1 + 0x16;
  iVar2 = (int)param_1[0x17];
  if (iVar2 == (int)param_2[1]) {
    if (1 < iVar2) {
      lVar3 = 0;
      while( true ) {
        uVar4 = *(ushort *)(*plVar1 + lVar3);
        uVar5 = (ulonglong)uVar4;
        uVar6 = *(ushort *)(*param_2 + lVar3);
        if (uVar4 != uVar6) break;
        if (uVar4 == 0) {
          return;
        }
LAB_1443d5bde:
        lVar3 = lVar3 + 2;
      }
      if ((uVar6 | uVar4) < 0x80) {
        uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
        uVar7 = (ulonglong)uVar6;
        uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
        if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar7]) goto LAB_1443d5bde;
      }
      if (uVar4 != uVar6) goto LAB_1443d5c0a;
    }
  }
  else if ((int)param_2[1] + iVar2 != 1) {
LAB_1443d5c0a:
    (**(code **)(*param_1 + 0x20))(param_1);
    FUN_140b9d292(param_1 + 0x27,plVar1,param_2);
    FUN_1411f311e(param_1 + 0x24,plVar1);
    return;
  }
  return;
}



// FUNCTION 1443d5c4e FUN_1443d5c4e body=83 status=ok
// SIG undefined FUN_1443d5c4e(void)

void FUN_1443d5c4e(longlong *param_1,char *param_2)

{
  if ((char)param_1[0x2a] == *param_2) {
    return;
  }
  (**(code **)(*param_1 + 0x20))();
  FUN_148fe6c24(param_1 + 0x2e,(char)param_1[0x2a],*param_2);
  FUN_148fe6cd2(param_1 + 0x2b,(char)param_1[0x2a]);
  return;
}



// FUNCTION 1443d5ca2 FUN_1443d5ca2 body=105 status=ok
// SIG undefined FUN_1443d5ca2(void)

void FUN_1443d5ca2(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  
  plVar1 = param_1 + 0x39;
  cVar2 = FUN_140ba41f1(plVar1);
  if ((cVar2 != '\0') && (param_1[0x3f] == *(longlong *)(param_2 + 0x30))) {
    return;
  }
  (**(code **)(*param_1 + 0x20))(param_1);
  FUN_148fe6d76(param_1 + 0x45,plVar1,param_2);
  FUN_148fe6e26(param_1 + 0x42,plVar1);
  return;
}



// FUNCTION 1443d5d0c FUN_1443d5d0c body=108 status=ok
// SIG undefined FUN_1443d5d0c(void)

void FUN_1443d5d0c(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  
  plVar1 = param_1 + 0x40;
  if ((int)param_1[0x41] == *(int *)(param_2 + 1)) {
    cVar2 = FUN_148fe6eca(*plVar1,*param_2);
    if (cVar2 != '\0') {
      return;
    }
  }
  (**(code **)(*param_1 + 0x20))(param_1);
  FUN_148fe6f2c(param_1 + 0x4b,plVar1,param_2);
  FUN_148fe6fdc(param_1 + 0x48,plVar1);
  return;
}



// FUNCTION 1443d5dce FUN_1443d5dce body=94 status=ok
// SIG undefined FUN_1443d5dce(void)

void FUN_1443d5dce(longlong *param_1,char *param_2)

{
  if (((*(char *)((longlong)param_1 + 0x21) == *param_2) &&
      (*(char *)((longlong)param_1 + 0x22) == param_2[1])) &&
     (*(char *)((longlong)param_1 + 0x23) == param_2[2])) {
    return;
  }
  (**(code **)(*param_1 + 0x20))(param_1);
  FUN_148fe7e0e(param_1 + 8,(longlong)param_1 + 0x21,param_2);
  FUN_148fe7ebe(param_1 + 5,(longlong)param_1 + 0x21);
  return;
}



// FUNCTION 1443d5e70 FUN_1443d5e70 body=47 status=ok
// SIG undefined FUN_1443d5e70(void)

void FUN_1443d5e70(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(lVar1 + 0x70) = param_2;
  return;
}



// FUNCTION 1443d5ebe FUN_1443d5ebe body=12 status=ok
// SIG undefined FUN_1443d5ebe(void)

void FUN_1443d5ebe(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001443d5ec7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1443d5eca FUN_1443d5eca body=29 status=ok
// SIG undefined FUN_1443d5eca(void)

undefined8 FUN_1443d5eca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443d5f0e FUN_1443d5f0e body=12 status=ok
// SIG undefined FUN_1443d5f0e(void)

void FUN_1443d5f0e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001443d5f17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1443d5f1a FUN_1443d5f1a body=29 status=ok
// SIG undefined FUN_1443d5f1a(void)

undefined8 FUN_1443d5f1a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443d5f38 FUN_1443d5f38 body=29 status=ok
// SIG undefined FUN_1443d5f38(void)

undefined8 FUN_1443d5f38(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443d60d4 FUN_1443d60d4 body=136 status=ok
// SIG undefined FUN_1443d60d4(void)

void FUN_1443d60d4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba5bd10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar1[5] = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) != 1) {
    return;
  }
  FUN_1456cec3c();
  return;
}



// FUNCTION 1443d615c FUN_1443d615c body=136 status=ok
// SIG undefined FUN_1443d615c(void)

void FUN_1443d615c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba5bd10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar1[5] = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) != 1) {
    return;
  }
  FUN_1456cec3c();
  return;
}



// FUNCTION 1443d61e4 FUN_1443d61e4 body=170 status=ok
// SIG undefined FUN_1443d61e4(void)

void FUN_1443d61e4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  longlong lVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba5bd10;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  lVar3 = *(longlong *)(param_1 + 0x28);
  p_Var1->Flags = (int)lVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)lVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)lVar3 >> 0x30);
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443d6277. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443d628e FUN_1443d628e body=60 status=ok
// SIG undefined FUN_1443d628e(void)

void FUN_1443d628e(longlong param_1,char param_2)

{
  undefined8 uVar1;
  
  if (param_2 != '\0') {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    FUN_1443be424(uVar1,*(undefined8 *)(param_1 + 0x28));
    FUN_140457ffc(*(longlong *)(param_1 + 0x28) + 0x148,uVar1);
    return;
  }
  return;
}



// FUNCTION 1443d62ca FUN_1443d62ca body=305 status=ok
// SIG undefined FUN_1443d62ca(void)

bool FUN_1443d62ca(longlong param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1443d63f5;
    if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_1443d63f5;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1443d63f5:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    bVar7 = false;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1443d63a8;
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar6 != 0) && (*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c))) {
      bVar7 = (*(uint *)(lVar6 + 8) & 0x10200000) == 0;
      if ((param_2 & bVar7) == 1) {
        uVar3 = *(undefined8 *)(param_1 + 0x20);
        FUN_1443be424(uVar3,*(undefined8 *)(param_1 + 0x28));
        FUN_140457ffc(*(longlong *)(param_1 + 0x28) + 0x148,uVar3);
        bVar7 = true;
      }
      goto LAB_1443d63a8;
    }
  }
  bVar7 = false;
LAB_1443d63a8:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443d63fc FUN_1443d63fc body=335 status=ok
// SIG undefined FUN_1443d63fc(void)

undefined8 FUN_1443d63fc(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  double dVar4;
  undefined8 uVar5;
  undefined ***pppuVar6;
  undefined1 auStack_b8 [32];
  code **local_98;
  undefined8 local_90;
  longlong *local_88;
  double local_80;
  code *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  longlong local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar2 = *param_1;
  local_80 = 30.0;
  local_98 = (code **)&DAT_14c872af8;
  FUN_14612afb8(DAT_14c872ce0,L"/Script/Party.PartyMember",L"DebugInitializer.ErrorSeconds",
                &local_80);
  dVar4 = local_80;
  if ((double)param_1[1] <= local_80 && local_80 != (double)param_1[1]) {
    uVar5 = FUN_1401cb356();
    local_98 = local_78;
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_14ba5bde0;
    local_78[0] = FUN_1443d6580;
    local_50 = lVar2;
    FUN_1401cbba4(uVar5,&local_90,L"UPartyMember::FDebugInitializer",
                  (float)(dVar4 - (double)param_1[1]));
    *(undefined8 *)(lVar2 + 0x18) = local_90;
    local_90 = 0;
    plVar3 = *(longlong **)(lVar2 + 0x20);
    *(longlong **)(lVar2 + 0x20) = local_88;
    local_88 = (longlong *)0x0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
      if (local_88 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_88 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_88 + 0x10))();
        }
      }
    }
    if (local_78[0] != (code *)0x0) {
      pppuVar6 = local_68;
      if (local_68 == (undefined ***)0x0) {
        pppuVar6 = &local_58;
      }
      (*(code *)(*pppuVar6)[2])();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443d6556 FUN_1443d6556 body=12 status=ok
// SIG undefined FUN_1443d6556(void)

void FUN_1443d6556(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001443d655f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1443d6562 FUN_1443d6562 body=29 status=ok
// SIG undefined FUN_1443d6562(void)

undefined8 FUN_1443d6562(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443d6580 FUN_1443d6580 body=45 status=ok
// SIG undefined FUN_1443d6580(void)

undefined8 FUN_1443d6580(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  plVar3 = *(longlong **)(lVar2 + 0x20);
  *(undefined8 *)(lVar2 + 0x20) = 0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  return 0;
}



// FUNCTION 1443d65b8 FUN_1443d65b8 body=12 status=ok
// SIG undefined FUN_1443d65b8(void)

void FUN_1443d65b8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001443d65c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1443d65c4 FUN_1443d65c4 body=29 status=ok
// SIG undefined FUN_1443d65c4(void)

undefined8 FUN_1443d65c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443d65e2 FUN_1443d65e2 body=29 status=ok
// SIG undefined FUN_1443d65e2(void)

undefined8 FUN_1443d65e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443d6614 FUN_1443d6614 body=85 status=ok
// SIG undefined FUN_1443d6614(void)

void FUN_1443d6614(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f2b90;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba5c540;
  return;
}



// FUNCTION 1443d666a FUN_1443d666a body=85 status=ok
// SIG undefined FUN_1443d666a(void)

void FUN_1443d666a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f2b90;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba5c540;
  return;
}



// FUNCTION 1443d66c0 FUN_1443d66c0 body=118 status=ok
// SIG undefined FUN_1443d66c0(void)

void FUN_1443d66c0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f2b90;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba5c540;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443d6727. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443d673c FUN_1443d673c body=29 status=ok
// SIG undefined FUN_1443d673c(void)

undefined8 FUN_1443d673c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443d676e FUN_1443d676e body=85 status=ok
// SIG undefined FUN_1443d676e(void)

void FUN_1443d676e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b438700;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba5c5b0;
  return;
}



// FUNCTION 1443d67c4 FUN_1443d67c4 body=85 status=ok
// SIG undefined FUN_1443d67c4(void)

void FUN_1443d67c4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b438700;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba5c5b0;
  return;
}



// FUNCTION 1443d681a FUN_1443d681a body=118 status=ok
// SIG undefined FUN_1443d681a(void)

void FUN_1443d681a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b438700;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba5c5b0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443d6881. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443d6d20 FUN_1443d6d20 body=29 status=ok
// SIG undefined FUN_1443d6d20(void)

undefined8 FUN_1443d6d20(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443d6ebc FUN_1443d6ebc body=93 status=ok
// SIG undefined FUN_1443d6ebc(void)

void FUN_1443d6ebc(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba5d5e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1443d6f1a FUN_1443d6f1a body=93 status=ok
// SIG undefined FUN_1443d6f1a(void)

void FUN_1443d6f1a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba5d5e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1443d6f78 FUN_1443d6f78 body=126 status=ok
// SIG undefined FUN_1443d6f78(void)

void FUN_1443d6f78(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ba5d5e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443d6fe7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443d7002 FUN_1443d7002 body=268 status=ok
// SIG undefined FUN_1443d7002(void)

undefined8 FUN_1443d7002(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1443d7108;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1443d7108;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1443d7108:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1443d70bc;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1443c8a04(*(undefined8 *)(param_1 + 0x20),0);
      uVar6 = 1;
      goto LAB_1443d70bc;
    }
  }
  uVar6 = 0;
LAB_1443d70bc:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443d7110 FUN_1443d7110 body=125 status=ok
// SIG undefined FUN_1443d7110(void)

undefined8 * FUN_1443d7110(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14ba5d9d0;
  plVar1 = param_1 + 6;
  if (*(int *)(param_1 + 7) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1443d7161;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 7) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1443d7161:
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443d71a2 FUN_1443d71a2 body=203 status=ok
// SIG undefined FUN_1443d71a2(void)

void FUN_1443d71a2(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b438a40;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba5d9d0;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],_Src,(longlong)iVar1 * 2);
  }
  puVar2[6] = 0;
  *(undefined4 *)(puVar2 + 7) = 0;
  FUN_14114e6dc(puVar2 + 6,param_1 + 0x30);
  return;
}



// FUNCTION 1443d726e FUN_1443d726e body=203 status=ok
// SIG undefined FUN_1443d726e(void)

void FUN_1443d726e(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b438a40;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba5d9d0;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],_Src,(longlong)iVar1 * 2);
  }
  puVar2[6] = 0;
  *(undefined4 *)(puVar2 + 7) = 0;
  FUN_14114e6dc(puVar2 + 6,param_1 + 0x30);
  return;
}



// FUNCTION 1443d733a FUN_1443d733a body=261 status=ok
// SIG undefined FUN_1443d733a(void)

void FUN_1443d733a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  DWORD DVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  void *_Src;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14b438a40;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14ba5d9d0;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var2->EntryCount = 0;
  p_Var2->ContentionCount = 0;
  DVar1 = *(DWORD *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  p_Var2->Flags = DVar1;
  if ((longlong)(int)DVar1 == 0) {
    p_Var2->CreatorBackTraceIndexHigh = 0;
    p_Var2->SpareWORD = 0;
  }
  else {
    FUN_1446dd670(&p_Var2->EntryCount,DVar1,0);
    memcpy(*(void **)&p_Var2->EntryCount,_Src,(longlong)(int)DVar1 * 2);
  }
  p_Var2[1].Type = 0;
  p_Var2[1].CreatorBackTraceIndex = 0;
  *(undefined4 *)&p_Var2[1].field_0x4 = 0;
  *(undefined4 *)&p_Var2[1].CriticalSection = 0;
  FUN_14114e6dc(p_Var2 + 1,param_1 + 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443d7429. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443d744a FUN_1443d744a body=20 status=ok
// SIG undefined FUN_1443d744a(void)

undefined1 FUN_1443d744a(longlong param_1)

{
  FUN_1443d745e(param_1 + 0x18);
  return 1;
}



// FUNCTION 1443d745e FUN_1443d745e body=191 status=ok
// SIG undefined FUN_1443d745e(void)

void FUN_1443d745e(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = FUN_148fd89a6(*param_1,param_1 + 1);
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != (longlong *)0x0 && *(int *)(param_1 + 4) != 0) {
    (**(code **)(*plVar2 + 0x60))(plVar2,1);
  }
  if (*(longlong *)(lVar3 + 0x40) != 0) {
    (**(code **)(**(longlong **)(lVar3 + 0x10) + 200))(*(longlong **)(lVar3 + 0x10),&local_30);
    (**(code **)(*local_30 + 0x30))(local_30,(undefined8 *)(lVar3 + 0x40));
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_28 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
    *(undefined8 *)(lVar3 + 0x40) = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443d751e FUN_1443d751e body=52 status=ok
// SIG undefined FUN_1443d751e(void)

undefined8 * FUN_1443d751e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba5da40;
  FUN_1443ca97c(param_1 + 3);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443d7566 FUN_1443d7566 body=218 status=ok
// SIG undefined FUN_1443d7566(void)

void FUN_1443d7566(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b438870;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba5da40;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],_Src,(longlong)iVar1 * 2);
  }
  puVar2[6] = 0;
  *(undefined4 *)(puVar2 + 7) = 0;
  FUN_145bf2b6e(puVar2 + 6,param_1 + 0x30);
  puVar2[8] = 0;
  *(undefined4 *)(puVar2 + 9) = 0;
  FUN_14114e6dc(puVar2 + 8,param_1 + 0x40);
  return;
}



// FUNCTION 1443d7640 FUN_1443d7640 body=218 status=ok
// SIG undefined FUN_1443d7640(void)

void FUN_1443d7640(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b438870;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba5da40;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],_Src,(longlong)iVar1 * 2);
  }
  puVar2[6] = 0;
  *(undefined4 *)(puVar2 + 7) = 0;
  FUN_145bf2b6e(puVar2 + 6,param_1 + 0x30);
  puVar2[8] = 0;
  *(undefined4 *)(puVar2 + 9) = 0;
  FUN_14114e6dc(puVar2 + 8,param_1 + 0x40);
  return;
}



// FUNCTION 1443d771a FUN_1443d771a body=279 status=ok
// SIG undefined FUN_1443d771a(void)

void FUN_1443d771a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  DWORD DVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  void *_Src;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14b438870;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14ba5da40;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var2->EntryCount = 0;
  p_Var2->ContentionCount = 0;
  DVar1 = *(DWORD *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  p_Var2->Flags = DVar1;
  if ((longlong)(int)DVar1 == 0) {
    p_Var2->CreatorBackTraceIndexHigh = 0;
    p_Var2->SpareWORD = 0;
  }
  else {
    FUN_1446dd670(&p_Var2->EntryCount,DVar1,0);
    memcpy(*(void **)&p_Var2->EntryCount,_Src,(longlong)(int)DVar1 * 2);
  }
  p_Var2[1].Type = 0;
  p_Var2[1].CreatorBackTraceIndex = 0;
  *(undefined4 *)&p_Var2[1].field_0x4 = 0;
  *(undefined4 *)&p_Var2[1].CriticalSection = 0;
  FUN_145bf2b6e(p_Var2 + 1,param_1 + 0x30);
  p_Var2[1].ProcessLocksList.Flink = (_LIST_ENTRY *)0x0;
  *(undefined4 *)&p_Var2[1].ProcessLocksList.Blink = 0;
  FUN_14114e6dc(&p_Var2[1].ProcessLocksList,param_1 + 0x40);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443d781b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443d7832 FUN_1443d7832 body=77 status=ok
// SIG undefined FUN_1443d7832(void)

void FUN_1443d7832(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  undefined1 auStack_38 [40];
  undefined4 local_10;
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  local_9 = param_3;
  FUN_1443d78d0(param_1 + 0x18,&local_10,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443d7880 FUN_1443d7880 body=79 status=ok
// SIG undefined FUN_1443d7880(void)

undefined8 FUN_1443d7880(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  undefined1 auStack_38 [40];
  undefined4 local_10;
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  local_9 = param_3;
  FUN_1443d78d0(param_1 + 0x18,&local_10,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443d78d0 FUN_1443d78d0 body=801 status=ok
// SIG undefined FUN_1443d78d0(void)

void FUN_1443d78d0(undefined8 *param_1,undefined4 *param_2,char *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  longlong *plVar6;
  void *_Src;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  undefined1 auStack_128 [32];
  longlong *local_108;
  int local_100;
  int local_fc;
  longlong *local_f8;
  undefined8 uStack_f0;
  longlong *local_e0;
  longlong *local_d8;
  longlong *local_d0;
  int local_c8;
  int iStack_c4;
  undefined2 local_c0;
  undefined1 local_b8 [80];
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  cVar4 = *param_3;
  uVar5 = *param_2;
  lVar9 = FUN_148fd89a6(*param_1,param_1 + 1);
  if (cVar4 != '\x01') {
    plVar6 = (longlong *)param_1[5];
    if (plVar6 != (longlong *)0x0 && *(int *)(param_1 + 6) != 0) {
      (**(code **)(*plVar6 + 0x60))(plVar6,0);
    }
    goto LAB_1443d79aa;
  }
  (**(code **)(**(longlong **)(lVar9 + 0x10) + 200))(*(longlong **)(lVar9 + 0x10),&local_e0);
  if (local_e0 == (longlong *)0x0) {
    plVar6 = (longlong *)param_1[5];
    if (plVar6 != (longlong *)0x0 && *(int *)(param_1 + 6) != 0) {
      (**(code **)(*plVar6 + 0x60))(plVar6,0);
    }
  }
  else {
    (**(code **)(*local_e0 + 0x28))(local_e0,&local_d0,param_1 + 3);
    *(longlong **)(lVar9 + 0x40) = local_d0;
    local_68 = 0;
    local_c0 = 0x100;
    FUN_140056680(&local_108);
    iVar8 = local_fc;
    iVar7 = local_100;
    if (local_100 < 2) {
      local_f8 = (longlong *)0x0;
      uStack_f0._0_4_ = *(int *)(param_1 + 2);
      lVar10 = (longlong)(int)uStack_f0;
      _Src = (void *)param_1[1];
      if (lVar10 == 0) {
        uStack_f0._4_4_ = 0;
      }
      else {
        FUN_1446dd670(&local_f8,(int)uStack_f0,0);
        memcpy(local_f8,_Src,lVar10 * 2);
      }
    }
    else {
      iVar11 = *(int *)(param_1 + 2) + -1;
      if (*(int *)(param_1 + 2) == 0) {
        iVar11 = 0;
      }
      local_f8 = local_108;
      local_108 = (longlong *)0x0;
      uStack_f0._0_4_ = local_100;
      uStack_f0._4_4_ = local_fc;
      local_100 = 0;
      local_fc = 0;
      iVar3 = iVar11 + iVar7;
      if (iVar3 < iVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4((longlong)iVar11);
      }
      if (iVar8 < iVar3) {
        FUN_1446f8c06(&local_f8);
      }
      FUN_1400020e8(&local_f8,param_1[1],iVar11);
    }
    local_d0 = local_f8;
    local_c8 = (int)uStack_f0;
    iStack_c4 = uStack_f0._4_4_;
    local_f8 = (longlong *)0x0;
    uStack_f0 = 0;
    if (local_108 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    FUN_148ff54c0(local_b8);
    local_f8 = (longlong *)0x0;
    uStack_f0 = 0;
    (**(code **)(*local_e0 + 8))(local_e0,param_4,&local_d0,&local_f8);
    if ((int)uStack_f0 == 0) {
LAB_1443d7b78:
      if (local_f8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_f8 != (longlong *)0x0) {
      (**(code **)*local_f8)(local_f8,0);
      FUN_1446efa72(&local_f8,0,0,0x10);
      uStack_f0 = uStack_f0 & 0xffffffff00000000;
      goto LAB_1443d7b78;
    }
    FUN_148fdf350(&local_d0);
  }
  if (local_d8 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_d8 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_d8)(local_d8);
      LOCK();
      piVar1 = (int *)((longlong)local_d8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_d8 + 0x10))(local_d8);
      }
    }
  }
LAB_1443d79aa:
  if (*(longlong *)(lVar9 + 0x30) != 0) {
    (**(code **)(**(longlong **)(lVar9 + 0x10) + 0x80))(*(longlong **)(lVar9 + 0x10),&local_d0);
    (**(code **)(*local_d0 + 0x98))(local_d0,uVar5,(undefined8 *)(lVar9 + 0x30));
    plVar6 = (longlong *)CONCAT44(iStack_c4,local_c8);
    if (plVar6 != (longlong *)0x0) {
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
    *(undefined8 *)(lVar9 + 0x30) = 0;
  }
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443d7bf2 FUN_1443d7bf2 body=125 status=ok
// SIG undefined FUN_1443d7bf2(void)

undefined8 * FUN_1443d7bf2(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14ba5dac0;
  plVar1 = param_1 + 6;
  if (*(int *)(param_1 + 7) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1443d7c43;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 7) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1443d7c43:
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443d7c84 FUN_1443d7c84 body=203 status=ok
// SIG undefined FUN_1443d7c84(void)

void FUN_1443d7c84(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b438ba0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba5dac0;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],_Src,(longlong)iVar1 * 2);
  }
  puVar2[6] = 0;
  *(undefined4 *)(puVar2 + 7) = 0;
  FUN_14114e6dc(puVar2 + 6,param_1 + 0x30);
  return;
}



// FUNCTION 1443d7d50 FUN_1443d7d50 body=203 status=ok
// SIG undefined FUN_1443d7d50(void)

void FUN_1443d7d50(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b438ba0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba5dac0;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],_Src,(longlong)iVar1 * 2);
  }
  puVar2[6] = 0;
  *(undefined4 *)(puVar2 + 7) = 0;
  FUN_14114e6dc(puVar2 + 6,param_1 + 0x30);
  return;
}



// FUNCTION 1443d7e1c FUN_1443d7e1c body=261 status=ok
// SIG undefined FUN_1443d7e1c(void)

void FUN_1443d7e1c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  DWORD DVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  void *_Src;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14b438ba0;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14ba5dac0;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var2->EntryCount = 0;
  p_Var2->ContentionCount = 0;
  DVar1 = *(DWORD *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  p_Var2->Flags = DVar1;
  if ((longlong)(int)DVar1 == 0) {
    p_Var2->CreatorBackTraceIndexHigh = 0;
    p_Var2->SpareWORD = 0;
  }
  else {
    FUN_1446dd670(&p_Var2->EntryCount,DVar1,0);
    memcpy(*(void **)&p_Var2->EntryCount,_Src,(longlong)(int)DVar1 * 2);
  }
  p_Var2[1].Type = 0;
  p_Var2[1].CreatorBackTraceIndex = 0;
  *(undefined4 *)&p_Var2[1].field_0x4 = 0;
  *(undefined4 *)&p_Var2[1].CriticalSection = 0;
  FUN_14114e6dc(p_Var2 + 1,param_1 + 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443d7f0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443d7f22 FUN_1443d7f22 body=77 status=ok
// SIG undefined FUN_1443d7f22(void)

void FUN_1443d7f22(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  undefined1 auStack_38 [40];
  undefined4 local_10;
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  local_9 = param_3;
  FUN_1443d7fc0(param_1 + 0x18,&local_10,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443d7f70 FUN_1443d7f70 body=79 status=ok
// SIG undefined FUN_1443d7f70(void)

undefined8 FUN_1443d7f70(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  undefined1 auStack_38 [40];
  undefined4 local_10;
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  local_9 = param_3;
  FUN_1443d7fc0(param_1 + 0x18,&local_10,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443d7fc0 FUN_1443d7fc0 body=222 status=ok
// SIG undefined FUN_1443d7fc0(void)

void FUN_1443d7fc0(undefined8 *param_1,undefined4 *param_2,undefined1 *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *param_2;
  uVar3 = *param_1;
  plVar4 = (longlong *)param_1[3];
  if (plVar4 != (longlong *)0x0 && *(int *)(param_1 + 4) != 0) {
    (**(code **)(*plVar4 + 0x60))(plVar4,*param_3);
  }
  lVar5 = FUN_148fd89a6(uVar3,param_1 + 1);
  if (*(longlong *)(lVar5 + 0x38) != 0) {
    lVar6 = FUN_148fd89a6(uVar3,param_1 + 1);
    (**(code **)(**(longlong **)(lVar6 + 0x10) + 0x80))(*(longlong **)(lVar6 + 0x10),&local_38);
    (**(code **)(*local_38 + 0xc0))(local_38,uVar2,(undefined8 *)(lVar5 + 0x38));
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_30 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
    *(undefined8 *)(lVar5 + 0x38) = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443d80a0 FUN_1443d80a0 body=369 status=ok
// SIG undefined FUN_1443d80a0(void)

undefined8 * FUN_1443d80a0(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  lVar3 = param_2[2];
  param_1[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  param_1[3] = param_2[3];
  lVar3 = param_2[4];
  param_1[4] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  param_1[5] = &PTR_FUN_14a184370;
  bVar1 = *(byte *)(param_2 + 8);
  *(byte *)(param_1 + 8) = bVar1;
  (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[bVar1])(param_1 + 6,param_2 + 6);
  param_1[5] = &PTR_FUN_14a5af930;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = 0;
  iVar2 = *(int *)(param_2 + 0xe);
  _Src = (void *)param_2[0xd];
  *(int *)(param_1 + 0xe) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xd,iVar2,0);
    memcpy((void *)param_1[0xd],_Src,(longlong)iVar2 * 2);
  }
  param_1[0xf] = param_2[0xf];
  lVar3 = param_2[0x10];
  param_1[0x10] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  FUN_148ff4dd0(param_1 + 0x11,param_2 + 0x11);
  param_1[0x13] = param_2[0x13];
  lVar3 = param_2[0x14];
  param_1[0x14] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  param_1[0x15] = param_2[0x15];
  lVar3 = param_2[0x16];
  param_1[0x16] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 1443d8212 FUN_1443d8212 body=187 status=ok
// SIG undefined FUN_1443d8212(void)

undefined8 * FUN_1443d8212(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba5db70;
  FUN_1443cab9a(param_1 + 0x10);
  param_1[9] = &PTR_FUN_14a5af930;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  param_1[9] = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(param_1 + 0xc)])(param_1 + 10);
  plVar3 = (longlong *)param_1[8];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443d844c FUN_1443d844c body=108 status=ok
// SIG undefined FUN_1443d844c(void)

void FUN_1443d844c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 0xe) {
    FUN_1446efa72(param_2,0,0xe,0x10);
    *(undefined4 *)(param_2 + 1) = 0xe;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba5cee0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba5db70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  FUN_1443d80a0(puVar1 + 4,param_1 + 0x20);
  return;
}



// FUNCTION 1443d84b8 FUN_1443d84b8 body=108 status=ok
// SIG undefined FUN_1443d84b8(void)

void FUN_1443d84b8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 0xe) {
    FUN_1446efa72(param_2,0,0xe,0x10);
    *(undefined4 *)(param_2 + 1) = 0xe;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba5cee0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba5db70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  FUN_1443d80a0(puVar1 + 4,param_1 + 0x20);
  return;
}



// FUNCTION 1443d8524 FUN_1443d8524 body=142 status=ok
// SIG undefined FUN_1443d8524(void)

void FUN_1443d8524(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 0xe) {
    FUN_1446efa72(param_2 + 1,0,0xe,0x10);
    param_2[1].LockCount = 0xe;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ba5cee0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba5db70;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  FUN_1443d80a0(&p_Var1->EntryCount,param_1 + 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443d85a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443d85c4 FUN_1443d85c4 body=286 status=ok
// SIG undefined FUN_1443d85c4(void)

undefined8
FUN_1443d85c4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1443d86dc;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1443d86dc;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1443d86dc:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1443d868f;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1443d86e4(param_1 + 0x20,param_4,param_6);
      uVar6 = 1;
      goto LAB_1443d868f;
    }
  }
  uVar6 = 0;
LAB_1443d868f:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443d86e4 FUN_1443d86e4 body=845 status=ok
// SIG undefined FUN_1443d86e4(void)

void FUN_1443d86e4(longlong param_1,undefined8 *param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_308 [32];
  undefined8 local_2e8;
  undefined **local_2d8;
  undefined8 local_2d0;
  longlong local_2c8;
  byte local_2c0;
  undefined **local_2b8;
  undefined8 local_2b0;
  undefined4 local_2a8;
  undefined8 local_2a0;
  undefined1 local_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined **local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined1 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  undefined8 local_1e4;
  undefined8 uStack_1dc;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined8 local_1cc;
  undefined8 uStack_1c4;
  undefined8 local_1bc;
  undefined8 local_1b4;
  undefined8 uStack_1ac;
  undefined8 local_1a4;
  undefined8 local_19c;
  undefined8 uStack_194;
  undefined8 local_18c;
  undefined8 local_184;
  undefined8 uStack_17c;
  undefined4 local_174;
  undefined8 local_170;
  undefined1 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined4 local_150;
  undefined8 local_14c;
  undefined8 uStack_144;
  undefined8 local_13c;
  undefined8 local_134;
  undefined8 uStack_12c;
  undefined8 local_124;
  undefined8 uStack_11c;
  undefined4 local_114;
  undefined4 local_110;
  undefined8 local_10c;
  undefined8 uStack_104;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined **local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  longlong lStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 uStack_74;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined4 local_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_308;
  cVar1 = (**(code **)*param_2)(param_2,*(undefined8 *)(param_1 + 0x18));
  if (cVar1 != '\0') {
    local_2b0 = 0;
    local_2a8 = 0;
    local_2b8 = &PTR_FUN_14ba5ae70;
    local_2a0 = 0;
    local_298 = 0;
    local_290 = 0;
    uStack_288 = 0;
    local_280 = 0;
    uStack_278 = 0;
    local_270 = 0;
    uStack_268 = 0;
    local_260 = 0;
    uStack_258 = 0;
    local_250 = 0;
    uStack_248 = 0;
    local_240 = 0;
    local_230 = 0;
    uStack_228 = 0;
    local_220 = 0;
    local_238 = &PTR_FUN_14a5af930;
    local_218 = 0;
    uStack_210 = 0;
    local_208 = 0;
    uStack_200 = 0;
    local_1f8 = 0;
    uStack_1f0 = 0;
    local_1e8 = 2;
    local_1d4 = 0;
    local_1e4 = 0;
    uStack_1dc = 0;
    local_1d0 = 2;
    local_1cc = 0;
    uStack_1c4 = 0;
    local_1bc = 0x200000000;
    local_1b4 = 0;
    uStack_1ac = 0;
    local_1a4 = 0x200000000;
    local_19c = 0;
    uStack_194 = 0;
    local_18c = 0x200000000;
    local_184 = 0;
    uStack_17c = 0;
    local_174 = 0;
    local_170 = 2;
    local_168 = 0;
    local_160 = 0;
    uStack_158 = 0;
    local_150 = 2;
    local_14c = 0;
    uStack_144 = 0;
    local_13c = 0x200000000;
    local_114 = 0;
    local_124 = 0;
    uStack_11c = 0;
    local_134 = 0;
    uStack_12c = 0;
    local_110 = 2;
    local_fc = 0;
    local_10c = 0;
    uStack_104 = 0;
    local_f8 = 2;
    local_d8 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_f0 = &PTR_FUN_14a5af930;
    local_a0 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    lStack_b8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_98 = 2;
    local_94 = 0;
    uStack_8c = 0;
    local_84 = 0x200000000;
    local_7c = 0;
    uStack_74 = 0;
    local_6c = 0x200000000;
    local_54 = 0;
    local_64 = 0;
    uStack_5c = 0;
    local_50 = 2;
    if (DAT_14cbf5500 == 0) {
      uVar2 = FUN_1410510fd();
      DAT_14cbf5500 = FUN_140002ddd(FUN_146671502,uVar2,L"PartyMemberRepData");
    }
    local_2e8 = 0x80002000;
    cVar1 = FUN_143e6bb8c(param_3 + 0x28,DAT_14cbf5500,&local_2b8,0);
    if (cVar1 != '\0') {
      if ((longlong)(int)local_b0 != 0) {
        lVar4 = (longlong)(int)local_b0 * 0x48;
        lVar3 = lStack_b8;
        do {
          if (*(longlong *)(lVar3 + 0x30) == *(longlong *)(param_1 + 0x58)) {
            local_2d8 = &PTR_FUN_14a184370;
            local_2d0 = *(undefined8 *)(param_1 + 8);
            local_2c8 = *(longlong *)(param_1 + 0x10);
            if (local_2c8 != 0) {
              LOCK();
              *(int *)(local_2c8 + 8) = *(int *)(local_2c8 + 8) + 1;
              UNLOCK();
            }
            local_2c0 = 0;
            cVar1 = FUN_140ba41f1(lVar3,&local_2d8);
            local_2d8 = &PTR_FUN_14a184370;
            (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_2c0])(&local_2d0);
            if (cVar1 != '\0') {
              FUN_1443d8a32(param_1 + 0x60,*(undefined1 *)(lVar3 + 0x40));
              break;
            }
          }
          lVar3 = lVar3 + 0x48;
          lVar4 = lVar4 + -0x48;
        } while (lVar4 != 0);
      }
    }
    FUN_148fdc24e(&local_2b8);
  }
  if ((local_48 ^ (ulonglong)auStack_308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443d8a32 FUN_1443d8a32 body=593 status=ok
// SIG undefined FUN_1443d8a32(void)

void FUN_1443d8a32(undefined8 *param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  longlong *plVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined **local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  longlong local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar2 = (longlong *)*param_1;
  uVar9 = FUN_148fd89a6(plVar2,param_1 + 1);
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = &PTR_FUN_14a5af930;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  FUN_148fd9d40(uVar9,&local_80);
  local_80 = &PTR_FUN_14a5af930;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_80 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_68 & 0xff])(&local_78);
  if ((*(int *)(param_1 + 6) != 0) && (plVar3 = (longlong *)param_1[5], plVar3 != (longlong *)0x0))
  {
    (**(code **)(*plVar3 + 0x60))(plVar3,param_2);
  }
  uVar9 = param_1[7];
  plVar3 = (longlong *)param_1[8];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_88 = (longlong *)param_1[9];
  plVar4 = (longlong *)param_1[10];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  plVar13 = (longlong *)param_1[4];
  bVar6 = true;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
    plVar11 = (longlong *)0x0;
  }
  else {
    iVar8 = (int)plVar13[1];
    plVar11 = (longlong *)0x0;
    do {
      if (iVar8 == 0) {
        plVar13 = (longlong *)0x0;
        goto LAB_1443d8b38;
      }
      LOCK();
      iVar7 = (int)plVar13[1];
      bVar15 = iVar8 == iVar7;
      if (bVar15) {
        *(int *)(plVar13 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar15);
    plVar11 = (longlong *)param_1[3];
    bVar6 = false;
  }
LAB_1443d8b38:
  lVar10 = (**(code **)(*plVar2 + 0x180))(plVar2);
  if (plVar11 != (longlong *)0x0) {
    (**(code **)(*plVar11 + 0x280))(plVar11,uVar9);
  }
  plVar2 = local_88;
  if (lVar10 != 0) {
    if (*(longlong *)(lVar10 + 0x1f0) == 0) {
      plVar11 = (longlong *)(lVar10 + 0x458);
    }
    else {
      plVar11 = (longlong *)(*(longlong *)(lVar10 + 0x1f0) + 0xf0);
    }
    lVar10 = *local_88;
    if (lVar10 != 0) {
      lVar5 = *plVar11;
      uVar12 = (uint)lVar10;
      if ((int)(uVar12 & 0xffffff) < *(int *)(lVar5 + 0x10)) {
        lVar14 = lVar5 + 0x18;
        if (*(longlong *)(lVar5 + 0x28) != 0) {
          lVar14 = *(longlong *)(lVar5 + 0x28);
        }
        if ((*(uint *)(lVar14 + (ulonglong)((uVar12 & 0xffffff) >> 5) * 4) >> (uVar12 & 0x1f) & 1)
            != 0) {
          lVar5 = *(longlong *)(lVar5 + 8);
          lVar14 = (ulonglong)(uVar12 & 0xffffff) * 0x70;
          if (((lVar5 + lVar14 != 0) && (*(longlong *)(lVar5 + 0x60 + lVar14) == lVar10)) &&
             (*(char *)(lVar5 + 1 + lVar14) != '\x04')) {
            FUN_1405a424c();
          }
        }
      }
    }
    *plVar2 = 0;
  }
  if (!bVar6) {
    LOCK();
    plVar2 = plVar13 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443d8c84 FUN_1443d8c84 body=52 status=ok
// SIG undefined FUN_1443d8c84(void)

undefined8 * FUN_1443d8c84(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba5dbe0;
  FUN_1443cab9a(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443d8e36 FUN_1443d8e36 body=285 status=ok
// SIG undefined FUN_1443d8e36(void)

void FUN_1443d8e36(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if ((int)param_2[1] != 8) {
    FUN_1446efa72(param_2,0,8,0x10);
    *(undefined4 *)(param_2 + 1) = 8;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14ba5dc50;
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  uVar6 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)puVar2 + 0xc) = uVar4;
  *(undefined4 *)(puVar2 + 2) = uVar5;
  *(undefined4 *)((longlong)puVar2 + 0x14) = uVar6;
  *puVar2 = &PTR_FUN_14ba5dbe0;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  puVar2[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  *(int *)(puVar2 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 5,iVar1,0);
    memcpy((void *)puVar2[5],_Src,(longlong)iVar1 * 2);
  }
  puVar2[7] = *(undefined8 *)(param_1 + 0x38);
  lVar3 = *(longlong *)(param_1 + 0x40);
  puVar2[8] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  puVar2[9] = 0;
  *(undefined4 *)(puVar2 + 10) = 0;
  FUN_148ff4dd0(puVar2 + 9,param_1 + 0x48);
  puVar2[0xb] = *(undefined8 *)(param_1 + 0x58);
  lVar3 = *(longlong *)(param_1 + 0x60);
  puVar2[0xc] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  puVar2[0xd] = *(undefined8 *)(param_1 + 0x68);
  lVar3 = *(longlong *)(param_1 + 0x70);
  puVar2[0xe] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1443d8f54 FUN_1443d8f54 body=285 status=ok
// SIG undefined FUN_1443d8f54(void)

void FUN_1443d8f54(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if ((int)param_2[1] != 8) {
    FUN_1446efa72(param_2,0,8,0x10);
    *(undefined4 *)(param_2 + 1) = 8;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14ba5dc50;
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  uVar6 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)puVar2 + 0xc) = uVar4;
  *(undefined4 *)(puVar2 + 2) = uVar5;
  *(undefined4 *)((longlong)puVar2 + 0x14) = uVar6;
  *puVar2 = &PTR_FUN_14ba5dbe0;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  puVar2[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  *(int *)(puVar2 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 5,iVar1,0);
    memcpy((void *)puVar2[5],_Src,(longlong)iVar1 * 2);
  }
  puVar2[7] = *(undefined8 *)(param_1 + 0x38);
  lVar3 = *(longlong *)(param_1 + 0x40);
  puVar2[8] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  puVar2[9] = 0;
  *(undefined4 *)(puVar2 + 10) = 0;
  FUN_148ff4dd0(puVar2 + 9,param_1 + 0x48);
  puVar2[0xb] = *(undefined8 *)(param_1 + 0x58);
  lVar3 = *(longlong *)(param_1 + 0x60);
  puVar2[0xc] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  puVar2[0xd] = *(undefined8 *)(param_1 + 0x68);
  lVar3 = *(longlong *)(param_1 + 0x70);
  puVar2[0xe] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1443d9072 FUN_1443d9072 body=349 status=ok
// SIG undefined FUN_1443d9072(void)

void FUN_1443d9072(longlong param_1,LPCRITICAL_SECTION param_2)

{
  int *piVar1;
  int iVar2;
  PRTL_CRITICAL_SECTION_DEBUG p_Var3;
  undefined8 uVar4;
  void *_Src;
  _LIST_ENTRY *p_Var5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 8) {
    FUN_1446efa72(param_2 + 1,0,8,0x10);
    param_2[1].LockCount = 8;
  }
  p_Var3 = param_2[1].DebugInfo;
  *(undefined ***)p_Var3 = &PTR_LAB_14ba5dc50;
  uVar7 = *(undefined4 *)(param_1 + 0xc);
  uVar8 = *(undefined4 *)(param_1 + 0x10);
  uVar9 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)&p_Var3->CriticalSection = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)&p_Var3->CriticalSection + 4) = uVar7;
  *(undefined4 *)&(p_Var3->ProcessLocksList).Flink = uVar8;
  *(undefined4 *)((longlong)&(p_Var3->ProcessLocksList).Flink + 4) = uVar9;
  *(undefined ***)p_Var3 = &PTR_FUN_14ba5dbe0;
  (p_Var3->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  p_Var3->EntryCount = (int)uVar4;
  p_Var3->ContentionCount = (int)((ulonglong)uVar4 >> 0x20);
  p_Var3->Flags = 0;
  p_Var3->CreatorBackTraceIndexHigh = 0;
  p_Var3->SpareWORD = 0;
  iVar2 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  p_Var3[1].Type = (short)iVar2;
  p_Var3[1].CreatorBackTraceIndex = (short)((uint)iVar2 >> 0x10);
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)&p_Var3[1].field_0x4 = 0;
  }
  else {
    FUN_1446dd670(&p_Var3->Flags,iVar2,0);
    memcpy(*(void **)&p_Var3->Flags,_Src,(longlong)iVar2 * 2);
  }
  p_Var3[1].CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  p_Var5 = *(_LIST_ENTRY **)(param_1 + 0x40);
  p_Var3[1].ProcessLocksList.Flink = p_Var5;
  if (p_Var5 != (_LIST_ENTRY *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)&p_Var5->Blink + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  p_Var3[1].ProcessLocksList.Blink = (_LIST_ENTRY *)0x0;
  p_Var3[1].EntryCount = 0;
  FUN_148ff4dd0(&p_Var3[1].ProcessLocksList.Blink,param_1 + 0x48);
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  p_Var3[1].Flags = (int)uVar4;
  p_Var3[1].CreatorBackTraceIndexHigh = (short)((ulonglong)uVar4 >> 0x20);
  p_Var3[1].SpareWORD = (short)((ulonglong)uVar4 >> 0x30);
  lVar6 = *(longlong *)(param_1 + 0x60);
  p_Var3[2].Type = (short)lVar6;
  p_Var3[2].CreatorBackTraceIndex = (short)((ulonglong)lVar6 >> 0x10);
  *(int *)&p_Var3[2].field_0x4 = (int)((ulonglong)lVar6 >> 0x20);
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  p_Var3[2].CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x68);
  p_Var5 = *(_LIST_ENTRY **)(param_1 + 0x70);
  p_Var3[2].ProcessLocksList.Flink = p_Var5;
  if (p_Var5 != (_LIST_ENTRY *)0x0) {
    LOCK();
    *(int *)&p_Var5->Blink = *(int *)&p_Var5->Blink + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443d91b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443d91dc FUN_1443d91dc body=272 status=ok
// SIG undefined FUN_1443d91dc(void)

undefined8 FUN_1443d91dc(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1443d92e6;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1443d92e6;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1443d92e6:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1443d929a;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1443d8a32(param_1 + 0x20,
                    CONCAT71((int7)((ulonglong)lVar5 >> 8),*(undefined1 *)(param_1 + 8)));
      uVar6 = 1;
      goto LAB_1443d929a;
    }
  }
  uVar6 = 0;
LAB_1443d929a:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443d92ee FUN_1443d92ee body=163 status=ok
// SIG undefined FUN_1443d92ee(void)

undefined8 * FUN_1443d92ee(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14ba5dcc0;
  plVar4 = param_1 + 8;
  if (*(int *)(param_1 + 9) != 0) {
    puVar3 = (undefined8 *)*plVar4;
    if (puVar3 == (undefined8 *)0x0) goto LAB_1443d933f;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar4,0,0,0x10);
    *(undefined4 *)(param_1 + 9) = 0;
  }
  if (*plVar4 != 0) {
    FUN_1400020a8();
  }
LAB_1443d933f:
  plVar4 = (longlong *)param_1[7];
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
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443d93a6 FUN_1443d93a6 body=228 status=ok
// SIG undefined FUN_1443d93a6(void)

void FUN_1443d93a6(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  longlong lVar3;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14ba5dd30;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba5dcc0;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],_Src,(longlong)iVar1 * 2);
  }
  puVar2[6] = *(undefined8 *)(param_1 + 0x30);
  lVar3 = *(longlong *)(param_1 + 0x38);
  puVar2[7] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  puVar2[8] = 0;
  *(undefined4 *)(puVar2 + 9) = 0;
  FUN_14114e6dc(puVar2 + 8,param_1 + 0x40);
  return;
}



// FUNCTION 1443d948a FUN_1443d948a body=228 status=ok
// SIG undefined FUN_1443d948a(void)

void FUN_1443d948a(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  longlong lVar3;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14ba5dd30;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba5dcc0;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],_Src,(longlong)iVar1 * 2);
  }
  puVar2[6] = *(undefined8 *)(param_1 + 0x30);
  lVar3 = *(longlong *)(param_1 + 0x38);
  puVar2[7] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  puVar2[8] = 0;
  *(undefined4 *)(puVar2 + 9) = 0;
  FUN_14114e6dc(puVar2 + 8,param_1 + 0x40);
  return;
}



// FUNCTION 1443d956e FUN_1443d956e body=288 status=ok
// SIG undefined FUN_1443d956e(void)

void FUN_1443d956e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  DWORD DVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  void *_Src;
  undefined8 uVar3;
  _RTL_CRITICAL_SECTION *p_Var4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14ba5dd30;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14ba5dcc0;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var2->EntryCount = 0;
  p_Var2->ContentionCount = 0;
  DVar1 = *(DWORD *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  p_Var2->Flags = DVar1;
  if ((longlong)(int)DVar1 == 0) {
    p_Var2->CreatorBackTraceIndexHigh = 0;
    p_Var2->SpareWORD = 0;
  }
  else {
    FUN_1446dd670(&p_Var2->EntryCount,DVar1,0);
    memcpy(*(void **)&p_Var2->EntryCount,_Src,(longlong)(int)DVar1 * 2);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  p_Var2[1].Type = (short)uVar3;
  p_Var2[1].CreatorBackTraceIndex = (short)((ulonglong)uVar3 >> 0x10);
  *(int *)&p_Var2[1].field_0x4 = (int)((ulonglong)uVar3 >> 0x20);
  p_Var4 = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  p_Var2[1].CriticalSection = p_Var4;
  if (p_Var4 != (_RTL_CRITICAL_SECTION *)0x0) {
    LOCK();
    p_Var4->LockCount = p_Var4->LockCount + 1;
    UNLOCK();
  }
  p_Var2[1].ProcessLocksList.Flink = (_LIST_ENTRY *)0x0;
  *(undefined4 *)&p_Var2[1].ProcessLocksList.Blink = 0;
  FUN_14114e6dc(&p_Var2[1].ProcessLocksList,param_1 + 0x40);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443d9678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443d968e FUN_1443d968e body=70 status=ok
// SIG undefined FUN_1443d968e(void)

void FUN_1443d968e(longlong param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_1443d9720(param_1 + 0x18,&local_9,param_3,param_5);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443d96d6 FUN_1443d96d6 body=72 status=ok
// SIG undefined FUN_1443d96d6(void)

undefined8
FUN_1443d96d6(longlong param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_1443d9720(param_1 + 0x18,&local_9,param_3,param_5);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443d9720 FUN_1443d9720 body=860 status=ok
// SIG undefined FUN_1443d9720(void)

void FUN_1443d9720(undefined8 *param_1,char *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 uVar4;
  void *pvVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  longlong *local_a8;
  undefined8 local_a0;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  longlong *local_88;
  longlong *plStack_80;
  undefined8 *local_78;
  int local_70;
  undefined8 *local_68;
  int local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*param_2 == '\x01') {
    uVar4 = *param_1;
    local_b8 = 0x11111111;
    (**(code **)(*(longlong *)param_1[3] + 0xf0))((longlong *)param_1[3],&local_58);
    lVar8 = local_58;
    if (local_58 != 0) {
      local_88 = (longlong *)param_1[3];
      local_98 = (void *)0x0;
      local_90 = *(int *)(param_1 + 2);
      lVar10 = (longlong)local_90;
      pvVar5 = (void *)param_1[1];
      local_a8 = local_88;
      local_a0 = uVar4;
      if (lVar10 == 0) {
        local_8c = 0;
      }
      else {
        FUN_1446dd670(&local_98,local_90,0);
        memcpy(local_98,pvVar5,lVar10 * 2);
        local_88 = (longlong *)param_1[3];
      }
      plStack_80 = (longlong *)param_1[4];
      if (plStack_80 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plStack_80 + 8) = *(int *)((longlong)plStack_80 + 8) + 1;
        UNLOCK();
      }
      local_78 = (undefined8 *)0x0;
      local_70 = 0;
      FUN_14114e6dc(&local_78,param_1 + 5);
      local_68 = (undefined8 *)0x0;
      local_60 = 0;
      FUN_1446efa72(&local_68,0,5,0x10);
      puVar7 = local_68;
      pvVar5 = local_98;
      local_60 = 5;
      *local_68 = &PTR_LAB_14ba5de10;
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 1;
      lVar10 = DAT_14c758608 + 1;
      if (lVar9 == 0) {
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 2;
        lVar10 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar10;
      local_68[2] = lVar9;
      *local_68 = &PTR_FUN_14ba5dda0;
      local_68[3] = local_a0;
      local_68[4] = 0;
      lVar10 = (longlong)local_90;
      *(int *)(local_68 + 5) = local_90;
      if (lVar10 == 0) {
        *(undefined4 *)((longlong)local_68 + 0x2c) = 0;
      }
      else {
        puVar1 = local_68 + 4;
        FUN_1446dd670(puVar1,local_90,0);
        memcpy((void *)*puVar1,pvVar5,lVar10 * 2);
      }
      puVar7[6] = local_88;
      puVar7[7] = plStack_80;
      local_88 = (longlong *)0x0;
      plStack_80 = (longlong *)0x0;
      puVar7[8] = 0;
      *(undefined4 *)(puVar7 + 9) = 0;
      FUN_14114e6dc(puVar7 + 8,&local_78);
      (**(code **)(*local_a8 + 0x30))(local_a8,param_3,local_58,&local_68);
      if (local_60 == 0) {
LAB_1443d9956:
        if (local_68 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_68 != (undefined8 *)0x0) {
        (**(code **)*local_68)(local_68,0);
        FUN_1446efa72(&local_68,0,0,0x10);
        local_60 = 0;
        goto LAB_1443d9956;
      }
      if (local_70 == 0) {
LAB_1443d9997:
        if (local_78 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_78 != (undefined8 *)0x0) {
        (**(code **)*local_78)(local_78,0);
        FUN_1446efa72(&local_78,0,0,0x10);
        local_70 = 0;
        goto LAB_1443d9997;
      }
      plVar6 = plStack_80;
      if (plStack_80 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_80 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plStack_80)(plStack_80);
          LOCK();
          piVar3 = (int *)((longlong)plVar6 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      if (local_98 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_50 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar3 = (int *)((longlong)local_50 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*local_50 + 0x10))(local_50);
        }
      }
    }
    if (lVar8 != 0) goto LAB_1443d9a27;
  }
  plVar6 = (longlong *)param_1[5];
  if (plVar6 != (longlong *)0x0 && *(int *)(param_1 + 6) != 0) {
    (**(code **)(*plVar6 + 0x60))(plVar6,0);
  }
LAB_1443d9a27:
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443d9a7e FUN_1443d9a7e body=163 status=ok
// SIG undefined FUN_1443d9a7e(void)

undefined8 * FUN_1443d9a7e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14ba5dda0;
  plVar4 = param_1 + 8;
  if (*(int *)(param_1 + 9) != 0) {
    puVar3 = (undefined8 *)*plVar4;
    if (puVar3 == (undefined8 *)0x0) goto LAB_1443d9acf;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar4,0,0,0x10);
    *(undefined4 *)(param_1 + 9) = 0;
  }
  if (*plVar4 != 0) {
    FUN_1400020a8();
  }
LAB_1443d9acf:
  plVar4 = (longlong *)param_1[7];
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
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443d9b36 FUN_1443d9b36 body=228 status=ok
// SIG undefined FUN_1443d9b36(void)

void FUN_1443d9b36(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  longlong lVar3;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14ba5de10;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba5dda0;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],_Src,(longlong)iVar1 * 2);
  }
  puVar2[6] = *(undefined8 *)(param_1 + 0x30);
  lVar3 = *(longlong *)(param_1 + 0x38);
  puVar2[7] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  puVar2[8] = 0;
  *(undefined4 *)(puVar2 + 9) = 0;
  FUN_14114e6dc(puVar2 + 8,param_1 + 0x40);
  return;
}



// FUNCTION 1443d9c1a FUN_1443d9c1a body=228 status=ok
// SIG undefined FUN_1443d9c1a(void)

void FUN_1443d9c1a(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  longlong lVar3;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14ba5de10;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba5dda0;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],_Src,(longlong)iVar1 * 2);
  }
  puVar2[6] = *(undefined8 *)(param_1 + 0x30);
  lVar3 = *(longlong *)(param_1 + 0x38);
  puVar2[7] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  puVar2[8] = 0;
  *(undefined4 *)(puVar2 + 9) = 0;
  FUN_14114e6dc(puVar2 + 8,param_1 + 0x40);
  return;
}



// FUNCTION 1443d9cfe FUN_1443d9cfe body=288 status=ok
// SIG undefined FUN_1443d9cfe(void)

void FUN_1443d9cfe(longlong param_1,LPCRITICAL_SECTION param_2)

{
  DWORD DVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  void *_Src;
  undefined8 uVar3;
  _RTL_CRITICAL_SECTION *p_Var4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14ba5de10;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14ba5dda0;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var2->EntryCount = 0;
  p_Var2->ContentionCount = 0;
  DVar1 = *(DWORD *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  p_Var2->Flags = DVar1;
  if ((longlong)(int)DVar1 == 0) {
    p_Var2->CreatorBackTraceIndexHigh = 0;
    p_Var2->SpareWORD = 0;
  }
  else {
    FUN_1446dd670(&p_Var2->EntryCount,DVar1,0);
    memcpy(*(void **)&p_Var2->EntryCount,_Src,(longlong)(int)DVar1 * 2);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  p_Var2[1].Type = (short)uVar3;
  p_Var2[1].CreatorBackTraceIndex = (short)((ulonglong)uVar3 >> 0x10);
  *(int *)&p_Var2[1].field_0x4 = (int)((ulonglong)uVar3 >> 0x20);
  p_Var4 = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  p_Var2[1].CriticalSection = p_Var4;
  if (p_Var4 != (_RTL_CRITICAL_SECTION *)0x0) {
    LOCK();
    p_Var4->LockCount = p_Var4->LockCount + 1;
    UNLOCK();
  }
  p_Var2[1].ProcessLocksList.Flink = (_LIST_ENTRY *)0x0;
  *(undefined4 *)&p_Var2[1].ProcessLocksList.Blink = 0;
  FUN_14114e6dc(&p_Var2[1].ProcessLocksList,param_1 + 0x40);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443d9e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443d9e1e FUN_1443d9e1e body=66 status=ok
// SIG undefined FUN_1443d9e1e(void)

void FUN_1443d9e1e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_4;
  FUN_1443d9ea8(param_1 + 0x18,param_2,param_3,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443d9e62 FUN_1443d9e62 body=68 status=ok
// SIG undefined FUN_1443d9e62(void)

undefined8 FUN_1443d9e62(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_4;
  FUN_1443d9ea8(param_1 + 0x18,param_2,param_3,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443d9ea8 FUN_1443d9ea8 body=242 status=ok
// SIG undefined FUN_1443d9ea8(void)

void FUN_1443d9ea8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  cVar3 = *param_4;
  if (cVar3 == '\x01') {
    lVar6 = FUN_148fd89a6(*param_1,param_1 + 1);
    lVar5 = *(longlong *)(lVar6 + 0x20);
    plVar4 = *(longlong **)(lVar6 + 0x28);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
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
    if (lVar5 != 0) {
      (**(code **)(*(longlong *)param_1[3] + 0xb0))
                ((longlong *)param_1[3],param_2,param_3,&DAT_14cb8e138,lVar5);
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
  plVar4 = (longlong *)param_1[5];
  if (plVar4 == (longlong *)0x0 || *(int *)(param_1 + 6) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001443d9efc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x60))(plVar4,cVar3 == '\x01');
  return;
}



// FUNCTION 1443d9f9a FUN_1443d9f9a body=163 status=ok
// SIG undefined FUN_1443d9f9a(void)

undefined8 * FUN_1443d9f9a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14ba5de80;
  plVar4 = param_1 + 8;
  if (*(int *)(param_1 + 9) != 0) {
    puVar3 = (undefined8 *)*plVar4;
    if (puVar3 == (undefined8 *)0x0) goto LAB_1443d9feb;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar4,0,0,0x10);
    *(undefined4 *)(param_1 + 9) = 0;
  }
  if (*plVar4 != 0) {
    FUN_1400020a8();
  }
LAB_1443d9feb:
  plVar4 = (longlong *)param_1[7];
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
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443da052 FUN_1443da052 body=228 status=ok
// SIG undefined FUN_1443da052(void)

void FUN_1443da052(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  longlong lVar3;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14ba5de10;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba5de80;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],_Src,(longlong)iVar1 * 2);
  }
  puVar2[6] = *(undefined8 *)(param_1 + 0x30);
  lVar3 = *(longlong *)(param_1 + 0x38);
  puVar2[7] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  puVar2[8] = 0;
  *(undefined4 *)(puVar2 + 9) = 0;
  FUN_14114e6dc(puVar2 + 8,param_1 + 0x40);
  return;
}



// FUNCTION 1443da136 FUN_1443da136 body=228 status=ok
// SIG undefined FUN_1443da136(void)

void FUN_1443da136(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  longlong lVar3;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14ba5de10;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba5de80;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],_Src,(longlong)iVar1 * 2);
  }
  puVar2[6] = *(undefined8 *)(param_1 + 0x30);
  lVar3 = *(longlong *)(param_1 + 0x38);
  puVar2[7] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  puVar2[8] = 0;
  *(undefined4 *)(puVar2 + 9) = 0;
  FUN_14114e6dc(puVar2 + 8,param_1 + 0x40);
  return;
}



// FUNCTION 1443da21a FUN_1443da21a body=288 status=ok
// SIG undefined FUN_1443da21a(void)

void FUN_1443da21a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  DWORD DVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  void *_Src;
  undefined8 uVar3;
  _RTL_CRITICAL_SECTION *p_Var4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14ba5de10;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14ba5de80;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var2->EntryCount = 0;
  p_Var2->ContentionCount = 0;
  DVar1 = *(DWORD *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  p_Var2->Flags = DVar1;
  if ((longlong)(int)DVar1 == 0) {
    p_Var2->CreatorBackTraceIndexHigh = 0;
    p_Var2->SpareWORD = 0;
  }
  else {
    FUN_1446dd670(&p_Var2->EntryCount,DVar1,0);
    memcpy(*(void **)&p_Var2->EntryCount,_Src,(longlong)(int)DVar1 * 2);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  p_Var2[1].Type = (short)uVar3;
  p_Var2[1].CreatorBackTraceIndex = (short)((ulonglong)uVar3 >> 0x10);
  *(int *)&p_Var2[1].field_0x4 = (int)((ulonglong)uVar3 >> 0x20);
  p_Var4 = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  p_Var2[1].CriticalSection = p_Var4;
  if (p_Var4 != (_RTL_CRITICAL_SECTION *)0x0) {
    LOCK();
    p_Var4->LockCount = p_Var4->LockCount + 1;
    UNLOCK();
  }
  p_Var2[1].ProcessLocksList.Flink = (_LIST_ENTRY *)0x0;
  *(undefined4 *)&p_Var2[1].ProcessLocksList.Blink = 0;
  FUN_14114e6dc(&p_Var2[1].ProcessLocksList,param_1 + 0x40);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443da324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443da33a FUN_1443da33a body=66 status=ok
// SIG undefined FUN_1443da33a(void)

void FUN_1443da33a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_4;
  FUN_1443da3c4(param_1 + 0x18,param_2,param_3,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443da37e FUN_1443da37e body=68 status=ok
// SIG undefined FUN_1443da37e(void)

undefined8 FUN_1443da37e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_4;
  FUN_1443da3c4(param_1 + 0x18,param_2,param_3,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


