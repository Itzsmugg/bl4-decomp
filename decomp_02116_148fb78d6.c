// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148fb78d6 FUN_148fb78d6 body=29 status=ok
// SIG undefined FUN_148fb78d6(void)

undefined8 FUN_148fb78d6(undefined8 param_1,undefined8 param_2)

{
  FUN_1446f57c6(&DAT_14cbf4f78);
  return param_2;
}



// FUNCTION 148fb78f4 FUN_148fb78f4 body=221 status=ok
// SIG undefined FUN_148fb78f4(void)

undefined8 * FUN_148fb78f4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
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
  *param_1 = &PTR_LAB_14ba45200;
  puVar2 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764910);
  param_1[5] = *puVar2;
  param_1[6] = *param_3;
  lVar1 = param_3[1];
  param_1[7] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fb79d2 FUN_148fb79d2 body=38 status=ok
// SIG undefined FUN_148fb79d2(void)

undefined8 FUN_148fb79d2(undefined8 param_1,int param_2)

{
  FUN_148fb7bb2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fb79fa FUN_148fb79fa body=304 status=ok
// SIG undefined FUN_148fb79fa(void)

void FUN_148fb79fa(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar4 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar5 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
        if (uStack_50._4_4_ < uVar5) {
          FUN_1447a71f6(&local_58,uVar4 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
        FUN_1449db362(&local_68);
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  FUN_144a3e8f2(param_1,&local_58);
  FUN_144760e21(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fb7b2c FUN_148fb7b2c body=132 status=ok
// SIG undefined FUN_148fb7b2c(void)

void FUN_148fb7b2c(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,1);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148fb7bb2 FUN_148fb7bb2 body=57 status=ok
// SIG undefined FUN_148fb7bb2(void)

void FUN_148fb7bb2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba451b0;
  FUN_144760e21(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_148fb8394(param_1);
  return;
}



// FUNCTION 148fb7beb FUN_148fb7beb body=38 status=ok
// SIG undefined FUN_148fb7beb(void)

void FUN_148fb7beb(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = SteamAPI_GetHSteamUser();
  uVar1 = SteamInternal_FindOrCreateUserInterface(uVar2,"SteamMatchMakingServers002");
  *param_1 = uVar1;
  return;
}



// FUNCTION 148fb7c12 FUN_148fb7c12 body=122 status=ok
// SIG undefined FUN_148fb7c12(void)

longlong FUN_148fb7c12(longlong param_1,longlong param_2)

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
    FUN_148fb7c8c(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148fb7c8c FUN_148fb7c8c body=260 status=ok
// SIG undefined FUN_148fb7c8c(void)

longlong * FUN_148fb7c8c(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_148a3fee6(param_1,(ulonglong)uVar1);
    lVar3 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar3 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar3) < uVar1) {
      FUN_1447030e2(param_1);
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
          *(undefined8 *)(lVar3 + lVar6) = *(undefined8 *)(lVar2 + lVar6);
          FUN_140c3a11c(lVar3 + 8 + lVar6,lVar2 + 8 + lVar6);
          *(undefined8 *)(lVar3 + 0x28 + lVar6) = *(undefined8 *)(lVar2 + 0x28 + lVar6);
          *(undefined8 *)(lVar3 + 0x30 + lVar6) = *(undefined8 *)(lVar2 + 0x30 + lVar6);
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x38;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 148fb7d90 FUN_148fb7d90 body=231 status=ok
// SIG undefined FUN_148fb7d90(void)

undefined8 * FUN_148fb7d90(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

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
  *param_1 = &PTR_LAB_14ba452f0;
  param_1[5] = &PTR_FUN_14ba45340;
  *(undefined2 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = *param_3;
  lVar1 = param_3[1];
  param_1[0xc] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[0xd] = 0;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fb7e78 FUN_148fb7e78 body=38 status=ok
// SIG undefined FUN_148fb7e78(void)

undefined8 FUN_148fb7e78(undefined8 param_1,int param_2)

{
  FUN_148fb7ea0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fb7ea0 FUN_148fb7ea0 body=71 status=ok
// SIG undefined FUN_148fb7ea0(void)

void FUN_148fb7ea0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba45280;
  param_1[5] = &PTR_FUN_14ba452d0;
  FUN_144760e21(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_148fb7ee8(param_1);
  return;
}



// FUNCTION 148fb7ee8 FUN_148fb7ee8 body=86 status=ok
// SIG undefined FUN_148fb7ee8(void)

void FUN_148fb7ee8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14ba452f0;
  param_1[5] = &PTR_FUN_14ba45340;
  plVar3 = (longlong *)param_1[0xc];
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
  FUN_148fb7f3e(param_1 + 9);
  return;
}



// FUNCTION 148fb7f3e FUN_148fb7f3e body=61 status=ok
// SIG undefined FUN_148fb7f3e(void)

void FUN_148fb7f3e(longlong *param_1)

{
  FUN_148fbac74();
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1447ab16c(param_1,0);
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148fb7f7c FUN_148fb7f7c body=29 status=ok
// SIG undefined FUN_148fb7f7c(void)

undefined8 FUN_148fb7f7c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fb7f9a FUN_148fb7f9a body=52 status=ok
// SIG undefined FUN_148fb7f9a(void)

undefined8 * FUN_148fb7f9a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba45420;
  FUN_14124f074(param_1 + 6);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fb7fce FUN_148fb7fce body=29 status=ok
// SIG undefined FUN_148fb7fce(void)

undefined8 FUN_148fb7fce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fb7fec FUN_148fb7fec body=144 status=ok
// SIG undefined FUN_148fb7fec(void)

undefined8 FUN_148fb7fec(longlong *param_1,undefined8 param_2)

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
  FUN_140002266(param_2,L"FOnlineAsyncTaskSteamEndSession bWasSuccessful: %d SessionName: %s",uVar1,
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



// FUNCTION 148fb807e FUN_148fb807e body=138 status=ok
// SIG undefined FUN_148fb807e(void)

void FUN_148fb807e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))(*(longlong **)(param_1 + 0x10),&local_28);
  lVar3 = (**(code **)(*local_28 + 0x20))(local_28,*(undefined8 *)(param_1 + 0x28));
  if (lVar3 != 0) {
    *(undefined4 *)(lVar3 + 0x148) = 6;
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



// FUNCTION 148fb810a FUN_148fb810a body=140 status=ok
// SIG undefined FUN_148fb810a(void)

void FUN_148fb810a(longlong param_1)

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
    (**(code **)(*local_28 + 0xe0))
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



// FUNCTION 148fb81aa FUN_148fb81aa body=144 status=ok
// SIG undefined FUN_148fb81aa(void)

undefined8 FUN_148fb81aa(longlong *param_1,undefined8 param_2)

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
  FUN_140002266(param_2,L"FOnlineAsyncTaskSteamDestroySession bWasSuccessful: %d SessionName: %s",
                uVar1,puVar2);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148fb823c FUN_148fb823c body=181 status=ok
// SIG undefined FUN_148fb823c(void)

void FUN_148fb823c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))(*(longlong **)(param_1 + 0x10),&local_28);
  if (local_28 != (longlong *)0x0) {
    if ((*(int *)(param_1 + 0x38) != 0) &&
       (plVar2 = *(longlong **)(param_1 + 0x30), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x60))
                (plVar2,*(undefined8 *)(param_1 + 0x28),*(int *)(param_1 + 0x1c) != 0);
    }
    (**(code **)(*local_28 + 0x108))
              (local_28,*(undefined8 *)(param_1 + 0x28),*(int *)(param_1 + 0x1c) != 0);
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_20 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fb8304 FUN_148fb8304 body=29 status=ok
// SIG undefined FUN_148fb8304(void)

undefined8 FUN_148fb8304(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fb8332 FUN_148fb8332 body=58 status=ok
// SIG undefined FUN_148fb8332(void)

undefined8 * FUN_148fb8332(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ba46eb0;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    SteamAPI_UnregisterCallback(param_1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fb836e FUN_148fb836e body=38 status=ok
// SIG undefined FUN_148fb836e(void)

undefined8 FUN_148fb836e(undefined8 param_1,int param_2)

{
  FUN_148fb8394();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fb8394 FUN_148fb8394 body=83 status=ok
// SIG undefined FUN_148fb8394(void)

void FUN_148fb8394(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14ba45200;
  if (param_1[9] != 0) {
    FUN_1400020a8();
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
                    /* WARNING: Could not recover jumptable at 0x000148fb83dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148fb83e8 FUN_148fb83e8 body=38 status=ok
// SIG undefined FUN_148fb83e8(void)

undefined8 FUN_148fb83e8(undefined8 param_1,int param_2)

{
  FUN_148fb840e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fb840e FUN_148fb840e body=68 status=ok
// SIG undefined FUN_148fb840e(void)

void FUN_148fb840e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba45730;
  param_1[5] = &PTR_FUN_14ba45780;
  FUN_144760e21(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_148fb7ee8(param_1);
  return;
}



// FUNCTION 148fb8452 FUN_148fb8452 body=38 status=ok
// SIG undefined FUN_148fb8452(void)

undefined8 FUN_148fb8452(undefined8 param_1,int param_2)

{
  FUN_148fb85aa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fb8478 FUN_148fb8478 body=304 status=ok
// SIG undefined FUN_148fb8478(void)

void FUN_148fb8478(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar4 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar5 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
        if (uStack_50._4_4_ < uVar5) {
          FUN_1447a71f6(&local_58,uVar4 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
        FUN_1449db362(&local_68);
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  FUN_144a3e8f2(param_1,&local_58);
  FUN_144760e21(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fb85aa FUN_148fb85aa body=57 status=ok
// SIG undefined FUN_148fb85aa(void)

void FUN_148fb85aa(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba457e0;
  FUN_144760e21(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_148fb8394(param_1);
  return;
}



// FUNCTION 148fb85e4 FUN_148fb85e4 body=38 status=ok
// SIG undefined FUN_148fb85e4(void)

undefined8 FUN_148fb85e4(undefined8 param_1,int param_2)

{
  FUN_148fb860a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fb860a FUN_148fb860a body=71 status=ok
// SIG undefined FUN_148fb860a(void)

void FUN_148fb860a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba45830;
  param_1[5] = &PTR_FUN_14ba45880;
  FUN_144760e21(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_148fb7ee8(param_1);
  return;
}



// FUNCTION 148fb8652 FUN_148fb8652 body=138 status=ok
// SIG undefined FUN_148fb8652(void)

void FUN_148fb8652(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x58 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x58) = param_2;
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
      puVar7 = puVar7 + 0x16;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148fb86dc FUN_148fb86dc body=78 status=ok
// SIG undefined FUN_148fb86dc(void)

void FUN_148fb86dc(longlong *param_1)

{
  if ((longlong *)param_1[6] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[6] + 0x10))();
  }
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x10))();
  }
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148fb872a FUN_148fb872a body=138 status=ok
// SIG undefined FUN_148fb872a(void)

void FUN_148fb872a(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x28 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x28) = param_2;
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
      puVar7 = puVar7 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148fb87cc FUN_148fb87cc body=29 status=ok
// SIG undefined FUN_148fb87cc(void)

undefined8 FUN_148fb87cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fb87ea FUN_148fb87ea body=306 status=ok
// SIG undefined FUN_148fb87ea(void)

undefined4 * FUN_148fb87ea(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148fb891e(param_1,local_48);
  uVar1 = param_3[1];
  *local_40 = *(uint *)*param_3;
  local_40[2] = 0;
  local_40[3] = 0;
  local_40[4] = 0;
  FUN_148fb8a9e(local_40 + 2,uVar1);
  local_40[6] = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  cVar3 = FUN_148fb8a04(param_1,uVar5,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_40[7] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[6] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_148fb8b94(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fb891e FUN_148fb891e body=229 status=ok
// SIG undefined FUN_148fb891e(void)

int * FUN_148fb891e(longlong *param_1,int *param_2)

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



// FUNCTION 148fb8a04 FUN_148fb8a04 body=154 status=ok
// SIG undefined FUN_148fb8a04(void)

undefined8 FUN_148fb8a04(longlong *param_1,uint param_2,int *param_3,int *param_4)

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
          FUN_1449db362(piVar1 + 2);
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *(undefined8 *)(piVar1 + 4) = *(undefined8 *)(param_3 + 4);
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_148fb8b22(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 148fb8a9e FUN_148fb8a9e body=130 status=ok
// SIG undefined FUN_148fb8a9e(void)

void FUN_148fb8a9e(longlong *param_1,longlong *param_2)

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



// FUNCTION 148fb8b22 FUN_148fb8b22 body=114 status=ok
// SIG undefined FUN_148fb8b22(void)

void FUN_148fb8b22(longlong *param_1,int param_2)

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



// FUNCTION 148fb8b94 FUN_148fb8b94 body=422 status=ok
// SIG undefined FUN_148fb8b94(void)

void FUN_148fb8b94(longlong *param_1)

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



// FUNCTION 148fb8d3c FUN_148fb8d3c body=188 status=ok
// SIG undefined FUN_148fb8d3c(void)

int FUN_148fb8d3c(longlong *param_1,uint param_2,longlong *param_3)

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
        lVar8 = (longlong)iVar3;
        puVar4 = *(undefined8 **)(lVar7 + lVar8 * 0x28);
        plVar6 = *(longlong **)(lVar7 + 8 + lVar8 * 0x28);
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
        iVar3 = *(int *)(lVar7 + 0x20 + lVar8 * 0x28);
      } while (iVar3 != -1);
    }
  }
  return -1;
}



// FUNCTION 148fb8df8 FUN_148fb8df8 body=47 status=ok
// SIG undefined FUN_148fb8df8(void)

void FUN_148fb8df8(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar1);
    return;
  }
  return;
}



// FUNCTION 148fb8e28 FUN_148fb8e28 body=29 status=ok
// SIG undefined FUN_148fb8e28(void)

undefined8 FUN_148fb8e28(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fb8e46 FUN_148fb8e46 body=386 status=ok
// SIG undefined FUN_148fb8e46(void)

undefined4 * FUN_148fb8e46(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148fb8fca(param_1,local_40);
  puVar2 = (undefined8 *)*param_3;
  puVar3 = (undefined8 *)param_3[1];
  *local_38 = *puVar2;
  lVar12 = puVar2[1];
  local_38[1] = lVar12;
  if (lVar12 != 0) {
    LOCK();
    *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
    UNLOCK();
  }
  local_38[2] = *puVar3;
  lVar12 = puVar3[1];
  local_38[3] = lVar12;
  if (lVar12 != 0) {
    *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
  }
  *(undefined4 *)(local_38 + 4) = 0xffffffff;
  local_44 = local_40[0];
  plVar4 = (longlong *)*local_38;
  plVar5 = (longlong *)local_38[1];
  if (plVar5 == (longlong *)0x0) {
    uVar8 = (**(code **)(*plVar4 + 0x40))();
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    uVar8 = (**(code **)(*plVar4 + 0x40))();
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
  cVar7 = FUN_148fb90b0(param_1,uVar8,local_38,&local_44);
  uVar6 = local_44;
  if (cVar7 == '\0') {
    uVar9 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar11 = 1;
    if (3 < uVar9) {
      uVar10 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
      lVar12 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar12 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar11 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_38 + 0x24) = uVar8;
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 4) =
           *(undefined4 *)
            (lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar11;
      FUN_148fb9258(param_1);
    }
  }
  *param_2 = uVar6;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fb8fca FUN_148fb8fca body=230 status=ok
// SIG undefined FUN_148fb8fca(void)

int * FUN_148fb8fca(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_140549c28(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 148fb90b0 FUN_148fb90b0 body=240 status=ok
// SIG undefined FUN_148fb90b0(void)

undefined8 FUN_148fb90b0(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined8 uVar13;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_40 = *param_3;
    plVar4 = (longlong *)param_3[1];
    local_38 = plVar4;
    if (plVar4 == (longlong *)0x0) {
      iVar12 = FUN_148fb8d3c(param_1,param_2,&local_40);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      iVar12 = FUN_148fb8d3c(param_1);
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
    if (iVar12 != -1) {
      puVar3 = (undefined4 *)(*param_1 + (longlong)iVar12 * 0x28);
      FUN_148fb4a58(puVar3);
      uVar5 = *(undefined4 *)param_3;
      uVar6 = *(undefined4 *)((longlong)param_3 + 4);
      uVar7 = *(undefined4 *)(param_3 + 1);
      uVar8 = *(undefined4 *)((longlong)param_3 + 0xc);
      uVar9 = *(undefined4 *)((longlong)param_3 + 0x14);
      uVar10 = *(undefined4 *)(param_3 + 3);
      uVar11 = *(undefined4 *)((longlong)param_3 + 0x1c);
      puVar3[4] = *(undefined4 *)(param_3 + 2);
      puVar3[5] = uVar9;
      puVar3[6] = uVar10;
      puVar3[7] = uVar11;
      *puVar3 = uVar5;
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      FUN_148fb91a2(param_1,*param_4);
      *param_4 = iVar12;
      uVar13 = 1;
      goto LAB_148fb90d6;
    }
  }
  uVar13 = 0;
LAB_148fb90d6:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fb91a2 FUN_148fb91a2 body=114 status=ok
// SIG undefined FUN_148fb91a2(void)

void FUN_148fb91a2(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 148fb9214 FUN_148fb9214 body=68 status=ok
// SIG undefined FUN_148fb9214(void)

void FUN_148fb9214(longlong param_1,uint param_2)

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
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_148fb9258(param_1);
  return;
}



// FUNCTION 148fb9258 FUN_148fb9258 body=490 status=ok
// SIG undefined FUN_148fb9258(void)

void FUN_148fb9258(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
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
        lVar9 = (longlong)iVar12;
        plVar10 = *(longlong **)(lVar4 + lVar9 * 0x28);
        plVar5 = *(longlong **)(lVar4 + 8 + lVar9 * 0x28);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        lVar4 = lVar4 + lVar9 * 0x28;
        iVar7 = (**(code **)(*plVar10 + 0x40))();
        uVar8 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar8;
        *(int *)(lVar4 + 0x24) = iVar7;
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)(lVar4 + 0x20) =
             *(undefined4 *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
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



// FUNCTION 148fb9444 FUN_148fb9444 body=270 status=ok
// SIG undefined FUN_148fb9444(void)

void FUN_148fb9444(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar6 = (**(code **)(*(longlong *)*param_2 + 0x40))();
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    uVar9 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
    iVar6 = *(int *)((longlong)plVar8 + uVar9 * 4);
    if (iVar6 != -1) {
      puVar10 = (undefined4 *)((longlong)plVar8 + uVar9 * 4);
      do {
        lVar3 = *param_1;
        lVar7 = (longlong)iVar6;
        puVar4 = *(undefined8 **)(lVar3 + lVar7 * 0x28);
        plVar8 = *(longlong **)(lVar3 + 8 + lVar7 * 0x28);
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
        }
        if (puVar4 == (undefined8 *)*param_2) {
          cVar5 = '\x01';
        }
        else {
          cVar5 = (**(code **)*puVar4)();
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
          FUN_148fb9552(param_1,*puVar10);
          break;
        }
        lVar3 = lVar3 + lVar7 * 0x28;
        iVar6 = *(int *)(lVar3 + 0x20);
        puVar10 = (undefined4 *)(lVar3 + 0x20);
      } while (iVar6 != -1);
    }
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
                    /* WARNING: Could not recover jumptable at 0x000148fb948e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar8 + 0x10))(plVar8);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148fb9552 FUN_148fb9552 body=117 status=ok
// SIG undefined FUN_148fb9552(void)

void FUN_148fb9552(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x28;
  lVar6 = (longlong)*(int *)(lVar1 + 0x24);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x20 + lVar6 * 0x28);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x28 + 0x20);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x20);
  FUN_148fb4a58((longlong)param_2 * 0x28 + *param_1);
  FUN_148fb91a2(param_1,param_2);
  return;
}



// FUNCTION 148fb95c8 FUN_148fb95c8 body=123 status=ok
// SIG undefined FUN_148fb95c8(void)

void FUN_148fb95c8(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x20;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x1c + lVar2);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x18 + lVar6 * 0x20);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar1 + lVar6 * 0x20 + 0x18);
  }
  *puVar3 = *(undefined4 *)(lVar1 + lVar2 + 0x18);
  FUN_1449db362(*param_1 + lVar2 + 8);
  FUN_148fb8b22(param_1,param_2);
  return;
}



// FUNCTION 148fb9644 FUN_148fb9644 body=173 status=ok
// SIG undefined FUN_148fb9644(void)

void FUN_148fb9644(longlong *param_1,undefined4 param_2,undefined4 param_3)

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
        goto LAB_148fb96cb;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148fb96cb:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148fb96f2 FUN_148fb96f2 body=67 status=ok
// SIG undefined FUN_148fb96f2(void)

void FUN_148fb96f2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14ba459e0;
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
                    /* WARNING: Could not recover jumptable at 0x000148fb972a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148fb9736 FUN_148fb9736 body=29 status=ok
// SIG undefined FUN_148fb9736(void)

undefined8 FUN_148fb9736(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fb9754 FUN_148fb9754 body=83 status=ok
// SIG undefined FUN_148fb9754(void)

undefined8 * FUN_148fb9754(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba459e0;
  plVar3 = (longlong *)param_1[2];
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



// FUNCTION 148fb97a8 FUN_148fb97a8 body=685 status=ok
// SIG undefined FUN_148fb97a8(void)

void FUN_148fb97a8(longlong param_1,char param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  size_t sVar11;
  wchar_t *pwVar12;
  undefined1 auStack_1d8 [32];
  undefined4 local_1b8;
  undefined8 local_1b0;
  longlong *local_1a0 [2];
  longlong *local_190 [2];
  longlong *local_180 [2];
  undefined1 local_170 [128];
  longlong local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined1 local_d8 [128];
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if (param_2 == '\0') {
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_148fac75c(param_1,0,0);
    }
  }
  else {
    uVar4 = *param_4;
    lVar5 = param_4[1];
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    plVar9 = *(longlong **)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 8) = uVar4;
    *(longlong *)(param_1 + 0x10) = lVar5;
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
    (**(code **)(*(longlong *)*param_4 + 0x18))((longlong *)*param_4,local_180);
    if (local_180[0] != (longlong *)0x0) {
      (**(code **)(*local_180[0] + 0x10))();
    }
    plVar9 = (longlong *)SteamInternal_ContextInit(&PTR_FUN_14c764830);
    plVar9 = (longlong *)*plVar9;
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_4 + 0x18))((longlong *)*param_4,local_190);
      puVar10 = (undefined8 *)FUN_1447a1f4a(local_190);
      if (*(int *)(puVar10 + 1) == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = (wchar_t *)*puVar10;
      }
      local_58 = 0;
      if (pwVar12 == (wchar_t *)0x0) {
        local_50 = 0;
        local_48 = 0;
      }
      else {
        sVar11 = wcslen(pwVar12);
        FUN_1446fe5a4(local_d8,pwVar12,sVar11 & 0xffffffff,1);
      }
      uVar4 = local_50;
      uVar3 = *(undefined4 *)(param_1 + 0x18);
      (**(code **)(*(longlong *)*param_4 + 0x28))((longlong *)*param_4,local_1a0);
      puVar10 = (undefined8 *)FUN_1447a1f4a(local_1a0);
      if (*(int *)(puVar10 + 1) == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = (wchar_t *)*puVar10;
      }
      local_f0 = 0;
      if (pwVar12 == (wchar_t *)0x0) {
        local_e8 = 0;
        local_e0 = 0;
      }
      else {
        sVar11 = wcslen(pwVar12);
        FUN_1446fe5a4(local_170,pwVar12,sVar11 & 0xffffffff,1);
      }
      uVar6 = local_e8;
      uVar7 = (**(code **)(*(longlong *)*param_4 + 0x40))();
      iVar8 = (**(code **)(*(longlong *)*param_4 + 0x30))();
      local_1b8 = uVar3;
      local_1b0 = uVar4;
      (**(code **)(*plVar9 + 0xa0))(plVar9,iVar8 == 4,uVar7,uVar6);
      if (local_f0 != 0) {
        FUN_1400020a8();
      }
      if (local_1a0[0] != (longlong *)0x0) {
        (**(code **)(*local_1a0[0] + 0x10))();
      }
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      if (local_190[0] != (longlong *)0x0) {
        (**(code **)(*local_190[0] + 0x10))();
      }
    }
  }
  plVar9 = (longlong *)param_4[1];
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
  if ((local_40 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fb9a56 FUN_148fb9a56 body=114 status=ok
// SIG undefined FUN_148fb9a56(void)

void FUN_148fb9a56(longlong *param_1,int param_2)

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



// FUNCTION 148fb9ac8 FUN_148fb9ac8 body=132 status=ok
// SIG undefined FUN_148fb9ac8(void)

void FUN_148fb9ac8(longlong param_1,int param_2)

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



// FUNCTION 148fb9b4e FUN_148fb9b4e body=132 status=ok
// SIG undefined FUN_148fb9b4e(void)

void FUN_148fb9b4e(longlong param_1,int param_2)

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



// FUNCTION 148fb9bd4 FUN_148fb9bd4 body=130 status=ok
// SIG undefined FUN_148fb9bd4(void)

void FUN_148fb9bd4(longlong *param_1,longlong *param_2)

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



// FUNCTION 148fb9c58 FUN_148fb9c58 body=230 status=ok
// SIG undefined FUN_148fb9c58(void)

undefined8 * FUN_148fb9c58(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,CONCAT71(uVar5,1));
      plVar2 = (longlong *)*param_3;
      if (plVar2 == (longlong *)0x0 || (int)param_3[1] == 0) {
        local_30 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
      }
      *param_2 = local_30;
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



// FUNCTION 148fb9d4e FUN_148fb9d4e body=109 status=ok
// SIG undefined FUN_148fb9d4e(void)

void FUN_148fb9d4e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x78,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x78)) {
      uVar2 = uVar1 / 0x78 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x78,8);
  }
  return;
}



// FUNCTION 148fb9dbc FUN_148fb9dbc body=147 status=ok
// SIG undefined FUN_148fb9dbc(void)

void FUN_148fb9dbc(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148fb9e50 FUN_148fb9e50 body=114 status=ok
// SIG undefined FUN_148fb9e50(void)

void FUN_148fb9e50(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 148fb9ec2 FUN_148fb9ec2 body=9 status=ok
// SIG undefined FUN_148fb9ec2(void)

void FUN_148fb9ec2(longlong param_1)

{
  FUN_1449db362(param_1 + 0x10);
  return;
}



// FUNCTION 148fb9ecc FUN_148fb9ecc body=29 status=ok
// SIG undefined FUN_148fb9ecc(void)

undefined8 FUN_148fb9ecc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fb9eea FUN_148fb9eea body=387 status=ok
// SIG undefined FUN_148fb9eea(void)

undefined4 * FUN_148fb9eea(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148fba06e(param_1,local_40);
  puVar2 = (undefined8 *)*param_3;
  puVar3 = (undefined8 *)param_3[1];
  *local_38 = *puVar2;
  lVar12 = puVar2[1];
  local_38[1] = lVar12;
  if (lVar12 != 0) {
    LOCK();
    *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
    UNLOCK();
  }
  local_38[2] = *puVar3;
  lVar12 = puVar3[1];
  local_38[3] = lVar12;
  if (lVar12 != 0) {
    LOCK();
    *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(local_38 + 4) = 0xffffffff;
  local_44 = local_40[0];
  plVar4 = (longlong *)*local_38;
  plVar5 = (longlong *)local_38[1];
  if (plVar5 == (longlong *)0x0) {
    uVar8 = (**(code **)(*plVar4 + 0x40))();
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    uVar8 = (**(code **)(*plVar4 + 0x40))();
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
  cVar7 = FUN_148fba154(param_1,uVar8,local_38,&local_44);
  uVar6 = local_44;
  if (cVar7 == '\0') {
    uVar9 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar11 = 1;
    if (3 < uVar9) {
      uVar10 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
      lVar12 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar12 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar11 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_38 + 0x24) = uVar8;
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 4) =
           *(undefined4 *)
            (lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar11;
      FUN_148fba320(param_1);
    }
  }
  *param_2 = uVar6;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fba06e FUN_148fba06e body=230 status=ok
// SIG undefined FUN_148fba06e(void)

int * FUN_148fba06e(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_140549c28(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 148fba154 FUN_148fba154 body=244 status=ok
// SIG undefined FUN_148fba154(void)

undefined8 FUN_148fba154(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined8 uVar13;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_40 = *param_3;
    plVar4 = (longlong *)param_3[1];
    local_38 = plVar4;
    if (plVar4 == (longlong *)0x0) {
      iVar12 = FUN_140df9b50(param_1,param_2,&local_40);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      iVar12 = FUN_140df9b50(param_1);
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
    if (iVar12 != -1) {
      puVar3 = (undefined4 *)(*param_1 + (longlong)iVar12 * 0x28);
      FUN_148fba2bc(puVar3);
      uVar5 = *(undefined4 *)param_3;
      uVar6 = *(undefined4 *)((longlong)param_3 + 4);
      uVar7 = *(undefined4 *)(param_3 + 1);
      uVar8 = *(undefined4 *)((longlong)param_3 + 0xc);
      uVar9 = *(undefined4 *)((longlong)param_3 + 0x14);
      uVar10 = *(undefined4 *)(param_3 + 3);
      uVar11 = *(undefined4 *)((longlong)param_3 + 0x1c);
      puVar3[4] = *(undefined4 *)(param_3 + 2);
      puVar3[5] = uVar9;
      puVar3[6] = uVar10;
      puVar3[7] = uVar11;
      *puVar3 = uVar5;
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      FUN_148fba24a(param_1,*param_4);
      *param_4 = iVar12;
      uVar13 = 1;
      goto LAB_148fba17a;
    }
  }
  uVar13 = 0;
LAB_148fba17a:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fba24a FUN_148fba24a body=114 status=ok
// SIG undefined FUN_148fba24a(void)

void FUN_148fba24a(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 148fba2bc FUN_148fba2bc body=100 status=ok
// SIG undefined FUN_148fba2bc(void)

void FUN_148fba2bc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
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
                    /* WARNING: Could not recover jumptable at 0x000148fba314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148fba320 FUN_148fba320 body=490 status=ok
// SIG undefined FUN_148fba320(void)

void FUN_148fba320(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
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
        lVar9 = (longlong)iVar12;
        plVar10 = *(longlong **)(lVar4 + lVar9 * 0x28);
        plVar5 = *(longlong **)(lVar4 + 8 + lVar9 * 0x28);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        lVar4 = lVar4 + lVar9 * 0x28;
        iVar7 = (**(code **)(*plVar10 + 0x40))();
        uVar8 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar8;
        *(int *)(lVar4 + 0x24) = iVar7;
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)(lVar4 + 0x20) =
             *(undefined4 *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
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



// FUNCTION 148fba50c FUN_148fba50c body=270 status=ok
// SIG undefined FUN_148fba50c(void)

void FUN_148fba50c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar6 = (**(code **)(*(longlong *)*param_2 + 0x40))();
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    uVar9 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
    iVar6 = *(int *)((longlong)plVar8 + uVar9 * 4);
    if (iVar6 != -1) {
      puVar10 = (undefined4 *)((longlong)plVar8 + uVar9 * 4);
      do {
        lVar3 = *param_1;
        lVar7 = (longlong)iVar6;
        puVar4 = *(undefined8 **)(lVar3 + lVar7 * 0x28);
        plVar8 = *(longlong **)(lVar3 + 8 + lVar7 * 0x28);
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
        }
        if (puVar4 == (undefined8 *)*param_2) {
          cVar5 = '\x01';
        }
        else {
          cVar5 = (**(code **)*puVar4)();
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
          FUN_148fba61a(param_1,*puVar10);
          break;
        }
        lVar3 = lVar3 + lVar7 * 0x28;
        iVar6 = *(int *)(lVar3 + 0x20);
        puVar10 = (undefined4 *)(lVar3 + 0x20);
      } while (iVar6 != -1);
    }
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
                    /* WARNING: Could not recover jumptable at 0x000148fba556. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar8 + 0x10))(plVar8);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148fba61a FUN_148fba61a body=117 status=ok
// SIG undefined FUN_148fba61a(void)

void FUN_148fba61a(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x28;
  lVar6 = (longlong)*(int *)(lVar1 + 0x24);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x20 + lVar6 * 0x28);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x28 + 0x20);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x20);
  FUN_148fba2bc((longlong)param_2 * 0x28 + *param_1);
  FUN_148fba24a(param_1,param_2);
  return;
}



// FUNCTION 148fba690 FUN_148fba690 body=130 status=ok
// SIG undefined FUN_148fba690(void)

void FUN_148fba690(longlong *param_1,longlong *param_2)

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



// FUNCTION 148fba714 FUN_148fba714 body=24 status=ok
// SIG undefined FUN_148fba714(void)

void FUN_148fba714(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148fba728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 148fba72c FUN_148fba72c body=29 status=ok
// SIG undefined FUN_148fba72c(void)

undefined8 FUN_148fba72c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fba74a FUN_148fba74a body=111 status=ok
// SIG undefined FUN_148fba74a(void)

void FUN_148fba74a(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x38,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x38,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148fba7b9 FUN_148fba7b9 body=52 status=ok
// SIG undefined FUN_148fba7b9(void)

void FUN_148fba7b9(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148fba7ee(param_1,param_2);
    param_1 = param_1 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return;
}



// FUNCTION 148fba7ee FUN_148fba7ee body=250 status=ok
// SIG undefined FUN_148fba7ee(void)

undefined8 * FUN_148fba7ee(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = &PTR_FUN_14b438e00;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  pvVar2 = *(void **)(param_2 + 8);
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  pvVar2 = *(void **)(param_2 + 0x18);
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[5] = 0;
  iVar1 = *(int *)(param_2 + 0x30);
  pvVar2 = *(void **)(param_2 + 0x28);
  *(int *)(param_1 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 5,iVar1,0);
    memcpy((void *)param_1[5],pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 148fba8e8 FUN_148fba8e8 body=130 status=ok
// SIG undefined FUN_148fba8e8(void)

void FUN_148fba8e8(longlong *param_1,longlong *param_2)

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



// FUNCTION 148fba96c FUN_148fba96c body=115 status=ok
// SIG undefined FUN_148fba96c(void)

void FUN_148fba96c(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)(int)param_2 * 0x120 + lVar1);
  FUN_14124efea(_Dst);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x120),(longlong)iVar3 * 0x120);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 148fba9e0 FUN_148fba9e0 body=62 status=ok
// SIG undefined FUN_148fba9e0(void)

void FUN_148fba9e0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148fbaa1e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x120,8);
  }
  return;
}



// FUNCTION 148fbaa1e FUN_148fbaa1e body=112 status=ok
// SIG undefined FUN_148fbaa1e(void)

ulonglong FUN_148fbaa1e(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x120) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148fbaa58;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x120,8);
      param_2 = param_2 / 0x120;
    }
  }
LAB_148fbaa58:
  return param_2 & 0xffffffff;
}



// FUNCTION 148fbaa8e FUN_148fbaa8e body=48 status=ok
// SIG undefined FUN_148fbaa8e(void)

void FUN_148fbaa8e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 148fbaabe FUN_148fbaabe body=189 status=ok
// SIG undefined FUN_148fbaabe(void)

void FUN_148fbaabe(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  if (*(int *)(param_1 + 0x10) != -1) {
    puVar4 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c7648d0);
    (**(code **)(*(longlong *)*puVar4 + 0x80))((longlong *)*puVar4,*(undefined4 *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  FUN_14124efea(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_1 + 0x38);
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
                    /* WARNING: Could not recover jumptable at 0x000148fbab6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148fbab7c FUN_148fbab7c body=122 status=ok
// SIG undefined FUN_148fbab7c(void)

void FUN_148fbab7c(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar1 = FUN_144a788f7(param_2 & 0xffffffff);
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 +
                    ((longlong)(iVar1 + (int)(param_2 >> 0x20)) & (longlong)(int)param_1[9] - 1U) *
                    4);
    if (iVar1 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x38) == param_2) {
          FUN_148fbabf6(param_1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x38 + *param_1 + 0x30);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 148fbabf6 FUN_148fbabf6 body=126 status=ok
// SIG undefined FUN_148fbabf6(void)

void FUN_148fbabf6(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x38;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x34 + lVar2);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x30 + lVar6 * 0x38);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar1 + lVar6 * 0x38 + 0x30);
  }
  *puVar3 = *(undefined4 *)(lVar1 + lVar2 + 0x30);
  FUN_140c3a2ac(*param_1 + lVar2 + 8);
  FUN_1489bc768(param_1,param_2,1);
  return;
}



// FUNCTION 148fbac74 FUN_148fbac74 body=70 status=ok
// SIG undefined FUN_148fbac74(void)

void FUN_148fbac74(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1[1];
  if ((int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar4 * 8);
      if (lVar2 != 0) {
        FUN_148fbaabe(lVar2);
        FUN_1400020a8(lVar2);
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar3 != (int)lVar4);
  }
  return;
}



// FUNCTION 148fbacba FUN_148fbacba body=29 status=ok
// SIG undefined FUN_148fbacba(void)

undefined8 FUN_148fbacba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fbacf4 FUN_148fbacf4 body=93 status=ok
// SIG undefined FUN_148fbacf4(void)

void FUN_148fbacf4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba3a100;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba46210;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148fbad52 FUN_148fbad52 body=93 status=ok
// SIG undefined FUN_148fbad52(void)

void FUN_148fbad52(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba3a100;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba46210;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148fbadb0 FUN_148fbadb0 body=126 status=ok
// SIG undefined FUN_148fbadb0(void)

void FUN_148fbadb0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ba3a100;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba46210;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148fbae1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148fbae3c FUN_148fbae3c body=21 status=ok
// SIG undefined FUN_148fbae3c(void)

undefined8 FUN_148fbae3c(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148fbae52 FUN_148fbae52 body=29 status=ok
// SIG undefined FUN_148fbae52(void)

undefined8 FUN_148fbae52(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fbae8c FUN_148fbae8c body=93 status=ok
// SIG undefined FUN_148fbae8c(void)

void FUN_148fbae8c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba417f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba46280;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148fbaeea FUN_148fbaeea body=93 status=ok
// SIG undefined FUN_148fbaeea(void)

void FUN_148fbaeea(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba417f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba46280;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148fbaf48 FUN_148fbaf48 body=126 status=ok
// SIG undefined FUN_148fbaf48(void)

void FUN_148fbaf48(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ba417f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba46280;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148fbafb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148fbafd4 FUN_148fbafd4 body=21 status=ok
// SIG undefined FUN_148fbafd4(void)

undefined8 FUN_148fbafd4(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148fbafea FUN_148fbafea body=29 status=ok
// SIG undefined FUN_148fbafea(void)

undefined8 FUN_148fbafea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fbb024 FUN_148fbb024 body=93 status=ok
// SIG undefined FUN_148fbb024(void)

void FUN_148fbb024(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba462f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148fbb082 FUN_148fbb082 body=93 status=ok
// SIG undefined FUN_148fbb082(void)

void FUN_148fbb082(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba462f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148fbb0e0 FUN_148fbb0e0 body=126 status=ok
// SIG undefined FUN_148fbb0e0(void)

void FUN_148fbb0e0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ba462f0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148fbb14f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148fbb16a FUN_148fbb16a body=21 status=ok
// SIG undefined FUN_148fbb16a(void)

undefined8 FUN_148fbb16a(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148fbb180 FUN_148fbb180 body=88 status=ok
// SIG undefined FUN_148fbb180(void)

void FUN_148fbb180(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 4)) {
    uVar3 = uVar1 >> 4 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x10,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 148fbb1d8 FUN_148fbb1d8 body=40 status=ok
// SIG undefined FUN_148fbb1d8(void)

void FUN_148fbb1d8(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
    lVar1 = *(longlong *)(param_2 + 8 + lVar2);
    *(longlong *)(param_1 + 8 + lVar2) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    lVar2 = lVar2 + 0x10;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 148fbb200 FUN_148fbb200 body=113 status=ok
// SIG undefined FUN_148fbb200(void)

void FUN_148fbb200(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)(int)param_2 * 0x10 + lVar1);
  FUN_145c3913e(_Dst,1);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x10),(longlong)iVar3 << 4);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 148fbb272 FUN_148fbb272 body=230 status=ok
// SIG undefined FUN_148fbb272(void)

undefined8 * FUN_148fbb272(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,CONCAT71(uVar5,1));
      plVar2 = (longlong *)*param_3;
      if (plVar2 == (longlong *)0x0 || (int)param_3[1] == 0) {
        local_30 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
      }
      *param_2 = local_30;
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



// FUNCTION 148fbb35a FUN_148fbb35a body=130 status=ok
// SIG undefined FUN_148fbb35a(void)

void FUN_148fbb35a(longlong *param_1,longlong *param_2)

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



// FUNCTION 148fbb3de FUN_148fbb3de body=230 status=ok
// SIG undefined FUN_148fbb3de(void)

undefined8 * FUN_148fbb3de(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,CONCAT71(uVar5,1));
      plVar2 = (longlong *)*param_3;
      if (plVar2 == (longlong *)0x0 || (int)param_3[1] == 0) {
        local_30 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
      }
      *param_2 = local_30;
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



// FUNCTION 148fbb4c6 FUN_148fbb4c6 body=130 status=ok
// SIG undefined FUN_148fbb4c6(void)

void FUN_148fbb4c6(longlong *param_1,longlong *param_2)

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



// FUNCTION 148fbb54a FUN_148fbb54a body=164 status=ok
// SIG undefined FUN_148fbb54a(void)

void FUN_148fbb54a(longlong *param_1,undefined8 param_2)

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
        goto LAB_148fbb5ca;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148fbb5ca:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148fbb5ee FUN_148fbb5ee body=162 status=ok
// SIG undefined FUN_148fbb5ee(void)

void FUN_148fbb5ee(longlong *param_1,undefined4 param_2)

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
        goto LAB_148fbb66c;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148fbb66c:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148fbb690 FUN_148fbb690 body=151 status=ok
// SIG undefined FUN_148fbb690(void)

undefined8 FUN_148fbb690(longlong *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140002266(&local_30,L"0x%llX",param_1[7]);
  puVar2 = local_30;
  if (local_28 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  uVar1 = (**(code **)(*param_1 + 0x30))(param_1);
  FUN_140002266(param_2,L"FOnlineAsyncTaskSteamReadSharedFile bWasSuccessful: %d Handle: %s",uVar1,
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



// FUNCTION 148fbb728 FUN_148fbb728 body=36 status=ok
// SIG undefined FUN_148fbb728(void)

undefined8 FUN_148fbb728(longlong param_1,undefined8 param_2)

{
  FUN_140002266(param_2,L"0x%llX",*(undefined8 *)(param_1 + 8));
  return param_2;
}



// FUNCTION 148fbb75c FUN_148fbb75c body=400 status=ok
// SIG undefined FUN_148fbb75c(void)

ulonglong FUN_148fbb75c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x48))(*(longlong **)(param_1 + 0x10),&local_38);
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
        piVar2 = (int *)((longlong)local_30 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
        }
      }
    }
  }
  lVar6 = FUN_148fbb8ee(local_38,param_1 + 0x30);
  if (lVar6 == 0) {
    LOCK();
    uVar3 = *(uint *)(param_1 + 0x1c);
    *(uint *)(param_1 + 0x1c) = 0;
    UNLOCK();
    goto LAB_148fbb8a3;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    if (*(longlong *)(param_1 + 0x48) == *(longlong *)(param_1 + 0x38)) {
      iVar5 = *(int *)(param_1 + 0x54);
      if (iVar5 - 1U < 0x6400000) {
        lVar9 = lVar6 + 0x20;
        *(undefined4 *)(lVar6 + 0x28) = 0;
        iVar4 = 0;
        if (*(int *)(lVar6 + 0x2c) != iVar5) {
          FUN_144893a1c(lVar9);
          iVar4 = *(int *)(lVar6 + 0x28);
          iVar5 = *(int *)(lVar6 + 0x2c);
        }
        uVar3 = *(uint *)(param_1 + 0x54);
        *(uint *)(lVar6 + 0x28) = uVar3 + iVar4;
        if ((uint)(iVar5 - iVar4) < uVar3) {
          FUN_1447403be(lVar9,iVar4);
        }
        puVar7 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764950);
        local_40 = 0;
        local_48 = 0;
        iVar5 = (**(code **)(*(longlong *)*puVar7 + 0xd8))
                          ((longlong *)*puVar7,*(undefined8 *)(param_1 + 0x48),
                           *(undefined8 *)(lVar6 + 0x20),*(undefined4 *)(lVar6 + 0x28));
        if (iVar5 == *(int *)(param_1 + 0x54)) goto LAB_148fbb895;
        *(undefined4 *)(lVar6 + 0x28) = 0;
        if (*(int *)(lVar6 + 0x2c) != 0) {
          FUN_144893a1c(lVar9,0);
        }
      }
    }
    LOCK();
    *(undefined4 *)(param_1 + 0x1c) = 0;
    UNLOCK();
  }
LAB_148fbb895:
  uVar3 = *(uint *)(param_1 + 0x1c);
  *(uint *)(lVar6 + 0x18) = (uVar3 == 0) + 2;
LAB_148fbb8a3:
  uVar8 = (ulonglong)uVar3;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      uVar8 = (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        uVar8 = (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fbb8ee FUN_148fbb8ee body=172 status=ok
// SIG undefined FUN_148fbb8ee(void)

longlong FUN_148fbb8ee(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  plVar1 = (longlong *)(param_1 + 0x40);
  iVar2 = *(int *)(param_1 + 0x48);
  lVar5 = (longlong)iVar2;
  if (0 < lVar5) {
    lVar6 = 0;
    do {
      lVar3 = *(longlong *)(*plVar1 + lVar6 * 8);
      if (*(longlong *)(lVar3 + 0x38) == *(longlong *)(param_2 + 8)) {
        return lVar3;
      }
      lVar6 = lVar6 + 1;
    } while (lVar5 != lVar6);
  }
  puVar4 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  puVar4[1] = 0;
  puVar4[2] = 0;
  *(undefined4 *)(puVar4 + 3) = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  *puVar4 = &PTR_FUN_14ba4a7b8;
  puVar4[6] = &PTR_FUN_14ba4a780;
  puVar4[7] = *(undefined8 *)(param_2 + 8);
  *(uint *)(param_1 + 0x48) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x4c) < iVar2 + 1U) {
    FUN_148fc3c22(plVar1,iVar2);
  }
  *(undefined8 **)(*plVar1 + lVar5 * 8) = puVar4;
  return *(longlong *)(*plVar1 + lVar5 * 8);
}



// FUNCTION 148fbb99a FUN_148fbb99a body=133 status=ok
// SIG undefined FUN_148fbb99a(void)

void FUN_148fbb99a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x48))(*(longlong **)(param_1 + 0x10),&local_28);
  (**(code **)(*local_28 + 0x40))(local_28,*(int *)(param_1 + 0x1c) != 0,param_1 + 0x30);
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



// FUNCTION 148fbba20 FUN_148fbba20 body=232 status=ok
// SIG undefined FUN_148fbba20(void)

undefined8 FUN_148fbba20(longlong *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_60;
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140002266(&local_48,L"0x%llX",param_1[0xd]);
  puVar4 = &DAT_149dfb77a;
  if (local_40 != 0) {
    puVar4 = local_48;
  }
  puVar3 = &DAT_149dfb77a;
  if ((int)param_1[10] != 0) {
    puVar3 = (undefined2 *)param_1[9];
  }
  (**(code **)(*(longlong *)param_1[7] + 0x38))((longlong *)param_1[7],&local_58);
  puVar2 = &DAT_149dfb77a;
  if (local_50 != 0) {
    puVar2 = local_58;
  }
  uVar1 = (**(code **)(*param_1 + 0x30))(param_1);
  local_68 = puVar3;
  local_60 = puVar4;
  FUN_140002266(param_2,
                L"FOnlineAsyncTaskSteamWriteSharedFile bWasSuccessful:%d UserId:%s FileName:%s Handle:%s"
                ,uVar1,puVar2);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fbbb0a FUN_148fbbb0a body=442 status=ok
// SIG undefined FUN_148fbbb0a(void)

ulonglong FUN_148fbbb0a(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  byte bVar4;
  undefined8 *puVar5;
  size_t sVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  uint uVar9;
  wchar_t *_Str;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  char *local_e0;
  char local_c9;
  char local_c8 [128];
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  puVar5 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764830);
  plVar1 = (longlong *)*puVar5;
  if (*(char *)(param_1 + 0x58) != '\0') goto LAB_148fbbbe0;
  cVar3 = FUN_1443b1440(param_1,*(undefined8 *)(param_1 + 0x38),(longlong *)(param_1 + 0x48),
                        param_1 + 0x28);
  if (cVar3 != '\0') {
    puVar5 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764950);
    plVar2 = (longlong *)*puVar5;
    if (*(int *)(param_1 + 0x50) == 0) {
      _Str = L"";
LAB_148fbbb94:
      local_48 = 0;
      sVar6 = wcslen(_Str);
      FUN_1446fe5a4(local_c8,_Str,sVar6 & 0xffffffff,1);
    }
    else {
      _Str = *(wchar_t **)(param_1 + 0x48);
      local_48 = 0;
      if (_Str != (wchar_t *)0x0) goto LAB_148fbbb94;
      local_40 = 0;
      local_38 = 0;
    }
    uVar7 = (**(code **)(*plVar2 + 0x38))(plVar2,local_40);
    *(undefined8 *)(param_1 + 0x20) = uVar7;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  *(undefined1 *)(param_1 + 0x58) = 1;
LAB_148fbbbe0:
  if (*(longlong *)(param_1 + 0x20) == 0) {
    LOCK();
    *(undefined4 *)(param_1 + 0x18) = 1;
    UNLOCK();
    LOCK();
    uVar9 = *(uint *)(param_1 + 0x1c);
    *(uint *)(param_1 + 0x1c) = 0;
    uVar8 = (ulonglong)uVar9;
    UNLOCK();
  }
  else {
    local_c8[0] = '\0';
    bVar4 = (**(code **)(*plVar1 + 0x58))(plVar1);
    LOCK();
    *(uint *)(param_1 + 0x18) = (uint)bVar4;
    UNLOCK();
    uVar8 = (ulonglong)*(uint *)(param_1 + 0x18);
    if (*(uint *)(param_1 + 0x18) != 0) {
      local_e0 = &local_c9;
      local_e8 = 0x51b;
      uVar8 = (**(code **)(*plVar1 + 0x68))
                        (plVar1,*(undefined8 *)(param_1 + 0x20),(int *)(param_1 + 0x60),0x118);
      uVar9 = 0;
      if ((((char)uVar8 != '\0') && (local_c8[0] == '\0')) && (local_c9 == '\0')) {
        uVar9 = (uint)(*(int *)(param_1 + 0x60) == 1);
      }
      LOCK();
      *(uint *)(param_1 + 0x1c) = uVar9;
      UNLOCK();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fbbcc6 FUN_148fbbcc6 body=281 status=ok
// SIG undefined FUN_148fbbcc6(void)

void FUN_148fbbcc6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined **ppuVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined **local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x1c) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x48))(*(longlong **)(param_1 + 0x10),&local_38);
    plVar4 = local_30;
    ppuVar3 = local_38;
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
          piVar2 = (int *)((longlong)local_30 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_30 + 0x10))(local_30);
          }
        }
      }
    }
    local_30 = *(longlong **)(param_1 + 0x68);
    local_38 = &PTR_FUN_14ba4a780;
    lVar5 = FUN_148fbb8ee(ppuVar3);
    if (lVar5 != 0) {
      FUN_1447a122a(lVar5 + 0x20,param_1 + 0x28);
      *(undefined4 *)(lVar5 + 0x18) = 2;
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
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_144893a1c(param_1 + 0x28,0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fbbde0 FUN_148fbbde0 body=293 status=ok
// SIG undefined FUN_148fbbde0(void)

void FUN_148fbbde0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined8 **local_48;
  undefined8 *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x48))(*(longlong **)(param_1 + 0x10),&local_30);
  if (*(int *)(param_1 + 0x1c) == 0) {
    uVar5 = 0xffffffffffffffff;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x68);
  }
  puVar4 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar4 = &PTR_FUN_14ba4a780;
  puVar4[1] = uVar5;
  local_40 = puVar4;
  local_38 = (longlong *)FUN_14001cc68(0x18,0x10);
  local_38[1] = (longlong)&DAT_100000001;
  *local_38 = (longlong)&PTR_FUN_14ba4c000;
  local_38[2] = (longlong)puVar4;
  local_48 = &local_40;
  (**(code **)(*local_30 + 0x68))
            (local_30,*(int *)(param_1 + 0x1c) != 0,*(undefined8 *)(param_1 + 0x38),param_1 + 0x48);
  plVar3 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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



// FUNCTION 148fbbf06 FUN_148fbbf06 body=89 status=ok
// SIG undefined FUN_148fbbf06(void)

ulonglong FUN_148fbbf06(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 unaff_RDI;
  ulonglong uVar2;
  
  lVar1 = FUN_148fbb8ee();
  if (((lVar1 == 0) || (*(int *)(lVar1 + 0x18) != 2)) || (*(int *)(lVar1 + 0x28) < 1)) {
    *(undefined4 *)(param_3 + 8) = 0;
    if (*(int *)(param_3 + 0xc) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      FUN_144893a1c(param_3,0);
    }
  }
  else {
    FUN_1447a122a(param_3,lVar1 + 0x20);
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 148fbbf60 FUN_148fbbf60 body=155 status=ok
// SIG undefined FUN_148fbbf60(void)

ulonglong FUN_148fbbf60(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = *(uint *)(param_1 + 0x48);
  if (0 < (int)uVar3) {
    lVar1 = *(longlong *)(param_1 + 0x40);
    uVar4 = 0;
    do {
      puVar2 = *(undefined8 **)(lVar1 + uVar4 * 8);
      if (puVar2[7] == *(longlong *)(param_2 + 8)) {
        if (*(int *)(puVar2 + 3) != 1) {
          if (uVar3 - 1 != (int)uVar4) {
            iVar5 = (uVar3 - 1) - (int)uVar4;
            iVar6 = 1;
            if (iVar5 < 1) {
              iVar6 = iVar5;
            }
            memmove((void *)(lVar1 + uVar4 * 8),(void *)(lVar1 + (ulonglong)(uVar3 - iVar6) * 8),
                    (longlong)iVar6 << 3);
            uVar3 = *(uint *)(param_1 + 0x48);
          }
          *(uint *)(param_1 + 0x48) = uVar3 - 1;
          FUN_148fc3cd8((longlong *)(param_1 + 0x40));
          uVar4 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
          if (puVar2 != (undefined8 *)0x0) {
            (**(code **)*puVar2)(puVar2,1);
          }
          goto LAB_148fbbf9a;
        }
        break;
      }
      uVar4 = uVar4 + 1;
    } while (uVar3 != uVar4);
  }
  uVar4 = 0;
LAB_148fbbf9a:
  return uVar4 & 0xffffffff;
}



// FUNCTION 148fbbffc FUN_148fbbffc body=242 status=ok
// SIG undefined FUN_148fbbffc(void)

bool FUN_148fbbffc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_148fbb8ee();
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0x18) = 1;
    lVar1 = *(longlong *)(param_1 + 0x38);
    puVar3 = (undefined8 *)FUN_14001cc68(0x168,0x10);
    QueryPerformanceCounter(&local_38);
    puVar3[1] = (double)local_38.QuadPart * DAT_14c83f420 + 16777216.0;
    *puVar3 = &PTR_LAB_14ba46e30;
    puVar3[2] = lVar1;
    *(undefined4 *)(puVar3 + 3) = 0;
    *(undefined4 *)((longlong)puVar3 + 0x1c) = 0;
    puVar3[4] = 0;
    *puVar3 = &PTR_FUN_14ba4a7d0;
    *(undefined1 *)(puVar3 + 5) = 0;
    puVar3[6] = &PTR_FUN_14ba4a780;
    puVar3[7] = *(undefined8 *)(param_2 + 8);
    FUN_1410d2116(*(undefined8 *)(lVar1 + 0x210),puVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fbc0f0 FUN_148fbc0f0 body=108 status=ok
// SIG undefined FUN_148fbc0f0(void)

undefined8 FUN_148fbc0f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  puVar2 = (undefined8 *)FUN_14001cc68(0x178,0x10);
  FUN_148fbe4e4(puVar2,lVar1,param_2,param_3,param_4);
  *puVar2 = &PTR_FUN_14ba4a810;
  *(undefined1 *)(puVar2 + 0xb) = 0;
  FUN_1410d2116(*(undefined8 *)(lVar1 + 0x210),puVar2);
  return 1;
}



// FUNCTION 148fbc15c FUN_148fbc15c body=2346 status=ok
// SIG undefined FUN_148fbc15c(void)

void FUN_148fbc15c(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  
  puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar5 = &PTR_FUN_14ba4a780;
  puVar5[1] = 0x840da4f42842da2;
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14ba4c000;
  plVar6[2] = (longlong)puVar5;
  iVar3 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
    FUN_148fc3d74(param_2,iVar3);
  }
  lVar4 = *param_2;
  *(undefined8 **)(lVar4 + (longlong)iVar3 * 0x10) = puVar5;
  *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
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
  puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar5 = &PTR_FUN_14ba4a780;
  puVar5[1] = 0x840da4f42842f50;
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14ba4c000;
  plVar6[2] = (longlong)puVar5;
  iVar3 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
    FUN_148fc3d74(param_2,iVar3);
  }
  lVar4 = *param_2;
  *(undefined8 **)(lVar4 + (longlong)iVar3 * 0x10) = puVar5;
  *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
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
  puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar5 = &PTR_FUN_14ba4a780;
  puVar5[1] = 0x840da4f428430df;
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14ba4c000;
  plVar6[2] = (longlong)puVar5;
  iVar3 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
    FUN_148fc3d74(param_2,iVar3);
  }
  lVar4 = *param_2;
  *(undefined8 **)(lVar4 + (longlong)iVar3 * 0x10) = puVar5;
  *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
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
  puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar5 = &PTR_FUN_14ba4a780;
  puVar5[1] = 0x840da4f428432cf;
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14ba4c000;
  plVar6[2] = (longlong)puVar5;
  iVar3 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
    FUN_148fc3d74(param_2,iVar3);
  }
  lVar4 = *param_2;
  *(undefined8 **)(lVar4 + (longlong)iVar3 * 0x10) = puVar5;
  *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
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
  puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar5 = &PTR_FUN_14ba4a780;
  puVar5[1] = 0x840da4f4284349b;
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14ba4c000;
  plVar6[2] = (longlong)puVar5;
  iVar3 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
    FUN_148fc3d74(param_2,iVar3);
  }
  lVar4 = *param_2;
  *(undefined8 **)(lVar4 + (longlong)iVar3 * 0x10) = puVar5;
  *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
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
  puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar5 = &PTR_FUN_14ba4a780;
  puVar5[1] = 0x840da4f42843648;
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14ba4c000;
  plVar6[2] = (longlong)puVar5;
  iVar3 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
    FUN_148fc3d74(param_2,iVar3);
  }
  lVar4 = *param_2;
  *(undefined8 **)(lVar4 + (longlong)iVar3 * 0x10) = puVar5;
  *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
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
  puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar5 = &PTR_FUN_14ba4a780;
  puVar5[1] = 0x840da4f42843809;
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14ba4c000;
  plVar6[2] = (longlong)puVar5;
  iVar3 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
    FUN_148fc3d74(param_2,iVar3);
  }
  lVar4 = *param_2;
  *(undefined8 **)(lVar4 + (longlong)iVar3 * 0x10) = puVar5;
  *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
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
  puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar5 = &PTR_FUN_14ba4a780;
  puVar5[1] = 0x840da4f428439a0;
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14ba4c000;
  plVar6[2] = (longlong)puVar5;
  iVar3 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
    FUN_148fc3d74(param_2,iVar3);
  }
  lVar4 = *param_2;
  *(undefined8 **)(lVar4 + (longlong)iVar3 * 0x10) = puVar5;
  *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
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
  puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar5 = &PTR_FUN_14ba4a780;
  puVar5[1] = 0x840da4f42843b51;
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14ba4c000;
  plVar6[2] = (longlong)puVar5;
  iVar3 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
    FUN_148fc3d74(param_2,iVar3);
  }
  lVar4 = *param_2;
  *(undefined8 **)(lVar4 + (longlong)iVar3 * 0x10) = puVar5;
  *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
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
  puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar5 = &PTR_FUN_14ba4a780;
  puVar5[1] = 0x840da4f42843cee;
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14ba4c000;
  plVar6[2] = (longlong)puVar5;
  iVar3 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
    FUN_148fc3d74(param_2,iVar3);
  }
  lVar4 = *param_2;
  *(undefined8 **)(lVar4 + (longlong)iVar3 * 0x10) = puVar5;
  *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
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
  puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar5 = &PTR_FUN_14ba4a780;
  puVar5[1] = 0x840da4f42843f73;
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14ba4c000;
  plVar6[2] = (longlong)puVar5;
  iVar3 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
    FUN_148fc3d74(param_2,iVar3);
  }
  lVar4 = *param_2;
  *(undefined8 **)(lVar4 + (longlong)iVar3 * 0x10) = puVar5;
  *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
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
  puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar5 = &PTR_FUN_14ba4a780;
  puVar5[1] = 0x840da4f42844129;
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14ba4c000;
  plVar6[2] = (longlong)puVar5;
  iVar3 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
    FUN_148fc3d74(param_2,iVar3);
  }
  lVar4 = *param_2;
  *(undefined8 **)(lVar4 + (longlong)iVar3 * 0x10) = puVar5;
  *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
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
  puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar5 = &PTR_FUN_14ba4a780;
  puVar5[1] = 0x840da4f428442cb;
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14ba4c000;
  plVar6[2] = (longlong)puVar5;
  iVar3 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
    FUN_148fc3d74(param_2,iVar3);
  }
  lVar4 = *param_2;
  *(undefined8 **)(lVar4 + (longlong)iVar3 * 0x10) = puVar5;
  *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
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
  puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar5 = &PTR_FUN_14ba4a780;
  puVar5[1] = 0x840da4f428445cb;
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14ba4c000;
  plVar6[2] = (longlong)puVar5;
  iVar3 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
    FUN_148fc3d74(param_2,iVar3);
  }
  lVar4 = *param_2;
  *(undefined8 **)(lVar4 + (longlong)iVar3 * 0x10) = puVar5;
  *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
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
  puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar5 = &PTR_FUN_14ba4a780;
  puVar5[1] = 0x840da4f4284478c;
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14ba4c000;
  plVar6[2] = (longlong)puVar5;
  iVar3 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
    FUN_148fc3d74(param_2,iVar3);
  }
  lVar4 = *param_2;
  *(undefined8 **)(lVar4 + (longlong)iVar3 * 0x10) = puVar5;
  *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
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
        return;
      }
    }
  }
  return;
}



// FUNCTION 148fbca86 FUN_148fbca86 body=210 status=ok
// SIG undefined FUN_148fbca86(void)

void FUN_148fbca86(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  local_50 = 0;
  local_48 = 0;
  FUN_147ca3f96(&local_50,param_3);
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar2 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_149e020b0;
  uVar3 = FUN_144a3f946();
  puVar2[2] = uVar3;
  *puVar2 = &PTR_FUN_14ba4c020;
  puVar2[3] = 0;
  *(undefined4 *)(puVar2 + 4) = 0;
  FUN_147ca3f96(puVar2 + 3,&local_50);
  FUN_145c398c4(uVar1,&local_40);
  FUN_1449db362(&local_40);
  FUN_1449db362(&local_50);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fbcb5a FUN_148fbcb5a body=53 status=ok
// SIG undefined FUN_148fbcb5a(void)

void FUN_148fbcb5a(undefined8 param_1,undefined8 *param_2)

{
  FUN_148fc3df9(*param_2,*(undefined4 *)(param_2 + 1));
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) == 0) {
    return;
  }
  FUN_148fc3e52(param_2,0);
  return;
}



// FUNCTION 148fbcba0 FUN_148fbcba0 body=199 status=ok
// SIG undefined FUN_148fbcba0(void)

undefined8 * FUN_148fbcba0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba4a8f0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_144a5dc74(param_1 + 3);
  FUN_144a5dc74(param_1 + 5);
  FUN_144a5dc74(param_1 + 7);
  FUN_144a5dc74(param_1 + 9);
  param_1[0xb] = 0xffffffffffffffff;
  FUN_144a5dc74(param_1 + 0xc);
  param_1[0xe] = 0xffffffffffffffff;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0x2bca2875f4373fff;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  return param_1;
}



// FUNCTION 148fbcc78 FUN_148fbcc78 body=95 status=ok
// SIG undefined FUN_148fbcc78(void)

undefined8 * FUN_148fbcc78(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145c26966(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148fc3fe0(param_1,iVar1);
      FUN_148fc4042(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148fbccd8 FUN_148fbccd8 body=288 status=ok
// SIG undefined FUN_148fbccd8(void)

longlong * FUN_148fbccd8(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  ushort uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ushort uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong *plVar12;
  
  if ((longlong)*(int *)(param_1 + 0x40) == 0) {
LAB_148fbcd9f:
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  plVar12 = *(longlong **)(param_1 + 0x38);
  plVar11 = plVar12 + (longlong)*(int *)(param_1 + 0x40) * 2;
LAB_148fbcd0a:
  lVar4 = *plVar12;
  plVar5 = (longlong *)plVar12[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  iVar3 = *(int *)(lVar4 + 0x10);
  if (iVar3 == (int)param_3[1]) {
    if (1 < iVar3) {
      lVar8 = 0;
      do {
        uVar6 = *(ushort *)(*(longlong *)(lVar4 + 8) + lVar8);
        uVar7 = (ulonglong)uVar6;
        uVar9 = *(ushort *)(*param_3 + lVar8);
        if (uVar6 == uVar9) {
          if (uVar6 == 0) break;
        }
        else {
          if (0x7f < (uVar9 | uVar6)) goto LAB_148fbcdc1;
          uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
          uVar10 = (ulonglong)uVar9;
          uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
          if ((&DAT_149e05da0)[uVar7] != (&DAT_149e05da0)[uVar10]) goto LAB_148fbcdc1;
        }
        lVar8 = lVar8 + 2;
      } while( true );
    }
    goto LAB_148fbcdc9;
  }
  if ((int)param_3[1] + iVar3 == 1) goto LAB_148fbcdc9;
  goto LAB_148fbcd79;
LAB_148fbcdc1:
  if (uVar6 == uVar9) {
LAB_148fbcdc9:
    *param_2 = lVar4;
    param_2[1] = (longlong)plVar5;
    if (plVar5 == (longlong *)0x0) {
      return param_2;
    }
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    plVar12 = plVar5 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 != 0) {
      return param_2;
    }
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 != 0) {
      return param_2;
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
    return param_2;
  }
LAB_148fbcd79:
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
  plVar12 = plVar12 + 2;
  if (plVar12 == plVar11) goto LAB_148fbcd9f;
  goto LAB_148fbcd0a;
}



// FUNCTION 148fbce60 FUN_148fbce60 body=133 status=ok
// SIG undefined FUN_148fbce60(void)

void FUN_148fbce60(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x1c8);
  *(undefined8 *)(param_1 + 0x1c0) = uVar3;
  *(longlong *)(param_1 + 0x1c8) = lVar4;
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
  plVar5 = (longlong *)param_2[1];
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
                    /* WARNING: Could not recover jumptable at 0x000148fbced9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148fbd02a FUN_148fbd02a body=171 status=ok
// SIG undefined FUN_148fbd02a(void)

undefined8 * FUN_148fbd02a(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = 0x1c;
  do {
    puVar2 = (undefined8 *)((longlong)param_1 + lVar1 + -0x14);
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar1 + -4) = 2;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x7c);
  *param_1 = &PTR_FUN_14ba47bc0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = param_2;
  puVar2 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764850);
  param_1[0x18] = *puVar2;
  puVar2 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764890);
  param_1[0x19] = *puVar2;
  return param_1;
}



// FUNCTION 148fbd0d6 FUN_148fbd0d6 body=277 status=ok
// SIG undefined FUN_148fbd0d6(void)

void FUN_148fbd0d6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (*(char *)(param_1 + 0xd9) == '\x01') {
    *(undefined8 *)(param_1 + 0x230) = 0;
    plVar3 = *(longlong **)(param_1 + 0x238);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x238) = 0;
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
    lVar4 = *(longlong *)(param_1 + 0xf8);
    if (lVar4 != 0) {
      *(undefined8 *)(lVar4 + 0x2d0) = 0;
      plVar3 = *(longlong **)(lVar4 + 0x2d8);
      if (plVar3 != (longlong *)0x0) {
        *(undefined8 *)(lVar4 + 0x2d8) = 0;
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
      *(undefined1 *)(*(longlong *)(param_1 + 0xf8) + 0x2c8) = 0;
    }
    *(undefined1 *)(param_1 + 0xd9) = 0;
  }
  if (*(char *)(param_1 + 0xd8) == '\x01') {
    *(undefined8 *)(param_1 + 0x220) = 0;
    plVar3 = *(longlong **)(param_1 + 0x228);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x228) = 0;
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
    *(undefined1 *)(param_1 + 0xd8) = 0;
  }
  return;
}



// FUNCTION 148fbd1ec FUN_148fbd1ec body=210 status=ok
// SIG undefined FUN_148fbd1ec(void)

longlong FUN_148fbd1ec(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x240));
  plVar1 = (longlong *)(param_1 + 0xe8);
  if (0 < *(int *)(param_1 + 0xf0)) {
    lVar5 = 0;
    do {
      lVar6 = *(longlong *)(*plVar1 + lVar5 * 8);
      cVar3 = (**(code **)**(undefined8 **)(lVar6 + 0x20))(*(undefined8 **)(lVar6 + 0x20),param_2);
      if (cVar3 != '\0') goto LAB_148fbd297;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0xf0));
  }
  puVar4 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  FUN_140df9946(param_2,puVar4 + 4);
  iVar2 = *(int *)(param_1 + 0xf0);
  *(uint *)(param_1 + 0xf0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xf4) < iVar2 + 1U) {
    FUN_148fc424e(plVar1,iVar2);
  }
  *(undefined8 **)(*plVar1 + (longlong)iVar2 * 8) = puVar4;
  lVar6 = *(longlong *)(*plVar1 + (longlong)iVar2 * 8);
LAB_148fbd297:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x240));
  return lVar6;
}



// FUNCTION 148fbd2be FUN_148fbd2be body=106 status=ok
// SIG undefined FUN_148fbd2be(void)

void FUN_148fbd2be(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  
  if (0x7ffffffe < *(int *)(param_3 + 8) - 2U) {
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x240));
  lVar1 = FUN_148fbd1ec(param_1,param_2);
  if (lVar1 != 0) {
    FUN_148fbd328(lVar1,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x000148fbd314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x240));
  return;
}



// FUNCTION 148fbd328 FUN_148fbd328 body=200 status=ok
// SIG undefined FUN_148fbd328(void)

void FUN_148fbd328(longlong *param_1,longlong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  ushort uVar3;
  ulonglong uVar4;
  ushort uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  if ((longlong)(int)param_1[1] < 1) {
    return;
  }
  iVar1 = (int)param_2[1];
  uVar2 = 0;
LAB_148fbd350:
  lVar6 = uVar2 * 0xa8 + *param_1;
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x30) == iVar1) {
      if (1 < iVar1) {
        lVar7 = 0;
        do {
          uVar3 = *(ushort *)(*(longlong *)(lVar6 + 0x28) + lVar7);
          uVar4 = (ulonglong)uVar3;
          uVar5 = *(ushort *)(*param_2 + lVar7);
          if (uVar3 == uVar5) {
            if (uVar3 == 0) break;
          }
          else {
            if (0x7f < (uVar5 | uVar3)) goto LAB_148fbd3cc;
            uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
            uVar8 = (ulonglong)uVar5;
            uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
            if ((&DAT_149e05da0)[uVar4] != (&DAT_149e05da0)[uVar8]) goto LAB_148fbd3cc;
          }
          lVar7 = lVar7 + 2;
        } while( true );
      }
      goto LAB_148fbd3d2;
    }
    if (*(int *)(lVar6 + 0x30) + iVar1 == 1) goto LAB_148fbd3d2;
  }
  goto LAB_148fbd3b7;
LAB_148fbd3cc:
  if (uVar3 == uVar5) {
LAB_148fbd3d2:
    FUN_148fc307a(param_1,uVar2 & 0xffffffff);
    FUN_148fc30ea(param_1);
    return;
  }
LAB_148fbd3b7:
  uVar2 = uVar2 + 1;
  if (uVar2 == (longlong)(int)param_1[1]) {
    return;
  }
  goto LAB_148fbd350;
}



// FUNCTION 148fbd3f0 FUN_148fbd3f0 body=124 status=ok
// SIG undefined FUN_148fbd3f0(void)

void FUN_148fbd3f0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_148fc320c();
  FUN_148fbdeee(param_1);
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
  FUN_148fc3241(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_145e041f4(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148fbd46c FUN_148fbd46c body=544 status=ok
// SIG undefined FUN_148fbd46c(void)

undefined8 FUN_148fbd46c(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined1 local_88 [8];
  undefined8 *local_80;
  undefined4 local_78;
  undefined8 local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  undefined8 local_50;
  longlong **local_48;
  undefined1 *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_50 = param_3;
  cVar3 = FUN_1489b930a();
  uVar4 = 1;
  if (cVar3 != '\0') goto LAB_148fbd4a1;
  cVar3 = FUN_140988638(&local_50,L"DELETECLOUDFILES",1);
  if (cVar3 == '\0') {
    cVar3 = FUN_140988638(&local_50,L"SYNCLOBBIES",1);
    if (cVar3 == '\0') {
      cVar3 = FUN_140988638(&local_50,L"AUTH",1);
      if ((cVar3 != '\0') && (param_1[0x34] != 0)) {
        uVar4 = FUN_1443a0274(param_1[0x34],local_50);
        goto LAB_148fbd4a1;
      }
    }
    else if (param_1[0x1f] != 0) {
      FUN_1443acb6c();
      goto LAB_148fbd505;
    }
    uVar4 = 0;
  }
  else {
    (**(code **)(*param_1 + 0x50))(param_1,&local_60);
    puVar5 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764850);
    (**(code **)(*(longlong *)*puVar5 + 0x10))((longlong *)*puVar5,&local_48);
    FUN_140adf1ea(&local_70,&local_48);
    local_80 = (undefined8 *)0x0;
    local_78 = 0;
    FUN_1446efa72(&local_80,0,2,0x10);
    puVar5 = local_80;
    local_78 = 2;
    *local_80 = &PTR_LAB_14ba4c440;
    uVar4 = FUN_144a3f946();
    puVar5[2] = uVar4;
    *puVar5 = &PTR_FUN_14ba4c3d0;
    puVar5[3] = FUN_1443b44f0;
    (**(code **)(*local_60 + 0x28))(local_60,local_88,&local_80);
    local_48 = &local_90;
    local_90 = local_60;
    local_40 = local_88;
    FUN_148fc44a2(local_34,&local_48);
    (**(code **)(*local_60 + 0x20))(local_60,local_70);
    FUN_1449db362(&local_80);
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_68 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar2 = (int *)((longlong)local_68 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_68 + 0x10))(local_68);
        }
      }
    }
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_58 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
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
LAB_148fbd505:
    uVar4 = 1;
  }
LAB_148fbd4a1:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fbd68e FUN_148fbd68e body=152 status=ok
// SIG undefined FUN_148fbd68e(void)

undefined8 FUN_148fbd68e(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"OnlineServiceName";
  local_28 = 0x11;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"OnlineSubsystemSteam";
  local_28 = 0x14;
  FUN_1446e940c(local_38,&local_30);
  FUN_140208bae(param_2,local_38,local_34,L"Steam");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fbd728 FUN_148fbd728 body=145 status=ok
// SIG undefined FUN_148fbd728(void)

undefined8 FUN_148fbd728(longlong *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*(longlong *)param_1[5] + 0x38))((longlong *)param_1[5],&local_30);
  puVar2 = local_30;
  if (local_28 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  uVar1 = (**(code **)(*param_1 + 0x30))(param_1);
  FUN_140002266(param_2,L"FOnlineAsyncTaskSteamEnumerateUserFiles bWasSuccessful:%d UserId:%s",uVar1
                ,puVar2);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148fbd7ba FUN_148fbd7ba body=243 status=ok
// SIG undefined FUN_148fbd7ba(void)

undefined8 *
FUN_148fbd7ba(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  int iVar1;
  void *pvVar2;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  iVar1 = *(int *)(param_3 + 1);
  pvVar2 = (void *)*param_3;
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[5] = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 5,iVar1,0);
    memcpy((void *)param_1[5],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 7) = param_4;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return param_1;
}



// FUNCTION 148fbd8ae FUN_148fbd8ae body=130 status=ok
// SIG undefined FUN_148fbd8ae(void)

void FUN_148fbd8ae(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x50))(*(longlong **)(param_1 + 0x10),&local_28);
  (**(code **)(*local_28 + 0x40))
            (local_28,*(int *)(param_1 + 0x1c) != 0,*(undefined8 *)(param_1 + 0x28));
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



// FUNCTION 148fbd932 FUN_148fbd932 body=170 status=ok
// SIG undefined FUN_148fbd932(void)

undefined8 FUN_148fbd932(longlong *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar3 = &DAT_149dfb77a;
  if ((int)param_1[8] != 0) {
    puVar3 = (undefined2 *)param_1[7];
  }
  (**(code **)(*(longlong *)param_1[5] + 0x38))((longlong *)param_1[5],&local_40);
  puVar2 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar2 = local_40;
  }
  uVar1 = (**(code **)(*param_1 + 0x30))(param_1);
  local_48 = puVar3;
  FUN_140002266(param_2,L"FOnlineAsyncTaskSteamReadUserFile bWasSuccessful:%d UserId:%s FileName:%s"
                ,uVar1,puVar2);
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fbd9de FUN_148fbd9de body=263 status=ok
// SIG undefined FUN_148fbd9de(void)

longlong FUN_148fbd9de(longlong param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  
  iVar4 = (int)param_2[1];
  if (iVar4 - 2U < 0x7fffffff) {
    plVar1 = (longlong *)(param_1 + 0x10);
    iVar5 = *(int *)(param_1 + 0x18);
    lVar6 = (longlong)iVar5;
    if (0 < lVar6) {
      lVar7 = 0;
LAB_148fbda16:
      lVar10 = lVar7 * 0x30 + *plVar1;
      if (lVar10 != 0) {
        if (*(int *)(lVar10 + 0x10) == iVar4) {
          if (iVar4 < 2) {
            return lVar10;
          }
          lVar9 = 0;
          do {
            uVar2 = *(ushort *)(*(longlong *)(lVar10 + 8) + lVar9);
            uVar3 = *(ushort *)(*param_2 + lVar9);
            if (uVar2 == uVar3) {
              if (uVar2 == 0) {
                return lVar10;
              }
            }
            else {
              if (0x7f < (uVar3 | uVar2)) {
                iVar8 = (uint)uVar2 - (uint)uVar3;
                goto LAB_148fbdad9;
              }
              if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[(uint)uVar3]) goto LAB_148fbdad6;
            }
            lVar9 = lVar9 + 2;
          } while( true );
        }
        if (*(int *)(lVar10 + 0x10) + iVar4 == 1) {
          return lVar10;
        }
      }
      goto LAB_148fbda85;
    }
LAB_148fbda8d:
    if (param_3 != '\0') {
      *(uint *)(param_1 + 0x18) = iVar5 + 1U;
      if (*(uint *)(param_1 + 0x1c) < iVar5 + 1U) {
        FUN_148fc3466(plVar1,iVar5);
      }
      lVar6 = lVar6 * 0x30 + *plVar1;
      FUN_148fc33f2(lVar6,param_2);
      return lVar6;
    }
  }
  return 0;
LAB_148fbdad6:
  iVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar3];
LAB_148fbdad9:
  if (iVar8 == 0) {
    return lVar10;
  }
LAB_148fbda85:
  lVar7 = lVar7 + 1;
  if (lVar7 == lVar6) goto LAB_148fbda8d;
  goto LAB_148fbda16;
}



// FUNCTION 148fbdae6 FUN_148fbdae6 body=134 status=ok
// SIG undefined FUN_148fbdae6(void)

void FUN_148fbdae6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x50))(*(longlong **)(param_1 + 0x10),&local_28);
  (**(code **)(*local_28 + 0x70))
            (local_28,*(int *)(param_1 + 0x1c) != 0,*(undefined8 *)(param_1 + 0x28),param_1 + 0x38);
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



// FUNCTION 148fbdb6e FUN_148fbdb6e body=262 status=ok
// SIG undefined FUN_148fbdb6e(void)

longlong FUN_148fbdb6e(longlong *param_1,longlong *param_2,char param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ushort uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ushort uVar9;
  ulonglong uVar10;
  
  iVar1 = (int)param_2[1];
  if (iVar1 - 2U < 0x7fffffff) {
    iVar2 = (int)param_1[1];
    lVar4 = (longlong)iVar2;
    if (0 < lVar4) {
      lVar3 = 0;
LAB_148fbdbab:
      lVar8 = lVar3 * 0xa8 + *param_1;
      if (lVar8 != 0) {
        if (*(int *)(lVar8 + 0x30) == iVar1) {
          if (iVar1 < 2) {
            return lVar8;
          }
          lVar6 = 0;
          do {
            uVar9 = *(ushort *)(*(longlong *)(lVar8 + 0x28) + lVar6);
            uVar10 = (ulonglong)uVar9;
            uVar5 = *(ushort *)(*param_2 + lVar6);
            if (uVar9 == uVar5) {
              if (uVar9 == 0) {
                return lVar8;
              }
            }
            else {
              if (0x7f < (uVar5 | uVar9)) goto LAB_148fbdc6a;
              uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
              uVar7 = (ulonglong)uVar5;
              uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
              if ((&DAT_149e05da0)[uVar10] != (&DAT_149e05da0)[uVar7]) goto LAB_148fbdc6a;
            }
            lVar6 = lVar6 + 2;
          } while( true );
        }
        if (*(int *)(lVar8 + 0x30) + iVar1 == 1) {
          return lVar8;
        }
      }
      goto LAB_148fbdc14;
    }
LAB_148fbdc1c:
    if (param_3 != '\0') {
      *(uint *)(param_1 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
        FUN_148fc34fa(param_1,iVar2);
      }
      lVar4 = lVar4 * 0xa8 + *param_1;
      FUN_148fbd7ba(lVar4,param_2,param_2,0);
      return lVar4;
    }
  }
  return 0;
LAB_148fbdc6a:
  if (uVar9 == uVar5) {
    return lVar8;
  }
LAB_148fbdc14:
  lVar3 = lVar3 + 1;
  if (lVar3 == lVar4) goto LAB_148fbdc1c;
  goto LAB_148fbdbab;
}



// FUNCTION 148fbdc74 FUN_148fbdc74 body=170 status=ok
// SIG undefined FUN_148fbdc74(void)

undefined8 FUN_148fbdc74(longlong *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar3 = &DAT_149dfb77a;
  if ((int)param_1[10] != 0) {
    puVar3 = (undefined2 *)param_1[9];
  }
  (**(code **)(*(longlong *)param_1[7] + 0x38))((longlong *)param_1[7],&local_40);
  puVar2 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar2 = local_40;
  }
  uVar1 = (**(code **)(*param_1 + 0x30))(param_1);
  local_48 = puVar3;
  FUN_140002266(param_2,
                L"FOnlineAsyncTaskSteamWriteUserFile bWasSuccessful:%d UserId:%s FileName:%s",uVar1,
                puVar2);
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fbdd20 FUN_148fbdd20 body=89 status=ok
// SIG undefined FUN_148fbdd20(void)

void FUN_148fbdd20(longlong param_1)

{
  char cVar1;
  
  LOCK();
  *(undefined4 *)(param_1 + 0x18) = 1;
  UNLOCK();
  cVar1 = FUN_1443b1440(param_1,*(undefined8 *)(param_1 + 0x38),param_1 + 0x48,param_1 + 0x28);
  if (cVar1 != '\0') {
    LOCK();
    *(undefined4 *)(param_1 + 0x1c) = 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_144893a1c(param_1 + 0x28,0);
    return;
  }
  return;
}



// FUNCTION 148fbdd7a FUN_148fbdd7a body=137 status=ok
// SIG undefined FUN_148fbdd7a(void)

void FUN_148fbdd7a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x50))(*(longlong **)(param_1 + 0x10),&local_28);
  (**(code **)(*local_28 + 0xb8))
            (local_28,*(int *)(param_1 + 0x1c) != 0,*(undefined8 *)(param_1 + 0x38),param_1 + 0x48);
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



// FUNCTION 148fbde04 FUN_148fbde04 body=146 status=ok
// SIG undefined FUN_148fbde04(void)

undefined8 FUN_148fbde04(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)(param_1 + 200) + 0x240);
  EnterCriticalSection(lpCriticalSection);
  lVar1 = FUN_148fbd1ec(*(undefined8 *)(param_1 + 200),param_2);
  if (lVar1 != 0) {
    uVar2 = 0;
    lVar1 = FUN_148fbd9de(lVar1,param_3,0);
    if (lVar1 == 0) goto LAB_148fbde46;
    if ((*(int *)(lVar1 + 0x18) == 2) && (0 < *(int *)(lVar1 + 0x28))) {
      FUN_1447a122a(param_4,lVar1 + 0x20);
      uVar2 = 1;
      goto LAB_148fbde46;
    }
  }
  uVar2 = 0;
LAB_148fbde46:
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return uVar2;
}



// FUNCTION 148fbde96 FUN_148fbde96 body=88 status=ok
// SIG undefined FUN_148fbde96(void)

undefined1 FUN_148fbde96(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)(param_1 + 200) + 0x240);
  EnterCriticalSection(lpCriticalSection);
  lVar1 = FUN_148fbd1ec(*(undefined8 *)(param_1 + 200),param_2);
  if (lVar1 != 0) {
    FUN_148fbdeee(lVar1);
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return 1;
}



// FUNCTION 148fbdeee FUN_148fbdeee body=124 status=ok
// SIG undefined FUN_148fbdeee(void)

void FUN_148fbdeee(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar2 = 0x20;
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x10);
      *(undefined4 *)(lVar1 + 8 + lVar2) = 0;
      if (*(int *)(lVar1 + 0xc + lVar2) != 0) {
        FUN_144893a1c(lVar1 + lVar2,0);
      }
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0x30;
    } while (lVar3 < *(int *)(param_1 + 0x18));
  }
  FUN_148fc3241(*(undefined8 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  FUN_148fc358e((longlong *)(param_1 + 0x10));
  return;
}



// FUNCTION 148fbdf6a FUN_148fbdf6a body=102 status=ok
// SIG undefined FUN_148fbdf6a(void)

ulonglong FUN_148fbdf6a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)(param_1 + 200) + 0x240);
  EnterCriticalSection(lpCriticalSection);
  lVar2 = FUN_148fbd1ec(*(undefined8 *)(param_1 + 200),param_2);
  uVar3 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
  if (lVar2 != 0) {
    uVar1 = FUN_148fbdfd0(lVar2,param_3);
    uVar3 = (ulonglong)uVar1;
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 148fbdfd0 FUN_148fbdfd0 body=251 status=ok
// SIG undefined FUN_148fbdfd0(void)

ulonglong FUN_148fbdfd0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  ushort uVar5;
  undefined8 unaff_RSI;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  ushort uVar10;
  ulonglong uVar11;
  
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((longlong)*(int *)(param_1 + 0x18) < 1) {
LAB_148fbe08c:
    return uVar6 & 0xffffffff;
  }
  plVar7 = (longlong *)(param_1 + 0x10);
  iVar2 = (int)param_2[1];
  uVar4 = 0;
LAB_148fbe007:
  lVar1 = *plVar7 + uVar4 * 0x30;
  iVar3 = *(int *)(*plVar7 + 0x10 + uVar4 * 0x30);
  if (iVar3 != iVar2) {
    if (iVar3 + iVar2 == 1) goto LAB_148fbe084;
    goto LAB_148fbe072;
  }
  if (1 < iVar2) {
    lVar8 = 0;
    do {
      uVar10 = *(ushort *)(*(longlong *)(lVar1 + 8) + lVar8);
      uVar11 = (ulonglong)uVar10;
      uVar5 = *(ushort *)(*param_2 + lVar8);
      if (uVar10 == uVar5) {
        if (uVar10 == 0) break;
      }
      else {
        if (0x7f < (uVar5 | uVar10)) goto LAB_148fbe07c;
        uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
        uVar9 = (ulonglong)uVar5;
        uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
        if ((&DAT_149e05da0)[uVar11] != (&DAT_149e05da0)[uVar9]) goto LAB_148fbe07c;
      }
      lVar8 = lVar8 + 2;
    } while( true );
  }
  goto LAB_148fbe084;
LAB_148fbe07c:
  if (uVar10 == uVar5) {
LAB_148fbe084:
    if (*(int *)(lVar1 + 0x18) == 1) {
      uVar6 = 0;
    }
    else {
      *(undefined4 *)(lVar1 + 0x28) = 0;
      if (*(int *)(lVar1 + 0x2c) != 0) {
        FUN_144893a1c(lVar1 + 0x20,0);
      }
      FUN_148fc35be(plVar7,uVar4 & 0xffffffff);
      FUN_148fc364e(plVar7);
    }
    goto LAB_148fbe08c;
  }
LAB_148fbe072:
  uVar4 = uVar4 + 1;
  if (uVar4 == (longlong)*(int *)(param_1 + 0x18)) goto LAB_148fbe08c;
  goto LAB_148fbe007;
}



// FUNCTION 148fbe0cc FUN_148fbe0cc body=197 status=ok
// SIG undefined FUN_148fbe0cc(void)

void FUN_148fbe0cc(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 200);
  puVar2 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  QueryPerformanceCounter(&local_30);
  puVar2[1] = (double)local_30.QuadPart * DAT_14c83f420 + 16777216.0;
  *puVar2 = &PTR_LAB_14ba46e30;
  puVar2[2] = lVar1;
  *(undefined4 *)(puVar2 + 3) = 0;
  *(undefined4 *)((longlong)puVar2 + 0x1c) = 0;
  puVar2[4] = 0;
  *puVar2 = &PTR_FUN_14ba4bbe0;
  FUN_140df9946(param_2,puVar2 + 5);
  FUN_1410d2116(*(undefined8 *)(lVar1 + 0x210),puVar2);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fbe192 FUN_148fbe192 body=107 status=ok
// SIG undefined FUN_148fbe192(void)

void FUN_148fbe192(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lVar1 = *(longlong *)(param_1 + 200);
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x240));
  uVar2 = FUN_148fbd1ec(*(undefined8 *)(param_1 + 200),param_2);
  FUN_148fbe1fe(param_3,uVar2);
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar1 + 0x240);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148fbe1e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
  return;
}



// FUNCTION 148fbe1fe FUN_148fbe1fe body=95 status=ok
// SIG undefined FUN_148fbe1fe(void)

undefined8 * FUN_148fbe1fe(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145e041f4(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148fc4998(param_1,iVar1);
      FUN_148fc4a0a(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148fbe25e FUN_148fbe25e body=192 status=ok
// SIG undefined FUN_148fbe25e(void)

ulonglong FUN_148fbe25e(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 unaff_RDI;
  ulonglong uVar3;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)(param_1 + 200) + 0x240);
  EnterCriticalSection(lpCriticalSection);
  lVar1 = FUN_148fbd1ec(*(undefined8 *)(param_1 + 200),param_2);
  if ((lVar1 == 0) || (0x7ffffffe < *(int *)(param_3 + 8) - 2U)) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    lVar1 = FUN_148fbd9de(lVar1,param_3,1);
    *(undefined4 *)(lVar1 + 0x18) = 1;
    lVar1 = *(longlong *)(param_1 + 200);
    uVar2 = FUN_14001cc68(0x48,0x10);
    FUN_148fbe31e(uVar2,lVar1,param_2,param_3);
    FUN_1410d2116(*(undefined8 *)(lVar1 + 0x210),uVar2);
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 148fbe31e FUN_148fbe31e body=244 status=ok
// SIG undefined FUN_148fbe31e(void)

undefined8 *
FUN_148fbe31e(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  void *_Src;
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
  *param_1 = &PTR_FUN_14ba4bc20;
  FUN_140df9946(param_3,param_1 + 5);
  param_1[7] = 0;
  iVar1 = *(int *)(param_4 + 1);
  _Src = (void *)*param_4;
  *(int *)(param_1 + 8) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 7,iVar1,0);
    memcpy((void *)param_1[7],_Src,(longlong)iVar1 * 2);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fbe414 FUN_148fbe414 body=207 status=ok
// SIG undefined FUN_148fbe414(void)

ulonglong FUN_148fbe414(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 unaff_RDI;
  ulonglong uVar3;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)(param_1 + 200) + 0x240);
  EnterCriticalSection(lpCriticalSection);
  lVar1 = FUN_148fbd1ec(*(undefined8 *)(param_1 + 200),param_2);
  if ((lVar1 == 0) || (0x7ffffffe < *(int *)(param_3 + 8) - 2U)) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    lVar1 = FUN_148fbd9de(lVar1,param_3,1);
    *(undefined4 *)(lVar1 + 0x18) = 1;
    lVar1 = *(longlong *)(param_1 + 200);
    uVar2 = FUN_14001cc68(0x58,0x10);
    FUN_148fbe4e4(uVar2,lVar1,param_2,param_3,param_4);
    FUN_1410d2116(*(undefined8 *)(lVar1 + 0x210),uVar2);
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 148fbe4e4 FUN_148fbe4e4 body=326 status=ok
// SIG undefined FUN_148fbe4e4(void)

undefined8 *
FUN_148fbe4e4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5)

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
  param_1[5] = 0;
  *param_1 = &PTR_FUN_14ba4a850;
  iVar1 = *(int *)(param_5 + 1);
  pvVar2 = (void *)*param_5;
  *(int *)(param_1 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_1447a127e(param_1 + 5,iVar1,0);
    memcpy((void *)param_1[5],pvVar2,(longlong)iVar1);
  }
  FUN_140df9946(param_3,param_1 + 7);
  param_1[9] = 0;
  iVar1 = *(int *)(param_4 + 1);
  pvVar2 = (void *)*param_4;
  *(int *)(param_1 + 10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 9,iVar1,0);
    memcpy((void *)param_1[9],pvVar2,(longlong)iVar1 * 2);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fbe62e FUN_148fbe62e body=110 status=ok
// SIG undefined FUN_148fbe62e(void)

undefined1
FUN_148fbe62e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 200);
  uVar2 = FUN_14001cc68(0x50,0x10);
  FUN_148fbe69c(uVar2,lVar1,param_2,param_3,param_4,param_5);
  FUN_1410d2116(*(undefined8 *)(lVar1 + 0x210),uVar2);
  return 1;
}



// FUNCTION 148fbe69c FUN_148fbe69c body=274 status=ok
// SIG undefined FUN_148fbe69c(void)

undefined8 *
FUN_148fbe69c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined1 param_5,undefined1 param_6)

{
  int iVar1;
  void *_Src;
  undefined1 auStack_68 [32];
  LARGE_INTEGER local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_LAB_14ba46e70;
  QueryPerformanceCounter(&local_48);
  param_1[1] = (double)local_48.QuadPart * DAT_14c83f420 + 16777216.0;
  *param_1 = &PTR_LAB_14ba46e30;
  param_1[2] = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_14ba4bc60;
  *(undefined1 *)(param_1 + 5) = param_5;
  *(undefined1 *)((longlong)param_1 + 0x29) = param_6;
  FUN_140df9946(param_3,param_1 + 6);
  param_1[8] = 0;
  iVar1 = *(int *)(param_4 + 1);
  _Src = (void *)*param_4;
  *(int *)(param_1 + 9) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy((void *)param_1[8],_Src,(longlong)iVar1 * 2);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fbe7b4 FUN_148fbe7b4 body=170 status=ok
// SIG undefined FUN_148fbe7b4(void)

undefined8 FUN_148fbe7b4(longlong *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar3 = &DAT_149dfb77a;
  if ((int)param_1[9] != 0) {
    puVar3 = (undefined2 *)param_1[8];
  }
  (**(code **)(*(longlong *)param_1[6] + 0x38))((longlong *)param_1[6],&local_40);
  puVar2 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar2 = local_40;
  }
  uVar1 = (**(code **)(*param_1 + 0x30))(param_1);
  local_48 = puVar3;
  FUN_140002266(param_2,
                L"FOnlineAsyncTaskSteamDeleteUserFile bWasSuccessful:%d UserId:%s FileName:%s",uVar1
                ,puVar2);
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fbe860 FUN_148fbe860 body=137 status=ok
// SIG undefined FUN_148fbe860(void)

void FUN_148fbe860(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x50))(*(longlong **)(param_1 + 0x10),&local_28);
  (**(code **)(*local_28 + 0x108))
            (local_28,*(int *)(param_1 + 0x1c) != 0,*(undefined8 *)(param_1 + 0x30),param_1 + 0x40);
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



// FUNCTION 148fbe8ea FUN_148fbe8ea body=334 status=ok
// SIG undefined FUN_148fbe8ea(void)

undefined8 FUN_148fbe8ea(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_148fbea3a(param_3,*(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x9c));
  local_48 = param_1 + 0x78;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  if (*(int *)(param_1 + 0x90) != 0) {
    FUN_1449c0562(&local_50);
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = (longlong *)(param_1 + 0x68);
  if (iStack_3c < *(int *)(local_48 + 0x18)) {
    do {
      iVar4 = iStack_5c;
      lVar2 = *local_78;
      iVar1 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
        FUN_148d9b578(param_3,iVar1);
      }
      lVar2 = lVar2 + (longlong)iVar4 * 0x28;
      lVar3 = *param_3;
      *(undefined8 *)(lVar3 + (longlong)iVar1 * 0x10) = *(undefined8 *)(lVar2 + 0x10);
      lVar2 = *(longlong *)(lVar2 + 0x18);
      *(longlong *)(lVar3 + 8 + (longlong)iVar1 * 0x10) = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < *(int *)(local_68 + 0x18));
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 148fbea3a FUN_148fbea3a body=68 status=ok
// SIG undefined FUN_148fbea3a(void)

void FUN_148fbea3a(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_1489be05c(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_148fa8df4(param_1,param_2);
  return;
}



// FUNCTION 148fbea80 FUN_148fbea80 body=158 status=ok
// SIG undefined FUN_148fbea80(void)

undefined8 FUN_148fbea80(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140056680(local_38,L"Not supported");
  puVar2 = (undefined8 *)FUN_14600b90e();
  plVar1 = (longlong *)*param_4;
  if (plVar1 != (longlong *)0x0 && (int)param_4[1] != 0) {
    local_48 = *puVar2;
    local_40 = local_38;
    (**(code **)(*plVar1 + 0x60))(plVar1,0,param_2,param_3);
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fbeb20 FUN_148fbeb20 body=159 status=ok
// SIG undefined FUN_148fbeb20(void)

undefined8
FUN_148fbeb20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong *plVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140056680(local_40,L"Not supported");
  plVar1 = (longlong *)*param_5;
  if (plVar1 != (longlong *)0x0 && (int)param_5[1] != 0) {
    local_58 = param_4;
    local_50 = local_40;
    (**(code **)(*plVar1 + 0x60))(plVar1,0,param_2,param_3);
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



// FUNCTION 148fbebc0 FUN_148fbebc0 body=91 status=ok
// SIG undefined FUN_148fbebc0(void)

void FUN_148fbebc0(undefined8 param_1,undefined8 param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  int iVar2;
  
  FUN_148fbec1c(param_4);
  uVar1 = *(uint *)(param_3 + 8);
  iVar2 = (int)param_4[1];
  *(uint *)(param_4 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_4 + 0xc) - iVar2) < uVar1) {
    FUN_148a4ec58(param_4);
  }
  memset((void *)((longlong)iVar2 * 0x10 + *param_4),0,(longlong)(int)uVar1 << 4);
  return;
}



// FUNCTION 148fbec1c FUN_148fbec1c body=68 status=ok
// SIG undefined FUN_148fbec1c(void)

void FUN_148fbec1c(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_145b221f5(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_148fa976c(param_1,param_2);
  return;
}



// FUNCTION 148fbec74 FUN_148fbec74 body=28 status=ok
// SIG undefined FUN_148fbec74(void)

undefined8 FUN_148fbec74(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x38))(param_2);
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  return 1;
}



// FUNCTION 148fbec9c FUN_148fbec9c body=40 status=ok
// SIG undefined FUN_148fbec9c(void)

byte FUN_148fbec9c(longlong param_1,int *param_2)

{
  byte bVar1;
  
  bVar1 = (**(code **)(**(longlong **)(param_1 + 0x48) + 8))
                    (*(longlong **)(param_1 + 0x48),param_2,*(undefined4 *)(param_1 + 0x40));
  return bVar1 & *param_2 != 0;
}



// FUNCTION 148fbecd6 FUN_148fbecd6 body=363 status=ok
// SIG undefined FUN_148fbecd6(void)

uint FUN_148fbecd6(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  double dVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  double dVar8;
  undefined1 auStack_98 [40];
  LARGE_INTEGER local_70;
  longlong *local_68;
  LARGE_INTEGER local_60;
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar5 = FUN_148fbf804(param_1,param_3,param_4);
  if ((char)uVar5 == '\0') {
    FUN_140df9946(param_3,&local_70);
    local_60 = local_70;
    local_58 = local_68;
    if (local_68 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_68 + 1) = (int)local_68[1] + 1;
      UNLOCK();
    }
    uVar6 = (**(code **)(*(longlong *)local_70 + 0x40))();
    puVar7 = (undefined8 *)FUN_148fc567c(param_1 + 0xc0,uVar6,&local_60);
    plVar3 = local_58;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_58 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_68 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar2 = (int *)((longlong)local_68 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_68 + 0x10))(local_68);
        }
      }
    }
    *puVar7 = param_2;
    if (param_4 != -1) {
      QueryPerformanceCounter(&local_60);
      dVar4 = (double)local_60.QuadPart * DAT_14c83f420 + 16777216.0;
      local_60.s.LowPart = param_4;
      FUN_1449e3bb0(puVar7 + 2,&local_60);
      dVar8 = (double)puVar7[1];
      if ((double)puVar7[1] <= dVar4) {
        dVar8 = dVar4;
      }
      puVar7[1] = dVar8;
    }
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar5 ^ 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fbee54 FUN_148fbee54 body=90 status=ok
// SIG undefined FUN_148fbee54(void)

void FUN_148fbee54(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  lVar4 = *(longlong *)(param_1 + 0x38);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 8) = uVar3;
  *(longlong *)(param_2 + 0x10) = lVar4;
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
  *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x40);
  return;
}



// FUNCTION 148fbeeee FUN_148fbeeee body=313 status=ok
// SIG undefined FUN_148fbeeee(void)

void FUN_148fbeeee(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  FUN_14485c47a(&local_30);
  iVar5 = FUN_148fbf24a(param_1 + 0xb0,&local_30);
  if (iVar5 != 0) {
    (**(code **)(*param_2 + 800))(param_2,&local_40);
    plVar3 = local_38;
    lVar4 = local_40;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (lVar4 != 0) {
      (**(code **)(*param_2 + 800))(param_2,&local_40);
      if (local_38 == (longlong *)0x0) {
        FUN_1443b567a(param_1,*(undefined8 *)(local_40 + 8),*(undefined4 *)(local_40 + 0x18));
      }
      else {
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
            piVar2 = (int *)((longlong)local_38 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_38 + 0x10))(local_38);
            }
          }
        }
        FUN_1443b567a(param_1,*(undefined8 *)(local_40 + 8),*(undefined4 *)(local_40 + 0x18));
        LOCK();
        plVar3 = local_38 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fbf028 FUN_148fbf028 body=73 status=ok
// SIG undefined FUN_148fbf028(void)

void FUN_148fbf028(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
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
                    /* WARNING: Could not recover jumptable at 0x000148fbf066. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148fbf072 FUN_148fbf072 body=98 status=ok
// SIG undefined FUN_148fbf072(void)

undefined8 *
FUN_148fbf072(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  FUN_146282982(param_1,1,param_4,param_5);
  *param_1 = &PTR_FUN_14ba4bed0;
  FUN_140df9946(param_3,param_1 + 6);
  param_1[8] = 0;
  param_1[9] = param_2;
  uVar1 = FUN_140272950(&DAT_14cb8e468);
  param_1[5] = uVar1;
  return param_1;
}



// FUNCTION 148fbf0d4 FUN_148fbf0d4 body=97 status=ok
// SIG undefined FUN_148fbf0d4(void)

void FUN_148fbf0d4(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  FUN_148fc3a42(param_1 + 0xa0);
  if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fbf14a FUN_148fbf14a body=254 status=ok
// SIG undefined FUN_148fbf14a(void)

void FUN_148fbf14a(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  char cVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (0 < *(int *)(param_1 + 0xa8)) {
    lVar8 = 0;
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + lVar8 * 8);
      lVar4 = *(longlong *)(lVar3 + 0x48);
      plVar7 = (longlong *)SteamInternal_ContextInit(&PTR_FUN_14c764930);
      if ((lVar4 == *plVar7) &&
         (cVar6 = (**(code **)(**(longlong **)(lVar3 + 0x30) + 0x28))(), cVar6 == '\0')) {
        FUN_140df9946(param_2,&local_68);
        uVar5 = *(undefined8 *)(lVar3 + 0x30);
        plVar7 = *(longlong **)(lVar3 + 0x38);
        *(undefined8 *)(lVar3 + 0x30) = CONCAT44(uStack_64,local_68);
        *(ulonglong *)(lVar3 + 0x38) = CONCAT44(uStack_5c,uStack_60);
        local_58._0_4_ = (undefined4)uVar5;
        local_68 = (undefined4)local_58;
        local_58._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
        uStack_64 = local_58._4_4_;
        uStack_50._0_4_ = SUB84(plVar7,0);
        uStack_60 = (undefined4)uStack_50;
        uStack_50._4_4_ = (undefined4)((ulonglong)plVar7 >> 0x20);
        uStack_5c = uStack_50._4_4_;
        local_58 = uVar5;
        uStack_50 = plVar7;
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
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_1 + 0xa8));
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148fbf24a FUN_148fbf24a body=105 status=ok
// SIG undefined FUN_148fbf24a(void)

undefined8 FUN_148fbf24a(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = FUN_148fc50d2();
  uVar3 = 0;
  if (uVar1 != 0xffffffff) {
    iVar4 = (int)param_1[1];
    iVar2 = ~uVar1 + iVar4;
    if (iVar2 != 0) {
      iVar5 = 1;
      if (iVar2 < 1) {
        iVar5 = iVar2;
      }
      memmove((void *)(*param_1 + (longlong)(int)uVar1 * 8),
              (void *)(*param_1 + (longlong)(iVar4 - iVar5) * 8),(longlong)iVar5 << 3);
      iVar4 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar4 + -1;
    FUN_148fc513a(param_1);
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 148fbf2b4 FUN_148fbf2b4 body=450 status=ok
// SIG undefined FUN_148fbf2b4(void)

void FUN_148fbf2b4(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  uint uVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar11 = (ulonglong)*(int *)(param_1 + 0xb8);
  local_60 = param_2;
  if (0 < (longlong)uVar11) {
    plVar3 = (longlong *)(param_1 + 0xb0);
    iVar13 = -*(int *)(param_1 + 0xb8);
    lVar10 = uVar11 * 8;
    do {
      lVar10 = lVar10 + -8;
      cVar7 = FUN_144729dda(*plVar3 + lVar10);
      if (cVar7 == '\0') {
        uVar8 = *(uint *)(param_1 + 0xb8);
        if (uVar11 != uVar8) {
          memmove((void *)(*(longlong *)(param_1 + 0xb0) + uVar11 * 8 + -8),
                  (void *)(*(longlong *)(param_1 + 0xb0) + uVar11 * 8),
                  (longlong)(int)(uVar8 + iVar13) << 3);
          uVar8 = *(uint *)(param_1 + 0xb8);
        }
        *(uint *)(param_1 + 0xb8) = uVar8 - 1;
        FUN_148fc513a(plVar3);
      }
      iVar13 = iVar13 + 1;
      bVar4 = 1 < uVar11;
      uVar11 = uVar11 - 1;
    } while (bVar4);
    if (0 < *(int *)(param_1 + 0xb8)) {
      lVar10 = 0;
      lVar12 = 0;
      do {
        plVar9 = (longlong *)FUN_14479d2ce(*plVar3 + lVar10);
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 800))(plVar9,&local_58);
          plVar6 = local_50;
          lVar5 = local_58;
          if (local_50 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_50 + 1) = (int)local_50[1] + 1;
            UNLOCK();
            if (local_50 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_50 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_50)(local_50);
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
          cVar7 = (**(code **)**(undefined8 **)(lVar5 + 8))(*(undefined8 **)(lVar5 + 8),local_60);
          if (cVar7 != '\0') {
            FUN_147a491c6(plVar9);
          }
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            plVar9 = plVar6 + 1;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)*plVar9 == 0) {
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
        lVar12 = lVar12 + 1;
        lVar10 = lVar10 + 8;
      } while (lVar12 < *(int *)(param_1 + 0xb8));
    }
  }
  FUN_1443b567a(param_1,local_60,0xffffffff);
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148fbf47c FUN_148fbf47c body=133 status=ok
// SIG undefined FUN_148fbf47c(void)

undefined8 * FUN_148fbf47c(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar2 = &PTR_FUN_14ba46fd0;
  puVar3 = (undefined8 *)FUN_14600b90e();
  puVar2[1] = *puVar3;
  lVar1 = puVar3[1];
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(puVar2 + 3) = 0;
  *param_2 = puVar2;
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar3[1] = &DAT_100000001;
  *puVar3 = &PTR_FUN_14ba470a0;
  puVar3[2] = puVar2;
  param_2[1] = puVar3;
  return param_2;
}



// FUNCTION 148fbf52a FUN_148fbf52a body=211 status=ok
// SIG undefined FUN_148fbf52a(void)

undefined8 FUN_148fbf52a(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0xd8))(param_1,&local_48);
  iVar4 = 0;
  if ((longlong)local_40 != 0) {
    puVar6 = local_48 + (longlong)local_40 * 2;
    puVar5 = local_48;
    do {
      uVar1 = *puVar5;
      lVar2 = puVar5[1];
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      iVar4 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar4 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
        FUN_146b12f1e(param_2,iVar4);
      }
      lVar3 = *param_2;
      *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x10) = uVar1;
      *(longlong *)(lVar3 + 8 + (longlong)iVar4 * 0x10) = lVar2;
      puVar5 = puVar5 + 2;
      iVar4 = local_40;
    } while (puVar5 != puVar6);
  }
  FUN_145a25fe4(local_48,iVar4);
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 148fbf5fe FUN_148fbf5fe body=516 status=ok
// SIG undefined FUN_148fbf5fe(void)

longlong * FUN_148fbf5fe(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  param_2[1] = 0;
  local_30 = 0;
  plVar6 = (longlong *)SteamInternal_ContextInit(&PTR_FUN_14c764850);
  if (*plVar6 == 0) {
    plVar6 = (longlong *)SteamInternal_ContextInit(&PTR_FUN_14c764810);
    if (*plVar6 != 0) {
      puVar7 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764810);
      cVar5 = (**(code **)(*(longlong *)*puVar7 + 0x40))();
      if (cVar5 != '\0') {
        puVar7 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764810);
        (**(code **)(*(longlong *)*puVar7 + 0x50))((longlong *)*puVar7,&local_30);
        goto LAB_148fbf65d;
      }
    }
    puVar7 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *puVar7 = &PTR_FUN_14ba46fd0;
    puVar8 = (undefined8 *)FUN_14600b90e();
    puVar7[1] = *puVar8;
    lVar4 = puVar8[1];
    puVar7[2] = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar7 + 3) = 0;
  }
  else {
    puVar7 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764850);
    (**(code **)(*(longlong *)*puVar7 + 0x10))((longlong *)*puVar7,&local_30);
LAB_148fbf65d:
    puVar7 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    FUN_140dfab96(&local_40,&local_30);
    *puVar7 = &PTR_FUN_14ba46fd0;
    FUN_140df9946(local_40,puVar7 + 1);
    *(undefined4 *)(puVar7 + 3) = 0;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_38 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14ba470a0;
  plVar6[2] = (longlong)puVar7;
  iVar3 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
    FUN_1459278c6(param_2,iVar3);
  }
  lVar4 = *param_2;
  *(undefined8 **)(lVar4 + (longlong)iVar3 * 0x10) = puVar7;
  *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
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
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fbf804 FUN_148fbf804 body=242 status=ok
// SIG undefined FUN_148fbf804(void)

ulonglong FUN_148fbf804(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [32];
  undefined **local_48;
  undefined1 local_40 [8];
  longlong *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = &PTR_FUN_14ba46fd0;
  FUN_140df9946(param_2,local_40);
  local_30 = -1;
  uVar3 = (*(code *)local_48[0x12])(&local_48);
  iVar4 = FUN_148fc5cd2(param_1 + 0x110,uVar3,&local_48);
  uVar5 = CONCAT71((int7)((ulonglong)&local_48 >> 8),1);
  if (iVar4 == -1) {
    if (param_3 == -1) {
      uVar5 = 0;
    }
    else {
      local_30 = param_3;
      uVar3 = (*(code *)local_48[0x12])(&local_48);
      iVar4 = FUN_148fc5cd2(param_1 + 0x110,uVar3,&local_48);
      uVar5 = CONCAT71((int7)((ulonglong)&local_48 >> 8),iVar4 != -1);
    }
  }
  local_48 = &PTR_FUN_14ba46fd0;
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
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fbf8f8 FUN_148fbf8f8 body=202 status=ok
// SIG undefined FUN_148fbf8f8(void)

void FUN_148fbf8f8(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  byte bVar1;
  longlong lVar2;
  
  bVar1 = FUN_144a791f8(param_4 + 0x10,L"steam.",6,1);
  *(byte *)(param_1 + 0x1e78) = bVar1 ^ 1;
  if ((bVar1 ^ 1) == 0) {
    FUN_14577bfea(param_1);
  }
  FUN_14577bff6(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  if ((*(char *)(param_1 + 0x1e78) == '\0') && (*(longlong *)(param_1 + 0x110) != 0)) {
    lVar2 = FUN_140272950(&DAT_14cb8e468);
    if (lVar2 != 0) {
      FUN_1443b64d0(lVar2,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 148fbf9c2 FUN_148fbf9c2 body=199 status=ok
// SIG undefined FUN_148fbf9c2(void)

void FUN_148fbf9c2(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = *(char *)(param_2 + 0x9a0);
  *(char *)(param_1 + 0x1e78) = cVar1;
  if (cVar1 == '\0') {
    FUN_14577bfea(param_1);
  }
  FUN_141671ffe(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if ((*(char *)(param_1 + 0x1e78) == '\0') && (*(longlong *)(param_1 + 0x110) != 0)) {
    lVar2 = FUN_140272950(&DAT_14cb8e468);
    if (lVar2 != 0) {
      FUN_1443b64d0(lVar2,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 148fbfa8a FUN_148fbfa8a body=61 status=ok
// SIG undefined FUN_148fbfa8a(void)

void FUN_148fbfa8a(longlong param_1)

{
  longlong lVar1;
  
  FUN_145e35b16();
  if (*(char *)(param_1 + 0x1e78) == '\0') {
    lVar1 = FUN_140272950(&DAT_14cb8e468);
    if (lVar1 != 0) {
      FUN_148fbeeee(lVar1,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 148fbfac8 FUN_148fbfac8 body=50 status=ok
// SIG undefined FUN_148fbfac8(void)

undefined8 FUN_148fbfac8(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1401e3228(&DAT_14cb8e468);
  if (lVar1 != 0) {
    lVar1 = FUN_140272950(&DAT_14cb8e468);
    if (lVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 148fbfafa FUN_148fbfafa body=102 status=ok
// SIG undefined FUN_148fbfafa(void)

void FUN_148fbfafa(longlong param_1)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(char *)(param_1 + 0x9a0) == '\x01') {
    FUN_1446f470e(&local_10,L"WINDOWS",1);
  }
  else {
    local_10 = DAT_14cb8e468;
  }
  FUN_140272950(&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fbfb62 FUN_148fbfb62 body=436 status=ok
// SIG undefined FUN_148fbfb62(void)

void FUN_148fbfb62(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  undefined1 local_78 [8];
  longlong local_70;
  longlong *local_68;
  undefined1 local_60 [8];
  longlong *local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar5 = FUN_140272950(&DAT_14cb8e468);
  if (lVar5 != 0) {
    cVar4 = FUN_144a791f8(param_3 + 0x10,L"steam.",6,1);
    if (cVar4 == '\0') {
      *(undefined1 *)(param_1 + 0x9a0) = 1;
    }
    else {
      FUN_1446f57c6(&DAT_14cbf4f78,local_60);
      FUN_140056680(&local_70,L"Unreal client (Steam)");
      FUN_1446f470e(local_78,L"SteamClientSocket",1);
      local_88 = local_60;
      FUN_146b113f8(lVar5,&local_58,local_78,&local_70);
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      lVar5 = local_50;
      plVar3 = local_58;
      local_50 = 0;
      local_70 = lVar5;
      local_68 = (longlong *)FUN_14001cc68(0x20,0x10);
      local_68[2] = (longlong)plVar3;
      local_68[1] = (longlong)&DAT_100000001;
      *local_68 = (longlong)&PTR_FUN_14b4c3b30;
      local_68[3] = lVar5;
      FUN_1461f83dc(param_1,&local_70);
      plVar3 = local_68;
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
      if (local_50 != 0 && local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 0x38))();
      }
    }
  }
  FUN_143ed1ace(param_1,param_2,param_3,param_4);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fbfd18 FUN_148fbfd18 body=458 status=ok
// SIG undefined FUN_148fbfd18(void)

void FUN_148fbfd18(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  longlong local_78;
  longlong *local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  longlong local_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar5 = FUN_140272950(&DAT_14cb8e468);
  if (lVar5 != 0) {
    cVar4 = FUN_14045d4b6(param_3,L"bIsLanMatch");
    if (cVar4 == '\0') {
      uVar6 = FUN_14118da1c();
      cVar4 = FUN_14054d46e(uVar6,L"forcepassthrough");
      if (cVar4 == '\0') {
        FUN_1446f470e(local_50,L"SteamClientSocket",1);
        FUN_1446f57c6(&DAT_14cbf4f78,local_68);
        FUN_140056680(&local_78,L"Unreal server (Steam)");
        local_88 = local_68;
        FUN_146b113f8(lVar5,&local_60,local_50,&local_78);
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        lVar5 = local_58;
        plVar3 = local_60;
        local_58 = 0;
        local_78 = lVar5;
        local_70 = (longlong *)FUN_14001cc68(0x20,0x10);
        local_70[2] = (longlong)plVar3;
        local_70[1] = (longlong)&DAT_100000001;
        *local_70 = (longlong)&PTR_FUN_14b4c3b30;
        local_70[3] = lVar5;
        FUN_1461f83dc(param_1,&local_78);
        plVar3 = local_70;
        if (local_70 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_70 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_70)(local_70);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
        if (local_58 != 0 && local_60 != (longlong *)0x0) {
          (**(code **)(*local_60 + 0x38))();
        }
        goto LAB_148fbfd92;
      }
    }
  }
  *(undefined1 *)(param_1 + 0x9a0) = 1;
LAB_148fbfd92:
  local_88 = (undefined1 *)param_5;
  FUN_143ed1c42(param_1,param_2,param_3,param_4);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fbfee4 FUN_148fbfee4 body=54 status=ok
// SIG undefined FUN_148fbfee4(void)

void FUN_148fbfee4(longlong *param_1)

{
  longlong lVar1;
  
  if ((char)param_1[0x134] == '\0') {
    lVar1 = (**(code **)(*param_1 + 0x4b0))(param_1);
    if (lVar1 != 0) {
      *(undefined4 *)(lVar1 + 0x44) = 1;
    }
  }
  FUN_143596fba(param_1);
  return;
}



// FUNCTION 148fbff1a FUN_148fbff1a body=106 status=ok
// SIG undefined FUN_148fbff1a(void)

undefined8 FUN_148fbff1a(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  bool bVar3;
  
  if ((char)param_1[0x134] == '\0') {
    lVar1 = (**(code **)(*param_1 + 0x4b0))(param_1);
    if (lVar1 != 0) {
      lVar1 = (**(code **)(*param_1 + 0x4b0))(param_1);
      uVar2 = (**(code **)(**(longlong **)(lVar1 + 0x30) + 0x28))();
      uVar2 = uVar2 & 0xffffffff;
      goto LAB_148fbff2e;
    }
  }
  uVar2 = 0;
LAB_148fbff2e:
  if ((char)param_1[0x134] == '\x01') {
    lVar1 = (**(code **)(*param_1 + 0x4b0))(param_1);
    bVar3 = lVar1 != 0;
  }
  else {
    bVar3 = false;
  }
  return CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 | bVar3);
}



// FUNCTION 148fbff84 FUN_148fbff84 body=3494 status=ok
// SIG undefined FUN_148fbff84(void)

longlong * FUN_148fbff84(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  wchar_t *pwVar2;
  undefined1 auStack_58 [32];
  wchar_t *local_38;
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  switch(param_2) {
  case 1:
    local_38 = L"success";
    pwVar2 = L"k_EResultOK";
    uVar1 = 1;
    break;
  case 2:
    local_38 = L"failure";
    pwVar2 = L"k_EResultFail";
    uVar1 = 2;
    break;
  case 3:
    local_38 = L"no connection";
    pwVar2 = L"k_EResultNoConnection";
    uVar1 = 3;
    break;
  default:
    FUN_140002266(&local_28,L"Unknown EResult result: %i (check Steam SDK)");
    goto LAB_148fc0cbb;
  case 5:
    local_38 = L"invalid password/ticket";
    pwVar2 = L"k_EResultInvalidPassword";
    uVar1 = 5;
    break;
  case 6:
    local_38 = L"same user logged in elsewhere";
    pwVar2 = L"k_EResultLoggedInElsewhere";
    uVar1 = 6;
    break;
  case 7:
    local_38 = L"incorrect protocol version";
    pwVar2 = L"k_EResultInvalidProtocolVer";
    uVar1 = 7;
    break;
  case 8:
    local_38 = L"a parameter is incorrect";
    pwVar2 = L"k_EResultInvalidParam";
    uVar1 = 8;
    break;
  case 9:
    local_38 = L"file not found";
    pwVar2 = L"k_EResultFileNotFound";
    uVar1 = 9;
    break;
  case 10:
    local_38 = L"called method busy, no action taken";
    pwVar2 = L"k_EResultBusy";
    uVar1 = 10;
    break;
  case 0xb:
    local_38 = L"called object in invalid state";
    pwVar2 = L"k_EResultInvalidState";
    uVar1 = 0xb;
    break;
  case 0xc:
    local_38 = L"invalid name";
    pwVar2 = L"k_EResultInvalidName";
    uVar1 = 0xc;
    break;
  case 0xd:
    local_38 = L"invalid email";
    pwVar2 = L"k_EResultInvalidEmail";
    uVar1 = 0xd;
    break;
  case 0xe:
    local_38 = L"duplicate name";
    pwVar2 = L"k_EResultDuplicateName";
    uVar1 = 0xe;
    break;
  case 0xf:
    local_38 = L"access denied";
    pwVar2 = L"k_EResultAccessDenied";
    uVar1 = 0xf;
    break;
  case 0x10:
    local_38 = L"operation timed out";
    pwVar2 = L"k_EResultTimeout";
    uVar1 = 0x10;
    break;
  case 0x11:
    local_38 = L"VAC banned";
    pwVar2 = L"k_EResultBanned";
    uVar1 = 0x11;
    break;
  case 0x12:
    local_38 = L"account not found";
    pwVar2 = L"k_EResultAccountNotFound";
    uVar1 = 0x12;
    break;
  case 0x13:
    local_38 = L"steamid invalid";
    pwVar2 = L"k_EResultInvalidSteamID";
    uVar1 = 0x13;
    break;
  case 0x14:
    local_38 = L"requested service currently unavailable";
    pwVar2 = L"k_EResultServiceUnavailable";
    uVar1 = 0x14;
    break;
  case 0x15:
    local_38 = L"user is not logged on";
    pwVar2 = L"k_EResultNotLoggedOn";
    uVar1 = 0x15;
    break;
  case 0x16:
    local_38 = L"request is pending - may be in process, or waiting on third party";
    pwVar2 = L"k_EResultPending";
    uVar1 = 0x16;
    break;
  case 0x17:
    local_38 = L"encryption or decryption failed";
    pwVar2 = L"k_EResultEncryptionFailure";
    uVar1 = 0x17;
    break;
  case 0x18:
    local_38 = L"insufficient privilege";
    pwVar2 = L"k_EResultInsufficientPrivilege";
    uVar1 = 0x18;
    break;
  case 0x19:
    local_38 = L"limit exceeded";
    pwVar2 = L"k_EResultLimitExceeded";
    uVar1 = 0x19;
    break;
  case 0x1a:
    local_38 = L"access revoked";
    pwVar2 = L"k_EResultRevoked";
    uVar1 = 0x1a;
    break;
  case 0x1b:
    local_38 = L"license or guest pass expired";
    pwVar2 = L"k_EResultExpired";
    uVar1 = 0x1b;
    break;
  case 0x1c:
    local_38 = L"guest pass already redeemed";
    pwVar2 = L"k_EResultAlreadyRedeemed";
    uVar1 = 0x1c;
    break;
  case 0x1d:
    local_38 = L"duplicate request, already occurred, ignoring";
    pwVar2 = L"k_EResultDuplicateRequest";
    uVar1 = 0x1d;
    break;
  case 0x1e:
    local_38 = L"already owned";
    pwVar2 = L"k_EResultAlreadyOwned";
    uVar1 = 0x1e;
    break;
  case 0x1f:
    local_38 = L"IP address not found";
    pwVar2 = L"k_EResultIPNotFound";
    uVar1 = 0x1f;
    break;
  case 0x20:
    local_38 = L"failed to write change to data store";
    pwVar2 = L"k_EResultPersistFailed";
    uVar1 = 0x20;
    break;
  case 0x21:
    local_38 = L"failed to acquire access lock for operation";
    pwVar2 = L"k_EResultLockingFailed";
    uVar1 = 0x21;
    break;
  case 0x22:
    local_38 = L"???";
    pwVar2 = L"k_EResultLogonSessionReplaced";
    uVar1 = 0x22;
    break;
  case 0x23:
    local_38 = L"???";
    pwVar2 = L"k_EResultConnectFailed";
    uVar1 = 0x23;
    break;
  case 0x24:
    local_38 = L"???";
    pwVar2 = L"k_EResultHandshakeFailed";
    uVar1 = 0x24;
    break;
  case 0x25:
    local_38 = L"input/output failure";
    pwVar2 = L"k_EResultIOFailure";
    uVar1 = 0x25;
    break;
  case 0x26:
    local_38 = L"???";
    pwVar2 = L"k_EResultRemoteDisconnect";
    uVar1 = 0x26;
    break;
  case 0x27:
    local_38 = L"failed to find shopping cart requested";
    pwVar2 = L"k_EResultShoppingCartNotFound";
    uVar1 = 0x27;
    break;
  case 0x28:
    local_38 = L"blocked";
    pwVar2 = L"k_EResultBlocked";
    uVar1 = 0x28;
    break;
  case 0x29:
    local_38 = L"ignored";
    pwVar2 = L"k_EResultIgnored";
    uVar1 = 0x29;
    break;
  case 0x2a:
    local_38 = L"nothing matching request found";
    pwVar2 = L"k_EResultNoMatch";
    uVar1 = 0x2a;
    break;
  case 0x2b:
    local_38 = L"???";
    pwVar2 = L"k_EResultAccountDisabled";
    uVar1 = 0x2b;
    break;
  case 0x2c:
    local_38 = L"service not accepting content changes right now";
    pwVar2 = L"k_EResultServiceReadOnly";
    uVar1 = 0x2c;
    break;
  case 0x2d:
    local_38 = L"???";
    pwVar2 = L"k_EResultAccountNotFeatured";
    uVar1 = 0x2d;
    break;
  case 0x2e:
    local_38 = L"allowed to take this action, but only because requester is admin";
    pwVar2 = L"k_EResultAdministratorOK";
    uVar1 = 0x2e;
    break;
  case 0x2f:
    local_38 = L"version mismatch in transmitted content";
    pwVar2 = L"k_EResultContentVersion";
    uVar1 = 0x2f;
    break;
  case 0x30:
    local_38 = L"???";
    pwVar2 = L"k_EResultTryAnotherCM";
    uVar1 = 0x30;
    break;
  case 0x31:
    local_38 = L"???";
    pwVar2 = L"k_EResultPasswordRequiredToKickSession";
    uVar1 = 0x31;
    break;
  case 0x32:
    local_38 = L"already logged in elsewhere, must wait";
    pwVar2 = L"k_EResultAlreadyLoggedInElsewhere";
    uVar1 = 0x32;
    break;
  case 0x33:
    local_38 = L"operation suspended/paused";
    pwVar2 = L"k_EResultSuspended";
    uVar1 = 0x33;
    break;
  case 0x34:
    local_38 = L"operation cancelled";
    pwVar2 = L"k_EResultCancelled";
    uVar1 = 0x34;
    break;
  case 0x35:
    local_38 = L"operation cancelled due to corrupt data";
    pwVar2 = L"k_EResultDataCorruption";
    uVar1 = 0x35;
    break;
  case 0x36:
    local_38 = L"operation cancelled due to lack of disk space";
    pwVar2 = L"k_EResultDiskFull";
    uVar1 = 0x36;
    break;
  case 0x37:
    local_38 = L"remote call or IPC call failed";
    pwVar2 = L"k_EResultRemoteCallFailed";
    uVar1 = 0x37;
    break;
  case 0x38:
    local_38 = L"password not verified, as it\'s unset serverside";
    pwVar2 = L"k_EResultPasswordUnset";
    uVar1 = 0x38;
    break;
  case 0x39:
    local_38 = L"external account not linked to a steam account";
    pwVar2 = L"k_EResultExternalAccountUnlinked";
    uVar1 = 0x39;
    break;
  case 0x3a:
    local_38 = L"PSN ticket invalid";
    pwVar2 = L"k_EResultPSNTicketInvalid";
    uVar1 = 0x3a;
    break;
  case 0x3b:
    local_38 = L"external account linked to other account";
    pwVar2 = L"k_EResultExternalAccountAlreadyLinked";
    uVar1 = 0x3b;
    break;
  case 0x3c:
    local_38 = L"sync cannot resume, conflict between local and remote files";
    pwVar2 = L"k_EResultRemoteFileConflict";
    uVar1 = 0x3c;
    break;
  case 0x3d:
    local_38 = L"requested password not legal";
    pwVar2 = L"k_EResultIllegalPassword";
    uVar1 = 0x3d;
    break;
  case 0x3e:
    local_38 = L"new value same as old";
    pwVar2 = L"k_EResultSameAsPreviousValue";
    uVar1 = 0x3e;
    break;
  case 0x3f:
    local_38 = L"account login denied due to 2nd factor auth failure";
    pwVar2 = L"k_EResultAccountLogonDenied";
    uVar1 = 0x3f;
    break;
  case 0x40:
    local_38 = L"requested password not legal";
    pwVar2 = L"k_EResultCannotUseOldPassword";
    uVar1 = 0x40;
    break;
  case 0x41:
    local_38 = L"account login denied, invalid auth code";
    pwVar2 = L"k_EResultInvalidLoginAuthCode";
    uVar1 = 0x41;
    break;
  case 0x42:
    local_38 = L"account login denied due to 2nd factor auth failure";
    pwVar2 = L"k_EResultAccountLogonDeniedNoMail";
    uVar1 = 0x42;
    break;
  case 0x43:
    local_38 = L"???";
    pwVar2 = L"k_EResultHardwareNotCapableOfIPT";
    uVar1 = 0x43;
    break;
  case 0x44:
    local_38 = L"???";
    pwVar2 = L"k_EResultIPTInitError";
    uVar1 = 0x44;
    break;
  case 0x45:
    local_38 = L"operation failed due to parental controls";
    pwVar2 = L"k_EResultParentalControlRestricted";
    uVar1 = 0x45;
    break;
  case 0x46:
    local_38 = L"facebook query returned error";
    pwVar2 = L"k_EResultFacebookQueryError";
    uVar1 = 0x46;
    break;
  case 0x47:
    local_38 = L"account login denied, expired auth code";
    pwVar2 = L"k_EResultExpiredLoginAuthCode";
    uVar1 = 0x47;
    break;
  case 0x48:
    local_38 = L"???";
    pwVar2 = L"k_EResultIPLoginRestrictionFailed";
    uVar1 = 0x48;
    break;
  case 0x49:
    local_38 = L"???";
    pwVar2 = L"k_EResultAccountLockedDown";
    uVar1 = 0x49;
    break;
  case 0x4a:
    local_38 = L"???";
    pwVar2 = L"k_EResultAccountLogonDeniedVerifiedEmailRequired";
    uVar1 = 0x4a;
    break;
  case 0x4b:
    local_38 = L"no matching URL";
    pwVar2 = L"k_EResultNoMatchingURL";
    uVar1 = 0x4b;
  }
  FUN_140002266(&local_28,L"\'%i\' %s (%s)",uVar1,pwVar2);
LAB_148fc0cbb:
  if (&local_28 == param_1) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_28;
    *(undefined4 *)(param_1 + 1) = local_20;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fc0d2b FUN_148fc0d2b body=659 status=ok
// SIG undefined FUN_148fc0d2b(void)

longlong * FUN_148fc0d2b(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  wchar_t *pwVar2;
  undefined1 auStack_58 [32];
  wchar_t *local_38;
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  switch(param_2) {
  case 1:
    local_38 = L"Success";
    pwVar2 = L"k_EChatRoomEnterResponseSuccess";
    uVar1 = 1;
    break;
  case 2:
    local_38 = L"Chat doesn\'t exist (probably closed)";
    pwVar2 = L"k_EChatRoomEnterResponseDoesntExist";
    uVar1 = 2;
    break;
  case 3:
    local_38 = L"General Denied - You don\'t have the permissions needed to join the chat";
    pwVar2 = L"k_EChatRoomEnterResponseNotAllowed";
    uVar1 = 3;
    break;
  case 4:
    local_38 = L"Chat room has reached its maximum size";
    pwVar2 = L"k_EChatRoomEnterResponseFull";
    uVar1 = 4;
    break;
  case 5:
    local_38 = L"Unexpected Error";
    pwVar2 = L"k_EChatRoomEnterResponseError";
    uVar1 = 5;
    break;
  case 6:
    local_38 = L"You are banned from this chat room and may not join";
    pwVar2 = L"k_EChatRoomEnterResponseBanned";
    uVar1 = 6;
    break;
  case 7:
    local_38 = 
    L"Joining this chat is not allowed because you are a limited user (no value on account)";
    pwVar2 = L"k_EChatRoomEnterResponseLimited";
    uVar1 = 7;
    break;
  case 8:
    local_38 = L"Attempt to join a clan chat when the clan is locked or disabled";
    pwVar2 = L"k_EChatRoomEnterResponseClanDisabled";
    uVar1 = 8;
    break;
  case 9:
    local_38 = L"Attempt to join a chat when the user has a community lock on their account";
    pwVar2 = L"k_EChatRoomEnterResponseCommunityBan";
    uVar1 = 9;
    break;
  case 10:
    local_38 = L"Join failed - some member in the chat has blocked you from joining";
    pwVar2 = L"k_EChatRoomEnterResponseMemberBlockedYou";
    uVar1 = 10;
    break;
  case 0xb:
    local_38 = L"Join failed - you have blocked some member already in the chat";
    pwVar2 = L"k_EChatRoomEnterResponseYouBlockedMember";
    uVar1 = 0xb;
    break;
  default:
    FUN_140002266(&local_28,L"Unknown EChatRoomEnterResponse result: %i (check Steam SDK)");
    goto LAB_148fc0f4f;
  }
  FUN_140002266(&local_28,L"\'%i\' %s (%s)",uVar1,pwVar2);
LAB_148fc0f4f:
  if (&local_28 == param_1) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_28;
    *(undefined4 *)(param_1 + 1) = local_20;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148fc0fbf FUN_148fc0fbf body=397 status=ok
// SIG undefined FUN_148fc0fbf(void)

longlong * FUN_148fc0fbf(longlong *param_1,int param_2)

{
  undefined8 uVar1;
  wchar_t *pwVar2;
  undefined1 auStack_58 [32];
  wchar_t *local_38;
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  switch(param_2) {
  case 1:
    local_38 = L"Join chat";
    pwVar2 = L"k_EChatMemberStateChangeEntered";
    uVar1 = 1;
    break;
  case 2:
    local_38 = L"Left chat";
    pwVar2 = L"k_EChatMemberStateChangeLeft";
    uVar1 = 2;
    break;
  case 3:
  case 5:
  case 6:
  case 7:
switchD_148fc0ff7_caseD_3:
    FUN_140002266(&local_28,L"Unknown EChatMemberStateChange result: %i (check Steam SDK)");
    goto LAB_148fc10f3;
  case 4:
    local_38 = L"Chat disconnect";
    pwVar2 = L"k_EChatMemberStateChangeDisconnected";
    uVar1 = 4;
    break;
  case 8:
    local_38 = L"Chat kicked";
    pwVar2 = L"k_EChatMemberStateChangeKicked";
    uVar1 = 8;
    break;
  default:
    if (param_2 != 0x10) goto switchD_148fc0ff7_caseD_3;
    local_38 = L"Chat kicked and banned";
    pwVar2 = L"k_EChatMemberStateChangeBanned";
    uVar1 = 0x10;
  }
  FUN_140002266(&local_28,L"\'%i\' %s (%s)",uVar1,pwVar2);
LAB_148fc10f3:
  if (&local_28 == param_1) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_28;
    *(undefined4 *)(param_1 + 1) = local_20;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148fc114d FUN_148fc114d body=289 status=ok
// SIG undefined FUN_148fc114d(void)

longlong * FUN_148fc114d(longlong *param_1,int param_2)

{
  undefined8 uVar1;
  wchar_t *pwVar2;
  undefined1 auStack_58 [32];
  wchar_t *local_38;
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 == 4) {
    local_38 = L"Timeout";
    pwVar2 = L"k_EP2PSessionErrorTimeout";
    uVar1 = 4;
  }
  else if (param_2 == 2) {
    local_38 = L"NoRightsToApp";
    pwVar2 = L"k_EP2PSessionErrorNoRightsToApp";
    uVar1 = 2;
  }
  else {
    if (param_2 != 0) {
      FUN_140002266(&local_28,L"Unknown EP2PSessionError result: %i (check Steam SDK)");
      goto LAB_148fc11ff;
    }
    local_38 = L"None";
    pwVar2 = L"k_EP2PSessionErrorNone";
    uVar1 = 0;
  }
  FUN_140002266(&local_28,L"\'%i\' %s (%s)",uVar1,pwVar2);
LAB_148fc11ff:
  if (&local_28 == param_1) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_28;
    *(undefined4 *)(param_1 + 1) = local_20;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fc126f FUN_148fc126f body=22 status=ok
// SIG undefined FUN_148fc126f(void)

undefined1 FUN_148fc126f(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = 5;
  if (param_1 - 1U < 0x2f) {
    uVar1 = (&DAT_14ba4c500)[param_1 - 1U];
  }
  return uVar1;
}



// FUNCTION 148fc1286 FUN_148fc1286 body=159 status=ok
// SIG undefined FUN_148fc1286(void)

void FUN_148fc1286(undefined8 *param_1)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_14ba4a5a0;
  param_1[1] = &PTR_FUN_14ba4a710;
  param_1[2] = &PTR_LAB_14ba4a738;
  if ((*(char *)((longlong)param_1 + 0xd9) != '\0') || (*(char *)(param_1 + 0x1b) == '\x01')) {
    plVar1 = (longlong *)param_1[0x5d];
    (**(code **)(*(longlong *)param_1[0x5c] + 0x10))((longlong *)param_1[0x5c],&local_28);
    (**(code **)(*plVar1 + 0xd8))(plVar1,local_28,0);
  }
  FUN_148a51c0a(param_1);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fc1326 FUN_148fc1326 body=165 status=ok
// SIG undefined FUN_148fc1326(void)

undefined8 * FUN_148fc1326(longlong param_1,undefined8 *param_2,longlong *param_3)

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
  FUN_14114e6dc(&local_38,param_3);
  FUN_140c6314c(param_1 + 8,local_40,&local_38);
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



// FUNCTION 148fc13cc FUN_148fc13cc body=38 status=ok
// SIG undefined FUN_148fc13cc(void)

void FUN_148fc13cc(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 8);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 148fc1406 FUN_148fc1406 body=38 status=ok
// SIG undefined FUN_148fc1406(void)

undefined8 FUN_148fc1406(undefined8 param_1,int param_2)

{
  FUN_148fc1286();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fc142c FUN_148fc142c body=45 status=ok
// SIG undefined FUN_148fc142c(void)

longlong FUN_148fc142c(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_148fc1286(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fc1459 FUN_148fc1459 body=38 status=ok
// SIG undefined FUN_148fc1459(void)

void FUN_148fc1459(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = SteamAPI_GetHSteamUser();
  uVar1 = SteamInternal_FindOrCreateUserInterface(uVar2,"STEAMREMOTESTORAGE_INTERFACE_VERSION016");
  *param_1 = uVar1;
  return;
}



// FUNCTION 148fc1480 FUN_148fc1480 body=29 status=ok
// SIG undefined FUN_148fc1480(void)

undefined8 FUN_148fc1480(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fc14a4 FUN_148fc14a4 body=36 status=ok
// SIG undefined FUN_148fc14a4(void)

undefined8 FUN_148fc14a4(longlong param_1,undefined8 param_2)

{
  FUN_140002266(param_2,L"%lld",*(undefined8 *)(param_1 + 8));
  return param_2;
}



// FUNCTION 148fc14c8 FUN_148fc14c8 body=71 status=ok
// SIG undefined FUN_148fc14c8(void)

undefined8 * FUN_148fc14c8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba4a7c0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fc1510 FUN_148fc1510 body=71 status=ok
// SIG undefined FUN_148fc1510(void)

undefined8 * FUN_148fc1510(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba4a7c0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fc1558 FUN_148fc1558 body=29 status=ok
// SIG undefined FUN_148fc1558(void)

undefined8 FUN_148fc1558(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fc1576 FUN_148fc1576 body=38 status=ok
// SIG undefined FUN_148fc1576(void)

undefined8 FUN_148fc1576(undefined8 param_1,int param_2)

{
  FUN_148fc159c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fc159c FUN_148fc159c body=99 status=ok
// SIG undefined FUN_148fc159c(void)

void FUN_148fc159c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba4a850;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
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
  if (param_1[5] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148fc1600 FUN_148fc1600 body=38 status=ok
// SIG undefined FUN_148fc1600(void)

undefined8 FUN_148fc1600(undefined8 param_1,int param_2)

{
  FUN_148fc159c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fc1628 FUN_148fc1628 body=38 status=ok
// SIG undefined FUN_148fc1628(void)

undefined8 FUN_148fc1628(undefined8 param_1,int param_2)

{
  FUN_148fc17be();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fc164e FUN_148fc164e body=181 status=ok
// SIG undefined FUN_148fc164e(void)

longlong * FUN_148fc164e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar4 = FUN_144a7c5f6((longlong *)(param_1 + 0x48));
  if (cVar4 == '\0') {
    plVar3 = *(longlong **)(param_1 + 0x48);
    *param_2 = (longlong)plVar3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x50);
  }
  else {
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
    local_48 = 0xffffffff;
    FUN_1467d02b6(param_2,*(undefined8 *)(param_1 + 0x58),param_1 + 0x78,&local_38);
    plVar3 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_30)(plStack_30);
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fc1704 FUN_148fc1704 body=181 status=ok
// SIG undefined FUN_148fc1704(void)

longlong * FUN_148fc1704(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar4 = FUN_144a7c5f6((longlong *)(param_1 + 0x60));
  if (cVar4 == '\0') {
    plVar3 = *(longlong **)(param_1 + 0x60);
    *param_2 = (longlong)plVar3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x68);
  }
  else {
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
    local_48 = 0xffffffff;
    FUN_1467d02b6(param_2,*(undefined8 *)(param_1 + 0x70),param_1 + 0x78,&local_38);
    plVar3 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_30)(plStack_30);
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fc17be FUN_148fc17be body=178 status=ok
// SIG undefined FUN_148fc17be(void)

void FUN_148fc17be(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba4a8f0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_1 + 0x14);
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0xc] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xc] + 0x10))();
  }
  if ((longlong *)param_1[9] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[9] + 0x10))();
  }
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[7] + 0x10))();
  }
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x10))();
  }
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148fc1870 FUN_148fc1870 body=38 status=ok
// SIG undefined FUN_148fc1870(void)

undefined8 FUN_148fc1870(undefined8 param_1,int param_2)

{
  FUN_1461f9ce4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fc1896 FUN_148fc1896 body=38 status=ok
// SIG undefined FUN_148fc1896(void)

undefined8 FUN_148fc1896(undefined8 param_1,int param_2)

{
  FUN_1461f9d54();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fc18bc FUN_148fc18bc body=168 status=ok
// SIG undefined FUN_148fc18bc(void)

undefined8 * FUN_148fc18bc(longlong param_1,undefined8 *param_2,longlong *param_3)

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
  FUN_14114e6dc(&local_38,param_3);
  FUN_140c6314c(param_1 + 0x268,local_40,&local_38);
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



// FUNCTION 148fc1966 FUN_148fc1966 body=41 status=ok
// SIG undefined FUN_148fc1966(void)

void FUN_148fc1966(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 0x268);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 148fc19a8 FUN_148fc19a8 body=45 status=ok
// SIG undefined FUN_148fc19a8(void)

longlong FUN_148fc19a8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x70;
  FUN_1461f9d54(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fc19d6 FUN_148fc19d6 body=45 status=ok
// SIG undefined FUN_148fc19d6(void)

longlong FUN_148fc19d6(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_1461c3ab0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fc1a26 FUN_148fc1a26 body=58 status=ok
// SIG undefined FUN_148fc1a26(void)

undefined8 * FUN_148fc1a26(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ba4ac30;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    SteamAPI_UnregisterCallback(param_1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fc1a84 FUN_148fc1a84 body=58 status=ok
// SIG undefined FUN_148fc1a84(void)

undefined8 * FUN_148fc1a84(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ba4ac70;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    SteamAPI_UnregisterCallback(param_1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fc1ad2 FUN_148fc1ad2 body=58 status=ok
// SIG undefined FUN_148fc1ad2(void)

undefined8 * FUN_148fc1ad2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ba4ac30;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    SteamAPI_UnregisterCallback(param_1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fc1b1e FUN_148fc1b1e body=58 status=ok
// SIG undefined FUN_148fc1b1e(void)

undefined8 * FUN_148fc1b1e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ba4ac70;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    SteamAPI_UnregisterCallback(param_1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fc1b7a FUN_148fc1b7a body=58 status=ok
// SIG undefined FUN_148fc1b7a(void)

undefined8 * FUN_148fc1b7a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ba4acf0;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    SteamAPI_UnregisterCallback(param_1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fc1bd8 FUN_148fc1bd8 body=58 status=ok
// SIG undefined FUN_148fc1bd8(void)

undefined8 * FUN_148fc1bd8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ba4ad30;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    SteamAPI_UnregisterCallback(param_1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fc1c26 FUN_148fc1c26 body=58 status=ok
// SIG undefined FUN_148fc1c26(void)

undefined8 * FUN_148fc1c26(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ba4acf0;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    SteamAPI_UnregisterCallback(param_1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fc1c72 FUN_148fc1c72 body=58 status=ok
// SIG undefined FUN_148fc1c72(void)

undefined8 * FUN_148fc1c72(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ba4ad30;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    SteamAPI_UnregisterCallback(param_1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fc1cbe FUN_148fc1cbe body=58 status=ok
// SIG undefined FUN_148fc1cbe(void)

undefined8 * FUN_148fc1cbe(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ba4ac30;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    SteamAPI_UnregisterCallback(param_1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fc1d0a FUN_148fc1d0a body=58 status=ok
// SIG undefined FUN_148fc1d0a(void)

undefined8 * FUN_148fc1d0a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ba4acf0;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    SteamAPI_UnregisterCallback(param_1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fc1d66 FUN_148fc1d66 body=58 status=ok
// SIG undefined FUN_148fc1d66(void)

undefined8 * FUN_148fc1d66(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ba4adf0;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    SteamAPI_UnregisterCallback(param_1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fc1dc4 FUN_148fc1dc4 body=58 status=ok
// SIG undefined FUN_148fc1dc4(void)

undefined8 * FUN_148fc1dc4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ba4ae30;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    SteamAPI_UnregisterCallback(param_1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fc1e12 FUN_148fc1e12 body=58 status=ok
// SIG undefined FUN_148fc1e12(void)

undefined8 * FUN_148fc1e12(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ba4ae30;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    SteamAPI_UnregisterCallback(param_1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fc1e6e FUN_148fc1e6e body=58 status=ok
// SIG undefined FUN_148fc1e6e(void)

undefined8 * FUN_148fc1e6e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ba4ae90;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    SteamAPI_UnregisterCallback(param_1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fc1ecc FUN_148fc1ecc body=58 status=ok
// SIG undefined FUN_148fc1ecc(void)

undefined8 * FUN_148fc1ecc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ba4aed0;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    SteamAPI_UnregisterCallback(param_1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fc1f08 FUN_148fc1f08 body=58 status=ok
// SIG undefined FUN_148fc1f08(void)

undefined8 * FUN_148fc1f08(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ba46eb0;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    SteamAPI_UnregisterCallback(param_1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fc1f52 FUN_148fc1f52 body=58 status=ok
// SIG undefined FUN_148fc1f52(void)

undefined8 * FUN_148fc1f52(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ba4af30;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    SteamAPI_UnregisterCallback(param_1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fc1f8e FUN_148fc1f8e body=58 status=ok
// SIG undefined FUN_148fc1f8e(void)

undefined8 * FUN_148fc1f8e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ba46eb0;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    SteamAPI_UnregisterCallback(param_1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fc1fc8 FUN_148fc1fc8 body=58 status=ok
// SIG undefined FUN_148fc1fc8(void)

undefined8 * FUN_148fc1fc8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ba46eb0;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    SteamAPI_UnregisterCallback(param_1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fc2002 FUN_148fc2002 body=58 status=ok
// SIG undefined FUN_148fc2002(void)

undefined8 * FUN_148fc2002(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ba4aed0;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    SteamAPI_UnregisterCallback(param_1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


