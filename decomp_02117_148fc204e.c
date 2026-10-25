// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148fc204e FUN_148fc204e body=58 status=ok
// SIG undefined FUN_148fc204e(void)

undefined8 * FUN_148fc204e(undefined8 *param_1,int param_2)

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



// FUNCTION 148fc209a FUN_148fc209a body=58 status=ok
// SIG undefined FUN_148fc209a(void)

undefined8 * FUN_148fc209a(undefined8 *param_1,int param_2)

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



// FUNCTION 148fc20e6 FUN_148fc20e6 body=58 status=ok
// SIG undefined FUN_148fc20e6(void)

undefined8 * FUN_148fc20e6(undefined8 *param_1,int param_2)

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



// FUNCTION 148fc2130 FUN_148fc2130 body=58 status=ok
// SIG undefined FUN_148fc2130(void)

undefined8 * FUN_148fc2130(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ba4b030;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    SteamAPI_UnregisterCallback(param_1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fc216c FUN_148fc216c body=58 status=ok
// SIG undefined FUN_148fc216c(void)

undefined8 * FUN_148fc216c(undefined8 *param_1,int param_2)

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



// FUNCTION 148fc21b8 FUN_148fc21b8 body=58 status=ok
// SIG undefined FUN_148fc21b8(void)

undefined8 * FUN_148fc21b8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ba4b030;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    SteamAPI_UnregisterCallback(param_1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fc21f2 FUN_148fc21f2 body=119 status=ok
// SIG undefined FUN_148fc21f2(void)

ulonglong FUN_148fc21f2(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  char *pcVar3;
  ulonglong uVar4;
  ulonglong uVar6;
  undefined7 uVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x290));
  uVar2 = (ulonglong)*(int *)(param_1 + 0x2c0);
  if ((longlong)uVar2 < 1) {
    uVar4 = 0;
  }
  else {
    uVar5 = (undefined7)((ulonglong)param_1 >> 8);
    uVar4 = CONCAT71(uVar5,1);
    if (*(char *)(*(longlong *)(param_1 + 0x2b8) + 0x3e) == '\0') {
      pcVar3 = (char *)(*(longlong *)(param_1 + 0x2b8) + 0x18e);
      uVar4 = 1;
      do {
        uVar6 = uVar4;
        if (uVar2 == uVar6) break;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 0x150;
        uVar4 = uVar6 + 1;
      } while (cVar1 != '\x01');
      uVar4 = CONCAT71(uVar5,uVar6 < uVar2);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x290));
  return uVar4 & 0xffffffff;
}



// FUNCTION 148fc226a FUN_148fc226a body=109 status=ok
// SIG undefined FUN_148fc226a(void)

undefined4 FUN_148fc226a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x290));
  if (0 < (longlong)*(int *)(param_1 + 0x2c0)) {
    lVar1 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x2b8) + 0x118 + lVar1) == param_2) {
        uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x2b8) + 0x148 + lVar1);
        goto LAB_148fc22bb;
      }
      lVar1 = lVar1 + 0x150;
    } while ((longlong)*(int *)(param_1 + 0x2c0) * 0x150 - lVar1 != 0);
  }
  uVar2 = 0;
LAB_148fc22bb:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x290));
  return uVar2;
}



// FUNCTION 148fc22d8 FUN_148fc22d8 body=165 status=ok
// SIG undefined FUN_148fc22d8(void)

undefined8 * FUN_148fc22d8(longlong param_1,undefined8 *param_2,longlong *param_3)

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
  FUN_148fc2582(&local_38,param_3);
  FUN_148fc249a(param_1 + 8,local_40,&local_38);
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



// FUNCTION 148fc237e FUN_148fc237e body=38 status=ok
// SIG undefined FUN_148fc237e(void)

void FUN_148fc237e(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 8);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 148fc23b8 FUN_148fc23b8 body=165 status=ok
// SIG undefined FUN_148fc23b8(void)

undefined8 * FUN_148fc23b8(longlong param_1,undefined8 *param_2,longlong *param_3)

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
  FUN_148fc279c(&local_38,param_3);
  FUN_148fc26b4(param_1 + 0x20,local_40,&local_38);
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



// FUNCTION 148fc245e FUN_148fc245e body=38 status=ok
// SIG undefined FUN_148fc245e(void)

void FUN_148fc245e(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 0x20);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 148fc249a FUN_148fc249a body=230 status=ok
// SIG undefined FUN_148fc249a(void)

undefined8 * FUN_148fc249a(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 148fc2582 FUN_148fc2582 body=130 status=ok
// SIG undefined FUN_148fc2582(void)

void FUN_148fc2582(longlong *param_1,longlong *param_2)

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



// FUNCTION 148fc2606 FUN_148fc2606 body=173 status=ok
// SIG undefined FUN_148fc2606(void)

void FUN_148fc2606(longlong *param_1,undefined4 param_2,undefined8 param_3)

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
        goto LAB_148fc268d;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148fc268d:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148fc26b4 FUN_148fc26b4 body=230 status=ok
// SIG undefined FUN_148fc26b4(void)

undefined8 * FUN_148fc26b4(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 148fc279c FUN_148fc279c body=130 status=ok
// SIG undefined FUN_148fc279c(void)

void FUN_148fc279c(longlong *param_1,longlong *param_2)

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



// FUNCTION 148fc2820 FUN_148fc2820 body=209 status=ok
// SIG undefined FUN_148fc2820(void)

void FUN_148fc2820(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar8 = false;
  do {
    lVar6 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar6) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar6), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4,param_5),
           cVar4 != '\0'))) {
      lVar6 = lVar6 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar8) {
          return;
        }
        goto LAB_148fc28c3;
      }
    }
    uVar5 = uVar7 - 1;
    bVar8 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148fc28c3:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148fc28f2 FUN_148fc28f2 body=165 status=ok
// SIG undefined FUN_148fc28f2(void)

undefined8 * FUN_148fc28f2(longlong param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 148fc2998 FUN_148fc2998 body=38 status=ok
// SIG undefined FUN_148fc2998(void)

void FUN_148fc2998(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 8);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 148fc29d2 FUN_148fc29d2 body=165 status=ok
// SIG undefined FUN_148fc29d2(void)

undefined8 * FUN_148fc29d2(longlong param_1,undefined8 *param_2,longlong *param_3)

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
  FUN_1413d6220(&local_38,param_3);
  FUN_145941952(param_1 + 0x20,local_40,&local_38);
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



// FUNCTION 148fc2a78 FUN_148fc2a78 body=38 status=ok
// SIG undefined FUN_148fc2a78(void)

void FUN_148fc2a78(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 0x20);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 148fc2ab6 FUN_148fc2ab6 body=181 status=ok
// SIG undefined FUN_148fc2ab6(void)

undefined8 * FUN_148fc2ab6(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x2f0,0x10);
  FUN_148a5187a(puVar1,*(undefined8 *)(param_1 + 0x20));
  *puVar1 = &PTR_FUN_14ba4a5a0;
  puVar1[1] = &PTR_FUN_14ba4a710;
  puVar1[2] = &PTR_LAB_14ba4a738;
  puVar2 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764850);
  puVar1[0x5c] = *puVar2;
  puVar2 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764890);
  puVar1[0x5d] = *puVar2;
  *param_2 = puVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14ba4b870;
  puVar2[2] = puVar1;
  param_2[1] = puVar2;
  return param_2;
}



// FUNCTION 148fc2b86 FUN_148fc2b86 body=29 status=ok
// SIG undefined FUN_148fc2b86(void)

undefined8 FUN_148fc2b86(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fc2ba4 FUN_148fc2ba4 body=68 status=ok
// SIG undefined FUN_148fc2ba4(void)

undefined8 FUN_148fc2ba4(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  
  FUN_140033559("..\\Plugins\\Online\\OnlineSubsystem\\Source\\Public\\Interfaces/OnlineExternalUIInterface.h"
                ,0x1ea,
                L"IOnlineExternalUI::ShowAccountUpgradeUI called for a subsystem that does not implement it."
               );
  plVar1 = (longlong *)*param_3;
  if (plVar1 != (longlong *)0x0 && (int)param_3[1] != 0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,0);
  }
  return 0;
}



// FUNCTION 148fc2bf0 FUN_148fc2bf0 body=40 status=ok
// SIG undefined FUN_148fc2bf0(void)

undefined8 FUN_148fc2bf0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_3;
  if (plVar1 != (longlong *)0x0 && (int)param_3[1] != 0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,0);
  }
  return 0;
}



// FUNCTION 148fc2c2c FUN_148fc2c2c body=165 status=ok
// SIG undefined FUN_148fc2c2c(void)

undefined8 * FUN_148fc2c2c(longlong param_1,undefined8 *param_2,longlong *param_3)

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
  FUN_148fc2ede(&local_38,param_3);
  FUN_148fc2df6(param_1 + 0x20,local_40,&local_38);
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



// FUNCTION 148fc2cd2 FUN_148fc2cd2 body=38 status=ok
// SIG undefined FUN_148fc2cd2(void)

void FUN_148fc2cd2(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 0x20);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 148fc2d0c FUN_148fc2d0c body=165 status=ok
// SIG undefined FUN_148fc2d0c(void)

undefined8 * FUN_148fc2d0c(longlong param_1,undefined8 *param_2,longlong *param_3)

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
  FUN_148fc2ede(&local_38,param_3);
  FUN_148fc2df6(param_1 + 0x38,local_40,&local_38);
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



// FUNCTION 148fc2db2 FUN_148fc2db2 body=38 status=ok
// SIG undefined FUN_148fc2db2(void)

void FUN_148fc2db2(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 0x38);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 148fc2df6 FUN_148fc2df6 body=230 status=ok
// SIG undefined FUN_148fc2df6(void)

undefined8 * FUN_148fc2df6(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 148fc2ede FUN_148fc2ede body=130 status=ok
// SIG undefined FUN_148fc2ede(void)

void FUN_148fc2ede(longlong *param_1,longlong *param_2)

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



// FUNCTION 148fc2f62 FUN_148fc2f62 body=210 status=ok
// SIG undefined FUN_148fc2f62(void)

void FUN_148fc2f62(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4,param_5),
           cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_148fc3006;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148fc3006:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148fc3034 FUN_148fc3034 body=38 status=ok
// SIG undefined FUN_148fc3034(void)

void FUN_148fc3034(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = SteamGameServer_GetHSteamUser();
  uVar1 = SteamInternal_FindOrCreateGameServerInterface(uVar2,"SteamGameServerStats001");
  *param_1 = uVar1;
  return;
}



// FUNCTION 148fc305a FUN_148fc305a body=32 status=ok
// SIG undefined FUN_148fc305a(void)

void FUN_148fc305a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = SteamInternal_FindOrCreateGameServerInterface(0,"SteamUtils010");
  *param_1 = uVar1;
  return;
}



// FUNCTION 148fc307a FUN_148fc307a body=112 status=ok
// SIG undefined FUN_148fc307a(void)

void FUN_148fc307a(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)(int)param_2 * 0xa8 + lVar1);
  FUN_148fc3128(_Dst);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0xa8),(longlong)iVar3 * 0xa8);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 148fc30ea FUN_148fc30ea body=62 status=ok
// SIG undefined FUN_148fc30ea(void)

void FUN_148fc30ea(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148fc319e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xa8,8);
  }
  return;
}



// FUNCTION 148fc3128 FUN_148fc3128 body=117 status=ok
// SIG undefined FUN_148fc3128(void)

void FUN_148fc3128(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_1 + 0xb);
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148fc319e FUN_148fc319e body=110 status=ok
// SIG undefined FUN_148fc319e(void)

ulonglong FUN_148fc319e(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0xa8) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148fc31d7;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0xa8,8);
      param_2 = param_2 / 0xa8;
    }
  }
LAB_148fc31d7:
  return param_2 & 0xffffffff;
}



// FUNCTION 148fc320c FUN_148fc320c body=53 status=ok
// SIG undefined FUN_148fc320c(void)

void FUN_148fc320c(undefined8 *param_1)

{
  FUN_145e041f4(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    return;
  }
  FUN_148fc3b7a(param_1,0);
  return;
}



// FUNCTION 148fc3241 FUN_148fc3241 body=70 status=ok
// SIG undefined FUN_148fc3241(void)

void FUN_148fc3241(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &PTR_FUN_14ba4a7c0;
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    if (param_1[1] != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 6;
  }
  return;
}



// FUNCTION 148fc3288 FUN_148fc3288 body=233 status=ok
// SIG undefined FUN_148fc3288(void)

void FUN_148fc3288(ulonglong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined *puVar6;
  longlong lVar7;
  
  if (DAT_14cbf4f28 != DAT_14cbf4f54) {
    uVar3 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    puVar6 = &DAT_14cbf4f58;
    if (DAT_14cbf4f60 != (undefined *)0x0) {
      puVar6 = DAT_14cbf4f60;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)(int)(uVar3 >> 0x10 ^ uVar3) &
                                   (longlong)DAT_14cbf4f68 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cbf4f20 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(ulonglong *)(DAT_14cbf4f20 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cbf4f58;
        if (DAT_14cbf4f60 != (undefined *)0x0) {
          puVar6 = DAT_14cbf4f60;
        }
        lVar1 = DAT_14cbf4f20 + (longlong)iVar2 * 0x18;
        lVar7 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar7 * 4);
        if (iVar5 == iVar2) {
          puVar4 = (undefined4 *)(puVar6 + lVar7 * 4);
        }
        else {
          do {
            lVar7 = (longlong)iVar5;
            iVar5 = *(int *)(DAT_14cbf4f20 + 0x10 + lVar7 * 0x18);
          } while (iVar5 != iVar2);
          puVar4 = (undefined4 *)(DAT_14cbf4f20 + lVar7 * 0x18 + 0x10);
        }
        *puVar4 = *(undefined4 *)(lVar1 + 0x10);
        FUN_148fc3372();
        return;
      }
    }
  }
  return;
}



// FUNCTION 148fc3372 FUN_148fc3372 body=128 status=ok
// SIG undefined FUN_148fc3372(void)

void FUN_148fc3372(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cbf4f20;
  if (DAT_14cbf4f54 != 0) {
    *(int *)(DAT_14cbf4f20 + (longlong)DAT_14cbf4f50 * 0x18) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x18) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cbf4f54) {
    iVar4 = DAT_14cbf4f50;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x18) = iVar4;
  DAT_14cbf4f54 = DAT_14cbf4f54 + 1;
  puVar3 = &DAT_14cbf4f30;
  if (DAT_14cbf4f40 != (undefined *)0x0) {
    puVar3 = DAT_14cbf4f40;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cbf4f50 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 148fc33f2 FUN_148fc33f2 body=115 status=ok
// SIG undefined FUN_148fc33f2(void)

undefined8 * FUN_148fc33f2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = &PTR_FUN_14ba4a7c0;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return param_1;
}



// FUNCTION 148fc3466 FUN_148fc3466 body=147 status=ok
// SIG undefined FUN_148fc3466(void)

void FUN_148fc3466(longlong param_1,int param_2)

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



// FUNCTION 148fc34fa FUN_148fc34fa body=146 status=ok
// SIG undefined FUN_148fc34fa(void)

void FUN_148fc34fa(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0xa8,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0xc30c30c30c30c31),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0xa8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148fc358e FUN_148fc358e body=48 status=ok
// SIG undefined FUN_148fc358e(void)

void FUN_148fc358e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x30,8);
  }
  return;
}



// FUNCTION 148fc35be FUN_148fc35be body=144 status=ok
// SIG undefined FUN_148fc35be(void)

void FUN_148fc35be(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  lVar1 = *param_1;
  lVar3 = (longlong)(int)param_2 * 0x30;
  *(undefined ***)(lVar1 + lVar3) = &PTR_FUN_14ba4a7c0;
  if (*(longlong *)(lVar1 + 0x20 + lVar3) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(lVar1 + lVar3 + 8) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  iVar5 = ~param_2 + iVar2;
  if (iVar5 != 0) {
    iVar4 = 1;
    if (iVar5 < 1) {
      iVar4 = iVar5;
    }
    memmove((void *)(lVar1 + lVar3),(void *)(lVar1 + (longlong)(iVar2 - iVar4) * 0x30),
            (longlong)iVar4 * 0x30);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 148fc364e FUN_148fc364e body=62 status=ok
// SIG undefined FUN_148fc364e(void)

void FUN_148fc364e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148fc368c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,8);
  }
  return;
}



// FUNCTION 148fc368c FUN_148fc368c body=112 status=ok
// SIG undefined FUN_148fc368c(void)

ulonglong FUN_148fc368c(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x30) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148fc36c6;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x30,8);
      param_2 = param_2 / 0x30;
    }
  }
LAB_148fc36c6:
  return param_2 & 0xffffffff;
}



// FUNCTION 148fc36fc FUN_148fc36fc body=83 status=ok
// SIG undefined FUN_148fc36fc(void)

undefined8 * FUN_148fc36fc(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba4bbe0;
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



// FUNCTION 148fc3750 FUN_148fc3750 body=38 status=ok
// SIG undefined FUN_148fc3750(void)

undefined8 FUN_148fc3750(undefined8 param_1,int param_2)

{
  FUN_148fc3776();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fc3776 FUN_148fc3776 body=83 status=ok
// SIG undefined FUN_148fc3776(void)

void FUN_148fc3776(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba4bc20;
  if (param_1[7] != 0) {
    FUN_1400020a8();
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
                    /* WARNING: Could not recover jumptable at 0x000148fc37be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148fc37ca FUN_148fc37ca body=38 status=ok
// SIG undefined FUN_148fc37ca(void)

undefined8 FUN_148fc37ca(undefined8 param_1,int param_2)

{
  FUN_148fc37f0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fc37f0 FUN_148fc37f0 body=83 status=ok
// SIG undefined FUN_148fc37f0(void)

void FUN_148fc37f0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba4bc60;
  if (param_1[8] != 0) {
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
                    /* WARNING: Could not recover jumptable at 0x000148fc3838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148fc3844 FUN_148fc3844 body=32 status=ok
// SIG undefined FUN_148fc3844(void)

undefined8 FUN_148fc3844(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FOnlineAsyncTaskSteamQueryUserInfo");
  return param_2;
}



// FUNCTION 148fc3870 FUN_148fc3870 body=45 status=ok
// SIG undefined FUN_148fc3870(void)

longlong FUN_148fc3870(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x80;
  FUN_146012848(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fc389e FUN_148fc389e body=48 status=ok
// SIG undefined FUN_148fc389e(void)

longlong FUN_148fc389e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_146012848(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fc38ce FUN_148fc38ce body=124 status=ok
// SIG undefined FUN_148fc38ce(void)

undefined8 * FUN_148fc38ce(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *param_1 = *param_2;
  lVar2 = param_2[1];
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar4 = *(undefined4 *)(param_2 + 3);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 3) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar5;
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  _Src = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],_Src,(longlong)iVar1 << 2);
  }
  return param_1;
}



// FUNCTION 148fc394a FUN_148fc394a body=38 status=ok
// SIG undefined FUN_148fc394a(void)

undefined8 FUN_148fc394a(undefined8 param_1,int param_2)

{
  FUN_148fc3974();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fc3974 FUN_148fc3974 body=71 status=ok
// SIG undefined FUN_148fc3974(void)

void FUN_148fc3974(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba4bed0;
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
  FUN_145a0616e(param_1);
  return;
}



// FUNCTION 148fc39bc FUN_148fc39bc body=132 status=ok
// SIG undefined FUN_148fc39bc(void)

void FUN_148fc39bc(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148fc3a42 FUN_148fc3a42 body=156 status=ok
// SIG undefined FUN_148fc3a42(void)

void FUN_148fc3a42(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  iVar2 = (int)param_1[1];
  if ((longlong)iVar2 != 0) {
    lVar1 = *param_1;
    iVar4 = 1;
    lVar6 = 0;
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar6) == *param_2) {
        if (iVar4 == 0) {
          return;
        }
        iVar4 = iVar2 - iVar4;
        if (iVar4 != 0) {
          iVar5 = 1;
          if (iVar4 < 1) {
            iVar5 = iVar4;
          }
          memmove((void *)(lVar1 + (lVar3 >> 0x20) * 8),
                  (void *)(lVar1 + (longlong)(iVar2 - iVar5) * 8),(longlong)iVar5 << 3);
          iVar2 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar2 + -1;
        FUN_148fc3ade(param_1);
        return;
      }
      lVar3 = lVar3 + 0x100000000;
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar2 << 3 != lVar6);
  }
  return;
}



// FUNCTION 148fc3ade FUN_148fc3ade body=62 status=ok
// SIG undefined FUN_148fc3ade(void)

void FUN_148fc3ade(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148fc3b1c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 148fc3b1c FUN_148fc3b1c body=93 status=ok
// SIG undefined FUN_148fc3b1c(void)

ulonglong FUN_148fc3b1c(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 148fc3b7a FUN_148fc3b7a body=112 status=ok
// SIG undefined FUN_148fc3b7a(void)

void FUN_148fc3b7a(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0xa8,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0xc30c30c30c30c31),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,0xa8,8);
  }
  return;
}



// FUNCTION 148fc3bea FUN_148fc3bea body=25 status=ok
// SIG undefined FUN_148fc3bea(void)

void FUN_148fc3bea(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148fc3bff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 148fc3c04 FUN_148fc3c04 body=29 status=ok
// SIG undefined FUN_148fc3c04(void)

undefined8 FUN_148fc3c04(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fc3c22 FUN_148fc3c22 body=132 status=ok
// SIG undefined FUN_148fc3c22(void)

void FUN_148fc3c22(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148fc3ca8 FUN_148fc3ca8 body=48 status=ok
// SIG undefined FUN_148fc3ca8(void)

void FUN_148fc3ca8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 148fc3cd8 FUN_148fc3cd8 body=62 status=ok
// SIG undefined FUN_148fc3cd8(void)

void FUN_148fc3cd8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148fc3d16(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 148fc3d16 FUN_148fc3d16 body=93 status=ok
// SIG undefined FUN_148fc3d16(void)

ulonglong FUN_148fc3d16(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 148fc3d74 FUN_148fc3d74 body=132 status=ok
// SIG undefined FUN_148fc3d74(void)

void FUN_148fc3d74(longlong param_1,int param_2)

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



// FUNCTION 148fc3df9 FUN_148fc3df9 body=88 status=ok
// SIG undefined FUN_148fc3df9(void)

void FUN_148fc3df9(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x28);
    do {
      FUN_148fc3df9(*(undefined8 *)(puVar1 + -2),*puVar1);
      if (*(longlong *)(puVar1 + -2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong **)(puVar1 + -6) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(puVar1 + -6) + 0x10))();
      }
      if (*(longlong *)(puVar1 + -10) != 0) {
        FUN_1400020a8();
      }
      puVar1 = puVar1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 148fc3e52 FUN_148fc3e52 body=113 status=ok
// SIG undefined FUN_148fc3e52(void)

void FUN_148fc3e52(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x30)) {
      uVar2 = uVar1 / 0x30 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x30,8);
  }
  return;
}



// FUNCTION 148fc3ec4 FUN_148fc3ec4 body=96 status=ok
// SIG undefined FUN_148fc3ec4(void)

void FUN_148fc3ec4(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
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



// FUNCTION 148fc3f24 FUN_148fc3f24 body=24 status=ok
// SIG undefined FUN_148fc3f24(void)

void FUN_148fc3f24(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148fc3f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 148fc3f3c FUN_148fc3f3c body=29 status=ok
// SIG undefined FUN_148fc3f3c(void)

undefined8 FUN_148fc3f3c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fc3f5a FUN_148fc3f5a body=132 status=ok
// SIG undefined FUN_148fc3f5a(void)

void FUN_148fc3f5a(longlong param_1,int param_2)

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



// FUNCTION 148fc3fe0 FUN_148fc3fe0 body=98 status=ok
// SIG undefined FUN_148fc3fe0(void)

void FUN_148fc3fe0(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148fc4042 FUN_148fc4042 body=45 status=ok
// SIG undefined FUN_148fc4042(void)

void FUN_148fc4042(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
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
  }
  return;
}



// FUNCTION 148fc4070 FUN_148fc4070 body=31 status=ok
// SIG undefined FUN_148fc4070(void)

undefined8 FUN_148fc4070(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fc40ac FUN_148fc40ac body=93 status=ok
// SIG undefined FUN_148fc40ac(void)

void FUN_148fc40ac(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba4c120;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148fc410a FUN_148fc410a body=126 status=ok
// SIG undefined FUN_148fc410a(void)

void FUN_148fc410a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba4c120;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148fc4179. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148fc4188 FUN_148fc4188 body=21 status=ok
// SIG undefined FUN_148fc4188(void)

undefined8 FUN_148fc4188(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148fc41a6 FUN_148fc41a6 body=24 status=ok
// SIG undefined FUN_148fc41a6(void)

void FUN_148fc41a6(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148fc41ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 148fc41be FUN_148fc41be body=24 status=ok
// SIG undefined FUN_148fc41be(void)

void FUN_148fc41be(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148fc41d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 148fc41d6 FUN_148fc41d6 body=24 status=ok
// SIG undefined FUN_148fc41d6(void)

void FUN_148fc41d6(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148fc41ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 148fc41ee FUN_148fc41ee body=24 status=ok
// SIG undefined FUN_148fc41ee(void)

void FUN_148fc41ee(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148fc4202. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 148fc4206 FUN_148fc4206 body=24 status=ok
// SIG undefined FUN_148fc4206(void)

void FUN_148fc4206(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148fc421a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 148fc421e FUN_148fc421e body=24 status=ok
// SIG undefined FUN_148fc421e(void)

void FUN_148fc421e(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148fc4232. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 148fc4236 FUN_148fc4236 body=24 status=ok
// SIG undefined FUN_148fc4236(void)

void FUN_148fc4236(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148fc424a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 148fc424e FUN_148fc424e body=132 status=ok
// SIG undefined FUN_148fc424e(void)

void FUN_148fc424e(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148fc42d4 FUN_148fc42d4 body=48 status=ok
// SIG undefined FUN_148fc42d4(void)

void FUN_148fc42d4(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 148fc4304 FUN_148fc4304 body=29 status=ok
// SIG undefined FUN_148fc4304(void)

undefined8 FUN_148fc4304(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fc4344 FUN_148fc4344 body=93 status=ok
// SIG undefined FUN_148fc4344(void)

void FUN_148fc4344(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba4c440;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba4c3d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148fc43a2 FUN_148fc43a2 body=93 status=ok
// SIG undefined FUN_148fc43a2(void)

void FUN_148fc43a2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba4c440;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba4c3d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148fc4400 FUN_148fc4400 body=126 status=ok
// SIG undefined FUN_148fc4400(void)

void FUN_148fc4400(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ba4c440;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba4c3d0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148fc446f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148fc448a FUN_148fc448a body=22 status=ok
// SIG undefined FUN_148fc448a(void)

undefined8 FUN_148fc448a(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3);
  return 1;
}



// FUNCTION 148fc44a2 FUN_148fc44a2 body=338 status=ok
// SIG undefined FUN_148fc44a2(void)

undefined4 * FUN_148fc44a2(undefined4 *param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  ulonglong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148fc45f6(local_40);
  puVar1 = (ulonglong *)param_2[1];
  uVar8 = *(ulonglong *)*param_2;
  *local_38 = uVar8;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar5 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  cVar4 = FUN_148fc4704(uVar5,local_38,&local_44);
  uVar3 = local_44;
  if (cVar4 == '\0') {
    uVar6 = DAT_14cbf4f28 - DAT_14cbf4f54;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar2 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cbf4f68)) {
      uVar5 = DAT_14cbf4f68 - 1U & uVar5;
      *(uint *)((longlong)local_38 + 0x14) = uVar5;
      puVar7 = DAT_14cbf4f60;
      if (DAT_14cbf4f60 == (undefined *)0x0) {
        puVar7 = &DAT_14cbf4f58;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cbf4f68 - 1U & (longlong)(int)uVar5) * 4);
      puVar7 = DAT_14cbf4f60;
      if (DAT_14cbf4f60 == (undefined *)0x0) {
        puVar7 = &DAT_14cbf4f58;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cbf4f68 - 1U & (longlong)(int)uVar5) * 4) = local_44
      ;
    }
    else {
      DAT_14cbf4f68 = iVar9;
      FUN_148fc4794();
    }
  }
  *param_1 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fc45f6 FUN_148fc45f6 body=270 status=ok
// SIG undefined FUN_148fc45f6(void)

int * FUN_148fc45f6(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cbf4f50;
  iVar4 = DAT_14cbf4f28;
  if (DAT_14cbf4f54 == 0) {
    iVar2 = DAT_14cbf4f28 + 1;
    bVar7 = DAT_14cbf4f2c == DAT_14cbf4f28;
    DAT_14cbf4f28 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cbf4f20,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14cbf4f30,1);
    puVar3 = DAT_14cbf4f40;
    if (DAT_14cbf4f40 == (undefined *)0x0) {
      puVar3 = &DAT_14cbf4f30;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  }
  else {
    lVar6 = (longlong)DAT_14cbf4f50;
    DAT_14cbf4f50 = *(int *)(DAT_14cbf4f20 + 4 + lVar6 * 0x18);
    DAT_14cbf4f54 = DAT_14cbf4f54 + -1;
    iVar4 = iVar2;
    if (DAT_14cbf4f54 != 0) {
      *(undefined4 *)(DAT_14cbf4f20 + (longlong)DAT_14cbf4f50 * 0x18) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14cbf4f30;
  if (DAT_14cbf4f40 != (undefined *)0x0) {
    puVar3 = DAT_14cbf4f40;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cbf4f20;
  return param_1;
}



// FUNCTION 148fc4704 FUN_148fc4704 body=143 status=ok
// SIG undefined FUN_148fc4704(void)

undefined8 FUN_148fc4704(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cbf4f28 - DAT_14cbf4f54 != 1) && (DAT_14cbf4f28 != DAT_14cbf4f54)) {
    puVar6 = &DAT_14cbf4f58;
    if (DAT_14cbf4f60 != (undefined *)0x0) {
      puVar6 = DAT_14cbf4f60;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cbf4f68 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cbf4f20 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_148fc3372(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
    }
  }
  return 0;
}



// FUNCTION 148fc4794 FUN_148fc4794 body=515 status=ok
// SIG undefined FUN_148fc4794(void)

void FUN_148fc4794(void)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbf4f60 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cbf4f60,0,0,4);
  }
  uVar7 = DAT_14cbf4f68;
  uVar2 = local_50;
  if (DAT_14cbf4f68 != 0) {
    uVar6 = 0;
    FUN_144a1cbf0(&DAT_14cbf4f58,0,DAT_14cbf4f68,4);
    if (0 < (int)uVar7) {
      do {
        puVar5 = DAT_14cbf4f60;
        if (DAT_14cbf4f60 == (undefined *)0x0) {
          puVar5 = &DAT_14cbf4f58;
        }
        *(undefined4 *)(puVar5 + (ulonglong)(DAT_14cbf4f68 + 0x7fffffff & uVar6) * 4) = 0xffffffff;
        uVar6 = uVar6 + 1;
      } while (uVar7 != uVar6);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cbf4f30;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cbf4f48 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cbf4f20;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar3 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar4 = (longlong)iVar3;
        uVar9 = *(ulonglong *)(lVar1 + lVar4 * 0x18);
        uVar7 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        uVar9 = (longlong)(int)(uVar7 >> 0x10 ^ uVar7) & (longlong)(int)DAT_14cbf4f68 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar4 * 0x18) = iVar8;
        puVar5 = DAT_14cbf4f60;
        if (DAT_14cbf4f60 == (undefined *)0x0) {
          puVar5 = &DAT_14cbf4f58;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar4 * 0x18) =
             *(undefined4 *)(puVar5 + ((longlong)(int)DAT_14cbf4f68 - 1U & uVar9) * 4);
        puVar5 = DAT_14cbf4f60;
        if (DAT_14cbf4f60 == (undefined *)0x0) {
          puVar5 = &DAT_14cbf4f58;
        }
        *(int *)(puVar5 + ((longlong)iVar8 & (longlong)(int)DAT_14cbf4f68 - 1U) * 4) = iVar3;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar3 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148fc4998 FUN_148fc4998 body=114 status=ok
// SIG undefined FUN_148fc4998(void)

void FUN_148fc4998(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0xa8,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0xc30c30c30c30c31),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0xa8,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148fc4a0a FUN_148fc4a0a body=60 status=ok
// SIG undefined FUN_148fc4a0a(void)

void FUN_148fc4a0a(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148fc4a46(param_1,param_2);
    param_1 = param_1 + 0xa8;
    param_2 = param_2 + 0xa8;
  }
  return;
}



// FUNCTION 148fc4a46 FUN_148fc4a46 body=413 status=ok
// SIG undefined FUN_148fc4a46(void)

undefined8 * FUN_148fc4a46(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
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
  param_1[2] = param_2[2];
  param_1[3] = 0;
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
  param_1[5] = 0;
  iVar1 = *(int *)(param_2 + 6);
  pvVar2 = (void *)param_2[5];
  *(int *)(param_1 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 5,iVar1,0);
    memcpy((void *)param_1[5],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  param_1[8] = 0;
  iVar1 = *(int *)(param_2 + 9);
  pvVar2 = (void *)param_2[8];
  *(int *)(param_1 + 9) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy((void *)param_1[8],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  FUN_14058acb2(param_1 + 0xb,param_2 + 0xb);
  return param_1;
}



// FUNCTION 148fc4be4 FUN_148fc4be4 body=38 status=ok
// SIG undefined FUN_148fc4be4(void)

undefined8 FUN_148fc4be4(undefined8 param_1,int param_2)

{
  FUN_148fc4c18();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fc4c18 FUN_148fc4c18 body=82 status=ok
// SIG undefined FUN_148fc4c18(void)

void FUN_148fc4c18(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba4c4d0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
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
                    /* WARNING: Could not recover jumptable at 0x000148fc4c66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148fc4c6a FUN_148fc4c6a body=450 status=ok
// SIG undefined FUN_148fc4c6a(void)

void FUN_148fc4c6a(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5 * 0x30;
        iVar6 = (**(code **)(*(longlong *)(lVar3 + lVar10) + 0x90))(lVar3 + lVar10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x2c + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x28 + lVar10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148fc4e2e FUN_148fc4e2e body=89 status=ok
// SIG undefined FUN_148fc4e2e(void)

void FUN_148fc4e2e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 8,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 3)) {
    uVar3 = uVar1 >> 3 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,8,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 148fc4e88 FUN_148fc4e88 body=48 status=ok
// SIG undefined FUN_148fc4e88(void)

void FUN_148fc4e88(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 148fc4eb8 FUN_148fc4eb8 body=48 status=ok
// SIG undefined FUN_148fc4eb8(void)

void FUN_148fc4eb8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,4);
  }
  return;
}



// FUNCTION 148fc4ee8 FUN_148fc4ee8 body=489 status=ok
// SIG undefined FUN_148fc4ee8(void)

void FUN_148fc4ee8(longlong *param_1)

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
        lVar8 = (longlong)iVar12 * 0x38;
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
        *(int *)(lVar4 + lVar8 + 0x34) = iVar7;
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)(lVar4 + lVar8 + 0x30) =
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



// FUNCTION 148fc50d2 FUN_148fc50d2 body=103 status=ok
// SIG undefined FUN_148fc50d2(void)

int FUN_148fc50d2(undefined8 *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    piVar2 = (int *)*param_1;
    lVar4 = (longlong)*(int *)(param_1 + 1) << 3;
    iVar3 = 0;
    do {
      if ((*piVar2 == *param_2) && (piVar2[1] == param_2[1])) {
        return iVar3;
      }
      cVar1 = FUN_144729dda(piVar2);
      if ((cVar1 == '\0') && (cVar1 = FUN_144729dda(param_2), cVar1 == '\0')) {
        return iVar3;
      }
      piVar2 = piVar2 + 2;
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  return -1;
}



// FUNCTION 148fc513a FUN_148fc513a body=62 status=ok
// SIG undefined FUN_148fc513a(void)

void FUN_148fc513a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148fc5178(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 148fc5178 FUN_148fc5178 body=93 status=ok
// SIG undefined FUN_148fc5178(void)

ulonglong FUN_148fc5178(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,4);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 148fc51d6 FUN_148fc51d6 body=400 status=ok
// SIG undefined FUN_148fc51d6(void)

undefined4 * FUN_148fc51d6(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148fc5368(param_1,local_40);
  puVar2 = (undefined8 *)*param_3;
  puVar3 = (undefined4 *)param_3[1];
  *local_38 = *puVar2;
  lVar14 = puVar2[1];
  local_38[1] = lVar14;
  if (lVar14 != 0) {
    LOCK();
    *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
    UNLOCK();
  }
  uVar6 = puVar3[1];
  uVar7 = puVar3[2];
  uVar8 = puVar3[3];
  *(undefined4 *)(local_38 + 2) = *puVar3;
  *(undefined4 *)((longlong)local_38 + 0x14) = uVar6;
  *(undefined4 *)(local_38 + 3) = uVar7;
  *(undefined4 *)((longlong)local_38 + 0x1c) = uVar8;
  local_38[4] = *(undefined8 *)(puVar3 + 4);
  *(undefined8 *)(puVar3 + 4) = 0;
  *(undefined4 *)(local_38 + 5) = puVar3[6];
  *(undefined4 *)((longlong)local_38 + 0x2c) = puVar3[7];
  *(undefined8 *)(puVar3 + 6) = 0;
  *(undefined4 *)(local_38 + 6) = 0xffffffff;
  local_44 = local_40[0];
  plVar4 = (longlong *)*local_38;
  plVar5 = (longlong *)local_38[1];
  if (plVar5 == (longlong *)0x0) {
    uVar10 = (**(code **)(*plVar4 + 0x40))();
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    uVar10 = (**(code **)(*plVar4 + 0x40))();
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
  cVar9 = FUN_148fc544a(param_1,uVar10,local_38,&local_44);
  uVar6 = local_44;
  if (cVar9 == '\0') {
    uVar11 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar13 = 1;
    if (3 < uVar11) {
      uVar12 = (ulonglong)(uVar11 & 0xfffffffe) + 0xf;
      lVar14 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar13 = 1 << ((byte)lVar14 & 0x1f);
    }
    if (((int)uVar11 < 1) || (iVar13 <= *(int *)(param_1 + 0x48))) {
      uVar10 = *(int *)(param_1 + 0x48) - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x34) = uVar10;
      lVar14 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar14 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 6) =
           *(undefined4 *)
            (lVar14 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar10) * 4);
      lVar14 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar14 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar14 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar10) * 4) = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar13;
      FUN_148fc4ee8(param_1);
    }
  }
  *param_2 = uVar6;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fc5368 FUN_148fc5368 body=226 status=ok
// SIG undefined FUN_148fc5368(void)

int * FUN_148fc5368(longlong *param_1,int *param_2)

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
      FUN_1447030e2(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x38);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x38) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x38 + *param_1;
  return param_2;
}



// FUNCTION 148fc544a FUN_148fc544a body=256 status=ok
// SIG undefined FUN_148fc544a(void)

undefined8 FUN_148fc544a(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  undefined8 uVar18;
  longlong lVar19;
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
      iVar17 = FUN_148fc554c(param_1,param_2,&local_48);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      iVar17 = FUN_148fc554c(param_1);
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
    if (iVar17 != -1) {
      lVar5 = *param_1;
      lVar19 = (longlong)iVar17 * 0x38;
      FUN_148fbf028(lVar5 + lVar19);
      uVar6 = *(undefined4 *)param_3;
      uVar7 = *(undefined4 *)((longlong)param_3 + 4);
      uVar8 = *(undefined4 *)(param_3 + 1);
      uVar9 = *(undefined4 *)((longlong)param_3 + 0xc);
      uVar10 = *(undefined4 *)(param_3 + 2);
      uVar11 = *(undefined4 *)((longlong)param_3 + 0x14);
      uVar12 = *(undefined4 *)(param_3 + 3);
      uVar13 = *(undefined4 *)((longlong)param_3 + 0x1c);
      uVar14 = *(undefined4 *)((longlong)param_3 + 0x24);
      uVar15 = *(undefined4 *)(param_3 + 5);
      uVar16 = *(undefined4 *)((longlong)param_3 + 0x2c);
      puVar3 = (undefined4 *)(lVar5 + 0x20 + lVar19);
      *puVar3 = *(undefined4 *)(param_3 + 4);
      puVar3[1] = uVar14;
      puVar3[2] = uVar15;
      puVar3[3] = uVar16;
      puVar3 = (undefined4 *)(lVar5 + 0x10 + lVar19);
      *puVar3 = uVar10;
      puVar3[1] = uVar11;
      puVar3[2] = uVar12;
      puVar3[3] = uVar13;
      puVar3 = (undefined4 *)(lVar5 + lVar19);
      *puVar3 = uVar6;
      puVar3[1] = uVar7;
      puVar3[2] = uVar8;
      puVar3[3] = uVar9;
      FUN_148fc5608(param_1,*param_4);
      *param_4 = iVar17;
      uVar18 = 1;
      goto LAB_148fc5472;
    }
  }
  uVar18 = 0;
LAB_148fc5472:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fc554c FUN_148fc554c body=188 status=ok
// SIG undefined FUN_148fc554c(void)

int FUN_148fc554c(longlong *param_1,uint param_2,longlong *param_3)

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
        lVar8 = (longlong)iVar3 * 0x38;
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
        iVar3 = *(int *)(lVar7 + 0x30 + lVar8);
      } while (iVar3 != -1);
    }
  }
  return -1;
}



// FUNCTION 148fc5608 FUN_148fc5608 body=116 status=ok
// SIG undefined FUN_148fc5608(void)

void FUN_148fc5608(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 148fc567c FUN_148fc567c body=133 status=ok
// SIG undefined FUN_148fc567c(void)

longlong FUN_148fc567c(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_148fc554c();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x38;
    if (lVar3 + lVar2 != 0) goto LAB_148fc56b5;
  }
  local_30 = param_3;
  FUN_148fc5702(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 * 0x38;
LAB_148fc56b5:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fc5702 FUN_148fc5702 body=272 status=ok
// SIG undefined FUN_148fc5702(void)

undefined4 * FUN_148fc5702(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148fc5368(param_1,local_48);
  FUN_148fc5814(param_4,local_40);
  *(undefined4 *)(local_40 + 0x30) = 0xffffffff;
  cVar1 = FUN_148fc544a(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x34) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x30) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
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
      FUN_148fc4ee8(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fc5814 FUN_148fc5814 body=151 status=ok
// SIG undefined FUN_148fc5814(void)

undefined8 * FUN_148fc5814(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  double dVar3;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  QueryPerformanceCounter(&local_28);
  dVar3 = DAT_14c83f420;
  puVar1 = (undefined8 *)*param_1;
  *param_2 = *puVar1;
  lVar2 = puVar1[1];
  param_2[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  param_2[2] = 0;
  param_2[3] = (double)local_28.QuadPart * dVar3 + 16777216.0;
  param_2[4] = 0;
  param_2[5] = 0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fc58ac FUN_148fc58ac body=95 status=ok
// SIG undefined FUN_148fc58ac(void)

void FUN_148fc58ac(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x2c + (longlong)param_2 * 0x30);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x28 + lVar5 * 0x30);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x30 + 0x28);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x30 + 0x28);
  FUN_148fc590c();
  return;
}



// FUNCTION 148fc590c FUN_148fc590c body=93 status=ok
// SIG undefined FUN_148fc590c(void)

void FUN_148fc590c(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *param_1;
  *(undefined ***)(lVar3 + (longlong)param_2 * 0x30) = &PTR_FUN_14ba46fd0;
  plVar4 = *(longlong **)(lVar3 + 0x10 + (longlong)param_2 * 0x30);
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
  FUN_148fc596a(param_1,param_2);
  return;
}



// FUNCTION 148fc596a FUN_148fc596a body=122 status=ok
// SIG undefined FUN_148fc596a(void)

void FUN_148fc596a(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x30) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30 + 4) = uVar4;
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



// FUNCTION 148fc59e4 FUN_148fc59e4 body=338 status=ok
// SIG undefined FUN_148fc59e4(void)

undefined4 * FUN_148fc59e4(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  undefined **ppuVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148fc5b38(param_1,local_40);
  lVar10 = *param_3;
  puVar1 = (undefined8 *)param_3[1];
  ppuVar7 = &PTR_FUN_14ba46fd0;
  *local_38 = &PTR_FUN_14ba46fd0;
  local_38[1] = *(undefined8 *)(lVar10 + 8);
  lVar2 = *(longlong *)(lVar10 + 0x10);
  local_38[2] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
    ppuVar7 = (undefined **)*local_38;
  }
  *(undefined4 *)(local_38 + 3) = *(undefined4 *)(lVar10 + 0x18);
  local_38[4] = *puVar1;
  *(undefined4 *)(local_38 + 5) = 0xffffffff;
  local_44 = local_40[0];
  uVar5 = (*(code *)ppuVar7[0x12])(local_38);
  cVar4 = FUN_148fc5c26(param_1,uVar5,local_38,&local_44);
  uVar3 = local_44;
  if (cVar4 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      *(uint *)((longlong)local_38 + 0x2c) = uVar5;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 5) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_148fc4c6a(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fc5b38 FUN_148fc5b38 body=238 status=ok
// SIG undefined FUN_148fc5b38(void)

int * FUN_148fc5b38(longlong *param_1,int *param_2)

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
      FUN_140044672(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x30);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x30) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x30 + *param_1;
  return param_2;
}



// FUNCTION 148fc5c26 FUN_148fc5c26 body=172 status=ok
// SIG undefined FUN_148fc5c26(void)

undefined8 FUN_148fc5c26(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  longlong lVar15;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar14 = FUN_148fc5cd2(), iVar14 != -1)) {
    lVar4 = *param_1;
    lVar15 = (longlong)iVar14 * 0x30;
    puVar3 = (undefined4 *)(lVar4 + lVar15);
    *(undefined ***)(lVar4 + lVar15) = &PTR_FUN_14ba46fd0;
    plVar5 = *(longlong **)(lVar4 + 0x10 + lVar15);
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
    uVar6 = *param_3;
    uVar7 = param_3[1];
    uVar8 = param_3[2];
    uVar9 = param_3[3];
    uVar10 = param_3[4];
    uVar11 = param_3[5];
    uVar12 = param_3[6];
    uVar13 = param_3[7];
    *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(param_3 + 8);
    puVar3[4] = uVar10;
    puVar3[5] = uVar11;
    puVar3[6] = uVar12;
    puVar3[7] = uVar13;
    *puVar3 = uVar6;
    puVar3[1] = uVar7;
    puVar3[2] = uVar8;
    puVar3[3] = uVar9;
    FUN_148fc596a(param_1,*param_4);
    *param_4 = iVar14;
    return 1;
  }
  return 0;
}



// FUNCTION 148fc5cd2 FUN_148fc5cd2 body=131 status=ok
// SIG undefined FUN_148fc5cd2(void)

int FUN_148fc5cd2(longlong *param_1,uint param_2,longlong param_3)

{
  int iVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar5 = *param_1;
      do {
        lVar6 = (longlong)iVar1 * 0x30;
        puVar2 = *(undefined8 **)(lVar5 + 8 + lVar6);
        cVar3 = (**(code **)*puVar2)(puVar2,*(undefined8 *)(param_3 + 8));
        if ((cVar3 != '\0') && (*(int *)(lVar5 + 0x18 + lVar6) == *(int *)(param_3 + 0x18))) {
          return iVar1;
        }
        lVar5 = *param_1;
        iVar1 = *(int *)(lVar5 + 0x28 + lVar6);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 148fc5d56 FUN_148fc5d56 body=272 status=ok
// SIG undefined FUN_148fc5d56(void)

void FUN_148fc5d56(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined4 *puVar10;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar6 = (**(code **)(*(longlong *)*param_2 + 0x40))();
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    uVar8 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
    iVar6 = *(int *)((longlong)plVar7 + uVar8 * 4);
    if (iVar6 != -1) {
      puVar10 = (undefined4 *)((longlong)plVar7 + uVar8 * 4);
      do {
        lVar3 = *param_1;
        lVar9 = (longlong)iVar6 * 0x38;
        puVar4 = *(undefined8 **)(lVar3 + lVar9);
        plVar7 = *(longlong **)(lVar3 + 8 + lVar9);
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
        }
        if (puVar4 == (undefined8 *)*param_2) {
          cVar5 = '\x01';
        }
        else {
          cVar5 = (**(code **)*puVar4)();
        }
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
        if (cVar5 != '\0') {
          FUN_148fc5e66(param_1,*puVar10);
          break;
        }
        iVar6 = *(int *)(lVar3 + lVar9 + 0x30);
        puVar10 = (undefined4 *)(lVar3 + lVar9 + 0x30);
      } while (iVar6 != -1);
    }
  }
  plVar7 = (longlong *)param_2[1];
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
                    /* WARNING: Could not recover jumptable at 0x000148fc5da0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x10))(plVar7);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148fc5e66 FUN_148fc5e66 body=113 status=ok
// SIG undefined FUN_148fc5e66(void)

void FUN_148fc5e66(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar3 = (longlong)param_2 * 0x38;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x34 + lVar3);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x30 + lVar6 * 0x38);
    } while (iVar4 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar6 * 0x38 + 0x30);
  }
  *puVar2 = *(undefined4 *)(lVar1 + lVar3 + 0x30);
  FUN_148fbf028(lVar3 + *param_1);
  FUN_148fc5608(param_1,param_2);
  return;
}



// FUNCTION 148fc5eec FUN_148fc5eec body=92 status=ok
// SIG undefined FUN_148fc5eec(void)

void FUN_148fc5eec(longlong param_1)

{
  int iVar1;
  float fVar2;
  
  if (*(char *)(param_1 + 0x398) == '\x01') {
    *(int *)(param_1 + 0x390) = *(int *)(param_1 + 0x390) + 1;
  }
  if (*(char *)(param_1 + 0x399) == '\x01') {
    fVar2 = 0.0;
    if ((0.0 < *(float *)(param_1 + 0x3a0)) && (0.0 < *(float *)(param_1 + 0x3a4))) {
      do {
        fVar2 = fVar2 + *(float *)(param_1 + 0x3a0);
      } while (fVar2 < *(float *)(param_1 + 0x3a4));
      *(float *)(param_1 + 0x39c) = fVar2;
    }
  }
  iVar1 = DAT_14cbf4fb8 + 1;
  *(int *)(param_1 + 0x394) = DAT_14cbf4fb8;
  DAT_14cbf4fb8 = iVar1;
  return;
}



// FUNCTION 148fc5f4e FUN_148fc5f4e body=26 status=ok
// SIG undefined FUN_148fc5f4e(void)

void FUN_148fc5f4e(undefined8 param_1)

{
  FUN_1448e423c();
  FUN_148fc5eec(param_1);
  return;
}



// FUNCTION 148fc5f68 FUN_148fc5f68 body=36 status=ok
// SIG undefined FUN_148fc5f68(void)

undefined8 FUN_148fc5f68(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 148fc5fa8 FUN_148fc5fa8 body=93 status=ok
// SIG undefined FUN_148fc5fa8(void)

void FUN_148fc5fa8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba4d160;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148fc6006 FUN_148fc6006 body=123 status=ok
// SIG undefined FUN_148fc6006(void)

void FUN_148fc6006(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba4d160;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148fc6082 FUN_148fc6082 body=21 status=ok
// SIG undefined FUN_148fc6082(void)

undefined8 FUN_148fc6082(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148fc6098 FUN_148fc6098 body=91 status=ok
// SIG undefined FUN_148fc6098(void)

void FUN_148fc6098(longlong *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cbf5008);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fc60f4 FUN_148fc60f4 body=155 status=ok
// SIG undefined FUN_148fc60f4(void)

void FUN_148fc60f4(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x678))(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fc6190 FUN_148fc6190 body=119 status=ok
// SIG undefined FUN_148fc6190(void)

void FUN_148fc6190(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a787a6(local_28);
  uVar1 = FUN_14477b072(param_1,DAT_14cbf5018);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fc6208 FUN_148fc6208 body=216 status=ok
// SIG undefined FUN_148fc6208(void)

void FUN_148fc6208(longlong *param_1,longlong param_2)

{
  char cVar1;
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
  cVar1 = (**(code **)(*param_1 + 0x680))(param_1,local_28);
  if (cVar1 == '\0') {
    FUN_1468998ea(L"ServerQosRequest_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x688))(param_1,local_28);
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fc62ec FUN_148fc62ec body=87 status=ok
// SIG undefined FUN_148fc62ec(void)

void FUN_148fc62ec(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_148a39a16();
  if (lVar1 != 0) {
    lVar2 = FUN_145b9be26();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_1443b8f56(lVar1,param_1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 148fc6348 FUN_148fc6348 body=387 status=ok
// SIG undefined FUN_148fc6348(void)

ulonglong FUN_148fc6348(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined7 uVar10;
  ulonglong uVar9;
  uint uVar11;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  longlong *local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1447210f0();
  local_48 = 0;
  plVar7 = (longlong *)FUN_1401e3228();
  if (plVar7 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar7 + 0x20))(plVar7,&local_38);
    if (local_38 != (longlong *)0x0) {
      lVar8 = (**(code **)(*local_38 + 0x20))(local_38,*(undefined8 *)(param_1 + 0x3b8));
      if (((lVar8 != 0) && (*(longlong **)(lVar8 + 0x100) != (longlong *)0x0)) &&
         (1 < (int)param_2[1])) {
        plVar7 = (longlong *)(**(code **)(**(longlong **)(lVar8 + 0x100) + 0x38))();
        (**(code **)(*plVar7 + 0x30))(plVar7,&local_48);
        uVar10 = (undefined7)((ulonglong)&local_48 >> 8);
        if (local_40 == (int)param_2[1]) {
          uVar9 = CONCAT71(uVar10,1);
          if (1 < local_40) {
            lVar8 = 0;
            while( true ) {
              uVar3 = *(ushort *)(local_48 + lVar8);
              uVar5 = (uint)uVar3;
              uVar4 = *(ushort *)(*param_2 + lVar8);
              uVar11 = (uint)uVar4;
              if (uVar3 != uVar4) {
                if ((uVar4 | uVar3) < 0x80) {
                  uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                  uVar11 = (uint)(byte)(&DAT_149e05da0)[uVar4];
                  if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4]) goto LAB_148fc642d;
                }
                iVar6 = uVar5 - uVar11;
                goto LAB_148fc64c4;
              }
              if (uVar3 == 0) break;
LAB_148fc642d:
              lVar8 = lVar8 + 2;
            }
            iVar6 = 0;
LAB_148fc64c4:
            uVar9 = CONCAT71(uVar10,iVar6 == 0);
          }
        }
        else {
          uVar9 = CONCAT71(uVar10,(int)param_2[1] + local_40 == 1);
        }
        if (local_48 != 0) {
          FUN_1400020a8();
        }
        goto LAB_148fc6460;
      }
    }
  }
  uVar9 = 0;
LAB_148fc6460:
  plVar7 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar9 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fc64dc FUN_148fc64dc body=124 status=ok
// SIG undefined FUN_148fc64dc(void)

void FUN_148fc64dc(longlong param_1,undefined8 *param_2)

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
  plVar5 = *(longlong **)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  *(longlong *)(param_1 + 0x68) = lVar4;
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
                    /* WARNING: Could not recover jumptable at 0x000148fc654c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148fc6558 FUN_148fc6558 body=236 status=ok
// SIG undefined FUN_148fc6558(void)

void FUN_148fc6558(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  
  if (*(longlong *)(param_1 + 0x60) == 0) {
    return;
  }
  puVar4 = (undefined8 *)FUN_14494321d(0x88);
  *puVar4 = &PTR_FUN_14ba501b8;
  *(undefined4 *)(puVar4 + 1) = 2;
  puVar4[2] = 0;
  puVar4[3] = 0;
  *(undefined1 *)(puVar4 + 4) = 4;
  puVar4[5] = 0;
  *(undefined1 *)(puVar4 + 6) = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  puVar4[0xc] = 0;
  puVar4[0xd] = 0;
  puVar4[0xe] = 0;
  *(undefined8 *)((longlong)puVar4 + 0x71) = 0;
  *(undefined8 *)((longlong)puVar4 + 0x79) = 0;
  plVar5 = (longlong *)FUN_14494321d(0x18);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14ba50ce0;
  plVar5[2] = (longlong)puVar4;
  *(undefined8 **)(param_1 + 0x70) = puVar4;
  plVar3 = *(longlong **)(param_1 + 0x78);
  if (plVar5 == plVar3) {
    if (plVar5 == (longlong *)0x0) goto LAB_148fc6634;
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_148fc6634;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  else {
    *(longlong **)(param_1 + 0x78) = plVar5;
    if (plVar3 == (longlong *)0x0) goto LAB_148fc6634;
    LOCK();
    plVar5 = plVar3 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_148fc6634;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar5 = plVar3;
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
LAB_148fc6634:
  FUN_148fc692c(*(undefined8 *)(param_1 + 0x70));
  return;
}



// FUNCTION 148fc6644 FUN_148fc6644 body=68 status=ok
// SIG undefined FUN_148fc6644(void)

void FUN_148fc6644(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_145cb3ce0(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_148fcad00(param_1,param_2);
  return;
}



// FUNCTION 148fc668a FUN_148fc668a body=208 status=ok
// SIG undefined FUN_148fc668a(void)

void FUN_148fc668a(longlong param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  if (*(char *)(param_1 + 0x80) == '\x01') {
    iVar2 = *(int *)(param_1 + 0x40);
    *(uint *)(param_1 + 0x40) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x44) < iVar2 + 1U) {
      FUN_148fcc4ba((longlong *)(param_1 + 0x38),iVar2);
    }
    lVar4 = *(longlong *)(param_1 + 0x38);
    puVar1 = (undefined8 *)(lVar4 + (longlong)iVar2 * 0x38);
    puVar3 = puVar1 + 1;
    *puVar1 = &PTR_FUN_14ba50be0;
    FUN_140056680(puVar3,L"Unknown");
    lVar4 = lVar4 + (longlong)iVar2 * 0x38;
    FUN_140056680(lVar4 + 0x18,L"Unknown");
    *(undefined8 *)(lVar4 + 0x28) = 0x270f00000000;
    *(undefined1 *)(lVar4 + 0x30) = 0;
    FUN_144a787a6(puVar3,param_2);
    FUN_144a787a6(lVar4 + 0x18,param_2 + 0x10);
    *(undefined4 *)(lVar4 + 0x2c) = *(undefined4 *)(param_2 + 0x3c);
    *(undefined1 *)(lVar4 + 0x30) = *(undefined1 *)(param_2 + 0x60);
    *(undefined4 *)(lVar4 + 0x28) = param_3;
  }
  return;
}



// FUNCTION 148fc675a FUN_148fc675a body=197 status=ok
// SIG undefined FUN_148fc675a(void)

longlong FUN_148fc675a(longlong *param_1,longlong *param_2,int param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ushort uVar5;
  ulonglong uVar6;
  ushort uVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar3 = *param_1;
    lVar4 = (longlong)(int)param_1[1] * 0x68 + lVar3;
    iVar2 = (int)param_2[1];
    do {
      if ((longlong)*(int *)(lVar3 + 0x30) != 0) {
        plVar8 = *(longlong **)(lVar3 + 0x28);
        plVar1 = plVar8 + (longlong)*(int *)(lVar3 + 0x30) * 3;
        do {
          if ((int)plVar8[1] == iVar2) {
            if (1 < iVar2) {
              lVar9 = 0;
              while( true ) {
                uVar5 = *(ushort *)(*plVar8 + lVar9);
                uVar6 = (ulonglong)uVar5;
                uVar7 = *(ushort *)(*param_2 + lVar9);
                if (uVar5 != uVar7) break;
                if (uVar5 == 0) goto LAB_148fc67f8;
LAB_148fc67c4:
                lVar9 = lVar9 + 2;
              }
              if ((uVar7 | uVar5) < 0x80) {
                uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
                uVar10 = (ulonglong)uVar7;
                uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
                if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar10]) goto LAB_148fc67c4;
              }
              if (uVar5 != uVar7) goto LAB_148fc67fe;
            }
LAB_148fc67f8:
            if ((int)plVar8[2] == param_3) {
              return lVar3;
            }
          }
          else if ((int)plVar8[1] + iVar2 == 1) goto LAB_148fc67f8;
LAB_148fc67fe:
          plVar8 = plVar8 + 3;
        } while (plVar8 != plVar1);
      }
      lVar3 = lVar3 + 0x68;
    } while (lVar3 != lVar4);
  }
  return 0;
}



// FUNCTION 148fc6820 FUN_148fc6820 body=154 status=ok
// SIG undefined FUN_148fc6820(void)

void FUN_148fc6820(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  byte param_5)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 0x80) == '\x01') {
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + (uint)param_5;
    iVar2 = *(int *)(param_1 + 0x78);
    *(uint *)(param_1 + 0x78) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x7c) < iVar2 + 1U) {
      FUN_148fcc54a((longlong *)(param_1 + 0x70),iVar2);
    }
    lVar3 = *(longlong *)(param_1 + 0x70);
    puVar1 = (undefined8 *)(lVar3 + (longlong)iVar2 * 0x28);
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1d) = 0;
    FUN_144a787a6(lVar3 + (longlong)iVar2 * 0x28,param_3);
    *(undefined4 *)(puVar1 + 4) = param_4;
    FUN_144a787a6(puVar1 + 2,param_2);
    *(undefined1 *)((longlong)puVar1 + 0x24) = 1;
  }
  return;
}



// FUNCTION 148fc68ba FUN_148fc68ba body=113 status=ok
// SIG undefined FUN_148fc68ba(void)

void FUN_148fc68ba(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_148fc6a0e(*(longlong *)(param_1 + 0x70),(param_2 == '\x02') << 2);
    FUN_148fc6a9a(*(undefined8 *)(param_1 + 0x70),param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x70) = 0;
    plVar3 = *(longlong **)(param_1 + 0x78);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x78) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000148fc6927. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 148fc692c FUN_148fc692c body=224 status=ok
// SIG undefined FUN_148fc692c(void)

void FUN_148fc692c(longlong param_1)

{
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x80) == '\0') {
    FUN_140212f8e(local_28);
    FUN_14170a840(local_28,&local_38);
    if ((LARGE_INTEGER *)(param_1 + 0x10) == &local_38) {
      if (local_38.QuadPart != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x10) != 0) {
        FUN_1400020a8();
      }
      ((LARGE_INTEGER *)(param_1 + 0x10))->QuadPart = (LONGLONG)local_38;
      local_38.QuadPart = 0;
      *(undefined4 *)(param_1 + 0x18) = local_30;
      *(undefined4 *)(param_1 + 0x1c) = local_2c;
    }
    QueryPerformanceCounter(&local_38);
    *(double *)(param_1 + 0x28) = (double)local_38.QuadPart * DAT_14c83f420 + 16777216.0;
    *(undefined1 *)(param_1 + 0x30) = 1;
    *(undefined1 *)(param_1 + 0x80) = 1;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fc6a0e FUN_148fc6a0e body=139 status=ok
// SIG undefined FUN_148fc6a0e(void)

void FUN_148fc6a0e(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x80) == '\x01') {
    if (*(char *)(param_1 + 0x30) == '\x01') {
      QueryPerformanceCounter(&local_28);
      *(double *)(param_1 + 0x28) =
           (((double)local_28.QuadPart * DAT_14c83f420 + 16777216.0) - *(double *)(param_1 + 0x28))
           * 1000.0;
      *(undefined1 *)(param_1 + 0x30) = 0;
    }
    *(undefined1 *)(param_1 + 0x80) = 0;
    *(undefined1 *)(param_1 + 0x20) = param_2;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fc6a9a FUN_148fc6a9a body=172 status=ok
// SIG undefined FUN_148fc6a9a(void)

void FUN_148fc6a9a(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x80) == '\x01') {
    if (*(char *)(param_1 + 0x30) == '\x01') {
      QueryPerformanceCounter(&local_38);
      *(double *)(param_1 + 0x28) =
           (((double)local_38.QuadPart * DAT_14c83f420 + 16777216.0) - *(double *)(param_1 + 0x28))
           * 1000.0;
      *(undefined1 *)(param_1 + 0x30) = 0;
    }
    *(undefined1 *)(param_1 + 0x80) = 0;
  }
  local_38.QuadPart = 0;
  uStack_30 = 0;
  CoCreateGuid((GUID *)&local_38.s);
  FUN_148fc7b44(param_1,param_2,&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fc6b52 FUN_148fc6b52 body=407 status=ok
// SIG undefined FUN_148fc6b52(void)

longlong * FUN_148fc6b52(longlong *param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_88 [40];
  void *local_60;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar2 = *(int *)(param_2 + 0x30);
  if (iVar2 < 1) {
    iVar8 = 0;
  }
  else {
    uVar5 = rand();
    iVar6 = (int)((float)iVar2 * ((float)(uVar5 & 0x7fff) / 32767.0));
    iVar8 = iVar2 + -1;
    if (iVar6 < iVar2 + -1) {
      iVar8 = iVar6;
    }
  }
  if (0 < param_3) {
    do {
      lVar9 = *(longlong *)(param_2 + 0x28);
      lVar7 = (longlong)(iVar8 % iVar2);
      uVar3 = *(undefined4 *)(lVar9 + 0x10 + lVar7 * 0x18);
      local_60 = (void *)0x0;
      local_58 = *(int *)(lVar9 + 8 + lVar7 * 0x18);
      lVar10 = (longlong)local_58;
      pvVar4 = *(void **)(lVar9 + lVar7 * 0x18);
      if (lVar10 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,pvVar4,lVar10 * 2);
      }
      iVar6 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar6 + 1U;
      local_50 = uVar3;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar6 + 1U) {
        FUN_148fcaeb6(param_1,iVar6);
      }
      pvVar4 = local_60;
      puVar1 = (undefined8 *)(*param_1 + (longlong)iVar6 * 0x18);
      *puVar1 = 0;
      lVar9 = (longlong)local_58;
      *(int *)(puVar1 + 1) = local_58;
      if (lVar9 == 0) {
        *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar1,local_58,0);
        memcpy((void *)*puVar1,pvVar4,lVar9 * 2);
      }
      *(undefined4 *)(puVar1 + 2) = local_50;
      if (local_60 != (void *)0x0) {
        FUN_1400020a8();
      }
      iVar8 = iVar8 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148fc6cea FUN_148fc6cea body=423 status=ok
// SIG undefined FUN_148fc6cea(void)

longlong * FUN_148fc6cea(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 != 0) goto LAB_148fc6d02;
  puVar4 = (undefined8 *)FUN_14494321d(0x28);
  puVar4[2] = 0;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_149e668b0;
  *(undefined2 *)(puVar4 + 1) = 0;
  FUN_1405bceb4(puVar4);
  *puVar4 = &PTR_FUN_14ba4e880;
  puVar4[4] = 0;
  plVar5 = (longlong *)FUN_14494321d(0x18);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14ba50e50;
  plVar5[2] = (longlong)puVar4;
  if ((puVar4 != (undefined8 *)0x0) &&
     (((puVar4[2] == 0 || (puVar4[3] == 0)) || (*(int *)(puVar4[3] + 8) < 1)))) {
    if (plVar5 == (longlong *)0x0) {
      puVar4[2] = puVar4;
      plVar6 = (longlong *)puVar4[3];
      if (plVar6 != (longlong *)0x0) {
LAB_148fc6df1:
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
        puVar4[3] = plVar5;
        if (plVar5 != (longlong *)0x0) goto LAB_148fc6e50;
      }
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      puVar4[2] = puVar4;
      if ((longlong *)puVar4[3] != plVar5) {
        LOCK();
        *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
        UNLOCK();
        plVar6 = (longlong *)puVar4[3];
        if (plVar6 != (longlong *)0x0) goto LAB_148fc6df1;
        puVar4[3] = plVar5;
      }
LAB_148fc6e50:
      LOCK();
      plVar6 = plVar5 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
  *(undefined8 **)(param_1 + 0x10) = puVar4;
  plVar6 = *(longlong **)(param_1 + 0x18);
  if (plVar5 == plVar6) {
    if (plVar5 != (longlong *)0x0) {
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
joined_r0x000148fc6e25:
        if (iVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  else {
    *(longlong **)(param_1 + 0x18) = plVar5;
    if (plVar6 != (longlong *)0x0) {
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
        plVar5 = plVar6;
        goto joined_r0x000148fc6e25;
      }
    }
  }
  FUN_148fc6e92(*(undefined8 *)(param_1 + 0x10));
  lVar3 = *(longlong *)(param_1 + 0x10);
LAB_148fc6d02:
  *param_2 = lVar3;
  lVar3 = *(longlong *)(param_1 + 0x18);
  param_2[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 148fc6e92 FUN_148fc6e92 body=59 status=ok
// SIG undefined FUN_148fc6e92(void)

void FUN_148fc6e92(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_148fc6ecd(DAT_14c951640);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  *(longlong *)(param_1 + 0x20) = lVar1;
  return;
}



// FUNCTION 148fc6ecd FUN_148fc6ecd body=148 status=ok
// SIG undefined FUN_148fc6ecd(void)

undefined8 FUN_148fc6ecd(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145b136e4();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fc6f8a FUN_148fc6f8a body=179 status=ok
// SIG undefined FUN_148fc6f8a(void)

void FUN_148fc6f8a(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  ushort uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ushort uVar8;
  ulonglong uVar9;
  
  plVar3 = (longlong *)FUN_1443b9ea6();
  if ((longlong)(int)plVar3[1] == 0) {
    return;
  }
  lVar4 = *plVar3;
  lVar1 = lVar4 + (longlong)(int)plVar3[1] * 0x48;
  iVar2 = (int)param_2[1];
LAB_148fc6fbe:
  if (*(int *)(lVar4 + 0x18) == iVar2) {
    if (1 < iVar2) {
      lVar7 = 0;
      do {
        uVar8 = *(ushort *)(*(longlong *)(lVar4 + 0x10) + lVar7);
        uVar9 = (ulonglong)uVar8;
        uVar5 = *(ushort *)(*param_2 + lVar7);
        if (uVar8 == uVar5) {
          if (uVar8 == 0) break;
        }
        else {
          if (0x7f < (uVar5 | uVar8)) goto LAB_148fc7025;
          uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
          uVar6 = (ulonglong)uVar5;
          uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
          if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar6]) goto LAB_148fc7025;
        }
        lVar7 = lVar7 + 2;
      } while( true );
    }
    goto LAB_148fc702d;
  }
  if (*(int *)(lVar4 + 0x18) + iVar2 == 1) goto LAB_148fc702d;
  goto LAB_148fc7013;
LAB_148fc7025:
  if (uVar8 == uVar5) {
LAB_148fc702d:
    FUN_148fc724e(lVar4,param_3);
    return;
  }
LAB_148fc7013:
  lVar4 = lVar4 + 0x48;
  if (lVar4 == lVar1) {
    return;
  }
  goto LAB_148fc6fbe;
}



// FUNCTION 148fc7040 FUN_148fc7040 body=96 status=ok
// SIG undefined FUN_148fc7040(void)

void FUN_148fc7040(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    if (plVar3 == (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x10) = 0;
      return;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000148fc7092. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))(plVar3);
      return;
    }
  }
  return;
}



// FUNCTION 148fc70d6 FUN_148fc70d6 body=239 status=ok
// SIG undefined FUN_148fc70d6(void)

bool FUN_148fc70d6(longlong param_1,longlong param_2,undefined8 param_3,wchar_t *param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  longlong lVar5;
  
  if (param_4 != (wchar_t *)0x0) {
    sVar4 = wcslen(param_4);
    iVar2 = FUN_1447ee042(param_1,param_4,sVar4 & 0xffffffff,1,0,0xffffffff);
    sVar4 = wcslen(param_4);
    iVar3 = FUN_1447ee042(param_2,param_4,sVar4 & 0xffffffff,1,0,0xffffffff);
    if ((iVar3 != -1) != (iVar2 != -1)) {
      sVar4 = wcslen(param_4);
      iVar2 = FUN_1447ee042(param_1,param_4,sVar4 & 0xffffffff,1,0,0xffffffff);
      lVar5 = param_1;
      if (iVar2 != -1) {
        lVar5 = param_2;
        param_2 = param_1;
      }
      bVar1 = FUN_148fc71c6(lVar5,param_2,param_3);
      return (bool)(bVar1 ^ iVar2 != -1);
    }
  }
  return *(int *)(param_1 + 0x3c) < *(int *)(param_2 + 0x3c);
}



// FUNCTION 148fc71c6 FUN_148fc71c6 body=136 status=ok
// SIG undefined FUN_148fc71c6(void)

ulonglong FUN_148fc71c6(longlong param_1,longlong param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 in_RAX;
  ulonglong uVar3;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  iVar2 = *(int *)(param_2 + 0x3c);
  uVar3 = CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
  if (iVar2 <= iVar1) {
    if (((*param_3 < 1 || iVar1 <= *param_3) && (param_3[1] < 1 || param_3[1] <= iVar2)) &&
       (param_3[2] < 1 || iVar1 - iVar2 <= param_3[2])) {
      uVar3 = (ulonglong)
              -(uint)((float)param_3[3] <= 0.0 ||
                     (float)(iVar1 - iVar2) <= (float)iVar1 * (float)param_3[3] * 0.01);
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3 & 0xffffffffffffff01;
}



// FUNCTION 148fc724e FUN_148fc724e body=168 status=ok
// SIG undefined FUN_148fc724e(void)

void FUN_148fc724e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  void *_Src;
  longlong lVar6;
  longlong lVar7;
  
  iVar2 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar2 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x38);
    lVar6 = 0;
    do {
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_1447a1bd6(param_2,iVar3);
      }
      lVar5 = *param_2;
      lVar7 = (longlong)iVar3 * 0x10;
      puVar1 = (undefined8 *)(lVar5 + lVar7);
      *(undefined8 *)(lVar5 + lVar7) = 0;
      iVar3 = *(int *)(lVar4 + 8 + lVar6);
      _Src = *(void **)(lVar4 + lVar6);
      *(int *)(lVar5 + 8 + lVar7) = iVar3;
      if ((longlong)iVar3 == 0) {
        *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar1,iVar3,0);
        memcpy((void *)*puVar1,_Src,(longlong)iVar3 * 2);
      }
      lVar6 = lVar6 + 0x68;
    } while ((longlong)iVar2 * 0x68 - lVar6 != 0);
  }
  return;
}



// FUNCTION 148fc72f6 FUN_148fc72f6 body=87 status=ok
// SIG undefined FUN_148fc72f6(void)

void FUN_148fc72f6(longlong *param_1,uint param_2)

{
  int iVar1;
  void *_Dst;
  
  _Dst = (void *)((longlong)(int)param_2 * 0x48 + *param_1);
  FUN_148fc7426(_Dst);
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x48),(longlong)(int)(~param_2 + iVar1) * 0x48);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  FUN_148fcb0dc(param_1);
  return;
}



// FUNCTION 148fc734e FUN_148fc734e body=96 status=ok
// SIG undefined FUN_148fc734e(void)

longlong * FUN_148fc734e(longlong *param_1,longlong *param_2)

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
  FUN_144a787a6(param_1 + 2,param_2 + 2);
  lVar3 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = lVar3;
  *(int *)(param_1 + 6) = (int)param_2[6];
  return param_1;
}



// FUNCTION 148fc73ae FUN_148fc73ae body=120 status=ok
// SIG undefined FUN_148fc73ae(void)

int FUN_148fc73ae(longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148fcb1ea(param_1,iVar1);
  }
  lVar2 = (longlong)param_3 * 0x48;
  memmove((void *)(*param_1 + lVar2 + 0x48),(void *)(*param_1 + lVar2),
          (ulonglong)(uint)(iVar1 - param_3) * 0x48);
  FUN_148fcb18a(lVar2 + *param_1,param_2);
  return param_3;
}



// FUNCTION 148fc7426 FUN_148fc7426 body=75 status=ok
// SIG undefined FUN_148fc7426(void)

void FUN_148fc7426(longlong *param_1)

{
  FUN_145cb3ce0(param_1[7],(int)param_1[8]);
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148fc7466. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 148fc7471 FUN_148fc7471 body=148 status=ok
// SIG undefined FUN_148fc7471(void)

undefined8 FUN_148fc7471(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459d8a8a();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fc7506 FUN_148fc7506 body=68 status=ok
// SIG undefined FUN_148fc7506(void)

void FUN_148fc7506(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_145ca3d68(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_148fcb53e(param_1,param_2);
  return;
}



// FUNCTION 148fc754c FUN_148fc754c body=364 status=ok
// SIG undefined FUN_148fc754c(void)

int FUN_148fc754c(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  ushort uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  ushort uVar12;
  ulonglong uVar13;
  
  if ((int)param_1[9] != 0) {
    iVar3 = (int)param_2[1];
    if (iVar3 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    else {
      puVar6 = (undefined2 *)*param_2;
    }
    iVar4 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar4 = 0;
    }
    iVar3 = FUN_144a49b4a(iVar4,puVar6);
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar5 + ((longlong)iVar3 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar3 != -1) {
      lVar2 = *param_1;
      iVar4 = (int)param_2[1];
LAB_148fc75c2:
      lVar11 = (longlong)iVar3 * 0x80;
      iVar9 = *(int *)(lVar2 + 8 + lVar11);
      iVar3 = *(int *)(lVar2 + 0x78 + lVar11);
      if (iVar9 != iVar4) {
        if (iVar9 + iVar4 == 1) goto LAB_148fc763a;
        goto LAB_148fc7625;
      }
      if (1 < iVar4) {
        lVar10 = 0;
        do {
          uVar12 = *(ushort *)(*(longlong *)(lVar11 + lVar2) + lVar10);
          uVar13 = (ulonglong)uVar12;
          uVar7 = *(ushort *)(*param_2 + lVar10);
          if (uVar12 == uVar7) {
            if (uVar12 == 0) break;
          }
          else {
            if (0x7f < (uVar7 | uVar12)) goto LAB_148fc7632;
            uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
            uVar8 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
            if ((&DAT_149e05da0)[uVar13] != (&DAT_149e05da0)[uVar8]) goto LAB_148fc7632;
          }
          lVar10 = lVar10 + 2;
        } while( true );
      }
      goto LAB_148fc763a;
    }
  }
  return 0;
LAB_148fc7632:
  if (uVar12 == uVar7) {
LAB_148fc763a:
    iVar9 = 1;
    goto LAB_148fc763f;
  }
LAB_148fc7625:
  if (iVar3 == -1) {
    return 0;
  }
  goto LAB_148fc75c2;
LAB_148fc763f:
  if (iVar3 == -1) {
    return iVar9;
  }
  lVar11 = (longlong)iVar3 * 0x80;
  iVar1 = *(int *)(lVar2 + 8 + lVar11);
  iVar3 = *(int *)(lVar2 + 0x78 + lVar11);
  if (iVar1 != iVar4) goto LAB_148fc76ab;
  if (1 < iVar4) {
    lVar10 = 0;
    while( true ) {
      uVar12 = *(ushort *)(*(longlong *)(lVar11 + lVar2) + lVar10);
      uVar13 = (ulonglong)uVar12;
      uVar7 = *(ushort *)(*param_2 + lVar10);
      if (uVar12 != uVar7) break;
      if (uVar12 == 0) goto LAB_148fc76b4;
LAB_148fc7680:
      lVar10 = lVar10 + 2;
    }
    if ((uVar7 | uVar12) < 0x80) {
      uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
      uVar8 = (ulonglong)uVar7;
      uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
      if ((&DAT_149e05da0)[uVar13] == (&DAT_149e05da0)[uVar8]) goto LAB_148fc7680;
    }
    if (uVar12 != uVar7) goto LAB_148fc763f;
  }
  goto LAB_148fc76b4;
LAB_148fc76ab:
  if (iVar1 + iVar4 == 1) {
LAB_148fc76b4:
    iVar9 = iVar9 + 1;
  }
  goto LAB_148fc763f;
}



// FUNCTION 148fc76b8 FUN_148fc76b8 body=478 status=ok
// SIG undefined FUN_148fc76b8(void)

void FUN_148fc76b8(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  longlong lVar6;
  ushort uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ushort uVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  
  if ((int)param_1[9] != 0) {
    iVar3 = (int)param_2[1];
    if (iVar3 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = (undefined2 *)*param_2;
    }
    iVar2 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    iVar3 = FUN_144a49b4a(iVar2,puVar5);
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 + ((longlong)iVar3 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar3 != -1) {
      lVar12 = *param_1;
      iVar2 = (int)param_2[1];
LAB_148fc772f:
      lVar6 = (longlong)iVar3 * 0x80;
      iVar1 = *(int *)(lVar12 + 8 + lVar6);
      iVar13 = *(int *)(lVar12 + 0x78 + lVar6);
      if (iVar1 == iVar2) {
        if (1 < iVar2) {
          lVar9 = 0;
          do {
            uVar7 = *(ushort *)(*(longlong *)(lVar6 + lVar12) + lVar9);
            uVar8 = (ulonglong)uVar7;
            uVar10 = *(ushort *)(*param_2 + lVar9);
            if (uVar7 == uVar10) {
              if (uVar7 == 0) break;
            }
            else {
              if (0x7f < (uVar10 | uVar7)) goto LAB_148fc77b1;
              uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
              uVar11 = (ulonglong)uVar10;
              uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
              if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[uVar11]) goto LAB_148fc77b1;
            }
            lVar9 = lVar9 + 2;
          } while( true );
        }
      }
      else if (iVar1 + iVar2 != 1) goto LAB_148fc77a3;
LAB_148fc7845:
      iVar2 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
        FUN_148fcad6c(param_3,iVar2);
      }
      FUN_148fca51c((longlong)iVar2 * 0x68 + *param_3,lVar12 + (longlong)iVar3 * 0x80 + 0x10);
      if (iVar13 != -1) {
        lVar12 = *param_1;
        iVar2 = (int)param_2[1];
        iVar3 = iVar13;
LAB_148fc77ca:
        lVar6 = (longlong)iVar3 * 0x80;
        iVar1 = *(int *)(lVar12 + 8 + lVar6);
        iVar13 = *(int *)(lVar12 + 0x78 + lVar6);
        if (iVar1 == iVar2) {
          if (1 < iVar2) {
            lVar9 = 0;
            do {
              uVar7 = *(ushort *)(*(longlong *)(lVar6 + lVar12) + lVar9);
              uVar8 = (ulonglong)uVar7;
              uVar10 = *(ushort *)(*param_2 + lVar9);
              if (uVar7 == uVar10) {
                if (uVar7 == 0) break;
              }
              else {
                if (0x7f < (uVar10 | uVar7)) goto LAB_148fc783d;
                uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
                uVar11 = (ulonglong)uVar10;
                uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
                if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[uVar11]) goto LAB_148fc783d;
              }
              lVar9 = lVar9 + 2;
            } while( true );
          }
        }
        else if (iVar1 + iVar2 != 1) goto LAB_148fc7832;
        goto LAB_148fc7845;
      }
    }
  }
  return;
LAB_148fc77b1:
  if (uVar7 == uVar10) goto LAB_148fc7845;
LAB_148fc77a3:
  iVar3 = iVar13;
  if (iVar13 == -1) {
    return;
  }
  goto LAB_148fc772f;
LAB_148fc783d:
  if (uVar7 == uVar10) goto LAB_148fc7845;
LAB_148fc7832:
  iVar3 = iVar13;
  if (iVar13 == -1) {
    return;
  }
  goto LAB_148fc77ca;
}



// FUNCTION 148fc7896 FUN_148fc7896 body=116 status=ok
// SIG undefined FUN_148fc7896(void)

longlong FUN_148fc7896(longlong *param_1)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  if ((longlong)(int)param_1[1] == 0) {
    lVar4 = 0;
  }
  else {
    lVar5 = *param_1;
    lVar3 = (longlong)(int)param_1[1] * 0x48;
    lVar4 = 0;
    iVar6 = 9999;
    do {
      cVar2 = FUN_148fc790a(lVar5);
      if (cVar2 != '\0') {
        if (*(int *)(lVar5 + 0x40) < 1) {
          if (0x270e < iVar6) {
            iVar6 = 9999;
          }
        }
        else {
          iVar1 = *(int *)(*(longlong *)(lVar5 + 0x38) + 0x3c);
          if (iVar1 < iVar6) {
            lVar4 = lVar5;
            iVar6 = iVar1;
          }
        }
      }
      lVar5 = lVar5 + 0x48;
      lVar3 = lVar3 + -0x48;
    } while (lVar3 != 0);
  }
  return lVar4;
}



// FUNCTION 148fc790a FUN_148fc790a body=96 status=ok
// SIG undefined FUN_148fc790a(void)

undefined8 FUN_148fc790a(longlong param_1)

{
  char cVar1;
  byte bVar2;
  undefined8 in_RAX;
  undefined7 uVar4;
  undefined8 uVar3;
  longlong lVar5;
  longlong lVar6;
  
  uVar4 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar2 = 1;
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    lVar5 = (longlong)*(int *)(param_1 + 0x40) * 0x68;
    lVar6 = 0;
    do {
      if ((*(byte *)(*(longlong *)(param_1 + 0x38) + 0x38 + lVar6) & 0xfd) == 0) {
        lVar6 = 0;
        goto LAB_148fc793a;
      }
      lVar6 = lVar6 + 0x68;
    } while (lVar5 - lVar6 != 0);
  }
  goto LAB_148fc7956;
  while( true ) {
    if (cVar1 == '\x02') goto LAB_148fc7956;
    lVar6 = lVar6 + 0x68;
    if (lVar5 - lVar6 == 0) break;
LAB_148fc793a:
    cVar1 = *(char *)(*(longlong *)(param_1 + 0x38) + 0x38 + lVar6);
    if (cVar1 == '\0') break;
  }
  bVar2 = 0;
  uVar4 = 0;
LAB_148fc7956:
  if ((*(char *)(param_1 + 0x22) == '\x01') && (*(char *)(param_1 + 0x21) == '\x01')) {
    uVar3 = CONCAT71(uVar4,bVar2 & *(byte *)(param_1 + 0x20));
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 148fc796a FUN_148fc796a body=474 status=ok
// SIG undefined FUN_148fc796a(void)

void FUN_148fc796a(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  longlong lVar6;
  ushort uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ushort uVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  
  if ((int)param_1[9] != 0) {
    iVar3 = (int)param_2[1];
    if (iVar3 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = (undefined2 *)*param_2;
    }
    iVar2 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    iVar3 = FUN_144a49b4a(iVar2,puVar5);
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 + ((longlong)iVar3 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar3 != -1) {
      lVar12 = *param_1;
      iVar2 = (int)param_2[1];
LAB_148fc79e1:
      lVar6 = (longlong)iVar3 * 0x20;
      iVar1 = *(int *)(lVar12 + 8 + lVar6);
      iVar13 = *(int *)(lVar12 + 0x18 + lVar6);
      if (iVar1 == iVar2) {
        if (1 < iVar2) {
          lVar9 = 0;
          do {
            uVar7 = *(ushort *)(*(longlong *)(lVar6 + lVar12) + lVar9);
            uVar8 = (ulonglong)uVar7;
            uVar10 = *(ushort *)(*param_2 + lVar9);
            if (uVar7 == uVar10) {
              if (uVar7 == 0) break;
            }
            else {
              if (0x7f < (uVar10 | uVar7)) goto LAB_148fc7a63;
              uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
              uVar11 = (ulonglong)uVar10;
              uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
              if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[uVar11]) goto LAB_148fc7a63;
            }
            lVar9 = lVar9 + 2;
          } while( true );
        }
      }
      else if (iVar1 + iVar2 != 1) goto LAB_148fc7a55;
LAB_148fc7b01:
      iVar2 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
        FUN_148fcc434(param_3,iVar2);
      }
      *(undefined8 *)(*param_3 + (longlong)iVar2 * 8) =
           *(undefined8 *)((longlong)iVar3 * 0x20 + lVar12 + 0x10);
      if (iVar13 != -1) {
        lVar12 = *param_1;
        iVar2 = (int)param_2[1];
        iVar3 = iVar13;
LAB_148fc7a79:
        lVar6 = (longlong)iVar3 * 0x20;
        iVar1 = *(int *)(lVar12 + 8 + lVar6);
        iVar13 = *(int *)(lVar12 + 0x18 + lVar6);
        if (iVar1 == iVar2) {
          if (1 < iVar2) {
            lVar9 = 0;
            do {
              uVar7 = *(ushort *)(*(longlong *)(lVar6 + lVar12) + lVar9);
              uVar8 = (ulonglong)uVar7;
              uVar10 = *(ushort *)(*param_2 + lVar9);
              if (uVar7 == uVar10) {
                if (uVar7 == 0) break;
              }
              else {
                if (0x7f < (uVar10 | uVar7)) goto LAB_148fc7af9;
                uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
                uVar11 = (ulonglong)uVar10;
                uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
                if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[uVar11]) goto LAB_148fc7af9;
              }
              lVar9 = lVar9 + 2;
            } while( true );
          }
        }
        else if (iVar1 + iVar2 != 1) goto LAB_148fc7ae1;
        goto LAB_148fc7b01;
      }
    }
  }
  return;
LAB_148fc7a63:
  if (uVar7 == uVar10) goto LAB_148fc7b01;
LAB_148fc7a55:
  iVar3 = iVar13;
  if (iVar13 == -1) {
    return;
  }
  goto LAB_148fc79e1;
LAB_148fc7af9:
  if (uVar7 == uVar10) goto LAB_148fc7b01;
LAB_148fc7ae1:
  iVar3 = iVar13;
  if (iVar13 == -1) {
    return;
  }
  goto LAB_148fc7a79;
}



// FUNCTION 148fc7b44 FUN_148fc7b44 body=7284 status=ok
// SIG undefined FUN_148fc7b44(void)

/* WARNING: Removing unreachable block (ram,0x000148fc942b) */
/* WARNING: Removing unreachable block (ram,0x000148fc8fd4) */
/* WARNING: Removing unreachable block (ram,0x000148fc8dc0) */
/* WARNING: Removing unreachable block (ram,0x000148fc8a8f) */
/* WARNING: Removing unreachable block (ram,0x000148fc8719) */
/* WARNING: Removing unreachable block (ram,0x000148fc7cfb) */
/* WARNING: Removing unreachable block (ram,0x000148fc85a9) */
/* WARNING: Removing unreachable block (ram,0x000148fc88d7) */
/* WARNING: Removing unreachable block (ram,0x000148fc8bff) */
/* WARNING: Removing unreachable block (ram,0x000148fc9146) */
/* WARNING: Removing unreachable block (ram,0x000148fc927f) */
/* WARNING: Removing unreachable block (ram,0x000148fc96b2) */
/* WARNING: Removing unreachable block (ram,0x000148fc943d) */
/* WARNING: Removing unreachable block (ram,0x000148fc8fe6) */
/* WARNING: Removing unreachable block (ram,0x000148fc8dd2) */
/* WARNING: Removing unreachable block (ram,0x000148fc8aa1) */
/* WARNING: Removing unreachable block (ram,0x000148fc872b) */
/* WARNING: Removing unreachable block (ram,0x000148fc85bb) */
/* WARNING: Removing unreachable block (ram,0x000148fc88e9) */
/* WARNING: Removing unreachable block (ram,0x000148fc8c11) */
/* WARNING: Removing unreachable block (ram,0x000148fc915c) */
/* WARNING: Removing unreachable block (ram,0x000148fc9291) */
/* WARNING: Removing unreachable block (ram,0x000148fc96c4) */

void FUN_148fc7b44(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  ushort uVar10;
  ulonglong uVar11;
  ushort uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_208 [32];
  void *local_1e8;
  int local_1e0;
  undefined4 local_1dc;
  undefined2 *local_1d8;
  undefined8 uStack_1d0;
  undefined **local_1c8;
  undefined8 uStack_1c0;
  longlong *local_1b8;
  void *local_1b0;
  int local_1a8;
  undefined4 local_1a4;
  void *local_1a0;
  int local_198;
  undefined4 local_194;
  void *local_190;
  int local_188;
  undefined4 local_184;
  void *local_180;
  int local_178;
  undefined4 local_174;
  void *local_170;
  int local_168;
  undefined4 local_164;
  void *local_160;
  int local_158;
  undefined4 local_154;
  void *local_150;
  int local_148;
  undefined4 local_144;
  void *local_140;
  int local_138;
  undefined4 local_134;
  void *local_130;
  int local_128;
  undefined4 local_124;
  void *local_120;
  int local_118;
  undefined4 local_114;
  undefined4 local_10c;
  void *local_108;
  int local_100;
  undefined4 local_fc;
  void *local_f8;
  int local_f0;
  undefined4 local_ec;
  void *local_e8;
  int local_e0;
  undefined4 local_dc;
  void *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined4 local_ac;
  int local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  int local_8c;
  undefined2 *local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_1d8 = (undefined2 *)((ulonglong)local_1d8 & 0xffffffffffffff00);
  local_a0 = *(undefined4 *)(param_1 + 0x40);
  if ((ulonglong)*(byte *)(param_1 + 0x20) < 5) {
    local_88 = (undefined2 *)(&PTR_u_Normal_14ba51048)[*(byte *)(param_1 + 0x20)];
  }
  else {
    local_88 = &DAT_149dfb77a;
  }
  local_1c8 = (undefined **)0x0;
  uStack_1c0 = 0;
  FUN_1407c869a(param_3,&local_1c8,0);
  local_78 = 0;
  uStack_70 = 0;
  FUN_146b17e4e(0,0);
  uStack_70 = uStack_70 & 0xffffffff00000000;
  FUN_147087202(&local_78,9);
  uVar11 = uStack_70;
  lVar7 = (longlong)(int)uStack_70;
  uVar4 = (int)uStack_70 + 1;
  uStack_70 = CONCAT44(uStack_70._4_4_,uVar4);
  if (uStack_70._4_4_ < uVar4) {
    FUN_146b17dba(&local_78,uVar11 & 0xffffffff);
  }
  lVar14 = local_78;
  pvVar3 = DAT_14cbf5198;
  local_d8 = (void *)0x0;
  lVar15 = (longlong)(int)DAT_14cbf51a0;
  local_d0 = CONCAT44(local_d0._4_4_,DAT_14cbf51a0);
  if (lVar15 == 0) {
    local_d0 = (ulonglong)DAT_14cbf51a0;
  }
  else {
    FUN_1446dd670(&local_d8,DAT_14cbf51a0,0);
    memcpy(local_d8,pvVar3,lVar15 * 2);
  }
  uVar11 = uStack_70;
  lVar7 = lVar7 * 0x30;
  *(undefined8 *)(lVar14 + lVar7) = 0;
  *(void **)(lVar14 + lVar7) = local_d8;
  *(undefined4 *)(lVar14 + 8 + lVar7) = (undefined4)local_d0;
  *(undefined4 *)(lVar14 + 0xc + lVar7) = local_d0._4_4_;
  *(undefined ***)(lVar14 + 0x10 + lVar7) = local_1c8;
  *(undefined4 *)(lVar14 + 0x18 + lVar7) = (undefined4)uStack_1c0;
  *(undefined4 *)(lVar14 + 0x1c + lVar7) = uStack_1c0._4_4_;
  *(undefined8 *)(lVar14 + 0x20 + lVar7) = 0;
  *(undefined1 *)(lVar14 + 0x28 + lVar7) = 0;
  *(undefined4 *)(lVar14 + 0x2c + lVar7) = 0;
  local_d0 = 0;
  local_d8 = (void *)0x0;
  uStack_1c0 = 0;
  local_1c8 = (undefined **)0x0;
  lVar7 = (longlong)(int)uStack_70;
  uVar4 = (int)uStack_70 + 1;
  uStack_70 = CONCAT44(uStack_70._4_4_,uVar4);
  if (uStack_70._4_4_ < uVar4) {
    FUN_146b17dba(&local_78,uVar11 & 0xffffffff);
  }
  lVar14 = local_78;
  pvVar3 = DAT_14cbf51a8;
  local_d8 = (void *)0x0;
  lVar15 = (longlong)(int)DAT_14cbf51b0;
  local_d0 = CONCAT44(local_d0._4_4_,DAT_14cbf51b0);
  if (lVar15 == 0) {
    local_d0 = (ulonglong)DAT_14cbf51b0;
  }
  else {
    FUN_1446dd670(&local_d8,DAT_14cbf51b0,0);
    memcpy(local_d8,pvVar3,lVar15 * 2);
  }
  FUN_146b172be(lVar14 + lVar7 * 0x30,&local_d8,param_1 + 8);
  uVar11 = uStack_70;
  lVar7 = (longlong)(int)uStack_70;
  uVar4 = (int)uStack_70 + 1;
  uStack_70 = CONCAT44(uStack_70._4_4_,uVar4);
  if (uStack_70._4_4_ < uVar4) {
    FUN_146b17dba(&local_78,uVar11 & 0xffffffff);
  }
  lVar14 = local_78;
  pvVar3 = DAT_14cbf51b8;
  local_d8 = (void *)0x0;
  lVar15 = (longlong)(int)DAT_14cbf51c0;
  local_d0 = CONCAT44(local_d0._4_4_,DAT_14cbf51c0);
  if (lVar15 == 0) {
    local_d0 = (ulonglong)DAT_14cbf51c0;
  }
  else {
    FUN_1446dd670(&local_d8,DAT_14cbf51c0,0);
    memcpy(local_d8,pvVar3,lVar15 * 2);
  }
  FUN_146b175b8(lVar14 + lVar7 * 0x30,&local_d8,param_1 + 0x10);
  uVar11 = uStack_70;
  lVar7 = (longlong)(int)uStack_70;
  uVar4 = (int)uStack_70 + 1;
  uStack_70 = CONCAT44(uStack_70._4_4_,uVar4);
  if (uStack_70._4_4_ < uVar4) {
    FUN_146b17dba(&local_78,uVar11 & 0xffffffff);
  }
  lVar14 = local_78;
  pvVar3 = DAT_14cbf51c8;
  local_d8 = (void *)0x0;
  lVar15 = (longlong)(int)DAT_14cbf51d0;
  local_d0 = CONCAT44(local_d0._4_4_,DAT_14cbf51d0);
  if (lVar15 == 0) {
    local_d0 = (ulonglong)DAT_14cbf51d0;
  }
  else {
    FUN_1446dd670(&local_d8,DAT_14cbf51d0,0);
    memcpy(local_d8,pvVar3,lVar15 * 2);
  }
  FUN_146b174e6(lVar14 + lVar7 * 0x30,&local_d8,param_1 + 0x28);
  uVar11 = uStack_70;
  lVar7 = (longlong)(int)uStack_70;
  uVar4 = (int)uStack_70 + 1;
  uStack_70 = CONCAT44(uStack_70._4_4_,uVar4);
  if (uStack_70._4_4_ < uVar4) {
    FUN_146b17dba(&local_78,uVar11 & 0xffffffff);
  }
  lVar14 = local_78;
  pvVar3 = DAT_14cbf51d8;
  local_d8 = (void *)0x0;
  lVar15 = (longlong)(int)DAT_14cbf51e0;
  local_d0 = CONCAT44(local_d0._4_4_,DAT_14cbf51e0);
  if (lVar15 == 0) {
    local_d0 = (ulonglong)DAT_14cbf51e0;
  }
  else {
    FUN_1446dd670(&local_d8,DAT_14cbf51e0,0);
    memcpy(local_d8,pvVar3,lVar15 * 2);
  }
  FUN_146b24b94(lVar14 + lVar7 * 0x30,&local_d8,&local_88);
  uVar11 = uStack_70;
  lVar7 = (longlong)(int)uStack_70;
  uVar4 = (int)uStack_70 + 1;
  uStack_70 = CONCAT44(uStack_70._4_4_,uVar4);
  if (uStack_70._4_4_ < uVar4) {
    FUN_146b17dba(&local_78,uVar11 & 0xffffffff);
  }
  lVar14 = local_78;
  pvVar3 = DAT_14cbf51e8;
  local_d8 = (void *)0x0;
  lVar15 = (longlong)(int)DAT_14cbf51f0;
  local_d0 = CONCAT44(local_d0._4_4_,DAT_14cbf51f0);
  if (lVar15 == 0) {
    local_d0 = (ulonglong)DAT_14cbf51f0;
  }
  else {
    FUN_1446dd670(&local_d8,DAT_14cbf51f0,0);
    memcpy(local_d8,pvVar3,lVar15 * 2);
  }
  FUN_14731cdf8(lVar14 + lVar7 * 0x30,&local_d8,&local_a0);
  uVar11 = uStack_70;
  lVar7 = (longlong)(int)uStack_70;
  uVar4 = (int)uStack_70 + 1;
  uStack_70 = CONCAT44(uStack_70._4_4_,uVar4);
  if (uStack_70._4_4_ < uVar4) {
    FUN_146b17dba(&local_78,uVar11 & 0xffffffff);
  }
  lVar14 = local_78;
  pvVar3 = DAT_14cbf5208;
  local_d8 = (void *)0x0;
  lVar15 = (longlong)(int)DAT_14cbf5210;
  local_d0 = CONCAT44(local_d0._4_4_,DAT_14cbf5210);
  if (lVar15 == 0) {
    local_d0 = (ulonglong)DAT_14cbf5210;
  }
  else {
    FUN_1446dd670(&local_d8,DAT_14cbf5210,0);
    memcpy(local_d8,pvVar3,lVar15 * 2);
  }
  FUN_146b172be(lVar14 + lVar7 * 0x30,&local_d8,param_1 + 0x68);
  uVar11 = uStack_70;
  lVar7 = (longlong)(int)uStack_70;
  uVar4 = (int)uStack_70 + 1;
  uStack_70 = CONCAT44(uStack_70._4_4_,uVar4);
  if (uStack_70._4_4_ < uVar4) {
    FUN_146b17dba(&local_78,uVar11 & 0xffffffff);
  }
  lVar14 = local_78;
  pvVar3 = DAT_14cbf5218;
  local_d8 = (void *)0x0;
  lVar15 = (longlong)(int)DAT_14cbf5220;
  local_d0 = CONCAT44(local_d0._4_4_,DAT_14cbf5220);
  if (lVar15 == 0) {
    local_d0 = (ulonglong)DAT_14cbf5220;
  }
  else {
    FUN_1446dd670(&local_d8,DAT_14cbf5220,0);
    memcpy(local_d8,pvVar3,lVar15 * 2);
  }
  FUN_146b172be(lVar14 + lVar7 * 0x30,&local_d8,param_1 + 0x6c);
  uVar11 = uStack_70;
  lVar7 = (longlong)(int)uStack_70;
  uVar4 = (int)uStack_70 + 1;
  uStack_70 = CONCAT44(uStack_70._4_4_,uVar4);
  if (uStack_70._4_4_ < uVar4) {
    FUN_146b17dba(&local_78,uVar11 & 0xffffffff);
  }
  lVar14 = local_78;
  pvVar3 = DAT_14cbf5228;
  local_d8 = (void *)0x0;
  lVar15 = (longlong)(int)DAT_14cbf5230;
  local_d0 = CONCAT44(local_d0._4_4_,DAT_14cbf5230);
  if (lVar15 == 0) {
    local_d0 = (ulonglong)DAT_14cbf5230;
  }
  else {
    FUN_1446dd670(&local_d8,DAT_14cbf5230,0);
    memcpy(local_d8,pvVar3,lVar15 * 2);
  }
  FUN_148fcc5de(lVar14 + lVar7 * 0x30,&local_d8);
  if (local_1c8 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_1c8,L"Unknown");
  local_1d8 = (undefined2 *)CONCAT44(local_1d8._4_4_,0x7fffffff);
  FUN_140056680(&local_88,L"Unknown");
  local_8c = 0x7fffffff;
  FUN_140056680(&local_a0,L"Unknown");
  local_a4 = 0x7fffffff;
  iVar8 = 0x7fffffff;
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    lVar7 = *(longlong *)(param_1 + 0x38);
    lVar14 = (longlong)*(int *)(param_1 + 0x40) * 0x38 + lVar7;
    do {
      if (*(int *)(lVar7 + 0x2c) < (int)local_1d8) {
        if (*(char *)(lVar7 + 0x30) == '\x01') {
          FUN_144a787a6(&local_1c8,lVar7 + 8);
          local_1d8 = (undefined2 *)CONCAT44(local_1d8._4_4_,*(undefined4 *)(lVar7 + 0x2c));
        }
        FUN_144a787a6(&local_88,lVar7 + 8);
        local_8c = *(int *)(lVar7 + 0x2c);
      }
      iVar8 = *(int *)(lVar7 + 0x10);
      if (iVar8 == *(int *)(param_1 + 0x60)) {
        if (1 < iVar8) {
          lVar15 = 0;
          while( true ) {
            uVar10 = *(ushort *)(*(longlong *)(lVar7 + 8) + lVar15);
            uVar11 = (ulonglong)uVar10;
            uVar12 = *(ushort *)(*(longlong *)(param_1 + 0x58) + lVar15);
            if (uVar10 != uVar12) break;
            if (uVar10 == 0) goto LAB_148fc83ba;
LAB_148fc8385:
            lVar15 = lVar15 + 2;
          }
          if ((uVar12 | uVar10) < 0x80) {
            uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            uVar13 = (ulonglong)uVar12;
            uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
            if ((&DAT_149e05da0)[uVar11] == (&DAT_149e05da0)[uVar13]) goto LAB_148fc8385;
          }
          if (uVar10 != uVar12) goto LAB_148fc83ce;
        }
LAB_148fc83ba:
        FUN_144a787a6(&local_a0);
        local_a4 = *(int *)(lVar7 + 0x2c);
      }
      else if (*(int *)(param_1 + 0x60) + iVar8 == 1) goto LAB_148fc83ba;
LAB_148fc83ce:
      lVar7 = lVar7 + 0x38;
      iVar8 = local_a4;
    } while (lVar7 != lVar14);
  }
  pvVar3 = DAT_14cbf5238;
  iVar6 = (int)local_1d8;
  iVar5 = 9999;
  if ((int)local_1d8 < 9999) {
    iVar5 = (int)local_1d8;
  }
  if (iVar5 < 1) {
    iVar5 = 0;
  }
  if (0x270e < iVar8) {
    iVar8 = 9999;
  }
  local_a4 = iVar8;
  if (iVar8 < 1) {
    local_a4 = 0;
  }
  local_1d8 = (undefined2 *)CONCAT44(local_1d8._4_4_,iVar5);
  if (iVar6 < 9999) {
    local_e8 = (void *)0x0;
    lVar7 = (longlong)DAT_14cbf5240;
    local_e0 = DAT_14cbf5240;
    if (lVar7 == 0) {
      local_dc = 0;
    }
    else {
      FUN_1446dd670(&local_e8,DAT_14cbf5240,0);
      memcpy(local_e8,pvVar3,lVar7 * 2);
    }
    FUN_146b175b8(&local_d8,&local_e8,&local_1c8);
    lVar7 = (longlong)(int)uStack_70;
    uVar4 = (int)uStack_70 + 1;
    uStack_70 = CONCAT44(uStack_70._4_4_,uVar4);
    if (uStack_70._4_4_ < uVar4) {
      FUN_146b17dba(&local_78);
    }
    lVar7 = lVar7 * 0x30;
    *(undefined8 *)(local_78 + lVar7) = 0;
    *(void **)(local_78 + lVar7) = local_d8;
    *(undefined4 *)(local_78 + 8 + lVar7) = (undefined4)local_d0;
    *(undefined4 *)(local_78 + 0xc + lVar7) = local_d0._4_4_;
    *(undefined8 *)(local_78 + 0x10 + lVar7) = 0;
    *(undefined8 *)(local_78 + 0x10 + lVar7) = local_c8;
    *(undefined4 *)(local_78 + 0x18 + lVar7) = (undefined4)local_c0;
    *(undefined4 *)(local_78 + 0x1c + lVar7) = local_c0._4_4_;
    *(undefined8 *)(local_78 + 0x20 + lVar7) = local_b8;
    *(undefined1 *)(local_78 + 0x28 + lVar7) = local_b0;
    *(undefined4 *)(local_78 + 0x2c + lVar7) = local_ac;
    pvVar3 = DAT_14cbf5248;
    local_c0 = 0;
    local_c8 = 0;
    local_d0 = 0;
    local_d8 = (void *)0x0;
    local_f8 = (void *)0x0;
    lVar7 = (longlong)DAT_14cbf5250;
    local_f0 = DAT_14cbf5250;
    if (lVar7 == 0) {
      local_ec = 0;
    }
    else {
      FUN_1446dd670(&local_f8,DAT_14cbf5250,0);
      memcpy(local_f8,pvVar3,lVar7 * 2);
    }
    FUN_146b172be(&local_d8,&local_f8,&local_1d8);
  }
  else {
    local_108 = (void *)0x0;
    lVar7 = (longlong)DAT_14cbf5240;
    local_100 = DAT_14cbf5240;
    if (lVar7 == 0) {
      local_fc = 0;
    }
    else {
      FUN_1446dd670(&local_108,DAT_14cbf5240,0);
      memcpy(local_108,pvVar3,lVar7 * 2);
    }
    FUN_148fc97ba(&local_d8);
    lVar7 = (longlong)(int)uStack_70;
    uVar4 = (int)uStack_70 + 1;
    uStack_70 = CONCAT44(uStack_70._4_4_,uVar4);
    if (uStack_70._4_4_ < uVar4) {
      FUN_146b17dba(&local_78);
    }
    lVar7 = lVar7 * 0x30;
    *(undefined8 *)(local_78 + lVar7) = 0;
    *(void **)(local_78 + lVar7) = local_d8;
    *(undefined4 *)(local_78 + 8 + lVar7) = (undefined4)local_d0;
    *(undefined4 *)(local_78 + 0xc + lVar7) = local_d0._4_4_;
    *(undefined8 *)(local_78 + 0x10 + lVar7) = 0;
    *(undefined8 *)(local_78 + 0x10 + lVar7) = local_c8;
    *(undefined4 *)(local_78 + 0x18 + lVar7) = (undefined4)local_c0;
    *(undefined4 *)(local_78 + 0x1c + lVar7) = local_c0._4_4_;
    *(undefined8 *)(local_78 + 0x20 + lVar7) = local_b8;
    *(undefined1 *)(local_78 + 0x28 + lVar7) = local_b0;
    *(undefined4 *)(local_78 + 0x2c + lVar7) = local_ac;
    pvVar3 = DAT_14cbf5248;
    local_c0 = 0;
    local_c8 = 0;
    local_d0 = 0;
    local_d8 = (void *)0x0;
    local_10c = 0;
    local_120 = (void *)0x0;
    lVar7 = (longlong)DAT_14cbf5250;
    local_118 = DAT_14cbf5250;
    if (lVar7 == 0) {
      local_114 = 0;
    }
    else {
      FUN_1446dd670(&local_120,DAT_14cbf5250,0);
      memcpy(local_120,pvVar3,lVar7 * 2);
    }
    FUN_14731cdf8(&local_d8,&local_120,&local_10c);
  }
  lVar7 = (longlong)(int)uStack_70;
  uVar4 = (int)uStack_70 + 1;
  uStack_70 = CONCAT44(uStack_70._4_4_,uVar4);
  if (uStack_70._4_4_ < uVar4) {
    FUN_146b17dba(&local_78);
  }
  lVar7 = lVar7 * 0x30;
  *(undefined8 *)(local_78 + lVar7) = 0;
  *(void **)(local_78 + lVar7) = local_d8;
  *(undefined4 *)(local_78 + 8 + lVar7) = (undefined4)local_d0;
  *(undefined4 *)(local_78 + 0xc + lVar7) = local_d0._4_4_;
  *(undefined8 *)(local_78 + 0x10 + lVar7) = 0;
  *(undefined8 *)(local_78 + 0x10 + lVar7) = local_c8;
  *(undefined4 *)(local_78 + 0x18 + lVar7) = (undefined4)local_c0;
  *(undefined4 *)(local_78 + 0x1c + lVar7) = local_c0._4_4_;
  *(undefined8 *)(local_78 + 0x20 + lVar7) = local_b8;
  *(undefined1 *)(local_78 + 0x28 + lVar7) = local_b0;
  *(undefined4 *)(local_78 + 0x2c + lVar7) = local_ac;
  pvVar3 = DAT_14cbf5288;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = (void *)0x0;
  if (local_a4 < 9999) {
    local_130 = (void *)0x0;
    lVar7 = (longlong)DAT_14cbf5290;
    local_128 = DAT_14cbf5290;
    if (lVar7 == 0) {
      local_124 = 0;
    }
    else {
      FUN_1446dd670(&local_130,DAT_14cbf5290,0);
      memcpy(local_130,pvVar3,lVar7 * 2);
    }
    FUN_146b175b8(&local_d8,&local_130,&local_a0);
    lVar7 = (longlong)(int)uStack_70;
    uVar4 = (int)uStack_70 + 1;
    uStack_70 = CONCAT44(uStack_70._4_4_,uVar4);
    if (uStack_70._4_4_ < uVar4) {
      FUN_146b17dba(&local_78);
    }
    lVar7 = lVar7 * 0x30;
    *(undefined8 *)(local_78 + lVar7) = 0;
    *(void **)(local_78 + lVar7) = local_d8;
    *(undefined4 *)(local_78 + 8 + lVar7) = (undefined4)local_d0;
    *(undefined4 *)(local_78 + 0xc + lVar7) = local_d0._4_4_;
    *(undefined8 *)(local_78 + 0x10 + lVar7) = 0;
    *(undefined8 *)(local_78 + 0x10 + lVar7) = local_c8;
    *(undefined4 *)(local_78 + 0x18 + lVar7) = (undefined4)local_c0;
    *(undefined4 *)(local_78 + 0x1c + lVar7) = local_c0._4_4_;
    *(undefined8 *)(local_78 + 0x20 + lVar7) = local_b8;
    *(undefined1 *)(local_78 + 0x28 + lVar7) = local_b0;
    *(undefined4 *)(local_78 + 0x2c + lVar7) = local_ac;
    pvVar3 = DAT_14cbf5298;
    local_c0 = 0;
    local_c8 = 0;
    local_d0 = 0;
    local_d8 = (void *)0x0;
    local_140 = (void *)0x0;
    lVar7 = (longlong)DAT_14cbf52a0;
    local_138 = DAT_14cbf52a0;
    if (lVar7 == 0) {
      local_134 = 0;
    }
    else {
      FUN_1446dd670(&local_140,DAT_14cbf52a0,0);
      memcpy(local_140,pvVar3,lVar7 * 2);
    }
    FUN_146b172be(&local_d8,&local_140,&local_a4);
  }
  else {
    local_150 = (void *)0x0;
    lVar7 = (longlong)DAT_14cbf5290;
    local_148 = DAT_14cbf5290;
    if (lVar7 == 0) {
      local_144 = 0;
    }
    else {
      FUN_1446dd670(&local_150,DAT_14cbf5290,0);
      memcpy(local_150,pvVar3,lVar7 * 2);
    }
    FUN_148fc97ba(&local_d8);
    lVar7 = (longlong)(int)uStack_70;
    uVar4 = (int)uStack_70 + 1;
    uStack_70 = CONCAT44(uStack_70._4_4_,uVar4);
    if (uStack_70._4_4_ < uVar4) {
      FUN_146b17dba(&local_78);
    }
    lVar7 = lVar7 * 0x30;
    *(undefined8 *)(local_78 + lVar7) = 0;
    *(void **)(local_78 + lVar7) = local_d8;
    *(undefined4 *)(local_78 + 8 + lVar7) = (undefined4)local_d0;
    *(undefined4 *)(local_78 + 0xc + lVar7) = local_d0._4_4_;
    *(undefined8 *)(local_78 + 0x10 + lVar7) = 0;
    *(undefined8 *)(local_78 + 0x10 + lVar7) = local_c8;
    *(undefined4 *)(local_78 + 0x18 + lVar7) = (undefined4)local_c0;
    *(undefined4 *)(local_78 + 0x1c + lVar7) = local_c0._4_4_;
    *(undefined8 *)(local_78 + 0x20 + lVar7) = local_b8;
    *(undefined1 *)(local_78 + 0x28 + lVar7) = local_b0;
    *(undefined4 *)(local_78 + 0x2c + lVar7) = local_ac;
    pvVar3 = DAT_14cbf5298;
    local_c0 = 0;
    local_c8 = 0;
    local_d0 = 0;
    local_d8 = (void *)0x0;
    local_10c = 0;
    local_160 = (void *)0x0;
    lVar7 = (longlong)DAT_14cbf52a0;
    local_158 = DAT_14cbf52a0;
    if (lVar7 == 0) {
      local_154 = 0;
    }
    else {
      FUN_1446dd670(&local_160,DAT_14cbf52a0,0);
      memcpy(local_160,pvVar3,lVar7 * 2);
    }
    FUN_14731cdf8(&local_d8,&local_160,&local_10c);
  }
  lVar7 = (longlong)(int)uStack_70;
  uVar4 = (int)uStack_70 + 1;
  uStack_70 = CONCAT44(uStack_70._4_4_,uVar4);
  if (uStack_70._4_4_ < uVar4) {
    FUN_146b17dba(&local_78);
  }
  lVar7 = lVar7 * 0x30;
  *(undefined8 *)(local_78 + lVar7) = 0;
  *(void **)(local_78 + lVar7) = local_d8;
  *(undefined4 *)(local_78 + 8 + lVar7) = (undefined4)local_d0;
  *(undefined4 *)(local_78 + 0xc + lVar7) = local_d0._4_4_;
  *(undefined8 *)(local_78 + 0x10 + lVar7) = 0;
  *(undefined8 *)(local_78 + 0x10 + lVar7) = local_c8;
  *(undefined4 *)(local_78 + 0x18 + lVar7) = (undefined4)local_c0;
  *(undefined4 *)(local_78 + 0x1c + lVar7) = local_c0._4_4_;
  *(undefined8 *)(local_78 + 0x20 + lVar7) = local_b8;
  *(undefined1 *)(local_78 + 0x28 + lVar7) = local_b0;
  *(undefined4 *)(local_78 + 0x2c + lVar7) = local_ac;
  pvVar3 = DAT_14cbf5278;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = (void *)0x0;
  if (1 < *(int *)(param_1 + 0x50)) {
    local_170 = (void *)0x0;
    lVar7 = (longlong)DAT_14cbf5280;
    local_168 = DAT_14cbf5280;
    if (lVar7 == 0) {
      local_164 = 0;
    }
    else {
      FUN_1446dd670(&local_170,DAT_14cbf5280,0);
      memcpy(local_170,pvVar3,lVar7 * 2);
    }
    FUN_146b175b8(&local_d8,&local_170,param_1 + 0x48);
    lVar7 = (longlong)(int)uStack_70;
    uVar4 = (int)uStack_70 + 1;
    uStack_70 = CONCAT44(uStack_70._4_4_,uVar4);
    if (uStack_70._4_4_ < uVar4) {
      FUN_146b17dba(&local_78);
    }
    lVar7 = lVar7 * 0x30;
    *(undefined8 *)(local_78 + lVar7) = 0;
    *(void **)(local_78 + lVar7) = local_d8;
    *(undefined4 *)(local_78 + 8 + lVar7) = (undefined4)local_d0;
    *(undefined4 *)(local_78 + 0xc + lVar7) = local_d0._4_4_;
    *(undefined8 *)(local_78 + 0x10 + lVar7) = 0;
    *(undefined8 *)(local_78 + 0x10 + lVar7) = local_c8;
    *(undefined4 *)(local_78 + 0x18 + lVar7) = (undefined4)local_c0;
    *(undefined4 *)(local_78 + 0x1c + lVar7) = local_c0._4_4_;
    *(undefined8 *)(local_78 + 0x20 + lVar7) = local_b8;
    *(undefined1 *)(local_78 + 0x28 + lVar7) = local_b0;
    *(undefined4 *)(local_78 + 0x2c + lVar7) = local_ac;
  }
  pvVar3 = DAT_14cbf5258;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = (void *)0x0;
  iVar8 = 9999;
  if (local_8c < 9999) {
    iVar8 = local_8c;
  }
  iVar6 = 0;
  if (0 < iVar8) {
    iVar6 = iVar8;
  }
  if (local_8c < 9999) {
    local_180 = (void *)0x0;
    lVar7 = (longlong)DAT_14cbf5260;
    local_178 = DAT_14cbf5260;
    if (lVar7 == 0) {
      local_174 = 0;
      local_8c = iVar6;
    }
    else {
      local_8c = iVar6;
      FUN_1446dd670(&local_180,DAT_14cbf5260,0);
      memcpy(local_180,pvVar3,lVar7 * 2);
    }
    FUN_146b175b8(&local_d8,&local_180,&local_88);
    lVar7 = (longlong)(int)uStack_70;
    uVar4 = (int)uStack_70 + 1;
    uStack_70 = CONCAT44(uStack_70._4_4_,uVar4);
    if (uStack_70._4_4_ < uVar4) {
      FUN_146b17dba(&local_78);
    }
    lVar7 = lVar7 * 0x30;
    *(undefined8 *)(local_78 + lVar7) = 0;
    *(void **)(local_78 + lVar7) = local_d8;
    *(undefined4 *)(local_78 + 8 + lVar7) = (undefined4)local_d0;
    *(undefined4 *)(local_78 + 0xc + lVar7) = local_d0._4_4_;
    *(undefined8 *)(local_78 + 0x10 + lVar7) = 0;
    *(undefined8 *)(local_78 + 0x10 + lVar7) = local_c8;
    *(undefined4 *)(local_78 + 0x18 + lVar7) = (undefined4)local_c0;
    *(undefined4 *)(local_78 + 0x1c + lVar7) = local_c0._4_4_;
    *(undefined8 *)(local_78 + 0x20 + lVar7) = local_b8;
    *(undefined1 *)(local_78 + 0x28 + lVar7) = local_b0;
    *(undefined4 *)(local_78 + 0x2c + lVar7) = local_ac;
    pvVar3 = DAT_14cbf5268;
    local_c0 = 0;
    local_c8 = 0;
    local_d0 = 0;
    local_d8 = (void *)0x0;
    local_190 = (void *)0x0;
    lVar7 = (longlong)DAT_14cbf5270;
    local_188 = DAT_14cbf5270;
    if (lVar7 == 0) {
      local_184 = 0;
    }
    else {
      FUN_1446dd670(&local_190,DAT_14cbf5270,0);
      memcpy(local_190,pvVar3,lVar7 * 2);
    }
    FUN_146b172be(&local_d8,&local_190,&local_8c);
  }
  else {
    local_1a0 = (void *)0x0;
    lVar7 = (longlong)DAT_14cbf5260;
    local_198 = DAT_14cbf5260;
    if (lVar7 == 0) {
      local_194 = 0;
      local_8c = iVar6;
    }
    else {
      local_8c = iVar6;
      FUN_1446dd670(&local_1a0,DAT_14cbf5260,0);
      memcpy(local_1a0,pvVar3,lVar7 * 2);
    }
    FUN_148fc97ba(&local_d8);
    lVar7 = (longlong)(int)uStack_70;
    uVar4 = (int)uStack_70 + 1;
    uStack_70 = CONCAT44(uStack_70._4_4_,uVar4);
    if (uStack_70._4_4_ < uVar4) {
      FUN_146b17dba(&local_78);
    }
    lVar7 = lVar7 * 0x30;
    *(undefined8 *)(local_78 + lVar7) = 0;
    *(void **)(local_78 + lVar7) = local_d8;
    *(undefined4 *)(local_78 + 8 + lVar7) = (undefined4)local_d0;
    *(undefined4 *)(local_78 + 0xc + lVar7) = local_d0._4_4_;
    *(undefined8 *)(local_78 + 0x10 + lVar7) = 0;
    *(undefined8 *)(local_78 + 0x10 + lVar7) = local_c8;
    *(undefined4 *)(local_78 + 0x18 + lVar7) = (undefined4)local_c0;
    *(undefined4 *)(local_78 + 0x1c + lVar7) = local_c0._4_4_;
    *(undefined8 *)(local_78 + 0x20 + lVar7) = local_b8;
    *(undefined1 *)(local_78 + 0x28 + lVar7) = local_b0;
    *(undefined4 *)(local_78 + 0x2c + lVar7) = local_ac;
    pvVar3 = DAT_14cbf5268;
    local_c0 = 0;
    local_c8 = 0;
    local_d0 = 0;
    local_d8 = (void *)0x0;
    local_10c = 0;
    local_1b0 = (void *)0x0;
    lVar7 = (longlong)DAT_14cbf5270;
    local_1a8 = DAT_14cbf5270;
    if (lVar7 == 0) {
      local_1a4 = 0;
    }
    else {
      FUN_1446dd670(&local_1b0,DAT_14cbf5270,0);
      memcpy(local_1b0,pvVar3,lVar7 * 2);
    }
    FUN_14731cdf8(&local_d8,&local_1b0,&local_10c);
  }
  lVar7 = (longlong)(int)uStack_70;
  uVar4 = (int)uStack_70 + 1;
  uStack_70 = CONCAT44(uStack_70._4_4_,uVar4);
  if (uStack_70._4_4_ < uVar4) {
    FUN_146b17dba(&local_78);
  }
  lVar7 = lVar7 * 0x30;
  *(undefined8 *)(local_78 + lVar7) = 0;
  *(void **)(local_78 + lVar7) = local_d8;
  *(undefined4 *)(local_78 + 8 + lVar7) = (undefined4)local_d0;
  *(undefined4 *)(local_78 + 0xc + lVar7) = local_d0._4_4_;
  *(undefined8 *)(local_78 + 0x10 + lVar7) = 0;
  *(undefined8 *)(local_78 + 0x10 + lVar7) = local_c8;
  *(undefined4 *)(local_78 + 0x18 + lVar7) = (undefined4)local_c0;
  *(undefined4 *)(local_78 + 0x1c + lVar7) = local_c0._4_4_;
  *(undefined8 *)(local_78 + 0x20 + lVar7) = local_b8;
  *(undefined1 *)(local_78 + 0x28 + lVar7) = local_b0;
  *(undefined4 *)(local_78 + 0x2c + lVar7) = local_ac;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = (void *)0x0;
  if (CONCAT44(uStack_9c,local_a0) != 0) {
    FUN_1400020a8();
  }
  if (local_88 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_1c8 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  local_88 = (undefined2 *)0x0;
  uStack_80 = 0;
  FUN_145fe0690(&local_a0,&local_88,0);
  plVar9 = local_98;
  uStack_1c0 = CONCAT44(uStack_9c,local_a0);
  local_1b8 = local_98;
  if (local_98 == (longlong *)0x0) {
    local_1c8 = &PTR_LAB_149e445d0;
    local_1b8 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(local_98 + 1) = (int)local_98[1] + 1;
    UNLOCK();
    local_1c8 = &PTR_LAB_149e445d0;
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
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  FUN_14683e51e(uStack_1c0);
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    plVar9 = *(longlong **)(param_1 + 0x38);
    lVar7 = (longlong)*(int *)(param_1 + 0x40) * 0x38;
    do {
      (**(code **)(*plVar9 + 0x28))(plVar9,&local_1c8,0);
      plVar9 = plVar9 + 7;
      lVar7 = lVar7 + -0x38;
    } while (lVar7 != 0);
  }
  FUN_1459282dc(uStack_1c0);
  (**(code **)(*(longlong *)CONCAT44(uStack_9c,local_a0) + 8))();
  pvVar3 = DAT_14cbf51f8;
  local_1d8 = local_88;
  uStack_1d0 = uStack_80;
  local_88 = (undefined2 *)0x0;
  uStack_80 = 0;
  local_1e8 = (void *)0x0;
  lVar7 = (longlong)DAT_14cbf5200;
  local_1e0 = DAT_14cbf5200;
  if (lVar7 == 0) {
    local_1dc = 0;
  }
  else {
    FUN_1446dd670(&local_1e8,DAT_14cbf5200,0);
    memcpy(local_1e8,pvVar3,lVar7 * 2);
  }
  FUN_1478dd1f8(&local_d8,&local_1e8,&local_1d8);
  lVar7 = (longlong)(int)uStack_70;
  uVar4 = (int)uStack_70 + 1;
  uStack_70 = CONCAT44(uStack_70._4_4_,uVar4);
  if (uStack_70._4_4_ < uVar4) {
    FUN_146b17dba(&local_78);
  }
  lVar7 = lVar7 * 0x30;
  *(undefined8 *)(local_78 + lVar7) = 0;
  *(void **)(local_78 + lVar7) = local_d8;
  *(undefined4 *)(local_78 + 8 + lVar7) = (undefined4)local_d0;
  *(undefined4 *)(local_78 + 0xc + lVar7) = local_d0._4_4_;
  *(undefined8 *)(local_78 + 0x10 + lVar7) = 0;
  *(undefined8 *)(local_78 + 0x10 + lVar7) = local_c8;
  *(undefined4 *)(local_78 + 0x18 + lVar7) = (undefined4)local_c0;
  *(undefined4 *)(local_78 + 0x1c + lVar7) = local_c0._4_4_;
  *(undefined8 *)(local_78 + 0x20 + lVar7) = local_b8;
  *(undefined1 *)(local_78 + 0x28 + lVar7) = local_b0;
  *(undefined4 *)(local_78 + 0x2c + lVar7) = local_ac;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = (void *)0x0;
  if (local_1d8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  plVar9 = local_1b8;
  local_1c8 = &PTR_LAB_149e445d0;
  if (local_1b8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1b8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_1b8)(local_1b8);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if (local_98 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_98 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_98)(local_98);
      LOCK();
      piVar2 = (int *)((longlong)local_98 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_98 + 0x10))(local_98);
      }
    }
  }
  if (local_88 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x78))(param_2,&DAT_14cbf5188,&local_78);
  }
  FUN_146b17e4e(local_78,uStack_70 & 0xffffffff);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148fc97ba FUN_148fc97ba body=98 status=ok
// SIG undefined FUN_148fc97ba(void)

longlong * FUN_148fc97ba(longlong *param_1,longlong *param_2)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  FUN_140056680(param_1 + 2,L"UNREACHABLE");
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 148fc981c FUN_148fc981c body=69 status=ok
// SIG undefined FUN_148fc981c(void)

undefined8 * FUN_148fc981c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_149e668b0;
  FUN_14019e1de();
  plVar2 = (longlong *)param_1[3];
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



// FUNCTION 148fc9862 FUN_148fc9862 body=32 status=ok
// SIG undefined FUN_148fc9862(void)

undefined8 FUN_148fc9862(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FQosInterface");
  return param_2;
}



// FUNCTION 148fc9882 FUN_148fc9882 body=52 status=ok
// SIG undefined FUN_148fc9882(void)

undefined8 * FUN_148fc9882(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba501b8;
  FUN_148fcc64c(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fc9922 FUN_148fc9922 body=59 status=ok
// SIG undefined FUN_148fc9922(void)

undefined8 FUN_148fc9922(longlong *param_1)

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



// FUNCTION 148fc9a06 FUN_148fc9a06 body=60 status=ok
// SIG undefined FUN_148fc9a06(void)

undefined8 FUN_148fc9a06(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
    param_2 = param_2 + 0x18;
    param_3 = param_3 + 0x18;
  }
  return 1;
}



// FUNCTION 148fc9a6a FUN_148fc9a6a body=59 status=ok
// SIG undefined FUN_148fc9a6a(void)

undefined8 FUN_148fc9a6a(longlong *param_1)

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



// FUNCTION 148fc9ab0 FUN_148fc9ab0 body=37 status=ok
// SIG undefined FUN_148fc9ab0(void)

void FUN_148fc9ab0(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[3] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 148fc9b6c FUN_148fc9b6c body=86 status=ok
// SIG undefined FUN_148fc9b6c(void)

undefined1 FUN_148fc9b6c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    *(undefined1 *)(param_2 + 0x20) = *(undefined1 *)(param_3 + 0x20);
    FUN_148fc9d14(param_2 + 0x28,param_3 + 0x28);
    param_2 = param_2 + 0x38;
    param_3 = param_3 + 0x38;
  }
  return 1;
}



// FUNCTION 148fc9bea FUN_148fc9bea body=59 status=ok
// SIG undefined FUN_148fc9bea(void)

undefined8 FUN_148fc9bea(longlong *param_1)

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



// FUNCTION 148fc9c30 FUN_148fc9c30 body=34 status=ok
// SIG undefined FUN_148fc9c30(void)

void FUN_148fc9c30(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_148fc9ca0(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 148fc9ca0 FUN_148fc9ca0 body=73 status=ok
// SIG undefined FUN_148fc9ca0(void)

void FUN_148fc9ca0(longlong *param_1)

{
  FUN_148fc9ce9(param_1[5],(int)param_1[6]);
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148fc9ce9 FUN_148fc9ce9 body=43 status=ok
// SIG undefined FUN_148fc9ce9(void)

void FUN_148fc9ce9(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 148fc9d14 FUN_148fc9d14 body=95 status=ok
// SIG undefined FUN_148fc9d14(void)

undefined8 * FUN_148fc9d14(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_148fc9ce9(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148fc9d74(param_1,iVar1);
      FUN_148fc9de7(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148fc9d74 FUN_148fc9d74 body=115 status=ok
// SIG undefined FUN_148fc9d74(void)

void FUN_148fc9d74(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148fc9de7 FUN_148fc9de7 body=124 status=ok
// SIG undefined FUN_148fc9de7(void)

void FUN_148fc9de7(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = (undefined4 *)(param_2 + 0x10);
    do {
      *param_1 = 0;
      iVar1 = puVar2[-2];
      _Src = *(void **)(puVar2 + -4);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
      }
      *(undefined4 *)(param_1 + 2) = *puVar2;
      param_1 = param_1 + 3;
      puVar2 = puVar2 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148fc9e64 FUN_148fc9e64 body=47 status=ok
// SIG undefined FUN_148fc9e64(void)

void FUN_148fc9e64(undefined8 param_1,longlong param_2)

{
  FUN_144a5dc74(param_2);
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined2 *)(param_2 + 0x20) = 0x101;
  *(undefined1 *)(param_2 + 0x22) = 1;
  *(undefined8 *)(param_2 + 0x23) = 0;
  *(undefined8 *)(param_2 + 0x2b) = 0;
  *(undefined1 *)(param_2 + 0x33) = 0;
  return;
}



// FUNCTION 148fc9e94 FUN_148fc9e94 body=47 status=ok
// SIG undefined FUN_148fc9e94(void)

void FUN_148fc9e94(undefined8 param_1,longlong param_2)

{
  FUN_144a5dc74(param_2);
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined2 *)(param_2 + 0x20) = 0x101;
  *(undefined1 *)(param_2 + 0x22) = 1;
  *(undefined8 *)(param_2 + 0x23) = 0;
  *(undefined8 *)(param_2 + 0x2b) = 0;
  *(undefined1 *)(param_2 + 0x33) = 0;
  return;
}



// FUNCTION 148fc9ec4 FUN_148fc9ec4 body=49 status=ok
// SIG undefined FUN_148fc9ec4(void)

void FUN_148fc9ec4(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)*param_2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148fc9eea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_2 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 148fc9f0c FUN_148fc9f0c body=54 status=ok
// SIG undefined FUN_148fc9f0c(void)

undefined1 FUN_148fc9f0c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148fc734e(param_2,param_3);
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return 1;
}



// FUNCTION 148fc9f6a FUN_148fc9f6a body=59 status=ok
// SIG undefined FUN_148fc9f6a(void)

undefined8 FUN_148fc9f6a(longlong *param_1)

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



// FUNCTION 148fc9fb0 FUN_148fc9fb0 body=52 status=ok
// SIG undefined FUN_148fc9fb0(void)

void FUN_148fc9fb0(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[7] == '\x01') {
    if (param_2[2] != 0) {
      FUN_1400020a8();
    }
    if ((longlong *)*param_2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_2 + 0x10))();
    }
    *(undefined1 *)(param_2 + 7) = 0;
  }
  return;
}



// FUNCTION 148fca0a0 FUN_148fca0a0 body=35 status=ok
// SIG undefined FUN_148fca0a0(void)

void FUN_148fca0a0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_148fc9ca0(param_2);
  return;
}



// FUNCTION 148fca0da FUN_148fca0da body=54 status=ok
// SIG undefined FUN_148fca0da(void)

undefined1 FUN_148fca0da(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148fca1fc(param_2,param_3);
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return 1;
}



// FUNCTION 148fca138 FUN_148fca138 body=59 status=ok
// SIG undefined FUN_148fca138(void)

undefined8 FUN_148fca138(longlong *param_1)

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



// FUNCTION 148fca17e FUN_148fca17e body=48 status=ok
// SIG undefined FUN_148fca17e(void)

void FUN_148fca17e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_148fc9ca0(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 148fca1fc FUN_148fca1fc body=94 status=ok
// SIG undefined FUN_148fca1fc(void)

longlong FUN_148fca1fc(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_144a787a6();
  FUN_144a787a6(param_1 + 0x10,param_2 + 0x10);
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  FUN_148fc9d14(param_1 + 0x28,param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  FUN_14054c6c4(param_1 + 0x40,param_2 + 0x40);
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(param_2 + 0x60);
  return param_1;
}



// FUNCTION 148fca25c FUN_148fca25c body=51 status=ok
// SIG undefined FUN_148fca25c(void)

void FUN_148fca25c(undefined8 param_1,longlong param_2)

{
  FUN_144a5dc74(param_2);
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined2 *)(param_2 + 0x20) = 0x101;
  *(undefined1 *)(param_2 + 0x22) = 1;
  *(undefined8 *)(param_2 + 0x23) = 0;
  *(undefined8 *)(param_2 + 0x2b) = 0;
  *(undefined1 *)(param_2 + 0x33) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  return;
}



// FUNCTION 148fca290 FUN_148fca290 body=51 status=ok
// SIG undefined FUN_148fca290(void)

void FUN_148fca290(undefined8 param_1,longlong param_2)

{
  FUN_144a5dc74(param_2);
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined2 *)(param_2 + 0x20) = 0x101;
  *(undefined1 *)(param_2 + 0x22) = 1;
  *(undefined8 *)(param_2 + 0x23) = 0;
  *(undefined8 *)(param_2 + 0x2b) = 0;
  *(undefined1 *)(param_2 + 0x33) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  return;
}



// FUNCTION 148fca2e2 FUN_148fca2e2 body=87 status=ok
// SIG undefined FUN_148fca2e2(void)

undefined1 FUN_148fca2e2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148fc734e(param_2,param_3);
    FUN_148fca418(param_2 + 0x38,param_3 + 0x38);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 148fca362 FUN_148fca362 body=59 status=ok
// SIG undefined FUN_148fca362(void)

undefined8 FUN_148fca362(longlong *param_1)

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



// FUNCTION 148fca3a8 FUN_148fca3a8 body=34 status=ok
// SIG undefined FUN_148fca3a8(void)

void FUN_148fca3a8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_148fc7426(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 148fca418 FUN_148fca418 body=95 status=ok
// SIG undefined FUN_148fca418(void)

undefined8 * FUN_148fca418(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145cb3ce0(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148fca478(param_1,iVar1);
      FUN_148fca4e7(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148fca478 FUN_148fca478 body=111 status=ok
// SIG undefined FUN_148fca478(void)

void FUN_148fca478(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x68,8);
    iVar2 = (int)(uVar1 / 0x68);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x68,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148fca4e7 FUN_148fca4e7 body=52 status=ok
// SIG undefined FUN_148fca4e7(void)

void FUN_148fca4e7(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148fca51c(param_1,param_2);
    param_1 = param_1 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return;
}



// FUNCTION 148fca51c FUN_148fca51c body=127 status=ok
// SIG undefined FUN_148fca51c(void)

longlong FUN_148fca51c(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  FUN_148fca59c();
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = 0;
  iVar1 = *(int *)(param_2 + 0x48);
  _Src = *(void **)(param_2 + 0x40);
  *(int *)(param_1 + 0x48) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  else {
    FUN_144a06ca8((undefined8 *)(param_1 + 0x40),iVar1,0);
    memcpy(*(void **)(param_1 + 0x40),_Src,(longlong)iVar1 << 2);
  }
  *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(param_2 + 0x60);
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = uVar2;
  return param_1;
}



// FUNCTION 148fca59c FUN_148fca59c body=232 status=ok
// SIG undefined FUN_148fca59c(void)

undefined8 * FUN_148fca59c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  *param_1 = 0;
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
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[5] = 0;
  iVar1 = *(int *)(param_2 + 6);
  uVar3 = param_2[5];
  *(int *)(param_1 + 6) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_148fc9d74(param_1 + 5,iVar1,0);
    FUN_148fc9de7(param_1[5],uVar3,iVar1);
  }
  return param_1;
}



// FUNCTION 148fca686 FUN_148fca686 body=136 status=ok
// SIG undefined FUN_148fca686(void)

longlong * FUN_148fca686(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  void *_Src;
  longlong lVar3;
  
  plVar2 = (longlong *)*param_2;
  *param_1 = (longlong)plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  param_1[2] = 0;
  iVar1 = (int)param_2[3];
  _Src = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar1 * 2);
  }
  *(int *)(param_1 + 6) = (int)param_2[6];
  lVar3 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = lVar3;
  return param_1;
}



// FUNCTION 148fca70e FUN_148fca70e body=52 status=ok
// SIG undefined FUN_148fca70e(void)

void FUN_148fca70e(longlong *param_1)

{
  FUN_148fca742();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148fca742 FUN_148fca742 body=304 status=ok
// SIG undefined FUN_148fca742(void)

void FUN_148fca742(longlong *param_1)

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
      FUN_148fca874((longlong)iStack_4c * 0x80 + *local_68);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14095c99c(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fca874 FUN_148fca874 body=62 status=ok
// SIG undefined FUN_148fca874(void)

void FUN_148fca874(longlong *param_1)

{
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_148fc9ca0(param_1 + 2);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148fca8b2 FUN_148fca8b2 body=52 status=ok
// SIG undefined FUN_148fca8b2(void)

void FUN_148fca8b2(longlong *param_1)

{
  FUN_148fca8e6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148fca8e6 FUN_148fca8e6 body=312 status=ok
// SIG undefined FUN_148fca8e6(void)

void FUN_148fca8e6(longlong *param_1)

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
      if (*(longlong *)(*local_68 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
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
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fcaa20 FUN_148fcaa20 body=52 status=ok
// SIG undefined FUN_148fcaa20(void)

void FUN_148fcaa20(longlong *param_1)

{
  FUN_148fcaa54();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148fcaa54 FUN_148fcaa54 body=312 status=ok
// SIG undefined FUN_148fcaa54(void)

void FUN_148fcaa54(longlong *param_1)

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
      if (*(longlong *)(*local_68 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
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
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fcab8e FUN_148fcab8e body=38 status=ok
// SIG undefined FUN_148fcab8e(void)

undefined8 FUN_148fcab8e(undefined8 param_1,int param_2)

{
  FUN_148fcacc4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fcabb4 FUN_148fcabb4 body=271 status=ok
// SIG undefined FUN_148fcabb4(void)

void FUN_148fcabb4(longlong param_1,longlong *param_2,char param_3)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined4 local_70;
  wchar_t *local_68;
  undefined4 local_60;
  wchar_t *local_58;
  undefined4 local_50;
  wchar_t *local_48;
  undefined4 local_40;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_3 == '\0') {
    (**(code **)(*param_2 + 0x18))(param_2);
  }
  local_38 = L"RegionId";
  local_30 = 8;
  (**(code **)(*param_2 + 0x68))(param_2,&local_38,param_1 + 8);
  local_48 = L"ParentRegionId";
  local_40 = 0xe;
  (**(code **)(*param_2 + 0x68))(param_2,&local_48,param_1 + 0x18);
  local_58 = L"bUsable";
  local_50 = 7;
  (**(code **)(*param_2 + 0x70))(param_2,&local_58,param_1 + 0x30);
  local_68 = L"AvgPing";
  local_60 = 7;
  (**(code **)(*param_2 + 0x88))(param_2,&local_68,param_1 + 0x2c);
  local_78 = L"NumResults";
  local_70 = 10;
  (**(code **)(*param_2 + 0x88))(param_2,&local_78,param_1 + 0x28);
  if (param_3 == '\0') {
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fcacc4 FUN_148fcacc4 body=59 status=ok
// SIG undefined FUN_148fcacc4(void)

void FUN_148fcacc4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba50be0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  FUN_14279e9fa(param_1);
  return;
}



// FUNCTION 148fcad00 FUN_148fcad00 body=108 status=ok
// SIG undefined FUN_148fcad00(void)

void FUN_148fcad00(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x68,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x68)) {
      uVar2 = uVar1 / 0x68 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x68,8);
  }
  return;
}



// FUNCTION 148fcad6c FUN_148fcad6c body=143 status=ok
// SIG undefined FUN_148fcad6c(void)

void FUN_148fcad6c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x68,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x68)) {
      uVar5 = uVar4 / 0x68 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x68,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148fcadfc FUN_148fcadfc body=130 status=ok
// SIG undefined FUN_148fcadfc(void)

void FUN_148fcadfc(longlong *param_1,longlong *param_2)

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



// FUNCTION 148fcae80 FUN_148fcae80 body=24 status=ok
// SIG undefined FUN_148fcae80(void)

void FUN_148fcae80(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148fcae94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 148fcae98 FUN_148fcae98 body=29 status=ok
// SIG undefined FUN_148fcae98(void)

undefined8 FUN_148fcae98(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fcaeb6 FUN_148fcaeb6 body=147 status=ok
// SIG undefined FUN_148fcaeb6(void)

void FUN_148fcaeb6(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148fcaf4a FUN_148fcaf4a body=31 status=ok
// SIG undefined FUN_148fcaf4a(void)

undefined8 FUN_148fcaf4a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fcaf86 FUN_148fcaf86 body=93 status=ok
// SIG undefined FUN_148fcaf86(void)

void FUN_148fcaf86(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba50d70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148fcafe4 FUN_148fcafe4 body=126 status=ok
// SIG undefined FUN_148fcafe4(void)

void FUN_148fcafe4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba50d70;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148fcb053. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148fcb062 FUN_148fcb062 body=21 status=ok
// SIG undefined FUN_148fcb062(void)

undefined8 FUN_148fcb062(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148fcb078 FUN_148fcb078 body=45 status=ok
// SIG undefined FUN_148fcb078(void)

longlong FUN_148fcb078(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_145cb887a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fcb0a6 FUN_148fcb0a6 body=24 status=ok
// SIG undefined FUN_148fcb0a6(void)

void FUN_148fcb0a6(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148fcb0ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 148fcb0be FUN_148fcb0be body=29 status=ok
// SIG undefined FUN_148fcb0be(void)

undefined8 FUN_148fcb0be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fcb0dc FUN_148fcb0dc body=62 status=ok
// SIG undefined FUN_148fcb0dc(void)

void FUN_148fcb0dc(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148fcb11a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x48,8);
  }
  return;
}



// FUNCTION 148fcb11a FUN_148fcb11a body=112 status=ok
// SIG undefined FUN_148fcb11a(void)

ulonglong FUN_148fcb11a(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x48) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148fcb154;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x48,8);
      param_2 = param_2 / 0x48;
    }
  }
LAB_148fcb154:
  return param_2 & 0xffffffff;
}



// FUNCTION 148fcb18a FUN_148fcb18a body=95 status=ok
// SIG undefined FUN_148fcb18a(void)

longlong FUN_148fcb18a(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_148fca686();
  *(undefined8 *)(param_1 + 0x38) = 0;
  iVar1 = *(int *)(param_2 + 0x40);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  *(int *)(param_1 + 0x40) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  else {
    FUN_148fca478((undefined8 *)(param_1 + 0x38),iVar1,0);
    FUN_148fca4e7(*(undefined8 *)(param_1 + 0x38),uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 148fcb1ea FUN_148fcb1ea body=147 status=ok
// SIG undefined FUN_148fcb1ea(void)

void FUN_148fcb1ea(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x48,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x48)) {
      uVar5 = uVar4 / 0x48 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x48,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148fcb27e FUN_148fcb27e body=29 status=ok
// SIG undefined FUN_148fcb27e(void)

undefined8 FUN_148fcb27e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fcb2b6 FUN_148fcb2b6 body=29 status=ok
// SIG undefined FUN_148fcb2b6(void)

bool FUN_148fcb2b6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148fcb2d4 FUN_148fcb2d4 body=26 status=ok
// SIG undefined FUN_148fcb2d4(void)

bool FUN_148fcb2d4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148fcb2ee FUN_148fcb2ee body=24 status=ok
// SIG undefined FUN_148fcb2ee(void)

bool FUN_148fcb2ee(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148fcb312 FUN_148fcb312 body=93 status=ok
// SIG undefined FUN_148fcb312(void)

void FUN_148fcb312(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba50fc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba50f50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148fcb370 FUN_148fcb370 body=93 status=ok
// SIG undefined FUN_148fcb370(void)

void FUN_148fcb370(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba50fc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba50f50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148fcb3ce FUN_148fcb3ce body=126 status=ok
// SIG undefined FUN_148fcb3ce(void)

void FUN_148fcb3ce(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ba50fc0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba50f50;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148fcb43d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148fcb44c FUN_148fcb44c body=56 status=ok
// SIG undefined FUN_148fcb44c(void)

void FUN_148fcb44c(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148fcb481. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148fcb484 FUN_148fcb484 body=182 status=ok
// SIG undefined FUN_148fcb484(void)

bool FUN_148fcb484(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    local_48 = param_5;
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


