// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148e6a174 FUN_148e6a174 body=79 status=ok
// SIG undefined FUN_148e6a174(void)

void FUN_148e6a174(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  FUN_140c8411c(param_1 + 0x70,&local_18);
  FUN_1410d0f68(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e6a1c4 FUN_148e6a1c4 body=46 status=ok
// SIG undefined FUN_148e6a1c4(void)

longlong FUN_148e6a1c4(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = FUN_145c4ace0();
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0x60) <= (int)uVar1)) {
    lVar2 = 0;
  }
  else {
    lVar2 = (ulonglong)uVar1 * 0x90 + *(longlong *)(param_1 + 0x58);
  }
  return lVar2;
}



// FUNCTION 148e6a1f2 FUN_148e6a1f2 body=1084 status=ok
// SIG undefined FUN_148e6a1f2(void)

void FUN_148e6a1f2(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  wchar_t *pwVar5;
  char *pcVar6;
  undefined1 auStack_148 [32];
  longlong **local_128;
  longlong **local_120;
  longlong **local_118;
  longlong *local_108 [2];
  undefined1 local_f8 [16];
  longlong *local_e8 [2];
  longlong *local_d8 [2];
  longlong *local_c8 [2];
  undefined1 local_b8 [16];
  longlong *local_a8 [2];
  longlong *local_98 [2];
  longlong *local_88 [2];
  longlong local_78;
  longlong *plStack_70;
  undefined4 local_68;
  longlong local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (*param_2 != 0) {
    FUN_144a787a6(param_1,param_2 + 3);
    FUN_148c56536(param_1 + 0x10,param_2 + 1);
    *(uint *)(param_1 + 0x24) = (uint)*(byte *)(param_2 + 7);
    *(uint *)(param_1 + 0x20) = (uint)*(byte *)((longlong)param_2 + 0x39);
    FUN_144a787a6(param_1 + 0x50,param_2 + 5);
    local_78 = 0;
    plStack_70 = (longlong *)0x0;
    FUN_1413a4536(local_88,*(undefined4 *)(param_1 + 0x20),0,&local_78);
    plVar3 = plStack_70;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar4 = plStack_70 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plStack_70)(plStack_70);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    local_78 = 0;
    plStack_70 = (longlong *)0x0;
    FUN_1413a4536(local_98,*(undefined4 *)(param_1 + 0x24),0,&local_78);
    plVar3 = plStack_70;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar4 = plStack_70 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plStack_70)(plStack_70);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (*(int *)(param_1 + 0x28) == 0) {
      local_78 = 0;
      plStack_70 = (longlong *)0x0;
      local_68 = 0;
      local_60 = 0;
      uStack_58 = 0;
      FUN_1446ddda2(&local_78,"FirmwareRankTextFormat",0);
      FUN_1410d1eba(local_c8,&local_78);
      FUN_14023409e(local_b8,local_c8,1);
      local_128 = (longlong **)0x14b9bcf28;
      local_120 = local_98;
      FUN_148e6a630(local_a8,local_b8,"count",local_88);
      FUN_140008f88(param_1 + 0x40,local_a8);
      if (local_a8[0] != (longlong *)0x0) {
        (**(code **)(*local_a8[0] + 0x10))();
      }
      if (local_c8[0] != (longlong *)0x0) {
        (**(code **)(*local_c8[0] + 0x10))();
      }
      if (local_60 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      local_78 = 0;
      plStack_70 = (longlong *)0x0;
      FUN_1413a4536(local_a8,*(int *)(param_1 + 0x28),0,&local_78);
      plVar3 = plStack_70;
      if (plStack_70 != (longlong *)0x0) {
        LOCK();
        plVar4 = plStack_70 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*plStack_70)(plStack_70);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      if (*(int *)(param_1 + 0x28) < 1) {
        pwVar5 = L"-`[Left Bracket";
      }
      else {
        pwVar5 = L"+湡d牯伀数慲潴⁲潎⁴潆湵d潮t慖畬⁥潎⁴潆湵d";
      }
      FUN_1400b22c2(&local_78,pwVar5);
      FUN_140233b1a(local_c8,&local_78);
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      if (*(int *)(param_1 + 0x28) < 1) {
        pcVar6 = "delta_neg";
      }
      else {
        pcVar6 = "delta_pos";
      }
      FUN_1400b22c2(&local_78,pcVar6);
      FUN_140233b1a(local_d8,&local_78);
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      local_78 = 0;
      plStack_70 = (longlong *)0x0;
      local_68 = 0;
      local_60 = 0;
      uStack_58 = 0;
      FUN_1446ddda2(&local_78,"FirmwareRankDeltaFormat",0);
      FUN_1410d1eba(local_108,&local_78);
      FUN_14023409e(local_f8,local_108,1);
      local_128 = local_c8;
      local_120 = local_a8;
      local_118 = local_98;
      FUN_148e6a714(local_e8,local_f8,local_88,local_d8);
      FUN_140008f88(param_1 + 0x40,local_e8);
      if (local_e8[0] != (longlong *)0x0) {
        (**(code **)(*local_e8[0] + 0x10))();
      }
      if (local_108[0] != (longlong *)0x0) {
        (**(code **)(*local_108[0] + 0x10))();
      }
      if (local_60 != 0) {
        FUN_1400020a8();
      }
      if (local_d8[0] != (longlong *)0x0) {
        (**(code **)(*local_d8[0] + 0x10))();
      }
      if (local_c8[0] != (longlong *)0x0) {
        (**(code **)(*local_c8[0] + 0x10))();
      }
      if (local_a8[0] != (longlong *)0x0) {
        (**(code **)(*local_a8[0] + 0x10))();
      }
    }
    lVar2 = *param_2;
    plVar3 = *(longlong **)(lVar2 + 0x18);
    plVar4 = *(longlong **)(param_1 + 0x30);
    if (plVar4 != plVar3) {
      *(longlong **)(param_1 + 0x30) = plVar3;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(lVar2 + 0x20);
    if (local_98[0] != (longlong *)0x0) {
      (**(code **)(*local_98[0] + 0x10))();
    }
    if (local_88[0] != (longlong *)0x0) {
      (**(code **)(*local_88[0] + 0x10))();
    }
  }
  if ((local_50 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e6a630 FUN_148e6a630 body=227 status=ok
// SIG undefined FUN_148e6a630(void)

undefined8
FUN_148e6a630(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14598e1ac(&local_58,2);
  FUN_148e6b742(&local_58,param_3,param_4);
  FUN_148e6b938(&local_58,param_5,param_6);
  FUN_14582acda(param_1,param_2,&local_58);
  FUN_14010f8af(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e6a714 FUN_148e6a714 body=233 status=ok
// SIG undefined FUN_148e6a714(void)

undefined8
FUN_148e6a714(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  ulonglong uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14598e1ac(&local_68,5);
  local_78 = param_6;
  uStack_70 = param_7;
  FUN_148e6bb2d(&local_68,param_3,param_4,param_5);
  FUN_14582acda(param_1,param_2,&local_68);
  FUN_14010f8af(local_68,uStack_60 & 0xffffffff);
  if (local_68 != 0) {
    FUN_1400020a8();
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e6a7fe FUN_148e6a7fe body=43 status=ok
// SIG undefined FUN_148e6a7fe(void)

undefined8 * FUN_148e6a7fe(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_144a787a6(param_1 + 2,&DAT_14cbd9108);
  return param_1;
}



// FUNCTION 148e6a82a FUN_148e6a82a body=31 status=ok
// SIG undefined FUN_148e6a82a(void)

undefined8 FUN_148e6a82a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e6a864 FUN_148e6a864 body=29 status=ok
// SIG undefined FUN_148e6a864(void)

bool FUN_148e6a864(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148e6a882 FUN_148e6a882 body=26 status=ok
// SIG undefined FUN_148e6a882(void)

bool FUN_148e6a882(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148e6a89c FUN_148e6a89c body=101 status=ok
// SIG undefined FUN_148e6a89c(void)

void FUN_148e6a89c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b982300;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9bcad0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e6a902 FUN_148e6a902 body=101 status=ok
// SIG undefined FUN_148e6a902(void)

void FUN_148e6a902(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b982300;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9bcad0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e6a968 FUN_148e6a968 body=134 status=ok
// SIG undefined FUN_148e6a968(void)

void FUN_148e6a968(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b982300;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9bcad0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148e6a9df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e6a9ee FUN_148e6a9ee body=44 status=ok
// SIG undefined FUN_148e6a9ee(void)

void FUN_148e6a9ee(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e6aa17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148e6aa1a FUN_148e6aa1a body=31 status=ok
// SIG undefined FUN_148e6aa1a(void)

undefined8 FUN_148e6aa1a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e6aa54 FUN_148e6aa54 body=101 status=ok
// SIG undefined FUN_148e6aa54(void)

void FUN_148e6aa54(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b961ce0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9bcb40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e6aaba FUN_148e6aaba body=101 status=ok
// SIG undefined FUN_148e6aaba(void)

void FUN_148e6aaba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b961ce0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9bcb40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e6ab20 FUN_148e6ab20 body=134 status=ok
// SIG undefined FUN_148e6ab20(void)

void FUN_148e6ab20(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b961ce0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9bcb40;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148e6ab97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e6aba6 FUN_148e6aba6 body=62 status=ok
// SIG undefined FUN_148e6aba6(void)

void FUN_148e6aba6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e6abe1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148e6abe4 FUN_148e6abe4 body=31 status=ok
// SIG undefined FUN_148e6abe4(void)

undefined8 FUN_148e6abe4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e6ac1e FUN_148e6ac1e body=29 status=ok
// SIG undefined FUN_148e6ac1e(void)

bool FUN_148e6ac1e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148e6ac3c FUN_148e6ac3c body=26 status=ok
// SIG undefined FUN_148e6ac3c(void)

bool FUN_148e6ac3c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148e6ac56 FUN_148e6ac56 body=101 status=ok
// SIG undefined FUN_148e6ac56(void)

void FUN_148e6ac56(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9bcc20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9bcbb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e6acbc FUN_148e6acbc body=101 status=ok
// SIG undefined FUN_148e6acbc(void)

void FUN_148e6acbc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9bcc20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9bcbb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e6ad22 FUN_148e6ad22 body=134 status=ok
// SIG undefined FUN_148e6ad22(void)

void FUN_148e6ad22(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b9bcc20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9bcbb0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148e6ad99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e6ada8 FUN_148e6ada8 body=62 status=ok
// SIG undefined FUN_148e6ada8(void)

void FUN_148e6ada8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e6ade3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148e6ade8 FUN_148e6ade8 body=31 status=ok
// SIG undefined FUN_148e6ade8(void)

undefined8 FUN_148e6ade8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e6ae22 FUN_148e6ae22 body=101 status=ok
// SIG undefined FUN_148e6ae22(void)

void FUN_148e6ae22(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9bcc90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e6ae88 FUN_148e6ae88 body=101 status=ok
// SIG undefined FUN_148e6ae88(void)

void FUN_148e6ae88(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9bcc90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e6aeee FUN_148e6aeee body=134 status=ok
// SIG undefined FUN_148e6aeee(void)

void FUN_148e6aeee(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9bcc90;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148e6af65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e6af74 FUN_148e6af74 body=39 status=ok
// SIG undefined FUN_148e6af74(void)

void FUN_148e6af74(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e6af97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148e6afb6 FUN_148e6afb6 body=29 status=ok
// SIG undefined FUN_148e6afb6(void)

bool FUN_148e6afb6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148e6afd4 FUN_148e6afd4 body=26 status=ok
// SIG undefined FUN_148e6afd4(void)

bool FUN_148e6afd4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148e6afee FUN_148e6afee body=24 status=ok
// SIG undefined FUN_148e6afee(void)

bool FUN_148e6afee(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148e6b006 FUN_148e6b006 body=101 status=ok
// SIG undefined FUN_148e6b006(void)

void FUN_148e6b006(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9bcd00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e6b06c FUN_148e6b06c body=134 status=ok
// SIG undefined FUN_148e6b06c(void)

void FUN_148e6b06c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4665f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9bcd00;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148e6b0e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e6b0f2 FUN_148e6b0f2 body=44 status=ok
// SIG undefined FUN_148e6b0f2(void)

void FUN_148e6b0f2(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e6b11b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148e6b138 FUN_148e6b138 body=101 status=ok
// SIG undefined FUN_148e6b138(void)

void FUN_148e6b138(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9ba770;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9bcd70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e6b19e FUN_148e6b19e body=134 status=ok
// SIG undefined FUN_148e6b19e(void)

void FUN_148e6b19e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b9ba770;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9bcd70;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148e6b215. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e6b224 FUN_148e6b224 body=44 status=ok
// SIG undefined FUN_148e6b224(void)

void FUN_148e6b224(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e6b24d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148e6b26a FUN_148e6b26a body=101 status=ok
// SIG undefined FUN_148e6b26a(void)

void FUN_148e6b26a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b421670;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9bcde0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e6b2d0 FUN_148e6b2d0 body=134 status=ok
// SIG undefined FUN_148e6b2d0(void)

void FUN_148e6b2d0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b421670;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9bcde0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148e6b347. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e6b356 FUN_148e6b356 body=52 status=ok
// SIG undefined FUN_148e6b356(void)

void FUN_148e6b356(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e6b387. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148e6b38a FUN_148e6b38a body=86 status=ok
// SIG undefined FUN_148e6b38a(void)

void FUN_148e6b38a(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = FUN_144a7afa6(param_2 + 1,param_1 + 1);
  if ((cVar4 == '\0') || (*(int *)(param_1 + 5) == 0)) {
    *param_1 = *param_2;
    uVar1 = *(undefined4 *)((longlong)param_2 + 0xc);
    uVar2 = *(undefined4 *)(param_2 + 2);
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
    *(undefined4 *)(param_1 + 2) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
    FUN_144a787a6(param_1 + 3,param_2 + 3);
    *(int *)(param_1 + 5) = *(int *)(param_1 + 5) + 1;
  }
  return;
}



// FUNCTION 148e6b3fa FUN_148e6b3fa body=29 status=ok
// SIG undefined FUN_148e6b3fa(void)

bool FUN_148e6b3fa(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148e6b418 FUN_148e6b418 body=26 status=ok
// SIG undefined FUN_148e6b418(void)

bool FUN_148e6b418(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148e6b432 FUN_148e6b432 body=93 status=ok
// SIG undefined FUN_148e6b432(void)

void FUN_148e6b432(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b41bb90;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9bce50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148e6b490 FUN_148e6b490 body=126 status=ok
// SIG undefined FUN_148e6b490(void)

void FUN_148e6b490(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b41bb90;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9bce50;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148e6b4ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e6b50e FUN_148e6b50e body=54 status=ok
// SIG undefined FUN_148e6b50e(void)

void FUN_148e6b50e(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e6b541. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3);
  return;
}



// FUNCTION 148e6b55e FUN_148e6b55e body=29 status=ok
// SIG undefined FUN_148e6b55e(void)

bool FUN_148e6b55e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148e6b57c FUN_148e6b57c body=26 status=ok
// SIG undefined FUN_148e6b57c(void)

bool FUN_148e6b57c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148e6b596 FUN_148e6b596 body=93 status=ok
// SIG undefined FUN_148e6b596(void)

void FUN_148e6b596(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9bcec0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148e6b5f4 FUN_148e6b5f4 body=126 status=ok
// SIG undefined FUN_148e6b5f4(void)

void FUN_148e6b5f4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9bcec0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148e6b663. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e6b672 FUN_148e6b672 body=35 status=ok
// SIG undefined FUN_148e6b672(void)

void FUN_148e6b672(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e6b691. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 148e6b696 FUN_148e6b696 body=57 status=ok
// SIG undefined FUN_148e6b696(void)

void FUN_148e6b696(undefined8 *param_1,int param_2)

{
  FUN_1407dde2a(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_148e3b3c2(param_1,param_2);
  return;
}



// FUNCTION 148e6b6d0 FUN_148e6b6d0 body=113 status=ok
// SIG undefined FUN_148e6b6d0(void)

void FUN_148e6b6d0(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x90,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x90)) {
      uVar2 = uVar1 / 0x90 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x90,8);
  }
  return;
}



// FUNCTION 148e6b742 FUN_148e6b742 body=500 status=ok
// SIG undefined FUN_148e6b742(void)

longlong FUN_148e6b742(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  wchar_t *_Str1;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  longlong *local_60;
  wchar_t *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar7 = *(uint *)(param_1 + 1);
  local_70 = param_2;
  if ((int)uVar7 < 1) {
    uVar8 = 0;
  }
  else {
    lVar2 = *param_1;
    uVar8 = 0;
    local_68 = param_3;
    local_60 = param_1;
    do {
      uVar1 = (uVar7 >> 1) + uVar8;
      lVar9 = (ulonglong)uVar1 * 0x30;
      FUN_1400b22c2(&local_58,local_70);
      pwVar6 = local_58;
      pwVar5 = local_58;
      if (local_50 == 0) {
        pwVar5 = L"";
      }
      _Str1 = L"";
      if (*(int *)(lVar2 + 8 + lVar9) != 0) {
        _Str1 = *(wchar_t **)(lVar2 + lVar9);
      }
      iVar4 = wcscmp(_Str1,pwVar5);
      if (iVar4 < 0) {
        uVar8 = uVar1 + (uVar7 & 1);
      }
      if (pwVar6 != (wchar_t *)0x0) {
        FUN_1400020a8(pwVar6);
      }
      param_1 = local_60;
      bVar3 = 1 < uVar7;
      uVar7 = uVar7 >> 1;
    } while (bVar3);
    uVar7 = *(uint *)(local_60 + 1);
    param_3 = local_68;
    if ((int)uVar8 < (int)uVar7) {
      lVar2 = *local_60;
      lVar9 = (ulonglong)uVar8 * 0x30;
      FUN_1400b22c2(&local_58,local_70);
      pwVar6 = L"";
      if (*(int *)(lVar2 + 8 + lVar9) != 0) {
        pwVar6 = *(wchar_t **)(lVar2 + lVar9);
      }
      pwVar5 = L"";
      if (local_50 != 0) {
        pwVar5 = local_58;
      }
      iVar4 = wcscmp(pwVar5,pwVar6);
      param_3 = local_68;
      if (local_58 != (wchar_t *)0x0) {
        FUN_1400020a8(local_58);
      }
      if (-1 < iVar4) {
        lVar9 = lVar9 + *param_1;
        FUN_14010f8af(lVar9,1);
        goto LAB_148e6b8d0;
      }
      uVar7 = *(uint *)(param_1 + 1);
    }
  }
  *(uint *)(param_1 + 1) = uVar7 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar7) {
    FUN_140234572(param_1,uVar7);
  }
  lVar9 = (ulonglong)uVar8 * 0x30;
  memmove((void *)(*param_1 + lVar9 + 0x30),(void *)(*param_1 + lVar9),
          (ulonglong)(uVar7 - uVar8) * 0x30);
  lVar9 = lVar9 + *param_1;
LAB_148e6b8d0:
  FUN_1400b22c2(lVar9,local_70);
  *(undefined4 *)(lVar9 + 0x10) = 4;
  FUN_14023423e(lVar9 + 0x20,param_3);
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar9 + 0x10;
}



// FUNCTION 148e6b938 FUN_148e6b938 body=500 status=ok
// SIG undefined FUN_148e6b938(void)

longlong FUN_148e6b938(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  wchar_t *_Str1;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  longlong *local_60;
  wchar_t *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar7 = *(uint *)(param_1 + 1);
  local_70 = param_2;
  if ((int)uVar7 < 1) {
    uVar8 = 0;
  }
  else {
    lVar2 = *param_1;
    uVar8 = 0;
    local_68 = param_3;
    local_60 = param_1;
    do {
      uVar1 = (uVar7 >> 1) + uVar8;
      lVar9 = (ulonglong)uVar1 * 0x30;
      FUN_1400b22c2(&local_58,local_70);
      pwVar6 = local_58;
      pwVar5 = local_58;
      if (local_50 == 0) {
        pwVar5 = L"";
      }
      _Str1 = L"";
      if (*(int *)(lVar2 + 8 + lVar9) != 0) {
        _Str1 = *(wchar_t **)(lVar2 + lVar9);
      }
      iVar4 = wcscmp(_Str1,pwVar5);
      if (iVar4 < 0) {
        uVar8 = uVar1 + (uVar7 & 1);
      }
      if (pwVar6 != (wchar_t *)0x0) {
        FUN_1400020a8(pwVar6);
      }
      param_1 = local_60;
      bVar3 = 1 < uVar7;
      uVar7 = uVar7 >> 1;
    } while (bVar3);
    uVar7 = *(uint *)(local_60 + 1);
    param_3 = local_68;
    if ((int)uVar8 < (int)uVar7) {
      lVar2 = *local_60;
      lVar9 = (ulonglong)uVar8 * 0x30;
      FUN_1400b22c2(&local_58,local_70);
      pwVar6 = L"";
      if (*(int *)(lVar2 + 8 + lVar9) != 0) {
        pwVar6 = *(wchar_t **)(lVar2 + lVar9);
      }
      pwVar5 = L"";
      if (local_50 != 0) {
        pwVar5 = local_58;
      }
      iVar4 = wcscmp(pwVar5,pwVar6);
      param_3 = local_68;
      if (local_58 != (wchar_t *)0x0) {
        FUN_1400020a8(local_58);
      }
      if (-1 < iVar4) {
        lVar9 = lVar9 + *param_1;
        FUN_14010f8af(lVar9,1);
        goto LAB_148e6bac6;
      }
      uVar7 = *(uint *)(param_1 + 1);
    }
  }
  *(uint *)(param_1 + 1) = uVar7 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar7) {
    FUN_140234572(param_1,uVar7);
  }
  lVar9 = (ulonglong)uVar8 * 0x30;
  memmove((void *)(*param_1 + lVar9 + 0x30),(void *)(*param_1 + lVar9),
          (ulonglong)(uVar7 - uVar8) * 0x30);
  lVar9 = lVar9 + *param_1;
LAB_148e6bac6:
  FUN_1400b22c2(lVar9,local_70);
  *(undefined4 *)(lVar9 + 0x10) = 4;
  FUN_14023423e(lVar9 + 0x20,param_3);
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar9 + 0x10;
}



// FUNCTION 148e6bb2d FUN_148e6bb2d body=114 status=ok
// SIG undefined FUN_148e6bb2d(void)

void FUN_148e6bb2d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_148e6b742(param_1,"count",param_2);
  FUN_148e6bba0(param_1,param_3);
  FUN_148e6bd88(param_1,param_4);
  FUN_148e6b742(param_1,"delta",param_5);
  FUN_148e6b938(param_1,"maxcount",param_6);
  return;
}



// FUNCTION 148e6bba0 FUN_148e6bba0 body=486 status=ok
// SIG undefined FUN_148e6bba0(void)

void FUN_148e6bba0(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  wchar_t *_Str1;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  wchar_t *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar9 = *(uint *)(param_1 + 1);
  if ((int)uVar9 < 1) {
    uVar8 = 0;
  }
  else {
    lVar2 = *param_1;
    uVar8 = 0;
    local_68 = param_2;
    local_60 = param_1;
    do {
      uVar1 = (uVar9 >> 1) + uVar8;
      lVar7 = (ulonglong)uVar1 * 0x30;
      FUN_1400b22c2(&local_58,"delta_color");
      pwVar6 = local_58;
      pwVar5 = local_58;
      if (local_50 == 0) {
        pwVar5 = L"";
      }
      _Str1 = L"";
      if (*(int *)(lVar2 + 8 + lVar7) != 0) {
        _Str1 = *(wchar_t **)(lVar2 + lVar7);
      }
      iVar4 = wcscmp(_Str1,pwVar5);
      if (iVar4 < 0) {
        uVar8 = uVar1 + (uVar9 & 1);
      }
      if (pwVar6 != (wchar_t *)0x0) {
        FUN_1400020a8(pwVar6);
      }
      param_1 = local_60;
      bVar3 = 1 < uVar9;
      uVar9 = uVar9 >> 1;
    } while (bVar3);
    uVar9 = *(uint *)(local_60 + 1);
    param_2 = local_68;
    if ((int)uVar8 < (int)uVar9) {
      lVar2 = *local_60;
      lVar7 = (ulonglong)uVar8 * 0x30;
      FUN_1400b22c2(&local_58,"delta_color");
      pwVar6 = L"";
      if (*(int *)(lVar2 + 8 + lVar7) != 0) {
        pwVar6 = *(wchar_t **)(lVar2 + lVar7);
      }
      pwVar5 = L"";
      if (local_50 != 0) {
        pwVar5 = local_58;
      }
      iVar4 = wcscmp(pwVar5,pwVar6);
      if (local_58 != (wchar_t *)0x0) {
        FUN_1400020a8(local_58);
      }
      if (-1 < iVar4) {
        lVar7 = lVar7 + *param_1;
        FUN_14010f8af(lVar7,1);
        param_2 = local_68;
        goto LAB_148e6bd3a;
      }
      uVar9 = *(uint *)(param_1 + 1);
      param_2 = local_68;
    }
  }
  *(uint *)(param_1 + 1) = uVar9 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar9) {
    FUN_140234572(param_1,uVar9);
  }
  lVar7 = (ulonglong)uVar8 * 0x30;
  memmove((void *)(*param_1 + lVar7 + 0x30),(void *)(*param_1 + lVar7),
          (ulonglong)(uVar9 - uVar8) * 0x30);
  lVar7 = lVar7 + *param_1;
LAB_148e6bd3a:
  FUN_1400b22c2(lVar7,"delta_color");
  *(undefined4 *)(lVar7 + 0x10) = 4;
  FUN_14023423e(lVar7 + 0x20,param_2);
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e6bd88 FUN_148e6bd88 body=486 status=ok
// SIG undefined FUN_148e6bd88(void)

void FUN_148e6bd88(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  wchar_t *_Str1;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  wchar_t *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar9 = *(uint *)(param_1 + 1);
  if ((int)uVar9 < 1) {
    uVar8 = 0;
  }
  else {
    lVar2 = *param_1;
    uVar8 = 0;
    local_68 = param_2;
    local_60 = param_1;
    do {
      uVar1 = (uVar9 >> 1) + uVar8;
      lVar7 = (ulonglong)uVar1 * 0x30;
      FUN_1400b22c2(&local_58,"delta_sign");
      pwVar6 = local_58;
      pwVar5 = local_58;
      if (local_50 == 0) {
        pwVar5 = L"";
      }
      _Str1 = L"";
      if (*(int *)(lVar2 + 8 + lVar7) != 0) {
        _Str1 = *(wchar_t **)(lVar2 + lVar7);
      }
      iVar4 = wcscmp(_Str1,pwVar5);
      if (iVar4 < 0) {
        uVar8 = uVar1 + (uVar9 & 1);
      }
      if (pwVar6 != (wchar_t *)0x0) {
        FUN_1400020a8(pwVar6);
      }
      param_1 = local_60;
      bVar3 = 1 < uVar9;
      uVar9 = uVar9 >> 1;
    } while (bVar3);
    uVar9 = *(uint *)(local_60 + 1);
    param_2 = local_68;
    if ((int)uVar8 < (int)uVar9) {
      lVar2 = *local_60;
      lVar7 = (ulonglong)uVar8 * 0x30;
      FUN_1400b22c2(&local_58,"delta_sign");
      pwVar6 = L"";
      if (*(int *)(lVar2 + 8 + lVar7) != 0) {
        pwVar6 = *(wchar_t **)(lVar2 + lVar7);
      }
      pwVar5 = L"";
      if (local_50 != 0) {
        pwVar5 = local_58;
      }
      iVar4 = wcscmp(pwVar5,pwVar6);
      if (local_58 != (wchar_t *)0x0) {
        FUN_1400020a8(local_58);
      }
      if (-1 < iVar4) {
        lVar7 = lVar7 + *param_1;
        FUN_14010f8af(lVar7,1);
        param_2 = local_68;
        goto LAB_148e6bf22;
      }
      uVar9 = *(uint *)(param_1 + 1);
      param_2 = local_68;
    }
  }
  *(uint *)(param_1 + 1) = uVar9 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar9) {
    FUN_140234572(param_1,uVar9);
  }
  lVar7 = (ulonglong)uVar8 * 0x30;
  memmove((void *)(*param_1 + lVar7 + 0x30),(void *)(*param_1 + lVar7),
          (ulonglong)(uVar9 - uVar8) * 0x30);
  lVar7 = lVar7 + *param_1;
LAB_148e6bf22:
  FUN_1400b22c2(lVar7,"delta_sign");
  *(undefined4 *)(lVar7 + 0x10) = 4;
  FUN_14023423e(lVar7 + 0x20,param_2);
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e6bf70 FUN_148e6bf70 body=163 status=ok
// SIG undefined FUN_148e6bf70(void)

longlong FUN_148e6bf70(void)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [44];
  uint local_2c;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = FUN_14126888e();
  uVar3 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
  local_2c = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  local_2c = local_2c >> 0x10 ^ local_2c;
  FUN_1448d5e3c(&local_28);
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_28 + 0xd0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e6c014 FUN_148e6c014 body=299 status=ok
// SIG undefined FUN_148e6c014(void)

void FUN_148e6c014(longlong param_1)

{
  PSRWLOCK SRWLock;
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_178 [40];
  undefined2 *local_150;
  undefined2 *local_148;
  ulonglong *local_140;
  char local_138;
  undefined2 local_130 [128];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_178;
  plVar1 = (longlong *)FUN_148e6bf70();
  lVar2 = *plVar1;
  SRWLock = (PSRWLOCK)(lVar2 + 0x220);
  AcquireSRWLockShared(SRWLock);
  lVar2 = FUN_148e1c7f8(lVar2,param_1 + 0x38);
  ReleaseSRWLockShared(SRWLock);
  if (lVar2 != 0) {
    lVar3 = FUN_14126888e(param_1);
    if (lVar3 != 0) {
      lVar3 = FUN_140cee904(lVar3);
      if (lVar3 != 0) {
        local_150 = local_130;
        local_138 = '\0';
        local_140 = &local_30;
        local_148 = local_150;
        uVar4 = FUN_1473727b4(&local_150,"challenges.");
        FUN_14005eb5c(lVar2 + 0x20,uVar4);
        uVar4 = FUN_14280c760(uVar4,L".Preview");
        FUN_14005eb5c(param_1 + 0x38,uVar4);
        *local_148 = 0;
        FUN_1409800e2(lVar3,local_150);
        if (local_138 == '\x01') {
          FUN_1400020a8(local_150);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e6c14e FUN_148e6c14e body=166 status=ok
// SIG undefined FUN_148e6c14e(void)

void FUN_148e6c14e(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [36];
  undefined1 local_24 [8];
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14126888e();
  lVar1 = FUN_1406d14fa(param_1);
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      lVar1 = FUN_140e4494e(lVar1);
      if (lVar1 != 0) {
        FUN_1446f470e(local_24,L"UIMessage_Customization_Applied",1);
        FUN_148e38158(lVar1,local_1c,local_24);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e6c1f6 FUN_148e6c1f6 body=158 status=ok
// SIG undefined FUN_148e6c1f6(void)

undefined8 *
FUN_148e6c1f6(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_FUN_14b9c1440;
  FUN_1446ddc76(&local_40,"NewDialogBox",1);
  FUN_14039176c(param_1,*param_2,local_40,1);
  *param_1 = &PTR_FUN_14b9c1440;
  FUN_145be44b4(param_1 + 7);
  FUN_148e6c2bc(param_1,param_3,param_4);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e6c296 FUN_148e6c296 body=38 status=ok
// SIG undefined FUN_148e6c296(void)

undefined8 FUN_148e6c296(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"NewDialogBox",1);
  return param_2;
}



// FUNCTION 148e6c2bc FUN_148e6c2bc body=479 status=ok
// SIG undefined FUN_148e6c2bc(void)

void FUN_148e6c2bc(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446dcdd4(local_50);
  lVar4 = FUN_14665a480(local_50);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (lVar4 != 0) {
    FUN_140390f7a(lVar4 + 0x38,param_1 + 0x60);
    plVar1 = *(longlong **)(lVar4 + 0x28);
    plVar2 = *(longlong **)(param_1 + 0x40);
    if (plVar2 != plVar1) {
      *(longlong **)(param_1 + 0x40) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(lVar4 + 0x30);
    plVar1 = *(longlong **)(lVar4 + 0x18);
    plVar2 = *(longlong **)(param_1 + 0x50);
    if (plVar2 != plVar1) {
      *(longlong **)(param_1 + 0x50) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(lVar4 + 0x20);
    FUN_145be4752(param_1 + 0x70,lVar4 + 0x60);
    FUN_144a450dc(param_1 + 0x80,param_3);
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(lVar4 + 0x70);
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(lVar4 + 0x78);
    *(undefined1 *)(param_1 + 0xac) = *(undefined1 *)(lVar4 + 0xac);
    *(undefined1 *)(param_1 + 0xae) = *(undefined1 *)(lVar4 + 0x7c);
    *(undefined1 *)(param_1 + 0xaf) = *(undefined1 *)(lVar4 + 0x7d);
    *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(lVar4 + 0xa0);
    *(undefined8 *)(param_1 + 0xec) = *(undefined8 *)(lVar4 + 0xa4);
    plVar1 = *(longlong **)(lVar4 + 0x80);
    plVar2 = *(longlong **)(param_1 + 0xb0);
    if (plVar2 != plVar1) {
      *(longlong **)(param_1 + 0xb0) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(lVar4 + 0x88);
    iVar3 = *(int *)(lVar4 + 0x98) + -1;
    if (*(int *)(lVar4 + 0x98) == 0) {
      iVar3 = 0;
    }
    FUN_1402980a2(param_1 + 0xc0,*(undefined8 *)(lVar4 + 0x90),iVar3);
    *(undefined1 *)(param_1 + 0xf4) = *(undefined1 *)(lVar4 + 0xae);
    *(longlong *)(param_1 + 0xf8) = lVar4;
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e6c49c FUN_148e6c49c body=238 status=ok
// SIG undefined FUN_148e6c49c(void)

undefined8 *
FUN_148e6c49c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  longlong *local_58 [2];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = &PTR_FUN_14b9c1440;
  FUN_1446ddc76(&local_48,"NewDialogBox",1);
  FUN_14039176c(param_1,*param_2,local_48,1);
  *param_1 = &PTR_FUN_14b9c1440;
  FUN_145be44b4(param_1 + 7);
  FUN_148e6c2bc(param_1,param_3,param_5);
  FUN_14023409e(local_68,param_1 + 10,1);
  FUN_140233c04(local_58,local_68,param_4);
  FUN_140008f88(param_1 + 10,local_58);
  if (local_58[0] != (longlong *)0x0) {
    (**(code **)(*local_58[0] + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e6c58c FUN_148e6c58c body=108 status=ok
// SIG undefined FUN_148e6c58c(void)

void FUN_148e6c58c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1406d14fa();
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      lVar1 = FUN_144a7ba4c(lVar1);
      if (lVar1 != 0) {
        lVar1 = FUN_145da44aa(lVar1);
        if (lVar1 != 0) {
          FUN_1459dda8e(lVar1,param_1 + 0x38);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 148e6c5f8 FUN_148e6c5f8 body=326 status=ok
// SIG undefined FUN_148e6c5f8(void)

void FUN_148e6c5f8(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined8 uStack_64;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  undefined4 local_21;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar4 = *(longlong *)(param_1 + 0x40);
  if (lVar4 == 0) {
    uVar3 = FUN_140b7bb2c();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x40) = lVar4;
  }
  plVar1 = (longlong *)(param_1 + 0x38);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    if ((lVar4 == 0) || (*plVar1 == 0)) goto LAB_148e6c66b;
    lVar4 = FUN_14494cb38(lVar4,plVar1);
    *(longlong *)(param_1 + 0x48) = lVar4;
    if (lVar4 == 0) goto LAB_148e6c66b;
  }
  lVar4 = FUN_1406d14fa(param_1);
  if (lVar4 != 0) {
    lVar5 = FUN_144a5dd5e();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) {
      uVar3 = (**(code **)(*(longlong *)(lVar4 + 0xe68) + 0x10))(lVar4 + 0xe68);
      cVar2 = FUN_148d1240c(uVar3);
      if (cVar2 != '\0') {
        thunk_FUN_148d122e0(uVar3);
      }
      local_a0 = 0;
      uStack_68 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      local_6c = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0;
      uStack_30 = 0;
      local_28 = 0xffffffff;
      local_24 = 0;
      local_22 = 1;
      local_21 = 0;
      uStack_64 = 0x1010000000000;
      FUN_148d12298(uVar3,local_a8,plVar1);
    }
  }
LAB_148e6c66b:
  if ((local_18 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e6c740 FUN_148e6c740 body=104 status=ok
// SIG undefined FUN_148e6c740(void)

void FUN_148e6c740(void)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_1406d14fa();
  if (lVar2 != 0) {
    lVar3 = FUN_144a5dd5e();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      uVar4 = (**(code **)(*(longlong *)(lVar2 + 0xe68) + 0x10))(lVar2 + 0xe68);
      cVar1 = FUN_148d1240c(uVar4);
      if (cVar1 != '\0') {
        thunk_FUN_148d122e0(uVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148e6c7a8 FUN_148e6c7a8 body=417 status=ok
// SIG undefined FUN_148e6c7a8(void)

void FUN_148e6c7a8(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined1 auStack_178 [32];
  longlong local_158;
  undefined8 uStack_150;
  undefined2 *local_140;
  undefined2 *local_138;
  ulonglong *local_130;
  char local_128;
  undefined2 local_120 [128];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar4 = *(longlong *)(param_1 + 0x40);
  if (lVar4 == 0) {
    uVar3 = FUN_140b7bb2c();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x40) = lVar4;
  }
  plVar1 = (longlong *)(param_1 + 0x38);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    if ((lVar4 == 0) || (*plVar1 == 0)) goto LAB_148e6c806;
    lVar4 = FUN_14494cb38(lVar4,plVar1);
    *(longlong *)(param_1 + 0x48) = lVar4;
    if (lVar4 == 0) goto LAB_148e6c806;
  }
  lVar4 = FUN_14126888e(param_1);
  if ((lVar4 != 0) && (lVar4 = FUN_140cee904(lVar4), lVar4 != 0)) {
    local_140 = local_120;
    local_128 = '\0';
    local_130 = &local_20;
    local_138 = local_140;
    FUN_148e6c94a(&local_140);
    lVar5 = *(longlong *)(param_1 + 0x40);
    if (lVar5 == 0) {
      uVar3 = FUN_140b7bb2c();
      lVar5 = FUN_14477b664(uVar3);
      *(longlong *)(param_1 + 0x40) = lVar5;
    }
    lVar6 = *(longlong *)(param_1 + 0x48);
    if (((lVar6 == 0) && (lVar6 = 0, lVar5 != 0)) && (*plVar1 != 0)) {
      lVar6 = FUN_14494cb38(lVar5,plVar1);
      *(longlong *)(param_1 + 0x48) = lVar6;
    }
    puVar7 = &DAT_14c9485f0;
    if (*(undefined4 **)(lVar6 + 8) != (undefined4 *)0x0) {
      puVar7 = *(undefined4 **)(lVar6 + 8);
    }
    local_158 = 0;
    uStack_150 = 0;
    FUN_1400b2348(puVar7,&local_158,1);
    iVar2 = (int)uStack_150 + -1;
    if ((int)uStack_150 == 0) {
      iVar2 = 0;
    }
    FUN_1449668a2(&local_140,local_158,iVar2);
    if (local_158 != 0) {
      FUN_1400020a8();
    }
    *local_138 = 0;
    FUN_1409800e2(lVar4,local_140);
    if (local_128 == '\x01') {
      FUN_1400020a8(local_140);
    }
  }
LAB_148e6c806:
  if ((local_20 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e6c94a FUN_148e6c94a body=84 status=ok
// SIG undefined FUN_148e6c94a(void)

longlong FUN_148e6c94a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (*(ulonglong *)(param_1 + 0x10) <= lVar1 + 0x26U) {
    FUN_140213274(param_1,0x13);
    lVar1 = *(longlong *)(param_1 + 8);
  }
  lVar2 = 0;
  do {
    *(short *)(lVar1 + lVar2 * 2) = (short)"inventory.echologs."[lVar2];
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x13);
  *(longlong *)(param_1 + 8) = lVar1 + 0x26;
  return param_1;
}



// FUNCTION 148e6c99e FUN_148e6c99e body=163 status=ok
// SIG undefined FUN_148e6c99e(void)

longlong FUN_148e6c99e(void)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [44];
  uint local_2c;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = FUN_14126888e();
  uVar3 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
  local_2c = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  local_2c = local_2c >> 0x10 ^ local_2c;
  FUN_1448d5e3c(&local_28);
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_28 + 0x610;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e6ca42 FUN_148e6ca42 body=163 status=ok
// SIG undefined FUN_148e6ca42(void)

longlong FUN_148e6ca42(void)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [44];
  uint local_2c;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = FUN_14126888e();
  uVar3 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
  local_2c = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  local_2c = local_2c >> 0x10 ^ local_2c;
  FUN_1448d5e3c(&local_28);
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_28 + 0x1b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e6cae6 FUN_148e6cae6 body=26 status=ok
// SIG undefined FUN_148e6cae6(void)

void FUN_148e6cae6(undefined8 param_1)

{
  FUN_148e6cb00();
  FUN_148e6ce3a(param_1);
  return;
}



// FUNCTION 148e6cb00 FUN_148e6cb00 body=825 status=ok
// SIG undefined FUN_148e6cb00(void)

void FUN_148e6cb00(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  ushort uVar8;
  ulonglong uVar9;
  ushort uVar10;
  ulonglong uVar11;
  undefined1 auStack_588 [32];
  undefined8 *local_568;
  undefined8 local_558;
  undefined8 local_550;
  undefined1 local_548 [1072];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined2 local_58;
  undefined8 local_54;
  undefined8 uStack_4c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_588;
  lVar3 = FUN_1406d14fa();
  if (lVar3 == 0) goto LAB_148e6cb51;
  lVar4 = FUN_144a5dd5e();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
      lVar4 + 0x30)) goto LAB_148e6cb51;
  plVar5 = (longlong *)FUN_148e6c99e(param_1);
  lVar4 = *plVar5;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0xa28));
  *(int *)(lVar4 + 0xa20) = *(int *)(lVar4 + 0xa20) + 1;
  if (*(int *)(param_1 + 0x28c) == -1) {
    FUN_148e1e4a6(lVar4);
  }
  else {
    FUN_148e1e36c(lVar4);
    local_550 = 0;
    local_558 = 0;
    uVar7 = 0;
    if (*(int *)(lVar4 + 0x574) != -1) {
      iVar2 = *(int *)(param_1 + 0x80);
      if (iVar2 == *(int *)(lVar4 + 0x368)) {
        if (1 < iVar2) {
          lVar6 = 0;
          while( true ) {
            uVar8 = *(ushort *)(*(longlong *)(param_1 + 0x78) + lVar6);
            uVar9 = (ulonglong)uVar8;
            uVar10 = *(ushort *)(*(longlong *)(lVar4 + 0x360) + lVar6);
            if (uVar8 != uVar10) break;
            if (uVar8 == 0) goto LAB_148e6cc5e;
LAB_148e6cc10:
            lVar6 = lVar6 + 2;
          }
          if ((uVar10 | uVar8) < 0x80) {
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar10;
            uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar11]) goto LAB_148e6cc10;
          }
          if (uVar8 != uVar10) goto LAB_148e6cc3b;
        }
      }
      else if (*(int *)(lVar4 + 0x368) + iVar2 != 1) {
LAB_148e6cc3b:
        FUN_148e1e636(lVar4);
        uVar7 = 0;
        goto LAB_148e6cd89;
      }
LAB_148e6cc5e:
      local_568 = &local_558;
      FUN_14416a09a(lVar3,*(undefined4 *)(param_1 + 0x28c),*(int *)(lVar4 + 0x574),&local_550);
      local_b8 = 0;
      local_b0 = 0x8000000000;
      uStack_a8 = 0xffffffff;
      local_118 = 0;
      uStack_110 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_98 = 0;
      local_90 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      local_60 = 0xf;
      local_58 = 1;
      local_54 = 0;
      uStack_4c = 0;
      *(int *)(lVar4 + 0x7f8) = *(int *)(lVar4 + 0x7f8) + 1;
      cVar1 = FUN_14416af0c(lVar3,*(undefined4 *)(param_1 + 0x28c),*(undefined4 *)(lVar4 + 0x574));
      if (cVar1 == '\0') {
        FUN_1401e0130(lVar4 + 0x590);
      }
      else {
        FUN_140d8e6ac(local_548);
        FUN_140bad930(local_548,&local_118);
        FUN_141352d9a(lVar4 + 0x590,local_548);
        FUN_144a787a6(lVar4 + 0x638,lVar4 + 0x3c8);
        *(byte *)(lVar4 + 0x630) = *(byte *)(lVar4 + 0x630) & 0xfe;
        *(byte *)(lVar4 + 0x62c) = *(byte *)(lVar4 + 0x62c) & 0xfe;
        FUN_141286efe(local_548);
      }
      FUN_140368b56(&local_118);
      uVar7 = local_558;
    }
LAB_148e6cd89:
    *(int *)(lVar4 + 0x908) = *(int *)(lVar4 + 0x908) + 1;
    FUN_1456e1820(lVar4 + 0x8c0,uVar7);
    *(int *)(lVar4 + 0x8b8) = *(int *)(lVar4 + 0x8b8) + 1;
    FUN_1456e1820(lVar4 + 0x870,local_550);
    if ((*(byte *)(lVar4 + 0x62c) & 1) == 0) {
      cVar1 = FUN_148e1db0a(lVar4 + 0x870);
      if (cVar1 == '\0') goto LAB_148e6cdd7;
      cVar1 = FUN_148e1db0a(lVar4 + 0x8c0);
    }
    else {
LAB_148e6cdd7:
      cVar1 = '\0';
    }
    if (cVar1 == *(char *)(lVar4 + 0x9c0)) {
      if (*(int *)(lVar4 + 0x9c4) == 0) {
        iVar2 = 1;
        goto LAB_148e6cdf4;
      }
    }
    else {
      iVar2 = *(int *)(lVar4 + 0x9c4) + 1;
LAB_148e6cdf4:
      *(char *)(lVar4 + 0x9c0) = cVar1;
      *(int *)(lVar4 + 0x9c4) = iVar2;
    }
    if (*(int *)(lVar4 + 0x9f8) == 0) {
      if (*(int *)(lVar4 + 0x9fc) != 0) goto LAB_148e6ce21;
      iVar2 = 1;
    }
    else {
      iVar2 = *(int *)(lVar4 + 0x9fc) + 1;
    }
    *(undefined4 *)(lVar4 + 0x9f8) = 0;
    *(int *)(lVar4 + 0x9fc) = iVar2;
  }
LAB_148e6ce21:
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0xa28));
LAB_148e6cb51:
  if ((local_38 ^ (ulonglong)auStack_588) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e6ce3a FUN_148e6ce3a body=687 status=ok
// SIG undefined FUN_148e6ce3a(void)

void FUN_148e6ce3a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  PSRWLOCK SRWLock;
  void *_Src;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_128 [32];
  char *local_108;
  longlong **local_100;
  longlong *local_f8 [2];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  longlong *plStack_d0;
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *plStack_b0;
  longlong *local_a8 [2];
  longlong *local_98 [2];
  void *local_88;
  int local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  longlong local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (1 < *(int *)(param_1 + 0x138)) {
    plVar3 = (longlong *)FUN_148e6ca42();
    lVar4 = *plVar3;
    SRWLock = (PSRWLOCK)(lVar4 + 0x1c0);
    AcquireSRWLockShared(SRWLock);
    local_88 = (void *)0x0;
    local_80 = *(int *)(param_1 + 0x138);
    lVar5 = (longlong)local_80;
    _Src = *(void **)(param_1 + 0x130);
    if (lVar5 == 0) {
      local_7c = 0;
    }
    else {
      FUN_1446dd670(&local_88,local_80,0);
      memcpy(local_88,_Src,lVar5 * 2);
    }
    lVar4 = FUN_148e1b48e(lVar4,&local_88);
    ReleaseSRWLockShared(SRWLock);
    if (lVar4 != 0) {
      plVar3 = (longlong *)FUN_148e6c99e(param_1);
      lVar5 = *plVar3;
      AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0xa28));
      *(int *)(lVar5 + 0xa20) = *(int *)(lVar5 + 0xa20) + 1;
      local_b8 = 0;
      plStack_b0 = (longlong *)0x0;
      FUN_1467cfb94(local_a8,*(undefined1 *)(lVar4 + 0x38),0);
      local_d8 = 0;
      plStack_d0 = (longlong *)0x0;
      FUN_1467cfb94(local_c8,*(undefined1 *)(lVar4 + 0x39),0);
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      local_60 = 0;
      uStack_58 = 0;
      FUN_1446ddda2(&local_78,"FirmwareRankTextFormat",0);
      FUN_1410d1eba(local_f8,&local_78);
      FUN_14023409e(local_e8,local_f8,1);
      local_108 = "maxcount";
      local_100 = local_a8;
      FUN_148e6a630(local_98,local_e8,"count",local_c8);
      FUN_14003c038(lVar5 + 0x978,local_98);
      if (local_98[0] != (longlong *)0x0) {
        (**(code **)(*local_98[0] + 0x10))();
      }
      if (local_f8[0] != (longlong *)0x0) {
        (**(code **)(*local_f8[0] + 0x10))();
      }
      if (local_60 != 0) {
        FUN_1400020a8();
      }
      if (local_c8[0] != (longlong *)0x0) {
        (**(code **)(*local_c8[0] + 0x10))();
      }
      plVar3 = plStack_d0;
      if (plStack_d0 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_d0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_d0)(plStack_d0);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      if (local_a8[0] != (longlong *)0x0) {
        (**(code **)(*local_a8[0] + 0x10))();
      }
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
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar5 + 0xa28));
    }
  }
  if ((local_50 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e6d0ea FUN_148e6d0ea body=26 status=ok
// SIG undefined FUN_148e6d0ea(void)

void FUN_148e6d0ea(undefined8 param_1)

{
  FUN_148e6d104();
  FUN_148e6d3c8(param_1);
  return;
}



// FUNCTION 148e6d104 FUN_148e6d104 body=707 status=ok
// SIG undefined FUN_148e6d104(void)

void FUN_148e6d104(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_588 [32];
  undefined8 *local_568;
  undefined8 local_558;
  undefined8 local_550;
  undefined1 local_548 [1072];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined2 local_58;
  undefined8 local_54;
  undefined8 uStack_4c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_588;
  lVar3 = FUN_1406d14fa();
  if (lVar3 == 0) goto LAB_148e6d156;
  lVar4 = FUN_144a5dd5e();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
      lVar4 + 0x30)) goto LAB_148e6d156;
  plVar5 = (longlong *)FUN_148e6c99e(param_1);
  lVar4 = *plVar5;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0xa28));
  *(int *)(lVar4 + 0xa20) = *(int *)(lVar4 + 0xa20) + 1;
  if (*(int *)(param_1 + 0x28c) == -1) {
    FUN_148e1e636(lVar4);
  }
  else {
    FUN_148e1e3fa(lVar4,param_1 + 0x38);
    local_550 = 0;
    local_568 = &local_558;
    local_558 = 0;
    FUN_14416a09a(lVar3,*(undefined4 *)(lVar4 + 0x304),*(undefined4 *)(param_1 + 0x28c));
    local_b8 = 0;
    local_b0 = 0x8000000000;
    uStack_a8 = 0xffffffff;
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_60 = 0xf;
    local_58 = 1;
    local_54 = 0;
    uStack_4c = 0;
    *(int *)(lVar4 + 0x7f8) = *(int *)(lVar4 + 0x7f8) + 1;
    cVar1 = FUN_14416af0c(lVar3,*(undefined4 *)(lVar4 + 0x304),*(undefined4 *)(param_1 + 0x28c));
    if (cVar1 == '\0') {
      FUN_1401e0130(lVar4 + 0x590);
    }
    else {
      FUN_140d8e6ac(local_548);
      FUN_140bad930(local_548,&local_118);
      FUN_141352d9a(lVar4 + 0x590,local_548);
      iVar2 = *(int *)(param_1 + 0xe8) + -1;
      if (*(int *)(param_1 + 0xe8) == 0) {
        iVar2 = 0;
      }
      FUN_1402980a2(lVar4 + 0x638,*(undefined8 *)(param_1 + 0xe0),iVar2);
      *(byte *)(lVar4 + 0x630) = *(byte *)(lVar4 + 0x630) & 0xfe;
      *(byte *)(lVar4 + 0x62c) = *(byte *)(lVar4 + 0x62c) & 0xfe;
      *(byte *)(lVar4 + 0x62d) = *(byte *)(lVar4 + 0x62d) & 0xfe;
      FUN_141286efe(local_548);
    }
    *(int *)(lVar4 + 0x908) = *(int *)(lVar4 + 0x908) + 1;
    FUN_1456e1820(lVar4 + 0x8c0,local_558);
    *(int *)(lVar4 + 0x8b8) = *(int *)(lVar4 + 0x8b8) + 1;
    FUN_1456e1820(lVar4 + 0x870,local_550);
    if ((*(byte *)(lVar4 + 0x62c) & 1) == 0) {
      cVar1 = FUN_148e1db0a(lVar4 + 0x870);
      if (cVar1 == '\0') goto LAB_148e6d358;
      cVar1 = FUN_148e1db0a(lVar4 + 0x8c0);
    }
    else {
LAB_148e6d358:
      cVar1 = '\0';
    }
    if (cVar1 == *(char *)(lVar4 + 0x9c0)) {
      if (*(int *)(lVar4 + 0x9c4) == 0) {
        iVar2 = 1;
        goto LAB_148e6d375;
      }
    }
    else {
      iVar2 = *(int *)(lVar4 + 0x9c4) + 1;
LAB_148e6d375:
      *(char *)(lVar4 + 0x9c0) = cVar1;
      *(int *)(lVar4 + 0x9c4) = iVar2;
    }
    if (*(int *)(lVar4 + 0x9f8) == 0) {
      if (*(int *)(lVar4 + 0x9fc) == 0) {
        iVar2 = 1;
        goto LAB_148e6d392;
      }
    }
    else {
      iVar2 = *(int *)(lVar4 + 0x9fc) + 1;
LAB_148e6d392:
      *(undefined4 *)(lVar4 + 0x9f8) = 0;
      *(int *)(lVar4 + 0x9fc) = iVar2;
    }
    FUN_140368b56(&local_118);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0xa28));
LAB_148e6d156:
  if ((local_38 ^ (ulonglong)auStack_588) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e6d3c8 FUN_148e6d3c8 body=706 status=ok
// SIG undefined FUN_148e6d3c8(void)

void FUN_148e6d3c8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  PSRWLOCK SRWLock;
  longlong lVar3;
  void *_Src;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_128 [32];
  char *local_108;
  longlong **local_100;
  longlong *local_f8 [2];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  longlong *plStack_d0;
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *plStack_b0;
  longlong *local_a8 [2];
  longlong *local_98 [2];
  void *local_88;
  int local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  longlong local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar4 = (longlong *)FUN_148e6c99e();
  lVar3 = *plVar4;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0xa28));
  *(int *)(lVar3 + 0xa20) = *(int *)(lVar3 + 0xa20) + 1;
  FUN_1410e88ee(lVar3 + 0x9a8,lVar3 + 0x978);
  plVar4 = (longlong *)FUN_148e6ca42(param_1);
  lVar5 = *plVar4;
  SRWLock = (PSRWLOCK)(lVar5 + 0x1c0);
  AcquireSRWLockShared(SRWLock);
  local_88 = (void *)0x0;
  local_80 = *(int *)(param_1 + 0x138);
  lVar6 = (longlong)local_80;
  _Src = *(void **)(param_1 + 0x130);
  if (lVar6 == 0) {
    local_7c = 0;
  }
  else {
    FUN_1446dd670(&local_88,local_80,0);
    memcpy(local_88,_Src,lVar6 * 2);
  }
  lVar5 = FUN_148e1b48e(lVar5,&local_88);
  ReleaseSRWLockShared(SRWLock);
  if (lVar5 != 0) {
    local_b8 = 0;
    plStack_b0 = (longlong *)0x0;
    FUN_1467cfb94(local_a8,*(undefined1 *)(lVar5 + 0x38),0);
    local_d8 = 0;
    plStack_d0 = (longlong *)0x0;
    FUN_1467cfb94(local_c8,*(undefined1 *)(lVar5 + 0x39),0);
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    FUN_1446ddda2(&local_78,"FirmwareRankTextFormat",0);
    FUN_1410d1eba(local_f8,&local_78);
    FUN_14023409e(local_e8,local_f8,1);
    local_108 = "maxcount";
    local_100 = local_a8;
    FUN_148e6a630(local_98,local_e8,"count",local_c8);
    FUN_14003c038(lVar3 + 0x990,local_98);
    if (local_98[0] != (longlong *)0x0) {
      (**(code **)(*local_98[0] + 0x10))();
    }
    if (local_f8[0] != (longlong *)0x0) {
      (**(code **)(*local_f8[0] + 0x10))();
    }
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    if (local_c8[0] != (longlong *)0x0) {
      (**(code **)(*local_c8[0] + 0x10))();
    }
    plVar4 = plStack_d0;
    if (plStack_d0 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_d0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_d0)(plStack_d0);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    if (local_a8[0] != (longlong *)0x0) {
      (**(code **)(*local_a8[0] + 0x10))();
    }
    plVar4 = plStack_b0;
    if (plStack_b0 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_b0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_b0)(plStack_b0);
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
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0xa28));
  if ((local_50 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e6d68c FUN_148e6d68c body=253 status=ok
// SIG undefined FUN_148e6d68c(void)

void FUN_148e6d68c(undefined8 param_1)

{
  PSRWLOCK SRWLock;
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar3 = FUN_1406d14fa();
  if (lVar3 == 0) {
    return;
  }
  lVar4 = FUN_144a5dd5e();
  if (*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) {
    return;
  }
  if (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
      lVar4 + 0x30) {
    return;
  }
  cVar1 = FUN_145e3690e(lVar3);
  if (cVar1 == '\0') {
    return;
  }
  plVar5 = (longlong *)FUN_148e6c99e(param_1);
  lVar4 = *plVar5;
  SRWLock = (PSRWLOCK)(lVar4 + 0xa28);
  AcquireSRWLockShared(SRWLock);
  cVar1 = *(char *)(lVar4 + 0x9c0);
  ReleaseSRWLockShared(SRWLock);
  if (cVar1 != '\x01') {
    return;
  }
  plVar5 = (longlong *)FUN_148e6c99e(param_1);
  lVar4 = *plVar5;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0xa28));
  *(int *)(lVar4 + 0xa20) = *(int *)(lVar4 + 0xa20) + 1;
  FUN_148c39b2c(lVar3,*(undefined4 *)(lVar4 + 0x304),*(undefined4 *)(lVar4 + 0x574));
  FUN_148e1e4a6(lVar4);
  if (*(char *)(lVar4 + 0x9c8) == '\0') {
    iVar2 = *(int *)(lVar4 + 0x9cc) + 1;
  }
  else {
    if (*(int *)(lVar4 + 0x9cc) != 0) goto LAB_148e6d775;
    iVar2 = 1;
  }
  *(undefined1 *)(lVar4 + 0x9c8) = 1;
  *(int *)(lVar4 + 0x9cc) = iVar2;
LAB_148e6d775:
                    /* WARNING: Could not recover jumptable at 0x000148e6d782. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0xa28));
  return;
}



// FUNCTION 148e6d78a FUN_148e6d78a body=142 status=ok
// SIG undefined FUN_148e6d78a(void)

void FUN_148e6d78a(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [39];
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_14126888e();
  if (lVar2 != 0) {
    lVar2 = FUN_1400b6e86(lVar2);
    if (lVar2 != 0) {
      local_31 = 1;
      cVar1 = *(char *)(param_1 + 0x40);
      uVar3 = FUN_14479d2ce(param_1 + 0x38);
      (**(code **)(*(longlong *)(lVar2 + 0x30) + 0x98))(lVar2 + 0x30,uVar3,(int)cVar1,&local_31);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e6d81a FUN_148e6d81a body=133 status=ok
// SIG undefined FUN_148e6d81a(void)

void FUN_148e6d81a(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_14126888e();
  if (lVar1 != 0) {
    lVar1 = FUN_1400b6e86(lVar1);
    if (lVar1 != 0) {
      local_29 = 1;
      uVar2 = FUN_14479d2ce(param_1 + 0x38);
      (**(code **)(*(longlong *)(lVar1 + 0x30) + 0xa0))(lVar1 + 0x30,uVar2,&local_29);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e6d8a0 FUN_148e6d8a0 body=283 status=ok
// SIG undefined FUN_148e6d8a0(void)

void FUN_148e6d8a0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  longlong *local_70;
  undefined4 local_68;
  undefined8 local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = FUN_1406d14fa();
  if (lVar3 != 0) {
    lVar4 = FUN_144a5dd5e();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      cVar2 = FUN_145e3690e(lVar3);
      if ((cVar2 != '\0') &&
         ((lVar4 = *(longlong *)(lVar3 + 0xf48), lVar4 != 0 &&
          (lVar1 = *(longlong *)(lVar3 + 0xc38), lVar1 != 0)))) {
        lVar5 = FUN_14011c349();
        if (DAT_14c950c29 == 1) {
          FUN_1456cec3c(lVar4);
        }
        local_38 = lVar4 + 0x3be8;
        local_40 = lVar4;
        if ((DAT_14c950c29 & 1) != 0) {
          FUN_1456cec3c(lVar3);
        }
        local_48 = lVar3 + 0xe18;
        local_58 = *(undefined8 *)(lVar5 + 0x48);
        local_70 = &local_40;
        local_68 = 1;
        local_78 = 1;
        local_50 = lVar3;
        FUN_1416a1924(lVar1,param_1 + 0x38);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e6d9bc FUN_148e6d9bc body=984 status=ok
// SIG undefined FUN_148e6d9bc(void)

void FUN_148e6d9bc(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_168 [32];
  longlong *local_148;
  longlong *local_140;
  longlong *local_138;
  undefined4 local_130;
  undefined4 local_128;
  int local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  int local_54;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar6 = FUN_1406d14fa();
  if (lVar6 != 0) {
    lVar7 = FUN_144a5dd5e();
    if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        == lVar7 + 0x30)) {
      cVar4 = FUN_145e3690e(lVar6);
      if (cVar4 != '\0') {
        lVar7 = FUN_14011c349();
        lVar7 = *(longlong *)(lVar7 + 0x48);
        plVar1 = (longlong *)(param_1 + 0x40);
        if (*(longlong *)(param_1 + 0x40) == 0) {
          *plVar1 = lVar7;
        }
        lVar2 = *(longlong *)(lVar6 + 0xf48);
        local_50 = lVar7;
        if ((lVar2 != 0) && (lVar3 = *(longlong *)(lVar6 + 0xc38), lVar3 != 0)) {
          lVar8 = FUN_140254ee4(lVar6);
          if (lVar8 != 0) {
            FUN_1488c6156(lVar8,&local_54,(int)*(char *)(param_1 + 0x38));
            if ((local_54 == -1) || (*plVar1 != lVar7)) {
              if (DAT_14c950c29 == 1) {
                FUN_1456cec3c(lVar6);
              }
              lVar8 = lVar6 + 0xe18;
              local_118 = lVar3;
              local_a8 = lVar6;
              local_a0 = lVar8;
              if ((DAT_14c950c29 & 1) != 0) {
                FUN_1456cec3c(lVar2);
              }
              lVar3 = lVar2 + 0x3be8;
              local_110 = param_1 + 0x3c;
              local_b8 = lVar2;
              local_b0 = lVar3;
              uVar5 = FUN_148dba38e(lVar6);
              local_148 = plVar1;
              FUN_143db6904(local_118,uVar5,&local_b8,&local_a8);
              cVar4 = *(char *)(param_1 + 0x38);
              if (*(longlong *)(param_1 + 0x40) == lVar7) {
                if (DAT_14c950c29 != 0) {
                  FUN_1456cec3c(lVar6);
                }
                local_c8 = lVar6;
                local_c0 = lVar8;
                if ((DAT_14c950c29 & 1) != 0) {
                  FUN_1456cec3c(lVar2);
                }
                local_140 = (longlong *)CONCAT44(local_140._4_4_,(int)cVar4);
                local_148 = plVar1;
                local_d8 = lVar2;
                local_d0 = lVar3;
                FUN_143db6682(local_118,local_110,&local_d8,&local_c8);
              }
              else {
                if (DAT_14c950c29 != 0) {
                  FUN_1456cec3c(lVar2);
                }
                local_e8 = lVar2;
                local_e0 = lVar3;
                if ((DAT_14c950c29 & 1) != 0) {
                  FUN_1456cec3c(lVar6);
                }
                local_f8 = lVar6;
                local_f0 = lVar8;
                if ((DAT_14c950c29 & 1) != 0) {
                  FUN_1456cec3c(lVar6);
                }
                local_128 = 0;
                local_130 = 0;
                local_138 = &local_e8;
                local_140 = &local_50;
                local_148 = &local_f8;
                local_120 = (int)cVar4;
                local_108 = lVar6;
                local_100 = lVar8;
                FUN_143db6d84(local_118,local_110,&local_108,plVar1);
              }
            }
            else {
              if (DAT_14c950c29 == 1) {
                FUN_1456cec3c(lVar2);
              }
              lVar7 = lVar2 + 0x3be8;
              local_68 = lVar2;
              local_60 = lVar7;
              if ((DAT_14c950c29 & 1) != 0) {
                FUN_1456cec3c(lVar6);
              }
              local_148 = &local_68;
              local_78 = lVar6;
              local_70 = lVar6 + 0xe18;
              FUN_143db60f8(lVar3,param_1 + 0x3c,&local_78,plVar1);
              if (DAT_14c950c29 == 1) {
                FUN_1456cec3c(lVar2);
              }
              local_88 = lVar2;
              local_80 = lVar7;
              if ((DAT_14c950c29 & 1) != 0) {
                FUN_1456cec3c(lVar6);
              }
              local_148 = &local_88;
              local_98 = lVar6;
              local_90 = lVar6 + 0xe18;
              FUN_143db60f8(lVar3,&local_54,&local_98,plVar1);
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



// FUNCTION 148e6dd96 FUN_148e6dd96 body=285 status=ok
// SIG undefined FUN_148e6dd96(void)

void FUN_148e6dd96(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = FUN_1406d14fa();
  if (lVar4 != 0) {
    lVar5 = FUN_144a5dd5e();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) {
      cVar2 = FUN_145e3690e(lVar4);
      if ((cVar2 != '\0') &&
         ((lVar5 = *(longlong *)(lVar4 + 0xf48), lVar5 != 0 &&
          (lVar1 = *(longlong *)(lVar4 + 0xc38), lVar1 != 0)))) {
        lVar6 = FUN_14011c349();
        local_38 = *(undefined8 *)(lVar6 + 0x48);
        if (DAT_14c950c29 == 1) {
          FUN_1456cec3c(lVar4);
        }
        local_40 = lVar4 + 0xe18;
        local_48 = lVar4;
        if ((DAT_14c950c29 & 1) != 0) {
          FUN_1456cec3c(lVar5);
        }
        local_50 = lVar5 + 0x3be8;
        local_58 = lVar5;
        uVar3 = FUN_148dba38e(lVar4,param_1 + 0x38);
        local_68 = &local_38;
        FUN_143db6904(lVar1,uVar3,&local_58,&local_48);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e6deb4 FUN_148e6deb4 body=435 status=ok
// SIG undefined FUN_148e6deb4(void)

void FUN_148e6deb4(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined8 *local_a0;
  longlong *local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = FUN_1406d14fa();
  if (lVar2 == 0) goto LAB_148e6df09;
  lVar3 = FUN_144a5dd5e();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
      lVar3 + 0x30)) goto LAB_148e6df09;
  cVar1 = FUN_145e3690e(lVar2);
  if (cVar1 == '\0') goto LAB_148e6df09;
  lVar4 = FUN_14011c349();
  lVar3 = *(longlong *)(lVar2 + 0xc38);
  if (lVar3 == 0) goto LAB_148e6df09;
  lVar5 = *(longlong *)(lVar2 + 0xf48);
  if (lVar5 == 0 || DAT_14c950c29 != 1) {
    if (lVar5 != 0) goto LAB_148e6df85;
    local_40 = 0;
  }
  else {
    FUN_1456cec3c(lVar5);
LAB_148e6df85:
    local_40 = lVar5 + 0x3be8;
  }
  local_50 = *(undefined8 *)(lVar4 + 0x60);
  local_48 = lVar5;
  if ((DAT_14c950c29 & 1) != 0) {
    FUN_1456cec3c(lVar2);
  }
  lVar5 = lVar2 + 0xe18;
  local_68 = *(undefined8 *)(lVar4 + 0x48);
  local_60 = lVar2;
  local_58 = lVar5;
  if ((DAT_14c950c29 & 1) != 0) {
    FUN_1456cec3c(lVar2);
  }
  local_98 = &local_48;
  local_a0 = &local_50;
  local_a8 = &local_60;
  local_80 = 0xffffffff;
  local_88 = 8;
  local_90 = 0;
  local_78 = lVar2;
  local_70 = lVar5;
  FUN_143db6d84(lVar3,param_1 + 0x38,&local_78,&local_68);
LAB_148e6df09:
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e6e068 FUN_148e6e068 body=429 status=ok
// SIG undefined FUN_148e6e068(void)

void FUN_148e6e068(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined8 *local_a0;
  longlong *local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = FUN_1406d14fa();
  if (lVar2 == 0) goto LAB_148e6e0bd;
  lVar3 = FUN_144a5dd5e();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
      lVar3 + 0x30)) goto LAB_148e6e0bd;
  cVar1 = FUN_145e3690e(lVar2);
  if (cVar1 == '\0') goto LAB_148e6e0bd;
  lVar4 = FUN_14011c349();
  lVar3 = *(longlong *)(lVar2 + 0xc38);
  if (lVar3 == 0) goto LAB_148e6e0bd;
  lVar5 = *(longlong *)(lVar2 + 0xf48);
  if (lVar5 == 0 || DAT_14c950c29 != 1) {
    if (lVar5 != 0) goto LAB_148e6e139;
    local_40 = 0;
  }
  else {
    FUN_1456cec3c(lVar5);
LAB_148e6e139:
    local_40 = lVar5 + 0x3be8;
  }
  local_50 = *(undefined8 *)(lVar4 + 0x48);
  local_48 = lVar5;
  if ((DAT_14c950c29 & 1) != 0) {
    FUN_1456cec3c(lVar2);
  }
  lVar5 = lVar2 + 0xe18;
  local_68 = *(undefined8 *)(lVar4 + 0x60);
  local_60 = lVar2;
  local_58 = lVar5;
  if ((DAT_14c950c29 & 1) != 0) {
    FUN_1456cec3c(lVar2);
  }
  local_88 = 0;
  local_90 = 0;
  local_98 = &local_48;
  local_a0 = &local_50;
  local_a8 = &local_60;
  local_80 = 0xffffffff;
  local_78 = lVar2;
  local_70 = lVar5;
  FUN_143db6d84(lVar3,param_1 + 0x38,&local_78,&local_68);
LAB_148e6e0bd:
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e6e216 FUN_148e6e216 body=2607 status=ok
// SIG undefined FUN_148e6e216(void)

void FUN_148e6e216(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  PSRWLOCK SRWLock;
  float fVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_148e6ec46(param_1,&local_38);
  lVar6 = local_38;
  SRWLock = (PSRWLOCK)(local_38 + 0x638);
  AcquireSRWLockExclusive(SRWLock);
  *(int *)(lVar6 + 0x630) = *(int *)(lVar6 + 0x630) + 1;
  iVar9 = *(int *)(lVar6 + 0x434);
  if ((*(char *)(lVar6 + 0x430) != '\0') || (bVar10 = iVar9 == 0, iVar9 = 0, bVar10)) {
    *(undefined1 *)(lVar6 + 0x430) = 0;
    *(int *)(lVar6 + 0x434) = iVar9 + 1;
  }
  ReleaseSRWLockExclusive(SRWLock);
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
  FUN_148e6ed06(param_1,&local_38);
  AcquireSRWLockExclusive((PSRWLOCK)(local_38 + 0x638));
  *(int *)(local_38 + 0x630) = *(int *)(local_38 + 0x630) + 1;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  FUN_145780986(local_38);
  FUN_145d181c2(local_38);
  if (*(int *)(param_1 + 0x46c) != 0) {
    iVar9 = *(int *)(local_38 + 0x434);
    if ((*(char *)(param_1 + 0x468) != *(char *)(local_38 + 0x430)) ||
       (bVar10 = iVar9 == 0, iVar9 = 0, bVar10)) {
      *(char *)(local_38 + 0x430) = *(char *)(param_1 + 0x468);
      *(int *)(local_38 + 0x434) = iVar9 + 1;
    }
  }
  if (*(int *)(param_1 + 0x474) != 0) {
    iVar9 = *(int *)(local_38 + 0x43c);
    if ((*(int *)(param_1 + 0x470) != *(int *)(local_38 + 0x438)) ||
       (bVar10 = iVar9 == 0, iVar9 = 0, bVar10)) {
      *(int *)(local_38 + 0x438) = *(int *)(param_1 + 0x470);
      *(int *)(local_38 + 0x43c) = iVar9 + 1;
    }
  }
  if (*(int *)(param_1 + 0x4b0) != 0) {
    FUN_1449a0272(local_38 + 0x468,param_1 + 0x4a0);
  }
  if (*(int *)(param_1 + 0x4c8) != 0) {
    FUN_1449a0272(local_38 + 0x480,param_1 + 0x4b8);
  }
  if (*(int *)(param_1 + 0x4e0) != 0) {
    FUN_1449a0272(local_38 + 0x498,param_1 + 0x4d0);
  }
  if (*(int *)(param_1 + 0x4f8) != 0) {
    FUN_1449a0272(local_38 + 0x4b0,param_1 + 0x4e8);
  }
  if (*(int *)(param_1 + 0x43c) != 0) {
    iVar9 = *(int *)(local_38 + 0x404);
    if ((*(char *)(param_1 + 0x438) != *(char *)(local_38 + 0x400)) ||
       (bVar10 = iVar9 == 0, iVar9 = 0, bVar10)) {
      *(char *)(local_38 + 0x400) = *(char *)(param_1 + 0x438);
      *(int *)(local_38 + 0x404) = iVar9 + 1;
    }
  }
  if (*(int *)(param_1 + 0x444) != 0) {
    iVar9 = *(int *)(local_38 + 0x40c);
    if ((*(char *)(param_1 + 0x440) != *(char *)(local_38 + 0x408)) ||
       (bVar10 = iVar9 == 0, iVar9 = 0, bVar10)) {
      *(char *)(local_38 + 0x408) = *(char *)(param_1 + 0x440);
      *(int *)(local_38 + 0x40c) = iVar9 + 1;
    }
  }
  if (*(int *)(param_1 + 0x504) != 0) {
    iVar9 = *(int *)(local_38 + 0x4cc);
    if ((*(char *)(param_1 + 0x500) != *(char *)(local_38 + 0x4c8)) ||
       (bVar10 = iVar9 == 0, iVar9 = 0, bVar10)) {
      *(char *)(local_38 + 0x4c8) = *(char *)(param_1 + 0x500);
      *(int *)(local_38 + 0x4cc) = iVar9 + 1;
    }
  }
  if (*(int *)(param_1 + 0x50c) != 0) {
    iVar9 = *(int *)(local_38 + 0x4d4);
    if ((*(char *)(param_1 + 0x508) != *(char *)(local_38 + 0x4d0)) ||
       (bVar10 = iVar9 == 0, iVar9 = 0, bVar10)) {
      *(char *)(local_38 + 0x4d0) = *(char *)(param_1 + 0x508);
      *(int *)(local_38 + 0x4d4) = iVar9 + 1;
    }
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    iVar9 = *(int *)(local_38 + 0xc);
    if ((*(int *)(param_1 + 0x40) != *(int *)(local_38 + 8)) ||
       (bVar10 = iVar9 == 0, iVar9 = 0, bVar10)) {
      *(int *)(local_38 + 8) = *(int *)(param_1 + 0x40);
      *(int *)(local_38 + 0xc) = iVar9 + 1;
    }
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar9 = *(int *)(local_38 + 0x14);
    if ((*(char *)(param_1 + 0x48) != *(char *)(local_38 + 0x10)) ||
       (bVar10 = iVar9 == 0, iVar9 = 0, bVar10)) {
      *(char *)(local_38 + 0x10) = *(char *)(param_1 + 0x48);
      *(int *)(local_38 + 0x14) = iVar9 + 1;
    }
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    iVar9 = *(int *)(local_38 + 0x1c);
    if ((*(int *)(param_1 + 0x50) != *(int *)(local_38 + 0x18)) ||
       (bVar10 = iVar9 == 0, iVar9 = 0, bVar10)) {
      *(int *)(local_38 + 0x18) = *(int *)(param_1 + 0x50);
      *(int *)(local_38 + 0x1c) = iVar9 + 1;
    }
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    iVar9 = *(int *)(local_38 + 0x28);
    if ((*(longlong *)(param_1 + 0x58) != *(longlong *)(local_38 + 0x20)) ||
       (bVar10 = iVar9 == 0, iVar9 = 0, bVar10)) {
      *(longlong *)(local_38 + 0x20) = *(longlong *)(param_1 + 0x58);
      *(int *)(local_38 + 0x28) = iVar9 + 1;
    }
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    iVar9 = *(int *)(local_38 + 0x30);
    if ((*(int *)(param_1 + 100) != *(int *)(local_38 + 0x2c)) ||
       (bVar10 = iVar9 == 0, iVar9 = 0, bVar10)) {
      *(int *)(local_38 + 0x2c) = *(int *)(param_1 + 100);
      *(int *)(local_38 + 0x30) = iVar9 + 1;
    }
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    iVar9 = *(int *)(local_38 + 0x38);
    if ((*(int *)(param_1 + 0x6c) != *(int *)(local_38 + 0x34)) ||
       (bVar10 = iVar9 == 0, iVar9 = 0, bVar10)) {
      *(int *)(local_38 + 0x34) = *(int *)(param_1 + 0x6c);
      *(int *)(local_38 + 0x38) = iVar9 + 1;
    }
  }
  if (*(int *)(param_1 + 0x4c8) != 0) {
    FUN_1449a0272(local_38 + 0x480,param_1 + 0x4b8);
  }
  if (*(int *)(param_1 + 0x80) != 0) {
    iVar9 = *(int *)(local_38 + 0x48);
    if ((*(int *)(param_1 + 0x7c) != *(int *)(local_38 + 0x44)) ||
       (bVar10 = iVar9 == 0, iVar9 = 0, bVar10)) {
      *(int *)(local_38 + 0x44) = *(int *)(param_1 + 0x7c);
      *(int *)(local_38 + 0x48) = iVar9 + 1;
    }
  }
  if (*(int *)(param_1 + 0x98) != 0) {
    FUN_148e76ba2(local_38 + 0x50,param_1 + 0x88);
  }
  if (*(int *)(param_1 + 0xb0) != 0) {
    FUN_1449a0272(local_38 + 0x68,param_1 + 0xa0);
  }
  if (*(int *)(param_1 + 200) != 0) {
    FUN_1449a0272(local_38 + 0x80,param_1 + 0xb8);
  }
  if (*(int *)(param_1 + 0xe0) != 0) {
    FUN_1449a0272(local_38 + 0x98,param_1 + 0xd0);
  }
  if (*(int *)(param_1 + 0xec) != 0) {
    iVar9 = *(int *)(local_38 + 0xb4);
    if ((*(int *)(param_1 + 0xe8) != *(int *)(local_38 + 0xb0)) ||
       (bVar10 = iVar9 == 0, iVar9 = 0, bVar10)) {
      *(int *)(local_38 + 0xb0) = *(int *)(param_1 + 0xe8);
      *(int *)(local_38 + 0xb4) = iVar9 + 1;
    }
  }
  if (*(int *)(param_1 + 0x100) != 0) {
    FUN_1449a0272(local_38 + 0xb8,param_1 + 0xf0);
  }
  if (*(int *)(param_1 + 0x118) != 0) {
    FUN_1449a0272(local_38 + 0xd0,param_1 + 0x108);
  }
  if (*(int *)(param_1 + 0x124) != 0) {
    iVar9 = *(int *)(local_38 + 0xec);
    if ((*(char *)(param_1 + 0x120) != *(char *)(local_38 + 0xe8)) ||
       (bVar10 = iVar9 == 0, iVar9 = 0, bVar10)) {
      *(char *)(local_38 + 0xe8) = *(char *)(param_1 + 0x120);
      *(int *)(local_38 + 0xec) = iVar9 + 1;
    }
  }
  if (*(int *)(param_1 + 0x138) != 0) {
    FUN_1449a0272(local_38 + 0xf0,param_1 + 0x128);
  }
  if (*(int *)(param_1 + 0x150) != 0) {
    FUN_1449a0272(local_38 + 0x108,param_1 + 0x140);
  }
  if (*(int *)(param_1 + 0x168) != 0) {
    FUN_1449a0272(local_38 + 0x120,param_1 + 0x158);
  }
  if (*(int *)(param_1 + 0x174) != 0) {
    iVar9 = *(int *)(local_38 + 0x13c);
    if ((*(int *)(param_1 + 0x170) != *(int *)(local_38 + 0x138)) ||
       (bVar10 = iVar9 == 0, iVar9 = 0, bVar10)) {
      *(int *)(local_38 + 0x138) = *(int *)(param_1 + 0x170);
      *(int *)(local_38 + 0x13c) = iVar9 + 1;
    }
  }
  if (*(int *)(param_1 + 0x188) != 0) {
    FUN_1449a0272(local_38 + 0x140,param_1 + 0x178);
  }
  if (*(int *)(param_1 + 0x1a0) != 0) {
    FUN_1449a0272(local_38 + 0x158,param_1 + 400);
  }
  if (*(int *)(param_1 + 0x1b8) != 0) {
    FUN_1449a0272(local_38 + 0x170,param_1 + 0x1a8);
  }
  if (*(int *)(param_1 + 0x1c4) != 0) {
    iVar9 = *(int *)(local_38 + 0x18c);
    if ((*(int *)(param_1 + 0x1c0) != *(int *)(local_38 + 0x188)) ||
       (bVar10 = iVar9 == 0, iVar9 = 0, bVar10)) {
      *(int *)(local_38 + 0x188) = *(int *)(param_1 + 0x1c0);
      *(int *)(local_38 + 0x18c) = iVar9 + 1;
    }
  }
  if (*(int *)(param_1 + 0x1d8) != 0) {
    FUN_1449a0272(local_38 + 400,param_1 + 0x1c8);
  }
  if (*(int *)(param_1 + 0x1f0) != 0) {
    FUN_1449a0272(local_38 + 0x1a8,param_1 + 0x1e0);
  }
  if (*(int *)(param_1 + 0x1fc) != 0) {
    iVar9 = *(int *)(local_38 + 0x1c4);
    if ((*(char *)(param_1 + 0x1f8) != *(char *)(local_38 + 0x1c0)) ||
       (bVar10 = iVar9 == 0, iVar9 = 0, bVar10)) {
      *(char *)(local_38 + 0x1c0) = *(char *)(param_1 + 0x1f8);
      *(int *)(local_38 + 0x1c4) = iVar9 + 1;
    }
  }
  if (*(int *)(param_1 + 0x204) != 0) {
    iVar9 = *(int *)(local_38 + 0x1cc);
    if ((*(char *)(param_1 + 0x200) != *(char *)(local_38 + 0x1c8)) ||
       (bVar10 = iVar9 == 0, iVar9 = 0, bVar10)) {
      *(char *)(local_38 + 0x1c8) = *(char *)(param_1 + 0x200);
      *(int *)(local_38 + 0x1cc) = iVar9 + 1;
    }
  }
  if (*(int *)(param_1 + 0x220) != 0) {
    FUN_1449a0272(local_38 + 0x1d8,param_1 + 0x210);
  }
  if (*(int *)(param_1 + 0x238) != 0) {
    FUN_1449a0272(local_38 + 0x1f0,param_1 + 0x228);
  }
  if (*(int *)(param_1 + 0x244) != 0) {
    iVar9 = *(int *)(local_38 + 0x20c);
    if ((*(int *)(param_1 + 0x240) != *(int *)(local_38 + 0x208)) ||
       (bVar10 = iVar9 == 0, iVar9 = 0, bVar10)) {
      *(int *)(local_38 + 0x208) = *(int *)(param_1 + 0x240);
      *(int *)(local_38 + 0x20c) = iVar9 + 1;
    }
  }
  if (*(int *)(param_1 + 0x24c) != 0) {
    fVar4 = *(float *)(param_1 + 0x248);
    if ((fVar4 != *(float *)(local_38 + 0x210)) || (NAN(fVar4) || NAN(*(float *)(local_38 + 0x210)))
       ) {
      iVar9 = *(int *)(local_38 + 0x214) + 1;
    }
    else {
      iVar9 = 1;
      if (*(int *)(local_38 + 0x214) != 0) goto LAB_148e6e653;
    }
    *(float *)(local_38 + 0x210) = fVar4;
    *(int *)(local_38 + 0x214) = iVar9;
  }
LAB_148e6e653:
  if (*(int *)(param_1 + 0x328) != 0) {
    FUN_140baf082(local_38 + 0x218,param_1 + 0x250);
  }
  if (*(int *)(param_1 + 0x408) != 0) {
    FUN_148e238b0(local_38 + 0x2f8,param_1 + 0x330);
  }
  if (*(int *)(param_1 + 0x414) != 0) {
    if (*(char *)(param_1 + 0x410) == *(char *)(local_38 + 0x3d8)) {
      iVar9 = 1;
      if (*(int *)(local_38 + 0x3dc) != 0) goto LAB_148e6e698;
    }
    else {
      iVar9 = *(int *)(local_38 + 0x3dc) + 1;
    }
    *(char *)(local_38 + 0x3d8) = *(char *)(param_1 + 0x410);
    *(int *)(local_38 + 0x3dc) = iVar9;
  }
LAB_148e6e698:
  if (*(int *)(param_1 + 0x434) != 0) {
    if (*(char *)(param_1 + 0x430) == *(char *)(local_38 + 0x3f8)) {
      iVar9 = 1;
      if (*(int *)(local_38 + 0x3fc) != 0) goto LAB_148e6e6a5;
    }
    else {
      iVar9 = *(int *)(local_38 + 0x3fc) + 1;
    }
    *(char *)(local_38 + 0x3f8) = *(char *)(param_1 + 0x430);
    *(int *)(local_38 + 0x3fc) = iVar9;
  }
LAB_148e6e6a5:
  if (*(int *)(param_1 + 0x598) != 0) {
    FUN_1449a0272(local_38 + 0x550,param_1 + 0x588);
  }
  if (*(int *)(param_1 + 0x660) != 0) {
    if (*(longlong *)(param_1 + 0x658) == *(longlong *)(local_38 + 0x620)) {
      iVar9 = 1;
      if (*(int *)(local_38 + 0x628) != 0) goto LAB_148e6e6ce;
    }
    else {
      iVar9 = *(int *)(local_38 + 0x628) + 1;
    }
    *(longlong *)(local_38 + 0x620) = *(longlong *)(param_1 + 0x658);
    *(int *)(local_38 + 0x628) = iVar9;
  }
LAB_148e6e6ce:
  FUN_148e75fd8(local_38 + 0x580,param_1 + 0x5b8);
  FUN_148c221dc(local_38 + 0x5d0,param_1 + 0x608);
  FUN_140bb2942(local_38 + 0x410,param_1 + 0x448);
  FUN_140bb2942(local_38 + 0x420,param_1 + 0x458);
  FUN_148e7613a(local_38 + 0x500,param_1 + 0x538);
  lVar6 = FUN_1406d14fa(param_1);
  if (lVar6 != 0) {
    lVar7 = FUN_144a5dd5e();
    if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        == lVar7 + 0x30)) {
      uVar8 = FUN_1401e6c61();
      uVar5 = FUN_140df7d8e(lVar6,uVar8);
      FUN_1415b5422(local_38,uVar5);
      *(int *)(local_38 + 0x200) = *(int *)(local_38 + 0x200) + 1;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Could not recover jumptable at 0x000148e6e79e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(local_38 + 0x638));
  return;
}



// FUNCTION 148e6ec46 FUN_148e6ec46 body=190 status=ok
// SIG undefined FUN_148e6ec46(void)

undefined8 * FUN_148e6ec46(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [44];
  uint local_2c;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar5 = FUN_14126888e();
  uVar4 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  local_2c = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  local_2c = local_2c >> 0x10 ^ local_2c;
  FUN_1448d5e3c(&local_28);
  *param_2 = *(undefined8 *)(local_28 + 0xf0);
  lVar3 = *(longlong *)(local_28 + 0xf8);
  param_2[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e6ed06 FUN_148e6ed06 body=190 status=ok
// SIG undefined FUN_148e6ed06(void)

undefined8 * FUN_148e6ed06(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [44];
  uint local_2c;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar5 = FUN_14126888e();
  uVar4 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  local_2c = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  local_2c = local_2c >> 0x10 ^ local_2c;
  FUN_1448d5e3c(&local_28);
  *param_2 = *(undefined8 *)(local_28 + 0xe0);
  lVar3 = *(longlong *)(local_28 + 0xe8);
  param_2[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e6edc6 FUN_148e6edc6 body=910 status=ok
// SIG undefined FUN_148e6edc6(void)

void FUN_148e6edc6(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined1 auStack_188 [40];
  PSRWLOCK local_160;
  undefined8 local_158;
  longlong *plStack_150;
  longlong *local_148 [2];
  longlong local_138;
  longlong *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined2 local_68;
  undefined8 local_64;
  undefined8 uStack_5c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  uVar9 = FUN_14126888e();
  if (uVar9 != 0) {
    lVar10 = FUN_1406d14fa(param_1);
    if (lVar10 != 0) {
      lVar11 = FUN_144a5dd5e();
      if ((*(int *)(lVar11 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar11 + 0x38) * 8) == lVar11 + 0x30)) {
        uVar7 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        local_128 = CONCAT44(local_128._4_4_,uVar7 >> 0x10 ^ uVar7);
        FUN_1448d5e3c(&local_138,&local_128);
        lVar11 = *(longlong *)(local_138 + 0xe0);
        local_160 = (PSRWLOCK)(lVar11 + 0x638);
        AcquireSRWLockExclusive(local_160);
        *(int *)(lVar11 + 0x630) = *(int *)(lVar11 + 0x630) + 1;
        lVar4 = *(longlong *)(local_138 + 0xf0);
        AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0x638));
        *(int *)(lVar4 + 0x630) = *(int *)(lVar4 + 0x630) + 1;
        lVar5 = *(longlong *)(local_138 + 0x610);
        AcquireSRWLockShared((PSRWLOCK)(lVar5 + 0xa28));
        local_c8 = 0;
        local_c0 = 0x8000000000;
        uStack_b8 = 0xffffffff;
        local_128 = 0;
        uStack_120 = 0;
        local_118 = 0;
        uStack_110 = 0;
        local_108 = 0;
        uStack_100 = 0;
        local_f8 = 0;
        uStack_f0 = 0;
        local_e8 = 0;
        uStack_e0 = 0;
        local_a8 = 0;
        local_a0 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_78 = 0;
        local_70 = 0xf;
        local_68 = 1;
        local_64 = 0;
        uStack_5c = 0;
        cVar6 = FUN_14416af0c(lVar10,*(undefined4 *)(lVar5 + 0x304),*(undefined4 *)(lVar5 + 0x574),
                              &local_128);
        if (cVar6 != '\0') {
          cVar6 = FUN_1415b545a(&local_128);
          if (cVar6 != '\0') {
            FUN_140babe90(lVar11,&local_128,0);
            FUN_140bafb3c(lVar11,lVar4 + 0x218,0);
            FUN_148e6f156(param_1,local_148);
            FUN_140bac58e(lVar11,local_148);
            if (local_148[0] != (longlong *)0x0) {
              FUN_1400020a8();
            }
            FUN_140babf00(lVar11,lVar10);
            local_158 = 0;
            plStack_150 = (longlong *)0x0;
            FUN_1413a454c(local_148,*(undefined4 *)(lVar5 + 0x3a8),0);
            uVar12 = FUN_1447a1f4a(local_148);
            FUN_1449a0272(lVar11 + 0x4b0,uVar12);
            if (local_148[0] != (longlong *)0x0) {
              (**(code **)(*local_148[0] + 0x10))();
            }
            plVar1 = plStack_150;
            if (plStack_150 != (longlong *)0x0) {
              LOCK();
              plVar3 = plStack_150 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*plStack_150)(plStack_150);
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
          cVar6 = FUN_1415b545a(lVar4 + 0x218);
          if (cVar6 != '\0') {
            FUN_140bafb3c(lVar4,&local_128,0);
            FUN_148e6f156(param_1,local_148);
            FUN_140bac58e(lVar4,local_148);
            if (local_148[0] != (longlong *)0x0) {
              FUN_1400020a8();
            }
            FUN_140babf00(lVar4,lVar10);
          }
          uVar12 = FUN_1401e6c61();
          uVar8 = FUN_140df7d8e(lVar10,uVar12);
          FUN_1415b5422(lVar11,uVar8);
          uVar12 = FUN_1401e6c61();
          uVar8 = FUN_140df7d8e(lVar10,uVar12);
          FUN_1415b5422(lVar4,uVar8);
        }
        FUN_140368b56(&local_128);
        ReleaseSRWLockShared((PSRWLOCK)(lVar5 + 0xa28));
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0x638));
        ReleaseSRWLockExclusive(local_160);
        if (local_130 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_130 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_130)(local_130);
            LOCK();
            piVar2 = (int *)((longlong)local_130 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_130 + 0x10))(local_130);
            }
          }
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e6f156 FUN_148e6f156 body=193 status=ok
// SIG undefined FUN_148e6f156(void)

undefined8 * FUN_148e6f156(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_1406d14fa();
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
         == lVar2 + 0x30)) && (lVar1 = *(longlong *)(lVar1 + 0xa08), lVar1 != 0)) {
      lVar2 = FUN_144a2f878();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        FUN_140bac450(lVar1,local_28);
        FUN_1400021e4(local_28,param_2);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e6f21a FUN_148e6f21a body=212 status=ok
// SIG undefined FUN_148e6f21a(void)

undefined8 * FUN_148e6f21a(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_FUN_14b9bd030;
  FUN_1446ddc76(&local_48,"RetrieveItems",1);
  FUN_14039176c(param_1,param_2,local_48,1);
  *param_1 = &PTR_FUN_14b9bd030;
  param_1[7] = 0;
  param_1[8] = 0;
  lVar4 = param_3[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar3 = *param_3;
    lVar5 = 0;
    do {
      uVar1 = *(undefined4 *)(lVar3 + lVar5);
      iVar2 = *(int *)(param_1 + 8);
      *(uint *)(param_1 + 8) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0x44) < iVar2 + 1U) {
        FUN_14664d78a(param_1 + 7,iVar2);
      }
      *(undefined4 *)(param_1[7] + (longlong)iVar2 * 4) = uVar1;
      lVar5 = lVar5 + 4;
    } while ((longlong)(int)lVar4 * 4 != lVar5);
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148e6f2f0 FUN_148e6f2f0 body=38 status=ok
// SIG undefined FUN_148e6f2f0(void)

undefined8 FUN_148e6f2f0(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"RetrieveItems",1);
  return param_2;
}



// FUNCTION 148e6f316 FUN_148e6f316 body=192 status=ok
// SIG undefined FUN_148e6f316(void)

void FUN_148e6f316(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    return;
  }
  lVar2 = FUN_148e6f3d6();
  if (lVar2 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x40) != 1) {
    lVar3 = FUN_1406d14fa(param_1);
    if (lVar3 != 0) {
      lVar4 = FUN_144a5dd5e();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) goto LAB_148e6f3c1;
    }
    lVar3 = 0;
LAB_148e6f3c1:
    FUN_148f073de(lVar2,lVar3,0);
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  lVar3 = FUN_1406d14fa(param_1);
  if (lVar3 != 0) {
    lVar4 = FUN_144a5dd5e();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) goto LAB_148e6f377;
  }
  lVar3 = 0;
LAB_148e6f377:
  FUN_14434ae40(lVar2,lVar3,uVar1,0,1);
  return;
}



// FUNCTION 148e6f3d6 FUN_148e6f3d6 body=84 status=ok
// SIG undefined FUN_148e6f3d6(void)

undefined8 FUN_148e6f3d6(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_1406d14fa();
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      lVar1 = FUN_1458730d4(lVar1);
      if (lVar1 != 0) {
        uVar3 = FUN_148e3968e(lVar1);
        return uVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 148e6f42a FUN_148e6f42a body=212 status=ok
// SIG undefined FUN_148e6f42a(void)

undefined8 * FUN_148e6f42a(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_FUN_14b9bd050;
  FUN_1446ddc76(&local_48,"TrashItems",1);
  FUN_14039176c(param_1,param_2,local_48,1);
  *param_1 = &PTR_FUN_14b9bd050;
  param_1[7] = 0;
  param_1[8] = 0;
  lVar4 = param_3[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar3 = *param_3;
    lVar5 = 0;
    do {
      uVar1 = *(undefined4 *)(lVar3 + lVar5);
      iVar2 = *(int *)(param_1 + 8);
      *(uint *)(param_1 + 8) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0x44) < iVar2 + 1U) {
        FUN_14664d78a(param_1 + 7,iVar2);
      }
      *(undefined4 *)(param_1[7] + (longlong)iVar2 * 4) = uVar1;
      lVar5 = lVar5 + 4;
    } while ((longlong)(int)lVar4 * 4 != lVar5);
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148e6f500 FUN_148e6f500 body=38 status=ok
// SIG undefined FUN_148e6f500(void)

undefined8 FUN_148e6f500(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"TrashItems",1);
  return param_2;
}



// FUNCTION 148e6f526 FUN_148e6f526 body=317 status=ok
// SIG undefined FUN_148e6f526(void)

void FUN_148e6f526(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0x40) == 0) goto LAB_148e6f54b;
  lVar3 = FUN_148e6f664();
  if (lVar3 == 0) goto LAB_148e6f54b;
  uVar1 = *(undefined4 *)
           (*(longlong *)(param_1 + 0x38) + -4 + (longlong)*(int *)(param_1 + 0x40) * 4);
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
  FUN_14595fed0(param_1 + 0x38);
  iVar2 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar2 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x38);
    lVar7 = 0;
    do {
      local_4c = *(undefined4 *)(lVar6 + lVar7);
      lVar4 = FUN_1406d14fa(param_1);
      if (lVar4 == 0) {
LAB_148e6f5ef:
        lVar4 = 0;
      }
      else {
        lVar5 = FUN_144a5dd5e();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar5 + 0x38) * 8) != lVar5 + 0x30)) goto LAB_148e6f5ef;
      }
      local_58 = 0;
      FUN_14434ae40(lVar3,lVar4,&local_4c,1);
      lVar7 = lVar7 + 4;
    } while ((longlong)iVar2 * 4 != lVar7);
  }
  local_4c = uVar1;
  lVar6 = FUN_1406d14fa(param_1);
  if (lVar6 == 0) {
LAB_148e6f645:
    lVar6 = 0;
  }
  else {
    lVar7 = FUN_144a5dd5e();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        != lVar7 + 0x30)) goto LAB_148e6f645;
  }
  local_58 = 1;
  FUN_14434ae40(lVar3,lVar6,&local_4c,1);
LAB_148e6f54b:
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e6f664 FUN_148e6f664 body=84 status=ok
// SIG undefined FUN_148e6f664(void)

undefined8 FUN_148e6f664(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_1406d14fa();
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      lVar1 = FUN_1458730d4(lVar1);
      if (lVar1 != 0) {
        uVar3 = FUN_148e3968e(lVar1);
        return uVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 148e6f6b8 FUN_148e6f6b8 body=135 status=ok
// SIG undefined FUN_148e6f6b8(void)

void FUN_148e6f6b8(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = FUN_1406d14fa();
  if (lVar2 != 0) {
    lVar3 = FUN_144a5dd5e();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      uVar1 = FUN_1487c502a(lVar2);
      local_28 = *(undefined8 *)(param_1 + 0x38);
      local_20 = *(undefined4 *)(param_1 + 0x40);
      FUN_148c39570(lVar2,&local_28,uVar1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e6f740 FUN_148e6f740 body=94 status=ok
// SIG undefined FUN_148e6f740(void)

void FUN_148e6f740(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1406d14fa();
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      lVar1 = FUN_148e6f79e(lVar1);
      if (lVar1 != 0) {
        FUN_148e5a3d6(lVar1,*(undefined4 *)(param_1 + 0x38),0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148e6f79e FUN_148e6f79e body=103 status=ok
// SIG undefined FUN_148e6f79e(void)

void FUN_148e6f79e(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145b94db8();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_148e76be2(param_1 + 0x3b38,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e6f80a FUN_148e6f80a body=145 status=ok
// SIG undefined FUN_148e6f80a(void)

void FUN_148e6f80a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined2 local_38;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_1406d14fa();
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      local_38 = FUN_1487c502a(lVar1);
      local_20 = *(undefined4 *)(param_1 + 0x40);
      local_28 = *(undefined8 *)(param_1 + 0x38);
      FUN_148c379c8(lVar1,&local_28,*(undefined4 *)(param_1 + 0x44),*(undefined1 *)(param_1 + 0x48))
      ;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e6f89c FUN_148e6f89c body=761 status=ok
// SIG undefined FUN_148e6f89c(void)

void FUN_148e6f89c(longlong param_1)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStack_5a8 [40];
  longlong local_580;
  longlong local_578;
  longlong local_570;
  PSRWLOCK local_568;
  undefined1 local_560 [112];
  longlong local_4f0;
  int local_4e8;
  longlong local_4e0;
  int local_4d8;
  undefined1 local_478 [1072];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_5a8;
  if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar3 = FUN_1406d14fa(), lVar3 != 0)) {
    lVar4 = FUN_144a5dd5e();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (((*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30 &&
         (lVar4 = (**(code **)(*(longlong *)(lVar3 + 0x9a8) + 0x10))(lVar3 + 0x9a8), lVar4 != 0)) &&
        (iVar1 = *(int *)(lVar4 + 0x90), (longlong)iVar1 != 0)))) {
      lVar7 = *(longlong *)(lVar4 + 0x88);
      lVar8 = 0;
      do {
        lVar5 = FUN_14105c38a(lVar7 + lVar8);
        if (lVar5 == *(longlong *)(param_1 + 0x38)) {
          uVar10 = (lVar8 >> 4) * -0x3333333333333333;
          uVar9 = (uint)uVar10;
          if ((-1 < (int)uVar9) && ((int)uVar9 < *(int *)(lVar4 + 0x90))) {
            plVar6 = (longlong *)FUN_148e6fb96(param_1);
            local_580 = *plVar6;
            local_568 = (PSRWLOCK)(local_580 + 0x88);
            AcquireSRWLockExclusive(local_568);
            if ((*(char *)(param_1 + 0x40) == '\x01') &&
               (lVar7 = FUN_14126888e(param_1), lVar7 != 0)) {
              FUN_148e6fc3a(local_580 + 0x28,
                            (ulonglong)(uVar9 & 0x7fffffff) * 0x50 + *(longlong *)(lVar4 + 0x88));
            }
            FUN_14147691e(local_560,
                          (ulonglong)(uVar9 & 0x7fffffff) * 0x50 + *(longlong *)(lVar4 + 0x88),lVar3
                         );
            if ((longlong)local_4e8 != 0) {
              local_570 = (longlong)local_4e8 * 0xd8 + local_4f0;
              local_578 = local_580 + 0x40;
              lVar3 = local_4f0;
              do {
                iVar1 = *(int *)(lVar3 + 0x60);
                if ((longlong)iVar1 != 0) {
                  lVar7 = *(longlong *)(lVar3 + 0x58);
                  lVar8 = 0;
                  do {
                    cVar2 = FUN_144709e00(*(undefined8 *)(lVar7 + lVar8),&DAT_14b826fa2);
                    if (cVar2 != '\0') goto LAB_148e6fa97;
                    lVar8 = lVar8 + 8;
                  } while ((longlong)iVar1 * 8 != lVar8);
                }
                FUN_148e1d664(local_580,local_478,lVar3);
                FUN_1418f484e(local_578,local_478);
                FUN_141286efe(local_478);
LAB_148e6fa97:
                lVar3 = lVar3 + 0xd8;
              } while (lVar3 != local_570);
            }
            if ((longlong)local_4d8 != 0) {
              local_570 = (longlong)local_4d8 * 0xd8 + local_4e0;
              local_578 = local_580 + 0x40;
              lVar3 = local_4e0;
              do {
                iVar1 = *(int *)(lVar3 + 0x60);
                if ((longlong)iVar1 != 0) {
                  lVar7 = *(longlong *)(lVar3 + 0x58);
                  lVar8 = 0;
                  do {
                    cVar2 = FUN_144709e00(*(undefined8 *)(lVar7 + lVar8),&DAT_14b826fa2);
                    if (cVar2 != '\0') goto LAB_148e6fb3b;
                    lVar8 = lVar8 + 8;
                  } while ((longlong)iVar1 * 8 != lVar8);
                }
                FUN_148e1d664(local_580,local_478,lVar3);
                FUN_1418f484e(local_578,local_478);
                FUN_141286efe(local_478);
LAB_148e6fb3b:
                lVar3 = lVar3 + 0xd8;
              } while (lVar3 != local_570);
            }
            FUN_141286d76(local_560);
            ReleaseSRWLockExclusive(local_568);
            FUN_148942724(lVar4,uVar10 & 0xffffffff);
          }
          break;
        }
        lVar8 = lVar8 + 0x50;
      } while ((longlong)iVar1 * 0x50 != lVar8);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_5a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e6fb96 FUN_148e6fb96 body=163 status=ok
// SIG undefined FUN_148e6fb96(void)

longlong FUN_148e6fb96(void)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [44];
  uint local_2c;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = FUN_14126888e();
  uVar3 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
  local_2c = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  local_2c = local_2c >> 0x10 ^ local_2c;
  FUN_1448d5e3c(&local_28);
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_28 + 0x4c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e6fc3a FUN_148e6fc3a body=73 status=ok
// SIG undefined FUN_148e6fc3a(void)

void FUN_148e6fc3a(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14655c5d6(param_1,iVar1);
  }
  FUN_1459c8e8c((longlong)iVar1 * 0x50 + *param_1,param_2);
  if (iVar1 != -1) {
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  }
  return;
}



// FUNCTION 148e6fc84 FUN_148e6fc84 body=163 status=ok
// SIG undefined FUN_148e6fc84(void)

longlong FUN_148e6fc84(void)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [44];
  uint local_2c;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = FUN_14126888e();
  uVar3 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
  local_2c = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  local_2c = local_2c >> 0x10 ^ local_2c;
  FUN_1448d5e3c(&local_28);
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_28 + 0x4c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e6fd28 FUN_148e6fd28 body=95 status=ok
// SIG undefined FUN_148e6fd28(void)

void FUN_148e6fd28(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_14655c5d6(param_1,iVar2);
  }
  FUN_1486ed347((longlong)iVar2 * 0x50 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 148e6fd88 FUN_148e6fd88 body=206 status=ok
// SIG undefined FUN_148e6fd88(void)

void FUN_148e6fd88(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_168 [40];
  undefined2 *local_140;
  undefined2 *local_138;
  ulonglong *local_130;
  char local_128;
  undefined2 local_120 [128];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar2 = FUN_14126888e();
  if (lVar2 != 0) {
    lVar2 = FUN_140cee904(lVar2);
    if (lVar2 != 0) {
      local_140 = local_120;
      local_128 = '\0';
      local_130 = &local_20;
      local_138 = local_140;
      FUN_1414768aa(&local_140,"inventory.rewards.");
      iVar1 = *(int *)(param_1 + 0x40) + -1;
      if (*(int *)(param_1 + 0x40) == 0) {
        iVar1 = 0;
      }
      FUN_1449668a2(&local_140,*(undefined8 *)(param_1 + 0x38),iVar1);
      *local_138 = 0;
      FUN_1409800e2(lVar2,local_140);
      if (local_128 == '\x01') {
        FUN_1400020a8(local_140);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e6fe58 FUN_148e6fe58 body=163 status=ok
// SIG undefined FUN_148e6fe58(void)

longlong FUN_148e6fe58(void)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [44];
  uint local_2c;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = FUN_14126888e();
  uVar3 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
  local_2c = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  local_2c = local_2c >> 0x10 ^ local_2c;
  FUN_1448d5e3c(&local_28);
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_28 + 0x600;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e6fefc FUN_148e6fefc body=241 status=ok
// SIG undefined FUN_148e6fefc(void)

void FUN_148e6fefc(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  char local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = FUN_1406d14fa();
  if (lVar1 == 0) goto LAB_148e6ff44;
  lVar2 = FUN_144a5dd5e();
  if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
      lVar2 + 0x30)) goto LAB_148e6ff44;
  plVar3 = (longlong *)FUN_148e6fe58(param_1);
  lVar2 = *plVar3;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0xa0));
  *(int *)(lVar2 + 0x98) = *(int *)(lVar2 + 0x98) + 1;
  if (*(longlong *)(param_1 + 0x38) == *(longlong *)(lVar2 + 0x48)) {
    if (*(int *)(lVar2 + 0x50) == 0) {
      iVar4 = 1;
      goto LAB_148e6ffa2;
    }
  }
  else {
    iVar4 = *(int *)(lVar2 + 0x50) + 1;
LAB_148e6ffa2:
    *(longlong *)(lVar2 + 0x48) = *(longlong *)(param_1 + 0x38);
    *(int *)(lVar2 + 0x50) = iVar4;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar2 + 0xa0));
  local_30 = '\0';
  FUN_14578b85e(lVar1 + 0x3c28,param_1 + 0x40,local_40);
  if (local_30 == '\x01') {
    FUN_1449db362(local_40);
  }
LAB_148e6ff44:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e6ffee FUN_148e6ffee body=93 status=ok
// SIG undefined FUN_148e6ffee(void)

void FUN_148e6ffee(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1406d14fa();
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_148ef0338(lVar1 + 0x3c28,param_1 + 0x38,param_1 + 0x40);
      return;
    }
  }
  return;
}



// FUNCTION 148e7004c FUN_148e7004c body=93 status=ok
// SIG undefined FUN_148e7004c(void)

void FUN_148e7004c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1406d14fa();
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_148ef049e(lVar1 + 0x3c28,param_1 + 0x38,param_1 + 0x40);
      return;
    }
  }
  return;
}



// FUNCTION 148e700aa FUN_148e700aa body=93 status=ok
// SIG undefined FUN_148e700aa(void)

void FUN_148e700aa(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1406d14fa();
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_148ef0566(lVar1 + 0x3c28,param_1 + 0x38,param_1 + 0x40);
      return;
    }
  }
  return;
}



// FUNCTION 148e70108 FUN_148e70108 body=89 status=ok
// SIG undefined FUN_148e70108(void)

void FUN_148e70108(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1406d14fa();
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_148ef0538(lVar1 + 0x3c28,param_1 + 0x38);
      return;
    }
  }
  return;
}



// FUNCTION 148e70162 FUN_148e70162 body=89 status=ok
// SIG undefined FUN_148e70162(void)

void FUN_148e70162(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1406d14fa();
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_148ef06d2(lVar1 + 0x3c28,param_1 + 0x40);
      return;
    }
  }
  return;
}



// FUNCTION 148e701bc FUN_148e701bc body=87 status=ok
// SIG undefined FUN_148e701bc(void)

void FUN_148e701bc(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1406d14fa();
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_148ef0700(lVar1 + 0x3c28,*(undefined4 *)(param_1 + 0x38));
      return;
    }
  }
  return;
}



// FUNCTION 148e70214 FUN_148e70214 body=76 status=ok
// SIG undefined FUN_148e70214(void)

void FUN_148e70214(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1406d14fa();
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_148ef0738(lVar1 + 0x3c28);
      return;
    }
  }
  return;
}



// FUNCTION 148e70260 FUN_148e70260 body=76 status=ok
// SIG undefined FUN_148e70260(void)

void FUN_148e70260(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1406d14fa();
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_148ef075c(lVar1 + 0x3c28);
      return;
    }
  }
  return;
}



// FUNCTION 148e702ac FUN_148e702ac body=95 status=ok
// SIG undefined FUN_148e702ac(void)

void FUN_148e702ac(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1406d14fa();
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      lVar1 = FUN_14578bab6(lVar1);
      if (lVar1 != 0) {
        FUN_1488aef8c(lVar1,param_1 + 0x38);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148e7030c FUN_148e7030c body=95 status=ok
// SIG undefined FUN_148e7030c(void)

void FUN_148e7030c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1406d14fa();
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      lVar1 = FUN_14578bab6(lVar1);
      if (lVar1 != 0) {
        FUN_1488b06a0(lVar1,param_1 + 0x38);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148e7036c FUN_148e7036c body=69 status=ok
// SIG undefined FUN_148e7036c(void)

void FUN_148e7036c(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1406d14fa();
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_148dbb9d4(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 148e703b2 FUN_148e703b2 body=69 status=ok
// SIG undefined FUN_148e703b2(void)

void FUN_148e703b2(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1406d14fa();
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_148dbba4a(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 148e703f8 FUN_148e703f8 body=251 status=ok
// SIG undefined FUN_148e703f8(void)

undefined8 *
FUN_148e703f8(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  void *_Src;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  void *local_50;
  int local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = &PTR_FUN_14b9bd090;
  FUN_1446ddc76(&local_40,"FocusedItem",1);
  FUN_14039176c(param_1,param_2,local_40,1);
  *param_1 = &PTR_FUN_14b9bd090;
  *(undefined4 *)(param_1 + 7) = *param_3;
  FUN_1400bbfc4(&local_60,param_4);
  _Src = local_50;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = local_60;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uStack_5c;
  *(undefined4 *)(param_1 + 10) = uStack_58;
  *(undefined4 *)((longlong)param_1 + 0x54) = uStack_54;
  param_1[0xb] = 0;
  *(int *)(param_1 + 0xc) = local_48;
  if ((longlong)local_48 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xb,local_48,0);
    memcpy((void *)param_1[0xb],_Src,(longlong)local_48 * 2);
  }
  if (local_50 != (void *)0x0) {
    FUN_1400020a8(local_50);
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e704f4 FUN_148e704f4 body=38 status=ok
// SIG undefined FUN_148e704f4(void)

undefined8 FUN_148e704f4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FocusedItem",1);
  return param_2;
}



// FUNCTION 148e7051a FUN_148e7051a body=473 status=ok
// SIG undefined FUN_148e7051a(void)

void FUN_148e7051a(longlong param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar5 = FUN_1406d14fa();
  if (lVar5 == 0) goto LAB_148e70564;
  lVar6 = FUN_144a5dd5e();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
      lVar6 + 0x30)) goto LAB_148e70564;
  puVar1 = (undefined8 *)(param_1 + 0x40);
  lVar6 = FUN_148e709cc(puVar1);
  if (lVar6 == 0) {
    lVar6 = FUN_145d182e6(lVar5);
    if (lVar6 != 0) {
      lVar6 = FUN_148e5c786(lVar6);
      if (lVar6 != 0) {
        FUN_1400bbfae(&local_50,lVar6);
        *(undefined4 *)(param_1 + 0x48) = local_50;
        *(undefined4 *)(param_1 + 0x4c) = uStack_4c;
        *(undefined4 *)(param_1 + 0x50) = uStack_48;
        *(undefined4 *)(param_1 + 0x54) = uStack_44;
        if ((undefined4 *)(param_1 + 0x48) == &local_50) {
          if (local_40 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*(longlong *)(param_1 + 0x58) != 0) {
            FUN_1400020a8();
          }
          *(longlong *)(param_1 + 0x58) = local_40;
          local_40 = 0;
          *(undefined4 *)(param_1 + 0x60) = local_38;
          *(undefined4 *)(param_1 + 100) = local_34;
        }
        cVar4 = (*(code *)PTR_FUN_14c758760)();
        if (cVar4 != '\0') {
          uVar2 = *(uint *)(lVar6 + 0xc);
          if ((int)uVar2 < DAT_14c9647dc) {
            lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
          }
          else {
            lVar8 = 0;
          }
          if ((*(uint *)(lVar8 + 8) & 0x8400000) != 0) {
            *(undefined8 *)(param_1 + 0x40) = 0;
            goto LAB_148e705e8;
          }
        }
        FUN_14485c47a(puVar1,lVar6);
        goto LAB_148e705e8;
      }
    }
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    if (*(int *)(param_1 + 100) < 0) {
      FUN_1446f8c06((undefined8 *)(param_1 + 0x58),0);
    }
    puVar3 = *(undefined2 **)(param_1 + 0x58);
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
LAB_148e705e8:
  lVar6 = FUN_148e709cc(puVar1);
  if (lVar6 != 0) {
    uVar7 = FUN_148e709cc(puVar1);
    cVar4 = FUN_14573c2e0(uVar7,lVar5);
    uVar7 = FUN_148e709cc(puVar1);
    if (cVar4 == '\0') {
      FUN_1412ea1b8(uVar7,lVar5);
    }
    else {
      FUN_1412ea7ae();
    }
  }
LAB_148e70564:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e706f4 FUN_148e706f4 body=251 status=ok
// SIG undefined FUN_148e706f4(void)

undefined8 *
FUN_148e706f4(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  void *_Src;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  void *local_50;
  int local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = &PTR_FUN_14b9bd0b0;
  FUN_1446ddc76(&local_40,"BuyItem",1);
  FUN_14039176c(param_1,param_2,local_40,1);
  *param_1 = &PTR_FUN_14b9bd0b0;
  *(undefined4 *)(param_1 + 7) = *param_3;
  FUN_1400bbfc4(&local_60,param_4);
  _Src = local_50;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = local_60;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uStack_5c;
  *(undefined4 *)(param_1 + 10) = uStack_58;
  *(undefined4 *)((longlong)param_1 + 0x54) = uStack_54;
  param_1[0xb] = 0;
  *(int *)(param_1 + 0xc) = local_48;
  if ((longlong)local_48 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xb,local_48,0);
    memcpy((void *)param_1[0xb],_Src,(longlong)local_48 * 2);
  }
  if (local_50 != (void *)0x0) {
    FUN_1400020a8(local_50);
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e707f0 FUN_148e707f0 body=38 status=ok
// SIG undefined FUN_148e707f0(void)

undefined8 FUN_148e707f0(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"BuyItem",1);
  return param_2;
}



// FUNCTION 148e70816 FUN_148e70816 body=436 status=ok
// SIG undefined FUN_148e70816(void)

void FUN_148e70816(longlong param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar5 = FUN_1406d14fa();
  if (lVar5 == 0) goto LAB_148e70860;
  lVar6 = FUN_144a5dd5e();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
      lVar6 + 0x30)) goto LAB_148e70860;
  puVar1 = (undefined8 *)(param_1 + 0x40);
  lVar6 = FUN_148e709cc(puVar1);
  if (lVar6 == 0) {
    lVar6 = FUN_145d182e6(lVar5);
    if (lVar6 != 0) {
      lVar6 = FUN_148e5c786(lVar6);
      if (lVar6 != 0) {
        FUN_1400bbfae(&local_50,lVar6);
        *(undefined4 *)(param_1 + 0x48) = local_50;
        *(undefined4 *)(param_1 + 0x4c) = uStack_4c;
        *(undefined4 *)(param_1 + 0x50) = uStack_48;
        *(undefined4 *)(param_1 + 0x54) = uStack_44;
        if ((undefined4 *)(param_1 + 0x48) == &local_50) {
          if (local_40 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*(longlong *)(param_1 + 0x58) != 0) {
            FUN_1400020a8();
          }
          *(longlong *)(param_1 + 0x58) = local_40;
          local_40 = 0;
          *(undefined4 *)(param_1 + 0x60) = local_38;
          *(undefined4 *)(param_1 + 100) = local_34;
        }
        cVar4 = (*(code *)PTR_FUN_14c758760)();
        if (cVar4 != '\0') {
          uVar2 = *(uint *)(lVar6 + 0xc);
          if ((int)uVar2 < DAT_14c9647dc) {
            lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
          }
          else {
            lVar7 = 0;
          }
          if ((*(uint *)(lVar7 + 8) & 0x8400000) != 0) {
            *(undefined8 *)(param_1 + 0x40) = 0;
            goto LAB_148e708e4;
          }
        }
        FUN_14485c47a(puVar1,lVar6);
        goto LAB_148e708e4;
      }
    }
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    if (*(int *)(param_1 + 100) < 0) {
      FUN_1446f8c06((undefined8 *)(param_1 + 0x58),0);
    }
    puVar3 = *(undefined2 **)(param_1 + 0x58);
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
LAB_148e708e4:
  lVar6 = FUN_148e709cc(puVar1);
  if (lVar6 != 0) {
    FUN_148f09418(lVar6,param_1 + 0x38,lVar5,1);
  }
LAB_148e70860:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e709cc FUN_148e709cc body=197 status=ok
// SIG undefined FUN_148e709cc(void)

longlong FUN_148e709cc(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_14479d2ce();
  if (lVar3 == 0) {
    if (*(longlong *)(param_1 + 8) == 0) {
      return 0;
    }
    lVar3 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar3 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_1,lVar3);
      if (lVar3 == 0) {
        return 0;
      }
    }
    else {
      uVar1 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar3);
      }
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_14070560c();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar3;
  }
  return 0;
}



// FUNCTION 148e70a92 FUN_148e70a92 body=320 status=ok
// SIG undefined FUN_148e70a92(void)

undefined8 *
FUN_148e70a92(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  void *pvVar2;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  void *local_50;
  int local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = &PTR_FUN_14b9bd0d0;
  FUN_1446ddc76(&local_40,"SellItems",1);
  FUN_14039176c(param_1,param_2,local_40,1);
  *param_1 = &PTR_FUN_14b9bd0d0;
  param_1[7] = 0;
  iVar1 = *(int *)(param_3 + 1);
  pvVar2 = (void *)*param_3;
  *(int *)(param_1 + 8) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_148c6bbc2(param_1 + 7,iVar1,0);
    memcpy((void *)param_1[7],pvVar2,(longlong)iVar1 << 2);
  }
  FUN_1400bbfc4(&local_60,param_4);
  pvVar2 = local_50;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = local_60;
  *(undefined4 *)((longlong)param_1 + 0x54) = uStack_5c;
  *(undefined4 *)(param_1 + 0xb) = uStack_58;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uStack_54;
  param_1[0xc] = 0;
  *(int *)(param_1 + 0xd) = local_48;
  if ((longlong)local_48 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xc,local_48,0);
    memcpy((void *)param_1[0xc],pvVar2,(longlong)local_48 * 2);
  }
  if (local_50 != (void *)0x0) {
    FUN_1400020a8(local_50);
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e70bd4 FUN_148e70bd4 body=38 status=ok
// SIG undefined FUN_148e70bd4(void)

undefined8 FUN_148e70bd4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"SellItems",1);
  return param_2;
}



// FUNCTION 148e70bfa FUN_148e70bfa body=715 status=ok
// SIG undefined FUN_148e70bfa(void)

void FUN_148e70bfa(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  undefined2 *puVar4;
  longlong *plVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  uint local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar8 = FUN_1406d14fa();
  if (lVar8 == 0) goto LAB_148e70c44;
  lVar9 = FUN_144a5dd5e();
  if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) !=
      lVar9 + 0x30)) goto LAB_148e70c44;
  puVar1 = (undefined8 *)(param_1 + 0x48);
  lVar9 = FUN_148e709cc(puVar1);
  if (lVar9 == 0) {
    lVar9 = FUN_145d182e6(lVar8);
    if (lVar9 != 0) {
      lVar9 = FUN_148e5c786(lVar9);
      if (lVar9 != 0) {
        FUN_1400bbfae(&local_50,lVar9);
        *(undefined4 *)(param_1 + 0x50) = local_50;
        *(undefined4 *)(param_1 + 0x54) = uStack_4c;
        *(undefined4 *)(param_1 + 0x58) = uStack_48;
        *(undefined4 *)(param_1 + 0x5c) = uStack_44;
        if ((undefined4 *)(param_1 + 0x50) == &local_50) {
          if (local_40 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*(longlong *)(param_1 + 0x60) != 0) {
            FUN_1400020a8();
          }
          *(longlong *)(param_1 + 0x60) = local_40;
          local_40 = 0;
          *(undefined4 *)(param_1 + 0x68) = local_38;
          *(undefined4 *)(param_1 + 0x6c) = local_34;
        }
        cVar6 = (*(code *)PTR_FUN_14c758760)();
        if (cVar6 != '\0') {
          uVar7 = *(uint *)(lVar9 + 0xc);
          if ((int)uVar7 < DAT_14c9647dc) {
            lVar12 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
          }
          else {
            lVar12 = 0;
          }
          if ((*(uint *)(lVar12 + 8) & 0x8400000) != 0) {
            *(undefined8 *)(param_1 + 0x48) = 0;
            goto LAB_148e70ccc;
          }
        }
        FUN_14485c47a(puVar1,lVar9);
        goto LAB_148e70ccc;
      }
    }
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    if (*(int *)(param_1 + 0x6c) < 0) {
      FUN_1446f8c06((undefined8 *)(param_1 + 0x60),0);
    }
    puVar4 = *(undefined2 **)(param_1 + 0x60);
    if (puVar4 != (undefined2 *)0x0) {
      *puVar4 = 0;
    }
  }
LAB_148e70ccc:
  lVar9 = FUN_148e709cc(puVar1);
  if (lVar9 != 0) {
    local_54 = *(undefined4 *)
                (*(longlong *)(param_1 + 0x38) + -4 + (longlong)*(int *)(param_1 + 0x40) * 4);
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
    FUN_148e76c2e(param_1 + 0x38);
    if ((longlong)*(int *)(param_1 + 0x40) != 0) {
      lVar12 = *(longlong *)(param_1 + 0x38);
      lVar13 = (longlong)*(int *)(param_1 + 0x40) << 2;
      do {
        uVar10 = FUN_140254ee4(lVar8);
        local_68 = 0;
        FUN_148f0ad9e(lVar9,lVar12,lVar8,uVar10);
        lVar12 = lVar12 + 4;
        lVar13 = lVar13 + -4;
      } while (lVar13 != 0);
    }
    uVar10 = FUN_140254ee4(lVar8);
    local_68 = 1;
    FUN_148f0ad9e(lVar9,&local_54,lVar8,uVar10);
    uVar11 = FUN_144a7ba4c(lVar8);
    if (uVar11 != 0) {
      uVar7 = ((uint)(uVar11 >> 0x14) & 0xffff ^ (uint)(uVar11 >> 4)) * -0x7a143595;
      local_58 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
      local_58 = local_58 >> 0x10 ^ local_58;
      FUN_1448d5e3c(&local_50);
      lVar8 = *(longlong *)(CONCAT44(uStack_4c,local_50) + 0x1b0);
      AcquireSRWLockExclusive((PSRWLOCK)(lVar8 + 0x1c0));
      *(int *)(lVar8 + 0x1b8) = *(int *)(lVar8 + 0x1b8) + 1;
      FUN_148e1b61c(lVar8);
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar8 + 0x1c0));
      plVar5 = (longlong *)CONCAT44(uStack_44,uStack_48);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
    }
  }
LAB_148e70c44:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e70ec6 FUN_148e70ec6 body=320 status=ok
// SIG undefined FUN_148e70ec6(void)

undefined8 *
FUN_148e70ec6(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  void *pvVar2;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  void *local_50;
  int local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = &PTR_FUN_14b9bd0f0;
  FUN_1446ddc76(&local_40,"SellAllJunk",1);
  FUN_14039176c(param_1,param_2,local_40,1);
  *param_1 = &PTR_FUN_14b9bd0f0;
  param_1[7] = 0;
  iVar1 = *(int *)(param_3 + 1);
  pvVar2 = (void *)*param_3;
  *(int *)(param_1 + 8) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_148c6bbc2(param_1 + 7,iVar1,0);
    memcpy((void *)param_1[7],pvVar2,(longlong)iVar1 << 2);
  }
  FUN_1400bbfc4(&local_60,param_4);
  pvVar2 = local_50;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = local_60;
  *(undefined4 *)((longlong)param_1 + 0x54) = uStack_5c;
  *(undefined4 *)(param_1 + 0xb) = uStack_58;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uStack_54;
  param_1[0xc] = 0;
  *(int *)(param_1 + 0xd) = local_48;
  if ((longlong)local_48 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xc,local_48,0);
    memcpy((void *)param_1[0xc],pvVar2,(longlong)local_48 * 2);
  }
  if (local_50 != (void *)0x0) {
    FUN_1400020a8(local_50);
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e71008 FUN_148e71008 body=38 status=ok
// SIG undefined FUN_148e71008(void)

undefined8 FUN_148e71008(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"SellAllJunk",1);
  return param_2;
}



// FUNCTION 148e7102e FUN_148e7102e body=620 status=ok
// SIG undefined FUN_148e7102e(void)

void FUN_148e7102e(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  undefined2 *puVar4;
  longlong *plVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_78 [36];
  uint local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar8 = FUN_1406d14fa();
  if (lVar8 == 0) goto LAB_148e71078;
  lVar9 = FUN_144a5dd5e();
  if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) !=
      lVar9 + 0x30)) goto LAB_148e71078;
  puVar1 = (undefined8 *)(param_1 + 0x48);
  lVar9 = FUN_148e709cc(puVar1);
  if (lVar9 == 0) {
    lVar9 = FUN_145d182e6(lVar8);
    if (lVar9 != 0) {
      lVar9 = FUN_148e5c786(lVar9);
      if (lVar9 != 0) {
        FUN_1400bbfae(&local_50,lVar9);
        *(undefined4 *)(param_1 + 0x50) = local_50;
        *(undefined4 *)(param_1 + 0x54) = uStack_4c;
        *(undefined4 *)(param_1 + 0x58) = uStack_48;
        *(undefined4 *)(param_1 + 0x5c) = uStack_44;
        if ((undefined4 *)(param_1 + 0x50) == &local_50) {
          if (local_40 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*(longlong *)(param_1 + 0x60) != 0) {
            FUN_1400020a8();
          }
          *(longlong *)(param_1 + 0x60) = local_40;
          local_40 = 0;
          *(undefined4 *)(param_1 + 0x68) = local_38;
          *(undefined4 *)(param_1 + 0x6c) = local_34;
        }
        cVar6 = (*(code *)PTR_FUN_14c758760)();
        if (cVar6 != '\0') {
          uVar7 = *(uint *)(lVar9 + 0xc);
          if ((int)uVar7 < DAT_14c9647dc) {
            lVar11 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
          }
          else {
            lVar11 = 0;
          }
          if ((*(uint *)(lVar11 + 8) & 0x8400000) != 0) {
            *(undefined8 *)(param_1 + 0x48) = 0;
            goto LAB_148e71100;
          }
        }
        FUN_14485c47a(puVar1,lVar9);
        goto LAB_148e71100;
      }
    }
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    if (*(int *)(param_1 + 0x6c) < 0) {
      FUN_1446f8c06((undefined8 *)(param_1 + 0x60),0);
    }
    puVar4 = *(undefined2 **)(param_1 + 0x60);
    if (puVar4 != (undefined2 *)0x0) {
      *puVar4 = 0;
    }
  }
LAB_148e71100:
  lVar9 = FUN_148e709cc(puVar1);
  if (lVar9 != 0) {
    FUN_148f0a792(lVar9,param_1 + 0x38,lVar8,0);
    FUN_148f0b16e(lVar9);
  }
  uVar10 = FUN_144a7ba4c(lVar8);
  if (uVar10 != 0) {
    uVar7 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
    local_54 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    local_54 = local_54 >> 0x10 ^ local_54;
    FUN_1448d5e3c(&local_50);
    lVar8 = *(longlong *)(CONCAT44(uStack_4c,local_50) + 0x1b0);
    AcquireSRWLockExclusive((PSRWLOCK)(lVar8 + 0x1c0));
    *(int *)(lVar8 + 0x1b8) = *(int *)(lVar8 + 0x1b8) + 1;
    FUN_148e1b61c(lVar8);
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar8 + 0x1c0));
    plVar5 = (longlong *)CONCAT44(uStack_44,uStack_48);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar5 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar3 = (int *)((longlong)plVar5 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
LAB_148e71078:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e7129c FUN_148e7129c body=243 status=ok
// SIG undefined FUN_148e7129c(void)

undefined8 * FUN_148e7129c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  void *_Src;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  void *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_14b9bd110;
  FUN_1446ddc76(&local_38,"RestockAmmo",1);
  FUN_14039176c(param_1,param_2,local_38,1);
  *param_1 = &PTR_FUN_14b9bd110;
  FUN_1400bbfc4(&local_58,param_3);
  _Src = local_48;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = local_58;
  *(undefined4 *)((longlong)param_1 + 0x44) = uStack_54;
  *(undefined4 *)(param_1 + 9) = uStack_50;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uStack_4c;
  param_1[10] = 0;
  *(int *)(param_1 + 0xb) = local_40;
  if ((longlong)local_40 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 10,local_40,0);
    memcpy((void *)param_1[10],_Src,(longlong)local_40 * 2);
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8(local_48);
  }
  *(undefined1 *)(param_1 + 0xc) = 1;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e71390 FUN_148e71390 body=38 status=ok
// SIG undefined FUN_148e71390(void)

undefined8 FUN_148e71390(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"RestockAmmo",1);
  return param_2;
}



// FUNCTION 148e713b6 FUN_148e713b6 body=430 status=ok
// SIG undefined FUN_148e713b6(void)

void FUN_148e713b6(longlong param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar5 = FUN_1406d14fa();
  if (lVar5 == 0) goto LAB_148e71400;
  lVar6 = FUN_144a5dd5e();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
      lVar6 + 0x30)) goto LAB_148e71400;
  puVar1 = (undefined8 *)(param_1 + 0x38);
  lVar6 = FUN_148e709cc(puVar1);
  if (lVar6 == 0) {
    lVar6 = FUN_145d182e6(lVar5);
    if (lVar6 != 0) {
      lVar6 = FUN_148e5c786(lVar6);
      if (lVar6 != 0) {
        FUN_1400bbfae(&local_50,lVar6);
        *(undefined4 *)(param_1 + 0x40) = local_50;
        *(undefined4 *)(param_1 + 0x44) = uStack_4c;
        *(undefined4 *)(param_1 + 0x48) = uStack_48;
        *(undefined4 *)(param_1 + 0x4c) = uStack_44;
        if ((undefined4 *)(param_1 + 0x40) == &local_50) {
          if (local_40 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*(longlong *)(param_1 + 0x50) != 0) {
            FUN_1400020a8();
          }
          *(longlong *)(param_1 + 0x50) = local_40;
          local_40 = 0;
          *(undefined4 *)(param_1 + 0x58) = local_38;
          *(undefined4 *)(param_1 + 0x5c) = local_34;
        }
        cVar4 = (*(code *)PTR_FUN_14c758760)();
        if (cVar4 != '\0') {
          uVar2 = *(uint *)(lVar6 + 0xc);
          if ((int)uVar2 < DAT_14c9647dc) {
            lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
          }
          else {
            lVar7 = 0;
          }
          if ((*(uint *)(lVar7 + 8) & 0x8400000) != 0) {
            *(undefined8 *)(param_1 + 0x38) = 0;
            goto LAB_148e71484;
          }
        }
        FUN_14485c47a(puVar1,lVar6);
        goto LAB_148e71484;
      }
    }
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    if (*(int *)(param_1 + 0x5c) < 0) {
      FUN_1446f8c06((undefined8 *)(param_1 + 0x50),0);
    }
    puVar3 = *(undefined2 **)(param_1 + 0x50);
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
LAB_148e71484:
  lVar6 = FUN_148e709cc(puVar1);
  if (lVar6 != 0) {
    FUN_148f09ab0(lVar6,lVar5,*(undefined1 *)(param_1 + 0x60));
  }
LAB_148e71400:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e71566 FUN_148e71566 body=239 status=ok
// SIG undefined FUN_148e71566(void)

undefined8 * FUN_148e71566(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  void *_Src;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  void *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_14b9bd130;
  FUN_1446ddc76(&local_38,"RefillHealth",1);
  FUN_14039176c(param_1,param_2,local_38,1);
  *param_1 = &PTR_FUN_14b9bd130;
  FUN_1400bbfc4(&local_58,param_3);
  _Src = local_48;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = local_58;
  *(undefined4 *)((longlong)param_1 + 0x44) = uStack_54;
  *(undefined4 *)(param_1 + 9) = uStack_50;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uStack_4c;
  param_1[10] = 0;
  *(int *)(param_1 + 0xb) = local_40;
  if ((longlong)local_40 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 10,local_40,0);
    memcpy((void *)param_1[10],_Src,(longlong)local_40 * 2);
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8(local_48);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e71656 FUN_148e71656 body=38 status=ok
// SIG undefined FUN_148e71656(void)

undefined8 FUN_148e71656(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"RefillHealth",1);
  return param_2;
}



// FUNCTION 148e7167c FUN_148e7167c body=426 status=ok
// SIG undefined FUN_148e7167c(void)

void FUN_148e7167c(longlong param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar5 = FUN_1406d14fa();
  if (lVar5 == 0) goto LAB_148e716c6;
  lVar6 = FUN_144a5dd5e();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
      lVar6 + 0x30)) goto LAB_148e716c6;
  puVar1 = (undefined8 *)(param_1 + 0x38);
  lVar6 = FUN_148e709cc(puVar1);
  if (lVar6 == 0) {
    lVar6 = FUN_145d182e6(lVar5);
    if (lVar6 != 0) {
      lVar6 = FUN_148e5c786(lVar6);
      if (lVar6 != 0) {
        FUN_1400bbfae(&local_50,lVar6);
        *(undefined4 *)(param_1 + 0x40) = local_50;
        *(undefined4 *)(param_1 + 0x44) = uStack_4c;
        *(undefined4 *)(param_1 + 0x48) = uStack_48;
        *(undefined4 *)(param_1 + 0x4c) = uStack_44;
        if ((undefined4 *)(param_1 + 0x40) == &local_50) {
          if (local_40 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*(longlong *)(param_1 + 0x50) != 0) {
            FUN_1400020a8();
          }
          *(longlong *)(param_1 + 0x50) = local_40;
          local_40 = 0;
          *(undefined4 *)(param_1 + 0x58) = local_38;
          *(undefined4 *)(param_1 + 0x5c) = local_34;
        }
        cVar4 = (*(code *)PTR_FUN_14c758760)();
        if (cVar4 != '\0') {
          uVar2 = *(uint *)(lVar6 + 0xc);
          if ((int)uVar2 < DAT_14c9647dc) {
            lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
          }
          else {
            lVar7 = 0;
          }
          if ((*(uint *)(lVar7 + 8) & 0x8400000) != 0) {
            *(undefined8 *)(param_1 + 0x38) = 0;
            goto LAB_148e7174a;
          }
        }
        FUN_14485c47a(puVar1,lVar6);
        goto LAB_148e7174a;
      }
    }
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    if (*(int *)(param_1 + 0x5c) < 0) {
      FUN_1446f8c06((undefined8 *)(param_1 + 0x50),0);
    }
    puVar3 = *(undefined2 **)(param_1 + 0x50);
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
LAB_148e7174a:
  lVar6 = FUN_148e709cc(puVar1);
  if (lVar6 != 0) {
    FUN_148f08c9c(lVar6,lVar5);
  }
LAB_148e716c6:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e71828 FUN_148e71828 body=239 status=ok
// SIG undefined FUN_148e71828(void)

undefined8 * FUN_148e71828(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  void *_Src;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  void *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_14b9bd150;
  FUN_1446ddc76(&local_38,"CantAffordPurchase",1);
  FUN_14039176c(param_1,param_2,local_38,1);
  *param_1 = &PTR_FUN_14b9bd150;
  FUN_1400bbfc4(&local_58,param_3);
  _Src = local_48;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = local_58;
  *(undefined4 *)((longlong)param_1 + 0x44) = uStack_54;
  *(undefined4 *)(param_1 + 9) = uStack_50;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uStack_4c;
  param_1[10] = 0;
  *(int *)(param_1 + 0xb) = local_40;
  if ((longlong)local_40 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 10,local_40,0);
    memcpy((void *)param_1[10],_Src,(longlong)local_40 * 2);
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8(local_48);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e71918 FUN_148e71918 body=38 status=ok
// SIG undefined FUN_148e71918(void)

undefined8 FUN_148e71918(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"CantAffordPurchase",1);
  return param_2;
}



// FUNCTION 148e7193e FUN_148e7193e body=437 status=ok
// SIG undefined FUN_148e7193e(void)

void FUN_148e7193e(longlong param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar5 = FUN_1406d14fa();
  if (lVar5 == 0) goto LAB_148e71988;
  lVar6 = FUN_144a5dd5e();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
      lVar6 + 0x30)) goto LAB_148e71988;
  puVar1 = (undefined8 *)(param_1 + 0x38);
  lVar6 = FUN_148e709cc(puVar1);
  if (lVar6 == 0) {
    lVar6 = FUN_145d182e6(lVar5);
    if (lVar6 != 0) {
      lVar6 = FUN_148e5c786(lVar6);
      if (lVar6 != 0) {
        FUN_1400bbfae(&local_50,lVar6);
        *(undefined4 *)(param_1 + 0x40) = local_50;
        *(undefined4 *)(param_1 + 0x44) = uStack_4c;
        *(undefined4 *)(param_1 + 0x48) = uStack_48;
        *(undefined4 *)(param_1 + 0x4c) = uStack_44;
        if ((undefined4 *)(param_1 + 0x40) == &local_50) {
          if (local_40 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*(longlong *)(param_1 + 0x50) != 0) {
            FUN_1400020a8();
          }
          *(longlong *)(param_1 + 0x50) = local_40;
          local_40 = 0;
          *(undefined4 *)(param_1 + 0x58) = local_38;
          *(undefined4 *)(param_1 + 0x5c) = local_34;
        }
        cVar4 = (*(code *)PTR_FUN_14c758760)();
        if (cVar4 != '\0') {
          uVar2 = *(uint *)(lVar6 + 0xc);
          if ((int)uVar2 < DAT_14c9647dc) {
            lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
          }
          else {
            lVar7 = 0;
          }
          if ((*(uint *)(lVar7 + 8) & 0x8400000) != 0) {
            *(undefined8 *)(param_1 + 0x38) = 0;
            goto LAB_148e71a0c;
          }
        }
        FUN_14485c47a(puVar1,lVar6);
        goto LAB_148e71a0c;
      }
    }
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    if (*(int *)(param_1 + 0x5c) < 0) {
      FUN_1446f8c06((undefined8 *)(param_1 + 0x50),0);
    }
    puVar3 = *(undefined2 **)(param_1 + 0x50);
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
LAB_148e71a0c:
  lVar6 = FUN_148e709cc(puVar1);
  if (lVar6 != 0) {
    local_50 = CONCAT31(local_50._1_3_,2);
    FUN_148c37e0c(lVar5,&local_50,lVar6,0);
  }
LAB_148e71988:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e71af4 FUN_148e71af4 body=161 status=ok
// SIG undefined FUN_148e71af4(void)

longlong FUN_148e71af4(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_1[1];
  if (lVar2 == 0) {
    uVar1 = FUN_14036a63e();
    lVar2 = FUN_14477b664(uVar1);
    param_1[1] = lVar2;
  }
  lVar3 = param_1[2];
  if (lVar3 != 0) {
LAB_148e71b22:
    if (lVar2 == 0) {
      uVar1 = FUN_14036a63e();
      lVar2 = FUN_14477b664(uVar1);
      param_1[1] = lVar2;
      lVar3 = param_1[2];
      if (((lVar3 == 0) && (lVar3 = 0, lVar2 != 0)) && (*param_1 != 0)) {
        lVar3 = FUN_14494cb38(lVar2,param_1);
        param_1[2] = lVar3;
      }
    }
    return lVar3 + 0x18;
  }
  if ((lVar2 != 0) && (*param_1 != 0)) {
    lVar3 = FUN_14494cb38(lVar2,param_1);
    param_1[2] = lVar3;
    if (lVar3 != 0) {
      lVar2 = param_1[1];
      goto LAB_148e71b22;
    }
  }
  lVar2 = FUN_140e82300();
  return lVar2;
}



// FUNCTION 148e71b96 FUN_148e71b96 body=96 status=ok
// SIG undefined FUN_148e71b96(void)

undefined8 FUN_148e71b96(undefined8 param_1)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446dcdd4(local_40);
  FUN_1410d1eba(param_1,local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e71bf8 FUN_148e71bf8 body=116 status=ok
// SIG undefined FUN_148e71bf8(void)

undefined8 FUN_148e71bf8(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140212f8e(&local_40);
  local_38 = *param_2 - local_40;
  FUN_148e71c6e(param_1,&local_38,param_3,param_4);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e71c6e FUN_148e71c6e body=491 status=ok
// SIG undefined FUN_148e71c6e(void)

undefined8
FUN_148e71c6e(undefined8 param_1,longlong *param_2,undefined1 *param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  double dVar4;
  undefined1 auStack_b8 [32];
  longlong *local_98 [2];
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 *local_68;
  ulonglong *local_60;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  longlong local_40;
  longlong *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_3 = 0;
  *param_4 = 0;
  if ((double)*param_2 / 10000000.0 < 0.0) {
    *param_3 = 1;
    *param_4 = 1;
    local_48 = 0;
    FUN_148e71e5a(param_1);
LAB_148e71ddf:
    if ((local_28 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
  dVar4 = (double)*param_2 / 864000000000.0;
  if (1.0 <= dVar4) {
    lVar3 = (longlong)ROUND(-0.5 - (dVar4 + dVar4)) >> 1;
    if (lVar3 < -1) {
      FUN_1410d1eba(local_98,&DAT_14cbda598);
      FUN_14023409e(&local_88,local_98,1);
      local_68 = &local_48;
      local_48 = (ulonglong)local_48._4_4_ << 0x20;
      local_38 = (longlong *)0x0;
      local_30 = 0;
      local_60 = &local_28;
      local_40 = -lVar3;
      FUN_14010d304(&local_58);
      local_78 = local_88;
      local_70 = local_80;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_80 + 1) = (int)local_80[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(param_1,&local_78,&local_58);
      FUN_14007f2db(local_58,local_50);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      if (local_38 != (longlong *)0x0) {
        (**(code **)(*local_38 + 0x10))();
      }
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_80 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar2 = (int *)((longlong)local_80 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_80 + 0x10))(local_80);
          }
        }
      }
      if (local_98[0] != (longlong *)0x0) {
        (**(code **)(*local_98[0] + 0x10))();
      }
      goto LAB_148e71ddf;
    }
    if (lVar3 == -1) {
      FUN_1410d1eba(param_1,&DAT_14cbda5c0);
      goto LAB_148e71e0e;
    }
  }
  *param_3 = 1;
  FUN_148e71e5a(param_1);
LAB_148e71e0e:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_b8);
}



// FUNCTION 148e71e5a FUN_148e71e5a body=843 status=ok
// SIG undefined FUN_148e71e5a(void)

undefined8 FUN_148e71e5a(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  longlong lVar6;
  undefined1 auStack_178 [32];
  longlong *local_158 [2];
  undefined8 local_148;
  longlong *local_140;
  undefined8 local_138;
  longlong *plStack_130;
  longlong *local_128 [2];
  undefined8 local_118;
  longlong *plStack_110;
  longlong *local_108 [2];
  undefined1 local_f8 [8];
  undefined1 *local_f0;
  undefined8 local_e0;
  longlong *local_d8;
  longlong *local_d0;
  ulonglong *local_c8;
  longlong local_c0;
  undefined4 local_b8;
  longlong local_b0;
  longlong local_a8 [2];
  undefined4 local_98;
  undefined4 local_90;
  undefined1 local_80 [16];
  undefined4 local_70;
  undefined1 local_60 [16];
  ulonglong local_50 [3];
  
  local_50[0] = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_141366fce(local_f8);
  local_f0 = &DAT_200000002;
  local_118 = 0;
  plStack_110 = (longlong *)0x0;
  lVar6 = *param_2 / 10000000 - *param_2 / -0x6769800000000000;
  auVar4 = SEXT816(lVar6) * ZEXT816(0x8888888888888889);
  FUN_1413a454c(local_108,(int)lVar6 + ((int)(auVar4._8_8_ >> 5) - (auVar4._12_4_ >> 0x1f)) * -0x3c,
                local_f8);
  local_138 = 0;
  plStack_130 = (longlong *)0x0;
  auVar4 = SEXT816(*param_2 / 600000000) * ZEXT816(0x8888888888888889);
  FUN_1413a454c(local_128,
                (int)(*param_2 / 600000000) +
                ((int)(auVar4._8_8_ >> 5) - (auVar4._12_4_ >> 0x1f)) * -0x3c,local_f8);
  lVar6 = *param_2;
  uVar5 = (uint)((ulonglong)((lVar6 / 36000000000) * 0x2aaaaaab) >> 0x20);
  FUN_1410d1eba(local_158,&DAT_14cbda610);
  FUN_14023409e(&local_148,local_158,1);
  local_b0._0_4_ = 0;
  local_a8[1] = 0;
  local_98 = 0;
  local_90 = 4;
  local_a8[0] = (longlong)
                (int)((int)(lVar6 / 36000000000) + ((uVar5 >> 2) - ((int)uVar5 >> 0x1f)) * -0x18);
  FUN_14023423e(local_80,local_128);
  local_70 = 4;
  FUN_14023423e(local_60,local_108);
  local_d0 = &local_b0;
  local_c8 = local_50;
  FUN_14010d304(&local_c0);
  local_e0 = local_148;
  local_d8 = local_140;
  if (local_140 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_140 + 1) = (int)local_140[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(param_1,&local_e0,&local_c0);
  FUN_14007f2db(local_c0,local_b8);
  if (local_c0 != 0) {
    FUN_1400020a8();
  }
  lVar6 = 0x50;
  do {
    if (*(longlong **)((longlong)&local_b0 + lVar6) != (longlong *)0x0) {
      (**(code **)(**(longlong **)((longlong)&local_b0 + lVar6) + 0x10))();
      *(undefined8 *)((longlong)&local_b0 + lVar6) = 0;
      *(undefined4 *)((longlong)local_a8 + lVar6) = 0;
    }
    lVar6 = lVar6 + -0x20;
  } while (lVar6 != -0x10);
  if (local_140 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_140 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_140)(local_140);
      LOCK();
      piVar2 = (int *)((longlong)local_140 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_140 + 0x10))(local_140);
      }
    }
  }
  if (local_128[0] != (longlong *)0x0) {
    (**(code **)(*local_128[0] + 0x10))();
  }
  if (local_108[0] != (longlong *)0x0) {
    (**(code **)(*local_108[0] + 0x10))();
  }
  if (local_158[0] != (longlong *)0x0) {
    (**(code **)(*local_158[0] + 0x10))();
  }
  plVar1 = plStack_130;
  if (plStack_130 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_130 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_130)(plStack_130);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  plVar1 = plStack_110;
  if (plStack_110 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_110 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_110)(plStack_110);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_50[0] ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e721a6 FUN_148e721a6 body=611 status=ok
// SIG undefined FUN_148e721a6(void)

undefined8 FUN_148e721a6(undefined8 param_1,longlong *param_2)

{
  void *pvVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  void *local_88;
  int local_80;
  undefined4 local_7c;
  undefined1 *local_78;
  ulonglong *local_70;
  longlong local_68;
  undefined4 local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  undefined1 local_48 [16];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = param_2[1];
  if (lVar4 == 0) {
    uVar3 = FUN_145d10a46();
    lVar4 = FUN_14477b664(uVar3);
    param_2[1] = lVar4;
  }
  lVar6 = param_2[2];
  if (lVar6 == 0) {
    if ((lVar4 != 0) && (*param_2 != 0)) {
      lVar6 = FUN_14494cb38(lVar4,param_2);
      param_2[2] = lVar6;
      if (lVar6 != 0) {
        lVar4 = param_2[1];
        goto LAB_148e721ed;
      }
    }
LAB_148e7226b:
    FUN_140056680(&local_58,&DAT_149dfb77a);
  }
  else {
LAB_148e721ed:
    if (lVar4 == 0) {
      uVar3 = FUN_145d10a46(lVar6);
      lVar4 = FUN_14477b664(uVar3);
      param_2[1] = lVar4;
      lVar6 = param_2[2];
      if (((lVar6 == 0) && (lVar6 = 0, lVar4 != 0)) && (*param_2 != 0)) {
        lVar6 = FUN_14494cb38(lVar4,param_2);
        param_2[2] = lVar6;
      }
    }
    lVar4 = FUN_1442afd46(lVar6);
    if (lVar4 == 0) goto LAB_148e7226b;
    local_58 = (void *)0x0;
    local_50 = *(int *)(lVar4 + 0x38);
    lVar6 = (longlong)local_50;
    pvVar1 = *(void **)(lVar4 + 0x30);
    if (lVar6 == 0) {
      local_4c = 0;
    }
    else {
      FUN_1446dd670(&local_58,local_50,0);
      memcpy(local_58,pvVar1,lVar6 * 2);
    }
  }
  if (local_50 < 2) {
    uVar3 = FUN_1447a1f4a(&DAT_14cbda648);
    FUN_144a787a6(&local_58,uVar3);
    local_88 = (void *)0x0;
    local_80 = local_50;
    if (local_50 == 0) {
      local_7c = 0;
      goto LAB_148e722f7;
    }
  }
  iVar2 = local_50;
  pvVar1 = local_58;
  local_88 = (void *)0x0;
  local_80 = local_50;
  FUN_1446dd670(&local_88,local_50,0);
  memcpy(local_88,pvVar1,(longlong)iVar2 * 2);
LAB_148e722f7:
  FUN_14146ec20(local_48,&local_88);
  local_70 = &local_28;
  local_78 = local_48;
  FUN_1407adb6e(&local_68);
  puVar5 = DAT_14cbda638;
  if (DAT_14cbda640 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  FUN_140230a2e(param_1,puVar5,&local_68);
  FUN_1407adb3e(local_68,local_60);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148e7240a FUN_148e7240a body=288 status=ok
// SIG undefined FUN_148e7240a(void)

undefined8 FUN_148e7240a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = param_2;
  FUN_1446dcdd4(local_58,&local_68);
  uVar1 = FUN_14187388a(local_58);
  local_70 = 0;
  uVar2 = FUN_145d10a46();
  lVar3 = FUN_14477b664(uVar2);
  uVar2 = FUN_145d10a46();
  uVar4 = FUN_145d10a46();
  FUN_1402d1bfa(&local_60,uVar4,uVar1);
  if (local_60 != 0) {
    local_70 = 0;
  }
  local_80 = local_60;
  uVar4 = FUN_145d10a46();
  lVar5 = FUN_141459e9e(uVar2,uVar4);
  if (lVar3 != lVar5) {
    local_70 = 0;
  }
  uVar2 = FUN_14477b664(lVar5);
  local_78 = FUN_14477b664(uVar2);
  if (local_78 != 0 && local_60 != 0) {
    local_70 = uVar1;
  }
  FUN_148e721a6(param_1,&local_80);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e7252c FUN_148e7252c body=343 status=ok
// SIG undefined FUN_148e7252c(void)

undefined8 * FUN_148e7252c(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar7 = param_2[1];
  if (lVar7 == 0) {
    uVar6 = FUN_145d10a46();
    lVar7 = FUN_14477b664(uVar6);
    param_2[1] = lVar7;
  }
  lVar8 = param_2[2];
  if (lVar8 == 0) {
    if ((lVar7 == 0) || (*param_2 == 0)) goto LAB_148e72611;
    lVar8 = FUN_14494cb38(lVar7,param_2);
    param_2[2] = lVar8;
    if (lVar8 == 0) goto LAB_148e72611;
    lVar7 = param_2[1];
  }
  if (lVar7 == 0) {
    uVar6 = FUN_145d10a46();
    lVar7 = FUN_14477b664(uVar6);
    param_2[1] = lVar7;
    lVar8 = param_2[2];
    if (((lVar8 == 0) && (lVar8 = 0, lVar7 != 0)) && (*param_2 != 0)) {
      lVar8 = FUN_14494cb38(lVar7,param_2);
      param_2[2] = lVar8;
    }
  }
  lVar7 = FUN_144a792bc(lVar8 + 0x18);
  uVar6 = FUN_1465ccf28();
  cVar5 = FUN_1448093f4(lVar7,uVar6);
  if ((lVar7 != 0) && (cVar5 != '\0')) {
    *param_1 = *(undefined8 *)(lVar7 + 8);
    uVar2 = *(undefined4 *)(lVar7 + 0x14);
    uVar3 = *(undefined4 *)(lVar7 + 0x18);
    uVar4 = *(undefined4 *)(lVar7 + 0x1c);
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(lVar7 + 0x10);
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
    *(undefined4 *)(param_1 + 2) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
    param_1[3] = 0;
    iVar1 = *(int *)(lVar7 + 0x28);
    _Src = *(void **)(lVar7 + 0x20);
    *(int *)(param_1 + 4) = iVar1;
    if ((longlong)iVar1 != 0) {
      FUN_1446dd670(param_1 + 3,iVar1,0);
      memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
      return param_1;
    }
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
    return param_1;
  }
LAB_148e72611:
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  return param_1;
}



// FUNCTION 148e72684 FUN_148e72684 body=288 status=ok
// SIG undefined FUN_148e72684(void)

undefined8 FUN_148e72684(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = param_2;
  FUN_1446dcdd4(local_58,&local_68);
  uVar1 = FUN_14187388a(local_58);
  local_70 = 0;
  uVar2 = FUN_145d10a46();
  lVar3 = FUN_14477b664(uVar2);
  uVar2 = FUN_145d10a46();
  uVar4 = FUN_145d10a46();
  FUN_1402d1bfa(&local_60,uVar4,uVar1);
  if (local_60 != 0) {
    local_70 = 0;
  }
  local_80 = local_60;
  uVar4 = FUN_145d10a46();
  lVar5 = FUN_141459e9e(uVar2,uVar4);
  if (lVar3 != lVar5) {
    local_70 = 0;
  }
  uVar2 = FUN_14477b664(lVar5);
  local_78 = FUN_14477b664(uVar2);
  if (local_78 != 0 && local_60 != 0) {
    local_70 = uVar1;
  }
  FUN_148e7252c(param_1,&local_80);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e727a6 FUN_148e727a6 body=596 status=ok
// SIG undefined FUN_148e727a6(void)

undefined8 FUN_148e727a6(undefined8 param_1,longlong *param_2)

{
  void *pvVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined1 auStack_a8 [32];
  void *local_88;
  int local_80;
  undefined4 local_7c;
  undefined1 *local_78;
  ulonglong *local_70;
  longlong local_68;
  undefined4 local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  undefined1 local_48 [16];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = param_2[1];
  if (lVar4 == 0) {
    uVar3 = FUN_140dddfde();
    lVar4 = FUN_14477b664(uVar3);
    param_2[1] = lVar4;
  }
  lVar5 = param_2[2];
  if (lVar5 == 0) {
    if ((lVar4 != 0) && (*param_2 != 0)) {
      lVar5 = FUN_14494cb38(lVar4,param_2);
      param_2[2] = lVar5;
      if (lVar5 != 0) {
        lVar4 = param_2[1];
        goto LAB_148e72960;
      }
    }
LAB_148e72814:
    FUN_140056680(&local_58,&DAT_149dfb77a);
  }
  else {
LAB_148e72960:
    if (lVar4 == 0) {
      uVar3 = FUN_140dddfde();
      lVar4 = FUN_14477b664(uVar3);
      param_2[1] = lVar4;
      lVar5 = param_2[2];
      if (((lVar5 == 0) && (lVar5 = 0, lVar4 != 0)) && (*param_2 != 0)) {
        lVar5 = FUN_14494cb38(lVar4,param_2);
        param_2[2] = lVar5;
      }
    }
    lVar4 = FUN_1466496d4(lVar5);
    if (lVar4 == 0) goto LAB_148e72814;
    local_58 = (void *)0x0;
    local_50 = *(int *)(lVar4 + 0x48);
    lVar5 = (longlong)local_50;
    pvVar1 = *(void **)(lVar4 + 0x40);
    if (lVar5 == 0) {
      local_4c = 0;
    }
    else {
      FUN_1446dd670(&local_58,local_50,0);
      memcpy(local_58,pvVar1,lVar5 * 2);
    }
  }
  if (local_50 < 2) {
    uVar3 = FUN_1447a1f4a(&DAT_14cbda648);
    FUN_144a787a6(&local_58,uVar3);
    local_88 = (void *)0x0;
    local_80 = local_50;
    if (local_50 == 0) {
      local_7c = 0;
      goto LAB_148e728a0;
    }
  }
  iVar2 = local_50;
  pvVar1 = local_58;
  local_88 = (void *)0x0;
  local_80 = local_50;
  FUN_1446dd670(&local_88,local_50,0);
  memcpy(local_88,pvVar1,(longlong)iVar2 * 2);
LAB_148e728a0:
  FUN_14146ec20(local_48,&local_88);
  local_70 = &local_28;
  local_78 = local_48;
  FUN_1407adb6e(&local_68);
  puVar6 = DAT_14cbda638;
  if (DAT_14cbda640 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  FUN_140230a2e(param_1,puVar6,&local_68);
  FUN_1407adb3e(local_68,local_60);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148e729fc FUN_148e729fc body=288 status=ok
// SIG undefined FUN_148e729fc(void)

undefined8 FUN_148e729fc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = param_2;
  FUN_1446dcdd4(local_58,&local_68);
  uVar1 = FUN_1488155c8(local_58);
  local_70 = 0;
  uVar2 = FUN_140dddfde();
  lVar3 = FUN_14477b664(uVar2);
  uVar2 = FUN_140dddfde();
  uVar4 = FUN_140dddfde();
  FUN_1402d1bfa(&local_60,uVar4,uVar1);
  if (local_60 != 0) {
    local_70 = 0;
  }
  local_80 = local_60;
  uVar4 = FUN_140dddfde();
  lVar5 = FUN_141459e9e(uVar2,uVar4);
  if (lVar3 != lVar5) {
    local_70 = 0;
  }
  uVar2 = FUN_14477b664(lVar5);
  local_78 = FUN_14477b664(uVar2);
  if (local_78 != 0 && local_60 != 0) {
    local_70 = uVar1;
  }
  FUN_148e727a6(param_1,&local_80);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e72b1e FUN_148e72b1e body=66 status=ok
// SIG undefined FUN_148e72b1e(void)

undefined8 * FUN_148e72b1e(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x298);
  memset(_Dst,0,0x298);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9be7e0;
  return _Dst;
}



// FUNCTION 148e72b60 FUN_148e72b60 body=322 status=ok
// SIG undefined FUN_148e72b60(void)

void FUN_148e72b60(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 *puVar4;
  ushort *puVar5;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(param_1 + 0x288);
  if ((lVar3 != 0) && (*(int *)(param_1 + 0x208) != 0)) {
    FUN_1448d5e3c(&local_38,param_1 + 0x208);
    puVar4 = (undefined1 *)*local_38;
    AcquireSRWLockShared((PSRWLOCK)(puVar4 + 0x70));
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
    if (*(int *)(lVar3 + 0xac) != *(int *)(puVar4 + 0x68)) {
      *(int *)(lVar3 + 0xac) = *(int *)(puVar4 + 0x68);
      *(undefined4 *)(lVar3 + 0xb0) = *(undefined4 *)(puVar4 + 8);
      *(undefined4 *)(lVar3 + 0xb4) = *(undefined4 *)(puVar4 + 0x18);
      *(undefined4 *)(lVar3 + 0xbc) = *(undefined4 *)(puVar4 + 0x38);
      *(undefined1 *)(lVar3 + 0xb8) = *puVar4;
      *(undefined1 *)(lVar3 + 0xb9) = puVar4[0x28];
      *(undefined1 *)(lVar3 + 0xba) = puVar4[0x30];
      *(undefined1 *)(lVar3 + 0xc0) = puVar4[0x48];
      *(undefined1 *)(lVar3 + 0xc1) = puVar4[0x50];
      *(undefined4 *)(lVar3 + 0xc4) = *(undefined4 *)(puVar4 + 0x58);
      *(uint *)(lVar3 + 200) = (uint)(byte)puVar4[0x60];
      puVar5 = *(ushort **)(lVar3 + 0x80);
      if (puVar5 != (ushort *)0x0) {
        *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(lVar3 + 0x78) & 0x3f));
      }
    }
    ReleaseSRWLockShared((PSRWLOCK)(puVar4 + 0x70));
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e72ca4 FUN_148e72ca4 body=810 status=ok
// SIG undefined FUN_148e72ca4(void)

void FUN_148e72ca4(float *param_1,longlong *param_2,uint param_3)

{
  longlong *plVar1;
  byte bVar2;
  float fVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  float fVar12;
  undefined1 auStack_68 [40];
  longlong *local_40 [2];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_2[1] <= (int)param_3) {
    if ((*param_1 != 0.0) || (NAN(*param_1))) {
      fVar12 = (float)((int)param_1[1] + 1);
LAB_148e72d42:
      *param_1 = 0.0;
      param_1[1] = fVar12;
    }
    else if (param_1[1] == 0.0) {
      fVar12 = 1.4013e-45;
      goto LAB_148e72d42;
    }
    if ((param_1[2] != 0.0) || (NAN(param_1[2]))) {
      fVar12 = (float)((int)param_1[3] + 1);
LAB_148e72d60:
      param_1[2] = 0.0;
      param_1[3] = fVar12;
    }
    else if (param_1[3] == 0.0) {
      fVar12 = 1.4013e-45;
      goto LAB_148e72d60;
    }
    if (*(char *)(param_1 + 0xc) == '\0') {
      if (param_1[0xd] == 0.0) {
        fVar12 = 1.4013e-45;
        goto LAB_148e72d79;
      }
    }
    else {
      fVar12 = (float)((int)param_1[0xd] + 1);
LAB_148e72d79:
      *(undefined1 *)(param_1 + 0xc) = 0;
      param_1[0xd] = fVar12;
    }
    if (*(char *)(param_1 + 8) == '\0') {
      fVar12 = (float)((int)param_1[9] + 1);
LAB_148e72e44:
      *(undefined1 *)(param_1 + 8) = 1;
      param_1[9] = fVar12;
    }
    else if (param_1[9] == 0.0) {
      fVar12 = 1.4013e-45;
      goto LAB_148e72e44;
    }
    if (*(char *)(param_1 + 10) == '\0') {
      if (param_1[0xb] != 0.0) goto LAB_148e72e61;
      fVar12 = 1.4013e-45;
    }
    else {
      fVar12 = (float)((int)param_1[0xb] + 1);
    }
    *(undefined1 *)(param_1 + 10) = 0;
    param_1[0xb] = fVar12;
    goto LAB_148e72e61;
  }
  plVar1 = (longlong *)(*param_2 + (ulonglong)param_3 * 0x58);
  if (param_1[1] != *(float *)(*param_2 + 0x3c + (ulonglong)param_3 * 0x58)) {
    *param_1 = *(float *)(plVar1 + 7);
    param_1[1] = *(float *)((longlong)plVar1 + 0x3c);
  }
  if (param_1[3] != *(float *)((longlong)plVar1 + 0x2c)) {
    param_1[2] = *(float *)(plVar1 + 5);
    param_1[3] = *(float *)((longlong)plVar1 + 0x2c);
  }
  if ((bool)*(char *)(param_1 + 8) == *(float *)(plVar1 + 5) <= 1e-08) {
    if (param_1[9] == 0.0) {
      fVar12 = 1.4013e-45;
      goto LAB_148e72da1;
    }
  }
  else {
    fVar12 = (float)((int)param_1[9] + 1);
LAB_148e72da1:
    *(bool *)(param_1 + 8) = *(float *)(plVar1 + 5) <= 1e-08;
    param_1[9] = fVar12;
  }
  fVar12 = 0.0;
  if (0.0 < *(float *)(plVar1 + 7)) {
    fVar12 = (*(float *)(plVar1 + 5) / *(float *)(plVar1 + 7)) * 100.0;
  }
  if (100.0 <= fVar12) {
    fVar12 = 100.0;
  }
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  if ((fVar12 != param_1[4]) || (NAN(fVar12) || NAN(param_1[4]))) {
    fVar3 = (float)((int)param_1[5] + 1);
LAB_148e72de5:
    param_1[4] = fVar12;
    param_1[5] = fVar3;
  }
  else if (param_1[5] == 0.0) {
    fVar3 = 1.4013e-45;
    goto LAB_148e72de5;
  }
  if (*(char *)(param_1 + 0xc) == '\0') {
    fVar12 = (float)((int)param_1[0xd] + 1);
LAB_148e72e94:
    *(undefined1 *)(param_1 + 0xc) = 1;
    param_1[0xd] = fVar12;
  }
  else if (param_1[0xd] == 0.0) {
    fVar12 = 1.4013e-45;
    goto LAB_148e72e94;
  }
  bVar2 = *(byte *)(*plVar1 + 0x18);
  plVar4 = (longlong *)FUN_14077538e();
  uVar10 = 0xffffffff;
  if (0 < (longlong)(int)plVar4[9]) {
    puVar9 = (ulonglong *)(plVar4[8] + 8);
    uVar11 = 0;
    do {
      if (*puVar9 == (ulonglong)bVar2) {
        uVar10 = uVar11 & 0xffffffff;
        break;
      }
      uVar11 = uVar11 + 1;
      puVar9 = puVar9 + 2;
    } while ((longlong)(int)plVar4[9] != uVar11);
  }
  (**(code **)(*plVar4 + 0x2b0))(plVar4,local_40,uVar10);
  uVar5 = FUN_1447a1f4a(local_40);
  FUN_144a2b0a4(uVar5,local_30);
  if (local_40[0] != (longlong *)0x0) {
    (**(code **)(*local_40[0] + 0x10))();
  }
  FUN_1407753c8(local_30);
  FUN_140775496(param_1 + 0xe,local_30);
  param_1[0x16] = 0.0;
  if ((int)param_1[0x17] < 0) {
    FUN_14482f6fa(param_1 + 0x14,0);
  }
  param_1[0x18] = (float)((int)param_1[0x18] + 1);
  if ((int)plVar1[3] != 0) {
    FUN_144a84024(param_1 + 0x14,(int)plVar1[3],1);
    param_1[0x18] = (float)((int)param_1[0x18] + 1);
    iVar8 = (int)plVar1[3];
    if (0 < iVar8) {
      lVar6 = 1;
      lVar7 = 0;
      do {
        if (lVar7 < (int)param_1[0x16]) {
          fVar12 = *(float *)(plVar1[2] + lVar6 * 4);
          param_1[0x18] = (float)((int)param_1[0x18] + 1);
          *(float *)(*(longlong *)(param_1 + 0x14) + lVar7 * 4) = fVar12 * 100.0;
          iVar8 = (int)plVar1[3];
        }
        lVar7 = lVar7 + 1;
        lVar6 = lVar6 + 3;
      } while (lVar7 < iVar8);
    }
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
LAB_148e72e61:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e72fd0 FUN_148e72fd0 body=280 status=ok
// SIG undefined FUN_148e72fd0(void)

void FUN_148e72fd0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ushort *puVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(param_1 + 0x208) != 0) && (lVar3 = *(longlong *)(param_1 + 0x288), lVar3 != 0)) {
    FUN_1448d5e3c(&local_38,param_1 + 0x208);
    puVar4 = *(undefined8 **)(local_38 + 0x250);
    AcquireSRWLockExclusive((PSRWLOCK)(puVar4 + 4));
    *(int *)(puVar4 + 3) = *(int *)(puVar4 + 3) + 1;
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
    if (*(int *)(puVar4 + 1) < 1) {
      if (1 < *(int *)(lVar3 + 0xd0)) {
        FUN_140bad112(lVar3 + 200,&DAT_149dfb77a);
      }
    }
    else if (1 < *(int *)(lVar3 + 0xd0)) {
      *(int *)(puVar4 + 2) = *(int *)(puVar4 + 2) + 1;
      FUN_140775496(lVar3 + 200,*puVar4);
      FUN_148e730ea(puVar4);
    }
    puVar5 = *(ushort **)(lVar3 + 0x80);
    if (puVar5 != (ushort *)0x0) {
      *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(lVar3 + 0x78) & 0x3f));
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(puVar4 + 4));
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e730ea FUN_148e730ea body=88 status=ok
// SIG undefined FUN_148e730ea(void)

void FUN_148e730ea(undefined8 *param_1)

{
  void *_Dst;
  int iVar1;
  
  if (0 < *(int *)(param_1 + 1)) {
    _Dst = (void *)*param_1;
    FUN_1447a1747(_Dst,1);
    iVar1 = 0;
    if (*(int *)(param_1 + 1) != 1) {
      memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(*(int *)(param_1 + 1) + -1) << 4);
      iVar1 = *(int *)(param_1 + 1) + -1;
    }
    *(int *)(param_1 + 1) = iVar1;
    FUN_140b12644(param_1);
    *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + 1;
  }
  return;
}



// FUNCTION 148e73156 FUN_148e73156 body=144 status=ok
// SIG undefined FUN_148e73156(void)

void FUN_148e73156(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148e78148(param_1);
  }
  lVar2 = *param_1;
  lVar3 = (longlong)iVar1 * 0x20;
  *(undefined8 *)(lVar2 + lVar3) = 0;
  *(undefined8 *)(lVar2 + lVar3) = *param_2;
  *param_2 = 0;
  *(undefined4 *)(lVar2 + 8 + lVar3) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(lVar2 + 0xc + lVar3) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = param_2[2];
  param_2[2] = 0;
  *(undefined4 *)(lVar2 + 0x18 + lVar3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)(lVar2 + 0x1c + lVar3) = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_2[3] = 0;
  if (iVar1 != -1) {
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  }
  return;
}



// FUNCTION 148e731e6 FUN_148e731e6 body=610 status=ok
// SIG undefined FUN_148e731e6(void)

void FUN_148e731e6(longlong param_1)

{
  int *piVar1;
  PSRWLOCK SRWLock;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(longlong *)(param_1 + 0x288) == 0) ||
     (*(char *)(*(longlong *)(param_1 + 0x288) + 0xe0) != '\x01')) goto LAB_148e73414;
  plVar5 = (longlong *)FUN_1407559f6();
  lVar6 = *plVar5;
  SRWLock = (PSRWLOCK)(lVar6 + 0x638);
  AcquireSRWLockShared(SRWLock);
  cVar3 = *(char *)(lVar6 + 0x430);
  ReleaseSRWLockShared(SRWLock);
  if (cVar3 != '\x01') goto LAB_148e73414;
  lVar6 = FUN_14479d2ce(param_1 + 0x30);
  cVar3 = FUN_140426394(lVar6 + 0x3c0,&DAT_14cbd93b0);
  if (cVar3 != '\0') {
    puVar7 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *puVar7 = &PTR_FUN_14b9c1410;
    FUN_1446ddc76(&local_40,"RemoveState",1);
    FUN_14039176c(puVar7,uVar2,local_40,1);
    *puVar7 = &PTR_FUN_14b9c1410;
    puVar7[7] = DAT_14cbd93b0;
    FUN_140391314(param_1,puVar7);
    puVar7 = (undefined8 *)FUN_14001cc68(0x38,0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *puVar7 = &PTR_FUN_14b9c13a0;
    FUN_1446ddc76(&local_40,"ClearStructureredInteractable",1);
    FUN_14039176c(puVar7,uVar2,local_40,1);
    *puVar7 = &PTR_FUN_14b9c13a0;
    FUN_140391314(param_1,puVar7);
    FUN_1448d5e3c(&local_40,param_1 + 0x208);
    lVar6 = *(longlong *)(local_40 + 0x600);
    AcquireSRWLockExclusive((PSRWLOCK)(lVar6 + 0xa0));
    *(int *)(lVar6 + 0x98) = *(int *)(lVar6 + 0x98) + 1;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_38 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
    if (*(char *)(lVar6 + 0x20) == '\0') {
      if (*(int *)(lVar6 + 0x24) == 0) {
        iVar4 = 1;
        goto LAB_148e7339d;
      }
    }
    else {
      iVar4 = *(int *)(lVar6 + 0x24) + 1;
LAB_148e7339d:
      *(undefined1 *)(lVar6 + 0x20) = 0;
      *(int *)(lVar6 + 0x24) = iVar4;
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar6 + 0xa0));
  }
  puVar7 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  *puVar7 = &PTR_FUN_14b9c13e0;
  FUN_1446ddc76(&local_40,"AddState",1);
  FUN_14039176c(puVar7,*(undefined8 *)(param_1 + 0x30),local_40,1);
  *puVar7 = &PTR_FUN_14b9c13e0;
  puVar7[7] = DAT_14cbd9610;
  *(undefined1 *)(puVar7 + 8) = 0;
  FUN_140391314(param_1,puVar7);
LAB_148e73414:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e7345c FUN_148e7345c body=110 status=ok
// SIG undefined FUN_148e7345c(void)

void FUN_148e7345c(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1457b8d2e(param_1,iVar1);
    }
    FUN_148e78848((longlong)iVar1 * 0x70 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_148e7886e(param_1,param_2,iVar1 - param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 148e734cc FUN_148e734cc body=4479 status=ok
// SIG undefined FUN_148e734cc(void)

void FUN_148e734cc(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ushort uVar8;
  ushort uVar9;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_1 == 0) || (*(int *)(param_1 + 0x270) < 2)) goto LAB_148e73501;
  if (*(int *)(param_1 + 0x150) < 2) {
    FUN_1449a0272(param_1 + 0x148,&DAT_14cbdb6d0);
  }
  local_78 = (longlong *)(param_1 + 0x268);
  iVar4 = *(int *)(param_1 + 0x228);
  *(int *)(param_1 + 0x228) = iVar4 + 1;
  if (*(int *)(param_1 + 0x1c0) < 2) {
    iVar3 = *(int *)(param_1 + 0x270);
    if (iVar3 == DAT_14cbdb778) {
      if (1 < iVar3) {
        lVar6 = 0;
        while( true ) {
          uVar8 = *(ushort *)(*local_78 + lVar6);
          uVar7 = (ulonglong)uVar8;
          uVar9 = *(ushort *)(DAT_14cbdb770 + lVar6);
          if (uVar8 != uVar9) break;
          if (uVar8 == 0) goto LAB_148e73f20;
LAB_148e735c3:
          lVar6 = lVar6 + 2;
        }
        if ((uVar9 | uVar8) < 0x80) {
          uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
          uVar5 = (ulonglong)uVar9;
          uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
          if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar5]) goto LAB_148e735c3;
        }
        if (uVar8 != uVar9) goto LAB_148e74236;
      }
LAB_148e73f20:
      FUN_1400b22c2(&local_70);
      *(int *)(param_1 + 0x228) = *(int *)(param_1 + 0x228) + 1;
      if ((longlong *)(param_1 + 0x1c8) == &local_70) {
        if (local_70 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x1c8) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_1 + 0x1c8) = local_70;
        local_70 = 0;
        *(undefined4 *)(param_1 + 0x1d0) = (undefined4)local_68;
        *(undefined4 *)(param_1 + 0x1d4) = local_68._4_4_;
      }
    }
    else {
      if (DAT_14cbdb778 + iVar3 == 1) goto LAB_148e73f20;
LAB_148e74236:
      if (iVar3 == DAT_14cbdb7a8) {
        if (1 < iVar3) {
          lVar6 = 0;
          while( true ) {
            uVar8 = *(ushort *)(*local_78 + lVar6);
            uVar7 = (ulonglong)uVar8;
            uVar9 = *(ushort *)(DAT_14cbdb7a0 + lVar6);
            if (uVar8 != uVar9) break;
            if (uVar8 == 0) goto LAB_148e73f20;
LAB_148e7427f:
            lVar6 = lVar6 + 2;
          }
          if ((uVar9 | uVar8) < 0x80) {
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
            uVar5 = (ulonglong)uVar9;
            uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
            if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar5]) goto LAB_148e7427f;
          }
          if (uVar8 != uVar9) goto code_r0x000148e7436b;
        }
        goto LAB_148e73f20;
      }
      if (DAT_14cbdb7a8 + iVar3 == 1) goto LAB_148e73f20;
code_r0x000148e7436b:
      *(int *)(param_1 + 0x228) = iVar4 + 2;
      FUN_144a787a6(param_1 + 0x1c8);
    }
    *(int *)(param_1 + 0x228) = *(int *)(param_1 + 0x228) + 1;
    if (*(int *)(param_1 + 0x1c0) < 2) {
      iVar4 = *(int *)(param_1 + 0x270);
      if (iVar4 == DAT_14cbdb778) {
        if (1 < iVar4) {
          lVar6 = 0;
          while( true ) {
            uVar8 = *(ushort *)(*local_78 + lVar6);
            uVar7 = (ulonglong)uVar8;
            uVar9 = *(ushort *)(DAT_14cbdb770 + lVar6);
            if (uVar8 != uVar9) break;
            if (uVar8 == 0) goto LAB_148e742c5;
LAB_148e73fef:
            lVar6 = lVar6 + 2;
          }
          if ((uVar9 | uVar8) < 0x80) {
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
            uVar5 = (ulonglong)uVar9;
            uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
            if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar5]) goto LAB_148e73fef;
          }
          if (uVar8 != uVar9) goto LAB_148e7401e;
        }
      }
      else if (DAT_14cbdb778 + iVar4 != 1) {
LAB_148e7401e:
        if (iVar4 == DAT_14cbdb798) {
          if (1 < iVar4) {
            lVar6 = 0;
            while( true ) {
              uVar8 = *(ushort *)(*local_78 + lVar6);
              uVar7 = (ulonglong)uVar8;
              uVar9 = *(ushort *)(DAT_14cbdb790 + lVar6);
              if (uVar8 != uVar9) break;
              if (uVar8 == 0) goto LAB_148e742c5;
LAB_148e74067:
              lVar6 = lVar6 + 2;
            }
            if ((uVar9 | uVar8) < 0x80) {
              uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
              uVar5 = (ulonglong)uVar9;
              uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
              if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar5]) goto LAB_148e74067;
            }
            if (uVar8 != uVar9) goto LAB_148e74096;
          }
        }
        else if (DAT_14cbdb798 + iVar4 != 1) {
LAB_148e74096:
          if (iVar4 == DAT_14cbdb7a8) {
            if (1 < iVar4) {
              lVar6 = 0;
              while( true ) {
                uVar8 = *(ushort *)(*local_78 + lVar6);
                uVar7 = (ulonglong)uVar8;
                uVar9 = *(ushort *)(DAT_14cbdb7a0 + lVar6);
                if (uVar8 != uVar9) break;
                if (uVar8 == 0) goto LAB_148e742c5;
LAB_148e740df:
                lVar6 = lVar6 + 2;
              }
              if ((uVar9 | uVar8) < 0x80) {
                uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
                uVar5 = (ulonglong)uVar9;
                uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
                if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar5]) goto LAB_148e740df;
              }
              if (uVar8 != uVar9) goto LAB_148e7410e;
            }
          }
          else if (DAT_14cbdb7a8 + iVar4 != 1) {
LAB_148e7410e:
            if ((iVar4 == DAT_14cbdb7e8) && (1 < iVar4)) {
              lVar6 = 0;
              do {
                uVar8 = *(ushort *)(*local_78 + lVar6);
                uVar9 = *(ushort *)(DAT_14cbdb7e0 + lVar6);
                if (uVar8 == uVar9) {
                  if (uVar8 == 0) break;
                }
                else if ((0x7f < (uVar9 | uVar8)) ||
                        ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[uVar9])) break;
                lVar6 = lVar6 + 2;
              } while( true );
            }
          }
        }
      }
LAB_148e742c5:
      FUN_1400b22c2(&local_70);
      *(int *)(param_1 + 0x228) = *(int *)(param_1 + 0x228) + 1;
      if ((longlong *)(param_1 + 0x1b8) == &local_70) {
        if (local_70 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x1b8) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_1 + 0x1b8) = local_70;
        local_70 = 0;
        *(undefined4 *)(param_1 + 0x1c0) = (undefined4)local_68;
        *(undefined4 *)(param_1 + 0x1c4) = local_68._4_4_;
      }
    }
  }
  else {
    *(int *)(param_1 + 0x228) = iVar4 + 2;
  }
  if (*(int *)(param_1 + 0x408) < 2) {
    iVar4 = *(int *)(param_1 + 0x270);
    if (iVar4 == DAT_14cbdb798) {
      if (1 < iVar4) {
        lVar6 = 0;
        while( true ) {
          uVar8 = *(ushort *)(*local_78 + lVar6);
          uVar7 = (ulonglong)uVar8;
          uVar9 = *(ushort *)(DAT_14cbdb790 + lVar6);
          if (uVar8 != uVar9) break;
          if (uVar8 == 0) goto LAB_148e744a6;
LAB_148e743db:
          lVar6 = lVar6 + 2;
        }
        if ((uVar9 | uVar8) < 0x80) {
          uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
          uVar5 = (ulonglong)uVar9;
          uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
          if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar5]) goto LAB_148e743db;
        }
        if (uVar8 != uVar9) goto LAB_148e7440a;
      }
    }
    else if (DAT_14cbdb798 + iVar4 != 1) {
LAB_148e7440a:
      FUN_148e74762(param_1 + 0x400);
      goto LAB_148e7360b;
    }
LAB_148e744a6:
    FUN_1461d104c();
  }
LAB_148e7360b:
  if (*(int *)(param_1 + 0x3e0) < 2) {
    FUN_1400b22c2(&local_70);
    if ((longlong *)(param_1 + 0x3d8) == &local_70) {
      if (local_70 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x3d8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x3d8) = local_70;
      local_70 = 0;
      *(undefined4 *)(param_1 + 0x3e0) = (undefined4)local_68;
      *(undefined4 *)(param_1 + 0x3e4) = local_68._4_4_;
    }
    *(undefined1 *)(param_1 + 0x3f8) = 1;
  }
  if (*(int *)(param_1 + 0x3f0) < 2) {
    FUN_1400b22c2(&local_70);
    if ((longlong *)(param_1 + 1000) == &local_70) {
      if (local_70 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 1000) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 1000) = local_70;
      local_70 = 0;
      *(undefined4 *)(param_1 + 0x3f0) = (undefined4)local_68;
      *(undefined4 *)(param_1 + 0x3f4) = local_68._4_4_;
    }
    *(undefined1 *)(param_1 + 0x3f9) = 1;
  }
  if (*(char *)(param_1 + 0x588) == '\0') {
    FUN_148e747c8(param_1 + 0x570);
    iVar4 = *(int *)(param_1 + 0x58c);
    if (*(char *)(param_1 + 0x588) != '\0') {
      if (iVar4 != 0) goto LAB_148e736f4;
      iVar4 = 0;
    }
    *(undefined1 *)(param_1 + 0x588) = 1;
    *(int *)(param_1 + 0x58c) = iVar4 + 1;
  }
LAB_148e736f4:
  if (*(int *)(param_1 + 0x340) < 5) {
    iVar4 = *(int *)(param_1 + 0x340) + -5;
    do {
      *(int *)(param_1 + 0x348) = *(int *)(param_1 + 0x348) + 1;
      iVar3 = *(int *)(param_1 + 0x340);
      *(uint *)(param_1 + 0x340) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0x344) < iVar3 + 1U) {
        FUN_1457b8d2e((longlong *)(param_1 + 0x338),iVar3);
      }
      lVar6 = *(longlong *)(param_1 + 0x338);
      plVar1 = (longlong *)(lVar6 + (longlong)iVar3 * 0x70);
      puVar2 = (undefined8 *)(lVar6 + (longlong)iVar3 * 0x70);
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      puVar2[10] = 0;
      puVar2[0xb] = 0;
      puVar2[8] = 0;
      puVar2[9] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      FUN_1400b22c2(&local_70,&DAT_14b9be05f);
      if (puVar2 + 2 != &local_70) {
        if (plVar1[2] != 0) {
          FUN_1400020a8();
        }
        plVar1[2] = local_70;
        local_70 = 0;
        *(undefined4 *)(plVar1 + 3) = (undefined4)local_68;
        *(undefined4 *)((longlong)plVar1 + 0x1c) = local_68._4_4_;
        local_68 = 0;
      }
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      FUN_1400b22c2(&local_70);
      if (plVar1 != &local_70) {
        if (*plVar1 != 0) {
          FUN_1400020a8();
        }
        *plVar1 = local_70;
        local_70 = 0;
        *(undefined4 *)(plVar1 + 1) = (undefined4)local_68;
        *(undefined4 *)((longlong)plVar1 + 0xc) = local_68._4_4_;
        local_68 = 0;
      }
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0);
  }
  iVar4 = *(int *)(param_1 + 0x354);
  if (*(char *)(param_1 + 0x350) == '\0') {
LAB_148e7384a:
    *(undefined1 *)(param_1 + 0x350) = 1;
    *(int *)(param_1 + 0x354) = iVar4 + 1;
  }
  else if (iVar4 == 0) {
    iVar4 = 0;
    goto LAB_148e7384a;
  }
  if (*(int *)(param_1 + 0x360) < 5) {
    iVar4 = *(int *)(param_1 + 0x360) + -5;
    do {
      *(int *)(param_1 + 0x368) = *(int *)(param_1 + 0x368) + 1;
      iVar3 = *(int *)(param_1 + 0x360);
      *(uint *)(param_1 + 0x360) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0x364) < iVar3 + 1U) {
        FUN_1457b8d2e((longlong *)(param_1 + 0x358),iVar3);
      }
      lVar6 = *(longlong *)(param_1 + 0x358);
      plVar1 = (longlong *)(lVar6 + (longlong)iVar3 * 0x70);
      puVar2 = (undefined8 *)(lVar6 + (longlong)iVar3 * 0x70);
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      puVar2[10] = 0;
      puVar2[0xb] = 0;
      puVar2[8] = 0;
      puVar2[9] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      FUN_1400b22c2(&local_70,&DAT_14b9be05f);
      if (puVar2 + 2 != &local_70) {
        if (plVar1[2] != 0) {
          FUN_1400020a8();
        }
        plVar1[2] = local_70;
        local_70 = 0;
        *(undefined4 *)(plVar1 + 3) = (undefined4)local_68;
        *(undefined4 *)((longlong)plVar1 + 0x1c) = local_68._4_4_;
        local_68 = 0;
      }
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      FUN_1400b22c2(&local_70);
      if (plVar1 != &local_70) {
        if (*plVar1 != 0) {
          FUN_1400020a8();
        }
        *plVar1 = local_70;
        local_70 = 0;
        *(undefined4 *)(plVar1 + 1) = (undefined4)local_68;
        *(undefined4 *)((longlong)plVar1 + 0xc) = local_68._4_4_;
        local_68 = 0;
      }
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0);
  }
  iVar4 = *(int *)(param_1 + 0x374);
  if (*(char *)(param_1 + 0x370) == '\0') {
LAB_148e739af:
    *(undefined1 *)(param_1 + 0x370) = 1;
    *(int *)(param_1 + 0x374) = iVar4 + 1;
  }
  else if (iVar4 == 0) {
    iVar4 = 0;
    goto LAB_148e739af;
  }
  iVar4 = *(int *)(param_1 + 0x270);
  if (iVar4 == DAT_14cbdb778) {
    if (1 < iVar4) {
      lVar6 = 0;
      while( true ) {
        uVar8 = *(ushort *)(*local_78 + lVar6);
        uVar7 = (ulonglong)uVar8;
        uVar9 = *(ushort *)(DAT_14cbdb770 + lVar6);
        if (uVar8 != uVar9) break;
        if (uVar8 == 0) goto LAB_148e73a35;
LAB_148e73a00:
        lVar6 = lVar6 + 2;
      }
      if ((uVar9 | uVar8) < 0x80) {
        uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
        uVar5 = (ulonglong)uVar9;
        uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
        if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar5]) goto LAB_148e73a00;
      }
      if (uVar8 != uVar9) goto LAB_148e73a42;
    }
LAB_148e73a35:
    if (*(int *)(param_1 + 0x380) == 0) {
      *(int *)(param_1 + 0x388) = *(int *)(param_1 + 0x388) + 1;
      plVar1 = (longlong *)(param_1 + 0x378);
      *(undefined4 *)(param_1 + 0x380) = 1;
      if (*(int *)(param_1 + 900) == 0) {
        FUN_1457b8d2e(plVar1,0);
      }
      puVar2 = (undefined8 *)*plVar1;
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      puVar2[10] = 0;
      puVar2[0xb] = 0;
      puVar2[8] = 0;
      puVar2[9] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      FUN_1400b22c2(&local_70,&DAT_14b9be06b);
      if (puVar2 + 2 == &local_70) {
        if (local_70 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (puVar2[2] != 0) {
          FUN_1400020a8();
        }
        puVar2[2] = local_70;
        local_70 = 0;
        *(undefined4 *)(puVar2 + 3) = (undefined4)local_68;
        *(undefined4 *)((longlong)puVar2 + 0x1c) = local_68._4_4_;
      }
      *(int *)(param_1 + 0x388) = *(int *)(param_1 + 0x388) + 1;
      iVar4 = *(int *)(param_1 + 0x380);
      *(uint *)(param_1 + 0x380) = iVar4 + 1U;
      if (*(uint *)(param_1 + 900) < iVar4 + 1U) {
        FUN_1457b8d2e(plVar1,iVar4);
      }
      lVar6 = *plVar1;
      puVar2 = (undefined8 *)(lVar6 + (longlong)iVar4 * 0x70);
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      puVar2[10] = 0;
      puVar2[0xb] = 0;
      puVar2[8] = 0;
      puVar2[9] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      FUN_1400b22c2(&local_70,"99,999m");
      if (puVar2 + 2 != &local_70) {
        lVar6 = lVar6 + (longlong)iVar4 * 0x70;
        if (*(longlong *)(lVar6 + 0x10) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(lVar6 + 0x10) = local_70;
        local_70 = 0;
        *(undefined4 *)(lVar6 + 0x18) = (undefined4)local_68;
        *(undefined4 *)(lVar6 + 0x1c) = local_68._4_4_;
        local_68 = 0;
      }
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      *(int *)(param_1 + 0x388) = *(int *)(param_1 + 0x388) + 1;
      iVar4 = *(int *)(param_1 + 0x380);
      *(uint *)(param_1 + 0x380) = iVar4 + 1U;
      if (*(uint *)(param_1 + 900) < iVar4 + 1U) {
        FUN_1457b8d2e(plVar1,iVar4);
      }
      lVar6 = *plVar1;
      puVar2 = (undefined8 *)(lVar6 + (longlong)iVar4 * 0x70);
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      puVar2[10] = 0;
      puVar2[0xb] = 0;
      puVar2[8] = 0;
      puVar2[9] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      FUN_1400b22c2(&local_70,"99/shot");
      if (puVar2 + 2 != &local_70) {
        lVar6 = lVar6 + (longlong)iVar4 * 0x70;
        if (*(longlong *)(lVar6 + 0x10) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(lVar6 + 0x10) = local_70;
        local_70 = 0;
        *(undefined4 *)(lVar6 + 0x18) = (undefined4)local_68;
        *(undefined4 *)(lVar6 + 0x1c) = local_68._4_4_;
        local_68 = 0;
      }
      if (local_70 != 0) {
        FUN_1400020a8();
      }
    }
  }
  else if (DAT_14cbdb778 + iVar4 == 1) goto LAB_148e73a35;
LAB_148e73a42:
  iVar4 = *(int *)(param_1 + 0x394);
  if (*(char *)(param_1 + 0x390) == '\0') {
LAB_148e73a57:
    *(undefined1 *)(param_1 + 0x390) = 1;
    *(int *)(param_1 + 0x394) = iVar4 + 1;
  }
  else if (iVar4 == 0) {
    iVar4 = 0;
    goto LAB_148e73a57;
  }
  if (*(int *)(param_1 + 0x3a0) == 0) {
    *(int *)(param_1 + 0x3a8) = *(int *)(param_1 + 0x3a8) + 1;
    plVar1 = (longlong *)(param_1 + 0x398);
    *(undefined4 *)(param_1 + 0x3a0) = 1;
    if (*(int *)(param_1 + 0x3a4) == 0) {
      FUN_1457b8d2e(plVar1,0);
    }
    puVar2 = (undefined8 *)*plVar1;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    FUN_1400b22c2(&local_70,
                  "TEXT STAT: 100% Increased debug values. This stat has longer text to see if multiple lines causes problems. I hope they dont... +50%?"
                 );
    if (puVar2 + 2 == &local_70) {
      if (local_70 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (puVar2[2] != 0) {
        FUN_1400020a8();
      }
      puVar2[2] = local_70;
      local_70 = 0;
      *(undefined4 *)(puVar2 + 3) = (undefined4)local_68;
      *(undefined4 *)((longlong)puVar2 + 0x1c) = local_68._4_4_;
    }
    *(int *)(param_1 + 0x3a8) = *(int *)(param_1 + 0x3a8) + 1;
    iVar4 = *(int *)(param_1 + 0x3a0);
    *(uint *)(param_1 + 0x3a0) = iVar4 + 1U;
    if (*(uint *)(param_1 + 0x3a4) < iVar4 + 1U) {
      FUN_1457b8d2e(plVar1,iVar4);
    }
    lVar6 = *plVar1;
    puVar2 = (undefined8 *)(lVar6 + (longlong)iVar4 * 0x70);
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    FUN_1400b22c2(&local_70,"TEXT STAT: 100% Reduced debug values.");
    if (puVar2 + 2 != &local_70) {
      lVar6 = lVar6 + (longlong)iVar4 * 0x70;
      if (*(longlong *)(lVar6 + 0x10) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(lVar6 + 0x10) = local_70;
      local_70 = 0;
      *(undefined4 *)(lVar6 + 0x18) = (undefined4)local_68;
      *(undefined4 *)(lVar6 + 0x1c) = local_68._4_4_;
      local_68 = 0;
    }
    if (local_70 != 0) {
      FUN_1400020a8();
    }
  }
  iVar4 = *(int *)(param_1 + 0x3b4);
  if (*(char *)(param_1 + 0x3b0) == '\0') {
LAB_148e73a84:
    *(undefined1 *)(param_1 + 0x3b0) = 1;
    *(int *)(param_1 + 0x3b4) = iVar4 + 1;
  }
  else if (iVar4 == 0) {
    iVar4 = 0;
    goto LAB_148e73a84;
  }
  if (*(char *)(param_1 + 0x4e8) == '\0') {
    FUN_1400b22c2(&local_70,"Debug Firmware:");
    *(int *)(param_1 + 0x4a0) = *(int *)(param_1 + 0x4a0) + 1;
    if ((longlong *)(param_1 + 0x430) == &local_70) {
      if (local_70 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x430) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x430) = local_70;
      local_70 = 0;
      *(undefined4 *)(param_1 + 0x438) = (undefined4)local_68;
      *(undefined4 *)(param_1 + 0x43c) = local_68._4_4_;
    }
    FUN_1400b22c2(&local_70,"Debug Set - 2/3");
    *(int *)(param_1 + 0x4a0) = *(int *)(param_1 + 0x4a0) + 1;
    if ((longlong *)(param_1 + 0x440) == &local_70) {
      if (local_70 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x440) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x440) = local_70;
      local_70 = 0;
      *(undefined4 *)(param_1 + 0x448) = (undefined4)local_68;
      *(undefined4 *)(param_1 + 0x44c) = local_68._4_4_;
    }
    if (*(int *)(param_1 + 0x4a8) == 2) {
      iVar4 = 1;
      if (*(int *)(param_1 + 0x4ac) == 0) goto LAB_148e7457b;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x4ac) + 1;
LAB_148e7457b:
      *(undefined4 *)(param_1 + 0x4a8) = 2;
      *(int *)(param_1 + 0x4ac) = iVar4;
    }
    FUN_148e4f946(param_1 + 0x4b0,&DAT_14b9be14c);
    if (*(char *)(param_1 + 0x4e8) == '\0') {
      iVar4 = *(int *)(param_1 + 0x4ec) + 1;
    }
    else {
      if (*(int *)(param_1 + 0x4ec) != 0) goto LAB_148e73aa0;
      iVar4 = 1;
    }
    *(undefined1 *)(param_1 + 0x4e8) = 1;
    *(int *)(param_1 + 0x4ec) = iVar4;
  }
LAB_148e73aa0:
  if (*(char *)(param_1 + 0x568) == '\0') {
    FUN_1400b22c2(&local_70,"Debug Anointment");
    *(int *)(param_1 + 0x560) = *(int *)(param_1 + 0x560) + 1;
    if ((longlong *)(param_1 + 0x4f0) == &local_70) {
      if (local_70 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x4f0) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x4f0) = local_70;
      local_70 = 0;
      *(undefined4 *)(param_1 + 0x4f8) = (undefined4)local_68;
      *(undefined4 *)(param_1 + 0x4fc) = local_68._4_4_;
    }
    FUN_1400b22c2(&local_70,"On Debug Kill, gain +5X% fire Debug, stack lost every 3 seconds");
    *(int *)(param_1 + 0x560) = *(int *)(param_1 + 0x560) + 1;
    if ((longlong *)(param_1 + 0x500) == &local_70) {
      if (local_70 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x500) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x500) = local_70;
      local_70 = 0;
      *(undefined4 *)(param_1 + 0x508) = (undefined4)local_68;
      *(undefined4 *)(param_1 + 0x50c) = local_68._4_4_;
    }
    if (*(char *)(param_1 + 0x568) == '\0') {
      iVar4 = *(int *)(param_1 + 0x56c) + 1;
    }
    else {
      if (*(int *)(param_1 + 0x56c) != 0) goto LAB_148e73aad;
      iVar4 = 1;
    }
    *(undefined1 *)(param_1 + 0x568) = 1;
    *(int *)(param_1 + 0x56c) = iVar4;
  }
LAB_148e73aad:
  if (*(int *)(param_1 + 0x4d8) < 2) {
    FUN_148e7482e(param_1 + 0x4d0);
  }
LAB_148e73501:
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e7464c FUN_148e7464c body=142 status=ok
// SIG undefined FUN_148e7464c(void)

undefined8 *
FUN_148e7464c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_FUN_14b9bf530;
  FUN_1446ddc76(&local_40,"AddInputMappingContext",1);
  FUN_14039176c(param_1,param_2,local_40,1);
  *param_1 = &PTR_FUN_14b9bf530;
  param_1[7] = param_3;
  *(undefined1 *)(param_1 + 8) = param_4;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e746dc FUN_148e746dc body=132 status=ok
// SIG undefined FUN_148e746dc(void)

undefined8 * FUN_148e746dc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_FUN_14b9bf560;
  FUN_1446ddc76(&local_38,"RemoveInputMappingContext",1);
  FUN_14039176c(param_1,param_2,local_38,1);
  *param_1 = &PTR_FUN_14b9bf560;
  param_1[7] = param_3;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e74762 FUN_148e74762 body=100 status=ok
// SIG undefined FUN_148e74762(void)

undefined8 FUN_148e74762(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400b22c2(local_28,"999% Chance");
  FUN_140775538(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e747c8 FUN_148e747c8 body=100 status=ok
// SIG undefined FUN_148e747c8(void)

undefined8 FUN_148e747c8(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400b22c2(local_28,"$999,999,999");
  FUN_140775538(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e7482e FUN_148e7482e body=100 status=ok
// SIG undefined FUN_148e7482e(void)

undefined8 FUN_148e7482e(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400b22c2(local_28,"Flavor text line for fun designer jokes and this will go to two lines.");
  FUN_140775538(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e74894 FUN_148e74894 body=190 status=ok
// SIG undefined FUN_148e74894(void)

longlong FUN_148e74894(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  FUN_144a787a6();
  plVar1 = *(longlong **)(param_2 + 0x10);
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x10) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  plVar1 = *(longlong **)(param_2 + 0x20);
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x20) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  FUN_144a787a6(param_1 + 0x38,param_2 + 0x38);
  FUN_144a787a6(param_1 + 0x48,param_2 + 0x48);
  FUN_144a787a6(param_1 + 0x58,param_2 + 0x58);
  uVar3 = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x70) = uVar3;
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  return param_1;
}



// FUNCTION 148e74952 FUN_148e74952 body=131 status=ok
// SIG undefined FUN_148e74952(void)

undefined8 * FUN_148e74952(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_FUN_14b9bf890;
  FUN_1446ddc76(&local_38,"RemoveMessage",1);
  FUN_14039176c(param_1,param_2,local_38,1);
  *param_1 = &PTR_FUN_14b9bf890;
  *(undefined4 *)(param_1 + 7) = param_3;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e749d6 FUN_148e749d6 body=353 status=ok
// SIG undefined FUN_148e749d6(void)

void FUN_148e749d6(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = *(longlong *)(param_1 + 0x288);
  if ((lVar2 != 0) && (0 < *(int *)(param_1 + 0x2a8))) {
    *(byte *)(param_1 + 0x8d) = *(byte *)(param_1 + 0x8d) & 0xef;
    puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    *puVar4 = &PTR_FUN_14b9bf950;
    FUN_1446ddc76(local_50,"ExpandedTutorial_PauseGame_End",1);
    FUN_14039176c(puVar4,uVar3,local_50[0],1);
    *puVar4 = &PTR_FUN_14b9bf950;
    FUN_140391314(param_1,puVar4);
    puVar4 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    uVar1 = *(undefined4 *)(lVar2 + 0x1ec);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    *puVar4 = &PTR_FUN_14b9bf890;
    FUN_1446ddc76(local_50,"RemoveMessage",1);
    FUN_14039176c(puVar4,uVar3,local_50[0],1);
    *puVar4 = &PTR_FUN_14b9bf890;
    *(undefined4 *)(puVar4 + 7) = uVar1;
    FUN_140391314(param_1,puVar4);
    FUN_1400b22c2(local_50,"OnExpandedTutorialClosed");
    FUN_140de1078(param_1,local_50,0,0);
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
    FUN_141197056(param_1,0);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e74b38 FUN_148e74b38 body=210 status=ok
// SIG undefined FUN_148e74b38(void)

void FUN_148e74b38(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (0 < *(int *)(param_1 + 0x2a8)) {
    puVar2 = (undefined8 *)FUN_14001cc68(0x48,0x10);
    local_48 = *(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x9c);
    local_40 = *(undefined4 *)(*(longlong *)(param_1 + 0x2a0) + 0xa4);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    *puVar2 = &PTR_FUN_14b9bf8c0;
    FUN_1446ddc76(&local_38,"TrackMissionNotification",1);
    FUN_14039176c(puVar2,uVar1,local_38,1);
    *puVar2 = &PTR_FUN_14b9bf8c0;
    puVar2[7] = local_48;
    *(undefined4 *)(puVar2 + 8) = local_40;
    FUN_140391314(param_1,puVar2);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e74c0c FUN_148e74c0c body=233 status=ok
// SIG undefined FUN_148e74c0c(void)

void FUN_148e74c0c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar3 = FUN_144729dda(param_1 + 0x30);
  if (cVar3 == '\0') goto LAB_148e74cd8;
  lVar5 = FUN_14479d2ce(param_1 + 0x30);
  FUN_1403ca8ec(lVar5 + 0x3c0,&DAT_14cbd9320);
  FUN_1448d5e3c(&local_28,param_1 + 0x208);
  piVar2 = *(int **)(local_28 + 0x200);
  AcquireSRWLockExclusive((PSRWLOCK)(piVar2 + 0x2c));
  piVar2[0x2a] = piVar2[0x2a] + 1;
  if (*piVar2 == 3) {
    if (piVar2[1] == 0) {
      iVar4 = 1;
      goto LAB_148e74c9f;
    }
  }
  else {
    iVar4 = piVar2[1] + 1;
LAB_148e74c9f:
    *piVar2 = 3;
    piVar2[1] = iVar4;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(piVar2 + 0x2c));
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
LAB_148e74cd8:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e74cf6 FUN_148e74cf6 body=233 status=ok
// SIG undefined FUN_148e74cf6(void)

void FUN_148e74cf6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar3 = FUN_144729dda(param_1 + 0x30);
  if (cVar3 == '\0') goto LAB_148e74dc2;
  lVar5 = FUN_14479d2ce(param_1 + 0x30);
  FUN_1403ca8ec(lVar5 + 0x3c0,&DAT_14cbd9320);
  FUN_1448d5e3c(&local_28,param_1 + 0x208);
  piVar2 = *(int **)(local_28 + 0x200);
  AcquireSRWLockExclusive((PSRWLOCK)(piVar2 + 0x2c));
  piVar2[0x2a] = piVar2[0x2a] + 1;
  if (*piVar2 == 5) {
    if (piVar2[1] == 0) {
      iVar4 = 1;
      goto LAB_148e74d89;
    }
  }
  else {
    iVar4 = piVar2[1] + 1;
LAB_148e74d89:
    *piVar2 = 5;
    piVar2[1] = iVar4;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(piVar2 + 0x2c));
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
LAB_148e74dc2:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e74de0 FUN_148e74de0 body=296 status=ok
// SIG undefined FUN_148e74de0(void)

void FUN_148e74de0(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (lVar2 != 0) {
    lVar3 = *(longlong *)(lVar2 + 0x120);
    if (lVar3 == DAT_14cbdb940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
    }
    if (lVar3 == DAT_14cbdb948) {
      FUN_148e74b38(param_1);
    }
    else if (lVar3 == DAT_14cbdb950) {
      FUN_148e74cf6(param_1);
    }
    else if (lVar3 == DAT_14cbdb958) {
      FUN_148e74c0c(param_1);
    }
    puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    uVar1 = *(undefined4 *)(lVar2 + 0x1ec);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    *puVar5 = &PTR_FUN_14b9bf890;
    FUN_1446ddc76(&local_40,"RemoveMessage",1);
    FUN_14039176c(puVar5,uVar4,local_40,1);
    *puVar5 = &PTR_FUN_14b9bf890;
    *(undefined4 *)(puVar5 + 7) = uVar1;
    FUN_140391314(param_1,puVar5);
    FUN_141197056(param_1,0);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e74f20 FUN_148e74f20 body=730 status=ok
// SIG undefined FUN_148e74f20(void)

undefined8 * FUN_148e74f20(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 *local_80;
  int local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_140056680(param_1 + 5,&DAT_149dfb77a);
  FUN_1400b22c2(param_1 + 7,"Incomplete");
  *(undefined2 *)(param_1 + 9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  FUN_1400b22c2(param_1 + 0xb,&DAT_149e02088);
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  FUN_1400b22c2(param_1 + 0x19,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 0x1b,&DAT_149e02088);
  lVar9 = *param_2;
  if (lVar9 != 0) {
    local_68 = param_2[1];
    if (local_68 != 0) {
      LOCK();
      *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
      UNLOCK();
    }
    local_70 = lVar9;
    FUN_140d9fb88(param_1,&local_70);
    uVar7 = DAT_14cb88950;
    uVar6 = DAT_14cb88948;
    uVar5 = DAT_14cb88940;
    uVar4 = DAT_14cb88938;
    uVar3 = DAT_14cb88930;
    if (*(char *)(*param_2 + 0x94) == '\x01') {
      *(undefined1 *)((longlong)param_1 + 9) = 0;
    }
    else {
      local_88 = DAT_14cb88958;
      local_90 = DAT_14cb88960;
      local_98 = DAT_14cb88968;
      local_a0 = DAT_14cb88970;
      local_80 = (undefined8 *)0x0;
      local_78 = 9;
      FUN_1401b309e(&local_80,9,0);
      *local_80 = uVar3;
      local_80[1] = uVar4;
      local_80[2] = uVar5;
      local_80[3] = uVar6;
      local_80[4] = uVar7;
      local_80[5] = local_88;
      local_80[6] = local_90;
      local_80[7] = local_98;
      local_80[8] = local_a0;
      lVar9 = *param_2;
      if (DAT_14cb88980 != 0) {
        FUN_144a78877((undefined4)DAT_14cb88978,DAT_14cb88980);
      }
      iVar8 = FUN_140d9f664((longlong *)(lVar9 + 8));
      if (((iVar8 == -1) ||
          (lVar9 = (longlong)iVar8 * 0x1c + *(longlong *)(lVar9 + 8),
          plVar10 = (longlong *)(lVar9 + 0xc), plVar10 == (longlong *)0x0 || lVar9 == 0)) ||
         ((longlong)local_78 == 0)) {
        bVar12 = false;
      }
      else {
        lVar9 = *plVar10;
        lVar11 = 0;
        do {
          plVar10 = (longlong *)((longlong)local_80 + lVar11);
          if (*plVar10 == lVar9) break;
          bVar12 = (longlong)local_78 * 8 + -8 != lVar11;
          lVar11 = lVar11 + 8;
        } while (bVar12);
        bVar12 = *plVar10 == lVar9;
      }
      *(bool *)((longlong)param_1 + 9) = bVar12;
      if (local_80 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  plVar10 = (longlong *)param_2[1];
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
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e751fc FUN_148e751fc body=588 status=ok
// SIG undefined FUN_148e751fc(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x000148e753f9 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_148e751fc(longlong param_1,char *param_2,undefined1 *param_3,longlong param_4,
                  undefined8 *param_5)

{
  void *_Src;
  size_t sVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [256];
  longlong local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined1 local_e0 [16];
  undefined1 local_d0;
  undefined **local_c8;
  undefined1 local_c0 [40];
  undefined4 local_98;
  undefined1 local_94;
  undefined8 local_90;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  undefined1 *local_78;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_f8 = 0;
  if (param_2 == (char *)0x0) {
    local_f0 = 0;
    local_e8 = 0;
  }
  else {
    sVar1 = strlen(param_2);
    FUN_1446e6fe8(local_1f8,param_2,sVar1 & 0xffffffff,1);
  }
  FUN_140056680(local_e0,local_f0);
  local_d0 = *param_3;
  local_c8 = &PTR_FUN_14b8194d0;
  FUN_1447a97f4(local_c0,param_4 + 8);
  local_98 = *(undefined4 *)(param_4 + 0x30);
  local_94 = *(undefined1 *)(param_4 + 0x34);
  local_c8 = &PTR_FUN_14b819920;
  local_90 = *(undefined8 *)(param_4 + 0x38);
  local_88 = (void *)0x0;
  local_80 = *(int *)(param_5 + 1);
  lVar4 = (longlong)local_80;
  _Src = (void *)*param_5;
  if (lVar4 == 0) {
    local_7c = 0;
  }
  else {
    FUN_1446dd670(&local_88,local_80,0);
    memcpy(local_88,_Src,lVar4 * 2);
  }
  local_78 = (undefined1 *)0x0;
  puVar2 = (undefined8 *)FUN_14001cc68(0x70,8);
  *puVar2 = &PTR_FUN_14b9c1240;
  FUN_148e7a1aa(puVar2 + 1,local_e0);
  if (puVar2 == (undefined8 *)&DAT_fffffffffffffff8) {
    puVar5 = (undefined1 *)0x0;
  }
  else {
    puVar5 = &LAB_148e7a1a2;
    local_78 = &LAB_148e7a1a2;
  }
  puVar3 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar3 = 0;
  puVar3[2] = puVar5;
  puVar3[4] = puVar2;
  local_68 = 0;
  *(undefined4 *)(puVar3 + 8) = local_48;
  *(undefined4 *)((longlong)puVar3 + 0x44) = uStack_44;
  *(undefined4 *)(puVar3 + 9) = uStack_40;
  *(undefined4 *)((longlong)puVar3 + 0x4c) = uStack_3c;
  *(undefined4 *)(puVar3 + 6) = local_58;
  *(undefined4 *)((longlong)puVar3 + 0x34) = uStack_54;
  *(undefined4 *)(puVar3 + 7) = uStack_50;
  *(undefined4 *)((longlong)puVar3 + 0x3c) = uStack_4c;
  if (puVar2 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_78 = (undefined1 *)0x0;
  }
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    puVar2 = *(undefined8 **)(param_1 + 0x30);
    *(undefined8 **)(param_1 + 0x30) = puVar3;
    UNLOCK();
    LOCK();
    *puVar2 = puVar3;
    UNLOCK();
    if (local_78 != (undefined1 *)0x0) {
      (**(code **)(CONCAT44(uStack_54,local_58) + 0x10))();
    }
  }
  FUN_148e7a158(local_e0);
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e7544a FUN_148e7544a body=591 status=ok
// SIG undefined FUN_148e7544a(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x000148e7564a */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_148e7544a(longlong param_1,char *param_2,undefined1 *param_3,longlong param_4,
                  undefined8 *param_5)

{
  void *_Src;
  size_t sVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [256];
  longlong local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined1 local_e0 [16];
  undefined1 local_d0;
  undefined **local_c8;
  undefined1 local_c0 [40];
  undefined4 local_98;
  undefined1 local_94;
  undefined4 local_90;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  undefined1 *local_78;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_f8 = 0;
  if (param_2 == (char *)0x0) {
    local_f0 = 0;
    local_e8 = 0;
  }
  else {
    sVar1 = strlen(param_2);
    FUN_1446e6fe8(local_1f8,param_2,sVar1 & 0xffffffff,1);
  }
  FUN_140056680(local_e0,local_f0);
  local_d0 = *param_3;
  local_c8 = &PTR_FUN_14b8194d0;
  FUN_1447a97f4(local_c0,param_4 + 8);
  local_98 = *(undefined4 *)(param_4 + 0x30);
  local_94 = *(undefined1 *)(param_4 + 0x34);
  local_c8 = &PTR_FUN_14b819a90;
  local_90 = *(undefined4 *)(param_4 + 0x38);
  local_88 = (void *)0x0;
  local_80 = *(int *)(param_5 + 1);
  lVar4 = (longlong)local_80;
  _Src = (void *)*param_5;
  if (lVar4 == 0) {
    local_7c = 0;
  }
  else {
    FUN_1446dd670(&local_88,local_80,0);
    memcpy(local_88,_Src,lVar4 * 2);
  }
  local_78 = (undefined1 *)0x0;
  puVar2 = (undefined8 *)FUN_14001cc68(0x70,8);
  *puVar2 = &PTR_FUN_14b9c1260;
  FUN_148e7a4dc(puVar2 + 1,local_e0);
  if (puVar2 == (undefined8 *)&DAT_fffffffffffffff8) {
    puVar5 = (undefined1 *)0x0;
  }
  else {
    puVar5 = &LAB_148e7a4d4;
    local_78 = &LAB_148e7a4d4;
  }
  puVar3 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar3 = 0;
  puVar3[2] = puVar5;
  puVar3[4] = puVar2;
  local_68 = 0;
  *(undefined4 *)(puVar3 + 8) = local_48;
  *(undefined4 *)((longlong)puVar3 + 0x44) = uStack_44;
  *(undefined4 *)(puVar3 + 9) = uStack_40;
  *(undefined4 *)((longlong)puVar3 + 0x4c) = uStack_3c;
  *(undefined4 *)(puVar3 + 6) = local_58;
  *(undefined4 *)((longlong)puVar3 + 0x34) = uStack_54;
  *(undefined4 *)(puVar3 + 7) = uStack_50;
  *(undefined4 *)((longlong)puVar3 + 0x3c) = uStack_4c;
  if (puVar2 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_78 = (undefined1 *)0x0;
  }
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    puVar2 = *(undefined8 **)(param_1 + 0x30);
    *(undefined8 **)(param_1 + 0x30) = puVar3;
    UNLOCK();
    LOCK();
    *puVar2 = puVar3;
    UNLOCK();
    if (local_78 != (undefined1 *)0x0) {
      (**(code **)(CONCAT44(uStack_54,local_58) + 0x10))();
    }
  }
  FUN_148e7a48a(local_e0);
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e7569a FUN_148e7569a body=86 status=ok
// SIG undefined FUN_148e7569a(void)

void FUN_148e7569a(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x30);
  lVar2 = FUN_140391a3c(uVar1);
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar3 = &PTR_FUN_14b9bfa80;
    *(undefined4 *)(puVar3 + 1) = param_2;
    FUN_14039144e(lVar2,puVar3);
    return;
  }
  return;
}



// FUNCTION 148e756f0 FUN_148e756f0 body=50 status=ok
// SIG undefined FUN_148e756f0(void)

undefined8 * FUN_148e756f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x298,0x10);
  FUN_140e8cffc(puVar1);
  *puVar1 = &PTR_FUN_14b9be560;
  return puVar1;
}



// FUNCTION 148e75722 FUN_148e75722 body=66 status=ok
// SIG undefined FUN_148e75722(void)

void FUN_148e75722(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_1407cbe30();
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    uVar2 = FUN_146608f3c();
    FUN_144a2e342(lVar1,param_1 + 0x160,uVar2);
    return;
  }
  return;
}



// FUNCTION 148e75764 FUN_148e75764 body=463 status=ok
// SIG undefined FUN_148e75764(void)

void FUN_148e75764(longlong param_1)

{
  void **ppvVar1;
  int *piVar2;
  longlong lVar3;
  void *_Src;
  ushort *puVar4;
  void **ppvVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  PSRWLOCK SRWLock;
  undefined1 auStack_b8 [40];
  longlong local_90;
  PSRWLOCK local_88;
  longlong local_80 [2];
  void *local_70;
  int local_68;
  undefined4 local_64;
  longlong *local_60;
  void **local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar3 = *(longlong *)(param_1 + 0x288);
  if ((lVar3 != 0) && (*(int *)(param_1 + 0x208) != 0)) {
    FUN_1448d5e3c(&local_60,param_1 + 0x208);
    lVar8 = local_60[0x10];
    SRWLock = (PSRWLOCK)(lVar8 + 0x28);
    AcquireSRWLockShared(SRWLock);
    ppvVar5 = local_58;
    if (local_58 != (void **)0x0) {
      LOCK();
      ppvVar1 = local_58 + 1;
      *(int *)ppvVar1 = *(int *)ppvVar1 + -1;
      UNLOCK();
      if (*(int *)ppvVar1 == 0) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar2 = (int *)((longlong)ppvVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)((longlong)*ppvVar5 + 0x10))(ppvVar5);
        }
      }
    }
    if (*(int *)(lVar3 + 0xac) != *(int *)(lVar8 + 0x20)) {
      *(int *)(lVar3 + 0xac) = *(int *)(lVar8 + 0x20);
      local_90 = lVar3;
      local_88 = SRWLock;
      if ((longlong)*(int *)(lVar8 + 0x10) != 0) {
        lVar7 = *(longlong *)(lVar8 + 8);
        lVar8 = (longlong)*(int *)(lVar8 + 0x10) << 5;
        do {
          local_70 = (void *)0x0;
          local_68 = *(int *)(lVar7 + 0x10);
          lVar6 = (longlong)local_68;
          _Src = *(void **)(lVar7 + 8);
          if (lVar6 == 0) {
            local_64 = 0;
          }
          else {
            FUN_1446dd670(&local_70,local_68,0);
            memcpy(local_70,_Src,lVar6 * 2);
          }
          FUN_1400021e4(lVar7,local_80);
          local_60 = local_80;
          local_58 = &local_70;
          FUN_1413216f2(lVar3 + 0xb0,local_4c,&local_60,0);
          if (local_80[0] != 0) {
            FUN_1400020a8();
          }
          if (local_70 != (void *)0x0) {
            FUN_1400020a8();
          }
          lVar7 = lVar7 + 0x20;
          lVar8 = lVar8 + -0x20;
        } while (lVar8 != 0);
      }
      puVar4 = *(ushort **)(local_90 + 0x80);
      SRWLock = local_88;
      if (puVar4 != (ushort *)0x0) {
        *puVar4 = *puVar4 | (ushort)(1L << (*(byte *)(local_90 + 0x78) & 0x3f));
      }
    }
    ReleaseSRWLockShared(SRWLock);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e75934 FUN_148e75934 body=77 status=ok
// SIG undefined FUN_148e75934(void)

undefined8 * FUN_148e75934(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2a0);
  memset(_Dst,0,0x2a0);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9bfd90;
  _Dst[0x53] = 0;
  return _Dst;
}



// FUNCTION 148e75982 FUN_148e75982 body=321 status=ok
// SIG undefined FUN_148e75982(void)

void FUN_148e75982(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  size_t sVar3;
  undefined1 auStack_218 [32];
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  undefined1 *local_1d0;
  char local_1c8;
  undefined1 local_1c0 [256];
  undefined1 local_c0 [128];
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_218;
  cVar1 = FUN_144729dda(param_1 + 0x30);
  if (cVar1 != '\0') {
    local_1e8 = *(undefined8 *)(param_2 + 4);
    local_1f8 = *param_2;
    uStack_1f4 = param_2[1];
    uStack_1f0 = param_2[2];
    uStack_1ec = param_2[3];
    uVar2 = FUN_14479d2ce(param_1 + 0x30);
    local_1e0 = local_1c0;
    local_1c8 = '\0';
    local_1d0 = local_c0;
    local_1d8 = local_1e0;
    _Str = (wchar_t *)FUN_140c7f682(param_1,L"OnAxisAction",&local_1e0);
    local_40 = 0;
    if (_Str == (wchar_t *)0x0) {
      local_38 = 0;
      local_30 = 0;
    }
    else {
      sVar3 = wcslen(_Str);
      FUN_1446fe5a4(local_c0,_Str,sVar3 & 0xffffffff,1);
    }
    FUN_148e75b06(uVar2,local_38,&local_1f8,&uStack_1f0);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if (local_1c8 == '\x01') {
      FUN_1400020a8(local_1e0);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e75ac4 FUN_148e75ac4 body=66 status=ok
// SIG undefined FUN_148e75ac4(void)

void FUN_148e75ac4(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_1407cbe30();
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    uVar2 = FUN_146609060();
    FUN_144a2e342(lVar1,param_1 + 0x160,uVar2);
    return;
  }
  return;
}



// FUNCTION 148e75b06 FUN_148e75b06 body=486 status=ok
// SIG undefined FUN_148e75b06(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x000148e75c7f */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_148e75b06(longlong param_1,char *param_2,undefined8 *param_3,undefined8 *param_4)

{
  size_t sVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  undefined1 auStack_1d8 [32];
  longlong local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined1 local_190 [256];
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 *local_78;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_90 = 0;
  if (param_2 == (char *)0x0) {
    local_88 = 0;
    local_80 = 0;
  }
  else {
    sVar1 = strlen(param_2);
    FUN_1446e6fe8(local_190,param_2,sVar1 & 0xffffffff,1);
  }
  FUN_140056680(&local_1b8,local_88);
  local_1a8 = DAT_14cbdba98;
  uStack_1a0 = *param_3;
  local_198 = *param_4;
  puVar5 = (undefined1 *)0x0;
  local_78 = (undefined1 *)0x0;
  puVar2 = (undefined8 *)FUN_14001cc68(0x30,8);
  *puVar2 = &PTR_FUN_14b9c1350;
  plVar6 = puVar2 + 1;
  *plVar6 = local_1b8;
  local_1b8 = 0;
  *(undefined4 *)(puVar2 + 2) = (undefined4)local_1b0;
  *(undefined4 *)((longlong)puVar2 + 0x14) = local_1b0._4_4_;
  local_1b0 = 0;
  puVar2[5] = local_198;
  *(undefined4 *)(puVar2 + 3) = (undefined4)local_1a8;
  *(undefined4 *)((longlong)puVar2 + 0x1c) = local_1a8._4_4_;
  *(undefined4 *)(puVar2 + 4) = (undefined4)uStack_1a0;
  *(undefined4 *)((longlong)puVar2 + 0x24) = uStack_1a0._4_4_;
  if (plVar6 != (longlong *)0x0) {
    puVar5 = &LAB_148e7ad04;
    local_78 = &LAB_148e7ad04;
  }
  puVar3 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar3 = 0;
  puVar3[2] = puVar5;
  puVar3[4] = puVar2;
  local_68 = 0;
  *(undefined4 *)(puVar3 + 8) = local_48;
  *(undefined4 *)((longlong)puVar3 + 0x44) = uStack_44;
  *(undefined4 *)(puVar3 + 9) = uStack_40;
  *(undefined4 *)((longlong)puVar3 + 0x4c) = uStack_3c;
  *(undefined4 *)(puVar3 + 6) = local_58;
  *(undefined4 *)((longlong)puVar3 + 0x34) = uStack_54;
  *(undefined4 *)(puVar3 + 7) = uStack_50;
  *(undefined4 *)((longlong)puVar3 + 0x3c) = uStack_4c;
  if (plVar6 != (longlong *)0x0) {
    local_78 = (undefined1 *)0x0;
  }
  uVar4 = 0;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    puVar2 = *(undefined8 **)(param_1 + 0x30);
    *(undefined8 **)(param_1 + 0x30) = puVar3;
    UNLOCK();
    LOCK();
    uVar4 = *puVar2;
    *puVar2 = puVar3;
    UNLOCK();
    if (local_78 != (undefined1 *)0x0) {
      uVar4 = (**(code **)(CONCAT44(uStack_54,local_58) + 0x10))();
    }
  }
  if (local_1b8 != 0) {
    uVar4 = FUN_1400020a8();
  }
  if (local_90 != 0) {
    uVar4 = FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 148e75cee FUN_148e75cee body=102 status=ok
// SIG undefined FUN_148e75cee(void)

void FUN_148e75cee(longlong *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  if ((-1 < (int)param_2) && ((int)param_2 < (int)param_1[1])) {
    _Dst = (void *)((ulonglong)param_2 * 0x58 + *param_1);
    FUN_145a1d3e7(_Dst,1);
    iVar1 = (int)param_1[1];
    iVar2 = iVar1 - (param_2 + 1);
    if (iVar2 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + 0x58),(longlong)iVar2 * 0x58);
      iVar1 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar1 + -1;
    FUN_145a1d5f0(param_1);
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  }
  return;
}



// FUNCTION 148e75d54 FUN_148e75d54 body=42 status=ok
// SIG undefined FUN_148e75d54(void)

longlong FUN_148e75d54(longlong param_1,int param_2)

{
  FUN_1459ddea2(param_1 + 0x38);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e75d7e FUN_148e75d7e body=47 status=ok
// SIG undefined FUN_148e75d7e(void)

longlong FUN_148e75d7e(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e75dae FUN_148e75dae body=47 status=ok
// SIG undefined FUN_148e75dae(void)

longlong FUN_148e75dae(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e75dde FUN_148e75dde body=47 status=ok
// SIG undefined FUN_148e75dde(void)

longlong FUN_148e75dde(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e75e0e FUN_148e75e0e body=47 status=ok
// SIG undefined FUN_148e75e0e(void)

longlong FUN_148e75e0e(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e75e3e FUN_148e75e3e body=61 status=ok
// SIG undefined FUN_148e75e3e(void)

longlong FUN_148e75e3e(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e75e7c FUN_148e75e7c body=61 status=ok
// SIG undefined FUN_148e75e7c(void)

longlong FUN_148e75e7c(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e75eba FUN_148e75eba body=47 status=ok
// SIG undefined FUN_148e75eba(void)

longlong FUN_148e75eba(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e75eea FUN_148e75eea body=47 status=ok
// SIG undefined FUN_148e75eea(void)

longlong FUN_148e75eea(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e75f1a FUN_148e75f1a body=47 status=ok
// SIG undefined FUN_148e75f1a(void)

longlong FUN_148e75f1a(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e75f4a FUN_148e75f4a body=141 status=ok
// SIG undefined FUN_148e75f4a(void)

void FUN_148e75f4a(undefined8 param_1)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x100);
  memset(_Dst,0,0x100);
  FUN_1408f3f9e(_Dst);
  *_Dst = &PTR_FUN_14b8c3480;
  _Dst[0x1a] = 0;
  *(undefined4 *)(_Dst + 0x1b) = 0;
  _Dst[0x16] = 0;
  _Dst[0x17] = 0;
  *(undefined8 *)((longlong)_Dst + 0xdc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)_Dst + 0xe4) = 0;
  _Dst[0x1e] = 0;
  *(undefined4 *)(_Dst + 0x1f) = 0;
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 148e75fd8 FUN_148e75fd8 body=122 status=ok
// SIG undefined FUN_148e75fd8(void)

longlong FUN_148e75fd8(longlong param_1,longlong param_2)

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
    FUN_148e76052(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148e76052 FUN_148e76052 body=231 status=ok
// SIG undefined FUN_148e76052(void)

longlong * FUN_148e76052(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145abb958(param_1,(ulonglong)uVar1);
    lVar3 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar3 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar3) < uVar1) {
      FUN_1403951a8(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2);
    if (0 < (int)uVar1) {
      lVar3 = *param_1;
      lVar2 = *param_2;
      lVar4 = 0;
      uVar5 = 0;
      do {
        plVar6 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar6 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar6 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar3 + lVar4) = *(undefined4 *)(lVar2 + lVar4);
          *(undefined4 *)(lVar3 + 4 + lVar4) = *(undefined4 *)(lVar2 + 4 + lVar4);
        }
        else {
          *(undefined8 *)(lVar3 + lVar4) = *(undefined8 *)(lVar2 + lVar4);
          *(undefined1 *)(lVar3 + 8 + lVar4) = 0;
          *(undefined4 *)(lVar3 + 0xc + lVar4) = 0;
          *(undefined1 *)(lVar3 + 8 + lVar4) = *(undefined1 *)(lVar2 + 8 + lVar4);
          *(undefined4 *)(lVar3 + 0xc + lVar4) = *(undefined4 *)(lVar2 + 0xc + lVar4);
          *(undefined8 *)(lVar3 + 0x10 + lVar4) = *(undefined8 *)(lVar2 + 0x10 + lVar4);
        }
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + 0x18;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 148e7613a FUN_148e7613a body=122 status=ok
// SIG undefined FUN_148e7613a(void)

longlong FUN_148e7613a(longlong param_1,longlong param_2)

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
    FUN_148e761b4(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148e761b4 FUN_148e761b4 body=250 status=ok
// SIG undefined FUN_148e761b4(void)

longlong * FUN_148e761b4(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145abb9d4(param_1,(ulonglong)uVar1);
    lVar3 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar3 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar3) < uVar1) {
      FUN_140549c28(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar3 = *param_1;
      lVar2 = *param_2;
      lVar6 = 0;
      uVar5 = 0;
      do {
        plVar4 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar4 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar4 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar3 + lVar6) = *(undefined4 *)(lVar2 + lVar6);
          *(undefined4 *)(lVar3 + 4 + lVar6) = *(undefined4 *)(lVar2 + 4 + lVar6);
        }
        else {
          *(undefined1 *)(lVar3 + lVar6) = *(undefined1 *)(lVar2 + lVar6);
          FUN_1457805d4(lVar3 + 8 + lVar6,lVar2 + 8 + lVar6);
          *(undefined8 *)(lVar3 + 0x20 + lVar6) = *(undefined8 *)(lVar2 + 0x20 + lVar6);
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x28;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 148e762ae FUN_148e762ae body=117 status=ok
// SIG undefined FUN_148e762ae(void)

void FUN_148e762ae(undefined8 param_1)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0xd0);
  memset(_Dst,0,0xd0);
  FUN_1408f3f9e(_Dst);
  *_Dst = &PTR_FUN_14b8957f0;
  *(undefined4 *)((longlong)_Dst + 0xbc) = 0;
  *(undefined2 *)(_Dst + 0x18) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc4) = 0;
  _Dst[0x16] = 0;
  *(undefined4 *)((longlong)_Dst + 0xb7) = 0;
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 148e76324 FUN_148e76324 body=38 status=ok
// SIG undefined FUN_148e76324(void)

undefined8 FUN_148e76324(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"AddInputMappingContext",1);
  return param_2;
}



// FUNCTION 148e7634a FUN_148e7634a body=29 status=ok
// SIG undefined FUN_148e7634a(void)

undefined8 FUN_148e7634a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e76368 FUN_148e76368 body=38 status=ok
// SIG undefined FUN_148e76368(void)

undefined8 FUN_148e76368(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"RemoveInputMappingContext",1);
  return param_2;
}



// FUNCTION 148e7638e FUN_148e7638e body=29 status=ok
// SIG undefined FUN_148e7638e(void)

undefined8 FUN_148e7638e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e763ac FUN_148e763ac body=38 status=ok
// SIG undefined FUN_148e763ac(void)

undefined8 FUN_148e763ac(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"TrackMissionNotification",1);
  return param_2;
}



// FUNCTION 148e763d2 FUN_148e763d2 body=29 status=ok
// SIG undefined FUN_148e763d2(void)

undefined8 FUN_148e763d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e763f0 FUN_148e763f0 body=38 status=ok
// SIG undefined FUN_148e763f0(void)

undefined8 FUN_148e763f0(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"ExpandTutorial",1);
  return param_2;
}



// FUNCTION 148e76416 FUN_148e76416 body=29 status=ok
// SIG undefined FUN_148e76416(void)

undefined8 FUN_148e76416(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e76434 FUN_148e76434 body=38 status=ok
// SIG undefined FUN_148e76434(void)

undefined8 FUN_148e76434(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"ExpandedTutorial_PauseGame_Start",1);
  return param_2;
}



// FUNCTION 148e7645a FUN_148e7645a body=29 status=ok
// SIG undefined FUN_148e7645a(void)

undefined8 FUN_148e7645a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e76478 FUN_148e76478 body=38 status=ok
// SIG undefined FUN_148e76478(void)

undefined8 FUN_148e76478(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"ExpandedTutorial_PauseGame_End",1);
  return param_2;
}



// FUNCTION 148e7649e FUN_148e7649e body=29 status=ok
// SIG undefined FUN_148e7649e(void)

undefined8 FUN_148e7649e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e764bc FUN_148e764bc body=29 status=ok
// SIG undefined FUN_148e764bc(void)

undefined8 FUN_148e764bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e764da FUN_148e764da body=38 status=ok
// SIG undefined FUN_148e764da(void)

undefined8 FUN_148e764da(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FOakUIEvent_RevertTempMission",1);
  return param_2;
}



// FUNCTION 148e76500 FUN_148e76500 body=116 status=ok
// SIG undefined FUN_148e76500(void)

void FUN_148e76500(undefined8 param_1)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_1408f3f9e(_Dst);
  *_Dst = &PTR_FUN_14b8c3790;
  _Dst[0x1a] = 0;
  _Dst[0x16] = 0;
  _Dst[0x17] = 0;
  *(undefined8 *)((longlong)_Dst + 0xbc) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc4) = 0;
  *(undefined4 *)(_Dst + 0x1b) = 0x3f19999a;
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 148e7658c FUN_148e7658c body=42 status=ok
// SIG undefined FUN_148e7658c(void)

Property * FUN_148e7658c(Property *param_1,int param_2)

{
  cohtml::Property::~Property(param_1);
  if (param_2 != 0) {
    cohtml::Property::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148e765b6 FUN_148e765b6 body=79 status=ok
// SIG undefined FUN_148e765b6(void)

longlong FUN_148e765b6(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined2 *puVar1;
  
  (**(code **)(*param_2 + 0xa8))(param_2,*(undefined8 *)(param_1 + 8));
  if (*(int *)(param_3 + 8 + (longlong)*(int *)(param_1 + 0x18)) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = *(undefined2 **)(param_3 + *(int *)(param_1 + 0x18));
  }
  (**(code **)(*param_2 + 0xd0))(param_2,puVar1);
  return param_3;
}



// FUNCTION 148e76606 FUN_148e76606 body=58 status=ok
// SIG undefined FUN_148e76606(void)

longlong FUN_148e76606(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined2 *puVar1;
  
  if (*(int *)(param_3 + 8 + (longlong)*(int *)(param_1 + 0x18)) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = *(undefined2 **)(param_3 + *(int *)(param_1 + 0x18));
  }
  (**(code **)(*param_2 + 0xd0))(param_2,puVar1);
  return param_3;
}



// FUNCTION 148e76640 FUN_148e76640 body=119 status=ok
// SIG undefined FUN_148e76640(void)

longlong FUN_148e76640(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)(param_1 + 0x18);
  local_30 = 0;
  local_38 = 0;
  (**(code **)(*param_2 + 0x1c8))(param_2,&local_38,&local_30);
  FUN_1409ee323(local_38,local_30,iVar1 + param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e766b8 FUN_148e766b8 body=65 status=ok
// SIG undefined FUN_148e766b8(void)

void FUN_148e766b8(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x20);
  *puVar1 = &PTR_LAB_14b4575b0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9c00b0;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148e76706 FUN_148e76706 body=42 status=ok
// SIG undefined FUN_148e76706(void)

Property * FUN_148e76706(Property *param_1,int param_2)

{
  cohtml::Property::~Property(param_1);
  if (param_2 != 0) {
    cohtml::Property::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148e76730 FUN_148e76730 body=62 status=ok
// SIG undefined FUN_148e76730(void)

longlong FUN_148e76730(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0xa8))(param_2,*(undefined8 *)(param_1 + 8));
  (**(code **)(*param_2 + 0x140))(param_2,*(undefined1 *)(param_3 + *(int *)(param_1 + 0x18)));
  return param_3;
}



// FUNCTION 148e7676e FUN_148e7676e body=41 status=ok
// SIG undefined FUN_148e7676e(void)

longlong FUN_148e7676e(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0x140))(param_2,*(undefined1 *)(param_3 + *(int *)(param_1 + 0x18)));
  return param_3;
}



// FUNCTION 148e76798 FUN_148e76798 body=40 status=ok
// SIG undefined FUN_148e76798(void)

longlong FUN_148e76798(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0x238))(param_2,*(int *)(param_1 + 0x18) + param_3);
  return param_3;
}



// FUNCTION 148e767c0 FUN_148e767c0 body=65 status=ok
// SIG undefined FUN_148e767c0(void)

void FUN_148e767c0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x20);
  *puVar1 = &PTR_LAB_14b4575b0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9c0140;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148e7680e FUN_148e7680e body=42 status=ok
// SIG undefined FUN_148e7680e(void)

Property * FUN_148e7680e(Property *param_1,int param_2)

{
  cohtml::Property::~Property(param_1);
  if (param_2 != 0) {
    cohtml::Property::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148e76838 FUN_148e76838 body=62 status=ok
// SIG undefined FUN_148e76838(void)

longlong FUN_148e76838(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0xa8))(param_2,*(undefined8 *)(param_1 + 8));
  (**(code **)(*param_2 + 0x140))(param_2,*(undefined1 *)(param_3 + *(int *)(param_1 + 0x18)));
  return param_3;
}



// FUNCTION 148e76876 FUN_148e76876 body=41 status=ok
// SIG undefined FUN_148e76876(void)

longlong FUN_148e76876(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0x140))(param_2,*(undefined1 *)(param_3 + *(int *)(param_1 + 0x18)));
  return param_3;
}



// FUNCTION 148e768a0 FUN_148e768a0 body=40 status=ok
// SIG undefined FUN_148e768a0(void)

longlong FUN_148e768a0(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0x238))(param_2,*(int *)(param_1 + 0x18) + param_3);
  return param_3;
}



// FUNCTION 148e768c8 FUN_148e768c8 body=65 status=ok
// SIG undefined FUN_148e768c8(void)

void FUN_148e768c8(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x20);
  *puVar1 = &PTR_LAB_14b4575b0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9c01d0;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148e76916 FUN_148e76916 body=42 status=ok
// SIG undefined FUN_148e76916(void)

Property * FUN_148e76916(Property *param_1,int param_2)

{
  cohtml::Property::~Property(param_1);
  if (param_2 != 0) {
    cohtml::Property::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148e76940 FUN_148e76940 body=58 status=ok
// SIG undefined FUN_148e76940(void)

longlong FUN_148e76940(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0xa8))(param_2,*(undefined8 *)(param_1 + 8));
  FUN_1489e9619(param_2,*(int *)(param_1 + 0x18) + param_3);
  return param_3;
}



// FUNCTION 148e7697a FUN_148e7697a body=35 status=ok
// SIG undefined FUN_148e7697a(void)

longlong FUN_148e7697a(longlong param_1,undefined8 param_2,longlong param_3)

{
  FUN_1489e9619(param_2,*(int *)(param_1 + 0x18) + param_3);
  return param_3;
}



// FUNCTION 148e7699e FUN_148e7699e body=35 status=ok
// SIG undefined FUN_148e7699e(void)

longlong FUN_148e7699e(longlong param_1,undefined8 param_2,longlong param_3)

{
  FUN_140f67fee(param_2,*(int *)(param_1 + 0x18) + param_3);
  return param_3;
}



// FUNCTION 148e769c2 FUN_148e769c2 body=65 status=ok
// SIG undefined FUN_148e769c2(void)

void FUN_148e769c2(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x20);
  *puVar1 = &PTR_LAB_14b4575b0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9c0260;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148e76a10 FUN_148e76a10 body=42 status=ok
// SIG undefined FUN_148e76a10(void)

Property * FUN_148e76a10(Property *param_1,int param_2)

{
  cohtml::Property::~Property(param_1);
  if (param_2 != 0) {
    cohtml::Property::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148e76a3a FUN_148e76a3a body=62 status=ok
// SIG undefined FUN_148e76a3a(void)

longlong FUN_148e76a3a(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0xa8))(param_2,*(undefined8 *)(param_1 + 8));
  (**(code **)(*param_2 + 0x128))(param_2,*(undefined4 *)(param_3 + *(int *)(param_1 + 0x18)));
  return param_3;
}



// FUNCTION 148e76a78 FUN_148e76a78 body=41 status=ok
// SIG undefined FUN_148e76a78(void)

longlong FUN_148e76a78(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0x128))(param_2,*(undefined4 *)(param_3 + *(int *)(param_1 + 0x18)));
  return param_3;
}



// FUNCTION 148e76aa2 FUN_148e76aa2 body=40 status=ok
// SIG undefined FUN_148e76aa2(void)

longlong FUN_148e76aa2(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0x220))(param_2,*(int *)(param_1 + 0x18) + param_3);
  return param_3;
}



// FUNCTION 148e76aca FUN_148e76aca body=65 status=ok
// SIG undefined FUN_148e76aca(void)

void FUN_148e76aca(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x20);
  *puVar1 = &PTR_LAB_14b4575b0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9c02f0;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148e76b18 FUN_148e76b18 body=138 status=ok
// SIG undefined FUN_148e76b18(void)

void FUN_148e76b18(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)((longlong)param_2 * 0x20 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148e76ba2 FUN_148e76ba2 body=64 status=ok
// SIG undefined FUN_148e76ba2(void)

void FUN_148e76ba2(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  
  if (((*(int *)(param_1 + 2) != 0) && (*(int *)(param_1 + 1) == *(int *)(param_2 + 1))) &&
     (cVar1 = FUN_1405d12b4(*param_1,*param_2), cVar1 != '\0')) {
    return;
  }
  FUN_140bee9ec(param_1,param_2);
  *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + 1;
  return;
}



// FUNCTION 148e76be2 FUN_148e76be2 body=76 status=ok
// SIG undefined FUN_148e76be2(void)

void FUN_148e76be2(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_145b94db8();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_148e76c1f;
    }
  }
  lVar2 = 0;
LAB_148e76c1f:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}


