// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144d409b0 FUN_144d409b0 body=97 status=ok
// SIG undefined FUN_144d409b0(void)

undefined8 FUN_144d409b0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_145077820(*(undefined8 *)(param_2 + 0x70));
  if (lVar1 != 0) {
    FUN_14507abb0(lVar1,param_2,param_3,param_4);
    return 1;
  }
  return 2;
}



// FUNCTION 144d40ac0 FUN_144d40ac0 body=608 status=ok
// SIG undefined FUN_144d40ac0(void)

int FUN_144d40ac0(undefined8 param_1,uint param_2,__uint64 param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6,int param_7,undefined8 param_8,
                 undefined4 param_9)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  CAkRegisteredObj *pCVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined8 in_stack_ffffffffffffff90;
  undefined4 uVar9;
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  longlong local_50;
  __uint64 local_48;
  int local_40;
  undefined4 local_3c;
  longlong local_38 [2];
  undefined4 local_28;
  
  lVar3 = DAT_14c791060;
  if (DAT_14c790ff4 != '\0') {
    do {
      while( true ) {
        uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff90 >> 0x20);
        iVar4 = *(int *)(lVar3 + 0x108);
        if (-1 < iVar4) break;
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x110));
        uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff90 >> 0x20);
        if (*(int *)(lVar3 + 0x108) < 0) goto LAB_144d40b17;
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x110));
      }
      LOCK();
      bVar8 = iVar4 == *(int *)(lVar3 + 0x108);
      if (bVar8) {
        *(int *)(lVar3 + 0x108) = iVar4 + 1;
      }
      UNLOCK();
    } while (!bVar8);
LAB_144d40b17:
    plVar6 = (longlong *)0x0;
    if (*(uint *)(lVar3 + 0x150) != 0) {
      for (plVar2 = *(longlong **)
                     (*(longlong *)(lVar3 + 0x148) +
                     ((ulonglong)param_2 % (ulonglong)*(uint *)(lVar3 + 0x150)) * 8);
          (plVar7 = plVar6, plVar2 != (longlong *)0x0 &&
          (plVar7 = plVar2, *(uint *)(plVar2 + 2) != param_2)); plVar2 = (longlong *)plVar2[1]) {
      }
      plVar6 = plVar7;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar7 + 0x14) = *(int *)((longlong)plVar7 + 0x14) + 1;
        UNLOCK();
      }
    }
    iVar4 = *(int *)(lVar3 + 0x108);
    while (-1 < iVar4) {
      LOCK();
      bVar8 = iVar4 == *(int *)(lVar3 + 0x108);
      if (bVar8) {
        *(int *)(lVar3 + 0x108) = iVar4 + -1;
      }
      UNLOCK();
      if (bVar8) {
        if ((iVar4 + -1 == 0) && (0 < *(int *)(lVar3 + 0x138))) {
          SetEvent(*(HANDLE *)(lVar3 + 0x140));
        }
        goto LAB_144d40bb7;
      }
      iVar4 = *(int *)(lVar3 + 0x108);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x110));
LAB_144d40bb7:
    if (plVar6 != (longlong *)0x0) {
      local_38[1] = 0;
      local_28 = 0;
      if (param_7 == 0) {
        local_38[0] = 0;
      }
      else {
        iVar4 = FUN_144d4a250(param_7,param_8,&local_50,local_54);
        if (iVar4 != 1) {
          return 0;
        }
        local_38[0] = local_50;
      }
      LOCK();
      UNLOCK();
      local_40 = AK::SoundEngine::g_PlayingID + 1;
      local_3c = param_9;
      AK::SoundEngine::g_PlayingID = AK::SoundEngine::g_PlayingID + 1;
      local_48 = param_3;
      iVar4 = FUN_1450b20a0(DAT_14c790fc0,&local_48,param_5,param_6,param_4,
                            CONCAT44(uVar9,(int)plVar6[2]));
      if (iVar4 == 1) {
        FUN_1450719c0(local_58);
        pCVar5 = CAkRegistryMgr::GetObj(g_pRegistryMgr,local_48);
        FUN_145087840(plVar6,pCVar5,local_48,local_40,local_3c,local_38,0,0);
        FUN_1450b28b0(DAT_14c790fc0,local_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0x14);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar6 + 0x18))(plVar6);
        }
        if (local_38[0] != 0) {
          FUN_144d4a460();
        }
        iVar4 = local_40;
        FUN_1450719f0(local_58);
        return iVar4;
      }
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0x14);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
    }
  }
  return 0;
}



// FUNCTION 144d40d20 FUN_144d40d20 body=806 status=ok
// SIG undefined FUN_144d40d20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong *
FUN_144d40d20(undefined8 param_1,uint param_2,longlong param_3,undefined4 *param_4,ushort param_5,
             byte param_6,undefined4 param_7,undefined8 param_8,undefined8 param_9,int param_10)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  longlong *plVar5;
  code *pcVar6;
  undefined8 uVar7;
  uint uVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  char cVar13;
  ushort uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  longlong *plVar19;
  undefined1 *puVar20;
  undefined4 *puVar21;
  uint uVar22;
  longlong *plVar23;
  bool bVar24;
  undefined8 uStack_80;
  undefined1 auStack_78 [32];
  undefined8 uStack_58;
  undefined4 auStack_50 [6];
  longlong local_38 [2];
  
  lVar9 = DAT_14c791060;
  puVar20 = auStack_78;
  if (DAT_14c790ff4 == '\0') {
    return (longlong *)&DAT_00000066;
  }
  uVar17 = (ulonglong)param_5;
  if ((param_5 == 0) || (param_4 == (undefined4 *)0x0)) {
    return (longlong *)&DAT_0000001f;
  }
  do {
    while (iVar18 = *(int *)(lVar9 + 0x108), iVar18 < 0) {
      uStack_80 = 0x144d40dea;
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar9 + 0x110));
      if (*(int *)(lVar9 + 0x108) < 0) goto LAB_144d40d97;
      uStack_80 = 0x144d40e01;
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar9 + 0x110));
    }
    LOCK();
    bVar24 = iVar18 == *(int *)(lVar9 + 0x108);
    if (bVar24) {
      *(int *)(lVar9 + 0x108) = iVar18 + 1;
    }
    UNLOCK();
  } while (!bVar24);
LAB_144d40d97:
  plVar23 = (longlong *)0x0;
  plVar19 = plVar23;
  if (*(uint *)(lVar9 + 0x150) != 0) {
    for (plVar5 = *(longlong **)
                   (*(longlong *)(lVar9 + 0x148) +
                   ((ulonglong)param_2 % (ulonglong)*(uint *)(lVar9 + 0x150)) * 8);
        (plVar19 = plVar23, plVar5 != (longlong *)0x0 &&
        (plVar19 = plVar5, *(uint *)(plVar5 + 2) != param_2)); plVar5 = (longlong *)plVar5[1]) {
    }
    if (plVar19 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar19 + 0x14) = *(int *)((longlong)plVar19 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar18 = *(int *)(lVar9 + 0x108);
  while (-1 < iVar18) {
    LOCK();
    bVar24 = iVar18 == *(int *)(lVar9 + 0x108);
    if (bVar24) {
      *(int *)(lVar9 + 0x108) = iVar18 + -1;
    }
    UNLOCK();
    if (bVar24) {
      if ((iVar18 + -1 == 0) && (0 < *(int *)(lVar9 + 0x138))) {
        uStack_80 = 0x144d40ea4;
        SetEvent(*(HANDLE *)(lVar9 + 0x140));
      }
      goto LAB_144d40e37;
    }
    iVar18 = *(int *)(lVar9 + 0x108);
  }
  uStack_80 = 0x144d40e37;
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar9 + 0x110));
LAB_144d40e37:
  if (plVar19 != (longlong *)0x0) {
    uStack_80 = 0x144d40e41;
    uVar14 = FUN_145087e60();
    uVar22 = (uint)uVar14 + ((uint)param_5 + (uint)param_5 * 4) * 4;
    uVar8 = *(uint *)(DAT_14c790fd8 + 0x30);
    if (0xffff < *(uint *)(DAT_14c790fd8 + 0x30)) {
      uVar8 = 0xffff;
    }
    if (uVar8 < uVar22) {
      uStack_80 = 0x144d40e6a;
      FUN_145087e60();
    }
    else {
      uVar16 = (ulonglong)uVar22 + 0xf;
      if (uVar16 <= uVar22) {
        uVar16 = 0xffffffffffffff0;
      }
      uStack_80 = 0x144d40ec8;
      lVar9 = -(uVar16 & 0xfffffffffffffff0);
      puVar20 = auStack_78 + lVar9;
      plVar5 = (longlong *)((longlong)local_38 + lVar9);
      *(longlong **)((longlong)local_38 + lVar9 + 8) = plVar19;
      *(uint *)(&stack0xffffffffffffffd8 + lVar9) = param_2;
      *plVar5 = param_3;
      *(ushort *)(&stack0xffffffffffffffe0 + lVar9) = (ushort)param_6;
      *(ushort *)(&stack0xffffffffffffffe2 + lVar9) = param_5;
      puVar21 = param_4;
      if (param_5 != 0) {
        do {
          uVar4 = puVar21[1];
          uVar10 = puVar21[2];
          uVar11 = puVar21[3];
          puVar2 = puVar21 + 5;
          puVar3 = (undefined4 *)((longlong)plVar5 + (8 - (longlong)param_4) + (longlong)puVar2);
          *puVar3 = *puVar21;
          puVar3[1] = uVar4;
          puVar3[2] = uVar10;
          puVar3[3] = uVar11;
          *(undefined4 *)((longlong)plVar5 + (0x18 - (longlong)param_4) + (longlong)puVar2) =
               puVar21[4];
          uVar17 = uVar17 - 1;
          puVar21 = puVar2;
        } while (uVar17 != 0);
      }
      *(undefined4 *)(&stack0xffffffffffffffdc + lVar9) = 0;
      if (param_10 != 0) {
        *(undefined8 *)(auStack_78 + lVar9 + -8) = 0x144d40f3b;
        cVar13 = FUN_1450b22b0(DAT_14c790fc0,param_10,param_3,param_2);
        if (cVar13 != '\0') {
          *(int *)(&stack0xffffffffffffffdc + lVar9) = param_10;
        }
      }
      if (*(int *)(&stack0xffffffffffffffdc + lVar9) != 0) {
LAB_144d40f9a:
        *(undefined8 *)(auStack_78 + lVar9 + -8) = 0x144d40fa3;
        FUN_1450719c0(local_38);
        lVar12 = plVar19[2];
        uVar4 = *(undefined4 *)(&stack0xffffffffffffffdc + lVar9);
        lVar15 = *plVar5;
        *(undefined **)((longlong)&uStack_58 + lVar9) = PTR_s_PostMIDIOnEvent_14c703ea8;
        *(undefined8 *)(auStack_78 + lVar9 + -8) = 0x144d40fc6;
        lVar15 = FUN_1450ac5c0(g_pRegistryMgr,lVar15,uVar4,(int)lVar12);
        if ((*(uint *)(&stack0xffffffffffffffdc + lVar9) != 0) && ((lVar15 != 0 || (*plVar5 == -1)))
           ) {
          uVar7 = *(undefined8 *)((longlong)local_38 + lVar9 + 8);
          plVar23 = (longlong *)(ulonglong)*(uint *)(&stack0xffffffffffffffdc + lVar9);
          *(undefined8 *)(auStack_78 + lVar9 + -8) = 0x144d40ff1;
          FUN_1450844c0(DAT_14c790fd8,uVar7,plVar5,lVar15);
        }
        uVar4 = *(undefined4 *)(&stack0xffffffffffffffdc + lVar9);
        *(undefined8 *)(auStack_78 + lVar9 + -8) = 0x144d41000;
        FUN_1450b28b0(DAT_14c790fc0,uVar4);
        plVar19 = *(longlong **)((longlong)local_38 + lVar9 + 8);
        LOCK();
        piVar1 = (int *)((longlong)plVar19 + 0x14);
        iVar18 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          pcVar6 = *(code **)(*plVar19 + 0x18);
          *(undefined8 *)(auStack_78 + lVar9 + -8) = 0x144d41019;
          (*pcVar6)();
        }
        *(undefined8 *)(auStack_78 + lVar9 + -8) = 0x144d41022;
        FUN_1450719f0(local_38);
        return plVar23;
      }
      LOCK();
      UNLOCK();
      iVar18 = AK::SoundEngine::g_PlayingID + 1;
      *(int *)(&stack0xffffffffffffffdc + lVar9) = iVar18;
      *(int *)((longlong)auStack_50 + lVar9 + 8) = (int)plVar19[2];
      *(undefined4 *)((longlong)auStack_50 + lVar9) = param_7;
      *(undefined8 *)((longlong)&uStack_58 + lVar9) = param_9;
      *(undefined8 *)(auStack_78 + lVar9 + -8) = 0x144d40f87;
      AK::SoundEngine::g_PlayingID = AK::SoundEngine::g_PlayingID + 1;
      iVar18 = FUN_1450b20e0(DAT_14c790fc0,iVar18,param_3,param_8);
      if (iVar18 != 1) {
        *(undefined4 *)(&stack0xffffffffffffffdc + lVar9) = 0;
      }
      if (*(int *)(&stack0xffffffffffffffdc + lVar9) != 0) goto LAB_144d40f9a;
    }
    LOCK();
    piVar1 = (int *)((longlong)plVar19 + 0x14);
    iVar18 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar18 == 1) {
      pcVar6 = *(code **)(*plVar19 + 0x18);
      *(undefined8 *)(puVar20 + -8) = 0x144d40e82;
      (*pcVar6)(plVar19);
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 144d41050 FUN_144d41050 body=473 status=ok
// SIG undefined FUN_144d41050(void)

undefined4 FUN_144d41050(undefined8 param_1,uint param_2,longlong param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 local_28 [8];
  longlong local_20;
  longlong *local_18;
  uint local_10;
  undefined4 local_c;
  
  lVar4 = DAT_14c791060;
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  do {
    while (iVar2 = *(int *)(lVar4 + 0x108), iVar2 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x110));
      if (*(int *)(lVar4 + 0x108) < 0) goto LAB_144d410b7;
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x110));
    }
    LOCK();
    bVar6 = iVar2 == *(int *)(lVar4 + 0x108);
    if (bVar6) {
      *(int *)(lVar4 + 0x108) = iVar2 + 1;
    }
    UNLOCK();
  } while (!bVar6);
LAB_144d410b7:
  if (*(uint *)(lVar4 + 0x150) == 0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    for (plVar5 = *(longlong **)
                   (*(longlong *)(lVar4 + 0x148) +
                   ((ulonglong)param_2 % (ulonglong)*(uint *)(lVar4 + 0x150)) * 8);
        plVar5 != (longlong *)0x0; plVar5 = (longlong *)plVar5[1]) {
      if (*(uint *)(plVar5 + 2) == param_2) goto LAB_144d410e7;
    }
    plVar5 = (longlong *)0x0;
LAB_144d410e7:
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar5 + 0x14) = *(int *)((longlong)plVar5 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar2 = *(int *)(lVar4 + 0x108);
  do {
    if (iVar2 < 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x110));
LAB_144d41154:
      if ((plVar5 == (longlong *)0x0) && (param_2 != 0)) {
        uVar3 = 2;
      }
      else {
        FUN_1450719c0(local_28);
        lVar4 = FUN_1450ac5c0(g_pRegistryMgr,param_3,0,(ulonglong)param_2,
                              PTR_s_StopMIDIOnEvent_14c703eb0);
        if ((lVar4 != 0) || (param_3 == -1)) {
          local_20 = param_3;
          local_18 = plVar5;
          local_10 = param_2;
          local_c = param_4;
          FUN_1450846e0(DAT_14c790fd8,plVar5,&local_20,lVar4);
        }
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0x14);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar5 + 0x18))(plVar5);
          }
        }
        FUN_1450719f0(local_28);
        uVar3 = 1;
      }
      return uVar3;
    }
    LOCK();
    bVar6 = iVar2 == *(int *)(lVar4 + 0x108);
    if (bVar6) {
      *(int *)(lVar4 + 0x108) = iVar2 + -1;
    }
    UNLOCK();
    if (bVar6) {
      if ((iVar2 + -1 == 0) && (0 < *(int *)(lVar4 + 0x138))) {
        SetEvent(*(HANDLE *)(lVar4 + 0x140));
      }
      goto LAB_144d41154;
    }
    iVar2 = *(int *)(lVar4 + 0x108);
  } while( true );
}



// FUNCTION 144d412d0 FUN_144d412d0 body=62 status=ok
// SIG undefined FUN_144d412d0(void)

void FUN_144d412d0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1450b4d90();
                    /* WARNING: Could not recover jumptable at 0x000144d4130b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar1)(puVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 144d41310 FUN_144d41310 body=30 status=ok
// SIG undefined FUN_144d41310(void)

void FUN_144d41310(undefined8 param_1,undefined8 *param_2)

{
  FUN_1450b4760(*param_2);
  *param_2 = 0;
  return;
}



// FUNCTION 144d41410 FUN_144d41410 body=225 status=ok
// SIG undefined FUN_144d41410(void)

void FUN_144d41410(undefined8 param_1,undefined4 param_2,undefined4 param_3,__uint64 param_4,
                  undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  undefined4 local_res20;
  undefined4 local_res24;
  undefined4 uStack_64;
  undefined4 *local_60;
  undefined1 local_58;
  undefined1 local_57;
  CAkRegisteredObj *local_50;
  undefined4 local_48;
  undefined4 local_40;
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_28;
  
  if (param_4 == 0xffffffffffffffff) {
    local_50 = (CAkRegisteredObj *)0x0;
  }
  else {
    local_50 = CAkRegistryMgr::GetObj(g_pRegistryMgr,param_4);
  }
  local_res20 = param_5;
  local_res24 = param_6;
  local_60 = &local_res20;
  local_58 = param_7;
  local_57 = 1;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0xff;
  local_30 = 0xff;
  local_28 = 0;
  FUN_14507f370(g_pGameSyncMgr,CONCAT44(uStack_64,param_2) & 0xffffff00ffffffff,&local_50,param_3,
                &local_60,1,0);
  return;
}



// FUNCTION 144d41520 FUN_144d41520 body=43 status=ok
// SIG undefined FUN_144d41520(void)

undefined8 * FUN_144d41520(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d0f30;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 144d41560 FUN_144d41560 body=154 status=ok
// SIG undefined FUN_144d41560(void)

undefined4 FUN_144d41560(char *param_1)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (DAT_14c791048 == (char *)0x0) {
    lVar4 = -1;
    do {
      lVar5 = lVar4;
      lVar4 = lVar5 + 1;
    } while (param_1[lVar4] != '\0');
    pcVar3 = AK::MemoryMgr::Malloc(0x10,lVar5 + 2);
    DAT_14c791048 = pcVar3;
    if (pcVar3 == (char *)0x0) {
      return 0x34;
    }
    do {
      cVar1 = *param_1;
      param_1 = param_1 + 1;
      *pcVar3 = cVar1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
  }
  else {
    lVar4 = (longlong)DAT_14c791048 - (longlong)param_1;
    do {
      cVar1 = *param_1;
      cVar2 = param_1[lVar4];
      if (cVar1 != cVar2) break;
      param_1 = param_1 + 1;
    } while (cVar2 != '\0');
    if (cVar1 != cVar2) {
      return 0x53;
    }
  }
  return 1;
}



// FUNCTION 144d41600 FUN_144d41600 body=510 status=ok
// SIG undefined FUN_144d41600(void)

longlong *
FUN_144d41600(uint param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 *param_6,undefined4 param_7)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  
  lVar8 = DAT_14c791060;
  if (DAT_14c790ff4 != '\0') {
    do {
      while (iVar7 = *(int *)(lVar8 + 0x108), iVar7 < 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x110));
        if (*(int *)(lVar8 + 0x108) < 0) goto LAB_144d4164c;
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x110));
      }
      LOCK();
      bVar11 = iVar7 == *(int *)(lVar8 + 0x108);
      if (bVar11) {
        *(int *)(lVar8 + 0x108) = iVar7 + 1;
      }
      UNLOCK();
    } while (!bVar11);
LAB_144d4164c:
    plVar9 = (longlong *)0x0;
    plVar10 = plVar9;
    if (*(uint *)(lVar8 + 0x150) != 0) {
      for (plVar2 = *(longlong **)
                     (*(longlong *)(lVar8 + 0x148) +
                     ((ulonglong)param_1 % (ulonglong)*(uint *)(lVar8 + 0x150)) * 8);
          (plVar10 = plVar9, plVar2 != (longlong *)0x0 &&
          (plVar10 = plVar2, *(uint *)(plVar2 + 2) != param_1)); plVar2 = (longlong *)plVar2[1]) {
      }
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar10 + 0x14) = *(int *)((longlong)plVar10 + 0x14) + 1;
        UNLOCK();
      }
    }
    iVar7 = *(int *)(lVar8 + 0x108);
    while (-1 < iVar7) {
      LOCK();
      bVar11 = iVar7 == *(int *)(lVar8 + 0x108);
      if (bVar11) {
        *(int *)(lVar8 + 0x108) = iVar7 + -1;
      }
      UNLOCK();
      if (bVar11) {
        if ((iVar7 + -1 == 0) && (0 < *(int *)(lVar8 + 0x138))) {
          SetEvent(*(HANDLE *)(lVar8 + 0x140));
        }
        goto LAB_144d416e4;
      }
      iVar7 = *(int *)(lVar8 + 0x108);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x110));
LAB_144d416e4:
    if (plVar10 != (longlong *)0x0) {
      uVar6 = FUN_145087e70();
      lVar8 = FUN_145080f50(DAT_14c790fd8,1,uVar6);
      *(longlong **)(lVar8 + 0x28) = plVar10;
      *(uint *)(lVar8 + 0x30) = param_1;
      if (param_6 == (undefined4 *)0x0) {
        *(undefined8 *)(lVar8 + 0x1c) = 0;
        *(undefined4 *)(lVar8 + 0x24) = 0;
        *(undefined8 *)(lVar8 + 0x14) = 0;
      }
      else {
        uVar3 = param_6[1];
        uVar4 = param_6[2];
        uVar5 = param_6[3];
        *(undefined4 *)(lVar8 + 0x14) = *param_6;
        *(undefined4 *)(lVar8 + 0x18) = uVar3;
        *(undefined4 *)(lVar8 + 0x1c) = uVar4;
        *(undefined4 *)(lVar8 + 0x20) = uVar5;
        *(undefined4 *)(lVar8 + 0x24) = param_6[4];
      }
      LOCK();
      UNLOCK();
      iVar7 = AK::SoundEngine::g_PlayingID + 1;
      AK::SoundEngine::g_PlayingID = AK::SoundEngine::g_PlayingID + 1;
      *(int *)(lVar8 + 0xc) = iVar7;
      *(undefined4 *)(lVar8 + 0x10) = param_7;
      *(undefined8 *)(lVar8 + 4) = param_2;
      iVar7 = FUN_1450b20a0(DAT_14c790fc0,(undefined8 *)(lVar8 + 4),param_4,param_5,param_3,
                            *(undefined4 *)(*(longlong *)(lVar8 + 0x28) + 0x10));
      if (iVar7 == 1) {
        plVar9 = (longlong *)(ulonglong)*(uint *)(lVar8 + 0xc);
      }
      else {
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0x14);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar10 + 0x18))(plVar10);
        }
        *(undefined2 *)(lVar8 + 2) = 0x41;
      }
      LOCK();
      *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
      UNLOCK();
      return plVar9;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 144d41800 FUN_144d41800 body=128 status=ok
// SIG undefined FUN_144d41800(void)

undefined8 FUN_144d41800(undefined4 param_1,undefined4 param_2,ushort param_3,byte param_4)

{
  undefined2 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (DAT_14c790ff4 == '\0') {
    uVar2 = 0x66;
  }
  else {
    uVar1 = FUN_145087ea0();
    lVar3 = FUN_145080f50(DAT_14c790fd8,7,uVar1);
    *(undefined4 *)(lVar3 + 4) = param_1;
    *(undefined4 *)(lVar3 + 8) = param_2;
    *(ushort *)(lVar3 + 0xc) = param_3 & 0xff;
    *(ushort *)(lVar3 + 0xe) = (ushort)param_4;
    LOCK();
    *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
    UNLOCK();
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 144d41880 FUN_144d41880 body=276 status=ok
// SIG undefined FUN_144d41880(void)

undefined8 FUN_144d41880(float param_1,int param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float _Y;
  
  if ((-96.3 <= param_1) && (fVar3 = 0.0, param_1 <= 0.0)) {
    if (param_2 <= DAT_14c703d80) {
      _Y = param_1 * 0.05;
      DAT_14c703d80 = param_2;
      fVar2 = powf(10.0,_Y);
      if ((-37.0 <= _Y) && (_Y <= 37.0)) {
        uVar1 = (uint)(longlong)(_Y * 27866352.0 + 1.0653532e+09);
        fVar3 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
        fVar3 = ((fVar3 * 0.32518977 + 0.020805772) * fVar3 + 0.65304345) *
                (float)(uVar1 & 0xff800000);
      }
      DAT_14c72f440 = fVar3;
      DAT_14c72f444 = param_1;
      if (fVar3 <= fVar2) {
        DAT_14c72f440 = fVar2;
      }
    }
    return 1;
  }
  return 0x1f;
}



// FUNCTION 144d419a0 FUN_144d419a0 body=38 status=ok
// SIG undefined FUN_144d419a0(void)

undefined8 FUN_144d419a0(short param_1,int param_2)

{
  if (param_1 == 0) {
    return 0x1f;
  }
  if (param_2 <= DAT_14c703d84) {
    DAT_14c703d84 = param_2;
    DAT_14c79c440 = param_1;
  }
  return 1;
}



// FUNCTION 144d419d0 FUN_144d419d0 body=29 status=ok
// SIG undefined FUN_144d419d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_144d419d0(ushort param_1,int param_2)

{
  if (param_2 <= DAT_14c703d88) {
    _DAT_14c79c394 = (uint)param_1;
    DAT_14c703d88 = param_2;
  }
  return 1;
}



// FUNCTION 144d419f0 FUN_144d419f0 body=8 status=ok
// SIG undefined FUN_144d419f0(void)

void FUN_144d419f0(undefined8 param_1)

{
  DAT_14c791000 = param_1;
  return;
}



// FUNCTION 144d41a00 FUN_144d41a00 body=8 status=ok
// SIG undefined FUN_144d41a00(void)

void FUN_144d41a00(undefined8 param_1)

{
  DAT_14c791008 = param_1;
  return;
}



// FUNCTION 144d41a10 FUN_144d41a10 body=8 status=ok
// SIG undefined FUN_144d41a10(void)

void FUN_144d41a10(undefined8 param_1)

{
  DAT_14c791010 = param_1;
  return;
}



// FUNCTION 144d41a20 FUN_144d41a20 body=8 status=ok
// SIG undefined FUN_144d41a20(void)

void FUN_144d41a20(undefined8 param_1)

{
  DAT_14c791018 = param_1;
  return;
}



// FUNCTION 144d41a30 SetPositionInternal body=399 status=ok
// SIG AKRESULT SetPositionInternal(__uint64 param_1, AkWorldTransform * param_2, AkSetPositionFlags param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::SetPositionInternal(unsigned __int64,class
   AkWorldTransform const & __ptr64,enum AkSetPositionFlags) */

AKRESULT __cdecl
AK::SoundEngine::SetPositionInternal
          (__uint64 param_1,AkWorldTransform *param_2,AkSetPositionFlags param_3)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined2 uVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  
                    /* 0x4d41a30  306
                       ?SetPositionInternal@SoundEngine@AK@@YA?AW4AKRESULT@@_KAEBVAkWorldTransform@@W4AkSetPositionFlags@@@Z
                        */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  if ((((((param_3 & 3) != 0) &&
        ((*(ulonglong *)(param_2 + 0x18) & 0x7fffffffffffffff) < 0x7ff0000000000000)) &&
       ((*(ulonglong *)(param_2 + 0x20) & 0x7fffffffffffffff) < 0x7ff0000000000000)) &&
      (((*(ulonglong *)(param_2 + 0x28) & 0x7fffffffffffffff) < 0x7ff0000000000000 &&
       (fVar7 = *(float *)param_2 * *(float *)param_2 +
                *(float *)(param_2 + 4) * *(float *)(param_2 + 4) +
                *(float *)(param_2 + 8) * *(float *)(param_2 + 8), 0.9 < fVar7)))) && (fVar7 < 1.1))
  {
    fVar7 = *(float *)(param_2 + 0x10);
    fVar1 = *(float *)(param_2 + 0xc);
    fVar2 = *(float *)(param_2 + 0x14);
    fVar8 = fVar1 * fVar1 + fVar7 * fVar7 + fVar2 * fVar2;
    if (((0.9 < fVar8) && (fVar8 < 1.1)) &&
       (fVar7 = fVar1 * *(float *)param_2 + fVar7 * *(float *)(param_2 + 4) +
                fVar2 * *(float *)(param_2 + 8), fVar7 * fVar7 < 0.1)) {
      uVar5 = FUN_145087ef0();
      lVar6 = FUN_145080f50(DAT_14c790fd8,0xd,uVar5);
      *(__uint64 *)(lVar6 + 4) = param_1;
      uVar3 = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(lVar6 + 0xc) = *(undefined8 *)param_2;
      *(undefined8 *)(lVar6 + 0x14) = uVar3;
      uVar3 = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(lVar6 + 0x1c) = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(lVar6 + 0x24) = uVar3;
      uVar3 = *(undefined8 *)(param_2 + 0x20);
      uVar4 = *(undefined8 *)(param_2 + 0x28);
      *(char *)(lVar6 + 0x3c) = (char)param_3;
      *(undefined8 *)(lVar6 + 0x2c) = uVar3;
      *(undefined8 *)(lVar6 + 0x34) = uVar4;
      LOCK();
      *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
      UNLOCK();
      return 1;
    }
  }
  return 0x1f;
}



// FUNCTION 144d41bc0 PlaySourcePlugin body=158 status=ok
// SIG uint PlaySourcePlugin(uint param_1, uint param_2, __uint64 param_3)

/* unsigned int __cdecl AK::SoundEngine::PlaySourcePlugin(unsigned int,unsigned int,unsigned
   __int64) */

uint __cdecl AK::SoundEngine::PlaySourcePlugin(uint param_1,uint param_2,__uint64 param_3)

{
  longlong lVar1;
  uint uVar2;
  
                    /* 0x4d41bc0  178  ?PlaySourcePlugin@SoundEngine@AK@@YAIII_K@Z */
  if (DAT_14c790ff4 == '\0') {
    return 0;
  }
  FUN_145088060();
  lVar1 = FUN_145080f50(DAT_14c790fd8,0x29);
  *(undefined8 *)(lVar1 + 0x1c) = 0;
  *(undefined4 *)(lVar1 + 0x24) = 0;
  *(undefined8 *)(lVar1 + 0x14) = 0;
  *(uint *)(lVar1 + 0x28) = param_1;
  *(uint *)(lVar1 + 0x2c) = param_2;
  *(undefined4 *)(lVar1 + 0x30) = 0;
  LOCK();
  UNLOCK();
  uVar2 = g_PlayingID + 1;
  g_PlayingID = g_PlayingID + 1;
  *(__uint64 *)(lVar1 + 4) = param_3;
  *(uint *)(lVar1 + 0xc) = uVar2;
  *(undefined4 *)(lVar1 + 0x10) = 0;
  LOCK();
  *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
  UNLOCK();
  return uVar2;
}



// FUNCTION 144d41c60 StopSourcePlugin body=150 status=ok
// SIG AKRESULT StopSourcePlugin(uint param_1, uint param_2, uint param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::StopSourcePlugin(unsigned int,unsigned int,unsigned int)
    */

AKRESULT __cdecl AK::SoundEngine::StopSourcePlugin(uint param_1,uint param_2,uint param_3)

{
  undefined2 uVar1;
  longlong lVar2;
  
                    /* 0x4d41c60  334  ?StopSourcePlugin@SoundEngine@AK@@YA?AW4AKRESULT@@III@Z */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  uVar1 = FUN_145088060();
  lVar2 = FUN_145080f50(DAT_14c790fd8,0x29,uVar1);
  *(uint *)(lVar2 + 0x28) = param_1;
  *(uint *)(lVar2 + 0xc) = param_3;
  *(undefined8 *)(lVar2 + 0x1c) = 0;
  *(undefined4 *)(lVar2 + 0x24) = 0;
  *(undefined8 *)(lVar2 + 0x14) = 0;
  *(uint *)(lVar2 + 0x2c) = param_2;
  *(undefined4 *)(lVar2 + 0x30) = 1;
  *(undefined8 *)(lVar2 + 4) = 0xffffffffffffffff;
  LOCK();
  *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
  UNLOCK();
  return 1;
}



// FUNCTION 144d41d00 FUN_144d41d00 body=33 status=ok
// SIG undefined FUN_144d41d00(void)

void FUN_144d41d00(int param_1)

{
  if (DAT_14c791034 != param_1) {
    FUN_1450a70c0();
  }
  DAT_14c791034 = param_1;
  return;
}



// FUNCTION 144d41d30 FUN_144d41d30 body=262 status=ok
// SIG undefined FUN_144d41d30(void)

undefined8 * FUN_144d41d30(undefined8 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  DWORD DVar3;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  
  *param_1 = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 2));
  do {
    while (iVar2 = *param_2, 0 < iVar2) {
      if (*param_2 != 0) {
        local_res8.QuadPart = 0;
        local_res10.QuadPart = 0;
        QueryPerformanceCounter(&local_res8);
        local_res8.QuadPart = local_res8.QuadPart + (longlong)(DAT_14c79c4d4 * 0.01);
        iVar2 = *param_2;
        while ((iVar2 != 0 &&
               (QueryPerformanceCounter(&local_res10), local_res10.QuadPart <= local_res8.QuadPart))
              ) {
          iVar2 = *param_2;
        }
        iVar2 = *param_2;
        while (iVar2 != 0) {
          Sleep(1);
          iVar2 = *param_2;
        }
      }
      LOCK();
      param_2[0xc] = param_2[0xc] + 1;
      UNLOCK();
      if (*param_2 != 0) {
        WaitForSingleObject(*(HANDLE *)(param_2 + 0xe),0xffffffff);
      }
      LOCK();
      param_2[0xc] = param_2[0xc] + -1;
      UNLOCK();
    }
    LOCK();
    iVar1 = *param_2;
    if (iVar2 == iVar1) {
      *param_2 = iVar2 + -1;
    }
    UNLOCK();
  } while (iVar2 != iVar1);
  DVar3 = GetCurrentThreadId();
  param_2[1] = DVar3;
  return param_1;
}



// FUNCTION 144d41e40 FUN_144d41e40 body=181 status=ok
// SIG undefined FUN_144d41e40(void)

ulonglong FUN_144d41e40(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  *param_3 = 0;
  if ((*(uint *)(param_1 + 1) == 0) ||
     (uVar4 = (ulonglong)*(uint *)(param_1 + 2), 0.9 < (float)uVar4 / (float)*(uint *)(param_1 + 1))
     ) {
    uVar4 = FUN_144d41f00();
  }
  if (*(uint *)(param_1 + 1) == 0) {
LAB_144d41edd:
    uVar4 = uVar4 & 0xffffffffffffff00;
  }
  else {
    uVar3 = (ulonglong)*(uint *)(param_2 + 0x10) % (ulonglong)*(uint *)(param_1 + 1);
    uVar1 = *(ulonglong *)(*param_1 + uVar3 * 8);
    for (uVar4 = uVar1; uVar4 != 0; uVar4 = *(ulonglong *)(uVar4 + 8)) {
      if (*(uint *)(uVar4 + 0x10) == *(uint *)(param_2 + 0x10)) {
        *param_3 = 1;
        goto LAB_144d41edd;
      }
    }
    *(ulonglong *)(param_2 + 8) = uVar1;
    lVar2 = *param_1;
    *(longlong *)(lVar2 + uVar3 * 8) = param_2;
    uVar4 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  }
  return uVar4;
}



// FUNCTION 144d41f00 FUN_144d41f00 body=379 status=ok
// SIG undefined FUN_144d41f00(void)

undefined8 FUN_144d41f00(longlong *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong *plVar5;
  void *pvVar6;
  longlong lVar7;
  longlong lVar8;
  void *pvVar9;
  undefined8 uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint *puVar14;
  longlong *plVar15;
  ulonglong uVar16;
  
  uVar11 = 0;
  puVar14 = &DAT_1499d09c0;
  do {
    uVar2 = *puVar14;
    uVar12 = (ulonglong)uVar2;
    if (param_2 < uVar2) {
      if (uVar2 == 0) {
        return 2;
      }
      uVar11 = *(uint *)(param_1 + 1);
      uVar16 = (ulonglong)uVar11;
      plVar5 = (longlong *)*param_1;
      uVar3 = *(undefined4 *)((longlong)param_1 + 0xc);
      param_1[1] = 0;
      *param_1 = 0;
      pvVar9 = AK::MemoryMgr::Malloc(0,uVar12 * 8);
      pvVar6 = (void *)*param_1;
      if (pvVar9 == (void *)0x0) {
        if (pvVar6 != (void *)0x0) {
          *(undefined4 *)(param_1 + 1) = 0;
          AK::MemoryMgr::Free(0,pvVar6);
        }
        *param_1 = (longlong)plVar5;
        uVar10 = 2;
        *(uint *)(param_1 + 1) = uVar11;
        *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
      }
      else {
        if ((pvVar6 != (void *)0x0) && (pvVar6 != pvVar9)) {
          AK::MemoryMgr::Free(0,pvVar6);
        }
        *param_1 = (longlong)pvVar9;
        *(uint *)((longlong)param_1 + 0xc) = uVar2;
        uVar13 = uVar12;
        do {
          uVar4 = *(uint *)(param_1 + 1);
          if (uVar4 < (uint)uVar12) {
            *(uint *)(param_1 + 1) = uVar4 + 1;
            puVar1 = (undefined8 *)(*param_1 + (ulonglong)uVar4 * 8);
            if (puVar1 != (undefined8 *)0x0) {
              *puVar1 = 0;
              uVar12 = (ulonglong)*(uint *)((longlong)param_1 + 0xc);
            }
          }
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
        plVar15 = plVar5;
        if (uVar11 != 0) {
          do {
            lVar8 = *plVar15;
            while (lVar8 != 0) {
              lVar7 = *(longlong *)(lVar8 + 8);
              uVar12 = (ulonglong)*(uint *)(lVar8 + 0x10) % (ulonglong)uVar2;
              *(undefined8 *)(lVar8 + 8) = *(undefined8 *)(*param_1 + uVar12 * 8);
              *(longlong *)(*param_1 + uVar12 * 8) = lVar8;
              lVar8 = lVar7;
            }
            uVar16 = uVar16 - 1;
            plVar15 = plVar15 + 1;
          } while (uVar16 != 0);
        }
        if (plVar5 != (longlong *)0x0) {
          AK::MemoryMgr::Free(0,plVar5);
        }
        uVar10 = 1;
      }
      return uVar10;
    }
    uVar11 = uVar11 + 1;
    puVar14 = puVar14 + 1;
  } while (uVar11 < 0x1b);
  return 2;
}



// FUNCTION 144d42080 IsInitialized body=8 status=ok
// SIG bool IsInitialized(void)

/* bool __cdecl AK::SoundEngine::IsInitialized(void) */

bool __cdecl AK::SoundEngine::IsInitialized(void)

{
                    /* 0x4d42080  145  ?IsInitialized@SoundEngine@AK@@YA_NXZ */
  return (bool)DAT_14c790ff4;
}



// FUNCTION 144d42090 Init body=528 status=ok
// SIG AKRESULT Init(AkInitSettings * param_1, AkPlatformInitSettings * param_2)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* enum AKRESULT __cdecl AK::SoundEngine::Init(struct AkInitSettings * __ptr64,struct
   AkPlatformInitSettings * __ptr64) */

AKRESULT __cdecl AK::SoundEngine::Init(AkInitSettings *param_1,AkPlatformInitSettings *param_2)

{
  int iVar1;
  bool bVar2;
  AKRESULT AVar3;
  void *pvVar4;
  LARGE_INTEGER local_res18 [2];
  char local_38 [48];
  
                    /* 0x4d42090  141
                       ?Init@SoundEngine@AK@@YA?AW4AKRESULT@@PEAUAkInitSettings@@PEAUAkPlatformInitSettings@@@Z
                        */
  if (DAT_14c790ff4 != '\0') {
    return 0x65;
  }
  FUN_145071630();
  DAT_14c703d80 = 3;
  DAT_14c703d84 = 3;
  DAT_14c703d88 = 3;
  DAT_14c791048 = 0;
  bVar2 = MemoryMgr::IsInitialized();
  if (!bVar2) {
    return 0x4a;
  }
  if (IAkStreamMgr::m_pStreamMgr == (IAkStreamMgr *)0x0) {
    return 0x4b;
  }
  if (param_1 == (AkInitSettings *)0x0) {
    GetDefaultInitSettings((AkInitSettings *)&DAT_14c791080);
  }
  else {
    _DAT_14c791080 = *(undefined8 *)param_1;
    _DAT_14c791088 = *(undefined8 *)(param_1 + 8);
    _DAT_14c791090 = *(undefined8 *)(param_1 + 0x10);
    _DAT_14c791098 = *(undefined8 *)(param_1 + 0x18);
    _DAT_14c7910a0 = *(undefined8 *)(param_1 + 0x20);
    uRam000000014c7910a8 = *(undefined8 *)(param_1 + 0x28);
    _DAT_14c7910b0 = *(undefined8 *)(param_1 + 0x30);
    DAT_14c7910b8 = *(undefined8 *)(param_1 + 0x38);
    _DAT_14c7910c0 = *(undefined8 *)(param_1 + 0x40);
    _DAT_14c7910c8 = *(undefined8 *)(param_1 + 0x48);
    _DAT_14c7910d0 = *(undefined8 *)(param_1 + 0x50);
    _DAT_14c7910d8 = *(undefined8 *)(param_1 + 0x58);
    _DAT_14c7910e0 = *(undefined8 *)(param_1 + 0x60);
    DAT_14c7910e8 = *(undefined8 *)(param_1 + 0x68);
    DAT_14c7910f0 = *(undefined8 *)(param_1 + 0x70);
    DAT_14c7910f8 = *(undefined8 *)(param_1 + 0x78);
    _DAT_14c791100 = *(undefined8 *)(param_1 + 0x80);
    _DAT_14c791108 = *(undefined8 *)(param_1 + 0x88);
    _DAT_14c791110 = *(undefined4 *)(param_1 + 0x90);
    uRam000000014c791114 = *(undefined4 *)(param_1 + 0x94);
    _DAT_14c791118 = *(undefined4 *)(param_1 + 0x98);
    uRam000000014c79111c = *(undefined4 *)(param_1 + 0x9c);
    _DAT_14c791120 = *(undefined8 *)(param_1 + 0xa0);
    _DAT_14c791128 = *(undefined8 *)(param_1 + 0xa8);
  }
  FUN_1450a4a40(param_2);
  AVar3 = FUN_144d4bc60(param_1);
  if (AVar3 != 1) goto LAB_144d4228e;
  QueryPerformanceFrequency(local_res18);
  DAT_14c79c4d4 =
       (float)((double)CONCAT44(local_res18[0].s.HighPart,local_res18[0].s.LowPart) * 0.001);
  AVar3 = FUN_1450c5b60();
  if ((DAT_14c790fd8 == 0) && (AVar3 == 1)) {
    pvVar4 = MemoryMgr::Malloc(0x10,0xd0);
    if (pvVar4 == (void *)0x0) {
      DAT_14c790fd8 = 0;
    }
    else {
      DAT_14c790fd8 = FUN_145080a90(pvVar4);
      if (DAT_14c790fd8 != 0) {
        AVar3 = FUN_145080b90(DAT_14c790fd8);
        goto LAB_144d4221f;
      }
    }
    AVar3 = 0x34;
  }
  else {
LAB_144d4221f:
    if (AVar3 == 1) {
      DAT_14c790ff4 = 1;
      local_38[0x20] = '\0';
      local_38[0x21] = '\0';
      local_38[0x22] = '\0';
      local_38[0x23] = '\0';
      local_38[0] = '\0';
      local_38[1] = '\0';
      local_38[2] = '\0';
      local_38[3] = '\0';
      local_38[4] = '\0';
      local_38[5] = '\0';
      local_38[6] = '\0';
      local_38[7] = '\0';
      local_38[8] = '\0';
      local_38[9] = '\0';
      local_38[10] = '\0';
      local_38[0xb] = '\0';
      local_38[0xc] = '\0';
      local_38[0xd] = '\0';
      local_38[0xe] = '\0';
      local_38[0xf] = '\0';
      local_38[0x10] = '\0';
      local_38[0x11] = '\0';
      local_38[0x12] = '\0';
      local_38[0x13] = '\0';
      local_38[0x14] = '\0';
      local_38[0x15] = '\0';
      local_38[0x16] = '\0';
      local_38[0x17] = '\0';
      local_38[0x18] = '\0';
      local_38[0x19] = '\0';
      local_38[0x1a] = '\0';
      local_38[0x1b] = '\0';
      local_38[0x1c] = '\0';
      local_38[0x1d] = '\0';
      local_38[0x1e] = '\0';
      local_38[0x1f] = '\0';
      strncpy(local_38,"779AD1D9-3419-4cbf-933B-B038DF5A2818",0x24);
      local_res18[0].s.LowPart = 0;
      for (iVar1 = 0; (0x400U >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
      }
      FUN_144d4baa0(0x400,iVar1);
      AVar3 = FUN_145080ec0(DAT_14c790fd8);
      return AVar3;
    }
  }
LAB_144d4228e:
  Term();
  return AVar3;
}



// FUNCTION 144d422a0 GetDefaultInitSettings body=170 status=ok
// SIG void GetDefaultInitSettings(AkInitSettings * param_1)

/* void __cdecl AK::SoundEngine::GetDefaultInitSettings(struct AkInitSettings & __ptr64) */

void __cdecl AK::SoundEngine::GetDefaultInitSettings(AkInitSettings *param_1)

{
                    /* 0x4d422a0  77
                       ?GetDefaultInitSettings@SoundEngine@AK@@YAXAEAUAkInitSettings@@@Z */
  *(undefined4 *)(param_1 + 8) = 0xff;
  *(undefined8 *)param_1 = 0;
  param_1[0x10] = (AkInitSettings)0x0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  param_1[0x90] = (AkInitSettings)0x0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x40000;
  *(undefined4 *)(param_1 + 0x14) = 1;
  *(undefined4 *)(param_1 + 0x18) = 0x200;
  *(undefined4 *)(param_1 + 0x1c) = 0x100000;
  *(undefined4 *)(param_1 + 0x20) = 0x800000;
  *(undefined2 *)(param_1 + 100) = 0x101;
  *(undefined4 *)(param_1 + 0x60) = 1000;
  *(undefined4 *)(param_1 + 0x84) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x8c) = 0x41800000;
  *(undefined4 *)(param_1 + 0x88) = 0x8000;
  thunk_FUN_1450a4b20(param_1 + 0x24);
  FUN_145071d70(param_1 + 0x38);
  return;
}



// FUNCTION 144d42350 Term body=1323 status=ok
// SIG void Term(void)

/* void __cdecl AK::SoundEngine::Term(void) */

void __cdecl AK::SoundEngine::Term(void)

{
  int iVar1;
  void *pvVar2;
  CAkRegistryMgr *pCVar3;
  CAkGameSyncMgr *pCVar4;
  char cVar5;
  HRESULT HVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined8 local_20;
  
                    /* 0x4d42350  338  ?Term@SoundEngine@AK@@YAXXZ */
  DAT_14c790ff4 = 0;
  HVar6 = CoInitializeEx((LPVOID)0x0,2);
  if (DAT_14c790fd8 == (void *)0x0) {
    FUN_1450a1150();
  }
  else {
    FUN_145080f30();
  }
  if (DAT_14c790fe0 != (longlong *)0x0) {
    (**(code **)(*DAT_14c790fe0 + 0x38))();
  }
  local_30 = 4;
  local_40 = 0;
  local_38 = 0;
  local_28 = 0;
  local_20 = 0;
  local_48[0] = 0;
  FUN_1450c6670(local_48,1);
  if (DAT_14c790fd8 != (void *)0x0) {
    FUN_145081c50(DAT_14c790fd8,0,0,0);
  }
  if (DAT_14c791028 != (void *)0x0) {
    FUN_14507d720();
  }
  if (DAT_14c79c4b0 != 0) {
    FUN_1450cb120();
  }
  FUN_1450a5420();
  for (iVar1 = 0; (0x80U >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
  }
  FUN_144d4baa0(0x80,iVar1);
  lVar11 = 0xd;
  plVar9 = &DAT_14c791140;
  lVar8 = 0xd;
  do {
    puVar10 = (undefined8 *)*plVar9;
    while (puVar10 != (undefined8 *)0x0) {
      lVar7 = puVar10[3];
      if (puVar10[3] == 0) {
        plVar9[-1] = 0;
        lVar7 = 0;
      }
      *plVar9 = lVar7;
      puVar10[3] = 0;
      *(int *)(plVar9 + -2) = (int)plVar9[-2] + -1;
      if (puVar10 != (undefined8 *)0x0) {
        (**(code **)*puVar10)(puVar10,0);
        MemoryMgr::Free(0x10,puVar10);
      }
      puVar10 = (undefined8 *)*plVar9;
    }
    *plVar9 = 0;
    plVar9[-1] = 0;
    *(undefined4 *)(plVar9 + -2) = 0;
    plVar9 = plVar9 + 3;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  plVar9 = &DAT_14c791280;
  do {
    puVar10 = (undefined8 *)*plVar9;
    while (puVar10 != (undefined8 *)0x0) {
      lVar8 = puVar10[3];
      if (puVar10[3] == 0) {
        plVar9[-1] = 0;
        lVar8 = 0;
      }
      *plVar9 = lVar8;
      puVar10[3] = 0;
      *(int *)(plVar9 + -2) = (int)plVar9[-2] + -1;
      if (puVar10 != (undefined8 *)0x0) {
        (**(code **)*puVar10)(puVar10,0);
        MemoryMgr::Free(0x10,puVar10);
      }
      puVar10 = (undefined8 *)*plVar9;
    }
    *plVar9 = 0;
    plVar9[-1] = 0;
    *(undefined4 *)(plVar9 + -2) = 0;
    plVar9 = plVar9 + 3;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  if (DAT_14c790fd0 != (void *)0x0) {
    FUN_1450b3ea0();
    pvVar2 = DAT_14c790fd0;
    if (DAT_14c790fd0 != (void *)0x0) {
      FUN_1450b3e40(DAT_14c790fd0);
      MemoryMgr::Free(0x10,pvVar2);
    }
    DAT_14c790fd0 = (void *)0x0;
  }
  if (DAT_14c791068 != (void *)0x0) {
    FUN_1450b0a20();
    if (DAT_14c791068 != (void *)0x0) {
      MemoryMgr::Free(0x10,DAT_14c791068);
    }
    DAT_14c791068 = (void *)0x0;
  }
  FUN_1450c5be0();
  if (DAT_14c790fd8 != (void *)0x0) {
    FUN_145080ca0();
    pvVar2 = DAT_14c790fd8;
    if (DAT_14c790fd8 != (void *)0x0) {
      FUN_145080b40(DAT_14c790fd8);
      MemoryMgr::Free(0x10,pvVar2);
    }
    DAT_14c790fd8 = (void *)0x0;
  }
  if (DAT_14c790fe0 != (longlong *)0x0) {
    (**(code **)(*DAT_14c790fe0 + 0x10))();
    plVar9 = DAT_14c790fe0;
    if (DAT_14c790fe0 != (longlong *)0x0) {
      (**(code **)*DAT_14c790fe0)(DAT_14c790fe0,0);
      MemoryMgr::Free(0x10,plVar9);
    }
    DAT_14c790fe0 = (longlong *)0x0;
  }
  if (DAT_14c791060 != (void *)0x0) {
    FUN_145075130();
    FUN_1450752d0(DAT_14c791060);
  }
  if (DAT_14c791048 != (void *)0x0) {
    MemoryMgr::Free(0x10,DAT_14c791048);
    DAT_14c791048 = (void *)0x0;
  }
  if (g_pRegistryMgr != (CAkRegistryMgr *)0x0) {
    FUN_1450abe40();
    pCVar3 = g_pRegistryMgr;
    if (g_pRegistryMgr != (CAkRegistryMgr *)0x0) {
      FUN_1450abd20(g_pRegistryMgr);
      MemoryMgr::Free(0x10,pCVar3);
    }
    g_pRegistryMgr = (CAkRegistryMgr *)0x0;
  }
  if (DAT_14c790fc0 != (void *)0x0) {
    FUN_1450b1fd0();
    pvVar2 = DAT_14c790fc0;
    if (DAT_14c790fc0 != (void *)0x0) {
      FUN_1450b1300((longlong)DAT_14c790fc0 + 0x50);
      if (*(HANDLE *)((longlong)pvVar2 + 0x40) != (HANDLE)0x0) {
        CloseHandle(*(HANDLE *)((longlong)pvVar2 + 0x40));
      }
      DeleteCriticalSection((LPCRITICAL_SECTION)((longlong)pvVar2 + 0x18));
      MemoryMgr::Free(0x10,pvVar2);
    }
    DAT_14c790fc0 = (void *)0x0;
  }
  if (DAT_14c791050 != (void *)0x0) {
    FUN_1450c8d50();
    pvVar2 = DAT_14c791050;
    if (DAT_14c791050 != (void *)0x0) {
      DeleteCriticalSection((LPCRITICAL_SECTION)((longlong)DAT_14c791050 + 0x20));
      MemoryMgr::Free(0x10,pvVar2);
    }
    DAT_14c791050 = (void *)0x0;
  }
  if (DAT_14c791038 != (void *)0x0) {
    FUN_1450c8b40();
    if (DAT_14c791038 != (void *)0x0) {
      MemoryMgr::Free(0x10,DAT_14c791038);
    }
    DAT_14c791038 = (void *)0x0;
  }
  if (DAT_14c790ff8 != (void *)0x0) {
    FUN_145075e40();
    pvVar2 = DAT_14c790ff8;
    if (DAT_14c790ff8 != (void *)0x0) {
      FUN_145075d80(DAT_14c790ff8);
      MemoryMgr::Free(0x10,pvVar2);
    }
    DAT_14c790ff8 = (void *)0x0;
  }
  if (DAT_14c791028 != (void *)0x0) {
    FUN_14507d6d0();
    pvVar2 = DAT_14c791028;
    if (DAT_14c791028 != (void *)0x0) {
      FUN_14507d650(DAT_14c791028);
      MemoryMgr::Free(0x10,pvVar2);
    }
    DAT_14c791028 = (void *)0x0;
  }
  if (g_pGameSyncMgr != (CAkGameSyncMgr *)0x0) {
    FUN_14507e890();
    pCVar4 = g_pGameSyncMgr;
    if (g_pGameSyncMgr != (CAkGameSyncMgr *)0x0) {
      FUN_14507e890(g_pGameSyncMgr);
      MemoryMgr::Free(0x10,pCVar4);
    }
    g_pGameSyncMgr = (CAkGameSyncMgr *)0x0;
  }
  cVar5 = FUN_145072120();
  if (cVar5 != '\0') {
    FUN_145072010();
  }
  if (DAT_14c791060 != (void *)0x0) {
    FUN_145075070();
    pvVar2 = DAT_14c791060;
    if (DAT_14c791060 != (void *)0x0) {
      lVar8 = 0xe;
      puVar10 = (undefined8 *)((longlong)DAT_14c791060 + 0x508);
      do {
        lVar8 = lVar8 + -1;
        if ((HANDLE)puVar10[-0xb] != (HANDLE)0x0) {
          CloseHandle((HANDLE)puVar10[-0xb]);
        }
        puVar10[-0xb] = 0;
        DeleteCriticalSection((LPCRITICAL_SECTION)(puVar10 + -0x11));
        puVar10 = puVar10 + -0xb;
      } while (lVar8 != 0);
      MemoryMgr::Free(0x10,pvVar2);
    }
    DAT_14c791060 = (void *)0x0;
  }
  FUN_1450777a0();
  FUN_1450742d0();
  FUN_1450716e0();
  DAT_14c791030 = 0;
  DAT_14c790ff5 = 0;
  if (-1 < HVar6) {
    CoUninitialize();
  }
  return;
}



// FUNCTION 144d42880 GetAudioSettings body=39 status=ok
// SIG AKRESULT GetAudioSettings(AkAudioSettings * param_1)

/* enum AKRESULT __cdecl AK::SoundEngine::GetAudioSettings(struct AkAudioSettings & __ptr64) */

AKRESULT __cdecl AK::SoundEngine::GetAudioSettings(AkAudioSettings *param_1)

{
                    /* 0x4d42880  63
                       ?GetAudioSettings@SoundEngine@AK@@YA?AW4AKRESULT@@AEAUAkAudioSettings@@@Z */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  *(uint *)param_1 = (uint)DAT_14c72f434;
  *(undefined4 *)(param_1 + 4) = DAT_14c72f42c;
  return 1;
}



// FUNCTION 144d428b0 GetOutputDeviceConfiguration body=155 status=ok
// SIG AKRESULT GetOutputDeviceConfiguration(__uint64 param_1, AkChannelConfig * param_2, Ak3DAudioSinkCapabilities * param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::GetOutputDeviceConfiguration(unsigned __int64,struct
   AkChannelConfig & __ptr64,struct Ak3DAudioSinkCapabilities & __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::GetOutputDeviceConfiguration
          (__uint64 param_1,AkChannelConfig *param_2,Ak3DAudioSinkCapabilities *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  AKRESULT AVar6;
  undefined1 local_res20 [8];
  
                    /* 0x4d428b0  106
                       ?GetOutputDeviceConfiguration@SoundEngine@AK@@YA?AW4AKRESULT@@_KAEAUAkChannelConfig@@AEAUAk3DAudioSinkCapabilities@@@Z
                        */
  iVar4 = FUN_144d4cba0();
  if (iVar4 != 1) {
    return 0x66;
  }
  AVar6 = 0xf;
  FUN_1450719c0(local_res20);
  lVar5 = FUN_1450a19c0(param_1);
  if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x4d0) != 0)) {
    AVar6 = 1;
    *(undefined4 *)param_2 = *(undefined4 *)(lVar5 + 0x60);
    uVar1 = *(undefined4 *)(lVar5 + 0x94);
    uVar2 = *(undefined4 *)(lVar5 + 0x98);
    uVar3 = *(undefined4 *)(lVar5 + 0x9c);
    *(undefined4 *)param_3 = *(undefined4 *)(lVar5 + 0x90);
    *(undefined4 *)(param_3 + 4) = uVar1;
    *(undefined4 *)(param_3 + 8) = uVar2;
    *(undefined4 *)(param_3 + 0xc) = uVar3;
  }
  FUN_1450719f0(local_res20);
  return AVar6;
}



// FUNCTION 144d42950 GetPanningRule body=117 status=ok
// SIG AKRESULT GetPanningRule(AkPanningRule * param_1, __uint64 param_2)

/* enum AKRESULT __cdecl AK::SoundEngine::GetPanningRule(enum AkPanningRule & __ptr64,unsigned
   __int64) */

AKRESULT __cdecl AK::SoundEngine::GetPanningRule(AkPanningRule *param_1,__uint64 param_2)

{
  int iVar1;
  longlong lVar2;
  AKRESULT AVar3;
  undefined1 local_res18 [16];
  
                    /* 0x4d42950  110
                       ?GetPanningRule@SoundEngine@AK@@YA?AW4AKRESULT@@AEAW4AkPanningRule@@_K@Z */
  iVar1 = FUN_144d4cba0();
  if (iVar1 != 1) {
    return 0x66;
  }
  FUN_1450719c0(local_res18);
  AVar3 = 0xf;
  lVar2 = FUN_1450a19c0(param_2);
  if (lVar2 != 0) {
    AVar3 = 1;
    *(undefined1 *)param_1 = *(undefined1 *)(lVar2 + 0xf8);
  }
  FUN_1450719f0(local_res18);
  return AVar3;
}



// FUNCTION 144d429d0 SetPanningRule body=80 status=ok
// SIG AKRESULT SetPanningRule(AkPanningRule param_1, __uint64 param_2)

/* enum AKRESULT __cdecl AK::SoundEngine::SetPanningRule(enum AkPanningRule,unsigned __int64) */

AKRESULT __cdecl AK::SoundEngine::SetPanningRule(AkPanningRule param_1,__uint64 param_2)

{
  undefined2 uVar1;
  longlong lVar2;
  
                    /* 0x4d429d0  304
                       ?SetPanningRule@SoundEngine@AK@@YA?AW4AKRESULT@@W4AkPanningRule@@_K@Z */
  uVar1 = FUN_1450880b0();
  lVar2 = FUN_145080f50(DAT_14c790fd8,0x31,uVar1);
  *(__uint64 *)(lVar2 + 4) = param_2;
  *(char *)(lVar2 + 0xc) = (char)param_1;
  LOCK();
  *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
  UNLOCK();
  return 1;
}



// FUNCTION 144d42a20 GetSpeakerAngles body=141 status=ok
// SIG AKRESULT GetSpeakerAngles(float * param_1, uint * param_2, float * param_3, __uint64 param_4)

/* enum AKRESULT __cdecl AK::SoundEngine::GetSpeakerAngles(float * __ptr64,unsigned int &
   __ptr64,float & __ptr64,unsigned __int64) */

AKRESULT __cdecl
AK::SoundEngine::GetSpeakerAngles(float *param_1,uint *param_2,float *param_3,__uint64 param_4)

{
  int iVar1;
  AKRESULT AVar2;
  longlong lVar3;
  undefined1 local_18 [16];
  
                    /* 0x4d42a20  126
                       ?GetSpeakerAngles@SoundEngine@AK@@YA?AW4AKRESULT@@PEAMAEAIAEAM_K@Z */
  iVar1 = FUN_144d4cba0();
  if (iVar1 == 1) {
    AVar2 = 0xf;
    FUN_1450719c0(local_18);
    lVar3 = FUN_1450a19c0(param_4);
    if (lVar3 != 0) {
      AVar2 = FUN_1450a0060(lVar3,param_1,param_2,param_3);
    }
    FUN_1450719f0(local_18);
  }
  else {
    AVar2 = 0x66;
  }
  return AVar2;
}



// FUNCTION 144d42ab0 SetSpeakerAngles body=310 status=ok
// SIG AKRESULT SetSpeakerAngles(float * param_1, uint param_2, float param_3, __uint64 param_4)

/* enum AKRESULT __cdecl AK::SoundEngine::SetSpeakerAngles(float const * __ptr64,unsigned
   int,float,unsigned __int64) */

AKRESULT __cdecl
AK::SoundEngine::SetSpeakerAngles(float *param_1,uint param_2,float param_3,__uint64 param_4)

{
  undefined2 uVar1;
  AKRESULT AVar2;
  longlong lVar3;
  void *_Dst;
  uint uVar4;
  int iVar5;
  byte bVar6;
  float *pfVar7;
  
                    /* 0x4d42ab0  315  ?SetSpeakerAngles@SoundEngine@AK@@YA?AW4AKRESULT@@PEBMIM_K@Z
                        */
  if (DAT_14c790ff4 == '\0') {
    AVar2 = 0x66;
  }
  else {
    if (param_1 != (float *)0x0) {
      uVar4 = 0x633;
      bVar6 = 0;
      do {
        bVar6 = bVar6 + 1;
        uVar4 = uVar4 & uVar4 - 1;
      } while (uVar4 != 0);
      if (bVar6 >> 1 <= param_2) {
        if (0 < (int)param_2) {
          iVar5 = 0;
          pfVar7 = param_1;
          do {
            if (0x7f7fffff < (uint)ABS(*pfVar7)) {
              return 0x5f;
            }
            iVar5 = iVar5 + 1;
            pfVar7 = pfVar7 + 1;
          } while (iVar5 < (int)param_2);
        }
        iVar5 = FUN_1450940c0(param_1,param_2,0);
        if (iVar5 == 1) {
          uVar1 = FUN_1450880c0();
          lVar3 = FUN_145080f50(DAT_14c790fd8,0x32,uVar1);
          _Dst = MemoryMgr::Malloc(0,(ulonglong)param_2 << 2);
          *(void **)(lVar3 + 4) = _Dst;
          if (_Dst == (void *)0x0) {
            *(undefined2 *)(lVar3 + 2) = 0x41;
            AVar2 = 0x34;
          }
          else {
            memcpy(_Dst,param_1,(ulonglong)param_2 << 2);
            AVar2 = 1;
            *(float *)(lVar3 + 0x10) = param_3;
            *(uint *)(lVar3 + 0xc) = param_2;
            *(__uint64 *)(lVar3 + 0x14) = param_4;
          }
          LOCK();
          *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
          UNLOCK();
          return AVar2;
        }
      }
    }
    AVar2 = 0x1f;
  }
  return AVar2;
}



// FUNCTION 144d42bf0 SetVolumeThreshold body=313 status=ok
// SIG AKRESULT SetVolumeThreshold(float param_1)

/* enum AKRESULT __cdecl AK::SoundEngine::SetVolumeThreshold(float) */

AKRESULT __cdecl AK::SoundEngine::SetVolumeThreshold(float param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float _Y;
  
                    /* 0x4d42bf0  322  ?SetVolumeThreshold@SoundEngine@AK@@YA?AW4AKRESULT@@M@Z */
  if (0x7f7fffff < (uint)ABS(param_1)) {
    return 0x5f;
  }
  if ((-96.3 <= param_1) && (fVar3 = 0.0, param_1 <= 0.0)) {
    if (-1 < DAT_14c703d80) {
      _Y = param_1 * 0.05;
      DAT_14c703d80 = 0;
      fVar2 = powf(10.0,_Y);
      if ((-37.0 <= _Y) && (_Y <= 37.0)) {
        uVar1 = (uint)(longlong)(_Y * 27866352.0 + 1.0653532e+09);
        fVar3 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
        fVar3 = ((fVar3 * 0.32518977 + 0.020805772) * fVar3 + 0.65304345) *
                (float)(uVar1 & 0xff800000);
      }
      DAT_14c72f440 = fVar3;
      DAT_14c72f444 = param_1;
      if (fVar3 <= fVar2) {
        DAT_14c72f440 = fVar2;
      }
    }
    return 1;
  }
  return 0x1f;
}



// FUNCTION 144d42d30 SetMaxNumVoicesLimit body=43 status=ok
// SIG AKRESULT SetMaxNumVoicesLimit(ushort param_1)

/* enum AKRESULT __cdecl AK::SoundEngine::SetMaxNumVoicesLimit(unsigned short) */

AKRESULT __cdecl AK::SoundEngine::SetMaxNumVoicesLimit(ushort param_1)

{
                    /* 0x4d42d30  290  ?SetMaxNumVoicesLimit@SoundEngine@AK@@YA?AW4AKRESULT@@G@Z */
  if (param_1 == 0) {
    return 0x1f;
  }
  if (-1 < DAT_14c703d84) {
    DAT_14c703d84 = 0;
    DAT_14c79c440 = param_1;
  }
  return 1;
}



// FUNCTION 144d42d60 SetJobMgrMaxActiveWorkers body=67 status=ok
// SIG AKRESULT SetJobMgrMaxActiveWorkers(uint param_1, uint param_2)

/* enum AKRESULT __cdecl AK::SoundEngine::SetJobMgrMaxActiveWorkers(unsigned int,unsigned int) */

AKRESULT __cdecl AK::SoundEngine::SetJobMgrMaxActiveWorkers(uint param_1,uint param_2)

{
                    /* 0x4d42d60  286
                       ?SetJobMgrMaxActiveWorkers@SoundEngine@AK@@YA?AW4AKRESULT@@II@Z */
  if ((DAT_14c790ff4 == '\0') || (DAT_14c7910b8 == 0)) {
    return 0x66;
  }
  if ((param_1 < 3) && (param_2 != 0)) {
    FUN_145072150();
    return 1;
  }
  return 0x1f;
}



// FUNCTION 144d42db0 RenderAudio body=33 status=ok
// SIG AKRESULT RenderAudio(bool param_1)

/* enum AKRESULT __cdecl AK::SoundEngine::RenderAudio(bool) */

AKRESULT __cdecl AK::SoundEngine::RenderAudio(bool param_1)

{
  AKRESULT AVar1;
  
                    /* 0x4d42db0  240  ?RenderAudio@SoundEngine@AK@@YA?AW4AKRESULT@@_N@Z */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  AVar1 = FUN_145081150(DAT_14c790fd8,param_1,0);
  return AVar1;
}



// FUNCTION 144d42de0 GetGlobalPluginContext body=108 status=ok
// SIG IAkGlobalPluginContext * GetGlobalPluginContext(void)

/* class AK::IAkGlobalPluginContext * __ptr64 __cdecl AK::SoundEngine::GetGlobalPluginContext(void)
    */

IAkGlobalPluginContext * __cdecl AK::SoundEngine::GetGlobalPluginContext(void)

{
                    /* 0x4d42de0  93
                       ?GetGlobalPluginContext@SoundEngine@AK@@YAPEAVIAkGlobalPluginContext@2@XZ */
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c791420) {
    FUN_144b3d300(&DAT_14c791420);
    if (DAT_14c791420 == -1) {
      atexit((_func_5014 *)&LAB_149927930);
      _Init_thread_footer(&DAT_14c791420);
      return (IAkGlobalPluginContext *)&PTR_PTR_14c703fa0;
    }
  }
  return (IAkGlobalPluginContext *)&PTR_PTR_14c703fa0;
}



// FUNCTION 144d42e50 RegisterPlugin body=14 status=ok
// SIG AKRESULT RegisterPlugin(AkPluginType param_1, uint param_2, uint param_3, _func_IAkPlugin_ptr_IAkPluginMemAlloc_ptr * param_4, _func_IAkPluginParam_ptr_IAkPluginMemAlloc_ptr * param_5, _func_AKRESULT_uint_ptr_AkDeviceDescription_ptr * param_6)

/* enum AKRESULT __cdecl AK::SoundEngine::RegisterPlugin(enum AkPluginType,unsigned int,unsigned
   int,class AK::IAkPlugin * __ptr64 (__cdecl*)(class AK::IAkPluginMemAlloc * __ptr64),class
   AK::IAkPluginParam * __ptr64 (__cdecl*)(class AK::IAkPluginMemAlloc * __ptr64),enum AKRESULT
   (__cdecl*)(unsigned int & __ptr64,struct AkDeviceDescription * __ptr64)) */

AKRESULT __cdecl
AK::SoundEngine::RegisterPlugin
          (AkPluginType param_1,uint param_2,uint param_3,
          _func_IAkPlugin_ptr_IAkPluginMemAlloc_ptr *param_4,
          _func_IAkPluginParam_ptr_IAkPluginMemAlloc_ptr *param_5,
          _func_AKRESULT_uint_ptr_AkDeviceDescription_ptr *param_6)

{
  AKRESULT AVar1;
  
                    /* 0x4d42e50  233
                       ?RegisterPlugin@SoundEngine@AK@@YA?AW4AKRESULT@@W4AkPluginType@@IIP6APEAVIAkPlugin@2@PEAVIAkPluginMemAlloc@2@@ZP6APEAVIAkPluginParam@2@1@ZP6A?AW43@AEAIPEAUAkDeviceDescription@@@Z@Z
                        */
  AVar1 = FUN_145088d40();
  return AVar1;
}



// FUNCTION 144d42e60 RegisterCodec body=41 status=ok
// SIG AKRESULT RegisterCodec(uint param_1, uint param_2, _func_IAkSoftwareCodec_ptr_void_ptr * param_3, _func_IAkSoftwareCodec_ptr_void_ptr * param_4)

/* enum AKRESULT __cdecl AK::SoundEngine::RegisterCodec(unsigned int,unsigned int,class
   IAkSoftwareCodec * __ptr64 (__cdecl*)(void * __ptr64),class IAkSoftwareCodec * __ptr64
   (__cdecl*)(void * __ptr64)) */

AKRESULT __cdecl
AK::SoundEngine::RegisterCodec
          (uint param_1,uint param_2,_func_IAkSoftwareCodec_ptr_void_ptr *param_3,
          _func_IAkSoftwareCodec_ptr_void_ptr *param_4)

{
  AKRESULT AVar1;
  _func_IAkSoftwareCodec_ptr_void_ptr *local_28;
  _func_IAkSoftwareCodec_ptr_void_ptr *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
                    /* 0x4d42e60  227
                       ?RegisterCodec@SoundEngine@AK@@YA?AW4AKRESULT@@IIP6APEAVIAkSoftwareCodec@@PEAX@Z1@Z
                        */
  local_18 = 0;
  local_10 = 0;
  local_28 = param_3;
  local_20 = param_4;
  AVar1 = FUN_145088ea0(param_1,param_2,&local_28);
  return AVar1;
}



// FUNCTION 144d42e90 RegisterGlobalCallback body=290 status=ok
// SIG AKRESULT RegisterGlobalCallback(_func_void_IAkGlobalPluginContext_ptr_AkGlobalCallbackLocation_void_ptr * param_1, uint param_2, void * param_3, AkPluginType param_4, uint param_5, uint param_6)

/* enum AKRESULT __cdecl AK::SoundEngine::RegisterGlobalCallback(void (__cdecl*)(class
   AK::IAkGlobalPluginContext * __ptr64,enum AkGlobalCallbackLocation,void * __ptr64),unsigned
   int,void * __ptr64,enum AkPluginType,unsigned int,unsigned int) */

AKRESULT __cdecl
AK::SoundEngine::RegisterGlobalCallback
          (_func_void_IAkGlobalPluginContext_ptr_AkGlobalCallbackLocation_void_ptr *param_1,
          uint param_2,void *param_3,AkPluginType param_4,uint param_5,uint param_6)

{
  uint uVar1;
  IAkGlobalPluginContext *pIVar2;
  undefined4 in_register_00000014;
  AKRESULT AVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined4 in_register_0000008c;
  undefined1 local_res10 [8];
  
                    /* 0x4d42e90  231
                       ?RegisterGlobalCallback@SoundEngine@AK@@YA?AW4AKRESULT@@P6AXPEAVIAkGlobalPluginContext@2@W4AkGlobalCallbackLocation@@PEAX@ZI2W4AkPluginType@@II@Z
                        */
  FUN_1450719c0(local_res10,CONCAT44(in_register_00000014,param_2),param_3,
                CONCAT44(in_register_0000008c,param_4));
  if ((param_2 < 0x2000) &&
     (param_1 != (_func_void_IAkGlobalPluginContext_ptr_AkGlobalCallbackLocation_void_ptr *)0x0)) {
    AVar3 = 1;
    uVar5 = param_2;
    while ((uVar5 != 0 && (AVar3 == 1))) {
      uVar1 = 0;
      if (uVar5 != 0) {
        for (; (uVar5 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
        }
      }
      uVar4 = 0x20;
      if (uVar5 != 0) {
        uVar4 = (ulonglong)uVar1;
      }
      pIVar2 = MemoryMgr::Malloc(0x10,0x20);
      if (pIVar2 == (IAkGlobalPluginContext *)0x0) {
        AVar3 = 0x34;
      }
      else {
        *(undefined ***)pIVar2 = &PTR_FUN_1499d1138;
        *(_func_void_IAkGlobalPluginContext_ptr_AkGlobalCallbackLocation_void_ptr **)(pIVar2 + 8) =
             param_1;
        *(void **)(pIVar2 + 0x10) = param_3;
        *(undefined8 *)(pIVar2 + 0x18) = 0;
        if ((&DAT_14c791140)[uVar4 * 3] == 0) {
          (&DAT_14c791140)[uVar4 * 3] = pIVar2;
        }
        else {
          *(IAkGlobalPluginContext **)((&DAT_14c791138)[uVar4 * 3] + 0x18) = pIVar2;
        }
        (&DAT_14c791130)[uVar4 * 6] = (&DAT_14c791130)[uVar4 * 6] + 1;
        (&DAT_14c791138)[uVar4 * 3] = pIVar2;
        if ((param_2 & 1) != 0) {
          (*param_1)(pIVar2,1,param_3);
        }
      }
      uVar5 = uVar5 & ~(1 << ((byte)uVar4 & 0x1f));
    }
  }
  else {
    AVar3 = 0x1f;
  }
  FUN_1450719f0(local_res10);
  return AVar3;
}



// FUNCTION 144d42fc0 UnregisterGlobalCallback body=258 status=ok
// SIG AKRESULT UnregisterGlobalCallback(_func_void_IAkGlobalPluginContext_ptr_AkGlobalCallbackLocation_void_ptr * param_1, uint param_2)

/* enum AKRESULT __cdecl AK::SoundEngine::UnregisterGlobalCallback(void (__cdecl*)(class
   AK::IAkGlobalPluginContext * __ptr64,enum AkGlobalCallbackLocation,void * __ptr64),unsigned int)
    */

AKRESULT __cdecl
AK::SoundEngine::UnregisterGlobalCallback
          (_func_void_IAkGlobalPluginContext_ptr_AkGlobalCallbackLocation_void_ptr *param_1,
          uint param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  AKRESULT AVar5;
  ulonglong uVar6;
  undefined1 local_res10 [16];
  
                    /* 0x4d42fc0  357
                       ?UnregisterGlobalCallback@SoundEngine@AK@@YA?AW4AKRESULT@@P6AXPEAVIAkGlobalPluginContext@2@W4AkGlobalCallbackLocation@@PEAX@ZI@Z
                        */
  FUN_1450719c0(local_res10);
  AVar5 = 0x1f;
  if ((param_2 < 0x2000) && (param_2 != 0)) {
    do {
      uVar1 = 0;
      if (param_2 != 0) {
        for (; (param_2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
        }
      }
      uVar6 = (ulonglong)uVar1;
      puVar4 = (undefined8 *)(&DAT_14c791140)[uVar6 * 3];
      puVar3 = (undefined8 *)0x0;
      while (puVar2 = puVar4, puVar2 != (undefined8 *)0x0) {
        if ((_func_void_IAkGlobalPluginContext_ptr_AkGlobalCallbackLocation_void_ptr *)puVar2[1] ==
            param_1) {
          if (puVar2 == (undefined8 *)(&DAT_14c791140)[uVar6 * 3]) {
            (&DAT_14c791140)[uVar6 * 3] = puVar2[3];
          }
          else {
            puVar3[3] = puVar2[3];
          }
          if (puVar2 == (undefined8 *)(&DAT_14c791138)[uVar6 * 3]) {
            (&DAT_14c791138)[uVar6 * 3] = puVar3;
          }
          (&DAT_14c791130)[uVar6 * 6] = (&DAT_14c791130)[uVar6 * 6] + -1;
          (**(code **)*puVar2)(puVar2,0);
          MemoryMgr::Free(0x10,puVar2);
          AVar5 = 1;
          break;
        }
        puVar3 = puVar2;
        puVar4 = (undefined8 *)puVar2[3];
      }
      param_2 = param_2 & ~(1 << ((byte)uVar1 & 0x1f));
    } while (param_2 != 0);
  }
  FUN_1450719f0(local_res10);
  return AVar5;
}



// FUNCTION 144d430d0 RegisterResourceMonitorCallback body=3 status=ok
// SIG AKRESULT RegisterResourceMonitorCallback(_func_void_AkResourceMonitorDataSummary_ptr * param_1)

/* enum AKRESULT __cdecl AK::SoundEngine::RegisterResourceMonitorCallback(void (__cdecl*)(struct
   AkResourceMonitorDataSummary const * __ptr64)) */

AKRESULT __cdecl
AK::SoundEngine::RegisterResourceMonitorCallback
          (_func_void_AkResourceMonitorDataSummary_ptr *param_1)

{
                    /* 0x4d430d0  235
                       ?RegisterResourceMonitorCallback@SoundEngine@AK@@YA?AW4AKRESULT@@P6AXPEBUAkResourceMonitorDataSummary@@@Z@Z
                        */
  return 0;
}



// FUNCTION 144d430e0 UnregisterResourceMonitorCallback body=3 status=ok
// SIG AKRESULT UnregisterResourceMonitorCallback(_func_void_AkResourceMonitorDataSummary_ptr * param_1)

/* enum AKRESULT __cdecl AK::SoundEngine::UnregisterResourceMonitorCallback(void (__cdecl*)(struct
   AkResourceMonitorDataSummary const * __ptr64)) */

AKRESULT __cdecl
AK::SoundEngine::UnregisterResourceMonitorCallback
          (_func_void_AkResourceMonitorDataSummary_ptr *param_1)

{
                    /* 0x4d430e0  358
                       ?UnregisterResourceMonitorCallback@SoundEngine@AK@@YA?AW4AKRESULT@@P6AXPEBUAkResourceMonitorDataSummary@@@Z@Z
                        */
  return 0;
}



// FUNCTION 144d430f0 RegisterAudioDeviceStatusCallback body=13 status=ok
// SIG AKRESULT RegisterAudioDeviceStatusCallback(_func_void_IAkGlobalPluginContext_ptr_uint_uint_AkAudioDeviceEvent_AKRESULT * param_1)

/* enum AKRESULT __cdecl AK::SoundEngine::RegisterAudioDeviceStatusCallback(void (__cdecl*)(class
   AK::IAkGlobalPluginContext * __ptr64,unsigned int,unsigned int,enum AK::AkAudioDeviceEvent,enum
   AKRESULT)) */

AKRESULT __cdecl
AK::SoundEngine::RegisterAudioDeviceStatusCallback
          (_func_void_IAkGlobalPluginContext_ptr_uint_uint_AkAudioDeviceEvent_AKRESULT *param_1)

{
                    /* 0x4d430f0  223
                       ?RegisterAudioDeviceStatusCallback@SoundEngine@AK@@YA?AW4AKRESULT@@P6AXPEAVIAkGlobalPluginContext@2@IIW4AkAudioDeviceEvent@2@W43@@Z@Z
                        */
  DAT_14c79bf80 = param_1;
  return 1;
}



// FUNCTION 144d43100 UnregisterAudioDeviceStatusCallback body=17 status=ok
// SIG AKRESULT UnregisterAudioDeviceStatusCallback(void)

/* enum AKRESULT __cdecl AK::SoundEngine::UnregisterAudioDeviceStatusCallback(void) */

AKRESULT __cdecl AK::SoundEngine::UnregisterAudioDeviceStatusCallback(void)

{
                    /* 0x4d43100  353
                       ?UnregisterAudioDeviceStatusCallback@SoundEngine@AK@@YA?AW4AKRESULT@@XZ */
  DAT_14c79bf80 = 0;
  return 1;
}



// FUNCTION 144d43120 GetIDFromString body=79 status=ok
// SIG uint GetIDFromString(char * param_1)

/* unsigned int __cdecl AK::SoundEngine::GetIDFromString(char const * __ptr64) */

uint __cdecl AK::SoundEngine::GetIDFromString(char *param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  
                    /* 0x4d43120  95  ?GetIDFromString@SoundEngine@AK@@YAIPEBD@Z */
  if (param_1 != (char *)0x0) {
    uVar3 = 0x811c9dc5;
    bVar2 = *param_1;
    while (bVar2 != 0) {
      param_1 = param_1 + 1;
      bVar1 = bVar2 + 0x20;
      if (0x19 < (byte)(bVar2 + 0xbf)) {
        bVar1 = bVar2;
      }
      uVar3 = uVar3 * 0x1000193 ^ (uint)bVar1;
      bVar2 = *param_1;
    }
    return uVar3;
  }
  return 0;
}



// FUNCTION 144d43170 PostEvent body=358 status=ok
// SIG uint PostEvent(wchar_t * param_1, __uint64 param_2, uint param_3, _func_void_AkCallbackType_AkCallbackInfo_ptr * param_4, void * param_5, uint param_6, AkExternalSourceInfo * param_7, uint param_8)

/* unsigned int __cdecl AK::SoundEngine::PostEvent(wchar_t const * __ptr64,unsigned __int64,unsigned
   int,void (__cdecl*)(enum AkCallbackType,struct AkCallbackInfo * __ptr64),void * __ptr64,unsigned
   int,struct AkExternalSourceInfo * __ptr64,unsigned int) */

uint __cdecl
AK::SoundEngine::PostEvent
          (wchar_t *param_1,__uint64 param_2,uint param_3,
          _func_void_AkCallbackType_AkCallbackInfo_ptr *param_4,void *param_5,uint param_6,
          AkExternalSourceInfo *param_7,uint param_8)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 in_stack_fffffffffffffe98;
  undefined4 uVar7;
  undefined1 local_158 [8];
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_138;
  CHAR local_128 [259];
  undefined1 local_25;
  
                    /* 0x4d43170  184
                       ?PostEvent@SoundEngine@AK@@YAIPEB_W_KIP6AXW4AkCallbackType@@PEAUAkCallbackInfo@@@ZPEAXIPEAUAkExternalSourceInfo@@I@Z
                        */
  uVar7 = (undefined4)((ulonglong)in_stack_fffffffffffffe98 >> 0x20);
  uVar2 = GetIDFromString(param_1);
  puVar4 = (undefined8 *)0x0;
  if (param_6 != 0) {
    local_140 = 0;
    local_138 = 0;
    iVar3 = FUN_144d4a250(param_6,param_7,&local_150,local_158);
    if (iVar3 != 1) {
      return 0;
    }
    puVar4 = &local_148;
    local_148 = local_150;
  }
  uVar1 = local_148;
  uVar2 = FUN_144d41600(uVar2,param_2,param_3,param_4,param_5,puVar4,CONCAT44(uVar7,param_8));
  if (uVar2 == 0) {
    lVar6 = -1;
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (param_1[lVar5] != L'\0');
    if ((uint)lVar5 < 0x102) {
      do {
        lVar6 = lVar6 + 1;
      } while (param_1[lVar6] != L'\0');
    }
    else {
      lVar6 = 0x102;
    }
    iVar3 = WideCharToMultiByte(0xfde9,0,param_1,(int)lVar6,local_128,0x103,(LPCSTR)0x0,(LPBOOL)0x0)
    ;
    local_128[iVar3] = '\0';
    local_25 = 0;
    if (param_6 != 0) {
      FUN_144d4a460(uVar1);
    }
  }
  return uVar2;
}



// FUNCTION 144d432e0 PostEvent body=297 status=ok
// SIG uint PostEvent(char * param_1, __uint64 param_2, uint param_3, _func_void_AkCallbackType_AkCallbackInfo_ptr * param_4, void * param_5, uint param_6, AkExternalSourceInfo * param_7, uint param_8)

/* unsigned int __cdecl AK::SoundEngine::PostEvent(char const * __ptr64,unsigned __int64,unsigned
   int,void (__cdecl*)(enum AkCallbackType,struct AkCallbackInfo * __ptr64),void * __ptr64,unsigned
   int,struct AkExternalSourceInfo * __ptr64,unsigned int) */

uint __cdecl
AK::SoundEngine::PostEvent
          (char *param_1,__uint64 param_2,uint param_3,
          _func_void_AkCallbackType_AkCallbackInfo_ptr *param_4,void *param_5,uint param_6,
          AkExternalSourceInfo *param_7,uint param_8)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 local_res8 [8];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
                    /* 0x4d432e0  183
                       ?PostEvent@SoundEngine@AK@@YAIPEBD_KIP6AXW4AkCallbackType@@PEAUAkCallbackInfo@@@ZPEAXIPEAUAkExternalSourceInfo@@I@Z
                        */
  puVar7 = (undefined8 *)0x0;
  puVar6 = puVar7;
  if (param_1 != (char *)0x0) {
    puVar6 = (undefined8 *)0x811c9dc5;
    bVar2 = *param_1;
    while (bVar2 != 0) {
      param_1 = param_1 + 1;
      bVar1 = bVar2 + 0x20;
      if (0x19 < (byte)(bVar2 + 0xbf)) {
        bVar1 = bVar2;
      }
      puVar6 = (undefined8 *)(ulonglong)((int)puVar6 * 0x1000193 ^ (uint)bVar1);
      bVar2 = *param_1;
    }
  }
  if (param_6 != 0) {
    local_28 = 0;
    local_20 = 0;
    iVar4 = FUN_144d4a250(param_6,param_7,&local_38,local_res8);
    if (iVar4 != 1) {
      return 0;
    }
    puVar7 = &local_30;
    local_30 = local_38;
  }
  uVar3 = local_30;
  uVar5 = FUN_144d41600(puVar6,param_2,param_3,param_4,param_5,puVar7,param_8);
  if ((uVar5 == 0) && (param_6 != 0)) {
    FUN_144d4a460(uVar3);
  }
  return uVar5;
}



// FUNCTION 144d43410 ExecuteActionOnEvent body=403 status=ok
// SIG AKRESULT ExecuteActionOnEvent(uint param_1, AkActionOnEventType param_2, __uint64 param_3, int param_4, AkCurveInterpolation param_5, uint param_6)

/* enum AKRESULT __cdecl AK::SoundEngine::ExecuteActionOnEvent(unsigned int,enum
   AK::SoundEngine::AkActionOnEventType,unsigned __int64,int,enum AkCurveInterpolation,unsigned int)
    */

AKRESULT __cdecl
AK::SoundEngine::ExecuteActionOnEvent
          (uint param_1,AkActionOnEventType param_2,__uint64 param_3,int param_4,
          AkCurveInterpolation param_5,uint param_6)

{
  int iVar1;
  undefined2 uVar2;
  AKRESULT AVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
                    /* 0x4d43410  56
                       ?ExecuteActionOnEvent@SoundEngine@AK@@YA?AW4AKRESULT@@IW4AkActionOnEventType@12@_KHW4AkCurveInterpolation@@I@Z
                        */
  lVar4 = DAT_14c791060;
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  do {
    while (iVar1 = *(int *)(lVar4 + 0x108), iVar1 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x110));
      if (*(int *)(lVar4 + 0x108) < 0) goto LAB_144d43477;
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x110));
    }
    LOCK();
    bVar6 = iVar1 == *(int *)(lVar4 + 0x108);
    if (bVar6) {
      *(int *)(lVar4 + 0x108) = iVar1 + 1;
    }
    UNLOCK();
  } while (!bVar6);
LAB_144d43477:
  if (*(uint *)(lVar4 + 0x150) == 0) {
    lVar5 = 0;
  }
  else {
    for (lVar5 = *(longlong *)
                  (*(longlong *)(lVar4 + 0x148) +
                  ((ulonglong)param_1 % (ulonglong)*(uint *)(lVar4 + 0x150)) * 8); lVar5 != 0;
        lVar5 = *(longlong *)(lVar5 + 8)) {
      if (*(uint *)(lVar5 + 0x10) == param_1) goto LAB_144d434a7;
    }
    lVar5 = 0;
LAB_144d434a7:
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 0x14) = *(int *)(lVar5 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar1 = *(int *)(lVar4 + 0x108);
  do {
    if (iVar1 < 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x110));
LAB_144d43514:
      if (lVar5 == 0) {
        AVar3 = 0xf;
      }
      else {
        uVar2 = FUN_145088010();
        lVar4 = FUN_145080f50(DAT_14c790fd8,0x22,uVar2);
        *(AkCurveInterpolation *)(lVar4 + 0x20) = param_5;
        *(uint *)(lVar4 + 0x24) = param_6;
        *(longlong *)(lVar4 + 0xc) = lVar5;
        *(uint *)(lVar4 + 0x14) = param_1;
        *(__uint64 *)(lVar4 + 4) = param_3;
        *(AkActionOnEventType *)(lVar4 + 0x18) = param_2;
        *(int *)(lVar4 + 0x1c) = param_4;
        LOCK();
        *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
        UNLOCK();
        AVar3 = 1;
      }
      return AVar3;
    }
    LOCK();
    bVar6 = iVar1 == *(int *)(lVar4 + 0x108);
    if (bVar6) {
      *(int *)(lVar4 + 0x108) = iVar1 + -1;
    }
    UNLOCK();
    if (bVar6) {
      if ((iVar1 + -1 == 0) && (0 < *(int *)(lVar4 + 0x138))) {
        SetEvent(*(HANDLE *)(lVar4 + 0x140));
      }
      goto LAB_144d43514;
    }
    iVar1 = *(int *)(lVar4 + 0x108);
  } while( true );
}



// FUNCTION 144d435b0 ExecuteActionOnEvent body=58 status=ok
// SIG AKRESULT ExecuteActionOnEvent(wchar_t * param_1, AkActionOnEventType param_2, __uint64 param_3, int param_4, AkCurveInterpolation param_5, uint param_6)

/* enum AKRESULT __cdecl AK::SoundEngine::ExecuteActionOnEvent(wchar_t const * __ptr64,enum
   AK::SoundEngine::AkActionOnEventType,unsigned __int64,int,enum AkCurveInterpolation,unsigned int)
    */

AKRESULT __cdecl
AK::SoundEngine::ExecuteActionOnEvent
          (wchar_t *param_1,AkActionOnEventType param_2,__uint64 param_3,int param_4,
          AkCurveInterpolation param_5,uint param_6)

{
  uint uVar1;
  AKRESULT AVar2;
  
                    /* 0x4d435b0  58
                       ?ExecuteActionOnEvent@SoundEngine@AK@@YA?AW4AKRESULT@@PEB_WW4AkActionOnEventType@12@_KHW4AkCurveInterpolation@@I@Z
                        */
  uVar1 = GetIDFromString(param_1);
  AVar2 = ExecuteActionOnEvent(uVar1,param_2,param_3,param_4,param_5,param_6);
  return AVar2;
}



// FUNCTION 144d435f0 ExecuteActionOnEvent body=114 status=ok
// SIG AKRESULT ExecuteActionOnEvent(char * param_1, AkActionOnEventType param_2, __uint64 param_3, int param_4, AkCurveInterpolation param_5, uint param_6)

/* enum AKRESULT __cdecl AK::SoundEngine::ExecuteActionOnEvent(char const * __ptr64,enum
   AK::SoundEngine::AkActionOnEventType,unsigned __int64,int,enum AkCurveInterpolation,unsigned int)
    */

AKRESULT __cdecl
AK::SoundEngine::ExecuteActionOnEvent
          (char *param_1,AkActionOnEventType param_2,__uint64 param_3,int param_4,
          AkCurveInterpolation param_5,uint param_6)

{
  byte bVar1;
  byte bVar2;
  AKRESULT AVar3;
  uint uVar4;
  
                    /* 0x4d435f0  57
                       ?ExecuteActionOnEvent@SoundEngine@AK@@YA?AW4AKRESULT@@PEBDW4AkActionOnEventType@12@_KHW4AkCurveInterpolation@@I@Z
                        */
  if (param_1 == (char *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x811c9dc5;
    bVar2 = *param_1;
    while (bVar2 != 0) {
      param_1 = param_1 + 1;
      bVar1 = bVar2 + 0x20;
      if (0x19 < (byte)(bVar2 + 0xbf)) {
        bVar1 = bVar2;
      }
      uVar4 = uVar4 * 0x1000193 ^ (uint)bVar1;
      bVar2 = *param_1;
    }
  }
  AVar3 = ExecuteActionOnEvent(uVar4,param_2,param_3,param_4,param_5,param_6);
  return AVar3;
}



// FUNCTION 144d43670 PostMIDIOnEvent body=693 status=ok
// SIG uint PostMIDIOnEvent(uint param_1, __uint64 param_2, AkMIDIPost * param_3, ushort param_4, bool param_5, uint param_6, _func_void_AkCallbackType_AkCallbackInfo_ptr * param_7, void * param_8, uint param_9)

/* unsigned int __cdecl AK::SoundEngine::PostMIDIOnEvent(unsigned int,unsigned __int64,struct
   AkMIDIPost * __ptr64,unsigned short,bool,unsigned int,void (__cdecl*)(enum AkCallbackType,struct
   AkCallbackInfo * __ptr64),void * __ptr64,unsigned int) */

uint __cdecl
AK::SoundEngine::PostMIDIOnEvent
          (uint param_1,__uint64 param_2,AkMIDIPost *param_3,ushort param_4,bool param_5,
          uint param_6,_func_void_AkCallbackType_AkCallbackInfo_ptr *param_7,void *param_8,
          uint param_9)

{
  int *piVar1;
  AkMIDIPost *pAVar2;
  AkMIDIPost *pAVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  ushort uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  AkMIDIPost *pAVar14;
  longlong *plVar15;
  longlong *plVar16;
  bool bVar17;
  
                    /* 0x4d43670  185
                       ?PostMIDIOnEvent@SoundEngine@AK@@YAII_KPEAUAkMIDIPost@@G_NIP6AXW4AkCallbackType@@PEAUAkCallbackInfo@@@ZPEAXI@Z
                        */
  lVar11 = DAT_14c791060;
  uVar12 = (ulonglong)param_4;
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  if ((param_4 != 0) && (param_3 != (AkMIDIPost *)0x0)) {
    do {
      while (iVar13 = *(int *)(lVar11 + 0x108), iVar13 < 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar11 + 0x110));
        if (*(int *)(lVar11 + 0x108) < 0) goto LAB_144d436e7;
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar11 + 0x110));
      }
      LOCK();
      bVar17 = iVar13 == *(int *)(lVar11 + 0x108);
      if (bVar17) {
        *(int *)(lVar11 + 0x108) = iVar13 + 1;
      }
      UNLOCK();
    } while (!bVar17);
LAB_144d436e7:
    plVar16 = (longlong *)0x0;
    if (*(uint *)(lVar11 + 0x150) != 0) {
      for (plVar4 = *(longlong **)
                     (*(longlong *)(lVar11 + 0x148) +
                     ((ulonglong)param_1 % (ulonglong)*(uint *)(lVar11 + 0x150)) * 8);
          (plVar15 = plVar16, plVar4 != (longlong *)0x0 &&
          (plVar15 = plVar4, *(uint *)(plVar4 + 2) != param_1)); plVar4 = (longlong *)plVar4[1]) {
      }
      plVar16 = plVar15;
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar15 + 0x14) = *(int *)((longlong)plVar15 + 0x14) + 1;
        UNLOCK();
      }
    }
    iVar13 = *(int *)(lVar11 + 0x108);
    while (-1 < iVar13) {
      LOCK();
      bVar17 = iVar13 == *(int *)(lVar11 + 0x108);
      if (bVar17) {
        *(int *)(lVar11 + 0x108) = iVar13 + -1;
      }
      UNLOCK();
      if (bVar17) {
        if ((iVar13 + -1 == 0) && (0 < *(int *)(lVar11 + 0x138))) {
          SetEvent(*(HANDLE *)(lVar11 + 0x140));
        }
        goto LAB_144d4378a;
      }
      iVar13 = *(int *)(lVar11 + 0x108);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar11 + 0x110));
LAB_144d4378a:
    if (plVar16 != (longlong *)0x0) {
      uVar9 = FUN_145087e60();
      uVar10 = *(uint *)(DAT_14c790fd8 + 0x30);
      if (0xffff < uVar10) {
        uVar10 = 0xffff;
      }
      if (uVar10 < (uint)uVar9 + ((uint)param_4 + (uint)param_4 * 4) * 4) {
        FUN_145087e60();
      }
      else {
        lVar11 = FUN_145080f50(DAT_14c790fd8,0x23);
        if (lVar11 != 0) {
          *(ushort *)(lVar11 + 0x1c) = (ushort)param_5;
          *(longlong **)(lVar11 + 0xc) = plVar16;
          *(uint *)(lVar11 + 0x14) = param_1;
          *(__uint64 *)(lVar11 + 4) = param_2;
          *(ushort *)(lVar11 + 0x1e) = param_4;
          if (param_4 != 0) {
            pAVar14 = param_3;
            do {
              uVar5 = *(undefined4 *)(pAVar14 + 4);
              uVar6 = *(undefined4 *)(pAVar14 + 8);
              uVar7 = *(undefined4 *)(pAVar14 + 0xc);
              pAVar2 = pAVar14 + 0x14;
              pAVar3 = pAVar2 + (lVar11 - (longlong)param_3) + 0xc;
              *(undefined4 *)pAVar3 = *(undefined4 *)pAVar14;
              *(undefined4 *)(pAVar3 + 4) = uVar5;
              *(undefined4 *)(pAVar3 + 8) = uVar6;
              *(undefined4 *)(pAVar3 + 0xc) = uVar7;
              *(undefined4 *)(pAVar2 + (lVar11 - (longlong)param_3) + 0x1c) =
                   *(undefined4 *)(pAVar14 + 0x10);
              uVar12 = uVar12 - 1;
              pAVar14 = pAVar2;
            } while (uVar12 != 0);
          }
          *(undefined4 *)(lVar11 + 0x18) = 0;
          if ((param_9 != 0) &&
             (cVar8 = FUN_1450b22b0(DAT_14c790fc0,param_9,param_2,param_1), cVar8 != '\0')) {
            *(uint *)(lVar11 + 0x18) = param_9;
          }
          if (*(int *)(lVar11 + 0x18) != 0) {
LAB_144d4390f:
            uVar10 = *(uint *)(lVar11 + 0x18);
            LOCK();
            *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
            UNLOCK();
            return uVar10;
          }
          LOCK();
          UNLOCK();
          iVar13 = g_PlayingID + 1;
          g_PlayingID = g_PlayingID + 1;
          *(int *)(lVar11 + 0x18) = iVar13;
          iVar13 = FUN_1450b20e0(DAT_14c790fc0,iVar13,param_2,param_7,param_8,param_6,
                                 (int)plVar16[2]);
          if (iVar13 == 1) goto LAB_144d4390f;
          *(undefined2 *)(lVar11 + 2) = 0x41;
          LOCK();
          *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
          UNLOCK();
        }
      }
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0x14);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*plVar16 + 0x18))(plVar16);
      }
    }
  }
  return 0;
}



// FUNCTION 144d43930 PinEventInStreamCache body=402 status=ok
// SIG AKRESULT PinEventInStreamCache(uint param_1, char param_2, char param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::PinEventInStreamCache(unsigned int,signed char,signed
   char) */

AKRESULT __cdecl AK::SoundEngine::PinEventInStreamCache(uint param_1,char param_2,char param_3)

{
  int iVar1;
  undefined2 uVar2;
  AKRESULT AVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
                    /* 0x4d43930  174  ?PinEventInStreamCache@SoundEngine@AK@@YA?AW4AKRESULT@@ICC@Z
                        */
  lVar4 = DAT_14c791060;
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  do {
    while (iVar1 = *(int *)(lVar4 + 0x108), iVar1 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x110));
      if (*(int *)(lVar4 + 0x108) < 0) goto LAB_144d43997;
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x110));
    }
    LOCK();
    bVar6 = iVar1 == *(int *)(lVar4 + 0x108);
    if (bVar6) {
      *(int *)(lVar4 + 0x108) = iVar1 + 1;
    }
    UNLOCK();
  } while (!bVar6);
LAB_144d43997:
  if (*(uint *)(lVar4 + 0x150) == 0) {
    lVar5 = 0;
  }
  else {
    for (lVar5 = *(longlong *)
                  (*(longlong *)(lVar4 + 0x148) +
                  ((ulonglong)param_1 % (ulonglong)*(uint *)(lVar4 + 0x150)) * 8); lVar5 != 0;
        lVar5 = *(longlong *)(lVar5 + 8)) {
      if (*(uint *)(lVar5 + 0x10) == param_1) goto LAB_144d439c7;
    }
    lVar5 = 0;
LAB_144d439c7:
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 0x14) = *(int *)(lVar5 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar1 = *(int *)(lVar4 + 0x108);
  do {
    if (iVar1 < 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x110));
LAB_144d43a34:
      if (lVar5 == 0) {
        AVar3 = 0xf;
      }
      else {
        uVar2 = FUN_145088030();
        lVar4 = FUN_145080f50(DAT_14c790fd8,0x25,uVar2);
        *(longlong *)(lVar4 + 0xc) = lVar5;
        *(uint *)(lVar4 + 0x14) = param_1;
        *(undefined8 *)(lVar4 + 4) = 0xffffffffffffffff;
        *(char *)(lVar4 + 0x18) = param_2;
        *(char *)(lVar4 + 0x19) = param_3;
        *(undefined2 *)(lVar4 + 0x1a) = 1;
        AVar3 = 1;
        LOCK();
        *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
        UNLOCK();
      }
      return AVar3;
    }
    LOCK();
    bVar6 = iVar1 == *(int *)(lVar4 + 0x108);
    if (bVar6) {
      *(int *)(lVar4 + 0x108) = iVar1 + -1;
    }
    UNLOCK();
    if (bVar6) {
      if ((iVar1 + -1 == 0) && (0 < *(int *)(lVar4 + 0x138))) {
        SetEvent(*(HANDLE *)(lVar4 + 0x140));
      }
      goto LAB_144d43a34;
    }
    iVar1 = *(int *)(lVar4 + 0x108);
  } while( true );
}



// FUNCTION 144d43ad0 PinEventInStreamCache body=47 status=ok
// SIG AKRESULT PinEventInStreamCache(wchar_t * param_1, char param_2, char param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::PinEventInStreamCache(wchar_t const * __ptr64,signed
   char,signed char) */

AKRESULT __cdecl AK::SoundEngine::PinEventInStreamCache(wchar_t *param_1,char param_2,char param_3)

{
  uint uVar1;
  AKRESULT AVar2;
  
                    /* 0x4d43ad0  176
                       ?PinEventInStreamCache@SoundEngine@AK@@YA?AW4AKRESULT@@PEB_WCC@Z */
  uVar1 = GetIDFromString(param_1);
  AVar2 = PinEventInStreamCache(uVar1,param_2,param_3);
  return AVar2;
}



// FUNCTION 144d43b00 PinEventInStreamCache body=111 status=ok
// SIG AKRESULT PinEventInStreamCache(char * param_1, char param_2, char param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::PinEventInStreamCache(char const * __ptr64,signed
   char,signed char) */

AKRESULT __cdecl AK::SoundEngine::PinEventInStreamCache(char *param_1,char param_2,char param_3)

{
  byte bVar1;
  byte bVar2;
  AKRESULT AVar3;
  uint uVar4;
  
                    /* 0x4d43b00  175
                       ?PinEventInStreamCache@SoundEngine@AK@@YA?AW4AKRESULT@@PEBDCC@Z */
  if (param_1 != (char *)0x0) {
    uVar4 = 0x811c9dc5;
    bVar2 = *param_1;
    while (bVar2 != 0) {
      param_1 = param_1 + 1;
      bVar1 = bVar2 + 0x20;
      if (0x19 < (byte)(bVar2 + 0xbf)) {
        bVar1 = bVar2;
      }
      uVar4 = uVar4 * 0x1000193 ^ (uint)bVar1;
      bVar2 = *param_1;
    }
    AVar3 = PinEventInStreamCache(uVar4,param_2,param_3);
    return AVar3;
  }
  AVar3 = PinEventInStreamCache(0,param_2,param_3);
  return AVar3;
}



// FUNCTION 144d43b70 UnpinEventInStreamCache body=370 status=ok
// SIG AKRESULT UnpinEventInStreamCache(uint param_1)

/* enum AKRESULT __cdecl AK::SoundEngine::UnpinEventInStreamCache(unsigned int) */

AKRESULT __cdecl AK::SoundEngine::UnpinEventInStreamCache(uint param_1)

{
  int iVar1;
  longlong lVar2;
  undefined2 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
                    /* 0x4d43b70  349  ?UnpinEventInStreamCache@SoundEngine@AK@@YA?AW4AKRESULT@@I@Z
                        */
  lVar4 = DAT_14c791060;
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  do {
    while (iVar1 = *(int *)(lVar4 + 0x108), iVar1 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x110));
      if (*(int *)(lVar4 + 0x108) < 0) goto LAB_144d43bb7;
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x110));
    }
    LOCK();
    bVar7 = iVar1 == *(int *)(lVar4 + 0x108);
    if (bVar7) {
      *(int *)(lVar4 + 0x108) = iVar1 + 1;
    }
    UNLOCK();
  } while (!bVar7);
LAB_144d43bb7:
  lVar5 = 0;
  if (*(uint *)(lVar4 + 0x150) != 0) {
    for (lVar2 = *(longlong *)
                  (*(longlong *)(lVar4 + 0x148) +
                  ((ulonglong)param_1 % (ulonglong)*(uint *)(lVar4 + 0x150)) * 8);
        (lVar6 = lVar5, lVar2 != 0 && (lVar6 = lVar2, *(uint *)(lVar2 + 0x10) != param_1));
        lVar2 = *(longlong *)(lVar2 + 8)) {
    }
    lVar5 = lVar6;
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 0x14) = *(int *)(lVar6 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar1 = *(int *)(lVar4 + 0x108);
  do {
    if (iVar1 < 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x110));
LAB_144d43c56:
      if (lVar5 != 0) {
        uVar3 = FUN_145088030();
        lVar4 = FUN_145080f50(DAT_14c790fd8,0x25,uVar3);
        *(longlong *)(lVar4 + 0xc) = lVar5;
        *(undefined2 *)(lVar4 + 0x1a) = 0;
        *(uint *)(lVar4 + 0x14) = param_1;
        *(undefined8 *)(lVar4 + 4) = 0xffffffffffffffff;
        LOCK();
        *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
        UNLOCK();
        return 1;
      }
      return 0xf;
    }
    LOCK();
    bVar7 = iVar1 == *(int *)(lVar4 + 0x108);
    if (bVar7) {
      *(int *)(lVar4 + 0x108) = iVar1 + -1;
    }
    UNLOCK();
    if (bVar7) {
      if ((iVar1 + -1 == 0) && (0 < *(int *)(lVar4 + 0x138))) {
        SetEvent(*(HANDLE *)(lVar4 + 0x140));
      }
      goto LAB_144d43c56;
    }
    iVar1 = *(int *)(lVar4 + 0x108);
  } while( true );
}



// FUNCTION 144d43cf0 UnpinEventInStreamCache body=20 status=ok
// SIG AKRESULT UnpinEventInStreamCache(wchar_t * param_1)

/* enum AKRESULT __cdecl AK::SoundEngine::UnpinEventInStreamCache(wchar_t const * __ptr64) */

AKRESULT __cdecl AK::SoundEngine::UnpinEventInStreamCache(wchar_t *param_1)

{
  uint uVar1;
  AKRESULT AVar2;
  
                    /* 0x4d43cf0  351
                       ?UnpinEventInStreamCache@SoundEngine@AK@@YA?AW4AKRESULT@@PEB_W@Z */
  uVar1 = GetIDFromString(param_1);
  AVar2 = UnpinEventInStreamCache(uVar1);
  return AVar2;
}



// FUNCTION 144d43d10 UnpinEventInStreamCache body=83 status=ok
// SIG AKRESULT UnpinEventInStreamCache(char * param_1)

/* enum AKRESULT __cdecl AK::SoundEngine::UnpinEventInStreamCache(char const * __ptr64) */

AKRESULT __cdecl AK::SoundEngine::UnpinEventInStreamCache(char *param_1)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  undefined2 uVar5;
  AKRESULT AVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  
                    /* 0x4d43d10  350
                       ?UnpinEventInStreamCache@SoundEngine@AK@@YA?AW4AKRESULT@@PEBD@Z */
  lVar7 = DAT_14c791060;
  if (param_1 != (char *)0x0) {
    uVar8 = 0x811c9dc5;
    bVar4 = *param_1;
    while (bVar4 != 0) {
      param_1 = param_1 + 1;
      bVar3 = bVar4 + 0x20;
      if (0x19 < (byte)(bVar4 + 0xbf)) {
        bVar3 = bVar4;
      }
      uVar8 = uVar8 * 0x1000193 ^ (uint)bVar3;
      bVar4 = *param_1;
    }
    AVar6 = UnpinEventInStreamCache(uVar8);
    return AVar6;
  }
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  do {
    while (iVar1 = *(int *)(lVar7 + 0x108), iVar1 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar7 + 0x110));
      if (*(int *)(lVar7 + 0x108) < 0) goto LAB_144d43bb7;
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar7 + 0x110));
    }
    LOCK();
    bVar11 = iVar1 == *(int *)(lVar7 + 0x108);
    if (bVar11) {
      *(int *)(lVar7 + 0x108) = iVar1 + 1;
    }
    UNLOCK();
  } while (!bVar11);
LAB_144d43bb7:
  lVar9 = 0;
  if (*(uint *)(lVar7 + 0x150) != 0) {
    for (lVar2 = *(longlong *)
                  (*(longlong *)(lVar7 + 0x148) + (0U % (ulonglong)*(uint *)(lVar7 + 0x150)) * 8);
        (lVar10 = lVar9, lVar2 != 0 && (lVar10 = lVar2, *(int *)(lVar2 + 0x10) != 0));
        lVar2 = *(longlong *)(lVar2 + 8)) {
    }
    lVar9 = lVar10;
    if (lVar10 != 0) {
      LOCK();
      *(int *)(lVar10 + 0x14) = *(int *)(lVar10 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar1 = *(int *)(lVar7 + 0x108);
  do {
    if (iVar1 < 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar7 + 0x110));
LAB_144d43c56:
      if (lVar9 == 0) {
        return 0xf;
      }
      uVar5 = FUN_145088030();
      lVar7 = FUN_145080f50(DAT_14c790fd8,0x25,uVar5);
      *(longlong *)(lVar7 + 0xc) = lVar9;
      *(undefined2 *)(lVar7 + 0x1a) = 0;
      *(undefined4 *)(lVar7 + 0x14) = 0;
      *(undefined8 *)(lVar7 + 4) = 0xffffffffffffffff;
      LOCK();
      *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
      UNLOCK();
      return 1;
    }
    LOCK();
    bVar11 = iVar1 == *(int *)(lVar7 + 0x108);
    if (bVar11) {
      *(int *)(lVar7 + 0x108) = iVar1 + -1;
    }
    UNLOCK();
    if (bVar11) {
      if ((iVar1 + -1 == 0) && (0 < *(int *)(lVar7 + 0x138))) {
        SetEvent(*(HANDLE *)(lVar7 + 0x140));
      }
      goto LAB_144d43c56;
    }
    iVar1 = *(int *)(lVar7 + 0x108);
  } while( true );
}



// FUNCTION 144d43d70 GetBufferStatusForPinnedEvent body=372 status=ok
// SIG AKRESULT GetBufferStatusForPinnedEvent(uint param_1, float * param_2, bool * param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::GetBufferStatusForPinnedEvent(unsigned int,float &
   __ptr64,bool & __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::GetBufferStatusForPinnedEvent(uint param_1,float *param_2,bool *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  AKRESULT AVar4;
  longlong *plVar5;
  bool bVar6;
  
                    /* 0x4d43d70  65
                       ?GetBufferStatusForPinnedEvent@SoundEngine@AK@@YA?AW4AKRESULT@@IAEAMAEA_N@Z
                        */
  lVar3 = DAT_14c791060;
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  do {
    while (iVar2 = *(int *)(lVar3 + 0x108), iVar2 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x110));
      if (*(int *)(lVar3 + 0x108) < 0) goto LAB_144d43dd7;
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x110));
    }
    LOCK();
    bVar6 = iVar2 == *(int *)(lVar3 + 0x108);
    if (bVar6) {
      *(int *)(lVar3 + 0x108) = iVar2 + 1;
    }
    UNLOCK();
  } while (!bVar6);
LAB_144d43dd7:
  if (*(uint *)(lVar3 + 0x150) == 0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    for (plVar5 = *(longlong **)
                   (*(longlong *)(lVar3 + 0x148) +
                   ((ulonglong)param_1 % (ulonglong)*(uint *)(lVar3 + 0x150)) * 8);
        plVar5 != (longlong *)0x0; plVar5 = (longlong *)plVar5[1]) {
      if (*(uint *)(plVar5 + 2) == param_1) goto LAB_144d43e07;
    }
    plVar5 = (longlong *)0x0;
LAB_144d43e07:
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar5 + 0x14) = *(int *)((longlong)plVar5 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar2 = *(int *)(lVar3 + 0x108);
  do {
    if (iVar2 < 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x110));
LAB_144d43e74:
      if (plVar5 == (longlong *)0x0) {
        AVar4 = 0xf;
      }
      else {
        AVar4 = FUN_1450caee0(plVar5,0,param_2,param_3);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0x14);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar5 + 0x18))(plVar5);
        }
      }
      return AVar4;
    }
    LOCK();
    bVar6 = iVar2 == *(int *)(lVar3 + 0x108);
    if (bVar6) {
      *(int *)(lVar3 + 0x108) = iVar2 + -1;
    }
    UNLOCK();
    if (bVar6) {
      if ((iVar2 + -1 == 0) && (0 < *(int *)(lVar3 + 0x138))) {
        SetEvent(*(HANDLE *)(lVar3 + 0x140));
      }
      goto LAB_144d43e74;
    }
    iVar2 = *(int *)(lVar3 + 0x108);
  } while( true );
}



// FUNCTION 144d43ef0 GetBufferStatusForPinnedEvent body=110 status=ok
// SIG AKRESULT GetBufferStatusForPinnedEvent(char * param_1, float * param_2, bool * param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::GetBufferStatusForPinnedEvent(char const * __ptr64,float &
   __ptr64,bool & __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::GetBufferStatusForPinnedEvent(char *param_1,float *param_2,bool *param_3)

{
  byte bVar1;
  byte bVar2;
  AKRESULT AVar3;
  uint uVar4;
  
                    /* 0x4d43ef0  66
                       ?GetBufferStatusForPinnedEvent@SoundEngine@AK@@YA?AW4AKRESULT@@PEBDAEAMAEA_N@Z
                        */
  if (param_1 == (char *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x811c9dc5;
    bVar2 = *param_1;
    while (bVar2 != 0) {
      param_1 = param_1 + 1;
      bVar1 = bVar2 + 0x20;
      if (0x19 < (byte)(bVar2 + 0xbf)) {
        bVar1 = bVar2;
      }
      uVar4 = uVar4 * 0x1000193 ^ (uint)bVar1;
      bVar2 = *param_1;
    }
  }
  AVar3 = GetBufferStatusForPinnedEvent(uVar4,param_2,param_3);
  return AVar3;
}



// FUNCTION 144d43f60 GetBufferStatusForPinnedEvent body=44 status=ok
// SIG AKRESULT GetBufferStatusForPinnedEvent(wchar_t * param_1, float * param_2, bool * param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::GetBufferStatusForPinnedEvent(wchar_t const *
   __ptr64,float & __ptr64,bool & __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::GetBufferStatusForPinnedEvent(wchar_t *param_1,float *param_2,bool *param_3)

{
  uint uVar1;
  AKRESULT AVar2;
  
                    /* 0x4d43f60  67
                       ?GetBufferStatusForPinnedEvent@SoundEngine@AK@@YA?AW4AKRESULT@@PEB_WAEAMAEA_N@Z
                        */
  uVar1 = GetIDFromString(param_1);
  AVar2 = GetBufferStatusForPinnedEvent(uVar1,param_2,param_3);
  return AVar2;
}



// FUNCTION 144d43f90 SeekOnEvent body=62 status=ok
// SIG AKRESULT SeekOnEvent(wchar_t * param_1, __uint64 param_2, int param_3, bool param_4, uint param_5)

/* enum AKRESULT __cdecl AK::SoundEngine::SeekOnEvent(wchar_t const * __ptr64,unsigned
   __int64,int,bool,unsigned int) */

AKRESULT __cdecl
AK::SoundEngine::SeekOnEvent
          (wchar_t *param_1,__uint64 param_2,int param_3,bool param_4,uint param_5)

{
  uint uVar1;
  AKRESULT AVar2;
  
                    /* 0x4d43f90  262  ?SeekOnEvent@SoundEngine@AK@@YA?AW4AKRESULT@@PEB_W_KH_NI@Z */
  uVar1 = GetIDFromString(param_1);
  AVar2 = SeekOnEvent(uVar1,param_2,param_3,param_4,param_5);
  return AVar2;
}



// FUNCTION 144d43fd0 SeekOnEvent body=115 status=ok
// SIG AKRESULT SeekOnEvent(char * param_1, __uint64 param_2, int param_3, bool param_4, uint param_5)

/* enum AKRESULT __cdecl AK::SoundEngine::SeekOnEvent(char const * __ptr64,unsigned
   __int64,int,bool,unsigned int) */

AKRESULT __cdecl
AK::SoundEngine::SeekOnEvent(char *param_1,__uint64 param_2,int param_3,bool param_4,uint param_5)

{
  byte bVar1;
  byte bVar2;
  AKRESULT AVar3;
  uint uVar4;
  
                    /* 0x4d43fd0  260  ?SeekOnEvent@SoundEngine@AK@@YA?AW4AKRESULT@@PEBD_KH_NI@Z */
  if (param_1 == (char *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x811c9dc5;
    bVar2 = *param_1;
    while (bVar2 != 0) {
      param_1 = param_1 + 1;
      bVar1 = bVar2 + 0x20;
      if (0x19 < (byte)(bVar2 + 0xbf)) {
        bVar1 = bVar2;
      }
      uVar4 = uVar4 * 0x1000193 ^ (uint)bVar1;
      bVar2 = *param_1;
    }
  }
  AVar3 = SeekOnEvent(uVar4,param_2,param_3,param_4,param_5);
  return AVar3;
}



// FUNCTION 144d44050 SeekOnEvent body=62 status=ok
// SIG AKRESULT SeekOnEvent(wchar_t * param_1, __uint64 param_2, float param_3, bool param_4, uint param_5)

/* enum AKRESULT __cdecl AK::SoundEngine::SeekOnEvent(wchar_t const * __ptr64,unsigned
   __int64,float,bool,unsigned int) */

AKRESULT __cdecl
AK::SoundEngine::SeekOnEvent
          (wchar_t *param_1,__uint64 param_2,float param_3,bool param_4,uint param_5)

{
  uint uVar1;
  AKRESULT AVar2;
  
                    /* 0x4d44050  263  ?SeekOnEvent@SoundEngine@AK@@YA?AW4AKRESULT@@PEB_W_KM_NI@Z */
  uVar1 = GetIDFromString(param_1);
  AVar2 = SeekOnEvent(uVar1,param_2,param_3,param_4,param_5);
  return AVar2;
}



// FUNCTION 144d44090 SeekOnEvent body=92 status=ok
// SIG AKRESULT SeekOnEvent(char * param_1, __uint64 param_2, float param_3, bool param_4, uint param_5)

/* enum AKRESULT __cdecl AK::SoundEngine::SeekOnEvent(char const * __ptr64,unsigned
   __int64,float,bool,unsigned int) */

AKRESULT __cdecl
AK::SoundEngine::SeekOnEvent(char *param_1,__uint64 param_2,float param_3,bool param_4,uint param_5)

{
  byte bVar1;
  byte bVar2;
  AKRESULT AVar3;
  uint uVar4;
  
                    /* 0x4d44090  261  ?SeekOnEvent@SoundEngine@AK@@YA?AW4AKRESULT@@PEBD_KM_NI@Z */
  if (param_1 == (char *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x811c9dc5;
    bVar2 = *param_1;
    while (bVar2 != 0) {
      param_1 = param_1 + 1;
      bVar1 = bVar2 + 0x20;
      if (0x19 < (byte)(bVar2 + 0xbf)) {
        bVar1 = bVar2;
      }
      uVar4 = uVar4 * 0x1000193 ^ (uint)bVar1;
      bVar2 = *param_1;
    }
  }
  AVar3 = SeekOnEvent(uVar4,param_2,param_3,param_4,param_5);
  return AVar3;
}



// FUNCTION 144d440f0 CancelEventCallbackGameObject body=25 status=ok
// SIG void CancelEventCallbackGameObject(__uint64 param_1)

/* void __cdecl AK::SoundEngine::CancelEventCallbackGameObject(unsigned __int64) */

void __cdecl AK::SoundEngine::CancelEventCallbackGameObject(__uint64 param_1)

{
                    /* 0x4d440f0  38  ?CancelEventCallbackGameObject@SoundEngine@AK@@YAX_K@Z */
  if (DAT_14c790ff4 != '\0') {
    FUN_1450b2450(DAT_14c790fc0,param_1);
    return;
  }
  return;
}



// FUNCTION 144d44110 CancelEventCallback body=24 status=ok
// SIG void CancelEventCallback(uint param_1)

/* void __cdecl AK::SoundEngine::CancelEventCallback(unsigned int) */

void __cdecl AK::SoundEngine::CancelEventCallback(uint param_1)

{
                    /* 0x4d44110  36  ?CancelEventCallback@SoundEngine@AK@@YAXI@Z */
  if (DAT_14c790ff4 != '\0') {
    FUN_1450b2540(DAT_14c790fc0,param_1);
    return;
  }
  return;
}



// FUNCTION 144d44130 GetSourcePlayPositions body=78 status=ok
// SIG AKRESULT GetSourcePlayPositions(uint param_1, AkSourcePosition * param_2, uint * param_3, bool param_4)

/* enum AKRESULT __cdecl AK::SoundEngine::GetSourcePlayPositions(unsigned int,struct
   AkSourcePosition * __ptr64,unsigned int * __ptr64,bool) */

AKRESULT __cdecl
AK::SoundEngine::GetSourcePlayPositions
          (uint param_1,AkSourcePosition *param_2,uint *param_3,bool param_4)

{
  AKRESULT AVar1;
  
                    /* 0x4d44130  124
                       ?GetSourcePlayPositions@SoundEngine@AK@@YA?AW4AKRESULT@@IPEAUAkSourcePosition@@PEAI_N@Z
                        */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  if ((param_3 != (uint *)0x0) && ((param_2 != (AkSourcePosition *)0x0 || (*param_3 == 0)))) {
    AVar1 = FUN_1450c9100(DAT_14c791050,param_1,param_2,param_3,param_4);
    return AVar1;
  }
  return 0x1f;
}



// FUNCTION 144d44180 GetSourceStreamBuffering body=109 status=ok
// SIG AKRESULT GetSourceStreamBuffering(uint param_1, int * param_2, bool * param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::GetSourceStreamBuffering(unsigned int,int & __ptr64,bool &
   __ptr64) */

AKRESULT __cdecl AK::SoundEngine::GetSourceStreamBuffering(uint param_1,int *param_2,bool *param_3)

{
  AKRESULT AVar1;
  int local_res20 [2];
  
                    /* 0x4d44180  125
                       ?GetSourceStreamBuffering@SoundEngine@AK@@YA?AW4AKRESULT@@IAEAHAEA_N@Z */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  AVar1 = FUN_1450c9510(DAT_14c791050,param_1,param_2,local_res20);
  if (AVar1 == 1) {
    *param_3 = local_res20[0] == 1;
    return 1;
  }
  *param_2 = 0;
  *param_3 = false;
  return AVar1;
}



// FUNCTION 144d441f0 StopAll body=68 status=ok
// SIG void StopAll(__uint64 param_1)

/* void __cdecl AK::SoundEngine::StopAll(unsigned __int64) */

void __cdecl AK::SoundEngine::StopAll(__uint64 param_1)

{
  undefined2 uVar1;
  longlong lVar2;
  
                    /* 0x4d441f0  328  ?StopAll@SoundEngine@AK@@YAX_K@Z */
  if (DAT_14c790ff4 != '\0') {
    uVar1 = FUN_145087fe0();
    lVar2 = FUN_145080f50(DAT_14c790fd8,0x1c,uVar1);
    *(__uint64 *)(lVar2 + 4) = param_1;
    LOCK();
    *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
    UNLOCK();
  }
  return;
}



// FUNCTION 144d44240 SetRandomSeed body=66 status=ok
// SIG void SetRandomSeed(uint param_1)

/* void __cdecl AK::SoundEngine::SetRandomSeed(unsigned int) */

void __cdecl AK::SoundEngine::SetRandomSeed(uint param_1)

{
  undefined2 uVar1;
  longlong lVar2;
  
                    /* 0x4d44240  313  ?SetRandomSeed@SoundEngine@AK@@YAXI@Z */
  if (DAT_14c790ff4 != '\0') {
    uVar1 = FUN_1450880d0();
    lVar2 = FUN_145080f50(DAT_14c790fd8,0x35,uVar1);
    *(uint *)(lVar2 + 4) = param_1;
    LOCK();
    *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
    UNLOCK();
  }
  return;
}



// FUNCTION 144d44290 MuteBackgroundMusic body=68 status=ok
// SIG void MuteBackgroundMusic(bool param_1)

/* void __cdecl AK::SoundEngine::MuteBackgroundMusic(bool) */

void __cdecl AK::SoundEngine::MuteBackgroundMusic(bool param_1)

{
  undefined2 uVar1;
  longlong lVar2;
  
                    /* 0x4d44290  170  ?MuteBackgroundMusic@SoundEngine@AK@@YAX_N@Z */
  if (DAT_14c790ff4 != '\0') {
    uVar1 = FUN_1450880e0();
    lVar2 = FUN_145080f50(DAT_14c790fd8,0x36,uVar1);
    *(ushort *)(lVar2 + 4) = (ushort)param_1;
    LOCK();
    *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
    UNLOCK();
  }
  return;
}



// FUNCTION 144d442e0 GetBackgroundMusicMute body=5 status=ok
// SIG bool GetBackgroundMusicMute(void)

/* bool __cdecl AK::SoundEngine::GetBackgroundMusicMute(void) */

bool __cdecl AK::SoundEngine::GetBackgroundMusicMute(void)

{
                    /* 0x4d442e0  64  ?GetBackgroundMusicMute@SoundEngine@AK@@YA_NXZ */
  return (bool)DAT_14c79be68;
}



// FUNCTION 144d442f0 RegisterGameObj body=105 status=ok
// SIG AKRESULT RegisterGameObj(__uint64 param_1, char * param_2)

/* enum AKRESULT __cdecl AK::SoundEngine::RegisterGameObj(unsigned __int64,char const * __ptr64) */

AKRESULT __cdecl AK::SoundEngine::RegisterGameObj(__uint64 param_1,char *param_2)

{
  undefined2 uVar1;
  longlong lVar2;
  
                    /* 0x4d442f0  229  ?RegisterGameObj@SoundEngine@AK@@YA?AW4AKRESULT@@_KPEBD@Z */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  if (0xffffffffffffffdf < param_1) {
    return 0x1f;
  }
  uVar1 = FUN_145087ed0();
  lVar2 = FUN_145080f50(DAT_14c790fd8,0xb,uVar1);
  *(__uint64 *)(lVar2 + 4) = param_1;
  *(undefined1 *)(lVar2 + 0xc) = 0;
  LOCK();
  *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
  UNLOCK();
  return 1;
}



// FUNCTION 144d44360 UnregisterAllGameObj body=81 status=ok
// SIG AKRESULT UnregisterAllGameObj(void)

/* enum AKRESULT __cdecl AK::SoundEngine::UnregisterAllGameObj(void) */

AKRESULT __cdecl AK::SoundEngine::UnregisterAllGameObj(void)

{
  undefined2 uVar1;
  longlong lVar2;
  
                    /* 0x4d44360  352  ?UnregisterAllGameObj@SoundEngine@AK@@YA?AW4AKRESULT@@XZ */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  uVar1 = FUN_145087ee0();
  lVar2 = FUN_145080f50(DAT_14c790fd8,0xc,uVar1);
  *(undefined8 *)(lVar2 + 4) = 0xffffffffffffffff;
  LOCK();
  *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
  UNLOCK();
  return 1;
}



// FUNCTION 144d443c0 SetMultiplePositions body=37 status=ok
// SIG AKRESULT SetMultiplePositions(__uint64 param_1, AkWorldTransform * param_2, ushort param_3, MultiPositionType param_4, AkSetPositionFlags param_5)

/* enum AKRESULT __cdecl AK::SoundEngine::SetMultiplePositions(unsigned __int64,class
   AkWorldTransform const * __ptr64,unsigned short,enum AK::SoundEngine::MultiPositionType,enum
   AkSetPositionFlags) */

AKRESULT __cdecl
AK::SoundEngine::SetMultiplePositions
          (__uint64 param_1,AkWorldTransform *param_2,ushort param_3,MultiPositionType param_4,
          AkSetPositionFlags param_5)

{
  AKRESULT AVar1;
  
                    /* 0x4d443c0  298
                       ?SetMultiplePositions@SoundEngine@AK@@YA?AW4AKRESULT@@_KPEBVAkWorldTransform@@GW4MultiPositionType@12@W4AkSetPositionFlags@@@Z
                        */
  if (((byte)param_4 < 3) && ((param_3 == 0 || (param_2 != (AkWorldTransform *)0x0)))) {
    AVar1 = FUN_144d4c320();
    return AVar1;
  }
  return 0x1f;
}



// FUNCTION 144d443f0 SetScalingFactor body=162 status=ok
// SIG AKRESULT SetScalingFactor(__uint64 param_1, float param_2)

/* enum AKRESULT __cdecl AK::SoundEngine::SetScalingFactor(unsigned __int64,float) */

AKRESULT __cdecl AK::SoundEngine::SetScalingFactor(__uint64 param_1,float param_2)

{
  undefined2 uVar1;
  longlong lVar2;
  
                    /* 0x4d443f0  314  ?SetScalingFactor@SoundEngine@AK@@YA?AW4AKRESULT@@_KM@Z */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  if (param_2 <= 0.0) {
    return 0x1f;
  }
  if (0x7f7fffff < (uint)ABS(param_2)) {
    return 0x5f;
  }
  uVar1 = FUN_145088040();
  lVar2 = FUN_145080f50(DAT_14c790fd8,0x26,uVar1);
  *(float *)(lVar2 + 0xc) = param_2;
  *(__uint64 *)(lVar2 + 4) = param_1;
  LOCK();
  *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
  UNLOCK();
  return 1;
}



// FUNCTION 144d444a0 SetDistanceProbe body=105 status=ok
// SIG AKRESULT SetDistanceProbe(__uint64 param_1, __uint64 param_2)

/* enum AKRESULT __cdecl AK::SoundEngine::SetDistanceProbe(unsigned __int64,unsigned __int64) */

AKRESULT __cdecl AK::SoundEngine::SetDistanceProbe(__uint64 param_1,__uint64 param_2)

{
  undefined2 uVar1;
  longlong lVar2;
  
                    /* 0x4d444a0  282  ?SetDistanceProbe@SoundEngine@AK@@YA?AW4AKRESULT@@_K0@Z */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  uVar1 = FUN_145088130();
  lVar2 = FUN_145080f50(DAT_14c790fd8,0x3f,uVar1);
  *(__uint64 *)(lVar2 + 0xc) = param_2;
  *(__uint64 *)(lVar2 + 4) = param_1;
  LOCK();
  *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
  UNLOCK();
  return 1;
}



// FUNCTION 144d44510 ClearBanks body=236 status=ok
// SIG AKRESULT ClearBanks(void)

/* enum AKRESULT __cdecl AK::SoundEngine::ClearBanks(void) */

AKRESULT __cdecl AK::SoundEngine::ClearBanks(void)

{
  AKRESULT AVar1;
  undefined4 uVar2;
  undefined1 local_b8 [16];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  undefined1 uStack_90;
  uint7 uStack_8f;
  undefined8 local_88;
  undefined1 *puStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  longlong lStack_50;
  undefined8 local_48;
  longlong lStack_40;
  undefined8 local_38;
  undefined1 *puStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
                    /* 0x4d44510  42  ?ClearBanks@SoundEngine@AK@@YA?AW4AKRESULT@@XZ */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  AVar1 = ClearPreparedEvents();
  if (AVar1 == 1) {
    AVar1 = (**(code **)(*DAT_14c790fe0 + 0x20))(DAT_14c790fe0,local_b8);
    if (AVar1 == 1) {
      local_88 = DAT_14c791040;
      uStack_a4 = 0;
      uStack_a0 = 0;
      puStack_80 = local_b8;
      local_98 = 0;
      uStack_90 = 0;
      lStack_40 = (ulonglong)uStack_8f << 8;
      local_78 = 0;
      local_48 = 0;
      local_a8 = 8;
      local_58 = 8;
      lStack_50 = (ulonglong)uStack_9c << 0x20;
      local_38 = DAT_14c791040;
      local_28 = 0;
      uStack_24 = uStack_74;
      uStack_20 = uStack_70;
      uStack_1c = uStack_6c;
      local_18 = local_68;
      uStack_14 = uStack_64;
      uStack_10 = uStack_60;
      uStack_c = uStack_5c;
      puStack_30 = puStack_80;
      uVar2 = (**(code **)(*DAT_14c790fe0 + 0x18))(DAT_14c790fe0,&local_58);
      AVar1 = (**(code **)(*DAT_14c790fe0 + 0x28))(DAT_14c790fe0,local_b8,uVar2);
    }
  }
  return AVar1;
}



// FUNCTION 144d44600 SetBankLoadIOSettings body=38 status=ok
// SIG AKRESULT SetBankLoadIOSettings(float param_1, char param_2)

/* enum AKRESULT __cdecl AK::SoundEngine::SetBankLoadIOSettings(float,signed char) */

AKRESULT __cdecl AK::SoundEngine::SetBankLoadIOSettings(float param_1,char param_2)

{
  AKRESULT AVar1;
  
                    /* 0x4d44600  266  ?SetBankLoadIOSettings@SoundEngine@AK@@YA?AW4AKRESULT@@MC@Z
                        */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  AVar1 = FUN_1450b51b0(DAT_14c790fe0 + 8,param_1,param_2);
  return AVar1;
}



// FUNCTION 144d44630 LoadBank body=302 status=ok
// SIG AKRESULT LoadBank(wchar_t * param_1, uint * param_2, uint param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::LoadBank(wchar_t const * __ptr64,unsigned int &
   __ptr64,unsigned int) */

AKRESULT __cdecl AK::SoundEngine::LoadBank(wchar_t *param_1,uint *param_2,uint param_3)

{
  int iVar1;
  AKRESULT AVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 local_c8;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined1 local_b8 [16];
  undefined4 local_a8;
  uint uStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_88;
  undefined1 *puStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined1 *puStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
                    /* 0x4d44630  150  ?LoadBank@SoundEngine@AK@@YA?AW4AKRESULT@@PEB_WAEAII@Z */
  if (DAT_14c790ff4 == '\0') {
    AVar2 = 0x66;
  }
  else {
    local_c8 = 0;
    uStack_c0 = 0;
    iVar1 = FUN_1450b5bc0(&local_c8,param_1,L".bnk");
    if (iVar1 == 1) {
      uVar3 = FUN_144d4d0f0(local_c8);
      *param_2 = uVar3;
      AVar2 = (**(code **)(*DAT_14c790fe0 + 0x20))(DAT_14c790fe0,local_b8);
      if (AVar2 == 1) {
        if ((param_3 - 1 < 0x1d) || (0x1f < param_3)) {
          uVar4 = 100;
        }
        else {
          uStack_40 = CONCAT71(uStack_bf,uStack_c0);
          local_88 = DAT_14c791040;
          puStack_80 = local_b8;
          local_48 = local_c8;
          local_a8 = 0;
          local_58 = (ulonglong)param_3 << 0x20;
          uStack_50 = CONCAT44(uStack_9c,*param_2);
          local_38 = DAT_14c791040;
          uStack_70 = 0;
          local_68 = 0;
          local_78 = 0;
          local_28 = 0;
          uStack_24 = uStack_74;
          uStack_20 = 0;
          uStack_1c = 0;
          local_18 = 0;
          uStack_14 = uStack_64;
          uStack_10 = uStack_60;
          uStack_c = uStack_5c;
          uStack_a4 = param_3;
          uStack_a0 = *param_2;
          puStack_30 = puStack_80;
          uVar4 = (**(code **)(*DAT_14c790fe0 + 0x18))(DAT_14c790fe0,&local_58);
        }
        AVar2 = (**(code **)(*DAT_14c790fe0 + 0x28))(DAT_14c790fe0,local_b8,uVar4);
      }
    }
    else {
      AVar2 = 0x34;
    }
  }
  return AVar2;
}



// FUNCTION 144d44760 LoadBank body=318 status=ok
// SIG AKRESULT LoadBank(char * param_1, uint * param_2, uint param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::LoadBank(char const * __ptr64,unsigned int &
   __ptr64,unsigned int) */

AKRESULT __cdecl AK::SoundEngine::LoadBank(char *param_1,uint *param_2,uint param_3)

{
  int iVar1;
  AKRESULT AVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 local_c8;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined1 local_b8 [16];
  undefined4 local_a8;
  uint uStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_88;
  undefined1 *puStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined1 *puStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
                    /* 0x4d44760  148  ?LoadBank@SoundEngine@AK@@YA?AW4AKRESULT@@PEBDAEAII@Z */
  if (DAT_14c790ff4 == '\0') {
    AVar2 = 0x66;
  }
  else {
    local_c8 = 0;
    uStack_c0 = 0;
    iVar1 = FUN_1450b5eb0(&local_c8,param_1,&DAT_1499d13e4);
    if (iVar1 == 1) {
      uVar3 = FUN_144d4d0f0(param_1);
      *param_2 = uVar3;
      AVar2 = (**(code **)(*DAT_14c790fe0 + 0x20))(DAT_14c790fe0,local_b8);
      if (AVar2 == 1) {
        if ((param_3 - 1 < 0x1d) || (0x1f < param_3)) {
          uVar4 = 100;
        }
        else {
          uStack_40 = CONCAT71(uStack_bf,uStack_c0);
          local_88 = DAT_14c791040;
          puStack_80 = local_b8;
          local_48 = local_c8;
          local_a8 = 0;
          local_58 = (ulonglong)param_3 << 0x20;
          uStack_50 = CONCAT44(uStack_9c,*param_2);
          local_38 = DAT_14c791040;
          uStack_70 = 0;
          local_68 = 0;
          local_78 = 0;
          local_28 = 0;
          uStack_24 = uStack_74;
          uStack_20 = 0;
          uStack_1c = 0;
          local_18 = 0;
          uStack_14 = uStack_64;
          uStack_10 = uStack_60;
          uStack_c = uStack_5c;
          uStack_a4 = param_3;
          uStack_a0 = *param_2;
          puStack_30 = puStack_80;
          uVar4 = (**(code **)(*DAT_14c790fe0 + 0x18))(DAT_14c790fe0,&local_58);
        }
        AVar2 = (**(code **)(*DAT_14c790fe0 + 0x28))(DAT_14c790fe0,local_b8,uVar4);
      }
    }
    else {
      AVar2 = 0x34;
    }
  }
  return AVar2;
}



// FUNCTION 144d448a0 LoadBank body=242 status=ok
// SIG AKRESULT LoadBank(uint param_1, uint param_2)

/* enum AKRESULT __cdecl AK::SoundEngine::LoadBank(unsigned int,unsigned int) */

AKRESULT __cdecl AK::SoundEngine::LoadBank(uint param_1,uint param_2)

{
  AKRESULT AVar1;
  undefined4 uVar2;
  undefined8 in_R9;
  undefined8 uVar3;
  undefined1 uVar4;
  uint7 uStack_bf;
  undefined1 local_b8 [16];
  undefined4 local_a8;
  uint uStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_88;
  undefined1 *puStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong lStack_40;
  undefined8 local_38;
  undefined1 *puStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
                    /* 0x4d448a0  146  ?LoadBank@SoundEngine@AK@@YA?AW4AKRESULT@@II@Z */
  if (DAT_14c790ff4 == '\0') {
    AVar1 = 0x66;
  }
  else {
    AVar1 = (**(code **)(*DAT_14c790fe0 + 0x20))();
    if (AVar1 == 1) {
      uVar3 = 0;
      uVar4 = 0;
      if ((param_2 - 1 < 0x1d) || (0x1f < param_2)) {
        uVar2 = 100;
      }
      else {
        lStack_40 = (ulonglong)uStack_bf << 8;
        local_88 = DAT_14c791040;
        puStack_80 = local_b8;
        local_a8 = 0;
        uStack_70 = 0;
        local_68 = 0;
        local_48 = 0;
        local_58 = (ulonglong)param_2 << 0x20;
        uStack_50 = CONCAT44(uStack_9c,param_1);
        local_38 = DAT_14c791040;
        local_78 = 1;
        local_28 = 1;
        uStack_24 = uStack_74;
        uStack_20 = 0;
        uStack_1c = 0;
        local_18 = 0;
        uStack_14 = uStack_64;
        uStack_10 = uStack_60;
        uStack_c = uStack_5c;
        uStack_a4 = param_2;
        uStack_a0 = param_1;
        puStack_30 = puStack_80;
        uVar2 = (**(code **)(*DAT_14c790fe0 + 0x18))(DAT_14c790fe0,&local_58);
      }
      AVar1 = (**(code **)(*DAT_14c790fe0 + 0x28))(DAT_14c790fe0,local_b8,uVar2,in_R9,uVar3,uVar4);
    }
  }
  return AVar1;
}



// FUNCTION 144d449a0 LoadBankMemoryView body=310 status=ok
// SIG AKRESULT LoadBankMemoryView(void * param_1, uint param_2, uint * param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::LoadBankMemoryView(void const * __ptr64,unsigned
   int,unsigned int & __ptr64) */

AKRESULT __cdecl AK::SoundEngine::LoadBankMemoryView(void *param_1,uint param_2,uint *param_3)

{
  AKRESULT AVar1;
  undefined4 uVar2;
  undefined4 in_register_00000014;
  uint local_res20 [2];
  uint7 uStack_bf;
  undefined1 local_b8 [16];
  undefined4 local_a8;
  uint uStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_88;
  undefined1 *puStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  void *pvStack_70;
  uint local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong lStack_40;
  undefined8 local_38;
  undefined1 *puStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  uint local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
                    /* 0x4d449a0  157
                       ?LoadBankMemoryView@SoundEngine@AK@@YA?AW4AKRESULT@@PEBXIAEAI@Z */
  if (DAT_14c790ff4 == '\0') {
    AVar1 = 0x66;
  }
  else {
    AVar1 = FUN_1450b8810(param_1,CONCAT44(in_register_00000014,param_2),1,param_3,local_res20);
    if (AVar1 == 1) {
      if (local_res20[0] == 0) {
        AVar1 = (**(code **)(*DAT_14c790fe0 + 0x20))(DAT_14c790fe0,local_b8);
        if (AVar1 == 1) {
          if ((local_res20[0] - 1 < 0x1d) || (0x1f < local_res20[0])) {
            uVar2 = 100;
          }
          else {
            lStack_40 = (ulonglong)uStack_bf << 8;
            uStack_a4 = local_res20[0];
            puStack_80 = local_b8;
            local_88 = DAT_14c791040;
            local_a8 = 0;
            local_58 = (ulonglong)local_res20[0] << 0x20;
            uStack_50 = CONCAT44(uStack_9c,*param_3);
            local_48 = 0;
            local_38 = DAT_14c791040;
            local_78 = 2;
            local_28 = 2;
            uStack_24 = uStack_74;
            uStack_14 = uStack_64;
            uStack_10 = uStack_60;
            uStack_c = uStack_5c;
            uStack_a0 = *param_3;
            pvStack_70 = param_1;
            local_68 = param_2;
            puStack_30 = puStack_80;
            local_18 = param_2;
            uStack_20 = param_1;
            uVar2 = (**(code **)(*DAT_14c790fe0 + 0x18))(DAT_14c790fe0,&local_58);
          }
          AVar1 = (**(code **)(*DAT_14c790fe0 + 0x28))(DAT_14c790fe0,local_b8,uVar2);
        }
      }
      else {
        AVar1 = 100;
      }
    }
  }
  return AVar1;
}



// FUNCTION 144d44ae0 LoadBankMemoryView body=301 status=ok
// SIG AKRESULT LoadBankMemoryView(void * param_1, uint param_2, uint * param_3, uint * param_4)

/* enum AKRESULT __cdecl AK::SoundEngine::LoadBankMemoryView(void const * __ptr64,unsigned
   int,unsigned int & __ptr64,unsigned int & __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::LoadBankMemoryView(void *param_1,uint param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  AKRESULT AVar2;
  undefined4 uVar3;
  undefined4 in_register_00000014;
  uint7 uStack_bf;
  undefined1 local_b8 [16];
  undefined4 local_a8;
  uint uStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_88;
  undefined1 *puStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  void *pvStack_70;
  uint local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong lStack_40;
  undefined8 local_38;
  undefined1 *puStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  uint local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
                    /* 0x4d44ae0  156
                       ?LoadBankMemoryView@SoundEngine@AK@@YA?AW4AKRESULT@@PEBXIAEAI1@Z */
  if (DAT_14c790ff4 == '\0') {
    AVar2 = 0x66;
  }
  else {
    AVar2 = FUN_1450b8810(param_1,CONCAT44(in_register_00000014,param_2),1,param_3,param_4);
    if (AVar2 == 1) {
      AVar2 = (**(code **)(*DAT_14c790fe0 + 0x20))(DAT_14c790fe0,local_b8);
      if (AVar2 == 1) {
        uVar1 = *param_4;
        if ((uVar1 - 1 < 0x1d) || (0x1f < uVar1)) {
          uVar3 = 100;
        }
        else {
          lStack_40 = (ulonglong)uStack_bf << 8;
          puStack_80 = local_b8;
          local_88 = DAT_14c791040;
          local_a8 = 0;
          local_58 = (ulonglong)uVar1 << 0x20;
          uStack_50 = CONCAT44(uStack_9c,*param_3);
          local_48 = 0;
          local_38 = DAT_14c791040;
          local_78 = 2;
          local_28 = 2;
          uStack_24 = uStack_74;
          uStack_14 = uStack_64;
          uStack_10 = uStack_60;
          uStack_c = uStack_5c;
          uStack_a4 = uVar1;
          uStack_a0 = *param_3;
          pvStack_70 = param_1;
          local_68 = param_2;
          puStack_30 = puStack_80;
          local_18 = param_2;
          uStack_20 = param_1;
          uVar3 = (**(code **)(*DAT_14c790fe0 + 0x18))(DAT_14c790fe0,&local_58);
        }
        AVar2 = (**(code **)(*DAT_14c790fe0 + 0x28))(DAT_14c790fe0,local_b8,uVar3);
      }
    }
  }
  return AVar2;
}



// FUNCTION 144d44c10 LoadBankMemoryCopy body=310 status=ok
// SIG AKRESULT LoadBankMemoryCopy(void * param_1, uint param_2, uint * param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::LoadBankMemoryCopy(void const * __ptr64,unsigned
   int,unsigned int & __ptr64) */

AKRESULT __cdecl AK::SoundEngine::LoadBankMemoryCopy(void *param_1,uint param_2,uint *param_3)

{
  AKRESULT AVar1;
  undefined4 uVar2;
  undefined4 in_register_00000014;
  uint local_res20 [2];
  uint7 uStack_bf;
  undefined1 local_b8 [16];
  undefined4 local_a8;
  uint uStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_88;
  undefined1 *puStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  void *pvStack_70;
  uint local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong lStack_40;
  undefined8 local_38;
  undefined1 *puStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  uint local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
                    /* 0x4d44c10  153
                       ?LoadBankMemoryCopy@SoundEngine@AK@@YA?AW4AKRESULT@@PEBXIAEAI@Z */
  if (DAT_14c790ff4 == '\0') {
    AVar1 = 0x66;
  }
  else {
    AVar1 = FUN_1450b8810(param_1,CONCAT44(in_register_00000014,param_2),0,param_3,local_res20);
    if (AVar1 == 1) {
      if (local_res20[0] == 0) {
        AVar1 = (**(code **)(*DAT_14c790fe0 + 0x20))(DAT_14c790fe0,local_b8);
        if (AVar1 == 1) {
          if ((local_res20[0] - 1 < 0x1d) || (0x1f < local_res20[0])) {
            uVar2 = 100;
          }
          else {
            lStack_40 = (ulonglong)uStack_bf << 8;
            uStack_a4 = local_res20[0];
            puStack_80 = local_b8;
            local_88 = DAT_14c791040;
            local_a8 = 0;
            local_58 = (ulonglong)local_res20[0] << 0x20;
            uStack_50 = CONCAT44(uStack_9c,*param_3);
            local_48 = 0;
            local_38 = DAT_14c791040;
            local_78 = 3;
            local_28 = 3;
            uStack_24 = uStack_74;
            uStack_14 = uStack_64;
            uStack_10 = uStack_60;
            uStack_c = uStack_5c;
            uStack_a0 = *param_3;
            pvStack_70 = param_1;
            local_68 = param_2;
            puStack_30 = puStack_80;
            local_18 = param_2;
            uStack_20 = param_1;
            uVar2 = (**(code **)(*DAT_14c790fe0 + 0x18))(DAT_14c790fe0,&local_58);
          }
          AVar1 = (**(code **)(*DAT_14c790fe0 + 0x28))(DAT_14c790fe0,local_b8,uVar2);
        }
      }
      else {
        AVar1 = 100;
      }
    }
  }
  return AVar1;
}



// FUNCTION 144d44d50 LoadBankMemoryCopy body=301 status=ok
// SIG AKRESULT LoadBankMemoryCopy(void * param_1, uint param_2, uint * param_3, uint * param_4)

/* enum AKRESULT __cdecl AK::SoundEngine::LoadBankMemoryCopy(void const * __ptr64,unsigned
   int,unsigned int & __ptr64,unsigned int & __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::LoadBankMemoryCopy(void *param_1,uint param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  AKRESULT AVar2;
  undefined4 uVar3;
  undefined4 in_register_00000014;
  uint7 uStack_bf;
  undefined1 local_b8 [16];
  undefined4 local_a8;
  uint uStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_88;
  undefined1 *puStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  void *pvStack_70;
  uint local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong lStack_40;
  undefined8 local_38;
  undefined1 *puStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  uint local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
                    /* 0x4d44d50  152
                       ?LoadBankMemoryCopy@SoundEngine@AK@@YA?AW4AKRESULT@@PEBXIAEAI1@Z */
  if (DAT_14c790ff4 == '\0') {
    AVar2 = 0x66;
  }
  else {
    AVar2 = FUN_1450b8810(param_1,CONCAT44(in_register_00000014,param_2),0,param_3,param_4);
    if (AVar2 == 1) {
      AVar2 = (**(code **)(*DAT_14c790fe0 + 0x20))(DAT_14c790fe0,local_b8);
      if (AVar2 == 1) {
        uVar1 = *param_4;
        if ((uVar1 - 1 < 0x1d) || (0x1f < uVar1)) {
          uVar3 = 100;
        }
        else {
          lStack_40 = (ulonglong)uStack_bf << 8;
          puStack_80 = local_b8;
          local_88 = DAT_14c791040;
          local_a8 = 0;
          local_58 = (ulonglong)uVar1 << 0x20;
          uStack_50 = CONCAT44(uStack_9c,*param_3);
          local_48 = 0;
          local_38 = DAT_14c791040;
          local_78 = 3;
          local_28 = 3;
          uStack_24 = uStack_74;
          uStack_14 = uStack_64;
          uStack_10 = uStack_60;
          uStack_c = uStack_5c;
          uStack_a4 = uVar1;
          uStack_a0 = *param_3;
          pvStack_70 = param_1;
          local_68 = param_2;
          puStack_30 = puStack_80;
          local_18 = param_2;
          uStack_20 = param_1;
          uVar3 = (**(code **)(*DAT_14c790fe0 + 0x18))(DAT_14c790fe0,&local_58);
        }
        AVar2 = (**(code **)(*DAT_14c790fe0 + 0x28))(DAT_14c790fe0,local_b8,uVar3);
      }
    }
  }
  return AVar2;
}



// FUNCTION 144d44e80 DecodeBank body=1335 status=ok
// SIG AKRESULT DecodeBank(void * param_1, uint param_2, int param_3, void * * param_4, uint * param_5)

/* enum AKRESULT __cdecl AK::SoundEngine::DecodeBank(void const * __ptr64,unsigned int,int,void *
   __ptr64 & __ptr64,unsigned int & __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::DecodeBank(void *param_1,uint param_2,int param_3,void **param_4,uint *param_5)

{
  short sVar1;
  void **ppvVar2;
  AKRESULT AVar3;
  uint uVar4;
  undefined8 *puVar5;
  int *piVar6;
  int *piVar7;
  uint *puVar8;
  undefined8 *_Dst;
  uint uVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  undefined8 *puVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  int *piVar17;
  ulonglong uVar18;
  void *_Src;
  uint local_res10 [2];
  int local_res18;
  void **local_res20;
  int local_c8;
  int local_c4;
  ulonglong local_c0;
  undefined1 local_b8 [8];
  int *local_b0;
  undefined8 *local_a8;
  undefined1 local_a0 [8];
  short *local_98;
  longlong local_90;
  int *local_88;
  undefined1 local_78 [8];
  longlong local_70;
  longlong local_68;
  int *local_60;
  undefined8 *local_58;
  int *local_50;
  
                    /* 0x4d44e80  50
                       ?DecodeBank@SoundEngine@AK@@YA?AW4AKRESULT@@PEBXIHAEAPEAXAEAI@Z */
  local_50 = (int *)((ulonglong)param_2 + (longlong)param_1);
  piVar14 = (int *)0x0;
  piVar17 = (int *)0x0;
  iVar10 = 0;
  piVar7 = param_1;
  piVar12 = (int *)0x0;
  piVar15 = (int *)0x0;
  do {
    piVar6 = piVar7 + 2;
    local_b0 = piVar6;
    piVar16 = piVar7;
    if (*piVar7 != 0x41544144) {
      if (*piVar7 == 0x58444944) {
        piVar14 = piVar7;
        piVar17 = piVar6;
      }
      iVar10 = iVar10 + piVar7[1];
      local_b0 = piVar12;
      piVar16 = piVar15;
    }
    iVar10 = iVar10 + 8;
    piVar7 = (int *)((longlong)piVar6 + (ulonglong)(uint)piVar7[1]);
    piVar12 = local_b0;
    piVar15 = piVar16;
  } while (piVar7 < local_50);
  uVar18 = 0;
  iVar11 = 0;
  local_c0 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  local_88 = piVar17;
  if ((piVar14 != (int *)0x0) && (piVar16 != (int *)0x0)) {
    uVar9 = 0;
    uVar18 = (ulonglong)(uint)piVar14[1] / 0xc;
    local_c0 = uVar18;
    if ((uint)uVar18 != 0) {
      puVar8 = (uint *)(piVar17 + 2);
      do {
        AVar3 = FUN_1450731d0((ulonglong)puVar8[-1] + (longlong)local_b0,*puVar8,local_a0,0,local_b8
                              ,&local_c4,local_res10,&local_c8,0,0,1);
        if (AVar3 == 1) {
          if ((*puVar8 < local_res10[0] + local_c8) ||
             ((*local_98 != -1 && (1 < (ushort)(*local_98 + 0xcfc0U))))) goto LAB_144d44fd5;
          uVar4 = FUN_1450b78a0(local_a0);
        }
        else {
          if (AVar3 != 7) {
            return AVar3;
          }
LAB_144d44fd5:
          uVar4 = *puVar8;
        }
        uVar9 = uVar9 + 1;
        puVar8 = puVar8 + 3;
        iVar11 = (uVar4 + 0xf & 0xfffffff0) + iVar11;
      } while (uVar9 < (uint)uVar18);
    }
  }
  local_res10[0] = iVar10 + iVar11;
  *param_5 = local_res10[0];
  if (param_3 == -1) {
    puVar5 = *param_4;
    if (puVar5 == (undefined8 *)0x0) {
      return 1;
    }
  }
  else {
    puVar5 = MemoryMgr::Malloc(param_3,(ulonglong)local_res10[0]);
    *param_4 = puVar5;
    if (puVar5 == (undefined8 *)0x0) {
      return 0x34;
    }
  }
  puVar13 = (undefined8 *)0x0;
  AVar3 = 1;
  local_a8 = (undefined8 *)0x0;
  do {
    uVar9 = 0;
    local_res10[0] = local_res10[0] - 8;
    *puVar5 = *(undefined8 *)param_1;
    _Dst = puVar5 + 1;
    local_60 = param_1;
    local_58 = puVar5;
    if (*(int *)param_1 == 0x41544144) {
      iVar10 = (int)_Dst;
      if ((int)uVar18 != 0) {
        puVar8 = (uint *)(piVar17 + 2);
        local_70 = (longlong)piVar17 - (longlong)puVar13;
        local_68 = (longlong)puVar13 + (-4 - (longlong)piVar17);
        local_90 = (longlong)puVar13 + (-8 - (longlong)piVar17);
        do {
          piVar7 = (int *)(local_68 + (longlong)puVar8);
          _Src = (void *)((ulonglong)*(uint *)(local_70 + (longlong)piVar7) + (longlong)local_b0);
          AVar3 = FUN_1450731d0(_Src,*puVar8,local_a0,0,local_78,local_b8,&local_c8,&local_c4,0,0,1)
          ;
          if (AVar3 == 1) {
            if ((*puVar8 < (uint)(local_c8 + local_c4)) ||
               (((sVar1 = *local_98, sVar1 != -1 && (sVar1 != 0x3040)) && (sVar1 != 0x3041))))
            goto LAB_144d451e0;
            AVar3 = FUN_1450b78f0(_Dst,local_res10[0],_Src,*puVar8,(int)local_98 - (int)_Src,
                                  local_c4,(uint)(ushort)local_98[1] * 2,local_a0);
            puVar13 = local_a8;
            piVar17 = local_88;
            uVar18 = local_c0;
            if (AVar3 != 1) break;
            *(uint *)(local_90 + (longlong)puVar8) = puVar8[-2];
            *piVar7 = (int)_Dst - iVar10;
            uVar4 = FUN_1450b78a0(local_a0,local_c8,local_c4);
            piVar7[1] = uVar4;
          }
          else {
            puVar13 = local_a8;
            piVar17 = local_88;
            uVar18 = local_c0;
            if (AVar3 != 7) break;
LAB_144d451e0:
            AVar3 = 1;
            memcpy(_Dst,_Src,(ulonglong)*puVar8);
            *(uint *)(local_90 + (longlong)puVar8) = puVar8[-2];
            *piVar7 = (int)_Dst - iVar10;
            piVar7[1] = *puVar8;
            uVar4 = *puVar8;
          }
          uVar9 = uVar9 + 1;
          _Dst = (undefined8 *)((longlong)_Dst + ((ulonglong)(uVar4 + 0xf) & 0xfffffff0));
          puVar8 = puVar8 + 3;
          puVar13 = local_a8;
          piVar17 = local_88;
          uVar18 = local_c0;
        } while (uVar9 < (uint)local_c0);
      }
      puVar8 = (uint *)(local_60 + 1);
      *(int *)((longlong)local_58 + 4) = (int)_Dst - iVar10;
      puVar5 = _Dst;
    }
    else {
      puVar8 = (uint *)((longlong)param_1 + 4);
      if (*(int *)param_1 == 0x58444944) {
        puVar5 = (undefined8 *)((longlong)_Dst + (ulonglong)*(uint *)((longlong)param_1 + 4));
        puVar13 = _Dst;
        local_a8 = _Dst;
      }
      else {
        memcpy(_Dst,(int *)((longlong)param_1 + 8),(ulonglong)*(uint *)((longlong)param_1 + 4));
        puVar5 = (undefined8 *)((ulonglong)*puVar8 + (longlong)_Dst);
        puVar13 = local_a8;
      }
    }
    ppvVar2 = local_res20;
    param_1 = (void *)((longlong)param_1 + 8 + (ulonglong)*puVar8);
    if (local_50 <= param_1) {
      if (AVar3 == 1) {
        return 1;
      }
      goto LAB_144d45372;
    }
    if (AVar3 != 1) {
LAB_144d45372:
      if ((*local_res20 != (void *)0x0) && (local_res18 != -1)) {
        MemoryMgr::Free(local_res18,*local_res20);
        *ppvVar2 = (void *)0x0;
      }
      return AVar3;
    }
  } while( true );
}



// FUNCTION 144d453c0 LoadBank body=292 status=ok
// SIG AKRESULT LoadBank(wchar_t * param_1, _func_void_uint_void_ptr_AKRESULT_void_ptr * param_2, void * param_3, uint * param_4, uint param_5)

/* enum AKRESULT __cdecl AK::SoundEngine::LoadBank(wchar_t const * __ptr64,void (__cdecl*)(unsigned
   int,void const * __ptr64,enum AKRESULT,void * __ptr64),void * __ptr64,unsigned int &
   __ptr64,unsigned int) */

AKRESULT __cdecl
AK::SoundEngine::LoadBank
          (wchar_t *param_1,_func_void_uint_void_ptr_AKRESULT_void_ptr *param_2,void *param_3,
          uint *param_4,uint param_5)

{
  int iVar1;
  AKRESULT AVar2;
  undefined8 local_b8;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined4 local_a8;
  uint uStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  _func_void_uint_void_ptr_AKRESULT_void_ptr *local_88;
  void *pvStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  _func_void_uint_void_ptr_AKRESULT_void_ptr *local_38;
  void *pvStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
                    /* 0x4d453c0  151
                       ?LoadBank@SoundEngine@AK@@YA?AW4AKRESULT@@PEB_WP6AXIPEBXW43@PEAX@Z3AEAII@Z */
  if (DAT_14c790ff4 == '\0') {
    AVar2 = 0x66;
  }
  else {
    local_b8 = 0;
    uStack_b0 = 0;
    iVar1 = FUN_1450b5bc0(&local_b8,param_1,L".bnk");
    if (iVar1 == 1) {
      uStack_a0 = FUN_144d4d0f0(local_b8);
      *param_4 = uStack_a0;
      if ((param_5 - 1 < 0x1d) || (0x1f < param_5)) {
        AVar2 = 100;
      }
      else {
        uStack_40 = CONCAT71(uStack_af,uStack_b0);
        uStack_a4 = param_5;
        local_48 = local_b8;
        local_a8 = 0;
        local_58 = (ulonglong)param_5 << 0x20;
        uStack_50 = CONCAT44(uStack_9c,uStack_a0);
        uStack_70 = 0;
        local_68 = 0;
        local_78 = 0;
        local_18 = 0;
        uStack_14 = uStack_64;
        uStack_10 = uStack_60;
        uStack_c = uStack_5c;
        local_28 = 0;
        uStack_24 = uStack_74;
        uStack_20 = 0;
        uStack_1c = 0;
        local_88 = param_2;
        pvStack_80 = param_3;
        local_38 = param_2;
        pvStack_30 = param_3;
        AVar2 = (**(code **)(*DAT_14c790fe0 + 0x18))(DAT_14c790fe0,&local_58);
      }
    }
    else {
      AVar2 = 0x34;
    }
  }
  return AVar2;
}



// FUNCTION 144d454f0 LoadBank body=292 status=ok
// SIG AKRESULT LoadBank(char * param_1, _func_void_uint_void_ptr_AKRESULT_void_ptr * param_2, void * param_3, uint * param_4, uint param_5)

/* enum AKRESULT __cdecl AK::SoundEngine::LoadBank(char const * __ptr64,void (__cdecl*)(unsigned
   int,void const * __ptr64,enum AKRESULT,void * __ptr64),void * __ptr64,unsigned int &
   __ptr64,unsigned int) */

AKRESULT __cdecl
AK::SoundEngine::LoadBank
          (char *param_1,_func_void_uint_void_ptr_AKRESULT_void_ptr *param_2,void *param_3,
          uint *param_4,uint param_5)

{
  int iVar1;
  AKRESULT AVar2;
  undefined8 local_b8;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined4 local_a8;
  uint uStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  _func_void_uint_void_ptr_AKRESULT_void_ptr *local_88;
  void *pvStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  _func_void_uint_void_ptr_AKRESULT_void_ptr *local_38;
  void *pvStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
                    /* 0x4d454f0  149
                       ?LoadBank@SoundEngine@AK@@YA?AW4AKRESULT@@PEBDP6AXIPEBXW43@PEAX@Z3AEAII@Z */
  if (DAT_14c790ff4 == '\0') {
    AVar2 = 0x66;
  }
  else {
    local_b8 = 0;
    uStack_b0 = 0;
    iVar1 = FUN_1450b5d60(&local_b8,param_1,&DAT_1499d13e4);
    if (iVar1 == 1) {
      uStack_a0 = FUN_144d4d0f0(local_b8);
      *param_4 = uStack_a0;
      if ((param_5 - 1 < 0x1d) || (0x1f < param_5)) {
        AVar2 = 100;
      }
      else {
        uStack_40 = CONCAT71(uStack_af,uStack_b0);
        uStack_a4 = param_5;
        local_48 = local_b8;
        local_a8 = 0;
        local_58 = (ulonglong)param_5 << 0x20;
        uStack_50 = CONCAT44(uStack_9c,uStack_a0);
        uStack_70 = 0;
        local_68 = 0;
        local_78 = 0;
        local_18 = 0;
        uStack_14 = uStack_64;
        uStack_10 = uStack_60;
        uStack_c = uStack_5c;
        local_28 = 0;
        uStack_24 = uStack_74;
        uStack_20 = 0;
        uStack_1c = 0;
        local_88 = param_2;
        pvStack_80 = param_3;
        local_38 = param_2;
        pvStack_30 = param_3;
        AVar2 = (**(code **)(*DAT_14c790fe0 + 0x18))(DAT_14c790fe0,&local_58);
      }
    }
    else {
      AVar2 = 0x34;
    }
  }
  return AVar2;
}



// FUNCTION 144d45620 LoadBank body=214 status=ok
// SIG AKRESULT LoadBank(uint param_1, _func_void_uint_void_ptr_AKRESULT_void_ptr * param_2, void * param_3, uint param_4)

/* enum AKRESULT __cdecl AK::SoundEngine::LoadBank(unsigned int,void (__cdecl*)(unsigned int,void
   const * __ptr64,enum AKRESULT,void * __ptr64),void * __ptr64,unsigned int) */

AKRESULT __cdecl
AK::SoundEngine::LoadBank
          (uint param_1,_func_void_uint_void_ptr_AKRESULT_void_ptr *param_2,void *param_3,
          uint param_4)

{
  AKRESULT AVar1;
  uint7 uStack_af;
  undefined4 uStack_9c;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong lStack_40;
  _func_void_uint_void_ptr_AKRESULT_void_ptr *local_38;
  void *pvStack_30;
  undefined4 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
                    /* 0x4d45620  147
                       ?LoadBank@SoundEngine@AK@@YA?AW4AKRESULT@@IP6AXIPEBXW43@PEAX@Z2I@Z */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  if ((0x1c < param_4 - 1) && (param_4 < 0x20)) {
    lStack_40 = (ulonglong)uStack_af << 8;
    local_58 = (ulonglong)param_4 << 0x20;
    uStack_50 = CONCAT44(uStack_9c,param_1);
    local_48 = 0;
    local_28 = 1;
    uStack_20 = 0;
    uStack_1c = 0;
    local_18 = 0;
    local_38 = param_2;
    pvStack_30 = param_3;
    AVar1 = (**(code **)(*DAT_14c790fe0 + 0x18))(DAT_14c790fe0,&local_58);
    return AVar1;
  }
  return 100;
}



// FUNCTION 144d45700 LoadBankMemoryView body=198 status=ok
// SIG AKRESULT LoadBankMemoryView(void * param_1, uint param_2, _func_void_uint_void_ptr_AKRESULT_void_ptr * param_3, void * param_4, uint * param_5)

/* enum AKRESULT __cdecl AK::SoundEngine::LoadBankMemoryView(void const * __ptr64,unsigned int,void
   (__cdecl*)(unsigned int,void const * __ptr64,enum AKRESULT,void * __ptr64),void *
   __ptr64,unsigned int & __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::LoadBankMemoryView
          (void *param_1,uint param_2,_func_void_uint_void_ptr_AKRESULT_void_ptr *param_3,
          void *param_4,uint *param_5)

{
  AKRESULT AVar1;
  undefined4 in_register_00000014;
  int *piVar2;
  int local_28 [4];
  undefined8 local_18;
  uint uStack_10;
  
                    /* 0x4d45700  159
                       ?LoadBankMemoryView@SoundEngine@AK@@YA?AW4AKRESULT@@PEBXIP6AXI0W43@PEAX@Z2AEAI@Z
                        */
  if (DAT_14c790ff4 == '\0') {
    AVar1 = 0x66;
  }
  else {
    piVar2 = local_28;
    AVar1 = FUN_1450b8810(param_1,CONCAT44(in_register_00000014,param_2),1,param_5,piVar2);
    if (AVar1 == 1) {
      if (local_28[0] == 0) {
        uStack_10 = uStack_10 & 0xffffff00;
        local_18 = 0;
        AVar1 = FUN_144d4cdc0(*param_5,0,&local_18,2,(ulonglong)piVar2 & 0xffffffff00000000,param_3,
                              param_4,param_1,param_2);
      }
      else {
        AVar1 = 100;
      }
    }
  }
  return AVar1;
}



// FUNCTION 144d457d0 LoadBankMemoryView body=318 status=ok
// SIG AKRESULT LoadBankMemoryView(void * param_1, uint param_2, _func_void_uint_void_ptr_AKRESULT_void_ptr * param_3, void * param_4, uint * param_5, uint * param_6)

/* enum AKRESULT __cdecl AK::SoundEngine::LoadBankMemoryView(void const * __ptr64,unsigned int,void
   (__cdecl*)(unsigned int,void const * __ptr64,enum AKRESULT,void * __ptr64),void *
   __ptr64,unsigned int & __ptr64,unsigned int & __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::LoadBankMemoryView
          (void *param_1,uint param_2,_func_void_uint_void_ptr_AKRESULT_void_ptr *param_3,
          void *param_4,uint *param_5,uint *param_6)

{
  uint uVar1;
  AKRESULT AVar2;
  undefined4 in_register_00000014;
  uint7 uStack_bf;
  undefined4 uStack_ac;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong lStack_50;
  _func_void_uint_void_ptr_AKRESULT_void_ptr *local_48;
  void *pvStack_40;
  undefined4 local_38;
  void *pvStack_30;
  uint local_28;
  
                    /* 0x4d457d0  158
                       ?LoadBankMemoryView@SoundEngine@AK@@YA?AW4AKRESULT@@PEBXIP6AXI0W43@PEAX@Z2AEAI4@Z
                        */
  if (DAT_14c790ff4 == '\0') {
    AVar2 = 0x66;
  }
  else {
    AVar2 = FUN_1450b8810(param_1,CONCAT44(in_register_00000014,param_2),1,param_5,param_6);
    if (AVar2 == 1) {
      uVar1 = *param_6;
      if ((uVar1 - 1 < 0x1d) || (0x1f < uVar1)) {
        AVar2 = 100;
      }
      else {
        lStack_50 = (ulonglong)uStack_bf << 8;
        local_68 = (ulonglong)uVar1 << 0x20;
        uStack_60 = CONCAT44(uStack_ac,*param_5);
        local_58 = 0;
        local_38 = 2;
        local_48 = param_3;
        pvStack_40 = param_4;
        local_28 = param_2;
        pvStack_30 = param_1;
        AVar2 = (**(code **)(*DAT_14c790fe0 + 0x18))(DAT_14c790fe0,&local_68);
      }
    }
  }
  return AVar2;
}



// FUNCTION 144d45910 LoadBankMemoryCopy body=198 status=ok
// SIG AKRESULT LoadBankMemoryCopy(void * param_1, uint param_2, _func_void_uint_void_ptr_AKRESULT_void_ptr * param_3, void * param_4, uint * param_5)

/* enum AKRESULT __cdecl AK::SoundEngine::LoadBankMemoryCopy(void const * __ptr64,unsigned int,void
   (__cdecl*)(unsigned int,void const * __ptr64,enum AKRESULT,void * __ptr64),void *
   __ptr64,unsigned int & __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::LoadBankMemoryCopy
          (void *param_1,uint param_2,_func_void_uint_void_ptr_AKRESULT_void_ptr *param_3,
          void *param_4,uint *param_5)

{
  AKRESULT AVar1;
  undefined4 in_register_00000014;
  int *piVar2;
  int local_28 [4];
  undefined8 local_18;
  uint uStack_10;
  
                    /* 0x4d45910  155
                       ?LoadBankMemoryCopy@SoundEngine@AK@@YA?AW4AKRESULT@@PEBXIP6AXI0W43@PEAX@Z2AEAI@Z
                        */
  if (DAT_14c790ff4 == '\0') {
    AVar1 = 0x66;
  }
  else {
    piVar2 = local_28;
    AVar1 = FUN_1450b8810(param_1,CONCAT44(in_register_00000014,param_2),0,param_5,piVar2);
    if (AVar1 == 1) {
      if (local_28[0] == 0) {
        uStack_10 = uStack_10 & 0xffffff00;
        local_18 = 0;
        AVar1 = FUN_144d4cdc0(*param_5,0,&local_18,3,(ulonglong)piVar2 & 0xffffffff00000000,param_3,
                              param_4,param_1,param_2);
      }
      else {
        AVar1 = 100;
      }
    }
  }
  return AVar1;
}



// FUNCTION 144d459e0 LoadBankMemoryCopy body=318 status=ok
// SIG AKRESULT LoadBankMemoryCopy(void * param_1, uint param_2, _func_void_uint_void_ptr_AKRESULT_void_ptr * param_3, void * param_4, uint * param_5, uint * param_6)

/* enum AKRESULT __cdecl AK::SoundEngine::LoadBankMemoryCopy(void const * __ptr64,unsigned int,void
   (__cdecl*)(unsigned int,void const * __ptr64,enum AKRESULT,void * __ptr64),void *
   __ptr64,unsigned int & __ptr64,unsigned int & __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::LoadBankMemoryCopy
          (void *param_1,uint param_2,_func_void_uint_void_ptr_AKRESULT_void_ptr *param_3,
          void *param_4,uint *param_5,uint *param_6)

{
  uint uVar1;
  AKRESULT AVar2;
  undefined4 in_register_00000014;
  uint7 uStack_bf;
  undefined4 uStack_ac;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong lStack_50;
  _func_void_uint_void_ptr_AKRESULT_void_ptr *local_48;
  void *pvStack_40;
  undefined4 local_38;
  void *pvStack_30;
  uint local_28;
  
                    /* 0x4d459e0  154
                       ?LoadBankMemoryCopy@SoundEngine@AK@@YA?AW4AKRESULT@@PEBXIP6AXI0W43@PEAX@Z2AEAI4@Z
                        */
  if (DAT_14c790ff4 == '\0') {
    AVar2 = 0x66;
  }
  else {
    AVar2 = FUN_1450b8810(param_1,CONCAT44(in_register_00000014,param_2),0,param_5,param_6);
    if (AVar2 == 1) {
      uVar1 = *param_6;
      if ((uVar1 - 1 < 0x1d) || (0x1f < uVar1)) {
        AVar2 = 100;
      }
      else {
        lStack_50 = (ulonglong)uStack_bf << 8;
        local_68 = (ulonglong)uVar1 << 0x20;
        uStack_60 = CONCAT44(uStack_ac,*param_5);
        local_58 = 0;
        local_38 = 3;
        local_48 = param_3;
        pvStack_40 = param_4;
        local_28 = param_2;
        pvStack_30 = param_1;
        AVar2 = (**(code **)(*DAT_14c790fe0 + 0x18))(DAT_14c790fe0,&local_68);
      }
    }
  }
  return AVar2;
}



// FUNCTION 144d45b20 UnloadBank body=129 status=ok
// SIG AKRESULT UnloadBank(wchar_t * param_1, void * param_2, uint param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::UnloadBank(wchar_t const * __ptr64,void const *
   __ptr64,unsigned int) */

AKRESULT __cdecl AK::SoundEngine::UnloadBank(wchar_t *param_1,void *param_2,uint param_3)

{
  undefined4 uVar1;
  AKRESULT AVar2;
  undefined8 local_18;
  undefined1 local_10;
  
                    /* 0x4d45b20  346  ?UnloadBank@SoundEngine@AK@@YA?AW4AKRESULT@@PEB_WPEBXI@Z */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  local_18 = 0;
  local_10 = 0;
  FUN_1450b5bc0(&local_18,param_1,L".bnk");
  uVar1 = FUN_144d4d1d0(param_1);
  AVar2 = FUN_144d4d330(uVar1,param_3,&local_18,param_2);
  return AVar2;
}



// FUNCTION 144d45bb0 UnloadBank body=129 status=ok
// SIG AKRESULT UnloadBank(char * param_1, void * param_2, uint param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::UnloadBank(char const * __ptr64,void const *
   __ptr64,unsigned int) */

AKRESULT __cdecl AK::SoundEngine::UnloadBank(char *param_1,void *param_2,uint param_3)

{
  undefined4 uVar1;
  AKRESULT AVar2;
  undefined8 local_18;
  undefined1 local_10;
  
                    /* 0x4d45bb0  344  ?UnloadBank@SoundEngine@AK@@YA?AW4AKRESULT@@PEBDPEBXI@Z */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  local_18 = 0;
  local_10 = 0;
  FUN_1450b5d60(&local_18,param_1,&DAT_1499d13e4);
  uVar1 = FUN_144d4d0f0(param_1);
  AVar2 = FUN_144d4d330(uVar1,param_3,&local_18,param_2);
  return AVar2;
}



// FUNCTION 144d45c40 UnloadBank body=60 status=ok
// SIG AKRESULT UnloadBank(uint param_1, void * param_2, uint param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::UnloadBank(unsigned int,void const * __ptr64,unsigned int)
    */

AKRESULT __cdecl AK::SoundEngine::UnloadBank(uint param_1,void *param_2,uint param_3)

{
  AKRESULT AVar1;
  undefined8 local_18;
  undefined1 local_10;
  
                    /* 0x4d45c40  342  ?UnloadBank@SoundEngine@AK@@YA?AW4AKRESULT@@IPEBXI@Z */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  local_18 = 0;
  local_10 = 0;
  AVar1 = FUN_144d4d330(param_1,param_3,&local_18,param_2);
  return AVar1;
}



// FUNCTION 144d45c80 UnloadBank body=310 status=ok
// SIG AKRESULT UnloadBank(wchar_t * param_1, void * param_2, _func_void_uint_void_ptr_AKRESULT_void_ptr * param_3, void * param_4, uint param_5)

/* enum AKRESULT __cdecl AK::SoundEngine::UnloadBank(wchar_t const * __ptr64,void const *
   __ptr64,void (__cdecl*)(unsigned int,void const * __ptr64,enum AKRESULT,void * __ptr64),void *
   __ptr64,unsigned int) */

AKRESULT __cdecl
AK::SoundEngine::UnloadBank
          (wchar_t *param_1,void *param_2,_func_void_uint_void_ptr_AKRESULT_void_ptr *param_3,
          void *param_4,uint param_5)

{
  undefined4 uVar1;
  AKRESULT AVar2;
  undefined8 local_b8;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined4 local_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  _func_void_uint_void_ptr_AKRESULT_void_ptr *local_88;
  void *pvStack_80;
  uint local_78;
  undefined4 uStack_74;
  void *pvStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  _func_void_uint_void_ptr_AKRESULT_void_ptr *local_38;
  void *pvStack_30;
  uint local_28;
  undefined4 uStack_24;
  void *pvStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
                    /* 0x4d45c80  347
                       ?UnloadBank@SoundEngine@AK@@YA?AW4AKRESULT@@PEB_WPEBXP6AXI1W43@PEAX@Z3I@Z */
  if (DAT_14c790ff4 == '\0') {
    AVar2 = 0x66;
  }
  else {
    uVar1 = FUN_144d4d1d0();
    local_b8 = 0;
    uStack_b0 = 0;
    FUN_1450b5bc0(&local_b8,param_1,L".bnk");
    if ((param_5 - 1 < 0x1d) || (0x1f < param_5)) {
      AVar2 = 100;
    }
    else {
      uStack_40 = CONCAT71(uStack_af,uStack_b0);
      uStack_a4 = param_5;
      local_48 = local_b8;
      local_a8 = 1;
      local_78 = -(uint)(param_2 != (void *)0x0) & 2;
      local_58 = CONCAT44(param_5,1);
      uStack_50 = CONCAT44(uStack_9c,uVar1);
      local_68 = 0;
      uStack_24 = uStack_74;
      local_18 = 0;
      uStack_14 = uStack_64;
      uStack_10 = uStack_60;
      uStack_c = uStack_5c;
      uStack_a0 = uVar1;
      local_88 = param_3;
      pvStack_80 = param_4;
      pvStack_70 = param_2;
      local_38 = param_3;
      pvStack_30 = param_4;
      local_28 = local_78;
      pvStack_20 = param_2;
      AVar2 = (**(code **)(*DAT_14c790fe0 + 0x18))(DAT_14c790fe0,&local_58);
    }
  }
  return AVar2;
}



// FUNCTION 144d45dc0 UnloadBank body=310 status=ok
// SIG AKRESULT UnloadBank(char * param_1, void * param_2, _func_void_uint_void_ptr_AKRESULT_void_ptr * param_3, void * param_4, uint param_5)

/* enum AKRESULT __cdecl AK::SoundEngine::UnloadBank(char const * __ptr64,void const * __ptr64,void
   (__cdecl*)(unsigned int,void const * __ptr64,enum AKRESULT,void * __ptr64),void *
   __ptr64,unsigned int) */

AKRESULT __cdecl
AK::SoundEngine::UnloadBank
          (char *param_1,void *param_2,_func_void_uint_void_ptr_AKRESULT_void_ptr *param_3,
          void *param_4,uint param_5)

{
  undefined4 uVar1;
  AKRESULT AVar2;
  undefined8 local_b8;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined4 local_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  _func_void_uint_void_ptr_AKRESULT_void_ptr *local_88;
  void *pvStack_80;
  uint local_78;
  undefined4 uStack_74;
  void *pvStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  _func_void_uint_void_ptr_AKRESULT_void_ptr *local_38;
  void *pvStack_30;
  uint local_28;
  undefined4 uStack_24;
  void *pvStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
                    /* 0x4d45dc0  345
                       ?UnloadBank@SoundEngine@AK@@YA?AW4AKRESULT@@PEBDPEBXP6AXI1W43@PEAX@Z3I@Z */
  if (DAT_14c790ff4 == '\0') {
    AVar2 = 0x66;
  }
  else {
    uVar1 = FUN_144d4d0f0();
    local_b8 = 0;
    uStack_b0 = 0;
    FUN_1450b5d60(&local_b8,param_1,&DAT_1499d13e4);
    if ((param_5 - 1 < 0x1d) || (0x1f < param_5)) {
      AVar2 = 100;
    }
    else {
      uStack_40 = CONCAT71(uStack_af,uStack_b0);
      uStack_a4 = param_5;
      local_48 = local_b8;
      local_a8 = 1;
      local_78 = -(uint)(param_2 != (void *)0x0) & 2;
      local_58 = CONCAT44(param_5,1);
      uStack_50 = CONCAT44(uStack_9c,uVar1);
      local_68 = 0;
      uStack_24 = uStack_74;
      local_18 = 0;
      uStack_14 = uStack_64;
      uStack_10 = uStack_60;
      uStack_c = uStack_5c;
      uStack_a0 = uVar1;
      local_88 = param_3;
      pvStack_80 = param_4;
      pvStack_70 = param_2;
      local_38 = param_3;
      pvStack_30 = param_4;
      local_28 = local_78;
      pvStack_20 = param_2;
      AVar2 = (**(code **)(*DAT_14c790fe0 + 0x18))(DAT_14c790fe0,&local_58);
    }
  }
  return AVar2;
}



// FUNCTION 144d45f00 UnloadBank body=229 status=ok
// SIG AKRESULT UnloadBank(uint param_1, void * param_2, _func_void_uint_void_ptr_AKRESULT_void_ptr * param_3, void * param_4, uint param_5)

/* enum AKRESULT __cdecl AK::SoundEngine::UnloadBank(unsigned int,void const * __ptr64,void
   (__cdecl*)(unsigned int,void const * __ptr64,enum AKRESULT,void * __ptr64),void *
   __ptr64,unsigned int) */

AKRESULT __cdecl
AK::SoundEngine::UnloadBank
          (uint param_1,void *param_2,_func_void_uint_void_ptr_AKRESULT_void_ptr *param_3,
          void *param_4,uint param_5)

{
  AKRESULT AVar1;
  uint7 uStack_af;
  undefined4 uStack_9c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong lStack_40;
  _func_void_uint_void_ptr_AKRESULT_void_ptr *local_38;
  void *pvStack_30;
  uint local_28;
  void *pvStack_20;
  undefined4 local_18;
  
                    /* 0x4d45f00  343
                       ?UnloadBank@SoundEngine@AK@@YA?AW4AKRESULT@@IPEBXP6AXI0W43@PEAX@Z2I@Z */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  if ((0x1c < param_5 - 1) && (param_5 < 0x20)) {
    lStack_40 = (ulonglong)uStack_af << 8;
    local_28 = -(uint)(param_2 != (void *)0x0) & 2;
    local_48 = 0;
    local_58 = CONCAT44(param_5,1);
    uStack_50 = CONCAT44(uStack_9c,param_1);
    local_18 = 0;
    local_38 = param_3;
    pvStack_30 = param_4;
    pvStack_20 = param_2;
    AVar1 = (**(code **)(*DAT_14c790fe0 + 0x18))(DAT_14c790fe0,&local_58);
    return AVar1;
  }
  return 100;
}



// FUNCTION 144d45ff0 PrepareBank body=318 status=ok
// SIG AKRESULT PrepareBank(PreparationType param_1, wchar_t * param_2, AkBankContent param_3, uint param_4)

/* enum AKRESULT __cdecl AK::SoundEngine::PrepareBank(enum AK::SoundEngine::PreparationType,wchar_t
   const * __ptr64,enum AK::SoundEngine::AkBankContent,unsigned int) */

AKRESULT __cdecl
AK::SoundEngine::PrepareBank
          (PreparationType param_1,wchar_t *param_2,AkBankContent param_3,uint param_4)

{
  int iVar1;
  AKRESULT AVar2;
  undefined4 uVar3;
  undefined8 local_c8;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined1 local_b8 [16];
  int local_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_88;
  undefined1 *puStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  AkBankContent AStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined1 *puStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  AkBankContent AStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
                    /* 0x4d45ff0  196
                       ?PrepareBank@SoundEngine@AK@@YA?AW4AKRESULT@@W4PreparationType@12@PEB_WW4AkBankContent@12@I@Z
                        */
  if (DAT_14c790ff4 == '\0') {
    AVar2 = 0x66;
  }
  else {
    local_c8 = 0;
    uStack_c0 = 0;
    iVar1 = FUN_1450b5bc0(&local_c8,param_2,L".bnk");
    if (iVar1 == 1) {
      AVar2 = (**(code **)(*DAT_14c790fe0 + 0x20))(DAT_14c790fe0,local_b8);
      if (AVar2 == 1) {
        uVar3 = FUN_144d4d0f0(local_c8);
        if ((param_4 - 1 < 0x1d) || (0x1f < param_4)) {
          uVar3 = 100;
        }
        else {
          uStack_40 = CONCAT71(uStack_bf,uStack_c0);
          local_88 = DAT_14c791040;
          local_48 = local_c8;
          local_a8 = ((param_1 & 0xfffffffd) != 0) + 6;
          local_58 = CONCAT44(param_4,local_a8);
          uStack_50 = CONCAT44(uStack_9c,uVar3);
          puStack_80 = local_b8;
          uStack_6c = CONCAT31(uStack_6c._1_3_,param_1 == 2);
          local_38 = DAT_14c791040;
          local_78 = 0;
          local_28 = 0;
          uStack_24 = uStack_74;
          uStack_1c = uStack_6c;
          local_18 = local_68;
          uStack_14 = uStack_64;
          uStack_10 = uStack_60;
          uStack_c = uStack_5c;
          uStack_a4 = param_4;
          uStack_a0 = uVar3;
          AStack_70 = param_3;
          puStack_30 = puStack_80;
          AStack_20 = param_3;
          uVar3 = (**(code **)(*DAT_14c790fe0 + 0x18))(DAT_14c790fe0,&local_58);
        }
        AVar2 = (**(code **)(*DAT_14c790fe0 + 0x28))(DAT_14c790fe0,local_b8,uVar3);
      }
    }
    else {
      AVar2 = 0x34;
    }
  }
  return AVar2;
}



// FUNCTION 144d46130 PrepareBank body=318 status=ok
// SIG AKRESULT PrepareBank(PreparationType param_1, char * param_2, AkBankContent param_3, uint param_4)

/* enum AKRESULT __cdecl AK::SoundEngine::PrepareBank(enum AK::SoundEngine::PreparationType,char
   const * __ptr64,enum AK::SoundEngine::AkBankContent,unsigned int) */

AKRESULT __cdecl
AK::SoundEngine::PrepareBank
          (PreparationType param_1,char *param_2,AkBankContent param_3,uint param_4)

{
  int iVar1;
  AKRESULT AVar2;
  undefined4 uVar3;
  undefined8 local_c8;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined1 local_b8 [16];
  int local_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_88;
  undefined1 *puStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  AkBankContent AStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined1 *puStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  AkBankContent AStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
                    /* 0x4d46130  194
                       ?PrepareBank@SoundEngine@AK@@YA?AW4AKRESULT@@W4PreparationType@12@PEBDW4AkBankContent@12@I@Z
                        */
  if (DAT_14c790ff4 == '\0') {
    AVar2 = 0x66;
  }
  else {
    local_c8 = 0;
    uStack_c0 = 0;
    iVar1 = FUN_1450b5d60(&local_c8,param_2,&DAT_1499d13e4);
    if (iVar1 == 1) {
      AVar2 = (**(code **)(*DAT_14c790fe0 + 0x20))(DAT_14c790fe0,local_b8);
      if (AVar2 == 1) {
        uVar3 = FUN_144d4d0f0(local_c8);
        if ((param_4 - 1 < 0x1d) || (0x1f < param_4)) {
          uVar3 = 100;
        }
        else {
          uStack_40 = CONCAT71(uStack_bf,uStack_c0);
          local_88 = DAT_14c791040;
          local_48 = local_c8;
          local_a8 = ((param_1 & 0xfffffffd) != 0) + 6;
          local_58 = CONCAT44(param_4,local_a8);
          uStack_50 = CONCAT44(uStack_9c,uVar3);
          puStack_80 = local_b8;
          uStack_6c = CONCAT31(uStack_6c._1_3_,param_1 == 2);
          local_38 = DAT_14c791040;
          local_78 = 0;
          local_28 = 0;
          uStack_24 = uStack_74;
          uStack_1c = uStack_6c;
          local_18 = local_68;
          uStack_14 = uStack_64;
          uStack_10 = uStack_60;
          uStack_c = uStack_5c;
          uStack_a4 = param_4;
          uStack_a0 = uVar3;
          AStack_70 = param_3;
          puStack_30 = puStack_80;
          AStack_20 = param_3;
          uVar3 = (**(code **)(*DAT_14c790fe0 + 0x18))(DAT_14c790fe0,&local_58);
        }
        AVar2 = (**(code **)(*DAT_14c790fe0 + 0x28))(DAT_14c790fe0,local_b8,uVar3);
      }
    }
    else {
      AVar2 = 0x34;
    }
  }
  return AVar2;
}



// FUNCTION 144d46270 PrepareBank body=281 status=ok
// SIG AKRESULT PrepareBank(PreparationType param_1, uint param_2, AkBankContent param_3, uint param_4)

/* enum AKRESULT __cdecl AK::SoundEngine::PrepareBank(enum AK::SoundEngine::PreparationType,unsigned
   int,enum AK::SoundEngine::AkBankContent,unsigned int) */

AKRESULT __cdecl
AK::SoundEngine::PrepareBank
          (PreparationType param_1,uint param_2,AkBankContent param_3,uint param_4)

{
  AKRESULT AVar1;
  undefined4 uVar2;
  uint7 uStack_bf;
  undefined1 local_b8 [16];
  int local_a8;
  uint uStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_88;
  undefined1 *puStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  AkBankContent AStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong lStack_40;
  undefined8 local_38;
  undefined1 *puStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  AkBankContent AStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
                    /* 0x4d46270  192
                       ?PrepareBank@SoundEngine@AK@@YA?AW4AKRESULT@@W4PreparationType@12@IW4AkBankContent@12@I@Z
                        */
  if (DAT_14c790ff4 == '\0') {
    AVar1 = 0x66;
  }
  else {
    AVar1 = (**(code **)(*DAT_14c790fe0 + 0x20))();
    if (AVar1 == 1) {
      if ((param_4 - 1 < 0x1d) || (0x1f < param_4)) {
        uVar2 = 100;
      }
      else {
        lStack_40 = (ulonglong)uStack_bf << 8;
        local_88 = DAT_14c791040;
        local_78 = 0;
        local_48 = 0;
        local_a8 = ((param_1 & 0xfffffffd) != 0) + 6;
        puStack_80 = local_b8;
        local_58 = CONCAT44(param_4,local_a8);
        uStack_50 = CONCAT44(uStack_9c,param_2);
        uStack_6c = CONCAT31(uStack_6c._1_3_,param_1 == 2);
        local_38 = DAT_14c791040;
        local_18 = local_68;
        uStack_14 = uStack_64;
        uStack_10 = uStack_60;
        uStack_c = uStack_5c;
        local_28 = 0;
        uStack_24 = uStack_74;
        uStack_1c = uStack_6c;
        uStack_a4 = param_4;
        uStack_a0 = param_2;
        AStack_70 = param_3;
        puStack_30 = puStack_80;
        AStack_20 = param_3;
        uVar2 = (**(code **)(*DAT_14c790fe0 + 0x18))(DAT_14c790fe0,&local_58);
      }
      AVar1 = (**(code **)(*DAT_14c790fe0 + 0x28))(DAT_14c790fe0,local_b8,uVar2);
    }
  }
  return AVar1;
}



// FUNCTION 144d46390 PrepareBank body=190 status=ok
// SIG AKRESULT PrepareBank(PreparationType param_1, wchar_t * param_2, _func_void_uint_void_ptr_AKRESULT_void_ptr * param_3, void * param_4, AkBankContent param_5, uint param_6)

/* enum AKRESULT __cdecl AK::SoundEngine::PrepareBank(enum AK::SoundEngine::PreparationType,wchar_t
   const * __ptr64,void (__cdecl*)(unsigned int,void const * __ptr64,enum AKRESULT,void *
   __ptr64),void * __ptr64,enum AK::SoundEngine::AkBankContent,unsigned int) */

AKRESULT __cdecl
AK::SoundEngine::PrepareBank
          (PreparationType param_1,wchar_t *param_2,
          _func_void_uint_void_ptr_AKRESULT_void_ptr *param_3,void *param_4,AkBankContent param_5,
          uint param_6)

{
  int iVar1;
  undefined4 uVar2;
  AKRESULT AVar3;
  undefined8 local_28;
  uint uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  uint uStack_10;
  undefined4 uStack_c;
  
                    /* 0x4d46390  195
                       ?PrepareBank@SoundEngine@AK@@YA?AW4AKRESULT@@W4PreparationType@12@PEB_WP6AXIPEBXW43@PEAX@Z4W4AkBankContent@12@I@Z
                        */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  local_28 = 0;
  uStack_20 = uStack_20 & 0xffffff00;
  iVar1 = FUN_1450b5bc0(&local_28,param_2,L".bnk");
  if (iVar1 != 1) {
    return 0x34;
  }
  uVar2 = FUN_144d4d0f0(local_28);
  local_18 = (undefined4)local_28;
  uStack_14 = local_28._4_4_;
  uStack_10 = uStack_20;
  uStack_c = uStack_1c;
  AVar3 = FUN_144d4d450(param_1,uVar2,param_6,&local_18,param_3,param_4,param_5);
  return AVar3;
}



// FUNCTION 144d46450 PrepareBank body=190 status=ok
// SIG AKRESULT PrepareBank(PreparationType param_1, char * param_2, _func_void_uint_void_ptr_AKRESULT_void_ptr * param_3, void * param_4, AkBankContent param_5, uint param_6)

/* enum AKRESULT __cdecl AK::SoundEngine::PrepareBank(enum AK::SoundEngine::PreparationType,char
   const * __ptr64,void (__cdecl*)(unsigned int,void const * __ptr64,enum AKRESULT,void *
   __ptr64),void * __ptr64,enum AK::SoundEngine::AkBankContent,unsigned int) */

AKRESULT __cdecl
AK::SoundEngine::PrepareBank
          (PreparationType param_1,char *param_2,_func_void_uint_void_ptr_AKRESULT_void_ptr *param_3
          ,void *param_4,AkBankContent param_5,uint param_6)

{
  int iVar1;
  undefined4 uVar2;
  AKRESULT AVar3;
  undefined8 local_28;
  uint uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  uint uStack_10;
  undefined4 uStack_c;
  
                    /* 0x4d46450  193
                       ?PrepareBank@SoundEngine@AK@@YA?AW4AKRESULT@@W4PreparationType@12@PEBDP6AXIPEBXW43@PEAX@Z4W4AkBankContent@12@I@Z
                        */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  local_28 = 0;
  uStack_20 = uStack_20 & 0xffffff00;
  iVar1 = FUN_1450b5d60(&local_28,param_2,&DAT_1499d13e4);
  if (iVar1 != 1) {
    return 0x34;
  }
  uVar2 = FUN_144d4d0f0(local_28);
  local_18 = (undefined4)local_28;
  uStack_14 = local_28._4_4_;
  uStack_10 = uStack_20;
  uStack_c = uStack_1c;
  AVar3 = FUN_144d4d450(param_1,uVar2,param_6,&local_18,param_3,param_4,param_5);
  return AVar3;
}



// FUNCTION 144d46510 ClearPreparedEvents body=222 status=ok
// SIG AKRESULT ClearPreparedEvents(void)

/* enum AKRESULT __cdecl AK::SoundEngine::ClearPreparedEvents(void) */

AKRESULT __cdecl AK::SoundEngine::ClearPreparedEvents(void)

{
  AKRESULT AVar1;
  undefined4 uVar2;
  undefined1 local_b8 [16];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  undefined1 uStack_90;
  uint7 uStack_8f;
  undefined8 local_88;
  undefined1 *puStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  longlong lStack_50;
  undefined8 local_48;
  longlong lStack_40;
  undefined8 local_38;
  undefined1 *puStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
                    /* 0x4d46510  43  ?ClearPreparedEvents@SoundEngine@AK@@YA?AW4AKRESULT@@XZ */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  AVar1 = (**(code **)(*DAT_14c790fe0 + 0x20))(DAT_14c790fe0,local_b8);
  if (AVar1 == 1) {
    local_a8 = 5;
    uStack_a4 = 0;
    uStack_a0 = 0;
    local_58 = 5;
    lStack_50 = (ulonglong)uStack_9c << 0x20;
    local_98 = 0;
    uStack_90 = 0;
    lStack_40 = (ulonglong)uStack_8f << 8;
    local_78 = 0;
    local_88 = DAT_14c791040;
    puStack_80 = local_b8;
    local_38 = DAT_14c791040;
    local_48 = 0;
    local_18 = local_68;
    uStack_14 = uStack_64;
    uStack_10 = uStack_60;
    uStack_c = uStack_5c;
    local_28 = 0;
    uStack_24 = uStack_74;
    uStack_20 = uStack_70;
    uStack_1c = uStack_6c;
    puStack_30 = puStack_80;
    uVar2 = (**(code **)(*DAT_14c790fe0 + 0x18))(DAT_14c790fe0,&local_58);
    AVar1 = (**(code **)(*DAT_14c790fe0 + 0x28))(DAT_14c790fe0,local_b8,uVar2);
  }
  return AVar1;
}



// FUNCTION 144d465f0 PrepareEvent body=144 status=ok
// SIG AKRESULT PrepareEvent(PreparationType param_1, wchar_t * * param_2, uint param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::PrepareEvent(enum AK::SoundEngine::PreparationType,wchar_t
   const * __ptr64 * __ptr64,unsigned int) */

AKRESULT __cdecl
AK::SoundEngine::PrepareEvent(PreparationType param_1,wchar_t **param_2,uint param_3)

{
  AKRESULT AVar1;
  undefined4 uVar2;
  undefined1 local_18 [16];
  
                    /* 0x4d465f0  201
                       ?PrepareEvent@SoundEngine@AK@@YA?AW4AKRESULT@@W4PreparationType@12@PEAPEB_WI@Z
                        */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  AVar1 = (**(code **)(*DAT_14c790fe0 + 0x20))(DAT_14c790fe0,local_18);
  if (AVar1 == 1) {
    uVar2 = FUN_144d4d520(param_1,param_2,param_3,DAT_14c791040,local_18);
    AVar1 = (**(code **)(*DAT_14c790fe0 + 0x28))(DAT_14c790fe0,local_18,uVar2);
  }
  return AVar1;
}



// FUNCTION 144d46680 PrepareEvent body=144 status=ok
// SIG AKRESULT PrepareEvent(PreparationType param_1, char * * param_2, uint param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::PrepareEvent(enum AK::SoundEngine::PreparationType,char
   const * __ptr64 * __ptr64,unsigned int) */

AKRESULT __cdecl AK::SoundEngine::PrepareEvent(PreparationType param_1,char **param_2,uint param_3)

{
  AKRESULT AVar1;
  undefined4 uVar2;
  undefined1 local_18 [16];
  
                    /* 0x4d46680  199
                       ?PrepareEvent@SoundEngine@AK@@YA?AW4AKRESULT@@W4PreparationType@12@PEAPEBDI@Z
                        */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  AVar1 = (**(code **)(*DAT_14c790fe0 + 0x20))(DAT_14c790fe0,local_18);
  if (AVar1 == 1) {
    uVar2 = FUN_144d4d6c0(param_1,param_2,param_3,DAT_14c791040,local_18);
    AVar1 = (**(code **)(*DAT_14c790fe0 + 0x28))(DAT_14c790fe0,local_18,uVar2);
  }
  return AVar1;
}



// FUNCTION 144d46710 PrepareEvent body=144 status=ok
// SIG AKRESULT PrepareEvent(PreparationType param_1, uint * param_2, uint param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::PrepareEvent(enum
   AK::SoundEngine::PreparationType,unsigned int * __ptr64,unsigned int) */

AKRESULT __cdecl AK::SoundEngine::PrepareEvent(PreparationType param_1,uint *param_2,uint param_3)

{
  AKRESULT AVar1;
  undefined4 uVar2;
  undefined1 local_18 [16];
  
                    /* 0x4d46710  197
                       ?PrepareEvent@SoundEngine@AK@@YA?AW4AKRESULT@@W4PreparationType@12@PEAII@Z */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  AVar1 = (**(code **)(*DAT_14c790fe0 + 0x20))(DAT_14c790fe0,local_18);
  if (AVar1 == 1) {
    uVar2 = FUN_144d4ce80(param_1,DAT_14c791040,local_18,param_2,param_3,1);
    AVar1 = (**(code **)(*DAT_14c790fe0 + 0x28))(DAT_14c790fe0,local_18,uVar2);
  }
  return AVar1;
}



// FUNCTION 144d467a0 PrepareEvent body=5 status=ok
// SIG AKRESULT PrepareEvent(PreparationType param_1, wchar_t * * param_2, uint param_3, _func_void_uint_void_ptr_AKRESULT_void_ptr * param_4, void * param_5)

/* enum AKRESULT __cdecl AK::SoundEngine::PrepareEvent(enum AK::SoundEngine::PreparationType,wchar_t
   const * __ptr64 * __ptr64,unsigned int,void (__cdecl*)(unsigned int,void const * __ptr64,enum
   AKRESULT,void * __ptr64),void * __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::PrepareEvent
          (PreparationType param_1,wchar_t **param_2,uint param_3,
          _func_void_uint_void_ptr_AKRESULT_void_ptr *param_4,void *param_5)

{
  uint uVar1;
  AKRESULT AVar2;
  uint *puVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint uStack_ac;
  uint7 uStack_9f;
  ulonglong uStack_68;
  longlong lStack_60;
  undefined8 uStack_58;
  longlong lStack_50;
  _func_void_uint_void_ptr_AKRESULT_void_ptr *p_Stack_48;
  void *pvStack_40;
  undefined4 uStack_38;
  undefined4 uStack_30;
  uint uStack_28;
  
                    /* 0x4d467a0  202
                       ?PrepareEvent@SoundEngine@AK@@YA?AW4AKRESULT@@W4PreparationType@12@PEAPEB_WIP6AXIPEBXW43@PEAX@Z4@Z
                        */
  uVar4 = (ulonglong)param_3;
  if (DAT_14c790ff4 == '\0') {
    AVar2 = 0x66;
  }
  else if (param_3 == 0) {
    AVar2 = 0x1f;
  }
  else if (param_3 == 1) {
    uStack_28 = GetIDFromString(*param_2);
    lStack_50 = (ulonglong)uStack_9f << 8;
    uStack_68 = (ulonglong)((param_1 != 0) + 2);
    lStack_60 = (ulonglong)uStack_ac << 0x20;
    uStack_58 = 0;
    pvStack_40 = param_5;
    uStack_38 = 0;
    uStack_30 = 1;
    p_Stack_48 = param_4;
    AVar2 = (**(code **)(*DAT_14c790fe0 + 0x18))(DAT_14c790fe0,&uStack_68);
  }
  else {
    puVar3 = MemoryMgr::Malloc(0,uVar4 * 4);
    if (puVar3 == (uint *)0x0) {
      AVar2 = 0x34;
    }
    else {
      puVar5 = puVar3;
      if (param_3 != 0) {
        do {
          uVar1 = GetIDFromString(*param_2);
          *puVar5 = uVar1;
          param_2 = param_2 + 1;
          uVar4 = uVar4 - 1;
          puVar5 = puVar5 + 1;
        } while (uVar4 != 0);
      }
      AVar2 = FUN_144d4ce80(param_1,param_4,param_5,puVar3,param_3,0);
    }
  }
  return AVar2;
}



// FUNCTION 144d467b0 PrepareEvent body=5 status=ok
// SIG AKRESULT PrepareEvent(PreparationType param_1, char * * param_2, uint param_3, _func_void_uint_void_ptr_AKRESULT_void_ptr * param_4, void * param_5)

/* enum AKRESULT __cdecl AK::SoundEngine::PrepareEvent(enum AK::SoundEngine::PreparationType,char
   const * __ptr64 * __ptr64,unsigned int,void (__cdecl*)(unsigned int,void const * __ptr64,enum
   AKRESULT,void * __ptr64),void * __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::PrepareEvent
          (PreparationType param_1,char **param_2,uint param_3,
          _func_void_uint_void_ptr_AKRESULT_void_ptr *param_4,void *param_5)

{
  byte bVar1;
  byte *pbVar2;
  AKRESULT AVar3;
  uint *puVar4;
  uint uVar5;
  byte bVar6;
  ulonglong uVar7;
  uint *puVar8;
  uint uVar9;
  uint uStack_ac;
  uint7 uStack_9f;
  ulonglong uStack_68;
  longlong lStack_60;
  undefined8 uStack_58;
  longlong lStack_50;
  _func_void_uint_void_ptr_AKRESULT_void_ptr *p_Stack_48;
  void *pvStack_40;
  undefined4 uStack_38;
  undefined4 uStack_30;
  uint uStack_28;
  
                    /* 0x4d467b0  200
                       ?PrepareEvent@SoundEngine@AK@@YA?AW4AKRESULT@@W4PreparationType@12@PEAPEBDIP6AXIPEBXW43@PEAX@Z4@Z
                        */
  uVar7 = (ulonglong)param_3;
  if (DAT_14c790ff4 == '\0') {
    AVar3 = 0x66;
  }
  else if (param_3 == 0) {
    AVar3 = 0x1f;
  }
  else if (param_3 == 1) {
    pbVar2 = (byte *)*param_2;
    if (pbVar2 == (byte *)0x0) {
      uStack_28 = 0;
    }
    else {
      bVar1 = *pbVar2;
      uStack_28 = 0x811c9dc5;
      while (bVar1 != 0) {
        uVar9 = (uint)bVar1;
        bVar6 = bVar1 + 0xbf;
        pbVar2 = pbVar2 + 1;
        bVar1 = *pbVar2;
        uVar5 = uVar9 + 0x20 & 0xff;
        if (0x19 < bVar6) {
          uVar5 = uVar9;
        }
        uStack_28 = uStack_28 * 0x1000193 ^ uVar5;
      }
    }
    lStack_50 = (ulonglong)uStack_9f << 8;
    uStack_68 = (ulonglong)((param_1 != 0) + 2);
    lStack_60 = (ulonglong)uStack_ac << 0x20;
    uStack_58 = 0;
    pvStack_40 = param_5;
    uStack_38 = 0;
    uStack_30 = 1;
    p_Stack_48 = param_4;
    AVar3 = (**(code **)(*DAT_14c790fe0 + 0x18))(DAT_14c790fe0,&uStack_68);
  }
  else {
    puVar4 = MemoryMgr::Malloc(0,uVar7 * 4);
    if (puVar4 == (uint *)0x0) {
      AVar3 = 0x34;
    }
    else {
      puVar8 = puVar4;
      if (param_3 != 0) {
        do {
          pbVar2 = (byte *)*param_2;
          if (pbVar2 == (byte *)0x0) {
            uVar9 = 0;
          }
          else {
            uVar9 = 0x811c9dc5;
            bVar1 = *pbVar2;
            while (bVar1 != 0) {
              pbVar2 = pbVar2 + 1;
              bVar6 = bVar1 + 0x20;
              if (0x19 < (byte)(bVar1 + 0xbf)) {
                bVar6 = bVar1;
              }
              uVar9 = uVar9 * 0x1000193 ^ (uint)bVar6;
              bVar1 = *pbVar2;
            }
          }
          *puVar8 = uVar9;
          param_2 = param_2 + 1;
          uVar7 = uVar7 - 1;
          puVar8 = puVar8 + 1;
        } while (uVar7 != 0);
      }
      AVar3 = FUN_144d4ce80(param_1,param_4,param_5,puVar4,param_3,0);
    }
  }
  return AVar3;
}



// FUNCTION 144d467c0 SetMedia body=33 status=ok
// SIG AKRESULT SetMedia(AkSourceSettings * param_1, uint param_2)

/* enum AKRESULT __cdecl AK::SoundEngine::SetMedia(struct AkSourceSettings * __ptr64,unsigned int)
    */

AKRESULT __cdecl AK::SoundEngine::SetMedia(AkSourceSettings *param_1,uint param_2)

{
  AKRESULT AVar1;
  
                    /* 0x4d467c0  291
                       ?SetMedia@SoundEngine@AK@@YA?AW4AKRESULT@@PEAUAkSourceSettings@@I@Z */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  AVar1 = FUN_1450b8220(DAT_14c790fe0,param_1,param_2);
  return AVar1;
}



// FUNCTION 144d467f0 UnsetMedia body=33 status=ok
// SIG AKRESULT UnsetMedia(AkSourceSettings * param_1, uint param_2)

/* enum AKRESULT __cdecl AK::SoundEngine::UnsetMedia(struct AkSourceSettings * __ptr64,unsigned int)
    */

AKRESULT __cdecl AK::SoundEngine::UnsetMedia(AkSourceSettings *param_1,uint param_2)

{
  AKRESULT AVar1;
  
                    /* 0x4d467f0  359
                       ?UnsetMedia@SoundEngine@AK@@YA?AW4AKRESULT@@PEAUAkSourceSettings@@I@Z */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  AVar1 = FUN_1450b8410(DAT_14c790fe0,param_1,param_2);
  return AVar1;
}



// FUNCTION 144d46820 TryUnsetMedia body=36 status=ok
// SIG AKRESULT TryUnsetMedia(AkSourceSettings * param_1, uint param_2, AKRESULT * param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::TryUnsetMedia(struct AkSourceSettings * __ptr64,unsigned
   int,enum AKRESULT * __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::TryUnsetMedia(AkSourceSettings *param_1,uint param_2,AKRESULT *param_3)

{
  AKRESULT AVar1;
  
                    /* 0x4d46820  341
                       ?TryUnsetMedia@SoundEngine@AK@@YA?AW4AKRESULT@@PEAUAkSourceSettings@@IPEAW43@@Z
                        */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  AVar1 = FUN_1450b8580(DAT_14c790fe0,param_1,param_2,param_3);
  return AVar1;
}



// FUNCTION 144d46850 PrepareGameSyncs body=486 status=ok
// SIG AKRESULT PrepareGameSyncs(PreparationType param_1, AkGroupType param_2, wchar_t * param_3, wchar_t * * param_4, uint param_5)

/* enum AKRESULT __cdecl AK::SoundEngine::PrepareGameSyncs(enum
   AK::SoundEngine::PreparationType,enum AkGroupType,wchar_t const * __ptr64,wchar_t const * __ptr64
   * __ptr64,unsigned int) */

AKRESULT __cdecl
AK::SoundEngine::PrepareGameSyncs
          (PreparationType param_1,AkGroupType param_2,wchar_t *param_3,wchar_t **param_4,
          uint param_5)

{
  uint uVar1;
  AKRESULT AVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  ulonglong uVar6;
  uint *puVar7;
  uint local_e8 [4];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  uint uStack_cc;
  undefined8 local_c8;
  undefined1 uStack_c0;
  uint7 uStack_bf;
  undefined8 local_b8;
  undefined1 *puStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  AkGroupType AStack_a0;
  uint uStack_9c;
  undefined4 local_98;
  uint uStack_94;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  longlong lStack_70;
  undefined8 local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined1 *puStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  AkGroupType AStack_40;
  uint uStack_3c;
  undefined4 local_38;
  uint uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
                    /* 0x4d46850  207
                       ?PrepareGameSyncs@SoundEngine@AK@@YA?AW4AKRESULT@@W4PreparationType@12@W4AkGroupType@@PEB_WPEAPEB_WI@Z
                        */
  if (DAT_14c790ff4 != '\0') {
    if ((param_4 == (wchar_t **)0x0) || (uVar6 = (ulonglong)param_5, param_5 == 0)) {
      AVar2 = 0x1f;
    }
    else {
      uVar1 = GetIDFromString(param_3);
      if (param_5 == 1) {
        local_e8[0] = GetIDFromString(*param_4);
        AVar2 = PrepareGameSyncs(param_1,param_2,uVar1,local_e8,1);
      }
      else {
        puVar5 = MemoryMgr::Malloc(0,uVar6 * 4);
        if (puVar5 == (uint *)0x0) {
          AVar2 = 0x34;
        }
        else {
          puVar7 = puVar5;
          if (param_5 != 0) {
            do {
              uVar3 = GetIDFromString(*param_4);
              *puVar7 = uVar3;
              param_4 = param_4 + 1;
              uVar6 = uVar6 - 1;
              puVar7 = puVar7 + 1;
            } while (uVar6 != 0);
          }
          AVar2 = (**(code **)(*DAT_14c790fe0 + 0x20))(DAT_14c790fe0,local_88);
          if (AVar2 == 1) {
            local_d8 = 4;
            uStack_d4 = 0;
            uStack_d0 = 0;
            local_78 = 4;
            lStack_70 = (ulonglong)uStack_cc << 0x20;
            local_c8 = 0;
            local_98 = CONCAT31(local_98._1_3_,param_1 == 0);
            uStack_c0 = 0;
            lStack_60 = (ulonglong)uStack_bf << 8;
            local_a8 = 0;
            local_b8 = DAT_14c791040;
            puStack_b0 = local_88;
            local_58 = DAT_14c791040;
            local_68 = 0;
            uStack_94 = param_5;
            uStack_90._0_4_ = SUB84(puVar5,0);
            uStack_90._4_4_ = (undefined4)((ulonglong)puVar5 >> 0x20);
            local_38 = local_98;
            uStack_34 = param_5;
            uStack_30 = (undefined4)uStack_90;
            uStack_2c = uStack_90._4_4_;
            local_48 = 0;
            uStack_44 = uStack_a4;
            AStack_a0 = param_2;
            uStack_9c = uVar1;
            uStack_90 = puVar5;
            puStack_50 = puStack_b0;
            AStack_40 = param_2;
            uStack_3c = uVar1;
            iVar4 = (**(code **)(*DAT_14c790fe0 + 0x18))(DAT_14c790fe0,&local_78);
            if (iVar4 != 1) {
              MemoryMgr::Free(0,puVar5);
            }
            AVar2 = (**(code **)(*DAT_14c790fe0 + 0x28))(DAT_14c790fe0,local_88,iVar4);
          }
        }
      }
    }
    return AVar2;
  }
  return 0x66;
}



// FUNCTION 144d46a40 PrepareGameSyncs body=715 status=ok
// SIG AKRESULT PrepareGameSyncs(PreparationType param_1, AkGroupType param_2, char * param_3, char * * param_4, uint param_5)

/* enum AKRESULT __cdecl AK::SoundEngine::PrepareGameSyncs(enum
   AK::SoundEngine::PreparationType,enum AkGroupType,char const * __ptr64,char const * __ptr64 *
   __ptr64,unsigned int) */

AKRESULT __cdecl
AK::SoundEngine::PrepareGameSyncs
          (PreparationType param_1,AkGroupType param_2,char *param_3,char **param_4,uint param_5)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  AKRESULT AVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  ulonglong uVar11;
  uint local_f8 [4];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  uint uStack_dc;
  undefined8 local_d8;
  undefined1 uStack_d0;
  uint7 uStack_cf;
  undefined8 local_c8;
  undefined1 *puStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  AkGroupType AStack_b0;
  uint uStack_ac;
  undefined4 local_a8;
  uint uStack_a4;
  undefined8 uStack_a0;
  undefined1 local_98 [16];
  undefined8 local_88;
  longlong lStack_80;
  undefined8 local_78;
  longlong lStack_70;
  undefined8 local_68;
  undefined1 *puStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  AkGroupType AStack_50;
  uint uStack_4c;
  undefined4 local_48;
  uint uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
                    /* 0x4d46a40  205
                       ?PrepareGameSyncs@SoundEngine@AK@@YA?AW4AKRESULT@@W4PreparationType@12@W4AkGroupType@@PEBDPEAPEBDI@Z
                        */
  if (DAT_14c790ff4 != '\0') {
    if ((param_4 == (char **)0x0) || (uVar11 = (ulonglong)param_5, param_5 == 0)) {
      AVar4 = 0x1f;
    }
    else {
      uVar8 = 0;
      uVar7 = 0;
      if (param_3 != (char *)0x0) {
        uVar8 = 0x811c9dc5;
        bVar3 = *param_3;
        while (bVar3 != 0) {
          param_3 = param_3 + 1;
          bVar2 = bVar3 + 0x20;
          if (0x19 < (byte)(bVar3 + 0xbf)) {
            bVar2 = bVar3;
          }
          uVar8 = uVar8 * 0x1000193 ^ (uint)bVar2;
          bVar3 = *param_3;
        }
      }
      if (param_5 == 1) {
        pbVar1 = (byte *)*param_4;
        if (pbVar1 != (byte *)0x0) {
          bVar3 = *pbVar1;
          uVar7 = 0x811c9dc5;
          while (bVar3 != 0) {
            pbVar1 = pbVar1 + 1;
            bVar2 = bVar3 + 0x20;
            if (0x19 < (byte)(bVar3 + 0xbf)) {
              bVar2 = bVar3;
            }
            uVar7 = uVar7 * 0x1000193 ^ (uint)bVar2;
            bVar3 = *pbVar1;
          }
        }
        local_f8[0] = uVar7;
        AVar4 = PrepareGameSyncs(param_1,param_2,uVar8,local_f8,1);
      }
      else {
        puVar6 = MemoryMgr::Malloc(0,uVar11 * 4);
        if (puVar6 == (uint *)0x0) {
          AVar4 = 0x34;
        }
        else {
          puVar10 = puVar6;
          if (param_5 != 0) {
            do {
              pbVar1 = (byte *)*param_4;
              uVar9 = uVar7;
              if (pbVar1 != (byte *)0x0) {
                uVar9 = 0x811c9dc5;
                bVar3 = *pbVar1;
                while (bVar3 != 0) {
                  pbVar1 = pbVar1 + 1;
                  bVar2 = bVar3 + 0x20;
                  if (0x19 < (byte)(bVar3 + 0xbf)) {
                    bVar2 = bVar3;
                  }
                  uVar9 = uVar9 * 0x1000193 ^ (uint)bVar2;
                  bVar3 = *pbVar1;
                }
              }
              *puVar10 = uVar9;
              param_4 = param_4 + 1;
              uVar11 = uVar11 - 1;
              puVar10 = puVar10 + 1;
            } while (uVar11 != 0);
          }
          AVar4 = (**(code **)(*DAT_14c790fe0 + 0x20))(DAT_14c790fe0,local_98);
          if (AVar4 == 1) {
            local_c8 = DAT_14c791040;
            puStack_c0 = local_98;
            local_a8 = CONCAT31(local_a8._1_3_,param_1 == 0);
            uStack_e4 = 0;
            uStack_e0 = 0;
            local_e8 = 4;
            local_88 = 4;
            lStack_80 = (ulonglong)uStack_dc << 0x20;
            local_68 = DAT_14c791040;
            local_d8 = 0;
            uStack_d0 = 0;
            lStack_70 = (ulonglong)uStack_cf << 8;
            local_78 = 0;
            local_b8 = 0;
            uStack_a4 = param_5;
            uStack_a0._0_4_ = SUB84(puVar6,0);
            uStack_a0._4_4_ = (undefined4)((ulonglong)puVar6 >> 0x20);
            local_58 = 0;
            uStack_54 = uStack_b4;
            local_48 = local_a8;
            uStack_44 = param_5;
            uStack_40 = (undefined4)uStack_a0;
            uStack_3c = uStack_a0._4_4_;
            AStack_b0 = param_2;
            uStack_ac = uVar8;
            uStack_a0 = puVar6;
            puStack_60 = puStack_c0;
            AStack_50 = param_2;
            uStack_4c = uVar8;
            iVar5 = (**(code **)(*DAT_14c790fe0 + 0x18))(DAT_14c790fe0,&local_88);
            if (iVar5 != 1) {
              MemoryMgr::Free(0,puVar6);
            }
            AVar4 = (**(code **)(*DAT_14c790fe0 + 0x28))(DAT_14c790fe0,local_98,iVar5);
          }
        }
      }
    }
    return AVar4;
  }
  return 0x66;
}



// FUNCTION 144d46d10 PrepareGameSyncs body=162 status=ok
// SIG AKRESULT PrepareGameSyncs(PreparationType param_1, AkGroupType param_2, uint param_3, uint * param_4, uint param_5)

/* enum AKRESULT __cdecl AK::SoundEngine::PrepareGameSyncs(enum
   AK::SoundEngine::PreparationType,enum AkGroupType,unsigned int,unsigned int * __ptr64,unsigned
   int) */

AKRESULT __cdecl
AK::SoundEngine::PrepareGameSyncs
          (PreparationType param_1,AkGroupType param_2,uint param_3,uint *param_4,uint param_5)

{
  AKRESULT AVar1;
  undefined4 uVar2;
  undefined1 local_18 [16];
  
                    /* 0x4d46d10  203
                       ?PrepareGameSyncs@SoundEngine@AK@@YA?AW4AKRESULT@@W4PreparationType@12@W4AkGroupType@@IPEAII@Z
                        */
  if (DAT_14c790ff4 == '\0') {
    AVar1 = 0x66;
  }
  else {
    AVar1 = (**(code **)(*DAT_14c790fe0 + 0x20))(DAT_14c790fe0,local_18);
    if (AVar1 == 1) {
      uVar2 = FUN_144d4cfb0(DAT_14c791040,local_18,param_1 == 0,param_2,param_3,param_4,param_5,1);
      AVar1 = (**(code **)(*DAT_14c790fe0 + 0x28))(DAT_14c790fe0,local_18,uVar2);
    }
  }
  return AVar1;
}



// FUNCTION 144d46dc0 PrepareGameSyncs body=433 status=ok
// SIG AKRESULT PrepareGameSyncs(PreparationType param_1, AkGroupType param_2, wchar_t * param_3, wchar_t * * param_4, uint param_5, _func_void_uint_void_ptr_AKRESULT_void_ptr * param_6, void * param_7)

/* enum AKRESULT __cdecl AK::SoundEngine::PrepareGameSyncs(enum
   AK::SoundEngine::PreparationType,enum AkGroupType,wchar_t const * __ptr64,wchar_t const * __ptr64
   * __ptr64,unsigned int,void (__cdecl*)(unsigned int,void const * __ptr64,enum AKRESULT,void *
   __ptr64),void * __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::PrepareGameSyncs
          (PreparationType param_1,AkGroupType param_2,wchar_t *param_3,wchar_t **param_4,
          uint param_5,_func_void_uint_void_ptr_AKRESULT_void_ptr *param_6,void *param_7)

{
  uint uVar1;
  AKRESULT AVar2;
  uint uVar3;
  uint *puVar4;
  ulonglong uVar5;
  uint *puVar6;
  uint uStack_bc;
  uint7 uStack_af;
  undefined4 local_88;
  undefined8 local_78;
  longlong lStack_70;
  undefined8 local_68;
  longlong lStack_60;
  _func_void_uint_void_ptr_AKRESULT_void_ptr *local_58;
  void *pvStack_50;
  undefined4 local_48;
  AkGroupType AStack_40;
  uint uStack_3c;
  undefined4 local_38;
  uint uStack_34;
  uint uStack_30;
  
                    /* 0x4d46dc0  208
                       ?PrepareGameSyncs@SoundEngine@AK@@YA?AW4AKRESULT@@W4PreparationType@12@W4AkGroupType@@PEB_WPEAPEB_WIP6AXIPEBXW43@PEAX@Z6@Z
                        */
  if (DAT_14c790ff4 != '\0') {
    if ((param_4 == (wchar_t **)0x0) || (uVar5 = (ulonglong)param_5, param_5 == 0)) {
      AVar2 = 0x1f;
    }
    else {
      uVar1 = GetIDFromString(param_3);
      if (param_5 == 1) {
        local_88 = CONCAT31(local_88._1_3_,param_1 == 0);
        uStack_30 = GetIDFromString(*param_4);
        local_78 = 4;
        lStack_70 = (ulonglong)uStack_bc << 0x20;
        lStack_60 = (ulonglong)uStack_af << 8;
        local_68 = 0;
        local_58 = param_6;
        pvStack_50 = param_7;
        local_48 = 0;
        local_38 = local_88;
        uStack_34 = param_5;
        AStack_40 = param_2;
        uStack_3c = uVar1;
        AVar2 = (**(code **)(*DAT_14c790fe0 + 0x18))(DAT_14c790fe0,&local_78);
      }
      else {
        puVar4 = MemoryMgr::Malloc(0,uVar5 * 4);
        if (puVar4 == (uint *)0x0) {
          AVar2 = 0x34;
        }
        else {
          puVar6 = puVar4;
          if (param_5 != 0) {
            do {
              uVar3 = GetIDFromString(*param_4);
              *puVar6 = uVar3;
              param_4 = param_4 + 1;
              uVar5 = uVar5 - 1;
              puVar6 = puVar6 + 1;
            } while (uVar5 != 0);
          }
          AVar2 = FUN_144d4cfb0(param_6,param_7,param_1 == 0,param_2,uVar1,puVar4,param_5,0);
        }
      }
    }
    return AVar2;
  }
  return 0x66;
}



// FUNCTION 144d46f80 PrepareGameSyncs body=653 status=ok
// SIG AKRESULT PrepareGameSyncs(PreparationType param_1, AkGroupType param_2, char * param_3, char * * param_4, uint param_5, _func_void_uint_void_ptr_AKRESULT_void_ptr * param_6, void * param_7)

/* enum AKRESULT __cdecl AK::SoundEngine::PrepareGameSyncs(enum
   AK::SoundEngine::PreparationType,enum AkGroupType,char const * __ptr64,char const * __ptr64 *
   __ptr64,unsigned int,void (__cdecl*)(unsigned int,void const * __ptr64,enum AKRESULT,void *
   __ptr64),void * __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::PrepareGameSyncs
          (PreparationType param_1,AkGroupType param_2,char *param_3,char **param_4,uint param_5,
          _func_void_uint_void_ptr_AKRESULT_void_ptr *param_6,void *param_7)

{
  byte bVar1;
  byte *pbVar2;
  AKRESULT AVar3;
  uint *puVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  ulonglong uVar10;
  uint uStack_bc;
  uint7 uStack_af;
  undefined4 local_88;
  undefined8 local_78;
  longlong lStack_70;
  undefined8 local_68;
  longlong lStack_60;
  _func_void_uint_void_ptr_AKRESULT_void_ptr *local_58;
  void *pvStack_50;
  undefined4 local_48;
  AkGroupType AStack_40;
  uint uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  uint uStack_30;
  
                    /* 0x4d46f80  206
                       ?PrepareGameSyncs@SoundEngine@AK@@YA?AW4AKRESULT@@W4PreparationType@12@W4AkGroupType@@PEBDPEAPEBDIP6AXIPEBXW43@PEAX@Z6@Z
                        */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  if ((param_4 == (char **)0x0) || (uVar10 = (ulonglong)param_5, param_5 == 0)) {
    AVar3 = 0x1f;
  }
  else {
    uStack_30 = 0;
    uVar7 = uStack_30;
    if (param_3 != (char *)0x0) {
      bVar1 = *param_3;
      uVar7 = 0x811c9dc5;
      while (bVar1 != 0) {
        uVar8 = (uint)bVar1;
        bVar6 = bVar1 + 0xbf;
        param_3 = param_3 + 1;
        bVar1 = *param_3;
        uVar5 = uVar8 + 0x20 & 0xff;
        if (0x19 < bVar6) {
          uVar5 = uVar8;
        }
        uVar7 = uVar7 * 0x1000193 ^ uVar5;
      }
    }
    if (param_5 == 1) {
      pbVar2 = (byte *)*param_4;
      if (pbVar2 != (byte *)0x0) {
        bVar1 = *pbVar2;
        uStack_30 = 0x811c9dc5;
        while (bVar1 != 0) {
          uVar8 = (uint)bVar1;
          bVar6 = bVar1 + 0xbf;
          pbVar2 = pbVar2 + 1;
          bVar1 = *pbVar2;
          uVar5 = uVar8 + 0x20 & 0xff;
          if (0x19 < bVar6) {
            uVar5 = uVar8;
          }
          uStack_30 = uStack_30 * 0x1000193 ^ uVar5;
        }
      }
      local_88 = CONCAT31(local_88._1_3_,param_1 == 0);
      local_78 = 4;
      lStack_70 = (ulonglong)uStack_bc << 0x20;
      local_58 = param_6;
      pvStack_50 = param_7;
      lStack_60 = (ulonglong)uStack_af << 8;
      local_68 = 0;
      local_38 = local_88;
      uStack_34 = 1;
      local_48 = 0;
      AStack_40 = param_2;
      uStack_3c = uVar7;
      AVar3 = (**(code **)(*DAT_14c790fe0 + 0x18))(DAT_14c790fe0,&local_78);
    }
    else {
      puVar4 = MemoryMgr::Malloc(0,uVar10 * 4);
      if (puVar4 == (uint *)0x0) {
        AVar3 = 0x34;
      }
      else {
        puVar9 = puVar4;
        if (param_5 != 0) {
          do {
            pbVar2 = (byte *)*param_4;
            if (pbVar2 == (byte *)0x0) {
              uVar8 = 0;
            }
            else {
              uVar8 = 0x811c9dc5;
              bVar1 = *pbVar2;
              while (bVar1 != 0) {
                pbVar2 = pbVar2 + 1;
                bVar6 = bVar1 + 0x20;
                if (0x19 < (byte)(bVar1 + 0xbf)) {
                  bVar6 = bVar1;
                }
                uVar8 = uVar8 * 0x1000193 ^ (uint)bVar6;
                bVar1 = *pbVar2;
              }
            }
            *puVar9 = uVar8;
            param_4 = param_4 + 1;
            uVar10 = uVar10 - 1;
            puVar9 = puVar9 + 1;
          } while (uVar10 != 0);
        }
        AVar3 = FUN_144d4cfb0(param_6,param_7,param_1 == 0,param_2,uVar7,puVar4,param_5,0);
      }
    }
  }
  return AVar3;
}



// FUNCTION 144d47210 PrepareGameSyncs body=81 status=ok
// SIG AKRESULT PrepareGameSyncs(PreparationType param_1, AkGroupType param_2, uint param_3, uint * param_4, uint param_5, _func_void_uint_void_ptr_AKRESULT_void_ptr * param_6, void * param_7)

/* enum AKRESULT __cdecl AK::SoundEngine::PrepareGameSyncs(enum
   AK::SoundEngine::PreparationType,enum AkGroupType,unsigned int,unsigned int * __ptr64,unsigned
   int,void (__cdecl*)(unsigned int,void const * __ptr64,enum AKRESULT,void * __ptr64),void *
   __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::PrepareGameSyncs
          (PreparationType param_1,AkGroupType param_2,uint param_3,uint *param_4,uint param_5,
          _func_void_uint_void_ptr_AKRESULT_void_ptr *param_6,void *param_7)

{
  AKRESULT AVar1;
  
                    /* 0x4d47210  204
                       ?PrepareGameSyncs@SoundEngine@AK@@YA?AW4AKRESULT@@W4PreparationType@12@W4AkGroupType@@IPEAIIP6AXIPEBXW43@PEAX@Z5@Z
                        */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  AVar1 = FUN_144d4cfb0(param_6,param_7,param_1 == 0,param_2,param_3,param_4,param_5,1);
  return AVar1;
}



// FUNCTION 144d47270 SetListeners body=8 status=ok
// SIG AKRESULT SetListeners(__uint64 param_1, __uint64 * param_2, uint param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::SetListeners(unsigned __int64,unsigned __int64 const *
   __ptr64,unsigned int) */

AKRESULT __cdecl AK::SoundEngine::SetListeners(__uint64 param_1,__uint64 *param_2,uint param_3)

{
  AKRESULT AVar1;
  
                    /* 0x4d47270  288  ?SetListeners@SoundEngine@AK@@YA?AW4AKRESULT@@_KPEB_KI@Z */
  AVar1 = FUN_144d4c8c0();
  return AVar1;
}



// FUNCTION 144d47280 AddListener body=33 status=ok
// SIG AKRESULT AddListener(__uint64 param_1, __uint64 param_2)

/* enum AKRESULT __cdecl AK::SoundEngine::AddListener(unsigned __int64,unsigned __int64) */

AKRESULT __cdecl AK::SoundEngine::AddListener(__uint64 param_1,__uint64 param_2)

{
  AKRESULT AVar1;
  __uint64 local_res10 [3];
  
                    /* 0x4d47280  24  ?AddListener@SoundEngine@AK@@YA?AW4AKRESULT@@_K0@Z */
  local_res10[0] = param_2;
  AVar1 = FUN_144d4c8c0(param_1,local_res10,1);
  return AVar1;
}



// FUNCTION 144d472b0 RemoveListener body=34 status=ok
// SIG AKRESULT RemoveListener(__uint64 param_1, __uint64 param_2)

/* enum AKRESULT __cdecl AK::SoundEngine::RemoveListener(unsigned __int64,unsigned __int64) */

AKRESULT __cdecl AK::SoundEngine::RemoveListener(__uint64 param_1,__uint64 param_2)

{
  AKRESULT AVar1;
  __uint64 local_res10 [3];
  
                    /* 0x4d472b0  238  ?RemoveListener@SoundEngine@AK@@YA?AW4AKRESULT@@_K0@Z */
  local_res10[0] = param_2;
  AVar1 = FUN_144d4c8c0(param_1,local_res10,1);
  return AVar1;
}



// FUNCTION 144d472e0 SetDefaultListeners body=8 status=ok
// SIG AKRESULT SetDefaultListeners(__uint64 * param_1, uint param_2)

/* enum AKRESULT __cdecl AK::SoundEngine::SetDefaultListeners(unsigned __int64 const *
   __ptr64,unsigned int) */

AKRESULT __cdecl AK::SoundEngine::SetDefaultListeners(__uint64 *param_1,uint param_2)

{
  AKRESULT AVar1;
  
                    /* 0x4d472e0  281  ?SetDefaultListeners@SoundEngine@AK@@YA?AW4AKRESULT@@PEB_KI@Z
                        */
  AVar1 = FUN_144d4c9a0(param_1,param_2,0);
  return AVar1;
}



// FUNCTION 144d472f0 AddDefaultListener body=32 status=ok
// SIG AKRESULT AddDefaultListener(__uint64 param_1)

/* enum AKRESULT __cdecl AK::SoundEngine::AddDefaultListener(unsigned __int64) */

AKRESULT __cdecl AK::SoundEngine::AddDefaultListener(__uint64 param_1)

{
  AKRESULT AVar1;
  __uint64 local_res8 [4];
  
                    /* 0x4d472f0  22  ?AddDefaultListener@SoundEngine@AK@@YA?AW4AKRESULT@@_K@Z */
  local_res8[0] = param_1;
  AVar1 = FUN_144d4c9a0(local_res8,1,1);
  return AVar1;
}



// FUNCTION 144d47310 RemoveDefaultListener body=33 status=ok
// SIG AKRESULT RemoveDefaultListener(__uint64 param_1)

/* enum AKRESULT __cdecl AK::SoundEngine::RemoveDefaultListener(unsigned __int64) */

AKRESULT __cdecl AK::SoundEngine::RemoveDefaultListener(__uint64 param_1)

{
  AKRESULT AVar1;
  __uint64 local_res8 [4];
  
                    /* 0x4d47310  236  ?RemoveDefaultListener@SoundEngine@AK@@YA?AW4AKRESULT@@_K@Z
                        */
  local_res8[0] = param_1;
  AVar1 = FUN_144d4c9a0(local_res8,1,2);
  return AVar1;
}



// FUNCTION 144d47340 ResetListenersToDefault body=84 status=ok
// SIG AKRESULT ResetListenersToDefault(__uint64 param_1)

/* enum AKRESULT __cdecl AK::SoundEngine::ResetListenersToDefault(unsigned __int64) */

AKRESULT __cdecl AK::SoundEngine::ResetListenersToDefault(__uint64 param_1)

{
  undefined2 uVar1;
  longlong lVar2;
  
                    /* 0x4d47340  244  ?ResetListenersToDefault@SoundEngine@AK@@YA?AW4AKRESULT@@_K@Z
                        */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  uVar1 = FUN_145087f00();
  lVar2 = FUN_145080f50(DAT_14c790fd8,0x11,uVar1);
  *(__uint64 *)(lVar2 + 4) = param_1;
  LOCK();
  *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
  UNLOCK();
  return 1;
}



// FUNCTION 144d473a0 SetListenerSpatialization body=305 status=ok
// SIG AKRESULT SetListenerSpatialization(__uint64 param_1, bool param_2, AkChannelConfig param_3, float * param_4)

/* enum AKRESULT __cdecl AK::SoundEngine::SetListenerSpatialization(unsigned __int64,bool,struct
   AkChannelConfig,float * __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::SetListenerSpatialization
          (undefined8 param_1,ushort param_2,ulonglong param_3,void *param_4)

{
  undefined2 uVar1;
  void *_Dst;
  longlong lVar2;
  ulonglong uVar3;
  AKRESULT AVar4;
  
                    /* 0x4d473a0  287
                       ?SetListenerSpatialization@SoundEngine@AK@@YA?AW4AKRESULT@@_K_NUAkChannelConfig@@PEAM@Z
                        */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  lVar2 = 0;
  uVar3 = param_3 & 0xff;
  if ((param_4 != (void *)0x0) && ((char)param_3 != '\0')) {
    do {
      if (0x7f7fffff < (*(uint *)((longlong)param_4 + lVar2 * 4) & 0x7fffffff)) {
        return 0x5f;
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < (longlong)uVar3);
  }
  uVar1 = FUN_145087f10();
  lVar2 = FUN_145080f50(DAT_14c790fd8,0x12,uVar1);
  *(int *)(lVar2 + 0x14) = (int)param_3;
  AVar4 = 1;
  *(undefined8 *)(lVar2 + 4) = param_1;
  *(ushort *)(lVar2 + 0x18) = param_2 & 0xff;
  *(undefined8 *)(lVar2 + 0xc) = 0;
  if (param_4 == (void *)0x0) {
    *(undefined2 *)(lVar2 + 0x1a) = 0;
  }
  else {
    *(undefined2 *)(lVar2 + 0x1a) = 1;
    if ((int)uVar3 != 0) {
      _Dst = MemoryMgr::Malign(0,(ulonglong)(((int)uVar3 + 7U >> 3) << 5),0x10);
      *(void **)(lVar2 + 0xc) = _Dst;
      if (_Dst == (void *)0x0) {
        *(undefined2 *)(lVar2 + 2) = 0x41;
        AVar4 = 0x34;
      }
      else {
        memcpy(_Dst,param_4,uVar3 << 2);
      }
    }
  }
  LOCK();
  *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
  UNLOCK();
  return AVar4;
}



// FUNCTION 144d474e0 SetRTPCValue body=112 status=ok
// SIG AKRESULT SetRTPCValue(wchar_t * param_1, float param_2, __uint64 param_3, int param_4, AkCurveInterpolation param_5, bool param_6)

/* enum AKRESULT __cdecl AK::SoundEngine::SetRTPCValue(wchar_t const * __ptr64,float,unsigned
   __int64,int,enum AkCurveInterpolation,bool) */

AKRESULT __cdecl
AK::SoundEngine::SetRTPCValue
          (wchar_t *param_1,float param_2,__uint64 param_3,int param_4,AkCurveInterpolation param_5,
          bool param_6)

{
  uint uVar1;
  AKRESULT AVar2;
  
                    /* 0x4d474e0  309
                       ?SetRTPCValue@SoundEngine@AK@@YA?AW4AKRESULT@@PEB_WM_KHW4AkCurveInterpolation@@_N@Z
                        */
  if (param_1 == (wchar_t *)0x0) {
    return 0xe;
  }
  uVar1 = GetIDFromString(param_1);
  AVar2 = FUN_144d4caa0(uVar1,param_2,param_3,0,param_4,param_5,param_6);
  return AVar2;
}



// FUNCTION 144d47550 SetRTPCValue body=137 status=ok
// SIG AKRESULT SetRTPCValue(char * param_1, float param_2, __uint64 param_3, int param_4, AkCurveInterpolation param_5, bool param_6)

/* enum AKRESULT __cdecl AK::SoundEngine::SetRTPCValue(char const * __ptr64,float,unsigned
   __int64,int,enum AkCurveInterpolation,bool) */

AKRESULT __cdecl
AK::SoundEngine::SetRTPCValue
          (char *param_1,float param_2,__uint64 param_3,int param_4,AkCurveInterpolation param_5,
          bool param_6)

{
  byte bVar1;
  byte bVar2;
  AKRESULT AVar3;
  uint uVar4;
  
                    /* 0x4d47550  308
                       ?SetRTPCValue@SoundEngine@AK@@YA?AW4AKRESULT@@PEBDM_KHW4AkCurveInterpolation@@_N@Z
                        */
  if (param_1 != (char *)0x0) {
    uVar4 = 0x811c9dc5;
    bVar2 = *param_1;
    while (bVar2 != 0) {
      param_1 = param_1 + 1;
      bVar1 = bVar2 + 0x20;
      if (0x19 < (byte)(bVar2 + 0xbf)) {
        bVar1 = bVar2;
      }
      uVar4 = uVar4 * 0x1000193 ^ (uint)bVar1;
      bVar2 = *param_1;
    }
    AVar3 = FUN_144d4caa0(uVar4,param_2,param_3,0,param_4,param_5,param_6);
    return AVar3;
  }
  return 0xe;
}



// FUNCTION 144d475e0 SetRTPCValueByPlayingID body=138 status=ok
// SIG AKRESULT SetRTPCValueByPlayingID(uint param_1, float param_2, uint param_3, int param_4, AkCurveInterpolation param_5, bool param_6)

/* enum AKRESULT __cdecl AK::SoundEngine::SetRTPCValueByPlayingID(unsigned int,float,unsigned
   int,int,enum AkCurveInterpolation,bool) */

AKRESULT __cdecl
AK::SoundEngine::SetRTPCValueByPlayingID
          (uint param_1,float param_2,uint param_3,int param_4,AkCurveInterpolation param_5,
          bool param_6)

{
  AKRESULT AVar1;
  longlong lVar2;
  
                    /* 0x4d475e0  310
                       ?SetRTPCValueByPlayingID@SoundEngine@AK@@YA?AW4AKRESULT@@IMIHW4AkCurveInterpolation@@_N@Z
                        */
  if (DAT_14c790ff4 == '\0') {
    AVar1 = 0x66;
  }
  else {
    lVar2 = FUN_1450b29c0(DAT_14c790fc0,param_3);
    if (lVar2 == -1) {
      AVar1 = 0x5e;
    }
    else {
      AVar1 = FUN_144d4caa0(param_1,param_2,lVar2,param_3,param_4,param_5,param_6);
    }
  }
  return AVar1;
}



// FUNCTION 144d47670 SetRTPCValueByPlayingID body=93 status=ok
// SIG AKRESULT SetRTPCValueByPlayingID(wchar_t * param_1, float param_2, uint param_3, int param_4, AkCurveInterpolation param_5, bool param_6)

/* enum AKRESULT __cdecl AK::SoundEngine::SetRTPCValueByPlayingID(wchar_t const *
   __ptr64,float,unsigned int,int,enum AkCurveInterpolation,bool) */

AKRESULT __cdecl
AK::SoundEngine::SetRTPCValueByPlayingID
          (wchar_t *param_1,float param_2,uint param_3,int param_4,AkCurveInterpolation param_5,
          bool param_6)

{
  uint uVar1;
  AKRESULT AVar2;
  
                    /* 0x4d47670  312
                       ?SetRTPCValueByPlayingID@SoundEngine@AK@@YA?AW4AKRESULT@@PEB_WMIHW4AkCurveInterpolation@@_N@Z
                        */
  if (param_1 == (wchar_t *)0x0) {
    return 0xe;
  }
  uVar1 = GetIDFromString(param_1);
  AVar2 = SetRTPCValueByPlayingID(uVar1,param_2,param_3,param_4,param_5,param_6);
  return AVar2;
}



// FUNCTION 144d476d0 SetRTPCValueByPlayingID body=101 status=ok
// SIG AKRESULT SetRTPCValueByPlayingID(char * param_1, float param_2, uint param_3, int param_4, AkCurveInterpolation param_5, bool param_6)

/* enum AKRESULT __cdecl AK::SoundEngine::SetRTPCValueByPlayingID(char const *
   __ptr64,float,unsigned int,int,enum AkCurveInterpolation,bool) */

AKRESULT __cdecl
AK::SoundEngine::SetRTPCValueByPlayingID
          (char *param_1,float param_2,uint param_3,int param_4,AkCurveInterpolation param_5,
          bool param_6)

{
  byte bVar1;
  byte bVar2;
  AKRESULT AVar3;
  uint uVar4;
  
                    /* 0x4d476d0  311
                       ?SetRTPCValueByPlayingID@SoundEngine@AK@@YA?AW4AKRESULT@@PEBDMIHW4AkCurveInterpolation@@_N@Z
                        */
  if (param_1 != (char *)0x0) {
    uVar4 = 0x811c9dc5;
    bVar2 = *param_1;
    while (bVar2 != 0) {
      param_1 = param_1 + 1;
      bVar1 = bVar2 + 0x20;
      if (0x19 < (byte)(bVar2 + 0xbf)) {
        bVar1 = bVar2;
      }
      uVar4 = uVar4 * 0x1000193 ^ (uint)bVar1;
      bVar2 = *param_1;
    }
    AVar3 = SetRTPCValueByPlayingID(uVar4,param_2,param_3,param_4,param_5,param_6);
    return AVar3;
  }
  return 0xe;
}



// FUNCTION 144d47740 ResetRTPCValue body=190 status=ok
// SIG AKRESULT ResetRTPCValue(uint param_1, __uint64 param_2, int param_3, AkCurveInterpolation param_4, bool param_5)

/* enum AKRESULT __cdecl AK::SoundEngine::ResetRTPCValue(unsigned int,unsigned __int64,int,enum
   AkCurveInterpolation,bool) */

AKRESULT __cdecl
AK::SoundEngine::ResetRTPCValue
          (uint param_1,__uint64 param_2,int param_3,AkCurveInterpolation param_4,bool param_5)

{
  undefined2 uVar1;
  AKRESULT AVar2;
  longlong lVar3;
  
                    /* 0x4d47740  245
                       ?ResetRTPCValue@SoundEngine@AK@@YA?AW4AKRESULT@@I_KHW4AkCurveInterpolation@@_N@Z
                        */
  if (DAT_14c790ff4 == '\0') {
    AVar2 = 0x66;
  }
  else {
    if ((param_3 != 0) || (param_5)) {
      uVar1 = FUN_145087f60();
      lVar3 = FUN_145080f50(DAT_14c790fd8,6,uVar1);
      *(int *)(lVar3 + 0x14) = param_3;
      *(AkCurveInterpolation *)(lVar3 + 0x18) = param_4;
      *(bool *)(lVar3 + 0x1c) = param_5;
    }
    else {
      uVar1 = FUN_145087f50();
      lVar3 = FUN_145080f50(DAT_14c790fd8,5,uVar1);
    }
    *(__uint64 *)(lVar3 + 4) = param_2;
    *(undefined4 *)(lVar3 + 0x10) = 0;
    *(uint *)(lVar3 + 0xc) = param_1;
    LOCK();
    *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
    UNLOCK();
    AVar2 = 1;
  }
  return AVar2;
}



// FUNCTION 144d47800 ResetRTPCValue body=93 status=ok
// SIG AKRESULT ResetRTPCValue(wchar_t * param_1, __uint64 param_2, int param_3, AkCurveInterpolation param_4, bool param_5)

/* enum AKRESULT __cdecl AK::SoundEngine::ResetRTPCValue(wchar_t const * __ptr64,unsigned
   __int64,int,enum AkCurveInterpolation,bool) */

AKRESULT __cdecl
AK::SoundEngine::ResetRTPCValue
          (wchar_t *param_1,__uint64 param_2,int param_3,AkCurveInterpolation param_4,bool param_5)

{
  uint uVar1;
  AKRESULT AVar2;
  
                    /* 0x4d47800  247
                       ?ResetRTPCValue@SoundEngine@AK@@YA?AW4AKRESULT@@PEB_W_KHW4AkCurveInterpolation@@_N@Z
                        */
  if (param_1 == (wchar_t *)0x0) {
    return 0xe;
  }
  uVar1 = GetIDFromString(param_1);
  AVar2 = ResetRTPCValue(uVar1,param_2,param_3,param_4,param_5);
  return AVar2;
}



// FUNCTION 144d47860 ResetRTPCValue body=124 status=ok
// SIG AKRESULT ResetRTPCValue(char * param_1, __uint64 param_2, int param_3, AkCurveInterpolation param_4, bool param_5)

/* enum AKRESULT __cdecl AK::SoundEngine::ResetRTPCValue(char const * __ptr64,unsigned
   __int64,int,enum AkCurveInterpolation,bool) */

AKRESULT __cdecl
AK::SoundEngine::ResetRTPCValue
          (char *param_1,__uint64 param_2,int param_3,AkCurveInterpolation param_4,bool param_5)

{
  byte bVar1;
  byte bVar2;
  AKRESULT AVar3;
  uint uVar4;
  
                    /* 0x4d47860  246
                       ?ResetRTPCValue@SoundEngine@AK@@YA?AW4AKRESULT@@PEBD_KHW4AkCurveInterpolation@@_N@Z
                        */
  if (param_1 != (char *)0x0) {
    uVar4 = 0x811c9dc5;
    bVar2 = *param_1;
    while (bVar2 != 0) {
      param_1 = param_1 + 1;
      bVar1 = bVar2 + 0x20;
      if (0x19 < (byte)(bVar2 + 0xbf)) {
        bVar1 = bVar2;
      }
      uVar4 = uVar4 * 0x1000193 ^ (uint)bVar1;
      bVar2 = *param_1;
    }
    AVar3 = ResetRTPCValue(uVar4,param_2,param_3,param_4,param_5);
    return AVar3;
  }
  return 0xe;
}



// FUNCTION 144d478e0 ResetRTPCValueByPlayingID body=224 status=ok
// SIG AKRESULT ResetRTPCValueByPlayingID(uint param_1, uint param_2, int param_3, AkCurveInterpolation param_4, bool param_5)

/* enum AKRESULT __cdecl AK::SoundEngine::ResetRTPCValueByPlayingID(unsigned int,unsigned
   int,int,enum AkCurveInterpolation,bool) */

AKRESULT __cdecl
AK::SoundEngine::ResetRTPCValueByPlayingID
          (uint param_1,uint param_2,int param_3,AkCurveInterpolation param_4,bool param_5)

{
  undefined2 uVar1;
  AKRESULT AVar2;
  longlong lVar3;
  longlong lVar4;
  
                    /* 0x4d478e0  248
                       ?ResetRTPCValueByPlayingID@SoundEngine@AK@@YA?AW4AKRESULT@@IIHW4AkCurveInterpolation@@_N@Z
                        */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  lVar3 = FUN_1450b29c0(DAT_14c790fc0);
  if (lVar3 == -1) {
    AVar2 = 0x5e;
  }
  else {
    if ((param_3 != 0) || (param_5)) {
      uVar1 = FUN_145087f60();
      lVar4 = FUN_145080f50(DAT_14c790fd8,6,uVar1);
      *(int *)(lVar4 + 0x14) = param_3;
      *(AkCurveInterpolation *)(lVar4 + 0x18) = param_4;
      *(bool *)(lVar4 + 0x1c) = param_5;
    }
    else {
      uVar1 = FUN_145087f50();
      lVar4 = FUN_145080f50(DAT_14c790fd8,5,uVar1);
    }
    *(longlong *)(lVar4 + 4) = lVar3;
    *(uint *)(lVar4 + 0x10) = param_2;
    *(uint *)(lVar4 + 0xc) = param_1;
    LOCK();
    *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
    UNLOCK();
    AVar2 = 1;
  }
  return AVar2;
}



// FUNCTION 144d479c0 ResetRTPCValueByPlayingID body=91 status=ok
// SIG AKRESULT ResetRTPCValueByPlayingID(wchar_t * param_1, uint param_2, int param_3, AkCurveInterpolation param_4, bool param_5)

/* enum AKRESULT __cdecl AK::SoundEngine::ResetRTPCValueByPlayingID(wchar_t const * __ptr64,unsigned
   int,int,enum AkCurveInterpolation,bool) */

AKRESULT __cdecl
AK::SoundEngine::ResetRTPCValueByPlayingID
          (wchar_t *param_1,uint param_2,int param_3,AkCurveInterpolation param_4,bool param_5)

{
  uint uVar1;
  AKRESULT AVar2;
  
                    /* 0x4d479c0  250
                       ?ResetRTPCValueByPlayingID@SoundEngine@AK@@YA?AW4AKRESULT@@PEB_WIHW4AkCurveInterpolation@@_N@Z
                        */
  if (param_1 == (wchar_t *)0x0) {
    return 0xe;
  }
  uVar1 = GetIDFromString(param_1);
  AVar2 = ResetRTPCValueByPlayingID(uVar1,param_2,param_3,param_4,param_5);
  return AVar2;
}



// FUNCTION 144d47a20 ResetRTPCValueByPlayingID body=123 status=ok
// SIG AKRESULT ResetRTPCValueByPlayingID(char * param_1, uint param_2, int param_3, AkCurveInterpolation param_4, bool param_5)

/* enum AKRESULT __cdecl AK::SoundEngine::ResetRTPCValueByPlayingID(char const * __ptr64,unsigned
   int,int,enum AkCurveInterpolation,bool) */

AKRESULT __cdecl
AK::SoundEngine::ResetRTPCValueByPlayingID
          (char *param_1,uint param_2,int param_3,AkCurveInterpolation param_4,bool param_5)

{
  byte bVar1;
  byte bVar2;
  AKRESULT AVar3;
  uint uVar4;
  
                    /* 0x4d47a20  249
                       ?ResetRTPCValueByPlayingID@SoundEngine@AK@@YA?AW4AKRESULT@@PEBDIHW4AkCurveInterpolation@@_N@Z
                        */
  if (param_1 != (char *)0x0) {
    uVar4 = 0x811c9dc5;
    bVar2 = *param_1;
    while (bVar2 != 0) {
      param_1 = param_1 + 1;
      bVar1 = bVar2 + 0x20;
      if (0x19 < (byte)(bVar2 + 0xbf)) {
        bVar1 = bVar2;
      }
      uVar4 = uVar4 * 0x1000193 ^ (uint)bVar1;
      bVar2 = *param_1;
    }
    AVar3 = ResetRTPCValueByPlayingID(uVar4,param_2,param_3,param_4,param_5);
    return AVar3;
  }
  return 0xe;
}



// FUNCTION 144d47aa0 SetSwitch body=92 status=ok
// SIG AKRESULT SetSwitch(wchar_t * param_1, wchar_t * param_2, __uint64 param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::SetSwitch(wchar_t const * __ptr64,wchar_t const *
   __ptr64,unsigned __int64) */

AKRESULT __cdecl AK::SoundEngine::SetSwitch(wchar_t *param_1,wchar_t *param_2,__uint64 param_3)

{
  uint uVar1;
  uint uVar2;
  AKRESULT AVar3;
  
                    /* 0x4d47aa0  321  ?SetSwitch@SoundEngine@AK@@YA?AW4AKRESULT@@PEB_W0_K@Z */
  uVar1 = GetIDFromString(param_1);
  uVar2 = GetIDFromString(param_2);
  if ((uVar1 != 0) && (uVar2 != 0)) {
    AVar3 = SetSwitch(uVar1,uVar2,param_3);
    return AVar3;
  }
  return 0xe;
}



// FUNCTION 144d47b00 SetSwitch body=217 status=ok
// SIG AKRESULT SetSwitch(char * param_1, char * param_2, __uint64 param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::SetSwitch(char const * __ptr64,char const *
   __ptr64,unsigned __int64) */

AKRESULT __cdecl AK::SoundEngine::SetSwitch(char *param_1,char *param_2,__uint64 param_3)

{
  byte bVar1;
  byte bVar2;
  AKRESULT AVar3;
  uint uVar4;
  uint uVar5;
  
                    /* 0x4d47b00  320  ?SetSwitch@SoundEngine@AK@@YA?AW4AKRESULT@@PEBD0_K@Z */
  uVar4 = 0;
  if (param_1 == (char *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0x811c9dc5;
    bVar2 = *param_1;
    while (bVar2 != 0) {
      param_1 = param_1 + 1;
      bVar1 = bVar2 + 0x20;
      if (0x19 < (byte)(bVar2 + 0xbf)) {
        bVar1 = bVar2;
      }
      uVar5 = uVar5 * 0x1000193 ^ (uint)bVar1;
      bVar2 = *param_1;
    }
  }
  if (param_2 != (char *)0x0) {
    uVar4 = 0x811c9dc5;
    bVar2 = *param_2;
    while (bVar2 != 0) {
      param_2 = param_2 + 1;
      bVar1 = bVar2 + 0x20;
      if (0x19 < (byte)(bVar2 + 0xbf)) {
        bVar1 = bVar2;
      }
      uVar4 = uVar4 * 0x1000193 ^ (uint)bVar1;
      bVar2 = *param_2;
    }
  }
  if ((uVar5 != 0) && (uVar4 != 0)) {
    AVar3 = SetSwitch(uVar5,uVar4,param_3);
    return AVar3;
  }
  return 0xe;
}



// FUNCTION 144d47be0 PostTrigger body=103 status=ok
// SIG AKRESULT PostTrigger(uint param_1, __uint64 param_2)

/* enum AKRESULT __cdecl AK::SoundEngine::PostTrigger(unsigned int,unsigned __int64) */

AKRESULT __cdecl AK::SoundEngine::PostTrigger(uint param_1,__uint64 param_2)

{
  undefined2 uVar1;
  longlong lVar2;
  
                    /* 0x4d47be0  188  ?PostTrigger@SoundEngine@AK@@YA?AW4AKRESULT@@I_K@Z */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  uVar1 = FUN_145087ec0();
  lVar2 = FUN_145080f50(DAT_14c790fd8,10,uVar1);
  *(__uint64 *)(lVar2 + 4) = param_2;
  *(uint *)(lVar2 + 0xc) = param_1;
  LOCK();
  *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
  UNLOCK();
  return 1;
}



// FUNCTION 144d47c50 PostTrigger body=44 status=ok
// SIG AKRESULT PostTrigger(wchar_t * param_1, __uint64 param_2)

/* enum AKRESULT __cdecl AK::SoundEngine::PostTrigger(wchar_t const * __ptr64,unsigned __int64) */

AKRESULT __cdecl AK::SoundEngine::PostTrigger(wchar_t *param_1,__uint64 param_2)

{
  uint uVar1;
  AKRESULT AVar2;
  
                    /* 0x4d47c50  190  ?PostTrigger@SoundEngine@AK@@YA?AW4AKRESULT@@PEB_W_K@Z */
  uVar1 = GetIDFromString(param_1);
  if (uVar1 != 0) {
    AVar2 = PostTrigger(uVar1,param_2);
    return AVar2;
  }
  return 0xe;
}



// FUNCTION 144d47c80 PostTrigger body=103 status=ok
// SIG AKRESULT PostTrigger(char * param_1, __uint64 param_2)

/* enum AKRESULT __cdecl AK::SoundEngine::PostTrigger(char const * __ptr64,unsigned __int64) */

AKRESULT __cdecl AK::SoundEngine::PostTrigger(char *param_1,__uint64 param_2)

{
  byte bVar1;
  AKRESULT AVar2;
  uint uVar3;
  byte bVar4;
  
                    /* 0x4d47c80  189  ?PostTrigger@SoundEngine@AK@@YA?AW4AKRESULT@@PEBD_K@Z */
  if (param_1 == (char *)0x0) {
    return 0xe;
  }
  bVar4 = *param_1;
  uVar3 = 0x811c9dc5;
  if (bVar4 != 0) {
    do {
      param_1 = param_1 + 1;
      bVar1 = bVar4 + 0x20;
      if (0x19 < (byte)(bVar4 + 0xbf)) {
        bVar1 = bVar4;
      }
      uVar3 = uVar3 * 0x1000193 ^ (uint)bVar1;
      bVar4 = *param_1;
    } while (*param_1 != 0);
    if (uVar3 == 0) {
      return 0xe;
    }
  }
  AVar2 = PostTrigger(uVar3,param_2);
  return AVar2;
}



// FUNCTION 144d47cf0 SetState body=104 status=ok
// SIG AKRESULT SetState(uint param_1, uint param_2)

/* enum AKRESULT __cdecl AK::SoundEngine::SetState(unsigned int,unsigned int) */

AKRESULT __cdecl AK::SoundEngine::SetState(uint param_1,uint param_2)

{
  undefined2 uVar1;
  longlong lVar2;
  
                    /* 0x4d47cf0  316  ?SetState@SoundEngine@AK@@YA?AW4AKRESULT@@II@Z */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  uVar1 = FUN_145087ea0();
  lVar2 = FUN_145080f50(DAT_14c790fd8,7,uVar1);
  *(uint *)(lVar2 + 8) = param_2;
  *(uint *)(lVar2 + 4) = param_1;
  *(undefined4 *)(lVar2 + 0xc) = 0;
  LOCK();
  *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
  UNLOCK();
  return 1;
}



// FUNCTION 144d47d60 SetState body=71 status=ok
// SIG AKRESULT SetState(wchar_t * param_1, wchar_t * param_2)

/* enum AKRESULT __cdecl AK::SoundEngine::SetState(wchar_t const * __ptr64,wchar_t const * __ptr64)
    */

AKRESULT __cdecl AK::SoundEngine::SetState(wchar_t *param_1,wchar_t *param_2)

{
  uint uVar1;
  uint uVar2;
  AKRESULT AVar3;
  
                    /* 0x4d47d60  318  ?SetState@SoundEngine@AK@@YA?AW4AKRESULT@@PEB_W0@Z */
  uVar1 = GetIDFromString(param_1);
  uVar2 = GetIDFromString(param_2);
  if ((uVar1 != 0) && (uVar2 != 0)) {
    AVar3 = SetState(uVar1,uVar2);
    return AVar3;
  }
  return 0xe;
}



// FUNCTION 144d47db0 SetState body=204 status=ok
// SIG AKRESULT SetState(char * param_1, char * param_2)

/* enum AKRESULT __cdecl AK::SoundEngine::SetState(char const * __ptr64,char const * __ptr64) */

AKRESULT __cdecl AK::SoundEngine::SetState(char *param_1,char *param_2)

{
  byte bVar1;
  byte bVar2;
  AKRESULT AVar3;
  uint uVar4;
  uint uVar5;
  
                    /* 0x4d47db0  317  ?SetState@SoundEngine@AK@@YA?AW4AKRESULT@@PEBD0@Z */
  uVar4 = 0;
  if (param_1 == (char *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0x811c9dc5;
    bVar2 = *param_1;
    while (bVar2 != 0) {
      param_1 = param_1 + 1;
      bVar1 = bVar2 + 0x20;
      if (0x19 < (byte)(bVar2 + 0xbf)) {
        bVar1 = bVar2;
      }
      uVar5 = uVar5 * 0x1000193 ^ (uint)bVar1;
      bVar2 = *param_1;
    }
  }
  if (param_2 != (char *)0x0) {
    uVar4 = 0x811c9dc5;
    bVar2 = *param_2;
    while (bVar2 != 0) {
      param_2 = param_2 + 1;
      bVar1 = bVar2 + 0x20;
      if (0x19 < (byte)(bVar2 + 0xbf)) {
        bVar1 = bVar2;
      }
      uVar4 = uVar4 * 0x1000193 ^ (uint)bVar1;
      bVar2 = *param_2;
    }
  }
  if ((uVar5 != 0) && (uVar4 != 0)) {
    AVar3 = SetState(uVar5,uVar4);
    return AVar3;
  }
  return 0xe;
}



// FUNCTION 144d47e80 RegisterBusVolumeCallback body=35 status=ok
// SIG AKRESULT RegisterBusVolumeCallback(uint param_1, _func_void_AkSpeakerVolumeMatrixCallbackInfo_ptr * param_2, void * param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::RegisterBusVolumeCallback(unsigned int,void
   (__cdecl*)(struct AkSpeakerVolumeMatrixCallbackInfo * __ptr64),void * __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::RegisterBusVolumeCallback
          (uint param_1,_func_void_AkSpeakerVolumeMatrixCallbackInfo_ptr *param_2,void *param_3)

{
  AKRESULT AVar1;
  
                    /* 0x4d47e80  225
                       ?RegisterBusVolumeCallback@SoundEngine@AK@@YA?AW4AKRESULT@@IP6AXPEAUAkSpeakerVolumeMatrixCallbackInfo@@@ZPEAX@Z
                        */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  AVar1 = FUN_1450b1370(DAT_14c790fc8,param_1,param_2,param_3);
  return AVar1;
}



// FUNCTION 144d47eb0 RegisterBusMeteringCallback body=54 status=ok
// SIG AKRESULT RegisterBusMeteringCallback(uint param_1, _func_void_AkBusMeteringCallbackInfo_ptr * param_2, AkMeteringFlags param_3, void * param_4)

/* enum AKRESULT __cdecl AK::SoundEngine::RegisterBusMeteringCallback(unsigned int,void
   (__cdecl*)(struct AkBusMeteringCallbackInfo * __ptr64),enum AkMeteringFlags,void * __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::RegisterBusMeteringCallback
          (uint param_1,_func_void_AkBusMeteringCallbackInfo_ptr *param_2,AkMeteringFlags param_3,
          void *param_4)

{
  AKRESULT AVar1;
  
                    /* 0x4d47eb0  224
                       ?RegisterBusMeteringCallback@SoundEngine@AK@@YA?AW4AKRESULT@@IP6AXPEAUAkBusMeteringCallbackInfo@@@ZW4AkMeteringFlags@@PEAX@Z
                        */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  AVar1 = FUN_1450b1600(DAT_14c790fc8,param_1,param_2,(char)param_3,param_4);
  return AVar1;
}



// FUNCTION 144d47ef0 RegisterOutputDeviceMeteringCallback body=179 status=ok
// SIG AKRESULT RegisterOutputDeviceMeteringCallback(__uint64 param_1, _func_void_AkOutputDeviceMeteringCallbackInfo_ptr * param_2, AkMeteringFlags param_3, void * param_4)

/* enum AKRESULT __cdecl AK::SoundEngine::RegisterOutputDeviceMeteringCallback(unsigned __int64,void
   (__cdecl*)(struct AkOutputDeviceMeteringCallbackInfo * __ptr64),enum AkMeteringFlags,void *
   __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::RegisterOutputDeviceMeteringCallback
          (__uint64 param_1,_func_void_AkOutputDeviceMeteringCallbackInfo_ptr *param_2,
          AkMeteringFlags param_3,void *param_4)

{
  int iVar1;
  AKRESULT AVar2;
  longlong lVar3;
  undefined4 in_register_00000084;
  undefined1 local_18 [16];
  
                    /* 0x4d47ef0  232
                       ?RegisterOutputDeviceMeteringCallback@SoundEngine@AK@@YA?AW4AKRESULT@@_KP6AXPEAUAkOutputDeviceMeteringCallbackInfo@@@ZW4AkMeteringFlags@@PEAX@Z
                        */
  iVar1 = FUN_144d4cba0(param_1,param_2,CONCAT44(in_register_00000084,param_3));
  if (iVar1 == 1) {
    AVar2 = 0x66;
    FUN_1450719c0(local_18);
    if (param_1 == 0) {
      lVar3 = FUN_1450a19c0(0);
      if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x4d0) != 0)) {
        param_1 = *(__uint64 *)(lVar3 + 0x30);
      }
    }
    if ((DAT_14c790fc8 != 0) && (param_1 != 0)) {
      AVar2 = FUN_1450b1880(DAT_14c790fc8,param_1,param_2,(char)param_3,param_4);
    }
    FUN_1450719f0(local_18);
  }
  else {
    AVar2 = 0x66;
  }
  return AVar2;
}



// FUNCTION 144d47fb0 SetActorMixerEffect body=129 status=ok
// SIG AKRESULT SetActorMixerEffect(uint param_1, uint param_2, uint param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::SetActorMixerEffect(unsigned int,unsigned int,unsigned
   int) */

AKRESULT __cdecl AK::SoundEngine::SetActorMixerEffect(uint param_1,uint param_2,uint param_3)

{
  undefined2 uVar1;
  longlong lVar2;
  
                    /* 0x4d47fb0  265  ?SetActorMixerEffect@SoundEngine@AK@@YA?AW4AKRESULT@@III@Z */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  uVar1 = FUN_145088090();
  lVar2 = FUN_145080f50(DAT_14c790fd8,0x2c,uVar1);
  *(uint *)(lVar2 + 4) = param_1;
  *(uint *)(lVar2 + 0xc) = param_3;
  *(uint *)(lVar2 + 8) = param_2;
  *(undefined4 *)(lVar2 + 0x10) = 0;
  LOCK();
  *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
  UNLOCK();
  return 1;
}



// FUNCTION 144d48040 SetBusEffect body=406 status=ok
// SIG AKRESULT SetBusEffect(uint param_1, uint param_2, uint param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::SetBusEffect(unsigned int,unsigned int,unsigned int) */

AKRESULT __cdecl AK::SoundEngine::SetBusEffect(uint param_1,uint param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined2 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  
                    /* 0x4d48040  274  ?SetBusEffect@SoundEngine@AK@@YA?AW4AKRESULT@@III@Z */
  lVar5 = DAT_14c791060;
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  if (3 < param_2) {
    return 0x1f;
  }
  do {
    while (iVar2 = *(int *)(lVar5 + 0x58), iVar2 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x60));
      if (*(int *)(lVar5 + 0x58) < 0) goto LAB_144d480a6;
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x60));
    }
    LOCK();
    bVar8 = iVar2 == *(int *)(lVar5 + 0x58);
    if (bVar8) {
      *(int *)(lVar5 + 0x58) = iVar2 + 1;
    }
    UNLOCK();
  } while (!bVar8);
LAB_144d480a6:
  lVar6 = 0;
  lVar7 = lVar6;
  if (*(uint *)(lVar5 + 0xa0) != 0) {
    for (lVar3 = *(longlong *)
                  (*(longlong *)(lVar5 + 0x98) +
                  ((ulonglong)param_1 % (ulonglong)*(uint *)(lVar5 + 0xa0)) * 8);
        (lVar7 = lVar6, lVar3 != 0 && (lVar7 = lVar3, *(uint *)(lVar3 + 0x10) != param_1));
        lVar3 = *(longlong *)(lVar3 + 8)) {
    }
    if (lVar7 != 0) {
      LOCK();
      *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar2 = *(int *)(lVar5 + 0x58);
  do {
    if (iVar2 < 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x60));
LAB_144d4812b:
      lVar5 = lVar7 + -0x10;
      if (lVar7 == 0) {
        lVar5 = lVar6;
      }
      if (lVar5 != 0) {
        LOCK();
        piVar1 = (int *)(lVar5 + 0x24);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*(longlong *)(lVar5 + 0x10) + 0x18))();
        }
        uVar4 = FUN_145088090();
        lVar5 = FUN_145080f50(DAT_14c790fd8,0x2c,uVar4);
        *(uint *)(lVar5 + 4) = param_1;
        *(uint *)(lVar5 + 8) = param_2;
        *(uint *)(lVar5 + 0xc) = param_3;
        *(undefined4 *)(lVar5 + 0x10) = 1;
        LOCK();
        *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
        UNLOCK();
        return 1;
      }
      return 0xf;
    }
    LOCK();
    bVar8 = iVar2 == *(int *)(lVar5 + 0x58);
    if (bVar8) {
      *(int *)(lVar5 + 0x58) = iVar2 + -1;
    }
    UNLOCK();
    if (bVar8) {
      if ((iVar2 + -1 == 0) && (0 < *(int *)(lVar5 + 0x88))) {
        SetEvent(*(HANDLE *)(lVar5 + 0x90));
      }
      goto LAB_144d4812b;
    }
    iVar2 = *(int *)(lVar5 + 0x58);
  } while( true );
}



// FUNCTION 144d481e0 SetBusEffect body=62 status=ok
// SIG AKRESULT SetBusEffect(wchar_t * param_1, uint param_2, uint param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::SetBusEffect(wchar_t const * __ptr64,unsigned int,unsigned
   int) */

AKRESULT __cdecl AK::SoundEngine::SetBusEffect(wchar_t *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  AKRESULT AVar2;
  
                    /* 0x4d481e0  276  ?SetBusEffect@SoundEngine@AK@@YA?AW4AKRESULT@@PEB_WII@Z */
  uVar1 = GetIDFromString(param_1);
  if (uVar1 != 0) {
    AVar2 = SetBusEffect(uVar1,param_2,param_3);
    return AVar2;
  }
  return 0xe;
}



// FUNCTION 144d48220 SetBusEffect body=104 status=ok
// SIG AKRESULT SetBusEffect(char * param_1, uint param_2, uint param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::SetBusEffect(char const * __ptr64,unsigned int,unsigned
   int) */

AKRESULT __cdecl AK::SoundEngine::SetBusEffect(char *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  AKRESULT AVar2;
  uint uVar3;
  byte bVar4;
  
                    /* 0x4d48220  275  ?SetBusEffect@SoundEngine@AK@@YA?AW4AKRESULT@@PEBDII@Z */
  if (param_1 == (char *)0x0) {
    return 0xe;
  }
  bVar4 = *param_1;
  uVar3 = 0x811c9dc5;
  if (bVar4 != 0) {
    do {
      param_1 = param_1 + 1;
      bVar1 = bVar4 + 0x20;
      if (0x19 < (byte)(bVar4 + 0xbf)) {
        bVar1 = bVar4;
      }
      uVar3 = uVar3 * 0x1000193 ^ (uint)bVar1;
      bVar4 = *param_1;
    } while (*param_1 != 0);
    if (uVar3 == 0) {
      return 0xe;
    }
  }
  AVar2 = SetBusEffect(uVar3,param_2,param_3);
  return AVar2;
}



// FUNCTION 144d48290 SetOutputDeviceEffect body=124 status=ok
// SIG AKRESULT SetOutputDeviceEffect(__uint64 param_1, uint param_2, uint param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::SetOutputDeviceEffect(unsigned __int64,unsigned
   int,unsigned int) */

AKRESULT __cdecl AK::SoundEngine::SetOutputDeviceEffect(__uint64 param_1,uint param_2,uint param_3)

{
  undefined2 uVar1;
  longlong lVar2;
  
                    /* 0x4d48290  302  ?SetOutputDeviceEffect@SoundEngine@AK@@YA?AW4AKRESULT@@_KII@Z
                        */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  uVar1 = FUN_145088090();
  lVar2 = FUN_145080f50(DAT_14c790fd8,0x2e,uVar1);
  *(__uint64 *)(lVar2 + 4) = param_1;
  *(uint *)(lVar2 + 0x10) = param_3;
  *(uint *)(lVar2 + 0xc) = param_2;
  LOCK();
  *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
  UNLOCK();
  return 1;
}



// FUNCTION 144d48310 SetMixer body=108 status=ok
// SIG AKRESULT SetMixer(uint param_1, uint param_2)

/* enum AKRESULT __cdecl AK::SoundEngine::SetMixer(unsigned int,unsigned int) */

AKRESULT __cdecl AK::SoundEngine::SetMixer(uint param_1,uint param_2)

{
  undefined2 uVar1;
  longlong lVar2;
  
                    /* 0x4d48310  293  ?SetMixer@SoundEngine@AK@@YA?AW4AKRESULT@@II@Z */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  uVar1 = FUN_145088090();
  lVar2 = FUN_145080f50(DAT_14c790fd8,0x2f,uVar1);
  *(uint *)(lVar2 + 0xc) = param_2;
  *(uint *)(lVar2 + 4) = param_1;
  *(undefined4 *)(lVar2 + 0x10) = 1;
  LOCK();
  *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
  UNLOCK();
  return 1;
}



// FUNCTION 144d48380 SetMixer body=42 status=ok
// SIG AKRESULT SetMixer(wchar_t * param_1, uint param_2)

/* enum AKRESULT __cdecl AK::SoundEngine::SetMixer(wchar_t const * __ptr64,unsigned int) */

AKRESULT __cdecl AK::SoundEngine::SetMixer(wchar_t *param_1,uint param_2)

{
  uint uVar1;
  AKRESULT AVar2;
  
                    /* 0x4d48380  295  ?SetMixer@SoundEngine@AK@@YA?AW4AKRESULT@@PEB_WI@Z */
  uVar1 = GetIDFromString(param_1);
  if (uVar1 != 0) {
    AVar2 = SetMixer(uVar1,param_2);
    return AVar2;
  }
  return 0xe;
}



// FUNCTION 144d483b0 SetMixer body=103 status=ok
// SIG AKRESULT SetMixer(char * param_1, uint param_2)

/* enum AKRESULT __cdecl AK::SoundEngine::SetMixer(char const * __ptr64,unsigned int) */

AKRESULT __cdecl AK::SoundEngine::SetMixer(char *param_1,uint param_2)

{
  byte bVar1;
  AKRESULT AVar2;
  uint uVar3;
  byte bVar4;
  
                    /* 0x4d483b0  294  ?SetMixer@SoundEngine@AK@@YA?AW4AKRESULT@@PEBDI@Z */
  if (param_1 == (char *)0x0) {
    return 0xe;
  }
  bVar4 = *param_1;
  uVar3 = 0x811c9dc5;
  if (bVar4 != 0) {
    do {
      param_1 = param_1 + 1;
      bVar1 = bVar4 + 0x20;
      if (0x19 < (byte)(bVar4 + 0xbf)) {
        bVar1 = bVar4;
      }
      uVar3 = uVar3 * 0x1000193 ^ (uint)bVar1;
      bVar4 = *param_1;
    } while (*param_1 != 0);
    if (uVar3 == 0) {
      return 0xe;
    }
  }
  AVar2 = SetMixer(uVar3,param_2);
  return AVar2;
}



// FUNCTION 144d48420 SetBusConfig body=42 status=ok
// SIG AKRESULT SetBusConfig(wchar_t * param_1, AkChannelConfig param_2)

/* enum AKRESULT __cdecl AK::SoundEngine::SetBusConfig(wchar_t const * __ptr64,struct
   AkChannelConfig) */

AKRESULT __cdecl AK::SoundEngine::SetBusConfig(wchar_t *param_1,undefined4 param_2)

{
  uint uVar1;
  AKRESULT AVar2;
  
                    /* 0x4d48420  270
                       ?SetBusConfig@SoundEngine@AK@@YA?AW4AKRESULT@@PEB_WUAkChannelConfig@@@Z */
  uVar1 = GetIDFromString(param_1);
  if (uVar1 != 0) {
    AVar2 = SetBusConfig(uVar1,param_2);
    return AVar2;
  }
  return 0xe;
}



// FUNCTION 144d48450 SetBusConfig body=101 status=ok
// SIG AKRESULT SetBusConfig(char * param_1, AkChannelConfig param_2)

/* enum AKRESULT __cdecl AK::SoundEngine::SetBusConfig(char const * __ptr64,struct AkChannelConfig)
    */

AKRESULT __cdecl AK::SoundEngine::SetBusConfig(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  AKRESULT AVar3;
  uint uVar4;
  
                    /* 0x4d48450  269
                       ?SetBusConfig@SoundEngine@AK@@YA?AW4AKRESULT@@PEBDUAkChannelConfig@@@Z */
  if (param_1 == (byte *)0x0) {
    return 0xe;
  }
  bVar1 = *param_1;
  uVar4 = 0x811c9dc5;
  if (bVar1 != 0) {
    do {
      param_1 = param_1 + 1;
      bVar2 = bVar1 + 0x20;
      if (0x19 < (byte)(bVar1 + 0xbf)) {
        bVar2 = bVar1;
      }
      uVar4 = uVar4 * 0x1000193 ^ (uint)bVar2;
      bVar1 = *param_1;
    } while (*param_1 != 0);
    if (uVar4 == 0) {
      return 0xe;
    }
  }
  AVar3 = SetBusConfig(uVar4);
  return AVar3;
}



// FUNCTION 144d484c0 GetContainerHistory body=598 status=ok
// SIG AKRESULT GetContainerHistory(IWriteBytes * param_1)

/* enum AKRESULT __cdecl AK::SoundEngine::GetContainerHistory(class AK::IWriteBytes * __ptr64) */

AKRESULT __cdecl AK::SoundEngine::GetContainerHistory(IWriteBytes *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  uchar *puVar6;
  uint uVar7;
  AKRESULT AVar8;
  longlong lVar10;
  longlong *plVar11;
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  int local_res20 [2];
  undefined4 local_68;
  undefined1 local_64 [4];
  undefined1 local_60 [8];
  WriteBytesMem local_58 [32];
  longlong *plVar9;
  
                    /* 0x4d484c0  70
                       ?GetContainerHistory@SoundEngine@AK@@YA?AW4AKRESULT@@PEAVIWriteBytes@2@@Z */
  FUN_1450719c0(local_res10);
  piVar3 = DAT_14c791060;
  do {
    while (iVar5 = *piVar3, iVar5 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(piVar3 + 2));
      if (*piVar3 < 0) goto LAB_144d484f5;
      LeaveCriticalSection((LPCRITICAL_SECTION)(piVar3 + 2));
    }
    LOCK();
    iVar1 = *piVar3;
    if (iVar5 == iVar1) {
      *piVar3 = iVar5 + 1;
    }
    UNLOCK();
  } while (iVar5 != iVar1);
LAB_144d484f5:
  if (piVar3[0x12] != 0) {
    lVar10 = **(longlong **)(piVar3 + 0x10);
    plVar9 = (longlong *)0x0;
    while (lVar10 == 0) {
      uVar7 = (int)plVar9 + 1;
      plVar9 = (longlong *)(ulonglong)uVar7;
      if ((uint)piVar3[0x12] <= uVar7) goto joined_r0x000144d48558;
      lVar10 = (*(longlong **)(piVar3 + 0x10))[(longlong)plVar9];
    }
LAB_144d48560:
    do {
      plVar11 = (longlong *)(lVar10 + -0x10);
      if (lVar10 == 0) {
        plVar11 = (longlong *)0x0;
      }
      iVar5 = (**(code **)(*plVar11 + 0x70))(plVar11);
      if (iVar5 == 2) {
        WriteBytesMem::WriteBytesMem(local_58);
        WriteBytesMem::SetMemPool(local_58,0);
        iVar5 = FUN_1450c2fe0(plVar11,local_58);
        if (iVar5 == 1) {
          local_res18[0] = (undefined4)plVar11[4];
          local_68 = 0;
          cVar4 = (*(code *)**(undefined8 **)param_1)(param_1,local_res18,4,local_64);
          if (cVar4 != '\0') {
            local_res20[0] = WriteBytesMem::Count(local_58);
            cVar4 = (*(code *)**(undefined8 **)param_1)(param_1,local_res20,4,local_60);
            if (cVar4 != '\0') {
              puVar2 = *(undefined8 **)param_1;
              iVar5 = WriteBytesMem::Count(local_58);
              puVar6 = WriteBytesMem::Bytes(local_58);
              cVar4 = (*(code *)*puVar2)(param_1,puVar6,iVar5,&local_68);
              if (cVar4 != '\0') {
                WriteBytesMem::~WriteBytesMem(local_58);
                goto LAB_144d4864a;
              }
            }
          }
        }
        WriteBytesMem::~WriteBytesMem(local_58);
        AVar8 = 0x34;
        goto LAB_144d48686;
      }
LAB_144d4864a:
      lVar10 = *(longlong *)(lVar10 + 8);
      if (lVar10 == 0) {
        do {
          uVar7 = (int)plVar9 + 1;
          plVar9 = (longlong *)(ulonglong)uVar7;
          if ((uint)piVar3[0x12] <= uVar7) goto joined_r0x000144d48558;
          lVar10 = *(longlong *)(*(longlong *)(piVar3 + 0x10) + (longlong)plVar9 * 8);
        } while (lVar10 == 0);
        goto LAB_144d48560;
      }
joined_r0x000144d48558:
    } while (lVar10 != 0);
  }
  AVar8 = 1;
LAB_144d48686:
  iVar5 = *piVar3;
  do {
    if (iVar5 < 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(piVar3 + 2));
LAB_144d486c1:
      FUN_1450719f0(local_res10);
      return AVar8;
    }
    LOCK();
    iVar1 = *piVar3;
    if (iVar5 == iVar1) {
      *piVar3 = iVar5 + -1;
    }
    UNLOCK();
    if (iVar5 == iVar1) {
      if ((iVar5 + -1 == 0) && (0 < piVar3[0xc])) {
        SetEvent(*(HANDLE *)(piVar3 + 0xe));
        FUN_1450719f0(local_res10);
        return AVar8;
      }
      goto LAB_144d486c1;
    }
    iVar5 = *piVar3;
  } while( true );
}



// FUNCTION 144d48720 SetContainerHistory body=626 status=ok
// SIG AKRESULT SetContainerHistory(IReadBytes * param_1)

/* enum AKRESULT __cdecl AK::SoundEngine::SetContainerHistory(class AK::IReadBytes * __ptr64) */

AKRESULT __cdecl AK::SoundEngine::SetContainerHistory(IReadBytes *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  char cVar6;
  AKRESULT AVar7;
  void *pvVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 local_res8 [8];
  int local_res10 [2];
  uint local_res18 [2];
  undefined1 local_res20 [8];
  undefined1 local_38 [4];
  undefined1 local_34 [12];
  
                    /* 0x4d48720  277
                       ?SetContainerHistory@SoundEngine@AK@@YA?AW4AKRESULT@@PEAVIReadBytes@2@@Z */
  FUN_1450719c0(local_res8);
  piVar4 = DAT_14c791060;
  do {
    while (iVar3 = *piVar4, iVar3 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(piVar4 + 2));
      if (*piVar4 < 0) goto LAB_144d48758;
      LeaveCriticalSection((LPCRITICAL_SECTION)(piVar4 + 2));
    }
    LOCK();
    iVar2 = *piVar4;
    if (iVar3 == iVar2) {
      *piVar4 = iVar3 + 1;
    }
    UNLOCK();
  } while (iVar3 != iVar2);
LAB_144d48758:
  lVar9 = 0;
  local_res18[0] = 0;
  cVar6 = (*(code *)**(undefined8 **)param_1)(param_1,local_res18,4,local_res20);
  while (cVar6 != '\0') {
    local_res10[0] = 0;
    cVar6 = (*(code *)**(undefined8 **)param_1)(param_1,local_res10,4,local_38);
    uVar5 = local_res18[0];
    if (cVar6 == '\0') {
LAB_144d48963:
      AVar7 = 2;
      goto LAB_144d48919;
    }
    do {
      while (iVar3 = *piVar4, iVar3 < 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(piVar4 + 2));
        if (*piVar4 < 0) goto LAB_144d487bf;
        LeaveCriticalSection((LPCRITICAL_SECTION)(piVar4 + 2));
      }
      LOCK();
      iVar2 = *piVar4;
      if (iVar3 == iVar2) {
        *piVar4 = iVar3 + 1;
      }
      UNLOCK();
    } while (iVar3 != iVar2);
LAB_144d487bf:
    lVar11 = lVar9;
    if (piVar4[0x12] != 0) {
      for (lVar10 = *(longlong *)
                     (*(longlong *)(piVar4 + 0x10) +
                     ((ulonglong)uVar5 % (ulonglong)(uint)piVar4[0x12]) * 8);
          (lVar11 = lVar9, lVar10 != 0 && (lVar11 = lVar10, *(uint *)(lVar10 + 0x10) != uVar5));
          lVar10 = *(longlong *)(lVar10 + 8)) {
      }
      if (lVar11 != 0) {
        LOCK();
        *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1;
        UNLOCK();
      }
    }
    iVar3 = *piVar4;
    while (-1 < iVar3) {
      LOCK();
      iVar2 = *piVar4;
      if (iVar3 == iVar2) {
        *piVar4 = iVar3 + -1;
      }
      UNLOCK();
      if (iVar3 == iVar2) {
        if ((iVar3 + -1 == 0) && (0 < piVar4[0xc])) {
          SetEvent(*(HANDLE *)(piVar4 + 0xe));
        }
        goto LAB_144d48860;
      }
      iVar3 = *piVar4;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(piVar4 + 2));
LAB_144d48860:
    lVar10 = lVar11 + -0x10;
    if (lVar11 == 0) {
      lVar10 = lVar9;
    }
    if (lVar10 == 0) {
      pvVar8 = MemoryMgr::Malloc(0,(longlong)local_res10[0]);
      if (pvVar8 == (void *)0x0) {
        AVar7 = 0x34;
        goto LAB_144d48919;
      }
      cVar6 = (*(code *)**(undefined8 **)param_1)(param_1,pvVar8,local_res10[0],local_34);
      MemoryMgr::Free(0,pvVar8);
      if (cVar6 == '\0') goto LAB_144d48963;
    }
    else {
      AVar7 = FUN_1450c3160(lVar10,param_1);
      LOCK();
      piVar1 = (int *)(lVar10 + 0x24);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*(longlong *)(lVar10 + 0x10) + 0x18))();
      }
      if (AVar7 != 1) goto LAB_144d48919;
    }
    cVar6 = (*(code *)**(undefined8 **)param_1)(param_1,local_res18,4,local_res20);
  }
  AVar7 = 1;
LAB_144d48919:
  iVar3 = *piVar4;
  do {
    if (iVar3 < 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(piVar4 + 2));
LAB_144d48949:
      FUN_1450719f0(local_res8);
      return AVar7;
    }
    LOCK();
    iVar2 = *piVar4;
    if (iVar3 == iVar2) {
      *piVar4 = iVar3 + -1;
    }
    UNLOCK();
    if (iVar3 == iVar2) {
      if ((iVar3 + -1 == 0) && (0 < piVar4[0xc])) {
        SetEvent(*(HANDLE *)(piVar4 + 0xe));
        FUN_1450719f0(local_res8);
        return AVar7;
      }
      goto LAB_144d48949;
    }
    iVar3 = *piVar4;
  } while( true );
}



// FUNCTION 144d489a0 StartOutputCapture body=212 status=ok
// SIG AKRESULT StartOutputCapture(wchar_t * param_1)

/* enum AKRESULT __cdecl AK::SoundEngine::StartOutputCapture(wchar_t const * __ptr64) */

AKRESULT __cdecl AK::SoundEngine::StartOutputCapture(wchar_t *param_1)

{
  __uint64 _Size;
  undefined2 uVar1;
  longlong lVar2;
  void *_Dst;
  
                    /* 0x4d489a0  324  ?StartOutputCapture@SoundEngine@AK@@YA?AW4AKRESULT@@PEB_W@Z
                        */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  if (param_1 != (wchar_t *)0x0) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (param_1[lVar2] != L'\0');
    if (lVar2 != 0) {
      _Size = lVar2 * 2 + 2;
      _Dst = MemoryMgr::Malloc(0,_Size);
      if (_Dst == (void *)0x0) {
        return 0x34;
      }
      uVar1 = FUN_145088070();
      lVar2 = FUN_145080f50(DAT_14c790fd8,0x2a,uVar1);
      *(void **)(lVar2 + 4) = _Dst;
      memcpy(_Dst,param_1,_Size);
      LOCK();
      *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
      UNLOCK();
      return 1;
    }
  }
  return 0x1f;
}



// FUNCTION 144d48a80 StopOutputCapture body=81 status=ok
// SIG AKRESULT StopOutputCapture(void)

/* enum AKRESULT __cdecl AK::SoundEngine::StopOutputCapture(void) */

AKRESULT __cdecl AK::SoundEngine::StopOutputCapture(void)

{
  undefined2 uVar1;
  longlong lVar2;
  
                    /* 0x4d48a80  330  ?StopOutputCapture@SoundEngine@AK@@YA?AW4AKRESULT@@XZ */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  uVar1 = FUN_145088070();
  lVar2 = FUN_145080f50(DAT_14c790fd8,0x2a,uVar1);
  *(undefined8 *)(lVar2 + 4) = 0;
  LOCK();
  *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
  UNLOCK();
  return 1;
}



// FUNCTION 144d48ae0 AddOutputCaptureMarker body=193 status=ok
// SIG AKRESULT AddOutputCaptureMarker(char * param_1)

/* enum AKRESULT __cdecl AK::SoundEngine::AddOutputCaptureMarker(char const * __ptr64) */

AKRESULT __cdecl AK::SoundEngine::AddOutputCaptureMarker(char *param_1)

{
  undefined2 uVar1;
  void *_Dst;
  longlong lVar2;
  longlong lVar3;
  
                    /* 0x4d48ae0  26  ?AddOutputCaptureMarker@SoundEngine@AK@@YA?AW4AKRESULT@@PEBD@Z
                        */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  if (*param_1 == '\0') {
    return 0x1f;
  }
  lVar2 = -1;
  do {
    lVar3 = lVar2;
    lVar2 = lVar3 + 1;
  } while (param_1[lVar3 + 1] != '\0');
  _Dst = MemoryMgr::Malloc(0,lVar3 + 2);
  if (_Dst == (void *)0x0) {
    return 0x34;
  }
  memcpy(_Dst,param_1,lVar3 + 2);
  uVar1 = FUN_145088080();
  lVar2 = FUN_145080f50(DAT_14c790fd8,0x2b,uVar1);
  *(void **)(lVar2 + 4) = _Dst;
  LOCK();
  *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
  UNLOCK();
  return 1;
}



// FUNCTION 144d48bb0 GetSampleRate body=7 status=ok
// SIG uint GetSampleRate(void)

/* unsigned int __cdecl AK::SoundEngine::GetSampleRate(void) */

uint __cdecl AK::SoundEngine::GetSampleRate(void)

{
                    /* 0x4d48bb0  121  ?GetSampleRate@SoundEngine@AK@@YAIXZ */
  return DAT_14c72f42c;
}



// FUNCTION 144d48bc0 RegisterCaptureCallback body=195 status=ok
// SIG AKRESULT RegisterCaptureCallback(_func_void_AkAudioBuffer_ptr___uint64_void_ptr * param_1, __uint64 param_2, void * param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::RegisterCaptureCallback(void (__cdecl*)(class
   AkAudioBuffer & __ptr64,unsigned __int64,void * __ptr64),unsigned __int64,void * __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::RegisterCaptureCallback
          (_func_void_AkAudioBuffer_ptr___uint64_void_ptr *param_1,__uint64 param_2,void *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  AKRESULT AVar4;
  undefined1 local_res20 [8];
  
                    /* 0x4d48bc0  226
                       ?RegisterCaptureCallback@SoundEngine@AK@@YA?AW4AKRESULT@@P6AXAEAVAkAudioBuffer@@_KPEAX@Z12@Z
                        */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  if (param_1 == (_func_void_AkAudioBuffer_ptr___uint64_void_ptr *)0x0) {
    return 0x1f;
  }
  FUN_1450719c0(local_res20);
  lVar2 = FUN_1450a19c0(param_2);
  if (lVar2 == 0) {
    AVar4 = 0x5d;
  }
  else {
    cVar1 = FUN_1450a09a0(lVar2,param_1,param_3);
    if (cVar1 == '\0') {
      lVar3 = FUN_1450a0db0(lVar2,param_1,param_3);
      if (lVar3 == 0) {
        AVar4 = 0x34;
        goto LAB_144d48c67;
      }
      FUN_1450a0e40(lVar2,lVar3);
    }
    AVar4 = 1;
  }
LAB_144d48c67:
  FUN_1450719f0(local_res20);
  return AVar4;
}



// FUNCTION 144d48c90 UnregisterCaptureCallback body=255 status=ok
// SIG AKRESULT UnregisterCaptureCallback(_func_void_AkAudioBuffer_ptr___uint64_void_ptr * param_1, __uint64 param_2, void * param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::UnregisterCaptureCallback(void (__cdecl*)(class
   AkAudioBuffer & __ptr64,unsigned __int64,void * __ptr64),unsigned __int64,void * __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::UnregisterCaptureCallback
          (_func_void_AkAudioBuffer_ptr___uint64_void_ptr *param_1,__uint64 param_2,void *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  AKRESULT AVar6;
  undefined1 local_res20 [8];
  
                    /* 0x4d48c90  354
                       ?UnregisterCaptureCallback@SoundEngine@AK@@YA?AW4AKRESULT@@P6AXAEAVAkAudioBuffer@@_KPEAX@Z12@Z
                        */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  if (param_1 == (_func_void_AkAudioBuffer_ptr___uint64_void_ptr *)0x0) {
    return 0x1f;
  }
  FUN_1450719c0(local_res20);
  lVar5 = FUN_1450a19c0(param_2);
  if (lVar5 == 0) {
    AVar6 = 0x5d;
  }
  else {
    lVar3 = *(longlong *)(lVar5 + 0x88);
    lVar2 = 0;
    while (lVar1 = lVar3, lVar1 != 0) {
      cVar4 = FUN_1450a0c90(lVar1,param_1,param_3);
      if (cVar4 != '\0') {
        if (lVar1 == *(longlong *)(lVar5 + 0x88)) {
          *(undefined8 *)(lVar5 + 0x88) = *(undefined8 *)(lVar1 + 8);
        }
        else {
          *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar1 + 8);
        }
        if (lVar1 == *(longlong *)(lVar5 + 0x80)) {
          *(longlong *)(lVar5 + 0x80) = lVar2;
        }
        FUN_1450a0e90(lVar5,lVar1);
        break;
      }
      lVar2 = lVar1;
      lVar3 = *(longlong *)(lVar1 + 8);
    }
    AVar6 = 1;
  }
  FUN_1450719f0(local_res20);
  return AVar6;
}



// FUNCTION 144d48d90 StartProfilerCapture body=6 status=ok
// SIG AKRESULT StartProfilerCapture(wchar_t * param_1)

/* enum AKRESULT __cdecl AK::SoundEngine::StartProfilerCapture(wchar_t const * __ptr64) */

AKRESULT __cdecl AK::SoundEngine::StartProfilerCapture(wchar_t *param_1)

{
                    /* 0x4d48d90  326  ?StartProfilerCapture@SoundEngine@AK@@YA?AW4AKRESULT@@PEB_W@Z
                        */
  return 4;
}



// FUNCTION 144d48da0 StopProfilerCapture body=6 status=ok
// SIG AKRESULT StopProfilerCapture(void)

/* enum AKRESULT __cdecl AK::SoundEngine::StopProfilerCapture(void) */

AKRESULT __cdecl AK::SoundEngine::StopProfilerCapture(void)

{
                    /* 0x4d48da0  333  ?StopProfilerCapture@SoundEngine@AK@@YA?AW4AKRESULT@@XZ */
  return 4;
}



// FUNCTION 144d48db0 SetOfflineRenderingFrameTime body=100 status=ok
// SIG AKRESULT SetOfflineRenderingFrameTime(float param_1)

/* enum AKRESULT __cdecl AK::SoundEngine::SetOfflineRenderingFrameTime(float) */

AKRESULT __cdecl AK::SoundEngine::SetOfflineRenderingFrameTime(float param_1)

{
  undefined2 uVar1;
  longlong lVar2;
  
                    /* 0x4d48db0  301
                       ?SetOfflineRenderingFrameTime@SoundEngine@AK@@YA?AW4AKRESULT@@M@Z */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  uVar1 = FUN_145088120();
  lVar2 = FUN_145080f50(DAT_14c790fd8,0x3d,uVar1);
  *(float *)(lVar2 + 8) = param_1;
  *(undefined2 *)(lVar2 + 4) = 0;
  LOCK();
  *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
  UNLOCK();
  return 1;
}



// FUNCTION 144d48e20 SetOfflineRendering body=90 status=ok
// SIG AKRESULT SetOfflineRendering(bool param_1)

/* enum AKRESULT __cdecl AK::SoundEngine::SetOfflineRendering(bool) */

AKRESULT __cdecl AK::SoundEngine::SetOfflineRendering(bool param_1)

{
  undefined2 uVar1;
  longlong lVar2;
  
                    /* 0x4d48e20  300  ?SetOfflineRendering@SoundEngine@AK@@YA?AW4AKRESULT@@_N@Z */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  uVar1 = FUN_145088120();
  lVar2 = FUN_145080f50(DAT_14c790fd8,0x3d,uVar1);
  *(ushort *)(lVar2 + 6) = (ushort)param_1;
  *(undefined2 *)(lVar2 + 4) = 1;
  LOCK();
  *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
  UNLOCK();
  return 1;
}



// FUNCTION 144d48e80 AddOutput body=552 status=ok
// SIG AKRESULT AddOutput(AkOutputSettings * param_1, __uint64 * param_2, __uint64 * param_3, uint param_4)

/* enum AKRESULT __cdecl AK::SoundEngine::AddOutput(struct AkOutputSettings const & __ptr64,unsigned
   __int64 * __ptr64,unsigned __int64 const * __ptr64,unsigned int) */

AKRESULT __cdecl
AK::SoundEngine::AddOutput
          (AkOutputSettings *param_1,__uint64 *param_2,__uint64 *param_3,uint param_4)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ushort uVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  
                    /* 0x4d48e80  25
                       ?AddOutput@SoundEngine@AK@@YA?AW4AKRESULT@@AEBUAkOutputSettings@@PEA_KPEB_KI@Z
                        */
  iVar4 = FUN_144d4cba0();
  lVar6 = DAT_14c791060;
  if (iVar4 != 1) {
    return 0x66;
  }
  if ((param_3 == (__uint64 *)0x0) || (param_4 != 0)) {
    uVar5 = *(uint *)param_1;
    plVar8 = (longlong *)0x0;
    if (uVar5 != 0) {
      do {
        while (iVar4 = *(int *)(lVar6 + 0x420), iVar4 < 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x428));
          if (*(int *)(lVar6 + 0x420) < 0) goto LAB_144d48f07;
          LeaveCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x428));
        }
        LOCK();
        bVar10 = iVar4 == *(int *)(lVar6 + 0x420);
        if (bVar10) {
          *(int *)(lVar6 + 0x420) = iVar4 + 1;
        }
        UNLOCK();
      } while (!bVar10);
LAB_144d48f07:
      plVar9 = plVar8;
      if (*(uint *)(lVar6 + 0x468) != 0) {
        for (plVar2 = *(longlong **)
                       (*(longlong *)(lVar6 + 0x460) +
                       ((ulonglong)uVar5 % (ulonglong)*(uint *)(lVar6 + 0x468)) * 8);
            (plVar9 = plVar8, plVar2 != (longlong *)0x0 &&
            (plVar9 = plVar2, *(uint *)(plVar2 + 2) != uVar5)); plVar2 = (longlong *)plVar2[1]) {
        }
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar9 + 0x14) = *(int *)((longlong)plVar9 + 0x14) + 1;
          UNLOCK();
        }
      }
      iVar4 = *(int *)(lVar6 + 0x420);
      while (-1 < iVar4) {
        LOCK();
        bVar10 = iVar4 == *(int *)(lVar6 + 0x420);
        if (bVar10) {
          *(int *)(lVar6 + 0x420) = iVar4 + -1;
        }
        UNLOCK();
        if (bVar10) {
          if ((iVar4 + -1 == 0) && (0 < *(int *)(lVar6 + 0x450))) {
            SetEvent(*(HANDLE *)(lVar6 + 0x458));
          }
          goto LAB_144d48fa4;
        }
        iVar4 = *(int *)(lVar6 + 0x420);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x428));
LAB_144d48fa4:
      if (plVar9 == (longlong *)0x0) {
        return 0xf;
      }
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0x14);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar9 + 0x18))(plVar9);
      }
    }
    if (param_2 != (__uint64 *)0x0) {
      *param_2 = *(__uint64 *)param_1;
    }
    uVar5 = *(uint *)(DAT_14c790fd8 + 0x30);
    if (0xffff < uVar5) {
      uVar5 = 0xffff;
    }
    if ((ushort)((short)param_4 * 8 + 0x24) <= uVar5) {
      lVar6 = FUN_145080f50(DAT_14c790fd8,0x1d);
      *(undefined4 *)(lVar6 + 0x14) = 0;
      *(uint *)(lVar6 + 0x18) = param_4;
      if (param_4 != 0) {
        do {
          uVar7 = (short)plVar8 + 1;
          *(__uint64 *)((longlong)plVar8 * 8 + 0x1c + lVar6) = param_3[(longlong)plVar8];
          plVar8 = (longlong *)(ulonglong)uVar7;
        } while (uVar7 < param_4);
      }
      uVar3 = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)(lVar6 + 4) = *(undefined8 *)param_1;
      *(undefined8 *)(lVar6 + 0xc) = uVar3;
      LOCK();
      *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
      UNLOCK();
      return 1;
    }
  }
  return 0x1f;
}



// FUNCTION 144d490b0 RemoveOutput body=84 status=ok
// SIG AKRESULT RemoveOutput(__uint64 param_1)

/* enum AKRESULT __cdecl AK::SoundEngine::RemoveOutput(unsigned __int64) */

AKRESULT __cdecl AK::SoundEngine::RemoveOutput(__uint64 param_1)

{
  undefined2 uVar1;
  longlong lVar2;
  
                    /* 0x4d490b0  239  ?RemoveOutput@SoundEngine@AK@@YA?AW4AKRESULT@@_K@Z */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  uVar1 = FUN_145087fd0();
  lVar2 = FUN_145080f50(DAT_14c790fd8,0x1e,uVar1);
  *(__uint64 *)(lVar2 + 4) = param_1;
  LOCK();
  *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
  UNLOCK();
  return 1;
}



// FUNCTION 144d49110 ReplaceOutput body=544 status=ok
// SIG AKRESULT ReplaceOutput(AkOutputSettings * param_1, __uint64 param_2, __uint64 * param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::ReplaceOutput(struct AkOutputSettings const &
   __ptr64,unsigned __int64,unsigned __int64 * __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::ReplaceOutput(AkOutputSettings *param_1,__uint64 param_2,__uint64 *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined2 uVar6;
  AKRESULT AVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  bool bVar11;
  undefined1 local_res20 [8];
  
                    /* 0x4d49110  241
                       ?ReplaceOutput@SoundEngine@AK@@YA?AW4AKRESULT@@AEBUAkOutputSettings@@_KPEA_K@Z
                        */
  lVar8 = DAT_14c791060;
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  uVar3 = *(uint *)param_1;
  iVar10 = 0xae0007;
  if (uVar3 != 0) {
    do {
      while (iVar10 = *(int *)(lVar8 + 0x420), iVar10 < 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x428));
        if (*(int *)(lVar8 + 0x420) < 0) goto LAB_144d49177;
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x428));
      }
      LOCK();
      bVar11 = iVar10 == *(int *)(lVar8 + 0x420);
      if (bVar11) {
        *(int *)(lVar8 + 0x420) = iVar10 + 1;
      }
      UNLOCK();
    } while (!bVar11);
LAB_144d49177:
    if (*(uint *)(lVar8 + 0x468) == 0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      for (plVar9 = *(longlong **)
                     (*(longlong *)(lVar8 + 0x460) +
                     ((ulonglong)uVar3 % (ulonglong)*(uint *)(lVar8 + 0x468)) * 8);
          plVar9 != (longlong *)0x0; plVar9 = (longlong *)plVar9[1]) {
        if (*(uint *)(plVar9 + 2) == uVar3) goto LAB_144d491a7;
      }
      plVar9 = (longlong *)0x0;
LAB_144d491a7:
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar9 + 0x14) = *(int *)((longlong)plVar9 + 0x14) + 1;
        UNLOCK();
      }
    }
    iVar10 = *(int *)(lVar8 + 0x420);
    while (-1 < iVar10) {
      LOCK();
      bVar11 = iVar10 == *(int *)(lVar8 + 0x420);
      if (bVar11) {
        *(int *)(lVar8 + 0x420) = iVar10 + -1;
      }
      UNLOCK();
      if (bVar11) {
        if ((iVar10 + -1 == 0) && (0 < *(int *)(lVar8 + 0x450))) {
          SetEvent(*(HANDLE *)(lVar8 + 0x458));
        }
        goto LAB_144d49214;
      }
      iVar10 = *(int *)(lVar8 + 0x420);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x428));
LAB_144d49214:
    if (plVar9 == (longlong *)0x0) {
      return 0xf;
    }
    iVar10 = (int)plVar9[7];
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0x14);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  FUN_1450719c0(local_res20);
  lVar8 = FUN_1450a19c0(param_2);
  FUN_1450719f0(local_res20);
  if (lVar8 == 0) {
    AVar7 = 0x5d;
  }
  else if ((((iVar10 == 0xae0007) && (*(int *)(param_1 + 4) != 0)) &&
           ((DAT_14c79c0b8 != 0 || (DAT_14c79c0b8 = FUN_1450a3890(), DAT_14c79c0b8 != 0)))) &&
          (cVar5 = FUN_1450a42e0(DAT_14c79c0b8,*(undefined4 *)(param_1 + 4)), cVar5 == '\0')) {
    AVar7 = 0x43;
  }
  else {
    if (param_3 != (__uint64 *)0x0) {
      *param_3 = *(__uint64 *)param_1;
    }
    uVar6 = FUN_145088110();
    lVar8 = FUN_145080f50(DAT_14c790fd8,0x1f,uVar6);
    uVar4 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(lVar8 + 4) = *(undefined8 *)param_1;
    *(undefined8 *)(lVar8 + 0xc) = uVar4;
    *(__uint64 *)(lVar8 + 0x14) = param_2;
    LOCK();
    *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
    UNLOCK();
    AVar7 = 1;
  }
  return AVar7;
}



// FUNCTION 144d49330 GetOutputID body=98 status=ok
// SIG __uint64 GetOutputID(uint param_1, uint param_2)

/* unsigned __int64 __cdecl AK::SoundEngine::GetOutputID(unsigned int,unsigned int) */

__uint64 __cdecl AK::SoundEngine::GetOutputID(uint param_1,uint param_2)

{
  longlong lVar1;
  __uint64 _Var2;
  uint local_res8 [2];
  uint local_res10 [2];
  undefined1 local_res18 [16];
  
                    /* 0x4d49330  107  ?GetOutputID@SoundEngine@AK@@YA_KII@Z */
  _Var2 = CONCAT44(param_2,param_1);
  if ((DAT_14c790ff4 != '\0') && ((param_1 == 0 || (param_2 == 0)))) {
    local_res8[0] = param_1;
    local_res10[0] = param_2;
    FUN_1450719c0(local_res18);
    lVar1 = FUN_1450a18e0(local_res8,local_res10,1);
    if (lVar1 != 0) {
      _Var2 = *(__uint64 *)(lVar1 + 0x30);
    }
    FUN_1450719f0(local_res18);
  }
  return _Var2;
}



// FUNCTION 144d493a0 GetOutputID body=193 status=ok
// SIG __uint64 GetOutputID(char * param_1, uint param_2)

/* unsigned __int64 __cdecl AK::SoundEngine::GetOutputID(char const * __ptr64,unsigned int) */

__uint64 __cdecl AK::SoundEngine::GetOutputID(char *param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  __uint64 _Var4;
  ulonglong uVar5;
  uint local_res8 [2];
  undefined1 local_res10 [8];
  int local_res18 [4];
  
                    /* 0x4d493a0  108  ?GetOutputID@SoundEngine@AK@@YA_KPEBDI@Z */
  if (param_1 == (char *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0x811c9dc5;
    bVar2 = *param_1;
    while (bVar2 != 0) {
      param_1 = param_1 + 1;
      bVar1 = bVar2 + 0x20;
      if (0x19 < (byte)(bVar2 + 0xbf)) {
        bVar1 = bVar2;
      }
      uVar5 = (ulonglong)((int)uVar5 * 0x1000193 ^ (uint)bVar1);
      bVar2 = *param_1;
    }
  }
  local_res18[0] = (int)uVar5;
  _Var4 = (ulonglong)param_2 << 0x20 | uVar5;
  if ((DAT_14c790ff4 != '\0') && ((local_res18[0] == 0 || (param_2 == 0)))) {
    local_res8[0] = param_2;
    FUN_1450719c0(local_res10);
    lVar3 = FUN_1450a18e0(local_res18,local_res8,1);
    if (lVar3 != 0) {
      _Var4 = *(__uint64 *)(lVar3 + 0x30);
    }
    FUN_1450719f0(local_res10);
  }
  return _Var4;
}



// FUNCTION 144d49470 GetOutputID body=107 status=ok
// SIG __uint64 GetOutputID(wchar_t * param_1, uint param_2)

/* unsigned __int64 __cdecl AK::SoundEngine::GetOutputID(wchar_t const * __ptr64,unsigned int) */

__uint64 __cdecl AK::SoundEngine::GetOutputID(wchar_t *param_1,uint param_2)

{
  longlong lVar1;
  __uint64 _Var2;
  undefined1 local_res10 [8];
  uint local_res18 [2];
  uint local_res20 [2];
  
  local_res18[0] = param_2;
                    /* 0x4d49470  109  ?GetOutputID@SoundEngine@AK@@YA_KPEB_WI@Z */
  local_res20[0] = GetIDFromString(param_1);
  _Var2 = CONCAT44(local_res18[0],local_res20[0]);
  if ((DAT_14c790ff4 != '\0') && ((local_res20[0] == 0 || (local_res18[0] == 0)))) {
    FUN_1450719c0(local_res10);
    lVar1 = FUN_1450a18e0(local_res20,local_res18,1);
    if (lVar1 != 0) {
      _Var2 = *(__uint64 *)(lVar1 + 0x30);
    }
    FUN_1450719f0(local_res10);
  }
  return _Var2;
}



// FUNCTION 144d494e0 SetBusDevice body=658 status=ok
// SIG AKRESULT SetBusDevice(uint param_1, uint param_2)

/* enum AKRESULT __cdecl AK::SoundEngine::SetBusDevice(unsigned int,unsigned int) */

AKRESULT __cdecl AK::SoundEngine::SetBusDevice(uint param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined2 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  
                    /* 0x4d494e0  271  ?SetBusDevice@SoundEngine@AK@@YA?AW4AKRESULT@@II@Z */
  lVar6 = DAT_14c791060;
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  do {
    while (iVar2 = *(int *)(lVar6 + 0x58), iVar2 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x60));
      if (*(int *)(lVar6 + 0x58) < 0) goto LAB_144d49531;
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x60));
    }
    LOCK();
    bVar9 = iVar2 == *(int *)(lVar6 + 0x58);
    if (bVar9) {
      *(int *)(lVar6 + 0x58) = iVar2 + 1;
    }
    UNLOCK();
  } while (!bVar9);
LAB_144d49531:
  plVar7 = (longlong *)0x0;
  plVar8 = plVar7;
  if (*(uint *)(lVar6 + 0xa0) != 0) {
    for (plVar5 = *(longlong **)
                   (*(longlong *)(lVar6 + 0x98) +
                   ((ulonglong)param_1 % (ulonglong)*(uint *)(lVar6 + 0xa0)) * 8);
        (plVar8 = plVar7, plVar5 != (longlong *)0x0 &&
        (plVar8 = plVar5, *(uint *)(plVar5 + 2) != param_1)); plVar5 = (longlong *)plVar5[1]) {
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar8 + 0x14) = *(int *)((longlong)plVar8 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar2 = *(int *)(lVar6 + 0x58);
  while (-1 < iVar2) {
    LOCK();
    bVar9 = iVar2 == *(int *)(lVar6 + 0x58);
    if (bVar9) {
      *(int *)(lVar6 + 0x58) = iVar2 + -1;
    }
    UNLOCK();
    if (bVar9) {
      if ((iVar2 + -1 == 0) && (0 < *(int *)(lVar6 + 0x88))) {
        SetEvent(*(HANDLE *)(lVar6 + 0x90));
      }
      goto LAB_144d495bb;
    }
    iVar2 = *(int *)(lVar6 + 0x58);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x60));
LAB_144d495bb:
  plVar5 = plVar8 + -2;
  if (plVar8 == (longlong *)0x0) {
    plVar5 = plVar7;
  }
  if (plVar5 != (longlong *)0x0) {
    lVar6 = plVar5[0x10];
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0x24);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(plVar5[2] + 0x18))();
    }
    lVar3 = DAT_14c791060;
    if (lVar6 != 0) {
      return 0x1f;
    }
    do {
      while (iVar2 = *(int *)(lVar3 + 0x420), iVar2 < 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x428));
        if (*(int *)(lVar3 + 0x420) < 0) goto LAB_144d49647;
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x428));
      }
      LOCK();
      bVar9 = iVar2 == *(int *)(lVar3 + 0x420);
      if (bVar9) {
        *(int *)(lVar3 + 0x420) = iVar2 + 1;
      }
      UNLOCK();
    } while (!bVar9);
LAB_144d49647:
    if (*(uint *)(lVar3 + 0x468) != 0) {
      for (plVar8 = *(longlong **)
                     (*(longlong *)(lVar3 + 0x460) +
                     ((ulonglong)param_2 % (ulonglong)*(uint *)(lVar3 + 0x468)) * 8);
          (plVar5 = plVar7, plVar8 != (longlong *)0x0 &&
          (plVar5 = plVar8, *(uint *)(plVar8 + 2) != param_2)); plVar8 = (longlong *)plVar8[1]) {
      }
      plVar7 = plVar5;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar5 + 0x14) = *(int *)((longlong)plVar5 + 0x14) + 1;
        UNLOCK();
      }
    }
    iVar2 = *(int *)(lVar3 + 0x420);
    while (-1 < iVar2) {
      LOCK();
      bVar9 = iVar2 == *(int *)(lVar3 + 0x420);
      if (bVar9) {
        *(int *)(lVar3 + 0x420) = iVar2 + -1;
      }
      UNLOCK();
      if (bVar9) {
        if ((iVar2 + -1 == 0) && (0 < *(int *)(lVar3 + 0x450))) {
          SetEvent(*(HANDLE *)(lVar3 + 0x458));
        }
        goto LAB_144d496e4;
      }
      iVar2 = *(int *)(lVar3 + 0x420);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x428));
LAB_144d496e4:
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0x14);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
      uVar4 = FUN_145088100();
      lVar6 = FUN_145080f50(DAT_14c790fd8,0x20,uVar4);
      *(uint *)(lVar6 + 4) = param_1;
      *(uint *)(lVar6 + 8) = param_2;
      LOCK();
      *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
      UNLOCK();
      return 1;
    }
  }
  return 0xf;
}



// FUNCTION 144d49780 SetBusDevice body=792 status=ok
// SIG AKRESULT SetBusDevice(char * param_1, char * param_2)

/* enum AKRESULT __cdecl AK::SoundEngine::SetBusDevice(char const * __ptr64,char const * __ptr64) */

AKRESULT __cdecl AK::SoundEngine::SetBusDevice(char *param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  undefined2 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  
                    /* 0x4d49780  272  ?SetBusDevice@SoundEngine@AK@@YA?AW4AKRESULT@@PEBD0@Z */
  lVar8 = DAT_14c791060;
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  plVar10 = (longlong *)0x811c9dc5;
  plVar12 = (longlong *)0x0;
  plVar9 = plVar12;
  if (param_1 != (char *)0x0) {
    plVar9 = (longlong *)0x811c9dc5;
    bVar4 = *param_1;
    while (bVar4 != 0) {
      param_1 = param_1 + 1;
      bVar3 = bVar4 + 0x20;
      if (0x19 < (byte)(bVar4 + 0xbf)) {
        bVar3 = bVar4;
      }
      plVar9 = (longlong *)(ulonglong)((int)plVar9 * 0x1000193 ^ (uint)bVar3);
      bVar4 = *param_1;
    }
  }
  plVar11 = plVar12;
  if (param_2 != (char *)0x0) {
    bVar4 = *param_2;
    while (plVar11 = plVar10, bVar4 != 0) {
      param_2 = param_2 + 1;
      bVar3 = bVar4 + 0x20;
      if (0x19 < (byte)(bVar4 + 0xbf)) {
        bVar3 = bVar4;
      }
      plVar10 = (longlong *)(ulonglong)((int)plVar10 * 0x1000193 ^ (uint)bVar3);
      bVar4 = *param_2;
    }
  }
  do {
    while (iVar2 = *(int *)(lVar8 + 0x58), iVar2 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x60));
      if (*(int *)(lVar8 + 0x58) < 0) goto LAB_144d49858;
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x60));
    }
    LOCK();
    bVar13 = iVar2 == *(int *)(lVar8 + 0x58);
    if (bVar13) {
      *(int *)(lVar8 + 0x58) = iVar2 + 1;
    }
    UNLOCK();
  } while (!bVar13);
LAB_144d49858:
  plVar10 = plVar12;
  if (*(uint *)(lVar8 + 0xa0) != 0) {
    for (plVar7 = *(longlong **)
                   (*(longlong *)(lVar8 + 0x98) +
                   ((ulonglong)plVar9 % (ulonglong)*(uint *)(lVar8 + 0xa0)) * 8);
        (plVar10 = plVar12, plVar7 != (longlong *)0x0 &&
        (plVar10 = plVar7, (int)plVar7[2] != (int)plVar9)); plVar7 = (longlong *)plVar7[1]) {
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar10 + 0x14) = *(int *)((longlong)plVar10 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar2 = *(int *)(lVar8 + 0x58);
  while (-1 < iVar2) {
    LOCK();
    bVar13 = iVar2 == *(int *)(lVar8 + 0x58);
    if (bVar13) {
      *(int *)(lVar8 + 0x58) = iVar2 + -1;
    }
    UNLOCK();
    if (bVar13) {
      if ((iVar2 + -1 == 0) && (0 < *(int *)(lVar8 + 0x88))) {
        SetEvent(*(HANDLE *)(lVar8 + 0x90));
      }
      goto LAB_144d498db;
    }
    iVar2 = *(int *)(lVar8 + 0x58);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x60));
LAB_144d498db:
  plVar7 = plVar10 + -2;
  if (plVar10 == (longlong *)0x0) {
    plVar7 = plVar12;
  }
  if (plVar7 != (longlong *)0x0) {
    lVar8 = plVar7[0x10];
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0x24);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(plVar7[2] + 0x18))();
    }
    lVar5 = DAT_14c791060;
    if (lVar8 != 0) {
      return 0x1f;
    }
    do {
      while (iVar2 = *(int *)(lVar5 + 0x420), iVar2 < 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x428));
        if (*(int *)(lVar5 + 0x420) < 0) goto LAB_144d49967;
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x428));
      }
      LOCK();
      bVar13 = iVar2 == *(int *)(lVar5 + 0x420);
      if (bVar13) {
        *(int *)(lVar5 + 0x420) = iVar2 + 1;
      }
      UNLOCK();
    } while (!bVar13);
LAB_144d49967:
    if (*(uint *)(lVar5 + 0x468) != 0) {
      for (plVar10 = *(longlong **)
                      (*(longlong *)(lVar5 + 0x460) +
                      ((ulonglong)plVar11 % (ulonglong)*(uint *)(lVar5 + 0x468)) * 8);
          (plVar7 = plVar12, plVar10 != (longlong *)0x0 &&
          (plVar7 = plVar10, (int)plVar10[2] != (int)plVar11)); plVar10 = (longlong *)plVar10[1]) {
      }
      plVar12 = plVar7;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar7 + 0x14) = *(int *)((longlong)plVar7 + 0x14) + 1;
        UNLOCK();
      }
    }
    iVar2 = *(int *)(lVar5 + 0x420);
    while (-1 < iVar2) {
      LOCK();
      bVar13 = iVar2 == *(int *)(lVar5 + 0x420);
      if (bVar13) {
        *(int *)(lVar5 + 0x420) = iVar2 + -1;
      }
      UNLOCK();
      if (bVar13) {
        if ((iVar2 + -1 == 0) && (0 < *(int *)(lVar5 + 0x450))) {
          SetEvent(*(HANDLE *)(lVar5 + 0x458));
        }
        goto LAB_144d49a04;
      }
      iVar2 = *(int *)(lVar5 + 0x420);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x428));
LAB_144d49a04:
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0x14);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
      uVar6 = FUN_145088100();
      lVar8 = FUN_145080f50(DAT_14c790fd8,0x20,uVar6);
      *(int *)(lVar8 + 4) = (int)plVar9;
      *(int *)(lVar8 + 8) = (int)plVar11;
      LOCK();
      *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
      UNLOCK();
      return 1;
    }
  }
  return 0xf;
}



// FUNCTION 144d49aa0 SetBusDevice body=921 status=ok
// SIG AKRESULT SetBusDevice(wchar_t * param_1, wchar_t * param_2)

/* enum AKRESULT __cdecl AK::SoundEngine::SetBusDevice(wchar_t const * __ptr64,wchar_t const *
   __ptr64) */

AKRESULT __cdecl AK::SoundEngine::SetBusDevice(wchar_t *param_1,wchar_t *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  AKRESULT AVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  CHAR local_128 [272];
  
                    /* 0x4d49aa0  273  ?SetBusDevice@SoundEngine@AK@@YA?AW4AKRESULT@@PEB_W0@Z */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  uVar4 = GetIDFromString(param_1);
  uVar5 = GetIDFromString(param_2);
  lVar10 = DAT_14c791060;
  do {
    while (iVar6 = *(int *)(lVar10 + 0x58), iVar6 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar10 + 0x60));
      if (*(int *)(lVar10 + 0x58) < 0) goto LAB_144d49b21;
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar10 + 0x60));
    }
    LOCK();
    bVar13 = iVar6 == *(int *)(lVar10 + 0x58);
    if (bVar13) {
      *(int *)(lVar10 + 0x58) = iVar6 + 1;
    }
    UNLOCK();
  } while (!bVar13);
LAB_144d49b21:
  plVar11 = (longlong *)0x0;
  plVar12 = plVar11;
  if (*(uint *)(lVar10 + 0xa0) != 0) {
    for (plVar8 = *(longlong **)
                   (*(longlong *)(lVar10 + 0x98) +
                   ((ulonglong)uVar4 % (ulonglong)*(uint *)(lVar10 + 0xa0)) * 8);
        (plVar12 = plVar11, plVar8 != (longlong *)0x0 &&
        (plVar12 = plVar8, *(uint *)(plVar8 + 2) != uVar4)); plVar8 = (longlong *)plVar8[1]) {
    }
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar12 + 0x14) = *(int *)((longlong)plVar12 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar6 = *(int *)(lVar10 + 0x58);
  while (-1 < iVar6) {
    LOCK();
    bVar13 = iVar6 == *(int *)(lVar10 + 0x58);
    if (bVar13) {
      *(int *)(lVar10 + 0x58) = iVar6 + -1;
    }
    UNLOCK();
    if (bVar13) {
      if ((iVar6 + -1 == 0) && (0 < *(int *)(lVar10 + 0x88))) {
        SetEvent(*(HANDLE *)(lVar10 + 0x90));
      }
      goto LAB_144d49bab;
    }
    iVar6 = *(int *)(lVar10 + 0x58);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar10 + 0x60));
LAB_144d49bab:
  lVar10 = -1;
  plVar8 = plVar12 + -2;
  if (plVar12 == (longlong *)0x0) {
    plVar8 = plVar11;
  }
  if (plVar8 == (longlong *)0x0) {
    lVar9 = -1;
    do {
      lVar9 = lVar9 + 1;
    } while (param_1[lVar9] != L'\0');
    if ((uint)lVar9 < 0x102) {
      do {
        lVar10 = lVar10 + 1;
      } while (param_1[lVar10] != L'\0');
    }
    else {
      lVar10 = 0x102;
    }
    iVar6 = WideCharToMultiByte(0xfde9,0,param_1,(int)lVar10,local_128,0x103,(LPCSTR)0x0,(LPBOOL)0x0
                               );
    AVar7 = 0xf;
    local_128[iVar6] = '\0';
  }
  else {
    lVar9 = plVar8[0x10];
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0x24);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      (**(code **)(plVar8[2] + 0x18))();
    }
    lVar2 = DAT_14c791060;
    if (lVar9 == 0) {
      do {
        while (iVar6 = *(int *)(lVar2 + 0x420), iVar6 < 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x428));
          if (*(int *)(lVar2 + 0x420) < 0) goto LAB_144d49c9a;
          LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x428));
        }
        LOCK();
        bVar13 = iVar6 == *(int *)(lVar2 + 0x420);
        if (bVar13) {
          *(int *)(lVar2 + 0x420) = iVar6 + 1;
        }
        UNLOCK();
      } while (!bVar13);
LAB_144d49c9a:
      if (*(uint *)(lVar2 + 0x468) != 0) {
        for (plVar12 = *(longlong **)
                        (*(longlong *)(lVar2 + 0x460) +
                        ((ulonglong)uVar5 % (ulonglong)*(uint *)(lVar2 + 0x468)) * 8);
            (plVar8 = plVar11, plVar12 != (longlong *)0x0 &&
            (plVar8 = plVar12, *(uint *)(plVar12 + 2) != uVar5)); plVar12 = (longlong *)plVar12[1])
        {
        }
        plVar11 = plVar8;
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar8 + 0x14) = *(int *)((longlong)plVar8 + 0x14) + 1;
          UNLOCK();
        }
      }
      iVar6 = *(int *)(lVar2 + 0x420);
      while (-1 < iVar6) {
        LOCK();
        bVar13 = iVar6 == *(int *)(lVar2 + 0x420);
        if (bVar13) {
          *(int *)(lVar2 + 0x420) = iVar6 + -1;
        }
        UNLOCK();
        if (bVar13) {
          if ((iVar6 + -1 == 0) && (0 < *(int *)(lVar2 + 0x450))) {
            SetEvent(*(HANDLE *)(lVar2 + 0x458));
          }
          goto LAB_144d49d34;
        }
        iVar6 = *(int *)(lVar2 + 0x420);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x428));
LAB_144d49d34:
      if (plVar11 == (longlong *)0x0) {
        lVar9 = -1;
        do {
          lVar9 = lVar9 + 1;
        } while (param_2[lVar9] != L'\0');
        if ((uint)lVar9 < 0x102) {
          do {
            lVar10 = lVar10 + 1;
          } while (param_2[lVar10] != L'\0');
        }
        else {
          lVar10 = 0x102;
        }
        iVar6 = WideCharToMultiByte(0xfde9,0,param_2,(int)lVar10,local_128,0x103,(LPCSTR)0x0,
                                    (LPBOOL)0x0);
        AVar7 = 0xf;
        local_128[iVar6] = '\0';
      }
      else {
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0x14);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar11 + 0x18))(plVar11);
        }
        uVar3 = FUN_145088100();
        lVar10 = FUN_145080f50(DAT_14c790fd8,0x20,uVar3);
        *(uint *)(lVar10 + 4) = uVar4;
        *(uint *)(lVar10 + 8) = uVar5;
        LOCK();
        *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
        UNLOCK();
        AVar7 = 1;
      }
    }
    else {
      AVar7 = 0x1f;
    }
  }
  return AVar7;
}



// FUNCTION 144d49e40 GetDeviceList body=306 status=ok
// SIG AKRESULT GetDeviceList(uint param_1, uint param_2, uint * param_3, AkDeviceDescription * param_4)

/* enum AKRESULT __cdecl AK::SoundEngine::GetDeviceList(unsigned int,unsigned int,unsigned int &
   __ptr64,struct AkDeviceDescription * __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::GetDeviceList(uint param_1,uint param_2,uint *param_3,AkDeviceDescription *param_4)

{
  AKRESULT AVar1;
  int *piVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  
                    /* 0x4d49e40  84
                       ?GetDeviceList@SoundEngine@AK@@YA?AW4AKRESULT@@IIAEAIPEAUAkDeviceDescription@@@Z
                        */
  iVar5 = (param_2 * 0x1000 + param_1) * 0x10 + 7;
  if (param_1 == 0) {
    if (param_2 - 0xae < 7) {
      AVar1 = FUN_1450aaf80(param_2,param_3,param_4);
      goto LAB_144d49f5b;
    }
    if (param_2 == 0xb5) goto LAB_144d49e97;
  }
  for (piVar2 = DAT_14c79be48;
      (piVar2 != DAT_14c79be48 + (ulonglong)DAT_14c79be50 * 8 && (*piVar2 != iVar5));
      piVar2 = piVar2 + 8) {
  }
  piVar4 = piVar2 + 2;
  if (piVar2 == DAT_14c79be48 + (ulonglong)DAT_14c79be50 * 8) {
    piVar4 = (int *)0x0;
  }
  if (piVar4 == (int *)0x0) {
    for (piVar2 = DAT_14c79be58;
        (piVar2 != DAT_14c79be58 + (ulonglong)DAT_14c79be60 * 10 && (*piVar2 != iVar5));
        piVar2 = piVar2 + 10) {
    }
    piVar4 = piVar2 + 2;
    if (piVar2 == DAT_14c79be58 + (ulonglong)DAT_14c79be60 * 10) {
      piVar4 = (int *)0x0;
    }
    if (piVar4 == (int *)0x0) goto LAB_144d49f2f;
  }
  lVar3 = FUN_145089290(iVar5);
  if (lVar3 != 0) {
    if (*(code **)(lVar3 + 0x10) == (code *)0x0) {
LAB_144d49e97:
      *param_3 = 0;
      return 0;
    }
    AVar1 = (**(code **)(lVar3 + 0x10))(param_3,param_4);
LAB_144d49f5b:
    if (AVar1 != 1) {
      *param_3 = 0;
    }
    return AVar1;
  }
LAB_144d49f2f:
  *param_3 = 0;
  return 0x58;
}



// FUNCTION 144d49f80 GetDeviceList body=396 status=ok
// SIG AKRESULT GetDeviceList(uint param_1, uint * param_2, AkDeviceDescription * param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::GetDeviceList(unsigned int,unsigned int & __ptr64,struct
   AkDeviceDescription * __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::GetDeviceList(uint param_1,uint *param_2,AkDeviceDescription *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  AKRESULT AVar5;
  longlong *plVar6;
  bool bVar7;
  
                    /* 0x4d49f80  83
                       ?GetDeviceList@SoundEngine@AK@@YA?AW4AKRESULT@@IAEAIPEAUAkDeviceDescription@@@Z
                        */
  lVar4 = DAT_14c791060;
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  if (param_1 == 0) {
    return 0xe;
  }
  do {
    while (iVar2 = *(int *)(lVar4 + 0x420), iVar2 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x428));
      if (*(int *)(lVar4 + 0x420) < 0) goto LAB_144d49ff7;
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x428));
    }
    LOCK();
    bVar7 = iVar2 == *(int *)(lVar4 + 0x420);
    if (bVar7) {
      *(int *)(lVar4 + 0x420) = iVar2 + 1;
    }
    UNLOCK();
  } while (!bVar7);
LAB_144d49ff7:
  if (*(uint *)(lVar4 + 0x468) == 0) {
    plVar6 = (longlong *)0x0;
  }
  else {
    for (plVar6 = *(longlong **)
                   (*(longlong *)(lVar4 + 0x460) +
                   ((ulonglong)param_1 % (ulonglong)*(uint *)(lVar4 + 0x468)) * 8);
        plVar6 != (longlong *)0x0; plVar6 = (longlong *)plVar6[1]) {
      if (*(uint *)(plVar6 + 2) == param_1) goto LAB_144d4a027;
    }
    plVar6 = (longlong *)0x0;
LAB_144d4a027:
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar6 + 0x14) = *(int *)((longlong)plVar6 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar2 = *(int *)(lVar4 + 0x420);
  do {
    if (iVar2 < 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x428));
LAB_144d4a094:
      if (plVar6 == (longlong *)0x0) {
        AVar5 = 0xf;
      }
      else {
        uVar3 = *(uint *)(plVar6 + 7);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0x14);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar6 + 0x18))(plVar6);
        }
        AVar5 = GetDeviceList(uVar3 >> 4 & 0xfff,uVar3 >> 0x10,param_2,param_3);
      }
      return AVar5;
    }
    LOCK();
    bVar7 = iVar2 == *(int *)(lVar4 + 0x420);
    if (bVar7) {
      *(int *)(lVar4 + 0x420) = iVar2 + -1;
    }
    UNLOCK();
    if (bVar7) {
      if ((iVar2 + -1 == 0) && (0 < *(int *)(lVar4 + 0x450))) {
        SetEvent(*(HANDLE *)(lVar4 + 0x458));
      }
      goto LAB_144d4a094;
    }
    iVar2 = *(int *)(lVar4 + 0x420);
  } while( true );
}



// FUNCTION 144d4a110 SetOutputVolume body=138 status=ok
// SIG AKRESULT SetOutputVolume(__uint64 param_1, float param_2)

/* enum AKRESULT __cdecl AK::SoundEngine::SetOutputVolume(unsigned __int64,float) */

AKRESULT __cdecl AK::SoundEngine::SetOutputVolume(__uint64 param_1,float param_2)

{
  undefined2 uVar1;
  longlong lVar2;
  
                    /* 0x4d4a110  303  ?SetOutputVolume@SoundEngine@AK@@YA?AW4AKRESULT@@_KM@Z */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  if (0x7f7fffff < (uint)ABS(param_2)) {
    return 0x5f;
  }
  uVar1 = FUN_145087f70();
  lVar2 = FUN_145080f50(DAT_14c790fd8,0x17,uVar1);
  *(float *)(lVar2 + 0xc) = param_2;
  *(__uint64 *)(lVar2 + 4) = param_1;
  LOCK();
  *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
  UNLOCK();
  return 1;
}



// FUNCTION 144d4a1a0 Suspend body=46 status=ok
// SIG AKRESULT Suspend(bool param_1, bool param_2)

/* enum AKRESULT __cdecl AK::SoundEngine::Suspend(bool,bool) */

AKRESULT __cdecl AK::SoundEngine::Suspend(bool param_1,bool param_2)

{
  AKRESULT AVar1;
  undefined4 uVar2;
  
                    /* 0x4d4a1a0  335  ?Suspend@SoundEngine@AK@@YA?AW4AKRESULT@@_N0@Z */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  uVar2 = 0;
  if (param_2) {
    uVar2 = DAT_14c72f428;
  }
  AVar1 = FUN_145083d00(DAT_14c790fd8,1,param_1,uVar2);
  return AVar1;
}



// FUNCTION 144d4a1d0 WakeupFromSuspend body=35 status=ok
// SIG AKRESULT WakeupFromSuspend(uint param_1)

/* enum AKRESULT __cdecl AK::SoundEngine::WakeupFromSuspend(unsigned int) */

AKRESULT __cdecl AK::SoundEngine::WakeupFromSuspend(uint param_1)

{
  AKRESULT AVar1;
  
                    /* 0x4d4a1d0  360  ?WakeupFromSuspend@SoundEngine@AK@@YA?AW4AKRESULT@@I@Z */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  AVar1 = FUN_145083d00(DAT_14c790fd8,0,1,param_1);
  return AVar1;
}



// FUNCTION 144d4a200 GetBufferTick body=26 status=ok
// SIG uint GetBufferTick(void)

/* unsigned int __cdecl AK::SoundEngine::GetBufferTick(void) */

uint __cdecl AK::SoundEngine::GetBufferTick(void)

{
                    /* 0x4d4a200  68  ?GetBufferTick@SoundEngine@AK@@YAIXZ */
  if (DAT_14c790ff4 == '\0') {
    return 0;
  }
  return *(uint *)(DAT_14c790fd8 + 0x88);
}



// FUNCTION 144d4a220 GetSampleTick body=37 status=ok
// SIG __uint64 GetSampleTick(void)

/* unsigned __int64 __cdecl AK::SoundEngine::GetSampleTick(void) */

__uint64 __cdecl AK::SoundEngine::GetSampleTick(void)

{
                    /* 0x4d4a220  122  ?GetSampleTick@SoundEngine@AK@@YA_KXZ */
  if (DAT_14c790ff4 == '\0') {
    return 0;
  }
  return (ulonglong)*(uint *)(DAT_14c790fd8 + 0x88) * (ulonglong)DAT_14c72f434;
}



// FUNCTION 144d4a250 FUN_144d4a250 body=518 status=ok
// SIG undefined FUN_144d4a250(void)

undefined8 FUN_144d4a250(uint param_1,longlong param_2,longlong *param_3,undefined4 *param_4)

{
  longlong lVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  longlong lVar9;
  void *_Dst;
  longlong *plVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_58 [8];
  undefined1 local_50 [24];
  
  uVar12 = 0;
  *param_4 = 0;
  puVar8 = AK::MemoryMgr::Malloc(0,(ulonglong)((param_1 - 1) * 0x20 + 0x28));
  *param_3 = (longlong)puVar8;
  if (puVar8 == (undefined4 *)0x0) {
    return 0x34;
  }
  *puVar8 = 1;
  *(uint *)(*param_3 + 4) = param_1;
  if (param_1 != 0) {
    plVar10 = (longlong *)(param_2 + 8);
    do {
      uVar3 = *(undefined4 *)((longlong)plVar10 + -4);
      lVar9 = *plVar10;
      uVar4 = *(undefined4 *)((longlong)plVar10 + 4);
      lVar5 = *param_3 + (-8 - param_2);
      *(int *)((longlong)plVar10 + lVar5 + 8) = (int)plVar10[-1];
      *(undefined4 *)((longlong)plVar10 + lVar5 + 0xc) = uVar3;
      *(int *)((longlong)plVar10 + lVar5 + 0x10) = (int)lVar9;
      *(undefined4 *)((longlong)plVar10 + lVar5 + 0x14) = uVar4;
      uVar3 = *(undefined4 *)((longlong)plVar10 + 0xc);
      lVar9 = plVar10[2];
      uVar4 = *(undefined4 *)((longlong)plVar10 + 0x14);
      *(int *)((longlong)plVar10 + lVar5 + 0x18) = (int)plVar10[1];
      *(undefined4 *)((longlong)plVar10 + lVar5 + 0x1c) = uVar3;
      *(int *)((longlong)plVar10 + lVar5 + 0x20) = (int)lVar9;
      *(undefined4 *)((longlong)plVar10 + lVar5 + 0x24) = uVar4;
      if (*plVar10 == 0) {
        lVar9 = *(longlong *)((longlong)plVar10 + lVar5 + 0x18);
        if (lVar9 != 0) {
          iVar7 = *(int *)((longlong)plVar10 + lVar5 + 0x20);
          if (iVar7 == 0) {
            *param_4 = 0x61;
            uVar11 = 0x1f;
            goto LAB_144d4a40b;
          }
          iVar7 = FUN_1450731d0(lVar9,iVar7,local_50,0,local_58,local_res20,local_res18,local_res8,0
                                ,0,0);
          if (iVar7 != 1) {
            *param_4 = 0x10;
          }
        }
      }
      else {
        lVar9 = -1;
        do {
          lVar1 = lVar9 * 2;
          lVar9 = lVar9 + 1;
        } while (*(short *)(*plVar10 + 2 + lVar1) != 0);
        uVar6 = (int)lVar9 * 2 + 2;
        _Dst = AK::MemoryMgr::Malloc(0,(ulonglong)uVar6);
        *(void **)((longlong)plVar10 + lVar5 + 0x10) = _Dst;
        if (_Dst == (void *)0x0) {
          uVar11 = 0x34;
LAB_144d4a40b:
          *(uint *)(*param_3 + 4) = uVar12;
          piVar2 = (int *)*param_3;
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            uVar12 = 0;
            if (piVar2[1] != 0) {
              do {
                if (*(void **)(piVar2 + (ulonglong)uVar12 * 8 + 4) != (void *)0x0) {
                  AK::MemoryMgr::Free(0,*(void **)(piVar2 + (ulonglong)uVar12 * 8 + 4));
                }
                uVar12 = uVar12 + 1;
              } while (uVar12 < (uint)piVar2[1]);
            }
            AK::MemoryMgr::Free(0,piVar2);
          }
          *param_3 = 0;
          return uVar11;
        }
        memcpy(_Dst,(void *)*plVar10,(ulonglong)uVar6);
      }
      uVar12 = uVar12 + 1;
      plVar10 = plVar10 + 4;
    } while (uVar12 < param_1);
  }
  return 1;
}



// FUNCTION 144d4a460 FUN_144d4a460 body=83 status=ok
// SIG undefined FUN_144d4a460(void)

void FUN_144d4a460(int *param_1)

{
  uint uVar1;
  
  *param_1 = *param_1 + -1;
  if (*param_1 == 0) {
    uVar1 = 0;
    if (param_1[1] != 0) {
      do {
        if (*(void **)(param_1 + (ulonglong)uVar1 * 8 + 4) != (void *)0x0) {
          AK::MemoryMgr::Free(0,*(void **)(param_1 + (ulonglong)uVar1 * 8 + 4));
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < (uint)param_1[1]);
    }
    AK::MemoryMgr::Free(0,param_1);
  }
  return;
}



// FUNCTION 144d4a4c0 FUN_144d4a4c0 body=8 status=ok
// SIG undefined FUN_144d4a4c0(void)

void FUN_144d4a4c0(undefined8 param_1)

{
  DAT_14c791078 = param_1;
  return;
}



// FUNCTION 144d4a4d0 Open body=399 status=ok
// SIG uint Open(__uint64 param_1, uint param_2, _func_void_AkCallbackType_AkCallbackInfo_ptr * param_3, void * param_4, DynamicSequenceType param_5)

/* unsigned int __cdecl AK::SoundEngine::DynamicSequence::Open(unsigned __int64,unsigned int,void
   (__cdecl*)(enum AkCallbackType,struct AkCallbackInfo * __ptr64),void * __ptr64,enum
   AK::SoundEngine::DynamicSequence::DynamicSequenceType) */

uint __cdecl
AK::SoundEngine::DynamicSequence::Open
          (__uint64 param_1,uint param_2,_func_void_AkCallbackType_AkCallbackInfo_ptr *param_3,
          void *param_4,DynamicSequenceType param_5)

{
  int *piVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 local_48 [8];
  int *local_40;
  
                    /* 0x4d4a4d0  171
                       ?Open@DynamicSequence@SoundEngine@AK@@YAI_KIP6AXW4AkCallbackType@@PEAUAkCallbackInfo@@@ZPEAXW4DynamicSequenceType@123@@Z
                        */
  lVar6 = DAT_14c791060;
  if (DAT_14c790ff4 != '\0') {
    LOCK();
    UNLOCK();
    uVar7 = g_PlayingID + 1;
    g_PlayingID = g_PlayingID + 1;
    FUN_144d41d30(&local_40,DAT_14c791060 + 0x2c0);
    plVar5 = (longlong *)FUN_1450ae0b0(uVar7,param_5);
    if (plVar5 != (longlong *)0x0) {
      *(uint *)(plVar5 + 2) = uVar7;
      cVar2 = FUN_144d41e40(lVar6 + 0x300,plVar5,local_48);
      if (cVar2 == '\0') {
        *(undefined4 *)(plVar5 + 2) = 0;
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0x14);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar5 + 0x18))(plVar5);
        }
        plVar5 = (longlong *)0x0;
      }
    }
    LOCK();
    *local_40 = *local_40 + 1;
    UNLOCK();
    if (*local_40 == 0) {
      local_40[1] = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(local_40 + 2));
    if (plVar5 != (longlong *)0x0) {
      uVar3 = FUN_145087f80();
      lVar6 = FUN_145080f50(DAT_14c790fd8,0x18,uVar3);
      *(uint *)(lVar6 + 0xc) = uVar7;
      *(undefined4 *)(lVar6 + 0x10) = 0;
      *(longlong **)(lVar6 + 0x28) = plVar5;
      *(__uint64 *)(lVar6 + 4) = param_1;
      *(undefined8 *)(lVar6 + 0x1c) = 0;
      *(undefined4 *)(lVar6 + 0x24) = 0;
      *(undefined8 *)(lVar6 + 0x14) = 0;
      iVar4 = FUN_1450b20a0(DAT_14c790fc0,(__uint64 *)(lVar6 + 4),param_3,param_4,param_2,0);
      if (iVar4 != 1) {
        plVar5 = *(longlong **)(lVar6 + 0x28);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0x14);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar5 + 0x18))();
        }
        *(undefined2 *)(lVar6 + 2) = 0x41;
        uVar7 = 0;
      }
      LOCK();
      *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
      UNLOCK();
      return uVar7;
    }
  }
  return 0;
}



// FUNCTION 144d4a660 Close body=134 status=ok
// SIG AKRESULT Close(uint param_1)

/* enum AKRESULT __cdecl AK::SoundEngine::DynamicSequence::Close(unsigned int) */

AKRESULT __cdecl AK::SoundEngine::DynamicSequence::Close(uint param_1)

{
  undefined2 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 in_register_0000000c;
  
                    /* 0x4d4a660  44  ?Close@DynamicSequence@SoundEngine@AK@@YA?AW4AKRESULT@@I@Z */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  lVar2 = FUN_144d4cc80(CONCAT44(in_register_0000000c,param_1));
  if (lVar2 != 0) {
    uVar1 = FUN_145087f90();
    lVar3 = FUN_145080f50(DAT_14c790fd8,0x19,uVar1);
    *(longlong *)(lVar3 + 4) = lVar2;
    *(undefined1 *)(lVar2 + 0x78) = 1;
    *(undefined8 *)(lVar3 + 0xc) = 3;
    *(undefined4 *)(lVar3 + 0x14) = 4;
    LOCK();
    *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
    UNLOCK();
    return 1;
  }
  return 0x5e;
}



// FUNCTION 144d4a6f0 Play body=157 status=ok
// SIG AKRESULT Play(uint param_1, int param_2, AkCurveInterpolation param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::DynamicSequence::Play(unsigned int,int,enum
   AkCurveInterpolation) */

AKRESULT __cdecl
AK::SoundEngine::DynamicSequence::Play(uint param_1,int param_2,AkCurveInterpolation param_3)

{
  undefined2 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 in_register_0000000c;
  
                    /* 0x4d4a6f0  177
                       ?Play@DynamicSequence@SoundEngine@AK@@YA?AW4AKRESULT@@IHW4AkCurveInterpolation@@@Z
                        */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  lVar2 = FUN_144d4cc80(CONCAT44(in_register_0000000c,param_1));
  if (lVar2 != 0) {
    uVar1 = FUN_145087f90();
    lVar3 = FUN_145080f50(DAT_14c790fd8,0x19,uVar1);
    *(longlong *)(lVar3 + 4) = lVar2;
    *(undefined4 *)(lVar3 + 0xc) = 0;
    *(int *)(lVar3 + 0x10) = param_2;
    *(AkCurveInterpolation *)(lVar3 + 0x14) = param_3;
    LOCK();
    *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
    UNLOCK();
    return 1;
  }
  return 0x5e;
}



// FUNCTION 144d4a790 Pause body=157 status=ok
// SIG AKRESULT Pause(uint param_1, int param_2, AkCurveInterpolation param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::DynamicSequence::Pause(unsigned int,int,enum
   AkCurveInterpolation) */

AKRESULT __cdecl
AK::SoundEngine::DynamicSequence::Pause(uint param_1,int param_2,AkCurveInterpolation param_3)

{
  undefined2 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 in_register_0000000c;
  
                    /* 0x4d4a790  172
                       ?Pause@DynamicSequence@SoundEngine@AK@@YA?AW4AKRESULT@@IHW4AkCurveInterpolation@@@Z
                        */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  lVar2 = FUN_144d4cc80(CONCAT44(in_register_0000000c,param_1));
  if (lVar2 != 0) {
    uVar1 = FUN_145087f90();
    lVar3 = FUN_145080f50(DAT_14c790fd8,0x19,uVar1);
    *(longlong *)(lVar3 + 4) = lVar2;
    *(undefined4 *)(lVar3 + 0xc) = 1;
    *(int *)(lVar3 + 0x10) = param_2;
    *(AkCurveInterpolation *)(lVar3 + 0x14) = param_3;
    LOCK();
    *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
    UNLOCK();
    return 1;
  }
  return 0x5e;
}



// FUNCTION 144d4a830 Resume body=157 status=ok
// SIG AKRESULT Resume(uint param_1, int param_2, AkCurveInterpolation param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::DynamicSequence::Resume(unsigned int,int,enum
   AkCurveInterpolation) */

AKRESULT __cdecl
AK::SoundEngine::DynamicSequence::Resume(uint param_1,int param_2,AkCurveInterpolation param_3)

{
  undefined2 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 in_register_0000000c;
  
                    /* 0x4d4a830  255
                       ?Resume@DynamicSequence@SoundEngine@AK@@YA?AW4AKRESULT@@IHW4AkCurveInterpolation@@@Z
                        */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  lVar2 = FUN_144d4cc80(CONCAT44(in_register_0000000c,param_1));
  if (lVar2 != 0) {
    uVar1 = FUN_145087f90();
    lVar3 = FUN_145080f50(DAT_14c790fd8,0x19,uVar1);
    *(longlong *)(lVar3 + 4) = lVar2;
    *(undefined4 *)(lVar3 + 0xc) = 2;
    *(int *)(lVar3 + 0x10) = param_2;
    *(AkCurveInterpolation *)(lVar3 + 0x14) = param_3;
    LOCK();
    *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
    UNLOCK();
    return 1;
  }
  return 0x5e;
}



// FUNCTION 144d4a8d0 Stop body=157 status=ok
// SIG AKRESULT Stop(uint param_1, int param_2, AkCurveInterpolation param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::DynamicSequence::Stop(unsigned int,int,enum
   AkCurveInterpolation) */

AKRESULT __cdecl
AK::SoundEngine::DynamicSequence::Stop(uint param_1,int param_2,AkCurveInterpolation param_3)

{
  undefined2 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 in_register_0000000c;
  
                    /* 0x4d4a8d0  327
                       ?Stop@DynamicSequence@SoundEngine@AK@@YA?AW4AKRESULT@@IHW4AkCurveInterpolation@@@Z
                        */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  lVar2 = FUN_144d4cc80(CONCAT44(in_register_0000000c,param_1));
  if (lVar2 != 0) {
    uVar1 = FUN_145087f90();
    lVar3 = FUN_145080f50(DAT_14c790fd8,0x19,uVar1);
    *(longlong *)(lVar3 + 4) = lVar2;
    *(undefined4 *)(lVar3 + 0xc) = 4;
    *(int *)(lVar3 + 0x10) = param_2;
    *(AkCurveInterpolation *)(lVar3 + 0x14) = param_3;
    LOCK();
    *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
    UNLOCK();
    return 1;
  }
  return 0x5e;
}



// FUNCTION 144d4a970 Break body=130 status=ok
// SIG AKRESULT Break(uint param_1)

/* enum AKRESULT __cdecl AK::SoundEngine::DynamicSequence::Break(unsigned int) */

AKRESULT __cdecl AK::SoundEngine::DynamicSequence::Break(uint param_1)

{
  undefined2 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 in_register_0000000c;
  
                    /* 0x4d4a970  32  ?Break@DynamicSequence@SoundEngine@AK@@YA?AW4AKRESULT@@I@Z */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  lVar2 = FUN_144d4cc80(CONCAT44(in_register_0000000c,param_1));
  if (lVar2 != 0) {
    uVar1 = FUN_145087f90();
    lVar3 = FUN_145080f50(DAT_14c790fd8,0x19,uVar1);
    *(longlong *)(lVar3 + 4) = lVar2;
    *(undefined8 *)(lVar3 + 0xc) = 5;
    *(undefined4 *)(lVar3 + 0x14) = 4;
    LOCK();
    *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
    UNLOCK();
    return 1;
  }
  return 0x5e;
}



// FUNCTION 144d4aa00 Seek body=156 status=ok
// SIG AKRESULT Seek(uint param_1, int param_2, bool param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::DynamicSequence::Seek(unsigned int,int,bool) */

AKRESULT __cdecl AK::SoundEngine::DynamicSequence::Seek(uint param_1,int param_2,bool param_3)

{
  undefined2 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 in_register_0000000c;
  
                    /* 0x4d4aa00  256  ?Seek@DynamicSequence@SoundEngine@AK@@YA?AW4AKRESULT@@IH_N@Z
                        */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  lVar2 = FUN_144d4cc80(CONCAT44(in_register_0000000c,param_1));
  if (lVar2 != 0) {
    uVar1 = FUN_145087fa0();
    lVar3 = FUN_145080f50(DAT_14c790fd8,0x3c,uVar1);
    *(longlong *)(lVar3 + 4) = lVar2;
    *(int *)(lVar3 + 0xc) = param_2;
    *(undefined1 *)(lVar3 + 0x10) = 0;
    *(bool *)(lVar3 + 0x11) = param_3;
    LOCK();
    *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
    UNLOCK();
    return 1;
  }
  return 0x5e;
}



// FUNCTION 144d4aaa0 Seek body=160 status=ok
// SIG AKRESULT Seek(uint param_1, float param_2, bool param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::DynamicSequence::Seek(unsigned int,float,bool) */

AKRESULT __cdecl AK::SoundEngine::DynamicSequence::Seek(uint param_1,float param_2,bool param_3)

{
  undefined2 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 in_register_0000000c;
  
                    /* 0x4d4aaa0  257  ?Seek@DynamicSequence@SoundEngine@AK@@YA?AW4AKRESULT@@IM_N@Z
                        */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  lVar2 = FUN_144d4cc80(CONCAT44(in_register_0000000c,param_1));
  if (lVar2 != 0) {
    uVar1 = FUN_145087fa0();
    lVar3 = FUN_145080f50(DAT_14c790fd8,0x3c,uVar1);
    *(longlong *)(lVar3 + 4) = lVar2;
    *(float *)(lVar3 + 0xc) = param_2;
    *(undefined1 *)(lVar3 + 0x10) = 1;
    *(bool *)(lVar3 + 0x11) = param_3;
    LOCK();
    *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
    UNLOCK();
    return 1;
  }
  return 0x5e;
}



// FUNCTION 144d4ab40 GetPauseTimes body=139 status=ok
// SIG AKRESULT GetPauseTimes(uint param_1, uint * param_2, uint * param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::DynamicSequence::GetPauseTimes(unsigned int,unsigned int &
   __ptr64,unsigned int & __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::DynamicSequence::GetPauseTimes(uint param_1,uint *param_2,uint *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 in_register_0000000c;
  
                    /* 0x4d4ab40  111
                       ?GetPauseTimes@DynamicSequence@SoundEngine@AK@@YA?AW4AKRESULT@@IAEAI0@Z */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  plVar3 = (longlong *)FUN_144d4cc80(CONCAT44(in_register_0000000c,param_1));
  if (plVar3 != (longlong *)0x0) {
    FUN_1450aede0(plVar3,param_2,param_3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0x14);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    return 1;
  }
  return 0x5e;
}



// FUNCTION 144d4abd0 GetPlayingItem body=139 status=ok
// SIG AKRESULT GetPlayingItem(uint param_1, uint * param_2, void * * param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::DynamicSequence::GetPlayingItem(unsigned int,unsigned int
   & __ptr64,void * __ptr64 & __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::DynamicSequence::GetPlayingItem(uint param_1,uint *param_2,void **param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 in_register_0000000c;
  
                    /* 0x4d4abd0  113
                       ?GetPlayingItem@DynamicSequence@SoundEngine@AK@@YA?AW4AKRESULT@@IAEAIAEAPEAX@Z
                        */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  plVar3 = (longlong *)FUN_144d4cc80(CONCAT44(in_register_0000000c,param_1));
  if (plVar3 != (longlong *)0x0) {
    FUN_1450aed80(plVar3,param_2,param_3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0x14);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    return 1;
  }
  return 0x5e;
}



// FUNCTION 144d4ac60 LockPlaylist body=318 status=ok
// SIG Playlist * LockPlaylist(uint param_1)

/* class AK::SoundEngine::DynamicSequence::Playlist * __ptr64 __cdecl
   AK::SoundEngine::DynamicSequence::LockPlaylist(unsigned int) */

Playlist * __cdecl AK::SoundEngine::DynamicSequence::LockPlaylist(uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  
                    /* 0x4d4ac60  160
                       ?LockPlaylist@DynamicSequence@SoundEngine@AK@@YAPEAVPlaylist@123@I@Z */
  lVar3 = DAT_14c791060;
  if (DAT_14c790ff4 != '\0') {
    do {
      while (iVar2 = *(int *)(lVar3 + 0x2c0), iVar2 < 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x2c8));
        if (*(int *)(lVar3 + 0x2c0) < 0) goto LAB_144d4ac9c;
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x2c8));
      }
      LOCK();
      bVar5 = iVar2 == *(int *)(lVar3 + 0x2c0);
      if (bVar5) {
        *(int *)(lVar3 + 0x2c0) = iVar2 + 1;
      }
      UNLOCK();
    } while (!bVar5);
LAB_144d4ac9c:
    if (*(uint *)(lVar3 + 0x308) == 0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      for (plVar4 = *(longlong **)
                     (*(longlong *)(lVar3 + 0x300) +
                     ((ulonglong)param_1 % (ulonglong)*(uint *)(lVar3 + 0x308)) * 8);
          plVar4 != (longlong *)0x0; plVar4 = (longlong *)plVar4[1]) {
        if (*(uint *)(plVar4 + 2) == param_1) goto LAB_144d4acd0;
      }
      plVar4 = (longlong *)0x0;
LAB_144d4acd0:
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar4 + 0x14) = *(int *)((longlong)plVar4 + 0x14) + 1;
        UNLOCK();
      }
    }
    iVar2 = *(int *)(lVar3 + 0x2c0);
    while (-1 < iVar2) {
      LOCK();
      bVar5 = iVar2 == *(int *)(lVar3 + 0x2c0);
      if (bVar5) {
        *(int *)(lVar3 + 0x2c0) = iVar2 + -1;
      }
      UNLOCK();
      if (bVar5) {
        if ((iVar2 + -1 == 0) && (0 < *(int *)(lVar3 + 0x2f0))) {
          SetEvent(*(HANDLE *)(lVar3 + 0x2f8));
        }
        goto LAB_144d4ad34;
      }
      iVar2 = *(int *)(lVar3 + 0x2c0);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x2c8));
LAB_144d4ad34:
    if (plVar4 != (longlong *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(plVar4 + 5));
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0x14);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
      return (Playlist *)(plVar4 + 3);
    }
  }
  return (Playlist *)0x0;
}



// FUNCTION 144d4ada0 UnlockPlaylist body=329 status=ok
// SIG AKRESULT UnlockPlaylist(uint param_1)

/* enum AKRESULT __cdecl AK::SoundEngine::DynamicSequence::UnlockPlaylist(unsigned int) */

AKRESULT __cdecl AK::SoundEngine::DynamicSequence::UnlockPlaylist(uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  
                    /* 0x4d4ada0  348
                       ?UnlockPlaylist@DynamicSequence@SoundEngine@AK@@YA?AW4AKRESULT@@I@Z */
  lVar3 = DAT_14c791060;
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  do {
    while (iVar2 = *(int *)(lVar3 + 0x2c0), iVar2 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x2c8));
      if (*(int *)(lVar3 + 0x2c0) < 0) goto LAB_144d4ade7;
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x2c8));
    }
    LOCK();
    bVar5 = iVar2 == *(int *)(lVar3 + 0x2c0);
    if (bVar5) {
      *(int *)(lVar3 + 0x2c0) = iVar2 + 1;
    }
    UNLOCK();
  } while (!bVar5);
LAB_144d4ade7:
  if (*(uint *)(lVar3 + 0x308) == 0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    for (plVar4 = *(longlong **)
                   (*(longlong *)(lVar3 + 0x300) +
                   ((ulonglong)param_1 % (ulonglong)*(uint *)(lVar3 + 0x308)) * 8);
        plVar4 != (longlong *)0x0; plVar4 = (longlong *)plVar4[1]) {
      if (*(uint *)(plVar4 + 2) == param_1) goto LAB_144d4ae17;
    }
    plVar4 = (longlong *)0x0;
LAB_144d4ae17:
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0x14) = *(int *)((longlong)plVar4 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar2 = *(int *)(lVar3 + 0x2c0);
  do {
    if (iVar2 < 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x2c8));
LAB_144d4ae84:
      if (plVar4 != (longlong *)0x0) {
        FUN_1450aee50(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0x14);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 0x18))(plVar4);
        }
        return 1;
      }
      return 0x5e;
    }
    LOCK();
    bVar5 = iVar2 == *(int *)(lVar3 + 0x2c0);
    if (bVar5) {
      *(int *)(lVar3 + 0x2c0) = iVar2 + -1;
    }
    UNLOCK();
    if (bVar5) {
      if ((iVar2 + -1 == 0) && (0 < *(int *)(lVar3 + 0x2f0))) {
        SetEvent(*(HANDLE *)(lVar3 + 0x2f8));
      }
      goto LAB_144d4ae84;
    }
    iVar2 = *(int *)(lVar3 + 0x2c0);
  } while( true );
}



// FUNCTION 144d4aef0 ResolveDialogueEvent body=571 status=ok
// SIG uint ResolveDialogueEvent(uint param_1, uint * param_2, uint param_3, uint param_4, _func_bool_uint_uint_void_ptr * param_5, void * param_6)

/* unsigned int __cdecl AK::SoundEngine::DynamicDialogue::ResolveDialogueEvent(unsigned int,unsigned
   int * __ptr64,unsigned int,unsigned int,bool (__cdecl*)(unsigned int,unsigned int,void *
   __ptr64),void * __ptr64) */

uint __cdecl
AK::SoundEngine::DynamicDialogue::ResolveDialogueEvent
          (uint param_1,uint *param_2,uint param_3,uint param_4,
          _func_bool_uint_uint_void_ptr *param_5,void *param_6)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  bool bVar6;
  
                    /* 0x4d4aef0  252
                       ?ResolveDialogueEvent@DynamicDialogue@SoundEngine@AK@@YAIIPEAIIIP6A_NIIPEAX@Z1@Z
                        */
  lVar3 = DAT_14c791060;
  if (DAT_14c790ff4 != '\0') {
    do {
      while (iVar2 = *(int *)(lVar3 + 0x318), iVar2 < 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 800));
        if (*(int *)(lVar3 + 0x318) < 0) goto LAB_144d4af47;
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 800));
      }
      LOCK();
      bVar6 = iVar2 == *(int *)(lVar3 + 0x318);
      if (bVar6) {
        *(int *)(lVar3 + 0x318) = iVar2 + 1;
      }
      UNLOCK();
    } while (!bVar6);
LAB_144d4af47:
    if (*(uint *)(lVar3 + 0x360) == 0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      for (plVar5 = *(longlong **)
                     (*(longlong *)(lVar3 + 0x358) +
                     ((ulonglong)param_1 % (ulonglong)*(uint *)(lVar3 + 0x360)) * 8);
          plVar5 != (longlong *)0x0; plVar5 = (longlong *)plVar5[1]) {
        if (*(uint *)(plVar5 + 2) == param_1) goto LAB_144d4af77;
      }
      plVar5 = (longlong *)0x0;
LAB_144d4af77:
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar5 + 0x14) = *(int *)((longlong)plVar5 + 0x14) + 1;
        UNLOCK();
      }
    }
    iVar2 = *(int *)(lVar3 + 0x318);
    while (-1 < iVar2) {
      LOCK();
      bVar6 = iVar2 == *(int *)(lVar3 + 0x318);
      if (bVar6) {
        *(int *)(lVar3 + 0x318) = iVar2 + -1;
      }
      UNLOCK();
      if (bVar6) {
        if ((iVar2 + -1 == 0) && (0 < *(int *)(lVar3 + 0x348))) {
          SetEvent(*(HANDLE *)(lVar3 + 0x350));
        }
        goto LAB_144d4afdc;
      }
      iVar2 = *(int *)(lVar3 + 0x318);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 800));
LAB_144d4afdc:
    lVar3 = DAT_14c791060;
    if (plVar5 != (longlong *)0x0) {
      do {
        while (iVar2 = *(int *)(lVar3 + 0x318), iVar2 < 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 800));
          if (*(int *)(lVar3 + 0x318) < 0) goto LAB_144d4b00b;
          LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 800));
        }
        LOCK();
        bVar6 = iVar2 == *(int *)(lVar3 + 0x318);
        if (bVar6) {
          *(int *)(lVar3 + 0x318) = iVar2 + 1;
        }
        UNLOCK();
      } while (!bVar6);
LAB_144d4b00b:
      uVar4 = FUN_1450af9b0(plVar5 + 3,(int)plVar5[2],param_2,param_3,param_4,param_5,param_6);
      iVar2 = *(int *)(lVar3 + 0x318);
      do {
        if (iVar2 < 0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 800));
LAB_144d4b078:
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0x14);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 != 1) {
            return uVar4;
          }
          (**(code **)(*plVar5 + 0x18))(plVar5);
          return uVar4;
        }
        LOCK();
        bVar6 = iVar2 == *(int *)(lVar3 + 0x318);
        if (bVar6) {
          *(int *)(lVar3 + 0x318) = iVar2 + -1;
        }
        UNLOCK();
        if (bVar6) {
          if ((iVar2 + -1 == 0) && (0 < *(int *)(lVar3 + 0x348))) {
            SetEvent(*(HANDLE *)(lVar3 + 0x350));
          }
          goto LAB_144d4b078;
        }
        iVar2 = *(int *)(lVar3 + 0x318);
      } while( true );
    }
  }
  return 0;
}



// FUNCTION 144d4b130 ResolveDialogueEvent body=776 status=ok
// SIG uint ResolveDialogueEvent(wchar_t * param_1, wchar_t * * param_2, uint param_3, uint param_4, _func_bool_uint_uint_void_ptr * param_5, void * param_6)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* unsigned int __cdecl AK::SoundEngine::DynamicDialogue::ResolveDialogueEvent(wchar_t const *
   __ptr64,wchar_t const * __ptr64 * __ptr64,unsigned int,unsigned int,bool (__cdecl*)(unsigned
   int,unsigned int,void * __ptr64),void * __ptr64) */

uint __cdecl
AK::SoundEngine::DynamicDialogue::ResolveDialogueEvent
          (wchar_t *param_1,wchar_t **param_2,uint param_3,uint param_4,
          _func_bool_uint_uint_void_ptr *param_5,void *param_6)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  HANDLE hEvent;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong *plVar13;
  bool bVar14;
  undefined8 auStackY_180 [5];
  CHAR local_138 [272];
  
                    /* 0x4d4b130  254
                       ?ResolveDialogueEvent@DynamicDialogue@SoundEngine@AK@@YAIPEB_WPEAPEB_WIIP6A_NIIPEAX@Z2@Z
                        */
  if (DAT_14c790ff4 != '\0') {
    auStackY_180[0] = 0x144d4b17a;
    uVar5 = GetIDFromString(param_1);
    lVar8 = DAT_14c791060;
    do {
      while (iVar6 = *(int *)(lVar8 + 0x318), iVar6 < 0) {
        auStackY_180[0] = 0x144d4b1ea;
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar8 + 800));
        if (*(int *)(lVar8 + 0x318) < 0) goto LAB_144d4b19b;
        auStackY_180[0] = 0x144d4b201;
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar8 + 800));
      }
      LOCK();
      bVar14 = iVar6 == *(int *)(lVar8 + 0x318);
      if (bVar14) {
        *(int *)(lVar8 + 0x318) = iVar6 + 1;
      }
      UNLOCK();
    } while (!bVar14);
LAB_144d4b19b:
    plVar13 = (longlong *)0x0;
    uVar7 = 0;
    if (*(uint *)(lVar8 + 0x360) != 0) {
      for (plVar2 = *(longlong **)
                     (*(longlong *)(lVar8 + 0x358) +
                     ((ulonglong)uVar5 % (ulonglong)*(uint *)(lVar8 + 0x360)) * 8);
          (plVar12 = plVar13, plVar2 != (longlong *)0x0 &&
          (plVar12 = plVar2, *(uint *)(plVar2 + 2) != uVar5)); plVar2 = (longlong *)plVar2[1]) {
      }
      plVar13 = plVar12;
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar12 + 0x14) = *(int *)((longlong)plVar12 + 0x14) + 1;
        UNLOCK();
      }
    }
    iVar6 = *(int *)(lVar8 + 0x318);
    while (-1 < iVar6) {
      LOCK();
      bVar14 = iVar6 == *(int *)(lVar8 + 0x318);
      if (bVar14) {
        *(int *)(lVar8 + 0x318) = iVar6 + -1;
      }
      UNLOCK();
      if (bVar14) {
        if ((iVar6 + -1 == 0) && (0 < *(int *)(lVar8 + 0x348))) {
          auStackY_180[0] = 0x144d4b289;
          SetEvent(*(HANDLE *)(lVar8 + 0x350));
        }
        goto LAB_144d4b234;
      }
      iVar6 = *(int *)(lVar8 + 0x318);
    }
    auStackY_180[0] = 0x144d4b234;
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar8 + 800));
LAB_144d4b234:
    if (plVar13 != (longlong *)0x0) {
      uVar9 = (ulonglong)param_3 * 4;
      uVar11 = uVar9 + 0xf;
      if (uVar11 <= uVar9) {
        uVar11 = 0xffffffffffffff0;
      }
      auStackY_180[0] = 0x144d4b2f3;
      lVar8 = -(uVar11 & 0xfffffffffffffff0);
      *(undefined8 *)((longlong)auStackY_180 + lVar8) = 0x144d4b30c;
      iVar6 = FUN_1450b04f0(plVar13,param_2,local_138 + lVar8,(ulonglong)param_3);
      lVar10 = DAT_14c791060;
      if (iVar6 == 1) {
        do {
          while (iVar6 = *(int *)(lVar10 + 0x318), iVar6 < 0) {
            *(undefined8 *)((longlong)auStackY_180 + lVar8) = 0x144d4b3f8;
            EnterCriticalSection((LPCRITICAL_SECTION)(lVar10 + 800));
            if (*(int *)(lVar10 + 0x318) < 0) goto LAB_144d4b33b;
            *(undefined8 *)((longlong)auStackY_180 + lVar8) = 0x144d4b413;
            LeaveCriticalSection((LPCRITICAL_SECTION)(lVar10 + 800));
          }
          LOCK();
          bVar14 = iVar6 == *(int *)(lVar10 + 0x318);
          if (bVar14) {
            *(int *)(lVar10 + 0x318) = iVar6 + 1;
          }
          UNLOCK();
        } while (!bVar14);
LAB_144d4b33b:
        lVar4 = plVar13[2];
        *(void **)(local_138 + lVar8 + -0x10) = param_6;
        *(_func_bool_uint_uint_void_ptr **)(local_138 + lVar8 + -0x18) = param_5;
        *(uint *)(local_138 + lVar8 + -0x20) = param_4;
        *(undefined8 *)((longlong)auStackY_180 + lVar8) = 0x144d4b36f;
        uVar7 = FUN_1450af9b0(plVar13 + 3,(int)lVar4,local_138 + lVar8,param_3);
        iVar6 = *(int *)(lVar10 + 0x318);
        while (-1 < iVar6) {
          LOCK();
          bVar14 = iVar6 == *(int *)(lVar10 + 0x318);
          if (bVar14) {
            *(int *)(lVar10 + 0x318) = iVar6 + -1;
          }
          UNLOCK();
          if (bVar14) {
            if ((iVar6 + -1 == 0) && (0 < *(int *)(lVar10 + 0x348))) {
              hEvent = *(HANDLE *)(lVar10 + 0x350);
              *(undefined8 *)((longlong)auStackY_180 + lVar8) = 0x144d4b433;
              SetEvent(hEvent);
            }
            goto LAB_144d4b3a8;
          }
          iVar6 = *(int *)(lVar10 + 0x318);
        }
        *(undefined8 *)((longlong)auStackY_180 + lVar8) = 0x144d4b3a8;
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar10 + 800));
      }
LAB_144d4b3a8:
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0x14);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 != 1) {
        return uVar7;
      }
      pcVar3 = *(code **)(*plVar13 + 0x18);
      *(undefined8 *)((longlong)auStackY_180 + lVar8) = 0x144d4b3c2;
      (*pcVar3)(plVar13);
      return uVar7;
    }
    lVar8 = -1;
    lVar10 = -1;
    do {
      lVar10 = lVar10 + 1;
    } while (param_1[lVar10] != L'\0');
    if ((uint)lVar10 < 0x102) {
      do {
        lVar8 = lVar8 + 1;
      } while (param_1[lVar8] != L'\0');
    }
    else {
      lVar8 = 0x102;
    }
    auStackY_180[0] = 0x144d4b2be;
    iVar6 = WideCharToMultiByte(0xfde9,0,param_1,(int)lVar8,local_138,0x103,(LPCSTR)0x0,(LPBOOL)0x0)
    ;
    local_138[iVar6] = '\0';
  }
  return 0;
}



// FUNCTION 144d4b440 ResolveDialogueEvent body=693 status=ok
// SIG uint ResolveDialogueEvent(char * param_1, char * * param_2, uint param_3, uint param_4, _func_bool_uint_uint_void_ptr * param_5, void * param_6)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* unsigned int __cdecl AK::SoundEngine::DynamicDialogue::ResolveDialogueEvent(char const *
   __ptr64,char const * __ptr64 * __ptr64,unsigned int,unsigned int,bool (__cdecl*)(unsigned
   int,unsigned int,void * __ptr64),void * __ptr64) */

uint __cdecl
AK::SoundEngine::DynamicDialogue::ResolveDialogueEvent
          (char *param_1,char **param_2,uint param_3,uint param_4,
          _func_bool_uint_uint_void_ptr *param_5,void *param_6)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  HANDLE hEvent;
  longlong lVar4;
  byte bVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  bool bVar16;
  undefined8 auStack_70 [5];
  uint auStack_48 [2];
  undefined8 auStack_40 [3];
  
                    /* 0x4d4b440  253
                       ?ResolveDialogueEvent@DynamicDialogue@SoundEngine@AK@@YAIPEBDPEAPEBDIIP6A_NIIPEAX@Z2@Z
                        */
  lVar4 = DAT_14c791060;
  if (DAT_14c790ff4 == '\0') {
    uVar10 = 0x66;
  }
  else {
    plVar15 = (longlong *)0x0;
    uVar10 = 0;
    plVar13 = plVar15;
    if (param_1 != (char *)0x0) {
      plVar13 = (longlong *)0x811c9dc5;
      bVar6 = *param_1;
      while (bVar6 != 0) {
        param_1 = param_1 + 1;
        bVar5 = bVar6 + 0x20;
        if (0x19 < (byte)(bVar6 + 0xbf)) {
          bVar5 = bVar6;
        }
        plVar13 = (longlong *)(ulonglong)((int)plVar13 * 0x1000193 ^ (uint)bVar5);
        bVar6 = *param_1;
      }
    }
    do {
      while (iVar9 = *(int *)(lVar4 + 0x318), iVar9 < 0) {
        auStack_70[0] = 0x144d4b539;
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 800));
        if (*(int *)(lVar4 + 0x318) < 0) goto LAB_144d4b4eb;
        auStack_70[0] = 0x144d4b550;
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 800));
      }
      LOCK();
      bVar16 = iVar9 == *(int *)(lVar4 + 0x318);
      if (bVar16) {
        *(int *)(lVar4 + 0x318) = iVar9 + 1;
      }
      UNLOCK();
    } while (!bVar16);
LAB_144d4b4eb:
    if (*(uint *)(lVar4 + 0x360) != 0) {
      for (plVar2 = *(longlong **)
                     (*(longlong *)(lVar4 + 0x358) +
                     ((ulonglong)plVar13 % (ulonglong)*(uint *)(lVar4 + 0x360)) * 8);
          (plVar14 = plVar15, plVar2 != (longlong *)0x0 &&
          (plVar14 = plVar2, (int)plVar2[2] != (int)plVar13)); plVar2 = (longlong *)plVar2[1]) {
      }
      plVar15 = plVar14;
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar14 + 0x14) = *(int *)((longlong)plVar14 + 0x14) + 1;
        UNLOCK();
      }
    }
    iVar9 = *(int *)(lVar4 + 0x318);
    while (-1 < iVar9) {
      LOCK();
      bVar16 = iVar9 == *(int *)(lVar4 + 0x318);
      if (bVar16) {
        *(int *)(lVar4 + 0x318) = iVar9 + -1;
      }
      UNLOCK();
      if (bVar16) {
        if ((iVar9 + -1 == 0) && (0 < *(int *)(lVar4 + 0x348))) {
          auStack_70[0] = 0x144d4b5ab;
          SetEvent(*(HANDLE *)(lVar4 + 0x350));
        }
        goto LAB_144d4b584;
      }
      iVar9 = *(int *)(lVar4 + 0x318);
    }
    auStack_70[0] = 0x144d4b584;
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 800));
LAB_144d4b584:
    if (plVar15 == (longlong *)0x0) {
      uVar10 = 0;
    }
    else {
      uVar11 = (ulonglong)param_3 * 4;
      uVar12 = uVar11 + 0xf;
      if (uVar12 <= uVar11) {
        uVar12 = 0xffffffffffffff0;
      }
      auStack_70[0] = 0x144d4b5d3;
      lVar4 = -(uVar12 & 0xfffffffffffffff0);
      *(undefined8 *)((longlong)auStack_70 + lVar4) = 0x144d4b5ec;
      iVar9 = FUN_1450b0700(plVar15,param_2,&stack0xffffffffffffffd8 + lVar4,(ulonglong)param_3);
      lVar8 = DAT_14c791060;
      if (iVar9 == 1) {
        do {
          while (iVar9 = *(int *)(lVar8 + 0x318), iVar9 < 0) {
            *(undefined8 *)((longlong)auStack_70 + lVar4) = 0x144d4b6b8;
            EnterCriticalSection((LPCRITICAL_SECTION)(lVar8 + 800));
            if (*(int *)(lVar8 + 0x318) < 0) goto LAB_144d4b61b;
            *(undefined8 *)((longlong)auStack_70 + lVar4) = 0x144d4b6d3;
            LeaveCriticalSection((LPCRITICAL_SECTION)(lVar8 + 800));
          }
          LOCK();
          bVar16 = iVar9 == *(int *)(lVar8 + 0x318);
          if (bVar16) {
            *(int *)(lVar8 + 0x318) = iVar9 + 1;
          }
          UNLOCK();
        } while (!bVar16);
LAB_144d4b61b:
        lVar7 = plVar15[2];
        *(void **)((longlong)auStack_40 + lVar4 + 8) = param_6;
        *(_func_bool_uint_uint_void_ptr **)((longlong)auStack_40 + lVar4) = param_5;
        *(uint *)((longlong)auStack_48 + lVar4) = param_4;
        *(undefined8 *)((longlong)auStack_70 + lVar4) = 0x144d4b646;
        uVar10 = FUN_1450af9b0(plVar15 + 3,(int)lVar7,&stack0xffffffffffffffd8 + lVar4,param_3);
        iVar9 = *(int *)(lVar8 + 0x318);
        while (-1 < iVar9) {
          LOCK();
          bVar16 = iVar9 == *(int *)(lVar8 + 0x318);
          if (bVar16) {
            *(int *)(lVar8 + 0x318) = iVar9 + -1;
          }
          UNLOCK();
          if (bVar16) {
            if ((iVar9 + -1 == 0) && (0 < *(int *)(lVar8 + 0x348))) {
              hEvent = *(HANDLE *)(lVar8 + 0x350);
              *(undefined8 *)((longlong)auStack_70 + lVar4) = 0x144d4b6f3;
              SetEvent(hEvent);
            }
            goto LAB_144d4b677;
          }
          iVar9 = *(int *)(lVar8 + 0x318);
        }
        *(undefined8 *)((longlong)auStack_70 + lVar4) = 0x144d4b677;
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar8 + 800));
      }
LAB_144d4b677:
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0x14);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        pcVar3 = *(code **)(*plVar15 + 0x18);
        *(undefined8 *)((longlong)auStack_70 + lVar4) = 0x144d4b68f;
        (*pcVar3)(plVar15);
      }
    }
  }
  return uVar10;
}



// FUNCTION 144d4b700 GetDialogueEventCustomPropertyValue body=406 status=ok
// SIG AKRESULT GetDialogueEventCustomPropertyValue(uint param_1, uint param_2, int * param_3)

/* enum AKRESULT __cdecl
   AK::SoundEngine::DynamicDialogue::GetDialogueEventCustomPropertyValue(unsigned int,unsigned
   int,int & __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::DynamicDialogue::GetDialogueEventCustomPropertyValue
          (uint param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  AKRESULT AVar3;
  int *piVar4;
  longlong *plVar5;
  bool bVar6;
  
                    /* 0x4d4b700  86
                       ?GetDialogueEventCustomPropertyValue@DynamicDialogue@SoundEngine@AK@@YA?AW4AKRESULT@@IIAEAH@Z
                        */
  lVar2 = DAT_14c791060;
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  do {
    while (iVar1 = *(int *)(lVar2 + 0x318), iVar1 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 800));
      if (*(int *)(lVar2 + 0x318) < 0) goto LAB_144d4b767;
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 800));
    }
    LOCK();
    bVar6 = iVar1 == *(int *)(lVar2 + 0x318);
    if (bVar6) {
      *(int *)(lVar2 + 0x318) = iVar1 + 1;
    }
    UNLOCK();
  } while (!bVar6);
LAB_144d4b767:
  if (*(uint *)(lVar2 + 0x360) == 0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    for (plVar5 = *(longlong **)
                   (*(longlong *)(lVar2 + 0x358) +
                   ((ulonglong)param_1 % (ulonglong)*(uint *)(lVar2 + 0x360)) * 8);
        plVar5 != (longlong *)0x0; plVar5 = (longlong *)plVar5[1]) {
      if (*(uint *)(plVar5 + 2) == param_1) goto LAB_144d4b797;
    }
    plVar5 = (longlong *)0x0;
LAB_144d4b797:
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar5 + 0x14) = *(int *)((longlong)plVar5 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar1 = *(int *)(lVar2 + 0x318);
  do {
    if (iVar1 < 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 800));
LAB_144d4b804:
      if (plVar5 == (longlong *)0x0) {
        AVar3 = 0xf;
      }
      else {
        piVar4 = (int *)FUN_1450b0870(plVar5,param_2);
        if (piVar4 == (int *)0x0) {
          LOCK();
          piVar4 = (int *)((longlong)plVar5 + 0x14);
          iVar1 = *piVar4;
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (iVar1 == 1) {
            (**(code **)(*plVar5 + 0x18))(plVar5);
          }
          AVar3 = 3;
        }
        else {
          *param_3 = *piVar4;
          LOCK();
          piVar4 = (int *)((longlong)plVar5 + 0x14);
          iVar1 = *piVar4;
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (iVar1 == 1) {
            (**(code **)(*plVar5 + 0x18))(plVar5);
          }
          AVar3 = 1;
        }
      }
      return AVar3;
    }
    LOCK();
    bVar6 = iVar1 == *(int *)(lVar2 + 0x318);
    if (bVar6) {
      *(int *)(lVar2 + 0x318) = iVar1 + -1;
    }
    UNLOCK();
    if (bVar6) {
      if ((iVar1 + -1 == 0) && (0 < *(int *)(lVar2 + 0x348))) {
        SetEvent(*(HANDLE *)(lVar2 + 0x350));
      }
      goto LAB_144d4b804;
    }
    iVar1 = *(int *)(lVar2 + 0x318);
  } while( true );
}



// FUNCTION 144d4b8a0 GetDialogueEventCustomPropertyValue body=406 status=ok
// SIG AKRESULT GetDialogueEventCustomPropertyValue(uint param_1, uint param_2, float * param_3)

/* enum AKRESULT __cdecl
   AK::SoundEngine::DynamicDialogue::GetDialogueEventCustomPropertyValue(unsigned int,unsigned
   int,float & __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::DynamicDialogue::GetDialogueEventCustomPropertyValue
          (uint param_1,uint param_2,float *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  AKRESULT AVar4;
  float *pfVar5;
  longlong *plVar6;
  bool bVar7;
  
                    /* 0x4d4b8a0  87
                       ?GetDialogueEventCustomPropertyValue@DynamicDialogue@SoundEngine@AK@@YA?AW4AKRESULT@@IIAEAM@Z
                        */
  lVar3 = DAT_14c791060;
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  do {
    while (iVar2 = *(int *)(lVar3 + 0x318), iVar2 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 800));
      if (*(int *)(lVar3 + 0x318) < 0) goto LAB_144d4b907;
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 800));
    }
    LOCK();
    bVar7 = iVar2 == *(int *)(lVar3 + 0x318);
    if (bVar7) {
      *(int *)(lVar3 + 0x318) = iVar2 + 1;
    }
    UNLOCK();
  } while (!bVar7);
LAB_144d4b907:
  if (*(uint *)(lVar3 + 0x360) == 0) {
    plVar6 = (longlong *)0x0;
  }
  else {
    for (plVar6 = *(longlong **)
                   (*(longlong *)(lVar3 + 0x358) +
                   ((ulonglong)param_1 % (ulonglong)*(uint *)(lVar3 + 0x360)) * 8);
        plVar6 != (longlong *)0x0; plVar6 = (longlong *)plVar6[1]) {
      if (*(uint *)(plVar6 + 2) == param_1) goto LAB_144d4b937;
    }
    plVar6 = (longlong *)0x0;
LAB_144d4b937:
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar6 + 0x14) = *(int *)((longlong)plVar6 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar2 = *(int *)(lVar3 + 0x318);
  do {
    if (iVar2 < 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 800));
LAB_144d4b9a4:
      if (plVar6 == (longlong *)0x0) {
        AVar4 = 0xf;
      }
      else {
        pfVar5 = (float *)FUN_1450b0870(plVar6,param_2);
        if (pfVar5 == (float *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0x14);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar6 + 0x18))(plVar6);
          }
          AVar4 = 3;
        }
        else {
          *param_3 = *pfVar5;
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0x14);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar6 + 0x18))(plVar6);
          }
          AVar4 = 1;
        }
      }
      return AVar4;
    }
    LOCK();
    bVar7 = iVar2 == *(int *)(lVar3 + 0x318);
    if (bVar7) {
      *(int *)(lVar3 + 0x318) = iVar2 + -1;
    }
    UNLOCK();
    if (bVar7) {
      if ((iVar2 + -1 == 0) && (0 < *(int *)(lVar3 + 0x348))) {
        SetEvent(*(HANDLE *)(lVar3 + 0x350));
      }
      goto LAB_144d4b9a4;
    }
    iVar2 = *(int *)(lVar3 + 0x318);
  } while( true );
}



// FUNCTION 144d4ba40 FUN_144d4ba40 body=43 status=ok
// SIG undefined FUN_144d4ba40(void)

undefined8 * FUN_144d4ba40(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d0f30;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 144d4ba70 FUN_144d4ba70 body=43 status=ok
// SIG undefined FUN_144d4ba70(void)

undefined8 * FUN_144d4ba70(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d0f30;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 144d4baa0 FUN_144d4baa0 body=115 status=ok
// SIG undefined FUN_144d4baa0(void)

void FUN_144d4baa0(undefined4 param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined **local_28;
  code *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  lVar1 = (&DAT_14c791140)[(param_2 & 0xffffffff) * 3];
  while (lVar1 != 0) {
    local_28 = &PTR_FUN_1499d1138;
    local_20 = *(code **)(lVar1 + 8);
    local_18 = *(undefined8 *)(lVar1 + 0x10);
    local_10 = *(undefined8 *)(lVar1 + 0x18);
    lVar1 = *(longlong *)(lVar1 + 0x18);
    (*local_20)(&local_28,param_1);
  }
  return;
}



// FUNCTION 144d4bb20 FUN_144d4bb20 body=26 status=ok
// SIG undefined FUN_144d4bb20(void)

void FUN_144d4bb20(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (param_1 != 0) {
    for (; (param_1 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
    }
  }
  iVar2 = 0x20;
  if (param_1 != 0) {
    iVar2 = iVar1;
  }
  FUN_144d4baa0(param_1,iVar2);
  return;
}



// FUNCTION 144d4bb40 FUN_144d4bb40 body=280 status=ok
// SIG undefined FUN_144d4bb40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144d4bb40(undefined8 param_1,uint param_2)

{
  longlong lVar1;
  code *pcVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uStack_70;
  undefined1 auStack_68 [32];
  undefined4 auStack_48 [4];
  undefined1 local_38 [16];
  
  puVar7 = auStack_68;
  uVar3 = 0;
  if (param_2 != 0) {
    for (; (param_2 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
    }
  }
  uVar8 = 0;
  uVar9 = 0x20;
  if (param_2 != 0) {
    uVar9 = (ulonglong)uVar3;
  }
  uStack_70 = 0x144d4bb7d;
  FUN_145071a40(param_1,1);
  uVar3 = (&DAT_14c791270)[uVar9 * 6];
  if (uVar3 == 0) {
    uStack_70 = 0x144d4bc26;
    uVar5 = FUN_145071a20(local_38);
  }
  else {
    uVar6 = (ulonglong)uVar3 * 0x10 + 0xf;
    if (uVar6 <= (ulonglong)uVar3 * 0x10) {
      uVar6 = 0xffffffffffffff0;
    }
    uStack_70 = 0x144d4bbbf;
    lVar4 = -(uVar6 & 0xfffffffffffffff0);
    puVar7 = auStack_68 + lVar4;
    for (lVar1 = (&DAT_14c791280)[uVar9 * 3]; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x18)) {
      uVar5 = *(undefined8 *)(lVar1 + 0x10);
      pcVar2 = *(code **)(lVar1 + 8);
      *(undefined8 *)(auStack_68 + lVar4 + -8) = 0x144d4bbe1;
      uVar5 = (*pcVar2)(local_38,lVar1,param_2,uVar5);
      *(undefined8 *)(auStack_68 + lVar4 + -8) = 0x144d4bbf2;
      FUN_145071b80(local_38 + lVar4 + (ulonglong)uVar8 * 0x10,uVar5);
      uVar8 = uVar8 + 1;
    }
    *(undefined4 *)((longlong)auStack_48 + lVar4) = 1;
    *(undefined8 *)(auStack_68 + lVar4 + -8) = 0x144d4bc1b;
    uVar5 = FUN_1450721d0(local_38,local_38 + lVar4,uVar3,"CallGlobalExt WhenAll");
  }
  *(undefined8 *)(puVar7 + -8) = 0x144d4bc31;
  FUN_145071b80(param_1,uVar5);
  *(undefined8 *)(puVar7 + -8) = 0x144d4bc3b;
  FUN_144d4baa0(param_2,uVar9);
  return param_1;
}



// FUNCTION 144d4bc60 FUN_144d4bc60 body=1721 status=ok
// SIG undefined FUN_144d4bc60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_144d4bc60(undefined8 *param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  HANDLE pvVar5;
  CAkGameSyncMgr *_Dst;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  
  plVar6 = (longlong *)0x0;
  iVar3 = 1;
  if (DAT_14c791060 == (void *)0x0) {
    pvVar4 = AK::MemoryMgr::Malloc(0x10,0x4d0);
    if (pvVar4 == (void *)0x0) {
      DAT_14c791060 = (void *)0x0;
      iVar3 = 0x34;
      goto LAB_144d4c293;
    }
    memset(pvVar4,0,0x4d0);
    lVar9 = 0xe;
    lVar8 = (longlong)pvVar4 + 0x4c;
    do {
      *(undefined4 *)(lVar8 + -0x4c) = 0;
      *(undefined4 *)(lVar8 + -0x48) = 0;
      InitializeCriticalSection((LPCRITICAL_SECTION)(lVar8 + -0x44));
      *(undefined4 *)(lVar8 + -0x1c) = 0;
      pvVar5 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
      *(HANDLE *)(lVar8 + -0x14) = pvVar5;
      *(undefined8 *)(lVar8 + -0xc) = 0;
      *(undefined8 *)(lVar8 + -4) = 0;
      *(undefined4 *)(lVar8 + 4) = 0;
      lVar8 = lVar8 + 0x58;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    DAT_14c791060 = pvVar4;
    cVar2 = FUN_145074fe0(pvVar4);
    if (cVar2 == '\0') {
      return 0x34;
    }
  }
  cVar2 = FUN_145072120();
  if ((cVar2 == '\0') && (iVar3 = FUN_145071d90(param_1 + 7), iVar3 != 1)) goto LAB_144d4c293;
  if (g_pGameSyncMgr == (CAkGameSyncMgr *)0x0) {
    _Dst = AK::MemoryMgr::Malloc(0x10,0xf0);
    if (_Dst == (CAkGameSyncMgr *)0x0) {
      g_pGameSyncMgr = (CAkGameSyncMgr *)0x0;
      iVar3 = 0x34;
      goto LAB_144d4c293;
    }
    memset(_Dst,0,0xf0);
    *(undefined8 *)(_Dst + 0x20) = 0;
    *(undefined4 *)(_Dst + 0x28) = 0;
    *(undefined8 *)(_Dst + 0x30) = 0;
    *(undefined8 *)(_Dst + 0x38) = 0;
    *(undefined4 *)(_Dst + 0x40) = 0;
    *(undefined2 *)(_Dst + 0x48) = 0;
    *(undefined8 *)(_Dst + 0x50) = 0;
    *(undefined8 *)(_Dst + 0x58) = 0;
    *(undefined8 *)(_Dst + 0x60) = 0;
    *(undefined8 *)(_Dst + 0x68) = 0;
    *(undefined8 *)(_Dst + 0x70) = 0;
    *(undefined8 *)(_Dst + 0x78) = 0;
    *(undefined8 *)(_Dst + 0x80) = 0;
    *(undefined8 *)(_Dst + 0x88) = 0;
    *(undefined8 *)(_Dst + 0x90) = 0;
    *(undefined8 *)(_Dst + 0x98) = 0;
    *(undefined8 *)(_Dst + 0xa0) = 0;
    *(undefined8 *)(_Dst + 0xa8) = 0;
    *(undefined8 *)(_Dst + 0xb0) = 0;
    *(undefined8 *)(_Dst + 0xb8) = 0;
    *(undefined8 *)(_Dst + 0xc0) = 0;
    *(undefined8 *)(_Dst + 200) = 0;
    *(undefined8 *)(_Dst + 0xd0) = 0;
    *(undefined8 *)(_Dst + 0xd8) = 0;
    *(undefined8 *)(_Dst + 0xe0) = 0;
    *(undefined8 *)(_Dst + 0xe8) = 0;
    g_pGameSyncMgr = _Dst;
    iVar3 = FUN_14507e7a0(_Dst);
    if (iVar3 != 1) goto LAB_144d4c293;
  }
  if (DAT_14c791038 == (undefined8 *)0x0) {
    DAT_14c791038 = AK::MemoryMgr::Malloc(0x10,0x98);
    if (DAT_14c791038 == (undefined8 *)0x0) {
      DAT_14c791038 = (undefined8 *)0x0;
      iVar3 = 0x34;
      goto LAB_144d4c293;
    }
    *DAT_14c791038 = 0;
    DAT_14c791038[1] = 0;
    DAT_14c791038[2] = 0;
    DAT_14c791038[3] = 0;
    lVar8 = 6;
    DAT_14c791038[4] = 0;
    DAT_14c791038[5] = 0;
    DAT_14c791038[6] = 0;
    DAT_14c791038[7] = 0;
    DAT_14c791038[8] = 0;
    DAT_14c791038[9] = 0;
    DAT_14c791038[10] = 0;
    DAT_14c791038[0xb] = 0;
    DAT_14c791038[0xc] = 0;
    DAT_14c791038[0xd] = 0;
    DAT_14c791038[0xe] = 0;
    DAT_14c791038[0xf] = 0;
    DAT_14c791038[0x10] = 0;
    DAT_14c791038[0x11] = 0;
    DAT_14c791038[0x12] = 0;
    puVar7 = DAT_14c791038 + 1;
    do {
      *puVar7 = 0;
      puVar7[1] = 0;
      *(undefined4 *)(puVar7 + 2) = 1;
      puVar7 = puVar7 + 3;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    iVar3 = FUN_1450c8b30(DAT_14c791038);
    if (iVar3 != 1) goto LAB_144d4c293;
  }
  if (DAT_14c790fe0 == (longlong *)0x0) {
    if (DAT_14c7910e4 == '\0') {
      DAT_14c791040 = (undefined1 *)0x0;
      pvVar4 = AK::MemoryMgr::Malloc(0x10,0xf8);
      if (pvVar4 != (void *)0x0) {
        plVar6 = (longlong *)FUN_1450b66e0(pvVar4);
        goto LAB_144d4bf70;
      }
      DAT_14c790fe0 = (longlong *)0x0;
    }
    else {
      DAT_14c791040 = &LAB_144d41550;
      pvVar4 = AK::MemoryMgr::Malloc(0x10,0x158);
      if (pvVar4 != (void *)0x0) {
        plVar6 = (longlong *)FUN_1450c00e0(pvVar4);
      }
LAB_144d4bf70:
      DAT_14c790fe0 = plVar6;
      if (plVar6 != (longlong *)0x0) {
        iVar3 = (**(code **)(*plVar6 + 8))();
        if (iVar3 != 1) goto LAB_144d4c293;
        goto LAB_144d4bf91;
      }
    }
    iVar3 = 0x34;
    goto LAB_144d4c293;
  }
LAB_144d4bf91:
  if (DAT_14c790fc0 == (undefined8 *)0x0) {
    puVar7 = AK::MemoryMgr::Malloc(0x10,0xa8);
    if (puVar7 == (undefined8 *)0x0) {
      DAT_14c790fc0 = (undefined8 *)0x0;
      iVar3 = 0x34;
      goto LAB_144d4c293;
    }
    *(undefined8 *)((longlong)puVar7 + 0x14) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x1c) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x24) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x2c) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x34) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x3c) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x44) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x4c) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x54) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x5c) = 0;
    *(undefined8 *)((longlong)puVar7 + 100) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x6c) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x74) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x7c) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x84) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x8c) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x94) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x9c) = 0;
    *(undefined4 *)((longlong)puVar7 + 0xa4) = 0;
    *puVar7 = 0;
    puVar7[1] = 0;
    *(undefined4 *)(puVar7 + 2) = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)(puVar7 + 3));
    puVar7[8] = 0;
    *(undefined4 *)(puVar7 + 9) = 0;
    FUN_1450b12c0(puVar7 + 10);
    DAT_14c790fc0 = puVar7;
    iVar3 = FUN_1450b1f10(puVar7);
    if (iVar3 != 1) goto LAB_144d4c293;
  }
  if (DAT_14c791050 == (undefined8 *)0x0) {
    puVar7 = AK::MemoryMgr::Malloc(0x10,0x50);
    if (puVar7 == (undefined8 *)0x0) {
      DAT_14c791050 = (undefined8 *)0x0;
      iVar3 = 0x34;
      goto LAB_144d4c293;
    }
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)(puVar7 + 4));
    DAT_14c791050 = puVar7;
    iVar3 = FUN_1450c8d10(puVar7);
    if (iVar3 != 1) goto LAB_144d4c293;
  }
  if (g_pRegistryMgr == (CAkRegistryMgr *)0x0) {
    pvVar4 = AK::MemoryMgr::Malloc(0x10,0x40);
    if (pvVar4 == (void *)0x0) {
      g_pRegistryMgr = (CAkRegistryMgr *)0x0;
    }
    else {
      g_pRegistryMgr = (CAkRegistryMgr *)FUN_1450abcf0(pvVar4);
      if (g_pRegistryMgr != (CAkRegistryMgr *)0x0) {
        iVar3 = FUN_1450abd60(g_pRegistryMgr);
        if (iVar3 != 1) goto LAB_144d4c293;
        goto LAB_144d4c0e5;
      }
    }
    iVar3 = 0x34;
    goto LAB_144d4c293;
  }
LAB_144d4c0e5:
  if (DAT_14c791028 == (undefined8 *)0x0) {
    DAT_14c791028 = AK::MemoryMgr::Malloc(0x10,8);
    if (DAT_14c791028 == (undefined8 *)0x0) {
      DAT_14c791028 = (undefined8 *)0x0;
      iVar3 = 0x34;
      goto LAB_144d4c293;
    }
    *DAT_14c791028 = 0;
    iVar3 = FUN_14507d660(DAT_14c791028);
    if (iVar3 != 1) goto LAB_144d4c293;
  }
  if (DAT_14c791068 == (undefined8 *)0x0) {
    DAT_14c791068 = AK::MemoryMgr::Malloc(0x10,0x20);
    if (DAT_14c791068 == (undefined8 *)0x0) {
      DAT_14c791068 = (undefined8 *)0x0;
      iVar3 = 0x34;
      goto LAB_144d4c293;
    }
    *DAT_14c791068 = 0;
    DAT_14c791068[1] = 0;
    DAT_14c791068[2] = 0;
    DAT_14c791068[3] = 0;
  }
  if (DAT_14c790fd0 == 0) {
    pvVar4 = AK::MemoryMgr::Malloc(0x10,0x18);
    if (pvVar4 == (void *)0x0) {
      DAT_14c790fd0 = 0;
    }
    else {
      DAT_14c790fd0 = FUN_1450b3e30(pvVar4);
      if (DAT_14c790fd0 != 0) {
        iVar3 = FUN_1450b3e50(DAT_14c790fd0,DAT_14c791088);
        if (iVar3 != 1) goto LAB_144d4c293;
        goto LAB_144d4c1a6;
      }
    }
    iVar3 = 0x34;
    goto LAB_144d4c293;
  }
LAB_144d4c1a6:
  if (DAT_14c790ff8 == 0) {
    pvVar4 = AK::MemoryMgr::Malloc(0x10,0xb0);
    if (pvVar4 == (void *)0x0) {
      DAT_14c790ff8 = 0;
    }
    else {
      DAT_14c790ff8 = FUN_145075d00(pvVar4);
      if (DAT_14c790ff8 != 0) {
        iVar3 = FUN_145075d90(DAT_14c790ff8);
        if (iVar3 != 1) goto LAB_144d4c293;
        goto LAB_144d4c1f2;
      }
    }
    iVar3 = 0x34;
  }
  else {
LAB_144d4c1f2:
    if ((DAT_14c79c4b0 == 0) && (FUN_1450cb090(), DAT_14c79c4b0 == 0)) {
      iVar3 = 0x34;
    }
    else {
      DAT_14c791078 = _time64((__time64_t *)0x0);
    }
  }
LAB_144d4c293:
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = CONCAT44(DAT_14c79108c,DAT_14c791088);
    *param_1 = _DAT_14c791080;
    param_1[1] = uVar1;
    uVar1 = _DAT_14c791098;
    param_1[2] = _DAT_14c791090;
    param_1[3] = uVar1;
    uVar1 = uRam000000014c7910a8;
    param_1[4] = _DAT_14c7910a0;
    param_1[5] = uVar1;
    uVar1 = DAT_14c7910b8;
    param_1[6] = _DAT_14c7910b0;
    param_1[7] = uVar1;
    uVar1 = _DAT_14c7910c8;
    param_1[8] = _DAT_14c7910c0;
    param_1[9] = uVar1;
    uVar1 = _DAT_14c7910d8;
    param_1[10] = _DAT_14c7910d0;
    param_1[0xb] = uVar1;
    uVar1 = DAT_14c7910e8;
    param_1[0xc] = CONCAT44(_DAT_14c7910e4,DAT_14c7910e0);
    param_1[0xd] = uVar1;
    uVar1 = DAT_14c7910f8;
    param_1[0xe] = DAT_14c7910f0;
    param_1[0xf] = uVar1;
    uVar1 = _DAT_14c791108;
    param_1[0x10] = _DAT_14c791100;
    param_1[0x11] = uVar1;
    uVar1 = _DAT_14c791118;
    param_1[0x12] = _DAT_14c791110;
    param_1[0x13] = uVar1;
    uVar1 = _DAT_14c791128;
    param_1[0x14] = _DAT_14c791120;
    param_1[0x15] = uVar1;
  }
  return iVar3;
}



// FUNCTION 144d4c320 FUN_144d4c320 body=714 status=ok
// SIG undefined FUN_144d4c320(void)

undefined4
FUN_144d4c320(undefined8 param_1,longlong param_2,ushort param_3,undefined1 param_4,byte param_5)

{
  float *pfVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  ushort uVar14;
  uint uVar15;
  undefined4 uVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  
  if (DAT_14c790ff4 == '\0') {
    uVar16 = 0x66;
  }
  else if ((param_5 & 3) == 0) {
    uVar16 = 0x1f;
  }
  else {
    uVar14 = FUN_145087e40();
    uVar15 = *(uint *)(DAT_14c790fd8 + 0x30);
    if (0xffff < uVar15) {
      uVar15 = 0xffff;
    }
    if (uVar15 < (uint)uVar14 + (uint)param_3 * 0x40) {
      FUN_145087e40();
      uVar16 = 0x1f;
    }
    else {
      lVar17 = FUN_145080f50(DAT_14c790fd8,0x27);
      if (lVar17 == 0) {
        uVar16 = 0x51;
      }
      else {
        *(undefined1 *)(lVar17 + 0x11) = param_4;
        *(undefined8 *)(lVar17 + 4) = param_1;
        uVar16 = 1;
        *(uint *)(lVar17 + 0xc) = (uint)param_3;
        uVar14 = 0;
        *(byte *)(lVar17 + 0x10) = param_5;
        if (param_3 != 0) {
          do {
            uVar18 = (ulonglong)uVar14;
            auVar5 = *(undefined1 (*) [16])(param_2 + 0x10 + uVar18 * 0x30);
            fVar21 = auVar5._0_4_;
            fVar6 = auVar5._4_4_;
            pfVar1 = (float *)(param_2 + uVar18 * 0x30);
            fVar7 = *pfVar1;
            fVar8 = pfVar1[1];
            fVar9 = pfVar1[2];
            fVar10 = pfVar1[3];
            puVar2 = (ulonglong *)(param_2 + 0x20 + uVar18 * 0x30);
            if (((((0x7fefffffffffffff < (auVar5._8_8_ & 0x7fffffffffffffff)) ||
                  (0x7fefffffffffffff < (*puVar2 & 0x7fffffffffffffff))) ||
                 (0x7fefffffffffffff < (puVar2[1] & 0x7fffffffffffffff))) ||
                ((fVar20 = fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9, fVar20 <= 0.9 ||
                 (1.1 <= fVar20)))) ||
               ((fVar20 = fVar10 * fVar10 + fVar21 * fVar21 + fVar6 * fVar6, fVar20 <= 0.9 ||
                ((1.1 <= fVar20 ||
                 (fVar21 = fVar10 * fVar7 + fVar21 * fVar8 + fVar6 * fVar9, 0.1 <= fVar21 * fVar21))
                )))) {
              bVar13 = false;
            }
            else {
              bVar13 = true;
            }
            if (!bVar13) {
              *(undefined2 *)(lVar17 + 2) = 0x41;
              uVar16 = 0x1f;
              break;
            }
            lVar19 = uVar18 * 0x40;
            uVar14 = uVar14 + 1;
            pfVar1 = (float *)(lVar19 + 0x14 + lVar17);
            *pfVar1 = fVar7;
            pfVar1[1] = fVar8;
            pfVar1[2] = fVar9;
            pfVar1[3] = fVar10;
            puVar3 = (undefined8 *)(param_2 + 0x10 + uVar18 * 0x30);
            uVar11 = puVar3[1];
            puVar4 = (undefined8 *)(lVar19 + 0x24 + lVar17);
            *puVar4 = *puVar3;
            puVar4[1] = uVar11;
            puVar3 = (undefined8 *)(param_2 + 0x20 + uVar18 * 0x30);
            uVar11 = *puVar3;
            uVar12 = puVar3[1];
            *(undefined4 *)(lVar19 + 0x44 + lVar17) = 0x3ff3f;
            *(undefined8 *)(lVar19 + 0x48 + lVar17) = 0x3f800000;
            puVar3 = (undefined8 *)(lVar19 + 0x34 + lVar17);
            *puVar3 = uVar11;
            puVar3[1] = uVar12;
          } while (uVar14 < param_3);
        }
        LOCK();
        *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
        UNLOCK();
      }
    }
  }
  return uVar16;
}



// FUNCTION 144d4c5f0 FUN_144d4c5f0 body=706 status=ok
// SIG undefined FUN_144d4c5f0(void)

undefined4
FUN_144d4c5f0(undefined8 param_1,longlong param_2,ushort param_3,undefined1 param_4,byte param_5)

{
  float *pfVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  bool bVar12;
  ushort uVar13;
  uint uVar14;
  undefined4 uVar15;
  longlong lVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  
  if (DAT_14c790ff4 == '\0') {
    uVar15 = 0x66;
  }
  else if ((param_5 & 3) == 0) {
    uVar15 = 0x1f;
  }
  else {
    uVar13 = FUN_145087e40();
    uVar14 = *(uint *)(DAT_14c790fd8 + 0x30);
    if (0xffff < uVar14) {
      uVar14 = 0xffff;
    }
    if (uVar14 < (uint)uVar13 + (uint)param_3 * 0x40) {
      FUN_145087e40();
      uVar15 = 0x1f;
    }
    else {
      lVar16 = FUN_145080f50(DAT_14c790fd8,0x27);
      if (lVar16 == 0) {
        uVar15 = 0x51;
      }
      else {
        uVar13 = 0;
        *(undefined1 *)(lVar16 + 0x11) = param_4;
        *(undefined8 *)(lVar16 + 4) = param_1;
        uVar15 = 1;
        *(uint *)(lVar16 + 0xc) = (uint)param_3;
        *(byte *)(lVar16 + 0x10) = param_5;
        if (param_3 != 0) {
          do {
            lVar17 = (ulonglong)uVar13 * 0x40;
            auVar5 = *(undefined1 (*) [16])(lVar17 + 0x10 + param_2);
            fVar19 = auVar5._0_4_;
            fVar6 = auVar5._4_4_;
            pfVar1 = (float *)(lVar17 + param_2);
            fVar7 = *pfVar1;
            fVar8 = pfVar1[1];
            fVar9 = pfVar1[2];
            fVar10 = pfVar1[3];
            puVar2 = (ulonglong *)(lVar17 + 0x20 + param_2);
            if (((((0x7fefffffffffffff < (auVar5._8_8_ & 0x7fffffffffffffff)) ||
                  (0x7fefffffffffffff < (*puVar2 & 0x7fffffffffffffff))) ||
                 (0x7fefffffffffffff < (puVar2[1] & 0x7fffffffffffffff))) ||
                ((fVar18 = fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9, fVar18 <= 0.9 ||
                 (1.1 <= fVar18)))) ||
               ((fVar18 = fVar10 * fVar10 + fVar19 * fVar19 + fVar6 * fVar6, fVar18 <= 0.9 ||
                ((1.1 <= fVar18 ||
                 (fVar19 = fVar10 * fVar7 + fVar19 * fVar8 + fVar6 * fVar9, 0.1 <= fVar19 * fVar19))
                )))) {
              bVar12 = false;
            }
            else {
              bVar12 = true;
            }
            if (!bVar12) {
              *(undefined2 *)(lVar16 + 2) = 0x41;
              uVar15 = 0x1f;
              break;
            }
            pfVar1 = (float *)(lVar17 + 0x14 + lVar16);
            *pfVar1 = fVar7;
            pfVar1[1] = fVar8;
            pfVar1[2] = fVar9;
            pfVar1[3] = fVar10;
            uVar13 = uVar13 + 1;
            puVar3 = (undefined8 *)(lVar17 + 0x10 + param_2);
            uVar11 = puVar3[1];
            puVar4 = (undefined8 *)(lVar17 + 0x24 + lVar16);
            *puVar4 = *puVar3;
            puVar4[1] = uVar11;
            puVar3 = (undefined8 *)(lVar17 + 0x20 + param_2);
            uVar11 = puVar3[1];
            puVar4 = (undefined8 *)(lVar17 + 0x34 + lVar16);
            *puVar4 = *puVar3;
            puVar4[1] = uVar11;
            *(undefined4 *)(lVar17 + 0x44 + lVar16) = *(undefined4 *)(lVar17 + 0x30 + param_2);
            *(undefined4 *)(lVar17 + 0x48 + lVar16) = *(undefined4 *)(lVar17 + 0x34 + param_2);
            *(undefined4 *)(lVar17 + 0x4c + lVar16) = *(undefined4 *)(lVar17 + 0x38 + param_2);
          } while (uVar13 < param_3);
        }
        LOCK();
        *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
        UNLOCK();
      }
    }
  }
  return uVar15;
}



// FUNCTION 144d4c8c0 FUN_144d4c8c0 body=214 status=ok
// SIG undefined FUN_144d4c8c0(void)

undefined4 FUN_144d4c8c0(undefined8 param_1,longlong param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ushort uVar5;
  
  if (DAT_14c790ff4 == '\0') {
    uVar2 = 0x66;
  }
  else {
    uVar1 = *(uint *)(DAT_14c790fd8 + 0x30);
    if (0xffff < uVar1) {
      uVar1 = 0xffff;
    }
    if (uVar1 < (ushort)((short)param_3 * 8 + 0x1c)) {
      uVar2 = 0x1f;
    }
    else {
      lVar3 = FUN_145080f50();
      if (lVar3 == 0) {
        uVar2 = 0x51;
      }
      else {
        uVar5 = 0;
        *(undefined8 *)(lVar3 + 4) = param_1;
        *(undefined4 *)(lVar3 + 0xc) = param_4;
        *(uint *)(lVar3 + 0x10) = param_3;
        if (param_3 != 0) {
          do {
            uVar4 = (ulonglong)uVar5;
            uVar5 = uVar5 + 1;
            *(undefined8 *)(uVar4 * 8 + 0x14 + lVar3) = *(undefined8 *)(uVar4 * 8 + param_2);
          } while (uVar5 < param_3);
        }
        LOCK();
        *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
        UNLOCK();
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}



// FUNCTION 144d4c9a0 FUN_144d4c9a0 body=241 status=ok
// SIG undefined FUN_144d4c9a0(void)

undefined4 FUN_144d4c9a0(longlong param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ushort uVar4;
  
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  uVar1 = *(uint *)(DAT_14c790fd8 + 0x30);
  if (0xffff < uVar1) {
    uVar1 = 0xffff;
  }
  if ((ushort)((short)param_2 * 8 + 0x14) <= uVar1) {
    lVar2 = FUN_145080f50();
    if (lVar2 != 0) {
      uVar4 = 0;
      *(undefined4 *)(lVar2 + 4) = param_3;
      *(uint *)(lVar2 + 8) = param_2;
      if (param_2 != 0) {
        do {
          uVar3 = (ulonglong)uVar4;
          uVar4 = uVar4 + 1;
          *(undefined8 *)(uVar3 * 8 + 0xc + lVar2) = *(undefined8 *)(uVar3 * 8 + param_1);
        } while (uVar4 < param_2);
      }
      LOCK();
      *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
      UNLOCK();
      return 1;
    }
    return 0x51;
  }
  return 0x1f;
}



// FUNCTION 144d4caa0 FUN_144d4caa0 body=252 status=ok
// SIG undefined FUN_144d4caa0(void)

undefined8
FUN_144d4caa0(undefined4 param_1,float param_2,undefined8 param_3,undefined4 param_4,int param_5,
             undefined4 param_6,char param_7)

{
  undefined2 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (DAT_14c790ff4 == '\0') {
    uVar2 = 0x66;
  }
  else if (((uint)ABS(param_2) < 0x7f800000) && (param_2 != 3.4028235e+38)) {
    if ((param_5 == 0) && (param_7 == '\0')) {
      uVar1 = FUN_145087e80();
      lVar3 = FUN_145080f50(DAT_14c790fd8,2,uVar1);
    }
    else {
      uVar1 = FUN_145087e90();
      lVar3 = FUN_145080f50(DAT_14c790fd8,3,uVar1);
      *(int *)(lVar3 + 0x18) = param_5;
      *(undefined4 *)(lVar3 + 0x1c) = param_6;
      *(char *)(lVar3 + 0x20) = param_7;
    }
    *(undefined4 *)(lVar3 + 0xc) = param_1;
    *(float *)(lVar3 + 0x10) = param_2;
    *(undefined8 *)(lVar3 + 4) = param_3;
    *(undefined4 *)(lVar3 + 0x14) = param_4;
    LOCK();
    *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
    UNLOCK();
    uVar2 = 1;
  }
  else {
    uVar2 = 0x5f;
  }
  return uVar2;
}



// FUNCTION 144d4cba0 FUN_144d4cba0 body=222 status=ok
// SIG undefined FUN_144d4cba0(void)

undefined8 FUN_144d4cba0(void)

{
  undefined8 uVar1;
  uint uVar2;
  
  if ((DAT_14c790fd8 == 0) || (DAT_14c790ff4 == '\0')) {
    return 0x66;
  }
  if (DAT_14c79bf88 != 1) {
    while ((DAT_14c79bf88 == 0 && (DAT_14c79bf90 == 0))) {
      FUN_145073730(DAT_14c790fd8 + 0x90);
      Sleep(5);
    }
    uVar2 = 0;
    do {
      if (DAT_14c79bf88 != 0) break;
      if (DAT_14c790ff4 != '\0') {
        FUN_145081150(DAT_14c790fd8,1,0);
      }
      FUN_145073730(DAT_14c790fd8 + 0x90);
      Sleep(5);
      uVar2 = uVar2 + 1;
    } while (uVar2 < 200);
  }
  uVar1 = 0x5c;
  if (DAT_14c79bf88 == 1) {
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 144d4cc80 FUN_144d4cc80 body=308 status=ok
// SIG undefined FUN_144d4cc80(void)

longlong * FUN_144d4cc80(uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  
  lVar3 = DAT_14c791060;
  if (DAT_14c790ff4 != '\0') {
    do {
      while (iVar2 = *(int *)(lVar3 + 0x2c0), iVar2 < 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x2c8));
        if (*(int *)(lVar3 + 0x2c0) < 0) goto LAB_144d4ccbc;
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x2c8));
      }
      LOCK();
      bVar5 = iVar2 == *(int *)(lVar3 + 0x2c0);
      if (bVar5) {
        *(int *)(lVar3 + 0x2c0) = iVar2 + 1;
      }
      UNLOCK();
    } while (!bVar5);
LAB_144d4ccbc:
    if (*(uint *)(lVar3 + 0x308) == 0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      for (plVar4 = *(longlong **)
                     (*(longlong *)(lVar3 + 0x300) +
                     ((ulonglong)param_1 % (ulonglong)*(uint *)(lVar3 + 0x308)) * 8);
          plVar4 != (longlong *)0x0; plVar4 = (longlong *)plVar4[1]) {
        if (*(uint *)(plVar4 + 2) == param_1) goto LAB_144d4ccf0;
      }
      plVar4 = (longlong *)0x0;
LAB_144d4ccf0:
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar4 + 0x14) = *(int *)((longlong)plVar4 + 0x14) + 1;
        UNLOCK();
      }
    }
    iVar2 = *(int *)(lVar3 + 0x2c0);
    while (-1 < iVar2) {
      LOCK();
      bVar5 = iVar2 == *(int *)(lVar3 + 0x2c0);
      if (bVar5) {
        *(int *)(lVar3 + 0x2c0) = iVar2 + -1;
      }
      UNLOCK();
      if (bVar5) {
        if ((iVar2 + -1 == 0) && (0 < *(int *)(lVar3 + 0x2f0))) {
          SetEvent(*(HANDLE *)(lVar3 + 0x2f8));
        }
        goto LAB_144d4cd54;
      }
      iVar2 = *(int *)(lVar3 + 0x2c0);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x2c8));
LAB_144d4cd54:
    if (plVar4 != (longlong *)0x0) {
      if ((char)plVar4[0xf] == '\0') {
        return plVar4;
      }
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0x14);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 144d4cdc0 FUN_144d4cdc0 body=189 status=ok
// SIG undefined FUN_144d4cdc0(void)

undefined8
FUN_144d4cdc0(undefined4 param_1,uint param_2,undefined8 *param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9)

{
  undefined8 uVar1;
  undefined4 uStack_9c;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  if ((0x1c < param_2 - 1) && (param_2 < 0x20)) {
    local_48 = *param_3;
    uStack_40 = param_3[1];
    local_58 = CONCAT44(param_2,param_5);
    uStack_50 = CONCAT44(uStack_9c,param_1);
    local_38 = param_6;
    uStack_30 = param_7;
    uStack_70 = (undefined4)param_8;
    uStack_6c = (undefined4)((ulonglong)param_8 >> 0x20);
    local_18 = param_9;
    uStack_20 = uStack_70;
    uStack_1c = uStack_6c;
    local_28 = param_4;
    uVar1 = (**(code **)(*DAT_14c790fe0 + 0x18))(DAT_14c790fe0,&local_58);
    return uVar1;
  }
  return 100;
}



// FUNCTION 144d4ce80 FUN_144d4ce80 body=298 status=ok
// SIG undefined FUN_144d4ce80(void)

int FUN_144d4ce80(int param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,uint param_5
                 ,char param_6)

{
  int iVar1;
  uint uStack_9c;
  uint7 uStack_8f;
  undefined8 local_68;
  ulonglong local_58;
  longlong lStack_50;
  undefined8 local_48;
  longlong lStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  uint uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  
  if (param_5 == 0) {
    iVar1 = 0x1f;
  }
  else {
    if (param_5 == 1) {
      local_68 = (undefined4 *)CONCAT44(local_68._4_4_,*param_4);
    }
    else {
      local_68 = param_4;
      if (param_6 != '\0') {
        local_68 = AK::MemoryMgr::Malloc(0,(ulonglong)param_5 << 2);
        if (local_68 == (undefined4 *)0x0) {
          return 0x34;
        }
        memcpy(local_68,param_4,(ulonglong)param_5 << 2);
      }
    }
    local_58 = (ulonglong)((param_1 != 0) + 2);
    lStack_50 = (ulonglong)uStack_9c << 0x20;
    lStack_40 = (ulonglong)uStack_8f << 8;
    local_48 = 0;
    local_28 = 0;
    uStack_20 = param_5;
    local_18 = (undefined4)local_68;
    uStack_14 = local_68._4_4_;
    local_38 = param_2;
    uStack_30 = param_3;
    iVar1 = (**(code **)(*DAT_14c790fe0 + 0x18))(DAT_14c790fe0,&local_58);
    if ((iVar1 != 1) && (param_5 != 1)) {
      AK::MemoryMgr::Free(0,local_68);
    }
  }
  return iVar1;
}



// FUNCTION 144d4cfb0 FUN_144d4cfb0 body=313 status=ok
// SIG undefined FUN_144d4cfb0(void)

int FUN_144d4cfb0(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 *param_6,uint param_7,char param_8)

{
  int iVar1;
  uint uStack_9c;
  uint7 uStack_8f;
  undefined4 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong lStack_50;
  undefined8 local_48;
  longlong lStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  uint uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if ((param_7 == 0) || (param_6 == (undefined4 *)0x0)) {
    iVar1 = 0x1f;
  }
  else {
    local_68 = CONCAT31(local_68._1_3_,param_3);
    if (param_7 == 1) {
      uStack_60 = (undefined4 *)CONCAT44(uStack_60._4_4_,*param_6);
    }
    else if (param_8 == '\0') {
      uStack_60 = param_6;
    }
    else {
      uStack_60 = AK::MemoryMgr::Malloc(0,(ulonglong)param_7 << 2);
      if (uStack_60 == (undefined4 *)0x0) {
        return 0x34;
      }
      memcpy(uStack_60,param_6,(ulonglong)param_7 << 2);
    }
    local_58 = 4;
    lStack_50 = (ulonglong)uStack_9c << 0x20;
    lStack_40 = (ulonglong)uStack_8f << 8;
    local_48 = 0;
    local_28 = 0;
    uStack_1c = param_5;
    local_18 = local_68;
    uStack_14 = param_7;
    uStack_10 = (undefined4)uStack_60;
    uStack_c = uStack_60._4_4_;
    local_38 = param_1;
    uStack_30 = param_2;
    uStack_20 = param_4;
    iVar1 = (**(code **)(*DAT_14c790fe0 + 0x18))(DAT_14c790fe0,&local_58);
    if ((iVar1 != 1) && (param_7 != 1)) {
      AK::MemoryMgr::Free(0,uStack_60);
    }
  }
  return iVar1;
}



// FUNCTION 144d4d0f0 FUN_144d4d0f0 body=223 status=ok
// SIG undefined FUN_144d4d0f0(void)

uint FUN_144d4d0f0(char *param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  int iVar6;
  longlong lVar7;
  rsize_t _MaxCount;
  char acStack_119 [273];
  longlong lVar5;
  
  lVar4 = -1;
  do {
    lVar5 = lVar4;
    lVar4 = lVar5 + 1;
  } while (param_1[lVar4] != '\0');
  _MaxCount = 0x103;
  if (lVar5 + 2U < 0x104) {
    lVar4 = -1;
    do {
      lVar5 = lVar4;
      lVar4 = lVar5 + 1;
    } while (param_1[lVar4] != '\0');
    _MaxCount = lVar5 + 2;
  }
  strncpy_s(acStack_119 + 1,0x104,param_1,_MaxCount);
  acStack_119[_MaxCount + 1] = '\0';
  lVar4 = -1;
  do {
    lVar7 = lVar4 + 1;
    lVar5 = lVar4 + 2;
    lVar4 = lVar7;
  } while (acStack_119[lVar5] != '\0');
  iVar6 = (int)lVar7 + -1;
  lVar4 = (longlong)iVar6;
  if (-1 < iVar6) {
    do {
      if (acStack_119[lVar4 + 1] == '.') {
        acStack_119[(longlong)iVar6 + 1] = '\0';
        break;
      }
      iVar6 = iVar6 + -1;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  pbVar1 = (byte *)(acStack_119 + 1);
  uVar3 = 0x811c9dc5;
  while (acStack_119[1] != 0) {
    pbVar1 = pbVar1 + 1;
    bVar2 = acStack_119[1] + 0x20;
    if (0x19 < (byte)(acStack_119[1] + 0xbfU)) {
      bVar2 = acStack_119[1];
    }
    uVar3 = uVar3 * 0x1000193 ^ (uint)bVar2;
    acStack_119[1] = *pbVar1;
  }
  return uVar3;
}



// FUNCTION 144d4d1d0 FUN_144d4d1d0 body=339 status=ok
// SIG undefined FUN_144d4d1d0(void)

uint FUN_144d4d1d0(LPCWSTR param_1)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  rsize_t _MaxCount;
  byte local_228 [272];
  CHAR local_118;
  char acStack_117 [258];
  undefined1 local_15;
  
  lVar5 = -1;
  do {
    lVar5 = lVar5 + 1;
  } while (param_1[lVar5] != L'\0');
  if ((uint)lVar5 < 0x102) {
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (param_1[lVar5] != L'\0');
  }
  else {
    lVar5 = 0x102;
  }
  iVar3 = WideCharToMultiByte(0xfde9,0,param_1,(int)lVar5,&local_118,0x103,(LPCSTR)0x0,(LPBOOL)0x0);
  (&local_118)[iVar3] = '\0';
  local_15 = 0;
  lVar5 = -1;
  do {
    lVar7 = lVar5;
    lVar5 = lVar7 + 1;
  } while (acStack_117[lVar7] != '\0');
  _MaxCount = lVar7 + 2;
  if (0x103 < _MaxCount) {
    _MaxCount = 0x103;
  }
  strncpy_s((char *)local_228,0x104,&local_118,_MaxCount);
  local_228[_MaxCount] = 0;
  lVar5 = -1;
  do {
    lVar6 = lVar5 + 1;
    lVar7 = lVar5 + 1;
    lVar5 = lVar6;
  } while (local_228[lVar7] != 0);
  iVar3 = (int)lVar6 + -1;
  lVar5 = (longlong)iVar3;
  if (-1 < iVar3) {
    do {
      if (local_228[lVar5] == 0x2e) {
        local_228[iVar3] = 0;
        break;
      }
      iVar3 = iVar3 + -1;
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  pbVar1 = local_228;
  uVar4 = 0x811c9dc5;
  while (local_228[0] != 0) {
    pbVar1 = pbVar1 + 1;
    bVar2 = local_228[0] + 0x20;
    if (0x19 < (byte)(local_228[0] + 0xbf)) {
      bVar2 = local_228[0];
    }
    uVar4 = uVar4 * 0x1000193 ^ (uint)bVar2;
    local_228[0] = *pbVar1;
  }
  return uVar4;
}



// FUNCTION 144d4d330 FUN_144d4d330 body=278 status=ok
// SIG undefined FUN_144d4d330(void)

void FUN_144d4d330(undefined4 param_1,uint param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_b8 [16];
  undefined4 local_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_88;
  undefined1 *puStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined1 *puStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  iVar1 = (**(code **)(*DAT_14c790fe0 + 0x20))(DAT_14c790fe0,local_b8);
  if (iVar1 == 1) {
    if ((param_2 - 1 < 0x1d) || (0x1f < param_2)) {
      uVar2 = 100;
    }
    else {
      local_48 = *param_3;
      uStack_40 = param_3[1];
      local_88 = DAT_14c791040;
      puStack_80 = local_b8;
      local_a8 = 1;
      local_58 = CONCAT44(param_2,1);
      uStack_50 = CONCAT44(uStack_9c,param_1);
      local_38 = DAT_14c791040;
      local_68 = 0;
      local_78 = 2;
      uStack_70._0_4_ = (undefined4)param_4;
      uStack_70._4_4_ = (undefined4)((ulonglong)param_4 >> 0x20);
      local_28 = 2;
      uStack_24 = uStack_74;
      uStack_20 = (undefined4)uStack_70;
      uStack_1c = uStack_70._4_4_;
      local_18 = 0;
      uStack_14 = uStack_64;
      uStack_10 = uStack_60;
      uStack_c = uStack_5c;
      uStack_a4 = param_2;
      uStack_a0 = param_1;
      uStack_70 = param_4;
      puStack_30 = puStack_80;
      uVar2 = (**(code **)(*DAT_14c790fe0 + 0x18))(DAT_14c790fe0,&local_58);
    }
    (**(code **)(*DAT_14c790fe0 + 0x28))(DAT_14c790fe0,local_b8,uVar2);
  }
  return;
}



// FUNCTION 144d4d450 FUN_144d4d450 body=202 status=ok
// SIG undefined FUN_144d4d450(void)

undefined8
FUN_144d4d450(uint param_1,undefined4 param_2,uint param_3,undefined8 *param_4,undefined8 param_5,
             undefined8 param_6,undefined4 param_7)

{
  undefined8 uVar1;
  undefined4 uStack_9c;
  undefined4 uStack_6c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if ((0x1c < param_3 - 1) && (param_3 < 0x20)) {
    local_48 = *param_4;
    uStack_40 = param_4[1];
    uStack_6c = CONCAT31(uStack_6c._1_3_,param_1 == 2);
    local_58 = CONCAT44(param_3,((param_1 & 0xfffffffd) != 0) + 6);
    uStack_50 = CONCAT44(uStack_9c,param_2);
    local_38 = param_5;
    uStack_30 = param_6;
    local_28 = 0;
    uStack_20 = param_7;
    uStack_1c = uStack_6c;
    uVar1 = (**(code **)(*DAT_14c790fe0 + 0x18))(DAT_14c790fe0,&local_58);
    return uVar1;
  }
  return 100;
}



// FUNCTION 144d4d520 FUN_144d4d520 body=412 status=ok
// SIG undefined FUN_144d4d520(void)

undefined8
FUN_144d4d520(int param_1,undefined8 *param_2,uint param_3,undefined8 param_4,undefined8 param_5)

{
  uint uVar1;
  undefined8 uVar2;
  uint *puVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint uStack_ac;
  uint7 uStack_9f;
  ulonglong local_68;
  longlong lStack_60;
  undefined8 local_58;
  longlong lStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_30;
  uint local_28;
  
  uVar4 = (ulonglong)param_3;
  if (DAT_14c790ff4 == '\0') {
    uVar2 = 0x66;
  }
  else if (param_3 == 0) {
    uVar2 = 0x1f;
  }
  else if (param_3 == 1) {
    local_28 = AK::SoundEngine::GetIDFromString((wchar_t *)*param_2);
    lStack_50 = (ulonglong)uStack_9f << 8;
    local_68 = (ulonglong)((param_1 != 0) + 2);
    lStack_60 = (ulonglong)uStack_ac << 0x20;
    local_58 = 0;
    uStack_40 = param_5;
    local_38 = 0;
    uStack_30 = 1;
    local_48 = param_4;
    uVar2 = (**(code **)(*DAT_14c790fe0 + 0x18))(DAT_14c790fe0,&local_68);
  }
  else {
    puVar3 = AK::MemoryMgr::Malloc(0,uVar4 * 4);
    if (puVar3 == (uint *)0x0) {
      uVar2 = 0x34;
    }
    else {
      puVar5 = puVar3;
      if (param_3 != 0) {
        do {
          uVar1 = AK::SoundEngine::GetIDFromString((wchar_t *)*param_2);
          *puVar5 = uVar1;
          param_2 = param_2 + 1;
          uVar4 = uVar4 - 1;
          puVar5 = puVar5 + 1;
        } while (uVar4 != 0);
      }
      uVar2 = FUN_144d4ce80(param_1,param_4,param_5,puVar3,param_3,0);
    }
  }
  return uVar2;
}



// FUNCTION 144d4d6c0 FUN_144d4d6c0 body=575 status=ok
// SIG undefined FUN_144d4d6c0(void)

undefined8
FUN_144d4d6c0(int param_1,undefined8 *param_2,uint param_3,undefined8 param_4,undefined8 param_5)

{
  byte bVar1;
  byte *pbVar2;
  undefined8 uVar3;
  uint *puVar4;
  uint uVar5;
  byte bVar6;
  ulonglong uVar7;
  uint *puVar8;
  uint uVar9;
  uint uStack_ac;
  uint7 uStack_9f;
  ulonglong local_68;
  longlong lStack_60;
  undefined8 local_58;
  longlong lStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_30;
  uint local_28;
  
  uVar7 = (ulonglong)param_3;
  if (DAT_14c790ff4 == '\0') {
    uVar3 = 0x66;
  }
  else if (param_3 == 0) {
    uVar3 = 0x1f;
  }
  else if (param_3 == 1) {
    pbVar2 = (byte *)*param_2;
    if (pbVar2 == (byte *)0x0) {
      local_28 = 0;
    }
    else {
      bVar1 = *pbVar2;
      local_28 = 0x811c9dc5;
      while (bVar1 != 0) {
        uVar9 = (uint)bVar1;
        bVar6 = bVar1 + 0xbf;
        pbVar2 = pbVar2 + 1;
        bVar1 = *pbVar2;
        uVar5 = uVar9 + 0x20 & 0xff;
        if (0x19 < bVar6) {
          uVar5 = uVar9;
        }
        local_28 = local_28 * 0x1000193 ^ uVar5;
      }
    }
    lStack_50 = (ulonglong)uStack_9f << 8;
    local_68 = (ulonglong)((param_1 != 0) + 2);
    lStack_60 = (ulonglong)uStack_ac << 0x20;
    local_58 = 0;
    uStack_40 = param_5;
    local_38 = 0;
    uStack_30 = 1;
    local_48 = param_4;
    uVar3 = (**(code **)(*DAT_14c790fe0 + 0x18))(DAT_14c790fe0,&local_68);
  }
  else {
    puVar4 = AK::MemoryMgr::Malloc(0,uVar7 * 4);
    if (puVar4 == (uint *)0x0) {
      uVar3 = 0x34;
    }
    else {
      puVar8 = puVar4;
      if (param_3 != 0) {
        do {
          pbVar2 = (byte *)*param_2;
          if (pbVar2 == (byte *)0x0) {
            uVar9 = 0;
          }
          else {
            uVar9 = 0x811c9dc5;
            bVar1 = *pbVar2;
            while (bVar1 != 0) {
              pbVar2 = pbVar2 + 1;
              bVar6 = bVar1 + 0x20;
              if (0x19 < (byte)(bVar1 + 0xbf)) {
                bVar6 = bVar1;
              }
              uVar9 = uVar9 * 0x1000193 ^ (uint)bVar6;
              bVar1 = *pbVar2;
            }
          }
          *puVar8 = uVar9;
          param_2 = param_2 + 1;
          uVar7 = uVar7 - 1;
          puVar8 = puVar8 + 1;
        } while (uVar7 != 0);
      }
      uVar3 = FUN_144d4ce80(param_1,param_4,param_5,puVar4,param_3,0);
    }
  }
  return uVar3;
}



// FUNCTION 144d4d900 GetPosition body=243 status=ok
// SIG AKRESULT GetPosition(__uint64 param_1, AkWorldTransform * param_2)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* enum AKRESULT __cdecl AK::SoundEngine::Query::GetPosition(unsigned __int64,class AkWorldTransform
   & __ptr64) */

AKRESULT __cdecl AK::SoundEngine::Query::GetPosition(__uint64 param_1,AkWorldTransform *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  CAkRegisteredObj *pCVar5;
  undefined8 *puVar6;
  AKRESULT AVar7;
  undefined1 local_res18 [16];
  
                    /* 0x4d4d900  116
                       ?GetPosition@Query@SoundEngine@AK@@YA?AW4AKRESULT@@_KAEAVAkWorldTransform@@@Z
                        */
  FUN_1450719c0(local_res18);
  pCVar5 = CAkRegistryMgr::GetObj(g_pRegistryMgr,param_1);
  if ((pCVar5 == (CAkRegisteredObj *)0x0) || (*(longlong *)(pCVar5 + 8) == 0)) {
    AVar7 = 0xf;
  }
  else {
    puVar6 = *(undefined8 **)(*(longlong *)(pCVar5 + 8) + 0x20);
    if (puVar6 == (undefined8 *)0x0) {
      _DAT_14c791438 = 0x3f800000;
      _DAT_14c791448 = 0;
      _DAT_14c791450 = 0;
      DAT_14c791440._4_4_ = 0;
      puVar6 = (undefined8 *)&DAT_14c791430;
      _DAT_14c791458 = 0;
      _DAT_14c79143c = 0x3f80000000000000;
      _DAT_14c791430 = 0;
      _DAT_14c791460 = 0x3ff3f;
      _DAT_14c791464 = 0x3f800000;
    }
    uVar4 = puVar6[1];
    AVar7 = 1;
    *(undefined8 *)param_2 = *puVar6;
    *(undefined8 *)(param_2 + 8) = uVar4;
    uVar4 = puVar6[3];
    *(undefined8 *)(param_2 + 0x10) = puVar6[2];
    *(undefined8 *)(param_2 + 0x18) = uVar4;
    uVar1 = *(undefined4 *)((longlong)puVar6 + 0x24);
    uVar2 = *(undefined4 *)(puVar6 + 5);
    uVar3 = *(undefined4 *)((longlong)puVar6 + 0x2c);
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(puVar6 + 4);
    *(undefined4 *)(param_2 + 0x24) = uVar1;
    *(undefined4 *)(param_2 + 0x28) = uVar2;
    *(undefined4 *)(param_2 + 0x2c) = uVar3;
  }
  FUN_1450719f0(local_res18);
  return AVar7;
}



// FUNCTION 144d4da00 GetListeners body=190 status=ok
// SIG AKRESULT GetListeners(__uint64 param_1, __uint64 * param_2, uint * param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::Query::GetListeners(unsigned __int64,unsigned __int64 *
   __ptr64,unsigned int & __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::Query::GetListeners(__uint64 param_1,__uint64 *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  CAkRegisteredObj *pCVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  AKRESULT AVar7;
  undefined1 local_res20 [8];
  
                    /* 0x4d4da00  100
                       ?GetListeners@Query@SoundEngine@AK@@YA?AW4AKRESULT@@_KPEA_KAEAI@Z */
  FUN_1450719c0(local_res20);
  pCVar3 = CAkRegistryMgr::GetObj(g_pRegistryMgr,param_1);
  if (pCVar3 == (CAkRegisteredObj *)0x0) {
    AVar7 = 0xf;
  }
  else {
    uVar1 = *param_3;
    lVar4 = FUN_1450d2460(pCVar3);
    uVar6 = 0;
    uVar5 = *(uint *)(lVar4 + 0x18);
    *param_3 = uVar5;
    if (param_2 != (__uint64 *)0x0) {
      while( true ) {
        uVar5 = *param_3;
        uVar2 = uVar5;
        if (uVar1 <= uVar5) {
          uVar2 = uVar1;
        }
        if (uVar2 <= (uint)uVar6) break;
        lVar4 = FUN_1450d2460(pCVar3);
        param_2[uVar6] = *(__uint64 *)(uVar6 * 8 + *(longlong *)(lVar4 + 0x10));
        uVar6 = (ulonglong)((uint)uVar6 + 1);
      }
    }
    AVar7 = (uVar1 < uVar5) + 1;
  }
  FUN_1450719f0(local_res20);
  return AVar7;
}



// FUNCTION 144d4dac0 GetListenerPosition body=116 status=ok
// SIG AKRESULT GetListenerPosition(__uint64 param_1, AkWorldTransform * param_2)

/* enum AKRESULT __cdecl AK::SoundEngine::Query::GetListenerPosition(unsigned __int64,class
   AkWorldTransform & __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::Query::GetListenerPosition(__uint64 param_1,AkWorldTransform *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  CAkRegisteredObj *pCVar6;
  AKRESULT AVar7;
  undefined1 local_res18 [16];
  
                    /* 0x4d4dac0  98
                       ?GetListenerPosition@Query@SoundEngine@AK@@YA?AW4AKRESULT@@_KAEAVAkWorldTransform@@@Z
                        */
  FUN_1450719c0(local_res18);
  pCVar6 = CAkRegistryMgr::GetObj(g_pRegistryMgr,param_1);
  if ((pCVar6 == (CAkRegisteredObj *)0x0) || (lVar1 = *(longlong *)(pCVar6 + 0x20), lVar1 == 0)) {
    AVar7 = 2;
  }
  else {
    uVar5 = *(undefined8 *)(lVar1 + 0x68);
    AVar7 = 1;
    *(undefined8 *)param_2 = *(undefined8 *)(lVar1 + 0x60);
    *(undefined8 *)(param_2 + 8) = uVar5;
    uVar5 = *(undefined8 *)(lVar1 + 0x78);
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(lVar1 + 0x70);
    *(undefined8 *)(param_2 + 0x18) = uVar5;
    uVar2 = *(undefined4 *)(lVar1 + 0x84);
    uVar3 = *(undefined4 *)(lVar1 + 0x88);
    uVar4 = *(undefined4 *)(lVar1 + 0x8c);
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(lVar1 + 0x80);
    *(undefined4 *)(param_2 + 0x24) = uVar2;
    *(undefined4 *)(param_2 + 0x28) = uVar3;
    *(undefined4 *)(param_2 + 0x2c) = uVar4;
  }
  FUN_1450719f0(local_res18);
  return AVar7;
}



// FUNCTION 144d4db40 GetListenerSpatialization body=94 status=ok
// SIG AKRESULT GetListenerSpatialization(__uint64 param_1, bool * param_2, float * * param_3, AkChannelConfig * param_4)

/* enum AKRESULT __cdecl AK::SoundEngine::Query::GetListenerSpatialization(unsigned __int64,bool &
   __ptr64,float * __ptr64 & __ptr64,struct AkChannelConfig & __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::Query::GetListenerSpatialization
          (__uint64 param_1,bool *param_2,float **param_3,AkChannelConfig *param_4)

{
  AKRESULT AVar1;
  undefined1 local_18 [16];
  
                    /* 0x4d4db40  99
                       ?GetListenerSpatialization@Query@SoundEngine@AK@@YA?AW4AKRESULT@@_KAEA_NAEAPEAMAEAUAkChannelConfig@@@Z
                        */
  FUN_1450719c0(local_18);
  AVar1 = FUN_145077df0(param_1,param_2,param_3,param_4);
  FUN_1450719f0(local_18);
  return AVar1;
}



// FUNCTION 144d4dba0 GetRTPCValue body=368 status=ok
// SIG AKRESULT GetRTPCValue(uint param_1, __uint64 param_2, uint param_3, float * param_4, RTPCValue_type * param_5)

/* enum AKRESULT __cdecl AK::SoundEngine::Query::GetRTPCValue(unsigned int,unsigned __int64,unsigned
   int,float & __ptr64,enum AK::SoundEngine::Query::RTPCValue_type & __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::Query::GetRTPCValue
          (uint param_1,__uint64 param_2,uint param_3,float *param_4,RTPCValue_type *param_5)

{
  RTPCValue_type RVar1;
  RTPCValue_type *pRVar2;
  int iVar3;
  uint uVar4;
  RTPCValue_type RVar5;
  AKRESULT AVar6;
  undefined1 local_58 [8];
  CAkRegisteredObj *local_50;
  uint local_48;
  undefined4 local_40;
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_28;
  
                    /* 0x4d4dba0  118
                       ?GetRTPCValue@Query@SoundEngine@AK@@YA?AW4AKRESULT@@I_KIAEAMAEAW4RTPCValue_type@123@@Z
                        */
  pRVar2 = param_5;
  FUN_1450719c0(local_58);
  RVar5 = 0;
  RVar1 = *param_5;
  if (RVar1 == 0) {
LAB_144d4dcb4:
    param_5._4_4_ = (uint)param_5._5_3_ << 8;
    iVar3 = FUN_14507fde0(g_pGameSyncMgr,CONCAT44(param_5._4_4_,param_1),param_4);
    if (iVar3 == 0) goto LAB_144d4dcdf;
  }
  else {
    uVar4 = 0;
    if (RVar1 == 1) {
      param_2 = 0xffffffffffffffff;
    }
    else if (RVar1 != 2) {
      if (RVar1 != 3) goto LAB_144d4dcb4;
      uVar4 = param_3;
      if ((param_3 != 0) && (param_2 == 0xffffffffffffffff)) {
        param_2 = FUN_1450b29c0(DAT_14c790fc0,param_3);
      }
    }
    local_50 = CAkRegistryMgr::GetObj(g_pRegistryMgr,param_2);
    param_5._4_4_ = (uint)param_5._5_3_ << 8;
    local_40 = 0;
    local_38 = 0xff;
    local_30 = 0xff;
    local_28 = 0;
    local_48 = uVar4;
    iVar3 = FUN_14507fa00(g_pGameSyncMgr,CONCAT44(param_5._4_4_,param_1),&local_50,param_4,&local_50
                         );
    if (iVar3 != 1) {
      if (iVar3 == 3) {
        *pRVar2 = 0;
        AVar6 = 1;
        goto LAB_144d4dcea;
      }
LAB_144d4dcdf:
      AVar6 = 0xf;
      *pRVar2 = 4;
      goto LAB_144d4dcea;
    }
    if (local_48 != 0) {
      *pRVar2 = 3;
      AVar6 = 1;
      goto LAB_144d4dcea;
    }
    RVar5 = (local_50 != (CAkRegisteredObj *)0x0) + 1;
  }
  *pRVar2 = RVar5;
  AVar6 = 1;
LAB_144d4dcea:
  FUN_1450719f0(local_58);
  return AVar6;
}



// FUNCTION 144d4dd10 GetRTPCValue body=60 status=ok
// SIG AKRESULT GetRTPCValue(wchar_t * param_1, __uint64 param_2, uint param_3, float * param_4, RTPCValue_type * param_5)

/* enum AKRESULT __cdecl AK::SoundEngine::Query::GetRTPCValue(wchar_t const * __ptr64,unsigned
   __int64,unsigned int,float & __ptr64,enum AK::SoundEngine::Query::RTPCValue_type & __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::Query::GetRTPCValue
          (wchar_t *param_1,__uint64 param_2,uint param_3,float *param_4,RTPCValue_type *param_5)

{
  uint uVar1;
  AKRESULT AVar2;
  
                    /* 0x4d4dd10  120
                       ?GetRTPCValue@Query@SoundEngine@AK@@YA?AW4AKRESULT@@PEB_W_KIAEAMAEAW4RTPCValue_type@123@@Z
                        */
  uVar1 = GetIDFromString(param_1);
  AVar2 = GetRTPCValue(uVar1,param_2,param_3,param_4,param_5);
  return AVar2;
}



// FUNCTION 144d4dd50 GetRTPCValue body=60 status=ok
// SIG AKRESULT GetRTPCValue(char * param_1, __uint64 param_2, uint param_3, float * param_4, RTPCValue_type * param_5)

/* enum AKRESULT __cdecl AK::SoundEngine::Query::GetRTPCValue(char const * __ptr64,unsigned
   __int64,unsigned int,float & __ptr64,enum AK::SoundEngine::Query::RTPCValue_type & __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::Query::GetRTPCValue
          (char *param_1,__uint64 param_2,uint param_3,float *param_4,RTPCValue_type *param_5)

{
  uint uVar1;
  AKRESULT AVar2;
  
                    /* 0x4d4dd50  119
                       ?GetRTPCValue@Query@SoundEngine@AK@@YA?AW4AKRESULT@@PEBD_KIAEAMAEAW4RTPCValue_type@123@@Z
                        */
  uVar1 = GetIDFromString(param_1);
  AVar2 = GetRTPCValue(uVar1,param_2,param_3,param_4,param_5);
  return AVar2;
}



// FUNCTION 144d4dd90 GetSwitch body=173 status=ok
// SIG AKRESULT GetSwitch(uint param_1, __uint64 param_2, uint * param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::Query::GetSwitch(unsigned int,unsigned __int64,unsigned
   int & __ptr64) */

AKRESULT __cdecl AK::SoundEngine::Query::GetSwitch(uint param_1,__uint64 param_2,uint *param_3)

{
  AKRESULT AVar1;
  undefined1 local_res8 [8];
  uint local_res18 [2];
  uint local_res20;
  undefined4 uStackX_24;
  CAkRegisteredObj *local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined1 local_30;
  undefined1 local_28;
  undefined8 local_20;
  
                    /* 0x4d4dd90  131  ?GetSwitch@Query@SoundEngine@AK@@YA?AW4AKRESULT@@I_KAEAI@Z */
  FUN_1450719c0(local_res8);
  local_40 = 0;
  local_38 = 0;
  local_20 = 0;
  local_30 = 0xff;
  local_28 = 0xff;
  local_48 = CAkRegistryMgr::GetObj(g_pRegistryMgr,param_2);
  uStackX_24 = CONCAT31(uStackX_24._1_3_,2);
  local_res20 = param_1;
  AVar1 = FUN_14507fa00(g_pGameSyncMgr,CONCAT44(uStackX_24,param_1),&local_48,local_res18,0);
  *param_3 = local_res18[0];
  FUN_1450719f0(local_res8);
  return AVar1;
}



// FUNCTION 144d4de40 GetSwitch body=44 status=ok
// SIG AKRESULT GetSwitch(wchar_t * param_1, __uint64 param_2, uint * param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::Query::GetSwitch(wchar_t const * __ptr64,unsigned
   __int64,unsigned int & __ptr64) */

AKRESULT __cdecl AK::SoundEngine::Query::GetSwitch(wchar_t *param_1,__uint64 param_2,uint *param_3)

{
  uint uVar1;
  AKRESULT AVar2;
  
                    /* 0x4d4de40  133
                       ?GetSwitch@Query@SoundEngine@AK@@YA?AW4AKRESULT@@PEB_W_KAEAI@Z */
  uVar1 = GetIDFromString(param_1);
  AVar2 = GetSwitch(uVar1,param_2,param_3);
  return AVar2;
}



// FUNCTION 144d4de70 GetSwitch body=44 status=ok
// SIG AKRESULT GetSwitch(char * param_1, __uint64 param_2, uint * param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::Query::GetSwitch(char const * __ptr64,unsigned
   __int64,unsigned int & __ptr64) */

AKRESULT __cdecl AK::SoundEngine::Query::GetSwitch(char *param_1,__uint64 param_2,uint *param_3)

{
  uint uVar1;
  AKRESULT AVar2;
  
                    /* 0x4d4de70  132  ?GetSwitch@Query@SoundEngine@AK@@YA?AW4AKRESULT@@PEBD_KAEAI@Z
                        */
  uVar1 = GetIDFromString(param_1);
  AVar2 = GetSwitch(uVar1,param_2,param_3);
  return AVar2;
}



// FUNCTION 144d4dea0 GetState body=80 status=ok
// SIG AKRESULT GetState(uint param_1, uint * param_2)

/* enum AKRESULT __cdecl AK::SoundEngine::Query::GetState(unsigned int,unsigned int & __ptr64) */

AKRESULT __cdecl AK::SoundEngine::Query::GetState(uint param_1,uint *param_2)

{
  char cVar1;
  AKRESULT AVar2;
  undefined1 local_res18 [16];
  
                    /* 0x4d4dea0  128  ?GetState@Query@SoundEngine@AK@@YA?AW4AKRESULT@@IAEAI@Z */
  FUN_1450719c0(local_res18);
  cVar1 = FUN_145076470(DAT_14c790ff8,param_1,param_2);
  AVar2 = 0xf;
  if (cVar1 != '\0') {
    AVar2 = 1;
  }
  FUN_1450719f0(local_res18);
  return AVar2;
}



// FUNCTION 144d4def0 GetState body=85 status=ok
// SIG AKRESULT GetState(wchar_t * param_1, uint * param_2)

/* enum AKRESULT __cdecl AK::SoundEngine::Query::GetState(wchar_t const * __ptr64,unsigned int &
   __ptr64) */

AKRESULT __cdecl AK::SoundEngine::Query::GetState(wchar_t *param_1,uint *param_2)

{
  char cVar1;
  uint uVar2;
  AKRESULT AVar3;
  undefined1 local_res18 [16];
  
                    /* 0x4d4def0  130  ?GetState@Query@SoundEngine@AK@@YA?AW4AKRESULT@@PEB_WAEAI@Z
                        */
  uVar2 = GetIDFromString(param_1);
  FUN_1450719c0(local_res18);
  cVar1 = FUN_145076470(DAT_14c790ff8,uVar2,param_2);
  AVar3 = 0xf;
  if (cVar1 != '\0') {
    AVar3 = 1;
  }
  FUN_1450719f0(local_res18);
  return AVar3;
}



// FUNCTION 144d4df50 GetState body=85 status=ok
// SIG AKRESULT GetState(char * param_1, uint * param_2)

/* enum AKRESULT __cdecl AK::SoundEngine::Query::GetState(char const * __ptr64,unsigned int &
   __ptr64) */

AKRESULT __cdecl AK::SoundEngine::Query::GetState(char *param_1,uint *param_2)

{
  char cVar1;
  uint uVar2;
  AKRESULT AVar3;
  undefined1 local_res18 [16];
  
                    /* 0x4d4df50  129  ?GetState@Query@SoundEngine@AK@@YA?AW4AKRESULT@@PEBDAEAI@Z */
  uVar2 = GetIDFromString(param_1);
  FUN_1450719c0(local_res18);
  cVar1 = FUN_145076470(DAT_14c790ff8,uVar2,param_2);
  AVar3 = 0xf;
  if (cVar1 != '\0') {
    AVar3 = 1;
  }
  FUN_1450719f0(local_res18);
  return AVar3;
}



// FUNCTION 144d4dfb0 GetGameObjectAuxSendValues body=349 status=ok
// SIG AKRESULT GetGameObjectAuxSendValues(__uint64 param_1, AkAuxSendValue * param_2, uint * param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::Query::GetGameObjectAuxSendValues(unsigned __int64,struct
   AkAuxSendValue * __ptr64,unsigned int & __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::Query::GetGameObjectAuxSendValues
          (__uint64 param_1,AkAuxSendValue *param_2,uint *param_3)

{
  undefined8 *puVar1;
  CAkRegisteredObj *pCVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 local_res18 [16];
  void *local_28;
  ulonglong local_20;
  
                    /* 0x4d4dfb0  90
                       ?GetGameObjectAuxSendValues@Query@SoundEngine@AK@@YA?AW4AKRESULT@@_KPEAUAkAuxSendValue@@AEAI@Z
                        */
  if ((*param_3 != 0) && (param_2 != (AkAuxSendValue *)0x0)) {
    uVar7 = 0;
    local_28 = (void *)0x0;
    local_20 = 0;
    FUN_1450719c0(local_res18);
    pCVar2 = CAkRegistryMgr::GetObj(g_pRegistryMgr,param_1);
    if (pCVar2 != (CAkRegisteredObj *)0x0) {
      lVar3 = FUN_1450d2450(pCVar2);
      if (*(char *)(lVar3 + 0xe0) == '\0') {
        uVar5 = FUN_144d4eb60();
        lVar4 = FUN_144d4eb00(uVar5);
      }
      else {
        lVar4 = lVar3 + 0x20;
      }
      if (*(char *)(lVar3 + 0xe1) == '\0') {
        uVar5 = FUN_144d4eb60();
        lVar3 = FUN_144d4eb30(uVar5);
      }
      else {
        lVar3 = lVar3 + 0x70;
      }
      FUN_1450d0c70(lVar3,&local_28,0x3f800000,0,0,lVar4 + 0x30);
      FUN_1450719f0(local_res18);
      uVar6 = (uint)local_20;
      if (*param_3 < (uint)local_20) {
        uVar6 = *param_3;
      }
      *param_3 = uVar6;
      if (uVar6 != 0) {
        do {
          uVar6 = (int)uVar7 + 1;
          puVar1 = (undefined8 *)(uVar7 * 0x20 + (longlong)local_28);
          uVar5 = puVar1[1];
          *(undefined8 *)(param_2 + uVar7 * 0x10) = *puVar1;
          *(undefined8 *)(param_2 + uVar7 * 0x10 + 8) = uVar5;
          uVar7 = (ulonglong)uVar6;
        } while (uVar6 < *param_3);
      }
      if (local_28 != (void *)0x0) {
        local_20 = local_20 & 0xffffffff00000000;
        MemoryMgr::Free(0,local_28);
      }
      return 1;
    }
    FUN_1450719f0(local_res18);
    return 0xf;
  }
  return 0x1f;
}



// FUNCTION 144d4e110 GetGameObjectDryLevelValue body=172 status=ok
// SIG AKRESULT GetGameObjectDryLevelValue(__uint64 param_1, __uint64 param_2, float * param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::Query::GetGameObjectDryLevelValue(unsigned
   __int64,unsigned __int64,float & __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::Query::GetGameObjectDryLevelValue(__uint64 param_1,__uint64 param_2,float *param_3)

{
  CAkRegisteredObj *pCVar1;
  undefined8 uVar2;
  longlong lVar3;
  AKRESULT AVar4;
  float fVar5;
  undefined1 local_res20 [8];
  __uint64 local_18;
  undefined4 uStack_10;
  
                    /* 0x4d4e110  91
                       ?GetGameObjectDryLevelValue@Query@SoundEngine@AK@@YA?AW4AKRESULT@@_K0AEAM@Z
                        */
  FUN_1450719c0(local_res20);
  pCVar1 = CAkRegistryMgr::GetObj(g_pRegistryMgr,param_1);
  if ((pCVar1 == (CAkRegisteredObj *)0x0) || (lVar3 = *(longlong *)(pCVar1 + 0x10), lVar3 == 0)) {
    AVar4 = 0xf;
  }
  else {
    uStack_10 = 0;
    local_18 = param_2;
    if (*(char *)(lVar3 + 0xe0) == '\0') {
      uVar2 = FUN_144d4eb60();
      lVar3 = FUN_144d4eb00(uVar2);
    }
    else {
      lVar3 = lVar3 + 0x20;
    }
    fVar5 = (float)FUN_1450d0e20(lVar3,&local_18);
    *param_3 = fVar5;
    AVar4 = 1;
  }
  FUN_1450719f0(local_res20);
  return AVar4;
}


