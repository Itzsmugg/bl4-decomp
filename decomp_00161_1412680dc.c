// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1412680dc FUN_1412680dc body=406 status=ok
// SIG undefined FUN_1412680dc(void)

char * FUN_1412680dc(longlong *param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = param_4;
  plVar6 = (longlong *)(**(code **)(*param_1 + 0x180))();
  iVar5 = (**(code **)*plVar6)(plVar6);
  if (0 < iVar5) {
    uVar7 = iVar5 + 1;
    do {
      (**(code **)(*plVar6 + 0x10))(plVar6,&local_58,uVar7 - 2);
      plVar4 = local_50;
      plVar1 = local_58;
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
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
      }
      (**(code **)(*plVar1 + 0x58))(plVar1,param_2,param_3,local_60);
      if (*param_2 != '\0') {
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar6 = plVar4 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
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
        goto LAB_1412681e5;
      }
      FUN_14493db24(param_2);
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
      uVar7 = uVar7 - 1;
    } while (1 < uVar7);
  }
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
LAB_1412681e5:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141268274 FUN_141268274 body=217 status=ok
// SIG undefined FUN_141268274(void)

undefined1 *
FUN_141268274(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  
  if (((*(byte *)(param_1 + 0x39) & 8) == 0) || (cVar1 = FUN_140f8cc94(), cVar1 != '\0')) {
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  else {
    FUN_1407c952c(param_1,param_2,param_3,param_4,1);
    if ((longlong)*(int *)(param_1 + 0x2f0) != 0) {
      lVar2 = 0;
      do {
        if ((*(int *)(*(longlong *)(param_1 + 0x2e8) + 8 + lVar2) != 0) &&
           (*(longlong *)(*(longlong *)(param_1 + 0x2e8) + lVar2) != 0)) {
          FUN_148a02f68(param_1 + 0x2e8,param_3,param_4,1,*param_2);
          return param_2;
        }
        lVar2 = lVar2 + 0x10;
      } while ((longlong)*(int *)(param_1 + 0x2f0) * 0x10 != lVar2);
    }
  }
  return param_2;
}



// FUNCTION 14126834e FUN_14126834e body=317 status=ok
// SIG undefined FUN_14126834e(void)

undefined8 *
FUN_14126834e(LPCRITICAL_SECTION param_1,undefined8 *param_2,LPCRITICAL_SECTION param_3)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection(param_1);
  *param_2 = 0;
  EnterCriticalSection(param_3);
  cVar3 = '\0';
  if ((param_3[1].LockCount != 0) && (param_3[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
    cVar3 = (**(code **)(*(longlong *)param_3[1].DebugInfo + 0x30))();
  }
  if (param_3 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_3);
  }
  if (cVar3 != '\0') {
    FUN_14109be94(param_1,1);
    EnterCriticalSection(param_3);
    if ((param_3[1].LockCount == 0) ||
       (p_Var2 = param_3[1].DebugInfo, p_Var2 == (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
      local_40 = 0;
    }
    else {
      (**(code **)(*(longlong *)p_Var2 + 0x38))(p_Var2,&local_40);
    }
    if (param_3 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(param_3);
    }
    *param_2 = local_40;
    iVar1 = param_1[1].LockCount;
    lVar4 = (longlong)iVar1;
    param_1[1].LockCount = iVar1 + 1U;
    if ((uint)param_1[1].RecursionCount < iVar1 + 1U) {
      FUN_1447a71f6(param_1 + 1,iVar1);
    }
    p_Var2 = param_1[1].DebugInfo;
    *(undefined8 *)(&p_Var2->Type + lVar4 * 8) = 0;
    *(undefined4 *)(&p_Var2->CriticalSection + lVar4 * 2) = 0;
    FUN_14109be38(&p_Var2->Type + lVar4 * 8,param_3);
  }
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14126849c FUN_14126849c body=329 status=ok
// SIG undefined FUN_14126849c(void)

int FUN_14126849c(LPCRITICAL_SECTION param_1,undefined8 param_2)

{
  LPCRITICAL_SECTION p_Var1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  PRTL_CRITICAL_SECTION_DEBUG p_Var8;
  longlong lVar9;
  
  EnterCriticalSection(param_1);
  if (*(int *)((longlong)&param_1[1].OwningThread + 4) < 1) {
    p_Var1 = param_1 + 1;
    iVar2 = param_1[1].LockCount;
    iVar7 = 0;
    if (0 < iVar2) {
      iVar6 = 0;
      do {
        if (((*(int *)(&p_Var1->DebugInfo->CriticalSection + (longlong)iVar6 * 2) == 0) ||
            (plVar3 = *(longlong **)(&p_Var1->DebugInfo->Type + (longlong)iVar6 * 8),
            plVar3 == (longlong *)0x0)) ||
           ((cVar5 = (**(code **)(*plVar3 + 0x20))(plVar3,param_2), cVar5 != '\0' ||
            (cVar5 = (**(code **)(*plVar3 + 0x28))(plVar3), cVar5 != '\0')))) {
          FUN_14005b288(p_Var1,iVar6);
          iVar7 = iVar7 + 1;
        }
        else {
          iVar6 = iVar6 + 1;
        }
        iVar2 = param_1[1].LockCount;
      } while (iVar6 < iVar2);
    }
    iVar6 = 2;
    if (2 < iVar2 * 2) {
      iVar6 = iVar2 * 2;
    }
    *(int *)&param_1[1].OwningThread = iVar6;
    if (param_1[1].RecursionCount != iVar2) {
      FUN_14045812c(p_Var1);
    }
  }
  else if ((longlong)param_1[1].LockCount == 0) {
    iVar7 = 0;
  }
  else {
    p_Var8 = param_1[1].DebugInfo;
    lVar9 = (longlong)param_1[1].LockCount << 4;
    iVar7 = 0;
    do {
      if (((*(int *)&p_Var8->CriticalSection != 0) &&
          (plVar3 = *(longlong **)p_Var8, plVar3 != (longlong *)0x0)) &&
         (cVar5 = (**(code **)(*plVar3 + 0x20))(plVar3,param_2), cVar5 != '\0')) {
        if ((*(int *)&p_Var8->CriticalSection != 0) &&
           (puVar4 = *(undefined8 **)p_Var8, puVar4 != (undefined8 *)0x0)) {
          (**(code **)*puVar4)(puVar4,0);
          FUN_1446efa72(p_Var8,0,0,0x10);
          *(undefined4 *)&p_Var8->CriticalSection = 0;
        }
        iVar7 = iVar7 + 1;
      }
      p_Var8 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Var8->ProcessLocksList;
      lVar9 = lVar9 + -0x10;
    } while (lVar9 != 0);
    if (0 < iVar7) {
      *(undefined4 *)&param_1[1].OwningThread = 0;
    }
  }
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  return iVar7;
}



// FUNCTION 1412685e6 FUN_1412685e6 body=290 status=ok
// SIG undefined FUN_1412685e6(void)

void FUN_1412685e6(longlong param_1)

{
  ulonglong *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  
  FUN_140999504();
  puVar1 = (ulonglong *)(param_1 + 0x10);
  FUN_14586309a(&DAT_14ca985a0,puVar1);
  puVar3 = *(undefined8 **)(param_1 + 0x98);
  if (*(longlong *)(param_1 + 0x90) != 0) {
    *(undefined8 **)(*(longlong *)(param_1 + 0x90) + 8) = puVar3;
  }
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = *(undefined8 *)(param_1 + 0x90);
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  plVar7 = (longlong *)FUN_140945e89();
  uVar6 = *(uint *)(plVar7 + 1);
  lVar4 = *plVar7;
  if ((int)uVar6 < 1) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    uVar8 = uVar6;
    do {
      uVar2 = (uVar8 >> 1) + uVar9;
      if (*(ulonglong *)(*(longlong *)(lVar4 + (ulonglong)uVar2 * 8) + 0x10) < *puVar1) {
        uVar9 = uVar2 + (uVar8 & 1);
      }
      bVar5 = 1 < uVar8;
      uVar8 = uVar8 >> 1;
    } while (bVar5);
  }
  if (((int)uVar6 <= (int)uVar9) ||
     (*puVar1 < *(ulonglong *)(*(longlong *)(lVar4 + (ulonglong)uVar9 * 8) + 0x10))) {
    uVar9 = 0xffffffff;
  }
  if (~uVar9 + uVar6 != 0) {
    memmove((void *)(lVar4 + (longlong)(int)uVar9 * 8),
            (void *)(lVar4 + (longlong)(int)uVar9 * 8 + 8),(longlong)(int)(~uVar9 + uVar6) << 3);
    uVar6 = *(uint *)(plVar7 + 1);
  }
  *(uint *)(plVar7 + 1) = uVar6 - 1;
  FUN_145863006(plVar7);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 141268708 FUN_141268708 body=274 status=ok
// SIG undefined FUN_141268708(void)

void FUN_141268708(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined ***pppuVar6;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *local_70;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar5 = FUN_14126888e();
  if (uVar5 != 0) {
    iVar3 = *(int *)(param_1 + 0x3c);
    uVar4 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    local_68[0] = (undefined1 *)CONCAT44(local_68[0]._4_4_,uVar4 >> 0x10 ^ uVar4);
    FUN_1448d5e3c(&local_78,local_68);
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14b9c0380;
    local_68[0] = &LAB_1442bb322;
    local_40 = param_1;
    FUN_14126881c(*(undefined8 *)(local_78 + 0xe0 + (ulonglong)(iVar3 != 0) * 0x10),local_68);
    if (local_68[0] != (undefined1 *)0x0) {
      pppuVar6 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar6 = &local_48;
      }
      (*(code *)(*pppuVar6)[2])();
    }
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_70 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar2 = (int *)((longlong)local_70 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_70 + 0x10))(local_70);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14126881c FUN_14126881c body=114 status=ok
// SIG undefined FUN_14126881c(void)

void FUN_14126881c(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (*param_2 != 0) {
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x638));
    pcVar1 = (code *)*param_2;
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
    uVar3 = (**(code **)(*plVar4 + 8))(plVar4);
    cVar2 = (*pcVar1)(uVar3,param_1);
    if (cVar2 != '\0') {
      *(int *)(param_1 + 0x630) = *(int *)(param_1 + 0x630) + 1;
    }
                    /* WARNING: Could not recover jumptable at 0x000141268875. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x638));
    return;
  }
  return;
}



// FUNCTION 14126888e FUN_14126888e body=566 status=ok
// SIG undefined FUN_14126888e(void)

longlong FUN_14126888e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
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
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *(longlong *)(param_1 + 0x30);
  if (lVar3 != 0) {
    if (DAT_14caf9cd0 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1463c0cc2;
      local_48 = &LAB_147c9db5b;
      local_50 = &LAB_1463f9c44;
      local_58 = L"Game";
      local_60 = 0x2000000000;
      local_68 = 0x10000004;
      local_70 = 8;
      local_78 = 0x958;
      FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0,FUN_1463f9c22);
      lVar3 = *(longlong *)(param_1 + 0x30);
      if (lVar3 == 0) goto LAB_141268aae;
    }
    if ((((DAT_14caf9cd0 != 0) && (lVar2 = *(longlong *)(lVar3 + 0x10), lVar2 != 0)) &&
        (*(int *)(DAT_14caf9cd0 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14caf9cd0 + 0x38) * 8) ==
        DAT_14caf9cd0 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
    }
    if (DAT_14cae9568 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1417de738;
      local_30 = (code *)&LAB_145893408;
      local_38 = &LAB_1458cbbd2;
      local_48 = &LAB_147ba21f1;
      local_50 = &LAB_1463e9233;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x1000000c;
      local_70 = 8;
      local_78 = 0x2b8;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
      lVar3 = *(longlong *)(param_1 + 0x30);
      if (lVar3 == 0) goto LAB_141268aae;
    }
    lVar2 = 0;
    if ((DAT_14cae9568 == 0) || (lVar1 = *(longlong *)(lVar3 + 0x10), lVar1 == 0))
    goto LAB_141268932;
    if (*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar1 + 0x38)) {
      lVar2 = 0;
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8)
          == DAT_14cae9568 + 0x30) {
        lVar2 = lVar3;
      }
      goto LAB_141268932;
    }
  }
LAB_141268aae:
  lVar2 = 0;
LAB_141268932:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 141268ad6 FUN_141268ad6 body=39 status=ok
// SIG undefined FUN_141268ad6(void)

void FUN_141268ad6(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_141268afe();
  *param_3 = uVar1;
  return;
}



// FUNCTION 141268afe FUN_141268afe body=426 status=ok
// SIG undefined FUN_141268afe(void)

undefined4 FUN_141268afe(longlong param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined1 auStack_d8 [40];
  char local_b0 [16];
  longlong *local_a0;
  undefined4 local_88 [2];
  undefined4 local_80;
  undefined4 uStack_7c;
  ushort local_68;
  byte local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0[0] = '\0';
  local_88[0] = 0;
  FUN_1456bb102(local_b0,param_1);
  puVar4 = &local_80;
  FUN_1447c3578(param_1 + 0x868,puVar4,local_b0);
  if (local_60 == 3) {
    uVar3 = 3;
    uVar6 = local_80;
  }
  else {
    puVar5 = &local_58;
    FUN_1400b56fe(puVar5,&local_80,3);
    uVar6 = 0;
    if (local_38 != 0) {
      uVar6 = local_58;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_40) {
        puVar5 = (undefined4 *)CONCAT44(uStack_54,local_58);
      }
      (*pcVar2)(puVar5);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(CONCAT44(uStack_54,local_58));
    }
    uVar3 = (uint)local_60;
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar3 * 0x120));
  if (pcVar2 != (code *)0x0) {
    if (0x18 < local_68) {
      puVar4 = (undefined4 *)CONCAT44(uStack_7c,local_80);
    }
    (*pcVar2)(puVar4);
  }
  if (0x18 < local_68) {
    FUN_1400020a8(CONCAT44(uStack_7c,local_80));
  }
  FUN_1448173f8(local_88);
  if ((local_b0[0] == '\x03') && (local_a0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_a0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_a0 + 0x10))();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141268caa FUN_141268caa body=95 status=ok
// SIG undefined FUN_141268caa(void)

ulonglong FUN_141268caa(longlong param_1)

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
LAB_141268cec:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_141268cec;
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



// FUNCTION 141268d0a FUN_141268d0a body=318 status=ok
// SIG undefined FUN_141268d0a(void)

void FUN_141268d0a(longlong param_1)

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
  
  *(undefined1 *)(param_1 + 0x19) = 1;
  if (*(undefined1 **)(param_1 + 0x68) != (undefined1 *)0x0) {
    **(undefined1 **)(param_1 + 0x68) = 2;
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  iVar5 = *(int *)(param_1 + 0x34);
  *(int *)(param_1 + 0x34) = iVar5 + 1;
  uVar6 = (ulonglong)*(int *)(param_1 + 0x28);
  if ((longlong)uVar6 < 1) {
    *(int *)(param_1 + 0x34) = iVar5;
  }
  else {
    plVar1 = (longlong *)(param_1 + 0x20);
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
          iVar5 = *(int *)(param_1 + 0x34) + -1;
          *(int *)(param_1 + 0x34) = iVar5;
          if (!bVar8) {
            return;
          }
          goto LAB_141268da7;
        }
      }
      uVar6 = uVar11 - 1;
      bVar8 = true;
    } while (1 < uVar11);
    iVar5 = *(int *)(param_1 + 0x34) + -1;
    *(int *)(param_1 + 0x34) = iVar5;
LAB_141268da7:
    if (iVar5 < 1) {
      iVar5 = *(int *)(param_1 + 0x28);
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
          iVar7 = *(int *)(param_1 + 0x28);
        } while (iVar9 < iVar7);
      }
      iVar9 = 2;
      if (2 < iVar7 * 2) {
        iVar9 = iVar7 * 2;
      }
      *(int *)(param_1 + 0x30) = iVar9;
      if ((iVar9 < iVar5) && (*(int *)(param_1 + 0x2c) != iVar7)) {
        FUN_14045812c(plVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141268e48 FUN_141268e48 body=248 status=ok
// SIG undefined FUN_141268e48(void)

void FUN_141268e48(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  
  iVar1 = (int)param_1[1];
  lVar13 = (longlong)iVar1;
  if (lVar13 != 0) {
    plVar2 = (longlong *)*param_1;
    iVar9 = 0;
    bVar5 = *plVar2 == *(longlong *)*param_2;
    iVar10 = 0;
    do {
      lVar7 = (longlong)iVar10;
      iVar4 = iVar10 + 1;
      if (iVar10 + 1 < iVar1) {
        iVar4 = iVar1;
      }
      plVar6 = plVar2 + lVar7 * 2 + 2;
      iVar11 = iVar10;
      lVar8 = lVar7;
      do {
        lVar8 = lVar8 + 1;
        iVar12 = iVar4;
        if (lVar13 <= lVar8) break;
        lVar3 = *plVar6;
        iVar11 = iVar11 + 1;
        plVar6 = plVar6 + 2;
        iVar12 = iVar11;
      } while (bVar5 == (lVar3 == *(longlong *)*param_2));
      iVar4 = iVar12 - iVar10;
      if (bVar5 == false) {
        if (iVar9 != iVar10) {
          memmove(plVar2 + (longlong)iVar9 * 2,plVar2 + lVar7 * 2,(longlong)iVar4 << 4);
        }
        iVar9 = iVar9 + iVar4;
      }
      else {
        FUN_140bb59c9(plVar2 + lVar7 * 2,iVar4);
      }
      bVar5 = (bool)(bVar5 ^ 1);
      iVar10 = iVar12;
    } while (lVar8 < lVar13);
    *(int *)(param_1 + 1) = iVar9;
  }
  return;
}



// FUNCTION 141268f40 FUN_141268f40 body=615 status=ok
// SIG undefined FUN_141268f40(void)

void FUN_141268f40(uint *param_1,undefined4 *param_2,char param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_f8 [32];
  undefined2 *local_d8;
  undefined8 *local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined2 local_b0 [2];
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  byte local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (((param_1[1] != 0) && (uVar2 = *param_1, -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc)) {
    plVar9 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((plVar9 != (longlong *)0x0) && (*(uint *)(plVar9 + 2) == param_1[1])) &&
       (((*(uint *)(plVar9 + 1) & 0x10200000) == 0 &&
        (plVar9 = (longlong *)*plVar9, plVar9 != (longlong *)0x0)))) {
      lVar6 = (**(code **)(*plVar9 + 0x180))(plVar9);
      if (lVar6 != 0) {
        if (param_3 == '\0') {
          lVar8 = *(longlong *)(param_2 + 0xc);
          if (lVar8 != 0) {
            if (*(longlong *)(lVar6 + 0x1f0) == 0) {
              puVar7 = (undefined8 *)(lVar6 + 0x458);
            }
            else {
              puVar7 = (undefined8 *)(*(longlong *)(lVar6 + 0x1f0) + 0xf0);
            }
            uVar5 = *puVar7;
            lVar6 = FUN_144a61814(uVar5,param_2 + 0xc);
            if (lVar6 != 0) {
              FUN_1405a424c(uVar5,lVar8);
            }
            *(undefined8 *)(param_2 + 0xc) = 0;
          }
        }
        else {
          local_b8 = 0;
          FUN_14485c47a(&local_b8,plVar9);
          uVar5 = local_b8;
          if (*(longlong *)(lVar6 + 0x1f0) == 0) {
            puVar7 = (undefined8 *)(lVar6 + 0x458);
          }
          else {
            puVar7 = (undefined8 *)(*(longlong *)(lVar6 + 0x1f0) + 0xf0);
          }
          uVar3 = *param_2;
          uVar4 = *puVar7;
          uVar1 = param_2[10];
          local_c8 = (undefined8 *)0x0;
          local_c0 = 0;
          FUN_1446efa72(&local_c8,0,3,0x10);
          puVar7 = local_c8;
          local_c0 = 3;
          *local_c8 = &PTR_LAB_14a1c8830;
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
          local_c8[2] = lVar8;
          *local_c8 = &PTR_FUN_14b4302b0;
          local_c8[3] = 0;
          FUN_14485c47a(local_c8 + 3,plVar9);
          puVar7[4] = uVar5;
          *(undefined4 *)(puVar7 + 5) = uVar3;
          local_a8 = 0;
          local_a0 = 0;
          FUN_14487d8d8(&local_a8,&local_c8);
          local_68 = 1;
          local_d8 = local_b0;
          local_b0[0] = 0;
          local_ac = 0xbf800000;
          FUN_1406f4044(uVar4,param_2 + 0xc,&local_a8,uVar1);
          (*(code *)(&PTR_LAB_14a1c87a0)[local_68])(&local_a8);
          FUN_1449db362(&local_c8);
        }
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412691b4 FUN_1412691b4 body=345 status=ok
// SIG undefined FUN_1412691b4(void)

undefined8 * FUN_1412691b4(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  undefined8 local_38;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1446f470e(&local_38,L"SkeletalMeshComponent0",1);
  if (DAT_14cb63950 == 0) {
    local_50 = &local_30;
    local_30 = FUN_144a7958c;
    local_40 = FUN_14081d0ea;
    local_48 = &LAB_1464ec72a;
    local_58 = &LAB_1486f5f75;
    local_60 = &LAB_140945686;
    local_68 = L"Engine";
    local_70 = 0;
    local_78 = 0x10000004;
    local_80 = 0x10;
    local_88 = 0x19d0;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkeletalMeshComponent",&DAT_14cb63950,FUN_1464fe8ee);
  }
  lVar1 = DAT_14cb63950;
  FUN_140486538(param_2,local_38);
  FUN_14048646a(param_2 + 0x20,local_38,lVar1,0);
  FUN_14126930e(param_1,param_2);
  *param_1 = &PTR_FUN_14b222c70;
  if (param_1[0x73] != 0) {
    *(undefined1 *)(param_1[0x73] + 0x89c) = 4;
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14126930e FUN_14126930e body=531 status=ok
// SIG undefined FUN_14126930e(void)

undefined8 * FUN_14126930e(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  uint local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  undefined8 local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140312256();
  *param_1 = &PTR_FUN_14a7d7b70;
  param_1[0x7c] = 0;
  *(undefined4 *)(param_1 + 0x7d) = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3ec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3f4) = 0;
  param_1[0x80] = 0;
  *(undefined4 *)(param_1 + 0x81) = 0;
  FUN_1446f470e(&local_30,L"SkeletalMeshComponent0",1);
  if (DAT_14cad2858 == 0) {
    local_50 = &local_28;
    local_28 = FUN_144a7958c;
    local_40 = FUN_14081d0ea;
    local_48 = &LAB_146395584;
    local_58 = &LAB_147a0ba80;
    local_60 = &LAB_14575ccce;
    local_68 = L"Engine";
    local_70 = 0x40000000000;
    local_78 = 0x10000004;
    local_80 = 0x10;
    local_88 = 0x1180;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
  }
  plVar1 = param_1 + 0x73;
  local_80 = local_80 & 0xffffff00;
  local_88 = CONCAT31(local_88._1_3_,1);
  lVar2 = FUN_14048696c(param_1,local_30,DAT_14cad2858,DAT_14cad2858);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  *plVar1 = lVar2;
  *(undefined1 *)(lVar2 + 0x89c) = 1;
  (**(code **)(*(longlong *)*plVar1 + 0x728))((longlong *)*plVar1,DAT_14cacfd60,1);
  lVar2 = *plVar1;
  if (DAT_14c950c29 == '\x01') {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *plVar1;
    }
  }
  param_1[0x39] = lVar2;
  *(byte *)(param_1 + 0x72) = *(byte *)(param_1 + 0x72) | 1;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141269522 FUN_141269522 body=1141 status=ok
// SIG undefined FUN_141269522(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141269522(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  longlong *local_60;
  longlong *local_58;
  uint local_4c;
  ulonglong local_48;
  
  uVar5 = DAT_14cab61f8;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *(longlong *)(param_1 + 0x28);
  uVar2 = *(uint *)(lVar3 + 0x520);
  lVar4 = *(longlong *)(lVar3 + 0x518);
  uVar10 = 0;
  if (0 < (int)uVar2) {
    uVar10 = 0;
    uVar13 = (ulonglong)uVar2;
    do {
      uVar14 = (int)(uVar13 >> 1) + (int)uVar10;
      uVar12 = (uint)uVar13;
      if (*(uint *)(lVar4 + (ulonglong)uVar14 * 0x18) < DAT_14cab61f8) {
        uVar10 = (ulonglong)(uVar14 + (uVar12 & 1));
      }
      uVar13 = uVar13 >> 1;
    } while (1 < uVar12);
  }
  if (((int)uVar10 < (int)uVar2) && (*(uint *)(lVar4 + uVar10 * 0x18) <= DAT_14cab61f8)) {
    lVar4 = lVar4 + uVar10 * 0x18;
    puVar8 = (undefined8 *)(lVar4 + 8);
    if (puVar8 == (undefined8 *)0x0) goto LAB_14126956d;
    plVar17 = (longlong *)*puVar8;
    plVar11 = *(longlong **)(lVar4 + 0x10);
    if (plVar11 == (longlong *)0x0) {
      plVar11 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      LOCK();
      plVar15 = plVar11 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
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
  else {
LAB_14126956d:
    plVar11 = (longlong *)0x0;
    plVar17 = (longlong *)0x0;
  }
  if (plVar17 == (longlong *)0x0) {
    plVar6 = (longlong *)FUN_14001cc68(0xf0);
    plVar6[1] = (longlong)&DAT_100000001;
    *plVar6 = (longlong)&PTR_FUN_14a4e0c30;
    memset(plVar6 + 3,0,0xc0);
    *(undefined8 *)((longlong)plVar6 + 0x54) = 0xffffffff00000080;
    plVar6[0xf] = 0;
    plVar6[0x10] = 0;
    *(undefined8 *)((longlong)plVar6 + 0xa4) = 0xffffffff00000080;
    *(undefined8 *)((longlong)plVar6 + 0xac) = 0;
    *(undefined8 *)((longlong)plVar6 + 0xb4) = 0;
    *(undefined8 *)((longlong)plVar6 + 0xbc) = 0;
    *(undefined8 *)((longlong)plVar6 + 0xc4) = 0;
    *(undefined8 *)((longlong)plVar6 + 0xcc) = 0xffffffff00000000;
    plVar6[0x1b] = 0;
    plVar6[0x1c] = 0;
    plVar17 = plVar6 + 2;
    *plVar17 = (longlong)&PTR_FUN_14a4e0c50;
    ppuVar7 = &PTR_FUN_14a4e0ca0;
    plVar6[0x1d] = (longlong)&PTR_FUN_14a4e0ca0;
    plVar15 = plVar6;
    if (plVar17 == (longlong *)0x0) {
LAB_14126986c:
      local_64 = (undefined4)CONCAT71((int7)((ulonglong)ppuVar7 >> 8),1);
      if (plVar11 == (longlong *)0x0) {
        plVar15 = (longlong *)0x0;
      }
      else {
LAB_1412698d6:
        LOCK();
        plVar16 = plVar11 + 1;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)*plVar16 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
        plVar11 = plVar6;
        if ((char)local_64 == '\0') goto LAB_141269691;
      }
    }
    else {
      if (plVar6 == (longlong *)0x0) {
        _DAT_00000018 = 0x10;
        plVar16 = (longlong *)&DAT_00000020;
        plVar9 = _DAT_00000020;
        if (_DAT_00000020 != (longlong *)0x0) {
LAB_141269853:
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            ppuVar7 = (undefined **)(**(code **)(*plVar9 + 0x10))();
          }
          *plVar16 = (longlong)plVar6;
          if (plVar6 != (longlong *)0x0) goto LAB_14126966a;
        }
        goto LAB_14126986c;
      }
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      plVar6[3] = (longlong)plVar17;
      if ((longlong *)plVar6[4] != plVar6) {
        LOCK();
        *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
        UNLOCK();
        if ((longlong *)plVar6[4] != (longlong *)0x0) {
          plVar16 = plVar6 + 4;
          plVar9 = (longlong *)plVar6[4];
          goto LAB_141269853;
        }
        plVar6[4] = (longlong)plVar6;
      }
LAB_14126966a:
      LOCK();
      plVar16 = plVar6 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      if (plVar6 != plVar11) {
        if (plVar11 == (longlong *)0x0) goto LAB_141269691;
        local_64 = 0;
        goto LAB_1412698d6;
      }
      LOCK();
      plVar16 = plVar6 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      plVar15 = plVar11;
      if ((int)*plVar16 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
LAB_141269691:
      plVar11 = plVar15;
      LOCK();
      plVar16 = plVar6 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      plVar15 = plVar11;
      if ((int)*plVar16 == 0) {
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
    (**(code **)(plVar6[2] + 0x10))(plVar17,uVar5,lVar3 + 0x430);
    if (plVar15 == (longlong *)0x0) {
      local_58 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
      local_58 = plVar15;
    }
    local_4c = uVar5;
    local_60 = plVar17;
    FUN_140dd6482(lVar3 + 0x518,&local_4c,&local_60);
    plVar6 = local_58;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar16 = local_58 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
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
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar15 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
    }
  }
  *(longlong **)(param_1 + 0x40) = plVar17;
  plVar17 = *(longlong **)(param_1 + 0x48);
  if (plVar11 != plVar17) {
    *(longlong **)(param_1 + 0x48) = plVar11;
    if (plVar17 == (longlong *)0x0) goto LAB_141269728;
    LOCK();
    plVar11 = plVar17 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*plVar17)(plVar17);
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
      }
    }
    plVar11 = (longlong *)0x0;
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar17 = plVar11 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
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
LAB_141269728:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141269998 FUN_141269998 body=25 status=ok
// SIG undefined FUN_141269998(void)

void FUN_141269998(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xb0) = param_3;
  *(undefined4 *)(param_1 + 0xc0) = param_2;
  FUN_140dd6aee(param_1 + 200);
  return;
}



// FUNCTION 1412699b2 FUN_1412699b2 body=85 status=ok
// SIG undefined FUN_1412699b2(void)

void FUN_1412699b2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar1;
    }
  }
  else {
    uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
  }
  uVar2 = 0x7fffffff;
  if ((int)uVar1 <= (int)uVar3) {
    uVar2 = uVar3;
  }
  *(uint *)(param_1 + 0xc) = uVar2;
  FUN_141269a08();
  return;
}



// FUNCTION 141269a08 FUN_141269a08 body=450 status=ok
// SIG undefined FUN_141269a08(void)

void FUN_141269a08(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,0x10);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_141269b23:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_141269b60:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 0x10;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_141269a5e;
LAB_141269a53:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_141269a5e:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 3U & 0xfffffffffffffffc);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0xffb) goto code_r0x000141269a8a;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x5c,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 4 + 0x17;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_141269ae0:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_141269b60;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_141269b23;
code_r0x000141269a8a:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_141269ae0;
    }
  }
  goto LAB_141269a53;
}



// FUNCTION 141269bca FUN_141269bca body=1026 status=ok
// SIG undefined FUN_141269bca(void)

void FUN_141269bca(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 local_38;
  int local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uStack_2c = 0;
  uStack_28 = 0;
  local_24 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_2c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_2c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_2c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_2c = (undefined4)uVar2;
      uStack_28 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_2c);
    }
  }
  puVar4 = *(undefined4 **)(param_2 + 0x38);
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_14067a048;
      local_50 = 0;
      local_58 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
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
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_30 = (int)uVar2;
      uStack_2c = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_30);
    }
  }
  iVar5 = local_30;
  local_38 = 0;
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
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_38 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_38);
    }
  }
  puVar6 = &uStack_2c;
  if (puVar4 != (undefined4 *)0x0) {
    puVar6 = puVar4;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_141269fce(puVar6,iVar5 != 0,local_38);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141269fce FUN_141269fce body=147 status=ok
// SIG undefined FUN_141269fce(void)

void FUN_141269fce(undefined8 param_1,byte param_2)

{
  code *pcVar1;
  uint *puVar2;
  undefined1 auStack_58 [32];
  uint local_38;
  undefined4 uStack_34;
  ushort local_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = &local_38;
  local_20 = 4;
  local_38 = (uint)param_2;
  local_18 = 1;
  FUN_141107e97(param_1,puVar2);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_18 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_20) {
      puVar2 = (uint *)CONCAT44(uStack_34,local_38);
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < local_20) {
    FUN_1400020a8(CONCAT44(uStack_34,local_38));
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14126a062 FUN_14126a062 body=147 status=ok
// SIG undefined FUN_14126a062(void)

void FUN_14126a062(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    if (lVar3 != lVar2) {
      do {
        plVar1 = *(longlong **)(lVar3 + 0x40);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x20))(plVar1,(longlong *)(lVar3 + 8) != plVar1);
          *(undefined8 *)(lVar3 + 0x40) = 0;
        }
        lVar3 = lVar3 + 0x48;
      } while (lVar3 != lVar2);
      lVar3 = *param_1;
    }
    lVar2 = lVar3;
    if ((0xfff < (ulonglong)(param_1[2] - lVar3)) &&
       (lVar2 = *(longlong *)(lVar3 + -8), 0x1f < (ulonglong)((lVar3 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 14126a0f6 FUN_14126a0f6 body=147 status=ok
// SIG undefined FUN_14126a0f6(void)

void FUN_14126a0f6(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    if (lVar3 != lVar2) {
      do {
        plVar1 = *(longlong **)(lVar3 + 0x40);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x20))(plVar1,(longlong *)(lVar3 + 8) != plVar1);
          *(undefined8 *)(lVar3 + 0x40) = 0;
        }
        lVar3 = lVar3 + 0x48;
      } while (lVar3 != lVar2);
      lVar3 = *param_1;
    }
    lVar2 = lVar3;
    if ((0xfff < (ulonglong)(param_1[2] - lVar3)) &&
       (lVar2 = *(longlong *)(lVar3 + -8), 0x1f < (ulonglong)((lVar3 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 14126a18a FUN_14126a18a body=147 status=ok
// SIG undefined FUN_14126a18a(void)

void FUN_14126a18a(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    if (lVar3 != lVar2) {
      do {
        plVar1 = *(longlong **)(lVar3 + 0x40);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x20))(plVar1,(longlong *)(lVar3 + 8) != plVar1);
          *(undefined8 *)(lVar3 + 0x40) = 0;
        }
        lVar3 = lVar3 + 0x48;
      } while (lVar3 != lVar2);
      lVar3 = *param_1;
    }
    lVar2 = lVar3;
    if ((0xfff < (ulonglong)(param_1[2] - lVar3)) &&
       (lVar2 = *(longlong *)(lVar3 + -8), 0x1f < (ulonglong)((lVar3 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 14126a21e FUN_14126a21e body=328 status=ok
// SIG undefined FUN_14126a21e(void)

void FUN_14126a21e(longlong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar2 = *param_2;
  if (0x38e38e38e38e38e < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  lVar3 = *param_1;
  lVar4 = param_1[1];
  if (uVar2 < 0x39) {
    if (uVar2 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = FUN_14001cc68(uVar2 * 0x48,0x10);
    }
  }
  else {
    lVar6 = FUN_140c1ca1d(uVar2 * 0x48);
  }
  lVar7 = *param_1;
  lVar8 = param_1[1];
  if (lVar7 != lVar8) {
    lVar9 = 0;
    do {
      *(undefined4 *)(lVar6 + lVar9) = *(undefined4 *)(lVar7 + lVar9);
      *(undefined8 *)((undefined4 *)(lVar6 + lVar9) + 0x10) = 0;
      FUN_148adf692();
      lVar1 = lVar7 + lVar9;
      lVar9 = lVar9 + 0x48;
    } while (lVar1 + 0x48 != lVar8);
    lVar7 = *param_1;
  }
  uVar2 = *param_2;
  if (lVar7 != 0) {
    lVar8 = param_1[1];
    if (lVar7 != lVar8) {
      do {
        plVar5 = *(longlong **)(lVar7 + 0x40);
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x20))(plVar5,(longlong *)(lVar7 + 8) != plVar5);
          *(undefined8 *)(lVar7 + 0x40) = 0;
        }
        lVar7 = lVar7 + 0x48;
      } while (lVar7 != lVar8);
      lVar7 = *param_1;
    }
    lVar8 = lVar7;
    if ((0xfff < (ulonglong)(param_1[2] - lVar7)) &&
       (lVar8 = *(longlong *)(lVar7 + -8), 0x1f < (ulonglong)((lVar7 + -8) - lVar8))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar8);
  }
  *param_1 = lVar6;
  param_1[1] = (lVar4 - lVar3) + lVar6;
  param_1[2] = lVar6 + uVar2 * 0x48;
  return;
}



// FUNCTION 14126a368 FUN_14126a368 body=160 status=ok
// SIG undefined FUN_14126a368(void)

void FUN_14126a368(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar2 = *param_1;
  lVar3 = param_1[1];
  lVar6 = FUN_14126a408(*param_2);
  lVar4 = *param_1;
  lVar5 = param_1[1];
  if (lVar4 != lVar5) {
    lVar7 = 0;
    do {
      *(undefined4 *)(lVar6 + lVar7) = *(undefined4 *)(lVar4 + lVar7);
      *(undefined8 *)(lVar6 + 0x40 + lVar7) = 0;
      FUN_1460d5eca(lVar6 + lVar7 + 8);
      lVar1 = lVar4 + lVar7;
      lVar7 = lVar7 + 0x48;
    } while (lVar1 + 0x48 != lVar5);
  }
  FUN_14126a45c(param_1,lVar6,(lVar3 - lVar2 >> 3) * -0x71c71c71c71c71c7,*param_2);
  return;
}



// FUNCTION 14126a408 FUN_14126a408 body=83 status=ok
// SIG undefined FUN_14126a408(void)

undefined8 FUN_14126a408(ulonglong param_1)

{
  undefined8 uVar1;
  
  if (0x38e38e38e38e38e < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (param_1 < 0x39) {
    if (param_1 != 0) {
      uVar1 = FUN_14001cc68(param_1 * 0x48,0x10);
      return uVar1;
    }
    return 0;
  }
  uVar1 = FUN_140c1ca1d(param_1 * 0x48);
  return uVar1;
}



// FUNCTION 14126a45c FUN_14126a45c body=182 status=ok
// SIG undefined FUN_14126a45c(void)

void FUN_14126a45c(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = param_1[1];
    if (lVar2 != lVar3) {
      do {
        plVar1 = *(longlong **)(lVar2 + 0x40);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x20))(plVar1,(longlong *)(lVar2 + 8) != plVar1);
          *(undefined8 *)(lVar2 + 0x40) = 0;
        }
        lVar2 = lVar2 + 0x48;
      } while (lVar2 != lVar3);
      lVar2 = *param_1;
    }
    lVar3 = lVar2;
    if ((0xfff < (ulonglong)(param_1[2] - lVar2)) &&
       (lVar3 = *(longlong *)(lVar2 + -8), 0x1f < (ulonglong)((lVar2 + -8) - lVar3))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar3);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 0x48;
  param_1[2] = param_2 + param_4 * 0x48;
  return;
}



// FUNCTION 14126a514 FUN_14126a514 body=328 status=ok
// SIG undefined FUN_14126a514(void)

void FUN_14126a514(longlong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar2 = *param_2;
  if (0x38e38e38e38e38e < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  lVar3 = *param_1;
  lVar4 = param_1[1];
  if (uVar2 < 0x39) {
    if (uVar2 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = FUN_14001cc68(uVar2 * 0x48,0x10);
    }
  }
  else {
    lVar6 = FUN_140c1ca1d(uVar2 * 0x48);
  }
  lVar7 = *param_1;
  lVar8 = param_1[1];
  if (lVar7 != lVar8) {
    lVar9 = 0;
    do {
      *(undefined4 *)(lVar6 + lVar9) = *(undefined4 *)(lVar7 + lVar9);
      *(undefined8 *)((undefined4 *)(lVar6 + lVar9) + 0x10) = 0;
      FUN_148adf87e();
      lVar1 = lVar7 + lVar9;
      lVar9 = lVar9 + 0x48;
    } while (lVar1 + 0x48 != lVar8);
    lVar7 = *param_1;
  }
  uVar2 = *param_2;
  if (lVar7 != 0) {
    lVar8 = param_1[1];
    if (lVar7 != lVar8) {
      do {
        plVar5 = *(longlong **)(lVar7 + 0x40);
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x20))(plVar5,(longlong *)(lVar7 + 8) != plVar5);
          *(undefined8 *)(lVar7 + 0x40) = 0;
        }
        lVar7 = lVar7 + 0x48;
      } while (lVar7 != lVar8);
      lVar7 = *param_1;
    }
    lVar8 = lVar7;
    if ((0xfff < (ulonglong)(param_1[2] - lVar7)) &&
       (lVar8 = *(longlong *)(lVar7 + -8), 0x1f < (ulonglong)((lVar7 + -8) - lVar8))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar8);
  }
  *param_1 = lVar6;
  param_1[1] = (lVar4 - lVar3) + lVar6;
  param_1[2] = lVar6 + uVar2 * 0x48;
  return;
}



// FUNCTION 14126a65e thunk_FUN_1411412f4 body=5 status=ok
// SIG undefined thunk_FUN_1411412f4(void)

void thunk_FUN_1411412f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aed80a0;
  param_1[5] = &PTR_FUN_14aed8420;
  if ((longlong *)param_1[0x11] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x11] + 0x10))();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14126a664 FUN_14126a664 body=368 status=ok
// SIG undefined FUN_14126a664(void)

void FUN_14126a664(longlong *param_1)

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
  iVar6 = (int)param_1[9];
  if (iVar6 < 2) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
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
           ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
               0xffffffff;
          local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
          FUN_1449c0562(&local_70);
          iVar4 = local_60._4_4_;
          uVar2 = local_60;
        } while (local_78 != param_1 ||
                 ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
      }
    }
    else if (iVar6 == 1) {
      lVar3 = 0;
      do {
        *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
        lVar3 = lVar3 + 1;
      } while (lVar3 < (int)param_1[9]);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
  }
  FUN_14126a7e8(param_1);
  *(undefined4 *)(param_1 + 9) = 1;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_14126a9c8(param_1);
  return;
}



// FUNCTION 14126a7e8 FUN_14126a7e8 body=480 status=ok
// SIG undefined FUN_14126a7e8(void)

void FUN_14126a7e8(longlong *param_1)

{
  uint *puVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    uVar10 = 0;
    uVar13 = 1;
    iVar4 = 0;
    iVar11 = 0;
  }
  else {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar14 = *puVar8;
    if (uVar14 == 0) {
      iVar4 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar4 = iVar3 + -1;
      }
      uVar10 = 0;
      uVar13 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar13 = uVar10;
      }
      iVar11 = 0;
      do {
        if (uVar13 == uVar10) goto LAB_14126a939;
        iVar11 = iVar11 + 0x20;
        uVar14 = puVar8[uVar10 + 1];
        uVar10 = uVar10 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar10 = 0;
      iVar11 = 0;
    }
    uVar13 = (ulonglong)(-uVar14 & uVar14);
    uVar2 = uVar13 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar4 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar4) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 < iVar3) {
    uVar14 = 0xffffffff;
    do {
      lVar12 = *(longlong *)(*param_1 + 0x10 + (longlong)iVar4 * 0x20);
      if (lVar12 != 0) {
        LOCK();
        puVar8 = (uint *)(lVar12 + 8);
        uVar5 = *puVar8;
        *puVar8 = *puVar8 - 1;
        UNLOCK();
        if ((uVar5 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
      uVar14 = uVar14 & ~(uint)uVar13;
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = puVar1;
      }
      iVar3 = (int)param_1[5];
      iVar4 = (int)uVar10;
      lVar12 = (longlong)iVar4;
      uVar5 = puVar8[lVar12] & uVar14;
      if (uVar5 == 0) {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar7 = iVar6;
        if (iVar6 < iVar4) {
          iVar7 = iVar4;
        }
        if (iVar6 <= iVar4) break;
        lVar9 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar5 = puVar8[lVar12 + lVar9 + 1];
          if (uVar5 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar7 - lVar12 == lVar9) goto LAB_14126a939;
        }
        uVar10 = (ulonglong)(iVar4 + (int)lVar9 + 1);
        uVar14 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar5 & uVar5);
      uVar2 = uVar13 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar4 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar4 < iVar3);
  }
LAB_14126a939:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 14126a9c8 FUN_14126a9c8 body=718 status=ok
// SIG undefined FUN_14126a9c8(void)

void FUN_14126a9c8(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar9 = *(uint *)(param_1 + 9);
  if (uVar9 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar9 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar9,4);
    if ((int)uVar9 < 1) goto LAB_14126aa3d;
  }
  uVar2 = 0;
  do {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
         0xffffffff;
    uVar2 = uVar2 + 1;
  } while (uVar9 != uVar2);
LAB_14126aa3d:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar13 = 1;
    iVar6 = 0;
    iVar4 = 0;
  }
  else {
    puVar12 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar12 = (uint *)(param_1 + 2);
    }
    uVar9 = *puVar12;
    if (uVar9 == 0) {
      iVar6 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar6 = iVar14 + -1;
      }
      uVar3 = 0;
      uVar13 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar13 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar13 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar9 = puVar12[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar9 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar13 = (ulonglong)(-uVar9 & uVar9);
    uVar16 = uVar13 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar6 = (iVar4 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar6) {
      iVar6 = iVar14;
    }
  }
  if (iVar6 < iVar14) {
    uVar9 = 0xffffffff;
    do {
      lVar8 = *param_1;
      lVar7 = (longlong)iVar6 * 0x20;
      uVar16 = *(ulonglong *)(lVar8 + 8 + lVar7);
      uVar15 = *(longlong *)(lVar8 + lVar7) + 0x9ae16a3b2f90404f;
      uVar15 = ((uVar15 << 0x27 | uVar15 >> 0x19) + uVar16) * -0x651e95c4d06fbf91;
      uVar16 = (*(longlong *)(lVar8 + lVar7) +
                (uVar16 << 0x1b | uVar16 >> 0x25) * -0x651e95c4d06fbf91 + 0x9ae16a3b2f90404f ^
               uVar15) * -0x651e95c4d06fbf91;
      lVar17 = (uVar16 >> 0x2f ^ uVar15 ^ uVar16) * -0x651e95c4d06fbf91;
      uVar16 = (longlong)(int)(((uint)((ulonglong)lVar17 >> 0x2f) ^ (uint)lVar17) * 0x2f90406f) &
               (longlong)(int)param_1[9] - 1U;
      iVar14 = (int)uVar16;
      *(int *)(lVar8 + 0x1c + lVar7) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar8 + 0x18 + lVar7) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar16) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6;
      uVar9 = ~(uint)uVar13 & uVar9;
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = (uint *)(param_1 + 2);
      }
      iVar14 = (int)param_1[5];
      iVar6 = (int)uVar3;
      lVar8 = (longlong)iVar6;
      uVar2 = puVar12[lVar8] & uVar9;
      if (uVar2 == 0) {
        iVar10 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar10 = iVar14 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar11 = iVar10;
        if (iVar10 < iVar6) {
          iVar11 = iVar6;
        }
        if (iVar10 <= iVar6) {
          return;
        }
        lVar7 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar12[lVar8 + lVar7 + 1];
          if (uVar2 != 0) break;
          lVar7 = lVar7 + 1;
          if (iVar11 - lVar8 == lVar7) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar6 + (int)lVar7 + 1);
        uVar9 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar2 & uVar2);
      uVar16 = uVar13 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar6 = (iVar4 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar14);
  }
  return;
}



// FUNCTION 14126ac96 FUN_14126ac96 body=2049 status=ok
// SIG undefined FUN_14126ac96(void)

bool FUN_14126ac96(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  byte bVar10;
  int iVar11;
  undefined8 *puVar12;
  int iVar13;
  code *pcVar14;
  bool bVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_118 [32];
  undefined2 *local_f8;
  undefined1 local_f0;
  code *local_e0;
  int local_d8;
  undefined2 local_d0;
  undefined2 uStack_ce;
  undefined4 uStack_cc;
  longlong local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  byte local_88;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar7 = *(longlong *)(param_1 + 0xd60);
  if ((lVar7 == DAT_14cb94e30) || ((*(byte *)(param_1 + 0xb90) & 0x10) != 0)) {
    bVar15 = false;
    if ((*(char *)(param_1 + 0xb91) != '\0') || (lVar7 == DAT_14cb94e38)) goto LAB_14126b033;
LAB_14126ad03:
    if (*(longlong *)(param_1 + 0xba0) == 0) {
      puVar12 = &DAT_14cb94e20;
      if (*(char *)(param_1 + 0xd45) == '\x02') {
        fVar18 = 0.0;
      }
      else {
        fVar18 = *(float *)(param_1 + 0xb6c);
        if ((*(longlong *)(param_1 + 0xb18) != 0) &&
           (*(longlong **)(param_1 + 0xb20) != (longlong *)0x0)) {
          fVar17 = (float)(**(code **)(**(longlong **)(param_1 + 0xb20) + 0x40))();
          fVar18 = fVar18 * fVar17;
          if (*(char *)(param_1 + 0xd45) == '\x02') goto LAB_14126ad60;
        }
        puVar12 = &DAT_14cb94e00;
      }
LAB_14126ad60:
      local_f0 = 0;
      local_f8 = (undefined2 *)((ulonglong)local_f8 & 0xffffffffffffff00);
      cVar3 = FUN_140dd024a(param_1,*puVar12);
      *(char *)(param_1 + 0xb91) = cVar3;
      if (cVar3 != '\0') {
        *(byte *)(param_1 + 0xb90) = *(byte *)(param_1 + 0xb90) | 0x20;
        if (fVar18 <= 0.0) {
          if ((*(longlong *)(param_1 + 0xb38) != 0) &&
             (*(longlong **)(param_1 + 0xb40) != (longlong *)0x0)) {
            uVar5 = (**(code **)(**(longlong **)(param_1 + 0xb40) + 8))();
            lVar7 = FUN_1407ca824(uVar5);
            if (lVar7 != 0) {
              fVar18 = (float)FUN_140fe2d1e(lVar7,*(undefined1 *)(param_1 + 0xb91));
            }
          }
          if (fVar18 <= 0.01) {
            fVar18 = 0.01;
          }
        }
        if (((*(longlong *)(param_1 + 0xb38) != 0) &&
            (*(longlong **)(param_1 + 0xb40) != (longlong *)0x0)) &&
           (plVar4 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xb40) + 8))(),
           plVar4 != (longlong *)0x0)) {
          uVar5 = FUN_1407ca880();
          plVar4 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4,uVar5);
          if (plVar4 != (longlong *)0x0) {
            uVar5 = FUN_1407ca880();
            plVar6 = (longlong *)FUN_144718840(plVar4,uVar5);
            if (((plVar4 != plVar6) && (plVar6 != (longlong *)0x0)) &&
               (lVar7 = (**(code **)(*plVar6 + 0x50))(plVar6), lVar7 != 0)) {
              FUN_140dc01da(lVar7,&local_c8);
              if (local_c8 != 0) {
                local_e0 = FUN_140f93b48;
                local_d8 = 0;
                FUN_14126b498(local_c8 + 0x18,&local_d0);
                *(ulonglong *)(param_1 + 0xb88) = CONCAT44(uStack_cc,CONCAT22(uStack_ce,local_d0));
              }
              plVar4 = (longlong *)CONCAT44(uStack_bc,local_c0);
              if (plVar4 != (longlong *)0x0) {
                LOCK();
                plVar6 = plVar4 + 1;
                *(int *)plVar6 = (int)*plVar6 + -1;
                UNLOCK();
                if ((int)*plVar6 == 0) {
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
        }
        bVar10 = *(byte *)(param_1 + 0xbd8);
        if (((bVar10 == 0) || (*(int *)(param_1 + 0xbf0) <= (int)(uint)bVar10)) ||
           ((lVar7 = *(longlong *)
                      (*(longlong *)(param_1 + 0xbe8) + 8 +
                      (ulonglong)bVar10 * 0x80 + (ulonglong)(uint)bVar10 * 8), lVar7 == 0 ||
            ((*(byte *)(*(longlong *)(lVar7 + 0xa0) + 0x31) & 8) == 0)))) {
          if ((*(longlong *)(param_1 + 0xd60) != DAT_14cb94e30) &&
             ((*(byte *)(param_1 + 0xb90) & 0x10) == 0)) {
            uVar5 = FUN_1401b4c98(param_1);
            fVar17 = *(float *)(param_1 + 0x74);
            uVar16 = -(uint)(0.0001 < fVar17);
            local_e0 = (code *)0x0;
            local_d8 = 0;
            FUN_1446efa72(&local_e0,0,3,0x10);
            pcVar14 = local_e0;
            local_d8 = 3;
            *(undefined ***)local_e0 = &PTR_LAB_14a1c8830;
            LOCK();
            UNLOCK();
            lVar8 = DAT_14c758608 + 1;
            lVar7 = DAT_14c758608 + 1;
            if (lVar8 == 0) {
              LOCK();
              UNLOCK();
              lVar8 = DAT_14c758608 + 2;
              lVar7 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar7;
            *(longlong *)(local_e0 + 0x10) = lVar8;
            *(undefined ***)local_e0 = &PTR_FUN_14b4ab980;
            *(undefined8 *)(local_e0 + 0x18) = 0;
            iVar11 = 0;
            if (param_1 != 0) {
              uVar2 = *(uint *)(param_1 + 0xc);
              *(uint *)(local_e0 + 0x18) = uVar2;
              if ((int)uVar2 < DAT_14c9647dc) {
                lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
              }
              else {
                lVar7 = 0;
              }
              iVar11 = *(int *)(lVar7 + 0x10);
              if (*(int *)(lVar7 + 0x10) == 0) {
                LOCK();
                iVar11 = DAT_14c964868 + 1;
                UNLOCK();
                iVar13 = DAT_14c964868 + 1;
                bVar15 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar11;
                if (bVar15) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar13);
                }
                LOCK();
                iVar11 = *(int *)(lVar7 + 0x10);
                bVar15 = iVar11 == 0;
                if (bVar15) {
                  *(int *)(lVar7 + 0x10) = iVar13;
                  iVar11 = 0;
                }
                UNLOCK();
                if (bVar15) {
                  iVar11 = iVar13;
                }
              }
            }
            *(int *)(pcVar14 + 0x1c) = iVar11;
            *(undefined1 **)(pcVar14 + 0x20) = &LAB_140ebdd1a;
            *(undefined4 *)(pcVar14 + 0x28) = 0;
            local_c8 = 0;
            local_c0 = 0;
            FUN_14487d8d8(&local_c8,&local_e0);
            local_88 = 1;
            local_f8 = &local_d0;
            local_d0 = 0;
            uStack_cc = 0xbf800000;
            FUN_1406f4044(uVar5,param_1 + 0xb78,&local_c8,
                          fVar18 * (float)(~uVar16 & 0x3f800000 | (uint)(1.0 / fVar17) & uVar16));
            (*(code *)(&PTR_LAB_14a1c87a0)[local_88])(&local_c8);
            if (local_d8 != 0) {
              if (local_e0 == (code *)0x0) goto LAB_14126b029;
              (*(code *)**(undefined8 **)local_e0)(local_e0,0);
              FUN_1446efa72(&local_e0,0,0,0x10);
              local_d8 = 0;
            }
            if (local_e0 != (code *)0x0) {
              FUN_1400020a8();
            }
            goto LAB_14126b029;
          }
          uVar5 = FUN_1401b4c98(param_1);
          uVar16 = -(uint)(0.0001 < *(float *)(param_1 + 0x74));
          fVar18 = fVar18 * (float)(~uVar16 & 0x3f800000 |
                                   (uint)(1.0 / *(float *)(param_1 + 0x74)) & uVar16);
          local_e0 = (code *)0x0;
          local_d8 = 0;
          FUN_1446efa72(&local_e0,0,3,0x10);
          pcVar14 = local_e0;
          local_d8 = 3;
          *(undefined ***)local_e0 = &PTR_LAB_14a1c8830;
          LOCK();
          UNLOCK();
          lVar8 = DAT_14c758608 + 1;
          lVar7 = DAT_14c758608 + 1;
          if (lVar8 == 0) {
            LOCK();
            UNLOCK();
            lVar8 = DAT_14c758608 + 2;
            lVar7 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar7;
          *(longlong *)(local_e0 + 0x10) = lVar8;
          *(undefined ***)local_e0 = &PTR_FUN_14b4ab980;
          *(undefined8 *)(local_e0 + 0x18) = 0;
          FUN_14485c47a(local_e0 + 0x18,param_1);
          *(undefined4 *)(pcVar14 + 0x28) = 0;
          pcVar9 = FUN_140ebdd2e;
        }
        else {
          bVar10 = ((*(byte *)(param_1 + 0xb90) & 0x10) == 0) << 7;
          if (*(longlong *)(param_1 + 0xd60) == DAT_14cb94e30) {
            bVar10 = 0;
          }
          *(byte *)(param_1 + 0xb90) = *(byte *)(param_1 + 0xb90) & 0x3f | bVar10 | 0x40;
          uVar5 = FUN_140231a4a(*(undefined8 *)(param_1 + 0x3f0));
          FUN_140b35a56(uVar5,&local_c8);
          if ((local_c8 != 0) && (fVar18 = fVar18 - *(float *)(local_c8 + 0x108), fVar18 <= 0.01)) {
            fVar18 = 0.01;
          }
          plVar4 = (longlong *)CONCAT44(uStack_bc,local_c0);
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar6 = plVar4 + 1;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)*plVar6 == 0) {
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
          uVar5 = FUN_1401b4c98(param_1);
          uVar16 = -(uint)(0.0001 < *(float *)(param_1 + 0x74));
          fVar18 = fVar18 * (float)(~uVar16 & 0x3f800000 |
                                   (uint)(1.0 / *(float *)(param_1 + 0x74)) & uVar16);
          local_e0 = (code *)0x0;
          local_d8 = 0;
          FUN_1446efa72(&local_e0,0,3,0x10);
          pcVar14 = local_e0;
          local_d8 = 3;
          *(undefined ***)local_e0 = &PTR_LAB_14a1c8830;
          LOCK();
          UNLOCK();
          lVar8 = DAT_14c758608 + 1;
          lVar7 = DAT_14c758608 + 1;
          if (lVar8 == 0) {
            LOCK();
            UNLOCK();
            lVar8 = DAT_14c758608 + 2;
            lVar7 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar7;
          *(longlong *)(local_e0 + 0x10) = lVar8;
          *(undefined ***)local_e0 = &PTR_FUN_14b4ab980;
          *(undefined8 *)(local_e0 + 0x18) = 0;
          FUN_14485c47a(local_e0 + 0x18,param_1);
          *(undefined4 *)(pcVar14 + 0x28) = 0;
          pcVar9 = FUN_148a1f8fa;
        }
        *(code **)(pcVar14 + 0x20) = pcVar9;
        local_c8 = 0;
        local_c0 = 0;
        FUN_14487d8d8(&local_c8,&local_e0);
        local_88 = 1;
        local_f8 = &local_d0;
        local_d0 = 0;
        uStack_cc = 0xbf800000;
        FUN_1406f4044(uVar5,param_1 + 0xb78,&local_c8,fVar18);
        (*(code *)(&PTR_LAB_14a1c87a0)[local_88])(&local_c8);
        FUN_1449db362(&local_e0);
      }
LAB_14126b029:
      bVar15 = *(char *)(param_1 + 0xb91) != '\0';
      goto LAB_14126b033;
    }
  }
  else if (lVar7 != DAT_14cb94e38) goto LAB_14126ad03;
  bVar15 = false;
LAB_14126b033:
  if ((local_70 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar15;
}



// FUNCTION 14126b498 FUN_14126b498 body=772 status=ok
// SIG undefined FUN_14126b498(void)

undefined8 * FUN_14126b498(longlong *param_1,undefined8 *param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_88 [40];
  longlong *local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar9 = param_4[1];
  lVar2 = *param_4;
  local_60 = (longlong *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,3,0x10);
  plVar3 = local_60;
  local_58 = 3;
  *local_60 = (longlong)&PTR_LAB_14b3e9c20;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar11 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar11 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar11;
  local_60[2] = lVar7;
  *local_60 = (longlong)&PTR_FUN_14b4abb40;
  local_60[3] = 0;
  iVar10 = 0;
  if (param_3 != 0) {
    uVar1 = *(uint *)(param_3 + 0xc);
    *(uint *)(local_60 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar10 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar10 = *(int *)(lVar11 + 0x10);
      bVar12 = iVar10 == 0;
      if (bVar12) {
        *(int *)(lVar11 + 0x10) = iVar5;
        iVar10 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar10 = iVar5;
      }
    }
  }
  *(int *)((longlong)plVar3 + 0x1c) = iVar10;
  plVar3[4] = lVar2;
  *(int *)(plVar3 + 5) = (int)lVar9;
  *param_2 = 0;
  if (((local_58 == 0) || (local_60 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*local_60 + 0x30))(), cVar4 == '\0')) {
    if (local_58 != 0) {
      if (local_60 == (longlong *)0x0) goto LAB_14126b64c;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      goto LAB_14126b636;
    }
  }
  else {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar10 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar10) {
        iVar5 = iVar10;
        if (0 < iVar10) {
          iVar8 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar8 * 0x10) == 0) ||
                (plVar3 = *(longlong **)(*param_1 + (longlong)iVar8 * 0x10),
                plVar3 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar3 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar8);
              FUN_14005b248(param_1);
            }
            else {
              iVar8 = iVar8 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar8 < iVar5);
        }
        iVar8 = 2;
        if (2 < iVar5 * 2) {
          iVar8 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar8;
        if ((iVar8 < iVar10) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if ((local_58 != 0) && (local_60 != (longlong *)0x0)) {
      (**(code **)(*local_60 + 0x38))(local_60,&local_50);
      uVar6 = local_50;
    }
    *param_2 = uVar6;
    iVar10 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar10 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar10 + 1U) {
      FUN_1447a71f6(param_1,iVar10);
    }
    lVar2 = *param_1;
    lVar9 = (longlong)iVar10 * 0x10;
    *(undefined8 *)(lVar2 + lVar9) = 0;
    *(undefined4 *)(lVar2 + 8 + lVar9) = 0;
    *(longlong **)(lVar2 + lVar9) = local_60;
    local_60 = (longlong *)0x0;
    *(int *)(lVar2 + 8 + lVar9) = local_58;
LAB_14126b636:
    local_58 = 0;
  }
  if (local_60 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_14126b64c:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14126b7ec FUN_14126b7ec body=2231 status=ok
// SIG undefined FUN_14126b7ec(void)

void FUN_14126b7ec(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined4 *_Src;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined *local_58;
  code *local_50;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_58 = (undefined *)FUN_1446ddbd2();
      local_50 = FUN_1468d96f0;
      local_60 = 0;
      local_68 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_30);
            goto LAB_14126b8d7;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_30) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_30,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_30,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar1[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_30,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_30,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
LAB_14126b8d7:
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_58 = (undefined *)FUN_1446ddbd2();
      local_50 = FUN_1468d96f0;
      local_60 = 0;
      local_68 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_38);
            goto LAB_14126b9a4;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_38) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_38,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_38,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar1[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_38,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_38,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
LAB_14126b9a4:
  local_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_58 = (undefined *)FUN_1446ddbd2();
      local_50 = FUN_1468d96f0;
      local_60 = 0;
      local_68 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_40);
            goto LAB_14126ba71;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_40) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_40,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_40,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar1[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_40,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_40,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
LAB_14126ba71:
  local_44 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_50 = FUN_1405ebbb2;
      local_58 = &DAT_14c9520b8;
      local_60 = 0;
      local_68 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_44);
            goto LAB_14126bb3d;
          }
        }
        _Src = (undefined4 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_44) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_44,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_44,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar1[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_44,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_44,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
LAB_14126bb3d:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = CONCAT44(local_68._4_4_,local_44);
  FUN_14126c0a4(param_1,local_30,local_38,local_40);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14126c0a4 FUN_14126c0a4 body=781 status=ok
// SIG undefined FUN_14126c0a4(void)

void FUN_14126c0a4(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_3 != 0) {
    if (DAT_14cba8288 == 0) {
      local_70 = &local_50;
      local_50 = FUN_141864c34;
      local_60 = FUN_14081d0ea;
      local_68 = &LAB_1464cee30;
      local_78 = &LAB_148bfac22;
      local_80 = &LAB_140f21842;
      local_88 = &DAT_149e063b2;
      local_90 = 0;
      local_98 = 0x10000004;
      local_a0 = 0x10;
      local_a8 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
      iVar4 = *(int *)(param_1 + 0x418);
      uVar8 = (ulonglong)iVar4;
      if (uVar8 != 0) {
        lVar9 = uVar8 * 0x18;
        lVar5 = 0;
        do {
          iVar1 = *(int *)(*(longlong *)(param_1 + 0x410) + 4 + lVar5);
          if ((iVar1 == 0) ||
             (uVar3 = *(uint *)(*(longlong *)(param_1 + 0x410) + lVar5), (int)uVar3 < 0)) {
LAB_14126c30c:
            lVar6 = 0;
          }
          else {
            lVar6 = 0;
            if ((int)uVar3 < DAT_14c9647dc) {
              plVar7 = (longlong *)
                       ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
              if (((plVar7 == (longlong *)0x0) || ((int)plVar7[2] != iVar1)) ||
                 ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)) goto LAB_14126c30c;
              lVar6 = *plVar7;
            }
          }
          if (lVar6 == param_3) {
            if (0 < iVar4) {
              iVar4 = -iVar4;
              goto LAB_14126c1e8;
            }
            break;
          }
          lVar5 = lVar5 + 0x18;
        } while (lVar9 != lVar5);
      }
    }
  }
  goto LAB_14126c0f1;
LAB_14126c1e8:
  do {
    lVar5 = *(longlong *)(param_1 + 0x410);
    iVar1 = *(int *)(lVar5 + -0x14 + lVar9);
    if ((iVar1 == 0) || (uVar3 = *(uint *)(lVar5 + -0x18 + lVar9), (int)uVar3 < 0)) {
LAB_14126c305:
      lVar5 = 0;
    }
    else {
      lVar5 = 0;
      if ((int)uVar3 < DAT_14c9647dc) {
        plVar7 = (longlong *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if (((plVar7 == (longlong *)0x0) || ((int)plVar7[2] != iVar1)) ||
           ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)) goto LAB_14126c305;
        lVar5 = *plVar7;
      }
    }
    if (lVar5 == param_3) {
      FUN_140cd0164(param_3);
      uVar3 = *(uint *)(param_1 + 0x418);
      if (uVar8 != uVar3) {
        memmove((void *)(*(longlong *)(param_1 + 0x410) + lVar9 + -0x18),
                (void *)(*(longlong *)(param_1 + 0x410) + lVar9),
                (longlong)(int)(uVar3 + iVar4) * 0x18);
        uVar3 = *(uint *)(param_1 + 0x418);
      }
      *(uint *)(param_1 + 0x418) = uVar3 - 1;
      FUN_14586613a((longlong *)(param_1 + 0x410));
      lVar5 = FUN_140ccfb74(param_3);
      if ((lVar5 != 0) && (lVar5 = FUN_144a6781a(lVar5), lVar5 != 0)) {
        FUN_144a79b68(&local_50,*(undefined8 *)(param_1 + 0x3b0));
        FUN_14124a00a(lVar5 + 0x368);
      }
    }
    iVar4 = iVar4 + 1;
    lVar9 = lVar9 + -0x18;
    bVar2 = 1 < uVar8;
    uVar8 = uVar8 - 1;
  } while (bVar2);
LAB_14126c0f1:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14126c3b2 FUN_14126c3b2 body=100 status=ok
// SIG undefined FUN_14126c3b2(void)

void FUN_14126c3b2(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  
  cVar3 = FUN_140ae0922(*(undefined8 *)(param_1 + 0x28));
  if ((cVar3 != '\0') && (lVar1 = *(longlong *)(param_1 + 0x28), lVar1 != 0)) {
    uVar2 = FUN_14497e828(lVar1);
    cVar3 = FUN_14665aef8(uVar2,lVar1,param_2);
    if ((cVar3 == '\0') && (*(longlong *)(param_1 + 0x28) != 0)) {
      FUN_140ae0922();
      FUN_1463cd9b8(*(undefined8 *)(param_1 + 0x28),0);
      return;
    }
  }
  return;
}



// FUNCTION 14126c416 FUN_14126c416 body=447 status=ok
// SIG undefined FUN_14126c416(void)

void FUN_14126c416(undefined8 *param_1)

{
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 7) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  *param_1 = &PTR_FUN_14acb15d0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0xaaad1010;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x3ff00000;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0x3ff0000000000000;
  param_1[0x17] = 0x3ff0000000000000;
  param_1[0x18] = 0x3ff0000000000000;
  param_1[0x19] = 0;
  param_1[0x1a] = 0x3f800000;
  *(undefined2 *)(param_1 + 0x1b) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined2 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x23) = 1;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined8 *)((longlong)param_1 + 0x25c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x264) = 0;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2b4) = 0;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  return;
}



// FUNCTION 14126c5d6 FUN_14126c5d6 body=189 status=ok
// SIG undefined FUN_14126c5d6(void)

void FUN_14126c5d6(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 0x1f0);
  if (lVar1 == 0) {
    local_48 = FUN_145866520();
    local_38 = *param_2;
    if ((local_38 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_14126c752(param_1,&local_38,param_3,param_1);
  }
  else {
    local_30 = *param_2;
    if ((local_30 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_14126c694(lVar1,&local_30,param_3);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14126c694 FUN_14126c694 body=188 status=ok
// SIG undefined FUN_14126c694(void)

void FUN_14126c694(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x40) < 1) {
    lVar1 = 0;
  }
  else {
    lVar1 = **(longlong **)(param_1 + 0x38);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
  }
  if (*(longlong *)(param_1 + 0x30) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x360);
  }
  local_38 = *param_2;
  if ((local_38 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_48 = lVar1;
  FUN_14126c752(param_1,&local_38,param_3,uVar2);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14126c752 FUN_14126c752 body=1094 status=ok
// SIG undefined FUN_14126c752(void)

longlong *
FUN_14126c752(undefined8 **param_1,longlong *param_2,longlong param_3,undefined8 param_4,
             longlong param_5)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  undefined1 auStack_1b8 [40];
  undefined1 local_190 [4];
  undefined1 local_18c [4];
  longlong *local_188 [2];
  undefined8 local_178;
  longlong *local_170;
  undefined8 local_168;
  longlong *local_160 [2];
  longlong *local_150 [2];
  ulonglong local_140;
  undefined1 local_138 [8];
  longlong *local_130;
  undefined8 local_128;
  longlong *local_120;
  undefined8 *local_118;
  code **local_110;
  undefined8 *local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong *local_e8 [2];
  code *local_d8;
  undefined8 **local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined2 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  longlong lStack_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined8 local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar5 = *param_2;
  if (lVar5 != 0) {
    lVar3 = FUN_1405e2bf2();
    if ((((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
        (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
         lVar3 + 0x30)) && (lVar5 = *param_2, lVar5 != 0)) {
      if (param_1 != (undefined8 **)0x0) {
        lVar3 = FUN_1405e2bf2();
        if (((lVar3 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar3 + 0x38))) ||
           (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
            lVar3 + 0x30)) {
          pcVar7 = (code *)0x0;
        }
        else {
          pcVar7 = (code *)*param_2;
        }
        if (param_3 == 0) {
          FUN_14058b40c(param_1,
                        L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                       );
        }
        local_88 = (longlong *)0x0;
        local_58 = 0;
        local_b8 = 0;
        uStack_c0 = 8;
        local_b0 = 0;
        uStack_a8 = 0;
        local_a0 = 0;
        lStack_98 = 0;
        local_d8 = pcVar7;
        local_d0 = param_1;
        local_c8 = param_3;
        plVar4 = (longlong *)FUN_1402710dd(&local_d8);
        if (lStack_98 != 0) {
          plVar6 = local_88;
          if (local_88 == (longlong *)0x0) {
            plVar6 = local_78;
          }
          (**(code **)(*plVar6 + 0x10))();
        }
        if (param_5 != 0) {
          FUN_141237a6a(&local_f8,param_5,param_4);
          *(undefined4 *)(plVar4 + 0x57) = (undefined4)local_f8;
          *(undefined4 *)((longlong)plVar4 + 700) = local_f8._4_4_;
          *(undefined4 *)(plVar4 + 0x58) = uStack_f0;
          *(undefined4 *)((longlong)plVar4 + 0x2c4) = uStack_ec;
          plVar4[0x59] = 0;
          if (plVar4[0x4d] != 0) {
            local_d0 = &local_108;
            local_d8 = FUN_14333da3e;
            local_108 = &local_f8;
            FUN_140ec5510();
          }
        }
        (**(code **)(*plVar4 + 0x300))(plVar4);
        goto LAB_14126c7ae;
      }
      local_d8 = (code *)&DAT_14a492018;
      local_d0 = (undefined8 **)CONCAT35(local_d0._5_3_,3);
      uVar2 = FUN_14001a6c0(&local_d8,1);
      local_140 = (ulonglong)uVar2;
      FUN_14276766e(&local_d8);
      lVar5 = *param_2;
      if (lVar5 == 0) {
LAB_14126c97c:
        lVar5 = 0;
      }
      else {
        lVar3 = FUN_1405e2bf2();
        if (((lVar3 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar3 + 0x38))) ||
           (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
            lVar3 + 0x30)) goto LAB_14126c97c;
        lVar5 = *param_2;
      }
      local_168 = *(undefined8 *)(lVar5 + 0x18);
      FUN_145715fae(local_160);
      local_f8 = L"OuterNull";
      uStack_f0 = 9;
      FUN_1446e940c(local_18c,&local_f8);
      local_f8 = (wchar_t *)&DAT_14a50ca4a;
      uStack_f0 = 3;
      FUN_1446e940c(local_190,&local_f8);
      local_f8 = L"Unable to create the widget {0}, no outer provided.";
      uStack_f0 = 0x33;
      FUN_140208c1e(local_188,local_190,local_18c,&local_f8);
      FUN_14023409e(&local_178,local_188,1);
      local_f8 = (wchar_t *)CONCAT44(local_f8._4_4_,4);
      FUN_14023423e(local_e8,local_160);
      local_110 = &local_d8;
      local_118 = &local_f8;
      FUN_14010d304(&local_108);
      local_128 = local_178;
      local_120 = local_170;
      if (local_170 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_170 + 1) = (int)local_170[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_150,&local_128,&local_108);
      FUN_14007f2db(local_108,local_100);
      if (local_108 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      if (local_e8[0] != (longlong *)0x0) {
        (**(code **)(*local_e8[0] + 0x10))();
      }
      if (local_170 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_170 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_170)(local_170);
          LOCK();
          piVar1 = (int *)((longlong)local_170 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_170 + 0x10))(local_170);
          }
        }
      }
      if (local_160[0] != (longlong *)0x0) {
        (**(code **)(*local_160[0] + 0x10))();
      }
      FUN_142767974(&local_d8,local_138,local_150);
      if (local_130 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_130 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
      if (local_150[0] != (longlong *)0x0) {
        (**(code **)(*local_150[0] + 0x10))();
      }
      if (local_188[0] != (longlong *)0x0) {
        (**(code **)(*local_188[0] + 0x10))();
      }
      FUN_1427678c0(&local_d8);
    }
  }
  plVar4 = (longlong *)0x0;
LAB_14126c7ae:
  if ((local_40 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return plVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14126cdc4 FUN_14126cdc4 body=1304 status=ok
// SIG undefined FUN_14126cdc4(void)

void FUN_14126cdc4(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined *local_98;
  code *local_90;
  longlong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_98 = (undefined *)FUN_1446ddbd2();
      local_90 = FUN_1403a682c;
      local_a0 = 0;
      local_a8 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_38);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_38);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_38 = (undefined4)uVar2;
      uStack_34 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_38);
    }
  }
  local_3c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_90 = FUN_1408a629c;
      local_98 = &DAT_14c9520b8;
      local_a0 = 0;
      local_a8 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_3c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_3c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_3c = (undefined4)uVar2;
      uStack_38 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_3c);
    }
  }
  local_58 = 0;
  uStack_50 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_98 = (undefined *)FUN_1446ddbd2();
      local_90 = FUN_1403a682c;
      local_a0 = 0;
      local_a8 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_58);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_58);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_58 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_58);
    }
  }
  uVar4 = local_3c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = (undefined4)local_58;
  uStack_64 = local_58._4_4_;
  uStack_60 = (undefined4)uStack_50;
  uStack_5c = uStack_50._4_4_;
  local_80 = CONCAT44(uStack_34,uStack_38);
  if ((local_80 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_78 = (undefined4)uStack_30;
  uStack_74 = uStack_30._4_4_;
  uStack_70 = (undefined4)local_28;
  uStack_6c = local_28._4_4_;
  FUN_14126d2de(&local_80,uVar4,&local_68);
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14126d2de FUN_14126d2de body=133 status=ok
// SIG undefined FUN_14126d2de(void)

void FUN_14126d2de(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14126d364(param_1,&local_40);
  FUN_14126d3f8(local_40,param_2,param_3);
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
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14126d364 FUN_14126d364 body=144 status=ok
// SIG undefined FUN_14126d364(void)

undefined8 * FUN_14126d364(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140df5234(param_1,&local_28);
  *param_2 = local_28;
  param_2[1] = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14126d3f8 FUN_14126d3f8 body=132 status=ok
// SIG undefined FUN_14126d3f8(void)

void FUN_14126d3f8(longlong param_1,undefined8 param_2,int *param_3)

{
  char cVar1;
  longlong lVar2;
  int *piVar3;
  
  if ((longlong)*(int *)(param_1 + 0x78) != 0) {
    piVar3 = *(int **)(param_1 + 0x70);
    lVar2 = (longlong)*(int *)(param_1 + 0x78) << 5;
    do {
      if ((((*piVar3 == *param_3) && (piVar3[1] == param_3[1])) && (piVar3[2] == param_3[2])) &&
         (piVar3[3] == param_3[3])) {
        if (piVar3 == (int *)0x0) {
          return;
        }
        (**(code **)(**(longlong **)(piVar3 + 4) + 0x20))();
        cVar1 = (**(code **)(**(longlong **)(piVar3 + 4) + 0x10))();
        if (cVar1 == '\0') {
          return;
        }
        *(undefined1 *)(param_1 + 0x80) = 1;
        FUN_1410dcfae(param_1);
        return;
      }
      piVar3 = piVar3 + 8;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 14126d48e FUN_14126d48e body=130 status=ok
// SIG undefined FUN_14126d48e(void)

void FUN_14126d48e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if ((param_2 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong **)(param_1 + 0x438) = param_2;
  if (((param_2 != (longlong *)0x0) && (DAT_14c7618cc != 0)) &&
     (*(longlong **)(param_1 + 0x3d0) == param_2)) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x3d0) + 0x638))();
    if (lVar1 != 0) {
      uVar2 = FUN_1406f6b90();
      plVar3 = (longlong *)FUN_144718840(lVar1,uVar2);
      if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014126d502. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x50))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14126d510 FUN_14126d510 body=357 status=ok
// SIG undefined FUN_14126d510(void)

longlong * FUN_14126d510(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  char cVar2;
  ushort uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ushort uVar6;
  ulonglong uVar7;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58 [3];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = 0;
  param_1[1] = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  lStack_70 = 0;
  cVar2 = FUN_14126d840(param_2);
  if (cVar2 != '\0') {
LAB_14126d575:
    FUN_14126d676(local_58,&local_68);
    iVar1 = (int)param_3[1];
    if (iVar1 == (int)uStack_60) {
      if (1 < iVar1) {
        lVar5 = 0;
        do {
          uVar3 = *(ushort *)(*param_3 + lVar5);
          uVar4 = (ulonglong)uVar3;
          uVar6 = *(ushort *)(local_68 + lVar5);
          if (uVar3 == uVar6) {
            if (uVar3 == 0) break;
          }
          else {
            if (0x7f < (uVar6 | uVar3)) goto LAB_14126d5f1;
            uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
            uVar7 = (ulonglong)uVar6;
            uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
            if ((&DAT_149e05da0)[uVar4] != (&DAT_149e05da0)[uVar7]) goto LAB_14126d5f1;
          }
          lVar5 = lVar5 + 2;
        } while( true );
      }
      goto LAB_14126d5f8;
    }
    if ((int)uStack_60 + iVar1 == 1) goto LAB_14126d5f8;
    goto LAB_14126d595;
  }
LAB_14126d60e:
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
LAB_14126d5f1:
  if (uVar3 == uVar6) {
LAB_14126d5f8:
    if (&local_78 != param_1) {
      *param_1 = local_78;
      param_1[1] = lStack_70;
      goto LAB_14126d60e;
    }
    goto LAB_14126d663;
  }
LAB_14126d595:
  cVar2 = FUN_14126d840(param_2,local_58);
  if (cVar2 == '\0') goto LAB_14126d663;
  goto LAB_14126d575;
LAB_14126d663:
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  goto LAB_14126d60e;
}



// FUNCTION 14126d676 FUN_14126d676 body=444 status=ok
// SIG undefined FUN_14126d676(void)

void FUN_14126d676(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined2 *puVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = 0xffffffff;
  local_58 = 0;
  iVar1 = FUN_1447ee042(param_1,&DAT_149e06162,1,0);
  if (iVar1 != -1) {
    iVar5 = *(int *)(param_1 + 1) + -1;
    if (*(int *)(param_1 + 1) == 0) {
      puVar4 = &DAT_149dfb77a;
      iVar5 = 0;
    }
    else {
      puVar4 = (undefined2 *)*param_1;
    }
    if (iVar1 < iVar5) {
      iVar5 = iVar1;
    }
    if (iVar5 < 1) {
      iVar5 = 0;
    }
    FUN_14006620a(&local_40,puVar4,iVar5);
    if (&local_40 == param_2) {
      if (local_40 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_40;
      local_40 = 0;
      *(undefined4 *)(param_2 + 1) = local_38;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_34;
    }
    iVar5 = *(int *)(param_1 + 1);
    uVar6 = iVar5 - 1;
    if (iVar5 == 0) {
      uVar6 = 0;
    }
    uVar2 = iVar1 + 1U;
    if ((int)uVar6 <= (int)(iVar1 + 1U)) {
      uVar2 = uVar6;
    }
    uVar3 = (ulonglong)uVar2;
    if ((int)uVar2 < 1) {
      uVar3 = 0;
    }
    uVar7 = (longlong)iVar1 + 0x80000000U;
    if ((longlong)(int)uVar6 <= (longlong)((longlong)iVar1 + 0x80000000U)) {
      uVar7 = (longlong)(int)uVar6;
    }
    if ((longlong)uVar7 < (longlong)uVar3) {
      uVar7 = uVar3;
    }
    if (iVar5 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)*param_1;
    }
    FUN_14006620a(&local_40,puVar4 + uVar3,(int)uVar7 - (int)uVar3);
    if (&local_40 == param_3) {
      if (local_40 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_3 != 0) {
        FUN_1400020a8();
      }
      *param_3 = local_40;
      *(undefined4 *)(param_3 + 1) = local_38;
      *(undefined4 *)((longlong)param_3 + 0xc) = local_34;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
  }
  FUN_144a787a6(param_2,param_1);
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78,&DAT_149dfb77a);
  }
  FUN_14020fad6(param_3);
  return;
}



// FUNCTION 14126d840 FUN_14126d840 body=804 status=ok
// SIG undefined FUN_14126d840(void)

undefined4 FUN_14126d840(longlong *param_1,wchar_t **param_2)

{
  int iVar1;
  ulonglong uVar2;
  size_t sVar3;
  undefined2 *puVar4;
  uint uVar5;
  wchar_t *pwVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined8 unaff_RBX;
  undefined7 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  wchar_t *local_58;
  int local_50;
  undefined4 local_4c;
  wchar_t *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140056680(&local_48,&DAT_149e1423e);
  if ((int)param_1[1] == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_1;
  }
  FUN_14006620a(&local_58,puVar4,(int)param_1[1] - 2U < 0x7fffffff);
  pwVar6 = local_58;
  uVar9 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if (local_50 == local_40) {
    if (local_50 < 2) {
      bVar7 = true;
      goto LAB_14126dab0;
    }
    iVar1 = wcscmp(local_58,local_48);
    uVar8 = (undefined4)CONCAT71(uVar9,iVar1 == 0);
  }
  else {
    bVar7 = local_40 + local_50 == 1;
LAB_14126dab0:
    uVar8 = (undefined4)CONCAT71(uVar9,bVar7);
  }
  if (pwVar6 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar6);
  }
  if ((char)uVar8 != '\0') {
    iVar1 = (int)param_1[1];
    uVar5 = iVar1 - 1;
    if (iVar1 == 0) {
      uVar5 = 0;
    }
    uVar12 = (uint)(0 < (int)uVar5);
    if ((longlong)(int)uVar5 < (longlong)(ulonglong)uVar12) {
      uVar5 = uVar12;
    }
    if (iVar1 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)*param_1;
    }
    FUN_14006620a(&local_58,puVar4 + uVar12,uVar5 - uVar12);
    if (&local_58 == param_2) {
      if (local_58 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      *param_2 = local_58;
      local_58 = (wchar_t *)0x0;
      *(int *)(param_2 + 1) = local_50;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_4c;
    }
    iVar1 = local_40 + -1;
    pwVar6 = local_48;
    if (local_40 == 0) {
      pwVar6 = L"";
      iVar1 = 0;
    }
    local_60 = 0xffffffff;
    local_68 = 0;
    uVar5 = FUN_1447ee042(param_2,pwVar6,iVar1,0);
    if (uVar5 != 0xffffffff) {
      iVar1 = *(int *)(param_2 + 1);
      uVar12 = iVar1 - 1;
      if (iVar1 == 0) {
        uVar12 = 0;
      }
      if ((int)uVar12 <= (int)uVar5) {
        uVar5 = uVar12;
      }
      uVar2 = (ulonglong)uVar5;
      if ((int)uVar5 < 1) {
        uVar2 = 0;
      }
      uVar12 = uVar12 - (int)uVar2;
      if (0 < (int)uVar12) {
        iVar10 = iVar1 - (uVar12 + (int)uVar2);
        if (iVar10 != 0) {
          memmove(*param_2 + uVar2,*param_2 + uVar2 + uVar12,(longlong)iVar10 * 2);
          iVar1 = *(int *)(param_2 + 1);
        }
        *(uint *)(param_2 + 1) = iVar1 - uVar12;
      }
    }
    iVar1 = (int)param_1[1];
    iVar10 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar10 = 0;
    }
    if (0 < iVar10) {
      iVar11 = iVar1 - (uint)(0 < iVar10);
      if (iVar11 != 0) {
        memmove((void *)*param_1,(void *)(*param_1 + 2),(longlong)iVar11 * 2);
        iVar1 = (int)param_1[1];
      }
      *(uint *)(param_1 + 1) = iVar1 - (uint)(0 < iVar10);
    }
    pwVar6 = local_48;
    if (local_40 == 0) {
      pwVar6 = L"";
    }
    if (pwVar6 != (wchar_t *)0x0) {
      sVar3 = wcslen(pwVar6);
      local_60 = 0xffffffff;
      local_68 = 0;
      iVar1 = FUN_1447ee042(param_1,pwVar6,sVar3 & 0xffffffff,0);
      if (iVar1 != -1) {
        iVar1 = local_40 + -1;
        pwVar6 = local_48;
        if (local_40 == 0) {
          pwVar6 = L"";
          iVar1 = 0;
        }
        local_68 = 0;
        local_60 = 0xffffffff;
        uVar12 = FUN_1447ee042(param_1,pwVar6,iVar1,0);
        iVar1 = (int)param_1[1];
        uVar5 = iVar1 - 1;
        if (iVar1 == 0) {
          uVar5 = 0;
        }
        if ((int)uVar12 < (int)uVar5) {
          uVar5 = uVar12;
        }
        if (0 < (int)uVar5) {
          if (iVar1 - uVar5 != 0) {
            memmove((void *)*param_1,(void *)(*param_1 + (ulonglong)uVar5 * 2),
                    (longlong)(int)(iVar1 - uVar5) * 2);
            iVar1 = (int)param_1[1];
          }
          *(uint *)(param_1 + 1) = iVar1 - uVar5;
        }
        goto LAB_14126db11;
      }
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
LAB_14126db11:
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 14126db66 FUN_14126db66 body=355 status=ok
// SIG undefined FUN_14126db66(void)

undefined8 FUN_14126db66(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  code *pcVar6;
  DWORD DVar7;
  DWORD DVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar3 == 2) goto LAB_14126dcc3;
    if (iVar3 == 1) {
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_14126dcc3;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar11 = local_38;
  }
  else {
LAB_14126dcc3:
    lVar11 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar4 = *(uint *)(param_1 + 0x18);
    uVar10 = 0;
    if (((int)uVar4 < 0) || (DAT_14c9647dc <= (int)uVar4)) goto LAB_14126dc48;
    plVar9 = (longlong *)
             ((ulonglong)((uVar4 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
    if ((plVar9 != (longlong *)0x0) &&
       ((((int)plVar9[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar9 + 1) & 0x10200000) == 0))
        && (lVar5 = *plVar9, lVar5 != 0)))) {
      pcVar6 = *(code **)(param_1 + 0x20);
      iVar3 = *(int *)(param_1 + 0x28);
      local_38 = *param_2;
      local_30 = param_2[1];
      *param_2 = 0;
      param_2[1] = 0;
      (*pcVar6)(lVar5 + iVar3);
      uVar10 = 1;
      goto LAB_14126dc48;
    }
  }
  uVar10 = 0;
LAB_14126dc48:
  if ((lVar11 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar11);
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14126dcca FUN_14126dcca body=220 status=ok
// SIG undefined FUN_14126dcca(void)

void FUN_14126dcca(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  code *local_30;
  undefined4 local_28;
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1[0x1270] != 0) {
    FUN_14480f766(param_1 + 0x2b8);
  }
  FUN_1400bc8c2(param_1 + 0x6d,&DAT_14cbc1db8);
  if (-1 < (char)param_1[0xc] == (bool)(char)param_1[0x6d]) {
    (**(code **)(*param_1 + 0x608))(param_1);
  }
  if ((char)param_1[0x2f] == '\x03') {
    local_30 = FUN_1412ab0c8;
    local_28 = 0;
    FUN_14126dda8(*param_2 + 0x18,local_20,param_1);
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14126dda8 FUN_14126dda8 body=772 status=ok
// SIG undefined FUN_14126dda8(void)

undefined8 * FUN_14126dda8(longlong *param_1,undefined8 *param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_88 [40];
  longlong *local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar9 = param_4[1];
  lVar2 = *param_4;
  local_60 = (longlong *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,3,0x10);
  plVar3 = local_60;
  local_58 = 3;
  *local_60 = (longlong)&PTR_LAB_14b3e9c20;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar11 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar11 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar11;
  local_60[2] = lVar7;
  *local_60 = (longlong)&PTR_FUN_14b95c720;
  local_60[3] = 0;
  iVar10 = 0;
  if (param_3 != 0) {
    uVar1 = *(uint *)(param_3 + 0xc);
    *(uint *)(local_60 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar10 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar10 = *(int *)(lVar11 + 0x10);
      bVar12 = iVar10 == 0;
      if (bVar12) {
        *(int *)(lVar11 + 0x10) = iVar5;
        iVar10 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar10 = iVar5;
      }
    }
  }
  *(int *)((longlong)plVar3 + 0x1c) = iVar10;
  plVar3[4] = lVar2;
  *(int *)(plVar3 + 5) = (int)lVar9;
  *param_2 = 0;
  if (((local_58 == 0) || (local_60 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*local_60 + 0x30))(), cVar4 == '\0')) {
    if (local_58 != 0) {
      if (local_60 == (longlong *)0x0) goto LAB_14126df5c;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      goto LAB_14126df46;
    }
  }
  else {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar10 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar10) {
        iVar5 = iVar10;
        if (0 < iVar10) {
          iVar8 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar8 * 0x10) == 0) ||
                (plVar3 = *(longlong **)(*param_1 + (longlong)iVar8 * 0x10),
                plVar3 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar3 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar8);
              FUN_14005b248(param_1);
            }
            else {
              iVar8 = iVar8 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar8 < iVar5);
        }
        iVar8 = 2;
        if (2 < iVar5 * 2) {
          iVar8 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar8;
        if ((iVar8 < iVar10) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if ((local_58 != 0) && (local_60 != (longlong *)0x0)) {
      (**(code **)(*local_60 + 0x38))(local_60,&local_50);
      uVar6 = local_50;
    }
    *param_2 = uVar6;
    iVar10 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar10 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar10 + 1U) {
      FUN_1447a71f6(param_1,iVar10);
    }
    lVar2 = *param_1;
    lVar9 = (longlong)iVar10 * 0x10;
    *(undefined8 *)(lVar2 + lVar9) = 0;
    *(undefined4 *)(lVar2 + 8 + lVar9) = 0;
    *(longlong **)(lVar2 + lVar9) = local_60;
    local_60 = (longlong *)0x0;
    *(int *)(lVar2 + 8 + lVar9) = local_58;
LAB_14126df46:
    local_58 = 0;
  }
  if (local_60 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_14126df5c:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14126e0ae FUN_14126e0ae body=90 status=ok
// SIG undefined FUN_14126e0ae(void)

void FUN_14126e0ae(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
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



// FUNCTION 14126e108 FUN_14126e108 body=57 status=ok
// SIG undefined FUN_14126e108(void)

void FUN_14126e108(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba45c8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba45c8 = FUN_14171c317(FUN_1465be0e4,uVar1,L"EAtt_GrenadeBehaviorPayloadShooting");
  }
  return;
}



// FUNCTION 14126e142 FUN_14126e142 body=566 status=ok
// SIG undefined FUN_14126e142(void)

undefined4 * FUN_14126e142(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  int local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[6] = 0;
  *(undefined8 *)(param_1 + 7) = 0x40a0000042c80000;
  puVar1 = param_1 + 10;
  *(undefined8 *)(param_1 + 0x14) = 0;
  param_1[0x16] = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x17) = 0xffffffff00000080;
  param_1[0x19] = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  param_1[0x1e] = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  param_1[0x24] = 0x7f7fffff;
  *(undefined2 *)(param_1 + 0x25) = 0x404;
  *(undefined **)(param_1 + 10) = &DAT_14a176f00;
  *(undefined8 *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 1;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  param_1[0x30] = 0;
  *(undefined2 *)(param_1 + 0x31) = 0x101;
  param_1[0x32] = 0;
  *(undefined1 *)(param_1 + 0x33) = 1;
  param_1[0x34] = 0x42c80000;
  *(undefined1 *)(param_1 + 0x35) = 1;
  *(undefined8 *)(param_1 + 0x36) = 0;
  param_1[0x38] = 4;
  FUN_14126e37a(param_1 + 0x36,4,0);
  **(undefined4 **)(param_1 + 0x36) = 0xc0a0601;
  *(undefined2 *)(param_1 + 0x3a) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0xea) = 0;
  param_1[0x3b] = 0x47c35000;
  param_1[0x3c] = 2;
  param_1[0x3d] = 0x43c80000;
  param_1[0x3e] = 0x40a00000;
  param_1[0x3f] = 0x44960000;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined2 *)(param_1 + 0x41) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x106) = 0;
  *(undefined1 **)(param_1 + 0x42) = &DAT_100000001;
  *(undefined1 *)(param_1 + 0x44) = 1;
  *(undefined8 *)(param_1 + 0x45) = 0x40000000;
  LOCK();
  UNLOCK();
  local_40 = DAT_14c761474 + 1;
  local_48 = 0;
  DAT_14c761474 = DAT_14c761474 + 1;
  FUN_1406507bc(puVar1,&local_34,0,0);
  FUN_140650770(puVar1,local_34,0,1);
  FUN_14045d156(puVar1,local_34,2,1);
  LOCK();
  UNLOCK();
  local_40 = DAT_14c761474 + 1;
  local_48 = 0;
  DAT_14c761474 = DAT_14c761474 + 1;
  FUN_1406507bc(puVar1,&local_38,0x3f800000,0x3f800000);
  FUN_140650770(puVar1,local_38,0,1);
  FUN_14045d156(puVar1,local_38,2,1);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14126e37a FUN_14126e37a body=309 status=ok
// SIG undefined FUN_14126e37a(void)

void FUN_14126e37a(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  if (param_2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar3 = param_2;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = (longlong)(int)param_2 + 0xf;
        if (param_2 < 0x7ff1) {
          uVar3 = (uint)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          if ((uVar4 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar7 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (uint)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_14126e3e4;
              lVar1 = uVar5 + 1 + uVar7;
              uVar7 = uVar7 - 1;
            } while (lVar1 != 0x33);
          }
          uVar6 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar6 = DAT_14c841df8;
          }
          uVar3 = -uVar6 & ((int)(uVar4 & 0xfffffffffffffff0) + uVar6) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,(longlong)(int)param_2,1);
      }
    }
LAB_14126e3e4:
    uVar6 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar3) {
      uVar6 = uVar3;
    }
  }
  if ((int)param_3 < (int)uVar6) {
    FUN_1446f8d3c(param_1,0,uVar6,1,1);
    param_3 = uVar6;
  }
  *(uint *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14126e4af FUN_14126e4af body=48 status=ok
// SIG undefined FUN_14126e4af(void)

void FUN_14126e4af(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if ((longlong *)*plVar1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar1 + 0x10))();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14126e4e0 FUN_14126e4e0 body=1586 status=ok
// SIG undefined FUN_14126e4e0(void)

void FUN_14126e4e0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint *_Dst;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  undefined1 *puVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong lVar14;
  bool bVar15;
  bool bVar16;
  undefined1 auStack_e8 [32];
  undefined8 **local_c8;
  undefined8 *local_b8;
  undefined1 local_ac [4];
  undefined8 *local_a8 [2];
  undefined4 local_98 [6];
  longlong local_80;
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined1 *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar5 = (**(code **)(*param_1 + 0x180))();
  if ((param_2 == 0) || (lVar5 == 0)) goto LAB_14126e921;
  lVar5 = *(longlong *)(param_2 + 0x26b0);
  if (lVar5 == 0) {
    uVar6 = FUN_1457512de();
    lVar5 = FUN_14477b664(uVar6);
    *(longlong *)(param_2 + 0x26b0) = lVar5;
  }
  plVar1 = (longlong *)(param_2 + 0x26a8);
  if (*(longlong *)(param_2 + 0x26b8) == 0) {
    if ((lVar5 == 0) || (*plVar1 == 0)) goto LAB_14126e921;
    plVar12 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar12 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar12 + 0x108))(plVar12), cVar3 == '\0')) {
      *(undefined8 *)(param_2 + 0x26b8) = 0;
      goto LAB_14126e921;
    }
    uVar6 = (**(code **)(*plVar12 + 0x110))(plVar12);
    lVar5 = FUN_144aff482(uVar6,plVar1);
    *(longlong *)(param_2 + 0x26b8) = lVar5;
    if (lVar5 == 0) goto LAB_14126e921;
    lVar5 = *(longlong *)(param_2 + 0x26b0);
  }
  if (lVar5 == 0) {
    uVar6 = FUN_1457512de();
    lVar5 = FUN_14477b664(uVar6);
    *(longlong *)(param_2 + 0x26b0) = lVar5;
    if (((*(longlong *)(param_2 + 0x26b8) == 0) && (lVar5 != 0)) && (*plVar1 != 0)) {
      plVar12 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar12 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar12 + 0x108))(plVar12), cVar3 == '\0')) {
        uVar6 = 0;
      }
      else {
        uVar6 = (**(code **)(*plVar12 + 0x110))(plVar12);
        uVar6 = FUN_144aff482(uVar6,plVar1);
      }
      *(undefined8 *)(param_2 + 0x26b8) = uVar6;
    }
  }
  plVar1 = param_1 + 0x2a;
  local_b8 = (undefined8 *)0x0;
  FUN_14485c47a(&local_b8,param_2);
  local_a8[0] = local_b8;
  iVar4 = FUN_14088c684(plVar1,(uint)((ulonglong)local_b8 >> 0x20) ^ (uint)local_b8);
  if ((iVar4 == -1) || (((longlong)iVar4 * 0x60 + *plVar1 + 8U & 0xfffffffffffffff7) == 0)) {
    local_70 = 0;
    FUN_14485c47a(&local_70,param_2);
    local_a8[0] = &local_70;
    FUN_145867502(plVar1,local_ac);
  }
  plVar1 = param_1 + 0x42;
  FUN_1411b80d0(param_2,local_a8);
  if ((char)local_a8[0] == '\x01') {
    FUN_1447a97f4(&local_70,local_98);
    if (0 < local_70._4_4_) {
      lVar5 = 0;
      uVar13 = 0;
      iVar4 = local_70._4_4_;
      iVar8 = DAT_14c948000;
      do {
        bVar15 = (int)local_70 != 0;
        bVar16 = (int)local_70 != iVar8;
        piVar9 = &DAT_14c948620;
        piVar10 = (int *)&DAT_14c948618;
        if (bVar16 && bVar15) {
          puVar11 = local_68;
          if (0 < local_4c) {
            puVar11 = local_58;
          }
          if (1 < iVar4) {
            puVar11 = local_58;
          }
          piVar9 = (int *)(puVar11 + lVar5 + 8);
          piVar10 = (int *)(puVar11 + lVar5);
        }
        if ((*piVar10 == DAT_14cb7beb0) && (*piVar9 == DAT_14cb7beb8)) {
LAB_14126e7ca:
          FUN_1402b5374(&local_70,uVar13 & 0xffffffff,0);
          iVar4 = local_70._4_4_;
          iVar8 = DAT_14c948000;
        }
        else {
          piVar9 = &DAT_14c948620;
          piVar10 = (int *)&DAT_14c948618;
          if (bVar16 && bVar15) {
            puVar11 = local_68;
            if (0 < local_4c) {
              puVar11 = local_58;
            }
            if (1 < iVar4) {
              puVar11 = local_58;
            }
            piVar9 = (int *)(puVar11 + lVar5 + 8);
            piVar10 = (int *)(puVar11 + lVar5);
          }
          if ((*piVar10 == DAT_14cb7bec8) && (*piVar9 == DAT_14cb7bed0)) goto LAB_14126e7ca;
          piVar9 = &DAT_14c948620;
          piVar10 = (int *)&DAT_14c948618;
          if (bVar16 && bVar15) {
            puVar11 = local_68;
            if (0 < local_4c) {
              puVar11 = local_58;
            }
            if (1 < iVar4) {
              puVar11 = local_58;
            }
            piVar9 = (int *)(puVar11 + lVar5 + 8);
            piVar10 = (int *)(puVar11 + lVar5);
          }
          if ((*piVar10 == DAT_14cb7bee0) && (*piVar9 == DAT_14cb7bee8)) goto LAB_14126e7ca;
          piVar9 = &DAT_14c948620;
          piVar10 = (int *)&DAT_14c948618;
          if (bVar16 && bVar15) {
            puVar11 = local_68;
            if (0 < local_4c) {
              puVar11 = local_58;
            }
            if (1 < iVar4) {
              puVar11 = local_58;
            }
            piVar9 = (int *)(puVar11 + lVar5 + 8);
            piVar10 = (int *)(puVar11 + lVar5);
          }
          if ((*piVar10 == DAT_14cb7bef8) && (*piVar9 == DAT_14cb7bf00)) goto LAB_14126e7ca;
          piVar9 = &DAT_14c948620;
          piVar10 = (int *)&DAT_14c948618;
          if (bVar16 && bVar15) {
            puVar11 = local_68;
            if (0 < local_4c) {
              puVar11 = local_58;
            }
            if (1 < iVar4) {
              puVar11 = local_58;
            }
            piVar9 = (int *)(puVar11 + lVar5 + 8);
            piVar10 = (int *)(puVar11 + lVar5);
          }
          if ((*piVar10 == DAT_14cb7bf10) && (*piVar9 == DAT_14cb7bf18)) goto LAB_14126e7ca;
        }
        uVar13 = uVar13 + 1;
        lVar5 = lVar5 + 0xc;
      } while ((longlong)uVar13 < (longlong)iVar4);
    }
    local_98[0] = (int)local_70;
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  iVar4 = FUN_14126eb14(plVar1,local_98[0],local_a8);
  if (iVar4 == -1) {
    lVar5 = 0;
  }
  else {
    lVar5 = (longlong)iVar4 * 0xa0 + *plVar1;
  }
  lVar14 = lVar5 + 0x38;
  if (lVar5 == 0) {
    lVar14 = 0;
  }
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  iVar4 = (int)param_1[0x3f];
  if (0 < (longlong)iVar4) {
    iVar8 = -iVar4;
    uVar13 = (longlong)iVar4;
    do {
      lVar2 = param_1[0x3e];
      lVar5 = lVar2 + uVar13 * 8;
      _Dst = (uint *)(lVar5 + -8);
      iVar4 = *(int *)(lVar5 + -4);
      if (((((iVar4 == 0) || (uVar7 = *_Dst, (int)uVar7 < 0)) || (DAT_14c9647dc <= (int)uVar7)) ||
          ((plVar12 = (longlong *)
                      ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
           plVar12 == (longlong *)0x0 || ((int)plVar12[2] != iVar4)))) ||
         (((*(uint *)(plVar12 + 1) & 0x10200000) != 0 || (lVar5 = *plVar12, lVar5 == 0)))) {
        uVar7 = *(uint *)(param_1 + 0x3f);
        if (uVar13 != uVar7) {
          memmove(_Dst,(void *)(lVar2 + uVar13 * 8),(longlong)(int)(iVar8 + uVar7) << 3);
          uVar7 = *(uint *)(param_1 + 0x3f);
        }
        *(uint *)(param_1 + 0x3f) = uVar7 - 1;
        FUN_14586797c(param_1 + 0x3e);
      }
      else {
        local_a8[0] = (undefined8 *)((ulonglong)local_a8[0] & 0xffffffffffffff00);
        if ((lVar14 != 0) && (*(char *)(param_2 + 0x2b30) == '\0')) {
          local_c8 = local_a8;
          FUN_14126ed10(param_1,param_2,lVar5,lVar14);
          if (((ulonglong)local_a8[0] & 1) != 0) goto LAB_14126e8db;
        }
        FUN_14126eb88(param_1,param_2,lVar5);
      }
LAB_14126e8db:
      iVar8 = iVar8 + 1;
      bVar15 = 1 < uVar13;
      uVar13 = uVar13 - 1;
    } while (bVar15);
  }
  if (lVar14 != 0) {
    FUN_1411b80d0(param_2,local_a8);
    FUN_1458679bc(plVar1,local_a8);
    if (local_80 != 0) {
      FUN_1400020a8();
    }
  }
LAB_14126e921:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14126eb14 FUN_14126eb14 body=115 status=ok
// SIG undefined FUN_14126eb14(void)

int FUN_14126eb14(longlong *param_1,uint param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        cVar1 = FUN_14493b798(lVar3 + (longlong)iVar4 * 0xa0,param_3);
        if (cVar1 != '\0') {
          return iVar4;
        }
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x98 + (longlong)iVar4 * 0xa0);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 14126eb88 FUN_14126eb88 body=391 status=ok
// SIG undefined FUN_14126eb88(void)

void FUN_14126eb88(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  bool bVar9;
  
  if (param_2 != 0) {
    if (param_3 == 0) {
      uVar7 = 0;
      iVar6 = 0;
    }
    else {
      uVar7 = *(uint *)(param_3 + 0xc);
      if ((int)uVar7 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      iVar6 = *(int *)(lVar8 + 0x10);
      if (*(int *)(lVar8 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        iVar5 = DAT_14c964868 + 1;
        bVar9 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar9) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar5);
        }
        LOCK();
        iVar6 = *(int *)(lVar8 + 0x10);
        bVar9 = iVar6 == 0;
        if (bVar9) {
          *(int *)(lVar8 + 0x10) = iVar5;
          iVar6 = 0;
        }
        UNLOCK();
        if (bVar9) {
          iVar6 = iVar5;
        }
      }
    }
    uVar1 = *(uint *)(param_2 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar5 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar5 = *(int *)(lVar8 + 0x10);
      bVar9 = iVar5 == 0;
      if (bVar9) {
        *(int *)(lVar8 + 0x10) = iVar4;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar5 = iVar4;
      }
    }
    puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar3 = 0;
    *(uint *)(puVar3 + 1) = uVar7;
    *(int *)((longlong)puVar3 + 0xc) = iVar6;
    *(uint *)(puVar3 + 2) = uVar1;
    *(int *)((longlong)puVar3 + 0x14) = iVar5;
    if (puVar3 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)(param_1 + 0x200);
      *(undefined8 **)(param_1 + 0x200) = puVar3;
      *puVar2 = puVar3;
    }
  }
  return;
}



// FUNCTION 14126ed10 FUN_14126ed10 body=1050 status=ok
// SIG undefined FUN_14126ed10(void)

void FUN_14126ed10(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  undefined1 *param_5)

{
  void *pvVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined8 local_160;
  wchar_t *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  code **local_140;
  undefined1 *local_138;
  code *local_130;
  void *local_128;
  int local_120;
  undefined4 local_11c;
  code *local_118;
  undefined8 uStack_110;
  longlong local_108;
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
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_198;
  FUN_140212f8e(&local_128);
  pvVar1 = local_128;
  local_160 = (ulonglong)local_160._4_4_ << 0x20;
  local_168 = 0;
  local_170 = 0;
  local_178 = 0;
  FUN_14021300e(&local_118,0x7b2,1,1);
  uVar2 = ((longlong)pvVar1 - (longlong)local_118) / 10000000;
  if ((uVar2 < *(longlong *)(param_4 + 0x38) - 0x1eU) &&
     (lVar4 = *(longlong *)(param_3 + 0x398), lVar4 != 0)) {
    if (DAT_14cbae3d8 == 0) {
      local_118 = FUN_141030f22;
      local_130 = FUN_14081d0ea;
      local_138 = &LAB_1464f5fc4;
      local_148 = &LAB_148c3dd26;
      local_150 = &LAB_1459673ba;
      local_158 = L"Engine";
      local_160 = 0;
      local_168 = 0x10000004;
      local_170 = 0x10;
      local_178 = 0x1360;
      local_140 = &local_118;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
      lVar4 = *(longlong *)(param_3 + 0x398);
      if (lVar4 == 0) goto LAB_14126ee75;
    }
    if ((((DAT_14cbae3d8 != 0) && (lVar7 = *(longlong *)(lVar4 + 0x10), lVar7 != 0)) &&
        (*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) ==
        DAT_14cbae3d8 + 0x30)) {
      lVar7 = *(longlong *)(param_4 + 0x38) - uVar2;
      if (0x7ffffffe < lVar7) {
        lVar7 = 0x7fffffff;
      }
      lVar6 = 0x1e;
      if (0x1e < lVar7) {
        lVar6 = lVar7;
      }
      if ((longlong)*(int *)(param_4 + 0x48) != 0) {
        lVar7 = *(longlong *)(param_4 + 0x40);
        plVar9 = (longlong *)(lVar7 + 0x10);
        lVar8 = 0;
        do {
          if ((((int)plVar9[1] != 0) && ((int)plVar9[1] == (int)plVar9[3])) &&
             ((int)plVar9[5] == *(int *)(lVar4 + 0x394))) {
            *param_5 = 1;
            local_170 = CONCAT31(local_170._1_3_,*(undefined1 *)((longlong)plVar9 + 0x24));
            local_178 = (undefined4)lVar6;
            FUN_14088ec36(param_2,param_3,plVar9,(lVar7 - lVar8) + 0x20);
            uVar3 = 0;
            if ((*(char *)((longlong)plVar9 + 0x24) != '\x01') || ((longlong)(int)plVar9[1] < 1))
            goto LAB_14126f04c;
            local_b8 = 0;
            local_b0 = 0x8000000000;
            uStack_a8 = 0xffffffff;
            local_118 = (code *)0x0;
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
            lVar4 = (longlong)(int)plVar9[1] * 0x10;
            local_128 = (void *)0x0;
            local_120 = *(int *)(*plVar9 + -8 + lVar4);
            lVar7 = (longlong)local_120;
            pvVar1 = *(void **)(*plVar9 + -0x10 + lVar4);
            if (lVar7 == 0) {
              local_11c = 0;
            }
            else {
              FUN_1446dd670(&local_128,local_120,0);
              memcpy(local_128,pvVar1,lVar7 * 2);
              if (local_120 - 2U < 0x7fffffff) {
                FUN_14088c870(&local_118);
              }
            }
            if (local_118 == (code *)0x0) {
              uVar3 = 0;
              goto LAB_14126f030;
            }
            if ((longlong)(int)uStack_100 == 0) goto LAB_14126f01a;
            uVar3 = 0;
            lVar4 = 0;
            goto LAB_14126f00a;
          }
          plVar9 = plVar9 + 8;
          lVar8 = lVar8 + -0x40;
        } while (-lVar8 != (longlong)*(int *)(param_4 + 0x48) * 0x40);
      }
    }
  }
  goto LAB_14126ee75;
  while (lVar4 = lVar4 + 8, (longlong)(int)uStack_100 * 8 != lVar4) {
LAB_14126f00a:
    if (*(longlong *)(local_108 + lVar4) == 0) goto LAB_14126f030;
  }
LAB_14126f01a:
  uVar3 = FUN_14088e1d6(param_2,&local_118,0);
LAB_14126f030:
  if (local_128 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_140368b56(&local_118);
LAB_14126f04c:
  lVar4 = FUN_14665e8f4(param_1,param_2,param_3);
  if (*(char *)((longlong)plVar9 + 0x24) == '\x01') {
    bVar5 = 0 < (int)plVar9[3];
  }
  else {
    bVar5 = false;
  }
  *(bool *)lVar4 = bVar5;
  *(undefined4 *)(lVar4 + 4) = uVar3;
LAB_14126ee75:
  if ((local_40 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14126f12c FUN_14126f12c body=370 status=ok
// SIG undefined FUN_14126f12c(void)

undefined8 * FUN_14126f12c(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if ((((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))(), cVar4 != '\0')) {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar1 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar7 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar7 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar7);
              FUN_14005b248(param_1);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar7 < iVar5);
        }
        iVar7 = 2;
        if (2 < iVar5 * 2) {
          iVar7 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar7;
        if ((iVar7 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_38);
      uVar6 = local_38;
    }
    *param_2 = uVar6;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(param_1,iVar1);
    }
    lVar3 = *param_1;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar3 + lVar8) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar8) = 0;
    *(longlong *)(lVar3 + lVar8) = *param_3;
    *param_3 = 0;
    *(int *)(lVar3 + 8 + lVar8) = (int)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14126f2ac FUN_14126f2ac body=514 status=ok
// SIG undefined FUN_14126f2ac(void)

void FUN_14126f2ac(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 auStack_e8 [40];
  undefined8 local_c0;
  undefined8 *local_b8;
  longlong local_b0;
  longlong *local_a8;
  undefined8 *local_a0;
  longlong local_98;
  undefined8 local_88 [3];
  undefined8 local_70;
  undefined1 local_68 [40];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_14586802c();
  FUN_14106b9aa(param_1,&local_c0);
  uVar1 = FUN_14106ba94(param_1);
  FUN_140f4ea62(param_1 + 0x30,local_88,uVar1,&local_c0);
  local_c0 = local_88[0];
  FUN_1446dcdd4(local_68,&local_c0);
  plVar2 = (longlong *)FUN_1400d6974(local_68);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = (**(code **)(*plVar2 + 8))(plVar2);
    lVar4 = FUN_140fe7bec();
    if (((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
        lVar4 + 0x30)) {
      *(longlong **)(param_1 + 0x28) = plVar2;
    }
  }
  FUN_1458681c2(&local_c0,param_1,FUN_140c23aee);
  FUN_14586802e(&DAT_14cbc56a0,&local_70,&local_c0);
  FUN_1449db362(&local_c0);
  FUN_1458681c2(&local_c0,param_1,&LAB_140c23ae8);
  FUN_14586802e(&DAT_14cbc56b8,&local_70,&local_c0);
  FUN_1449db362(&local_c0);
  local_70 = FUN_140c23b2e(param_1);
  FUN_145868112(&local_c0,&DAT_14cbc56a0,&local_70);
  lVar4 = local_98;
  lVar3 = local_b0;
  LOCK();
  *(int *)(local_b0 + 0x38) = *(int *)(local_b0 + 0x38) + 1;
  UNLOCK();
  LOCK();
  *(int *)(local_98 + 0x38) = *(int *)(local_98 + 0x38) + 1;
  UNLOCK();
  puVar7 = local_b8;
  do {
    while( true ) {
      if (puVar7 == local_a0) {
        LOCK();
        *(int *)(lVar4 + 0x38) = *(int *)(lVar4 + 0x38) + -1;
        UNLOCK();
        LOCK();
        *(int *)(lVar3 + 0x38) = *(int *)(lVar3 + 0x38) + -1;
        UNLOCK();
        LOCK();
        *(int *)(local_98 + 0x38) = *(int *)(local_98 + 0x38) + -1;
        UNLOCK();
        LOCK();
        *(int *)(local_b0 + 0x38) = *(int *)(local_b0 + 0x38) + -1;
        UNLOCK();
        if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return;
      }
      FUN_140c23d9e(param_1,puVar7[2]);
      puVar5 = (undefined8 *)FUN_14126f4b0(*puVar7);
      if (puVar5 != (undefined8 *)0x0) break;
      puVar7 = (undefined8 *)0x0;
    }
    do {
      lVar6 = FUN_1447210f0(puVar5[2]);
      puVar7 = puVar5;
      if (lVar6 == *local_a8) break;
      puVar5 = (undefined8 *)FUN_14126f4b0(*puVar5);
      puVar7 = (undefined8 *)0x0;
    } while (puVar5 != (undefined8 *)0x0);
  } while( true );
}



// FUNCTION 14126f4b0 FUN_14126f4b0 body=122 status=ok
// SIG undefined FUN_14126f4b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_14126f4b0(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_1 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  do {
    lVar2 = param_1[2];
    if ((lVar2 != 0) && ((*(uint *)(lVar2 + 8) & 0x40018000) == 0)) {
      uVar1 = *(uint *)(lVar2 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar2 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        if ((*(uint *)(lVar2 + 8 + (ulonglong)(uVar1 & 0xffff) * 0x18) >> 0x15 & 1) == 0) {
          lVar2 = lVar2 + (ulonglong)(uVar1 & 0xffff) * 0x18;
LAB_14126f4fe:
          if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) == 0) {
            return param_1;
          }
        }
      }
      else if ((_DAT_00000008 >> 0x15 & 1) == 0) {
        lVar2 = 0;
        goto LAB_14126f4fe;
      }
    }
    param_1 = (longlong *)*param_1;
    if (param_1 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
  } while( true );
}



// FUNCTION 14126f546 FUN_14126f546 body=493 status=ok
// SIG undefined FUN_14126f546(void)

void FUN_14126f546(longlong param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined8 local_38;
  longlong lStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((((*(longlong **)(param_1 + 0x438) != (longlong *)0x0) && (*(int *)(param_1 + 0x434) != 0))
       && (uVar1 = *(uint *)(param_1 + 0x430), -1 < (int)uVar1)) &&
      (((int)uVar1 < DAT_14c9647dc &&
       (lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar7 != 0)))) &&
     ((*(int *)(lVar7 + 0x10) == *(int *)(param_1 + 0x434) &&
      (((*(uint *)(lVar7 + 8) & 0x10200000) == 0 &&
       (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x438) + 0x90))(), cVar2 == '\0')))))) {
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x438) + 0x98))();
    FUN_14126f740(&local_40);
    local_38 = 0;
    lStack_30 = 0;
    lVar7 = local_40;
    if (param_1 != 0) {
      uVar1 = *(uint *)(param_1 + 0xc);
      local_38 = (ulonglong)uVar1;
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
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar6);
        }
        LOCK();
        iVar3 = *(int *)(lVar7 + 0x10);
        bVar8 = iVar3 == 0;
        if (bVar8) {
          *(int *)(lVar7 + 0x10) = iVar6;
          iVar3 = 0;
        }
        UNLOCK();
        uVar1 = (uint)local_38;
        if (bVar8) {
          iVar3 = iVar6;
        }
      }
      local_38._0_4_ = uVar1;
      local_38 = CONCAT44(iVar3,(uint)local_38);
      lStack_30 = local_40;
      lVar7 = lStack_30;
      if ((((local_40 != 0) && (iVar3 != 0)) && (-1 < (int)(uint)local_38)) &&
         ((((int)(uint)local_38 < DAT_14c9647dc &&
           (plVar5 = (longlong *)
                     ((ulonglong)(((uint)local_38 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_38 >> 0x10) * 8)),
           plVar5 != (longlong *)0x0)) &&
          (((int)plVar5[2] == iVar3 &&
           (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (*plVar5 != 0)))))))) {
        FUN_1400796d0(*(undefined8 *)(*plVar5 + 0x10),local_40,1);
        lVar7 = lStack_30;
      }
    }
    lStack_30 = lVar7;
    FUN_14053c012(uVar4,&local_38);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68,param_1 + 0x3a8);
  }
  FUN_14126f802(param_1);
  return;
}



// FUNCTION 14126f740 FUN_14126f740 body=193 status=ok
// SIG undefined FUN_14126f740(void)

undefined8 * FUN_14126f740(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  wchar_t local_38 [20];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb949a4) {
    FUN_144b3d300(&DAT_14cb949a4);
    if (DAT_14cb949a4 == -1) {
      builtin_wcsncpy(local_38,L"SpawnWeaponDelayed",0x13);
      FUN_1446f470e(&DAT_14cb9499c,local_38,1);
      _Init_thread_footer(&DAT_14cb949a4);
    }
  }
  *param_1 = DAT_14cb9499c;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14126f802 FUN_14126f802 body=1321 status=ok
// SIG undefined FUN_14126f802(void)

void FUN_14126f802(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  uint uVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  undefined1 auStack_1f8 [32];
  ulonglong local_1d8;
  undefined4 local_1d0;
  ulonglong local_1c8;
  undefined1 local_1c0;
  undefined1 local_1b8;
  undefined4 local_1b0;
  undefined1 **local_1a8;
  longlong local_198;
  ulonglong uStack_190;
  undefined1 *local_180;
  undefined4 local_178;
  longlong *local_170;
  int local_158;
  char local_150;
  undefined7 uStack_14f;
  longlong *local_140;
  int local_138;
  int local_128;
  undefined1 local_78 [32];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  if ((((param_1[0x87] != 0) && (*(int *)((longlong)param_1 + 0x434) != 0)) &&
      (uVar2 = *(uint *)(param_1 + 0x86), -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc)) {
    lVar12 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((((lVar12 != 0) && (*(int *)(lVar12 + 0x10) == *(int *)((longlong)param_1 + 0x434))) &&
        (((*(uint *)(lVar12 + 8) & 0x10200000) == 0 &&
         ((param_1[0x89] != 0 && (*(int *)((longlong)param_1 + 0x444) != 0)))))) &&
       ((uVar2 = *(uint *)(param_1 + 0x88), -1 < (int)uVar2 && ((int)uVar2 < DAT_14c9647dc)))) {
      lVar12 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      if (((((lVar12 != 0) && (*(int *)(lVar12 + 0x10) == *(int *)((longlong)param_1 + 0x444))) &&
           ((*(uint *)(lVar12 + 8) & 0x10200000) == 0)) &&
          (((int)param_1[0x8c] != -1 && (param_1[0x15] != 0)))) &&
         (*(char *)(param_1[0x15] + 0x178) == '\x03')) {
        local_58 = (undefined1 *)0x0;
        local_50 = 0x400000000;
        (**(code **)(*param_1 + 0x668))(param_1,local_78);
        uVar5 = (**(code **)(*(longlong *)param_1[0x89] + 0x18))();
        local_198 = 0;
        uStack_190 = 0;
        lVar12 = param_1[0x15];
        if (lVar12 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = FUN_1447210f0(lVar12);
        }
        local_1d8 = FUN_140cbc0d8(uVar6);
        local_180 = local_78;
        if (local_58 != (undefined1 *)0x0) {
          local_180 = local_58;
        }
        local_178 = (undefined4)local_50;
        local_150 = '\0';
        local_128 = 0;
        FUN_1456bb102(&local_150,lVar12);
        local_1b8 = 0;
        local_1c0 = 0;
        local_1b0 = 1;
        local_1c8 = 0;
        local_1d0 = CONCAT31(local_1d0._1_3_,1);
        local_1a8 = &local_180;
        FUN_1403695ab(&local_198,param_2,uVar5,&local_150);
        lVar12 = DAT_14c9a3da0;
        if ((longlong)local_128 != 0) {
          lVar9 = (longlong)local_128 + -1;
          lVar13 = lVar9 * 0x10;
          FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar13),
                        *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar13));
          if (*(longlong *)(lVar12 + lVar13) != 0) {
            FUN_1400020a8();
          }
          lVar12 = DAT_14c9a3da0;
          iVar14 = (int)lVar9;
          if (DAT_14c9a3dd4 != 0) {
            *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar14;
          }
          *(undefined4 *)(lVar12 + lVar13) = 0xffffffff;
          iVar8 = -1;
          if (0 < DAT_14c9a3dd4) {
            iVar8 = DAT_14c9a3dd0;
          }
          *(int *)(lVar12 + 4 + lVar13) = iVar8;
          DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
          puVar7 = &DAT_14c9a3db0;
          if (DAT_14c9a3dc0 != (undefined *)0x0) {
            puVar7 = DAT_14c9a3dc0;
          }
          iVar8 = iVar14 + 0x1f;
          if (-1 < iVar14) {
            iVar8 = iVar14;
          }
          bVar3 = (byte)lVar9 & 0x1f;
          DAT_14c9a3dd0 = iVar14;
          *(uint *)(puVar7 + (longlong)(iVar8 >> 5) * 4) =
               *(uint *)(puVar7 + (longlong)(iVar8 >> 5) * 4) &
               (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
          local_128 = 0;
        }
        if ((local_150 == '\x03') && (local_140 != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)local_140 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_140 + 0x10))();
          }
        }
        if ((longlong)(int)uStack_190 == 0) {
          uVar10 = 0;
        }
        else {
          lVar13 = (longlong)(int)uStack_190 * 0x68 + local_198;
          lVar12 = local_198;
          do {
            local_180 = (undefined1 *)((ulonglong)local_180 & 0xffffffffffffff00);
            local_158 = 0;
            FUN_1456bb102(&local_180,param_1);
            FUN_140368c94(lVar12,&local_150,&local_180,1);
            lVar9 = DAT_14c9a3da0;
            if ((longlong)local_158 != 0) {
              lVar15 = (longlong)local_158 + -1;
              lVar11 = lVar15 * 0x10;
              FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar11),
                            *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar11));
              if (*(longlong *)(lVar9 + lVar11) != 0) {
                FUN_1400020a8();
              }
              lVar9 = DAT_14c9a3da0;
              iVar14 = (int)lVar15;
              if (DAT_14c9a3dd4 != 0) {
                *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar14;
              }
              *(undefined4 *)(lVar9 + lVar11) = 0xffffffff;
              iVar8 = -1;
              if (0 < DAT_14c9a3dd4) {
                iVar8 = DAT_14c9a3dd0;
              }
              *(int *)(lVar9 + 4 + lVar11) = iVar8;
              DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
              puVar7 = DAT_14c9a3dc0;
              if (DAT_14c9a3dc0 == (undefined *)0x0) {
                puVar7 = &DAT_14c9a3db0;
              }
              iVar8 = iVar14 + 0x1f;
              if (-1 < iVar14) {
                iVar8 = iVar14;
              }
              bVar3 = (byte)lVar15 & 0x1f;
              DAT_14c9a3dd0 = iVar14;
              *(uint *)(puVar7 + (longlong)(iVar8 >> 5) * 4) =
                   *(uint *)(puVar7 + (longlong)(iVar8 >> 5) * 4) &
                   (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
              local_158 = 0;
            }
            if (((char)local_180 == '\x03') && (local_170 != (longlong *)0x0)) {
              LOCK();
              piVar1 = (int *)((longlong)local_170 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_170 + 0x10))();
              }
            }
            if (CONCAT71(uStack_14f,local_150) != 0) {
              if ((longlong)local_138 != 0) {
                lVar9 = 0;
                do {
                  if (*(longlong *)((longlong)local_140 + lVar9) == 0) goto LAB_14126fb11;
                  lVar9 = lVar9 + 8;
                } while ((longlong)local_138 * 8 != lVar9);
              }
              local_180 = (undefined1 *)CONCAT44(local_180._4_4_,0xffffffff);
              local_1d0 = *(undefined4 *)((longlong)param_1 + 0x464);
              local_1c8 = local_1c8 & 0xffffffff00000000;
              local_1d8 = local_1d8 & 0xffffffffffffff00;
              uVar4 = (**(code **)(*(longlong *)param_1[0x87] + 0xa8))
                                ((longlong *)param_1[0x87],&local_180,&local_150,(int)param_1[0x8c])
              ;
              *(undefined1 *)(param_1 + 0x68) = uVar4;
            }
LAB_14126fb11:
            FUN_140368b56(&local_150);
            lVar12 = lVar12 + 0x68;
          } while (lVar12 != lVar13);
          uVar10 = uStack_190 & 0xffffffff;
        }
        FUN_14036924e(local_198,uVar10);
        if (local_198 != 0) {
          FUN_1400020a8();
        }
        if (local_58 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14126fd2c FUN_14126fd2c body=90 status=ok
// SIG undefined FUN_14126fd2c(void)

void FUN_14126fd2c(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
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



// FUNCTION 14126fd86 FUN_14126fd86 body=181 status=ok
// SIG undefined FUN_14126fd86(void)

void FUN_14126fd86(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1[0x1c2] != 0) {
    if (((param_2 != (longlong *)0x0) && ((*(byte *)(param_1[0x1c2] + 0x300) & 8) != 0)) &&
       (lVar1 = (**(code **)(*param_2 + 0x108))(param_2), lVar1 != 0)) {
      uVar2 = (**(code **)(*param_2 + 0x108))(param_2);
      FUN_140eeb8c0(param_1,uVar2);
    }
    if ((char)param_1[0x1db] < '\0') {
      if ((((char)param_1[0x2f] == '\x03') || ((*(byte *)(param_1 + 0xc) & 1) != 0)) ||
         ((*(byte *)((longlong)param_1 + 0x61) & 1) != 0)) {
        *(undefined1 *)((longlong)param_1 + 0x1152) = 0;
                    /* WARNING: Could not recover jumptable at 0x00014126fde9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x6c0))(param_1);
        return;
      }
    }
    else if ((*(byte *)(param_1[0x1c2] + 0x300) & 4) != 0) {
      FUN_140aeefbc(param_1,0,1);
      return;
    }
  }
  return;
}



// FUNCTION 14126fe3c FUN_14126fe3c body=801 status=ok
// SIG undefined FUN_14126fe3c(void)

undefined8 * FUN_14126fe3c(undefined8 *param_1,longlong param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  float fVar10;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = &PTR_FUN_14a837980;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0x6000000060;
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0xfe;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  uVar2 = DAT_14c8463e8;
  param_1[0x16] = DAT_14c8463e0;
  param_1[0x17] = uVar2;
  uVar2 = DAT_14c8463d8;
  param_1[0x14] = DAT_14c8463d0;
  param_1[0x15] = uVar2;
  uVar2 = DAT_14c8463e8;
  param_1[0x1a] = DAT_14c8463e0;
  param_1[0x1b] = uVar2;
  uVar2 = DAT_14c8463d8;
  param_1[0x18] = DAT_14c8463d0;
  param_1[0x19] = uVar2;
  uVar2 = DAT_14c8463d8;
  param_1[0x1c] = DAT_14c8463d0;
  param_1[0x1d] = uVar2;
  uVar2 = DAT_14c8463e8;
  param_1[0x1e] = DAT_14c8463e0;
  param_1[0x1f] = uVar2;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0x3f000000;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0x3e000000;
  param_1[0x29] = DAT_14c8464f0;
  uVar2 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x27] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x28] = uVar2;
  param_1[0x2c] = DAT_14c8464f0;
  uVar5 = DAT_14c8464e8._4_4_;
  uVar4 = (undefined4)DAT_14c8464e8;
  uVar3 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x2a) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x154) = uVar3;
  *(undefined4 *)(param_1 + 0x2b) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x15c) = uVar5;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x474);
  *(undefined4 *)((longlong)param_1 + 0x124) = *(undefined4 *)(param_2 + 0x478);
  if (*(longlong *)(param_2 + 0xa8) == 0) {
    uVar9 = 0x460;
    lVar8 = 0x45c;
  }
  else {
    iVar7 = FUN_14487fd02();
    uVar9 = (ulonglong)(iVar7 == 2) * 8;
    lVar8 = uVar9 + 0x45c;
    uVar9 = uVar9 | 0x460;
  }
  *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_2 + lVar8);
  *(undefined4 *)((longlong)param_1 + 300) = *(undefined4 *)(param_2 + uVar9);
  if (DAT_14cac0fa8 == (longlong *)0x0) {
    local_40 = &local_28;
    local_28 = FUN_141030f22;
    local_30 = FUN_14081d0ea;
    local_38 = &LAB_141117124;
    local_48 = &LAB_14786c867;
    local_50 = &LAB_145abcadb;
    local_58 = &DAT_149e063b2;
    local_60 = 0;
    local_68 = 0x10000004;
    local_70 = 8;
    local_78 = 0x438;
    FUN_14081cfa3(L"/Script/Engine",L"GameNetworkManager",&DAT_14cac0fa8,&DAT_14786c866);
  }
  plVar6 = DAT_14cac0fa8;
  lVar8 = DAT_14cac0fa8[0x22];
  if (lVar8 == 0) {
    (**(code **)(*DAT_14cac0fa8 + 1000))(DAT_14cac0fa8);
    lVar8 = plVar6[0x22];
    if (lVar8 != 0) goto LAB_14126fff2;
  }
  else {
LAB_14126fff2:
    fVar1 = *(float *)(lVar8 + 0x3f0);
    *(float *)(param_1 + 0x26) = fVar1;
    fVar10 = *(float *)(lVar8 + 0x3f4);
    if (*(float *)(lVar8 + 0x3f4) <= fVar1 + fVar1) {
      fVar10 = fVar1 + fVar1;
    }
    *(float *)(param_1 + 0x21) = fVar10;
  }
  if ((*(longlong *)(param_2 + 0xa8) != 0) &&
     (*(char *)(*(longlong *)(param_2 + 0xa8) + 0x178) == '\x02')) {
    iVar7 = *(int *)((longlong)param_1 + 0x5c);
    if (-1 < iVar7) {
      if (*(int *)((longlong)param_1 + 0x24) < iVar7) {
        FUN_145868660(param_1 + 3);
      }
      iVar7 = *(int *)(param_1 + 0xb);
      if (-1 < iVar7) {
        if (*(int *)((longlong)param_1 + 0x34) < iVar7) {
          FUN_145868660(param_1 + 5);
        }
        goto LAB_14127002f;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar7);
  }
LAB_14127002f:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1412701de FUN_1412701de body=1776 status=ok
// SIG undefined FUN_1412701de(void)

void FUN_1412701de(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined1 auStack_f8 [40];
  char local_d0 [16];
  longlong *local_c0;
  undefined4 local_a8 [2];
  undefined4 local_a0;
  undefined4 uStack_9c;
  ushort local_88;
  byte local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  ushort local_60;
  byte local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar2 = *param_2;
  local_d0[0] = '\0';
  local_a8[0] = 0;
  FUN_140b359ca(local_d0);
  puVar6 = &local_a0;
  FUN_1448729ea(param_1 + 0x60,puVar6,local_d0);
  uVar8 = local_a0;
  if (local_80 != 3) {
    puVar7 = &local_78;
    FUN_1400b56fe(puVar7,&local_a0,3);
    uVar8 = local_78;
    if (local_58 == 0) {
      uVar8 = 0x3f800000;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_60) {
        puVar7 = (undefined4 *)CONCAT44(uStack_74,local_78);
      }
      (*pcVar4)(puVar7);
    }
    if (0x18 < local_60) {
      FUN_1400020a8(CONCAT44(uStack_74,local_78));
    }
  }
  uVar5 = FUN_1412708cf();
  lVar3 = *(longlong *)(lVar2 + 0x200);
  if (lVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar3,uVar5,0);
  }
  FUN_1407cace8(lVar2,uVar5,uVar8,0);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_88) {
      puVar6 = (undefined4 *)CONCAT44(uStack_9c,local_a0);
    }
    (*pcVar4)(puVar6);
  }
  if (0x18 < local_88) {
    FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
  }
  FUN_1448173f8(local_a8);
  if ((local_d0[0] == '\x03') && (local_c0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_c0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_c0 + 0x10))();
    }
  }
  lVar2 = *param_2;
  local_d0[0] = '\0';
  local_a8[0] = 0;
  FUN_140b359ca(local_d0,param_2);
  puVar6 = &local_a0;
  FUN_1448729ea(param_1 + 0xb0,puVar6,local_d0);
  uVar8 = local_a0;
  if (local_80 != 3) {
    puVar7 = &local_78;
    FUN_1400b56fe(puVar7,&local_a0,3);
    uVar8 = local_78;
    if (local_58 == 0) {
      uVar8 = 0x3f800000;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_60) {
        puVar7 = (undefined4 *)CONCAT44(uStack_74,local_78);
      }
      (*pcVar4)(puVar7);
    }
    if (0x18 < local_60) {
      FUN_1400020a8(CONCAT44(uStack_74,local_78));
    }
  }
  uVar5 = FUN_1412708cf();
  lVar3 = *(longlong *)(lVar2 + 0x200);
  if (lVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar3,uVar5,1);
  }
  FUN_1407cace8(lVar2,uVar5,uVar8,0);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_88) {
      puVar6 = (undefined4 *)CONCAT44(uStack_9c,local_a0);
    }
    (*pcVar4)(puVar6);
  }
  if (0x18 < local_88) {
    FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
  }
  FUN_1448173f8(local_a8);
  if ((local_d0[0] == '\x03') && (local_c0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_c0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_c0 + 0x10))();
    }
  }
  lVar2 = *param_2;
  local_d0[0] = '\0';
  local_a8[0] = 0;
  FUN_140b359ca(local_d0,param_2);
  puVar6 = &local_a0;
  FUN_1448729ea(param_1 + 0x100,puVar6,local_d0);
  uVar8 = local_a0;
  if (local_80 != 3) {
    puVar7 = &local_78;
    FUN_1400b56fe(puVar7,&local_a0,3);
    uVar8 = local_78;
    if (local_58 == 0) {
      uVar8 = 0x3f800000;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_60) {
        puVar7 = (undefined4 *)CONCAT44(uStack_74,local_78);
      }
      (*pcVar4)(puVar7);
    }
    if (0x18 < local_60) {
      FUN_1400020a8(CONCAT44(uStack_74,local_78));
    }
  }
  uVar5 = FUN_1412708cf();
  lVar3 = *(longlong *)(lVar2 + 0x200);
  if (lVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar3,uVar5,2);
  }
  FUN_1407cace8(lVar2,uVar5,uVar8,0);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_88) {
      puVar6 = (undefined4 *)CONCAT44(uStack_9c,local_a0);
    }
    (*pcVar4)(puVar6);
  }
  if (0x18 < local_88) {
    FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
  }
  FUN_1448173f8(local_a8);
  if ((local_d0[0] == '\x03') && (local_c0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_c0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_c0 + 0x10))();
    }
  }
  lVar2 = *param_2;
  local_d0[0] = '\0';
  local_a8[0] = 0;
  FUN_140b359ca(local_d0,param_2);
  puVar6 = &local_a0;
  FUN_1448729ea(param_1 + 0x150,puVar6,local_d0);
  uVar8 = local_a0;
  if (local_80 != 3) {
    puVar7 = &local_78;
    FUN_1400b56fe(puVar7,&local_a0,3);
    uVar8 = local_78;
    if (local_58 == 0) {
      uVar8 = 0x3f800000;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_60) {
        puVar7 = (undefined4 *)CONCAT44(uStack_74,local_78);
      }
      (*pcVar4)(puVar7);
    }
    if (0x18 < local_60) {
      FUN_1400020a8(CONCAT44(uStack_74,local_78));
    }
  }
  uVar5 = FUN_1412708cf();
  lVar3 = *(longlong *)(lVar2 + 0x200);
  if (lVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar3,uVar5,3);
  }
  FUN_1407cace8(lVar2,uVar5,uVar8,0);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_88) {
      puVar6 = (undefined4 *)CONCAT44(uStack_9c,local_a0);
    }
    (*pcVar4)(puVar6);
  }
  if (0x18 < local_88) {
    FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
  }
  FUN_1448173f8(local_a8);
  if ((local_d0[0] == '\x03') && (local_c0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_c0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_c0 + 0x10))();
    }
  }
  if ((local_50 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412708cf FUN_1412708cf body=57 status=ok
// SIG undefined FUN_1412708cf(void)

void FUN_1412708cf(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba46d0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba46d0 = FUN_14171c317(FUN_1465be57e,uVar1,L"EAtt_GrenadeBehaviorPayloadTargetCombo");
  }
  return;
}



// FUNCTION 141270908 FUN_141270908 body=8 status=ok
// SIG undefined FUN_141270908(void)

void FUN_141270908(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x150) = param_2;
  return;
}



// FUNCTION 141270910 FUN_141270910 body=11 status=ok
// SIG undefined FUN_141270910(void)

void FUN_141270910(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x1898) = *param_2;
  return;
}



// FUNCTION 14127091c FUN_14127091c body=41 status=ok
// SIG undefined FUN_14127091c(void)

void FUN_14127091c(longlong *param_1,char param_2)

{
  if (((*(byte *)((longlong)param_1 + 0x2d3) & 8) == 0) == (bool)param_2) {
    *(byte *)((longlong)param_1 + 0x2d3) =
         *(byte *)((longlong)param_1 + 0x2d3) & 0xf7 | param_2 << 3;
                    /* WARNING: Could not recover jumptable at 0x00014127093d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x958))();
    return;
  }
  return;
}



// FUNCTION 141270945 FUN_141270945 body=21 status=ok
// SIG undefined FUN_141270945(void)

undefined8 * FUN_141270945(void)

{
  FUN_140f26c7f();
  return &DAT_14cb710c0;
}



// FUNCTION 14127095a FUN_14127095a body=279 status=ok
// SIG undefined FUN_14127095a(void)

void FUN_14127095a(longlong *param_1,undefined4 *param_2,char param_3)

{
  float fVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  float fVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar3 = FUN_141270a72();
  *(undefined4 *)(param_1 + 200) = *param_2;
  *(undefined4 *)(param_1 + 199) = param_2[2];
  *(undefined4 *)(param_1 + 0xc5) = param_2[1];
  param_1[0xcb] = *(longlong *)(param_2 + 8);
  lVar2 = *(longlong *)(param_2 + 6);
  param_1[0xc9] = *(longlong *)(param_2 + 4);
  param_1[0xca] = lVar2;
  *(undefined4 *)(param_1 + 0xcc) = param_2[10];
  fVar1 = (float)param_2[0xc];
  *(float *)(param_1 + 0xcd) = fVar1;
  fVar5 = 0.0;
  if (0.0 <= (float)param_2[0xb]) {
    fVar5 = (float)param_2[0xb];
  }
  if (fVar5 <= fVar1) {
    fVar5 = fVar1;
  }
  *(float *)((longlong)param_1 + 0x664) = fVar5;
  if ((*(byte *)((longlong)param_1 + 0x9c) & 8) != 0) {
    if (cVar3 == '\0') {
      FUN_1406cc378(param_1);
    }
    local_38 = param_1[0x50];
    lStack_30 = param_1[0x51];
    local_28 = param_1[0x52];
    FUN_140043360(param_1 + 0x82,&local_38,1);
    if (param_3 != '\0') {
      iVar4 = (**(code **)(*param_1 + 0x570))(param_1);
      if ((iVar4 != 0) && (param_1[0x15] != 0)) {
        FUN_144907e2c(param_1,0,1,0);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141270a72 FUN_141270a72 body=137 status=ok
// SIG undefined FUN_141270a72(void)

byte FUN_141270a72(longlong param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  
  if ((*(int *)(param_1 + 0x640) == *param_2) && (*(int *)(param_1 + 0x628) == param_2[1])) {
    if ((*(double *)(param_1 + 0x648) == *(double *)(param_2 + 4)) &&
       (!NAN(*(double *)(param_1 + 0x648)) && !NAN(*(double *)(param_2 + 4)))) {
      if ((*(double *)(param_1 + 0x650) == *(double *)(param_2 + 6)) &&
         (!NAN(*(double *)(param_1 + 0x650)) && !NAN(*(double *)(param_2 + 6)))) {
        if ((*(double *)(param_1 + 0x658) == *(double *)(param_2 + 8)) &&
           (!NAN(*(double *)(param_1 + 0x658)) && !NAN(*(double *)(param_2 + 8)))) {
          if ((*(float *)(param_1 + 0x660) == (float)param_2[10]) &&
             (!NAN(*(float *)(param_1 + 0x660)) && !NAN((float)param_2[10]))) {
            fVar1 = *(float *)(param_1 + 0x668);
            if ((fVar1 == (float)param_2[0xc]) && (!NAN(fVar1) && !NAN((float)param_2[0xc]))) {
              fVar2 = 0.0;
              if (0.0 <= (float)param_2[0xb]) {
                fVar2 = (float)param_2[0xb];
              }
              if (fVar2 <= fVar1) {
                fVar2 = fVar1;
              }
              return -(fVar2 == *(float *)(param_1 + 0x664)) & 1;
            }
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 141270afc FUN_141270afc body=139 status=ok
// SIG undefined FUN_141270afc(void)

void FUN_141270afc(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) < 0) {
    FUN_1488c12b6(param_2,0);
  }
  local_28 = FUN_141270b88();
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_28);
  }
  FUN_141270c6e(param_1,&local_28,param_3,param_2);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141270b88 FUN_141270b88 body=228 status=ok
// SIG undefined FUN_141270b88(void)

longlong FUN_141270b88(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb58e20 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464c483a;
    local_38 = &LAB_14865a559;
    local_40 = &LAB_1410c9388;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x3f0;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxAIHeldMeleeComponent",&DAT_14cb58e20,&DAT_14865a558);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb58e20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141270c6e FUN_141270c6e body=1581 status=ok
// SIG undefined FUN_141270c6e(void)

void FUN_141270c6e(longlong param_1,longlong *param_2,char param_3,longlong *param_4)

{
  uint *puVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  byte bVar16;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  code *local_98;
  code *local_90;
  byte local_79;
  longlong *local_78;
  ulonglong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar13 = *param_2;
  if (lVar13 == 0) {
    if (DAT_14cad00c8 == 0) {
LAB_141271108:
      local_a0 = &local_50;
      local_50 = FUN_144a7958c;
      local_90 = FUN_14081d0ea;
      local_98 = FUN_14081d0ea;
      local_a8 = &LAB_1479b7a0c;
      local_b0 = &LAB_1463b464e;
      local_b8 = L"Engine";
      local_c0 = 0;
      local_c8 = 0x10000005;
      local_d0 = 8;
      local_d8 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      lVar13 = 0;
    }
    else {
      lVar13 = 0;
    }
LAB_141270cdd:
    lVar8 = *param_2;
    if (lVar13 == DAT_14cad00c8) {
      if (param_3 == '\0') {
        if ((lVar8 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar8);
        }
        FUN_1488c157e(param_1,param_4);
      }
      else {
        local_58 = lVar8;
        if ((lVar8 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar8);
        }
        FUN_1488c1316(param_1,&local_58,param_4);
      }
      goto LAB_14127121e;
    }
  }
  else {
    if (DAT_14cad00c8 == 0) {
      local_a0 = &local_50;
      local_50 = FUN_144a7958c;
      local_90 = FUN_14081d0ea;
      local_98 = FUN_14081d0ea;
      local_a8 = &LAB_1479b7a0c;
      local_b0 = &LAB_1463b464e;
      local_b8 = L"Engine";
      local_c0 = 0;
      local_c8 = 0x10000005;
      local_d0 = 8;
      local_d8 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      if (DAT_14cad00c8 == 0) goto LAB_141271108;
    }
    if ((*(int *)(DAT_14cad00c8 + 0x38) <= *(int *)(lVar13 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8)
        == DAT_14cad00c8 + 0x30)) {
      lVar13 = *param_2;
      goto LAB_141270cdd;
    }
    lVar8 = *param_2;
  }
  bVar16 = lVar8 != 0;
  if (param_3 == '\0') {
    if ((DAT_14c950c29 & bVar16) == 1) {
      FUN_1456cec3c(lVar8);
    }
    puVar1 = (uint *)(param_1 + 0x250);
    uVar3 = *(uint *)(param_1 + 0x268);
    if (uVar3 == 0) {
      uVar15 = 1;
      uVar11 = 0;
      uVar4 = 0;
      iVar9 = 0;
    }
    else {
      puVar5 = *(uint **)(param_1 + 0x260);
      if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
        puVar5 = puVar1;
      }
      uVar4 = *puVar5;
      if (uVar4 == 0) {
        iVar9 = uVar3 + 0x1e;
        if (-1 < (int)(uVar3 - 1)) {
          iVar9 = uVar3 - 1;
        }
        uVar11 = 0;
        uVar15 = (ulonglong)(uint)(iVar9 >> 5);
        if (iVar9 >> 5 < 1) {
          uVar15 = uVar11;
        }
        iVar9 = 0;
        do {
          if (uVar15 == uVar11) goto LAB_14127121e;
          iVar9 = iVar9 + 0x20;
          uVar4 = puVar5[uVar11 + 1];
          uVar11 = uVar11 + 1;
        } while (uVar4 == 0);
      }
      else {
        uVar11 = 0;
        iVar9 = 0;
      }
      uVar15 = (ulonglong)(-uVar4 & uVar4);
      uVar2 = uVar15 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      uVar4 = (iVar9 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      if ((int)uVar3 <= (int)uVar4) {
        uVar4 = uVar3;
      }
    }
    if (uVar4 != uVar3) {
      uVar14 = 0xffffffff;
      local_79 = bVar16;
      local_70 = (ulonglong)uVar3;
      do {
        lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x240) + (longlong)(int)uVar4 * 0x10);
        if (lVar13 != 0) {
          if ((DAT_14c950c29 & bVar16) == 1) {
            local_78 = param_4;
            FUN_1456cec3c(lVar8);
            param_4 = local_78;
            bVar16 = local_79;
LAB_141270ddb:
            if (DAT_14cad00c8 == 0) {
              local_a0 = &local_50;
              local_50 = FUN_144a7958c;
              local_90 = FUN_14081d0ea;
              local_98 = FUN_14081d0ea;
              local_a8 = &LAB_1479b7a0c;
              local_b0 = &LAB_1463b464e;
              local_b8 = L"Engine";
              local_c0 = 0;
              local_c8 = 0x10000005;
              local_d0 = 8;
              local_d8 = 0x110;
              local_78 = param_4;
              FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
              param_4 = local_78;
              bVar16 = local_79;
              if (DAT_14cad00c8 == 0) goto LAB_141270ff4;
            }
            if (*(int *)(lVar8 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) goto LAB_141270ff4;
            lVar12 = 0;
            if (*(longlong *)
                 (*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) ==
                DAT_14cad00c8 + 0x30) {
              lVar12 = lVar8;
            }
          }
          else {
            if (lVar8 != 0) goto LAB_141270ddb;
LAB_141270ff4:
            lVar12 = 0;
          }
          if ((*(int *)(lVar12 + 0x38) <= *(int *)(*(longlong *)(lVar13 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar12 + 0x38) * 8) == lVar12 + 0x30)) {
            iVar10 = (int)param_4[1];
            *(uint *)(param_4 + 1) = iVar10 + 1U;
            if (*(uint *)((longlong)param_4 + 0xc) < iVar10 + 1U) {
              local_78 = param_4;
              local_68 = param_1;
              FUN_14127129c(param_4,iVar10);
              param_1 = local_68;
              param_4 = local_78;
            }
            *(longlong *)(*param_4 + (longlong)iVar10 * 8) = lVar13;
            bVar16 = local_79;
          }
        }
        uVar14 = uVar14 & ~(uint)uVar15;
        puVar5 = *(uint **)(param_1 + 0x260);
        if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
          puVar5 = puVar1;
        }
        uVar3 = *(uint *)(param_1 + 0x268);
        iVar10 = (int)uVar11;
        lVar13 = (longlong)iVar10;
        uVar4 = puVar5[lVar13] & uVar14;
        if (uVar4 == 0) {
          iVar6 = uVar3 + 0x1e;
          if (-1 < (int)(uVar3 - 1)) {
            iVar6 = uVar3 - 1;
          }
          iVar6 = iVar6 >> 5;
          iVar9 = iVar9 + 0x20;
          iVar7 = iVar6;
          if (iVar6 < iVar10) {
            iVar7 = iVar10;
          }
          if (iVar10 < iVar6) {
            lVar12 = 0;
            do {
              uVar4 = puVar5[lVar13 + lVar12 + 1];
              if (uVar4 != 0) {
                uVar11 = (ulonglong)(iVar10 + (int)lVar12 + 1);
                uVar14 = 0xffffffff;
                goto LAB_141270ea2;
              }
              iVar9 = iVar9 + 0x20;
              lVar12 = lVar12 + 1;
            } while (iVar7 - lVar13 != lVar12);
            uVar14 = 0xffffffff;
            iVar10 = iVar7;
          }
          uVar11 = (ulonglong)(iVar10 + 1);
          uVar4 = uVar3;
        }
        else {
LAB_141270ea2:
          uVar15 = (ulonglong)(-uVar4 & uVar4);
          uVar2 = uVar15 * 2 + 1;
          lVar13 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          uVar4 = (iVar9 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
          if ((int)uVar3 <= (int)uVar4) {
            uVar4 = uVar3;
          }
        }
      } while (uVar4 != (uint)local_70);
    }
  }
  else {
    local_60 = lVar8;
    if ((bVar16 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar8);
    }
    FUN_1488c16b4(param_1,&local_60,param_4);
  }
LAB_14127121e:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14127129c FUN_14127129c body=353 status=ok
// SIG undefined FUN_14127129c(void)

void FUN_14127129c(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141271321;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_141271321:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1412713fe FUN_1412713fe body=1465 status=ok
// SIG undefined FUN_1412713fe(void)

void FUN_1412713fe(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 local_148;
  undefined8 *local_140;
  ulonglong uStack_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined5 uStack_118;
  undefined8 *local_110;
  int local_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8;
  undefined8 *local_e0;
  int local_d8;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  uint uStack_b8;
  undefined1 uStack_b4;
  undefined8 *local_b0;
  ulonglong uStack_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined8 *local_80;
  ulonglong uStack_78;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1412719b8();
  plVar3 = *(longlong **)(param_1 + 0x110);
  if (plVar3 == (longlong *)0x0) goto LAB_141271739;
  iVar6 = (int)plVar3[1];
  do {
    if (iVar6 == 0) goto LAB_141271739;
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar10 = iVar6 == iVar5;
    if (bVar10) {
      *(int *)(plVar3 + 1) = iVar6 + 1;
      iVar5 = iVar6;
    }
    iVar6 = iVar5;
    UNLOCK();
  } while (!bVar10);
  lVar4 = *(longlong *)(param_1 + 0x108);
  if (lVar4 != 0) {
    if ((*(longlong *)(param_1 + 0x188) == 0) || (*(int *)(param_1 + 0x184) == 0)) {
LAB_1412714d8:
      local_98 = *(undefined8 *)(param_1 + 0x170);
      uStack_90 = *(undefined8 *)(param_1 + 0x178);
      local_88 = 1;
      local_80 = (undefined8 *)0x0;
      uStack_78 = 0;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x180);
      if ((((int)uVar2 < 0) ||
          (((DAT_14c9647dc <= (int)uVar2 ||
            (plVar9 = (longlong *)
                      ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
            plVar9 == (longlong *)0x0)) || ((int)plVar9[2] != *(int *)(param_1 + 0x184))))) ||
         ((((*(uint *)(plVar9 + 1) & 0x10200000) != 0 || (*plVar9 == 0)) ||
          (lVar7 = FUN_1400796d0(*(undefined8 *)(*plVar9 + 0x10),*(longlong *)(param_1 + 0x188),1),
          lVar7 == 0)))) goto LAB_1412714d8;
      local_68 = *(undefined8 *)(param_1 + 0x188);
      uVar8 = FUN_14479d2ce((uint *)(param_1 + 0x180));
      local_98 = 0;
      uStack_90 = 0;
      local_80 = (undefined8 *)0x0;
      uStack_78 = 0;
      local_88 = 1;
      FUN_1446efa72(&local_80,0,3,0x10);
      uStack_78 = CONCAT44(uStack_78._4_4_,3);
      FUN_147703202(local_80,uVar8,&local_68);
    }
    if ((*(longlong *)(param_1 + 0x1ac) == 0) || (*(int *)(param_1 + 0x1a8) == 0)) {
LAB_141271573:
      uStack_b8 = *(uint *)(param_1 + 0x1a0);
      local_c8 = *(undefined8 *)(param_1 + 400);
      uStack_c0 = (undefined4)*(undefined8 *)(param_1 + 0x198);
      uStack_bc = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x198) >> 0x20);
      uStack_b4 = 1;
      local_b0 = (undefined8 *)0x0;
      uStack_a8 = 0;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x1a4);
      if ((((int)uVar2 < 0) ||
          ((((DAT_14c9647dc <= (int)uVar2 ||
             (plVar9 = (longlong *)
                       ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
             plVar9 == (longlong *)0x0)) || ((int)plVar9[2] != *(int *)(param_1 + 0x1a8))) ||
           (((*(uint *)(plVar9 + 1) & 0x10200000) != 0 || (*plVar9 == 0)))))) ||
         (lVar7 = FUN_1400796d0(*(undefined8 *)(*plVar9 + 0x10),*(longlong *)(param_1 + 0x1ac),1),
         lVar7 == 0)) goto LAB_141271573;
      local_68 = *(undefined8 *)(param_1 + 0x1ac);
      uVar8 = FUN_14479d2ce((uint *)(param_1 + 0x1a4));
      local_c8 = 0x3f800000;
      uStack_c0 = 0x3f800000;
      uStack_bc = 0x3f800000;
      uStack_b8 = uStack_b8 & 0xffffff00;
      local_b0 = (undefined8 *)0x0;
      uStack_a8 = 0;
      uStack_b4 = 1;
      FUN_1446efa72(&local_b0,0,3,0x10);
      uStack_a8 = CONCAT44(uStack_a8._4_4_,3);
      FUN_1477688f4(local_b0,uVar8,&local_68);
    }
    local_f8 = (undefined4)local_98;
    uStack_f4 = local_98._4_4_;
    uStack_f0 = (undefined4)uStack_90;
    uStack_ec = uStack_90._4_4_;
    local_e8 = local_88;
    local_e0 = (undefined8 *)0x0;
    local_d8 = 0;
    FUN_140a5c51c(&local_e0,&local_80);
    FUN_140a5c650(lVar4 + 0x240,lVar4,&local_f8);
    if (local_d8 == 0) {
LAB_141271604:
      if (local_e0 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_e0 != (undefined8 *)0x0) {
      (**(code **)*local_e0)(local_e0,0);
      FUN_1446efa72(&local_e0,0,0,0x10);
      local_d8 = 0;
      goto LAB_141271604;
    }
    uStack_118 = CONCAT14(uStack_b4,uStack_b8);
    local_128 = (undefined4)local_c8;
    uStack_124 = local_c8._4_4_;
    uStack_120 = uStack_c0;
    uStack_11c = uStack_bc;
    local_110 = (undefined8 *)0x0;
    local_108 = 0;
    FUN_140a5aaa0(&local_110,&local_b0);
    FUN_140a5c8a2(lVar4 + 0x250,lVar4,&local_128);
    if (local_108 == 0) {
LAB_141271674:
      if (local_110 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_110 != (undefined8 *)0x0) {
      (**(code **)*local_110)(local_110,0);
      FUN_1446efa72(&local_110,0,0,0x10);
      local_108 = 0;
      goto LAB_141271674;
    }
    local_158 = *(undefined4 *)(param_1 + 0x1f8);
    uStack_154 = *(undefined4 *)(param_1 + 0x1fc);
    local_68 = *(undefined8 *)(param_1 + 0x1f8);
    uStack_150 = *(undefined4 *)(param_1 + 0x200);
    uStack_14c = *(undefined4 *)(param_1 + 0x204);
    local_148 = 1;
    local_140 = (undefined8 *)0x0;
    uStack_138 = 0;
    local_58 = 1;
    local_50 = 0;
    local_48 = 0;
    uStack_60 = uStack_150;
    uStack_5c = uStack_14c;
    FUN_140a58be0(&local_50,&local_140);
    FUN_140a58d14(lVar4 + 0x218,&local_68);
    if ((int)uStack_138 == 0) {
LAB_1412716e3:
      if (local_140 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_140 != (undefined8 *)0x0) {
      (**(code **)*local_140)(local_140,0);
      FUN_1446efa72(&local_140,0,0,0x10);
      uStack_138 = uStack_138 & 0xffffffff00000000;
      goto LAB_1412716e3;
    }
    if ((int)uStack_a8 == 0) {
LAB_1412716ff:
      if (local_b0 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_b0 != (undefined8 *)0x0) {
      (**(code **)*local_b0)(local_b0,0);
      FUN_1446efa72(&local_b0,0,0,0x10);
      uStack_a8 = uStack_a8 & 0xffffffff00000000;
      goto LAB_1412716ff;
    }
    if ((int)uStack_78 != 0) {
      if (local_80 == (undefined8 *)0x0) goto LAB_14127172f;
      (**(code **)*local_80)(local_80,0);
      FUN_1446efa72(&local_80,0,0,0x10);
      uStack_78 = uStack_78 & 0xffffffff00000000;
    }
    if (local_80 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14127172f:
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
LAB_141271739:
  if ((local_40 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412719b8 FUN_1412719b8 body=3077 status=ok
// SIG undefined FUN_1412719b8(void)

void FUN_1412719b8(longlong *param_1)

{
  longlong *plVar1;
  code **ppcVar2;
  int *piVar3;
  float fVar4;
  uint uVar5;
  undefined4 uVar6;
  code **ppcVar7;
  char cVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined7 uVar13;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  code *pcVar11;
  longlong *plVar12;
  ulonglong uVar14;
  longlong *plVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_458 [32];
  undefined1 *local_438;
  code *local_430;
  code **local_428;
  longlong local_418;
  longlong *local_410;
  undefined8 local_408;
  undefined1 local_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined1 local_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  longlong local_3b8;
  longlong lStack_3b0;
  undefined1 local_3a8;
  undefined8 *local_3a0;
  ulonglong uStack_398;
  undefined1 local_388;
  undefined1 local_387;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined1 local_369;
  code *local_368;
  undefined4 local_360;
  undefined4 uStack_35c;
  undefined2 local_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined2 local_340;
  undefined8 *local_338;
  ulonglong uStack_330;
  longlong *local_328;
  longlong *local_320;
  undefined8 local_318;
  longlong *local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  longlong local_148;
  longlong *local_140;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 local_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined1 local_90;
  undefined1 local_88 [56];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_458;
  FUN_140760c2c(param_1,&local_328);
  plVar1 = local_328;
  if (local_328 == (longlong *)0x0) goto LAB_141271da2;
  if ((*(byte *)((longlong)param_1 + 0xd9) & 8) != 0) {
    local_318._0_5_ = CONCAT14(1,(uint)*(byte *)((longlong)param_1 + 0xda));
    local_310 = (longlong *)CONCAT71(local_310._1_7_,1);
    uStack_308 = 0;
    local_300 = 0;
    FUN_140a5f03c(local_328,&local_318);
    FUN_1449db362(&uStack_308);
  }
  if ((param_1[8] == 0) || (*(int *)((longlong)param_1 + 0x3c) == 0)) {
LAB_141271a7c:
    local_340 = CONCAT11(1,*(byte *)((longlong)param_1 + 0xd9) >> 2 & 1);
    local_338 = (undefined8 *)0x0;
    uStack_330 = 0;
  }
  else {
    uVar5 = *(uint *)(param_1 + 7);
    if (((int)uVar5 < 0) || (DAT_14c9647dc <= (int)uVar5)) goto LAB_141271a7c;
    plVar15 = (longlong *)
              ((ulonglong)((uVar5 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
    if ((((plVar15 == (longlong *)0x0) || ((int)plVar15[2] != *(int *)((longlong)param_1 + 0x3c)))
        || ((*(uint *)(plVar15 + 1) & 0x10200000) != 0)) || (*plVar15 == 0)) goto LAB_141271a7c;
    lVar9 = FUN_1400796d0(*(undefined8 *)(*plVar15 + 0x10),param_1[8],1);
    if (lVar9 == 0) goto LAB_141271a7c;
    local_318 = (code *)param_1[8];
    uVar10 = FUN_14479d2ce(param_1 + 7);
    local_340 = 0x100;
    local_338 = (undefined8 *)0x0;
    uStack_330 = 0;
    FUN_1446efa72(&local_338,0,3,0x10);
    uStack_330 = CONCAT44(uStack_330._4_4_,3);
    FUN_1477829d6(local_338,uVar10,&local_318);
  }
  uVar16 = FUN_140a52028((longlong)plVar1 + 0x3a,plVar1,&local_340);
  if ((int)uStack_330 == 0) {
LAB_141271ac2:
    if (local_338 != (undefined8 *)0x0) {
      uVar16 = FUN_1400020a8();
    }
  }
  else if (local_338 != (undefined8 *)0x0) {
    (**(code **)*local_338)(local_338,0);
    uVar16 = FUN_1446efa72(&local_338,0,0,0x10);
    uStack_330 = uStack_330 & 0xffffffff00000000;
    goto LAB_141271ac2;
  }
  if ((param_1[0x11] == 0) || (*(int *)((longlong)param_1 + 0x84) == 0)) {
LAB_141271b4b:
    local_388 = *(undefined1 *)((longlong)param_1 + 0xdc);
    local_387 = 1;
    local_380 = 0;
    uStack_378 = 0;
    FUN_1412725be(uVar16,&local_369);
    local_358 = CONCAT11(1,local_369);
    local_350 = 0;
    uStack_348 = 0;
    uVar10 = (**(code **)(*plVar1 + 0x1c0))(plVar1);
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x10);
    if (((int)uVar5 < 0) || (DAT_14c9647dc <= (int)uVar5)) goto LAB_141271b4b;
    plVar15 = (longlong *)
              ((ulonglong)((uVar5 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
    if ((((plVar15 == (longlong *)0x0) || ((int)plVar15[2] != *(int *)((longlong)param_1 + 0x84)))
        || ((*(uint *)(plVar15 + 1) & 0x10200000) != 0)) || (*plVar15 == 0)) goto LAB_141271b4b;
    lVar9 = FUN_1400796d0(*(undefined8 *)(*plVar15 + 0x10),param_1[0x11],1);
    uVar16 = extraout_XMM0_Da;
    if (lVar9 == 0) goto LAB_141271b4b;
    local_418 = param_1[0x11];
    uVar10 = FUN_14479d2ce(param_1 + 0x10);
    local_318 = (code *)CONCAT62(local_318._2_6_,0x100);
    local_310 = (longlong *)0x0;
    uStack_308 = 0;
    FUN_1446efa72(&local_310,0,3,0x10);
    uStack_308 = CONCAT44(uStack_308._4_4_,3);
    FUN_147782d3e(local_310,uVar10,&local_418);
    local_368 = FUN_1412725be;
    local_360 = 0;
    FUN_14775e8e6(&local_430,param_1,&local_368,&local_318);
    local_358 = 0x119;
    local_350 = 0;
    uStack_348 = (ulonglong)uStack_348._4_4_ << 0x20;
    FUN_140fe25fc(&local_350,&local_430);
    (**(code **)(*plVar1 + 0x1c0))(plVar1,&local_358);
    FUN_1449db362(&local_430);
    uVar10 = FUN_1449db362(&local_310);
  }
  uVar13 = (undefined7)((ulonglong)uVar10 >> 8);
  if (*(char *)((longlong)plVar1 + 0x35) != *(char *)((longlong)param_1 + 0xdb)) {
    *(char *)((longlong)plVar1 + 0x35) = *(char *)((longlong)param_1 + 0xdb);
    (**(code **)(*plVar1 + 0x228))(plVar1);
    FUN_140163244(plVar1,1);
    uVar13 = extraout_var;
  }
  if (*(char *)((longlong)plVar1 + 0x36) != *(char *)((longlong)param_1 + 0xdd)) {
    *(char *)((longlong)plVar1 + 0x36) = *(char *)((longlong)param_1 + 0xdd);
    FUN_140163244(plVar1,2);
    uVar13 = extraout_var_00;
  }
  if (*(char *)((longlong)plVar1 + 0x37) != (char)param_1[0x1b]) {
    *(char *)((longlong)plVar1 + 0x37) = (char)param_1[0x1b];
    FUN_140163244(plVar1,2);
    uVar13 = extraout_var_01;
  }
  uVar14 = CONCAT71(uVar13,*(byte *)((longlong)param_1 + 0xd9)) & 0xffffff10;
  if (((*(byte *)(plVar1 + 6) & 0x10) == 0) == (bool)((byte)uVar14 >> 4)) {
    *(byte *)(plVar1 + 6) =
         *(byte *)(plVar1 + 6) & 0xef | *(byte *)((longlong)param_1 + 0xd9) & 0x10;
    FUN_140163244(plVar1,CONCAT71((int7)(uVar14 >> 8),6));
  }
  fVar4 = *(float *)(param_1 + 0x1c);
  if ((*(float *)((longlong)plVar1 + 0x1ac) != fVar4) ||
     (NAN(*(float *)((longlong)plVar1 + 0x1ac)) || NAN(fVar4))) {
    *(float *)((longlong)plVar1 + 0x1ac) = fVar4;
    FUN_140163244(plVar1,2);
  }
  FUN_141272672(param_1);
  local_3b8 = param_1[0x19];
  lStack_3b0 = param_1[0x1a];
  local_3a8 = 1;
  local_3a0 = (undefined8 *)0x0;
  uStack_398 = 0;
  FUN_140a51d16(plVar1 + 0x2e,plVar1,&local_3b8);
  if ((int)uStack_398 == 0) {
LAB_141271c48:
    if (local_3a0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_3a0 != (undefined8 *)0x0) {
    (**(code **)*local_3a0)(local_3a0,0);
    FUN_1446efa72(&local_3a0,0,0,0x10);
    uStack_398 = uStack_398 & 0xffffffff00000000;
    goto LAB_141271c48;
  }
  if ((((param_1[0xf] == 0) || (*(int *)((longlong)param_1 + 0x74) == 0)) ||
      (uVar5 = *(uint *)(param_1 + 0xe), (int)uVar5 < 0)) || (DAT_14c9647dc <= (int)uVar5)) {
LAB_141271cc5:
    if (param_1[0xd] == 0) {
      plVar15 = (longlong *)param_1[0xb];
      if (*(code **)(*plVar15 + 0x50) != FUN_144828418) {
        plVar15 = (longlong *)(**(code **)(*plVar15 + 0x50))();
      }
      FUN_1447a1fc0(plVar15);
      plVar15 = (longlong *)param_1[0xb];
      pcVar11 = *(code **)(*plVar15 + 0x28);
      if (pcVar11 == FUN_14482841c) {
        plVar12 = plVar15 + 3;
        if (plVar15[5] != 0) {
          plVar12 = (longlong *)(plVar15[5] + 8);
        }
      }
      else if (pcVar11 == (code *)&LAB_14010c34c) {
        plVar12 = plVar15 + 2;
      }
      else {
        plVar12 = (longlong *)(*pcVar11)(plVar15);
      }
      if ((int)plVar12[1] < 2) {
        if (((param_1[10] != 0) && (*(int *)((longlong)param_1 + 0x4c) != 0)) &&
           ((uVar5 = *(uint *)(param_1 + 9), -1 < (int)uVar5 && ((int)uVar5 < DAT_14c9647dc)))) {
          plVar15 = (longlong *)
                    ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
          if ((((plVar15 != (longlong *)0x0) &&
               ((int)plVar15[2] == *(int *)((longlong)param_1 + 0x4c))) &&
              ((*(uint *)(plVar15 + 1) & 0x10200000) == 0)) && (*plVar15 != 0)) {
            lVar9 = FUN_1400796d0(*(undefined8 *)(*plVar15 + 0x10),param_1[10],1);
            if (lVar9 != 0) goto LAB_141271ea0;
          }
        }
      }
      else {
LAB_141271ea0:
        cVar8 = FUN_14113f0c0(param_1 + 9);
        if (cVar8 == '\0') {
          local_318 = (code *)param_1[0xb];
          if (local_318 != (code *)0x0) {
            (**(code **)(*(longlong *)local_318 + 8))();
          }
          local_310 = (longlong *)CONCAT44(local_310._4_4_,(int)param_1[0xc]);
          uStack_308 = CONCAT71(uStack_308._1_7_,1);
          local_300 = 0;
          uStack_2f8 = 0;
        }
        else {
          local_430 = (code *)param_1[10];
          uVar10 = FUN_14479d2ce(param_1 + 9);
          FUN_144a5dc74(&local_318);
          local_300 = 0;
          uStack_2f8 = 0;
          uStack_308 = CONCAT71(uStack_308._1_7_,1);
          FUN_1446efa72(&local_300,0,3,0x10);
          uStack_2f8 = CONCAT44(uStack_2f8._4_4_,3);
          FUN_147766644(local_300,uVar10,&local_430);
        }
        FUN_145766e8e(plVar1,&local_318);
        FUN_1449db362(&local_300);
        if (local_318 != (code *)0x0) {
          (**(code **)(*(longlong *)local_318 + 0x10))();
        }
      }
    }
    else {
      FUN_145c895fc(&local_318);
      local_3e8 = 0;
      uStack_3e0 = 0;
      local_3d8 = 1;
      local_3d0 = 0;
      uStack_3c8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_b0 = 1;
      FUN_144a450dc(local_a8,&local_3d0);
      FUN_1449db362(&local_3d0);
      local_408 = 0;
      local_400 = 1;
      local_3f8 = 0;
      uStack_3f0 = 0;
      local_98 = 0;
      local_90 = 1;
      FUN_144a450dc(local_88,&local_3f8);
      FUN_1449db362(&local_3f8);
      local_428 = &local_368;
      local_430 = FUN_143336ee2;
      FUN_1407616b4(param_1[0xd],&local_418);
      plVar1 = local_140;
      if (local_410 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_410 + 1) = (int)local_410[1] + 1;
        UNLOCK();
      }
      local_148 = local_418;
      local_140 = local_410;
      if (plVar1 != (longlong *)0x0) {
        LOCK();
        plVar15 = plVar1 + 1;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)*plVar15 == 0) {
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
      local_438 = &local_369;
      FUN_145c892fc(&local_430,"SToolTip",".\\Runtime/UMG/Private/Components/Widget.cpp",0x5b5);
      FUN_145c89054(&local_430,&local_368,&local_318);
      ppcVar7 = local_428;
      if (local_428 != (code **)0x0) {
        LOCK();
        ppcVar2 = local_428 + 1;
        *(int *)ppcVar2 = *(int *)ppcVar2 + -1;
        UNLOCK();
        if (*(int *)ppcVar2 == 0) {
          (**(code **)*local_428)(local_428);
          LOCK();
          piVar3 = (int *)((longlong)ppcVar7 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*ppcVar7 + 0x10))(ppcVar7);
          }
        }
      }
      if (local_410 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_410 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_410)(local_410);
          LOCK();
          piVar3 = (int *)((longlong)local_410 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*local_410 + 0x10))(local_410);
          }
        }
      }
      FUN_145c890ca(&local_318);
      local_318 = local_368 + 0x268;
      if (local_368 == (code *)0x0) {
        local_318 = (code *)0x0;
      }
      local_310 = (longlong *)CONCAT44(uStack_35c,local_360);
      if (local_310 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_310 + 1) = (int)local_310[1] + 1;
        UNLOCK();
      }
      uStack_308 = CONCAT71(uStack_308._1_7_,1);
      local_300 = 0;
      uStack_2f8 = 0;
      FUN_14697d4de(local_328,&local_318);
      FUN_14576702a(&local_318);
      plVar15 = (longlong *)CONCAT44(uStack_35c,local_360);
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar15 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar3 = (int *)((longlong)plVar15 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            lVar9 = *plVar15;
            goto LAB_1412721d8;
          }
        }
      }
    }
  }
  else {
    plVar15 = (longlong *)
              ((ulonglong)((uVar5 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
    if (((plVar15 == (longlong *)0x0) || ((int)plVar15[2] != *(int *)((longlong)param_1 + 0x74))) ||
       (((*(uint *)(plVar15 + 1) & 0x10200000) != 0 || (*plVar15 == 0)))) goto LAB_141271cc5;
    lVar9 = FUN_1400796d0(*(undefined8 *)(*plVar15 + 0x10),param_1[0xf],1);
    if (lVar9 == 0) goto LAB_141271cc5;
    pcVar11 = (code *)FUN_14001cc68(0x28,0x10);
    *(undefined ***)pcVar11 = &PTR_FUN_14a53fca0;
    *(longlong *)(pcVar11 + 0x18) = 0;
    *(longlong *)(pcVar11 + 0x20) = 0;
    plVar15 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar15[1] = (longlong)&DAT_100000001;
    *plVar15 = (longlong)&PTR_FUN_14a544720;
    plVar15[2] = (longlong)pcVar11;
    uVar16 = *(undefined4 *)((longlong)param_1 + 0x74);
    lVar9 = param_1[0xf];
    uVar6 = *(undefined4 *)((longlong)param_1 + 0x7c);
    *(int *)(pcVar11 + 8) = (int)param_1[0xe];
    *(undefined4 *)(pcVar11 + 0xc) = uVar16;
    *(int *)(pcVar11 + 0x10) = (int)lVar9;
    *(undefined4 *)(pcVar11 + 0x14) = uVar6;
    local_318 = pcVar11;
    local_310 = plVar15;
    if (plVar15 == (longlong *)0x0) {
      uStack_308 = CONCAT71(uStack_308._1_7_,1);
      local_300 = 0;
      uStack_2f8 = 0;
      FUN_14697d4de(plVar1,&local_318);
      FUN_14576702a(&local_318);
    }
    else {
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
      uStack_308 = CONCAT71(uStack_308._1_7_,1);
      local_300 = 0;
      uStack_2f8 = 0;
      FUN_14697d4de(plVar1,&local_318);
      FUN_14576702a(&local_318);
      LOCK();
      plVar1 = plVar15 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 != 0) goto LAB_141271d94;
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar3 = (int *)((longlong)plVar15 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 != 0) goto LAB_141271d94;
      lVar9 = *plVar15;
LAB_1412721d8:
      (**(code **)(lVar9 + 0x10))(plVar15);
    }
  }
LAB_141271d94:
  if (param_1[0x1d] != 0) {
    (**(code **)(*param_1 + 0x2f8))(param_1,&local_430);
    pcVar11 = local_430;
    if (local_430 != (code *)0x0) {
      FUN_14775e9c2(param_1[0x1d],&local_318);
      FUN_141338120(pcVar11,*(undefined1 *)(param_1[0x1d] + 0x29),&local_318,0);
      FUN_1449db362(&local_300);
      if (local_318 != (code *)0x0) {
        (**(code **)(*(longlong *)local_318 + 0x10))();
      }
      pcVar11 = local_430;
      FUN_14775ea9a(param_1[0x1d],&local_318);
      FUN_141338120(pcVar11,*(undefined1 *)(param_1[0x1d] + 0x2a),&local_318,1);
      FUN_1449db362(&local_300);
      if (local_318 != (code *)0x0) {
        (**(code **)(*(longlong *)local_318 + 0x10))();
      }
      FUN_14697f64a(local_430,*(undefined1 *)(param_1[0x1d] + 0x28));
    }
    ppcVar7 = local_428;
    if (local_428 != (code **)0x0) {
      LOCK();
      ppcVar2 = local_428 + 1;
      *(int *)ppcVar2 = *(int *)ppcVar2 + -1;
      UNLOCK();
      if (*(int *)ppcVar2 == 0) {
        (**(code **)*local_428)(local_428);
        LOCK();
        piVar3 = (int *)((longlong)ppcVar7 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*ppcVar7 + 0x10))(ppcVar7);
        }
      }
    }
  }
LAB_141271da2:
  if (local_320 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_320 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_320)(local_320);
      LOCK();
      piVar3 = (int *)((longlong)local_320 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_320 + 0x10))(local_320);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_458) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412725be FUN_1412725be body=180 status=ok
// SIG undefined FUN_1412725be(void)

undefined1 * FUN_1412725be(undefined8 param_1,undefined1 *param_2,char *param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  
  plVar1 = (longlong *)(param_3 + 8);
  if (((*(int *)(param_3 + 0x10) == 0) || ((longlong *)*plVar1 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*(longlong *)*plVar1 + 0x30))(), cVar2 == '\0')) {
    cVar2 = *param_3;
  }
  else {
    if (*(int *)(param_3 + 0x10) == 0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = (longlong *)*plVar1;
    }
    cVar2 = (**(code **)(*plVar5 + 0x58))();
    *param_3 = cVar2;
  }
  if ((byte)(cVar2 - 1U) < 4) {
    puVar3 = (&PTR_DAT_14a545290)[(byte)(cVar2 - 1U)];
  }
  else {
    puVar3 = &DAT_14c96b238;
  }
  *param_2 = *puVar3;
  puVar4 = *(undefined8 **)(param_3 + 8);
  if (*(int *)(param_3 + 0x10) != 0) {
    if (puVar4 == (undefined8 *)0x0) {
      return param_2;
    }
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    param_3[0x10] = '\0';
    param_3[0x11] = '\0';
    param_3[0x12] = '\0';
    param_3[0x13] = '\0';
    puVar4 = *(undefined8 **)(param_3 + 8);
  }
  if (puVar4 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  return param_2;
}



// FUNCTION 141272672 FUN_141272672 body=1009 status=ok
// SIG undefined FUN_141272672(void)

void FUN_141272672(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  char *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_108 [32];
  longlong local_e8;
  longlong *local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  char local_b8 [8];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0 [24];
  char local_88 [4];
  undefined1 local_84;
  undefined8 *local_80;
  ulonglong uStack_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_140760c2c(param_1,&local_e8);
  if (local_e8 == 0) goto LAB_141272802;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab9110) {
    FUN_144b3d300(&DAT_14cab9110);
    if (DAT_14cab9110 == -1) {
      DAT_14cab90d8._0_4_ = (undefined4)DAT_14c8463f0;
      DAT_14cab90d8._4_4_ = DAT_14c8463f0._4_4_;
      DAT_14cab90e0._0_4_ = (undefined4)DAT_14c8463f8;
      DAT_14cab90e0._4_4_ = DAT_14c8463f8._4_4_;
      DAT_14cab90e8._0_4_ = (undefined4)DAT_14c846320;
      DAT_14cab90e8._4_4_ = DAT_14c846320._4_4_;
      DAT_14cab90f0._0_4_ = (undefined4)DAT_14c846328;
      DAT_14cab90f0._4_4_ = DAT_14c846328._4_4_;
      DAT_14cab90f8._0_4_ = (undefined4)DAT_14c8463f0;
      DAT_14cab90f8._4_4_ = DAT_14c8463f0._4_4_;
      DAT_14cab9100._0_4_ = (undefined4)DAT_14c8463f8;
      DAT_14cab9100._4_4_ = DAT_14c8463f8._4_4_;
      DAT_14cab9108 = 0.0;
      _Init_thread_footer(&DAT_14cab9110);
    }
  }
  if ((((((double)CONCAT44(DAT_14cab90e8._4_4_,(undefined4)DAT_14cab90e8) !=
          *(double *)(param_1 + 0xa0)) ||
        (NAN((double)CONCAT44(DAT_14cab90e8._4_4_,(undefined4)DAT_14cab90e8)) ||
         NAN(*(double *)(param_1 + 0xa0)))) ||
       ((double)CONCAT44(DAT_14cab90f0._4_4_,(undefined4)DAT_14cab90f0) !=
        *(double *)(param_1 + 0xa8))) ||
      ((((NAN((double)CONCAT44(DAT_14cab90f0._4_4_,(undefined4)DAT_14cab90f0)) ||
          NAN(*(double *)(param_1 + 0xa8)) ||
         ((double)CONCAT44(DAT_14cab90f8._4_4_,(undefined4)DAT_14cab90f8) !=
          *(double *)(param_1 + 0xb0))) ||
        ((NAN((double)CONCAT44(DAT_14cab90f8._4_4_,(undefined4)DAT_14cab90f8)) ||
          NAN(*(double *)(param_1 + 0xb0)) ||
         (((double)CONCAT44(DAT_14cab9100._4_4_,(undefined4)DAT_14cab9100) !=
           *(double *)(param_1 + 0xb8) ||
          (NAN((double)CONCAT44(DAT_14cab9100._4_4_,(undefined4)DAT_14cab9100)) ||
           NAN(*(double *)(param_1 + 0xb8)))))))) || (DAT_14cab9108 != *(float *)(param_1 + 0xc0))))
      ) || ((((NAN(DAT_14cab9108) || NAN(*(float *)(param_1 + 0xc0)) ||
              ((double)CONCAT44(DAT_14cab90d8._4_4_,(undefined4)DAT_14cab90d8) !=
               *(double *)(param_1 + 0x90))) ||
             (NAN((double)CONCAT44(DAT_14cab90d8._4_4_,(undefined4)DAT_14cab90d8)) ||
              NAN(*(double *)(param_1 + 0x90)))) ||
            (((double)CONCAT44(DAT_14cab90e0._4_4_,(undefined4)DAT_14cab90e0) !=
              *(double *)(param_1 + 0x98) ||
             (NAN((double)CONCAT44(DAT_14cab90e0._4_4_,(undefined4)DAT_14cab90e0)) ||
              NAN(*(double *)(param_1 + 0x98)))))))) {
    fVar11 = *(float *)(param_1 + 0xc0) * 0.017453292;
    dVar3 = *(double *)(param_1 + 0x98);
    dVar4 = *(double *)(param_1 + 0x90);
    fVar6 = sinf(fVar11);
    fVar11 = cosf(fVar11);
    FUN_1477645a6(&local_d8,param_1 + 0xb0);
    fVar10 = local_d4 * 0.0 + (float)*(double *)(param_1 + 0xa8);
    fVar7 = (float)*(double *)(param_1 + 0xa8) * local_d8 + 0.0;
    fVar9 = (float)*(double *)(param_1 + 0xa0) * local_d4 + 0.0;
    fVar8 = local_d8 * 0.0 + (float)*(double *)(param_1 + 0xa0);
    local_c4 = fVar7 * fVar6 + fVar11 * fVar10;
    local_c8 = fVar7 * fVar11 - fVar10 * fVar6;
    local_cc = fVar8 * fVar6 + fVar11 * fVar9;
    local_d0 = fVar8 * fVar11 - fVar9 * fVar6;
    local_b8[0] = '\x01';
    local_b8[4] = 1;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = (float)dVar4;
    local_bc = (float)dVar3;
    FUN_140a521e6(local_e8 + 0x180,local_e8,&local_d0);
    FUN_1449db362(&local_b0);
    if (local_b8[0] != '\x01') goto LAB_141272802;
    pcVar5 = local_b8;
  }
  else {
    local_88[0] = '\0';
    local_84 = 1;
    local_80 = (undefined8 *)0x0;
    uStack_78 = 0;
    FUN_140a521e6(local_e8 + 0x180,local_e8,local_a0);
    if ((int)uStack_78 == 0) {
LAB_1412727e3:
      if (local_80 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_80 != (undefined8 *)0x0) {
      (**(code **)*local_80)(local_80,0);
      FUN_1446efa72(&local_80,0,0,0x10);
      uStack_78 = uStack_78 & 0xffffffff00000000;
      goto LAB_1412727e3;
    }
    if (local_88[0] == '\0') goto LAB_141272802;
    pcVar5 = local_88;
  }
  *pcVar5 = '\0';
LAB_141272802:
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
  if ((local_70 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141272a6c FUN_141272a6c body=731 status=ok
// SIG undefined FUN_141272a6c(void)

undefined8 FUN_141272a6c(uint *param_1,longlong *param_2)

{
  int *piVar1;
  uint uVar2;
  ulonglong *puVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  bool bVar13;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    plVar10 = *(longlong **)(param_1 + 4);
    if (plVar10 == (longlong *)0x0) {
LAB_141272c9d:
      local_2c = -1;
      param_1[0] = 0;
      param_1[1] = 0;
    }
    else {
      iVar7 = (int)plVar10[1];
      do {
        if (iVar7 == 0) goto LAB_141272c9d;
        LOCK();
        iVar6 = (int)plVar10[1];
        bVar13 = iVar7 == iVar6;
        if (bVar13) {
          *(int *)(plVar10 + 1) = iVar7 + 1;
          iVar6 = iVar7;
        }
        iVar7 = iVar6;
        UNLOCK();
      } while (!bVar13);
      lVar8 = *(longlong *)(param_1 + 2);
      LOCK();
      plVar4 = plVar10 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
      if ((lVar8 == 0) || (lVar11 = *(longlong *)(lVar8 + 8), lVar11 == 0)) goto LAB_141272c9d;
      local_2c = *(int *)(lVar8 + 0x18);
      if (*(longlong *)(lVar11 + 0x10) == 0) {
LAB_141272d41:
        lVar11 = 0;
      }
      else {
        lVar9 = FUN_144a7ef38();
        lVar8 = *(longlong *)(lVar11 + 0x10);
        if (lVar8 == 0) goto LAB_141272d41;
        lVar11 = 0;
        if ((lVar9 != 0) && (lVar5 = *(longlong *)(lVar8 + 0x10), lVar5 != 0)) {
          if (*(int *)(lVar5 + 0x38) < *(int *)(lVar9 + 0x38)) goto LAB_141272d41;
          lVar11 = 0;
          if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
              lVar9 + 0x30) {
            lVar11 = lVar8;
          }
        }
      }
      FUN_14485c47a(param_1,lVar11);
    }
    (**(code **)(*param_2 + 0x120))(param_2,param_1);
    puVar3 = (ulonglong *)param_2[1];
    if (puVar3[1] < *puVar3 + 4) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_2c);
      }
    }
    else {
      *puVar3 = *puVar3 + 4;
    }
    goto LAB_141272b79;
  }
  (**(code **)(*param_2 + 0x120))(param_2,param_1);
  puVar3 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar3;
    *puVar3 = (ulonglong)piVar1;
  }
  if (param_1[1] == 0) {
LAB_141272b9e:
    plVar10 = (longlong *)0x0;
    uVar12 = 0;
  }
  else {
    uVar2 = *param_1;
    plVar10 = (longlong *)0x0;
    if ((int)uVar2 < 0) goto LAB_141272b9e;
    uVar12 = 0;
    if ((int)uVar2 < DAT_14c9647dc) {
      plVar10 = (longlong *)
                ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if (((plVar10 == (longlong *)0x0) || (*(uint *)(plVar10 + 2) != param_1[1])) ||
         ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)) goto LAB_141272b9e;
      if ((*(uint *)(plVar10 + 1) & 0x10200000) == 0) {
        lVar8 = *plVar10;
      }
      else {
        lVar8 = 0;
      }
      lVar8 = *(longlong *)(lVar8 + 0x30);
      if (((longlong)local_2c < 0) || (*(int *)(lVar8 + 0x30) <= local_2c)) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(undefined8 *)(*(longlong *)(lVar8 + 0x28) + (longlong)local_2c * 8);
      }
      plVar10 = *(longlong **)(lVar8 + 0xa0);
      if (plVar10 == (longlong *)0x0) {
        plVar10 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
        UNLOCK();
        LOCK();
        plVar4 = plVar10 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
  *(undefined8 *)(param_1 + 2) = uVar12;
  plVar4 = *(longlong **)(param_1 + 4);
  *(longlong **)(param_1 + 4) = plVar10;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
LAB_141272b79:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 141272d48 FUN_141272d48 body=228 status=ok
// SIG undefined FUN_141272d48(void)

longlong FUN_141272d48(void)

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
  if (DAT_14cb26c80 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463c9dde;
    local_38 = &LAB_147f8e21b;
    local_40 = &LAB_14644af01;
    local_48 = L"GameUserSettings";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x120;
    FUN_14081cfa3(L"/Script/EnhancedInput",L"EnhancedInputUserSettings",&DAT_14cb26c80,FUN_14644aeda
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb26c80;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141272e2e FUN_141272e2e body=228 status=ok
// SIG undefined FUN_141272e2e(void)

longlong FUN_141272e2e(void)

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
  if (DAT_14cb66d90 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e9e4fe;
    local_38 = &LAB_14872e141;
    local_40 = FUN_1418590c7;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxStatusEffectNotifyEvent",&DAT_14cb66d90,&DAT_14872e140);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb66d90;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141272f14 FUN_141272f14 body=162 status=ok
// SIG undefined FUN_141272f14(void)

void FUN_141272f14(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_141272fa1;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_141272fa1:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 141272fb6 FUN_141272fb6 body=87 status=ok
// SIG undefined FUN_141272fb6(void)

void FUN_141272fb6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_14127300e(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x88) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14127300e FUN_14127300e body=1127 status=ok
// SIG undefined FUN_14127300e(void)

void FUN_14127300e(longlong *param_1,ushort *param_2)

{
  uint *puVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  lVar4 = *param_1;
  uVar2 = *param_2;
  iVar6 = uVar2 + 1;
  iVar3 = *(int *)(lVar4 + 0x20);
  iVar8 = iVar6 - iVar3;
  if (iVar8 != 0 && iVar3 <= iVar6) {
    if (iVar3 == 0) {
LAB_141273059:
      if (*(int *)(lVar4 + 0x24) <= (int)(uint)uVar2) {
        *(undefined4 *)(lVar4 + 0x24) = 0x100;
        FUN_14497ddce(lVar4,iVar3);
        iVar6 = *(int *)(lVar4 + 0x20) + iVar8;
      }
      iVar7 = iVar6 + 0x1f;
      if (-1 < iVar6) {
        iVar7 = iVar6;
      }
      *(int *)(lVar4 + 0x20) = iVar6;
      if (iVar6 % 0x20 != 0) {
        bVar5 = -(char)(iVar6 % 0x20);
        *(uint *)(lVar4 + (longlong)(iVar7 >> 5) * 4) =
             (uint)(*(int *)(lVar4 + (longlong)(iVar7 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    else {
      iVar7 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar7 = iVar3 + -1;
      }
      if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_141273059;
      *(int *)(lVar4 + 0x20) = iVar6;
    }
    FUN_1447c45ca(lVar4,iVar3,iVar8,0);
  }
  puVar1 = (uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  if ((char)param_2[5] == '\x01') {
    lVar4 = *param_1;
    uVar2 = param_2[4];
    iVar6 = uVar2 + 1;
    iVar3 = *(int *)(lVar4 + 0x20);
    iVar8 = iVar6 - iVar3;
    if (iVar8 != 0 && iVar3 <= iVar6) {
      if (iVar3 == 0) {
LAB_1412730ef:
        if (*(int *)(lVar4 + 0x24) <= (int)(uint)uVar2) {
          *(undefined4 *)(lVar4 + 0x24) = 0x100;
          FUN_14497ddce(lVar4,iVar3);
          iVar6 = *(int *)(lVar4 + 0x20) + iVar8;
        }
        iVar7 = iVar6 + 0x1f;
        if (-1 < iVar6) {
          iVar7 = iVar6;
        }
        *(int *)(lVar4 + 0x20) = iVar6;
        if (iVar6 % 0x20 != 0) {
          bVar5 = -(char)(iVar6 % 0x20);
          *(uint *)(lVar4 + (longlong)(iVar7 >> 5) * 4) =
               (uint)(*(int *)(lVar4 + (longlong)(iVar7 >> 5) * 4) << (bVar5 & 0x1f)) >>
               (bVar5 & 0x1f);
        }
      }
      else {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_1412730ef;
        *(int *)(lVar4 + 0x20) = iVar6;
      }
      FUN_1447c45ca(lVar4,iVar3,iVar8,0);
    }
    puVar1 = (uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  }
  if ((char)param_2[0x11] == '\x01') {
    lVar4 = *param_1;
    uVar2 = param_2[0x10];
    iVar6 = uVar2 + 1;
    iVar3 = *(int *)(lVar4 + 0x20);
    iVar8 = iVar6 - iVar3;
    if (iVar8 != 0 && iVar3 <= iVar6) {
      if (iVar3 == 0) {
LAB_141273185:
        if (*(int *)(lVar4 + 0x24) <= (int)(uint)uVar2) {
          *(undefined4 *)(lVar4 + 0x24) = 0x100;
          FUN_14497ddce(lVar4,iVar3);
          iVar6 = *(int *)(lVar4 + 0x20) + iVar8;
        }
        iVar7 = iVar6 + 0x1f;
        if (-1 < iVar6) {
          iVar7 = iVar6;
        }
        *(int *)(lVar4 + 0x20) = iVar6;
        if (iVar6 % 0x20 != 0) {
          bVar5 = -(char)(iVar6 % 0x20);
          *(uint *)(lVar4 + (longlong)(iVar7 >> 5) * 4) =
               (uint)(*(int *)(lVar4 + (longlong)(iVar7 >> 5) * 4) << (bVar5 & 0x1f)) >>
               (bVar5 & 0x1f);
        }
      }
      else {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_141273185;
        *(int *)(lVar4 + 0x20) = iVar6;
      }
      FUN_1447c45ca(lVar4,iVar3,iVar8,0);
    }
    puVar1 = (uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  }
  if ((char)param_2[0x1d] == '\x01') {
    lVar4 = *param_1;
    uVar2 = param_2[0x1c];
    iVar6 = uVar2 + 1;
    iVar3 = *(int *)(lVar4 + 0x20);
    iVar8 = iVar6 - iVar3;
    if (iVar8 != 0 && iVar3 <= iVar6) {
      if (iVar3 == 0) {
LAB_14127321b:
        if (*(int *)(lVar4 + 0x24) <= (int)(uint)uVar2) {
          *(undefined4 *)(lVar4 + 0x24) = 0x100;
          FUN_14497ddce(lVar4,iVar3);
          iVar6 = *(int *)(lVar4 + 0x20) + iVar8;
        }
        iVar7 = iVar6 + 0x1f;
        if (-1 < iVar6) {
          iVar7 = iVar6;
        }
        *(int *)(lVar4 + 0x20) = iVar6;
        if (iVar6 % 0x20 != 0) {
          bVar5 = -(char)(iVar6 % 0x20);
          *(uint *)(lVar4 + (longlong)(iVar7 >> 5) * 4) =
               (uint)(*(int *)(lVar4 + (longlong)(iVar7 >> 5) * 4) << (bVar5 & 0x1f)) >>
               (bVar5 & 0x1f);
        }
      }
      else {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_14127321b;
        *(int *)(lVar4 + 0x20) = iVar6;
      }
      FUN_1447c45ca(lVar4,iVar3,iVar8,0);
    }
    puVar1 = (uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  }
  if ((char)param_2[0x29] == '\x01') {
    lVar4 = *param_1;
    uVar2 = param_2[0x28];
    iVar6 = uVar2 + 1;
    iVar3 = *(int *)(lVar4 + 0x20);
    iVar8 = iVar6 - iVar3;
    if (iVar8 != 0 && iVar3 <= iVar6) {
      if (iVar3 == 0) {
LAB_141273349:
        if (*(int *)(lVar4 + 0x24) <= (int)(uint)uVar2) {
          *(undefined4 *)(lVar4 + 0x24) = 0x100;
          FUN_14497ddce(lVar4,iVar3);
          iVar6 = *(int *)(lVar4 + 0x20) + iVar8;
        }
        iVar7 = iVar6 + 0x1f;
        if (-1 < iVar6) {
          iVar7 = iVar6;
        }
        *(int *)(lVar4 + 0x20) = iVar6;
        if (iVar6 % 0x20 != 0) {
          bVar5 = -(char)(iVar6 % 0x20);
          *(uint *)(lVar4 + (longlong)(iVar7 >> 5) * 4) =
               (uint)(*(int *)(lVar4 + (longlong)(iVar7 >> 5) * 4) << (bVar5 & 0x1f)) >>
               (bVar5 & 0x1f);
        }
      }
      else {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_141273349;
        *(int *)(lVar4 + 0x20) = iVar6;
      }
      FUN_1447c45ca(lVar4,iVar3,iVar8,0);
    }
    puVar1 = (uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  }
  if ((char)param_2[0x35] != '\x01') {
    return;
  }
  lVar4 = *param_1;
  uVar2 = param_2[0x34];
  iVar6 = uVar2 + 1;
  iVar3 = *(int *)(lVar4 + 0x20);
  iVar8 = iVar6 - iVar3;
  if (iVar8 == 0 || iVar6 < iVar3) goto LAB_1412732f7;
  if (iVar3 == 0) {
LAB_1412732b8:
    if (*(int *)(lVar4 + 0x24) <= (int)(uint)uVar2) {
      *(undefined4 *)(lVar4 + 0x24) = 0x100;
      FUN_14497ddce(lVar4,iVar3);
      iVar6 = *(int *)(lVar4 + 0x20) + iVar8;
    }
    iVar7 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(lVar4 + 0x20) = iVar6;
    if (iVar6 % 0x20 != 0) {
      bVar5 = -(char)(iVar6 % 0x20);
      *(uint *)(lVar4 + (longlong)(iVar7 >> 5) * 4) =
           (uint)(*(int *)(lVar4 + (longlong)(iVar7 >> 5) * 4) << (bVar5 & 0x1f)) >> (bVar5 & 0x1f);
    }
  }
  else {
    iVar7 = iVar3 + 0x1e;
    if (-1 < iVar3 + -1) {
      iVar7 = iVar3 + -1;
    }
    if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_1412732b8;
    *(int *)(lVar4 + 0x20) = iVar6;
  }
  FUN_1447c45ca(lVar4,iVar3,iVar8,0);
LAB_1412732f7:
  puVar1 = (uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  return;
}



// FUNCTION 141273478 FUN_141273478 body=121 status=ok
// SIG undefined FUN_141273478(void)

undefined4 FUN_141273478(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  undefined1 *in_R9;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (undefined2 *)0x0;
  uStack_20 = 0;
  uVar2 = FUN_1412734f2();
  if ((char)uVar2 != '\0') {
    puVar3 = local_28;
    if ((int)uStack_20 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    uVar1 = FUN_14052c20c(puVar3);
    *in_R9 = uVar1;
  }
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1412734f2 FUN_1412734f2 body=562 status=ok
// SIG undefined FUN_1412734f2(void)

ulonglong FUN_1412734f2(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  void *_Src;
  undefined2 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140056680(&local_40);
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
  uVar5 = 0;
  iVar3 = local_38 + -1;
  if (local_38 == 0) {
    iVar3 = 0;
  }
  if (0 < iVar3) {
    puVar1 = local_40;
    if (local_38 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    lVar8 = 0;
    uVar5 = 0;
    do {
      uVar6 = ((uint)(0x19 < (ushort)puVar1[lVar8] - 0x61) * 0x20 + (uint)(ushort)puVar1[lVar8]) -
              0x20;
      uVar9 = (uint)(uVar5 >> 8) ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar5 ^ uVar6) & 0xff) * 4);
      uVar5 = (ulonglong)
              (uVar9 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar9 & 0xff ^ uVar6 >> 8 & 0xff) * 4));
      lVar8 = lVar8 + 1;
    } while (iVar3 != (int)lVar8);
  }
  iVar3 = FUN_14052bbf0(param_1,uVar5,&local_40);
  if (iVar3 == -1) {
    lVar8 = 0;
  }
  else {
    lVar8 = (longlong)iVar3 * 0xc0 + *param_1;
  }
  plVar7 = (longlong *)(lVar8 + 0x10);
  if (lVar8 == 0) {
    plVar7 = (longlong *)0x0;
  }
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((plVar7 != (longlong *)0x0) &&
     (FUN_1446f470e(&local_48,param_3,1), (int)plVar7[1] != *(int *)((longlong)plVar7 + 0x34))) {
    uVar6 = (uint)((ulonglong)local_48 >> 0x10);
    uVar9 = (uint)local_48 & 0xffff;
    plVar4 = plVar7 + 7;
    if ((longlong *)plVar7[8] != (longlong *)0x0) {
      plVar4 = (longlong *)plVar7[8];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)plVar7[9] - 1U &
                    (int)((ulonglong)local_48 >> 0x20) + ((uint)local_48 << 0x10 | uVar9) +
                    (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar9 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        lVar8 = *plVar7 + (longlong)iVar3 * 0x40;
        if (*(longlong *)(*plVar7 + (longlong)iVar3 * 0x40) == local_48) {
          if (lVar8 != 0) {
            lVar8 = lVar8 + (ulonglong)(*(int *)(lVar8 + 0x28) - 2U < 0x7fffffff) * 0x10;
            puVar2 = (undefined8 *)(lVar8 + 0x10);
            uVar5 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
            if (puVar2 != param_4) {
              iVar3 = *(int *)(lVar8 + 0x18);
              _Src = (void *)*puVar2;
              *(int *)(param_4 + 1) = iVar3;
              if (iVar3 == 0 && *(int *)((longlong)param_4 + 0xc) == 0) {
                *(undefined4 *)((longlong)param_4 + 0xc) = 0;
              }
              else {
                FUN_1446dd670(param_4,iVar3);
                if (iVar3 != 0) {
                  memcpy((void *)*param_4,_Src,(longlong)iVar3 * 2);
                }
              }
            }
            goto LAB_14127368c;
          }
          break;
        }
        iVar3 = *(int *)(lVar8 + 0x38);
      } while (iVar3 != -1);
    }
  }
  uVar5 = 0;
LAB_14127368c:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 141273730 FUN_141273730 body=714 status=ok
// SIG undefined FUN_141273730(void)

undefined8 * FUN_141273730(undefined8 *param_1)

{
  FUN_14064ffa8();
  *param_1 = &PTR_FUN_14b6e68e0;
  param_1[0x72] = &PTR_FUN_14b6e6f50;
  param_1[0x73] = &PTR_FUN_14b6e6f70;
  param_1[0x74] = &PTR_FUN_14b6e6fa0;
  param_1[0x75] = &PTR_FUN_14b6e6fb0;
  param_1[0x76] = &PTR_FUN_14b6e7020;
  param_1[0x77] = &PTR_FUN_14b6e7050;
  param_1[0x78] = &PTR_FUN_14b6e7080;
  param_1[0x7f] = &PTR_FUN_14b6e7130;
  param_1[0x80] = &PTR_FUN_14b6e71a0;
  param_1[0x81] = &PTR_FUN_14b6e7210;
  param_1[0x82] = &PTR_FUN_14b6e7240;
  param_1[0x83] = &PTR_FUN_14b6e7280;
  param_1[0x84] = &PTR_FUN_14b6e7320;
  param_1[0x85] = &PTR_FUN_14b6e7340;
  param_1[0x89] = &PTR_FUN_14b6e7360;
  param_1[0x8a] = &PTR_FUN_14b6e7420;
  param_1[0x8b] = &PTR_FUN_14b6e74a0;
  param_1[0x8c] = &PTR_FUN_14b6e74f0;
  param_1[0x8d] = &PTR_FUN_14b6e7530;
  param_1[0x8e] = &PTR_FUN_14b6e7550;
  param_1[0x8f] = &PTR_FUN_14b6e7570;
  param_1[0x90] = &PTR_FUN_14b6e7590;
  param_1[0x91] = &PTR_FUN_14b6e75b0;
  param_1[0x92] = &PTR_FUN_14b6e75d0;
  param_1[0x93] = &PTR_FUN_14b6e75f0;
  param_1[0x94] = &PTR_FUN_14b6e7610;
  param_1[0x95] = &PTR_FUN_14b6e7630;
  param_1[0x96] = &PTR_FUN_14b6e7650;
  param_1[0x34b] = &PTR_FUN_14b6e7670;
  param_1[0x352] = &PTR_FUN_14b6e7680;
  param_1[0x353] = &PTR_FUN_14b6e76c0;
  param_1[0x354] = &PTR_FUN_14b6e7700;
  param_1[0x355] = &PTR_FUN_14b6e7750;
  param_1[0x356] = &PTR_FUN_14b6e7780;
  param_1[0x359] = &PTR_FUN_14b6e77c0;
  param_1[0x35a] = &PTR_FUN_14b6e77d0;
  param_1[0x35b] = &PTR_FUN_14b6e7800;
  param_1[0x35c] = &PTR_FUN_14b6e78a0;
  param_1[0x4c6] = 0;
  *(undefined4 *)(param_1 + 0x4c7) = 0;
  *(undefined4 *)(param_1 + 0x4bf) = 0;
  *(undefined1 *)((longlong)param_1 + 0x25fc) = 0;
  param_1[0x4c2] = 0;
  param_1[0x4c3] = 0;
  param_1[0x4c0] = 0;
  param_1[0x4c1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x263c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2644) = 0;
  param_1[0x4ca] = 0;
  *(undefined4 *)(param_1 + 0x4cb) = 0;
  param_1[0x4cc] = 0;
  *(undefined2 *)(param_1 + 0x4cd) = 0;
  param_1[0x4d4] = 0;
  *(undefined4 *)(param_1 + 0x4d5) = 0;
  param_1[0x4ce] = 0;
  param_1[0x4cf] = 0;
  param_1[0x4d0] = 0;
  param_1[0x4d1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x26ac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x26b4) = 0;
  param_1[0x4d8] = 0;
  *(undefined4 *)(param_1 + 0x4d9) = 0;
  return param_1;
}



// FUNCTION 1412739fa FUN_1412739fa body=236 status=ok
// SIG undefined FUN_1412739fa(void)

void FUN_1412739fa(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0x34002;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  param_1[0x68] = 0;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb9) = 0;
  *(undefined8 *)(param_1 + 0xc1) = 0;
  *(undefined8 *)(param_1 + 0xcc) = 0;
  *(undefined8 *)(param_1 + 0xd4) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined2 *)(param_1 + 0x108) = 0xffff;
  *(undefined8 *)(param_1 + 0x10c) = 0xbf800000;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0x3002;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0x200000000;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0x4fc71eb4;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x1a0) = 0x3f800000;
  return;
}



// FUNCTION 141273ae6 FUN_141273ae6 body=1649 status=ok
// SIG undefined FUN_141273ae6(void)

void FUN_141273ae6(undefined8 param_1,longlong param_2,longlong *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  longlong local_58;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_1468d96f0;
      local_70 = 0;
      local_78 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_28 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_28);
    }
  }
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_1468d96f0;
      local_70 = 0;
      local_78 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
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
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_1409e12a0;
      local_70 = 0;
      local_78 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_38 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_38);
    }
  }
  local_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_1409e12a0;
      local_70 = 0;
      local_78 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_40);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_40);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_40 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_40);
    }
  }
  uVar4 = local_38;
  uVar2 = local_40;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_30;
  if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_78 = uVar2;
  FUN_141274158(&local_50,local_28,&local_58,uVar4);
  if (&local_50 == param_3) {
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_50;
    *(undefined4 *)(param_3 + 1) = local_48;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_44;
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141274158 FUN_141274158 body=953 status=ok
// SIG undefined FUN_141274158(void)

undefined8 * FUN_141274158(undefined8 *param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  code *local_98;
  code *local_90;
  code *local_80;
  longlong *local_78;
  undefined8 *local_70;
  code *local_68;
  code **local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *param_1 = 0;
  param_1[1] = 0;
  lVar5 = *param_3;
  local_50 = param_4;
  if (lVar5 == 0) {
LAB_1412741cb:
    local_58 = 0;
LAB_1412741d7:
    if (param_2 == (longlong *)0x0 || param_4 == 0) goto LAB_141274425;
  }
  else {
    if (DAT_14cac7648 == 0) {
      local_a0 = &local_80;
      local_80 = FUN_144a7958c;
      local_90 = FUN_14081d0ea;
      local_98 = FUN_143242436;
      local_a8 = &LAB_14789ef1f;
      local_b0 = &LAB_1417b008f;
      local_b8 = L"Engine";
      local_c0 = 0x8000000000;
      local_c8 = 0x10000004;
      local_d0 = 0x10;
      local_d8 = 0x2b0;
      FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
      if (DAT_14cac7648 == 0) goto LAB_1412741cb;
    }
    if ((*(int *)(lVar5 + 0x38) < *(int *)(DAT_14cac7648 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(DAT_14cac7648 + 0x38) * 8) !=
        DAT_14cac7648 + 0x30)) goto LAB_1412741cb;
    local_58 = *param_3;
    if (local_58 == 0) goto LAB_1412741d7;
    if (param_2 == (longlong *)0x0) goto LAB_141274425;
  }
  uVar2 = FUN_140566488();
  plVar3 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar2);
  if (plVar3 != (longlong *)0x0) {
    uVar2 = FUN_140566488();
    plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
    if ((plVar4 != (longlong *)0x0 && plVar3 != plVar4) &&
       (lVar5 = (**(code **)(*plVar4 + 0x20))(plVar4), lVar5 != 0)) {
      if (param_4 == 0) {
        lVar9 = *(longlong *)(lVar5 + 0x40);
        if (lVar9 != 0) {
          lVar10 = lVar9 + 0x108;
          if (*(longlong *)(lVar9 + 0x188) != 0) {
            lVar10 = *(longlong *)(lVar9 + 0x188);
          }
          iVar1 = *(int *)(lVar9 + 400);
          if ((longlong)iVar1 != 0) {
            lVar9 = 0;
            do {
              lVar7 = *(longlong *)(lVar10 + lVar9);
              lVar6 = FUN_143d57208(lVar7 + 0x40);
              if ((((lVar6 != 0) && (local_58 != 0)) &&
                  (*(int *)(local_58 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
                 (*(longlong *)
                   (*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(local_58 + 0x38) * 8) ==
                  local_58 + 0x30)) {
                iVar8 = *(int *)(lVar7 + 0x18);
                if (((-1 < (longlong)iVar8) && (iVar8 < *(int *)(lVar5 + 0x78))) &&
                   (plVar3 = *(longlong **)(*(longlong *)(lVar5 + 0x70) + (longlong)iVar8 * 8),
                   plVar3 != (longlong *)0x0)) {
                  lVar7 = (**(code **)(*plVar3 + 8))(plVar3);
                  lVar6 = FUN_1400653da();
                  if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
                     (*(longlong *)
                       (*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
                      lVar6 + 0x30)) {
                    iVar8 = (int)plVar3[0x26] + *(int *)(param_1 + 1);
                    if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_1456afac4(iVar8);
                    }
                    if (*(int *)((longlong)param_1 + 0xc) < iVar8) {
                      FUN_140732c36(param_1);
                    }
                    local_80 = (code *)&stack0x00000028;
                    local_78 = &local_58;
                    local_60 = &local_80;
                    local_68 = FUN_143d552c6;
                    local_70 = param_1;
                    FUN_143d574f4(plVar3,&local_68);
                  }
                }
              }
              lVar9 = lVar9 + 8;
            } while ((longlong)iVar1 * 8 != lVar9);
          }
        }
      }
      else {
        lVar5 = FUN_140777470(lVar5,&local_50);
        if (lVar5 != 0) {
          iVar1 = *(int *)(lVar5 + 0x130);
          if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(iVar1);
          }
          if (*(int *)((longlong)param_1 + 0xc) < iVar1) {
            FUN_140732c36(param_1);
          }
          local_80 = (code *)&stack0x00000028;
          local_60 = &local_80;
          local_78 = &local_58;
          local_68 = FUN_143d55238;
          local_70 = param_1;
          FUN_143d574f4(lVar5);
        }
      }
    }
  }
LAB_141274425:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 141274514 FUN_141274514 body=935 status=ok
// SIG undefined FUN_141274514(void)

undefined8 FUN_141274514(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  bool bVar7;
  int iVar8;
  undefined4 uVar9;
  undefined *puVar10;
  undefined8 ****ppppuVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_b8 [40];
  char local_90 [8];
  longlong local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined1 local_70;
  int local_68;
  undefined8 ***local_60 [3];
  ushort local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar4 = *(longlong *)(param_1 + 0x48);
  lVar15 = *(longlong *)(param_1 + 0x40);
  if (lVar15 == 0) {
    lVar13 = 0;
    local_88 = 0;
  }
  else {
    if (*(int *)(lVar15 + 0x4c) == 0) {
LAB_14127470d:
      lVar13 = 0;
    }
    else {
      uVar3 = *(uint *)(lVar15 + 0x48);
      lVar13 = 0;
      if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
        plVar14 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if ((plVar14 == (longlong *)0x0) ||
           (((int)plVar14[2] != *(int *)(lVar15 + 0x4c) ||
            ((*(uint *)(plVar14 + 1) & 0x10200000) != 0)))) goto LAB_14127470d;
        lVar13 = *plVar14;
      }
    }
    plVar14 = *(longlong **)(lVar15 + 0x118);
    local_88 = param_1;
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar14 + 0xc) = *(int *)((longlong)plVar14 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar14 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar2 = (int *)((longlong)plVar14 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
      LOCK();
      *(int *)((longlong)plVar14 + 0xc) = *(int *)((longlong)plVar14 + 0xc) + 1;
      UNLOCK();
      bVar7 = false;
      local_80 = plVar14;
      goto LAB_1412745e8;
    }
  }
  local_80 = (longlong *)0x0;
  bVar7 = true;
LAB_1412745e8:
  plVar14 = local_80;
  local_68 = 0;
  local_90[0] = '\x03';
  local_78._0_4_ = 0;
  if (lVar13 == 0) {
    iVar8 = 0;
    uVar3 = (uint)local_78;
  }
  else {
    uVar3 = *(uint *)(lVar13 + 0xc);
    local_78 = (ulonglong)uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar15 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar15 = 0;
    }
    iVar8 = *(int *)(lVar15 + 0x10);
    if (*(int *)(lVar15 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar12 = DAT_14c964868 + 1;
      bVar16 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar16) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar12);
      }
      LOCK();
      iVar8 = *(int *)(lVar15 + 0x10);
      bVar16 = iVar8 == 0;
      if (bVar16) {
        *(int *)(lVar15 + 0x10) = iVar12;
        iVar8 = 0;
      }
      UNLOCK();
      uVar3 = (uint)local_78;
      if (bVar16) {
        iVar8 = iVar12;
      }
    }
  }
  local_78._0_4_ = uVar3;
  local_78 = CONCAT44(iVar8,(uint)local_78);
  local_70 = 2;
  if (local_68 != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,local_68 + -1,1);
    local_68 = 0;
  }
  if (!bVar7) {
    LOCK();
    piVar2 = (int *)((longlong)plVar14 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
  }
  FUN_1447c3578(lVar4 + 0x98,local_60,local_90);
  uVar9 = FUN_1405d5f74(local_60);
  *(undefined4 *)(param_1 + 0xdc) = uVar9;
  pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
  if (pcVar5 != (code *)0x0) {
    ppppuVar11 = local_60;
    if (0x18 < local_48) {
      ppppuVar11 = (undefined8 ****)local_60[0];
    }
    (*pcVar5)(ppppuVar11);
  }
  if (0x18 < local_48) {
    FUN_1400020a8(local_60[0]);
  }
  lVar4 = DAT_14c9a3da0;
  if ((longlong)local_68 != 0) {
    lVar13 = (longlong)local_68 + -1;
    lVar15 = lVar13 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar15),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar15));
    if (*(longlong *)(lVar4 + lVar15) != 0) {
      FUN_1400020a8();
    }
    lVar4 = DAT_14c9a3da0;
    iVar8 = (int)lVar13;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar8;
    }
    *(undefined4 *)(lVar4 + lVar15) = 0xffffffff;
    iVar12 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar12 = DAT_14c9a3dd0;
    }
    *(int *)(lVar4 + 4 + lVar15) = iVar12;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar10 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar10 = DAT_14c9a3dc0;
    }
    iVar12 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar12 = iVar8;
    }
    bVar6 = (byte)lVar13 & 0x1f;
    DAT_14c9a3dd0 = iVar8;
    *(uint *)(puVar10 + (longlong)(iVar12 >> 5) * 4) =
         *(uint *)(puVar10 + (longlong)(iVar12 >> 5) * 4) &
         (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
    local_68 = 0;
  }
  if ((local_90[0] == '\x03') && (local_80 != (longlong *)0x0)) {
    LOCK();
    piVar2 = (int *)((longlong)local_80 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_80 + 0x10))();
    }
  }
  FUN_1412748bc(param_1);
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 1412748bc FUN_1412748bc body=2335 status=ok
// SIG undefined FUN_1412748bc(void)

ulonglong FUN_1412748bc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  void *_Src;
  code *pcVar4;
  byte bVar5;
  bool bVar6;
  undefined8 *puVar7;
  char cVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined4 *puVar12;
  undefined8 ****ppppuVar13;
  uint uVar14;
  undefined1 *puVar15;
  undefined *puVar16;
  int iVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  undefined4 *puVar24;
  bool bVar25;
  undefined4 uVar26;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  longlong local_198;
  longlong local_190;
  undefined4 *local_188;
  undefined4 local_17c;
  undefined4 local_178 [2];
  undefined8 *local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  ushort local_150;
  byte local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined8 ***local_138 [2];
  ushort local_128;
  ushort local_120;
  byte local_118;
  undefined8 local_108;
  void *local_100;
  int local_f8;
  undefined4 local_f4;
  undefined1 local_f0;
  char local_e8 [8];
  longlong local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  int local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  longlong lVar23;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if (((*(int *)(param_1 + 0xdc) < 1) ||
      (plVar3 = *(longlong **)(param_1 + 0xf0), plVar3 == (longlong *)0x0)) ||
     (*(int *)(param_1 + 0xec) == 0)) goto LAB_141274954;
  uVar21 = *(uint *)(param_1 + 0xe8);
  uVar22 = 0;
  if (((int)uVar21 < 0) || (DAT_14c9647dc <= (int)uVar21)) goto LAB_141274957;
  lVar20 = (ulonglong)((uVar21 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8);
  if (((lVar20 == 0) ||
      ((*(int *)(lVar20 + 0x10) != *(int *)(param_1 + 0xec) ||
       ((*(uint *)(lVar20 + 8) & 0x10200000) != 0)))) || (*(int *)(param_1 + 0xe4) == 0))
  goto LAB_141274954;
  uVar21 = *(uint *)(param_1 + 0xe0);
  uVar22 = 0;
  if (((int)uVar21 < 0) || (uVar22 = 0, DAT_14c9647dc <= (int)uVar21)) goto LAB_141274957;
  plVar11 = (longlong *)
            ((ulonglong)((uVar21 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8));
  if ((plVar11 != (longlong *)0x0) &&
     (((((int)plVar11[2] == *(int *)(param_1 + 0xe4) &&
        (lVar20 = *(longlong *)(param_1 + 0x48), (*(uint *)(plVar11 + 1) & 0x10200000) == 0)) &&
       (lVar18 = *plVar11, lVar18 != 0)) && ((*(uint *)(lVar18 + 8) >> 0x1e & 1) == 0)))) {
    lVar9 = FUN_14053ad22();
    if (*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar18 + 0x10) + 0x38)) {
      lVar23 = 0;
      uVar22 = 0;
      if (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar9 + 0x38) * 8) != lVar9 + 0x30) goto LAB_141274957;
      local_98 = 0;
      local_90 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_8c = 0xffffffff00000080;
      local_84 = 0;
      local_78 = (undefined1 *)0x0;
      local_70 = 0;
      lVar9 = *(longlong *)(param_1 + 0x40);
      local_e0 = 0;
      local_190 = lVar18;
      if (lVar9 == 0) {
LAB_14127511d:
        local_d8 = (longlong *)0x0;
        bVar6 = true;
      }
      else {
        if (*(int *)(lVar9 + 0x4c) == 0) {
LAB_141275035:
          lVar23 = 0;
        }
        else {
          uVar21 = *(uint *)(lVar9 + 0x48);
          lVar23 = 0;
          if ((-1 < (int)uVar21) && ((int)uVar21 < DAT_14c9647dc)) {
            plVar11 = (longlong *)
                      ((ulonglong)((uVar21 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8));
            if ((plVar11 == (longlong *)0x0) ||
               (((int)plVar11[2] != *(int *)(lVar9 + 0x4c) ||
                ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)))) goto LAB_141275035;
            lVar23 = *plVar11;
          }
        }
        plVar11 = *(longlong **)(lVar9 + 0x118);
        local_e0 = param_1;
        if (plVar11 == (longlong *)0x0) goto LAB_14127511d;
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
        UNLOCK();
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
        LOCK();
        *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
        UNLOCK();
        bVar6 = false;
        local_d8 = plVar11;
      }
      plVar11 = local_d8;
      local_c0 = 0;
      local_e8[0] = '\x03';
      local_d0._0_4_ = 0;
      if (lVar23 == 0) {
        puVar24 = (undefined4 *)0x0;
        iVar19 = 0;
        uVar21 = (uint)local_d0;
      }
      else {
        uVar21 = *(uint *)(lVar23 + 0xc);
        local_d0 = (ulonglong)uVar21;
        if ((int)uVar21 < DAT_14c9647dc) {
          puVar24 = (undefined4 *)
                    ((ulonglong)((uVar21 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8));
        }
        else {
          puVar24 = (undefined4 *)0x0;
        }
        iVar19 = puVar24[4];
        if (puVar24[4] == 0) {
          LOCK();
          iVar19 = DAT_14c964868 + 1;
          UNLOCK();
          iVar17 = DAT_14c964868 + 1;
          bVar25 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar19;
          if (bVar25) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar17);
          }
          LOCK();
          iVar19 = puVar24[4];
          bVar25 = iVar19 == 0;
          if (bVar25) {
            puVar24[4] = iVar17;
            iVar19 = 0;
          }
          UNLOCK();
          uVar21 = (uint)local_d0;
          if (bVar25) {
            iVar19 = iVar17;
          }
        }
      }
      local_d0._0_4_ = uVar21;
      local_d0 = CONCAT44(iVar19,(uint)local_d0);
      local_c8 = 2;
      if (local_c0 != 0) {
        FUN_1417398fc(&DAT_14c9a3da0,local_c0 + -1,1);
        local_c0 = 0;
      }
      if (!bVar6) {
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
      local_198 = lVar20;
      if ((longlong)*(int *)(lVar20 + 0x118) != 0) {
        puVar24 = *(undefined4 **)(lVar20 + 0x110);
        local_188 = puVar24 + (longlong)*(int *)(lVar20 + 0x118) * 0x16;
        do {
          FUN_14034cca6(&local_140,puVar24);
          local_108 = *(undefined8 *)(puVar24 + 0xe);
          local_100 = (void *)0x0;
          local_f8 = puVar24[0x12];
          lVar20 = (longlong)local_f8;
          _Src = *(void **)(puVar24 + 0x10);
          if (lVar20 == 0) {
            local_f4 = 0;
          }
          else {
            FUN_1446dd670(&local_100,local_f8,0);
            memcpy(local_100,_Src,lVar20 * 2);
          }
          local_f0 = *(undefined1 *)(puVar24 + 0x14);
          FUN_1447c3578(&local_140,&local_168,local_e8);
          FUN_14040cfbc(&local_b8,local_178);
          puVar7 = local_170;
          *local_170 = local_108;
          FUN_1408820c2(local_170 + 1,0,&local_168);
          *(undefined4 *)(puVar7 + 6) = 0xffffffff;
          local_17c = local_178[0];
          uVar10 = *puVar7;
          uVar21 = (uint)((ulonglong)uVar10 >> 0x10);
          uVar14 = (uint)uVar10 & 0xffff;
          uVar21 = ((uint)uVar10 << 0x10 | uVar14) + (int)((ulonglong)uVar10 >> 0x20) +
                   (uVar21 << 0x13 | uVar21 & 0xffff) + (uVar14 >> 4);
          local_1a8 = 0;
          cVar8 = FUN_14040c306(&local_b8,uVar21,puVar7,&local_17c);
          if (cVar8 == '\0') {
            uVar14 = (int)uStack_b0 - local_84;
            iVar19 = 1;
            if (3 < uVar14) {
              uVar22 = (ulonglong)(uVar14 & 0xfffffffe) + 0xf;
              lVar20 = 0x3f;
              if (uVar22 != 0) {
                for (; uVar22 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                }
              }
              iVar19 = 1 << ((byte)lVar20 & 0x1f);
            }
            if (((int)uVar14 < 1) || (iVar19 <= local_70)) {
              uVar21 = local_70 - 1U & uVar21;
              *(uint *)((longlong)puVar7 + 0x34) = uVar21;
              puVar15 = local_78;
              if (local_78 == (undefined1 *)0x0) {
                puVar15 = local_80;
              }
              *(undefined4 *)(puVar7 + 6) =
                   *(undefined4 *)(puVar15 + ((longlong)local_70 - 1U & (longlong)(int)uVar21) * 4);
              puVar15 = local_78;
              if (local_78 == (undefined1 *)0x0) {
                puVar15 = local_80;
              }
              *(undefined4 *)(puVar15 + ((longlong)local_70 - 1U & (longlong)(int)uVar21) * 4) =
                   local_17c;
            }
            else {
              local_70 = iVar19;
              FUN_140882160(&local_b8);
            }
          }
          pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_148 * 0x120));
          if (pcVar4 != (code *)0x0) {
            puVar12 = &local_168;
            if (0x18 < local_150) {
              puVar12 = (undefined4 *)CONCAT44(uStack_164,local_168);
            }
            (*pcVar4)(puVar12);
          }
          if (0x18 < local_150) {
            FUN_1400020a8(CONCAT44(uStack_164,local_168));
          }
          if (local_100 != (void *)0x0) {
            FUN_1400020a8();
          }
          pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_118 * 0x120));
          if (pcVar4 != (code *)0x0) {
            ppppuVar13 = local_138;
            if (0x18 < local_120) {
              ppppuVar13 = (undefined8 ****)local_138[0];
            }
            (*pcVar4)(ppppuVar13);
          }
          if (0x18 < local_120) {
            FUN_1400020a8(local_138[0]);
          }
          puVar24 = puVar24 + 0x16;
        } while (puVar24 != local_188);
      }
      puVar12 = &local_168;
      FUN_1447c3578(local_198 + 0xd0,puVar12,local_e8);
      uVar26 = local_168;
      if (local_148 != 3) {
        puVar24 = &local_140;
        FUN_1400b56fe(puVar24,&local_168,3);
        uVar26 = 0;
        if ((byte)local_120 != 0) {
          uVar26 = local_140;
        }
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)local_120 * 0x120));
        if (pcVar4 != (code *)0x0) {
          if (0x18 < local_128) {
            puVar24 = (undefined4 *)CONCAT44(uStack_13c,local_140);
          }
          (*pcVar4)(puVar24);
        }
        if (0x18 < local_128) {
          FUN_1400020a8(CONCAT44(uStack_13c,local_140));
        }
      }
      FUN_140dd04a4(&local_b8,uVar26);
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_148 * 0x120));
      if (pcVar4 != (code *)0x0) {
        if (0x18 < local_150) {
          puVar12 = (undefined4 *)CONCAT44(uStack_164,local_168);
        }
        (*pcVar4)(puVar12);
      }
      if (0x18 < local_150) {
        FUN_1400020a8(CONCAT44(uStack_164,local_168));
      }
      *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + -1;
      uVar10 = (**(code **)(*plVar3 + 0x50))(plVar3);
      cVar8 = FUN_14096df60(uVar10,local_190,0,&local_b8);
      *(char *)(param_1 + 0xd8) = cVar8;
      uVar22 = CONCAT71((int7)((ulonglong)puVar24 >> 8),cVar8 != '\0');
      if (cVar8 != '\0') {
        *(undefined1 *)(param_1 + 0xf8) = 1;
      }
      lVar20 = DAT_14c9a3da0;
      if ((longlong)local_c0 != 0) {
        lVar18 = (longlong)local_c0 + -1;
        lVar9 = lVar18 * 0x10;
        FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar9),
                      *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar9));
        if (*(longlong *)(lVar20 + lVar9) != 0) {
          FUN_1400020a8();
        }
        lVar20 = DAT_14c9a3da0;
        iVar19 = (int)lVar18;
        if (DAT_14c9a3dd4 != 0) {
          *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar19;
        }
        *(undefined4 *)(lVar20 + lVar9) = 0xffffffff;
        iVar17 = -1;
        if (0 < DAT_14c9a3dd4) {
          iVar17 = DAT_14c9a3dd0;
        }
        *(int *)(lVar20 + 4 + lVar9) = iVar17;
        DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
        puVar16 = &DAT_14c9a3db0;
        if (DAT_14c9a3dc0 != (undefined *)0x0) {
          puVar16 = DAT_14c9a3dc0;
        }
        iVar17 = iVar19 + 0x1f;
        if (-1 < iVar19) {
          iVar17 = iVar19;
        }
        bVar5 = (byte)lVar18 & 0x1f;
        DAT_14c9a3dd0 = iVar19;
        *(uint *)(puVar16 + (longlong)(iVar17 >> 5) * 4) =
             *(uint *)(puVar16 + (longlong)(iVar17 >> 5) * 4) &
             (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
        local_c0 = 0;
      }
      if ((local_e8[0] == '\x03') && (local_d8 != (longlong *)0x0)) {
        LOCK();
        piVar2 = (int *)((longlong)local_d8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_d8 + 0x10))();
        }
      }
      local_70 = 0;
      if (local_78 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      FUN_140333f4e(&local_b8);
      goto LAB_141274957;
    }
  }
LAB_141274954:
  uVar22 = 0;
LAB_141274957:
  if ((local_60 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar22 & 0xffffffff;
}



// FUNCTION 1412751dc FUN_1412751dc body=1126 status=ok
// SIG undefined FUN_1412751dc(void)

void FUN_1412751dc(longlong param_1,byte param_2,ulonglong param_3)

{
  ushort uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  undefined8 *local_a8;
  ulonglong local_a0;
  undefined1 local_98 [8];
  undefined1 local_90 [8];
  undefined8 *local_88;
  int local_80;
  longlong local_78 [3];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 != 2) {
    puVar6 = (undefined8 *)(param_1 + -0x8c0);
    uVar8 = (uint)param_2;
    if (uVar8 == 4) {
      FUN_14586b196(local_98);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_d8);
    }
    param_3 = param_3 & 0xffffffff;
    if ((char)param_3 != '\0') {
      iVar10 = 0;
      uVar7 = (ulonglong)(uVar8 - 1);
      lVar9 = 0;
      do {
        bVar5 = (byte)param_3;
        if (((param_3 & 1) != 0) && (iVar10 < *(int *)(param_1 + 0x330))) {
          uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x328) + 6 + lVar9);
          if ((uVar1 >> (uVar8 & 0x1f) & 1) == 0) {
            *(ushort *)(*(longlong *)(param_1 + 0x328) + 6 + lVar9) =
                 uVar1 | (ushort)(1 << (param_2 & 0x1f));
            local_78[0] = 0;
            local_78[1] = 0;
            if ((uint)uVar7 < 6) {
              switch((longlong)&switchD_1412752b6::switchdataD_14b4abd0c +
                     (longlong)(int)(&switchD_1412752b6::switchdataD_14b4abd0c)[uVar7]) {
              case 0x1412752b8:
                if (iVar10 < *(int *)(param_1 + 0x330)) {
                  uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0x328) + 8 + lVar9);
                  if (uVar2 != 0) {
                    local_88 = (undefined8 *)0x0;
                    local_80 = 0;
                    local_a0 = uVar2;
                    FUN_1446efa72(&local_88,0,3,0x10);
                    local_80 = 3;
                    *local_88 = &PTR_LAB_149e020b0;
                    LOCK();
                    UNLOCK();
                    lVar3 = DAT_14c758608 + 1;
                    lVar4 = DAT_14c758608 + 1;
                    if (lVar3 == 0) {
                      LOCK();
                      UNLOCK();
                      lVar3 = DAT_14c758608 + 2;
                      lVar4 = DAT_14c758608 + 2;
                    }
                    DAT_14c758608 = lVar4;
                    local_88[2] = lVar3;
                    *local_88 = &PTR_FUN_14b4aba60;
                    local_a8 = local_88;
                    local_88[3] = 0;
                    FUN_14485c47a(local_88 + 3,puVar6);
                    local_a8[4] = &LAB_146577c42;
                    *(undefined4 *)(local_a8 + 5) = 0;
                    FUN_140fa0954(puVar6,&local_88,local_a0,local_78);
LAB_141275519:
                    if (local_80 != 0) {
                      if (local_88 == (undefined8 *)0x0) goto LAB_1412755a0;
                      (**(code **)*local_88)(local_88,0);
                      FUN_1446efa72(&local_88,0,0,0x10);
                      local_80 = 0;
                    }
                    if (local_88 != (undefined8 *)0x0) {
                      FUN_1400020a8();
                    }
                  }
LAB_1412755a0:
                  if (local_78[0] != 0) {
                    local_a8 = puVar6;
                    local_a0 = uVar7;
                    FUN_1400020a8();
                    puVar6 = local_a8;
                    uVar7 = local_a0;
                  }
                }
                break;
              case 0x14127540d:
                if (iVar10 < *(int *)(param_1 + 0x330)) {
                  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x328) + 0x20 + lVar9);
                  if (lVar4 != 0) {
                    lVar4 = lVar4 + 0x40;
                    local_88 = (undefined8 *)&LAB_1457b6964;
LAB_141275575:
                    local_80 = 0;
                    FUN_14127566c(lVar4,local_90,puVar6,&local_88);
                  }
                  goto LAB_1412755a0;
                }
                break;
              case 0x14127543d:
                if (iVar10 < *(int *)(param_1 + 0x330)) {
                  uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0x328) + 8 + lVar9);
                  if (uVar2 != 0) {
                    local_88 = (undefined8 *)0x0;
                    local_80 = 0;
                    local_a0 = uVar2;
                    FUN_1446efa72(&local_88,0,3,0x10);
                    local_80 = 3;
                    *local_88 = &PTR_LAB_149e020b0;
                    LOCK();
                    UNLOCK();
                    lVar3 = DAT_14c758608 + 1;
                    lVar4 = DAT_14c758608 + 1;
                    if (lVar3 == 0) {
                      LOCK();
                      UNLOCK();
                      lVar3 = DAT_14c758608 + 2;
                      lVar4 = DAT_14c758608 + 2;
                    }
                    DAT_14c758608 = lVar4;
                    local_88[2] = lVar3;
                    *local_88 = &PTR_FUN_14b4aba60;
                    local_a8 = local_88;
                    local_88[3] = 0;
                    FUN_14485c47a(local_88 + 3,puVar6);
                    local_a8[4] = &LAB_1408bd3bc;
                    *(undefined4 *)(local_a8 + 5) = 0;
                    local_b8 = local_78;
                    FUN_14107bdda(puVar6,&local_88,1,local_a0);
                    goto LAB_141275519;
                  }
                  goto LAB_1412755a0;
                }
                break;
              case 0x141275547:
                if (iVar10 < *(int *)(param_1 + 0x330)) {
                  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x328) + 0x20 + lVar9);
                  if (lVar4 != 0) {
                    lVar4 = lVar4 + 0x58;
                    local_88 = (undefined8 *)&LAB_1457b696c;
                    goto LAB_141275575;
                  }
                  goto LAB_1412755a0;
                }
              }
            }
          }
        }
        lVar9 = lVar9 + 0x88;
        iVar10 = iVar10 + 1;
        param_3 = (ulonglong)((uint)(param_3 >> 1) & 0x7f);
      } while (1 < bVar5);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14127566c FUN_14127566c body=772 status=ok
// SIG undefined FUN_14127566c(void)

undefined8 * FUN_14127566c(longlong *param_1,undefined8 *param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_88 [40];
  longlong *local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar9 = param_4[1];
  lVar2 = *param_4;
  local_60 = (longlong *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,3,0x10);
  plVar3 = local_60;
  local_58 = 3;
  *local_60 = (longlong)&PTR_LAB_149e06450;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar11 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar11 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar11;
  local_60[2] = lVar7;
  *local_60 = (longlong)&PTR_FUN_14b4abad0;
  local_60[3] = 0;
  iVar10 = 0;
  if (param_3 != 0) {
    uVar1 = *(uint *)(param_3 + 0xc);
    *(uint *)(local_60 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar10 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar10 = *(int *)(lVar11 + 0x10);
      bVar12 = iVar10 == 0;
      if (bVar12) {
        *(int *)(lVar11 + 0x10) = iVar5;
        iVar10 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar10 = iVar5;
      }
    }
  }
  *(int *)((longlong)plVar3 + 0x1c) = iVar10;
  plVar3[4] = lVar2;
  *(int *)(plVar3 + 5) = (int)lVar9;
  *param_2 = 0;
  if (((local_58 == 0) || (local_60 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*local_60 + 0x30))(), cVar4 == '\0')) {
    if (local_58 != 0) {
      if (local_60 == (longlong *)0x0) goto LAB_141275820;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      goto LAB_14127580a;
    }
  }
  else {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar10 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar10) {
        iVar5 = iVar10;
        if (0 < iVar10) {
          iVar8 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar8 * 0x10) == 0) ||
                (plVar3 = *(longlong **)(*param_1 + (longlong)iVar8 * 0x10),
                plVar3 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar3 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar8);
              FUN_14005b248(param_1);
            }
            else {
              iVar8 = iVar8 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar8 < iVar5);
        }
        iVar8 = 2;
        if (2 < iVar5 * 2) {
          iVar8 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar8;
        if ((iVar8 < iVar10) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if ((local_58 != 0) && (local_60 != (longlong *)0x0)) {
      (**(code **)(*local_60 + 0x38))(local_60,&local_50);
      uVar6 = local_50;
    }
    *param_2 = uVar6;
    iVar10 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar10 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar10 + 1U) {
      FUN_1447a71f6(param_1,iVar10);
    }
    lVar2 = *param_1;
    lVar9 = (longlong)iVar10 * 0x10;
    *(undefined8 *)(lVar2 + lVar9) = 0;
    *(undefined4 *)(lVar2 + 8 + lVar9) = 0;
    *(longlong **)(lVar2 + lVar9) = local_60;
    local_60 = (longlong *)0x0;
    *(int *)(lVar2 + 8 + lVar9) = local_58;
LAB_14127580a:
    local_58 = 0;
  }
  if (local_60 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_141275820:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1412759c0 FUN_1412759c0 body=5328 status=ok
// SIG undefined FUN_1412759c0(void)

void FUN_1412759c0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 ****ppppuVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  void *pvVar12;
  undefined8 uVar13;
  undefined8 *****pppppuVar14;
  undefined8 *****pppppuVar15;
  longlong *plVar16;
  undefined1 *puVar17;
  longlong lVar18;
  undefined4 *puVar19;
  longlong lVar20;
  undefined8 *puVar21;
  undefined8 ******ppppppuVar22;
  longlong *plVar23;
  uint uVar24;
  longlong *plVar25;
  undefined8 *puVar26;
  int iVar27;
  bool bVar28;
  undefined1 auStack_218 [40];
  undefined8 *****local_1f0;
  undefined8 *****local_1e8;
  longlong local_1e0;
  ulonglong local_1d8;
  longlong *local_1d0;
  longlong **local_1c8;
  undefined8 local_1c0;
  undefined8 *****local_1b8;
  undefined8 uStack_1b0;
  void *local_1a8;
  undefined8 uStack_1a0;
  void *local_198;
  undefined8 uStack_190;
  longlong *local_188;
  longlong *plStack_180;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined8 local_154;
  undefined4 local_14c;
  undefined8 *local_148;
  undefined8 uStack_140;
  longlong *local_138;
  ulonglong uStack_130;
  longlong local_128 [3];
  undefined8 ******local_110;
  longlong *local_108;
  longlong local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e8;
  longlong **local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  longlong *local_b8;
  longlong *plStack_b0;
  longlong local_a8 [2];
  undefined8 local_98;
  int local_90;
  undefined8 local_8c;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_218;
  lVar8 = FUN_1400bd1c2();
  FUN_1410d53f0(&local_b8,lVar8);
  if (plStack_b0 != (longlong *)0x0) {
    iVar27 = (int)plStack_b0[1];
    do {
      if (iVar27 == 0) {
        plVar23 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar7 = (int)plStack_b0[1];
      bVar28 = iVar27 == iVar7;
      if (bVar28) {
        *(int *)(plStack_b0 + 1) = iVar27 + 1;
        iVar7 = iVar27;
      }
      iVar27 = iVar7;
      UNLOCK();
      plVar23 = plStack_b0;
    } while (!bVar28);
    LOCK();
    piVar1 = (int *)((longlong)plStack_b0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_b0 + 0x10))();
    }
    plVar2 = local_b8;
    if (plVar23 != (longlong *)0x0) {
      if ((lVar8 != 0) && (local_b8 != (longlong *)0x0)) {
        local_128[0] = 0;
        local_128[1] = 0;
        local_98 = 0;
        local_90 = 0;
        local_b8 = (longlong *)0x0;
        plStack_b0 = (longlong *)0x0;
        local_8c = 0xffffffff00000080;
        local_84 = 0;
        local_78 = (undefined1 *)0x0;
        local_70 = 0;
        local_138 = (longlong *)0x0;
        uStack_130 = 0;
        FUN_141277154(param_1,0,&local_138);
        if ((longlong)(int)uStack_130 != 0) {
          plVar25 = local_138 + (longlong)(int)uStack_130 * 2;
          plVar10 = local_138;
          do {
            lVar18 = *plVar10;
            local_110 = (undefined8 *******)0x0;
            plVar11 = *(longlong **)(lVar18 + 0x68);
            local_108 = plVar11;
            if (plVar11 == (longlong *)0x0) {
LAB_14127635e:
              plVar11 = (longlong *)0x0;
            }
            else {
              iVar27 = (int)plVar11[1];
              do {
                if (iVar27 == 0) {
                  local_108 = (longlong *)0x0;
                  goto LAB_14127635e;
                }
                LOCK();
                iVar7 = (int)plVar11[1];
                bVar28 = iVar27 == iVar7;
                if (bVar28) {
                  *(int *)(plVar11 + 1) = iVar27 + 1;
                  iVar7 = iVar27;
                }
                iVar27 = iVar7;
                UNLOCK();
              } while (!bVar28);
              if (plVar11 == (longlong *)0x0) goto LAB_14127635e;
              local_110 = *(undefined8 *******)(lVar18 + 0x60);
            }
            if ((undefined8 *******)local_110 != (undefined8 *******)0x0) {
              local_148 = (undefined8 *)0x0;
              uStack_140 = 0;
              cVar6 = FUN_1412770ea();
              if (cVar6 == '\0') {
                FUN_14060edee(local_110,&local_154);
                local_160 = local_154;
                local_158 = local_14c;
                FUN_1448075d0(&local_e0,&local_160);
                local_1e0 = FUN_1488dda7c(&local_e0);
                if (local_c8 != 0) {
                  FUN_1400020a8();
                }
                local_170 = *(undefined8 *)(param_1 + 0xd8);
                local_168 = *(undefined4 *)(param_1 + 0xe0);
                FUN_1448075d0(&local_e0);
                lVar18 = FUN_1488dda7c(&local_e0);
                if (local_c8 != 0) {
                  FUN_1400020a8();
                }
                if (lVar18 != 0 && local_1e0 != 0) {
                  if ((longlong)*(int *)(lVar18 + 0x90) != 0) {
                    lVar9 = (longlong)*(int *)(lVar18 + 0x90) * 8;
                    lVar20 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(*(longlong *)(lVar18 + 0x88) + lVar20) + 0x58)
                          == local_1e0) {
                        local_188 = (longlong *)0x0;
                        plStack_180 = (longlong *)0x0;
                        local_1d8 = CONCAT44(local_1d8._4_4_,
                                             (int)CONCAT71((int7)((ulonglong)lVar9 >> 8),1));
                        goto LAB_141276498;
                      }
                      lVar20 = lVar20 + 8;
                    } while (lVar9 != lVar20);
                  }
                  local_188 = (longlong *)0x0;
                  plStack_180 = (longlong *)0x0;
                  FUN_1488dda8e(lVar18,local_1e0,&local_188);
                  local_1d8 = local_1d8 & 0xffffffff00000000;
LAB_141276498:
                  local_198 = (void *)0x0;
                  uStack_190 = 0;
                  local_1a8 = (void *)0x0;
                  uStack_1a0 = 0;
                  local_1b8 = (undefined8 ******)0x0;
                  uStack_1b0 = 0;
                  local_e8 = DAT_14cbd40c0;
                  local_f0 = DAT_14cbd40b8;
                  FUN_1448075d0(&local_e0,&local_f0);
                  FUN_141450bbc(plVar2,&local_e0,&local_1b8);
                  if (local_c8 != 0) {
                    FUN_1400020a8();
                  }
                  local_1e8 = local_1b8;
                  lVar18 = (longlong)(int)uStack_1b0;
                  if (lVar18 != 0) {
                    lVar9 = 0;
                    do {
                      local_e0 = *(longlong ***)((longlong)local_1e8 + lVar9);
                      if ((local_e0 != (longlong **)0x0) &&
                         (cVar6 = FUN_148e0baf2(local_e0,lVar8), cVar6 != '\0')) {
                        FUN_148851bbc(&local_1a8,&local_e0);
                        local_1f0 = (undefined8 *****)local_e0;
                        plVar11 = local_e0[4];
                        if (plVar11 == (longlong *)0x0) {
                          uVar13 = FUN_1457bc4fa();
                          plVar11 = (longlong *)FUN_14477b664(uVar13);
                          local_1f0[4] = (undefined8 ****)plVar11;
                        }
                        if (local_1f0[5] == (undefined8 ****)0x0) {
                          if ((plVar11 != (longlong *)0x0) &&
                             (local_1c8 = (longlong **)(local_1f0 + 3),
                             *local_1c8 != (longlong *)0x0)) {
                            local_1d0 = (longlong *)plVar11[0x17];
                            if ((local_1d0 == (longlong *)0x0) ||
                               (cVar6 = (**(code **)(*local_1d0 + 0x108))(), cVar6 == '\0')) {
                              local_1f0[5] = (undefined8 ****)0x0;
                            }
                            else {
                              uVar13 = (**(code **)(*local_1d0 + 0x110))();
                              plVar11 = (longlong *)FUN_144aff482(uVar13,local_1c8);
                              local_1f0[5] = (undefined8 ****)plVar11;
                              if (plVar11 != (longlong *)0x0) goto LAB_14127659c;
                            }
                          }
LAB_141276694:
                          local_1f0 = (undefined8 *****)(longlong)(int)(uint)uStack_1a0;
                          uVar24 = (uint)uStack_1a0 + 1;
                          uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar24);
                          pvVar12 = local_1a8;
                          if (uStack_1a0._4_4_ < uVar24) {
                            FUN_1407c8de8(&local_1a8,local_1f0);
                            pvVar12 = local_1a8;
                          }
                        }
                        else {
LAB_14127659c:
                          local_1f0 = (undefined8 *****)local_e0;
                          plVar11 = local_e0[4];
                          if (plVar11 == (longlong *)0x0) {
                            uVar13 = FUN_1457bc4fa();
                            plVar11 = (longlong *)FUN_14477b664(uVar13);
                            local_1f0[4] = (undefined8 ****)plVar11;
                          }
                          plVar16 = (longlong *)local_1f0[5];
                          if (plVar16 == (longlong *)0x0) {
                            if (plVar11 == (longlong *)0x0) {
                              plVar16 = (longlong *)0x0;
                            }
                            else {
                              local_1c8 = (longlong **)(local_1f0 + 3);
                              plVar16 = (longlong *)0x0;
                              if (*local_1c8 != (longlong *)0x0) {
                                local_1d0 = (longlong *)plVar11[0x17];
                                if ((local_1d0 == (longlong *)0x0) ||
                                   (cVar6 = (**(code **)(*local_1d0 + 0x108))(), cVar6 == '\0')) {
                                  plVar16 = (longlong *)0x0;
                                }
                                else {
                                  uVar13 = (**(code **)(*local_1d0 + 0x110))();
                                  plVar16 = (longlong *)FUN_144aff482(uVar13,local_1c8);
                                }
                                local_1f0[5] = (undefined8 ****)plVar16;
                              }
                            }
                          }
                          if (*(char *)((longlong)plVar16 + 0x35) != '\x01') goto LAB_141276694;
                          local_1f0 = (undefined8 *****)(longlong)(int)(uint)uStack_190;
                          uVar24 = (uint)uStack_190 + 1;
                          uStack_190 = CONCAT44(uStack_190._4_4_,uVar24);
                          pvVar12 = local_198;
                          if (uStack_190._4_4_ < uVar24) {
                            FUN_1407c8de8(&local_198,local_1f0);
                            pvVar12 = local_198;
                          }
                        }
                        *(longlong ***)((longlong)pvVar12 + (longlong)local_1f0 * 8) = local_e0;
                      }
                      lVar9 = lVar9 + 8;
                    } while (lVar18 * 8 != lVar9);
                  }
                  local_1e8 = local_1b8;
                  if ((undefined8 ******)local_1b8 != (undefined8 ******)0x0) {
                    FUN_1400020a8(local_1b8);
                  }
                  uVar3 = uStack_140;
                  lVar18 = (longlong)(int)(uint)uStack_190;
                  if (lVar18 != 0) {
                    iVar27 = (int)uStack_140;
                    lVar9 = (longlong)(int)uStack_140;
                    uStack_140 = CONCAT44(uStack_140._4_4_,(int)uStack_140 + (uint)uStack_190);
                    if (uStack_140._4_4_ - iVar27 < (uint)uStack_190) {
                      FUN_1407c8de8(&local_148,uVar3 & 0xffffffff);
                    }
                    memcpy(local_148 + lVar9,local_198,lVar18 << 3);
                  }
                  if ((int)uStack_140 < 1) {
                    if ((char)local_1d8 == '\0' && 0 < (int)(uint)uStack_1a0) goto LAB_141276b29;
LAB_1412769c5:
                    if (0 < (int)plStack_180) {
                      local_1e0 = *local_188;
                    }
LAB_1412769df:
                    local_1b8 = (undefined8 ******)0x0;
                    uStack_1b0 = 0;
                    local_e8 = DAT_14cbd3c58;
                    local_f0 = DAT_14cbd3c50;
                    FUN_1448075d0(&local_e0,&local_f0);
                    FUN_141450bbc(plVar2,&local_e0,&local_1b8);
                    if (local_c8 != 0) {
                      FUN_1400020a8();
                    }
                    local_1e8 = local_1b8;
                    local_1f0 = (undefined8 *****)(longlong)(int)uStack_1b0;
                    if ((undefined8 ******)local_1f0 != (undefined8 ******)0x0) {
                      local_1f0 = (undefined8 *****)((longlong)local_1f0 << 3);
                      ppppppuVar22 = (undefined8 ******)0x0;
                      do {
                        lVar18 = *(longlong *)((longlong)local_1e8 + (longlong)ppppppuVar22);
                        if ((((lVar18 != 0) && (lVar9 = FUN_1488dd61c(lVar18), lVar9 != 0)) &&
                            (*(longlong *)(lVar9 + 0x58) == local_1e0)) &&
                           (cVar6 = FUN_143dbe0cc(lVar18,lVar8), cVar6 != '\0')) {
                          local_1d8 = (ulonglong)(int)uStack_140;
                          uVar24 = (int)uStack_140 + 1;
                          uStack_140 = CONCAT44(uStack_140._4_4_,uVar24);
                          if (uStack_140._4_4_ < uVar24) {
                            FUN_1407c8de8(&local_148,local_1d8);
                          }
                          local_148[local_1d8] = lVar18;
                        }
                        ppppppuVar22 = ppppppuVar22 + 1;
                      } while ((undefined8 ******)local_1f0 != ppppppuVar22);
                    }
                    iVar27 = (int)uStack_140;
                    local_1e8 = local_1b8;
                    if ((undefined8 ******)local_1b8 != (undefined8 ******)0x0) {
                      FUN_1400020a8(local_1b8);
                    }
                    if (iVar27 == 0) goto LAB_141276cc0;
                  }
                  else {
                    if ((char)local_1d8 != '\0') goto LAB_1412769c5;
LAB_141276b29:
                    local_1f0 = (undefined8 *****)((ulonglong)plStack_180 & 0xffffffff);
                    if ((undefined8 ******)local_1f0 != (undefined8 ******)0x0) {
                      local_1f0._0_4_ = (int)plStack_180;
                      bVar28 = 0 < (int)local_1f0;
                      if (bVar28) {
                        local_1d8 = local_1d8 & 0xffffffff00000000;
                        do {
                          local_1b8 = (undefined8 ******)0x0;
                          uStack_1b0 = 0;
                          puVar19 = *(undefined4 **)(local_188[(longlong)local_1f0 + -1] + 8);
                          if (puVar19 == (undefined4 *)0x0) {
                            puVar19 = &DAT_14c9485f0;
                          }
                          FUN_1447325ac(puVar19,&local_1c0,1);
                          local_e8 = DAT_14cbd40c0;
                          local_f0 = DAT_14cbd40b8;
                          FUN_1448075d0(&local_e0,&local_f0);
                          FUN_141450c9a(&local_e0,local_1c0,&local_1b8);
                          if (local_c8 != 0) {
                            FUN_1400020a8();
                          }
                          local_1e8 = local_1b8;
                          lVar18 = (longlong)(int)uStack_1b0;
                          if (lVar18 != 0) {
                            lVar9 = 0;
                            do {
                              if ((*(longlong *)((longlong)local_1e8 + lVar9) != 0) &&
                                 (uVar13 = FUN_148e0baf2(*(longlong *)((longlong)local_1e8 + lVar9),
                                                         lVar8), (char)uVar13 != '\0')) {
                                local_1d8 = CONCAT44(local_1d8._4_4_,
                                                     (int)CONCAT71((int7)((ulonglong)uVar13 >> 8),1)
                                                    );
                                break;
                              }
                              lVar9 = lVar9 + 8;
                            } while (lVar18 * 8 != lVar9);
                          }
                          local_1e8 = local_1b8;
                          if ((undefined8 ******)local_1b8 != (undefined8 ******)0x0) {
                            FUN_1400020a8(local_1b8);
                          }
                          ppppppuVar22 = (undefined8 ******)((longlong)local_1f0 + -1);
                          bVar28 = 1 < (longlong)local_1f0;
                          local_1f0 = ppppppuVar22;
                        } while (bVar28);
                        if ((local_1d8 & 1) == 0) goto LAB_1412769c5;
                        goto LAB_141276cc0;
                      }
                      goto LAB_1412769df;
                    }
LAB_141276cc0:
                    uVar3 = uStack_140;
                    lVar18 = (longlong)(int)(uint)uStack_1a0;
                    if (lVar18 != 0) {
                      iVar27 = (int)uStack_140;
                      lVar9 = (longlong)(int)uStack_140;
                      uStack_140 = CONCAT44(uStack_140._4_4_,(int)uStack_140 + (uint)uStack_1a0);
                      if (uStack_140._4_4_ - iVar27 < (uint)uStack_1a0) {
                        FUN_1407c8de8(&local_148,uVar3 & 0xffffffff);
                      }
                      memcpy(local_148 + lVar9,local_1a8,lVar18 << 3);
                    }
                  }
                  if (local_1a8 != (void *)0x0) {
                    FUN_1400020a8();
                  }
                  if (local_198 != (void *)0x0) {
                    FUN_1400020a8();
                  }
                  if (local_188 != (longlong *)0x0) {
                    FUN_1400020a8();
                  }
                  goto LAB_141275d50;
                }
              }
              else {
                ppppppuVar22 = (undefined8 ******)local_110[7];
                if (ppppppuVar22 != (undefined8 ******)0x0) {
                  lVar18 = (*(code *)(*ppppppuVar22)[1])(ppppppuVar22);
                  lVar9 = FUN_14060edb4();
                  if (((lVar9 != 0) && (*(int *)(lVar9 + 0x38) <= *(int *)(lVar18 + 0x38))) &&
                     (*(longlong *)
                       (*(longlong *)(lVar18 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
                      lVar9 + 0x30)) {
                    pppppuVar15 = ppppppuVar22[0xc];
                    if (pppppuVar15 == (undefined8 *****)0x0) {
                      uVar13 = FUN_1405e2e10();
                      pppppuVar15 = (undefined8 *****)FUN_14477b664(uVar13);
                      ppppppuVar22[0xc] = pppppuVar15;
                    }
                    pppppuVar14 = ppppppuVar22[0xd];
                    if (pppppuVar14 == (undefined8 *****)0x0) {
                      if ((ppppppuVar22[0xb] != (undefined8 *****)0x0) &&
                         (pppppuVar15 != (undefined8 *****)0x0)) {
                        local_1e8 = (undefined8 *****)pppppuVar15[0x17];
                        if (((undefined8 ******)local_1e8 == (undefined8 ******)0x0) ||
                           (cVar6 = (*(code *)(*local_1e8)[0x21])(), cVar6 == '\0')) {
                          ppppppuVar22[0xd] = (undefined8 *****)0x0;
                        }
                        else {
                          uVar13 = (*(code *)(*local_1e8)[0x22])();
                          pppppuVar14 = (undefined8 *****)FUN_144aff482(uVar13,ppppppuVar22 + 0xb);
                          ppppppuVar22[0xd] = pppppuVar14;
                          if (pppppuVar14 != (undefined8 *****)0x0) goto LAB_1412767af;
                        }
                      }
                    }
                    else {
LAB_1412767af:
                      uVar13 = FUN_1400bd1c2(param_1);
                      local_1e0 = FUN_14103c0a0(uVar13);
                      if ((local_1e0 != 0) && ((longlong)*(int *)(pppppuVar14 + 4) != 0)) {
                        local_1e8 = (undefined8 *****)pppppuVar14[3];
                        lVar18 = (longlong)*(int *)(pppppuVar14 + 4) * 0x28;
                        do {
                          lVar9 = FUN_14583c61c(local_1e8);
                          if (((lVar9 != 0) && (lVar9 = FUN_1417fad74(local_1e0,lVar9), lVar9 != 0))
                             && (cVar6 = FUN_14379838e(local_1e0,lVar9), cVar6 != '\x02')) {
                            pppppuVar15 = ppppppuVar22[9];
                            if (pppppuVar15 == (undefined8 *****)0x0) {
                              uVar13 = FUN_14050b070();
                              pppppuVar15 = (undefined8 *****)FUN_14477b664(uVar13);
                              ppppppuVar22[9] = pppppuVar15;
                            }
                            pppppuVar14 = ppppppuVar22[10];
                            if (pppppuVar14 == (undefined8 *****)0x0) {
                              if ((pppppuVar15 == (undefined8 *****)0x0) ||
                                 (local_1e8 = ppppppuVar22 + 8,
                                 (undefined8 *****)*local_1e8 == (undefined8 *****)0x0)) break;
                              ppppuVar4 = pppppuVar15[0x17];
                              if ((ppppuVar4 == (undefined8 ****)0x0) ||
                                 (cVar6 = (*(code *)(*ppppuVar4)[0x21])(ppppuVar4), cVar6 == '\0'))
                              {
                                ppppppuVar22[10] = (undefined8 *****)0x0;
                                break;
                              }
                              uVar13 = (*(code *)(*ppppuVar4)[0x22])(ppppuVar4);
                              pppppuVar14 = (undefined8 *****)FUN_144aff482(uVar13,local_1e8);
                              ppppppuVar22[10] = pppppuVar14;
                              if (pppppuVar14 == (undefined8 *****)0x0) break;
                            }
                            FUN_140bdf372(local_128,*plVar10);
                            uVar3 = uStack_140;
                            lVar18 = (longlong)(int)uStack_140;
                            uVar24 = (int)uStack_140 + 1;
                            uStack_140 = CONCAT44(uStack_140._4_4_,uVar24);
                            if (uStack_140._4_4_ < uVar24) {
                              FUN_1407c8de8(&local_148,uVar3 & 0xffffffff);
                            }
                            local_148[lVar18] = pppppuVar14;
                            break;
                          }
                          local_1e8 = local_1e8 + 5;
                          lVar18 = lVar18 + -0x28;
                        } while (lVar18 != 0);
                      }
                    }
                  }
                }
LAB_141275d50:
                if ((longlong)(int)uStack_140 != 0) {
                  puVar21 = local_148 + (int)uStack_140;
                  puVar26 = local_148;
                  do {
                    local_188 = (longlong *)*puVar26;
                    if (local_188 != (longlong *)0x0) {
                      if ((int)plStack_b0 != local_84) {
                        uVar24 = ((uint)((ulonglong)local_188 >> 0x14) & 0xffff ^
                                 (uint)((ulonglong)local_188 >> 4)) * -0x7a143595;
                        uVar24 = (uVar24 >> 0xd ^ uVar24) * -0x3d4d51cb;
                        puVar17 = local_78;
                        if (local_78 == (undefined1 *)0x0) {
                          puVar17 = local_80;
                        }
                        for (iVar27 = *(int *)(puVar17 +
                                              (ulonglong)(local_70 - 1U & (uVar24 >> 0x10 ^ uVar24))
                                              * 4); iVar27 != -1;
                            iVar27 = (int)local_b8[(longlong)iVar27 * 4 + 3]) {
                          if ((longlong *)local_b8[(longlong)iVar27 * 4] == local_188)
                          goto LAB_1412768e5;
                        }
                      }
                      local_e0 = &local_188;
                      local_d8 = &local_110;
                      FUN_148d2876e(&local_b8,&local_198,&local_e0);
                    }
LAB_1412768e5:
                    puVar26 = puVar26 + 1;
                  } while (puVar26 != puVar21);
                }
              }
              plVar11 = local_108;
              if (local_148 != (undefined8 *)0x0) {
                FUN_1400020a8(local_148);
                plVar11 = local_108;
              }
            }
            if (plVar11 != (longlong *)0x0) {
              LOCK();
              plVar16 = plVar11 + 1;
              *(int *)plVar16 = (int)*plVar16 + -1;
              UNLOCK();
              if ((int)*plVar16 == 0) {
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
            plVar10 = plVar10 + 2;
          } while (plVar10 != plVar25);
        }
        if ((int)plStack_b0 - local_84 == *(int *)(param_1 + 0x188) - *(int *)(param_1 + 0x1b4)) {
          local_110 = (undefined8 ******)&DAT_100000000;
          local_100 = 0xffffffff;
          local_f8 = 0;
          iVar27 = 0;
          local_108 = local_a8;
          if (local_90 != 0) {
            FUN_1449c0562(&local_110);
            iVar27 = local_90;
          }
          local_c8 = local_100;
          lVar8 = local_c8;
          local_c0 = local_f8;
          local_bc = local_f4;
          local_d8 = (undefined8 *******)local_110;
          local_d0 = local_108;
          local_c8._4_4_ = (int)((ulonglong)local_100 >> 0x20);
          local_e0 = &local_b8;
          if ((local_c8._4_4_ != iVar27) || (local_108 != local_a8)) {
            local_1e0 = param_1 + 0x1b8;
            iVar7 = local_c8._4_4_;
            local_c8 = lVar8;
            do {
              if (*(int *)(param_1 + 0x188) == *(int *)(param_1 + 0x1b4)) goto LAB_141275f80;
              plVar2 = *local_e0;
              lVar18 = (longlong)iVar7;
              uVar3 = plVar2[lVar18 * 4];
              uVar24 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
              uVar24 = (uVar24 >> 0xd ^ uVar24) * -0x3d4d51cb;
              lVar8 = *(longlong *)(param_1 + 0x1c0);
              if (*(longlong *)(param_1 + 0x1c0) == 0) {
                lVar8 = local_1e0;
              }
              iVar7 = *(int *)(lVar8 + (ulonglong)
                                       (*(int *)(param_1 + 0x1c8) - 1U & (uVar24 >> 0x10 ^ uVar24))
                                       * 4);
              if (iVar7 == -1) goto LAB_141275f80;
              lVar8 = *(longlong *)(param_1 + 0x180);
              while (lVar9 = lVar8 + (longlong)iVar7 * 0x20,
                    *(ulonglong *)(lVar8 + (longlong)iVar7 * 0x20) != uVar3) {
                iVar7 = *(int *)(lVar9 + 0x18);
                if (iVar7 == -1) goto LAB_141275f80;
              }
              if ((lVar9 == 0) || ((undefined8 *)(lVar9 + 8) == (undefined8 *)0x0))
              goto LAB_141275f80;
              plVar10 = *(longlong **)(lVar9 + 0x10);
              if (plVar10 == (longlong *)0x0) {
LAB_141275ea9:
                plVar10 = (longlong *)0x0;
              }
              else {
                iVar7 = (int)plVar10[1];
                do {
                  if (iVar7 == 0) goto LAB_141275ea9;
                  LOCK();
                  iVar5 = (int)plVar10[1];
                  bVar28 = iVar7 == iVar5;
                  if (bVar28) {
                    *(int *)(plVar10 + 1) = iVar7 + 1;
                    iVar5 = iVar7;
                  }
                  iVar7 = iVar5;
                  UNLOCK();
                } while (!bVar28);
              }
              local_1e8 = *(undefined8 ******)(lVar9 + 8);
              plVar25 = (longlong *)plVar2[lVar18 * 4 + 2];
              if (plVar25 == (longlong *)0x0) {
LAB_141275ee5:
                local_1f0 = (undefined8 ******)0x0;
              }
              else {
                iVar7 = (int)plVar25[1];
                do {
                  if (iVar7 == 0) goto LAB_141275ee5;
                  LOCK();
                  iVar5 = (int)plVar25[1];
                  bVar28 = iVar7 == iVar5;
                  if (bVar28) {
                    *(int *)(plVar25 + 1) = iVar7 + 1;
                    iVar5 = iVar7;
                  }
                  iVar7 = iVar5;
                  UNLOCK();
                } while (!bVar28);
                local_1f0 = (undefined8 *****)plVar2[lVar18 * 4 + 1];
                LOCK();
                plVar2 = plVar25 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
                  (**(code **)*plVar25)(plVar25);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar25 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar25 + 0x10))(plVar25);
                  }
                }
              }
              if (plVar10 == (longlong *)0x0) {
                local_1e8 = (undefined8 ******)0x0;
              }
              else {
                LOCK();
                plVar2 = plVar10 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
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
              if (local_1e8 != local_1f0) goto LAB_141275f80;
              local_c8 = CONCAT44(local_c8._4_4_,(uint)local_c8 & ~local_d8._4_4_);
              FUN_1449c0562(&local_d8);
              iVar7 = local_c8._4_4_;
            } while (((local_c8._4_4_ != iVar27) || (local_d0 != local_a8)) ||
                    (lVar8 = local_c8, local_e0 != &local_b8));
          }
        }
        else {
LAB_141275f80:
          FUN_148d23074((longlong *)(param_1 + 0x180),&local_b8);
          local_148 = (undefined8 *)0x0;
          uStack_140 = 0;
          local_110 = (undefined8 ******)&DAT_100000000;
          local_100 = 0xffffffff;
          local_f8 = 0;
          iVar27 = 0;
          local_108 = local_a8;
          if (local_90 != 0) {
            FUN_1449c0562(&local_110);
            iVar27 = local_90;
          }
          local_c8 = local_100;
          lVar8 = local_c8;
          local_c0 = local_f8;
          local_bc = local_f4;
          local_d8 = (undefined8 *******)local_110;
          local_d0 = local_108;
          local_e0 = &local_b8;
          local_c8._4_4_ = (int)((ulonglong)local_100 >> 0x20);
          if ((local_c8._4_4_ != iVar27) || (local_108 != local_a8)) {
            iVar7 = local_c8._4_4_;
            local_c8 = lVar8;
            do {
              plVar2 = *local_e0;
              lVar18 = (longlong)iVar7;
              lVar8 = plVar2[lVar18 * 4];
              local_110 = (undefined8 *******)0x0;
              plVar10 = (longlong *)plVar2[lVar18 * 4 + 2];
              local_108 = plVar10;
              if (plVar10 == (longlong *)0x0) {
LAB_141276168:
                plVar10 = (longlong *)0x0;
              }
              else {
                iVar7 = (int)plVar10[1];
                do {
                  if (iVar7 == 0) {
                    local_108 = (longlong *)0x0;
                    goto LAB_141276168;
                  }
                  LOCK();
                  iVar5 = (int)plVar10[1];
                  bVar28 = iVar7 == iVar5;
                  if (bVar28) {
                    *(int *)(plVar10 + 1) = iVar7 + 1;
                    iVar5 = iVar7;
                  }
                  iVar7 = iVar5;
                  UNLOCK();
                } while (!bVar28);
                if (plVar10 == (longlong *)0x0) goto LAB_141276168;
                local_110 = (undefined8 ******)plVar2[lVar18 * 4 + 1];
              }
              if (((undefined8 *******)local_110 != (undefined8 *******)0x0) && (lVar8 != 0)) {
                plVar10 = (longlong *)FUN_14001cc68(0xf8,0x10);
                plVar10[1] = (longlong)&DAT_100000001;
                *plVar10 = (longlong)&PTR_FUN_14b96dc90;
                plVar2 = plVar10 + 2;
                FUN_148848300(plVar2,&local_110);
                local_188 = plVar2;
                plStack_180 = plVar10;
                FUN_148d28ccc(&local_188,plVar2);
                puVar19 = *(undefined4 **)(lVar8 + 8);
                if (puVar19 == (undefined4 *)0x0) {
                  puVar19 = &DAT_14c9485f0;
                }
                FUN_148848384(plVar2,puVar19);
                uVar3 = uStack_140;
                if (plVar10 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
                  UNLOCK();
                }
                lVar8 = (longlong)(int)uStack_140;
                uVar24 = (int)uStack_140 + 1;
                uStack_140 = CONCAT44(uStack_140._4_4_,uVar24);
                if (uStack_140._4_4_ < uVar24) {
                  FUN_148d28d74(&local_148,uVar3 & 0xffffffff);
                }
                local_148[lVar8 * 2] = plVar2;
                local_148[lVar8 * 2 + 1] = plVar10;
                if (plVar10 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
                  UNLOCK();
                  LOCK();
                  plVar2 = plVar10 + 1;
                  *(int *)plVar2 = (int)*plVar2 + -1;
                  UNLOCK();
                  if ((int)*plVar2 == 0) {
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
                plVar2 = plStack_180;
                plVar10 = local_108;
                if (plStack_180 != (longlong *)0x0) {
                  LOCK();
                  plVar25 = plStack_180 + 1;
                  *(int *)plVar25 = (int)*plVar25 + -1;
                  UNLOCK();
                  if ((int)*plVar25 == 0) {
                    (**(code **)*plStack_180)(plStack_180);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar2 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    plVar10 = local_108;
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar2 + 0x10))(plVar2);
                      plVar10 = local_108;
                    }
                  }
                }
              }
              if (plVar10 != (longlong *)0x0) {
                LOCK();
                plVar2 = plVar10 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
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
              local_c8 = CONCAT44(local_c8._4_4_,(uint)local_c8 & ~local_d8._4_4_);
              FUN_1449c0562(&local_d8);
              iVar7 = local_c8._4_4_;
              lVar8 = local_c8;
            } while (local_e0 != &local_b8 || (local_d0 != local_a8 || local_c8._4_4_ != iVar27));
          }
          local_c8 = lVar8;
          FUN_148852d80(param_1,&local_148);
          FUN_1457ec251(local_148,uStack_140 & 0xffffffff);
          lVar8 = local_c8;
          if (local_148 != (undefined8 *)0x0) {
            FUN_1400020a8();
            lVar8 = local_c8;
          }
        }
        local_c8 = lVar8;
        FUN_141276f16(param_1,local_128);
        FUN_141276ec9(local_138,uStack_130 & 0xffffffff);
        if (local_138 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        local_70 = 0;
        if (local_78 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        FUN_141276e92(&local_b8);
        if (local_128[0] != 0) {
          FUN_1400020a8();
        }
      }
      LOCK();
      plVar2 = plVar23 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar23)(plVar23);
        LOCK();
        piVar1 = (int *)((longlong)plVar23 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar23 + 0x10))(plVar23);
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141276e92 FUN_141276e92 body=55 status=ok
// SIG undefined FUN_141276e92(void)

void FUN_141276e92(longlong *param_1)

{
  FUN_141276f62(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 141276ec9 FUN_141276ec9 body=77 status=ok
// SIG undefined FUN_141276ec9(void)

void FUN_141276ec9(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 141276f16 FUN_141276f16 body=76 status=ok
// SIG undefined FUN_141276f16(void)

void FUN_141276f16(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 0x108) == *(int *)(param_2 + 1)) &&
     (cVar1 = FUN_140188e04(*(undefined8 *)(param_1 + 0x100),*param_2), cVar1 != '\0')) {
    return;
  }
  FUN_140d7e6a6((undefined8 *)(param_1 + 0x100),param_2);
  *(undefined1 *)(param_1 + 0xf8) = 1;
  return;
}



// FUNCTION 141276f62 FUN_141276f62 body=391 status=ok
// SIG undefined FUN_141276f62(void)

void FUN_141276f62(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
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
      plVar3 = *(longlong **)(*local_70 + 0x10 + (longlong)iStack_54 * 0x20);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
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
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar5 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar5) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar4 = 0x80;
    if (0x80 < (int)uVar5) {
      uVar4 = uVar5;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412770ea FUN_1412770ea body=106 status=ok
// SIG undefined FUN_1412770ea(void)

undefined4 FUN_1412770ea(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  int *piVar3;
  uint *puVar4;
  
  if (*(char *)(param_1 + 0x78) == '\x01') {
    puVar4 = (uint *)(param_1 + 0x48);
    piVar3 = (int *)(param_1 + 0x50);
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar4 = (uint *)&DAT_14c948618;
    piVar3 = &DAT_14c948620;
    if ((((*(int *)(lVar1 + 0x30) != 0) && (*(int *)(lVar1 + 0x34) != 0)) &&
        (*(int *)(lVar1 + 0x30) != DAT_14c948000)) && (1 < *(int *)(lVar1 + 0x34))) {
      puVar4 = (uint *)(*(longlong *)(lVar1 + 0x48) + 0xc);
      piVar3 = (int *)(*(longlong *)(lVar1 + 0x48) + 0x14);
    }
  }
  uVar2 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0xd8) ^ *puVar4;
  return CONCAT31((int3)(uVar2 >> 8),
                  *(int *)(*(longlong *)(param_1 + 0x10) + 0xe0) == *piVar3 && uVar2 == 0);
}



// FUNCTION 141277154 FUN_141277154 body=727 status=ok
// SIG undefined FUN_141277154(void)

void FUN_141277154(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  int local_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 == 0) {
    iVar3 = *(int *)(param_1 + 0xf0);
    if ((longlong)iVar3 != 0) {
      lVar5 = *(longlong *)(param_1 + 0xe8);
      lVar9 = 0;
      do {
        local_88 = *(undefined8 *)(lVar5 + lVar9);
        local_80 = *(undefined4 *)(lVar5 + 8 + lVar9);
        FUN_14127742c(param_1,&local_58,&local_88);
        lVar7 = local_58;
        if (local_58 != 0) {
          plVar8 = (longlong *)CONCAT44(uStack_4c,local_50);
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
            UNLOCK();
          }
          iVar4 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar4 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar4 + 1U) {
            FUN_1412774b8(param_3,iVar4);
          }
          lVar6 = *param_3;
          *(longlong *)(lVar6 + (longlong)iVar4 * 0x10) = lVar7;
          *(longlong **)(lVar6 + 8 + (longlong)iVar4 * 0x10) = plVar8;
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
        }
        plVar8 = (longlong *)CONCAT44(uStack_4c,local_50);
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
        lVar9 = lVar9 + 0xc;
      } while ((longlong)iVar3 * 0xc != lVar9);
    }
  }
  else {
    plVar8 = (longlong *)FUN_140e06fb1(param_2);
    if (plVar8 != (longlong *)0x0) {
      local_90 = param_3;
      (**(code **)(*plVar8 + 0x10))(plVar8,&local_58);
      lVar5 = local_58;
      if ((longlong)local_50 != 0) {
        lVar9 = 0;
        do {
          local_78 = *(undefined8 *)(lVar5 + lVar9);
          local_70 = *(undefined4 *)(lVar5 + 8 + lVar9);
          FUN_14127742c(param_1,&local_68,&local_78);
          lVar7 = local_68;
          if (local_68 != 0) {
            local_98 = local_60;
            if (local_60 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_60 + 1) = (int)local_60[1] + 1;
              UNLOCK();
            }
            iVar3 = (int)local_90[1];
            *(uint *)(local_90 + 1) = iVar3 + 1U;
            if (*(uint *)((longlong)local_90 + 0xc) < iVar3 + 1U) {
              FUN_1412774b8(local_90,iVar3);
            }
            plVar8 = local_98;
            lVar6 = *local_90;
            *(longlong *)(lVar6 + (longlong)iVar3 * 0x10) = lVar7;
            *(longlong **)(lVar6 + 8 + (longlong)iVar3 * 0x10) = local_98;
            if (local_98 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_98 + 1) = (int)local_98[1] + 1;
              UNLOCK();
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
                  (**(code **)(*local_98 + 0x10))();
                }
              }
            }
          }
          plVar8 = local_60;
          if (local_60 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_60 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_60)(local_60);
              LOCK();
              piVar2 = (int *)((longlong)plVar8 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar8 + 0x10))(plVar8);
              }
            }
          }
          lVar9 = lVar9 + 0xc;
        } while ((longlong)local_50 * 0xc != lVar9);
      }
      if (local_58 != 0) {
        FUN_1400020a8(local_58);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14127742c FUN_14127742c body=139 status=ok
// SIG undefined FUN_14127742c(void)

undefined8 * FUN_14127742c(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_3[2] == 0) {
    uVar4 = *param_3;
  }
  else {
    uVar4 = FUN_144a78877(*param_3,param_3[2]);
  }
  iVar3 = FUN_140cf42ca((longlong *)(param_1 + 0x20),uVar4,param_3);
  if (iVar3 != -1) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar1 = lVar2 + (longlong)iVar3 * 0x28;
    if ((lVar1 != 0) && (lVar2 + (longlong)iVar3 * 0x28 != -0x10)) {
      *param_2 = *(undefined8 *)(lVar1 + 0x10);
      lVar1 = *(longlong *)(lVar1 + 0x18);
      param_2[1] = lVar1;
      if (lVar1 == 0) {
        return param_2;
      }
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1412774b8 FUN_1412774b8 body=269 status=ok
// SIG undefined FUN_1412774b8(void)

void FUN_1412774b8(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1412775c6 FUN_1412775c6 body=1517 status=ok
// SIG undefined FUN_1412775c6(void)

void FUN_1412775c6(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  int local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 local_19;
  undefined7 uStack_18;
  undefined1 uStack_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uStack_18 = 0;
  uStack_11 = 0;
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
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_18);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_18);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_18);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_18 = (undefined7)uVar2;
      uStack_11 = (undefined1)((ulonglong)uVar2 >> 0x38);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_18);
    }
  }
  local_19 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_140a4831c;
      local_58 = 0x1000000008001;
      local_50 = 0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_19);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_19);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_19 = (undefined1)uVar2;
      uStack_18 = (undefined7)((ulonglong)uVar2 >> 8);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_19);
    }
  }
  uStack_28 = 0;
  uStack_24 = 0;
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
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_28);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_28 = (undefined4)uVar2;
      uStack_24 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_28);
    }
  }
  local_2c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_14067a048;
      local_50 = 0;
      local_58 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_2c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_2c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_2c = (int)uVar2;
      uStack_28 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_2c);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_141277bb4(CONCAT17(uStack_11,uStack_18),local_19,CONCAT44(uStack_24,uStack_28),local_2c != 0);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141277bb4 FUN_141277bb4 body=344 status=ok
// SIG undefined FUN_141277bb4(void)

void FUN_141277bb4(longlong param_1,byte param_2,undefined8 param_3,char param_4)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  undefined8 local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_30 = param_3;
  if (param_1 != 0) {
    if (DAT_14cba8288 == 0) {
      local_50 = &local_28;
      local_28 = FUN_141864c34;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_1464cee30;
      local_58 = &LAB_148bfac22;
      local_60 = &LAB_140f21842;
      local_68 = &DAT_149e063b2;
      local_70 = 0;
      local_78 = 0x10000004;
      local_80 = 0x10;
      local_88 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
      if (param_2 == 0) {
        param_1 = param_1 + 0x7c78;
      }
      else {
        param_1 = param_1 + (ulonglong)param_2 * 0x28 + 0x7ca0;
      }
      if (param_4 == '\0') {
        FUN_1400bc8c2(param_1,&local_30);
      }
      else {
        FUN_1400bc96c();
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141277d0e FUN_141277d0e body=169 status=ok
// SIG undefined FUN_141277d0e(void)

void FUN_141277d0e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b99fb40;
  plVar3 = (longlong *)param_1[7];
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
  *param_1 = &PTR_FUN_14b421610;
  plVar3 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_141277d8c;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_141277d8c:
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000141277da4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 141277db8 FUN_141277db8 body=616 status=ok
// SIG undefined FUN_141277db8(void)

longlong * FUN_141277db8(longlong param_1,longlong *param_2,longlong param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined1 auStack_b8 [40];
  longlong local_90;
  longlong local_88;
  longlong local_80;
  int local_78;
  int local_4c;
  undefined1 local_48 [8];
  undefined1 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar3 = (uint)param_3;
  iVar8 = (int)((ulonglong)param_3 >> 0x20);
  uVar1 = (uint)((ulonglong)param_3 >> 0x10);
  local_88 = param_3;
  if (*(int *)(param_1 + 400) != *(int *)(param_1 + 0x1bc)) {
    lVar4 = param_1 + 0x1c0;
    if (*(longlong *)(param_1 + 0x1c8) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x1c8);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x1d0) - 1U &
                             iVar8 + (uVar3 << 0x10 | uVar3 & 0xffff) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + ((uVar3 & 0xffff) >> 4)) * 4);
    if (iVar5 != -1) {
      lVar4 = *(longlong *)(param_1 + 0x188);
      iVar7 = iVar5;
      do {
        if (*(longlong *)(lVar4 + (longlong)iVar7 * 0x18) == param_3) goto LAB_141277ebc;
        iVar7 = *(int *)(lVar4 + (longlong)iVar7 * 0x18 + 0x10);
      } while (iVar7 != -1);
    }
  }
  if (*(longlong *)(DAT_14cad6230 + 0xb8) != *(longlong *)(param_1 + 0x150)) {
    FUN_1434cfc50(*(undefined8 *)(param_1 + 0x148),&local_80,param_1 + 0x150);
    if (local_78 != local_4c) {
      puVar9 = local_40;
      if (local_40 == (undefined1 *)0x0) {
        puVar9 = local_48;
      }
      iVar8 = *(int *)(puVar9 + (ulonglong)
                                (local_38 - 1U &
                                iVar8 + (uVar3 << 0x10 | uVar3 & 0xffff) +
                                (uVar1 << 0x13 | uVar1 & 0xffff) + ((uVar3 & 0xffff) >> 4)) * 4);
      for (iVar5 = iVar8; iVar5 != -1; iVar5 = *(int *)(local_80 + (longlong)iVar5 * 0x18 + 0x10)) {
        if (*(longlong *)(local_80 + (longlong)iVar5 * 0x18) == param_3) goto LAB_141277fb9;
      }
    }
    bVar2 = false;
    goto LAB_141277f46;
  }
  goto LAB_141277f6a;
  while (iVar5 = (int)plVar6[2], iVar5 != -1) {
LAB_141277ebc:
    plVar6 = (longlong *)(lVar4 + (longlong)iVar5 * 0x18);
    if (*plVar6 == param_3) goto LAB_141277fde;
  }
  plVar6 = (longlong *)0x0;
LAB_141277fde:
  local_90 = plVar6[1];
  goto LAB_141277fe2;
  while (iVar8 = (int)plVar6[2], iVar8 != -1) {
LAB_141277fb9:
    plVar6 = (longlong *)(local_80 + (longlong)iVar8 * 0x18);
    if (*plVar6 == param_3) goto LAB_141278012;
  }
  plVar6 = (longlong *)0x0;
LAB_141278012:
  *param_2 = plVar6[1];
  bVar2 = true;
LAB_141277f46:
  local_38 = 0;
  if (local_40 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140105116(&local_80);
  if (bVar2) goto LAB_141277fe5;
LAB_141277f6a:
  FUN_1434d0480(*(undefined8 *)(param_1 + 0x148),&local_90,&local_88);
  if (local_90 == 0) {
    FUN_1412d7cdc(param_1,&local_80,param_3);
    if ((longlong)local_78 < 1) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(longlong *)(local_80 + -8 + (longlong)local_78 * 8);
    }
    *param_2 = lVar4;
    if (local_80 != 0) {
      FUN_1400020a8();
    }
  }
  else {
LAB_141277fe2:
    *param_2 = local_90;
  }
LAB_141277fe5:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141278022 FUN_141278022 body=297 status=ok
// SIG undefined FUN_141278022(void)

undefined8 FUN_141278022(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_141278144;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_141278144;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_141278144:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1412780ef;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3);
      uVar6 = 1;
      goto LAB_1412780ef;
    }
  }
  uVar6 = 0;
LAB_1412780ef:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14127814c FUN_14127814c body=8562 status=ok
// SIG undefined FUN_14127814c(void)

void FUN_14127814c(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  code **ppcVar2;
  ulonglong *puVar3;
  code *pcVar4;
  ushort uVar5;
  undefined4 *puVar6;
  void *_Src;
  longlong *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  code **ppcVar11;
  char cVar12;
  uint uVar13;
  undefined4 uVar14;
  longlong lVar15;
  undefined8 uVar16;
  longlong lVar17;
  uint *puVar18;
  ulonglong uVar19;
  longlong *plVar20;
  longlong lVar21;
  ulonglong uVar22;
  code *pcVar23;
  byte bVar24;
  int iVar25;
  undefined1 *puVar26;
  ulonglong uVar27;
  longlong lVar28;
  int *piVar29;
  ulonglong *puVar30;
  uint uVar31;
  ulonglong uVar32;
  int iVar33;
  uint uVar34;
  int iVar35;
  int iVar36;
  uint uVar37;
  int iVar38;
  longlong *plVar39;
  undefined1 auStack_258 [32];
  int *local_238;
  uint local_230;
  undefined4 local_228;
  undefined8 local_220;
  undefined2 *local_218;
  undefined1 *local_210;
  undefined1 *local_208;
  code **local_200;
  undefined1 *local_1f8;
  code *local_1f0;
  longlong *local_1e0;
  int local_1d4;
  longlong local_1d0;
  uint local_1c4;
  ulonglong local_1c0;
  ulonglong local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  longlong *local_1a0;
  uint *local_198;
  ulonglong local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined1 local_178 [4];
  undefined8 local_174;
  undefined4 local_16c;
  ulonglong local_168;
  int local_160 [4];
  ulonglong local_150;
  uint local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 local_13c;
  ulonglong local_138;
  undefined8 local_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  ulonglong local_120;
  int local_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  longlong *local_108;
  int local_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  code *local_d8;
  code **local_d0;
  ulonglong *local_c8;
  uint *local_c0;
  ulonglong *local_b8;
  int *local_b0;
  ulonglong *local_a8;
  undefined1 *local_a0;
  code *local_98;
  undefined8 uStack_90;
  uint local_88 [2];
  longlong local_80;
  uint *local_78;
  int local_70;
  uint local_6c;
  int iStack_68;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_258;
  if (((*param_3 == DAT_14cb88920) && (1 < *(int *)(param_2 + 4) || 0 < *(int *)(param_2 + 0x24)))
     && (4 < *(int *)(param_2 + 4))) {
    lVar28 = *(longlong *)(param_2 + 0x18);
    local_f0 = *(undefined4 *)(lVar28 + 0x20);
    local_f8 = *(undefined8 *)(lVar28 + 0x18);
    local_e8 = local_f8;
    local_e0 = local_f0;
    FUN_1448075d0(&local_98);
    lVar15 = FUN_140fa5e12(&local_98);
    if (local_80 != 0) {
      FUN_1400020a8();
    }
    if (lVar15 != 0) {
      if ((*(longlong *)(lVar15 + 0x4f0) == 0) || ((longlong)*(int *)(lVar15 + 0x4f8) == -1)) {
        uVar16 = 0;
      }
      else {
        uVar16 = **(undefined8 **)
                   (*(longlong *)(*(longlong *)(lVar15 + 0x4f0) + 0x50) +
                   (longlong)*(int *)(lVar15 + 0x4f8) * 8);
      }
      if ((DAT_14cbd5ef8 == (int)uVar16) && (DAT_14cbd5efc == (int)((ulonglong)uVar16 >> 0x20))) {
        uVar16 = FUN_1400d7050(param_1 + 6);
        lVar17 = FUN_140e06fb1(uVar16);
        if (lVar17 != 0) {
          FUN_1405f62be(lVar17,&local_108);
          if (local_108 != (longlong *)0x0) {
            (**(code **)(*local_108 + 0x78))(local_108,&local_118,&local_e8);
            if (CONCAT44(uStack_114,local_118) != 0) {
              local_98 = (code *)0x14b9a745b;
              uStack_90._0_5_ = 0xe;
              local_1d0 = lVar15;
              local_1a8 = param_2;
              local_1a0 = param_3;
              uVar13 = FUN_14001a6c0(&local_98,1);
              local_120 = (ulonglong)uVar13;
              local_130._4_4_ = 0;
              uStack_128 = 0;
              FUN_14052b5e0(&local_130,&DAT_149e02088,0);
              uStack_124 = 0;
              local_98 = (code *)0x14b9a746a;
              uStack_90._0_5_ = 10;
              local_d8 = (code *)&local_120;
              local_d0 = (code **)&local_130;
              uVar13 = FUN_14001a6c0(&local_98,1);
              local_138 = (ulonglong)uVar13;
              uStack_144 = 0;
              uStack_140 = 0;
              FUN_14052b5e0(&local_148,&DAT_149e02088,0);
              local_13c = 0;
              local_98 = (code *)0x14b9a7475;
              uStack_90._0_5_ = 0xc;
              local_c8 = &local_138;
              local_c0 = &local_148;
              uVar13 = FUN_14001a6c0(&local_98,1);
              local_150 = (ulonglong)uVar13;
              local_160[1] = 0;
              local_160[2] = 0;
              FUN_14052b5e0(local_160,&DAT_149e02088,0);
              local_160[3] = 0;
              local_98 = (code *)0x14b9a7571;
              uStack_90 = CONCAT35(uStack_90._5_3_,6);
              local_b8 = &local_150;
              local_b0 = local_160;
              uVar13 = FUN_14001a6c0(&local_98,1);
              local_168 = (ulonglong)uVar13;
              local_174 = 0;
              FUN_14052b5e0(local_178,&DAT_149e02088,0);
              local_16c = 0;
              local_78 = (uint *)0x0;
              local_70 = 0;
              local_98 = (code *)0x0;
              uStack_90 = 0;
              local_6c = 0x80;
              iStack_68 = -1;
              local_64 = 0;
              local_58 = (undefined1 *)0x0;
              local_50 = 0;
              local_a8 = &local_168;
              local_a0 = local_178;
              FUN_1405b3ec2(&local_98,4);
              uVar19 = uStack_90;
              iVar35 = (int)uStack_90;
              lVar15 = (longlong)(int)uStack_90;
              uStack_90 = CONCAT44(uStack_90._4_4_,(int)uStack_90 + 4);
              if ((uint)(uStack_90._4_4_ - iVar35) < 4) {
                FUN_1405b363e(&local_98,uVar19 & 0xffffffff);
              }
              lVar17 = local_1d0;
              if (iVar35 < 4) {
                pcVar23 = local_98 + 100;
                lVar21 = 4;
                do {
                  lVar1 = lVar21 + -1;
                  if (local_64 == 0) {
                    iVar35 = (int)lVar21 + -1;
                  }
                  else {
                    *(int *)(local_98 + (longlong)iStack_68 * 0x20) = (int)lVar21 + -1;
                    iVar35 = (int)lVar1;
                  }
                  *(undefined4 *)(pcVar23 + -4) = 0xffffffff;
                  iVar33 = -1;
                  if (0 < local_64) {
                    iVar33 = iStack_68;
                  }
                  *(int *)pcVar23 = iVar33;
                  iStack_68 = iVar35;
                  local_64 = local_64 + 1;
                  pcVar23 = pcVar23 + -0x20;
                  lVar21 = lVar1;
                } while (lVar15 < lVar1);
              }
              local_70 = 4;
              puVar18 = local_78;
              local_1b0 = lVar28;
              if (local_6c + 0x1f < 0x20) {
                if (local_78 == (uint *)0x0) {
                  puVar18 = (uint *)0x0;
                }
                else {
                  FUN_1446efa72(&local_78,0,0,4);
                  puVar18 = local_78;
                }
                local_6c = 0x20;
              }
              if (puVar18 == (uint *)0x0) {
                puVar18 = local_88;
              }
              *puVar18 = 0;
              iVar35 = local_70 + 0x1f;
              if (-1 < local_70) {
                iVar35 = local_70;
              }
              if (local_70 % 0x20 != 0) {
                puVar18 = local_78;
                if (local_78 == (uint *)0x0) {
                  puVar18 = local_88;
                }
                bVar24 = -(char)(local_70 % 0x20);
                puVar18[iVar35 >> 5] = (puVar18[iVar35 >> 5] << (bVar24 & 0x1f)) >> (bVar24 & 0x1f);
              }
              local_1e0 = param_1;
              if (local_50 < 0x10) {
                local_50 = 0x10;
                FUN_144264586();
              }
              lVar28 = 0;
              do {
                iVar35 = iStack_68;
                uVar19 = uStack_90;
                plVar20 = *(longlong **)((longlong)&local_d8 + lVar28);
                puVar6 = *(undefined4 **)((longlong)&local_d0 + lVar28);
                if (local_64 == 0) {
                  iVar35 = (int)uStack_90;
                  uStack_90 = CONCAT44(uStack_90._4_4_,(int)uStack_90 + 1);
                  if (uStack_90._4_4_ == iVar35) {
                    FUN_1405b363e(&local_98,uVar19 & 0xffffffff);
                  }
                  iVar33 = local_70;
                  if (local_70 == 0) {
                    iVar36 = -1;
                  }
                  else {
                    iVar36 = local_70 + 0x1e;
                    if (-1 < local_70 + -1) {
                      iVar36 = local_70 + -1;
                    }
                    iVar36 = iVar36 >> 5;
                  }
                  iVar25 = local_70 + 1;
                  iVar38 = local_70 + 0x1f;
                  if (-1 < local_70) {
                    iVar38 = local_70;
                  }
                  if (iVar38 >> 5 == iVar36) {
                    local_70 = iVar25;
                  }
                  else {
                    if ((int)local_6c <= local_70) {
                      if (local_70 + 0x20U < 0xa0) {
                        local_6c = 0x80;
                      }
                      else {
                        uVar13 = local_70 + 0x20U >> 5;
                        if (local_6c + 0x1f < 0xa0) {
                          uVar31 = 4;
                          if (4 < uVar13) {
                            uVar31 = uVar13;
                          }
                        }
                        else {
                          uVar31 = uVar13 + (uVar13 * 3 >> 3) + 0x10;
                        }
                        uVar19 = (ulonglong)(uVar31 * 4);
                        if (DAT_14c872d28 != (longlong *)0x0) {
                          if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                            uVar34 = (uint)(uVar19 + 0xf);
                            if (uVar31 < 0x1ffd) {
                              uVar19 = (ulonglong)
                                       (ushort)(&DAT_14c841d90)
                                               [0x32 - (byte)(&DAT_14c841e00)[uVar19 + 0xf >> 4]];
                            }
                            else {
                              uVar22 = (ulonglong)(uVar34 & 0xfffffff0);
                              if (uVar22 < 0x7ff1) {
                                bVar24 = (&DAT_14c841e00)[uVar34 >> 4];
                                uVar27 = 0x32;
                                if (0x32 < bVar24) {
                                  uVar27 = (ulonglong)bVar24;
                                }
                                uVar32 = 0x32 - (ulonglong)bVar24;
                                do {
                                  uVar19 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar32 & 0xffffffff];
                                  if (((&DAT_14c841d90)[uVar32 & 0xffffffff] & 0xf) == 0)
                                  goto LAB_141278a42;
                                  lVar15 = uVar27 + 1 + uVar32;
                                  uVar32 = uVar32 - 1;
                                } while (lVar15 != 0x33);
                              }
                              uVar19 = (ulonglong)DAT_14c841df8;
                              if (DAT_14c841df8 < 0x11) {
                                uVar19 = 0x10;
                              }
                              uVar19 = -uVar19 & (uVar22 + uVar19) - 1;
                            }
                          }
                          else {
                            uVar19 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar19,0);
                          }
                        }
LAB_141278a42:
                        iVar36 = (int)(uVar19 >> 2);
                        local_6c = iVar36 << 5;
                        if (iVar36 < (int)uVar13) {
                          local_6c = 0xffffffe0;
                        }
                      }
                      FUN_1446efbd8(local_88,local_70);
                      iVar25 = local_70 + 1;
                    }
                    iVar36 = iVar25 + 0x1f;
                    if (-1 < iVar25) {
                      iVar36 = iVar25;
                    }
                    local_70 = iVar25;
                    if (iVar25 % 0x20 != 0) {
                      puVar18 = local_78;
                      if (local_78 == (uint *)0x0) {
                        puVar18 = local_88;
                      }
                      bVar24 = -(char)(iVar25 % 0x20);
                      puVar18[iVar36 >> 5] =
                           (puVar18[iVar36 >> 5] << (bVar24 & 0x1f)) >> (bVar24 & 0x1f);
                    }
                  }
                  lVar15 = (longlong)iVar35;
                  puVar18 = local_78;
                  if (local_78 == (uint *)0x0) {
                    puVar18 = local_88;
                  }
                  bVar24 = (byte)iVar33 & 0x1f;
                  puVar18[iVar38 >> 5] =
                       puVar18[iVar38 >> 5] & (-2 << bVar24 | 0xfffffffeU >> 0x20 - bVar24);
                  lVar17 = local_1d0;
                }
                else {
                  lVar15 = (longlong)iStack_68;
                  iStack_68 = *(int *)(local_98 + lVar15 * 0x20 + 4);
                  local_64 = local_64 + -1;
                  if (local_64 != 0) {
                    *(undefined4 *)
                     (local_98 + (longlong)*(int *)(local_98 + lVar15 * 0x20 + 4) * 0x20) =
                         0xffffffff;
                  }
                }
                uVar13 = 1 << ((byte)iVar35 & 0x1f);
                puVar18 = local_78;
                if (local_78 == (uint *)0x0) {
                  puVar18 = local_88;
                }
                iVar33 = iVar35 + 0x1f;
                if (-1 < iVar35) {
                  iVar33 = iVar35;
                }
                puVar18[iVar33 >> 5] = puVar18[iVar33 >> 5] | uVar13;
                pcVar23 = local_98 + lVar15 * 0x20;
                lVar21 = *plVar20;
                *(longlong *)(local_98 + lVar15 * 0x20) = lVar21;
                uVar14 = puVar6[1];
                uVar8 = puVar6[2];
                uVar9 = puVar6[3];
                pcVar4 = local_98 + (lVar15 * 4 + 1) * 8;
                *(undefined4 *)pcVar4 = *puVar6;
                *(undefined4 *)(pcVar4 + 4) = uVar14;
                *(undefined4 *)(pcVar4 + 8) = uVar8;
                *(undefined4 *)(pcVar4 + 0xc) = uVar9;
                *(undefined4 *)(local_98 + (lVar15 * 4 + 3) * 8) = 0xffffffff;
                uVar31 = (uint)((ulonglong)lVar21 >> 0x10);
                uVar34 = (uint)lVar21 & 0xffff;
                uVar31 = ((uint)lVar21 << 0x10 | uVar34) + (int)((ulonglong)lVar21 >> 0x20) +
                         (uVar31 << 0x13 | uVar31 & 0xffff) + (uVar34 >> 4);
                uVar34 = (int)uStack_90 - local_64;
                if (1 < uVar34) {
                  puVar26 = local_58;
                  if (local_58 == (undefined1 *)0x0) {
                    puVar26 = local_60;
                  }
                  iVar36 = *(int *)(puVar26 + (ulonglong)(local_50 - 1U & uVar31) * 4);
                  while (iVar36 != -1) {
                    pcVar4 = local_98 + (longlong)iVar36 * 0x20;
                    if (*(longlong *)(local_98 + (longlong)iVar36 * 0x20) == lVar21) {
                      uVar14 = *(undefined4 *)pcVar23;
                      uVar8 = *(undefined4 *)(pcVar23 + 4);
                      uVar9 = *(undefined4 *)(pcVar23 + 8);
                      uVar10 = *(undefined4 *)(pcVar23 + 0xc);
                      *(undefined8 *)(pcVar4 + 0x10) = *(undefined8 *)(pcVar23 + 0x10);
                      *(undefined4 *)pcVar4 = uVar14;
                      *(undefined4 *)(pcVar4 + 4) = uVar8;
                      *(undefined4 *)(pcVar4 + 8) = uVar9;
                      *(undefined4 *)(pcVar4 + 0xc) = uVar10;
                      if (local_64 != 0) {
                        *(int *)(local_98 + (longlong)iStack_68 * 0x20) = iVar35;
                      }
                      *(undefined4 *)(local_98 + (longlong)iVar35 * 0x20) = 0xffffffff;
                      iVar36 = -1;
                      if (0 < local_64) {
                        iVar36 = iStack_68;
                      }
                      *(int *)(local_98 + (longlong)iVar35 * 0x20 + 4) = iVar36;
                      iStack_68 = iVar35;
                      local_64 = local_64 + 1;
                      puVar18 = local_78;
                      if (local_78 == (uint *)0x0) {
                        puVar18 = local_88;
                      }
                      puVar18[iVar33 >> 5] = puVar18[iVar33 >> 5] & (uVar13 ^ 0xffffffff);
                      goto LAB_14127894d;
                    }
                    iVar36 = *(int *)(pcVar4 + 0x18);
                  }
                }
                iVar33 = 1;
                if (3 < uVar34) {
                  uVar19 = (ulonglong)(uVar34 & 0xfffffffe) + 0xf;
                  lVar15 = 0x3f;
                  if (uVar19 != 0) {
                    for (; uVar19 >> lVar15 == 0; lVar15 = lVar15 + -1) {
                    }
                  }
                  iVar33 = 1 << ((byte)lVar15 & 0x1f);
                }
                if (((int)uVar34 < 1) || (iVar33 <= local_50)) {
                  uVar31 = local_50 - 1U & uVar31;
                  *(uint *)(pcVar23 + 0x1c) = uVar31;
                  puVar26 = local_58;
                  if (local_58 == (undefined1 *)0x0) {
                    puVar26 = local_60;
                  }
                  *(undefined4 *)(pcVar23 + 0x18) =
                       *(undefined4 *)
                        (puVar26 + ((longlong)local_50 - 1U & (longlong)(int)uVar31) * 4);
                  puVar26 = local_58;
                  if (local_58 == (undefined1 *)0x0) {
                    puVar26 = local_60;
                  }
                  *(int *)(puVar26 + ((longlong)local_50 - 1U & (longlong)(int)uVar31) * 4) = iVar35
                  ;
                }
                else {
                  local_50 = iVar33;
                  FUN_144264586(&local_98);
                }
LAB_14127894d:
                lVar28 = lVar28 + 0x10;
              } while (lVar28 != 0x40);
              uVar13 = *(uint *)(lVar17 + 0x3d0);
              if (uVar13 == 0) {
                uVar22 = 1;
                iVar35 = 0;
                uVar19 = 0;
                uVar31 = 0;
              }
              else {
                puVar18 = *(uint **)(lVar17 + 0x3c8);
                if (*(uint **)(lVar17 + 0x3c8) == (uint *)0x0) {
                  puVar18 = (uint *)(lVar17 + 0x3b8);
                }
                uVar31 = *puVar18;
                if (uVar31 == 0) {
                  iVar35 = uVar13 + 0x1e;
                  if (-1 < (int)(uVar13 - 1)) {
                    iVar35 = uVar13 - 1;
                  }
                  uVar19 = 0;
                  uVar22 = (ulonglong)(uint)(iVar35 >> 5);
                  if (iVar35 >> 5 < 1) {
                    uVar22 = uVar19;
                  }
                  iVar35 = 0;
                  do {
                    if (uVar22 == uVar19) goto LAB_141278bc8;
                    iVar35 = iVar35 + 0x20;
                    uVar31 = puVar18[uVar19 + 1];
                    uVar19 = uVar19 + 1;
                  } while (uVar31 == 0);
                }
                else {
                  iVar35 = 0;
                  uVar19 = 0;
                }
                uVar22 = (ulonglong)(-uVar31 & uVar31);
                uVar27 = uVar22 * 2 + 1;
                lVar28 = 0x3f;
                if (uVar27 != 0) {
                  for (; uVar27 >> lVar28 == 0; lVar28 = lVar28 + -1) {
                  }
                }
                uVar31 = (iVar35 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
                if ((int)uVar13 <= (int)uVar31) {
                  uVar31 = uVar13;
                }
              }
              if (uVar31 != uVar13) {
                uVar34 = 0xffffffff;
                local_1c0 = (ulonglong)uVar13;
                local_198 = (uint *)(lVar17 + 0x3b8);
                do {
                  plVar20 = local_108;
                  piVar29 = (int *)((longlong)(int)uVar31 * 0x20 + *(longlong *)(lVar17 + 0x3a8));
                  lVar28 = *(longlong *)(CONCAT44(uStack_114,local_118) + 8);
                  uVar16 = *(undefined8 *)(lVar28 + 0x10);
                  local_130._0_4_ = (int)uVar16;
                  local_130._4_4_ = (int)((ulonglong)uVar16 >> 0x20);
                  uStack_128 = *(undefined4 *)(lVar28 + 0x18);
                  local_1d4 = iVar35;
                  local_1c4 = uVar34;
                  local_1b8 = uVar22;
                  local_190 = uVar19;
                  if ((*(code **)(lVar17 + 0x4d8) == (code *)0x0 & *(byte *)(lVar17 + 0x750)) == 1)
                  {
                    uStack_140 = DAT_14cb88800;
                    local_148 = (uint)DAT_14cb887f8;
                    uStack_144 = (undefined4)((ulonglong)DAT_14cb887f8 >> 0x20);
                  }
                  else {
                    local_d8 = *(code **)(lVar17 + 0x4d8);
                    FUN_1401533ba(&local_148,&local_d8,1);
                  }
                  local_238 = piVar29;
                  (**(code **)(*plVar20 + 0x80))(plVar20,&local_d8,&local_148,&local_130);
                  iVar35 = local_70;
                  if (local_d8 != (code *)0x0) {
                    if (local_70 == 0) {
                      uVar22 = 1;
                      uVar19 = 0;
                      iVar36 = 0;
                      iVar33 = 0;
                    }
                    else {
                      puVar18 = local_78;
                      if (local_78 == (uint *)0x0) {
                        puVar18 = local_88;
                      }
                      uVar13 = *puVar18;
                      if (uVar13 == 0) {
                        iVar33 = local_70 + 0x1e;
                        if (-1 < local_70 + -1) {
                          iVar33 = local_70 + -1;
                        }
                        uVar19 = 0;
                        uVar22 = (ulonglong)(uint)(iVar33 >> 5);
                        if (iVar33 >> 5 < 1) {
                          uVar22 = uVar19;
                        }
                        iVar36 = 0;
                        do {
                          if (uVar22 == uVar19) goto LAB_141278f39;
                          iVar36 = iVar36 + 0x20;
                          uVar13 = puVar18[uVar19 + 1];
                          uVar19 = uVar19 + 1;
                        } while (uVar13 == 0);
                      }
                      else {
                        uVar19 = 0;
                        iVar36 = 0;
                      }
                      uVar22 = (ulonglong)(-uVar13 & uVar13);
                      uVar27 = uVar22 * 2 + 1;
                      lVar28 = 0x3f;
                      if (uVar27 != 0) {
                        for (; uVar27 >> lVar28 == 0; lVar28 = lVar28 + -1) {
                        }
                      }
                      iVar33 = (iVar36 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
                      if (local_70 <= iVar33) {
                        iVar33 = local_70;
                      }
                    }
                    if (iVar33 != local_70) {
                      uVar13 = 0xffffffff;
                      do {
                        pcVar23 = local_98;
                        lVar28 = (longlong)iVar33;
                        FUN_140e3418c(piVar29,&local_130,1);
                        if ((*(int *)(pcVar23 + lVar28 * 0x20) == (int)local_130) &&
                           (*(int *)(pcVar23 + lVar28 * 0x20 + 4) == local_130._4_4_)) {
                          cVar12 = FUN_141042fba(local_d8);
                          lVar15 = *(longlong *)(piVar29 + 4);
                          *(undefined8 *)(pcVar23 + (lVar28 * 4 + 1) * 8) =
                               *(undefined8 *)(lVar15 + 0x380);
                          *(undefined4 *)(pcVar23 + (lVar28 * 4 + 2) * 8) =
                               *(undefined4 *)(lVar15 + 0x388);
                          *(uint *)(pcVar23 + lVar28 * 0x20 + 0x14) = (uint)(cVar12 == '\x11');
                          break;
                        }
                        uVar13 = uVar13 & ~(uint)uVar22;
                        puVar18 = local_78;
                        if (local_78 == (uint *)0x0) {
                          puVar18 = local_88;
                        }
                        iVar33 = (int)uVar19;
                        lVar28 = (longlong)iVar33;
                        uVar31 = puVar18[lVar28] & uVar13;
                        if (uVar31 == 0) {
                          iVar25 = local_70 + 0x1e;
                          if (-1 < local_70 + -1) {
                            iVar25 = local_70 + -1;
                          }
                          iVar25 = iVar25 >> 5;
                          iVar36 = iVar36 + 0x20;
                          iVar38 = iVar25;
                          if (iVar25 < iVar33) {
                            iVar38 = iVar33;
                          }
                          if (iVar33 < iVar25) {
                            lVar15 = 0;
                            do {
                              uVar31 = puVar18[lVar15 + lVar28 + 1];
                              if (uVar31 != 0) {
                                uVar19 = (ulonglong)(iVar33 + (int)lVar15 + 1);
                                uVar13 = 0xffffffff;
                                goto LAB_141278ece;
                              }
                              iVar36 = iVar36 + 0x20;
                              lVar15 = lVar15 + 1;
                            } while (iVar38 - lVar28 != lVar15);
                            uVar13 = 0xffffffff;
                            iVar33 = iVar38;
                          }
                          uVar19 = (ulonglong)(iVar33 + 1);
                          iVar33 = local_70;
                        }
                        else {
LAB_141278ece:
                          uVar22 = (ulonglong)(-uVar31 & uVar31);
                          uVar27 = uVar22 * 2 + 1;
                          lVar28 = 0x3f;
                          if (uVar27 != 0) {
                            for (; uVar27 >> lVar28 == 0; lVar28 = lVar28 + -1) {
                            }
                          }
                          iVar33 = (iVar36 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
                          if (local_70 <= iVar33) {
                            iVar33 = local_70;
                          }
                        }
                      } while (iVar33 != iVar35);
                    }
                  }
LAB_141278f39:
                  ppcVar11 = local_d0;
                  if (local_d0 != (code **)0x0) {
                    LOCK();
                    ppcVar2 = local_d0 + 1;
                    *(int *)ppcVar2 = *(int *)ppcVar2 + -1;
                    UNLOCK();
                    if (*(int *)ppcVar2 == 0) {
                      (**(code **)*ppcVar11)(ppcVar11);
                      LOCK();
                      piVar29 = (int *)((longlong)ppcVar11 + 0xc);
                      *piVar29 = *piVar29 + -1;
                      UNLOCK();
                      if (*piVar29 == 0) {
                        (**(code **)(*ppcVar11 + 0x10))(ppcVar11);
                      }
                    }
                  }
                  uVar34 = local_1c4 & ~(uint)local_1b8;
                  puVar18 = *(uint **)(local_1d0 + 0x3c8);
                  if (*(uint **)(local_1d0 + 0x3c8) == (uint *)0x0) {
                    puVar18 = local_198;
                  }
                  uVar13 = *(uint *)(local_1d0 + 0x3d0);
                  iVar33 = (int)local_190;
                  lVar28 = (longlong)iVar33;
                  uVar31 = puVar18[lVar28] & uVar34;
                  uVar19 = local_190;
                  iVar35 = local_1d4;
                  if (uVar31 == 0) {
                    iVar36 = uVar13 + 0x1e;
                    if (-1 < (int)(uVar13 - 1)) {
                      iVar36 = uVar13 - 1;
                    }
                    iVar36 = iVar36 >> 5;
                    iVar35 = local_1d4 + 0x20;
                    iVar25 = iVar36;
                    if (iVar36 < iVar33) {
                      iVar25 = iVar33;
                    }
                    if (iVar33 < iVar36) {
                      lVar15 = 0;
                      do {
                        uVar31 = puVar18[lVar15 + lVar28 + 1];
                        if (uVar31 != 0) {
                          uVar34 = 0xffffffff;
                          uVar19 = (ulonglong)(iVar33 + (int)lVar15 + 1);
                          goto LAB_141279026;
                        }
                        iVar35 = iVar35 + 0x20;
                        lVar15 = lVar15 + 1;
                      } while (iVar25 - lVar28 != lVar15);
                      uVar34 = 0xffffffff;
                      iVar33 = iVar25;
                    }
                    uVar19 = (ulonglong)(iVar33 + 1);
                    uVar22 = local_1b8;
                    uVar31 = uVar13;
                  }
                  else {
LAB_141279026:
                    uVar22 = (ulonglong)(-uVar31 & uVar31);
                    uVar27 = uVar22 * 2 + 1;
                    lVar28 = 0x3f;
                    if (uVar27 != 0) {
                      for (; uVar27 >> lVar28 == 0; lVar28 = lVar28 + -1) {
                      }
                    }
                    uVar31 = (iVar35 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
                    if ((int)uVar13 <= (int)uVar31) {
                      uVar31 = uVar13;
                    }
                  }
                  lVar17 = local_1d0;
                } while (uVar31 != (uint)local_1c0);
              }
LAB_141278bc8:
              if (local_70 == 0) {
                uVar22 = 1;
                uVar19 = 0;
                iVar33 = 0;
                iVar35 = 0;
              }
              else {
                puVar18 = local_78;
                if (local_78 == (uint *)0x0) {
                  puVar18 = local_88;
                }
                uVar13 = *puVar18;
                if (uVar13 == 0) {
                  iVar35 = local_70 + 0x1e;
                  if (-1 < local_70 + -1) {
                    iVar35 = local_70 + -1;
                  }
                  uVar19 = 0;
                  uVar31 = iVar35 >> 5;
                  if (iVar35 >> 5 < 1) {
                    uVar31 = 0;
                  }
                  iVar33 = 0;
                  do {
                    if (uVar31 == uVar19) goto LAB_1412791b8;
                    iVar33 = iVar33 + 0x20;
                    uVar13 = puVar18[uVar19 + 1];
                    uVar19 = uVar19 + 1;
                  } while (uVar13 == 0);
                }
                else {
                  uVar19 = 0;
                  iVar33 = 0;
                }
                uVar22 = (ulonglong)(-uVar13 & uVar13);
                uVar27 = uVar22 * 2 + 1;
                lVar28 = 0x3f;
                if (uVar27 != 0) {
                  for (; uVar27 >> lVar28 == 0; lVar28 = lVar28 + -1) {
                  }
                }
                iVar35 = (iVar33 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
                if (local_70 <= iVar35) {
                  iVar35 = local_70;
                }
              }
              if (iVar35 != local_70) {
                puVar18 = local_78;
                if (local_78 == (uint *)0x0) {
                  puVar18 = local_88;
                }
                iVar36 = local_70 + 0x1e;
                if (-1 < local_70 + -1) {
                  iVar36 = local_70 + -1;
                }
                iVar36 = iVar36 >> 5;
                uVar13 = 0xffffffff;
                do {
                  if (*(int *)(local_98 + (longlong)iVar35 * 0x20 + 0x14) != 1) {
                    pcVar23 = local_98 + (longlong)iVar35 * 0x20;
                    if ((*(int *)(local_1b0 + 0x30) == *(int *)(pcVar23 + 8)) &&
                       (*(int *)(local_1b0 + 0x38) == *(int *)(pcVar23 + 0x10))) {
                      cVar12 = FUN_14002b5e0(*(ulonglong *)pcVar23,"bronze",6);
                      if (cVar12 == '\0') {
                        uVar19 = *(ulonglong *)pcVar23;
                      }
                      else {
                        local_d8 = (code *)0x14b9a7482;
                        local_d0 = (code **)CONCAT35(local_d0._5_3_,0xc);
                        uVar13 = FUN_14001a6c0(&local_d8,1);
                        uVar19 = (ulonglong)uVar13;
                      }
                      lVar28 = FUN_1402735c8();
                      if (*(int *)(lVar28 + 0xc20) != *(int *)(lVar28 + 0xc4c)) {
                        uVar13 = (uint)(uVar19 >> 0x10);
                        uVar31 = (uint)uVar19 & 0xffff;
                        lVar15 = lVar28 + 0xc50;
                        if (*(longlong *)(lVar28 + 0xc58) != 0) {
                          lVar15 = *(longlong *)(lVar28 + 0xc58);
                        }
                        iVar35 = *(int *)(lVar15 + (ulonglong)
                                                   (*(int *)(lVar28 + 0xc60) - 1U &
                                                   (int)(uVar19 >> 0x20) +
                                                   ((uint)uVar19 << 0x10 | uVar31) +
                                                   (uVar13 << 0x13 | uVar13 & 0xffff) +
                                                   (uVar31 >> 4)) * 4);
                        if (iVar35 != -1) {
                          goto LAB_141279f07;
                        }
                      }
                    }
                    break;
                  }
                  uVar13 = uVar13 & ~(uint)uVar22;
                  iVar35 = (int)uVar19;
                  lVar28 = (longlong)iVar35;
                  uVar31 = puVar18[lVar28] & uVar13;
                  if (uVar31 == 0) {
                    iVar25 = iVar36;
                    if (iVar36 < iVar35) {
                      iVar25 = iVar35;
                    }
                    if (iVar36 <= iVar35) break;
                    lVar15 = 0;
                    while( true ) {
                      iVar33 = iVar33 + 0x20;
                      uVar31 = puVar18[lVar28 + lVar15 + 1];
                      if (uVar31 != 0) break;
                      lVar15 = lVar15 + 1;
                      if (iVar25 - lVar28 == lVar15) goto LAB_1412791b8;
                    }
                    uVar19 = (ulonglong)(iVar35 + (int)lVar15 + 1);
                    uVar13 = 0xffffffff;
                  }
                  uVar22 = (ulonglong)(-uVar31 & uVar31);
                  uVar27 = uVar22 * 2 + 1;
                  lVar28 = 0x3f;
                  if (uVar27 != 0) {
                    for (; uVar27 >> lVar28 == 0; lVar28 = lVar28 + -1) {
                    }
                  }
                  iVar35 = (iVar33 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
                } while (iVar35 < local_70);
              }
              goto LAB_1412791b8;
            }
            goto LAB_141279274;
          }
          goto LAB_14127929e;
        }
      }
    }
  }
  goto LAB_1412792c8;
  while (iVar35 = (int)puVar3[4], iVar35 != -1) {
LAB_141279f07:
    puVar3 = (ulonglong *)(*(longlong *)(lVar28 + 0xc18) + (longlong)iVar35 * 0x28);
    if (*puVar3 == uVar19) {
      puVar30 = puVar3 + 1;
      if (puVar30 == (ulonglong *)0x0 || puVar3 == (ulonglong *)0x0) break;
      uVar19 = puVar3[2];
      if (uVar19 == 0) {
        uVar16 = FUN_141209660();
        uVar19 = FUN_14477b664(uVar16);
        puVar3[2] = uVar19;
      }
      uVar22 = puVar3[3];
      if (uVar22 == 0) {
        if ((uVar19 == 0) || (*puVar30 == 0)) break;
        plVar20 = *(longlong **)(uVar19 + 0xb8);
        if ((plVar20 == (longlong *)0x0) ||
           (cVar12 = (**(code **)(*plVar20 + 0x108))(plVar20), cVar12 == '\0')) {
          puVar3[3] = 0;
          break;
        }
        uVar16 = (**(code **)(*plVar20 + 0x110))(plVar20);
        uVar22 = FUN_144aff482(uVar16,puVar30);
        puVar3[3] = uVar22;
        if (uVar22 == 0) break;
      }
      (**(code **)(*local_1e0 + 0x2d0))(local_1e0,&local_d8,uVar22);
      break;
    }
  }
LAB_1412791b8:
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  param_3 = local_1a0;
  param_2 = local_1a8;
  param_1 = local_1e0;
  uVar19 = uStack_90 >> 0x20;
  uStack_90 = uStack_90 & 0xffffffff00000000;
  if ((int)uVar19 != 0) {
    FUN_1405b3ec2(&local_98,0);
  }
  iStack_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    FUN_1446efbd8(local_88,0);
  }
  if (local_78 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_141279274:
  plVar20 = (longlong *)CONCAT44(uStack_10c,local_110);
  if (plVar20 != (longlong *)0x0) {
    LOCK();
    plVar39 = plVar20 + 1;
    *(int *)plVar39 = (int)*plVar39 + -1;
    UNLOCK();
    if ((int)*plVar39 == 0) {
      (**(code **)*plVar20)(plVar20);
      LOCK();
      piVar29 = (int *)((longlong)plVar20 + 0xc);
      *piVar29 = *piVar29 + -1;
      UNLOCK();
      if (*piVar29 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
      }
    }
  }
LAB_14127929e:
  plVar20 = (longlong *)CONCAT44(uStack_fc,local_100);
  if (plVar20 != (longlong *)0x0) {
    LOCK();
    plVar39 = plVar20 + 1;
    *(int *)plVar39 = (int)*plVar39 + -1;
    UNLOCK();
    if ((int)*plVar39 == 0) {
      (**(code **)*plVar20)(plVar20);
      LOCK();
      piVar29 = (int *)((longlong)plVar20 + 0xc);
      *piVar29 = *piVar29 + -1;
      UNLOCK();
      if (*piVar29 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
      }
    }
  }
LAB_1412792c8:
  iVar35 = *(int *)(param_2 + 4);
  if (iVar35 < 2 && *(int *)(param_2 + 0x24) < 1) {
    param_2 = param_2 + 8;
  }
  else {
    if (4 < iVar35) goto LAB_14127939b;
    param_2 = *(longlong *)(param_2 + 0x18);
  }
  if (((*(int *)(param_2 + (longlong)(iVar35 + -1) * 0xc) != (int)DAT_14cb88978) ||
      (*(int *)(param_2 + (longlong)(iVar35 + -1) * 0xc + 8) != DAT_14cb88980)) ||
     (iVar35 < 3 || *param_3 != DAT_14cb88928 && *param_3 != DAT_14cb88920)) goto LAB_14127939b;
  local_180 = *(undefined4 *)(param_2 + 0x20);
  local_188 = *(undefined8 *)(param_2 + 0x18);
  local_118 = (int)local_188;
  uStack_114 = (undefined4)((ulonglong)local_188 >> 0x20);
  local_110 = local_180;
  FUN_1448075d0(&local_98);
  plVar20 = (longlong *)FUN_140fa5e12(&local_98);
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if ((plVar20 == (longlong *)0x0) ||
     (cVar12 = (**(code **)(*plVar20 + 0x50))(plVar20), cVar12 != '\0')) goto LAB_14127939b;
  uVar5 = *(ushort *)((longlong)plVar20 + 0x53a);
  lVar28 = *(longlong *)(DAT_14cb86da8 + 0x370);
  uVar16 = (**(code **)(*param_1 + 0x180))(param_1);
  FUN_143deff24((ulonglong)((uint)uVar5 * 0x18) + lVar28,&local_98,&local_118,uVar16);
  pcVar23 = local_98;
  if (*(code **)(*(ulonglong *)local_98 + 0x50) != FUN_144828418) {
    pcVar23 = (code *)(**(code **)(*(ulonglong *)local_98 + 0x50))();
  }
  FUN_1447a1fc0(pcVar23);
  pcVar23 = *(code **)(*(ulonglong *)local_98 + 0x28);
  if (pcVar23 == FUN_14482841c) {
    pcVar23 = local_98 + 0x18;
    if (*(ulonglong *)(local_98 + 0x28) != 0) {
      pcVar23 = (code *)(*(ulonglong *)(local_98 + 0x28) + 8);
    }
  }
  else if (pcVar23 == (code *)&LAB_14010c34c) {
    pcVar23 = local_98 + 0x10;
  }
  else {
    pcVar23 = (code *)(*pcVar23)(local_98);
  }
  local_108 = (longlong *)0x0;
  local_100 = *(int *)(pcVar23 + 8);
  lVar28 = (longlong)local_100;
  _Src = *(void **)pcVar23;
  local_1e0 = param_1;
  if (lVar28 == 0) {
    uStack_fc = 0;
  }
  else {
    FUN_1446dd670(&local_108,local_100,0);
    memcpy(local_108,_Src,lVar28 * 2);
  }
  if (local_98 != (code *)0x0) {
    (**(code **)(*(ulonglong *)local_98 + 0x10))();
  }
  plVar39 = plVar20 + 0x9e;
  lVar28 = FUN_1402735c8();
  if (*param_3 == DAT_14cb88928) {
    cVar12 = FUN_14662d1b8(plVar20);
    if (cVar12 != '\0') {
      local_98 = (code *)0x0;
      uStack_90 = 0;
      FUN_140ddec7c(plVar39);
      uVar13 = 0;
      if ((longlong)(int)uStack_90 != 0) {
        lVar15 = 0;
        uVar13 = 0;
        do {
          uVar16 = *(undefined8 *)(local_98 + lVar15);
          uVar31 = (uint)((ulonglong)uVar16 >> 0x10);
          uVar34 = (uint)uVar16 & 0xffff;
          uVar31 = ((uint)uVar16 << 0x10 | uVar34) + (int)((ulonglong)uVar16 >> 0x20) +
                   (uVar31 << 0x13 | uVar31 & 0xffff) + (uVar34 >> 4);
          uVar13 = uVar31 >> 0xd ^ uVar13 - uVar31;
          uVar34 = uVar13 << 8 ^ (-0x61c88647 - uVar31) - uVar13;
          uVar37 = uVar34 >> 0xd ^ (uVar31 - uVar13) - uVar34;
          uVar13 = uVar37 >> 0xc ^ (uVar13 - uVar34) - uVar37;
          uVar31 = uVar13 << 0x10 ^ (uVar34 - uVar37) - uVar13;
          uVar34 = uVar31 >> 5 ^ (uVar37 - uVar13) - uVar31;
          uVar37 = uVar34 >> 3 ^ (uVar13 - uVar31) - uVar34;
          uVar13 = uVar37 << 10 ^ (uVar31 - uVar34) - uVar37;
          uVar13 = uVar13 >> 0xf ^ uVar34 - (uVar37 + uVar13);
          lVar15 = lVar15 + 8;
        } while ((longlong)(int)uStack_90 * 8 != lVar15);
      }
      if (local_98 != (code *)0x0) {
        FUN_1400020a8();
      }
      iVar35 = FUN_14426452a((longlong *)(lVar28 + 0xb48),uVar13,plVar39);
      uVar13 = 0;
      lVar15 = 0;
      if (iVar35 != -1) {
        lVar15 = (longlong)iVar35 * 0x48 + *(longlong *)(lVar28 + 0xb48);
      }
      if (lVar15 == 0) {
        local_98 = (code *)0x0;
        uStack_90 = 0;
        FUN_140ddec7c(plVar39);
        if ((longlong)(int)uStack_90 != 0) {
          lVar15 = 0;
          uVar13 = 0;
          do {
            uVar16 = *(undefined8 *)(local_98 + lVar15);
            uVar31 = (uint)((ulonglong)uVar16 >> 0x10);
            uVar34 = (uint)uVar16 & 0xffff;
            uVar31 = ((uint)uVar16 << 0x10 | uVar34) + (int)((ulonglong)uVar16 >> 0x20) +
                     (uVar31 << 0x13 | uVar31 & 0xffff) + (uVar34 >> 4);
            uVar13 = uVar31 >> 0xd ^ uVar13 - uVar31;
            uVar34 = uVar13 << 8 ^ (-0x61c88647 - uVar31) - uVar13;
            uVar37 = uVar34 >> 0xd ^ (uVar31 - uVar13) - uVar34;
            uVar13 = uVar37 >> 0xc ^ (uVar13 - uVar34) - uVar37;
            uVar31 = uVar13 << 0x10 ^ (uVar34 - uVar37) - uVar13;
            uVar34 = uVar31 >> 5 ^ (uVar37 - uVar13) - uVar31;
            uVar37 = uVar34 >> 3 ^ (uVar13 - uVar31) - uVar34;
            uVar13 = uVar37 << 10 ^ (uVar31 - uVar34) - uVar37;
            uVar13 = uVar13 >> 0xf ^ uVar34 - (uVar37 + uVar13);
            lVar15 = lVar15 + 8;
          } while ((longlong)(int)uStack_90 * 8 != lVar15);
        }
        if (local_98 != (code *)0x0) {
          FUN_1400020a8();
        }
        iVar35 = FUN_14426452a((longlong *)(lVar28 + 0xb98),uVar13,plVar39);
        lVar15 = 0;
        if (iVar35 != -1) {
          lVar15 = (longlong)iVar35 * 0x48 + *(longlong *)(lVar28 + 0xb98);
        }
        if (lVar15 != 0) {
          lVar28 = *(longlong *)(lVar15 + 0x18);
          if (lVar28 == 0) {
            uVar16 = FUN_141209660();
            lVar28 = FUN_14477b664(uVar16);
            *(longlong *)(lVar15 + 0x18) = lVar28;
          }
          lVar17 = *(longlong *)(lVar15 + 0x20);
          if (lVar17 == 0) {
            if ((lVar28 != 0) && (*(longlong *)(lVar15 + 0x10) != 0)) {
              plVar20 = *(longlong **)(lVar28 + 0xb8);
              if ((plVar20 == (longlong *)0x0) ||
                 (cVar12 = (**(code **)(*plVar20 + 0x108))(plVar20), cVar12 == '\0')) {
                *(undefined8 *)(lVar15 + 0x20) = 0;
              }
              else {
                uVar16 = (**(code **)(*plVar20 + 0x110))(plVar20);
                lVar17 = FUN_144aff482(uVar16,(longlong *)(lVar15 + 0x10));
                *(longlong *)(lVar15 + 0x20) = lVar17;
                if (lVar17 != 0) goto LAB_14127983f;
              }
            }
          }
          else {
LAB_14127983f:
            local_238 = (int *)((ulonglong)local_238 & 0xffffffffffffff00);
LAB_141279ccd:
            FUN_14663989c(local_1e0,&local_98,lVar17,&local_108);
          }
        }
      }
      else {
        lVar28 = *(longlong *)(lVar15 + 0x18);
        if (lVar28 == 0) {
          uVar16 = FUN_141209660();
          lVar28 = FUN_14477b664(uVar16);
          *(longlong *)(lVar15 + 0x18) = lVar28;
        }
        lVar17 = *(longlong *)(lVar15 + 0x20);
        if (lVar17 == 0) {
          if ((lVar28 != 0) && (*(longlong *)(lVar15 + 0x10) != 0)) {
            plVar7 = *(longlong **)(lVar28 + 0xb8);
            if ((plVar7 == (longlong *)0x0) ||
               (cVar12 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar12 == '\0')) {
              *(undefined8 *)(lVar15 + 0x20) = 0;
            }
            else {
              uVar16 = (**(code **)(*plVar7 + 0x110))(plVar7);
              lVar17 = FUN_144aff482(uVar16,(longlong *)(lVar15 + 0x10));
              *(longlong *)(lVar15 + 0x20) = lVar17;
              if (lVar17 != 0) goto LAB_14127a003;
            }
          }
        }
        else {
LAB_14127a003:
          if ((*plVar39 == 0) || ((longlong)(int)plVar20[0x9f] == -1)) {
            uVar16 = 0;
          }
          else {
            uVar16 = **(undefined8 **)
                       (*(longlong *)(*plVar39 + 0x50) + (longlong)(int)plVar20[0x9f] * 8);
          }
          if (((DAT_14cbd5f00 != (int)uVar16) || (DAT_14cbd5f04 != (int)((ulonglong)uVar16 >> 0x20))
              ) || (*(char *)((longlong)plVar20 + 0x851) == '\x01')) {
            local_230 = local_230 & 0xffffff00;
            local_238 = &local_118;
            FUN_146639e68(local_1e0,&local_98,lVar17,&local_108);
          }
        }
      }
      goto LAB_141279e5b;
    }
  }
  else {
    if (*param_3 == DAT_14cb88920) {
      plVar7 = local_1e0 + 6;
      lVar15 = FUN_1400d7050(plVar7);
      if (lVar15 != 0) {
        if (DAT_14cbadd90 == 0) {
          local_98 = FUN_141030f22;
          local_1f0 = FUN_14081d0ea;
          local_1f8 = &LAB_1459f2e4c;
          local_208 = &LAB_148c39de3;
          local_210 = &LAB_1457a9eb2;
          local_218 = &DAT_149e063b2;
          local_220 = 0;
          local_228 = 0x10000004;
          local_230 = 0x10;
          local_238 = (int *)CONCAT44(local_238._4_4_,0x3de0);
          local_200 = &local_98;
          FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
        }
        if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar15 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) +
              (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
           ((lVar15 = FUN_140e06fb1(lVar15), lVar15 != 0 && (*(longlong *)(lVar15 + 0x90) != 0)))) {
          uStack_90 = CONCAT44(uStack_90._4_4_,local_110);
          local_98 = (code *)CONCAT44(uStack_114,local_118);
          FUN_1410aecd0(*(longlong *)(lVar15 + 0x90),&local_98,0);
        }
      }
      local_98 = (code *)0x0;
      uStack_90 = 0;
      FUN_140ddec7c(plVar39);
      uVar13 = 0;
      if ((longlong)(int)uStack_90 != 0) {
        lVar15 = 0;
        uVar13 = 0;
        do {
          uVar16 = *(undefined8 *)(local_98 + lVar15);
          uVar31 = (uint)((ulonglong)uVar16 >> 0x10);
          uVar34 = (uint)uVar16 & 0xffff;
          uVar31 = ((uint)uVar16 << 0x10 | uVar34) + (int)((ulonglong)uVar16 >> 0x20) +
                   (uVar31 << 0x13 | uVar31 & 0xffff) + (uVar34 >> 4);
          uVar13 = uVar31 >> 0xd ^ uVar13 - uVar31;
          uVar34 = uVar13 << 8 ^ (-0x61c88647 - uVar31) - uVar13;
          uVar37 = uVar34 >> 0xd ^ (uVar31 - uVar13) - uVar34;
          uVar13 = uVar37 >> 0xc ^ (uVar13 - uVar34) - uVar37;
          uVar31 = uVar13 << 0x10 ^ (uVar34 - uVar37) - uVar13;
          uVar34 = uVar31 >> 5 ^ (uVar37 - uVar13) - uVar31;
          uVar37 = uVar34 >> 3 ^ (uVar13 - uVar31) - uVar34;
          uVar13 = uVar37 << 10 ^ (uVar31 - uVar34) - uVar37;
          uVar13 = uVar13 >> 0xf ^ uVar34 - (uVar37 + uVar13);
          lVar15 = lVar15 + 8;
        } while ((longlong)(int)uStack_90 * 8 != lVar15);
      }
      if (local_98 != (code *)0x0) {
        FUN_1400020a8();
      }
      iVar35 = FUN_14426452a((longlong *)(lVar28 + 0xb48),uVar13,plVar39);
      lVar15 = (longlong)iVar35 * 0x48 + *(longlong *)(lVar28 + 0xb48);
      if (lVar15 == 0 || iVar35 == -1) {
        local_98 = (code *)0x0;
        uStack_90 = 0;
        FUN_140ddec7c(plVar39);
        uVar13 = 0;
        if ((longlong)(int)uStack_90 != 0) {
          lVar15 = 0;
          uVar13 = 0;
          do {
            uVar16 = *(undefined8 *)(local_98 + lVar15);
            uVar31 = (uint)((ulonglong)uVar16 >> 0x10);
            uVar34 = (uint)uVar16 & 0xffff;
            uVar31 = ((uint)uVar16 << 0x10 | uVar34) + (int)((ulonglong)uVar16 >> 0x20) +
                     (uVar31 << 0x13 | uVar31 & 0xffff) + (uVar34 >> 4);
            uVar13 = uVar31 >> 0xd ^ uVar13 - uVar31;
            uVar34 = uVar13 << 8 ^ (-0x61c88647 - uVar31) - uVar13;
            uVar37 = uVar34 >> 0xd ^ (uVar31 - uVar13) - uVar34;
            uVar13 = uVar37 >> 0xc ^ (uVar13 - uVar34) - uVar37;
            uVar31 = uVar13 << 0x10 ^ (uVar34 - uVar37) - uVar13;
            uVar34 = uVar31 >> 5 ^ (uVar37 - uVar13) - uVar31;
            uVar37 = uVar34 >> 3 ^ (uVar13 - uVar31) - uVar34;
            uVar13 = uVar37 << 10 ^ (uVar31 - uVar34) - uVar37;
            uVar13 = uVar13 >> 0xf ^ uVar34 - (uVar37 + uVar13);
            lVar15 = lVar15 + 8;
          } while ((longlong)(int)uStack_90 * 8 != lVar15);
        }
        if (local_98 != (code *)0x0) {
          FUN_1400020a8();
        }
        iVar35 = FUN_14426452a((longlong *)(lVar28 + 0xb98),uVar13,plVar39);
        lVar28 = (longlong)iVar35 * 0x48 + *(longlong *)(lVar28 + 0xb98);
        if (lVar28 != 0 && iVar35 != -1) {
          lVar15 = *(longlong *)(lVar28 + 0x30);
          if (lVar15 == 0) {
            uVar16 = FUN_141209660();
            lVar15 = FUN_14477b664(uVar16);
            *(longlong *)(lVar28 + 0x30) = lVar15;
          }
          lVar17 = *(longlong *)(lVar28 + 0x38);
          if (lVar17 != 0) {
LAB_141279bf1:
            lVar28 = FUN_1400d7050(plVar7);
            if (lVar28 == 0) {
LAB_141279caf:
              bVar24 = 0;
            }
            else {
              if (DAT_14cbadd90 == 0) {
                local_98 = FUN_141030f22;
                local_1f0 = FUN_14081d0ea;
                local_1f8 = &LAB_1459f2e4c;
                local_208 = &LAB_148c39de3;
                local_210 = &LAB_1457a9eb2;
                local_218 = &DAT_149e063b2;
                local_220 = 0;
                local_228 = 0x10000004;
                local_230 = 0x10;
                local_238 = (int *)CONCAT44(local_238._4_4_,0x3de0);
                local_200 = &local_98;
                FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8
                             );
              }
              if ((((*(int *)(*(longlong *)(lVar28 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38))
                   || (*(longlong *)
                        (*(longlong *)(*(longlong *)(lVar28 + 0x10) + 0x30) +
                        (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) ||
                  (lVar15 = FUN_140c154c8(lVar28), lVar15 == 0)) ||
                 ((lVar15 = *(longlong *)(lVar15 + 0x170), lVar15 == 0 ||
                  (lVar21 = FUN_14144cd92(lVar15,plVar20,1), lVar21 == 0)))) goto LAB_141279caf;
              FUN_140ff3baa(lVar21,&local_d8);
              uVar14 = FUN_1408966e4(lVar28);
              local_98 = local_d8;
              uVar16 = FUN_1403363fe(lVar15);
              lVar28 = FUN_1403362f0(lVar15,uVar14,uVar16);
              if ((lVar28 == 0) || (*(char *)(lVar28 + 0x11) != '\0')) goto LAB_141279caf;
              bVar24 = *(byte *)(lVar28 + 0x12) ^ 1;
            }
            local_238 = (int *)CONCAT71(local_238._1_7_,bVar24);
            goto LAB_141279ccd;
          }
          if ((lVar15 != 0) && (*(longlong *)(lVar28 + 0x28) != 0)) {
            plVar39 = *(longlong **)(lVar15 + 0xb8);
            if ((plVar39 == (longlong *)0x0) ||
               (cVar12 = (**(code **)(*plVar39 + 0x108))(plVar39), cVar12 == '\0')) {
              *(undefined8 *)(lVar28 + 0x38) = 0;
            }
            else {
              uVar16 = (**(code **)(*plVar39 + 0x110))(plVar39);
              lVar17 = FUN_144aff482(uVar16,(longlong *)(lVar28 + 0x28));
              *(longlong *)(lVar28 + 0x38) = lVar17;
              if (lVar17 != 0) goto LAB_141279bf1;
            }
          }
        }
      }
      else {
        lVar28 = *(longlong *)(lVar15 + 0x30);
        if (lVar28 == 0) {
          uVar16 = FUN_141209660();
          lVar28 = FUN_14477b664(uVar16);
          *(longlong *)(lVar15 + 0x30) = lVar28;
        }
        uVar19 = *(ulonglong *)(lVar15 + 0x38);
        if (uVar19 == 0) {
          if ((lVar28 != 0) && (*(longlong *)(lVar15 + 0x28) != 0)) {
            plVar20 = *(longlong **)(lVar28 + 0xb8);
            if ((plVar20 == (longlong *)0x0) ||
               (cVar12 = (**(code **)(*plVar20 + 0x108))(plVar20), cVar12 == '\0')) {
              *(undefined8 *)(lVar15 + 0x38) = 0;
            }
            else {
              uVar16 = (**(code **)(*plVar20 + 0x110))(plVar20);
              uVar19 = FUN_144aff482(uVar16,(longlong *)(lVar15 + 0x28));
              *(ulonglong *)(lVar15 + 0x38) = uVar19;
              if (uVar19 != 0) goto LAB_141279db0;
            }
          }
        }
        else {
LAB_141279db0:
          plVar20 = local_1e0;
          pcVar23 = (code *)CONCAT44(local_110,uStack_114);
          if ((pcVar23 == DAT_14c948034) && (pcVar23 = DAT_14c948034, local_118 != DAT_14c948030)) {
            FUN_14011791e(&local_98,local_118,local_110);
            uStack_114 = SUB84(local_98,0);
            local_110 = (undefined4)((ulonglong)local_98 >> 0x20);
            pcVar23 = local_98;
          }
          local_130._0_4_ = (int)pcVar23;
          local_130._4_4_ = (int)((ulonglong)pcVar23 >> 0x20);
          cVar12 = FUN_148e2daf8(plVar20 + 0x13);
          local_230 = CONCAT31(local_230._1_3_,cVar12);
          local_238 = &local_118;
          FUN_146639e68(plVar20,local_160,uVar19,&local_108);
          if (local_160[0] != -1 && cVar12 == '\0') {
            local_98 = (code *)CONCAT44(local_98._4_4_,local_160[0]);
            uStack_90 = uVar19;
            FUN_140212f8e();
            local_d8 = (code *)&local_130;
            local_d0 = &local_98;
            FUN_148e2dbf2(plVar20 + 0x1d,&local_148);
          }
        }
      }
    }
LAB_141279e5b:
    plVar20 = local_1e0;
    FUN_14663a16a(local_1e0);
    FUN_145e2a644(plVar20);
  }
  if (local_108 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_14127939b:
  if ((local_48 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14127a2bf FUN_14127a2bf body=617 status=ok
// SIG undefined FUN_14127a2bf(void)

void FUN_14127a2bf(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  char cVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar3 = (undefined8 *)*param_1;
  FUN_1406ed334(puVar3);
  *puVar3 = &PTR_FUN_14a4b26d0;
  puVar3[0x1f] = &PTR_LAB_14a4b2a40;
  puVar3[0x21] = 0;
  puVar3[0x22] = 0;
  *(undefined4 *)(puVar3 + 0x23) = 2;
  *(undefined8 *)((longlong)puVar3 + 0x11c) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x124) = 0;
  *(undefined8 *)((longlong)puVar3 + 300) = 0x200000000;
  *(undefined8 *)((longlong)puVar3 + 0x134) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x13c) = 0;
  cVar6 = '\0';
  *(undefined4 *)((longlong)puVar3 + 0x144) = 0;
  puVar3[0x29] = 2;
  puVar3[0x20] = &PTR_FUN_14a46bfe0;
  *(undefined2 *)(puVar3 + 0x2a) = 0x404;
  puVar3[0x2b] = 0;
  puVar3[0x2c] = 0;
  *(undefined2 *)(puVar3 + 0x2d) = 0;
  memset(puVar3 + 0x2e,0,0xa0);
  *(undefined8 *)((longlong)puVar3 + 0x1b4) = 0xffffffff00000080;
  *(undefined8 *)((longlong)puVar3 + 0x1bc) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x1c4) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x1cc) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x1ec) = 0xffffffff00000080;
  local_58 = 0xd2704c107b5ae74c;
  uStack_50 = 0xb212a5aa9585798;
  iVar4 = FUN_1448a256a(puVar3);
  if (3 < iVar4) {
    local_68 = 0xd2704c107b5ae74c;
    uStack_60 = 0xb212a5aa9585798;
    iVar4 = FUN_1448a256a(puVar3);
    cVar6 = '\x02' - (iVar4 < 6);
  }
  *(undefined1 *)(puVar3 + 0xb) = 1;
  *(char *)((longlong)puVar3 + 0x59) = cVar6;
  *(undefined1 *)(puVar3 + 0x1b) = 1;
  plVar5 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14a492060;
  plVar1 = plVar5 + 2;
  FUN_14127a52a(plVar1,puVar3 + 0x20);
  local_78 = plVar1;
  local_70 = plVar5;
  FUN_140aec6f8(&local_78,plVar1);
  plVar1 = local_70;
  if (local_70 == (longlong *)0x0) {
    puVar3[0x1c] = local_78;
    plVar5 = (longlong *)puVar3[0x1d];
    if (plVar5 == (longlong *)0x0) goto LAB_14127a472;
    puVar3[0x1d] = 0;
LAB_14127a4ca:
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_14127a472;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar4 = *piVar2;
    UNLOCK();
    plVar1 = plVar5;
  }
  else {
    LOCK();
    *(int *)(local_70 + 1) = (int)local_70[1] + 1;
    UNLOCK();
    puVar3[0x1c] = local_78;
    plVar5 = (longlong *)puVar3[0x1d];
    if (local_70 != plVar5) {
      puVar3[0x1d] = local_70;
      if (plVar5 == (longlong *)0x0) goto LAB_14127a472;
      goto LAB_14127a4ca;
    }
    LOCK();
    plVar5 = local_70 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_14127a472;
    (**(code **)*local_70)(local_70);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar4 = *piVar2;
    UNLOCK();
  }
  if (iVar4 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_14127a472:
  plVar1 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_70 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14127a52a FUN_14127a52a body=197 status=ok
// SIG undefined FUN_14127a52a(void)

undefined8 * FUN_14127a52a(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 2;
  puVar1 = param_1 + 5;
  param_1[8] = 0;
  param_1[9] = 0x100000000;
  lVar4 = FUN_14127a5f0();
  uVar3 = *(undefined8 *)(lVar4 + 0x18);
  iVar2 = *(int *)(param_1 + 9);
  *(uint *)(param_1 + 9) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x4c) < iVar2 + 1U) {
    FUN_1457d67de(puVar1,iVar2);
  }
  puVar5 = (undefined8 *)param_1[8];
  if ((undefined8 *)param_1[8] == (undefined8 *)0x0) {
    puVar5 = puVar1;
  }
  puVar5[(longlong)iVar2 * 3] = uVar3;
  puVar5[(longlong)iVar2 * 3 + 1] = 0;
  (puVar5 + (longlong)iVar2 * 3 + 1)[1] = 0;
  puVar5 = (undefined8 *)param_1[8];
  if ((undefined8 *)param_1[8] == (undefined8 *)0x0) {
    puVar5 = puVar1;
  }
  iVar2 = *(int *)(puVar5 + 2);
  *(uint *)(puVar5 + 2) = iVar2 + 1U;
  if (*(uint *)((longlong)puVar5 + 0x14) < iVar2 + 1U) {
    FUN_140aec898(puVar5 + 1,iVar2);
  }
  *(undefined8 *)(puVar5[1] + (longlong)iVar2 * 8) = param_2;
  return param_1;
}



// FUNCTION 14127a5f0 FUN_14127a5f0 body=57 status=ok
// SIG undefined FUN_14127a5f0(void)

void FUN_14127a5f0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab22b8 == 0) {
    uVar1 = FUN_140bd662f();
    DAT_14cab22b8 = FUN_140002ddd(FUN_14633b0a0,uVar1,L"MovieSceneByteChannel");
  }
  return;
}



// FUNCTION 14127a62a FUN_14127a62a body=293 status=ok
// SIG undefined FUN_14127a62a(void)

longlong * FUN_14127a62a(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = (longlong *)FUN_14001cc68(0xb0);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b42e3b0;
  memset(plVar3 + 3,0,0x88);
  plVar3[2] = (longlong)&PTR_FUN_14b42f4c0;
  plVar3[0xe] = DAT_14cb7bd68;
  *(undefined4 *)(plVar3 + 0xf) = DAT_14cb7bd70;
  *(undefined4 *)((longlong)plVar3 + 0x84) = DAT_14cb7bd88;
  *(undefined8 *)((longlong)plVar3 + 0x7c) = DAT_14cb7bd80;
  plVar3[0x14] = 0;
  plVar3[0x15] = 0;
  plVar3[0x11] = 0;
  plVar3[0x12] = 0;
  *(undefined4 *)(plVar3 + 0x13) = 0;
  local_38 = plVar3 + 2;
  local_30 = plVar3;
  FUN_14127a750(&local_38,plVar3 + 2);
  plVar3 = local_30;
  *param_2 = (longlong)local_38;
  param_2[1] = (longlong)local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14127a750 FUN_14127a750 body=162 status=ok
// SIG undefined FUN_14127a750(void)

void FUN_14127a750(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14127a78f;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14127a78f;
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
LAB_14127a78f:
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
                    /* WARNING: Could not recover jumptable at 0x00014127a7ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14127a7f2 FUN_14127a7f2 body=265 status=ok
// SIG undefined FUN_14127a7f2(void)

undefined * FUN_14127a7f2(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45c8) {
    FUN_144b3d300(&DAT_14c9c45c8);
    if (DAT_14c9c45c8 == -1) {
      FUN_14586baf4(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FSceneTextureParameters";
      local_38 = 0;
      local_50 = 0x60;
      local_58 = 10;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c4548,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142bc081f);
      _Init_thread_footer(&DAT_14c9c45c8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9c4548;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14127a8fc FUN_14127a8fc body=286 status=ok
// SIG undefined FUN_14127a8fc(void)

undefined8 FUN_14127a8fc(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14127aa14;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14127aa14;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_14127aa14:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14127a9c1;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_14127a9c1;
    }
  }
  uVar6 = 0;
LAB_14127a9c1:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14127aa1c FUN_14127aa1c body=84 status=ok
// SIG undefined FUN_14127aa1c(void)

longlong FUN_14127aa1c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x78);
  if (((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x80), lVar1 != 0)) &&
     (lVar1 = *(longlong *)(lVar1 + 0x48), lVar1 != 0)) {
    lVar2 = FUN_140b7066c();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 14127aa70 FUN_14127aa70 body=57 status=ok
// SIG undefined FUN_14127aa70(void)

undefined8 FUN_14127aa70(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x1f0) != 0)) {
    lVar1 = FUN_141028a6c();
    if (lVar1 != 0) {
      uVar2 = FUN_140d75dd6(lVar1,param_2);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 14127aaaa FUN_14127aaaa body=102 status=ok
// SIG undefined FUN_14127aaaa(void)

undefined8 FUN_14127aaaa(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  bool bVar4;
  
  if (*(int *)(param_1 + 0xb8) != *(int *)(param_1 + 0xe4)) {
    lVar1 = param_1 + 0xe8;
    if (*(longlong *)(param_1 + 0xf0) != 0) {
      lVar1 = *(longlong *)(param_1 + 0xf0);
    }
    iVar3 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0xf8) - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        bVar4 = *(uint *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar3 * 0xc) == param_2;
        uVar2 = CONCAT71((int7)(int3)((uint)iVar3 >> 8),bVar4);
        if (bVar4) {
          return uVar2;
        }
        iVar3 = *(int *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar3 * 0xc + 4);
      } while (iVar3 != -1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 14127ab10 FUN_14127ab10 body=287 status=ok
// SIG undefined FUN_14127ab10(void)

ulonglong FUN_14127ab10(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_14127ac30();
  if (cVar1 == '\0') {
    uVar6 = 0;
    iVar2 = FUN_1413ffdac(param_1,0);
    if (iVar2 != 2) goto LAB_14127ab71;
    plVar3 = (longlong *)FUN_14127aa1c(param_1);
    if ((((plVar3 != (longlong *)0x0) &&
         ((**(code **)(*plVar3 + 0x308))(plVar3,&local_30), local_30 == 2)) &&
        (cVar1 = FUN_14586c512(param_1,param_2), cVar1 == '\0')) &&
       ((lVar4 = FUN_14127aa1c(param_1), lVar4 == 0 || (cVar1 = FUN_143f37726(lVar4), cVar1 == '\0')
        ))) {
      (**(code **)(*param_2 + 0x10))(param_2,&local_30);
      FUN_1446f470e(&local_38,L"SHIFT",1);
      uVar6 = CONCAT71((int7)((ulonglong)&local_30 >> 8),1);
      if (CONCAT44(uStack_2c,local_30) != local_38) goto LAB_14127ab71;
      uVar5 = (**(code **)(*param_1 + 0x180))(param_1);
      lVar4 = FUN_140b70372(uVar5);
      if ((lVar4 == 0) ||
         (cVar1 = FUN_14657f9b8(lVar4,*(undefined4 *)(param_1[4] + 0xe0),param_2), cVar1 != '\0'))
      goto LAB_14127ab71;
    }
  }
  uVar6 = 0;
LAB_14127ab71:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 14127ac30 FUN_14127ac30 body=584 status=ok
// SIG undefined FUN_14127ac30(void)

ulonglong FUN_14127ac30(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  byte unaff_BL;
  longlong **pplVar6;
  ulonglong uVar7;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *plStack_60;
  undefined4 local_54;
  longlong *local_50;
  longlong **local_48;
  longlong *plStack_40;
  longlong **local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = (**(code **)(*param_1 + 0x180))();
  if (lVar4 == 0) {
    uVar7 = 0;
    goto LAB_14127acb1;
  }
  plVar2 = *(longlong **)(lVar4 + 0x1f0);
  if (plVar2 == (longlong *)0x0) {
    uVar7 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x10))(param_2,&local_48);
    (**(code **)(*plVar2 + 1000))(plVar2,&local_30);
    if (local_48 == local_30) {
      lVar4 = FUN_14127ae7a(plVar2,param_2);
      unaff_BL = lVar4 != 0;
      uVar7 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    }
    else {
      pplVar6 = &local_50;
      (**(code **)(*param_2 + 0x10))(param_2,pplVar6);
      local_68 = local_50;
      plVar5 = (longlong *)FUN_1401e3228();
      if (plVar5 == (longlong *)0x0) {
        local_48 = (longlong **)0x0;
        plStack_40 = (longlong *)0x0;
LAB_14127ae2b:
        unaff_BL = (byte)pplVar6;
        uVar7 = 0;
      }
      else {
        (**(code **)(*plVar5 + 0x80))(plVar5,&local_48);
        pplVar6 = local_48;
        if (local_48 == (longlong **)0x0) goto LAB_14127ae2b;
        (*(code *)(*local_48)[0x2f])(local_48,&local_54,param_2);
        iVar3 = (*(code *)(*pplVar6)[0x31])(pplVar6,local_54);
        if (iVar3 == -1) goto LAB_14127ae2b;
        local_78 = 0;
        plVar5 = (longlong *)FUN_1401e3228();
        if (plVar5 == (longlong *)0x0) {
          local_68 = (longlong *)0x0;
          plStack_60 = (longlong *)0x0;
LAB_14127ae37:
          unaff_BL = (byte)pplVar6;
          uVar7 = 0;
        }
        else {
          pplVar6 = &local_68;
          (**(code **)(*plVar5 + 0x80))(plVar5,pplVar6);
          if (local_68 == (longlong *)0x0) goto LAB_14127ae37;
          plVar5 = &local_78;
          (**(code **)(*local_68 + 0x110))(local_68,plVar5,iVar3);
          uVar7 = (ulonglong)CONCAT31((int3)((uint)iVar3 >> 8),local_78 != 0);
          if (local_78 != 0) {
            lVar4 = FUN_14127ae7a(plVar2);
            plVar5 = (longlong *)(ulonglong)(lVar4 != 0);
          }
          unaff_BL = (byte)plVar5;
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
              if (*piVar1 == 0) {
                (**(code **)(*local_70 + 0x10))(local_70);
              }
            }
          }
        }
        plVar2 = plStack_60;
        if (plStack_60 != (longlong *)0x0) {
          LOCK();
          plVar5 = plStack_60 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*plStack_60)(plStack_60);
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
      plVar2 = plStack_40;
      if (plStack_40 != (longlong *)0x0) {
        LOCK();
        plVar5 = plStack_40 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*plStack_40)(plStack_40);
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
  }
  uVar7 = CONCAT71((int7)(uVar7 >> 8),(byte)uVar7 & unaff_BL);
LAB_14127acb1:
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 14127ae7a FUN_14127ae7a body=276 status=ok
// SIG undefined FUN_14127ae7a(void)

undefined8 FUN_14127ae7a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_88 [32];
  undefined **local_68;
  undefined8 local_60;
  longlong *local_58;
  byte local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_14127af68:
    plVar6 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar6[1];
    do {
      if (iVar4 == 0) goto LAB_14127af68;
      LOCK();
      iVar3 = (int)plVar6[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(plVar6 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar7);
  }
  local_60 = 0;
  if (plVar6 != (longlong *)0x0) {
    local_60 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  local_50 = 0;
  local_68 = &PTR_FUN_14a5af930;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = plVar6;
  uVar5 = FUN_14127af90(0,&local_68);
  local_68 = &PTR_FUN_14a5af930;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  local_68 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_50])(&local_60);
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
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14127af90 FUN_14127af90 body=323 status=ok
// SIG undefined FUN_14127af90(void)

longlong * FUN_14127af90(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *unaff_RBX;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  undefined **local_78;
  uint local_70;
  undefined4 uStack_6c;
  byte local_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar1 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    lVar7 = 0;
    do {
      plVar6 = *(longlong **)(lVar2 + lVar7);
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x350))(plVar6,&local_78);
        if ((&DAT_149fc1b6e)[local_60] == '\x01') {
          if (((longlong *)CONCAT44(uStack_6c,local_70) == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*(longlong *)CONCAT44(uStack_6c,local_70) + 0x28))(),
             cVar4 == '\0')) goto LAB_14127b02c;
LAB_14127b015:
          uVar5 = FUN_14127b0d4(&local_78);
          cVar4 = FUN_14127b142(param_2,uVar5);
          if (cVar4 == '\0') goto LAB_14127b02c;
          bVar3 = false;
        }
        else {
          if ((local_70 & 0xffffff) != 0) goto LAB_14127b015;
LAB_14127b02c:
          bVar3 = true;
          plVar6 = unaff_RBX;
        }
        local_78 = &PTR_FUN_14a5af930;
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        local_78 = &PTR_FUN_14a184370;
        (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_60])(&local_70);
        unaff_RBX = plVar6;
        if (!bVar3) goto LAB_14127b08c;
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar1 * 8 != lVar7);
  }
  plVar6 = (longlong *)0x0;
LAB_14127b08c:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar6;
}



// FUNCTION 14127b0d4 FUN_14127b0d4 body=109 status=ok
// SIG undefined FUN_14127b0d4(void)

undefined8 FUN_14127b0d4(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1408e4d18(param_1,&local_28);
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
    return local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14127b142 FUN_14127b142 body=139 status=ok
// SIG undefined FUN_14127b142(void)

ulonglong FUN_14127b142(longlong param_1,longlong *param_2)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 unaff_RBX;
  
  if ((&DAT_149fc1b6e)[*(byte *)(param_1 + 0x18)] == '\x01') {
    if (*(longlong **)(param_1 + 8) == (longlong *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
      uVar4 = (ulonglong)uVar2;
    }
  }
  else {
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),(*(uint *)(param_1 + 8) & 0xffffff) != 0);
  }
  bVar1 = (**(code **)(*param_2 + 0x28))(param_2);
  uVar3 = CONCAT71((int7)((uVar4 & 0xffffffff) >> 8),(byte)(uVar4 & 0xffffffff) ^ bVar1) ^ 1;
  if (((char)uVar4 != '\0') && (bVar1 != 0)) {
    if ((&DAT_149fc1b6e)[*(byte *)(param_1 + 0x18)] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00014127b1ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8),param_2);
      return uVar4;
    }
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 14127b1cd FUN_14127b1cd body=75 status=ok
// SIG undefined FUN_14127b1cd(void)

void FUN_14127b1cd(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14127b218 FUN_14127b218 body=300 status=ok
// SIG undefined FUN_14127b218(void)

void FUN_14127b218(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_14480f766(&DAT_14cb975f0);
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  lVar5 = FUN_14127b900(param_1);
  if (lVar5 != 0) {
    lVar5 = FUN_1400f6f32(lVar5);
    if (((lVar5 != 0) && (*(longlong *)(lVar5 + 0x68) != 0)) && (*(longlong *)(param_1 + 0x80) != 0)
       ) {
      FUN_14480f766(*(longlong *)(lVar5 + 0x68) + 0x58);
    }
  }
  FUN_14127b3b4(param_1);
  *(undefined4 *)(param_1 + 0xd0) = 0;
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_1400020a8();
  }
  FUN_14127b344(param_1 + 0x88);
  plVar3 = *(longlong **)(param_1 + 0x70);
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
  plVar3 = (longlong *)(param_1 + 0x58);
  if (*(int *)(param_1 + 0x60) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_14127b2df;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_14127b2df:
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_14127b37c(param_1 + 8);
  return;
}



// FUNCTION 14127b344 FUN_14127b344 body=55 status=ok
// SIG undefined FUN_14127b344(void)

void FUN_14127b344(longlong *param_1)

{
  FUN_14127b968(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14127b37c FUN_14127b37c body=55 status=ok
// SIG undefined FUN_14127b37c(void)

void FUN_14127b37c(longlong *param_1)

{
  FUN_14127b9e2(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14127b3b4 FUN_14127b3b4 body=1354 status=ok
// SIG undefined FUN_14127b3b4(void)

void FUN_14127b3b4(longlong param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  longlong **pplVar18;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  uint *local_a0;
  undefined8 local_98;
  uint *puStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  undefined4 uStack_70;
  uint uStack_6c;
  uint *local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar6 = (longlong *)(param_1 + 8);
  iVar4 = *(int *)(param_1 + 0x50);
  if (iVar4 < 2) {
    lVar17 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar17 = *(longlong *)(param_1 + 0x48);
    }
    iVar7 = iVar4 + 3;
    if (-1 < iVar4) {
      iVar7 = iVar4;
    }
    if (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x3c) < iVar7 >> 2) {
      puVar11 = (uint *)(param_1 + 0x18);
      local_98 = (longlong *)&DAT_100000000;
      local_88 = 0xffffffff;
      uStack_80 = 0;
      puStack_90 = puVar11;
      if (*(int *)(param_1 + 0x30) == 0) {
        iVar4 = 0;
      }
      else {
        FUN_1449c0562(&local_98);
        iVar4 = *(int *)(param_1 + 0x30);
      }
      uStack_70 = (undefined4)local_98;
      uStack_6c = local_98._4_4_;
      uStack_58 = CONCAT44(uStack_7c,uStack_80);
      local_68 = puStack_90;
      uStack_60 = local_88;
      uVar3 = uStack_60;
      uStack_60._4_4_ = (int)((ulonglong)local_88 >> 0x20);
      iVar7 = uStack_60._4_4_;
      local_78 = plVar6;
      if ((uStack_60._4_4_ != iVar4) || (uStack_60 = local_88, puStack_90 != puVar11)) {
        do {
          uStack_60 = uVar3;
          *(undefined4 *)
           (lVar17 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar7 * 0x20) * 4) = 0xffffffff
          ;
          uStack_60 = CONCAT44(uStack_60._4_4_,(uint)uStack_60 & ~uStack_6c);
          FUN_1449c0562(&uStack_70);
          iVar7 = uStack_60._4_4_;
          uVar3 = uStack_60;
        } while (local_78 != plVar6 || (local_68 != puVar11 || uStack_60._4_4_ != iVar4));
      }
    }
    else if (iVar4 == 1) {
      lVar5 = 0;
      do {
        *(undefined4 *)(lVar17 + lVar5 * 4) = 0xffffffff;
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(int *)(param_1 + 0x50));
    }
    FUN_14127b9e2(plVar6,0);
  }
  else {
    FUN_14127b9e2(plVar6,0);
    *(undefined4 *)(param_1 + 0x50) = 1;
    FUN_145778138();
  }
  local_a8 = (longlong *)(param_1 + 0x88);
  local_a0 = (uint *)(param_1 + 0x98);
  iVar4 = *(int *)(param_1 + 0xb0);
  if (iVar4 == 0) {
    uVar15 = 1;
    uVar12 = 0;
    iVar7 = 0;
    iVar16 = 0;
  }
  else {
    puVar11 = *(uint **)(param_1 + 0xa8);
    if (*(uint **)(param_1 + 0xa8) == (uint *)0x0) {
      puVar11 = local_a0;
    }
    uVar13 = *puVar11;
    if (uVar13 == 0) {
      iVar7 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar7 = iVar4 + -1;
      }
      uVar12 = 0;
      uVar15 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar15 = uVar12;
      }
      iVar16 = 0;
      do {
        if (uVar15 == uVar12) {
          iVar4 = 1;
          goto LAB_14127b61c;
        }
        iVar16 = iVar16 + 0x20;
        uVar13 = puVar11[uVar12 + 1];
        uVar12 = uVar12 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar12 = 0;
      iVar16 = 0;
    }
    uVar15 = (ulonglong)(-uVar13 & uVar13);
    uVar14 = uVar15 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    iVar7 = (iVar16 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar7) {
      iVar7 = iVar4;
    }
  }
  if (iVar7 < iVar4) {
    uVar13 = 0xffffffff;
    do {
      lVar17 = (longlong)iVar7 * 0x30;
      plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x88) + lVar17);
      FUN_14127b900(param_1);
      local_78 = plVar6;
      plVar6 = (longlong *)FUN_1401e3228(&local_78);
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0xb8))(plVar6,&local_98);
        if (local_98 != (longlong *)0x0) {
          plVar6 = (longlong *)(*local_a8 + 8 + lVar17);
          local_78 = (longlong *)*plVar6;
          uStack_70 = (undefined4)plVar6[1];
          uStack_6c = *(uint *)((longlong)plVar6 + 0xc);
          puVar2 = (undefined8 *)(*local_a8 + 0x18 + lVar17);
          local_68 = (uint *)*puVar2;
          uStack_60 = puVar2[1];
          uVar14 = 0;
          pplVar18 = &local_78;
          do {
            (**(code **)(*local_98 + 0x18))(local_98,uVar14 & 0xffffffff,pplVar18);
            uVar14 = uVar14 + 1;
            pplVar18 = pplVar18 + 1;
          } while (uVar14 != 4);
        }
        puVar11 = puStack_90;
        if (puStack_90 != (uint *)0x0) {
          LOCK();
          puVar1 = puStack_90 + 2;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if (*puVar1 == 0) {
            (*(code *)**(undefined8 **)puStack_90)(puStack_90);
            LOCK();
            puVar1 = puVar11 + 3;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if (*puVar1 == 0) {
              (**(code **)(*(longlong *)puVar11 + 0x10))(puVar11);
            }
          }
        }
      }
      uVar13 = uVar13 & ~(uint)uVar15;
      puVar11 = *(uint **)(param_1 + 0xa8);
      if (*(uint **)(param_1 + 0xa8) == (uint *)0x0) {
        puVar11 = local_a0;
      }
      iVar4 = *(int *)(param_1 + 0xb0);
      iVar7 = (int)uVar12;
      lVar17 = (longlong)iVar7;
      uVar8 = puVar11[lVar17] & uVar13;
      if (uVar8 == 0) {
        iVar9 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar9 = iVar4 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar10 = iVar9;
        if (iVar9 < iVar7) {
          iVar10 = iVar7;
        }
        if (iVar9 <= iVar7) break;
        lVar5 = 0;
        while( true ) {
          iVar16 = iVar16 + 0x20;
          uVar8 = puVar11[lVar17 + lVar5 + 1];
          if (uVar8 != 0) break;
          lVar5 = lVar5 + 1;
          if (iVar10 - lVar17 == lVar5) goto LAB_14127b61c;
        }
        uVar12 = (ulonglong)(iVar7 + (int)lVar5 + 1);
        uVar13 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar8 & uVar8);
      uVar14 = uVar15 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iVar7 = (iVar16 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar4);
  }
LAB_14127b61c:
  plVar6 = local_a8;
  iVar7 = *(int *)(param_1 + 0xd0);
  if (iVar7 < 2) {
    lVar17 = param_1 + 0xc0;
    if (*(longlong *)(param_1 + 200) != 0) {
      lVar17 = *(longlong *)(param_1 + 200);
    }
    iVar16 = iVar7 + 3;
    if (-1 < iVar7) {
      iVar16 = iVar7;
    }
    if (*(int *)(param_1 + 0x90) - *(int *)(param_1 + 0xbc) < iVar16 >> 2) {
      local_98 = (longlong *)&DAT_100000000;
      local_88 = 0xffffffff;
      uStack_80 = 0;
      puStack_90 = local_a0;
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        FUN_1449c0562(&local_98);
        iVar4 = *(int *)(param_1 + 0xb0);
      }
      local_78 = local_a8;
      uStack_70 = (undefined4)local_98;
      uStack_6c = local_98._4_4_;
      uStack_58 = CONCAT44(uStack_7c,uStack_80);
      local_68 = puStack_90;
      uStack_60 = local_88;
      uVar3 = uStack_60;
      uStack_60._4_4_ = (int)((ulonglong)local_88 >> 0x20);
      iVar7 = uStack_60._4_4_;
      if ((uStack_60._4_4_ != iVar4) || (uStack_60 = local_88, puStack_90 != local_a0)) {
        do {
          uStack_60 = uVar3;
          *(undefined4 *)
           (lVar17 + (longlong)*(int *)(*local_78 + 0x2c + (longlong)iVar7 * 0x30) * 4) = 0xffffffff
          ;
          uStack_60 = CONCAT44(uStack_60._4_4_,(uint)uStack_60 & ~uStack_6c);
          FUN_1449c0562(&uStack_70);
          iVar7 = uStack_60._4_4_;
          uVar3 = uStack_60;
        } while (local_78 != local_a8 || (local_68 != local_a0 || uStack_60._4_4_ != iVar4));
      }
    }
    else if (iVar7 == 1) {
      lVar5 = 0;
      do {
        *(undefined4 *)(lVar17 + lVar5 * 4) = 0xffffffff;
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(int *)(param_1 + 0xd0));
    }
    FUN_14127b968(local_a8,0);
  }
  else {
    FUN_14127b968(local_a8,0);
    *(undefined4 *)(param_1 + 0xd0) = 1;
    FUN_14577831e(plVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14127b900 FUN_14127b900 body=103 status=ok
// SIG undefined FUN_14127b900(void)

undefined8 FUN_14127b900(uint *param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_1[1] != 0) {
    uVar1 = *param_1;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) {
      return 0;
    }
    plVar2 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar2 != (longlong *)0x0) && (*(uint *)(plVar2 + 2) == param_1[1])) &&
       ((*(uint *)(plVar2 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar2 + 1) & 0x10200000) == 0) {
        lVar3 = *plVar2;
      }
      else {
        lVar3 = 0;
      }
      if (*(longlong *)(lVar3 + 0x30) != 0) {
        return *(undefined8 *)(*(longlong *)(lVar3 + 0x30) + 0x360);
      }
    }
  }
  return 0;
}



// FUNCTION 14127b968 FUN_14127b968 body=121 status=ok
// SIG undefined FUN_14127b968(void)

void FUN_14127b968(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14494313c(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 14127b9e2 FUN_14127b9e2 body=528 status=ok
// SIG undefined FUN_14127b9e2(void)

void FUN_14127b9e2(longlong *param_1,int param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    uVar13 = 0;
    uVar14 = 1;
    iVar11 = 0;
    iVar4 = 0;
  }
  else {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar12 = *puVar8;
    if (uVar12 == 0) {
      iVar11 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar11 = iVar3 + -1;
      }
      uVar13 = 0;
      uVar14 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar14 = uVar13;
      }
      iVar11 = 0;
      do {
        if (uVar14 == uVar13) goto LAB_14127bb71;
        iVar11 = iVar11 + 0x20;
        uVar12 = puVar8[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar13 = 0;
      iVar11 = 0;
    }
    uVar14 = (ulonglong)(-uVar12 & uVar12);
    uVar2 = uVar14 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar4 = (iVar11 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar4) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 < iVar3) {
    uVar12 = 0xffffffff;
    do {
      lVar10 = *param_1;
      lVar9 = (longlong)iVar4 * 0x20;
      FUN_14127bbf3(*(undefined8 *)(lVar10 + 8 + lVar9),*(undefined4 *)(lVar10 + 0x10 + lVar9));
      if (*(longlong *)(lVar10 + 8 + lVar9) != 0) {
        FUN_1400020a8();
      }
      uVar12 = uVar12 & ~(uint)uVar14;
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = puVar1;
      }
      iVar3 = (int)param_1[5];
      iVar4 = (int)uVar13;
      lVar10 = (longlong)iVar4;
      uVar5 = puVar8[lVar10] & uVar12;
      if (uVar5 == 0) {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar7 = iVar6;
        if (iVar6 < iVar4) {
          iVar7 = iVar4;
        }
        if (iVar6 <= iVar4) break;
        lVar9 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar5 = puVar8[lVar10 + lVar9 + 1];
          if (uVar5 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar7 - lVar10 == lVar9) goto LAB_14127bb71;
        }
        uVar13 = (ulonglong)(iVar4 + (int)lVar9 + 1);
        uVar12 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar5 & uVar5);
      uVar2 = uVar14 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar4 = (iVar11 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    } while (iVar4 < iVar3);
  }
LAB_14127bb71:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar12 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar12 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar5 = 0x80;
  if (0x80 < (int)uVar12) {
    uVar5 = uVar12;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar5;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 14127bbf3 FUN_14127bbf3 body=65 status=ok
// SIG undefined FUN_14127bbf3(void)

void FUN_14127bbf3(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(param_1 + 3)])(param_1 + 1);
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 14127bc34 FUN_14127bc34 body=8 status=ok
// SIG undefined FUN_14127bc34(void)

undefined8 FUN_14127bc34(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x488);
}



// FUNCTION 14127bc3c FUN_14127bc3c body=370 status=ok
// SIG undefined FUN_14127bc3c(void)

undefined8 * FUN_14127bc3c(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if ((((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))(), cVar4 != '\0')) {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar1 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar7 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar7 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar7);
              FUN_14005b248(param_1);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar7 < iVar5);
        }
        iVar7 = 2;
        if (2 < iVar5 * 2) {
          iVar7 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar7;
        if ((iVar7 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_38);
      uVar6 = local_38;
    }
    *param_2 = uVar6;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(param_1,iVar1);
    }
    lVar3 = *param_1;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar3 + lVar8) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar8) = 0;
    *(longlong *)(lVar3 + lVar8) = *param_3;
    *param_3 = 0;
    *(int *)(lVar3 + 8 + lVar8) = (int)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14127bdbc FUN_14127bdbc body=174 status=ok
// SIG undefined FUN_14127bdbc(void)

longlong * FUN_14127bdbc(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  *param_2 = 0;
  param_2[1] = 0;
  lVar5 = (**(code **)(*param_1 + 0x180))();
  lVar5 = *(longlong *)(lVar5 + 0x178);
  if ((lVar5 != 0) && (iVar1 = *(int *)(lVar5 + 0x3b0), (longlong)iVar1 != 0)) {
    lVar5 = *(longlong *)(lVar5 + 0x3a8);
    lVar7 = 0;
    do {
      lVar3 = *(longlong *)(lVar5 + lVar7);
      if ((*(byte *)(lVar3 + 0x39a) & 0x28) == 0) {
        if (lVar3 != 0) {
          plVar6 = (longlong *)FUN_1401b2ade(lVar3);
          if (plVar6 != (longlong *)0x0) {
            cVar4 = (**(code **)(*plVar6 + 0x6c8))(plVar6);
            if (cVar4 != '\0') goto LAB_14127be50;
          }
        }
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_14586eb08(param_2,iVar2);
        }
        *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar3;
      }
LAB_14127be50:
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar1 * 8 != lVar7);
  }
  return param_2;
}



// FUNCTION 14127be6a FUN_14127be6a body=375 status=ok
// SIG undefined FUN_14127be6a(void)

undefined8 * FUN_14127be6a(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if ((((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))(), cVar4 != '\0')) {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar1 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar7 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar7 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar7);
              FUN_14005b248(param_1);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar7 < iVar5);
        }
        iVar7 = 2;
        if (2 < iVar5 * 2) {
          iVar7 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar7;
        if ((iVar7 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_38);
      uVar6 = local_38;
    }
    *param_2 = uVar6;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(param_1,iVar1);
    }
    lVar3 = *param_1;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar3 + lVar8) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar8) = 0;
    *(longlong *)(lVar3 + lVar8) = *param_3;
    *param_3 = 0;
    *(int *)(lVar3 + 8 + lVar8) = (int)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14127c006 FUN_14127c006 body=136 status=ok
// SIG undefined FUN_14127c006(void)

undefined4 FUN_14127c006(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x3a8))(param_1,&local_28);
  if ((local_28 == 0) || (*(longlong *)(local_28 + 0x50) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_1414e62ca();
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
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14127c090 FUN_14127c090 body=134 status=ok
// SIG undefined FUN_14127c090(void)

undefined4 FUN_14127c090(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x3a8))(param_1,&local_28);
  uVar3 = 0;
  if ((local_28 != 0) && (*(longlong *)(local_28 + 0x50) != 0)) {
    uVar3 = FUN_14148f09a();
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
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14127c124 FUN_14127c124 body=272 status=ok
// SIG undefined FUN_14127c124(void)

void FUN_14127c124(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined ***pppuVar4;
  undefined1 auStack_a8 [32];
  code **local_88;
  undefined8 local_78;
  longlong *local_70;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((*(longlong *)(param_1 + 0x68) == 0) || (*(longlong *)(param_1 + 0x70) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x70) + 8) < 1)) {
    uVar3 = FUN_1401cb356();
    local_88 = local_68;
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14b9b47b0;
    local_68[0] = FUN_14428ce52;
    local_40 = param_1;
    FUN_1401cbba4(uVar3,&local_78,L"RefreshNetworkData",0);
    *(undefined8 *)(param_1 + 0x68) = local_78;
    local_78 = 0;
    plVar2 = *(longlong **)(param_1 + 0x70);
    *(longlong **)(param_1 + 0x70) = local_70;
    local_70 = (longlong *)0x0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
      if (local_70 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_70 + 0x10))();
        }
      }
    }
    if (local_68[0] != (code *)0x0) {
      pppuVar4 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar4 = &local_48;
      }
      (*(code *)(*pppuVar4)[2])();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14127c25a FUN_14127c25a body=2099 status=ok
// SIG undefined FUN_14127c25a(void)

uint * FUN_14127c25a(uint *param_1,longlong param_2,uint *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  longlong *plVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 == 0) {
    param_1[1] = 0;
LAB_14127c94a:
    *param_1 = 0;
    uVar6 = 0;
  }
  else {
    lVar15 = *(longlong *)(param_2 + 0x1f0);
    param_1[0] = 0;
    param_1[1] = 0;
    if (lVar15 == 0) goto LAB_14127c94a;
    uVar6 = *(uint *)(lVar15 + 0xc);
    *param_1 = uVar6;
    if ((int)uVar6 < DAT_14c9647dc) {
      lVar15 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
    }
    else {
      lVar15 = 0;
    }
    uVar6 = *(uint *)(lVar15 + 0x10);
    if (*(uint *)(lVar15 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      uVar11 = DAT_14c964868 + 1;
      bVar17 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar17) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar11);
      }
      LOCK();
      uVar6 = *(uint *)(lVar15 + 0x10);
      bVar17 = uVar6 == 0;
      if (bVar17) {
        *(uint *)(lVar15 + 0x10) = uVar11;
        uVar6 = 0;
      }
      UNLOCK();
      if (bVar17) {
        uVar6 = uVar11;
      }
    }
  }
  param_1[1] = uVar6;
  plVar13 = (longlong *)0x0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0xd] = 0x80;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  if (param_1 + 0x16 != param_3) {
    local_70 = (longlong *)0x0;
    local_68 = 0;
    if (param_3[2] == 0) {
      uVar6 = 0;
LAB_14127c959:
      local_68 = 0;
      local_70 = (longlong *)0x0;
      *(longlong **)(param_1 + 0x16) = plVar13;
      param_1[0x18] = uVar6;
    }
    else {
      plVar2 = *(longlong **)param_3;
      uVar6 = 0;
      if (plVar2 == (longlong *)0x0) goto LAB_14127c959;
      (**(code **)(*plVar2 + 0x40))(plVar2,&local_70);
      uVar6 = local_68;
      plVar13 = local_70;
      puVar8 = *(undefined8 **)(param_1 + 0x16);
      local_70 = (longlong *)0x0;
      local_68 = 0;
      if (param_1[0x18] != 0) {
        if (puVar8 == (undefined8 *)0x0) goto LAB_14127c959;
        (**(code **)*puVar8)(puVar8,0);
        FUN_1446efa72(param_1 + 0x16,0,0,0x10);
        param_1[0x18] = 0;
        puVar8 = *(undefined8 **)(param_1 + 0x16);
      }
      if (puVar8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      *(longlong **)(param_1 + 0x16) = plVar13;
      param_1[0x18] = uVar6;
      if (local_68 != 0) {
        if (local_70 == (longlong *)0x0) goto LAB_14127c3a5;
        (**(code **)*local_70)(local_70,0);
        FUN_1446efa72(&local_70,0,0,0x10);
        local_68 = 0;
      }
    }
    if (local_70 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14127c3a5:
  puVar8 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar8[1] = &DAT_100000001;
  *puVar8 = &PTR_FUN_14b423bf0;
  *(undefined4 *)(puVar8 + 2) = 0x4d2;
  *(undefined8 **)(param_1 + 0x1a) = puVar8 + 2;
  *(undefined8 **)(param_1 + 0x1c) = puVar8;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x2d] = 0x80;
  param_1[0x2e] = 0xffffffff;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  lVar15 = FUN_14127b900(param_1);
  if (((lVar15 != 0) && (lVar15 = FUN_1400f6f32(lVar15), lVar15 != 0)) &&
     (lVar15 = *(longlong *)(lVar15 + 0x68), lVar15 != 0)) {
    lVar16 = *(longlong *)(param_1 + 0x1a);
    plVar13 = *(longlong **)(param_1 + 0x1c);
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar13 + 0xc) = *(int *)((longlong)plVar13 + 0xc) + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar13 + 0xc) = *(int *)((longlong)plVar13 + 0xc) + 1;
      UNLOCK();
    }
    local_70 = (longlong *)0x0;
    local_68 = 0;
    FUN_1446efa72(&local_70,0,3,0x10);
    local_68 = 3;
    *local_70 = (longlong)&PTR_LAB_14b4f0100;
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
    local_70[2] = lVar9;
    *local_70 = (longlong)&PTR_FUN_14b4f0090;
    local_70[3] = (longlong)param_1;
    local_70[4] = lVar16;
    local_70[5] = (longlong)plVar13;
    if ((local_70 == (longlong *)0x0) || (cVar5 = (**(code **)(*local_70 + 0x30))(), cVar5 == '\0'))
    {
      if (local_68 == 0) {
        uVar14 = 0;
        goto LAB_14127c593;
      }
      if (local_70 != (longlong *)0x0) {
        uVar14 = 0;
        (**(code **)*local_70)(local_70,0);
        FUN_1446efa72(&local_70,0,0,0x10);
        goto LAB_14127c586;
      }
      uVar14 = 0;
    }
    else {
      plVar2 = (longlong *)(lVar15 + 0x58);
      if (*(int *)(lVar15 + 0x6c) < 1) {
        iVar10 = *(int *)(lVar15 + 0x60);
        iVar7 = *(int *)(lVar15 + 0x68) + -1;
        *(int *)(lVar15 + 0x68) = iVar7;
        if (iVar7 <= iVar10) {
          iVar7 = iVar10;
          if (0 < iVar10) {
            iVar12 = 0;
            do {
              if (((*(int *)(*plVar2 + 8 + (longlong)iVar12 * 0x10) == 0) ||
                  (plVar3 = *(longlong **)(*plVar2 + (longlong)iVar12 * 0x10),
                  plVar3 == (longlong *)0x0)) ||
                 (cVar5 = (**(code **)(*plVar3 + 0x28))(), cVar5 != '\0')) {
                FUN_14005b288(plVar2,iVar12);
                FUN_14005b248(plVar2);
              }
              else {
                iVar12 = iVar12 + 1;
              }
              iVar7 = *(int *)(lVar15 + 0x60);
            } while (iVar12 < iVar7);
          }
          iVar12 = 2;
          if (2 < iVar7 * 2) {
            iVar12 = iVar7 * 2;
          }
          *(int *)(lVar15 + 0x68) = iVar12;
          if ((iVar12 < iVar10) && (*(int *)(lVar15 + 100) != iVar7)) {
            FUN_14045812c();
          }
        }
      }
      uVar14 = 0;
      if ((local_68 != 0) && (local_70 != (longlong *)0x0)) {
        (**(code **)(*local_70 + 0x38))(local_70,&local_78);
        uVar14 = local_78;
      }
      iVar10 = *(int *)(lVar15 + 0x60);
      *(uint *)(lVar15 + 0x60) = iVar10 + 1U;
      if (*(uint *)(lVar15 + 100) < iVar10 + 1U) {
        FUN_1447a71f6(plVar2,iVar10);
      }
      lVar15 = *plVar2;
      lVar16 = (longlong)iVar10 * 0x10;
      *(undefined8 *)(lVar15 + lVar16) = 0;
      *(undefined4 *)(lVar15 + 8 + lVar16) = 0;
      *(longlong **)(lVar15 + lVar16) = local_70;
      local_70 = (longlong *)0x0;
      *(uint *)(lVar15 + 8 + lVar16) = local_68;
LAB_14127c586:
      local_68 = 0;
LAB_14127c593:
      if (local_70 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    *(undefined8 *)(param_1 + 0x20) = uVar14;
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  lVar15 = *(longlong *)(param_1 + 0x1a);
  lVar16 = *(longlong *)(param_1 + 0x1c);
  if (lVar16 != 0) {
    LOCK();
    *(int *)(lVar16 + 0xc) = *(int *)(lVar16 + 0xc) + 1;
    UNLOCK();
  }
  local_70 = (longlong *)0x0;
  local_68 = 0;
  FUN_1446efa72(&local_70,0,3,0x10);
  local_68 = 3;
  *local_70 = (longlong)&PTR_LAB_149e020b0;
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
  local_70[2] = lVar9;
  *local_70 = (longlong)&PTR_FUN_14b4f0170;
  local_70[3] = (longlong)param_1;
  local_70[4] = lVar15;
  local_70[5] = lVar16;
  if ((local_70 == (longlong *)0x0) ||
     (cVar5 = (**(code **)(*local_70 + 0x30))(), uVar6 = DAT_14cb975f8, cVar5 == '\0')) {
    if (local_68 == 0) {
      uVar14 = 0;
      goto LAB_14127c710;
    }
    if (local_70 != (longlong *)0x0) {
      uVar14 = 0;
      (**(code **)*local_70)(local_70,0);
      FUN_1446efa72(&local_70,0,0,0x10);
      goto LAB_14127c703;
    }
    uVar14 = 0;
  }
  else {
    if ((DAT_14cb97604 < 1) &&
       (DAT_14cb97600 = DAT_14cb97600 + -1, DAT_14cb97600 <= (int)DAT_14cb975f8)) {
      if (0 < (int)DAT_14cb975f8) {
        iVar10 = 0;
        do {
          if (((*(int *)(DAT_14cb975f0 + 8 + (longlong)iVar10 * 0x10) == 0) ||
              (plVar13 = *(longlong **)(DAT_14cb975f0 + (longlong)iVar10 * 0x10),
              plVar13 == (longlong *)0x0)) ||
             (cVar5 = (**(code **)(*plVar13 + 0x28))(), cVar5 != '\0')) {
            FUN_14005b288(&DAT_14cb975f0,iVar10);
            FUN_14005b248(&DAT_14cb975f0);
          }
          else {
            iVar10 = iVar10 + 1;
          }
        } while (iVar10 < (int)DAT_14cb975f8);
      }
      DAT_14cb97600 = 2;
      if (2 < (int)(DAT_14cb975f8 * 2)) {
        DAT_14cb97600 = DAT_14cb975f8 * 2;
      }
      if ((DAT_14cb97600 < (int)uVar6) && (DAT_14cb975fc != DAT_14cb975f8)) {
        FUN_14045812c();
      }
    }
    uVar14 = 0;
    if ((local_68 != 0) && (local_70 != (longlong *)0x0)) {
      (**(code **)(*local_70 + 0x38))(local_70,&local_78);
      uVar14 = local_78;
    }
    uVar6 = DAT_14cb975f8;
    lVar15 = (longlong)(int)DAT_14cb975f8;
    DAT_14cb975f8 = DAT_14cb975f8 + 1;
    if (DAT_14cb975fc < DAT_14cb975f8) {
      FUN_1447a71f6(&DAT_14cb975f0,uVar6);
    }
    lVar16 = DAT_14cb975f0;
    lVar15 = lVar15 * 0x10;
    *(undefined8 *)(DAT_14cb975f0 + lVar15) = 0;
    *(undefined4 *)(lVar16 + 8 + lVar15) = 0;
    *(longlong **)(lVar16 + lVar15) = local_70;
    local_70 = (longlong *)0x0;
    *(uint *)(lVar16 + 8 + lVar15) = local_68;
LAB_14127c703:
    local_68 = 0;
LAB_14127c710:
    if (local_70 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  *(undefined8 *)(param_1 + 0x1e) = uVar14;
  if (param_3[2] != 0) {
    puVar8 = *(undefined8 **)param_3;
    if (puVar8 == (undefined8 *)0x0) goto LAB_14127c72e;
    (**(code **)*puVar8)(puVar8,0);
    FUN_1446efa72(param_3,0,0,0x10);
    param_3[2] = 0;
  }
  if (*(longlong *)param_3 != 0) {
    FUN_1400020a8();
  }
LAB_14127c72e:
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14127ca9a FUN_14127ca9a body=1250 status=ok
// SIG undefined FUN_14127ca9a(void)

/* WARNING: Removing unreachable block (ram,0x00014127ce82) */
/* WARNING: Removing unreachable block (ram,0x00014127cd52) */

void FUN_14127ca9a(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  char cVar8;
  uint uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined4 uVar17;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  longlong local_b8 [4];
  undefined8 *local_98;
  ulonglong uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong *local_78;
  longlong *plStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  cVar8 = FUN_1458708a6(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x70));
  if (cVar8 != '\0') {
    if (*(int *)(param_1 + 0x74) == 0) {
      plVar2 = (longlong *)(param_1 + 0xa0);
      FUN_14127d7ae(plVar2,uStack_90 & 0xffffffff);
      if ((longlong)(int)uStack_90 != 0) {
        lVar14 = (longlong)(int)uStack_90 << 4;
        puVar11 = local_98;
        do {
          cVar8 = FUN_143f44c64(param_1,puVar11);
          if (cVar8 != '\0') {
            iVar3 = *(int *)(param_1 + 0xa8);
            *(uint *)(param_1 + 0xa8) = iVar3 + 1U;
            if (*(uint *)(param_1 + 0xac) < iVar3 + 1U) {
              FUN_140b722da(plVar2,iVar3);
            }
            lVar12 = *plVar2;
            *(undefined8 *)(lVar12 + (longlong)iVar3 * 0x10) = *puVar11;
            lVar5 = puVar11[1];
            *(longlong *)(lVar12 + 8 + (longlong)iVar3 * 0x10) = lVar5;
            if (lVar5 != 0) {
              LOCK();
              *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
              UNLOCK();
            }
          }
          puVar11 = puVar11 + 2;
          lVar14 = lVar14 + -0x10;
        } while (lVar14 != 0);
      }
      plVar2 = (longlong *)(param_1 + 0xb0);
      FUN_1408be27e(plVar2,*(undefined4 *)(param_1 + 0xa8));
      lVar14 = FUN_1415ca610(*(undefined8 *)(param_1 + 0x50));
      if ((lVar14 != 0) && ((longlong)*(int *)(lVar14 + 0x40) != 0)) {
        lVar12 = 0;
        do {
          lVar5 = *(longlong *)(*(longlong *)(lVar14 + 0x38) + lVar12);
          if ((lVar5 != 0) && (*(int *)(lVar5 + 0xe0) == *(int *)(param_1 + 0x70))) {
            local_c0 = (longlong)*(int *)(param_1 + 0xa8);
            if (local_c0 != 0) {
              lVar14 = *(longlong *)(param_1 + 0xa0);
              local_c0 = local_c0 << 4;
              lVar12 = 0;
              do {
                FUN_140b6de3c();
                uVar17 = (**(code **)(**(longlong **)(lVar14 + lVar12) + 8))
                                   (*(longlong **)(lVar14 + lVar12),&local_88);
                FUN_140b6df48(uVar17,&local_78,lVar5,local_88);
                plVar6 = local_80;
                if (local_80 != (longlong *)0x0) {
                  LOCK();
                  plVar13 = local_80 + 1;
                  *(int *)plVar13 = (int)*plVar13 + -1;
                  UNLOCK();
                  if ((int)*plVar13 == 0) {
                    (**(code **)*local_80)(local_80);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar6 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar6 + 0x10))(plVar6);
                    }
                  }
                }
                plVar6 = local_78;
                if (local_78 == (longlong *)0x0) {
                  plVar10 = *(longlong **)(lVar14 + lVar12);
                  local_b8[0] = 0;
                  local_b8[1] = 0;
                  lVar16 = *plVar10;
                  plVar13 = local_b8;
                }
                else {
                  local_b8[2] = 0;
                  local_b8[3] = 0;
                  lVar16 = *local_78;
                  plVar13 = local_b8 + 2;
                  plVar10 = local_78;
                }
                (**(code **)(lVar16 + 0x18))(plVar10,&local_88,plVar13);
                iVar3 = *(int *)(param_1 + 0xb8);
                uVar9 = iVar3 + 1;
                *(uint *)(param_1 + 0xb8) = uVar9;
                if (*(uint *)(param_1 + 0xbc) < uVar9) {
                  FUN_1447a1bd6(plVar2);
                }
                lVar16 = *plVar2;
                lVar15 = (longlong)iVar3 * 0x10;
                *(undefined8 *)(lVar16 + lVar15) = 0;
                *(undefined8 *)(lVar16 + lVar15) = local_88;
                *(undefined4 *)(lVar16 + 8 + lVar15) = (undefined4)local_80;
                *(undefined4 *)(lVar16 + 0xc + lVar15) = local_80._4_4_;
                local_80 = (longlong *)0x0;
                local_88 = 0;
                lVar16 = local_b8[0];
                if (plVar6 != (longlong *)0x0) {
                  lVar16 = local_b8[2];
                }
                if (lVar16 != 0) {
                  FUN_1400020a8();
                }
                uVar7 = *(undefined8 *)(param_1 + 0x78);
                (**(code **)(**(longlong **)(lVar14 + lVar12) + 8))
                          (*(longlong **)(lVar14 + lVar12),&local_88);
                FUN_140b716a0(uVar7,&local_88);
                plVar6 = local_80;
                if (local_80 != (longlong *)0x0) {
                  LOCK();
                  plVar13 = local_80 + 1;
                  *(int *)plVar13 = (int)*plVar13 + -1;
                  UNLOCK();
                  if ((int)*plVar13 == 0) {
                    (**(code **)*local_80)(local_80);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar6 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar6 + 0x10))(plVar6);
                    }
                  }
                }
                plVar6 = plStack_70;
                if (plStack_70 != (longlong *)0x0) {
                  LOCK();
                  plVar13 = plStack_70 + 1;
                  *(int *)plVar13 = (int)*plVar13 + -1;
                  UNLOCK();
                  if ((int)*plVar13 == 0) {
                    (**(code **)*plStack_70)(plStack_70);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar6 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar6 + 0x10))(plVar6);
                    }
                  }
                }
                lVar12 = lVar12 + 0x10;
              } while (local_c0 != lVar12);
            }
            goto LAB_14127cf2a;
          }
          lVar12 = lVar12 + 8;
        } while ((longlong)*(int *)(lVar14 + 0x40) * 8 != lVar12);
      }
      iVar3 = *(int *)(param_1 + 0xa8);
      if ((longlong)iVar3 != 0) {
        lVar14 = *(longlong *)(param_1 + 0xa0);
        lVar12 = 0;
        uVar7 = local_88;
        plVar6 = local_80;
        do {
          local_80 = plVar6;
          local_88 = uVar7;
          plVar6 = *(longlong **)(lVar14 + lVar12);
          local_78 = (longlong *)0x0;
          plStack_70 = (longlong *)0x0;
          (**(code **)(*plVar6 + 0x18))(plVar6,&local_88,&local_78);
          if (local_78 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          iVar4 = *(int *)(param_1 + 0xb8);
          *(uint *)(param_1 + 0xb8) = iVar4 + 1U;
          if (*(uint *)(param_1 + 0xbc) < iVar4 + 1U) {
            FUN_1447a1bd6(plVar2,iVar4);
          }
          lVar5 = *plVar2;
          lVar16 = (longlong)iVar4 * 0x10;
          *(undefined8 *)(lVar5 + lVar16) = 0;
          *(undefined8 *)(lVar5 + lVar16) = local_88;
          local_88 = 0;
          uVar7 = local_88;
          *(undefined4 *)(lVar5 + 8 + lVar16) = (undefined4)local_80;
          *(undefined4 *)(lVar5 + 0xc + lVar16) = local_80._4_4_;
          local_80 = (longlong *)0x0;
          plVar6 = local_80;
          local_80 = (longlong *)0x0;
          local_88 = 0;
          lVar12 = lVar12 + 0x10;
        } while ((longlong)iVar3 * 0x10 != lVar12);
      }
    }
    else if (*(int *)(param_1 + 0x74) == 1) {
      plVar2 = (longlong *)(param_1 + 0x90);
      FUN_1459b6bf6(plVar2,uStack_90 & 0xffffffff);
      if ((longlong)(int)uStack_90 != 0) {
        lVar14 = (longlong)(int)uStack_90 << 4;
        puVar11 = local_98;
        do {
          cVar8 = FUN_143f44c64(param_1,puVar11);
          if (cVar8 != '\0') {
            (**(code **)(*(longlong *)*puVar11 + 8))((longlong *)*puVar11,&local_78);
            iVar3 = *(int *)(param_1 + 0x98);
            *(uint *)(param_1 + 0x98) = iVar3 + 1U;
            if (*(uint *)(param_1 + 0x9c) < iVar3 + 1U) {
              FUN_1413eac7e(plVar2,iVar3);
            }
            plVar6 = plStack_70;
            lVar12 = *plVar2;
            *(longlong **)(lVar12 + (longlong)iVar3 * 0x10) = local_78;
            *(longlong **)(lVar12 + 8 + (longlong)iVar3 * 0x10) = plStack_70;
            if (plStack_70 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
              UNLOCK();
              if (plStack_70 != (longlong *)0x0) {
                LOCK();
                plVar13 = plStack_70 + 1;
                *(int *)plVar13 = (int)*plVar13 + -1;
                UNLOCK();
                if ((int)*plVar13 == 0) {
                  (**(code **)*plStack_70)(plStack_70);
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
          puVar11 = puVar11 + 2;
          lVar14 = lVar14 + -0x10;
        } while (lVar14 != 0);
      }
    }
  }
LAB_14127cf2a:
  FUN_140b6c1c2(local_98,uStack_90 & 0xffffffff);
  if (local_98 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14127cf7e FUN_14127cf7e body=1502 status=ok
// SIG undefined FUN_14127cf7e(void)

ulonglong FUN_14127cf7e(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined8 *puVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auStack_118 [36];
  int local_f4;
  longlong *local_f0;
  undefined8 *local_e8;
  longlong local_e0;
  longlong *local_d8;
  longlong *local_d0;
  undefined8 *local_c8;
  longlong local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  uint local_a0;
  int iStack_9c;
  undefined4 local_98;
  undefined4 local_94;
  longlong *local_90;
  undefined8 *local_88;
  ulonglong uStack_80;
  longlong *local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  FUN_1458708a6(param_2,param_3,&local_88);
  puVar18 = local_88;
  iVar7 = (int)uStack_80;
  lVar17 = (longlong)(int)uStack_80;
  if (lVar17 != 0) {
    iVar9 = (**(code **)(*(longlong *)*local_88 + 0x30))();
    bVar20 = true;
    if (iVar9 == 2) {
      (**(code **)(*(longlong *)*puVar18 + 8))((longlong *)*puVar18,&local_b8);
      (**(code **)(*local_b8 + 0x10))(local_b8,&local_70);
      FUN_1446f470e(&local_50,L"SHIFT",1);
      plVar15 = local_b0;
      bVar20 = local_70 != local_50;
      if (local_b0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_b0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_b0)(local_b0);
          LOCK();
          piVar3 = (int *)((longlong)plVar15 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
          }
        }
      }
    }
    local_c0 = -lVar17;
    local_c8 = puVar18 + 2;
    iVar12 = 0;
    iVar9 = 0;
    local_e8 = puVar18;
    local_e0 = param_1;
LAB_14127d015:
    do {
      local_f4 = iVar9;
      if (iVar12 + 1 < iVar7) {
        lVar13 = (longlong)iVar12;
        lVar4 = local_c0 + lVar13;
        lVar19 = lVar13 + 2;
        puVar14 = local_c8 + lVar13 * 2;
        bVar6 = true;
        lVar13 = -1;
        do {
          iVar10 = (**(code **)(*(longlong *)*puVar14 + 0x30))();
          iVar9 = (int)lVar13;
          if (iVar10 == 2) {
            (**(code **)(*(longlong *)*puVar14 + 8))((longlong *)*puVar14,&local_b8);
            (**(code **)(*local_b8 + 0x10))(local_b8,&local_70);
            FUN_1446f470e(&local_50,L"SHIFT",1);
            local_d0 = local_50;
            local_d8 = local_70;
            local_f0 = local_b0;
            if (local_b0 != (longlong *)0x0) {
              LOCK();
              plVar15 = local_b0 + 1;
              *(int *)plVar15 = (int)*plVar15 + -1;
              UNLOCK();
              if ((int)*plVar15 == 0) {
                (**(code **)*local_b0)();
                LOCK();
                piVar3 = (int *)((longlong)local_f0 + 0xc);
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (*piVar3 == 0) {
                  (**(code **)(*local_f0 + 0x10))();
                }
              }
            }
            if ((local_d8 != local_d0) != bVar20) {
              puVar18 = local_e8;
              param_1 = local_e0;
              iVar10 = iVar12 - iVar9;
              break;
            }
          }
          else if (!bVar20) {
            iVar10 = iVar12 - iVar9;
            iVar9 = -iVar9;
            goto LAB_14127d1fa;
          }
          bVar6 = lVar19 < lVar17;
          lVar13 = lVar13 + -1;
          lVar19 = lVar19 + 1;
          puVar14 = puVar14 + 2;
          puVar18 = local_e8;
          param_1 = local_e0;
          iVar10 = iVar7;
        } while (lVar4 != lVar13);
      }
      else {
        bVar6 = false;
        iVar10 = iVar12 + 1;
      }
      iVar9 = iVar10 - iVar12;
      if (bVar20 != false) {
        FUN_140b6c1c2(puVar18 + (longlong)iVar12 * 2,iVar9);
        bVar20 = false;
        iVar9 = local_f4;
        iVar12 = iVar10;
        if (!bVar6) break;
        goto LAB_14127d015;
      }
LAB_14127d1fa:
      if (local_f4 != iVar12) {
        memmove(local_e8 + (longlong)local_f4 * 2,local_e8 + (longlong)iVar12 * 2,
                (longlong)iVar9 << 4);
      }
      iVar9 = local_f4 + iVar9;
      bVar20 = true;
      puVar18 = local_e8;
      param_1 = local_e0;
      iVar12 = iVar10;
    } while (bVar6);
    uStack_80 = CONCAT44(uStack_80._4_4_,iVar9);
  }
  plVar15 = (longlong *)(param_1 + 0x178);
  local_68 = (longlong *)(param_1 + 0x188);
  local_70 = (longlong *)&DAT_100000000;
  local_60 = 0xffffffff;
  iStack_5c = 0;
  local_58 = 0;
  if (*(int *)(param_1 + 0x1a0) != 0) {
    FUN_1449c0562(&local_70);
  }
  local_a0 = local_60;
  iStack_9c = iStack_5c;
  local_98 = local_58;
  local_94 = local_54;
  local_b0 = local_70;
  local_a8 = local_68;
  local_b8 = plVar15;
  local_90 = plVar15;
  if (iStack_5c < (int)local_68[3]) {
    do {
      plVar15 = (longlong *)0x0;
      if ((longlong)(int)uStack_80 != 0) {
        lVar19 = (longlong)iStack_9c;
        lVar17 = *local_b8;
        plVar15 = (longlong *)((longlong)(int)uStack_80 << 4);
        puVar18 = local_88;
        do {
          uVar5 = *(undefined8 *)(lVar19 * 0x18 + lVar17);
          (**(code **)(*(longlong *)*puVar18 + 8))((longlong *)*puVar18,&local_70);
          cVar8 = (**(code **)*local_70)(local_70,uVar5);
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
          if (cVar8 != '\0') {
            if (puVar18 != (undefined8 *)0x0) goto LAB_14127d445;
            break;
          }
          puVar18 = puVar18 + 2;
          plVar15 = plVar15 + -2;
        } while (plVar15 != (longlong *)0x0);
      }
      FUN_1459b6de4(local_90,iStack_9c);
LAB_14127d445:
      local_a0 = local_a0 & ~local_b0._4_4_;
      FUN_1449c0562(&local_b0);
    } while (iStack_9c < (int)local_a8[3]);
  }
  if ((int)uStack_80 == *(int *)(param_1 + 0x170)) {
    if ((int)uStack_80 < 1) {
      uVar16 = 0;
    }
    else {
      lVar17 = 0;
      lVar19 = 0;
      do {
        plVar15 = *(longlong **)(*(longlong *)(param_1 + 0x168) + lVar17);
        (**(code **)(*plVar15 + 8))(plVar15,&local_b8);
        plVar15 = local_b8;
        (**(code **)(**(longlong **)((longlong)local_88 + lVar17) + 8))
                  (*(longlong **)((longlong)local_88 + lVar17),&local_70);
        uVar11 = (**(code **)*local_70)(local_70,plVar15);
        plVar15 = local_68;
        if (local_68 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_68 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_68)(local_68);
            LOCK();
            piVar3 = (int *)((longlong)plVar15 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
        plVar15 = local_b0;
        if (local_b0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_b0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_b0)(local_b0);
            LOCK();
            piVar3 = (int *)((longlong)plVar15 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
        if ((char)uVar11 == '\0') break;
        lVar19 = lVar19 + 1;
        lVar17 = lVar17 + 0x10;
      } while (lVar19 < (int)uStack_80);
      uVar16 = (ulonglong)uVar11 ^ 1;
    }
  }
  else {
    uVar16 = CONCAT71((int7)((ulonglong)plVar15 >> 8),1);
  }
  FUN_140b6cdce((longlong *)(param_1 + 0x168),&local_88);
  FUN_140b6c1c2(local_88,uStack_80 & 0xffffffff);
  if (local_88 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar16 & 0xffffffff;
}



// FUNCTION 14127d55e FUN_14127d55e body=94 status=ok
// SIG undefined FUN_14127d55e(void)

void FUN_14127d55e(longlong *param_1,undefined8 *param_2)

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
    FUN_140b722da(param_1,iVar2);
  }
  FUN_140b6ce2b((longlong)iVar2 * 0x10 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 14127d5bc FUN_14127d5bc body=497 status=ok
// SIG undefined FUN_14127d5bc(void)

void FUN_14127d5bc(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  
  FUN_14127d7ae(param_2,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar11 = 1;
    uVar13 = 0;
    iVar8 = 0;
    iVar9 = 0;
  }
  else {
    puVar6 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar6 = (uint *)(param_1 + 2);
    }
    uVar12 = *puVar6;
    if (uVar12 == 0) {
      iVar8 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar8 = iVar2 + -1;
      }
      uVar13 = 0;
      uVar11 = (ulonglong)(uint)(iVar8 >> 5);
      if (iVar8 >> 5 < 1) {
        uVar11 = uVar13;
      }
      iVar9 = 0;
      do {
        if (uVar11 == uVar13) {
          return;
        }
        iVar9 = iVar9 + 0x20;
        uVar12 = puVar6[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar13 = 0;
      iVar9 = 0;
    }
    uVar11 = (ulonglong)(-uVar12 & uVar12);
    uVar1 = uVar11 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar8 = (iVar9 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar8) {
      iVar8 = iVar2;
    }
  }
  if (iVar8 < iVar2) {
    uVar12 = 0xffffffff;
    do {
      lVar10 = *param_1;
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_140b722da(param_2,iVar2);
      }
      lVar10 = lVar10 + (longlong)iVar8 * 0x28;
      lVar7 = *param_2;
      *(undefined8 *)(lVar7 + (longlong)iVar2 * 0x10) = *(undefined8 *)(lVar10 + 0x10);
      lVar10 = *(longlong *)(lVar10 + 0x18);
      *(longlong *)(lVar7 + 8 + (longlong)iVar2 * 0x10) = lVar10;
      if (lVar10 != 0) {
        LOCK();
        *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
        UNLOCK();
      }
      uVar12 = uVar12 & ~(uint)uVar11;
      puVar6 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar6 = (uint *)(param_1 + 2);
      }
      iVar2 = (int)param_1[5];
      iVar8 = (int)uVar13;
      lVar10 = (longlong)iVar8;
      uVar3 = puVar6[lVar10] & uVar12;
      if (uVar3 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar8) {
          iVar5 = iVar8;
        }
        if (iVar4 <= iVar8) {
          return;
        }
        lVar7 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar3 = puVar6[lVar10 + lVar7 + 1];
          if (uVar3 != 0) break;
          lVar7 = lVar7 + 1;
          if (iVar5 - lVar10 == lVar7) {
            return;
          }
        }
        uVar13 = (ulonglong)(iVar8 + (int)lVar7 + 1);
        uVar12 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar3 & uVar3);
      uVar1 = uVar11 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar8 = (iVar9 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    } while (iVar8 < iVar2);
  }
  return;
}



// FUNCTION 14127d7ae FUN_14127d7ae body=69 status=ok
// SIG undefined FUN_14127d7ae(void)

void FUN_14127d7ae(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_140b6c1c2(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_14127d7f4(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 14127d7f4 FUN_14127d7f4 body=226 status=ok
// SIG undefined FUN_14127d7f4(void)

void FUN_14127d7f4(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 14127d8d6 FUN_14127d8d6 body=4002 status=ok
// SIG undefined FUN_14127d8d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14127d8d6(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  void *pvVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  int *piVar17;
  int iVar18;
  int *piVar19;
  uint uVar20;
  longlong lVar21;
  int *piVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  int *piVar26;
  byte bVar27;
  uint uVar28;
  longlong lVar29;
  int iVar30;
  float fVar31;
  undefined1 auVar32 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar33 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auStack_3d8 [40];
  int *local_3b0;
  undefined8 *local_3a8;
  int *local_3a0;
  undefined1 local_398 [16];
  void *local_388;
  int local_380;
  undefined4 uStack_37c;
  undefined1 local_378 [16];
  undefined1 local_368 [16];
  undefined4 local_358 [190];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  if (*(int *)(param_1 + 0x74) != 1) {
    local_398 = (undefined1  [16])0x0;
    uVar28 = *(uint *)(param_1 + 0xa8);
    if ((int)uVar28 < 1) {
      if ((int)uVar28 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4();
      }
    }
    else {
      local_398 = ZEXT416(uVar28) << 0x40;
      FUN_1446f48e2(local_398,0);
      auVar8 = _DAT_149931e80;
      uVar10 = local_398._8_4_;
      if ((longlong)(int)local_398._8_4_ != 0) {
        uVar9 = local_398._0_8_;
        uVar16 = (longlong)(int)local_398._8_4_ + 0x3fffffffffffffff;
        uVar13 = uVar16 & 0x3fffffffffffffff;
        auVar32._8_4_ = (int)uVar13;
        auVar32._0_8_ = uVar13;
        auVar32._12_4_ = (int)(uVar13 >> 0x20);
        uVar14 = 0;
        auVar33 = pmovsxbq(in_XMM1,0x302);
        auVar34 = pmovsxbq(in_XMM2,0x100);
        auVar32 = auVar32 | _DAT_149931e80;
        do {
          lVar21 = auVar32._0_8_;
          lVar29 = auVar32._8_8_;
          iVar30 = (int)uVar14;
          if ((bool)(~(lVar21 < (longlong)(uVar14 ^ auVar8._0_8_)) & 1)) {
            *(int *)(local_398._0_8_ + uVar14 * 4) = iVar30;
          }
          auVar35._8_4_ = iVar30;
          auVar35._0_8_ = uVar14;
          auVar35._12_4_ = (int)(uVar14 >> 0x20);
          if ((longlong)((auVar35._8_8_ | auVar34._8_8_) ^ auVar8._8_8_) <= lVar29) {
            *(int *)(local_398._0_8_ + 4 + uVar14 * 4) = iVar30 + 1;
          }
          auVar35 = (auVar35 | auVar33) ^ auVar8;
          if (auVar35._0_8_ <= lVar21) {
            *(int *)(local_398._0_8_ + 8 + uVar14 * 4) = iVar30 + 2;
          }
          if (auVar35._8_8_ <= lVar29) {
            *(int *)(local_398._0_8_ + 0xc + uVar14 * 4) = iVar30 + 3;
          }
          uVar14 = uVar14 + 4;
        } while ((uVar13 - ((uint)uVar16 & 3)) + 4 != uVar14);
        lVar21 = (longlong)(int)local_398._8_4_;
        if (1 < lVar21) {
          memset(local_358,0,0x2f0);
          local_368._8_8_ = uVar9 + lVar21 * 4 + -4;
          local_368._0_8_ = uVar9;
          fVar31 = logf((float)(int)uVar10);
          local_358[0] = (int)(longlong)(fVar31 + fVar31);
          puVar11 = (undefined8 *)local_368;
          do {
            local_3a8 = puVar11;
            piVar22 = (int *)*local_3a8;
            piVar17 = (int *)local_3a8[1];
            iVar30 = *(int *)(local_3a8 + 2);
            iVar18 = (int)((ulonglong)((longlong)piVar17 - (longlong)piVar22) >> 2);
            uVar28 = iVar18 + 1;
            if (iVar30 != 0) {
LAB_14127dbe8:
              if (8 < (int)uVar28) {
                iVar18 = piVar22[uVar28 >> 1];
                piVar22[uVar28 >> 1] = *piVar22;
                *piVar22 = iVar18;
                piVar19 = piVar17 + 1;
                local_3b0 = piVar22;
                local_3a0 = piVar17;
LAB_14127e4b6:
                local_3b0 = local_3b0 + 1;
                if (local_3b0 <= piVar17) goto code_r0x00014127e4cd;
                goto LAB_14127e6a7;
              }
              for (; piVar26 = piVar22, piVar19 = piVar22, piVar22 < piVar17; piVar17 = piVar17 + -1
                  ) {
                while (piVar19 = piVar19 + 1, piVar19 <= piVar17) {
                  lVar21 = *(longlong *)(param_1 + 0xb0);
                  uVar28 = *(uint *)(lVar21 + 8 + (longlong)*piVar19 * 0x10);
                  pvVar3 = *(void **)(lVar21 + (longlong)*piVar19 * 0x10);
                  auVar34._4_4_ = local_378._12_4_;
                  auVar34._0_4_ = uVar28;
                  auVar34._8_8_ = 0;
                  local_378 = auVar34 << 0x40;
                  if ((longlong)(int)uVar28 == 0) {
                    local_378 = ZEXT416(uVar28) << 0x40;
                  }
                  else {
                    FUN_1446dd670(local_378,uVar28,0);
                    memcpy((void *)local_378._0_8_,pvVar3,(longlong)(int)uVar28 * 2);
                    lVar21 = *(longlong *)(param_1 + 0xb0);
                  }
                  local_388 = (void *)0x0;
                  local_380 = *(int *)(lVar21 + 8 + (longlong)*piVar26 * 0x10);
                  lVar29 = (longlong)local_380;
                  pvVar3 = *(void **)(lVar21 + (longlong)*piVar26 * 0x10);
                  if (lVar29 == 0) {
                    uStack_37c = 0;
                  }
                  else {
                    FUN_1446dd670(&local_388,local_380,0);
                    memcpy(local_388,pvVar3,lVar29 * 2);
                  }
                  if ((int)local_378._8_4_ < 2) {
                    bVar27 = 1;
                  }
                  else if (local_380 < 2) {
                    bVar27 = 0;
                  }
                  else {
                    lVar21 = 0;
                    while( true ) {
                      uVar1 = *(ushort *)((longlong)local_388 + lVar21);
                      uVar12 = (uint)uVar1;
                      uVar2 = *(ushort *)(local_378._0_8_ + lVar21);
                      uVar28 = (uint)uVar2;
                      if (uVar1 != uVar2) {
                        if ((uVar2 | uVar1) < 0x80) {
                          uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                          uVar28 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                          if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2])
                          goto LAB_14127dcf0;
                        }
                        bVar27 = (byte)(uVar12 - uVar28 >> 0x18);
                        goto LAB_14127dd20;
                      }
                      if (uVar1 == 0) break;
LAB_14127dcf0:
                      lVar21 = lVar21 + 2;
                    }
                    bVar27 = 0;
LAB_14127dd20:
                    bVar27 = bVar27 >> 7;
                  }
                  if (local_388 != (void *)0x0) {
                    FUN_1400020a8();
                  }
                  if (local_378._0_8_ != 0) {
                    FUN_1400020a8();
                  }
                  if (bVar27 != 0) {
                    piVar26 = piVar19;
                  }
                }
                iVar30 = *piVar26;
                *piVar26 = *piVar17;
                *piVar17 = iVar30;
              }
              goto LAB_14127dd7e;
            }
LAB_14127dddd:
            local_3b0 = piVar22;
            if (uVar28 != 0) {
              uVar12 = (iVar18 - (iVar18 + -1 >> 0x1f)) + -1 >> 1;
              do {
                local_3a0 = (int *)(ulonglong)uVar12;
                piVar17 = local_3a0;
                while (uVar24 = uVar12 * 2 + 1, (int)uVar24 < (int)uVar28) {
                  uVar12 = uVar12 * 2 + 2;
                  lVar21 = *(longlong *)(param_1 + 0xb0);
                  if ((int)uVar12 < (int)uVar28) {
                    uVar23 = *(uint *)(lVar21 + 8 + (longlong)local_3b0[(int)uVar12] * 0x10);
                    pvVar3 = *(void **)(lVar21 + (longlong)local_3b0[(int)uVar12] * 0x10);
                    auVar4._4_4_ = local_378._12_4_;
                    auVar4._0_4_ = uVar23;
                    auVar4._8_8_ = 0;
                    local_378 = auVar4 << 0x40;
                    if ((longlong)(int)uVar23 == 0) {
                      local_378 = ZEXT416(uVar23) << 0x40;
                    }
                    else {
                      FUN_1446dd670(local_378,uVar23,0);
                      memcpy((void *)local_378._0_8_,pvVar3,(longlong)(int)uVar23 * 2);
                      lVar21 = *(longlong *)(param_1 + 0xb0);
                    }
                    local_388 = (void *)0x0;
                    local_380 = *(int *)(lVar21 + 8 + (longlong)local_3b0[(int)uVar24] * 0x10);
                    lVar29 = (longlong)local_380;
                    pvVar3 = *(void **)(lVar21 + (longlong)local_3b0[(int)uVar24] * 0x10);
                    if (lVar29 != 0) {
                      FUN_1446dd670(&local_388,local_380,0);
                      memcpy(local_388,pvVar3,lVar29 * 2);
                      uVar23 = uVar24;
                      if ((1 < local_380) && (uVar23 = uVar12, 1 < (int)local_378._8_4_)) {
                        lVar21 = 0;
                        while( true ) {
                          uVar1 = *(ushort *)(local_378._0_8_ + lVar21);
                          uVar12 = (uint)uVar1;
                          uVar2 = *(ushort *)((longlong)local_388 + lVar21);
                          uVar20 = (uint)uVar2;
                          if (uVar1 != uVar2) break;
                          if (uVar1 == 0) goto LAB_14127deef;
LAB_14127e086:
                          lVar21 = lVar21 + 2;
                        }
                        if ((uVar2 | uVar1) < 0x80) {
                          uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                          uVar20 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                          if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2])
                          goto LAB_14127e086;
                        }
                        if ((int)(uVar12 - uVar20) < 0) {
                          uVar23 = uVar24;
                        }
                      }
LAB_14127deef:
                      uVar24 = uVar23;
                      if (local_388 != (void *)0x0) {
                        FUN_1400020a8();
                      }
                    }
                    if (local_378._0_8_ != 0) {
                      FUN_1400020a8();
                    }
                    lVar21 = *(longlong *)(param_1 + 0xb0);
                  }
                  iVar30 = (int)piVar17;
                  uVar12 = *(uint *)(lVar21 + 8 + (longlong)local_3b0[iVar30] * 0x10);
                  pvVar3 = *(void **)(lVar21 + (longlong)local_3b0[iVar30] * 0x10);
                  auVar5._4_4_ = local_378._12_4_;
                  auVar5._0_4_ = uVar12;
                  auVar5._8_8_ = 0;
                  local_378 = auVar5 << 0x40;
                  if ((longlong)(int)uVar12 == 0) {
                    local_378 = ZEXT416(uVar12) << 0x40;
                  }
                  else {
                    FUN_1446dd670(local_378,uVar12,0);
                    memcpy((void *)local_378._0_8_,pvVar3,(longlong)(int)uVar12 * 2);
                    lVar21 = *(longlong *)(param_1 + 0xb0);
                  }
                  local_388 = (void *)0x0;
                  local_380 = *(int *)(lVar21 + 8 + (longlong)local_3b0[(int)uVar24] * 0x10);
                  lVar29 = (longlong)local_380;
                  pvVar3 = *(void **)(lVar21 + (longlong)local_3b0[(int)uVar24] * 0x10);
                  if (lVar29 == 0) {
                    bVar27 = 1;
                  }
                  else {
                    FUN_1446dd670(&local_388,local_380,0);
                    memcpy(local_388,pvVar3,lVar29 * 2);
                    if (local_380 < 2) {
                      bVar27 = 1;
                    }
                    else if ((int)local_378._8_4_ < 2) {
                      bVar27 = 0;
                    }
                    else {
                      lVar21 = 0;
                      while( true ) {
                        uVar1 = *(ushort *)(local_378._0_8_ + lVar21);
                        uVar12 = (uint)uVar1;
                        uVar2 = *(ushort *)((longlong)local_388 + lVar21);
                        uVar23 = (uint)uVar2;
                        if (uVar1 != uVar2) {
                          if ((uVar2 | uVar1) < 0x80) {
                            uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                            uVar23 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                            if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2])
                            goto LAB_14127e0d1;
                          }
                          bVar27 = (byte)(uVar12 - uVar23 >> 0x18);
                          goto LAB_14127e100;
                        }
                        if (uVar1 == 0) break;
LAB_14127e0d1:
                        lVar21 = lVar21 + 2;
                      }
                      bVar27 = 0;
LAB_14127e100:
                      bVar27 = bVar27 >> 7;
                    }
                    if (local_388 != (void *)0x0) {
                      FUN_1400020a8();
                    }
                  }
                  if (local_378._0_8_ != 0) {
                    FUN_1400020a8();
                  }
                  if (bVar27 == 0) break;
                  iVar18 = local_3b0[iVar30];
                  local_3b0[iVar30] = local_3b0[(int)uVar24];
                  local_3b0[(int)uVar24] = iVar18;
                  piVar17 = (int *)(ulonglong)uVar24;
                  uVar12 = uVar24;
                }
                uVar12 = (int)local_3a0 - 1;
              } while ((int)local_3a0 != 0);
              local_3a0 = (int *)&DAT_ffffffff;
              if (1 < (int)uVar28) {
                uVar16 = (ulonglong)uVar28;
                iVar30 = *local_3b0;
                *local_3b0 = local_3b0[uVar16 - 1];
                local_3b0[uVar16 - 1] = iVar30;
                if (uVar28 != 2) {
                  do {
                    uVar13 = uVar16 - 1;
                    iVar30 = 0;
                    iVar18 = 1;
                    iVar15 = 0;
                    do {
                      iVar25 = iVar18;
                      iVar30 = iVar30 + 2;
                      lVar21 = *(longlong *)(param_1 + 0xb0);
                      if ((longlong)iVar30 < (longlong)uVar13) {
                        uVar28 = *(uint *)(lVar21 + 8 + (longlong)local_3b0[iVar30] * 0x10);
                        pvVar3 = *(void **)(lVar21 + (longlong)local_3b0[iVar30] * 0x10);
                        auVar6._4_4_ = local_378._12_4_;
                        auVar6._0_4_ = uVar28;
                        auVar6._8_8_ = 0;
                        local_378 = auVar6 << 0x40;
                        if ((longlong)(int)uVar28 == 0) {
                          local_378 = ZEXT416(uVar28) << 0x40;
                        }
                        else {
                          FUN_1446dd670(local_378,uVar28,0);
                          memcpy((void *)local_378._0_8_,pvVar3,(longlong)(int)uVar28 * 2);
                          lVar21 = *(longlong *)(param_1 + 0xb0);
                        }
                        local_388 = (void *)0x0;
                        local_380 = *(int *)(lVar21 + 8 + (longlong)local_3b0[iVar25] * 0x10);
                        lVar29 = (longlong)local_380;
                        pvVar3 = *(void **)(lVar21 + (longlong)local_3b0[iVar25] * 0x10);
                        if (lVar29 != 0) {
                          FUN_1446dd670(&local_388,local_380,0);
                          memcpy(local_388,pvVar3,lVar29 * 2);
                          iVar18 = iVar25;
                          if ((1 < local_380) && (iVar18 = iVar30, 1 < (int)local_378._8_4_)) {
                            lVar21 = 0;
                            while( true ) {
                              uVar1 = *(ushort *)(local_378._0_8_ + lVar21);
                              uVar28 = (uint)uVar1;
                              uVar2 = *(ushort *)((longlong)local_388 + lVar21);
                              uVar12 = (uint)uVar2;
                              if (uVar1 != uVar2) break;
                              if (uVar1 == 0) goto LAB_14127e237;
LAB_14127e3d2:
                              lVar21 = lVar21 + 2;
                            }
                            if ((uVar2 | uVar1) < 0x80) {
                              uVar28 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                              uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                              if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2])
                              goto LAB_14127e3d2;
                            }
                            if ((int)(uVar28 - uVar12) < 0) {
                              iVar18 = iVar25;
                            }
                          }
LAB_14127e237:
                          iVar25 = iVar18;
                          if (local_388 != (void *)0x0) {
                            FUN_1400020a8();
                          }
                        }
                        if (local_378._0_8_ != 0) {
                          FUN_1400020a8();
                        }
                        lVar21 = *(longlong *)(param_1 + 0xb0);
                      }
                      uVar28 = *(uint *)(lVar21 + 8 + (longlong)local_3b0[iVar15] * 0x10);
                      pvVar3 = *(void **)(lVar21 + (longlong)local_3b0[iVar15] * 0x10);
                      auVar7._4_4_ = local_378._12_4_;
                      auVar7._0_4_ = uVar28;
                      auVar7._8_8_ = 0;
                      local_378 = auVar7 << 0x40;
                      if ((longlong)(int)uVar28 == 0) {
                        local_378 = ZEXT416(uVar28) << 0x40;
                      }
                      else {
                        FUN_1446dd670(local_378,uVar28,0);
                        memcpy((void *)local_378._0_8_,pvVar3,(longlong)(int)uVar28 * 2);
                        lVar21 = *(longlong *)(param_1 + 0xb0);
                      }
                      local_388 = (void *)0x0;
                      local_380 = *(int *)(lVar21 + 8 + (longlong)local_3b0[iVar25] * 0x10);
                      lVar29 = (longlong)local_380;
                      pvVar3 = *(void **)(lVar21 + (longlong)local_3b0[iVar25] * 0x10);
                      if (lVar29 == 0) {
                        bVar27 = 1;
                      }
                      else {
                        FUN_1446dd670(&local_388,local_380,0);
                        memcpy(local_388,pvVar3,lVar29 * 2);
                        if (local_380 < 2) {
                          bVar27 = 1;
                        }
                        else if ((int)local_378._8_4_ < 2) {
                          bVar27 = 0;
                        }
                        else {
                          lVar21 = 0;
                          while( true ) {
                            uVar1 = *(ushort *)(local_378._0_8_ + lVar21);
                            uVar12 = (uint)uVar1;
                            uVar2 = *(ushort *)((longlong)local_388 + lVar21);
                            uVar28 = (uint)uVar2;
                            if (uVar1 != uVar2) {
                              if ((uVar2 | uVar1) < 0x80) {
                                uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                                uVar28 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                                if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2])
                                goto LAB_14127e422;
                              }
                              bVar27 = (byte)(uVar12 - uVar28 >> 0x18);
                              goto LAB_14127e452;
                            }
                            if (uVar1 == 0) break;
LAB_14127e422:
                            lVar21 = lVar21 + 2;
                          }
                          bVar27 = 0;
LAB_14127e452:
                          bVar27 = bVar27 >> 7;
                        }
                        if (local_388 != (void *)0x0) {
                          FUN_1400020a8();
                        }
                      }
                      if (local_378._0_8_ != 0) {
                        FUN_1400020a8();
                      }
                      if (bVar27 == 0) break;
                      iVar30 = local_3b0[iVar15];
                      local_3b0[iVar15] = local_3b0[iVar25];
                      local_3b0[iVar25] = iVar30;
                      iVar30 = iVar25 * 2;
                      iVar18 = iVar25 * 2 + 1;
                      iVar15 = iVar25;
                    } while ((longlong)iVar18 < (longlong)uVar13);
                    iVar30 = *local_3b0;
                    *local_3b0 = local_3b0[uVar16 - 2];
                    local_3b0[uVar16 - 2] = iVar30;
                    uVar16 = uVar13;
                  } while (2 < uVar13);
                }
              }
            }
LAB_14127dd7e:
            puVar11 = local_3a8 + -3;
          } while (local_368 <= local_3a8 + -3);
        }
      }
    }
    local_368 = (undefined1  [16])0x0;
    FUN_14127d7ae(local_368,*(undefined4 *)(param_1 + 0xa8));
    local_378 = (undefined1  [16])0x0;
    FUN_1408be27e(local_378,*(undefined4 *)(param_1 + 0xa8));
    if (0 < *(int *)(param_1 + 0xa8)) {
      uVar16 = 0;
      do {
        lVar21 = (longlong)*(int *)(local_398._0_8_ + uVar16 * 4) * 0x10;
        FUN_14127e87a(local_368,*(longlong *)(param_1 + 0xa0) + lVar21,uVar16 & 0xffffffff);
        FUN_14127e8fc(local_378,lVar21 + *(longlong *)(param_1 + 0xb0),uVar16 & 0xffffffff);
        uVar16 = uVar16 + 1;
      } while ((longlong)uVar16 < (longlong)*(int *)(param_1 + 0xa8));
    }
    FUN_14127e9aa(param_1 + 0xa0,local_368);
    FUN_1410e5bda(param_1 + 0xb0,local_378);
    FUN_1447a1747(local_378._0_8_,local_378._8_4_);
    if (local_378._0_8_ != 0) {
      FUN_1400020a8();
    }
    FUN_140b6c1c2(local_368._0_8_,local_368._8_4_);
    if (local_368._0_8_ != 0) {
      FUN_1400020a8();
    }
    if (local_398._0_8_ != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_3d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x00014127e4cd:
  lVar21 = *(longlong *)(param_1 + 0xb0);
  uVar28 = *(uint *)(lVar21 + 8 + (longlong)*local_3b0 * 0x10);
  pvVar3 = *(void **)(lVar21 + (longlong)*local_3b0 * 0x10);
  auVar8._4_4_ = local_378._12_4_;
  auVar8._0_4_ = uVar28;
  auVar8._8_8_ = 0;
  local_378 = auVar8 << 0x40;
  if ((longlong)(int)uVar28 == 0) {
    local_378 = ZEXT416(uVar28) << 0x40;
  }
  else {
    FUN_1446dd670(local_378,uVar28,0);
    memcpy((void *)local_378._0_8_,pvVar3,(longlong)(int)uVar28 * 2);
    lVar21 = *(longlong *)(param_1 + 0xb0);
  }
  local_388 = (void *)0x0;
  local_380 = *(int *)(lVar21 + 8 + (longlong)*piVar22 * 0x10);
  lVar29 = (longlong)local_380;
  pvVar3 = *(void **)(lVar21 + (longlong)*piVar22 * 0x10);
  if (lVar29 == 0) {
    uStack_37c = 0;
  }
  else {
    FUN_1446dd670(&local_388,local_380,0);
    memcpy(local_388,pvVar3,lVar29 * 2);
  }
  if ((int)local_378._8_4_ < 2) {
    bVar27 = 1;
  }
  else if (local_380 < 2) {
    bVar27 = 0;
  }
  else {
    lVar21 = 0;
    while( true ) {
      uVar1 = *(ushort *)((longlong)local_388 + lVar21);
      uVar28 = (uint)uVar1;
      uVar2 = *(ushort *)(local_378._0_8_ + lVar21);
      uVar12 = (uint)uVar2;
      if (uVar1 != uVar2) {
        if ((uVar2 | uVar1) < 0x80) {
          uVar28 = (uint)(byte)(&DAT_149e05da0)[uVar1];
          uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar2];
          if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_14127e5e8;
        }
        bVar27 = (byte)(uVar28 - uVar12 >> 0x18);
        goto LAB_14127e61a;
      }
      if (uVar1 == 0) break;
LAB_14127e5e8:
      lVar21 = lVar21 + 2;
    }
    bVar27 = 0;
LAB_14127e61a:
    bVar27 = bVar27 >> 7;
  }
  if (local_388 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_378._0_8_ != 0) {
    FUN_1400020a8();
  }
  if (bVar27 == 0) goto LAB_14127e4b6;
LAB_14127e6a7:
  do {
    piVar26 = piVar19;
    piVar19 = piVar26 + -1;
    if (piVar19 <= piVar22) break;
    lVar21 = *(longlong *)(param_1 + 0xb0);
    uVar28 = *(uint *)(lVar21 + 8 + (longlong)*piVar22 * 0x10);
    pvVar3 = *(void **)(lVar21 + (longlong)*piVar22 * 0x10);
    auVar33._4_4_ = local_378._12_4_;
    auVar33._0_4_ = uVar28;
    auVar33._8_8_ = 0;
    local_378 = auVar33 << 0x40;
    if ((longlong)(int)uVar28 == 0) {
      local_378 = ZEXT416(uVar28) << 0x40;
    }
    else {
      FUN_1446dd670(local_378,uVar28,0);
      memcpy((void *)local_378._0_8_,pvVar3,(longlong)(int)uVar28 * 2);
      lVar21 = *(longlong *)(param_1 + 0xb0);
    }
    local_388 = (void *)0x0;
    local_380 = *(int *)(lVar21 + 8 + (longlong)*piVar19 * 0x10);
    lVar29 = (longlong)local_380;
    pvVar3 = *(void **)(lVar21 + (longlong)*piVar19 * 0x10);
    if (lVar29 == 0) {
      uStack_37c = 0;
    }
    else {
      FUN_1446dd670(&local_388,local_380,0);
      memcpy(local_388,pvVar3,lVar29 * 2);
    }
    if ((int)local_378._8_4_ < 2) {
      bVar27 = 1;
    }
    else if (local_380 < 2) {
      bVar27 = 0;
    }
    else {
      lVar21 = 0;
      while( true ) {
        uVar1 = *(ushort *)((longlong)local_388 + lVar21);
        uVar28 = (uint)uVar1;
        uVar2 = *(ushort *)(local_378._0_8_ + lVar21);
        uVar12 = (uint)uVar2;
        if (uVar1 != uVar2) {
          if ((uVar2 | uVar1) < 0x80) {
            uVar28 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_14127e669;
          }
          bVar27 = (byte)(uVar28 - uVar12 >> 0x18);
          goto LAB_14127e69f;
        }
        if (uVar1 == 0) break;
LAB_14127e669:
        lVar21 = lVar21 + 2;
      }
      bVar27 = 0;
LAB_14127e69f:
      bVar27 = bVar27 >> 7;
    }
    if (local_388 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_378._0_8_ != 0) {
      FUN_1400020a8();
    }
  } while (bVar27 == 0);
  if (local_3b0 <= piVar19) {
    iVar18 = *local_3b0;
    *local_3b0 = *piVar19;
    *piVar19 = iVar18;
    goto LAB_14127e4b6;
  }
  iVar18 = *piVar22;
  *piVar22 = *piVar19;
  piVar26[-1] = iVar18;
  iVar30 = iVar30 + -1;
  piVar26 = piVar26 + -2;
  if ((longlong)piVar26 - (longlong)piVar22 < (longlong)local_3a0 - (longlong)local_3b0) {
    if (local_3b0 < piVar17) {
      *local_3a8 = local_3b0;
      local_3a8[1] = piVar17;
      *(int *)(local_3a8 + 2) = iVar30;
      local_3a8 = local_3a8 + 3;
    }
    if (piVar19 <= piVar22 + 1) goto LAB_14127dd7e;
  }
  else {
    if (piVar22 + 1 < piVar19) {
      *local_3a8 = piVar22;
      local_3a8[1] = piVar26;
      *(int *)(local_3a8 + 2) = iVar30;
      local_3a8 = local_3a8 + 3;
    }
    piVar26 = piVar17;
    piVar22 = local_3b0;
    if (piVar17 <= local_3b0) goto LAB_14127dd7e;
  }
  local_3b0 = piVar22;
  iVar18 = (int)((ulonglong)((longlong)piVar26 - (longlong)local_3b0) >> 2);
  uVar28 = iVar18 + 1;
  piVar22 = local_3b0;
  piVar17 = piVar26;
  if (iVar30 == 0) goto LAB_14127dddd;
  goto LAB_14127dbe8;
}



// FUNCTION 14127e87a FUN_14127e87a body=130 status=ok
// SIG undefined FUN_14127e87a(void)

int FUN_14127e87a(longlong *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140b722da(param_1,iVar1);
  }
  lVar4 = (longlong)param_3 * 0x10;
  memmove((void *)(*param_1 + lVar4 + 0x10),(void *)(*param_1 + lVar4),
          (ulonglong)(uint)(iVar1 - param_3) << 4);
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + lVar4) = *param_2;
  lVar3 = param_2[1];
  *(longlong *)(lVar2 + 8 + lVar4) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return param_3;
}



// FUNCTION 14127e8fc FUN_14127e8fc body=174 status=ok
// SIG undefined FUN_14127e8fc(void)

int FUN_14127e8fc(longlong *param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  longlong lVar4;
  
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1447a1bd6(param_1,iVar2);
  }
  lVar4 = (longlong)param_3 * 0x10;
  memmove((void *)(*param_1 + lVar4 + 0x10),(void *)(*param_1 + lVar4),
          (ulonglong)(uint)(iVar2 - param_3) << 4);
  lVar3 = *param_1;
  puVar1 = (undefined8 *)(lVar3 + lVar4);
  *(undefined8 *)(lVar3 + lVar4) = 0;
  iVar2 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(lVar3 + 8 + lVar4) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(puVar1,iVar2,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
  }
  return param_3;
}



// FUNCTION 14127e9aa FUN_14127e9aa body=78 status=ok
// SIG undefined FUN_14127e9aa(void)

longlong * FUN_14127e9aa(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_140b6c1c2(*param_1,(int)param_1[1]);
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



// FUNCTION 14127e9f8 FUN_14127e9f8 body=164 status=ok
// SIG undefined FUN_14127e9f8(void)

void FUN_14127e9f8(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  short *psVar2;
  short *psVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  short sVar7;
  
  if (0 < *(int *)(param_1 + 0xc)) {
    iVar6 = 0;
    do {
      sVar7 = (short)*(undefined4 *)(param_1 + 8) + (short)iVar6;
      psVar2 = (short *)*param_2;
      iVar1 = *(int *)(param_2 + 1);
      lVar5 = (longlong)iVar1;
      if (lVar5 != 0) {
        lVar4 = lVar5 * 0x18;
        psVar3 = psVar2;
        do {
          if (*psVar3 == sVar7) {
            if (psVar3 != (short *)0x0) {
              psVar3[2] = 0xf;
              psVar3[3] = 0;
              goto LAB_14127ea6d;
            }
            break;
          }
          psVar3 = psVar3 + 0xc;
          lVar4 = lVar4 + -0x18;
        } while (lVar4 != 0);
      }
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_146f1c730(param_2,iVar1);
        psVar2 = (short *)*param_2;
      }
      psVar2[lVar5 * 0xc] = sVar7;
      psVar3 = psVar2 + lVar5 * 0xc + 2;
      psVar3[0] = 0xf;
      psVar3[1] = 0;
      psVar3[2] = 0;
      psVar3[3] = 0;
      *(undefined1 *)(psVar2 + lVar5 * 0xc + 6) = 0;
      psVar2 = psVar2 + lVar5 * 0xc + 8;
      psVar2[0] = 0;
      psVar2[1] = 0;
      psVar2[2] = 0;
      psVar2[3] = 0;
LAB_14127ea6d:
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 0xc));
  }
  return;
}



// FUNCTION 14127ea9c FUN_14127ea9c body=204 status=ok
// SIG undefined FUN_14127ea9c(void)

void FUN_14127ea9c(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0x34002;
  local_40 = 0;
  local_60 = 3;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  iVar1 = *(int *)(param_1 + 0x398);
  local_68 = param_2;
  local_38 = param_3;
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x390);
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar5);
      cVar4 = FUN_1412c0eda(&local_68,plVar3);
      if (cVar4 != '\0') {
        (**(code **)(*plVar3 + 0x2e0))(plVar3);
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14127eb6a FUN_14127eb6a body=370 status=ok
// SIG undefined FUN_14127eb6a(void)

undefined8 * FUN_14127eb6a(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if ((((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))(), cVar4 != '\0')) {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar1 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar7 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar7 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar7);
              FUN_14005b248(param_1);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar7 < iVar5);
        }
        iVar7 = 2;
        if (2 < iVar5 * 2) {
          iVar7 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar7;
        if ((iVar7 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_38);
      uVar6 = local_38;
    }
    *param_2 = uVar6;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(param_1,iVar1);
    }
    lVar3 = *param_1;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar3 + lVar8) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar8) = 0;
    *(longlong *)(lVar3 + lVar8) = *param_3;
    *param_3 = 0;
    *(int *)(lVar3 + 8 + lVar8) = (int)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14127ecea FUN_14127ecea body=522 status=ok
// SIG undefined FUN_14127ecea(void)

void FUN_14127ecea(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_78 [32];
  uint local_58;
  int local_54;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = param_1 + 0x68;
  local_54 = 0;
  if (param_3 == 0) {
    local_58 = 0;
    iVar4 = 0;
  }
  else {
    local_58 = *(uint *)(param_3 + 0xc);
    if ((int)local_58 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((local_58 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_58 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar4 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar4 = *(int *)(lVar9 + 0x10);
      bVar10 = iVar4 == 0;
      if (bVar10) {
        *(int *)(lVar9 + 0x10) = iVar5;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar4 = iVar5;
      }
    }
  }
  lVar9 = *(longlong *)(param_1 + 0xe8);
  if (*(longlong *)(param_1 + 0xe8) == 0) {
    lVar9 = lVar1;
  }
  local_54 = iVar4;
  local_50 = param_4;
  if ((longlong)*(int *)(param_1 + 0xf0) != 0) {
    lVar7 = (longlong)*(int *)(param_1 + 0xf0) << 4;
    iVar4 = 1;
    lVar8 = 0;
    do {
      if ((*(longlong *)(lVar9 + 8) == local_50) &&
         (cVar2 = FUN_14038330a(lVar9,&local_58), cVar2 != '\0')) {
        if (iVar4 != 0) {
          iVar5 = *(int *)(param_1 + 0xf0);
          iVar4 = iVar5 - iVar4;
          if (iVar4 != 0) {
            iVar6 = 1;
            if (iVar4 < 1) {
              iVar6 = iVar4;
            }
            lVar9 = *(longlong *)(param_1 + 0xe8);
            if (*(longlong *)(param_1 + 0xe8) == 0) {
              lVar9 = lVar1;
            }
            memmove((void *)((lVar8 >> 0x20) * 0x10 + lVar9),
                    (void *)((longlong)(iVar5 - iVar6) * 0x10 + lVar9),(longlong)iVar6 << 4);
            iVar5 = *(int *)(param_1 + 0xf0);
          }
          *(int *)(param_1 + 0xf0) = iVar5 + -1;
          FUN_14127eef6(lVar1);
          plVar3 = (longlong *)FUN_1410dcab6(param_2,&DAT_14cbc3e88);
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x420))(plVar3,0);
          }
        }
        break;
      }
      lVar9 = lVar9 + 0x10;
      lVar8 = lVar8 + 0x100000000;
      iVar4 = iVar4 + 1;
      lVar7 = lVar7 + -0x10;
    } while (lVar7 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14127eef6 FUN_14127eef6 body=164 status=ok
// SIG undefined FUN_14127eef6(void)

void FUN_14127eef6(longlong param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  uVar4 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0x8c);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  else {
    iVar3 = iVar2 - uVar1;
    if (((longlong)iVar3 & 0xffffffffffffc00U) == 0) {
      if (iVar3 < 0x41 || iVar2 * 2 <= (int)(uVar1 * 3)) {
        return;
      }
    }
    else if (iVar3 < 0x41) {
      return;
    }
    if (0 < (int)uVar1) {
      uVar4 = FUN_144a3809e(uVar4 << 4,0);
      uVar4 = uVar4 >> 4;
      iVar2 = *(int *)(param_1 + 0x8c);
    }
  }
  if ((int)uVar4 == iVar2) {
    return;
  }
  *(int *)(param_1 + 0x8c) = (int)uVar4;
  FUN_148bf5d0c(param_1,*(undefined4 *)(param_1 + 0x88),uVar4,0x10);
  return;
}



// FUNCTION 14127ef9a FUN_14127ef9a body=42 status=ok
// SIG undefined FUN_14127ef9a(void)

void FUN_14127ef9a(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x41) = 1;
  *(undefined1 *)(param_1 + 0x43) = 1;
  FUN_140faf7b4(*(undefined8 *)(param_1 + 8),param_1);
  FUN_14127efc4(*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 14127efc4 FUN_14127efc4 body=1061 status=ok
// SIG undefined FUN_14127efc4(void)

undefined8 FUN_14127efc4(undefined1 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  uint *puVar7;
  uint *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  int iVar12;
  undefined8 *puVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_488 [32];
  int local_468 [4];
  undefined8 local_458;
  undefined8 uStack_450;
  undefined4 local_448;
  undefined1 local_444;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  longlong lStack_418;
  longlong *local_408;
  longlong local_3f8 [4];
  undefined1 local_3d8;
  char local_3d6;
  undefined8 local_3c8 [12];
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  longlong *local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  longlong *plStack_330;
  uint local_328;
  uint local_324 [111];
  uint *local_168;
  undefined8 local_160;
  undefined1 local_158 [32];
  longlong *local_138;
  longlong local_128;
  longlong *local_118;
  longlong local_108 [4];
  char local_e6;
  longlong *local_58;
  longlong *local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_488;
  cVar4 = FUN_1405136b0();
  if (cVar4 == '\0') {
    uVar11 = 0;
    goto LAB_14127f2dd;
  }
  FUN_1405150b4(param_1);
  if (local_138 == (longlong *)0x0) {
    uVar11 = 0;
  }
  else {
    local_468[0] = -1;
    local_458 = 0;
    uStack_450 = 0;
    local_448 = 0xffffffff;
    local_444 = 0;
    local_408 = (longlong *)0x0;
    local_3d8 = 0;
    local_3d6 = '\0';
    local_440 = 0;
    uStack_438 = 0;
    local_430 = 0;
    uStack_428 = 0;
    local_420 = 0;
    lStack_418 = 0;
    puVar10 = &DAT_14c846480;
    puVar13 = local_3c8;
    for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar13 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar13 = puVar13 + 1;
    }
    local_168 = (uint *)0x0;
    local_160 = 0x800000000;
    local_368 = 0;
    uStack_360 = 0;
    local_358 = 0;
    uStack_350 = 0;
    local_348 = (longlong *)0x0;
    uStack_340 = 0;
    local_338 = 0;
    plStack_330 = (longlong *)0x0;
    FUN_1405143f4(local_468,local_158);
    do {
      (**(code **)(*local_138 + 0x30))(local_138,local_468);
    } while (local_468[0] != 0x7fffffff);
    if ((int)local_160 < 1) {
LAB_14127f1ba:
      *(undefined4 *)(param_1 + 4) = 0;
      lVar6 = 0;
      iVar5 = 0;
    }
    else {
      puVar7 = local_168 + 1;
      if (local_168 == (uint *)0x0) {
        puVar7 = local_324;
      }
      if (*puVar7 == 0) goto LAB_14127f1ba;
      puVar8 = &local_328;
      if (local_168 != (uint *)0x0) {
        puVar8 = local_168;
      }
      uVar3 = *puVar8;
      if (((((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) ||
          (plVar9 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
          plVar9 == (longlong *)0x0)) ||
         ((*(uint *)(plVar9 + 2) != *puVar7 || ((*(uint *)(plVar9 + 1) & 0x10200000) != 0))))
      goto LAB_14127f1ba;
      lVar6 = *plVar9;
      if (lVar6 == 0) goto LAB_14127f1ba;
      uVar3 = *(uint *)(lVar6 + 0xc);
      *(uint *)(param_1 + 4) = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar14 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar14 = 0;
      }
      iVar5 = *(int *)(lVar14 + 0x10);
      if (*(int *)(lVar14 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar12 = DAT_14c964868 + 1;
        bVar15 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar15) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar12);
        }
        LOCK();
        iVar5 = *(int *)(lVar14 + 0x10);
        bVar15 = iVar5 == 0;
        if (bVar15) {
          *(int *)(lVar14 + 0x10) = iVar12;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar15) {
          iVar5 = iVar12;
        }
      }
    }
    *(int *)(param_1 + 8) = iVar5;
    *param_1 = 1;
    if ((*(int *)(param_1 + 0x128) != 0) &&
       (plVar9 = *(longlong **)(param_1 + 0x120), plVar9 != (longlong *)0x0)) {
      (**(code **)(*plVar9 + 0x60))(plVar9,lVar6);
    }
    if (*(int *)(param_1 + 8) == 0) {
LAB_14127f359:
      uVar11 = 0;
    }
    else {
      uVar3 = *(uint *)(param_1 + 4);
      uVar11 = 0;
      if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
        puVar10 = (undefined8 *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if ((puVar10 == (undefined8 *)0x0) ||
           ((*(int *)(puVar10 + 2) != *(int *)(param_1 + 8) ||
            ((*(uint *)(puVar10 + 1) & 0x10200000) != 0)))) goto LAB_14127f359;
        uVar11 = *puVar10;
      }
    }
    if (local_168 != (uint *)0x0) {
      FUN_1400020a8();
    }
    if (plStack_330 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plStack_330 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plStack_330 + 0x10))();
      }
    }
    plVar9 = local_348;
    if (local_348 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_348 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_348)(local_348);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    if (local_3d6 == '\x01') {
      local_3d6 = '\0';
    }
    if (lStack_418 != 0) {
      plVar9 = local_408;
      if (local_408 == (longlong *)0x0) {
        plVar9 = local_3f8;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)local_40 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_58 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  if (local_e6 == '\x01') {
    local_e6 = '\0';
  }
  if (local_128 != 0) {
    if (local_118 == (longlong *)0x0) {
      local_118 = local_108;
    }
    (**(code **)(*local_118 + 0x10))();
  }
LAB_14127f2dd:
  if ((local_30 ^ (ulonglong)auStack_488) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11;
}



// FUNCTION 14127f3ea FUN_14127f3ea body=1801 status=ok
// SIG undefined FUN_14127f3ea(void)

void FUN_14127f3ea(longlong param_1,uint *param_2,char param_3)

{
  longlong *plVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  longlong *plVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  char cVar19;
  uint *puVar20;
  ulonglong uVar21;
  float fVar22;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined2 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  code **local_b0;
  undefined1 *local_a8;
  code *local_a0;
  uint local_8c;
  int local_88;
  uint local_84;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  code *local_68;
  uint local_60;
  undefined4 local_5c;
  uint local_54;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar18 = param_1 + -0x28;
  lVar6 = (**(code **)(*(longlong *)(param_1 + -0x28) + 0x180))(lVar18);
  if ((lVar6 != 0) && (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0x9c))) {
    uVar3 = *param_2;
    lVar10 = param_1 + 0xa0;
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      lVar10 = *(longlong *)(param_1 + 0xa8);
    }
    iVar13 = *(int *)(lVar10 + (ulonglong)(*(int *)(param_1 + 0xb0) - 1U & uVar3) * 4);
    if (iVar13 != -1) {
      plVar1 = (longlong *)(param_1 + 0x68);
      lVar10 = *plVar1;
      iVar16 = iVar13;
      do {
        if (*(uint *)(lVar10 + (longlong)iVar16 * 0x10) == uVar3) goto LAB_14127f4c5;
        iVar16 = *(int *)((longlong)iVar16 * 0x10 + lVar10 + 8);
      } while (iVar16 != -1);
    }
  }
  goto LAB_14127f43c;
  while (iVar13 = *(int *)(lVar12 + 8), iVar13 != -1) {
LAB_14127f4c5:
    lVar12 = lVar10 + (longlong)iVar13 * 0x10;
    if (*(uint *)(lVar10 + (longlong)iVar13 * 0x10) == uVar3) goto LAB_14127f4d6;
  }
  lVar12 = 0;
LAB_14127f4d6:
  uVar3 = *(uint *)(lVar12 + 4);
  local_54 = uVar3;
  FUN_14127faf4(plVar1,param_2);
  lVar6 = FUN_14007a5e6(lVar6);
  if (lVar6 == 0) goto LAB_14127f43c;
  if (*(int *)(param_1 + 0x11c) == 0) {
LAB_14127f98c:
    uVar8 = 0;
  }
  else {
    uVar17 = *(uint *)(param_1 + 0x118);
    uVar8 = 0;
    if ((-1 < (int)uVar17) && ((int)uVar17 < DAT_14c9647dc)) {
      puVar11 = (undefined8 *)
                ((ulonglong)((uVar17 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8));
      if ((puVar11 == (undefined8 *)0x0) ||
         ((*(int *)(puVar11 + 2) != *(int *)(param_1 + 0x11c) ||
          ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)))) goto LAB_14127f98c;
      uVar8 = *puVar11;
    }
  }
  plVar7 = (longlong *)FUN_1401b2ade(uVar8);
  if (plVar7 == (longlong *)0x0) goto LAB_14127f43c;
  if (DAT_14cbadd90 == 0) {
    local_b0 = &local_68;
    local_68 = FUN_141030f22;
    local_a0 = FUN_14081d0ea;
    local_a8 = &LAB_1459f2e4c;
    local_b8 = &LAB_148c39de3;
    local_c0 = &LAB_1457a9eb2;
    local_c8 = &DAT_149e063b2;
    local_d0 = 0;
    local_d8 = 0x10000004;
    local_e0 = 0x10;
    local_e8 = 0x3de0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
  }
  if ((*(int *)(plVar7[2] + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
     (*(longlong *)(*(longlong *)(plVar7[2] + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8)
      != DAT_14cbadd90 + 0x30)) goto LAB_14127f43c;
  plVar15 = (longlong *)(param_1 + 0x18);
  if (param_3 != '\0') {
    if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
      lVar6 = param_1 + 0x50;
      if (*(longlong *)(param_1 + 0x58) != 0) {
        lVar6 = *(longlong *)(param_1 + 0x58);
      }
      uVar17 = *(int *)(param_1 + 0x60) - 1;
      iVar13 = *(int *)(lVar6 + (ulonglong)(uVar17 & uVar3) * 4);
      if (iVar13 != -1) {
        lVar10 = *plVar15;
        do {
          lVar12 = lVar10 + (longlong)iVar13 * 0x100;
          if (*(uint *)(lVar10 + (longlong)iVar13 * 0x100) == uVar3) {
            if ((lVar12 != 0) && (lVar12 != -8)) {
              local_80 = (longlong *)(param_1 + 200);
              puVar20 = (uint *)(lVar12 + 0xe8);
              local_70 = plVar15;
              if (*(int *)(param_1 + 0xd0) == *(int *)(param_1 + 0xfc)) goto LAB_14127f66d;
              lVar12 = param_1 + 0x100;
              if (*(longlong *)(param_1 + 0x108) != 0) {
                lVar12 = *(longlong *)(param_1 + 0x108);
              }
              iVar13 = *(int *)(lVar12 + (ulonglong)(*(int *)(param_1 + 0x110) - 1U & *puVar20) * 4)
              ;
              if (iVar13 == -1) goto LAB_14127f66d;
              goto LAB_14127f7b3;
            }
            break;
          }
          iVar13 = *(int *)(lVar12 + 0xf8);
        } while (iVar13 != -1);
      }
    }
    goto LAB_14127f43c;
  }
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    lVar18 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar18 = *(longlong *)(param_1 + 0x58);
    }
    iVar13 = *(int *)(lVar18 + (ulonglong)(*(int *)(param_1 + 0x60) - 1U & uVar3) * 4);
    if (iVar13 != -1) {
      do {
        if (*(uint *)(*plVar15 + (longlong)iVar13 * 0x100) == uVar3) {
          FUN_14127fd72(plVar15,&local_54);
          break;
        }
        iVar13 = *(int *)((longlong)iVar13 * 0x100 + *plVar15 + 0xf8);
      } while (iVar13 != -1);
    }
  }
  local_68 = (code *)0x0;
  local_60 = *(uint *)(param_1 + 0xc0);
  uVar8 = *(undefined8 *)(param_1 + 0xb8);
  if (local_60 == 0) {
    local_5c = 0;
LAB_14127faed:
    uVar14 = 0;
  }
  else {
    FUN_14587343e(&local_68,local_60);
    FUN_14587326a(local_68,uVar8);
    uVar14 = (ulonglong)(int)local_60;
    if (uVar14 == 0) goto LAB_14127faed;
    lVar6 = 0xe8;
    lVar18 = 0;
    do {
      if (*(uint *)(local_68 + lVar6) == *param_2) {
        lVar18 = (longlong)local_68 - lVar18;
        local_50 = lVar18;
        FUN_148f129aa(param_1 + 0xb8);
        FUN_14127fbe6(param_1 + 200,lVar18 + 0xec);
        uVar14 = (ulonglong)local_60;
        break;
      }
      lVar18 = lVar18 + -0xf0;
      lVar6 = lVar6 + 0xf0;
    } while (uVar14 * -0xf0 - lVar18 != 0);
  }
  FUN_1411b79c1(local_68,uVar14);
  if (local_68 != (code *)0x0) {
    FUN_1400020a8();
  }
  goto LAB_14127f43c;
  while (iVar13 = *(int *)(*local_80 + (longlong)iVar13 * 0xc + 4), iVar13 != -1) {
LAB_14127f7b3:
    if (*(uint *)(*local_80 + (longlong)iVar13 * 0xc) == *puVar20) goto LAB_14127f775;
  }
LAB_14127f66d:
  uVar3 = *(uint *)(param_1 + 0xc0);
  if ((int)uVar3 < *(int *)(param_1 + 0xc)) goto LAB_14127f83a;
  uVar4 = *puVar20;
  iVar13 = *(int *)(lVar6 + (ulonglong)(uVar17 & uVar4) * 4);
  if (iVar13 != -1) {
    plVar15 = (longlong *)(param_1 + 0xb8);
    iVar16 = iVar13;
    do {
      iVar9 = iVar13;
      if (*(uint *)(lVar10 + (longlong)iVar16 * 0x100) == uVar4) goto LAB_14127f6b0;
      iVar16 = *(int *)((longlong)iVar16 * 0x100 + lVar10 + 0xf8);
    } while (iVar16 != -1);
  }
  goto LAB_14127f775;
  while (iVar16 = *(int *)(lVar12 + 0xf8), iVar16 != -1) {
LAB_14127fa46:
    lVar12 = lVar10 + (longlong)iVar16 * 0x100;
    if (*(uint *)(lVar10 + (longlong)iVar16 * 0x100) == uVar4) goto LAB_14127fa6b;
  }
  lVar12 = 0;
LAB_14127fa6b:
  if (local_8c < *(uint *)(lVar12 + 0xec)) {
LAB_14127f75f:
    uVar14 = uVar21 & 0xffffffff;
    fVar22 = fVar2;
  }
LAB_14127f755:
  uVar21 = uVar21 + 1;
  if (uVar21 == uVar3) goto LAB_14127f767;
  goto LAB_14127f6f6;
LAB_14127f767:
  cVar19 = (char)uVar14;
  local_88 = iVar13;
  local_84 = uVar4;
  local_78 = plVar7;
  if (cVar19 != -1) {
    lVar6 = (longlong)cVar19 * 0xf0;
    FUN_14127fbe6(local_80,*plVar15 + lVar6 + 0xec);
    FUN_14127faf4(plVar1,*plVar15 + lVar6 + 0xe8);
    plVar7 = local_78;
    FUN_14127fd72(local_70,lVar6 + *plVar15 + 0xec);
    FUN_145872da4(plVar15,(int)cVar19);
LAB_14127f83a:
    FUN_14127fe9c(lVar18,puVar20);
    FUN_14127fc36(lVar18);
  }
  goto LAB_14127f775;
  while (iVar9 = *(int *)(lVar12 + 0xf8), *(int *)(lVar12 + 0xf8) != -1) {
LAB_14127f6b0:
    lVar12 = lVar10 + (longlong)iVar9 * 0x100;
    if (*(uint *)(lVar10 + (longlong)iVar9 * 0x100) == uVar4) goto LAB_14127f6c5;
  }
  lVar12 = 0;
LAB_14127f6c5:
  if (0 < (int)uVar3) {
    fVar22 = *(float *)(lVar12 + 0xf0);
    uVar14 = 0xff;
    uVar21 = 0;
LAB_14127f6f6:
    uVar5 = *(uint *)(*plVar15 + 0xec + uVar21 * 0xf0);
    iVar16 = *(int *)(lVar6 + (ulonglong)(uVar5 & uVar17) * 4);
    while (iVar16 != -1) {
      lVar12 = lVar10 + (longlong)iVar16 * 0x100;
      if (*(uint *)(lVar10 + (longlong)iVar16 * 0x100) == uVar5) {
        if ((lVar12 != 0) && (lVar12 != -8)) {
          fVar2 = *(float *)(lVar12 + 0xf0);
          if (fVar2 < fVar22) goto LAB_14127f75f;
          if ((fVar2 == fVar22) && (!NAN(fVar2) && !NAN(fVar22))) {
            local_8c = *(uint *)(lVar12 + 0xec);
            iVar16 = iVar13;
            goto LAB_14127fa46;
          }
        }
        break;
      }
      iVar16 = *(int *)(lVar12 + 0xf8);
    }
    goto LAB_14127f755;
  }
LAB_14127f775:
  local_68 = (code *)CONCAT44(local_68._4_4_,*param_2);
  uVar8 = FUN_14477b072(plVar7,DAT_14cbadaa8);
  (**(code **)(*plVar7 + 0x248))(plVar7,uVar8,&local_68);
LAB_14127f43c:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14127faf4 FUN_14127faf4 body=127 status=ok
// SIG undefined FUN_14127faf4(void)

void FUN_14127faf4(longlong *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  int *piVar5;
  int iVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)*param_2) * 4);
    if (iVar2 != -1) {
      lVar3 = *param_1;
      do {
        lVar1 = lVar3 + (longlong)iVar2 * 0x10;
        if (*(int *)(lVar3 + (longlong)iVar2 * 0x10) == *param_2) {
          iVar6 = *(int *)((longlong)plVar4 + (longlong)*(int *)(lVar1 + 0xc) * 4);
          if (iVar6 == iVar2) {
            piVar5 = (int *)((longlong)plVar4 + (longlong)*(int *)(lVar1 + 0xc) * 4);
          }
          else {
            do {
              piVar5 = (int *)((longlong)iVar6 * 0x10 + lVar3 + 8);
              iVar6 = *piVar5;
            } while (iVar6 != iVar2);
          }
          *piVar5 = *(int *)(lVar1 + 8);
          FUN_14127fb74();
          return;
        }
        iVar2 = *(int *)(lVar1 + 8);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 14127fb74 FUN_14127fb74 body=114 status=ok
// SIG undefined FUN_14127fb74(void)

void FUN_14127fb74(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
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



// FUNCTION 14127fbe6 FUN_14127fbe6 body=79 status=ok
// SIG undefined FUN_14127fbe6(void)

void FUN_14127fbe6(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)*param_2) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0xc) == *param_2) {
          FUN_145872e3c();
          return;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0xc + 4);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 14127fc36 FUN_14127fc36 body=142 status=ok
// SIG undefined FUN_14127fc36(void)

void FUN_14127fc36(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  lVar2 = (**(code **)(*param_1 + 0x180))();
  if ((((lVar2 != 0) && (*(int *)((longlong)param_1 + 0x144) != 0)) &&
      (uVar1 = *(uint *)(param_1 + 0x28), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar3 != (undefined8 *)0x0) &&
        (*(int *)(puVar3 + 2) == *(int *)((longlong)param_1 + 0x144))) &&
       ((*(uint *)(puVar3 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar3 + 1) & 0x10200000) == 0) {
        uVar4 = *puVar3;
      }
      else {
        uVar4 = 0;
      }
      FUN_14127fcc4(&DAT_14cbe7508,uVar4,lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14127fcc4 FUN_14127fcc4 body=173 status=ok
// SIG undefined FUN_14127fcc4(void)

void FUN_14127fcc4(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_14127fd5b;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14127fd5b:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14127fd72 FUN_14127fd72 body=183 status=ok
// SIG undefined FUN_14127fd72(void)

void FUN_14127fd72(longlong *param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)*param_2) * 4);
    if (iVar6 != -1) {
      lVar2 = *param_1;
      do {
        lVar5 = (longlong)iVar6 * 0x100;
        lVar1 = lVar2 + lVar5;
        if (*(int *)(lVar2 + lVar5) == *param_2) {
          iVar7 = *(int *)((longlong)plVar3 + (longlong)*(int *)(lVar1 + 0xfc) * 4);
          if (iVar7 == iVar6) {
            piVar4 = (int *)((longlong)plVar3 + (longlong)*(int *)(lVar1 + 0xfc) * 4);
          }
          else {
            do {
              piVar4 = (int *)((longlong)iVar7 * 0x100 + lVar2 + 0xf8);
              iVar7 = *piVar4;
            } while (iVar7 != iVar6);
          }
          *piVar4 = *(int *)(lVar1 + 0xf8);
          FUN_140368b56(*param_1 + lVar5 + 0x10);
          FUN_14127fe2a(param_1,iVar6);
          return;
        }
        iVar6 = *(int *)(lVar1 + 0xf8);
      } while (iVar6 != -1);
    }
  }
  return;
}



// FUNCTION 14127fe2a FUN_14127fe2a body=114 status=ok
// SIG undefined FUN_14127fe2a(void)

void FUN_14127fe2a(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x100) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x100) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x100 + 4) = uVar4;
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



// FUNCTION 14127fe9c FUN_14127fe9c body=523 status=ok
// SIG undefined FUN_14127fe9c(void)

void FUN_14127fe9c(longlong param_1,uint *param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_158 [44];
  undefined1 local_12c [4];
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
  int local_50;
  int iStack_4c;
  int iStack_48;
  uint uStack_44;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x74)) {
    uVar2 = *param_2;
    lVar3 = param_1 + 0x78;
    if (*(longlong *)(param_1 + 0x80) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x80);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x88) - 1U & uVar2) * 4);
    if (iVar4 != -1) {
      lVar3 = *(longlong *)(param_1 + 0x40);
      iVar5 = iVar4;
      do {
        if (*(uint *)(lVar3 + (longlong)iVar5 * 0x100) == uVar2) goto LAB_14127ff12;
        iVar5 = *(int *)((longlong)iVar5 * 0x100 + lVar3 + 0xf8);
      } while (iVar5 != -1);
    }
  }
  goto LAB_14128003e;
  while (iVar4 = *(int *)(lVar6 + 0xf8), iVar4 != -1) {
LAB_14127ff12:
    lVar6 = lVar3 + (longlong)iVar4 * 0x100;
    if (*(uint *)(lVar3 + (longlong)iVar4 * 0x100) == uVar2) goto LAB_14127ff27;
  }
  lVar6 = 0;
LAB_14127ff27:
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
  local_40 = 0;
  local_64 = 0;
  uStack_5c = 0;
  iStack_48 = 0;
  uStack_44 = uStack_44 & 0xff000000;
  local_50 = 0;
  iStack_4c = 0;
  FUN_1407b25f0(&local_128,lVar6 + 0x10);
  local_50 = DAT_14c7640d0;
  local_40 = CONCAT44(*param_2,(undefined4)local_40);
  iVar4 = *(int *)(param_1 + 0xe8);
  DAT_14c7640d0 = DAT_14c7640d0 + 1;
  *(uint *)(param_1 + 0xe8) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0xec) < iVar4 + 1U) {
    FUN_14088cbea(param_1 + 0xe0,iVar4);
  }
  lVar3 = *(longlong *)(param_1 + 0xe0);
  lVar6 = (longlong)iVar4 * 0xf0;
  FUN_140d8ebf0(lVar3 + lVar6,&local_128);
  piVar1 = (int *)(lVar3 + 0xd8 + lVar6);
  *piVar1 = local_50;
  piVar1[1] = iStack_4c;
  piVar1[2] = iStack_48;
  piVar1[3] = uStack_44;
  *(undefined8 *)(lVar3 + 0xe8 + lVar6) = local_40;
  FUN_1412800a8(param_1 + 0xf0,local_12c,param_2);
  FUN_140368b56(&local_128);
LAB_14128003e:
  if ((local_38 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412800a8 FUN_1412800a8 body=733 status=ok
// SIG undefined FUN_1412800a8(void)

int * FUN_1412800a8(longlong *param_1,int *param_2,uint *param_3)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *plVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar14 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar14 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar14) {
      FUN_1447cc1b4(param_1,iVar14);
    }
    iVar5 = (int)param_1[5];
    if (iVar5 == 0) {
      iVar4 = -1;
    }
    else {
      iVar4 = iVar5 + 0x1e;
      if (-1 < iVar5 + -1) {
        iVar4 = iVar5 + -1;
      }
      iVar4 = iVar4 >> 5;
    }
    plVar7 = param_1 + 2;
    iVar10 = iVar5 + 1;
    iVar13 = iVar5 + 0x1f;
    if (-1 < iVar5) {
      iVar13 = iVar5;
    }
    if (iVar13 >> 5 == iVar4) {
      *(int *)(param_1 + 5) = iVar10;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar5) {
        if (iVar5 + 0x20U < 0xa0) {
          iVar10 = 0x80;
          iVar4 = iVar5;
        }
        else {
          uVar9 = iVar5 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar15 = 4;
            if (4 < uVar9) {
              uVar15 = uVar9;
            }
          }
          else {
            uVar15 = (uVar9 * 3 >> 3) + uVar9 + 0x10;
          }
          uVar6 = FUN_144a3809e(uVar15 << 2,0);
          iVar4 = (int)(uVar6 >> 2);
          iVar10 = -0x20;
          if ((int)uVar9 <= iVar4) {
            iVar10 = iVar4 << 5;
          }
          iVar4 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar10;
        FUN_1446efbd8(plVar7,iVar4);
        iVar10 = (int)param_1[5] + 1;
      }
      iVar4 = iVar10 + 0x1f;
      if (-1 < iVar10) {
        iVar4 = iVar10;
      }
      *(int *)(param_1 + 5) = iVar10;
      if (iVar10 % 0x20 != 0) {
        plVar12 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar12 = plVar7;
        }
        bVar8 = -(char)(iVar10 % 0x20);
        *(uint *)((longlong)plVar12 + (longlong)(iVar4 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar12 + (longlong)(iVar4 >> 5) * 4) << (bVar8 & 0x1f)) >>
             (bVar8 & 0x1f);
      }
    }
    lVar11 = (longlong)iVar14;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[4];
    }
    bVar8 = (byte)iVar5 & 0x1f;
    puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar13 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
  }
  else {
    iVar14 = (int)param_1[6];
    lVar11 = (longlong)iVar14;
    iVar5 = *(int *)(*param_1 + 4 + lVar11 * 0xc);
    *(int *)(param_1 + 6) = iVar5;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar5 * 0xc) = 0xffffffff;
    }
  }
  iVar5 = 1;
  plVar7 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar7 = (longlong *)param_1[4];
  }
  iVar4 = iVar14 + 0x1f;
  if (-1 < iVar14) {
    iVar4 = iVar14;
  }
  puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar14 & 0x1f);
  lVar2 = *param_1;
  uVar9 = *param_3;
  *(uint *)(lVar2 + lVar11 * 0xc) = uVar9;
  *(undefined4 *)(lVar2 + 4 + lVar11 * 0xc) = 0xffffffff;
  uVar15 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if ((uVar15 != 0) && (uVar15 != 1)) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & uVar9) * 4);
    if (iVar4 != -1) {
      do {
        if (*(uint *)(*param_1 + (longlong)iVar4 * 0xc) == uVar9) {
          FUN_145872efa(param_1,iVar14);
          goto LAB_141280246;
        }
        iVar4 = *(int *)(*param_1 + (longlong)iVar4 * 0xc + 4);
      } while (iVar4 != -1);
    }
  }
  if (3 < uVar15) {
    uVar6 = (ulonglong)(uVar15 & 0xfffffffe) + 0xf;
    lVar3 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar5 = 1 << ((byte)lVar3 & 0x1f);
  }
  iVar4 = iVar14;
  if (((int)uVar15 < 1) || (iVar5 <= (int)param_1[9])) {
    lVar2 = lVar2 + lVar11 * 0xc;
    uVar9 = (int)param_1[9] - 1U & uVar9;
    *(uint *)(lVar2 + 8) = uVar9;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(lVar2 + 4) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) =
         iVar14;
  }
  else {
    *(int *)(param_1 + 9) = iVar5;
    FUN_141280386(param_1);
  }
LAB_141280246:
  *param_2 = iVar4;
  return param_2;
}



// FUNCTION 141280386 FUN_141280386 body=637 status=ok
// SIG undefined FUN_141280386(void)

void FUN_141280386(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar7 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar7,4);
    if ((int)uVar7 < 1) goto LAB_1412803e9;
  }
  uVar2 = 0;
  do {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
         0xffffffff;
    uVar2 = uVar2 + 1;
  } while (uVar7 != uVar2);
LAB_1412803e9:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar13 = 0;
    iVar4 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar13 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar13 = iVar14 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar11 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar11 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar7 = puVar10[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar11 = (ulonglong)(-uVar7 & uVar7);
    uVar15 = uVar11 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar13 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar13) {
      iVar13 = iVar14;
    }
  }
  if (iVar13 < iVar14) {
    uVar7 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar12 = (longlong)iVar13;
      uVar15 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar6 + lVar12 * 0xc);
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 8 + lVar12 * 0xc) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 4 + lVar12 * 0xc) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar15) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar13;
      uVar7 = ~(uint)uVar11 & uVar7;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar14 = (int)param_1[5];
      iVar13 = (int)uVar3;
      lVar6 = (longlong)iVar13;
      uVar2 = puVar10[lVar6] & uVar7;
      if (uVar2 == 0) {
        iVar8 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar8 = iVar14 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar13) {
          iVar9 = iVar13;
        }
        if (iVar8 <= iVar13) {
          return;
        }
        lVar12 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar6 + lVar12 + 1];
          if (uVar2 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar9 - lVar6 == lVar12) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar13 + (int)lVar12 + 1);
        uVar7 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar15 = uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar13 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar13 < iVar14);
  }
  return;
}



// FUNCTION 141280604 FUN_141280604 body=228 status=ok
// SIG undefined FUN_141280604(void)

longlong FUN_141280604(void)

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
  if (DAT_14cbb25f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_1440263f2;
    local_28 = &LAB_14102785e;
    local_38 = &LAB_148c591b7;
    local_40 = FUN_1465f61b1;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x58;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUIDataCollector_LostLoot",&DAT_14cbb25f0,&DAT_148c591b6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb25f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412806ea FUN_1412806ea body=301 status=ok
// SIG undefined FUN_1412806ea(void)

void FUN_1412806ea(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  
  lVar6 = FUN_1447210f0();
  if (((lVar6 != 0) && (*(longlong *)(param_1 + 0x25f8) != 0)) && (0 < *(int *)(lVar6 + 0x238))) {
    lVar9 = 0;
    do {
      iVar1 = *(int *)(*(longlong *)(lVar6 + 0x230) + 4 + lVar9 * 8);
      if (((iVar1 != 0) &&
          (uVar2 = *(uint *)(*(longlong *)(lVar6 + 0x230) + lVar9 * 8), -1 < (int)uVar2)) &&
         ((int)uVar2 < DAT_14c9647dc)) {
        plVar8 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if (((plVar8 != (longlong *)0x0) && ((int)plVar8[2] == iVar1)) &&
           (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 &&
            (plVar8 = (longlong *)*plVar8, plVar8 != (longlong *)0x0)))) {
          cVar5 = (**(code **)(*plVar8 + 0x6c8))(plVar8);
          if ((cVar5 != '\0') && (plVar8[0x73] != 0)) {
            lVar7 = FUN_144a7b4ca();
            lVar3 = plVar8[0x73];
            if ((lVar3 != 0) && ((lVar7 != 0 && (lVar4 = *(longlong *)(lVar3 + 0x10), lVar4 != 0))))
            {
              iVar1 = *(int *)(lVar7 + 0x38);
              if ((iVar1 <= *(int *)(lVar4 + 0x38)) &&
                 ((*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) == lVar7 + 0x30
                  && (*(longlong *)(lVar3 + 0xf78) != 0)))) {
                FUN_1458734a4(param_1,plVar8,
                              CONCAT71((int7)(int3)((uint)iVar1 >> 8),
                                       *(int *)(*(longlong *)(lVar3 + 0xf78) + 0xe8) != 0));
              }
            }
          }
        }
      }
      lVar9 = lVar9 + 1;
    } while ((int)lVar9 < *(int *)(lVar6 + 0x238));
  }
  return;
}



// FUNCTION 141280818 FUN_141280818 body=325 status=ok
// SIG undefined FUN_141280818(void)

ulonglong FUN_141280818(uint *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  uint local_28;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  if (param_2 == 0) {
    local_28 = 0;
    uVar3 = 0;
  }
  else {
    local_28 = *(uint *)(param_2 + 0xc);
    if ((int)local_28 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((local_28 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_28 >> 0x10) * 8);
      param_2 = DAT_14c9647c8;
    }
    else {
      lVar5 = 0;
    }
    uVar3 = *(uint *)(lVar5 + 0x10);
    if (*(uint *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar6 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar7) {
        param_2 = 0x23d;
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar6);
      }
      LOCK();
      uVar3 = *(uint *)(lVar5 + 0x10);
      bVar7 = uVar3 == 0;
      if (bVar7) {
        *(uint *)(lVar5 + 0x10) = uVar6;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar7) {
        uVar3 = uVar6;
      }
    }
  }
  uVar6 = *param_1;
  uVar1 = param_1[1];
  local_24 = uVar3;
  if ((uVar6 != local_28) || (uVar4 = CONCAT71((int7)((ulonglong)param_2 >> 8),1), uVar1 != uVar3))
  {
    if (((uVar1 == 0) ||
        ((((int)uVar6 < 0 || (DAT_14c9647dc <= (int)uVar6)) ||
         (lVar5 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8), lVar5 == 0)))) ||
       ((*(uint *)(lVar5 + 0x10) != uVar1 || ((*(uint *)(lVar5 + 8) & 0x10200000) != 0)))) {
      uVar3 = FUN_144729dda(&local_28);
      uVar4 = (ulonglong)uVar3 ^ 1;
    }
    else {
      uVar4 = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 14128095e FUN_14128095e body=106 status=ok
// SIG undefined FUN_14128095e(void)

void FUN_14128095e(longlong param_1,int param_2)

{
  bool bVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  uVar2 = (ulonglong)*(int *)(param_1 + 0x88);
  if (0 < (longlong)uVar2) {
    plVar3 = (longlong *)(param_1 + 0x80);
    lVar4 = uVar2 * 0x18 + -0x14;
    do {
      if ((*(int *)(*plVar3 + -4 + lVar4) <= param_2) && (param_2 <= *(int *)(*plVar3 + lVar4))) {
        FUN_14587477e(plVar3,(int)uVar2 + -1);
        FUN_1458746d0(plVar3);
      }
      lVar4 = lVar4 + -0x18;
      bVar1 = 1 < uVar2;
      uVar2 = uVar2 - 1;
    } while (bVar1);
  }
  return;
}



// FUNCTION 1412809c8 FUN_1412809c8 body=241 status=ok
// SIG undefined FUN_1412809c8(void)

void FUN_1412809c8(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  uVar5 = uVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    uVar5 = *param_2;
  }
  local_38 = FUN_140eb4c46(uVar5);
  if ((local_38 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_38);
  }
  local_30 = uVar3;
  local_28 = plVar4;
  if (plVar4 == (longlong *)0x0) {
    FUN_141280acc(param_1,&local_38);
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    FUN_141280acc(param_1);
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141280acc FUN_141280acc body=276 status=ok
// SIG undefined FUN_141280acc(void)

void FUN_141280acc(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  local_30 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (local_30 == 0) {
      local_30 = 0;
    }
    else {
      FUN_1456cec3c();
      local_30 = *param_2;
    }
  }
  plVar1 = plStack_20;
  local_28 = param_2[1];
  plVar4 = (longlong *)param_2[2];
  if (plVar4 == (longlong *)0x0) {
    plStack_20 = (longlong *)0x0;
    plVar4 = plStack_20;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_20 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        puVar5 = (undefined8 *)*plStack_20;
        plStack_20 = plVar4;
        (*(code *)*puVar5)(plVar1);
        LOCK();
        piVar3 = (int *)((longlong)plVar1 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        plVar4 = plStack_20;
        if (*piVar3 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
          plVar4 = plStack_20;
        }
      }
    }
  }
  plStack_20 = plVar4;
  uVar6 = FUN_14477b072(param_1,DAT_14cb67408);
  (**(code **)(*param_1 + 0x248))(param_1,uVar6,&local_30);
  plVar4 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141280be2 FUN_141280be2 body=1157 status=ok
// SIG undefined FUN_141280be2(void)

void FUN_141280be2(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  int *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  int local_34;
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
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_30);
            goto LAB_141280ccd;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_30) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_30,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_30,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_30,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_30,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
LAB_141280ccd:
  local_34 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_14067a048;
      local_50 = 0;
      local_58 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_34);
            goto LAB_141280d99;
          }
        }
        _Src = (int *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_34) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_34,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_34,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_34,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_34,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
LAB_141280d99:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_141281068(param_1,local_30,local_34 != 0);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141281068 FUN_141281068 body=566 status=ok
// SIG undefined FUN_141281068(void)

void FUN_141281068(longlong param_1,longlong param_2)

{
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  float fVar6;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  code *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 == 0) goto LAB_14128118c;
  if (DAT_14cbbd498 == 0) {
    local_60 = &local_40;
    local_40 = FUN_140940982;
    local_50 = FUN_14081d0ea;
    local_58 = &LAB_146572ba2;
    local_68 = &LAB_148ca13ba;
    local_70 = &LAB_140e51436;
    local_78 = L"Engine";
    local_80 = 0;
    local_88 = 0x10000004;
    local_90 = 8;
    local_98 = 0x1068;
    FUN_14081cfa3(L"/Script/OakGame",L"OakWeapon",&DAT_14cbbd498,FUN_14660ec2c);
  }
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(DAT_14cbbd498 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cbbd498 + 0x38) * 8) != DAT_14cbbd498 + 0x30)) goto LAB_14128118c;
  FUN_1449027d0(param_1,&local_40);
  lVar3 = *(longlong *)(local_40 + 0x220);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x1b8));
  *(int *)(lVar3 + 0x1b0) = *(int *)(lVar3 + 0x1b0) + 1;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_38 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_38)();
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_38 + 0x10))();
      }
    }
  }
  if (*(char *)(lVar3 + 0x10) == '\0') {
    iVar4 = *(int *)(lVar3 + 0x14) + 1;
LAB_141281120:
    *(undefined1 *)(lVar3 + 0x10) = 1;
    *(int *)(lVar3 + 0x14) = iVar4;
  }
  else if (*(int *)(lVar3 + 0x14) == 0) {
    iVar4 = 1;
    goto LAB_141281120;
  }
  bVar2 = *(byte *)(param_1 + 0x90);
  if ((int)(uint)bVar2 < *(int *)(param_2 + 0xbf0)) {
    plVar5 = *(longlong **)
              (*(longlong *)(param_2 + 0xbe8) + 0x20 +
              (ulonglong)bVar2 * 0x80 + (ulonglong)bVar2 * 8);
  }
  else {
    plVar5 = (longlong *)0x0;
  }
  fVar6 = (float)(**(code **)(*plVar5 + 0x2c8))();
  if ((fVar6 != *(float *)(lVar3 + 0x120)) || (NAN(fVar6) || NAN(*(float *)(lVar3 + 0x120)))) {
    iVar4 = *(int *)(lVar3 + 0x124) + 1;
LAB_141281173:
    *(float *)(lVar3 + 0x120) = fVar6;
    *(int *)(lVar3 + 0x124) = iVar4;
  }
  else if (*(int *)(lVar3 + 0x124) == 0) {
    iVar4 = 1;
    goto LAB_141281173;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x1b8));
LAB_14128118c:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412812a0 FUN_1412812a0 body=3616 status=ok
// SIG undefined FUN_1412812a0(void)

void FUN_1412812a0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  void *pvVar8;
  longlong *plVar9;
  ushort *puVar10;
  byte bVar11;
  undefined1 uVar12;
  uint uVar13;
  int iVar14;
  undefined8 uVar15;
  int iVar16;
  ushort uVar17;
  ulonglong uVar18;
  ushort uVar19;
  ulonglong uVar20;
  longlong **pplVar21;
  longlong *plVar22;
  longlong lVar23;
  void **ppvVar24;
  bool bVar25;
  undefined1 auStack_1e8 [47];
  char local_1b9;
  longlong *local_1b8;
  longlong *local_1b0;
  void *local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  longlong *local_190;
  longlong local_188;
  longlong *local_180;
  longlong *local_178;
  int local_170;
  int local_16c;
  void *local_168;
  int local_160;
  int local_15c;
  longlong local_158;
  longlong local_148;
  longlong local_138;
  longlong local_128;
  longlong *local_118;
  longlong local_108;
  byte local_f0;
  longlong *local_e8;
  longlong *local_e0;
  undefined1 local_d8 [120];
  byte local_60;
  longlong *local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  lVar6 = *(longlong *)(param_1 + 0x288);
  if (lVar6 == 0) goto LAB_141281410;
  lVar2 = param_1 + 0x208;
  FUN_1448d5e3c(&local_e8,lVar2);
  lVar7 = local_e8[0x90];
  AcquireSRWLockShared((PSRWLOCK)(lVar7 + 0xc0));
  plVar22 = local_e0;
  if (local_e0 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_e0 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_e0)(local_e0);
      LOCK();
      piVar1 = (int *)((longlong)plVar22 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
      }
    }
  }
  if (*(int *)(lVar6 + 0xac) != *(int *)(lVar7 + 0xb8)) {
    *(int *)(lVar6 + 0xac) = *(int *)(lVar7 + 0xb8);
    if (*(int *)(lVar6 + 0x2b8) != *(int *)(lVar7 + 0xc)) {
      *(undefined1 *)(lVar6 + 0x2b4) = *(undefined1 *)(lVar7 + 8);
      *(undefined4 *)(lVar6 + 0x2b8) = *(undefined4 *)(lVar7 + 0xc);
    }
    iVar14 = *(int *)(lVar6 + 0x2c0);
    iVar16 = *(int *)(lVar7 + 0x14);
    if (iVar14 != iVar16) {
      *(undefined1 *)(lVar6 + 700) = *(undefined1 *)(lVar7 + 0x10);
      *(undefined4 *)(lVar6 + 0x2c0) = *(undefined4 *)(lVar7 + 0x14);
    }
    iVar4 = *(int *)(lVar6 + 0x2c8);
    iVar5 = *(int *)(lVar7 + 0x1c);
    if (iVar4 != iVar5) {
      *(undefined1 *)(lVar6 + 0x2c4) = *(undefined1 *)(lVar7 + 0x18);
      *(undefined4 *)(lVar6 + 0x2c8) = *(undefined4 *)(lVar7 + 0x1c);
    }
    local_1b9 = iVar14 != iVar16 || iVar4 != iVar5;
    if ((*(int *)(param_1 + 0x2c8) == 0) || (*(int *)(param_1 + 0x2c8) != *(int *)(lVar7 + 0x70))) {
      *(int *)(param_1 + 0x2c8) = *(int *)(lVar7 + 0x70);
      FUN_1458749da(param_1 + 0x2b8,lVar7 + 0x60);
      local_1a0 = (longlong *)(lVar6 + 0xb0);
      iVar14 = *(int *)(lVar6 + 0xbc);
      FUN_141282492(*(undefined8 *)(lVar6 + 0xb0));
      *(undefined4 *)(lVar6 + 0xb8) = 0;
      if ((iVar14 < 0) && (*(int *)(lVar6 + 0xbc) != 0)) {
        FUN_148ebaee6(local_1a0);
      }
      *(undefined4 *)(lVar6 + 0x2f0) = 0;
      *(undefined2 *)(lVar6 + 0x2b1) = 0;
      plVar22 = *(longlong **)(param_1 + 0x2b8);
      *(int *)(param_1 + 0x2c8) = *(int *)(param_1 + 0x2c8) + 2;
      local_1b9 = '\x01';
      if ((longlong)*(int *)(param_1 + 0x2c0) != 0) {
        local_190 = plVar22 + (longlong)*(int *)(param_1 + 0x2c0) * 0x11;
        do {
          iVar14 = *(int *)(lVar6 + 0xb8);
          uVar13 = iVar14 + 1;
          *(uint *)(lVar6 + 0xb8) = uVar13;
          local_1b0 = plVar22;
          if (*(uint *)(lVar6 + 0xbc) < uVar13) {
            FUN_145874ab0(local_1a0);
          }
          plVar22 = (longlong *)((longlong)iVar14 * 0x58 + *local_1a0);
          FUN_1412820c1(plVar22);
          local_1b8 = plVar22;
          if (plVar22 != local_1b0) {
            iVar14 = (int)local_1b0[1];
            pvVar8 = (void *)*local_1b0;
            *(int *)(plVar22 + 1) = iVar14;
            if (iVar14 == 0 && *(int *)((longlong)plVar22 + 0xc) == 0) {
              *(undefined4 *)((longlong)plVar22 + 0xc) = 0;
            }
            else {
              FUN_1446dd670(plVar22);
              if (iVar14 != 0) {
                memcpy((void *)*local_1b8,pvVar8,(longlong)iVar14 * 2);
              }
            }
          }
          plVar22 = local_1b8 + 2;
          if (plVar22 != local_1b0 + 3) {
            iVar14 = (int)local_1b0[4];
            pvVar8 = (void *)local_1b0[3];
            *(int *)(local_1b8 + 3) = iVar14;
            if (iVar14 == 0 && *(int *)((longlong)local_1b8 + 0x1c) == 0) {
              *(undefined4 *)((longlong)local_1b8 + 0x1c) = 0;
            }
            else {
              local_1a8 = pvVar8;
              FUN_1446dd670(plVar22);
              if (iVar14 != 0) {
                memcpy((void *)*plVar22,local_1a8,(longlong)iVar14 * 2);
              }
            }
          }
          plVar22 = local_1b8 + 4;
          if (plVar22 != local_1b0 + 9) {
            iVar14 = (int)local_1b0[10];
            pvVar8 = (void *)local_1b0[9];
            *(int *)(local_1b8 + 5) = iVar14;
            if (iVar14 == 0 && *(int *)((longlong)local_1b8 + 0x2c) == 0) {
              *(undefined4 *)((longlong)local_1b8 + 0x2c) = 0;
            }
            else {
              local_1a8 = pvVar8;
              FUN_1446dd670(plVar22);
              if (iVar14 != 0) {
                memcpy((void *)*plVar22,local_1a8,(longlong)iVar14 * 2);
              }
            }
          }
          if (local_1b8 != local_1b0) {
            iVar14 = (int)local_1b0[7];
            pvVar8 = (void *)local_1b0[6];
            *(int *)(local_1b8 + 7) = iVar14;
            if (iVar14 == 0 && *(int *)((longlong)local_1b8 + 0x3c) == 0) {
              *(undefined4 *)((longlong)local_1b8 + 0x3c) = 0;
            }
            else {
              plVar22 = local_1b8 + 6;
              local_1a8 = pvVar8;
              FUN_1446dd670(plVar22);
              if (iVar14 != 0) {
                memcpy((void *)*plVar22,local_1a8,(longlong)iVar14 * 2);
              }
            }
          }
          *(char *)(local_1b8 + 10) = (char)local_1b0[0xc];
          lVar23 = local_1b0[0xd];
          *(char *)((longlong)local_1b8 + 0x51) = (char)lVar23;
          if ((char)lVar23 == '\x01') {
            *(int *)(lVar6 + 0x2f0) = *(int *)(lVar6 + 0x2f0) + 1;
          }
          iVar14 = (int)local_1b0[1];
          if (iVar14 == *(int *)(param_1 + 0x2f0)) {
            if (1 < iVar14) {
              lVar23 = 0;
              while( true ) {
                uVar17 = *(ushort *)(*local_1b0 + lVar23);
                uVar18 = (ulonglong)uVar17;
                uVar19 = *(ushort *)(*(longlong *)(param_1 + 0x2e8) + lVar23);
                if (uVar17 != uVar19) break;
                if (uVar17 == 0) goto LAB_14128201b;
LAB_141281fe1:
                lVar23 = lVar23 + 2;
              }
              if ((uVar19 | uVar17) < 0x80) {
                uVar17 = (ushort)(byte)(&DAT_149e05da0)[uVar18];
                uVar20 = (ulonglong)uVar19;
                uVar19 = (ushort)(byte)(&DAT_149e05da0)[uVar20];
                if ((&DAT_149e05da0)[uVar18] == (&DAT_149e05da0)[uVar20]) goto LAB_141281fe1;
              }
              if (uVar17 != uVar19) goto LAB_1412817b6;
            }
LAB_14128201b:
            *(char *)(lVar6 + 0x2b1) = (char)local_1b0[0xd];
            *(char *)(lVar6 + 0x2b2) = (char)local_1b0[0xc];
            FUN_148eac710(param_1);
          }
          else if (*(int *)(param_1 + 0x2f0) + iVar14 == 1) goto LAB_14128201b;
LAB_1412817b6:
          if ((longlong)(int)local_1b0[0xf] != 0) {
            local_1a8 = (void *)local_1b0[0xe];
            local_198 = local_1b8 + 8;
            local_188 = (longlong)(int)local_1b0[0xf] << 5;
            lVar23 = 0;
            do {
              iVar14 = (int)local_1b8[9];
              *(uint *)(local_1b8 + 9) = iVar14 + 1U;
              if (*(uint *)((longlong)local_1b8 + 0x4c) < iVar14 + 1U) {
                FUN_14128227e(local_198,iVar14);
              }
              puVar3 = (undefined1 *)(*local_198 + (longlong)iVar14 * 0x18);
              FUN_141282111(puVar3);
              plVar22 = *(longlong **)((longlong)local_1a8 + lVar23);
              plVar9 = *(longlong **)(puVar3 + 8);
              if (plVar9 != plVar22) {
                *(longlong **)(puVar3 + 8) = plVar22;
                local_180 = plVar9;
                if (plVar22 != (longlong *)0x0) {
                  (**(code **)(*plVar22 + 8))();
                }
                if (local_180 != (longlong *)0x0) {
                  (**(code **)(*local_180 + 0x10))();
                }
              }
              *(undefined4 *)(puVar3 + 0x10) = *(undefined4 *)((longlong)local_1a8 + lVar23 + 8);
              if (*(int *)(puVar3 + 4) != *(int *)((longlong)local_1a8 + lVar23 + 0x1c)) {
                *puVar3 = *(undefined1 *)((longlong)local_1a8 + lVar23 + 0x18);
                *(undefined4 *)(puVar3 + 4) = *(undefined4 *)((longlong)local_1a8 + lVar23 + 0x1c);
              }
              lVar23 = lVar23 + 0x20;
            } while (local_188 != lVar23);
          }
          plVar22 = local_1b0 + 0x11;
        } while (plVar22 != local_190);
      }
    }
    if (*(int *)(lVar6 + 0x2d4) != *(int *)(lVar7 + 0xac)) {
      *(undefined1 *)(lVar6 + 0x2d0) = *(undefined1 *)(lVar7 + 0xa8);
      *(undefined4 *)(lVar6 + 0x2d4) = *(undefined4 *)(lVar7 + 0xac);
      FUN_144a5dc74(&local_e8);
      FUN_140ac6c96(&DAT_14cbdf930,&local_e8);
      FUN_144a5dc74(&local_178);
      FUN_140ac6c96(&DAT_14cbdf958,&local_178);
      pplVar21 = &local_e8;
      if (*(char *)(lVar6 + 0x2d0) != '\0') {
        pplVar21 = &local_178;
      }
      uVar15 = FUN_1447a1f4a(pplVar21);
      FUN_144a787a6(lVar6 + 0xd8,uVar15);
      if (local_178 != (longlong *)0x0) {
        (**(code **)(*local_178 + 0x10))();
      }
      if (local_e8 != (longlong *)0x0) {
        (**(code **)(*local_e8 + 0x10))();
      }
    }
    if ((*(int *)(param_1 + 0x2e0) == 0) || (*(int *)(param_1 + 0x2e0) != *(int *)(lVar7 + 0xa0))) {
      *(int *)(param_1 + 0x2e0) = *(int *)(lVar7 + 0xa0);
      FUN_1412821e8(param_1 + 0x2d0,lVar7 + 0x90);
      local_1b8 = (longlong *)(lVar6 + 0x118);
      iVar14 = *(int *)(lVar6 + 0x124);
      FUN_140d47191(*(undefined8 *)(lVar6 + 0x118),*(undefined4 *)(lVar6 + 0x120));
      *(undefined4 *)(lVar6 + 0x120) = 0;
      if ((iVar14 < 0) && (*(int *)(lVar6 + 0x124) != 0)) {
        FUN_148e6b6d0(local_1b8,0);
      }
      FUN_144a5dc74(local_58);
      FUN_140ac6c96(&DAT_14cbdf930,local_58);
      FUN_1410d1d82(&local_e8);
      FUN_144a787a6(&local_e8,&DAT_14cbdf740);
      uVar15 = FUN_1447a1f4a(local_58);
      FUN_144a787a6(local_d8,uVar15);
      local_60 = (local_60 & 0x9f | *(char *)(lVar6 + 0x2d0) << 6) ^ 0x60;
      iVar14 = *(int *)(lVar6 + 0x120);
      *(uint *)(lVar6 + 0x120) = iVar14 + 1U;
      if (*(uint *)(lVar6 + 0x124) < iVar14 + 1U) {
        FUN_1410d2002(local_1b8,iVar14);
      }
      FUN_1410d0c56((longlong)iVar14 * 0x90 + *local_1b8,&local_e8);
      ppvVar24 = *(void ***)(param_1 + 0x2d0);
      *(int *)(param_1 + 0x2e0) = *(int *)(param_1 + 0x2e0) + 2;
      if ((longlong)*(int *)(param_1 + 0x2d8) != 0) {
        plVar22 = (longlong *)((longlong)*(int *)(param_1 + 0x2d8) << 6);
        do {
          local_1b0 = plVar22;
          FUN_1410d1d82(&local_178);
          if (ppvVar24 + 3 != &local_178) {
            iVar14 = *(int *)(ppvVar24 + 4);
            pvVar8 = ppvVar24[3];
            local_170 = iVar14;
            if (iVar14 == 0 && local_16c == 0) {
              local_16c = 0;
            }
            else {
              FUN_1446dd670(&local_178,iVar14);
              if (iVar14 != 0) {
                memcpy(local_178,pvVar8,(longlong)iVar14 * 2);
              }
            }
          }
          if (ppvVar24 != &local_168) {
            iVar14 = *(int *)(ppvVar24 + 1);
            pvVar8 = *ppvVar24;
            local_160 = iVar14;
            if (iVar14 == 0 && local_15c == 0) {
              local_15c = 0;
            }
            else {
              FUN_1446dd670(&local_168,iVar14);
              if (iVar14 != 0) {
                memcpy(local_168,pvVar8,(longlong)iVar14 * 2);
              }
            }
          }
          local_f0 = local_f0 & 0x9f | *(char *)(ppvVar24 + 7) << 6 | 0x20;
          iVar14 = *(int *)(lVar6 + 0x120);
          *(uint *)(lVar6 + 0x120) = iVar14 + 1U;
          if (*(uint *)(lVar6 + 0x124) < iVar14 + 1U) {
            FUN_1410d2002(local_1b8,iVar14);
          }
          FUN_1410d0c56((longlong)iVar14 * 0x90 + *local_1b8,&local_178);
          if (local_108 != 0) {
            FUN_1400020a8();
          }
          if (local_118 != (longlong *)0x0) {
            (**(code **)(*local_118 + 0x10))();
          }
          if (local_128 != 0) {
            FUN_1400020a8();
          }
          if (local_138 != 0) {
            FUN_1400020a8();
          }
          if (local_148 != 0) {
            FUN_1400020a8();
          }
          if (local_158 != 0) {
            FUN_1400020a8();
          }
          if (local_168 != (void *)0x0) {
            FUN_1400020a8();
          }
          if (local_178 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          ppvVar24 = ppvVar24 + 8;
          plVar22 = local_1b0 + -8;
        } while (plVar22 != (longlong *)0x0);
      }
      FUN_140d471ba(&local_e8);
      if (local_58[0] != (longlong *)0x0) {
        (**(code **)(*local_58[0] + 0x10))();
      }
    }
    if (*(int *)(lVar6 + 0x2ec) == *(int *)(lVar7 + 0xb4)) {
      iVar14 = *(int *)(lVar6 + 0x2e8);
    }
    else {
      iVar14 = *(int *)(lVar7 + 0xb0);
      *(int *)(lVar6 + 0x2e8) = iVar14;
      *(undefined4 *)(lVar6 + 0x2ec) = *(undefined4 *)(lVar7 + 0xb4);
    }
    if ((bool)*(char *)(lVar6 + 0x2e0) == (iVar14 != 0)) {
      if (*(int *)(lVar6 + 0x2e4) == 0) {
        iVar16 = 1;
        goto LAB_141281ede;
      }
    }
    else {
      iVar16 = *(int *)(lVar6 + 0x2e4) + 1;
LAB_141281ede:
      *(bool *)(lVar6 + 0x2e0) = iVar14 != 0;
      *(int *)(lVar6 + 0x2e4) = iVar16;
    }
    FUN_145874b40();
    if ((local_1b9 != '\0') && (lVar23 = *(longlong *)(param_1 + 0x288), lVar23 != 0)) {
      if ((*(char *)(lVar23 + 0x2cc) != '\x01') || (bVar25 = true, *(char *)(lVar23 + 700) == '\0'))
      {
        if (*(char *)(lVar23 + 0x2c4) == '\0') {
          bVar25 = *(int *)(lVar23 + 0xb8) == 0;
        }
        else {
          bVar25 = false;
        }
      }
      *(bool *)(lVar23 + 0x2cd) = bVar25;
      puVar10 = *(ushort **)(lVar23 + 0x80);
      if (puVar10 != (ushort *)0x0) {
        *puVar10 = *puVar10 | (ushort)(1L << (*(byte *)(lVar23 + 0x78) & 0x3f));
      }
    }
    puVar10 = *(ushort **)(lVar6 + 0x80);
    if (puVar10 != (ushort *)0x0) {
      *puVar10 = *puVar10 | (ushort)(1L << (*(byte *)(lVar6 + 0x78) & 0x3f));
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)(lVar7 + 0xc0));
  lVar6 = *(longlong *)(param_1 + 0x288);
  if (lVar6 == 0) goto LAB_141281410;
  FUN_1448d5e3c(&local_e8,lVar2);
  lVar7 = local_e8[0x7c];
  AcquireSRWLockShared((PSRWLOCK)(lVar7 + 0xc0));
  plVar22 = local_e0;
  if (local_e0 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_e0 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_e0)(local_e0);
      LOCK();
      piVar1 = (int *)((longlong)plVar22 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
      }
    }
  }
  if ((*(int *)(param_1 + 0x2b0) != *(int *)(lVar7 + 0xb8)) &&
     (*(int *)(param_1 + 0x2b0) = *(int *)(lVar7 + 0xb8),
     *(int *)(lVar6 + 0x2dc) != *(int *)(lVar7 + 0x24))) {
    *(undefined1 *)(lVar6 + 0x2d8) = *(undefined1 *)(lVar7 + 0x20);
    *(undefined4 *)(lVar6 + 0x2dc) = *(undefined4 *)(lVar7 + 0x24);
    puVar10 = *(ushort **)(lVar6 + 0x80);
    if (puVar10 != (ushort *)0x0) {
      *puVar10 = *puVar10 | (ushort)(1L << (*(byte *)(lVar6 + 0x78) & 0x3f));
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)(lVar7 + 0xc0));
  lVar6 = *(longlong *)(param_1 + 0x288);
  if (lVar6 == 0) goto LAB_141281410;
  FUN_1448d5e3c(&local_e8,lVar2);
  lVar2 = local_e8[0x70];
  AcquireSRWLockShared((PSRWLOCK)(lVar2 + 0x6e0));
  if (local_e0 != (longlong *)0x0) {
    LOCK();
    plVar22 = local_e0 + 1;
    *(int *)plVar22 = (int)*plVar22 + -1;
    UNLOCK();
    if ((int)*plVar22 == 0) {
      (**(code **)*local_e0)(local_e0);
      LOCK();
      piVar1 = (int *)((longlong)local_e0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_e0 + 0x10))(local_e0);
      }
    }
  }
  if (*(int *)(param_1 + 0x2b4) != *(int *)(lVar2 + 0x6d8)) {
    *(int *)(param_1 + 0x2b4) = *(int *)(lVar2 + 0x6d8);
    if (*(int *)(param_1 + 0x2fc) == *(int *)(lVar2 + 0xc)) {
      if (*(int *)(param_1 + 0x304) == *(int *)(lVar2 + 100)) goto LAB_141281407;
      bVar11 = *(byte *)(param_1 + 0x2f8);
LAB_141281474:
      *(undefined1 *)(param_1 + 0x300) = *(undefined1 *)(lVar2 + 0x60);
      *(undefined4 *)(param_1 + 0x304) = *(undefined4 *)(lVar2 + 100);
    }
    else {
      bVar11 = *(byte *)(lVar2 + 8);
      *(byte *)(param_1 + 0x2f8) = bVar11;
      *(undefined4 *)(param_1 + 0x2fc) = *(undefined4 *)(lVar2 + 0xc);
      if (*(int *)(param_1 + 0x304) != *(int *)(lVar2 + 100)) goto LAB_141281474;
    }
    if ((bVar11 & 1) == 0) {
      uVar12 = *(undefined1 *)(param_1 + 0x300);
    }
    else {
      uVar12 = 0;
    }
    *(undefined1 *)(lVar6 + 0x2cc) = uVar12;
    lVar7 = *(longlong *)(param_1 + 0x288);
    if (lVar7 != 0) {
      if ((*(char *)(lVar7 + 0x2cc) != '\x01') || (bVar25 = true, *(char *)(lVar7 + 700) == '\0')) {
        if (*(char *)(lVar7 + 0x2c4) == '\0') {
          bVar25 = *(int *)(lVar7 + 0xb8) == 0;
        }
        else {
          bVar25 = false;
        }
      }
      *(bool *)(lVar7 + 0x2cd) = bVar25;
      puVar10 = *(ushort **)(lVar7 + 0x80);
      if (puVar10 != (ushort *)0x0) {
        *puVar10 = *puVar10 | (ushort)(1L << (*(byte *)(lVar7 + 0x78) & 0x3f));
      }
    }
    FUN_145874b40(param_1);
    puVar10 = *(ushort **)(lVar6 + 0x80);
    if (puVar10 != (ushort *)0x0) {
      *puVar10 = *puVar10 | (ushort)(1L << (*(byte *)(lVar6 + 0x78) & 0x3f));
    }
  }
LAB_141281407:
  ReleaseSRWLockShared((PSRWLOCK)(lVar2 + 0x6e0));
LAB_141281410:
  if ((local_48 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412820c1 FUN_1412820c1 body=80 status=ok
// SIG undefined FUN_1412820c1(void)

void FUN_1412820c1(longlong param_1)

{
  FUN_140056680(param_1,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x10,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x20,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x30,&DAT_149dfb77a);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined2 *)(param_1 + 0x50) = 0;
  return;
}



// FUNCTION 141282111 FUN_141282111 body=214 status=ok
// SIG undefined FUN_141282111(void)

void FUN_141282111(undefined1 *param_1)

{
  longlong *plVar1;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
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
  *(longlong **)(param_1 + 8) = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 0x10) = DAT_14c844848;
  return;
}



// FUNCTION 1412821e8 FUN_1412821e8 body=93 status=ok
// SIG undefined FUN_1412821e8(void)

undefined8 * FUN_1412821e8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_141282245(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_145874976(param_1,iVar1);
      FUN_141282535(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 141282245 FUN_141282245 body=57 status=ok
// SIG undefined FUN_141282245(void)

void FUN_141282245(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 8;
  }
  return;
}



// FUNCTION 14128227e FUN_14128227e body=370 status=ok
// SIG undefined FUN_14128227e(void)

void FUN_14128227e(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0x18;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141282307;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_141282307:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 1412823f0 FUN_1412823f0 body=118 status=ok
// SIG undefined FUN_1412823f0(void)

void FUN_1412823f0(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x78);
    do {
      FUN_141282466(*(undefined8 *)(puVar1 + -2),*puVar1);
      if (*(longlong *)(puVar1 + -2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(puVar1 + -0xc) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(puVar1 + -0x12) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(puVar1 + -0x18) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(puVar1 + -0x1e) != 0) {
        FUN_1400020a8();
      }
      puVar1 = puVar1 + 0x22;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 141282466 FUN_141282466 body=44 status=ok
// SIG undefined FUN_141282466(void)

void FUN_141282466(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if ((longlong *)*param_1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_1 + 0x10))();
    }
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 141282492 FUN_141282492 body=115 status=ok
// SIG undefined FUN_141282492(void)

void FUN_141282492(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x48);
    do {
      FUN_141282505(*(undefined8 *)(puVar1 + -2),*puVar1);
      if (*(longlong *)(puVar1 + -2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(puVar1 + -6) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(puVar1 + -10) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(puVar1 + -0xe) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(puVar1 + -0x12) != 0) {
        FUN_1400020a8();
      }
      puVar1 = puVar1 + 0x16;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 141282505 FUN_141282505 body=48 status=ok
// SIG undefined FUN_141282505(void)

void FUN_141282505(longlong param_1,int param_2)

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



// FUNCTION 141282535 FUN_141282535 body=311 status=ok
// SIG undefined FUN_141282535(void)

void FUN_141282535(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *pvVar2;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    if (param_2 == param_1) {
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
      param_1[3] = 0;
      param_1[4] = 0;
      *(undefined4 *)(param_1 + 5) = 0;
    }
    else {
      iVar1 = *(int *)(param_2 + 1);
      pvVar2 = (void *)*param_2;
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(param_1,iVar1,0);
        memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
      }
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
      param_1[3] = 0;
      param_1[4] = 0;
      *(undefined4 *)(param_1 + 5) = 0;
      iVar1 = *(int *)(param_2 + 4);
      pvVar2 = (void *)param_2[3];
      *(int *)(param_1 + 4) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0x24) = 0;
      }
      else {
        FUN_1446dd670(param_1 + 3,iVar1,0);
        memcpy((void *)param_1[3],pvVar2,(longlong)iVar1 * 2);
      }
    }
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    param_1[6] = 0;
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    *(undefined1 *)(param_1 + 7) = 0;
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
    *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
    *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
    param_1 = param_1 + 8;
    param_2 = param_2 + 8;
  }
  return;
}



// FUNCTION 14128266c FUN_14128266c body=719 status=ok
// SIG undefined FUN_14128266c(void)

void FUN_14128266c(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (param_3 != 0) {
    lVar5 = 0;
    do {
      *(undefined8 *)(param_1 + lVar5) = 0;
      ((undefined8 *)(param_1 + lVar5))[1] = 0;
      *(undefined4 *)(param_1 + 0x10 + lVar5) = 0;
      if (param_2 == param_1) {
        *(undefined4 *)(param_1 + 0x10 + lVar5) = *(undefined4 *)(param_2 + 0x10 + lVar5);
        puVar4 = (undefined8 *)(param_1 + 0x18 + lVar5);
        *puVar4 = 0;
        puVar4[1] = 0;
        *(undefined4 *)(param_1 + 0x28 + lVar5) = 0;
        *(undefined4 *)(param_1 + 0x28 + lVar5) = *(undefined4 *)(param_2 + 0x28 + lVar5);
        puVar4 = (undefined8 *)(param_1 + 0x30 + lVar5);
        *puVar4 = 0;
        puVar4[1] = 0;
        *(undefined4 *)(param_1 + 0x40 + lVar5) = 0;
        *(undefined4 *)(param_1 + 0x40 + lVar5) = *(undefined4 *)(param_2 + 0x40 + lVar5);
        puVar4 = (undefined8 *)(param_1 + 0x48 + lVar5);
        *puVar4 = 0;
        puVar4[1] = 0;
        *(undefined4 *)(param_1 + 0x58 + lVar5) = 0;
      }
      else {
        puVar4 = (undefined8 *)(param_1 + lVar5);
        iVar1 = *(int *)(param_2 + 8 + lVar5);
        pvVar2 = *(void **)(param_2 + lVar5);
        *(int *)(param_1 + 8 + lVar5) = iVar1;
        if ((longlong)iVar1 == 0) {
          *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar4,iVar1,0);
          memcpy((void *)*puVar4,pvVar2,(longlong)iVar1 * 2);
        }
        *(undefined4 *)(param_1 + 0x10 + lVar5) = *(undefined4 *)(param_2 + 0x10 + lVar5);
        puVar4 = (undefined8 *)(param_1 + 0x18 + lVar5);
        *puVar4 = 0;
        puVar4[1] = 0;
        *(undefined4 *)(param_1 + 0x28 + lVar5) = 0;
        iVar1 = *(int *)(param_2 + 0x20 + lVar5);
        pvVar2 = *(void **)(param_2 + 0x18 + lVar5);
        *(int *)(param_1 + 0x20 + lVar5) = iVar1;
        if ((longlong)iVar1 == 0) {
          *(undefined4 *)(param_1 + 0x24 + lVar5) = 0;
        }
        else {
          puVar4 = (undefined8 *)(param_1 + lVar5 + 0x18);
          FUN_1446dd670(puVar4,iVar1,0);
          memcpy((void *)*puVar4,pvVar2,(longlong)iVar1 * 2);
        }
        *(undefined4 *)(param_1 + 0x28 + lVar5) = *(undefined4 *)(param_2 + 0x28 + lVar5);
        puVar4 = (undefined8 *)(param_1 + 0x30 + lVar5);
        *puVar4 = 0;
        puVar4[1] = 0;
        *(undefined4 *)(param_1 + 0x40 + lVar5) = 0;
        iVar1 = *(int *)(param_2 + 0x38 + lVar5);
        pvVar2 = *(void **)(param_2 + 0x30 + lVar5);
        *(int *)(param_1 + 0x38 + lVar5) = iVar1;
        if ((longlong)iVar1 == 0) {
          *(undefined4 *)(param_1 + 0x3c + lVar5) = 0;
        }
        else {
          puVar4 = (undefined8 *)(param_1 + lVar5 + 0x30);
          FUN_1446dd670(puVar4,iVar1,0);
          memcpy((void *)*puVar4,pvVar2,(longlong)iVar1 * 2);
        }
        *(undefined4 *)(param_1 + 0x40 + lVar5) = *(undefined4 *)(param_2 + 0x40 + lVar5);
        puVar4 = (undefined8 *)(param_1 + 0x48 + lVar5);
        *puVar4 = 0;
        puVar4[1] = 0;
        *(undefined4 *)(param_1 + 0x58 + lVar5) = 0;
        iVar1 = *(int *)(param_2 + 0x50 + lVar5);
        pvVar2 = *(void **)(param_2 + 0x48 + lVar5);
        *(int *)(param_1 + 0x50 + lVar5) = iVar1;
        if ((longlong)iVar1 == 0) {
          *(undefined4 *)(param_1 + 0x54 + lVar5) = 0;
        }
        else {
          puVar4 = (undefined8 *)(param_1 + lVar5 + 0x48);
          FUN_1446dd670(puVar4,iVar1,0);
          memcpy((void *)*puVar4,pvVar2,(longlong)iVar1 * 2);
        }
      }
      *(undefined4 *)(param_1 + 0x58 + lVar5) = *(undefined4 *)(param_2 + 0x58 + lVar5);
      *(undefined1 *)(param_1 + 0x60 + lVar5) = 0;
      *(undefined4 *)(param_1 + 100 + lVar5) = 0;
      *(undefined1 *)(param_1 + 0x60 + lVar5) = *(undefined1 *)(param_2 + 0x60 + lVar5);
      *(undefined4 *)(param_1 + 100 + lVar5) = *(undefined4 *)(param_2 + 100 + lVar5);
      *(undefined1 *)(param_1 + 0x68 + lVar5) = 0;
      *(undefined4 *)(param_1 + 0x6c + lVar5) = 0;
      *(undefined1 *)(param_1 + 0x68 + lVar5) = *(undefined1 *)(param_2 + 0x68 + lVar5);
      *(undefined4 *)(param_1 + 0x6c + lVar5) = *(undefined4 *)(param_2 + 0x6c + lVar5);
      *(undefined8 *)(param_1 + 0x70 + lVar5) = 0;
      iVar1 = *(int *)(param_2 + 0x78 + lVar5);
      uVar3 = *(undefined8 *)(param_2 + 0x70 + lVar5);
      *(int *)(param_1 + 0x78 + lVar5) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x7c + lVar5) = 0;
      }
      else {
        puVar4 = (undefined8 *)(param_1 + lVar5 + 0x70);
        FUN_141282982(puVar4,iVar1);
        FUN_14128293b(*puVar4,uVar3);
      }
      *(undefined4 *)(param_1 + 0x80 + lVar5) = *(undefined4 *)(param_2 + 0x80 + lVar5);
      lVar5 = lVar5 + 0x88;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14128293b FUN_14128293b body=70 status=ok
// SIG undefined FUN_14128293b(void)

void FUN_14128293b(longlong param_1,longlong param_2,int param_3)

{
  do {
    FUN_140dd90de(param_1,param_2);
    *(undefined1 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 141282982 FUN_141282982 body=201 status=ok
// SIG undefined FUN_141282982(void)

void FUN_141282982(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = (longlong)param_2 * 0x20;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      if (uVar1 < 0x7ff1) {
        uVar1 = (ulonglong)
                (ushort)(&DAT_14c841d90)
                        [0x32 - (byte)(&DAT_14c841e00)[((longlong)param_2 & 0x7ffffffffffffffU) * 2]
                        ];
      }
      else {
        uVar3 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar3 = (ulonglong)DAT_14c841df8;
        }
        uVar1 = -uVar3 & (uVar1 + uVar3) - 1;
      }
    }
    else {
      uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
    }
  }
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 5)) {
    uVar3 = uVar1 >> 5 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x20,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 141282a4c FUN_141282a4c body=73 status=ok
// SIG undefined FUN_141282a4c(void)

undefined8 FUN_141282a4c(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    iVar1 = *(int *)(param_1 + 0x80);
    if ((longlong)iVar1 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x78);
      if (*(longlong *)(param_1 + 0x78) == 0) {
        lVar3 = param_1 + 0x38;
      }
      uVar2 = *(undefined8 *)(lVar3 + -8 + (longlong)iVar1 * 8);
      *(int *)(param_1 + 0x80) = iVar1 + -1;
      FUN_142b310e4(param_1 + 0x38);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 141282a96 FUN_141282a96 body=172 status=ok
// SIG undefined FUN_141282a96(void)

void FUN_141282a96(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_140389788();
  lVar2 = plVar1[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar2 = plVar1[0x22];
  }
  if (((((*(byte *)(lVar2 + 0x48) & 4) != 0) && (lVar2 = *(longlong *)(param_1 + 0xd0), lVar2 != 0))
      && (lVar2 != 8 && *(longlong *)(lVar2 + 0xb4) == DAT_14cb08720)) &&
     (*(char *)(lVar2 + 0x290) == '\0')) {
    FUN_145d75160(DAT_14c98e618,1,0);
  }
  if ((DAT_14cb0d2b0 != 0) && (*(longlong *)(DAT_14cb0d2b0 + 0xf50) != 0)) {
    FUN_147972ee4(*(longlong *)(DAT_14cb0d2b0 + 0xf50),*(undefined4 *)(param_1 + 0x78));
    *(undefined1 *)(param_1 + 0xe4) = 1;
  }
  return;
}



// FUNCTION 141282b42 FUN_141282b42 body=1123 status=ok
// SIG undefined FUN_141282b42(void)

void FUN_141282b42(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong lStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = param_1 + 0x40;
  local_90 = (longlong *)0x100000000;
  uStack_80 = 0xffffffff;
  local_78 = local_78 & 0xffffffff00000000;
  local_88 = lVar1;
  if (*(int *)(param_1 + 0x58) == 0) {
    uVar16 = 1;
    uStack_80._0_4_ = 0xffffffff;
    iVar11 = 0;
    iVar10 = 0;
    uStack_80._4_4_ = 0;
    local_90._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_90);
    uVar16 = (ulonglong)local_90 >> 0x20;
    iVar11 = *(int *)(param_1 + 0x58);
    iVar10 = (uint)local_78;
  }
  lVar6 = local_88;
  iVar9 = (int)local_90;
  uVar7 = (uint)uStack_80;
  iVar8 = uStack_80._4_4_;
  if (uStack_80._4_4_ != iVar11 || local_88 != lVar1) {
    do {
      (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x30) + 8 + (longlong)iVar8 * 0x20) +
                  0x90))();
      uVar7 = ~(uint)uVar16 & uVar7;
      lVar15 = *(longlong *)(lVar6 + 0x10);
      if (*(longlong *)(lVar6 + 0x10) == 0) {
        lVar15 = lVar6;
      }
      iVar4 = *(int *)(lVar6 + 0x18);
      lVar13 = (longlong)iVar9;
      uVar12 = *(uint *)(lVar15 + lVar13 * 4) & uVar7;
      if (uVar12 == 0) {
        iVar8 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar8 = iVar4 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar5 = iVar8;
        if (iVar8 < iVar9) {
          iVar5 = iVar9;
        }
        if (iVar9 < iVar8) {
          lVar14 = 0;
          do {
            uVar12 = *(uint *)(lVar15 + lVar13 * 4 + 4 + lVar14 * 4);
            if (uVar12 != 0) {
              iVar9 = iVar9 + (int)lVar14 + 1;
              uVar7 = 0xffffffff;
              goto LAB_141282c5a;
            }
            iVar10 = iVar10 + 0x20;
            lVar14 = lVar14 + 1;
          } while (iVar5 - lVar13 != lVar14);
          uVar7 = 0xffffffff;
          iVar9 = iVar5;
        }
        iVar9 = iVar9 + 1;
        iVar8 = iVar4;
      }
      else {
LAB_141282c5a:
        uVar16 = (ulonglong)(-uVar12 & uVar12);
        uVar3 = uVar16 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar8 = (iVar10 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar8) {
          iVar8 = iVar4;
        }
      }
    } while (iVar8 != iVar11 || lVar6 != lVar1);
  }
  lVar1 = param_1 + 0x90;
  local_90 = (longlong *)0x100000000;
  uStack_80 = 0xffffffff;
  local_78 = local_78 & 0xffffffff00000000;
  local_88 = lVar1;
  if (*(int *)(param_1 + 0xa8) == 0) {
    uVar16 = 1;
    uStack_80._0_4_ = 0xffffffff;
    iVar11 = 0;
    iVar10 = 0;
    uStack_80._4_4_ = 0;
    local_90._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_90);
    uVar16 = (ulonglong)local_90 >> 0x20;
    iVar11 = *(int *)(param_1 + 0xa8);
    iVar10 = (uint)local_78;
  }
  lVar6 = local_88;
  iVar9 = (int)local_90;
  uVar7 = (uint)uStack_80;
  iVar8 = uStack_80._4_4_;
  if (uStack_80._4_4_ != iVar11 || local_88 != lVar1) {
    do {
      (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x80) + 8 + (longlong)iVar8 * 0x20) +
                  0x90))();
      uVar7 = ~(uint)uVar16 & uVar7;
      lVar15 = *(longlong *)(lVar6 + 0x10);
      if (*(longlong *)(lVar6 + 0x10) == 0) {
        lVar15 = lVar6;
      }
      iVar4 = *(int *)(lVar6 + 0x18);
      lVar13 = (longlong)iVar9;
      uVar12 = *(uint *)(lVar15 + lVar13 * 4) & uVar7;
      if (uVar12 == 0) {
        iVar8 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar8 = iVar4 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar5 = iVar8;
        if (iVar8 < iVar9) {
          iVar5 = iVar9;
        }
        if (iVar9 < iVar8) {
          lVar14 = 0;
          do {
            uVar12 = *(uint *)(lVar15 + lVar13 * 4 + 4 + lVar14 * 4);
            if (uVar12 != 0) {
              iVar9 = iVar9 + (int)lVar14 + 1;
              uVar7 = 0xffffffff;
              goto LAB_141282d9d;
            }
            iVar10 = iVar10 + 0x20;
            lVar14 = lVar14 + 1;
          } while (iVar5 - lVar13 != lVar14);
          uVar7 = 0xffffffff;
          iVar9 = iVar5;
        }
        iVar9 = iVar9 + 1;
        iVar8 = iVar4;
      }
      else {
LAB_141282d9d:
        uVar16 = (ulonglong)(-uVar12 & uVar12);
        uVar3 = uVar16 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar8 = (iVar10 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar8) {
          iVar8 = iVar4;
        }
      }
    } while (iVar8 != iVar11 || lVar6 != lVar1);
  }
  plVar2 = (longlong *)(param_1 + 0xd0);
  lVar1 = param_1 + 0xe0;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  lStack_60 = lVar1;
  if (*(int *)(param_1 + 0xf8) == 0) {
    iVar11 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar11 = *(int *)(param_1 + 0xf8);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78._0_4_ = local_58;
  local_78._4_4_ = iStack_54;
  local_88._0_4_ = (undefined4)local_68;
  local_88._4_4_ = local_68._4_4_;
  uStack_80 = lStack_60;
  local_90 = plVar2;
  if ((iStack_54 != iVar11) || (lStack_60 != lVar1)) {
    do {
      (**(code **)(**(longlong **)(*local_90 + 8 + (longlong)local_78._4_4_ * 0x20) + 0x90))();
      local_78._0_4_ = (uint)local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar2 || (uStack_80 != lVar1 || local_78._4_4_ != iVar11));
  }
  *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_1 + 0x188);
  *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_1 + 0x198);
  *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_1 + 0x1a8);
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined4 *)(param_1 + 0x240) = 0;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141282fa6 FUN_141282fa6 body=157 status=ok
// SIG undefined FUN_141282fa6(void)

void FUN_141282fa6(longlong *param_1)

{
  int iVar1;
  void *_Src;
  
  *(undefined2 *)((longlong)param_1 + 0x8c) = *(undefined2 *)((longlong)param_1 + 0x11c);
  *(int *)(param_1 + 0x11) = (int)param_1[0x23];
  iVar1 = (int)param_1[0x25];
  _Src = (void *)param_1[0x24];
  *(int *)(param_1 + 0x13) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x9c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  }
  else {
    FUN_140501c24(param_1 + 0x12,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)param_1[0x12],_Src,(longlong)iVar1 * 0x1c);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000141283034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x98))(param_1,1);
  return;
}



// FUNCTION 141283044 FUN_141283044 body=94 status=ok
// SIG undefined FUN_141283044(void)

void FUN_141283044(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = param_1 + 0x57;
  lVar1 = 4;
  do {
    *(undefined2 *)((longlong)plVar2 + -0x214) = *(undefined2 *)((longlong)plVar2 + -4);
    *(int *)(plVar2 + -0x43) = (int)plVar2[-1];
    FUN_14093c00e(plVar2 + -0x42,plVar2);
    plVar2 = plVar2 + 0x10;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
                    /* WARNING: Could not recover jumptable at 0x00014128309f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x98))(param_1,1);
  return;
}



// FUNCTION 1412830a2 FUN_1412830a2 body=157 status=ok
// SIG undefined FUN_1412830a2(void)

void FUN_1412830a2(longlong *param_1)

{
  int iVar1;
  void *_Src;
  
  *(undefined2 *)((longlong)param_1 + 0xcc) = *(undefined2 *)((longlong)param_1 + 0x15c);
  *(int *)(param_1 + 0x19) = (int)param_1[0x2b];
  iVar1 = (int)param_1[0x2d];
  _Src = (void *)param_1[0x2c];
  *(int *)(param_1 + 0x1b) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xdc) == 0) {
    *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  }
  else {
    FUN_140501c24(param_1 + 0x1a,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)param_1[0x1a],_Src,(longlong)iVar1 * 0x1c);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014128310f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x98))(param_1,1);
  return;
}



// FUNCTION 141283140 FUN_141283140 body=94 status=ok
// SIG undefined FUN_141283140(void)

void FUN_141283140(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = param_1 + 0x5c;
  lVar1 = 4;
  do {
    *(undefined2 *)((longlong)plVar2 + -0x214) = *(undefined2 *)((longlong)plVar2 + -4);
    *(int *)(plVar2 + -0x43) = (int)plVar2[-1];
    FUN_14093c00e(plVar2 + -0x42,plVar2);
    plVar2 = plVar2 + 0x10;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
                    /* WARNING: Could not recover jumptable at 0x00014128319b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x98))(param_1,1);
  return;
}



// FUNCTION 14128319e FUN_14128319e body=80 status=ok
// SIG undefined FUN_14128319e(void)

void FUN_14128319e(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(longlong **)(param_1 + 0x448) != (longlong *)0x0) {
    local_18 = *param_3;
    uStack_14 = param_3[1];
    uStack_10 = param_3[2];
    uStack_c = param_3[3];
    (**(code **)(**(longlong **)(param_1 + 0x448) + 0x780))();
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412831f0 FUN_1412831f0 body=1086 status=ok
// SIG undefined FUN_1412831f0(void)

void FUN_1412831f0(longlong *param_1,longlong param_2,float *param_3)

{
  longlong *plVar1;
  float fVar2;
  longlong *plVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined4 local_f0;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined4 local_d8;
  undefined1 local_d4;
  undefined8 local_d0;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined8 *local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  byte local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_2 == 0) {
    param_2 = param_1[0x72];
  }
  plVar3 = param_1 + 0x86;
  FUN_14024f1da(plVar3);
  plVar1 = param_1 + 0x1d0;
  if ((param_1[0x1d0] != 0) &&
     (FUN_14024f1da(plVar1,param_1[0x72]), param_1[0x1d0] != 0 && param_1[0x1d0] == param_2))
  goto LAB_14128330e;
  lVar8 = FUN_1447210f0(param_1);
  if (lVar8 != 0) {
    if (*(longlong *)(lVar8 + 0x1f0) == 0) {
      plVar10 = (longlong *)(lVar8 + 0x458);
    }
    else {
      plVar10 = (longlong *)(*(longlong *)(lVar8 + 0x1f0) + 0xf0);
    }
    lVar8 = param_1[0x5d0];
    if (lVar8 != 0) {
      lVar12 = *plVar10;
      uVar13 = (uint)lVar8;
      if ((int)(uVar13 & 0xffffff) < *(int *)(lVar12 + 0x10)) {
        lVar14 = lVar12 + 0x18;
        if (*(longlong *)(lVar12 + 0x28) != 0) {
          lVar14 = *(longlong *)(lVar12 + 0x28);
        }
        if ((*(uint *)(lVar14 + (ulonglong)((uVar13 & 0xffffff) >> 5) * 4) >> (uVar13 & 0x1f) & 1)
            != 0) {
          lVar12 = *(longlong *)(lVar12 + 8);
          lVar14 = (ulonglong)(uVar13 & 0xffffff) * 0x70;
          if (((lVar12 + lVar14 != 0) && (*(longlong *)(lVar12 + 0x60 + lVar14) == lVar8)) &&
             (*(char *)(lVar12 + 1 + lVar14) != '\x04')) {
            FUN_1405a424c();
          }
        }
      }
    }
    param_1[0x5d0] = 0;
  }
  lVar8 = *plVar3;
  if (lVar8 == param_2) {
    if (*plVar1 != 0) {
      if ((*(byte *)(param_1 + 0x31c) & 1) != 0) goto LAB_1412833ed;
      plVar3 = (longlong *)param_1[0x72];
      if ((((*(byte *)((longlong)plVar3 + 0x65) & 2) == 0) &&
          ((*(uint *)(plVar3 + 1) >> 0x1e & 1) == 0)) &&
         ((((*(byte *)(plVar3 + 0x84) & 2) == 0 ||
           (cVar6 = (**(code **)(*plVar3 + 0x6c8))(), cVar6 == '\0')) &&
          (iVar7 = FUN_14487fd02(param_1), iVar7 != 3)))) {
        local_e8 = *param_3;
        fStack_e4 = param_3[1];
        fStack_e0 = param_3[2];
        fStack_dc = param_3[3];
        FUN_147c9185c(param_1[0x72],param_2);
      }
    }
    *plVar1 = 0;
  }
  else {
LAB_1412833ed:
    if (0.0 < *param_3) {
      if (*plVar1 == 0) {
        if (DAT_14c950c29 == '\x01') {
          if (lVar8 == 0) {
            lVar8 = 0;
          }
          else {
            FUN_1456cec3c();
            lVar8 = *plVar3;
          }
        }
        *plVar1 = lVar8;
      }
      uVar9 = (**(code **)(*param_1 + 0x678))(param_1);
      FUN_1447ff17a(param_1 + 0x88,uVar9);
      *(float *)(param_1 + 0x31a) = *param_3;
      local_c8 = *param_3;
      fStack_c4 = param_3[1];
      fStack_c0 = param_3[2];
      fStack_bc = param_3[3];
      (**(code **)(*param_1 + 0x698))(param_1,param_2,plVar1);
      FUN_14024f1da(plVar1,param_1[0x72]);
      if ((((*(byte *)((longlong)param_1 + 0x2e59) & 1) != 0) &&
          (iVar7 = FUN_14487fd02(param_1), iVar7 != 3)) &&
         (lVar8 = FUN_1447210f0(param_1), lVar8 != 0)) {
        if (*(longlong *)(lVar8 + 0x1f0) == 0) {
          puVar11 = (undefined8 *)(lVar8 + 0x458);
        }
        else {
          puVar11 = (undefined8 *)(*(longlong *)(lVar8 + 0x1f0) + 0xf0);
        }
        uVar9 = *puVar11;
        fVar2 = *param_3;
        local_b8 = (undefined8 *)0x0;
        local_b0 = 0;
        FUN_1446efa72(&local_b8,0,3,0x10);
        puVar11 = local_b8;
        local_b0 = 3;
        *local_b8 = &PTR_LAB_14a1c8830;
        LOCK();
        UNLOCK();
        lVar12 = DAT_14c758608 + 1;
        lVar8 = DAT_14c758608 + 1;
        if (lVar12 == 0) {
          LOCK();
          UNLOCK();
          lVar12 = DAT_14c758608 + 2;
          lVar8 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar8;
        local_b8[2] = lVar12;
        *local_b8 = &PTR_FUN_14aa4d440;
        local_b8[3] = 0;
        FUN_14485c47a(local_b8 + 3,param_1);
        puVar11[4] = FUN_14611ebb6;
        local_a8 = 0;
        local_a0 = 0;
        FUN_14487d8d8(&local_a8,&local_b8);
        local_68 = 1;
        local_f0 = 0xbf800000;
        local_f8 = 0;
        FUN_1406f3fee(uVar9,param_1 + 0x5d0,&local_a8,fVar2);
        (*(code *)(&PTR_LAB_14a1c87a0)[local_68])(&local_a8);
        FUN_1449db362(&local_b8);
      }
    }
    else {
      local_d8 = 0;
      local_d4 = 1;
      local_d0 = 0x40000000;
      (**(code **)(*param_1 + 0x698))(param_1,param_2,plVar3);
      FUN_14024f1da(plVar3,param_1[0x72]);
      param_1[0x1d0] = 0;
    }
  }
  fVar2 = param_3[1];
  fVar4 = param_3[2];
  fVar5 = param_3[3];
  *(float *)((longlong)param_1 + 0x18d4) = *param_3;
  *(float *)(param_1 + 0x31b) = fVar2;
  *(float *)((longlong)param_1 + 0x18dc) = fVar4;
  *(float *)(param_1 + 0x31c) = fVar5;
LAB_14128330e:
  if ((local_50 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141283630 FUN_141283630 body=154 status=ok
// SIG undefined FUN_141283630(void)

longlong FUN_141283630(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  void *_Dst;
  void *_Src;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar2 = *(int *)(param_2 + 0x48);
  plVar1 = (longlong *)(param_1 + 0x40);
  if ((ulonglong)(longlong)iVar2 < 2) {
    if (*plVar1 != 0) {
      FUN_1446efa72(plVar1,0,0,4);
    }
    if (iVar2 == 0) goto LAB_14128365c;
  }
  else {
    FUN_1446efa72(plVar1,0,iVar2,4);
  }
  _Dst = (void *)(param_1 + 0x38);
  if ((void *)*plVar1 != (void *)0x0) {
    _Dst = (void *)*plVar1;
  }
  _Src = (void *)(param_2 + 0x38);
  if (*(void **)(param_2 + 0x40) != (void *)0x0) {
    _Src = *(void **)(param_2 + 0x40);
  }
  memcpy(_Dst,_Src,(longlong)iVar2 << 2);
LAB_14128365c:
  *(int *)(param_1 + 0x48) = iVar2;
  FUN_1412836ca(param_1,param_2);
  return param_1;
}



// FUNCTION 1412836ca FUN_1412836ca body=370 status=ok
// SIG undefined FUN_1412836ca(void)

longlong * FUN_1412836ca(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *_Dst;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1401958ec(param_1,(ulonglong)uVar1);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
      FUN_1447711aa(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar5 = (int)param_2[5] + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar5) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar7 = 0x80;
      if (0x80 < (int)uVar5) {
        uVar7 = uVar5;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar7;
      FUN_1446efbd8(param_1 + 2,0);
    }
    iVar2 = (int)param_2[5];
    *(int *)(param_1 + 5) = iVar2;
    if (iVar2 != 0) {
      plVar6 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar6 = param_2 + 2;
      }
      _Dst = param_1 + 2;
      if ((longlong *)param_1[4] != (longlong *)0x0) {
        _Dst = (longlong *)param_1[4];
      }
      memcpy(_Dst,plVar6,(ulonglong)(iVar2 + 0x1fU >> 3 & 0xfffffffc));
    }
    if (0 < (int)uVar1) {
      lVar4 = *param_1;
      lVar3 = *param_2;
      lVar9 = 0;
      uVar8 = 0;
      do {
        plVar6 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar6 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar6 + (uVar8 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar8 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar4 + lVar9) = *(undefined4 *)(lVar3 + lVar9);
          *(undefined4 *)(lVar4 + 4 + lVar9) = *(undefined4 *)(lVar3 + 4 + lVar9);
        }
        else {
          *(undefined8 *)(lVar4 + lVar9) = *(undefined8 *)(lVar3 + lVar9);
          FUN_141121e90(lVar4 + 8 + lVar9,lVar3 + 8 + lVar9);
          *(undefined8 *)(lVar4 + 0x18 + lVar9) = *(undefined8 *)(lVar3 + 0x18 + lVar9);
        }
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 0x20;
      } while (uVar1 != uVar8);
    }
  }
  return param_1;
}



// FUNCTION 14128383c FUN_14128383c body=313 status=ok
// SIG undefined FUN_14128383c(void)

undefined8 FUN_14128383c(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14128396f;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14128396f;
    }
    FUN_140192332(param_1 + 0x18,&local_48,0);
  }
  else {
LAB_14128396f:
    local_48 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_141283913;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3);
      uVar6 = 1;
      goto LAB_141283913;
    }
  }
  uVar6 = 0;
LAB_141283913:
  if ((local_48 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_48);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141283ac6 FUN_141283ac6 body=8 status=ok
// SIG undefined FUN_141283ac6(void)

undefined8 * FUN_141283ac6(void)

{
  return &DAT_14cb82358;
}



// FUNCTION 141283ace FUN_141283ace body=40 status=ok
// SIG undefined FUN_141283ace(void)

longlong FUN_141283ace(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x2c8);
  if (lVar1 == 0) {
    FUN_145876474();
    lVar1 = *(longlong *)(param_1 + 0x2c8);
  }
  return lVar1;
}



// FUNCTION 141283af6 FUN_141283af6 body=228 status=ok
// SIG undefined FUN_141283af6(void)

longlong FUN_141283af6(void)

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
  if (DAT_14cb5f270 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463cf886;
    local_38 = &LAB_1486b2105;
    local_40 = &LAB_1464e55ad;
    local_48 = L"GameUserSettings";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x260;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameUserSettings",&DAT_14cb5f270,FUN_1464e5586);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5f270;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141283bdc FUN_141283bdc body=116 status=ok
// SIG undefined FUN_141283bdc(void)

undefined8 * FUN_141283bdc(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b24bcd0;
  plVar3 = (longlong *)param_1[9];
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
  FUN_141283c50(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 141283c50 FUN_141283c50 body=167 status=ok
// SIG undefined FUN_141283c50(void)

void FUN_141283c50(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &PTR_FUN_14b24bb60;
    plVar3 = (longlong *)param_1[0x1f];
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
    plVar3 = (longlong *)param_1[0x1c];
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
    *param_1 = &PTR_FUN_14b23dd30;
    if (param_1[1] != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 0x21;
  }
  return;
}



// FUNCTION 141283cf8 FUN_141283cf8 body=1674 status=ok
// SIG undefined FUN_141283cf8(void)

void FUN_141283cf8(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined2 *puVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  bool bVar14;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  uint local_b0;
  uint uStack_ac;
  undefined8 uStack_a8;
  void *local_a0;
  int local_98;
  longlong local_90 [2];
  undefined2 *local_80;
  longlong lStack_78;
  longlong local_70;
  undefined2 *local_68;
  longlong lStack_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  cVar2 = (**(code **)(*param_1 + 0x28))();
  if (cVar2 == '\0') goto LAB_1412841ab;
  uStack_ac = 0;
  if (param_3 == 0) {
    local_b0 = 0;
    uVar3 = 0;
  }
  else {
    local_b0 = *(uint *)(param_3 + 0xc);
    if ((int)local_b0 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((local_b0 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_b0 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    uVar3 = *(uint *)(lVar12 + 0x10);
    if (*(uint *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar13 = DAT_14c964868 + 1;
      UNLOCK();
      uVar11 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar13;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar11);
      }
      LOCK();
      uVar3 = *(uint *)(lVar12 + 0x10);
      bVar14 = uVar3 == 0;
      if (bVar14) {
        *(uint *)(lVar12 + 0x10) = uVar11;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar14) {
        uVar3 = uVar11;
      }
    }
  }
  plVar4 = param_1 + 0x10;
  plVar6 = (longlong *)param_1[0x20];
  if ((longlong *)param_1[0x20] == (longlong *)0x0) {
    plVar6 = plVar4;
  }
  iVar13 = 0;
  uStack_ac = uVar3;
  uStack_a8 = param_4;
  if ((longlong)(int)param_1[0x21] != 0) {
    lVar12 = (longlong)(int)param_1[0x21] << 4;
    do {
      if ((plVar6[1] == uStack_a8) && (cVar2 = FUN_14038330a(plVar6,&local_b0), cVar2 != '\0'))
      goto LAB_1412841ab;
      plVar6 = plVar6 + 2;
      lVar12 = lVar12 + -0x10;
    } while (lVar12 != 0);
    iVar13 = (int)param_1[0x21];
  }
  *(uint *)(param_1 + 0x21) = iVar13 + 1U;
  if (*(uint *)((longlong)param_1 + 0x10c) < iVar13 + 1U) {
    FUN_14887ede8(plVar4,iVar13);
  }
  if ((longlong *)param_1[0x20] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[0x20];
  }
  puVar1 = (uint *)(plVar4 + (longlong)iVar13 * 2);
  *puVar1 = local_b0;
  puVar1[1] = uStack_ac;
  puVar1[2] = (uint)uStack_a8;
  puVar1[3] = uStack_a8._4_4_;
  plVar4 = (longlong *)FUN_14017698e(param_2);
  uVar5 = DAT_14cb7ece8;
  if (plVar4 == (longlong *)0x0) {
    if ((char)param_2[0x2f] != '\x03') goto LAB_1412841ab;
    local_70 = param_4;
    FUN_140056680(&local_68,L"Dialog");
    if (param_3 != 0) {
      local_80 = *(undefined2 **)(param_3 + 0x18);
      FUN_1400021e4(&local_80,local_90);
      puVar10 = local_68;
      lVar12 = (longlong)(int)lStack_60;
      local_a0 = (void *)0x0;
      local_98 = (int)lStack_60;
      FUN_1446dd670(&local_a0,(uint)(lVar12 == 0) + (int)lStack_60 + 1,0);
      if (lVar12 != 0) {
        memcpy(local_a0,puVar10,lVar12 * 2);
      }
      FUN_1400020e8(&local_a0,&DAT_149e01f60,1);
      FUN_1401c7f3e(&local_80,&local_a0,local_90);
      if (local_68 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      local_68 = local_80;
      lStack_60 = lStack_78;
      local_80 = (undefined2 *)0x0;
      lStack_78 = 0;
      if (local_a0 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_90[0] != 0) {
        FUN_1400020a8();
      }
    }
    if (param_4 != 0) {
      FUN_1400021e4(&local_70,local_90);
      FUN_1449b8608(&local_a0,&local_68,&DAT_149e01f60);
      FUN_1401c7f3e(&local_80,&local_a0,local_90);
      if (local_68 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      local_68 = local_80;
      lStack_60 = lStack_78;
      local_80 = (undefined2 *)0x0;
      lStack_78 = 0;
      if (local_a0 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_90[0] != 0) {
        FUN_1400020a8();
      }
    }
    FUN_14029eeae(param_1[9] + 0x10,local_90);
    puVar10 = local_68;
    lVar12 = (longlong)(int)lStack_60;
    local_a0 = (void *)0x0;
    local_98 = (int)lStack_60;
    FUN_1446dd670(&local_a0,(uint)(lVar12 == 0) + (int)lStack_60 + 1,0);
    if (lVar12 != 0) {
      memcpy(local_a0,puVar10,lVar12 * 2);
    }
    FUN_1400020e8(&local_a0,&DAT_149e01f60,1);
    FUN_1401c7f3e(&local_80,&local_a0,local_90);
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_68 = local_80;
    lStack_60 = lStack_78;
    local_80 = (undefined2 *)0x0;
    lStack_78 = 0;
    if (local_a0 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_90[0] != 0) {
      FUN_1400020a8();
    }
    puVar10 = local_68;
    if ((int)lStack_60 == 0) {
      puVar10 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_b8,puVar10,1);
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_68 = (undefined2 *)0x0;
    lStack_60 = 0;
    local_58 = 0;
    lVar12 = FUN_141284384(param_2,&local_68,local_b8,uVar5);
    if (lVar12 == 0) goto LAB_1412841ab;
    plVar4 = (longlong *)(lVar12 + 0x110);
  }
  local_68 = (undefined2 *)0x0;
  lStack_60 = 0;
  local_58 = 0;
  if (*(char *)(param_1[9] + 0x38) == '\x02') {
    plVar6 = (longlong *)FUN_14017698e(param_2[0x2d]);
    if ((plVar6 != (longlong *)0x0) && (lVar12 = (**(code **)(*plVar6 + 0x10))(plVar6), lVar12 != 0)
       ) {
      puVar10 = *(undefined2 **)(lVar12 + 0x148);
      uVar5 = FUN_14477b664(*(undefined8 *)(lVar12 + 0x150));
      uVar5 = FUN_14477b664(uVar5);
      lVar12 = *(longlong *)(lVar12 + 0x158);
      local_68 = puVar10;
      uVar5 = FUN_14477b664(uVar5);
      lStack_60 = FUN_14477b664(uVar5);
      local_58 = lVar12;
      goto LAB_141284161;
    }
LAB_141284166:
    uVar5 = FUN_14043db3a();
    lStack_60 = FUN_14477b664(uVar5);
  }
  else {
    if (*(char *)(param_1[9] + 0x38) == '\x01') {
      if (param_2 != (longlong *)0x0) {
        uVar5 = FUN_140840456();
        plVar6 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar5);
        if (plVar6 != (longlong *)0x0) {
          uVar5 = FUN_140840456();
          plVar7 = (longlong *)FUN_144718840(plVar6,uVar5);
          if (plVar7 != (longlong *)0x0 && plVar6 != plVar7) {
            puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x10))(plVar7);
            FUN_1458765e2(*puVar8,&local_68);
            goto LAB_141284161;
          }
        }
      }
      goto LAB_141284166;
    }
    local_68 = (undefined2 *)param_1[0xd];
    uVar5 = FUN_14477b664(param_1[0xe]);
    lStack_60 = FUN_14477b664(uVar5);
    local_58 = param_1[0xf];
LAB_141284161:
    if (lStack_60 == 0) goto LAB_141284166;
  }
  if (local_58 == 0) {
    if ((((lStack_60 == 0) || (local_68 == (undefined2 *)0x0)) ||
        (plVar6 = *(longlong **)(lStack_60 + 0xb8), plVar6 == (longlong *)0x0)) ||
       (cVar2 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar2 == '\0')) goto LAB_1412841ab;
    uVar5 = (**(code **)(*plVar6 + 0x110))(plVar6);
    local_58 = FUN_144aff482(uVar5,&local_68);
    if (local_58 == 0) goto LAB_1412841ab;
  }
  lVar12 = lStack_60;
  if (lStack_60 == 0) {
    lVar12 = FUN_14043db3a();
  }
  lVar9 = FUN_14043db3a();
  if (lVar12 == lVar9) {
    (**(code **)(*plVar4 + 0x30))(plVar4,&local_68);
  }
LAB_1412841ab:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141284384 FUN_141284384 body=305 status=ok
// SIG undefined FUN_141284384(void)

longlong FUN_141284384(longlong param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_3 == 0) {
    lVar3 = FUN_1412845b7(param_1);
  }
  else {
    lVar3 = FUN_1412844b5(param_1,param_3,0,0,0,0);
  }
  if ((param_1 != 0) && (lVar3 != 0)) {
    *(byte *)(lVar3 + 0x9e) = *(byte *)(lVar3 + 0x9e) | 8;
    iVar2 = FUN_14487fd02(param_1);
    if ((iVar2 != 3) &&
       (((*(byte *)(param_1 + 99) & 8) == 0 && ((*(byte *)(param_1 + 100) & 2) != 0)))) {
      FUN_140c7ce82(param_1,1);
    }
    lVar1 = *param_2;
    if (*(longlong *)(lVar3 + 0x130) != lVar1) {
      *(undefined8 *)(lVar3 + 0x140) = 0;
    }
    *(longlong *)(lVar3 + 0x130) = lVar1;
    if (*(longlong *)(lVar3 + 0x138) != param_2[1]) {
      *(undefined8 *)(lVar3 + 0x140) = 0;
    }
    uVar4 = FUN_14477b664();
    uVar4 = FUN_14477b664(uVar4);
    *(undefined8 *)(lVar3 + 0x138) = uVar4;
    *(longlong *)(lVar3 + 0x140) = param_2[2];
    if ((((*(byte *)(lVar3 + 0x9c) & 1) == 0) && (*(char *)(param_1 + 100) < '\0')) &&
       ((*(uint *)(param_1 + 8) & 0x20) == 0)) {
      FUN_140b506a4(lVar3);
    }
    if (param_4 != 0) {
      iVar2 = *(int *)(lVar3 + 0x78);
      *(uint *)(lVar3 + 0x78) = iVar2 + 1U;
      if (*(uint *)(lVar3 + 0x7c) < iVar2 + 1U) {
        FUN_1446f84a2((longlong *)(lVar3 + 0x70),iVar2);
      }
      *(longlong *)(*(longlong *)(lVar3 + 0x70) + (longlong)iVar2 * 8) = param_4;
    }
  }
  return lVar3;
}



// FUNCTION 1412844b5 FUN_1412844b5 body=257 status=ok
// SIG undefined FUN_1412844b5(void)

undefined8
FUN_1412844b5(undefined8 param_1,longlong param_2,uint param_3,undefined8 param_4,byte param_5,
             undefined8 param_6)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  ushort local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong lStack_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  local_d8 = FUN_140b4ce5a();
  local_88 = (longlong *)0x0;
  local_58 = 0;
  local_a0 = 0;
  lStack_98 = 0;
  uStack_c0 = (ulonglong)param_3;
  local_b8 = (ushort)param_5;
  local_a8 = param_6;
  local_d0 = param_1;
  local_c8 = param_2;
  local_b0 = param_4;
  uVar1 = FUN_1402710dd(&local_d8);
  if (lStack_98 != 0) {
    plVar2 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar2 = local_78;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412845b7 FUN_1412845b7 body=177 status=ok
// SIG undefined FUN_1412845b7(void)

undefined8 FUN_1412845b7(undefined8 param_1)

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
  local_b8 = FUN_140b4ce5a();
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



// FUNCTION 14128466a FUN_14128466a body=40 status=ok
// SIG undefined FUN_14128466a(void)

undefined8 FUN_14128466a(undefined8 param_1,int param_2)

{
  FUN_141284692();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141284692 FUN_141284692 body=608 status=ok
// SIG undefined FUN_141284692(void)

void FUN_141284692(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b91be40;
  param_1[0x72] = &PTR_FUN_14b91c4b0;
  param_1[0x73] = &PTR_FUN_14b91c4d0;
  param_1[0x74] = &PTR_FUN_14b91c500;
  param_1[0x75] = &PTR_FUN_14b91c510;
  param_1[0x76] = &PTR_FUN_14b91c580;
  param_1[0x77] = &PTR_FUN_14b91c5b0;
  param_1[0x78] = &PTR_FUN_14b91c5e0;
  param_1[0x7f] = &PTR_FUN_14b91c690;
  param_1[0x80] = &PTR_FUN_14b91c700;
  param_1[0x81] = &PTR_FUN_14b91c770;
  param_1[0x82] = &PTR_FUN_14b91c7a0;
  param_1[0x83] = &PTR_FUN_14b91c7e0;
  param_1[0x84] = &PTR_FUN_14b91c880;
  param_1[0x85] = &PTR_FUN_14b91c8a0;
  param_1[0x89] = &PTR_FUN_14b91c8c0;
  param_1[0x8a] = &PTR_FUN_14b91c980;
  param_1[0x8b] = &PTR_FUN_14b91ca00;
  param_1[0x8c] = &PTR_FUN_14b91ca50;
  param_1[0x8d] = &PTR_FUN_14b91ca90;
  param_1[0x8e] = &PTR_FUN_14b91cab0;
  param_1[0x8f] = &PTR_FUN_14b91cad0;
  param_1[0x90] = &PTR_FUN_14b91caf0;
  param_1[0x91] = &PTR_FUN_14b91cb10;
  param_1[0x92] = &PTR_FUN_14b91cb30;
  param_1[0x93] = &PTR_FUN_14b91cb50;
  param_1[0x94] = &PTR_FUN_14b91cb70;
  param_1[0x95] = &PTR_FUN_14b91cb90;
  param_1[0x96] = &PTR_FUN_14b91cbb0;
  param_1[0x34b] = &PTR_FUN_14b91cbd0;
  param_1[0x352] = &PTR_FUN_14b91cbe0;
  param_1[0x353] = &PTR_FUN_14b91cc20;
  param_1[0x354] = &PTR_FUN_14b91cc60;
  param_1[0x355] = &PTR_FUN_14b91ccb0;
  param_1[0x356] = &PTR_FUN_14b91cce0;
  param_1[0x359] = &PTR_FUN_14b91cd20;
  param_1[0x35a] = &PTR_FUN_14b91cd30;
  param_1[0x35b] = &PTR_FUN_14b91cd60;
  param_1[0x35c] = &PTR_FUN_14b91ce00;
  plVar3 = (longlong *)param_1[0x4c2];
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
  FUN_140639172(param_1);
  return;
}



// FUNCTION 1412848f2 FUN_1412848f2 body=550 status=ok
// SIG undefined FUN_1412848f2(void)

ulonglong FUN_1412848f2(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1406c9d00(param_1 + 0xb0,&local_38);
  if (local_30 == 0) {
    uVar6 = FUN_140927942();
    local_30 = FUN_14477b664(uVar6);
  }
  if (local_28 == (longlong *)0x0) {
    if ((((local_30 != 0) && (local_38 != 0)) &&
        (plVar5 = *(longlong **)(local_30 + 0xb8), plVar5 != (longlong *)0x0)) &&
       (cVar2 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar2 != '\0')) {
      uVar6 = (**(code **)(*plVar5 + 0x110))(plVar5);
      local_28 = (longlong *)FUN_144aff482(uVar6,&local_38);
      if (local_28 != (longlong *)0x0) goto LAB_14128493d;
    }
  }
  else {
LAB_14128493d:
    lVar4 = (**(code **)(*local_28 + 0x128))();
    if ((lVar4 != 0) && (cVar2 = FUN_1402611f4(lVar4), cVar2 != '\0')) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  plVar5 = &local_38;
  FUN_1406c9d00(param_1 + 0xb0,plVar5);
  if (local_30 == 0) {
    uVar6 = FUN_140927942();
    local_30 = FUN_14477b664(uVar6);
  }
  if (local_28 == (longlong *)0x0) {
    if (((local_30 != 0) && (local_38 != 0)) &&
       ((plVar1 = *(longlong **)(local_30 + 0xb8), plVar1 != (longlong *)0x0 &&
        (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 != '\0')))) {
      uVar6 = (**(code **)(*plVar1 + 0x110))(plVar1);
      plVar5 = &local_38;
      local_28 = (longlong *)FUN_144aff482(uVar6,plVar5);
      if (local_28 != (longlong *)0x0) goto LAB_141284986;
    }
  }
  else {
LAB_141284986:
    plVar1 = local_28;
    plVar5 = (longlong *)(**(code **)(*local_28 + 8))(local_28);
    lVar4 = FUN_1412133c2();
    if (((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= (int)plVar5[7])) &&
       (*(longlong *)(plVar5[6] + (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
      uVar7 = CONCAT71((int7)((ulonglong)plVar5 >> 8),1);
      if ((plVar1 + 0x198 != (longlong *)0x0) &&
         (cVar2 = FUN_141284b28(plVar1 + 0x198), cVar2 != '\0')) {
        uVar3 = FUN_1415c9d86(param_1 + 0x2600);
        uVar7 = (ulonglong)uVar3;
      }
      goto LAB_1412849da;
    }
  }
  uVar7 = CONCAT71((int7)((ulonglong)plVar5 >> 8),1);
LAB_1412849da:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 141284b28 FUN_141284b28 body=155 status=ok
// SIG undefined FUN_141284b28(void)

ulonglong FUN_141284b28(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  if ((*(char *)(param_1 + 8) != '\0') || (*(int *)(param_1 + 0x30) != 0)) goto LAB_141284b5d;
  lVar5 = *(longlong *)(param_1 + 0x18);
  if (lVar5 == 0) {
    uVar4 = FUN_145bc9f92();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x18) = lVar5;
  }
  if (*(longlong *)(param_1 + 0x20) != 0) goto LAB_141284b5d;
  plVar1 = (longlong *)(param_1 + 0x10);
  if ((*plVar1 == 0) || (lVar5 == 0)) {
    uVar6 = 0;
    goto LAB_141284b5d;
  }
  plVar2 = *(longlong **)(lVar5 + 0xb8);
  if (plVar2 == (longlong *)0x0) {
LAB_141284bbf:
    lVar5 = 0;
  }
  else {
    cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
    if (cVar3 == '\0') goto LAB_141284bbf;
    uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar5 = FUN_144aff482(uVar4,plVar1);
  }
  *(longlong *)(param_1 + 0x20) = lVar5;
  uVar6 = CONCAT71((int7)((ulonglong)plVar1 >> 8),lVar5 != 0);
LAB_141284b5d:
  return uVar6 & 0xffffffff;
}



// FUNCTION 141284bcc FUN_141284bcc body=636 status=ok
// SIG undefined FUN_141284bcc(void)

undefined8 * FUN_141284bcc(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 ****ppppuVar6;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  undefined8 ***local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14ac3d210;
  FUN_14044066a(param_1 + 7,0x14,1);
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0x1010101;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 1;
  *param_1 = &PTR_FUN_14ac47f90;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 2;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x99) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa1) = 0x1010001;
  *(undefined1 *)((longlong)param_1 + 0xa5) = 0;
  uVar2 = DAT_14c8464e8;
  param_1[0x15] = DAT_14c8464e0;
  param_1[0x16] = uVar2;
  param_1[0x17] = DAT_14c8464f0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc2) = 0;
  param_1[0x19] = 0;
  *(undefined2 *)(param_1 + 0x1d) = 0x18;
  uVar5 = DAT_14c846500._4_4_;
  uVar4 = (undefined4)DAT_14c846500;
  uVar3 = DAT_14c8464f8._4_4_;
  *(undefined4 *)(param_1 + 0x1a) = (undefined4)DAT_14c8464f8;
  *(undefined4 *)((longlong)param_1 + 0xd4) = uVar3;
  *(undefined4 *)(param_1 + 0x1b) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0xdc) = uVar5;
  param_1[0x1c] = DAT_14c846508;
  *(undefined1 *)(param_1 + 0x1e) = 5;
  *(char *)(param_1 + 0x1f) = ((DAT_14c9a8ab4 & 0x20) == 0) * '\x05';
  *(undefined2 *)(param_1 + 0x20) = 0x100;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  FUN_14044066a(param_1 + 0x24,3,0x14);
  *(undefined1 *)(param_1 + 0x2b) = 0;
  FUN_14044066a(param_1 + 0x2c,3,0x14);
  *(undefined1 *)(param_1 + 0x33) = 0;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0x1000100000000;
  *(undefined1 *)((longlong)param_1 + 0x1a4) = 0;
  param_1[0x35] = 0;
  *(undefined2 *)(param_1 + 0x39) = 4;
  *(undefined4 *)(param_1 + 0x36) = 5;
  *(undefined1 *)(param_1 + 0x3a) = 2;
  *(byte *)(param_1 + 0x3b) = (byte)~DAT_14c9a8754 >> 4 & 2;
  *(undefined2 *)(param_1 + 0x3c) = 1;
  *param_1 = &PTR_FUN_14ac47c30;
  FUN_140e2aeea(param_1 + 0x3d);
  FUN_140440628(local_78,&DAT_14cb23dbc,0);
  FUN_1403719a4(param_1 + 0x3d,local_78);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
  if (pcVar1 != (code *)0x0) {
    ppppuVar6 = (undefined8 ****)local_70[0];
    if (local_58 < 0x19) {
      ppppuVar6 = local_70;
    }
    (*pcVar1)(ppppuVar6);
  }
  if (0x18 < local_58) {
    FUN_1400020a8(local_70[0]);
  }
  *(undefined4 *)((longlong)param_1 + 0x19c) = 1;
  *(undefined1 *)((longlong)param_1 + 0x101) = 0;
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 141284e4a FUN_141284e4a body=241 status=ok
// SIG undefined FUN_141284e4a(void)

void FUN_141284e4a(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  uVar5 = uVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    uVar5 = *param_2;
  }
  local_38 = FUN_140eb4c46(uVar5);
  if ((local_38 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_38);
  }
  local_30 = uVar3;
  local_28 = plVar4;
  if (plVar4 == (longlong *)0x0) {
    FUN_141284f4e(param_1,&local_38);
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    FUN_141284f4e(param_1);
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141284f4e FUN_141284f4e body=276 status=ok
// SIG undefined FUN_141284f4e(void)

void FUN_141284f4e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  local_30 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (local_30 == 0) {
      local_30 = 0;
    }
    else {
      FUN_1456cec3c();
      local_30 = *param_2;
    }
  }
  plVar1 = plStack_20;
  local_28 = param_2[1];
  plVar4 = (longlong *)param_2[2];
  if (plVar4 == (longlong *)0x0) {
    plStack_20 = (longlong *)0x0;
    plVar4 = plStack_20;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_20 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        puVar5 = (undefined8 *)*plStack_20;
        plStack_20 = plVar4;
        (*(code *)*puVar5)(plVar1);
        LOCK();
        piVar3 = (int *)((longlong)plVar1 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        plVar4 = plStack_20;
        if (*piVar3 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
          plVar4 = plStack_20;
        }
      }
    }
  }
  plStack_20 = plVar4;
  uVar6 = FUN_14477b072(param_1,DAT_14cb67418);
  (**(code **)(*param_1 + 0x248))(param_1,uVar6,&local_30);
  plVar4 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141285064 FUN_141285064 body=150 status=ok
// SIG undefined FUN_141285064(void)

void FUN_141285064(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 local_48 [24];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(byte *)(param_1 + 0x20) & 4) == 0) {
    lVar1 = FUN_140ccfc10();
    FUN_140c84580(local_48,param_2 + 0x58,*(float *)(lVar1 + 0x50) * 0.017453292 * 0.5);
    local_58 = param_4;
    (**(code **)(*param_1 + 0x3b0))(param_1,param_2,param_3,local_48);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412850fc FUN_1412850fc body=1829 status=ok
// SIG undefined FUN_1412850fc(void)

void FUN_1412850fc(longlong *param_1,longlong param_2,longlong param_3,double *param_4,char *param_5
                  )

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  bool bVar17;
  float fVar18;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined8 *local_70;
  code *local_68;
  code *local_60;
  longlong local_58;
  undefined8 *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((((*param_4 == 0.0) && (!NAN(*param_4))) && (param_4[1] == 0.0)) &&
     (((!NAN(param_4[1]) && (param_4[2] == 0.0)) && (!NAN(param_4[2]))))) goto LAB_141285550;
  *(int *)(param_1 + 0xd7) = (int)param_1[0xd7] + 1;
  (**(code **)(*param_1 + 0x2c8))(param_1,&local_50,1);
  *(byte *)((longlong)local_50 + 0x1c2) = *(byte *)((longlong)local_50 + 0x1c2) & 0xfe;
  if ((local_50[1] != param_1[0x24]) || (*(int *)(local_50 + 2) != (int)param_1[0x25])) {
    local_50[1] = param_1[0x24];
    *(int *)(local_50 + 2) = (int)param_1[0x25];
    local_50[3] = 0;
  }
  local_50[6] = *(undefined8 *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  local_50[4] = *(undefined8 *)(param_2 + 0x10);
  local_50[5] = uVar5;
  dVar1 = param_4[2];
  dVar2 = param_4[1];
  dVar3 = *(double *)(param_2 + 0x20);
  dVar4 = *(double *)(param_2 + 0x18);
  local_50[10] = *param_4 * 1000.0 + *(double *)(param_2 + 0x10);
  local_50[0xb] = dVar2 * 1000.0 + dVar4;
  local_50[0xc] = dVar1 * 1000.0 + dVar3;
  if (param_3 == 0) {
LAB_141285733:
    *(undefined4 *)((longlong)local_50 + 0x6c) = 0;
    lVar15 = (longlong)local_50 + 0x6c;
    iVar6 = 0;
  }
  else {
    if (DAT_14caf64b8 == 0) {
      local_70 = &local_48;
      local_48 = FUN_141030f22;
      local_60 = FUN_14081d0ea;
      local_68 = FUN_142b4754c;
      local_78 = &LAB_147c45ce0;
      local_80 = &LAB_1463f1ff4;
      local_88 = &DAT_149e063b2;
      local_90 = 0x4000000000;
      local_98 = 0x10000004;
      local_a0 = 8;
      local_a8 = 0x428;
      FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8);
    }
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(DAT_14caf64b8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) != DAT_14caf64b8 + 0x30)) goto LAB_141285733;
    uVar12 = *(uint *)(param_3 + 0xc);
    *(uint *)((longlong)local_50 + 0x6c) = uVar12;
    if ((int)uVar12 < DAT_14c9647dc) {
      lVar13 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
    }
    else {
      lVar13 = 0;
    }
    lVar15 = (longlong)local_50 + 0x6c;
    iVar6 = *(int *)(lVar13 + 0x10);
    if (*(int *)(lVar13 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar10 = DAT_14c964868 + 1;
      bVar17 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar17) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).");
      }
      LOCK();
      iVar6 = *(int *)(lVar13 + 0x10);
      bVar17 = iVar6 == 0;
      if (bVar17) {
        *(int *)(lVar13 + 0x10) = iVar10;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar17) {
        iVar6 = iVar10;
      }
    }
  }
  *(int *)(lVar15 + 4) = iVar6;
  if (*(int *)(local_50 + 0xe) == 0) {
LAB_14128557c:
    bVar17 = false;
  }
  else {
    uVar12 = *(uint *)((longlong)local_50 + 0x6c);
    bVar17 = false;
    if ((-1 < (int)uVar12) && (bVar17 = false, (int)uVar12 < DAT_14c9647dc)) {
      lVar15 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
      if ((lVar15 == 0) || (*(int *)(lVar15 + 0x10) != *(int *)(local_50 + 0xe)))
      goto LAB_14128557c;
      bVar17 = (*(uint *)(lVar15 + 8) & 0x10200000) == 0;
    }
  }
  if ((param_3 == 0) || (bVar17)) {
    if (param_3 != 0) goto LAB_1412852fd;
    *(undefined8 *)((longlong)local_50 + 0x74) = 0;
    *(undefined4 *)(local_50 + 0x10) = 0;
    puVar16 = local_50 + 0x10;
    iVar6 = 0;
  }
  else {
    FUN_14485c47a((uint *)((longlong)local_50 + 0x6c),*(undefined8 *)(param_3 + 0x1b0));
LAB_1412852fd:
    puVar16 = local_50;
    uVar12 = *(uint *)(param_3 + 0xc);
    *(uint *)((longlong)local_50 + 0x74) = uVar12;
    if ((int)uVar12 < DAT_14c9647dc) {
      lVar15 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
    }
    else {
      lVar15 = 0;
    }
    iVar6 = *(int *)(lVar15 + 0x10);
    if (*(int *)(lVar15 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar10 = DAT_14c964868 + 1;
      bVar17 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar17) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).");
      }
      LOCK();
      iVar6 = *(int *)(lVar15 + 0x10);
      bVar17 = iVar6 == 0;
      if (bVar17) {
        *(int *)(lVar15 + 0x10) = iVar10;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar17) {
        iVar6 = iVar10;
      }
    }
    *(int *)(puVar16 + 0xf) = iVar6;
    uVar12 = *(uint *)(param_3 + 0xc);
    *(uint *)(local_50 + 0x10) = uVar12;
    if ((int)uVar12 < DAT_14c9647dc) {
      lVar15 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
    }
    else {
      lVar15 = 0;
    }
    puVar16 = local_50 + 0x10;
    iVar6 = *(int *)(lVar15 + 0x10);
    if (*(int *)(lVar15 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar10 = DAT_14c964868 + 1;
      bVar17 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar17) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).");
      }
      LOCK();
      iVar6 = *(int *)(lVar15 + 0x10);
      bVar17 = iVar6 == 0;
      if (bVar17) {
        *(int *)(lVar15 + 0x10) = iVar10;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar17) {
        iVar6 = iVar10;
      }
    }
  }
  *(int *)((longlong)puVar16 + 4) = iVar6;
  *(float *)((longlong)local_50 + 0x7c) = *(float *)(param_1 + 0x11) * *(float *)(param_5 + 4);
  *(byte *)(local_50 + 0xd) = *(byte *)(local_50 + 0xd) | 8;
  if (*(longlong *)(param_5 + 0x18) != 0) {
    FUN_144a79b68(&local_58);
    if (local_50[0x11] != local_58) {
      local_50[0x13] = 0;
    }
    local_50[0x11] = local_58;
  }
  if ((*(longlong *)(param_5 + 0x28) != 0) && ((longlong)*(int *)(param_5 + 0x38) != 0)) {
    lVar15 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_5 + 0x30) + lVar15) != 0) {
        FUN_1405dc634(local_50 + 0x32,param_5 + 0x20);
        break;
      }
      lVar15 = lVar15 + 8;
    } while ((longlong)*(int *)(param_5 + 0x38) * 8 != lVar15);
  }
  lVar15 = FUN_140ccfc10();
  *(undefined1 *)((longlong)local_50 + 0x179) = 1;
  if ((char)param_1[0x3a] == '\x01') {
    fVar18 = *(float *)((longlong)param_1 + 0x1d4);
  }
  else {
    fVar18 = 1.0;
  }
  *(float *)((longlong)local_50 + 0x17c) = fVar18;
  *(float *)((longlong)local_50 + 0x17c) =
       fVar18 * *(float *)(lVar15 + 0x48 + (ulonglong)(*param_5 == '\x03') * 4);
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    lVar15 = param_1[4];
  }
  else {
    lVar15 = 0;
  }
  FUN_140842d26(lVar15,&local_48);
  if (((((local_48._4_4_ != 0) && (-1 < (int)(uint)local_48)) &&
       ((int)(uint)local_48 < DAT_14c9647dc)) &&
      ((puVar9 = (ulonglong *)
                 ((ulonglong)(((uint)local_48 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_48 >> 0x10) * 8)),
       puVar9 != (ulonglong *)0x0 && ((int)puVar9[2] == local_48._4_4_)))) &&
     (((puVar9[1] & 0x10200000) == 0 && (*puVar9 != 0)))) {
    uVar14 = 0;
    uVar11 = *puVar9;
    if ((puVar9[1] & 0x10200000) != 0) {
      uVar11 = uVar14;
    }
    lVar15 = param_1[0xd7];
    lVar13 = FUN_14485cccc(param_2 + 0xb8);
    uVar8 = 0;
    if (lVar13 != 0) {
      uVar12 = *(uint *)(lVar13 + 0xc);
      uVar14 = (ulonglong)uVar12;
      if ((int)uVar12 < DAT_14c9647dc) {
        lVar13 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
      }
      else {
        lVar13 = 0;
      }
      uVar8 = (ulonglong)*(uint *)(lVar13 + 0x10);
      if (*(uint *)(lVar13 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        uVar12 = DAT_14c964868 + 1;
        bVar17 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar17) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar12);
        }
        LOCK();
        uVar7 = *(uint *)(lVar13 + 0x10);
        bVar17 = uVar7 == 0;
        if (bVar17) {
          *(uint *)(lVar13 + 0x10) = uVar12;
          uVar7 = 0;
        }
        UNLOCK();
        if (bVar17) {
          uVar7 = uVar12;
        }
        uVar8 = (ulonglong)uVar7;
      }
    }
    *(ulonglong *)(uVar11 + 0x360) = uVar14 | uVar8 << 0x20;
    *(int *)(uVar11 + 0x6b8) = (int)lVar15;
  }
  if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)(local_50,1);
  }
LAB_141285550:
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141285822 FUN_141285822 body=78 status=ok
// SIG undefined FUN_141285822(void)

undefined8 * FUN_141285822(longlong *param_1,undefined8 *param_2,char param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x1c8,0x10);
  FUN_140e35e6c(uVar1);
  *param_2 = uVar1;
  if (param_3 != '\0') {
    (**(code **)(*param_1 + 0x2d0))(param_1,uVar1);
  }
  return param_2;
}



// FUNCTION 141285870 FUN_141285870 body=20 status=ok
// SIG undefined FUN_141285870(void)

undefined8 FUN_141285870(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x1e0) + 0x30);
  }
  return 0;
}



// FUNCTION 141285884 FUN_141285884 body=375 status=ok
// SIG undefined FUN_141285884(void)

undefined8 * FUN_141285884(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if ((((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))(), cVar4 != '\0')) {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar1 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar7 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar7 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar7);
              FUN_14005b248(param_1);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar7 < iVar5);
        }
        iVar7 = 2;
        if (2 < iVar5 * 2) {
          iVar7 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar7;
        if ((iVar7 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_38);
      uVar6 = local_38;
    }
    *param_2 = uVar6;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(param_1,iVar1);
    }
    lVar3 = *param_1;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar3 + lVar8) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar8) = 0;
    *(longlong *)(lVar3 + lVar8) = *param_3;
    *param_3 = 0;
    *(int *)(lVar3 + 8 + lVar8) = (int)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 141285a08 FUN_141285a08 body=486 status=ok
// SIG undefined FUN_141285a08(void)

void FUN_141285a08(longlong param_1,longlong *param_2)

{
  bool bVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  ulonglong *local_68;
  ulonglong local_60;
  ulonglong *local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78[0] = 0;
  local_78[1] = 0;
  iVar10 = 0;
  plVar8 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  local_60 = 0;
  local_68 = (ulonglong *)0x0;
  (**(code **)(*plVar8 + 0x1c8))(plVar8,&local_68,&local_60);
  uVar3 = local_60;
  puVar2 = local_68;
  local_4c = (uint)local_60;
  local_58 = local_68;
  if (0 < (int)(uint)local_60) {
    iVar10 = 0;
    uVar9 = 0x7fffffff;
    uVar6 = (uint)local_60;
    do {
      if (uVar9 == 0) {
        iVar10 = -1;
        break;
      }
      iVar4 = iVar10;
      if (((((ulonglong)local_58 & 7) == 0) && (local_4c = uVar6, 7 < uVar6)) &&
         (uVar7 = uVar9, 7 < (int)uVar9)) {
        while (uVar9 = uVar7, iVar4 = iVar10, local_4c = uVar6,
              (*local_58 & 0x8080808080808080) == 0) {
          local_58 = local_58 + 1;
          iVar10 = iVar10 + 8;
          local_4c = uVar6 - 8;
          uVar9 = uVar7 - 8;
          bVar1 = (int)uVar6 < 0x10;
          uVar6 = local_4c;
          iVar4 = iVar10;
          if ((bVar1) || (bVar1 = uVar7 < 0x10, uVar7 = uVar9, bVar1)) break;
        }
      }
LAB_141285af3:
      do {
        iVar10 = iVar4;
        if (((int)uVar6 < 1) || ((int)uVar9 < 1)) break;
        uVar7 = FUN_14003e942(&local_58,&local_4c);
        uVar6 = local_4c;
        if (uVar7 < 0x10000) {
          uVar9 = uVar9 - 1;
          iVar4 = iVar10 + 1;
          if (0x7f < uVar7) goto LAB_141285af3;
        }
        else {
          if (1 < uVar9) {
            uVar9 = uVar9 - 2;
            iVar4 = iVar10 + 2;
            goto LAB_141285af3;
          }
          uVar9 = 0;
        }
        iVar10 = iVar10 + 1;
        iVar4 = iVar10;
      } while (((ulonglong)local_58 & 7) != 0);
    } while (0 < (int)uVar6);
  }
  FUN_1409ee492(local_78,iVar10 + 1,1);
  *(undefined2 *)(local_78[0] + (longlong)iVar10 * 2) = 0;
  FUN_1446e71a3(local_78[0],(longlong)iVar10,puVar2,uVar3 & 0xffffffff);
  cVar5 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar5 == '\0') {
    (**(code **)(param_1 + 0x10))
              ((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8),local_78);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141285bfd FUN_141285bfd body=104 status=ok
// SIG undefined FUN_141285bfd(void)

void FUN_141285bfd(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (plVar1[4] != 0) {
        FUN_1400020a8();
      }
      FUN_1405d0e5d(plVar1[2],(int)plVar1[3]);
      if (plVar1[2] != 0) {
        FUN_1400020a8();
      }
      FUN_1447a1747(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 141285c66 FUN_141285c66 body=1317 status=ok
// SIG undefined FUN_141285c66(void)

void FUN_141285c66(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  bool bVar7;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  int local_4c;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951cc8) && (FUN_144b3d300(&DAT_14c951cc8), DAT_14c951cc8 == -1)) {
    local_68 = FUN_1446ddbd2();
    local_60 = FUN_1468d96f0;
    local_70 = 0;
    local_78 = 0x4008001;
    FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
    atexit(FUN_14281144d);
    _Init_thread_footer(&DAT_14c951cc8);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_38 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_38);
    }
  }
  uStack_48._0_4_ = 0;
  uStack_48._4_4_ = 0;
  local_40 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_48);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_48);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_48);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_48._0_4_ = (undefined4)uVar2;
      uStack_48._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_48);
    }
  }
  puVar5 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar5 = &uStack_48;
  }
  if (*(longlong *)(param_2 + 0x30) != 0) {
    puVar6 = *(undefined **)(*(longlong *)(param_2 + 0x30) + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9520b0) && (FUN_144b3d300(&DAT_14c9520b0), DAT_14c9520b0 == -1)) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_1409e12a0;
      local_70 = 0;
      local_78 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
    if (DAT_14c952068 == 0) {
      bVar7 = puVar6 != (undefined *)0x0;
      if (puVar6 != &DAT_14c952060 && bVar7) {
        do {
          puVar6 = *(undefined **)(puVar6 + 0x30);
          bVar7 = puVar6 != (undefined *)0x0;
          if (puVar6 == &DAT_14c952060) break;
        } while (puVar6 != (undefined *)0x0);
      }
      if (!bVar7) goto LAB_141285e05;
    }
    else if ((*(ulonglong *)(puVar6 + 0x18) & DAT_14c952068) == 0) goto LAB_141285e05;
    uStack_48._0_4_ = (undefined4)*puVar5;
    uStack_48._4_4_ = (undefined4)((ulonglong)*puVar5 >> 0x20);
    local_40 = 0xffffffff;
    puVar5 = &uStack_48;
  }
LAB_141285e05:
  local_4c = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951d20) && (FUN_144b3d300(&DAT_14c951d20), DAT_14c951d20 == -1)) {
    local_68 = FUN_1446ddbd2();
    local_60 = FUN_14067a048;
    local_70 = 0;
    local_78 = 0x28001;
    FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
    atexit(FUN_142811fe5);
    _Init_thread_footer(&DAT_14c951d20);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_4c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_4c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_4c = (int)uVar2;
      uStack_48._0_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_4c);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_14128618c(local_38,puVar5,local_4c != 0);
  *param_3 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14128618c FUN_14128618c body=825 status=ok
// SIG undefined FUN_14128618c(void)

undefined8 FUN_14128618c(longlong *param_1,longlong *param_2,uint param_3)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_1 != (longlong *)0x0) && ((*param_2 != 0 || ((int)param_2[1] != -1)))) {
    uVar4 = FUN_140437988();
    plVar5 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar4);
    if (plVar5 != (longlong *)0x0) {
      uVar4 = FUN_140437988();
      plVar6 = (longlong *)FUN_144718840(plVar5,uVar4);
      if (((plVar6 != (longlong *)0x0 && plVar5 != plVar6) &&
          (plVar5 = (longlong *)(**(code **)(*plVar6 + 0x18))(plVar6), plVar5[3] != 0)) &&
         (*(int *)((longlong)plVar5 + 0x14) != 0)) {
        uVar8 = *(uint *)(plVar5 + 2);
        uVar4 = 0;
        if (((int)uVar8 < 0) || (DAT_14c9647dc <= (int)uVar8)) goto LAB_1412863c9;
        lVar7 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
        if (((lVar7 != 0) &&
            ((*(int *)(lVar7 + 0x10) == *(int *)((longlong)plVar5 + 0x14) &&
             ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)))) &&
           (cVar3 = FUN_142b34f2c(plVar5), cVar3 != '\0')) {
          lVar7 = *param_2;
          uVar8 = *(uint *)(param_2 + 1);
          if (lVar7 != 0 || uVar8 != 0xffffffff) {
            if ((int)uVar8 < 0) {
              lVar15 = *plVar5;
              uVar10 = *(uint *)(plVar5 + 1);
LAB_1412862b7:
              if (uVar10 != 0) {
                uVar9 = (ulonglong)(int)uVar10;
LAB_1412862c9:
                uVar11 = 0;
                do {
                  if (*(longlong *)(lVar15 + 0x68 + uVar11) == lVar7) {
                    uVar8 = (int)(uVar11 >> 3) * -0xf0f0f0f;
                    goto LAB_1412862fd;
                  }
                  lVar12 = lVar15 + uVar11;
                  uVar11 = uVar11 + 0x88;
                } while (lVar12 + 0x88 != uVar9 * 0x88 + lVar15);
              }
              uVar8 = 0xffffffff;
LAB_1412862fd:
              *(uint *)(param_2 + 1) = uVar8;
              bVar16 = uVar8 != 0xffffffff;
              lVar15 = *plVar5;
            }
            else {
              uVar10 = *(uint *)(plVar5 + 1);
              uVar9 = (ulonglong)uVar10;
              lVar15 = *plVar5;
              if ((int)uVar10 <= (int)uVar8) goto LAB_1412862b7;
              if (*(longlong *)(lVar15 + 0x68 + (ulonglong)uVar8 * 0x88) != lVar7)
              goto LAB_1412862c9;
              bVar16 = true;
            }
            uVar4 = 0;
            if ((!bVar16) || (lVar15 = lVar15 + (longlong)(int)uVar8 * 0x88, uVar4 = 0, lVar15 == 0)
               ) goto LAB_1412863c9;
            FUN_1448ec792(lVar15 + 0x18,&local_48);
            if (local_48 == 0) {
LAB_1412864be:
              lVar7 = 0;
            }
            else {
              iVar13 = *(int *)(lVar15 + 0x70);
              if ((longlong)iVar13 < 0) {
                lVar7 = *(longlong *)(local_48 + 0x78);
                uVar8 = *(uint *)(local_48 + 0x80);
LAB_14128647c:
                if (uVar8 != 0) {
                  lVar14 = (longlong)(int)uVar8 * 0x90 + lVar7;
                  lVar12 = *(longlong *)(lVar15 + 0x68);
LAB_141286431:
                  uVar9 = 0;
                  do {
                    if (*(longlong *)(lVar7 + uVar9) == lVar12) {
                      iVar13 = (int)(uVar9 >> 4) * 0x38e38e39;
                      *(int *)(lVar15 + 0x70) = iVar13;
                      if (iVar13 == -1) goto LAB_1412864be;
                      lVar7 = *(longlong *)(local_48 + 0x78);
                      goto LAB_14128637e;
                    }
                    lVar2 = lVar7 + uVar9;
                    uVar9 = uVar9 + 0x90;
                  } while (lVar2 + 0x90 != lVar14);
                }
                *(undefined4 *)(lVar15 + 0x70) = 0xffffffff;
                goto LAB_1412864be;
              }
              uVar8 = *(uint *)(local_48 + 0x80);
              lVar7 = *(longlong *)(local_48 + 0x78);
              if ((int)uVar8 <= iVar13) goto LAB_14128647c;
              lVar12 = *(longlong *)(lVar15 + 0x68);
              if (*(longlong *)(lVar7 + (longlong)iVar13 * 0x90) != lVar12) {
                lVar14 = (ulonglong)uVar8 * 0x90 + lVar7;
                goto LAB_141286431;
              }
LAB_14128637e:
              lVar7 = (longlong)iVar13 * 0x90 + lVar7;
            }
            if (local_40 != (longlong *)0x0) {
              LOCK();
              plVar6 = local_40 + 1;
              *(int *)plVar6 = (int)*plVar6 + -1;
              UNLOCK();
              if ((int)*plVar6 == 0) {
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
            if ((lVar7 != 0) && ((int)(param_3 & 0xff) < *(int *)(lVar7 + 0x10))) {
              local_34 = 0;
              uVar4 = FUN_14063ffb4(plVar5,(int)param_2[1]);
              goto LAB_1412863c9;
            }
          }
        }
      }
    }
  }
  uVar4 = 0;
LAB_1412863c9:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1412864c6 FUN_1412864c6 body=221 status=ok
// SIG undefined FUN_1412864c6(void)

longlong FUN_1412864c6(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caba820 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1477a8d05;
    local_40 = FUN_14333cf1a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x88;
    FUN_14081cfa3(L"/Script/UMG",L"WidgetTree",&DAT_14caba820,&DAT_1477a8d04);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caba820;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412865a4 FUN_1412865a4 body=236 status=ok
// SIG undefined FUN_1412865a4(void)

undefined8 FUN_1412865a4(undefined4 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_143af5e68(&local_30,*param_1);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)local_28 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_28 + 0x10))(local_28);
        }
      }
    }
  }
  if ((local_30 != 0) && (*(int *)(local_30 + 0x14) != 0)) {
    uVar3 = *(uint *)(local_30 + 0x10);
    uVar5 = 0;
    if (((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) goto LAB_14128664d;
    puVar4 = (undefined8 *)
             ((ulonglong)((uVar3 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
    if (((puVar4 != (undefined8 *)0x0) && (*(int *)(puVar4 + 2) == *(int *)(local_30 + 0x14))) &&
       ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)) {
      uVar5 = *puVar4;
      goto LAB_14128664d;
    }
  }
  uVar5 = 0;
LAB_14128664d:
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141286692 FUN_141286692 body=487 status=ok
// SIG undefined FUN_141286692(void)

void FUN_141286692(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  byte *pbVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  undefined1 local_61;
  undefined1 *local_60;
  longlong **local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((param_2 == 0) || (*(char *)(param_2 + 0x152) != '\x04')) {
    FUN_140e569a6(param_1 + 0x30);
    FUN_140e56b90(param_1 + 0x80);
    lVar5 = FUN_1410f9d84();
    if (lVar5 != 0) {
      lVar9 = 0;
      do {
        local_61 = (&DAT_14a4520a8)[lVar9];
        pbVar6 = (byte *)FUN_14128687a(lVar5);
        if ((((((*pbVar6 & 1) != 0) && (lVar3 = *(longlong *)(pbVar6 + 8), lVar3 != 0)) &&
             (lVar7 = FUN_1458e63b0(), lVar7 != 0)) &&
            ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar3 + 0x38) &&
             (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
              lVar7 + 0x30)))) && (lVar3 = *(longlong *)(pbVar6 + 8), lVar3 != 0)) {
          lVar7 = FUN_1458e63b0();
          if (((lVar7 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar7 + 0x38))) ||
             (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
              lVar7 + 0x30)) {
            uVar8 = 0;
          }
          else {
            uVar8 = *(undefined8 *)(pbVar6 + 8);
          }
          local_70 = (longlong *)FUN_14750bb8b(param_1,uVar8);
          if ((local_70 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
            FUN_14689c22e(local_70);
          }
          if (local_70 != (longlong *)0x0) {
            (**(code **)(*local_70 + 0x2a8))(local_70,&local_80);
            local_60 = &local_61;
            local_58 = &local_70;
            FUN_14751244a(param_1 + 0x30,local_4c,&local_60);
            local_60 = &local_61;
            local_58 = &local_80;
            FUN_147512754(param_1 + 0x80,local_4c,&local_60);
            (**(code **)(*local_80 + 0x18))();
            plVar4 = local_78;
            if (local_78 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_78 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_78)(local_78);
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
        lVar9 = lVar9 + 1;
      } while (lVar9 != 5);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14128687a FUN_14128687a body=93 status=ok
// SIG undefined FUN_14128687a(void)

longlong FUN_14128687a(longlong param_1,byte param_2)

{
  longlong lVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x6c)) {
    lVar1 = param_1 + 0x70;
    if (*(longlong *)(param_1 + 0x78) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x78);
    }
    iVar2 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x80) - 1U & (uint)param_2) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)(param_1 + 0x38) + (longlong)iVar2 * 0x40;
        if (*(byte *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar2 * 0x40) == param_2) break;
        iVar2 = *(int *)(lVar1 + 0x38);
        lVar1 = 0;
      } while (iVar2 != -1);
      goto LAB_1412868c0;
    }
  }
  lVar1 = 0;
LAB_1412868c0:
  return lVar1 + 8;
}



// FUNCTION 1412868d8 FUN_1412868d8 body=16 status=ok
// SIG undefined FUN_1412868d8(void)

longlong FUN_1412868d8(longlong param_1,byte param_2)

{
  return (ulonglong)param_2 * 0x40 + param_1 + 0x25d0;
}



// FUNCTION 1412868e8 FUN_1412868e8 body=57 status=ok
// SIG undefined FUN_1412868e8(void)

void FUN_1412868e8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba6bc8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba6bc8 = FUN_14171c317(FUN_1465c91e9,uVar1,L"EOakAmmoType");
  }
  return;
}



// FUNCTION 141286922 FUN_141286922 body=465 status=ok
// SIG undefined FUN_141286922(void)

void FUN_141286922(longlong param_1)

{
  int iVar1;
  int iVar2;
  LPCRITICAL_SECTION p_Var3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  
  p_Var3 = *(LPCRITICAL_SECTION *)(param_1 + 0xa8);
  if (p_Var3 != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(p_Var3);
    *(undefined1 *)(param_1 + 0xb0) = 1;
    while( true ) {
      plVar6 = (longlong *)FUN_14018c76c(param_1 + 8,0);
      if (plVar6 == (longlong *)0x0) break;
      (**(code **)(*plVar6 + 8))(plVar6);
    }
    FUN_14587839e(param_1 + 0x10,0);
    *(undefined4 *)(param_1 + 8) = 0;
    LOCK();
    *(undefined4 *)(param_1 + 0x80) = 0;
    UNLOCK();
    LeaveCriticalSection(p_Var3);
    while( true ) {
      p_Var3 = *(LPCRITICAL_SECTION *)(param_1 + 0xa8);
      EnterCriticalSection(p_Var3);
      iVar1 = *(int *)(param_1 + 0x90);
      iVar2 = *(int *)(param_1 + 0xa0);
      if (p_Var3 != (LPCRITICAL_SECTION)0x0) {
        LeaveCriticalSection(p_Var3);
      }
      if (iVar2 == iVar1) break;
      FUN_14000f986(0);
    }
    plVar6 = (longlong *)(param_1 + 0x98);
    p_Var3 = *(LPCRITICAL_SECTION *)(param_1 + 0xa8);
    EnterCriticalSection(p_Var3);
    if (0 < *(int *)(param_1 + 0xa0)) {
      lVar7 = 0;
      do {
        lVar4 = *(longlong *)(*plVar6 + lVar7 * 8);
        LOCK();
        *(undefined1 *)(lVar4 + 0x10) = 1;
        UNLOCK();
        (**(code **)(**(longlong **)(lVar4 + 8) + 0x10))();
        (**(code **)(**(longlong **)(lVar4 + 0x28) + 0x20))();
        FUN_14018802a(*(undefined8 *)(lVar4 + 8));
        *(undefined8 *)(lVar4 + 8) = 0;
        plVar5 = *(longlong **)(lVar4 + 0x28);
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x30))(plVar5,1);
        }
        plVar5 = *(longlong **)(*plVar6 + lVar7 * 8);
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x28))(plVar5,1);
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(param_1 + 0xa0));
    }
    *(undefined4 *)(param_1 + 0x90) = 0;
    if (*(int *)(param_1 + 0x94) != 0) {
      FUN_1458783ec(param_1 + 0x88,0);
    }
    *(undefined4 *)(param_1 + 0xa0) = 0;
    if (*(int *)(param_1 + 0xa4) != 0) {
      FUN_1458783ec(plVar6,0);
    }
    if (p_Var3 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(p_Var3);
    }
    p_Var3 = *(LPCRITICAL_SECTION *)(param_1 + 0xa8);
    if (p_Var3 != (LPCRITICAL_SECTION)0x0) {
      DeleteCriticalSection(p_Var3);
      FUN_1400020a8(p_Var3);
    }
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 141286af4 FUN_141286af4 body=29 status=ok
// SIG undefined FUN_141286af4(void)

undefined8 FUN_141286af4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141286b11 FUN_141286b11 body=77 status=ok
// SIG undefined FUN_141286b11(void)

void FUN_141286b11(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    lVar1 = *param_1;
    if (lVar1 != 0) {
      if (DAT_14c872d28 == (longlong *)0x0) {
        FUN_1460d69fa();
      }
      (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 141286b5e FUN_141286b5e body=151 status=ok
// SIG undefined FUN_141286b5e(void)

void FUN_141286b5e(short *param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar3 = *(longlong **)(param_2 + 0x28);
    lVar2 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar3 + 0x1e) == *param_1) goto LAB_141286b91;
      plVar3 = plVar3 + 4;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  plVar3 = (longlong *)0x0;
LAB_141286b91:
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
  }
  LOCK();
  *(int *)(plVar3 + 3) = (int)plVar3[3] + 1;
  UNLOCK();
  *(undefined8 *)(*plVar3 + (longlong)param_3 * (ulonglong)*(byte *)((longlong)plVar3 + 0x1c)) =
       *(undefined8 *)(param_1 + 4);
  if ((char)param_1[8] == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 3) = (int)plVar3[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000141286be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 141286bf6 FUN_141286bf6 body=370 status=ok
// SIG undefined FUN_141286bf6(void)

undefined8 * FUN_141286bf6(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if ((((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))(), cVar4 != '\0')) {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar1 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar7 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar7 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar7);
              FUN_14005b248(param_1);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar7 < iVar5);
        }
        iVar7 = 2;
        if (2 < iVar5 * 2) {
          iVar7 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar7;
        if ((iVar7 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_38);
      uVar6 = local_38;
    }
    *param_2 = uVar6;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(param_1,iVar1);
    }
    lVar3 = *param_1;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar3 + lVar8) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar8) = 0;
    *(longlong *)(lVar3 + lVar8) = *param_3;
    *param_3 = 0;
    *(int *)(lVar3 + 8 + lVar8) = (int)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}


