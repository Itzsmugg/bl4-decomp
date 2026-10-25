// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148fab174 FUN_148fab174 body=173 status=ok
// SIG undefined FUN_148fab174(void)

longlong * FUN_148fab174(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)*param_2;
  plVar2 = (longlong *)*param_1;
  if (plVar2 != plVar1) {
    *param_1 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  plVar1 = (longlong *)param_2[2];
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != plVar1) {
    param_1[2] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 3) = (int)param_2[3];
  plVar1 = (longlong *)param_2[4];
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != plVar1) {
    param_1[4] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 5) = (int)param_2[5];
  lVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = lVar3;
  return param_1;
}



// FUNCTION 148fab222 FUN_148fab222 body=234 status=ok
// SIG undefined FUN_148fab222(void)

undefined8 *
FUN_148fab222(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  undefined8 *puVar3;
  undefined1 auStack_58 [40];
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_LAB_14ba46e70;
  QueryPerformanceCounter(&local_30);
  param_1[1] = (double)local_30.QuadPart * DAT_14c83f420 + 16777216.0;
  param_1[2] = param_2;
  *param_1 = &PTR_FUN_14ba43a70;
  puVar3 = (undefined8 *)FUN_14600b90e();
  param_1[3] = *puVar3;
  lVar2 = puVar3[1];
  param_1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  param_1[5] = 0;
  iVar1 = *(int *)(param_4 + 1);
  _Src = (void *)*param_4;
  *(int *)(param_1 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 5,iVar1,0);
    memcpy((void *)param_1[5],_Src,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fab30e FUN_148fab30e body=121 status=ok
// SIG undefined FUN_148fab30e(void)

undefined4 FUN_148fab30e(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x330));
  if (*(int *)(param_1 + 0x360) < 1) {
    uVar2 = 0;
  }
  else {
    lVar3 = 0;
    lVar4 = 0;
    do {
      puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x358) + lVar3);
      uVar2 = (**(code **)*puVar1)(puVar1,param_2);
      if ((char)uVar2 != '\0') break;
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x10;
    } while (lVar4 < *(int *)(param_1 + 0x360));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x330));
  return uVar2;
}



// FUNCTION 148fab388 FUN_148fab388 body=170 status=ok
// SIG undefined FUN_148fab388(void)

undefined8 *
FUN_148fab388(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_LAB_14ba46e70;
  QueryPerformanceCounter(&local_38);
  param_1[1] = (double)local_38.QuadPart * DAT_14c83f420 + 16777216.0;
  param_1[2] = param_2;
  *param_1 = &PTR_FUN_14ba43b00;
  FUN_140df9946(param_3,param_1 + 3);
  FUN_140df9946(param_4,param_1 + 5);
  *(undefined4 *)(param_1 + 7) = 0;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fab434 FUN_148fab434 body=100 status=ok
// SIG undefined FUN_148fab434(void)

void FUN_148fab434(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x588) + 0x170);
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x588) + 0x178);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (lVar3 != 0) {
    FUN_148fab498(lVar3,*param_2,*(undefined4 *)(param_2 + 4));
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
                    /* WARNING: Could not recover jumptable at 0x000148fab480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148fab498 FUN_148fab498 body=231 status=ok
// SIG undefined FUN_148fab498(void)

void FUN_148fab498(longlong param_1,ulonglong param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined8 local_58;
  undefined **local_48;
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    cVar4 = FUN_144a61b4f();
    local_40 = *(undefined8 *)(param_1 + 0xa0);
    if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_88);
    }
    plVar3 = *(longlong **)(param_1 + 0xa8);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    local_30 = (ulonglong)param_3 << 0x20 | param_2 & 0xff;
    local_58 = 0;
    local_48 = &PTR_LAB_14ba45a00;
    local_68 = &LAB_1443ae758;
    local_38 = plVar3;
    FUN_1407461b0(1);
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
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fab596 FUN_148fab596 body=409 status=ok
// SIG undefined FUN_148fab596(void)

longlong * FUN_148fab596(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147079d9c();
  *param_1 = (longlong)&PTR_FUN_14ba42130;
  param_1[5] = 0;
  param_1[6] = 0;
  plVar4 = (longlong *)SteamInternal_ContextInit(&PTR_FUN_14c764850);
  plVar4 = (longlong *)*plVar4;
  param_1[7] = (longlong)plVar4;
  *(undefined2 *)(param_1 + 8) = 0x100;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)FUN_14600b90e();
    param_1[0xc] = *plVar4;
    lVar3 = plVar4[1];
    param_1[0xd] = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
  }
  else {
    (**(code **)(*plVar4 + 0x10))(plVar4,&local_40);
    FUN_140adf1ea(param_1 + 0xc,&local_40);
  }
  (**(code **)(*param_1 + 0x68))(param_1,1);
  *(undefined1 *)(param_1 + 3) = 1;
  plVar4 = (longlong *)FUN_1401e3228(&DAT_14cb8e468);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x230))(plVar4,&local_40);
    plVar4 = local_38;
    if (param_1 + 5 != &local_40) {
      param_1[5] = local_40;
      local_40 = 0;
      plVar2 = (longlong *)param_1[6];
      if (local_38 != plVar2) {
        local_38 = (longlong *)0x0;
        param_1[6] = (longlong)plVar4;
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar2 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
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
    }
    plVar4 = local_38;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_38 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    lVar3 = param_1[5];
    if ((lVar3 != 0) && (*(char *)(lVar3 + 0xe0) != '\0')) goto LAB_148fab6e3;
  }
  *(undefined1 *)((longlong)param_1 + 0x41) = 0;
LAB_148fab6e3:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fab730 FUN_148fab730 body=167 status=ok
// SIG undefined FUN_148fab730(void)

void FUN_148fab730(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14ba42130;
  if ((*(char *)((longlong)param_1 + 0x41) == '\x01') && (lVar3 = param_1[5], lVar3 != 0)) {
    if (*(char *)param_1[1] == '\0') {
      FUN_14439ec8c(lVar3,param_1 + 0xb);
    }
    else {
      FUN_14439ed16(lVar3,param_1[0xc]);
    }
  }
  plVar4 = (longlong *)param_1[0xd];
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
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)param_1[6];
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
  FUN_14597f13e(param_1);
  return;
}



// FUNCTION 148fab7d8 FUN_148fab7d8 body=70 status=ok
// SIG undefined FUN_148fab7d8(void)

void FUN_148fab7d8(longlong param_1,longlong *param_2)

{
  FUN_147079b30();
  (**(code **)(*param_2 + 0x10))(param_2,0x48,0x48);
                    /* WARNING: Could not recover jumptable at 0x000148fab81b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x50) * 2,(longlong)*(int *)(param_1 + 0x54) * 2);
  return;
}



// FUNCTION 148fab81e FUN_148fab81e body=129 status=ok
// SIG undefined FUN_148fab81e(void)

void FUN_148fab81e(longlong param_1)

{
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x41) == '\x01') {
    if (**(char **)(param_1 + 8) == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
    *(undefined1 *)(param_1 + 0x40) = 1;
    QueryPerformanceCounter(&local_20);
    *(float *)(param_1 + 0x44) = (float)((double)local_20.QuadPart * DAT_14c83f420 + 16777216.0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fab8b0 FUN_148fab8b0 body=85 status=ok
// SIG undefined FUN_148fab8b0(void)

void FUN_148fab8b0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba445c8;
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
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148fab906 FUN_148fab906 body=203 status=ok
// SIG undefined FUN_148fab906(void)

void FUN_148fab906(longlong param_1)

{
  char *pcVar1;
  undefined1 auStack_108 [40];
  undefined **local_e0;
  char local_d8 [8];
  longlong local_d0;
  ulonglong *local_c8;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1447400e4(&local_d0,0x81,0);
  local_e0 = &PTR_FUN_14ba445d8;
  FUN_1400748c2(&local_d0,1);
  local_d8[0] = '\x04' - (**(char **)(param_1 + 8) == '\x01');
  pcVar1 = (char *)*local_c8 + 1;
  if ((char *)local_c8[1] < pcVar1) {
    (**(code **)(local_d0 + 0x170))(&local_d0,local_d8,1);
  }
  else {
    local_d8[0] = *(char *)*local_c8;
    *local_c8 = (ulonglong)pcVar1;
  }
  FUN_14439f206(param_1,&local_d0);
  FUN_144a8b786(&local_d0);
  if ((local_18 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fab9d6 FUN_148fab9d6 body=121 status=ok
// SIG undefined FUN_148fab9d6(void)

void FUN_148fab9d6(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0xd0);
  if (lVar2 != 0) {
    if ((*(int *)(lVar2 + 0x18) != 0) &&
       (plVar1 = *(longlong **)(lVar2 + 0x10), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x60))(plVar1,param_2,param_3);
      lVar2 = *(longlong *)(param_1 + 0xd0);
    }
    if ((*(int *)(lVar2 + 0x28) != 0) &&
       (plVar1 = *(longlong **)(lVar2 + 0x20), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000148faba41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x60))(plVar1,param_2,param_3,param_4);
      return;
    }
  }
  return;
}



// FUNCTION 148faba50 FUN_148faba50 body=539 status=ok
// SIG undefined FUN_148faba50(void)

longlong * FUN_148faba50(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *plStack_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar10 = (longlong *)(param_1 + 8);
  plStack_50 = *(longlong **)(param_3 + 0x10);
  if (plStack_50 == (longlong *)0x0) {
LAB_148faba87:
    local_58 = (longlong *)0x0;
    plStack_50 = (longlong *)0x0;
    bVar12 = true;
  }
  else {
    iVar7 = (int)plStack_50[1];
    do {
      if (iVar7 == 0) goto LAB_148faba87;
      LOCK();
      iVar5 = (int)plStack_50[1];
      bVar12 = iVar7 == iVar5;
      if (bVar12) {
        *(int *)(plStack_50 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar12);
    local_58 = *(longlong **)(param_3 + 8);
    LOCK();
    *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
    UNLOCK();
    bVar12 = false;
  }
  plVar4 = plStack_50;
  uVar6 = (**(code **)(*local_58 + 0x40))();
  iVar7 = FUN_148fb8d3c(plVar10,uVar6,&local_58);
  plVar3 = plStack_50;
  if (iVar7 == -1) {
    lVar11 = 0;
  }
  else {
    lVar11 = (longlong)iVar7 * 0x28 + *plVar10;
  }
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
  if (!bVar12) {
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if (lVar11 == 0) {
    puVar8 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar8 = 0;
    puVar8[1] = 0;
    *(undefined1 *)(puVar8 + 2) = 0;
    *param_2 = (longlong)puVar8;
    puVar9 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    puVar9[1] = &DAT_100000001;
    *puVar9 = &PTR_FUN_14ba459a0;
    puVar9[2] = puVar8;
    param_2[1] = (longlong)puVar9;
    local_60 = *(longlong **)(param_3 + 0x10);
    if (local_60 == (longlong *)0x0) {
LAB_148fabbef:
      local_60 = (longlong *)0x0;
    }
    else {
      iVar7 = (int)local_60[1];
      do {
        if (iVar7 == 0) goto LAB_148fabbef;
        LOCK();
        iVar5 = (int)local_60[1];
        bVar12 = iVar7 == iVar5;
        if (bVar12) {
          *(int *)(local_60 + 1) = iVar7 + 1;
          iVar5 = iVar7;
        }
        iVar7 = iVar5;
        UNLOCK();
      } while (!bVar12);
    }
    local_68 = 0;
    if (local_60 != (longlong *)0x0) {
      local_68 = *(longlong *)(param_3 + 8);
    }
    local_58 = &local_68;
    plStack_50 = param_2;
    FUN_148fb8e46(plVar10,local_44);
    plVar10 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_60 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_60)(local_60);
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
  else {
    *param_2 = *(longlong *)(lVar11 + 0x10);
    lVar11 = *(longlong *)(lVar11 + 0x18);
    param_2[1] = lVar11;
    if (lVar11 != 0) {
      *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148fabc6c FUN_148fabc6c body=149 status=ok
// SIG undefined FUN_148fabc6c(void)

void FUN_148fabc6c(longlong param_1)

{
  float fVar1;
  undefined1 auStack_38 [32];
  LARGE_INTEGER local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (((*(char *)(param_1 + 0x41) == '\x01') && (*(char *)(param_1 + 0x40) != '\x03')) &&
     (*(longlong *)(param_1 + 8) != 0)) {
    QueryPerformanceCounter(&local_18);
    fVar1 = *(float *)(param_1 + 0x44);
    if (((fVar1 != 0.0) || (NAN(fVar1))) &&
       (2.0 < (float)((double)local_18.QuadPart * DAT_14c83f420 + 16777216.0) - fVar1)) {
      FUN_148fab906(param_1);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fabd08 FUN_148fabd08 body=95 status=ok
// SIG undefined FUN_148fabd08(void)

undefined8 * FUN_148fabd08(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_14001cc68(0x70,0x10);
  FUN_148fab596(uVar1);
  *param_2 = uVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14ba45980;
  puVar2[2] = uVar1;
  param_2[1] = puVar2;
  return param_2;
}



// FUNCTION 148fabd68 FUN_148fabd68 body=37 status=ok
// SIG undefined FUN_148fabd68(void)

undefined8 FUN_148fabd68(longlong param_1,undefined8 param_2)

{
  FUN_140002266(param_2,L"FOnlineAsyncEventSteamExternalUITriggered bIsActive: %d",
                *(undefined1 *)(param_1 + 0x18));
  return param_2;
}



// FUNCTION 148fabd8e FUN_148fabd8e body=561 status=ok
// SIG undefined FUN_148fabd8e(void)

void FUN_148fabd8e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x70))(*(longlong **)(param_1 + 0x10),&local_30);
  (**(code **)(*local_30 + 200))(local_30,*(undefined1 *)(param_1 + 0x18));
  plVar1 = local_28;
  if (*(char *)(param_1 + 0x18) == '\0') {
    if (local_28 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_28 + 1) = (int)local_28[1] + 1;
      UNLOCK();
    }
    if ((int)local_30[0xd] != 0) {
      plVar3 = local_30 + 0xc;
      if ((longlong *)*plVar3 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar3 + 0x60))();
        if (((int)local_30[0xd] != 0) &&
           (puVar4 = (undefined8 *)*plVar3, puVar4 != (undefined8 *)0x0)) {
          (**(code **)*puVar4)(puVar4,0);
          FUN_1446efa72(plVar3,0,0,0x10);
          *(undefined4 *)(local_30 + 0xd) = 0;
        }
      }
    }
    if ((int)local_30[0x11] != 0) {
      plVar3 = local_30 + 0x10;
      plVar5 = (longlong *)*plVar3;
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x60))(plVar5,(char)local_30[0xb]);
        if (((int)local_30[0x11] != 0) &&
           (puVar4 = (undefined8 *)*plVar3, puVar4 != (undefined8 *)0x0)) {
          (**(code **)*puVar4)(puVar4,0);
          FUN_1446efa72(plVar3,0,0,0x10);
          *(undefined4 *)(local_30 + 0x11) = 0;
        }
      }
    }
    *(undefined1 *)(local_30 + 0xb) = 0;
    if ((int)local_30[0x13] != 0) {
      plVar3 = local_30 + 0x12;
      plVar5 = (longlong *)*plVar3;
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x60))(plVar5,1);
        if (((int)local_30[0x13] != 0) &&
           (puVar4 = (undefined8 *)*plVar3, puVar4 != (undefined8 *)0x0)) {
          (**(code **)*puVar4)(puVar4,0);
          FUN_1446efa72(plVar3,0,0,0x10);
          *(undefined4 *)(local_30 + 0x13) = 0;
        }
      }
    }
    plVar3 = local_30 + 0xe;
    FUN_140056680(local_40,&DAT_149dfb77a);
    if (((int)local_30[0xf] != 0) && (plVar5 = (longlong *)*plVar3, plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 0x60))(plVar5,local_40);
    }
    if (local_40[0] != 0) {
      FUN_1400020a8();
    }
    if (((int)local_30[0xf] != 0) && (puVar4 = (undefined8 *)*plVar3, puVar4 != (undefined8 *)0x0))
    {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(local_30 + 0xf) = 0;
    }
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fabfc8 FUN_148fabfc8 body=43 status=ok
// SIG undefined FUN_148fabfc8(void)

undefined8 FUN_148fabfc8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764890);
  (**(code **)(*(longlong *)*puVar1 + 0xe0))((longlong *)*puVar1,"Friends");
  return 1;
}



// FUNCTION 148fabff4 FUN_148fabff4 body=260 status=ok
// SIG undefined FUN_148fabff4(void)

ulonglong FUN_148fabff4(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined7 uVar8;
  ulonglong uVar7;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(**(longlong **)(param_1 + 0x50) + 0x20))(*(longlong **)(param_1 + 0x50),&local_28);
  if (local_28 != (longlong *)0x0) {
    lVar5 = (**(code **)(*local_28 + 0x20))(local_28,param_3);
    if ((lVar5 != 0) && (lVar5 = *(longlong *)(lVar5 + 0x100), lVar5 != 0)) {
      uVar4 = *(uint *)(lVar5 + 8);
      uVar8 = (undefined7)((ulonglong)lVar5 >> 8);
      if (uVar4 == 1) {
        cVar3 = (**(code **)(**(longlong **)(lVar5 + 0x30) + 0x28))();
        if (cVar3 != '\0') {
          puVar6 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764890);
          (**(code **)(*(longlong *)*puVar6 + 0x108))
                    ((longlong *)*puVar6,*(undefined8 *)(*(longlong *)(lVar5 + 0x30) + 0x18));
          uVar7 = CONCAT71(uVar8,1);
          goto LAB_148fac082;
        }
        uVar4 = *(uint *)(lVar5 + 8);
      }
      uVar7 = CONCAT71(uVar8,1);
      if ((uVar4 & 0xfffffffe) == 2) {
        puVar6 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764890);
        (**(code **)(*(longlong *)*puVar6 + 0xe0))((longlong *)*puVar6,"LobbyInvite");
      }
      goto LAB_148fac082;
    }
  }
  uVar7 = 0;
LAB_148fac082:
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
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fac0fa FUN_148fac0fa body=43 status=ok
// SIG undefined FUN_148fac0fa(void)

undefined8 FUN_148fac0fa(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764890);
  (**(code **)(*(longlong *)*puVar1 + 0xe0))((longlong *)*puVar1,"Achievements");
  return 1;
}



// FUNCTION 148fac12a FUN_148fac12a body=464 status=ok
// SIG undefined FUN_148fac12a(void)

undefined8 FUN_148fac12a(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined8 *puVar3;
  size_t sVar4;
  undefined2 *puVar5;
  wchar_t *pwVar6;
  undefined1 auStack_108 [40];
  wchar_t *local_e0;
  int local_d8;
  undefined1 local_d0 [128];
  wchar_t *local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  cVar2 = FUN_144a791f8(param_2,&DAT_149e41636,8,1);
  puVar3 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764890);
  plVar1 = (longlong *)*puVar3;
  if (cVar2 == '\0') {
    puVar5 = &DAT_149dfb77a;
    if (*(int *)(param_2 + 1) != 0) {
      puVar5 = (undefined2 *)*param_2;
    }
    FUN_140002266(&local_e0,L"https://%s",puVar5);
    pwVar6 = L"";
    if (local_d8 != 0) {
      pwVar6 = local_e0;
    }
    local_50 = (wchar_t *)0x0;
    if (pwVar6 == (wchar_t *)0x0) {
      local_48 = 0;
      local_40 = 0;
    }
    else {
      sVar4 = wcslen(pwVar6);
      FUN_1446fe5a4(local_d0,pwVar6,sVar4 & 0xffffffff,1);
    }
    (**(code **)(*plVar1 + 0xf0))(plVar1,local_48,0);
    if (local_50 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(int *)(param_2 + 1) == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)*param_2;
    }
    local_50 = (wchar_t *)0x0;
    if (pwVar6 == (wchar_t *)0x0) {
      local_48 = 0;
      local_40 = 0;
    }
    else {
      sVar4 = wcslen(pwVar6);
      FUN_1446fe5a4(local_d0,pwVar6,sVar4 & 0xffffffff,1);
    }
    (**(code **)(*plVar1 + 0xf0))(plVar1,local_48,0);
    local_e0 = local_50;
  }
  if (local_e0 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  FUN_146281d3c(param_1 + 0x70,param_4);
  if ((local_38 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 148fac300 FUN_148fac300 body=200 status=ok
// SIG undefined FUN_148fac300(void)

undefined8 FUN_148fac300(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  puVar3 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764890);
  plVar1 = (longlong *)*puVar3;
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  local_48 = 0;
  FUN_1446fe5a4(local_c8,L"steamid",7,1);
  (**(code **)(*plVar1 + 0xe8))(plVar1,local_40,uVar2);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_14009d848(param_1 + 0x60,param_4);
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fac3ce FUN_148fac3ce body=130 status=ok
// SIG undefined FUN_148fac3ce(void)

undefined8 FUN_148fac3ce(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  cVar1 = FUN_1405b43cc((undefined8 *)(param_3 + 0x10));
  uVar4 = 0;
  if ((cVar1 != '\0') && (1 < *(int *)(param_3 + 0x18))) {
    iVar2 = _wtoi(*(wchar_t **)(param_3 + 0x10));
    if (iVar2 == 0) {
      uVar4 = 0;
    }
    else {
      puVar3 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764890);
      (**(code **)(*(longlong *)*puVar3 + 0xf8))
                ((longlong *)*puVar3,iVar2,(uint)*(byte *)(param_3 + 0x20) * 2);
      FUN_14114e6dc(param_1 + 0x90,param_4);
      uVar4 = 1;
    }
  }
  return uVar4;
}



// FUNCTION 148fac454 FUN_148fac454 body=496 status=ok
// SIG undefined FUN_148fac454(void)

ulonglong FUN_148fac454(longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4,
                       undefined8 param_5)

{
  void *_Src;
  longlong *plVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  size_t sVar5;
  longlong lVar6;
  size_t _Size;
  wchar_t *_Str;
  undefined1 auStack_108 [40];
  wchar_t *local_e0;
  int local_d8;
  undefined4 local_d4;
  undefined1 local_d0 [128];
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  puVar4 = (undefined8 *)FUN_1447a1f4a(param_4 + 0x60);
  local_e0 = (wchar_t *)0x0;
  local_d8 = *(int *)(puVar4 + 1);
  lVar6 = (longlong)local_d8;
  _Src = (void *)*puVar4;
  if (lVar6 == 0) {
    local_d4 = 0;
    _Size = 0;
  }
  else {
    FUN_1446dd670(&local_e0,local_d8,0);
    _Size = lVar6 * 2;
    memcpy(local_e0,_Src,_Size);
  }
  bVar2 = (**(code **)(*param_3 + 0x28))(param_3);
  bVar2 = 1 < local_d8 & bVar2;
  if (bVar2 == 1) {
    FUN_14114e6dc(param_1 + 0x80,param_5);
    puVar4 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764890);
    _Str = local_e0;
    if (local_d8 == 0) {
      _Str = L"";
    }
    plVar1 = (longlong *)*puVar4;
    local_50 = 0;
    if (_Str == (wchar_t *)0x0) {
      local_48 = 0;
      local_40 = 0;
    }
    else {
      sVar5 = wcslen(_Str);
      FUN_1446fe5a4(local_d0,_Str,sVar5 & 0xffffffff,1);
    }
    uVar3 = (**(code **)(*plVar1 + 0x208))(plVar1,param_3[3],local_48);
    *(undefined1 *)(param_1 + 0x58) = uVar3;
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    puVar4 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764890);
    plVar1 = (longlong *)*puVar4;
    lVar6 = param_3[3];
    local_50 = 0;
    FUN_1446fe5a4(local_d0,L"chat",4,1);
    (**(code **)(*plVar1 + 0xe8))(plVar1,local_48,lVar6);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_e0 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)(_Size >> 8),bVar2) & 0xffffffff;
}



// FUNCTION 148fac646 FUN_148fac646 body=277 status=ok
// SIG undefined FUN_148fac646(void)

undefined8 FUN_148fac646(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar3 = (longlong *)FUN_14001cc68(0x30,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14ba459c0;
  plVar3[5] = 0x40;
  plVar3[2] = (longlong)&PTR_FUN_14ba459e0;
  plVar3[3] = 0;
  plVar3[4] = 0;
  if (plVar3 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xa0) = 0x10;
    plVar4 = *(longlong **)(param_1 + 0xa8);
    if (plVar4 == (longlong *)0x0) goto LAB_148fac708;
    *(undefined8 *)(param_1 + 0xa8) = 0;
LAB_148fac6c9:
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
    if (plVar3 == (longlong *)0x0) goto LAB_148fac708;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0xa0) = plVar3 + 2;
    plVar4 = *(longlong **)(param_1 + 0xa8);
    if (plVar3 == plVar4) {
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
    else {
      *(longlong **)(param_1 + 0xa8) = plVar3;
      if (plVar4 != (longlong *)0x0) goto LAB_148fac6c9;
    }
  }
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
LAB_148fac708:
  return *(undefined8 *)(param_1 + 0xa0);
}



// FUNCTION 148fac75c FUN_148fac75c body=459 status=ok
// SIG undefined FUN_148fac75c(void)

void FUN_148fac75c(longlong param_1,byte param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  char *pcVar3;
  char cVar4;
  longlong *plVar5;
  size_t sVar6;
  byte bVar7;
  uint uVar8;
  undefined7 uVar9;
  undefined1 auStack_198 [32];
  longlong local_178 [2];
  char *local_168;
  undefined8 uStack_160;
  longlong *local_158 [32];
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (*(longlong *)(param_1 + 8) == 0) goto LAB_148fac789;
  uVar8 = *(int *)(param_1 + 0x18) + 1;
  if (param_3 < uVar8) {
    uVar8 = param_3;
  }
  local_168 = (char *)0x0;
  uStack_160 = 0;
  FUN_14631bc80(&local_168,uVar8,1);
  plVar5 = (longlong *)SteamInternal_ContextInit(&PTR_FUN_14c764830);
  plVar5 = (longlong *)*plVar5;
  if (plVar5 == (longlong *)0x0) {
LAB_148fac875:
    local_178[1] = 0;
    local_178[0] = 0;
    bVar7 = 0;
    uVar9 = 0;
  }
  else {
    cVar4 = (**(code **)(*plVar5 + 0xb0))(plVar5,local_168,uVar8);
    pcVar3 = local_168;
    local_178[0] = 0;
    local_178[1] = 0;
    if (cVar4 == '\0') goto LAB_148fac875;
    local_58 = 0;
    if (local_168 == (char *)0x0) {
      local_50 = 0;
      local_48 = 0;
    }
    else {
      sVar6 = strlen(local_168);
      FUN_1446e6fe8(local_158,pcVar3,sVar6 & 0xffffffff,1);
    }
    FUN_14020fad6(local_178,local_50);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    uVar9 = (undefined7)((ulonglong)pcVar3 >> 8);
    bVar7 = 1;
  }
  plVar5 = *(longlong **)(param_1 + 8);
  FUN_140009b9a(local_158,local_178);
  (**(code **)(*plVar5 + 8))(plVar5,local_158,CONCAT71(uVar9,bVar7 & param_2) & 0xffffffff);
  if (local_158[0] != (longlong *)0x0) {
    (**(code **)(*local_158[0] + 0x10))();
  }
  *(undefined8 *)(param_1 + 8) = 0;
  plVar5 = *(longlong **)(param_1 + 0x10);
  if (plVar5 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
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
  if (local_178[0] != 0) {
    FUN_1400020a8();
  }
  if (local_168 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_148fac789:
  if ((local_40 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148fac928 FUN_148fac928 body=114 status=ok
// SIG undefined FUN_148fac928(void)

undefined8 * FUN_148fac928(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140056680(local_30,L"nickname");
  FUN_148fac99c(param_1,local_30,param_2);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fac99c FUN_148fac99c body=130 status=ok
// SIG undefined FUN_148fac99c(void)

bool FUN_148fac99c(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined2 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  iVar2 = *(int *)(param_2 + 1);
  if (iVar2 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  uVar6 = 0;
  uVar3 = (ulonglong)(iVar2 - 1);
  if (iVar2 == 0) {
    uVar3 = uVar6;
  }
  uVar1 = FUN_144a49b4a(uVar3,puVar4);
  iVar2 = FUN_1457511aa((longlong *)(param_1 + 0x18),uVar1,param_2);
  if (iVar2 != -1) {
    uVar6 = (longlong)iVar2 * 0x28 + *(longlong *)(param_1 + 0x18);
  }
  lVar5 = uVar6 + 0x10;
  if (uVar6 == 0) {
    lVar5 = 0;
  }
  if (lVar5 != 0) {
    FUN_144a787a6(param_3,lVar5);
  }
  return lVar5 != 0;
}



// FUNCTION 148faca1e FUN_148faca1e body=114 status=ok
// SIG undefined FUN_148faca1e(void)

undefined8 * FUN_148faca1e(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140056680(local_30,L"nickname");
  FUN_148fac99c(param_1,local_30,param_2);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148facacc FUN_148facacc body=158 status=ok
// SIG undefined FUN_148facacc(void)

undefined8
FUN_148facacc(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong *plVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140056680(local_40,L"SendInvite() is not supported");
  plVar1 = (longlong *)*param_5;
  if (plVar1 != (longlong *)0x0 && (int)param_5[1] != 0) {
    local_58 = param_4;
    local_50 = local_40;
    (**(code **)(*plVar1 + 0x60))(plVar1,param_2,0,param_3);
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148facb6c FUN_148facb6c body=158 status=ok
// SIG undefined FUN_148facb6c(void)

undefined8
FUN_148facb6c(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong *plVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140056680(local_40,L"AcceptInvite() is not supported");
  plVar1 = (longlong *)*param_5;
  if (plVar1 != (longlong *)0x0 && (int)param_5[1] != 0) {
    local_58 = param_4;
    local_50 = local_40;
    (**(code **)(*plVar1 + 0x60))(plVar1,param_2,0,param_3);
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148facc0c FUN_148facc0c body=136 status=ok
// SIG undefined FUN_148facc0c(void)

undefined8 FUN_148facc0c(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140056680(local_40,L"RejectInvite() is not supported");
  local_58 = param_4;
  local_50 = local_40;
  (**(code **)(*param_1 + 0x138))(param_1,param_2,0,param_3);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148facc96 FUN_148facc96 body=567 status=ok
// SIG undefined FUN_148facc96(void)

void FUN_148facc96(longlong param_1,undefined4 param_2,longlong param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_a8 [32];
  undefined4 local_88 [2];
  undefined8 local_80;
  longlong *local_78;
  void *local_70;
  int local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar11 = *(longlong **)(param_3 + 0x10);
  if (plVar11 == (longlong *)0x0) {
LAB_148faccbd:
    plVar11 = (longlong *)0x0;
  }
  else {
    iVar8 = (int)plVar11[1];
    do {
      if (iVar8 == 0) goto LAB_148faccbd;
      LOCK();
      iVar7 = (int)plVar11[1];
      bVar12 = iVar8 == iVar7;
      if (bVar12) {
        *(int *)(plVar11 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar12);
  }
  local_80 = 0;
  if (plVar11 != (longlong *)0x0) {
    local_80 = *(undefined8 *)(param_3 + 8);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x380);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  local_70 = (void *)0x0;
  local_68 = *(int *)(param_4 + 1);
  lVar10 = (longlong)local_68;
  pvVar5 = (void *)*param_4;
  local_88[0] = param_2;
  local_78 = plVar11;
  if (lVar10 == 0) {
    local_64 = 0;
  }
  else {
    FUN_1446dd670(&local_70,local_68,0);
    memcpy(local_70,pvVar5,lVar10 * 2);
  }
  local_60 = 0;
  local_58 = 0;
  FUN_148fa2108(&local_60,param_6);
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,5,0x10);
  puVar6 = local_50;
  pvVar5 = local_70;
  local_48 = 5;
  *local_50 = &PTR_LAB_149e020b0;
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
  local_50[2] = lVar9;
  *local_50 = &PTR_FUN_14ba45a20;
  *(undefined4 *)(local_50 + 3) = local_88[0];
  local_50[4] = local_80;
  local_50[5] = local_78;
  if (local_78 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_78 + 1) = (int)local_78[1] + 1;
    UNLOCK();
  }
  local_50[6] = 0;
  lVar10 = (longlong)local_68;
  *(int *)(local_50 + 7) = local_68;
  if (lVar10 == 0) {
    *(undefined4 *)((longlong)local_50 + 0x3c) = 0;
  }
  else {
    puVar1 = local_50 + 6;
    FUN_1446dd670(puVar1,local_68,0);
    memcpy((void *)*puVar1,pvVar5,lVar10 * 2);
  }
  puVar6[8] = 0;
  *(undefined4 *)(puVar6 + 9) = 0;
  FUN_148fa2108(puVar6 + 8,&local_60);
  FUN_145c398c4(uVar4,&local_50);
  FUN_1449db362(&local_50);
  FUN_1443a037a(local_88);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar11 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar3 = (int *)((longlong)plVar11 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148facece FUN_148facece body=567 status=ok
// SIG undefined FUN_148facece(void)

void FUN_148facece(longlong param_1,undefined4 param_2,longlong param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_a8 [32];
  undefined4 local_88 [2];
  undefined8 local_80;
  longlong *local_78;
  void *local_70;
  int local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar11 = *(longlong **)(param_3 + 0x10);
  if (plVar11 == (longlong *)0x0) {
LAB_148facef5:
    plVar11 = (longlong *)0x0;
  }
  else {
    iVar8 = (int)plVar11[1];
    do {
      if (iVar8 == 0) goto LAB_148facef5;
      LOCK();
      iVar7 = (int)plVar11[1];
      bVar12 = iVar8 == iVar7;
      if (bVar12) {
        *(int *)(plVar11 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar12);
  }
  local_80 = 0;
  if (plVar11 != (longlong *)0x0) {
    local_80 = *(undefined8 *)(param_3 + 8);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x380);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  local_70 = (void *)0x0;
  local_68 = *(int *)(param_4 + 1);
  lVar10 = (longlong)local_68;
  pvVar5 = (void *)*param_4;
  local_88[0] = param_2;
  local_78 = plVar11;
  if (lVar10 == 0) {
    local_64 = 0;
  }
  else {
    FUN_1446dd670(&local_70,local_68,0);
    memcpy(local_70,pvVar5,lVar10 * 2);
  }
  local_60 = 0;
  local_58 = 0;
  FUN_148fa2108(&local_60,param_5);
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,5,0x10);
  puVar6 = local_50;
  pvVar5 = local_70;
  local_48 = 5;
  *local_50 = &PTR_LAB_149e020b0;
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
  local_50[2] = lVar9;
  *local_50 = &PTR_FUN_14ba45a90;
  *(undefined4 *)(local_50 + 3) = local_88[0];
  local_50[4] = local_80;
  local_50[5] = local_78;
  if (local_78 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_78 + 1) = (int)local_78[1] + 1;
    UNLOCK();
  }
  local_50[6] = 0;
  lVar10 = (longlong)local_68;
  *(int *)(local_50 + 7) = local_68;
  if (lVar10 == 0) {
    *(undefined4 *)((longlong)local_50 + 0x3c) = 0;
  }
  else {
    puVar1 = local_50 + 6;
    FUN_1446dd670(puVar1,local_68,0);
    memcpy((void *)*puVar1,pvVar5,lVar10 * 2);
  }
  puVar6[8] = 0;
  *(undefined4 *)(puVar6 + 9) = 0;
  FUN_148fa2108(puVar6 + 8,&local_60);
  FUN_145c398c4(uVar4,&local_50);
  FUN_1449db362(&local_50);
  FUN_1443a0408(local_88);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar11 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar3 = (int *)((longlong)plVar11 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148fad106 FUN_148fad106 body=136 status=ok
// SIG undefined FUN_148fad106(void)

undefined8 FUN_148fad106(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140056680(local_40,L"DeleteFriend() is not supported");
  local_58 = param_4;
  local_50 = local_40;
  (**(code **)(*param_1 + 0x160))(param_1,param_2,0,param_3);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fad1b4 FUN_148fad1b4 body=23 status=ok
// SIG undefined FUN_148fad1b4(void)

undefined8 FUN_148fad1b4(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0xd0))(param_1,param_2,0);
  return 0;
}



// FUNCTION 148fad1cc FUN_148fad1cc body=349 status=ok
// SIG undefined FUN_148fad1cc(void)

undefined8 FUN_148fad1cc(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined1 local_60 [8];
  undefined8 local_58;
  longlong *local_50;
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((longlong *)param_1[0x31] != (longlong *)0x0) {
    cVar3 = (**(code **)(*(longlong *)param_1[0x31] + 8))();
    if ((param_2 == 0) && (cVar3 != '\0')) {
      (**(code **)(*param_1 + 0x20))(param_1,0);
      (**(code **)(*param_1 + 0x150))(param_1,local_38,0);
      FUN_140056680(local_48,&DAT_149dfb77a);
      (**(code **)(*(longlong *)param_1[0x31] + 0x10))((longlong *)param_1[0x31],local_60);
      FUN_140adf1ea(&local_58,local_60);
      local_68 = local_48;
      (**(code **)(*param_1 + 0xa8))(param_1,0,1,local_58);
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_50 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
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
      if (local_48[0] != 0) {
        FUN_1400020a8();
      }
      if (local_38[0] != 0) {
        FUN_1400020a8();
      }
      uVar4 = 1;
      goto LAB_148fad2c6;
    }
  }
  FUN_140056680(local_38,L"AutoLogin failed. Not logged in or no connection.");
  puVar5 = (undefined8 *)FUN_14600b90e();
  local_68 = local_38;
  (**(code **)(*param_1 + 0xa8))(param_1,param_2,0,*puVar5);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  uVar4 = 0;
LAB_148fad2c6:
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fad32a FUN_148fad32a body=192 status=ok
// SIG undefined FUN_148fad32a(void)

undefined8 * FUN_148fad32a(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_4 == 8 && param_3 != (undefined8 *)0x0) {
    local_20 = *param_3;
    cVar3 = FUN_1458ed9e4();
    if (cVar3 != '\0') {
      FUN_140dfab96(&local_30,&local_20);
      *param_2 = local_30;
      param_2[1] = local_28;
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
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fad40c FUN_148fad40c body=32 status=ok
// SIG undefined FUN_148fad40c(void)

undefined8 FUN_148fad40c(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,&DAT_149dfb77a);
  return param_2;
}



// FUNCTION 148fad42c FUN_148fad42c body=164 status=ok
// SIG undefined FUN_148fad42c(void)

bool FUN_148fad42c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_158 [32];
  undefined1 local_138 [256];
  longlong local_38;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  plVar2 = (longlong *)SteamInternal_ContextInit(&PTR_FUN_14c764830);
  lVar1 = *plVar2;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764830);
    uVar4 = (**(code **)(*(longlong *)*puVar3 + 0x20))();
    FUN_144a81018(local_138,uVar4);
    FUN_14020fad6(param_3,local_30);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fad4d2 FUN_148fad4d2 body=268 status=ok
// SIG undefined FUN_148fad4d2(void)

undefined8 FUN_148fad4d2(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  *(undefined4 *)(*param_3 + 0x40) = 1;
  lVar4 = *param_3;
  FUN_148a44753(*(undefined8 *)(lVar4 + 0x30),*(undefined4 *)(lVar4 + 0x38));
  *(undefined4 *)(lVar4 + 0x38) = 0;
  if (*(int *)(lVar4 + 0x3c) != 0) {
    FUN_148fb9d4e(lVar4 + 0x30,0);
  }
  FUN_148fad5de(param_1,*param_3);
  uVar2 = FUN_14001cc68(0x78,0x10);
  FUN_148fad6a8(uVar2,*(undefined8 *)(param_1 + 0x38),param_2,param_3);
  FUN_1410d2116(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x210),uVar2);
  iVar1 = (int)param_2[1];
  if (0 < (longlong)iVar1) {
    lVar4 = 0;
    do {
      uVar2 = *(undefined8 *)(*param_2 + lVar4);
      uVar3 = FUN_14001cc68(0x70,0x10);
      FUN_148fad7b4(uVar3,*(undefined8 *)(param_1 + 0x38),uVar2,param_3,
                    (ulonglong)(iVar1 - 1) << 4 == lVar4);
      FUN_1410d2116(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x210),uVar3);
      lVar4 = lVar4 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar4);
  }
  return 1;
}



// FUNCTION 148fad5de FUN_148fad5de body=202 status=ok
// SIG undefined FUN_148fad5de(void)

void FUN_148fad5de(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  lVar2 = FUN_148fae6dc(param_1,param_2);
  if ((lVar2 == 0) ||
     ((*(longlong *)(lVar2 + 0x20) == -1 && ((*(uint *)(lVar2 + 0x28) & 0xfffffffe) == 2)))) {
    iVar1 = *(int *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x48) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x4c) < iVar1 + 1U) {
      FUN_148fb9dbc(param_1 + 0x40,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x40);
    FUN_148fae8b4(lVar2 + (longlong)iVar1 * 0x30,param_2);
    *(undefined4 *)(lVar2 + 0x28 + (longlong)iVar1 * 0x30) = 1;
    lVar2 = *(longlong *)(param_1 + 0x38);
    uVar3 = FUN_14001cc68(0x60,0x10);
    FUN_148fae91e(uVar3,lVar2,param_2);
    FUN_1410d2116(*(undefined8 *)(lVar2 + 0x210),uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x000148fad62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  return;
}



// FUNCTION 148fad6a8 FUN_148fad6a8 body=267 status=ok
// SIG undefined FUN_148fad6a8(void)

undefined8 *
FUN_148fad6a8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  LARGE_INTEGER local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_LAB_14ba46e70;
  QueryPerformanceCounter(&local_40);
  param_1[1] = (double)local_40.QuadPart * DAT_14c83f420 + 16777216.0;
  *param_1 = &PTR_LAB_14ba46e30;
  param_1[2] = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_14ba44850;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  iVar1 = *(int *)(param_3 + 1);
  uVar2 = *param_3;
  *(int *)(param_1 + 7) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1413eadba(param_1 + 6,iVar1,0);
    FUN_1413ead8c(param_1[6],uVar2,iVar1);
  }
  param_1[8] = *param_4;
  lVar3 = param_4[1];
  param_1[9] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0xd) = 1;
  *(undefined1 *)((longlong)param_1 + 0x74) = 0;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fad7b4 FUN_148fad7b4 body=233 status=ok
// SIG undefined FUN_148fad7b4(void)

undefined8 *
FUN_148fad7b4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined1 param_5)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  LARGE_INTEGER local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_LAB_14ba46e70;
  QueryPerformanceCounter(&local_40);
  param_1[1] = (double)local_40.QuadPart * DAT_14c83f420 + 16777216.0;
  *param_1 = &PTR_LAB_14ba46e30;
  param_1[2] = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_14ba44a00;
  *(undefined1 *)(param_1 + 5) = 0;
  FUN_140df9946(param_3,param_1 + 6);
  param_1[8] = *param_4;
  lVar1 = param_4[1];
  param_1[9] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 0xd) = param_5;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fad89e FUN_148fad89e body=162 status=ok
// SIG undefined FUN_148fad89e(void)

undefined8 FUN_148fad89e(longlong param_1,undefined4 param_2,undefined4 param_3,longlong *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(*param_4 + 0x40) = 1;
  lVar1 = *param_4;
  FUN_148a44753(*(undefined8 *)(lVar1 + 0x30),*(undefined4 *)(lVar1 + 0x38));
  *(undefined4 *)(lVar1 + 0x38) = 0;
  if (*(int *)(lVar1 + 0x3c) != 0) {
    FUN_148fb9d4e(lVar1 + 0x30,0);
  }
  FUN_148fad5de(param_1,*param_4);
  uVar2 = FUN_14001cc68(0x78,0x10);
  FUN_148fad940(uVar2,*(undefined8 *)(param_1 + 0x38),param_2,param_3,param_4);
  FUN_1410d2116(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x210),uVar2);
  return 1;
}



// FUNCTION 148fad940 FUN_148fad940 body=239 status=ok
// SIG undefined FUN_148fad940(void)

undefined8 *
FUN_148fad940(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 *param_5)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  LARGE_INTEGER local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_LAB_14ba46e70;
  QueryPerformanceCounter(&local_40);
  param_1[1] = (double)local_40.QuadPart * DAT_14c83f420 + 16777216.0;
  *param_1 = &PTR_LAB_14ba46e30;
  param_1[2] = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_14ba44850;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = *param_5;
  lVar1 = param_5[1];
  param_1[9] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0xd) = 3;
  *(undefined4 *)((longlong)param_1 + 0x6c) = param_3;
  *(undefined4 *)(param_1 + 0xe) = param_4;
  *(undefined1 *)((longlong)param_1 + 0x74) = 0;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fada30 FUN_148fada30 body=266 status=ok
// SIG undefined FUN_148fada30(void)

undefined8 FUN_148fada30(longlong param_1,undefined8 *param_2,undefined4 param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  longlong *local_48;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(*param_4 + 0x40) = 1;
  lVar3 = *param_4;
  FUN_148a44753(*(undefined8 *)(lVar3 + 0x30),*(undefined4 *)(lVar3 + 0x38));
  *(undefined4 *)(lVar3 + 0x38) = 0;
  if (*(int *)(lVar3 + 0x3c) != 0) {
    FUN_148fb9d4e(lVar3 + 0x30,0);
  }
  FUN_148fad5de(param_1,*param_4);
  uVar5 = FUN_14001cc68(0x78,0x10);
  local_40 = *param_2;
  local_38 = param_2[1];
  if (local_38 != 0) {
    LOCK();
    *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
    UNLOCK();
  }
  local_48 = param_4;
  FUN_148fadb3c(uVar5,*(undefined8 *)(param_1 + 0x38),&local_40,param_3);
  FUN_1410d2116(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x210),uVar5);
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
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fadb3c FUN_148fadb3c body=452 status=ok
// SIG undefined FUN_148fadb3c(void)

undefined8 *
FUN_148fadb3c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
             undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  byte bVar6;
  undefined1 auStack_68 [32];
  LARGE_INTEGER local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_LAB_14ba46e70;
  QueryPerformanceCounter(&local_48);
  param_1[1] = (double)local_48.QuadPart * DAT_14c83f420 + 16777216.0;
  *param_1 = &PTR_LAB_14ba46e30;
  param_1[2] = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_14ba44850;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = *param_5;
  lVar4 = param_5[1];
  param_1[9] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0xe) = param_4;
  *(undefined1 *)((longlong)param_1 + 0x74) = 0;
  FUN_14666eda4(&local_48,*param_3);
  plVar5 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  iVar3 = *(int *)(param_1 + 7);
  *(uint *)(param_1 + 7) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 0x3c) < iVar3 + 1U) {
    FUN_1413eac7e(param_1 + 6,iVar3);
  }
  lVar4 = param_1[6];
  ((LARGE_INTEGER *)(lVar4 + (longlong)iVar3 * 0x10))->QuadPart = (LONGLONG)local_48;
  *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar5;
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
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_40 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  bVar6 = (**(code **)(*(longlong *)param_1[2] + 0x138))
                    ((longlong *)param_1[2],*(undefined8 *)param_1[6]);
  *(uint *)(param_1 + 0xd) = bVar6 ^ 5;
  plVar5 = (longlong *)param_3[1];
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
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fadd02 FUN_148fadd02 body=138 status=ok
// SIG undefined FUN_148fadd02(void)

undefined8 FUN_148fadd02(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(*param_3 + 0x40) = 1;
  lVar1 = *param_3;
  FUN_148a44753(*(undefined8 *)(lVar1 + 0x30),*(undefined4 *)(lVar1 + 0x38));
  *(undefined4 *)(lVar1 + 0x38) = 0;
  if (*(int *)(lVar1 + 0x3c) != 0) {
    FUN_148fb9d4e(lVar1 + 0x30,0);
  }
  FUN_148fad5de(param_1,*param_3);
  uVar2 = FUN_14001cc68(0x78,0x10);
  FUN_148fadd8c(uVar2,*(undefined8 *)(param_1 + 0x38),param_3);
  FUN_1410d2116(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x210),uVar2);
  return 1;
}



// FUNCTION 148fadd8c FUN_148fadd8c body=212 status=ok
// SIG undefined FUN_148fadd8c(void)

undefined8 * FUN_148fadd8c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_LAB_14ba46e70;
  QueryPerformanceCounter(&local_30);
  param_1[1] = (double)local_30.QuadPart * DAT_14c83f420 + 16777216.0;
  *param_1 = &PTR_LAB_14ba46e30;
  param_1[2] = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_14ba44850;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = *param_3;
  lVar1 = param_3[1];
  param_1[9] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0xd) = 2;
  *(undefined1 *)((longlong)param_1 + 0x74) = 0;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fade64 FUN_148fade64 body=841 status=ok
// SIG undefined FUN_148fade64(void)

undefined8 FUN_148fade64(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined1 local_130;
  longlong local_120;
  undefined8 local_118;
  longlong local_110;
  longlong local_108;
  longlong *local_100;
  longlong local_f8 [2];
  longlong *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  longlong *local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_9c [4];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  iVar6 = *(int *)(param_4 + 0x70);
  lVar7 = (longlong)iVar6;
  local_118 = param_3;
  if (0 < lVar7) {
    lVar3 = 0;
    do {
      FUN_148fae1ae(param_1,*(longlong *)(param_4 + 0x68) + lVar3,*(undefined4 *)(param_4 + 0x58),
                    *(undefined4 *)(param_4 + 0x5c));
      lVar3 = lVar3 + 0x10;
    } while (lVar7 << 4 != lVar3);
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_120 = lVar7;
  local_110 = param_1;
  if (0 < iVar6) {
    local_100 = (longlong *)(param_4 + 8);
    local_108 = param_4 + 0x18;
    lVar7 = 0;
    do {
      local_c0 = (longlong *)&DAT_100000000;
      local_b8 = local_108;
      local_b0 = 0xffffffff;
      local_a8 = 0;
      if (*(int *)(param_4 + 0x30) != 0) {
        FUN_1449c0562(&local_c0);
      }
      local_d0 = local_b0;
      local_c8 = local_a8;
      local_c4 = local_a4;
      local_e0 = local_c0;
      local_d8 = local_b8;
      local_e8 = local_100;
      while (local_d0._4_4_ < *(int *)(local_d8 + 0x18)) {
        lVar3 = *local_e8;
        lVar2 = (longlong)local_d0._4_4_ * 0x38;
        puVar5 = &DAT_149dfb77a;
        if (*(int *)(lVar3 + 8 + lVar2) != 0) {
          puVar5 = *(undefined2 **)(lVar3 + lVar2);
        }
        puVar4 = &DAT_149dfb77a;
        if (*(int *)(*(longlong *)(param_4 + 0x68) + 8 + lVar7 * 0x10) != 0) {
          puVar4 = *(undefined2 **)(*(longlong *)(param_4 + 0x68) + lVar7 * 0x10);
        }
        FUN_140002266(local_f8,L"%s_%s",puVar4,puVar5);
        local_c0 = local_f8;
        local_b8 = lVar3 + lVar2 + 0x10;
        FUN_140dfa58e(&local_98,local_9c,&local_c0,0);
        if (local_f8[0] != 0) {
          FUN_1400020a8();
        }
        local_d0 = CONCAT44(local_d0._4_4_,(uint)local_d0 & ~local_e0._4_4_);
        FUN_1449c0562(&local_e0);
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 != local_120);
  }
  uVar1 = FUN_14001cc68(0xa8,0x10);
  lVar7 = local_110;
  FUN_148fae2e6(uVar1,*(undefined8 *)(local_110 + 0x38),local_118,&local_98);
  FUN_1410d2116(*(undefined8 *)(*(longlong *)(lVar7 + 0x38) + 0x210),uVar1);
  iVar6 = (int)local_120;
  if (0 < iVar6) {
    lVar3 = local_120 << 4;
    lVar2 = 0;
    do {
      uVar1 = FUN_14001cc68(0x80,0x10);
      local_138 = *(undefined4 *)(param_4 + 0x60);
      local_130 = (ulonglong)(iVar6 - 1) << 4 == lVar2;
      FUN_148fae3e6(uVar1,*(undefined8 *)(lVar7 + 0x38),*(longlong *)(param_4 + 0x68) + lVar2,
                    param_4 + 0x78);
      FUN_1410d2116(*(undefined8 *)(*(longlong *)(lVar7 + 0x38) + 0x210),uVar1);
      lVar2 = lVar2 + 0x10;
    } while (lVar3 != lVar2);
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1411632c2(&local_98);
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fae1ae FUN_148fae1ae body=311 status=ok
// SIG undefined FUN_148fae1ae(void)

void FUN_148fae1ae(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  lVar3 = FUN_148fae6dc(param_1,param_2);
  if ((lVar3 == 0) ||
     ((*(longlong *)(lVar3 + 0x20) == -1 && ((*(uint *)(lVar3 + 0x28) & 0xfffffffe) == 2)))) {
    iVar2 = *(int *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x48) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x4c) < iVar2 + 1U) {
      FUN_148fb9dbc((longlong *)(param_1 + 0x40),iVar2);
    }
    lVar3 = *(longlong *)(param_1 + 0x40);
    lVar5 = (longlong)iVar2 * 0x30;
    puVar1 = (undefined8 *)(lVar3 + lVar5);
    *(undefined8 *)(lVar3 + lVar5) = 0;
    iVar2 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(lVar3 + 8 + lVar5) = iVar2;
    if ((longlong)iVar2 == 0) {
      *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(puVar1,iVar2,0);
      memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
    }
    *(undefined4 *)(puVar1 + 2) = param_3;
    *(undefined4 *)((longlong)puVar1 + 0x14) = param_4;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[4] = 0xffffffffffffffff;
    *(undefined4 *)(puVar1 + 5) = 1;
    lVar3 = *(longlong *)(param_1 + 0x38);
    uVar4 = FUN_14001cc68(0x60,0x10);
    FUN_148fae7b2(uVar4,lVar3,param_2,param_3,param_4);
    FUN_1410d2116(*(undefined8 *)(lVar3 + 0x210),uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x000148fae20c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  return;
}



// FUNCTION 148fae2e6 FUN_148fae2e6 body=254 status=ok
// SIG undefined FUN_148fae2e6(void)

undefined8 *
FUN_148fae2e6(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_LAB_14ba46e70;
  QueryPerformanceCounter(&local_38);
  param_1[1] = (double)local_38.QuadPart * DAT_14c83f420 + 16777216.0;
  *param_1 = &PTR_LAB_14ba46e30;
  param_1[2] = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_14ba44ba0;
  *(undefined1 *)(param_1 + 5) = 0;
  FUN_140df9946(param_3,param_1 + 6);
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  FUN_140c39ec6(param_1 + 8,param_4);
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fae3e6 FUN_148fae3e6 body=343 status=ok
// SIG undefined FUN_148fae3e6(void)

undefined8 *
FUN_148fae3e6(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined4 param_5,undefined1 param_6)

{
  int iVar1;
  void *pvVar2;
  undefined1 auStack_68 [40];
  LARGE_INTEGER local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_LAB_14ba46e70;
  QueryPerformanceCounter(&local_40);
  param_1[1] = (double)local_40.QuadPart * DAT_14c83f420 + 16777216.0;
  *param_1 = &PTR_LAB_14ba46e30;
  param_1[2] = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_14ba44c60;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  iVar1 = *(int *)(param_3 + 1);
  pvVar2 = (void *)*param_3;
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[8] = 0;
  iVar1 = *(int *)(param_4 + 1);
  pvVar2 = (void *)*param_4;
  *(int *)(param_1 + 9) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy((void *)param_1[8],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = param_5;
  *(undefined1 *)(param_1 + 0xf) = param_6;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fae53e FUN_148fae53e body=203 status=ok
// SIG undefined FUN_148fae53e(void)

undefined8 FUN_148fae53e(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar3 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764850);
  (**(code **)(*(longlong *)*puVar3 + 0x10))((longlong *)*puVar3,local_40);
  FUN_140adf1ea(&local_38,local_40);
  uVar4 = FUN_14001cc68(0x48,0x10);
  FUN_148fae60a(uVar4,*(undefined8 *)(param_1 + 0x38),param_2,local_38);
  FUN_1410d2116(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x210),uVar4);
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
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fae60a FUN_148fae60a body=204 status=ok
// SIG undefined FUN_148fae60a(void)

undefined8 *
FUN_148fae60a(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_LAB_14ba46e70;
  QueryPerformanceCounter(&local_38);
  param_1[1] = (double)local_38.QuadPart * DAT_14c83f420 + 16777216.0;
  *param_1 = &PTR_LAB_14ba46e30;
  param_1[2] = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_14ba44db0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = *param_3;
  FUN_140df9946(param_4,param_1 + 7);
  *param_1 = &PTR_FUN_14ba44f70;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fae6dc FUN_148fae6dc body=214 status=ok
// SIG undefined FUN_148fae6dc(void)

longlong * FUN_148fae6dc(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  ushort uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ushort uVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  if ((longlong)*(int *)(param_1 + 0x48) < 1) {
LAB_148fae78b:
    plVar3 = (longlong *)0x0;
LAB_148fae78d:
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
    return plVar3;
  }
  iVar1 = (int)param_2[1];
  lVar5 = 0;
LAB_148fae71b:
  plVar3 = (longlong *)(*(longlong *)(param_1 + 0x40) + lVar5 * 0x30);
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x40) + 8 + lVar5 * 0x30);
  if (iVar2 == iVar1) {
    if (1 < iVar1) {
      lVar9 = 0;
      do {
        uVar7 = *(ushort *)(*plVar3 + lVar9);
        uVar8 = (ulonglong)uVar7;
        uVar4 = *(ushort *)(*param_2 + lVar9);
        if (uVar7 == uVar4) {
          if (uVar7 == 0) break;
        }
        else {
          if (0x7f < (uVar4 | uVar7)) goto LAB_148fae7a8;
          uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
          uVar6 = (ulonglong)uVar4;
          uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
          if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[uVar6]) goto LAB_148fae7a8;
        }
        lVar9 = lVar9 + 2;
      } while( true );
    }
  }
  else if (iVar2 + iVar1 != 1) goto LAB_148fae783;
  goto LAB_148fae78d;
LAB_148fae7a8:
  if (uVar7 == uVar4) goto LAB_148fae78d;
LAB_148fae783:
  lVar5 = lVar5 + 1;
  if (lVar5 == *(int *)(param_1 + 0x48)) goto LAB_148fae78b;
  goto LAB_148fae71b;
}



// FUNCTION 148fae7b2 FUN_148fae7b2 body=256 status=ok
// SIG undefined FUN_148fae7b2(void)

undefined8 *
FUN_148fae7b2(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
             undefined4 param_5)

{
  int iVar1;
  void *_Src;
  undefined1 auStack_68 [40];
  LARGE_INTEGER local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_LAB_14ba46e70;
  QueryPerformanceCounter(&local_40);
  param_1[1] = (double)local_40.QuadPart * DAT_14c83f420 + 16777216.0;
  *param_1 = &PTR_LAB_14ba46e30;
  param_1[2] = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_14ba44fd0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  iVar1 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],_Src,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 8) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x44) = param_5;
  *(undefined1 *)(param_1 + 0xb) = 0;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fae8b4 FUN_148fae8b4 body=106 status=ok
// SIG undefined FUN_148fae8b4(void)

undefined8 * FUN_148fae8b4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
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
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  return param_1;
}



// FUNCTION 148fae91e FUN_148fae91e body=240 status=ok
// SIG undefined FUN_148fae91e(void)

undefined8 * FUN_148fae91e(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  undefined1 auStack_58 [40];
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_LAB_14ba46e70;
  QueryPerformanceCounter(&local_30);
  param_1[1] = (double)local_30.QuadPart * DAT_14c83f420 + 16777216.0;
  *param_1 = &PTR_LAB_14ba46e30;
  param_1[2] = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_14ba44fd0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  iVar1 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],_Src,(longlong)iVar1 * 2);
  }
  param_1[8] = 1;
  *(undefined1 *)(param_1 + 0xb) = 1;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148faea10 FUN_148faea10 body=186 status=ok
// SIG undefined FUN_148faea10(void)

undefined8 * FUN_148faea10(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  param_1[6] = 2;
  *param_1 = &PTR_FUN_14ba42bd0;
  puVar1 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764890);
  param_1[7] = *puVar1;
  param_1[8] = param_2;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return param_1;
}



// FUNCTION 148faeaca FUN_148faeaca body=238 status=ok
// SIG undefined FUN_148faeaca(void)

longlong * FUN_148faeaca(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  lVar1 = (**(code **)(*param_1 + 0x20))(0,param_3);
  if (((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x100), lVar1 != 0)) &&
     ((*(uint *)(lVar1 + 8) & 0xfffffffe) == 2)) {
    (**(code **)(**(longlong **)(lVar1 + 0x10) + 0x80))(*(longlong **)(lVar1 + 0x10),&local_38,1);
    puVar2 = local_38;
    if (local_30 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_28,L"-SteamConnectIP=%s",puVar2);
    if (&local_28 == param_2) {
      if (local_28 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      *param_2 = local_28;
      local_28 = 0;
      param_2[1] = local_20;
      local_20 = 0;
    }
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148faebba FUN_148faebba body=141 status=ok
// SIG undefined FUN_148faebba(void)

undefined8
FUN_148faebba(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  wchar_t *_Str;
  
  plVar3 = (longlong *)SteamInternal_ContextInit(&PTR_FUN_14c764830);
  if (*plVar3 != 0) {
    puVar4 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764830);
    iVar1 = (**(code **)(*(longlong *)*puVar4 + 0x48))();
    if (*(int *)(param_4 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)*param_4;
    }
    iVar2 = _wtoi(_Str);
    if (iVar1 == iVar2) {
                    /* WARNING: Could not recover jumptable at 0x000148faec34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (**(code **)(*param_1 + 0x68))(param_1,param_3,param_5);
      return uVar5;
    }
  }
  return 1;
}



// FUNCTION 148faec48 FUN_148faec48 body=131 status=ok
// SIG undefined FUN_148faec48(void)

void FUN_148faec48(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *param_1 = &PTR_FUN_14ba42c80;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = param_2;
  return;
}



// FUNCTION 148faecd0 FUN_148faecd0 body=291 status=ok
// SIG undefined FUN_148faecd0(void)

void FUN_148faecd0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  local_50 = 0;
  local_60 = param_1;
  FUN_14666fadc(&local_58,param_4);
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  local_40 = 3;
  *local_48 = &PTR_LAB_14b438ec0;
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
  local_48[2] = lVar2;
  *local_48 = &PTR_FUN_14ba45fd0;
  local_48[3] = local_60;
  local_48[4] = 0;
  *(undefined4 *)(local_48 + 5) = 0;
  FUN_14666fadc(local_48 + 4,&local_58);
  (**(code **)(*param_1 + 0x18))(param_1,param_2,param_3,&local_48);
  FUN_1449db362(&local_48);
  FUN_1449db362(&local_58);
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148faedf6 FUN_148faedf6 body=252 status=ok
// SIG undefined FUN_148faedf6(void)

void FUN_148faedf6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined8 *)(param_1 + 200);
  local_40 = 0;
  local_38 = 0;
  FUN_148fba690(&local_40,param_4);
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  local_28 = 3;
  *local_30 = &PTR_LAB_149e020b0;
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
  *local_30 = &PTR_FUN_14ba46040;
  local_30[3] = 0;
  *(undefined4 *)(local_30 + 4) = 0;
  FUN_148fba690(local_30 + 3,&local_40);
  FUN_145c398c4(uVar1,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(&local_40);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148faeef4 FUN_148faeef4 body=277 status=ok
// SIG undefined FUN_148faeef4(void)

void FUN_148faeef4(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1[0x19];
  local_48 = 0;
  local_40 = 0;
  FUN_148fba8e8(&local_48,param_4);
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_149e020b0;
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
  *local_38 = &PTR_FUN_14ba46140;
  local_38[3] = 0;
  *(undefined4 *)(local_38 + 4) = 0;
  FUN_148fba8e8(local_38 + 3,&local_48);
  FUN_145c398c4(lVar1,&local_38);
  FUN_1449db362(&local_38);
  FUN_1449db362(&local_48);
  (**(code **)(*param_1 + 0xd0))(param_1);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148faf00a FUN_148faf00a body=272 status=ok
// SIG undefined FUN_148faf00a(void)

undefined8 FUN_148faf00a(undefined8 *param_1)

{
  longlong lVar1;
  undefined7 uVar2;
  undefined2 *puVar3;
  ulonglong uVar4;
  ushort uVar5;
  ushort uVar6;
  ulonglong uVar7;
  
  if (*(int *)(param_1 + 1) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*param_1;
  }
  lVar1 = 0;
  while( true ) {
    uVar5 = *(ushort *)((longlong)puVar3 + lVar1);
    uVar4 = (ulonglong)uVar5;
    uVar6 = *(ushort *)((longlong)L"Direct" + lVar1);
    if (uVar5 != uVar6) break;
    if (uVar5 == 0) goto LAB_148faf10f;
LAB_148faf045:
    lVar1 = lVar1 + 2;
  }
  if ((uVar6 | uVar5) < 0x80) {
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
    uVar7 = (ulonglong)uVar6;
    uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
    if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar7]) goto LAB_148faf045;
  }
  if (uVar5 != uVar6) {
    lVar1 = 0;
    goto LAB_148faf07e;
  }
LAB_148faf10f:
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
LAB_148faf07e:
  uVar5 = *(ushort *)((longlong)puVar3 + lVar1);
  uVar4 = (ulonglong)uVar5;
  uVar6 = *(ushort *)((longlong)&DAT_14ba43958 + lVar1);
  uVar2 = (undefined7)((ulonglong)lVar1 >> 8);
  if (uVar5 != uVar6) {
    if ((uVar6 | uVar5) < 0x80) {
      uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
      uVar7 = (ulonglong)uVar6;
      uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
      if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar7]) goto LAB_148faf093;
    }
    if (uVar5 == uVar6) {
      return CONCAT71(uVar2,2);
    }
    lVar1 = 0;
    goto LAB_148faf0ca;
  }
  if (uVar5 == 0) {
    return CONCAT71(uVar2,2);
  }
LAB_148faf093:
  lVar1 = lVar1 + 2;
  goto LAB_148faf07e;
LAB_148faf0ca:
  uVar5 = *(ushort *)((longlong)puVar3 + lVar1);
  uVar4 = (ulonglong)uVar5;
  uVar6 = *(ushort *)((longlong)L"PartnerHosted" + lVar1);
  if (uVar5 != uVar6) {
    if ((uVar6 | uVar5) < 0x80) {
      uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
      uVar7 = (ulonglong)uVar6;
      uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
      if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar7]) goto LAB_148faf0df;
    }
    if (uVar5 != uVar6) {
      return 0;
    }
LAB_148faf116:
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),3);
  }
  if (uVar5 == 0) goto LAB_148faf116;
LAB_148faf0df:
  lVar1 = lVar1 + 2;
  goto LAB_148faf0ca;
}



// FUNCTION 148faf11a FUN_148faf11a body=165 status=ok
// SIG undefined FUN_148faf11a(void)

undefined8 FUN_148faf11a(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 uVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined2 *local_50;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148fbff84(&local_40,(int)param_1[8]);
  local_50 = local_40;
  if (local_38 == 0) {
    local_50 = &DAT_149dfb77a;
  }
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x34);
  lVar2 = param_1[9];
  uVar3 = (**(code **)(*param_1 + 0x30))(param_1);
  local_58 = uVar1;
  FUN_140002266(param_2,
                L"FOnlineAsyncTaskSteamCreateLobby bWasSuccessful: %d LobbyId: %llu LobbyType: %d Result: %s"
                ,uVar3,lVar2);
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148faf1c0 FUN_148faf1c0 body=268 status=ok
// SIG undefined FUN_148faf1c0(void)

ulonglong FUN_148faf1c0(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  char *local_30;
  char local_22;
  char local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar3 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764830);
  plVar1 = (longlong *)*puVar3;
  if (*(char *)(param_1 + 0x28) == '\x01') {
    lVar4 = *(longlong *)(param_1 + 0x20);
  }
  else {
    puVar3 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764910);
    lVar4 = (**(code **)(*(longlong *)*puVar3 + 0x68))
                      ((longlong *)*puVar3,*(undefined4 *)(param_1 + 0x34),
                       *(undefined4 *)(param_1 + 0x38));
    *(longlong *)(param_1 + 0x20) = lVar4;
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  if (lVar4 == 0) {
    LOCK();
    *(undefined4 *)(param_1 + 0x18) = 1;
    UNLOCK();
    LOCK();
    uVar6 = *(uint *)(param_1 + 0x1c);
    *(uint *)(param_1 + 0x1c) = 0;
    uVar5 = (ulonglong)uVar6;
    UNLOCK();
  }
  else {
    local_21 = '\0';
    bVar2 = (**(code **)(*plVar1 + 0x58))(plVar1);
    LOCK();
    *(uint *)(param_1 + 0x18) = (uint)bVar2;
    UNLOCK();
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x18);
    if (*(uint *)(param_1 + 0x18) != 0) {
      local_30 = &local_22;
      local_38 = 0x201;
      uVar5 = (**(code **)(*plVar1 + 0x68))
                        (plVar1,*(undefined8 *)(param_1 + 0x20),(int *)(param_1 + 0x40),0x10);
      uVar6 = 0;
      if (((((char)uVar5 != '\0') && (local_21 == '\0')) && (local_22 == '\0')) &&
         (*(int *)(param_1 + 0x40) == 1)) {
        uVar6 = (uint)(*(longlong *)(param_1 + 0x48) != 0);
      }
      LOCK();
      *(uint *)(param_1 + 0x1c) = uVar6;
      UNLOCK();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148faf2ce FUN_148faf2ce body=163 status=ok
// SIG undefined FUN_148faf2ce(void)

void FUN_148faf2ce(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined1 auStack_48 [40];
  longlong *local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar3 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x120))();
  if (cVar3 == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x278) + 0x68))
              (*(longlong **)(param_1 + 0x278),&local_20);
    if (local_20 != (longlong *)0x0) {
      iVar4 = 0;
      do {
        (**(code **)(*local_20 + 0x38))(local_20,iVar4);
        iVar4 = iVar4 + 1;
      } while (iVar4 != 4);
    }
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
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148faf372 FUN_148faf372 body=139 status=ok
// SIG undefined FUN_148faf372(void)

void FUN_148faf372(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))(*(longlong **)(param_1 + 0x10),&local_28);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x68))
              (local_28,*(undefined8 *)(param_1 + 0x2c),*(int *)(param_1 + 0x1c) != 0);
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148faf3fe FUN_148faf3fe body=258 status=ok
// SIG undefined FUN_148faf3fe(void)

undefined8 FUN_148faf3fe(longlong *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_98 [32];
  undefined2 *local_78;
  undefined2 *local_70;
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_148fc0d2b(&local_48,(int)param_1[0xb]);
  puVar4 = &DAT_149dfb77a;
  if (local_40 != 0) {
    puVar4 = local_48;
  }
  (**(code **)(*(longlong *)param_1[7] + 0x38))((longlong *)param_1[7],&local_58);
  puVar3 = &DAT_149dfb77a;
  if (local_50 != 0) {
    puVar3 = local_58;
  }
  FUN_1400021e4((longlong)param_1 + 0x2c,&local_68);
  puVar2 = &DAT_149dfb77a;
  if (local_60 != 0) {
    puVar2 = local_68;
  }
  uVar1 = (**(code **)(*param_1 + 0x30))(param_1);
  local_78 = puVar3;
  local_70 = puVar4;
  FUN_140002266(param_2,
                L"FOnlineAsyncTaskSteamJoinLobby bWasSuccessful: %d Session: %s LobbyId: %s Result: %s"
                ,uVar1,puVar2);
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148faf502 FUN_148faf502 body=144 status=ok
// SIG undefined FUN_148faf502(void)

undefined8 FUN_148faf502(longlong *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(param_1 + 5,&local_30);
  puVar2 = local_30;
  if (local_28 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  uVar1 = (**(code **)(*param_1 + 0x30))(param_1);
  FUN_140002266(param_2,L"FOnlineAsyncTaskSteamUpdateLobby bWasSuccessful: %d Session: %s",uVar1,
                puVar2);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148faf594 FUN_148faf594 body=142 status=ok
// SIG undefined FUN_148faf594(void)

void FUN_148faf594(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))(*(longlong **)(param_1 + 0x10),&local_28);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0xb8))
              (local_28,*(undefined8 *)(param_1 + 0x28),*(int *)(param_1 + 0x1c) != 0);
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148faf624 FUN_148faf624 body=272 status=ok
// SIG undefined FUN_148faf624(void)

ulonglong FUN_148faf624(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  char *local_30;
  char local_1a;
  char local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar3 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764830);
  plVar1 = (longlong *)*puVar3;
  if (*(char *)(param_1 + 0x28) == '\x01') {
    lVar4 = *(longlong *)(param_1 + 0x20);
  }
  else {
    puVar3 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764910);
    lVar4 = (**(code **)(*(longlong *)*puVar3 + 0x70))
                      ((longlong *)*puVar3,*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x18));
    *(longlong *)(param_1 + 0x20) = lVar4;
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  if (lVar4 == 0) {
    LOCK();
    *(undefined4 *)(param_1 + 0x18) = 1;
    UNLOCK();
    LOCK();
    uVar6 = *(uint *)(param_1 + 0x1c);
    *(uint *)(param_1 + 0x1c) = 0;
    uVar5 = (ulonglong)uVar6;
    UNLOCK();
  }
  else {
    local_19 = '\0';
    bVar2 = (**(code **)(*plVar1 + 0x58))(plVar1);
    LOCK();
    *(uint *)(param_1 + 0x18) = (uint)bVar2;
    UNLOCK();
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x18);
    if (*(uint *)(param_1 + 0x18) != 0) {
      local_30 = &local_1a;
      local_38 = 0x1f8;
      uVar5 = (**(code **)(*plVar1 + 0x68))
                        (plVar1,*(undefined8 *)(param_1 + 0x20),param_1 + 0x48,0x18);
      uVar6 = 0;
      if (((((char)uVar5 != '\0') && (local_19 == '\0')) && (local_1a == '\0')) &&
         (*(int *)(param_1 + 0x58) == 1)) {
        uVar5 = *(ulonglong *)(param_1 + 0x38);
        uVar6 = (uint)(*(longlong *)(param_1 + 0x48) == *(longlong *)(uVar5 + 0x18));
      }
      LOCK();
      *(uint *)(param_1 + 0x1c) = uVar6;
      UNLOCK();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148faf736 FUN_148faf736 body=147 status=ok
// SIG undefined FUN_148faf736(void)

void FUN_148faf736(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))(*(longlong **)(param_1 + 0x10),&local_28);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x230))
              (local_28,*(undefined8 *)(param_1 + 0x2c),(*(int *)(param_1 + 0x1c) == 0) * '\x05');
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148faf7ca FUN_148faf7ca body=203 status=ok
// SIG undefined FUN_148faf7ca(void)

undefined8 FUN_148faf7ca(longlong *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*(longlong *)param_1[6] + 0x38))((longlong *)param_1[6],&local_40);
  puVar3 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar3 = local_40;
  }
  FUN_1400021e4(param_1 + 5,&local_50);
  puVar2 = &DAT_149dfb77a;
  if (local_48 != 0) {
    puVar2 = local_50;
  }
  uVar1 = (**(code **)(*param_1 + 0x30))(param_1);
  local_58 = puVar3;
  FUN_140002266(param_2,
                L"FOnlineAsyncTaskSteamLeaveLobby bWasSuccessful: %d SessionName: %s LobbyId: %s",
                uVar1,puVar2);
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148faf896 FUN_148faf896 body=50 status=ok
// SIG undefined FUN_148faf896(void)

undefined8 FUN_148faf896(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x44);
  uVar2 = (**(code **)(*param_1 + 0x30))();
  FUN_140002266(param_2,
                L"FOnlineAsyncTaskSteamFindLobbiesForFindSessions bWasSuccessful: %d NumResults: %d"
                ,uVar2,uVar1);
  return param_2;
}



// FUNCTION 148faf8c8 FUN_148faf8c8 body=135 status=ok
// SIG undefined FUN_148faf8c8(void)

void FUN_148faf8c8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))(*(longlong **)(param_1 + 0x10),&local_28);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x1a0))(local_28,*(int *)(param_1 + 0x1c) != 0);
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148faf950 FUN_148faf950 body=54 status=ok
// SIG undefined FUN_148faf950(void)

undefined8 FUN_148faf950(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  
  uVar1 = *(undefined8 *)param_1[9];
  uVar2 = (**(code **)(*param_1 + 0x30))();
  FUN_140002266(param_2,
                L"FOnlineAsyncTaskSteamFindLobbiesForInviteSession bWasSuccessful: %d Lobby ID: %llu"
                ,uVar2,uVar1);
  return param_2;
}



// FUNCTION 148faf986 FUN_148faf986 body=724 status=ok
// SIG undefined FUN_148faf986(void)

void FUN_148faf986(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined ***pppuVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined1 auStack_1e8 [32];
  undefined ***local_1c8;
  undefined1 local_1b8 [8];
  undefined8 local_1b0;
  longlong *local_1a8;
  undefined8 local_1a0;
  undefined1 local_198;
  undefined7 uStack_197;
  longlong *local_190;
  undefined8 uStack_188;
  undefined4 local_180;
  undefined1 local_178;
  undefined4 local_174;
  undefined **local_170;
  longlong *local_168;
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
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  if ((*(int *)(param_1 + 0x1c) == 0) || (*(int *)(*(longlong *)(param_1 + 0x30) + 0x10) < 1)) {
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
    local_198 = 0;
    local_190 = (longlong *)0x0;
    uStack_188 = 0;
    local_180 = 0;
    FUN_140c3a228(&local_198,L"SessionDoesNotExist");
    local_178 = 0;
    local_174 = 0xffffffff;
    FUN_1446f470e(&local_1a0,L"ErrorCode",1);
    FUN_145b2079c(&local_138,local_1a0,&local_198);
    FUN_140c3a2ac(&local_198);
    puVar5 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764850);
    (**(code **)(*(longlong *)*puVar5 + 0x10))((longlong *)*puVar5,local_1b8);
    FUN_140adf1ea(&local_198,local_1b8);
    local_1b0 = CONCAT71(uStack_197,local_198);
    local_1a8 = local_190;
    if (local_190 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_190 + 1) = (int)local_190[1] + 1;
      UNLOCK();
    }
    local_1c8 = &local_160;
    FUN_1461d94ec(param_1 + 0x60,*(int *)(param_1 + 0x1c) != 0,*(undefined4 *)(param_1 + 0x58),
                  &local_1b0);
    plVar4 = local_190;
    if (local_190 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_190 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_190)(local_190);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    FUN_14124efea(&local_160);
  }
  else {
    pppuVar3 = *(undefined ****)(*(longlong *)(param_1 + 0x30) + 8);
    puVar5 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764850);
    (**(code **)(*(longlong *)*puVar5 + 0x10))((longlong *)*puVar5,&local_198);
    FUN_140adf1ea(&local_160,&local_198);
    local_170 = local_160;
    local_168 = local_158;
    if (local_158 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_158 + 1) = (int)local_158[1] + 1;
      UNLOCK();
    }
    local_1c8 = pppuVar3;
    FUN_1461d94ec(param_1 + 0x60,*(int *)(param_1 + 0x1c) != 0,*(undefined4 *)(param_1 + 0x58),
                  &local_170);
    plVar4 = local_158;
    if (local_158 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_158 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_158)(local_158);
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
  if ((local_40 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fafc5c FUN_148fafc5c body=54 status=ok
// SIG undefined FUN_148fafc5c(void)

undefined8 FUN_148fafc5c(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  
  uVar1 = *(undefined8 *)param_1[9];
  uVar2 = (**(code **)(*param_1 + 0x30))();
  FUN_140002266(param_2,
                L"FOnlineAsyncTaskSteamFindLobbiesForFriendSession bWasSuccessful: %d Lobby ID: %llu"
                ,uVar2,uVar1);
  return param_2;
}



// FUNCTION 148fafc92 FUN_148fafc92 body=165 status=ok
// SIG undefined FUN_148fafc92(void)

void FUN_148fafc92(longlong param_1)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(param_1 + 0x1c) != 0) && (0 < *(int *)(*(longlong *)(param_1 + 0x30) + 0x10))) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  local_38 = 0;
  uStack_30 = 0;
  FUN_145fee3b0(param_1 + 0x60,*(undefined4 *)(param_1 + 0x58),*(int *)(param_1 + 0x1c) != 0,
                &local_38);
  FUN_145fee2f2(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fafd50 FUN_148fafd50 body=185 status=ok
// SIG undefined FUN_148fafd50(void)

undefined8 FUN_148fafd50(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x38))(*(longlong **)(param_1 + 0x18),&local_38);
  puVar2 = &DAT_149dfb77a;
  if (local_30 != 0) {
    puVar2 = local_38;
  }
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x38))(*(longlong **)(param_1 + 0x28),&local_48);
  puVar1 = &DAT_149dfb77a;
  if (local_40 != 0) {
    puVar1 = local_48;
  }
  FUN_140002266(param_2,L"FOnlineAsyncEventSteamLobbyInviteAccepted LobbyId: %s Friend: %s",puVar1,
                puVar2);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fafe0a FUN_148fafe0a body=142 status=ok
// SIG undefined FUN_148fafe0a(void)

undefined8 *
FUN_148fafe0a(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
             undefined4 param_5,undefined8 *param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  FUN_148fb78f4(param_1,param_2,param_4);
  *param_1 = &PTR_FUN_14ba451b0;
  *(undefined4 *)(param_1 + 0xb) = param_5;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 2;
  if (param_1 + 0xc != param_6) {
    FUN_148fb79fa(param_1 + 0xc,param_6);
  }
  puVar3 = (undefined8 *)(**(code **)(*param_3 + 0x18))(param_3);
  uVar2 = *puVar3;
  iVar1 = *(int *)(param_1 + 10);
  *(uint *)(param_1 + 10) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0x54) < iVar1 + 1U) {
    FUN_148fb7b2c(param_1 + 9,iVar1);
  }
  *(undefined8 *)(param_1[9] + (longlong)iVar1 * 8) = uVar2;
  *(undefined1 *)(param_1 + 8) = 2;
  return param_1;
}



// FUNCTION 148fafe98 FUN_148fafe98 body=158 status=ok
// SIG undefined FUN_148fafe98(void)

undefined8 FUN_148fafe98(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined1 auStack_158 [32];
  undefined1 local_138 [256];
  longlong local_38;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  local_38 = 0;
  FUN_1446e6fe8(local_138,"BUILDID",7,1);
  FUN_140002266(param_1,L"%s:%d",local_30,uVar1);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148faff37 FUN_148faff37 body=114 status=ok
// SIG undefined FUN_148faff37(void)

undefined8 * FUN_148faff37(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  
  bVar1 = *(byte *)(param_2 + 0x10);
  bVar2 = *(byte *)(param_2 + 0x11);
  bVar3 = *(byte *)(param_2 + 0x12);
  bVar4 = *(byte *)(param_2 + 0x13);
  bVar5 = *(byte *)(param_2 + 0x14);
  bVar6 = *(byte *)(param_2 + 0x15);
  bVar7 = *(byte *)(param_2 + 0x16);
  bVar8 = *(byte *)(param_2 + 0x17);
  bVar9 = *(byte *)(param_2 + 0x18);
  bVar10 = *(byte *)(param_2 + 0x19);
  *param_1 = 0;
  param_1[1] = 0;
  FUN_144a83b10(param_1,(uint)bVar10 << 9 | (uint)bVar9 << 8 | (uint)bVar8 << 7 | (uint)bVar7 << 6 |
                        (uint)bVar6 << 5 |
                        (uint)bVar5 << 4 |
                        (uint)bVar1 + (uint)bVar2 * 2 + (uint)bVar3 * 4 + (uint)bVar4 * 8);
  return param_1;
}



// FUNCTION 148faffa9 FUN_148faffa9 body=650 status=ok
// SIG undefined FUN_148faffa9(void)

void FUN_148faffa9(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  char cVar5;
  undefined2 *puVar6;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined2 *local_98 [2];
  undefined2 *local_88;
  int local_80;
  ulonglong local_78 [3];
  undefined1 local_5c [4];
  undefined2 **local_58;
  ulonglong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar4 = FUN_1401e3228(&DAT_14cb8e468);
  cVar2 = *(char *)(param_1 + 0x40);
  if (cVar2 == '\0' && (DAT_14c872ce0 != 0 && lVar4 != 0)) {
    local_58 = (undefined2 **)((ulonglong)local_58 & 0xffffffffffffff00);
    local_78[0] = local_78[0] & 0xffffffffffffff00;
    local_a8 = &DAT_14c872ce8;
    FUN_14052bb08(DAT_14c872ce0,L"OnlineSubsystemSteam",L"bAllowP2PPacketRelay",&local_58);
    local_a8 = &DAT_14c872ce8;
    cVar2 = FUN_14052bb08(DAT_14c872ce0,L"OnlineSubsystemSteam",L"bUseSteamNetworking",local_78);
    cVar5 = '\x02';
    if (cVar2 != '\0') {
      cVar5 = ((byte)local_78[0] & 1) + 1;
    }
    cVar2 = ((byte)local_58 & 1) + 1;
    if (*(char *)(lVar4 + 0xda) != '\0') {
      cVar2 = cVar5;
    }
    *(char *)(param_1 + 0x40) = cVar2;
  }
  if ((byte)(cVar2 - 1U) < 3) {
    puVar6 = (undefined2 *)(&PTR_u_Direct_14ba470f0)[(byte)(cVar2 - 1U)];
  }
  else {
    puVar6 = &DAT_149e01fe8;
  }
  FUN_140056680(&local_88,puVar6);
  puVar6 = local_88;
  if (local_80 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  FUN_140002266(local_78,&DAT_149e0625e,puVar6);
  FUN_1400b22c2(local_98,"CONMETHOD");
  local_58 = local_98;
  local_50 = local_78;
  FUN_1411f1c38(param_2,local_5c,&local_58,0);
  if (local_98[0] != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_88 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x80))(plVar1,local_78,0);
    FUN_1400b22c2(&local_88,&DAT_14ba42dd9);
    local_58 = &local_88;
    local_50 = local_78;
    FUN_1411f1c38(param_2,local_98,&local_58,0);
    if (local_88 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x38))();
    local_78[0] = 0;
    local_78[1] = 0;
    FUN_144a83b10(local_78,uVar3);
    FUN_1400b22c2(&local_88,&DAT_14ba42de1);
    local_58 = &local_88;
    local_50 = local_78;
    FUN_1411f1c38(param_2,local_98,&local_58,0);
    if (local_88 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148fb0234 FUN_148fb0234 body=218 status=ok
// SIG undefined FUN_148fb0234(void)

void FUN_148fb0234(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_88 [40];
  longlong local_60 [2];
  longlong local_50 [2];
  longlong *local_40;
  longlong *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x30))(*(longlong **)(param_1 + 8),local_50);
  FUN_1400b22c2(local_60,"OWNINGID");
  local_40 = local_60;
  local_38 = local_50;
  FUN_1413216f2(param_2,local_2c,&local_40,0);
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_60,"OWNINGNAME");
  local_40 = local_60;
  local_38 = (longlong *)(param_1 + 0x18);
  FUN_1413216f2(param_2,local_2c,&local_40,0);
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fb0310 FUN_148fb0310 body=42 status=ok
// SIG undefined FUN_148fb0310(void)

undefined8 FUN_148fb0310(longlong *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x30))();
  FUN_140002266(param_2,L"FOnlineAsyncTaskSteamCreateServer bWasSuccessful: %d",uVar1);
  return param_2;
}



// FUNCTION 148fb033a FUN_148fb033a body=137 status=ok
// SIG undefined FUN_148fb033a(void)

void FUN_148fb033a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))(*(longlong **)(param_1 + 0x10),&local_28);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x68))
              (local_28,*(undefined8 *)(param_1 + 0x2c),*(int *)(param_1 + 0x1c) != 0);
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fb03c4 FUN_148fb03c4 body=144 status=ok
// SIG undefined FUN_148fb03c4(void)

undefined8 FUN_148fb03c4(longlong *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(param_1 + 5,&local_30);
  puVar2 = local_30;
  if (local_28 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  uVar1 = (**(code **)(*param_1 + 0x30))(param_1);
  FUN_140002266(param_2,L"FOnlineAsyncTaskSteamUpdateServer bWasSuccessful: %d Session: %s",uVar1,
                puVar2);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148fb0456 FUN_148fb0456 body=140 status=ok
// SIG undefined FUN_148fb0456(void)

void FUN_148fb0456(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))(*(longlong **)(param_1 + 0x10),&local_28);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0xb8))
              (local_28,*(undefined8 *)(param_1 + 0x28),*(int *)(param_1 + 0x1c) != 0);
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fb04e4 FUN_148fb04e4 body=42 status=ok
// SIG undefined FUN_148fb04e4(void)

undefined8 FUN_148fb04e4(longlong *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x30))();
  FUN_140002266(param_2,L"FOnlineAsyncTaskSteamLogoffServer bWasSuccessful: %d",uVar1);
  return param_2;
}



// FUNCTION 148fb050e FUN_148fb050e body=452 status=ok
// SIG undefined FUN_148fb050e(void)

BOOL FUN_148fb050e(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  LARGE_INTEGER LVar4;
  BOOL BVar5;
  BOOL BVar6;
  undefined8 *puVar7;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  float local_44;
  LARGE_INTEGER local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0x28) == '\0') {
    puVar7 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764810);
    (**(code **)(*(longlong *)*puVar7 + 0xc0))((longlong *)*puVar7,0);
    puVar7 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764810);
    (**(code **)(*(longlong *)*puVar7 + 0x38))();
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))(*(longlong **)(param_1 + 0x10),&local_40);
  LVar4 = local_40;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_38 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  if ((*(char *)(LVar4.QuadPart + 0x2c8) == '\0') && (*(longlong *)(LVar4.QuadPart + 0x2d0) == 0)) {
    LOCK();
    *(undefined4 *)(param_1 + 0x18) = 1;
    UNLOCK();
    BVar6 = 1;
  }
  else {
    local_44 = 15.0;
    local_58 = &DAT_14c872ce8;
    FUN_14153841e(DAT_14c872ce0,L"OnlineSubsystemSteam",L"OnlineAsyncTaskSteamLogoffServerTimeout",
                  &local_44);
    BVar5 = QueryPerformanceCounter(&local_40);
    if (((double)local_40.QuadPart * DAT_14c83f420 + 16777216.0) - *(double *)(param_1 + 8) <
        (double)local_44) goto LAB_148fb067f;
    *(undefined1 *)(LVar4.QuadPart + 0x2c8) = 0;
    *(undefined8 *)(LVar4.QuadPart + 0x2d0) = 0;
    plVar3 = *(longlong **)(LVar4.QuadPart + 0x2d8);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(LVar4.QuadPart + 0x2d8) = 0;
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
    LOCK();
    *(undefined4 *)(param_1 + 0x18) = 1;
    UNLOCK();
    BVar6 = 0;
  }
  LOCK();
  BVar5 = *(BOOL *)(param_1 + 0x1c);
  *(BOOL *)(param_1 + 0x1c) = BVar6;
  UNLOCK();
LAB_148fb067f:
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      BVar5 = (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        BVar5 = (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return BVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fb06d4 FUN_148fb06d4 body=121 status=ok
// SIG undefined FUN_148fb06d4(void)

void FUN_148fb06d4(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *(longlong *)(*param_1 + (longlong)(int)param_2 * 8);
  if (lVar1 != 0) {
    FUN_148fbaabe(lVar1);
    FUN_1400020a8(lVar1);
  }
  iVar2 = (int)param_1[1];
  iVar3 = ~param_2 + iVar2;
  if (iVar3 != 0) {
    iVar4 = 1;
    if (iVar3 < 1) {
      iVar4 = iVar3;
    }
    memmove((void *)(*param_1 + (longlong)(int)param_2 * 8),
            (void *)(*param_1 + (longlong)(iVar2 - iVar4) * 8),(longlong)iVar4 << 3);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  FUN_140380544(param_1);
  return;
}



// FUNCTION 148fb074e FUN_148fb074e body=1640 status=ok
// SIG undefined FUN_148fb074e(void)

void FUN_148fb074e(longlong param_1,undefined8 *param_2,int *param_3)

{
  wchar_t *pwVar1;
  char cVar2;
  char *_Dest;
  size_t sVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_1f8 [32];
  undefined8 local_1d8;
  undefined8 local_1d0;
  int local_1c4;
  undefined8 local_1c0;
  undefined8 local_1b8;
  int local_1ac;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  wchar_t *local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  wchar_t *local_168;
  undefined8 uStack_160;
  int local_150 [32];
  longlong local_d0;
  char *local_c8;
  undefined4 local_c0;
  undefined **local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  int local_7c;
  longlong local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_b8 = &PTR_FUN_14b4c3a98;
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_84 = 0xffffffff00000080;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  FUN_148fb7c12(&local_b0,*(longlong *)(param_1 + 0x58) + 0x28);
  iVar5 = (int)uStack_a8 - local_7c;
  lVar6 = (longlong)(iVar5 + 1) * 0x200;
  lVar4 = -1;
  if (-2 < iVar5) {
    lVar4 = lVar6 + (ulonglong)(lVar6 == 0);
  }
  _Dest = (char *)FUN_14001cc68(lVar4,0x10);
  if (iVar5 != -1) {
    lVar4 = 0;
    do {
      _Dest[lVar4 + 0x100] = '\0';
      _Dest[lVar4] = '\0';
      lVar4 = lVar4 + 0x200;
    } while (lVar6 != lVar4);
  }
  *param_2 = _Dest;
  *param_3 = 0;
  strncpy(_Dest,"gamedir",0x100);
  _Dest[0xff] = '\0';
  strncpy(_Dest + 0x100,"unrealtest",0x100);
  _Dest[0x1ff] = '\0';
  *param_3 = 1;
  local_168 = (wchar_t *)0x0;
  uStack_160 = 0;
  FUN_1446f470e(&local_170,L"MAPNAME",1);
  cVar2 = FUN_1489b86b0(&local_b8,local_170,&local_168);
  if ((cVar2 != '\0') && (1 < (int)uStack_160)) {
    iVar5 = *param_3;
    lVar4 = (longlong)iVar5;
    strncpy(_Dest + lVar4 * 0x200,"map",0x100);
    pwVar1 = local_168;
    _Dest[lVar4 * 0x200 + 0xff] = '\0';
    local_d0 = 0;
    if (local_168 == (wchar_t *)0x0) {
      local_c8 = (char *)0x0;
      local_c0 = 0;
    }
    else {
      sVar3 = wcslen(local_168);
      FUN_1449b853c(local_150,pwVar1,sVar3 & 0xffffffff,1);
      iVar5 = *param_3;
      lVar4 = (longlong)iVar5;
    }
    lVar6 = local_d0;
    strncpy(_Dest + lVar4 * 0x200 + 0x100,local_c8,0x100);
    _Dest[lVar4 * 0x200 + 0x1ff] = '\0';
    if (lVar6 != 0) {
      FUN_1400020a8(lVar6);
      iVar5 = *param_3;
    }
    *param_3 = iVar5 + 1;
  }
  FUN_1446f470e(&local_178,L"MAPNAME",1);
  FUN_148fbab7c(&local_b0,local_178);
  local_188 = (wchar_t *)0x0;
  uStack_180 = 0;
  FUN_1446f470e(&local_190,L"SteamHostIp",1);
  cVar2 = FUN_1489b86b0(&local_b8,local_190,&local_188);
  if ((cVar2 != '\0') && (1 < (int)uStack_180)) {
    iVar5 = *param_3;
    lVar4 = (longlong)iVar5;
    strncpy(_Dest + lVar4 * 0x200,"gameaddr",0x100);
    pwVar1 = local_188;
    _Dest[lVar4 * 0x200 + 0xff] = '\0';
    local_d0 = 0;
    if (local_188 == (wchar_t *)0x0) {
      local_c8 = (char *)0x0;
      local_c0 = 0;
    }
    else {
      sVar3 = wcslen(local_188);
      FUN_1449b853c(local_150,pwVar1,sVar3 & 0xffffffff,1);
      iVar5 = *param_3;
      lVar4 = (longlong)iVar5;
    }
    lVar6 = local_d0;
    strncpy(_Dest + lVar4 * 0x200 + 0x100,local_c8,0x100);
    _Dest[lVar4 * 0x200 + 0x1ff] = '\0';
    if (lVar6 != 0) {
      FUN_1400020a8(lVar6);
      iVar5 = *param_3;
    }
    *param_3 = iVar5 + 1;
  }
  FUN_1446f470e(&local_198,L"SteamHostIp",1);
  FUN_148fbab7c(&local_b0,local_198);
  local_150[0] = 0;
  FUN_1446f470e(&local_1a0,L"DEDICATEDONLY",1);
  cVar2 = FUN_1489b860c(&local_b8,local_1a0,local_150);
  if ((cVar2 != '\0') && (local_150[0] != 0)) {
    iVar5 = *param_3;
    lVar4 = (longlong)iVar5 * 0x200;
    strncpy(_Dest + lVar4,"dedicated",0x100);
    _Dest[lVar4 + 0xff] = '\0';
    strncpy(_Dest + lVar4 + 0x100,"true",0x100);
    _Dest[lVar4 + 0x1ff] = '\0';
    *param_3 = iVar5 + 1;
  }
  FUN_1446f470e(&local_1a8,L"DEDICATEDONLY",1);
  FUN_148fbab7c(&local_b0,local_1a8);
  local_1ac = 0;
  FUN_1446f470e(&local_1b8,L"SECUREONLY",1);
  cVar2 = FUN_1489b860c(&local_b8,local_1b8,&local_1ac);
  if ((cVar2 != '\0') && (local_1ac != 0)) {
    iVar5 = *param_3;
    lVar4 = (longlong)iVar5 * 0x200;
    strncpy(_Dest + lVar4,"secure",0x100);
    _Dest[lVar4 + 0xff] = '\0';
    strncpy(_Dest + lVar4 + 0x100,"true",0x100);
    _Dest[lVar4 + 0x1ff] = '\0';
    *param_3 = iVar5 + 1;
  }
  FUN_1446f470e(&local_1c0,L"SECUREONLY",1);
  FUN_148fbab7c(&local_b0,local_1c0);
  local_1c4 = 0;
  FUN_1446f470e(&local_1d0,L"EMPTYONLY",1);
  cVar2 = FUN_1489b860c(&local_b8,local_1d0,&local_1c4);
  if ((cVar2 != '\0') && (local_1c4 != 0)) {
    iVar5 = *param_3;
    lVar4 = (longlong)iVar5 * 0x200;
    strncpy(_Dest + lVar4,"noplayers",0x100);
    _Dest[lVar4 + 0xff] = '\0';
    strncpy(_Dest + lVar4 + 0x100,"true",0x100);
    _Dest[lVar4 + 0x1ff] = '\0';
    *param_3 = iVar5 + 1;
  }
  FUN_1446f470e(&local_1d8,L"EMPTYONLY",1);
  FUN_148fbab7c(&local_b0,local_1d8);
  if (local_188 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_168 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  local_b8 = &PTR_FUN_14b4c3a98;
  local_68 = 0;
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  FUN_148a3feb0(&local_b0);
  if ((local_60 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fb0db8 FUN_148fb0db8 body=190 status=ok
// SIG undefined FUN_148fb0db8(void)

undefined8 * FUN_148fb0db8(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14ba45250;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  puVar2 = (undefined8 *)FUN_14600b90e();
  param_1[3] = *puVar2;
  lVar1 = puVar2[1];
  param_1[4] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = &PTR_FUN_14b4c3b18;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  FUN_145ad316c(param_1 + 0x16);
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 9999;
  return param_1;
}



// FUNCTION 148fb0e76 FUN_148fb0e76 body=151 status=ok
// SIG undefined FUN_148fb0e76(void)

undefined2 * FUN_148fb0e76(undefined2 *param_1)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 0x56) == '\0') {
    uVar1 = *(uint *)(param_1 + 2);
    FUN_14626ea25(&DAT_14cbf4d20 + (ulonglong)DAT_14cbf4e20 * 0x40,0x40,"%u.%u.%u.%u:%i",
                  uVar1 >> 0x18,uVar1 >> 0x10 & 0xff,uVar1 >> 8 & 0xff,uVar1 & 0xff,*param_1);
    param_1 = (undefined2 *)(&DAT_14cbf4d20 + (ulonglong)DAT_14cbf4e20 * 0x40);
    DAT_14cbf4e20 = DAT_14cbf4e20 + 1 & 3;
  }
  else {
    param_1 = param_1 + 0x56;
  }
  return param_1;
}



// FUNCTION 148fb0f0e FUN_148fb0f0e body=62 status=ok
// SIG undefined FUN_148fb0f0e(void)

void FUN_148fb0f0e(longlong param_1,int param_2)

{
  FUN_148fbac74();
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) == param_2) {
    return;
  }
  FUN_1447ab16c(param_1,param_2);
  return;
}



// FUNCTION 148fb0f4e FUN_148fb0f4e body=104 status=ok
// SIG undefined FUN_148fb0f4e(void)

void FUN_148fb0f4e(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  lVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x38))();
  if ((lVar3 != 0) && (*(char *)(lVar3 + 0xd) == '\0')) {
    iVar1 = *(int *)(lVar3 + 0x90);
    puVar4 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764830);
    iVar2 = (**(code **)(*(longlong *)*puVar4 + 0x48))();
    if (iVar1 == iVar2) {
      FUN_1443aa2d0(param_1 + -0x28,lVar3);
      return;
    }
  }
  return;
}



// FUNCTION 148fb0fb6 FUN_148fb0fb6 body=293 status=ok
// SIG undefined FUN_148fb0fb6(void)

void FUN_148fb0fb6(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))(*(longlong **)(param_1 + 0x10),&local_38);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_30 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_30)();
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_30 + 0x10))();
        }
      }
    }
  }
  *(uint *)(*(longlong *)(param_1 + 0x58) + 0x18) = (*(int *)(param_1 + 0x1c) == 0) + 2;
  if ((*(int *)(param_1 + 0x1c) != 0) && (0 < (int)(*(longlong **)(param_1 + 0x58))[2])) {
    (**(code **)(**(longlong **)(param_1 + 0x58) + 8))();
  }
  if ((*(longlong *)(local_38 + 0x2e8) != 0) &&
     (*(longlong *)(param_1 + 0x58) == *(longlong *)(local_38 + 0x2e8))) {
    *(undefined8 *)(local_38 + 0x2e8) = 0;
    plVar3 = *(longlong **)(local_38 + 0x2f0);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(local_38 + 0x2f0) = 0;
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
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fb10dc FUN_148fb10dc body=54 status=ok
// SIG undefined FUN_148fb10dc(void)

undefined8 FUN_148fb10dc(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  
  uVar1 = *(undefined4 *)(param_1[0xb] + 0x10);
  uVar2 = (**(code **)(*param_1 + 0x30))();
  FUN_140002266(param_2,L"FOnlineAsyncTaskSteamFindServerForInvite bWasSuccessful: %d Results: %d",
                uVar2,uVar1);
  return param_2;
}



// FUNCTION 148fb1112 FUN_148fb1112 body=717 status=ok
// SIG undefined FUN_148fb1112(void)

void FUN_148fb1112(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_1c8 [32];
  undefined ***local_1a8;
  undefined1 local_198 [8];
  undefined8 local_190;
  longlong *local_188;
  undefined8 local_180;
  longlong *local_178;
  undefined **local_170;
  longlong *local_168;
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
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if ((longlong)*(int *)(param_1 + 0x80) != 0) {
    lVar6 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_1 + 0x78) + 8 + lVar6) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x78) + lVar6) != 0)) {
        if (-1 < *(int *)(param_1 + 0x70)) {
          if ((*(int *)(param_1 + 0x1c) == 0) ||
             (*(int *)(*(longlong *)(param_1 + 0x58) + 0x10) < 1)) {
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
            puVar5 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764850);
            (**(code **)(*(longlong *)*puVar5 + 0x10))((longlong *)*puVar5,local_198);
            FUN_140adf1ea(&local_190,local_198);
            local_180 = local_190;
            local_178 = local_188;
            if (local_188 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_188 + 1) = (int)local_188[1] + 1;
              UNLOCK();
            }
            local_1a8 = &local_160;
            FUN_1461d94ec(param_1 + 0x78,*(int *)(param_1 + 0x1c) != 0,
                          *(undefined4 *)(param_1 + 0x70),&local_180);
            if (local_188 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_188 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*local_188)(local_188);
                LOCK();
                piVar2 = (int *)((longlong)local_188 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*local_188 + 0x10))(local_188);
                }
              }
            }
            FUN_14124efea(&local_160);
          }
          else {
            pppuVar4 = *(undefined ****)(*(longlong *)(param_1 + 0x58) + 8);
            puVar5 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764850);
            (**(code **)(*(longlong *)*puVar5 + 0x10))((longlong *)*puVar5,&local_190);
            FUN_140adf1ea(&local_160,&local_190);
            local_170 = local_160;
            local_168 = local_158;
            if (local_158 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_158 + 1) = (int)local_158[1] + 1;
              UNLOCK();
            }
            local_1a8 = pppuVar4;
            FUN_1461d94ec(param_1 + 0x78,*(int *)(param_1 + 0x1c) != 0,
                          *(undefined4 *)(param_1 + 0x70),&local_170);
            plVar3 = local_158;
            if (local_158 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_158 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_158)(local_158);
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
        break;
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x80) * 0x10 != lVar6);
  }
  if ((local_40 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fb13e0 FUN_148fb13e0 body=54 status=ok
// SIG undefined FUN_148fb13e0(void)

undefined8 FUN_148fb13e0(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  
  uVar1 = *(undefined4 *)(param_1[0xb] + 0x10);
  uVar2 = (**(code **)(*param_1 + 0x30))();
  FUN_140002266(param_2,L"FOnlineAsyncTaskSteamFindServerForFriend bWasSuccessful: %d Results: %d",
                uVar2,uVar1);
  return param_2;
}



// FUNCTION 148fb1416 FUN_148fb1416 body=223 status=ok
// SIG undefined FUN_148fb1416(void)

void FUN_148fb1416(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((longlong)*(int *)(param_1 + 0x80) != 0) {
    lVar1 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_1 + 0x78) + 8 + lVar1) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x78) + lVar1) != 0)) {
        if (-1 < *(int *)(param_1 + 0x70)) {
          if ((*(int *)(param_1 + 0x1c) != 0) &&
             (0 < *(int *)(*(longlong *)(param_1 + 0x58) + 0x10))) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
          }
          local_38 = 0;
          uStack_30 = 0;
          FUN_145fee3b0(param_1 + 0x78,*(undefined4 *)(param_1 + 0x70),
                        CONCAT71((int7)((ulonglong)lVar1 >> 8),*(int *)(param_1 + 0x1c) != 0),
                        &local_38);
          FUN_145fee2f2(local_38,uStack_30 & 0xffffffff);
          if (local_38 != 0) {
            FUN_1400020a8();
          }
        }
        break;
      }
      lVar1 = lVar1 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x80) * 0x10 != lVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fb150e FUN_148fb150e body=54 status=ok
// SIG undefined FUN_148fb150e(void)

undefined8 FUN_148fb150e(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  
  uVar1 = *(undefined4 *)(param_1[0xb] + 0x10);
  uVar2 = (**(code **)(*param_1 + 0x30))();
  FUN_140002266(param_2,L"FOnlineAsyncTaskSteamFindServers bWasSuccessful: %d Results: %d",uVar2,
                uVar1);
  return param_2;
}



// FUNCTION 148fb1586 FUN_148fb1586 body=95 status=ok
// SIG undefined FUN_148fb1586(void)

undefined8 *
FUN_148fb1586(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 *param_5)

{
  FUN_148fb7d90();
  *param_1 = &PTR_FUN_14ba45280;
  param_1[5] = &PTR_FUN_14ba452d0;
  *(undefined4 *)(param_1 + 0xe) = param_4;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 2;
  if (param_1 + 0xf != param_5) {
    FUN_148fb79fa(param_1 + 0xf,param_5);
  }
  return param_1;
}



// FUNCTION 148fb15e6 FUN_148fb15e6 body=207 status=ok
// SIG undefined FUN_148fb15e6(void)

undefined8 * FUN_148fb15e6(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  uVar2 = *param_2;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_14ba46f50;
  puVar4[3] = uVar2;
  *param_1 = puVar4;
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14ba46fb0;
  plVar5[2] = (longlong)puVar4;
  param_1[1] = plVar5;
  if (puVar4 != (undefined8 *)0x0) {
    if (plVar5 == (longlong *)0x0) {
      puVar4[1] = puVar4;
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      puVar4[1] = puVar4;
      if ((longlong *)puVar4[2] != plVar5) {
        LOCK();
        *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
        UNLOCK();
        plVar3 = (longlong *)puVar4[2];
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))();
          }
        }
        puVar4[2] = plVar5;
      }
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
  return param_1;
}



// FUNCTION 148fb16b6 FUN_148fb16b6 body=431 status=ok
// SIG undefined FUN_148fb16b6(void)

void FUN_148fb16b6(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_88 [47];
  undefined1 local_59;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined4 *)(param_1 + 8) = 4;
  *(undefined1 *)(param_1 + 0x40) = 1;
  local_40 = 0;
  lVar5 = 0;
  do {
    iVar2 = rand();
    *(char *)((longlong)&local_40 + lVar5) = (char)iVar2;
    lVar5 = lVar5 + 1;
  } while (lVar5 != 8);
  FUN_141904fbe(&local_58,&local_40);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  plVar3 = *(longlong **)(param_1 + 0x38);
  *(ulonglong *)(param_1 + 0x30) = CONCAT44(uStack_54,local_58);
  *(ulonglong *)(param_1 + 0x38) = CONCAT44(uStack_4c,uStack_50);
  local_38._0_4_ = (undefined4)uVar4;
  local_38._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  uStack_30._0_4_ = SUB84(plVar3,0);
  uStack_30._4_4_ = (undefined4)((ulonglong)plVar3 >> 0x20);
  local_58 = (undefined4)local_38;
  uStack_54 = local_38._4_4_;
  uStack_50 = (undefined4)uStack_30;
  uStack_4c = uStack_30._4_4_;
  local_38 = uVar4;
  uStack_30 = plVar3;
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
  FUN_1446f470e(&local_58,L"WINDOWS",1);
  plVar3 = (longlong *)FUN_140272950(&local_58);
  uVar4 = FUN_144a82cde();
  (**(code **)(*plVar3 + 0xe0))(plVar3,&local_38,uVar4,&local_59);
  plVar3 = uStack_30;
  if (uStack_30 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x10) = local_38;
    plVar6 = *(longlong **)(param_1 + 0x18);
    if (plVar6 == (longlong *)0x0) goto LAB_148fb180f;
    *(undefined8 *)(param_1 + 0x18) = 0;
LAB_148fb17d9:
    LOCK();
    plVar3 = plVar6 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_148fb180f;
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar6;
  }
  else {
    LOCK();
    *(int *)(uStack_30 + 1) = (int)uStack_30[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x10) = local_38;
    plVar6 = *(longlong **)(param_1 + 0x18);
    if (uStack_30 != plVar6) {
      *(longlong **)(param_1 + 0x18) = uStack_30;
      if (plVar6 == (longlong *)0x0) goto LAB_148fb180f;
      goto LAB_148fb17d9;
    }
    LOCK();
    plVar6 = uStack_30 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_148fb180f;
    (**(code **)*uStack_30)(uStack_30);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_148fb180f:
  plVar3 = uStack_30;
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    plVar6 = uStack_30 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*uStack_30)(uStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))
            (*(longlong **)(param_1 + 0x10),DAT_14cb0f198);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fb1866 FUN_148fb1866 body=764 status=ok
// SIG undefined FUN_148fb1866(void)

int FUN_148fb1866(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  byte bVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar5 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  *puVar5 = &PTR_FUN_14ba43820;
  *(undefined4 *)(puVar5 + 1) = 4;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  local_40 = (undefined8 *)0x0;
  FUN_148fb15e6(puVar5 + 6);
  *(undefined1 *)(puVar5 + 8) = 1;
  FUN_148fb16b6(puVar5);
  if (*(longlong *)(param_2 + 8) == 0) {
    local_48 = 0x100000000000000;
    FUN_140adf1ea(&local_40);
    plVar2 = (longlong *)CONCAT44(uStack_34,local_38);
    if (plVar2 == (longlong *)0x0) {
      *(undefined8 **)(param_2 + 8) = local_40;
      plVar6 = *(longlong **)(param_2 + 0x10);
      if (plVar6 != (longlong *)0x0) {
        *(undefined8 *)(param_2 + 0x10) = 0;
LAB_148fb1ab5:
        LOCK();
        plVar2 = plVar6 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar9 = *piVar1;
          UNLOCK();
joined_r0x000148fb1ae4:
          if (iVar9 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
      *(undefined8 **)(param_2 + 8) = local_40;
      plVar6 = *(longlong **)(param_2 + 0x10);
      if (plVar2 == plVar6) {
        LOCK();
        plVar6 = plVar2 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar9 = *piVar1;
          UNLOCK();
          plVar6 = plVar2;
          goto joined_r0x000148fb1ae4;
        }
      }
      else {
        *(longlong **)(param_2 + 0x10) = plVar2;
        if (plVar6 != (longlong *)0x0) goto LAB_148fb1ab5;
      }
    }
    plVar2 = (longlong *)CONCAT44(uStack_34,local_38);
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
  }
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14ba461f0;
  plVar6[2] = (longlong)puVar5;
  *(undefined8 **)(param_2 + 0x100) = puVar5;
  plVar2 = *(longlong **)(param_2 + 0x108);
  if (plVar6 == plVar2) {
    if (plVar6 == (longlong *)0x0) goto LAB_148fb19c9;
    LOCK();
    plVar2 = plVar6 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 != 0) goto LAB_148fb19c9;
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar9 = *piVar1;
    UNLOCK();
    plVar2 = plVar6;
  }
  else {
    *(longlong **)(param_2 + 0x108) = plVar6;
    if (plVar2 == (longlong *)0x0) goto LAB_148fb19c9;
    LOCK();
    plVar6 = plVar2 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_148fb19c9;
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar9 = *piVar1;
    UNLOCK();
  }
  if (iVar9 == 0) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
LAB_148fb19c9:
  iVar9 = 0;
  if (*(char *)(param_2 + 0x38) == '\x01') {
    if (*(longlong *)(param_1 + 0x280) == 0) {
      uVar7 = FUN_14001cc68(0xf8,0x10);
      FUN_1460d1166(uVar7);
      *(undefined8 *)(param_1 + 0x280) = uVar7;
    }
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    FUN_1446efa72(&local_40,0,3,0x10);
    local_38 = 3;
    *local_40 = &PTR_LAB_14ba3a100;
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar8 == 0) {
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    local_40[2] = lVar8;
    *local_40 = &PTR_FUN_14ba46210;
    local_40[3] = param_1;
    local_40[4] = FUN_148fb1bc4;
    bVar4 = (**(code **)(**(longlong **)(param_1 + 0x280) + 0x18))
                      (*(longlong **)(param_1 + 0x280),&local_40);
    iVar9 = bVar4 - 1;
    FUN_1449db362(&local_40);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fb1b64 FUN_148fb1b64 body=95 status=ok
// SIG undefined FUN_148fb1b64(void)

longlong FUN_148fb1b64(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x290));
  lVar1 = (longlong)*(int *)(param_1 + 0x2c0);
  if (0 < lVar1) {
    lVar2 = *(longlong *)(param_1 + 0x2b8);
    do {
      if ((*(longlong *)(lVar2 + 0x100) != 0) && (*(int *)(*(longlong *)(lVar2 + 0x100) + 8) == 2))
      goto LAB_148fb1bb0;
      lVar2 = lVar2 + 0x150;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  lVar2 = 0;
LAB_148fb1bb0:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x290));
  return lVar2;
}



// FUNCTION 148fb1bc4 FUN_148fb1bc4 body=278 status=ok
// SIG undefined FUN_148fb1bc4(void)

void FUN_148fb1bc4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x290));
  iVar2 = *(int *)(param_1 + 0x2c0);
  if (0 < iVar2) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x2b8);
      if ((*(char *)(lVar1 + 0x3a + lVar3) == '\x01') &&
         (((*(int *)(lVar1 + 0x148 + lVar3) != 4 || (*(char *)(lVar1 + 0x39 + lVar3) == '\x01')) &&
          (0 < *(int *)(lVar1 + 0x30 + lVar3))))) {
        FUN_1489bb0ca(local_58,0x400);
        (**(code **)(**(longlong **)(param_1 + 0x280) + 0x48))
                  (*(longlong **)(param_1 + 0x280),local_58,param_4);
        FUN_148fb27cc(local_58,lVar1 + lVar3);
        (**(code **)(**(longlong **)(param_1 + 0x280) + 0x58))
                  (*(longlong **)(param_1 + 0x280),local_58[0],local_48);
        if (local_58[0] != 0) {
          FUN_1400020a8();
        }
        iVar2 = *(int *)(param_1 + 0x2c0);
      }
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x150;
    } while (lVar4 < iVar2);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x290));
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148fb1cdc FUN_148fb1cdc body=360 status=ok
// SIG undefined FUN_148fb1cdc(void)

void FUN_148fb1cdc(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  LARGE_INTEGER LVar5;
  undefined8 *puVar6;
  undefined1 auStack_68 [32];
  LARGE_INTEGER local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(**(longlong **)(param_1 + 0x278) + 0x60))(*(longlong **)(param_1 + 0x278),&local_48);
  LVar5 = local_48;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
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
  }
  if ((longlong *)LVar5.QuadPart != (longlong *)0x0) {
    (**(code **)(*(longlong *)LVar5 + 0x58))(LVar5.QuadPart,param_2 + 0x118);
  }
  *(undefined4 *)(param_2 + 0x148) = 5;
  puVar6 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  uVar3 = *(undefined8 *)(param_2 + 0x118);
  uVar4 = *(undefined8 *)(param_1 + 0x278);
  QueryPerformanceCounter(&local_48);
  puVar6[1] = (double)local_48.QuadPart * DAT_14c83f420 + 16777216.0;
  *puVar6 = &PTR_LAB_14ba46e30;
  puVar6[2] = uVar4;
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((longlong)puVar6 + 0x1c) = 0;
  puVar6[4] = 0;
  *puVar6 = &PTR_FUN_14ba45460;
  puVar6[5] = uVar3;
  FUN_1410d2116(*(undefined8 *)(*(longlong *)(param_1 + 0x278) + 0x210),puVar6);
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
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fb1e4c FUN_148fb1e4c body=465 status=ok
// SIG undefined FUN_148fb1e4c(void)

void FUN_148fb1e4c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  undefined8 local_38;
  char local_2a;
  char local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_29 = '\0';
  local_2a = '\0';
  cVar4 = FUN_1489b875c(*param_2 + 0x20,DAT_14cbf4d10);
  if ((cVar4 == '\0') || (local_29 == '\0')) {
    lVar3 = *param_2;
    FUN_1446f470e(&local_38,L"LOBBYSEARCH",1);
    cVar4 = FUN_1489b875c(lVar3 + 0x20,local_38,&local_2a);
    if ((cVar4 == '\0') || (local_2a != '\x01')) {
      puVar5 = (undefined8 *)FUN_14001cc68(0x88,0x10);
      local_48 = *param_2;
      plVar6 = (longlong *)param_2[1];
      local_40 = plVar6;
      if (plVar6 == (longlong *)0x0) {
        FUN_148fb2278(puVar5,*(undefined8 *)(param_1 + 0x278),&local_48,param_1 + 0xb0);
      }
      else {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        FUN_148fb2278(puVar5,*(undefined8 *)(param_1 + 0x278),&local_48,param_1 + 0xb0);
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
      goto LAB_148fb1feb;
    }
  }
  puVar5 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  local_48 = *param_2;
  local_40 = (longlong *)param_2[1];
  if (local_40 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    plVar6 = local_40;
  }
  FUN_148fb78f4(puVar5,*(undefined8 *)(param_1 + 0x278),&local_48);
  *puVar5 = &PTR_FUN_14ba456e0;
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
LAB_148fb1feb:
  FUN_1410d2116(*(undefined8 *)(*(longlong *)(param_1 + 0x278) + 0x210),puVar5);
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148fb201e FUN_148fb201e body=584 status=ok
// SIG undefined FUN_148fb201e(void)

undefined8 FUN_148fb201e(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_88 [40];
  longlong local_60 [2];
  char local_4c;
  undefined8 *local_48;
  undefined4 local_40;
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = param_1[0x50];
  if (lVar4 == 0) {
    lVar4 = FUN_14001cc68(0xf8,0x10);
    FUN_1460d1166(lVar4);
    param_1[0x50] = lVar4;
  }
  lVar5 = 0;
  do {
    iVar3 = rand();
    *(char *)(lVar4 + 0x30 + lVar5) = (char)iVar3;
    lVar5 = lVar5 + 1;
  } while (lVar5 != 8);
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_14ba417f0;
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
  local_38[2] = lVar5;
  *local_38 = &PTR_FUN_14ba46280;
  local_38[3] = param_1;
  local_38[4] = FUN_1443ab8a0;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
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
  *local_48 = &PTR_FUN_14ba462f0;
  local_48[3] = param_1;
  local_48[4] = FUN_1443aba4c;
  FUN_1489bb0ca(local_60,0x400);
  plVar1 = (longlong *)param_1[0x50];
  (**(code **)(*plVar1 + 0x50))(plVar1,local_60,plVar1[6]);
  if (local_4c == '\0') {
    cVar2 = (**(code **)(*(longlong *)param_1[0x50] + 0x20))
                      ((longlong *)param_1[0x50],local_60,&local_38,&local_48);
    uVar6 = 0x3e5;
    if (cVar2 != '\0') goto LAB_148fb21f5;
  }
  plVar1 = (longlong *)param_1[0x50];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,1);
  }
  param_1[0x50] = 0;
  *(undefined4 *)(param_1[0x5d] + 0x18) = 3;
  (**(code **)(*param_1 + 0x1a0))(param_1,0);
  uVar6 = 0xffffffff;
LAB_148fb21f5:
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(&local_48);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fb2278 FUN_148fb2278 body=83 status=ok
// SIG undefined FUN_148fb2278(void)

undefined8 *
FUN_148fb2278(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  FUN_148fb7d90();
  *param_1 = &PTR_FUN_14ba45730;
  param_1[5] = &PTR_FUN_14ba45780;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 2;
  if (param_1 + 0xe != param_4) {
    FUN_140f86ba4(param_1 + 0xe,param_4);
  }
  return param_1;
}



// FUNCTION 148fb22cc FUN_148fb22cc body=269 status=ok
// SIG undefined FUN_148fb22cc(void)

undefined8 FUN_148fb22cc(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_1 + 0x148) = 2;
  lVar3 = *(longlong *)(param_1 + 0x100);
  if (lVar3 == 0) {
    uVar5 = 0xffffffff;
    goto LAB_148fb23bb;
  }
  plVar4 = *(longlong **)(*(longlong *)(param_2 + 0x100) + 0x10);
  (**(code **)(*plVar4 + 0xa0))(plVar4,&local_30);
  plVar4 = local_28;
  if (local_28 == (longlong *)0x0) {
    *(undefined8 *)(lVar3 + 0x10) = local_30;
    plVar6 = *(longlong **)(lVar3 + 0x18);
    if (plVar6 != (longlong *)0x0) {
      *(undefined8 *)(lVar3 + 0x18) = 0;
LAB_148fb2358:
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
joined_r0x000148fb2383:
        if (iVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
    *(undefined8 *)(lVar3 + 0x10) = local_30;
    plVar6 = *(longlong **)(lVar3 + 0x18);
    if (local_28 == plVar6) {
      LOCK();
      plVar6 = local_28 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar6 = plVar4;
        goto joined_r0x000148fb2383;
      }
    }
    else {
      *(longlong **)(lVar3 + 0x18) = local_28;
      if (plVar6 != (longlong *)0x0) goto LAB_148fb2358;
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
  *(undefined1 *)(lVar3 + 0x40) = 1;
  uVar5 = 0;
LAB_148fb23bb:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fb23da FUN_148fb23da body=142 status=ok
// SIG undefined FUN_148fb23da(void)

undefined8 *
FUN_148fb23da(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
             undefined4 param_5,undefined8 *param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  FUN_148fb78f4(param_1,param_2,param_4);
  *param_1 = &PTR_FUN_14ba457e0;
  *(undefined4 *)(param_1 + 0xb) = param_5;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 2;
  if (param_1 + 0xc != param_6) {
    FUN_148fb8478(param_1 + 0xc,param_6);
  }
  puVar3 = (undefined8 *)(**(code **)(*param_3 + 0x18))(param_3);
  uVar2 = *puVar3;
  iVar1 = *(int *)(param_1 + 10);
  *(uint *)(param_1 + 10) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0x54) < iVar1 + 1U) {
    FUN_148fb7b2c(param_1 + 9,iVar1);
  }
  *(undefined8 *)(param_1[9] + (longlong)iVar1 * 8) = uVar2;
  *(undefined1 *)(param_1 + 8) = 2;
  return param_1;
}



// FUNCTION 148fb2468 FUN_148fb2468 body=95 status=ok
// SIG undefined FUN_148fb2468(void)

undefined8 *
FUN_148fb2468(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 *param_5)

{
  FUN_148fb7d90();
  *param_1 = &PTR_FUN_14ba45830;
  param_1[5] = &PTR_FUN_14ba45880;
  *(undefined4 *)(param_1 + 0xe) = param_4;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 2;
  if (param_1 + 0xf != param_5) {
    FUN_148fb8478(param_1 + 0xf,param_5);
  }
  return param_1;
}



// FUNCTION 148fb24dc FUN_148fb24dc body=207 status=ok
// SIG undefined FUN_148fb24dc(void)

undefined8 * FUN_148fb24dc(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  uVar2 = *param_2;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_14ba46f50;
  puVar4[3] = uVar2;
  *param_1 = puVar4;
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14ba46fb0;
  plVar5[2] = (longlong)puVar4;
  param_1[1] = plVar5;
  if (puVar4 != (undefined8 *)0x0) {
    if (plVar5 == (longlong *)0x0) {
      puVar4[1] = puVar4;
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      puVar4[1] = puVar4;
      if ((longlong *)puVar4[2] != plVar5) {
        LOCK();
        *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
        UNLOCK();
        plVar3 = (longlong *)puVar4[2];
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))();
          }
        }
        puVar4[2] = plVar5;
      }
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
  return param_1;
}



// FUNCTION 148fb25ac FUN_148fb25ac body=285 status=ok
// SIG undefined FUN_148fb25ac(void)

undefined4 FUN_148fb25ac(longlong *param_1,undefined4 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)0x0;
  plVar7 = *(longlong **)(param_4 + 0x10);
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar7[1];
    do {
      if (iVar4 == 0) {
        plVar7 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)plVar7[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(plVar7 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar8);
  }
  uVar6 = 0;
  if (plVar7 != (longlong *)0x0) {
    uVar6 = *(undefined8 *)(param_4 + 8);
  }
  uStack_40 = 1;
  FUN_1413eac7e(&local_48,0);
  *local_48 = uVar6;
  local_48[1] = plVar7;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
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
  uVar5 = (**(code **)(*param_1 + 0x328))(param_1,param_2,param_3,&local_48);
  FUN_14127b1cd(local_48,uStack_40 & 0xffffffff);
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fb26ea FUN_148fb26ea body=26 status=ok
// SIG undefined FUN_148fb26ea(void)

longlong FUN_148fb26ea(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x20))();
  if (lVar1 != 0) {
    lVar1 = lVar1 + 0x28;
  }
  return lVar1;
}



// FUNCTION 148fb2704 FUN_148fb2704 body=198 status=ok
// SIG undefined FUN_148fb2704(void)

void FUN_148fb2704(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar3 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x120))();
  if (cVar3 == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x278) + 0x68))
              (*(longlong **)(param_1 + 0x278),&local_30);
    if (local_30 != (longlong *)0x0) {
      cVar3 = (**(code **)(*param_2 + 0x28))(param_2);
      if (cVar3 != '\0') {
        cVar3 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x138))
                          (*(longlong **)(param_1 + 0x278),param_2);
        if (cVar3 == '\0') {
          (**(code **)(*local_30 + 0x60))(local_30,param_2);
        }
      }
    }
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fb27cc FUN_148fb27cc body=335 status=ok
// SIG undefined FUN_148fb27cc(void)

void FUN_148fb27cc(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  lVar3 = *(longlong *)(param_2 + 8);
  plVar4 = *(longlong **)(param_2 + 0x10);
  if (plVar4 == (longlong *)0x0) {
    uVar5 = FUN_1489b68cf(param_1,lVar3 + 0x18);
    uVar5 = FUN_1489bb5d7(uVar5,param_2 + 0x18);
    uVar5 = FUN_1489b6c87(uVar5,param_2 + 0x110);
    FUN_1489b6c87(uVar5,param_2 + 0x114);
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    uVar5 = FUN_1489b68cf(param_1,lVar3 + 0x18);
    uVar5 = FUN_1489bb5d7(uVar5,param_2 + 0x18);
    uVar5 = FUN_1489b6c87(uVar5,param_2 + 0x110);
    FUN_1489b6c87(uVar5,param_2 + 0x114);
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
  lVar3 = *(longlong *)(param_2 + 0x100);
  plVar4 = *(longlong **)(param_2 + 0x108);
  if (plVar4 == (longlong *)0x0) {
    FUN_148f9a71b(param_1,*(undefined8 *)(lVar3 + 0x10));
    FUN_1489b68cf(param_1,*(longlong *)(lVar3 + 0x30) + 0x18);
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    FUN_148f9a71b(param_1,*(undefined8 *)(lVar3 + 0x10));
    FUN_1489b68cf(param_1,*(longlong *)(lVar3 + 0x30) + 0x18);
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
  FUN_148fb291c(param_1,param_2 + 0x28);
  return;
}



// FUNCTION 148fb291c FUN_148fb291c body=1000 status=ok
// SIG undefined FUN_148fb291c(void)

void FUN_148fb291c(longlong *param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar4 = FUN_1489b6c87(param_1,param_2 + 8);
  plVar5 = (longlong *)FUN_1489b6c87(uVar4,param_2 + 0xc);
  if (*(char *)((longlong)plVar5 + 0x14) == '\0') {
    lVar2 = plVar5[2];
    uVar7 = (int)lVar2 + 1;
    if (*(uint *)(plVar5 + 1) < uVar7) goto LAB_148fb296a;
    uVar1 = *(undefined1 *)(param_2 + 0x10);
    *(uint *)(plVar5 + 2) = uVar7;
    *(undefined1 *)(*plVar5 + (longlong)(int)lVar2) = uVar1;
    if ((*(byte *)((longlong)plVar5 + 0x14) & 1) == 0) {
      lVar2 = plVar5[2];
      uVar7 = (int)lVar2 + 1;
      if (uVar7 <= *(uint *)(plVar5 + 1)) {
        uVar1 = *(undefined1 *)(param_2 + 0x12);
        *(uint *)(plVar5 + 2) = uVar7;
        *(undefined1 *)(*plVar5 + (longlong)(int)lVar2) = uVar1;
        if ((*(byte *)((longlong)plVar5 + 0x14) & 1) == 0) {
          lVar2 = plVar5[2];
          uVar7 = (int)lVar2 + 1;
          if (uVar7 <= *(uint *)(plVar5 + 1)) {
            uVar1 = *(undefined1 *)(param_2 + 0x13);
            *(uint *)(plVar5 + 2) = uVar7;
            *(undefined1 *)(*plVar5 + (longlong)(int)lVar2) = uVar1;
            if ((*(byte *)((longlong)plVar5 + 0x14) & 1) == 0) {
              lVar2 = plVar5[2];
              uVar7 = (int)lVar2 + 1;
              if (uVar7 <= *(uint *)(plVar5 + 1)) {
                uVar1 = *(undefined1 *)(param_2 + 0x14);
                *(uint *)(plVar5 + 2) = uVar7;
                *(undefined1 *)(*plVar5 + (longlong)(int)lVar2) = uVar1;
                if ((*(byte *)((longlong)plVar5 + 0x14) & 1) == 0) {
                  lVar2 = plVar5[2];
                  uVar7 = (int)lVar2 + 1;
                  if (uVar7 <= *(uint *)(plVar5 + 1)) {
                    uVar1 = *(undefined1 *)(param_2 + 0x11);
                    *(uint *)(plVar5 + 2) = uVar7;
                    *(undefined1 *)(*plVar5 + (longlong)(int)lVar2) = uVar1;
                    if ((*(byte *)((longlong)plVar5 + 0x14) & 1) == 0) {
                      lVar2 = plVar5[2];
                      uVar7 = (int)lVar2 + 1;
                      if (uVar7 <= *(uint *)(plVar5 + 1)) {
                        uVar1 = *(undefined1 *)(param_2 + 0x15);
                        *(uint *)(plVar5 + 2) = uVar7;
                        *(undefined1 *)(*plVar5 + (longlong)(int)lVar2) = uVar1;
                        if ((*(byte *)((longlong)plVar5 + 0x14) & 1) == 0) {
                          lVar2 = plVar5[2];
                          uVar7 = (int)lVar2 + 1;
                          if (uVar7 <= *(uint *)(plVar5 + 1)) {
                            uVar1 = *(undefined1 *)(param_2 + 0x16);
                            *(uint *)(plVar5 + 2) = uVar7;
                            *(undefined1 *)(*plVar5 + (longlong)(int)lVar2) = uVar1;
                            if ((*(byte *)((longlong)plVar5 + 0x14) & 1) == 0) {
                              lVar2 = plVar5[2];
                              uVar7 = (int)lVar2 + 1;
                              if (uVar7 <= *(uint *)(plVar5 + 1)) {
                                uVar1 = *(undefined1 *)(param_2 + 0x1a);
                                *(uint *)(plVar5 + 2) = uVar7;
                                *(undefined1 *)(*plVar5 + (longlong)(int)lVar2) = uVar1;
                                if ((*(byte *)((longlong)plVar5 + 0x14) & 1) == 0) {
                                  lVar2 = plVar5[2];
                                  uVar7 = (int)lVar2 + 1;
                                  if (uVar7 <= *(uint *)(plVar5 + 1)) {
                                    uVar1 = *(undefined1 *)(param_2 + 0x17);
                                    *(uint *)(plVar5 + 2) = uVar7;
                                    *(undefined1 *)(*plVar5 + (longlong)(int)lVar2) = uVar1;
                                    if ((*(byte *)((longlong)plVar5 + 0x14) & 1) == 0) {
                                      lVar2 = plVar5[2];
                                      uVar7 = (int)lVar2 + 1;
                                      if (uVar7 <= *(uint *)(plVar5 + 1)) {
                                        uVar1 = *(undefined1 *)(param_2 + 0x18);
                                        *(uint *)(plVar5 + 2) = uVar7;
                                        *(undefined1 *)(*plVar5 + (longlong)(int)lVar2) = uVar1;
                                        if ((*(byte *)((longlong)plVar5 + 0x14) & 1) == 0) {
                                          lVar2 = plVar5[2];
                                          uVar7 = (int)lVar2 + 1;
                                          if (uVar7 <= *(uint *)(plVar5 + 1)) {
                                            uVar1 = *(undefined1 *)(param_2 + 0x19);
                                            *(uint *)(plVar5 + 2) = uVar7;
                                            *(undefined1 *)(*plVar5 + (longlong)(int)lVar2) = uVar1;
                                            goto LAB_148fb2972;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
LAB_148fb296a:
    *(undefined1 *)((longlong)plVar5 + 0x14) = 1;
  }
  *(undefined1 *)((longlong)plVar5 + 0x14) = 1;
LAB_148fb2972:
  FUN_1489b6c87(plVar5,param_2 + 0x30);
  plVar5 = (longlong *)(param_2 + 0x38);
  lVar2 = param_2 + 0x48;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  local_58 = lVar2;
  if (*(int *)(param_2 + 0x60) != 0) {
    FUN_1449c0562(&local_60);
  }
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_68 = local_48;
  local_64 = local_44;
  local_80 = local_60;
  local_78 = local_58;
  iVar8 = 0;
  local_88 = plVar5;
  if (iStack_4c < *(int *)(local_58 + 0x18)) {
    iVar8 = 0;
    do {
      iVar8 = (iVar8 + 1) - (uint)(*(byte *)(*local_88 + 0x28 + (longlong)iStack_6c * 0x38) < 2);
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (iStack_6c < *(int *)(local_78 + 0x18));
  }
  local_88 = (longlong *)CONCAT44(local_88._4_4_,iVar8);
  FUN_1489b6c87(param_1);
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  local_58 = lVar2;
  if (*(int *)(param_2 + 0x60) != 0) {
    FUN_1449c0562(&local_60);
  }
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_68 = local_48;
  local_64 = local_44;
  local_80 = local_60;
  local_78 = local_58;
  local_88 = plVar5;
  if (iStack_4c < *(int *)(local_58 + 0x18)) {
    do {
      lVar2 = *local_88;
      lVar6 = (longlong)iStack_6c * 0x38;
      if (1 < *(byte *)(lVar2 + 0x28 + lVar6)) {
        FUN_148f9a62d(param_1,lVar2 + lVar6);
        FUN_1489bb6df(param_1,lVar2 + lVar6 + 8);
        if (*(char *)((longlong)param_1 + 0x14) == '\0') {
          lVar3 = param_1[2];
          uVar7 = (int)lVar3 + 1;
          if (uVar7 <= *(uint *)(param_1 + 1)) {
            uVar1 = *(undefined1 *)(lVar2 + lVar6 + 0x28);
            *(uint *)(param_1 + 2) = uVar7;
            *(undefined1 *)(*param_1 + (longlong)(int)lVar3) = uVar1;
            goto LAB_148fb2ad6;
          }
        }
        *(undefined1 *)((longlong)param_1 + 0x14) = 1;
      }
LAB_148fb2ad6:
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (iStack_6c < *(int *)(local_78 + 0x18));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148fb2d06 FUN_148fb2d06 body=844 status=ok
// SIG undefined FUN_148fb2d06(void)

void FUN_148fb2d06(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  undefined8 local_48;
  longlong *local_40;
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = FUN_1489b6b19(param_1,local_38);
  uVar3 = FUN_1489bb965(uVar3,param_2 + 0x18);
  uVar3 = FUN_1489b6cee(uVar3,param_2 + 0x110);
  FUN_1489b6cee(uVar3,param_2 + 0x114);
  FUN_141904fbe(&local_48,local_38);
  plVar5 = local_40;
  if (local_40 == (longlong *)0x0) {
    *(undefined8 *)(param_2 + 8) = local_48;
    plVar6 = *(longlong **)(param_2 + 0x10);
    if (plVar6 != (longlong *)0x0) {
      *(undefined8 *)(param_2 + 0x10) = 0;
LAB_148fb2fd7:
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
joined_r0x000148fb2f2f:
        if (iVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_2 + 8) = local_48;
    plVar6 = *(longlong **)(param_2 + 0x10);
    if (local_40 == plVar6) {
      LOCK();
      plVar6 = local_40 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar6 = plVar5;
        goto joined_r0x000148fb2f2f;
      }
    }
    else {
      *(longlong **)(param_2 + 0x10) = local_40;
      if (plVar6 != (longlong *)0x0) goto LAB_148fb2fd7;
    }
  }
  plVar5 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_40 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  puVar4 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  *puVar4 = &PTR_FUN_14ba43820;
  *(undefined4 *)(puVar4 + 1) = 4;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  local_48 = 0;
  FUN_148fb15e6(puVar4 + 6);
  *(undefined1 *)(puVar4 + 8) = 1;
  FUN_1446f470e(local_50,L"WINDOWS",1);
  plVar5 = (longlong *)FUN_140272950(local_50);
  (**(code **)(*plVar5 + 0x90))(plVar5,&local_48);
  plVar5 = local_40;
  if (local_40 == (longlong *)0x0) {
    puVar4[2] = local_48;
    plVar6 = (longlong *)puVar4[3];
    if (plVar6 != (longlong *)0x0) {
      puVar4[3] = 0;
LAB_148fb3009:
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
joined_r0x000148fb2f6b:
        if (iVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    puVar4[2] = local_48;
    plVar6 = (longlong *)puVar4[3];
    if (local_40 == plVar6) {
      LOCK();
      plVar6 = local_40 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar6 = plVar5;
        goto joined_r0x000148fb2f6b;
      }
    }
    else {
      puVar4[3] = local_40;
      if (plVar6 != (longlong *)0x0) goto LAB_148fb3009;
    }
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_40 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  FUN_148fb3053(param_1,puVar4);
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14ba461f0;
  plVar6[2] = (longlong)puVar4;
  *(undefined8 **)(param_2 + 0x100) = puVar4;
  plVar5 = *(longlong **)(param_2 + 0x108);
  if (plVar6 == plVar5) {
    if (plVar6 == (longlong *)0x0) goto LAB_148fb2f9d;
    LOCK();
    plVar5 = plVar6 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_148fb2f9d;
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar5 = plVar6;
  }
  else {
    *(longlong **)(param_2 + 0x108) = plVar6;
    if (plVar5 == (longlong *)0x0) goto LAB_148fb2f9d;
    LOCK();
    plVar6 = plVar5 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_148fb2f9d;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
LAB_148fb2f9d:
  FUN_1443ac84e(param_1,param_2 + 0x28);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fb3053 FUN_148fb3053 body=170 status=ok
// SIG undefined FUN_148fb3053(void)

undefined8 FUN_148fb3053(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148f9a7d2(param_1,*(undefined8 *)(param_2 + 0x10));
  FUN_1489b6b19(param_1,local_40);
  FUN_141904fbe(&local_58,local_40);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  plVar4 = *(longlong **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x30) = CONCAT44(uStack_54,local_58);
  *(ulonglong *)(param_2 + 0x38) = CONCAT44(uStack_4c,uStack_50);
  local_38._0_4_ = (undefined4)uVar3;
  local_38._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  uStack_30._0_4_ = SUB84(plVar4,0);
  uStack_30._4_4_ = (undefined4)((ulonglong)plVar4 >> 0x20);
  local_58 = (undefined4)local_38;
  uStack_54 = local_38._4_4_;
  uStack_50 = (undefined4)uStack_30;
  uStack_4c = uStack_30._4_4_;
  local_38 = uVar3;
  uStack_30 = plVar4;
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
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fb30fe FUN_148fb30fe body=85 status=ok
// SIG undefined FUN_148fb30fe(void)

void FUN_148fb30fe(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar2 = 0;
    iVar1 = 0;
    do {
      if (*(longlong *)(*param_1 + lVar2) == *param_2) {
        if (iVar1 == 1) {
          return;
        }
        FUN_148fbb200(param_1,-iVar1);
        FUN_145c6f45e(param_1);
        return;
      }
      iVar1 = iVar1 + -1;
      lVar2 = lVar2 + 0x10;
    } while ((longlong)(int)param_1[1] * 0x10 != lVar2);
  }
  return;
}



// FUNCTION 148fb31a0 FUN_148fb31a0 body=55 status=ok
// SIG undefined FUN_148fb31a0(void)

undefined8 FUN_148fb31a0(longlong param_1,undefined8 param_2)

{
  wchar_t *pwVar1;
  
  pwVar1 = L"True";
  if (*(int *)(param_1 + 0x1c) == 0) {
    pwVar1 = L"False";
  }
  FUN_140002266(param_2,L"FOnlineAsyncTaskSteamFindPlayerSession bWasSuccessful: %s",pwVar1);
  return param_2;
}



// FUNCTION 148fb31d8 FUN_148fb31d8 body=273 status=ok
// SIG undefined FUN_148fb31d8(void)

ulonglong FUN_148fb31d8(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar5 = (longlong *)SteamInternal_ContextInit(&PTR_FUN_14c764910);
  plVar5 = (longlong *)*plVar5;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))(*(longlong **)(param_1 + 0x10),&local_38);
  plVar2 = local_30;
  if ((longlong *)(param_1 + 0x38) != &local_38) {
    *(longlong *)(param_1 + 0x38) = local_38;
    local_38 = 0;
    plVar4 = *(longlong **)(param_1 + 0x40);
    if (local_30 != plVar4) {
      local_30 = (longlong *)0x0;
      *(longlong **)(param_1 + 0x40) = plVar2;
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
  }
  plVar2 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_30 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if ((plVar5 == (longlong *)0x0) || (*(longlong *)(param_1 + 0x38) == 0)) {
    LOCK();
    *(undefined4 *)(param_1 + 0x18) = 1;
    UNLOCK();
    LOCK();
    uVar3 = *(uint *)(param_1 + 0x1c);
    *(uint *)(param_1 + 0x1c) = 0;
    uVar6 = (ulonglong)uVar3;
    UNLOCK();
  }
  else {
    uVar6 = (**(code **)(*plVar5 + 0xe0))(plVar5,*(undefined8 *)(param_1 + 0x30));
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fb32ec FUN_148fb32ec body=45 status=ok
// SIG undefined FUN_148fb32ec(void)

longlong FUN_148fb32ec(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145a25e5e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fb331a FUN_148fb331a body=45 status=ok
// SIG undefined FUN_148fb331a(void)

longlong FUN_148fb331a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145918d2a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fb3348 FUN_148fb3348 body=165 status=ok
// SIG undefined FUN_148fb3348(void)

undefined8 * FUN_148fb3348(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  FUN_148fbb35a(&local_38,param_3);
  FUN_148fbb272(param_1 + 8,local_40,&local_38);
  FUN_1449db362(&local_38);
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fb33ee FUN_148fb33ee body=38 status=ok
// SIG undefined FUN_148fb33ee(void)

void FUN_148fb33ee(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 8);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 148fb341e FUN_148fb341e body=38 status=ok
// SIG undefined FUN_148fb341e(void)

undefined8 FUN_148fb341e(undefined8 param_1,int param_2)

{
  FUN_148fab730();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fb344e FUN_148fb344e body=165 status=ok
// SIG undefined FUN_148fb344e(void)

undefined8 * FUN_148fb344e(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  FUN_148fbb4c6(&local_38,param_3);
  FUN_148fbb3de(param_1 + 8,local_40,&local_38);
  FUN_1449db362(&local_38);
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fb34f4 FUN_148fb34f4 body=38 status=ok
// SIG undefined FUN_148fb34f4(void)

void FUN_148fb34f4(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 8);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 148fb354c FUN_148fb354c body=38 status=ok
// SIG undefined FUN_148fb354c(void)

void FUN_148fb354c(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 0x50);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 148fb3590 FUN_148fb3590 body=27 status=ok
// SIG undefined FUN_148fb3590(void)

undefined8 FUN_148fb3590(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x30))();
  return param_2;
}



// FUNCTION 148fb35ae FUN_148fb35ae body=48 status=ok
// SIG undefined FUN_148fb35ae(void)

void FUN_148fb35ae(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x68,8);
  }
  return;
}



// FUNCTION 148fb35de FUN_148fb35de body=38 status=ok
// SIG undefined FUN_148fb35de(void)

void FUN_148fb35de(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = SteamAPI_GetHSteamUser();
  uVar1 = SteamInternal_FindOrCreateUserInterface(uVar2,"SteamUser023");
  *param_1 = uVar1;
  return;
}



// FUNCTION 148fb3604 FUN_148fb3604 body=38 status=ok
// SIG undefined FUN_148fb3604(void)

void FUN_148fb3604(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = SteamAPI_GetHSteamUser();
  uVar1 = SteamInternal_FindOrCreateUserInterface(uVar2,"STEAMUSERSTATS_INTERFACE_VERSION012");
  *param_1 = uVar1;
  return;
}



// FUNCTION 148fb362a FUN_148fb362a body=38 status=ok
// SIG undefined FUN_148fb362a(void)

undefined8 FUN_148fb362a(undefined8 param_1,int param_2)

{
  FUN_148fb36e8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fb3650 FUN_148fb3650 body=148 status=ok
// SIG undefined FUN_148fb3650(void)

undefined8 FUN_148fb3650(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = &DAT_149dfb77a;
  if (*(int *)(param_1 + 0x30) != 0) {
    puVar1 = *(undefined2 **)(param_1 + 0x28);
  }
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x38))(*(longlong **)(param_1 + 0x18),&local_38);
  puVar2 = &DAT_149dfb77a;
  if (local_30 != 0) {
    puVar2 = local_38;
  }
  FUN_140002266(param_2,L"FOnlineAsyncEventSteamInviteAccepted Friend: %s URL: %s",puVar2,puVar1);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fb36e8 FUN_148fb36e8 body=83 status=ok
// SIG undefined FUN_148fb36e8(void)

void FUN_148fb36e8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba43a70;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[4];
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
                    /* WARNING: Could not recover jumptable at 0x000148fb3730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148fb373c FUN_148fb373c body=38 status=ok
// SIG undefined FUN_148fb373c(void)

undefined8 FUN_148fb373c(undefined8 param_1,int param_2)

{
  FUN_148fb3762();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fb3762 FUN_148fb3762 body=110 status=ok
// SIG undefined FUN_148fb3762(void)

void FUN_148fb3762(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba43b00;
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
  plVar3 = (longlong *)param_1[4];
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
                    /* WARNING: Could not recover jumptable at 0x000148fb37c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148fb37d0 FUN_148fb37d0 body=38 status=ok
// SIG undefined FUN_148fb37d0(void)

void FUN_148fb37d0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = SteamAPI_GetHSteamUser();
  uVar1 = SteamInternal_FindOrCreateUserInterface(uVar2,"SteamMatchMaking009");
  *param_1 = uVar1;
  return;
}



// FUNCTION 148fb37f6 FUN_148fb37f6 body=182 status=ok
// SIG undefined FUN_148fb37f6(void)

undefined8 FUN_148fb37f6(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148fc0d2b(&local_38,*(undefined4 *)(param_1 + 0x28));
  puVar2 = &DAT_149dfb77a;
  if (local_30 != 0) {
    puVar2 = local_38;
  }
  FUN_148fb38ae(&local_48,*(undefined8 *)(param_1 + 0x18));
  puVar1 = &DAT_149dfb77a;
  if (local_40 != 0) {
    puVar1 = local_48;
  }
  FUN_140002266(param_2,L"FOnlineAsyncEventSteamLobbyEnter LobbyId: %s Result: %s",puVar1,puVar2);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fb38ae FUN_148fb38ae body=114 status=ok
// SIG undefined FUN_148fb38ae(void)

undefined8 FUN_148fb38ae(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  undefined1 auStack_58 [32];
  undefined **local_38;
  undefined8 local_30;
  longlong *plStack_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  plStack_28 = (longlong *)0x0;
  local_38 = &PTR_FUN_14ba46f50;
  local_20 = param_2;
  FUN_14167bbac(&local_38,param_1);
  if (plStack_28 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_28 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_28 + 0x10))();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fb3922 FUN_148fb3922 body=237 status=ok
// SIG undefined FUN_148fb3922(void)

undefined8 FUN_148fb3922(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_60;
  int local_58;
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_148fc0fbf(&local_40,*(undefined4 *)(param_1 + 0x30));
  puVar3 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar3 = local_40;
  }
  FUN_148fb38ae(&local_50,*(undefined8 *)(param_1 + 0x28));
  puVar2 = &DAT_149dfb77a;
  if (local_48 != 0) {
    puVar2 = local_50;
  }
  FUN_148fb38ae(&local_60,*(undefined8 *)(param_1 + 0x20));
  puVar1 = &DAT_149dfb77a;
  if (local_58 != 0) {
    puVar1 = local_60;
  }
  local_68 = puVar3;
  FUN_140002266(param_2,L"FOnlineAsyncEventSteamLobbyChatUpdate User: %s Instigator: %s Result: %s",
                puVar1,puVar2);
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fb3a10 FUN_148fb3a10 body=124 status=ok
// SIG undefined FUN_148fb3a10(void)

undefined8 FUN_148fb3a10(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x38))(*(longlong **)(param_1 + 0x18),&local_28);
  puVar1 = local_28;
  if (local_20 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"FOnlineAsyncEventSteamLobbyUpdate LobbyId: %s",puVar1);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148fb3a8e FUN_148fb3a8e body=128 status=ok
// SIG undefined FUN_148fb3a8e(void)

void FUN_148fb3a8e(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar3 = *param_1;
  iVar1 = (int)param_1[1];
  lVar5 = (longlong)iVar1;
  if (lVar5 != 0) {
    uVar4 = 0;
    do {
      if (*(longlong *)(lVar3 + uVar4) == *param_2) {
        if ((int)(~uVar4 >> 4) != 0) {
          return;
        }
        break;
      }
      uVar4 = uVar4 + 0x10;
    } while (lVar5 << 4 != uVar4);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145fda56c(param_1,iVar1);
    lVar3 = *param_1;
  }
  *(longlong *)(lVar3 + lVar5 * 0x10) = *param_2;
  lVar2 = param_2[1];
  *(longlong *)(lVar3 + 8 + lVar5 * 0x10) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 148fb3b0e FUN_148fb3b0e body=200 status=ok
// SIG undefined FUN_148fb3b0e(void)

undefined8 FUN_148fb3b0e(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148fbff84(&local_40,*(undefined4 *)(param_1 + 0x28));
  local_58 = &DAT_149dfb77a;
  if (local_38 != 0) {
    local_58 = local_40;
  }
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x38))(*(longlong **)(param_1 + 0x18),&local_50);
  puVar1 = &DAT_149dfb77a;
  if (local_48 != 0) {
    puVar1 = local_50;
  }
  FUN_140002266(param_2,
                L"FOnlineAsyncEventSteamStatsReceived bWasSuccessful: %d User: %s Result: %s",
                *(int *)(param_1 + 0x28) == 1,puVar1);
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fb3bd8 FUN_148fb3bd8 body=200 status=ok
// SIG undefined FUN_148fb3bd8(void)

undefined8 FUN_148fb3bd8(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148fbff84(&local_40,*(undefined4 *)(param_1 + 0x28));
  local_58 = &DAT_149dfb77a;
  if (local_38 != 0) {
    local_58 = local_40;
  }
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x38))(*(longlong **)(param_1 + 0x18),&local_50);
  puVar1 = &DAT_149dfb77a;
  if (local_48 != 0) {
    puVar1 = local_50;
  }
  FUN_140002266(param_2,L"FOnlineAsyncEventSteamStatsStored bWasSuccessful: %d User: %s Result: %s",
                *(int *)(param_1 + 0x28) == 1,puVar1);
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fb3ca2 FUN_148fb3ca2 body=83 status=ok
// SIG undefined FUN_148fb3ca2(void)

undefined8 * FUN_148fb3ca2(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba43e70;
  plVar3 = (longlong *)param_1[4];
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



// FUNCTION 148fb3cf6 FUN_148fb3cf6 body=124 status=ok
// SIG undefined FUN_148fb3cf6(void)

undefined8 FUN_148fb3cf6(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x38))(*(longlong **)(param_1 + 0x18),&local_28);
  puVar1 = local_28;
  if (local_20 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"FOnlineAsyncEventSteamStatsUnloaded UserId: %s",puVar1);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148fb3d74 FUN_148fb3d74 body=29 status=ok
// SIG undefined FUN_148fb3d74(void)

undefined8 FUN_148fb3d74(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fb3d92 FUN_148fb3d92 body=29 status=ok
// SIG undefined FUN_148fb3d92(void)

undefined8 FUN_148fb3d92(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fb3db0 FUN_148fb3db0 body=43 status=ok
// SIG undefined FUN_148fb3db0(void)

undefined8 FUN_148fb3db0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1489b9eac(*(undefined1 *)(param_1 + 0x18));
  FUN_140002266(param_2,L"FOnlineAsyncEventSteamServerConnectionState StateChange: %s",uVar1);
  return param_2;
}



// FUNCTION 148fb3ddc FUN_148fb3ddc body=130 status=ok
// SIG undefined FUN_148fb3ddc(void)

void FUN_148fb3ddc(longlong param_1)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined8 unaff_RBX;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar2 = *(longlong **)(param_1 + 0x10);
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  (**(code **)(*plVar2 + 0x10))(plVar2,local_40);
  FUN_1400021e4(local_40,local_38);
  (**(code **)(*plVar2 + 0x188))
            (plVar2,local_38,0,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fb3e60 FUN_148fb3e60 body=83 status=ok
// SIG undefined FUN_148fb3e60(void)

undefined8 * FUN_148fb3e60(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba43fb0;
  plVar3 = (longlong *)param_1[4];
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



// FUNCTION 148fb3eb4 FUN_148fb3eb4 body=124 status=ok
// SIG undefined FUN_148fb3eb4(void)

undefined8 FUN_148fb3eb4(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x38))(*(longlong **)(param_1 + 0x18),&local_28);
  puVar1 = local_28;
  if (local_20 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"FOnlineAsyncEventSteamServerConnectedGS ServerId: %s",puVar1);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148fb3f32 FUN_148fb3f32 body=416 status=ok
// SIG undefined FUN_148fb3f32(void)

void FUN_148fb3f32(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 == (longlong *)0x0) goto LAB_148fb40ae;
  (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
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
  }
  if (local_48 != 0) {
    *(undefined1 *)(local_48 + 0x2c8) = 1;
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    plVar3 = *(longlong **)(param_1 + 0x20);
    if (plVar3 == (longlong *)0x0) {
      *(undefined8 *)(local_48 + 0x2d0) = uVar4;
      plVar6 = *(longlong **)(local_48 + 0x2d8);
      if (plVar6 != (longlong *)0x0) {
        *(undefined8 *)(local_48 + 0x2d8) = 0;
LAB_148fb401c:
        LOCK();
        plVar3 = plVar6 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
joined_r0x000148fb4049:
          if (iVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      *(undefined8 *)(local_48 + 0x2d0) = uVar4;
      plVar6 = *(longlong **)(local_48 + 0x2d8);
      if (plVar3 == plVar6) {
        LOCK();
        plVar6 = plVar3 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
          plVar6 = plVar3;
          goto joined_r0x000148fb4049;
        }
      }
      else {
        *(longlong **)(local_48 + 0x2d8) = plVar3;
        if (plVar6 != (longlong *)0x0) goto LAB_148fb401c;
      }
    }
    if ((*(char *)(*(longlong *)(param_1 + 0x10) + 0xda) == '\x01') &&
       (lVar5 = FUN_140272950(&DAT_14cb8e468), lVar5 != 0)) {
      FUN_148fbf14a(lVar5,*(undefined8 *)(local_48 + 0x2d0));
    }
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x268))(*(longlong **)(param_1 + 0x10),1);
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
LAB_148fb40ae:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fb40d4 FUN_148fb40d4 body=29 status=ok
// SIG undefined FUN_148fb40d4(void)

undefined8 FUN_148fb40d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fb40f2 FUN_148fb40f2 body=122 status=ok
// SIG undefined FUN_148fb40f2(void)

undefined8 FUN_148fb40f2(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_148fbff84(&local_28,*(undefined4 *)(param_1 + 0x18));
  puVar1 = local_28;
  if (local_20 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"FOnlineAsyncEventSteamServerDisconnectedGS Result: %s",puVar1);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148fb416e FUN_148fb416e body=362 status=ok
// SIG undefined FUN_148fb416e(void)

void FUN_148fb416e(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))(*(longlong **)(param_1 + 0x10),&local_40);
  lVar5 = local_40;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_38 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  if (lVar5 != 0) {
    *(undefined1 *)(lVar5 + 0x2c8) = 0;
    *(undefined8 *)(lVar5 + 0x2d0) = 0;
    plVar3 = *(longlong **)(lVar5 + 0x2d8);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(lVar5 + 0x2d8) = 0;
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
    lVar5 = FUN_148fb1b64(lVar5);
    if ((lVar5 != 0) && (*(int *)(lVar5 + 0x148) == 7)) goto LAB_148fb4294;
  }
  uVar4 = FUN_148fc126f(*(undefined4 *)(param_1 + 0x18));
  plVar3 = *(longlong **)(param_1 + 0x10);
  (**(code **)(*plVar3 + 0x10))(plVar3,local_48);
  FUN_1400021e4(local_48,&local_40);
  (**(code **)(*plVar3 + 0x188))(plVar3,&local_40,0,uVar4);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
LAB_148fb4294:
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fb42da FUN_148fb42da body=29 status=ok
// SIG undefined FUN_148fb42da(void)

undefined8 FUN_148fb42da(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fb42f8 FUN_148fb42f8 body=122 status=ok
// SIG undefined FUN_148fb42f8(void)

undefined8 FUN_148fb42f8(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_148fbff84(&local_28,*(undefined4 *)(param_1 + 0x18));
  puVar1 = local_28;
  if (local_20 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"FOnlineAsyncEventSteamServerFailedGS Result: %s",puVar1);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148fb438e FUN_148fb438e body=29 status=ok
// SIG undefined FUN_148fb438e(void)

undefined8 FUN_148fb438e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fb43ac FUN_148fb43ac body=37 status=ok
// SIG undefined FUN_148fb43ac(void)

undefined8 FUN_148fb43ac(longlong param_1,undefined8 param_2)

{
  FUN_140002266(param_2,L"FOnlineAsyncEventSteamServerPolicyResponseGS Secure: %d",
                *(undefined1 *)(param_1 + 0x18));
  return param_2;
}



// FUNCTION 148fb43d2 FUN_148fb43d2 body=29 status=ok
// SIG undefined FUN_148fb43d2(void)

undefined8 FUN_148fb43d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fb43f0 FUN_148fb43f0 body=36 status=ok
// SIG undefined FUN_148fb43f0(void)

undefined8 FUN_148fb43f0(longlong param_1,undefined8 param_2)

{
  FUN_140002266(param_2,L"FOnlineAsyncEventSteamGetTicketForWebApiResponse Received code %d.",
                *(undefined4 *)(param_1 + 0x1c));
  return param_2;
}



// FUNCTION 148fb4414 FUN_148fb4414 body=29 status=ok
// SIG undefined FUN_148fb4414(void)

undefined8 FUN_148fb4414(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fb4432 FUN_148fb4432 body=41 status=ok
// SIG undefined FUN_148fb4432(void)

undefined8 FUN_148fb4432(longlong param_1,undefined8 param_2)

{
  FUN_140002266(param_2,
                L"FOnlineAsyncEventSteamAuthenticationResponse Received code %d. Is server? %d",
                *(undefined4 *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x2c));
  return param_2;
}



// FUNCTION 148fb445b FUN_148fb445b body=38 status=ok
// SIG undefined FUN_148fb445b(void)

void FUN_148fb445b(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = SteamAPI_GetHSteamUser();
  uVar1 = SteamInternal_FindOrCreateUserInterface(uVar2,"SteamNetworking006");
  *param_1 = uVar1;
  return;
}



// FUNCTION 148fb4482 FUN_148fb4482 body=83 status=ok
// SIG undefined FUN_148fb4482(void)

undefined8 * FUN_148fb4482(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba44350;
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fb44d6 FUN_148fb44d6 body=124 status=ok
// SIG undefined FUN_148fb44d6(void)

undefined8 FUN_148fb44d6(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x38))(*(longlong **)(param_1 + 0x20),&local_28);
  puVar1 = local_28;
  if (local_20 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"FOnlineAsyncEventSteamConnectionRequest RemoteId: %s",puVar1);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148fb4554 FUN_148fb4554 body=83 status=ok
// SIG undefined FUN_148fb4554(void)

undefined8 * FUN_148fb4554(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba443e0;
  plVar3 = (longlong *)param_1[4];
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



// FUNCTION 148fb45a8 FUN_148fb45a8 body=183 status=ok
// SIG undefined FUN_148fb45a8(void)

undefined8 FUN_148fb45a8(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148fc114d(&local_38,*(undefined4 *)(param_1 + 0x28));
  puVar2 = &DAT_149dfb77a;
  if (local_30 != 0) {
    puVar2 = local_38;
  }
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x38))(*(longlong **)(param_1 + 0x18),&local_48);
  puVar1 = &DAT_149dfb77a;
  if (local_40 != 0) {
    puVar1 = local_48;
  }
  FUN_140002266(param_2,L"FOnlineAsyncEventSteamConnectionFailed RemoteId: %s Reason: %s",puVar1,
                puVar2);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fb4660 FUN_148fb4660 body=67 status=ok
// SIG undefined FUN_148fb4660(void)

void FUN_148fb4660(longlong param_1)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_1 + 0x10) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x10) + 0xda) == '\x01')) {
    lVar1 = FUN_140272950(&DAT_14cb8e468);
    if (lVar1 != 0) {
      FUN_148fbf2b4(lVar1,*(undefined8 *)(param_1 + 0x18));
      return;
    }
  }
  return;
}



// FUNCTION 148fb46a3 FUN_148fb46a3 body=38 status=ok
// SIG undefined FUN_148fb46a3(void)

void FUN_148fb46a3(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = SteamGameServer_GetHSteamUser();
  uVar1 = SteamInternal_FindOrCreateGameServerInterface(uVar2,"SteamNetworking006");
  *param_1 = uVar1;
  return;
}



// FUNCTION 148fb46ca FUN_148fb46ca body=29 status=ok
// SIG undefined FUN_148fb46ca(void)

undefined8 FUN_148fb46ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fb46e8 FUN_148fb46e8 body=32 status=ok
// SIG undefined FUN_148fb46e8(void)

undefined8 FUN_148fb46e8(undefined8 param_1,undefined8 param_2)

{
  FUN_140002266(param_2,L"FOnlineAsyncEventSteamShutdown shutdown received.");
  return param_2;
}



// FUNCTION 148fb4712 FUN_148fb4712 body=124 status=ok
// SIG undefined FUN_148fb4712(void)

undefined8 FUN_148fb4712(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x30))(*(longlong **)(param_1 + 0x18),&local_28);
  puVar1 = local_28;
  if (local_20 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,
                L"FOnlineAsyncEventSteamRichPresenceUpdate got new information about user %s",puVar1
               );
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148fb4790 FUN_148fb4790 body=38 status=ok
// SIG undefined FUN_148fb4790(void)

undefined8 FUN_148fb4790(undefined8 param_1,int param_2)

{
  FUN_148fab8b0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fb47b6 FUN_148fb47b6 body=347 status=ok
// SIG undefined FUN_148fb47b6(void)

void FUN_148fb47b6(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar2 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,(undefined1 *)(param_1 + 8),1);
  }
  else {
    *(undefined1 *)(param_1 + 8) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    FUN_14600ba48(&local_48);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    plVar4 = *(longlong **)(param_1 + 0x28);
    *(ulonglong *)(param_1 + 0x20) = CONCAT44(uStack_44,local_48);
    *(ulonglong *)(param_1 + 0x28) = CONCAT44(uStack_3c,uStack_40);
    local_38._0_4_ = (undefined4)uVar6;
    local_48 = (undefined4)local_38;
    local_38._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
    uStack_44 = local_38._4_4_;
    uStack_30._0_4_ = SUB84(plVar4,0);
    uStack_40 = (undefined4)uStack_30;
    uStack_30._4_4_ = (undefined4)((ulonglong)plVar4 >> 0x20);
    uStack_3c = uStack_30._4_4_;
    local_38 = uVar6;
    uStack_30 = plVar4;
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
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  plVar7 = (longlong *)FUN_14021219d(param_2,param_1 + 0x10);
  lVar3 = *(longlong *)(param_1 + 0x20);
  plVar4 = *(longlong **)(param_1 + 0x28);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  puVar8 = (undefined8 *)(lVar3 + 0x18);
  puVar5 = *(undefined8 **)plVar7[1];
  if ((undefined8 *)((longlong *)plVar7[1])[1] < puVar5 + 1) {
    if ((*(byte *)((longlong)plVar7 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar7 + 0x170))(plVar7,puVar8,8);
    }
    else {
      thunk_FUN_146821949(plVar7);
    }
  }
  else {
    *puVar8 = *puVar5;
    *(longlong *)plVar7[1] = *(longlong *)plVar7[1] + 8;
  }
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
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fb4912 FUN_148fb4912 body=29 status=ok
// SIG undefined FUN_148fb4912(void)

undefined8 FUN_148fb4912(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fb496e FUN_148fb496e body=29 status=ok
// SIG undefined FUN_148fb496e(void)

undefined8 FUN_148fb496e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fb498c FUN_148fb498c body=203 status=ok
// SIG undefined FUN_148fb498c(void)

void FUN_148fb498c(longlong param_1,longlong *param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,(undefined1 *)(param_1 + 8),1);
  }
  else {
    *(undefined1 *)(param_1 + 8) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  piVar2 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar2 + 1) {
    local_24 = (uint)*(byte *)(param_1 + 0x10);
    (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_2);
    }
    *(bool *)(param_1 + 0x10) = local_24 != 0;
  }
  else {
    *(bool *)(param_1 + 0x10) = *piVar2 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fb4a58 FUN_148fb4a58 body=100 status=ok
// SIG undefined FUN_148fb4a58(void)

void FUN_148fb4a58(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (plVar3 != (longlong *)0x0) {
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
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
                    /* WARNING: Could not recover jumptable at 0x000148fb4a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148fb4abc FUN_148fb4abc body=57 status=ok
// SIG undefined FUN_148fb4abc(void)

undefined8 * FUN_148fb4abc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba44600;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fb4af6 FUN_148fb4af6 body=42 status=ok
// SIG undefined FUN_148fb4af6(void)

undefined8 FUN_148fb4af6(longlong *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x30))();
  FUN_140002266(param_2,L"FOnlineAsyncTaskSteamRequestEncryptedAppTicket bWasSuccessful: %d",uVar1);
  return param_2;
}



// FUNCTION 148fb4b20 FUN_148fb4b20 body=154 status=ok
// SIG undefined FUN_148fb4b20(void)

void FUN_148fb4b20(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x228))(*(longlong **)(param_1 + 0x10),&local_28);
  if (local_28 != 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x40);
    bVar4 = *(int *)(param_1 + 0x1c) != 0;
    *(uint *)(local_28 + 0x28) = bVar4 ^ 3;
    FUN_148fb9644(local_28 + 8,bVar4,uVar3);
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fb4bc8 FUN_148fb4bc8 body=260 status=ok
// SIG undefined FUN_148fb4bc8(void)

ulonglong FUN_148fb4bc8(longlong param_1)

{
  byte bVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  byte *local_30;
  byte local_1a;
  char local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x28) == '\0') {
    plVar2 = (longlong *)SteamInternal_ContextInit(&PTR_FUN_14c764850);
    plVar2 = (longlong *)*plVar2;
    if (plVar2 != (longlong *)0x0) {
      if (*(int *)(param_1 + 0x38) < 1) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined8 *)(param_1 + 0x30);
      }
      uVar3 = (**(code **)(*plVar2 + 0xa8))(plVar2,uVar3);
      *(undefined8 *)(param_1 + 0x20) = uVar3;
      *(undefined1 *)(param_1 + 0x28) = 1;
    }
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    LOCK();
    *(undefined4 *)(param_1 + 0x1c) = 0;
    UNLOCK();
    LOCK();
    uVar6 = *(uint *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x18) = 0;
    uVar5 = (ulonglong)uVar6;
    UNLOCK();
  }
  else {
    puVar4 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764830);
    plVar2 = (longlong *)*puVar4;
    local_19 = '\0';
    bVar1 = (**(code **)(*plVar2 + 0x58))(plVar2,*(undefined8 *)(param_1 + 0x20));
    LOCK();
    *(uint *)(param_1 + 0x18) = (uint)bVar1;
    UNLOCK();
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x18);
    if (*(uint *)(param_1 + 0x18) != 0) {
      local_30 = &local_1a;
      local_38 = 0x9a;
      uVar5 = (**(code **)(*plVar2 + 0x68))(plVar2,*(undefined8 *)(param_1 + 0x20),param_1 + 0x40,4)
      ;
      uVar6 = 0;
      if (((char)uVar5 != '\0') && (uVar6 = 0, local_19 == '\0')) {
        uVar6 = local_1a ^ 1;
      }
      LOCK();
      *(uint *)(param_1 + 0x1c) = uVar6;
      UNLOCK();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fb4cd0 FUN_148fb4cd0 body=38 status=ok
// SIG undefined FUN_148fb4cd0(void)

void FUN_148fb4cd0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = SteamAPI_GetHSteamUser();
  uVar1 = SteamInternal_FindOrCreateUserInterface(uVar2,"SteamFriends017");
  *param_1 = uVar1;
  return;
}



// FUNCTION 148fb4cf6 FUN_148fb4cf6 body=32 status=ok
// SIG undefined FUN_148fb4cf6(void)

void FUN_148fb4cf6(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = SteamInternal_FindOrCreateUserInterface(0,"SteamUtils010");
  *param_1 = uVar1;
  return;
}



// FUNCTION 148fb4d16 FUN_148fb4d16 body=32 status=ok
// SIG undefined FUN_148fb4d16(void)

undefined8 FUN_148fb4d16(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FOnlineFriendsSteam::ReadFriendsList() async task completed successfully")
  ;
  return param_2;
}



// FUNCTION 148fb4d3e FUN_148fb4d3e body=32 status=ok
// SIG undefined FUN_148fb4d3e(void)

undefined8 FUN_148fb4d3e(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FOnlineFriendsSteam::ReadBlockedPlayersList()");
  return param_2;
}



// FUNCTION 148fb4d66 FUN_148fb4d66 body=38 status=ok
// SIG undefined FUN_148fb4d66(void)

undefined8 FUN_148fb4d66(undefined8 param_1,int param_2)

{
  FUN_148fb5a96();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fb4d8c FUN_148fb4d8c body=144 status=ok
// SIG undefined FUN_148fb4d8c(void)

undefined8 FUN_148fb4d8c(longlong *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = (**(code **)(*param_1 + 0x30))();
  FUN_148fb5af8(param_1,&local_38);
  puVar2 = local_38;
  if (local_30 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,
                L"FOnlineAsyncTaskSteamRetrieveLeaderboardEntries Task Type %s bWasSuccessful: %d",
                puVar2,uVar1);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148fb4e1e FUN_148fb4e1e body=2267 status=ok
// SIG undefined FUN_148fb4e1e(void)

void FUN_148fb4e1e(longlong param_1)

{
  ulonglong *puVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong *puVar8;
  longlong ***ppplVar9;
  char cVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  char *pcVar14;
  size_t sVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  undefined1 auStack_258 [32];
  undefined8 local_238;
  undefined4 local_230;
  longlong *local_220;
  int local_214;
  longlong local_210;
  undefined4 local_204;
  longlong **local_200;
  longlong *local_1f8;
  longlong ***local_1f0;
  ulonglong *local_1e8;
  longlong ***local_1e0;
  ulonglong *local_1d8;
  ulonglong local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  longlong ***local_1b0;
  ulonglong *local_1a8;
  longlong local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  longlong local_98 [4];
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_258;
  local_78 = 0;
  local_70 = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  puVar12 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c7648b0);
  if (0 < *(int *)(param_1 + 0x60)) {
    plVar7 = (longlong *)*puVar12;
    local_220 = (longlong *)(param_1 + 0x40);
    iVar20 = 0;
    do {
      local_1d0 = 0;
      local_238 = 0;
      local_230 = 0;
      cVar10 = (**(code **)(*plVar7 + 0xf0))
                         (plVar7,*(undefined8 *)(param_1 + 0x58),iVar20,&local_1d0);
      if (cVar10 != '\0') {
        FUN_140dfab96(&local_1e0,&local_1d0);
        ppplVar9 = local_1e0;
        lVar16 = *local_220;
        if (0 < *(int *)(lVar16 + 0x38)) {
          lVar17 = 0;
          lVar18 = 0;
          do {
            puVar12 = *(undefined8 **)(*(longlong *)(lVar16 + 0x30) + 0x10 + lVar17);
            cVar10 = (**(code **)*puVar12)(puVar12,ppplVar9);
            if (cVar10 != '\0') {
              lVar17 = lVar17 + *(longlong *)(lVar16 + 0x30);
              if (lVar17 != 0) goto LAB_148fb50bf;
              break;
            }
            lVar18 = lVar18 + 1;
            lVar17 = lVar17 + 0x78;
          } while (lVar18 < *(int *)(lVar16 + 0x38));
        }
        puVar12 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764890);
        pcVar14 = (char *)(**(code **)(*(longlong *)*puVar12 + 0x38))
                                    ((longlong *)*puVar12,local_1d0);
        local_b0 = 0;
        if (pcVar14 == (char *)0x0) {
          local_a8 = 0;
          local_a0 = 0;
        }
        else {
          sVar15 = strlen(pcVar14);
          FUN_1446e6fe8(&local_1b0,pcVar14,sVar15 & 0xffffffff,1);
        }
        FUN_140056680(&local_1f0,local_a8);
        if (local_b0 != 0) {
          FUN_1400020a8();
        }
        FUN_140dfab96(&local_200,&local_1d0);
        plVar4 = local_1f8;
        local_1b0 = (longlong ***)local_200;
        local_1a8 = (ulonglong *)local_1f8;
        if (local_1f8 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_1f8 + 1) = (int)local_1f8[1] + 1;
          UNLOCK();
          if (local_1f8 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_1f8 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_1f8)(local_1f8);
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
        lVar16 = *local_220;
        iVar6 = *(int *)(lVar16 + 0x38);
        *(uint *)(lVar16 + 0x38) = iVar6 + 1U;
        if (*(uint *)(lVar16 + 0x3c) < iVar6 + 1U) {
          FUN_148fb5bce((longlong *)(lVar16 + 0x30),iVar6);
        }
        lVar17 = (longlong)iVar6 * 0x78 + *(longlong *)(lVar16 + 0x30);
        FUN_148fb5b34(lVar17,&local_1f0,&local_1b0);
        puVar8 = local_1a8;
        if (local_1a8 != (ulonglong *)0x0) {
          LOCK();
          plVar4 = (longlong *)(local_1a8 + 1);
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*local_1a8)(local_1a8);
            LOCK();
            piVar2 = (int *)((longlong)puVar8 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*puVar8 + 0x10))(puVar8);
            }
          }
        }
        if ((longlong ****)local_1f0 != (longlong ****)0x0) {
          FUN_1400020a8();
        }
LAB_148fb50bf:
        *(undefined4 *)(lVar17 + 0x20) = (undefined4)local_1c8;
        local_204 = 1;
        local_1f0 = local_1e0;
        local_1e8 = local_1d8;
        if (local_1d8 != (ulonglong *)0x0) {
          LOCK();
          *(int *)(local_1d8 + 1) = (int)local_1d8[1] + 1;
          UNLOCK();
        }
        local_1b0 = (longlong ***)&local_1f0;
        local_1a8 = (ulonglong *)&local_204;
        FUN_148fb5c5e(local_98,&local_200,&local_1b0);
        puVar8 = local_1e8;
        if (local_1e8 != (ulonglong *)0x0) {
          LOCK();
          puVar5 = local_1e8 + 1;
          *(int *)puVar5 = (int)*puVar5 + -1;
          UNLOCK();
          if ((int)*puVar5 == 0) {
            (**(code **)*local_1e8)(local_1e8);
            LOCK();
            piVar2 = (int *)((longlong)puVar8 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*puVar8 + 0x10))(puVar8);
            }
          }
        }
        if ((*(uint *)(param_1 + 0x68) | 4) != 5) {
          uVar13 = FUN_14001cc68(0x70,0x10);
          local_238 = CONCAT71(local_238._1_7_,iVar20 + 1 == *(int *)(param_1 + 0x60));
          FUN_148fad7b4(uVar13,*(undefined8 *)(param_1 + 0x10),local_1e0,local_220);
          FUN_1410d2116(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x210));
        }
        puVar8 = local_1d8;
        if (local_1d8 != (ulonglong *)0x0) {
          LOCK();
          puVar5 = local_1d8 + 1;
          *(int *)puVar5 = (int)*puVar5 + -1;
          UNLOCK();
          if ((int)*puVar5 == 0) {
            (**(code **)*local_1d8)(local_1d8);
            LOCK();
            piVar2 = (int *)((longlong)puVar8 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*puVar8 + 0x10))(puVar8);
            }
          }
        }
      }
      iVar20 = iVar20 + 1;
    } while (iVar20 < *(int *)(param_1 + 0x60));
  }
  if (*(int *)(param_1 + 0x68) == 5) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x60))();
    puVar8 = local_1a8;
    ppplVar9 = local_1b0;
    if (local_1a8 != (ulonglong *)0x0) {
      LOCK();
      *(int *)(local_1a8 + 1) = (int)local_1a8[1] + 1;
      puVar5 = local_1a8;
      UNLOCK();
      if (local_1a8 != (ulonglong *)0x0) {
        LOCK();
        puVar1 = local_1a8 + 1;
        *(int *)puVar1 = (int)*puVar1 + -1;
        UNLOCK();
        if ((int)*puVar1 == 0) {
          (**(code **)*puVar5)(puVar5);
          LOCK();
          piVar2 = (int *)((longlong)puVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*puVar5 + 0x10))(puVar5);
          }
        }
      }
    }
    lVar16 = *(longlong *)(param_1 + 0x40);
    if (0 < *(int *)(lVar16 + 0x38)) {
      lVar18 = 0;
      lVar17 = 0;
      do {
        cVar10 = (**(code **)**(undefined8 **)(*(longlong *)(lVar16 + 0x30) + 0x10 + lVar18))();
        if (cVar10 != '\0') {
          if (*(longlong *)(lVar16 + 0x30) + lVar18 != 0) {
            (*(code *)(*ppplVar9)[3])
                      (ppplVar9,*(undefined4 *)(*(longlong *)(lVar16 + 0x30) + 0x20 + lVar18),
                       *(undefined4 *)(param_1 + 0x70),param_1 + 0x40);
            if (puVar8 != (ulonglong *)0x0) {
              LOCK();
              puVar5 = puVar8 + 1;
              *(int *)puVar5 = (int)*puVar5 + -1;
              UNLOCK();
              if ((int)*puVar5 == 0) {
                (**(code **)*puVar8)(puVar8);
                LOCK();
                piVar2 = (int *)((longlong)puVar8 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*puVar8 + 0x10))(puVar8);
                }
              }
            }
            goto LAB_148fb5649;
          }
          break;
        }
        lVar17 = lVar17 + 1;
        lVar18 = lVar18 + 0x78;
      } while (lVar17 < *(int *)(lVar16 + 0x38));
    }
    if (puVar8 != (ulonglong *)0x0) {
      LOCK();
      puVar5 = puVar8 + 1;
      *(int *)puVar5 = (int)*puVar5 + -1;
      UNLOCK();
      if ((int)*puVar5 == 0) {
        (**(code **)*puVar8)(puVar8);
        LOCK();
        piVar2 = (int *)((longlong)puVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*puVar8 + 0x10))(puVar8);
        }
      }
    }
  }
  local_1d0 = local_1d0 & 0xffffffffffffff00;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1b8 = 0;
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar16 = 0;
    do {
      local_220 = *(longlong **)(param_1 + 0x30);
      local_1b0 = (longlong ***)local_220[lVar16 * 2];
      puVar8 = (ulonglong *)local_220[lVar16 * 2 + 1];
      if (puVar8 == (ulonglong *)0x0) {
        local_1a8 = (ulonglong *)0x0;
      }
      else {
        LOCK();
        *(int *)(puVar8 + 1) = (int)puVar8[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(puVar8 + 1) = (int)puVar8[1] + 1;
        UNLOCK();
        local_1a8 = puVar8;
      }
      puVar5 = local_1a8;
      local_210 = lVar16;
      uVar11 = (*(code *)(*local_1b0)[8])();
      iVar20 = FUN_148fb5ff6(local_98,uVar11,&local_1b0);
      lVar17 = (longlong)iVar20 * 0x20 + local_98[0];
      if (puVar5 != (ulonglong *)0x0) {
        LOCK();
        puVar1 = puVar5 + 1;
        *(int *)puVar1 = (int)*puVar1 + -1;
        UNLOCK();
        if ((int)*puVar1 == 0) {
          local_214 = iVar20;
          (**(code **)*puVar5)(puVar5);
          LOCK();
          piVar2 = (int *)((longlong)puVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          iVar20 = local_214;
          if (*piVar2 == 0) {
            (**(code **)(*puVar5 + 0x10))(puVar5);
            iVar20 = local_214;
          }
        }
      }
      if (puVar8 != (ulonglong *)0x0) {
        LOCK();
        puVar5 = puVar8 + 1;
        *(int *)puVar5 = (int)*puVar5 + -1;
        UNLOCK();
        if ((int)*puVar5 == 0) {
          (**(code **)*puVar8)(puVar8);
          LOCK();
          piVar2 = (int *)((longlong)puVar8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*puVar8 + 0x10))(puVar8);
          }
        }
      }
      if ((iVar20 == -1) || (lVar17 == 0)) {
        local_220 = local_220 + lVar16 * 2;
        lVar16 = *(longlong *)(param_1 + 0x40);
        if (0 < *(int *)(lVar16 + 0x38)) {
          lVar17 = *local_220;
          lVar19 = 0;
          lVar18 = 0;
          do {
            puVar12 = *(undefined8 **)(*(longlong *)(lVar16 + 0x30) + 0x10 + lVar19);
            cVar10 = (**(code **)*puVar12)(puVar12,lVar17);
            if (cVar10 != '\0') {
              lVar19 = lVar19 + *(longlong *)(lVar16 + 0x30);
              if (lVar19 != 0) goto LAB_148fb55f6;
              break;
            }
            lVar18 = lVar18 + 1;
            lVar19 = lVar19 + 0x78;
          } while (lVar18 < *(int *)(lVar16 + 0x38));
        }
        lVar16 = *local_220;
        puVar12 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764890);
        pcVar14 = (char *)(**(code **)(*(longlong *)*puVar12 + 0x38))
                                    ((longlong *)*puVar12,*(undefined8 *)(lVar16 + 0x18));
        local_b0 = 0;
        if (pcVar14 == (char *)0x0) {
          local_a8 = 0;
          local_a0 = 0;
        }
        else {
          sVar15 = strlen(pcVar14);
          FUN_1446e6fe8(&local_1b0,pcVar14,sVar15 & 0xffffffff,1);
        }
        FUN_140056680(&local_1e0,local_a8);
        if (local_b0 != 0) {
          FUN_1400020a8();
        }
        lVar17 = *(longlong *)(param_1 + 0x40);
        iVar20 = *(int *)(lVar17 + 0x38);
        *(uint *)(lVar17 + 0x38) = iVar20 + 1U;
        if (*(uint *)(lVar17 + 0x3c) < iVar20 + 1U) {
          FUN_148fb5bce((longlong *)(lVar17 + 0x30),iVar20);
        }
        lVar19 = (longlong)iVar20 * 0x78 + *(longlong *)(lVar17 + 0x30);
        FUN_140df9946(lVar16,&local_1f0);
        local_1b0 = local_1f0;
        local_1a8 = local_1e8;
        if (local_1e8 != (ulonglong *)0x0) {
          LOCK();
          *(int *)(local_1e8 + 1) = (int)local_1e8[1] + 1;
          UNLOCK();
        }
        FUN_148fb5b34(lVar19,&local_1e0,&local_1b0);
        puVar8 = local_1a8;
        if (local_1a8 != (ulonglong *)0x0) {
          LOCK();
          puVar5 = local_1a8 + 1;
          *(int *)puVar5 = (int)*puVar5 + -1;
          UNLOCK();
          if ((int)*puVar5 == 0) {
            (**(code **)*local_1a8)(local_1a8);
            LOCK();
            piVar2 = (int *)((longlong)puVar8 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*puVar8 + 0x10))(puVar8);
            }
          }
        }
        puVar8 = local_1e8;
        if (local_1e8 != (ulonglong *)0x0) {
          LOCK();
          puVar5 = local_1e8 + 1;
          *(int *)puVar5 = (int)*puVar5 + -1;
          UNLOCK();
          if ((int)*puVar5 == 0) {
            (**(code **)*local_1e8)(local_1e8);
            LOCK();
            piVar2 = (int *)((longlong)puVar8 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*puVar8 + 0x10))(puVar8);
            }
          }
        }
        if ((*(int *)(param_1 + 0x68) != 1) &&
           (lVar16 = *(longlong *)(param_1 + 0x40), 0 < *(int *)(lVar16 + 0x28))) {
          lVar18 = 0;
          lVar17 = 0;
          do {
            local_1b0 = (longlong ***)(*(longlong *)(lVar16 + 0x20) + lVar18);
            local_1a8 = &local_1d0;
            FUN_140dfa58e(lVar19 + 0x28,&local_1f0,&local_1b0,0);
            lVar17 = lVar17 + 1;
            lVar16 = *(longlong *)(param_1 + 0x40);
            lVar18 = lVar18 + 0x18;
          } while (lVar17 < *(int *)(lVar16 + 0x28));
        }
        if ((longlong ****)local_1e0 != (longlong ****)0x0) {
          FUN_1400020a8();
        }
LAB_148fb55f6:
        *(undefined4 *)(lVar19 + 0x20) = 0xffffffff;
      }
      lVar16 = local_210 + 1;
    } while (lVar16 < *(int *)(param_1 + 0x38));
  }
  if ((*(int *)(param_1 + 0x60) == 0) && (*(int *)(param_1 + 0x68) != 1)) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x40) = 2;
    *(undefined1 *)(param_1 + 0x74) = 1;
  }
  FUN_140c3a2ac(&local_1d0);
LAB_148fb5649:
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_148fb630e(local_98);
  if ((local_48 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148fb56fa FUN_148fb56fa body=209 status=ok
// SIG undefined FUN_148fb56fa(void)

void FUN_148fb56fa(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x74) == '\x01') {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x60))(*(longlong **)(param_1 + 0x10),&local_38);
    if (local_30 == (longlong *)0x0) {
      (**(code **)(*local_38 + 0x40))(local_38,*(int *)(param_1 + 0x1c) != 0);
    }
    else {
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
          piVar2 = (int *)((longlong)local_30 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_30 + 0x10))(local_30);
          }
        }
      }
      (**(code **)(*local_38 + 0x40))(local_38,*(int *)(param_1 + 0x1c) != 0);
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
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fb57cc FUN_148fb57cc body=713 status=ok
// SIG undefined FUN_148fb57cc(void)

undefined8 * FUN_148fb57cc(longlong param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar2;
  longlong *plVar3;
  byte bVar4;
  undefined8 *puVar5;
  undefined8 *extraout_RAX;
  longlong lVar6;
  void *_Dst;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  int iVar12;
  ulonglong _Size;
  uint uVar13;
  undefined1 auStack_98 [32];
  int local_78;
  char *local_70;
  char local_59;
  char local_58;
  undefined7 uStack_57;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar5 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764830);
  plVar2 = (longlong *)*puVar5;
  if (*(char *)(param_1 + 0x28) != '\0') goto LAB_148fb5808;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x60))(*(longlong **)(param_1 + 0x10),&local_58);
  lVar9 = CONCAT71(uStack_57,local_58);
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
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar9 + 0x50);
  EnterCriticalSection(lpCriticalSection);
  puVar5 = (undefined8 *)FUN_148fae6dc(lVar9,*(undefined8 *)(param_1 + 0x40));
  if (puVar5 == (undefined8 *)0x0) {
    lVar9 = -1;
  }
  else {
    lVar9 = puVar5[4];
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
    puVar5 = extraout_RAX;
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_50 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      puVar5 = (undefined8 *)(**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        puVar5 = (undefined8 *)(**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
  if (lVar9 == -1) goto LAB_148fb5808;
  puVar5 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c7648b0);
  plVar3 = (longlong *)*puVar5;
  iVar12 = *(int *)(param_1 + 0x68);
  if (iVar12 == 2) {
    lVar6 = *plVar3;
    local_78 = 0;
    uVar11 = 2;
    iVar12 = 0;
LAB_148fb59ff:
    puVar5 = (undefined8 *)(**(code **)(lVar6 + 0xe0))(plVar3,lVar9,uVar11,iVar12);
    *(undefined8 **)(param_1 + 0x20) = puVar5;
  }
  else {
    if (iVar12 == 3) {
      iVar8 = *(int *)(param_1 + 0x6c) - *(int *)(param_1 + 0x70);
      iVar12 = 1;
      if (1 < iVar8) {
        iVar12 = iVar8;
      }
      local_78 = *(int *)(param_1 + 0x70) + *(int *)(param_1 + 0x6c);
      lVar6 = *plVar3;
      uVar11 = 0;
      goto LAB_148fb59ff;
    }
    if (iVar12 == 4) {
      local_78 = *(int *)(param_1 + 0x70);
      lVar6 = *plVar3;
      iVar12 = -local_78;
      uVar11 = 1;
      goto LAB_148fb59ff;
    }
    uVar7 = *(uint *)(param_1 + 0x38);
    puVar5 = (undefined8 *)(ulonglong)uVar7;
    if (0 < (int)uVar7) {
      uVar13 = 100;
      if (uVar7 < 100) {
        uVar13 = uVar7;
      }
      _Size = (ulonglong)(uVar13 * 8);
      _Dst = (void *)FUN_14001cc68(_Size);
      uVar10 = 0;
      memset(_Dst,0,_Size);
      do {
        puVar5 = (undefined8 *)
                 (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x30) + uVar10 * 2) + 0x18))()
        ;
        *(undefined8 *)((longlong)_Dst + uVar10) = *puVar5;
        uVar10 = uVar10 + 8;
      } while (_Size != uVar10);
      puVar5 = (undefined8 *)(**(code **)(*plVar3 + 0xe8))(plVar3,lVar9,_Dst,uVar13);
      *(undefined8 **)(param_1 + 0x20) = puVar5;
      if (_Dst != (void *)0x0) {
        puVar5 = (undefined8 *)FUN_1400020a8(_Dst);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x28) = 1;
LAB_148fb5808:
  if (*(longlong *)(param_1 + 0x20) == 0) {
    if (*(char *)(param_1 + 0x28) == '\x01') {
      LOCK();
      *(undefined4 *)(param_1 + 0x18) = 1;
      UNLOCK();
      LOCK();
      uVar7 = *(uint *)(param_1 + 0x1c);
      *(uint *)(param_1 + 0x1c) = 0;
      puVar5 = (undefined8 *)(ulonglong)uVar7;
      UNLOCK();
    }
  }
  else {
    local_58 = '\0';
    bVar4 = (**(code **)(*plVar2 + 0x58))(plVar2);
    LOCK();
    *(uint *)(param_1 + 0x18) = (uint)bVar4;
    UNLOCK();
    puVar5 = (undefined8 *)(ulonglong)*(uint *)(param_1 + 0x18);
    if (*(uint *)(param_1 + 0x18) != 0) {
      local_70 = &local_59;
      local_78 = 0x451;
      puVar5 = (undefined8 *)
               (**(code **)(*plVar2 + 0x68))
                         (plVar2,*(undefined8 *)(param_1 + 0x20),(longlong *)(param_1 + 0x50),0x18);
      uVar7 = 0;
      if ((((char)puVar5 != '\0') && (local_58 == '\0')) && (local_59 == '\0')) {
        uVar7 = (uint)(*(longlong *)(param_1 + 0x50) != -1);
      }
      LOCK();
      *(uint *)(param_1 + 0x1c) = uVar7;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fb5a96 FUN_148fb5a96 body=97 status=ok
// SIG undefined FUN_148fb5a96(void)

void FUN_148fb5a96(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba44850;
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
  FUN_14127b1cd(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148fb5af8 FUN_148fb5af8 body=60 status=ok
// SIG undefined FUN_148fb5af8(void)

undefined8 FUN_148fb5af8(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  wchar_t *pwVar2;
  
  uVar1 = *(int *)(param_1 + 0x68) - 1;
  if (uVar1 < 5) {
    pwVar2 = (wchar_t *)(&DAT_14ba4711c + *(int *)(&DAT_14ba4711c + (ulonglong)uVar1 * 4));
  }
  else {
    pwVar2 = L"Invalid";
  }
  FUN_140056680(param_2,pwVar2);
  return param_2;
}



// FUNCTION 148fb5b34 FUN_148fb5b34 body=153 status=ok
// SIG undefined FUN_148fb5b34(void)

undefined8 * FUN_148fb5b34(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
  param_1[2] = *param_3;
  lVar2 = param_3[1];
  param_1[3] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  return param_1;
}



// FUNCTION 148fb5bce FUN_148fb5bce body=143 status=ok
// SIG undefined FUN_148fb5bce(void)

void FUN_148fb5bce(longlong param_1,int param_2)

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



// FUNCTION 148fb5c5e FUN_148fb5c5e body=400 status=ok
// SIG undefined FUN_148fb5c5e(void)

undefined4 * FUN_148fb5c5e(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148fb5df0(param_1,local_40);
  puVar2 = (undefined8 *)*param_3;
  puVar3 = (undefined4 *)param_3[1];
  plVar9 = (longlong *)*puVar2;
  *local_38 = plVar9;
  lVar12 = puVar2[1];
  local_38[1] = lVar12;
  if (lVar12 == 0) {
    *(undefined4 *)(local_38 + 2) = *puVar3;
    *(undefined4 *)(local_38 + 3) = 0xffffffff;
  }
  else {
    LOCK();
    *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
    UNLOCK();
    plVar9 = (longlong *)*local_38;
    plVar4 = (longlong *)local_38[1];
    *(undefined4 *)(local_38 + 2) = *puVar3;
    *(undefined4 *)(local_38 + 3) = 0xffffffff;
    local_44 = local_40[0];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      uVar7 = (**(code **)(*plVar9 + 0x40))();
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
      goto LAB_148fb5cc7;
    }
  }
  local_44 = local_40[0];
  uVar7 = (**(code **)(*plVar9 + 0x40))();
LAB_148fb5cc7:
  cVar6 = FUN_148fb5ed6(param_1,uVar7,local_38,&local_44);
  uVar5 = local_44;
  if (cVar6 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar11 = 1;
    if (3 < uVar8) {
      uVar10 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar12 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar12 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar11 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_38 + 0x1c) = uVar7;
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 3) =
           *(undefined4 *)
            (lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar11;
      FUN_148fb6124(param_1);
    }
  }
  *param_2 = uVar5;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fb5df0 FUN_148fb5df0 body=229 status=ok
// SIG undefined FUN_148fb5df0(void)

int * FUN_148fb5df0(longlong *param_1,int *param_2)

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



// FUNCTION 148fb5ed6 FUN_148fb5ed6 body=287 status=ok
// SIG undefined FUN_148fb5ed6(void)

undefined8 FUN_148fb5ed6(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_48 = *param_3;
    plVar4 = (longlong *)param_3[1];
    local_40 = plVar4;
    if (plVar4 == (longlong *)0x0) {
      iVar9 = FUN_148fb5ff6(param_1,param_2,&local_48);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      iVar9 = FUN_148fb5ff6(param_1);
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
    if (iVar9 != -1) {
      puVar3 = (undefined4 *)(*param_1 + (longlong)iVar9 * 0x20);
      plVar4 = *(longlong **)(*param_1 + 8 + (longlong)iVar9 * 0x20);
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
      uVar5 = *(undefined4 *)param_3;
      uVar6 = *(undefined4 *)((longlong)param_3 + 4);
      uVar7 = *(undefined4 *)(param_3 + 1);
      uVar8 = *(undefined4 *)((longlong)param_3 + 0xc);
      *(undefined8 *)(puVar3 + 4) = param_3[2];
      *puVar3 = uVar5;
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      FUN_148fb60b2(param_1,*param_4);
      *param_4 = iVar9;
      uVar10 = 1;
      goto LAB_148fb5efe;
    }
  }
  uVar10 = 0;
LAB_148fb5efe:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fb5ff6 FUN_148fb5ff6 body=188 status=ok
// SIG undefined FUN_148fb5ff6(void)

int FUN_148fb5ff6(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar7 = *param_1;
      do {
        lVar8 = (longlong)iVar3 * 0x20;
        puVar4 = *(undefined8 **)(lVar7 + lVar8);
        plVar6 = *(longlong **)(lVar7 + 8 + lVar8);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
        }
        if (puVar4 == (undefined8 *)*param_3) {
          cVar5 = '\x01';
        }
        else {
          cVar5 = (**(code **)*puVar4)();
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
        if (cVar5 != '\0') {
          return iVar3;
        }
        lVar7 = *param_1;
        iVar3 = *(int *)(lVar7 + 0x18 + lVar8);
      } while (iVar3 != -1);
    }
  }
  return -1;
}



// FUNCTION 148fb60b2 FUN_148fb60b2 body=114 status=ok
// SIG undefined FUN_148fb60b2(void)

void FUN_148fb60b2(longlong *param_1,int param_2)

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



// FUNCTION 148fb6124 FUN_148fb6124 body=489 status=ok
// SIG undefined FUN_148fb6124(void)

void FUN_148fb6124(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar6 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)((longlong)plVar10 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar3 != uVar11);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar6 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar12 = local_68._4_4_;
      local_68 = uVar6;
      do {
        lVar4 = *local_80;
        lVar8 = (longlong)iVar12 * 0x20;
        plVar10 = *(longlong **)(lVar4 + lVar8);
        plVar5 = *(longlong **)(lVar4 + 8 + lVar8);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        iVar7 = (**(code **)(*plVar10 + 0x40))();
        uVar9 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar9;
        *(int *)(lVar4 + lVar8 + 0x1c) = iVar7;
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)(lVar4 + lVar8 + 0x18) =
             *(undefined4 *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(int *)((longlong)plVar10 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar12;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar5 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
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
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar12 = local_68._4_4_;
        uVar6 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar6;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148fb630e FUN_148fb630e body=52 status=ok
// SIG undefined FUN_148fb630e(void)

void FUN_148fb630e(longlong *param_1)

{
  FUN_148fb6342();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148fb6342 FUN_148fb6342 body=343 status=ok
// SIG undefined FUN_148fb6342(void)

void FUN_148fb6342(longlong *param_1)

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
      plVar4 = *(longlong **)(*local_70 + 8 + (longlong)iStack_54 * 0x20);
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



// FUNCTION 148fb649a FUN_148fb649a body=38 status=ok
// SIG undefined FUN_148fb649a(void)

undefined8 FUN_148fb649a(undefined8 param_1,int param_2)

{
  FUN_148fb6722();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fb64c0 FUN_148fb64c0 body=145 status=ok
// SIG undefined FUN_148fb64c0(void)

undefined8 FUN_148fb64c0(longlong *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*(longlong *)param_1[6] + 0x38))((longlong *)param_1[6],&local_30);
  puVar2 = local_30;
  if (local_28 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  uVar1 = (**(code **)(*param_1 + 0x30))(param_1);
  FUN_140002266(param_2,L"FOnlineAsyncTaskSteamRetrieveStats bWasSuccessful: %d UserId: %s",uVar1,
                puVar2);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148fb6552 FUN_148fb6552 body=215 status=ok
// SIG undefined FUN_148fb6552(void)

void FUN_148fb6552(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x68) == '\x01') {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x60))(*(longlong **)(param_1 + 0x10),&local_38);
    if (local_30 == (longlong *)0x0) {
      (**(code **)(*local_38 + 0x40))(local_38,*(int *)(*(longlong *)(param_1 + 0x40) + 0x40) == 2);
    }
    else {
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
          piVar2 = (int *)((longlong)local_30 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_30 + 0x10))(local_30);
          }
        }
      }
      (**(code **)(*local_38 + 0x40))(local_38,*(int *)(*(longlong *)(param_1 + 0x40) + 0x40) == 2);
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
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fb662a FUN_148fb662a body=246 status=ok
// SIG undefined FUN_148fb662a(void)

ulonglong FUN_148fb662a(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  byte *local_30;
  byte local_1a;
  char local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x28) == '\x01') {
    lVar3 = *(longlong *)(param_1 + 0x20);
  }
  else {
    puVar4 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c7648b0);
    lVar3 = (**(code **)(*(longlong *)*puVar4 + 0x80))
                      ((longlong *)*puVar4,*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x18));
    *(longlong *)(param_1 + 0x20) = lVar3;
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  if (lVar3 == 0) {
    LOCK();
    *(undefined4 *)(param_1 + 0x1c) = 0;
    UNLOCK();
    LOCK();
    uVar6 = *(uint *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x18) = 1;
    uVar5 = (ulonglong)uVar6;
    UNLOCK();
  }
  else {
    puVar4 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764830);
    plVar1 = (longlong *)*puVar4;
    local_19 = '\0';
    bVar2 = (**(code **)(*plVar1 + 0x58))(plVar1,*(undefined8 *)(param_1 + 0x20));
    LOCK();
    *(uint *)(param_1 + 0x18) = (uint)bVar2;
    UNLOCK();
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x18);
    if (*(uint *)(param_1 + 0x18) != 0) {
      local_30 = &local_1a;
      local_38 = 0x44d;
      uVar5 = (**(code **)(*plVar1 + 0x68))
                        (plVar1,*(undefined8 *)(param_1 + 0x20),param_1 + 0x50,0x18);
      uVar6 = 0;
      if (((char)uVar5 != '\0') && (uVar6 = 0, local_19 == '\0')) {
        uVar6 = local_1a ^ 1;
      }
      LOCK();
      *(uint *)(param_1 + 0x1c) = uVar6;
      UNLOCK();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fb6722 FUN_148fb6722 body=110 status=ok
// SIG undefined FUN_148fb6722(void)

void FUN_148fb6722(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba44a00;
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
                    /* WARNING: Could not recover jumptable at 0x000148fb6784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148fb6790 FUN_148fb6790 body=145 status=ok
// SIG undefined FUN_148fb6790(void)

undefined8 FUN_148fb6790(longlong *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*(longlong *)param_1[6] + 0x38))((longlong *)param_1[6],&local_30);
  puVar2 = local_30;
  if (local_28 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  uVar1 = (**(code **)(*param_1 + 0x30))(param_1);
  FUN_140002266(param_2,L"FOnlineAsyncTaskSteamGetAchievements bWasSuccessful: %d UserId: %s",uVar1,
                puVar2);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148fb6822 FUN_148fb6822 body=200 status=ok
// SIG undefined FUN_148fb6822(void)

void FUN_148fb6822(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0xa8))(*(longlong **)(param_1 + 0x10),local_30);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
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
  }
  if ((*(int *)(param_1 + 0x60) != 0) &&
     (plVar2 = *(longlong **)(param_1 + 0x58), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x60))
              (plVar2,*(undefined8 *)(param_1 + 0x30),*(int *)(param_1 + 0x1c) != 0);
  }
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fb68ec FUN_148fb68ec body=265 status=ok
// SIG undefined FUN_148fb68ec(void)

ulonglong FUN_148fb68ec(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  char *local_30;
  char local_1a;
  char local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x28) == '\x01') {
    lVar4 = *(longlong *)(param_1 + 0x20);
  }
  else {
    puVar3 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c7648b0);
    lVar4 = (**(code **)(*(longlong *)*puVar3 + 0x80))
                      ((longlong *)*puVar3,*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x18));
    *(longlong *)(param_1 + 0x20) = lVar4;
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  if (lVar4 == 0) {
    LOCK();
    *(undefined4 *)(param_1 + 0x1c) = 0;
    UNLOCK();
    LOCK();
    uVar6 = *(uint *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x18) = 1;
    uVar5 = (ulonglong)uVar6;
    UNLOCK();
  }
  else {
    puVar3 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764830);
    plVar1 = (longlong *)*puVar3;
    local_19 = '\0';
    bVar2 = (**(code **)(*plVar1 + 0x58))(plVar1,*(undefined8 *)(param_1 + 0x20));
    LOCK();
    *(uint *)(param_1 + 0x18) = (uint)bVar2;
    UNLOCK();
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x18);
    if (*(uint *)(param_1 + 0x18) != 0) {
      local_30 = &local_1a;
      local_38 = 0x44d;
      uVar5 = (**(code **)(*plVar1 + 0x68))
                        (plVar1,*(undefined8 *)(param_1 + 0x20),param_1 + 0x40,0x18);
      uVar6 = 0;
      if ((((char)uVar5 != '\0') && (local_19 == '\0')) && (local_1a == '\0')) {
        uVar6 = (uint)(*(int *)(param_1 + 0x48) == 1);
      }
      LOCK();
      *(uint *)(param_1 + 0x1c) = uVar6;
      UNLOCK();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fb69f6 FUN_148fb69f6 body=38 status=ok
// SIG undefined FUN_148fb69f6(void)

undefined8 FUN_148fb69f6(undefined8 param_1,int param_2)

{
  FUN_148fb6aae();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fb6a1c FUN_148fb6a1c body=145 status=ok
// SIG undefined FUN_148fb6a1c(void)

undefined8 FUN_148fb6a1c(longlong *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*(longlong *)param_1[6] + 0x38))((longlong *)param_1[6],&local_30);
  puVar2 = local_30;
  if (local_28 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  uVar1 = (**(code **)(*param_1 + 0x30))(param_1);
  FUN_140002266(param_2,L"FOnlineAsyncTaskSteamUpdateStats bWasSuccessful: %d User: %s",uVar1,puVar2
               );
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148fb6aae FUN_148fb6aae body=111 status=ok
// SIG undefined FUN_148fb6aae(void)

void FUN_148fb6aae(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba44ba0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_1411632c2(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000148fb6b11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148fb6b1e FUN_148fb6b1e body=71 status=ok
// SIG undefined FUN_148fb6b1e(void)

undefined8 * FUN_148fb6b1e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba44c60;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fb6b66 FUN_148fb6b66 body=75 status=ok
// SIG undefined FUN_148fb6b66(void)

undefined8 FUN_148fb6b66(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined2 *puVar3;
  
  lVar1 = param_1[10];
  if ((int)param_1[7] == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)param_1[6];
  }
  uVar2 = (**(code **)(*param_1 + 0x30))();
  FUN_140002266(param_2,
                L"FOnlineAsyncTaskSteamUpdateLeaderboard bWasSuccessful: %d Leaderboard: %s Score: %d"
                ,uVar2,puVar3,(int)lVar1);
  return param_2;
}



// FUNCTION 148fb6bb4 FUN_148fb6bb4 body=767 status=ok
// SIG undefined FUN_148fb6bb4(void)

undefined8 * FUN_148fb6bb4(longlong param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined8 *extraout_RAX;
  size_t sVar7;
  uint uVar8;
  longlong lVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  wchar_t *_Str;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  char *local_110;
  byte local_f9;
  longlong *local_f8;
  char local_f0;
  undefined7 uStack_ef;
  int local_e8;
  char local_e0;
  undefined7 uStack_df;
  longlong *local_d8;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  puVar6 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764830);
  plVar2 = (longlong *)*puVar6;
  if (*(char *)(param_1 + 0x28) == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x60))(*(longlong **)(param_1 + 0x10),&local_e0);
    lVar9 = CONCAT71(uStack_df,local_e0);
    if (local_d8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_d8 + 1) = (int)local_d8[1] + 1;
      UNLOCK();
      if (local_d8 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_d8 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
    }
    lpCriticalSection = (LPCRITICAL_SECTION)(lVar9 + 0x50);
    EnterCriticalSection(lpCriticalSection);
    puVar6 = (undefined8 *)FUN_148fae6dc(lVar9,param_1 + 0x30);
    if (puVar6 == (undefined8 *)0x0) {
      lVar9 = -1;
    }
    else {
      lVar9 = puVar6[4];
    }
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(lpCriticalSection);
      puVar6 = extraout_RAX;
    }
    if (local_d8 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_d8 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        puVar6 = (undefined8 *)(**(code **)*local_d8)(local_d8);
        LOCK();
        piVar1 = (int *)((longlong)local_d8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          puVar6 = (undefined8 *)(**(code **)(*local_d8 + 0x10))(local_d8);
        }
      }
    }
    if (lVar9 != -1) {
      puVar6 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c7648b0);
      local_f9 = *(int *)(param_1 + 0x54) == 1;
      _Str = L"";
      puVar11 = &DAT_149dfb77a;
      if (*(int *)(param_1 + 0x48) != 0) {
        puVar11 = *(undefined2 **)(param_1 + 0x40);
      }
      puVar10 = &DAT_149dfb77a;
      if (*(int *)(param_1 + 0x38) != 0) {
        puVar10 = *(undefined2 **)(param_1 + 0x30);
      }
      local_f8 = (longlong *)*puVar6;
      FUN_140002266(&local_f0,L"%s_%s",puVar10,puVar11);
      puVar6 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c7648b0);
      if (local_e8 != 0) {
        _Str = (wchar_t *)CONCAT71(uStack_ef,local_f0);
      }
      plVar3 = (longlong *)*puVar6;
      local_60 = 0;
      if (_Str == (wchar_t *)0x0) {
        local_58 = 0;
        local_50 = 0;
      }
      else {
        sVar7 = wcslen(_Str);
        FUN_1446fe5a4(&local_e0,_Str,sVar7 & 0xffffffff,1);
      }
      puVar6 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3,local_58,param_1 + 0x50);
      cVar4 = (char)puVar6;
      if (local_60 != 0) {
        puVar6 = (undefined8 *)FUN_1400020a8();
      }
      if (cVar4 != '\0') {
        local_110 = (char *)((ulonglong)local_110 & 0xffffffff00000000);
        local_118 = 0;
        puVar6 = (undefined8 *)
                 (**(code **)(*local_f8 + 0xf8))
                           (local_f8,lVar9,local_f9 + 1,*(undefined4 *)(param_1 + 0x50));
        *(undefined8 **)(param_1 + 0x20) = puVar6;
      }
      *(undefined1 *)(param_1 + 0x28) = 1;
      if (CONCAT71(uStack_ef,local_f0) != 0) {
        puVar6 = (undefined8 *)FUN_1400020a8();
      }
    }
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    if (*(char *)(param_1 + 0x28) == '\x01') {
      LOCK();
      *(undefined4 *)(param_1 + 0x18) = 1;
      UNLOCK();
      LOCK();
      uVar8 = *(uint *)(param_1 + 0x1c);
      *(uint *)(param_1 + 0x1c) = 0;
      puVar6 = (undefined8 *)(ulonglong)uVar8;
      UNLOCK();
    }
  }
  else {
    local_e0 = '\0';
    bVar5 = (**(code **)(*plVar2 + 0x58))(plVar2);
    LOCK();
    *(uint *)(param_1 + 0x18) = (uint)bVar5;
    UNLOCK();
    puVar6 = (undefined8 *)(ulonglong)*(uint *)(param_1 + 0x18);
    if (*(uint *)(param_1 + 0x18) != 0) {
      local_110 = &local_f0;
      local_118 = CONCAT44(local_118._4_4_,0x452);
      puVar6 = (undefined8 *)
               (**(code **)(*plVar2 + 0x68))
                         (plVar2,*(undefined8 *)(param_1 + 0x20),(char *)(param_1 + 0x58),0x20);
      uVar8 = 0;
      if ((((char)puVar6 != '\0') && (local_e0 == '\0')) && (local_f0 == '\0')) {
        uVar8 = (uint)(*(char *)(param_1 + 0x58) != '\0');
      }
      LOCK();
      *(uint *)(param_1 + 0x1c) = uVar8;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return puVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fb6eb4 FUN_148fb6eb4 body=148 status=ok
// SIG undefined FUN_148fb6eb4(void)

undefined8 FUN_148fb6eb4(longlong *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = (**(code **)(*param_1 + 0x30))();
  FUN_1400021e4((longlong)param_1 + 0x2c,&local_38);
  puVar2 = local_38;
  if (local_30 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"FOnlineAsyncTaskSteamStoreStats SessionName: %s bWasSuccessful: %d",puVar2
                ,uVar1);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148fb6f62 FUN_148fb6f62 body=83 status=ok
// SIG undefined FUN_148fb6f62(void)

undefined8 * FUN_148fb6f62(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba44db0;
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fb6fe4 FUN_148fb6fe4 body=93 status=ok
// SIG undefined FUN_148fb6fe4(void)

void FUN_148fb6fe4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba44f00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba44e90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148fb7042 FUN_148fb7042 body=93 status=ok
// SIG undefined FUN_148fb7042(void)

void FUN_148fb7042(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba44f00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba44e90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148fb70a0 FUN_148fb70a0 body=126 status=ok
// SIG undefined FUN_148fb70a0(void)

void FUN_148fb70a0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ba44f00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba44e90;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148fb710f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148fb712e FUN_148fb712e body=83 status=ok
// SIG undefined FUN_148fb712e(void)

undefined8 * FUN_148fb712e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba44db0;
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fb7182 FUN_148fb7182 body=215 status=ok
// SIG undefined FUN_148fb7182(void)

void FUN_148fb7182(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x60))(*(longlong **)(param_1 + 0x10),&local_38);
  if (local_30 == (longlong *)0x0) {
    (**(code **)(*local_38 + 0x78))(local_38,param_1 + 0x2c,*(int *)(param_1 + 0x1c) != 0);
  }
  else {
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
        piVar2 = (int *)((longlong)local_30 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
        }
      }
    }
    (**(code **)(*local_38 + 0x78))(local_38,param_1 + 0x2c,*(int *)(param_1 + 0x1c) != 0);
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fb725a FUN_148fb725a body=57 status=ok
// SIG undefined FUN_148fb725a(void)

undefined8 * FUN_148fb725a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba44fd0;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fb7294 FUN_148fb7294 body=42 status=ok
// SIG undefined FUN_148fb7294(void)

undefined8 FUN_148fb7294(longlong *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x30))();
  FUN_140002266(param_2,L"FOnlineAsyncTaskSteamRetrieveLeaderboard bWasSuccessful: %d",uVar1);
  return param_2;
}



// FUNCTION 148fb72be FUN_148fb72be body=376 status=ok
// SIG undefined FUN_148fb72be(void)

void FUN_148fb72be(longlong param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x60))(*(longlong **)(param_1 + 0x10),&local_40);
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_38 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  lpCriticalSection = (LPCRITICAL_SECTION)(local_40 + 0x50);
  EnterCriticalSection(lpCriticalSection);
  lVar6 = FUN_148fae6dc(local_40,param_1 + 0x30);
  if (*(int *)(param_1 + 0x1c) == 0) {
    *(undefined8 *)(lVar6 + 0x20) = 0xffffffffffffffff;
    uVar3 = 3;
    iVar5 = 0;
    lVar8 = 0x18;
  }
  else {
    puVar7 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c7648b0);
    plVar2 = (longlong *)*puVar7;
    *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(param_1 + 0x48);
    uVar3 = (**(code **)(*plVar2 + 200))(plVar2);
    *(undefined4 *)(lVar6 + 0x18) = uVar3;
    iVar4 = (**(code **)(*plVar2 + 0xd8))(plVar2,*(undefined8 *)(param_1 + 0x48));
    iVar5 = 1;
    if (iVar4 != 2) {
      iVar5 = (uint)(iVar4 == 3) * 2;
    }
    *(int *)(lVar6 + 0x14) = iVar5;
    iVar4 = (**(code **)(*plVar2 + 0xd0))(plVar2,*(undefined8 *)(param_1 + 0x48));
    iVar5 = (uint)(iVar4 == 2) * 2;
    if (iVar4 == 1) {
      iVar5 = 1;
    }
    uVar3 = 2;
    lVar8 = 0x10;
  }
  *(int *)(lVar6 + lVar8) = iVar5;
  *(undefined4 *)(lVar6 + 0x28) = uVar3;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_38 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fb7438 FUN_148fb7438 body=240 status=ok
// SIG undefined FUN_148fb7438(void)

ulonglong FUN_148fb7438(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  char *local_30;
  char local_1a;
  char local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar3 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764830);
  plVar1 = (longlong *)*puVar3;
  if (*(char *)(param_1 + 0x28) == '\0') {
    FUN_148fb752a(param_1,param_1 + 0x30,*(undefined4 *)(param_1 + 0x40),
                  *(undefined4 *)(param_1 + 0x44));
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    LOCK();
    *(undefined4 *)(param_1 + 0x18) = 1;
    UNLOCK();
    LOCK();
    uVar5 = *(uint *)(param_1 + 0x1c);
    *(uint *)(param_1 + 0x1c) = 0;
    uVar4 = (ulonglong)uVar5;
    UNLOCK();
  }
  else {
    local_19 = '\0';
    bVar2 = (**(code **)(*plVar1 + 0x58))(plVar1);
    LOCK();
    *(uint *)(param_1 + 0x18) = (uint)bVar2;
    UNLOCK();
    uVar4 = (ulonglong)*(uint *)(param_1 + 0x18);
    if (*(uint *)(param_1 + 0x18) != 0) {
      local_30 = &local_1a;
      local_38 = 0x450;
      uVar4 = (**(code **)(*plVar1 + 0x68))
                        (plVar1,*(undefined8 *)(param_1 + 0x20),param_1 + 0x48,0x10);
      uVar5 = 0;
      if ((((char)uVar4 != '\0') && (local_19 == '\0')) && (local_1a == '\0')) {
        uVar5 = (uint)(*(char *)(param_1 + 0x50) != '\0');
      }
      LOCK();
      *(uint *)(param_1 + 0x1c) = uVar5;
      UNLOCK();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fb752a FUN_148fb752a body=445 status=ok
// SIG undefined FUN_148fb752a(void)

void FUN_148fb752a(longlong param_1,undefined8 *param_2,int param_3,int param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  size_t sVar3;
  undefined8 uVar4;
  char cVar5;
  wchar_t *pwVar6;
  char cVar7;
  undefined1 auStack_f8 [40];
  undefined1 local_d0 [128];
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(char *)(param_1 + 0x58) == '\x01') {
    puVar2 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c7648b0);
    if (*(int *)(param_2 + 1) == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)*param_2;
    }
    plVar1 = (longlong *)*puVar2;
    local_50 = 0;
    if (pwVar6 == (wchar_t *)0x0) {
      local_48 = 0;
      local_40 = 0;
    }
    else {
      sVar3 = wcslen(pwVar6);
      FUN_1446fe5a4(local_d0,pwVar6,sVar3 & 0xffffffff,1);
    }
    uVar4 = (**(code **)(*plVar1 + 0xb8))(plVar1,local_48);
  }
  else {
    cVar7 = (param_3 == 2) * '\x02';
    if (param_3 == 1) {
      cVar7 = '\x01';
    }
    cVar5 = '\x02';
    if (param_4 != 1) {
      cVar5 = (param_4 == 2) * '\x02' + '\x01';
    }
    puVar2 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c7648b0);
    if (*(int *)(param_2 + 1) == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)*param_2;
    }
    plVar1 = (longlong *)*puVar2;
    local_50 = 0;
    if (pwVar6 == (wchar_t *)0x0) {
      local_48 = 0;
      local_40 = 0;
    }
    else {
      sVar3 = wcslen(pwVar6);
      FUN_1446fe5a4(local_d0,pwVar6,sVar3 & 0xffffffff,1);
    }
    uVar4 = (**(code **)(*plVar1 + 0xb0))(plVar1,local_48,cVar7,cVar5);
  }
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fb76ea FUN_148fb76ea body=38 status=ok
// SIG undefined FUN_148fb76ea(void)

void FUN_148fb76ea(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = SteamAPI_GetHSteamUser();
  uVar1 = SteamInternal_FindOrCreateUserInterface(uVar2,"STEAMAPPS_INTERFACE_VERSION008");
  *param_1 = uVar1;
  return;
}



// FUNCTION 148fb7710 FUN_148fb7710 body=4 status=ok
// SIG undefined FUN_148fb7710(void)

void FUN_148fb7710(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}



// FUNCTION 148fb7724 FUN_148fb7724 body=49 status=ok
// SIG undefined FUN_148fb7724(void)

undefined4 FUN_148fb7724(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = (**(code **)**(undefined8 **)(param_1 + 8))
                    (*(undefined8 **)(param_1 + 8),*(undefined8 *)(param_2 + 8));
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT31((int3)((uint)*(int *)(param_1 + 0x18) >> 8),
                     *(int *)(param_1 + 0x18) == *(int *)(param_2 + 0x18));
  }
  return uVar2;
}



// FUNCTION 148fb7756 FUN_148fb7756 body=121 status=ok
// SIG undefined FUN_148fb7756(void)

undefined4 FUN_148fb7756(longlong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_48 [40];
  undefined2 *local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x80))(param_1,&local_20,1);
  puVar3 = local_20;
  if (local_18 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  iVar1 = local_18 + -1;
  if (local_18 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar3);
  if (local_20 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 148fb77d0 FUN_148fb77d0 body=261 status=ok
// SIG undefined FUN_148fb77d0(void)

undefined8 * FUN_148fb77d0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  
  puVar6 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar6 = &PTR_FUN_14ba46fd0;
  puVar7 = (undefined8 *)FUN_14600b90e();
  puVar6[1] = *puVar7;
  lVar3 = puVar7[1];
  puVar6[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(puVar6 + 3) = 0;
  plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14ba470a0;
  plVar8[2] = (longlong)puVar6;
  uVar4 = *(undefined8 *)(param_1 + 8);
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)puVar6[2];
  puVar6[1] = uVar4;
  puVar6[2] = lVar3;
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
  *(undefined4 *)(puVar6 + 3) = *(undefined4 *)(param_1 + 0x18);
  *param_2 = puVar6;
  param_2[1] = plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    plVar5 = plVar8 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  return param_2;
}


