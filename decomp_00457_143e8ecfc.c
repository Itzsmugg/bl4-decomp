// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143e8ecfc FUN_143e8ecfc body=154 status=ok
// SIG undefined FUN_143e8ecfc(void)

undefined8 FUN_143e8ecfc(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = param_4;
  FUN_143e8ed98(param_1 + 0x18,param_2,param_3,&local_19);
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
  plVar3 = *(longlong **)(param_3 + 8);
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
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e8ed98 FUN_143e8ed98 body=1568 status=ok
// SIG undefined FUN_143e8ed98(void)

void FUN_143e8ed98(longlong *param_1,undefined8 *param_2,undefined8 *param_3,char *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  void *_Dst;
  size_t sVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  wchar_t *pwVar12;
  int iVar13;
  undefined8 uVar14;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar15;
  uint uVar16;
  longlong *plVar17;
  undefined1 auStack_258 [32];
  undefined4 local_238;
  undefined4 local_230;
  longlong *local_228;
  undefined4 local_21c;
  longlong local_218;
  LPCRITICAL_SECTION local_210;
  longlong *local_208;
  undefined1 **local_200;
  undefined1 **local_1f8;
  longlong *local_1f0;
  longlong local_1e8;
  longlong *local_1e0;
  wchar_t *local_1d8;
  undefined8 uStack_1d0;
  wchar_t *local_1c8;
  undefined8 uStack_1c0;
  longlong local_1b0 [2];
  longlong local_1a0;
  int local_198;
  undefined1 local_190 [128];
  undefined1 *local_110;
  undefined1 *local_108;
  int local_100;
  undefined1 local_f8 [128];
  undefined1 *local_78;
  undefined1 *local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_258;
  cVar5 = *param_4;
  local_228 = (longlong *)*param_3;
  plVar17 = (longlong *)param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  local_1f0 = (longlong *)param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  lVar15 = *param_1;
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
    UNLOCK();
  }
  if (local_1f0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1f0 + 1) = (int)local_1f0[1] + 1;
    UNLOCK();
  }
  local_1e8 = param_1[2];
  local_1e0 = (longlong *)param_1[3];
  if (local_1e0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1e0 + 1) = (int)local_1e0[1] + 1;
    UNLOCK();
  }
  lVar7 = param_1[1];
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar15 + 0x78);
  EnterCriticalSection(lpCriticalSection);
  local_21c = (int)lVar7;
  lVar7 = FUN_1489cf2b6(lVar15,(int)lVar7,&local_1e8);
  LeaveCriticalSection(lpCriticalSection);
  if (lVar7 == 0) goto LAB_143e8ee80;
  if (((*(longlong *)(lVar15 + 0xa0) == 0) || (*(longlong *)(lVar15 + 0xa8) == 0)) ||
     (*(int *)(*(longlong *)(lVar15 + 0xa8) + 8) < 1)) {
    (**(code **)(**(longlong **)(local_1e8 + 0x20) + 0x40))(*(longlong **)(local_1e8 + 0x20),1);
    goto LAB_143e8ee80;
  }
  if ((local_228 == (longlong *)0x0) || (cVar5 == '\0')) {
    (**(code **)(**(longlong **)(local_1e8 + 0x20) + 0x40))(*(longlong **)(local_1e8 + 0x20),1);
  }
  else {
    local_218 = lVar15;
    local_210 = lpCriticalSection;
    local_208 = plVar17;
    (**(code **)(*local_228 + 0x30))(local_228,&local_1a0);
    FUN_140056680(local_1b0,&DAT_149e35320);
    if ((longlong)local_198 != 0) {
      local_200 = &local_78;
      local_1f8 = &local_110;
      lVar7 = (longlong)local_198 << 4;
      lVar15 = local_1a0;
      do {
        local_1c8 = (wchar_t *)0x0;
        uStack_1c0 = 0;
        local_1d8 = (wchar_t *)0x0;
        uStack_1d0 = 0;
        local_230 = 0;
        local_238 = 1;
        FUN_1407cdbc6(lVar15,local_1b0,&local_1c8,&local_1d8);
        pwVar12 = L"";
        if ((int)uStack_1d0 != 0) {
          pwVar12 = local_1d8;
        }
        plVar17 = *(longlong **)(local_1e8 + 0x20);
        local_78 = (undefined1 *)0x0;
        if (pwVar12 == (wchar_t *)0x0) {
          local_70 = (undefined1 *)0x0;
          local_68 = 0;
        }
        else {
          sVar9 = wcslen(pwVar12);
          local_68 = FUN_14475aa65(0,pwVar12,sVar9 & 0xffffffff);
          uVar16 = local_68 + 1;
          puVar10 = (undefined1 *)0x0;
          if (0x80 < uVar16) {
            FUN_1446efa72(local_200,0,uVar16,1);
            puVar10 = local_78;
          }
          local_70 = puVar10;
          if (puVar10 == (undefined1 *)0x0) {
            local_70 = local_f8;
          }
          FUN_14475a98a(local_70,uVar16,pwVar12,(int)sVar9 + 1);
        }
        puVar10 = local_70;
        pwVar12 = L"";
        if ((int)uStack_1c0 != 0) {
          pwVar12 = local_1c8;
        }
        local_110 = (undefined1 *)0x0;
        if (pwVar12 == (wchar_t *)0x0) {
          local_108 = (undefined1 *)0x0;
          local_100 = 0;
        }
        else {
          sVar9 = wcslen(pwVar12);
          local_100 = FUN_14475aa65(0,pwVar12,sVar9 & 0xffffffff);
          uVar16 = local_100 + 1;
          puVar11 = (undefined1 *)0x0;
          if (0x80 < uVar16) {
            FUN_1446efa72(local_1f8,0,uVar16,1);
            puVar11 = local_110;
          }
          local_108 = puVar11;
          if (puVar11 == (undefined1 *)0x0) {
            local_108 = local_190;
          }
          FUN_14475a98a(local_108,uVar16,pwVar12,(int)sVar9 + 1);
        }
        (**(code **)(*plVar17 + 0x38))(plVar17,local_108,puVar10);
        if (local_110 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        if (local_78 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        if (local_1d8 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        if (local_1c8 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        lVar15 = lVar15 + 0x10;
        lVar7 = lVar7 + -0x10;
      } while (lVar7 != 0);
    }
    plVar17 = local_228;
    puVar8 = (undefined8 *)(**(code **)(*local_228 + 0x48))(local_228);
    lVar15 = local_1e8;
    _Dst = (void *)(**(code **)(**(longlong **)(local_1e8 + 0x20) + 8))
                             (*(longlong **)(local_1e8 + 0x20),(longlong)*(int *)(puVar8 + 1));
    memcpy(_Dst,(void *)*puVar8,(longlong)*(int *)(puVar8 + 1));
    iVar6 = (**(code **)(*plVar17 + 0x58))(plVar17);
    (**(code **)(**(longlong **)(lVar15 + 0x20) + 0x28))(*(longlong **)(lVar15 + 0x20),iVar6);
    uVar14 = 0;
    if ((iVar6 - 200U < 7) || (uVar14 = 1, *(int *)(lVar15 + 0x18) < 1)) {
LAB_143e8f0aa:
      (**(code **)(**(longlong **)(lVar15 + 0x20) + 0x40))(*(longlong **)(lVar15 + 0x20),uVar14);
    }
    else {
      iVar6 = *(int *)(*(undefined8 **)(lVar15 + 0x10) + 1);
      iVar13 = 0;
      iVar4 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar4 = 0;
      }
      FUN_1402980a2(lVar15,**(undefined8 **)(lVar15 + 0x10),iVar4);
      plVar17 = *(longlong **)(lVar15 + 0x10);
      if (*plVar17 != 0) {
        FUN_1400020a8();
      }
      iVar6 = *(int *)(lVar15 + 0x18) + -1;
      if (iVar6 != 0) {
        memmove(plVar17,plVar17 + 2,(longlong)iVar6 << 4);
        iVar13 = *(int *)(lVar15 + 0x18) + -1;
      }
      *(int *)(lVar15 + 0x18) = iVar13;
      FUN_140b12644(lVar15 + 0x10);
      cVar5 = FUN_1489cda40(local_218,lVar15,*(undefined8 *)(lVar15 + 0x28),
                            *(undefined8 *)(lVar15 + 0x20));
      if (cVar5 == '\0') goto LAB_143e8f0aa;
    }
    plVar17 = local_208;
    lpCriticalSection = local_210;
    if (local_1b0[0] != 0) {
      FUN_1400020a8();
    }
    FUN_1447a1747(local_1a0,local_198);
    lVar15 = local_218;
    if (local_1a0 != 0) {
      FUN_1400020a8();
    }
  }
  EnterCriticalSection(lpCriticalSection);
  FUN_1489cf334(lVar15,local_21c,&local_1e8);
  LeaveCriticalSection(lpCriticalSection);
LAB_143e8ee80:
  plVar3 = local_1e0;
  if (local_1e0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1e0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_1e0)(local_1e0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = local_1f0;
  if (local_1f0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1f0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_1f0)(local_1f0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar17 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar17 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_60 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e8f3d8 FUN_143e8f3d8 body=29 status=ok
// SIG undefined FUN_143e8f3d8(void)

undefined8 FUN_143e8f3d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e8f3f6 FUN_143e8f3f6 body=29 status=ok
// SIG undefined FUN_143e8f3f6(void)

undefined8 FUN_143e8f3f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e8f428 FUN_143e8f428 body=93 status=ok
// SIG undefined FUN_143e8f428(void)

void FUN_143e8f428(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b453850;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e8f486 FUN_143e8f486 body=93 status=ok
// SIG undefined FUN_143e8f486(void)

void FUN_143e8f486(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b453850;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e8f4e4 FUN_143e8f4e4 body=126 status=ok
// SIG undefined FUN_143e8f4e4(void)

void FUN_143e8f4e4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b453850;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e8f553. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143e8f56c FUN_143e8f56c body=20 status=ok
// SIG undefined FUN_143e8f56c(void)

undefined1 FUN_143e8f56c(longlong param_1)

{
  FUN_143e8f580(param_1 + 0x18);
  return 1;
}



// FUNCTION 143e8f580 FUN_143e8f580 body=174 status=ok
// SIG undefined FUN_143e8f580(void)

void FUN_143e8f580(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = param_1[1];
  FUN_1469aa534(*param_1);
  uVar3 = *param_1;
  local_28 = *(undefined8 *)(lVar2 + 0x3f0);
  puVar4 = *(undefined8 **)(lVar2 + 0x3f8);
  local_20 = puVar4;
  if (puVar4 == (undefined8 *)0x0) {
    FUN_145cd1400(uVar3,&local_28,2);
  }
  else {
    LOCK();
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
    UNLOCK();
    FUN_145cd1400(uVar3,&local_28,2);
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar4 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar4)(puVar4);
        LOCK();
        piVar1 = (int *)((longlong)puVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
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



// FUNCTION 143e8f640 FUN_143e8f640 body=43 status=ok
// SIG undefined FUN_143e8f640(void)

undefined8 FUN_143e8f640(undefined8 param_1,undefined8 *param_2)

{
  (**(code **)(*(longlong *)*param_2 + 0xc0))
            ((longlong *)*param_2,param_1,*(undefined4 *)param_2[1],param_2[2]);
  return param_1;
}



// FUNCTION 143e8f692 FUN_143e8f692 body=12 status=ok
// SIG undefined FUN_143e8f692(void)

void FUN_143e8f692(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143e8f69b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143e8f69e FUN_143e8f69e body=29 status=ok
// SIG undefined FUN_143e8f69e(void)

undefined8 FUN_143e8f69e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e8f6bc FUN_143e8f6bc body=69 status=ok
// SIG undefined FUN_143e8f6bc(void)

undefined1 * FUN_143e8f6bc(undefined1 *param_1)

{
  *param_1 = 1;
  param_1[0x20] = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  memset(param_1 + 0x28,0,0x88);
  *(undefined4 *)(param_1 + 0xb0) = 0x20702;
  param_1[0xb4] = 0;
  return param_1;
}



// FUNCTION 143e8f718 FUN_143e8f718 body=12 status=ok
// SIG undefined FUN_143e8f718(void)

void FUN_143e8f718(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143e8f721. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143e8f724 FUN_143e8f724 body=29 status=ok
// SIG undefined FUN_143e8f724(void)

undefined8 FUN_143e8f724(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e8f742 FUN_143e8f742 body=44 status=ok
// SIG undefined FUN_143e8f742(void)

undefined8
FUN_143e8f742(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  (**(code **)(*(longlong *)*param_2 + 0xa0))
            ((longlong *)*param_2,param_1,*param_3,param_4,*(undefined4 *)(param_2 + 1),
             *(undefined4 *)(param_2 + 2));
  return param_1;
}



// FUNCTION 143e8f76e FUN_143e8f76e body=94 status=ok
// SIG undefined FUN_143e8f76e(void)

undefined8
FUN_143e8f76e(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_3;
  uStack_20 = param_3[1];
  local_38 = *(undefined4 *)(param_2 + 1);
  uStack_34 = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_30 = *(undefined4 *)(param_2 + 2);
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0x14);
  (**(code **)(*(longlong *)*param_2 + 0x98))((longlong *)*param_2,param_1,&local_28,*param_4);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e8f800 FUN_143e8f800 body=29 status=ok
// SIG undefined FUN_143e8f800(void)

undefined8 FUN_143e8f800(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e8f81e FUN_143e8f81e body=282 status=ok
// SIG undefined FUN_143e8f81e(void)

undefined8 * FUN_143e8f81e(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143e8d541);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143e8f938 FUN_143e8f938 body=1141 status=ok
// SIG undefined FUN_143e8f938(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8f938(void)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  char *local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1400b22c2(&local_48,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_48,&DAT_14cb90ad8);
  if (cVar1 == '\0') {
    _DAT_14cb90ad8 = 0;
    uRam000000014cb90ae0 = 0;
  }
  if (local_48 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/CohtmlPlugin",&PTR_FUN_14b450e20,2,&PTR_FUN_14b450dd0);
  lVar3 = 0;
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_FUN_14b450fc0 + lVar3),L"/Script/CohtmlPlugin",
                  *(undefined8 *)
                   ((longlong)&PTR_u_ECohtmlGamepadBehaviourOnFocusLo_14b450fc8 + lVar3),
                  *(undefined8 *)((longlong)&PTR_DAT_14b450fd0 + lVar3));
    lVar3 = lVar3 + 0x20;
  } while (lVar3 != 0x40);
  local_48 = "UnixSocketPath";
  local_40 = 0xe;
  local_3c = 0;
  uVar2 = FUN_14001a6c0(&local_48,1);
  _DAT_14cb90b80 = (ulonglong)uVar2;
  local_48 = (char *)((ulonglong)local_48 & 0xffffffff00000000);
  local_68._0_4_ = 0x60;
  FUN_140a6b41e(&DAT_14cb90ba0,L"r.CohtmlMipMapLODBias",&local_48,
                L"Applies a LOD bias to all Unreal textures used in Coherent UI");
  atexit(FUN_143e81348);
  local_48 = "AssetRegistry";
  local_40 = 0xd;
  local_3c = 0;
  uVar2 = FUN_14001a6c0(&local_48,1);
  _DAT_14cb90bd0 = (ulonglong)uVar2;
  local_48 = (char *)((ulonglong)local_48 & 0xffffffffffffff00);
  local_68._0_4_ = 0xc000001;
  FUN_140bd5914(&DAT_14cb90bd8,L"cohtml.ForceNoRawImages",&local_48,
                L"Forces the file manager to ignore raw image files and only use textures.\n");
  atexit(FUN_143e8467c);
  local_48 = (char *)CONCAT71(local_48._1_7_,1);
  local_68 = (ulonglong)local_68._4_4_ << 0x20;
  FUN_140bd5914(&DAT_14cb90bf0,L"cohtml.UseAtlas",&local_48,L"Use the atlas textures when possible."
               );
  atexit(FUN_143e846c1);
  local_48 = (char *)0x800000014b452238;
  local_34 = 0xc;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_146567d52(&local_48);
  DAT_14cb90cc0 = 0;
  DAT_14cb90cc8 = 0;
  atexit(FUN_143e8a374);
  DAT_14cb90d80 = 0;
  DAT_14cb90d88 = 0;
  atexit(FUN_143e8a3cf);
  DAT_14cb90cd0 = 0;
  DAT_14cb90cd8 = 0;
  atexit(FUN_143e8a42a);
  DAT_14cb90ce0 = 0;
  DAT_14cb90ce8 = 0;
  atexit(FUN_143e8a485);
  DAT_14cb90cb0 = 0;
  DAT_14cb90cb8 = 0;
  atexit(FUN_143e8a4e0);
  DAT_14cb90d20 = 0;
  DAT_14cb90d28 = 0;
  atexit(FUN_143e8a53b);
  DAT_14cb90cf0 = 0;
  DAT_14cb90cf8 = 0;
  atexit(FUN_143e8a596);
  DAT_14cb90c50 = 0;
  DAT_14cb90c58 = 0;
  atexit(FUN_143e8a5f1);
  DAT_14cb90d70 = 0;
  DAT_14cb90d78 = 0;
  atexit(FUN_143e8a64c);
  DAT_14cb90d00 = 0;
  DAT_14cb90d08 = 0;
  atexit(FUN_143e8a6a7);
  DAT_14cb90c08 = 0;
  DAT_14cb90c10 = 0;
  atexit(FUN_143e8a702);
  DAT_14cb90d10 = 0;
  DAT_14cb90d18 = 0;
  atexit(FUN_143e8a75d);
  DAT_14cb90d50 = 0;
  DAT_14cb90d58 = 0;
  atexit(FUN_143e8a7b8);
  DAT_14cb90d60 = 0;
  DAT_14cb90d68 = 0;
  atexit(FUN_143e8a813);
  DAT_14cb90c30 = 0;
  DAT_14cb90c38 = 0;
  atexit(FUN_143e8a86e);
  DAT_14cb90c18 = 0;
  DAT_14cb90c20 = 0;
  atexit(FUN_143e8a8c9);
  DAT_14cb90d30 = 0;
  DAT_14cb90d38 = 0;
  atexit(FUN_143e8a924);
  DAT_14cb90c60 = 0;
  DAT_14cb90c68 = 0;
  atexit(FUN_143e8a97f);
  DAT_14cb90c70 = 0;
  _DAT_14cb90c78 = 0;
  DAT_14cb90c80 = 0;
  _DAT_14cb90c88 = 0;
  _DAT_14cb90c90 = 2;
  atexit((_func_5014 *)&LAB_143e8a9da);
  DAT_14cb90d40 = 0;
  DAT_14cb90d48 = 0;
  atexit(FUN_143e8a9df);
  DAT_14cb90da0 = 0;
  DAT_14cb90da8 = 0;
  atexit(FUN_143e8aa3a);
  DAT_14cb90d90 = 0;
  DAT_14cb90d98 = 0;
  atexit(FUN_143e8aa95);
  DAT_14cb90bb8 = 0;
  _DAT_14cb90bc0 = 0;
  atexit((_func_5014 *)&LAB_143e8aaf0);
  DAT_14cb90c98 = TlsAlloc();
  DAT_14cb90c9c = TlsAlloc();
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e8fdb0 FUN_143e8fdb0 body=49 status=ok
// SIG undefined FUN_143e8fdb0(void)

void FUN_143e8fdb0(void)

{
  FUN_144760e21(DAT_14cb90dc8,DAT_14cb90dd0);
  if (DAT_14cb90dc8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143e8fdea FUN_143e8fdea body=45 status=ok
// SIG undefined FUN_143e8fdea(void)

void FUN_143e8fdea(longlong param_1)

{
  FUN_1404d1fb0();
  if ((DAT_14cb913f0 == 0) && ((*(byte *)(param_1 + 0x65) & 0x18) == 0x10)) {
    DAT_14cb913f0 = param_1;
  }
  return;
}



// FUNCTION 143e8fe18 FUN_143e8fe18 body=2124 status=ok
// SIG undefined FUN_143e8fe18(void)

/* WARNING: Removing unreachable block (ram,0x000143e9013f) */

ulonglong FUN_143e8fe18(longlong param_1)

{
  undefined ***pppuVar1;
  int *piVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  byte bVar7;
  undefined4 uVar8;
  int iVar9;
  DWORD DVar10;
  DWORD DVar11;
  undefined **ppuVar12;
  undefined4 *puVar13;
  uint *puVar14;
  undefined8 uVar15;
  uint uVar16;
  undefined ***pppuVar17;
  longlong lVar18;
  longlong *plVar19;
  uint *puVar20;
  undefined8 *puVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined1 auStack_2e8 [32];
  LARGE_INTEGER *local_2c8;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  longlong local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_290;
  LARGE_INTEGER local_288;
  LARGE_INTEGER local_280;
  undefined ***local_278;
  char local_270;
  undefined **local_268;
  longlong local_260;
  undefined **local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  if ((*(double *)(param_1 + 0x3c0) == 0.0) && (!NAN(*(double *)(param_1 + 0x3c0)))) {
    QueryPerformanceCounter(&local_288);
    *(double *)(param_1 + 0x3c0) = (double)local_288.QuadPart * DAT_14c83f420 + 16777216.0;
  }
  if (*(longlong *)(param_1 + 0x390) != 0) {
    if (0 < *(int *)(param_1 + 0x3d0)) {
      uVar16 = (*(uint **)(param_1 + 0x3c8))[1];
      if ((((uVar16 != 0) && (uVar4 = **(uint **)(param_1 + 0x3c8), -1 < (int)uVar4)) &&
          ((int)uVar4 < DAT_14c9647dc)) &&
         (((lVar18 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar18 != 0 &&
           (*(uint *)(lVar18 + 0x10) == uVar16)) && ((*(uint *)(lVar18 + 8) & 0x10200000) == 0)))) {
        QueryPerformanceCounter(&local_288);
        uVar23 = 0;
        if (4.0 < ((double)local_288.QuadPart * DAT_14c83f420 + 16777216.0) -
                  *(double *)(param_1 + 0x3c0)) {
          local_2a8 = 0;
          uStack_2a0 = 0;
          if (0 < *(int *)(param_1 + 0x3d0)) {
            lVar18 = 0;
            uVar15 = local_2b8;
            uVar6 = uStack_2b0;
            do {
              uStack_2b0 = uVar6;
              local_2b8 = uVar15;
              iVar9 = *(int *)(*(longlong *)(param_1 + 0x3c8) + 4 + lVar18 * 8);
              if (((iVar9 == 0) ||
                  (uVar16 = *(uint *)(*(longlong *)(param_1 + 0x3c8) + lVar18 * 8), (int)uVar16 < 0)
                  ) || ((DAT_14c9647dc <= (int)uVar16 ||
                        ((((plVar19 = (longlong *)
                                      ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8)
                                      ), plVar19 == (longlong *)0x0 || ((int)plVar19[2] != iVar9))
                          || ((*(uint *)(plVar19 + 1) & 0x10200000) != 0)) ||
                         (lVar22 = *plVar19, lVar22 == 0)))))) break;
              local_2b8 = 0;
              uStack_2b0 = 0;
              FUN_14005eb28(&local_2b8,0x80);
              local_270 = '\0';
              local_278 = &local_68;
              local_290 = *(undefined8 *)(*(longlong *)(lVar22 + 0x10) + 0x18);
              local_288.QuadPart = (LONGLONG)&local_268;
              local_280.QuadPart = (LONGLONG)&local_268;
              FUN_14005eb5c(&local_290,&local_288);
              if (local_278 <= (undefined ***)(local_280.QuadPart + 2)) {
                FUN_140213274(&local_288,1);
              }
              *(undefined2 *)local_280 = 0x20;
              local_280 = (LARGE_INTEGER)(local_280.QuadPart + 2);
              FUN_144750bde(lVar22,0,&local_288);
              FUN_1400020e8(&local_2b8,local_288.QuadPart,
                            (ulonglong)((longlong)local_280 - (longlong)local_288) >> 1);
              if (local_270 == '\x01') {
                FUN_1400020a8(local_288.QuadPart);
              }
              uVar23 = uStack_2a0;
              lVar22 = (longlong)(int)uStack_2a0;
              uVar16 = (int)uStack_2a0 + 1;
              uStack_2a0 = CONCAT44(uStack_2a0._4_4_,uVar16);
              if (uStack_2a0._4_4_ < uVar16) {
                FUN_1447a1bd6(&local_2a8,uVar23 & 0xffffffff);
              }
              lVar22 = lVar22 * 0x10;
              *(undefined8 *)(local_2a8 + lVar22) = 0;
              *(undefined8 *)(local_2a8 + lVar22) = local_2b8;
              local_2b8 = 0;
              uVar15 = local_2b8;
              *(undefined4 *)(local_2a8 + 8 + lVar22) = (undefined4)uStack_2b0;
              *(undefined4 *)(local_2a8 + 0xc + lVar22) = uStack_2b0._4_4_;
              uStack_2b0 = 0;
              uVar6 = uStack_2b0;
              uStack_2b0 = 0;
              local_2b8 = 0;
              lVar18 = lVar18 + 1;
            } while ((int)lVar18 < *(int *)(param_1 + 0x3d0));
            uVar23 = uStack_2a0 & 0xffffffff;
          }
          FUN_1447a1747(local_2a8,uVar23);
          if (local_2a8 != 0) {
            FUN_1400020a8();
          }
          uVar23 = 0;
        }
        goto LAB_143e902af;
      }
    }
    if (*(char *)(param_1 + 0x3b8) == '\0') {
      lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      iVar9 = *(int *)(lVar18 + 0xc60);
      if (DAT_14c86a9fc == 0) {
        if (iVar9 != 2) {
          if (iVar9 != 1) goto LAB_143e8ff1d;
          DVar10 = FUN_140ad26c0();
          DVar11 = GetCurrentThreadId();
          if (DVar10 == DVar11) goto LAB_143e8ff26;
          goto LAB_143e901c9;
        }
LAB_143e8ff26:
        *(undefined8 *)(param_1 + 0x3a0) = 0;
        pppuVar17 = *(undefined ****)(param_1 + 0x3a8);
        if (pppuVar17 != (undefined ***)0x0) {
          *(undefined8 *)(param_1 + 0x3a8) = 0;
          LOCK();
          pppuVar1 = pppuVar17 + 1;
          *(int *)pppuVar1 = *(int *)pppuVar1 + -1;
          UNLOCK();
          if (*(int *)pppuVar1 == 0) {
            (*(code *)**pppuVar17)(pppuVar17);
            LOCK();
            piVar2 = (int *)((longlong)pppuVar17 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              ppuVar12 = *pppuVar17;
              goto LAB_143e9026f;
            }
          }
        }
      }
      else {
LAB_143e8ff1d:
        if (iVar9 == 0x10) goto LAB_143e8ff26;
LAB_143e901c9:
        if (DAT_14ca9a438 == '\0') {
          if ((DAT_14c86a9f8 != '\x01') || (iVar9 = *(int *)(lVar18 + 0xc60), iVar9 == 2))
          goto LAB_143e8ff26;
          if (iVar9 == 1) {
            DVar10 = FUN_140ad26c0();
            DVar11 = GetCurrentThreadId();
            if (DVar10 == DVar11) goto LAB_143e8ff26;
          }
        }
        if (DAT_14ca9a43c == 0) {
          puVar3 = (undefined8 *)
                   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x308);
          puVar14 = (uint *)*puVar3;
          if (puVar14 != (uint *)0x0) goto LAB_143e90387;
          while( true ) {
            uVar16 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar16 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar16 | 1;
              __tlregdtor(&LAB_143ea3853);
            }
            lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            puVar13 = *(undefined4 **)(lVar18 + 0x310);
            *(undefined8 *)(lVar18 + 0x310) = 0;
            if (puVar13 == (undefined4 *)0x0) {
              puVar13 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar13 = 0xffffffff;
            *(undefined4 **)(puVar13 + 0x10) = puVar13 + 0x16;
            puVar13[0x12] = 0;
            *puVar3 = puVar13;
            FUN_140217a48(puVar3);
            puVar14 = (uint *)*puVar3;
LAB_143e90387:
            puVar21 = (undefined8 *)(*(longlong *)(puVar14 + 0x10) + 7U & 0xfffffffffffffff8);
            puVar20 = (uint *)(puVar21 + 0x16);
            uVar16 = puVar14[0x12];
            if (puVar20 <= puVar14 + 0x4000) break;
            while( true ) {
              *(uint **)(puVar14 + 0x10) = puVar14 + 0x4000;
              LOCK();
              uVar4 = *puVar14;
              *puVar14 = *puVar14 + uVar16 + 1;
              UNLOCK();
              if ((uVar4 ^ uVar16) != 0xffffffff) break;
              puVar14 = (uint *)*puVar3;
              *puVar14 = 0xffffffff;
              *(uint **)(puVar14 + 0x10) = puVar14 + 0x16;
              puVar14[0x12] = 0;
              *puVar3 = puVar14;
              puVar21 = (undefined8 *)((longlong)puVar14 + 0x5fU & 0xfffffffffffffff8);
              puVar20 = (uint *)(puVar21 + 0x16);
              uVar16 = 0;
              if (puVar20 <= puVar14 + 0x4000) {
                uVar16 = 1;
                goto LAB_143e90407;
              }
            }
          }
          uVar16 = uVar16 + 1;
LAB_143e90407:
          *(uint **)(puVar14 + 0x10) = puVar20;
          puVar14[0x12] = uVar16;
          iVar9 = 0;
          FUN_1447247dc(puVar21,0);
          *puVar21 = &PTR_FUN_14b4563c0;
          puVar21[0x15] = param_1 + 0x3a0;
          if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
            uVar16 = DAT_14c7585c8 >> 10 & 3;
            if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar16 < 2) {
              uVar23 = (ulonglong)(byte)(&DAT_149e38edc)[uVar16];
              iVar9 = 0;
            }
            else {
              uVar23 = 2;
            }
          }
          else {
            iVar9 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                    *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
            uVar23 = 5;
          }
          if (*(code **)(puVar21[0xe] + 0x18) != FUN_144713626) {
            (**(code **)(puVar21[0xe] + 0x18))(puVar21 + 0xe,puVar21 + 9);
          }
          puVar21[0xe] = LowLevelTasks::
                         TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                         TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                         ::vftable;
          puVar21[9] = puVar21;
          puVar21[10] = puVar21;
          lVar18 = *(longlong *)
                    (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x2b8);
          if (lVar18 == 0) {
            uVar5 = 1;
            if ((char)uVar23 != '\x06') {
              uVar5 = uVar23;
            }
            uVar23 = uVar5;
            uVar15 = 0;
          }
          else {
            if ((char)uVar23 == '\x06') {
              uVar23 = *(ulonglong *)(lVar18 + 0x38) >> 0x3b;
            }
            uVar15 = *(undefined8 *)(lVar18 + 0x30);
          }
          puVar21[0xf] = uVar15;
          puVar21[0x10] = uVar23 << 0x3b | 0xc00000527800b400;
          *(int *)((longlong)puVar21 + 0x1c) = iVar9;
          if (puVar21 == (undefined8 *)0x0) {
            local_288.s.LowPart._0_1_ = 1;
            FUN_1447439e4(0);
          }
          else {
            LOCK();
            *(int *)(puVar21 + 1) = *(int *)(puVar21 + 1) + 1;
            UNLOCK();
            local_288.s.LowPart._0_1_ = 1;
            FUN_1447439e4(puVar21);
            LOCK();
            piVar2 = (int *)(puVar21 + 1);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)*puVar21)(puVar21,1);
            }
          }
        }
        else {
          local_2c8 = &local_288;
          local_278 = (undefined ***)0x0;
          local_268 = &PTR_LAB_14b456380;
          local_288.QuadPart = (LONGLONG)FUN_143ea37d6;
          local_260 = param_1 + 0x3a0;
          FUN_14005a792(&DAT_14ca9a440,L"DestroyRenderer",&DAT_14cb91350);
          if ((undefined ***)local_288.QuadPart == (undefined ***)0x0) goto LAB_143e90272;
          pppuVar17 = local_278;
          if (local_278 == (undefined ***)0x0) {
            pppuVar17 = &local_268;
          }
          ppuVar12 = *pppuVar17;
LAB_143e9026f:
          (*(code *)ppuVar12[2])(pppuVar17);
        }
      }
LAB_143e90272:
      *(undefined1 *)(param_1 + 0x3b8) = 1;
      FUN_1400fb146(param_1 + 0x3b0,0);
    }
  }
  uVar8 = FUN_1447fa3ae(param_1 + 0x2b0);
  bVar7 = FUN_1447fa3ae(param_1 + 0x3b0);
  if (bVar7 != 0) {
    *(undefined1 *)(param_1 + 0x3b8) = 0;
  }
  uVar23 = (ulonglong)CONCAT31((int3)((uint)uVar8 >> 8),(byte)uVar8 & bVar7);
LAB_143e902af:
  if ((local_60 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar23;
}



// FUNCTION 143e90665 FUN_143e90665 body=49 status=ok
// SIG undefined FUN_143e90665(void)

void FUN_143e90665(void)

{
  FUN_144760e21(DAT_14cb90de0,DAT_14cb90de8);
  if (DAT_14cb90de0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143e90696 FUN_143e90696 body=148 status=ok
// SIG undefined FUN_143e90696(void)

void FUN_143e90696(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146568196(&local_20,param_1);
  *(undefined8 *)(param_1 + 0x30) = local_20;
  plVar2 = (longlong *)FUN_14001cc68(8,0x10);
  *plVar2 = 0;
  FUN_1409e1656(plVar2);
  *plVar2 = (longlong)&PTR_LAB_14b455580;
  plVar1 = *(longlong **)(param_1 + 0x60);
  if ((plVar1 != plVar2) && (*(longlong **)(param_1 + 0x60) = plVar2, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x30))(plVar1,1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e90742 FUN_143e90742 body=349 status=ok
// SIG undefined FUN_143e90742(void)

void FUN_143e90742(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  void *pvVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_88 [40];
  void *local_60;
  int local_58;
  undefined4 local_54;
  int local_50;
  void *local_48;
  int local_40;
  int local_38;
  ulonglong local_30;
  
  plVar3 = DAT_14cb90e08;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb90e08 != (longlong *)0x0) {
    iVar7 = (int)DAT_14cb90e08[1];
    do {
      if (iVar7 == 0) goto LAB_143e9087d;
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
    if (DAT_14cb90e00 != 0) {
      FUN_143e908a0();
      if (DAT_14cb913f0 == 0) {
        FUN_1403b99b6(&local_48,0x30,1,0x200000);
        pvVar4 = local_48;
        local_60 = (void *)0x0;
        lVar8 = (longlong)local_40;
        local_58 = local_40;
        if (lVar8 == 0) {
          local_54 = 0;
          local_40 = 0;
        }
        else {
          FUN_14010590e(&local_60,local_40,0);
          memcpy(local_60,pvVar4,lVar8 << 3);
        }
        pvVar4 = local_60;
        local_50 = local_38;
        if (local_38 != local_40) {
          lVar8 = *(longlong *)((longlong)local_60 + (longlong)local_38 * 8);
          cVar6 = FUN_140432338(lVar8);
          if (cVar6 != '\0') {
            DAT_14cb913f0 = lVar8;
          }
        }
        if (pvVar4 != (void *)0x0) {
          FUN_1400020a8(pvVar4);
        }
        if (local_48 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      FUN_1447f69b6(param_1 + 0x48);
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
LAB_143e9087d:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e908a0 FUN_143e908a0 body=186 status=ok
// SIG undefined FUN_143e908a0(void)

void FUN_143e908a0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)*param_1;
  QueryPerformanceCounter(&local_28);
  lVar2 = local_28.QuadPart - param_1[3];
  auVar3._8_4_ = (int)((ulonglong)lVar2 >> 0x20);
  auVar3._0_8_ = lVar2;
  auVar3._12_4_ = 0x45300000;
  (**(code **)(*plVar1 + 0x80))
            (plVar1,(((double)CONCAT44(0x43300000,(int)lVar2) - 4503599627370496.0) +
                    (auVar3._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418 * 1000.0);
  plVar1 = (longlong *)*param_1;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb90f30);
  (**(code **)(*plVar1 + 0xa8))(plVar1,DAT_14cb90f08,DAT_14cb90f10);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb90f30);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e90975 FUN_143e90975 body=55 status=ok
// SIG undefined FUN_143e90975(void)

void FUN_143e90975(void)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  plVar2 = DAT_14cb90e10;
  if (DAT_14cb90e10 != (longlong *)0x0) {
    puVar1 = (undefined8 *)*DAT_14cb90e10;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    FUN_1400020a8(plVar2);
    return;
  }
  return;
}



// FUNCTION 143e90a19 FUN_143e90a19 body=59 status=ok
// SIG undefined FUN_143e90a19(void)

void FUN_143e90a19(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14cb90e40;
  if (DAT_14cb90e40 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14cb90e40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143e90a49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143e90a6c FUN_143e90a6c body=282 status=ok
// SIG undefined FUN_143e90a6c(void)

void FUN_143e90a6c(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  void *local_68;
  ulonglong uStack_60;
  undefined8 local_50;
  int local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = (void *)0x0;
  uStack_60 = 0;
  local_50 = *param_1;
  local_48 = *(int *)(param_1 + 1) + -1;
  if (*(int *)(param_1 + 1) == 0) {
    local_48 = 0;
  }
  FUN_14475bf92(&local_78,&local_50);
  _Src = local_68;
  local_50 = 0;
  local_48 = (undefined4)local_78;
  uStack_44 = local_78._4_4_;
  uStack_40 = (undefined4)uStack_70;
  uStack_3c = uStack_70._4_4_;
  local_38 = (void *)0x0;
  lVar2 = (longlong)(int)uStack_60;
  local_30 = (int)uStack_60;
  if (lVar2 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,uStack_60 & 0xffffffff,0);
    memcpy(local_38,_Src,lVar2 * 2);
  }
  if (local_68 != (void *)0x0) {
    FUN_1400020a8(local_68);
  }
  lVar2 = FUN_1489da8a4(&local_50);
  if ((lVar2 != 0) && ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0)) {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_147a76346(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e90b88 FUN_143e90b88 body=69 status=ok
// SIG undefined FUN_143e90b88(void)

void FUN_143e90b88(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  if ((param_1 != 0) && ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0)) {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_147a76346(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1;
  }
  return;
}



// FUNCTION 143e90bce FUN_143e90bce body=1123 status=ok
// SIG undefined FUN_143e90bce(void)

void FUN_143e90bce(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined1 local_130;
  undefined1 local_128;
  longlong *local_120;
  undefined1 local_118 [8];
  longlong *local_110;
  undefined8 *local_108;
  int local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  void *local_e8;
  ulonglong uStack_e0;
  undefined8 *local_d0;
  undefined4 local_c8;
  uint uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  void *local_b8;
  uint local_b0;
  undefined4 local_ac;
  undefined8 **local_a8;
  undefined8 *local_a0;
  longlong local_98 [2];
  undefined8 *local_88;
  int local_80;
  longlong local_78;
  int local_70;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  void *pvStack_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = (void *)0x0;
  uStack_e0 = 0;
  local_68 = (undefined8 *)*param_1;
  iVar4 = (int)param_1[1] + -1;
  if ((int)param_1[1] == 0) {
    iVar4 = 0;
  }
  uStack_60 = CONCAT44(uStack_60._4_4_,iVar4);
  FUN_14475bf92(&local_f8);
  pvVar3 = local_e8;
  local_d0 = (undefined8 *)0x0;
  local_c8 = (undefined4)local_f8;
  uStack_c4 = local_f8._4_4_;
  uStack_c0 = (undefined4)uStack_f0;
  uStack_bc = uStack_f0._4_4_;
  local_b8 = (void *)0x0;
  lVar6 = (longlong)(int)(uint)uStack_e0;
  local_b0 = (uint)uStack_e0;
  if (lVar6 == 0) {
    local_ac = 0;
  }
  else {
    FUN_1446dd670(&local_b8,uStack_e0 & 0xffffffff,0);
    memcpy(local_b8,pvVar3,lVar6 * 2);
  }
  if (local_e8 != (void *)0x0) {
    FUN_1400020a8(local_e8);
  }
  lVar6 = FUN_14090ae24(&local_d0);
  pvVar3 = local_b8;
  if ((lVar6 != 0) && ((*(uint *)(lVar6 + 8) >> 0x1e & 1) == 0)) {
    if ((*(uint *)(lVar6 + 8) >> 0x1e & 1) == 0) {
      iVar4 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar4 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
        FUN_147a76346(param_2,iVar4);
      }
      *(longlong *)(*param_2 + (longlong)iVar4 * 8) = lVar6;
    }
    goto LAB_143e90fc1;
  }
  local_68 = local_d0;
  uStack_60._0_4_ = local_c8;
  uStack_60._4_4_ = uStack_c4;
  uStack_58._0_4_ = uStack_c0;
  uStack_58._4_4_ = uStack_bc;
  pvStack_50 = (void *)0x0;
  lVar6 = (longlong)(int)local_b0;
  local_48 = CONCAT44(local_48._4_4_,local_b0);
  if (lVar6 == 0) {
    local_48 = (ulonglong)local_b0;
  }
  else {
    FUN_1446dd670(&pvStack_50,local_b0,0);
    memcpy(pvStack_50,pvVar3,lVar6 * 2);
  }
  local_108 = (undefined8 *)0x0;
  local_100 = 0;
  local_40 = param_2;
  FUN_1446efa72(&local_108,0,5,0x10);
  local_100 = 5;
  *local_108 = &PTR_LAB_149e020b0;
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
  local_108[2] = lVar5;
  *local_108 = &PTR_FUN_14b4564e0;
  local_108[3] = local_68;
  *(int *)(local_108 + 4) = (int)uStack_60;
  *(uint *)((longlong)local_108 + 0x24) = uStack_60._4_4_;
  *(undefined4 *)(local_108 + 5) = (undefined4)uStack_58;
  *(undefined4 *)((longlong)local_108 + 0x2c) = uStack_58._4_4_;
  local_108[6] = pvStack_50;
  pvStack_50 = (void *)0x0;
  *(undefined4 *)(local_108 + 7) = (undefined4)local_48;
  *(undefined4 *)((longlong)local_108 + 0x3c) = local_48._4_4_;
  local_48 = 0;
  local_108[8] = local_40;
  lVar6 = FUN_14050fd64();
  local_68 = (undefined8 *)0x0;
  uStack_60 = (ulonglong)uStack_60._4_4_ << 0x20;
  FUN_14009d848(&local_68,&local_108);
  local_88 = local_68;
  local_80 = (int)uStack_60;
  local_120 = local_98;
  local_98[0] = 0;
  local_98[1] = 0;
  local_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  uStack_58 = 0;
  pvStack_50 = (void *)0x0;
  local_78 = *param_1;
  local_70 = (int)param_1[1] + -1;
  if ((int)param_1[1] == 0) {
    local_70 = 0;
  }
  FUN_14475bf92(&local_68);
  local_a0 = &local_48;
  local_a8 = &local_68;
  FUN_140a1e2b2(&local_78);
  local_128 = 0;
  local_130 = 0;
  local_138 = 0;
  FUN_140421d62(lVar6 + 0x1e8,local_118,&local_78,&local_88);
  FUN_140861e20(local_78,local_70);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (uStack_58 != 0) {
    FUN_1400020a8();
  }
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if (local_80 == 0) {
LAB_143e90f48:
    if (local_88 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_88 != (undefined8 *)0x0) {
    (**(code **)*local_88)(local_88,0);
    FUN_1446efa72(&local_88,0,0,0x10);
    local_80 = 0;
    goto LAB_143e90f48;
  }
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_110 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  if (local_100 != 0) {
    if (local_108 == (undefined8 *)0x0) goto LAB_143e90fc1;
    (**(code **)*local_108)(local_108,0);
    FUN_1446efa72(&local_108,0,0,0x10);
    local_100 = 0;
  }
  if (local_108 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143e90fc1:
  if (local_b8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e91032 FUN_143e91032 body=30 status=ok
// SIG undefined FUN_143e91032(void)

ulonglong FUN_143e91032(longlong param_1)

{
  ulonglong uVar1;
  
  if (*(longlong **)(param_1 + 8) == (longlong *)0x0) {
    uVar1 = 1;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 8))();
    uVar1 = uVar1 ^ 1;
  }
  return uVar1;
}



// FUNCTION 143e9105c FUN_143e9105c body=62 status=ok
// SIG undefined FUN_143e9105c(void)

undefined8 * FUN_143e9105c(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  
  if ((*(longlong **)(param_1 + 8) != (longlong *)0x0) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 8))(), cVar1 != '\0')) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8),param_2);
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 143e910ab FUN_143e910ab body=893 status=ok
// SIG undefined FUN_143e910ab(void)

bool FUN_143e910ab(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  ulonglong uVar6;
  bool bVar7;
  
  if (param_1 != 0) {
    puVar3 = *(undefined **)(param_1 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951f40) && (FUN_144b3d300(&DAT_14c951f40), DAT_14c951f40 == -1)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1))
      {
        uVar4 = FUN_140342cba();
        FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0,0x8001,0,uVar4,FUN_1468c7f1e);
        atexit(FUN_14280c819);
        _Init_thread_footer(&DAT_14c951a88);
      }
      FUN_14000176a(&DAT_14c951ef0,L"FMapProperty",0x400000000000,0,0x400000008001,0,&DAT_14c951a38,
                    FUN_140eb3340);
      atexit(FUN_142815b60);
      _Init_thread_footer(&DAT_14c951f40);
    }
    if (DAT_14c951ef8 == 0) {
      bVar7 = puVar3 != (undefined *)0x0;
      if (puVar3 != &DAT_14c951ef0 && bVar7) {
        do {
          puVar3 = *(undefined **)(puVar3 + 0x30);
          bVar7 = puVar3 != (undefined *)0x0;
          if (puVar3 == &DAT_14c951ef0) break;
        } while (puVar3 != (undefined *)0x0);
      }
      if (!bVar7) {
        return false;
      }
    }
    else if ((*(ulonglong *)(puVar3 + 0x18) & DAT_14c951ef8) == 0) {
      return false;
    }
    lVar1 = *(longlong *)(param_1 + 0x70);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c963e88) && (FUN_144b3d300(&DAT_14c963e88), DAT_14c963e88 == -1)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1))
      {
        uVar4 = FUN_140342cba();
        FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0,0x8001,0,uVar4,FUN_1468c7f1e);
        atexit(FUN_14280c819);
        _Init_thread_footer(&DAT_14c951a88);
      }
      FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0,0xc001,0,&DAT_14c951a38,FUN_140dafe7a);
      atexit(FUN_142829758);
      _Init_thread_footer(&DAT_14c963e88);
    }
    puVar3 = *(undefined **)(lVar1 + 8);
    if (DAT_14c963e40 == 0) {
      bVar7 = puVar3 != (undefined *)0x0;
      if (puVar3 != &DAT_14c963e38 && bVar7) {
        do {
          puVar3 = *(undefined **)(puVar3 + 0x30);
          bVar7 = puVar3 != (undefined *)0x0;
          if (puVar3 == &DAT_14c963e38) break;
        } while (puVar3 != (undefined *)0x0);
      }
      if (bVar7) goto LAB_143e91179;
    }
    else if ((*(ulonglong *)(puVar3 + 0x18) & DAT_14c963e40) != 0) {
LAB_143e91179:
      uVar4 = *(undefined8 *)(param_1 + 0x78);
      uVar6 = (ulonglong)(byte)param_2 ^ 0x13;
      ppuVar5 = &PTR_FUN_14b454510;
      do {
        cVar2 = (*(code *)*ppuVar5)(uVar4,param_2);
        if (cVar2 != '\0') goto LAB_143e911a2;
        ppuVar5 = ppuVar5 + 2;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      ppuVar5 = (undefined **)0x0;
LAB_143e911a2:
      return ppuVar5 != (undefined **)0x0;
    }
  }
  return false;
}



// FUNCTION 143e91428 FUN_143e91428 body=41 status=ok
// SIG undefined FUN_143e91428(void)

void FUN_143e91428(void)

{
  DAT_14cb90fa0 = 0;
  if (DAT_14cb90f98 != 0) {
    FUN_1400020a8();
  }
  FUN_145d71b50();
  return;
}



// FUNCTION 143e91451 FUN_143e91451 body=41 status=ok
// SIG undefined FUN_143e91451(void)

void FUN_143e91451(void)

{
  DAT_14cb90ff0 = 0;
  if (DAT_14cb90fe8 != 0) {
    FUN_1400020a8();
  }
  FUN_145d71bf0();
  return;
}



// FUNCTION 143e9147a FUN_143e9147a body=47 status=ok
// SIG undefined FUN_143e9147a(void)

void FUN_143e9147a(void)

{
  DAT_14cb91040 = 0;
  if (DAT_14cb91038 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&DAT_14cb90ff8);
  return;
}



// FUNCTION 143e914a9 FUN_143e914a9 body=91 status=ok
// SIG undefined FUN_143e914a9(void)

void FUN_143e914a9(void)

{
  if (DAT_14cb91050 != 0) {
    if (DAT_14cb91048 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb91048)(DAT_14cb91048,0);
    FUN_1446efa72(&DAT_14cb91048,0,0,0x10);
    DAT_14cb91050 = 0;
  }
  if (DAT_14cb91048 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143e91504 FUN_143e91504 body=91 status=ok
// SIG undefined FUN_143e91504(void)

void FUN_143e91504(void)

{
  if (DAT_14cb91060 != 0) {
    if (DAT_14cb91058 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb91058)(DAT_14cb91058,0);
    FUN_1446efa72(&DAT_14cb91058,0,0,0x10);
    DAT_14cb91060 = 0;
  }
  if (DAT_14cb91058 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143e9155f FUN_143e9155f body=359 status=ok
// SIG undefined FUN_143e9155f(void)

void FUN_143e9155f(longlong *param_1,longlong param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    iVar2 = (**(code **)(*param_1 + 0x280))();
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    iVar2 = (**(code **)(*param_1 + 0x280))(param_1);
    if (iVar2 == 5) {
      (**(code **)(*param_1 + 0x38))(param_1);
      if (DAT_14cb90fb0 != DAT_14cb90fdc) {
        uVar3 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        puVar4 = &DAT_14cb90fe0;
        if (DAT_14cb90fe8 != (undefined *)0x0) {
          puVar4 = DAT_14cb90fe8;
        }
        iVar2 = *(int *)(puVar4 + (ulonglong)(DAT_14cb90ff0 - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
        while (iVar2 != -1) {
          puVar1 = (ulonglong *)(DAT_14cb90fa8 + (longlong)iVar2 * 0x18);
          if (*puVar1 == param_3) {
            if ((puVar1 != (ulonglong *)0x0) && (puVar1 + 1 != (ulonglong *)0x0)) {
              (*(code *)puVar1[1])(param_1,param_2);
              goto LAB_143e916c7;
            }
            break;
          }
          iVar2 = (int)puVar1[2];
        }
      }
      FUN_1489dc1c9(param_1,param_2,param_3);
LAB_143e916c7:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    local_28 = *(undefined8 *)(param_3 + 0x18);
    FUN_1400021e4(&local_28,local_38);
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e916ee FUN_143e916ee body=69 status=ok
// SIG undefined FUN_143e916ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e916ee(void)

{
  _DAT_14cb91070 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e91730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb91078,1);
  return;
}



// FUNCTION 143e91733 FUN_143e91733 body=69 status=ok
// SIG undefined FUN_143e91733(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e91733(void)

{
  _DAT_14cb91080 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e91775. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb91088,1);
  return;
}



// FUNCTION 143e91778 FUN_143e91778 body=179 status=ok
// SIG undefined FUN_143e91778(void)

double FUN_143e91778(longlong param_1)

{
  longlong lVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 == 0) {
    dVar2 = 0.0;
  }
  else {
    if (*(longlong *)(param_1 + 0x158) != 0) {
      (**(code **)(**(longlong **)(param_1 + 8) + 0x38))();
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
    }
    lVar1 = *(longlong *)(param_1 + 0x58);
    QueryPerformanceCounter(&local_28);
    lVar1 = local_28.QuadPart - *(longlong *)(lVar1 + 0x18);
    auVar3._8_4_ = (int)((ulonglong)lVar1 >> 0x20);
    auVar3._0_8_ = lVar1;
    auVar3._12_4_ = 0x45300000;
    dVar2 = (((double)CONCAT44(0x43300000,(int)lVar1) - 4503599627370496.0) +
            (auVar3._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418 * 1000.0;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return dVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e9183e FUN_143e9183e body=407 status=ok
// SIG undefined FUN_143e9183e(void)

void FUN_143e9183e(longlong param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if ((*(longlong **)(param_1 + 0x148) != (longlong *)0x0) &&
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x148) + 0x78))(), cVar2 != '\0')) {
    plVar6 = *(longlong **)(param_1 + 0x148);
    cVar2 = (**(code **)(*plVar6 + 0x78))(plVar6);
    if ((cVar2 != '\0') && (cVar2 = (**(code **)(*plVar6 + 0x80))(plVar6), cVar2 == '\0')) {
      (**(code **)(*plVar6 + 0x88))(plVar6,param_3);
    }
  }
  if (((((*(int *)(param_1 + 0x154) != 0) && (uVar1 = *(uint *)(param_1 + 0x150), -1 < (int)uVar1))
       && ((int)uVar1 < DAT_14c9647dc)) &&
      ((plVar6 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar6 != (longlong *)0x0 && ((int)plVar6[2] == *(int *)(param_1 + 0x154))))) &&
     ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)) {
    if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
      lVar5 = *plVar6;
    }
    else {
      lVar5 = 0;
    }
    cVar2 = FUN_140432338(lVar5);
    if (cVar2 != '\0') {
      if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
        lVar5 = *plVar6;
      }
      else {
        lVar5 = 0;
      }
      if (((*(short *)(lVar5 + 0x1ac) != 0) || (**(longlong **)(lVar5 + 0x378) != 0)) &&
         (*(char *)(lVar5 + 0x1ae) == '\0')) {
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x180));
        if (*(int *)(lVar5 + 0x1c0) != *(int *)(lVar5 + 0x1ec)) {
          lVar3 = lVar5 + 0x1f0;
          if (*(longlong *)(lVar5 + 0x1f8) != 0) {
            lVar3 = *(longlong *)(lVar5 + 0x1f8);
          }
          iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(lVar5 + 0x200) - 1U & param_3) * 4);
          if (iVar4 != -1) {
            do {
              lVar3 = *(longlong *)(lVar5 + 0x1b8) + (longlong)iVar4 * 0x20;
              if (*(uint *)(*(longlong *)(lVar5 + 0x1b8) + (longlong)iVar4 * 0x20) == param_3) {
                if ((lVar3 + 8U & 0xfffffffffffffff7) != 0) {
                  (**(code **)(**(longlong **)(lVar3 + 0x10) + 0x10))();
                }
                break;
              }
              iVar4 = *(int *)(lVar3 + 0x18);
            } while (iVar4 != -1);
          }
        }
                    /* WARNING: Could not recover jumptable at 0x000143e919c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x180));
        return;
      }
    }
  }
  return;
}



// FUNCTION 143e919d6 FUN_143e919d6 body=161 status=ok
// SIG undefined FUN_143e919d6(void)

void FUN_143e919d6(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  
  cVar1 = (**(code **)(*param_1 + 0x80))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000143e919f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x68))(param_1);
    return;
  }
  lVar2 = (**(code **)(*param_1 + 0x98))(param_1);
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0x10) == '\0')) {
    auVar4 = roundpd(ZEXT816(0x417c9c3808000000),ZEXT816(0x417c9c3808000000),1);
    lVar3 = (longlong)auVar4._0_8_ / 10000;
    if (0xfffffffe < lVar3) {
      lVar3 = 0xffffffff;
    }
    if (lVar3 < 1) {
      lVar3 = 0;
    }
    (**(code **)(**(longlong **)(lVar2 + 8) + 0x20))(*(longlong **)(lVar2 + 8),lVar3,0);
    (**(code **)(*param_1 + 0x60))(param_1);
    *(undefined1 *)(lVar2 + 0x10) = 1;
  }
  return;
}



// FUNCTION 143e91a78 FUN_143e91a78 body=2493 status=ok
// SIG undefined FUN_143e91a78(void)

void FUN_143e91a78(longlong param_1)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  size_t sVar7;
  char *pcVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  ulonglong *puVar12;
  longlong *plVar13;
  undefined4 *puVar14;
  undefined2 *puVar15;
  undefined4 *puVar16;
  bool bVar17;
  undefined1 auStack_278 [32];
  char *local_258;
  ulonglong local_250;
  ulonglong *local_248;
  ulonglong local_240;
  longlong local_238;
  undefined4 local_22c;
  longlong *local_228;
  longlong local_220;
  undefined8 local_218;
  undefined2 *local_210;
  int local_208;
  longlong local_200;
  undefined8 uStack_1f8;
  char *local_1f0;
  undefined4 uStack_1e8;
  uint uStack_1e4;
  longlong local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  char *local_88;
  undefined8 uStack_80;
  char *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_278;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x180));
  if (((*(short *)(param_1 + 0x1ac) == 0) && (**(longlong **)(param_1 + 0x378) == 0)) ||
     (*(char *)(param_1 + 0x1ae) == '\x01')) {
    FUN_1489ede82(param_1 + 0x1b8,*(undefined4 *)(param_1 + 0x1a8));
    FUN_1489edfd4(param_1 + 0x208,*(undefined4 *)(param_1 + 0x1a8));
    FUN_1489ee126(param_1 + 600,*(undefined4 *)(param_1 + 0x1a8));
  }
  else if (*(int *)(param_1 + 0x1c0) != *(int *)(param_1 + 0x1ec)) {
    lVar6 = param_1 + 0x1f0;
    if (*(longlong *)(param_1 + 0x1f8) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x1f8);
    }
    iVar11 = *(int *)(lVar6 + (ulonglong)
                              (*(int *)(param_1 + 0x200) - 1U & *(uint *)(param_1 + 0x1a8)) * 4);
    if (iVar11 != -1) {
      do {
        lVar6 = *(longlong *)(param_1 + 0x1b8) + (longlong)iVar11 * 0x20;
        if (*(uint *)(*(longlong *)(param_1 + 0x1b8) + (longlong)iVar11 * 0x20) ==
            *(uint *)(param_1 + 0x1a8)) {
          LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x180));
          if (lVar6 == 0) goto LAB_143e91b58;
          (**(code **)(**(longlong **)(lVar6 + 0x10) + 0x20))
                    (*(longlong **)(lVar6 + 0x10),0xffffffff,0);
          FUN_1489e066c(param_1);
          if (*(int *)(param_1 + 0x210) == *(int *)(param_1 + 0x23c)) goto LAB_143e91b58;
          lVar6 = param_1 + 0x240;
          if (*(longlong *)(param_1 + 0x248) != 0) {
            lVar6 = *(longlong *)(param_1 + 0x248);
          }
          iVar11 = *(int *)(lVar6 + (ulonglong)
                                    (*(int *)(param_1 + 0x250) - 1U & *(uint *)(param_1 + 0x1a8)) *
                                    4);
          if (iVar11 == -1) goto LAB_143e91b58;
          local_228 = (longlong *)(param_1 + 0x208);
          goto LAB_143e91c67;
        }
        iVar11 = *(int *)(lVar6 + 0x18);
      } while (iVar11 != -1);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_278);
LAB_143e91cfd:
  if (*(int *)(param_1 + 0x260) != *(int *)(param_1 + 0x28c)) {
    lVar6 = *(longlong *)(param_1 + 0x298);
    if (*(longlong *)(param_1 + 0x298) == 0) {
      lVar6 = param_1 + 0x290;
    }
    iVar11 = *(int *)(lVar6 + (ulonglong)
                              (*(int *)(param_1 + 0x2a0) - 1U & *(uint *)(param_1 + 0x1a8)) * 4);
    if (iVar11 != -1) {
      do {
        lVar6 = *(longlong *)(param_1 + 600) + (longlong)iVar11 * 0x20;
        if (*(uint *)(*(longlong *)(param_1 + 600) + (longlong)iVar11 * 0x20) ==
            *(uint *)(param_1 + 0x1a8)) {
          plVar13 = (longlong *)(lVar6 + 8);
          if (plVar13 != (longlong *)0x0 && lVar6 != 0) {
            pcVar8 = *(char **)(puVar16 + 0x30);
            local_f0 = 0;
            if (pcVar8 == (char *)0x0) {
              local_e8 = 0;
              local_e0 = 0;
            }
            else {
              sVar7 = strlen(pcVar8);
              FUN_1446e6fe8(&local_1f0,pcVar8,sVar7 & 0xffffffff,1);
            }
            FUN_140056680(&local_210,local_e8);
            if (local_f0 != 0) {
              FUN_1400020a8();
            }
            if (*(int *)(param_1 + 0x2c0) == *(int *)(param_1 + 0x2ec)) goto LAB_143e9209d;
            lVar9 = *(longlong *)(param_1 + 0x2f8);
            if (*(longlong *)(param_1 + 0x2f8) == 0) {
              lVar9 = local_220;
            }
            iVar11 = *(int *)(lVar9 + (ulonglong)(*(int *)(param_1 + 0x300) - 1U & puVar16[0x2e]) *
                                      4);
            if (iVar11 == -1) goto LAB_143e9209d;
            goto LAB_143e91e3d;
          }
          break;
        }
        iVar11 = *(int *)(lVar6 + 0x18);
      } while (iVar11 != -1);
    }
  }
  goto LAB_143e920ac;
  while (iVar11 = *(int *)(lVar9 + 0x30), iVar11 != -1) {
LAB_143e91e3d:
    lVar9 = *(longlong *)(param_1 + 0x2b8) + (longlong)iVar11 * 0x38;
    if (*(uint *)(*(longlong *)(param_1 + 0x2b8) + (longlong)iVar11 * 0x38) == puVar16[0x2e]) {
      puVar12 = (ulonglong *)(lVar9 + 8);
      if (puVar12 != (ulonglong *)0x0 && lVar9 != 0) {
        local_250 = *puVar12;
        local_258 = (char *)CONCAT44(local_258._4_4_,puVar16[1]);
        local_240 = CONCAT44(local_240._4_4_,puVar16[2]);
        local_248 = puVar12;
        cVar4 = FUN_140432338();
        if (cVar4 != '\0') {
          if (((int)local_258 != *(int *)(lVar9 + 0x20)) ||
             ((int)local_240 != *(int *)(lVar9 + 0x24))) {
            *(int *)(lVar9 + 0x20) = (int)local_258;
            *(int *)(lVar9 + 0x24) = (int)local_240;
            FUN_143738fbe(*(undefined8 *)(lVar9 + 0x10));
            local_258 = (char *)FUN_14001cc68(0x18,0x10);
            FUN_1456bc4c4(local_258,*(undefined8 *)(lVar9 + 0x10));
            puVar3 = *(undefined8 **)(lVar9 + 0x18);
            *(char **)(lVar9 + 0x18) = local_258;
            if (puVar3 != (undefined8 *)0x0) {
              (**(code **)*puVar3)(puVar3,1);
            }
            local_258 = *(char **)(lVar9 + 0x10);
            if (local_258 == (char *)0x0) {
              puVar15 = &DAT_149dfb77a;
              if (local_208 != 0) {
                puVar15 = local_210;
              }
              FUN_140033559(".\\../Plugins/Runtime/Coherent/CohtmlPlugin/Source/CohtmlPlugin/Private/RenoirCustomEffectRenderer.cpp"
                            ,0x2c4,L"Failed to create transient texture for \'%s\' custom effect!",
                            puVar15);
              local_258 = *(char **)(lVar9 + 0x10);
            }
            local_240 = *local_248;
            FUN_1446f470e(&local_218,L"CohCustomEffectTexParam",1);
            FUN_14016d8b0(local_240,local_218,local_258);
            local_250 = *local_248;
          }
          local_1f0 = "CohtmlPlugin";
          uStack_1e8 = 0xc;
          uStack_1e4 = uStack_1e4 & 0xffffff00;
          pcVar8 = (char *)FUN_14001a6c0(&local_1f0,1);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c874a20) &&
             (local_258 = pcVar8, FUN_144b3d300(&DAT_14c874a20), pcVar8 = local_258,
             DAT_14c874a20 == -1)) {
            FUN_145762954(&DAT_14c874628);
            DAT_14c874a18 = 1;
            atexit(FUN_14278de47);
            _Init_thread_footer(&DAT_14c874a20);
            pcVar8 = local_258;
          }
          FUN_1402c9134(&DAT_14c874628,(ulonglong)pcVar8 & 0xffffffff,&local_1f0,1);
          if ((DAT_14cb90d60 != (longlong *)0x0 && DAT_14cb90d68 != 0) &&
             (cVar4 = (**(code **)(*DAT_14cb90d60 + 0x30))(), cVar4 != '\0')) {
            local_d8 = 0;
            uStack_d0 = 0;
            local_78 = (char *)0x0;
            uStack_70 = 0;
            local_88 = (char *)0x0;
            uStack_80 = 0;
            pcVar8 = *(char **)(puVar16 + 0x30);
            local_f0 = 0;
            if (pcVar8 == (char *)0x0) {
              local_e8 = 0;
              local_e0 = 0;
            }
            else {
              local_258 = pcVar8;
              sVar7 = strlen(pcVar8);
              FUN_1446e6fe8(&local_1f0,local_258,sVar7 & 0xffffffff,1);
            }
            FUN_140056680(&local_200,local_e8);
            if (local_d8 != 0) {
              FUN_1400020a8();
            }
            local_d8 = local_200;
            uStack_d0 = uStack_1f8;
            local_200 = 0;
            uStack_1f8 = 0;
            if (local_f0 != 0) {
              FUN_1400020a8();
            }
            local_c8 = puVar16[0x32];
            uStack_c4 = puVar16[0x33];
            uStack_c0 = puVar16[0x34];
            uStack_bc = puVar16[0x35];
            local_b8 = puVar16[0x36];
            uStack_b4 = puVar16[0x37];
            uStack_b0 = puVar16[0x38];
            uStack_ac = puVar16[0x39];
            local_a8 = puVar16[0x3a];
            uStack_a4 = puVar16[0x3b];
            uStack_a0 = puVar16[0x3c];
            uStack_9c = puVar16[0x3d];
            local_98 = puVar16[0x3e];
            uStack_94 = puVar16[0x3f];
            uStack_90 = puVar16[0x40];
            uStack_8c = puVar16[0x41];
            if (*(longlong *)(puVar16 + 0x42) != 0) {
              FUN_1400b22c2(&local_1f0);
              if (local_88 != (char *)0x0) {
                FUN_1400020a8();
              }
              local_88 = local_1f0;
              uStack_80 = CONCAT44(uStack_1e4,uStack_1e8);
            }
            if (*(longlong *)(puVar16 + 0x44) != 0) {
              FUN_1400b22c2(&local_1f0);
              if (local_78 != (char *)0x0) {
                FUN_1400020a8();
              }
              local_78 = local_1f0;
              uStack_70 = CONCAT44(uStack_1e4,uStack_1e8);
            }
            plVar10 = DAT_14cb90d60;
            if (DAT_14cb90d68 == 0) {
              plVar10 = (longlong *)0x0;
            }
            (**(code **)(*plVar10 + 0x58))(plVar10,local_250,&local_d8);
            FUN_1489e0a6a(&local_d8);
          }
          local_22c = puVar16[0x2e];
          uVar2 = *local_248;
          local_240 = 0;
          local_258 = (char *)0x0;
          local_248 = (ulonglong *)0x0;
          if (uVar2 != 0) {
            uVar5 = *(uint *)(uVar2 + 0xc);
            local_258 = (char *)(ulonglong)uVar5;
            if ((int)uVar5 < DAT_14c9647dc) {
              local_250 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
            }
            else {
              local_250 = 0;
            }
            local_248 = (ulonglong *)(ulonglong)*(uint *)(local_250 + 0x10);
            if (*(uint *)(local_250 + 0x10) == 0) {
              LOCK();
              iVar11 = DAT_14c964868 + 1;
              UNLOCK();
              local_248 = (ulonglong *)(ulonglong)(DAT_14c964868 + 1);
              bVar17 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar11;
              if (bVar17) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,local_248);
              }
              LOCK();
              uVar5 = *(uint *)(local_250 + 0x10);
              bVar17 = uVar5 == 0;
              if (bVar17) {
                *(uint *)(local_250 + 0x10) = (uint)local_248;
                uVar5 = 0;
              }
              UNLOCK();
              if (bVar17) {
                uVar5 = (uint)local_248;
              }
              local_248 = (ulonglong *)(ulonglong)uVar5;
            }
          }
          local_250 = 0;
          if (*(longlong *)(lVar9 + 0x10) != 0) {
            uVar5 = *(uint *)(*(longlong *)(lVar9 + 0x10) + 0xc);
            local_240 = (ulonglong)uVar5;
            if ((int)uVar5 < DAT_14c9647dc) {
              local_238 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
            }
            else {
              local_238 = 0;
            }
            local_250 = (ulonglong)*(uint *)(local_238 + 0x10);
            if (*(uint *)(local_238 + 0x10) == 0) {
              LOCK();
              iVar11 = DAT_14c964868 + 1;
              UNLOCK();
              local_250 = (ulonglong)(DAT_14c964868 + 1);
              bVar17 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar11;
              if (bVar17) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,local_250);
              }
              LOCK();
              uVar5 = *(uint *)(local_238 + 0x10);
              bVar17 = uVar5 == 0;
              if (bVar17) {
                *(uint *)(local_238 + 0x10) = (uint)local_250;
                uVar5 = 0;
              }
              UNLOCK();
              if (bVar17) {
                uVar5 = (uint)local_250;
              }
              local_250 = (ulonglong)uVar5;
            }
          }
          uVar1 = *puVar16;
          *(undefined4 *)(lVar9 + 0x28) = uVar1;
          iVar11 = *(int *)(lVar6 + 0x10);
          uVar5 = iVar11 + 1;
          *(uint *)(lVar6 + 0x10) = uVar5;
          if (*(uint *)(lVar6 + 0x14) < uVar5) {
            FUN_1489ee5a0(plVar13);
          }
          lVar6 = *plVar13;
          lVar9 = (longlong)iVar11 * 0x1c;
          *(ulonglong *)(lVar6 + lVar9) =
               (ulonglong)local_258 & 0xffffffff | (longlong)local_248 << 0x20;
          *(ulonglong *)(lVar6 + 8 + lVar9) = local_250 << 0x20 | local_240 & 0xffffffff;
          *(undefined4 *)(lVar6 + 0x10 + lVar9) = local_22c;
          *(undefined4 *)(lVar6 + 0x14 + lVar9) = uVar1;
          *(undefined1 *)(lVar6 + 0x18 + lVar9) = 1;
        }
      }
      break;
    }
  }
LAB_143e9209d:
  if (local_210 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_143e920ac:
  puVar16 = puVar16 + 0x4a;
  if (puVar16 == puVar14) {
LAB_143e91ca2:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_278);
  }
  goto LAB_143e91cfd;
  while (iVar11 = *(int *)(lVar6 + 0x18), iVar11 != -1) {
LAB_143e91c67:
    lVar6 = *local_228 + (longlong)iVar11 * 0x20;
    if (*(uint *)(*local_228 + (longlong)iVar11 * 0x20) == *(uint *)(param_1 + 0x1a8)) {
      if ((lVar6 + 8U & 0xfffffffffffffff7) != 0) {
        if ((longlong)*(int *)(lVar6 + 0x10) == 0) goto LAB_143e91ca2;
        puVar16 = *(undefined4 **)(lVar6 + 8);
        puVar14 = puVar16 + (longlong)*(int *)(lVar6 + 0x10) * 0x4a;
        local_220 = param_1 + 0x2f0;
        goto LAB_143e91cfd;
      }
      break;
    }
  }
LAB_143e91b58:
  if ((local_60 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e92482 FUN_143e92482 body=1292 status=ok
// SIG undefined FUN_143e92482(void)

void FUN_143e92482(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 auStack_b8 [32];
  code **local_98;
  code *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_143e924ce;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_143e924d3;
      goto LAB_143e9250e;
    }
  }
  else {
LAB_143e924ce:
    if (iVar6 != 0x10) {
LAB_143e9250e:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_143e924d3;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_143e924d3;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_143e925e4;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_143ea3853);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          FUN_140217a48(puVar2);
          puVar10 = (uint *)*puVar2;
LAB_143e925e4:
          puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar16 + 0x16);
          uVar12 = puVar10[0x12];
          if (puVar14 <= puVar10 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
            LOCK();
            uVar3 = *puVar10;
            *puVar10 = *puVar10 + uVar12 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar12) != 0xffffffff) break;
            puVar10 = (uint *)*puVar2;
            *puVar10 = 0xffffffff;
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar2 = puVar10;
            puVar16 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(puVar16 + 0x16);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_143e92664;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_143e92664:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14b456788;
        puVar16[0x15] = param_1;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
            iVar6 = 0;
          }
          else {
            uVar15 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar15 = 5;
        }
        if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
        }
        puVar16[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar16[9] = puVar16;
        puVar16[10] = puVar16;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar15 != '\x06') {
            uVar5 = uVar15;
          }
          uVar15 = uVar5;
          uVar11 = 0;
        }
        else {
          if ((char)uVar15 == '\x06') {
            uVar15 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar16[0xf] = uVar11;
        puVar16[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar16 + 0x1c) = iVar6;
        if (puVar16 == (undefined8 *)0x0) {
          local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(puVar16);
          LOCK();
          piVar1 = (int *)(puVar16 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar16)(puVar16,1);
          }
        }
      }
      else {
        local_98 = local_88;
        local_78 = (undefined ***)0x0;
        local_68 = &PTR_LAB_14b456740;
        local_88[0] = FUN_143ea5514;
        local_60 = param_1;
        FUN_14005a792(&DAT_14ca9a440,L"DestroyViewRenderer",&DAT_14cb91358);
        if (local_88[0] != (code *)0x0) {
          pppuVar13 = local_78;
          if (local_78 == (undefined ***)0x0) {
            pppuVar13 = &local_68;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_143e928bd;
    }
  }
LAB_143e924d3:
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 8))();
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
LAB_143e928bd:
  FUN_1400fb146(param_1 + 0x20,0);
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 8) + 8))();
    *(undefined8 *)(param_1 + 8) = 0;
  }
  FUN_145c22d2a(param_1,param_2,param_3,param_1 + 0xf0);
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e92990 FUN_143e92990 body=366 status=ok
// SIG undefined FUN_143e92990(void)

void FUN_143e92990(longlong param_1,ulonglong *param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = *(longlong *)(param_1 + 0x140);
  if (1 < *(uint *)(lVar4 + 0x2c)) {
    lVar3 = *(longlong *)(lVar4 + 0x58);
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
      lVar4 = *(longlong *)(param_1 + 0x140);
    }
    lVar4 = *(longlong *)(lVar4 + 0x60);
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    uStack_40 = DAT_14c9a52a0;
    local_48 = DAT_14c9a5298;
    uStack_3c = (undefined4)DAT_14c9a5298;
    uStack_38 = (undefined4)((ulonglong)DAT_14c9a5298 >> 0x20);
    uStack_34 = DAT_14c9a52a0;
    local_28 = DAT_14c9a52a0;
    uStack_30 = DAT_14c9a5298;
    puVar5 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar5 + 0xc;
    if ((undefined8 *)param_2[1] < puVar6) {
      FUN_140023dd8(param_2,0x68);
      puVar5 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar6 = puVar5 + 0xc;
    }
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *param_2 = (ulonglong)puVar6;
    *(undefined8 **)param_2[6] = puVar5;
    param_2[6] = (ulonglong)(puVar5 + 1);
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_14a289d68;
    puVar5[2] = local_48;
    puVar5[3] = CONCAT44(uStack_3c,uStack_40);
    *(undefined4 *)(puVar5 + 4) = uStack_38;
    *(undefined4 *)((longlong)puVar5 + 0x24) = uStack_34;
    *(undefined4 *)(puVar5 + 5) = (undefined4)uStack_30;
    *(undefined4 *)((longlong)puVar5 + 0x2c) = uStack_30._4_4_;
    *(undefined4 *)(puVar5 + 6) = local_28;
    *(undefined4 *)((longlong)puVar5 + 0x34) = 0;
    *(undefined4 *)(puVar5 + 7) = 0;
    *(undefined4 *)((longlong)puVar5 + 0x3c) = 1;
    *(undefined4 *)(puVar5 + 8) = 0;
    *(undefined8 *)((longlong)puVar5 + 0x44) = 0x100000000;
    puVar5[10] = lVar3;
    puVar5[0xb] = lVar4;
    if (lVar4 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812(lVar4);
      }
    }
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
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



// FUNCTION 143e92b0e FUN_143e92b0e body=543 status=ok
// SIG undefined FUN_143e92b0e(void)

void FUN_143e92b0e(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  wchar_t *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  code **local_c0;
  code *local_b8;
  code *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined2 local_5c;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined8 local_44;
  undefined1 local_39;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar4 = (longlong *)
           (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x68) + 8))
                     ((longlong *)**(undefined8 **)(param_1 + 0x68),*(undefined8 *)(param_1 + 8),
                      &local_39);
  *(longlong **)(param_1 + 0x30) = plVar4;
  lVar5 = *(longlong *)(param_1 + 0x140);
  if (((lVar5 == 0) || (*(longlong *)(lVar5 + 0x58) == 0)) || (*(char *)(param_1 + 0xf3) != '\0')) {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x68))();
    uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x70))();
    uVar1 = *(undefined4 *)(param_1 + 0x130);
    if (DAT_14cb907b8 == (longlong *)0x0) {
      local_c0 = &local_38;
      local_38 = FUN_1449e2820;
      local_b0 = FUN_14081d0ea;
      local_b8 = FUN_14081d0ea;
      local_c8 = &LAB_1489c8acb;
      local_d0 = &LAB_146027b0e;
      local_d8 = L"Engine";
      local_e0 = 0;
      local_e8 = 0x10000006;
      local_f0 = 8;
      local_f8 = 0x128;
      FUN_14081cfa3(L"/Script/CohtmlPlugin",L"CohtmlSettings",&DAT_14cb907b8,&DAT_1489c8aca);
    }
    plVar4 = DAT_14cb907b8;
    lVar5 = DAT_14cb907b8[0x22];
    if (lVar5 == 0) {
      (**(code **)(*DAT_14cb907b8 + 1000))();
      lVar5 = plVar4[0x22];
    }
    local_58 = 0x34;
    if (*(char *)(lVar5 + 0x76) != '\x01') {
      local_58 = 0;
    }
    if (*(char *)(lVar5 + 0x76) == '\x02') {
      local_58 = 1;
    }
    local_68 = 1;
    local_60 = 0;
    local_5c = 1;
    local_54 = 0;
    uStack_4c = 0;
    local_44 = 0;
    local_70 = uVar2;
    local_6c = uVar3;
    local_64 = uVar1;
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x18))(*(longlong **)(param_1 + 0x30),0,0);
  }
  else {
    lVar6 = lVar5;
    if (1 < *(uint *)(lVar5 + 0x2c)) {
      FUN_1418b541a(lVar5);
      plVar4 = *(longlong **)(param_1 + 0x30);
      lVar6 = *(longlong *)(param_1 + 0x140);
    }
    local_78 = *(undefined4 *)(lVar5 + 0x50);
    local_a8 = *(undefined4 *)(lVar5 + 0x20);
    uStack_a4 = *(undefined4 *)(lVar5 + 0x24);
    uStack_a0 = *(undefined4 *)(lVar5 + 0x28);
    uStack_9c = *(undefined4 *)(lVar5 + 0x2c);
    local_98 = *(undefined4 *)(lVar5 + 0x30);
    uStack_94 = *(undefined4 *)(lVar5 + 0x34);
    uStack_90 = *(undefined4 *)(lVar5 + 0x38);
    uStack_8c = *(undefined4 *)(lVar5 + 0x3c);
    local_88 = *(undefined4 *)(lVar5 + 0x40);
    uStack_84 = *(undefined4 *)(lVar5 + 0x44);
    uStack_80 = *(undefined4 *)(lVar5 + 0x48);
    uStack_7c = *(undefined4 *)(lVar5 + 0x4c);
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar6,0);
  }
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e92d2e FUN_143e92d2e body=490 status=ok
// SIG undefined FUN_143e92d2e(void)

void FUN_143e92d2e(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  wchar_t *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  code **local_c0;
  code *local_b8;
  code *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (DAT_14cb907b8 == (longlong *)0x0) {
    local_c0 = &local_30;
    local_30 = FUN_1449e2820;
    local_b0 = FUN_14081d0ea;
    local_b8 = FUN_14081d0ea;
    local_c8 = &LAB_1489c8acb;
    local_d0 = &LAB_146027b0e;
    local_d8 = L"Engine";
    local_e0 = 0;
    local_e8 = 0x10000006;
    local_f0 = 8;
    local_f8 = 0x128;
    FUN_14081cfa3(L"/Script/CohtmlPlugin",L"CohtmlSettings",&DAT_14cb907b8,&DAT_1489c8aca);
  }
  plVar3 = DAT_14cb907b8;
  lVar2 = DAT_14cb907b8[0x22];
  if (lVar2 == 0) {
    (**(code **)(*DAT_14cb907b8 + 1000))();
    lVar2 = plVar3[0x22];
  }
  uVar4 = 0x34;
  if (*(char *)(lVar2 + 0x76) != '\x01') {
    uVar4 = 0;
  }
  uVar1 = 1;
  if (*(char *)(lVar2 + 0x76) != '\x02') {
    uVar1 = uVar4;
  }
  lVar2 = *(longlong *)(param_1 + 0x140);
  *(undefined4 *)(lVar2 + 0x20) = param_2;
  *(undefined4 *)(lVar2 + 0x24) = param_3;
  *(undefined4 *)(lVar2 + 0x38) = uVar1;
  lVar5 = *(longlong *)(param_1 + 0x140);
  if (((lVar5 == 0) || (*(longlong *)(lVar5 + 0x58) == 0)) || (*(char *)(param_1 + 0xf3) != '\0')) {
    plVar3 = *(longlong **)(param_1 + 0x30);
    local_38 = *(undefined4 *)(lVar2 + 0x50);
    local_68 = *(undefined4 *)(lVar2 + 0x20);
    uStack_64 = *(undefined4 *)(lVar2 + 0x24);
    uStack_60 = *(undefined4 *)(lVar2 + 0x28);
    uStack_5c = *(undefined4 *)(lVar2 + 0x2c);
    local_58 = *(undefined4 *)(lVar2 + 0x30);
    uStack_54 = *(undefined4 *)(lVar2 + 0x34);
    uStack_50 = *(undefined4 *)(lVar2 + 0x38);
    uStack_4c = *(undefined4 *)(lVar2 + 0x3c);
    local_48 = *(undefined4 *)(lVar2 + 0x40);
    uStack_44 = *(undefined4 *)(lVar2 + 0x44);
    uStack_40 = *(undefined4 *)(lVar2 + 0x48);
    uStack_3c = *(undefined4 *)(lVar2 + 0x4c);
    lVar2 = *plVar3;
    lVar5 = 0;
  }
  else {
    if (1 < *(uint *)(lVar5 + 0x2c)) {
      *(undefined4 *)(lVar5 + 0x20) = param_2;
      *(undefined4 *)(lVar5 + 0x24) = param_3;
      FUN_1418b541a(*(undefined8 *)(param_1 + 0x140));
      lVar5 = *(longlong *)(param_1 + 0x140);
    }
    plVar3 = *(longlong **)(param_1 + 0x30);
    local_78 = *(undefined4 *)(lVar2 + 0x50);
    local_a8 = *(undefined4 *)(lVar2 + 0x20);
    uStack_a4 = *(undefined4 *)(lVar2 + 0x24);
    uStack_a0 = *(undefined4 *)(lVar2 + 0x28);
    uStack_9c = *(undefined4 *)(lVar2 + 0x2c);
    local_98 = *(undefined4 *)(lVar2 + 0x30);
    uStack_94 = *(undefined4 *)(lVar2 + 0x34);
    uStack_90 = *(undefined4 *)(lVar2 + 0x38);
    uStack_8c = *(undefined4 *)(lVar2 + 0x3c);
    local_88 = *(undefined4 *)(lVar2 + 0x40);
    uStack_84 = *(undefined4 *)(lVar2 + 0x44);
    uStack_80 = *(undefined4 *)(lVar2 + 0x48);
    uStack_7c = *(undefined4 *)(lVar2 + 0x4c);
    lVar2 = *plVar3;
  }
  (**(code **)(lVar2 + 0x18))(plVar3,lVar5,0);
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e93adc FUN_143e93adc body=1342 status=ok
// SIG undefined FUN_143e93adc(void)

void FUN_143e93adc(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(char *)(param_1 + 0x189) != '\0') goto LAB_143e93c4d;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_14480f766(&DAT_14cb90de0);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if (*(int *)(param_1 + 0x120) != *(int *)(param_1 + 0x124)) {
    LOCK();
    *(undefined4 *)(param_1 + 0xf8) = 2;
    UNLOCK();
    FUN_1415c8144(param_1);
  }
  if ((DAT_14c872a72 == '\0') && (*(longlong *)(param_1 + 0x140) != 0)) {
    FUN_1405964be(*(longlong *)(param_1 + 0x140),1,1);
    FUN_140596000(param_1);
  }
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_143e93b97;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_143e93f7f;
      goto LAB_143e93ba0;
    }
LAB_143e93f7f:
    FUN_145c7fb9e(param_1);
  }
  else {
LAB_143e93b97:
    if (iVar6 == 0x10) goto LAB_143e93f7f;
LAB_143e93ba0:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
      goto LAB_143e93f7f;
      if (iVar6 == 1) {
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        if (DVar7 == DVar8) goto LAB_143e93f7f;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar10 = (uint *)*puVar2;
      if (puVar10 != (uint *)0x0) goto LAB_143e93d0e;
      while( true ) {
        uVar12 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar12 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar12 | 1;
          __tlregdtor(&LAB_143ea3853);
        }
        lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar9 = *(undefined4 **)(lVar4 + 0x310);
        *(undefined8 *)(lVar4 + 0x310) = 0;
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar9 = 0xffffffff;
        *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
        puVar9[0x12] = 0;
        *puVar2 = puVar9;
        FUN_140217a48(puVar2);
        puVar10 = (uint *)*puVar2;
LAB_143e93d0e:
        puVar15 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar14 = (uint *)(puVar15 + 0x16);
        uVar12 = puVar10[0x12];
        if (puVar14 <= puVar10 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
          LOCK();
          uVar3 = *puVar10;
          *puVar10 = *puVar10 + uVar12 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar12) != 0xffffffff) break;
          puVar10 = (uint *)*puVar2;
          *puVar10 = 0xffffffff;
          *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar2 = puVar10;
          puVar15 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar15 + 0x16);
          uVar12 = 0;
          if (puVar14 <= puVar10 + 0x4000) {
            uVar12 = 1;
            goto LAB_143e93d8e;
          }
        }
      }
      uVar12 = uVar12 + 1;
LAB_143e93d8e:
      *(uint **)(puVar10 + 0x10) = puVar14;
      puVar10[0x12] = uVar12;
      iVar6 = 0;
      FUN_1447247dc(puVar15,0);
      *puVar15 = &PTR_FUN_14b456a18;
      puVar15[0x15] = param_1;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar12 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
          uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
          iVar6 = 0;
        }
        else {
          uVar16 = 2;
        }
      }
      else {
        iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar16 = 5;
      }
      if (*(code **)(puVar15[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar15[0xe] + 0x18))(puVar15 + 0xe,puVar15 + 9);
      }
      puVar15[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar15[9] = puVar15;
      puVar15[10] = puVar15;
      lVar4 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar4 == 0) {
        uVar5 = 1;
        if ((char)uVar16 != '\x06') {
          uVar5 = uVar16;
        }
        uVar16 = uVar5;
        uVar11 = 0;
      }
      else {
        if ((char)uVar16 == '\x06') {
          uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
        }
        uVar11 = *(undefined8 *)(lVar4 + 0x30);
      }
      puVar15[0xf] = uVar11;
      puVar15[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar15 + 0x1c) = iVar6;
      if (puVar15 == (undefined8 *)0x0) {
        local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
        UNLOCK();
        local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
        FUN_1447439e4(puVar15);
        LOCK();
        piVar1 = (int *)(puVar15 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar15)(puVar15,1);
        }
      }
    }
    else {
      local_78 = local_68;
      local_58 = (undefined ***)0x0;
      local_48 = &PTR_LAB_14b4569d0;
      local_68[0] = &LAB_143ea61e6;
      local_40 = param_1;
      FUN_14005a792(&DAT_14ca9a440,L"DestroyRenderers",&DAT_14cb9136c);
      if (local_68[0] != (undefined1 *)0x0) {
        pppuVar13 = local_58;
        if (local_58 == (undefined ***)0x0) {
          pppuVar13 = &local_48;
        }
        (*(code *)(*pppuVar13)[2])();
      }
    }
  }
  FUN_1400fb146(param_1 + 0x20,0);
LAB_143e93c4d:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e9401c FUN_143e9401c body=81 status=ok
// SIG undefined FUN_143e9401c(void)

void FUN_143e9401c(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = 1;
  local_14 = param_2;
  local_10 = param_3;
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x80))(*(longlong **)(param_1 + 0x20),&local_14);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e9406e FUN_143e9406e body=955 status=ok
// SIG undefined FUN_143e9406e(void)

void FUN_143e9406e(longlong param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  code *pcVar2;
  int iVar3;
  size_t sVar4;
  void *_Dst;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  wchar_t *pwVar8;
  ulonglong _Size;
  undefined1 *puVar9;
  ulonglong uVar10;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar1 = (longlong *)(param_1 + 0x48);
  if (param_3 == '\0') {
    iVar3 = FUN_1467d15c4(plVar1,(longlong *)(param_1 + 0x38),0);
    if (iVar3 == 0) goto LAB_143e94315;
    plVar6 = *(longlong **)(param_1 + 0x38);
    plVar5 = (longlong *)*plVar1;
    if (plVar5 != plVar6) {
      *plVar1 = (longlong)plVar6;
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
    param_2 = (longlong *)(param_1 + 0x40);
  }
  else {
    plVar6 = (longlong *)*param_2;
    plVar5 = (longlong *)*plVar1;
    if (plVar5 != plVar6) {
      *plVar1 = (longlong)plVar6;
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
    param_2 = param_2 + 1;
  }
  *(int *)(param_1 + 0x50) = (int)*param_2;
  plVar6 = *(longlong **)(param_1 + 0x48);
  if (*(code **)(*plVar6 + 0x50) != FUN_144828418) {
    plVar6 = (longlong *)(**(code **)(*plVar6 + 0x50))();
  }
  FUN_1447a1fc0(plVar6);
  plVar6 = (longlong *)*plVar1;
  pcVar2 = *(code **)(*plVar6 + 0x28);
  if (pcVar2 == FUN_14482841c) {
    plVar5 = plVar6 + 3;
    if (plVar6[5] != 0) {
      plVar5 = (longlong *)(plVar6[5] + 8);
    }
  }
  else if (pcVar2 == (code *)&LAB_14010c34c) {
    plVar5 = plVar6 + 2;
  }
  else {
    plVar5 = (longlong *)(*pcVar2)(plVar6);
  }
  if ((int)plVar5[1] == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)*plVar5;
  }
  local_60 = (undefined1 *)0x0;
  if (pwVar8 != (wchar_t *)0x0) {
    sVar4 = wcslen(pwVar8);
    local_50 = FUN_14475aa65(0,pwVar8,sVar4 & 0xffffffff);
    uVar7 = local_50 + 1;
    local_58 = (undefined1 *)0x0;
    if (0x80 < uVar7) {
      FUN_1446efa72(&local_60,0,uVar7,1);
      local_58 = local_60;
    }
    if (local_58 == (undefined1 *)0x0) {
      local_58 = local_e0;
    }
    FUN_14475a98a(local_58,uVar7,pwVar8,(int)sVar4 + 1);
    iVar3 = local_50;
    uVar10 = (ulonglong)local_50;
    if (local_60 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (iVar3 != 0) {
      _Dst = (void *)FUN_14001cc68(uVar10,0x10);
      plVar6 = (longlong *)*plVar1;
      if (*(code **)(*plVar6 + 0x50) != FUN_144828418) {
        plVar6 = (longlong *)(**(code **)(*plVar6 + 0x50))();
      }
      FUN_1447a1fc0(plVar6);
      plVar1 = (longlong *)*plVar1;
      pcVar2 = *(code **)(*plVar1 + 0x28);
      if (pcVar2 == FUN_14482841c) {
        plVar6 = plVar1 + 3;
        if (plVar1[5] != 0) {
          plVar6 = (longlong *)(plVar1[5] + 8);
        }
      }
      else if (pcVar2 == (code *)&LAB_14010c34c) {
        plVar6 = plVar1 + 2;
      }
      else {
        plVar6 = (longlong *)(*pcVar2)(plVar1);
      }
      if ((int)plVar6[1] == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = (wchar_t *)*plVar6;
      }
      local_60 = (undefined1 *)0x0;
      if (pwVar8 == (wchar_t *)0x0) {
        local_58 = (undefined1 *)0x0;
        local_50 = 0;
        _Size = 0;
      }
      else {
        sVar4 = wcslen(pwVar8);
        local_50 = FUN_14475aa65(0,pwVar8,sVar4 & 0xffffffff);
        uVar7 = local_50 + 1;
        puVar9 = (undefined1 *)0x0;
        if (0x80 < uVar7) {
          FUN_1446efa72(&local_60,0,uVar7,1);
          puVar9 = local_60;
        }
        local_58 = local_e0;
        if (puVar9 != (undefined1 *)0x0) {
          local_58 = puVar9;
        }
        FUN_14475a98a(local_58,uVar7,pwVar8,(int)sVar4 + 1);
        _Size = (ulonglong)local_50;
      }
      if ((_Dst != (void *)0x0) && (_Size <= uVar10)) {
        memcpy(_Dst,local_58,_Size);
      }
      if (local_60 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x70))
                (*(longlong **)(param_1 + 0x20),_Dst,_Size & 0xffffffff,0xffffffff00000000);
      if (_Dst != (void *)0x0) {
        FUN_1400020a8(_Dst);
      }
    }
  }
LAB_143e94315:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e9443c FUN_143e9443c body=317 status=ok
// SIG undefined FUN_143e9443c(void)

void FUN_143e9443c(longlong param_1,undefined8 *param_2)

{
  size_t sVar1;
  uint uVar2;
  wchar_t *_Str;
  undefined1 auStack_f8 [40];
  undefined1 local_d0 [128];
  undefined1 *local_50;
  undefined1 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(char *)(param_1 + 0x40) == '\x01') {
    if (*(int *)(param_2 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)*param_2;
    }
    local_50 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_48 = (undefined1 *)0x0;
      local_40 = 0;
    }
    else {
      sVar1 = wcslen(_Str);
      local_40 = FUN_14475aa65(0,_Str,sVar1 & 0xffffffff);
      uVar2 = local_40 + 1;
      local_48 = (undefined1 *)0x0;
      if (0x80 < uVar2) {
        FUN_1446efa72(&local_50,0,uVar2,1);
        local_48 = local_50;
      }
      if (local_48 == (undefined1 *)0x0) {
        local_48 = local_d0;
      }
      FUN_14475a98a(local_48,uVar2,_Str,(int)sVar1 + 1);
    }
    (**(code **)(**(longlong **)(param_1 + 8) + 0x20))
              (*(longlong **)(param_1 + 8),local_48,local_40);
    if (local_50 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e9457a FUN_143e9457a body=331 status=ok
// SIG undefined FUN_143e9457a(void)

void FUN_143e9457a(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  size_t sVar1;
  wchar_t *_Str;
  uint uVar2;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [128];
  undefined1 *local_58;
  undefined1 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(char *)(param_1 + 0x40) == '\x01') {
    if (*(int *)(param_3 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)*param_3;
    }
    local_58 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_50 = (undefined1 *)0x0;
      local_48 = 0;
    }
    else {
      sVar1 = wcslen(_Str);
      local_48 = FUN_14475aa65(0,_Str,sVar1 & 0xffffffff);
      uVar2 = local_48 + 1;
      local_50 = (undefined1 *)0x0;
      if (0x80 < uVar2) {
        FUN_1446efa72(&local_58,0,uVar2,1);
        local_50 = local_58;
      }
      if (local_50 == (undefined1 *)0x0) {
        local_50 = local_d8;
      }
      FUN_14475a98a(local_50,uVar2,_Str,(int)sVar1 + 1);
    }
    (**(code **)(**(longlong **)(param_1 + 8) + 0x18))
              (*(longlong **)(param_1 + 8),param_2,local_50,local_48);
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e946c6 FUN_143e946c6 body=323 status=ok
// SIG undefined FUN_143e946c6(void)

void FUN_143e946c6(longlong param_1,undefined8 *param_2)

{
  size_t sVar1;
  uint uVar2;
  wchar_t *_Str;
  undefined1 auStack_f8 [40];
  undefined1 local_d0 [128];
  undefined1 *local_50;
  undefined1 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(char *)(param_1 + 0x40) == '\x01') {
    if (*(int *)(param_2 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)*param_2;
    }
    local_50 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_48 = (undefined1 *)0x0;
      local_40 = 0;
    }
    else {
      sVar1 = wcslen(_Str);
      local_40 = FUN_14475aa65(0,_Str,sVar1 & 0xffffffff);
      uVar2 = local_40 + 1;
      local_48 = (undefined1 *)0x0;
      if (0x80 < uVar2) {
        FUN_1446efa72(&local_50,0,uVar2,1);
        local_48 = local_50;
      }
      if (local_48 == (undefined1 *)0x0) {
        local_48 = local_d0;
      }
      FUN_14475a98a(local_48,uVar2,_Str,(int)sVar1 + 1);
    }
    (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),local_48,local_40,1)
    ;
    if (local_50 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e94826 FUN_143e94826 body=529 status=ok
// SIG undefined FUN_143e94826(void)

void FUN_143e94826(longlong param_1)

{
  byte bVar1;
  longlong *plVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  code *local_40;
  int local_38;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(longlong *)(param_1 + 0x168) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x168) + 0x26e) == '\x01')) {
    bVar1 = *(byte *)(param_1 + 0x246);
    lVar4 = FUN_1489c6a18();
    if ((longlong)*(int *)(lVar4 + 0x48) == 0) {
      local_30[0] = 0;
    }
    else {
      local_30[0] = 0;
      lVar5 = 0;
      do {
        if (*(ulonglong *)(*(longlong *)(lVar4 + 0x40) + 8 + lVar5) == (ulonglong)bVar1) {
          local_30[0] = *(longlong *)(*(longlong *)(lVar4 + 0x40) + lVar5);
          break;
        }
        lVar5 = lVar5 + 0x10;
      } while ((longlong)*(int *)(lVar4 + 0x48) * 0x10 != lVar5);
    }
    FUN_1400021e4(local_30,&local_40);
    pcVar6 = local_40;
    if (local_38 == 0) {
      pcVar6 = (code *)&DAT_149dfb77a;
    }
    FUN_140002266(local_30,L"Ticking in %s",pcVar6);
    if (local_40 != (code *)0x0) {
      FUN_1400020a8();
    }
    if (DAT_14cb907b8 == (longlong *)0x0) {
      local_40 = FUN_1449e2820;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_14081d0ea;
      local_68 = &LAB_1489c8acb;
      local_70 = &LAB_146027b0e;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10000006;
      local_90 = 8;
      local_98 = 0x128;
      local_60 = &local_40;
      FUN_14081cfa3(L"/Script/CohtmlPlugin",L"CohtmlSettings",&DAT_14cb907b8,&DAT_1489c8aca);
    }
    plVar2 = DAT_14cb907b8;
    lVar4 = DAT_14cb907b8[0x22];
    if (lVar4 == 0) {
      (**(code **)(*DAT_14cb907b8 + 1000))(DAT_14cb907b8);
      lVar4 = plVar2[0x22];
    }
    if ((*(char *)(lVar4 + 0x73) == '\x01') && (FUN_1489cc00a(&local_40), local_40 != (code *)0x0))
    {
      FUN_1400020a8();
    }
    uVar3 = FUN_1404d5a16(*(undefined8 *)(*(longlong *)(param_1 + 0x168) + 0x238));
    *(undefined1 *)(param_1 + 0x2f8) = uVar3;
    *(undefined1 *)(*(longlong *)(param_1 + 0x168) + 0x26e) = 0;
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e94a38 FUN_143e94a38 body=163 status=ok
// SIG undefined FUN_143e94a38(void)

longlong * FUN_143e94a38(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  byte bVar4;
  longlong lVar5;
  byte bVar6;
  undefined4 uVar7;
  
  FUN_140a515e6(*param_1,param_3);
  lVar1 = *param_1;
  *(undefined8 *)(lVar1 + 0x250) = *(undefined8 *)(param_3 + 0x1a8);
  *(undefined1 *)(lVar1 + 0x2c0) = 0;
  lVar5 = FUN_143e9d64a(lVar1);
  if (lVar5 != 0) {
    uVar7 = FUN_146567c8e(lVar5);
    *(undefined4 *)(lVar1 + 0x264) = uVar7;
  }
  plVar2 = (longlong *)*param_1;
  bVar6 = *(byte *)(plVar2 + 6);
  bVar4 = 0x20;
  if ((bVar6 & 0x10) == 0) {
    cVar3 = (**(code **)(*plVar2 + 0x220))(plVar2);
    bVar4 = cVar3 << 5;
    bVar6 = *(byte *)(plVar2 + 6);
  }
  *(byte *)(plVar2 + 6) = bVar6 & 0xdf | bVar4;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 143e94adc FUN_143e94adc body=12 status=ok
// SIG undefined FUN_143e94adc(void)

undefined8 FUN_143e94adc(longlong param_1)

{
  return *(undefined8 *)(*(longlong *)(param_1 + 0x238) + 8);
}



// FUNCTION 143e94ae8 FUN_143e94ae8 body=611 status=ok
// SIG undefined FUN_143e94ae8(void)

void FUN_143e94ae8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_58 [32];
  uint local_38;
  int local_34;
  uint *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_1 + 0x168) != 0) &&
     (lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x168) + 0x238), lVar7 != 0)) {
    if (*(longlong **)(lVar7 + 8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar7 + 8) + 8))();
      *(undefined8 *)(lVar7 + 8) = 0;
    }
    FUN_1457225f4(lVar7);
    *(undefined1 *)(lVar7 + 0x189) = 1;
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x168) + 0x238);
    if (lVar7 != 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x168) + 0x238) = 0;
      FUN_145ed6ff0(lVar7);
      FUN_1400020a8(lVar7);
    }
    *(undefined8 *)(param_1 + 0x168) = 0;
    plVar5 = *(longlong **)(param_1 + 0x170);
    if (plVar5 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x170) = 0;
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
  if ((((((*(int *)(param_1 + 0x184) != 0) && (uVar3 = *(uint *)(param_1 + 0x180), -1 < (int)uVar3))
        && ((int)uVar3 < DAT_14c9647dc)) &&
       ((plVar5 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
        plVar5 != (longlong *)0x0 && ((int)plVar5[2] == *(int *)(param_1 + 0x184))))) &&
      (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && ((DAT_14cb90e00 != 0 && (DAT_14cb90e08 != 0))))
      )) && (0 < *(int *)(DAT_14cb90e08 + 8))) {
    if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
      lVar7 = *plVar5;
    }
    else {
      lVar7 = 0;
    }
    local_34 = 0;
    if (param_1 == 0) {
      local_38 = 0;
      iVar4 = 0;
    }
    else {
      local_38 = *(uint *)(param_1 + 0xc);
      if ((int)local_38 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((local_38 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_38 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      iVar4 = *(int *)(lVar8 + 0x10);
      if (*(int *)(lVar8 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        iVar6 = DAT_14c964868 + 1;
        bVar9 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar9) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar6);
        }
        LOCK();
        iVar4 = *(int *)(lVar8 + 0x10);
        bVar9 = iVar4 == 0;
        if (bVar9) {
          *(int *)(lVar8 + 0x10) = iVar6;
          iVar4 = 0;
        }
        UNLOCK();
        if (bVar9) {
          iVar4 = iVar6;
        }
      }
    }
    local_30 = &local_38;
    local_34 = iVar4;
    FUN_1411dbb96(lVar7 + 0x3c8);
  }
  switchD_143c3d4dc::caseD_1f(param_1);
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e94d4c FUN_143e94d4c body=130 status=ok
// SIG undefined FUN_143e94d4c(void)

void FUN_143e94d4c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  if (*(longlong *)(param_1 + 0x168) == 0) {
    plVar2 = (longlong *)(param_1 + 0x178);
  }
  else {
    plVar2 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x168) + 0x238) + 8);
  }
  if ((longlong *)*plVar2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*(longlong *)*plVar2 + 0x1d0))();
    if (cVar1 != '\0') {
      if (*(longlong *)(param_1 + 0x168) == 0) {
        puVar3 = (undefined8 *)(param_1 + 0x178);
      }
      else {
        puVar3 = (undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x168) + 0x238) + 8);
      }
      FUN_1489ccb73(param_2,param_3,*puVar3);
      return;
    }
  }
  return;
}



// FUNCTION 143e94dce FUN_143e94dce body=134 status=ok
// SIG undefined FUN_143e94dce(void)

void FUN_143e94dce(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  if (*(longlong *)(param_1 + 0x168) == 0) {
    plVar2 = (longlong *)(param_1 + 0x178);
  }
  else {
    plVar2 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x168) + 0x238) + 8);
  }
  if ((longlong *)*plVar2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*(longlong *)*plVar2 + 0x1d0))();
    if (cVar1 != '\0') {
      if (*(longlong *)(param_1 + 0x168) == 0) {
        puVar3 = (undefined8 *)(param_1 + 0x178);
      }
      else {
        puVar3 = (undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x168) + 0x238) + 8);
      }
      FUN_1410c3ebe(*puVar3,param_2,param_3,*(undefined8 *)(param_3 + 0x10));
      return;
    }
  }
  return;
}



// FUNCTION 143e94e54 FUN_143e94e54 body=150 status=ok
// SIG undefined FUN_143e94e54(void)

void FUN_143e94e54(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (*(longlong *)(param_1 + 0x168) == 0) {
    plVar2 = (longlong *)(param_1 + 0x178);
  }
  else {
    plVar2 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x168) + 0x238) + 8);
  }
  if ((longlong *)*plVar2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*(longlong *)*plVar2 + 0x1d0))();
    if (cVar1 != '\0') {
      if (*(longlong *)(param_1 + 0x168) == 0) {
        puVar4 = (undefined8 *)(param_1 + 0x178);
      }
      else {
        puVar4 = (undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x168) + 0x238) + 8);
      }
      plVar2 = (longlong *)*puVar4;
      uVar3 = FUN_1401e1b6a(plVar2,param_2,*(undefined8 *)(param_2 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000143e94ee7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x238))(plVar2,param_2,uVar3,*(code **)(*plVar2 + 0x238));
      return;
    }
  }
  return;
}



// FUNCTION 143e94eea FUN_143e94eea body=150 status=ok
// SIG undefined FUN_143e94eea(void)

void FUN_143e94eea(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (*(longlong *)(param_1 + 0x168) == 0) {
    plVar2 = (longlong *)(param_1 + 0x178);
  }
  else {
    plVar2 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x168) + 0x238) + 8);
  }
  if ((longlong *)*plVar2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*(longlong *)*plVar2 + 0x1d0))();
    if (cVar1 != '\0') {
      if (*(longlong *)(param_1 + 0x168) == 0) {
        puVar4 = (undefined8 *)(param_1 + 0x178);
      }
      else {
        puVar4 = (undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x168) + 0x238) + 8);
      }
      plVar2 = (longlong *)*puVar4;
      uVar3 = FUN_1401e1b6a(plVar2,param_2,*(undefined8 *)(param_2 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000143e94f7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x240))(plVar2,param_2,uVar3,*(code **)(*plVar2 + 0x240));
      return;
    }
  }
  return;
}



// FUNCTION 143e94f80 FUN_143e94f80 body=117 status=ok
// SIG undefined FUN_143e94f80(void)

void FUN_143e94f80(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  if (*(longlong *)(param_1 + 0x168) == 0) {
    plVar2 = (longlong *)(param_1 + 0x178);
  }
  else {
    plVar2 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x168) + 0x238) + 8);
  }
  if ((longlong *)*plVar2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*(longlong *)*plVar2 + 0x1d0))();
    if (cVar1 != '\0') {
      if (*(longlong *)(param_1 + 0x168) == 0) {
        puVar3 = (undefined8 *)(param_1 + 0x178);
      }
      else {
        puVar3 = (undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x168) + 0x238) + 8);
      }
                    /* WARNING: Could not recover jumptable at 0x000143e94fee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)*puVar3 + 0x228))();
      return;
    }
  }
  return;
}



// FUNCTION 143e94ff6 FUN_143e94ff6 body=82 status=ok
// SIG undefined FUN_143e94ff6(void)

void FUN_143e94ff6(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && ((*(uint *)(param_2 + 8) >> 0x1e & 1) == 0)) {
    iVar1 = *(int *)(param_1 + 0x250);
    *(uint *)(param_1 + 0x250) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x254) < iVar1 + 1U) {
      FUN_147a76346((longlong *)(param_1 + 0x248),iVar1);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x248) + (longlong)iVar1 * 8) = param_2;
  }
  return;
}



// FUNCTION 143e95048 FUN_143e95048 body=2209 status=ok
// SIG undefined FUN_143e95048(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e95048(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  longlong lVar5;
  char cVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *_Src;
  void *_Src_00;
  undefined *puVar9;
  bool bVar10;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x168) == 0) {
    plVar7 = (longlong *)(param_1 + 0x178);
  }
  else {
    plVar7 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x168) + 0x238) + 8);
  }
  if (((longlong *)*plVar7 == (longlong *)0x0) ||
     (cVar6 = (**(code **)(*(longlong *)*plVar7 + 0x1d0))(), cVar6 == '\0')) goto LAB_143e954d6;
  local_38[0] = 0;
  local_38[1] = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c963e88) && (FUN_144b3d300(&DAT_14c963e88), DAT_14c963e88 == -1)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
      local_48 = (undefined *)FUN_140342cba();
      local_40 = FUN_1468c7f1e;
      local_50 = 0;
      local_58 = 0x8001;
      FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
      atexit(FUN_14280c819);
      _Init_thread_footer(&DAT_14c951a88);
    }
    local_40 = FUN_140dafe7a;
    local_48 = &DAT_14c951a38;
    local_50 = 0;
    local_58 = 0xc001;
    FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0);
    atexit(FUN_142829758);
    _Init_thread_footer(&DAT_14c963e88);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar7 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar7[3];
    if ((*(byte *)((longlong)plVar7 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar7 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar7 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar7 + 0x88);
        if ((pcVar3 == (code *)&LAB_1447713a0) || (cVar6 = (*pcVar3)(plVar7), cVar6 == '\0')) {
          _Src = (longlong *)(lVar5 + *(int *)((longlong)plVar7 + 0x44));
          if (_Src != local_38) {
            if ((*(byte *)((longlong)plVar7 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar7 + 0x100))(plVar7,local_38,_Src,(int)plVar7[6]);
            }
            else {
              memcpy(local_38,_Src,
                     (longlong)(int)plVar7[6] * (longlong)*(int *)((longlong)plVar7 + 0x34));
            }
          }
        }
        else {
          (**(code **)(*plVar7 + 0xa0))(plVar7,lVar5,local_38);
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar7[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar7,local_38,lVar5,1);
      }
      else {
        (*pcVar3)(plVar7,local_38,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar8;
        puVar8 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar7);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,local_38);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,local_38);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_38[0] = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,local_38);
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c952a58) && (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
      local_48 = (undefined *)FUN_140342cba();
      local_40 = FUN_1468c7f1e;
      local_50 = 0;
      local_58 = 0x8001;
      FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
      atexit(FUN_14280c819);
      _Init_thread_footer(&DAT_14c951a88);
    }
    local_40 = FUN_1403a682c;
    local_48 = &DAT_14c951a38;
    local_50 = 0;
    local_58 = 0x108001;
    FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
    atexit(FUN_142818c9e);
    _Init_thread_footer(&DAT_14c952a58);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar7 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar7[3];
    if ((*(byte *)((longlong)plVar7 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar7 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar7 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar7 + 0x88);
        if ((pcVar3 == (code *)&LAB_1447713a0) || (cVar6 = (*pcVar3)(), cVar6 == '\0')) {
          _Src_00 = (void *)(lVar5 + *(int *)((longlong)plVar7 + 0x44));
          if (_Src_00 != (void *)0x0) {
            if ((*(byte *)((longlong)plVar7 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar7 + 0x100))(plVar7,0,_Src_00,(int)plVar7[6]);
            }
            else {
              memcpy((void *)0x0,_Src_00,
                     (longlong)(int)plVar7[6] * (longlong)*(int *)((longlong)plVar7 + 0x34));
            }
          }
        }
        else {
          (**(code **)(*plVar7 + 0xa0))(plVar7,lVar5,0);
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar7[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar7,0,lVar5,1);
      }
      else {
        (*pcVar3)(plVar7,0,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar8;
        puVar8 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar7);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,0);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,0);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      _DAT_00000000 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,0);
    }
  }
  lVar5 = *(longlong *)(param_2 + 0x30);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (lVar5 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    puVar9 = *(undefined **)(lVar5 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952a58) && (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1))
      {
        local_48 = (undefined *)FUN_140342cba();
        local_40 = FUN_1468c7f1e;
        local_50 = 0;
        local_58 = 0x8001;
        FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
        atexit(FUN_14280c819);
        _Init_thread_footer(&DAT_14c951a88);
      }
      local_40 = FUN_1403a682c;
      local_48 = &DAT_14c951a38;
      local_50 = 0;
      local_58 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
    if (DAT_14c952a10 == 0) {
      bVar10 = puVar9 != (undefined *)0x0;
      if (puVar9 != &DAT_14c952a08 && bVar10) {
        do {
          puVar9 = *(undefined **)(puVar9 + 0x30);
          bVar10 = puVar9 != (undefined *)0x0;
          if (puVar9 == &DAT_14c952a08) break;
        } while (puVar9 != (undefined *)0x0);
      }
      if (bVar10) goto LAB_143e95482;
    }
    else if ((*(ulonglong *)(puVar9 + 0x18) & DAT_14c952a10) != 0) {
LAB_143e95482:
      cVar6 = FUN_143e80b3f(lVar5,local_38);
      if (cVar6 == '\0') {
        if (*(longlong *)(param_1 + 0x168) == 0) {
          puVar8 = (undefined8 *)(param_1 + 0x178);
        }
        else {
          puVar8 = (undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x168) + 0x238) + 8);
        }
        FUN_1410c3ebe(*puVar8,local_38,uVar2,*(undefined8 *)(lVar5 + 0x70));
      }
    }
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
LAB_143e954d6:
  if ((local_38[2] ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e958ea FUN_143e958ea body=1358 status=ok
// SIG undefined FUN_143e958ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e958ea(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  code *pcVar2;
  undefined8 *puVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  void *_Src;
  undefined *puVar10;
  bool bVar11;
  ulonglong in_stack_ffffffffffffffb8;
  undefined8 in_stack_ffffffffffffffc0;
  undefined4 uVar12;
  
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffffc0 >> 0x20);
  if (*(longlong *)(param_1 + 0x168) == 0) {
    plVar6 = (longlong *)(param_1 + 0x178);
  }
  else {
    plVar6 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x168) + 0x238) + 8);
  }
  if ((longlong *)*plVar6 == (longlong *)0x0) {
    return;
  }
  cVar5 = (**(code **)(*(longlong *)*plVar6 + 0x1d0))();
  if (cVar5 == '\0') {
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c952a58) && (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
      uVar8 = FUN_140342cba();
      FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0,0x8001,0,uVar8,FUN_1468c7f1e);
      atexit(FUN_14280c819);
      _Init_thread_footer(&DAT_14c951a88);
    }
    uVar12 = 0;
    in_stack_ffffffffffffffb8 = 0;
    FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0,0x108001,0,&DAT_14c951a38,
                  FUN_1403a682c);
    atexit(FUN_142818c9e);
    _Init_thread_footer(&DAT_14c952a58);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar6 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar6[3];
    if ((*(byte *)((longlong)plVar6 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar6 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar6 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar6 + 0x88);
        if ((pcVar2 == (code *)&LAB_1447713a0) || (cVar5 = (*pcVar2)(), cVar5 == '\0')) {
          _Src = (void *)(lVar4 + *(int *)((longlong)plVar6 + 0x44));
          if (_Src != (void *)0x0) {
            if ((*(byte *)((longlong)plVar6 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar6 + 0x100))(plVar6,0,_Src,(int)plVar6[6]);
            }
            else {
              memcpy((void *)0x0,_Src,
                     (longlong)(int)plVar6[6] * (longlong)*(int *)((longlong)plVar6 + 0x34));
            }
          }
        }
        else {
          (**(code **)(*plVar6 + 0xa0))(plVar6,lVar4,0);
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        FUN_1400746b0(plVar6,0,lVar4,1,in_stack_ffffffffffffffb8 & 0xffffffff00000000,
                      CONCAT44(uVar12,(int)plVar6[6]));
      }
      else {
        (*pcVar2)(plVar6,0,lVar4);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar3 = (undefined8 *)*puVar9;
        puVar9 = puVar3 + 2;
      } while ((longlong *)*puVar3 != plVar6);
      *(undefined8 *)(param_2 + 0x38) = puVar3[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar8 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar8,param_2,0);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar8,param_2,0);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      _DAT_00000000 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar8,param_2,0);
    }
  }
  lVar4 = *(longlong *)(param_2 + 0x30);
  if (lVar4 != 0) {
    uVar8 = *(undefined8 *)(param_2 + 0x38);
    puVar10 = *(undefined **)(lVar4 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952a58) && (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1))
      {
        uVar7 = FUN_140342cba();
        FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0,0x8001,0,uVar7,FUN_1468c7f1e);
        atexit(FUN_14280c819);
        _Init_thread_footer(&DAT_14c951a88);
      }
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0,0x108001,0,&DAT_14c951a38,
                    FUN_1403a682c);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
    if (DAT_14c952a10 == 0) {
      bVar11 = puVar10 != (undefined *)0x0;
      if (puVar10 != &DAT_14c952a08 && bVar11) {
        do {
          puVar10 = *(undefined **)(puVar10 + 0x30);
          bVar11 = puVar10 != (undefined *)0x0;
          if (puVar10 == &DAT_14c952a08) break;
        } while (puVar10 != (undefined *)0x0);
      }
      if (!bVar11) goto LAB_143e95b99;
    }
    else if ((*(ulonglong *)(puVar10 + 0x18) & DAT_14c952a10) == 0) goto LAB_143e95b99;
    if (*(longlong *)(param_1 + 0x168) == 0) {
      puVar9 = (undefined8 *)(param_1 + 0x178);
    }
    else {
      puVar9 = (undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x168) + 0x238) + 8);
    }
    plVar6 = (longlong *)*puVar9;
    uVar7 = FUN_1401e1b6a(plVar6,uVar8,*(undefined8 *)(lVar4 + 0x70));
    (**(code **)(*plVar6 + 0x238))(plVar6,uVar8,uVar7);
  }
LAB_143e95b99:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  return;
}



// FUNCTION 143e95e38 FUN_143e95e38 body=1358 status=ok
// SIG undefined FUN_143e95e38(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e95e38(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  code *pcVar2;
  undefined8 *puVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  void *_Src;
  undefined *puVar10;
  bool bVar11;
  ulonglong in_stack_ffffffffffffffb8;
  undefined8 in_stack_ffffffffffffffc0;
  undefined4 uVar12;
  
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffffc0 >> 0x20);
  if (*(longlong *)(param_1 + 0x168) == 0) {
    plVar6 = (longlong *)(param_1 + 0x178);
  }
  else {
    plVar6 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x168) + 0x238) + 8);
  }
  if ((longlong *)*plVar6 == (longlong *)0x0) {
    return;
  }
  cVar5 = (**(code **)(*(longlong *)*plVar6 + 0x1d0))();
  if (cVar5 == '\0') {
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c952a58) && (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
      uVar8 = FUN_140342cba();
      FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0,0x8001,0,uVar8,FUN_1468c7f1e);
      atexit(FUN_14280c819);
      _Init_thread_footer(&DAT_14c951a88);
    }
    uVar12 = 0;
    in_stack_ffffffffffffffb8 = 0;
    FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0,0x108001,0,&DAT_14c951a38,
                  FUN_1403a682c);
    atexit(FUN_142818c9e);
    _Init_thread_footer(&DAT_14c952a58);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar6 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar6[3];
    if ((*(byte *)((longlong)plVar6 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar6 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar6 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar6 + 0x88);
        if ((pcVar2 == (code *)&LAB_1447713a0) || (cVar5 = (*pcVar2)(), cVar5 == '\0')) {
          _Src = (void *)(lVar4 + *(int *)((longlong)plVar6 + 0x44));
          if (_Src != (void *)0x0) {
            if ((*(byte *)((longlong)plVar6 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar6 + 0x100))(plVar6,0,_Src,(int)plVar6[6]);
            }
            else {
              memcpy((void *)0x0,_Src,
                     (longlong)(int)plVar6[6] * (longlong)*(int *)((longlong)plVar6 + 0x34));
            }
          }
        }
        else {
          (**(code **)(*plVar6 + 0xa0))(plVar6,lVar4,0);
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        FUN_1400746b0(plVar6,0,lVar4,1,in_stack_ffffffffffffffb8 & 0xffffffff00000000,
                      CONCAT44(uVar12,(int)plVar6[6]));
      }
      else {
        (*pcVar2)(plVar6,0,lVar4);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar3 = (undefined8 *)*puVar9;
        puVar9 = puVar3 + 2;
      } while ((longlong *)*puVar3 != plVar6);
      *(undefined8 *)(param_2 + 0x38) = puVar3[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar8 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar8,param_2,0);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar8,param_2,0);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      _DAT_00000000 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar8,param_2,0);
    }
  }
  lVar4 = *(longlong *)(param_2 + 0x30);
  if (lVar4 != 0) {
    uVar8 = *(undefined8 *)(param_2 + 0x38);
    puVar10 = *(undefined **)(lVar4 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952a58) && (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1))
      {
        uVar7 = FUN_140342cba();
        FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0,0x8001,0,uVar7,FUN_1468c7f1e);
        atexit(FUN_14280c819);
        _Init_thread_footer(&DAT_14c951a88);
      }
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0,0x108001,0,&DAT_14c951a38,
                    FUN_1403a682c);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
    if (DAT_14c952a10 == 0) {
      bVar11 = puVar10 != (undefined *)0x0;
      if (puVar10 != &DAT_14c952a08 && bVar11) {
        do {
          puVar10 = *(undefined **)(puVar10 + 0x30);
          bVar11 = puVar10 != (undefined *)0x0;
          if (puVar10 == &DAT_14c952a08) break;
        } while (puVar10 != (undefined *)0x0);
      }
      if (!bVar11) goto LAB_143e960e7;
    }
    else if ((*(ulonglong *)(puVar10 + 0x18) & DAT_14c952a10) == 0) goto LAB_143e960e7;
    if (*(longlong *)(param_1 + 0x168) == 0) {
      puVar9 = (undefined8 *)(param_1 + 0x178);
    }
    else {
      puVar9 = (undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x168) + 0x238) + 8);
    }
    plVar6 = (longlong *)*puVar9;
    uVar7 = FUN_1401e1b6a(plVar6,uVar8,*(undefined8 *)(lVar4 + 0x70));
    (**(code **)(*plVar6 + 0x240))(plVar6,uVar8,uVar7);
  }
LAB_143e960e7:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  return;
}



// FUNCTION 143e96386 FUN_143e96386 body=369 status=ok
// SIG undefined FUN_143e96386(void)

undefined4 FUN_143e96386(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = (**(code **)(*param_1 + 0x180))();
  uVar3 = 0;
  uVar4 = 0;
  if ((((lVar1 != 0) &&
       (lVar1 = (**(code **)(*param_1 + 0x180))(param_1), uVar4 = uVar3,
       (*(byte *)(lVar1 + 0x152) & 0xfe) != 4)) &&
      (lVar1 = (**(code **)(*param_1 + 0x2c8))(param_1), lVar1 != 0)) &&
     (lVar2 = *(longlong *)(lVar1 + 0x430), lVar2 != 0)) {
    if (DAT_14cae9568 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1417de738;
      local_30 = &LAB_145893408;
      local_38 = &LAB_1458cbbd2;
      local_48 = &LAB_147ba21f1;
      local_50 = &LAB_1463e9233;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x1000000c;
      local_70 = 8;
      local_78 = 0x2b8;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
      lVar2 = *(longlong *)(lVar1 + 0x430);
      if (lVar2 == 0) goto LAB_143e96424;
    }
    if (((DAT_14cae9568 != 0) && (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 != 0)) &&
       ((*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar1 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8)
         == DAT_14cae9568 + 0x30)))) {
      uVar4 = *(undefined4 *)(lVar2 + 0xe0);
    }
  }
LAB_143e96424:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 143e964f8 FUN_143e964f8 body=1097 status=ok
// SIG undefined FUN_143e964f8(void)

ulonglong FUN_143e964f8(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  void *_Src;
  int iVar1;
  uint uVar2;
  void *_Dst;
  undefined2 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  int local_90;
  wchar_t *local_88;
  int local_80;
  wchar_t *local_78;
  int local_70;
  wchar_t *local_68;
  int local_60;
  wchar_t *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x70) != '\x01') {
    uVar6 = 0;
    goto LAB_143e966f5;
  }
  FUN_1401aea18(&local_48,param_4);
  FUN_144a06df0(&local_58,param_4,0);
  FUN_140056680(&local_68);
  pwVar8 = local_68;
  if (local_50 == local_60) {
    if (local_50 < 2) {
LAB_143e96598:
      bVar10 = false;
    }
    else {
      iVar1 = wcscmp(local_58,local_68);
      if (iVar1 != 0) goto LAB_143e9659f;
      bVar10 = false;
    }
  }
  else {
    if (local_60 + local_50 == 1) goto LAB_143e96598;
LAB_143e9659f:
    FUN_140056680(&local_78);
    pwVar7 = local_78;
    if (local_50 == local_70) {
      if (local_50 < 2) {
LAB_143e965e8:
        bVar10 = false;
      }
      else {
        iVar1 = wcscmp(local_58,local_78);
        if (iVar1 != 0) goto LAB_143e965ef;
        bVar10 = false;
      }
    }
    else {
      if (local_70 + local_50 == 1) goto LAB_143e965e8;
LAB_143e965ef:
      FUN_140056680(&local_88);
      pwVar8 = local_88;
      if (local_50 == local_80) {
        if (local_50 < 2) {
LAB_143e96635:
          bVar10 = false;
        }
        else {
          iVar1 = wcscmp(local_58,local_88);
          if (iVar1 != 0) goto LAB_143e96639;
          bVar10 = false;
        }
      }
      else {
        if (local_80 + local_50 == 1) goto LAB_143e96635;
LAB_143e96639:
        FUN_140056680(&local_98);
        if (local_50 == local_90) {
          bVar10 = true;
          if (1 < local_50) {
            iVar1 = wcscmp(local_58,local_98);
            bVar10 = iVar1 == 0;
          }
        }
        else {
          bVar10 = local_90 + local_50 == 1;
        }
        if (local_98 != (wchar_t *)0x0) {
          FUN_1400020a8(local_98);
        }
        bVar10 = (bool)(bVar10 ^ 1);
        pwVar8 = local_88;
      }
      pwVar7 = local_78;
      if (pwVar8 != (wchar_t *)0x0) {
        FUN_1400020a8(pwVar8);
        pwVar7 = local_78;
      }
    }
    pwVar8 = local_68;
    if (pwVar7 != (wchar_t *)0x0) {
      FUN_1400020a8(pwVar7);
      pwVar8 = local_68;
    }
  }
  if (pwVar8 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar8);
  }
  uVar6 = 0;
  if (!bVar10) {
    iVar1 = local_40 + -1;
    if (local_40 == 0) {
      iVar1 = 0;
    }
    if (0 < iVar1) {
      puVar3 = local_48;
      if (local_40 == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      lVar5 = 0;
      uVar6 = 0;
      do {
        uVar2 = ((uint)(ushort)puVar3[lVar5] + (uint)(0x19 < (ushort)puVar3[lVar5] - 0x61) * 0x20) -
                0x20;
        uVar9 = (uint)(uVar6 >> 8) ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar6 ^ uVar2) & 0xff) * 4);
        uVar6 = (ulonglong)
                (uVar9 >> 8 ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar9 & 0xff ^ uVar2 >> 8 & 0xff) * 4));
        lVar5 = lVar5 + 1;
      } while (iVar1 != (int)lVar5);
    }
    iVar1 = FUN_1468f2576((longlong *)(param_1 + 0x78),uVar6,&local_48);
    if ((iVar1 == -1) ||
       (lVar5 = (longlong)iVar1 * 0x28 + *(longlong *)(param_1 + 0x78), lVar5 == 0)) {
      uVar6 = 0;
    }
    else {
      iVar1 = *(int *)(lVar5 + 0x18);
      _Src = *(void **)(lVar5 + 0x10);
      _Dst = (void *)(**(code **)(*param_3 + 8))(param_3,(longlong)iVar1);
      memcpy(_Dst,_Src,(longlong)iVar1);
      FUN_140056680(&local_68);
      if (local_50 == local_60) {
        bVar10 = true;
        if (1 < local_50) {
          iVar1 = wcscmp(local_58,local_68);
          bVar10 = iVar1 == 0;
        }
      }
      else {
        bVar10 = local_60 + local_50 == 1;
      }
      if (local_68 != (wchar_t *)0x0) {
        FUN_1400020a8(local_68);
      }
      pwVar8 = local_68;
      if (bVar10) {
        uVar6 = 0;
        iVar1 = local_40 + -1;
        if (local_40 == 0) {
          iVar1 = 0;
        }
        if (0 < iVar1) {
          puVar3 = local_48;
          if (local_40 == 0) {
            puVar3 = &DAT_149dfb77a;
          }
          lVar5 = 0;
          uVar6 = 0;
          do {
            uVar2 = ((uint)(0x19 < (ushort)puVar3[lVar5] - 0x61) * 0x20 +
                    (uint)(ushort)puVar3[lVar5]) - 0x20;
            uVar9 = (uint)(uVar6 >> 8) ^
                    *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar6 ^ uVar2) & 0xff) * 4);
            pwVar8 = (wchar_t *)0x0;
            uVar6 = (ulonglong)
                    (uVar9 >> 8 ^
                    *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar9 & 0xff ^ uVar2 >> 8 & 0xff) * 4));
            lVar5 = lVar5 + 1;
          } while (iVar1 != (int)lVar5);
        }
        iVar1 = FUN_1489ed3de((longlong *)(param_1 + 0xd0),uVar6,&local_48);
        if (((iVar1 != -1) &&
            (lVar5 = (longlong)iVar1 * 0x20 + *(longlong *)(param_1 + 0xd0),
            plVar4 = (longlong *)(lVar5 + 0x10), plVar4 != (longlong *)0x0 && lVar5 != 0)) &&
           (*plVar4 != 0)) {
          (**(code **)(*param_3 + 0x18))(param_3);
        }
      }
      (**(code **)(*param_3 + 0x28))(param_3,200);
      (**(code **)(*param_3 + 0x40))(param_3,0);
      uVar6 = CONCAT71((int7)((ulonglong)pwVar8 >> 8),1);
    }
  }
  if (local_58 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_143e966f5:
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 143e96942 FUN_143e96942 body=48 status=ok
// SIG undefined FUN_143e96942(void)

void FUN_143e96942(longlong param_1)

{
  if ((*(char *)(param_1 + 0x70) == '\0') && (*(char *)(param_1 + 0x28) == '\x01')) {
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
    FUN_143e908a0(*(undefined8 *)(param_1 + 0x60));
    if (*(int *)(param_1 + 0x74) < 0) {
      *(undefined1 *)(param_1 + 0x70) = 1;
    }
  }
  return;
}



// FUNCTION 143e96972 FUN_143e96972 body=2250 status=ok
// SIG undefined FUN_143e96972(void)

undefined8 FUN_143e96972(longlong param_1,undefined8 param_2)

{
  void *pvVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  size_t sVar5;
  undefined2 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  __uint64 _Var9;
  DataBuffer *pDVar10;
  uchar *puVar11;
  int iVar12;
  longlong *plVar13;
  undefined2 **ppuVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  ushort uVar18;
  longlong lVar19;
  ushort uVar20;
  uint uVar21;
  undefined2 ***pppuVar22;
  ulonglong uVar23;
  wchar_t *pwVar24;
  bool bVar25;
  undefined1 auStack_178 [40];
  wchar_t *local_150;
  int local_148;
  undefined4 local_144;
  void *local_140;
  int local_138;
  undefined4 local_134;
  void *local_130;
  int local_128;
  undefined4 local_124;
  wchar_t *local_120;
  int local_118;
  undefined2 *local_110;
  int local_108;
  uchar *local_100;
  uchar *local_f8;
  undefined8 uStack_f0;
  undefined1 local_e4 [4];
  undefined2 **local_e0;
  uchar **local_d8;
  undefined2 ***local_60;
  undefined2 ***local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if ((*(longlong *)(param_1 + 0x10) == 0) ||
     (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x60) == 0)) {
    uVar4 = 0;
    goto LAB_143e96cfe;
  }
  FUN_140056680(&local_e0);
  FUN_140aa5ef8(&local_110,&local_e0);
  if (local_e0 != (undefined2 **)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_e0,param_2);
  FUN_144a06df0(&local_120,&local_e0,0);
  if (local_e0 != (undefined2 **)0x0) {
    FUN_1400020a8();
  }
  local_130 = (void *)0x0;
  local_128 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x58);
  lVar17 = (longlong)local_128;
  pvVar1 = *(void **)(*(longlong *)(param_1 + 0x10) + 0x50);
  if (lVar17 == 0) {
    local_124 = 0;
  }
  else {
    FUN_1446dd670(&local_130,local_128,0);
    memcpy(local_130,pvVar1,lVar17 * 2);
  }
  puVar6 = local_110;
  local_140 = (void *)0x0;
  lVar17 = (longlong)local_108;
  local_138 = local_108;
  if (lVar17 == 0) {
    local_134 = 0;
  }
  else {
    FUN_1446dd670(&local_140,local_108,0);
    memcpy(local_140,puVar6,lVar17 * 2);
  }
  FUN_1410f2562(&local_e0);
  ppuVar14 = local_e0;
  if ((int)local_d8 == 0) {
    ppuVar14 = (undefined2 **)&DAT_149dfb77a;
  }
  FUN_14107002a(&local_140,ppuVar14);
  if (local_e0 != (undefined2 **)0x0) {
    FUN_1400020a8();
  }
  FUN_1400020e8(&local_130,local_140);
  pvVar1 = local_130;
  local_150 = (wchar_t *)0x0;
  lVar17 = (longlong)local_128;
  local_148 = local_128;
  if (lVar17 == 0) {
    local_144 = 0;
  }
  else {
    FUN_1446dd670(&local_150,local_128,0);
    memcpy(local_150,pvVar1,lVar17 * 2);
  }
  FUN_140056680(&local_e0,L"html");
  ppuVar14 = local_e0;
  if (local_118 == (int)local_d8) {
    bVar25 = true;
    if (1 < local_118) {
      iVar3 = wcscmp(local_120,(wchar_t *)local_e0);
      bVar25 = iVar3 == 0;
    }
  }
  else {
    bVar25 = (int)local_d8 + local_118 == 1;
  }
  if (ppuVar14 != (undefined2 **)0x0) {
    FUN_1400020a8(ppuVar14);
  }
  if (bVar25) {
    pwVar24 = local_150;
    if (local_148 == 0) {
      pwVar24 = L"";
    }
    plVar13 = (longlong *)**(undefined8 **)(*(longlong *)(param_1 + 0x10) + 0x60);
    local_60 = (undefined2 ***)0x0;
    if (pwVar24 == (wchar_t *)0x0) {
      local_58 = (undefined2 ***)0x0;
      local_50 = 0;
    }
    else {
      sVar5 = wcslen(pwVar24);
      local_50 = FUN_14475aa65(0,pwVar24,sVar5 & 0xffffffff);
      uVar16 = local_50 + 1;
      pppuVar22 = (undefined2 ***)0x0;
      if (0x80 < uVar16) {
        FUN_1446efa72(&local_60,0,uVar16,1);
        pppuVar22 = local_60;
      }
      local_58 = &local_e0;
      if (pppuVar22 != (undefined2 ***)0x0) {
        local_58 = pppuVar22;
      }
      FUN_14475a98a(local_58,uVar16,pwVar24,(int)sVar5 + 1);
    }
    (**(code **)(*plVar13 + 200))(plVar13,local_58);
LAB_143e96f6c:
    if (local_60 != (undefined2 ***)0x0) {
      FUN_1400020a8();
    }
LAB_143e96f7e:
    local_f8 = (uchar *)0x0;
    uStack_f0 = 0;
    puVar6 = local_110;
    if (local_108 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    FUN_14158b496(&local_f8,puVar6,0);
    local_e0 = &local_110;
    local_d8 = &local_f8;
    FUN_1489ed1f6(*(longlong *)(param_1 + 0x10) + 0x78,&local_100);
LAB_143e971cf:
    if (local_f8 != (uchar *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    FUN_140056680(&local_e0,&DAT_14b454b42);
    ppuVar14 = local_e0;
    if (local_118 == (int)local_d8) {
      bVar25 = true;
      if (1 < local_118) {
        iVar3 = wcscmp(local_120,(wchar_t *)local_e0);
        bVar25 = iVar3 == 0;
      }
    }
    else {
      bVar25 = (int)local_d8 + local_118 == 1;
    }
    if (ppuVar14 != (undefined2 **)0x0) {
      FUN_1400020a8(ppuVar14);
    }
    if (bVar25) {
      pwVar24 = local_150;
      if (local_148 == 0) {
        pwVar24 = L"";
      }
      plVar13 = (longlong *)**(undefined8 **)(*(longlong *)(param_1 + 0x10) + 0x60);
      local_60 = (undefined2 ***)0x0;
      if (pwVar24 == (wchar_t *)0x0) {
        local_58 = (undefined2 ***)0x0;
        local_50 = 0;
      }
      else {
        sVar5 = wcslen(pwVar24);
        local_50 = FUN_14475aa65(0,pwVar24,sVar5 & 0xffffffff);
        uVar16 = local_50 + 1;
        pppuVar22 = (undefined2 ***)0x0;
        if (0x80 < uVar16) {
          FUN_1446efa72(&local_60,0,uVar16,1);
          pppuVar22 = local_60;
        }
        local_58 = &local_e0;
        if (pppuVar22 != (undefined2 ***)0x0) {
          local_58 = pppuVar22;
        }
        FUN_14475a98a(local_58,uVar16,pwVar24,(int)sVar5 + 1);
      }
      (**(code **)(*plVar13 + 0xb0))(plVar13,local_58);
      goto LAB_143e96f6c;
    }
    FUN_140056680(&local_e0);
    ppuVar14 = local_e0;
    if (local_118 == (int)local_d8) {
      bVar25 = true;
      if (1 < local_118) {
        iVar3 = wcscmp(local_120,(wchar_t *)local_e0);
        bVar25 = iVar3 == 0;
      }
    }
    else {
      bVar25 = (int)local_d8 + local_118 == 1;
    }
    if (ppuVar14 != (undefined2 **)0x0) {
      FUN_1400020a8(ppuVar14);
    }
    iVar3 = local_108;
    if (bVar25) {
      lVar17 = *(longlong *)(param_1 + 0x10);
      plVar13 = (longlong *)(lVar17 + 0xd0);
      uVar15 = 0;
      iVar12 = local_108 + -1;
      if (local_108 == 0) {
        iVar12 = 0;
      }
      if (0 < iVar12) {
        puVar6 = local_110;
        if (local_108 == 0) {
          puVar6 = &DAT_149dfb77a;
        }
        lVar19 = 0;
        uVar15 = 0;
        do {
          uVar16 = ((uint)(0x19 < (ushort)puVar6[lVar19] - 0x61) * 0x20 +
                   (uint)(ushort)puVar6[lVar19]) - 0x20;
          uVar21 = (uint)(uVar15 >> 8) ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar15 ^ uVar16) & 0xff) * 4);
          uVar15 = (ulonglong)
                   (uVar21 >> 8 ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar21 & 0xff ^ uVar16 >> 8 & 0xff) * 4));
          lVar19 = lVar19 + 1;
        } while (iVar12 != (int)lVar19);
      }
      iVar12 = FUN_1489ed3de(plVar13,uVar15,&local_110);
      if ((iVar12 == -1) || (((longlong)iVar12 * 0x20 + *plVar13 + 0x10U & 0xffffffffffffffef) == 0)
         ) {
        plVar7 = (longlong *)FUN_1400dbadc();
        plVar8 = (longlong *)*plVar7;
        if (plVar8 == (longlong *)0x0) {
          plVar8 = (longlong *)FUN_140e92164();
          *plVar7 = (longlong)plVar8;
        }
        local_f8 = (uchar *)0x0;
        uStack_f0 = 0;
        puVar6 = local_110;
        if (local_108 == 0) {
          puVar6 = &DAT_149dfb77a;
        }
        plVar8 = (longlong *)(**(code **)(*plVar8 + 0xe8))(0,puVar6,1);
        _Var9 = (**(code **)(*plVar8 + 0x50))(plVar8);
        if (0 < (longlong)_Var9) {
          FUN_1401211f6(&local_f8,(int)_Var9 + 1,1);
          (**(code **)(*plVar8 + 0x20))(plVar8,local_f8,_Var9);
          pDVar10 = cohtml::DataBuffer::CreateDataBuffer
                              (local_f8,_Var9,(_func_void_uchar_ptr_void_ptr *)&DAT_143ea311e,
                               (void *)0x0);
          puVar2 = *(undefined8 **)(lVar17 + 200);
          puVar11 = (uchar *)(**(code **)*puVar2)(puVar2,pDVar10,2);
          local_100 = puVar11;
          (**(code **)(*(longlong *)pDVar10 + 0x10))(pDVar10);
          if (puVar11 != (uchar *)0x0) {
            local_d8 = &local_100;
            local_e0 = &local_110;
            FUN_1489ed4aa(plVar13,local_e4);
          }
        }
        if (plVar8 != (longlong *)0x0) {
          (**(code **)*plVar8)(plVar8,1);
        }
        iVar3 = local_108;
        if (local_f8 != (uchar *)0x0) {
          FUN_1400020a8();
          iVar3 = local_108;
        }
      }
      local_f8 = (uchar *)0x0;
      uStack_f0 = 0;
      puVar6 = local_110;
      if (iVar3 == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      FUN_14158b496(&local_f8,puVar6,0);
      local_e0 = &local_110;
      local_d8 = &local_f8;
      FUN_1489ed1f6(*(longlong *)(param_1 + 0x10) + 0x78,&local_100);
      goto LAB_143e971cf;
    }
    lVar17 = (longlong)(int)(*(longlong **)(param_1 + 0x18))[1];
    if (lVar17 != 0) {
      plVar13 = (longlong *)**(longlong **)(param_1 + 0x18);
      plVar8 = plVar13 + lVar17 * 2;
LAB_143e96d46:
      if ((int)plVar13[1] == local_118) {
        if (1 < local_118) {
          lVar17 = 0;
          do {
            uVar20 = *(ushort *)(*plVar13 + lVar17);
            uVar15 = (ulonglong)uVar20;
            uVar18 = *(ushort *)((longlong)local_120 + lVar17);
            if (uVar20 == uVar18) {
              if (uVar20 == 0) break;
            }
            else {
              if (0x7f < (uVar18 | uVar20)) goto LAB_143e96db6;
              uVar20 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
              uVar23 = (ulonglong)uVar18;
              uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar23];
              if ((&DAT_149e05da0)[uVar15] != (&DAT_149e05da0)[uVar23]) goto LAB_143e96db6;
            }
            lVar17 = lVar17 + 2;
          } while( true );
        }
      }
      else if ((int)plVar13[1] + local_118 != 1) goto LAB_143e96d5c;
      goto LAB_143e96f7e;
    }
  }
LAB_143e96cb1:
  if (local_150 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_140 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_130 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_120 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_110 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar4 = 1;
LAB_143e96cfe:
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_143e96db6:
  if (uVar20 == uVar18) goto LAB_143e96f7e;
LAB_143e96d5c:
  plVar13 = plVar13 + 2;
  if (plVar13 == plVar8) goto LAB_143e96cb1;
  goto LAB_143e96d46;
}



// FUNCTION 143e97266 FUN_143e97266 body=1548 status=ok
// SIG undefined FUN_143e97266(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff98 : 0x000143e9742b */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong FUN_143e97266(longlong param_1,char *param_2,undefined4 param_3)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined4 uVar6;
  uint uVar7;
  size_t sVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined2 *puVar14;
  longlong *plVar15;
  undefined2 *puVar16;
  uint uVar17;
  code *pcVar18;
  ulonglong uVar19;
  uint uVar20;
  bool bVar21;
  undefined1 auStack_208 [40];
  undefined2 *local_1e0;
  int local_1d8;
  undefined2 *local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b0;
  undefined1 local_1ac [4];
  char *local_1a8;
  longlong lStack_1a0;
  undefined8 *local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined2 *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  code *local_88;
  char **local_80;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_208;
  puVar16 = (undefined2 *)(param_1 + -0x118);
  local_1b0 = param_3;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar2 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar2 != 2)) {
    if (iVar2 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_143e97493;
    }
    local_a8 = (undefined2 *)0x0;
    local_1d0 = puVar16;
    if (param_2 == (char *)0x0) {
      local_a0 = 0;
      local_98 = 0;
    }
    else {
      sVar8 = strlen(param_2);
      FUN_1446e6fe8(&local_1a8,param_2,sVar8 & 0xffffffff,1);
    }
    FUN_140056680(&local_1c8,local_a0);
    local_1b8 = local_1b0;
    pcVar18 = (code *)0x0;
    local_88 = (code *)0x0;
    puVar9 = (undefined8 *)FUN_14001cc68(0x28,8);
    *puVar9 = &PTR_FUN_14b4570e0;
    puVar13 = puVar9 + 1;
    *puVar13 = local_1d0;
    puVar9[2] = local_1c8;
    local_1c8 = 0;
    *(undefined4 *)(puVar9 + 3) = (undefined4)local_1c0;
    *(undefined4 *)((longlong)puVar9 + 0x1c) = local_1c0._4_4_;
    local_1c0 = 0;
    *(undefined4 *)(puVar9 + 4) = local_1b8;
    if (puVar13 != (undefined8 *)0x0) {
      pcVar18 = FUN_143ea6bc4;
      local_88 = FUN_143ea6bc4;
    }
    puVar10 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    *puVar10 = 0;
    puVar10[2] = pcVar18;
    puVar10[4] = puVar9;
    local_78 = 0;
    *(undefined4 *)(puVar10 + 8) = local_58;
    *(undefined4 *)((longlong)puVar10 + 0x44) = uStack_54;
    *(undefined4 *)(puVar10 + 9) = uStack_50;
    *(undefined4 *)((longlong)puVar10 + 0x4c) = uStack_4c;
    *(undefined4 *)(puVar10 + 6) = local_68;
    *(undefined4 *)((longlong)puVar10 + 0x34) = uStack_64;
    *(undefined4 *)(puVar10 + 7) = uStack_60;
    *(undefined4 *)((longlong)puVar10 + 0x3c) = uStack_5c;
    if (puVar13 != (undefined8 *)0x0) {
      local_88 = (code *)0x0;
    }
    uVar11 = 0;
    if (puVar10 != (undefined8 *)0x0) {
      LOCK();
      puVar1 = *(ulonglong **)(param_1 + 600);
      *(undefined8 **)(param_1 + 600) = puVar10;
      UNLOCK();
      LOCK();
      uVar11 = *puVar1;
      *puVar1 = (ulonglong)puVar10;
      UNLOCK();
      if (local_88 != (code *)0x0) {
        uVar11 = (**(code **)(CONCAT44(uStack_64,local_68) + 0x10))();
      }
    }
    puVar14 = local_a8;
    if (local_1c8 != 0) {
      uVar11 = FUN_1400020a8();
      puVar14 = local_a8;
    }
  }
  else {
LAB_143e97493:
    local_1a8 = "CohtmlPlugin";
    lStack_1a0 = CONCAT35(lStack_1a0._5_3_,0xc);
    uVar6 = FUN_14001a6c0(&local_1a8,1);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
    FUN_1402c9134(&DAT_14c874628,uVar6,&local_1a8,1);
    uVar11 = (ulonglong)(DAT_14cb90d58 == 0);
    if ((DAT_14cb90d50 == (longlong *)0x0 || DAT_14cb90d58 == 0) ||
       (uVar11 = (**(code **)(*DAT_14cb90d50 + 0x30))(), (char)uVar11 == '\0')) goto LAB_143e97452;
    local_a8 = (undefined2 *)0x0;
    if (param_2 == (char *)0x0) {
      local_a0 = 0;
      local_98 = 0;
    }
    else {
      sVar8 = strlen(param_2);
      FUN_1446e6fe8(&local_1a8,param_2,sVar8 & 0xffffffff,1);
    }
    FUN_140056680(&local_1d0,local_a0);
    if (local_a8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    plVar15 = DAT_14cb90d50;
    if (DAT_14cb90d58 == 0) {
      plVar15 = (longlong *)0x0;
    }
    lVar12 = (**(code **)(*plVar15 + 0x58))(plVar15,&local_1d0);
    uVar11 = 0;
    puVar14 = local_1d0;
    if (lVar12 != 0) {
      if ((int)local_1c8 == 0) {
        puVar14 = &DAT_149dfb77a;
      }
      FUN_140002266(&local_1e0,L"PrysmCustomEffectRT_%s_%d",puVar14,local_1b0);
      local_1a8 = (char *)0x0;
      lStack_1a0 = 0;
      local_198 = (undefined8 *)0x0;
      local_188 = 0xffffffff;
      local_1a8 = (char *)FUN_14090ceee(lVar12,0,0);
      local_188 = 0xffffffff;
      local_190 = 0xffffffffffffffff;
      lVar12 = FUN_1489e0720(puVar16);
      if (lVar12 == 0) {
        puVar16 = local_1e0;
        if (local_1d8 == 0) {
          puVar16 = &DAT_149dfb77a;
        }
        lStack_1a0 = lVar12;
        FUN_1446f470e(&local_88,puVar16,1);
        lVar12 = FUN_143e8757d(3,1,1,&local_88);
      }
      lStack_1a0 = lVar12;
      puVar13 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      FUN_1456bc4c4(puVar13,lVar12);
      puVar9 = local_198;
      if (local_198 != (undefined8 *)0x0) {
        puVar10 = (undefined8 *)*local_198;
        local_198 = puVar13;
        (*(code *)*puVar10)(puVar9,1);
        puVar13 = local_198;
      }
      local_198 = puVar13;
      local_88 = (code *)&local_1b0;
      local_80 = &local_1a8;
      FUN_1489ee278(param_1 + 0x1a0,local_1ac);
      uVar6 = local_1b0;
      *(short *)(param_1 + 0x94) = *(short *)(param_1 + 0x94) + 1;
      if (local_1a8 == (char *)0x0) {
        uVar20 = 0;
        uVar19 = 0;
      }
      else {
        uVar20 = *(uint *)(local_1a8 + 0xc);
        if ((int)uVar20 < DAT_14c9647dc) {
          lVar12 = (ulonglong)((uVar20 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8);
        }
        else {
          lVar12 = 0;
        }
        uVar19 = (ulonglong)*(uint *)(lVar12 + 0x10);
        if (*(uint *)(lVar12 + 0x10) == 0) {
          LOCK();
          iVar2 = DAT_14c964868 + 1;
          UNLOCK();
          uVar17 = DAT_14c964868 + 1;
          bVar21 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar2;
          if (bVar21) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar17);
          }
          LOCK();
          uVar7 = *(uint *)(lVar12 + 0x10);
          bVar21 = uVar7 == 0;
          if (bVar21) {
            *(uint *)(lVar12 + 0x10) = uVar17;
            uVar7 = 0;
          }
          UNLOCK();
          if (bVar21) {
            uVar7 = uVar17;
          }
          uVar19 = (ulonglong)uVar7;
        }
      }
      uVar3 = local_188;
      iVar2 = *(int *)(param_1 + 0x198);
      *(uint *)(param_1 + 0x198) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x19c) < iVar2 + 1U) {
        FUN_1489ee5a0((ulonglong *)(param_1 + 400),iVar2);
      }
      uVar11 = *(ulonglong *)(param_1 + 400);
      lVar12 = (longlong)iVar2 * 0x1c;
      *(ulonglong *)(uVar11 + lVar12) = (ulonglong)uVar20 | uVar19 << 0x20;
      *(undefined8 *)(uVar11 + 8 + lVar12) = 0;
      *(undefined4 *)(uVar11 + 0x10 + lVar12) = uVar6;
      *(undefined4 *)(uVar11 + 0x14 + lVar12) = uVar3;
      *(undefined1 *)(uVar11 + 0x18 + lVar12) = 0;
      if (local_198 != (undefined8 *)0x0) {
        uVar11 = (**(code **)*local_198)(local_198,1);
      }
      puVar14 = local_1d0;
      if (local_1e0 != (undefined2 *)0x0) {
        uVar11 = FUN_1400020a8();
        puVar14 = local_1d0;
      }
    }
  }
  if (puVar14 != (undefined2 *)0x0) {
    uVar11 = FUN_1400020a8();
  }
LAB_143e97452:
  if ((local_40 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e97874 FUN_143e97874 body=576 status=ok
// SIG undefined FUN_143e97874(void)

ulonglong FUN_143e97874(longlong param_1,longlong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined2 *puVar3;
  code *pcVar4;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  undefined1 *local_78;
  code *local_70;
  undefined8 local_68;
  undefined1 local_60 [8];
  code *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_48 = (undefined2 *)param_2[3];
  FUN_1400021e4(&local_48,local_38);
  if (*(uint *)(param_1 + 0x360) < *(uint *)(param_1 + 0x368)) {
    FUN_1400b22c2(&local_48,"CustomEffect_Pooled_Texture");
    puVar3 = local_48;
    if (local_40 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_68,puVar3,1);
    if (DAT_14cb0b9a0 == 0) {
      local_80 = &local_58;
      local_58 = FUN_1449e2820;
      local_70 = FUN_14081d0ea;
      local_78 = &LAB_146408884;
      local_88 = &LAB_147d719e1;
      local_90 = &LAB_140fb41fe;
      local_98 = L"Engine";
      local_a0 = 0;
      local_a8 = 0x10000000;
      local_b0 = 8;
      local_b8 = 0x168;
      FUN_14081cfa3(L"/Script/Engine",L"TextureRenderTarget2D",&DAT_14cb0b9a0,&DAT_147d719e0);
    }
    local_b8 = 0;
    FUN_140af9fb2(local_60,DAT_14c951640,DAT_14cb0b9a0,local_68);
    FUN_1400021e4(local_60,&local_58);
    pcVar4 = local_58;
    if (local_50 == 0) {
      pcVar4 = (code *)&DAT_149dfb77a;
    }
    (**(code **)(*param_2 + 0x170))(param_2,pcVar4,0,0);
    if (local_58 != (code *)0x0) {
      FUN_1400020a8();
    }
    if (param_2 != (longlong *)0x0) {
      FUN_1401924dc(param_2);
    }
    iVar1 = *(int *)(param_1 + 0x360);
    *(uint *)(param_1 + 0x360) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x364) < iVar1 + 1U) {
      FUN_1489ef60c((ulonglong *)(param_1 + 0x358),iVar1);
    }
    uVar2 = *(ulonglong *)(param_1 + 0x358);
    *(longlong **)(uVar2 + (longlong)iVar1 * 8) = param_2;
    if (local_48 != (undefined2 *)0x0) {
      uVar2 = FUN_1400020a8();
    }
  }
  else {
    uVar2 = (ulonglong)*(uint *)(param_1 + 8);
  }
  if (local_38[0] != 0) {
    uVar2 = FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 143e97ab6 FUN_143e97ab6 body=656 status=ok
// SIG undefined FUN_143e97ab6(void)

void FUN_143e97ab6(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  DWORD DVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
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
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined8 local_a8 [14];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_178;
  iVar7 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_143e97aff;
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      if (DVar5 == DVar6) goto LAB_143e97b04;
      goto LAB_143e97b2b;
    }
  }
  else {
LAB_143e97aff:
    if (iVar7 != 0x10) {
LAB_143e97b2b:
      if (*(int *)(param_1 + 0xf8) != *(int *)(param_1 + 0x124)) {
        lVar9 = param_1 + 0x128;
        if (*(longlong *)(param_1 + 0x130) != 0) {
          lVar9 = *(longlong *)(param_1 + 0x130);
        }
        iVar7 = *(int *)(lVar9 + (ulonglong)
                                 (*(int *)(param_1 + 0x138) - 1U & *(uint *)(param_1 + 0x90)) * 4);
        if (iVar7 != -1) {
          do {
            lVar9 = *(longlong *)(param_1 + 0xf0) + (longlong)iVar7 * 0x20;
            if (*(uint *)(*(longlong *)(param_1 + 0xf0) + (longlong)iVar7 * 0x20) ==
                *(uint *)(param_1 + 0x90)) {
              plVar10 = (longlong *)(lVar9 + 8);
              if (plVar10 != (longlong *)0x0 && lVar9 != 0) {
                uVar2 = *(undefined4 *)(param_2 + 0x10);
                local_b8 = *(undefined4 *)(param_2 + 0x44);
                local_c8 = *(undefined8 *)(param_2 + 0x34);
                uStack_c0 = *(undefined8 *)(param_2 + 0x3c);
                local_d8 = *(undefined8 *)(param_2 + 0x24);
                uStack_d0 = *(undefined8 *)(param_2 + 0x2c);
                local_e8 = *(undefined8 *)(param_2 + 0x14);
                uStack_e0 = *(undefined8 *)(param_2 + 0x1c);
                local_f8 = *(undefined8 *)(param_2 + 0x48);
                uStack_f0 = *(undefined8 *)(param_2 + 0x50);
                local_108 = *(undefined8 *)(param_2 + 0x58);
                uStack_100 = *(undefined8 *)(param_2 + 0x60);
                local_118 = *(undefined8 *)(param_2 + 0x68);
                uStack_110 = *(undefined8 *)(param_2 + 0x70);
                uVar3 = *(undefined8 *)(param_2 + 0x78);
                local_158 = *(undefined4 *)(param_2 + 0x80);
                uStack_154 = *(undefined4 *)(param_2 + 0x84);
                uStack_150 = *(undefined4 *)(param_2 + 0x88);
                uStack_14c = *(undefined4 *)(param_2 + 0x8c);
                local_148 = *(undefined4 *)(param_2 + 0x90);
                uStack_144 = *(undefined4 *)(param_2 + 0x94);
                uStack_140 = *(undefined4 *)(param_2 + 0x98);
                uStack_13c = *(undefined4 *)(param_2 + 0x9c);
                local_138 = *(undefined4 *)(param_2 + 0xa0);
                uStack_134 = *(undefined4 *)(param_2 + 0xa4);
                uStack_130 = *(undefined4 *)(param_2 + 0xa8);
                uStack_12c = *(undefined4 *)(param_2 + 0xac);
                local_128 = *(undefined4 *)(param_2 + 0xb0);
                uStack_124 = *(undefined4 *)(param_2 + 0xb4);
                uStack_120 = *(undefined4 *)(param_2 + 0xb8);
                uStack_11c = *(undefined4 *)(param_2 + 0xbc);
                uVar4 = *(undefined8 *)(param_2 + 0xc0);
                puVar11 = (undefined8 *)(param_2 + 200);
                puVar12 = local_a8;
                for (lVar8 = 0xe; lVar8 != 0; lVar8 = lVar8 + -1) {
                  *puVar12 = *puVar11;
                  puVar11 = puVar11 + 1;
                  puVar12 = puVar12 + 1;
                }
                iVar7 = *(int *)(lVar9 + 0x10);
                *(uint *)(lVar9 + 0x10) = iVar7 + 1U;
                if (*(uint *)(lVar9 + 0x14) < iVar7 + 1U) {
                  FUN_1489ee722(plVar10,iVar7);
                }
                puVar1 = (undefined4 *)(*plVar10 + (longlong)iVar7 * 0x128);
                *puVar1 = uVar2;
                puVar1[0xd] = local_b8;
                *(undefined8 *)(puVar1 + 9) = local_c8;
                *(undefined8 *)(puVar1 + 0xb) = uStack_c0;
                *(undefined8 *)(puVar1 + 5) = local_d8;
                *(undefined8 *)(puVar1 + 7) = uStack_d0;
                *(undefined8 *)(puVar1 + 1) = local_e8;
                *(undefined8 *)(puVar1 + 3) = uStack_e0;
                *(undefined8 *)(puVar1 + 0xe) = local_f8;
                *(undefined8 *)(puVar1 + 0x10) = uStack_f0;
                *(undefined8 *)(puVar1 + 0x12) = local_108;
                *(undefined8 *)(puVar1 + 0x14) = uStack_100;
                *(undefined8 *)(puVar1 + 0x16) = local_118;
                *(undefined8 *)(puVar1 + 0x18) = uStack_110;
                *(undefined8 *)(puVar1 + 0x1a) = uVar3;
                *(ulonglong *)(puVar1 + 0x28) = CONCAT44(uStack_124,local_128);
                *(ulonglong *)(puVar1 + 0x2a) = CONCAT44(uStack_11c,uStack_120);
                *(ulonglong *)(puVar1 + 0x20) = CONCAT44(uStack_144,local_148);
                *(ulonglong *)(puVar1 + 0x22) = CONCAT44(uStack_13c,uStack_140);
                puVar1[0x1c] = local_158;
                puVar1[0x1d] = uStack_154;
                puVar1[0x1e] = uStack_150;
                puVar1[0x1f] = uStack_14c;
                *(ulonglong *)(puVar1 + 0x24) = CONCAT44(uStack_134,local_138);
                *(ulonglong *)(puVar1 + 0x26) = CONCAT44(uStack_12c,uStack_130);
                *(undefined8 *)(puVar1 + 0x2c) = uVar4;
                puVar11 = local_a8;
                puVar12 = (undefined8 *)(puVar1 + 0x2e);
                for (lVar9 = 0xe; lVar9 != 0; lVar9 = lVar9 + -1) {
                  *puVar12 = *puVar11;
                  puVar11 = puVar11 + 1;
                  puVar12 = puVar12 + 1;
                }
              }
              break;
            }
            iVar7 = *(int *)(lVar9 + 0x18);
          } while (iVar7 != -1);
        }
      }
      goto LAB_143e97d0e;
    }
  }
LAB_143e97b04:
  *(undefined1 *)(param_1 + 0x96) = 1;
LAB_143e97d0e:
  if ((local_38 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e97d48 FUN_143e97d48 body=4719 status=ok
// SIG undefined FUN_143e97d48(void)

void FUN_143e97d48(longlong param_1,ulonglong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  DWORD DVar10;
  DWORD DVar11;
  undefined4 *puVar12;
  uint *puVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  uint uVar18;
  wchar_t *pwVar19;
  uint *puVar20;
  ulonglong uVar21;
  longlong *plVar22;
  int iVar23;
  undefined *puVar24;
  undefined1 auStack_f8 [32];
  code **local_d8;
  DWORD local_cc;
  ulonglong local_c8;
  ulonglong uStack_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined1 local_b0;
  longlong local_a8;
  undefined4 *local_a0;
  code **local_98;
  undefined1 local_8c [4];
  code *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined4 local_68 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  cVar3 = (char)param_2[3];
  if (cVar3 == '\x02') {
    uVar21 = *param_2;
    uVar6 = param_2[1];
    uVar8 = param_2[2];
    uVar5 = *(undefined4 *)((longlong)param_2 + 0x14);
    lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar23 = *(int *)(lVar14 + 0xc60);
    if (DAT_14c86a9fc == 0) {
      if (iVar23 == 2) goto LAB_143e98b41;
      if (iVar23 != 1) goto LAB_143e97f97;
      DVar10 = FUN_140ad26c0();
      DVar11 = GetCurrentThreadId();
      if (DVar10 == DVar11) goto LAB_143e98b41;
    }
    else {
LAB_143e97f97:
      if (iVar23 == 0x10) goto LAB_143e98b41;
    }
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar23 = *(int *)(lVar14 + 0xc60), iVar23 == 2)) {
LAB_143e98b41:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_f8);
      }
      if (iVar23 == 1) {
        DVar10 = FUN_140ad26c0();
        DVar11 = GetCurrentThreadId();
        if (DVar10 == DVar11) goto LAB_143e98b41;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar15 = (undefined8 *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x308);
      puVar13 = (uint *)*puVar15;
      if (puVar13 != (uint *)0x0) goto LAB_143e980f2;
      while( true ) {
        uVar9 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar9 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar9 | 1;
          __tlregdtor(&LAB_143ea3853);
        }
        lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar12 = *(undefined4 **)(lVar14 + 0x310);
        *(undefined8 *)(lVar14 + 0x310) = 0;
        if (puVar12 == (undefined4 *)0x0) {
          puVar12 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar12 = 0xffffffff;
        *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
        puVar12[0x12] = 0;
        *puVar15 = puVar12;
        FUN_140217a48(puVar15);
        puVar13 = (uint *)*puVar15;
LAB_143e980f2:
        plVar22 = (longlong *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar20 = (uint *)(plVar22 + 0x1a);
        uVar9 = puVar13[0x12];
        if (puVar20 <= puVar13 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
          LOCK();
          uVar18 = *puVar13;
          *puVar13 = *puVar13 + uVar9 + 1;
          UNLOCK();
          if ((uVar18 ^ uVar9) != 0xffffffff) break;
          puVar13 = (uint *)*puVar15;
          *puVar13 = 0xffffffff;
          *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
          puVar13[0x12] = 0;
          *puVar15 = puVar13;
          plVar22 = (longlong *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
          puVar20 = (uint *)(plVar22 + 0x1a);
          uVar9 = 0;
          if (puVar20 <= puVar13 + 0x4000) {
            uVar9 = 1;
            goto LAB_143e98172;
          }
        }
      }
      uVar9 = uVar9 + 1;
LAB_143e98172:
      *(uint **)(puVar13 + 0x10) = puVar20;
      puVar13[0x12] = uVar9;
      iVar23 = 0;
      FUN_1447247dc(plVar22,0);
      *plVar22 = (longlong)&PTR_FUN_14b4572f0;
      plVar22[0x15] = param_1;
      plVar22[0x16] = uVar21;
      plVar22[0x17] = uVar6;
      *(int *)(plVar22 + 0x18) = (int)uVar8;
      *(undefined4 *)((longlong)plVar22 + 0xc4) = uVar5;
      *(undefined1 *)(plVar22 + 0x19) = 2;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar9 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar9 < 2) {
          uVar21 = (ulonglong)(byte)(&DAT_149e38edc)[uVar9];
          iVar23 = 0;
        }
        else {
          uVar21 = 2;
        }
      }
      else {
        iVar23 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar21 = 5;
      }
      if (*(code **)(plVar22[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(plVar22[0xe] + 0x18))(plVar22 + 0xe,plVar22 + 9);
      }
      plVar22[0xe] = (longlong)
                     LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      plVar22[9] = (longlong)plVar22;
      plVar22[10] = (longlong)plVar22;
      lVar14 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar14 == 0) {
        uVar6 = 1;
        if ((char)uVar21 != '\x06') {
          uVar6 = uVar21;
        }
        uVar21 = uVar6;
        lVar14 = 0;
      }
      else {
        if ((char)uVar21 == '\x06') {
          uVar21 = *(ulonglong *)(lVar14 + 0x38) >> 0x3b;
        }
        lVar14 = *(longlong *)(lVar14 + 0x30);
      }
      plVar22[0xf] = lVar14;
      plVar22[0x10] = uVar21 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)plVar22 + 0x1c) = iVar23;
      if (plVar22 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
        UNLOCK();
        local_88 = (code *)CONCAT71(local_88._1_7_,1);
        FUN_1447439e4(plVar22);
        LOCK();
        plVar1 = plVar22 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 != 0) goto LAB_143e987e5;
        puVar15 = (undefined8 *)*plVar22;
        goto LAB_143e98c92;
      }
      local_88 = (code *)CONCAT71(local_88._1_7_,1);
LAB_143e98b2e:
      FUN_1447439e4(0);
      goto LAB_143e987e5;
    }
    local_88 = (code *)0x0;
    local_78 = (longlong *)FUN_14001cc68(0x30,8);
    *local_78 = (longlong)&PTR_LAB_14b457260;
    local_78[1] = param_1;
    local_78[2] = uVar21;
    local_78[3] = uVar6;
    *(int *)(local_78 + 4) = (int)uVar8;
    *(undefined4 *)((longlong)local_78 + 0x24) = uVar5;
    *(undefined1 *)(local_78 + 5) = 2;
    if (local_78 + 1 != (longlong *)0x0) {
      local_88 = (code *)&LAB_143ea792a;
    }
    pwVar19 = L"RemoveFCustomEffectDrawData_RenderThreadCopy_Texture";
    puVar24 = &DAT_14cb913e4;
LAB_143e987c1:
    local_d8 = &local_88;
    FUN_14005a792(&DAT_14ca9a440,pwVar19,puVar24);
    if (local_88 != (code *)0x0) {
      plVar22 = local_78;
      if (local_78 == (longlong *)0x0) {
        plVar22 = (longlong *)local_68;
      }
      (**(code **)(*plVar22 + 0x10))();
    }
    goto LAB_143e987e5;
  }
  if (cVar3 == '\x01') {
    uVar21 = *param_2;
    uVar6 = param_2[1];
    uVar9 = (uint)param_2[2];
    uVar5 = *(undefined4 *)((longlong)param_2 + 0x14);
    lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar23 = *(int *)(lVar14 + 0xc60);
    if (DAT_14c86a9fc == 0) {
      if (iVar23 != 2) {
        if (iVar23 != 1) goto LAB_143e97ef2;
        DVar10 = FUN_140ad26c0();
        DVar11 = GetCurrentThreadId();
        if (DVar10 == DVar11) goto LAB_143e97efb;
        goto LAB_143e9870f;
      }
    }
    else {
LAB_143e97ef2:
      if (iVar23 != 0x10) {
LAB_143e9870f:
        if (DAT_14ca9a438 == '\0') {
          if ((DAT_14c86a9f8 != '\x01') || (iVar23 = *(int *)(lVar14 + 0xc60), iVar23 == 2)) {
LAB_143e98e01:
            if (*(int *)(param_1 + 0x310) != *(int *)(param_1 + 0x33c)) {
              lVar14 = param_1 + 0x340;
              if (*(longlong *)(param_1 + 0x348) != 0) {
                lVar14 = *(longlong *)(param_1 + 0x348);
              }
              iVar23 = *(int *)(lVar14 + (ulonglong)(*(int *)(param_1 + 0x350) - 1U & uVar9) * 4);
              if (iVar23 != -1) {
                do {
                  lVar14 = *(longlong *)(param_1 + 0x308) + (longlong)iVar23 * 0x38;
                  if (*(uint *)(*(longlong *)(param_1 + 0x308) + (longlong)iVar23 * 0x38) == uVar9)
                  goto LAB_143e98e65;
                  iVar23 = *(int *)(lVar14 + 0x30);
                } while (iVar23 != -1);
              }
            }
            goto LAB_143e987e5;
          }
          if (iVar23 == 1) {
            DVar10 = FUN_140ad26c0();
            DVar11 = GetCurrentThreadId();
            if (DVar10 == DVar11) goto LAB_143e98e01;
          }
        }
        if (DAT_14ca9a43c != 0) {
          local_88 = (code *)0x0;
          local_78 = (longlong *)FUN_14001cc68(0x30,8);
          *local_78 = (longlong)&PTR_LAB_14b4571c0;
          local_78[1] = param_1;
          local_78[2] = uVar21;
          local_78[3] = uVar6;
          *(uint *)(local_78 + 4) = uVar9;
          *(undefined4 *)((longlong)local_78 + 0x24) = uVar5;
          *(undefined1 *)(local_78 + 5) = 1;
          if (local_78 + 1 != (longlong *)0x0) {
            local_88 = FUN_143ea748c;
          }
          pwVar19 = L"UpdateFCustomEffectDrawData_RenderThreadCopy_Texture";
          puVar24 = &DAT_14cb913e0;
          goto LAB_143e987c1;
        }
        puVar15 = (undefined8 *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x308);
        puVar13 = (uint *)*puVar15;
        if (puVar13 != (uint *)0x0) goto LAB_143e988b3;
        while( true ) {
          uVar18 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar18 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar18 | 1;
            __tlregdtor(&LAB_143ea3853);
          }
          lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar12 = *(undefined4 **)(lVar14 + 0x310);
          *(undefined8 *)(lVar14 + 0x310) = 0;
          if (puVar12 == (undefined4 *)0x0) {
            puVar12 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar12 = 0xffffffff;
          *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar15 = puVar12;
          FUN_140217a48(puVar15);
          puVar13 = (uint *)*puVar15;
LAB_143e988b3:
          plVar22 = (longlong *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar20 = (uint *)(plVar22 + 0x1a);
          uVar18 = puVar13[0x12];
          if (puVar20 <= puVar13 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
            LOCK();
            uVar2 = *puVar13;
            *puVar13 = *puVar13 + uVar18 + 1;
            UNLOCK();
            if ((uVar2 ^ uVar18) != 0xffffffff) break;
            puVar13 = (uint *)*puVar15;
            *puVar13 = 0xffffffff;
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
            puVar13[0x12] = 0;
            *puVar15 = puVar13;
            plVar22 = (longlong *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
            puVar20 = (uint *)(plVar22 + 0x1a);
            uVar18 = 0;
            if (puVar20 <= puVar13 + 0x4000) {
              uVar18 = 1;
              goto LAB_143e98933;
            }
          }
        }
        uVar18 = uVar18 + 1;
LAB_143e98933:
        *(uint **)(puVar13 + 0x10) = puVar20;
        puVar13[0x12] = uVar18;
        iVar23 = 0;
        FUN_1447247dc(plVar22,0);
        *plVar22 = (longlong)&PTR_FUN_14b457250;
        plVar22[0x15] = param_1;
        plVar22[0x16] = uVar21;
        plVar22[0x17] = uVar6;
        *(uint *)(plVar22 + 0x18) = uVar9;
        *(undefined4 *)((longlong)plVar22 + 0xc4) = uVar5;
        *(undefined1 *)(plVar22 + 0x19) = 1;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar9 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar9 < 2) {
            uVar21 = (ulonglong)(byte)(&DAT_149e38edc)[uVar9];
            iVar23 = 0;
          }
          else {
            uVar21 = 2;
          }
        }
        else {
          iVar23 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar21 = 5;
        }
        if (*(code **)(plVar22[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(plVar22[0xe] + 0x18))(plVar22 + 0xe,plVar22 + 9);
        }
        plVar22[0xe] = (longlong)
                       LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        plVar22[9] = (longlong)plVar22;
        plVar22[10] = (longlong)plVar22;
        lVar14 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar14 == 0) {
          uVar6 = 1;
          if ((char)uVar21 != '\x06') {
            uVar6 = uVar21;
          }
          uVar21 = uVar6;
          lVar14 = 0;
        }
        else {
          if ((char)uVar21 == '\x06') {
            uVar21 = *(ulonglong *)(lVar14 + 0x38) >> 0x3b;
          }
          lVar14 = *(longlong *)(lVar14 + 0x30);
        }
        plVar22[0xf] = lVar14;
        plVar22[0x10] = uVar21 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)plVar22 + 0x1c) = iVar23;
        if (plVar22 == (longlong *)0x0) {
          local_88 = (code *)CONCAT71(local_88._1_7_,1);
          goto LAB_143e98b2e;
        }
        LOCK();
        *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
        UNLOCK();
        local_88 = (code *)CONCAT71(local_88._1_7_,1);
        FUN_1447439e4(plVar22);
        LOCK();
        plVar1 = plVar22 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 != 0) goto LAB_143e987e5;
        puVar15 = (undefined8 *)*plVar22;
        goto LAB_143e98c92;
      }
    }
LAB_143e97efb:
    if (*(int *)(param_1 + 0x310) != *(int *)(param_1 + 0x33c)) {
      lVar14 = param_1 + 0x340;
      if (*(longlong *)(param_1 + 0x348) != 0) {
        lVar14 = *(longlong *)(param_1 + 0x348);
      }
      iVar23 = *(int *)(lVar14 + (ulonglong)(*(int *)(param_1 + 0x350) - 1U & uVar9) * 4);
      if (iVar23 != -1) {
        do {
          lVar14 = *(longlong *)(param_1 + 0x308) + (longlong)iVar23 * 0x38;
          if (*(uint *)(*(longlong *)(param_1 + 0x308) + (longlong)iVar23 * 0x38) == uVar9)
          goto LAB_143e98e65;
          iVar23 = *(int *)(lVar14 + 0x30);
        } while (iVar23 != -1);
      }
    }
  }
  else {
    if (cVar3 != '\0') goto LAB_143e987e5;
    uVar21 = *param_2;
    uVar6 = param_2[1];
    uVar5 = (undefined4)param_2[2];
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
    local_b0 = 0;
    lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar23 = *(int *)(lVar14 + 0xc60);
    local_c8 = uVar21;
    uStack_c0 = uVar6;
    local_b8 = uVar5;
    local_b4 = uVar4;
    local_a8 = param_1;
    if (DAT_14c86a9fc == 0) {
      if (iVar23 != 2) {
        if (iVar23 != 1) goto LAB_143e97dea;
        local_cc = FUN_140ad26c0();
        DVar10 = GetCurrentThreadId();
        if (local_cc == DVar10) goto LAB_143e98b7e;
        goto LAB_143e97df3;
      }
    }
    else {
LAB_143e97dea:
      if (iVar23 != 0x10) {
LAB_143e97df3:
        if (DAT_14ca9a438 == '\0') {
          if ((DAT_14c86a9f8 != '\x01') || (iVar23 = *(int *)(lVar14 + 0xc60), iVar23 == 2))
          goto LAB_143e98b7e;
          if (iVar23 == 1) {
            local_cc = FUN_140ad26c0();
            DVar10 = GetCurrentThreadId();
            if (local_cc == DVar10) goto LAB_143e98b7e;
          }
        }
        if (DAT_14ca9a43c == 0) {
          puVar15 = (undefined8 *)
                    (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x308);
          puVar13 = (uint *)*puVar15;
          if (puVar13 != (uint *)0x0) goto LAB_143e9829f;
          while( true ) {
            uVar9 = *(uint *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x318);
            if ((uVar9 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar9 | 1;
              __tlregdtor(&LAB_143ea3853);
            }
            lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            puVar12 = *(undefined4 **)(lVar14 + 0x310);
            *(undefined8 *)(lVar14 + 0x310) = 0;
            if (puVar12 == (undefined4 *)0x0) {
              puVar12 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar12 = 0xffffffff;
            *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
            puVar12[0x12] = 0;
            *puVar15 = puVar12;
            FUN_140217a48(puVar15);
            puVar13 = (uint *)*puVar15;
LAB_143e9829f:
            plVar22 = (longlong *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
            puVar20 = (uint *)(plVar22 + 0x1a);
            uVar9 = puVar13[0x12];
            if (puVar20 <= puVar13 + 0x4000) break;
            while( true ) {
              *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
              LOCK();
              uVar18 = *puVar13;
              *puVar13 = *puVar13 + uVar9 + 1;
              UNLOCK();
              if ((uVar18 ^ uVar9) != 0xffffffff) break;
              puVar13 = (uint *)*puVar15;
              *puVar13 = 0xffffffff;
              *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
              puVar13[0x12] = 0;
              *puVar15 = puVar13;
              plVar22 = (longlong *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
              puVar20 = (uint *)(plVar22 + 0x1a);
              uVar9 = 0;
              if (puVar20 <= puVar13 + 0x4000) {
                uVar9 = 1;
                goto LAB_143e9831f;
              }
            }
          }
          uVar9 = uVar9 + 1;
LAB_143e9831f:
          *(uint **)(puVar13 + 0x10) = puVar20;
          puVar13[0x12] = uVar9;
          FUN_1447247dc(plVar22,0);
          *plVar22 = (longlong)&PTR_FUN_14b4571a8;
          plVar22[0x15] = 0;
          plVar22[0x16] = 0;
          *(undefined4 *)((longlong)plVar22 + 0xbc) = 0xffffffff;
          if ((ulonglong *)(plVar22 + 0x15) != &local_c8) {
            plVar22[0x15] = local_c8;
            plVar22[0x16] = uStack_c0;
            *(undefined4 *)(plVar22 + 0x17) = local_b8;
            *(undefined4 *)((longlong)plVar22 + 0xbc) = local_b4;
            *(undefined1 *)(plVar22 + 0x18) = local_b0;
            local_c8 = 0;
            uStack_c0 = 0;
            local_b0 = 3;
          }
          plVar22[0x19] = local_a8;
          if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
            uVar9 = DAT_14c7585c8 >> 10 & 3;
            iVar23 = 0;
            if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar9 < 2) {
              uVar21 = (ulonglong)(byte)(&DAT_149e38edc)[uVar9];
              iVar23 = 0;
            }
            else {
              uVar21 = 2;
            }
          }
          else {
            iVar23 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                     *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
            uVar21 = 5;
          }
          if (*(code **)(plVar22[0xe] + 0x18) != FUN_144713626) {
            (**(code **)(plVar22[0xe] + 0x18))(plVar22 + 0xe,plVar22 + 9);
          }
          plVar22[0xe] = (longlong)
                         LowLevelTasks::
                         TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                         TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                         ::vftable;
          plVar22[9] = (longlong)plVar22;
          plVar22[10] = (longlong)plVar22;
          lVar14 = *(longlong *)
                    (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x2b8);
          if (lVar14 == 0) {
            uVar6 = 1;
            if ((char)uVar21 != '\x06') {
              uVar6 = uVar21;
            }
            uVar21 = uVar6;
            lVar14 = 0;
          }
          else {
            if ((char)uVar21 == '\x06') {
              uVar21 = *(ulonglong *)(lVar14 + 0x38) >> 0x3b;
            }
            lVar14 = *(longlong *)(lVar14 + 0x30);
          }
          plVar22[0xf] = lVar14;
          plVar22[0x10] = uVar21 << 0x3b | 0xc00000527800b400;
          *(int *)((longlong)plVar22 + 0x1c) = iVar23;
          if (plVar22 == (longlong *)0x0) {
            local_88 = (code *)CONCAT71(local_88._1_7_,1);
            goto LAB_143e98b2e;
          }
          LOCK();
          *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
          UNLOCK();
          local_88 = (code *)CONCAT71(local_88._1_7_,1);
          FUN_1447439e4(plVar22);
          LOCK();
          plVar1 = plVar22 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 != 0) goto LAB_143e987e5;
          puVar15 = (undefined8 *)*plVar22;
          goto LAB_143e98c92;
        }
        local_88 = (code *)0x0;
        local_78 = (longlong *)FUN_14001cc68(0x30,8);
        *local_78 = (longlong)&PTR_LAB_14b457120;
        local_c8 = 0;
        uStack_c0 = 0;
        local_b0 = 3;
        local_78[1] = uVar21;
        local_78[2] = uVar6;
        *(undefined4 *)(local_78 + 3) = uVar5;
        *(undefined4 *)((longlong)local_78 + 0x1c) = uVar4;
        *(undefined1 *)(local_78 + 4) = 0;
        local_78[5] = param_1;
        if ((ulonglong *)(local_78 + 1) != (ulonglong *)0x0) {
          local_88 = FUN_143ea7034;
        }
        pwVar19 = L"AddFCustomEffectDrawData_RenderThreadCopy_Texture";
        puVar24 = &DAT_14cb913dc;
        goto LAB_143e987c1;
      }
    }
LAB_143e98b7e:
    if (uVar21 >> 0x20 == 0) {
LAB_143e98c9e:
      local_88 = (code *)0x0;
    }
    else {
      local_88 = (code *)0x0;
      uVar9 = (uint)uVar21;
      if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c9647dc)) {
        puVar15 = (undefined8 *)
                  ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0xd & 0x3fff8)));
        if ((puVar15 == (undefined8 *)0x0) ||
           ((*(int *)(puVar15 + 2) != (int)(uVar21 >> 0x20) ||
            ((*(uint *)(puVar15 + 1) & 0x10200000) != 0)))) goto LAB_143e98c9e;
        local_88 = (code *)*puVar15;
      }
    }
    if (uVar6 >> 0x20 == 0) {
LAB_143e98ca8:
      uVar16 = 0;
    }
    else {
      uVar16 = 0;
      uVar9 = (uint)uVar6;
      if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c9647dc)) {
        puVar15 = (undefined8 *)
                  ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0xd & 0x3fff8)));
        if ((puVar15 == (undefined8 *)0x0) ||
           ((*(int *)(puVar15 + 2) != (int)(uVar6 >> 0x20) ||
            ((*(uint *)(puVar15 + 1) & 0x10200000) != 0)))) goto LAB_143e98ca8;
        uVar16 = *puVar15;
      }
    }
    local_80 = uVar16;
    local_68[0] = uVar4;
    plVar22 = (longlong *)FUN_14001cc68(0x18,0x10);
    FUN_1456bc4c4(plVar22,uVar16);
    local_a0 = &local_b8;
    local_98 = &local_88;
    local_78 = plVar22;
    FUN_1489ee278(param_1 + 0x308,local_8c);
    if (local_78 == (longlong *)0x0) goto LAB_143e987e5;
    puVar15 = (undefined8 *)*local_78;
    plVar22 = local_78;
LAB_143e98c92:
    (*(code *)*puVar15)(plVar22,1);
  }
  goto LAB_143e987e5;
LAB_143e98e65:
  if ((lVar14 + 8U & 0xfffffffffffffff7) == 0) goto LAB_143e987e5;
  if (uVar21 >> 0x20 == 0) {
LAB_143e98f97:
    uVar16 = 0;
  }
  else {
    uVar16 = 0;
    uVar9 = (uint)uVar21;
    if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c9647dc)) {
      puVar15 = (undefined8 *)
                ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0xd & 0x3fff8)));
      if ((puVar15 == (undefined8 *)0x0) ||
         ((*(int *)(puVar15 + 2) != (int)(uVar21 >> 0x20) ||
          ((*(uint *)(puVar15 + 1) & 0x10200000) != 0)))) goto LAB_143e98f97;
      uVar16 = *puVar15;
    }
  }
  *(undefined8 *)(lVar14 + 8) = uVar16;
  *(undefined4 *)(lVar14 + 0x28) = uVar5;
  if (uVar6 >> 0x20 == 0) {
LAB_143e98f9e:
    uVar16 = 0;
  }
  else {
    uVar16 = 0;
    uVar9 = (uint)uVar6;
    if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c9647dc)) {
      puVar15 = (undefined8 *)
                ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0xd & 0x3fff8)));
      if ((puVar15 == (undefined8 *)0x0) ||
         ((*(int *)(puVar15 + 2) != (int)(uVar6 >> 0x20) ||
          ((*(uint *)(puVar15 + 1) & 0x10200000) != 0)))) goto LAB_143e98f9e;
      uVar16 = *puVar15;
    }
  }
  *(undefined8 *)(lVar14 + 0x10) = uVar16;
  uVar17 = FUN_14001cc68(0x18,0x10);
  FUN_1456bc4c4(uVar17,uVar16);
  lVar7 = *(longlong *)(lVar14 + 0x18);
  *(undefined8 *)(lVar14 + 0x18) = uVar17;
  if (lVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_f8);
  }
LAB_143e987e5:
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e98ff6 FUN_143e98ff6 body=5559 status=ok
// SIG undefined FUN_143e98ff6(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e98ff6(longlong param_1,ulonglong *param_2,void *param_3,uint *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  char *_Str;
  uint *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  char cVar22;
  uint uVar23;
  size_t sVar24;
  longlong *plVar25;
  longlong lVar26;
  undefined8 *puVar27;
  longlong *plVar28;
  longlong *plVar29;
  undefined8 uVar30;
  undefined8 *puVar31;
  undefined2 *puVar32;
  undefined8 *puVar33;
  longlong lVar34;
  int iVar35;
  longlong lVar36;
  uint uVar37;
  bool bVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 auStack_5a78 [32];
  undefined1 *local_5a58;
  undefined8 *local_5a50;
  longlong *local_5a48;
  byte local_5a32;
  byte local_5a31;
  uint *local_5a30;
  longlong local_5a28;
  longlong local_5a20;
  undefined2 *local_5a18;
  int local_5a10;
  longlong local_5a08 [2];
  undefined8 local_59f8;
  undefined8 uStack_59f0;
  undefined8 uStack_59e8;
  undefined8 uStack_59e0;
  undefined8 uStack_59d8;
  undefined8 local_59d0;
  undefined8 local_59c8;
  undefined8 uStack_59c0;
  undefined8 local_59b8;
  undefined8 uStack_59b0;
  undefined8 local_59a8;
  undefined8 local_59a0;
  undefined8 uStack_5998;
  undefined8 local_5990;
  undefined8 uStack_5988;
  undefined8 local_5980;
  undefined8 local_5978;
  undefined8 local_5970;
  undefined8 uStack_5968;
  undefined8 local_5960;
  undefined8 uStack_5958;
  undefined8 local_5950;
  undefined8 local_5948;
  undefined8 uStack_5940;
  undefined8 local_5938;
  undefined8 uStack_5930;
  undefined8 local_5928;
  undefined8 local_5920;
  undefined8 uStack_5918;
  undefined8 local_5910;
  undefined8 uStack_5908;
  undefined8 local_5900;
  undefined8 local_58f8;
  undefined8 local_58f0;
  undefined8 uStack_58e8;
  undefined8 local_58e0;
  undefined8 uStack_58d8;
  undefined8 local_58d0;
  undefined8 local_58c8;
  undefined8 uStack_58c0;
  undefined8 local_58b8;
  undefined8 uStack_58b0;
  undefined8 local_58a8;
  undefined8 local_58a0;
  undefined8 uStack_5898;
  undefined8 local_5890;
  undefined8 uStack_5888;
  undefined8 local_5880;
  undefined8 local_5878;
  undefined8 local_5870;
  undefined8 uStack_5868;
  undefined8 local_5860;
  undefined8 uStack_5858;
  undefined8 local_5850;
  undefined8 local_5848;
  undefined8 uStack_5840;
  undefined8 local_5838;
  undefined8 uStack_5830;
  undefined8 local_5828;
  undefined8 local_5820;
  undefined8 uStack_5818;
  undefined8 local_5810;
  undefined8 uStack_5808;
  undefined8 local_5800;
  undefined8 local_57f8;
  undefined8 local_57f0;
  undefined8 uStack_57e8;
  undefined8 local_57e0;
  undefined8 uStack_57d8;
  undefined8 local_57d0;
  undefined8 local_57c8;
  undefined8 uStack_57c0;
  undefined8 local_57b8;
  undefined8 uStack_57b0;
  undefined8 local_57a8;
  undefined8 local_57a0;
  undefined8 uStack_5798;
  undefined8 local_5790;
  undefined8 uStack_5788;
  undefined8 local_5780;
  undefined8 local_5778;
  undefined8 local_5770;
  undefined8 uStack_5768;
  undefined8 local_5760;
  undefined8 uStack_5758;
  undefined8 local_5750;
  undefined8 local_5748;
  undefined8 uStack_5740;
  undefined8 local_5738;
  undefined8 uStack_5730;
  undefined8 local_5728;
  undefined8 local_5720;
  undefined8 uStack_5718;
  undefined8 local_5710;
  undefined8 uStack_5708;
  undefined8 local_5700;
  undefined8 local_56f8;
  undefined8 uStack_56f0;
  undefined8 local_56e8;
  undefined8 local_56e0;
  undefined8 uStack_56d8;
  undefined8 local_56d0;
  undefined8 local_56c8;
  undefined8 local_56c0;
  undefined8 uStack_56b8;
  undefined8 local_56b0;
  undefined8 uStack_56a8;
  undefined8 local_56a0;
  undefined8 local_5698;
  undefined8 uStack_5690;
  undefined8 local_5688;
  undefined8 uStack_5680;
  undefined8 local_5678;
  undefined8 local_5670;
  undefined8 uStack_5668;
  undefined8 local_5660;
  undefined8 uStack_5658;
  undefined8 local_5650;
  undefined8 local_5648;
  undefined8 local_5640;
  undefined8 uStack_5638;
  undefined8 local_5630;
  undefined8 uStack_5628;
  undefined8 local_5620;
  undefined8 local_5618;
  undefined8 uStack_5610;
  undefined8 local_5608;
  undefined8 uStack_5600;
  undefined8 local_55f8;
  undefined8 local_55f0;
  undefined8 uStack_55e8;
  undefined8 local_55e0;
  undefined8 uStack_55d8;
  undefined8 local_55d0;
  undefined8 local_55c8;
  undefined8 local_55c0;
  undefined8 uStack_55b8;
  undefined8 local_55b0;
  undefined8 uStack_55a8;
  undefined8 local_55a0;
  undefined8 local_5598;
  undefined8 uStack_5590;
  undefined8 local_5588;
  undefined8 uStack_5580;
  undefined8 local_5578;
  undefined8 local_5570;
  undefined8 uStack_5568;
  undefined8 local_5560;
  undefined8 uStack_5558;
  undefined8 local_5550;
  undefined8 local_5548;
  undefined8 local_5540;
  undefined8 uStack_5538;
  undefined8 local_5530;
  undefined8 uStack_5528;
  undefined8 local_5520;
  undefined8 local_5518;
  undefined8 uStack_5510;
  undefined8 local_5508;
  undefined8 uStack_5500;
  undefined8 local_54f8;
  undefined8 local_54f0;
  undefined8 uStack_54e8;
  undefined8 local_54e0;
  undefined8 uStack_54d8;
  undefined8 local_54d0;
  undefined8 local_54c8;
  undefined8 local_54c0;
  undefined8 uStack_54b8;
  undefined8 local_54b0;
  undefined8 uStack_54a8;
  undefined8 local_54a0;
  undefined8 local_5498;
  undefined8 uStack_5490;
  undefined8 local_5488;
  undefined8 uStack_5480;
  undefined8 local_5478;
  undefined8 local_5470;
  undefined8 uStack_5468;
  undefined8 local_5460;
  undefined8 uStack_5458;
  undefined8 local_5450;
  undefined8 local_5448;
  undefined8 local_5440;
  undefined8 uStack_5438;
  undefined8 local_5430;
  undefined8 uStack_5428;
  undefined8 local_5420;
  undefined8 local_5418;
  undefined8 uStack_5410;
  undefined8 local_5408;
  undefined8 uStack_5400;
  undefined8 local_53f8;
  undefined8 local_53f0;
  undefined8 uStack_53e8;
  undefined8 local_53e0;
  undefined8 uStack_53d8;
  undefined8 local_53d0;
  undefined8 local_53c8;
  undefined8 local_53c0;
  undefined8 uStack_53b8;
  undefined8 local_53b0;
  undefined8 uStack_53a8;
  undefined8 local_53a0;
  undefined8 local_5398;
  undefined8 uStack_5390;
  undefined8 local_5388;
  undefined8 uStack_5380;
  undefined8 local_5378;
  undefined8 local_5370;
  undefined8 uStack_5368;
  undefined8 local_5360;
  undefined8 uStack_5358;
  undefined8 local_5350;
  undefined8 local_5348;
  undefined8 local_5340;
  undefined8 uStack_5338;
  undefined8 local_5330;
  undefined8 uStack_5328;
  undefined8 local_5320;
  undefined8 local_5318;
  undefined8 uStack_5310;
  undefined8 local_5308;
  undefined8 uStack_5300;
  undefined8 local_52f8;
  undefined8 local_52f0;
  undefined8 uStack_52e8;
  undefined8 local_52e0;
  undefined8 uStack_52d8;
  undefined8 local_52d0;
  undefined8 local_52c8;
  undefined8 local_52c0;
  undefined8 uStack_52b8;
  undefined8 local_52b0;
  undefined8 uStack_52a8;
  undefined8 local_52a0;
  undefined8 local_5298;
  undefined8 uStack_5290;
  undefined8 local_5288;
  undefined8 uStack_5280;
  undefined8 local_5278;
  undefined8 local_5270;
  undefined8 uStack_5268;
  undefined8 local_5260;
  undefined8 uStack_5258;
  undefined8 local_5250;
  undefined8 local_5248;
  undefined8 local_5240;
  undefined8 uStack_5238;
  undefined8 local_5230;
  undefined8 uStack_5228;
  undefined8 local_5220;
  undefined8 local_5218;
  undefined8 uStack_5210;
  undefined8 local_5208;
  undefined8 uStack_5200;
  undefined8 local_51f8;
  undefined8 local_51f0;
  undefined8 uStack_51e8;
  undefined8 local_51e0;
  undefined8 uStack_51d8;
  undefined8 local_51d0;
  undefined8 local_51c8;
  undefined8 local_51c0;
  undefined8 uStack_51b8;
  undefined8 local_51b0;
  undefined8 uStack_51a8;
  undefined8 local_51a0;
  undefined8 local_5198;
  undefined8 uStack_5190;
  undefined8 local_5188;
  undefined8 uStack_5180;
  undefined8 local_5178;
  undefined8 local_5170;
  undefined8 uStack_5168;
  undefined8 local_5160;
  undefined8 uStack_5158;
  undefined8 local_5150;
  undefined8 local_5148;
  undefined8 local_5140;
  undefined8 uStack_5138;
  undefined8 local_5130;
  undefined8 uStack_5128;
  undefined8 local_5120;
  undefined8 local_5118;
  undefined8 uStack_5110;
  undefined8 local_5108;
  undefined8 uStack_5100;
  undefined8 local_50f8;
  undefined8 local_50f0;
  undefined8 uStack_50e8;
  undefined8 local_50e0;
  undefined8 uStack_50d8;
  undefined8 local_50d0;
  undefined8 local_50c8;
  undefined8 local_50c0;
  undefined8 uStack_50b8;
  undefined8 local_50b0;
  undefined8 uStack_50a8;
  undefined8 local_50a0;
  undefined8 local_5098;
  undefined8 uStack_5090;
  undefined8 local_5088;
  undefined8 uStack_5080;
  undefined8 local_5078;
  undefined8 local_5070;
  undefined8 uStack_5068;
  undefined8 local_5060;
  undefined8 uStack_5058;
  undefined8 local_5050;
  undefined8 local_5048;
  undefined8 local_5040;
  undefined8 uStack_5038;
  undefined8 local_5030;
  undefined8 uStack_5028;
  undefined8 local_5020;
  undefined8 local_5018;
  undefined8 uStack_5010;
  undefined8 local_5008;
  undefined8 uStack_5000;
  undefined8 local_4ff8;
  undefined8 local_4ff0;
  undefined8 uStack_4fe8;
  undefined8 local_4fe0;
  undefined8 uStack_4fd8;
  undefined8 local_4fd0;
  undefined8 local_4fc8;
  undefined8 local_4fc0;
  undefined8 uStack_4fb8;
  undefined8 local_4fb0;
  undefined8 uStack_4fa8;
  undefined8 local_4fa0;
  undefined8 local_4f98;
  undefined8 uStack_4f90;
  undefined8 local_4f88;
  undefined8 uStack_4f80;
  undefined8 local_4f78;
  undefined8 local_4f70;
  undefined8 uStack_4f68;
  undefined8 local_4f60;
  undefined8 uStack_4f58;
  undefined8 local_4f50;
  undefined8 local_4f48;
  undefined8 local_4f40;
  undefined8 uStack_4f38;
  undefined8 local_4f30;
  undefined8 uStack_4f28;
  undefined8 local_4f20;
  undefined8 local_4f18;
  undefined8 uStack_4f10;
  undefined8 local_4f08;
  undefined8 uStack_4f00;
  undefined8 local_4ef8;
  undefined8 local_4ef0;
  undefined8 uStack_4ee8;
  undefined8 local_4ee0;
  undefined8 uStack_4ed8;
  undefined8 local_4ed0;
  undefined8 local_4ec8;
  undefined8 uStack_4ec0;
  undefined8 local_4eb8;
  undefined8 local_4eb0;
  undefined8 uStack_4ea8;
  undefined8 local_4ea0;
  undefined8 local_4e98;
  undefined8 uStack_4e90;
  undefined8 local_4e88;
  undefined8 local_4e80;
  undefined8 uStack_4e78;
  undefined8 local_4e70;
  undefined8 uStack_4e68;
  undefined4 local_4e60;
  undefined4 local_4e58;
  undefined4 uStack_4e54;
  undefined4 uStack_4e50;
  undefined4 uStack_4e4c;
  undefined8 local_4e48;
  longlong local_4e38 [16];
  undefined8 local_4db8 [16];
  undefined8 local_4d38;
  undefined8 local_4d30;
  undefined1 local_4d10;
  undefined1 local_4c88;
  undefined8 local_4c78 [16];
  undefined1 local_4bf8;
  undefined8 local_4be8;
  undefined8 uStack_4be0;
  undefined8 local_4bd8;
  undefined8 local_4bd0;
  undefined8 local_4bc8;
  undefined1 *local_4bc0;
  undefined8 local_4bb8;
  undefined8 uStack_4bb0;
  undefined4 local_4ba8;
  undefined8 local_4ba0;
  undefined8 uStack_4b98;
  undefined8 local_4b90;
  undefined8 uStack_4b88;
  undefined8 local_4b80;
  undefined1 *local_4b78;
  undefined1 *puStack_4b70;
  undefined8 local_4b68;
  undefined4 local_4b60;
  undefined8 local_4b58;
  undefined8 uStack_4b50;
  undefined8 local_4b48;
  undefined8 uStack_4b40;
  undefined8 local_4b38;
  undefined8 uStack_4b30;
  undefined8 local_4b28;
  undefined8 uStack_4b20;
  undefined8 local_4b08;
  undefined4 local_4b00;
  undefined8 local_4afc;
  undefined4 local_4af4;
  undefined8 local_4ae8;
  undefined4 local_4ae0;
  undefined8 local_4ad8;
  undefined8 local_4ad0;
  undefined8 local_4ab8;
  undefined8 local_4ab0;
  undefined8 uStack_4aa8;
  undefined8 local_4a98;
  undefined4 local_4a90;
  undefined8 local_4a88;
  undefined8 local_4a80;
  undefined8 local_4a78;
  undefined1 uStack_4a70;
  undefined7 uStack_4a6f;
  undefined1 uStack_4a68;
  undefined8 uStack_4a67;
  undefined1 local_4a5f;
  undefined8 local_4a5c;
  undefined1 *local_4a54;
  undefined4 local_4a4c;
  undefined4 local_4a48;
  undefined1 local_4a44;
  undefined8 local_4a40;
  undefined4 local_4a38;
  undefined8 local_4a30;
  undefined8 uStack_4a28;
  undefined8 uStack_4a20;
  undefined1 uStack_4a18;
  undefined7 local_4a17;
  undefined1 uStack_4a10;
  undefined8 uStack_4a0f;
  undefined8 uStack_4a00;
  undefined3 uStack_49f8;
  undefined5 local_49f5;
  undefined3 uStack_49f0;
  undefined8 uStack_49ed;
  undefined1 local_34f8 [8];
  longlong local_34f0;
  longlong local_34e0;
  longlong local_34b0;
  double local_3490;
  double local_3488;
  float local_3480;
  float local_347c;
  byte local_3474;
  longlong local_33f8;
  undefined8 local_33f0;
  undefined4 local_33e8;
  undefined8 local_3020;
  undefined8 local_3018;
  undefined1 local_2ff8 [6376];
  undefined4 local_1710;
  undefined8 local_16a8;
  undefined8 uStack_16a0;
  undefined8 local_1698;
  undefined8 uStack_1690;
  undefined8 local_1688;
  undefined8 uStack_1680;
  undefined8 local_1678;
  undefined8 uStack_1670;
  undefined1 local_1160;
  undefined8 local_1158;
  undefined8 uStack_1150;
  undefined1 local_112c;
  undefined8 local_1128;
  undefined8 local_10f8;
  undefined8 uStack_10f0;
  undefined4 local_10e8;
  undefined4 uStack_10e4;
  undefined4 uStack_10e0;
  undefined4 uStack_10dc;
  undefined4 local_96c;
  undefined4 local_74c;
  undefined4 local_450;
  undefined1 local_408 [440];
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  byte local_185;
  longlong local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
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
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined1 local_a4;
  undefined1 local_a3;
  undefined1 local_a2;
  undefined1 local_a1;
  ulonglong local_90;
  undefined8 uStack_48;
  
  uStack_48 = 0x143e9900c;
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_5a78;
  if ((*(longlong *)(param_1 + 0xa0) == 0) || (*(char *)(param_1 + 0x9e) != '\0'))
  goto LAB_143e991a5;
  _Str = *(char **)(param_4 + 0x26);
  local_33f8 = 0;
  if (_Str == (char *)0x0) {
    local_33f0 = 0;
    local_33e8 = 0;
  }
  else {
    sVar24 = strlen(_Str);
    FUN_1446e6fe8(local_34f8,_Str,sVar24 & 0xffffffff);
  }
  FUN_140056680(local_5a08,local_33f0);
  if (local_33f8 != 0) {
    FUN_1400020a8();
  }
  if (*(int *)(param_1 + 0x200) != *(int *)(param_1 + 0x22c)) {
    lVar36 = param_1 + 0x230;
    if (*(longlong *)(param_1 + 0x238) != 0) {
      lVar36 = *(longlong *)(param_1 + 0x238);
    }
    iVar35 = *(int *)(lVar36 + (ulonglong)(*(int *)(param_1 + 0x240) - 1U & *param_4) * 4);
    if (iVar35 != -1) {
      while (lVar36 = *(longlong *)(param_1 + 0x1f8) + (longlong)iVar35 * 0x38,
            *(uint *)(*(longlong *)(param_1 + 0x1f8) + (longlong)iVar35 * 0x38) != *param_4) {
        iVar35 = *(int *)(lVar36 + 0x30);
        if (iVar35 == -1) goto LAB_143e99196;
      }
      puVar33 = (undefined8 *)(lVar36 + 8);
      if (puVar33 == (undefined8 *)0x0 || lVar36 == 0) goto LAB_143e99196;
      uVar4 = *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 8);
      plVar25 = (longlong *)*puVar33;
      cVar22 = FUN_140432338(plVar25);
      if ((cVar22 == '\0') ||
         (cVar22 = FUN_140432338(*(undefined8 *)(lVar36 + 0x10)), cVar22 == '\0'))
      goto LAB_143e99196;
      plVar25 = (longlong *)(**(code **)(*plVar25 + 0x350))(plVar25,uVar4,4);
      puVar5 = (uint *)plVar25[3];
      if (puVar5 == (uint *)0x0) goto LAB_143e99196;
      FUN_146047bf6();
      uVar37 = 0;
      local_5a30 = puVar5;
      local_5a20 = FUN_144b1d0c2(*(undefined8 *)(puVar5 + 10),&DAT_14cb91120,0);
      local_5a31 = local_5a20 != 0;
      FUN_14608e0ca();
      local_5a28 = FUN_144b1d0c2(*(undefined8 *)(local_5a30 + 10),&DAT_14cb91248,0);
      local_5a32 = local_5a28 != 0;
      (**(code **)(*plVar25 + 0x370))(plVar25,&local_5a18);
      puVar5 = local_5a30;
      plVar25 = (longlong *)(param_1 + 0x10);
      if ((local_5a31 & local_5a32) != 0) {
        FUN_1411a58b4(plVar25,&local_5a18);
        uVar30 = *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x10);
        puVar27 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar31 = puVar27 + 5;
        if ((undefined8 *)param_2[1] < puVar31) {
          FUN_140023dd8(param_2,0x30);
          puVar27 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar31 = puVar27 + 5;
        }
        *param_2 = (ulonglong)puVar31;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar27;
        param_2[6] = (ulonglong)(puVar27 + 1);
        puVar27[1] = 0;
        *puVar27 = &PTR_LAB_14a1fb5a8;
        *(undefined4 *)(puVar27 + 2) = 0;
        puVar27[3] = uVar30;
        *(undefined4 *)(puVar27 + 4) = 0;
        memcpy(&local_250,param_3,0xd8);
        lVar26 = *(longlong *)
                  (*(longlong *)(*(longlong *)(puVar5 + 2) + 0x50) +
                  (longlong)*(int *)(local_5a20 + 0xd4) * 8);
        if (lVar26 == 0) {
          lVar26 = FUN_1400bafc2();
        }
        local_240 = *(longlong *)
                     (*(longlong *)(*(longlong *)(puVar5 + 2) + 0x50) +
                     (longlong)*(int *)(local_5a28 + 0xd4) * 8);
        if (local_240 == 0) {
          local_240 = FUN_1400bafc2();
        }
        uVar37 = param_4[0x24];
        uStack_248 = lVar26;
        lVar26 = FUN_140028f18(param_2);
        if ((lVar26 != 0) && ((local_185 & 0x10) == 0)) {
          *(undefined4 *)(param_2 + 0x35) = local_230;
          *(undefined4 *)((longlong)param_2 + 0x1ac) = uStack_22c;
          *(undefined4 *)(param_2 + 0x36) = uStack_228;
          *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_224;
          *(undefined4 *)(param_2 + 0x33) = (undefined4)local_240;
          *(undefined4 *)((longlong)param_2 + 0x19c) = local_240._4_4_;
          *(undefined4 *)(param_2 + 0x34) = uStack_238;
          *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_234;
          *(undefined4 *)(param_2 + 0x31) = local_250;
          *(undefined4 *)((longlong)param_2 + 0x18c) = uStack_24c;
          *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_248;
          *(undefined4 *)((longlong)param_2 + 0x194) = uStack_248._4_4_;
          puVar27 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar31 = puVar27 + 4;
          if ((undefined8 *)param_2[1] < puVar31) {
            FUN_140023dd8(param_2,0x28);
            puVar27 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
            puVar31 = puVar27 + 4;
          }
          *param_2 = (ulonglong)puVar31;
          *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
          *(undefined8 **)param_2[6] = puVar27;
          param_2[6] = (ulonglong)(puVar27 + 1);
          puVar27[1] = 0;
          *puVar27 = &PTR_LAB_14a37d348;
          puVar27[2] = lVar26;
          *(uint *)(puVar27 + 3) = uVar37;
          *(undefined1 *)((longlong)puVar27 + 0x1c) = 1;
        }
        uVar37 = param_4[0x24];
        puVar27 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar31 = puVar27 + 3;
        if ((undefined8 *)param_2[1] < puVar31) {
          FUN_140023dd8(param_2,0x20);
          puVar27 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar31 = puVar27 + 3;
        }
        *param_2 = (ulonglong)puVar31;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar27;
        param_2[6] = (ulonglong)(puVar27 + 1);
        puVar27[1] = 0;
        *puVar27 = &PTR_LAB_14a2901c8;
        *(uint *)(puVar27 + 2) = uVar37;
        local_4e38[2] = 0;
        local_4e38[3] = 0x8000000000;
        FUN_1401b5a8c(&local_4e58,0);
        FUN_14031f39e(local_34f8,0,0,&local_4e58);
        local_3480 = (float)DAT_14c759090;
        local_3490 = DAT_14c866ff8 - _DAT_14c86a9d8;
        local_3474 = local_3474 | 0x10;
        local_3488 = local_3490;
        local_347c = local_3480;
        FUN_14031f528(local_408,local_34f8);
        if (local_34b0 != 0) {
          FUN_1400020a8();
        }
        if (local_4e38[2] != 0) {
          FUN_1400020a8();
        }
        local_5a30 = param_4 + 0xc;
        local_4d10 = 0;
        local_4c88 = 0;
        local_4be8 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_4be0 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        local_4bd8 = DAT_14c8464f0;
        local_4bb8 = 0;
        uStack_4bb0 = 0;
        local_4ba8 = 0xffffffff;
        local_4ba0 = 0;
        uStack_4b98 = 0;
        local_4b90 = 0;
        uStack_4b88 = 0;
        local_4b80 = 0;
        local_4b78 = &DAT_3f8000003f800000;
        puStack_4b70 = &DAT_3f8000003f800000;
        local_4b68 = 0xffffffff00000000;
        local_4b60 = 0x42c80000;
        local_4b08 = 0;
        local_4b00 = 0;
        local_4b58 = 0;
        uStack_4b50 = 0;
        local_4b48 = 0;
        uStack_4b40 = 0;
        local_4b38 = 0;
        uStack_4b30 = 0;
        local_4b28 = 0;
        uStack_4b20 = 0;
        local_4afc = 0xffffffff00000080;
        local_4af4 = 0;
        local_4ae8 = 0;
        local_4ae0 = 0;
        local_4ad8 = 0;
        local_4ad0 = 0xffffffff00000000;
        local_4ab8 = 0;
        local_4ab0 = 0x8000000000;
        uStack_4aa8 = 0xffffffff;
        local_4a98 = 0;
        local_4a90 = 0;
        local_4a88 = 0xffffffffffffffff;
        local_4a80 = 0xbf8000003f800000;
        local_4a78 = 0;
        uStack_4a70 = 0;
        uStack_4a6f = 0;
        uStack_4a68 = 0;
        uStack_4a67 = 0;
        local_4a5f = 1;
        local_4a5c = 0x42b4000042b40000;
        local_4a4c = 0;
        local_4a54 = &DAT_3f8000003f800000;
        local_4a44 = 0;
        local_4a48 = 0;
        local_4a40 = 0x3f800000bf800000;
        local_4a38 = 0x3f800000;
        uStack_4a10 = 0;
        uStack_4a0f = 0;
        uStack_4a20 = 0;
        uStack_4a18 = 0;
        local_4a17 = 0;
        local_4a30 = 0;
        uStack_4a28 = 0;
        uStack_49f0 = 0;
        uStack_49ed = 0;
        uStack_4a00 = 0;
        uStack_49f8 = 0;
        local_49f5 = 0;
        puVar31 = &DAT_14c846400;
        puVar27 = local_4c78;
        for (lVar26 = 0x10; lVar26 != 0; lVar26 = lVar26 + -1) {
          *puVar27 = *puVar31;
          puVar31 = puVar31 + 1;
          puVar27 = puVar27 + 1;
        }
        local_4bf8 = 1;
        local_4d38 = *(undefined8 *)(param_4 + 0xc);
        local_4d30 = *(undefined8 *)(param_4 + 0xe);
        local_4e58 = (undefined4)DAT_14c8464e0;
        uStack_4e54 = DAT_14c8464e0._4_4_;
        uStack_4e50 = (undefined4)DAT_14c8464e8;
        uStack_4e4c = DAT_14c8464e8._4_4_;
        local_4e48 = DAT_14c8464f0;
        plVar25 = &DAT_14c846400;
        plVar29 = local_4e38;
        local_4bd0 = local_4d38;
        local_4bc8 = local_4d30;
        for (lVar26 = 0x10; lVar26 != 0; lVar26 = lVar26 + -1) {
          *plVar29 = *plVar25;
          plVar25 = plVar25 + 1;
          plVar29 = plVar29 + 1;
        }
        puVar31 = &DAT_14c846400;
        puVar27 = local_4db8;
        for (lVar26 = 0x10; lVar26 != 0; lVar26 = lVar26 + -1) {
          *puVar27 = *puVar31;
          puVar31 = puVar31 + 1;
          puVar27 = puVar27 + 1;
        }
        local_4bc0 = local_408;
        FUN_144891fa0(local_34f8,&local_4e58);
        FUN_144891d70(&local_4e58);
        FUN_1448e6882(&local_4e58);
        local_5a50 = &local_59f8;
        local_59f8 = 0x3ff0000000000000;
        uStack_59f0 = 0;
        uStack_59e8 = 0;
        uStack_59e0 = 0;
        uStack_59d8 = 0;
        local_59d0 = 0x3ff0000000000000;
        local_59c8 = 0;
        uStack_59c0 = 0;
        local_59b8 = 0;
        uStack_59b0 = 0;
        local_59a8 = 0x3ff0000000000000;
        local_59a0 = 0;
        uStack_5998 = 0;
        local_5990 = 0;
        uStack_5988 = 0;
        local_5980 = 0x3ff0000000000000;
        local_5978 = 0x3ff0000000000000;
        local_5970 = 0;
        uStack_5968 = 0;
        local_5960 = 0;
        uStack_5958 = 0;
        local_5950 = 0x3ff0000000000000;
        local_5948 = 0;
        uStack_5940 = 0;
        local_5938 = 0;
        uStack_5930 = 0;
        local_5928 = 0x3ff0000000000000;
        local_5920 = 0;
        uStack_5918 = 0;
        local_5910 = 0;
        uStack_5908 = 0;
        local_5900 = 0x3ff0000000000000;
        local_58f8 = 0x3ff0000000000000;
        local_58f0 = 0;
        uStack_58e8 = 0;
        local_58e0 = 0;
        uStack_58d8 = 0;
        local_58d0 = 0x3ff0000000000000;
        local_58c8 = 0;
        uStack_58c0 = 0;
        local_58b8 = 0;
        uStack_58b0 = 0;
        local_58a8 = 0x3ff0000000000000;
        local_58a0 = 0;
        uStack_5898 = 0;
        local_5890 = 0;
        uStack_5888 = 0;
        local_5880 = 0x3ff0000000000000;
        local_5878 = 0x3ff0000000000000;
        local_5870 = 0;
        uStack_5868 = 0;
        local_5860 = 0;
        uStack_5858 = 0;
        local_5850 = 0x3ff0000000000000;
        local_5848 = 0;
        uStack_5840 = 0;
        local_5838 = 0;
        uStack_5830 = 0;
        local_5828 = 0x3ff0000000000000;
        local_5810 = 0;
        uStack_5808 = 0;
        local_5820 = 0;
        uStack_5818 = 0;
        local_5800 = 0x3ff0000000000000;
        local_57f8 = 0x3ff0000000000000;
        local_57f0 = 0;
        uStack_57e8 = 0;
        local_57e0 = 0;
        uStack_57d8 = 0;
        local_57d0 = 0x3ff0000000000000;
        local_57c8 = 0;
        uStack_57c0 = 0;
        local_57b8 = 0;
        uStack_57b0 = 0;
        local_57a8 = 0x3ff0000000000000;
        local_57a0 = 0;
        uStack_5798 = 0;
        local_5790 = 0;
        uStack_5788 = 0;
        local_5780 = 0x3ff0000000000000;
        local_5778 = 0x3ff0000000000000;
        local_5770 = 0;
        uStack_5768 = 0;
        local_5760 = 0;
        uStack_5758 = 0;
        local_5750 = 0x3ff0000000000000;
        local_5748 = 0;
        uStack_5740 = 0;
        local_5738 = 0;
        uStack_5730 = 0;
        local_5728 = 0x3ff0000000000000;
        local_5710 = 0;
        uStack_5708 = 0;
        local_5720 = 0;
        uStack_5718 = 0;
        local_5700 = 0x3ff0000000000000;
        local_56e8 = DAT_14c8464f0;
        local_56f8 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_56f0 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        local_56d0 = DAT_14c8464f0;
        local_56e0 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_56d8 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        local_56c8 = 0x3ff0000000000000;
        local_56b0 = 0;
        uStack_56a8 = 0;
        local_56c0 = 0;
        uStack_56b8 = 0;
        local_56a0 = 0x3ff0000000000000;
        local_5688 = 0;
        uStack_5680 = 0;
        local_5698 = 0;
        uStack_5690 = 0;
        local_5678 = 0x3ff0000000000000;
        local_5660 = 0;
        uStack_5658 = 0;
        local_5670 = 0;
        uStack_5668 = 0;
        local_5650 = 0x3ff0000000000000;
        local_5648 = 0x3ff0000000000000;
        local_5630 = 0;
        uStack_5628 = 0;
        local_5640 = 0;
        uStack_5638 = 0;
        local_5620 = 0x3ff0000000000000;
        local_5608 = 0;
        uStack_5600 = 0;
        local_5618 = 0;
        uStack_5610 = 0;
        local_55f8 = 0x3ff0000000000000;
        local_55e0 = 0;
        uStack_55d8 = 0;
        local_55f0 = 0;
        uStack_55e8 = 0;
        local_55d0 = 0x3ff0000000000000;
        local_55c8 = 0x3ff0000000000000;
        local_55b0 = 0;
        uStack_55a8 = 0;
        local_55c0 = 0;
        uStack_55b8 = 0;
        local_55a0 = 0x3ff0000000000000;
        local_5588 = 0;
        uStack_5580 = 0;
        local_5598 = 0;
        uStack_5590 = 0;
        local_5578 = 0x3ff0000000000000;
        local_5560 = 0;
        uStack_5558 = 0;
        local_5570 = 0;
        uStack_5568 = 0;
        local_5550 = 0x3ff0000000000000;
        local_5548 = 0x3ff0000000000000;
        local_5530 = 0;
        uStack_5528 = 0;
        local_5540 = 0;
        uStack_5538 = 0;
        local_5520 = 0x3ff0000000000000;
        local_5508 = 0;
        uStack_5500 = 0;
        local_5518 = 0;
        uStack_5510 = 0;
        local_54f8 = 0x3ff0000000000000;
        local_54e0 = 0;
        uStack_54d8 = 0;
        local_54f0 = 0;
        uStack_54e8 = 0;
        local_54d0 = 0x3ff0000000000000;
        local_54c8 = 0x3ff0000000000000;
        local_54b0 = 0;
        uStack_54a8 = 0;
        local_54c0 = 0;
        uStack_54b8 = 0;
        local_54a0 = 0x3ff0000000000000;
        local_5488 = 0;
        uStack_5480 = 0;
        local_5498 = 0;
        uStack_5490 = 0;
        local_5478 = 0x3ff0000000000000;
        local_5460 = 0;
        uStack_5458 = 0;
        local_5470 = 0;
        uStack_5468 = 0;
        local_5450 = 0x3ff0000000000000;
        local_5448 = 0x3ff0000000000000;
        local_5430 = 0;
        uStack_5428 = 0;
        local_5440 = 0;
        uStack_5438 = 0;
        local_5420 = 0x3ff0000000000000;
        local_5408 = 0;
        uStack_5400 = 0;
        local_5418 = 0;
        uStack_5410 = 0;
        local_53f8 = 0x3ff0000000000000;
        local_53e0 = 0;
        uStack_53d8 = 0;
        local_53f0 = 0;
        uStack_53e8 = 0;
        local_53d0 = 0x3ff0000000000000;
        local_53c8 = 0x3ff0000000000000;
        local_53b0 = 0;
        uStack_53a8 = 0;
        local_53c0 = 0;
        uStack_53b8 = 0;
        local_53a0 = 0x3ff0000000000000;
        local_5388 = 0;
        uStack_5380 = 0;
        local_5398 = 0;
        uStack_5390 = 0;
        local_5378 = 0x3ff0000000000000;
        local_5360 = 0;
        uStack_5358 = 0;
        local_5370 = 0;
        uStack_5368 = 0;
        local_5350 = 0x3ff0000000000000;
        local_5348 = 0x3ff0000000000000;
        local_5330 = 0;
        uStack_5328 = 0;
        local_5340 = 0;
        uStack_5338 = 0;
        local_5320 = 0x3ff0000000000000;
        local_5308 = 0;
        uStack_5300 = 0;
        local_5318 = 0;
        uStack_5310 = 0;
        local_52f8 = 0x3ff0000000000000;
        local_52e0 = 0;
        uStack_52d8 = 0;
        local_52f0 = 0;
        uStack_52e8 = 0;
        local_52d0 = 0x3ff0000000000000;
        local_52c8 = 0x3ff0000000000000;
        local_52b0 = 0;
        uStack_52a8 = 0;
        local_52c0 = 0;
        uStack_52b8 = 0;
        local_52a0 = 0x3ff0000000000000;
        local_5288 = 0;
        uStack_5280 = 0;
        local_5298 = 0;
        uStack_5290 = 0;
        local_5278 = 0x3ff0000000000000;
        local_5260 = 0;
        uStack_5258 = 0;
        local_5270 = 0;
        uStack_5268 = 0;
        local_5250 = 0x3ff0000000000000;
        local_5248 = 0x3ff0000000000000;
        local_5230 = 0;
        uStack_5228 = 0;
        local_5240 = 0;
        uStack_5238 = 0;
        local_5220 = 0x3ff0000000000000;
        local_5208 = 0;
        uStack_5200 = 0;
        local_5218 = 0;
        uStack_5210 = 0;
        local_51f8 = 0x3ff0000000000000;
        local_51e0 = 0;
        uStack_51d8 = 0;
        local_51f0 = 0;
        uStack_51e8 = 0;
        local_51d0 = 0x3ff0000000000000;
        local_51c8 = 0x3ff0000000000000;
        local_51b0 = 0;
        uStack_51a8 = 0;
        local_51c0 = 0;
        uStack_51b8 = 0;
        local_51a0 = 0x3ff0000000000000;
        local_5188 = 0;
        uStack_5180 = 0;
        local_5198 = 0;
        uStack_5190 = 0;
        local_5178 = 0x3ff0000000000000;
        local_5160 = 0;
        uStack_5158 = 0;
        local_5170 = 0;
        uStack_5168 = 0;
        local_5150 = 0x3ff0000000000000;
        local_5148 = 0x3ff0000000000000;
        local_5130 = 0;
        uStack_5128 = 0;
        local_5140 = 0;
        uStack_5138 = 0;
        local_5120 = 0x3ff0000000000000;
        local_5108 = 0;
        uStack_5100 = 0;
        local_5118 = 0;
        uStack_5110 = 0;
        local_50f8 = 0x3ff0000000000000;
        local_50e0 = 0;
        uStack_50d8 = 0;
        local_50f0 = 0;
        uStack_50e8 = 0;
        local_50d0 = 0x3ff0000000000000;
        local_50c8 = 0x3ff0000000000000;
        local_50b0 = 0;
        uStack_50a8 = 0;
        local_50c0 = 0;
        uStack_50b8 = 0;
        local_50a0 = 0x3ff0000000000000;
        local_5088 = 0;
        uStack_5080 = 0;
        local_5098 = 0;
        uStack_5090 = 0;
        local_5078 = 0x3ff0000000000000;
        local_5060 = 0;
        uStack_5058 = 0;
        local_5070 = 0;
        uStack_5068 = 0;
        local_5050 = 0x3ff0000000000000;
        local_5048 = 0x3ff0000000000000;
        local_5030 = 0;
        uStack_5028 = 0;
        local_5040 = 0;
        uStack_5038 = 0;
        local_5020 = 0x3ff0000000000000;
        local_5008 = 0;
        uStack_5000 = 0;
        local_5018 = 0;
        uStack_5010 = 0;
        local_4ff8 = 0x3ff0000000000000;
        local_4fe0 = 0;
        uStack_4fd8 = 0;
        local_4ff0 = 0;
        uStack_4fe8 = 0;
        local_4fd0 = 0x3ff0000000000000;
        local_4fc8 = 0x3ff0000000000000;
        local_4fb0 = 0;
        uStack_4fa8 = 0;
        local_4fc0 = 0;
        uStack_4fb8 = 0;
        local_4fa0 = 0x3ff0000000000000;
        local_4f88 = 0;
        uStack_4f80 = 0;
        local_4f98 = 0;
        uStack_4f90 = 0;
        local_4f78 = 0x3ff0000000000000;
        local_4f60 = 0;
        uStack_4f58 = 0;
        local_4f70 = 0;
        uStack_4f68 = 0;
        local_4f50 = 0x3ff0000000000000;
        local_4f48 = 0x3ff0000000000000;
        local_4f30 = 0;
        uStack_4f28 = 0;
        local_4f40 = 0;
        uStack_4f38 = 0;
        local_4f20 = 0x3ff0000000000000;
        local_4f08 = 0;
        uStack_4f00 = 0;
        local_4f18 = 0;
        uStack_4f10 = 0;
        local_4ef8 = 0x3ff0000000000000;
        local_4ee0 = 0;
        uStack_4ed8 = 0;
        local_4ef0 = 0;
        uStack_4ee8 = 0;
        local_4ed0 = 0x3ff0000000000000;
        local_4eb8 = DAT_14c8464f0;
        local_4ec8 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_4ec0 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        local_4ea0 = DAT_14c8464f0;
        local_4eb0 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_4ea8 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        local_4e88 = DAT_14c8464f0;
        local_4e98 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_4e90 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        local_4e80 = DAT_14c8463f0;
        uStack_4e78 = DAT_14c8463f8;
        local_4e70 = DAT_14c8463f0;
        uStack_4e68 = DAT_14c8463f8;
        local_4e60 = 0x3f800000;
        local_5a58 = local_2ff8;
        local_178 = local_34f0 + 0x48;
        local_5a48 = &local_178;
        local_170 = local_3020;
        local_168 = local_3018;
        local_160 = *(undefined8 *)(local_34f0 + 0x88);
        uStack_158 = *(undefined8 *)(local_34f0 + 0x90);
        local_150 = *(undefined8 *)(local_34f0 + 0x98);
        local_148 = local_1128;
        local_138 = local_10f8;
        uStack_130 = uStack_10f0;
        local_128 = local_10e8;
        uStack_124 = uStack_10e4;
        uStack_120 = uStack_10e0;
        uStack_11c = uStack_10dc;
        local_118 = local_1158;
        uStack_110 = uStack_1150;
        local_108 = local_16a8;
        uStack_100 = uStack_16a0;
        local_f8 = local_1688;
        uStack_f0 = uStack_1680;
        local_e8 = local_1698;
        uStack_e0 = uStack_1690;
        local_d8 = local_1678;
        uStack_d0 = uStack_1670;
        local_c8 = 0;
        local_c0 = *(undefined8 *)(local_34f0 + 0xb0);
        local_b8 = *(undefined4 *)(local_34f0 + 0xac);
        local_b4 = local_450;
        local_b0 = local_74c;
        local_ac = local_1710;
        local_a8 = local_96c;
        local_a4 = 0;
        local_a3 = local_1160;
        local_a2 = local_112c;
        local_a1 = *(undefined1 *)(local_34f0 + 0xdf);
        FUN_14046b7ae(&local_4e58,param_4 + 0x10,1,local_5a30);
        FUN_1401ee234(&local_59f8,&local_4e58,0,1);
        lVar26 = local_34e0;
        local_34e0 = local_59f8;
        local_59f8 = 0;
        if (lVar26 != 0) {
          LOCK();
          puVar5 = (uint *)(lVar26 + 8);
          uVar37 = *puVar5;
          *puVar5 = *puVar5 - 1;
          UNLOCK();
          if ((uVar37 & 0x3fffffff) == 1) {
            puVar5 = (uint *)(lVar26 + 8);
            LOCK();
            uVar37 = *puVar5;
            *puVar5 = *puVar5 | 0x40000000;
            UNLOCK();
            if ((uVar37 >> 0x1e & 1) == 0) {
              bVar1 = *(byte *)(lVar26 + 0xd);
              plVar28 = (longlong *)FUN_14001cc68(0x10,8);
              plVar28[1] = lVar26;
              plVar25 = DAT_14ca843c0;
              plVar29 = DAT_14ca843c8;
              if ((bVar1 & 2) == 0) {
                do {
                  *plVar28 = (longlong)plVar25;
                  LOCK();
                  bVar38 = plVar25 != DAT_14ca843c0;
                  plVar29 = plVar28;
                  if (bVar38) {
                    plVar25 = DAT_14ca843c0;
                    plVar29 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar29;
                  UNLOCK();
                } while (bVar38);
              }
              else {
                do {
                  *plVar28 = (longlong)plVar29;
                  LOCK();
                  bVar38 = plVar29 != DAT_14ca843c8;
                  plVar25 = plVar28;
                  if (bVar38) {
                    plVar29 = DAT_14ca843c8;
                    plVar25 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar25;
                  UNLOCK();
                } while (bVar38);
              }
            }
          }
          lVar26 = local_59f8;
          if (local_59f8 != 0) {
            LOCK();
            puVar5 = (uint *)(local_59f8 + 8);
            uVar37 = *puVar5;
            *puVar5 = *puVar5 - 1;
            UNLOCK();
            if ((uVar37 & 0x3fffffff) == 1) {
              puVar5 = (uint *)(local_59f8 + 8);
              LOCK();
              uVar37 = *puVar5;
              *puVar5 = *puVar5 | 0x40000000;
              UNLOCK();
              if ((uVar37 >> 0x1e & 1) == 0) {
                bVar1 = *(byte *)(local_59f8 + 0xd);
                plVar28 = (longlong *)FUN_14001cc68(0x10,8);
                plVar28[1] = lVar26;
                plVar25 = DAT_14ca843c0;
                plVar29 = DAT_14ca843c8;
                if ((bVar1 & 2) == 0) {
                  do {
                    *plVar28 = (longlong)plVar25;
                    LOCK();
                    bVar38 = plVar25 != DAT_14ca843c0;
                    plVar29 = plVar28;
                    if (bVar38) {
                      plVar25 = DAT_14ca843c0;
                      plVar29 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar29;
                    UNLOCK();
                  } while (bVar38);
                }
                else {
                  do {
                    *plVar28 = (longlong)plVar29;
                    LOCK();
                    bVar38 = plVar29 != DAT_14ca843c8;
                    plVar25 = plVar28;
                    if (bVar38) {
                      plVar29 = DAT_14ca843c8;
                      plVar25 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar25;
                    UNLOCK();
                  } while (bVar38);
                }
              }
            }
          }
        }
        lVar26 = local_5a20;
        fVar6 = (float)param_4[0xb];
        fVar7 = (float)param_4[10];
        fVar49 = (float)param_4[8] * 0.0;
        fVar50 = (float)param_4[9] * 0.0;
        fVar45 = fVar7 * 1.0 + 0.0 + fVar49;
        fVar46 = fVar7 * 0.0 + 0.0 + fVar50;
        fVar47 = fVar7 * 0.0 + 0.0 + 0.0;
        fVar48 = fVar7 * 0.0 + 0.0 + 0.0;
        fVar39 = fVar6 * 0.0 + 0.0 + fVar49;
        fVar40 = fVar6 * 1.0 + 0.0 + fVar50;
        fVar41 = fVar6 * 0.0 + 0.0 + 0.0;
        fVar42 = fVar6 * 0.0 + 0.0 + 0.0;
        fVar49 = fVar49 + 0.0;
        fVar50 = fVar50 + 0.0;
        fVar43 = (float)param_4[8] + 0.0;
        fVar44 = (float)param_4[9] + 0.0;
        fVar6 = (float)param_4[0x14];
        fVar7 = (float)param_4[0x15];
        fVar8 = (float)param_4[0x16];
        fVar9 = (float)param_4[0x17];
        fVar10 = (float)param_4[0x18];
        fVar11 = (float)param_4[0x19];
        fVar12 = (float)param_4[0x1a];
        fVar13 = (float)param_4[0x1b];
        fVar14 = (float)param_4[0x1c];
        fVar15 = (float)param_4[0x1d];
        fVar16 = (float)param_4[0x1e];
        fVar17 = (float)param_4[0x1f];
        fVar18 = (float)param_4[0x20];
        fVar19 = (float)param_4[0x21];
        fVar20 = (float)param_4[0x22];
        fVar21 = (float)param_4[0x23];
        local_59f8 = CONCAT44(fVar48 * fVar19 + fVar47 * fVar15 + fVar46 * fVar11 + fVar45 * fVar7,
                              fVar48 * fVar18 + fVar47 * fVar14 + fVar46 * fVar10 + fVar45 * fVar6);
        uStack_59f0 = CONCAT44(fVar48 * fVar21 + fVar47 * fVar17 + fVar46 * fVar13 + fVar45 * fVar9,
                               fVar48 * fVar20 + fVar47 * fVar16 + fVar46 * fVar12 + fVar45 * fVar8)
        ;
        uStack_59e8 = CONCAT44(fVar42 * fVar19 + fVar41 * fVar15 + fVar40 * fVar11 + fVar39 * fVar7,
                               fVar42 * fVar18 + fVar41 * fVar14 + fVar40 * fVar10 + fVar39 * fVar6)
        ;
        uStack_59e0 = CONCAT44(fVar42 * fVar21 + fVar41 * fVar17 + fVar40 * fVar13 + fVar39 * fVar9,
                               fVar42 * fVar20 + fVar41 * fVar16 + fVar40 * fVar12 + fVar39 * fVar8)
        ;
        uStack_59d8 = CONCAT44(fVar19 * 0.0 + fVar15 * 1.0 + fVar50 * fVar11 + fVar49 * fVar7,
                               fVar18 * 0.0 + fVar14 * 1.0 + fVar50 * fVar10 + fVar49 * fVar6);
        local_59d0 = CONCAT44(fVar21 * 0.0 + fVar17 * 1.0 + fVar50 * fVar13 + fVar49 * fVar9,
                              fVar20 * 0.0 + fVar16 * 1.0 + fVar50 * fVar12 + fVar49 * fVar8);
        local_59c8 = CONCAT44(fVar19 * 1.0 + fVar15 * 0.0 + fVar44 * fVar11 + fVar43 * fVar7,
                              fVar18 * 1.0 + fVar14 * 0.0 + fVar44 * fVar10 + fVar43 * fVar6);
        uStack_59c0 = CONCAT44(fVar21 * 1.0 + fVar17 * 0.0 + fVar44 * fVar13 + fVar43 * fVar9,
                               fVar20 * 1.0 + fVar16 * 0.0 + fVar44 * fVar12 + fVar43 * fVar8);
        FUN_1489e0aa8(local_5a20,param_2);
        FUN_1489e0bba(lVar26,param_2,param_4 + 4);
        local_178 = *(longlong *)(param_1 + 0x68);
        lVar26 = FUN_143e783c4(&local_178,*(undefined4 *)(lVar36 + 0x28));
        if (lVar26 != 0) {
          lVar26 = *(longlong *)(lVar26 + 0x58);
          if (lVar26 == 0) {
            lVar36 = *(longlong *)(*(longlong *)(*(longlong *)(lVar36 + 0x10) + 0x128) + 0x10);
            if (lVar36 != 0) {
              (**(code **)(*DAT_14ca83900 + 0x178))(DAT_14ca83900,&DAT_14ca85100,lVar36,0);
            }
          }
          else {
            puVar5 = (uint *)(lVar26 + 8);
            LOCK();
            *(int *)(lVar26 + 8) = *(int *)(lVar26 + 8) + 1;
            UNLOCK();
            lVar36 = *(longlong *)(*(longlong *)(*(longlong *)(lVar36 + 0x10) + 0x128) + 0x10);
            if (lVar36 != 0) {
              (**(code **)(*DAT_14ca83900 + 0x178))(DAT_14ca83900,&DAT_14ca85100,lVar36,lVar26);
            }
            LOCK();
            uVar37 = *puVar5;
            *puVar5 = *puVar5 - 1;
            UNLOCK();
            if ((uVar37 & 0x3fffffff) == 1) {
              LOCK();
              uVar37 = *puVar5;
              *puVar5 = *puVar5 | 0x40000000;
              UNLOCK();
              if ((uVar37 >> 0x1e & 1) == 0) {
                bVar1 = *(byte *)(lVar26 + 0xd);
                plVar28 = (longlong *)FUN_14001cc68(0x10,8);
                plVar28[1] = lVar26;
                plVar25 = DAT_14ca843c0;
                plVar29 = DAT_14ca843c8;
                if ((bVar1 & 2) == 0) {
                  do {
                    *plVar28 = (longlong)plVar25;
                    LOCK();
                    bVar38 = plVar25 != DAT_14ca843c0;
                    plVar29 = plVar28;
                    if (bVar38) {
                      plVar25 = DAT_14ca843c0;
                      plVar29 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar29;
                    UNLOCK();
                  } while (bVar38);
                }
                else {
                  do {
                    *plVar28 = (longlong)plVar29;
                    LOCK();
                    bVar38 = plVar29 != DAT_14ca843c8;
                    plVar25 = plVar28;
                    if (bVar38) {
                      plVar29 = DAT_14ca843c8;
                      plVar25 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar25;
                    UNLOCK();
                  } while (bVar38);
                }
              }
            }
          }
          uVar30 = (**(code **)(*(longlong *)*puVar33 + 0x2f0))();
          FUN_140eb1606(&DAT_14ca85100,0);
          FUN_1489e0ccc(local_5a28,param_2,local_34f8,uVar30);
          uVar30 = *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x30);
          puVar31 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar33 = puVar31 + 6;
          if ((undefined8 *)param_2[1] < puVar33) {
            FUN_140023dd8(param_2,0x38);
            puVar31 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
            puVar33 = puVar31 + 6;
          }
          *param_2 = (ulonglong)puVar33;
          *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
          *(undefined8 **)param_2[6] = puVar31;
          param_2[6] = (ulonglong)(puVar31 + 1);
          puVar31[1] = 0;
          *puVar31 = &PTR_FUN_14a1fb5b0;
          puVar31[2] = uVar30;
          *(undefined4 *)(puVar31 + 3) = 0;
          *(undefined4 *)((longlong)puVar31 + 0x1c) = 0;
          *(undefined4 *)(puVar31 + 4) = 4;
          *(undefined4 *)((longlong)puVar31 + 0x24) = 0;
          puVar31[5] = &DAT_100000002;
        }
        FUN_1400468f8(local_34f8);
        FUN_14475059c(local_408);
        goto LAB_143e993b9;
      }
      iVar35 = local_5a10 + -1;
      if (local_5a10 == 0) {
        iVar35 = 0;
      }
      if (0 < iVar35) {
        puVar32 = local_5a18;
        if (local_5a10 == 0) {
          puVar32 = &DAT_149dfb77a;
        }
        lVar36 = 0;
        uVar37 = 0;
        do {
          uVar23 = ((uint)(ushort)puVar32[lVar36] +
                   (uint)(0x19 < (ushort)puVar32[lVar36] - 0x61) * 0x20) - 0x20;
          uVar37 = uVar37 >> 8 ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar37 ^ uVar23) & 0xff) * 4);
          uVar37 = uVar37 >> 8 ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar37 & 0xff ^ uVar23 >> 8 & 0xff) * 4);
          lVar36 = lVar36 + 1;
        } while (iVar35 != (int)lVar36);
      }
      if (*(int *)(param_1 + 0x18) == *(int *)(param_1 + 0x44)) goto LAB_143e993a4;
      lVar36 = param_1 + 0x48;
      if (*(longlong *)(param_1 + 0x50) != 0) {
        lVar36 = *(longlong *)(param_1 + 0x50);
      }
      iVar35 = *(int *)(lVar36 + (ulonglong)(*(int *)(param_1 + 0x58) - 1U & uVar37) * 4);
      if (iVar35 == -1) goto LAB_143e993a4;
      lVar36 = *plVar25;
LAB_143e99333:
      lVar26 = (longlong)iVar35;
      iVar35 = *(int *)(lVar36 + 8 + lVar26 * 0x18);
      if (iVar35 != local_5a10) {
        if (iVar35 + local_5a10 == 1) goto LAB_143e993b9;
        goto LAB_143e9934a;
      }
      if (1 < local_5a10) {
        lVar34 = 0;
        do {
          uVar2 = *(ushort *)(*(longlong *)(lVar36 + lVar26 * 0x18) + lVar34);
          uVar3 = *(ushort *)((longlong)local_5a18 + lVar34);
          if (uVar2 == uVar3) {
            if (uVar2 == 0) break;
          }
          else {
            if (0x7f < (uVar3 | uVar2)) {
              iVar35 = (uint)uVar2 - (uint)uVar3;
              goto LAB_143e9939a;
            }
            if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[(uint)uVar3]) goto code_r0x000143e99398;
          }
          lVar34 = lVar34 + 2;
        } while( true );
      }
      goto LAB_143e993b9;
    }
  }
  goto LAB_143e99196;
code_r0x000143e99398:
  iVar35 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar3];
LAB_143e9939a:
  if (iVar35 == 0) goto LAB_143e993b9;
LAB_143e9934a:
  iVar35 = *(int *)(lVar36 + 0x10 + lVar26 * 0x18);
  if (iVar35 == -1) goto LAB_143e993a4;
  goto LAB_143e99333;
LAB_143e993a4:
  FUN_14482b35e(plVar25,local_34f8,&local_5a18,0);
LAB_143e993b9:
  if (local_5a18 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_143e99196:
  if (local_5a08[0] != 0) {
    FUN_1400020a8();
  }
LAB_143e991a5:
  if ((local_90 ^ (ulonglong)auStack_5a78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e9a5ae FUN_143e9a5ae body=1681 status=ok
// SIG undefined FUN_143e9a5ae(void)

void FUN_143e9a5ae(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  DWORD DVar11;
  DWORD DVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined4 *puVar15;
  uint *puVar16;
  undefined8 uVar17;
  longlong *plVar18;
  longlong *plVar19;
  uint uVar20;
  undefined ***pppuVar21;
  uint *puVar22;
  undefined8 *puVar23;
  ulonglong uVar24;
  bool bVar25;
  undefined1 auStack_a8 [32];
  code **local_88;
  code *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  code *local_50;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  pcVar7 = (code *)*param_2;
  lVar8 = param_2[1];
  uVar5 = *(undefined4 *)(param_2 + 2);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x14);
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar10 = *(int *)(lVar13 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar10 != 2) {
      if (iVar10 != 1) goto LAB_143e9a5fc;
      DVar11 = FUN_140ad26c0();
      DVar12 = GetCurrentThreadId();
      if (DVar11 == DVar12) goto LAB_143e9a605;
      goto LAB_143e9a6e2;
    }
LAB_143e9a605:
    local_78[0] = pcVar7;
    lVar13 = FUN_143e783c4(local_78,uVar5);
    if (lVar13 == 0) goto LAB_143e9abd2;
    lVar13 = *(longlong *)(lVar13 + 0x58);
    if (lVar13 != 0) {
      LOCK();
      *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
      UNLOCK();
      puVar16 = (uint *)(lVar13 + 8);
      lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x128) + 0x10);
      if (lVar8 != 0) {
        (**(code **)(*DAT_14ca83900 + 0x178))(DAT_14ca83900,&DAT_14ca85100,lVar8,lVar13);
      }
      LOCK();
      uVar20 = *puVar16;
      *puVar16 = *puVar16 - 1;
      UNLOCK();
      if ((uVar20 & 0x3fffffff) == 1) {
        LOCK();
        uVar20 = *puVar16;
        *puVar16 = *puVar16 | 0x40000000;
        UNLOCK();
        if ((uVar20 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(lVar13 + 0xd);
          plVar14 = (longlong *)FUN_14001cc68(0x10,8);
          plVar14[1] = lVar13;
          plVar19 = DAT_14ca843c0;
          plVar18 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar14 = (longlong)plVar19;
              LOCK();
              bVar25 = plVar19 != DAT_14ca843c0;
              plVar18 = plVar14;
              if (bVar25) {
                plVar19 = DAT_14ca843c0;
                plVar18 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar18;
              UNLOCK();
            } while (bVar25);
          }
          else {
            do {
              *plVar14 = (longlong)plVar18;
              LOCK();
              bVar25 = plVar18 != DAT_14ca843c8;
              plVar19 = plVar14;
              if (bVar25) {
                plVar18 = DAT_14ca843c8;
                plVar19 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar19;
              UNLOCK();
            } while (bVar25);
          }
        }
      }
      goto LAB_143e9abd2;
    }
  }
  else {
LAB_143e9a5fc:
    if (iVar10 == 0x10) goto LAB_143e9a605;
LAB_143e9a6e2:
    if (DAT_14ca9a438 != '\0') {
LAB_143e9a713:
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar16 = (uint *)*puVar2;
        if (puVar16 != (uint *)0x0) goto LAB_143e9a830;
        while( true ) {
          uVar20 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar20 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar20 | 1;
            __tlregdtor(&LAB_143ea3853);
          }
          lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar15 = *(undefined4 **)(lVar13 + 0x310);
          *(undefined8 *)(lVar13 + 0x310) = 0;
          if (puVar15 == (undefined4 *)0x0) {
            puVar15 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar15 = 0xffffffff;
          *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
          puVar15[0x12] = 0;
          *puVar2 = puVar15;
          FUN_140217a48(puVar2);
          puVar16 = (uint *)*puVar2;
LAB_143e9a830:
          puVar23 = (undefined8 *)(*(longlong *)(puVar16 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar22 = (uint *)(puVar23 + 0x18);
          uVar20 = puVar16[0x12];
          if (puVar22 <= puVar16 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
            LOCK();
            uVar3 = *puVar16;
            *puVar16 = *puVar16 + uVar20 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar20) != 0xffffffff) break;
            puVar16 = (uint *)*puVar2;
            *puVar16 = 0xffffffff;
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
            puVar16[0x12] = 0;
            *puVar2 = puVar16;
            puVar23 = (undefined8 *)((longlong)puVar16 + 0x5fU & 0xfffffffffffffff8);
            puVar22 = (uint *)(puVar23 + 0x18);
            uVar20 = 0;
            if (puVar22 <= puVar16 + 0x4000) {
              uVar20 = 1;
              goto LAB_143e9a8b0;
            }
          }
        }
        uVar20 = uVar20 + 1;
LAB_143e9a8b0:
        *(uint **)(puVar16 + 0x10) = puVar22;
        puVar16[0x12] = uVar20;
        iVar10 = 0;
        FUN_1447247dc(puVar23,0);
        *puVar23 = &PTR_FUN_14b457368;
        puVar23[0x15] = pcVar7;
        puVar23[0x16] = lVar8;
        *(undefined4 *)(puVar23 + 0x17) = uVar5;
        *(undefined4 *)((longlong)puVar23 + 0xbc) = uVar6;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar20 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar20 < 2) {
            uVar24 = (ulonglong)(byte)(&DAT_149e38edc)[uVar20];
            iVar10 = 0;
          }
          else {
            uVar24 = 2;
          }
        }
        else {
          iVar10 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar24 = 5;
        }
        if (*(code **)(puVar23[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar23[0xe] + 0x18))(puVar23 + 0xe,puVar23 + 9);
        }
        puVar23[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar23[9] = puVar23;
        puVar23[10] = puVar23;
        lVar8 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar8 == 0) {
          uVar9 = 1;
          if ((char)uVar24 != '\x06') {
            uVar9 = uVar24;
          }
          uVar24 = uVar9;
          uVar17 = 0;
        }
        else {
          if ((char)uVar24 == '\x06') {
            uVar24 = *(ulonglong *)(lVar8 + 0x38) >> 0x3b;
          }
          uVar17 = *(undefined8 *)(lVar8 + 0x30);
        }
        puVar23[0xf] = uVar17;
        puVar23[0x10] = uVar24 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar23 + 0x1c) = iVar10;
        if (puVar23 == (undefined8 *)0x0) {
          local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar23 + 1) = *(int *)(puVar23 + 1) + 1;
          UNLOCK();
          local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
          FUN_1447439e4(puVar23);
          LOCK();
          piVar1 = (int *)(puVar23 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar23)(puVar23,1);
          }
        }
      }
      else {
        local_88 = local_78;
        local_68 = (undefined ***)0x0;
        local_58 = &PTR_LAB_14b457300;
        local_78[0] = FUN_143ea7b14;
        local_50 = pcVar7;
        local_48 = lVar8;
        local_40 = uVar5;
        local_3c = uVar6;
        FUN_14005a792(&DAT_14ca9a440,L"CompositorProcessRenderDataCommand",&DAT_14cb913e8);
        if (local_78[0] != (code *)0x0) {
          pppuVar21 = local_68;
          if (local_68 == (undefined ***)0x0) {
            pppuVar21 = &local_58;
          }
          (*(code *)(*pppuVar21)[2])();
        }
      }
      goto LAB_143e9abd2;
    }
    if ((DAT_14c86a9f8 == '\x01') && (iVar10 = *(int *)(lVar13 + 0xc60), iVar10 != 2)) {
      if (iVar10 == 1) {
        DVar11 = FUN_140ad26c0();
        DVar12 = GetCurrentThreadId();
        if (DVar11 == DVar12) goto LAB_143e9aafe;
      }
      goto LAB_143e9a713;
    }
LAB_143e9aafe:
    local_78[0] = pcVar7;
    lVar13 = FUN_143e783c4(local_78,uVar5);
    if (lVar13 == 0) goto LAB_143e9abd2;
    lVar13 = *(longlong *)(lVar13 + 0x58);
    if (lVar13 != 0) {
      LOCK();
      *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
      UNLOCK();
      puVar16 = (uint *)(lVar13 + 8);
      lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x128) + 0x10);
      if (lVar8 != 0) {
        (**(code **)(*DAT_14ca83900 + 0x178))(DAT_14ca83900,&DAT_14ca85100,lVar8,lVar13);
      }
      LOCK();
      uVar20 = *puVar16;
      *puVar16 = *puVar16 - 1;
      UNLOCK();
      if ((uVar20 & 0x3fffffff) == 1) {
        LOCK();
        uVar20 = *puVar16;
        *puVar16 = *puVar16 | 0x40000000;
        UNLOCK();
        if ((uVar20 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(lVar13 + 0xd);
          plVar14 = (longlong *)FUN_14001cc68(0x10,8);
          plVar14[1] = lVar13;
          plVar19 = DAT_14ca843c0;
          plVar18 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar14 = (longlong)plVar19;
              LOCK();
              bVar25 = plVar19 != DAT_14ca843c0;
              plVar18 = plVar14;
              if (bVar25) {
                plVar19 = DAT_14ca843c0;
                plVar18 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar18;
              UNLOCK();
            } while (bVar25);
          }
          else {
            do {
              *plVar14 = (longlong)plVar18;
              LOCK();
              bVar25 = plVar18 != DAT_14ca843c8;
              plVar19 = plVar14;
              if (bVar25) {
                plVar18 = DAT_14ca843c8;
                plVar19 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar19;
              UNLOCK();
            } while (bVar25);
          }
        }
      }
      goto LAB_143e9abd2;
    }
  }
  lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x128) + 0x10);
  if (lVar8 != 0) {
    (**(code **)(*DAT_14ca83900 + 0x178))(DAT_14ca83900,&DAT_14ca85100,lVar8,0);
  }
LAB_143e9abd2:
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e9ac40 FUN_143e9ac40 body=175 status=ok
// SIG undefined FUN_143e9ac40(void)

void FUN_143e9ac40(longlong *param_1,uint param_2)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  cVar1 = (**(code **)(*param_1 + 0x70))();
  if ((cVar1 != '\0') && ((int)param_1[0x12] != *(int *)((longlong)param_1 + 0xbc))) {
    plVar2 = param_1 + 0x18;
    if ((longlong *)param_1[0x19] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[0x19];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[0x1a] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        lVar4 = param_1[0x11] + (longlong)iVar3 * 0x20;
        if (*(uint *)(param_1[0x11] + (longlong)iVar3 * 0x20) == param_2) {
          if ((lVar4 + 8U & 0xfffffffffffffff7) == 0) {
            return;
          }
          if ((longlong)*(int *)(lVar4 + 0x10) == 0) {
            return;
          }
          lVar5 = *(longlong *)(lVar4 + 8);
          lVar4 = (longlong)*(int *)(lVar4 + 0x10) * 0x18;
          do {
            (**(code **)(*param_1 + 0x58))(param_1,lVar5);
            lVar5 = lVar5 + 0x18;
            lVar4 = lVar4 + -0x18;
          } while (lVar4 != 0);
          return;
        }
        iVar3 = *(int *)(lVar4 + 0x18);
      } while (iVar3 != -1);
    }
  }
  return;
}



// FUNCTION 143e9acf0 FUN_143e9acf0 body=122 status=ok
// SIG undefined FUN_143e9acf0(void)

uint * FUN_143e9acf0(longlong param_1)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  uint *puVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if (*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x6c)) {
    lVar2 = param_1 + 0x70;
    if (*(longlong *)(param_1 + 0x78) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x78);
    }
    uVar3 = *(uint *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x80) - 1U & *(uint *)(param_1 + 0x30))
                              * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar4 = (uint *)(*(longlong *)(param_1 + 0x38) + (longlong)(int)uVar3 * 0x28);
        if (*puVar4 == *(uint *)(param_1 + 0x30)) goto LAB_143e9ad4f;
        uVar3 = puVar4[8];
      } while (uVar3 != 0xffffffff);
    }
  }
  puVar4 = (uint *)0x0;
LAB_143e9ad4f:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  puVar1 = puVar4 + 2;
  if (puVar4 == (uint *)0x0) {
    puVar1 = (uint *)0x0;
  }
  return puVar1;
}



// FUNCTION 143e9ad6a FUN_143e9ad6a body=134 status=ok
// SIG undefined FUN_143e9ad6a(void)

void FUN_143e9ad6a(longlong param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if (*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x6c)) {
    lVar2 = param_1 + 0x70;
    if (*(longlong *)(param_1 + 0x78) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x78);
    }
    uVar3 = *(uint *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x80) - 1U & param_2) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x38) + (longlong)(int)uVar3 * 0x28);
        if (*puVar1 == param_2) {
          if (((ulonglong)(puVar1 + 2) & 0xfffffffffffffff7) != 0) {
            (**(code **)(**(longlong **)(puVar1 + 4) + 0x10))();
          }
          break;
        }
        uVar3 = puVar1[8];
      } while (uVar3 != 0xffffffff);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000143e9ade9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}



// FUNCTION 143e9adf0 FUN_143e9adf0 body=617 status=ok
// SIG undefined FUN_143e9adf0(void)

longlong * FUN_143e9adf0(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  byte bVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined2 *puVar9;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = &local_58;
  local_58 = 0;
  uStack_50 = 0;
  plVar6 = (longlong *)
           FUN_1437337e4(*(undefined4 *)(param_2 + 0x24),*(undefined4 *)(param_2 + 0x28),2,0);
  if (plVar6 == (longlong *)0x0) {
    if (*(int *)(param_2 + 0x10) == 0) {
      puVar9 = &DAT_149dfb77a;
    }
    else {
      puVar9 = *(undefined2 **)(param_2 + 8);
    }
    FUN_140033559(".\\../Plugins/Runtime/Coherent/CohtmlPlugin/Source/CohtmlPlugin/Private/RenoirSublayerCompositor.cpp"
                  ,0xf7,L"Failed to create transient texture for \'%s\' composition!",puVar9);
  }
  if (DAT_14cb907b8 == (longlong *)0x0) {
    local_70 = &local_48;
    local_48 = FUN_1449e2820;
    local_60 = FUN_14081d0ea;
    local_68 = FUN_14081d0ea;
    local_78 = &LAB_1489c8acb;
    local_80 = &LAB_146027b0e;
    local_88 = L"Engine";
    local_90 = 0;
    local_98 = 0x10000006;
    local_a0 = 8;
    local_a8 = (undefined8 *)CONCAT44(local_a8._4_4_,0x128);
    FUN_14081cfa3(L"/Script/CohtmlPlugin",L"CohtmlSettings",&DAT_14cb907b8,&DAT_1489c8aca);
  }
  plVar3 = DAT_14cb907b8;
  plVar7 = (longlong *)DAT_14cb907b8[0x22];
  if (plVar7 == (longlong *)0x0) {
    (**(code **)(*DAT_14cb907b8 + 1000))(DAT_14cb907b8);
    plVar7 = (longlong *)plVar3[0x22];
  }
  bVar4 = (**(code **)(*plVar7 + 0x2a0))();
  *(byte *)((longlong)plVar6 + 0xfe) = *(byte *)((longlong)plVar6 + 0xfe) & 0xfe | bVar4;
  (**(code **)(*plVar6 + 0x318))(plVar6);
  (**(code **)(*plVar6 + 0x3a8))(plVar6);
  if (*(int *)(param_1 + 0x90) != *(int *)(param_1 + 0xbc)) {
    lVar8 = param_1 + 0xc0;
    if (*(longlong *)(param_1 + 200) != 0) {
      lVar8 = *(longlong *)(param_1 + 200);
    }
    iVar5 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0xd0) - 1U & param_4) * 4);
    if (iVar5 != -1) {
      do {
        lVar8 = *(longlong *)(param_1 + 0x88) + (longlong)iVar5 * 0x20;
        if (*(uint *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar5 * 0x20) == param_4)
        goto LAB_143e9af31;
        iVar5 = *(int *)(lVar8 + 0x18);
      } while (iVar5 != -1);
    }
  }
  lVar8 = 0;
LAB_143e9af31:
  uVar1 = *(undefined4 *)(param_2 + 0x20);
  plVar7 = (longlong *)(lVar8 + 8);
  if (lVar8 == 0) {
    plVar7 = (longlong *)0x0;
  }
  if (plVar7 == (longlong *)0x0) {
    FUN_140033559(".\\../Plugins/Runtime/Coherent/CohtmlPlugin/Source/CohtmlPlugin/Private/RenoirSublayerCompositor.cpp"
                  ,0x102,L"No FRenderData found with the provided Compositor index %d!",param_4);
  }
  iVar5 = (int)plVar7[1];
  lVar8 = (longlong)iVar5;
  *(uint *)(plVar7 + 1) = iVar5 + 1U;
  if (*(uint *)((longlong)plVar7 + 0xc) < iVar5 + 1U) {
    FUN_1489f0890(plVar7,iVar5);
  }
  lVar2 = *plVar7;
  *(undefined8 *)(lVar2 + lVar8 * 0x18) = param_3;
  *(longlong **)(lVar2 + 8 + lVar8 * 0x18) = plVar6;
  *(undefined4 *)(lVar2 + 0x10 + lVar8 * 0x18) = uVar1;
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return plVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e9b072 FUN_143e9b072 body=1564 status=ok
// SIG undefined FUN_143e9b072(void)

void FUN_143e9b072(longlong param_1,undefined8 param_2,char *param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  size_t sVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined2 *puVar11;
  undefined4 uVar12;
  undefined1 auStack_238 [32];
  undefined8 *local_218;
  undefined8 local_210;
  undefined4 local_208;
  undefined8 local_200;
  wchar_t *local_1f8;
  undefined1 *local_1f0;
  undefined1 *local_1e8;
  undefined8 *local_1e0;
  code *local_1d8;
  code *local_1d0;
  wchar_t *local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined2 *local_1a0;
  int local_198;
  undefined1 local_18c [4];
  undefined2 **local_188;
  undefined8 local_180;
  undefined8 local_178;
  longlong *plStack_170;
  longlong local_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_78 = 0;
  if (param_3 == (char *)0x0) {
    local_70 = 0;
    local_68 = 0;
  }
  else {
    sVar5 = strlen(param_3);
    FUN_1446e6fe8(&local_178,param_3,sVar5 & 0xffffffff,1);
  }
  FUN_140056680(&local_1a0,local_70);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  lVar7 = *(longlong *)(param_4 + 0x1c8);
  if ((lVar7 != 0) && (cVar4 = FUN_140432338(lVar7), cVar4 != '\0')) {
    puVar11 = local_1a0;
    if (local_198 == 0) {
      puVar11 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_1a8,puVar11,1);
    local_210 = 0;
    local_218 = (undefined8 *)((ulonglong)local_218 & 0xffffffffffffff00);
    plVar6 = (longlong *)FUN_141797230(*(undefined8 *)(lVar7 + 0xa8),local_1a8,0,0);
    local_178 = (code *)((ulonglong)local_178._4_4_ << 0x20);
    (**(code **)(*plVar6 + 0x490))(plVar6,lVar7,&local_178,0);
    FUN_140b506a4(plVar6);
    local_178 = (code *)0x0;
    plStack_170 = (longlong *)0x0;
    local_168 = 0;
    uStack_160 = 0;
    local_188 = (undefined2 **)0x14b454ff4;
    local_180 = (undefined8 *)CONCAT44(local_180._4_4_,0x2b);
    FUN_14475bf92(&local_178);
    lVar7 = FUN_140081d40(&local_178,0);
    if (local_168 != 0) {
      FUN_1400020a8();
    }
    if (lVar7 != 0) {
      lVar8 = FUN_1406d0862();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8
           ) != lVar8 + 0x30)) {
        lVar7 = 0;
      }
      (**(code **)(*plVar6 + 0xa78))(plVar6,lVar7);
      if (DAT_14cb913f0 == 0) {
        uVar9 = 0;
        lVar7 = 0;
      }
      else {
        plVar2 = *(longlong **)(DAT_14cb913f0 + 0x3a8);
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
          UNLOCK();
        }
        puVar11 = local_1a0;
        if (local_198 == 0) {
          puVar11 = &DAT_149dfb77a;
        }
        FUN_1446f470e(&local_1b8,puVar11,1);
        if (DAT_14cb0b4f0 == 0) {
          local_178 = FUN_1449e2820;
          local_1d0 = FUN_14081d0ea;
          local_1d8 = (code *)&LAB_14580b774;
          local_1e8 = &LAB_147d6e27b;
          local_1f0 = &LAB_140307be8;
          local_1f8 = L"Engine";
          local_200 = 0;
          local_208 = 0x10000000;
          local_210 = CONCAT44(local_210._4_4_,8);
          local_218 = (undefined8 *)CONCAT44(local_218._4_4_,0x158);
          local_1e0 = &local_178;
          FUN_14081cfa3(L"/Script/Engine",L"Texture2D",&DAT_14cb0b4f0,FUN_1464082aa);
        }
        local_218 = (undefined8 *)((ulonglong)local_218 & 0xffffffff00000000);
        FUN_140af9fb2(&local_1b0,DAT_14c951640,DAT_14cb0b4f0,local_1b8);
        if (DAT_14cb0b4f0 == 0) {
          local_178 = FUN_1449e2820;
          local_1d0 = FUN_14081d0ea;
          local_1d8 = (code *)&LAB_14580b774;
          local_1e8 = &LAB_147d6e27b;
          local_1f0 = &LAB_140307be8;
          local_1f8 = L"Engine";
          local_200 = 0;
          local_208 = 0x10000000;
          local_210 = CONCAT44(local_210._4_4_,8);
          local_218 = (undefined8 *)CONCAT44(local_218._4_4_,0x158);
          local_1e0 = &local_178;
          FUN_14081cfa3(L"/Script/Engine",L"Texture2D",&DAT_14cb0b4f0,FUN_1464082aa);
        }
        lVar7 = FUN_1489e16b3(DAT_14c951640,DAT_14cb0b4f0,local_1b0);
        uVar9 = FUN_14090ceee(*(undefined8 *)(param_1 + 0x178),0,0);
        FUN_1446f470e(&local_1c0,L"MyCustomTextureParam",1);
        FUN_14016d8b0(uVar9,local_1c0,lVar7);
        if (DAT_14cb907b8 == (longlong *)0x0) {
          local_178 = FUN_1449e2820;
          local_1d0 = FUN_14081d0ea;
          local_1d8 = FUN_14081d0ea;
          local_1e8 = &LAB_1489c8acb;
          local_1f0 = &LAB_146027b0e;
          local_1f8 = L"Engine";
          local_200 = 0;
          local_208 = 0x10000006;
          local_210 = CONCAT44(local_210._4_4_,8);
          local_218 = (undefined8 *)CONCAT44(local_218._4_4_,0x128);
          local_1e0 = &local_178;
          FUN_14081cfa3(L"/Script/CohtmlPlugin",L"CohtmlSettings",&DAT_14cb907b8,&DAT_1489c8aca);
        }
        plVar3 = DAT_14cb907b8;
        plVar10 = (longlong *)DAT_14cb907b8[0x22];
        if (plVar10 == (longlong *)0x0) {
          (**(code **)(*DAT_14cb907b8 + 1000))(DAT_14cb907b8);
          plVar10 = (longlong *)plVar3[0x22];
        }
        uVar12 = (**(code **)(*plVar10 + 0x2a8))(plVar10,0);
        FUN_1446f470e(&local_1c8,L"GammaCorrectionExponent",1);
        local_188 = (undefined2 **)local_1c8;
        local_180 = (undefined8 *)CONCAT71(local_180._1_7_,2);
        local_180 = (undefined8 *)CONCAT44(0xffffffff,(undefined4)local_180);
        local_178 = (code *)((ulonglong)local_178 & 0xffffffffffffff00);
        plStack_170 = (longlong *)0x0;
        local_168 = 0;
        uStack_160 = 0;
        uStack_158 = 0;
        local_150 = 0;
        uStack_148 = 0;
        local_140 = 0;
        uStack_138 = 0;
        local_130 = 0;
        uStack_128 = 0;
        local_218 = &local_178;
        FUN_140042bb4(uVar9,&local_188,uVar12,0);
        (**(code **)(*plVar6 + 0x638))(plVar6,0,uVar9);
        if (plVar2 != (longlong *)0x0) {
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
        }
      }
      local_178 = (code *)CONCAT44(local_178._4_4_,0xffffffff);
      local_188 = &local_1a0;
      local_180 = &local_178;
      plStack_170 = plVar6;
      local_168 = lVar7;
      uStack_160 = uVar9;
      FUN_1489f0e18(param_1 + 0x128,local_18c);
    }
  }
  if (local_1a0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e9b690 FUN_143e9b690 body=425 status=ok
// SIG undefined FUN_143e9b690(void)

void FUN_143e9b690(longlong param_1,undefined8 param_2,char *param_3)

{
  longlong *plVar1;
  size_t sVar2;
  undefined2 *puVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_168 [32];
  undefined2 *local_148;
  int local_140;
  undefined1 local_138 [256];
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (*(char *)(param_1 + 0x188) == '\0') {
    local_38 = 0;
    if (param_3 == (char *)0x0) {
      local_30 = 0;
      local_28 = 0;
    }
    else {
      sVar2 = strlen(param_3);
      FUN_1446e6fe8(local_138,param_3,sVar2 & 0xffffffff,1);
    }
    FUN_140056680(&local_148,local_30);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    FUN_1489d8330(param_1 + 0xd8);
    plVar7 = (longlong *)(param_1 + 0x128);
    uVar5 = 0;
    iVar4 = local_140 + -1;
    if (local_140 == 0) {
      iVar4 = 0;
    }
    if (0 < iVar4) {
      puVar3 = local_148;
      if (local_140 == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      lVar8 = 0;
      uVar5 = 0;
      do {
        uVar6 = ((uint)(0x19 < (ushort)puVar3[lVar8] - 0x61) * 0x20 + (uint)(ushort)puVar3[lVar8]) -
                0x20;
        uVar9 = (uint)(uVar5 >> 8) ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar5 ^ uVar6) & 0xff) * 4);
        uVar5 = (ulonglong)
                (uVar9 >> 8 ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar9 & 0xff ^ uVar6 >> 8 & 0xff) * 4));
        lVar8 = lVar8 + 1;
      } while (iVar4 != (int)lVar8);
    }
    iVar4 = FUN_1489f1136(plVar7,uVar5,&local_148);
    if (iVar4 != -1) {
      plVar1 = *(longlong **)(*plVar7 + 0x18 + (longlong)iVar4 * 0x38);
      FUN_1489f1276(plVar7,iVar4);
      (**(code **)(*plVar1 + 0x420))(plVar1,0);
    }
    if (local_148 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e9b83a FUN_143e9b83a body=4287 status=ok
// SIG undefined FUN_143e9b83a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e9b83a(longlong param_1,longlong param_2,undefined4 param_3)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  longlong lVar13;
  undefined8 uVar14;
  int iVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined1 *puVar18;
  undefined4 *puVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  int iVar23;
  ulonglong uVar24;
  undefined1 auVar25 [16];
  double dVar26;
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  undefined1 auVar33 [16];
  double dVar35;
  undefined1 auVar34 [16];
  double dVar36;
  double dVar37;
  double dVar38;
  undefined1 auStack_768 [32];
  double *local_748;
  undefined1 local_740;
  undefined4 local_72c;
  double local_728;
  double local_720;
  double local_718;
  undefined4 *local_710;
  longlong *local_708;
  longlong local_700;
  undefined1 local_6f8 [16];
  double local_6e8;
  double dStack_6e0;
  undefined8 local_6d0;
  undefined8 local_6c8;
  undefined8 local_6c0;
  undefined8 local_6b8;
  undefined8 local_6b0;
  double local_6a8;
  double dStack_6a0;
  double local_698;
  double dStack_690;
  double local_688;
  double dStack_680;
  double local_678;
  undefined1 local_668 [16];
  undefined1 local_658 [16];
  undefined1 local_640 [24];
  double local_628;
  double local_620;
  double local_608;
  double dStack_600;
  double local_5f8;
  double dStack_5f0;
  double local_5e8;
  double dStack_5e0;
  double local_5d8;
  undefined1 local_5c8 [16];
  undefined1 local_5b8 [16];
  double local_588;
  double local_580;
  double local_568;
  double dStack_560;
  double local_558;
  double dStack_550;
  double local_548;
  double dStack_540;
  undefined1 local_538 [16];
  double local_528;
  double local_520;
  double dStack_518;
  undefined8 local_510;
  double dStack_508;
  double local_500;
  double dStack_4f8;
  double local_4e8;
  double dStack_4e0;
  double local_4d8;
  double local_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  double local_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  double local_398;
  double local_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined1 local_378 [8];
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  double local_298;
  double local_290;
  double local_288;
  undefined8 local_280;
  double local_278 [6];
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined1 local_1f8 [16];
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  undefined1 local_178 [12];
  undefined4 uStack_16c;
  double local_168;
  undefined8 uStack_160;
  undefined1 local_158 [16];
  double local_148;
  undefined8 uStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_768;
  iVar15 = *(int *)(param_2 + 0x10) + -1;
  if (*(int *)(param_2 + 0x10) == 0) {
    iVar15 = 0;
  }
  if (0 < iVar15) {
    iVar23 = 0;
    do {
      iVar23 = iVar23 + 1;
    } while (iVar15 != iVar23);
  }
  iVar15 = FUN_1489f1136((longlong *)(param_1 + 0x128));
  if (iVar15 != -1) {
    lVar21 = (longlong)iVar15 * 0x38 + *(longlong *)(param_1 + 0x128);
    puVar19 = (undefined4 *)(lVar21 + 0x10);
    if (puVar19 != (undefined4 *)0x0 && lVar21 != 0) {
      plVar3 = *(longlong **)(lVar21 + 0x18);
      plVar4 = (longlong *)plVar3[0x24];
      local_710 = puVar19;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x528))(plVar3);
        local_278[5] = (double)*(float *)(param_2 + 0xc0) / (local_580 + local_580);
        local_278[0] = (double)*(float *)(param_2 + 0xbc) / (local_588 + local_588);
        local_278[1] = 0.0;
        local_278[2] = 0.0;
        local_278[3] = 0.0;
        local_278[4] = 0.0;
        local_248 = 0;
        uStack_240 = 0;
        local_238 = 0;
        uStack_230 = 0;
        local_228 = 0x3ff0000000000000;
        local_220 = 0;
        uStack_218 = 0;
        local_210 = 0;
        uStack_208 = 0;
        local_200 = 0x3ff0000000000000;
        local_288 = (double)*(float *)(param_2 + 0xb8);
        local_290 = (double)(*(float *)(param_2 + 0xc0) * 0.5 + *(float *)(param_2 + 0xb4));
        local_298 = (double)(*(float *)(param_2 + 0xbc) * 0.5 + *(float *)(param_2 + 0xb0));
        local_2f8 = 0x3ff0000000000000;
        local_2f0 = 0;
        uStack_2e8 = 0;
        local_2e0 = 0;
        uStack_2d8 = 0;
        local_2d0 = 0x3ff0000000000000;
        local_2c8 = 0;
        uStack_2c0 = 0;
        local_2b8 = 0;
        uStack_2b0 = 0;
        local_2a8 = 0x3ff0000000000000;
        local_2a0 = 0;
        local_280 = 0x3ff0000000000000;
        lVar13 = param_2 + 0x70;
        puVar18 = local_378;
        lVar20 = 0;
        do {
          lVar22 = 0;
          do {
            uVar2 = *(undefined8 *)(lVar13 + lVar22 * 4);
            *(double *)(puVar18 + lVar22 * 8) = (double)(float)uVar2;
            *(double *)((longlong)(puVar18 + lVar22 * 8) + 8) =
                 (double)(float)((ulonglong)uVar2 >> 0x20);
            uVar11 = local_320;
            uVar10 = local_340;
            uVar9 = local_348;
            uVar8 = local_360;
            uVar14 = local_368;
            uVar2 = uStack_370;
            lVar22 = lVar22 + 2;
          } while (lVar22 != 4);
          lVar20 = lVar20 + 1;
          lVar13 = lVar13 + 0x10;
          puVar18 = puVar18 + 0x20;
        } while (lVar20 != 4);
        uStack_370 = local_358;
        local_368 = local_338;
        local_360 = local_318;
        local_358 = uVar2;
        local_348 = local_330;
        local_340 = local_310;
        local_338 = uVar14;
        local_330 = uVar9;
        local_320 = local_308;
        local_318 = uVar8;
        local_310 = uVar10;
        local_308 = uVar11;
        local_390 = (double)-(*(int *)(param_1 + 0x184) / 2);
        local_398 = (double)-(*(int *)(param_1 + 0x180) / 2);
        local_3f8 = 0x3ff0000000000000;
        local_3f0 = 0;
        uStack_3e8 = 0;
        local_3e0 = 0;
        uStack_3d8 = 0;
        local_3d0 = 0x3ff0000000000000;
        local_3c8 = 0;
        uStack_3c0 = 0;
        local_3b8 = 0;
        uStack_3b0 = 0;
        local_3a8 = 0x3ff0000000000000;
        local_3a0 = 0;
        local_388 = 0;
        local_380 = 0x3ff0000000000000;
        local_72c = param_3;
        local_708 = plVar3;
        local_700 = lVar21;
        FUN_1447fea8d(local_1f8,local_278,&local_2f8);
        FUN_1447fea8d(local_178,local_1f8,local_378);
        FUN_1447fea8d(&local_548,local_178,&local_3f8);
        FUN_1448ac920(&local_608,&local_548);
        (**(code **)(*plVar4 + 0x528))(plVar4,local_640,&DAT_14c846480);
        local_450 = (double)(float)((local_620 + local_620) / (double)*(int *)(param_1 + 0x184));
        local_478 = (double)(float)((local_628 + local_628) / (double)*(int *)(param_1 + 0x180));
        local_470 = 0;
        uStack_468 = 0;
        local_460 = 0;
        uStack_458 = 0;
        local_448 = 0;
        uStack_440 = 0;
        local_438 = 0;
        uStack_430 = 0;
        local_428 = 0x3ff0000000000000;
        local_420 = 0;
        uStack_418 = 0;
        local_410 = 0;
        uStack_408 = 0;
        local_400 = 0x3ff0000000000000;
        uVar16 = SUB84(&local_6a8,0);
        uVar12 = FUN_1448ac920();
        dVar27 = local_668._0_8_;
        dVar6 = local_668._8_8_;
        dVar36 = local_658._0_8_;
        dVar38 = local_5c8._0_8_;
        dVar26 = local_5c8._8_8_;
        dVar28 = local_5b8._0_8_;
        auVar30 = minpd(local_5c8,local_668);
        auVar33 = minpd(local_5b8,local_658);
        auVar31._8_8_ = -(ulonglong)(auVar30._8_8_ < 0.0);
        auVar31._0_8_ = -(ulonglong)(auVar30._0_8_ < 0.0);
        iVar15 = movmskpd(uVar12,auVar31);
        auVar30._8_8_ = -(ulonglong)(auVar33._8_8_ < 0.0);
        auVar30._0_8_ = -(ulonglong)(auVar33._0_8_ < 0.0);
        uVar17 = movmskpd(uVar16,auVar30);
        if ((uVar17 & 0x3fffffff) == 0 && iVar15 == 0) {
          local_548 = dStack_600 * local_698 * -1.0 +
                      local_5f8 * dStack_6a0 + dStack_5f0 * local_6a8 * 1.0 + local_608 * dStack_690
          ;
          dStack_540 = local_608 * local_698 * 1.0 +
                       dStack_5f0 * dStack_6a0 +
                       local_5f8 * local_6a8 * -1.0 + dStack_600 * dStack_690;
          local_538._0_8_ =
               dStack_5f0 * local_698 * 1.0 +
               ((local_6a8 * dStack_600 * 1.0 + local_5f8 * dStack_690) - local_608 * dStack_6a0);
          local_538._8_8_ =
               local_5f8 * local_698 * -1.0 +
               ((local_6a8 * local_608 * -1.0 + dStack_5f0 * dStack_690) - dStack_600 * dStack_6a0);
          local_5e8 = local_5e8 * dVar27;
          dStack_5e0 = dStack_5e0 * dVar6;
          local_5d8 = local_5d8 * dVar36;
          dVar7 = dStack_5e0 * local_6a8 - dStack_6a0 * local_5e8;
          dVar35 = local_5d8 * dStack_6a0 - local_698 * dStack_5e0;
          dVar32 = local_5e8 * local_698 - local_6a8 * local_5d8;
          dVar35 = dVar35 + dVar35;
          dVar32 = dVar32 + dVar32;
          dVar7 = dVar7 + dVar7;
          local_4e8 = (dVar7 * dStack_6a0 - local_698 * dVar32) + dStack_690 * dVar35 + local_5e8 +
                      local_688;
          dStack_4e0 = (dVar35 * local_698 - dVar7 * local_6a8) + dStack_690 * dVar32 + dStack_5e0 +
                       dStack_680;
          local_4d8 = (dVar32 * local_6a8 - dStack_6a0 * dVar35) + dStack_690 * dVar7 + local_5d8 +
                      local_678;
          dVar38 = dVar38 * dVar27;
          dVar26 = dVar26 * dVar6;
          dVar28 = dVar28 * dVar36;
        }
        else {
          dVar32 = dStack_6a0 + dStack_6a0;
          dVar7 = local_698 + local_698;
          dVar37 = local_6a8 * (local_6a8 + local_6a8);
          local_128 = (1.0 - (dVar37 + dStack_6a0 * dVar32)) * dVar36;
          dVar35 = (local_6a8 + local_6a8) * dStack_690;
          local_138 = (dVar32 * dStack_690 + local_6a8 * dVar7) * dVar36;
          local_6e8 = dVar36 * dVar28;
          dStack_6e0 = local_658._8_8_ * local_5b8._8_8_;
          dStack_130 = (dVar7 * dStack_6a0 - dVar35) * dVar36;
          dVar36 = (1.0 - (local_698 * dVar7 + dVar37)) * dVar6;
          local_148 = (dVar7 * dStack_6a0 + dVar35) * dVar6;
          local_168 = (local_6a8 * dVar7 - dVar32 * dStack_690) * dVar27;
          stack0xfffffffffffffe90 = (dVar32 * local_6a8 + dVar7 * dStack_690) * dVar27;
          local_178._0_8_ = (1.0 - (local_698 * dVar7 + dStack_6a0 * dVar32)) * dVar27;
          uStack_160 = 0;
          local_158._8_4_ = SUB84(dVar36,0);
          local_158._0_8_ = (dVar32 * local_6a8 - dVar7 * dStack_690) * dVar6;
          local_158._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
          uStack_140 = 0;
          uStack_120 = 0;
          local_118 = local_688;
          dStack_110 = dStack_680;
          local_108 = local_678;
          uStack_100 = 0x3ff0000000000000;
          dVar35 = dStack_600 + dStack_600;
          dVar36 = local_5f8 + local_5f8;
          dVar32 = local_608 * (local_608 + local_608);
          local_1a8 = (1.0 - (dVar32 + dStack_600 * dVar35)) * dVar28;
          dVar7 = (local_608 + local_608) * dStack_5f0;
          local_1b8 = (dVar35 * dStack_5f0 + local_608 * dVar36) * dVar28;
          dStack_1b0 = (dVar36 * dStack_600 - dVar7) * dVar28;
          local_6f8._8_4_ = SUB84(dVar6 * dVar26,0);
          local_6f8._0_8_ = dVar27 * dVar38;
          local_6f8._12_4_ = (int)((ulonglong)(dVar6 * dVar26) >> 0x20);
          dVar27 = (1.0 - (local_5f8 * dVar36 + dVar32)) * dVar26;
          local_1c8 = (dVar36 * dStack_600 + dVar7) * dVar26;
          local_1e8 = (local_608 * dVar36 - dVar35 * dStack_5f0) * dVar38;
          local_1f8._8_8_ = (dVar35 * local_608 + dVar36 * dStack_5f0) * dVar38;
          local_1f8._0_8_ = (1.0 - (local_5f8 * dVar36 + dStack_600 * dVar35)) * dVar38;
          uStack_1e0 = 0;
          local_1d8._8_4_ = SUB84(dVar27,0);
          local_1d8._0_8_ = (dVar35 * local_608 - dVar36 * dStack_5f0) * dVar26;
          local_1d8._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
          uStack_1c0 = 0;
          uStack_1a0 = 0;
          local_198 = local_5e8;
          dStack_190 = dStack_5e0;
          local_188 = local_5d8;
          uStack_180 = 0x3ff0000000000000;
          FUN_1447fea8d(&local_548);
          dVar28 = local_6e8;
          local_718 = (double)local_538._0_8_;
          dVar36 = (double)local_538._0_8_ * (double)local_538._0_8_ +
                   local_548 * local_548 + dStack_540 * dStack_540;
          local_720 = local_528;
          local_728 = dStack_518;
          dVar38 = dStack_518 * dStack_518 + local_528 * local_528 + local_520 * local_520;
          dVar27 = dStack_4f8 * dStack_4f8 + dStack_508 * dStack_508 + local_500 * local_500;
          uVar24 = -(ulonglong)(0.0 <= dVar36 + -9.99999993922529e-09);
          dVar36 = (double)(~uVar24 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar36)) & uVar24)
          ;
          uVar24 = -(ulonglong)(0.0 <= dVar38 + -9.99999993922529e-09);
          dVar6 = (double)(~uVar24 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar38)) & uVar24);
          uVar24 = -(ulonglong)(0.0 <= dVar27 + -9.99999993922529e-09);
          dVar27 = (double)(~uVar24 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar27)) & uVar24)
          ;
          dVar38 = (double)local_6f8._0_8_;
          dVar26 = (double)local_6f8._8_8_;
          auVar33._8_8_ = -(ulonglong)(0.0 <= (double)local_6f8._8_8_);
          auVar33._0_8_ = -(ulonglong)(0.0 <= (double)local_6f8._0_8_);
          auVar30 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar33);
          dVar7 = (double)(~-(ulonglong)(0.0 <= local_6e8) & 0xbff0000000000000 |
                          -(ulonglong)(0.0 <= local_6e8) & 0x3ff0000000000000);
          dVar35 = auVar30._0_8_;
          local_548 = local_548 * dVar36 * dVar35;
          dStack_540 = dStack_540 * dVar36 * dVar35;
          local_538._0_8_ = dVar36 * (double)local_538._0_8_ * dVar35;
          dVar36 = auVar30._8_8_;
          dStack_518 = dVar6 * dStack_518 * dVar36;
          local_520 = local_520 * dVar6 * dVar36;
          local_528 = dVar36 * local_528 * dVar6;
          dStack_4f8 = dVar27 * dStack_4f8 * dVar7;
          local_500 = local_500 * dVar27 * dVar7;
          dStack_508 = dVar7 * dStack_508 * dVar27;
          FUN_14481fd10(&local_568,&local_548);
          dVar27 = local_558 * local_558 + local_568 * local_568;
          dVar36 = dStack_550 * dStack_550 + dStack_560 * dStack_560;
          auVar29._0_8_ = dVar27 + dVar36;
          auVar29._8_8_ = dVar27 + dVar36;
          auVar25._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_);
          auVar25._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_);
          auVar30 = sqrtpd(auVar29,auVar29);
          auVar30 = divpd(_DAT_149934d80,auVar30);
          auVar34._0_8_ = auVar30._0_8_ * local_558;
          auVar34._8_8_ = auVar30._8_8_ * dStack_550;
          local_548 = (double)((ulonglong)(local_568 * auVar30._0_8_) &
                              -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_));
          dStack_540 = (double)((ulonglong)(dStack_560 * auVar30._8_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_));
          local_538 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar34,auVar25);
        }
        plVar3 = local_708;
        local_178._8_4_ = SUB84(dStack_4e0,0);
        local_178._0_8_ = local_4e8;
        uStack_16c = (int)((ulonglong)dStack_4e0 >> 0x20);
        local_740 = 0;
        local_748 = (double *)0x0;
        local_168 = local_4d8;
        FUN_144927ad4(local_708,local_178,&local_548,0);
        lVar21 = local_700;
        param_3 = local_72c;
        local_1f8._8_4_ = SUB84(dVar26,0);
        local_1f8._0_8_ = dVar38;
        local_1f8._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
        pcVar5 = *(code **)(*plVar3 + 0x478);
        local_1e8 = dVar28;
        if (pcVar5 == FUN_14028a216) {
          FUN_14028a216();
        }
        else {
          (*pcVar5)(plVar3,local_1f8);
        }
      }
      lVar13 = DAT_14cb913f0;
      uVar2 = *(undefined8 *)(lVar21 + 0x28);
      if ((*(int *)(lVar21 + 0x10) != *(int *)(param_2 + 0x20)) && (DAT_14cb913f0 != 0)) {
        *(undefined8 *)(lVar21 + 0x20) = 0;
        lVar20 = *(longlong *)(lVar13 + 0x3a0);
        plVar3 = *(longlong **)(lVar13 + 0x3a8);
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
        }
        uVar14 = *(undefined8 *)(lVar20 + 8);
        FUN_1489e1908(&local_548,param_2);
        uVar14 = FUN_143e9adf0(param_1,&local_548,uVar14,param_3);
        *(undefined8 *)(lVar21 + 0x20) = uVar14;
        if (dStack_540 != 0.0) {
          FUN_1400020a8();
          uVar14 = *(undefined8 *)(lVar21 + 0x20);
        }
        FUN_1446f470e(&local_6b0,L"MyCustomTextureParam",1);
        FUN_14016d8b0(uVar2,local_6b0,uVar14);
        *local_710 = *(undefined4 *)(param_2 + 0x20);
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
      FUN_1446f470e(&local_6b8,L"UVScaleX",1);
      local_178[8] = 2;
      local_178._0_8_ = local_6b8;
      uStack_16c = 0xffffffff;
      local_548 = (double)((ulonglong)local_548 & 0xffffffffffffff00);
      dStack_540 = 0.0;
      local_538 = ZEXT816(0);
      local_528 = 0.0;
      local_520 = 0.0;
      dStack_518 = 0.0;
      local_510 = 0;
      dStack_508 = 0.0;
      local_500 = 0.0;
      dStack_4f8 = 0.0;
      local_748 = &local_548;
      FUN_140042bb4(uVar2,local_178);
      FUN_1446f470e(&local_6c0,L"UVScaleY",1);
      local_178[8] = 2;
      local_178._0_8_ = local_6c0;
      uStack_16c = 0xffffffff;
      local_548 = (double)((ulonglong)local_548 & 0xffffffffffffff00);
      dStack_540 = 0.0;
      local_538 = ZEXT816(0);
      local_528 = 0.0;
      local_520 = 0.0;
      dStack_518 = 0.0;
      local_510 = 0;
      dStack_508 = 0.0;
      local_500 = 0.0;
      dStack_4f8 = 0.0;
      local_748 = &local_548;
      FUN_140042bb4(uVar2,local_178);
      FUN_1446f470e(&local_6c8,L"UVOffsetX",1);
      local_178[8] = 2;
      local_178._0_8_ = local_6c8;
      uStack_16c = 0xffffffff;
      local_548 = (double)((ulonglong)local_548 & 0xffffffffffffff00);
      dStack_540 = 0.0;
      local_538 = ZEXT816(0);
      local_528 = 0.0;
      local_520 = 0.0;
      dStack_518 = 0.0;
      local_510 = 0;
      dStack_508 = 0.0;
      local_500 = 0.0;
      dStack_4f8 = 0.0;
      local_748 = &local_548;
      FUN_140042bb4(uVar2,local_178);
      uVar16 = *(undefined4 *)(param_2 + 100);
      FUN_1446f470e(&local_6d0,L"UVOffsetY",1);
      local_178[8] = 2;
      local_178._0_8_ = local_6d0;
      uStack_16c = 0xffffffff;
      local_548 = (double)((ulonglong)local_548 & 0xffffffffffffff00);
      dStack_540 = 0.0;
      local_538 = ZEXT816(0);
      local_528 = 0.0;
      local_520 = 0.0;
      dStack_518 = 0.0;
      local_510 = 0;
      dStack_508 = 0.0;
      local_500 = 0.0;
      dStack_4f8 = 0.0;
      local_748 = &local_548;
      FUN_140042bb4(uVar2,local_178,uVar16,0);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_768) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e9c942 FUN_143e9c942 body=32 status=ok
// SIG undefined FUN_143e9c942(void)

void FUN_143e9c942(longlong param_1)

{
  undefined1 uVar1;
  
  uVar1 = FUN_1404d5a16(*(undefined8 *)(param_1 + 0x238));
  *(undefined1 *)(param_1 + 0x2b7) = uVar1;
  return;
}



// FUNCTION 143e9c962 FUN_143e9c962 body=3197 status=ok
// SIG undefined FUN_143e9c962(void)

undefined4
FUN_143e9c962(longlong param_1,undefined8 param_2,longlong param_3,float *param_4,longlong param_5,
             undefined4 param_6)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar7;
  undefined2 *puVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  uint *puVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  float fVar24;
  undefined1 auVar25 [16];
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  undefined1 auStack_198 [32];
  undefined1 local_178;
  undefined8 *local_170;
  ulonglong local_160;
  uint *local_158;
  longlong *local_150;
  ulonglong local_148;
  longlong *local_140;
  longlong local_138;
  float *local_130;
  uint *local_128;
  LPCRITICAL_SECTION local_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  float local_100;
  undefined8 local_fc;
  undefined8 local_f4;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  byte local_d4;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_138 = param_3;
  local_130 = param_4;
  if (**(int **)(param_1 + 0x238) == 0) goto LAB_143e9d140;
  if (*(char *)(param_1 + 0x2b6) != '\x01') {
    (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x238) + 8) + 0x58))();
    lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x228) + 0x10);
    local_e8 = (float)((uint)local_e8 & 0xfffffff8 | 3);
    auVar28 = ZEXT816(0);
    auVar25 = blendps(ZEXT416((uint)(local_130[3] + 0.5)),auVar28,0xe);
    auVar27 = roundps(auVar25,auVar25,1);
    auVar25 = blendps(ZEXT416((uint)(local_130[2] + 0.5)),auVar28,0xe);
    auVar29 = roundps(auVar25,auVar25,1);
    auVar25 = blendps(ZEXT416((uint)(local_130[1] + 0.5)),auVar28,0xe);
    auVar30 = roundps(auVar25,auVar25,1);
    auVar25 = blendps(ZEXT416((uint)(*local_130 + 0.5)),auVar28,0xe);
    auVar25 = roundps(auVar25,auVar25,1);
    local_100 = auVar25._0_4_;
    fVar24 = auVar29._0_4_;
    if (fVar24 <= local_100) {
      auVar25._4_12_ = auVar25._4_12_;
      auVar25._0_4_ = fVar24;
    }
    if (local_100 <= fVar24) {
      local_100 = fVar24;
    }
    fVar24 = auVar27._0_4_;
    auVar27 = auVar30;
    if (fVar24 <= auVar30._0_4_) {
      auVar27._4_12_ = auVar30._4_12_;
      auVar27._0_4_ = fVar24;
    }
    if (auVar30._0_4_ <= fVar24) {
      auVar30._0_4_ = fVar24;
    }
    local_108 = CONCAT44(auVar27._0_4_,auVar25._0_4_);
    local_fc = CONCAT44(auVar25._0_4_,auVar27._0_4_);
    local_ec = auVar30._0_4_;
    local_f4 = CONCAT44(local_100,local_ec);
    FUN_1400d7f58(param_5 + 0x120,&local_108);
    fVar24 = 1.0 / (*(float *)(param_1 + 0x2c4) * *(float *)(param_1 + 0x264));
    local_f4 = *(undefined8 *)(lVar20 + 0x20);
    local_100 = fVar24 * *(float *)(param_3 + 8);
    fVar31 = *(float *)(param_3 + 8) * 0.0;
    local_108 = CONCAT44(*(float *)(param_3 + 0x10) + fVar31,fVar31 + *(float *)(param_3 + 0xc));
    local_e8 = *(float *)(param_3 + 0x28) * 0.0;
    fVar32 = *(float *)(param_3 + 0x20) * 0.0;
    local_e0 = *(float *)(param_3 + 0x28) * fVar24 + fVar32;
    local_ec = *(float *)(param_3 + 0x24) * 0.0;
    fVar31 = *(float *)(param_3 + 0x1c) * 0.0;
    local_e4 = *(float *)(param_3 + 0x24) * fVar24 + fVar31;
    local_d8 = fVar32 + local_e8 + *(float *)(param_3 + 0x30);
    local_dc = fVar31 + local_ec + *(float *)(param_3 + 0x2c);
    local_e8 = *(float *)(param_3 + 0x20) * fVar24 + local_e8;
    local_ec = fVar24 * *(float *)(param_3 + 0x1c) + local_ec;
    local_fc = 0;
    local_d4 = local_d4 & 0xfc | *(char *)(param_3 + 0x34) * '\x02' & 2U;
    local_170 = &DAT_149e1e2f8;
    local_178 = 0;
    FUN_140239bd2(param_5,param_6,&local_108,lVar20);
    if (*(int *)(param_5 + 0x128) != 0) {
      *(int *)(param_5 + 0x128) = *(int *)(param_5 + 0x128) + -1;
      FUN_14479f406(param_5 + 0x120);
    }
    goto LAB_143e9d140;
  }
  if ((((*(int *)(param_1 + 0x254) == 0) || (uVar15 = *(uint *)(param_1 + 0x250), (int)uVar15 < 0))
      || (DAT_14c9647dc <= (int)uVar15)) ||
     (((plVar12 = (longlong *)
                  ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8)),
       plVar12 == (longlong *)0x0 || ((int)plVar12[2] != *(int *)(param_1 + 0x254))) ||
      (((*(uint *)(plVar12 + 1) & 0x10200000) != 0 || (lVar20 = *plVar12, lVar20 == 0)))))) {
LAB_143e9ca6d:
    lVar20 = 0;
  }
  else {
    lVar6 = FUN_141419e42();
    if ((*(int *)(*(longlong *)(lVar20 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        != lVar6 + 0x30)) goto LAB_143e9ca6d;
  }
  lVar20 = *(longlong *)(lVar20 + 0x2f0);
  lVar6 = *(longlong *)(lVar20 + 0x168);
  if (lVar6 == 0) {
LAB_143e9ca86:
    lVar6 = 0;
  }
  else {
    lVar13 = FUN_1459d7e12();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar13 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8)
        != lVar13 + 0x30)) goto LAB_143e9ca86;
  }
  lpCriticalSection =
       (LPCRITICAL_SECTION)(**(code **)(*(longlong *)(lVar20 + 0x28) + 0xa0))(lVar20 + 0x28);
  EnterCriticalSection(lpCriticalSection);
  plVar12 = (longlong *)(**(code **)(*(longlong *)(lVar20 + 0x28) + 0xa8))();
  uVar15 = *(uint *)(plVar12 + 5);
  local_120 = lpCriticalSection;
  local_110 = param_1;
  if (uVar15 == 0) {
    uVar22 = 1;
    uVar18 = 0;
    iVar14 = 0;
    uVar21 = 0;
  }
  else {
    puVar19 = (uint *)plVar12[4];
    if ((uint *)plVar12[4] == (uint *)0x0) {
      puVar19 = (uint *)(plVar12 + 2);
    }
    uVar21 = *puVar19;
    if (uVar21 == 0) {
      iVar14 = uVar15 + 0x1e;
      if (-1 < (int)(uVar15 - 1)) {
        iVar14 = uVar15 - 1;
      }
      uVar18 = 0;
      uVar22 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar22 = uVar18;
      }
      iVar14 = 0;
      do {
        if (uVar22 == uVar18) goto LAB_143e9cda7;
        iVar14 = iVar14 + 0x20;
        uVar21 = puVar19[uVar18 + 1];
        uVar18 = uVar18 + 1;
      } while (uVar21 == 0);
    }
    else {
      uVar18 = 0;
      iVar14 = 0;
    }
    uVar22 = (ulonglong)(-uVar21 & uVar21);
    uVar23 = uVar22 * 2 + 1;
    lVar20 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    uVar21 = (iVar14 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
    if ((int)uVar15 <= (int)uVar21) {
      uVar21 = uVar15;
    }
  }
  if (uVar21 != uVar15) {
    local_158 = (uint *)(lVar6 + 0x1a8);
    local_150 = (longlong *)(lVar6 + 0x158);
    uVar17 = 0xffffffff;
    local_148 = (ulonglong)uVar15;
    local_140 = plVar12;
    local_128 = (uint *)(plVar12 + 2);
    do {
      local_160 = CONCAT44(local_160._4_4_,iVar14);
      puVar1 = (undefined8 *)(*local_140 + (longlong)(int)uVar21 * 0xf0);
      iVar14 = *(int *)(*local_140 + 8 + (longlong)(int)uVar21 * 0xf0);
      iVar16 = iVar14 + -1;
      if (iVar14 == 0) {
        iVar16 = 0;
      }
      uVar23 = 0;
      if (0 < iVar16) {
        puVar8 = &DAT_149dfb77a;
        if (iVar14 != 0) {
          puVar8 = (undefined2 *)*puVar1;
        }
        lVar20 = 0;
        uVar23 = 0;
        do {
          uVar15 = ((uint)(0x19 < (ushort)puVar8[lVar20] - 0x61) * 0x20 +
                   (uint)(ushort)puVar8[lVar20]) - 0x20;
          uVar21 = (uint)(uVar23 >> 8) ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar23 ^ uVar15) & 0xff) * 4);
          uVar23 = (ulonglong)
                   (uVar21 >> 8 ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar21 & 0xff ^ uVar15 >> 8 & 0xff) * 4));
          lVar20 = lVar20 + 1;
        } while (iVar16 != (int)lVar20);
      }
      iVar14 = FUN_146855b16(local_158,uVar23,puVar1);
      if (iVar14 == -1) {
LAB_143e9d016:
        iVar14 = *(int *)(puVar1 + 4) + -1;
        if (*(int *)(puVar1 + 4) == 0) {
          iVar14 = 0;
        }
        if (0 < iVar14) {
          iVar16 = 0;
          do {
            iVar16 = iVar16 + 1;
          } while (iVar14 != iVar16);
        }
        iVar14 = FUN_1489f17a8(local_150);
        if (iVar14 != -1) {
          if ((*local_150 + (longlong)iVar14 * 0x60 + 0x10U & 0xffffffffffffffef) != 0) {
            lVar20 = *local_150 + (longlong)iVar14 * 0x60;
            *(undefined4 *)(lVar20 + 0x40) = *(undefined4 *)(puVar1 + 0x18);
            *(undefined4 *)(lVar20 + 0x44) = *(undefined4 *)((longlong)puVar1 + 0xc4);
            *(undefined4 *)(lVar20 + 0x48) = *(undefined4 *)(puVar1 + 0x19);
            *(undefined8 *)(lVar20 + 0x4c) = *(undefined8 *)((longlong)puVar1 + 0xcc);
          }
        }
      }
      else if (((*(longlong *)local_158 + (longlong)iVar14 * 0x20 == 0) ||
               (pcVar9 = (char *)((longlong)iVar14 * 0x20 + *(longlong *)local_158 + 0x10),
               pcVar9 == (char *)0x0)) || (*pcVar9 == '\x01')) goto LAB_143e9d016;
      uVar17 = uVar17 & ~(uint)uVar22;
      puVar19 = (uint *)local_140[4];
      if ((uint *)local_140[4] == (uint *)0x0) {
        puVar19 = local_128;
      }
      uVar15 = *(uint *)(local_140 + 5);
      iVar16 = (int)uVar18;
      lVar20 = (longlong)iVar16;
      uVar21 = puVar19[lVar20] & uVar17;
      iVar14 = (int)local_160;
      if (uVar21 == 0) {
        iVar11 = uVar15 + 0x1e;
        if (-1 < (int)(uVar15 - 1)) {
          iVar11 = uVar15 - 1;
        }
        iVar11 = iVar11 >> 5;
        iVar14 = (int)local_160 + 0x20;
        iVar10 = iVar11;
        if (iVar11 < iVar16) {
          iVar10 = iVar16;
        }
        if (iVar16 < iVar11) {
          lVar13 = 0;
          do {
            uVar21 = puVar19[lVar20 + lVar13 + 1];
            if (uVar21 != 0) {
              uVar18 = (ulonglong)(iVar16 + (int)lVar13 + 1);
              uVar17 = 0xffffffff;
              goto LAB_143e9cfd4;
            }
            iVar14 = iVar14 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar10 - lVar20 != lVar13);
          uVar17 = 0xffffffff;
          lVar20 = (longlong)iVar10;
        }
        uVar18 = lVar20 + 1U & 0xffffffff;
        uVar21 = uVar15;
      }
      else {
LAB_143e9cfd4:
        uVar22 = (ulonglong)(-uVar21 & uVar21);
        uVar23 = uVar22 * 2 + 1;
        lVar20 = 0x3f;
        if (uVar23 != 0) {
          for (; uVar23 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        uVar21 = (iVar14 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
        if ((int)uVar15 <= (int)uVar21) {
          uVar21 = uVar15;
        }
      }
    } while (uVar21 != (uint)local_148);
  }
LAB_143e9cda7:
  puVar19 = (uint *)(lVar6 + 0x168);
  uVar15 = *(uint *)(lVar6 + 0x180);
  uVar18 = (ulonglong)uVar15;
  if (uVar15 == 0) {
    uVar23 = 1;
    uVar22 = 0;
    iVar14 = 0;
    uVar21 = 0;
  }
  else {
    puVar7 = *(uint **)(lVar6 + 0x178);
    if (*(uint **)(lVar6 + 0x178) == (uint *)0x0) {
      puVar7 = puVar19;
    }
    uVar21 = *puVar7;
    if (uVar21 == 0) {
      iVar14 = uVar15 + 0x1e;
      if (-1 < (int)(uVar15 - 1)) {
        iVar14 = uVar15 - 1;
      }
      uVar22 = 0;
      uVar23 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar23 = uVar22;
      }
      iVar14 = 0;
      do {
        if (uVar23 == uVar22) goto LAB_143e9d130;
        iVar14 = iVar14 + 0x20;
        uVar21 = puVar7[uVar22 + 1];
        uVar22 = uVar22 + 1;
      } while (uVar21 == 0);
    }
    else {
      uVar22 = 0;
      iVar14 = 0;
    }
    uVar23 = (ulonglong)(-uVar21 & uVar21);
    uVar2 = uVar23 * 2 + 1;
    lVar20 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    uVar21 = (iVar14 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
    if ((int)uVar15 <= (int)uVar21) {
      uVar21 = uVar15;
    }
  }
  if (uVar21 != uVar15) {
    uVar17 = 0xffffffff;
    local_160 = uVar18;
    local_158 = puVar19;
    local_118 = lVar6;
    do {
      lVar20 = local_110;
      if (*(longlong *)(*(longlong *)(lVar6 + 0x158) + 0x10 + (longlong)(int)uVar21 * 0x60) != 0) {
        lVar13 = *(longlong *)(lVar6 + 0x158) + (longlong)(int)uVar21 * 0x60;
        if (*(longlong *)(lVar13 + 0x18) != 0) {
          fVar32 = 1.0 / *(float *)(local_110 + 0x264);
          fVar31 = *(float *)(lVar13 + 0x40) * fVar32;
          fVar32 = fVar32 * *(float *)(lVar13 + 0x44);
          lVar6 = *(longlong *)(*(longlong *)(lVar13 + 0x18) + 0x10);
          local_e8 = (float)((uint)local_e8 & 0xfffffff8 | 3);
          auVar25 = blendps(ZEXT416((uint)(local_130[3] + 0.5)),ZEXT816(0),0xe);
          auVar25 = roundps(auVar25,auVar25,1);
          auVar27 = blendps(ZEXT416((uint)(local_130[2] + 0.5)),ZEXT816(0),0xe);
          auVar27 = roundps(auVar27,auVar27,1);
          auVar28 = blendps(ZEXT416((uint)(local_130[1] + 0.5)),ZEXT816(0),0xe);
          auVar28 = roundps(auVar28,auVar28,1);
          local_ec = auVar28._0_4_;
          auVar29 = blendps(ZEXT416((uint)(*local_130 + 0.5)),ZEXT816(0),0xe);
          auVar29 = roundps(auVar29,auVar29,1);
          local_100 = auVar29._0_4_;
          fVar24 = auVar27._0_4_;
          if (fVar24 <= local_100) {
            auVar29._4_12_ = auVar29._4_12_;
            auVar29._0_4_ = fVar24;
          }
          if (local_100 <= fVar24) {
            local_100 = fVar24;
          }
          fVar24 = auVar25._0_4_;
          if (fVar24 <= local_ec) {
            auVar28._4_12_ = auVar28._4_12_;
            auVar28._0_4_ = fVar24;
          }
          if (local_ec <= fVar24) {
            local_ec = fVar24;
          }
          local_108 = CONCAT44(auVar28._0_4_,auVar29._0_4_);
          local_fc = CONCAT44(auVar29._0_4_,auVar28._0_4_);
          local_f4 = CONCAT44(local_100,local_ec);
          FUN_1400d7f58(param_5 + 0x120,&local_108);
          fVar26 = 1.0 / *(float *)(lVar20 + 0x264);
          local_f4 = *(undefined8 *)(lVar6 + 0x20);
          fVar24 = *(float *)(local_138 + 8);
          fVar3 = *(float *)(local_138 + 0x1c);
          local_100 = fVar24 * fVar26;
          local_108 = CONCAT44(fVar32 * fVar24 + *(float *)(local_138 + 0x10),
                               fVar31 * fVar24 + *(float *)(local_138 + 0xc));
          fVar24 = *(float *)(local_138 + 0x20);
          fVar4 = *(float *)(local_138 + 0x28);
          fVar5 = *(float *)(local_138 + 0x24);
          local_d8 = fVar31 * fVar24 + fVar32 * fVar4 + *(float *)(local_138 + 0x30);
          local_dc = fVar31 * fVar3 + fVar32 * fVar5 + *(float *)(local_138 + 0x2c);
          local_e0 = fVar24 * 0.0 + fVar26 * fVar4;
          local_e4 = fVar3 * 0.0 + fVar26 * fVar5;
          local_e8 = fVar4 * 0.0 + fVar26 * fVar24;
          local_ec = fVar5 * 0.0 + fVar26 * fVar3;
          local_fc = 0;
          local_d4 = local_d4 & 0xfc | *(char *)(local_138 + 0x34) * '\x02' & 2U;
          local_170 = &DAT_149e1e2f8;
          local_178 = 0;
          FUN_140239bd2(param_5,param_6,&local_108,lVar6);
          if (*(int *)(param_5 + 0x128) != 0) {
            *(int *)(param_5 + 0x128) = *(int *)(param_5 + 0x128) + -1;
            FUN_14479f406(param_5 + 0x120);
          }
          uVar15 = *(uint *)(local_118 + 0x180);
          uVar18 = local_160;
          lVar6 = local_118;
          puVar19 = local_158;
        }
      }
      uVar17 = uVar17 & ~(uint)uVar23;
      puVar7 = *(uint **)(lVar6 + 0x178);
      if (*(uint **)(lVar6 + 0x178) == (uint *)0x0) {
        puVar7 = puVar19;
      }
      iVar16 = (int)uVar22;
      lVar20 = (longlong)iVar16;
      uVar21 = puVar7[lVar20] & uVar17;
      if (uVar21 == 0) {
        iVar11 = uVar15 + 0x1e;
        if (-1 < (int)(uVar15 - 1)) {
          iVar11 = uVar15 - 1;
        }
        iVar11 = iVar11 >> 5;
        iVar14 = iVar14 + 0x20;
        iVar10 = iVar11;
        if (iVar11 < iVar16) {
          iVar10 = iVar16;
        }
        if (iVar16 < iVar11) {
          lVar13 = 0;
          do {
            uVar21 = puVar7[lVar20 + lVar13 + 1];
            if (uVar21 != 0) {
              uVar22 = (ulonglong)(iVar16 + (int)lVar13 + 1);
              uVar17 = 0xffffffff;
              goto LAB_143e9d560;
            }
            iVar14 = iVar14 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar10 - lVar20 != lVar13);
          uVar17 = 0xffffffff;
          iVar16 = iVar10;
        }
        uVar22 = (ulonglong)(iVar16 + 1);
        uVar21 = uVar15;
      }
      else {
LAB_143e9d560:
        uVar23 = (ulonglong)(-uVar21 & uVar21);
        uVar2 = uVar23 * 2 + 1;
        lVar20 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        uVar21 = (iVar14 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
        if ((int)uVar15 <= (int)uVar21) {
          uVar21 = uVar15;
        }
      }
    } while (uVar21 != (uint)uVar18);
  }
LAB_143e9d130:
  if (local_120 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(local_120);
  }
LAB_143e9d140:
  if ((local_d0 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return param_6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e9d5e0 FUN_143e9d5e0 body=69 status=ok
// SIG undefined FUN_143e9d5e0(void)

undefined1 * FUN_143e9d5e0(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 143e9d64a FUN_143e9d64a body=319 status=ok
// SIG undefined FUN_143e9d64a(void)

longlong FUN_143e9d64a(longlong param_1)

{
  ulonglong uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  
  uVar1 = *(ulonglong *)(param_1 + 0x250);
  if (uVar1 >> 0x20 != 0) {
    uVar7 = (uint)uVar1;
    if ((int)uVar7 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar7) {
      return 0;
    }
    uVar8 = (ulonglong)((uint)(uVar1 >> 0x10) & 0x7fff);
    puVar9 = (undefined8 *)
             ((ulonglong)((uVar7 & 0xffff) * 0x18) + *(longlong *)(DAT_14c9647c8 + uVar8 * 8));
    if ((((puVar9 != (undefined8 *)0x0) &&
         (iVar6 = (int)(uVar1 >> 0x20), *(int *)(puVar9 + 2) == iVar6)) &&
        ((*(uint *)(puVar9 + 1) & 0x10200000) == 0)) && (cVar2 = FUN_140432338(), cVar2 != '\0')) {
      if ((*(uint *)(puVar9 + 1) & 0x10200000) == 0) {
        plVar5 = (longlong *)*puVar9;
      }
      else {
        plVar5 = (longlong *)0x0;
      }
      uVar3 = (**(code **)(*plVar5 + 0x180))();
      lVar4 = FUN_1449baec6(uVar3);
      if (lVar4 != 0) {
        return lVar4;
      }
      if ((((int)uVar7 < DAT_14c9647dc) &&
          (plVar5 = (longlong *)
                    ((ulonglong)((uVar7 & 0xffff) * 0x18) + *(longlong *)(DAT_14c9647c8 + uVar8 * 8)
                    ), plVar5 != (longlong *)0x0)) &&
         (((int)plVar5[2] == iVar6 && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)))) {
        lVar4 = *plVar5;
      }
      else {
        lVar4 = 0;
      }
      plVar5 = *(longlong **)(lVar4 + 0x20);
      if (plVar5 != (longlong *)0x0) {
        FUN_1412864c6();
      }
      lVar4 = (**(code **)(*plVar5 + 0x180))(plVar5);
      if (lVar4 != 0) {
        lVar4 = FUN_1449baec6(lVar4);
        return lVar4;
      }
    }
  }
  return 0;
}



// FUNCTION 143e9d78a FUN_143e9d78a body=686 status=ok
// SIG undefined FUN_143e9d78a(void)

void FUN_143e9d78a(longlong param_1,longlong param_2,undefined4 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_88 [40];
  undefined1 local_60 [16];
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar8 = *(int *)(param_2 + 0x10) + -1;
  if (*(int *)(param_2 + 0x10) == 0) {
    iVar8 = 0;
  }
  if (0 < iVar8) {
    iVar9 = 0;
    do {
      iVar9 = iVar9 + 1;
    } while (iVar8 != iVar9);
  }
  iVar8 = FUN_1489f17a8((longlong *)(param_1 + 0x130));
  if (iVar8 == -1) goto LAB_143e9d938;
  lVar10 = (longlong)iVar8 * 0x60 + *(longlong *)(param_1 + 0x130);
  plVar4 = (longlong *)(lVar10 + 0x10);
  if (plVar4 == (longlong *)0x0 || lVar10 == 0) goto LAB_143e9d938;
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x128) + 0x238);
  lVar2 = *(longlong *)(lVar6 + 0x68);
  plVar3 = *(longlong **)(lVar6 + 0x70);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (lVar2 != 0) {
    if (*(longlong *)(lVar10 + 0x18) == 0) {
      uVar5 = FUN_143e9adf0(param_1,param_2,*(undefined8 *)(lVar2 + 8),param_3);
      *(undefined8 *)(lVar10 + 0x10) = uVar5;
      FUN_1418b5738(local_60);
      lVar6 = FUN_14001cc68(0x40,0x10);
      FUN_1456bc184(lVar6,*(undefined8 *)(lVar10 + 0x10),local_60);
      plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
      plVar7[1] = (longlong)&DAT_100000001;
      *plVar7 = (longlong)&PTR_FUN_14b457550;
      plVar7[2] = lVar6;
      *(longlong *)(lVar10 + 0x18) = lVar6;
      plVar4 = *(longlong **)(lVar10 + 0x20);
      if (plVar7 == plVar4) {
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
            iVar8 = *piVar1;
            UNLOCK();
            plVar4 = plVar7;
            goto joined_r0x000143e9da16;
          }
        }
      }
      else {
        *(longlong **)(lVar10 + 0x20) = plVar7;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar7 = plVar4 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar8 = *piVar1;
            UNLOCK();
joined_r0x000143e9da16:
            if (iVar8 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
      }
      if (local_50 != 0) {
        FUN_1400020a8();
      }
    }
    else if (*(int *)(lVar10 + 0x28) != *(int *)(param_2 + 0x20)) {
      if (*plVar4 != 0) {
        *plVar4 = 0;
      }
      uVar5 = FUN_143e9adf0(param_1,param_2,*(undefined8 *)(lVar2 + 8),param_3);
      *(undefined8 *)(lVar10 + 0x10) = uVar5;
      FUN_1406483f2(*(undefined8 *)(lVar10 + 0x18),uVar5);
      *(undefined4 *)(lVar10 + 0x28) = *(undefined4 *)(param_2 + 0x20);
      *(undefined8 *)(*(longlong *)(*(longlong *)(lVar10 + 0x18) + 0x10) + 0x20) =
           *(undefined8 *)(param_2 + 0xbc);
      uVar5 = *(undefined8 *)(param_2 + 0x58);
      lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x18) + 0x10);
      *(undefined8 *)(lVar10 + 0x80) = *(undefined8 *)(param_2 + 0x60);
      *(undefined8 *)(lVar10 + 0x88) = uVar5;
      *(undefined1 *)(lVar10 + 0x90) = 1;
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
LAB_143e9d938:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e9da3a FUN_143e9da3a body=69 status=ok
// SIG undefined FUN_143e9da3a(void)

void FUN_143e9da3a(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x20,0,0);
                    /* WARNING: Could not recover jumptable at 0x000143e9da7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x30,0,0);
  return;
}



// FUNCTION 143e9da8a FUN_143e9da8a body=53 status=ok
// SIG undefined FUN_143e9da8a(void)

undefined8 FUN_143e9da8a(undefined8 param_1,byte param_2)

{
  undefined1 *puVar1;
  
  if (param_2 < 0xb) {
    puVar1 = (&PTR_DAT_14b457640)[param_2];
  }
  else {
    puVar1 = &DAT_149e02088;
  }
  FUN_1400b22c2(param_1,puVar1);
  return param_1;
}



// FUNCTION 143e9dabf FUN_143e9dabf body=311 status=ok
// SIG undefined FUN_143e9dabf(void)

longlong * FUN_143e9dabf(longlong *param_1,undefined8 *param_2)

{
  void *_Src;
  uint uVar1;
  size_t sVar2;
  int iVar3;
  wchar_t *_Str;
  ulonglong _Size;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [128];
  longlong local_40;
  void *local_38;
  uint local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(int *)(param_2 + 1) == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
  }
  local_40 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_38 = (void *)0x0;
    local_30 = 0;
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  else {
    sVar2 = wcslen(_Str);
    FUN_1449b853c(local_c0,_Str,sVar2 & 0xffffffff,1);
    _Src = local_38;
    _Size = (ulonglong)local_30;
    *param_1 = 0;
    if ((int)local_30 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(_Size);
    }
    *(uint *)(param_1 + 1) = local_30;
    if (local_30 != 0) {
      FUN_1409e00a6(param_1,local_30,0);
      memcpy((void *)*param_1,_Src,_Size);
      iVar3 = (int)param_1[1];
      uVar1 = *(uint *)((longlong)param_1 + 0xc);
      goto LAB_143e9db95;
    }
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  uVar1 = 0;
  iVar3 = 0;
LAB_143e9db95:
  *(uint *)(param_1 + 1) = iVar3 + 1U;
  if (uVar1 < iVar3 + 1U) {
    FUN_144761492(param_1,iVar3);
  }
  *(undefined1 *)(*param_1 + (longlong)iVar3) = 0;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e9dc4a FUN_143e9dc4a body=447 status=ok
// SIG undefined FUN_143e9dc4a(void)

longlong FUN_143e9dc4a(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  bool bVar4;
  
  if ((param_1 == (longlong *)0x0) || (lVar1 = param_1[1], lVar1 == 0)) {
LAB_143e9dcee:
    lVar1 = 0;
  }
  else {
    puVar3 = *(undefined **)(lVar1 + 8);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c952a58) {
      FUN_144b3d300(&DAT_14c952a58);
      if (DAT_14c952a58 == -1) {
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110) < DAT_14c951a88) {
          FUN_144b3d300(&DAT_14c951a88);
          if (DAT_14c951a88 == -1) {
            uVar2 = FUN_140342cba();
            FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0,0x8001,0,uVar2,FUN_1468c7f1e);
            atexit(FUN_14280c819);
            _Init_thread_footer(&DAT_14c951a88);
          }
        }
        FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0,0x108001,0,&DAT_14c951a38,
                      FUN_1403a682c);
        atexit(FUN_142818c9e);
        _Init_thread_footer(&DAT_14c952a58);
      }
    }
    if (DAT_14c952a10 == 0) {
      bVar4 = puVar3 != (undefined *)0x0;
      if (puVar3 != &DAT_14c952a08 && bVar4) {
        do {
          puVar3 = *(undefined **)(puVar3 + 0x30);
          bVar4 = puVar3 != (undefined *)0x0;
          if (puVar3 == &DAT_14c952a08) break;
        } while (puVar3 != (undefined *)0x0);
      }
      if (!bVar4) goto LAB_143e9dcee;
    }
    else if ((*(ulonglong *)(puVar3 + 0x18) & DAT_14c952a10) == 0) goto LAB_143e9dcee;
    lVar1 = *(int *)(lVar1 + 0x34) * param_2 + (longlong)*(int *)(lVar1 + 0x44) + *param_1;
  }
  return lVar1;
}



// FUNCTION 143e9de0a FUN_143e9de0a body=305 status=ok
// SIG undefined FUN_143e9de0a(void)

undefined8 FUN_143e9de0a(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  bool bVar4;
  
  if ((param_1 == (longlong *)0x0) || (lVar1 = param_1[1], lVar1 == 0)) {
LAB_143e9deb2:
    uVar2 = 0;
  }
  else {
    puVar3 = *(undefined **)(lVar1 + 8);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c952478) {
      FUN_144b3d300(&DAT_14c952478);
      if (DAT_14c952478 == -1) {
        FUN_1446f4b16();
        FUN_14000176a(&DAT_14c952428,L"FObjectProperty",0x10000,0,0x4018001,0,&DAT_14c951c78,
                      FUN_1403a5f94);
        atexit(FUN_1428170e8);
        _Init_thread_footer(&DAT_14c952478);
      }
    }
    if (DAT_14c952430 == 0) {
      bVar4 = puVar3 != (undefined *)0x0;
      if (puVar3 != &DAT_14c952428 && bVar4) {
        do {
          puVar3 = *(undefined **)(puVar3 + 0x30);
          bVar4 = puVar3 != (undefined *)0x0;
          if (puVar3 == &DAT_14c952428) break;
        } while (puVar3 != (undefined *)0x0);
      }
      if (!bVar4) goto LAB_143e9deb2;
    }
    else if ((*(ulonglong *)(puVar3 + 0x18) & DAT_14c952430) == 0) goto LAB_143e9deb2;
    uVar2 = *(undefined8 *)
             ((longlong)param_2 * (longlong)*(int *)(lVar1 + 0x34) +
             (longlong)*(int *)(lVar1 + 0x44) + *param_1);
  }
  return uVar2;
}



// FUNCTION 143e9df3c FUN_143e9df3c body=482 status=ok
// SIG undefined FUN_143e9df3c(void)

longlong FUN_143e9df3c(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  longlong *plVar4;
  undefined *puVar5;
  bool bVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined *local_58;
  code *local_50;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 == (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    puVar5 = (undefined *)plVar1[1];
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951d78) && (FUN_144b3d300(&DAT_14c951d78), DAT_14c951d78 == -1)) {
      FUN_14475b26a();
      local_50 = FUN_1409f1a5c;
      local_58 = &DAT_14c9520b8;
      local_60 = 0;
      local_68 = 0x1008041;
      FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0);
      atexit(FUN_14281201f);
      _Init_thread_footer(&DAT_14c951d78);
    }
    if (DAT_14c951d30 == 0) {
      bVar6 = puVar5 != (undefined *)0x0;
      if (puVar5 != &DAT_14c951d28 && bVar6) {
        do {
          puVar5 = *(undefined **)(puVar5 + 0x30);
          bVar6 = puVar5 != (undefined *)0x0;
          if (puVar5 == &DAT_14c951d28) break;
        } while (puVar5 != (undefined *)0x0);
      }
    }
    else {
      bVar6 = (*(ulonglong *)(puVar5 + 0x18) & DAT_14c951d30) != 0;
    }
    plVar4 = (longlong *)0x0;
    if (bVar6) {
      plVar4 = plVar1;
    }
  }
  uVar2 = (**(code **)(*plVar4 + 0x220))(plVar4,*(int *)((longlong)plVar4 + 0x44) + param_3);
  if ((plVar4[0xe] == 0) || (*(char *)(param_1 + 0x30) != '\x01')) {
    (**(code **)(*param_2 + 0x118))(param_2,uVar2);
  }
  else {
    FUN_1401cfad2(plVar4[0xe],&local_40,uVar2);
    puVar3 = local_40;
    if (local_38 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    (**(code **)(*param_2 + 0xd0))(param_2,puVar3);
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_3;
}



// FUNCTION 143e9e120 FUN_143e9e120 body=855 status=ok
// SIG undefined FUN_143e9e120(void)

longlong FUN_143e9e120(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined2 *puVar8;
  uint uVar9;
  longlong *plVar10;
  undefined *puVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined *local_98;
  code *local_90;
  undefined8 local_80;
  undefined2 *local_78;
  undefined8 uStack_70;
  ulonglong *local_68;
  ulonglong local_60;
  ulonglong *local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 == (longlong *)0x0) {
    plVar10 = (longlong *)0x0;
  }
  else {
    puVar11 = (undefined *)plVar1[1];
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951d78) && (FUN_144b3d300(&DAT_14c951d78), DAT_14c951d78 == -1)) {
      FUN_14475b26a();
      local_90 = FUN_1409f1a5c;
      local_98 = &DAT_14c9520b8;
      local_a0 = 0;
      local_a8 = 0x1008041;
      FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0);
      atexit(FUN_14281201f);
      _Init_thread_footer(&DAT_14c951d78);
    }
    if (DAT_14c951d30 == 0) {
      bVar13 = puVar11 != (undefined *)0x0;
      if (puVar11 != &DAT_14c951d28 && bVar13) {
        do {
          puVar11 = *(undefined **)(puVar11 + 0x30);
          bVar13 = puVar11 != (undefined *)0x0;
          if (puVar11 == &DAT_14c951d28) break;
        } while (puVar11 != (undefined *)0x0);
      }
    }
    else {
      bVar13 = (*(ulonglong *)(puVar11 + 0x18) & DAT_14c951d30) != 0;
    }
    plVar10 = (longlong *)0x0;
    if (bVar13) {
      plVar10 = plVar1;
    }
  }
  if (*(char *)(param_1 + 0x30) == '\x01') {
    local_78 = (undefined2 *)0x0;
    uStack_70 = 0;
    iVar12 = 0;
    local_60 = 0;
    local_68 = (ulonglong *)0x0;
    (**(code **)(*param_2 + 0x1c8))(param_2,&local_68,&local_60);
    uVar4 = local_60;
    puVar3 = local_68;
    local_4c = (uint)local_60;
    local_58 = local_68;
    if (0 < (int)(uint)local_60) {
      iVar12 = 0;
      uVar9 = 0x7fffffff;
      uVar6 = (uint)local_60;
      do {
        if (uVar9 == 0) {
          iVar12 = -1;
          break;
        }
        iVar5 = iVar12;
        if (((((ulonglong)local_58 & 7) == 0) && (local_4c = uVar6, 7 < uVar6)) &&
           (uVar7 = uVar9, 7 < (int)uVar9)) {
          while (uVar9 = uVar7, iVar5 = iVar12, local_4c = uVar6,
                (*local_58 & 0x8080808080808080) == 0) {
            local_58 = local_58 + 1;
            iVar12 = iVar12 + 8;
            local_4c = uVar6 - 8;
            uVar9 = uVar7 - 8;
            bVar13 = (int)uVar6 < 0x10;
            uVar6 = local_4c;
            iVar5 = iVar12;
            if ((bVar13) || (bVar13 = uVar7 < 0x10, uVar7 = uVar9, bVar13)) break;
          }
        }
LAB_143e9e297:
        do {
          iVar12 = iVar5;
          if (((int)uVar6 < 1) || ((int)uVar9 < 1)) break;
          uVar7 = FUN_14003e942(&local_58,&local_4c);
          uVar6 = local_4c;
          if (uVar7 < 0x10000) {
            uVar9 = uVar9 - 1;
            iVar5 = iVar12 + 1;
            if (0x7f < uVar7) goto LAB_143e9e297;
          }
          else {
            if (1 < uVar9) {
              uVar9 = uVar9 - 2;
              iVar5 = iVar12 + 2;
              goto LAB_143e9e297;
            }
            uVar9 = 0;
          }
          iVar12 = iVar12 + 1;
          iVar5 = iVar12;
        } while (((ulonglong)local_58 & 7) != 0);
      } while (0 < (int)uVar6);
    }
    FUN_1409ee492(&local_78,iVar12 + 1,1);
    local_78[iVar12] = 0;
    FUN_1446e71a3(local_78,(longlong)iVar12,puVar3,uVar4 & 0xffffffff);
    lVar2 = plVar10[0xe];
    puVar8 = local_78;
    if ((int)uStack_70 == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_80,puVar8,1);
    iVar12 = FUN_1448e5bf4(lVar2,local_80,0);
    if ((iVar12 != -1) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x40) + 8 + (longlong)iVar12 * 0x10) != -1)) {
      (**(code **)(*plVar10 + 0x1f8))(plVar10,*(int *)((longlong)plVar10 + 0x44) + param_3);
    }
    if (local_78 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    local_78 = (undefined2 *)((ulonglong)local_78 & 0xffffffffffffff00);
    (**(code **)(*param_2 + 0x1e0))(param_2,&local_78);
    *(undefined1 *)(param_3 + *(int *)((longlong)plVar10 + 0x44)) = local_78._0_1_;
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e9e478 FUN_143e9e478 body=45 status=ok
// SIG undefined FUN_143e9e478(void)

undefined8 FUN_143e9e478(longlong param_1,longlong param_2,double *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  lVar2 = (**(code **)(*plVar1 + 0x220))(plVar1,param_2 + *(int *)((longlong)plVar1 + 0x44));
  *param_3 = (double)lVar2;
  return 1;
}



// FUNCTION 143e9e4a6 FUN_143e9e4a6 body=474 status=ok
// SIG undefined FUN_143e9e4a6(void)

longlong FUN_143e9e4a6(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  longlong lVar4;
  undefined *puVar5;
  bool bVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    puVar5 = *(undefined **)(lVar1 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9496d8) && (FUN_144b3d300(&DAT_14c9496d8), DAT_14c9496d8 == -1)) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_140a4831c;
      local_68 = 0x1000000008001;
      local_60 = 0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
    if (DAT_14c949690 == 0) {
      bVar6 = puVar5 != (undefined *)0x0;
      if (puVar5 != &DAT_14c949688 && bVar6) {
        do {
          puVar5 = *(undefined **)(puVar5 + 0x30);
          bVar6 = puVar5 != (undefined *)0x0;
          if (puVar5 == &DAT_14c949688) break;
        } while (puVar5 != (undefined *)0x0);
      }
    }
    else {
      bVar6 = (*(ulonglong *)(puVar5 + 0x18) & DAT_14c949690) != 0;
    }
    lVar4 = 0;
    if (bVar6) {
      lVar4 = lVar1;
    }
  }
  uVar2 = (**(code **)(**(longlong **)(lVar4 + 0x70) + 0x220))
                    (*(longlong **)(lVar4 + 0x70),*(int *)(lVar4 + 0x44) + param_3);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_1401cfad2(*(undefined8 *)(lVar4 + 0x78),&local_40,uVar2);
    puVar3 = local_40;
    if (local_38 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    (**(code **)(*param_2 + 0xd0))(param_2,puVar3);
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    (**(code **)(*param_2 + 0x118))(param_2,uVar2);
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_3;
}



// FUNCTION 143e9e682 FUN_143e9e682 body=1020 status=ok
// SIG undefined FUN_143e9e682(void)

longlong FUN_143e9e682(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined2 *puVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  undefined *puVar12;
  bool bVar13;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined *local_98;
  code *local_90;
  undefined8 local_80;
  undefined2 *local_78;
  undefined8 uStack_70;
  ulonglong *local_68;
  ulonglong local_60;
  ulonglong *local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 == 0) {
    lVar10 = 0;
  }
  else {
    puVar12 = *(undefined **)(lVar1 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9496d8) && (FUN_144b3d300(&DAT_14c9496d8), DAT_14c9496d8 == -1)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1))
      {
        local_98 = (undefined *)FUN_140342cba();
        local_90 = FUN_1468c7f1e;
        local_a0 = 0;
        local_a8 = 0x8001;
        FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
        atexit(FUN_14280c819);
        _Init_thread_footer(&DAT_14c951a88);
      }
      local_90 = FUN_140a4831c;
      local_98 = &DAT_14c951a38;
      local_a8 = 0x1000000008001;
      local_a0 = 0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
    if (DAT_14c949690 == 0) {
      bVar13 = puVar12 != (undefined *)0x0;
      if (puVar12 != &DAT_14c949688 && bVar13) {
        do {
          puVar12 = *(undefined **)(puVar12 + 0x30);
          bVar13 = puVar12 != (undefined *)0x0;
          if (puVar12 == &DAT_14c949688) break;
        } while (puVar12 != (undefined *)0x0);
      }
    }
    else {
      bVar13 = (*(ulonglong *)(puVar12 + 0x18) & DAT_14c949690) != 0;
    }
    lVar10 = 0;
    if (bVar13) {
      lVar10 = lVar1;
    }
  }
  if (*(char *)(param_1 + 0x30) == '\x01') {
    local_78 = (undefined2 *)0x0;
    uStack_70 = 0;
    iVar11 = 0;
    local_60 = 0;
    local_68 = (ulonglong *)0x0;
    (**(code **)(*param_2 + 0x1c8))(param_2,&local_68,&local_60);
    uVar4 = local_60;
    puVar3 = local_68;
    local_4c = (uint)local_60;
    local_58 = local_68;
    if (0 < (int)(uint)local_60) {
      iVar11 = 0;
      uVar9 = 0x7fffffff;
      uVar6 = (uint)local_60;
      do {
        if (uVar9 == 0) {
          iVar11 = -1;
          break;
        }
        iVar5 = iVar11;
        if (((((ulonglong)local_58 & 7) == 0) && (local_4c = uVar6, 7 < uVar6)) &&
           (uVar7 = uVar9, 7 < (int)uVar9)) {
          while (uVar9 = uVar7, iVar5 = iVar11, local_4c = uVar6,
                (*local_58 & 0x8080808080808080) == 0) {
            local_58 = local_58 + 1;
            iVar11 = iVar11 + 8;
            local_4c = uVar6 - 8;
            uVar9 = uVar7 - 8;
            bVar13 = (int)uVar6 < 0x10;
            uVar6 = local_4c;
            iVar5 = iVar11;
            if ((bVar13) || (bVar13 = uVar7 < 0x10, uVar7 = uVar9, bVar13)) break;
          }
        }
LAB_143e9e7f9:
        do {
          iVar11 = iVar5;
          if (((int)uVar6 < 1) || ((int)uVar9 < 1)) break;
          uVar7 = FUN_14003e942(&local_58,&local_4c);
          uVar6 = local_4c;
          if (uVar7 < 0x10000) {
            uVar9 = uVar9 - 1;
            iVar5 = iVar11 + 1;
            if (0x7f < uVar7) goto LAB_143e9e7f9;
          }
          else {
            if (1 < uVar9) {
              uVar9 = uVar9 - 2;
              iVar5 = iVar11 + 2;
              goto LAB_143e9e7f9;
            }
            uVar9 = 0;
          }
          iVar11 = iVar11 + 1;
          iVar5 = iVar11;
        } while (((ulonglong)local_58 & 7) != 0);
      } while (0 < (int)uVar6);
    }
    FUN_1409ee492(&local_78,iVar11 + 1,1);
    local_78[iVar11] = 0;
    FUN_1446e71a3(local_78,(longlong)iVar11,puVar3,uVar4 & 0xffffffff);
    uVar2 = *(undefined8 *)(lVar10 + 0x78);
    puVar8 = local_78;
    if ((int)uStack_70 == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_80,puVar8,1);
    iVar11 = FUN_1448e5bf4(uVar2,local_80,0);
    if (iVar11 != -1) {
      (**(code **)(**(longlong **)(lVar10 + 0x70) + 0x1f8))
                (*(longlong **)(lVar10 + 0x70),*(int *)(lVar10 + 0x44) + param_3,(longlong)iVar11);
    }
    if (local_78 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    local_78 = (undefined2 *)0x0;
    (**(code **)(*param_2 + 0x210))(param_2,&local_78);
    (**(code **)(**(longlong **)(lVar10 + 0x70) + 0x1f8))
              (*(longlong **)(lVar10 + 0x70),*(int *)(lVar10 + 0x44) + param_3,local_78);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e9ea7f FUN_143e9ea7f body=257 status=ok
// SIG undefined FUN_143e9ea7f(void)

bool FUN_143e9ea7f(longlong param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9523c8) && (FUN_144b3d300(&DAT_14c9523c8), DAT_14c9523c8 == -1)) {
    FUN_14475b26a();
    FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0,0x1008101,0,&DAT_14c9520b8,FUN_1408a629c)
    ;
    atexit(FUN_14281708e);
    _Init_thread_footer(&DAT_14c9523c8);
  }
  if (DAT_14c952380 == 0) {
    bVar2 = puVar1 != (undefined8 *)0x0;
    if (puVar1 != &DAT_14c952378 && bVar2) {
      do {
        puVar1 = (undefined8 *)puVar1[6];
        bVar2 = puVar1 != (undefined8 *)0x0;
        if (puVar1 == &DAT_14c952378) {
          return bVar2;
        }
      } while (puVar1 != (undefined8 *)0x0);
    }
  }
  else {
    bVar2 = (puVar1[3] & DAT_14c952380) != 0;
  }
  return bVar2;
}



// FUNCTION 143e9eb80 FUN_143e9eb80 body=264 status=ok
// SIG undefined FUN_143e9eb80(void)

bool FUN_143e9eb80(longlong param_1)

{
  undefined *puVar1;
  bool bVar2;
  
  puVar1 = *(undefined **)(param_1 + 8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c952420) && (FUN_144b3d300(&DAT_14c952420), DAT_14c952420 == -1)) {
    FUN_14475b26a();
    FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0,0x101008001,0,&DAT_14c9520b8,
                  FUN_14079c5e4);
    atexit(FUN_1428170bb);
    _Init_thread_footer(&DAT_14c952420);
  }
  if (DAT_14c9523d8 == 0) {
    bVar2 = puVar1 != (undefined *)0x0;
    if (puVar1 != &DAT_14c9523d0 && bVar2) {
      do {
        puVar1 = *(undefined **)(puVar1 + 0x30);
        bVar2 = puVar1 != (undefined *)0x0;
        if (puVar1 == &DAT_14c9523d0) {
          return bVar2;
        }
      } while (puVar1 != (undefined *)0x0);
    }
  }
  else {
    bVar2 = (*(ulonglong *)(puVar1 + 0x18) & DAT_14c9523d8) != 0;
  }
  return bVar2;
}



// FUNCTION 143e9ec88 FUN_143e9ec88 body=250 status=ok
// SIG undefined FUN_143e9ec88(void)

bool FUN_143e9ec88(longlong param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  bool bVar3;
  
  puVar2 = *(undefined **)(param_1 + 8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c963ee0) && (FUN_144b3d300(&DAT_14c963ee0), DAT_14c963ee0 == -1)) {
    uVar1 = FUN_1446ddbd2();
    FUN_14000176a(&DAT_14c963e90,L"FTextProperty",0x40000000,0,0x40008001,0,uVar1,FUN_140fb5c52);
    atexit(FUN_14282980e);
    _Init_thread_footer(&DAT_14c963ee0);
  }
  if (DAT_14c963e98 == 0) {
    bVar3 = puVar2 != (undefined *)0x0;
    if (puVar2 != &DAT_14c963e90 && bVar3) {
      do {
        puVar2 = *(undefined **)(puVar2 + 0x30);
        bVar3 = puVar2 != (undefined *)0x0;
        if (puVar2 == &DAT_14c963e90) {
          return bVar3;
        }
      } while (puVar2 != (undefined *)0x0);
    }
  }
  else {
    bVar3 = (*(ulonglong *)(puVar2 + 0x18) & DAT_14c963e98) != 0;
  }
  return bVar3;
}



// FUNCTION 143e9ed82 FUN_143e9ed82 body=250 status=ok
// SIG undefined FUN_143e9ed82(void)

bool FUN_143e9ed82(longlong param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  bool bVar3;
  
  puVar2 = *(undefined **)(param_1 + 8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9520b0) && (FUN_144b3d300(&DAT_14c9520b0), DAT_14c9520b0 == -1)) {
    uVar1 = FUN_1446ddbd2();
    FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0,0xa001,0,uVar1,FUN_1409e12a0);
    atexit(FUN_142816ef9);
    _Init_thread_footer(&DAT_14c9520b0);
  }
  if (DAT_14c952068 == 0) {
    bVar3 = puVar2 != (undefined *)0x0;
    if (puVar2 != &DAT_14c952060 && bVar3) {
      do {
        puVar2 = *(undefined **)(puVar2 + 0x30);
        bVar3 = puVar2 != (undefined *)0x0;
        if (puVar2 == &DAT_14c952060) {
          return bVar3;
        }
      } while (puVar2 != (undefined *)0x0);
    }
  }
  else {
    bVar3 = (*(ulonglong *)(puVar2 + 0x18) & DAT_14c952068) != 0;
  }
  return bVar3;
}



// FUNCTION 143e9ee7c FUN_143e9ee7c body=257 status=ok
// SIG undefined FUN_143e9ee7c(void)

bool FUN_143e9ee7c(longlong param_1)

{
  undefined *puVar1;
  bool bVar2;
  
  puVar1 = *(undefined **)(param_1 + 8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951d78) && (FUN_144b3d300(&DAT_14c951d78), DAT_14c951d78 == -1)) {
    FUN_14475b26a();
    FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0,0x1008041,0,&DAT_14c9520b8,FUN_1409f1a5c);
    atexit(FUN_14281201f);
    _Init_thread_footer(&DAT_14c951d78);
  }
  if (DAT_14c951d30 == 0) {
    bVar2 = puVar1 != (undefined *)0x0;
    if (puVar1 != &DAT_14c951d28 && bVar2) {
      do {
        puVar1 = *(undefined **)(puVar1 + 0x30);
        bVar2 = puVar1 != (undefined *)0x0;
        if (puVar1 == &DAT_14c951d28) {
          return bVar2;
        }
      } while (puVar1 != (undefined *)0x0);
    }
  }
  else {
    bVar2 = (*(ulonglong *)(puVar1 + 0x18) & DAT_14c951d30) != 0;
  }
  return bVar2;
}



// FUNCTION 143e9ef7d FUN_143e9ef7d body=250 status=ok
// SIG undefined FUN_143e9ef7d(void)

bool FUN_143e9ef7d(longlong param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  bool bVar3;
  
  puVar2 = *(undefined **)(param_1 + 8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c952a58) && (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1)) {
    uVar1 = FUN_1446ddbd2();
    FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0,0x108001,0,uVar1,FUN_1403a682c);
    atexit(FUN_142818c9e);
    _Init_thread_footer(&DAT_14c952a58);
  }
  if (DAT_14c952a10 == 0) {
    bVar3 = puVar2 != (undefined *)0x0;
    if (puVar2 != &DAT_14c952a08 && bVar3) {
      do {
        puVar2 = *(undefined **)(puVar2 + 0x30);
        bVar3 = puVar2 != (undefined *)0x0;
        if (puVar2 == &DAT_14c952a08) {
          return bVar3;
        }
      } while (puVar2 != (undefined *)0x0);
    }
  }
  else {
    bVar3 = (*(ulonglong *)(puVar2 + 0x18) & DAT_14c952a10) != 0;
  }
  return bVar3;
}



// FUNCTION 143e9f078 FUN_143e9f078 body=410 status=ok
// SIG undefined FUN_143e9f078(void)

longlong FUN_143e9f078(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  char local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    puVar4 = *(undefined8 **)(lVar1 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951d20) && (FUN_144b3d300(&DAT_14c951d20), DAT_14c951d20 == -1)) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_14067a048;
      local_50 = 0;
      local_58 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
    if (DAT_14c951cd8 == 0) {
      bVar5 = puVar4 != (undefined8 *)0x0;
      if (puVar4 != &DAT_14c951cd0 && bVar5) {
        do {
          puVar4 = (undefined8 *)puVar4[6];
          bVar5 = puVar4 != (undefined8 *)0x0;
          if (puVar4 == &DAT_14c951cd0) break;
        } while (puVar4 != (undefined8 *)0x0);
      }
    }
    else {
      bVar5 = (puVar4[3] & DAT_14c951cd8) != 0;
    }
    lVar3 = 0;
    if (bVar5) {
      lVar3 = lVar1;
    }
  }
  local_29 = '\0';
  (**(code **)(*param_2 + 0x238))(param_2,&local_29);
  lVar1 = *(int *)(lVar3 + 0x44) + param_3;
  if (local_29 == '\x01') {
    bVar2 = *(byte *)(lVar3 + 0x72);
  }
  else {
    bVar2 = 0;
  }
  *(byte *)(lVar1 + (ulonglong)*(byte *)(lVar3 + 0x71)) =
       *(byte *)((ulonglong)*(byte *)(lVar3 + 0x71) + lVar1) & ~*(byte *)(lVar3 + 0x73) | bVar2;
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_3;
}



// FUNCTION 143e9f213 FUN_143e9f213 body=435 status=ok
// SIG undefined FUN_143e9f213(void)

longlong FUN_143e9f213(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  bool bVar4;
  
  if ((param_1 == (longlong *)0x0) || (lVar1 = param_1[1], lVar1 == 0)) {
LAB_143e9f2ab:
    param_2 = 0;
  }
  else {
    puVar3 = *(undefined8 **)(lVar1 + 8);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c951d20) {
      FUN_144b3d300(&DAT_14c951d20);
      if (DAT_14c951d20 == -1) {
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110) < DAT_14c951a88) {
          FUN_144b3d300(&DAT_14c951a88);
          if (DAT_14c951a88 == -1) {
            uVar2 = FUN_140342cba();
            FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0,0x8001,0,uVar2,FUN_1468c7f1e);
            atexit(FUN_14280c819);
            _Init_thread_footer(&DAT_14c951a88);
          }
        }
        FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0,0x28001,0,&DAT_14c951a38,
                      FUN_14067a048);
        atexit(FUN_142811fe5);
        _Init_thread_footer(&DAT_14c951d20);
      }
    }
    if (DAT_14c951cd8 == 0) {
      bVar4 = puVar3 != (undefined8 *)0x0;
      if (puVar3 != &DAT_14c951cd0 && bVar4) {
        do {
          puVar3 = (undefined8 *)puVar3[6];
          bVar4 = puVar3 != (undefined8 *)0x0;
          if (puVar3 == &DAT_14c951cd0) break;
        } while (puVar3 != (undefined8 *)0x0);
      }
      if (!bVar4) goto LAB_143e9f2ab;
    }
    else if ((puVar3[3] & DAT_14c951cd8) == 0) goto LAB_143e9f2ab;
    param_2 = (longlong)*(int *)(lVar1 + 0x44) + *param_1 + param_2;
  }
  return param_2;
}



// FUNCTION 143e9f3c6 FUN_143e9f3c6 body=497 status=ok
// SIG undefined FUN_143e9f3c6(void)

void FUN_143e9f3c6(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  bool bVar4;
  
  if (param_2 == (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e9f45d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb8))(param_1);
    return;
  }
  lVar1 = param_2[1];
  if (lVar1 == 0) {
    return;
  }
  puVar3 = *(undefined8 **)(lVar1 + 8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951d20) && (FUN_144b3d300(&DAT_14c951d20), DAT_14c951d20 == -1)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
      uVar2 = FUN_140342cba();
      FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0,0x8001,0,uVar2,FUN_1468c7f1e);
      atexit(FUN_14280c819);
      _Init_thread_footer(&DAT_14c951a88);
    }
    FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0,0x28001,0,&DAT_14c951a38,FUN_14067a048);
    atexit(FUN_142811fe5);
    _Init_thread_footer(&DAT_14c951d20);
  }
  if (DAT_14c951cd8 == 0) {
    bVar4 = puVar3 != (undefined8 *)0x0;
    if (puVar3 != &DAT_14c951cd0 && bVar4) {
      do {
        puVar3 = (undefined8 *)puVar3[6];
        bVar4 = puVar3 != (undefined8 *)0x0;
        if (puVar3 == &DAT_14c951cd0) break;
      } while (puVar3 != (undefined8 *)0x0);
    }
    if (!bVar4) {
      return;
    }
  }
  else if ((puVar3[3] & DAT_14c951cd8) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000143e9f449. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x140))
            (param_1,*(undefined1 *)(param_3 + (longlong)*(int *)(lVar1 + 0x44) + *param_2));
  return;
}



// FUNCTION 143e9f5b7 FUN_143e9f5b7 body=566 status=ok
// SIG undefined FUN_143e9f5b7(void)

void FUN_143e9f5b7(longlong *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  char local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_2 != (longlong *)0x0) && (lVar1 = param_2[1], lVar1 != 0)) {
    puVar4 = *(undefined8 **)(lVar1 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951d20) && (FUN_144b3d300(&DAT_14c951d20), DAT_14c951d20 == -1)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1))
      {
        local_48 = (undefined *)FUN_140342cba();
        local_40 = FUN_1468c7f1e;
        local_50 = 0;
        local_58 = 0x8001;
        FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000);
        atexit(FUN_14280c819);
        _Init_thread_footer(&DAT_14c951a88);
      }
      local_40 = FUN_14067a048;
      local_48 = &DAT_14c951a38;
      local_50 = 0;
      local_58 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
    if (DAT_14c951cd8 == 0) {
      bVar5 = puVar4 != (undefined8 *)0x0;
      if (puVar4 != &DAT_14c951cd0 && bVar5) {
        do {
          puVar4 = (undefined8 *)puVar4[6];
          bVar5 = puVar4 != (undefined8 *)0x0;
          if (puVar4 == &DAT_14c951cd0) break;
        } while (puVar4 != (undefined8 *)0x0);
      }
      if (!bVar5) goto LAB_143e9f6b8;
    }
    else if ((puVar4[3] & DAT_14c951cd8) == 0) goto LAB_143e9f6b8;
    local_31 = '\0';
    (**(code **)(*param_1 + 0x238))(param_1,&local_31);
    lVar2 = (longlong)param_3 * (longlong)*(int *)(lVar1 + 0x34) +
            (longlong)*(int *)(lVar1 + 0x44) + *param_2;
    if (local_31 == '\x01') {
      bVar3 = *(byte *)(lVar1 + 0x72);
    }
    else {
      bVar3 = 0;
    }
    *(byte *)(lVar2 + (ulonglong)*(byte *)(lVar1 + 0x71)) =
         *(byte *)((ulonglong)*(byte *)(lVar1 + 0x71) + lVar2) & ~*(byte *)(lVar1 + 0x73) | bVar3;
  }
LAB_143e9f6b8:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e9f7ee FUN_143e9f7ee body=512 status=ok
// SIG undefined FUN_143e9f7ee(void)

longlong FUN_143e9f7ee(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  bool bVar7;
  
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (lVar4 == 0) {
    lVar4 = 0;
    lVar5 = 0;
  }
  else {
    puVar6 = *(undefined8 **)(lVar4 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952210) && (FUN_144b3d300(&DAT_14c952210), DAT_14c952210 == -1)) {
      FUN_14475b26a();
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0,0x1008081,0,&DAT_14c9520b8,FUN_1405ebbb2);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
    if (DAT_14c9521c8 == 0) {
      bVar7 = puVar6 != (undefined8 *)0x0;
      if (puVar6 != &DAT_14c9521c0 && bVar7) {
        do {
          puVar6 = (undefined8 *)puVar6[6];
          bVar7 = puVar6 != (undefined8 *)0x0;
          if (puVar6 == &DAT_14c9521c0) break;
        } while (puVar6 != (undefined8 *)0x0);
      }
    }
    else {
      bVar7 = (puVar6[3] & DAT_14c9521c8) != 0;
    }
    lVar5 = 0;
    if (bVar7) {
      lVar5 = lVar4;
    }
    lVar4 = *(longlong *)(param_1 + 0x18);
  }
  if (*(uint *)(lVar4 + 0x30) < 2) {
    (**(code **)(*param_2 + 0x128))(param_2,*(undefined4 *)(param_3 + *(int *)(lVar5 + 0x44)));
  }
  else {
    plVar3 = (longlong *)FUN_1489e7d86(param_1,param_3);
    *plVar3 = param_3;
    plVar3[1] = *(longlong *)(param_1 + 0x18);
    cVar2 = (**(code **)(*param_2 + 0x158))
                      (param_2,plVar3,FUN_143e9fb3d,FUN_143e9fc9c,&LAB_143e9109a,FUN_143e9fa1b);
    if (cVar2 == '\0') {
      (**(code **)(*param_2 + 0x160))(param_2,(longlong)*(int *)(lVar5 + 0x30));
      if (0 < *(int *)(lVar5 + 0x30)) {
        iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x44);
        lVar4 = 0;
        do {
          (**(code **)(*param_2 + 0x128))(param_2,*(undefined4 *)(iVar1 + param_3 + lVar4 * 4));
          lVar4 = lVar4 + 1;
        } while (lVar4 < *(int *)(lVar5 + 0x30));
      }
      (**(code **)(*param_2 + 0x168))(param_2);
    }
  }
  return param_3;
}



// FUNCTION 143e9f9ee FUN_143e9f9ee body=45 status=ok
// SIG undefined FUN_143e9f9ee(void)

undefined8 FUN_143e9f9ee(longlong param_1,longlong param_2,double *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  lVar2 = (**(code **)(*plVar1 + 0x220))(plVar1,param_2 + *(int *)((longlong)plVar1 + 0x44));
  *param_3 = (double)lVar2;
  return 1;
}



// FUNCTION 143e9fa1b FUN_143e9fa1b body=290 status=ok
// SIG undefined FUN_143e9fa1b(void)

longlong FUN_143e9fa1b(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  bool bVar3;
  
  if ((param_1 == (longlong *)0x0) || (lVar1 = param_1[1], lVar1 == 0)) {
LAB_143e9fab4:
    lVar1 = 0;
  }
  else {
    puVar2 = *(undefined8 **)(lVar1 + 8);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c952210) {
      FUN_144b3d300(&DAT_14c952210);
      if (DAT_14c952210 == -1) {
        FUN_14475b26a();
        FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0,0x1008081,0,&DAT_14c9520b8,FUN_1405ebbb2
                     );
        atexit(FUN_142816fad);
        _Init_thread_footer(&DAT_14c952210);
      }
    }
    if (DAT_14c9521c8 == 0) {
      bVar3 = puVar2 != (undefined8 *)0x0;
      if (puVar2 != &DAT_14c9521c0 && bVar3) {
        do {
          puVar2 = (undefined8 *)puVar2[6];
          bVar3 = puVar2 != (undefined8 *)0x0;
          if (puVar2 == &DAT_14c9521c0) break;
        } while (puVar2 != (undefined8 *)0x0);
      }
      if (!bVar3) goto LAB_143e9fab4;
    }
    else if ((puVar2[3] & DAT_14c9521c8) == 0) goto LAB_143e9fab4;
    lVar1 = (longlong)*(int *)(lVar1 + 0x44) + *param_1 + param_2 * 4;
  }
  return lVar1;
}



// FUNCTION 143e9fb3d FUN_143e9fb3d body=351 status=ok
// SIG undefined FUN_143e9fb3d(void)

void FUN_143e9fb3d(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  bool bVar3;
  
  if (param_2 == (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e9fbd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb8))(param_1);
    return;
  }
  lVar1 = param_2[1];
  if (lVar1 == 0) {
    return;
  }
  puVar2 = *(undefined8 **)(lVar1 + 8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c952210) && (FUN_144b3d300(&DAT_14c952210), DAT_14c952210 == -1)) {
    FUN_14475b26a();
    FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0,0x1008081,0,&DAT_14c9520b8,FUN_1405ebbb2);
    atexit(FUN_142816fad);
    _Init_thread_footer(&DAT_14c952210);
  }
  if (DAT_14c9521c8 == 0) {
    bVar3 = puVar2 != (undefined8 *)0x0;
    if (puVar2 != &DAT_14c9521c0 && bVar3) {
      do {
        puVar2 = (undefined8 *)puVar2[6];
        bVar3 = puVar2 != (undefined8 *)0x0;
        if (puVar2 == &DAT_14c9521c0) break;
      } while (puVar2 != (undefined8 *)0x0);
    }
    if (!bVar3) {
      return;
    }
  }
  else if ((puVar2[3] & DAT_14c9521c8) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000143e9fbc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x128))
            (param_1,*(undefined4 *)((longlong)*(int *)(lVar1 + 0x44) + *param_2 + param_3 * 4));
  return;
}



// FUNCTION 143e9fc9c FUN_143e9fc9c body=384 status=ok
// SIG undefined FUN_143e9fc9c(void)

void FUN_143e9fc9c(longlong *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_2 != (longlong *)0x0) && (lVar1 = param_2[1], lVar1 != 0)) {
    puVar2 = *(undefined8 **)(lVar1 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952210) && (FUN_144b3d300(&DAT_14c952210), DAT_14c952210 == -1)) {
      FUN_14475b26a();
      local_40 = FUN_1405ebbb2;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
    if (DAT_14c9521c8 == 0) {
      bVar3 = puVar2 != (undefined8 *)0x0;
      if (puVar2 != &DAT_14c9521c0 && bVar3) {
        do {
          puVar2 = (undefined8 *)puVar2[6];
          bVar3 = puVar2 != (undefined8 *)0x0;
          if (puVar2 == &DAT_14c9521c0) break;
        } while (puVar2 != (undefined8 *)0x0);
      }
      if (!bVar3) goto LAB_143e9fd3f;
    }
    else if ((puVar2[3] & DAT_14c9521c8) == 0) goto LAB_143e9fd3f;
    local_34 = 0;
    (**(code **)(*param_1 + 0x220))(param_1,&local_34);
    *(undefined4 *)
     ((longlong)param_3 * (longlong)*(int *)(lVar1 + 0x34) +
     (longlong)*(int *)(lVar1 + 0x44) + *param_2) = local_34;
  }
LAB_143e9fd3f:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e9fe1e FUN_143e9fe1e body=512 status=ok
// SIG undefined FUN_143e9fe1e(void)

longlong FUN_143e9fe1e(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined *puVar6;
  bool bVar7;
  
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (lVar4 == 0) {
    lVar4 = 0;
    lVar5 = 0;
  }
  else {
    puVar6 = *(undefined **)(lVar4 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952318) && (FUN_144b3d300(&DAT_14c952318), DAT_14c952318 == -1)) {
      FUN_14475b26a();
      FUN_14000176a(&DAT_14c9522c8,L"FUInt32Property",0x800,0,0x1008801,0,&DAT_14c9520b8,
                    FUN_1468e122c);
      atexit(FUN_142817034);
      _Init_thread_footer(&DAT_14c952318);
    }
    if (DAT_14c9522d0 == 0) {
      bVar7 = puVar6 != (undefined *)0x0;
      if (puVar6 != &DAT_14c9522c8 && bVar7) {
        do {
          puVar6 = *(undefined **)(puVar6 + 0x30);
          bVar7 = puVar6 != (undefined *)0x0;
          if (puVar6 == &DAT_14c9522c8) break;
        } while (puVar6 != (undefined *)0x0);
      }
    }
    else {
      bVar7 = (*(ulonglong *)(puVar6 + 0x18) & DAT_14c9522d0) != 0;
    }
    lVar5 = 0;
    if (bVar7) {
      lVar5 = lVar4;
    }
    lVar4 = *(longlong *)(param_1 + 0x18);
  }
  if (*(uint *)(lVar4 + 0x30) < 2) {
    (**(code **)(*param_2 + 0x120))(param_2,*(undefined4 *)(param_3 + *(int *)(lVar5 + 0x44)));
  }
  else {
    plVar3 = (longlong *)FUN_1489e807e(param_1,param_3);
    *plVar3 = param_3;
    plVar3[1] = *(longlong *)(param_1 + 0x18);
    cVar2 = (**(code **)(*param_2 + 0x158))
                      (param_2,plVar3,FUN_143ea0181,FUN_143ea02e0,&LAB_143e9109a,FUN_143ea005f);
    if (cVar2 == '\0') {
      (**(code **)(*param_2 + 0x160))(param_2,(longlong)*(int *)(lVar5 + 0x30));
      if (0 < *(int *)(lVar5 + 0x30)) {
        iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x44);
        lVar4 = 0;
        do {
          (**(code **)(*param_2 + 0x120))(param_2,*(undefined4 *)(iVar1 + param_3 + lVar4 * 4));
          lVar4 = lVar4 + 1;
        } while (lVar4 < *(int *)(lVar5 + 0x30));
      }
      (**(code **)(*param_2 + 0x168))(param_2);
    }
  }
  return param_3;
}



// FUNCTION 143ea001e FUN_143ea001e body=65 status=ok
// SIG undefined FUN_143ea001e(void)

undefined8 FUN_143ea001e(longlong param_1,longlong param_2,double *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  uVar2 = (**(code **)(*plVar1 + 0x230))(plVar1,param_2 + *(int *)((longlong)plVar1 + 0x44));
  auVar3._8_4_ = (int)((ulonglong)uVar2 >> 0x20);
  auVar3._0_8_ = uVar2;
  auVar3._12_4_ = 0x45300000;
  *param_3 = ((double)CONCAT44(0x43300000,(int)uVar2) - 4503599627370496.0) +
             (auVar3._8_8_ - 1.9342813113834067e+25);
  return 1;
}



// FUNCTION 143ea005f FUN_143ea005f body=290 status=ok
// SIG undefined FUN_143ea005f(void)

longlong FUN_143ea005f(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined *puVar2;
  bool bVar3;
  
  if ((param_1 == (longlong *)0x0) || (lVar1 = param_1[1], lVar1 == 0)) {
LAB_143ea00f8:
    lVar1 = 0;
  }
  else {
    puVar2 = *(undefined **)(lVar1 + 8);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c952318) {
      FUN_144b3d300(&DAT_14c952318);
      if (DAT_14c952318 == -1) {
        FUN_14475b26a();
        FUN_14000176a(&DAT_14c9522c8,L"FUInt32Property",0x800,0,0x1008801,0,&DAT_14c9520b8,
                      FUN_1468e122c);
        atexit(FUN_142817034);
        _Init_thread_footer(&DAT_14c952318);
      }
    }
    if (DAT_14c9522d0 == 0) {
      bVar3 = puVar2 != (undefined *)0x0;
      if (puVar2 != &DAT_14c9522c8 && bVar3) {
        do {
          puVar2 = *(undefined **)(puVar2 + 0x30);
          bVar3 = puVar2 != (undefined *)0x0;
          if (puVar2 == &DAT_14c9522c8) break;
        } while (puVar2 != (undefined *)0x0);
      }
      if (!bVar3) goto LAB_143ea00f8;
    }
    else if ((*(ulonglong *)(puVar2 + 0x18) & DAT_14c9522d0) == 0) goto LAB_143ea00f8;
    lVar1 = (longlong)*(int *)(lVar1 + 0x44) + *param_1 + param_2 * 4;
  }
  return lVar1;
}



// FUNCTION 143ea0181 FUN_143ea0181 body=351 status=ok
// SIG undefined FUN_143ea0181(void)

void FUN_143ea0181(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined *puVar2;
  bool bVar3;
  
  if (param_2 == (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ea0218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb8))(param_1);
    return;
  }
  lVar1 = param_2[1];
  if (lVar1 == 0) {
    return;
  }
  puVar2 = *(undefined **)(lVar1 + 8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c952318) && (FUN_144b3d300(&DAT_14c952318), DAT_14c952318 == -1)) {
    FUN_14475b26a();
    FUN_14000176a(&DAT_14c9522c8,L"FUInt32Property",0x800,0,0x1008801,0,&DAT_14c9520b8,FUN_1468e122c
                 );
    atexit(FUN_142817034);
    _Init_thread_footer(&DAT_14c952318);
  }
  if (DAT_14c9522d0 == 0) {
    bVar3 = puVar2 != (undefined *)0x0;
    if (puVar2 != &DAT_14c9522c8 && bVar3) {
      do {
        puVar2 = *(undefined **)(puVar2 + 0x30);
        bVar3 = puVar2 != (undefined *)0x0;
        if (puVar2 == &DAT_14c9522c8) break;
      } while (puVar2 != (undefined *)0x0);
    }
    if (!bVar3) {
      return;
    }
  }
  else if ((*(ulonglong *)(puVar2 + 0x18) & DAT_14c9522d0) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000143ea0204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x120))
            (param_1,*(undefined4 *)((longlong)*(int *)(lVar1 + 0x44) + *param_2 + param_3 * 4));
  return;
}



// FUNCTION 143ea02e0 FUN_143ea02e0 body=384 status=ok
// SIG undefined FUN_143ea02e0(void)

void FUN_143ea02e0(longlong *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  undefined *puVar2;
  bool bVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_2 != (longlong *)0x0) && (lVar1 = param_2[1], lVar1 != 0)) {
    puVar2 = *(undefined **)(lVar1 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952318) && (FUN_144b3d300(&DAT_14c952318), DAT_14c952318 == -1)) {
      FUN_14475b26a();
      local_40 = FUN_1468e122c;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008801;
      FUN_14000176a(&DAT_14c9522c8,L"FUInt32Property",0x800,0);
      atexit(FUN_142817034);
      _Init_thread_footer(&DAT_14c952318);
    }
    if (DAT_14c9522d0 == 0) {
      bVar3 = puVar2 != (undefined *)0x0;
      if (puVar2 != &DAT_14c9522c8 && bVar3) {
        do {
          puVar2 = *(undefined **)(puVar2 + 0x30);
          bVar3 = puVar2 != (undefined *)0x0;
          if (puVar2 == &DAT_14c9522c8) break;
        } while (puVar2 != (undefined *)0x0);
      }
      if (!bVar3) goto LAB_143ea0383;
    }
    else if ((*(ulonglong *)(puVar2 + 0x18) & DAT_14c9522d0) == 0) goto LAB_143ea0383;
    local_34 = 0;
    (**(code **)(*param_1 + 0x218))(param_1,&local_34);
    *(undefined4 *)
     ((longlong)param_3 * (longlong)*(int *)(lVar1 + 0x34) +
     (longlong)*(int *)(lVar1 + 0x44) + *param_2) = local_34;
  }
LAB_143ea0383:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ea0461 FUN_143ea0461 body=290 status=ok
// SIG undefined FUN_143ea0461(void)

longlong FUN_143ea0461(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined *puVar2;
  bool bVar3;
  
  if ((param_1 == (longlong *)0x0) || (lVar1 = param_1[1], lVar1 == 0)) {
LAB_143ea04fa:
    lVar1 = 0;
  }
  else {
    puVar2 = *(undefined **)(lVar1 + 8);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c952268) {
      FUN_144b3d300(&DAT_14c952268);
      if (DAT_14c952268 == -1) {
        FUN_14475b26a();
        FUN_14000176a(&DAT_14c952218,L"FInt64Property",0x400000,0,0x1408001,0,&DAT_14c9520b8,
                      FUN_1459738d6);
        atexit(FUN_142816fda);
        _Init_thread_footer(&DAT_14c952268);
      }
    }
    if (DAT_14c952220 == 0) {
      bVar3 = puVar2 != (undefined *)0x0;
      if (puVar2 != &DAT_14c952218 && bVar3) {
        do {
          puVar2 = *(undefined **)(puVar2 + 0x30);
          bVar3 = puVar2 != (undefined *)0x0;
          if (puVar2 == &DAT_14c952218) break;
        } while (puVar2 != (undefined *)0x0);
      }
      if (!bVar3) goto LAB_143ea04fa;
    }
    else if ((*(ulonglong *)(puVar2 + 0x18) & DAT_14c952220) == 0) goto LAB_143ea04fa;
    lVar1 = (longlong)*(int *)(lVar1 + 0x44) + *param_1 + param_2 * 8;
  }
  return lVar1;
}



// FUNCTION 143ea0583 FUN_143ea0583 body=352 status=ok
// SIG undefined FUN_143ea0583(void)

void FUN_143ea0583(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined *puVar2;
  bool bVar3;
  
  if (param_2 == (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ea061b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb8))(param_1);
    return;
  }
  lVar1 = param_2[1];
  if (lVar1 == 0) {
    return;
  }
  puVar2 = *(undefined **)(lVar1 + 8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c952268) && (FUN_144b3d300(&DAT_14c952268), DAT_14c952268 == -1)) {
    FUN_14475b26a();
    FUN_14000176a(&DAT_14c952218,L"FInt64Property",0x400000,0,0x1408001,0,&DAT_14c9520b8,
                  FUN_1459738d6);
    atexit(FUN_142816fda);
    _Init_thread_footer(&DAT_14c952268);
  }
  if (DAT_14c952220 == 0) {
    bVar3 = puVar2 != (undefined *)0x0;
    if (puVar2 != &DAT_14c952218 && bVar3) {
      do {
        puVar2 = *(undefined **)(puVar2 + 0x30);
        bVar3 = puVar2 != (undefined *)0x0;
        if (puVar2 == &DAT_14c952218) break;
      } while (puVar2 != (undefined *)0x0);
    }
    if (!bVar3) {
      return;
    }
  }
  else if ((*(ulonglong *)(puVar2 + 0x18) & DAT_14c952220) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000143ea0607. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x118))
            (param_1,*(undefined8 *)((longlong)*(int *)(lVar1 + 0x44) + *param_2 + param_3 * 8));
  return;
}



// FUNCTION 143ea06e3 FUN_143ea06e3 body=385 status=ok
// SIG undefined FUN_143ea06e3(void)

void FUN_143ea06e3(longlong *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  undefined *puVar2;
  bool bVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_2 != (longlong *)0x0) && (lVar1 = param_2[1], lVar1 != 0)) {
    puVar2 = *(undefined **)(lVar1 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952268) && (FUN_144b3d300(&DAT_14c952268), DAT_14c952268 == -1)) {
      FUN_14475b26a();
      local_40 = FUN_1459738d6;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1408001;
      FUN_14000176a(&DAT_14c952218,L"FInt64Property",0x400000,0);
      atexit(FUN_142816fda);
      _Init_thread_footer(&DAT_14c952268);
    }
    if (DAT_14c952220 == 0) {
      bVar3 = puVar2 != (undefined *)0x0;
      if (puVar2 != &DAT_14c952218 && bVar3) {
        do {
          puVar2 = *(undefined **)(puVar2 + 0x30);
          bVar3 = puVar2 != (undefined *)0x0;
          if (puVar2 == &DAT_14c952218) break;
        } while (puVar2 != (undefined *)0x0);
      }
      if (!bVar3) goto LAB_143ea0787;
    }
    else if ((*(ulonglong *)(puVar2 + 0x18) & DAT_14c952220) == 0) goto LAB_143ea0787;
    local_38 = 0;
    (**(code **)(*param_1 + 0x210))(param_1,&local_38);
    *(undefined8 *)
     ((longlong)param_3 * (longlong)*(int *)(lVar1 + 0x34) +
     (longlong)*(int *)(lVar1 + 0x44) + *param_2) = local_38;
  }
LAB_143ea0787:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ea0866 FUN_143ea0866 body=513 status=ok
// SIG undefined FUN_143ea0866(void)

longlong FUN_143ea0866(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined *puVar6;
  bool bVar7;
  
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (lVar4 == 0) {
    lVar4 = 0;
    lVar5 = 0;
  }
  else {
    puVar6 = *(undefined **)(lVar4 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952370) && (FUN_144b3d300(&DAT_14c952370), DAT_14c952370 == -1)) {
      FUN_14475b26a();
      FUN_14000176a(&DAT_14c952320,L"FUInt64Property",0x200,0,0x1008201,0,&DAT_14c9520b8,
                    FUN_1468e12e4);
      atexit(FUN_142817061);
      _Init_thread_footer(&DAT_14c952370);
    }
    if (DAT_14c952328 == 0) {
      bVar7 = puVar6 != (undefined *)0x0;
      if (puVar6 != &DAT_14c952320 && bVar7) {
        do {
          puVar6 = *(undefined **)(puVar6 + 0x30);
          bVar7 = puVar6 != (undefined *)0x0;
          if (puVar6 == &DAT_14c952320) break;
        } while (puVar6 != (undefined *)0x0);
      }
    }
    else {
      bVar7 = (*(ulonglong *)(puVar6 + 0x18) & DAT_14c952328) != 0;
    }
    lVar5 = 0;
    if (bVar7) {
      lVar5 = lVar4;
    }
    lVar4 = *(longlong *)(param_1 + 0x18);
  }
  if (*(uint *)(lVar4 + 0x30) < 2) {
    (**(code **)(*param_2 + 0x110))(param_2,*(undefined8 *)(param_3 + *(int *)(lVar5 + 0x44)));
  }
  else {
    plVar3 = (longlong *)FUN_1489e87aa(param_1,param_3);
    *plVar3 = param_3;
    plVar3[1] = *(longlong *)(param_1 + 0x18);
    cVar2 = (**(code **)(*param_2 + 0x158))
                      (param_2,plVar3,FUN_143ea0b89,FUN_143ea0ce9,&LAB_143e9109a,FUN_143ea0a67);
    if (cVar2 == '\0') {
      (**(code **)(*param_2 + 0x160))(param_2,(longlong)*(int *)(lVar5 + 0x30));
      if (0 < *(int *)(lVar5 + 0x30)) {
        iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x44);
        lVar4 = 0;
        do {
          (**(code **)(*param_2 + 0x110))(param_2,*(undefined8 *)(iVar1 + param_3 + lVar4 * 8));
          lVar4 = lVar4 + 1;
        } while (lVar4 < *(int *)(lVar5 + 0x30));
      }
      (**(code **)(*param_2 + 0x168))(param_2);
    }
  }
  return param_3;
}



// FUNCTION 143ea0a67 FUN_143ea0a67 body=290 status=ok
// SIG undefined FUN_143ea0a67(void)

longlong FUN_143ea0a67(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined *puVar2;
  bool bVar3;
  
  if ((param_1 == (longlong *)0x0) || (lVar1 = param_1[1], lVar1 == 0)) {
LAB_143ea0b00:
    lVar1 = 0;
  }
  else {
    puVar2 = *(undefined **)(lVar1 + 8);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c952370) {
      FUN_144b3d300(&DAT_14c952370);
      if (DAT_14c952370 == -1) {
        FUN_14475b26a();
        FUN_14000176a(&DAT_14c952320,L"FUInt64Property",0x200,0,0x1008201,0,&DAT_14c9520b8,
                      FUN_1468e12e4);
        atexit(FUN_142817061);
        _Init_thread_footer(&DAT_14c952370);
      }
    }
    if (DAT_14c952328 == 0) {
      bVar3 = puVar2 != (undefined *)0x0;
      if (puVar2 != &DAT_14c952320 && bVar3) {
        do {
          puVar2 = *(undefined **)(puVar2 + 0x30);
          bVar3 = puVar2 != (undefined *)0x0;
          if (puVar2 == &DAT_14c952320) break;
        } while (puVar2 != (undefined *)0x0);
      }
      if (!bVar3) goto LAB_143ea0b00;
    }
    else if ((*(ulonglong *)(puVar2 + 0x18) & DAT_14c952328) == 0) goto LAB_143ea0b00;
    lVar1 = (longlong)*(int *)(lVar1 + 0x44) + *param_1 + param_2 * 8;
  }
  return lVar1;
}



// FUNCTION 143ea0b89 FUN_143ea0b89 body=352 status=ok
// SIG undefined FUN_143ea0b89(void)

void FUN_143ea0b89(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined *puVar2;
  bool bVar3;
  
  if (param_2 == (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ea0c21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb8))(param_1);
    return;
  }
  lVar1 = param_2[1];
  if (lVar1 == 0) {
    return;
  }
  puVar2 = *(undefined **)(lVar1 + 8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c952370) && (FUN_144b3d300(&DAT_14c952370), DAT_14c952370 == -1)) {
    FUN_14475b26a();
    FUN_14000176a(&DAT_14c952320,L"FUInt64Property",0x200,0,0x1008201,0,&DAT_14c9520b8,FUN_1468e12e4
                 );
    atexit(FUN_142817061);
    _Init_thread_footer(&DAT_14c952370);
  }
  if (DAT_14c952328 == 0) {
    bVar3 = puVar2 != (undefined *)0x0;
    if (puVar2 != &DAT_14c952320 && bVar3) {
      do {
        puVar2 = *(undefined **)(puVar2 + 0x30);
        bVar3 = puVar2 != (undefined *)0x0;
        if (puVar2 == &DAT_14c952320) break;
      } while (puVar2 != (undefined *)0x0);
    }
    if (!bVar3) {
      return;
    }
  }
  else if ((*(ulonglong *)(puVar2 + 0x18) & DAT_14c952328) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000143ea0c0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x110))
            (param_1,*(undefined8 *)((longlong)*(int *)(lVar1 + 0x44) + *param_2 + param_3 * 8));
  return;
}



// FUNCTION 143ea0ce9 FUN_143ea0ce9 body=385 status=ok
// SIG undefined FUN_143ea0ce9(void)

void FUN_143ea0ce9(longlong *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  undefined *puVar2;
  bool bVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_2 != (longlong *)0x0) && (lVar1 = param_2[1], lVar1 != 0)) {
    puVar2 = *(undefined **)(lVar1 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952370) && (FUN_144b3d300(&DAT_14c952370), DAT_14c952370 == -1)) {
      FUN_14475b26a();
      local_40 = FUN_1468e12e4;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008201;
      FUN_14000176a(&DAT_14c952320,L"FUInt64Property",0x200,0);
      atexit(FUN_142817061);
      _Init_thread_footer(&DAT_14c952370);
    }
    if (DAT_14c952328 == 0) {
      bVar3 = puVar2 != (undefined *)0x0;
      if (puVar2 != &DAT_14c952320 && bVar3) {
        do {
          puVar2 = *(undefined **)(puVar2 + 0x30);
          bVar3 = puVar2 != (undefined *)0x0;
          if (puVar2 == &DAT_14c952320) break;
        } while (puVar2 != (undefined *)0x0);
      }
      if (!bVar3) goto LAB_143ea0d8d;
    }
    else if ((*(ulonglong *)(puVar2 + 0x18) & DAT_14c952328) == 0) goto LAB_143ea0d8d;
    local_38 = 0;
    (**(code **)(*param_1 + 0x208))(param_1,&local_38);
    *(undefined8 *)
     ((longlong)param_3 * (longlong)*(int *)(lVar1 + 0x34) +
     (longlong)*(int *)(lVar1 + 0x44) + *param_2) = local_38;
  }
LAB_143ea0d8d:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ea0e6c FUN_143ea0e6c body=40 status=ok
// SIG undefined FUN_143ea0e6c(void)

undefined8 FUN_143ea0e6c(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 extraout_XMM0_Qa;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  (**(code **)(*plVar1 + 0x240))(plVar1,param_2 + *(int *)((longlong)plVar1 + 0x44));
  *param_3 = extraout_XMM0_Qa;
  return 1;
}



// FUNCTION 143ea0e94 FUN_143ea0e94 body=44 status=ok
// SIG undefined FUN_143ea0e94(void)

undefined8 FUN_143ea0e94(longlong param_1,longlong param_2,float *param_3)

{
  longlong *plVar1;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  (**(code **)(*plVar1 + 0x240))(plVar1,param_2 + *(int *)((longlong)plVar1 + 0x44));
  *param_3 = (float)(double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
  return 1;
}



// FUNCTION 143ea0ec0 FUN_143ea0ec0 body=290 status=ok
// SIG undefined FUN_143ea0ec0(void)

longlong FUN_143ea0ec0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  bool bVar3;
  
  if ((param_1 == (longlong *)0x0) || (lVar1 = param_1[1], lVar1 == 0)) {
LAB_143ea0f59:
    lVar1 = 0;
  }
  else {
    puVar2 = *(undefined8 **)(lVar1 + 8);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c9523c8) {
      FUN_144b3d300(&DAT_14c9523c8);
      if (DAT_14c9523c8 == -1) {
        FUN_14475b26a();
        FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0,0x1008101,0,&DAT_14c9520b8,
                      FUN_1408a629c);
        atexit(FUN_14281708e);
        _Init_thread_footer(&DAT_14c9523c8);
      }
    }
    if (DAT_14c952380 == 0) {
      bVar3 = puVar2 != (undefined8 *)0x0;
      if (puVar2 != &DAT_14c952378 && bVar3) {
        do {
          puVar2 = (undefined8 *)puVar2[6];
          bVar3 = puVar2 != (undefined8 *)0x0;
          if (puVar2 == &DAT_14c952378) break;
        } while (puVar2 != (undefined8 *)0x0);
      }
      if (!bVar3) goto LAB_143ea0f59;
    }
    else if ((puVar2[3] & DAT_14c952380) == 0) goto LAB_143ea0f59;
    lVar1 = (longlong)*(int *)(lVar1 + 0x44) + *param_1 + param_2 * 4;
  }
  return lVar1;
}



// FUNCTION 143ea0fe2 FUN_143ea0fe2 body=353 status=ok
// SIG undefined FUN_143ea0fe2(void)

void FUN_143ea0fe2(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  bool bVar3;
  
  if (param_2 == (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ea107b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb8))(param_1);
    return;
  }
  lVar1 = param_2[1];
  if (lVar1 == 0) {
    return;
  }
  puVar2 = *(undefined8 **)(lVar1 + 8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9523c8) && (FUN_144b3d300(&DAT_14c9523c8), DAT_14c9523c8 == -1)) {
    FUN_14475b26a();
    FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0,0x1008101,0,&DAT_14c9520b8,FUN_1408a629c)
    ;
    atexit(FUN_14281708e);
    _Init_thread_footer(&DAT_14c9523c8);
  }
  if (DAT_14c952380 == 0) {
    bVar3 = puVar2 != (undefined8 *)0x0;
    if (puVar2 != &DAT_14c952378 && bVar3) {
      do {
        puVar2 = (undefined8 *)puVar2[6];
        bVar3 = puVar2 != (undefined8 *)0x0;
        if (puVar2 == &DAT_14c952378) break;
      } while (puVar2 != (undefined8 *)0x0);
    }
    if (!bVar3) {
      return;
    }
  }
  else if ((puVar2[3] & DAT_14c952380) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000143ea1067. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))
            (param_1,*(undefined4 *)((longlong)*(int *)(lVar1 + 0x44) + *param_2 + param_3 * 4));
  return;
}



// FUNCTION 143ea1143 FUN_143ea1143 body=388 status=ok
// SIG undefined FUN_143ea1143(void)

void FUN_143ea1143(longlong *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_2 != (longlong *)0x0) && (lVar1 = param_2[1], lVar1 != 0)) {
    puVar2 = *(undefined8 **)(lVar1 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9523c8) && (FUN_144b3d300(&DAT_14c9523c8), DAT_14c9523c8 == -1)) {
      FUN_14475b26a();
      local_40 = FUN_1408a629c;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
    if (DAT_14c952380 == 0) {
      bVar3 = puVar2 != (undefined8 *)0x0;
      if (puVar2 != &DAT_14c952378 && bVar3) {
        do {
          puVar2 = (undefined8 *)puVar2[6];
          bVar3 = puVar2 != (undefined8 *)0x0;
          if (puVar2 == &DAT_14c952378) break;
        } while (puVar2 != (undefined8 *)0x0);
      }
      if (!bVar3) goto LAB_143ea11ea;
    }
    else if ((puVar2[3] & DAT_14c952380) == 0) goto LAB_143ea11ea;
    local_34 = 0;
    (**(code **)(*param_1 + 0x1d8))(param_1,&local_34);
    *(undefined4 *)
     ((longlong)param_3 * (longlong)*(int *)(lVar1 + 0x34) +
     (longlong)*(int *)(lVar1 + 0x44) + *param_2) = local_34;
  }
LAB_143ea11ea:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ea12c8 FUN_143ea12c8 body=297 status=ok
// SIG undefined FUN_143ea12c8(void)

longlong FUN_143ea12c8(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined *puVar2;
  bool bVar3;
  
  if ((param_1 == (longlong *)0x0) || (lVar1 = param_1[1], lVar1 == 0)) {
LAB_143ea1361:
    lVar1 = 0;
  }
  else {
    puVar2 = *(undefined **)(lVar1 + 8);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c952420) {
      FUN_144b3d300(&DAT_14c952420);
      if (DAT_14c952420 == -1) {
        FUN_14475b26a();
        FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0,0x101008001,0,&DAT_14c9520b8,
                      FUN_14079c5e4);
        atexit(FUN_1428170bb);
        _Init_thread_footer(&DAT_14c952420);
      }
    }
    if (DAT_14c9523d8 == 0) {
      bVar3 = puVar2 != (undefined *)0x0;
      if (puVar2 != &DAT_14c9523d0 && bVar3) {
        do {
          puVar2 = *(undefined **)(puVar2 + 0x30);
          bVar3 = puVar2 != (undefined *)0x0;
          if (puVar2 == &DAT_14c9523d0) break;
        } while (puVar2 != (undefined *)0x0);
      }
      if (!bVar3) goto LAB_143ea1361;
    }
    else if ((*(ulonglong *)(puVar2 + 0x18) & DAT_14c9523d8) == 0) goto LAB_143ea1361;
    lVar1 = (longlong)*(int *)(lVar1 + 0x44) + *param_1 + param_2 * 8;
  }
  return lVar1;
}



// FUNCTION 143ea13f1 FUN_143ea13f1 body=360 status=ok
// SIG undefined FUN_143ea13f1(void)

void FUN_143ea13f1(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined *puVar2;
  bool bVar3;
  
  if (param_2 == (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ea148a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb8))(param_1);
    return;
  }
  lVar1 = param_2[1];
  if (lVar1 == 0) {
    return;
  }
  puVar2 = *(undefined **)(lVar1 + 8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c952420) && (FUN_144b3d300(&DAT_14c952420), DAT_14c952420 == -1)) {
    FUN_14475b26a();
    FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0,0x101008001,0,&DAT_14c9520b8,
                  FUN_14079c5e4);
    atexit(FUN_1428170bb);
    _Init_thread_footer(&DAT_14c952420);
  }
  if (DAT_14c9523d8 == 0) {
    bVar3 = puVar2 != (undefined *)0x0;
    if (puVar2 != &DAT_14c9523d0 && bVar3) {
      do {
        puVar2 = *(undefined **)(puVar2 + 0x30);
        bVar3 = puVar2 != (undefined *)0x0;
        if (puVar2 == &DAT_14c9523d0) break;
      } while (puVar2 != (undefined *)0x0);
    }
    if (!bVar3) {
      return;
    }
  }
  else if ((*(ulonglong *)(puVar2 + 0x18) & DAT_14c9523d8) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000143ea1476. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe0))
            (param_1,*(undefined8 *)((longlong)*(int *)(lVar1 + 0x44) + *param_2 + param_3 * 8));
  return;
}



// FUNCTION 143ea1559 FUN_143ea1559 body=395 status=ok
// SIG undefined FUN_143ea1559(void)

void FUN_143ea1559(longlong *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  undefined *puVar2;
  bool bVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_2 != (longlong *)0x0) && (lVar1 = param_2[1], lVar1 != 0)) {
    puVar2 = *(undefined **)(lVar1 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952420) && (FUN_144b3d300(&DAT_14c952420), DAT_14c952420 == -1)) {
      FUN_14475b26a();
      local_40 = FUN_14079c5e4;
      local_48 = &DAT_14c9520b8;
      local_58 = 0x101008001;
      local_50 = 0;
      FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
      atexit(FUN_1428170bb);
      _Init_thread_footer(&DAT_14c952420);
    }
    if (DAT_14c9523d8 == 0) {
      bVar3 = puVar2 != (undefined *)0x0;
      if (puVar2 != &DAT_14c9523d0 && bVar3) {
        do {
          puVar2 = *(undefined **)(puVar2 + 0x30);
          bVar3 = puVar2 != (undefined *)0x0;
          if (puVar2 == &DAT_14c9523d0) break;
        } while (puVar2 != (undefined *)0x0);
      }
      if (!bVar3) goto LAB_143ea1600;
    }
    else if ((*(ulonglong *)(puVar2 + 0x18) & DAT_14c9523d8) == 0) goto LAB_143ea1600;
    local_38 = 0;
    (**(code **)(*param_1 + 0x1d0))(param_1,&local_38);
    *(undefined8 *)
     ((longlong)param_3 * (longlong)*(int *)(lVar1 + 0x34) +
     (longlong)*(int *)(lVar1 + 0x44) + *param_2) = local_38;
  }
LAB_143ea1600:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ea16e6 FUN_143ea16e6 body=300 status=ok
// SIG undefined FUN_143ea16e6(void)

undefined8 FUN_143ea16e6(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  bool bVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != 0) {
    puVar3 = *(undefined8 **)(lVar1 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951d20) && (FUN_144b3d300(&DAT_14c951d20), DAT_14c951d20 == -1)) {
      uVar2 = FUN_1446ddbd2();
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0,0x28001,0,uVar2,FUN_14067a048);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
    if (DAT_14c951cd8 == 0) {
      bVar4 = puVar3 != (undefined8 *)0x0;
      if (puVar3 != &DAT_14c951cd0 && bVar4) {
        do {
          puVar3 = (undefined8 *)puVar3[6];
          bVar4 = puVar3 != (undefined8 *)0x0;
          if (puVar3 == &DAT_14c951cd0) break;
        } while (puVar3 != (undefined8 *)0x0);
      }
      if (bVar4) goto LAB_143ea17f7;
    }
    else if ((puVar3[3] & DAT_14c951cd8) != 0) {
LAB_143ea17f7:
      *(bool *)param_3 =
           (*(byte *)((ulonglong)*(byte *)(lVar1 + 0x71) + param_2 + *(int *)(lVar1 + 0x44)) &
           *(byte *)(lVar1 + 0x73)) != 0;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143ea1815 FUN_143ea1815 body=442 status=ok
// SIG undefined FUN_143ea1815(void)

longlong FUN_143ea1815(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined *puVar3;
  bool bVar4;
  
  if ((param_1 == (longlong *)0x0) || (lVar2 = param_1[1], lVar2 == 0)) {
LAB_143ea18b1:
    lVar2 = 0;
  }
  else {
    puVar3 = *(undefined **)(lVar2 + 8);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c963e88) {
      FUN_144b3d300(&DAT_14c963e88);
      if (DAT_14c963e88 == -1) {
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110) < DAT_14c951a88) {
          FUN_144b3d300(&DAT_14c951a88);
          if (DAT_14c951a88 == -1) {
            uVar1 = FUN_140342cba();
            FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0,0x8001,0,uVar1,FUN_1468c7f1e);
            atexit(FUN_14280c819);
            _Init_thread_footer(&DAT_14c951a88);
          }
        }
        FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0,0xc001,0,&DAT_14c951a38,FUN_140dafe7a)
        ;
        atexit(FUN_142829758);
        _Init_thread_footer(&DAT_14c963e88);
      }
    }
    if (DAT_14c963e40 == 0) {
      bVar4 = puVar3 != (undefined *)0x0;
      if (puVar3 != &DAT_14c963e38 && bVar4) {
        do {
          puVar3 = *(undefined **)(puVar3 + 0x30);
          bVar4 = puVar3 != (undefined *)0x0;
          if (puVar3 == &DAT_14c963e38) break;
        } while (puVar3 != (undefined *)0x0);
      }
      if (!bVar4) goto LAB_143ea18b1;
    }
    else if ((*(ulonglong *)(puVar3 + 0x18) & DAT_14c963e40) == 0) goto LAB_143ea18b1;
    lVar2 = param_2 * 0x10 + (longlong)*(int *)(lVar2 + 0x44) + *param_1;
  }
  return lVar2;
}



// FUNCTION 143ea19cf FUN_143ea19cf body=518 status=ok
// SIG undefined FUN_143ea19cf(void)

void FUN_143ea19cf(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined *puVar4;
  bool bVar5;
  
  if (param_2 == (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ea1a59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb8))(param_1);
    return;
  }
  lVar1 = param_2[1];
  if (lVar1 == 0) {
    return;
  }
  puVar4 = *(undefined **)(lVar1 + 8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c963e88) && (FUN_144b3d300(&DAT_14c963e88), DAT_14c963e88 == -1)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
      uVar2 = FUN_140342cba();
      FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0,0x8001,0,uVar2,FUN_1468c7f1e);
      atexit(FUN_14280c819);
      _Init_thread_footer(&DAT_14c951a88);
    }
    FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0,0xc001,0,&DAT_14c951a38,FUN_140dafe7a);
    atexit(FUN_142829758);
    _Init_thread_footer(&DAT_14c963e88);
  }
  if (DAT_14c963e40 == 0) {
    bVar5 = puVar4 != (undefined *)0x0;
    if (puVar4 != &DAT_14c963e38 && bVar5) {
      do {
        puVar4 = *(undefined **)(puVar4 + 0x30);
        bVar5 = puVar4 != (undefined *)0x0;
        if (puVar4 == &DAT_14c963e38) break;
      } while (puVar4 != (undefined *)0x0);
    }
    if (!bVar5) {
      return;
    }
  }
  else if ((*(ulonglong *)(puVar4 + 0x18) & DAT_14c963e40) == 0) {
    return;
  }
  lVar1 = (longlong)*(int *)(lVar1 + 0x44) + *param_2;
  if (*(int *)(param_3 * 0x10 + 8 + lVar1) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = *(undefined2 **)(param_3 * 0x10 + lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000143ea1abf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xd0))(param_1,puVar3);
  return;
}



// FUNCTION 143ea1bd5 FUN_143ea1bd5 body=962 status=ok
// SIG undefined FUN_143ea1bd5(void)

void FUN_143ea1bd5(longlong *param_1,longlong *param_2,int param_3)

{
  void *_Src;
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  void **ppvVar6;
  longlong lVar7;
  uint uVar8;
  undefined *puVar9;
  bool bVar10;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined *local_98;
  code *local_90;
  ulonglong *local_80;
  void *local_78;
  ulonglong uStack_70;
  ulonglong *local_68;
  ulonglong local_60;
  ulonglong *local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((param_2 != (longlong *)0x0) && (lVar7 = param_2[1], lVar7 != 0)) {
    puVar9 = *(undefined **)(lVar7 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c963e88) && (FUN_144b3d300(&DAT_14c963e88), DAT_14c963e88 == -1)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1))
      {
        local_98 = (undefined *)FUN_140342cba();
        local_90 = FUN_1468c7f1e;
        local_a0 = 0;
        local_a8 = 0x8001;
        FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
        atexit(FUN_14280c819);
        _Init_thread_footer(&DAT_14c951a88);
      }
      local_90 = FUN_140dafe7a;
      local_98 = &DAT_14c951a38;
      local_a0 = 0;
      local_a8 = 0xc001;
      FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0);
      atexit(FUN_142829758);
      _Init_thread_footer(&DAT_14c963e88);
    }
    if (DAT_14c963e40 == 0) {
      bVar10 = puVar9 != (undefined *)0x0;
      if (puVar9 != &DAT_14c963e38 && bVar10) {
        do {
          puVar9 = *(undefined **)(puVar9 + 0x30);
          bVar10 = puVar9 != (undefined *)0x0;
          if (puVar9 == &DAT_14c963e38) break;
        } while (puVar9 != (undefined *)0x0);
      }
      if (!bVar10) goto LAB_143ea1ef0;
    }
    else if ((*(ulonglong *)(puVar9 + 0x18) & DAT_14c963e40) == 0) goto LAB_143ea1ef0;
    local_78 = (void *)0x0;
    uStack_70 = 0;
    iVar5 = 0;
    local_60 = 0;
    local_68 = (ulonglong *)0x0;
    (**(code **)(*param_1 + 0x1c8))(param_1,&local_68,&local_60);
    uVar1 = local_60;
    local_4c = (uint)local_60;
    local_80 = local_68;
    local_58 = local_68;
    if (0 < (int)(uint)local_60) {
      iVar5 = 0;
      uVar8 = 0x7fffffff;
      uVar3 = (uint)local_60;
      do {
        if (uVar8 == 0) {
          iVar5 = -1;
          break;
        }
        iVar2 = iVar5;
        if (((((ulonglong)local_58 & 7) == 0) && (local_4c = uVar3, 7 < uVar3)) &&
           (uVar4 = uVar8, 7 < (int)uVar8)) {
          while (uVar8 = uVar4, iVar2 = iVar5, local_4c = uVar3,
                (*local_58 & 0x8080808080808080) == 0) {
            local_58 = local_58 + 1;
            iVar5 = iVar5 + 8;
            local_4c = uVar3 - 8;
            uVar8 = uVar4 - 8;
            bVar10 = (int)uVar3 < 0x10;
            uVar3 = local_4c;
            iVar2 = iVar5;
            if ((bVar10) || (bVar10 = uVar4 < 0x10, uVar4 = uVar8, bVar10)) break;
          }
        }
LAB_143ea1d52:
        do {
          iVar5 = iVar2;
          if (((int)uVar3 < 1) || ((int)uVar8 < 1)) break;
          uVar4 = FUN_14003e942(&local_58,&local_4c);
          uVar3 = local_4c;
          if (uVar4 < 0x10000) {
            uVar8 = uVar8 - 1;
            iVar2 = iVar5 + 1;
            if (0x7f < uVar4) goto LAB_143ea1d52;
          }
          else {
            if (1 < uVar8) {
              uVar8 = uVar8 - 2;
              iVar2 = iVar5 + 2;
              goto LAB_143ea1d52;
            }
            uVar8 = 0;
          }
          iVar5 = iVar5 + 1;
          iVar2 = iVar5;
        } while (((ulonglong)local_58 & 7) != 0);
      } while (0 < (int)uVar3);
    }
    FUN_1409ee492(&local_78,iVar5 + 1,1);
    *(undefined2 *)((longlong)local_78 + (longlong)iVar5 * 2) = 0;
    FUN_1446e71a3(local_78,(longlong)iVar5,local_80,uVar1 & 0xffffffff);
    _Src = local_78;
    ppvVar6 = (void **)((longlong)param_3 * (longlong)*(int *)(lVar7 + 0x34) +
                       (longlong)*(int *)(lVar7 + 0x44) + *param_2);
    if (ppvVar6 != &local_78) {
      iVar5 = (int)uStack_70;
      lVar7 = (longlong)(int)uStack_70;
      *(int *)(ppvVar6 + 1) = (int)uStack_70;
      if ((int)uStack_70 == 0 && *(int *)((longlong)ppvVar6 + 0xc) == 0) {
        *(undefined4 *)((longlong)ppvVar6 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(ppvVar6,uStack_70 & 0xffffffff);
        if (iVar5 != 0) {
          memcpy(*ppvVar6,_Src,lVar7 * 2);
        }
      }
    }
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143ea1ef0:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ea1f98 FUN_143ea1f98 body=300 status=ok
// SIG undefined FUN_143ea1f98(void)

undefined8 FUN_143ea1f98(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  bool bVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != 0) {
    puVar3 = *(undefined8 **)(lVar1 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951d20) && (FUN_144b3d300(&DAT_14c951d20), DAT_14c951d20 == -1)) {
      uVar2 = FUN_1446ddbd2();
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0,0x28001,0,uVar2,FUN_14067a048);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
    if (DAT_14c951cd8 == 0) {
      bVar4 = puVar3 != (undefined8 *)0x0;
      if (puVar3 != &DAT_14c951cd0 && bVar4) {
        do {
          puVar3 = (undefined8 *)puVar3[6];
          bVar4 = puVar3 != (undefined8 *)0x0;
          if (puVar3 == &DAT_14c951cd0) break;
        } while (puVar3 != (undefined8 *)0x0);
      }
      if (bVar4) goto LAB_143ea20a9;
    }
    else if ((puVar3[3] & DAT_14c951cd8) != 0) {
LAB_143ea20a9:
      *(bool *)param_3 =
           (*(byte *)((ulonglong)*(byte *)(lVar1 + 0x71) + param_2 + *(int *)(lVar1 + 0x44)) &
           *(byte *)(lVar1 + 0x73)) != 0;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143ea20cb FUN_143ea20cb body=442 status=ok
// SIG undefined FUN_143ea20cb(void)

longlong FUN_143ea20cb(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined *puVar3;
  bool bVar4;
  
  if ((param_1 == (longlong *)0x0) || (lVar2 = param_1[1], lVar2 == 0)) {
LAB_143ea2167:
    lVar2 = 0;
  }
  else {
    puVar3 = *(undefined **)(lVar2 + 8);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c963ee0) {
      FUN_144b3d300(&DAT_14c963ee0);
      if (DAT_14c963ee0 == -1) {
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110) < DAT_14c951a88) {
          FUN_144b3d300(&DAT_14c951a88);
          if (DAT_14c951a88 == -1) {
            uVar1 = FUN_140342cba();
            FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0,0x8001,0,uVar1,FUN_1468c7f1e);
            atexit(FUN_14280c819);
            _Init_thread_footer(&DAT_14c951a88);
          }
        }
        FUN_14000176a(&DAT_14c963e90,L"FTextProperty",0x40000000,0,0x40008001,0,&DAT_14c951a38,
                      FUN_140fb5c52);
        atexit(FUN_14282980e);
        _Init_thread_footer(&DAT_14c963ee0);
      }
    }
    if (DAT_14c963e98 == 0) {
      bVar4 = puVar3 != (undefined *)0x0;
      if (puVar3 != &DAT_14c963e90 && bVar4) {
        do {
          puVar3 = *(undefined **)(puVar3 + 0x30);
          bVar4 = puVar3 != (undefined *)0x0;
          if (puVar3 == &DAT_14c963e90) break;
        } while (puVar3 != (undefined *)0x0);
      }
      if (!bVar4) goto LAB_143ea2167;
    }
    else if ((*(ulonglong *)(puVar3 + 0x18) & DAT_14c963e98) == 0) goto LAB_143ea2167;
    lVar2 = param_2 * 0x10 + (longlong)*(int *)(lVar2 + 0x44) + *param_1;
  }
  return lVar2;
}



// FUNCTION 143ea2285 FUN_143ea2285 body=651 status=ok
// SIG undefined FUN_143ea2285(void)

void FUN_143ea2285(longlong *param_1,longlong *param_2,longlong param_3)

{
  code *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  undefined *puVar7;
  bool bVar8;
  
  if (param_2 == (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ea2359. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb8))(param_1);
    return;
  }
  lVar2 = param_2[1];
  if (lVar2 != 0) {
    puVar7 = *(undefined **)(lVar2 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c963ee0) && (FUN_144b3d300(&DAT_14c963ee0), DAT_14c963ee0 == -1)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1))
      {
        uVar5 = FUN_140342cba();
        FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0,0x8001,0,uVar5,FUN_1468c7f1e);
        atexit(FUN_14280c819);
        _Init_thread_footer(&DAT_14c951a88);
      }
      FUN_14000176a(&DAT_14c963e90,L"FTextProperty",0x40000000,0,0x40008001,0,&DAT_14c951a38,
                    FUN_140fb5c52);
      atexit(FUN_14282980e);
      _Init_thread_footer(&DAT_14c963ee0);
    }
    if (DAT_14c963e98 == 0) {
      bVar8 = puVar7 != (undefined *)0x0;
      if (puVar7 != &DAT_14c963e90 && bVar8) {
        do {
          puVar7 = *(undefined **)(puVar7 + 0x30);
          bVar8 = puVar7 != (undefined *)0x0;
          if (puVar7 == &DAT_14c963e90) break;
        } while (puVar7 != (undefined *)0x0);
      }
      if (bVar8) goto LAB_143ea22ee;
    }
    else if ((*(ulonglong *)(puVar7 + 0x18) & DAT_14c963e98) != 0) {
LAB_143ea22ee:
      lVar2 = (longlong)*(int *)(lVar2 + 0x44) + *param_2;
      plVar3 = *(longlong **)(param_3 * 0x10 + lVar2);
      if (*(code **)(*plVar3 + 0x50) != FUN_144828418) {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))();
      }
      FUN_1447a1fc0(plVar3);
      plVar3 = *(longlong **)(lVar2 + param_3 * 0x10);
      pcVar1 = *(code **)(*plVar3 + 0x28);
      if (pcVar1 == FUN_14482841c) {
        plVar4 = plVar3 + 3;
        if (plVar3[5] != 0) {
          plVar4 = (longlong *)(plVar3[5] + 8);
        }
      }
      else if (pcVar1 == (code *)&LAB_14010c34c) {
        plVar4 = plVar3 + 2;
      }
      else {
        plVar4 = (longlong *)(*pcVar1)(plVar3);
      }
      if ((int)plVar4[1] == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      else {
        puVar6 = (undefined2 *)*plVar4;
      }
                    /* WARNING: Could not recover jumptable at 0x000143ea23e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xd0))(param_1,puVar6);
      return;
    }
  }
  return;
}



// FUNCTION 143ea2510 FUN_143ea2510 body=817 status=ok
// SIG undefined FUN_143ea2510(void)

void FUN_143ea2510(undefined8 param_1,longlong *param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined *puVar4;
  bool bVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined *local_58;
  code *local_50;
  longlong *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_2 != (longlong *)0x0) && (lVar3 = param_2[1], lVar3 != 0)) {
    puVar4 = *(undefined **)(lVar3 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c963ee0) && (FUN_144b3d300(&DAT_14c963ee0), DAT_14c963ee0 == -1)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1))
      {
        local_58 = (undefined *)FUN_140342cba();
        local_50 = FUN_1468c7f1e;
        local_60 = 0;
        local_68 = 0x8001;
        FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
        atexit(FUN_14280c819);
        _Init_thread_footer(&DAT_14c951a88);
      }
      local_50 = FUN_140fb5c52;
      local_58 = &DAT_14c951a38;
      local_60 = 0;
      local_68 = 0x40008001;
      FUN_14000176a(&DAT_14c963e90,L"FTextProperty",0x40000000,0);
      atexit(FUN_14282980e);
      _Init_thread_footer(&DAT_14c963ee0);
    }
    if (DAT_14c963e98 == 0) {
      bVar5 = puVar4 != (undefined *)0x0;
      if (puVar4 != &DAT_14c963e90 && bVar5) {
        do {
          puVar4 = *(undefined **)(puVar4 + 0x30);
          bVar5 = puVar4 != (undefined *)0x0;
          if (puVar4 == &DAT_14c963e90) break;
        } while (puVar4 != (undefined *)0x0);
      }
      if (!bVar5) goto LAB_143ea25b6;
    }
    else if ((*(ulonglong *)(puVar4 + 0x18) & DAT_14c963e98) == 0) goto LAB_143ea25b6;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
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
    local_40 = DAT_14c844840;
    if (DAT_14c844840 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      else {
        (**(code **)(*DAT_14c844840 + 8))();
      }
    }
    local_38 = 0;
    FUN_1489e934f(param_1,&local_40);
    lVar2 = (longlong)*(int *)(lVar3 + 0x44) + *param_2;
    lVar3 = (longlong)param_3 * (longlong)*(int *)(lVar3 + 0x34);
    plVar1 = *(longlong **)(lVar3 + lVar2);
    if (plVar1 != local_40) {
      *(longlong **)(lVar2 + lVar3) = local_40;
      if (local_40 != (longlong *)0x0) {
        (**(code **)(*local_40 + 8))();
      }
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
    *(undefined4 *)(lVar2 + 8 + lVar3) = local_38;
    if (local_40 != (longlong *)0x0) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
LAB_143ea25b6:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ea2842 FUN_143ea2842 body=300 status=ok
// SIG undefined FUN_143ea2842(void)

undefined8 FUN_143ea2842(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  bool bVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != 0) {
    puVar3 = *(undefined8 **)(lVar1 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951d20) && (FUN_144b3d300(&DAT_14c951d20), DAT_14c951d20 == -1)) {
      uVar2 = FUN_1446ddbd2();
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0,0x28001,0,uVar2,FUN_14067a048);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
    if (DAT_14c951cd8 == 0) {
      bVar4 = puVar3 != (undefined8 *)0x0;
      if (puVar3 != &DAT_14c951cd0 && bVar4) {
        do {
          puVar3 = (undefined8 *)puVar3[6];
          bVar4 = puVar3 != (undefined8 *)0x0;
          if (puVar3 == &DAT_14c951cd0) break;
        } while (puVar3 != (undefined8 *)0x0);
      }
      if (bVar4) goto LAB_143ea2953;
    }
    else if ((puVar3[3] & DAT_14c951cd8) != 0) {
LAB_143ea2953:
      *(bool *)param_3 =
           (*(byte *)((ulonglong)*(byte *)(lVar1 + 0x71) + param_2 + *(int *)(lVar1 + 0x44)) &
           *(byte *)(lVar1 + 0x73)) != 0;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143ea2971 FUN_143ea2971 body=436 status=ok
// SIG undefined FUN_143ea2971(void)

longlong FUN_143ea2971(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  bool bVar4;
  
  if ((param_1 == (longlong *)0x0) || (lVar1 = param_1[1], lVar1 == 0)) {
LAB_143ea2a0a:
    lVar1 = 0;
  }
  else {
    puVar3 = *(undefined **)(lVar1 + 8);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c9520b0) {
      FUN_144b3d300(&DAT_14c9520b0);
      if (DAT_14c9520b0 == -1) {
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110) < DAT_14c951a88) {
          FUN_144b3d300(&DAT_14c951a88);
          if (DAT_14c951a88 == -1) {
            uVar2 = FUN_140342cba();
            FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0,0x8001,0,uVar2,FUN_1468c7f1e);
            atexit(FUN_14280c819);
            _Init_thread_footer(&DAT_14c951a88);
          }
        }
        FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0,0xa001,0,&DAT_14c951a38,FUN_1409e12a0
                     );
        atexit(FUN_142816ef9);
        _Init_thread_footer(&DAT_14c9520b0);
      }
    }
    if (DAT_14c952068 == 0) {
      bVar4 = puVar3 != (undefined *)0x0;
      if (puVar3 != &DAT_14c952060 && bVar4) {
        do {
          puVar3 = *(undefined **)(puVar3 + 0x30);
          bVar4 = puVar3 != (undefined *)0x0;
          if (puVar3 == &DAT_14c952060) break;
        } while (puVar3 != (undefined *)0x0);
      }
      if (!bVar4) goto LAB_143ea2a0a;
    }
    else if ((*(ulonglong *)(puVar3 + 0x18) & DAT_14c952068) == 0) goto LAB_143ea2a0a;
    lVar1 = (longlong)*(int *)(lVar1 + 0x44) + *param_1 + param_2 * 8;
  }
  return lVar1;
}



// FUNCTION 143ea2b25 FUN_143ea2b25 body=565 status=ok
// SIG undefined FUN_143ea2b25(void)

void FUN_143ea2b25(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined *puVar3;
  bool bVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined *local_58;
  code *local_50;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
  }
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    puVar3 = *(undefined **)(lVar1 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9520b0) && (FUN_144b3d300(&DAT_14c9520b0), DAT_14c9520b0 == -1)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1))
      {
        local_58 = (undefined *)FUN_140342cba();
        local_50 = FUN_1468c7f1e;
        local_60 = 0;
        local_68 = 0x8001;
        FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
        atexit(FUN_14280c819);
        _Init_thread_footer(&DAT_14c951a88);
      }
      local_50 = FUN_1409e12a0;
      local_58 = &DAT_14c951a38;
      local_60 = 0;
      local_68 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
    if (DAT_14c952068 == 0) {
      bVar4 = puVar3 != (undefined *)0x0;
      if (puVar3 != &DAT_14c952060 && bVar4) {
        do {
          puVar3 = *(undefined **)(puVar3 + 0x30);
          bVar4 = puVar3 != (undefined *)0x0;
          if (puVar3 == &DAT_14c952060) break;
        } while (puVar3 != (undefined *)0x0);
      }
      if (!bVar4) goto LAB_143ea2c3d;
    }
    else if ((*(ulonglong *)(puVar3 + 0x18) & DAT_14c952068) == 0) goto LAB_143ea2c3d;
    FUN_1400021e4((longlong)*(int *)(lVar1 + 0x44) + *param_2 + param_3 * 8,&local_40);
    puVar2 = local_40;
    if (local_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    (**(code **)(*param_1 + 0xd0))(param_1,puVar2);
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143ea2c3d:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ea2d73 FUN_143ea2d73 body=937 status=ok
// SIG undefined FUN_143ea2d73(void)

void FUN_143ea2d73(longlong *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined2 *puVar7;
  int iVar8;
  uint uVar9;
  undefined *puVar10;
  bool bVar11;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined *local_98;
  code *local_90;
  ulonglong *local_80;
  undefined2 *local_78;
  undefined8 uStack_70;
  ulonglong *local_68;
  ulonglong local_60;
  ulonglong *local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((param_2 != (longlong *)0x0) && (lVar1 = param_2[1], lVar1 != 0)) {
    puVar10 = *(undefined **)(lVar1 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9520b0) && (FUN_144b3d300(&DAT_14c9520b0), DAT_14c9520b0 == -1)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1))
      {
        local_98 = (undefined *)FUN_140342cba();
        local_90 = FUN_1468c7f1e;
        local_a0 = 0;
        local_a8 = 0x8001;
        FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
        atexit(FUN_14280c819);
        _Init_thread_footer(&DAT_14c951a88);
      }
      local_90 = FUN_1409e12a0;
      local_98 = &DAT_14c951a38;
      local_a0 = 0;
      local_a8 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
    if (DAT_14c952068 == 0) {
      bVar11 = puVar10 != (undefined *)0x0;
      if (puVar10 != &DAT_14c952060 && bVar11) {
        do {
          puVar10 = *(undefined **)(puVar10 + 0x30);
          bVar11 = puVar10 != (undefined *)0x0;
          if (puVar10 == &DAT_14c952060) break;
        } while (puVar10 != (undefined *)0x0);
      }
      if (!bVar11) goto LAB_143ea3075;
    }
    else if ((*(ulonglong *)(puVar10 + 0x18) & DAT_14c952068) == 0) goto LAB_143ea3075;
    local_78 = (undefined2 *)0x0;
    uStack_70 = 0;
    iVar8 = 0;
    local_60 = 0;
    local_68 = (ulonglong *)0x0;
    (**(code **)(*param_1 + 0x1c8))(param_1,&local_68,&local_60);
    uVar2 = local_60;
    local_4c = (uint)local_60;
    local_80 = local_68;
    local_58 = local_68;
    if (0 < (int)(uint)local_60) {
      iVar8 = 0;
      uVar9 = 0x7fffffff;
      uVar5 = (uint)local_60;
      do {
        if (uVar9 == 0) {
          iVar8 = -1;
          break;
        }
        iVar4 = iVar8;
        if (((((ulonglong)local_58 & 7) == 0) && (local_4c = uVar5, 7 < uVar5)) &&
           (uVar6 = uVar9, 7 < (int)uVar9)) {
          while (uVar9 = uVar6, iVar4 = iVar8, local_4c = uVar5,
                (*local_58 & 0x8080808080808080) == 0) {
            local_58 = local_58 + 1;
            iVar8 = iVar8 + 8;
            local_4c = uVar5 - 8;
            uVar9 = uVar6 - 8;
            bVar11 = (int)uVar5 < 0x10;
            uVar5 = local_4c;
            iVar4 = iVar8;
            if ((bVar11) || (bVar11 = uVar6 < 0x10, uVar6 = uVar9, bVar11)) break;
          }
        }
LAB_143ea2ef0:
        do {
          iVar8 = iVar4;
          if (((int)uVar5 < 1) || ((int)uVar9 < 1)) break;
          uVar6 = FUN_14003e942(&local_58,&local_4c);
          uVar5 = local_4c;
          if (uVar6 < 0x10000) {
            uVar9 = uVar9 - 1;
            iVar4 = iVar8 + 1;
            if (0x7f < uVar6) goto LAB_143ea2ef0;
          }
          else {
            if (1 < uVar9) {
              uVar9 = uVar9 - 2;
              iVar4 = iVar8 + 2;
              goto LAB_143ea2ef0;
            }
            uVar9 = 0;
          }
          iVar8 = iVar8 + 1;
          iVar4 = iVar8;
        } while (((ulonglong)local_58 & 7) != 0);
      } while (0 < (int)uVar5);
    }
    FUN_1409ee492(&local_78,iVar8 + 1,1);
    local_78[iVar8] = 0;
    FUN_1446e71a3(local_78,(longlong)iVar8,local_80,uVar2 & 0xffffffff);
    puVar7 = local_78;
    if ((int)uStack_70 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_58,puVar7,1);
    puVar3 = local_58;
    if (local_78 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    *(ulonglong **)
     ((longlong)param_3 * (longlong)*(int *)(lVar1 + 0x34) +
     (longlong)*(int *)(lVar1 + 0x44) + *param_2) = puVar3;
  }
LAB_143ea3075:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ea311f FUN_143ea311f body=1396 status=ok
// SIG undefined FUN_143ea311f(void)

void FUN_143ea311f(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  ulonglong uVar15;
  bool bVar16;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar15 = (longlong)param_2 - (longlong)param_1;
  while (0x100 < (longlong)uVar15) {
    if ((longlong)param_3 < 1) {
      uVar9 = uVar15 >> 4;
      do {
        uVar11 = uVar9 - 1;
        local_48 = (undefined8 *)param_1[uVar11];
        param_1[uVar11] = 0;
        FUN_143ea3694(param_1,uVar11,uVar15 >> 3,&local_48);
        if (local_48 != (undefined8 *)0x0) {
          (**(code **)*local_48)(local_48,1);
        }
        bVar16 = 1 < uVar9;
        uVar9 = uVar11;
      } while (bVar16);
      lVar10 = (longlong)param_2 - (longlong)param_1;
      if (8 < lVar10) {
        do {
          param_2 = param_2 + -1;
          local_48 = (undefined8 *)*param_2;
          *param_2 = 0;
          lVar2 = *param_1;
          *param_1 = 0;
          puVar5 = (undefined8 *)*param_2;
          *param_2 = lVar2;
          if (puVar5 != (undefined8 *)0x0) {
            (**(code **)*puVar5)(puVar5,1);
          }
          lVar10 = lVar10 + -8;
          FUN_143ea3694(param_1,0,lVar10 >> 3,&local_48);
          if (local_48 != (undefined8 *)0x0) {
            (**(code **)*local_48)();
          }
        } while (8 < lVar10);
      }
      goto LAB_143ea366e;
    }
    plVar4 = param_1 + (uVar15 >> 4);
    plVar6 = param_2 + -1;
    lVar10 = (longlong)plVar6 - (longlong)param_1 >> 3;
    if (lVar10 < 0x29) {
      lVar10 = *plVar4;
      iVar12 = *(int *)(lVar10 + 0x10);
      if (*(int *)(*param_1 + 0x10) < iVar12) {
        *plVar4 = *param_1;
        *param_1 = lVar10;
        lVar10 = *plVar4;
        iVar12 = *(int *)(lVar10 + 0x10);
      }
      lVar2 = *plVar6;
      if (iVar12 < *(int *)(lVar2 + 0x10)) {
        *plVar6 = lVar10;
        *plVar4 = lVar2;
        if (*(int *)(*param_1 + 0x10) < *(int *)(lVar2 + 0x10)) {
          *plVar4 = *param_1;
          *param_1 = lVar2;
        }
      }
    }
    else {
      uVar11 = lVar10 + 1;
      uVar9 = uVar11 >> 3;
      lVar10 = *(longlong *)((longlong)param_1 + (uVar11 & 0xfffffffffffffff8));
      iVar12 = *(int *)(lVar10 + 0x10);
      if (*(int *)(*param_1 + 0x10) < iVar12) {
        param_1[uVar9] = *param_1;
        *param_1 = lVar10;
        lVar10 = param_1[uVar9];
        iVar12 = *(int *)(lVar10 + 0x10);
      }
      lVar2 = param_1[uVar9 * 2];
      if (iVar12 < *(int *)(lVar2 + 0x10)) {
        param_1[uVar9 * 2] = lVar10;
        param_1[uVar9] = lVar2;
        if (*(int *)(*param_1 + 0x10) < *(int *)(lVar2 + 0x10)) {
          param_1[uVar9] = *param_1;
          *param_1 = lVar2;
        }
      }
      lVar10 = *plVar4;
      iVar12 = *(int *)(lVar10 + 0x10);
      if (*(int *)(plVar4[-uVar9] + 0x10) < iVar12) {
        *plVar4 = plVar4[-uVar9];
        plVar4[-uVar9] = lVar10;
        lVar10 = *plVar4;
        iVar12 = *(int *)(lVar10 + 0x10);
      }
      lVar2 = plVar4[uVar9];
      if (iVar12 < *(int *)(lVar2 + 0x10)) {
        plVar4[uVar9] = lVar10;
        *plVar4 = lVar2;
        if (*(int *)(plVar4[-uVar9] + 0x10) < *(int *)(lVar2 + 0x10)) {
          *plVar4 = plVar4[-uVar9];
          plVar4[-uVar9] = lVar2;
        }
      }
      lVar10 = plVar6[-uVar9];
      iVar12 = *(int *)(lVar10 + 0x10);
      if (*(int *)(plVar6[uVar9 * -2] + 0x10) < iVar12) {
        plVar6[-uVar9] = plVar6[uVar9 * -2];
        plVar6[uVar9 * -2] = lVar10;
        lVar10 = plVar6[-uVar9];
        iVar12 = *(int *)(lVar10 + 0x10);
      }
      lVar2 = *plVar6;
      if (iVar12 < *(int *)(lVar2 + 0x10)) {
        *plVar6 = lVar10;
        plVar6[-uVar9] = lVar2;
        if (*(int *)(plVar6[uVar9 * -2] + 0x10) < *(int *)(lVar2 + 0x10)) {
          plVar6[-uVar9] = plVar6[uVar9 * -2];
          plVar6[uVar9 * -2] = lVar2;
        }
      }
      lVar10 = *plVar4;
      iVar12 = *(int *)(lVar10 + 0x10);
      if (*(int *)(param_1[uVar9] + 0x10) < iVar12) {
        *plVar4 = param_1[uVar9];
        param_1[uVar9] = lVar10;
        lVar10 = *plVar4;
        iVar12 = *(int *)(lVar10 + 0x10);
      }
      lVar2 = plVar6[-uVar9];
      if (iVar12 < *(int *)(lVar2 + 0x10)) {
        plVar6[-uVar9] = lVar10;
        *plVar4 = lVar2;
        if (*(int *)(param_1[uVar9] + 0x10) < *(int *)(lVar2 + 0x10)) {
          *plVar4 = param_1[uVar9];
          param_1[uVar9] = lVar2;
        }
      }
    }
    do {
      plVar6 = plVar4;
      if (plVar6 <= param_1) break;
      plVar4 = plVar6 + -1;
    } while (*(int *)(*plVar6 + 0x10) == *(int *)(plVar6[-1] + 0x10));
    plVar4 = param_1 + (uVar15 >> 4);
    do {
      plVar4 = plVar4 + 1;
      plVar8 = plVar6;
      plVar14 = plVar4;
      if (param_2 <= plVar4) break;
    } while (*(int *)(*plVar6 + 0x10) == *(int *)(*plVar4 + 0x10));
LAB_143ea3357:
    plVar7 = plVar6;
    if (plVar4 < param_2) {
      iVar12 = *(int *)(*plVar4 + 0x10);
      if (*(int *)(*plVar8 + 0x10) <= iVar12) {
        if (*(int *)(*plVar8 + 0x10) < iVar12) goto joined_r0x000143ea338c;
        if (plVar4 != plVar14) {
          lVar10 = *plVar14;
          *plVar14 = *plVar4;
          *plVar4 = lVar10;
        }
        plVar14 = plVar14 + 1;
      }
      plVar4 = plVar4 + 1;
      goto LAB_143ea3357;
    }
joined_r0x000143ea338c:
    while (plVar6 = plVar7, param_1 < plVar6) {
      plVar7 = plVar6 + -1;
      iVar12 = *(int *)(plVar6[-1] + 0x10);
      if (iVar12 <= *(int *)(*plVar8 + 0x10)) {
        if (iVar12 < *(int *)(*plVar8 + 0x10)) break;
        plVar1 = plVar8 + -1;
        bVar16 = plVar6 != plVar8;
        plVar8 = plVar1;
        if (bVar16) {
          lVar10 = *plVar1;
          *plVar1 = plVar6[-1];
          *plVar7 = lVar10;
        }
      }
    }
    if ((plVar4 != param_2) || (plVar6 != param_1)) {
      if (plVar6 == param_1) {
        lVar10 = *plVar8;
        if (plVar14 != plVar4) {
          *plVar8 = *plVar14;
          *plVar14 = lVar10;
          lVar10 = *plVar8;
        }
        *plVar8 = *plVar4;
        *plVar4 = lVar10;
        plVar4 = plVar4 + 1;
        plVar8 = plVar8 + 1;
        plVar14 = plVar14 + 1;
      }
      else {
        plVar7 = plVar6 + -1;
        if (plVar4 == param_2) {
          plVar1 = plVar8 + -1;
          lVar10 = plVar8[-1];
          if (plVar6 != plVar8) {
            lVar10 = *plVar7;
            *plVar7 = plVar8[-1];
            *plVar1 = lVar10;
          }
          *plVar1 = plVar14[-1];
          plVar14[-1] = lVar10;
          plVar6 = plVar7;
          plVar8 = plVar1;
          plVar14 = plVar14 + -1;
        }
        else {
          lVar10 = *plVar4;
          *plVar4 = *plVar7;
          *plVar7 = lVar10;
          plVar4 = plVar4 + 1;
          plVar6 = plVar7;
        }
      }
      goto LAB_143ea3357;
    }
    param_3 = (param_3 >> 2) + (param_3 >> 1);
    if ((longlong)plVar8 - (longlong)param_1 < (longlong)param_2 - (longlong)plVar14) {
      FUN_143ea311f(param_1,plVar8,param_3);
      plVar8 = param_2;
      param_1 = plVar14;
    }
    else {
      FUN_143ea311f(plVar14,param_2,param_3);
    }
    param_2 = plVar8;
    uVar15 = (longlong)plVar8 - (longlong)param_1;
  }
  if ((param_1 != param_2) && (plVar6 = param_1 + 1, plVar6 != param_2)) {
    lVar10 = 8;
    do {
      lVar2 = *plVar6;
      *plVar6 = 0;
      lVar13 = lVar10;
      if (*(int *)(*param_1 + 0x10) < *(int *)(lVar2 + 0x10)) {
        do {
          uVar3 = *(undefined8 *)((longlong)param_1 + lVar13 + -8);
          puVar5 = *(undefined8 **)((longlong)param_1 + lVar13);
          *(undefined8 *)((longlong)param_1 + lVar13 + -8) = 0;
          *(undefined8 *)((longlong)param_1 + lVar13) = uVar3;
          if (puVar5 != (undefined8 *)0x0) {
            (**(code **)*puVar5)(puVar5,1);
          }
          lVar13 = lVar13 + -8;
        } while (lVar13 != 0);
        puVar5 = (undefined8 *)*param_1;
        *param_1 = lVar2;
LAB_143ea3577:
        if (puVar5 != (undefined8 *)0x0) {
          (**(code **)*puVar5)(puVar5,1);
        }
      }
      else {
        lVar13 = plVar6[-1];
        plVar4 = plVar6;
        if (*(int *)(lVar13 + 0x10) < *(int *)(lVar2 + 0x10)) {
          do {
            plVar4[-1] = 0;
            puVar5 = (undefined8 *)*plVar4;
            *plVar4 = lVar13;
            if (puVar5 != (undefined8 *)0x0) {
              (**(code **)*puVar5)(puVar5,1);
            }
            lVar13 = plVar4[-2];
            plVar4 = plVar4 + -1;
          } while (*(int *)(lVar13 + 0x10) < *(int *)(lVar2 + 0x10));
          puVar5 = (undefined8 *)*plVar4;
          *plVar4 = lVar2;
          goto LAB_143ea3577;
        }
        *plVar6 = lVar2;
      }
      plVar6 = plVar6 + 1;
      lVar10 = lVar10 + 8;
    } while (plVar6 != param_2);
  }
LAB_143ea366e:
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ea3694 FUN_143ea3694 body=322 status=ok
// SIG undefined FUN_143ea3694(void)

void FUN_143ea3694(longlong param_1,longlong param_2,ulonglong param_3,longlong *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar1 = param_3 - 1;
  lVar5 = lVar1 >> 1;
  lVar4 = param_2;
  while (lVar4 < lVar5) {
    if (*(int *)(*(longlong *)(param_1 + 8 + lVar4 * 0x10) + 0x10) <
        *(int *)(*(longlong *)(param_1 + 0x10 + lVar4 * 0x10) + 0x10)) {
      lVar6 = lVar4 * 2 + 1;
    }
    else {
      lVar6 = lVar4 * 2 + 2;
    }
    uVar2 = *(undefined8 *)(param_1 + lVar6 * 8);
    *(undefined8 *)(param_1 + lVar6 * 8) = 0;
    puVar3 = *(undefined8 **)(param_1 + lVar4 * 8);
    *(undefined8 *)(param_1 + lVar4 * 8) = uVar2;
    lVar4 = lVar6;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (((param_3 & 1) == 0) && (lVar4 == lVar5)) {
    uVar2 = *(undefined8 *)(param_1 + -8 + param_3 * 8);
    *(undefined8 *)(param_1 + -8 + param_3 * 8) = 0;
    puVar3 = *(undefined8 **)(param_1 + lVar5 * 8);
    *(undefined8 *)(param_1 + lVar5 * 8) = uVar2;
    lVar4 = lVar1;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  while (param_2 < lVar4) {
    lVar5 = lVar4 + -1 >> 1;
    lVar1 = *(longlong *)(param_1 + lVar5 * 8);
    if (*(int *)(lVar1 + 0x10) <= *(int *)(*param_4 + 0x10)) break;
    *(undefined8 *)(param_1 + lVar5 * 8) = 0;
    puVar3 = *(undefined8 **)(param_1 + lVar4 * 8);
    *(longlong *)(param_1 + lVar4 * 8) = lVar1;
    lVar4 = lVar5;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  lVar1 = *param_4;
  *param_4 = 0;
  puVar3 = *(undefined8 **)(param_1 + lVar4 * 8);
  *(longlong *)(param_1 + lVar4 * 8) = lVar1;
  if (puVar3 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ea37c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar3)(puVar3,1);
    return;
  }
  return;
}



// FUNCTION 143ea37d6 FUN_143ea37d6 body=74 status=ok
// SIG undefined FUN_143ea37d6(void)

void FUN_143ea37d6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  param_1 = (undefined8 *)*param_1;
  *param_1 = 0;
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    param_1[1] = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000143ea3815. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143ea382a FUN_143ea382a body=12 status=ok
// SIG undefined FUN_143ea382a(void)

void FUN_143ea382a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143ea3833. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143ea3836 FUN_143ea3836 body=29 status=ok
// SIG undefined FUN_143ea3836(void)

undefined8 FUN_143ea3836(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ea387a FUN_143ea387a body=282 status=ok
// SIG undefined FUN_143ea387a(void)

undefined8 * FUN_143ea387a(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143ea3853);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143ea3994 FUN_143ea3994 body=126 status=ok
// SIG undefined FUN_143ea3994(void)

void FUN_143ea3994(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  puVar3 = (undefined8 *)param_1[0x15];
  *puVar3 = 0;
  plVar4 = (longlong *)puVar3[1];
  if (plVar4 != (longlong *)0x0) {
    puVar3[1] = 0;
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
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(param_1 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143ea3a07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143ea3a12 FUN_143ea3a12 body=30 status=ok
// SIG undefined FUN_143ea3a12(void)

void * FUN_143ea3a12(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 143ea3a30 FUN_143ea3a30 body=622 status=ok
// SIG undefined FUN_143ea3a30(void)

void FUN_143ea3a30(longlong param_1,longlong *param_2)

{
  bool bVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  longlong *plVar9;
  uint uVar10;
  int iVar11;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  longlong local_80;
  longlong local_78 [2];
  ulonglong *local_68;
  ulonglong local_60;
  ulonglong *local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78[0] = 0;
  local_78[1] = 0;
  iVar11 = 0;
  local_80 = param_1;
  plVar9 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  local_60 = 0;
  local_68 = (ulonglong *)0x0;
  (**(code **)(*plVar9 + 0x1c8))(plVar9,&local_68,&local_60);
  uVar3 = local_60;
  puVar2 = local_68;
  local_4c = (uint)local_60;
  local_58 = local_68;
  if (0 < (int)(uint)local_60) {
    iVar11 = 0;
    uVar10 = 0x7fffffff;
    uVar6 = (uint)local_60;
    do {
      if (uVar10 == 0) {
        iVar11 = -1;
        break;
      }
      iVar4 = iVar11;
      if (((((ulonglong)local_58 & 7) == 0) && (local_4c = uVar6, 7 < uVar6)) &&
         (uVar7 = uVar10, 7 < (int)uVar10)) {
        while (uVar10 = uVar7, iVar4 = iVar11, local_4c = uVar6,
              (*local_58 & 0x8080808080808080) == 0) {
          local_58 = local_58 + 1;
          iVar11 = iVar11 + 8;
          local_4c = uVar6 - 8;
          uVar10 = uVar7 - 8;
          bVar1 = (int)uVar6 < 0x10;
          uVar6 = local_4c;
          iVar4 = iVar11;
          if ((bVar1) || (bVar1 = uVar7 < 0x10, uVar7 = uVar10, bVar1)) break;
        }
      }
LAB_143ea3b19:
      do {
        iVar11 = iVar4;
        if (((int)uVar6 < 1) || ((int)uVar10 < 1)) break;
        uVar7 = FUN_14003e942(&local_58,&local_4c);
        uVar6 = local_4c;
        if (uVar7 < 0x10000) {
          uVar10 = uVar10 - 1;
          iVar4 = iVar11 + 1;
          if (0x7f < uVar7) goto LAB_143ea3b19;
        }
        else {
          if (1 < uVar10) {
            uVar10 = uVar10 - 2;
            iVar4 = iVar11 + 2;
            goto LAB_143ea3b19;
          }
          uVar10 = 0;
        }
        iVar11 = iVar11 + 1;
        iVar4 = iVar11;
      } while (((ulonglong)local_58 & 7) != 0);
    } while (0 < (int)uVar6);
  }
  FUN_1409ee492(local_78,iVar11 + 1,1);
  *(undefined2 *)(local_78[0] + (longlong)iVar11 * 2) = 0;
  FUN_1446e71a3(local_78[0],(longlong)iVar11,puVar2,uVar3 & 0xffffffff);
  plVar9 = (longlong *)(**(code **)(*param_2 + 8))(param_2,1);
  (**(code **)(*plVar9 + 0x1d8))(plVar9,&local_58);
  plVar9 = (longlong *)(**(code **)(*param_2 + 8))(param_2,2);
  (**(code **)(*plVar9 + 0x1d8))(plVar9,&local_60);
  plVar9 = (longlong *)(**(code **)(*param_2 + 8))(param_2,3);
  (**(code **)(*plVar9 + 0x218))(plVar9,&local_68);
  cVar5 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar5 == '\0') {
    local_88 = local_68._0_4_;
    uVar8 = (**(code **)(*(longlong *)**(undefined8 **)(local_80 + 8) + 0x10))
                      ((longlong *)**(undefined8 **)(local_80 + 8),local_78,local_58._0_4_,
                       (uint)local_60);
    plVar9 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2);
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x140))(plVar9,uVar8);
      (**(code **)(*param_2 + 0x18))(param_2);
    }
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ea3ca6 FUN_143ea3ca6 body=30 status=ok
// SIG undefined FUN_143ea3ca6(void)

void * FUN_143ea3ca6(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 143ea3cc4 FUN_143ea3cc4 body=36 status=ok
// SIG undefined FUN_143ea3cc4(void)

void FUN_143ea3cc4(longlong param_1,longlong *param_2)

{
  (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 8) + 0x18))();
                    /* WARNING: Could not recover jumptable at 0x000143ea3ce4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



// FUNCTION 143ea3cee FUN_143ea3cee body=30 status=ok
// SIG undefined FUN_143ea3cee(void)

void * FUN_143ea3cee(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 143ea3d0c FUN_143ea3d0c body=77 status=ok
// SIG undefined FUN_143ea3d0c(void)

void FUN_143ea3d0c(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  
  uVar1 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 8) + 0x20))();
  plVar2 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x140))(plVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x000143ea3d4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x18))(param_2);
    return;
  }
  return;
}



// FUNCTION 143ea3d60 FUN_143ea3d60 body=57 status=ok
// SIG undefined FUN_143ea3d60(void)

undefined8 * FUN_143ea3d60(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4564e0;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ea3dae FUN_143ea3dae body=189 status=ok
// SIG undefined FUN_143ea3dae(void)

void FUN_143ea3dae(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e020b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b4564e0;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  uVar4 = *(undefined4 *)(param_1 + 0x28);
  uVar5 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((longlong)puVar2 + 0x24) = uVar3;
  *(undefined4 *)(puVar2 + 5) = uVar4;
  *(undefined4 *)((longlong)puVar2 + 0x2c) = uVar5;
  puVar2[6] = 0;
  iVar1 = *(int *)(param_1 + 0x38);
  _Src = *(void **)(param_1 + 0x30);
  *(int *)(puVar2 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 6,iVar1,0);
    memcpy((void *)puVar2[6],_Src,(longlong)iVar1 * 2);
  }
  puVar2[8] = *(undefined8 *)(param_1 + 0x40);
  return;
}



// FUNCTION 143ea3e6c FUN_143ea3e6c body=189 status=ok
// SIG undefined FUN_143ea3e6c(void)

void FUN_143ea3e6c(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e020b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b4564e0;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  uVar4 = *(undefined4 *)(param_1 + 0x28);
  uVar5 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((longlong)puVar2 + 0x24) = uVar3;
  *(undefined4 *)(puVar2 + 5) = uVar4;
  *(undefined4 *)((longlong)puVar2 + 0x2c) = uVar5;
  puVar2[6] = 0;
  iVar1 = *(int *)(param_1 + 0x38);
  _Src = *(void **)(param_1 + 0x30);
  *(int *)(puVar2 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 6,iVar1,0);
    memcpy((void *)puVar2[6],_Src,(longlong)iVar1 * 2);
  }
  puVar2[8] = *(undefined8 *)(param_1 + 0x40);
  return;
}



// FUNCTION 143ea3f2a FUN_143ea3f2a body=245 status=ok
// SIG undefined FUN_143ea3f2a(void)

void FUN_143ea3f2a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  void *_Src;
  DWORD DVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_149e020b0;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14b4564e0;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  DVar3 = *(DWORD *)(param_1 + 0x24);
  DVar4 = *(DWORD *)(param_1 + 0x28);
  uVar5 = *(undefined4 *)(param_1 + 0x2c);
  p_Var2->EntryCount = *(DWORD *)(param_1 + 0x20);
  p_Var2->ContentionCount = DVar3;
  p_Var2->Flags = DVar4;
  p_Var2->CreatorBackTraceIndexHigh = (short)uVar5;
  p_Var2->SpareWORD = (short)((uint)uVar5 >> 0x10);
  p_Var2[1].Type = 0;
  p_Var2[1].CreatorBackTraceIndex = 0;
  *(undefined4 *)&p_Var2[1].field_0x4 = 0;
  iVar1 = *(int *)(param_1 + 0x38);
  _Src = *(void **)(param_1 + 0x30);
  *(int *)&p_Var2[1].CriticalSection = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)&p_Var2[1].CriticalSection + 4) = 0;
  }
  else {
    FUN_1446dd670(p_Var2 + 1,iVar1,0);
    memcpy(*(void **)(p_Var2 + 1),_Src,(longlong)iVar1 * 2);
  }
  p_Var2[1].ProcessLocksList.Flink = *(_LIST_ENTRY **)(param_1 + 0x40);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ea4009. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143ea402a FUN_143ea402a body=20 status=ok
// SIG undefined FUN_143ea402a(void)

undefined1 FUN_143ea402a(longlong param_1)

{
  FUN_143ea403e(param_1 + 0x18);
  return 1;
}



// FUNCTION 143ea403e FUN_143ea403e body=75 status=ok
// SIG undefined FUN_143ea403e(void)

void FUN_143ea403e(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = *(longlong **)(param_1 + 0x28);
  lVar3 = FUN_14090ae24();
  if ((lVar3 != 0) && ((*(uint *)(lVar3 + 8) >> 0x1e & 1) == 0)) {
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_147a76346(plVar2,iVar1);
    }
    *(longlong *)(*plVar2 + (longlong)iVar1 * 8) = lVar3;
  }
  return;
}



// FUNCTION 143ea408a FUN_143ea408a body=629 status=ok
// SIG undefined FUN_143ea408a(void)

void FUN_143ea408a(longlong *param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStack_78 [47];
  undefined1 local_49;
  char *local_48;
  undefined4 local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar8 = (longlong *)*param_1;
  plVar12 = (longlong *)plVar8[1];
  bVar2 = true;
  if (plVar12 == (longlong *)0x0) {
LAB_143ea4116:
    plVar12 = (longlong *)0x0;
LAB_143ea411c:
    uVar6 = (**(code **)(*(longlong *)param_1[2] + 0x38))((longlong *)param_1[2],&local_49);
    lVar7 = FUN_14001cc68(0x10,0x10);
    local_48 = "CoherentRenderingPlugin";
    local_40 = 0x17;
    local_3c = 0;
    uVar5 = FUN_14001a6c0(&local_48,1);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
    plVar8 = (longlong *)FUN_1401e3324(&DAT_14c874628,uVar5);
    uVar9 = (**(code **)(*plVar8 + 0x48))(plVar8);
    FUN_1465683a4(lVar7,uVar6,uVar9);
    plVar10 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar10[1] = (longlong)&DAT_100000001;
    *plVar10 = (longlong)&PTR_FUN_14b456550;
    plVar10[2] = lVar7;
    plVar8 = (longlong *)*param_1;
    *plVar8 = lVar7;
    plVar11 = (longlong *)plVar8[1];
    if (plVar11 != plVar10) {
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
        UNLOCK();
        plVar11 = (longlong *)plVar8[1];
      }
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar11 + 0x10))();
        }
      }
      plVar8[1] = (longlong)plVar10;
    }
    plVar8 = (longlong *)param_1[1];
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    plVar11 = (longlong *)plVar8[1];
    *plVar8 = lVar7;
    plVar8[1] = (longlong)plVar10;
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
    if (bVar2) goto LAB_143ea4293;
  }
  else {
    iVar4 = (int)plVar12[1];
    do {
      if (iVar4 == 0) goto LAB_143ea4116;
      LOCK();
      iVar3 = (int)plVar12[1];
      bVar13 = iVar4 == iVar3;
      if (bVar13) {
        *(int *)(plVar12 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar13);
    lVar7 = *plVar8;
    if (lVar7 == 0) {
      bVar2 = false;
      goto LAB_143ea411c;
    }
    plVar8 = (longlong *)param_1[1];
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    plVar11 = (longlong *)plVar8[1];
    *plVar8 = lVar7;
    plVar8[1] = (longlong)plVar12;
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
  }
  LOCK();
  plVar8 = plVar12 + 1;
  *(int *)plVar8 = (int)*plVar8 + -1;
  UNLOCK();
  if ((int)*plVar8 == 0) {
    (**(code **)*plVar12)(plVar12);
    LOCK();
    piVar1 = (int *)((longlong)plVar12 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
  }
LAB_143ea4293:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ea4310 FUN_143ea4310 body=12 status=ok
// SIG undefined FUN_143ea4310(void)

void FUN_143ea4310(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143ea4319. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143ea431c FUN_143ea431c body=29 status=ok
// SIG undefined FUN_143ea431c(void)

undefined8 FUN_143ea431c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ea433a FUN_143ea433a body=282 status=ok
// SIG undefined FUN_143ea433a(void)

undefined8 * FUN_143ea433a(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143ea3853);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143ea4454 FUN_143ea4454 body=91 status=ok
// SIG undefined FUN_143ea4454(void)

void FUN_143ea4454(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_143ea408a(0xa8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_143ea408a(param_1 + 0x15);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143ea4490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143ea44b0 FUN_143ea44b0 body=4192 status=ok
// SIG undefined FUN_143ea44b0(void)

void FUN_143ea44b0(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                  undefined4 param_5)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  bool bVar6;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c952210) && (FUN_144b3d300(&DAT_14c952210), DAT_14c952210 == -1)) {
    FUN_14475b26a();
    FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0,0x1008081,0,&DAT_14c9520b8,FUN_1405ebbb2);
    atexit(FUN_142816fad);
    _Init_thread_footer(&DAT_14c952210);
  }
  puVar3 = *(undefined8 **)(param_3 + 8);
  if (DAT_14c9521c8 == 0) {
    bVar6 = puVar3 != (undefined8 *)0x0;
    if (puVar3 != &DAT_14c9521c0 && bVar6) {
      do {
        puVar3 = (undefined8 *)puVar3[6];
        bVar6 = puVar3 != (undefined8 *)0x0;
        if (puVar3 == &DAT_14c9521c0) break;
      } while (puVar3 != (undefined8 *)0x0);
    }
    if (bVar6) goto LAB_143ea45d4;
  }
  else if ((puVar3[3] & DAT_14c9521c8) != 0) {
LAB_143ea45d4:
    FUN_1489ea4f0(param_1,param_2,param_3,param_4,param_5);
    goto LAB_143ea48f0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c952268) && (FUN_144b3d300(&DAT_14c952268), DAT_14c952268 == -1)) {
    FUN_14475b26a();
    FUN_14000176a(&DAT_14c952218,L"FInt64Property",0x400000,0,0x1408001,0,&DAT_14c9520b8,
                  FUN_1459738d6);
    atexit(FUN_142816fda);
    _Init_thread_footer(&DAT_14c952268);
  }
  puVar4 = *(undefined **)(param_3 + 8);
  if (DAT_14c952220 == 0) {
    bVar6 = puVar4 != (undefined *)0x0;
    if (puVar4 != &DAT_14c952218 && bVar6) {
      do {
        puVar4 = *(undefined **)(puVar4 + 0x30);
        bVar6 = puVar4 != (undefined *)0x0;
        if (puVar4 == &DAT_14c952218) break;
      } while (puVar4 != (undefined *)0x0);
    }
    if (bVar6) goto LAB_143ea4627;
  }
  else if ((*(ulonglong *)(puVar4 + 0x18) & DAT_14c952220) != 0) {
LAB_143ea4627:
    FUN_1489ea568(param_1,param_2,param_3,param_4,param_5);
    goto LAB_143ea48f0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951d78) && (FUN_144b3d300(&DAT_14c951d78), DAT_14c951d78 == -1)) {
    FUN_14475b26a();
    FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0,0x1008041,0,&DAT_14c9520b8,FUN_1409f1a5c);
    atexit(FUN_14281201f);
    _Init_thread_footer(&DAT_14c951d78);
  }
  puVar4 = *(undefined **)(param_3 + 8);
  if (DAT_14c951d30 == 0) {
    bVar6 = puVar4 != (undefined *)0x0;
    if (puVar4 != &DAT_14c951d28 && bVar6) {
      do {
        puVar4 = *(undefined **)(puVar4 + 0x30);
        bVar6 = puVar4 != (undefined *)0x0;
        if (puVar4 == &DAT_14c951d28) break;
      } while (puVar4 != (undefined *)0x0);
    }
    if (!bVar6) goto LAB_143ea467a;
  }
  else if ((*(ulonglong *)(puVar4 + 0x18) & DAT_14c951d30) == 0) {
LAB_143ea467a:
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9496d8) && (FUN_144b3d300(&DAT_14c9496d8), DAT_14c9496d8 == -1)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1))
      {
        uVar5 = FUN_140342cba();
        FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0,0x8001,0,uVar5,FUN_1468c7f1e);
        atexit(FUN_14280c819);
        _Init_thread_footer(&DAT_14c951a88);
      }
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0,0x1000000008001,0,
                    &DAT_14c951a38,FUN_140a4831c);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
    puVar4 = *(undefined **)(param_3 + 8);
    if (DAT_14c949690 == 0) {
      bVar6 = puVar4 != (undefined *)0x0;
      if (puVar4 != &DAT_14c949688 && bVar6) {
        do {
          puVar4 = *(undefined **)(puVar4 + 0x30);
          bVar6 = puVar4 != (undefined *)0x0;
          if (puVar4 == &DAT_14c949688) break;
        } while (puVar4 != (undefined *)0x0);
      }
      if (!bVar6) goto LAB_143ea46bd;
    }
    else if ((*(ulonglong *)(puVar4 + 0x18) & DAT_14c949690) == 0) {
LAB_143ea46bd:
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c952318) && (FUN_144b3d300(&DAT_14c952318), DAT_14c952318 == -1))
      {
        FUN_14475b26a();
        FUN_14000176a(&DAT_14c9522c8,L"FUInt32Property",0x800,0,0x1008801,0,&DAT_14c9520b8,
                      FUN_1468e122c);
        atexit(FUN_142817034);
        _Init_thread_footer(&DAT_14c952318);
      }
      puVar4 = *(undefined **)(param_3 + 8);
      if (DAT_14c9522d0 == 0) {
        bVar6 = puVar4 != (undefined *)0x0;
        if (puVar4 != &DAT_14c9522c8 && bVar6) {
          do {
            puVar4 = *(undefined **)(puVar4 + 0x30);
            bVar6 = puVar4 != (undefined *)0x0;
            if (puVar4 == &DAT_14c9522c8) break;
          } while (puVar4 != (undefined *)0x0);
        }
        if (bVar6) goto LAB_143ea4995;
      }
      else if ((*(ulonglong *)(puVar4 + 0x18) & DAT_14c9522d0) != 0) {
LAB_143ea4995:
        FUN_1489ea658(param_1,param_2,param_3,param_4,param_5);
        goto LAB_143ea48f0;
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c952370) && (FUN_144b3d300(&DAT_14c952370), DAT_14c952370 == -1))
      {
        FUN_14475b26a();
        FUN_14000176a(&DAT_14c952320,L"FUInt64Property",0x200,0,0x1008201,0,&DAT_14c9520b8,
                      FUN_1468e12e4);
        atexit(FUN_142817061);
        _Init_thread_footer(&DAT_14c952370);
      }
      puVar4 = *(undefined **)(param_3 + 8);
      if (DAT_14c952328 == 0) {
        bVar6 = puVar4 != (undefined *)0x0;
        if (puVar4 != &DAT_14c952320 && bVar6) {
          do {
            puVar4 = *(undefined **)(puVar4 + 0x30);
            bVar6 = puVar4 != (undefined *)0x0;
            if (puVar4 == &DAT_14c952320) break;
          } while (puVar4 != (undefined *)0x0);
        }
        if (bVar6) goto LAB_143ea49e8;
      }
      else if ((*(ulonglong *)(puVar4 + 0x18) & DAT_14c952328) != 0) {
LAB_143ea49e8:
        FUN_1489ea6d0(param_1,param_2,param_3,param_4,param_5);
        goto LAB_143ea48f0;
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c9523c8) && (FUN_144b3d300(&DAT_14c9523c8), DAT_14c9523c8 == -1))
      {
        FUN_14475b26a();
        FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0,0x1008101,0,&DAT_14c9520b8,
                      FUN_1408a629c);
        atexit(FUN_14281708e);
        _Init_thread_footer(&DAT_14c9523c8);
      }
      puVar3 = *(undefined8 **)(param_3 + 8);
      if (DAT_14c952380 == 0) {
        bVar6 = puVar3 != (undefined8 *)0x0;
        if (puVar3 != &DAT_14c952378 && bVar6) {
          do {
            puVar3 = (undefined8 *)puVar3[6];
            bVar6 = puVar3 != (undefined8 *)0x0;
            if (puVar3 == &DAT_14c952378) break;
          } while (puVar3 != (undefined8 *)0x0);
        }
        if (bVar6) goto LAB_143ea4a3b;
      }
      else if ((puVar3[3] & DAT_14c952380) != 0) {
LAB_143ea4a3b:
        FUN_1489ea748(param_1,param_2,param_3,param_4,param_5);
        goto LAB_143ea48f0;
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c952420) && (FUN_144b3d300(&DAT_14c952420), DAT_14c952420 == -1))
      {
        FUN_14475b26a();
        FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0,0x101008001,0,&DAT_14c9520b8,
                      FUN_14079c5e4);
        atexit(FUN_1428170bb);
        _Init_thread_footer(&DAT_14c952420);
      }
      puVar4 = *(undefined **)(param_3 + 8);
      if (DAT_14c9523d8 == 0) {
        bVar6 = puVar4 != (undefined *)0x0;
        if (puVar4 != &DAT_14c9523d0 && bVar6) {
          do {
            puVar4 = *(undefined **)(puVar4 + 0x30);
            bVar6 = puVar4 != (undefined *)0x0;
            if (puVar4 == &DAT_14c9523d0) break;
          } while (puVar4 != (undefined *)0x0);
        }
        if (bVar6) goto LAB_143ea4a8e;
      }
      else if ((*(ulonglong *)(puVar4 + 0x18) & DAT_14c9523d8) != 0) {
LAB_143ea4a8e:
        FUN_1489ea7c0(param_1,param_2,param_3,param_4,param_5);
        goto LAB_143ea48f0;
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951d20) && (FUN_144b3d300(&DAT_14c951d20), DAT_14c951d20 == -1))
      {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c951a88) &&
           (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
          uVar5 = FUN_140342cba();
          FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0,0x8001,0,uVar5,FUN_1468c7f1e);
          atexit(FUN_14280c819);
          _Init_thread_footer(&DAT_14c951a88);
        }
        FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0,0x28001,0,&DAT_14c951a38,
                      FUN_14067a048);
        atexit(FUN_142811fe5);
        _Init_thread_footer(&DAT_14c951d20);
      }
      puVar3 = *(undefined8 **)(param_3 + 8);
      if (DAT_14c951cd8 == 0) {
        bVar6 = puVar3 != (undefined8 *)0x0;
        if (puVar3 != &DAT_14c951cd0 && bVar6) {
          do {
            puVar3 = (undefined8 *)puVar3[6];
            bVar6 = puVar3 != (undefined8 *)0x0;
            if (puVar3 == &DAT_14c951cd0) break;
          } while (puVar3 != (undefined8 *)0x0);
        }
        if (bVar6) goto LAB_143ea4ae1;
      }
      else if ((puVar3[3] & DAT_14c951cd8) != 0) {
LAB_143ea4ae1:
        FUN_1489ea838(param_1,param_2,param_3,param_4,param_5);
        goto LAB_143ea48f0;
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c963e88) && (FUN_144b3d300(&DAT_14c963e88), DAT_14c963e88 == -1))
      {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c951a88) &&
           (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
          uVar5 = FUN_140342cba();
          FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0,0x8001,0,uVar5,FUN_1468c7f1e);
          atexit(FUN_14280c819);
          _Init_thread_footer(&DAT_14c951a88);
        }
        FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0,0xc001,0,&DAT_14c951a38,FUN_140dafe7a)
        ;
        atexit(FUN_142829758);
        _Init_thread_footer(&DAT_14c963e88);
      }
      puVar4 = *(undefined **)(param_3 + 8);
      if (DAT_14c963e40 == 0) {
        bVar6 = puVar4 != (undefined *)0x0;
        if (puVar4 != &DAT_14c963e38 && bVar6) {
          do {
            puVar4 = *(undefined **)(puVar4 + 0x30);
            bVar6 = puVar4 != (undefined *)0x0;
            if (puVar4 == &DAT_14c963e38) break;
          } while (puVar4 != (undefined *)0x0);
        }
        if (bVar6) goto LAB_143ea4b34;
      }
      else if ((*(ulonglong *)(puVar4 + 0x18) & DAT_14c963e40) != 0) {
LAB_143ea4b34:
        FUN_1489ea8b0(param_1,param_2,param_3,param_4,param_5);
        goto LAB_143ea48f0;
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c963ee0) && (FUN_144b3d300(&DAT_14c963ee0), DAT_14c963ee0 == -1))
      {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c951a88) &&
           (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
          uVar5 = FUN_140342cba();
          FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0,0x8001,0,uVar5,FUN_1468c7f1e);
          atexit(FUN_14280c819);
          _Init_thread_footer(&DAT_14c951a88);
        }
        FUN_14000176a(&DAT_14c963e90,L"FTextProperty",0x40000000,0,0x40008001,0,&DAT_14c951a38,
                      FUN_140fb5c52);
        atexit(FUN_14282980e);
        _Init_thread_footer(&DAT_14c963ee0);
      }
      puVar4 = *(undefined **)(param_3 + 8);
      if (DAT_14c963e98 == 0) {
        bVar6 = puVar4 != (undefined *)0x0;
        if (puVar4 != &DAT_14c963e90 && bVar6) {
          do {
            puVar4 = *(undefined **)(puVar4 + 0x30);
            bVar6 = puVar4 != (undefined *)0x0;
            if (puVar4 == &DAT_14c963e90) break;
          } while (puVar4 != (undefined *)0x0);
        }
        if (bVar6) goto LAB_143ea4b87;
      }
      else if ((*(ulonglong *)(puVar4 + 0x18) & DAT_14c963e98) != 0) {
LAB_143ea4b87:
        FUN_1489ea98c(param_1,param_2,param_3,param_4,param_5);
        goto LAB_143ea48f0;
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c9520b0) && (FUN_144b3d300(&DAT_14c9520b0), DAT_14c9520b0 == -1))
      {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c951a88) &&
           (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
          uVar5 = FUN_140342cba();
          FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0,0x8001,0,uVar5,FUN_1468c7f1e);
          atexit(FUN_14280c819);
          _Init_thread_footer(&DAT_14c951a88);
        }
        FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0,0xa001,0,&DAT_14c951a38,FUN_1409e12a0
                     );
        atexit(FUN_142816ef9);
        _Init_thread_footer(&DAT_14c9520b0);
      }
      puVar4 = *(undefined **)(param_3 + 8);
      if (DAT_14c952068 == 0) {
        bVar6 = puVar4 != (undefined *)0x0;
        if (puVar4 != &DAT_14c952060 && bVar6) {
          do {
            puVar4 = *(undefined **)(puVar4 + 0x30);
            bVar6 = puVar4 != (undefined *)0x0;
            if (puVar4 == &DAT_14c952060) break;
          } while (puVar4 != (undefined *)0x0);
        }
        if (bVar6) goto LAB_143ea4bda;
      }
      else if ((*(ulonglong *)(puVar4 + 0x18) & DAT_14c952068) != 0) {
LAB_143ea4bda:
        FUN_1489ea9da(param_1,param_2,param_3,param_4,param_5);
        goto LAB_143ea48f0;
      }
      *(undefined1 *)(param_1 + 0x2a) = 1;
      plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,param_5);
      (**(code **)(*plVar2 + 0x1a8))(plVar2);
      goto LAB_143ea48f0;
    }
  }
  FUN_1489ea5e0(param_1,param_2,param_3,param_4,param_5);
LAB_143ea48f0:
  cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x2a) = 1;
  }
  return;
}



// FUNCTION 143ea5514 FUN_143ea5514 body=37 status=ok
// SIG undefined FUN_143ea5514(void)

void FUN_143ea5514(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_1;
  plVar2 = *(longlong **)(lVar1 + 0x30);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
    *(undefined8 *)(lVar1 + 0x30) = 0;
  }
  return;
}



// FUNCTION 143ea5544 FUN_143ea5544 body=12 status=ok
// SIG undefined FUN_143ea5544(void)

void FUN_143ea5544(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143ea554d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143ea5550 FUN_143ea5550 body=29 status=ok
// SIG undefined FUN_143ea5550(void)

undefined8 FUN_143ea5550(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ea556e FUN_143ea556e body=282 status=ok
// SIG undefined FUN_143ea556e(void)

undefined8 * FUN_143ea556e(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143ea3853);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143ea5688 FUN_143ea5688 body=96 status=ok
// SIG undefined FUN_143ea5688(void)

ulonglong FUN_143ea5688(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar4 = (ulonglong)DAT_14c7585c8;
  lVar2 = param_1[0x15];
  plVar3 = *(longlong **)(lVar2 + 0x30);
  if (plVar3 != (longlong *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 8))();
    *(undefined8 *)(lVar2 + 0x30) = 0;
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143ea56dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)*param_1)(param_1,1);
      return uVar4;
    }
  }
  return uVar4;
}



// FUNCTION 143ea5704 FUN_143ea5704 body=12 status=ok
// SIG undefined FUN_143ea5704(void)

void FUN_143ea5704(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143ea570d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143ea5710 FUN_143ea5710 body=29 status=ok
// SIG undefined FUN_143ea5710(void)

undefined8 FUN_143ea5710(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ea572e FUN_143ea572e body=282 status=ok
// SIG undefined FUN_143ea572e(void)

undefined8 * FUN_143ea572e(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143ea3853);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143ea5848 FUN_143ea5848 body=122 status=ok
// SIG undefined FUN_143ea5848(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ea5848(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_143e92d2e(_DAT_000000a8,_DAT_000000b0,_DAT_000000b4);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_143e92d2e(param_1[0x15],*(undefined4 *)(param_1 + 0x16),
                *(undefined4 *)((longlong)param_1 + 0xb4));
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143ea5891. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143ea58c6 FUN_143ea58c6 body=96 status=ok
// SIG undefined FUN_143ea58c6(void)

void FUN_143ea58c6(undefined8 *param_1)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar1 == 2) goto LAB_143ea58f6;
    if (iVar1 == 1) {
      DVar2 = FUN_140ad26c0();
      DVar3 = GetCurrentThreadId();
      if (DVar2 != DVar3) {
        return;
      }
      goto LAB_143ea58f6;
    }
  }
  if (iVar1 != 0x10) {
    return;
  }
LAB_143ea58f6:
  FUN_1418b5bf6(*param_1);
  return;
}



// FUNCTION 143ea5930 FUN_143ea5930 body=12 status=ok
// SIG undefined FUN_143ea5930(void)

void FUN_143ea5930(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143ea5939. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143ea593c FUN_143ea593c body=29 status=ok
// SIG undefined FUN_143ea593c(void)

undefined8 FUN_143ea593c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ea595a FUN_143ea595a body=282 status=ok
// SIG undefined FUN_143ea595a(void)

undefined8 * FUN_143ea595a(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143ea3853);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143ea5a74 FUN_143ea5a74 body=146 status=ok
// SIG undefined FUN_143ea5a74(void)

void FUN_143ea5a74(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar2 != 2) {
      if (iVar2 != 1) goto LAB_143ea5aae;
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 != DVar4) goto LAB_143ea5abf;
    }
  }
  else {
LAB_143ea5aae:
    if (iVar2 != 0x10) goto LAB_143ea5abf;
  }
  FUN_1418b5bf6(param_1[0x15]);
LAB_143ea5abf:
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143ea5ade. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143ea5b06 FUN_143ea5b06 body=131 status=ok
// SIG undefined FUN_143ea5b06(void)

DWORD FUN_143ea5b06(undefined8 *param_1,undefined8 param_2)

{
  DWORD *pDVar1;
  longlong *plVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  DVar4 = *(DWORD *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (DVar4 == 2) goto LAB_143ea5b3a;
    if (DVar4 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 != DVar4) {
        return DVar4;
      }
      goto LAB_143ea5b3a;
    }
  }
  if (DVar4 != 0x10) {
    return DVar4;
  }
LAB_143ea5b3a:
  pDVar1 = (DWORD *)*param_1;
  plVar2 = *(longlong **)(pDVar1 + 0xc);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,*(undefined4 *)(param_1 + 1),1);
    FUN_143e92990(pDVar1,param_2);
    LOCK();
    DVar4 = *pDVar1;
    *pDVar1 = 1;
    UNLOCK();
  }
  return DVar4;
}



// FUNCTION 143ea5b94 FUN_143ea5b94 body=12 status=ok
// SIG undefined FUN_143ea5b94(void)

void FUN_143ea5b94(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143ea5b9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143ea5ba0 FUN_143ea5ba0 body=29 status=ok
// SIG undefined FUN_143ea5ba0(void)

undefined8 FUN_143ea5ba0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ea5bbe FUN_143ea5bbe body=282 status=ok
// SIG undefined FUN_143ea5bbe(void)

undefined8 * FUN_143ea5bbe(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143ea3853);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143ea5cd8 FUN_143ea5cd8 body=187 status=ok
// SIG undefined FUN_143ea5cd8(void)

DWORD FUN_143ea5cd8(undefined8 *param_1)

{
  int *piVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  DVar4 = *(DWORD *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (DVar4 != 2) {
      if (DVar4 != 1) goto LAB_143ea5d12;
      DVar5 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar5 != DVar4) goto LAB_143ea5d4c;
    }
  }
  else {
LAB_143ea5d12:
    if (DVar4 != 0x10) goto LAB_143ea5d4c;
  }
  pDVar2 = (DWORD *)param_1[0x15];
  plVar3 = *(longlong **)(pDVar2 + 0xc);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x10))(plVar3,*(undefined4 *)(param_1 + 0x16),1);
    FUN_143e92990(pDVar2,&DAT_14ca85100);
    LOCK();
    DVar4 = *pDVar2;
    *pDVar2 = 1;
    UNLOCK();
  }
LAB_143ea5d4c:
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143ea5d6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      DVar4 = (**(code **)*param_1)(param_1,1);
      return DVar4;
    }
  }
  return DVar4;
}



// FUNCTION 143ea5d94 FUN_143ea5d94 body=547 status=ok
// SIG undefined FUN_143ea5d94(void)

longlong * FUN_143ea5d94(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 143ea5fc4 FUN_143ea5fc4 body=110 status=ok
// SIG undefined FUN_143ea5fc4(void)

undefined8 * FUN_143ea5fc4(undefined8 *param_1,int param_2)

{
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ea6044 FUN_143ea6044 body=12 status=ok
// SIG undefined FUN_143ea6044(void)

void FUN_143ea6044(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143ea604d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143ea6050 FUN_143ea6050 body=29 status=ok
// SIG undefined FUN_143ea6050(void)

undefined8 FUN_143ea6050(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ea606e FUN_143ea606e body=282 status=ok
// SIG undefined FUN_143ea606e(void)

undefined8 * FUN_143ea606e(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143ea3853);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143ea6188 FUN_143ea6188 body=94 status=ok
// SIG undefined FUN_143ea6188(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ea6188(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_143e92b0e(_DAT_000000a8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_143e92b0e(param_1[0x15]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143ea61c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143ea61f8 FUN_143ea61f8 body=12 status=ok
// SIG undefined FUN_143ea61f8(void)

void FUN_143ea61f8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143ea6201. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143ea6204 FUN_143ea6204 body=29 status=ok
// SIG undefined FUN_143ea6204(void)

undefined8 FUN_143ea6204(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ea6222 FUN_143ea6222 body=282 status=ok
// SIG undefined FUN_143ea6222(void)

undefined8 * FUN_143ea6222(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143ea3853);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143ea633c FUN_143ea633c body=94 status=ok
// SIG undefined FUN_143ea633c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ea633c(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_145c7fb9e(_DAT_000000a8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_145c7fb9e(param_1[0x15]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143ea6390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143ea63b8 FUN_143ea63b8 body=12 status=ok
// SIG undefined FUN_143ea63b8(void)

void FUN_143ea63b8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143ea63c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143ea63c4 FUN_143ea63c4 body=29 status=ok
// SIG undefined FUN_143ea63c4(void)

undefined8 FUN_143ea63c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ea63e2 FUN_143ea63e2 body=282 status=ok
// SIG undefined FUN_143ea63e2(void)

undefined8 * FUN_143ea63e2(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143ea3853);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143ea64fc FUN_143ea64fc body=85 status=ok
// SIG undefined FUN_143ea64fc(void)

void FUN_143ea64fc(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  if (*(longlong **)(param_1[0x15] + 0x30) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1[0x15] + 0x30) + 0x28))();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143ea6547. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143ea656a FUN_143ea656a body=12 status=ok
// SIG undefined FUN_143ea656a(void)

void FUN_143ea656a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143ea6573. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143ea6576 FUN_143ea6576 body=29 status=ok
// SIG undefined FUN_143ea6576(void)

undefined8 FUN_143ea6576(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ea6594 FUN_143ea6594 body=282 status=ok
// SIG undefined FUN_143ea6594(void)

undefined8 * FUN_143ea6594(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143ea3853);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143ea6700 FUN_143ea6700 body=308 status=ok
// SIG undefined FUN_143ea6700(void)

undefined8 FUN_143ea6700(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  char *_Str;
  undefined1 auStack_188 [44];
  uint local_15c;
  undefined1 local_158 [256];
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_188;
  sVar1 = strlen(param_2);
  local_15c = 0;
  cohtml::Library::DecodeURLString(param_2,(uint)sVar1,(char *)0x0,&local_15c);
  _Str = (char *)FUN_14001cc68(local_15c + (local_15c == 0),0x10);
  cohtml::Library::DecodeURLString(param_2,(uint)sVar1,_Str,&local_15c);
  local_58 = 0;
  if (_Str == (char *)0x0) {
    local_50 = 0;
    local_48 = 0;
  }
  else {
    sVar1 = strlen(_Str);
    FUN_1446e6fe8(local_158,_Str,sVar1 & 0xffffffff,1);
  }
  FUN_142746682(param_1,local_50,local_48);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (_Str != (char *)0x0) {
    FUN_1400020a8(_Str);
  }
  if ((local_40 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ea6836 FUN_143ea6836 body=254 status=ok
// SIG undefined FUN_143ea6836(void)

void FUN_143ea6836(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  
  puVar4 = (undefined8 *)*param_1;
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  FUN_144725486(puVar4);
  FUN_144725486(puVar4 + 4);
  FUN_14003f39a(puVar4 + 4);
  *puVar4 = &PTR_FUN_14a38cff0;
  lVar5 = puVar4[2];
  if (lVar5 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar5 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar5 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar5 + 0xd);
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar5;
        plVar8 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar8;
            LOCK();
            bVar9 = plVar8 != DAT_14ca843c0;
            plVar7 = plVar6;
            if (bVar9) {
              plVar8 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar9);
        }
        else {
          do {
            *plVar6 = (longlong)plVar7;
            LOCK();
            bVar9 = plVar7 != DAT_14ca843c8;
            plVar8 = plVar6;
            if (bVar9) {
              plVar7 = DAT_14ca843c8;
              plVar8 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar8;
            UNLOCK();
          } while (bVar9);
        }
      }
    }
  }
  *puVar4 = &PTR_FUN_14a38cd70;
  *(undefined1 *)((longlong)puVar4 + 0xe) = 2;
  if ((*(int *)(puVar4 + 1) != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  FUN_1400020a8(puVar4);
  return;
}



// FUNCTION 143ea693e FUN_143ea693e body=12 status=ok
// SIG undefined FUN_143ea693e(void)

void FUN_143ea693e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143ea6947. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143ea694a FUN_143ea694a body=29 status=ok
// SIG undefined FUN_143ea694a(void)

undefined8 FUN_143ea694a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ea6968 FUN_143ea6968 body=282 status=ok
// SIG undefined FUN_143ea6968(void)

undefined8 * FUN_143ea6968(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143ea3853);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143ea6a82 FUN_143ea6a82 body=321 status=ok
// SIG undefined FUN_143ea6a82(void)

ulonglong FUN_143ea6a82(undefined8 *param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar7 = (ulonglong)DAT_14c7585c8;
  puVar5 = (undefined8 *)param_1[0x15];
  if (puVar5 != (undefined8 *)0x0) {
    FUN_144725486(puVar5);
    FUN_144725486(puVar5 + 4);
    FUN_14003f39a(puVar5 + 4);
    *puVar5 = &PTR_FUN_14a38cff0;
    lVar6 = puVar5[2];
    if (lVar6 != 0) {
      LOCK();
      puVar2 = (uint *)(lVar6 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(lVar6 + 8);
        LOCK();
        uVar3 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(lVar6 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = lVar6;
          plVar10 = DAT_14ca843c0;
          plVar9 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar10;
              LOCK();
              bVar11 = plVar10 != DAT_14ca843c0;
              plVar9 = plVar8;
              if (bVar11) {
                plVar10 = DAT_14ca843c0;
                plVar9 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar9;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar8 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c8;
              plVar10 = plVar8;
              if (bVar11) {
                plVar9 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
    *puVar5 = &PTR_FUN_14a38cd70;
    *(undefined1 *)((longlong)puVar5 + 0xe) = 2;
    if ((*(int *)(puVar5 + 1) != -1) && (DAT_14c868880 == '\0')) {
      FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                    L"A FRenderResource was deleted without being released first!");
    }
    uVar7 = FUN_1400020a8(puVar5);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143ea6b18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (**(code **)*param_1)(param_1,1);
      return uVar7;
    }
  }
  return uVar7;
}



// FUNCTION 143ea6bc4 FUN_143ea6bc4 body=315 status=ok
// SIG undefined FUN_143ea6bc4(void)

void FUN_143ea6bc4(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  size_t sVar3;
  wchar_t *_Str;
  uint uVar4;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [128];
  undefined1 *local_58;
  undefined1 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((int)param_1[2] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)param_1[1];
  }
  lVar1 = *param_1;
  lVar2 = param_1[3];
  local_58 = (undefined1 *)0x0;
  if (_Str == (wchar_t *)0x0) {
    local_50 = (undefined1 *)0x0;
    local_48 = 0;
  }
  else {
    sVar3 = wcslen(_Str);
    local_48 = FUN_14475aa65(0,_Str,sVar3 & 0xffffffff);
    uVar4 = local_48 + 1;
    local_50 = (undefined1 *)0x0;
    if (0x80 < uVar4) {
      FUN_1446efa72(&local_58,0,uVar4,1);
      local_50 = local_58;
    }
    if (local_50 == (undefined1 *)0x0) {
      local_50 = local_d8;
    }
    FUN_14475a98a(local_50,uVar4,_Str,(int)sVar3 + 1);
  }
  (**(code **)(*(longlong *)(lVar1 + 0x118) + 8))((longlong *)(lVar1 + 0x118),local_50,(int)lVar2);
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ea6d00 FUN_143ea6d00 body=158 status=ok
// SIG undefined FUN_143ea6d00(void)

undefined8 * FUN_143ea6d00(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14b4570e0;
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  puVar2[2] = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  _Src = *(void **)(param_1 + 0x10);
  *(int *)(puVar2 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 2,iVar1,0);
    memcpy((void *)puVar2[2],_Src,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_1 + 0x20);
  return puVar2 + 1;
}



// FUNCTION 143ea6da4 FUN_143ea6da4 body=29 status=ok
// SIG undefined FUN_143ea6da4(void)

void FUN_143ea6da4(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143ea6dc2 FUN_143ea6dc2 body=57 status=ok
// SIG undefined FUN_143ea6dc2(void)

undefined8 * FUN_143ea6dc2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4570e0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ea6dfc FUN_143ea6dfc body=315 status=ok
// SIG undefined FUN_143ea6dfc(void)

void FUN_143ea6dfc(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  size_t sVar3;
  wchar_t *_Str;
  uint uVar4;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [128];
  undefined1 *local_58;
  undefined1 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((int)param_1[2] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)param_1[1];
  }
  lVar1 = *param_1;
  lVar2 = param_1[3];
  local_58 = (undefined1 *)0x0;
  if (_Str == (wchar_t *)0x0) {
    local_50 = (undefined1 *)0x0;
    local_48 = 0;
  }
  else {
    sVar3 = wcslen(_Str);
    local_48 = FUN_14475aa65(0,_Str,sVar3 & 0xffffffff);
    uVar4 = local_48 + 1;
    local_50 = (undefined1 *)0x0;
    if (0x80 < uVar4) {
      FUN_1446efa72(&local_58,0,uVar4,1);
      local_50 = local_58;
    }
    if (local_50 == (undefined1 *)0x0) {
      local_50 = local_d8;
    }
    FUN_14475a98a(local_50,uVar4,_Str,(int)sVar3 + 1);
  }
  (**(code **)(*(longlong *)(lVar1 + 0x118) + 0x10))
            ((longlong *)(lVar1 + 0x118),local_50,(int)lVar2);
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ea6f38 FUN_143ea6f38 body=158 status=ok
// SIG undefined FUN_143ea6f38(void)

undefined8 * FUN_143ea6f38(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14b457100;
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  puVar2[2] = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  _Src = *(void **)(param_1 + 0x10);
  *(int *)(puVar2 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 2,iVar1,0);
    memcpy((void *)puVar2[2],_Src,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_1 + 0x20);
  return puVar2 + 1;
}



// FUNCTION 143ea6fdc FUN_143ea6fdc body=29 status=ok
// SIG undefined FUN_143ea6fdc(void)

void FUN_143ea6fdc(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143ea6ffa FUN_143ea6ffa body=57 status=ok
// SIG undefined FUN_143ea6ffa(void)

undefined8 * FUN_143ea6ffa(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b457100;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ea7034 FUN_143ea7034 body=348 status=ok
// SIG undefined FUN_143ea7034(void)

void FUN_143ea7034(uint *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  uint local_48;
  uint *local_40;
  undefined8 *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[1] == 0) {
LAB_143ea7183:
    local_68 = 0;
  }
  else {
    uVar1 = *param_1;
    local_68 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar2 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar2 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar2 + 2) != param_1[1] || ((*(uint *)(puVar2 + 1) & 0x10200000) != 0))))
      goto LAB_143ea7183;
      local_68 = *puVar2;
    }
  }
  local_48 = param_1[5];
  if (param_1[3] != 0) {
    uVar1 = param_1[2];
    uVar3 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_143ea7102;
    puVar2 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar2 != (undefined8 *)0x0) &&
       ((*(uint *)(puVar2 + 2) == param_1[3] && ((*(uint *)(puVar2 + 1) & 0x10200000) == 0)))) {
      uVar3 = *puVar2;
      goto LAB_143ea7102;
    }
  }
  uVar3 = 0;
LAB_143ea7102:
  local_60 = uVar3;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  FUN_1456bc4c4(puVar2,uVar3);
  local_40 = param_1 + 4;
  local_58 = puVar2;
  local_38 = &local_68;
  FUN_1489ee278(*(longlong *)(param_1 + 8) + 0x308,local_2c);
  if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,1);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ea719c FUN_143ea719c body=29 status=ok
// SIG undefined FUN_143ea719c(void)

void FUN_143ea719c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143ea71ba FUN_143ea71ba body=29 status=ok
// SIG undefined FUN_143ea71ba(void)

undefined8 FUN_143ea71ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ea71d8 FUN_143ea71d8 body=282 status=ok
// SIG undefined FUN_143ea71d8(void)

undefined8 * FUN_143ea71d8(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143ea3853);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143ea72f2 FUN_143ea72f2 body=409 status=ok
// SIG undefined FUN_143ea72f2(void)

void FUN_143ea72f2(undefined8 *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined4 local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  if (*(int *)((longlong)param_1 + 0xac) == 0) {
LAB_143ea747e:
    local_68 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x15);
    local_68 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar3 = (undefined8 *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar3 == (undefined8 *)0x0) ||
         ((*(int *)(puVar3 + 2) != *(int *)((longlong)param_1 + 0xac) ||
          ((*(uint *)(puVar3 + 1) & 0x10200000) != 0)))) goto LAB_143ea747e;
      local_68 = *puVar3;
    }
  }
  local_48 = *(undefined4 *)((longlong)param_1 + 0xbc);
  if (*(int *)((longlong)param_1 + 0xb4) != 0) {
    uVar2 = *(uint *)(param_1 + 0x16);
    uVar4 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143ea73df;
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((puVar3 != (undefined8 *)0x0) &&
       ((*(int *)(puVar3 + 2) == *(int *)((longlong)param_1 + 0xb4) &&
        ((*(uint *)(puVar3 + 1) & 0x10200000) == 0)))) {
      uVar4 = *puVar3;
      goto LAB_143ea73df;
    }
  }
  uVar4 = 0;
LAB_143ea73df:
  local_60 = uVar4;
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  FUN_1456bc4c4(puVar3,uVar4);
  local_40 = param_1 + 0x17;
  local_58 = puVar3;
  local_38 = &local_68;
  FUN_1489ee278(param_1[0x19] + 0x308,local_2c);
  if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,1);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*param_1)(param_1,1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ea748c FUN_143ea748c body=380 status=ok
// SIG undefined FUN_143ea748c(void)

void FUN_143ea748c(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x310) != *(int *)(lVar2 + 0x33c)) {
    lVar7 = lVar2 + 0x340;
    if (*(longlong *)(lVar2 + 0x348) != 0) {
      lVar7 = *(longlong *)(lVar2 + 0x348);
    }
    iVar6 = *(int *)(lVar7 + (ulonglong)(*(int *)(lVar2 + 0x350) - 1U & *(uint *)(param_1 + 3)) * 4)
    ;
    if (iVar6 != -1) {
      do {
        lVar7 = *(longlong *)(lVar2 + 0x308) + (longlong)iVar6 * 0x38;
        if (*(uint *)(*(longlong *)(lVar2 + 0x308) + (longlong)iVar6 * 0x38) ==
            *(uint *)(param_1 + 3)) {
          if ((lVar7 + 8U & 0xfffffffffffffff7) == 0) {
            return;
          }
          if (*(int *)((longlong)param_1 + 0xc) == 0) {
LAB_143ea75fd:
            uVar4 = 0;
          }
          else {
            uVar1 = *(uint *)(param_1 + 1);
            uVar4 = 0;
            if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
              puVar5 = (undefined8 *)
                       ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
              if ((puVar5 == (undefined8 *)0x0) ||
                 ((*(int *)(puVar5 + 2) != *(int *)((longlong)param_1 + 0xc) ||
                  ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)))) goto LAB_143ea75fd;
              uVar4 = *puVar5;
            }
          }
          *(undefined8 *)(lVar7 + 8) = uVar4;
          *(undefined4 *)(lVar7 + 0x28) = *(undefined4 *)((longlong)param_1 + 0x1c);
          if (*(int *)((longlong)param_1 + 0x14) != 0) {
            uVar1 = *(uint *)(param_1 + 2);
            uVar4 = 0;
            if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_143ea75b6;
            puVar5 = (undefined8 *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
            if ((puVar5 != (undefined8 *)0x0) &&
               ((*(int *)(puVar5 + 2) == *(int *)((longlong)param_1 + 0x14) &&
                ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)))) {
              uVar4 = *puVar5;
              goto LAB_143ea75b6;
            }
          }
          uVar4 = 0;
LAB_143ea75b6:
          *(undefined8 *)(lVar7 + 0x10) = uVar4;
          uVar3 = FUN_14001cc68(0x18,0x10);
          FUN_1456bc4c4(uVar3,uVar4);
          puVar5 = *(undefined8 **)(lVar7 + 0x18);
          *(undefined8 *)(lVar7 + 0x18) = uVar3;
          if (puVar5 == (undefined8 *)0x0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x000143ea75fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)*puVar5)(puVar5,1);
          return;
        }
        iVar6 = *(int *)(lVar7 + 0x30);
      } while (iVar6 != -1);
    }
  }
  return;
}



// FUNCTION 143ea7612 FUN_143ea7612 body=29 status=ok
// SIG undefined FUN_143ea7612(void)

void FUN_143ea7612(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143ea7630 FUN_143ea7630 body=29 status=ok
// SIG undefined FUN_143ea7630(void)

undefined8 FUN_143ea7630(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ea764e FUN_143ea764e body=282 status=ok
// SIG undefined FUN_143ea764e(void)

undefined8 * FUN_143ea764e(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143ea3853);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143ea7768 FUN_143ea7768 body=449 status=ok
// SIG undefined FUN_143ea7768(void)

void FUN_143ea7768(undefined8 *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar3 = param_1[0x15];
  if (*(int *)(lVar3 + 0x310) != *(int *)(lVar3 + 0x33c)) {
    lVar8 = lVar3 + 0x340;
    if (*(longlong *)(lVar3 + 0x348) != 0) {
      lVar8 = *(longlong *)(lVar3 + 0x348);
    }
    iVar7 = *(int *)(lVar8 + (ulonglong)(*(int *)(lVar3 + 0x350) - 1U & *(uint *)(param_1 + 0x18)) *
                             4);
    if (iVar7 != -1) {
      do {
        lVar8 = *(longlong *)(lVar3 + 0x308) + (longlong)iVar7 * 0x38;
        if (*(uint *)(*(longlong *)(lVar3 + 0x308) + (longlong)iVar7 * 0x38) ==
            *(uint *)(param_1 + 0x18)) {
          if ((lVar8 + 8U & 0xfffffffffffffff7) != 0) {
            if (*(int *)((longlong)param_1 + 0xb4) == 0) {
LAB_143ea791e:
              uVar5 = 0;
            }
            else {
              uVar2 = *(uint *)(param_1 + 0x16);
              uVar5 = 0;
              if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
                puVar6 = (undefined8 *)
                         ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
                if ((puVar6 == (undefined8 *)0x0) ||
                   ((*(int *)(puVar6 + 2) != *(int *)((longlong)param_1 + 0xb4) ||
                    ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)))) goto LAB_143ea791e;
                uVar5 = *puVar6;
              }
            }
            *(undefined8 *)(lVar8 + 8) = uVar5;
            *(undefined4 *)(lVar8 + 0x28) = *(undefined4 *)((longlong)param_1 + 0xc4);
            if (*(int *)((longlong)param_1 + 0xbc) == 0) {
LAB_143ea7925:
              uVar5 = 0;
            }
            else {
              uVar2 = *(uint *)(param_1 + 0x17);
              uVar5 = 0;
              if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
                puVar6 = (undefined8 *)
                         ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
                if ((puVar6 == (undefined8 *)0x0) ||
                   ((*(int *)(puVar6 + 2) != *(int *)((longlong)param_1 + 0xbc) ||
                    ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)))) goto LAB_143ea7925;
                uVar5 = *puVar6;
              }
            }
            *(undefined8 *)(lVar8 + 0x10) = uVar5;
            uVar4 = FUN_14001cc68(0x18,0x10);
            FUN_1456bc4c4(uVar4,uVar5);
            puVar6 = *(undefined8 **)(lVar8 + 0x18);
            *(undefined8 *)(lVar8 + 0x18) = uVar4;
            if (puVar6 != (undefined8 *)0x0) {
              (**(code **)*puVar6)(puVar6,1);
            }
          }
          break;
        }
        iVar7 = *(int *)(lVar8 + 0x30);
      } while (iVar7 != -1);
    }
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143ea7819. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143ea7948 FUN_143ea7948 body=29 status=ok
// SIG undefined FUN_143ea7948(void)

void FUN_143ea7948(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143ea7966 FUN_143ea7966 body=29 status=ok
// SIG undefined FUN_143ea7966(void)

undefined8 FUN_143ea7966(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ea7984 FUN_143ea7984 body=282 status=ok
// SIG undefined FUN_143ea7984(void)

undefined8 * FUN_143ea7984(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143ea3853);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143ea7a9e FUN_143ea7a9e body=117 status=ok
// SIG undefined FUN_143ea7a9e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ea7a9e(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1489ee63e(_DAT_000000a8 + 0x308,_DAT_000000c0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1489ee63e(param_1[0x15] + 0x308,*(undefined4 *)(param_1 + 0x18));
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143ea7b09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143ea7b14 FUN_143ea7b14 body=318 status=ok
// SIG undefined FUN_143ea7b14(void)

void FUN_143ea7b14(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_1;
  lVar5 = FUN_143e783c4(&local_30,*(undefined4 *)(param_1 + 2));
  if (lVar5 != 0) {
    lVar5 = *(longlong *)(lVar5 + 0x58);
    if (lVar5 == 0) {
      if (*(longlong *)(*(longlong *)(param_1[1] + 0x128) + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
    }
    else {
      puVar1 = (uint *)(lVar5 + 8);
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
      lVar4 = *(longlong *)(*(longlong *)(param_1[1] + 0x128) + 0x10);
      if (lVar4 != 0) {
        (**(code **)(*DAT_14ca83900 + 0x178))(DAT_14ca83900,&DAT_14ca85100,lVar4,lVar5);
      }
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar5 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar5;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar9 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar9) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar9);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar9 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar9) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar9);
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



// FUNCTION 143ea7c78 FUN_143ea7c78 body=12 status=ok
// SIG undefined FUN_143ea7c78(void)

void FUN_143ea7c78(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143ea7c81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143ea7c84 FUN_143ea7c84 body=29 status=ok
// SIG undefined FUN_143ea7c84(void)

undefined8 FUN_143ea7c84(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ea7ca2 FUN_143ea7ca2 body=282 status=ok
// SIG undefined FUN_143ea7ca2(void)

undefined8 * FUN_143ea7ca2(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143ea3853);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143ea7dbc FUN_143ea7dbc body=360 status=ok
// SIG undefined FUN_143ea7dbc(void)

void FUN_143ea7dbc(longlong param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    UNLOCK();
  }
  local_28 = *(undefined8 *)(param_1 + 0xa8);
  lVar6 = FUN_143e783c4(&local_28,*(undefined4 *)(param_1 + 0xb8));
  if (lVar6 != 0) {
    lVar6 = *(longlong *)(lVar6 + 0x58);
    if (lVar6 == 0) {
      lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x128) + 0x10);
      if (lVar6 != 0) {
        (**(code **)(*DAT_14ca83900 + 0x178))(DAT_14ca83900,&DAT_14ca85100,lVar6,0);
      }
    }
    else {
      puVar1 = (uint *)(lVar6 + 8);
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
      lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x128) + 0x10);
      if (lVar5 != 0) {
        (**(code **)(*DAT_14ca83900 + 0x178))(DAT_14ca83900,&DAT_14ca85100,lVar5,lVar6);
      }
      LOCK();
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        LOCK();
        uVar3 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(lVar6 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar6;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar10 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar7;
              if (bVar10) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar10 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar7;
              if (bVar10) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
    }
  }
  if (param_1 != 0) {
    LOCK();
    piVar2 = (int *)(param_1 + 8);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ea7f3a FUN_143ea7f3a body=328 status=ok
// SIG undefined FUN_143ea7f3a(void)

void FUN_143ea7f3a(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  size_t sVar3;
  uint uVar4;
  wchar_t *_Str;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((int)param_1[3] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)param_1[2];
  }
  lVar1 = param_1[4];
  plVar2 = *(longlong **)(*param_1 + 0x160);
  local_60 = (undefined1 *)0x0;
  if (_Str == (wchar_t *)0x0) {
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
  }
  else {
    sVar3 = wcslen(_Str);
    local_50 = FUN_14475aa65(0,_Str,sVar3 & 0xffffffff);
    uVar4 = local_50 + 1;
    local_58 = (undefined1 *)0x0;
    if (0x80 < uVar4) {
      FUN_1446efa72(&local_60,0,uVar4,1);
      local_58 = local_60;
    }
    if (local_58 == (undefined1 *)0x0) {
      local_58 = local_e0;
    }
    FUN_14475a98a(local_58,uVar4,_Str,(int)sVar3 + 1);
  }
  (**(code **)(*plVar2 + 0x10))(plVar2,(int)param_1[1],local_58,lVar1);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ea8084 FUN_143ea8084 body=166 status=ok
// SIG undefined FUN_143ea8084(void)

undefined8 * FUN_143ea8084(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x30,8);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14b457380;
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x10);
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  puVar2[3] = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  _Src = *(void **)(param_1 + 0x18);
  *(int *)(puVar2 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 3,iVar1,0);
    memcpy((void *)puVar2[3],_Src,(longlong)iVar1 * 2);
  }
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  return puVar2 + 1;
}



// FUNCTION 143ea8130 FUN_143ea8130 body=29 status=ok
// SIG undefined FUN_143ea8130(void)

void FUN_143ea8130(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143ea814e FUN_143ea814e body=57 status=ok
// SIG undefined FUN_143ea814e(void)

undefined8 * FUN_143ea814e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b457380;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ea8188 FUN_143ea8188 body=344 status=ok
// SIG undefined FUN_143ea8188(void)

void FUN_143ea8188(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  size_t sVar3;
  uint uVar4;
  longlong lVar5;
  wchar_t *_Str;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  longlong local_e8;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((int)param_1[3] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)param_1[2];
  }
  lVar5 = param_1[4];
  plVar1 = *(longlong **)(*param_1 + 0x160);
  lVar2 = param_1[5];
  local_60 = (undefined1 *)0x0;
  if (_Str == (wchar_t *)0x0) {
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
  }
  else {
    local_e8 = lVar5;
    sVar3 = wcslen(_Str);
    local_50 = FUN_14475aa65(0,_Str,sVar3 & 0xffffffff);
    uVar4 = local_50 + 1;
    local_58 = (undefined1 *)0x0;
    if (0x80 < uVar4) {
      FUN_1446efa72(&local_60,0,uVar4,1);
      local_58 = local_60;
    }
    if (local_58 == (undefined1 *)0x0) {
      local_58 = local_e0;
    }
    FUN_14475a98a(local_58,uVar4,_Str,(int)sVar3 + 1);
    lVar5 = local_e8;
  }
  local_f8 = (char)lVar2;
  (**(code **)(*plVar1 + 0x18))(plVar1,(int)param_1[1],local_58,lVar5);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ea82e2 FUN_143ea82e2 body=172 status=ok
// SIG undefined FUN_143ea82e2(void)

undefined8 * FUN_143ea82e2(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x38,8);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14b4573a0;
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x10);
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  puVar2[3] = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  _Src = *(void **)(param_1 + 0x18);
  *(int *)(puVar2 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 3,iVar1,0);
    memcpy((void *)puVar2[3],_Src,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(puVar2 + 6) = *(undefined1 *)(param_1 + 0x30);
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  return puVar2 + 1;
}



// FUNCTION 143ea8394 FUN_143ea8394 body=29 status=ok
// SIG undefined FUN_143ea8394(void)

void FUN_143ea8394(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}


