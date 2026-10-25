// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1412bfbcc FUN_1412bfbcc body=773 status=ok
// SIG undefined FUN_1412bfbcc(void)

void FUN_1412bfbcc(longlong param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined2 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  code *local_48;
  undefined4 local_40;
  code *local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (((((*(int *)(param_1 + 0x44) == 0) || (uVar1 = *(uint *)(param_1 + 0x40), (int)uVar1 < 0)) ||
       (DAT_14c9647dc <= (int)uVar1)) ||
      ((plVar5 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar5 == (longlong *)0x0 || ((int)plVar5[2] != *(int *)(param_1 + 0x44))))) ||
     ((*(uint *)(plVar5 + 1) & 0x10200000) != 0)) {
LAB_1412bfcef:
    *(undefined4 *)(param_1 + 0x48) = 0;
    iVar3 = 0;
  }
  else {
    if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
      lVar9 = *plVar5;
    }
    else {
      lVar9 = 0;
    }
    lVar9 = *(longlong *)(lVar9 + 0x3c0);
    if (lVar9 == 0) goto LAB_1412bfcef;
    if (DAT_14cb61cd0 == 0) {
      local_60 = local_38;
      local_38[0] = FUN_141030f22;
      local_50 = FUN_14081d0ea;
      local_58 = &LAB_1463b31ae;
      local_68 = &LAB_1486dca4f;
      local_70 = &LAB_1464f50a6;
      local_78 = &DAT_149e063b2;
      local_80 = 0;
      local_88 = 0x10000004;
      local_90 = 8;
      local_98 = 0xd70;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
    }
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(DAT_14cb61cd0 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) != DAT_14cb61cd0 + 0x30)) goto LAB_1412bfcef;
    uVar1 = *(uint *)(lVar9 + 0xc);
    *(uint *)(param_1 + 0x48) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar3 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar3 = *(int *)(lVar9 + 0x10);
      bVar10 = iVar3 == 0;
      if (bVar10) {
        *(int *)(lVar9 + 0x10) = iVar8;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar3 = iVar8;
      }
    }
  }
  *(int *)(param_1 + 0x4c) = iVar3;
  if (((*(byte *)(param_1 + 0x68) & 1) != 0) &&
     (cVar2 = FUN_144729dda(param_1 + 0x48), cVar2 != '\0')) {
    lVar4 = FUN_14479d2ce(param_1 + 0x48);
    lVar9 = lVar4 + 0x9d8;
    if (*(char *)(lVar4 + 0x178) == '\x03') {
      lVar9 = lVar4 + 0x3f0;
    }
    local_48 = FUN_14896e8c0;
    local_40 = 0;
    FUN_148979176(local_38,param_1);
    FUN_145a58104(lVar9,&local_48,local_38);
    FUN_1449db362(local_38);
    *(code **)(param_1 + 0x60) = local_48;
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    uVar1 = *(uint *)(param_1 + 0x40);
    uVar6 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1412bfd4d;
    puVar7 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar7 != (undefined8 *)0x0) &&
       ((*(int *)(puVar7 + 2) == *(int *)(param_1 + 0x44) &&
        ((*(uint *)(puVar7 + 1) & 0x10200000) == 0)))) {
      uVar6 = *puVar7;
      goto LAB_1412bfd4d;
    }
  }
  uVar6 = 0;
LAB_1412bfd4d:
  FUN_1412bfed2(param_1,uVar6);
  if ((local_28 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412bfed2 FUN_1412bfed2 body=1331 status=ok
// SIG undefined FUN_1412bfed2(void)

void FUN_1412bfed2(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_78 [40];
  longlong *local_50;
  int local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (uint *)(param_1 + 10);
  cVar5 = FUN_140cf9e2e(puVar1);
  if (cVar5 != '\0') goto LAB_1412c01c9;
  if (((((*(int *)((longlong)param_1 + 0x54) != 0) && (uVar3 = *puVar1, -1 < (int)uVar3)) &&
       ((int)uVar3 < DAT_14c9647dc)) &&
      ((lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar9 != 0 &&
       (*(int *)(lVar9 + 0x10) == *(int *)((longlong)param_1 + 0x54))))) &&
     ((*(uint *)(lVar9 + 8) & 0x10200000) == 0)) {
    (**(code **)(*param_1 + 0x30))(param_1);
    if (*(int *)((longlong)param_1 + 0x54) == 0) {
LAB_1412c0282:
      lVar9 = 0;
    }
    else {
      uVar3 = *puVar1;
      lVar9 = 0;
      if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
        plVar8 = (longlong *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if ((plVar8 == (longlong *)0x0) ||
           (((int)plVar8[2] != *(int *)((longlong)param_1 + 0x54) ||
            ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)))) goto LAB_1412c0282;
        lVar9 = *plVar8;
      }
    }
    if (param_1[0xb] != 0) {
      FUN_14480f766(lVar9 + 0x1218);
    }
  }
  if (param_2 == 0) {
    param_1[10] = 0;
    goto LAB_1412c01c9;
  }
  uVar3 = *(uint *)(param_2 + 0xc);
  *puVar1 = uVar3;
  if ((int)uVar3 < DAT_14c9647dc) {
    lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
  }
  else {
    lVar9 = 0;
  }
  iVar6 = *(int *)(lVar9 + 0x10);
  if (*(int *)(lVar9 + 0x10) == 0) {
    LOCK();
    iVar6 = DAT_14c964868 + 1;
    UNLOCK();
    iVar7 = DAT_14c964868 + 1;
    bVar13 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar6;
    if (bVar13) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar7);
    }
    LOCK();
    iVar6 = *(int *)(lVar9 + 0x10);
    bVar13 = iVar6 == 0;
    if (bVar13) {
      *(int *)(lVar9 + 0x10) = iVar7;
      iVar6 = 0;
    }
    UNLOCK();
    if (bVar13) {
      iVar6 = iVar7;
    }
  }
  *(int *)((longlong)param_1 + 0x54) = iVar6;
  local_50 = (longlong *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,4,0x10);
  local_48 = 4;
  plVar8 = (longlong *)param_1[5];
  if (plVar8 == (longlong *)0x0) {
LAB_1412c02b4:
    *local_50 = (longlong)&PTR_LAB_14b42a9c0;
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
    local_50[2] = lVar10;
    *local_50 = (longlong)&PTR_FUN_14b428700;
    local_50[3] = 0;
    local_50[4] = 0;
    local_50[5] = (longlong)FUN_145851fa6;
    *(undefined4 *)(local_50 + 6) = 0;
  }
  else {
    iVar6 = (int)plVar8[1];
    do {
      if (iVar6 == 0) goto LAB_1412c02b4;
      LOCK();
      iVar7 = (int)plVar8[1];
      bVar13 = iVar6 == iVar7;
      if (bVar13) {
        *(int *)(plVar8 + 1) = iVar6 + 1;
        iVar7 = iVar6;
      }
      iVar6 = iVar7;
      UNLOCK();
    } while (!bVar13);
    lVar9 = param_1[4];
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    *local_50 = (longlong)&PTR_LAB_14b42a9c0;
    LOCK();
    UNLOCK();
    lVar12 = DAT_14c758608 + 1;
    lVar10 = DAT_14c758608 + 1;
    if (lVar12 == 0) {
      LOCK();
      UNLOCK();
      lVar12 = DAT_14c758608 + 2;
      lVar10 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar10;
    local_50[2] = lVar12;
    *local_50 = (longlong)&PTR_FUN_14b428700;
    local_50[3] = lVar9;
    local_50[4] = (longlong)plVar8;
    LOCK();
    *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
    UNLOCK();
    local_50[5] = (longlong)FUN_145851fa6;
    *(undefined4 *)(local_50 + 6) = 0;
    LOCK();
    plVar4 = plVar8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
    LOCK();
    plVar4 = plVar8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
    LOCK();
    plVar4 = plVar8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if (((local_48 == 0) || (local_50 == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(*local_50 + 0x30))(), cVar5 == '\0')) {
    if (local_48 == 0) {
      lVar9 = 0;
      goto LAB_1412c01b3;
    }
    if (local_50 != (longlong *)0x0) {
      lVar9 = 0;
      (**(code **)*local_50)(local_50,0);
      FUN_1446efa72(&local_50,0,0,0x10);
      goto LAB_1412c01a6;
    }
    lVar9 = 0;
  }
  else {
    plVar8 = (longlong *)(param_2 + 0x1218);
    if (*(int *)(param_2 + 0x122c) < 1) {
      iVar6 = *(int *)(param_2 + 0x1220);
      iVar7 = *(int *)(param_2 + 0x1228) + -1;
      *(int *)(param_2 + 0x1228) = iVar7;
      if (iVar7 <= iVar6) {
        iVar7 = iVar6;
        if (0 < iVar6) {
          iVar11 = 0;
          do {
            if (((*(int *)(*plVar8 + 8 + (longlong)iVar11 * 0x10) == 0) ||
                (plVar4 = *(longlong **)(*plVar8 + (longlong)iVar11 * 0x10),
                plVar4 == (longlong *)0x0)) ||
               (cVar5 = (**(code **)(*plVar4 + 0x28))(), cVar5 != '\0')) {
              FUN_14005b288(plVar8,iVar11);
              FUN_14005b248(plVar8);
            }
            else {
              iVar11 = iVar11 + 1;
            }
            iVar7 = *(int *)(param_2 + 0x1220);
          } while (iVar11 < iVar7);
        }
        iVar11 = 2;
        if (2 < iVar7 * 2) {
          iVar11 = iVar7 * 2;
        }
        *(int *)(param_2 + 0x1228) = iVar11;
        if ((iVar11 < iVar6) && (*(int *)(param_2 + 0x1224) != iVar7)) {
          FUN_14045812c();
        }
      }
    }
    lVar9 = 0;
    if ((local_48 != 0) && (local_50 != (longlong *)0x0)) {
      (**(code **)(*local_50 + 0x38))(local_50,&local_40);
      lVar9 = local_40;
    }
    iVar6 = *(int *)(param_2 + 0x1220);
    *(uint *)(param_2 + 0x1220) = iVar6 + 1U;
    if (*(uint *)(param_2 + 0x1224) < iVar6 + 1U) {
      FUN_1447a71f6(plVar8,iVar6);
    }
    lVar10 = *plVar8;
    lVar12 = (longlong)iVar6 * 0x10;
    *(undefined8 *)(lVar10 + lVar12) = 0;
    *(undefined4 *)(lVar10 + 8 + lVar12) = 0;
    *(longlong **)(lVar10 + lVar12) = local_50;
    local_50 = (longlong *)0x0;
    *(int *)(lVar10 + 8 + lVar12) = local_48;
LAB_1412c01a6:
    local_48 = 0;
LAB_1412c01b3:
    if (local_50 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  param_1[0xb] = lVar9;
  (**(code **)(*param_1 + 0x28))(param_1);
LAB_1412c01c9:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412c0406 FUN_1412c0406 body=1888 status=ok
// SIG undefined FUN_1412c0406(void)

void FUN_1412c0406(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  int local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  int local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uStack_28 = 0;
  uStack_24 = 0;
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
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_14067a048;
      local_60 = 0;
      local_68 = 0x28001;
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
  iVar5 = local_2c;
  local_38 = 0;
  uStack_34 = 0;
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
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_38 = (undefined4)uVar2;
      uStack_34 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_38);
    }
  }
  iStack_3c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_14067a048;
      local_60 = 0;
      local_68 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&iStack_3c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&iStack_3c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&iStack_3c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      iStack_3c = (int)uVar2;
      local_38 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&iStack_3c);
    }
  }
  iVar4 = iStack_3c;
  local_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_14067a048;
      local_60 = 0;
      local_68 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
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
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_40 = (int)uVar2;
      iStack_3c = (int)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_40);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = CONCAT71(local_68._1_7_,local_40 != 0);
  FUN_1412c0b68(CONCAT44(uStack_24,uStack_28),iVar5 != 0,CONCAT44(uStack_34,local_38),iVar4 != 0);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412c0b68 FUN_1412c0b68 body=206 status=ok
// SIG undefined FUN_1412c0b68(void)

void FUN_1412c0b68(longlong *param_1,char param_2,undefined8 param_3,uint param_4,char param_5)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (param_1 != (longlong *)0x0) {
    uVar2 = FUN_1412c0c36();
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar2);
    if (plVar3 != (longlong *)0x0) {
      uVar2 = FUN_1412c0c36();
      plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
      if ((plVar3 != plVar4) && (plVar4 != (longlong *)0x0)) {
        lVar5 = (**(code **)(*plVar4 + 0x10))(plVar4);
        if (param_2 == '\0') {
          if ((param_5 != '\0') ||
             ((*(char *)(lVar5 + 0xd0) == '\x01' &&
              ((*(longlong *)(lVar5 + 0xc0) == 0 ||
               (*(char *)(*(longlong *)(lVar5 + 0xc0) + 0xa0) != '\0')))))) {
            param_4 = param_4 | 2;
LAB_1412c0bdf:
            FUN_140f1fcc2(lVar5,param_4,param_3,0);
            return;
          }
        }
        else if ((param_5 != '\0') || (cVar1 = FUN_1411d74a2(lVar5), cVar1 != '\0'))
        goto LAB_1412c0bdf;
      }
    }
  }
  return;
}



// FUNCTION 1412c0c36 FUN_1412c0c36 body=228 status=ok
// SIG undefined FUN_1412c0c36(void)

longlong FUN_1412c0c36(void)

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
  if (DAT_14cba6968 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148beb81b;
    local_40 = FUN_1465c87de;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/OakGame",L"AICloakUser",&DAT_14cba6968,&DAT_148beb81a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba6968;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412c0d1c FUN_1412c0d1c body=300 status=ok
// SIG undefined FUN_1412c0d1c(void)

void FUN_1412c0d1c(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  local_40 = 3;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0x34002;
  local_20 = 0;
  uStack_18 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
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
      local_48 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_48);
    }
  }
  puVar4 = &local_48;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1412c0e4a(puVar4);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412c0e4a FUN_1412c0e4a body=143 status=ok
// SIG undefined FUN_1412c0e4a(void)

void FUN_1412c0e4a(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((((*param_1 != 0) && (lVar4 = FUN_1447210f0(), lVar4 != 0)) &&
      (iVar3 = FUN_14490d72a(lVar4), iVar3 != 3)) &&
     ((lVar4 = FUN_1412af310(lVar4), lVar4 != 0 &&
      (iVar3 = *(int *)(lVar4 + 0x398), (longlong)iVar3 != 0)))) {
    lVar4 = *(longlong *)(lVar4 + 0x390);
    lVar5 = 0;
    do {
      plVar1 = *(longlong **)(lVar4 + lVar5);
      cVar2 = FUN_1412c0eda(param_1,plVar1);
      if (cVar2 != '\0') {
        (**(code **)(*plVar1 + 0x2e0))(plVar1);
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar3 * 8 != lVar5);
  }
  return;
}



// FUNCTION 1412c0eda FUN_1412c0eda body=331 status=ok
// SIG undefined FUN_1412c0eda(void)

undefined8 FUN_1412c0eda(longlong *param_1,longlong param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == 0) goto LAB_1412c0f9e;
  if ((param_1[3] != 0) && ((int)param_1[4] - 1U < 0xfffffffe)) {
    puVar2 = *(undefined4 **)(*(longlong *)(param_2 + 0x78) + 8);
    puVar5 = &DAT_14c9485f0;
    if (puVar2 != (undefined4 *)0x0) {
      puVar5 = puVar2;
    }
    if (DAT_14c947fe0 == 0) {
      lVar3 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar3);
      DAT_14c947fe0 = lVar3;
    }
    FUN_140045924(DAT_14c947fe0,&local_38,puVar5,1);
    if (local_38 != param_1[3]) goto LAB_1412c0f9e;
  }
  if ((param_1[6] != 0) && (*(longlong *)(param_2 + 0x2ec) != param_1[6])) goto LAB_1412c0f9e;
  bVar1 = *(byte *)(param_1 + 1);
  if (6 < (ulonglong)bVar1) {
    lVar3 = 0;
    goto LAB_1412c0fcc;
  }
  lVar3 = (longlong)&switchD_1412c0f83::switchdataD_14b4152f8 +
          (longlong)(int)(&switchD_1412c0f83::switchdataD_14b4152f8)[bVar1];
  switch(bVar1) {
  case 0:
    goto switchD_1412c0f83_caseD_0;
  case 1:
    lVar3 = 400;
    break;
  case 2:
    lVar3 = 0x188;
    break;
  case 3:
    lVar3 = 200;
    break;
  case 4:
    lVar3 = 0x128;
    break;
  case 5:
    lVar3 = *param_1;
    if (lVar3 != *(longlong *)(param_2 + 200)) goto LAB_1412c0f95;
    goto switchD_1412c0f83_caseD_0;
  case 6:
    if (*param_1 != *(longlong *)(param_2 + 200)) goto LAB_1412c0f9e;
    lVar3 = param_1[2];
LAB_1412c0f95:
    if (lVar3 != *(longlong *)(param_2 + 0x128)) goto LAB_1412c0f9e;
    goto switchD_1412c0f83_caseD_0;
  }
  lVar3 = *(longlong *)(param_2 + lVar3);
LAB_1412c0fcc:
  if (*param_1 == lVar3) {
switchD_1412c0f83_caseD_0:
    uVar4 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
  }
  else {
LAB_1412c0f9e:
    uVar4 = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1412c1026 FUN_1412c1026 body=2127 status=ok
// SIG undefined FUN_1412c1026(void)

void FUN_1412c1026(code *param_1)

{
  int *piVar1;
  float fVar2;
  code cVar3;
  uint uVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_d8 [32];
  wchar_t *local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  wchar_t *local_a0;
  wchar_t *local_98;
  code *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  code *local_60;
  undefined1 local_58 [8];
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((*(longlong *)(param_1 + 0x78) != 0) &&
     (fVar2 = *(float *)(*(longlong *)(param_1 + 0x78) + 0x5c),
     *(float *)(param_1 + 0x31c) <= fVar2 && fVar2 != *(float *)(param_1 + 0x31c))) {
    param_1[0x978] = (code)0x1;
    goto LAB_1412c17f8;
  }
  param_1[0x978] = (code)0x0;
  cVar3 = param_1[0x310];
  if (((byte)cVar3 & 0x10) != 0) {
    param_1[0x310] = (code)((byte)cVar3 | 0x20);
    lVar12 = *(longlong *)(param_1 + 0x6b8);
    if (lVar12 != 0) {
      local_50 = param_1;
      if ((param_1 != (code *)0x0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(param_1);
      }
      FUN_1407c4170(lVar12 + 0x6c8,&local_50,0);
      *(longlong *)(param_1 + 0x6b8) = 0;
      *(longlong *)(param_1 + 0x6c0) = 0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_d8);
  }
  param_1[0x310] = (code)((byte)cVar3 & 0xcf);
  if (*(longlong *)(param_1 + 0x6d8) != 0) {
    FUN_140c3c3ce();
    *(longlong *)(param_1 + 0x6d8) = 0;
    plVar13 = *(longlong **)(param_1 + 0x6e0);
    if (plVar13 != (longlong *)0x0) {
      *(longlong *)(param_1 + 0x6e0) = 0;
      LOCK();
      plVar10 = plVar13 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
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
  }
  FUN_1447f69b6(param_1 + 0x48);
  lVar12 = *(longlong *)(param_1 + 0x78);
  if ((lVar12 != 0) && ((longlong)*(int *)(lVar12 + 0x48) != 0)) {
    plVar13 = (longlong *)(*(longlong *)(lVar12 + 0x40) + 8);
    lVar12 = (longlong)*(int *)(lVar12 + 0x48) * 0x28;
    do {
      if (((((*(int *)((longlong)plVar13 + -4) == 0) ||
            (uVar4 = *(uint *)(plVar13 + -1), (int)uVar4 < 0)) || (DAT_14c9647dc <= (int)uVar4)) ||
          ((plVar10 = (longlong *)
                      ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
           plVar10 == (longlong *)0x0 || ((int)plVar10[2] != *(int *)((longlong)plVar13 + -4))))) ||
         (((*(uint *)(plVar10 + 1) & 0x10200000) != 0 ||
          (plVar10 = (longlong *)*plVar10, plVar10 == (longlong *)0x0)))) {
        if (*plVar13 != 0) {
          plVar10 = (longlong *)FUN_140007850();
          cVar5 = (*(code *)PTR_FUN_14c758760)();
          if ((plVar10 == (longlong *)0x0) || (cVar5 == '\0')) {
            if (plVar10 != (longlong *)0x0) {
              uVar4 = *(uint *)((longlong)plVar10 + 0xc);
              *(uint *)(plVar13 + -1) = uVar4;
              if ((int)uVar4 < DAT_14c9647dc) {
                lVar8 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
              }
              else {
                lVar8 = 0;
              }
              iVar7 = *(int *)(lVar8 + 0x10);
              if (*(int *)(lVar8 + 0x10) == 0) {
                LOCK();
                iVar7 = DAT_14c964868 + 1;
                UNLOCK();
                iVar11 = DAT_14c964868 + 1;
                bVar17 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar7;
                if (bVar17) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar11);
                }
                LOCK();
                iVar7 = *(int *)(lVar8 + 0x10);
                bVar17 = iVar7 == 0;
                if (bVar17) {
                  *(int *)(lVar8 + 0x10) = iVar11;
                  iVar7 = 0;
                }
                UNLOCK();
                if (bVar17) {
                  iVar7 = iVar11;
                }
              }
              goto LAB_1412c1323;
            }
            plVar13[-1] = 0;
          }
          else {
            uVar4 = *(uint *)((longlong)plVar10 + 0xc);
            if ((int)uVar4 < DAT_14c9647dc) {
              lVar8 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
            }
            else {
              lVar8 = 0;
            }
            if ((*(uint *)(lVar8 + 8) & 0x8400000) == 0) {
              *(uint *)(plVar13 + -1) = uVar4;
              if ((int)uVar4 < DAT_14c9647dc) {
                lVar8 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
              }
              else {
                lVar8 = 0;
              }
              iVar7 = *(int *)(lVar8 + 0x10);
              if (*(int *)(lVar8 + 0x10) == 0) {
                LOCK();
                iVar7 = DAT_14c964868 + 1;
                UNLOCK();
                iVar11 = DAT_14c964868 + 1;
                bVar17 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar7;
                if (bVar17) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar11);
                }
                LOCK();
                iVar7 = *(int *)(lVar8 + 0x10);
                bVar17 = iVar7 == 0;
                if (bVar17) {
                  *(int *)(lVar8 + 0x10) = iVar11;
                  iVar7 = 0;
                }
                UNLOCK();
                if (bVar17) {
                  iVar7 = iVar11;
                }
              }
LAB_1412c1323:
              *(int *)((longlong)plVar13 + -4) = iVar7;
            }
            if ((*(uint *)(plVar10 + 1) >> 0x1e & 1) == 0) goto LAB_1412c1182;
          }
        }
      }
      else {
LAB_1412c1182:
        if (DAT_14c949118 == 0) {
          local_60 = FUN_140631fbe;
          lVar8 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
          DAT_14c949118 = lVar8;
          FUN_1446f470e(local_58,L"Class",1);
          local_80 = &local_60;
          local_88 = &LAB_146891e90;
          local_90 = (code *)&LAB_146273097;
          local_a0 = L"Engine";
          local_98 = (wchar_t *)CONCAT44(local_98._4_4_,199);
          local_a8 = 0x20;
          local_b0 = 0x10000000;
          local_b8._0_4_ = 8;
          FUN_14574b4b2(lVar8);
          DAT_14c949118 = lVar8;
          if (DAT_14c951858 == 0) {
            local_50 = FUN_1449e2820;
            local_70 = FUN_14081d0ea;
            local_78 = FUN_14081d0ea;
            local_80 = &local_50;
            local_88 = &LAB_1468c5283;
            local_90 = FUN_142809da0;
            local_98 = L"Engine";
            local_a0 = (wchar_t *)0x400000000;
            local_a8 = CONCAT44(local_a8._4_4_,0x10000000);
            local_b0 = 8;
            local_b8._0_4_ = 0x50;
            FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
          }
          lVar16 = DAT_14c951858;
          lVar8 = DAT_14c949118;
          uVar9 = FUN_1449e2fb2();
          local_b8 = L"Class";
          FUN_14574b446(uVar9,lVar8,lVar16,L"/Script/CoreUObject");
        }
        if ((((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(plVar10[2] + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(plVar10[2] + 0x30) + (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) ==
              DAT_14c949118 + 0x30)) && (lVar8 = FUN_145a5570c(), lVar8 != 0)) &&
           ((*(int *)(lVar8 + 0x38) <= (int)plVar10[7] &&
            (*(longlong *)(plVar10[6] + (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)))) {
          lVar8 = plVar10[0x22];
          if (lVar8 == 0) {
            (**(code **)(*plVar10 + 1000))(plVar10);
            lVar8 = plVar10[0x22];
            if (lVar8 == 0) goto LAB_1412c1335;
          }
          uVar9 = *(undefined8 *)(lVar8 + 0x28);
          *(code **)(lVar8 + 0x28) = param_1;
          FUN_14876c144(lVar8,param_1);
          *(undefined8 *)(lVar8 + 0x28) = uVar9;
        }
      }
LAB_1412c1335:
      plVar13 = plVar13 + 5;
      lVar12 = lVar12 + -0x28;
    } while (lVar12 != 0);
  }
  lVar12 = *(longlong *)(param_1 + 0x6b8);
  if (lVar12 != 0) {
    local_50 = param_1;
    if ((param_1 != (code *)0x0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(param_1);
    }
    FUN_1407c4170(lVar12 + 0x6c8,&local_50,0);
    *(longlong *)(param_1 + 0x6b8) = 0;
    *(longlong *)(param_1 + 0x6c0) = 0;
  }
  FUN_143dc0862(param_1);
  iVar7 = *(int *)(param_1 + 0x964);
  FUN_1403e0ff1(*(longlong *)(param_1 + 0x958),*(undefined4 *)(param_1 + 0x960));
  *(undefined4 *)(param_1 + 0x960) = 0;
  if ((iVar7 < 0) && (*(int *)(param_1 + 0x964) != 0)) {
    FUN_1407a322c(param_1 + 0x958,0);
  }
  plVar13 = (longlong *)0x0;
  param_1[0x2e8] = (code)0x0;
  param_1[0xa8] = (code)0x0;
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    plVar13 = *(longlong **)(param_1 + 0x20);
  }
  *(int *)((longlong)plVar13 + 0x3fc) = *(int *)((longlong)plVar13 + 0x3fc) + 1;
  (**(code **)(*plVar13 + 0x578))();
  (**(code **)(*(longlong *)param_1 + 0x310))(param_1);
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    lVar12 = *(longlong *)(param_1 + 0x20);
  }
  else {
    lVar12 = 0;
  }
  if (param_1 == (code *)0x0) goto LAB_1412c17f8;
  if (DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_1);
  }
  iVar7 = *(int *)(lVar12 + 0x398);
  if ((longlong)iVar7 != 0) {
    lVar8 = *(longlong *)(lVar12 + 0x390);
    uVar15 = 0;
    lVar16 = 0;
    bVar6 = DAT_14c950c29;
    do {
      if ((bVar6 & 1) != 0) {
        FUN_1456cec3c(param_1);
        bVar6 = DAT_14c950c29;
      }
      if (*(code **)(lVar8 + uVar15) == param_1) {
        if ((~uVar15 & 0x7fffffff8) != 0) {
          iVar7 = *(int *)(param_1 + 0x68);
          if ((-1 < (longlong)iVar7) && (iVar7 < *(int *)(lVar12 + 0x3b0))) {
            lVar8 = *(longlong *)(*(longlong *)(lVar12 + 0x3a8) + (longlong)iVar7 * 8);
            if ((longlong)*(int *)(lVar8 + 0x18) == 0) goto LAB_1412c17b2;
            uVar15 = 0;
            lVar14 = 0;
            goto LAB_1412c1777;
          }
          FUN_1407c404e(param_1,0);
          local_50 = param_1;
          if (DAT_14c950c29 == 1) {
            FUN_1456cec3c(param_1);
          }
          FUN_1407c4170(lVar12 + 0x3b8,&local_50,0);
          goto LAB_1412c17b9;
        }
        break;
      }
      lVar16 = lVar16 + 0x100000000;
      uVar15 = uVar15 + 8;
    } while ((longlong)iVar7 * 8 != uVar15);
  }
  goto LAB_1412c17d3;
  while( true ) {
    lVar14 = lVar14 + 0x100000000;
    uVar15 = uVar15 + 8;
    if ((longlong)*(int *)(lVar8 + 0x18) * 8 == uVar15) break;
LAB_1412c1777:
    if (*(code **)(*(longlong *)(lVar8 + 0x10) + uVar15) == param_1) {
      if ((~uVar15 & 0x7fffffff8) != 0) {
        FUN_1407c404e(param_1,0);
        *(undefined8 *)(*(longlong *)(lVar8 + 0x10) + (lVar14 >> 0x20) * 8) = 0;
        *(undefined1 *)(lVar8 + 8) = 1;
      }
      break;
    }
  }
LAB_1412c17b2:
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
LAB_1412c17b9:
  *(undefined8 *)(*(longlong *)(lVar12 + 0x390) + (lVar16 >> 0x20) * 8) = 0;
  *(undefined1 *)(lVar12 + 0x438) = 1;
LAB_1412c17d3:
  param_1[0x70] = (code)0x1;
  lVar12 = FUN_1447210f0(lVar12);
  *(float *)(param_1 + 0x6c) = (float)(*(double *)(lVar12 + 0x6d0) + 0.20000000298023224);
LAB_1412c17f8:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412c18ae FUN_1412c18ae body=78 status=ok
// SIG undefined FUN_1412c18ae(void)

undefined8 * FUN_1412c18ae(undefined8 *param_1)

{
  FUN_140fe66fa();
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14aef8430;
  param_1[5] = &PTR_FUN_14aef87d0;
  param_1[0x13] = &PTR_FUN_14aef87f0;
  param_1[0x16] = 0;
  return param_1;
}



// FUNCTION 1412c18fc FUN_1412c18fc body=219 status=ok
// SIG undefined FUN_1412c18fc(void)

void FUN_1412c18fc(longlong param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((((param_3 & 1) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) &&
      (param_2 != (longlong *)0x0)) && (1 < *(int *)(param_1 + 0x38) + 1U)) {
    uVar1 = FUN_1412c19d8();
    plVar2 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_1412c19d8();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if ((plVar2 != plVar3) && (plVar3 != (longlong *)0x0)) {
        lVar4 = FUN_141009a40(param_1 + 0x30);
        if (lVar4 != 0) {
          puVar5 = &DAT_14c9485f0;
          if (*(undefined4 **)(lVar4 + 8) != (undefined4 *)0x0) {
            puVar5 = *(undefined4 **)(lVar4 + 8);
          }
          FUN_1447325ac(puVar5,local_28,1);
          (**(code **)(*plVar3 + 0x20))(plVar3,local_28);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412c19d8 FUN_1412c19d8 body=228 status=ok
// SIG undefined FUN_1412c19d8(void)

longlong FUN_1412c19d8(void)

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
  if (DAT_14cba0968 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148b94c27;
    local_40 = FUN_1465ab67b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/OakGame",L"FirmwareOwner",&DAT_14cba0968,&DAT_148b94c26);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba0968;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412c1ac6 FUN_1412c1ac6 body=962 status=ok
// SIG undefined FUN_1412c1ac6(void)

undefined8 * FUN_1412c1ac6(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar1 = FUN_14007ca06();
  FUN_1410b71be(param_1,uVar1);
  *param_1 = &PTR_FUN_14b5f3880;
  param_1[0x72] = &PTR_FUN_14b5f3f10;
  param_1[0x73] = &PTR_FUN_14b5f3f30;
  param_1[0x74] = &PTR_FUN_14b5f3f60;
  param_1[0x75] = &PTR_FUN_14b5f3f70;
  param_1[0x76] = &PTR_FUN_14b5f3fe0;
  param_1[0x77] = &PTR_FUN_14b5f4010;
  param_1[0x78] = &PTR_FUN_14b5f4040;
  param_1[0x7f] = &PTR_FUN_14b5f40f0;
  param_1[0x80] = &PTR_FUN_14b5f4160;
  param_1[0x81] = &PTR_FUN_14b5f41d0;
  param_1[0x82] = &PTR_FUN_14b5f4200;
  param_1[0x83] = &PTR_FUN_14b5f4240;
  param_1[0x84] = &PTR_FUN_14b5f42e0;
  param_1[0x85] = &PTR_FUN_14b5f4300;
  param_1[0x89] = &PTR_FUN_14b5f4320;
  param_1[0x8a] = &PTR_FUN_14b5f43e0;
  param_1[0x8b] = &PTR_FUN_14b5f4460;
  param_1[0x8c] = &PTR_FUN_14b5f44b0;
  param_1[0x8d] = &PTR_FUN_14b5f44f0;
  param_1[0x8e] = &PTR_FUN_14b5f4510;
  param_1[0x8f] = &PTR_FUN_14b5f4530;
  param_1[0x90] = &PTR_FUN_14b5f4550;
  param_1[0x91] = &PTR_FUN_14b5f4570;
  param_1[0x92] = &PTR_FUN_14b5f4590;
  param_1[0x93] = &PTR_FUN_14b5f45b0;
  param_1[0x94] = &PTR_FUN_14b5f45d0;
  param_1[0x95] = &PTR_FUN_14b5f45f0;
  param_1[0x96] = &PTR_FUN_14b5f4610;
  param_1[0x34b] = &PTR_FUN_14b5f4630;
  param_1[0x352] = &PTR_FUN_14b5f4640;
  param_1[0x353] = &PTR_FUN_14b5f4680;
  param_1[0x354] = &PTR_FUN_14b5f46c0;
  param_1[0x355] = &PTR_FUN_14b5f4710;
  param_1[0x356] = &PTR_FUN_14b5f4740;
  param_1[0x359] = &PTR_FUN_14b5f4780;
  param_1[0x35a] = &PTR_FUN_14b5f4790;
  param_1[0x35b] = &PTR_FUN_14b5f47c0;
  param_1[0x35c] = &PTR_FUN_14b5f4860;
  param_1[0x4bf] = &PTR_FUN_14b5f4880;
  param_1[0x4e5] = 0;
  param_1[0x4e6] = 0;
  param_1[0x4e3] = 0;
  param_1[0x4e4] = 0;
  param_1[0x4e1] = 0;
  param_1[0x4e2] = 0;
  *(undefined4 *)(param_1 + 0x4e7) = 2;
  param_1[0x4f8] = 0;
  *(undefined4 *)(param_1 + 0x4f9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x273c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2744) = 0;
  *(undefined8 *)((longlong)param_1 + 0x274c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2754) = 0;
  *(undefined8 *)((longlong)param_1 + 0x275c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2764) = 0;
  *(undefined8 *)((longlong)param_1 + 0x276c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2774) = 0;
  *(undefined8 *)((longlong)param_1 + 0x277c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2784) = 0;
  *(undefined8 *)((longlong)param_1 + 0x278c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2794) = 0;
  *(undefined8 *)((longlong)param_1 + 0x279c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x27a4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x27ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x27cc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x27d4) = 0;
  param_1[0x4fc] = 0;
  *(undefined4 *)(param_1 + 0x4fd) = 0;
  *(undefined8 *)((longlong)param_1 + 0x27fd) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2805) = 0;
  param_1[0x4fe] = 0;
  param_1[0x4ff] = 0;
  param_1[0x506] = 0;
  param_1[0x507] = 0;
  param_1[0x504] = 0;
  param_1[0x505] = 0;
  param_1[0x502] = 0;
  param_1[0x503] = 0;
  param_1[0x508] = 2;
  *(undefined1 *)(param_1 + 0x51e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2847) = 0;
  param_1[0x510] = 0;
  param_1[0x50e] = 0;
  param_1[0x50f] = 0;
  param_1[0x50c] = 0;
  param_1[0x50d] = 0;
  param_1[0x50a] = 0;
  param_1[0x50b] = 0;
  param_1[0x522] = 0;
  param_1[0x523] = 0;
  param_1[0x520] = 0;
  param_1[0x521] = 0;
  param_1[0x4e0] = &PTR_FUN_14b5f8150;
  param_1[0x524] = 0;
  *(undefined1 *)(param_1 + 0x525) = 0;
  uVar1 = DAT_14cbd3900;
  uVar2 = FUN_1412c1e88();
  lVar3 = FUN_14048696c(param_1,uVar1,uVar2,uVar2,1,0);
  if ((lVar3 == 0) || (DAT_14c950c29 == '\0')) {
    param_1[0x524] = lVar3;
    if (lVar3 == 0) {
      return param_1;
    }
  }
  else {
    FUN_1456cec3c(lVar3);
    param_1[0x524] = lVar3;
  }
  FUN_140486fc4(lVar3,param_1[0x39],0);
  return param_1;
}



// FUNCTION 1412c1e88 FUN_1412c1e88 body=228 status=ok
// SIG undefined FUN_1412c1e88(void)

longlong FUN_1412c1e88(void)

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
  if (DAT_14cbb3ed8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14635a396;
    local_38 = &LAB_148c6166b;
    local_40 = &LAB_141246875;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x7e0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUILabelWidgetComponent",&DAT_14cbb3ed8,FUN_1465fa452);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb3ed8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412c1f6e FUN_1412c1f6e body=98 status=ok
// SIG undefined FUN_1412c1f6e(void)

void FUN_1412c1f6e(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_38 [38];
  undefined1 local_12 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1412c1fd2();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14a90fd74);
  FUN_140562eea(local_12,param_2,0,&DAT_14c896044);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412c1fd2 FUN_1412c1fd2 body=2669 status=ok
// SIG undefined FUN_1412c1fd2(void)

void FUN_1412c1fd2(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  byte bVar2;
  ulonglong *puVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined **ppuVar12;
  byte bVar13;
  undefined4 uVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  bool bVar19;
  undefined1 auStack_268 [32];
  longlong local_248 [2];
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  longlong local_208;
  undefined1 local_1fa [2];
  undefined **local_1f8;
  undefined8 uStack_1f0;
  undefined ***local_1e8;
  undefined ****local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1cc;
  undefined4 local_1c4;
  longlong local_1b8;
  undefined4 local_1b0;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_268;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e39474);
  local_1e0 = &local_1e8;
  local_1f8 = &PTR_FUN_149e37810;
  local_1e8 = &local_1f8;
  uStack_1f0 = param_2;
  switchD_143c3d4dc::caseD_20(param_1);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbd8);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc28);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14aa8f6ac);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cb60);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbb8);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e39268);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  uVar14 = 0;
  FUN_140562eea(local_1fa,param_2,0,&DAT_14c896044);
  local_208 = param_1[0x25];
  local_238 = (undefined4)param_1[0x1f];
  uStack_234 = *(undefined4 *)((longlong)param_1 + 0xfc);
  uStack_230 = (undefined4)param_1[0x20];
  uStack_22c = *(undefined4 *)((longlong)param_1 + 0x104);
  local_228 = (undefined4)param_1[0x21];
  uStack_224 = *(undefined4 *)((longlong)param_1 + 0x10c);
  uStack_220 = (undefined4)param_1[0x22];
  uStack_21c = *(undefined4 *)((longlong)param_1 + 0x114);
  local_218 = (undefined4)param_1[0x23];
  uStack_214 = *(undefined4 *)((longlong)param_1 + 0x11c);
  uStack_210 = (undefined4)param_1[0x24];
  uStack_20c = *(undefined4 *)((longlong)param_1 + 0x124);
  FUN_14010dffd(param_2,&local_238);
  *(undefined4 *)(param_1 + 0x1f) = local_238;
  *(undefined4 *)((longlong)param_1 + 0xfc) = uStack_234;
  *(undefined4 *)(param_1 + 0x20) = uStack_230;
  *(undefined4 *)((longlong)param_1 + 0x104) = uStack_22c;
  *(undefined4 *)(param_1 + 0x21) = local_228;
  *(undefined4 *)((longlong)param_1 + 0x10c) = uStack_224;
  *(undefined4 *)(param_1 + 0x22) = uStack_220;
  *(undefined4 *)((longlong)param_1 + 0x114) = uStack_21c;
  *(undefined4 *)(param_1 + 0x23) = local_218;
  *(undefined4 *)((longlong)param_1 + 0x11c) = uStack_214;
  *(undefined4 *)(param_1 + 0x24) = uStack_210;
  *(undefined4 *)((longlong)param_1 + 0x124) = uStack_20c;
  param_1[0x25] = local_208;
  FUN_140aeee12(param_1);
  plVar8 = (longlong *)(**(code **)(*param_1 + 0x3b8))(param_1);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)(int)plVar8[1] * 0x28,
             (longlong)*(int *)((longlong)plVar8 + 0xc) * 0x28);
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    uVar14 = (undefined4)plVar8[1];
  }
  local_1f8 = (undefined **)CONCAT44(local_1f8._4_4_,uVar14);
  puVar3 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1f8,4);
    }
    else {
      FUN_14572512c(param_2,&local_1f8);
    }
    uVar7 = (uint)local_1f8;
  }
  else {
    uVar7 = *(uint *)*puVar3;
    local_1f8 = (undefined **)CONCAT44(local_1f8._4_4_,uVar7);
    *puVar3 = (ulonglong)puVar1;
  }
  if (uVar7 == 0) {
    if (((*(byte *)(param_2 + 5) & 1) != 0) &&
       (*(undefined4 *)(plVar8 + 1) = 0, *(int *)((longlong)plVar8 + 0xc) != 0)) {
      FUN_14008fb38(plVar8,0);
    }
  }
  else if ((((int)uVar7 < 0) || ((*(byte *)((longlong)param_2 + 0x29) & 2) != 0)) ||
          ((0x66666 < uVar7 && (*(char *)((longlong)param_2 + 0x2b) < '\0')))) {
    FUN_14572541c(param_2);
  }
  else if ((*(byte *)(param_2 + 5) & 1) == 0) {
    *(uint *)(plVar8 + 1) = uVar7;
    lVar11 = 0;
    lVar18 = 0;
    do {
      FUN_1417f02e9(param_2,*plVar8 + lVar11);
      lVar18 = lVar18 + 1;
      lVar11 = lVar11 + 0x28;
    } while (lVar18 < (int)plVar8[1]);
  }
  else {
    *(undefined4 *)(plVar8 + 1) = 0;
    if (*(uint *)((longlong)plVar8 + 0xc) != uVar7) {
      FUN_14008fb38(plVar8);
      if ((int)(uint)local_1f8 < 1) goto LAB_1412c2218;
    }
    iVar15 = 0;
    do {
      uVar9 = FUN_1406f06ba(plVar8);
      FUN_1417f02e9(param_2,uVar9);
      iVar15 = iVar15 + 1;
    } while (iVar15 < (int)(uint)local_1f8);
  }
LAB_1412c2218:
  uVar9 = (**(code **)(*param_1 + 0x310))(param_1);
  FUN_1400f4786(param_2,uVar9);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    uVar9 = (**(code **)(*param_1 + 0x310))(param_1);
    uVar10 = (**(code **)(*param_1 + 0x3f8))(param_1);
    FUN_1408174de(uVar9,uVar10,0);
    lVar11 = (**(code **)(*param_1 + 0x3f8))(param_1);
    if ((lVar11 != 0) &&
       (lVar11 = (**(code **)(*param_1 + 0x3f8))(param_1), *(char *)(lVar11 + 0x470) == '\0')) {
      lVar11 = (**(code **)(*param_1 + 0x3f8))(param_1);
      if (param_1 == (longlong *)0x0) {
        uVar16 = 0;
        uVar17 = 0;
      }
      else {
        uVar7 = *(uint *)((longlong)param_1 + 0xc);
        uVar16 = (ulonglong)uVar7;
        if ((int)uVar7 < DAT_14c9647dc) {
          lVar18 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
        }
        else {
          lVar18 = 0;
        }
        uVar17 = (ulonglong)*(uint *)(lVar18 + 0x10);
        if (*(uint *)(lVar18 + 0x10) == 0) {
          LOCK();
          iVar15 = DAT_14c964868 + 1;
          UNLOCK();
          uVar7 = DAT_14c964868 + 1;
          bVar19 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar15;
          if (bVar19) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar7);
          }
          LOCK();
          uVar5 = *(uint *)(lVar18 + 0x10);
          bVar19 = uVar5 == 0;
          if (bVar19) {
            *(uint *)(lVar18 + 0x10) = uVar7;
            uVar5 = 0;
          }
          UNLOCK();
          if (bVar19) {
            uVar5 = uVar7;
          }
          uVar17 = (ulonglong)uVar5;
        }
      }
      iVar15 = *(int *)(lVar11 + 0x480);
      *(uint *)(lVar11 + 0x480) = iVar15 + 1U;
      if (*(uint *)(lVar11 + 0x484) < iVar15 + 1U) {
        FUN_14076aab4((longlong *)(lVar11 + 0x478),iVar15);
      }
      *(ulonglong *)(*(longlong *)(lVar11 + 0x478) + (longlong)iVar15 * 8) = uVar16 | uVar17 << 0x20
      ;
    }
  }
  iVar15 = FUN_1448332aa(param_2,&DAT_14aa8f6ac);
  if (0xb < iVar15) {
    if (param_2[0xd] == 0) {
      bVar19 = false;
    }
    else {
      bVar19 = *(longlong *)(param_2[0xd] + 0x10) != 0;
    }
    puVar3 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar1) {
      local_1f8 = (undefined **)CONCAT44(local_1f8._4_4_,(uint)bVar19);
      (**(code **)(*param_2 + 0x170))(param_2,&local_1f8,4);
      uVar7 = (uint)local_1f8;
      if (1 < (uint)local_1f8) {
        FUN_14572541c(param_2);
        uVar7 = (uint)local_1f8;
      }
    }
    else {
      uVar7 = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
    }
    plVar8 = param_1;
    if ((*(uint *)((longlong)param_2 + 0x34) & 0x1000) != 0 || uVar7 != 0) {
      for (; plVar8 != (longlong *)0x0; plVar8 = (longlong *)plVar8[4]) {
        if ((*(uint *)(plVar8 + 1) & 0x30) != 0) goto LAB_1412c2499;
      }
      if ((*(byte *)((longlong)param_2 + 0x2b) & 8) == 0) {
        if ((*(byte *)(param_2 + 5) & 1) == 0) {
          if ((*(byte *)(param_2 + 5) & 4) == 0) goto LAB_1412c2499;
          lVar11 = param_1[0x1d];
          if (uVar7 != 0) {
            iVar15 = FUN_147d21352();
            local_1f8 = (undefined **)0x0;
            uStack_1f0 = (longlong *)0x0;
            if (param_2[0xd] == 0) {
              plVar8 = (longlong *)0x0;
            }
            else {
              plVar8 = *(longlong **)(param_2[0xd] + 8);
            }
            (**(code **)(*plVar8 + 0xa8))(0,&local_1f8);
            if (0 < (int)uStack_1f0) {
              lVar18 = 0;
              do {
                uVar4 = FUN_14741398a(local_1f8[lVar18]);
                if (param_2[0xd] == 0) {
                  uVar9 = 0;
                }
                else {
                  uVar9 = *(undefined8 *)(param_2[0xd] + 8);
                }
                uVar14 = (&DAT_14ca814b8)[(ulonglong)uVar4 * 0xf];
                iVar6 = FUN_1401a8bec(uVar9);
                if (iVar6 < iVar15) {
                  local_248[0] = 0;
                  local_248[1] = 0;
                  FUN_14631b754(uVar14,local_248);
                  if (local_248[0] != 0) {
                    FUN_1400020a8();
                  }
                }
                lVar18 = lVar18 + 1;
              } while (lVar18 < (int)uStack_1f0);
            }
            if (local_1f8 != (undefined **)0x0) {
              FUN_1400020a8();
            }
          }
        }
        else {
          ppuVar12 = (undefined **)FUN_14001cc68(0x28,0x10);
          *ppuVar12 = (undefined *)0x0;
          ppuVar12[1] = (undefined *)0x0;
          *(undefined8 *)((longlong)ppuVar12 + 0xe) = 0;
          *(undefined8 *)((longlong)ppuVar12 + 0x16) = 0;
          *(undefined1 *)((longlong)ppuVar12 + 0x1e) = 1;
          *(undefined4 *)(ppuVar12 + 4) = 0xffffffff;
          *(undefined1 *)((longlong)ppuVar12 + 0x24) = 0;
          FUN_1404d75a8(ppuVar12 + 2,0);
          FUN_1404d768c(ppuVar12[2]);
          local_1f8 = ppuVar12;
          FUN_140cad430(param_1,&local_1f8);
          ppuVar12 = local_1f8;
          if (local_1f8 != (undefined **)0x0) {
            FUN_14074f7be(local_1f8);
            FUN_1400020a8(ppuVar12);
          }
          lVar11 = param_1[0x1d];
        }
        FUN_1436be2ec(lVar11,param_2,param_1);
      }
    }
  }
LAB_1412c2499:
  if ((*(byte *)(param_2 + 5) & 5) == 0) {
    uVar9 = (**(code **)(*param_1 + 0x370))(param_1);
    FUN_147d1ed22(param_2,uVar9);
  }
  if ((int)param_2[8] < 0x136) {
    local_1d8 = 0;
    local_1d0 = 0;
    local_1f8 = (undefined **)0x0;
    uStack_1f0 = (longlong *)0x0;
    local_1cc = 0xffffffff00000080;
    local_1c4 = 0;
    local_1b8 = 0;
    local_1b0 = 0;
    FUN_1400f48bc(param_2,&local_1f8);
    local_1b0 = 0;
    if (local_1b8 != 0) {
      FUN_1400020a8();
    }
    FUN_1401ad17c(&local_1f8);
  }
  local_1f8 = (undefined **)0x0;
  uStack_1f0 = (longlong *)0x0;
  (**(code **)(*param_2 + 0x10))(param_2,0,0);
  uVar14 = 0;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    uVar14 = (int)uStack_1f0;
  }
  local_248[0] = CONCAT44(local_248[0]._4_4_,uVar14);
  puVar3 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,local_248,4);
    }
    else {
      FUN_14572512c(param_2,local_248);
    }
    uVar7 = (uint)local_248[0];
  }
  else {
    uVar7 = *(uint *)*puVar3;
    local_248[0] = CONCAT44(local_248[0]._4_4_,uVar7);
    *puVar3 = (ulonglong)puVar1;
  }
  uVar5 = uStack_1f0._4_4_;
  if (uVar7 == 0) {
    if (((*(byte *)(param_2 + 5) & 1) != 0) &&
       (uStack_1f0 = (longlong *)((ulonglong)uStack_1f0 & 0xffffffff00000000), uVar5 != 0)) {
      FUN_14079e7a6(&local_1f8,0);
    }
  }
  else if ((((int)uVar7 < 0) || ((*(byte *)((longlong)param_2 + 0x29) & 2) != 0)) ||
          ((0x200000 < uVar7 && (*(char *)((longlong)param_2 + 0x2b) < '\0')))) {
    FUN_14572541c(param_2);
  }
  else if ((*(byte *)(param_2 + 5) & 1) == 0) {
    uStack_1f0 = (longlong *)CONCAT44(uStack_1f0._4_4_,uVar7);
    lVar11 = 0;
    lVar18 = 0;
    do {
      (**(code **)(*param_2 + 0x150))(param_2,(longlong)local_1f8 + lVar11);
      lVar18 = lVar18 + 1;
      lVar11 = lVar11 + 8;
    } while (lVar18 < (int)uStack_1f0);
  }
  else {
    uStack_1f0 = (longlong *)((ulonglong)uStack_1f0._4_4_ << 0x20);
    if (uVar5 != uVar7) {
      FUN_14079e7a6(&local_1f8);
      if ((int)(uint)local_248[0] < 1) goto LAB_1412c2568;
    }
    iVar15 = 0;
    do {
      uVar16 = (ulonglong)uStack_1f0;
      lVar11 = (longlong)(int)uStack_1f0;
      uVar7 = (int)uStack_1f0 + 1;
      uStack_1f0 = (longlong *)CONCAT44(uStack_1f0._4_4_,uVar7);
      if (uStack_1f0._4_4_ < uVar7) {
        FUN_1447f76d2(&local_1f8,uVar16 & 0xffffffff);
      }
      local_1f8[lVar11] = (undefined *)0x0;
      (**(code **)(*param_2 + 0x150))(param_2);
      iVar15 = iVar15 + 1;
    } while (iVar15 < (int)(uint)local_248[0]);
  }
LAB_1412c2568:
  if (((*(byte *)(param_2 + 5) & 1) != 0) &&
     (iVar15 = FUN_1448332aa(param_2,&DAT_149e3cb60), iVar15 < 10)) {
    local_248[0] = 0;
    local_248[1] = 0;
    FUN_146db24e8(param_2,local_248);
    if (local_248[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((*(byte *)((longlong)param_1 + 0x2b5) & 0x10) != 0) {
    local_248[0] = param_1[0x57];
    (**(code **)(*param_2 + 0x150))(param_2,local_248);
    lVar11 = local_248[0];
    if ((local_248[0] != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_248[0]);
    }
    param_1[0x57] = lVar11;
  }
  iVar15 = FUN_1448332aa(param_2,&DAT_149e3cbb8);
  if ((iVar15 < 7) && (iVar15 = (**(code **)(*param_1 + 0x3c0))(param_1), 1 < iVar15)) {
    iVar6 = 1;
    do {
      lVar11 = (**(code **)(*param_1 + 800))(param_1,iVar6);
      *(undefined1 *)(lVar11 + 0x48) = 2;
      if ((*(float *)(lVar11 + 0x44) == 0.0) && (!NAN(*(float *)(lVar11 + 0x44)))) {
        *(undefined4 *)(lVar11 + 0x44) = 0x3f800000;
      }
      iVar6 = iVar6 + 1;
    } while (iVar15 != iVar6);
  }
  if ((((*(byte *)(param_2 + 5) & 1) != 0) &&
      (iVar15 = FUN_1448332aa(param_2,&DAT_149e3cc28), iVar15 < 0x25)) &&
     (iVar15 = (**(code **)(*param_1 + 0x3c0))(param_1), 0 < iVar15)) {
    iVar6 = 0;
    do {
      lVar11 = (**(code **)(*param_1 + 800))(param_1,iVar6);
      bVar2 = *(byte *)(lVar11 + 0x18);
      bVar13 = *(char *)((longlong)param_1 + 0x2b5) << 7;
      *(byte *)(lVar11 + 0x18) = bVar2 & 0x7f | bVar13;
      *(byte *)(lVar11 + 0x18) =
           bVar2 & 0x4f | bVar13 | (*(byte *)((longlong)param_1 + 0x2b5) & 2) << 4 | 0x10;
      iVar6 = iVar6 + 1;
    } while (iVar15 != iVar6);
  }
  if ((((*(byte *)(param_2 + 5) & 1) != 0) &&
      (iVar15 = FUN_1448332aa(param_2,&DAT_149e3cc78), iVar15 < 0x26)) &&
     (iVar15 = (**(code **)(*param_1 + 0x3c0))(param_1), 0 < iVar15)) {
    iVar6 = 0;
    do {
      lVar11 = (**(code **)(*param_1 + 800))(param_1,iVar6);
      *(byte *)(lVar11 + 0x19) = *(byte *)(lVar11 + 0x19) | 1;
      iVar6 = iVar6 + 1;
    } while (iVar15 != iVar6);
  }
  if (local_1f8 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412c2a40 FUN_1412c2a40 body=179 status=ok
// SIG undefined FUN_1412c2a40(void)

void FUN_1412c2a40(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  cVar2 = FUN_1404fa388();
  if (cVar2 == '\0') goto LAB_1412c2a53;
  lVar5 = *(longlong *)(param_1 + 0x60);
  if (lVar5 == 0) {
    uVar3 = FUN_140067708();
    lVar5 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x60) = lVar5;
  }
  lVar4 = *(longlong *)(param_1 + 0x68);
  if (((lVar4 == 0) && (lVar4 = 0, lVar5 != 0)) && (*(longlong *)(param_1 + 0x58) != 0)) {
    plVar1 = *(longlong **)(lVar5 + 0xb8);
    if (plVar1 == (longlong *)0x0) {
LAB_1412c2aef:
      lVar4 = 0;
    }
    else {
      cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
      if (cVar2 == '\0') goto LAB_1412c2aef;
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar4 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x58));
    }
    *(longlong *)(param_1 + 0x68) = lVar4;
  }
  FUN_140bd765a(param_1,lVar4,0x3e4ccccd);
LAB_1412c2a53:
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}



// FUNCTION 1412c2af4 FUN_1412c2af4 body=236 status=ok
// SIG undefined FUN_1412c2af4(void)

bool FUN_1412c2af4(char *param_1,longlong *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  
  LOCK();
  cVar1 = *param_1;
  if (cVar1 == '\0') {
    *param_1 = '\x01';
  }
  UNLOCK();
  if (cVar1 != '\0') {
    FUN_1447d2058(param_1);
  }
  uVar8 = param_2[1];
  uVar11 = *param_2 + 0x9ae16a3b2f90404f;
  uVar11 = ((uVar11 << 0x27 | uVar11 >> 0x19) + uVar8) * -0x651e95c4d06fbf91;
  uVar8 = (*param_2 + (uVar8 << 0x1b | uVar8 >> 0x25) * -0x651e95c4d06fbf91 + 0x9ae16a3b2f90404f ^
          uVar11) * -0x651e95c4d06fbf91;
  lVar9 = (uVar8 >> 0x2f ^ uVar11 ^ uVar8) * -0x651e95c4d06fbf91;
  iVar7 = FUN_1412c2be0(param_1 + 8,((uint)((ulonglong)lVar9 >> 0x2f) ^ (uint)lVar9) * 0x2f90406f,
                        param_2);
  if (iVar7 == -1) {
    lVar9 = 0;
  }
  else {
    lVar9 = (longlong)iVar7 * 0x38 + *(longlong *)(param_1 + 8);
  }
  puVar10 = (undefined4 *)(lVar9 + 0x10);
  if (lVar9 == 0) {
    puVar10 = (undefined4 *)0x0;
  }
  if (puVar10 != (undefined4 *)0x0) {
    uVar2 = *puVar10;
    uVar3 = puVar10[1];
    uVar4 = puVar10[2];
    uVar5 = puVar10[3];
    uVar6 = *(undefined8 *)(puVar10 + 6);
    *(undefined8 *)(param_3 + 4) = *(undefined8 *)(puVar10 + 4);
    *(undefined8 *)(param_3 + 6) = uVar6;
    *param_3 = uVar2;
    param_3[1] = uVar3;
    param_3[2] = uVar4;
    param_3[3] = uVar5;
  }
  LOCK();
  cVar1 = *param_1;
  if (cVar1 == '\x01') {
    *param_1 = '\0';
  }
  UNLOCK();
  if (cVar1 != '\x01') {
    FUN_14008cdb0(param_1);
  }
  return puVar10 != (undefined4 *)0x0;
}



// FUNCTION 1412c2be0 FUN_1412c2be0 body=115 status=ok
// SIG undefined FUN_1412c2be0(void)

int FUN_1412c2be0(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1 * 0x38;
        if ((((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + 4 + lVar4) == param_3[1]))
            && (*(int *)(lVar2 + 8 + lVar4) == param_3[2])) &&
           (*(int *)(lVar2 + 0xc + lVar4) == param_3[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar4 + lVar2 + 0x30);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1412c2c53 FUN_1412c2c53 body=136 status=ok
// SIG undefined FUN_1412c2c53(void)

void FUN_1412c2c53(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x10);
    do {
      plVar4[2] = (longlong)&PTR_FUN_149ed05f0;
      plVar3 = (longlong *)plVar4[0x16];
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
      plVar4 = plVar4 + 0x1a;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1412c2cdc FUN_1412c2cdc body=505 status=ok
// SIG undefined FUN_1412c2cdc(void)

void FUN_1412c2cdc(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  longlong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_1403a682c;
      local_70 = 0;
      local_78 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
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
      local_38 = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_38);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_38;
  if ((local_38 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_48 = (undefined4)uStack_30;
  uStack_44 = uStack_30._4_4_;
  uStack_40 = (undefined4)local_28;
  uStack_3c = local_28._4_4_;
  uVar4 = FUN_1412c2ed6();
  *param_3 = uVar4;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412c2ed6 FUN_1412c2ed6 body=117 status=ok
// SIG undefined FUN_1412c2ed6(void)

bool FUN_1412c2ed6(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_141088a78(param_1,&local_28);
  iVar3 = *(int *)(local_28 + 0xec);
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
    return 0 < iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412c2f4c FUN_1412c2f4c body=69 status=ok
// SIG undefined FUN_1412c2f4c(void)

void FUN_1412c2f4c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_2;
  if ((lVar1 != 0) && (lVar2 = *(longlong *)(param_1 + 0x41e0), lVar2 != 0)) {
    lVar3 = FUN_1412c2f92(lVar2);
    if (lVar3 != 0) {
      FUN_1412c3038(lVar2,lVar1);
    }
    *param_2 = 0;
  }
  return;
}



// FUNCTION 1412c2f92 FUN_1412c2f92 body=165 status=ok
// SIG undefined FUN_1412c2f92(void)

char * FUN_1412c2f92(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char *pcVar3;
  longlong *plVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  
  lVar1 = *param_2;
  if (lVar1 == 0) {
    return (char *)0x0;
  }
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return (char *)0x0;
  }
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  iVar6 = *(int *)((longlong)plVar4 +
                  (ulonglong)
                  ((int)param_1[9] - 1U & (int)lVar1 + (int)((ulonglong)lVar1 >> 0x20) * 0x17) * 4);
  if (iVar6 == -1) {
    return (char *)0x0;
  }
  lVar2 = *param_1;
  iVar7 = iVar6;
  while (*(longlong *)(lVar2 + (longlong)iVar7 * 0x18) != lVar1) {
    iVar7 = *(int *)(lVar2 + (longlong)iVar7 * 0x18 + 0x10);
    if (iVar7 == -1) {
      return (char *)0x0;
    }
  }
  do {
    plVar4 = (longlong *)(lVar2 + (longlong)iVar6 * 0x18);
    if (*plVar4 == lVar1) goto LAB_1412c301f;
    iVar6 = (int)plVar4[2];
  } while (iVar6 != -1);
  plVar4 = (longlong *)0x0;
LAB_1412c301f:
  pcVar3 = (char *)plVar4[1];
  if (*(longlong *)(pcVar3 + 0x60) != lVar1) {
    return (char *)0x0;
  }
  pcVar5 = (char *)0x0;
  if (*pcVar3 != '\x04') {
    pcVar5 = pcVar3;
  }
  return pcVar5;
}



// FUNCTION 1412c3038 FUN_1412c3038 body=154 status=ok
// SIG undefined FUN_1412c3038(void)

void FUN_1412c3038(longlong param_1,undefined8 param_2)

{
  char cVar1;
  char *pcVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1;
  local_28 = param_2;
  pcVar2 = (char *)FUN_1404f45ac();
  cVar1 = *pcVar2;
  if (cVar1 == '\x03') {
    *(undefined8 *)(param_1 + 0xb0) = 0;
    local_20 = param_2;
  }
  else {
    if (cVar1 == '\x01') {
      *pcVar2 = '\x04';
      goto LAB_1412c3089;
    }
    if (cVar1 != '\0') goto LAB_1412c3089;
    FUN_14880fc9c(param_1 + 0x60,&local_28);
    local_20 = local_28;
  }
  FUN_1412c30d4(param_1);
LAB_1412c3089:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412c30d4 FUN_1412c30d4 body=122 status=ok
// SIG undefined FUN_1412c30d4(void)

undefined8 FUN_1412c30d4(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *param_2;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)((int)((ulonglong)lVar2 >> 0x20) * 0x17 + (int)lVar2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x18) == lVar2) {
          FUN_1412c314e();
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 1412c314e FUN_1412c314e body=91 status=ok
// SIG undefined FUN_1412c314e(void)

void FUN_1412c314e(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar1 = *param_1 + (longlong)param_2 * 0x18;
  lVar5 = (longlong)*(int *)(lVar1 + 0x14);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x10);
  FUN_1412c31aa(param_1,param_2,1);
  return;
}



// FUNCTION 1412c31aa FUN_1412c31aa body=118 status=ok
// SIG undefined FUN_1412c31aa(void)

void FUN_1412c31aa(longlong *param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  
  if (param_3 != 0) {
    plVar3 = (longlong *)(*param_1 + (longlong)param_2 * 0x18 + 8);
    iVar2 = param_3;
    do {
      lVar1 = *plVar3;
      if (lVar1 != 0) {
        (*(code *)(&PTR_LAB_14a1c87a0)[*(byte *)(lVar1 + 0x50)])(lVar1 + 0x10);
        FUN_1400020a8(lVar1);
      }
      plVar3 = plVar3 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_1412c3220(param_1,param_2,param_3);
  return;
}



// FUNCTION 1412c3220 FUN_1412c3220 body=138 status=ok
// SIG undefined FUN_1412c3220(void)

void FUN_1412c3220(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
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
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1412c32aa FUN_1412c32aa body=380 status=ok
// SIG undefined FUN_1412c32aa(void)

ulonglong FUN_1412c32aa(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int iVar9;
  
  if (*param_1 == 0) {
    return 0;
  }
  plVar3 = (longlong *)param_1[1];
  if (plVar3 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*plVar3 + 0x20) == (code *)&LAB_144a7e90a) {
    plVar3 = plVar3 + 0x143;
  }
  else {
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3);
  }
  if ((int)plVar3[6] == *(int *)((longlong)plVar3 + 0x5c)) {
    return 0;
  }
  uVar4 = *(uint *)(param_1 + 2);
  plVar6 = plVar3 + 0xc;
  if ((longlong *)plVar3[0xd] != (longlong *)0x0) {
    plVar6 = (longlong *)plVar3[0xd];
  }
  iVar5 = *(int *)((longlong)plVar6 + (ulonglong)((int)plVar3[0xe] - 1U & uVar4) * 4);
  if (iVar5 == -1) {
    return 0;
  }
  while (*(uint *)(plVar3[5] + (longlong)iVar5 * 0xe0) != uVar4) {
    iVar5 = *(int *)((longlong)iVar5 * 0xe0 + plVar3[5] + 0xd0);
    if (iVar5 == -1) {
      return 0;
    }
  }
  puVar7 = &DAT_14cbcb1e0;
  if ((*param_1 != 0) && (plVar3 = (longlong *)param_1[1], plVar3 != (longlong *)0x0)) {
    if (*(code **)(*plVar3 + 0x20) == (code *)&LAB_144a7e90a) {
      plVar3 = plVar3 + 0x143;
    }
    else {
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3);
      uVar4 = *(uint *)(param_1 + 2);
    }
    if ((int)plVar3[6] != *(int *)((longlong)plVar3 + 0x5c)) {
      plVar6 = plVar3 + 0xc;
      if ((longlong *)plVar3[0xd] != (longlong *)0x0) {
        plVar6 = (longlong *)plVar3[0xd];
      }
      iVar5 = *(int *)((longlong)plVar6 + (ulonglong)((int)plVar3[0xe] - 1U & uVar4) * 4);
      if (iVar5 != -1) {
        lVar1 = plVar3[5];
        iVar9 = iVar5;
        do {
          if (*(uint *)(lVar1 + (longlong)iVar9 * 0xe0) == uVar4) goto LAB_1412c33a2;
          iVar9 = *(int *)((longlong)iVar9 * 0xe0 + lVar1 + 0xd0);
        } while (iVar9 != -1);
      }
    }
  }
  goto LAB_1412c33b9;
  while (iVar5 = *(int *)(lVar8 + 0xd0), iVar5 != -1) {
LAB_1412c33a2:
    lVar8 = lVar1 + (longlong)iVar5 * 0xe0;
    if (*(uint *)(lVar1 + (longlong)iVar5 * 0xe0) == uVar4) goto LAB_1412c33b5;
  }
  lVar8 = 0;
LAB_1412c33b5:
  puVar7 = (undefined8 *)(lVar8 + 0x10);
LAB_1412c33b9:
  uVar2 = FUN_1412c3426(puVar7);
  if ((char)uVar2 == '\0') {
    return 0;
  }
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),(char)param_1[0xc]) ^ 1;
}



// FUNCTION 1412c3426 FUN_1412c3426 body=102 status=ok
// SIG undefined FUN_1412c3426(void)

undefined1 FUN_1412c3426(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar3 = (longlong *)*param_1;
  if (plVar3 != (longlong *)0x0) {
    uVar2 = FUN_140437b04();
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,uVar2);
    if (plVar3 != (longlong *)0x0) {
      uVar2 = FUN_140437b04();
      plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
      if (((plVar3 != plVar4) && (plVar4 != (longlong *)0x0)) &&
         (cVar1 = (**(code **)(*plVar4 + 0x68))(plVar4), cVar1 == '\0')) {
        return 0;
      }
    }
  }
  return (char)param_1[0x11];
}



// FUNCTION 1412c348c FUN_1412c348c body=12 status=ok
// SIG undefined FUN_1412c348c(void)

undefined8 FUN_1412c348c(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  longlong lStack_18;
  ulonglong uStack_10;
  
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  uStack_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lStack_18 = FUN_1412c35d0();
  if ((lStack_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lStack_18);
  }
  uVar1 = (**(code **)(*param_1 + 0x598))(param_1,&lStack_18);
  if ((uStack_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412c3498 FUN_1412c3498 body=208 status=ok
// SIG undefined FUN_1412c3498(void)

undefined8 * FUN_1412c3498(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  
  if (*param_1 == 0) {
    return &DAT_14cbcb1e0;
  }
  plVar3 = (longlong *)param_1[1];
  if (plVar3 == (longlong *)0x0) {
    return &DAT_14cbcb1e0;
  }
  if (*(code **)(*plVar3 + 0x20) == (code *)&LAB_144a7e90a) {
    plVar3 = plVar3 + 0x143;
  }
  else {
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3);
  }
  if ((int)plVar3[6] == *(int *)((longlong)plVar3 + 0x5c)) {
    return &DAT_14cbcb1e0;
  }
  uVar1 = *(uint *)(param_1 + 2);
  plVar5 = plVar3 + 0xc;
  if ((longlong *)plVar3[0xd] != (longlong *)0x0) {
    plVar5 = (longlong *)plVar3[0xd];
  }
  iVar4 = *(int *)((longlong)plVar5 + (ulonglong)((int)plVar3[0xe] - 1U & uVar1) * 4);
  if (iVar4 == -1) {
    return &DAT_14cbcb1e0;
  }
  lVar2 = plVar3[5];
  iVar7 = iVar4;
  while (*(uint *)(lVar2 + (longlong)iVar7 * 0xe0) != uVar1) {
    iVar7 = *(int *)((longlong)iVar7 * 0xe0 + lVar2 + 0xd0);
    if (iVar7 == -1) {
      return &DAT_14cbcb1e0;
    }
  }
  do {
    lVar6 = lVar2 + (longlong)iVar4 * 0xe0;
    if (*(uint *)(lVar2 + (longlong)iVar4 * 0xe0) == uVar1) goto LAB_1412c352f;
    iVar4 = *(int *)(lVar6 + 0xd0);
  } while (iVar4 != -1);
  lVar6 = 0;
LAB_1412c352f:
  return (undefined8 *)(lVar6 + 0x10);
}



// FUNCTION 1412c3568 FUN_1412c3568 body=102 status=ok
// SIG undefined FUN_1412c3568(void)

void FUN_1412c3568(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1412c35d0();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  (**(code **)(*param_1 + 0x598))(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412c35d0 FUN_1412c35d0 body=228 status=ok
// SIG undefined FUN_1412c35d0(void)

longlong FUN_1412c35d0(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cba0778 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b47bc4;
    local_38 = &LAB_148b90015;
    local_40 = &LAB_145de6e5f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x2f0;
    FUN_14081cfa3(L"/Script/OakGame",L"EridiumEncasingComponent",&DAT_14cba0778,FUN_1465aa8d6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba0778;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412c36b6 FUN_1412c36b6 body=7578 status=ok
// SIG undefined FUN_1412c36b6(void)

void FUN_1412c36b6(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  double dVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  char cVar11;
  char cVar12;
  longlong *plVar13;
  longlong lVar14;
  double *pdVar15;
  longlong lVar16;
  undefined8 uVar17;
  uint uVar18;
  int iVar19;
  longlong *plVar20;
  longlong *plVar21;
  longlong *plVar22;
  longlong lVar23;
  undefined8 *puVar24;
  int iVar25;
  longlong *plVar26;
  bool bVar27;
  float fVar28;
  float fVar29;
  code *pcVar30;
  double dVar31;
  double dVar32;
  code *pcVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  double dVar37;
  double dVar38;
  float fVar39;
  float fVar40;
  double dVar41;
  undefined1 auStack_298 [32];
  undefined4 local_278;
  undefined4 local_270;
  undefined4 local_268;
  undefined8 local_260;
  wchar_t *local_258;
  undefined1 *local_250;
  undefined1 *local_248;
  code **local_240;
  undefined1 *local_238;
  code *local_230;
  longlong *local_228;
  longlong local_220;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double dStack_1f0;
  longlong local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  undefined8 local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  float local_19c;
  code *local_198;
  double dStack_190;
  double local_188;
  float local_17c;
  float local_178;
  float local_174;
  double local_170;
  double local_168;
  double local_160;
  code *local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  double local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_298;
  if ((((*param_1 != 0) &&
       (plVar3 = *(longlong **)(&DAT_00006850 + *param_1), plVar3 != (longlong *)0x0)) &&
      (lVar4 = plVar3[0x898], lVar4 != 0)) &&
     ((*param_2 != 0 && (plVar26 = (longlong *)param_2[1], plVar26 != (longlong *)0x0)))) {
    if (*(code **)(*plVar26 + 0x20) == (code *)&LAB_144a7e90a) {
      plVar26 = plVar26 + 0x143;
    }
    else {
      plVar26 = (longlong *)(**(code **)(*plVar26 + 0x20))(plVar26);
    }
    dVar37 = DAT_14c8464f0;
    dVar2 = DAT_14c8464e8;
    pcVar5 = DAT_14c8464e0;
    if ((int)plVar26[6] != *(int *)((longlong)plVar26 + 0x5c)) {
      plVar13 = plVar26 + 0xc;
      if ((longlong *)plVar26[0xd] != (longlong *)0x0) {
        plVar13 = (longlong *)plVar26[0xd];
      }
      iVar19 = *(int *)((longlong)plVar13 +
                       (ulonglong)((int)plVar26[0xe] - 1U & *(uint *)(param_2 + 2)) * 4);
      if (iVar19 != -1) {
        do {
          if (*(uint *)(plVar26[5] + (longlong)iVar19 * 0xe0) == *(uint *)(param_2 + 2)) {
            local_174 = 0.0;
            local_178 = 0.0;
            lVar14 = param_1[0x23];
            local_228 = param_2;
            if ((lVar14 != 0 & DAT_14c950c29) == 1) {
              FUN_1456cec3c(lVar14);
            }
            bVar27 = lVar14 == 0;
            plVar26 = (longlong *)param_1[0x24];
            plVar13 = (longlong *)0x0;
            if (!bVar27) {
              plVar13 = plVar26;
            }
            plVar13 = (longlong *)(**(code **)(*plVar13 + 0x10))(plVar13);
            if ((plVar26 == (longlong *)0x0 || bVar27) || (plVar13 == (longlong *)0x0)) {
LAB_1412c389d:
              plVar21 = (longlong *)0x0;
            }
            else {
              lVar14 = FUN_1411d730e();
              if ((*(int *)(plVar13[2] + 0x38) < *(int *)(lVar14 + 0x38)) ||
                 (plVar21 = plVar13,
                 *(longlong *)
                  (*(longlong *)(plVar13[2] + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8) !=
                 lVar14 + 0x30)) goto LAB_1412c389d;
            }
            plVar22 = local_228;
            fVar40 = 0.0;
            if (((*param_1 == 0) || (*(longlong *)(&DAT_00006850 + *param_1) == 0)) ||
               (lVar14 = *(longlong *)(*(longlong *)(&DAT_00006850 + *param_1) + 0x44c0),
               (plVar26 == (longlong *)0x0 || bVar27) || (lVar14 == 0 || plVar13 == (longlong *)0x0)
               )) {
              fVar39 = 0.0;
              goto LAB_1412c398e;
            }
            if ((param_1[0x23] == 0) ||
               (plVar13 = (longlong *)param_1[0x24], plVar13 == (longlong *)0x0))
            goto LAB_1412c3978;
            local_220 = lVar14;
            if (*(code **)(*plVar13 + 0x20) == (code *)&LAB_144a7e90a) {
              plVar13 = plVar13 + 0x143;
            }
            else {
              plVar13 = (longlong *)(**(code **)(*plVar13 + 0x20))(plVar13);
            }
            if ((int)plVar13[6] == *(int *)((longlong)plVar13 + 0x5c)) goto LAB_1412c3978;
            plVar20 = plVar13 + 0xc;
            if ((longlong *)plVar13[0xd] != (longlong *)0x0) {
              plVar20 = (longlong *)plVar13[0xd];
            }
            iVar19 = *(int *)((longlong)plVar20 +
                             (ulonglong)((int)plVar13[0xe] - 1U & *(uint *)(param_1 + 0x25)) * 4);
            if (iVar19 == -1) goto LAB_1412c3978;
            goto LAB_1412c3957;
          }
          iVar19 = *(int *)((longlong)iVar19 * 0xe0 + plVar26[5] + 0xd0);
        } while (iVar19 != -1);
      }
    }
  }
  goto LAB_1412c5255;
  while (iVar19 = *(int *)(lVar14 + plVar13[5] + 0xd0), iVar19 != -1) {
LAB_1412c3957:
    lVar14 = (longlong)iVar19 * 0xe0;
    if (*(uint *)(plVar13[5] + lVar14) == *(uint *)(param_1 + 0x25)) {
      (**(code **)(*plVar26 + 0x80))
                (plVar26,CONCAT71((int7)((ulonglong)lVar14 >> 8),(char)param_1[0x26]),&local_174,
                 &local_178);
      lVar14 = *(longlong *)(*param_1 + 0x1c8);
      if (lVar14 == 0) {
        pdVar15 = (double *)&DAT_14c8464e0;
        uVar35 = SUB84(DAT_14c8464f0,0);
        uVar36 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      }
      else {
        uVar35 = (undefined4)*(undefined8 *)(lVar14 + 0x270);
        uVar36 = (undefined4)((ulonglong)*(undefined8 *)(lVar14 + 0x270) >> 0x20);
        pdVar15 = (double *)(lVar14 + 0x260);
      }
      dVar31 = *pdVar15;
      dVar41 = pdVar15[1];
      FUN_1413618d6(param_1,&local_170);
      dVar32 = local_160;
      dVar31 = local_170 - dVar31;
      local_218 = local_168 - dVar41;
      if (*(char *)(local_220 + 0x3ed) == '\x01') {
        local_178 = (float)SQRT(dVar31 * dVar31 + local_218 * local_218);
      }
      if (((char)param_1[0x26] != '\0') && ((char)param_1[0x26] != '\x04')) {
        dVar41 = (double)local_174 + local_160;
        goto LAB_1412c48cd;
      }
      puVar24 = &DAT_14cbcb1e0;
      if ((param_1[0x23] == 0) || (plVar13 = (longlong *)param_1[0x24], plVar13 == (longlong *)0x0))
      goto LAB_1412c4870;
      if (*(code **)(*plVar13 + 0x20) == (code *)&LAB_144a7e90a) {
        plVar13 = plVar13 + 0x143;
      }
      else {
        plVar13 = (longlong *)(**(code **)(*plVar13 + 0x20))(plVar13);
      }
      if ((int)plVar13[6] == *(int *)((longlong)plVar13 + 0x5c)) goto LAB_1412c4870;
      uVar18 = *(uint *)(param_1 + 0x25);
      plVar22 = plVar13 + 0xc;
      if ((longlong *)plVar13[0xd] != (longlong *)0x0) {
        plVar22 = (longlong *)plVar13[0xd];
      }
      iVar19 = *(int *)((longlong)plVar22 + (ulonglong)((int)plVar13[0xe] - 1U & uVar18) * 4);
      if (iVar19 == -1) goto LAB_1412c4870;
      lVar14 = plVar13[5];
      iVar25 = iVar19;
      goto LAB_1412c4827;
    }
  }
LAB_1412c3978:
  fVar39 = 0.0;
  goto LAB_1412c398e;
  while (iVar25 = *(int *)((longlong)iVar25 * 0xe0 + lVar14 + 0xd0), iVar25 != -1) {
LAB_1412c4827:
    if (*(uint *)(lVar14 + (longlong)iVar25 * 0xe0) == uVar18) goto LAB_1412c4849;
  }
  goto LAB_1412c4870;
  while (iVar19 = *(int *)(lVar23 + 0xd0), iVar19 != -1) {
LAB_1412c4849:
    lVar23 = lVar14 + (longlong)iVar19 * 0xe0;
    if (*(uint *)(lVar14 + (longlong)iVar19 * 0xe0) == uVar18) goto LAB_1412c486c;
  }
  lVar23 = 0;
LAB_1412c486c:
  puVar24 = (undefined8 *)(lVar23 + 0x10);
LAB_1412c4870:
  FUN_14066734e(puVar24,&local_158);
  dVar41 = local_128;
  fVar40 = (float)(**(code **)(*plVar26 + 0x88))(plVar26);
  dVar41 = (double)fVar40 * DAT_14c8462d0 + dVar41;
LAB_1412c48cd:
  plVar22 = local_228;
  puVar24 = &DAT_14cbcb1e0;
  if ((param_1[0x23] != 0) && (plVar26 = (longlong *)param_1[0x24], plVar26 != (longlong *)0x0)) {
    if (*(code **)(*plVar26 + 0x20) == (code *)&LAB_144a7e90a) {
      plVar26 = plVar26 + 0x143;
    }
    else {
      plVar26 = (longlong *)(**(code **)(*plVar26 + 0x20))(plVar26);
    }
    if ((int)plVar26[6] != *(int *)((longlong)plVar26 + 0x5c)) {
      uVar18 = *(uint *)(param_1 + 0x25);
      plVar13 = plVar26 + 0xc;
      if ((longlong *)plVar26[0xd] != (longlong *)0x0) {
        plVar13 = (longlong *)plVar26[0xd];
      }
      iVar19 = *(int *)((longlong)plVar13 + (ulonglong)((int)plVar26[0xe] - 1U & uVar18) * 4);
      if (iVar19 != -1) {
        lVar14 = plVar26[5];
        iVar25 = iVar19;
        do {
          if (*(uint *)(lVar14 + (longlong)iVar25 * 0xe0) == uVar18) goto LAB_1412c4966;
          iVar25 = *(int *)((longlong)iVar25 * 0xe0 + lVar14 + 0xd0);
        } while (iVar25 != -1);
      }
    }
  }
LAB_1412c498c:
  lVar14 = local_220;
  dVar9 = dVar32 - (double)CONCAT44(uVar36,uVar35);
  fVar40 = (float)dVar41;
  fVar39 = (float)(double)CONCAT44(uVar36,uVar35);
  if (*(char *)(puVar24 + 0x16) == '\0') {
    lVar23 = local_220 + 0x398;
    lVar16 = FUN_1447e736e(lVar23);
    if (lVar16 == 0) {
      lVar23 = lVar14 + 0x318;
    }
    else {
      lVar23 = FUN_1447e736e(lVar23);
      lVar23 = lVar23 + 0x30;
    }
    if (lVar23 != 0) {
      dVar41 = dVar31 * dVar31 + local_218 * local_218;
      if (*(char *)(lVar14 + 0x3c0) == '\0') {
        dVar41 = dVar41 + dVar9 * dVar9;
      }
      fVar28 = (float)FUN_1448c9f94(lVar23,(float)SQRT(dVar41),0);
      fVar39 = (float)(~-(uint)(0.0 < fVar28) & (uint)fVar39 |
                      (uint)(fVar28 + fVar39) & -(uint)(0.0 < fVar28));
    }
  }
  fVar28 = fVar40;
  if (fVar40 <= fVar39) {
    fVar28 = fVar39;
  }
  if ((((plVar21 != (longlong *)0x0) && ((char)param_1[0x26] == '\x04')) &&
      (lVar14 = (**(code **)(*plVar21 + 0x680))(plVar21), lVar14 != 0)) && (fVar40 < fVar39)) {
    dVar37 = (double)(fVar39 - fVar40);
  }
  local_174 = (float)((double)fVar28 - dVar32);
  if (local_174 <= 0.0) {
    local_174 = 0.0;
    fVar40 = 0.0;
    fVar39 = local_174;
    local_178 = fVar40;
  }
  else {
    dVar41 = dVar9 * 0.0;
    fVar28 = (float)SQRT(dVar41 * dVar41 + dVar31 * dVar31 + local_218 * local_218);
    if (fVar28 <= 1e-08) {
      uVar34 = SUB84(DAT_14c8464e8,0);
      dVar32 = (double)((ulonglong)DAT_14c8464e8 & 0xffffffff00000000);
      pcVar30 = DAT_14c8464e0;
      dVar31 = DAT_14c8464f0;
    }
    else {
      dVar8 = (double)(1.0 / fVar28);
      dVar32 = local_218 * dVar8;
      uVar34 = SUB84(dVar32,0);
      pcVar30 = (code *)(dVar31 * dVar8);
      dVar31 = dVar41 * dVar8;
    }
    dVar41 = (double)(fVar40 - fVar39) / ((double)CONCAT44(uVar36,uVar35) - (double)fVar39);
    puVar24 = &DAT_14cbcb1e0;
    if ((param_1[0x23] != 0) && (plVar26 = (longlong *)param_1[0x24], plVar26 != (longlong *)0x0)) {
      if (*(code **)(*plVar26 + 0x20) == (code *)&LAB_144a7e90a) {
        plVar26 = plVar26 + 0x143;
      }
      else {
        plVar26 = (longlong *)(**(code **)(*plVar26 + 0x20))(plVar26);
      }
      if ((int)plVar26[6] != *(int *)((longlong)plVar26 + 0x5c)) {
        uVar18 = *(uint *)(param_1 + 0x25);
        plVar13 = plVar26 + 0xc;
        if ((longlong *)plVar26[0xd] != (longlong *)0x0) {
          plVar13 = (longlong *)plVar26[0xd];
        }
        iVar19 = *(int *)((longlong)plVar13 + (ulonglong)((int)plVar26[0xe] - 1U & uVar18) * 4);
        if (iVar19 != -1) {
          lVar14 = plVar26[5];
          iVar25 = iVar19;
          do {
            if (*(uint *)(lVar14 + (longlong)iVar25 * 0xe0) == uVar18) goto LAB_1412c4c0f;
            iVar25 = *(int *)((longlong)iVar25 * 0xe0 + lVar14 + 0xd0);
          } while (iVar25 != -1);
        }
      }
    }
LAB_1412c4c35:
    if (1.0 <= dVar41) {
      dVar41 = 1.0;
    }
    FUN_14066634a(puVar24,&local_158);
    fVar40 = local_174;
    dVar8 = (double)local_158 * (double)local_158 + uStack_150 * uStack_150;
    if ((dVar8 != 1.0) || (NAN(dVar8))) {
      if (9.99999993922529e-09 <= dVar8) {
        dVar38 = uStack_150 * (1.0 / SQRT(dVar8));
        pcVar33 = (code *)((double)local_158 * (1.0 / SQRT(dVar8)));
        uVar35 = 0;
        uVar36 = 0;
      }
      else {
        uVar35 = SUB84(DAT_14c8464f0,0);
        uVar36 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
        dVar38 = DAT_14c8464e8;
        pcVar33 = DAT_14c8464e0;
      }
    }
    else {
      uVar7 = -(ulonglong)((double)CONCAT44(uStack_144,local_148) == 0.0) &
              CONCAT44(uStack_144,local_148);
      uVar35 = (undefined4)uVar7;
      uVar36 = (undefined4)(uVar7 >> 0x20);
      dVar38 = uStack_150;
      pcVar33 = local_158;
    }
    if (dVar41 <= 0.0) {
      dVar41 = 0.0;
    }
    if ((((9.999999747378752e-05 < ABS((double)pcVar33)) || (9.999999747378752e-05 < ABS(dVar38)))
        || (9.999999747378752e-05 < ABS((double)CONCAT44(uVar36,uVar35)))) &&
       (fVar39 = (float)((-(double)pcVar30 * (double)pcVar33 -
                         dVar38 * (double)CONCAT44((int)((ulonglong)dVar32 >> 0x20),uVar34)) -
                        dVar31 * (double)CONCAT44(uVar36,uVar35)), 0.0 < fVar39)) {
      local_178 = local_178 / fVar39;
    }
    fVar39 = (float)(dVar9 + (double)local_174);
    if (fVar39 <= 0.0) {
      if (((param_1[0x23] != 0) && ((longlong *)param_1[0x24] != (longlong *)0x0)) &&
         (pcVar30 = *(code **)(*(longlong *)param_1[0x24] + 0x20), pcVar30 != (code *)&LAB_144a7e90a
         )) {
        (*pcVar30)();
      }
    }
    else if ((fVar39 <= 0.0001) || (ABS(local_174 - fVar39) <= 0.0001)) {
      if (0.0001 < fVar39) {
        fVar28 = fVar28 * 0.5;
      }
    }
    else {
      fVar29 = local_174 * fVar39;
      if (fVar29 < 0.0) {
        fVar29 = sqrtf(fVar29);
      }
      else {
        fVar29 = SQRT(fVar29);
      }
      fVar28 = ((fVar28 + fVar28) * (fVar40 - fVar29)) /
               ((local_174 - fVar39) + (local_174 - fVar39));
    }
    fVar40 = (float)dVar41 * (fVar28 - local_178) + local_178;
    fVar39 = local_174;
    local_178 = fVar40;
    if (fVar28 <= fVar40) {
      fVar40 = fVar28;
      local_178 = fVar28;
    }
  }
LAB_1412c398e:
  if ((((9.999999747378752e-05 < ABS((double)pcVar5)) || (9.999999747378752e-05 < ABS(dVar2))) ||
      (9.999999747378752e-05 < ABS(dVar37))) &&
     (((ABS((double)param_1[0x44]) <= 9.999999747378752e-05 &&
       (ABS((double)param_1[0x45]) <= 9.999999747378752e-05)) &&
      (ABS((double)param_1[0x46]) <= 9.999999747378752e-05)))) {
    param_1[0x44] = (longlong)pcVar5;
    param_1[0x45] = (longlong)dVar2;
    param_1[0x46] = (longlong)dVar37;
  }
  if ((fVar39 <= 0.0) || (fVar40 < 0.0)) {
    if ((*plVar22 != 0) &&
       (((longlong *)plVar22[1] != (longlong *)0x0 &&
        (pcVar5 = *(code **)(*(longlong *)plVar22[1] + 0x20), pcVar5 != (code *)&LAB_144a7e90a)))) {
      (*pcVar5)();
    }
    if (((param_1[0x23] != 0) && ((longlong *)param_1[0x24] != (longlong *)0x0)) &&
       (pcVar5 = *(code **)(*(longlong *)param_1[0x24] + 0x20), pcVar5 != (code *)&LAB_144a7e90a)) {
      (*pcVar5)();
    }
    if (((param_1[0x16] != 0) && ((longlong *)param_1[0x17] != (longlong *)0x0)) &&
       (pcVar5 = *(code **)(*(longlong *)param_1[0x17] + 0x20), pcVar5 != (code *)&LAB_144a7e90a)) {
      (*pcVar5)();
    }
  }
  lVar14 = *(longlong *)(*param_1 + 0x1c8);
  if (lVar14 == 0) {
    pdVar15 = (double *)&DAT_14c8464e0;
    uVar35 = SUB84(DAT_14c8464f0,0);
    uVar36 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  }
  else {
    uVar35 = (undefined4)*(undefined8 *)(lVar14 + 0x270);
    uVar36 = (undefined4)((ulonglong)*(undefined8 *)(lVar14 + 0x270) >> 0x20);
    pdVar15 = (double *)(lVar14 + 0x260);
  }
  dVar38 = *pdVar15;
  dVar10 = pdVar15[1];
  dVar2 = pdVar15[1];
  FUN_1413618d6(param_1,&local_170);
  dVar37 = local_160 - (double)CONCAT44(uVar36,uVar35);
  dVar31 = local_168 - dVar2;
  dVar41 = local_170 - dVar38;
  dVar32 = dVar37 * 0.0;
  fVar40 = (float)SQRT(dVar32 * dVar32 + dVar41 * dVar41 + dVar31 * dVar31);
  local_208 = local_170;
  local_210 = local_168;
  local_200 = local_160;
  dVar9 = DAT_14c8464f0;
  dVar8 = DAT_14c8464e8;
  pcVar5 = DAT_14c8464e0;
  if (1e-08 < fVar40) {
    dVar6 = (double)(1.0 / fVar40);
    dVar9 = dVar32 * dVar6;
    dVar8 = dVar31 * dVar6;
    pcVar5 = (code *)(dVar41 * dVar6);
  }
  fVar39 = fVar40 - local_178;
  dVar31 = 0.0;
  if (0.0 <= (double)local_174 + dVar37) {
    dVar31 = (double)local_174 + dVar37;
  }
  local_174 = (float)dVar31;
  local_220 = CONCAT44(local_220._4_4_,local_174);
  local_17c = *(float *)(lVar4 + 0x40);
  local_218 = dVar2;
  local_1f8 = dVar38;
  dStack_1f0 = dVar10;
  local_178 = fVar39;
  lVar14 = FUN_1447e736e(lVar4 + 0x230);
  if (lVar14 == 0) {
    lVar14 = lVar4 + 0x1b0;
  }
  else {
    lVar14 = FUN_1447e736e(lVar4 + 0x230);
    lVar14 = lVar14 + 0x30;
  }
  if ((lVar14 != 0) && (fVar28 = (float)FUN_1448c9f94(lVar14), 0.0 < fVar28)) {
    local_17c = fVar28 * local_17c;
  }
  fVar28 = (float)local_220 /
           (float)(~-(uint)(0.0001 < fVar39) & (uint)(fVar40 * fVar40) |
                  (uint)(fVar39 * fVar39) & -(uint)(0.0001 < fVar39));
  lVar14 = FUN_1447e736e(lVar4 + 0x2e8);
  if (lVar14 == 0) {
    lVar14 = lVar4 + 0x268;
  }
  else {
    lVar14 = FUN_1447e736e(lVar4 + 0x2e8);
    lVar14 = lVar14 + 0x30;
  }
  dVar2 = (double)CONCAT44(uVar36,uVar35);
  if (lVar14 != 0) {
    fVar29 = (float)FUN_144ae1bd2(plVar3);
    if (DAT_14caf84d0 == (longlong *)0x0) {
      local_240 = &local_158;
      local_158 = FUN_1449e2820;
      local_230 = FUN_14081d0ea;
      local_238 = &LAB_145a62952;
      local_248 = &LAB_147c8cd45;
      local_250 = &LAB_1461468ae;
      local_258 = L"Engine";
      local_260 = 0;
      local_268 = 0x10000006;
      local_270 = 8;
      local_278 = 0x218;
      FUN_14081cfa3(L"/Script/Engine",L"PhysicsSettings",&DAT_14caf84d0,FUN_1463f75b4);
    }
    plVar26 = DAT_14caf84d0;
    lVar23 = DAT_14caf84d0[0x22];
    if (lVar23 == 0) {
      (**(code **)(*DAT_14caf84d0 + 1000))(DAT_14caf84d0);
      lVar23 = plVar26[0x22];
    }
    if (((fVar29 < 0.0) && (*(float *)(lVar23 + 0x38) < 0.0)) &&
       (fVar29 = (float)FUN_1448c9f94(lVar14), 0.0 < fVar29)) {
      local_17c = fVar29 * local_17c;
    }
  }
  fVar28 = (fVar28 + fVar28) * fVar39;
  if ((*(char *)(lVar4 + 0x3ee) != '\x01') || (dVar2 <= local_200)) {
    local_188 = (double)fVar28 + dVar9;
    dVar37 = local_188 * local_188 +
             ((double)pcVar5 + 0.0) * ((double)pcVar5 + 0.0) + (dVar8 + 0.0) * (dVar8 + 0.0);
  }
  else {
    fVar40 = fVar40 - local_178;
    fVar29 = (float)((double)local_174 - dVar37) / (fVar40 * fVar40);
    dVar31 = (double)((fVar29 + fVar29) * fVar40) - dVar9;
    dVar37 = 0.0 - dVar8;
    pcVar30 = (code *)(0.0 - (double)pcVar5);
    dVar31 = dVar31 * dVar31 + (double)pcVar30 * (double)pcVar30 + dVar37 * dVar37;
    if (((dVar31 != 1.0) || (dVar41 = dVar37, pcVar33 = pcVar30, NAN(dVar31))) &&
       (dVar41 = DAT_14c8464e8, pcVar33 = DAT_14c8464e0, 9.99999993922529e-09 <= dVar31)) {
      dVar41 = dVar37 * (1.0 / SQRT(dVar31));
      pcVar33 = (code *)((double)pcVar30 * (1.0 / SQRT(dVar31)));
    }
    dVar41 = dVar41 * (double)local_17c;
    dVar31 = (double)pcVar33 * (double)local_17c;
    local_188 = (double)fVar28 + dVar9;
    dVar32 = dVar8 + 0.0;
    pcVar30 = (code *)((double)pcVar5 + 0.0);
    dVar37 = local_188 * local_188 + (double)pcVar30 * (double)pcVar30 + dVar32 * dVar32;
    if (((dVar37 != 1.0) || (pcVar33 = pcVar30, dVar38 = dVar32, NAN(dVar37))) &&
       (pcVar33 = DAT_14c8464e0, dVar38 = DAT_14c8464e8, 9.99999993922529e-09 <= dVar37)) {
      pcVar33 = (code *)((1.0 / SQRT(dVar37)) * (double)pcVar30);
      dVar38 = dVar32 * (1.0 / SQRT(dVar37));
    }
    local_17c = (float)SQRT(dVar31 * dVar31 + dVar41 * dVar41) *
                (float)(1.0 / SQRT((double)pcVar33 * (double)pcVar33 + dVar38 * dVar38));
  }
  dStack_190 = dVar8 + 0.0;
  local_198 = (code *)((double)pcVar5 + 0.0);
  if ((dVar37 != 1.0) || (NAN(dVar37))) {
    if (9.99999993922529e-09 <= dVar37) {
      dVar37 = 1.0 / SQRT(dVar37);
      local_188 = local_188 * dVar37;
      dStack_190 = dStack_190 * dVar37;
      local_198 = (code *)((double)local_198 * dVar37);
    }
    else {
      local_188 = DAT_14c8464f0;
      dStack_190 = DAT_14c8464e8;
      local_198 = DAT_14c8464e0;
    }
  }
  fVar40 = (float)(SQRT((double)local_198 * (double)local_198 + dStack_190 * dStack_190) *
                  (double)local_17c);
  fVar40 = (float)(-(uint)(0.0 < fVar40) & (uint)(fVar39 / fVar40));
  plVar26 = &DAT_14cbcb1e0;
  local_19c = fVar40;
  if ((param_1[0x23] != 0) && (plVar13 = (longlong *)param_1[0x24], plVar13 != (longlong *)0x0)) {
    if (*(code **)(*plVar13 + 0x20) == (code *)&LAB_144a7e90a) {
      plVar13 = plVar13 + 0x143;
    }
    else {
      plVar13 = (longlong *)(**(code **)(*plVar13 + 0x20))(plVar13);
    }
    if ((int)plVar13[6] != *(int *)((longlong)plVar13 + 0x5c)) {
      uVar18 = *(uint *)(param_1 + 0x25);
      plVar21 = plVar13 + 0xc;
      if ((longlong *)plVar13[0xd] != (longlong *)0x0) {
        plVar21 = (longlong *)plVar13[0xd];
      }
      iVar19 = *(int *)((longlong)plVar21 + (ulonglong)((int)plVar13[0xe] - 1U & uVar18) * 4);
      if (iVar19 != -1) {
        lVar14 = plVar13[5];
        iVar25 = iVar19;
        do {
          if (*(uint *)(lVar14 + (longlong)iVar25 * 0xe0) == uVar18) goto LAB_1412c410c;
          iVar25 = *(int *)((longlong)iVar25 * 0xe0 + lVar14 + 0xd0);
        } while (iVar25 != -1);
      }
    }
  }
LAB_1412c4132:
  dVar31 = (double)(float)local_220;
  dVar37 = (double)fVar39;
  plVar26 = (longlong *)*plVar26;
  if (plVar26 == (longlong *)0x0) {
LAB_1412c41eb:
    local_17c = (float)(~-(uint)(0.0 < local_19c) & 0x3f800000 |
                       (uint)(fVar40 / local_19c) & -(uint)(0.0 < local_19c)) * local_17c;
  }
  else {
    lVar14 = FUN_1411d730e();
    if ((*(int *)(plVar26[2] + 0x38) < *(int *)(lVar14 + 0x38)) ||
       (*(longlong *)(*(longlong *)(plVar26[2] + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8) !=
        lVar14 + 0x30)) goto LAB_1412c41eb;
    (**(code **)(*plVar26 + 0x668))(plVar26,&local_19c);
    local_17c = (float)(~-(uint)(0.0 < local_19c) & 0x3f800000 |
                       (uint)(fVar40 / local_19c) & -(uint)(0.0 < local_19c)) * local_17c;
    (**(code **)(*plVar26 + 0x678))(plVar26,*param_1,&local_198,&local_17c);
    plVar22 = local_228;
  }
  local_1b8 = (double)local_17c;
  local_1a8 = local_188 * local_1b8;
  local_1b0 = dStack_190 * local_1b8;
  local_1b8 = local_1b8 * (double)local_198;
  dVar38 = local_218 + dVar8 * dVar37 + 0.0;
  dVar32 = dVar37 * (double)pcVar5 + local_1f8 + 0.0;
  param_1[0x39] = (longlong)local_1f8;
  param_1[0x3a] = (longlong)dStack_1f0;
  param_1[0x3b] = (longlong)dVar2;
  param_1[0x3c] = (longlong)pcVar5;
  param_1[0x3d] = (longlong)dVar8;
  param_1[0x3e] = (longlong)dVar9;
  *(float *)(param_1 + 0x42) = local_19c;
  dVar8 = local_210 - dVar38;
  dVar41 = local_208 - dVar32;
  *(float *)((longlong)param_1 + 0x214) = local_19c;
  *(float *)(param_1 + 0x43) =
       (float)(SQRT(dVar41 * dVar41 + dVar8 * dVar8) /
              (double)(float)SQRT(local_1b8 * local_1b8 + local_1b0 * local_1b0));
  param_1[0x3f] = (longlong)dVar32;
  param_1[0x40] = (longlong)dVar38;
  param_1[0x41] = (longlong)(dVar9 * dVar37 + dVar2 + dVar31);
  dVar2 = DAT_14c8464e8;
  param_1[0x47] = (longlong)DAT_14c8464e0;
  param_1[0x48] = (longlong)dVar2;
  param_1[0x49] = (longlong)DAT_14c8464f0;
  if (local_19c <= 0.0) {
    (**(code **)(*plVar3 + 0x478))(plVar3);
  }
  *(byte *)((longlong)plVar3 + 0x5b5) = *(byte *)((longlong)plVar3 + 0x5b5) | 8;
  if (((param_1[0x23] != 0) && ((longlong *)param_1[0x24] != (longlong *)0x0)) &&
     (pcVar5 = *(code **)(*(longlong *)param_1[0x24] + 0x20), pcVar5 != (code *)&LAB_144a7e90a)) {
    (*pcVar5)();
  }
  lVar14 = *plVar22;
  if (DAT_14c950c29 == 1) {
    if (lVar14 == 0) {
      lVar14 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar14 = *plVar22;
    }
  }
  param_1[0x23] = lVar14;
  param_1[0x24] = plVar22[1];
  *(int *)(param_1 + 0x25) = (int)plVar22[2];
  lVar23 = *param_1;
  if (lVar23 != 0) {
    FUN_1409ca47e(&local_1c0);
    lVar14 = *param_1;
    if ((lVar14 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar14);
    }
    local_158 = FUN_146195bf8;
    uStack_150 = (double)((ulonglong)uStack_150._4_4_ << 0x20);
    FUN_140f24416(lVar23 + 0x578,lVar14,&local_158,local_1c0);
    lVar14 = param_1[0x23];
  }
  if ((lVar14 != 0) && (plVar26 = (longlong *)param_1[0x24], plVar26 != (longlong *)0x0)) {
    if (*(code **)(*plVar26 + 0x20) == (code *)&LAB_144a7e90a) {
      plVar26 = plVar26 + 0x143;
    }
    else {
      plVar26 = (longlong *)(**(code **)(*plVar26 + 0x20))(plVar26);
    }
    if ((int)plVar26[6] != *(int *)((longlong)plVar26 + 0x5c)) {
      uVar18 = *(uint *)(param_1 + 0x25);
      plVar13 = plVar26 + 0xc;
      if ((longlong *)plVar26[0xd] != (longlong *)0x0) {
        plVar13 = (longlong *)plVar26[0xd];
      }
      iVar19 = *(int *)((longlong)plVar13 + (ulonglong)((int)plVar26[0xe] - 1U & uVar18) * 4);
      if (iVar19 != -1) {
        do {
          if (*(uint *)(plVar26[5] + (longlong)iVar19 * 0xe0) == uVar18) {
            puVar24 = &DAT_14cbcb1e0;
            if ((param_1[0x23] == 0) ||
               (plVar26 = (longlong *)param_1[0x24], plVar26 == (longlong *)0x0))
            goto LAB_1412c45cd;
            if (*(code **)(*plVar26 + 0x20) == (code *)&LAB_144a7e90a) {
              plVar26 = plVar26 + 0x143;
            }
            else {
              plVar26 = (longlong *)(**(code **)(*plVar26 + 0x20))(plVar26);
              uVar18 = *(uint *)(param_1 + 0x25);
            }
            if ((int)plVar26[6] == *(int *)((longlong)plVar26 + 0x5c)) goto LAB_1412c45cd;
            plVar13 = plVar26 + 0xc;
            if ((longlong *)plVar26[0xd] != (longlong *)0x0) {
              plVar13 = (longlong *)plVar26[0xd];
            }
            iVar19 = *(int *)((longlong)plVar13 + (ulonglong)((int)plVar26[0xe] - 1U & uVar18) * 4);
            if (iVar19 == -1) goto LAB_1412c45cd;
            lVar14 = plVar26[5];
            iVar25 = iVar19;
            goto LAB_1412c4587;
          }
          iVar19 = *(int *)((longlong)iVar19 * 0xe0 + plVar26[5] + 0xd0);
        } while (iVar19 != -1);
      }
    }
  }
  goto LAB_1412c4ecf;
  while (iVar19 = *(int *)(lVar23 + 0xd0), iVar19 != -1) {
LAB_1412c4966:
    lVar23 = lVar14 + (longlong)iVar19 * 0xe0;
    if (*(uint *)(lVar14 + (longlong)iVar19 * 0xe0) == uVar18) goto LAB_1412c4988;
  }
  lVar23 = 0;
LAB_1412c4988:
  puVar24 = (undefined8 *)(lVar23 + 0x10);
  goto LAB_1412c498c;
  while (iVar19 = *(int *)(lVar23 + 0xd0), iVar19 != -1) {
LAB_1412c4c0f:
    lVar23 = lVar14 + (longlong)iVar19 * 0xe0;
    if (*(uint *)(lVar14 + (longlong)iVar19 * 0xe0) == uVar18) goto LAB_1412c4c31;
  }
  lVar23 = 0;
LAB_1412c4c31:
  puVar24 = (undefined8 *)(lVar23 + 0x10);
  goto LAB_1412c4c35;
  while (iVar19 = *(int *)(lVar23 + 0xd0), iVar19 != -1) {
LAB_1412c410c:
    lVar23 = lVar14 + (longlong)iVar19 * 0xe0;
    if (*(uint *)(lVar14 + (longlong)iVar19 * 0xe0) == uVar18) goto LAB_1412c412e;
  }
  lVar23 = 0;
LAB_1412c412e:
  plVar26 = (longlong *)(lVar23 + 0x10);
  goto LAB_1412c4132;
  while (iVar25 = *(int *)((longlong)iVar25 * 0xe0 + lVar14 + 0xd0), iVar25 != -1) {
LAB_1412c4587:
    if (*(uint *)(lVar14 + (longlong)iVar25 * 0xe0) == uVar18) goto LAB_1412c45a9;
  }
  goto LAB_1412c45cd;
  while (iVar19 = *(int *)(lVar23 + 0xd0), iVar19 != -1) {
LAB_1412c45a9:
    lVar23 = lVar14 + (longlong)iVar19 * 0xe0;
    if (*(uint *)(lVar14 + (longlong)iVar19 * 0xe0) == uVar18) goto LAB_1412c45c9;
  }
  lVar23 = 0;
LAB_1412c45c9:
  puVar24 = (undefined8 *)(lVar23 + 0x10);
LAB_1412c45cd:
  cVar12 = FUN_1412c3426(puVar24);
  if ((((((cVar12 != '\0') && ((longlong *)*param_1 != (longlong *)0x0)) &&
        (cVar12 = (**(code **)(*(longlong *)*param_1 + 0x700))(), cVar12 != '\0')) &&
       ((*param_1 != 0 && (*(longlong *)(&DAT_00006850 + *param_1) != 0)))) &&
      (lVar14 = *(longlong *)(*(longlong *)(&DAT_00006850 + *param_1) + 0x44c0), lVar14 != 0)) &&
     (lVar14 = FUN_1402d1dc0(lVar14 + 0x508), lVar14 != 0)) {
    FUN_148d41e52(param_1 + 0x26,&local_1d8);
    local_158 = (code *)0x0;
    uStack_150 = 0.0;
    local_148 = 0;
    uStack_144 = 0;
    uStack_140 = 0;
    uStack_13c = 0x3ff00000;
    local_138 = local_1d8;
    uStack_130 = uStack_1d0;
    local_128 = local_1c8;
    uStack_120 = 0;
    local_118 = 0x3ff0000000000000;
    uStack_110 = 0x3ff0000000000000;
    local_108 = 0x3ff0000000000000;
    uStack_100 = 0;
    if ((*param_1 == 0) || (*(longlong *)(&DAT_00006850 + *param_1) == 0)) {
      lVar14 = 0;
    }
    else {
      lVar14 = *(longlong *)(*(longlong *)(&DAT_00006850 + *param_1) + 0x44c0);
    }
    local_1e0 = FUN_1402d1dc0(lVar14 + 0x508);
    if ((local_1e0 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(local_1e0);
    }
    if (*param_1 == 0) {
      uVar17 = 0;
    }
    else {
      uVar17 = FUN_1447210f0();
    }
    FUN_148d41dd2(param_1 + 0x26,uVar17,&local_1e0,&local_158);
  }
LAB_1412c4ecf:
  FUN_146622144(plVar3);
  if ((plVar3[0x39d] == 0) || (*(byte *)(plVar3[0x39d] + 0x178) < 2)) {
    cVar12 = (char)plVar3[0x3dc] != '\0';
  }
  else {
    plVar26 = (longlong *)plVar3[0x3d7];
    if (plVar26 == (longlong *)0x0) {
LAB_1412c4f2c:
      cVar12 = '\0';
    }
    else if (*(code **)(*plVar26 + 0x40) == (code *)&LAB_1449cc0ea) {
      if (*(char *)((longlong)plVar26 + 0xb2) != '\0') goto LAB_1412c4f2c;
      if (*(char *)((longlong)plVar26 + 0x79) == '\0') {
        if ((int)plVar26[4] < 1) goto LAB_1412c4f2c;
        cVar12 = (char)plVar26[0xf];
      }
      else {
        cVar12 = '\x01';
      }
    }
    else {
      cVar12 = (**(code **)(*plVar26 + 0x40))();
    }
  }
  (**(code **)(*plVar3 + 0xde0))(plVar3);
  cVar11 = (**(code **)(plVar3[0x2f] + 0xd8))(plVar3 + 0x2f);
  if (cVar11 == '\0') {
    FUN_140d735ec(plVar3);
  }
  plVar26 = plVar3 + 0x392;
  if ((longlong *)plVar3[0x394] != (longlong *)0x0) {
    plVar26 = (longlong *)plVar3[0x394];
  }
  if ((longlong)(int)plVar3[0x395] != 0) {
    lVar14 = 0;
    do {
      if (*(longlong *)((longlong)plVar26 + lVar14) == DAT_14cbcb2e0) {
        FUN_1400bc8c2(plVar3 + 0x391,&DAT_14cbcb2e0);
        break;
      }
      lVar14 = lVar14 + 8;
    } while ((longlong)(int)plVar3[0x395] * 8 != lVar14);
  }
  (**(code **)(*plVar3 + 0x688))(plVar3,&local_1b8);
  FUN_1400bc96c(plVar3 + 0x391,&DAT_14cbcb2e0);
  FUN_148d4219e(param_1);
  if (cVar12 != '\0') {
    plVar26 = (longlong *)plVar3[0x3d7];
    plVar13 = (longlong *)plVar3[0x3d8];
    if (plVar13 == (longlong *)0x0) {
      *(undefined1 *)((longlong)plVar26 + 0xb2) = 1;
      (**(code **)(*plVar26 + 0xf8))(plVar26,1);
    }
    else {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
      *(undefined1 *)((longlong)plVar26 + 0xb2) = 1;
      (**(code **)(*plVar26 + 0xf8))(plVar26,1);
      LOCK();
      plVar26 = plVar13 + 1;
      *(int *)plVar26 = (int)*plVar26 + -1;
      UNLOCK();
      if ((int)*plVar26 == 0) {
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
  }
  fVar40 = local_19c;
  local_158 = (code *)0x0;
  uStack_150 = (double)((ulonglong)uStack_150 & 0xffffffff00000000);
  FUN_1446efa72(&local_158,0,2,0x10);
  uStack_150 = (double)CONCAT44(uStack_150._4_4_,2);
  *(undefined ***)local_158 = &PTR_LAB_14a1c8830;
  LOCK();
  UNLOCK();
  lVar23 = DAT_14c758608 + 1;
  lVar14 = DAT_14c758608 + 1;
  if (lVar23 == 0) {
    LOCK();
    UNLOCK();
    lVar23 = DAT_14c758608 + 2;
    lVar14 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar14;
  *(longlong *)(local_158 + 0x10) = lVar23;
  *(undefined ***)local_158 = &PTR_FUN_14b974cb0;
  *(longlong **)(local_158 + 0x18) = param_1;
  if ((*param_1 != 0) && (*(longlong *)(&DAT_00006850 + *param_1) != 0)) {
    FUN_14136a272(*(longlong *)(&DAT_00006850 + *param_1),param_1 + 0x56,&local_158,fVar40);
  }
  if ((int)uStack_150 == 0) {
LAB_1412c512a:
    if (local_158 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_158 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_158)(local_158,0);
    FUN_1446efa72(&local_158,0,0,0x10);
    uStack_150 = (double)((ulonglong)uStack_150 & 0xffffffff00000000);
    goto LAB_1412c512a;
  }
  if (0.0 < *(float *)(lVar4 + 0x3c4)) {
    fVar40 = *(float *)(lVar4 + 0x3c4) * local_19c;
    FUN_1400bc96c(plVar3 + 0x373,&DAT_14cbcb2d0);
    local_158 = (code *)0x0;
    uStack_150 = (double)((ulonglong)uStack_150 & 0xffffffff00000000);
    FUN_1446efa72(&local_158,0,3,0x10);
    uStack_150 = (double)CONCAT44(uStack_150._4_4_,3);
    *(undefined ***)local_158 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar14 = DAT_14c758608 + 1;
    lVar4 = DAT_14c758608 + 1;
    if (lVar14 == 0) {
      LOCK();
      UNLOCK();
      lVar14 = DAT_14c758608 + 2;
      lVar4 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar4;
    *(longlong *)(local_158 + 0x10) = lVar14;
    *(undefined ***)local_158 = &PTR_FUN_14b974d20;
    *(longlong **)(local_158 + 0x18) = param_1;
    *(longlong **)(local_158 + 0x20) = plVar3;
    if ((*param_1 != 0) && (*(longlong *)(&DAT_00006850 + *param_1) != 0)) {
      FUN_14136a272(*(longlong *)(&DAT_00006850 + *param_1),param_1 + 0x5a,&local_158,fVar40);
    }
    if ((int)uStack_150 != 0) {
      if (local_158 == (code *)0x0) goto LAB_1412c5255;
      (*(code *)**(undefined8 **)local_158)(local_158,0);
      FUN_1446efa72(&local_158,0,0,0x10);
      uStack_150 = (double)((ulonglong)uStack_150 & 0xffffffff00000000);
    }
    if (local_158 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1412c5255:
  if ((local_f0 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412c5452 FUN_1412c5452 body=368 status=ok
// SIG undefined FUN_1412c5452(void)

void FUN_1412c5452(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined ***pppuVar4;
  undefined1 auStack_a8 [32];
  undefined **local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined2 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = &PTR_FUN_14b023b08;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0x3b9cbb9e;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_88);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_88);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_88 = *(undefined ***)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_88);
    }
  }
  pppuVar4 = *(undefined ****)(param_2 + 0x38);
  if (*(undefined ****)(param_2 + 0x38) == (undefined ***)0x0) {
    pppuVar4 = &local_88;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1412c55c4(param_1,pppuVar4);
  FUN_140485912(&local_88);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412c55c4 FUN_1412c55c4 body=236 status=ok
// SIG undefined FUN_1412c55c4(void)

void FUN_1412c55c4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  iVar3 = *(int *)(param_1 + 0x9a10);
  *(uint *)(param_1 + 0x9a10) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x9a14) < iVar3 + 1U) {
    FUN_14111da36((longlong *)(param_1 + 0x9a08),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x9a08);
  lVar1 = lVar4 + (longlong)iVar3 * 0x68;
  puVar2 = (undefined8 *)(lVar4 + (longlong)iVar3 * 0x68);
  *puVar2 = &PTR_FUN_14b023b08;
  puVar2[1] = *(undefined8 *)(param_2 + 8);
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_2 + 0x10);
  puVar2[3] = 0;
  *(undefined2 *)(puVar2 + 4) = *(undefined2 *)(param_2 + 0x20);
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  FUN_1401f3db8(puVar2 + 5,param_2 + 0x28);
  puVar2[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined4 *)(puVar2 + 9) = *(undefined4 *)(param_2 + 0x48);
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  iVar3 = *(int *)(param_2 + 0x60);
  uVar5 = *(undefined8 *)(param_2 + 0x58);
  *(int *)(puVar2 + 0xc) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)(lVar1 + 100) = 0;
    return;
  }
  FUN_140e8ac72(lVar1 + 0x58,iVar3,0);
  FUN_140e8ab75(*(undefined8 *)(lVar1 + 0x58),uVar5,iVar3);
  return;
}



// FUNCTION 1412c56b0 FUN_1412c56b0 body=277 status=ok
// SIG undefined FUN_1412c56b0(void)

undefined8 FUN_1412c56b0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1412c57bf;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1412c57bf;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1412c57bf:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1412c576d;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28));
      uVar6 = 1;
      goto LAB_1412c576d;
    }
  }
  uVar6 = 0;
LAB_1412c576d:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412c57c6 FUN_1412c57c6 body=733 status=ok
// SIG undefined FUN_1412c57c6(void)

void FUN_1412c57c6(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
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
  code *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar5 = (longlong *)FUN_1400f3ad8(param_1 + 0x44);
  if (plVar5 != (longlong *)0x0) {
    if (DAT_14cbadd90 == 0) {
      local_50 = &local_38;
      local_38 = FUN_141030f22;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_1459f2e4c;
      local_58 = &LAB_148c39de3;
      local_60 = &LAB_1457a9eb2;
      local_68 = &DAT_149e063b2;
      local_70 = 0;
      local_78 = 0x10000004;
      local_80 = 0x10;
      local_88 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(plVar5[2] + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(plVar5[2] + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
         DAT_14cbadd90 + 0x30)) && (lVar6 = (**(code **)(*plVar5 + 0x5e0))(plVar5), lVar6 != 0)) {
      if (DAT_14cba8288 == 0) {
        local_50 = &local_38;
        local_38 = FUN_141864c34;
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
      if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30))
      goto LAB_1412c5827;
    }
  }
  lVar6 = 0;
LAB_1412c5827:
  puVar1 = (uint *)(param_1 + 0x58);
  cVar3 = FUN_140e8a950(puVar1,lVar6);
  if (cVar3 == '\0') {
    if (lVar6 == 0) {
      *puVar1 = 0;
      iVar4 = 0;
    }
    else {
      uVar2 = *(uint *)(lVar6 + 0xc);
      *puVar1 = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      iVar4 = *(int *)(lVar6 + 0x10);
      if (*(int *)(lVar6 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        iVar7 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar7);
        }
        LOCK();
        iVar4 = *(int *)(lVar6 + 0x10);
        bVar8 = iVar4 == 0;
        if (bVar8) {
          *(int *)(lVar6 + 0x10) = iVar7;
          iVar4 = 0;
        }
        UNLOCK();
        if (bVar8) {
          iVar4 = iVar7;
        }
      }
    }
    *(int *)(param_1 + 0x5c) = iVar4;
    local_38 = (code *)0x0;
    uStack_30 = 0;
    local_28 = 0;
    FUN_144253548(param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412c5aa4 FUN_1412c5aa4 body=40 status=ok
// SIG undefined FUN_1412c5aa4(void)

void FUN_1412c5aa4(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148e21ec6(param_1);
    param_1 = param_1 + 0x80;
  }
  return;
}



// FUNCTION 1412c5acc FUN_1412c5acc body=370 status=ok
// SIG undefined FUN_1412c5acc(void)

undefined8 * FUN_1412c5acc(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1412c5c68 FUN_1412c5c68 body=339 status=ok
// SIG undefined FUN_1412c5c68(void)

void FUN_1412c5c68(longlong param_1)

{
  longlong lVar1;
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
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = FUN_1400f3ad8(param_1 + 0x44);
  if (lVar1 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1459f2e4c;
      local_48 = &LAB_148c39de3;
      local_50 = &LAB_1457a9eb2;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
        (*(int *)(lVar1 + 0xd98) != 0)) && (*(longlong *)(lVar1 + 0xda0) != 0)) {
      *(undefined1 *)(param_1 + 0xb4) = 0;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412c5dd0 FUN_1412c5dd0 body=228 status=ok
// SIG undefined FUN_1412c5dd0(void)

longlong FUN_1412c5dd0(void)

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
  if (DAT_14cb6e370 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148797e21;
    local_40 = FUN_14653a99e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"PerchProvider",&DAT_14cb6e370,&DAT_148797e20);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6e370;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412c5eb6 caseD_1f body=5 status=ok
// SIG undefined caseD_1f(void)

void switchD_143c3d4dc::caseD_1f(void)

{
  caseD_1f();
  return;
}



// FUNCTION 1412c5ebc FUN_1412c5ebc body=265 status=ok
// SIG undefined FUN_1412c5ebc(void)

undefined8 * FUN_1412c5ebc(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = &PTR_FUN_14b4c3b20;
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 2) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 0x28);
  _Src = *(void **)(param_2 + 0x20);
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],_Src,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_1412c5fc6(param_1 + 7,param_2 + 0x38);
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  FUN_1412c6060(param_1 + 0x11,param_2 + 0x88);
  return param_1;
}



// FUNCTION 1412c5fc6 FUN_1412c5fc6 body=154 status=ok
// SIG undefined FUN_1412c5fc6(void)

longlong FUN_1412c5fc6(longlong param_1,longlong param_2)

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
    if (iVar2 == 0) goto LAB_1412c601b;
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
LAB_1412c601b:
  *(int *)(param_1 + 0x48) = iVar2;
  FUN_1412c6240(param_1,param_2);
  return param_1;
}



// FUNCTION 1412c6060 FUN_1412c6060 body=154 status=ok
// SIG undefined FUN_1412c6060(void)

longlong FUN_1412c6060(longlong param_1,longlong param_2)

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
    if (iVar2 == 0) goto LAB_1412c608c;
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
LAB_1412c608c:
  *(int *)(param_1 + 0x48) = iVar2;
  FUN_1412c60fa(param_1,param_2);
  return param_1;
}



// FUNCTION 1412c60fa FUN_1412c60fa body=325 status=ok
// SIG undefined FUN_1412c60fa(void)

undefined8 * FUN_1412c60fa(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 *_Dst;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14124f164(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1406a7630(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar3 = *(int *)(param_2 + 5) + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar5 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar5;
      FUN_1446efbd8(param_1 + 2,0);
    }
    iVar2 = *(int *)(param_2 + 5);
    *(int *)(param_1 + 5) = iVar2;
    if (iVar2 != 0) {
      puVar4 = (undefined8 *)param_2[4];
      if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
        puVar4 = param_2 + 2;
      }
      _Dst = param_1 + 2;
      if ((undefined8 *)param_1[4] != (undefined8 *)0x0) {
        _Dst = (undefined8 *)param_1[4];
      }
      memcpy(_Dst,puVar4,(ulonglong)(iVar2 + 0x1fU >> 3 & 0xfffffffc));
    }
    if (0 < (int)uVar1) {
      puVar7 = (undefined4 *)*param_1;
      puVar8 = (undefined4 *)*param_2;
      uVar6 = 0;
      do {
        puVar4 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar4 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar4 + (uVar6 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar6 & 0x1f) & 1)
            == 0) {
          *puVar7 = *puVar8;
          puVar7[1] = puVar8[1];
        }
        else {
          FUN_148a400d4(puVar7,puVar8);
          *(undefined8 *)(puVar7 + 0x18) = *(undefined8 *)(puVar8 + 0x18);
        }
        uVar6 = uVar6 + 1;
        puVar8 = puVar8 + 0x1a;
        puVar7 = puVar7 + 0x1a;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 1412c6240 FUN_1412c6240 body=403 status=ok
// SIG undefined FUN_1412c6240(void)

longlong * FUN_1412c6240(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong *_Dst;
  longlong lVar9;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14124f2dc(param_1,(ulonglong)uVar1);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
      FUN_1447030e2(param_1);
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
          FUN_140c3a11c(lVar9 + lVar4 + 8,lVar3 + 8 + lVar9);
          *(undefined8 *)(lVar4 + 0x28 + lVar9) = *(undefined8 *)(lVar3 + 0x28 + lVar9);
          *(undefined8 *)(lVar4 + 0x30 + lVar9) = *(undefined8 *)(lVar3 + 0x30 + lVar9);
        }
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 0x38;
      } while (uVar1 != uVar8);
    }
  }
  return param_1;
}



// FUNCTION 1412c63d4 FUN_1412c63d4 body=832 status=ok
// SIG undefined FUN_1412c63d4(void)

undefined4 FUN_1412c63d4(longlong param_1,undefined1 param_2,longlong param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  undefined4 uVar14;
  bool bVar15;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar7 = param_4[1];
  lVar4 = *param_4;
  local_50 = DAT_14cbc9b20;
  lVar9 = FUN_14063edce(&DAT_14cb91658);
  if (lVar9 == 0) {
    uVar14 = 0;
  }
  else {
    lVar12 = 0;
    uVar14 = (int)lVar7;
    if (lVar4 == 0) {
      uVar14 = 0;
    }
    puVar10 = (undefined8 *)FUN_14001cc68(0x38,0x10);
    iVar8 = DAT_14c762760 + 1;
    *(int *)(puVar10 + 1) = DAT_14c762760;
    DAT_14c762760 = iVar8;
    *puVar10 = &PTR_LAB_14acd0ae0;
    *(undefined4 *)((longlong)puVar10 + 0x14) = 0;
    uVar3 = *(uint *)(lVar9 + 0xc);
    *(uint *)(puVar10 + 2) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    iVar8 = *(int *)(lVar12 + 0x10);
    if (*(int *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar13 = DAT_14c964868 + 1;
      bVar15 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar15) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar13);
      }
      LOCK();
      iVar8 = *(int *)(lVar12 + 0x10);
      bVar15 = iVar8 == 0;
      if (bVar15) {
        *(int *)(lVar12 + 0x10) = iVar13;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar15) {
        iVar8 = iVar13;
      }
    }
    *(int *)((longlong)puVar10 + 0x14) = iVar8;
    *(undefined1 *)(puVar10 + 3) = param_2;
    *puVar10 = &PTR_FUN_14b47b110;
    puVar10[4] = 0;
    puVar10[5] = 0;
    *(undefined1 *)(puVar10 + 6) = 0;
    plVar11 = (longlong *)FUN_14063f168(puVar10 + 4);
    if ((int)plVar11[1] != 4) {
      FUN_1446efa72(plVar11,0,4,0x10);
      *(undefined4 *)(plVar11 + 1) = 4;
    }
    puVar5 = (undefined8 *)*plVar11;
    plVar11 = *(longlong **)(param_3 + 0x10);
    if (plVar11 == (longlong *)0x0) {
LAB_1412c6612:
      *puVar5 = &PTR_LAB_14b47b160;
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
      puVar5[2] = lVar9;
      *puVar5 = &PTR_FUN_14b9c0b40;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[5] = lVar4;
      *(undefined4 *)(puVar5 + 6) = uVar14;
    }
    else {
      iVar8 = (int)plVar11[1];
      do {
        if (iVar8 == 0) goto LAB_1412c6612;
        LOCK();
        iVar13 = (int)plVar11[1];
        bVar15 = iVar8 == iVar13;
        if (bVar15) {
          *(int *)(plVar11 + 1) = iVar8 + 1;
          iVar13 = iVar8;
        }
        iVar8 = iVar13;
        UNLOCK();
      } while (!bVar15);
      uVar6 = *(undefined8 *)(param_3 + 8);
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      *puVar5 = &PTR_LAB_14b47b160;
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
      puVar5[2] = lVar9;
      *puVar5 = &PTR_FUN_14b9c0b40;
      puVar5[3] = uVar6;
      puVar5[4] = plVar11;
      LOCK();
      *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
      UNLOCK();
      *(undefined4 *)(puVar5 + 6) = uVar14;
      puVar5[5] = lVar4;
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
    iVar8 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar8 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar8 + 1U) {
      FUN_141053524((longlong *)(param_1 + 0x198),iVar8);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar8 * 8) = puVar10;
    uVar14 = *(undefined4 *)(puVar10 + 1);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14;
}



// FUNCTION 1412c6716 FUN_1412c6716 body=714 status=ok
// SIG undefined FUN_1412c6716(void)

void FUN_1412c6716(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = param_5;
  FUN_1412c69e2(param_1,param_2);
  lVar2 = *(longlong *)(param_3 + 0x11e8);
  bVar4 = *(byte *)(param_2 + 0x448);
  if ((((char)bVar4 < '\0') && (*(char *)(lVar2 + 0x2fc8) == '\x01')) &&
     (0.0 <= *(float *)(param_2 + 0x4f0))) {
    *(float *)(lVar2 + 0x2fcc) = *(float *)(param_2 + 0x4f0);
    bVar4 = *(byte *)(param_2 + 0x448);
  }
  if ((bVar4 & 1) != 0) {
    if (*(longlong *)(lVar2 + 0x3170) == 0) {
      lVar9 = lVar2 + 0x3210;
      if ((lVar9 != 0 & *(byte *)(lVar2 + 0x34b0)) != 1) goto LAB_1412c6769;
    }
    else {
      lVar9 = *(longlong *)(lVar2 + 0x3170) + 0xd8;
    }
    lVar6 = FUN_140153468(lVar9);
    if (((lVar6 != 0) && ((*(byte *)(lVar9 + 0x298) & 2) == 0)) &&
       ((*(longlong *)(lVar2 + 0x110) != 0 && (0.0 <= *(float *)(param_2 + 0x4e8))))) {
      if (*(longlong *)(lVar2 + 0x3170) == 0) {
        lVar9 = lVar2 + 0x3210;
        if ((lVar9 != 0 & *(byte *)(lVar2 + 0x34b0)) != 1) goto LAB_1412c6769;
      }
      else {
        lVar9 = *(longlong *)(lVar2 + 0x3170) + 0xd8;
      }
      *(float *)(lVar9 + 0x88) = *(float *)(param_2 + 0x4e8);
    }
  }
LAB_1412c6769:
  if ((((*(byte *)(param_2 + 0x448) & 0x20) != 0) && ((*(byte *)(lVar2 + 0x1f18) & 1) != 0)) &&
     (0.0 <= *(float *)(param_2 + 0x4ec))) {
    *(float *)(lVar2 + 0x1f48) = *(float *)(param_2 + 0x4ec);
  }
  if (((*(byte *)(param_2 + 0x449) & 8) != 0) && (*(char *)(lVar2 + 0x2ca8) == '\x01')) {
    *(undefined4 *)(lVar2 + 0x2cac) = *(undefined4 *)(param_2 + 0x44c);
  }
  lVar2 = *(longlong *)(lVar2 + 0x41e0);
  uVar3 = local_68;
  if (lVar2 != 0) {
    plVar1 = (longlong *)(param_2 + 0x4f8);
    lVar9 = param_2 + 0x508;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    iVar8 = 0;
    local_50 = lVar9;
    if (*(int *)(param_2 + 0x520) != 0) {
      FUN_1449c0562(&local_58);
      iVar8 = *(int *)(param_2 + 0x520);
    }
    local_68 = local_48;
    uVar3 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_78 = local_58;
    local_70 = local_50;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = plVar1;
    if ((local_68._4_4_ != iVar8) || (local_50 != lVar9)) {
      iVar5 = local_68._4_4_;
      local_68 = uVar3;
      do {
        lVar7 = (longlong)iVar5 * 0x18 + *local_80;
        lVar6 = FUN_1412c2f92(lVar2,lVar7);
        if (lVar6 != 0) {
          *(undefined4 *)(lVar6 + 4) = *(undefined4 *)(lVar7 + 8);
        }
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar5 = local_68._4_4_;
      } while (((local_68._4_4_ != iVar8) || (local_70 != lVar9)) ||
              (uVar3 = local_68, local_80 != plVar1));
    }
  }
  local_68 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412c69e2 FUN_1412c69e2 body=644 status=ok
// SIG undefined FUN_1412c69e2(void)

void FUN_1412c69e2(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  uint uVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  byte local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar2 = *(longlong **)(param_3 + 0x430);
  if (((((*(int *)(param_1 + 0x204) == 0) || (uVar1 = *(uint *)(param_1 + 0x200), (int)uVar1 < 0))
       || (DAT_14c9647dc <= (int)uVar1)) ||
      ((plVar7 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar7 == (longlong *)0x0 || ((int)plVar7[2] != *(int *)(param_1 + 0x204))))) ||
     ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)) {
    lVar6 = plVar2[0x22];
    if ((*(byte *)((longlong)plVar2 + 0x5b4) & 0x20) == 0) goto LAB_1412c6a8e;
LAB_1412c6bf4:
    local_b0 = 1;
LAB_1412c6a9a:
    local_78 = *(undefined8 *)(param_2 + 0x198);
    local_88 = *(undefined8 *)(param_2 + 0x188);
    uStack_80 = *(undefined8 *)(param_2 + 400);
    local_a8 = *param_5;
    uStack_a4 = param_5[1];
    uStack_a0 = param_5[2];
    uStack_9c = param_5[3];
    local_98 = *(undefined8 *)(param_5 + 4);
    local_b8 = 0;
    FUN_14084af84(lVar6,&local_a8,&local_88,0);
  }
  else {
    lVar6 = plVar2[0x22];
    if (*plVar7 == 0) {
      if ((*(byte *)((longlong)plVar2 + 0x5b4) & 0x20) != 0) goto LAB_1412c6bf4;
LAB_1412c6a8e:
      local_b0 = *(byte *)((longlong)plVar2 + 0x34a) >> 2 & 1;
      goto LAB_1412c6a9a;
    }
    local_b0 = 1;
    if ((*(byte *)((longlong)plVar2 + 0x5b4) & 0x20) == 0) {
      local_b0 = *(byte *)((longlong)plVar2 + 0x34a) >> 2 & 1;
    }
    local_38 = *(undefined8 *)(param_1 + 0x238);
    local_48 = *(undefined8 *)(param_1 + 0x228);
    uStack_40 = *(undefined8 *)(param_1 + 0x230);
    local_68 = *(undefined4 *)(param_1 + 0x210);
    uStack_64 = *(undefined4 *)(param_1 + 0x214);
    uStack_60 = *(undefined4 *)(param_1 + 0x218);
    uStack_5c = *(undefined4 *)(param_1 + 0x21c);
    local_58 = *(undefined8 *)(param_1 + 0x220);
    local_b8 = 0;
    FUN_1401ca0e6(lVar6,&local_68,&local_48,0);
  }
  plVar2[0x27] = *(longlong *)(param_2 + 0x70);
  uVar3 = *(undefined4 *)(param_2 + 100);
  uVar4 = *(undefined4 *)(param_2 + 0x68);
  uVar5 = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(plVar2 + 0x25) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)((longlong)plVar2 + 300) = uVar3;
  *(undefined4 *)(plVar2 + 0x26) = uVar4;
  *(undefined4 *)((longlong)plVar2 + 0x134) = uVar5;
  if (*(int *)(param_2 + 0x1ec) != 0) {
    uVar1 = *(uint *)(param_2 + 0x1e8);
    uVar8 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1412c6b5e;
    puVar9 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar9 != (undefined8 *)0x0) &&
       ((*(int *)(puVar9 + 2) == *(int *)(param_2 + 0x1ec) &&
        ((*(uint *)(puVar9 + 1) & 0x10200000) == 0)))) {
      uVar8 = *puVar9;
      goto LAB_1412c6b5e;
    }
  }
  uVar8 = 0;
LAB_1412c6b5e:
  (**(code **)(*plVar2 + 0x730))(plVar2,uVar8,*(undefined8 *)(param_2 + 0x1f0),1);
  memcpy(plVar2 + 0x93,(void *)(param_2 + 0x78),0x110);
  *(float *)(param_1 + 0x18) = *(float *)(param_2 + 0x18) + *(float *)(param_1 + 0x18);
  *(undefined4 *)(param_3 + 0x558) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_3 + 0x554) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_3 + 0x56c) = *(undefined4 *)(param_2 + 0x2c);
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412c6c68 FUN_1412c6c68 body=37 status=ok
// SIG undefined FUN_1412c6c68(void)

void FUN_1412c6c68(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x17e0);
  FUN_1412c6c8e(param_2);
  return;
}



// FUNCTION 1412c6c8e FUN_1412c6c8e body=2075 status=ok
// SIG undefined FUN_1412c6c8e(void)

undefined8 * FUN_1412c6c8e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14ab51200;
  param_1[3] = 0x4461000000000000;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined2 *)((longlong)param_1 + 0x24) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x26) = 1;
  local_48 = (longlong *)FUN_14001cc68(0x98,0x10);
  local_48[1] = (longlong)&DAT_100000001;
  *local_48 = (longlong)&PTR_FUN_14a1b6cc0;
  local_50 = local_48 + 2;
  local_48[2] = (longlong)&PTR_FUN_14a18e458;
  local_48[3] = 0;
  local_48[4] = 0;
  local_48[5] = 0;
  local_48[6] = 0;
  local_48[7] = 0;
  local_48[8] = 0;
  local_48[9] = 0;
  local_48[10] = 0;
  local_48[0xb] = 0;
  local_48[0xc] = 0;
  local_48[0xd] = 0;
  local_48[0xe] = 0;
  local_48[0xf] = 0;
  local_48[0x10] = 0;
  local_48[0x11] = 0;
  local_48[0x12] = 0;
  FUN_1404e24cc(&local_50);
  FUN_1404e256a(param_1 + 5,&local_50);
  plVar4 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfc;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0x466a6000;
  *(undefined4 *)((longlong)param_1 + 0x4b) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *param_1 = &PTR_FUN_14b8e2ba0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((longlong)param_1 + 0x99) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa1) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0x44bb8000;
  param_1[0x24] = 0x3ff0000000000000;
  param_1[0x25] = 0x3ff0000000000000;
  param_1[0x26] = 0x3ff0000000000000;
  *(undefined1 *)(param_1 + 0x27) = 0;
  uVar3 = DAT_14c8464e8;
  param_1[0x28] = DAT_14c8464e0;
  param_1[0x29] = uVar3;
  param_1[0x2a] = DAT_14c8464f0;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0x43c80000;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0xaaad1010;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x30) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0x3e800000;
  *(undefined1 *)(param_1 + 0x31) = 1;
  FUN_1412c76f4(param_1 + 0x32);
  *(undefined4 *)(param_1 + 0x1c2) = 0;
  *(undefined2 *)((longlong)param_1 + 0xe14) = 0;
  param_1[0x1c3] = 0;
  param_1[0x1c4] = 0;
  *(undefined1 *)(param_1 + 0x1c5) = 1;
  param_1[0x1c6] = 0;
  *(undefined4 *)((longlong)param_1 + 0xe29) = 0;
  *(undefined4 *)(param_1 + 0x1c7) = 0x3005;
  param_1[0x1c8] = 0;
  param_1[0x1c9] = &DAT_3f8000003f800000;
  param_1[0x1ca] = &PTR_FUN_14b00bdf8;
  param_1[0x1d0] = 0;
  *(undefined4 *)(param_1 + 0x1d1) = 0;
  param_1[0x1cc] = 0;
  param_1[0x1cd] = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xe94) = 0;
  param_1[0x1d4] = 0;
  *(undefined4 *)(param_1 + 0x1d5) = 0;
  param_1[0x1d6] = 0;
  param_1[0x1d7] = 0;
  *(undefined4 *)(param_1 + 0x1d8) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0xec4) = 0x404;
  param_1[0x1cb] = &DAT_14a176f00;
  param_1[0x1df] = 0;
  param_1[0x1e0] = 0;
  param_1[0x1dd] = 0;
  param_1[0x1de] = 0;
  param_1[0x1db] = 0;
  param_1[0x1dc] = 0;
  param_1[0x1d9] = 0;
  param_1[0x1da] = 0;
  param_1[0x1e1] = &DAT_3f8000003f800000;
  param_1[0x1e2] = 0;
  param_1[0x1e3] = &DAT_3f8000003f800000;
  param_1[0x1e4] = 0;
  param_1[0x1e5] = &DAT_3f8000003f800000;
  param_1[0x1e6] = 0;
  param_1[0x1e7] = 0;
  param_1[0x1e8] = 0;
  param_1[0x1e9] = 0;
  *(undefined1 *)(param_1 + 0x1ea) = 1;
  *(undefined8 *)((longlong)param_1 + 0xf54) = 0x4120000041f00000;
  *(undefined1 *)(param_1 + 0x1ee) = 0;
  param_1[0x1ec] = 0;
  param_1[0x1ed] = 0;
  param_1[0x1f1] = DAT_14c846520;
  uVar3 = DAT_14c846518;
  param_1[0x1ef] = DAT_14c846510;
  param_1[0x1f0] = uVar3;
  param_1[0x1f2] = 0;
  param_1[499] = 0x3f6666663f000000;
  param_1[500] = &DAT_3f8000003f800000;
  param_1[0x1f5] = &DAT_3f8000003f800000;
  param_1[0x1f6] = &PTR_FUN_14b00bdf8;
  param_1[0x1fc] = 0;
  *(undefined4 *)(param_1 + 0x1fd) = 0;
  param_1[0x1f8] = 0;
  param_1[0x1f9] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xff4) = 0;
  param_1[0x200] = 0;
  *(undefined4 *)(param_1 + 0x201) = 0;
  param_1[0x202] = 0;
  param_1[0x203] = 0;
  *(undefined4 *)(param_1 + 0x204) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x1024) = 0x404;
  param_1[0x1f7] = &DAT_14a176f00;
  param_1[0x20b] = 0;
  param_1[0x209] = 0;
  param_1[0x20a] = 0;
  param_1[0x207] = 0;
  param_1[0x208] = 0;
  param_1[0x205] = 0;
  param_1[0x206] = 0;
  param_1[0x20c] = 0x3f80000042480000;
  param_1[0x20d] = 0x3f80000042480000;
  memset(param_1 + 0x20e,0,0xa0);
  *(undefined4 *)(param_1 + 0x222) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x1114) = 0;
  *(undefined4 *)(param_1 + 0x223) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x111c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x224) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1124) = 0x40c00000;
  *(undefined4 *)(param_1 + 0x225) = 0x40400000;
  param_1[0x22a] = 0;
  *(undefined4 *)(param_1 + 0x22b) = 0;
  param_1[0x226] = 0;
  param_1[0x227] = 0;
  *(undefined8 *)((longlong)param_1 + 0x115c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1164) = 0;
  param_1[0x22e] = 0;
  *(undefined4 *)(param_1 + 0x22f) = 0;
  *(undefined4 *)(param_1 + 0x230) = 0x43fa0000;
  param_1[0x231] = 0;
  *(undefined4 *)(param_1 + 0x232) = 0x4fc71eb4;
  param_1[0x233] = 0;
  param_1[0x234] = 0;
  *(undefined4 *)(param_1 + 0x235) = 0x4fc71eb4;
  param_1[0x236] = 0;
  param_1[0x237] = 0;
  *(undefined4 *)(param_1 + 0x238) = 0x7012;
  param_1[0x239] = 0;
  param_1[0x23a] = 0;
  *(undefined4 *)(param_1 + 0x23b) = 0x7012;
  param_1[0x23e] = 0;
  param_1[0x23c] = 0;
  param_1[0x23d] = 0;
  FUN_1412c74aa(param_1 + 0x23f);
  param_1[0x244] = 0x42c800003e4ccccd;
  param_1[0x245] = 0x4170000042c80000;
  param_1[0x246] = 0;
  *(undefined4 *)(param_1 + 0x247) = 10;
  param_1[0x248] = 0;
  param_1[0x249] = 0;
  *(undefined8 *)((longlong)param_1 + 0x124c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1254) = 0;
  param_1[0x24c] = 0;
  param_1[0x24d] = 0;
  *(undefined1 *)(param_1 + 0x24e) = 0;
  param_1[600] = 0;
  *(undefined4 *)(param_1 + 0x259) = 0;
  param_1[0x24f] = 0;
  param_1[0x250] = 0;
  param_1[0x251] = 0;
  param_1[0x252] = 0;
  param_1[0x253] = 0;
  param_1[0x254] = 0;
  param_1[0x255] = 0;
  *(undefined8 *)((longlong)param_1 + 0x12cc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x12d4) = 0;
  param_1[0x25c] = 0;
  *(undefined4 *)(param_1 + 0x25d) = 0;
  param_1[0x260] = 0;
  param_1[0x261] = 0;
  param_1[0x25e] = 0;
  param_1[0x25f] = 0;
  *(undefined4 *)(param_1 + 0x262) = 0xf00000d0;
  *(undefined8 *)((longlong)param_1 + 0x134c) = 0;
  *(undefined1 *)(param_1 + 0x269) = 0;
  param_1[0x267] = 0;
  param_1[0x268] = 0;
  param_1[0x265] = 0;
  param_1[0x266] = 0;
  param_1[0x263] = 0;
  param_1[0x264] = 0;
  memset(param_1 + 0x26b,0,200);
  *(undefined4 *)(param_1 + 0x284) = 0x41000000;
  *(undefined1 *)(param_1 + 0x285) = 0;
  *(undefined8 *)((longlong)param_1 + 0x142c) = 0;
  param_1[0x287] = 0;
  param_1[0x288] = 0;
  param_1[0x289] = 0;
  param_1[0x28a] = 0;
  param_1[0x28b] = 0x3f8000003c23d70a;
  *(undefined1 *)(param_1 + 0x28c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1464) = 0;
  param_1[0x28e] = 0;
  param_1[0x28f] = 0;
  param_1[0x290] = 0;
  param_1[0x291] = 0;
  param_1[0x292] = 0x3f8000003f000000;
  *(undefined1 *)(param_1 + 0x293) = 0;
  *(undefined8 *)((longlong)param_1 + 0x149c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x152c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x155c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1604) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1634) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1664) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1694) = 0;
  *(undefined1 *)(param_1 + 0x299) = 0;
  param_1[0x297] = 0;
  param_1[0x298] = 0;
  param_1[0x295] = 0;
  param_1[0x296] = 0;
  *(undefined1 *)(param_1 + 0x29f) = 0;
  param_1[0x29d] = 0;
  param_1[0x29e] = 0;
  param_1[0x29b] = 0;
  param_1[0x29c] = 0;
  *(undefined1 *)(param_1 + 0x2a5) = 0;
  param_1[0x2a3] = 0;
  param_1[0x2a4] = 0;
  param_1[0x2a1] = 0;
  param_1[0x2a2] = 0;
  *(undefined1 *)(param_1 + 0x2ab) = 0;
  param_1[0x2a9] = 0;
  param_1[0x2aa] = 0;
  param_1[0x2a7] = 0;
  param_1[0x2a8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1591) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1599) = 0;
  param_1[0x2b1] = 0;
  param_1[0x2b2] = 0;
  param_1[0x2af] = 0;
  param_1[0x2b0] = 0;
  param_1[0x2ad] = 0;
  param_1[0x2ae] = 0;
  param_1[0x2b6] = 0;
  param_1[0x2b7] = 0;
  param_1[0x2b8] = 0;
  param_1[0x2b9] = 0;
  *(undefined1 *)(param_1 + 0x2ba) = 0;
  *(undefined1 *)(param_1 + 0x2c0) = 0;
  param_1[0x2be] = 0;
  param_1[0x2bf] = 0;
  param_1[700] = 0;
  param_1[0x2bd] = 0;
  *(undefined1 *)(param_1 + 0x2c6) = 0;
  param_1[0x2c4] = 0;
  param_1[0x2c5] = 0;
  param_1[0x2c2] = 0;
  param_1[0x2c3] = 0;
  *(undefined1 *)(param_1 + 0x2cc) = 0;
  param_1[0x2ca] = 0;
  param_1[0x2cb] = 0;
  param_1[0x2c8] = 0;
  param_1[0x2c9] = 0;
  *(undefined1 *)(param_1 + 0x2d2) = 0;
  param_1[0x2d0] = 0;
  param_1[0x2d1] = 0;
  param_1[0x2ce] = 0;
  param_1[0x2cf] = 0;
  param_1[0x2dc] = 0;
  param_1[0x2da] = 0;
  param_1[0x2db] = 0;
  param_1[0x2d8] = 0;
  param_1[0x2d9] = 0;
  param_1[0x2d6] = 0;
  param_1[0x2d7] = 0;
  param_1[0x2d4] = 0;
  param_1[0x2d5] = 0;
  param_1[0x2dd] = 0x42c800003dcccccd;
  param_1[0x2de] = &DAT_3f8000003f800000;
  param_1[0x2df] = 0x43c800003f800000;
  param_1[0x2e0] = 0x3ecccccd00000000;
  *(undefined4 *)(param_1 + 0x2e1) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x170c) = 0x41200000;
  *(undefined4 *)(param_1 + 0x2e2) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x1714) = 0x41700000;
  param_1[0x2e3] = 0x3e19999a42c80000;
  param_1[0x2e4] = 0x10;
  *(undefined2 *)(param_1 + 0x2e5) = 1;
  *(undefined1 *)((longlong)param_1 + 0x172a) = 0;
  param_1[0x2ec] = 0;
  param_1[0x2ed] = 0;
  param_1[0x2ea] = 0;
  param_1[0x2eb] = 0;
  param_1[0x2e8] = 0;
  param_1[0x2e9] = 0;
  param_1[0x2e6] = 0;
  param_1[0x2e7] = 0;
  param_1[0x2ee] = &PTR_FUN_14affcd20;
  *(undefined1 *)(param_1 + 0x2ef) = 0;
  param_1[0x2fa] = 0;
  param_1[0x2fb] = 0;
  param_1[0x2f8] = 0;
  param_1[0x2f9] = 0;
  param_1[0x2f6] = 0;
  param_1[0x2f7] = 0;
  param_1[0x2f4] = 0;
  param_1[0x2f5] = 0;
  param_1[0x2f2] = 0;
  param_1[0x2f3] = 0;
  param_1[0x2f0] = 0;
  param_1[0x2f1] = 0;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412c74aa FUN_1412c74aa body=355 status=ok
// SIG undefined FUN_1412c74aa(void)

undefined4 * FUN_1412c74aa(undefined4 *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1412c760e();
  lVar3 = *(longlong *)(lVar2 + 0x110);
  if (lVar3 == 0) {
    FUN_140aa6c08(lVar2);
    lVar3 = *(longlong *)(lVar2 + 0x110);
  }
  *param_1 = *(undefined4 *)(lVar3 + 0x2cc);
  param_1[1] = 0xffffffff;
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 7;
  lVar2 = FUN_1412c760e();
  lVar3 = *(longlong *)(lVar2 + 0x110);
  if (lVar3 == 0) {
    FUN_140aa6c08(lVar2);
    lVar3 = *(longlong *)(lVar2 + 0x110);
  }
  uVar1 = *(uint *)(lVar3 + 0x2d4);
  param_1[3] = 0x45cb2000;
  param_1[2] = param_1[2] & 0xffffffe7 | uVar1 & 8;
  lVar2 = FUN_140d28d40();
  lVar3 = *(longlong *)(lVar2 + 0x110);
  if (lVar3 == 0) {
    FUN_140aa6c08(lVar2);
    lVar3 = *(longlong *)(lVar2 + 0x110);
  }
  *param_1 = *(undefined4 *)(lVar3 + 0x2cc);
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = 0x447a0000;
  lVar2 = FUN_140e3ec56();
  lVar3 = *(longlong *)(lVar2 + 0x110);
  if (lVar3 == 0) {
    FUN_140aa6c08(lVar2);
    lVar3 = *(longlong *)(lVar2 + 0x110);
  }
  param_1[7] = *(undefined4 *)(lVar3 + 0x42c);
  lVar2 = FUN_140e3ec56();
  lVar3 = *(longlong *)(lVar2 + 0x110);
  if (lVar3 == 0) {
    FUN_140aa6c08(lVar2);
    lVar3 = *(longlong *)(lVar2 + 0x110);
  }
  param_1[6] = param_1[6] & 0xfffffffe | *(uint *)(lVar3 + 0x428) & 1;
  *(undefined8 *)(param_1 + 8) = 0x4230000000000000;
  return param_1;
}



// FUNCTION 1412c760e FUN_1412c760e body=228 status=ok
// SIG undefined FUN_1412c760e(void)

longlong FUN_1412c760e(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cac23d8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b47bc4;
    local_38 = &LAB_14787faed;
    local_40 = &LAB_14637e187;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000005;
    local_60 = 0x10;
    local_68 = 0x2f0;
    FUN_14081cfa3(L"/Script/Engine",L"LightComponentBase",&DAT_14cac23d8,FUN_14637e160);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac23d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412c76f4 FUN_1412c76f4 body=2081 status=ok
// SIG undefined FUN_1412c76f4(void)

undefined8 * FUN_1412c76f4(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0xf00000d0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0xf00000d0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x18) = 0x425c0000;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0xf00000d0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x22) = 0x42a00000;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0xf00000d0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2c) = 0x41c80000;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0xf00000d0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x36) = 0x41200000;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0xf00000d0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x40) = 0x40a00000;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0xf00000d0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4a) = 0x44480000;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0xf00000d0;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x54) = 0x44480000;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0xf00000d0;
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x5e) = 0x44fa0000;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 0x65) = 0xf00000d0;
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x67) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x68) = 0x44fa0000;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6f) = 0xf00000d0;
  param_1[0x70] = 0;
  *(undefined4 *)(param_1 + 0x71) = 0x3f800000;
  param_1[0x72] = 0x40c00000;
  *(undefined4 *)(param_1 + 0x73) = 0x3f800000;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0xf00000d0;
  param_1[0x7b] = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x7d) = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  *(undefined4 *)(param_1 + 0x84) = 0xf00000d0;
  param_1[0x85] = 0;
  *(undefined4 *)(param_1 + 0x86) = 0x3f800000;
  param_1[0x87] = 0x41a000003eb33333;
  param_1[0x88] = 0x3f80000042340000;
  param_1[0x89] = &PTR_FUN_14b00bdf8;
  param_1[0x8f] = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x484) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x48c) = 0;
  param_1[0x93] = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  *(undefined4 *)(param_1 + 0x97) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x4bc) = 0x404;
  param_1[0x8a] = &DAT_14a176f00;
  memset(param_1 + 0x98,0,0xd8);
  *(undefined1 *)(param_1 + 0xb3) = 1;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  *(undefined4 *)(param_1 + 0xbb) = 0xf00000d0;
  param_1[0xbc] = 0;
  *(undefined4 *)(param_1 + 0xbd) = 0x3f800000;
  param_1[0xbe] = 0x40a00000447a0000;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  *(undefined4 *)(param_1 + 0xc1) = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  *(undefined4 *)(param_1 + 200) = 0xf00000d0;
  param_1[0xc9] = 0;
  *(undefined4 *)(param_1 + 0xca) = 0x3f800000;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  *(undefined4 *)(param_1 + 0xcd) = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0xf00000d0;
  param_1[0xd5] = 0;
  *(undefined4 *)(param_1 + 0xd6) = 0x3f800000;
  param_1[0xd7] = &PTR_FUN_14b00bdf8;
  param_1[0xdd] = 0;
  *(undefined4 *)(param_1 + 0xde) = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6f4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6fc) = 0;
  param_1[0xe1] = 0;
  *(undefined4 *)(param_1 + 0xe2) = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  *(undefined4 *)(param_1 + 0xe5) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x72c) = 0x404;
  param_1[0xd8] = &DAT_14a176f00;
  param_1[0xec] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xed] = 0x3fc0000040c00000;
  param_1[0xee] = 0;
  param_1[0xef] = 0x3f800000;
  param_1[0xf0] = 0x3f80000000000000;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0x3f800000;
  param_1[0xf3] = 0x3f80000000000000;
  param_1[0xf4] = 0;
  *(undefined4 *)(param_1 + 0xf5) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xf6) = 0x43fa0000;
  param_1[0xfb] = 0;
  param_1[0xfc] = 0;
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  *(undefined4 *)(param_1 + 0xfd) = 0xf00000d0;
  param_1[0xfe] = 0;
  *(undefined4 *)(param_1 + 0xff) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x100) = 0x3f800000;
  param_1[0x105] = 0;
  param_1[0x106] = 0;
  param_1[0x103] = 0;
  param_1[0x104] = 0;
  param_1[0x101] = 0;
  param_1[0x102] = 0;
  *(undefined4 *)(param_1 + 0x107) = 0xf00000d0;
  param_1[0x108] = 0;
  *(undefined4 *)(param_1 + 0x109) = 0x3f800000;
  param_1[0x10a] = &PTR_FUN_14b00bdf8;
  param_1[0x110] = 0;
  *(undefined4 *)(param_1 + 0x111) = 0;
  param_1[0x10c] = 0;
  param_1[0x10d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x88c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x894) = 0;
  param_1[0x114] = 0;
  *(undefined4 *)(param_1 + 0x115) = 0;
  param_1[0x116] = 0;
  param_1[0x117] = 0;
  *(undefined4 *)(param_1 + 0x118) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x8c4) = 0x404;
  param_1[0x10b] = &DAT_14a176f00;
  param_1[0x11f] = 0;
  param_1[0x11d] = 0;
  param_1[0x11e] = 0;
  param_1[0x11b] = 0;
  param_1[0x11c] = 0;
  param_1[0x119] = 0;
  param_1[0x11a] = 0;
  param_1[0x120] = 0x42c8000043fa0000;
  param_1[0x121] = 0x4234000042340000;
  *(undefined1 *)(param_1 + 0x122) = 0;
  *(undefined8 *)((longlong)param_1 + 0x914) = 0x420c000042340000;
  *(undefined4 *)((longlong)param_1 + 0x91c) = 0x420c0000;
  param_1[0x124] = &PTR_FUN_14b00bdf8;
  param_1[0x12a] = 0;
  *(undefined4 *)(param_1 + 299) = 0;
  param_1[0x126] = 0;
  param_1[0x127] = 0;
  *(undefined8 *)((longlong)param_1 + 0x95c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x964) = 0;
  param_1[0x12e] = 0;
  *(undefined4 *)(param_1 + 0x12f) = 0;
  param_1[0x130] = 0;
  param_1[0x131] = 0;
  *(undefined4 *)(param_1 + 0x132) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x994) = 0x404;
  param_1[0x125] = &DAT_14a176f00;
  param_1[0x139] = 0;
  param_1[0x137] = 0;
  param_1[0x138] = 0;
  param_1[0x135] = 0;
  param_1[0x136] = 0;
  param_1[0x133] = 0;
  param_1[0x134] = 0;
  param_1[0x13a] = &DAT_3f8000003f800000;
  param_1[0x13b] = 0x3d4ccccd41400000;
  param_1[0x13c] = 0x3f80000042700000;
  param_1[0x13d] = &DAT_3f8000003f800000;
  *(undefined4 *)(param_1 + 0x13e) = 0x3ecccccd;
  *(undefined8 *)((longlong)param_1 + 0xa34) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa3c) = 0;
  param_1[0x145] = 0;
  param_1[0x146] = 0;
  param_1[0x143] = 0;
  param_1[0x144] = 0;
  param_1[0x141] = 0;
  param_1[0x142] = 0;
  param_1[0x13f] = 0;
  param_1[0x140] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa44) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xa4c) = 0x3eb33333;
  *(undefined8 *)((longlong)param_1 + 0xa54) = 0;
  param_1[0x14c] = 0;
  param_1[0x14d] = 0;
  param_1[0x14e] = 0x7fefffffffffffff;
  param_1[0x14f] = 0xffefffffffffffff;
  param_1[0x150] = 0x7fefffffffffffff;
  param_1[0x151] = 0xffefffffffffffff;
  param_1[0x152] = 0x3f80000040a00000;
  param_1[0x153] = 0x40a0000043fa0000;
  param_1[0x154] = 0x43fa00003f800000;
  param_1[0x155] = 0x3f80000040a00000;
  param_1[0x156] = 0x40a0000043fa0000;
  param_1[0x157] = 0x43fa00003f800000;
  param_1[0x158] = 0x3f80000040a00000;
  param_1[0x159] = 0x40a0000043fa0000;
  param_1[0x15a] = 0x43fa00003f800000;
  param_1[0x15b] = 0x3f80000040a00000;
  param_1[0x15c] = 0x40a0000043fa0000;
  param_1[0x15d] = 0x43fa00003f800000;
  param_1[0x15e] = 0x3f80000040a00000;
  param_1[0x15f] = 0x40a0000043fa0000;
  param_1[0x160] = 0x43fa00003f800000;
  *(undefined1 *)(param_1 + 0x161) = 1;
  *(undefined8 *)((longlong)param_1 + 0xb0c) = 0x40a00000447a0000;
  param_1[0x163] = 0;
  param_1[0x164] = 0;
  param_1[0x165] = 0x7fefffffffffffff;
  param_1[0x166] = 0xffefffffffffffff;
  param_1[0x167] = 0x7fefffffffffffff;
  param_1[0x168] = 0xffefffffffffffff;
  param_1[0x169] = 0;
  param_1[0x16a] = 0;
  param_1[0x16b] = 0x7fefffffffffffff;
  param_1[0x16c] = 0xffefffffffffffff;
  param_1[0x16d] = 0x7fefffffffffffff;
  param_1[0x16e] = 0xffefffffffffffff;
  param_1[0x171] = 0;
  param_1[0x172] = 0;
  param_1[0x16f] = 0;
  param_1[0x170] = 0;
  param_1[0x173] = 0x3f800000;
  param_1[0x174] = 0x3f80000000000000;
  param_1[0x175] = 0;
  param_1[0x176] = 0x3f800000;
  param_1[0x177] = 0x3f80000000000000;
  param_1[0x178] = 0;
  param_1[0x179] = 0x3f800000;
  param_1[0x17a] = 0x3f80000043fa0000;
  param_1[0x17b] = 0;
  param_1[0x17c] = 0;
  param_1[0x17d] = 0x7fefffffffffffff;
  param_1[0x17e] = 0xffefffffffffffff;
  param_1[0x17f] = 0x7fefffffffffffff;
  param_1[0x180] = 0xffefffffffffffff;
  param_1[0x181] = 0x42c8000043fa0000;
  param_1[0x182] = 0x4234000042340000;
  *(undefined1 *)(param_1 + 0x183) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc1c) = 0x420c000042340000;
  *(undefined4 *)((longlong)param_1 + 0xc24) = 0x420c0000;
  param_1[0x185] = 0;
  param_1[0x186] = 0;
  param_1[0x187] = 0x7fefffffffffffff;
  param_1[0x188] = 0xffefffffffffffff;
  param_1[0x189] = 0x7fefffffffffffff;
  param_1[0x18a] = 0xffefffffffffffff;
  param_1[0x18b] = &DAT_3f8000003f800000;
  param_1[0x18c] = 0x3d4ccccd41400000;
  param_1[0x18d] = 0x3f8000003d4ccccd;
  param_1[0x18e] = &DAT_3f8000003f800000;
  *(undefined4 *)(param_1 + 399) = 0x3ecccccd;
  return param_1;
}



// FUNCTION 1412c7f16 FUN_1412c7f16 body=503 status=ok
// SIG undefined FUN_1412c7f16(void)

longlong FUN_1412c7f16(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4,
                      int param_5,int param_6)

{
  undefined2 uVar1;
  longlong lVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined4 local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = 0x62;
  if (param_4 == 0x400) {
    uVar3 = 0x68;
  }
  if (param_4 == 0) {
    uVar3 = 0x6e;
  }
  uVar4 = 0x6e;
  if (param_5 == 0x400) {
    uVar4 = 0x68;
  }
  uVar1 = 0x6e;
  if (param_6 == 0x400) {
    uVar1 = 0x68;
  }
  local_58 = (undefined8 *)(ulonglong)CONCAT24(uVar1,CONCAT22(uVar4,uVar3));
  FUN_140056680(param_1,&local_58);
  FUN_140002266((undefined8 *)(param_1 + 0x10),
                L"%s\nArguments are three characters: [ThreadPriority][TaskPriority][TaskPriorityIfForcedToNormalThreadPriority] where ThreadPriority is \'h\' or \'n\' or \'b\' (high/normal/background) and TaskPriority is \'h\' or \'n\' (high/normal). Example: %s bnh"
                ,param_3,param_2);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  local_50 = 3;
  *local_58 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_58[2] = lVar5;
  *local_58 = &PTR_FUN_149f539d0;
  local_58[3] = param_1;
  local_58[4] = &LAB_1467a7b02;
  if (*(int *)(param_1 + 0x18) == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = *(undefined2 **)(param_1 + 0x10);
  }
  local_60 = 0;
  local_68 = &local_58;
  FUN_1412c810e(param_1 + 0x20,param_2,param_1,puVar6);
  if (local_50 != 0) {
    if (local_58 == (undefined8 *)0x0) goto LAB_1412c807d;
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
  }
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1412c807d:
  *(int *)(param_1 + 0x30) = param_4;
  *(int *)(param_1 + 0x34) = param_5;
  *(int *)(param_1 + 0x38) = param_6;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412c810e FUN_1412c810e body=137 status=ok
// SIG undefined FUN_1412c810e(void)

undefined8 *
FUN_1412c810e(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6)

{
  undefined8 uVar1;
  
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  uVar1 = (**(code **)(*DAT_14c8407a8 + 0x28))(DAT_14c8407a8,param_2,param_3,param_4,param_6);
  FUN_14078dc50(param_1,uVar1);
  *param_1 = FAutoConsoleVariableRef::vftable;
  (**(code **)(*(longlong *)param_1[1] + 200))((longlong *)param_1[1],param_5);
  return param_1;
}



// FUNCTION 1412c8198 FUN_1412c8198 body=194 status=ok
// SIG undefined FUN_1412c8198(void)

void FUN_1412c8198(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar1 = (int)param_2[1];
  uVar3 = uVar2 + iVar1;
  if (uVar2 < uVar3) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar3);
    }
    FUN_1412c825c(param_1,uVar3);
    iVar1 = 1;
    if (3 < uVar3) {
      uVar3 = (uVar3 | 1) + 0xe;
      iVar1 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      iVar1 = 1 << ((byte)iVar1 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar1)) {
      *(int *)(param_1 + 0x48) = iVar1;
      FUN_144972968(param_1);
    }
    iVar1 = (int)param_2[1];
  }
  if (iVar1 != 0) {
    lVar4 = *param_2;
    lVar5 = (longlong)iVar1 << 4;
    do {
      FUN_144972254(param_1,local_2c,lVar4,0);
      lVar4 = lVar4 + 0x10;
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412c825c FUN_1412c825c body=436 status=ok
// SIG undefined FUN_1412c825c(void)

void FUN_1412c825c(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar8 = param_2 - iVar1;
  if (uVar8 != 0 && iVar1 <= (int)param_2) {
    uVar6 = (ulonglong)param_2;
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar6);
    }
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_1405357e8(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_1403951a8(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(lVar2 + uVar6 * 0x18 + -0x14);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = iVar9 + -1;
        }
        puVar5[-1] = 0xffffffff;
        uVar3 = 0xffffffff;
        if (0 < *(int *)((longlong)param_1 + 0x34)) {
          uVar3 = (undefined4)param_1[6];
        }
        uVar6 = uVar6 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar9 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -6;
      } while ((longlong)iVar11 < (longlong)uVar6);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar8;
      if (param_2 != 0) {
        plVar7 = param_1 + 2;
        uVar12 = uVar8 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar7,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar8 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar7;
        }
        if (uVar8 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = (int)param_1[5];
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar7 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar8) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar8);
      FUN_1447c6044(param_1 + 2,uVar3,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 1412c8410 FUN_1412c8410 body=505 status=ok
// SIG undefined FUN_1412c8410(void)

void FUN_1412c8410(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  longlong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_1403a682c;
      local_70 = 0;
      local_78 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
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
      local_38 = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_38);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_38;
  if ((local_38 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_48 = (undefined4)uStack_30;
  uStack_44 = uStack_30._4_4_;
  uStack_40 = (undefined4)local_28;
  uStack_3c = local_28._4_4_;
  uVar4 = FUN_1412c860a();
  *param_3 = uVar4;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412c860a FUN_1412c860a body=114 status=ok
// SIG undefined FUN_1412c860a(void)

undefined4 FUN_1412c860a(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_141088a78(param_1,&local_28);
  uVar3 = *(undefined4 *)(local_28 + 0xec);
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



// FUNCTION 1412c867e FUN_1412c867e body=1578 status=ok
// SIG undefined FUN_1412c867e(void)

longlong FUN_1412c867e(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  longlong lVar7;
  
  if (param_2 == param_1) {
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  }
  else {
    if (*(char *)(param_2 + 0xc) == '\x01') {
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
      uVar6 = 1;
LAB_1412c879f:
      *(undefined1 *)(param_1 + 0xc) = uVar6;
    }
    else if (*(char *)(param_1 + 0xc) == '\x01') {
      uVar6 = 0;
      goto LAB_1412c879f;
    }
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    lVar7 = param_2 + 0x18;
    if (*(longlong *)(param_2 + 0x48) != 0) {
      lVar7 = *(longlong *)(param_2 + 0x48);
    }
    FUN_1400709d4(param_1 + 0x18,lVar7,*(undefined4 *)(param_2 + 0x50),
                  *(undefined4 *)(param_1 + 0x54));
  }
  (**(code **)(*(longlong *)(param_1 + 0x58) + 0x20))(param_1 + 0x58,0);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  FUN_1406022fe(param_1 + 0x68,param_2 + 0x68);
  if (param_2 == param_1) {
    memcpy((void *)(param_1 + 0xa0),(void *)(param_2 + 0xa0),0x100);
    *(undefined8 *)(param_1 + 0x1d8) = *(undefined8 *)(param_2 + 0x1d8);
    uVar5 = *(undefined8 *)(param_2 + 0x248);
    *(undefined8 *)(param_1 + 0x240) = *(undefined8 *)(param_2 + 0x240);
    *(undefined8 *)(param_1 + 0x248) = uVar5;
    *(undefined1 *)(param_1 + 0x278) = *(undefined1 *)(param_2 + 0x278);
  }
  else {
    if (*(char *)(param_2 + 0x7c) == '\x01') {
      *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
      uVar6 = 1;
LAB_1412c8a2c:
      *(undefined1 *)(param_1 + 0x7c) = uVar6;
    }
    else if (*(char *)(param_1 + 0x7c) == '\x01') {
      uVar6 = 0;
      goto LAB_1412c8a2c;
    }
    if (*(char *)(param_2 + 0x98) == '\x01') {
      *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
      uVar5 = *(undefined8 *)(param_2 + 0x88);
      *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
      *(undefined8 *)(param_1 + 0x88) = uVar5;
      *(undefined1 *)(param_1 + 0x98) = 1;
    }
    else if (*(char *)(param_1 + 0x98) == '\x01') {
      *(undefined1 *)(param_1 + 0x98) = 0;
    }
    memcpy((void *)(param_1 + 0xa0),(void *)(param_2 + 0xa0),0x100);
    if (*(char *)(param_2 + 0x1b8) == '\x01') {
      *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)(param_2 + 0x1b0);
      uVar5 = *(undefined8 *)(param_2 + 0x1a8);
      *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_2 + 0x1a0);
      *(undefined8 *)(param_1 + 0x1a8) = uVar5;
      *(undefined1 *)(param_1 + 0x1b8) = 1;
    }
    else if (*(char *)(param_1 + 0x1b8) == '\x01') {
      *(undefined1 *)(param_1 + 0x1b8) = 0;
    }
    if (*(char *)(param_2 + 0x1c4) == '\x01') {
      *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_2 + 0x1c0);
      *(undefined1 *)(param_1 + 0x1c4) = 1;
    }
    else if (*(char *)(param_1 + 0x1c4) == '\x01') {
      *(undefined1 *)(param_1 + 0x1c4) = 0;
    }
    if (*(char *)(param_2 + 0x1cc) == '\x01') {
      *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_2 + 0x1c8);
      *(undefined1 *)(param_1 + 0x1cc) = 1;
    }
    else if (*(char *)(param_1 + 0x1cc) == '\x01') {
      *(undefined1 *)(param_1 + 0x1cc) = 0;
    }
    if (*(char *)(param_2 + 0x1d4) == '\x01') {
      *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(param_2 + 0x1d0);
      *(undefined1 *)(param_1 + 0x1d4) = 1;
    }
    else if (*(char *)(param_1 + 0x1d4) == '\x01') {
      *(undefined1 *)(param_1 + 0x1d4) = 0;
    }
    *(undefined8 *)(param_1 + 0x1d8) = *(undefined8 *)(param_2 + 0x1d8);
    if (*(char *)(param_2 + 0x1f8) == '\x01') {
      *(undefined8 *)(param_1 + 0x1f0) = *(undefined8 *)(param_2 + 0x1f0);
      uVar5 = *(undefined8 *)(param_2 + 0x1e8);
      *(undefined8 *)(param_1 + 0x1e0) = *(undefined8 *)(param_2 + 0x1e0);
      *(undefined8 *)(param_1 + 0x1e8) = uVar5;
      *(undefined1 *)(param_1 + 0x1f8) = 1;
    }
    else if (*(char *)(param_1 + 0x1f8) == '\x01') {
      *(undefined1 *)(param_1 + 0x1f8) = 0;
    }
    if (*(char *)(param_2 + 0x218) == '\x01') {
      *(undefined8 *)(param_1 + 0x210) = *(undefined8 *)(param_2 + 0x210);
      uVar5 = *(undefined8 *)(param_2 + 0x208);
      *(undefined8 *)(param_1 + 0x200) = *(undefined8 *)(param_2 + 0x200);
      *(undefined8 *)(param_1 + 0x208) = uVar5;
      *(undefined1 *)(param_1 + 0x218) = 1;
    }
    else if (*(char *)(param_1 + 0x218) == '\x01') {
      *(undefined1 *)(param_1 + 0x218) = 0;
    }
    if (*(char *)(param_2 + 0x238) == '\x01') {
      *(undefined8 *)(param_1 + 0x230) = *(undefined8 *)(param_2 + 0x230);
      uVar5 = *(undefined8 *)(param_2 + 0x228);
      *(undefined8 *)(param_1 + 0x220) = *(undefined8 *)(param_2 + 0x220);
      *(undefined8 *)(param_1 + 0x228) = uVar5;
      *(undefined1 *)(param_1 + 0x238) = 1;
    }
    else if (*(char *)(param_1 + 0x238) == '\x01') {
      *(undefined1 *)(param_1 + 0x238) = 0;
    }
    uVar2 = *(undefined4 *)(param_2 + 0x244);
    uVar3 = *(undefined4 *)(param_2 + 0x248);
    uVar4 = *(undefined4 *)(param_2 + 0x24c);
    *(undefined4 *)(param_1 + 0x240) = *(undefined4 *)(param_2 + 0x240);
    *(undefined4 *)(param_1 + 0x244) = uVar2;
    *(undefined4 *)(param_1 + 0x248) = uVar3;
    *(undefined4 *)(param_1 + 0x24c) = uVar4;
    iVar1 = *(int *)(param_2 + 600);
    _Src = *(void **)(param_2 + 0x250);
    *(int *)(param_1 + 600) = iVar1;
    if (iVar1 == 0 && *(int *)(param_1 + 0x25c) == 0) {
      *(undefined4 *)(param_1 + 0x25c) = 0;
    }
    else {
      FUN_1447bda9e((undefined8 *)(param_1 + 0x250),iVar1);
      if (iVar1 != 0) {
        memcpy(*(void **)(param_1 + 0x250),_Src,(longlong)iVar1 << 2);
      }
    }
    if (*(char *)(param_2 + 0x264) == '\x01') {
      *(undefined4 *)(param_1 + 0x260) = *(undefined4 *)(param_2 + 0x260);
      uVar6 = 1;
LAB_1412c88a9:
      *(undefined1 *)(param_1 + 0x264) = uVar6;
    }
    else if (*(char *)(param_1 + 0x264) == '\x01') {
      uVar6 = 0;
      goto LAB_1412c88a9;
    }
    if (*(char *)(param_2 + 0x26c) == '\x01') {
      *(undefined4 *)(param_1 + 0x268) = *(undefined4 *)(param_2 + 0x268);
      *(undefined1 *)(param_1 + 0x26c) = 1;
    }
    else if (*(char *)(param_1 + 0x26c) == '\x01') {
      *(undefined1 *)(param_1 + 0x26c) = 0;
    }
    if (*(char *)(param_2 + 0x274) == '\x01') {
      *(undefined4 *)(param_1 + 0x270) = *(undefined4 *)(param_2 + 0x270);
      *(undefined1 *)(param_1 + 0x274) = 1;
    }
    else if (*(char *)(param_1 + 0x274) == '\x01') {
      *(undefined1 *)(param_1 + 0x274) = 0;
    }
    *(undefined1 *)(param_1 + 0x278) = *(undefined1 *)(param_2 + 0x278);
    if (*(char *)(param_2 + 0x27a) == '\x01') {
      *(undefined1 *)(param_1 + 0x279) = *(undefined1 *)(param_2 + 0x279);
      *(undefined1 *)(param_1 + 0x27a) = 1;
    }
    else if (*(char *)(param_1 + 0x27a) == '\x01') {
      *(undefined1 *)(param_1 + 0x27a) = 0;
    }
  }
  FUN_1403e0f94(param_1 + 0x280,param_2 + 0x280);
  if ((*(longlong *)(param_1 + 0x290) != *(longlong *)(param_2 + 0x290)) ||
     (*(int *)(param_1 + 0x298) != *(int *)(param_2 + 0x298))) {
    *(longlong *)(param_1 + 0x290) = *(longlong *)(param_2 + 0x290);
    *(undefined4 *)(param_1 + 0x298) = *(undefined4 *)(param_2 + 0x298);
    *(undefined8 *)(param_1 + 0x2a0) = 0;
  }
  if ((*(longlong *)(param_1 + 0x2a8) != *(longlong *)(param_2 + 0x2a8)) ||
     (*(int *)(param_1 + 0x2b0) != *(int *)(param_2 + 0x2b0))) {
    *(longlong *)(param_1 + 0x2a8) = *(longlong *)(param_2 + 0x2a8);
    *(undefined4 *)(param_1 + 0x2b0) = *(undefined4 *)(param_2 + 0x2b0);
    *(undefined8 *)(param_1 + 0x2b8) = 0;
  }
  *(undefined4 *)(param_1 + 0x2c0) = *(undefined4 *)(param_2 + 0x2c0);
  if (param_2 == param_1) goto LAB_1412c89db;
  if (*(char *)(param_2 + 0x2c8) == '\x01') {
    *(undefined4 *)(param_1 + 0x2c4) = *(undefined4 *)(param_2 + 0x2c4);
    uVar6 = 1;
LAB_1412c8c5f:
    *(undefined1 *)(param_1 + 0x2c8) = uVar6;
  }
  else if (*(char *)(param_1 + 0x2c8) == '\x01') {
    uVar6 = 0;
    goto LAB_1412c8c5f;
  }
  if (*(char *)(param_2 + 0x2cd) == '\x01') {
    *(undefined1 *)(param_1 + 0x2cc) = *(undefined1 *)(param_2 + 0x2cc);
    *(undefined1 *)(param_1 + 0x2cd) = 1;
  }
  else if (*(char *)(param_1 + 0x2cd) == '\x01') {
    *(undefined1 *)(param_1 + 0x2cd) = 0;
  }
LAB_1412c89db:
  *(undefined8 *)(param_1 + 0x2d0) = *(undefined8 *)(param_2 + 0x2d0);
  FUN_1403e0f44(param_1 + 0x2d8,param_2 + 0x2d8);
  return param_1;
}



// FUNCTION 1412c8ca8 FUN_1412c8ca8 body=1411 status=ok
// SIG undefined FUN_1412c8ca8(void)

void FUN_1412c8ca8(longlong param_1,longlong *param_2,longlong *param_3,int *param_4)

{
  short sVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  ushort uVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  code *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  code *local_98;
  code *local_90;
  int local_84;
  longlong *local_80;
  int *local_78;
  longlong local_70;
  code *local_68 [2];
  longlong local_58;
  int local_50 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *param_4 = 0;
  local_80 = param_3;
  local_78 = param_4;
  lVar4 = FUN_14018d992();
  if (DAT_14c951858 == 0) {
    local_a0 = local_68;
    local_68[0] = FUN_1449e2820;
    local_90 = FUN_14081d0ea;
    local_98 = FUN_14081d0ea;
    local_a8 = &LAB_1468c5283;
    local_b0 = FUN_142809da0;
    local_b8 = L"Engine";
    local_c0 = 0x400000000;
    local_c8 = 0x10000000;
    local_d0 = 8;
    local_d8 = 0x50;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858);
  }
  lVar5 = *(longlong *)(param_1 + 0x20);
  if (lVar5 != 0) {
    do {
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
         (lVar6 = lVar5,
         *(longlong *)
          (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
         != lVar4 + 0x30)) {
        lVar6 = 0;
      }
    } while ((lVar6 == 0) && (lVar5 = *(longlong *)(lVar5 + 0x20), lVar5 != 0));
    if (lVar6 != 0) {
      iVar3 = *(int *)(param_1 + 0x48);
      iVar12 = iVar3;
      if ((longlong)*(int *)(lVar6 + 0xc0) != 0) {
        lVar4 = *(longlong *)(lVar6 + 0xb8);
        local_70 = lVar4 + (longlong)*(int *)(lVar6 + 0xc0) * 0x48;
        local_84 = iVar3;
        do {
          lVar5 = FUN_14040f60c(lVar4);
          if ((lVar5 != 0) && (*(char *)(lVar4 + 0x20) == '\x01')) {
            if (*(char *)(lVar5 + 0x365) == '\x01') {
              bVar2 = *(byte *)(lVar5 + 0x364) & 1;
            }
            else {
              bVar2 = FUN_1405c05c4(lVar5);
              *(byte *)(lVar5 + 0x364) = bVar2;
              *(undefined1 *)(lVar5 + 0x365) = 1;
            }
            if ((bVar2 != 0) && (*(char *)(lVar5 + 0x3c) == '\x01')) {
              lVar5 = *(longlong *)(lVar5 + 0x268);
              lVar6 = FUN_1407d7b34(lVar5,1);
              if ((lVar6 != 0) && ((longlong)*(int *)(lVar6 + 0x38) != 0)) {
                uVar13 = 0;
                lVar7 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar6 + 0x30) + uVar13) == param_1) {
                    if ((~uVar13 & 0x7fffffff8) != 0) {
                      lVar5 = *(longlong *)(lVar5 + 0x2f0);
                      lVar6 = (lVar7 >> 0x20) * 0x38;
                      lVar7 = (longlong)*(int *)(lVar5 + 0x30 + lVar6);
                      if (lVar7 != 0) {
                        plVar9 = *(longlong **)(lVar5 + 0x28 + lVar6);
                        plVar14 = plVar9 + lVar7 * 10;
                        goto LAB_1412c8e58;
                      }
                    }
                    break;
                  }
                  lVar7 = lVar7 + 0x100000000;
                  uVar13 = uVar13 + 8;
                } while ((longlong)*(int *)(lVar6 + 0x38) * 8 != uVar13);
              }
            }
          }
LAB_1412c8dfc:
          lVar4 = lVar4 + 0x48;
        } while (lVar4 != local_70);
        iVar3 = *(int *)(param_1 + 0x48);
        iVar12 = local_84;
      }
      *local_78 = iVar12 - iVar3;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_1412c8e58:
  if ((longlong)(int)plVar9[4] != 0) {
    lVar5 = plVar9[3];
    lVar6 = 0;
    do {
      if (*(longlong *)(lVar5 + lVar6) == DAT_14cb3d8e0) {
        FUN_1412c922c(local_68,plVar9);
        local_58 = *(longlong *)(lVar5 + 8 + lVar6);
        local_50[0] = FUN_144830b78(local_50,local_68);
        lVar7 = *plVar9;
        if ((((((((lVar7 == DAT_14cb3b4f8) || (lVar7 == DAT_14cb3b500)) || (lVar7 == DAT_14cb3b508))
               || ((lVar7 == DAT_14cb3b578 || (lVar7 == DAT_14cb3b580)))) ||
              (lVar7 == DAT_14cb3b588)) ||
             (((lVar7 == DAT_14cb3b510 || (lVar7 == DAT_14cb3b590)) ||
              ((lVar7 == DAT_14cb3b518 ||
               (((lVar7 == DAT_14cb3b520 || (lVar7 == DAT_14cb3b598)) || (lVar7 == DAT_14cb3b5a0))))
              )))) || (((lVar7 == DAT_14cb3b5a8 || (lVar7 == DAT_14cb3b528)) ||
                       ((lVar7 == DAT_14cb3b5b0 ||
                        ((((lVar7 == DAT_14cb3b530 || (lVar7 == DAT_14cb3b538)) ||
                          ((lVar7 == DAT_14cb3b5b8 ||
                           (((lVar7 == DAT_14cb3b5c0 || (lVar7 == DAT_14cb3b5c8)) ||
                            (lVar7 == DAT_14cb3b540)))))) ||
                         ((lVar7 == DAT_14cb3b548 || (lVar7 == DAT_14cb3b550)))))))))) ||
           ((lVar7 == DAT_14cb3b5d0 || ((lVar7 == DAT_14cb3b5d8 || (lVar7 == DAT_14cb3b5e0)))))) {
          lVar7 = *param_2;
          iVar3 = (int)param_2[1];
          lVar11 = (longlong)iVar3;
          if (lVar11 == 0) goto LAB_1412c9032;
          uVar13 = 0;
          goto LAB_1412c8ff0;
        }
        break;
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)plVar9[4] * 0x10 != lVar6);
  }
  goto LAB_1412c8ffd;
  while (uVar13 = uVar13 + 0xc, lVar11 * 0xc != uVar13) {
LAB_1412c8ff0:
    if ((*(longlong *)(lVar7 + uVar13) == local_58) && (*(int *)(lVar7 + 8 + uVar13) == local_50[0])
       ) goto LAB_1412c8ffd;
  }
  uVar13 = 0;
  do {
    if (*(longlong *)(lVar7 + uVar13) == *(longlong *)(lVar5 + 8 + lVar6)) {
      if ((int)(uVar13 >> 2) * -0x55555555 != -1) goto LAB_1412c8ffd;
      break;
    }
    uVar13 = uVar13 + 0xc;
  } while (lVar11 * 0xc != uVar13);
LAB_1412c9032:
  *(uint *)(param_2 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
    FUN_14024cd4c(param_2,iVar3);
    lVar7 = *param_2;
  }
  *(int *)(lVar7 + 8 + lVar11 * 0xc) = local_50[0];
  *(longlong *)(lVar7 + lVar11 * 0xc) = local_58;
  plVar8 = (longlong *)FUN_144741050(local_50);
  uVar10 = *(ushort *)((longlong)plVar8 + 0xc);
  if (uVar10 == 0xffff) {
    uVar10 = 0;
    if ((*plVar8 != 0) && ((short)plVar8[1] != 1)) {
      lVar5 = FUN_144a811ba(plVar8);
      sVar1 = (short)*(undefined4 *)(lVar5 + 0x5c);
      uVar10 = -sVar1 & (sVar1 + (short)*(undefined4 *)(lVar5 + 0x58)) - 1U;
    }
    *(ushort *)((longlong)plVar8 + 0xc) = uVar10;
  }
  iVar3 = (int)local_80[1];
  *(uint *)(local_80 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)local_80 + 0xc) < iVar3 + 1U) {
    FUN_1447808da(local_80,iVar3);
  }
  *(int *)(*local_80 + (longlong)iVar3 * 4) = local_84;
  local_84 = local_84 + ((int)(short)uVar10 >> 2);
LAB_1412c8ffd:
  plVar9 = plVar9 + 10;
  if (plVar9 == plVar14) goto LAB_1412c8dfc;
  goto LAB_1412c8e58;
}



// FUNCTION 1412c922c FUN_1412c922c body=545 status=ok
// SIG undefined FUN_1412c922c(void)

longlong * FUN_1412c922c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = DAT_14cb42160;
  lVar3 = DAT_14cb42140;
  lVar2 = DAT_14cb42110;
  lVar1 = DAT_14cb420f0;
  lVar5 = *param_2;
  if ((((lVar5 == DAT_14cb3b4f8) || (lVar5 == DAT_14cb3b500)) || (lVar5 == DAT_14cb3b508)) ||
     (((lVar5 == DAT_14cb3b578 || (lVar5 == DAT_14cb3b580)) || (lVar5 == DAT_14cb3b588)))) {
    *param_1 = DAT_14cb42160;
    lVar5 = DAT_14cb42168;
    if ((lVar4 != 0 & DAT_14c950c29) == 1) {
      FUN_14689c22e();
      lVar5 = DAT_14cb42168;
    }
  }
  else if (((lVar5 == DAT_14cb3b510) || (lVar5 == DAT_14cb3b590)) ||
          ((lVar5 == DAT_14cb3b518 ||
           ((((lVar5 == DAT_14cb3b520 || (lVar5 == DAT_14cb3b598)) || (lVar5 == DAT_14cb3b5a0)) ||
            (lVar5 == DAT_14cb3b5a8)))))) {
    *param_1 = DAT_14cb42140;
    lVar5 = DAT_14cb42148;
    if ((lVar3 != 0 & DAT_14c950c29) == 1) {
      FUN_14689c22e();
      lVar5 = DAT_14cb42148;
    }
  }
  else if (((lVar5 == DAT_14cb3b528) || (lVar5 == DAT_14cb3b5b0)) ||
          ((((lVar5 == DAT_14cb3b530 || ((lVar5 == DAT_14cb3b538 || (lVar5 == DAT_14cb3b5b8)))) ||
            (lVar5 == DAT_14cb3b5c0)) || (lVar5 == DAT_14cb3b5c8)))) {
    *param_1 = DAT_14cb42110;
    lVar5 = DAT_14cb42118;
    if ((lVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_14689c22e();
      lVar5 = DAT_14cb42118;
    }
  }
  else {
    if ((((lVar5 != DAT_14cb3b540) && (lVar5 != DAT_14cb3b548)) && (lVar5 != DAT_14cb3b550)) &&
       (((lVar5 != DAT_14cb3b5d0 && (lVar5 != DAT_14cb3b5d8)) && (lVar5 != DAT_14cb3b5e0)))) {
      *param_1 = 0;
      *(undefined2 *)(param_1 + 1) = 0;
      *(undefined1 *)((longlong)param_1 + 10) = 0;
      *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
      return param_1;
    }
    *param_1 = DAT_14cb420f0;
    lVar5 = DAT_14cb420f8;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_14689c22e();
      lVar5 = DAT_14cb420f8;
    }
  }
  param_1[1] = lVar5;
  return param_1;
}



// FUNCTION 1412c944e FUN_1412c944e body=470 status=ok
// SIG undefined FUN_1412c944e(void)

int * FUN_1412c944e(longlong *param_1,int *param_2)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_14589f320(param_1,iVar11);
    }
    iVar5 = (int)param_1[5];
    if (iVar5 == 0) {
      iVar8 = -1;
    }
    else {
      iVar8 = iVar5 + 0x1e;
      if (-1 < iVar5 + -1) {
        iVar8 = iVar5 + -1;
      }
      iVar8 = iVar8 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar7 = iVar5 + 1;
    iVar12 = iVar5 + 0x1f;
    if (-1 < iVar5) {
      iVar12 = iVar5;
    }
    if (iVar12 >> 5 == iVar8) {
      *(int *)(param_1 + 5) = iVar7;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar5) {
        if (iVar5 + 0x20U < 0xa0) {
          iVar7 = 0x80;
          iVar8 = iVar5;
        }
        else {
          uVar13 = iVar5 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar6 = 4;
            if (4 < uVar13) {
              uVar6 = uVar13;
            }
          }
          else {
            uVar6 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar3 = FUN_144a3809e(uVar6 << 2,0);
          iVar8 = (int)(uVar3 >> 2);
          iVar7 = -0x20;
          if ((int)uVar13 <= iVar8) {
            iVar7 = iVar8 << 5;
          }
          iVar8 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar7;
        FUN_1446efbd8(plVar9,iVar8);
        iVar7 = (int)param_1[5] + 1;
      }
      iVar8 = iVar7 + 0x1f;
      if (-1 < iVar7) {
        iVar8 = iVar7;
      }
      *(int *)(param_1 + 5) = iVar7;
      if (iVar7 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar4 = -(char)(iVar7 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar8 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar8 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    lVar2 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar4 = (byte)iVar5 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar2 = (longlong)iVar11;
    iVar5 = *(int *)(*param_1 + 4 + lVar2 * 0x40);
    *(int *)(param_1 + 6) = iVar5;
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar5 * 0x40) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar5 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar5 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar5 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar2 * 0x40 + *param_1;
  return param_2;
}



// FUNCTION 1412c9624 FUN_1412c9624 body=322 status=ok
// SIG undefined FUN_1412c9624(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1412c9624(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  uVar2 = *param_3;
  plVar3 = (longlong *)FUN_14001cc68(0x90,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b4308a0;
  FUN_1412c9766(plVar3 + 2,uVar2);
  plVar5 = plVar3 + 2;
  *plVar5 = (longlong)&PTR_FUN_14b4308c0;
  if ((plVar5 == (longlong *)0x0) ||
     (((plVar3[3] != 0 && (plVar3[4] != 0)) && (0 < *(int *)(plVar3[4] + 8))))) {
    *param_2 = plVar5;
    param_2[1] = plVar3;
    if (plVar3 == (longlong *)0x0) {
      return param_2;
    }
    goto LAB_1412c96b8;
  }
  if (plVar3 == (longlong *)0x0) {
    _DAT_00000018 = 0x10;
    plVar6 = (longlong *)&DAT_00000020;
    plVar4 = _DAT_00000020;
    if (_DAT_00000020 == (longlong *)0x0) goto LAB_1412c973a;
LAB_1412c9722:
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
    *plVar6 = (longlong)plVar3;
    if (plVar3 == (longlong *)0x0) {
LAB_1412c973a:
      *param_2 = plVar5;
      param_2[1] = plVar3;
      return param_2;
    }
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    plVar3[3] = (longlong)plVar5;
    if ((longlong *)plVar3[4] != plVar3) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      if ((longlong *)plVar3[4] != (longlong *)0x0) {
        plVar6 = plVar3 + 4;
        plVar4 = (longlong *)plVar3[4];
        goto LAB_1412c9722;
      }
      plVar3[4] = (longlong)plVar3;
    }
  }
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
  *param_2 = plVar5;
  param_2[1] = plVar3;
LAB_1412c96b8:
  LOCK();
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  UNLOCK();
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
  return param_2;
}



// FUNCTION 1412c9766 FUN_1412c9766 body=145 status=ok
// SIG undefined FUN_1412c9766(void)

undefined8 * FUN_1412c9766(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  GUID local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b42f890;
  param_1[3] = *param_2;
  lVar1 = param_2[1];
  param_1[4] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(byte *)(param_1 + 0xf) = *(byte *)(param_1 + 0xf) & 0xc0;
  local_28.Data1 = 0;
  local_28.Data2 = 0;
  local_28.Data3 = 0;
  local_28.Data4[0] = '\0';
  local_28.Data4[1] = '\0';
  local_28.Data4[2] = '\0';
  local_28.Data4[3] = '\0';
  local_28.Data4[4] = '\0';
  local_28.Data4[5] = '\0';
  local_28.Data4[6] = '\0';
  local_28.Data4[7] = '\0';
  CoCreateGuid(&local_28);
  *(ulong *)(param_1 + 5) = local_28.Data1;
  *(undefined4 *)((longlong)param_1 + 0x2c) = local_28._4_4_;
  *(undefined4 *)(param_1 + 6) = local_28.Data4._0_4_;
  *(undefined4 *)((longlong)param_1 + 0x34) = local_28.Data4._4_4_;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412c97f8 FUN_1412c97f8 body=12 status=ok
// SIG undefined FUN_1412c97f8(void)

void FUN_1412c97f8(undefined8 param_1,undefined8 *param_2)

{
  FUN_1402ca054(param_1,*param_2,*(undefined4 *)(param_2 + 1));
  return;
}



// FUNCTION 1412c9804 FUN_1412c9804 body=2421 status=ok
// SIG undefined FUN_1412c9804(void)

float * FUN_1412c9804(longlong param_1,float *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined8 ****ppppuVar11;
  longlong *plVar12;
  bool bVar13;
  bool bVar14;
  longlong lVar15;
  code *pcVar16;
  float *pfVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_188 [32];
  float *local_168;
  undefined8 local_160;
  float local_158;
  undefined4 uStack_154;
  ushort local_140;
  byte local_138;
  undefined8 ***local_130 [3];
  ushort local_118;
  byte local_110;
  undefined8 local_108;
  longlong *plStack_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined1 local_ec;
  byte local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_118 = 0;
  local_110 = 0;
  pfVar17 = &local_158;
  local_168 = param_2;
  FUN_1448729ea(param_1 + 0x28,pfVar17,param_4);
  if (local_138 == 3) {
    fVar21 = local_158;
    bVar2 = 3;
  }
  else {
    FUN_1400b56fe(&local_108,&local_158,3);
    fVar21 = 0.0;
    if (local_e8 != 0) {
      fVar21 = (float)local_108;
    }
    pcVar16 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_e8 * 0x120));
    if (pcVar16 != (code *)0x0) {
      puVar10 = &local_108;
      if (0x18 < (ushort)local_f0) {
        puVar10 = local_108;
      }
      (*pcVar16)(puVar10);
    }
    bVar2 = local_138;
    if (0x18 < (ushort)local_f0) {
      FUN_1400020a8(local_108);
      bVar2 = local_138;
    }
  }
  pcVar16 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar2 * 0x120));
  if (pcVar16 != (code *)0x0) {
    if (0x18 < local_140) {
      pfVar17 = (float *)CONCAT44(uStack_154,local_158);
    }
    (*pcVar16)(pfVar17);
  }
  if (0x18 < local_140) {
    FUN_1400020a8(CONCAT44(uStack_154,local_158));
  }
  pfVar17 = &local_158;
  FUN_1448729ea(param_1 + 0x118,pfVar17,param_4);
  if (local_138 == 3) {
    fVar22 = local_158;
    bVar2 = 3;
  }
  else {
    FUN_1400b56fe(&local_108,&local_158,3);
    fVar22 = 0.0;
    if (local_e8 != 0) {
      fVar22 = (float)local_108;
    }
    pcVar16 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_e8 * 0x120));
    if (pcVar16 != (code *)0x0) {
      puVar10 = &local_108;
      if (0x18 < (ushort)local_f0) {
        puVar10 = local_108;
      }
      (*pcVar16)(puVar10);
    }
    bVar2 = local_138;
    if (0x18 < (ushort)local_f0) {
      FUN_1400020a8(local_108);
      bVar2 = local_138;
    }
  }
  pcVar16 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar2 * 0x120));
  if (pcVar16 != (code *)0x0) {
    if (0x18 < local_140) {
      pfVar17 = (float *)CONCAT44(uStack_154,local_158);
    }
    (*pcVar16)(pfVar17);
  }
  if (0x18 < local_140) {
    FUN_1400020a8(CONCAT44(uStack_154,local_158));
  }
  pfVar17 = &local_158;
  FUN_1448729ea(param_1 + 0x168,pfVar17,param_4);
  if (local_138 == 3) {
    fVar23 = local_158;
    bVar2 = 3;
  }
  else {
    FUN_1400b56fe(&local_108,&local_158,3);
    fVar23 = 0.0;
    if (local_e8 != 0) {
      fVar23 = (float)local_108;
    }
    pcVar16 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_e8 * 0x120));
    if (pcVar16 != (code *)0x0) {
      puVar10 = &local_108;
      if (0x18 < (ushort)local_f0) {
        puVar10 = local_108;
      }
      (*pcVar16)(puVar10);
    }
    bVar2 = local_138;
    if (0x18 < (ushort)local_f0) {
      FUN_1400020a8(local_108);
      bVar2 = local_138;
    }
  }
  pcVar16 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar2 * 0x120));
  if (pcVar16 != (code *)0x0) {
    if (0x18 < local_140) {
      pfVar17 = (float *)CONCAT44(uStack_154,local_158);
    }
    (*pcVar16)(pfVar17);
  }
  if (0x18 < local_140) {
    FUN_1400020a8(CONCAT44(uStack_154,local_158));
  }
  local_160 = param_4;
  lVar5 = FUN_14049cbd6(param_4);
  if (lVar5 != 0) {
    lVar6 = FUN_140414d56(param_1 + 8);
    if (lVar6 != 0) {
      if (*(int *)(lVar5 + 0x238) < 1) {
LAB_1412c9ed6:
        FUN_1448729ea(param_1 + 200,&local_108,local_160);
        fVar20 = (float)FUN_144a7ecd0(&local_108);
        pcVar16 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_e8 * 0x120));
        if (pcVar16 != (code *)0x0) {
          puVar10 = &local_108;
          if (0x18 < (ushort)local_f0) {
            puVar10 = local_108;
          }
          (*pcVar16)(puVar10);
        }
        puVar10 = local_108;
        if (0x18 < (ushort)local_f0) {
LAB_1412c9d49:
          FUN_1400020a8(puVar10);
        }
      }
      else {
        bVar14 = false;
        lVar6 = 0;
        bVar13 = false;
        fVar20 = 0.0;
        do {
          iVar1 = *(int *)(*(longlong *)(lVar5 + 0x230) + 4 + lVar6 * 8);
          if (((((iVar1 != 0) &&
                (uVar4 = *(uint *)(*(longlong *)(lVar5 + 0x230) + lVar6 * 8), -1 < (int)uVar4)) &&
               ((int)uVar4 < DAT_14c9647dc)) &&
              ((plVar12 = (longlong *)
                          ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
               plVar12 != (longlong *)0x0 && ((int)plVar12[2] == iVar1)))) &&
             (((*(uint *)(plVar12 + 1) & 0x10200000) == 0 &&
              ((*plVar12 != 0 && (lVar15 = *(longlong *)(*plVar12 + 0x3e0), lVar15 != 0)))))) {
            uVar7 = FUN_1403c7982();
            plVar12 = (longlong *)FUN_144718840(lVar15,uVar7);
            if (plVar12 != (longlong *)0x0) {
              uVar7 = (**(code **)(*plVar12 + 0x10))(plVar12);
              uVar8 = FUN_140414d56(param_1 + 8);
              local_108 = (undefined8 *)0x0;
              plStack_100 = (longlong *)0x0;
              local_ec = 0xff;
              local_f0 = 0;
              local_f8 = 0;
              FUN_14488cef8(uVar7,&local_108,uVar8,0);
              if ((((plStack_100 != (longlong *)0x0) && (local_108._4_4_ != 0)) &&
                  (-1 < (int)(float)local_108)) &&
                 ((((int)(float)local_108 < DAT_14c9647dc &&
                   (lVar15 = (ulonglong)(((uint)(float)local_108 & 0xffff) * 0x18) +
                             *(longlong *)
                              (DAT_14c9647c8 + (ulonglong)((uint)(float)local_108 >> 0x10) * 8),
                   lVar15 != 0)) &&
                  ((*(int *)(lVar15 + 0x10) == local_108._4_4_ &&
                   ((*(uint *)(lVar15 + 8) & 0x10200000) == 0)))))) {
                uVar7 = (**(code **)(*plStack_100 + 0x10))();
                cVar3 = FUN_14486eb0e(uVar7,&local_108);
                if (cVar3 != '\0') {
                  uVar7 = FUN_14008e0ae(&local_108);
                  cVar3 = FUN_1412ca17a(uVar7);
                  if ((cVar3 == '\0') &&
                     ((*(char *)(param_1 + 0x20) != '\x01' ||
                      (lVar15 = FUN_14008e0ae(&local_108), 0 < *(int *)(lVar15 + 0x48))))) {
                    lVar15 = FUN_14008e0ae(&local_108);
                    fVar19 = *(float *)(lVar15 + 200);
                    lVar15 = FUN_14008e0ae(&local_108);
                    fVar24 = *(float *)(lVar15 + 0x30) * fVar21;
                    lVar15 = FUN_14008e0ae(&local_108);
                    bVar14 = true;
                    if ((fVar19 <= fVar24) &&
                       ((0.0 <= fVar19 &&
                        (fVar18 = fVar24 - *(float *)(lVar15 + 0x24), 0.0 < fVar18)))) {
                      fVar18 = (fVar24 - fVar19) / fVar18;
                      fVar19 = 1.0;
                      if (fVar18 <= 1.0) {
                        fVar19 = fVar18;
                      }
                      if (0.0 <= fVar19) {
                        fVar20 = fVar20 + fVar19 * (fVar23 - fVar22) + fVar22;
                      }
                      bVar13 = (bool)(bVar13 | 0.0 <= fVar19);
                    }
                  }
                }
              }
            }
          }
          lVar6 = lVar6 + 1;
        } while ((int)lVar6 < *(int *)(lVar5 + 0x238));
        if (!bVar14) goto LAB_1412c9ed6;
        if (!bVar13) {
          pfVar17 = &local_158;
          FUN_1448729ea(param_1 + 0x78,pfVar17,local_160);
          if (local_138 == 3) {
            uVar4 = 3;
            fVar20 = local_158;
          }
          else {
            FUN_1400b56fe(&local_108,&local_158,3);
            fVar20 = 0.0;
            if (local_e8 != 0) {
              fVar20 = (float)local_108;
            }
            pcVar16 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_e8 * 0x120));
            if (pcVar16 != (code *)0x0) {
              puVar10 = &local_108;
              if (0x18 < (ushort)local_f0) {
                puVar10 = local_108;
              }
              (*pcVar16)(puVar10);
            }
            if (0x18 < (ushort)local_f0) {
              FUN_1400020a8(local_108);
            }
            uVar4 = (uint)local_138;
          }
          pcVar16 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar4 * 0x120));
          if (pcVar16 != (code *)0x0) {
            if (0x18 < local_140) {
              pfVar17 = (float *)CONCAT44(uStack_154,local_158);
            }
            (*pcVar16)(pfVar17);
          }
          if (local_140 < 0x19) goto LAB_1412c9c32;
          puVar10 = (undefined8 *)CONCAT44(uStack_154,local_158);
          goto LAB_1412c9d49;
        }
      }
LAB_1412c9c32:
      *(undefined2 *)(local_168 + 6) = 4;
      *local_168 = fVar20;
      *(undefined1 *)(local_168 + 8) = 3;
      uVar4 = (uint)local_110;
      goto LAB_1412c9c4a;
    }
  }
  *(ushort *)(local_168 + 6) = local_118;
  if (local_118 < 0x19) {
    uVar9 = (ulonglong)((uint)local_110 * 0x120);
    pcVar16 = *(code **)((longlong)&DAT_14c9a85b8 + uVar9);
    if ((pcVar16 == (code *)0x0) &&
       (pcVar16 = *(code **)((longlong)&DAT_14c9a85b0 + uVar9), pcVar16 == (code *)0x0)) {
      memcpy(local_168,local_130,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar9));
    }
    else {
      (*pcVar16)(local_168,local_130);
    }
  }
  else {
    *(undefined8 ****)local_168 = local_130[0];
    local_130[0] = (undefined8 ****)0x0;
    local_118 = 0;
  }
  *(byte *)(local_168 + 8) = local_110;
  local_110 = 0;
  uVar4 = 0;
LAB_1412c9c4a:
  pcVar16 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar4 * 0x120));
  if (pcVar16 != (code *)0x0) {
    ppppuVar11 = (undefined8 ****)local_130[0];
    if (local_118 < 0x19) {
      ppppuVar11 = local_130;
    }
    (*pcVar16)(ppppuVar11);
  }
  pfVar17 = local_168;
  if (0x18 < local_118) {
    FUN_1400020a8(local_130[0]);
  }
  if ((local_e0 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return pfVar17;
}



// FUNCTION 1412ca17a FUN_1412ca17a body=180 status=ok
// SIG undefined FUN_1412ca17a(void)

undefined1 FUN_1412ca17a(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    if (((*(int *)(param_1 + 0xf4) != 0) && (uVar1 = *(uint *)(param_1 + 0xf0), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) {
      puVar5 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if (((puVar5 != (undefined8 *)0x0) && (*(int *)(puVar5 + 2) == *(int *)(param_1 + 0xf4))) &&
         ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)) {
        if ((*(uint *)(puVar5 + 1) & 0x10200000) == 0) {
          plVar4 = (longlong *)*puVar5;
        }
        else {
          plVar4 = (longlong *)0x0;
        }
        lVar3 = (**(code **)(*plVar4 + 0x180))();
        if (lVar3 != 0) {
          iVar2 = FUN_14490d72a(lVar3);
          if ((iVar2 == 3) && (*(char *)(param_1 + 0x131) == '\x01')) {
            if ((*(float *)(param_1 + 0x114) != *(float *)(param_1 + 200)) ||
               (NAN(*(float *)(param_1 + 0x114)) || NAN(*(float *)(param_1 + 200)))) {
              *(undefined1 *)(param_1 + 0x131) = 0;
            }
          }
        }
      }
    }
  }
  return *(undefined1 *)(param_1 + 0x131);
}



// FUNCTION 1412ca22e FUN_1412ca22e body=74 status=ok
// SIG undefined FUN_1412ca22e(void)

void FUN_1412ca22e(longlong param_1)

{
  FUN_1404eec70(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1412ca278 FUN_1412ca278 body=477 status=ok
// SIG undefined FUN_1412ca278(void)

undefined8 * FUN_1412ca278(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14bad5c20;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  param_1[6] = 0x3f91111111111111;
  param_1[7] = 0x800;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = param_1 + 0xe;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *param_1 = &PTR_FUN_14bb77650;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 2000;
  *(undefined1 *)((longlong)param_1 + 0x154) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
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
  param_1[0x34] = DAT_14c844840;
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
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  return param_1;
}



// FUNCTION 1412ca456 FUN_1412ca456 body=350 status=ok
// SIG undefined FUN_1412ca456(void)

void FUN_1412ca456(longlong param_1)

{
  longlong lVar1;
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
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140b9b50c();
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if (DAT_14cba8288 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141864c34;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1464cee30;
      local_48 = &LAB_148bfac22;
      local_50 = &LAB_140f21842;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
      if ((*(char *)(lVar1 + 0x7fe8) != '\0') &&
         ((*(char *)(lVar1 + 0x7fe8) == '\x01' ||
          ((*(longlong *)(lVar1 + 0x3f70) != 0 &&
           (*(char *)(*(longlong *)(lVar1 + 0x3f70) + 0x1088) == '\x01')))))) {
        *(undefined4 *)(param_1 + 0x48) = 1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412ca5c6 FUN_1412ca5c6 body=5495 status=ok
// SIG undefined FUN_1412ca5c6(void)

void FUN_1412ca5c6(longlong *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  int *piVar14;
  uint uVar15;
  undefined4 *puVar16;
  longlong lVar17;
  longlong *plVar18;
  ulonglong uVar19;
  int iVar20;
  bool bVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auStack_278 [32];
  undefined4 local_258;
  undefined4 local_250;
  undefined4 local_248;
  undefined8 local_240;
  wchar_t *local_238;
  code *local_230;
  undefined1 *local_228;
  code **local_220;
  code *local_218;
  code *local_210;
  longlong *local_200;
  undefined8 local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  longlong *local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  int local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined8 local_180;
  longlong local_178;
  longlong *local_170;
  code *local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  double local_158;
  int local_150;
  undefined1 local_148 [16];
  int local_138;
  ulonglong local_130;
  int local_128;
  char local_118;
  int local_114;
  char local_110;
  int local_10c;
  undefined1 local_108 [16];
  int local_f8;
  undefined1 local_f0 [48];
  int local_c0;
  int local_bc;
  byte local_b8;
  int local_b4;
  byte local_b0;
  int local_ac;
  byte local_a0;
  int local_9c;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_278;
  lVar9 = param_1[4];
  if (lVar9 != 0) {
    if (DAT_14cba8288 == 0) {
      local_220 = &local_168;
      local_168 = FUN_141864c34;
      local_210 = FUN_14081d0ea;
      local_218 = (code *)&LAB_1464cee30;
      local_228 = &LAB_148bfac22;
      local_230 = (code *)&LAB_140f21842;
      local_238 = L"Game";
      local_240 = 0;
      local_248 = 0x10000004;
      local_250 = 0x10;
      local_258 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
      FUN_1449ce79a(lVar9);
    }
  }
  if ((int)param_1[9] == 0) goto LAB_1412ca6fa;
  if ((int)param_1[9] != 2) {
    plVar12 = (longlong *)param_1[4];
    if (plVar12 == (longlong *)0x0) goto LAB_1412ca772;
    if (DAT_14cba8288 == 0) {
      local_220 = &local_168;
      local_168 = FUN_141864c34;
      local_210 = FUN_14081d0ea;
      local_218 = (code *)&LAB_1464cee30;
      local_228 = &LAB_148bfac22;
      local_230 = (code *)&LAB_140f21842;
      local_238 = L"Game";
      local_240 = 0;
      local_248 = 0x10000004;
      local_250 = 0x10;
      local_258 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(plVar12[2] + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(plVar12[2] + 0x30) + (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) !=
        DAT_14cba8288 + 0x30)) goto LAB_1412ca6fa;
    if (plVar12[0x76] == 0) {
      cVar2 = (**(code **)(*plVar12 + 0x700))(plVar12);
      if (cVar2 == '\0') goto LAB_1412ca63e;
      lVar9 = param_1[4];
      if (lVar9 != 0) {
        if (DAT_14cba8288 == 0) {
          local_220 = &local_168;
          local_168 = FUN_141864c34;
          local_210 = FUN_14081d0ea;
          local_218 = (code *)&LAB_1464cee30;
          local_228 = &LAB_148bfac22;
          local_230 = (code *)&LAB_140f21842;
          local_238 = L"Game";
          local_240 = 0;
          local_248 = 0x10000004;
          local_250 = 0x10;
          local_258 = 0x9cd0;
          FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
        }
        if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
          FUN_1449ce79a(lVar9);
        }
      }
    }
    cVar2 = FUN_1449ce79a(plVar12);
    if (cVar2 != '\0') goto LAB_1412ca63e;
    plVar18 = (longlong *)FUN_145f79862(param_1);
    if (plVar18 == (longlong *)0x0) {
LAB_1412ca6fa:
      plVar7 = (longlong *)param_1[4];
    }
    else {
      if (DAT_14cb223d8 == 0) {
        local_220 = &local_168;
        local_168 = FUN_1449e2820;
        local_210 = FUN_14081d0ea;
        local_218 = FUN_1427b09ee;
        local_228 = &LAB_147f29feb;
        local_230 = FUN_1464384fe;
        local_238 = L"Engine";
        local_240 = 0;
        local_248 = 0x10004001;
        local_250 = 8;
        local_258 = 0x28;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
      }
      plVar7 = (longlong *)(**(code **)(*plVar18 + 0x288))(plVar18,DAT_14cb223d8);
      if (plVar7 == (longlong *)0x0) goto LAB_1412ca6fa;
      if (DAT_14cb223d8 == 0) {
        local_220 = &local_168;
        local_168 = FUN_1449e2820;
        local_210 = FUN_14081d0ea;
        local_218 = FUN_1427b09ee;
        local_228 = &LAB_147f29feb;
        local_230 = FUN_1464384fe;
        local_238 = L"Engine";
        local_240 = 0;
        local_248 = 0x10004001;
        local_250 = 8;
        local_258 = 0x28;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
      }
      plVar8 = (longlong *)FUN_144718840(plVar7,DAT_14cb223d8);
      if (((plVar7 == plVar8) || (plVar8 == (longlong *)0x0)) ||
         (lVar9 = (**(code **)(*plVar8 + 0x10))(plVar8), lVar9 == 0)) goto LAB_1412ca6fa;
      iVar6 = FUN_140df75ae(lVar9,plVar12 + 0x113);
      plVar7 = (longlong *)param_1[4];
      if ((iVar6 == 0) || ((longlong *)plVar18[0x7c] == plVar12)) goto LAB_1412ca642;
    }
    if (plVar7 != (longlong *)0x0) {
      if (DAT_14cba8288 == 0) {
        local_220 = &local_168;
        local_168 = FUN_141864c34;
        local_210 = FUN_14081d0ea;
        local_218 = (code *)&LAB_1464cee30;
        local_228 = &LAB_148bfac22;
        local_230 = (code *)&LAB_140f21842;
        local_238 = L"Game";
        local_240 = 0;
        local_248 = 0x10000004;
        local_250 = 0x10;
        local_258 = 0x9cd0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
      }
      if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(plVar7[2] + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(plVar7[2] + 0x30) + (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) ==
          DAT_14cba8288 + 0x30)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_278);
      }
    }
    goto LAB_1412ca772;
  }
LAB_1412ca63e:
  plVar7 = (longlong *)param_1[4];
LAB_1412ca642:
  if (plVar7 == (longlong *)0x0) goto LAB_1412ca772;
  if (DAT_14cba8288 == 0) {
    local_220 = &local_168;
    local_168 = FUN_141864c34;
    local_210 = FUN_14081d0ea;
    local_218 = (code *)&LAB_1464cee30;
    local_228 = &LAB_148bfac22;
    local_230 = (code *)&LAB_140f21842;
    local_238 = L"Game";
    local_240 = 0;
    local_248 = 0x10000004;
    local_250 = 0x10;
    local_258 = 0x9cd0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
  }
  iVar6 = *(int *)(DAT_14cba8288 + 0x38);
  if ((*(int *)(plVar7[2] + 0x38) < iVar6) ||
     (*(longlong *)(*(longlong *)(plVar7[2] + 0x30) + (longlong)iVar6 * 8) != DAT_14cba8288 + 0x30))
  {
    if (((param_1[4] != 0) &&
        (lVar9 = *(longlong *)(param_1[4] + 0x10), iVar6 <= *(int *)(lVar9 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)iVar6 * 8) == DAT_14cba8288 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_278);
    }
    goto LAB_1412ca772;
  }
  if (((char)plVar7[0x2f] != '\x03') && ((char)plVar7[0xd] != '\x03')) goto LAB_1412ca772;
  FUN_145841000(param_1);
  FUN_1466454cc(param_1);
  uVar10 = (**(code **)(*param_1 + 0x180))(param_1);
  FUN_1401d61d6(&local_168,uVar10);
  lVar9 = *(longlong *)local_168;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar9 + 0x48));
  *(int *)(lVar9 + 0x40) = *(int *)(lVar9 + 0x40) + 1;
  plVar12 = (longlong *)CONCAT44(uStack_15c,uStack_160);
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar18 = plVar12 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar14 = (int *)((longlong)plVar12 + 0xc);
      *piVar14 = *piVar14 + -1;
      UNLOCK();
      if (*piVar14 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  FUN_1466452f0(&local_168);
  lVar11 = FUN_1401e6dab(plVar7);
  if (lVar11 == 0) {
    local_138 = local_138 + 1;
    (**(code **)(plVar7[0x764] + 0x10))(plVar7 + 0x764);
    FUN_1410bb444(&local_170);
    local_1a8 = (code *)0x0;
    uStack_1a0 = (longlong *)0x0;
    plVar12 = local_170;
    if (param_1 != (longlong *)0x0) {
      uVar15 = *(uint *)((longlong)param_1 + 0xc);
      local_1a8 = (code *)(ulonglong)uVar15;
      if ((int)uVar15 < DAT_14c9647dc) {
        lVar11 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8);
      }
      else {
        lVar11 = 0;
      }
      iVar6 = *(int *)(lVar11 + 0x10);
      if (*(int *)(lVar11 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        iVar20 = DAT_14c964868 + 1;
        bVar21 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar21) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar20);
        }
        LOCK();
        iVar6 = *(int *)(lVar11 + 0x10);
        bVar21 = iVar6 == 0;
        if (bVar21) {
          *(int *)(lVar11 + 0x10) = iVar20;
          iVar6 = 0;
        }
        UNLOCK();
        uVar15 = (uint)local_1a8;
        if (bVar21) {
          iVar6 = iVar20;
        }
      }
      local_1a8._0_4_ = uVar15;
      local_1a8 = (code *)CONCAT44(iVar6,(uint)local_1a8);
      uStack_1a0 = local_170;
      plVar12 = uStack_1a0;
      if ((((((local_170 != (longlong *)0x0) && (iVar6 != 0)) && (-1 < (int)(uint)local_1a8)) &&
           (((int)(uint)local_1a8 < DAT_14c9647dc &&
            (plVar18 = (longlong *)
                       ((ulonglong)(((uint)local_1a8 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_1a8 >> 0x10) * 8)),
            plVar18 != (longlong *)0x0)))) && ((int)plVar18[2] == iVar6)) &&
         (((*(uint *)(plVar18 + 1) & 0x10200000) == 0 && (*plVar18 != 0)))) {
        FUN_1400796d0(*(undefined8 *)(*plVar18 + 0x10),local_170,1);
        plVar12 = uStack_1a0;
      }
    }
    uStack_1a0 = plVar12;
    FUN_14053c012(plVar7 + 0xfe5,&local_1a8);
  }
  else {
    if (local_bc == 0 || *(int *)(lVar11 + 0x394) != local_c0) {
      local_bc = local_bc + 1;
      local_c0 = *(int *)(lVar11 + 0x394);
    }
    lVar13 = param_1[4];
    if (lVar13 != 0) {
      if (DAT_14cba8288 == 0) {
        local_220 = (code **)&local_1a8;
        local_1a8 = FUN_141864c34;
        local_210 = FUN_14081d0ea;
        local_218 = (code *)&LAB_1464cee30;
        local_228 = &LAB_148bfac22;
        local_230 = (code *)&LAB_140f21842;
        local_238 = L"Game";
        local_240 = 0;
        local_248 = 0x10000004;
        local_250 = 0x10;
        local_258 = 0x9cd0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
      }
      if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar13 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
        FUN_1449ce79a(lVar13);
      }
    }
    local_1a8 = (code *)0x0;
    uStack_1a0 = (longlong *)0x0;
    local_f8 = local_f8 + 1;
    local_138 = local_138 + 1;
    FUN_141179052(lVar11,local_148,local_108,&local_1a8);
    plVar12 = uStack_1a0;
    if (uStack_1a0 != (longlong *)0x0) {
      LOCK();
      plVar18 = uStack_1a0 + 1;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      if ((int)*plVar18 == 0) {
        (**(code **)*uStack_1a0)(uStack_1a0);
        LOCK();
        piVar14 = (int *)((longlong)plVar12 + 0xc);
        *piVar14 = *piVar14 + -1;
        UNLOCK();
        if (*piVar14 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
  }
  lVar11 = FUN_140fe12e2(param_1,plVar7);
  if (lVar11 != 0) {
    if (local_50 == 0 || *(longlong *)(lVar11 + 0x744) != local_58) {
      local_50 = local_50 + 1;
      local_58 = *(longlong *)(lVar11 + 0x744);
    }
  }
  cVar2 = FUN_1449ce79a(plVar7);
  if (local_128 == 0 || local_130 != *(uint *)((longlong)plVar7 + 0xc)) {
    local_128 = local_128 + 1;
    local_130 = (ulonglong)*(uint *)((longlong)plVar7 + 0xc);
  }
  bVar21 = *(char *)((longlong)plVar7 + 0x73eb) == '\x01';
  if (local_114 == 0 || (bool)local_118 != bVar21) {
    local_114 = local_114 + 1;
    local_118 = bVar21;
  }
  bVar21 = *(char *)((longlong)plVar7 + 0x73ed) == '\x01';
  if (local_10c == 0 || (bool)local_110 != bVar21) {
    local_10c = local_10c + 1;
    local_110 = bVar21;
  }
  if (plVar7[0x7ee] != 0) {
    puVar1 = *(undefined4 **)(plVar7[0x7ee] + 8);
    puVar16 = &DAT_14c9485f0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar16 = puVar1;
    }
    local_1a8 = (code *)0x0;
    uStack_1a0 = (longlong *)0x0;
    FUN_1400b2348(puVar16,&local_1a8,1);
    if (1 < (int)uStack_1a0) {
      FUN_1407753c8(&local_1a8);
      uVar15 = (int)uStack_1a0 - 1;
      if ((int)uStack_1a0 == 0) {
        uVar15 = 0;
      }
      if (0 < (int)uVar15) {
        uVar19 = 0;
        do {
          *(ushort *)(local_1a8 + uVar19 * 2) =
               (ushort)(*(ushort *)(local_1a8 + uVar19 * 2) - 0x41 < 0x1a) * 0x20 +
               *(ushort *)(local_1a8 + uVar19 * 2);
          uVar19 = uVar19 + 1;
        } while (uVar15 != uVar19);
      }
      FUN_140775496(local_f0,&local_1a8);
    }
    if (local_1a8 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  bVar3 = *(byte *)((longlong)param_1 + 0x4d);
  if (local_ac == 0 || bVar3 != local_b0) {
    local_ac = local_ac + 1;
    local_b0 = bVar3;
  }
  if (bVar3 != 0) {
    FUN_148e4f946(local_f0,&DAT_14b9b2cc2);
    bVar3 = local_b0;
  }
  bVar4 = 0;
  if (cVar2 == '\0') {
    bVar4 = bVar3 ^ 1;
  }
  if (local_b4 == 0 || bVar4 != local_b8) {
    local_b4 = local_b4 + 1;
    local_b8 = bVar4;
  }
  if (DAT_14cb63950 == 0) {
    local_220 = (code **)&local_1a8;
    local_1a8 = FUN_144a7958c;
    local_210 = FUN_14081d0ea;
    local_218 = (code *)&LAB_1464ec72a;
    local_228 = &LAB_1486f5f75;
    local_230 = (code *)&LAB_140945686;
    local_238 = L"Engine";
    local_240 = 0;
    local_248 = 0x10000004;
    local_250 = 0x10;
    local_258 = 0x19d0;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkeletalMeshComponent",&DAT_14cb63950,FUN_1464fe8ee);
  }
  local_178 = DAT_14cb63950;
  if ((DAT_14cb63950 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  plVar12 = (longlong *)FUN_1478ba2e4(plVar7,&local_178);
  if (plVar12 == (longlong *)0x0) {
LAB_1412cae23:
    (**(code **)(*plVar7 + 0x718))(plVar7,&local_1a8);
    uVar22 = SUB84(local_1a8,0);
    uVar23 = (undefined4)((ulonglong)local_1a8 >> 0x20);
  }
  else {
    if (DAT_14cb63950 == 0) {
      local_220 = (code **)&local_1a8;
      local_1a8 = FUN_144a7958c;
      local_210 = FUN_14081d0ea;
      local_218 = (code *)&LAB_1464ec72a;
      local_228 = &LAB_1486f5f75;
      local_230 = (code *)&LAB_140945686;
      local_238 = L"Engine";
      local_240 = 0;
      local_248 = 0x10000004;
      local_250 = 0x10;
      local_258 = 0x19d0;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkeletalMeshComponent",&DAT_14cb63950,FUN_1464fe8ee);
    }
    if ((*(int *)(plVar12[2] + 0x38) < *(int *)(DAT_14cb63950 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(plVar12[2] + 0x30) + (longlong)*(int *)(DAT_14cb63950 + 0x38) * 8) !=
        DAT_14cb63950 + 0x30)) goto LAB_1412cae23;
    FUN_1446f470e(&local_180,L"FX_DamageUI",1);
    (**(code **)(*plVar12 + 0x4b0))(plVar12,&local_1a8,local_180);
    uVar22 = SUB84(local_1a8,0);
    uVar23 = (undefined4)((ulonglong)local_1a8 >> 0x20);
  }
  if (((double)CONCAT44(uVar23,uVar22) != (double)local_168) ||
     (NAN((double)CONCAT44(uVar23,uVar22)) || NAN((double)local_168))) {
LAB_1412cae66:
    local_168 = local_1a8;
    uStack_160 = (int)uStack_1a0;
    uStack_15c = uStack_1a0._4_4_;
    local_150 = local_150 + 1;
  }
  else if ((((double)uStack_1a0 != (double)CONCAT44(uStack_15c,uStack_160)) ||
           (((NAN((double)uStack_1a0) || NAN((double)CONCAT44(uStack_15c,uStack_160)) ||
             ((double)CONCAT44(uStack_194,local_198) != local_158)) ||
            (NAN((double)CONCAT44(uStack_194,local_198)) || NAN(local_158))))) || (local_150 == 0))
  goto LAB_1412cae66;
  if (cVar2 == '\0') {
    if ((local_b0 == 1) && (*(char *)((longlong)param_1 + 0x4e) == '\0')) {
      if ((local_9c == 0 | local_a0) == 1) {
        local_a0 = 0;
        local_9c = local_9c + 1;
      }
    }
    else {
      uStack_194 = 0;
      uStack_190 = 0;
      uStack_18c = 0;
      uStack_188 = 0;
      uStack_184 = 0;
      local_1a8 = (code *)(ulonglong)*(uint *)((longlong)plVar7 + 0xc);
      uStack_1a0 = (longlong *)CONCAT44(uStack_1a0._4_4_,1);
      lVar11 = FUN_145f79862(param_1);
      if ((lVar11 == 0) ||
         ((lVar13 = FUN_14086c98e(plVar7), lVar13 == 0 ||
          (cVar5 = (**(code **)(*(longlong *)(lVar13 + 0x30) + 0x10))(lVar13 + 0x30), cVar5 == '\0')
          ))) {
        *(undefined1 *)((longlong)param_1 + 0xd1) = 1;
      }
      else {
        FUN_1403adc5e(&local_1b8,lVar11);
        plVar12 = (longlong *)(lVar9 + 0x30);
        local_198 = *(int *)(lVar9 + 0x38);
        lVar11 = (longlong)local_198;
        if (0 < lVar11) {
          piVar14 = (int *)*plVar12;
          lVar17 = 0;
          do {
            if (*piVar14 == -1) {
              local_198 = (int)lVar17;
              goto LAB_1412cb054;
            }
            lVar17 = lVar17 + 1;
            piVar14 = piVar14 + 1;
          } while (lVar11 != lVar17);
        }
        *(uint *)(lVar9 + 0x38) = local_198 + 1U;
        if (*(uint *)(lVar9 + 0x3c) < local_198 + 1U) {
          FUN_1446f48e2(plVar12,local_198);
        }
        piVar14 = (int *)(lVar11 * 4 + *plVar12);
LAB_1412cb054:
        lVar11 = local_1b8;
        *piVar14 = 0;
        if (*(int *)(lVar9 + 0x38) < 5) {
          uStack_194 = 1;
          switch(local_198) {
          case 0:
            lVar17 = *(longlong *)(local_1b8 + 0x5c0);
            AcquireSRWLockExclusive((PSRWLOCK)(lVar17 + 0x168));
            *(int *)(lVar17 + 0x160) = *(int *)(lVar17 + 0x160) + 1;
            local_200 = (longlong *)0x0;
            FUN_140dcb3f2(lVar17,0,1);
            ReleaseSRWLockExclusive((PSRWLOCK)(lVar17 + 0x168));
            local_1c8 = *(undefined8 *)(lVar11 + 0x5c0);
            local_1c0 = *(longlong *)(lVar11 + 0x5c8);
            if (local_1c0 != 0) {
              LOCK();
              *(int *)(local_1c0 + 0xc) = *(int *)(local_1c0 + 0xc) + 1;
              UNLOCK();
              local_200 = (longlong *)CONCAT44(uStack_184,uStack_188);
              lVar11 = local_1b8;
            }
            (**(code **)(*(longlong *)(lVar13 + 0x48) + 0x10))
                      ((longlong *)(lVar13 + 0x48),&local_1c8);
            uStack_190 = (undefined4)*(undefined8 *)(lVar11 + 0x5c0);
            uStack_18c = (undefined4)((ulonglong)*(undefined8 *)(lVar11 + 0x5c0) >> 0x20);
            plVar12 = *(longlong **)(lVar11 + 0x5c8);
            break;
          case 1:
            lVar17 = *(longlong *)(local_1b8 + 0x5d0);
            AcquireSRWLockExclusive((PSRWLOCK)(lVar17 + 0x168));
            *(int *)(lVar17 + 0x160) = *(int *)(lVar17 + 0x160) + 1;
            local_200 = (longlong *)0x0;
            FUN_140dcb3f2(lVar17,0,1);
            ReleaseSRWLockExclusive((PSRWLOCK)(lVar17 + 0x168));
            local_1d8 = *(undefined8 *)(lVar11 + 0x5d0);
            local_1d0 = *(longlong *)(lVar11 + 0x5d8);
            if (local_1d0 != 0) {
              LOCK();
              *(int *)(local_1d0 + 0xc) = *(int *)(local_1d0 + 0xc) + 1;
              UNLOCK();
              local_200 = (longlong *)CONCAT44(uStack_184,uStack_188);
              lVar11 = local_1b8;
            }
            (**(code **)(*(longlong *)(lVar13 + 0x48) + 0x10))
                      ((longlong *)(lVar13 + 0x48),&local_1d8);
            uStack_190 = (undefined4)*(undefined8 *)(lVar11 + 0x5d0);
            uStack_18c = (undefined4)((ulonglong)*(undefined8 *)(lVar11 + 0x5d0) >> 0x20);
            plVar12 = *(longlong **)(lVar11 + 0x5d8);
            break;
          case 2:
            lVar17 = *(longlong *)(local_1b8 + 0x5e0);
            AcquireSRWLockExclusive((PSRWLOCK)(lVar17 + 0x168));
            *(int *)(lVar17 + 0x160) = *(int *)(lVar17 + 0x160) + 1;
            local_200 = (longlong *)0x0;
            FUN_140dcb3f2(lVar17,0,1);
            ReleaseSRWLockExclusive((PSRWLOCK)(lVar17 + 0x168));
            local_1e8 = *(undefined8 *)(lVar11 + 0x5e0);
            local_1e0 = *(longlong *)(lVar11 + 0x5e8);
            if (local_1e0 != 0) {
              LOCK();
              *(int *)(local_1e0 + 0xc) = *(int *)(local_1e0 + 0xc) + 1;
              UNLOCK();
              local_200 = (longlong *)CONCAT44(uStack_184,uStack_188);
              lVar11 = local_1b8;
            }
            (**(code **)(*(longlong *)(lVar13 + 0x48) + 0x10))
                      ((longlong *)(lVar13 + 0x48),&local_1e8);
            uStack_190 = (undefined4)*(undefined8 *)(lVar11 + 0x5e0);
            uStack_18c = (undefined4)((ulonglong)*(undefined8 *)(lVar11 + 0x5e0) >> 0x20);
            plVar12 = *(longlong **)(lVar11 + 0x5e8);
            break;
          case 3:
            lVar17 = *(longlong *)(local_1b8 + 0x5f0);
            AcquireSRWLockExclusive((PSRWLOCK)(lVar17 + 0x168));
            *(int *)(lVar17 + 0x160) = *(int *)(lVar17 + 0x160) + 1;
            local_200 = (longlong *)0x0;
            FUN_140dcb3f2(lVar17,0,1);
            ReleaseSRWLockExclusive((PSRWLOCK)(lVar17 + 0x168));
            local_1f8 = *(undefined8 *)(lVar11 + 0x5f0);
            local_1f0 = *(longlong *)(lVar11 + 0x5f8);
            if (local_1f0 != 0) {
              LOCK();
              *(int *)(local_1f0 + 0xc) = *(int *)(local_1f0 + 0xc) + 1;
              UNLOCK();
              local_200 = (longlong *)CONCAT44(uStack_184,uStack_188);
              lVar11 = local_1b8;
            }
            (**(code **)(*(longlong *)(lVar13 + 0x48) + 0x10))
                      ((longlong *)(lVar13 + 0x48),&local_1f8);
            uStack_190 = (undefined4)*(undefined8 *)(lVar11 + 0x5f0);
            uStack_18c = (undefined4)((ulonglong)*(undefined8 *)(lVar11 + 0x5f0) >> 0x20);
            plVar12 = *(longlong **)(lVar11 + 0x5f8);
            break;
          default:
            goto switchD_1412cb0b4_default;
          }
          if (local_200 != plVar12) {
            if (plVar12 != (longlong *)0x0) {
              LOCK();
              *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
              UNLOCK();
              local_200 = (longlong *)CONCAT44(uStack_184,uStack_188);
            }
            if (local_200 != (longlong *)0x0) {
              LOCK();
              piVar14 = (int *)((longlong)local_200 + 0xc);
              *piVar14 = *piVar14 + -1;
              UNLOCK();
              if (*piVar14 == 0) {
                (**(code **)(*local_200 + 0x10))();
              }
            }
            uStack_188 = SUB84(plVar12,0);
            uStack_184 = (undefined4)((ulonglong)plVar12 >> 0x20);
          }
        }
        else {
          *(undefined4 *)(lVar9 + 0x38) = 4;
          FUN_14479f406(plVar12);
          local_198 = -1;
          uStack_194 = 1;
        }
switchD_1412cb0b4_default:
        if (local_1b0 != (longlong *)0x0) {
          LOCK();
          plVar12 = local_1b0 + 1;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)*plVar12 == 0) {
            (**(code **)*local_1b0)(local_1b0);
            LOCK();
            piVar14 = (int *)((longlong)local_1b0 + 0xc);
            *piVar14 = *piVar14 + -1;
            UNLOCK();
            if (*piVar14 == 0) {
              (**(code **)(*local_1b0 + 0x10))(local_1b0);
            }
          }
        }
        FUN_148e4f9a4(lVar9 + 0x18,&local_1a8);
        plVar12 = (longlong *)CONCAT44(uStack_184,uStack_188);
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          piVar14 = (int *)((longlong)plVar12 + 0xc);
          *piVar14 = *piVar14 + -1;
          UNLOCK();
          if (*piVar14 == 0) {
            (**(code **)(*plVar12 + 0x10))();
          }
        }
      }
    }
  }
  *(char *)(param_1 + 0x1a) = cVar2;
  FUN_145d45072(lVar9,&local_168);
  lVar11 = param_1[4];
  if (lVar11 != 0) {
    if (DAT_14cba8288 == 0) {
      local_220 = (code **)&local_1a8;
      local_1a8 = FUN_141864c34;
      local_210 = FUN_14081d0ea;
      local_218 = (code *)&LAB_1464cee30;
      local_228 = &LAB_148bfac22;
      local_230 = (code *)&LAB_140f21842;
      local_238 = L"Game";
      local_240 = 0;
      local_248 = 0x10000004;
      local_250 = 0x10;
      local_258 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
      FUN_1449ce79a(lVar11);
    }
  }
  FUN_1457f6b38(&local_168);
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar9 + 0x48));
LAB_1412ca772:
  if ((local_48 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412cbb62 FUN_1412cbb62 body=135 status=ok
// SIG undefined FUN_1412cbb62(void)

undefined8 * FUN_1412cbb62(undefined8 *param_1)

{
  undefined1 auStack_48 [36];
  undefined1 local_24 [4];
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_LAB_14a1c91e0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  FUN_140e67e35();
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c9a7fa0);
  local_20 = param_1;
  FUN_140e680e8(&DAT_14c9a7fc8,local_24,&local_20,0);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c9a7fa0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412cbbea FUN_1412cbbea body=432 status=ok
// SIG undefined FUN_1412cbbea(void)

void FUN_1412cbbea(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  undefined1 local_19;
  undefined7 uStack_18;
  undefined1 uStack_11;
  
  uStack_18 = (undefined7)(DAT_14c707940 ^ (ulonglong)auStack_68);
  uStack_11 = (undefined1)((DAT_14c707940 ^ (ulonglong)auStack_68) >> 0x38);
  local_19 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_140a4831c;
      local_48 = 0x1000000008001;
      local_40 = 0;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x6e0))(param_1,local_19);
  if ((CONCAT17(uStack_11,uStack_18) ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412cbd9c FUN_1412cbd9c body=185 status=ok
// SIG undefined FUN_1412cbd9c(void)

void FUN_1412cbd9c(longlong param_1,char param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(char *)(param_1 + 0x178) != '\x03') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x1640);
  if (cVar1 != param_2) {
    *(char *)(param_1 + 0x1641) = cVar1;
    if (param_2 == '\x01') {
      FUN_1400bc96c(param_1 + 0x1738,&DAT_14cb714d8);
      *(undefined1 *)(param_1 + 0x1760) = *(undefined1 *)(param_1 + 0x1738);
    }
    else {
      if (cVar1 == '\x01') {
        FUN_1400bc8c2(param_1 + 0x1738,&DAT_14cb714d8);
        *(undefined1 *)(param_1 + 0x1760) = *(undefined1 *)(param_1 + 0x1738);
      }
      if (param_2 == '\x04') {
        FUN_145841f3c(param_1 + 0x1768);
        *(undefined8 *)(param_1 + 0x1808) = DAT_14c8464f0;
        uVar4 = DAT_14c8464e8._4_4_;
        uVar3 = (undefined4)DAT_14c8464e8;
        uVar2 = DAT_14c8464e0._4_4_;
        *(undefined4 *)(param_1 + 0x17f8) = (undefined4)DAT_14c8464e0;
        *(undefined4 *)(param_1 + 0x17fc) = uVar2;
        *(undefined4 *)(param_1 + 0x1800) = uVar3;
        *(undefined4 *)(param_1 + 0x1804) = uVar4;
      }
    }
  }
  *(char *)(param_1 + 0x1640) = param_2;
  FUN_1412133fc(param_1);
  return;
}



// FUNCTION 1412cbe56 FUN_1412cbe56 body=184 status=ok
// SIG undefined FUN_1412cbe56(void)

void FUN_1412cbe56(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0xf8);
  if ((lVar1 != 0) && (*(int *)(lVar1 + 0x20) != 0)) {
    puVar2 = *(undefined8 **)(lVar1 + 0x18);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      param_2 = 0;
      FUN_1446efa72((longlong *)(lVar1 + 0x18),0,0,0x10);
      *(undefined4 *)(lVar1 + 0x20) = 0;
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x108);
  if ((lVar1 != 0) && (*(int *)(lVar1 + 0x20) != 0)) {
    puVar2 = *(undefined8 **)(lVar1 + 0x18);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      param_2 = 0;
      FUN_1446efa72((longlong *)(lVar1 + 0x18),0,0,0x10);
      *(undefined4 *)(lVar1 + 0x20) = 0;
    }
  }
  if ((*(char *)(param_1 + 0x161) == '\x01') && (*(longlong *)(param_1 + 0x108) != 0)) {
    uVar3 = CONCAT71((int7)((ulonglong)param_2 >> 8),
                     *(undefined1 *)(*(longlong *)(param_1 + 0x108) + 0x28)) & 0xffffffffffffff02;
    uVar4 = CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 >> 1);
  }
  else {
    uVar4 = 0;
  }
  FUN_1458a00a0(param_1,uVar4);
  return;
}



// FUNCTION 1412cbf0e FUN_1412cbf0e body=3 status=ok
// SIG undefined FUN_1412cbf0e(void)

undefined1 FUN_1412cbf0e(undefined1 *param_1)

{
  return *param_1;
}



// FUNCTION 1412cbf12 FUN_1412cbf12 body=136 status=ok
// SIG undefined FUN_1412cbf12(void)

longlong FUN_1412cbf12(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    local_48 = *param_1;
    FUN_1446dcdd4(local_40);
    if (DAT_14cbd33b0 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_144837462(DAT_14cbd33b0,local_40);
    }
    if (local_28 != 0) {
      FUN_1400020a8();
    }
    param_1[2] = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412cbf9c FUN_1412cbf9c body=527 status=ok
// SIG undefined FUN_1412cbf9c(void)

undefined8 * FUN_1412cbf9c(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != (longlong *)0x0) {
    if (DAT_14cb652c0 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_1427b09ee;
      local_48 = &LAB_148715fe1;
      local_50 = FUN_146508b0f;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkillOwner",&DAT_14cb652c0,&DAT_148715fe0);
    }
    plVar1 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,DAT_14cb652c0);
    if (plVar1 != (longlong *)0x0) {
      if (DAT_14cb652c0 == 0) {
        local_40 = &local_20;
        local_20 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_1427b09ee;
        local_48 = &LAB_148715fe1;
        local_50 = FUN_146508b0f;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10004001;
        local_70 = 8;
        local_78 = 0x28;
        FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkillOwner",&DAT_14cb652c0,&DAT_148715fe0);
      }
      plVar2 = (longlong *)FUN_144718840(plVar1,DAT_14cb652c0);
      if ((plVar1 != plVar2) && (plVar2 != (longlong *)0x0)) {
        uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
        FUN_1406eea98(uVar3,param_1,&DAT_14cbd3378);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1412cc1ac FUN_1412cc1ac body=491 status=ok
// SIG undefined FUN_1412cc1ac(void)

undefined8 *
FUN_1412cc1ac(undefined8 param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar6 = param_3[1];
  if (lVar6 == 0) {
    uVar5 = FUN_1406eea5e();
    lVar6 = FUN_14477b664(uVar5);
    param_3[1] = lVar6;
  }
  if (param_3[2] == 0) {
    if ((*param_3 != 0) && (lVar6 != 0)) {
      plVar3 = *(longlong **)(lVar6 + 0xb8);
      if (plVar3 != (longlong *)0x0) {
        cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3);
        if (cVar4 != '\0') {
          uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
          lVar6 = FUN_144aff482(uVar5,param_3);
          param_3[2] = lVar6;
          if (lVar6 != 0) goto LAB_1412cc2c4;
          goto LAB_1412cc1f0;
        }
      }
      param_3[2] = 0;
    }
LAB_1412cc1f0:
    *param_2 = 0;
  }
  else {
LAB_1412cc2c4:
    FUN_1406eed88(param_1,&local_50,param_3,1);
    if (local_50 == 0) {
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_48 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
      goto LAB_1412cc1f0;
    }
    local_40 = 0;
    local_38 = 0;
    FUN_1458a03fa(&local_40,param_4);
    FUN_1458a069a(local_50 + 0x38,param_2,&local_40);
    FUN_1449db362(&local_40);
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_48 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  if ((int)param_4[1] != 0) {
    puVar2 = (undefined8 *)*param_4;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1412cc205;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(param_4,0,0,0x10);
    *(undefined4 *)(param_4 + 1) = 0;
  }
  if (*param_4 != 0) {
    FUN_1400020a8();
  }
LAB_1412cc205:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412cc398 thunk_FUN_1403159fa body=5 status=ok
// SIG undefined thunk_FUN_1403159fa(void)

void thunk_FUN_1403159fa(undefined8 *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_98 [32];
  undefined1 **ppuStack_78;
  undefined1 *apuStack_68 [2];
  undefined ***pppuStack_58;
  undefined **ppuStack_48;
  undefined8 *puStack_40;
  ulonglong uStack_28;
  
  uStack_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = &PTR_FUN_14adafe70;
  puVar3 = (undefined8 *)param_1[5];
  param_1[5] = 0;
  if (puVar3 == (undefined8 *)0x0) goto LAB_140315b33;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_140315a57;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_140315a5c;
      goto LAB_140315a89;
    }
LAB_140315a5c:
    puVar9 = (undefined8 *)*puVar3;
    puVar17 = puVar3;
LAB_140315a62:
    (*(code *)*puVar9)(puVar17,1);
  }
  else {
LAB_140315a57:
    if (iVar6 == 0x10) goto LAB_140315a5c;
LAB_140315a89:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
      goto LAB_140315a5c;
      if (iVar6 == 1) {
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        if (DVar7 == DVar8) goto LAB_140315a5c;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar9 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar11 = (uint *)*puVar9;
      if (puVar11 != (uint *)0x0) goto LAB_140315bfc;
      while( true ) {
        uVar13 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar13 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar13 | 1;
          __tlregdtor(&LAB_143a091f0);
        }
        lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar10 = *(undefined4 **)(lVar4 + 0x310);
        *(undefined8 *)(lVar4 + 0x310) = 0;
        if (puVar10 == (undefined4 *)0x0) {
          puVar10 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar10 = 0xffffffff;
        *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
        puVar10[0x12] = 0;
        *puVar9 = puVar10;
        FUN_140217a48(puVar9);
        puVar11 = (uint *)*puVar9;
LAB_140315bfc:
        puVar17 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar17 + 0x16);
        uVar13 = puVar11[0x12];
        if (puVar15 <= puVar11 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
          LOCK();
          uVar2 = *puVar11;
          *puVar11 = *puVar11 + uVar13 + 1;
          UNLOCK();
          if ((uVar2 ^ uVar13) != 0xffffffff) break;
          puVar11 = (uint *)*puVar9;
          *puVar11 = 0xffffffff;
          *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
          puVar11[0x12] = 0;
          *puVar9 = puVar11;
          puVar17 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar17 + 0x16);
          uVar13 = 0;
          if (puVar15 <= puVar11 + 0x4000) {
            uVar13 = 1;
            goto LAB_140315c7c;
          }
        }
      }
      uVar13 = uVar13 + 1;
LAB_140315c7c:
      *(uint **)(puVar11 + 0x10) = puVar15;
      puVar11[0x12] = uVar13;
      iVar6 = 0;
      FUN_1447247dc(puVar17,0);
      *puVar17 = &PTR_FUN_14adbc2c0;
      puVar17[0x15] = puVar3;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar13 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
          uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
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
      if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
      }
      puVar17[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar17[9] = puVar17;
      puVar17[10] = puVar17;
      lVar4 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar4 == 0) {
        uVar5 = 1;
        if ((char)uVar16 != '\x06') {
          uVar5 = uVar16;
        }
        uVar16 = uVar5;
        uVar12 = 0;
      }
      else {
        if ((char)uVar16 == '\x06') {
          uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
        }
        uVar12 = *(undefined8 *)(lVar4 + 0x30);
      }
      puVar17[0xf] = uVar12;
      puVar17[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar17 + 0x1c) = iVar6;
      if (puVar17 == (undefined8 *)0x0) {
        apuStack_68[0] = (undefined1 *)CONCAT71(apuStack_68[0]._1_7_,1);
        FUN_1447439e4(0);
        goto LAB_140315b20;
      }
      LOCK();
      *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
      UNLOCK();
      apuStack_68[0] = (undefined1 *)CONCAT71(apuStack_68[0]._1_7_,1);
      FUN_1447439e4(puVar17);
      LOCK();
      piVar1 = (int *)(puVar17 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) goto LAB_140315b20;
      puVar9 = (undefined8 *)*puVar17;
      goto LAB_140315a62;
    }
    ppuStack_78 = apuStack_68;
    pppuStack_58 = (undefined ***)0x0;
    ppuStack_48 = &PTR_LAB_14adbc280;
    apuStack_68[0] = &LAB_143a0cb80;
    puStack_40 = puVar3;
    FUN_14005a792(&DAT_14ca9a440,L"FDeleteProxyRT",&DAT_14cb3ad18);
    if (apuStack_68[0] != (undefined1 *)0x0) {
      pppuVar14 = pppuStack_58;
      if (pppuStack_58 == (undefined ***)0x0) {
        pppuVar14 = &ppuStack_48;
      }
      (*(code *)(*pppuVar14)[2])();
    }
  }
LAB_140315b20:
  puVar3 = (undefined8 *)param_1[5];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
LAB_140315b33:
  FUN_144760e82(param_1);
  if ((uStack_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412cc39e FUN_1412cc39e body=32 status=ok
// SIG undefined FUN_1412cc39e(void)

undefined8 FUN_1412cc39e(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(longlong *)(param_1 + 0x88) != 0) && (*(longlong **)(param_1 + 0x90) != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001412cc3b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x10))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 1412cc3be FUN_1412cc3be body=95 status=ok
// SIG undefined FUN_1412cc3be(void)

void FUN_1412cc3be(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    if (*(float *)(*(longlong *)(param_1 + 0x20) + 0x178) <= 0.0) {
      return;
    }
    cVar1 = FUN_1458a0dfe(param_1 + 0x20,*(undefined8 *)(param_1 + 0x30));
    if (cVar1 != '\0') {
      FUN_1458a0e62(param_1,param_2);
      return;
    }
  }
  FUN_1458a0ec8(param_1,param_2);
  return;
}



// FUNCTION 1412cc41e FUN_1412cc41e body=380 status=ok
// SIG undefined FUN_1412cc41e(void)

undefined4 *
FUN_1412cc41e(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[2] = param_5;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar1 = DAT_14c8407a8;
  FUN_140002266(&local_40,L"gbx.TickerManager.Priority.%s",param_2);
  puVar2 = local_40;
  if (local_38 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  local_48 = 0;
  (**(code **)(*plVar1 + 0x38))
            (plVar1,puVar2,param_1,L"Base priority, higher priority executes first.");
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140002266(&local_40,L"gbx.TickerManager.MaxSkips.%s",param_2);
  puVar2 = local_40;
  if (local_38 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  local_48 = 0;
  (**(code **)(*plVar1 + 0x38))
            (plVar1,puVar2,param_1 + 1,
             L"Max number of times the ticker may be skipped. If <0, ticker cannot be skipped but its execution counts against the frame budget."
            );
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140002266(&local_40,L"gbx.TickerManager.FrameBudgetMs.%s",param_2);
  puVar2 = local_40;
  if (local_38 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  local_48 = 0;
  (**(code **)(*plVar1 + 0x30))
            (plVar1,puVar2,param_1 + 2,L"Frame budget in ms for an individual tickable.");
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1412cc59c FUN_1412cc59c body=268 status=ok
// SIG undefined FUN_1412cc59c(void)

longlong * FUN_1412cc59c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  byte bVar8;
  longlong lVar9;
  
  lVar9 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar9 = *param_2;
    }
  }
  bVar8 = DAT_14c950c29;
  *param_1 = lVar9;
  lVar9 = param_2[1];
  if ((bVar8 & 1) != 0) {
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar9 = param_2[1];
      bVar8 = DAT_14c950c29;
    }
  }
  param_1[1] = lVar9;
  lVar9 = param_2[2];
  *(undefined4 *)((longlong)param_1 + 0x13) = *(undefined4 *)((longlong)param_2 + 0x13);
  *(int *)(param_1 + 2) = (int)lVar9;
  lVar9 = param_2[3];
  if ((bVar8 & 1) != 0) {
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar9 = param_2[3];
    }
  }
  param_1[3] = lVar9;
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x24);
  lVar9 = param_2[5];
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(int *)(param_1 + 4) = (int)param_2[4];
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar5;
  *(int *)(param_1 + 5) = (int)lVar9;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar6;
  lVar9 = param_2[6];
  lVar3 = param_2[7];
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_1[7];
  param_1[6] = lVar9;
  param_1[7] = lVar3;
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
  lVar9 = param_2[8];
  lVar3 = param_2[9];
  uVar7 = *(undefined8 *)((longlong)param_2 + 0x54);
  *(undefined8 *)((longlong)param_1 + 0x4c) = *(undefined8 *)((longlong)param_2 + 0x4c);
  *(undefined8 *)((longlong)param_1 + 0x54) = uVar7;
  param_1[8] = lVar9;
  param_1[9] = lVar3;
  return param_1;
}



// FUNCTION 1412cc6a8 FUN_1412cc6a8 body=89 status=ok
// SIG undefined FUN_1412cc6a8(void)

void FUN_1412cc6a8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 *local_20;
  undefined8 local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = &local_28;
  local_28 = param_2;
  local_18 = param_3;
  FUN_141369852(param_1 + 0x2b8,local_c,&local_20,0);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412cc702 FUN_1412cc702 body=257 status=ok
// SIG undefined FUN_1412cc702(void)

void FUN_1412cc702(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 *local_40;
  longlong **local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = param_2;
  plVar4 = (longlong *)FUN_14001cc68(0x2f0,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149eeb530;
  FUN_140e9ea3a(plVar4 + 2,param_3);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_40 = &local_48;
  local_38 = &local_58;
  local_58 = plVar4 + 2;
  local_50 = plVar4;
  FUN_141030890(param_1 + 0x30,local_2c,&local_40,0);
  plVar3 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
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
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412cc804 FUN_1412cc804 body=196 status=ok
// SIG undefined FUN_1412cc804(void)

undefined8 *
FUN_1412cc804(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined2 *puVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = DAT_14c84635c;
  if (*(int *)(param_2 + 1) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = (undefined2 *)*param_2;
  }
  FUN_1446f470e(&local_40,puVar1,1);
  local_68 = &local_38;
  local_70 = param_5;
  local_50 = 0;
  local_58 = 0;
  local_78 = 0;
  local_60 = param_4;
  FUN_1412ce282(param_1,1,local_40,param_3);
  *param_1 = &PTR_FUN_149eeb478;
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412cc8ca FUN_1412cc8ca body=2432 status=ok
// SIG undefined FUN_1412cc8ca(void)

longlong FUN_1412cc8ca(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
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
  undefined4 uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  
  uVar5 = *(undefined4 *)(param_2 + 0x18);
  uVar6 = *(undefined4 *)(param_2 + 0x1c);
  uVar7 = *(undefined4 *)(param_2 + 0x20);
  uVar8 = *(undefined4 *)(param_2 + 0x24);
  uVar9 = *(undefined4 *)(param_2 + 0x28);
  uVar10 = *(undefined4 *)(param_2 + 0x2c);
  uVar11 = *(undefined4 *)(param_2 + 0x30);
  uVar12 = *(undefined4 *)(param_2 + 0x34);
  uVar13 = *(undefined4 *)(param_2 + 0x3c);
  uVar14 = *(undefined4 *)(param_2 + 0x40);
  uVar15 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = uVar13;
  *(undefined4 *)(param_1 + 0x40) = uVar14;
  *(undefined4 *)(param_1 + 0x44) = uVar15;
  *(undefined4 *)(param_1 + 0x28) = uVar9;
  *(undefined4 *)(param_1 + 0x2c) = uVar10;
  *(undefined4 *)(param_1 + 0x30) = uVar11;
  *(undefined4 *)(param_1 + 0x34) = uVar12;
  *(undefined4 *)(param_1 + 0x18) = uVar5;
  *(undefined4 *)(param_1 + 0x1c) = uVar6;
  *(undefined4 *)(param_1 + 0x20) = uVar7;
  *(undefined4 *)(param_1 + 0x24) = uVar8;
  lVar16 = *(longlong *)(param_2 + 0x48);
  if (DAT_14c950c29 == '\x01') {
    if (lVar16 == 0) {
      lVar16 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar16 = *(longlong *)(param_2 + 0x48);
    }
  }
  *(longlong *)(param_1 + 0x48) = lVar16;
  puVar17 = (undefined8 *)(param_2 + 0x50);
  puVar18 = (undefined8 *)(param_1 + 0x50);
  for (lVar16 = 10; lVar16 != 0; lVar16 = lVar16 + -1) {
    *puVar18 = *puVar17;
    puVar17 = puVar17 + 1;
    puVar18 = puVar18 + 1;
  }
  *(undefined1 *)(param_1 + 0xa4) = *(undefined1 *)(param_2 + 0xa4);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  uVar3 = *(undefined8 *)(param_2 + 0xa8);
  lVar16 = *(longlong *)(param_2 + 0xb0);
  if (lVar16 != 0) {
    LOCK();
    *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xa8) = uVar3;
  *(longlong *)(param_1 + 0xb0) = lVar16;
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
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  uVar5 = *(undefined4 *)(param_2 + 200);
  uVar6 = *(undefined4 *)(param_2 + 0xcc);
  uVar7 = *(undefined4 *)(param_2 + 0xd0);
  uVar8 = *(undefined4 *)(param_2 + 0xd4);
  uVar9 = *(undefined4 *)(param_2 + 0xd8);
  uVar10 = *(undefined4 *)(param_2 + 0xdc);
  uVar11 = *(undefined4 *)(param_2 + 0xe0);
  uVar12 = *(undefined4 *)(param_2 + 0xe4);
  uVar13 = *(undefined4 *)(param_2 + 0xec);
  uVar14 = *(undefined4 *)(param_2 + 0xf0);
  uVar15 = *(undefined4 *)(param_2 + 0xf4);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
  *(undefined4 *)(param_1 + 0xec) = uVar13;
  *(undefined4 *)(param_1 + 0xf0) = uVar14;
  *(undefined4 *)(param_1 + 0xf4) = uVar15;
  *(undefined4 *)(param_1 + 0xd8) = uVar9;
  *(undefined4 *)(param_1 + 0xdc) = uVar10;
  *(undefined4 *)(param_1 + 0xe0) = uVar11;
  *(undefined4 *)(param_1 + 0xe4) = uVar12;
  *(undefined4 *)(param_1 + 200) = uVar5;
  *(undefined4 *)(param_1 + 0xcc) = uVar6;
  *(undefined4 *)(param_1 + 0xd0) = uVar7;
  *(undefined4 *)(param_1 + 0xd4) = uVar8;
  lVar16 = *(longlong *)(param_2 + 0xf8);
  if (DAT_14c950c29 == '\x01') {
    if (lVar16 == 0) {
      lVar16 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar16 = *(longlong *)(param_2 + 0xf8);
    }
  }
  *(longlong *)(param_1 + 0xf8) = lVar16;
  puVar17 = (undefined8 *)(param_2 + 0x100);
  puVar18 = (undefined8 *)(param_1 + 0x100);
  for (lVar16 = 10; lVar16 != 0; lVar16 = lVar16 + -1) {
    *puVar18 = *puVar17;
    puVar17 = puVar17 + 1;
    puVar18 = puVar18 + 1;
  }
  *(undefined1 *)(param_1 + 0x154) = *(undefined1 *)(param_2 + 0x154);
  *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_2 + 0x150);
  uVar3 = *(undefined8 *)(param_2 + 0x158);
  lVar16 = *(longlong *)(param_2 + 0x160);
  if (lVar16 != 0) {
    LOCK();
    *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x160);
  *(undefined8 *)(param_1 + 0x158) = uVar3;
  *(longlong *)(param_1 + 0x160) = lVar16;
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
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_2 + 0x168);
  uVar5 = *(undefined4 *)(param_2 + 0x178);
  uVar6 = *(undefined4 *)(param_2 + 0x17c);
  uVar7 = *(undefined4 *)(param_2 + 0x180);
  uVar8 = *(undefined4 *)(param_2 + 0x184);
  uVar9 = *(undefined4 *)(param_2 + 0x188);
  uVar10 = *(undefined4 *)(param_2 + 0x18c);
  uVar11 = *(undefined4 *)(param_2 + 400);
  uVar12 = *(undefined4 *)(param_2 + 0x194);
  uVar13 = *(undefined4 *)(param_2 + 0x19c);
  uVar14 = *(undefined4 *)(param_2 + 0x1a0);
  uVar15 = *(undefined4 *)(param_2 + 0x1a4);
  *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_2 + 0x198);
  *(undefined4 *)(param_1 + 0x19c) = uVar13;
  *(undefined4 *)(param_1 + 0x1a0) = uVar14;
  *(undefined4 *)(param_1 + 0x1a4) = uVar15;
  *(undefined4 *)(param_1 + 0x188) = uVar9;
  *(undefined4 *)(param_1 + 0x18c) = uVar10;
  *(undefined4 *)(param_1 + 400) = uVar11;
  *(undefined4 *)(param_1 + 0x194) = uVar12;
  *(undefined4 *)(param_1 + 0x178) = uVar5;
  *(undefined4 *)(param_1 + 0x17c) = uVar6;
  *(undefined4 *)(param_1 + 0x180) = uVar7;
  *(undefined4 *)(param_1 + 0x184) = uVar8;
  lVar16 = *(longlong *)(param_2 + 0x1a8);
  if (DAT_14c950c29 == '\x01') {
    if (lVar16 == 0) {
      lVar16 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar16 = *(longlong *)(param_2 + 0x1a8);
    }
  }
  *(longlong *)(param_1 + 0x1a8) = lVar16;
  puVar17 = (undefined8 *)(param_2 + 0x1b0);
  puVar18 = (undefined8 *)(param_1 + 0x1b0);
  for (lVar16 = 10; lVar16 != 0; lVar16 = lVar16 + -1) {
    *puVar18 = *puVar17;
    puVar17 = puVar17 + 1;
    puVar18 = puVar18 + 1;
  }
  *(undefined1 *)(param_1 + 0x204) = *(undefined1 *)(param_2 + 0x204);
  *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_2 + 0x200);
  uVar3 = *(undefined8 *)(param_2 + 0x208);
  lVar16 = *(longlong *)(param_2 + 0x210);
  if (lVar16 != 0) {
    LOCK();
    *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x210);
  *(undefined8 *)(param_1 + 0x208) = uVar3;
  *(longlong *)(param_1 + 0x210) = lVar16;
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
  *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)(param_2 + 0x218);
  uVar5 = *(undefined4 *)(param_2 + 0x228);
  uVar6 = *(undefined4 *)(param_2 + 0x22c);
  uVar7 = *(undefined4 *)(param_2 + 0x230);
  uVar8 = *(undefined4 *)(param_2 + 0x234);
  uVar9 = *(undefined4 *)(param_2 + 0x238);
  uVar10 = *(undefined4 *)(param_2 + 0x23c);
  uVar11 = *(undefined4 *)(param_2 + 0x240);
  uVar12 = *(undefined4 *)(param_2 + 0x244);
  uVar13 = *(undefined4 *)(param_2 + 0x24c);
  uVar14 = *(undefined4 *)(param_2 + 0x250);
  uVar15 = *(undefined4 *)(param_2 + 0x254);
  *(undefined4 *)(param_1 + 0x248) = *(undefined4 *)(param_2 + 0x248);
  *(undefined4 *)(param_1 + 0x24c) = uVar13;
  *(undefined4 *)(param_1 + 0x250) = uVar14;
  *(undefined4 *)(param_1 + 0x254) = uVar15;
  *(undefined4 *)(param_1 + 0x238) = uVar9;
  *(undefined4 *)(param_1 + 0x23c) = uVar10;
  *(undefined4 *)(param_1 + 0x240) = uVar11;
  *(undefined4 *)(param_1 + 0x244) = uVar12;
  *(undefined4 *)(param_1 + 0x228) = uVar5;
  *(undefined4 *)(param_1 + 0x22c) = uVar6;
  *(undefined4 *)(param_1 + 0x230) = uVar7;
  *(undefined4 *)(param_1 + 0x234) = uVar8;
  lVar16 = *(longlong *)(param_2 + 600);
  if (DAT_14c950c29 == '\x01') {
    if (lVar16 == 0) {
      lVar16 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar16 = *(longlong *)(param_2 + 600);
    }
  }
  *(longlong *)(param_1 + 600) = lVar16;
  puVar17 = (undefined8 *)(param_2 + 0x260);
  puVar18 = (undefined8 *)(param_1 + 0x260);
  for (lVar16 = 10; lVar16 != 0; lVar16 = lVar16 + -1) {
    *puVar18 = *puVar17;
    puVar17 = puVar17 + 1;
    puVar18 = puVar18 + 1;
  }
  *(undefined1 *)(param_1 + 0x2b4) = *(undefined1 *)(param_2 + 0x2b4);
  *(undefined4 *)(param_1 + 0x2b0) = *(undefined4 *)(param_2 + 0x2b0);
  uVar3 = *(undefined8 *)(param_2 + 0x2b8);
  lVar16 = *(longlong *)(param_2 + 0x2c0);
  if (lVar16 != 0) {
    LOCK();
    *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x2c0);
  *(undefined8 *)(param_1 + 0x2b8) = uVar3;
  *(longlong *)(param_1 + 0x2c0) = lVar16;
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
  *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(param_2 + 0x2c8);
  uVar5 = *(undefined4 *)(param_2 + 0x2d8);
  uVar6 = *(undefined4 *)(param_2 + 0x2dc);
  uVar7 = *(undefined4 *)(param_2 + 0x2e0);
  uVar8 = *(undefined4 *)(param_2 + 0x2e4);
  uVar9 = *(undefined4 *)(param_2 + 0x2e8);
  uVar10 = *(undefined4 *)(param_2 + 0x2ec);
  uVar11 = *(undefined4 *)(param_2 + 0x2f0);
  uVar12 = *(undefined4 *)(param_2 + 0x2f4);
  uVar13 = *(undefined4 *)(param_2 + 0x2fc);
  uVar14 = *(undefined4 *)(param_2 + 0x300);
  uVar15 = *(undefined4 *)(param_2 + 0x304);
  *(undefined4 *)(param_1 + 0x2f8) = *(undefined4 *)(param_2 + 0x2f8);
  *(undefined4 *)(param_1 + 0x2fc) = uVar13;
  *(undefined4 *)(param_1 + 0x300) = uVar14;
  *(undefined4 *)(param_1 + 0x304) = uVar15;
  *(undefined4 *)(param_1 + 0x2e8) = uVar9;
  *(undefined4 *)(param_1 + 0x2ec) = uVar10;
  *(undefined4 *)(param_1 + 0x2f0) = uVar11;
  *(undefined4 *)(param_1 + 0x2f4) = uVar12;
  *(undefined4 *)(param_1 + 0x2d8) = uVar5;
  *(undefined4 *)(param_1 + 0x2dc) = uVar6;
  *(undefined4 *)(param_1 + 0x2e0) = uVar7;
  *(undefined4 *)(param_1 + 0x2e4) = uVar8;
  lVar16 = *(longlong *)(param_2 + 0x308);
  if (DAT_14c950c29 == '\x01') {
    if (lVar16 == 0) {
      lVar16 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar16 = *(longlong *)(param_2 + 0x308);
    }
  }
  *(longlong *)(param_1 + 0x308) = lVar16;
  puVar17 = (undefined8 *)(param_2 + 0x310);
  puVar18 = (undefined8 *)(param_1 + 0x310);
  for (lVar16 = 10; lVar16 != 0; lVar16 = lVar16 + -1) {
    *puVar18 = *puVar17;
    puVar17 = puVar17 + 1;
    puVar18 = puVar18 + 1;
  }
  *(undefined1 *)(param_1 + 0x364) = *(undefined1 *)(param_2 + 0x364);
  *(undefined4 *)(param_1 + 0x360) = *(undefined4 *)(param_2 + 0x360);
  uVar3 = *(undefined8 *)(param_2 + 0x368);
  lVar16 = *(longlong *)(param_2 + 0x370);
  if (lVar16 != 0) {
    LOCK();
    *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x370);
  *(undefined8 *)(param_1 + 0x368) = uVar3;
  *(longlong *)(param_1 + 0x370) = lVar16;
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
  *(undefined8 *)(param_1 + 0x378) = *(undefined8 *)(param_2 + 0x378);
  uVar5 = *(undefined4 *)(param_2 + 0x388);
  uVar6 = *(undefined4 *)(param_2 + 0x38c);
  uVar7 = *(undefined4 *)(param_2 + 0x390);
  uVar8 = *(undefined4 *)(param_2 + 0x394);
  uVar9 = *(undefined4 *)(param_2 + 0x398);
  uVar10 = *(undefined4 *)(param_2 + 0x39c);
  uVar11 = *(undefined4 *)(param_2 + 0x3a0);
  uVar12 = *(undefined4 *)(param_2 + 0x3a4);
  uVar13 = *(undefined4 *)(param_2 + 0x3ac);
  uVar14 = *(undefined4 *)(param_2 + 0x3b0);
  uVar15 = *(undefined4 *)(param_2 + 0x3b4);
  *(undefined4 *)(param_1 + 0x3a8) = *(undefined4 *)(param_2 + 0x3a8);
  *(undefined4 *)(param_1 + 0x3ac) = uVar13;
  *(undefined4 *)(param_1 + 0x3b0) = uVar14;
  *(undefined4 *)(param_1 + 0x3b4) = uVar15;
  *(undefined4 *)(param_1 + 0x398) = uVar9;
  *(undefined4 *)(param_1 + 0x39c) = uVar10;
  *(undefined4 *)(param_1 + 0x3a0) = uVar11;
  *(undefined4 *)(param_1 + 0x3a4) = uVar12;
  *(undefined4 *)(param_1 + 0x388) = uVar5;
  *(undefined4 *)(param_1 + 0x38c) = uVar6;
  *(undefined4 *)(param_1 + 0x390) = uVar7;
  *(undefined4 *)(param_1 + 0x394) = uVar8;
  lVar16 = *(longlong *)(param_2 + 0x3b8);
  if (DAT_14c950c29 == '\x01') {
    if (lVar16 == 0) {
      lVar16 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar16 = *(longlong *)(param_2 + 0x3b8);
    }
  }
  *(longlong *)(param_1 + 0x3b8) = lVar16;
  puVar17 = (undefined8 *)(param_2 + 0x3c0);
  puVar18 = (undefined8 *)(param_1 + 0x3c0);
  for (lVar16 = 10; lVar16 != 0; lVar16 = lVar16 + -1) {
    *puVar18 = *puVar17;
    puVar17 = puVar17 + 1;
    puVar18 = puVar18 + 1;
  }
  *(undefined1 *)(param_1 + 0x414) = *(undefined1 *)(param_2 + 0x414);
  *(undefined4 *)(param_1 + 0x410) = *(undefined4 *)(param_2 + 0x410);
  uVar3 = *(undefined8 *)(param_2 + 0x418);
  lVar16 = *(longlong *)(param_2 + 0x420);
  if (lVar16 != 0) {
    LOCK();
    *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x420);
  *(undefined8 *)(param_1 + 0x418) = uVar3;
  *(longlong *)(param_1 + 0x420) = lVar16;
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
  *(undefined8 *)(param_1 + 0x428) = *(undefined8 *)(param_2 + 0x428);
  uVar5 = *(undefined4 *)(param_2 + 0x438);
  uVar6 = *(undefined4 *)(param_2 + 0x43c);
  uVar7 = *(undefined4 *)(param_2 + 0x440);
  uVar8 = *(undefined4 *)(param_2 + 0x444);
  uVar9 = *(undefined4 *)(param_2 + 0x448);
  uVar10 = *(undefined4 *)(param_2 + 0x44c);
  uVar11 = *(undefined4 *)(param_2 + 0x450);
  uVar12 = *(undefined4 *)(param_2 + 0x454);
  uVar13 = *(undefined4 *)(param_2 + 0x45c);
  uVar14 = *(undefined4 *)(param_2 + 0x460);
  uVar15 = *(undefined4 *)(param_2 + 0x464);
  *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_2 + 0x458);
  *(undefined4 *)(param_1 + 0x45c) = uVar13;
  *(undefined4 *)(param_1 + 0x460) = uVar14;
  *(undefined4 *)(param_1 + 0x464) = uVar15;
  *(undefined4 *)(param_1 + 0x448) = uVar9;
  *(undefined4 *)(param_1 + 0x44c) = uVar10;
  *(undefined4 *)(param_1 + 0x450) = uVar11;
  *(undefined4 *)(param_1 + 0x454) = uVar12;
  *(undefined4 *)(param_1 + 0x438) = uVar5;
  *(undefined4 *)(param_1 + 0x43c) = uVar6;
  *(undefined4 *)(param_1 + 0x440) = uVar7;
  *(undefined4 *)(param_1 + 0x444) = uVar8;
  lVar16 = *(longlong *)(param_2 + 0x468);
  if (DAT_14c950c29 == '\x01') {
    if (lVar16 == 0) {
      lVar16 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar16 = *(longlong *)(param_2 + 0x468);
    }
  }
  *(longlong *)(param_1 + 0x468) = lVar16;
  puVar17 = (undefined8 *)(param_2 + 0x470);
  puVar18 = (undefined8 *)(param_1 + 0x470);
  for (lVar16 = 10; lVar16 != 0; lVar16 = lVar16 + -1) {
    *puVar18 = *puVar17;
    puVar17 = puVar17 + 1;
    puVar18 = puVar18 + 1;
  }
  *(undefined1 *)(param_1 + 0x4c4) = *(undefined1 *)(param_2 + 0x4c4);
  *(undefined4 *)(param_1 + 0x4c0) = *(undefined4 *)(param_2 + 0x4c0);
  uVar3 = *(undefined8 *)(param_2 + 0x4c8);
  lVar16 = *(longlong *)(param_2 + 0x4d0);
  if (lVar16 != 0) {
    LOCK();
    *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x4d0);
  *(undefined8 *)(param_1 + 0x4c8) = uVar3;
  *(longlong *)(param_1 + 0x4d0) = lVar16;
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
  *(undefined8 *)(param_1 + 0x4d8) = *(undefined8 *)(param_2 + 0x4d8);
  uVar5 = *(undefined4 *)(param_2 + 0x4e8);
  uVar6 = *(undefined4 *)(param_2 + 0x4ec);
  uVar7 = *(undefined4 *)(param_2 + 0x4f0);
  uVar8 = *(undefined4 *)(param_2 + 0x4f4);
  uVar9 = *(undefined4 *)(param_2 + 0x4f8);
  uVar10 = *(undefined4 *)(param_2 + 0x4fc);
  uVar11 = *(undefined4 *)(param_2 + 0x500);
  uVar12 = *(undefined4 *)(param_2 + 0x504);
  uVar13 = *(undefined4 *)(param_2 + 0x50c);
  uVar14 = *(undefined4 *)(param_2 + 0x510);
  uVar15 = *(undefined4 *)(param_2 + 0x514);
  *(undefined4 *)(param_1 + 0x508) = *(undefined4 *)(param_2 + 0x508);
  *(undefined4 *)(param_1 + 0x50c) = uVar13;
  *(undefined4 *)(param_1 + 0x510) = uVar14;
  *(undefined4 *)(param_1 + 0x514) = uVar15;
  *(undefined4 *)(param_1 + 0x4f8) = uVar9;
  *(undefined4 *)(param_1 + 0x4fc) = uVar10;
  *(undefined4 *)(param_1 + 0x500) = uVar11;
  *(undefined4 *)(param_1 + 0x504) = uVar12;
  *(undefined4 *)(param_1 + 0x4e8) = uVar5;
  *(undefined4 *)(param_1 + 0x4ec) = uVar6;
  *(undefined4 *)(param_1 + 0x4f0) = uVar7;
  *(undefined4 *)(param_1 + 0x4f4) = uVar8;
  lVar16 = *(longlong *)(param_2 + 0x518);
  if (DAT_14c950c29 == '\x01') {
    if (lVar16 == 0) {
      lVar16 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar16 = *(longlong *)(param_2 + 0x518);
    }
  }
  *(longlong *)(param_1 + 0x518) = lVar16;
  puVar17 = (undefined8 *)(param_2 + 0x520);
  puVar18 = (undefined8 *)(param_1 + 0x520);
  for (lVar16 = 10; lVar16 != 0; lVar16 = lVar16 + -1) {
    *puVar18 = *puVar17;
    puVar17 = puVar17 + 1;
    puVar18 = puVar18 + 1;
  }
  *(undefined1 *)(param_1 + 0x574) = *(undefined1 *)(param_2 + 0x574);
  *(undefined4 *)(param_1 + 0x570) = *(undefined4 *)(param_2 + 0x570);
  uVar3 = *(undefined8 *)(param_2 + 0x578);
  lVar16 = *(longlong *)(param_2 + 0x580);
  if (lVar16 != 0) {
    LOCK();
    *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x580);
  *(undefined8 *)(param_1 + 0x578) = uVar3;
  *(longlong *)(param_1 + 0x580) = lVar16;
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
  *(undefined8 *)(param_1 + 0x588) = *(undefined8 *)(param_2 + 0x588);
  uVar5 = *(undefined4 *)(param_2 + 0x598);
  uVar6 = *(undefined4 *)(param_2 + 0x59c);
  uVar7 = *(undefined4 *)(param_2 + 0x5a0);
  uVar8 = *(undefined4 *)(param_2 + 0x5a4);
  uVar9 = *(undefined4 *)(param_2 + 0x5a8);
  uVar10 = *(undefined4 *)(param_2 + 0x5ac);
  uVar11 = *(undefined4 *)(param_2 + 0x5b0);
  uVar12 = *(undefined4 *)(param_2 + 0x5b4);
  uVar13 = *(undefined4 *)(param_2 + 0x5bc);
  uVar14 = *(undefined4 *)(param_2 + 0x5c0);
  uVar15 = *(undefined4 *)(param_2 + 0x5c4);
  *(undefined4 *)(param_1 + 0x5b8) = *(undefined4 *)(param_2 + 0x5b8);
  *(undefined4 *)(param_1 + 0x5bc) = uVar13;
  *(undefined4 *)(param_1 + 0x5c0) = uVar14;
  *(undefined4 *)(param_1 + 0x5c4) = uVar15;
  *(undefined4 *)(param_1 + 0x5a8) = uVar9;
  *(undefined4 *)(param_1 + 0x5ac) = uVar10;
  *(undefined4 *)(param_1 + 0x5b0) = uVar11;
  *(undefined4 *)(param_1 + 0x5b4) = uVar12;
  *(undefined4 *)(param_1 + 0x598) = uVar5;
  *(undefined4 *)(param_1 + 0x59c) = uVar6;
  *(undefined4 *)(param_1 + 0x5a0) = uVar7;
  *(undefined4 *)(param_1 + 0x5a4) = uVar8;
  lVar16 = *(longlong *)(param_2 + 0x5c8);
  if (DAT_14c950c29 == '\x01') {
    if (lVar16 == 0) {
      lVar16 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar16 = *(longlong *)(param_2 + 0x5c8);
    }
  }
  *(longlong *)(param_1 + 0x5c8) = lVar16;
  puVar17 = (undefined8 *)(param_2 + 0x5d0);
  puVar18 = (undefined8 *)(param_1 + 0x5d0);
  for (lVar16 = 10; lVar16 != 0; lVar16 = lVar16 + -1) {
    *puVar18 = *puVar17;
    puVar17 = puVar17 + 1;
    puVar18 = puVar18 + 1;
  }
  *(undefined1 *)(param_1 + 0x624) = *(undefined1 *)(param_2 + 0x624);
  *(undefined4 *)(param_1 + 0x620) = *(undefined4 *)(param_2 + 0x620);
  uVar3 = *(undefined8 *)(param_2 + 0x628);
  lVar16 = *(longlong *)(param_2 + 0x630);
  if (lVar16 != 0) {
    LOCK();
    *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x630);
  *(undefined8 *)(param_1 + 0x628) = uVar3;
  *(longlong *)(param_1 + 0x630) = lVar16;
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
  *(undefined8 *)(param_1 + 0x638) = *(undefined8 *)(param_2 + 0x638);
  *(undefined4 *)(param_1 + 0x640) = *(undefined4 *)(param_2 + 0x640);
  return param_1;
}



// FUNCTION 1412cd24a FUN_1412cd24a body=1162 status=ok
// SIG undefined FUN_1412cd24a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1412cd24a(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_448 [32];
  undefined **local_428;
  undefined4 local_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined4 local_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined4 local_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  longlong local_3f0;
  undefined8 local_3e8 [10];
  undefined4 local_398;
  undefined1 local_394;
  undefined8 local_390;
  longlong *local_388;
  undefined8 local_380;
  longlong local_378;
  longlong local_370;
  longlong local_360;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined8 local_348;
  longlong *local_340;
  undefined8 local_338;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined1 local_318 [8];
  longlong local_310;
  longlong local_308;
  longlong local_2f8;
  undefined4 local_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined8 local_2e0;
  longlong *local_2d8;
  undefined8 uStack_2d0;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined8 local_2b0;
  undefined1 *puStack_2a8;
  undefined2 local_2a0;
  undefined8 local_284;
  undefined8 uStack_27c;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 local_260;
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  longlong local_220;
  undefined8 local_218 [10];
  undefined4 local_1c8;
  undefined1 local_1c4;
  undefined8 local_1c0;
  longlong *local_1b8;
  undefined8 local_1b0;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_448;
  *param_1 = &PTR_FUN_149ee3380;
  FUN_140ca8f8e(param_1 + 2);
  FUN_140ca8f8e(param_1 + 0x18);
  FUN_140ca8f8e(param_1 + 0x2e);
  FUN_140ca8f8e(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0x5a) = 0x40800000;
  *(undefined4 *)((longlong)param_1 + 0x2d4) = 0x40000000;
  *(undefined4 *)(param_1 + 0x5b) = 0x40800000;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = 0x40000000;
  FUN_140a581a0(local_318);
  FUN_1412cd6d6(&local_378,9);
  if (DAT_14c950c29 == 1) {
    if (local_378 == 0) {
      local_378 = 0;
    }
    else {
      FUN_1456cec3c();
    }
  }
  local_310 = local_378;
  if ((DAT_14c950c29 & 1) != 0) {
    if (local_370 == 0) {
      local_370 = 0;
    }
    else {
      FUN_1456cec3c();
    }
  }
  local_308 = local_370;
  if ((DAT_14c950c29 & 1) != 0) {
    if (local_360 == 0) {
      local_360 = 0;
    }
    else {
      FUN_1456cec3c();
    }
  }
  plVar1 = local_2d8;
  local_2f0 = local_358;
  uStack_2ec = uStack_354;
  uStack_2e8 = uStack_350;
  uStack_2e4 = uStack_34c;
  if (local_340 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_340 + 1) = (int)local_340[1] + 1;
    UNLOCK();
  }
  local_2e0 = local_348;
  local_2d8 = local_340;
  local_2f8 = local_360;
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
  uStack_2c0 = uStack_328;
  uStack_2bc = uStack_324;
  uStack_2b8 = uStack_320;
  uStack_2d0 = local_338;
  local_2b0 = 0x3f800000;
  puStack_2a8 = &DAT_3f8000003f800000;
  local_2a0 = 2;
  local_284 = _DAT_14c98da84;
  uStack_27c = uRam000000014c98da8c;
  local_274 = DAT_14c98da94;
  local_270 = _DAT_14c98da98;
  uStack_26c = uRam000000014c98da9c;
  uStack_268 = uRam000000014c98daa0;
  uStack_264 = uRam000000014c98daa4;
  local_260 = DAT_14c98daa8;
  FUN_1411bc404(&local_428,&DAT_14c98daac);
  local_250 = local_420;
  uStack_24c = uStack_41c;
  uStack_248 = uStack_418;
  uStack_244 = uStack_414;
  local_240 = local_410;
  uStack_23c = uStack_40c;
  uStack_238 = uStack_408;
  uStack_234 = uStack_404;
  local_230 = local_400;
  uStack_22c = uStack_3fc;
  uStack_228 = uStack_3f8;
  uStack_224 = uStack_3f4;
  if (DAT_14c950c29 == 1) {
    if (local_3f0 == 0) {
      local_3f0 = 0;
    }
    else {
      FUN_1456cec3c();
    }
  }
  local_220 = local_3f0;
  puVar5 = local_3e8;
  puVar6 = local_218;
  for (lVar4 = 10; plVar1 = local_1b8, lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  local_1c8 = local_398;
  local_1c4 = local_394;
  if (local_388 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_388 + 1) = (int)local_388[1] + 1;
    UNLOCK();
  }
  local_1c0 = local_390;
  local_1b8 = local_388;
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
  local_1b0 = local_380;
  FUN_140e9ea3a(param_1 + 0x5c);
  local_428 = &PTR_FUN_149ed05f0;
  if (local_388 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_388 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_388)(local_388);
      LOCK();
      piVar3 = (int *)((longlong)local_388 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_388 + 0x10))(local_388);
      }
    }
  }
  if (local_340 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_340 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_340)(local_340);
      LOCK();
      piVar3 = (int *)((longlong)local_340 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_340 + 0x10))(local_340);
      }
    }
  }
  FUN_140e9e952(local_318);
  param_1[0xb8] = 0x3f800000;
  param_1[0xb9] = &DAT_3f8000003f800000;
  *(undefined2 *)(param_1 + 0xba) = 2;
  *(undefined1 **)((longlong)param_1 + 0x5d4) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)param_1 + 0x5dc) = &DAT_3f8000003f800000;
  *(undefined1 *)((longlong)param_1 + 0x5e4) = 0;
  param_1[0xbd] = 0x3f800000;
  param_1[0xbe] = &DAT_3f8000003f800000;
  *(undefined2 *)(param_1 + 0xbf) = 2;
  *(undefined8 *)((longlong)param_1 + 0x5fc) = 0x3f800000;
  *(undefined1 **)((longlong)param_1 + 0x604) = &DAT_3f8000003f800000;
  *(undefined2 *)((longlong)param_1 + 0x60c) = 2;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  FUN_1412cd7de(param_1 + 0xc6);
  if ((local_30 ^ (ulonglong)auStack_448) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412cd6d6 FUN_1412cd6d6 body=263 status=ok
// SIG undefined FUN_1412cd6d6(void)

undefined8 FUN_1412cd6d6(undefined8 param_1,ushort param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined1 local_58 [8];
  undefined4 local_50;
  undefined3 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = 0;
  local_50 = 0;
  uStack_4c = 0;
  local_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0x3f800000;
  FUN_1446f470e(local_58,L"Regular",1);
  uVar3 = FUN_1412ce748();
  FUN_1412ce8e2(uVar3,&local_78);
  local_68 = local_78;
  local_60 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_70 + 1) = (int)local_70[1] + 1;
    UNLOCK();
  }
  local_88 = &local_50;
  FUN_1412ce660(param_1,&local_68,(float)param_2,local_58);
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
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412cd7de FUN_1412cd7de body=2594 status=ok
// SIG undefined FUN_1412cd7de(void)

undefined8 * FUN_1412cd7de(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_108 [40];
  undefined8 local_e0;
  undefined **local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  longlong local_a0;
  undefined8 local_98 [10];
  undefined4 local_48;
  undefined1 local_44;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *param_1 = &PTR_FUN_149ee3430;
  local_e0 = DAT_14c84635c;
  FUN_1412ce202(&local_d8);
  param_1[2] = &PTR_FUN_149ed05f0;
  *(undefined4 *)(param_1 + 3) = local_d0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_cc;
  *(undefined4 *)(param_1 + 4) = uStack_c8;
  *(undefined4 *)((longlong)param_1 + 0x24) = uStack_c4;
  *(undefined4 *)(param_1 + 5) = local_c0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_bc;
  *(undefined4 *)(param_1 + 6) = uStack_b8;
  *(undefined4 *)((longlong)param_1 + 0x34) = uStack_b4;
  *(undefined4 *)(param_1 + 7) = local_b0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_ac;
  *(undefined4 *)(param_1 + 8) = uStack_a8;
  *(undefined4 *)((longlong)param_1 + 0x44) = uStack_a4;
  param_1[9] = local_a0;
  if ((local_a0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  plVar2 = local_38;
  puVar5 = local_98;
  puVar6 = param_1 + 10;
  for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined1 *)((longlong)param_1 + 0xa4) = local_44;
  *(undefined4 *)(param_1 + 0x14) = local_48;
  param_1[0x15] = local_40;
  param_1[0x16] = local_38;
  if (local_38 == (longlong *)0x0) {
    param_1[0x17] = local_30;
  }
  else {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    param_1[0x17] = local_30;
    local_d8 = &PTR_FUN_149ed05f0;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
  }
  local_e0 = DAT_14c84635c;
  FUN_1412ce202(&local_d8);
  param_1[0x18] = &PTR_FUN_149ed05f0;
  *(undefined4 *)(param_1 + 0x19) = local_d0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = uStack_cc;
  *(undefined4 *)(param_1 + 0x1a) = uStack_c8;
  *(undefined4 *)((longlong)param_1 + 0xd4) = uStack_c4;
  *(undefined4 *)(param_1 + 0x1b) = local_c0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = uStack_bc;
  *(undefined4 *)(param_1 + 0x1c) = uStack_b8;
  *(undefined4 *)((longlong)param_1 + 0xe4) = uStack_b4;
  *(undefined4 *)(param_1 + 0x1d) = local_b0;
  *(undefined4 *)((longlong)param_1 + 0xec) = uStack_ac;
  *(undefined4 *)(param_1 + 0x1e) = uStack_a8;
  *(undefined4 *)((longlong)param_1 + 0xf4) = uStack_a4;
  param_1[0x1f] = local_a0;
  if ((local_a0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  plVar2 = local_38;
  puVar5 = local_98;
  puVar6 = param_1 + 0x20;
  for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x154) = local_44;
  *(undefined4 *)(param_1 + 0x2a) = local_48;
  param_1[0x2b] = local_40;
  param_1[0x2c] = local_38;
  if (local_38 == (longlong *)0x0) {
    param_1[0x2d] = local_30;
  }
  else {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    param_1[0x2d] = local_30;
    local_d8 = &PTR_FUN_149ed05f0;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
  }
  local_e0 = DAT_14c84635c;
  FUN_1412ce202(&local_d8);
  param_1[0x2e] = &PTR_FUN_149ed05f0;
  *(undefined4 *)(param_1 + 0x2f) = local_d0;
  *(undefined4 *)((longlong)param_1 + 0x17c) = uStack_cc;
  *(undefined4 *)(param_1 + 0x30) = uStack_c8;
  *(undefined4 *)((longlong)param_1 + 0x184) = uStack_c4;
  *(undefined4 *)(param_1 + 0x31) = local_c0;
  *(undefined4 *)((longlong)param_1 + 0x18c) = uStack_bc;
  *(undefined4 *)(param_1 + 0x32) = uStack_b8;
  *(undefined4 *)((longlong)param_1 + 0x194) = uStack_b4;
  *(undefined4 *)(param_1 + 0x33) = local_b0;
  *(undefined4 *)((longlong)param_1 + 0x19c) = uStack_ac;
  *(undefined4 *)(param_1 + 0x34) = uStack_a8;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = uStack_a4;
  param_1[0x35] = local_a0;
  if ((local_a0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  plVar2 = local_38;
  puVar5 = local_98;
  puVar6 = param_1 + 0x36;
  for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x204) = local_44;
  *(undefined4 *)(param_1 + 0x40) = local_48;
  param_1[0x41] = local_40;
  param_1[0x42] = local_38;
  if (local_38 == (longlong *)0x0) {
    param_1[0x43] = local_30;
  }
  else {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    param_1[0x43] = local_30;
    local_d8 = &PTR_FUN_149ed05f0;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
  }
  local_e0 = DAT_14c84635c;
  FUN_1412ce202(&local_d8);
  param_1[0x44] = &PTR_FUN_149ed05f0;
  *(undefined4 *)(param_1 + 0x45) = local_d0;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uStack_cc;
  *(undefined4 *)(param_1 + 0x46) = uStack_c8;
  *(undefined4 *)((longlong)param_1 + 0x234) = uStack_c4;
  *(undefined4 *)(param_1 + 0x47) = local_c0;
  *(undefined4 *)((longlong)param_1 + 0x23c) = uStack_bc;
  *(undefined4 *)(param_1 + 0x48) = uStack_b8;
  *(undefined4 *)((longlong)param_1 + 0x244) = uStack_b4;
  *(undefined4 *)(param_1 + 0x49) = local_b0;
  *(undefined4 *)((longlong)param_1 + 0x24c) = uStack_ac;
  *(undefined4 *)(param_1 + 0x4a) = uStack_a8;
  *(undefined4 *)((longlong)param_1 + 0x254) = uStack_a4;
  param_1[0x4b] = local_a0;
  if ((local_a0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  plVar2 = local_38;
  puVar5 = local_98;
  puVar6 = param_1 + 0x4c;
  for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x2b4) = local_44;
  *(undefined4 *)(param_1 + 0x56) = local_48;
  param_1[0x57] = local_40;
  param_1[0x58] = local_38;
  if (local_38 == (longlong *)0x0) {
    param_1[0x59] = local_30;
  }
  else {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    param_1[0x59] = local_30;
    local_d8 = &PTR_FUN_149ed05f0;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
  }
  local_e0 = DAT_14c84635c;
  FUN_1412ce202(&local_d8);
  param_1[0x5a] = &PTR_FUN_149ed05f0;
  *(undefined4 *)(param_1 + 0x5b) = local_d0;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_cc;
  *(undefined4 *)(param_1 + 0x5c) = uStack_c8;
  *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_c4;
  *(undefined4 *)(param_1 + 0x5d) = local_c0;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = uStack_bc;
  *(undefined4 *)(param_1 + 0x5e) = uStack_b8;
  *(undefined4 *)((longlong)param_1 + 0x2f4) = uStack_b4;
  *(undefined4 *)(param_1 + 0x5f) = local_b0;
  *(undefined4 *)((longlong)param_1 + 0x2fc) = uStack_ac;
  *(undefined4 *)(param_1 + 0x60) = uStack_a8;
  *(undefined4 *)((longlong)param_1 + 0x304) = uStack_a4;
  param_1[0x61] = local_a0;
  if ((local_a0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  plVar2 = local_38;
  puVar5 = local_98;
  puVar6 = param_1 + 0x62;
  for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x364) = local_44;
  *(undefined4 *)(param_1 + 0x6c) = local_48;
  param_1[0x6d] = local_40;
  param_1[0x6e] = local_38;
  if (local_38 == (longlong *)0x0) {
    param_1[0x6f] = local_30;
  }
  else {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    param_1[0x6f] = local_30;
    local_d8 = &PTR_FUN_149ed05f0;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
  }
  local_e0 = DAT_14c84635c;
  FUN_1412ce202(&local_d8);
  param_1[0x70] = &PTR_FUN_149ed05f0;
  *(undefined4 *)(param_1 + 0x71) = local_d0;
  *(undefined4 *)((longlong)param_1 + 0x38c) = uStack_cc;
  *(undefined4 *)(param_1 + 0x72) = uStack_c8;
  *(undefined4 *)((longlong)param_1 + 0x394) = uStack_c4;
  *(undefined4 *)(param_1 + 0x73) = local_c0;
  *(undefined4 *)((longlong)param_1 + 0x39c) = uStack_bc;
  *(undefined4 *)(param_1 + 0x74) = uStack_b8;
  *(undefined4 *)((longlong)param_1 + 0x3a4) = uStack_b4;
  *(undefined4 *)(param_1 + 0x75) = local_b0;
  *(undefined4 *)((longlong)param_1 + 0x3ac) = uStack_ac;
  *(undefined4 *)(param_1 + 0x76) = uStack_a8;
  *(undefined4 *)((longlong)param_1 + 0x3b4) = uStack_a4;
  param_1[0x77] = local_a0;
  if ((local_a0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  plVar2 = local_38;
  puVar5 = local_98;
  puVar6 = param_1 + 0x78;
  for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x414) = local_44;
  *(undefined4 *)(param_1 + 0x82) = local_48;
  param_1[0x83] = local_40;
  param_1[0x84] = local_38;
  if (local_38 == (longlong *)0x0) {
    param_1[0x85] = local_30;
  }
  else {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    param_1[0x85] = local_30;
    local_d8 = &PTR_FUN_149ed05f0;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
  }
  local_e0 = DAT_14c84635c;
  FUN_1412ce202(&local_d8);
  param_1[0x86] = &PTR_FUN_149ed05f0;
  *(undefined4 *)(param_1 + 0x87) = local_d0;
  *(undefined4 *)((longlong)param_1 + 0x43c) = uStack_cc;
  *(undefined4 *)(param_1 + 0x88) = uStack_c8;
  *(undefined4 *)((longlong)param_1 + 0x444) = uStack_c4;
  *(undefined4 *)(param_1 + 0x89) = local_c0;
  *(undefined4 *)((longlong)param_1 + 0x44c) = uStack_bc;
  *(undefined4 *)(param_1 + 0x8a) = uStack_b8;
  *(undefined4 *)((longlong)param_1 + 0x454) = uStack_b4;
  *(undefined4 *)(param_1 + 0x8b) = local_b0;
  *(undefined4 *)((longlong)param_1 + 0x45c) = uStack_ac;
  *(undefined4 *)(param_1 + 0x8c) = uStack_a8;
  *(undefined4 *)((longlong)param_1 + 0x464) = uStack_a4;
  param_1[0x8d] = local_a0;
  if ((local_a0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  plVar2 = local_38;
  puVar5 = local_98;
  puVar6 = param_1 + 0x8e;
  for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x4c4) = local_44;
  *(undefined4 *)(param_1 + 0x98) = local_48;
  param_1[0x99] = local_40;
  param_1[0x9a] = local_38;
  if (local_38 == (longlong *)0x0) {
    param_1[0x9b] = local_30;
  }
  else {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    param_1[0x9b] = local_30;
    local_d8 = &PTR_FUN_149ed05f0;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
  }
  local_e0 = DAT_14c84635c;
  FUN_1412ce202(&local_d8);
  param_1[0x9c] = &PTR_FUN_149ed05f0;
  *(undefined4 *)(param_1 + 0x9d) = local_d0;
  *(undefined4 *)((longlong)param_1 + 0x4ec) = uStack_cc;
  *(undefined4 *)(param_1 + 0x9e) = uStack_c8;
  *(undefined4 *)((longlong)param_1 + 0x4f4) = uStack_c4;
  *(undefined4 *)(param_1 + 0x9f) = local_c0;
  *(undefined4 *)((longlong)param_1 + 0x4fc) = uStack_bc;
  *(undefined4 *)(param_1 + 0xa0) = uStack_b8;
  *(undefined4 *)((longlong)param_1 + 0x504) = uStack_b4;
  *(undefined4 *)(param_1 + 0xa1) = local_b0;
  *(undefined4 *)((longlong)param_1 + 0x50c) = uStack_ac;
  *(undefined4 *)(param_1 + 0xa2) = uStack_a8;
  *(undefined4 *)((longlong)param_1 + 0x514) = uStack_a4;
  param_1[0xa3] = local_a0;
  if ((local_a0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  plVar2 = local_38;
  puVar5 = local_98;
  puVar6 = param_1 + 0xa4;
  for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x574) = local_44;
  *(undefined4 *)(param_1 + 0xae) = local_48;
  param_1[0xaf] = local_40;
  param_1[0xb0] = local_38;
  if (local_38 == (longlong *)0x0) {
    param_1[0xb1] = local_30;
  }
  else {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    param_1[0xb1] = local_30;
    local_d8 = &PTR_FUN_149ed05f0;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
  }
  local_e0 = DAT_14c84635c;
  FUN_1412ce202(&local_d8);
  param_1[0xb2] = &PTR_FUN_149ed05f0;
  *(undefined4 *)(param_1 + 0xb3) = local_d0;
  *(undefined4 *)((longlong)param_1 + 0x59c) = uStack_cc;
  *(undefined4 *)(param_1 + 0xb4) = uStack_c8;
  *(undefined4 *)((longlong)param_1 + 0x5a4) = uStack_c4;
  *(undefined4 *)(param_1 + 0xb5) = local_c0;
  *(undefined4 *)((longlong)param_1 + 0x5ac) = uStack_bc;
  *(undefined4 *)(param_1 + 0xb6) = uStack_b8;
  *(undefined4 *)((longlong)param_1 + 0x5b4) = uStack_b4;
  *(undefined4 *)(param_1 + 0xb7) = local_b0;
  *(undefined4 *)((longlong)param_1 + 0x5bc) = uStack_ac;
  *(undefined4 *)(param_1 + 0xb8) = uStack_a8;
  *(undefined4 *)((longlong)param_1 + 0x5c4) = uStack_a4;
  param_1[0xb9] = local_a0;
  if ((local_a0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar5 = local_98;
  puVar6 = param_1 + 0xba;
  for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x624) = local_44;
  *(undefined4 *)(param_1 + 0xc4) = local_48;
  param_1[0xc5] = local_40;
  param_1[0xc6] = local_38;
  if (local_38 == (longlong *)0x0) {
    param_1[199] = local_30;
  }
  else {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    param_1[199] = local_30;
    local_d8 = &PTR_FUN_149ed05f0;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_38 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar3 = (int *)((longlong)local_38 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*local_38 + 0x10))(local_38);
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 200) = 0x41800000;
  if ((local_28 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412ce202 FUN_1412ce202 body=127 status=ok
// SIG undefined FUN_1412ce202(void)

undefined8 * FUN_1412ce202(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  uStack_20 = 0;
  local_40 = &DAT_149e1e2f8;
  local_50 = 0;
  local_58 = 0;
  local_30 = 0;
  local_38 = 0;
  local_48 = param_2;
  FUN_1412ce282(0,0,0);
  *param_1 = &PTR_FUN_149eeb438;
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412ce282 FUN_1412ce282 body=537 status=ok
// SIG undefined FUN_1412ce282(void)

undefined8 *
FUN_1412ce282(undefined8 *param_1,undefined1 param_2,undefined8 param_3,undefined4 *param_4,
             undefined1 param_5,undefined1 param_6,undefined8 *param_7,undefined8 *param_8,
             longlong param_9,byte param_10)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  ushort uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ushort uVar12;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ed05f0;
  uVar4 = param_8[1];
  param_1[1] = *param_8;
  param_1[2] = uVar4;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c) = param_2;
  *(undefined1 *)((longlong)param_1 + 0x1d) = param_5;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1f) = param_6;
  param_1[4] = *param_7;
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  *(undefined4 *)(param_1 + 5) = *param_4;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 6) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar3;
  param_1[7] = param_9;
  local_38 = param_3;
  if ((param_9 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_9);
  }
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  uVar7 = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined2 *)(param_1 + 0xf) = 1;
  uVar4 = DAT_14c84635c;
  param_1[0x11] = DAT_14c84635c;
  param_1[0x10] = uVar4;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_10 = *(byte *)((longlong)param_1 + 0x94) & 0xfa | param_10;
  *(byte *)((longlong)param_1 + 0x94) = param_10 + 4;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = param_3;
  if (param_9 == 0) {
    FUN_1400021e4(&local_38,&local_48);
    FUN_140056680(&local_58,L"texture:/");
    uVar10 = (ulonglong)(local_50 - 1);
    if (local_50 == 0) {
      uVar10 = uVar7;
    }
    if (0 < (int)uVar10) {
      puVar5 = local_58;
      if (local_50 == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      puVar6 = &DAT_149dfb77a;
      if (local_40 != 0) {
        puVar6 = local_48;
      }
      lVar11 = 0;
      while( true ) {
        uVar12 = *(ushort *)((longlong)puVar6 + lVar11);
        uVar7 = (ulonglong)uVar12;
        uVar8 = *(ushort *)((longlong)puVar5 + lVar11);
        if (uVar12 != uVar8) break;
        if (uVar12 == 0) goto LAB_1412ce433;
LAB_1412ce401:
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) goto LAB_1412ce433;
        lVar11 = lVar11 + 2;
      }
      if ((uVar8 | uVar12) < 0x80) {
        uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
        uVar9 = (ulonglong)uVar8;
        uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
        if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar9]) goto LAB_1412ce401;
      }
      if (uVar12 != uVar8) {
        uVar7 = 0;
        goto LAB_1412ce436;
      }
LAB_1412ce433:
      uVar7 = 2;
    }
LAB_1412ce436:
    *(byte *)((longlong)param_1 + 0x94) = *(byte *)((longlong)param_1 + 0x94) & 0xfd | (byte)uVar7;
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    *(byte *)((longlong)param_1 + 0x94) = param_10 | 6;
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412ce49c FUN_1412ce49c body=257 status=ok
// SIG undefined FUN_1412ce49c(void)

void FUN_1412ce49c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 *local_40;
  longlong **local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = param_2;
  plVar4 = (longlong *)FUN_14001cc68(0xc90,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149eeb610;
  FUN_1414790b6(plVar4 + 2,param_3);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_40 = &local_48;
  local_38 = &local_58;
  local_58 = plVar4 + 2;
  local_50 = plVar4;
  FUN_141030890(param_1 + 0x30,local_2c,&local_40,0);
  plVar3 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
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
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412ce59e FUN_1412ce59e body=193 status=ok
// SIG undefined FUN_1412ce59e(void)

undefined8
FUN_1412ce59e(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  uVar3 = FUN_1412ce748();
  FUN_1412ce8e2(uVar3,&local_58);
  local_48 = local_58;
  local_40 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
  }
  local_68 = param_4;
  FUN_1412ce660(param_1,&local_48,param_3,&local_38);
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
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412ce660 FUN_1412ce660 body=232 status=ok
// SIG undefined FUN_1412ce660(void)

undefined8 *
FUN_1412ce660(undefined8 *param_1,undefined8 *param_2,float param_3,undefined8 *param_4,
             undefined4 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar3 = *(undefined4 *)((longlong)param_5 + 3);
  *(undefined4 *)(param_1 + 2) = *param_5;
  *(undefined4 *)((longlong)param_1 + 0x13) = uVar3;
  lVar4 = *(longlong *)(param_5 + 2);
  param_1[3] = lVar4;
  if ((lVar4 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  uVar6 = *(undefined8 *)(param_5 + 6);
  param_1[4] = *(undefined8 *)(param_5 + 4);
  param_1[5] = uVar6;
  param_1[6] = *param_2;
  lVar4 = param_2[1];
  param_1[7] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  param_1[8] = *param_4;
  if (65535.0 <= param_3) {
    param_3 = 65535.0;
  }
  if (param_3 <= 0.0) {
    param_3 = 0.0;
  }
  *(float *)(param_1 + 9) = param_3;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x54) = 2;
  *(undefined1 *)((longlong)param_1 + 0x56) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
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
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  return param_1;
}



// FUNCTION 1412ce748 FUN_1412ce748 body=410 status=ok
// SIG undefined FUN_1412ce748(void)

longlong FUN_1412ce748(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  if (DAT_14c9684c0 != 0) {
    return DAT_14c9684c0;
  }
  lVar4 = FUN_14001cc68(0x128,0x10);
  FUN_1458a36fa(lVar4);
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_149eda410;
  plVar5[2] = lVar4;
  if ((lVar4 == 0) ||
     (((*(longlong *)(lVar4 + 0x10) != 0 && (*(longlong *)(lVar4 + 0x18) != 0)) &&
      (0 < *(int *)(*(longlong *)(lVar4 + 0x18) + 8))))) goto LAB_1412ce7fb;
  if (plVar5 == (longlong *)0x0) {
    *(longlong *)(lVar4 + 0x10) = lVar4;
    plVar6 = *(longlong **)(lVar4 + 0x18);
    if (plVar6 == (longlong *)0x0) goto LAB_1412ce7fb;
LAB_1412ce878:
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
    *(longlong **)(lVar4 + 0x18) = plVar5;
    if (plVar5 == (longlong *)0x0) goto LAB_1412ce7fb;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *(longlong *)(lVar4 + 0x10) = lVar4;
    if (*(longlong **)(lVar4 + 0x18) != plVar5) {
      LOCK();
      *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
      UNLOCK();
      plVar6 = *(longlong **)(lVar4 + 0x18);
      if (plVar6 != (longlong *)0x0) goto LAB_1412ce878;
      *(longlong **)(lVar4 + 0x18) = plVar5;
    }
  }
  LOCK();
  plVar6 = plVar5 + 1;
  *(int *)plVar6 = (int)*plVar6 + -1;
  UNLOCK();
  if ((int)*plVar6 == 0) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
LAB_1412ce7fb:
  plVar6 = DAT_14c9684c8;
  DAT_14c9684c0 = lVar4;
  if (plVar5 == DAT_14c9684c8) {
    if (plVar5 == (longlong *)0x0) {
      return lVar4;
    }
    LOCK();
    plVar6 = plVar5 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) {
      return DAT_14c9684c0;
    }
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar6 = plVar5;
  }
  else {
    if (DAT_14c9684c8 == (longlong *)0x0) {
      DAT_14c9684c8 = plVar5;
      return lVar4;
    }
    LOCK();
    plVar1 = DAT_14c9684c8 + 1;
    DAT_14c9684c8 = plVar5;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) {
      return DAT_14c9684c0;
    }
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  return DAT_14c9684c0;
}



// FUNCTION 1412ce8e2 FUN_1412ce8e2 body=5501 status=ok
// SIG undefined FUN_1412ce8e2(void)

undefined8 * FUN_1412ce8e2(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_1a8 [32];
  undefined1 local_188;
  longlong *local_178;
  longlong *local_170;
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [8];
  longlong local_90;
  int local_88;
  undefined1 local_80 [16];
  longlong local_70;
  int local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if (*(longlong *)(param_1 + 0x70) != 0) goto LAB_1412ce914;
  plVar8 = (longlong *)FUN_1458a350f();
  plVar9 = (longlong *)0x0;
  if (plVar8 != (longlong *)&DAT_fffffffffffffff0) {
    plVar9 = plVar8 + 4;
  }
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
  FUN_1414927bc(&local_90);
  FUN_1412cfe60(&local_70,&local_90,(local_88 == 0) + '\x06');
  FUN_1401aebe8(&local_70,L"Slate",5);
  FUN_1412cfe60(&local_60,&local_70,(local_68 == 0) + '\x06');
  FUN_1401aebe8(&local_60,L"Fonts",5);
  FUN_1412cfe60(local_80,&local_60,(iStack_58 == 0) + '\x13');
  FUN_1401aebe8(local_80,L"Roboto-Regular.ttf",0x12);
  FUN_1446f470e(local_98,L"Regular",1);
  local_188 = 0;
  FUN_1458a3092(plVar9,local_98,local_80,0);
  if (CONCAT44(uStack_5c,local_60) != 0) {
    FUN_1400020a8();
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  FUN_1414927bc(&local_90);
  FUN_1412cfe60(&local_70,&local_90,(local_88 == 0) + '\x06');
  FUN_1401aebe8(&local_70,L"Slate",5);
  FUN_1412cfe60(&local_60,&local_70,(local_68 == 0) + '\x06');
  FUN_1401aebe8(&local_60,L"Fonts",5);
  FUN_1412cfe60(local_a8,&local_60,(iStack_58 == 0) + '\x12');
  FUN_1401aebe8(local_a8,L"Roboto-Italic.ttf",0x11);
  FUN_1446f470e(local_98,L"Italic",1);
  local_188 = 0;
  FUN_1458a3092(plVar9,local_98,local_a8,0);
  if (CONCAT44(uStack_5c,local_60) != 0) {
    FUN_1400020a8();
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  FUN_1414927bc(&local_90);
  FUN_1412cfe60(&local_70,&local_90,(local_88 == 0) + '\x06');
  FUN_1401aebe8(&local_70,L"Slate",5);
  FUN_1412cfe60(&local_60,&local_70,(local_68 == 0) + '\x06');
  FUN_1401aebe8(&local_60,L"Fonts",5);
  FUN_1412cfe60(local_b8,&local_60,(iStack_58 == 0) + '\x10');
  FUN_1401aebe8(local_b8,L"Roboto-Bold.ttf",0xf);
  FUN_1446f470e(local_98,L"Bold",1);
  local_188 = 0;
  FUN_1458a3092(plVar9,local_98,local_b8,0);
  if (CONCAT44(uStack_5c,local_60) != 0) {
    FUN_1400020a8();
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  FUN_1414927bc(&local_90);
  FUN_1412cfe60(&local_70,&local_90,(local_88 == 0) + '\x06');
  FUN_1401aebe8(&local_70,L"Slate",5);
  FUN_1412cfe60(&local_60,&local_70,(local_68 == 0) + '\x06');
  FUN_1401aebe8(&local_60,L"Fonts",5);
  FUN_1412cfe60(local_c8,&local_60,(iStack_58 == 0) + '\x16');
  FUN_1401aebe8(local_c8,L"Roboto-BoldItalic.ttf",0x15);
  FUN_1446f470e(local_98,L"BoldItalic",1);
  local_188 = 0;
  FUN_1458a3092(plVar9,local_98,local_c8,0);
  if (CONCAT44(uStack_5c,local_60) != 0) {
    FUN_1400020a8();
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  FUN_1414927bc(&local_90);
  FUN_1412cfe60(&local_70,&local_90,(local_88 == 0) + '\x06');
  FUN_1401aebe8(&local_70,L"Slate",5);
  FUN_1412cfe60(&local_60,&local_70,(local_68 == 0) + '\x06');
  FUN_1401aebe8(&local_60,L"Fonts",5);
  FUN_1412cfe60(local_d8,&local_60,(iStack_58 == 0) + '\x19');
  FUN_1401aebe8(local_d8,L"Roboto-BoldCondensed.ttf",0x18);
  FUN_1446f470e(local_98,L"BoldCondensed",1);
  local_188 = 0;
  FUN_1458a3092(plVar9,local_98,local_d8,0);
  if (CONCAT44(uStack_5c,local_60) != 0) {
    FUN_1400020a8();
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  FUN_1414927bc(&local_90);
  FUN_1412cfe60(&local_70,&local_90,(local_88 == 0) + '\x06');
  FUN_1401aebe8(&local_70,L"Slate",5);
  FUN_1412cfe60(&local_60,&local_70,(local_68 == 0) + '\x06');
  FUN_1401aebe8(&local_60,L"Fonts",5);
  FUN_1412cfe60(local_e8,&local_60,(iStack_58 == 0) + '\x1f');
  FUN_1401aebe8(local_e8,L"Roboto-BoldCondensedItalic.ttf",0x1e);
  FUN_1446f470e(local_98,L"BoldCondensedItalic",1);
  local_188 = 0;
  FUN_1458a3092(plVar9,local_98,local_e8,0);
  if (CONCAT44(uStack_5c,local_60) != 0) {
    FUN_1400020a8();
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  FUN_1414927bc(&local_90);
  FUN_1412cfe60(&local_70,&local_90,(local_88 == 0) + '\x06');
  FUN_1401aebe8(&local_70,L"Slate",5);
  FUN_1412cfe60(&local_60,&local_70,(local_68 == 0) + '\x06');
  FUN_1401aebe8(&local_60,L"Fonts",5);
  FUN_1412cfe60(local_f8,&local_60,(iStack_58 == 0) + '\x11');
  FUN_1401aebe8(local_f8,L"Roboto-Black.ttf",0x10);
  FUN_1446f470e(local_98,L"Black",1);
  local_188 = 0;
  FUN_1458a3092(plVar9,local_98,local_f8,0);
  if (CONCAT44(uStack_5c,local_60) != 0) {
    FUN_1400020a8();
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  FUN_1414927bc(&local_90);
  FUN_1412cfe60(&local_70,&local_90,(local_88 == 0) + '\x06');
  FUN_1401aebe8(&local_70,L"Slate",5);
  FUN_1412cfe60(&local_60,&local_70,(local_68 == 0) + '\x06');
  FUN_1401aebe8(&local_60,L"Fonts",5);
  FUN_1412cfe60(local_108,&local_60,(iStack_58 == 0) + '\x17');
  FUN_1401aebe8(local_108,L"Roboto-BlackItalic.ttf",0x16);
  FUN_1446f470e(local_98,L"BlackItalic",1);
  local_188 = 0;
  FUN_1458a3092(plVar9,local_98,local_108,0);
  if (CONCAT44(uStack_5c,local_60) != 0) {
    FUN_1400020a8();
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  FUN_1414927bc(&local_90);
  FUN_1412cfe60(&local_70,&local_90,(local_88 == 0) + '\x06');
  FUN_1401aebe8(&local_70,L"Slate",5);
  FUN_1412cfe60(&local_60,&local_70,(local_68 == 0) + '\x06');
  FUN_1401aebe8(&local_60,L"Fonts",5);
  FUN_1412cfe60(local_118,&local_60,(iStack_58 == 0) + '\x12');
  FUN_1401aebe8(local_118,L"Roboto-Medium.ttf",0x11);
  FUN_1446f470e(local_98,L"Medium",1);
  local_188 = 0;
  FUN_1458a3092(plVar9,local_98,local_118,0);
  if (CONCAT44(uStack_5c,local_60) != 0) {
    FUN_1400020a8();
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  FUN_1414927bc(&local_90);
  FUN_1412cfe60(&local_70,&local_90,(local_88 == 0) + '\x06');
  FUN_1401aebe8(&local_70,L"Slate",5);
  FUN_1412cfe60(&local_60,&local_70,(local_68 == 0) + '\x06');
  FUN_1401aebe8(&local_60,L"Fonts",5);
  FUN_1412cfe60(local_128,&local_60,(iStack_58 == 0) + '\x11');
  FUN_1401aebe8(local_128,L"Roboto-Light.ttf",0x10);
  FUN_1446f470e(local_98,L"Light",1);
  local_188 = 0;
  FUN_1458a3092(plVar9,local_98,local_128,0);
  if (CONCAT44(uStack_5c,local_60) != 0) {
    FUN_1400020a8();
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  FUN_1414927bc(&local_90);
  FUN_1412cfe60(&local_70,&local_90,(local_88 == 0) + '\x06');
  FUN_1401aebe8(&local_70,L"Slate",5);
  FUN_1412cfe60(&local_60,&local_70,(local_68 == 0) + '\x06');
  FUN_1401aebe8(&local_60,L"Fonts",5);
  FUN_1412cfe60(local_138,&local_60,(iStack_58 == 0) + '\x11');
  FUN_1401aebe8(local_138,L"Roboto-Light.ttf",0x10);
  FUN_1446f470e(local_98,L"VeryLight",1);
  local_188 = 0;
  FUN_1458a3092(plVar9,local_98,local_138,1);
  if (CONCAT44(uStack_5c,local_60) != 0) {
    FUN_1400020a8();
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  FUN_1414927bc(&local_90);
  FUN_1412cfe60(&local_70,&local_90,(local_88 == 0) + '\x06');
  FUN_1401aebe8(&local_70,L"Slate",5);
  FUN_1412cfe60(&local_60,&local_70,(local_68 == 0) + '\x06');
  FUN_1401aebe8(&local_60,L"Fonts",5);
  FUN_1412cfe60(local_148,&local_60,(iStack_58 == 0) + '\x12');
  FUN_1401aebe8(local_148,L"DroidSansMono.ttf",0x11);
  FUN_1446f470e(local_98,L"Mono",1);
  local_188 = 0;
  FUN_1458a3092(plVar9,local_98,local_148,0);
  if (CONCAT44(uStack_5c,local_60) != 0) {
    FUN_1400020a8();
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  FUN_1414927bc(&local_90);
  FUN_1412cfe60(&local_70,&local_90,(local_88 == 0) + '\x06');
  FUN_1401aebe8(&local_70,L"Slate",5);
  FUN_1412cfe60(&local_60,&local_70,(local_68 == 0) + '\x06');
  FUN_1401aebe8(&local_60,L"Fonts",5);
  FUN_1412cfe60(local_158,&local_60,(iStack_58 == 0) + '\x16');
  FUN_1401aebe8(local_158,L"DroidSansFallback.ttf",0x15);
  FUN_1446f470e(local_98,L"Regular",1);
  local_188 = 0;
  FUN_1458a3092(plVar9 + 2,local_98,local_158,0);
  if (CONCAT44(uStack_5c,local_60) != 0) {
    FUN_1400020a8();
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  local_178 = plVar8;
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  iVar7 = FUN_1458a32f4(plVar9 + 5);
  lVar5 = plVar9[5];
  lVar4 = lVar5 + (longlong)iVar7 * 0x38;
  local_170 = plVar9;
  FUN_1458a38a4(&local_70);
  lVar6 = local_70;
  plVar9 = *(longlong **)(local_70 + 0x210);
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 8))(plVar9);
  }
  plVar8 = (longlong *)(lVar5 + (longlong)iVar7 * 0x38 + 0x18);
  uStack_5c = *(undefined4 *)(lVar6 + 0x220);
  iStack_58 = *(undefined4 *)(lVar6 + 0x224);
  uStack_54 = *(undefined4 *)(lVar6 + 0x228);
  uStack_50 = *(undefined4 *)(lVar6 + 0x22c);
  iVar7 = *(int *)(lVar4 + 0x20);
  *(uint *)(lVar4 + 0x20) = iVar7 + 1U;
  if (*(uint *)(lVar4 + 0x24) < iVar7 + 1U) {
    FUN_1458a3352(plVar8,iVar7);
  }
  puVar3 = (undefined4 *)(*plVar8 + (longlong)iVar7 * 0x10);
  *puVar3 = uStack_5c;
  puVar3[1] = iStack_58;
  puVar3[2] = uStack_54;
  puVar3[3] = uStack_50;
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  FUN_1458a38a4(&local_70);
  lVar5 = local_70;
  plVar9 = *(longlong **)(local_70 + 0x328);
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 8))(plVar9);
  }
  uStack_5c = *(undefined4 *)(lVar5 + 0x338);
  iStack_58 = *(undefined4 *)(lVar5 + 0x33c);
  uStack_54 = *(undefined4 *)(lVar5 + 0x340);
  uStack_50 = *(undefined4 *)(lVar5 + 0x344);
  iVar7 = *(int *)(lVar4 + 0x20);
  *(uint *)(lVar4 + 0x20) = iVar7 + 1U;
  if (*(uint *)(lVar4 + 0x24) < iVar7 + 1U) {
    FUN_1458a3352(plVar8,iVar7);
  }
  puVar3 = (undefined4 *)(*plVar8 + (longlong)iVar7 * 0x10);
  *puVar3 = uStack_5c;
  puVar3[1] = iStack_58;
  puVar3[2] = uStack_54;
  puVar3[3] = uStack_50;
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  FUN_1458a38a4(&local_70);
  lVar5 = local_70;
  plVar9 = *(longlong **)(local_70 + 0x2740);
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 8))(plVar9);
  }
  uStack_5c = *(undefined4 *)(lVar5 + 0x2750);
  iStack_58 = *(undefined4 *)(lVar5 + 0x2754);
  uStack_54 = *(undefined4 *)(lVar5 + 0x2758);
  uStack_50 = *(undefined4 *)(lVar5 + 0x275c);
  iVar7 = *(int *)(lVar4 + 0x20);
  *(uint *)(lVar4 + 0x20) = iVar7 + 1U;
  if (*(uint *)(lVar4 + 0x24) < iVar7 + 1U) {
    FUN_1458a3352(plVar8,iVar7);
  }
  puVar3 = (undefined4 *)(*plVar8 + (longlong)iVar7 * 0x10);
  *puVar3 = uStack_5c;
  puVar3[1] = iStack_58;
  puVar3[2] = uStack_54;
  puVar3[3] = uStack_50;
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  FUN_1458a38a4(&local_70);
  lVar5 = local_70;
  plVar9 = *(longlong **)(local_70 + 0x17f0);
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 8))(plVar9);
  }
  uStack_5c = *(undefined4 *)(lVar5 + 0x1800);
  iStack_58 = *(undefined4 *)(lVar5 + 0x1804);
  uStack_54 = *(undefined4 *)(lVar5 + 0x1808);
  uStack_50 = *(undefined4 *)(lVar5 + 0x180c);
  iVar7 = *(int *)(lVar4 + 0x20);
  *(uint *)(lVar4 + 0x20) = iVar7 + 1U;
  if (*(uint *)(lVar4 + 0x24) < iVar7 + 1U) {
    FUN_1458a3352(plVar8,iVar7);
  }
  puVar3 = (undefined4 *)(*plVar8 + (longlong)iVar7 * 0x10);
  *puVar3 = uStack_5c;
  puVar3[1] = iStack_58;
  puVar3[2] = uStack_54;
  puVar3[3] = uStack_50;
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  FUN_1458a38a4(&local_70);
  lVar5 = local_70;
  plVar9 = *(longlong **)(local_70 + 0x18e0);
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 8))(plVar9);
  }
  uStack_5c = *(undefined4 *)(lVar5 + 0x18f0);
  iStack_58 = *(undefined4 *)(lVar5 + 0x18f4);
  uStack_54 = *(undefined4 *)(&DAT_000018f8 + lVar5);
  uStack_50 = *(undefined4 *)(lVar5 + 0x18fc);
  iVar7 = *(int *)(lVar4 + 0x20);
  *(uint *)(lVar4 + 0x20) = iVar7 + 1U;
  if (*(uint *)(lVar4 + 0x24) < iVar7 + 1U) {
    FUN_1458a3352(plVar8,iVar7);
  }
  puVar3 = (undefined4 *)(*plVar8 + (longlong)iVar7 * 0x10);
  *puVar3 = uStack_5c;
  puVar3[1] = iStack_58;
  puVar3[2] = uStack_54;
  puVar3[3] = uStack_50;
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  FUN_1458a38a4(&local_70);
  lVar5 = local_70;
  plVar9 = *(longlong **)(local_70 + 0x260);
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 8))(plVar9);
  }
  uStack_5c = *(undefined4 *)(lVar5 + 0x270);
  iStack_58 = *(int *)(lVar5 + 0x274);
  uStack_54 = *(undefined4 *)(lVar5 + 0x278);
  uStack_50 = *(undefined4 *)(lVar5 + 0x27c);
  iVar7 = *(int *)(lVar4 + 0x20);
  *(uint *)(lVar4 + 0x20) = iVar7 + 1U;
  if (*(uint *)(lVar4 + 0x24) < iVar7 + 1U) {
    FUN_1458a3352(plVar8,iVar7);
  }
  plVar1 = local_170;
  puVar3 = (undefined4 *)(*plVar8 + (longlong)iVar7 * 0x10);
  *puVar3 = uStack_5c;
  puVar3[1] = iStack_58;
  puVar3[2] = uStack_54;
  puVar3[3] = uStack_50;
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  FUN_1414927bc(&local_90);
  FUN_1412cfe60(&local_70,&local_90,(local_88 == 0) + '\x06');
  FUN_1401aebe8(&local_70,L"Slate",5);
  FUN_1412cfe60(&local_60,&local_70,(local_68 == 0) + '\x06');
  FUN_1401aebe8(&local_60,L"Fonts",5);
  FUN_1412cfe60(local_168,&local_60,(iStack_58 == 0) + '\x1e');
  FUN_1401aebe8(local_168,L"NotoNaskhArabicUI-Regular.ttf",0x1d);
  FUN_1446f470e(local_98,L"Regular",1);
  local_188 = 0;
  FUN_1458a3092(lVar4,local_98,local_168,0);
  plVar9 = local_178;
  if (CONCAT44(uStack_5c,local_60) != 0) {
    FUN_1400020a8();
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  if (plVar9 == (longlong *)0x0) {
    *(longlong **)(param_1 + 0x70) = plVar1;
    plVar8 = *(longlong **)(param_1 + 0x78);
    if (plVar8 == (longlong *)0x0) goto LAB_1412ce914;
    *(undefined8 *)(param_1 + 0x78) = 0;
LAB_1412cfe04:
    LOCK();
    plVar9 = plVar8 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
    plVar9 = local_178;
    if (local_178 == (longlong *)0x0) goto LAB_1412ce914;
  }
  else {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x70) = plVar1;
    plVar8 = *(longlong **)(param_1 + 0x78);
    if (plVar9 == plVar8) {
      LOCK();
      plVar8 = plVar9 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
    else {
      *(longlong **)(param_1 + 0x78) = plVar9;
      if (plVar8 != (longlong *)0x0) goto LAB_1412cfe04;
    }
  }
  LOCK();
  plVar8 = plVar9 + 1;
  *(int *)plVar8 = (int)*plVar8 + -1;
  UNLOCK();
  if ((int)*plVar8 == 0) {
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar2 = (int *)((longlong)plVar9 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
LAB_1412ce914:
  *param_2 = *(undefined8 *)(param_1 + 0x70);
  lVar4 = *(longlong *)(param_1 + 0x78);
  param_2[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  if ((local_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1412cfe60 FUN_1412cfe60 body=90 status=ok
// SIG undefined FUN_1412cfe60(void)

undefined8 * FUN_1412cfe60(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  iVar1 = *(int *)(param_1 + 1) + param_3;
  if (iVar1 < *(int *)(param_1 + 1)) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4((longlong)param_3);
  }
  if (-1 < iVar1) {
    if (*(int *)((longlong)param_1 + 0xc) < iVar1) {
      FUN_1446f8c06(param_1);
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar1);
}



// FUNCTION 1412cfebc FUN_1412cfebc body=292 status=ok
// SIG undefined FUN_1412cfebc(void)

void FUN_1412cfebc(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 *local_40;
  longlong **local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = param_2;
  plVar4 = (longlong *)FUN_14001cc68(0xf80,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149eeb630;
  plVar4[2] = (longlong)&PTR_FUN_149eeb490;
  FUN_1414790b6(plVar4 + 4,param_3 + 0x10);
  FUN_140e9ea3a(plVar4 + 0x194,param_3 + 0xc90);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_40 = &local_48;
  local_38 = &local_58;
  local_58 = plVar4 + 2;
  local_50 = plVar4;
  FUN_141030890(param_1 + 0x30,local_2c,&local_40,0);
  plVar3 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
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
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412cffe2 FUN_1412cffe2 body=257 status=ok
// SIG undefined FUN_1412cffe2(void)

void FUN_1412cffe2(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 *local_40;
  longlong **local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = param_2;
  plVar4 = (longlong *)FUN_14001cc68(0x2a0,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149eeb5f0;
  FUN_1458a349e(plVar4 + 2,param_3);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_40 = &local_48;
  local_38 = &local_58;
  local_58 = plVar4 + 2;
  local_50 = plVar4;
  FUN_141030890(param_1 + 0x30,local_2c,&local_40,0);
  plVar3 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
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
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412d00e4 FUN_1412d00e4 body=257 status=ok
// SIG undefined FUN_1412d00e4(void)

void FUN_1412d00e4(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 *local_40;
  longlong **local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = param_2;
  plVar4 = (longlong *)FUN_14001cc68(0xff0,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149eeb6f0;
  FUN_14627c9e6(plVar4 + 2,param_3);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_40 = &local_48;
  local_38 = &local_58;
  local_58 = plVar4 + 2;
  local_50 = plVar4;
  FUN_141030890(param_1 + 0x30,local_2c,&local_40,0);
  plVar3 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
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
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412d01e6 FUN_1412d01e6 body=284 status=ok
// SIG undefined FUN_1412d01e6(void)

undefined8 FUN_1412d01e6(longlong param_1,undefined4 param_2)

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
    if (iVar1 == 2) goto LAB_1412d02fc;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1412d02fc;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1412d02fc:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1412d02a9;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_1412d02a9;
    }
  }
  uVar6 = 0;
LAB_1412d02a9:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412d0304 FUN_1412d0304 body=212 status=ok
// SIG undefined FUN_1412d0304(void)

void FUN_1412d0304(undefined8 param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1449027d0(param_1,&local_40);
  lVar3 = *(longlong *)(local_40 + 0x220);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x1b8));
  *(int *)(lVar3 + 0x1b0) = *(int *)(lVar3 + 0x1b0) + 1;
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
  if (*(char *)(lVar3 + 0x30) == param_2) {
    if (*(int *)(lVar3 + 0x34) != 0) goto LAB_1412d0375;
    iVar4 = 1;
  }
  else {
    iVar4 = *(int *)(lVar3 + 0x34) + 1;
  }
  *(char *)(lVar3 + 0x30) = param_2;
  *(int *)(lVar3 + 0x34) = iVar4;
LAB_1412d0375:
  if (param_2 != '\0') {
    FUN_140da76fe(param_1,&DAT_14cbd8be8);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x1b8));
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412d03da FUN_1412d03da body=2735 status=ok
// SIG undefined FUN_1412d03da(void)

void FUN_1412d03da(longlong *param_1,longlong param_2,longlong param_3,char *param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  char *pcVar18;
  bool bVar19;
  float fVar20;
  double dVar21;
  undefined1 auStack_718 [32];
  char *local_6f8;
  undefined8 **local_6f0;
  undefined1 local_6e8;
  longlong local_6e0;
  undefined8 *local_6d8;
  undefined4 local_6d0;
  undefined4 local_6c8;
  undefined1 local_6c0;
  undefined4 local_6b8;
  longlong local_6a8;
  longlong local_6a0;
  longlong local_698;
  char *local_690;
  longlong *local_688;
  longlong *local_680;
  undefined8 local_678;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  undefined4 local_668;
  undefined4 uStack_664;
  undefined8 uStack_660;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined8 local_648;
  undefined8 uStack_640;
  undefined8 local_638;
  longlong local_628;
  undefined8 *local_620;
  undefined8 *local_618;
  undefined8 *puStack_610;
  double local_608;
  undefined2 local_5f8;
  undefined1 local_5f0;
  undefined1 local_5e8;
  undefined8 local_5d8;
  undefined8 local_310;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined8 local_2f8;
  undefined2 local_2f0;
  undefined1 local_2e8;
  byte local_2e0;
  undefined8 *local_2d8;
  undefined8 *puStack_2d0;
  double local_2c8;
  undefined8 local_2b0;
  undefined4 local_2a8;
  undefined8 local_2a4;
  undefined4 local_29c;
  undefined8 local_290;
  undefined4 local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_260;
  undefined4 local_258;
  undefined8 local_254;
  undefined4 local_24c;
  undefined8 local_240;
  undefined4 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined8 local_1f4;
  undefined4 local_1ec;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined1 local_1d0;
  undefined4 local_1a8;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_718;
  if (param_1[0x30] == 0) goto LAB_1412d0ab3;
  if (((param_4[0xc] == '\x01') && (param_1[8] != 0)) &&
     (((short)param_1[9] < 0 || (param_1[10] != 0)))) {
    uVar12 = (**(code **)(*param_1 + 0x180))(param_1);
    iVar9 = FUN_1412d1158(param_1 + 8,param_3,uVar12);
    if (iVar9 == 2) {
      lVar10 = FUN_14069ce20(param_1[0x30]);
      if (lVar10 == 0) {
        lVar10 = *(longlong *)(param_1[0x30] + 0x1c8);
        if (lVar10 == 0) {
          local_608 = DAT_14c8464f0;
          local_618 = DAT_14c8464e0;
          puStack_610 = DAT_14c8464e8;
        }
        else {
          local_618 = *(undefined8 **)(lVar10 + 0x260);
          puStack_610 = *(undefined8 **)(lVar10 + 0x268);
          local_608 = *(double *)(lVar10 + 0x270);
        }
      }
      else {
        FUN_1400e23a4(lVar10,&local_618);
      }
      local_2c8 = local_608 - *(double *)(param_2 + 0x20);
      puStack_2d0 = (undefined8 *)((double)puStack_610 - *(double *)(param_2 + 0x18));
      local_2d8 = (undefined8 *)((double)local_618 - *(double *)(param_2 + 0x10));
      dVar21 = local_2c8 * local_2c8 +
               (double)local_2d8 * (double)local_2d8 + (double)puStack_2d0 * (double)puStack_2d0;
      if ((dVar21 != 1.0) || (NAN(dVar21))) {
        if (9.99999993922529e-09 <= dVar21) {
          dVar21 = 1.0 / SQRT(dVar21);
          local_2c8 = local_2c8 * dVar21;
          puStack_2d0 = (undefined8 *)((double)puStack_2d0 * dVar21);
          local_2d8 = (undefined8 *)((double)local_2d8 * dVar21);
        }
        else {
          local_2c8 = DAT_14c8464f0;
          local_2d8 = DAT_14c8464e0;
          puStack_2d0 = DAT_14c8464e8;
        }
      }
      local_6f8 = (char *)CONCAT44(local_6f8._4_4_,*(undefined4 *)(param_4 + 0x10));
      (**(code **)(*param_1 + 0x3c0))
                (param_1,&local_310,&local_2d8,*(undefined8 *)(param_3 + 0x168));
      local_6f8 = param_4;
      (**(code **)(*param_1 + 0x3b0))(param_1,param_2,param_3,&local_310);
      goto LAB_1412d0ab3;
    }
  }
  lVar10 = FUN_140ccfc10();
  puVar11 = (undefined8 *)FUN_1407a0dc0(lVar10 + 0x20);
  if (puVar11 == (undefined8 *)0x0) goto LAB_1412d0ab3;
  local_2b0 = 0;
  local_2a8 = 0;
  local_2d8 = (undefined8 *)0x0;
  puStack_2d0 = (undefined8 *)0x0;
  local_2c8 = 0.0;
  local_2a4 = 0xffffffff00000080;
  local_29c = 0;
  local_290 = 0;
  local_288 = 0;
  local_260 = 0;
  local_258 = 0;
  local_280 = 0;
  uStack_278 = 0;
  local_254 = 0xffffffff00000080;
  local_24c = 0;
  local_240 = 0;
  local_238 = 0;
  local_230 = 0;
  local_228 = 0xffffffff00000000;
  local_200 = 0;
  local_1f8 = 0;
  local_220 = 0;
  uStack_218 = 0;
  local_1f4 = 0xffffffff00000080;
  local_1ec = 0;
  local_1e0 = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1a8 = 0;
  local_180 = 0;
  local_178 = 0x200000000;
  local_168 = 0;
  local_160 = 0;
  uStack_15c = 0x20;
  uStack_158 = 0xffffffff;
  uStack_154 = 0;
  local_148 = 0;
  local_140 = 0;
  local_118 = 0;
  local_110 = 0x200000000;
  local_100 = 0;
  local_f8 = 0;
  uStack_f4 = 0x20;
  uStack_f0 = 0xffffffff;
  uStack_ec = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_b0 = 0;
  local_a8 = 0x200000000;
  local_98 = 0;
  local_90 = 0;
  uStack_8c = 0x20;
  uStack_88 = 0xffffffff;
  uStack_84 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_6a8 = param_3;
  local_6a0 = lVar10;
  local_690 = param_4;
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(puVar11);
  }
  local_2f8 = *(undefined8 *)(param_2 + 0x38);
  local_308 = *(undefined4 *)(param_2 + 0x28);
  uStack_304 = *(undefined4 *)(param_2 + 0x2c);
  uStack_300 = *(undefined4 *)(param_2 + 0x30);
  uStack_2fc = *(undefined4 *)(param_2 + 0x34);
  local_310 = 0;
  local_2f0 = 0x18;
  local_2e8 = 4;
  local_2e0 = (byte)~DAT_14c9a8994 >> 3 & 4;
  local_2d8 = puVar11;
  FUN_1412d0e8a(&local_648);
  local_618 = &local_648;
  puStack_610 = &local_310;
  FUN_140ffad64(&puStack_2d0,&local_688,&local_618);
  local_698 = param_2;
  uVar12 = FUN_14485cccc(param_2 + 0xb8);
  local_618 = (undefined8 *)0x0;
  puStack_610 = (undefined8 *)0x0;
  local_5f8 = 8;
  FUN_14485c47a(&puStack_610,uVar12);
  local_5f0 = 7;
  local_5e8 = 7;
  if ((DAT_14c9a8cf4 & 0x20) != 0) {
    local_5e8 = 0;
  }
  FUN_1412d0e98(&local_688);
  local_648 = &local_688;
  uStack_640 = &local_618;
  FUN_140ff1448(&puStack_2d0,&local_620,&local_648);
  FUN_144a2da94(&local_618);
  FUN_140ff15b2(&local_2d8);
  (**(code **)(*param_1 + 0x2c8))(param_1,&local_620,1);
  pcVar18 = local_690;
  lVar17 = local_698;
  lVar10 = local_6a8;
  *(byte *)((longlong)local_620 + 0x1c2) = *(byte *)((longlong)local_620 + 0x1c2) & 0xfe;
  if ((local_620[1] != param_1[0x24]) || (*(int *)(local_620 + 2) != (int)param_1[0x25])) {
    local_620[1] = param_1[0x24];
    *(int *)(local_620 + 2) = (int)param_1[0x25];
    local_620[3] = 0;
  }
  local_620[6] = *(undefined8 *)(local_698 + 0x20);
  uVar4 = *(undefined4 *)(local_698 + 0x14);
  uVar5 = *(undefined4 *)(local_698 + 0x18);
  uVar6 = *(undefined4 *)(local_698 + 0x1c);
  *(undefined4 *)(local_620 + 4) = *(undefined4 *)(local_698 + 0x10);
  *(undefined4 *)((longlong)local_620 + 0x24) = uVar4;
  *(undefined4 *)(local_620 + 5) = uVar5;
  *(undefined4 *)((longlong)local_620 + 0x2c) = uVar6;
  if (local_6a8 == 0) {
LAB_1412d0c4e:
    lVar16 = 0;
  }
  else {
    lVar13 = FUN_144a7cbb2();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < *(int *)(lVar13 + 0x38)) ||
       (lVar16 = lVar10,
       *(longlong *)
        (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8)
       != lVar13 + 0x30)) goto LAB_1412d0c4e;
  }
  FUN_14485c47a((longlong)local_620 + 0x6c,lVar16);
  cVar8 = FUN_144729dda((longlong)local_620 + 0x6c);
  lVar13 = local_6a0;
  if ((lVar10 != 0) && (cVar8 == '\0')) {
    FUN_14485c47a((longlong)local_620 + 0x6c,*(undefined8 *)(lVar10 + 0x1b0));
  }
  FUN_14485c47a((longlong)local_620 + 0x74,lVar10);
  FUN_14485c47a(local_620 + 0x10,lVar10);
  *(float *)((longlong)local_620 + 0x7c) = *(float *)(param_1 + 0x11) * *(float *)(pcVar18 + 4);
  *(byte *)(local_620 + 0xd) = *(byte *)(local_620 + 0xd) | 8;
  if (*(longlong *)(pcVar18 + 0x18) != 0) {
    uVar12 = FUN_1405c60c4(*(longlong *)(pcVar18 + 0x18));
    FUN_1447325ac(uVar12,&local_628,1);
    if (local_620[0x11] != local_628) {
      local_620[0x13] = 0;
    }
    local_620[0x11] = local_628;
    lVar10 = local_6a8;
    lVar17 = local_698;
    lVar13 = local_6a0;
    pcVar18 = local_690;
  }
  if ((*(longlong *)(pcVar18 + 0x28) != 0) && ((longlong)*(int *)(pcVar18 + 0x38) != 0)) {
    lVar16 = 0;
    do {
      if (*(longlong *)(*(longlong *)(pcVar18 + 0x30) + lVar16) != 0) {
        FUN_1405dc634(local_620 + 0x32,pcVar18 + 0x20);
        break;
      }
      lVar16 = lVar16 + 8;
    } while ((longlong)*(int *)(pcVar18 + 0x38) * 8 != lVar16);
  }
  *(undefined1 *)((longlong)local_620 + 0x179) = 1;
  if ((char)param_1[0x3a] == '\x01') {
    fVar20 = *(float *)((longlong)param_1 + 0x1d4);
  }
  else {
    fVar20 = 1.0;
  }
  *(float *)((longlong)local_620 + 0x17c) = fVar20;
  *(float *)((longlong)local_620 + 0x17c) = fVar20 * *(float *)(lVar13 + 0x48);
  local_638 = DAT_14c846508;
  local_648 = (longlong **)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
  uStack_640 = (undefined8 **)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
  if ((param_1[8] == 0) || ((-1 < (short)param_1[9] && (param_1[10] == 0)))) {
LAB_1412d0d86:
    if ((*pcVar18 == '\x03') && (pcVar18[0xd] == '\x01')) {
      FUN_140c84580(&local_618,lVar17 + 0x58,*(float *)(lVar13 + 0x50) * 0.017453292 * 0.5);
      FUN_144a79a9c(&local_618,&local_648);
      local_6e8 = 1;
    }
    else {
      local_6e8 = 0;
    }
    local_6e0 = 0;
  }
  else {
    uVar12 = (**(code **)(*param_1 + 0x180))(param_1);
    iVar9 = FUN_1412d1158(param_1 + 8,lVar10,uVar12);
    if (iVar9 != 2) goto LAB_1412d0d86;
    local_6e0 = param_1[0x30];
    local_6e8 = 1;
  }
  local_6b8 = *(undefined4 *)(pcVar18 + 0x10);
  local_6d8 = &local_678;
  local_678 = 0;
  local_658 = 0;
  uStack_650 = 0;
  _uStack_670 = CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
  _local_668 = CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
  uStack_660 = DAT_14c846508;
  local_6f0 = &local_2d8;
  local_6f8 = (char *)&local_648;
  local_6c0 = 0;
  local_6c8 = 0;
  local_6d0 = 1;
  FUN_140ff1788(&local_618,lVar10,lVar17 + 0x28,lVar10);
  plVar14 = (longlong *)FUN_14001cc68(0x360,0x10);
  plVar14[1] = (longlong)&DAT_100000001;
  *plVar14 = (longlong)&PTR_FUN_14b415260;
  FUN_1412d0ea6(plVar14 + 2,&local_618,&local_620);
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
    LOCK();
    plVar15 = plVar14 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  uVar12 = (**(code **)(*param_1 + 0x180))(param_1);
  FUN_140e67fb0(&local_688,uVar12);
  if (local_680 != (longlong *)0x0) {
    iVar9 = (int)local_680[1];
    do {
      if (iVar9 == 0) {
        plVar15 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar7 = (int)local_680[1];
      bVar19 = iVar9 == iVar7;
      if (bVar19) {
        *(int *)(local_680 + 1) = iVar9 + 1;
        iVar7 = iVar9;
      }
      iVar9 = iVar7;
      UNLOCK();
      plVar15 = local_680;
    } while (!bVar19);
    LOCK();
    piVar1 = (int *)((longlong)local_680 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_680 + 0x10))();
    }
    plVar3 = local_688;
    if (plVar15 != (longlong *)0x0) {
      if (local_688 != (longlong *)0x0) {
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
        }
        local_688 = plVar14 + 2;
        local_680 = plVar14;
        FUN_140e67c44(plVar3,&local_688);
        plVar3 = local_680;
        if (local_680 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_680 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_680)(local_680);
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
      LOCK();
      plVar3 = plVar15 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar15 = plVar14 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  local_5d8 = 0;
  FUN_14076ba36();
  if (local_620 != (undefined8 *)0x0) {
    (**(code **)*local_620)(local_620,1);
  }
  FUN_144a2da94(&local_310);
  local_2d8 = (undefined8 *)0x0;
  FUN_14076ba36(&puStack_2d0);
LAB_1412d0ab3:
  if ((local_60 ^ (ulonglong)auStack_718) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412d0e8a FUN_1412d0e8a body=14 status=ok
// SIG undefined FUN_1412d0e8a(void)

void FUN_1412d0e8a(undefined8 *param_1)

{
  *param_1 = DAT_14cb89e10;
  return;
}



// FUNCTION 1412d0e98 FUN_1412d0e98 body=14 status=ok
// SIG undefined FUN_1412d0e98(void)

void FUN_1412d0e98(undefined8 *param_1)

{
  *param_1 = DAT_14cb89e20;
  return;
}



// FUNCTION 1412d0ea6 FUN_1412d0ea6 body=54 status=ok
// SIG undefined FUN_1412d0ea6(void)

undefined8 * FUN_1412d0ea6(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  FUN_1412d0edc();
  *param_1 = &PTR_FUN_14b415280;
  param_1[0x69] = *param_3;
  *param_3 = 0;
  return param_1;
}



// FUNCTION 1412d0edc FUN_1412d0edc body=634 status=ok
// SIG undefined FUN_1412d0edc(void)

undefined8 * FUN_1412d0edc(undefined8 *param_1,undefined4 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
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
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  int iVar21;
  int iVar22;
  undefined8 uVar23;
  longlong lVar24;
  longlong *plVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  bool bVar28;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_14b415230;
  uVar6 = param_2[1];
  uVar7 = param_2[2];
  uVar8 = param_2[3];
  uVar9 = param_2[4];
  uVar10 = param_2[5];
  uVar11 = param_2[6];
  uVar12 = param_2[7];
  uVar13 = param_2[8];
  uVar14 = param_2[9];
  uVar15 = param_2[10];
  uVar16 = param_2[0xb];
  uVar17 = param_2[0xc];
  uVar18 = param_2[0xd];
  uVar19 = param_2[0xe];
  uVar20 = param_2[0xf];
  *(undefined4 *)(param_1 + 1) = *param_2;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar6;
  *(undefined4 *)(param_1 + 2) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar8;
  *(undefined4 *)(param_1 + 3) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar10;
  *(undefined4 *)(param_1 + 4) = uVar11;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar12;
  *(undefined4 *)(param_1 + 5) = uVar13;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar14;
  *(undefined4 *)(param_1 + 6) = uVar15;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar16;
  *(undefined4 *)(param_1 + 7) = uVar17;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar18;
  *(undefined4 *)(param_1 + 8) = uVar19;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar20;
  FUN_140ff1a6a(param_1 + 9,param_2 + 0x10);
  puVar26 = (undefined8 *)(param_2 + 0xae);
  puVar27 = param_1 + 0x58;
  for (lVar24 = 10; lVar24 != 0; lVar24 = lVar24 + -1) {
    *puVar27 = *puVar26;
    puVar26 = puVar26 + 1;
    puVar27 = puVar27 + 1;
  }
  *(undefined8 *)((longlong)param_1 + 0x31c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x324) = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  *(undefined4 *)((longlong)param_1 + 0x32c) = 0xff7fffff;
  *(undefined2 *)(param_1 + 0x66) = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  if ((((*(int *)((longlong)param_1 + 0xc) == 0) || (uVar3 = *(uint *)(param_1 + 1), (int)uVar3 < 0)
       ) || (DAT_14c9647dc <= (int)uVar3)) ||
     (((plVar25 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       plVar25 == (longlong *)0x0 || ((int)plVar25[2] != *(int *)((longlong)param_1 + 0xc))) ||
      (((*(uint *)(plVar25 + 1) & 0x10200000) != 0 || (lVar24 = *plVar25, lVar24 == 0))))))
  goto LAB_1412d10ae;
  uVar23 = FUN_1447210f0(lVar24);
  FUN_1409e0c66(&local_50,uVar23);
  bVar5 = true;
  if (local_48 == (longlong *)0x0) {
LAB_1412d10d7:
    plVar25 = (longlong *)0x0;
    uVar23 = 0;
  }
  else {
    iVar22 = (int)local_48[1];
    do {
      if (iVar22 == 0) {
        plVar25 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar21 = (int)local_48[1];
      bVar28 = iVar22 == iVar21;
      if (bVar28) {
        *(int *)(local_48 + 1) = iVar22 + 1;
        iVar21 = iVar22;
      }
      iVar22 = iVar21;
      UNLOCK();
      plVar25 = local_48;
    } while (!bVar28);
    LOCK();
    piVar1 = (int *)((longlong)local_48 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_48 + 0x10))();
    }
    if (plVar25 == (longlong *)0x0) goto LAB_1412d10d7;
    bVar5 = false;
    uVar23 = local_50;
  }
  local_58 = 0;
  FUN_140a41f04(uVar23,&local_50,lVar24,param_1 + 9);
  plVar2 = local_48;
  if (param_1 + 0x62 != &local_50) {
    param_1[0x62] = local_50;
    local_50 = 0;
    plVar4 = (longlong *)param_1[99];
    if (local_48 != plVar4) {
      local_48 = (longlong *)0x0;
      param_1[99] = plVar2;
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
  plVar2 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (!bVar5) {
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
LAB_1412d10ae:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1412d1158 FUN_1412d1158 body=301 status=ok
// SIG undefined FUN_1412d1158(void)

undefined4 FUN_1412d1158(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  short local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140154c96(&local_48);
  lVar3 = *param_1;
  uVar6 = 1;
  if (((lVar3 != 0) && ((((short)param_1[1] < 0 || (param_1[2] != 0)) && (local_48 != 0)))) &&
     ((local_40 < 0 || (local_38 != 0)))) {
    plVar4 = *(longlong **)(lVar3 + 0x18);
    plVar5 = *(longlong **)(lVar3 + 0x20);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
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
    if (plVar4 != (longlong *)0x0) {
      uVar6 = (**(code **)(*plVar4 + 0x10))(plVar4,param_1,&local_48,param_3);
    }
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
    if (plVar4 == (longlong *)0x0) {
      uVar6 = FUN_1449029b8(*param_1,local_48);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1412d1286 FUN_1412d1286 body=54 status=ok
// SIG undefined FUN_1412d1286(void)

void FUN_1412d1286(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      puVar1 = *(undefined8 **)(param_1 + lVar2 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 1412d12bc FUN_1412d12bc body=4046 status=ok
// SIG undefined FUN_1412d12bc(void)

void FUN_1412d12bc(longlong param_1)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  code *pcVar4;
  bool bVar5;
  double dVar6;
  bool bVar7;
  ulonglong uVar8;
  char cVar9;
  byte bVar10;
  undefined1 uVar11;
  uint uVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  float *pfVar16;
  float *pfVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  double dVar21;
  double dVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar26 [16];
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  uint uStack_110;
  undefined4 uStack_10c;
  longlong *local_108;
  undefined **local_100;
  undefined *local_f8;
  ulonglong local_f0;
  ulonglong uStack_e8;
  float local_e0;
  undefined4 uStack_dc;
  ushort local_c8;
  byte local_c0;
  float local_b8;
  undefined4 uStack_b4;
  ushort local_a0;
  byte local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((*(char *)(param_1 + 600) == '\x02') || (*(longlong *)(param_1 + 0x580) == 0))
  goto LAB_1412d1319;
  local_118 = &DAT_3f8000003f800000;
  uStack_110 = uStack_110 & 0xffffff00;
  local_108 = (longlong *)0x0;
  FUN_1405c5fa2();
  local_f8 = &DAT_14cb769e8;
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = &PTR_FUN_14b0394b0;
  if (((*(byte *)(param_1 + 0x1d0) & 2) != 0) &&
     ((*(char *)(param_1 + 0x3a0) == '\0' &&
      (cVar9 = FUN_1412d228c(*(undefined8 *)(param_1 + 0x580),param_1 + 0x58,&local_118),
      cVar9 != '\0')))) {
    if (*(char *)(param_1 + 0x358) == '\x01') {
      fVar24 = ((*(float *)(param_1 + 0x338) + 1.0) / (1.0 - *(float *)(param_1 + 0x33c))) *
               *(float *)(param_1 + 0x348) *
               (*(float *)(param_1 + 0x34c) + *(float *)(param_1 + 0x340)) +
               *(float *)(param_1 + 0x344);
      *(float *)(param_1 + 0x354) = fVar24;
      *(undefined1 *)(param_1 + 0x358) = 0;
    }
    else {
      fVar24 = *(float *)(param_1 + 0x354);
    }
    *(undefined1 *)(param_1 + 0x3a0) = 2;
    *(undefined1 *)(param_1 + 0x3ac) = (undefined1)uStack_110;
    *(undefined4 *)(param_1 + 0x3a4) = (undefined4)local_118;
    *(float *)(param_1 + 0x3a8) = local_118._4_4_ * fVar24;
    *(longlong **)(param_1 + 0x3b8) = local_108;
    (**(code **)(*(longlong *)(param_1 + 0x3c0) + 0x20))(param_1 + 0x3c0,0);
    *(undefined **)(param_1 + 0x3c8) = local_f8;
    FUN_1406022fe(param_1 + 0x3d0,&local_f0);
    if ((local_118._4_4_ != 1.0) || (NAN(local_118._4_4_))) {
      fVar18 = local_118._4_4_ * *(float *)(param_1 + 0x348);
      *(float *)(param_1 + 0x348) = fVar18;
LAB_1412d14dd:
      fVar18 = ((*(float *)(param_1 + 0x338) + 1.0) / (1.0 - *(float *)(param_1 + 0x33c))) * fVar18
               * (*(float *)(param_1 + 0x34c) + *(float *)(param_1 + 0x340)) +
               *(float *)(param_1 + 0x344);
      *(float *)(param_1 + 0x354) = fVar18;
      *(undefined1 *)(param_1 + 0x358) = 0;
    }
    else {
      if ((*(byte *)(param_1 + 0x358) & 1) != 0) {
        fVar18 = *(float *)(param_1 + 0x348);
        goto LAB_1412d14dd;
      }
      fVar18 = *(float *)(param_1 + 0x354);
    }
    unaff_XMM6 = ZEXT416((uint)(fVar24 - fVar18));
    *(float *)(param_1 + 0x564) = fVar24 - fVar18;
  }
  cVar9 = FUN_1458ada68(*(undefined8 *)(param_1 + 0x580),param_1 + 0x58);
  if (cVar9 != '\0') {
    if (*(char *)(param_1 + 0x358) == '\x01') {
      fVar24 = ((*(float *)(param_1 + 0x338) + 1.0) / (1.0 - *(float *)(param_1 + 0x33c))) *
               *(float *)(param_1 + 0x348) *
               (*(float *)(param_1 + 0x34c) + *(float *)(param_1 + 0x340)) +
               *(float *)(param_1 + 0x344);
    }
    else {
      fVar24 = *(float *)(param_1 + 0x354);
    }
    *(float *)(param_1 + 0x560) = fVar24 + *(float *)(param_1 + 0x560);
    *(undefined8 *)(param_1 + 0x338) = 0;
    *(undefined8 *)(param_1 + 0x340) = 0;
    *(undefined8 *)(param_1 + 0x348) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x354) = 0;
    *(undefined1 *)(param_1 + 0x350) = 1;
    *(undefined1 *)(param_1 + 0x358) = 0;
  }
  local_100 = (undefined **)&DAT_14a171d50;
  uVar8 = uStack_e8 >> 0x20;
  uStack_e8 = uStack_e8 & 0xffffffff00000000;
  if ((int)uVar8 != 0) {
    FUN_140115c12(&local_f0,0);
  }
  local_f8 = (undefined *)0x0;
  if (local_f0 != 0) {
    FUN_1400020a8();
  }
  lVar13 = *(longlong *)(param_1 + 0x580);
  if (lVar13 == 0) goto LAB_1412d1319;
  lVar15 = *(longlong *)(lVar13 + 0x580);
  if ((lVar15 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar15);
  }
  plVar14 = *(longlong **)(lVar13 + 0x588);
  if (plVar14 != (longlong *)0x0 && lVar15 != 0) {
    uVar20 = (**(code **)(*plVar14 + 0x10))(plVar14);
    uVar27 = (undefined4)((ulonglong)uVar20 >> 0x20);
    fVar24 = (float)uVar20;
    unaff_XMM6._8_4_ = extraout_XMM0_Dc;
    unaff_XMM6._0_8_ = uVar20;
    unaff_XMM6._12_4_ = extraout_XMM0_Dd;
    *(float *)(param_1 + 0x550) = fVar24;
    bVar7 = false;
    bVar5 = false;
    if ((((*(double *)(param_1 + 0x210) == 0.0) &&
         (bVar5 = bVar7, !NAN(*(double *)(param_1 + 0x210)))) &&
        (*(double *)(param_1 + 0x218) == 0.0)) && (!NAN(*(double *)(param_1 + 0x218)))) {
      bVar5 = *(double *)(param_1 + 0x220) == 0.0;
    }
    fVar18 = (float)(**(code **)(*plVar14 + 0x20))(plVar14);
    if ((fVar24 <= 0.0 || bVar5) || (360.0 <= fVar18)) {
      if (fVar24 > 0.0 && !bVar5) goto LAB_1412d17af;
    }
    else {
      if (*(longlong *)(param_1 + 0x478) != 0) {
        FUN_1412d231c(*(undefined8 *)(param_1 + 0x580),&local_118);
        dVar2 = *(double *)(param_1 + 0x210);
        dVar3 = *(double *)(param_1 + 0x218);
        dVar22 = dVar2 * dVar2 + dVar3 * dVar3;
        if ((dVar22 != 1.0) || (NAN(dVar22))) {
          dVar21 = DAT_14c8464e8;
          dVar23 = DAT_14c8464f0;
          dVar6 = DAT_14c8464e0;
          if (9.99999993922529e-09 <= dVar22) {
            dVar21 = dVar3 * (1.0 / SQRT(dVar22));
            dVar23 = 0.0;
            dVar6 = dVar2 * (1.0 / SQRT(dVar22));
          }
        }
        else {
          dVar21 = dVar3;
          dVar23 = (double)(-(ulonglong)(*(double *)(param_1 + 0x220) == 0.0) &
                           (ulonglong)*(double *)(param_1 + 0x220));
          dVar6 = dVar2;
        }
        dVar3 = (double)CONCAT44(uStack_10c,uStack_110);
        dVar2 = -dVar6 * (double)local_118;
        dVar23 = dVar23 * (double)local_108;
        fVar18 = cosf(fVar18 * 0.5 * 0.017453292);
        if ((float)((dVar2 - dVar21 * dVar3) - dVar23) < fVar18) goto LAB_1412d18f4;
      }
LAB_1412d17af:
      if (*(char *)(param_1 + 0x358) == '\0') {
        fVar18 = *(float *)(param_1 + 0x354);
      }
      else {
        fVar18 = ((*(float *)(param_1 + 0x338) + 1.0) / (1.0 - *(float *)(param_1 + 0x33c))) *
                 *(float *)(param_1 + 0x348) *
                 (*(float *)(param_1 + 0x34c) + *(float *)(param_1 + 0x340)) +
                 *(float *)(param_1 + 0x344);
        *(float *)(param_1 + 0x354) = fVar18;
        *(undefined1 *)(param_1 + 0x358) = 0;
      }
      lVar13 = (**(code **)(*plVar14 + 0x38))(plVar14);
      if ((lVar13 != 0) && ((*(uint *)(param_1 + 0x1d0) & 2) != 0)) {
        if ((*(byte *)(lVar13 + 0xd0) & 2) == 0) {
          if ((*(byte *)(lVar13 + 0xd0) & 4) != 0) {
            uVar12 = rand();
            local_118 = (undefined1 *)((ulonglong)local_118 & 0xffffffffffffff00);
            local_f0 = local_f0 & 0xffffffff00000000;
            FUN_1456bb102(&local_118,*(undefined8 *)(param_1 + 0x478));
            pfVar16 = &local_e0;
            FUN_1448729ea(lVar13 + 0x128,pfVar16,&local_118);
            if (local_c0 == 3) {
              fVar19 = local_e0;
              bVar10 = 3;
            }
            else {
              pfVar17 = &local_b8;
              FUN_1400b56fe(pfVar17,&local_e0,3);
              fVar19 = 0.0;
              if (local_98 != 0) {
                fVar19 = local_b8;
              }
              pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
              if (pcVar4 != (code *)0x0) {
                if (0x18 < local_a0) {
                  pfVar17 = (float *)CONCAT44(uStack_b4,local_b8);
                }
                (*pcVar4)(pfVar17);
              }
              bVar10 = local_c0;
              if (0x18 < local_a0) {
                FUN_1400020a8(CONCAT44(uStack_b4,local_b8));
                bVar10 = local_c0;
              }
            }
            pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar10 * 0x120));
            if (pcVar4 != (code *)0x0) {
              if (0x18 < local_c8) {
                pfVar16 = (float *)CONCAT44(uStack_dc,local_e0);
              }
              (*pcVar4)(pfVar16);
            }
            if (0x18 < local_c8) {
              FUN_1400020a8(CONCAT44(uStack_dc,local_e0));
            }
            FUN_1448173f8(&local_f0);
            if (((char)local_118 == '\x03') && (local_108 != (longlong *)0x0)) {
              LOCK();
              piVar1 = (int *)((longlong)local_108 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_108 + 0x10))();
              }
            }
            uVar11 = 3;
            if ((float)(uVar12 & 0x7fff) / 32767.0 <= fVar19) goto LAB_1412d1e79;
          }
        }
        else {
          uVar12 = rand();
          local_118 = (undefined1 *)((ulonglong)local_118 & 0xffffffffffffff00);
          local_f0 = local_f0 & 0xffffffff00000000;
          FUN_1456bb102(&local_118,*(undefined8 *)(param_1 + 0x478));
          pfVar16 = &local_e0;
          FUN_1448729ea(lVar13 + 0xd8,pfVar16,&local_118);
          if (local_c0 == 3) {
            fVar19 = local_e0;
            bVar10 = 3;
          }
          else {
            pfVar17 = &local_b8;
            FUN_1400b56fe(pfVar17,&local_e0,3);
            fVar19 = 0.0;
            if (local_98 != 0) {
              fVar19 = local_b8;
            }
            pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
            if (pcVar4 != (code *)0x0) {
              if (0x18 < local_a0) {
                pfVar17 = (float *)CONCAT44(uStack_b4,local_b8);
              }
              (*pcVar4)(pfVar17);
            }
            bVar10 = local_c0;
            if (0x18 < local_a0) {
              FUN_1400020a8(CONCAT44(uStack_b4,local_b8));
              bVar10 = local_c0;
            }
          }
          pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar10 * 0x120));
          if (pcVar4 != (code *)0x0) {
            if (0x18 < local_c8) {
              pfVar16 = (float *)CONCAT44(uStack_dc,local_e0);
            }
            (*pcVar4)(pfVar16);
          }
          if (0x18 < local_c8) {
            FUN_1400020a8(CONCAT44(uStack_dc,local_e0));
          }
          FUN_1448173f8(&local_f0);
          if (((char)local_118 == '\x03') && (local_108 != (longlong *)0x0)) {
            LOCK();
            piVar1 = (int *)((longlong)local_108 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_108 + 0x10))();
            }
          }
          uVar11 = 2;
          if (((float)(uVar12 & 0x7fff) / 32767.0 <= fVar19) ||
             (uVar11 = 3, (*(byte *)(lVar13 + 0xd0) & 8) != 0)) {
LAB_1412d1e79:
            *(undefined1 *)(param_1 + 0x3a0) = uVar11;
          }
        }
        if (*(char *)(param_1 + 0x3a0) != '\0') {
          local_118 = (undefined1 *)((ulonglong)local_118 & 0xffffffffffffff00);
          local_f0 = local_f0 & 0xffffffff00000000;
          FUN_1456bb102(&local_118,*(undefined8 *)(param_1 + 0x478));
          pfVar16 = &local_e0;
          FUN_1448729ea(lVar13 + 0x180,pfVar16,&local_118);
          if (local_c0 == 3) {
            uVar12 = 3;
            fVar19 = local_e0;
          }
          else {
            pfVar17 = &local_b8;
            FUN_1400b56fe(pfVar17,&local_e0,3);
            fVar19 = local_b8;
            if (local_98 == 0) {
              fVar19 = 1.0;
            }
            pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
            if (pcVar4 != (code *)0x0) {
              if (0x18 < local_a0) {
                pfVar17 = (float *)CONCAT44(uStack_b4,local_b8);
              }
              (*pcVar4)(pfVar17);
            }
            if (0x18 < local_a0) {
              FUN_1400020a8(CONCAT44(uStack_b4,local_b8));
            }
            uVar12 = (uint)local_c0;
          }
          pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar12 * 0x120));
          if (pcVar4 != (code *)0x0) {
            if (0x18 < local_c8) {
              pfVar16 = (float *)CONCAT44(uStack_dc,local_e0);
            }
            (*pcVar4)(pfVar16);
          }
          if (0x18 < local_c8) {
            FUN_1400020a8(CONCAT44(uStack_dc,local_e0));
          }
          FUN_1448173f8(&local_f0);
          if (((char)local_118 == '\x03') && (local_108 != (longlong *)0x0)) {
            LOCK();
            piVar1 = (int *)((longlong)local_108 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_108 + 0x10))();
            }
          }
          local_118 = (undefined1 *)((ulonglong)local_118 & 0xffffffffffffff00);
          local_f0 = local_f0 & 0xffffffff00000000;
          FUN_1456bb102(&local_118,*(undefined8 *)(param_1 + 0x478));
          pfVar16 = &local_e0;
          FUN_1448729ea(lVar13 + 0x1d0,pfVar16,&local_118);
          if (local_c0 == 3) {
            uVar12 = 3;
            fVar25 = local_e0;
          }
          else {
            pfVar17 = &local_b8;
            FUN_1400b56fe(pfVar17,&local_e0,3);
            fVar25 = local_b8;
            if (local_98 == 0) {
              fVar25 = 1.0;
            }
            pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
            if (pcVar4 != (code *)0x0) {
              if (0x18 < local_a0) {
                pfVar17 = (float *)CONCAT44(uStack_b4,local_b8);
              }
              (*pcVar4)(pfVar17);
            }
            if (0x18 < local_a0) {
              FUN_1400020a8(CONCAT44(uStack_b4,local_b8));
            }
            uVar12 = (uint)local_c0;
          }
          *(float *)(param_1 + 0x3a4) = fVar25;
          pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar12 * 0x120));
          if (pcVar4 != (code *)0x0) {
            if (0x18 < local_c8) {
              pfVar16 = (float *)CONCAT44(uStack_dc,local_e0);
            }
            (*pcVar4)(pfVar16);
          }
          if (0x18 < local_c8) {
            FUN_1400020a8(CONCAT44(uStack_dc,local_e0));
          }
          fVar19 = fVar19 * fVar18;
          FUN_1448173f8(&local_f0);
          if (((char)local_118 == '\x03') && (local_108 != (longlong *)0x0)) {
            LOCK();
            piVar1 = (int *)((longlong)local_108 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_108 + 0x10))();
            }
          }
          *(float *)(param_1 + 0x3a8) = fVar19;
          *(float *)(param_1 + 900) = fVar18 - fVar19;
          *(undefined4 *)(param_1 + 0x3b0) = *(undefined4 *)(lVar13 + 0x178);
          *(byte *)(param_1 + 0x3ac) = *(byte *)(lVar13 + 0xd0) >> 4 & 1;
          (**(code **)(*(longlong *)(param_1 + 0x3c0) + 0x20))(param_1 + 0x3c0,0);
          *(undefined8 *)(param_1 + 0x3c8) = *(undefined8 *)(lVar13 + 0x228);
          FUN_1406022fe(param_1 + 0x3d0,lVar13 + 0x230);
          fVar18 = fVar19;
        }
      }
      if (fVar18 < fVar24) {
        fVar19 = fVar24 - fVar18;
        uVar28 = extraout_XMM0_Dc;
        uVar29 = extraout_XMM0_Dd;
      }
      else {
        fVar19 = 0.0;
        uVar27 = 0;
        uVar28 = 0;
        uVar29 = 0;
      }
      fVar24 = (float)(~-(uint)(fVar18 < fVar24) & (uint)(fVar18 - fVar24));
      *(undefined8 *)(param_1 + 0x338) = 0;
      *(undefined8 *)(param_1 + 0x340) = 0;
      *(undefined4 *)(param_1 + 0x348) = 0x3f800000;
      *(float *)(param_1 + 0x34c) = fVar24;
      *(float *)(param_1 + 0x354) = fVar24;
      *(undefined1 *)(param_1 + 0x350) = 1;
      *(undefined1 *)(param_1 + 0x358) = 0;
      if ((lVar13 != 0) && (fVar24 <= 0.0001)) {
        local_108 = *(longlong **)(param_1 + 0x220);
        local_118 = *(undefined1 **)(param_1 + 0x210);
        uStack_110 = *(uint *)(param_1 + 0x218);
        uStack_10c = *(undefined4 *)(param_1 + 0x21c);
        (**(code **)(*plVar14 + 0x40))(plVar14,&local_118,param_1 + 0xb8);
      }
      unaff_XMM6._4_4_ = uVar27;
      unaff_XMM6._0_4_ = fVar19;
      unaff_XMM6._8_4_ = uVar28;
      unaff_XMM6._12_4_ = uVar29;
    }
LAB_1412d18f4:
    *(int *)(param_1 + 0x554) = unaff_XMM6._0_4_;
  }
  lVar13 = *(longlong *)(param_1 + 0x580);
  if (((lVar13 != 0) && (plVar14 = *(longlong **)(lVar13 + 0x5c8), plVar14 != (longlong *)0x0)) &&
     (*(int *)(lVar13 + 0x5c4) != 0)) {
    uVar12 = *(uint *)(lVar13 + 0x5c0);
    if (((-1 < (int)uVar12) && ((int)uVar12 < DAT_14c9647dc)) &&
       ((lVar15 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8), lVar15 != 0 &&
        ((*(int *)(lVar15 + 0x10) == *(int *)(lVar13 + 0x5c4) &&
         ((*(uint *)(lVar15 + 8) & 0x10200000) == 0)))))) {
      if (*(code **)(*plVar14 + 0x10) == (code *)&LAB_1447a1f2e) {
        plVar14 = plVar14 + 0xd9;
      }
      else {
        plVar14 = (longlong *)(**(code **)(*plVar14 + 0x10))();
      }
      cVar9 = FUN_14486eb0e(plVar14,(uint *)(lVar13 + 0x5c0));
      if (cVar9 != '\0') {
        if ((*(longlong *)(param_1 + 0x38) == 0) ||
           (*(int *)(*(longlong *)(param_1 + 0x38) + 0xc) !=
            *(int *)(*(longlong *)(param_1 + 0x580) + 0x5e0))) {
          lVar15 = *(longlong *)(param_1 + 0x580) + 0x5c0;
          lVar13 = FUN_140280ec4(lVar15);
          if ((*(longlong *)(lVar13 + 0x18) == 0) ||
             (*(char *)(*(longlong *)(lVar13 + 0x18) + 0x18) != '\x01')) {
            fVar24 = *(float *)(lVar13 + 0x30);
          }
          else {
            auVar26 = roundps(unaff_XMM6,ZEXT416(*(uint *)(lVar13 + 0x30)),3);
            fVar24 = auVar26._0_4_;
          }
          lVar13 = FUN_140280ec4(lVar15);
          if (0.0001 <= fVar24 - *(float *)(lVar13 + 200)) {
            if (*(char *)(param_1 + 0x358) == '\x01') {
              fVar24 = ((*(float *)(param_1 + 0x338) + 1.0) / (1.0 - *(float *)(param_1 + 0x33c))) *
                       *(float *)(param_1 + 0x348) *
                       (*(float *)(param_1 + 0x34c) + *(float *)(param_1 + 0x340)) +
                       *(float *)(param_1 + 0x344);
              *(float *)(param_1 + 0x354) = fVar24;
              *(undefined1 *)(param_1 + 0x358) = 0;
            }
            else {
              fVar24 = *(float *)(param_1 + 0x354);
            }
            fVar18 = (float)FUN_1458adadc(*(undefined8 *)(param_1 + 0x580));
            fVar25 = (float)(-(uint)(fVar18 < fVar24) & (uint)(fVar24 - fVar18));
            fVar19 = 0.0;
            if (fVar24 <= fVar18) {
              fVar19 = fVar18 - fVar24;
            }
            FUN_1458adb22(*(undefined8 *)(param_1 + 0x580),fVar19);
            FUN_14095dc64(*(longlong *)(param_1 + 0x580) + 0x568,param_1);
            if (*(char *)(param_1 + 0x358) == '\x01') {
              fVar24 = ((*(float *)(param_1 + 0x338) + 1.0) / (1.0 - *(float *)(param_1 + 0x33c))) *
                       *(float *)(param_1 + 0x348) *
                       (*(float *)(param_1 + 0x34c) + *(float *)(param_1 + 0x340)) +
                       *(float *)(param_1 + 0x344);
            }
            else {
              fVar24 = *(float *)(param_1 + 0x354);
            }
            *(float *)(param_1 + 0x55c) = fVar24 - fVar25;
            *(undefined8 *)(param_1 + 0x338) = 0;
            *(undefined8 *)(param_1 + 0x340) = 0;
            *(undefined4 *)(param_1 + 0x348) = 0x3f800000;
            *(float *)(param_1 + 0x34c) = fVar25;
            *(float *)(param_1 + 0x354) = fVar25;
            *(undefined1 *)(param_1 + 0x350) = 1;
            *(undefined1 *)(param_1 + 0x358) = 0;
          }
        }
      }
    }
  }
LAB_1412d1319:
  if ((local_90 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1409f13bc(param_1);
  return;
}



// FUNCTION 1412d228c FUN_1412d228c body=143 status=ok
// SIG undefined FUN_1412d228c(void)

bool FUN_1412d228c(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  code *pcVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  
  iVar8 = *(uint *)(param_1 + 0x5a8) + 1;
  lVar7 = (ulonglong)*(uint *)(param_1 + 0x5a8) * 0x50 + -0x20;
  do {
    iVar8 = iVar8 + -1;
    if (iVar8 < 1) goto LAB_1412d22bc;
    lVar1 = *(longlong *)(param_1 + 0x5a0);
    pcVar2 = *(code **)(lVar1 + -0x20 + lVar7);
    plVar3 = *(longlong **)(lVar1 + -0x10 + lVar7);
    plVar6 = (longlong *)(lVar1 + lVar7);
    if (plVar3 != (longlong *)0x0) {
      plVar6 = plVar3;
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    cVar4 = (*pcVar2)(uVar5,param_2,param_3);
    lVar7 = lVar7 + -0x50;
  } while (cVar4 == '\0');
  if (*(longlong *)(param_3 + 0x10) == 0) {
    *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(param_1 + 0x4f0);
  }
LAB_1412d22bc:
  return 0 < iVar8;
}



// FUNCTION 1412d231c FUN_1412d231c body=846 status=ok
// SIG undefined FUN_1412d231c(void)

double * FUN_1412d231c(longlong param_1,double *param_2)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  double dVar11;
  double *pdVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined2 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined8 *local_b0;
  code *local_a8;
  code *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  double local_68;
  ulonglong local_60;
  longlong lVar15;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  param_2[2] = DAT_14c8462e8;
  uVar9 = DAT_14c8462e0._4_4_;
  uVar8 = (undefined4)DAT_14c8462e0;
  uVar13 = DAT_14c8462d8._4_4_;
  *(undefined4 *)param_2 = (undefined4)DAT_14c8462d8;
  *(undefined4 *)((longlong)param_2 + 4) = uVar13;
  *(undefined4 *)(param_2 + 1) = uVar8;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar9;
  plVar1 = *(longlong **)(param_1 + 0x250);
  if (plVar1 != (longlong *)0x0) {
    if (DAT_14caf64b8 == 0.0) {
      local_b0 = &local_98;
      local_98 = FUN_141030f22;
      local_a0 = FUN_14081d0ea;
      local_a8 = FUN_142b4754c;
      local_b8 = &LAB_147c45ce0;
      local_c0 = &LAB_1463f1ff4;
      local_c8 = &DAT_149e063b2;
      local_d0 = 0x4000000000;
      local_d8 = 0x10000004;
      local_e0 = 8;
      local_e8 = 0x428;
      FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
    }
    lVar15 = plVar1[2];
    dVar11 = DAT_14caf64b8;
    if (*(int *)((longlong)DAT_14caf64b8 + 0x38) <= *(int *)(lVar15 + 0x38)) {
      dVar11 = (double)((longlong)DAT_14caf64b8 + 0x30);
      lVar15 = *(longlong *)(lVar15 + 0x30);
      if (*(double *)(lVar15 + (longlong)*(int *)((longlong)DAT_14caf64b8 + 0x38) * 8) == dVar11) {
        (**(code **)(*plVar1 + 0x710))(plVar1,&local_98);
        local_98 = (code *)0x0;
        dVar5 = (double)FUN_144719204(0,0);
        dVar3 = (double)FUN_144719204(SUB84(uStack_90,0),0);
        dVar11 = sin(dVar5 * 0.017453292519943295);
        dVar5 = cos(dVar5 * 0.017453292519943295);
        dVar2 = sin(dVar3 * 0.017453292519943295);
        dVar3 = cos(dVar3 * 0.017453292519943295);
        *param_2 = dVar3 * dVar5;
        param_2[1] = dVar2 * dVar5;
        param_2[2] = dVar11;
        goto LAB_1412d245d;
      }
    }
    uVar13 = (undefined4)lVar15;
    lVar15 = plVar1[0x39];
    if (lVar15 == 0) {
      local_68 = DAT_14c846508;
      local_78 = (undefined4)DAT_14c8464f8;
      uStack_74 = DAT_14c8464f8._4_4_;
      uStack_70 = (undefined4)DAT_14c846500;
      uStack_6c = DAT_14c846500._4_4_;
    }
    else {
      pcVar7 = *(code **)(lVar15 + 0x240);
      dVar5 = *(double *)(lVar15 + 0x248);
      dVar2 = *(double *)(lVar15 + 0x250);
      dVar3 = *(double *)(lVar15 + 600);
      pdVar12 = *(double **)(lVar15 + 0x228);
      local_98 = pcVar7;
      uStack_90 = dVar5;
      local_88 = dVar2;
      uStack_80 = dVar3;
      if (pdVar12 == (double *)0x0) {
        uVar13 = 0x40;
        pdVar12 = (double *)FUN_14001cc68(0x40,0x10);
        dVar11 = DAT_14c8463d8;
        *pdVar12 = DAT_14c8463d0;
        pdVar12[1] = dVar11;
        dVar11 = DAT_14c8463e8;
        pdVar12[2] = DAT_14c8463e0;
        pdVar12[3] = dVar11;
        dVar11 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
        pdVar12[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
        pdVar12[5] = dVar11;
        dVar11 = DAT_14c846508;
        pdVar12[6] = DAT_14c846508;
        *(double **)(lVar15 + 0x228) = pdVar12;
      }
      auVar4._8_4_ = (int)-(ulonglong)(dVar5 != pdVar12[1]);
      auVar4._0_8_ = -(ulonglong)((double)pcVar7 != *pdVar12);
      auVar4._12_4_ = (int)(-(ulonglong)(dVar5 != pdVar12[1]) >> 0x20);
      iVar10 = movmskpd(SUB84(dVar11,0),auVar4);
      auVar6._8_4_ = (int)-(ulonglong)(dVar3 != pdVar12[3]);
      auVar6._0_8_ = -(ulonglong)(dVar2 != pdVar12[2]);
      auVar6._12_4_ = (int)(-(ulonglong)(dVar3 != pdVar12[3]) >> 0x20);
      uVar14 = movmskpd(uVar13,auVar6);
      if ((uVar14 & 0x3fffffff) != 0 || iVar10 != 0) {
        *(undefined4 *)(pdVar12 + 2) = (undefined4)local_88;
        *(undefined4 *)((longlong)pdVar12 + 0x14) = local_88._4_4_;
        *(undefined4 *)(pdVar12 + 3) = (undefined4)uStack_80;
        *(undefined4 *)((longlong)pdVar12 + 0x1c) = uStack_80._4_4_;
        *(undefined4 *)pdVar12 = (undefined4)local_98;
        *(undefined4 *)((longlong)pdVar12 + 4) = local_98._4_4_;
        *(undefined4 *)(pdVar12 + 1) = (undefined4)uStack_90;
        *(undefined4 *)((longlong)pdVar12 + 0xc) = uStack_90._4_4_;
        FUN_1448052ee(&local_98,&local_78);
        pdVar12[6] = local_68;
        pdVar12[4] = (double)CONCAT44(uStack_74,local_78);
        pdVar12[5] = (double)CONCAT44(uStack_6c,uStack_70);
      }
      local_68 = pdVar12[6];
      local_78 = *(undefined4 *)(pdVar12 + 4);
      uStack_74 = *(undefined4 *)((longlong)pdVar12 + 0x24);
      uStack_70 = *(undefined4 *)(pdVar12 + 5);
      uStack_6c = *(undefined4 *)((longlong)pdVar12 + 0x2c);
    }
    FUN_144a76660(&local_78,param_2);
  }
LAB_1412d245d:
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412d266c FUN_1412d266c body=739 status=ok
// SIG undefined FUN_1412d266c(void)

void FUN_1412d266c(longlong param_1,undefined8 *param_2,int *param_3,longlong param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  byte bVar7;
  undefined2 *puVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = *(undefined8 *)(param_1 + 0x18);
  local_40 = *(undefined8 *)(param_1 + 0x18);
  FUN_1400021e4(&local_40,&local_50);
  puVar8 = local_50;
  if (local_48 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  iVar10 = 0;
  iVar6 = local_48 + -1;
  if (local_48 == 0) {
    iVar6 = iVar10;
  }
  uVar2 = FUN_144a49b4a(iVar6,puVar8);
  *(undefined4 *)(param_2 + 1) = uVar2;
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  *(undefined1 *)(param_2 + 5) = 2;
  param_2[4] = 0x1000100000001;
  lVar5 = FUN_140032b16(0);
  lVar5 = FUN_1412d2950(*(undefined8 *)(lVar5 + 0x78),*(undefined1 *)(param_1 + 0x44));
  iVar6 = *(int *)(param_1 + 0x2c) + *(int *)(lVar5 + 0x50);
  if (3 < iVar6) {
    iVar6 = 4;
  }
  if (iVar6 < 1) {
    iVar6 = iVar10;
  }
  *(int *)(param_2 + 2) = 0x40 << ((byte)iVar6 & 0x1f);
  iVar6 = 4;
  if (*(int *)(param_1 + 0x30) < 4) {
    iVar6 = *(int *)(param_1 + 0x30);
  }
  if (iVar6 < 1) {
    iVar6 = 0;
  }
  *(int *)((longlong)param_2 + 0x14) = iVar6 * 2;
  lVar5 = FUN_140032b16(0);
  lVar5 = FUN_1412d2950(*(undefined8 *)(lVar5 + 0x78),*(undefined1 *)(param_1 + 0x44));
  iVar6 = *(int *)(param_1 + 0x28) + *(int *)(lVar5 + 0x4c) + *param_3;
  iVar3 = (uint)*(byte *)(param_1 + 0x3c) * 8 + 0xc;
  if (iVar3 <= iVar6) {
    iVar6 = iVar3;
  }
  if (iVar6 < 1) {
    iVar6 = iVar10;
  }
  uVar11 = 1 << ((byte)iVar6 & 0x1f);
  dVar15 = ABS(*(double *)(param_4 + 0x40));
  if (dVar15 <= 9.999999747378752e-05) {
    dVar15 = 9.999999747378752e-05;
  }
  dVar16 = ABS(*(double *)(param_4 + 0x48));
  if (dVar16 <= 9.999999747378752e-05) {
    dVar16 = 9.999999747378752e-05;
  }
  dVar15 = log(dVar15 / dVar16);
  fVar14 = (float)(dVar15 * 1.4426950408889634);
  if (fVar14 < 0.0) {
    uVar4 = uVar11 >> ((byte)((uint)(int)ROUND((-fVar14 - fVar14) + 0.5) >> 1) & 0x1f);
    uVar4 = uVar4 + (uVar4 == 0);
    uVar12 = uVar11;
  }
  else {
    uVar12 = uVar11 >> ((byte)((uint)(int)ROUND(fVar14 + fVar14 + 0.5) >> 1) & 0x1f);
    uVar12 = uVar12 + (uVar12 == 0);
    uVar4 = uVar11;
  }
  *(uint *)(param_2 + 3) = uVar4;
  *(uint *)((longlong)param_2 + 0x1c) = uVar12;
  if (uVar4 < uVar12) {
    uVar4 = uVar12;
  }
  uVar9 = (ulonglong)(uVar4 - 1) * 2 + 1;
  lVar5 = 0x3f;
  if (uVar9 != 0) {
    for (; uVar9 >> lVar5 == 0; lVar5 = lVar5 + -1) {
    }
  }
  iVar6 = 5;
  if (*(int *)(param_1 + 0x40) < 5) {
    iVar6 = *(int *)(param_1 + 0x40);
  }
  if (iVar6 < 1) {
    iVar6 = 0;
  }
  iVar6 = (int)lVar5 - iVar6;
  if (iVar6 < 1) {
    iVar6 = 0;
  }
  *(char *)((longlong)param_2 + 0x29) = (char)iVar6;
  *(undefined1 *)((longlong)param_2 + 0xd) = *(undefined1 *)(param_1 + 0x3d);
  bVar7 = 1;
  if ((byte)*(int *)(param_1 + 0x34) < 6) {
    bVar7 = (byte)(0x30302020101 >> ((byte)(*(int *)(param_1 + 0x34) << 3) & 0x3f));
  }
  *(byte *)((longlong)param_2 + 0x2a) = bVar7;
  uVar1 = 1;
  if ((*(char *)(param_1 + 0x3a) == '\0') && (*(byte *)(param_1 + 0x34) < 6)) {
    uVar1 = (undefined1)(0x30302020101 >> ((*(byte *)(param_1 + 0x34) & 7) << 3));
  }
  *(undefined1 *)((longlong)param_2 + 0xbc) = uVar1;
  uVar9 = 0;
  do {
    uVar1 = FUN_1412d295c(param_1,uVar9 & 0xffffffff);
    *(undefined1 *)((longlong)param_2 + uVar9 + 0x2b) = uVar1;
    uVar1 = (undefined1)uVar9;
    if (*(char *)(param_1 + 0x3a) != '\0') {
      uVar1 = 0;
    }
    *(undefined1 *)((longlong)param_2 + uVar9 + 0xbd) = uVar1;
    if ((*(char *)(param_1 + 0x34) == '\x03') || (bVar13 = false, *(char *)(param_1 + 0x34) == '\0')
       ) {
      bVar13 = uVar9 == 0;
    }
    *(bool *)((longlong)param_2 + uVar9 + 0xb4) = bVar13;
    uVar9 = uVar9 + 1;
  } while (bVar7 != uVar9);
  if (*(char *)(param_1 + 0x38) == '\x01') {
    uVar1 = *(undefined1 *)(param_1 + 0x37);
  }
  else {
    uVar1 = 4;
    if (*(byte *)(param_1 + 0x34) < 8) {
      uVar1 = (undefined1)(0x102060606060306 >> ((*(byte *)(param_1 + 0x34) & 7) << 3));
    }
  }
  *(undefined1 *)((longlong)param_2 + 0xc5) = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412d2950 FUN_1412d2950 body=12 status=ok
// SIG undefined FUN_1412d2950(void)

longlong FUN_1412d2950(longlong param_1,int param_2)

{
  return (longlong)param_2 * 0x5c + *(longlong *)(param_1 + 0x28);
}



// FUNCTION 1412d295c FUN_1412d295c body=369 status=ok
// SIG undefined FUN_1412d295c(void)

undefined4 FUN_1412d295c(longlong param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  
  if (param_2 != 0) {
    if (param_2 != 1) {
      if (param_2 != 2) {
        return 2;
      }
      if (*(char *)(param_1 + 0x34) == '\x05') goto switchD_1412d297e_caseD_3;
      if (*(char *)(param_1 + 0x34) != '\x04') {
        return 2;
      }
      goto switchD_1412d297e_caseD_0;
    }
    bVar1 = *(byte *)(param_1 + 0x34);
    if (1 < bVar1 - 4) {
      if (bVar1 == 3) goto switchD_1412d297e_caseD_1;
      if (bVar1 != 2) {
        return 2;
      }
      if (*(char *)(param_1 + 0x35) != '\x01') {
        return 2;
      }
      if (*(char *)(param_1 + 0x36) == '\x01') goto LAB_1412d2a11;
      goto LAB_1412d29de;
    }
    if (*(char *)(param_1 + 0x35) != '\x01') {
      return 2;
    }
    if ((DAT_14c873888 & 1) != 0) {
      return 0x17;
    }
    bVar4 = (DAT_14c873cd8 & 1) == 0;
    uVar3 = 0x17;
    uVar2 = 0x46;
    goto LAB_1412d29fa;
  }
  uVar2 = 4;
  switch(*(undefined1 *)(param_1 + 0x34)) {
  case 0:
switchD_1412d297e_caseD_0:
    if (*(char *)(param_1 + 0x35) != '\x01') {
      return 2;
    }
LAB_1412d2a81:
    if ((DAT_14c873528 & 1) != 0) {
      return 5;
    }
    bVar4 = (DAT_14c873cd8 & 1) == 0;
    uVar3 = 5;
    uVar2 = 0x2e;
    break;
  case 1:
switchD_1412d297e_caseD_1:
    if (*(char *)(param_1 + 0x35) != '\x01') {
      return 2;
    }
    goto LAB_1412d29de;
  case 2:
    if (*(char *)(param_1 + 0x35) != '\x01') {
      return 2;
    }
    if (*(char *)(param_1 + 0x36) != '\x01') goto LAB_1412d2a81;
LAB_1412d2a11:
    uVar3 = 5;
    uVar2 = 0x24;
    if ((DAT_14c873af8 & 1) == 0) {
      uVar2 = 5;
    }
    bVar4 = (DAT_14c8741b8 & 1) == 0;
    break;
  case 3:
  case 4:
  case 5:
switchD_1412d297e_caseD_3:
    if (*(char *)(param_1 + 0x35) != '\x01') {
switchD_1412d297e_caseD_6:
      return 2;
    }
LAB_1412d29de:
    if ((DAT_14c873588 & 1) != 0) {
      return 7;
    }
    bVar4 = (DAT_14c873cd8 & 1) == 0;
    uVar3 = 7;
    uVar2 = 0x2f;
    break;
  case 6:
    goto switchD_1412d297e_caseD_6;
  case 7:
    if (*(char *)(param_1 + 0x35) != '\x01') {
      return 4;
    }
    if ((DAT_14c873b88 & 1) != 0) {
      return 0x27;
    }
    bVar4 = (DAT_14c873cd8 & 1) == 0;
    uVar3 = 0x27;
    uVar2 = 0x45;
    break;
  default:
    goto switchD_1412d297e_caseD_6;
  }
LAB_1412d29fa:
  if (bVar4) {
    uVar2 = uVar3;
  }
switchD_1412d297e_caseD_6:
  return uVar2;
}



// FUNCTION 1412d2ace FUN_1412d2ace body=1688 status=ok
// SIG undefined FUN_1412d2ace(void)

void FUN_1412d2ace(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
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
      local_58 = FUN_1446ddbd2();
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
            goto LAB_1412d2bb9;
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
LAB_1412d2bb9:
  local_38 = 0;
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
            goto LAB_1412d2c86;
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
LAB_1412d2c86:
  local_40 = 0;
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
            goto LAB_1412d2d53;
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
LAB_1412d2d53:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1412d3168(param_1,local_30,local_38,local_40);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412d3168 FUN_1412d3168 body=244 status=ok
// SIG undefined FUN_1412d3168(void)

void FUN_1412d3168(longlong param_1,longlong param_2,undefined8 param_3)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  byte bVar6;
  
  if (param_1 == param_2) {
    FUN_1412d33aa();
    lVar3 = FUN_1412d325c(param_3);
    if (lVar3 != 0) {
      if (*(longlong *)(lVar3 + 0x3f70) == 0) {
        bVar6 = 0;
      }
      else {
        bVar6 = *(byte *)(*(longlong *)(lVar3 + 0x3f70) + 0x1086);
      }
      puVar1 = (uint *)(param_1 + 0x6f0);
      if (((((*(int *)(param_1 + 0x6f4) != 0) && (uVar2 = *puVar1, -1 < (int)uVar2)) &&
           ((int)uVar2 < DAT_14c9647dc)) &&
          ((lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar5 != 0 &&
           (*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x6f4))))) &&
         (((*(uint *)(lVar5 + 8) & 0x10200000) == 0 &&
          ((lVar5 = FUN_14479d2ce(puVar1), (*(byte *)(lVar5 + 0x65) & 2) == 0 &&
           ((((byte)((uint)*(undefined4 *)(lVar5 + 8) >> 0x1e) | bVar6) & 1) == 0)))))) {
        return;
      }
      lVar5 = FUN_14479d2ce(puVar1);
      if (lVar5 != lVar3) {
        FUN_14485c47a(puVar1,lVar3);
        uVar4 = FUN_14479d2ce(puVar1);
        FUN_140fbbfc8(param_1 + 0x6d8,uVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1412d325c FUN_1412d325c body=309 status=ok
// SIG undefined FUN_1412d325c(void)

longlong FUN_1412d325c(longlong param_1)

{
  longlong lVar1;
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
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 != 0) {
    if (DAT_14cba8288 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141864c34;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1464cee30;
      local_38 = &LAB_148bfac22;
      local_40 = &LAB_140f21842;
      local_48 = &DAT_149e063b2;
      local_50 = 0;
      local_58 = 0x10000004;
      local_60 = 0x10;
      local_68 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) goto LAB_1412d32e1;
    lVar1 = FUN_1402095ca();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_88);
    }
  }
  param_1 = 0;
LAB_1412d32e1:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412d33a2 FUN_1412d33a2 body=8 status=ok
// SIG undefined FUN_1412d33a2(void)

undefined8 FUN_1412d33a2(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x1710);
}



// FUNCTION 1412d33aa FUN_1412d33aa body=667 status=ok
// SIG undefined FUN_1412d33aa(void)

void FUN_1412d33aa(longlong param_1)

{
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined1 *local_a0;
  undefined1 local_91;
  char local_90 [16];
  longlong *local_80;
  int local_68;
  char local_60;
  undefined8 local_58;
  longlong *local_50;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(char *)(param_1 + 0x178) == '\x03') {
    if (*(int *)(param_1 + 0x720) != 0) {
      FUN_14053d8da(param_1 + 0x718,1);
    }
    lVar3 = FUN_1405c673d();
    if (0 < *(int *)(lVar3 + 0x48)) {
      local_90[0] = '\0';
      local_68 = 0;
      FUN_1456bb102(local_90,param_1);
      local_60 = '\0';
      local_38 = 0;
      local_a0 = &local_91;
      local_a8 = 0;
      FUN_140c3fc86(lVar3 + 0x40,param_1 + 0x718,param_1,local_90);
      lVar3 = DAT_14c9a3da0;
      if ((longlong)local_38 != 0) {
        lVar7 = (longlong)local_38 + -1;
        lVar8 = lVar7 * 0x10;
        FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar8),
                      *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar8));
        if (*(longlong *)(lVar3 + lVar8) != 0) {
          FUN_1400020a8();
        }
        lVar3 = DAT_14c9a3da0;
        iVar6 = (int)lVar7;
        if (DAT_14c9a3dd4 != 0) {
          *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar6;
        }
        *(undefined4 *)(lVar3 + lVar8) = 0xffffffff;
        iVar4 = -1;
        if (0 < DAT_14c9a3dd4) {
          iVar4 = DAT_14c9a3dd0;
        }
        *(int *)(lVar3 + 4 + lVar8) = iVar4;
        DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
        puVar5 = &DAT_14c9a3db0;
        if (DAT_14c9a3dc0 != (undefined *)0x0) {
          puVar5 = DAT_14c9a3dc0;
        }
        iVar4 = iVar6 + 0x1f;
        if (-1 < iVar6) {
          iVar4 = iVar6;
        }
        bVar2 = (byte)lVar7 & 0x1f;
        DAT_14c9a3dd0 = iVar6;
        *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
             *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) &
             (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
        local_38 = 0;
      }
      if (local_60 != '\0') {
        if (local_60 == '\x01') {
          local_58 = 0;
        }
        else if ((local_60 == '\x03') && (local_50 != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)local_50 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_50 + 0x10))();
          }
        }
        local_60 = '\0';
      }
      lVar3 = DAT_14c9a3da0;
      if ((longlong)local_68 != 0) {
        lVar7 = (longlong)local_68 + -1;
        lVar8 = lVar7 * 0x10;
        FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar8),
                      *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar8));
        if (*(longlong *)(lVar3 + lVar8) != 0) {
          FUN_1400020a8();
        }
        lVar3 = DAT_14c9a3da0;
        iVar6 = (int)lVar7;
        if (DAT_14c9a3dd4 != 0) {
          *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar6;
        }
        *(undefined4 *)(lVar3 + lVar8) = 0xffffffff;
        iVar4 = -1;
        if (0 < DAT_14c9a3dd4) {
          iVar4 = DAT_14c9a3dd0;
        }
        *(int *)(lVar3 + 4 + lVar8) = iVar4;
        DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
        puVar5 = &DAT_14c9a3db0;
        if (DAT_14c9a3dc0 != (undefined *)0x0) {
          puVar5 = DAT_14c9a3dc0;
        }
        iVar4 = iVar6 + 0x1f;
        if (-1 < iVar6) {
          iVar4 = iVar6;
        }
        bVar2 = (byte)lVar7 & 0x1f;
        DAT_14c9a3dd0 = iVar6;
        *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
             *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) &
             (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
        local_68 = 0;
      }
      if ((local_90[0] == '\x03') && (local_80 != (longlong *)0x0)) {
        LOCK();
        piVar1 = (int *)((longlong)local_80 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_80 + 0x10))();
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412d3646 FUN_1412d3646 body=62 status=ok
// SIG undefined FUN_1412d3646(void)

void FUN_1412d3646(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1447cd2ec(param_1,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412d3686 FUN_1412d3686 body=204 status=ok
// SIG undefined FUN_1412d3686(void)

uint * FUN_1412d3686(uint *param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  bool bVar6;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_2 == (longlong *)0x0) || (lVar4 = (**(code **)(*param_2 + 8))(param_2), lVar4 == 0)) {
    *param_1 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(lVar4 + 0xc);
    *param_1 = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    uVar3 = *(uint *)(lVar4 + 0x10);
    if (*(uint *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar3 = *(uint *)(lVar4 + 0x10);
      bVar6 = uVar3 == 0;
      if (bVar6) {
        *(uint *)(lVar4 + 0x10) = uVar5;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar6) {
        uVar3 = uVar5;
      }
    }
  }
  param_1[1] = uVar3;
  cVar2 = FUN_14493c216(param_1,0);
  if (cVar2 == '\0') {
    *(longlong **)(param_1 + 2) = param_2;
  }
  return param_1;
}



// FUNCTION 1412d3752 FUN_1412d3752 body=30 status=ok
// SIG undefined FUN_1412d3752(void)

void FUN_1412d3752(longlong *param_1)

{
  (**(code **)(*param_1 + 0x738))();
  FUN_1407fb560(param_1);
  return;
}



// FUNCTION 1412d3770 FUN_1412d3770 body=77 status=ok
// SIG undefined FUN_1412d3770(void)

void FUN_1412d3770(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x3c0);
  if ((plVar1 != (longlong *)0x0) && (plVar1[0x7a] == param_1)) {
    (**(code **)(*plVar1 + 0x6f8))(plVar1,param_1);
    if (*(longlong *)(param_1 + 0x3c0) != 0) {
      FUN_1413ef136();
      *(undefined8 *)(param_1 + 0x3c0) = 0;
    }
  }
  return;
}



// FUNCTION 1412d37be FUN_1412d37be body=7200 status=ok
// SIG undefined FUN_1412d37be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412d37be(code *param_1,code param_2)

{
  int *piVar1;
  void *pvVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined *puVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong *plVar14;
  double dVar15;
  longlong lVar16;
  double *pdVar17;
  undefined8 uVar18;
  uint uVar19;
  code *pcVar20;
  int iVar21;
  longlong lVar22;
  ulonglong uVar23;
  code *pcVar24;
  longlong *plVar25;
  ulonglong uVar26;
  longlong lVar27;
  char cVar28;
  bool bVar29;
  double dVar30;
  double extraout_XMM0_Qa;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined4 uVar43;
  undefined4 uVar44;
  float fVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined1 auStack_628 [32];
  code **local_608;
  ulonglong local_600;
  undefined4 local_5f8;
  undefined8 local_5f0;
  wchar_t *local_5e8;
  undefined1 *local_5e0;
  undefined1 *local_5d8;
  code **local_5d0;
  undefined1 *local_5c8;
  code *local_5c0;
  byte local_5b1;
  code *local_5b0;
  longlong *local_5a8;
  longlong local_5a0;
  double local_598;
  longlong local_588;
  longlong local_580;
  double local_578;
  longlong local_568;
  int local_560;
  longlong local_558;
  int local_550;
  longlong local_548;
  int local_540;
  longlong *local_538;
  longlong *plStack_530;
  undefined4 local_520;
  undefined4 uStack_51c;
  double dStack_518;
  double local_510;
  undefined4 local_47c;
  undefined4 local_450;
  double local_420;
  double local_418;
  double local_410;
  double local_408;
  double dStack_400;
  double local_3f8;
  double local_3e8;
  double dStack_3e0;
  double local_3d8;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  undefined1 local_3a8 [32];
  double local_388;
  double dStack_380;
  double local_378;
  undefined8 uStack_370;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  double local_328;
  double dStack_320;
  double dStack_318;
  void *local_310;
  ulonglong local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  longlong local_2e8;
  ulonglong uStack_2e0;
  code *local_2d8;
  undefined8 uStack_2d0;
  undefined1 local_2c8 [16];
  undefined *local_2b8;
  double dStack_2b0;
  double dStack_2a8;
  undefined8 uStack_2a0;
  double local_298;
  double dStack_290;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 local_270;
  undefined4 local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined4 local_250;
  undefined2 local_24c;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  void *pvStack_220;
  undefined8 local_218;
  undefined **local_210;
  undefined *local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d4;
  undefined4 local_1cc;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined4 local_1a0;
  undefined2 local_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  void *pvStack_170;
  undefined8 local_168;
  longlong local_158 [13];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_628;
  lVar27 = *(longlong *)(param_1 + 0x1710);
  if (lVar27 == 0) goto LAB_1412d3894;
  lVar11 = (**(code **)(*(longlong *)(lVar27 + 0x3c20) + 0x18))(lVar27 + 0x3c20);
  lVar27 = *(longlong *)(param_1 + 0x1710);
  if (((lVar11 == 0 || lVar27 == 0) || ((*(byte *)(lVar27 + 0x65) & 2) != 0)) ||
     ((*(byte *)(lVar27 + 0x348) & 2) != 0)) goto LAB_1412d3894;
  FUN_14584a472(lVar27,1);
  if (param_1[0x178] == (code)0x3) {
    param_1[0x1728] = param_2;
  }
  if (param_1[0x1c28] == (code)0x1) {
    param_1[0x1c28] = (code)0x0;
  }
  if ((byte)param_2 - 1 < 2) {
    FUN_14599e4dc(param_1);
  }
  else {
    if ((byte)param_2 == 3) {
      local_2d8 = param_1;
      FUN_1447cd2ec(param_1 + 0x1e80);
    }
    FUN_14599e66c(param_1);
    (**(code **)(*(longlong *)param_1 + 0x330))(param_1,1);
    plVar14 = *(longlong **)(param_1 + 0x428);
    if (plVar14 != (longlong *)0x0) {
      (**(code **)(*plVar14 + 0x940))(plVar14,0);
    }
  }
  uVar26 = 0;
  FUN_1459db89c(param_1,0);
  lVar27 = *(longlong *)(param_1 + 0x1a08);
  if (lVar27 == 0) {
    uVar23 = 0;
  }
  else {
    uVar26 = *(ulonglong *)(lVar27 + 0x178);
    uVar23 = uVar26 & 0xffffffff00000000;
  }
  if (param_1[0x178] == (code)0x3) {
    lVar12 = *(longlong *)(param_1 + 0x1710);
    cVar28 = true;
  }
  else {
    cVar8 = (**(code **)(*(longlong *)param_1 + 0x700))(param_1);
    lVar12 = *(longlong *)(param_1 + 0x1710);
    cVar28 = true;
    if (cVar8 == '\0') {
      if ((*(longlong *)(lVar12 + 0x1c8) == 0) ||
         (lVar22 = *(longlong *)(*(longlong *)(lVar12 + 0x1c8) + 0x120), lVar22 == 0)) {
        lVar22 = 0;
      }
      else {
        lVar22 = *(longlong *)(lVar22 + 0xa8);
      }
      cVar28 = lVar22 != 0;
    }
  }
  FUN_14117b5f2(lVar12,1,1,1);
  lVar12 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x1710) + 0x860) + 0x10))
                     (*(longlong *)(param_1 + 0x1710) + 0x860);
  FUN_1400bc8c2(lVar12 + 0x18,&DAT_14cbc2c50);
  FUN_1400bc8c2(lVar12 + 0x40,&DAT_14cbc2c50);
  uVar13 = (**(code **)(*(longlong *)(param_1 + 0x4a8) + 0x10))(param_1 + 0x4a8);
  FUN_145d5f140(uVar13,*(longlong *)(param_1 + 0x1710));
  local_348 = 0;
  uStack_340 = 0xffff;
  local_338 = 0;
  FUN_140365ba6(param_1 + 0x1518,&local_348,1);
  FUN_1412d65f2(lVar11,0);
  plVar14 = *(longlong **)(param_1 + 0x428);
  if (plVar14 != (longlong *)0x0) {
    (**(code **)(*plVar14 + 0x940))(plVar14,0);
  }
  FUN_1405e47c6(*(longlong *)(param_1 + 0x1710),1);
  FUN_14584a472(*(longlong *)(param_1 + 0x1710),0);
  (**(code **)(**(longlong **)(param_1 + 0x1c8) + 0x4a8))
            (*(longlong **)(param_1 + 0x1c8),local_3a8,uVar23 | uVar26 & 0xffffffff,0);
  lVar12 = *(longlong *)(param_1 + 0x1710);
  local_388 = local_388 - *(double *)(lVar12 + 0x500);
  dStack_380 = dStack_380 - *(double *)(lVar12 + 0x508);
  local_378 = local_378 - *(double *)(lVar12 + 0x510);
  uStack_370 = 0;
  if (param_1[0x178] == (code)0x3) {
    pcVar20 = param_1 + 0x1750;
    pcVar24 = (code *)local_3a8;
LAB_1412d3bb6:
    for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
      *(longlong *)pcVar20 = *(longlong *)pcVar24;
      pcVar24 = pcVar24 + 8;
      pcVar20 = pcVar20 + 8;
    }
  }
  else {
    cVar8 = (**(code **)(*(longlong *)param_1 + 0x700))(param_1);
    if (cVar8 == '\0') {
      pcVar24 = param_1 + 0x1750;
      pcVar20 = (code *)local_3a8;
      goto LAB_1412d3bb6;
    }
  }
  local_3c8 = local_388;
  dStack_3c0 = dStack_380;
  local_3b8 = local_378;
  local_3d8 = local_378;
  local_3e8 = local_388;
  dStack_3e0 = dStack_380;
  local_3f8 = DAT_14c846508;
  local_408 = DAT_14c8464f8;
  dStack_400 = DAT_14c846500;
  pcVar20 = param_1;
  plVar14 = (longlong *)(**(code **)(*(longlong *)param_1 + 0x5d0))();
  if (plVar14 == (longlong *)0x0) {
LAB_1412d3c6d:
    uVar43 = SUB84(pcVar20,0);
    dVar30 = (double)FUN_144719204(*(longlong *)(param_1 + 0x1730),0x4076800000000000);
    dVar30 = (double)(~-(ulonglong)(dVar30 < 0.0) & (ulonglong)dVar30 |
                     (ulonglong)(dVar30 + 360.0) & -(ulonglong)(dVar30 < 0.0));
    if ((dVar30 == 0.0) && (!NAN(dVar30))) {
      dVar30 = (double)FUN_144719204(*(longlong *)(param_1 + 0x1738),0x4076800000000000);
      dVar30 = (double)(~-(ulonglong)(dVar30 < 0.0) & (ulonglong)dVar30 |
                       (ulonglong)(dVar30 + 360.0) & -(ulonglong)(dVar30 < 0.0));
      if ((dVar30 == 0.0) && (!NAN(dVar30))) {
        dVar15 = (double)FUN_144719204(*(longlong *)(param_1 + 0x1740));
        dVar30 = (double)(~-(ulonglong)(extraout_XMM0_Qa < 0.0) & (ulonglong)extraout_XMM0_Qa |
                         (ulonglong)(extraout_XMM0_Qa + 360.0) &
                         -(ulonglong)(extraout_XMM0_Qa < 0.0));
        if ((dVar30 == 0.0) && (!NAN(dVar30))) {
          lVar12 = *(longlong *)(param_1 + 0x1c8);
          dVar30 = DAT_14c846500;
          if (lVar12 != 0) {
            pcVar20 = *(code **)(lVar12 + 0x240);
            dVar30 = *(double *)(lVar12 + 0x248);
            dVar34 = *(double *)*(undefined1 (*) [16])(lVar12 + 0x250);
            dVar35 = *(double *)(lVar12 + 600);
            local_2c8 = *(undefined1 (*) [16])(lVar12 + 0x250);
            pdVar17 = *(double **)(lVar12 + 0x228);
            local_2d8 = pcVar20;
            uStack_2d0 = dVar30;
            if (pdVar17 == (double *)0x0) {
              uVar43 = 0x40;
              pdVar17 = (double *)FUN_14001cc68(0x40,0x10);
              dVar15 = DAT_14c8463d8;
              *pdVar17 = DAT_14c8463d0;
              pdVar17[1] = dVar15;
              dVar15 = DAT_14c8463e8;
              pdVar17[2] = DAT_14c8463e0;
              pdVar17[3] = dVar15;
              dVar15 = DAT_14c846500;
              pdVar17[4] = DAT_14c8464f8;
              pdVar17[5] = dVar15;
              dVar15 = DAT_14c846508;
              pdVar17[6] = DAT_14c846508;
              *(double **)(lVar12 + 0x228) = pdVar17;
            }
            lVar12 = -(ulonglong)(dVar35 != pdVar17[3]);
            auVar37._8_4_ = (int)-(ulonglong)(dVar30 != pdVar17[1]);
            auVar37._0_8_ = -(ulonglong)((double)pcVar20 != *pdVar17);
            auVar37._12_4_ = (int)(-(ulonglong)(dVar30 != pdVar17[1]) >> 0x20);
            iVar9 = movmskpd(SUB84(dVar15,0),auVar37);
            auVar39._8_4_ = (int)lVar12;
            auVar39._0_8_ = -(ulonglong)(dVar34 != pdVar17[2]);
            auVar39._12_4_ = (int)((ulonglong)lVar12 >> 0x20);
            uVar19 = movmskpd(uVar43,auVar39);
            if ((uVar19 & 0x3fffffff) != 0 || iVar9 != 0) {
              pdVar17[2] = (double)local_2c8._0_8_;
              pdVar17[3] = (double)local_2c8._8_8_;
              *pdVar17 = (double)local_2d8;
              pdVar17[1] = uStack_2d0;
              FUN_1448052ee(&local_2d8,&local_520);
              pdVar17[6] = local_510;
              pdVar17[4] = (double)CONCAT44(uStack_51c,local_520);
              pdVar17[5] = dStack_518;
            }
            dVar30 = pdVar17[5];
          }
          goto LAB_1412d3ddc;
        }
      }
    }
    dVar30 = *(double *)(param_1 + 0x1738);
  }
  else {
    if (DAT_14caf9cd0 == 0) {
      local_5d0 = &local_2d8;
      local_2d8 = FUN_141030f22;
      local_5c0 = FUN_14081d0ea;
      local_5c8 = &LAB_1463c0cc2;
      local_5d8 = &LAB_147c9db5b;
      local_5e0 = &LAB_1463f9c44;
      local_5e8 = L"Game";
      local_5f0 = 0x2000000000;
      local_5f8 = 0x10000004;
      local_600 = CONCAT44(local_600._4_4_,8);
      local_608 = (code **)CONCAT44(local_608._4_4_,0x958);
      FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0,FUN_1463f9c22);
    }
    pcVar20 = (code *)plVar14[2];
    if ((*(int *)(pcVar20 + 0x38) < *(int *)(DAT_14caf9cd0 + 0x38)) ||
       (pcVar20 = *(code **)(pcVar20 + 0x30),
       *(longlong *)(pcVar20 + (longlong)*(int *)(DAT_14caf9cd0 + 0x38) * 8) != DAT_14caf9cd0 + 0x30
       )) goto LAB_1412d3c6d;
    plVar25 = (longlong *)plVar14[0x89];
    pcVar20 = (code *)0x0;
    if (plVar25 == (longlong *)0x0) goto LAB_1412d3c6d;
    (**(code **)(*plVar25 + 0x728))(plVar25,&local_2d8);
    dStack_400 = uStack_2d0;
    (**(code **)(*plVar14 + 0x688))(plVar14,&local_408,1);
    dVar30 = dStack_400;
  }
LAB_1412d3ddc:
  dStack_400 = dVar30;
  bVar7 = FUN_145a01524(param_1,&local_3c8,&local_3e8);
  local_410 = local_3d8 - local_3b8;
  local_418 = dStack_3e0 - dStack_3c0;
  local_420 = local_3e8 - local_3c8;
  memset(&local_520,0,0x100);
  local_450 = 0xffffffff;
  local_47c = 0xffffffff;
  uStack_51c = 0x3f800000;
  if ((bool)cVar28 != false) {
    auVar4._8_8_ = dStack_400;
    auVar4._0_8_ = local_408;
    plVar14 = *(longlong **)(&DAT_00006850 + *(longlong *)(param_1 + 0x1710));
    auVar37 = divpd(auVar4,_DAT_1499387d0);
    auVar38._8_8_ = 0;
    auVar38._0_8_ = local_3f8;
    auVar39 = divpd(auVar38,_DAT_1499387d0);
    auVar37 = roundpd(auVar37,auVar37,3);
    auVar39 = roundpd(auVar39,auVar39,3);
    dVar34 = (local_408 - auVar37._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
    dVar35 = (dStack_400 - auVar37._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
    dVar30 = (local_3f8 - auVar39._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
    dVar15 = (0.0 - auVar39._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
    dVar31 = sin(dVar34);
    dVar32 = sin(dVar35);
    dVar33 = sin(dVar30);
    sin(dVar15);
    dVar34 = cos(dVar34);
    dVar35 = cos(dVar35);
    dVar36 = cos(dVar30);
    cos(dVar15);
    dVar30 = dVar32 * dVar31 * dVar33 + dVar35 * dVar34 * dVar36;
    local_2d8 = (code *)(dVar31 * dVar32 * dVar36 - dVar34 * dVar35 * dVar33);
    uStack_2d0 = -(dVar31 * dVar35 * dVar36) - dVar34 * dVar32 * dVar33;
    local_2c8._8_4_ = SUB84(dVar30,0);
    local_2c8._0_8_ = -(dVar35 * dVar31 * dVar33) + dVar32 * dVar34 * dVar36;
    local_2c8._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
    local_600 = local_600 & 0xffffffffffffff00;
    local_608 = (code **)&local_520;
    (**(code **)(*plVar14 + 0x4e8))(plVar14,&local_420,&local_2d8,1);
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x1710) + 0x1c8) != 0) {
    local_2c8._0_8_ = DAT_14c846520;
    local_2d8 = DAT_14c846510;
    uStack_2d0 = DAT_14c846518;
    FUN_141226a1c();
  }
  if (lVar27 == 0) {
    plVar25 = (longlong *)0x0;
    uVar43 = 0xbf800000;
    uVar44 = 0;
    plVar14 = (longlong *)0x0;
  }
  else {
    pdVar17 = (double *)(lVar27 + 0x200);
    if (bVar7 != 0) {
      pdVar17 = (double *)(lVar27 + 0x1d8);
    }
    local_328 = *pdVar17;
    dStack_320 = pdVar17[1];
    dStack_318 = pdVar17[2];
    local_310 = (void *)0x0;
    uVar19 = *(uint *)(pdVar17 + 4);
    pvVar2 = (void *)pdVar17[3];
    local_308 = CONCAT44(local_308._4_4_,uVar19);
    if ((longlong)(int)uVar19 == 0) {
      local_308 = (ulonglong)uVar19;
    }
    else {
      FUN_1446dd670(&local_310,uVar19,0);
      memcpy(local_310,pvVar2,(longlong)(int)uVar19 * 2);
    }
    lVar12 = FUN_140963a30(&local_328);
    uVar43 = 0xbf800000;
    uVar44 = 0;
    if (lVar12 == 0) {
      plVar25 = (longlong *)0x0;
      plVar14 = (longlong *)0x0;
    }
    else {
      uVar13 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x1710) + 0x10e0) + 0x50))
                         (*(longlong *)(param_1 + 0x1710) + 0x10e0);
      local_2b8 = (undefined *)0x0;
      uStack_2a0 = 0;
      local_298 = 0.0;
      dStack_290 = 0.0;
      local_2c8 = ZEXT816(0);
      local_2d8 = (code *)0x0;
      uStack_2d0 = 0.0;
      dStack_2b0 = 2.71615461243555e-312;
      dStack_2a8 = 2.12199579047121e-314;
      uVar18 = FUN_140963a30(&local_328);
      local_600 = CONCAT71(local_600._1_7_,1);
      local_608 = &local_2d8;
      FUN_14096dfee(uVar13,&local_538,uVar18,1);
      plVar14 = plStack_530;
      plVar25 = local_538;
      dStack_290 = (double)((ulonglong)dStack_290 & 0xffffffff00000000);
      if (local_298 != 0.0) {
        FUN_1400020a8();
      }
      FUN_140333f4e(&local_2d8);
      if ((*(char *)(lVar27 + 0x228) == '\0') ||
         (cVar8 = (**(code **)(*(longlong *)param_1 + 0x700))(param_1), cVar8 == '\0')) {
        if (plVar25 == (longlong *)0x0) {
          plVar25 = (longlong *)0x0;
          FUN_145897c1a(lVar11,0);
        }
        else {
          local_5a8 = plVar14;
          uVar13 = (**(code **)(*plVar25 + 0x28))(plVar25);
          uVar43 = (undefined4)uVar13;
          uVar44 = (undefined4)((ulonglong)uVar13 >> 0x20);
          lVar12 = *(longlong *)(param_1 + 0x1710);
          local_598 = (double)CONCAT71(local_598._1_7_,cVar28);
          local_5b1 = bVar7;
          local_5a0 = lVar27;
          if ((lVar12 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c(lVar12);
LAB_1412d424b:
            uVar19 = *(uint *)(lVar12 + 0xc);
            if ((int)uVar19 < DAT_14c9647dc) {
              lVar27 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8);
            }
            else {
              lVar27 = 0;
            }
            iVar9 = *(int *)(lVar27 + 0x10);
            if (iVar9 == 0) {
              LOCK();
              iVar9 = DAT_14c964868 + 1;
              UNLOCK();
              iVar10 = DAT_14c964868 + 1;
              bVar29 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar9;
              if (bVar29) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar10);
              }
              lVar22 = 0;
              LOCK();
              iVar9 = *(int *)(lVar27 + 0x10);
              bVar29 = iVar9 == 0;
              if (bVar29) {
                *(int *)(lVar27 + 0x10) = iVar10;
                iVar9 = 0;
              }
              UNLOCK();
              if (bVar29) {
                iVar9 = iVar10;
              }
              lVar12 = CONCAT44(iVar9,uVar19);
              if (iVar9 != 0) goto LAB_1412d4293;
            }
            else {
              lVar12 = CONCAT44(iVar9,uVar19);
LAB_1412d4293:
              lVar22 = 0;
              if ((-1 < (int)uVar19) && ((int)uVar19 < DAT_14c9647dc)) {
                plVar14 = (longlong *)
                          ((ulonglong)((uVar19 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8));
                if ((plVar14 == (longlong *)0x0) ||
                   (((int)plVar14[2] != iVar9 || ((*(uint *)(plVar14 + 1) & 0x10200000) != 0))))
                goto LAB_1412d4b66;
                lVar22 = *plVar14;
              }
            }
          }
          else {
            if (lVar12 != 0) goto LAB_1412d424b;
            lVar12 = 0;
LAB_1412d4b66:
            lVar22 = 0;
          }
          plVar14 = plVar25 + 3;
          local_2d8 = (code *)0x0;
          uStack_2d0._0_4_ = 0;
          FUN_1446efa72(&local_2d8,0,3,0x10);
          pcVar20 = local_2d8;
          uStack_2d0 = (double)CONCAT44(uStack_2d0._4_4_,3);
          *(undefined ***)local_2d8 = &PTR_LAB_14b3e9c20;
          LOCK();
          UNLOCK();
          lVar16 = DAT_14c758608 + 1;
          lVar27 = DAT_14c758608 + 1;
          if (lVar16 == 0) {
            LOCK();
            UNLOCK();
            lVar16 = DAT_14c758608 + 2;
            lVar27 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar27;
          *(longlong *)(local_2d8 + 0x10) = lVar16;
          *(undefined ***)local_2d8 = &PTR_FUN_14b95f6d0;
          *(longlong *)(local_2d8 + 0x18) = 0;
          iVar9 = 0;
          if (lVar22 != 0) {
            uVar19 = *(uint *)(lVar22 + 0xc);
            *(uint *)(local_2d8 + 0x18) = uVar19;
            if ((int)uVar19 < DAT_14c9647dc) {
              lVar27 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8);
            }
            else {
              lVar27 = 0;
            }
            iVar9 = *(int *)(lVar27 + 0x10);
            if (*(int *)(lVar27 + 0x10) == 0) {
              LOCK();
              iVar9 = DAT_14c964868 + 1;
              UNLOCK();
              iVar10 = DAT_14c964868 + 1;
              bVar29 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar9;
              if (bVar29) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar10);
              }
              LOCK();
              iVar9 = *(int *)(lVar27 + 0x10);
              bVar29 = iVar9 == 0;
              if (bVar29) {
                *(int *)(lVar27 + 0x10) = iVar10;
                iVar9 = 0;
              }
              UNLOCK();
              if (bVar29) {
                iVar9 = iVar10;
              }
            }
          }
          lVar27 = local_5a0;
          bVar7 = local_5b1;
          *(int *)(pcVar20 + 0x1c) = iVar9;
          *(longlong *)(pcVar20 + 0x20) = lVar12;
          if (((int)uStack_2d0 == 0) || (cVar28 = local_598._0_1_, local_2d8 == (code *)0x0)) {
LAB_1412d530a:
            lVar27 = local_5a0;
            bVar7 = local_5b1;
            cVar28 = local_598._0_1_;
            if ((int)uStack_2d0 != 0) {
              plVar14 = local_5a8;
              if (local_2d8 == (code *)0x0) goto LAB_1412d4508;
              (*(code *)**(undefined8 **)local_2d8)(local_2d8,0);
              FUN_1446efa72(&local_2d8,0,0,0x10);
              goto LAB_1412d44e4;
            }
          }
          else {
            cVar8 = (**(code **)(*(longlong *)local_2d8 + 0x30))();
            if (cVar8 == '\0') {
              goto LAB_1412d530a;
            }
            if (*(int *)((longlong)plVar25 + 0x2c) < 1) {
              iVar9 = (int)plVar25[4];
              iVar10 = (int)plVar25[5] + -1;
              *(int *)(plVar25 + 5) = iVar10;
              if (iVar10 <= iVar9) {
                iVar10 = iVar9;
                if (0 < iVar9) {
                  iVar21 = 0;
                  do {
                    if (((*(int *)(*plVar14 + 8 + (longlong)iVar21 * 0x10) == 0) ||
                        (plVar3 = *(longlong **)(*plVar14 + (longlong)iVar21 * 0x10),
                        plVar3 == (longlong *)0x0)) ||
                       (cVar8 = (**(code **)(*plVar3 + 0x28))(), cVar8 != '\0')) {
                      FUN_14005b288(plVar14,iVar21);
                      FUN_14005b248(plVar14);
                    }
                    else {
                      iVar21 = iVar21 + 1;
                    }
                    iVar10 = (int)plVar25[4];
                  } while (iVar21 < iVar10);
                }
                bVar7 = local_5b1;
                iVar21 = 2;
                if (2 < iVar10 * 2) {
                  iVar21 = iVar10 * 2;
                }
                *(int *)(plVar25 + 5) = iVar21;
                if ((iVar21 < iVar9) && (*(int *)((longlong)plVar25 + 0x24) != iVar10)) {
                  FUN_14045812c();
                }
              }
            }
            if (((int)uStack_2d0 != 0) && (local_2d8 != (code *)0x0)) {
              (**(code **)(*(longlong *)local_2d8 + 0x38))(local_2d8,&local_538);
            }
            iVar9 = (int)plVar25[4];
            *(uint *)(plVar25 + 4) = iVar9 + 1U;
            if (*(uint *)((longlong)plVar25 + 0x24) < iVar9 + 1U) {
              FUN_1447a71f6(plVar14,iVar9);
            }
            lVar12 = *plVar14;
            lVar22 = (longlong)iVar9 * 0x10;
            *(undefined8 *)(lVar12 + lVar22) = 0;
            *(undefined4 *)(lVar12 + 8 + lVar22) = 0;
            *(code **)(lVar12 + lVar22) = local_2d8;
            local_2d8 = (code *)0x0;
            *(int *)(lVar12 + 8 + lVar22) = (int)uStack_2d0;
LAB_1412d44e4:
            uStack_2d0 = (double)((ulonglong)uStack_2d0 & 0xffffffff00000000);
          }
          plVar14 = local_5a8;
          if (local_2d8 != (code *)0x0) {
            FUN_1400020a8();
          }
        }
      }
    }
LAB_1412d4508:
    if (local_310 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_1412d65f2(lVar11,0);
  if (((*(longlong *)(&DAT_00006850 + *(longlong *)(param_1 + 0x1710)) != 0) && (lVar27 != 0)) &&
     (plVar25 != (longlong *)0x0)) {
    local_538 = (longlong *)0x0;
    plStack_530 = (longlong *)0x0;
    local_5a8 = plVar14;
    local_580 = *(longlong *)(&DAT_00006850 + *(longlong *)(param_1 + 0x1710));
    (**(code **)(*plVar25 + 8))(plVar25,&local_538,&DAT_14cb8d438);
    if ((int)plStack_530 < 1) {
      fVar45 = 0.0;
      uVar46 = 0;
      uVar47 = 0;
      uVar48 = 0;
LAB_1412d45ea:
      local_5b0 = (code *)0x0;
    }
    else {
      uVar13 = (**(code **)(*(longlong *)*local_538 + 0x2b0))();
      fVar45 = (float)uVar13;
      uVar46 = (undefined4)((ulonglong)uVar13 >> 0x20);
      uVar47 = (undefined4)extraout_XMM0_Qb;
      uVar48 = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
      local_5b0 = (code *)*local_538;
      if (local_5b0 == (code *)0x0) goto LAB_1412d45ea;
      lVar12 = FUN_1402576f0();
      if ((*(int *)(*(longlong *)(local_5b0 + 0x10) + 0x38) < *(int *)(lVar12 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(local_5b0 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar12 + 0x38) * 8) != lVar12 + 0x30)) goto LAB_1412d45ea;
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c(local_5b0);
      }
    }
    FUN_14129e194(&local_548,&local_538,2);
    FUN_14129e194(&local_558,&local_538,0);
    FUN_14129e194(&local_568,&local_538,1);
    if (0 < (longlong)local_540) {
      uVar43 = *(undefined4 *)(local_548 + -4 + (longlong)local_540 * 4);
      uVar44 = 0;
    }
    uVar49 = 0;
    if (0 < (longlong)local_550) {
      uVar49 = *(undefined4 *)(local_558 + -4 + (longlong)local_550 * 4);
    }
    if ((longlong)local_560 < 1) {
      uVar50 = *(undefined4 *)(lVar27 + 0x390);
    }
    else {
      uVar50 = *(undefined4 *)(local_568 + -4 + (longlong)local_560 * 4);
    }
    local_5b1 = bVar7;
    if (bVar7 == 0) {
      lVar12 = (**(code **)(*(longlong *)param_1 + 0x638))(param_1);
      lVar22 = 0x4f8;
      local_588 = 0x5a8;
      if (lVar12 != 0) {
        lVar16 = FUN_140d012c2();
        if ((*(int *)(lVar16 + 0x38) <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar16 + 0x38) * 8) == lVar16 + 0x30)) {
          local_328 = (double)*(float *)(lVar27 + 0x678);
          dStack_318 = *(double *)(lVar12 + 0x870) * local_328;
          dStack_320 = *(double *)(lVar12 + 0x868) * local_328;
          local_328 = local_328 * *(double *)(lVar12 + 0x860);
          if ((*(float *)(lVar27 + 0x1ac) <= 0.0) ||
             (lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1710) + 0x428), lVar12 == 0)) {
LAB_1412d4c75:
            if (cVar28 == '\0') goto LAB_1412d4c9c;
          }
          else {
            uVar26 = *(ulonglong *)(lVar12 + 0x658);
            if (uVar26 == 0) {
              uVar26 = *(ulonglong *)(lVar12 + 0x660);
              if ((DAT_14c950c29 == 1) && (uVar26 != 0)) goto LAB_1412d53b8;
              if (uVar26 != 0) goto LAB_1412d47a2;
              goto LAB_1412d4c75;
            }
            if (DAT_14c950c29 == 1) {
LAB_1412d53b8:
              FUN_1456cec3c(uVar26);
            }
LAB_1412d47a2:
            if (DAT_14cb06da8 == 0) {
              local_5d0 = &local_2d8;
              local_2d8 = FUN_1449e2820;
              local_5c0 = FUN_14081d0ea;
              local_5c8 = &LAB_1464003b0;
              local_5d8 = &LAB_147d17bdf;
              local_5e0 = &LAB_1417edf22;
              local_5e8 = L"Engine";
              local_5f0 = 0;
              local_5f8 = 0x10000000;
              local_600 = CONCAT44(local_600._4_4_,8);
              local_608 = (code **)CONCAT44(local_608._4_4_,0x588);
              FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
            }
            if ((*(int *)(*(longlong *)(uVar26 + 0x10) + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(uVar26 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) != DAT_14cb06da8 + 0x30))
            goto LAB_1412d4c75;
            auVar40._4_4_ = uVar46;
            auVar40._0_4_ = fVar45;
            auVar40._12_4_ = uVar48;
            auVar40._8_4_ = uVar47;
            auVar41._4_12_ = auVar40._4_12_;
            auVar41._0_4_ = fVar45 - *(float *)(lVar27 + 0x1ac);
            local_608 = (code **)((ulonglong)local_608 & 0xffffffffffffff00);
            local_600 = uVar26;
            FUN_141445440(local_5b0,&local_2d8,auVar41._0_8_,CONCAT44(uVar46,fVar45));
            dVar15 = dStack_2a8;
            dVar30 = dStack_2b0;
            puVar6 = local_2b8;
            FUN_145a020a4(param_1,&local_2d8);
            dVar34 = 1.0 / (double)*(float *)(lVar27 + 0x1ac);
            dVar35 = dVar34 * (double)puVar6 * local_298;
            dVar31 = dVar30 * dVar34 * dStack_290;
            dVar34 = dVar15 * dVar34 * (double)CONCAT44(uStack_284,local_288);
            dVar15 = dVar31 * (double)local_2d8 - uStack_2d0 * dVar35;
            dVar32 = dVar34 * uStack_2d0 - (double)local_2c8._0_8_ * dVar31;
            dVar30 = dVar35 * (double)local_2c8._0_8_ - (double)local_2d8 * dVar34;
            dVar32 = dVar32 + dVar32;
            dVar30 = dVar30 + dVar30;
            dVar15 = dVar15 + dVar15;
            dVar34 = dVar15 * (double)local_2c8._8_8_ + dVar34 +
                     (dVar30 * (double)local_2d8 - dVar32 * uStack_2d0);
            dVar35 = (dVar15 * uStack_2d0 - dVar30 * (double)local_2c8._0_8_) +
                     (double)local_2c8._8_8_ * dVar32 + dVar35;
            dVar30 = ((double)local_2c8._0_8_ * dVar32 - (double)local_2d8 * dVar15) +
                     (double)local_2c8._8_8_ * dVar30 + dVar31;
            local_328 = local_328 + dVar35;
            dStack_320 = dStack_320 + dVar30;
            dStack_318 = dStack_318 + dVar34;
            local_420 = (double)fVar45;
            local_410 = -dVar34 * local_420;
            local_418 = -dVar30 * local_420;
            local_420 = -dVar35 * local_420;
            if (cVar28 == '\0') goto LAB_1412d4c9c;
            auVar5._8_8_ = dStack_400;
            auVar5._0_8_ = local_408;
            plVar14 = *(longlong **)(&DAT_00006850 + *(longlong *)(param_1 + 0x1710));
            auVar37 = divpd(auVar5,_DAT_1499387d0);
            auVar42._8_8_ = 0;
            auVar42._0_8_ = local_3f8;
            auVar39 = divpd(auVar42,_DAT_1499387d0);
            auVar37 = roundpd(auVar37,auVar37,3);
            auVar39 = roundpd(auVar39,auVar39,3);
            dVar34 = (local_408 - auVar37._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
            dVar35 = (dStack_400 - auVar37._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
            dVar30 = (local_3f8 - auVar39._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
            dVar15 = (0.0 - auVar39._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
            local_598 = sin(dVar34);
            dVar31 = sin(dVar35);
            local_578 = sin(dVar30);
            sin(dVar15);
            dVar34 = cos(dVar34);
            dVar35 = cos(dVar35);
            dVar32 = cos(dVar30);
            cos(dVar15);
            dVar30 = dVar31 * local_598 * local_578 + dVar35 * dVar34 * dVar32;
            local_2d8 = (code *)(local_598 * dVar31 * dVar32 - dVar34 * dVar35 * local_578);
            uStack_2d0 = -(local_598 * dVar35 * dVar32) - dVar34 * dVar31 * local_578;
            local_2c8._8_4_ = SUB84(dVar30,0);
            local_2c8._0_8_ = -(dVar35 * local_598 * local_578) + dVar31 * dVar34 * dVar32;
            local_2c8._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
            local_600 = local_600 & 0xffffffffffffff00;
            local_608 = (code **)0x0;
            (**(code **)(*plVar14 + 0x4e8))(plVar14,&local_420,&local_2d8,1);
          }
          (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x1710) + 0x430) + 0x688))
                    (*(longlong **)(*(longlong *)(param_1 + 0x1710) + 0x430),&local_328);
        }
      }
    }
    else {
      lVar22 = 0x398;
      local_588 = 0x448;
    }
LAB_1412d4c9c:
    pcVar20 = local_5b0;
    local_2d8 = (code *)0x0;
    uStack_2d0 = -0.007812505573383532;
    local_2c8._0_8_ = local_2c8._1_8_ << 8;
    local_2c8._8_8_ = &PTR_FUN_14b00bdf8;
    dStack_290 = 0.0;
    local_288 = 0;
    dStack_2b0 = 0.0;
    dStack_2a8 = 0.0;
    uStack_284 = 0x80;
    uStack_280 = 0xffffffff;
    uStack_27c = 0;
    local_270 = 0;
    local_268 = 0;
    local_260 = 0;
    uStack_258 = 0;
    local_250 = 0x7f7fffff;
    local_24c = 0x404;
    local_2b8 = &DAT_14a176f00;
    local_248 = 0;
    uStack_240 = 0;
    local_238 = 0;
    uStack_230 = 0;
    local_228 = 0;
    pvStack_220 = (void *)0x0;
    local_218 = 0;
    local_210 = &PTR_FUN_14b00bdf8;
    local_1e0 = 0;
    local_1d8 = 0;
    local_200 = 0;
    uStack_1f8 = 0;
    local_1d4 = 0xffffffff00000080;
    local_1cc = 0;
    local_1c0 = 0;
    local_1b8 = 0;
    local_1b0 = 0;
    uStack_1a8 = 0;
    local_1a0 = 0x7f7fffff;
    local_19c = 0x404;
    local_208 = &DAT_14a176f00;
    local_198 = 0;
    uStack_190 = 0;
    local_188 = 0;
    uStack_180 = 0;
    local_178 = 0;
    pvStack_170 = (void *)0x0;
    local_168 = 0;
    plVar14 = &DAT_14c846480;
    plVar25 = local_158;
    for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
      *plVar25 = *plVar14;
      plVar14 = plVar14 + 1;
      plVar25 = plVar25 + 1;
    }
    if ((local_5b0 != (code *)0x0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(local_5b0);
    }
    local_2d8 = pcVar20;
    uStack_2d0 = (double)CONCAT44(uVar49,uVar50);
    lVar12 = lVar27 + 0x78 + lVar22;
    local_24c = *(undefined2 *)(lVar12 + -4);
    local_250 = *(undefined4 *)(lVar12 + -8);
    FUN_14093c00e(&local_248,lVar12);
    local_238 = *(undefined8 *)(lVar12 + 0x10);
    uStack_230 = *(undefined8 *)(lVar12 + 0x18);
    local_228 = *(undefined8 *)(lVar12 + 0x20);
    if (&pvStack_220 != (void **)(lVar27 + lVar22 + 0xa0)) {
      uVar19 = *(uint *)(lVar22 + lVar27 + 0xa8);
      pvVar2 = *(void **)(lVar22 + lVar27 + 0xa0);
      local_218 = CONCAT44(local_218._4_4_,uVar19);
      if (uVar19 == 0 && local_218._4_4_ == 0) {
        local_218 = (ulonglong)uVar19;
      }
      else {
        FUN_1446dd670(&pvStack_220,uVar19);
        if (uVar19 != 0) {
          memcpy(pvStack_220,pvVar2,(longlong)(int)uVar19 * 2);
        }
      }
    }
    lVar22 = local_588;
    lVar12 = local_588 + lVar27;
    local_19c = *(undefined2 *)(lVar12 + 0x74);
    local_1a0 = *(undefined4 *)(lVar12 + 0x70);
    FUN_14093c00e(&local_198,lVar12 + 0x78);
    bVar7 = local_5b1;
    local_188 = *(undefined8 *)(lVar12 + 0x88);
    uStack_180 = *(undefined8 *)(lVar12 + 0x90);
    local_178 = *(undefined8 *)(lVar12 + 0x98);
    if (&pvStack_170 != (void **)(lVar22 + lVar27 + 0xa0)) {
      lVar27 = lVar27 + lVar22;
      uVar19 = *(uint *)(lVar27 + 0xa8);
      pvVar2 = *(void **)(lVar27 + 0xa0);
      local_168 = CONCAT44(local_168._4_4_,uVar19);
      if (uVar19 == 0 && local_168._4_4_ == 0) {
        local_168 = (ulonglong)uVar19;
      }
      else {
        FUN_1446dd670(&pvStack_170,uVar19);
        if (uVar19 != 0) {
          memcpy(pvStack_170,pvVar2,(longlong)(int)uVar19 * 2);
        }
      }
    }
    plVar14 = (longlong *)local_3a8;
    plVar25 = local_158;
    for (lVar27 = 0xc; lVar27 != 0; lVar27 = lVar27 + -1) {
      *plVar25 = *plVar14;
      plVar14 = plVar14 + 1;
      plVar25 = plVar25 + 1;
    }
    local_2c8[0] = bVar7 ^ 1;
    FUN_143cdf59a(local_580);
    FUN_145b026b4(lVar11,CONCAT44(uVar46,fVar45));
    fVar45 = -1.0;
    if (((bVar7 == 0) && (*(longlong *)(lVar11 + 0x18) != 0)) &&
       (lVar27 = FUN_1447210f0(), lVar27 != 0)) {
      fVar45 = (float)*(double *)(lVar27 + 0x6d0);
    }
    *(float *)(lVar11 + 0x50) = fVar45;
    if (*(char *)(*(longlong *)(param_1 + 0x1a00) + 0x1114) == '\x01') {
      (**(code **)(**(longlong **)(param_1 + 0x1710) + 0x330))(*(longlong **)(param_1 + 0x1710),0);
    }
    lVar27 = *(longlong *)(param_1 + 0x1e40);
    if ((lVar27 != 0) && (*(char *)(lVar27 + 0xa0) == '\0')) {
      FUN_14103b6f6(lVar27,1);
    }
    lVar27 = FUN_140963a30(*(longlong *)(param_1 + 0x1a00) + 0x10e8);
    if (lVar27 != 0) {
      uVar13 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x1710) + 0x10e0) + 0x50))
                         (*(longlong *)(param_1 + 0x1710) + 0x10e0);
      local_308 = 0;
      uStack_2f0 = 0;
      local_2e8 = 0;
      uStack_2e0 = 0;
      dStack_318 = 0.0;
      local_310 = (void *)0x0;
      local_328 = 0.0;
      dStack_320 = 0.0;
      uStack_300 = 0x8000000000;
      local_2f8 = 0xffffffff;
      uVar18 = FUN_140963a30(*(longlong *)(param_1 + 0x1a00) + 0x10e8);
      FUN_14096df60(uVar13,uVar18,1,&local_328);
      uStack_2e0 = uStack_2e0 & 0xffffffff00000000;
      if (local_2e8 != 0) {
        FUN_1400020a8();
      }
      FUN_140333f4e(&local_328);
    }
    FUN_14051f4c4(&local_210);
    FUN_14051f4c4(local_2c8 + 8);
    if (local_568 != 0) {
      FUN_1400020a8();
    }
    plVar14 = local_5a8;
    if (local_558 != 0) {
      FUN_1400020a8();
    }
    if (local_548 != 0) {
      FUN_1400020a8();
    }
    if (local_538 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_145c24a0a(param_1,CONCAT44(uVar44,uVar43));
  FUN_14056a50a(param_1,1);
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar25 = plVar14 + 1;
    *(int *)plVar25 = (int)*plVar25 + -1;
    UNLOCK();
    if ((int)*plVar25 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
LAB_1412d3894:
  if ((local_f0 ^ (ulonglong)auStack_628) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412d53e0 FUN_1412d53e0 body=56 status=ok
// SIG undefined FUN_1412d53e0(void)

longlong FUN_1412d53e0(uint param_1)

{
  longlong lVar1;
  
  AcquireSRWLockShared((PSRWLOCK)&DAT_14cb77c40);
  lVar1 = (ulonglong)((param_1 & 0xffff) << 4) + DAT_14cb77c48;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14cb77c40);
  return lVar1;
}



// FUNCTION 1412d5418 FUN_1412d5418 body=408 status=ok
// SIG undefined FUN_1412d5418(void)

undefined8 FUN_1412d5418(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  
  iVar3 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar3 != 0) {
    lVar7 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x28) + lVar7) == param_2) {
        uVar6 = (lVar7 >> 4) * -0x5555555555555555;
        uVar5 = (uint)uVar6;
        if ((int)uVar5 < 0) {
          return 0;
        }
        if (iVar3 <= (int)uVar5) {
          return 0;
        }
        lVar7 = (ulonglong)(uVar5 & 0x7fffffff) * 0x30;
        FUN_1458b0478(*(longlong *)(param_1 + 0x28) + lVar7);
        lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x28) + 0x10 + lVar7);
        if (lVar8 == 0) goto LAB_1412d5588;
        lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 8 + lVar7);
        lVar8 = lVar8 << 4;
        uVar10 = 0;
        goto LAB_1412d54be;
      }
      lVar7 = lVar7 + 0x30;
    } while ((longlong)iVar3 * 0x30 != lVar7);
  }
  return 0;
  while( true ) {
    lVar7 = lVar7 + 0x10;
    uVar10 = uVar10 + 1;
    lVar8 = lVar8 + -0x10;
    if (lVar8 == 0) break;
LAB_1412d54be:
    cVar2 = FUN_14069eaf4(lVar7,param_3);
    if (cVar2 != '\0') {
      if (-1 < (int)uVar10) {
        lVar7 = *(longlong *)(param_1 + 0x28);
        lVar8 = (ulonglong)(uVar5 & 0x7fffffff) * 0x30;
        if ((int)uVar10 < *(int *)(lVar7 + 0x10 + lVar8)) {
          lVar9 = (ulonglong)(uVar10 & 0x7fffffff) * 0x10;
          if (*(longlong *)(*(longlong *)(lVar7 + 8 + lVar8) + 8 + lVar9) != 0) {
            FUN_14480f766(param_3 + 0x2b8);
            lVar7 = *(longlong *)(param_1 + 0x28);
          }
          lVar7 = lVar7 + lVar8;
          iVar3 = *(int *)(lVar7 + 0x10);
          if (iVar3 - 1U != uVar10) {
            lVar1 = *(longlong *)(lVar7 + 8);
            memmove((void *)(lVar1 + lVar9),(void *)(lVar1 + lVar9 + 0x10),
                    (longlong)(int)((iVar3 - 1U) - uVar10) << 4);
            iVar3 = *(int *)(lVar7 + 0x10);
          }
          *(int *)(lVar7 + 0x10) = iVar3 + -1;
          FUN_1458b029e((longlong *)(lVar7 + 8));
          uVar4 = 1;
          FUN_1458be7c2(*(longlong *)(param_1 + 0x28) + lVar8 + 0x18,1,param_3);
          goto LAB_1412d555a;
        }
      }
      break;
    }
  }
LAB_1412d5588:
  uVar4 = 0;
LAB_1412d555a:
  FUN_1458b0246(param_1,uVar6 & 0xffffffff);
  return uVar4;
}



// FUNCTION 1412d55b0 FUN_1412d55b0 body=62 status=ok
// SIG undefined FUN_1412d55b0(void)

void FUN_1412d55b0(undefined8 param_1,longlong param_2)

{
  if (param_2 == 0) {
    return;
  }
  FUN_1412d55ee(1);
  if (*(char *)(param_2 + 1) == '\x01') {
    *(undefined1 *)(param_2 + 1) = 0;
  }
  FUN_1412d5698(1);
  FUN_1400020a8(param_2);
  return;
}



// FUNCTION 1412d55ee FUN_1412d55ee body=57 status=ok
// SIG undefined FUN_1412d55ee(void)

void FUN_1412d55ee(undefined4 param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_1412d5628();
  iVar1 = *(int *)(lVar2 + 0x10);
  *(uint *)(lVar2 + 0x10) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x14) < iVar1 + 1U) {
    FUN_1412d57ae((longlong *)(lVar2 + 8),iVar1);
  }
  *(undefined4 *)(*(longlong *)(lVar2 + 8) + (longlong)iVar1 * 4) = param_1;
  return;
}



// FUNCTION 1412d5628 FUN_1412d5628 body=111 status=ok
// SIG undefined FUN_1412d5628(void)

undefined8 * FUN_1412d5628(void)

{
  undefined8 *lpTlsValue;
  
  if (DAT_14cbfeac8 != '\x01') {
    DAT_14cbfeac4 = TlsAlloc();
    DAT_14cbfeac8 = '\x01';
  }
  lpTlsValue = TlsGetValue(DAT_14cbfeac4);
  if (lpTlsValue == (undefined8 *)0x0) {
    lpTlsValue = (undefined8 *)FUN_14494321d(0x18);
    *lpTlsValue = FActiveAllocatorsStack::vftable;
    lpTlsValue[1] = 0;
    lpTlsValue[2] = 0;
    TlsSetValue(DAT_14cbfeac4,lpTlsValue);
  }
  return lpTlsValue;
}



// FUNCTION 1412d5698 FUN_1412d5698 body=127 status=ok
// SIG undefined FUN_1412d5698(void)

undefined8 FUN_1412d5698(int param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  
  lVar5 = FUN_1412d5628();
  iVar4 = *(int *)(lVar5 + 0x10);
  if ((longlong)iVar4 < 1) {
LAB_1412d56f6:
    uVar6 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar5 + 8);
    iVar8 = -1;
    lVar7 = (longlong)iVar4;
    do {
      if (lVar7 < 1) goto LAB_1412d56f6;
      lVar1 = lVar7 + -1;
      iVar8 = iVar8 + 1;
      lVar2 = lVar7 * 4;
      lVar7 = lVar1;
    } while (*(int *)(lVar3 + -4 + lVar2) != param_1);
    if (iVar8 != 0) {
      memmove((void *)(lVar3 + lVar1 * 4),(void *)(lVar3 + lVar1 * 4 + 4),(longlong)iVar8 << 2);
      iVar4 = *(int *)(lVar5 + 0x10);
    }
    *(int *)(lVar5 + 0x10) = iVar4 + -1;
    FUN_1412d5718((longlong *)(lVar5 + 8));
    uVar6 = 1;
  }
  return uVar6;
}



// FUNCTION 1412d5718 FUN_1412d5718 body=142 status=ok
// SIG undefined FUN_1412d5718(void)

void FUN_1412d5718(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0x3ffffffffffff000U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 2,4);
      uVar3 = uVar3 >> 2;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,4,4);
    }
  }
  return;
}



// FUNCTION 1412d57a6 TlsAlloc body=7 status=ok
// SIG DWORD TlsAlloc(void)

DWORD __stdcall TlsAlloc(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001412d57a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = TlsAlloc();
  return DVar1;
}



// FUNCTION 1412d57ae FUN_1412d57ae body=353 status=ok
// SIG undefined FUN_1412d57ae(void)

void FUN_1412d57ae(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 4;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1412d5833;
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
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_1412d5833:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 2)) {
    uVar7 = uVar5 >> 2 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,4,4);
  return;
}



// FUNCTION 1412d5910 FUN_1412d5910 body=592 status=ok
// SIG undefined FUN_1412d5910(void)

void FUN_1412d5910(char param_1,float param_2,double *param_3,float param_4,float param_5,
                  float *param_6,double *param_7,double *param_8)

{
  double dVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  
  if (param_1 != '\0') {
    param_2 = -param_2;
  }
  fVar9 = 0.0;
  *param_7 = (double)(param_2 + 0.0);
  param_7[1] = 0.0;
  dVar8 = param_3[1];
  dVar1 = *param_3 - (double)(param_2 + 0.0);
  if ((((dVar8 != 0.0) || (NAN(dVar8))) || (dVar1 != 0.0)) || (NAN(dVar1))) {
    dVar4 = atan2(dVar8,dVar1);
    fVar9 = (float)dVar4 * 180.0;
  }
  fVar2 = (float)SQRT(dVar1 * dVar1 + dVar8 * dVar8);
  dVar8 = 0.0;
  dVar1 = 0.0;
  if ((fVar2 <= param_4 + param_5) && (dVar8 = 0.0, dVar1 = 0.0, param_4 - param_5 <= fVar2)) {
    fVar7 = (fVar2 * fVar2 - param_5 * param_5) + param_4 * param_4;
    fVar3 = fVar2 * fVar2 * 4.0 * param_4 * param_4 - fVar7 * fVar7;
    if (fVar3 < 0.0) {
      fVar3 = sqrtf(fVar3);
    }
    else {
      fVar3 = SQRT(fVar3);
    }
    dVar8 = (double)(fVar7 / (fVar2 + fVar2));
    dVar1 = (double)(fVar3 / (fVar2 + fVar2));
  }
  dVar4 = (double)(fVar9 / 3.1415927) * 0.017453292519943295;
  dVar5 = sin(dVar4);
  dVar6 = cos(dVar4);
  dVar4 = (dVar5 * dVar8 - dVar6 * dVar1) + param_7[1];
  dVar8 = dVar6 * dVar8 + dVar1 * dVar5 + *param_7;
  *param_8 = dVar8;
  param_8[1] = dVar4;
  dVar4 = param_3[1] - dVar4;
  dVar8 = *param_3 - dVar8;
  if (((dVar4 != 0.0) || (NAN(dVar4))) || ((dVar8 != 0.0 || (NAN(dVar8))))) {
    dVar8 = atan2(dVar8,dVar4);
    fVar9 = (float)dVar8 * 180.0;
  }
  else {
    fVar9 = 0.0;
  }
  *param_6 = fVar9 / 3.1415927;
  return;
}



// FUNCTION 1412d5b60 FUN_1412d5b60 body=502 status=ok
// SIG undefined FUN_1412d5b60(void)

void FUN_1412d5b60(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = plVar1;
  if ((int)param_1[5] == 0) {
    uVar15 = 1;
    local_58._4_4_ = 0;
    uVar14 = 0xffffffff;
    iVar16 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar15 = local_68 >> 0x20;
    uVar14 = (uint)local_58;
    iVar16 = (int)local_68;
  }
  plVar7 = local_60;
  iVar9 = local_58._4_4_;
  iVar12 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      plVar10 = *(longlong **)(*param_1 + 0x20 + (longlong)iVar9 * 0x50);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar10 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
      uVar14 = uVar14 & ~(uint)uVar15;
      plVar10 = (longlong *)plVar7[2];
      if ((longlong *)plVar7[2] == (longlong *)0x0) {
        plVar10 = plVar7;
      }
      iVar5 = (int)plVar7[3];
      lVar13 = (longlong)iVar16;
      uVar8 = *(uint *)((longlong)plVar10 + lVar13 * 4) & uVar14;
      if (uVar8 == 0) {
        iVar9 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar9 = iVar5 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar6 = iVar9;
        if (iVar9 < iVar16) {
          iVar6 = iVar16;
        }
        if (iVar9 <= iVar16) break;
        lVar11 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar8 = *(uint *)((longlong)plVar10 + lVar11 * 4 + lVar13 * 4 + 4);
          if (uVar8 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar6 - lVar13 == lVar11) goto LAB_1412d5c88;
        }
        iVar16 = iVar16 + (int)lVar11 + 1;
        uVar14 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar8 & uVar8);
      uVar4 = uVar15 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar9 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar5);
  }
LAB_1412d5c88:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140e9549c(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412d5d57 thunk_FUN_1400020a8 body=5 status=ok
// SIG undefined thunk_FUN_1400020a8(void)

void thunk_FUN_1400020a8(longlong param_1)

{
  if (param_1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,param_1);
    return;
  }
  return;
}



// FUNCTION 1412d5d5c FUN_1412d5d5c body=65 status=ok
// SIG undefined FUN_1412d5d5c(void)

void FUN_1412d5d5c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  FUN_14694be4e(param_1 + 0x38);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001412d5d92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1412d5d9e FUN_1412d5d9e body=544 status=ok
// SIG undefined FUN_1412d5d9e(void)

void FUN_1412d5d9e(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  undefined1 auStack_98 [36];
  int local_74;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = local_70;
  if ((int)param_1[5] == 0) {
    uVar14 = 1;
    local_58._4_4_ = 0;
    uVar13 = 0xffffffff;
    iVar15 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar14 = local_68 >> 0x20;
    uVar13 = (uint)local_58;
    iVar15 = (int)local_68;
  }
  plVar6 = local_60;
  iVar8 = local_58._4_4_;
  iVar12 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar11 = *param_1;
      plVar9 = *(longlong **)(lVar11 + 0x30 + (longlong)iVar8 * 0x40);
      local_74 = iVar12;
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
      plVar9 = *(longlong **)(lVar11 + (longlong)iVar8 * 0x40 + 8);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))();
        }
      }
      uVar13 = uVar13 & ~(uint)uVar14;
      plVar9 = (longlong *)plVar6[2];
      if ((longlong *)plVar6[2] == (longlong *)0x0) {
        plVar9 = plVar6;
      }
      iVar4 = (int)plVar6[3];
      lVar11 = (longlong)iVar15;
      uVar7 = *(uint *)((longlong)plVar9 + lVar11 * 4) & uVar13;
      iVar12 = local_74;
      if (uVar7 == 0) {
        iVar8 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar8 = iVar4 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar5 = iVar8;
        if (iVar8 < iVar15) {
          iVar5 = iVar15;
        }
        if (iVar8 <= iVar15) break;
        lVar10 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar7 = *(uint *)((longlong)plVar9 + lVar10 * 4 + lVar11 * 4 + 4);
          if (uVar7 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar5 - lVar11 == lVar10) goto LAB_1412d5f08;
        }
        iVar15 = iVar15 + (int)lVar10 + 1;
        uVar13 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar7 & uVar7);
      uVar3 = uVar14 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar8 = (iVar12 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar8 < iVar4);
  }
LAB_1412d5f08:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140b7ce44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(local_70,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412d5fc0 FUN_1412d5fc0 body=14 status=ok
// SIG undefined FUN_1412d5fc0(void)

void FUN_1412d5fc0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 1412d5fce FUN_1412d5fce body=239 status=ok
// SIG undefined FUN_1412d5fce(void)

void FUN_1412d5fce(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*param_1 != 0) {
    FUN_144b54b00();
    param_1[4] = 0;
    param_1[5] = 0;
  }
  *(undefined4 *)(param_1 + 0x22) = 0;
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (*(int *)((longlong)param_1 + 0xd4) != 0) {
    FUN_14472eb64(param_1 + 0x19,0);
  }
  param_1[0x1f] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0xf4)) {
    *(undefined4 *)((longlong)param_1 + 0xf4) = 0x80;
    FUN_1446efbd8(param_1 + 0x1b,0);
  }
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x19] != 0) {
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
                    /* WARNING: Could not recover jumptable at 0x0001412d6089. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1412d60be FUN_1412d60be body=498 status=ok
// SIG undefined FUN_1412d60be(void)

void FUN_1412d60be(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  longlong *plVar6;
  char cVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_78 [40];
  longlong *local_50;
  uint local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  plVar2 = (longlong *)(param_1 + 8);
  local_50 = (longlong *)(param_1 + 0x18);
  do {
    plVar6 = local_50;
    if ((int)local_50[1] <= (int)local_48) break;
    lVar11 = *local_50;
    uVar10 = (ulonglong)local_48;
    lVar9 = *(longlong *)(lVar11 + uVar10 * 8);
    plVar4 = *(longlong **)(lVar9 + 0x20);
    if (plVar4 == (longlong *)0x0) {
LAB_1412d612e:
      lVar11 = *(longlong *)(lVar11 + uVar10 * 8);
      if (*(int *)(lVar11 + 0x10) == 0) {
        if (*(longlong *)(lVar11 + 0x20) != 0) {
          puVar8 = (undefined8 *)(lVar11 + 0x20);
          (**(code **)(**(longlong **)(lVar11 + 0x18) + 0x20))
                    (*(longlong **)(lVar11 + 0x18),0xffffffff,0);
          goto LAB_1412d618c;
        }
        goto LAB_1412d6194;
      }
    }
    else {
      cVar7 = (**(code **)(*plVar4 + 0x20))(plVar4,lVar9);
      if (cVar7 == '\0') {
        lVar11 = *plVar6;
        goto LAB_1412d612e;
      }
      LOCK();
      *(int *)(lVar9 + 0x10) = *(int *)(lVar9 + 0x10) + -1;
      UNLOCK();
      puVar8 = (undefined8 *)(lVar9 + 0x20);
      if (*(longlong **)(lVar9 + 0x18) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar9 + 0x18) + 0x10))();
      }
LAB_1412d618c:
      *puVar8 = 0;
LAB_1412d6194:
      plVar6 = local_50;
      lVar9 = (longlong)(int)local_48;
      FUN_1469454fe(*(longlong *)(*local_50 + lVar9 * 8) + 0x80);
      lVar11 = *plVar6;
      iVar3 = *(int *)(param_1 + 0x10);
      *(uint *)(param_1 + 0x10) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0x14) < iVar3 + 1U) {
        FUN_146952276(plVar2,iVar3);
      }
      *(undefined8 *)(*plVar2 + (longlong)iVar3 * 8) = *(undefined8 *)(lVar11 + lVar9 * 8);
      FUN_146945da0(&local_50);
    }
    uVar1 = local_48 + 1;
    bVar5 = -2 < (int)local_48;
    local_48 = uVar1;
  } while (bVar5);
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar11 = 0;
    do {
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x18) + lVar11 * 8);
      if (*(longlong *)(lVar9 + 0x20) != 0) {
        (**(code **)(**(longlong **)(lVar9 + 0x18) + 0x20))
                  (*(longlong **)(lVar9 + 0x18),0xffffffff,0);
        *(undefined8 *)(lVar9 + 0x20) = 0;
      }
      FUN_1469454fe(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar11 * 8) + 0x80);
      lVar9 = *(longlong *)(param_1 + 0x18);
      iVar3 = *(int *)(param_1 + 0x10);
      *(uint *)(param_1 + 0x10) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0x14) < iVar3 + 1U) {
        FUN_146952276(plVar2,iVar3);
      }
      *(undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)iVar3 * 8) =
           *(undefined8 *)(lVar9 + lVar11 * 8);
      lVar11 = lVar11 + 1;
    } while ((int)lVar11 < *(int *)(param_1 + 0x20));
  }
  iVar3 = *(int *)(param_1 + 0x30);
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) != iVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412d62cc FUN_1412d62cc body=544 status=ok
// SIG undefined FUN_1412d62cc(void)

void FUN_1412d62cc(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar5 = *(uint *)(param_1 + 9);
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      uVar3 = 0;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
             0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar5 != uVar3);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] == 0) {
      uVar8 = 1;
      local_48._0_4_ = 0xffffffff;
      local_48._4_4_ = 0;
      local_58._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      uVar8 = local_58 >> 0x20;
    }
    iVar4 = (int)local_58;
    uVar5 = (uint)local_48;
    iVar6 = local_48._4_4_;
    iVar9 = local_40;
    if (local_48._4_4_ < (int)local_50[3]) {
      do {
        lVar11 = *param_1;
        lVar10 = (longlong)iVar6 * 0x40;
        uVar13 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar11 + 0x20 + lVar10);
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x3c + lVar10) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x38 + lVar10) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar13) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar12 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        uVar5 = ~(uint)uVar8 & uVar5;
        plVar7 = (longlong *)local_50[2];
        if ((longlong *)local_50[2] == (longlong *)0x0) {
          plVar7 = local_50;
        }
        iVar12 = (int)local_50[3];
        lVar11 = (longlong)iVar4;
        uVar3 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar6 = iVar12 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar10 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar3 = *(uint *)((longlong)plVar7 + lVar10 * 4 + lVar11 * 4 + 4);
            if (uVar3 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar2 - lVar11 == lVar10) goto LAB_1412d64a3;
          }
          iVar4 = iVar4 + (int)lVar10 + 1;
          uVar5 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar13 = uVar8 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar12);
    }
  }
LAB_1412d64a3:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412d64f0 FUN_1412d64f0 body=150 status=ok
// SIG undefined FUN_1412d64f0(void)

void FUN_1412d64f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if ((0 < *(int *)(lVar1 + 0x10)) && (**(longlong **)(lVar1 + 8) != 0)) {
    FUN_144a7ee82();
  }
  iVar3 = *(int *)(lVar1 + 0x60);
  if (0 < iVar3) {
    lVar4 = 0;
    iVar5 = 0;
    iVar7 = 0;
    do {
      uVar2 = *(ulonglong *)(*(longlong *)(lVar1 + 0x58) + lVar4 * 8);
      uVar6 = (uint)(uVar2 >> 0x1f) & 0xfffffffe;
      if ((int)uVar2 != -1) {
        memcpy((void *)(param_2 + (longlong)iVar5 * 8),(void *)(param_2 + (longlong)iVar7 * 8),
               (longlong)(int)uVar6 * 8);
        iVar5 = iVar5 + uVar6;
        iVar3 = *(int *)(lVar1 + 0x60);
      }
      iVar7 = uVar6 + iVar7;
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  return;
}



// FUNCTION 1412d6586 FUN_1412d6586 body=108 status=ok
// SIG undefined FUN_1412d6586(void)

void FUN_1412d6586(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x56c8));
  iVar1 = *(int *)(param_1 + 0x56f8);
  *(uint *)(param_1 + 0x56f8) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x56fc) < iVar1 + 1U) {
    FUN_1458b315c((longlong *)(param_1 + 0x56f0),iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x56f0) + (longlong)iVar1 * 8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001412d65de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x56c8));
  return;
}



// FUNCTION 1412d65f2 FUN_1412d65f2 body=145 status=ok
// SIG undefined FUN_1412d65f2(void)

void FUN_1412d65f2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x20) = param_2;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    if (param_2 == 0) {
      FUN_1412d6726();
    }
    else {
      FUN_1458b3248(param_1 + 0x58,param_2);
    }
  }
  FUN_1412d6684(param_1,*(undefined8 *)(param_1 + 0x20));
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != 0) {
    if (*(longlong *)(param_1 + 0x20) == 0) {
      FUN_1458b31e1(lVar1 + 0x75a0);
      return;
    }
    FUN_1458b31e8(lVar1 + 0x7590);
    return;
  }
  return;
}



// FUNCTION 1412d6684 FUN_1412d6684 body=162 status=ok
// SIG undefined FUN_1412d6684(void)

void FUN_1412d6684(longlong *param_1,undefined8 param_2)

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
        goto LAB_1412d6711;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1412d6711:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1412d6726 FUN_1412d6726 body=303 status=ok
// SIG undefined FUN_1412d6726(void)

void FUN_1412d6726(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  
  plVar1 = param_1 + 0xe;
  cVar3 = FUN_1403ae288(plVar1);
  if (cVar3 != '\0') {
    if (param_1[0x12] != 0) {
      lVar4 = FUN_14008e0ae(plVar1);
      if (param_1[0x12] != 0) {
        FUN_14480f766(lVar4 + 0x168);
      }
      param_1[0x12] = 0;
    }
    if (param_1[0x13] != 0) {
      lVar4 = FUN_14008e0ae(plVar1);
      if (param_1[0x13] != 0) {
        FUN_14480f766(lVar4 + 0x198);
      }
      param_1[0x13] = 0;
    }
  }
  if (((int)param_1[1] != 0) && (puVar2 = (undefined8 *)*param_1, puVar2 != (undefined8 *)0x0)) {
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if ((int)param_1[5] != 0) {
    puVar2 = (undefined8 *)param_1[4];
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(param_1 + 4,0,0,0x10);
      *(undefined4 *)(param_1 + 5) = 0;
    }
  }
  FUN_14087dfa2(param_1 + 0x14,0);
  FUN_1412d6856(param_1);
  param_1[10] = 0;
  return;
}



// FUNCTION 1412d6856 FUN_1412d6856 body=483 status=ok
// SIG undefined FUN_1412d6856(void)

void FUN_1412d6856(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  
  lVar3 = FUN_1402097a4();
  if (lVar3 == 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 200);
  if (iVar2 == 0) {
    uVar12 = 1;
    uVar8 = 0;
    iVar5 = 0;
    iVar9 = 0;
  }
  else {
    puVar4 = *(uint **)(param_1 + 0xc0);
    if (*(uint **)(param_1 + 0xc0) == (uint *)0x0) {
      puVar4 = (uint *)(param_1 + 0xb0);
    }
    uVar10 = *puVar4;
    if (uVar10 == 0) {
      iVar5 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar5 = iVar2 + -1;
      }
      uVar8 = 0;
      uVar6 = iVar5 >> 5;
      if (iVar5 >> 5 < 1) {
        uVar6 = 0;
      }
      iVar9 = 0;
      do {
        if (uVar6 == uVar8) {
          fVar15 = 0.0;
          goto LAB_1412d69c2;
        }
        iVar9 = iVar9 + 0x20;
        uVar10 = puVar4[uVar8 + 1];
        uVar8 = uVar8 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar8 = 0;
      iVar9 = 0;
    }
    uVar12 = (ulonglong)(-uVar10 & uVar10);
    uVar1 = uVar12 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar5 = (iVar9 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar5) {
      iVar5 = iVar2;
    }
  }
  fVar15 = 0.0;
  if (iVar5 < iVar2) {
    puVar4 = (uint *)(param_1 + 0xb0);
    if (*(uint **)(param_1 + 0xc0) != (uint *)0x0) {
      puVar4 = *(uint **)(param_1 + 0xc0);
    }
    iVar7 = iVar2 + 0x1e;
    if (-1 < iVar2 + -1) {
      iVar7 = iVar2 + -1;
    }
    iVar7 = iVar7 >> 5;
    uVar10 = 0xffffffff;
    do {
      fVar15 = fVar15 + *(float *)(*(longlong *)(param_1 + 0xa0) + 8 + (longlong)iVar5 * 0x14);
      uVar10 = ~(uint)uVar12 & uVar10;
      iVar5 = (int)uVar8;
      lVar13 = (longlong)iVar5;
      uVar6 = puVar4[lVar13] & uVar10;
      if (uVar6 == 0) {
        iVar11 = iVar7;
        if (iVar7 < iVar5) {
          iVar11 = iVar5;
        }
        if (iVar7 <= iVar5) break;
        lVar14 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar6 = puVar4[lVar13 + lVar14 + 1];
          if (uVar6 != 0) break;
          lVar14 = lVar14 + 1;
          if (iVar11 - lVar13 == lVar14) goto LAB_1412d69c2;
        }
        uVar8 = (ulonglong)(iVar5 + (int)lVar14 + 1);
        uVar10 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar6 & uVar6);
      uVar1 = uVar12 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar5 = (iVar9 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar5 < iVar2);
  }
LAB_1412d69c2:
  fVar16 = 0.0;
  if (0.0 <= fVar15) {
    fVar16 = fVar15;
  }
  lVar3 = FUN_14008e0ae(lVar3);
  *(float *)(lVar3 + 0x58) = fVar16;
  FUN_14020a6cc(lVar3 + 0x50,1);
  return;
}



// FUNCTION 1412d6a39 FUN_1412d6a39 body=41 status=ok
// SIG undefined FUN_1412d6a39(void)

void FUN_1412d6a39(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1412d6a62(param_1);
    param_1 = param_1 + 0x268;
  }
  return;
}



// FUNCTION 1412d6a62 FUN_1412d6a62 body=394 status=ok
// SIG undefined FUN_1412d6a62(void)

void FUN_1412d6a62(longlong *param_1)

{
  FUN_1407dde54(param_1 + 0x2f);
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0xe],(int)param_1[0xf]);
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
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



// FUNCTION 1412d6bec FUN_1412d6bec body=391 status=ok
// SIG undefined FUN_1412d6bec(void)

void FUN_1412d6bec(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b895be0;
  if (param_1[0x70] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x6e] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x6e] + 0x10))();
  }
  if (param_1[0x6b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x69] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x67] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x62],*(undefined4 *)(param_1 + 99));
  if (param_1[0x62] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x61) = 0;
  if (param_1[0x60] != 0) {
    FUN_1400020a8();
  }
  FUN_140a49dbc(param_1 + 0x58);
  FUN_145a5bc9c(param_1[0x56],*(undefined4 *)(param_1 + 0x57));
  if (param_1[0x56] != 0) {
    FUN_1400020a8();
  }
  FUN_140d4710a(param_1 + 0x46);
  FUN_140d4710a(param_1 + 0x36);
  FUN_140d4710a(param_1 + 0x26);
  FUN_140d4710a(param_1 + 0x16);
  *param_1 = &PTR_FUN_14b473650;
  plVar2 = (longlong *)param_1[0xd];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1412d6d74 FUN_1412d6d74 body=1123 status=ok
// SIG undefined FUN_1412d6d74(void)

undefined4 FUN_1412d6d74(longlong param_1,longlong *param_2,int param_3,longlong *param_4)

{
  int *piVar1;
  code *pcVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined *puVar15;
  longlong lVar16;
  undefined8 ****ppppuVar17;
  ulonglong uVar18;
  int *piVar19;
  undefined1 auStack_b8 [40];
  char local_90 [16];
  longlong *local_80;
  int local_68;
  undefined8 ***local_60 [3];
  ushort local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_4 = 0;
  uVar4 = *(uint *)(param_1 + 0xa8);
  uVar5 = 0;
  if ((ulonglong)uVar4 == 0) goto LAB_1412d6ea9;
  piVar1 = *(int **)(param_1 + 0xa0);
  uVar12 = uVar4 - 1;
  if (piVar1[(longlong)(int)uVar12 * 8] < 0) {
    uVar12 = 0xffffffff;
  }
  if (0 < (int)uVar4) {
    uVar18 = 0;
    piVar19 = piVar1;
    do {
      if (param_3 <= *piVar19) {
        uVar12 = (uint)uVar18;
        break;
      }
      uVar18 = uVar18 + 1;
      piVar19 = piVar19 + 8;
    } while (uVar4 != uVar18);
  }
  if (((int)uVar4 <= (int)uVar12 || (int)uVar12 < 0) ||
     (lVar6 = FUN_1409448ee(piVar1 + (ulonglong)uVar12 * 8 + 2), lVar6 == 0)) goto LAB_1412d6ea9;
  lVar7 = FUN_1405c673d();
  uVar5 = 0;
  uVar4 = FUN_14094497a(lVar7,param_2,0);
  if (((int)uVar4 < 0) ||
     ((*(int *)(lVar7 + 200) <= (int)uVar4 ||
      (lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0xc0) + (ulonglong)uVar4 * 0x28), lVar7 == 0))))
  {
    if (param_2 == (longlong *)0x0) goto LAB_1412d6ea9;
    uVar9 = FUN_14018b740();
    plVar10 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar9);
    if (plVar10 == (longlong *)0x0) goto LAB_1412d6ea9;
    uVar9 = FUN_14018b740();
    plVar11 = (longlong *)FUN_144718840(plVar10,uVar9);
    if ((((plVar10 == plVar11) || (plVar11 == (longlong *)0x0)) ||
        (lVar7 = (**(code **)(*plVar11 + 0x48))(plVar11), lVar7 == 0)) ||
       (lVar7 = *(longlong *)(lVar7 + 0x28), lVar7 == 0)) goto LAB_1412d6ea9;
  }
  FUN_14016a17c(lVar6);
  lVar16 = *(longlong *)(lVar6 + 0x48);
  if (lVar16 == 0) {
    uVar5 = 0;
    if (*(longlong *)(lVar6 + 0x20) == 0) goto LAB_1412d6ea9;
    lVar8 = FUN_14000e0c8(lVar6 + 0x18);
    lVar16 = *(longlong *)(lVar6 + 0x48);
    if (lVar8 == 0) {
      if (lVar16 == 0) goto LAB_1412d6ea9;
      if (DAT_14c872a72 == '\0') {
        FUN_140113f48();
      }
LAB_1412d7172:
      *(longlong *)(lVar6 + 0x48) = lVar8;
      lVar16 = lVar8;
    }
    else if (lVar16 != lVar8) {
      if ((lVar16 != 0) && (DAT_14c872a72 == '\0')) {
        FUN_140113f48();
      }
      FUN_1401924dc(lVar8);
      goto LAB_1412d7172;
    }
    if (lVar16 == 0) goto LAB_1412d6ea9;
  }
  lVar8 = FUN_1412d71d8();
  uVar5 = 0;
  if (((lVar8 != 0) && (*(int *)(lVar8 + 0x38) <= *(int *)(lVar16 + 0x38))) &&
     ((*(longlong *)(*(longlong *)(lVar16 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
       lVar8 + 0x30 && (*(int *)(lVar6 + 0x58) != *(int *)(lVar6 + 0x84))))) {
    uVar4 = (uint)((ulonglong)lVar7 >> 0x10);
    uVar12 = (uint)lVar7 & 0xffff;
    lVar16 = lVar6 + 0x88;
    if (*(longlong *)(lVar6 + 0x90) != 0) {
      lVar16 = *(longlong *)(lVar6 + 0x90);
    }
    iVar13 = *(int *)(lVar16 + (ulonglong)
                               (*(int *)(lVar6 + 0x98) - 1U &
                               (int)((ulonglong)lVar7 >> 0x20) + ((uint)lVar7 << 0x10 | uVar12) +
                               (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar12 >> 4)) * 4);
    if (iVar13 != -1) {
      do {
        plVar10 = (longlong *)(*(longlong *)(lVar6 + 0x50) + (longlong)iVar13 * 0x18);
        if (*plVar10 == lVar7) {
          if ((plVar10 + 1 != (longlong *)0x0 && plVar10 != (longlong *)0x0) &&
             (lVar6 = plVar10[1], lVar6 != 0)) {
            local_90[0] = '\0';
            local_68 = 0;
            FUN_1456bb102(local_90,param_2);
            FUN_1447c3578(lVar6 + 8,local_60,local_90);
            uVar5 = FUN_1405d5f74(local_60);
            pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
            if (pcVar2 != (code *)0x0) {
              ppppuVar17 = local_60;
              if (0x18 < local_48) {
                ppppuVar17 = (undefined8 ****)local_60[0];
              }
              (*pcVar2)(ppppuVar17);
            }
            if (0x18 < local_48) {
              FUN_1400020a8(local_60[0]);
            }
            lVar7 = DAT_14c9a3da0;
            if ((longlong)local_68 != 0) {
              lVar16 = (longlong)local_68 + -1;
              lVar8 = lVar16 * 0x10;
              FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar8),
                            *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar8));
              if (*(longlong *)(lVar7 + lVar8) != 0) {
                FUN_1400020a8();
              }
              lVar7 = DAT_14c9a3da0;
              iVar13 = (int)lVar16;
              if (DAT_14c9a3dd4 != 0) {
                *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar13;
              }
              *(undefined4 *)(lVar7 + lVar8) = 0xffffffff;
              iVar14 = -1;
              if (0 < DAT_14c9a3dd4) {
                iVar14 = DAT_14c9a3dd0;
              }
              *(int *)(lVar7 + 4 + lVar8) = iVar14;
              DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
              puVar15 = &DAT_14c9a3db0;
              if (DAT_14c9a3dc0 != (undefined *)0x0) {
                puVar15 = DAT_14c9a3dc0;
              }
              iVar14 = iVar13 + 0x1f;
              if (-1 < iVar13) {
                iVar14 = iVar13;
              }
              bVar3 = (byte)lVar16 & 0x1f;
              DAT_14c9a3dd0 = iVar13;
              *(uint *)(puVar15 + (longlong)(iVar14 >> 5) * 4) =
                   *(uint *)(puVar15 + (longlong)(iVar14 >> 5) * 4) &
                   (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
              local_68 = 0;
            }
            if ((local_90[0] == '\x03') && (local_80 != (longlong *)0x0)) {
              LOCK();
              piVar1 = (int *)((longlong)local_80 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_80 + 0x10))();
              }
            }
            if (*(char *)(lVar6 + 0x68) != '\0') {
              *param_4 = lVar6 + 0x40;
            }
          }
          break;
        }
        iVar13 = (int)plVar10[2];
      } while (iVar13 != -1);
    }
  }
LAB_1412d6ea9:
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1412d71d8 FUN_1412d71d8 body=57 status=ok
// SIG undefined FUN_1412d71d8(void)

void FUN_1412d71d8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba5530 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba5530 = FUN_140002ddd(FUN_1465c2d5c,uVar1,L"LootGameStageTableRow");
  }
  return;
}



// FUNCTION 1412d7211 FUN_1412d7211 body=18 status=ok
// SIG undefined FUN_1412d7211(void)

undefined8 FUN_1412d7211(longlong *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001412d7219. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x2b0))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 1412d7224 FUN_1412d7224 body=89 status=ok
// SIG undefined FUN_1412d7224(void)

undefined8 FUN_1412d7224(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x188);
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
    uVar6 = *(undefined8 *)(param_1 + 0x180);
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



// FUNCTION 1412d727e FUN_1412d727e body=1579 status=ok
// SIG undefined FUN_1412d727e(void)

void FUN_1412d727e(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_18 = 0;
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
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_18);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_18);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_18 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_18);
    }
  }
  local_30 = 0;
  local_28 = 0x3004;
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947e70) {
    FUN_144b3d300(&DAT_14c947e70);
    if (DAT_14c947e70 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_14170fd90;
      local_70 = 0x8000000000000000;
      local_78 = 0x8001;
      FUN_14000176a(&DAT_14c947e20,L"FGameDataHandleProperty",0);
      atexit(FUN_1427b4416);
      _Init_thread_footer(&DAT_14c947e70);
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
      local_30 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_30);
    }
  }
  local_38 = 0;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_30;
  local_50 = local_28;
  local_48 = 0;
  FUN_1412d78aa(local_18,&local_58,local_38,local_40);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412d78aa FUN_1412d78aa body=583 status=ok
// SIG undefined FUN_1412d78aa(void)

void FUN_1412d78aa(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  code *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  code *local_68;
  longlong *plStack_60;
  code *local_50;
  longlong *local_48;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_1 != 0) {
    if (DAT_14cb56270 == 0) {
      local_80 = &local_50;
      local_50 = FUN_1449e2820;
      local_70 = FUN_14081d0ea;
      local_78 = FUN_1427b09ee;
      local_88 = &LAB_148630fef;
      local_90 = FUN_1464b6a91;
      local_98 = L"Engine";
      local_a0 = 0;
      local_a8 = 0x10004001;
      local_b0 = 8;
      local_b8 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
    }
    plVar4 = (longlong *)FUN_144718840(param_1,DAT_14cb56270);
    if (plVar4 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar4 + 0x20))(plVar4);
      if (lVar5 != 0) {
        local_68 = (code *)*param_2;
        FUN_1446dcdd4(&local_50);
        if (DAT_14cb77de0 == 0) {
          local_68 = (code *)0x0;
          plStack_60 = (longlong *)0x0;
        }
        else {
          FUN_140f6011c(DAT_14cb77de0,&local_68,&local_50);
        }
        if (local_38 != 0) {
          FUN_1400020a8();
        }
        pcVar3 = local_68;
        if (local_68 != (code *)0x0) {
          lVar5 = (**(code **)(*plVar4 + 0x20))(plVar4);
          local_50 = pcVar3;
          local_48 = plStack_60;
          if (plStack_60 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
            UNLOCK();
          }
          FUN_140c679ea(lVar5 + 8,&local_50,param_3,param_4);
          plVar4 = local_48;
          if (local_48 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_48 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_48)(local_48);
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
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412d7af2 FUN_1412d7af2 body=114 status=ok
// SIG undefined FUN_1412d7af2(void)

void FUN_1412d7af2(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 7) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x31) = 0;
  *(undefined8 *)((longlong)param_1 + 0x39) = 0;
  *(undefined4 *)(param_1 + 0xb) = 2;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x81) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  return;
}



// FUNCTION 1412d7b64 FUN_1412d7b64 body=125 status=ok
// SIG undefined FUN_1412d7b64(void)

void FUN_1412d7b64(longlong *param_1)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  byte bVar5;
  
  uVar1 = *(uint *)(param_1 + 10);
  bVar2 = (byte)uVar1;
  bVar5 = bVar2 * '\x02' & -(*(byte *)(param_1 + 6) & 1) & 2;
  *(byte *)(param_1 + 10) = bVar2 & 0xfd | bVar5;
  if ((bool)(bVar5 >> 1) == ((uVar1 >> 1 & 1) != 0)) {
    return;
  }
  if ((*(byte *)(param_1 + 6) & 1) == 0) {
    cVar3 = (**(code **)(*param_1 + 0x60))(param_1,0);
    if (cVar3 == '\0') {
      return;
    }
    lVar4 = 0x58;
  }
  else {
    lVar4 = (ulonglong)(bVar5 == 0) * 8 + 0x50;
  }
                    /* WARNING: Could not recover jumptable at 0x0001412d7bc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + lVar4))(param_1);
  return;
}



// FUNCTION 1412d7be2 FUN_1412d7be2 body=217 status=ok
// SIG undefined FUN_1412d7be2(void)

void FUN_1412d7be2(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 8) + 0x54);
  if ((((iVar1 != 0) && (uVar4 = *(uint *)(*(longlong *)(param_1 + 8) + 0x50), -1 < (int)uVar4)) &&
      ((int)uVar4 < DAT_14c9647dc)) &&
     ((((plVar5 = (longlong *)
                  ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
        plVar5 != (longlong *)0x0 && ((int)plVar5[2] == iVar1)) &&
       (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 &&
        ((*plVar5 != 0 && (lVar2 = *(longlong *)(*plVar5 + 0xf0), lVar2 != 0)))))) &&
      (lVar3 = *param_2, lVar3 != 0)))) {
    uVar4 = (uint)lVar3;
    if ((int)(uVar4 & 0xffffff) < *(int *)(lVar2 + 0x10)) {
      lVar6 = lVar2 + 0x18;
      if (*(longlong *)(lVar2 + 0x28) != 0) {
        lVar6 = *(longlong *)(lVar2 + 0x28);
      }
      if ((*(uint *)(lVar6 + (ulonglong)((uVar4 & 0xffffff) >> 5) * 4) >> (uVar4 & 0x1f) & 1) != 0)
      {
        lVar2 = *(longlong *)(lVar2 + 8);
        lVar6 = (ulonglong)(uVar4 & 0xffffff) * 0x70;
        if (((lVar2 + lVar6 != 0) && (*(longlong *)(lVar2 + 0x60 + lVar6) == lVar3)) &&
           (*(char *)(lVar2 + 1 + lVar6) != '\x04')) {
          FUN_1405a424c();
        }
      }
    }
  }
  *param_2 = 0;
  return;
}



// FUNCTION 1412d7cbc FUN_1412d7cbc body=31 status=ok
// SIG undefined FUN_1412d7cbc(void)

void FUN_1412d7cbc(longlong *param_1)

{
  FUN_1410fa8b6();
                    /* WARNING: Could not recover jumptable at 0x0001412d7cd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2f0))(param_1);
  return;
}



// FUNCTION 1412d7cdc FUN_1412d7cdc body=169 status=ok
// SIG undefined FUN_1412d7cdc(void)

undefined8 FUN_1412d7cdc(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  longlong local_28;
  undefined1 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = param_3;
  FUN_1434cf892(*(undefined8 *)(param_1 + 0x148),param_2,&local_28);
  if (local_28 == DAT_14cb7fa60) {
    FUN_14610d4a3(param_2);
    plVar2 = (longlong *)FUN_140489acc();
    if (plVar2 != (longlong *)0x0) {
      cVar1 = (**(code **)(*plVar2 + 0x420))(plVar2);
      if (cVar1 != '\0') {
        FUN_1446f470e(local_30,L"XeSS",1);
        local_20 = local_30;
        FUN_1408ff3be(param_2);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412d7d86 FUN_1412d7d86 body=256 status=ok
// SIG undefined FUN_1412d7d86(void)

void FUN_1412d7d86(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  int *piVar2;
  
  if ((longlong)*(int *)(param_1 + 0xb0) < 1) {
    return;
  }
  piVar2 = *(int **)(param_1 + 0xa8);
  lVar1 = (longlong)*(int *)(param_1 + 0xb0) * 0x68;
  while (*piVar2 != *(int *)(param_1 + 0x98)) {
    piVar2 = piVar2 + 0x1a;
    lVar1 = lVar1 + -0x68;
    if (lVar1 == 0) {
      return;
    }
  }
  if (piVar2 == (int *)0x0) {
    return;
  }
  if ((longlong)*(int *)(param_1 + 0x58) != 0) {
    lVar1 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_1 + 0x50) + 8 + lVar1) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x50) + lVar1) != 0)) {
        FUN_148d17efc(param_1 + 0x50,piVar2);
        break;
      }
      lVar1 = lVar1 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x58) * 0x10 != lVar1);
  }
  if (*(char *)(param_1 + 0x9c) == '\x01') {
    if ((longlong)*(int *)(param_1 + 0x88) != 0) {
      lVar1 = 0;
      do {
        if ((*(int *)(*(longlong *)(param_1 + 0x80) + 8 + lVar1) != 0) &&
           (*(longlong *)(*(longlong *)(param_1 + 0x80) + lVar1) != 0)) {
          FUN_148d17efc(param_1 + 0x80,piVar2,param_2);
          break;
        }
        lVar1 = lVar1 + 0x10;
      } while ((longlong)*(int *)(param_1 + 0x88) * 0x10 != lVar1);
    }
    *(undefined1 *)(param_1 + 0x9c) = 0;
  }
  FUN_1458967a0(piVar2,0,0,0);
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined1 *)(param_1 + 0x9d) = 0;
  return;
}



// FUNCTION 1412d7e86 FUN_1412d7e86 body=160 status=ok
// SIG undefined FUN_1412d7e86(void)

undefined8 * FUN_1412d7e86(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  iVar1 = (int)param_2[1] + -1;
  if ((int)param_2[1] == 0) {
    iVar1 = 0;
  }
  FUN_1412d7f26(0,iVar1);
  lVar4 = *param_2;
  lVar2 = (longlong)(int)param_2[1];
  if ((lVar2 != 0) && (lVar4 + lVar2 * 2 + -2 != lVar4)) {
    lVar5 = 0;
    do {
      uVar3 = (ulonglong)*(ushort *)(lVar4 + lVar5);
      if ((uVar3 < 0x3c) && ((0xc00100100000000U >> (uVar3 & 0x3f) & 1) != 0)) {
        uVar3 = 0x5f;
      }
      FUN_140002184(param_1,uVar3);
      lVar5 = lVar5 + 2;
    } while (lVar2 * 2 + -2 != lVar5);
    lVar4 = *param_2;
  }
  if (lVar4 != 0) {
    FUN_1400020a8(lVar4);
  }
  return param_1;
}



// FUNCTION 1412d7f26 FUN_1412d7f26 body=17 status=ok
// SIG undefined FUN_1412d7f26(void)

void FUN_1412d7f26(longlong param_1,int param_2)

{
  if ((0 < param_2) && (*(int *)(param_1 + 0xc) <= param_2)) {
    FUN_1446f8c06(param_1,param_2 + 1);
    return;
  }
  return;
}



// FUNCTION 1412d7f46 FUN_1412d7f46 body=1224 status=ok
// SIG undefined FUN_1412d7f46(void)

undefined4 FUN_1412d7f46(longlong param_1,longlong *param_2)

{
  int iVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [24];
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar5 = FUN_1412d8410(param_2);
  if ((char)uVar5 != '\0') {
    if (*param_2 == 0) {
      puVar6 = &DAT_14c9a1308;
    }
    else {
      puVar6 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb75438);
    }
    plVar10 = (longlong *)(param_1 + 0x28);
    pbVar2 = (byte *)*puVar6;
    puVar9 = &DAT_14c9a1270;
    puVar8 = &DAT_14c9a1270;
    if ((pbVar2 != (byte *)0x0) && (puVar8 = &DAT_14c9a1270, (*pbVar2 & 2) != 0)) {
      puVar8 = *(undefined8 **)(pbVar2 + 8);
    }
    local_a0 = DAT_14cb756e8;
    FUN_148802a4c(plVar10,*(undefined4 *)(puVar8 + 2));
    pbVar2 = (byte *)*puVar6;
    if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 2) != 0)) {
      puVar9 = *(undefined8 **)(pbVar2 + 8);
    }
    if ((longlong)*(int *)(puVar9 + 2) != 0) {
      puVar6 = (undefined8 *)*puVar9;
      lVar11 = (longlong)*(int *)(puVar9 + 2) << 4;
      do {
        if ((*(byte *)*puVar6 & 0x68) == 0) {
          iVar1 = *(int *)(param_1 + 0x30);
          *(uint *)(param_1 + 0x30) = iVar1 + 1U;
          if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
            FUN_14880de16(plVar10,iVar1);
          }
          puVar8 = (undefined8 *)(*plVar10 + (longlong)iVar1 * 0x18);
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8[2] = 0;
          local_90 = DAT_14cb75498;
          local_98 = DAT_14cb75490;
          FUN_1448075d0(local_88,&local_98);
          uVar7 = FUN_144a06846(puVar6,local_88);
          FUN_148802a92(local_a0,puVar6,uVar7,puVar8);
          if (local_70 != 0) {
            FUN_1400020a8();
          }
        }
        puVar6 = puVar6 + 2;
        lVar11 = lVar11 + -0x10;
      } while (lVar11 != 0);
    }
    plVar10 = &DAT_14c9a1308;
    puVar6 = &DAT_14c9a1308;
    if (*param_2 != 0) {
      puVar6 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb753e0);
    }
    uVar12 = FUN_140b963dc(puVar6,0x3f19999a);
    *(undefined4 *)(param_1 + 0x18) = uVar12;
    if (*param_2 != 0) {
      plVar10 = (longlong *)FUN_1446e60f4(*param_2,&DAT_14cb753e8);
    }
    if (*plVar10 == 0) {
      bVar3 = 1;
    }
    else {
      bVar3 = FUN_14000584e(*plVar10,1);
    }
    *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfe | bVar3;
    if (*param_2 == 0) {
      plVar10 = &DAT_14c9a1308;
    }
    else {
      plVar10 = (longlong *)FUN_1446e60f4(*param_2,&DAT_14cb753f0);
    }
    if (*plVar10 == 0) {
      bVar3 = 2;
    }
    else {
      cVar4 = FUN_14000584e(*plVar10,1);
      bVar3 = cVar4 * '\x02';
    }
    *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfd | bVar3;
    if (*param_2 == 0) {
      plVar10 = &DAT_14c9a1308;
    }
    else {
      plVar10 = (longlong *)FUN_1446e60f4(*param_2,&DAT_14cb753f8);
    }
    if (*plVar10 == 0) {
      bVar3 = 4;
    }
    else {
      cVar4 = FUN_14000584e(*plVar10,1);
      bVar3 = cVar4 << 2;
    }
    *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfb | bVar3;
    if (*param_2 == 0) {
      plVar10 = &DAT_14c9a1308;
    }
    else {
      plVar10 = (longlong *)FUN_1446e60f4(*param_2,&DAT_14cb75400);
    }
    if (*plVar10 == 0) {
      bVar3 = 0;
    }
    else {
      cVar4 = FUN_14000584e(*plVar10,0);
      bVar3 = cVar4 << 3;
    }
    *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xf7 | bVar3;
    if (*param_2 == 0) {
      plVar10 = &DAT_14c9a1308;
    }
    else {
      plVar10 = (longlong *)FUN_1446e60f4(*param_2,&DAT_14cb75408);
    }
    if (*plVar10 == 0) {
      bVar3 = 0;
    }
    else {
      cVar4 = FUN_14000584e(*plVar10,0);
      bVar3 = cVar4 << 4;
    }
    *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xef | bVar3;
    if (*param_2 == 0) {
      plVar10 = &DAT_14c9a1308;
    }
    else {
      plVar10 = (longlong *)FUN_1446e60f4(*param_2,&DAT_14cb75410);
    }
    if (*plVar10 == 0) {
      bVar3 = 0x20;
    }
    else {
      cVar4 = FUN_14000584e(*plVar10,1);
      bVar3 = cVar4 << 5;
    }
    *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xdf | bVar3;
    if (*param_2 == 0) {
      plVar10 = &DAT_14c9a1308;
    }
    else {
      plVar10 = (longlong *)FUN_1446e60f4(*param_2,&DAT_14cb75418);
    }
    if (*plVar10 == 0) {
      bVar3 = 0;
    }
    else {
      cVar4 = FUN_14000584e(*plVar10,0);
      bVar3 = cVar4 << 6;
    }
    *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xbf | bVar3;
    if (*param_2 == 0) {
      plVar10 = &DAT_14c9a1308;
    }
    else {
      plVar10 = (longlong *)FUN_1446e60f4(*param_2,&DAT_14cb75420);
    }
    if (*plVar10 == 0) {
      bVar3 = 0;
    }
    else {
      cVar4 = FUN_14000584e(*plVar10,0);
      bVar3 = cVar4 << 7;
    }
    *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0x7f | bVar3;
    if (*param_2 == 0) {
      plVar10 = &DAT_14c9a1308;
    }
    else {
      plVar10 = (longlong *)FUN_1446e60f4(*param_2,&DAT_14cb75428);
    }
    if (*plVar10 == 0) {
      bVar3 = 0;
    }
    else {
      bVar3 = FUN_14000584e(*plVar10,0);
    }
    *(byte *)(param_1 + 0x1d) = *(byte *)(param_1 + 0x1d) & 0xfe | bVar3;
    if (*param_2 == 0) {
      puVar6 = &DAT_14c9a1308;
    }
    else {
      puVar6 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb75430);
    }
    pbVar2 = (byte *)*puVar6;
    if ((pbVar2 == (byte *)0x0) || ((*pbVar2 & 3) != 1)) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(pbVar2 + 8);
    }
    uVar12 = FUN_14880deaa(uVar7);
    *(undefined4 *)(param_1 + 0x20) = uVar12;
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1412d8410 FUN_1412d8410 body=401 status=ok
// SIG undefined FUN_1412d8410(void)

undefined8 FUN_1412d8410(longlong *param_1)

{
  longlong lVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar7;
  int iVar8;
  longlong *plVar9;
  undefined7 uVar6;
  
  if (*param_1 == 0) {
    puVar4 = &DAT_14c9a1308;
  }
  else {
    puVar4 = (undefined8 *)FUN_1446e60f4(*param_1,&DAT_14cb75438);
  }
  pbVar2 = (byte *)*puVar4;
  if (((((pbVar2 == (byte *)0x0) || ((*pbVar2 & 0x6b) != 2)) ||
       (*(int *)(*(longlong *)(pbVar2 + 8) + 0x10) < 1)) ||
      ((*(byte **)**(undefined8 **)(pbVar2 + 8) == (byte *)0x0 ||
       ((~**(byte **)**(undefined8 **)(pbVar2 + 8) & 3) != 0)))) ||
     ((*(byte **)**(undefined8 **)(pbVar2 + 8) == (byte *)0x0 ||
      ((**(byte **)**(undefined8 **)(pbVar2 + 8) & 0x68) != 0)))) {
LAB_1412d8434:
    uVar5 = 0;
  }
  else {
    pbVar3 = *(byte **)**(undefined8 **)(pbVar2 + 8);
    plVar7 = &DAT_14c9a1288;
    if ((pbVar3 != (byte *)0x0) && ((*pbVar3 & 2) != 0)) {
      plVar7 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
    }
    if ((int)plVar7[2] != *(int *)((longlong)plVar7 + 0x3c)) {
      plVar9 = plVar7 + 8;
      if ((longlong *)plVar7[9] != (longlong *)0x0) {
        plVar9 = (longlong *)plVar7[9];
      }
      iVar8 = *(int *)((longlong)plVar9 + (ulonglong)((int)plVar7[10] - 1U & DAT_14cb75440) * 4);
      if (iVar8 != -1) {
        do {
          lVar1 = *plVar7 + (longlong)iVar8 * 0x40;
          if (*(uint *)(*plVar7 + (longlong)iVar8 * 0x40) == DAT_14cb75440) {
            if ((lVar1 != 0) && (lVar1 != -0x28)) goto LAB_1412d8434;
            break;
          }
          iVar8 = *(int *)(lVar1 + 0x38);
        } while (iVar8 != -1);
      }
    }
    pbVar2 = *(byte **)**(undefined8 **)(pbVar2 + 8);
    plVar7 = &DAT_14c9a1288;
    if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 2) != 0)) {
      plVar7 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
    }
    uVar6 = (undefined7)((ulonglong)pbVar2 >> 8);
    uVar5 = CONCAT71(uVar6,1);
    if ((int)plVar7[2] != *(int *)((longlong)plVar7 + 0x3c)) {
      plVar9 = plVar7 + 8;
      if ((longlong *)plVar7[9] != (longlong *)0x0) {
        plVar9 = (longlong *)plVar7[9];
      }
      iVar8 = *(int *)((longlong)plVar9 + (ulonglong)((int)plVar7[10] - 1U & DAT_14cb75468) * 4);
      if (iVar8 != -1) {
        do {
          lVar1 = *plVar7 + (longlong)iVar8 * 0x40;
          if (*(uint *)(*plVar7 + (longlong)iVar8 * 0x40) == DAT_14cb75468) {
            return CONCAT71(uVar6,lVar1 == 0);
          }
          iVar8 = *(int *)(lVar1 + 0x38);
        } while (iVar8 != -1);
      }
    }
  }
  return uVar5;
}



// FUNCTION 1412d85a2 FUN_1412d85a2 body=163 status=ok
// SIG undefined FUN_1412d85a2(void)

ulonglong FUN_1412d85a2(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if ((((-1 < (int)param_2) && (lVar1 = *(longlong *)(param_1 + -0xb0), lVar1 != 0)) &&
      (lVar2 = *(longlong *)(param_1 + -0xa8), lVar2 != 0)) &&
     (((int)param_2 < *(int *)(lVar2 + 0x168) && ((int)param_2 < *(int *)(lVar1 + 0x418))))) {
    lVar5 = (longlong)*(int *)(*(longlong *)(lVar1 + 0x410) + (ulonglong)param_2 * 4);
    if ((lVar5 != -1) &&
       ((plVar3 = *(longlong **)(*(longlong *)(lVar1 + 0x440) + lVar5 * 8),
        plVar3 != (longlong *)0x0 && (cVar4 = (**(code **)(*plVar3 + 0x10))(), cVar4 != '\0')))) {
      if (*(char *)(*(longlong *)(lVar2 + 0x160) + (ulonglong)param_2) != '\x03') {
        uVar6 = (**(code **)(*(longlong *)(param_1 + -0xaf0) + 0xab8))
                          ((longlong *)(param_1 + -0xaf0),param_2);
        return uVar6 ^ 1;
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1412d8646 FUN_1412d8646 body=343 status=ok
// SIG undefined FUN_1412d8646(void)

undefined1 FUN_1412d8646(longlong param_1,int param_2)

{
  undefined1 uVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_f8 [40];
  undefined1 local_d0 [176];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 1)) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if ((((*(char *)(param_1 + 0xfa3) == '\x01') && (*(char *)(param_1 + 0xa8c) == '\x01')) &&
      (*(longlong *)(param_1 + 0xa40) != 0)) &&
     ((*(longlong *)(param_1 + 0xa48) != 0 && ((longlong)*(int *)(param_1 + 0xf98) != 0)))) {
    uVar4 = 0;
    uVar1 = 0;
    do {
      if (*(int *)(*(longlong *)(param_1 + 0xf90) + uVar4) == param_2) {
        if ((int)(~uVar4 >> 2) == 0) goto LAB_1412d8699;
        FUN_1401c0802(local_d0);
        cVar2 = FUN_1412d879e(local_d0);
        if (((cVar2 == '\0') ||
            (lVar3 = FUN_144a1ef30(*(undefined8 *)(param_1 + 0xa40),param_2), lVar3 == 0)) ||
           ((cVar2 = FUN_144a7ef0c(*(undefined8 *)(param_1 + 0xa48),param_2), cVar2 != '\0' ||
            (cVar2 = FUN_1458b4fac(local_d0,param_2), cVar2 != '\0')))) goto LAB_1412d8699;
        uVar1 = *(undefined1 *)(lVar3 + 0x1b9);
        break;
      }
      uVar4 = uVar4 + 4;
    } while ((longlong)*(int *)(param_1 + 0xf98) * 4 != uVar4);
  }
  else {
LAB_1412d8699:
    uVar1 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 1412d879e FUN_1412d879e body=30 status=ok
// SIG undefined FUN_1412d879e(void)

bool FUN_1412d879e(longlong param_1)

{
  bool bVar1;
  
  if ((*(longlong *)(param_1 + 0x30) == 0) || (*(longlong *)(param_1 + 0x68) == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = *(longlong *)(param_1 + 0xa0) != 0;
  }
  return bVar1;
}



// FUNCTION 1412d87bc FUN_1412d87bc body=221 status=ok
// SIG undefined FUN_1412d87bc(void)

longlong FUN_1412d87bc(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb11c78 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147dccd5f;
    local_40 = &LAB_146412370;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x1c0;
    FUN_14081cfa3(L"/Script/Engine",L"RuntimeHashExternalStreamingObjectBase",&DAT_14cb11c78,
                  &DAT_147dccd5e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb11c78;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412d889a FUN_1412d889a body=221 status=ok
// SIG undefined FUN_1412d889a(void)

longlong FUN_1412d889a(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb266f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147f8579f;
    local_40 = &LAB_140fab8ae;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x210;
    FUN_14081cfa3(L"/Script/FaceFX",L"FaceFXCharacter",&DAT_14cb266f0,&DAT_147f8579e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb266f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412d8978 FUN_1412d8978 body=1143 status=ok
// SIG undefined FUN_1412d8978(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412d8978(longlong param_1,ulonglong *param_2,ulonglong *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_118 [40];
  void *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  void *local_d8;
  ulonglong uStack_d0;
  ulonglong local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  void *pvStack_b0;
  undefined8 local_a8;
  longlong local_98;
  ulonglong uStack_90;
  longlong local_88 [2];
  ulonglong local_78;
  undefined8 local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar6 = ram0x00014cb70c24;
  if ((ram0x00014cb70c24 == DAT_14c948034) &&
     (uVar6 = DAT_14c948034, (int)DAT_14cb70c20 != DAT_14c948030)) {
    FUN_14011791e(&local_c8,(int)DAT_14cb70c20,ram0x00014cb70c24 >> 0x20);
    unique0x00023e00 = local_c8;
    uVar6 = local_c8;
  }
  lVar1 = param_1 + -0x438;
  uVar5 = *param_2;
  if (uVar5 == uVar6) {
    uVar6 = DAT_14cb70214;
    if ((DAT_14cb70214 == DAT_14c948034) && (uVar6 = DAT_14c948034, DAT_14cb70210 != DAT_14c948030))
    {
      FUN_14011791e(&local_c8,DAT_14cb70210,DAT_14cb70214 >> 0x20);
      DAT_14cb70214 = local_c8;
      uVar6 = local_c8;
    }
    if (*param_3 != uVar6) {
      if (*param_3 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_118);
      }
      goto LAB_1412d8a9b;
    }
  }
  else {
    uVar6 = DAT_14cb7022c;
    if ((DAT_14cb7022c == DAT_14c948034) && (uVar6 = DAT_14c948034, DAT_14cb70228 != DAT_14c948030))
    {
      FUN_14011791e(&local_c8,DAT_14cb70228,DAT_14cb7022c >> 0x20);
      DAT_14cb7022c = local_c8;
      uVar5 = *param_2;
      uVar6 = local_c8;
    }
    if (uVar5 != uVar6) {
      uVar6 = ram0x00014cb70244;
      if ((ram0x00014cb70244 == DAT_14c948034) &&
         (uVar6 = DAT_14c948034, (int)DAT_14cb70240 != DAT_14c948030)) {
        FUN_14011791e(&local_c8,(int)DAT_14cb70240,ram0x00014cb70244 >> 0x20);
        unique0x00023e00 = local_c8;
        uVar5 = *param_2;
        uVar6 = local_c8;
      }
      if (uVar5 == uVar6) {
        FUN_1408fe6a6(lVar1);
        uVar6 = *param_3;
        local_78 = uVar6;
        FUN_1400021e4(&local_78,local_88);
        local_98 = 0;
        uStack_90 = 0;
        if (uVar6 != 0) {
          FUN_1403de9f2(local_88,&local_98,&DAT_149e06196,1);
        }
        iVar2 = *(int *)(param_1 + 0x1a8);
        if ((longlong)iVar2 != 0) {
          lVar4 = *(longlong *)(param_1 + 0x1a0);
          lVar8 = 0;
          uVar9 = 0;
          do {
            if (*(longlong *)(lVar4 + lVar8) != 0) {
              if (((int)uVar9 < 0) || ((int)uStack_90 <= (int)uVar9)) {
                uStack_b8 = 0;
                pvStack_b0 = (void *)0x0;
                local_c8 = 0;
                uStack_c0 = 0;
                local_a8 = 0;
              }
              else {
                local_e8 = 0;
                uStack_e0 = 0;
                local_d8 = (void *)0x0;
                uStack_d0 = 0;
                local_70 = *(undefined8 *)(local_98 + (ulonglong)uVar9 * 0x10);
                iVar3 = *(int *)(local_98 + 8 + (ulonglong)uVar9 * 0x10);
                local_68 = iVar3 + -1;
                if (iVar3 == 0) {
                  local_68 = 0;
                }
                FUN_14475bf92(&local_e8,&local_70);
                local_c8 = 0;
                uStack_c0 = local_e8;
                uStack_b8 = uStack_e0;
                pvStack_b0 = (void *)0x0;
                lVar7 = (longlong)(int)uStack_d0;
                local_f0 = local_d8;
                local_a8 = CONCAT44(local_a8._4_4_,(int)uStack_d0);
                if (lVar7 == 0) {
                  local_a8 = uStack_d0 & 0xffffffff;
                }
                else {
                  FUN_1446dd670(&pvStack_b0,uStack_d0 & 0xffffffff,0);
                  memcpy(pvStack_b0,local_f0,lVar7 * 2);
                }
                local_f0 = local_d8;
                if (local_d8 != (void *)0x0) {
                  FUN_1400020a8(local_d8);
                }
              }
              lVar7 = *(longlong *)(lVar4 + lVar8);
              *(ulonglong *)(lVar7 + 0x460) = local_c8;
              *(undefined4 *)(lVar7 + 0x468) = (undefined4)uStack_c0;
              *(undefined4 *)(lVar7 + 0x46c) = uStack_c0._4_4_;
              *(undefined4 *)(lVar7 + 0x470) = (undefined4)uStack_b8;
              *(undefined4 *)(lVar7 + 0x474) = uStack_b8._4_4_;
              if ((ulonglong *)(lVar7 + 0x460) == &local_c8) {
                if (pvStack_b0 != (void *)0x0) {
                  FUN_1400020a8();
                }
              }
              else {
                if (*(longlong *)(lVar7 + 0x478) != 0) {
                  FUN_1400020a8();
                }
                *(void **)(lVar7 + 0x478) = pvStack_b0;
                pvStack_b0 = (void *)0x0;
                *(undefined4 *)(lVar7 + 0x480) = (undefined4)local_a8;
                *(undefined4 *)(lVar7 + 0x484) = local_a8._4_4_;
              }
              FUN_1487ae2ce(*(undefined8 *)(lVar4 + lVar8),lVar1);
              uVar9 = uVar9 + 1;
            }
            lVar8 = lVar8 + 8;
          } while ((longlong)iVar2 * 8 != lVar8);
        }
        FUN_1447a1747(local_98,uStack_90 & 0xffffffff);
        if (local_98 != 0) {
          FUN_1400020a8();
        }
        if (local_88[0] != 0) {
          FUN_1400020a8();
        }
      }
      goto LAB_1412d8a9b;
    }
    FUN_1487adea4(lVar1,param_3);
  }
  local_c8 = *(ulonglong *)(param_1 + 0x88);
  FUN_1412d8e16(lVar1);
LAB_1412d8a9b:
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412d8e16 FUN_1412d8e16 body=112 status=ok
// SIG undefined FUN_1412d8e16(void)

void FUN_1412d8e16(longlong param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = FUN_1447210f0();
  if (lVar2 != 0) {
    bVar1 = *(byte *)(lVar2 + 0x152);
    if ((bVar1 == 1) || ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) {
      *(longlong *)(param_1 + 0x5cc) = *param_2;
    }
    else {
      lVar2 = *param_2;
      if (*(longlong *)(param_1 + 0x4c0) != lVar2) {
        *(undefined8 *)(param_1 + 0x4d0) = 0;
      }
      *(longlong *)(param_1 + 0x4c0) = lVar2;
    }
    FUN_1412d8e86(param_1);
    return;
  }
  return;
}



// FUNCTION 1412d8e86 FUN_1412d8e86 body=1346 status=ok
// SIG undefined FUN_1412d8e86(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1412d8e86(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  char cVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [40];
  undefined8 *local_a0;
  int local_98;
  longlong local_90 [2];
  undefined4 local_80;
  byte local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  for (plVar2 = param_1; plVar2 != (longlong *)0x0; plVar2 = (longlong *)plVar2[4]) {
    if ((*(uint *)(plVar2 + 1) & 0x30) != 0) goto LAB_1412d8fd6;
  }
  if ((*(uint *)(param_1 + 1) & 0x40) == 0) {
    plVar2 = param_1 + 0x72;
    cVar4 = (**(code **)(param_1[0x72] + 0x30))(plVar2);
    if ((cVar4 != '\0') && (cVar4 = (**(code **)(*plVar2 + 0x18))(plVar2), cVar4 != '\0')) {
      lVar6 = (**(code **)(*plVar2 + 0x40))(plVar2);
      if ((lVar6 == 0) || (cVar4 = (**(code **)(*plVar2 + 0x18))(plVar2), cVar4 == '\0')) {
        bVar5 = 0;
      }
      else {
        bVar5 = FUN_140a10ba2(lVar6,plVar2);
        bVar5 = bVar5 ^ 1;
      }
      lVar7 = *(longlong *)((longlong)param_1 + 0x5cc);
      if (lVar7 == 0) {
        lVar7 = param_1[0x98];
      }
      lVar7 = FUN_1412d9436(lVar7);
      if ((param_1 == (longlong *)0x0) || (lVar8 = FUN_1447210f0(param_1), lVar8 == 0)) {
        lVar12 = 0;
      }
      else {
        lVar12 = 0;
        if ((*(byte *)(lVar8 + 0x155) & 0x20) == 0) {
          lVar12 = lVar8;
        }
      }
      if ((lVar6 != 0) && (cVar4 = FUN_1412d93ca(lVar6,param_1), cVar4 != '\0')) {
        if (*(longlong *)(lVar12 + 0x1f0) == 0) {
          puVar9 = (undefined8 *)(lVar12 + 0x458);
        }
        else {
          puVar9 = (undefined8 *)(*(longlong *)(lVar12 + 0x1f0) + 0xf0);
        }
        uVar3 = *puVar9;
        local_a0 = (undefined8 *)0x0;
        local_98 = 0;
        FUN_1446efa72(&local_a0,0,3,0x10);
        puVar9 = local_a0;
        local_98 = 3;
        *local_a0 = &PTR_LAB_14a1c8830;
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 1;
        lVar6 = DAT_14c758608 + 1;
        if (lVar7 == 0) {
          LOCK();
          UNLOCK();
          lVar7 = DAT_14c758608 + 2;
          lVar6 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar6;
        local_a0[2] = lVar7;
        *local_a0 = &PTR_FUN_14b3e55f0;
        local_a0[3] = 0;
        iVar10 = 0;
        if (param_1 != (longlong *)0x0) {
          uVar1 = *(uint *)((longlong)param_1 + 0xc);
          *(uint *)(local_a0 + 3) = uVar1;
          if ((int)uVar1 < DAT_14c9647dc) {
            lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          }
          else {
            lVar6 = 0;
          }
          iVar10 = *(int *)(lVar6 + 0x10);
          if (*(int *)(lVar6 + 0x10) == 0) {
            LOCK();
            iVar10 = DAT_14c964868 + 1;
            UNLOCK();
            iVar11 = DAT_14c964868 + 1;
            bVar13 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar10;
            if (bVar13) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar11);
            }
            LOCK();
            iVar10 = *(int *)(lVar6 + 0x10);
            bVar13 = iVar10 == 0;
            if (bVar13) {
              *(int *)(lVar6 + 0x10) = iVar11;
              iVar10 = 0;
            }
            UNLOCK();
            if (bVar13) {
              iVar10 = iVar11;
            }
          }
        }
        *(int *)((longlong)puVar9 + 0x1c) = iVar10;
        puVar9[4] = FUN_1412d8e86;
        *(undefined4 *)(puVar9 + 5) = 0;
        plVar2 = local_90 + 1;
        local_90[1] = 0;
        local_80 = 0;
        FUN_14487d8d8(plVar2,&local_a0);
        local_48 = 1;
        FUN_14016fdb0(uVar3,local_90,plVar2);
        (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(plVar2);
        param_1[0xc6] = local_90[0];
        if (local_98 != 0) {
          if (local_a0 == (undefined8 *)0x0) goto LAB_1412d8fd6;
          (**(code **)*local_a0)(local_a0,0);
          FUN_1446efa72(&local_a0,0,0,0x10);
          local_98 = 0;
        }
        if (local_a0 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_1412d8fd6;
      }
      if ((bVar5 == 1 && lVar7 != 0) && (lVar12 != 0)) {
        FUN_1401950da(local_c8,lVar7);
        (**(code **)(*param_1 + 0x638))(param_1,local_c8);
        if (*(longlong *)(lVar12 + 0x1f0) == 0) {
          puVar9 = (undefined8 *)(lVar12 + 0x458);
        }
        else {
          puVar9 = (undefined8 *)(*(longlong *)(lVar12 + 0x1f0) + 0xf0);
        }
        uVar3 = *puVar9;
        local_a0 = (undefined8 *)0x0;
        local_98 = 0;
        FUN_1446efa72(&local_a0,0,3,0x10);
        puVar9 = local_a0;
        local_98 = 3;
        *local_a0 = &PTR_LAB_14a1c8830;
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 1;
        lVar6 = DAT_14c758608 + 1;
        if (lVar7 == 0) {
          LOCK();
          UNLOCK();
          lVar7 = DAT_14c758608 + 2;
          lVar6 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar6;
        local_a0[2] = lVar7;
        *local_a0 = &PTR_FUN_14b3e55f0;
        local_a0[3] = 0;
        FUN_14485c47a(local_a0 + 3,param_1);
        puVar9[4] = &LAB_1410ecd20;
        *(undefined4 *)(puVar9 + 5) = 0x390;
        plVar2 = local_90 + 1;
        local_90[1] = 0;
        local_80 = 0;
        FUN_14487d8d8(plVar2,&local_a0);
        local_48 = 1;
        FUN_14016fdb0(uVar3,local_90,plVar2);
        (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(plVar2);
        param_1[0xc5] = local_90[0];
        FUN_1449db362(&local_a0);
      }
      else {
        (**(code **)(param_1[0x72] + 0x58))(plVar2);
        lVar6 = *(longlong *)((longlong)param_1 + 0x5cc);
        if (lVar6 == 0) {
          lVar6 = param_1[0x98];
        }
        param_1[0xbe] = lVar6;
      }
    }
    lVar6 = param_1[0xbc];
    if ((longlong)(int)lVar6 != 0) {
      lVar7 = param_1[0xbb];
      lVar8 = 0;
      bVar5 = DAT_14c950c29;
      do {
        lVar12 = *(longlong *)(lVar7 + lVar8);
        if ((lVar12 != 0 & bVar5) == 1) {
          FUN_1456cec3c(lVar12);
LAB_1412d936d:
          FUN_1487ae2ce(lVar12,param_1,0);
          bVar5 = DAT_14c950c29;
        }
        else if (lVar12 != 0) goto LAB_1412d936d;
        lVar8 = lVar8 + 8;
      } while ((longlong)(int)lVar6 * 8 != lVar8);
    }
  }
LAB_1412d8fd6:
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412d93ca FUN_1412d93ca body=107 status=ok
// SIG undefined FUN_1412d93ca(void)

bool FUN_1412d93ca(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_2 + 0x390);
    cVar1 = (**(code **)(*(longlong *)(param_2 + 0x390) + 0x18))(plVar4);
    if (cVar1 != '\0') {
      puVar3 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4);
      iVar2 = FUN_140a10c5a(param_1 + 0xd8,(int)((ulonglong)*puVar3 >> 0x20) * 0x17 + (int)*puVar3,
                            puVar3);
      return iVar2 != -1;
    }
  }
  return false;
}



// FUNCTION 1412d9436 FUN_1412d9436 body=181 status=ok
// SIG undefined FUN_1412d9436(void)

longlong FUN_1412d9436(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_78 [36];
  undefined1 local_54 [12];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = param_1;
  FUN_1401533ba(local_54,&local_48,1);
  FUN_1448075d0(local_40,local_54);
  if (DAT_14cb704c8 == 0) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    lVar1 = FUN_144815d88(DAT_14cb704c8,local_40);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x30) != 0)) {
      lVar1 = lVar1 + 0x28;
      goto LAB_1412d94a5;
    }
  }
  lVar1 = FUN_1405d6522();
  lVar1 = lVar1 + 0x70;
LAB_1412d94a5:
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412d94ec FUN_1412d94ec body=155 status=ok
// SIG undefined FUN_1412d94ec(void)

undefined8 *
FUN_1412d94ec(undefined8 *param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_LAB_14b4d9f78;
  *(undefined1 *)(param_1 + 1) = 0;
  FUN_1412d9588();
  param_1[2] = param_2;
  *(undefined4 *)(param_1 + 3) = param_3;
  *param_1 = &PTR_FUN_14b4dae90;
  param_1[4] = *param_4;
  param_1[6] = param_4[2];
  param_4[2] = 0;
  lVar5 = param_4[4];
  uVar1 = *(undefined4 *)((longlong)param_4 + 0x24);
  lVar6 = param_4[5];
  uVar2 = *(undefined4 *)((longlong)param_4 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_4 + 0x34);
  lVar7 = param_4[7];
  uVar4 = *(undefined4 *)((longlong)param_4 + 0x3c);
  *(int *)(param_1 + 10) = (int)param_4[6];
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar3;
  *(int *)(param_1 + 0xb) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar4;
  *(int *)(param_1 + 8) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar1;
  *(int *)(param_1 + 9) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar2;
  if (param_1[4] == 0) {
    if (*param_4 != 0) {
      plVar8 = param_4 + 4;
      if ((longlong *)param_4[2] != (longlong *)0x0) {
        plVar8 = (longlong *)param_4[2];
      }
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  else {
    *param_4 = 0;
  }
  return param_1;
}



// FUNCTION 1412d9588 FUN_1412d9588 body=105 status=ok
// SIG undefined FUN_1412d9588(void)

void FUN_1412d9588(undefined8 param_1)

{
  int iVar1;
  longlong *plVar2;
  
  if (DAT_14cb96828 == (longlong *)0x0) {
    DAT_14cb96828 = (longlong *)FUN_14001cc68(0x30,0x10);
    *DAT_14cb96828 = 0;
    DAT_14cb96828[1] = 0;
    DAT_14cb96828[2] = 0;
    DAT_14cb96828[3] = 0;
    DAT_14cb96828[4] = 0;
    DAT_14cb96828[5] = 0;
  }
  plVar2 = DAT_14cb96828;
  iVar1 = (int)DAT_14cb96828[1];
  *(uint *)(DAT_14cb96828 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
    FUN_1458b6360(plVar2,iVar1);
  }
  *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = param_1;
  return;
}



// FUNCTION 1412d95f1 FUN_1412d95f1 body=73 status=ok
// SIG undefined FUN_1412d95f1(void)

void FUN_1412d95f1(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x28);
    do {
      FUN_1412d963a(*(undefined8 *)(puVar1 + -2),*puVar1);
      if (*(longlong *)(puVar1 + -2) != 0) {
        FUN_1400020a8();
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



// FUNCTION 1412d963a FUN_1412d963a body=89 status=ok
// SIG undefined FUN_1412d963a(void)

void FUN_1412d963a(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x20);
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
      if (plVar4[-4] != 0) {
        FUN_1400020a8();
      }
      plVar4 = plVar4 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1412d9694 FUN_1412d9694 body=699 status=ok
// SIG undefined FUN_1412d9694(void)

void FUN_1412d9694(longlong param_1,undefined1 param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar9 = *(longlong *)(param_1 + 0xb0);
  if (lVar9 == 0) {
    lVar9 = FUN_1448abda6(param_1);
  }
  FUN_140371550(&local_58,lVar9);
  if (local_50 != (longlong *)0x0) {
    iVar5 = (int)local_50[1];
    do {
      if (iVar5 == 0) {
        plVar7 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar4 = (int)local_50[1];
      bVar10 = iVar5 == iVar4;
      if (bVar10) {
        *(int *)(local_50 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      plVar7 = local_50;
    } while (!bVar10);
    LOCK();
    piVar1 = (int *)((longlong)local_50 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_50 + 0x10))();
    }
    if (plVar7 != (longlong *)0x0) {
      if (local_58 == 0) {
        FUN_1408a4376(param_1);
      }
      else {
        iVar5 = *(int *)(local_58 + 0x188);
        *(uint *)(local_58 + 0x188) = iVar5 + 1U;
        if (*(uint *)(local_58 + 0x18c) < iVar5 + 1U) {
          FUN_1458b6af8(local_58 + 0x40,iVar5);
        }
        lVar9 = local_58 + 0x40;
        if (*(longlong *)(local_58 + 0x180) != 0) {
          lVar9 = *(longlong *)(local_58 + 0x180);
        }
        puVar3 = (uint *)(lVar9 + (longlong)iVar5 * 0x14);
        FUN_1412d9982(puVar3);
        if (param_1 == 0) {
          *puVar3 = 0;
          uVar6 = 0;
        }
        else {
          uVar6 = *(uint *)(param_1 + 0xc);
          *puVar3 = uVar6;
          if ((int)uVar6 < DAT_14c9647dc) {
            lVar9 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
          }
          else {
            lVar9 = 0;
          }
          uVar6 = *(uint *)(lVar9 + 0x10);
          if (*(uint *)(lVar9 + 0x10) == 0) {
            LOCK();
            iVar5 = DAT_14c964868 + 1;
            UNLOCK();
            uVar8 = DAT_14c964868 + 1;
            bVar10 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar5;
            if (bVar10) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,uVar8);
            }
            LOCK();
            uVar6 = *(uint *)(lVar9 + 0x10);
            bVar10 = uVar6 == 0;
            if (bVar10) {
              *(uint *)(lVar9 + 0x10) = uVar8;
              uVar6 = 0;
            }
            UNLOCK();
            if (bVar10) {
              uVar6 = uVar8;
            }
          }
        }
        puVar3[1] = uVar6;
        if (param_3 == 0) {
          puVar3[2] = 0;
          uVar6 = 0;
        }
        else {
          uVar6 = *(uint *)(param_3 + 0xc);
          puVar3[2] = uVar6;
          if ((int)uVar6 < DAT_14c9647dc) {
            lVar9 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
          }
          else {
            lVar9 = 0;
          }
          uVar6 = *(uint *)(lVar9 + 0x10);
          if (*(uint *)(lVar9 + 0x10) == 0) {
            LOCK();
            iVar5 = DAT_14c964868 + 1;
            UNLOCK();
            uVar8 = DAT_14c964868 + 1;
            bVar10 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar5;
            if (bVar10) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,uVar8);
            }
            LOCK();
            uVar6 = *(uint *)(lVar9 + 0x10);
            bVar10 = uVar6 == 0;
            if (bVar10) {
              *(uint *)(lVar9 + 0x10) = uVar8;
              uVar6 = 0;
            }
            UNLOCK();
            if (bVar10) {
              uVar6 = uVar8;
            }
          }
        }
        puVar3[3] = uVar6;
        *(undefined1 *)(puVar3 + 4) = param_2;
      }
      LOCK();
      plVar2 = plVar7 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
        }
      }
      if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
}



// FUNCTION 1412d9982 FUN_1412d9982 body=11 status=ok
// SIG undefined FUN_1412d9982(void)

void FUN_1412d9982(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}



// FUNCTION 1412d998e FUN_1412d998e body=9 status=ok
// SIG undefined FUN_1412d998e(void)

void FUN_1412d998e(longlong param_1)

{
  FUN_1412d9998(param_1 + 0x10);
  return;
}



// FUNCTION 1412d9998 FUN_1412d9998 body=287 status=ok
// SIG undefined FUN_1412d9998(void)

void FUN_1412d9998(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  
  *param_1 = &PTR_FUN_14b99f350;
  lVar3 = param_1[9];
  if (lVar3 != 0) {
    if (param_1[0xb] != 0) {
      FUN_14480f766(lVar3 + 0x58);
    }
    FUN_1458db818(lVar3);
  }
  plVar4 = (longlong *)param_1[10];
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
  *param_1 = &PTR_FUN_14b99f370;
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
  *param_1 = &PTR_FUN_14b421610;
  plVar4 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar5 = (undefined8 *)*plVar4;
    if (puVar5 == (undefined8 *)0x0) goto LAB_1412d9a15;
    (**(code **)*puVar5)(puVar5,0);
    FUN_1446efa72(plVar4,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar4 != 0) {
    FUN_1400020a8();
  }
LAB_1412d9a15:
  plVar4 = (longlong *)param_1[2];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001412d9a2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1412d9ab8 FUN_1412d9ab8 body=945 status=ok
// SIG undefined FUN_1412d9ab8(void)

void FUN_1412d9ab8(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  code *local_a0;
  longlong local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_a8 = FUN_1446ddbd2();
      local_a0 = FUN_1403a682c;
      local_b0 = 0;
      local_b8 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
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
      local_38 = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_38);
    }
  }
  local_48 = 0;
  uStack_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_a8 = FUN_1446ddbd2();
      local_a0 = FUN_1403a682c;
      local_b0 = 0;
      local_b8 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
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
      local_48 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_48);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = (undefined4)local_48;
  uStack_74 = local_48._4_4_;
  uStack_70 = (undefined4)uStack_40;
  uStack_6c = uStack_40._4_4_;
  local_90 = local_38;
  if ((local_38 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_88 = (undefined4)uStack_30;
  uStack_84 = uStack_30._4_4_;
  uStack_80 = (undefined4)local_28;
  uStack_7c = local_28._4_4_;
  FUN_1412d9e6a(&local_60,&local_90,&local_78);
  *(undefined8 *)(param_3 + 4) = local_50;
  *param_3 = local_60;
  param_3[1] = uStack_5c;
  param_3[2] = uStack_58;
  param_3[3] = uStack_54;
  if ((local_18 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412d9e6a FUN_1412d9e6a body=131 status=ok
// SIG undefined FUN_1412d9e6a(void)

undefined8 FUN_1412d9e6a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140df51a0(param_2,&local_30);
  FUN_1412d9eee(local_30,param_1,param_3);
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
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412d9eee FUN_1412d9eee body=107 status=ok
// SIG undefined FUN_1412d9eee(void)

undefined8 * FUN_1412d9eee(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  
  lVar3 = FUN_140df5408(param_1,param_3);
  if (lVar3 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  else {
    *(undefined1 *)param_2 = *(undefined1 *)(lVar3 + 0x94);
    fVar1 = *(float *)(lVar3 + 0xa0);
    *(float *)((longlong)param_2 + 4) = fVar1;
    fVar2 = *(float *)(lVar3 + 0xa4);
    *(float *)(param_2 + 1) = fVar1 - fVar2;
    *(float *)((longlong)param_2 + 0xc) = fVar2;
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(lVar3 + 0x98);
    *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)(lVar3 + 0x9c);
  }
  return param_2;
}



// FUNCTION 1412d9f5a FUN_1412d9f5a body=286 status=ok
// SIG undefined FUN_1412d9f5a(void)

undefined8 FUN_1412d9f5a(longlong param_1,undefined8 param_2)

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
    if (iVar1 == 2) goto LAB_1412da072;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1412da072;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1412da072:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1412da01f;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_1412da01f;
    }
  }
  uVar6 = 0;
LAB_1412da01f:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412da07a FUN_1412da07a body=1001 status=ok
// SIG undefined FUN_1412da07a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412da07a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  bool bVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  byte bVar27;
  longlong lVar28;
  float fVar29;
  float fVar31;
  double dVar30;
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auStack_c8 [40];
  int local_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 != 0) {
    auVar36 = maxps(*(undefined1 (*) [16])(param_2 + 0x2c),_DAT_149e1a200);
    auVar37 = minps(auVar36,_DAT_149e1a210);
    fVar31 = auVar37._0_4_;
    fVar32 = auVar37._4_4_;
    fVar29 = auVar37._8_4_;
    auVar36._4_4_ =
         *(undefined4 *)
          (&DAT_149e1bee0 + (ulonglong)(ushort)((uint)((int)fVar32 + -0x39000000) >> 0x14) * 4);
    auVar36._0_4_ =
         *(undefined4 *)(&DAT_149e1bee0 + (ulonglong)((int)fVar31 + 0xc7000000U >> 0x14) * 4);
    auVar36._8_4_ =
         *(uint *)(&DAT_149e1bee0 +
                  (ulonglong)(ushort)((uint)((int)fVar29 + -0x39000000) >> 0x14) * 4);
    auVar36._12_4_ = 0;
    auVar40._0_4_ = (uint)fVar31 >> 0xc;
    auVar40._4_4_ = (uint)fVar32 >> 0xc;
    auVar40._8_4_ = (uint)fVar29 >> 0xc;
    auVar40._12_4_ = (uint)auVar37._12_4_ >> 0xc;
    auVar34 = pmovzxbd(ZEXT416(*(uint *)(&DAT_149e1bee0 +
                                        (ulonglong)
                                        (ushort)((uint)((int)fVar29 + -0x39000000) >> 0x14) * 4)),
                       0xffffffff);
    auVar36 = pmaddwd(auVar40 & auVar34 | _DAT_1499378f0,auVar36);
    auVar38._4_4_ = (int)(fVar32 * 0.0 + 0.5) | auVar36._4_4_ >> 0x10;
    auVar38._12_4_ = (int)(auVar37._12_4_ * 255.0 + 0.5) | auVar36._12_4_ >> 0x10;
    auVar38._0_4_ = (int)(fVar29 * 0.0 + 0.5) | auVar36._8_4_ >> 0x10;
    auVar38._8_4_ = (int)(fVar31 * 0.0 + 0.5) | auVar36._0_4_ >> 0x10;
    auVar38 = packssdw(auVar38,auVar38);
    sVar15 = auVar38._0_2_;
    sVar18 = auVar38._2_2_;
    sVar21 = auVar38._4_2_;
    sVar24 = auVar38._6_2_;
    iVar10 = *(int *)(param_1 + 0x58);
    auVar36 = maxps(*(undefined1 (*) [16])(param_2 + 0x44),_DAT_149e1a200);
    auVar36 = minps(auVar36,_DAT_149e1a210);
    fVar29 = auVar36._0_4_;
    fVar31 = auVar36._4_4_;
    fVar32 = auVar36._8_4_;
    auVar41._4_4_ =
         *(undefined4 *)
          (&DAT_149e1bee0 + (ulonglong)(ushort)((uint)((int)fVar31 + -0x39000000) >> 0x14) * 4);
    auVar41._0_4_ =
         *(undefined4 *)(&DAT_149e1bee0 + (ulonglong)((int)fVar29 + 0xc7000000U >> 0x14) * 4);
    auVar41._8_4_ =
         *(undefined4 *)
          (&DAT_149e1bee0 + (ulonglong)(ushort)((uint)((int)fVar32 + -0x39000000) >> 0x14) * 4);
    auVar41._12_4_ = 0;
    auVar39._0_4_ = (uint)fVar29 >> 0xc;
    auVar39._4_4_ = (uint)fVar31 >> 0xc;
    auVar39._8_4_ = (uint)fVar32 >> 0xc;
    auVar39._12_4_ = (uint)auVar36._12_4_ >> 0xc;
    auVar37 = pmaddwd(auVar39 & auVar34 | _DAT_1499378f0,auVar41);
    auVar35._4_4_ = (int)(fVar31 * 0.0 + 0.5) | auVar37._4_4_ >> 0x10;
    auVar35._12_4_ = (int)(auVar36._12_4_ * 255.0 + 0.5) | auVar37._12_4_ >> 0x10;
    auVar35._0_4_ = (int)(fVar32 * 0.0 + 0.5) | auVar37._8_4_ >> 0x10;
    auVar35._8_4_ = (int)(fVar29 * 0.0 + 0.5) | auVar37._0_4_ >> 0x10;
    auVar35 = packssdw(auVar35,auVar35);
    sVar16 = auVar35._0_2_;
    sVar19 = auVar35._2_2_;
    sVar22 = auVar35._4_2_;
    sVar25 = auVar35._6_2_;
    iVar11 = *(int *)(param_1 + 0x5c);
    auVar36 = maxps(*(undefined1 (*) [16])(param_2 + 0x14),_DAT_149e1a200);
    auVar36 = minps(auVar36,_DAT_149e1a210);
    fVar29 = auVar36._0_4_;
    fVar31 = auVar36._4_4_;
    fVar32 = auVar36._8_4_;
    auVar37._4_4_ =
         *(undefined4 *)
          (&DAT_149e1bee0 + (ulonglong)(ushort)((uint)((int)fVar31 + -0x39000000) >> 0x14) * 4);
    auVar37._0_4_ =
         *(undefined4 *)(&DAT_149e1bee0 + (ulonglong)((int)fVar29 + 0xc7000000U >> 0x14) * 4);
    auVar37._8_4_ =
         *(undefined4 *)
          (&DAT_149e1bee0 + (ulonglong)(ushort)((uint)((int)fVar32 + -0x39000000) >> 0x14) * 4);
    auVar37._12_4_ = 0;
    auVar33._0_4_ = (uint)fVar29 >> 0xc;
    auVar33._4_4_ = (uint)fVar31 >> 0xc;
    auVar33._8_4_ = (uint)fVar32 >> 0xc;
    auVar33._12_4_ = (uint)auVar36._12_4_ >> 0xc;
    auVar37 = pmaddwd(auVar33 & auVar34 | _DAT_1499378f0,auVar37);
    auVar34._4_4_ = (int)(fVar31 * 0.0 + 0.5) | auVar37._4_4_ >> 0x10;
    auVar34._12_4_ = (int)(auVar36._12_4_ * 255.0 + 0.5) | auVar37._12_4_ >> 0x10;
    auVar34._0_4_ = (int)(fVar32 * 0.0 + 0.5) | auVar37._8_4_ >> 0x10;
    auVar34._8_4_ = (int)(fVar29 * 0.0 + 0.5) | auVar37._0_4_ >> 0x10;
    auVar36 = packssdw(auVar34,auVar34);
    sVar17 = auVar36._0_2_;
    sVar20 = auVar36._2_2_;
    sVar23 = auVar36._4_2_;
    sVar26 = auVar36._6_2_;
    iVar12 = *(int *)(param_1 + 0x60);
    FUN_1449027d0(param_1,&local_a0);
    lVar13 = *(longlong *)(CONCAT44(uStack_9c,local_a0) + 0x180);
    AcquireSRWLockShared((PSRWLOCK)(lVar13 + 0x138));
    if (local_98 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_98 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
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
    dVar30 = (double)*(float *)(param_2 + 0x24);
    if ((*(double *)(lVar13 + 0x98) != dVar30) || (NAN(*(double *)(lVar13 + 0x98)) || NAN(dVar30)))
    {
      bVar14 = true;
    }
    else {
      bVar14 = dVar30 != *(double *)(lVar13 + 0xa0);
    }
    fVar29 = *(float *)(lVar13 + 200);
    fVar31 = *(float *)(param_2 + 0x28);
    fVar32 = *(float *)(lVar13 + 0xe8);
    fVar3 = *(float *)(param_2 + 0x3c);
    cVar4 = *(char *)(lVar13 + 0x108);
    cVar5 = *(char *)(param_2 + 0x40);
    bVar27 = 0;
    if (*(char *)(lVar13 + 0x110) != *(char *)(param_2 + 0x10)) {
      lVar28 = FUN_1400d7050(param_1 + 0x30);
      if (lVar28 == 0) {
        bVar27 = 0;
      }
      else {
        bVar27 = FUN_14016169c(lVar28,&local_a0);
        bVar27 = bVar27 ^ 1 | local_a0 == 0;
      }
      bVar27 = lVar28 != 0 & bVar27;
    }
    cVar6 = *(char *)(lVar13 + 0x118);
    cVar7 = *(char *)(param_2 + 0x11);
    cVar8 = *(char *)(lVar13 + 0x120);
    cVar9 = *(char *)(param_2 + 0x12);
    ReleaseSRWLockShared((PSRWLOCK)(lVar13 + 0x138));
    if (cVar8 != cVar9 ||
        ((cVar6 != cVar7 || bVar27 != 0) ||
        ((CONCAT13((0 < sVar26) * (sVar26 < 0x100) * auVar36[6] - (0xff < sVar26),
                   CONCAT12((0 < sVar23) * (sVar23 < 0x100) * auVar36[4] - (0xff < sVar23),
                            CONCAT11((0 < sVar20) * (sVar20 < 0x100) * auVar36[2] - (0xff < sVar20),
                                     (0 < sVar17) * (sVar17 < 0x100) * auVar36[0] - (0xff < sVar17))
                           )) != iVar12 ||
         (CONCAT13((0 < sVar25) * (sVar25 < 0x100) * auVar35[6] - (0xff < sVar25),
                   CONCAT12((0 < sVar22) * (sVar22 < 0x100) * auVar35[4] - (0xff < sVar22),
                            CONCAT11((0 < sVar19) * (sVar19 < 0x100) * auVar35[2] - (0xff < sVar19),
                                     (0 < sVar16) * (sVar16 < 0x100) * auVar35[0] - (0xff < sVar16))
                           )) != iVar11 ||
         CONCAT13((0 < sVar24) * (sVar24 < 0x100) * auVar38[6] - (0xff < sVar24),
                  CONCAT12((0 < sVar21) * (sVar21 < 0x100) * auVar38[4] - (0xff < sVar21),
                           CONCAT11((0 < sVar18) * (sVar18 < 0x100) * auVar38[2] - (0xff < sVar18),
                                    (0 < sVar15) * (sVar15 < 0x100) * auVar38[0] - (0xff < sVar15)))
                 ) != iVar10)) ||
        (cVar4 != cVar5 || (fVar32 != fVar3 || (fVar29 != fVar31 || bVar14)))))) {
      FUN_1458b6e2c(param_1,param_2);
    }
  }
  if ((local_90 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412da464 FUN_1412da464 body=49 status=ok
// SIG undefined FUN_1412da464(void)

longlong FUN_1412da464(void)

{
  if (DAT_14c99f658 == 0) {
    FUN_140f50038(&DAT_14c99f658,&PTR_s__Script_TypedElementRuntime_14a14fb4f_1_14a14fb30);
  }
  return DAT_14c99f658;
}



// FUNCTION 1412da495 FUN_1412da495 body=49 status=ok
// SIG undefined FUN_1412da495(void)

longlong FUN_1412da495(void)

{
  if (DAT_14ca75b00 == 0) {
    FUN_140f50038(&DAT_14ca75b00,&PTR_s__Script_HeadMountedDisplay_14a3398b0);
  }
  return DAT_14ca75b00;
}



// FUNCTION 1412da4c6 FUN_1412da4c6 body=49 status=ok
// SIG undefined FUN_1412da4c6(void)

longlong FUN_1412da4c6(void)

{
  if (DAT_14cabc0f0 == 0) {
    FUN_140f50038(&DAT_14cabc0f0,&PTR_s__Script_MediaAssets_14a58aac8);
  }
  return DAT_14cabc0f0;
}



// FUNCTION 1412da4f7 FUN_1412da4f7 body=49 status=ok
// SIG undefined FUN_1412da4f7(void)

longlong FUN_1412da4f7(void)

{
  if (DAT_14cb44728 == 0) {
    FUN_140f50038(&DAT_14cb44728,&PTR_s__Script_CommonInput_14ae37e67_1_14ae37e48);
  }
  return DAT_14cb44728;
}



// FUNCTION 1412da528 FUN_1412da528 body=228 status=ok
// SIG undefined FUN_1412da528(void)

longlong FUN_1412da528(void)

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
  if (DAT_14cb68378 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145a83c1a;
    local_38 = &LAB_1487436f7;
    local_40 = FUN_14185aa40;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xb0;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxTrick_CoordinatedEffect",&DAT_14cb68378,&DAT_1487436f6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb68378;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412da60e FUN_1412da60e body=396 status=ok
// SIG undefined FUN_1412da60e(void)

void FUN_1412da60e(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
                  undefined4 *param_5,uint param_6,int param_7,longlong param_8)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  void *_Dst;
  uint uVar7;
  void *_Src;
  undefined1 auStack_138 [32];
  undefined4 *local_118;
  uint local_110;
  uint local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  uint uStack_dc;
  uint local_d8;
  undefined1 local_d0 [48];
  uint local_a0;
  int local_9c;
  longlong local_98;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_100 = param_2;
  lVar2 = (**(code **)(*param_3 + 8))(param_3);
  uVar5 = (ulonglong)((uint)*(byte *)(lVar2 + 0x33) * 0x30);
  local_f8 = *param_5;
  uStack_f4 = param_5[1];
  uStack_f0 = param_5[2];
  uStack_ec = param_5[3];
  local_e8 = param_5[4];
  uStack_e4 = param_5[5];
  local_118 = &local_f8;
  local_d8 = param_5[8];
  iStack_e0 = *(int *)((longlong)&DAT_14c87341c + uVar5);
  iVar1 = (param_5[6] + iStack_e0 + -1) / iStack_e0;
  iVar3 = param_5[7] + *(int *)((longlong)&DAT_14c873420 + uVar5) + -1;
  iStack_e0 = iStack_e0 * iVar1;
  uVar4 = iVar3 - iVar3 % *(int *)((longlong)&DAT_14c873420 + uVar5);
  local_108 = param_1;
  uStack_dc = uVar4;
  FUN_1412da924(param_1,local_d0,param_3,param_4);
  local_110 = *(uint *)((longlong)&DAT_14c873420 + uVar5);
  uVar7 = uVar4 / local_110;
  uVar6 = (ulonglong)local_d8;
  local_10c = uVar4;
  if (uVar6 != 0) {
    iVar3 = *(int *)((longlong)&DAT_14c873428 + uVar5);
    uVar5 = 0;
    do {
      if (local_110 <= local_10c) {
        _Src = (void *)((ulonglong)(uint)((int)uVar5 * param_7) + param_8);
        _Dst = (void *)((ulonglong)(uint)(local_9c * (int)uVar5) + local_98);
        uVar4 = 0;
        do {
          memcpy(_Dst,_Src,(ulonglong)(uint)(iVar1 * iVar3));
          _Src = (void *)((longlong)_Src + (ulonglong)param_6);
          _Dst = (void *)((longlong)_Dst + (ulonglong)local_a0);
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar7);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar6);
  }
  FUN_1412da79c(local_108,local_100,local_d0);
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412da79c FUN_1412da79c body=362 status=ok
// SIG undefined FUN_1412da79c(void)

void FUN_1412da79c(undefined8 param_1,ulonglong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong lStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(char *)(param_3 + 10) == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
  }
  lVar1 = param_3[9];
  uVar2 = *(undefined8 *)(lVar1 + 0x60);
  lVar3 = (**(code **)(*(longlong *)*param_3 + 8))();
  local_50 = *(undefined4 *)
              ((longlong)&DAT_14c873434 + (ulonglong)((uint)*(byte *)(lVar3 + 0x33) * 0x30));
  uStack_4c = *(undefined4 *)((longlong)param_3 + 0x24);
  uStack_48 = *(undefined4 *)(param_3 + 5);
  uStack_44 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uStack_40 = *(undefined4 *)(param_3 + 6);
  local_70 = *(undefined4 *)(param_3 + 1);
  uStack_6c = *(undefined4 *)((longlong)param_3 + 0xc);
  uStack_68 = *(undefined4 *)(param_3 + 2);
  uStack_64 = *(undefined4 *)((longlong)param_3 + 0x14);
  local_60 = *param_3;
  uStack_58 = uVar2;
  lStack_38 = lVar1;
  if (*(char *)((longlong)param_2 + 100) == '\x01') {
    FUN_14317a35c(&local_70,param_2);
  }
  else {
    puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 10;
    if ((undefined8 *)param_2[1] < puVar5) {
      FUN_140023dd8(param_2,0x58);
      puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar5 = puVar4 + 10;
    }
    *param_2 = (ulonglong)puVar5;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar4;
    param_2[6] = (ulonglong)(puVar4 + 1);
    puVar4[1] = 0;
    *puVar4 = &PTR_LAB_14a350230;
    *(undefined4 *)(puVar4 + 2) = local_70;
    *(undefined4 *)((longlong)puVar4 + 0x14) = uStack_6c;
    *(undefined4 *)(puVar4 + 3) = uStack_68;
    *(undefined4 *)((longlong)puVar4 + 0x1c) = uStack_64;
    puVar4[4] = local_60;
    puVar4[5] = uStack_58;
    puVar4[6] = CONCAT44(uStack_4c,local_50);
    puVar4[7] = CONCAT44(uStack_44,uStack_48);
    puVar4[8] = CONCAT44(uStack_3c,uStack_40);
    puVar4[9] = lStack_38;
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412da924 FUN_1412da924 body=449 status=ok
// SIG undefined FUN_1412da924(void)

undefined8 *
FUN_1412da924(longlong *param_1,undefined8 *param_2,longlong *param_3,undefined4 param_4,
             undefined4 *param_5)

{
  int iVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  uint uVar16;
  int iVar17;
  
  uVar10 = DAT_14c7590b0;
  *param_2 = param_3;
  *(undefined4 *)(param_2 + 1) = param_4;
  uVar3 = param_5[1];
  uVar4 = param_5[2];
  uVar5 = param_5[3];
  uVar6 = param_5[4];
  uVar7 = param_5[5];
  uVar8 = param_5[6];
  uVar9 = param_5[7];
  *(undefined4 *)((longlong)param_2 + 0xc) = *param_5;
  *(undefined4 *)(param_2 + 2) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar4;
  *(undefined4 *)(param_2 + 3) = uVar5;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uVar6;
  *(undefined4 *)(param_2 + 4) = uVar7;
  *(undefined4 *)((longlong)param_2 + 0x24) = uVar8;
  *(undefined4 *)(param_2 + 5) = uVar9;
  *(undefined4 *)((longlong)param_2 + 0x2c) = param_5[8];
  param_2[6] = 0;
  param_2[7] = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)((longlong)param_2 + 0x44) = uVar10;
  *(undefined1 *)(param_2 + 10) = 0;
  param_2[9] = 0;
  lVar12 = (**(code **)(*param_3 + 8))(param_3);
  uVar13 = (ulonglong)((uint)*(byte *)(lVar12 + 0x33) * 0x30);
  if ((((*(int *)(DAT_14ca77390 + 4) == 0) || (*(int *)((longlong)&DAT_14c87341c + uVar13) != 1)) ||
      (*(int *)((longlong)&DAT_14c873420 + uVar13) != 1)) ||
     (((param_3[0x20] == 0 ||
       (lVar12 = (**(code **)(*param_3 + 8))(param_3), (*(byte *)(lVar12 + 2) & 0x10) != 0)) ||
      (cVar11 = (**(code **)(*param_1 + 0x608))(param_1,param_2,param_2 + 9), cVar11 == '\0')))) {
    iVar17 = param_5[7];
    iVar1 = *(int *)((longlong)&DAT_14c873420 + uVar13);
    uVar16 = ((param_5[6] + *(int *)((longlong)&DAT_14c87341c + uVar13) + -1) /
             *(int *)((longlong)&DAT_14c87341c + uVar13)) *
             *(int *)((longlong)&DAT_14c873428 + uVar13) + 0xffU & 0xffffff00;
    *(uint *)(param_2 + 6) = uVar16;
    iVar17 = uVar16 * ((iVar1 + iVar17 + -1) / iVar1);
    *(int *)((longlong)param_2 + 0x34) = iVar17;
    uVar16 = iVar17 * param_5[8] + 0x1ffU & 0xfffffe00;
    *(uint *)(param_2 + 8) = uVar16;
    puVar14 = (undefined8 *)FUN_14001cc68(0x78,0x10);
    plVar2 = (longlong *)param_1[0x36];
    *puVar14 = *(undefined8 *)(*plVar2 + 2000);
    puVar14[1] = 0;
    puVar14[2] = 0;
    puVar14[3] = 0;
    puVar14[0xc] = 0;
    puVar14[0xd] = 0;
    puVar14[10] = 0;
    puVar14[0xb] = 0;
    *(undefined1 *)(puVar14 + 0xe) = 0;
    *(undefined2 *)((longlong)puVar14 + 0x71) = 0xff;
    puVar14[8] = 0;
    puVar14[9] = 0;
    puVar14[6] = 0;
    puVar14[7] = 0;
    puVar14[4] = 0;
    puVar14[5] = 0;
    param_2[9] = puVar14;
    uVar15 = FUN_140a6e1ae(*(longlong *)(*plVar2 + 2000) + 0x1438,uVar16,0x200,puVar14);
    param_2[7] = uVar15;
  }
  return param_2;
}



// FUNCTION 1412daae5 FUN_1412daae5 body=49 status=ok
// SIG undefined FUN_1412daae5(void)

void FUN_1412daae5(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1412dab16 FUN_1412dab16 body=60 status=ok
// SIG undefined FUN_1412dab16(void)

void FUN_1412dab16(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x40);
    do {
      if (plVar2[-4] != 0) {
        plVar1 = (longlong *)plVar2[-2];
        if ((longlong *)plVar2[-2] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1412dab52 FUN_1412dab52 body=300 status=ok
// SIG undefined FUN_1412dab52(void)

void FUN_1412dab52(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  cVar2 = FUN_1412dac80(*(undefined8 *)(param_2 + 0x44));
  lVar1 = local_28;
  if (cVar2 == '\0') goto LAB_1412dab87;
  if (*(int *)(param_2 + 500) == 0 || *(char *)(param_2 + 0x1f0) == '\0') {
    *(undefined1 *)(param_2 + 0x1f0) = 1;
    *(int *)(param_2 + 500) = *(int *)(param_2 + 500) + 1;
  }
  lVar3 = FUN_1400f3ad8(param_1 + 0x44);
  if (lVar3 == 0) {
LAB_1412dac0a:
    lVar3 = 0;
  }
  else {
    lVar4 = FUN_144a5dd5e();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        != lVar4 + 0x30)) goto LAB_1412dac0a;
  }
  cVar2 = FUN_14125be1e(lVar3,lVar1);
  if (*(int *)(param_2 + 0x1fc) == 0 || *(char *)(param_2 + 0x1f8) != cVar2) {
    *(char *)(param_2 + 0x1f8) = cVar2;
    *(int *)(param_2 + 0x1fc) = *(int *)(param_2 + 0x1fc) + 1;
  }
  if (*(int *)(param_2 + 0x220) == 0 || local_28 != *(longlong *)(param_2 + 0x218)) {
    *(longlong *)(param_2 + 0x218) = local_28;
    *(int *)(param_2 + 0x220) = *(int *)(param_2 + 0x220) + 1;
  }
LAB_1412dab87:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412dac80 FUN_1412dac80 body=203 status=ok
// SIG undefined FUN_1412dac80(void)

undefined8 FUN_1412dac80(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  lVar2 = DAT_14cb1aeb8;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = param_1;
  if (DAT_14cb1aeb8 != 0) {
    FUN_1446dcdd4(local_48,&local_50);
    plVar1 = (longlong *)FUN_144837462(lVar2,local_48);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    if (plVar1 != (longlong *)0x0) {
      lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
      lVar3 = FUN_1401548e0();
      if ((((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
          (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
           lVar3 + 0x30)) && (*(char *)((longlong)plVar1 + 0x10aa) == '\x01')) {
        uVar4 = FUN_141563480(plVar1 + 0x216);
        *param_2 = uVar4;
        uVar4 = 1;
        goto LAB_1412dad10;
      }
    }
  }
  uVar4 = 0;
LAB_1412dad10:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412dad4c FUN_1412dad4c body=49 status=ok
// SIG undefined FUN_1412dad4c(void)

void FUN_1412dad4c(longlong param_1)

{
  FUN_1449db8d8(param_1 + 0x38);
  (**(code **)(*(longlong *)(param_1 + 0x30) + 0x28))(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x0001412dad79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x30) + 0x38))(param_1 + 0x30);
  return;
}



// FUNCTION 1412dad80 FUN_1412dad80 body=541 status=ok
// SIG undefined FUN_1412dad80(void)

void FUN_1412dad80(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  lVar4 = (**(code **)(*param_1 + 0x180))();
  if (lVar4 != 0) {
    if (*(longlong *)(lVar4 + 0x1f0) == 0) {
      plVar5 = (longlong *)(lVar4 + 0x458);
    }
    else {
      plVar5 = (longlong *)(*(longlong *)(lVar4 + 0x1f0) + 0xf0);
    }
    lVar6 = param_1[0x13];
    if (lVar6 != 0) {
      lVar3 = *plVar5;
      uVar7 = (uint)lVar6;
      if ((int)(uVar7 & 0xffffff) < *(int *)(lVar3 + 0x10)) {
        lVar8 = lVar3 + 0x18;
        if (*(longlong *)(lVar3 + 0x28) != 0) {
          lVar8 = *(longlong *)(lVar3 + 0x28);
        }
        if ((*(uint *)(lVar8 + (ulonglong)((uVar7 & 0xffffff) >> 5) * 4) >> (uVar7 & 0x1f) & 1) != 0
           ) {
          lVar3 = *(longlong *)(lVar3 + 8);
          lVar8 = (ulonglong)(uVar7 & 0xffffff) * 0x70;
          if (((lVar3 + lVar8 != 0) && (*(longlong *)(lVar3 + 0x60 + lVar8) == lVar6)) &&
             (*(char *)(lVar3 + 1 + lVar8) != '\x04')) {
            FUN_1405a424c();
          }
        }
      }
    }
    param_1[0x13] = 0;
    plVar5 = (longlong *)FUN_1449baec6(lVar4);
    if (plVar5 != (longlong *)0x0) {
      lVar4 = FUN_140d976a6();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(plVar5[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar5[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        *(undefined1 *)(plVar5 + 0x79) = 0;
        (**(code **)(*plVar5 + 0x350))(plVar5);
      }
    }
  }
  if (param_1[0xf] != 0) {
    FUN_148ee9d9e();
    FUN_148ee9c1c(param_1[0xf]);
    if (param_1[0xf] != 0) {
      if (DAT_14c872a72 == '\0') {
        FUN_140113f48();
      }
      param_1[0xf] = 0;
    }
    param_1[0x10] = 0;
    plVar5 = (longlong *)param_1[0x11];
    if (plVar5 != (longlong *)0x0) {
      param_1[0x11] = 0;
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
  FUN_148e28f20(param_1);
  if (param_1[0xd] != 0) {
    FUN_1401a5e92();
  }
  lVar4 = FUN_140495e96(param_1 + 6);
  if (lVar4 != 0) {
    lVar6 = FUN_14030d4a0();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        == lVar6 + 0x30)) {
      plVar5 = &DAT_14cbd9358;
      if (local_20 != 0) {
        plVar5 = &local_20;
      }
      FUN_140c125e6(lVar4 + 0x338,plVar5);
    }
  }
  param_1[0x14] = DAT_14caa8578;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_1447f69b6(param_1 + 9);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412daf9e FUN_1412daf9e body=8 status=ok
// SIG undefined FUN_1412daf9e(void)

bool FUN_1412daf9e(longlong param_1)

{
  return *(int *)(param_1 + 0x20) == 0;
}



// FUNCTION 1412dafa6 FUN_1412dafa6 body=81 status=ok
// SIG undefined FUN_1412dafa6(void)

void FUN_1412dafa6(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1412daff8 FUN_1412daff8 body=260 status=ok
// SIG undefined FUN_1412daff8(void)

int FUN_1412daff8(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_88 [40];
  longlong local_60 [2];
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar1 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar1 == 0) {
    iVar8 = 0;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x28);
    lVar7 = 0;
    iVar8 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar7);
      if (((*(int *)(lVar4 + 0x74) != 0) && (uVar2 = *(uint *)(lVar4 + 0x70), -1 < (int)uVar2)) &&
         ((int)uVar2 < DAT_14c9647dc)) {
        plVar6 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if (((plVar6 != (longlong *)0x0) && ((int)plVar6[2] == *(int *)(lVar4 + 0x74))) &&
           (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 && (*plVar6 != 0)))) {
          if (*(int *)(param_2 + 0x28) != 0) {
            local_50 = 0;
            local_60[1] = 0;
            local_60[0] = param_2 + 8;
            cVar5 = FUN_14008db60(local_60,*plVar6 + 0x160);
            if (cVar5 == '\0') goto LAB_1412db0c2;
          }
          FUN_140ea9968(lVar4,param_2);
          iVar8 = iVar8 + 1;
        }
      }
LAB_1412db0c2:
      lVar7 = lVar7 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return iVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412db0fe FUN_1412db0fe body=2161 status=ok
// SIG undefined FUN_1412db0fe(void)

void FUN_1412db0fe(longlong *param_1,longlong param_2)

{
  float *pfVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  undefined8 uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined1 *puVar14;
  byte bVar15;
  longlong lVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_378 [32];
  undefined4 *local_358;
  undefined4 *local_350;
  undefined4 local_348;
  undefined8 local_340;
  undefined2 *local_338;
  undefined1 *local_330;
  undefined1 *local_328;
  undefined8 *local_320;
  undefined1 *local_318;
  code *local_310;
  GUID local_308;
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined1 *local_2f0;
  GUID *local_2e8;
  float local_2e0;
  float local_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined1 local_2b8;
  undefined1 **local_2b0 [4];
  undefined1 local_290 [32];
  byte local_270 [8];
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined1 local_248;
  code *local_240;
  undefined1 ***local_238;
  undefined1 local_220 [40];
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined1 local_1d8;
  undefined *local_1d0;
  code **local_1c8;
  longlong local_1c0;
  undefined1 local_1b0 [32];
  byte local_190;
  code *local_188;
  undefined **local_180;
  longlong local_178;
  undefined1 local_168 [32];
  byte local_148;
  undefined1 local_140 [32];
  longlong local_120;
  undefined4 local_118;
  longlong local_110;
  undefined4 local_108;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  char local_e8;
  longlong local_88;
  uint local_80;
  uint local_7c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if (((((*(byte *)((longlong)param_1 + 0x55) & 2) == 0) || ((int)param_1[8] == 0)) ||
      (cVar7 = (**(code **)(*param_1 + 0x10))(param_1), cVar7 == '\0')) ||
     ((param_1[6] == 0 || (lVar10 = FUN_1447210f0(), lVar10 == 0)))) goto LAB_1412db163;
  lVar11 = FUN_14011c349();
  fVar20 = *(float *)((longlong)param_1 + 0x174);
  local_2dc = *(float *)(param_2 + 0x960) * fVar20;
  if (0.0 < local_2dc) {
    FUN_1401e5fa8(param_1,local_2dc,1);
    fVar20 = *(float *)((longlong)param_1 + 0x174);
  }
  fVar20 = fVar20 * *(float *)(param_2 + 0x96c);
  local_2e0 = fVar20;
  if ((0.0 < *(float *)(param_1 + 0x30)) || (0.0 < *(float *)((longlong)param_1 + 0x18c))) {
    lVar16 = param_1[0x3a];
    uVar8 = (int)lVar16 + 1;
    *(uint *)(param_1 + 0x3a) = uVar8;
    if (*(uint *)((longlong)param_1 + 0x1d4) < uVar8) {
      FUN_146623994(param_1 + 0x39);
    }
    lVar3 = param_1[0x39];
    lVar16 = (longlong)(int)lVar16 * 0x20;
    puVar2 = (undefined8 *)(lVar3 + 0x10 + lVar16);
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined8 *)(lVar3 + lVar16) = 0;
    ((undefined8 *)(lVar3 + lVar16))[1] = 0;
    fVar19 = (float)*(double *)(lVar10 + 0x6d0);
    pfVar1 = (float *)(lVar3 + lVar16);
    *(float *)(lVar3 + 4 + lVar16) = fVar19;
    *(float *)(lVar3 + 0x18 + lVar16) = fVar19;
    *(undefined1 *)(lVar3 + 0x1d + lVar16) = 1;
    fVar18 = *(float *)((longlong)param_1 + 0x18c);
    *(float *)(lVar3 + 0x14 + lVar16) = fVar18;
    *(float *)(lVar3 + 0x10 + lVar16) = fVar18;
    if (*(float *)(param_1 + 0x30) <= 0.0) {
      if (0.0 < fVar20) {
        FUN_1401e5fa8(param_1,fVar20,0);
        fVar18 = pfVar1[4];
      }
      *(undefined1 *)(pfVar1 + 7) = 1;
      *pfVar1 = fVar18;
      bVar15 = 1;
    }
    else {
      pfVar1[6] = fVar19 - *(float *)(lVar11 + 0x1cc);
      fVar18 = *(float *)(param_1 + 0x30);
      *pfVar1 = fVar18;
      pfVar1[2] = fVar20;
      pfVar1[3] = fVar20 / fVar18;
      if (fVar20 <= 0.0) {
        bVar15 = 0;
      }
      else {
        FUN_145d1dc06(param_2,param_2 + 0xa50);
        bVar15 = *(byte *)(pfVar1 + 7);
      }
    }
    *(bool *)((longlong)pfVar1 + 0x1e) = 0 < *(int *)(param_2 + 0x984);
    if (*(char *)((longlong)param_1 + 0x1c4) == (byte)((bVar15 & 1) + 1)) {
      FUN_1401e6b02(param_1);
    }
    else {
      FUN_1401e6abc(param_1);
    }
    FUN_1458fa9e8(param_2);
    FUN_1447f69b6(param_1 + 0x22);
    if (*(char *)(pfVar1 + 7) == '\x01') {
      FUN_1456e2876(param_2,0);
      FUN_1447f69b6(param_1 + 0x25);
      *(undefined1 *)((longlong)pfVar1 + 0x1d) = 0;
    }
  }
  else {
    if (0.0 < fVar20) {
      FUN_1401e5fa8(param_1,fVar20,0);
    }
    FUN_1458fa9e8(param_2);
    FUN_1447f69b6(param_1 + 0x22);
    FUN_1456e2876(param_2,0);
    FUN_1447f69b6(param_1 + 0x25);
  }
  if (((longlong *)param_1[6] == (longlong *)0x0) ||
     (lVar10 = (**(code **)(*(longlong *)param_1[6] + 0x5d8))(), lVar10 == 0)) {
LAB_1412db48d:
    bVar15 = 0;
    lVar10 = 0;
  }
  else {
    if (DAT_14cbadd90 == 0) {
      local_320 = &local_f8;
      local_f8 = FUN_141030f22;
      local_310 = FUN_14081d0ea;
      local_318 = &LAB_1459f2e4c;
      local_328 = &LAB_148c39de3;
      local_330 = &LAB_1457a9eb2;
      local_338 = &DAT_149e063b2;
      local_340 = 0;
      local_348 = 0x10000004;
      local_350 = (undefined4 *)CONCAT44(local_350._4_4_,0x10);
      local_358 = (undefined4 *)CONCAT44(local_358._4_4_,0x3de0);
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) goto LAB_1412db48d;
    local_2e8 = &local_308;
    local_2b0[0] = &local_2f0;
    local_2f0 = &LAB_144100da4;
    local_238 = local_2b0;
    local_240 = FUN_1411f620e;
    FUN_140d8b592(&local_f8,lVar10);
    local_180 = &local_1d0;
    local_1d0 = &DAT_14cb89450;
    local_188 = FUN_140c4fac4;
    local_1c8 = &local_240;
    FUN_140d8b39e(&DAT_14cb89450,&local_f8,lVar10);
    bVar15 = 1;
  }
  FUN_140056680(&local_f8,&DAT_149dfb77a);
  local_358 = &local_1f8;
  local_1f8 = (undefined4)local_f8;
  uStack_1f4 = local_f8._4_4_;
  uStack_1f0 = uStack_f0;
  uStack_1ec = uStack_ec;
  local_1d8 = 4;
  FUN_140d767d6(&local_1d0,&DAT_14cbc69b8,3,L"start_repair");
  if ((*(longlong *)(local_1d0 + 0x3c) == 0) || ((char)local_1d0[0x38] < (char)local_1c8)) {
    FUN_140056680(&local_f8,&DAT_149dfb77a);
    local_358 = &local_2d8;
    local_2d8 = (undefined4)local_f8;
    uStack_2d4 = local_f8._4_4_;
    uStack_2d0 = uStack_f0;
    uStack_2cc = uStack_ec;
    local_2b8 = 4;
    FUN_140d767d6(local_2b0,&DAT_14cbc69b8,3,L"start_repair");
    FUN_140d76846(&local_188,local_2b0);
    bVar5 = false;
  }
  else {
    local_2f4 = FUN_140d033b6(param_1,0);
    local_2f8 = (undefined4)param_1[0x30];
    FUN_140056680(&local_f8,&DAT_149dfb77a);
    local_358 = &local_268;
    local_268 = (undefined4)local_f8;
    uStack_264 = local_f8._4_4_;
    uStack_260 = uStack_f0;
    uStack_25c = uStack_ec;
    local_248 = 4;
    FUN_140d767d6(&local_240,&DAT_14cbc69b8,3,L"start_repair");
    local_358 = &local_2f8;
    local_350 = &local_2f4;
    FUN_145853ac2(&local_188,&local_240,&local_2dc,&local_2e0);
    bVar5 = true;
  }
  FUN_14027c224(&local_f8,&local_188);
  lVar11 = param_1[6];
  if ((lVar11 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar11);
LAB_1412db63c:
    uVar8 = *(uint *)(lVar11 + 0xc);
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    uVar12 = (ulonglong)*(uint *)(lVar11 + 0x10);
    if (*(uint *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      uVar13 = DAT_14c964868 + 1;
      bVar17 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar17) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar13);
      }
      LOCK();
      uVar9 = *(uint *)(lVar11 + 0x10);
      bVar17 = uVar9 == 0;
      if (bVar17) {
        *(uint *)(lVar11 + 0x10) = uVar13;
        uVar9 = 0;
      }
      UNLOCK();
      if (bVar17) {
        uVar9 = uVar13;
      }
      uVar12 = (ulonglong)uVar9;
    }
  }
  else {
    if (lVar11 != 0) goto LAB_1412db63c;
    uVar8 = 0;
    uVar12 = 0;
  }
  uVar13 = local_80;
  uVar6 = DAT_14c9a3c28;
  if ((((char)local_f8 == '\x01') && (*(longlong *)(CONCAT44(uStack_ec,uStack_f0) + 0x3c) != 0)) &&
     (local_e8 <= *(char *)(CONCAT44(uStack_ec,uStack_f0) + 0x38))) {
    lVar11 = (longlong)(int)local_80;
    local_80 = local_80 + 1;
    if (local_7c < local_80) {
      FUN_141225836(&local_88,uVar13);
    }
    lVar11 = lVar11 * 0x40;
    *(undefined8 *)(local_88 + lVar11) = uVar6;
    *(ulonglong *)(local_88 + 8 + lVar11) = (ulonglong)uVar8 | uVar12 << 0x20;
    puVar2 = (undefined8 *)(local_88 + 0x10 + lVar11);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = (undefined8 *)(local_88 + 0x20 + lVar11);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = (undefined8 *)(local_88 + 0x30 + lVar11);
    *puVar2 = 0;
    puVar2[1] = 0;
    FUN_1404eec70(0,0);
  }
  local_308.Data1 = 0;
  local_308.Data2 = 0;
  local_308.Data3 = 0;
  local_308.Data4[0] = '\0';
  local_308.Data4[1] = '\0';
  local_308.Data4[2] = '\0';
  local_308.Data4[3] = '\0';
  local_308.Data4[4] = '\0';
  local_308.Data4[5] = '\0';
  local_308.Data4[6] = '\0';
  local_308.Data4[7] = '\0';
  CoCreateGuid(&local_308);
  if ((param_1[6] != 0) && ((char)local_f8 != '\0')) {
    FUN_14111b8d6(CONCAT44(uStack_ec,uStack_f0),param_1[6],&local_308);
  }
  FUN_14027c198(&local_f8);
  FUN_1404eec70(local_110,local_108);
  if (local_110 != 0) {
    FUN_1400020a8();
  }
  FUN_1404eecb3(local_120,local_118);
  if (local_120 != 0) {
    FUN_1400020a8();
  }
  FUN_1404eec06(local_140);
  (*(code *)(&PTR_FUN_14a1842f0)[local_148])(local_168);
  if (local_178 != 0) {
    FUN_1400020a8();
  }
  if (bVar5) {
    puVar14 = local_220;
  }
  else {
    puVar14 = local_290;
  }
  (*(code *)(&PTR_FUN_14a1842f0)[(byte)puVar14[0x20]])(puVar14);
  if (*(longlong *)(puVar14 + -0x10) != 0) {
    FUN_1400020a8();
  }
  (*(code *)(&PTR_FUN_14a1842f0)[local_190])(local_1b0);
  if (local_1c0 != 0) {
    FUN_1400020a8();
  }
  if ((bVar15 & *(byte *)(param_1 + 0x3b)) == 1) {
    FUN_140a42f6a(lVar10,5,0xffffffff,0);
  }
LAB_1412db163:
  if ((local_60 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412db970 FUN_1412db970 body=39 status=ok
// SIG undefined FUN_1412db970(void)

void FUN_1412db970(longlong param_1)

{
  FUN_144725486();
  FUN_144725486(param_1 + 0x10);
  FUN_144725486(param_1 + 0x28);
  return;
}



// FUNCTION 1412db998 FUN_1412db998 body=216 status=ok
// SIG undefined FUN_1412db998(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1412db998(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_140bb8f84();
  *param_1 = &PTR_FUN_14b193cc0;
  param_1[0xd] = &PTR_FUN_14b194040;
  param_1[0x16] = &PTR_FUN_14b194080;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  uVar1 = uRam000000014c964bc8;
  param_1[0x1e] = _DAT_14c964bc0;
  param_1[0x1f] = uVar1;
  uVar1 = uRam000000014c964bd8;
  param_1[0x20] = _DAT_14c964bd0;
  param_1[0x21] = uVar1;
  uVar1 = uRam000000014c964be8;
  param_1[0x22] = _DAT_14c964be0;
  param_1[0x23] = uVar1;
  uVar1 = uRam000000014c964bf8;
  param_1[0x24] = _DAT_14c964bf0;
  param_1[0x25] = uVar1;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x2a] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  return param_1;
}



// FUNCTION 1412dba70 FUN_1412dba70 body=420 status=ok
// SIG undefined FUN_1412dba70(void)

undefined8 * FUN_1412dba70(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 1) = 0;
  FUN_1405bceb4();
  *param_1 = &PTR_FUN_14aa05be0;
  param_1[2] = param_2;
  param_1[0x10] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0x800000000;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  FUN_1458b816a(param_1 + 3);
  *(undefined4 *)(param_1 + 0xf) = DAT_14c7616f8;
  if (0 < *(int *)(param_1 + 4)) {
    lVar5 = 0;
    lVar6 = 0;
    do {
      lVar3 = param_1[3];
      *(char *)(lVar3 + 8 + lVar5) = (char)lVar6;
      *(char *)(lVar3 + 9 + lVar5) = (char)lVar6;
      *(byte *)(lVar3 + 10 + lVar5) = *(byte *)(lVar3 + 10 + lVar5) & 0xd1 | 0x26;
      *(undefined8 **)(lVar3 + 0x28 + lVar5) = param_1;
      FUN_1402eb876(lVar3 + lVar5,*(undefined8 *)(param_2 + 0x30));
      iVar2 = *(int *)(param_1 + 10);
      *(uint *)(param_1 + 10) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0x54) < iVar2 + 1U) {
        FUN_1412dbc16(param_1 + 9,iVar2);
      }
      lVar3 = param_1[9];
      *(undefined8 **)(lVar3 + (longlong)iVar2 * 0x18) = param_1;
      puVar1 = (undefined8 *)(lVar3 + 8 + (longlong)iVar2 * 0x18);
      *puVar1 = 0;
      puVar1[1] = 0;
      iVar2 = *(int *)(param_1 + 0xc);
      *(uint *)(param_1 + 0xc) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 100) < iVar2 + 1U) {
        FUN_1412dbc16(param_1 + 0xb,iVar2);
      }
      lVar3 = param_1[0xb];
      *(undefined8 **)(lVar3 + (longlong)iVar2 * 0x18) = param_1;
      lVar6 = lVar6 + 1;
      puVar1 = (undefined8 *)(lVar3 + 8 + (longlong)iVar2 * 0x18);
      *puVar1 = 0;
      puVar1[1] = 0;
      lVar5 = lVar5 + 0x30;
    } while (lVar6 < *(int *)(param_1 + 4));
  }
  uVar4 = FUN_140b631de();
  FUN_1458b8272(uVar4,&local_58,param_1);
  param_1[0x10] = local_58;
  if ((local_50 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1412dbc16 FUN_1412dbc16 body=363 status=ok
// SIG undefined FUN_1412dbc16(void)

void FUN_1412dbc16(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1412dbcac;
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
LAB_1412dbcac:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 1412dbd82 FUN_1412dbd82 body=60 status=ok
// SIG undefined FUN_1412dbd82(void)

void FUN_1412dbd82(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0xc);
  do {
    *(undefined2 *)((longlong)puVar1 + -4) = 0;
    *(byte *)((longlong)puVar1 + -2) = *(byte *)((longlong)puVar1 + -2) & 0x80 | 8;
    *(undefined1 *)((longlong)puVar1 + -1) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x14) = 0;
    *(undefined ***)((longlong)puVar1 + -0xc) = &PTR_FUN_14aa070e0;
    puVar1 = puVar1 + 6;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}



// FUNCTION 1412dbdbe FUN_1412dbdbe body=487 status=ok
// SIG undefined FUN_1412dbdbe(void)

undefined8 * FUN_1412dbdbe(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14ab51200;
  param_1[3] = 0x4461000000000000;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined2 *)((longlong)param_1 + 0x24) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x26) = 1;
  local_48 = (longlong *)FUN_14001cc68(0x98,0x10);
  local_48[1] = (longlong)&DAT_100000001;
  *local_48 = (longlong)&PTR_FUN_14a1b6cc0;
  local_50 = local_48 + 2;
  local_48[2] = (longlong)&PTR_FUN_14a18e458;
  local_48[3] = 0;
  local_48[4] = 0;
  local_48[5] = 0;
  local_48[6] = 0;
  local_48[7] = 0;
  local_48[8] = 0;
  local_48[9] = 0;
  local_48[10] = 0;
  local_48[0xb] = 0;
  local_48[0xc] = 0;
  local_48[0xd] = 0;
  local_48[0xe] = 0;
  local_48[0xf] = 0;
  local_48[0x10] = 0;
  local_48[0x11] = 0;
  local_48[0x12] = 0;
  FUN_1404e24cc(&local_50);
  FUN_1404e256a(param_1 + 5,&local_50);
  plVar3 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfc;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0x466a6000;
  *(undefined4 *)((longlong)param_1 + 0x4b) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *param_1 = &PTR_FUN_14b27f980;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0xaaad1010;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412dbfa6 FUN_1412dbfa6 body=228 status=ok
// SIG undefined FUN_1412dbfa6(void)

longlong FUN_1412dbfa6(void)

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
  if (DAT_14cb1ef28 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145833db4;
    local_38 = &LAB_147eb1c81;
    local_40 = FUN_143849be9;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/AIModule",L"BlackboardKeyType_Object",&DAT_14cb1ef28,&DAT_147eb1c80);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1ef28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412dc08c FUN_1412dc08c body=353 status=ok
// SIG undefined FUN_1412dc08c(void)

void FUN_1412dc08c(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1412dc111;
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
LAB_1412dc111:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1412dc1ee FUN_1412dc1ee body=213 status=ok
// SIG undefined FUN_1412dc1ee(void)

void FUN_1412dc1ee(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar7 = (longlong)*(int *)(*(longlong *)(param_1 + 8) + 200);
    if (lVar7 != 0) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xc0);
      lVar6 = 0;
      do {
        uVar5 = (**(code **)(**(longlong **)(lVar3 + lVar6) + 8))();
        FUN_1412dc2c6(&DAT_14cb8b480,&local_48,uVar5);
        if (local_48 != 0) {
          (**(code **)(**(longlong **)(lVar3 + lVar6) + 0x28))();
        }
        plVar4 = local_40;
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_40 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
        lVar6 = lVar6 + 0x10;
      } while (lVar7 * 0x10 != lVar6);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412dc2c6 FUN_1412dc2c6 body=545 status=ok
// SIG undefined FUN_1412dc2c6(void)

longlong * FUN_1412dc2c6(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  ulonglong *local_40;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = param_3;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar5 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 +
                    (ulonglong)((int)param_1[9] - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar7 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar7 * 0x20;
        if (*(ulonglong *)(*param_1 + (longlong)iVar7 * 0x20) == param_3) {
          if ((lVar3 != 0) && (lVar3 != -8)) {
            *param_2 = 0;
            param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
          }
          break;
        }
        iVar7 = *(int *)(lVar3 + 0x18);
      } while (iVar7 != -1);
    }
  }
  local_40 = &local_48;
  FUN_1412dc4e8(param_1,&local_34);
  lVar3 = *param_1 + (longlong)local_34 * 0x20;
  plVar9 = (longlong *)(lVar3 + 8);
  lVar4 = *(longlong *)(local_48 + 0x18);
  plVar6 = (longlong *)FUN_14001cc68(0x28,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b42db30;
  plVar6[2] = lVar4;
  plVar6[3] = 0;
  plVar6[4] = 0;
  if (plVar6 == (longlong *)0x0) {
    *plVar9 = 0x10;
    plVar8 = *(longlong **)(lVar3 + 0x10);
    if (plVar8 == (longlong *)0x0) goto LAB_1412dc3fc;
    *(undefined8 *)(lVar3 + 0x10) = 0;
LAB_1412dc473:
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
    if (plVar6 == (longlong *)0x0) goto LAB_1412dc3fc;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *plVar9 = (longlong)(plVar6 + 2);
    plVar8 = *(longlong **)(lVar3 + 0x10);
    if (plVar6 == plVar8) {
      LOCK();
      plVar8 = plVar6 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
    else {
      *(longlong **)(lVar3 + 0x10) = plVar6;
      if (plVar8 != (longlong *)0x0) goto LAB_1412dc473;
    }
  }
  LOCK();
  plVar8 = plVar6 + 1;
  *(int *)plVar8 = (int)*plVar8 + -1;
  UNLOCK();
  if ((int)*plVar8 == 0) {
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
LAB_1412dc3fc:
  *param_2 = *plVar9;
  lVar3 = *(longlong *)(lVar3 + 0x10);
  param_2[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412dc4e8 FUN_1412dc4e8 body=867 status=ok
// SIG undefined FUN_1412dc4e8(void)

int * FUN_1412dc4e8(longlong *param_1,int *param_2,undefined8 *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  byte bVar14;
  int iVar15;
  longlong *plVar16;
  uint uVar17;
  longlong lVar18;
  longlong *plVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar21 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar21 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar21) {
      FUN_1447711aa(param_1,iVar21);
    }
    iVar12 = (int)param_1[5];
    if (iVar12 == 0) {
      iVar11 = -1;
    }
    else {
      iVar11 = iVar12 + 0x1e;
      if (-1 < iVar12 + -1) {
        iVar11 = iVar12 + -1;
      }
      iVar11 = iVar11 >> 5;
    }
    plVar16 = param_1 + 2;
    iVar15 = iVar12 + 1;
    iVar20 = iVar12 + 0x1f;
    if (-1 < iVar12) {
      iVar20 = iVar12;
    }
    if (iVar20 >> 5 == iVar11) {
      *(int *)(param_1 + 5) = iVar15;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar12) {
        if (iVar12 + 0x20U < 0xa0) {
          iVar15 = 0x80;
          iVar11 = iVar12;
        }
        else {
          uVar17 = iVar12 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar22 = 4;
            if (4 < uVar17) {
              uVar22 = uVar17;
            }
          }
          else {
            uVar22 = (uVar17 * 3 >> 3) + uVar17 + 0x10;
          }
          uVar13 = FUN_144a3809e(uVar22 << 2,0);
          iVar11 = (int)(uVar13 >> 2);
          iVar15 = -0x20;
          if ((int)uVar17 <= iVar11) {
            iVar15 = iVar11 << 5;
          }
          iVar11 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar15;
        FUN_1446efbd8(plVar16,iVar11);
        iVar15 = (int)param_1[5] + 1;
      }
      iVar11 = iVar15 + 0x1f;
      if (-1 < iVar15) {
        iVar11 = iVar15;
      }
      *(int *)(param_1 + 5) = iVar15;
      if (iVar15 % 0x20 != 0) {
        plVar19 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar19 = plVar16;
        }
        bVar14 = -(char)(iVar15 % 0x20);
        *(uint *)((longlong)plVar19 + (longlong)(iVar11 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar19 + (longlong)(iVar11 >> 5) * 4) << (bVar14 & 0x1f)) >>
             (bVar14 & 0x1f);
      }
    }
    lVar18 = (longlong)iVar21;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar16 = (longlong *)param_1[4];
    }
    bVar14 = (byte)iVar12 & 0x1f;
    puVar2 = (uint *)((longlong)plVar16 + (longlong)(iVar20 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar14 | 0xfffffffeU >> 0x20 - bVar14);
  }
  else {
    iVar21 = (int)param_1[6];
    lVar18 = (longlong)iVar21;
    iVar12 = *(int *)(*param_1 + 4 + lVar18 * 0x20);
    *(int *)(param_1 + 6) = iVar12;
    iVar11 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar11;
    if (iVar11 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar12 * 0x20) = 0xffffffff;
    }
  }
  iVar12 = 1;
  plVar16 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar16 = (longlong *)param_1[4];
  }
  iVar11 = iVar21 + 0x1f;
  if (-1 < iVar21) {
    iVar11 = iVar21;
  }
  puVar2 = (uint *)((longlong)plVar16 + (longlong)(iVar11 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar21 & 0x1f);
  lVar6 = *param_1;
  lVar18 = lVar18 * 0x20;
  puVar3 = (undefined4 *)(lVar6 + lVar18);
  uVar13 = *(ulonglong *)*param_3;
  *(ulonglong *)(lVar6 + lVar18) = uVar13;
  puVar5 = (undefined8 *)(lVar6 + 8 + lVar18);
  *puVar5 = 0;
  puVar5[1] = 0;
  *(undefined4 *)(lVar6 + 0x18 + lVar18) = 0xffffffff;
  uVar17 = ((uint)(uVar13 >> 0x14) & 0xffff ^ (uint)(uVar13 >> 4)) * -0x7a143595;
  uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
  uVar17 = uVar17 >> 0x10 ^ uVar17;
  uVar22 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if ((uVar22 != 0) && (uVar22 != 1)) {
    plVar16 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar16 = (longlong *)param_1[8];
    }
    iVar11 = *(int *)((longlong)plVar16 + (ulonglong)((int)param_1[9] - 1U & uVar17) * 4);
    if (iVar11 != -1) {
      do {
        puVar4 = (undefined4 *)(*param_1 + (longlong)iVar11 * 0x20);
        if (*(ulonglong *)(*param_1 + (longlong)iVar11 * 0x20) == uVar13) {
          plVar16 = *(longlong **)(puVar4 + 4);
          if (plVar16 != (longlong *)0x0) {
            LOCK();
            plVar19 = plVar16 + 1;
            *(int *)plVar19 = (int)*plVar19 + -1;
            UNLOCK();
            if ((int)*plVar19 == 0) {
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
          uVar7 = *puVar3;
          uVar8 = puVar3[1];
          uVar9 = puVar3[2];
          uVar10 = puVar3[3];
          *(undefined8 *)(puVar4 + 4) = *(undefined8 *)(puVar3 + 4);
          *puVar4 = uVar7;
          puVar4[1] = uVar8;
          puVar4[2] = uVar9;
          puVar4[3] = uVar10;
          FUN_148997788(param_1,iVar21);
          iVar21 = iVar11;
          goto LAB_1412dc6cf;
        }
        iVar11 = puVar4[6];
      } while (iVar11 != -1);
    }
  }
  if (3 < uVar22) {
    uVar13 = (ulonglong)(uVar22 & 0xfffffffe) + 0xf;
    lVar18 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    iVar12 = 1 << ((byte)lVar18 & 0x1f);
  }
  if (((int)uVar22 < 1) || (iVar12 <= (int)param_1[9])) {
    uVar17 = (int)param_1[9] - 1U & uVar17;
    puVar3[7] = uVar17;
    plVar16 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar16 = param_1 + 7;
    }
    puVar3[6] = *(undefined4 *)
                 ((longlong)plVar16 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar17) * 4);
    plVar16 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar16 = param_1 + 7;
    }
    *(int *)((longlong)plVar16 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar17) * 4) =
         iVar21;
  }
  else {
    *(int *)(param_1 + 9) = iVar12;
    FUN_1412dc84c(param_1);
  }
LAB_1412dc6cf:
  *param_2 = iVar21;
  return param_2;
}



// FUNCTION 1412dc84c FUN_1412dc84c body=603 status=ok
// SIG undefined FUN_1412dc84c(void)

void FUN_1412dc84c(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar5 = *(uint *)(param_1 + 9);
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      uVar3 = 0;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
             0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar5 != uVar3);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] == 0) {
      uVar8 = 1;
      local_48._0_4_ = 0xffffffff;
      local_48._4_4_ = 0;
      local_58._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      uVar8 = local_58 >> 0x20;
    }
    iVar4 = (int)local_58;
    uVar5 = (uint)local_48;
    iVar6 = local_48._4_4_;
    iVar9 = local_40;
    if (local_48._4_4_ < (int)local_50[3]) {
      do {
        lVar11 = *param_1;
        lVar10 = (longlong)iVar6 * 0x20;
        uVar3 = ((uint)(*(ulonglong *)(lVar11 + lVar10) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar11 + lVar10) >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar13 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x1c + lVar10) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x18 + lVar10) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar13) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar12 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        uVar5 = ~(uint)uVar8 & uVar5;
        plVar7 = (longlong *)local_50[2];
        if ((longlong *)local_50[2] == (longlong *)0x0) {
          plVar7 = local_50;
        }
        iVar12 = (int)local_50[3];
        lVar11 = (longlong)iVar4;
        uVar3 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar6 = iVar12 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar10 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar3 = *(uint *)((longlong)plVar7 + lVar10 * 4 + lVar11 * 4 + 4);
            if (uVar3 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar2 - lVar11 == lVar10) goto LAB_1412dca45;
          }
          iVar4 = iVar4 + (int)lVar10 + 1;
          uVar5 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar13 = uVar8 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar12);
    }
  }
LAB_1412dca45:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412dcaa8 FUN_1412dcaa8 body=405 status=ok
// SIG undefined FUN_1412dcaa8(void)

void FUN_1412dcaa8(longlong param_1,longlong param_2,longlong param_3,void *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *_Dst;
  longlong lVar4;
  bool bVar5;
  
  iVar1 = *(int *)(param_1 + 0x68);
  uVar2 = iVar1 + 1;
  *(uint *)(param_1 + 0x68) = uVar2;
  if (*(uint *)(param_1 + 0x6c) < uVar2) {
    FUN_1412dcc3e((longlong *)(param_1 + 0x60));
  }
  _Dst = (uint *)((longlong)iVar1 * 0x110 + *(longlong *)(param_1 + 0x60));
  memset(_Dst,0,0x110);
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = *(uint *)(param_2 + 0xc);
    *_Dst = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    uVar2 = *(uint *)(lVar4 + 0x10);
    if (*(uint *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar3 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar3);
      }
      LOCK();
      uVar2 = *(uint *)(lVar4 + 0x10);
      bVar5 = uVar2 == 0;
      if (bVar5) {
        *(uint *)(lVar4 + 0x10) = uVar3;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar5) {
        uVar2 = uVar3;
      }
    }
  }
  _Dst[1] = uVar2;
  if (param_3 == 0) {
    _Dst[2] = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(param_3 + 0xc);
    _Dst[2] = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    uVar2 = *(uint *)(lVar4 + 0x10);
    if (*(uint *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar3 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar3);
      }
      LOCK();
      uVar2 = *(uint *)(lVar4 + 0x10);
      bVar5 = uVar2 == 0;
      if (bVar5) {
        *(uint *)(lVar4 + 0x10) = uVar3;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar5) {
        uVar2 = uVar3;
      }
    }
  }
  _Dst[3] = uVar2;
  memcpy(_Dst + 4,param_4,0x100);
  return;
}



// FUNCTION 1412dcc3e FUN_1412dcc3e body=274 status=ok
// SIG undefined FUN_1412dcc3e(void)

void FUN_1412dcc3e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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
    uVar4 = lVar3 * 0x110;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x110)) {
      uVar5 = uVar4 / 0x110 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x110,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1412dcd52 FUN_1412dcd52 body=440 status=ok
// SIG undefined FUN_1412dcd52(void)

void FUN_1412dcd52(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28[0] = 0;
  local_28[1] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c963e88) {
    FUN_144b3d300(&DAT_14c963e88);
    if (DAT_14c963e88 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_140dafe7a;
      local_40 = 0;
      local_48 = 0xc001;
      FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0);
      atexit(FUN_142829758);
      _Init_thread_footer(&DAT_14c963e88);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,local_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,local_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_28[0] = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,local_28);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_1412dcf0c(local_28);
  *param_3 = uVar4;
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412dcf0c FUN_1412dcf0c body=93 status=ok
// SIG undefined FUN_1412dcf0c(void)

undefined8 FUN_1412dcf0c(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  if (*(int *)(param_1 + 1) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*param_1;
  }
  plVar1 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar3,1);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001412dcf5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0xb0))(plVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1412dcf6a FUN_1412dcf6a body=20 status=ok
// SIG undefined FUN_1412dcf6a(void)

void FUN_1412dcf6a(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_1412dcf7e(param_1,*(undefined4 *)(param_1 + 8),param_2);
    return;
  }
  return;
}



// FUNCTION 1412dcf7e FUN_1412dcf7e body=388 status=ok
// SIG undefined FUN_1412dcf7e(void)

void FUN_1412dcf7e(undefined8 *param_1,int param_2,int param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  void *_Src;
  uint uVar3;
  DWORD DVar4;
  DWORD dwTlsIndex;
  DWORD DVar5;
  LPVOID lpTlsValue;
  void *_Dst;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_78 [40];
  int local_50;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 != 0) {
    if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_146815189(param_3,0xc);
    }
    _Src = (void *)*param_1;
    dwTlsIndex = DAT_14c7585d0;
    local_50 = param_2;
    if (DAT_14c7585d0 == 0xffffffff) {
      dwTlsIndex = TlsAlloc();
      DVar5 = 0xffffffff;
      LOCK();
      bVar10 = DAT_14c7585d0 != 0xffffffff;
      DVar4 = dwTlsIndex;
      if (bVar10) {
        DVar5 = DAT_14c7585d0;
        DVar4 = DAT_14c7585d0;
      }
      DAT_14c7585d0 = DVar4;
      UNLOCK();
      if (bVar10) {
        TlsFree(dwTlsIndex);
        dwTlsIndex = DVar5;
      }
    }
    lpTlsValue = TlsGetValue(dwTlsIndex);
    if (lpTlsValue == (LPVOID)0x0) {
      lpTlsValue = (LPVOID)FUN_140036a08(&local_49);
      FUN_140fddf04(lpTlsValue);
      TlsSetValue(dwTlsIndex,lpTlsValue);
    }
    puVar2 = (ulonglong *)((longlong)lpTlsValue + 0x10);
    uVar3 = param_3 * 0xc;
    uVar8 = (ulonglong)(uVar3 < 0x10) << 3 | 0xfffffffffffffff0;
    uVar6 = (uint)(uVar3 >= 0x10) * 8;
    lVar1 = (ulonglong)uVar6 + 7;
    _Dst = (void *)(*(longlong *)((longlong)lpTlsValue + 0x10) + lVar1 & uVar8);
    uVar9 = (longlong)_Dst + (longlong)(int)uVar3;
    if (*(ulonglong *)((longlong)lpTlsValue + 0x18) < uVar9) {
      FUN_140023dd8(puVar2,uVar6 + 8 + uVar3);
      _Dst = (void *)(lVar1 + *puVar2 & uVar8);
      uVar9 = (longlong)(int)uVar3 + (longlong)_Dst;
    }
    *puVar2 = uVar9;
    *param_1 = _Dst;
    if (local_50 != 0 && _Src != (void *)0x0) {
      iVar7 = local_50;
      if (param_3 < local_50) {
        iVar7 = param_3;
      }
      memcpy(_Dst,_Src,(longlong)iVar7 * 0xc);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412dd104 FUN_1412dd104 body=228 status=ok
// SIG undefined FUN_1412dd104(void)

longlong FUN_1412dd104(void)

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
  if (DAT_14cb9f040 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148b7d291;
    local_40 = FUN_1465a2a70;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/OakGame",L"AITargetLock",&DAT_14cb9f040,&DAT_148b7d290);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9f040;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412dd1ea FUN_1412dd1ea body=316 status=ok
// SIG undefined FUN_1412dd1ea(void)

void FUN_1412dd1ea(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
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
  lVar1 = *(longlong *)(param_2 + 0xa8);
  if (lVar1 != 0) {
    if (DAT_14cba8288 == 0) {
      local_40 = &local_28;
      local_28 = FUN_141864c34;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1464cee30;
      local_48 = &LAB_148bfac22;
      local_50 = &LAB_140f21842;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) ==
        DAT_14cba8288 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412dd33c FUN_1412dd33c body=538 status=ok
// SIG undefined FUN_1412dd33c(void)

void FUN_1412dd33c(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  switch(param_2) {
  case 0:
    if (*(char *)(param_1 + 0x4db9) != '\x05') goto switchD_1412dd371_default;
    *(undefined1 *)(param_1 + 0x4db9) = 0;
    if ((*(longlong *)(param_1 + 0x4dd0) != 0) &&
       (plVar3 = *(longlong **)(param_1 + 0x4dd8), plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x50))(plVar3,param_1);
      lVar1 = (**(code **)(*plVar3 + 0x20))(plVar3);
      *(undefined8 *)(lVar1 + 0x18) = 0;
      *(undefined8 *)(lVar1 + 0x20) = 0;
    }
    FUN_140cf9190(param_1 + 0x4d88,0);
    if ((*(longlong *)(param_1 + 0x4dd0) == 0) ||
       (plVar3 = *(longlong **)(param_1 + 0x4dd8), plVar3 == (longlong *)0x0))
    goto switchD_1412dd371_default;
    local_30 = (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_1447cd2ec(param_1 + 0x4d60);
    lVar1 = param_1 + 0x4d70;
    break;
  case 1:
    if (*(char *)(param_1 + 0x4db9) != '\x04') goto switchD_1412dd371_default;
    *(undefined1 *)(param_1 + 0x4db9) = 0;
    if ((*(longlong *)(param_1 + 0x4dd0) != 0) &&
       (plVar3 = *(longlong **)(param_1 + 0x4dd8), plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x48))(plVar3,param_1);
      lVar1 = (**(code **)(*plVar3 + 0x20))(plVar3);
      *(undefined8 *)(lVar1 + 0x18) = 0;
      *(undefined8 *)(lVar1 + 0x20) = 0;
    }
    FUN_140cf9190(param_1 + 0x4d88,0);
    if ((*(longlong *)(param_1 + 0x4dd0) == 0) ||
       (plVar3 = *(longlong **)(param_1 + 0x4dd8), plVar3 == (longlong *)0x0))
    goto switchD_1412dd371_default;
    local_30 = (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_1447cd2ec(param_1 + 0x4d38);
    lVar1 = param_1 + 0x4d48;
    break;
  case 2:
    if (*(longlong *)(param_1 + 0x4dd0) == 0) goto switchD_1412dd371_default;
    lVar1 = *(longlong *)(param_1 + 0x4dd8);
    goto joined_r0x0001412dd456;
  case 3:
    if (*(longlong *)(param_1 + 0x4dd0) == 0) goto switchD_1412dd371_default;
    lVar1 = *(longlong *)(param_1 + 0x4dd8);
joined_r0x0001412dd456:
    if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  default:
    goto switchD_1412dd371_default;
  }
  uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3);
  FUN_1400da9ba(lVar1,uVar2);
  if ((*(longlong *)(param_1 + 0x4dd0) != 0) && (*(longlong *)(param_1 + 0x4dd8) != 0)) {
    *(longlong *)(param_1 + 0x4dd0) = 0;
    *(undefined8 *)(param_1 + 0x4dd8) = 0;
  }
switchD_1412dd371_default:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412dd56c FUN_1412dd56c body=501 status=ok
// SIG undefined FUN_1412dd56c(void)

void FUN_1412dd56c(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_b8 [40];
  longlong local_90;
  longlong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78 [40];
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 != 0) {
    FUN_1458b95ee(param_1,param_2 + 0x18);
    local_78[0] = 0;
    local_50 = 0;
    FUN_1456bb102(local_78,param_3);
    if ((longlong)(int)param_1[1] != 0) {
      lVar6 = *param_1;
      local_90 = (longlong)(int)param_1[1] * 0x20 + lVar6;
      do {
        if ((longlong)*(int *)(lVar6 + 0x18) != 0) {
          lVar4 = *(longlong *)(lVar6 + 0x10);
          lVar7 = (longlong)*(int *)(lVar6 + 0x18) * 0x20 + lVar4;
          do {
            iVar1 = *(int *)(lVar4 + 0x18);
            if ((longlong)iVar1 != 0) {
              lVar2 = *(longlong *)(lVar4 + 0x10);
              plVar5 = (longlong *)(lVar2 + 0x30);
              do {
                plVar3 = (longlong *)plVar5[-6];
                if (plVar3 != (longlong *)0x0) {
                  (**(code **)(*plVar3 + 0x18))(plVar3,&local_88,local_78);
                  if (plVar5 == &local_88) {
                    if (local_88 != 0) {
                      FUN_1400020a8();
                    }
                  }
                  else {
                    if (*plVar5 != 0) {
                      FUN_1400020a8();
                    }
                    *plVar5 = local_88;
                    local_88 = 0;
                    *(undefined4 *)(plVar5 + 1) = local_80;
                    *(undefined4 *)((longlong)plVar5 + 0xc) = local_7c;
                  }
                }
                plVar3 = (longlong *)plVar5[-3];
                if (plVar3 != (longlong *)0x0) {
                  (**(code **)(*plVar3 + 0x18))(plVar3,&local_88,local_78);
                  if (plVar5 + 2 == &local_88) {
                    if (local_88 != 0) {
                      FUN_1400020a8();
                    }
                  }
                  else {
                    if (plVar5[2] != 0) {
                      FUN_1400020a8();
                    }
                    plVar5[2] = local_88;
                    local_88 = 0;
                    *(undefined4 *)(plVar5 + 3) = local_80;
                    *(undefined4 *)((longlong)plVar5 + 0x1c) = local_7c;
                  }
                }
                plVar3 = plVar5 + 4;
                plVar5 = plVar5 + 10;
              } while (plVar3 != (longlong *)((longlong)iVar1 * 0x50 + lVar2));
            }
            lVar4 = lVar4 + 0x20;
          } while (lVar4 != lVar7);
        }
        lVar6 = lVar6 + 0x20;
      } while (lVar6 != local_90);
    }
    FUN_144a5ac3a(local_78);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412dd762 FUN_1412dd762 body=74 status=ok
// SIG undefined FUN_1412dd762(void)

void FUN_1412dd762(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x18);
    do {
      FUN_1412dd7ac(*(undefined8 *)(puVar1 + -2),*puVar1);
      if (*(longlong *)(puVar1 + -2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong **)(puVar1 + -6) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(puVar1 + -6) + 0x10))();
      }
      puVar1 = puVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1412dd7ac FUN_1412dd7ac body=139 status=ok
// SIG undefined FUN_1412dd7ac(void)

void FUN_1412dd7ac(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x40);
    do {
      if (*plVar4 != 0) {
        FUN_1400020a8();
      }
      if (plVar4[-2] != 0) {
        FUN_1400020a8();
      }
      plVar3 = (longlong *)plVar4[-4];
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
      plVar3 = (longlong *)plVar4[-7];
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
      plVar4 = plVar4 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1412dd837 FUN_1412dd837 body=296 status=ok
// SIG undefined FUN_1412dd837(void)

void FUN_1412dd837(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  if (param_3 != 0) {
    lVar4 = 0;
    do {
      puVar5 = (undefined8 *)(param_1 + lVar4);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      FUN_1401f3db8(param_1 + lVar4,param_2 + lVar4);
      lVar1 = param_2 + lVar4;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[5] = 0;
      FUN_1401f3db8(puVar5 + 3,lVar1 + 0x18);
      puVar5[6] = 0;
      iVar2 = *(int *)(lVar1 + 0x38);
      pvVar3 = *(void **)(lVar1 + 0x30);
      *(int *)(puVar5 + 7) = iVar2;
      if ((longlong)iVar2 == 0) {
        *(undefined4 *)(param_1 + 0x3c + lVar4) = 0;
      }
      else {
        puVar5 = (undefined8 *)(param_1 + lVar4 + 0x30);
        FUN_1446dd670(puVar5,iVar2,0);
        memcpy((void *)*puVar5,pvVar3,(longlong)iVar2 * 2);
      }
      *(undefined8 *)(param_1 + 0x40 + lVar4) = 0;
      iVar2 = *(int *)(param_2 + 0x48 + lVar4);
      pvVar3 = *(void **)(param_2 + 0x40 + lVar4);
      *(int *)(param_1 + 0x48 + lVar4) = iVar2;
      if ((longlong)iVar2 == 0) {
        *(undefined4 *)(param_1 + 0x4c + lVar4) = 0;
      }
      else {
        puVar5 = (undefined8 *)(param_1 + lVar4 + 0x40);
        FUN_1446dd670(puVar5,iVar2,0);
        memcpy((void *)*puVar5,pvVar3,(longlong)iVar2 * 2);
      }
      lVar4 = lVar4 + 0x50;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1412dd960 FUN_1412dd960 body=195 status=ok
// SIG undefined FUN_1412dd960(void)

void FUN_1412dd960(longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48.Data1 = 0;
  local_48.Data2 = 0;
  local_48.Data3 = 0;
  local_48.Data4[0] = '\0';
  local_48.Data4[1] = '\0';
  local_48.Data4[2] = '\0';
  local_48.Data4[3] = '\0';
  local_48.Data4[4] = '\0';
  local_48.Data4[5] = '\0';
  local_48.Data4[6] = '\0';
  local_48.Data4[7] = '\0';
  CoCreateGuid(&local_48);
  *(ulong *)(param_1 + 0x3c0) = local_48.Data1;
  *(undefined4 *)(param_1 + 0x3c4) = local_48._4_4_;
  *(undefined4 *)(param_1 + 0x3c8) = local_48.Data4._0_4_;
  *(undefined4 *)(param_1 + 0x3cc) = local_48.Data4._4_4_;
  plVar1 = *(longlong **)(param_1 + 0x3e0);
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  *plVar1 = 0;
  plVar1[1] = 0;
  FUN_1400d7c38(*(longlong *)(param_1 + 0x3e0) + 0x50);
  *(undefined4 *)(*(longlong *)(param_1 + 0x3e0) + 0x60) = 0;
  lVar2 = *(longlong *)(param_1 + 0x3e0);
  if (*(longlong *)(lVar2 + 0x68) != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(lVar2 + 0x68) = 0;
  *(undefined8 *)(lVar2 + 0x70) = 0;
  if (param_2 != '\0') {
    FUN_1436fe7b0(param_1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412dda24 FUN_1412dda24 body=486 status=ok
// SIG undefined FUN_1412dda24(void)

undefined8 *
FUN_1412dda24(longlong *param_1,undefined8 *param_2,longlong param_3,undefined8 *param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong *plVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  int iVar15;
  longlong lVar16;
  
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0xffffffff;
  if ((int)param_1[8] != *(int *)((longlong)param_1 + 0x6c)) {
    plVar11 = param_1 + 0xe;
    if ((longlong *)param_1[0xf] != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[0xf];
    }
    iVar4 = *(int *)((longlong)plVar11 +
                    (ulonglong)
                    ((int)param_1[0x10] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) * 0x17 + (int)param_3) * 4);
    if (iVar4 != -1) {
      lVar6 = param_1[7];
      do {
        plVar1 = (longlong *)(lVar6 + (longlong)iVar4 * 0x18);
        if (*plVar1 == param_3) {
          uVar5 = *(uint *)(lVar6 + 8 + (longlong)iVar4 * 0x18);
          iVar15 = *(int *)((longlong)plVar11 + (longlong)*(int *)((longlong)plVar1 + 0x14) * 4);
          if (iVar15 == iVar4) {
            piVar12 = (int *)((longlong)plVar11 + (longlong)*(int *)((longlong)plVar1 + 0x14) * 4);
          }
          else {
            do {
              piVar12 = (int *)(lVar6 + (longlong)iVar15 * 0x18 + 0x10);
              iVar15 = *piVar12;
            } while (iVar15 != iVar4);
          }
          *piVar12 = (int)plVar1[2];
          FUN_1412ddc0a();
          if ((-1 < (int)uVar5) && ((int)uVar5 < (int)param_1[5])) {
            plVar11 = (longlong *)param_1[4];
            if ((longlong *)param_1[4] == (longlong *)0x0) {
              plVar11 = param_1 + 2;
            }
            if ((*(uint *)((longlong)plVar11 + (ulonglong)(uVar5 >> 5) * 4) >> (uVar5 & 0x1f) & 1)
                != 0) {
              lVar7 = *param_1;
              lVar16 = (ulonglong)uVar5 * 0x80;
              lVar6 = lVar7 + lVar16;
              puVar2 = (undefined4 *)(lVar7 + lVar16);
              uVar14 = puVar2[1];
              uVar9 = puVar2[2];
              uVar10 = puVar2[3];
              *(undefined4 *)param_2 = *puVar2;
              *(undefined4 *)((longlong)param_2 + 4) = uVar14;
              *(undefined4 *)(param_2 + 1) = uVar9;
              *(undefined4 *)((longlong)param_2 + 0xc) = uVar10;
              if (*(char *)(lVar7 + 0x58 + lVar16) == '\x01') {
                *(undefined1 *)(lVar6 + 0x58) = 0;
              }
              if (*(longlong *)(lVar6 + 0x10) != 0) {
                plVar11 = (longlong *)(lVar6 + 0x30);
                if (*(longlong **)(lVar6 + 0x20) != (longlong *)0x0) {
                  plVar11 = *(longlong **)(lVar6 + 0x20);
                }
                (**(code **)(*plVar11 + 0x10))();
              }
              lVar6 = *param_1;
              if (*(int *)((longlong)param_1 + 0x34) != 0) {
                *(uint *)(lVar6 + (longlong)(int)param_1[6] * 0x80) = uVar5;
              }
              *(undefined4 *)(lVar6 + lVar16) = 0xffffffff;
              if (*(int *)((longlong)param_1 + 0x34) < 1) {
                uVar14 = 0xffffffff;
              }
              else {
                uVar14 = (undefined4)param_1[6];
              }
              *(undefined4 *)(lVar6 + lVar16 + 4) = uVar14;
              *(uint *)(param_1 + 6) = uVar5;
              *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
              plVar11 = param_1 + 2;
              if ((longlong *)param_1[4] != (longlong *)0x0) {
                plVar11 = (longlong *)param_1[4];
              }
              puVar3 = (uint *)((longlong)plVar11 + (ulonglong)(uVar5 >> 5) * 4);
              *puVar3 = *puVar3 & ~(1 << ((byte)uVar5 & 0x1f));
            }
          }
          break;
        }
        iVar4 = (int)plVar1[2];
      } while (iVar4 != -1);
    }
  }
  pcVar8 = (code *)*param_4;
  if (pcVar8 != (code *)0x0) {
    plVar11 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar11 = (longlong *)param_4[2];
    }
    uVar13 = (**(code **)(*plVar11 + 8))(plVar11);
    (*pcVar8)(uVar13);
  }
  return param_2;
}



// FUNCTION 1412ddc0a FUN_1412ddc0a body=114 status=ok
// SIG undefined FUN_1412ddc0a(void)

void FUN_1412ddc0a(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
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



// FUNCTION 1412ddc7c FUN_1412ddc7c body=115 status=ok
// SIG undefined FUN_1412ddc7c(void)

void FUN_1412ddc7c(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_5;
  FUN_14063fd42();
  local_28 = *param_3;
  local_30 = *param_2;
  FUN_1412ddcf0(param_1 + -0x418);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412ddcf0 FUN_1412ddcf0 body=996 status=ok
// SIG undefined FUN_1412ddcf0(void)

undefined8 FUN_1412ddcf0(longlong param_1,longlong *param_2,int *param_3)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *******pppppppuVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined1 *puVar16;
  longlong lVar17;
  undefined1 auStack_e8 [44];
  undefined4 local_bc;
  ulonglong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined7 uStack_9f;
  ushort local_88;
  byte local_80;
  undefined4 local_78;
  undefined8 ******local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (((((*(char *)(param_1 + 0x178) == '\x03') && (*(longlong *)(param_1 + 0x1a90) != 0)) &&
       (-1 < *(int *)(param_1 + 0x1b54))) &&
      (*(int *)(param_1 + 0x1b54) < *(int *)(*(longlong *)(param_1 + 0x1a90) + 0x368))) &&
     (((*(char *)(param_1 + 0x1b70) != '\x01' || (lVar7 = FUN_1447210f0(param_1), lVar7 == 0)) ||
      ((double)*(float *)(param_1 + 0x1b6c) < *(double *)(lVar7 + 0x6d0) ||
       (double)*(float *)(param_1 + 0x1b6c) == *(double *)(lVar7 + 0x6d0))))) {
    if (*param_3 == -1) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_1412de0d5(param_3);
    }
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1a90) + 0x360);
    lVar9 = (longlong)*(int *)(param_1 + 0x1b54) * 0x60;
    if (0 < *(int *)(lVar7 + 0x20 + lVar9)) {
      lVar7 = lVar7 + lVar9;
      lVar17 = 200;
      lVar9 = 0;
      uVar12 = 0xffffffff;
      do {
        lVar2 = *(longlong *)(lVar7 + 0x18);
        if (*(char *)(lVar2 + -0xc0 + lVar17) == '\b') {
          local_bc = uVar6;
          cVar4 = FUN_144a8e0e6(lVar2 + lVar17 + 8);
          if (cVar4 == '\0') {
            local_b8 = lVar2 + lVar17;
            local_a0 = 0;
            local_78 = 0;
            FUN_1456bb102(&local_a0,param_1);
            FUN_1447c3578(local_b8,local_70,&local_a0);
            uVar5 = FUN_144a7fca4(local_70);
            local_b8 = CONCAT71(local_b8._1_7_,uVar5);
            pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
            if (pcVar3 != (code *)0x0) {
              pppppppuVar10 = local_70;
              if (0x18 < local_58) {
                pppppppuVar10 = (undefined8 *******)local_70[0];
              }
              (*pcVar3)(pppppppuVar10);
            }
            if (0x18 < local_58) {
              FUN_1400020a8(local_70[0]);
            }
            FUN_144a5ac3a(&local_a0);
            uVar6 = local_bc;
            if ((char)local_b8 == '\0') goto LAB_1412dddbc;
          }
          uVar13 = (uint)lVar9;
          if ((int)*param_2 == -1) {
            local_b0 = param_1 + 0xc20;
            local_88 = 0;
            local_80 = 0;
            local_a8 = *(undefined8 *)(lVar2 + -0x80 + lVar17);
            local_b8 = CONCAT44(local_b8._4_4_,(int)CONCAT71((int7)((ulonglong)local_a8 >> 8),1));
            FUN_1401533ba(local_70,&local_a8,1);
            puVar16 = &local_a0;
            cVar4 = FUN_140459992(local_b0,local_70);
            if ((cVar4 != '\0') && (cVar4 = FUN_144a7fca4(&local_a0), cVar4 != '\0')) {
              local_b8 = local_b8 & 0xffffffff00000000;
              uVar12 = uVar13;
            }
            uVar13 = uVar12;
            pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
            if (pcVar3 != (code *)0x0) {
              if (0x18 < local_88) {
                puVar16 = (undefined1 *)CONCAT71(uStack_9f,local_a0);
              }
              (*pcVar3)(puVar16);
            }
            if (0x18 < local_88) {
              FUN_1400020a8(CONCAT71(uStack_9f,local_a0));
            }
            uVar12 = uVar13;
            uVar6 = local_bc;
            if ((char)local_b8 == '\0') break;
          }
          else {
            uVar6 = local_bc;
            if (((byte)local_bc & *(longlong *)(lVar2 + -0x80 + lVar17) == *param_2) != 0)
            goto LAB_1412dde65;
          }
        }
LAB_1412dddbc:
        uVar13 = uVar12;
        lVar9 = lVar9 + 1;
        lVar17 = lVar17 + 0x100;
        uVar12 = uVar13;
      } while (lVar9 < *(int *)(lVar7 + 0x20));
      if (uVar13 != 0xffffffff) {
LAB_1412dde65:
        uVar12 = *(uint *)(param_1 + 0x1b54);
        lVar7 = *(longlong *)(param_1 + 0x1a90);
        if (-1 < (int)uVar12 && lVar7 != 0) {
          uVar1 = *(uint *)(lVar7 + 0x368);
          if (((int)uVar12 < (int)uVar1) && (-1 < (int)uVar13)) {
            lVar9 = (ulonglong)uVar12 * 0x60 + *(longlong *)(lVar7 + 0x360);
            if (((int)uVar13 < *(int *)(lVar9 + 0x20)) &&
               (plVar14 = (longlong *)((ulonglong)uVar13 * 0x100 + *(longlong *)(lVar9 + 0x18)),
               plVar14 != (longlong *)0x0)) {
              uVar15 = 0;
              uVar8 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar7 + 0x360) + uVar15) == *plVar14) {
                  iVar11 = (int)(uVar15 >> 5) * -0x55555555;
                  uVar8 = 0;
                  if ((-1 < iVar11) && (iVar11 < (int)uVar1)) {
                    *(undefined1 *)(param_1 + 0x1b50) = 8;
                    uVar8 = FUN_140e77d08(param_1,iVar11,uVar13);
                  }
                  break;
                }
                uVar15 = uVar15 + 0x60;
              } while ((ulonglong)uVar1 * 0x60 != uVar15);
              goto LAB_1412dddda;
            }
          }
        }
      }
    }
  }
  uVar8 = 0;
LAB_1412dddda:
  if ((int)*param_2 != -1) {
    *param_2 = 0xffffffff;
  }
  if (*param_3 != -1) {
    param_3[0] = -1;
    param_3[1] = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412de0d5 FUN_1412de0d5 body=103 status=ok
// SIG undefined FUN_1412de0d5(void)

undefined8 FUN_1412de0d5(ulonglong *param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = 0;
  if ((uVar1 != 0) && (uVar1 != DAT_14cb7c580)) {
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    if (uVar1 == DAT_14c892e68) {
      uVar2 = 0;
    }
    else {
      uVar1 = *param_1;
      uVar2 = CONCAT71((int7)(uVar1 >> 8),uVar1 != DAT_14cb7c568 && uVar1 != DAT_14cb7c578);
    }
  }
  return uVar2;
}



// FUNCTION 1412de13c FUN_1412de13c body=40 status=ok
// SIG undefined FUN_1412de13c(void)

void FUN_1412de13c(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1458b9ef6(param_1);
    param_1 = param_1 + 0x68;
  }
  return;
}



// FUNCTION 1412de164 FUN_1412de164 body=121 status=ok
// SIG undefined FUN_1412de164(void)

void FUN_1412de164(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x450;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x380;
  FUN_14122c7a8(param_1 + 0x10,param_2);
  return;
}


