// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142a64713 FUN_142a64713 body=1289 status=ok
// SIG undefined FUN_142a64713(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a64713(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  undefined **local_70;
  undefined8 uStack_68;
  undefined8 *local_58;
  int local_50;
  undefined1 local_4c;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = 0;
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_FUN_149f76310 + lVar2),L"/Script/NetCore",
                  *(undefined8 *)((longlong)&PTR_u_ENetworkFailure_149f76318 + lVar2),
                  *(undefined8 *)((longlong)&PTR_DAT_149f76320 + lVar2));
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0x40);
  local_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/NetCore",&PTR_FUN_149f76890,1,&PTR_FUN_149f76860);
  local_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/NetCore",&PTR_FUN_149f76f40,1,&PTR_FUN_149f76f10);
  FUN_14098d3d2(FUN_142a62c2b,L"/Script/NetCore",L"ENetCloseResult",&DAT_14c997e40);
  local_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/NetCore",0,0,&PTR_FUN_149f79c50);
  local_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/NetCore",&PTR_FUN_149f7a1c0,1,&PTR_FUN_149f7a190);
  _DAT_14c997ec0 = 0;
  _DAT_14c997ec8 = 0;
  _DAT_14c997ea0 = 0;
  uRam000000014c997ea8 = 0;
  _DAT_14c997ecc = 0xffffffff00000080;
  _DAT_14c997ed4 = 0;
  DAT_14c997ee0 = 0;
  _DAT_14c997ee8 = 0;
  atexit(FUN_142a634f4);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14c997ef8,L"net.RemapStableSubobjects",&DAT_14c75f435,
                L"If enabled, attempts to remap stable subobjects when net.OptimizedRemapping is also enabled."
               );
  atexit(FUN_142a63ad7);
  FUN_1446f470e(&DAT_14c997f08,L"NetGroupOwner",1);
  FUN_1446f470e(&DAT_14c997f10,L"NetGroupReplay",1);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14c997f20,L"Net.RepGraph.ForceConnectionViewerPriority",&DAT_14c75f424,
                L"Force the connection\'s player controller and viewing pawn as topmost priority. Same as Net.ForceConnectionViewerPriority."
               );
  atexit(FUN_142a63e72);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14c997f30,L"Net.ForceConnectionViewerPriority",&DAT_14c75f424,
                L"Force the connection\'s player controller and viewing pawn as topmost priority.");
  atexit(FUN_142a63eb7);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14c997f40,L"net.EnableDetailedScopeCounters",&DAT_14c75f428,
                L"Enables detailed networking scope cycle counters. There are often lots of these which can negatively impact performance."
               );
  atexit(FUN_142a63efc);
  local_58 = (undefined8 *)0x8000000149f7a93e;
  local_44 = 7;
  local_50 = FUN_14577453c();
  local_4c = 1;
  FUN_146288d6c(&local_58);
  DAT_14c997f60 = 0;
  _DAT_14c997f68 = 0;
  _DAT_14c997f70 = 2;
  atexit(FUN_142a63fa6);
  DAT_14c997f78 = 0;
  _DAT_14c997f80 = 0;
  _DAT_14c997f88 = 2;
  atexit(FUN_142a63fd7);
  FUN_14615c184();
  atexit((_func_5014 *)&LAB_142a6400d);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14c9980a0,L"Net.IsPushModelEnabled",&DAT_14c998208,
                L"Whether or not Push Model is enabled. This networking mode allows game code to notify the networking system of changes, rather than scraping."
               );
  atexit(FUN_142a64012);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14c9980b0,L"Net.MakeBpPropertiesPushModel",&DAT_14c75f434,
                L"Whether or not properties declared in Blueprints will be forced to used Push Model"
               );
  atexit(FUN_142a64057);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,2,0x10);
  local_50 = 2;
  *local_58 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar1 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar1 == 0) {
    LOCK();
    UNLOCK();
    lVar1 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_58[2] = lVar1;
  *local_58 = &PTR_FUN_149f7d220;
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14152bcb8(&DAT_14c9980c0,L"Net.PushModelPrintHandles",
                L"Prints the list of replicated objects relevant to a specific connection",&local_58
               );
  if (local_50 != 0) {
    if (local_58 == (undefined8 *)0x0) goto LAB_142a64b02;
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
  }
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_142a64b02:
  atexit(FUN_142a6409c);
  DAT_14c9980d0 = 0;
  DAT_14c9980d8 = 0;
  atexit(FUN_142a640e1);
  DAT_14c9980e0 = 0;
  DAT_14c9980e8 = 0;
  atexit(FUN_142a6413c);
  local_70 = &PTR_FUN_149f7afe0;
  uStack_68 = 1;
  local_78 = 2;
  FUN_14282b410(L"/Script/NetCore",0,0,&PTR_FUN_149f7b000);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14c9981e8,L"net.MaxNumberOfAllowedTArrayChangesPerUpdate",&DAT_14c75f42c,
                &DAT_149dfb77a);
  atexit(FUN_142a643df);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14c9981f8,L"net.MaxNumberOfAllowedTArrayDeletionsPerUpdate",&DAT_14c75f430,
                &DAT_149dfb77a);
  atexit(FUN_142a64424);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a64c31 FUN_142a64c31 body=8276 status=ok
// SIG undefined FUN_142a64c31(void)

longlong *
FUN_142a64c31(longlong *param_1,longlong *param_2,ulonglong *param_3,ulonglong param_4,
             undefined8 param_5,longlong *param_6,longlong param_7,uint param_8)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong *puVar9;
  undefined8 uVar10;
  uint uVar11;
  ulonglong *puVar12;
  void *_Dst;
  longlong *plVar13;
  ulonglong *puVar14;
  longlong lVar15;
  undefined *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong *plVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  undefined8 *puVar23;
  bool bVar24;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  longlong *plStack_130;
  longlong *local_128;
  code *local_120;
  byte local_109;
  longlong *local_108;
  int local_fc;
  longlong *local_f8;
  ulonglong *local_f0;
  longlong *local_e8;
  longlong local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong *local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  int local_88;
  longlong *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if ((((param_6 != (longlong *)0x0) && ((int)param_6[1] != 0)) &&
      ((longlong *)*param_6 != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(*(longlong *)*param_6 + 0x30))(), cVar5 != '\0')) {
    if ((int)param_6[1] == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)*param_6;
    }
    (**(code **)(*plVar8 + 0x58))(plVar8,param_1,param_2);
    if (*param_1 != 0) goto LAB_142a664e2;
    plVar8 = (longlong *)param_1[1];
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar13 = plVar8 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
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
  }
  if (param_2 == (longlong *)0x0) goto LAB_142a663e7;
  puVar16 = (undefined *)param_2[1];
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9496d8) && (FUN_144b3d300(&DAT_14c9496d8), DAT_14c9496d8 == -1)) {
    local_128 = (longlong *)FUN_1446ddbd2();
    local_120 = FUN_140a4831c;
    local_138 = 0x1000000008001;
    plStack_130 = (longlong *)0x0;
    FUN_14000176a(&DAT_14c949688,L"FEnumProperty");
    atexit(FUN_1427e14fe);
    _Init_thread_footer(&DAT_14c9496d8);
  }
  if (DAT_14c949690 == 0) {
    bVar24 = puVar16 != (undefined *)0x0;
    if (puVar16 != &DAT_14c949688 && bVar24) {
      do {
        puVar16 = *(undefined **)(puVar16 + 0x30);
        bVar24 = puVar16 != (undefined *)0x0;
        if (puVar16 == &DAT_14c949688) break;
      } while (puVar16 != (undefined *)0x0);
    }
    if (bVar24) goto LAB_142a64d2c;
  }
  else if ((*(ulonglong *)(puVar16 + 0x18) & DAT_14c949690) != 0) {
LAB_142a64d2c:
    plVar8 = (longlong *)param_2[0xf];
    lVar7 = (**(code **)(*(longlong *)param_2[0xe] + 0x220))((longlong *)param_2[0xe],param_3);
    uVar17 = 0xffffffff;
    if (0 < (longlong)(int)plVar8[9]) {
      plVar13 = (longlong *)(plVar8[8] + 8);
      uVar18 = 0;
      do {
        if (*plVar13 == lVar7) goto LAB_142a64e43;
        uVar18 = uVar18 + 1;
        plVar13 = plVar13 + 2;
      } while ((longlong)(int)plVar8[9] != uVar18);
    }
    goto LAB_142a64e46;
  }
  puVar16 = (undefined *)param_2[1];
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c952108) && (FUN_144b3d300(&DAT_14c952108), DAT_14c952108 == -1)) {
    local_128 = (longlong *)FUN_1446ddbd2();
    local_120 = FUN_1468e0f50;
    plStack_130 = (longlong *)0x0;
    local_138 = 0x1008001;
    FUN_14000176a(&DAT_14c9520b8,L"FNumericProperty",0x1000000);
    atexit(FUN_142816f26);
    _Init_thread_footer(&DAT_14c952108);
  }
  if (DAT_14c9520c0 != 0) {
    if ((*(ulonglong *)(puVar16 + 0x18) & DAT_14c9520c0) == 0) goto LAB_142a64f12;
LAB_142a64def:
    plVar8 = (longlong *)(**(code **)(*param_2 + 0x1f0))(param_2);
    if (plVar8 != (longlong *)0x0) {
      lVar7 = (**(code **)(*param_2 + 0x220))(param_2,param_3);
      uVar17 = 0xffffffff;
      if (0 < (longlong)(int)plVar8[9]) {
        plVar13 = (longlong *)(plVar8[8] + 8);
        uVar18 = 0;
        do {
          if (*plVar13 == lVar7) goto LAB_142a64e43;
          uVar18 = uVar18 + 1;
          plVar13 = plVar13 + 2;
        } while ((longlong)(int)plVar8[9] != uVar18);
      }
      goto LAB_142a64e46;
    }
    cVar5 = (**(code **)(*param_2 + 0x1e0))(param_2);
    if (cVar5 != '\0') {
      lVar7 = (**(code **)(*param_2 + 0x240))(param_2,param_3);
      plVar8 = (longlong *)FUN_14001cc68(0x28,0x10);
      plVar8[1] = (longlong)&DAT_100000001;
      *plVar8 = (longlong)&PTR_FUN_149e43d90;
      plVar8[2] = (longlong)&PTR_FUN_149e43db0;
      plVar8[4] = lVar7;
LAB_142a65137:
      *(undefined4 *)(plVar8 + 3) = 3;
      goto LAB_142a6513e;
    }
    cVar5 = (**(code **)(*param_2 + 0x1e8))(param_2);
    if (cVar5 != '\0') {
      lVar7 = (**(code **)(*param_2 + 0x220))(param_2,param_3);
      plVar8 = (longlong *)FUN_14001cc68(0x28,0x10);
      plVar8[1] = (longlong)&DAT_100000001;
      *plVar8 = (longlong)&PTR_FUN_149e43d90;
      plVar8[2] = (longlong)&PTR_FUN_149e43db0;
      plVar8[4] = (longlong)(double)lVar7;
      goto LAB_142a65137;
    }
LAB_142a66364:
    *param_1 = 0;
    param_1[1] = 0;
    goto LAB_142a664e2;
  }
  bVar24 = puVar16 != (undefined *)0x0;
  if (puVar16 != &DAT_14c9520b8 && bVar24) {
    do {
      puVar16 = *(undefined **)(puVar16 + 0x30);
      bVar24 = puVar16 != (undefined *)0x0;
      if (puVar16 == &DAT_14c9520b8) break;
    } while (puVar16 != (undefined *)0x0);
  }
  if (bVar24) goto LAB_142a64def;
LAB_142a64f12:
  puVar23 = (undefined8 *)param_2[1];
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951d20) && (FUN_144b3d300(&DAT_14c951d20), DAT_14c951d20 == -1)) {
    local_128 = (longlong *)FUN_1446ddbd2();
    local_120 = FUN_14067a048;
    plStack_130 = (longlong *)0x0;
    local_138 = 0x28001;
    FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
    atexit(FUN_142811fe5);
    _Init_thread_footer(&DAT_14c951d20);
  }
  if (DAT_14c951cd8 != 0) {
    if ((puVar23[3] & DAT_14c951cd8) == 0) goto LAB_142a6504f;
LAB_142a64f55:
    bVar2 = *(byte *)((longlong)param_2 + 0x73);
    bVar3 = *(byte *)((longlong)param_3 + (ulonglong)*(byte *)((longlong)param_2 + 0x71));
    plVar8 = (longlong *)FUN_14001cc68(0x28,0x10);
    plVar8[1] = (longlong)&DAT_100000001;
    *plVar8 = (longlong)&PTR_FUN_149e43f30;
    plVar8[2] = (longlong)&PTR_FUN_149e43f50;
    *(bool *)(plVar8 + 4) = (bVar3 & bVar2) != 0;
    *(undefined4 *)(plVar8 + 3) = 4;
LAB_142a6513e:
    *param_1 = (longlong)(plVar8 + 2);
LAB_142a65141:
    param_1[1] = (longlong)plVar8;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      LOCK();
      plVar13 = plVar8 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 != 0) goto LAB_142a664e2;
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) goto LAB_142a664e2;
      lVar7 = *plVar8;
      goto LAB_142a65174;
    }
    goto LAB_142a664e2;
  }
  bVar24 = puVar23 != (undefined8 *)0x0;
  if (puVar23 != &DAT_14c951cd0 && bVar24) {
    do {
      puVar23 = (undefined8 *)puVar23[6];
      bVar24 = puVar23 != (undefined8 *)0x0;
      if (puVar23 == &DAT_14c951cd0) break;
    } while (puVar23 != (undefined8 *)0x0);
  }
  if (bVar24) goto LAB_142a64f55;
LAB_142a6504f:
  puVar16 = (undefined *)param_2[1];
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c963e88) && (FUN_144b3d300(&DAT_14c963e88), DAT_14c963e88 == -1)) {
    local_128 = (longlong *)FUN_1446ddbd2();
    local_120 = FUN_140dafe7a;
    plStack_130 = (longlong *)0x0;
    local_138 = 0xc001;
    FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0);
    atexit(FUN_142829758);
    _Init_thread_footer(&DAT_14c963e88);
  }
  if (DAT_14c963e40 == 0) {
    bVar24 = puVar16 != (undefined *)0x0;
    if (puVar16 != &DAT_14c963e38 && bVar24) {
      do {
        puVar16 = *(undefined **)(puVar16 + 0x30);
        bVar24 = puVar16 != (undefined *)0x0;
        if (puVar16 == &DAT_14c963e38) break;
      } while (puVar16 != (undefined *)0x0);
    }
    if (bVar24) goto LAB_142a65092;
  }
  else if ((*(ulonglong *)(puVar16 + 0x18) & DAT_14c963e40) != 0) {
LAB_142a65092:
    plVar8 = (longlong *)FUN_14001cc68(0x30,0x10);
    plVar8[1] = (longlong)&DAT_100000001;
    *plVar8 = (longlong)&PTR_FUN_149e43e60;
    FUN_14047c0ce(plVar8 + 2,param_3);
    *param_1 = (longlong)(plVar8 + 2);
    goto LAB_142a65141;
  }
  puVar16 = (undefined *)param_2[1];
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c963ee0) && (FUN_144b3d300(&DAT_14c963ee0), DAT_14c963ee0 == -1)) {
    local_128 = (longlong *)FUN_1446ddbd2();
    local_120 = FUN_140fb5c52;
    plStack_130 = (longlong *)0x0;
    local_138 = 0x40008001;
    FUN_14000176a(&DAT_14c963e90,L"FTextProperty",0x40000000,0);
    atexit(FUN_14282980e);
    _Init_thread_footer(&DAT_14c963ee0);
  }
  if (DAT_14c963e98 == 0) {
    bVar24 = puVar16 != (undefined *)0x0;
    if (puVar16 != &DAT_14c963e90 && bVar24) {
      do {
        puVar16 = *(undefined **)(puVar16 + 0x30);
        bVar24 = puVar16 != (undefined *)0x0;
        if (puVar16 == &DAT_14c963e90) break;
      } while (puVar16 != (undefined *)0x0);
    }
    if (bVar24) goto LAB_142a6520b;
  }
  else if ((*(ulonglong *)(puVar16 + 0x18) & DAT_14c963e98) != 0) {
LAB_142a6520b:
    if ((param_8 & 2) == 0) {
      plVar8 = (longlong *)*param_3;
      if (*(code **)(*plVar8 + 0x50) != FUN_144828418) {
        plVar8 = (longlong *)(**(code **)(*plVar8 + 0x50))();
      }
      FUN_1447a1fc0(plVar8);
      plVar8 = (longlong *)*param_3;
      pcVar4 = *(code **)(*plVar8 + 0x28);
      if (pcVar4 == FUN_14482841c) {
        plVar13 = plVar8 + 3;
        if (plVar8[5] != 0) {
          plVar13 = (longlong *)(plVar8[5] + 8);
        }
      }
      else if (pcVar4 == (code *)&LAB_14010c34c) {
        plVar13 = plVar8 + 2;
      }
      else {
        plVar13 = (longlong *)(*pcVar4)(plVar8);
      }
      plVar8 = (longlong *)FUN_14001cc68(0x30,0x10);
      plVar8[1] = (longlong)&DAT_100000001;
      *plVar8 = (longlong)&PTR_FUN_149e43e60;
      FUN_14047c0ce(plVar8 + 2,plVar13);
      *param_1 = (longlong)(plVar8 + 2);
      param_1[1] = (longlong)plVar8;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        LOCK();
        plVar13 = plVar8 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            lVar7 = *plVar8;
LAB_142a65174:
            (**(code **)(lVar7 + 0x10))(plVar8);
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_158);
          }
        }
      }
      goto LAB_142a664e2;
    }
    local_a8 = (longlong *)0x0;
    uStack_a0 = (ulonglong *)0x0;
    FUN_1467d1a5a(&local_a8,param_3,0,0);
    plVar8 = (longlong *)FUN_14001cc68(0x30,0x10);
    plVar8[1] = (longlong)&DAT_100000001;
    *plVar8 = (longlong)&PTR_FUN_149e43e60;
    *(undefined4 *)(plVar8 + 3) = 0;
    plVar8[2] = (longlong)&PTR_FUN_149e43e80;
    plVar8[4] = 0;
    goto LAB_142a64eac;
  }
  puVar16 = (undefined *)param_2[1];
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1)) {
    FUN_1446ddbd2();
    local_120 = FUN_140b31576;
    local_128 = (longlong *)&DAT_14c951a38;
    plStack_130 = (longlong *)0x0;
    local_138 = 0x208001;
    FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0);
    atexit(FUN_14280cbf7);
    _Init_thread_footer(&DAT_14c951ae0);
  }
  if (DAT_14c951a98 != 0) {
    if ((*(ulonglong *)(puVar16 + 0x18) & DAT_14c951a98) == 0) goto LAB_142a65572;
LAB_142a652e9:
    local_a8 = (longlong *)0x0;
    uStack_a0 = (ulonglong *)0x0;
    local_f8 = (longlong *)CONCAT71(local_f8._1_7_,(char)param_2[0xe]);
    (**(code **)(*(longlong *)param_2[0xf] + 0x178))();
    lVar7 = (longlong)(int)param_3[1];
    if (0 < lVar7) {
      local_108 = (longlong *)(longlong)*(int *)(param_2[0xf] + 0x34);
      lVar15 = 0;
      do {
        if ((int)param_3[1] == 0) {
          lVar20 = 0;
        }
        else {
          if (((ulonglong)local_f8 & 1) == 0) {
            uVar17 = *param_3;
          }
          else {
            uVar17 = *param_3;
            if ((uVar17 & 1) != 0) {
              uVar17 = ((longlong)uVar17 >> 0x18) + (longlong)param_3;
            }
          }
          lVar20 = uVar17 + lVar15;
        }
        plStack_130 = param_6;
        local_138 = param_5;
        local_120 = (code *)((ulonglong)local_120 & 0xffffffff00000000);
        local_128 = param_2;
        FUN_146f02ca8(&local_78,param_2[0xf],lVar20,param_4 & 0xfffffffff7ff7a7d);
        puVar9 = uStack_a0;
        if (local_78 != (longlong *)0x0) {
          lVar20 = (longlong)(int)uStack_a0;
          uVar11 = (int)uStack_a0 + 1;
          uStack_a0 = (ulonglong *)CONCAT44(uStack_a0._4_4_,uVar11);
          if (uStack_a0._4_4_ < uVar11) {
            FUN_14047d050(&local_a8,(ulonglong)puVar9 & 0xffffffff);
          }
          local_a8[lVar20 * 2] = (longlong)local_78;
          local_a8[lVar20 * 2 + 1] = (longlong)uStack_70;
          if (uStack_70 != (longlong *)0x0) {
            LOCK();
            *(int *)(uStack_70 + 1) = (int)uStack_70[1] + 1;
            UNLOCK();
          }
        }
        plVar8 = uStack_70;
        if (uStack_70 != (longlong *)0x0) {
          LOCK();
          plVar13 = uStack_70 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
            (**(code **)*uStack_70)(uStack_70);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
        lVar15 = lVar15 + (longlong)local_108;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    plVar8 = (longlong *)FUN_14001cc68(0x30,0x10);
    plVar8[1] = (longlong)&DAT_100000001;
    *plVar8 = (longlong)&DAT_149e44000;
    FUN_14047cd48(plVar8 + 2,&local_a8);
    *param_1 = (longlong)(plVar8 + 2);
    param_1[1] = (longlong)plVar8;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      LOCK();
      plVar13 = plVar8 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
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
    FUN_14047c710(local_a8,(ulonglong)uStack_a0 & 0xffffffff);
    plVar13 = local_a8;
    goto LAB_142a664d8;
  }
  bVar24 = puVar16 != (undefined *)0x0;
  if (puVar16 != &DAT_14c951a90 && bVar24) {
    do {
      puVar16 = *(undefined **)(puVar16 + 0x30);
      bVar24 = puVar16 != (undefined *)0x0;
      if (puVar16 == &DAT_14c951a90) break;
    } while (puVar16 != (undefined *)0x0);
  }
  if (bVar24) goto LAB_142a652e9;
LAB_142a65572:
  puVar16 = (undefined *)param_2[1];
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c952900) && (FUN_144b3d300(&DAT_14c952900), DAT_14c952900 == -1)) {
    local_128 = (longlong *)FUN_1446ddbd2();
    local_120 = FUN_1468e4cee;
    local_138 = 0x800000008001;
    plStack_130 = (longlong *)0x0;
    FUN_14000176a(&DAT_14c9528b0,L"FSetProperty",0x800000000000,0);
    atexit(FUN_142817fb7);
    _Init_thread_footer(&DAT_14c952900);
  }
  if (DAT_14c9528b8 == 0) {
    bVar24 = puVar16 != (undefined *)0x0;
    if (puVar16 != &DAT_14c9528b0 && bVar24) {
      do {
        puVar16 = *(undefined **)(puVar16 + 0x30);
        bVar24 = puVar16 != (undefined *)0x0;
        if (puVar16 == &DAT_14c9528b0) break;
      } while (puVar16 != (undefined *)0x0);
    }
    if (!bVar24) {
LAB_142a6580f:
      puVar16 = (undefined *)param_2[1];
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951f40) && (FUN_144b3d300(&DAT_14c951f40), DAT_14c951f40 == -1))
      {
        local_128 = (longlong *)FUN_1446ddbd2();
        local_120 = FUN_140eb3340;
        local_138 = 0x400000008001;
        plStack_130 = (longlong *)0x0;
        FUN_14000176a(&DAT_14c951ef0,L"FMapProperty",0x400000000000,0);
        atexit(FUN_142815b60);
        _Init_thread_footer(&DAT_14c951f40);
      }
      if (DAT_14c951ef8 == 0) {
        bVar24 = puVar16 != (undefined *)0x0;
        if (puVar16 != &DAT_14c951ef0 && bVar24) {
          do {
            puVar16 = *(undefined **)(puVar16 + 0x30);
            bVar24 = puVar16 != (undefined *)0x0;
            if (puVar16 == &DAT_14c951ef0) break;
          } while (puVar16 != (undefined *)0x0);
        }
        if (bVar24) goto LAB_142a65852;
      }
      else if ((*(ulonglong *)(puVar16 + 0x18) & DAT_14c951ef8) != 0) {
LAB_142a65852:
        local_e8 = (longlong *)FUN_14001cc68(0x60,0x10);
        local_e8[1] = (longlong)&DAT_100000001;
        *local_e8 = (longlong)&PTR_FUN_149e441a0;
        local_e8[6] = 0;
        local_e8[7] = 0;
        local_e8[8] = 0;
        local_e8[9] = 0;
        local_e8[2] = 0;
        local_e8[3] = 0;
        local_e8[4] = 0;
        local_e8[5] = 0;
        local_e8[10] = 0;
        local_e8[0xb] = 0;
        *(undefined4 *)((longlong)local_e8 + 0x3c) = 0x80;
        *(undefined4 *)(local_e8 + 8) = 0xffffffff;
        local_109 = *(byte *)(param_2 + 0x13);
        uVar11 = (uint)param_3[1];
        local_108 = (longlong *)0x0;
        uVar22 = 0;
        if (0 < (int)uVar11) {
          puVar9 = param_3 + 2;
          uVar21 = 0;
          do {
            if ((local_109 & 1) == 0) {
              if ((int)uVar21 < (int)param_3[5]) {
                puVar14 = (ulonglong *)param_3[4];
                if ((ulonglong *)param_3[4] == (ulonglong *)0x0) {
                  puVar14 = puVar9;
                }
LAB_142a658f7:
                uVar22 = uVar21;
                if ((*(uint *)((longlong)puVar14 + (ulonglong)(uVar21 >> 5) * 4) >> (uVar21 & 0x1f)
                    & 1) != 0) break;
              }
            }
            else if ((int)uVar21 < (int)param_3[3]) {
              puVar12 = (ulonglong *)*puVar9;
              puVar14 = (ulonglong *)(((longlong)puVar12 >> 0x18) + (longlong)puVar9);
              if (((ulonglong)puVar12 & 1) == 0) {
                puVar14 = puVar12;
              }
              goto LAB_142a658f7;
            }
            uVar21 = uVar21 + 1;
            uVar22 = uVar11;
          } while (uVar11 != uVar21);
        }
        local_f8 = local_e8 + 2;
        local_d0 = (longlong)(int)param_2[0x10];
        local_fc = *(int *)((longlong)param_2 + 0x94);
        local_f0 = param_3 + 2;
        param_4 = param_4 & 0xfffffffff7ff7a7d;
        local_d8 = 0x1000000008001;
        do {
          plVar8 = local_e8;
          if ((local_109 & 1) == 0) {
            if (((int)uVar22 < 0) || ((int)param_3[5] <= (int)uVar22)) goto LAB_142a66144;
            puVar9 = (ulonglong *)param_3[4];
            if ((ulonglong *)param_3[4] == (ulonglong *)0x0) {
              puVar9 = local_f0;
            }
            if ((*(uint *)((longlong)puVar9 + (ulonglong)(uVar22 >> 5) * 4) >> (uVar22 & 0x1f) & 1)
                == 0) goto LAB_142a66144;
            iVar6 = uVar22 * local_fc;
            local_120 = (code *)CONCAT44(local_120._4_4_,param_8);
            plStack_130 = param_6;
            local_138 = param_5;
            local_128 = param_2;
            FUN_146f02ca8(&local_a8,param_2[0xe],*param_3 + (longlong)iVar6,param_4);
            lVar7 = (longlong)iVar6 + *param_3;
          }
          else {
            if (((int)uVar22 < 0) || ((int)param_3[3] <= (int)uVar22)) goto LAB_142a66144;
            uVar17 = *local_f0;
            uVar18 = ((longlong)uVar17 >> 0x18) + (longlong)local_f0;
            if ((uVar17 & 1) == 0) {
              uVar18 = uVar17;
            }
            if ((*(uint *)(uVar18 + (ulonglong)(uVar22 >> 5) * 4) >> (uVar22 & 0x1f) & 1) == 0)
            goto LAB_142a66144;
            uVar17 = *param_3;
            uVar18 = ((longlong)uVar17 >> 0x18) + (longlong)param_3;
            if ((uVar17 & 1) == 0) {
              uVar18 = uVar17;
            }
            local_e0 = (longlong)(int)(uVar22 * local_fc);
            local_120 = (code *)CONCAT44(local_120._4_4_,param_8);
            plStack_130 = param_6;
            local_138 = param_5;
            local_128 = param_2;
            FUN_146f02ca8(&local_a8,param_2[0xe],uVar18 + local_e0,param_4);
            uVar17 = *param_3;
            uVar18 = ((longlong)uVar17 >> 0x18) + (longlong)param_3;
            if ((uVar17 & 1) == 0) {
              uVar18 = uVar17;
            }
            lVar7 = uVar18 + local_e0;
          }
          local_120 = (code *)CONCAT44(local_120._4_4_,param_8);
          plStack_130 = param_6;
          local_138 = param_5;
          local_128 = param_2;
          FUN_146f02ca8(&local_78,param_2[0xf],lVar7 + local_d0,param_4);
          if ((local_a8 != (longlong *)0x0) && (local_78 != (longlong *)0x0)) {
            local_b8 = (longlong **)0x0;
            uStack_b0 = 0;
            cVar5 = (**(code **)(*local_a8 + 0x58))(local_a8,&local_b8);
            if (cVar5 == '\0') {
              if ((local_109 & 1) == 0) {
                uVar18 = *param_3;
              }
              else {
                uVar17 = *param_3;
                uVar18 = ((longlong)uVar17 >> 0x18) + (longlong)param_3;
                if ((uVar17 & 1) == 0) {
                  uVar18 = uVar17;
                }
              }
              local_138 = 0;
              plStack_130 = (longlong *)0x0;
              local_120 = (code *)0x0;
              local_128 = (longlong *)((ulonglong)local_128 & 0xffffffff00000000);
              (**(code **)(*(longlong *)param_2[0xe] + 0xf0))
                        ((longlong *)param_2[0xe],&local_b8,
                         (longlong)(int)(uVar22 * local_fc) + uVar18,0);
              if ((int)(uint)uStack_b0 < 2) {
                FUN_140002266(&local_c8,L"Unparsed Key %d",local_108);
                if (local_b8 != (longlong **)0x0) {
                  FUN_1400020a8();
                }
                local_b8 = (longlong **)CONCAT44(uStack_c4,local_c8);
                uStack_b0 = CONCAT44(uStack_bc,uStack_c0);
              }
            }
            if (param_2[0xe] != 0) {
              puVar16 = *(undefined **)(param_2[0xe] + 8);
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c9496d8) &&
                 (FUN_144b3d300(&DAT_14c9496d8), DAT_14c9496d8 == -1)) {
                local_128 = (longlong *)FUN_1446ddbd2();
                local_120 = FUN_140a4831c;
                local_138 = local_d8;
                plStack_130 = (longlong *)0x0;
                FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
                atexit(FUN_1427e14fe);
                _Init_thread_footer(&DAT_14c9496d8);
              }
              if (DAT_14c949690 == 0) {
                bVar24 = puVar16 != (undefined *)0x0;
                if (puVar16 != &DAT_14c949688 && bVar24) {
                  do {
                    puVar16 = *(undefined **)(puVar16 + 0x30);
                    bVar24 = puVar16 != (undefined *)0x0;
                    if (puVar16 == &DAT_14c949688) break;
                  } while (puVar16 != (undefined *)0x0);
                }
                if (bVar24) goto LAB_142a65d78;
LAB_142a65db9:
                if (param_2[0xe] != 0) {
                  puVar16 = *(undefined **)(param_2[0xe] + 8);
                  if ((*(int *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x110) < DAT_14c9520b0) &&
                     (FUN_144b3d300(&DAT_14c9520b0), DAT_14c9520b0 == -1)) {
                    local_128 = (longlong *)FUN_1446ddbd2();
                    local_120 = FUN_1409e12a0;
                    plStack_130 = (longlong *)0x0;
                    local_138 = 0xa001;
                    FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
                    atexit(FUN_142816ef9);
                    _Init_thread_footer(&DAT_14c9520b0);
                  }
                  if (DAT_14c952068 == 0) {
                    bVar24 = puVar16 != (undefined *)0x0;
                    if (puVar16 != &DAT_14c952060 && bVar24) {
                      do {
                        puVar16 = *(undefined **)(puVar16 + 0x30);
                        bVar24 = puVar16 != (undefined *)0x0;
                        if (puVar16 == &DAT_14c952060) break;
                      } while (puVar16 != (undefined *)0x0);
                    }
                  }
                  else {
                    bVar24 = (*(ulonglong *)(puVar16 + 0x18) & DAT_14c952068) != 0;
                  }
                  if (((param_8 & 1) == 0) && (bVar24)) goto LAB_142a65e42;
                }
              }
              else {
                if ((*(ulonglong *)(puVar16 + 0x18) & DAT_14c949690) == 0) goto LAB_142a65db9;
LAB_142a65d78:
                if ((param_8 & 1) != 0) goto LAB_142a65e7b;
LAB_142a65e42:
                FUN_146f02c1c(&local_c8,&local_b8);
                if (local_b8 != (longlong **)0x0) {
                  FUN_1400020a8();
                }
                local_b8 = (longlong **)CONCAT44(uStack_c4,local_c8);
                uStack_b0 = CONCAT44(uStack_bc,uStack_c0);
              }
            }
LAB_142a65e7b:
            FUN_14047c142(local_f8,&local_b8,&local_78);
            if (local_b8 != (longlong **)0x0) {
              FUN_1400020a8();
            }
          }
          plVar8 = uStack_70;
          if (uStack_70 != (longlong *)0x0) {
            LOCK();
            plVar13 = uStack_70 + 1;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)*plVar13 == 0) {
              (**(code **)*uStack_70)(uStack_70);
              LOCK();
              piVar1 = (int *)((longlong)plVar8 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar8 + 0x10))(plVar8);
              }
            }
          }
          puVar9 = uStack_a0;
          if (uStack_a0 != (ulonglong *)0x0) {
            LOCK();
            puVar12 = uStack_a0 + 1;
            *(int *)puVar12 = (int)*puVar12 + -1;
            UNLOCK();
            if ((int)*puVar12 == 0) {
              (**(code **)*uStack_a0)(uStack_a0);
              LOCK();
              piVar1 = (int *)((longlong)puVar9 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*puVar9 + 0x10))(puVar9);
              }
            }
          }
          uVar11 = (uint)param_3[1];
          uVar21 = uVar22 + 1;
          uVar22 = uVar21;
          if ((int)uVar21 < (int)uVar11) {
            do {
              if ((local_109 & 1) == 0) {
                if ((-2 < (int)(uVar21 - 1)) && ((int)uVar21 < (int)param_3[5])) {
                  puVar12 = (ulonglong *)param_3[4];
                  if ((ulonglong *)param_3[4] == (ulonglong *)0x0) {
                    puVar12 = local_f0;
                  }
LAB_142a65f42:
                  uVar22 = uVar21;
                  if ((*(uint *)((longlong)puVar12 + (ulonglong)(uVar21 >> 5) * 4) >>
                       (uVar21 & 0x1f) & 1) != 0) break;
                }
              }
              else if ((-2 < (int)(uVar21 - 1)) && ((int)uVar21 < (int)param_3[3])) {
                puVar9 = (ulonglong *)*local_f0;
                puVar12 = (ulonglong *)(((longlong)puVar9 >> 0x18) + (longlong)local_f0);
                if (((ulonglong)puVar9 & 1) == 0) {
                  puVar12 = puVar9;
                }
                goto LAB_142a65f42;
              }
              uVar21 = uVar21 + 1;
              uVar22 = uVar11;
            } while (uVar11 != uVar21);
          }
          local_108 = (longlong *)(ulonglong)((int)local_108 + 1);
        } while( true );
      }
      puVar16 = (undefined *)param_2[1];
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c952a58) && (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1))
      {
        local_128 = (longlong *)FUN_1446ddbd2();
        local_120 = FUN_1403a682c;
        plStack_130 = (longlong *)0x0;
        local_138 = 0x108001;
        FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
        atexit(FUN_142818c9e);
        _Init_thread_footer(&DAT_14c952a58);
      }
      if (DAT_14c952a10 == 0) {
        bVar24 = puVar16 != (undefined *)0x0;
        if (puVar16 != &DAT_14c952a08 && bVar24) {
          do {
            puVar16 = *(undefined **)(puVar16 + 0x30);
            bVar24 = puVar16 != (undefined *)0x0;
            if (puVar16 == &DAT_14c952a08) break;
          } while (puVar16 != (undefined *)0x0);
        }
        if (bVar24) goto LAB_142a65a27;
LAB_142a66237:
        puVar16 = (undefined *)param_2[1];
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c952478) &&
           (FUN_144b3d300(&DAT_14c952478), DAT_14c952478 == -1)) {
          FUN_1446f4b16();
          local_120 = FUN_1403a5f94;
          local_128 = (longlong *)&DAT_14c951c78;
          plStack_130 = (longlong *)0x0;
          local_138 = 0x4018001;
          FUN_14000176a(&DAT_14c952428,L"FObjectProperty",0x10000,0);
          atexit(FUN_1428170e8);
          _Init_thread_footer(&DAT_14c952478);
        }
        if (DAT_14c952430 == 0) {
          bVar24 = puVar16 != (undefined *)0x0;
          if (puVar16 != &DAT_14c952428 && bVar24) {
            do {
              puVar16 = *(undefined **)(puVar16 + 0x30);
              bVar24 = puVar16 != (undefined *)0x0;
              if (puVar16 == &DAT_14c952428) break;
            } while (puVar16 != (undefined *)0x0);
          }
          if (bVar24) goto LAB_142a663a5;
        }
        else if ((*(ulonglong *)(puVar16 + 0x18) & DAT_14c952430) != 0) {
LAB_142a663a5:
          lVar7 = (**(code **)(*param_2 + 0x210))(param_2,param_3);
          if ((lVar7 != 0) &&
             (((*(byte *)((longlong)param_2 + 0x3e) & 2) != 0 ||
              ((param_7 != 0 && ((*(ulonglong *)(param_7 + 0x38) & 0x2000000000000) != 0)))))) {
            plVar8 = (longlong *)FUN_14001cc68(0x60,0x10);
            plVar8[1] = (longlong)&DAT_100000001;
            *plVar8 = (longlong)&PTR_FUN_149e441a0;
            local_108 = plVar8 + 2;
            plVar8[6] = 0;
            plVar8[7] = 0;
            plVar8[8] = 0;
            plVar8[9] = 0;
            plVar8[2] = 0;
            plVar8[3] = 0;
            plVar8[4] = 0;
            plVar8[5] = 0;
            plVar8[10] = 0;
            plVar8[0xb] = 0;
            *(undefined4 *)((longlong)plVar8 + 0x3c) = 0x80;
            *(undefined4 *)(plVar8 + 8) = 0xffffffff;
            local_a8 = (longlong *)0x0;
            uStack_a0 = (ulonglong *)0x0;
            FUN_1401031ac(*(undefined8 *)(lVar7 + 0x10),0);
            FUN_1468396b2(local_108,&DAT_14c998228,&local_a8);
            if (local_a8 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            if (plVar8 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
              UNLOCK();
            }
            lVar15 = (**(code **)(*param_2 + 0x210))(param_2,param_3);
            plStack_130 = param_6;
            local_138 = param_5;
            local_128 = (longlong *)((ulonglong)local_128 & 0xffffffff00000000);
            cVar5 = FUN_142a66c8c(*(undefined8 *)(lVar15 + 0x10),lVar7,local_108,param_4);
            if (plVar8 != (longlong *)0x0) {
              LOCK();
              plVar13 = plVar8 + 1;
              *(int *)plVar13 = (int)*plVar13 + -1;
              UNLOCK();
              if ((int)*plVar13 == 0) {
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
            if (cVar5 != '\0') {
              plVar13 = (longlong *)FUN_14001cc68(0x30,0x10);
              plVar13[1] = (longlong)&DAT_100000001;
              *plVar13 = (longlong)&PTR_FUN_149e440d0;
              if (plVar8 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
                UNLOCK();
              }
              plVar13[2] = (longlong)&PTR_FUN_149e440f0;
              plVar13[4] = (longlong)local_108;
              plVar13[5] = (longlong)plVar8;
              *(undefined4 *)(plVar13 + 3) = 6;
              *param_1 = (longlong)(plVar13 + 2);
              param_1[1] = (longlong)plVar13;
              if (plVar13 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
                UNLOCK();
                LOCK();
                plVar19 = plVar13 + 1;
                *(int *)plVar19 = (int)*plVar19 + -1;
                UNLOCK();
                if ((int)*plVar19 == 0) {
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
            if (plVar8 != (longlong *)0x0) {
              LOCK();
              plVar13 = plVar8 + 1;
              *(int *)plVar13 = (int)*plVar13 + -1;
              UNLOCK();
              if ((int)*plVar13 == 0) {
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
            if (cVar5 != '\0') goto LAB_142a664e2;
            goto LAB_142a66364;
          }
        }
LAB_142a663e7:
        local_a8 = (longlong *)0x0;
        uStack_a0 = (ulonglong *)0x0;
        local_120 = (code *)0x0;
        local_128 = (longlong *)((ulonglong)local_128 & 0xffffffff00000000);
        local_138 = 0;
        plStack_130 = (longlong *)0x0;
        (**(code **)(*param_2 + 0xf0))(param_2,&local_a8,param_3,0);
        plVar8 = (longlong *)FUN_14001cc68(0x30,0x10);
        plVar8[1] = (longlong)&DAT_100000001;
        *plVar8 = (longlong)&PTR_FUN_149e43e60;
        *(undefined4 *)(plVar8 + 3) = 0;
        plVar8[2] = (longlong)&PTR_FUN_149e43e80;
        plVar8[4] = 0;
LAB_142a66460:
        plVar13 = local_a8;
        plVar19 = plVar8 + 2;
        lVar7 = (longlong)(int)uStack_a0;
        *(int *)(plVar8 + 5) = (int)uStack_a0;
        if (lVar7 == 0) goto LAB_142a66495;
        FUN_1446dd670(plVar8 + 4,(ulonglong)uStack_a0 & 0xffffffff,0);
        _Dst = (void *)plVar8[4];
        goto LAB_142a6648e;
      }
      if ((*(ulonglong *)(puVar16 + 0x18) & DAT_14c952a10) == 0) goto LAB_142a66237;
LAB_142a65a27:
      lVar7 = param_2[0xe];
      plVar8 = *(longlong **)(lVar7 + 0xb8);
      if (DAT_14c998258 == 0) {
        uVar10 = FUN_145c518d9();
        DAT_14c998258 = FUN_140002ddd(FUN_146289137,uVar10,L"JsonObjectWrapper");
        lVar7 = param_2[0xe];
      }
      if ((plVar8 != (longlong *)0x0) && (lVar7 != DAT_14c998258)) {
        (**(code **)(*plVar8 + 8))(plVar8,&local_a8);
        if (uStack_a0._5_1_ < '\0') {
          local_a8 = (longlong *)0x0;
          uStack_a0 = (ulonglong *)0x0;
          local_128 = (longlong *)0x0;
          plStack_130 = (longlong *)((ulonglong)plStack_130 & 0xffffffff00000000);
          local_138 = 0;
          (**(code **)(*plVar8 + 0x70))(plVar8,&local_a8,param_3,0);
          plVar8 = (longlong *)FUN_14001cc68(0x30,0x10);
          plVar8[1] = (longlong)&DAT_100000001;
          *plVar8 = (longlong)&PTR_FUN_149e43e60;
          *(undefined4 *)(plVar8 + 3) = 0;
          plVar8[2] = (longlong)&PTR_FUN_149e43e80;
          plVar8[4] = 0;
          goto LAB_142a66460;
        }
      }
      plVar8 = (longlong *)FUN_14001cc68(0x60,0x10);
      plVar8[1] = (longlong)&DAT_100000001;
      *plVar8 = (longlong)&PTR_FUN_149e441a0;
      plVar8[6] = 0;
      plVar8[7] = 0;
      plVar8[8] = 0;
      plVar8[9] = 0;
      plVar8[2] = 0;
      plVar8[3] = 0;
      plVar8[4] = 0;
      plVar8[5] = 0;
      plVar8[10] = 0;
      plVar8[0xb] = 0;
      *(undefined4 *)((longlong)plVar8 + 0x3c) = 0x80;
      *(undefined4 *)(plVar8 + 8) = 0xffffffff;
      if (plVar8 == (longlong *)0x0) {
        local_128 = (longlong *)CONCAT44(local_128._4_4_,param_8);
        plStack_130 = param_6;
        local_138 = param_5;
        cVar5 = FUN_142a66c8c(param_2[0xe],param_3,0x10,param_4 & 0xfffffffff7ff7a7d);
        if (cVar5 == '\0') goto LAB_142a66364;
LAB_142a662b1:
        plVar13 = (longlong *)FUN_14001cc68(0x30,0x10);
        plVar13[1] = (longlong)&DAT_100000001;
        *plVar13 = (longlong)&PTR_FUN_149e440d0;
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
        }
        plVar13[2] = (longlong)&PTR_FUN_149e440f0;
        plVar13[4] = (longlong)(plVar8 + 2);
        plVar13[5] = (longlong)plVar8;
        *(undefined4 *)(plVar13 + 3) = 6;
        *param_1 = (longlong)(plVar13 + 2);
        param_1[1] = (longlong)plVar13;
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
          UNLOCK();
          LOCK();
          plVar19 = plVar13 + 1;
          *(int *)plVar19 = (int)*plVar19 + -1;
          UNLOCK();
          if ((int)*plVar19 == 0) {
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
        bVar24 = true;
        if (plVar8 == (longlong *)0x0) goto LAB_142a664e2;
      }
      else {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        local_128 = (longlong *)CONCAT44(local_128._4_4_,param_8);
        plStack_130 = param_6;
        local_138 = param_5;
        cVar5 = FUN_142a66c8c(param_2[0xe],param_3,plVar8 + 2,param_4 & 0xfffffffff7ff7a7d);
        LOCK();
        plVar13 = plVar8 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
        if (cVar5 != '\0') goto LAB_142a662b1;
        bVar24 = false;
      }
      LOCK();
      plVar13 = plVar8 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
      if (bVar24) goto LAB_142a664e2;
      goto LAB_142a66364;
    }
  }
  else if ((*(ulonglong *)(puVar16 + 0x18) & DAT_14c9528b8) == 0) goto LAB_142a6580f;
  local_78 = (longlong *)0x0;
  uStack_70 = (longlong *)0x0;
  local_a8 = (longlong *)param_2[0xe];
  local_b8 = &local_a8;
  local_98 = (undefined4)param_2[0xf];
  uStack_94 = *(undefined4 *)((longlong)param_2 + 0x7c);
  uStack_90 = (undefined4)param_2[0x10];
  uStack_8c = *(undefined4 *)((longlong)param_2 + 0x84);
  local_88 = (int)param_2[0x11];
  uStack_b0 = 0xffffffffffffffff;
  uStack_a0 = param_3;
  FUN_14000a0a0(&local_b8);
  if (-1 < (int)(uint)uStack_b0) {
    do {
      plVar8 = local_b8[1];
      if ((int)plVar8[5] <= (int)(uint)uStack_b0) break;
      plVar13 = plVar8 + 2;
      if ((longlong *)plVar8[4] != (longlong *)0x0) {
        plVar13 = (longlong *)plVar8[4];
      }
      if ((*(uint *)((longlong)plVar13 + (ulonglong)((uint)uStack_b0 >> 5) * 4) >>
           ((uint)uStack_b0 & 0x1f) & 1) == 0) break;
      plStack_130 = param_6;
      local_138 = param_5;
      local_120 = (code *)((ulonglong)local_120 & 0xffffffff00000000);
      local_128 = param_2;
      FUN_146f02ca8(&local_c8,param_2[0xe],
                    (longlong)(int)(uint)uStack_b0 * (longlong)local_88 + *uStack_a0,
                    param_4 & 0xfffffffff7ff7a7d);
      plVar8 = uStack_70;
      lVar7 = CONCAT44(uStack_c4,local_c8);
      if (lVar7 != 0) {
        lVar15 = (longlong)(int)uStack_70;
        uVar11 = (int)uStack_70 + 1;
        uStack_70 = (longlong *)CONCAT44(uStack_70._4_4_,uVar11);
        if (uStack_70._4_4_ < uVar11) {
          FUN_14047d050(&local_78,(ulonglong)plVar8 & 0xffffffff);
          lVar7 = CONCAT44(uStack_c4,local_c8);
        }
        local_78[lVar15 * 2] = lVar7;
        lVar7 = CONCAT44(uStack_bc,uStack_c0);
        local_78[lVar15 * 2 + 1] = lVar7;
        if (lVar7 != 0) {
          LOCK();
          *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
          UNLOCK();
        }
      }
      plVar8 = (longlong *)CONCAT44(uStack_bc,uStack_c0);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar8 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
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
      FUN_14000a0a0(&local_b8);
    } while (-1 < (int)(uint)uStack_b0);
  }
  plVar8 = (longlong *)FUN_14001cc68(0x30,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&DAT_149e44000;
  FUN_14047cd48(plVar8 + 2,&local_78);
  *param_1 = (longlong)(plVar8 + 2);
  param_1[1] = (longlong)plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    plVar13 = plVar8 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
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
  FUN_14047c710(local_78,(ulonglong)uStack_70 & 0xffffffff);
  plVar13 = local_78;
LAB_142a664d8:
  if (plVar13 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_142a664e2:
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
LAB_142a64e43:
  uVar17 = uVar18 & 0xffffffff;
LAB_142a64e46:
  (**(code **)(*plVar8 + 0x2b8))(plVar8,&local_a8,uVar17);
  plVar8 = (longlong *)FUN_14001cc68(0x30,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_149e43e60;
  *(undefined4 *)(plVar8 + 3) = 0;
  plVar8[2] = (longlong)&PTR_FUN_149e43e80;
  plVar8[4] = 0;
LAB_142a64eac:
  plVar13 = local_a8;
  plVar19 = plVar8 + 2;
  lVar7 = (longlong)(int)uStack_a0;
  *(int *)(plVar8 + 5) = (int)uStack_a0;
  if (lVar7 == 0) {
LAB_142a66495:
    *(undefined4 *)((longlong)plVar8 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(plVar8 + 4,(int)uStack_a0,0);
    _Dst = (void *)plVar8[4];
LAB_142a6648e:
    memcpy(_Dst,plVar13,lVar7 * 2);
  }
  *(undefined4 *)(plVar8 + 3) = 2;
  *param_1 = (longlong)plVar19;
  param_1[1] = (longlong)plVar8;
  plVar13 = local_a8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    plVar19 = plVar8 + 1;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)*plVar19 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar13 = local_a8;
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        plVar13 = local_a8;
      }
    }
  }
  goto LAB_142a664d8;
LAB_142a66144:
  plVar13 = (longlong *)FUN_14001cc68(0x30,0x10);
  plVar13[1] = (longlong)&DAT_100000001;
  *plVar13 = (longlong)&PTR_FUN_149e440d0;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  plVar13[2] = (longlong)&PTR_FUN_149e440f0;
  plVar13[4] = (longlong)local_f8;
  plVar13[5] = (longlong)plVar8;
  *(undefined4 *)(plVar13 + 3) = 6;
  *param_1 = (longlong)(plVar13 + 2);
  param_1[1] = (longlong)plVar13;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    LOCK();
    plVar19 = plVar13 + 1;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)*plVar19 == 0) {
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
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar8 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
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
  goto LAB_142a664e2;
}



// FUNCTION 142a66c8c FUN_142a66c8c body=646 status=ok
// SIG undefined FUN_142a66c8c(void)

ulonglong FUN_142a66c8c(longlong *param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
                       ulonglong param_5,undefined8 param_6,uint param_7)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 unaff_RSI;
  undefined7 uVar5;
  ulonglong uVar4;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_d8 [32];
  ulonglong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  uint local_a0;
  longlong *local_90;
  undefined8 local_88;
  ulonglong local_80;
  longlong *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar6 = 0x20002000;
  if (param_5 != 0) {
    uVar6 = param_5;
  }
  local_88 = param_3;
  if (DAT_14c998258 == (longlong *)0x0) {
    uVar3 = FUN_145c518d9();
    DAT_14c998258 = (longlong *)FUN_140002ddd(FUN_146289137,uVar3,L"JsonObjectWrapper");
  }
  uVar5 = (undefined7)((ulonglong)unaff_RSI >> 8);
  if (DAT_14c998258 == param_1) {
    uVar4 = CONCAT71(uVar5,1);
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_145716012(local_88);
    }
  }
  else {
    uVar4 = CONCAT71(uVar5,1);
    for (; param_1 != (longlong *)0x0;
        param_1 = (longlong *)(**(code **)(*param_1 + 0x2b0))(param_1)) {
      for (lVar8 = param_1[10]; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x18)) {
        local_90 = param_1;
        if ((~*(uint *)(*(longlong *)(lVar8 + 8) + 0x18) & 0x8001) == 0) {
LAB_142a66d50:
          if ((((param_4 == 0) || (param_4 == 0xffffffffffffffff)) ||
              ((*(ulonglong *)(lVar8 + 0x38) & param_4) != 0)) &&
             ((uVar6 != 0xffffffffffffffff && ((*(ulonglong *)(lVar8 + 0x38) & uVar6) == 0)))) {
            FUN_140002850(lVar8,&local_70);
            if ((param_7 & 1) == 0) {
              FUN_146f02c1c(&local_60,&local_70);
              if (CONCAT44(uStack_6c,local_70) != 0) {
                FUN_1400020a8();
              }
              local_70 = (undefined4)local_60;
              uStack_6c = local_60._4_4_;
              uStack_68 = (undefined4)uStack_58;
              uStack_64 = uStack_58._4_4_;
            }
            local_a0 = param_7;
            local_b0 = param_6;
            local_a8 = 0;
            local_b8 = uVar6;
            FUN_146f02ca8(&local_80,lVar8,*(int *)(lVar8 + 0x44) + param_2,param_4);
            uVar4 = local_80;
            if (local_80 != 0) {
              uStack_58 = &local_80;
              local_60 = &local_70;
              FUN_146f03ac8(local_88,local_4c,&local_60);
            }
            plVar7 = local_78;
            if (local_78 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_78 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_78)(local_78);
                LOCK();
                piVar2 = (int *)((longlong)plVar7 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar7 + 0x10))(plVar7);
                }
              }
            }
            if (CONCAT44(uStack_6c,local_70) != 0) {
              FUN_1400020a8();
            }
            if (uVar4 == 0) {
              uVar4 = 0;
              goto LAB_142a66eab;
            }
          }
          plVar7 = (longlong *)(lVar8 + 0x18);
          do {
            for (lVar8 = *plVar7; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x18)) {
              if ((~*(uint *)(*(longlong *)(lVar8 + 8) + 0x18) & 0x8001) == 0) goto LAB_142a66d50;
            }
            local_90 = (longlong *)(**(code **)(*local_90 + 0x2b0))();
            plVar7 = local_90 + 10;
          } while (local_90 != (longlong *)0x0);
          uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
          goto LAB_142a66eab;
        }
        uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
      }
    }
  }
LAB_142a66eab:
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a66f13 FUN_142a66f13 body=2644 status=ok
// SIG undefined FUN_142a66f13(void)

undefined8
FUN_142a66f13(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined *param_7,char param_8,longlong param_9,
             undefined8 param_10)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined *puVar9;
  bool bVar10;
  bool bVar11;
  undefined1 auStack_1f8 [32];
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined *local_1c8;
  code *local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined *local_190;
  undefined8 local_188;
  undefined8 local_180;
  longlong *local_178;
  longlong *local_170 [2];
  longlong *local_160 [2];
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  longlong *local_148 [2];
  undefined8 local_138;
  longlong *local_130;
  longlong local_128;
  longlong *plStack_120;
  longlong *local_118 [2];
  undefined8 local_108;
  longlong *plStack_100;
  longlong *local_f0 [2];
  longlong *local_e0 [2];
  undefined8 local_d0;
  longlong *local_c8;
  wchar_t **local_c0;
  ulonglong *local_b8;
  longlong *local_b0;
  undefined4 local_a8;
  wchar_t *local_a0;
  undefined4 local_98 [2];
  undefined1 local_90 [16];
  undefined4 local_80;
  undefined1 local_70 [16];
  ulonglong local_60 [4];
  
  local_198 = param_10;
  local_190 = param_7;
  local_188 = param_5;
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_1a8 = param_3;
  local_1a0 = param_4;
  if (*param_1 == 0) {
    if (param_9 != 0) {
      local_a0 = L"InvalidJsonValue";
      local_98[0] = 0x10;
      FUN_1446e940c(&local_c0,&local_a0);
      local_a0 = L"JsonObjectConverter";
      local_98[0] = 0x13;
      FUN_1446e940c(&local_d0,&local_a0);
      local_a0 = L"Invalid JSON value";
      local_98[0] = 0x12;
LAB_142a671ec:
      FUN_140208c1e(&local_b0,&local_d0,&local_c0,&local_a0);
      FUN_140008f88(param_9,&local_b0);
      if (local_b0 != (longlong *)0x0) {
        (**(code **)(*local_b0 + 0x10))();
      }
    }
  }
  else {
    puVar9 = *(undefined **)(param_2 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1)) {
      FUN_1446ddbd2();
      local_1c0 = FUN_140b31576;
      local_1c8 = &DAT_14c951a38;
      local_1d0 = 0;
      local_1d8 = 0x208001;
      FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0);
      atexit(FUN_14280cbf7);
      _Init_thread_footer(&DAT_14c951ae0);
    }
    if (DAT_14c951a98 == 0) {
      bVar11 = puVar9 != (undefined *)0x0;
      if (puVar9 != &DAT_14c951a90 && bVar11) {
        do {
          puVar9 = *(undefined **)(puVar9 + 0x30);
          bVar11 = puVar9 != (undefined *)0x0;
          if (puVar9 == &DAT_14c951a90) break;
        } while (puVar9 != (undefined *)0x0);
      }
      bVar10 = true;
      if (!bVar11) goto LAB_142a6708d;
    }
    else {
      bVar10 = true;
      if ((*(ulonglong *)(puVar9 + 0x18) & DAT_14c951a98) == 0) {
LAB_142a6708d:
        puVar9 = *(undefined **)(param_2 + 8);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c952900) &&
           (FUN_144b3d300(&DAT_14c952900), DAT_14c952900 == -1)) {
          local_1c8 = (undefined *)FUN_1446ddbd2();
          local_1c0 = FUN_1468e4cee;
          local_1d8 = 0x800000008001;
          local_1d0 = 0;
          FUN_14000176a(&DAT_14c9528b0,L"FSetProperty",0x800000000000,0);
          atexit(FUN_142817fb7);
          _Init_thread_footer(&DAT_14c952900);
        }
        if (DAT_14c9528b8 == 0) {
          bVar10 = puVar9 != (undefined *)0x0;
          if (puVar9 != &DAT_14c9528b0 && bVar10) {
            do {
              puVar9 = *(undefined **)(puVar9 + 0x30);
              bVar10 = puVar9 != (undefined *)0x0;
              if (puVar9 == &DAT_14c9528b0) break;
            } while (puVar9 != (undefined *)0x0);
          }
        }
        else {
          bVar10 = (*(ulonglong *)(puVar9 + 0x18) & DAT_14c9528b8) != 0;
        }
      }
    }
    if (*(int *)(*param_1 + 8) == 5) {
      if ((bVar10) && (*(int *)(param_2 + 0x30) == 1)) {
        local_1b0 = local_198;
        local_1b8 = param_9;
        local_1c0 = (code *)CONCAT71(local_1c0._1_7_,param_8);
        local_1c8 = local_190;
        local_1d0 = param_6;
        local_1d8 = local_188;
        FUN_142a679fa(param_1,param_2,local_1a8,local_1a0);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_60[0] ^ (ulonglong)auStack_1f8);
      }
      plVar4 = (longlong *)FUN_140482996();
      uVar6 = *(uint *)(param_2 + 0x30);
      uVar3 = *(uint *)(plVar4 + 1);
      if ((param_8 == '\0') || (uVar3 = uVar6, uVar6 == *(uint *)(plVar4 + 1))) {
        if ((int)uVar3 < (int)uVar6) {
          uVar6 = uVar3;
        }
        if ((int)uVar6 < 1) {
          uVar5 = CONCAT71((uint7)(uint3)(uVar3 >> 8),1);
        }
        else {
          lVar7 = 0;
          lVar8 = 0;
          do {
            local_1b0 = local_198;
            local_1b8 = param_9;
            local_1c0 = (code *)CONCAT71(local_1c0._1_7_,param_8);
            local_1c8 = local_190;
            local_1d0 = param_6;
            local_1d8 = local_188;
            uVar5 = FUN_142a679fa(*plVar4 + lVar7,param_2,
                                  (longlong)(int)lVar8 * (longlong)*(int *)(param_2 + 0x34) +
                                  local_1a8,local_1a0);
            if ((char)uVar5 == '\0') break;
            lVar7 = lVar7 + 0x10;
            bVar11 = (ulonglong)uVar6 - 1 != lVar8;
            lVar8 = lVar8 + 1;
          } while (bVar11);
        }
        goto LAB_142a67225;
      }
      if (param_9 != 0) {
        local_108 = 0;
        plStack_100 = (longlong *)0x0;
        FUN_1413a454c(local_160,uVar6,0);
        local_128 = 0;
        plStack_120 = (longlong *)0x0;
        FUN_1413a454c(local_170,(int)plVar4[1],0);
        local_a0 = L"IncorrectArraySize";
        local_98[0] = 0x12;
        FUN_1446e940c(local_14c,&local_a0);
        local_a0 = L"JsonObjectConverter";
        local_98[0] = 0x13;
        FUN_1446e940c(local_150,&local_a0);
        local_a0 = L"JSON array size is incorrect (has {0} elements, but needs {1})";
        local_98[0] = 0x3e;
        FUN_140208c1e(local_148,local_150,local_14c,&local_a0);
        FUN_14023409e(&local_180,local_148,1);
        local_a0 = (wchar_t *)CONCAT44(local_a0._4_4_,4);
        FUN_14023423e(local_90,local_170);
        local_80 = 4;
        FUN_14023423e(local_70,local_160);
        local_b8 = local_60;
        local_c0 = &local_a0;
        FUN_14010d304(&local_b0);
        local_d0 = local_180;
        local_c8 = local_178;
        if (local_178 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_178 + 1) = (int)local_178[1] + 1;
          UNLOCK();
        }
        FUN_14010c016(local_e0,&local_d0,&local_b0);
        FUN_14007f2db(local_b0,local_a8);
        if (local_b0 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        lVar8 = 0x30;
        do {
          plVar4 = *(longlong **)((longlong)local_98 + lVar8 + -8);
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x10))();
            *(undefined8 *)((longlong)local_98 + lVar8 + -8) = 0;
            *(undefined4 *)((longlong)local_98 + lVar8) = 0;
          }
          lVar8 = lVar8 + -0x20;
        } while (lVar8 != -0x10);
        if (local_178 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_178 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*local_178)(local_178);
            LOCK();
            piVar1 = (int *)((longlong)local_178 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_178 + 0x10))(local_178);
            }
          }
        }
        if (local_170[0] != (longlong *)0x0) {
          (**(code **)(*local_170[0] + 0x10))();
        }
        if (local_160[0] != (longlong *)0x0) {
          (**(code **)(*local_160[0] + 0x10))();
        }
        FUN_140008f88(param_9,local_e0);
        if (local_e0[0] != (longlong *)0x0) {
          (**(code **)(*local_e0[0] + 0x10))();
        }
        if (local_148[0] != (longlong *)0x0) {
          (**(code **)(*local_148[0] + 0x10))();
        }
        plVar4 = plStack_120;
        if (plStack_120 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_120 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plStack_120)(plStack_120);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
LAB_142a67862:
        plVar4 = plStack_100;
        if (plStack_100 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_100 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plStack_100)(plStack_100);
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
    else if (bVar10) {
      if (param_9 != 0) {
        local_a0 = L"ExpectingJsonArray";
        local_98[0] = 0x12;
        FUN_1446e940c(&local_c0,&local_a0);
        local_a0 = L"JsonObjectConverter";
        local_98[0] = 0x13;
        FUN_1446e940c(&local_d0,&local_a0);
        local_a0 = L"Expecting JSON array";
        local_98[0] = 0x14;
        goto LAB_142a671ec;
      }
    }
    else {
      if (param_8 != '\x01' || *(int *)(param_2 + 0x30) == 1) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_60[0] ^ (ulonglong)auStack_1f8);
      }
      if (param_9 != 0) {
        local_108 = 0;
        plStack_100 = (longlong *)0x0;
        FUN_1413a454c(local_f0,*(int *)(param_2 + 0x30),0);
        FUN_140002850(param_2,&local_128);
        FUN_140233b1a(local_118,&local_128);
        local_a0 = L"InvalidDimensionOfNonArrayProperty";
        local_98[0] = 0x22;
        FUN_1446e940c(local_14c,&local_a0);
        local_a0 = L"JsonObjectConverter";
        local_98[0] = 0x13;
        FUN_1446e940c(local_150,&local_a0);
        local_a0 = L"Property {0} is not an array but has {1} elements";
        local_98[0] = 0x31;
        FUN_140208c1e(local_148,local_150,local_14c,&local_a0);
        FUN_14023409e(&local_138,local_148,1);
        local_a0 = (wchar_t *)CONCAT44(local_a0._4_4_,4);
        FUN_14023423e(local_90,local_118);
        local_80 = 4;
        FUN_14023423e(local_70,local_f0);
        local_b8 = local_60;
        local_c0 = &local_a0;
        FUN_14010d304(&local_b0);
        local_d0 = local_138;
        local_c8 = local_130;
        if (local_130 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_130 + 1) = (int)local_130[1] + 1;
          UNLOCK();
        }
        FUN_14010c016(local_e0,&local_d0,&local_b0);
        FUN_14007f2db(local_b0,local_a8);
        if (local_b0 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        lVar8 = 0x30;
        do {
          plVar4 = *(longlong **)((longlong)local_98 + lVar8 + -8);
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x10))();
            *(undefined8 *)((longlong)local_98 + lVar8 + -8) = 0;
            *(undefined4 *)((longlong)local_98 + lVar8) = 0;
          }
          lVar8 = lVar8 + -0x20;
        } while (lVar8 != -0x10);
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
        if (local_118[0] != (longlong *)0x0) {
          (**(code **)(*local_118[0] + 0x10))();
        }
        if (local_f0[0] != (longlong *)0x0) {
          (**(code **)(*local_f0[0] + 0x10))();
        }
        FUN_140008f88(param_9,local_e0);
        if (local_e0[0] != (longlong *)0x0) {
          (**(code **)(*local_e0[0] + 0x10))();
        }
        if (local_148[0] != (longlong *)0x0) {
          (**(code **)(*local_148[0] + 0x10))();
        }
        if (local_128 != 0) {
          FUN_1400020a8();
        }
        goto LAB_142a67862;
      }
    }
  }
  uVar5 = 0;
LAB_142a67225:
  if ((local_60[0] ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 142a6799f FUN_142a6799f body=91 status=ok
// SIG undefined FUN_142a6799f(void)

void FUN_142a6799f(void)

{
  if (DAT_14c998248 != 0) {
    if (DAT_14c998240 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c998240)(DAT_14c998240,0);
    FUN_1446efa72(&DAT_14c998240,0,0,0x10);
    DAT_14c998248 = 0;
  }
  if (DAT_14c998240 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 142a679fa FUN_142a679fa body=23437 status=ok
// SIG undefined FUN_142a679fa(void)

undefined8
FUN_142a679fa(longlong *param_1,longlong *param_2,code *****param_3,longlong param_4,
             wchar_t *param_5,undefined *param_6,undefined *param_7,undefined1 param_8,
             wchar_t *param_9,code *param_10)

{
  int *piVar1;
  undefined4 uVar2;
  code *****pppppcVar3;
  code *pcVar4;
  double dVar5;
  undefined *puVar6;
  wchar_t ****ppppwVar7;
  char cVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  uint *puVar16;
  longlong lVar17;
  code *****pppppcVar18;
  undefined8 uVar19;
  longlong *plVar20;
  wchar_t *pwVar21;
  int iVar22;
  int iVar23;
  longlong *plVar24;
  int iVar25;
  ulonglong uVar26;
  uint uVar27;
  longlong lVar28;
  code ****ppppcVar29;
  code ****ppppcVar30;
  longlong lVar31;
  ushort uVar32;
  ushort uVar33;
  uint uVar34;
  ulonglong uVar35;
  uint *puVar36;
  undefined *puVar37;
  bool bVar38;
  undefined1 auStack_808 [32];
  wchar_t *local_7e8;
  undefined *local_7e0;
  undefined *local_7d8;
  code *pcStack_7d0;
  wchar_t *local_7c8;
  code *local_7c0;
  undefined1 *local_7b8;
  code ****local_7b0;
  code *local_7a8;
  code *local_7a0;
  wchar_t ****local_798;
  longlong *local_790;
  undefined *local_788;
  longlong local_780;
  ulonglong local_778;
  wchar_t *local_770;
  longlong *local_768;
  longlong *local_760;
  uint *local_758;
  longlong local_750;
  wchar_t ****local_748;
  longlong local_740;
  code ****local_738;
  longlong *local_730;
  longlong *local_728 [2];
  code ****local_718;
  longlong *local_710;
  longlong *local_708 [2];
  longlong *local_6f8 [2];
  code ****local_6e8;
  longlong *local_6e0;
  longlong *local_6d8 [2];
  longlong *local_6c8 [2];
  longlong *local_6b8;
  undefined4 local_6b0;
  undefined8 local_6a8;
  int local_6a0;
  undefined8 local_698;
  int local_690;
  code ****local_688;
  longlong *local_680;
  longlong *local_678 [2];
  longlong *local_668 [2];
  code ****local_658;
  longlong *local_650;
  longlong *local_648 [2];
  longlong *local_638 [2];
  code ****local_628;
  longlong *local_620;
  longlong *local_618 [2];
  longlong *local_608 [2];
  code ****local_5f8;
  longlong *local_5f0;
  longlong *local_5e8 [2];
  code ****local_5d8;
  longlong *local_5d0;
  longlong *local_5c8 [2];
  longlong *local_5b8 [2];
  longlong *local_5a8;
  undefined4 local_5a0;
  code ****local_598;
  longlong *local_590;
  longlong *local_588 [2];
  code ****local_578;
  longlong *local_570;
  longlong *local_568 [2];
  code ****local_558;
  longlong *local_550;
  longlong *local_548 [2];
  wchar_t ****local_538;
  longlong *local_530;
  longlong *local_528 [2];
  longlong *local_518 [2];
  longlong *local_508;
  undefined4 local_500;
  code ****local_4f8;
  longlong *local_4f0;
  longlong *local_4e8 [2];
  wchar_t ****local_4d8;
  longlong *local_4d0;
  longlong *local_4c8 [2];
  longlong *local_4b8 [2];
  longlong *local_4a8;
  undefined4 local_4a0;
  wchar_t ****local_498;
  longlong *local_490;
  longlong *local_488 [2];
  longlong *local_478 [2];
  longlong *local_468;
  undefined4 local_460;
  wchar_t ****local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  uint uStack_440;
  undefined4 uStack_43c;
  int iStack_438;
  undefined4 uStack_434;
  undefined8 local_430;
  byte local_428;
  code ****local_420;
  longlong *local_418;
  longlong *local_410 [2];
  undefined1 local_400 [4];
  undefined1 local_3fc [4];
  wchar_t ****local_3f8 [2];
  wchar_t ****local_3e8;
  longlong *local_3e0;
  longlong *local_3d8;
  longlong *plStack_3d0;
  longlong *local_3c0 [2];
  longlong *local_3b0 [2];
  longlong *local_3a0;
  undefined4 local_398;
  code ****local_390;
  longlong *local_388;
  longlong *local_380 [2];
  longlong *local_370 [2];
  code ****local_360;
  longlong *local_358;
  longlong *local_350 [2];
  longlong *local_340 [2];
  longlong *local_330 [2];
  undefined8 local_320;
  longlong *local_318;
  undefined8 uStack_310;
  code ****local_308;
  longlong *local_300;
  longlong *local_2f8 [2];
  longlong *local_2e8 [2];
  longlong *local_2d8;
  undefined8 uStack_2d0;
  longlong *local_2c0 [2];
  wchar_t ****local_2b0;
  uint local_2a8;
  undefined4 local_2a4;
  undefined8 local_2a0;
  wchar_t ****local_298;
  undefined8 local_290;
  code ****local_288;
  longlong *local_280;
  code ****local_278;
  longlong *local_270;
  code ****local_268;
  wchar_t ****local_260;
  longlong *local_258 [2];
  undefined4 local_248 [4];
  undefined1 local_238 [16];
  undefined4 local_228 [4];
  undefined1 local_218 [16];
  longlong local_208 [56];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_808;
  if ((((param_10 != (code *)0x0) && (*(int *)(param_10 + 8) != 0)) &&
      (*(longlong **)param_10 != (longlong *)0x0)) &&
     (cVar8 = (**(code **)(**(longlong **)param_10 + 0x30))(), cVar8 != '\0')) {
    if (*(int *)(param_10 + 8) == 0) {
      plVar20 = (longlong *)0x0;
    }
    else {
      plVar20 = *(longlong **)param_10;
    }
    cVar8 = (**(code **)(*plVar20 + 0x58))(plVar20,param_1,param_2);
    uVar13 = 1;
    if (cVar8 != '\0') goto LAB_142a6b505;
  }
  if (param_2 == (longlong *)0x0) goto LAB_142a6aca0;
  puVar37 = (undefined *)param_2[1];
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9496d8) && (FUN_144b3d300(&DAT_14c9496d8), DAT_14c9496d8 == -1)) {
    local_7d8 = (undefined *)FUN_1446ddbd2();
    pcStack_7d0 = FUN_140a4831c;
    local_7e8 = (wchar_t *)0x1000000008001;
    local_7e0 = (undefined *)0x0;
    FUN_14000176a(&DAT_14c949688,L"FEnumProperty");
    atexit(FUN_1427e14fe);
    _Init_thread_footer(&DAT_14c9496d8);
  }
  if (DAT_14c949690 == 0) {
    bVar38 = puVar37 != (undefined *)0x0;
    if (puVar37 != &DAT_14c949688 && bVar38) {
      do {
        puVar37 = *(undefined **)(puVar37 + 0x30);
        bVar38 = puVar37 != (undefined *)0x0;
        if (puVar37 == &DAT_14c949688) break;
      } while (puVar37 != (undefined *)0x0);
    }
    if (bVar38) goto LAB_142a67ac5;
LAB_142a67b33:
    puVar37 = (undefined *)param_2[1];
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952108) && (FUN_144b3d300(&DAT_14c952108), DAT_14c952108 == -1)) {
      local_7d8 = (undefined *)FUN_1446ddbd2();
      pcStack_7d0 = FUN_1468e0f50;
      local_7e0 = (undefined *)0x0;
      local_7e8 = (wchar_t *)0x1008001;
      FUN_14000176a(&DAT_14c9520b8,L"FNumericProperty",0x1000000);
      atexit(FUN_142816f26);
      _Init_thread_footer(&DAT_14c952108);
    }
    if (DAT_14c9520c0 == 0) {
      bVar38 = puVar37 != (undefined *)0x0;
      if (puVar37 != &DAT_14c9520b8 && bVar38) {
        do {
          puVar37 = *(undefined **)(puVar37 + 0x30);
          bVar38 = puVar37 != (undefined *)0x0;
          if (puVar37 == &DAT_14c9520b8) break;
        } while (puVar37 != (undefined *)0x0);
      }
      if (bVar38) goto LAB_142a67b77;
LAB_142a67c5a:
      puVar14 = (undefined8 *)param_2[1];
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951d20) && (FUN_144b3d300(&DAT_14c951d20), DAT_14c951d20 == -1))
      {
        local_7d8 = (undefined *)FUN_1446ddbd2();
        pcStack_7d0 = FUN_14067a048;
        local_7e0 = (undefined *)0x0;
        local_7e8 = (wchar_t *)0x28001;
        FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000);
        atexit(FUN_142811fe5);
        _Init_thread_footer(&DAT_14c951d20);
      }
      if (DAT_14c951cd8 != 0) {
        if ((puVar14[3] & DAT_14c951cd8) == 0) goto LAB_142a67ffa;
LAB_142a67c9e:
        cVar8 = FUN_140b87404(*param_1);
        if (cVar8 == '\0') {
          bVar9 = 0;
        }
        else {
          bVar9 = *(byte *)((longlong)param_2 + 0x72);
        }
        *(byte *)((longlong)param_3 + (ulonglong)*(byte *)((longlong)param_2 + 0x71)) =
             *(byte *)((longlong)param_3 + (ulonglong)*(byte *)((longlong)param_2 + 0x71)) &
             ~*(byte *)((longlong)param_2 + 0x73) | bVar9;
        goto LAB_142a6b503;
      }
      bVar38 = puVar14 != (undefined8 *)0x0;
      if (puVar14 != &DAT_14c951cd0 && bVar38) {
        do {
          puVar14 = (undefined8 *)puVar14[6];
          bVar38 = puVar14 != (undefined8 *)0x0;
          if (puVar14 == &DAT_14c951cd0) break;
        } while (puVar14 != (undefined8 *)0x0);
      }
      if (bVar38) goto LAB_142a67c9e;
LAB_142a67ffa:
      puVar37 = (undefined *)param_2[1];
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c963e88) && (FUN_144b3d300(&DAT_14c963e88), DAT_14c963e88 == -1))
      {
        local_7d8 = (undefined *)FUN_1446ddbd2();
        pcStack_7d0 = FUN_140dafe7a;
        local_7e0 = (undefined *)0x0;
        local_7e8 = (wchar_t *)0xc001;
        FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000);
        atexit(FUN_142829758);
        _Init_thread_footer(&DAT_14c963e88);
      }
      if (DAT_14c963e40 != 0) {
        if ((*(ulonglong *)(puVar37 + 0x18) & DAT_14c963e40) == 0) goto LAB_142a686a5;
LAB_142a6803e:
        FUN_14047e026(*param_1,&local_268);
        ppppcVar29 = local_268;
        pppppcVar18 = (code *****)local_268;
        if (&local_268 != param_3) {
          iVar10 = (int)local_260;
          lVar28 = (longlong)(int)local_260;
          *(int *)(param_3 + 1) = (int)local_260;
          if ((int)local_260 == 0 && *(int *)((longlong)param_3 + 0xc) == 0) {
            *(undefined4 *)((longlong)param_3 + 0xc) = 0;
          }
          else {
            FUN_1446dd670(param_3,(ulonglong)local_260 & 0xffffffff);
            pppppcVar18 = (code *****)local_268;
            if (iVar10 != 0) {
              memcpy(*param_3,ppppcVar29,lVar28 * 2);
              pppppcVar18 = (code *****)local_268;
            }
          }
        }
        goto LAB_142a68925;
      }
      bVar38 = puVar37 != (undefined *)0x0;
      if (puVar37 != &DAT_14c963e38 && bVar38) {
        do {
          puVar37 = *(undefined **)(puVar37 + 0x30);
          bVar38 = puVar37 != (undefined *)0x0;
          if (puVar37 == &DAT_14c963e38) break;
        } while (puVar37 != (undefined *)0x0);
      }
      if (bVar38) goto LAB_142a6803e;
LAB_142a686a5:
      puVar37 = (undefined *)param_2[1];
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1))
      {
        FUN_1446ddbd2();
        pcStack_7d0 = FUN_140b31576;
        local_7d8 = &DAT_14c951a38;
        local_7e0 = (undefined *)0x0;
        local_7e8 = (wchar_t *)0x208001;
        FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000);
        atexit(FUN_14280cbf7);
        _Init_thread_footer(&DAT_14c951ae0);
      }
      local_788 = param_6;
      if (DAT_14c951a98 != 0) {
        if ((*(ulonglong *)(puVar37 + 0x18) & DAT_14c951a98) == 0) goto LAB_142a687a8;
LAB_142a686f9:
        if (*(int *)(*param_1 + 8) == 5) {
          puVar14 = (undefined8 *)FUN_140482996();
          local_2b0 = (wchar_t ****)0x0;
          uVar27 = *(uint *)(puVar14 + 1);
          uVar13 = *puVar14;
          local_2a8 = uVar27;
          if (uVar27 == 0) {
            local_2a4 = 0;
            uVar27 = 0;
          }
          else {
            FUN_14047d15e(&local_2b0,uVar27,0);
            FUN_14047cdb6(local_2b0,uVar13,uVar27);
            uVar27 = local_2a8;
          }
          lVar28 = param_2[0xe];
          uVar12 = (**(code **)(*(longlong *)param_2[0xf] + 0x178))();
          local_458 = (wchar_t ****)param_2[0xf];
          local_448 = (code *****)CONCAT44(uVar12,*(undefined4 *)((longlong)local_458 + 0x34));
          uStack_440 = CONCAT31(uStack_440._1_3_,(char)lVar28);
          uStack_450 = param_3;
          FUN_144a8a902(&local_458,uVar27);
          if ((int)uVar27 < 1) {
            bVar38 = false;
          }
          else {
            local_788 = (undefined *)((ulonglong)local_788 & 0xfffffffff7ff7a7d);
            bVar38 = true;
            lVar28 = 0;
            uVar26 = 0;
            do {
              if ((*(longlong *)((longlong)local_2b0 + lVar28) != 0) &&
                 (1 < *(uint *)(*(longlong *)((longlong)local_2b0 + lVar28) + 8))) {
                if (*(int *)(uStack_450 + 1) == 0) {
                  ppppcVar29 = (code ****)0x0;
                }
                else {
                  if ((uStack_440 & 1) == 0) {
                    ppppcVar29 = *uStack_450;
                  }
                  else {
                    ppppcVar29 = *uStack_450;
                    if (((ulonglong)ppppcVar29 & 1) != 0) {
                      ppppcVar29 = (code ****)
                                   ((longlong)uStack_450 + ((longlong)ppppcVar29 >> 0x18));
                    }
                  }
                  ppppcVar29 = (code ****)((longlong)ppppcVar29 + (longlong)(int)local_448 * uVar26)
                  ;
                }
                local_7c0 = param_10;
                local_7c8 = param_9;
                pcStack_7d0 = (code *)CONCAT71(pcStack_7d0._1_7_,param_8);
                local_7d8 = param_7;
                local_7e0 = local_788;
                local_7e8 = param_5;
                cVar8 = FUN_142a66f13((longlong)local_2b0 + lVar28,param_2[0xf],ppppcVar29,param_4);
                if (cVar8 == '\0') {
                  if (param_9 != (wchar_t *)0x0) {
                    local_3a0 = *(longlong **)param_9;
                    if (local_3a0 != (longlong *)0x0) {
                      (**(code **)(*local_3a0 + 8))();
                    }
                    local_398 = *(undefined4 *)(param_9 + 4);
                    FUN_140002850(param_2,&local_318);
                    FUN_140233b1a(local_3b0,&local_318);
                    local_3d8 = (longlong *)0x0;
                    plStack_3d0 = (longlong *)0x0;
                    FUN_1413a454c(local_3c0,uVar26 & 0xffffffff,0);
                    local_268 = (code ****)0x149f7e03a;
                    local_260._0_4_ = 0x16;
                    FUN_1446e940c(local_3fc,&local_268);
                    local_268 = (code ****)0x149f7dbf0;
                    local_260._0_4_ = 0x13;
                    FUN_1446e940c(local_400,&local_268);
                    local_268 = (code ****)0x149f7dfca;
                    local_260 = (wchar_t ****)CONCAT44(local_260._4_4_,0x37);
                    FUN_140208c1e(local_3f8,local_400,local_3fc,&local_268);
                    FUN_14023409e(&local_3e8,local_3f8,1);
                    local_268 = (code ****)CONCAT44(local_268._4_4_,4);
                    FUN_14023423e(local_258,local_3c0);
                    local_248[0] = 4;
                    FUN_14023423e(local_238,local_3b0);
                    local_228[0] = 4;
                    FUN_14023423e(local_218,&local_3a0);
                    local_280 = local_208;
                    local_288 = (code ****)&local_268;
                    FUN_14010d304(&local_278);
                    local_298 = local_3e8;
                    local_290 = local_3e0;
                    if (local_3e0 != (longlong *)0x0) {
                      LOCK();
                      *(int *)(local_3e0 + 1) = (int)local_3e0[1] + 1;
                      UNLOCK();
                    }
                    FUN_14010c016(&local_2d8,&local_298,&local_278);
                    FUN_14007f2db(local_278,(ulonglong)local_270 & 0xffffffff);
                    if ((code *****)local_278 != (code *****)0x0) {
                      FUN_1400020a8();
                    }
                    lVar28 = 0x50;
                    do {
                      if (*(longlong **)((longlong)&local_268 + lVar28) != (longlong *)0x0) {
                        (**(code **)(**(longlong **)((longlong)&local_268 + lVar28) + 0x10))();
                        *(undefined8 *)((longlong)&local_268 + lVar28) = 0;
                        *(undefined4 *)((longlong)local_258 + lVar28 + -8) = 0;
                      }
                      lVar28 = lVar28 + -0x20;
                    } while (lVar28 != -0x10);
                    if (local_3e0 != (longlong *)0x0) {
                      LOCK();
                      plVar20 = local_3e0 + 1;
                      *(int *)plVar20 = (int)*plVar20 + -1;
                      UNLOCK();
                      if ((int)*plVar20 == 0) {
                        (**(code **)*local_3e0)(local_3e0);
                        LOCK();
                        piVar1 = (int *)((longlong)local_3e0 + 0xc);
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        if (*piVar1 == 0) {
                          (**(code **)(*local_3e0 + 0x10))(local_3e0);
                        }
                      }
                    }
                    if (local_3c0[0] != (longlong *)0x0) {
                      (**(code **)(*local_3c0[0] + 0x10))();
                    }
                    if (local_3b0[0] != (longlong *)0x0) {
                      (**(code **)(*local_3b0[0] + 0x10))();
                    }
                    if (local_3a0 != (longlong *)0x0) {
                      (**(code **)(*local_3a0 + 0x10))();
                    }
                    FUN_140008f88(param_9,&local_2d8);
                    if (local_2d8 != (longlong *)0x0) {
                      (**(code **)(*local_2d8 + 0x10))();
                    }
                    if ((code *****)local_3f8[0] != (code *****)0x0) {
                      (*(code *)(*local_3f8[0])[2])();
                    }
                    plVar20 = plStack_3d0;
                    if (plStack_3d0 != (longlong *)0x0) {
                      LOCK();
                      plVar15 = plStack_3d0 + 1;
                      *(int *)plVar15 = (int)*plVar15 + -1;
                      UNLOCK();
                      if ((int)*plVar15 == 0) {
                        (**(code **)*plStack_3d0)(plStack_3d0);
                        LOCK();
                        piVar1 = (int *)((longlong)plVar20 + 0xc);
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        if (*piVar1 == 0) {
                          (**(code **)(*plVar20 + 0x10))(plVar20);
                        }
                      }
                    }
                    if (local_318 != (longlong *)0x0) {
                      FUN_1400020a8();
                    }
                  }
                  break;
                }
              }
              uVar26 = uVar26 + 1;
              bVar38 = uVar26 < uVar27;
              lVar28 = lVar28 + 0x10;
            } while (uVar27 != uVar26);
          }
          FUN_14047c710(local_2b0,local_2a8);
          if ((code *****)local_2b0 != (code *****)0x0) {
            FUN_1400020a8();
          }
          if (!bVar38) goto LAB_142a6b503;
          goto LAB_142a6af18;
        }
        if (param_9 == (wchar_t *)0x0) goto LAB_142a6af18;
        FUN_140002850(param_2,&local_2b0);
        FUN_140233b1a(local_410,&local_2b0);
        local_268 = (code ****)0x149f7e0e4;
        local_260._0_4_ = 0xf;
        FUN_1446e940c(&local_318,&local_268);
        local_268 = (code ****)0x149f7dbf0;
        local_260._0_4_ = 0x13;
        FUN_1446e940c(&local_3d8,&local_268);
        local_268 = (code ****)0x149f7e068;
        local_260 = (wchar_t ****)CONCAT44(local_260._4_4_,0x3d);
        FUN_140208c1e(&local_2d8,&local_3d8,&local_318,&local_268);
        FUN_14023409e(&local_420,&local_2d8,1);
        local_268 = (code ****)CONCAT44(local_268._4_4_,4);
        FUN_14023423e(local_258,local_410);
        local_270 = (longlong *)local_248;
        local_278 = (code ****)&local_268;
        FUN_14010d304(&local_458);
        local_288 = local_420;
        local_280 = local_418;
        if (local_418 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_418 + 1) = (int)local_418[1] + 1;
          UNLOCK();
        }
        FUN_14010c016(&local_298,&local_288,&local_458);
        FUN_14007f2db(local_458,(ulonglong)uStack_450 & 0xffffffff);
        if ((code *****)local_458 != (code *****)0x0) {
          FUN_1400020a8();
        }
        if (local_258[0] != (longlong *)0x0) {
          (**(code **)(*local_258[0] + 0x10))();
        }
        local_728[0] = local_410[0];
        if (local_418 != (longlong *)0x0) {
          LOCK();
          plVar20 = local_418 + 1;
          *(int *)plVar20 = (int)*plVar20 + -1;
          UNLOCK();
          if ((int)*plVar20 == 0) {
            (**(code **)*local_418)(local_418);
            LOCK();
            piVar1 = (int *)((longlong)local_418 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            local_728[0] = local_410[0];
            if (*piVar1 == 0) {
              (**(code **)(*local_418 + 0x10))(local_418);
              local_728[0] = local_410[0];
            }
          }
        }
LAB_142a6aec7:
        if (local_728[0] != (longlong *)0x0) {
          (**(code **)(*local_728[0] + 0x10))();
        }
        FUN_140008f88(param_9,&local_298);
        if ((code *****)local_298 != (code *****)0x0) {
          (*(code *)(*local_298)[2])();
        }
        pppppcVar18 = (code *****)local_2b0;
        if (local_2d8 != (longlong *)0x0) {
          (**(code **)(*local_2d8 + 0x10))();
          pppppcVar18 = (code *****)local_2b0;
        }
        goto LAB_142a6af0e;
      }
      bVar38 = puVar37 != (undefined *)0x0;
      if (puVar37 != &DAT_14c951a90 && bVar38) {
        do {
          puVar37 = *(undefined **)(puVar37 + 0x30);
          bVar38 = puVar37 != (undefined *)0x0;
          if (puVar37 == &DAT_14c951a90) break;
        } while (puVar37 != (undefined *)0x0);
      }
      if (bVar38) goto LAB_142a686f9;
LAB_142a687a8:
      puVar37 = (undefined *)param_2[1];
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951f40) && (FUN_144b3d300(&DAT_14c951f40), DAT_14c951f40 == -1))
      {
        local_7d8 = (undefined *)FUN_1446ddbd2();
        pcStack_7d0 = FUN_140eb3340;
        local_7e8 = (wchar_t *)0x400000008001;
        local_7e0 = (undefined *)0x0;
        FUN_14000176a(&DAT_14c951ef0,L"FMapProperty");
        atexit(FUN_142815b60);
        _Init_thread_footer(&DAT_14c951f40);
      }
      if (DAT_14c951ef8 != 0) {
        if ((*(ulonglong *)(puVar37 + 0x18) & DAT_14c951ef8) == 0) goto LAB_142a68b1f;
LAB_142a687ec:
        if (*(int *)((undefined8 *)*param_1 + 1) != 6) {
          if (param_9 != (wchar_t *)0x0) {
            FUN_140002850(param_2,&local_2b0);
            FUN_140233b1a(local_4e8,&local_2b0);
            local_268 = (code ****)0x149f7e2ce;
            local_260._0_4_ = 0xd;
            FUN_1446e940c(&local_318,&local_268);
            local_268 = (code ****)0x149f7dbf0;
            local_260._0_4_ = 0x13;
            FUN_1446e940c(&local_3d8,&local_268);
            local_268 = (code ****)0x149f7e254;
            local_260 = (wchar_t ****)CONCAT44(local_260._4_4_,0x3c);
            FUN_140208c1e(&local_2d8,&local_3d8,&local_318,&local_268);
            FUN_14023409e(&local_4f8,&local_2d8,1);
            local_268 = (code ****)CONCAT44(local_268._4_4_,4);
            FUN_14023423e(local_258,local_4e8);
            local_270 = (longlong *)local_248;
            local_278 = (code ****)&local_268;
            FUN_14010d304(&local_458);
            local_288 = local_4f8;
            local_280 = local_4f0;
            if (local_4f0 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_4f0 + 1) = (int)local_4f0[1] + 1;
              UNLOCK();
            }
            FUN_14010c016(&local_298,&local_288,&local_458);
            FUN_14007f2db(local_458,(ulonglong)uStack_450 & 0xffffffff);
            if ((code *****)local_458 != (code *****)0x0) {
              FUN_1400020a8();
            }
            if (local_258[0] != (longlong *)0x0) {
              (**(code **)(*local_258[0] + 0x10))();
            }
            local_728[0] = local_4e8[0];
            if (local_4f0 != (longlong *)0x0) {
              LOCK();
              plVar20 = local_4f0 + 1;
              *(int *)plVar20 = (int)*plVar20 + -1;
              UNLOCK();
              if ((int)*plVar20 == 0) {
                (**(code **)*local_4f0)(local_4f0);
                LOCK();
                piVar1 = (int *)((longlong)local_4f0 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                local_728[0] = local_4e8[0];
                if (*piVar1 == 0) {
                  (**(code **)(*local_4f0 + 0x10))(local_4f0);
                  local_728[0] = local_4e8[0];
                }
              }
            }
            goto LAB_142a6aec7;
          }
          goto LAB_142a6af18;
        }
        plVar15 = (longlong *)(*(code *)**(undefined8 **)*param_1)();
        plVar20 = (longlong *)*plVar15;
        local_768 = (longlong *)plVar15[1];
        if (local_768 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_768 + 1) = (int)local_768[1] + 1;
          UNLOCK();
        }
        local_428 = *(byte *)(param_2 + 0x13);
        local_458 = (wchar_t ****)param_2[0xe];
        uStack_450 = (code *****)param_2[0xf];
        uStack_440 = *(uint *)(param_2 + 0x10);
        uStack_43c = *(undefined4 *)((longlong)param_2 + 0x84);
        iStack_438 = (int)param_2[0x11];
        uStack_434 = *(undefined4 *)((longlong)param_2 + 0x8c);
        local_430 = param_2[0x12];
        local_760 = plVar20;
        local_448 = param_3;
        FUN_140458a4e(&local_458,(int)plVar20[1] - *(int *)((longlong)plVar20 + 0x34));
        puVar36 = (uint *)(plVar20 + 2);
        uVar27 = *(uint *)(plVar20 + 5);
        if (uVar27 == 0) {
          uVar26 = 1;
          local_790 = (longlong *)0x0;
          iVar10 = 0;
          uVar11 = 0;
        }
        else {
          puVar16 = (uint *)plVar20[4];
          if ((uint *)plVar20[4] == (uint *)0x0) {
            puVar16 = puVar36;
          }
          uVar11 = *puVar16;
          if (uVar11 == 0) {
            iVar10 = uVar27 + 0x1e;
            if (-1 < (int)(uVar27 - 1)) {
              iVar10 = uVar27 - 1;
            }
            plVar15 = (longlong *)0x0;
            plVar24 = (longlong *)(ulonglong)(uint)(iVar10 >> 5);
            if (iVar10 >> 5 < 1) {
              plVar24 = plVar15;
            }
            iVar10 = 0;
            do {
              if (plVar24 == plVar15) goto LAB_142a692eb;
              iVar10 = iVar10 + 0x20;
              uVar11 = puVar16[(longlong)plVar15 + 1];
              plVar15 = (longlong *)((longlong)plVar15 + 1);
            } while (uVar11 == 0);
          }
          else {
            local_790 = (longlong *)0x0;
            iVar10 = 0;
            plVar15 = local_790;
          }
          local_790 = plVar15;
          uVar26 = (ulonglong)(-uVar11 & uVar11);
          uVar35 = uVar26 * 2 + 1;
          lVar28 = 0x3f;
          if (uVar35 != 0) {
            for (; uVar35 >> lVar28 == 0; lVar28 = lVar28 + -1) {
            }
          }
          uVar11 = (iVar10 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
          if ((int)uVar27 <= (int)uVar11) {
            uVar11 = uVar27;
          }
        }
        if (uVar11 != uVar27) {
          local_788 = (undefined *)((ulonglong)local_788 & 0xfffffffff7ff7a7d);
          uVar34 = 0xffffffff;
          local_778 = (ulonglong)uVar27;
          local_758 = puVar36;
LAB_142a6935a:
          local_770 = (wchar_t *)CONCAT44(local_770._4_4_,iVar10);
          lVar28 = *plVar20;
          lVar17 = (longlong)(int)uVar11;
          lVar31 = *(longlong *)(lVar28 + 0x10 + lVar17 * 0x28);
          if ((lVar31 == 0) || (*(uint *)(lVar31 + 8) < 2)) goto LAB_142a6962b;
          local_780 = CONCAT44(local_780._4_4_,uVar34);
          lVar31 = lVar28 + lVar17 * 0x28;
          local_268 = (code ****)&local_458;
          uVar12 = FUN_140007ec8(local_268,&local_268);
          local_750 = CONCAT44(local_750._4_4_,uVar12);
          pppppcVar18 = (code *****)FUN_14001cc68(0x30,0x10);
          pppppcVar18[1] = (code ****)&DAT_100000001;
          *pppppcVar18 = (code ****)&PTR_FUN_149e43e60;
          local_748 = (wchar_t ****)(pppppcVar18 + 2);
          local_740 = lVar31;
          FUN_14047c0ce(local_748,lVar31);
          local_798 = (wchar_t ****)pppppcVar18;
          if (pppppcVar18 != (code *****)0x0) {
            LOCK();
            *(int *)(pppppcVar18 + 1) = *(int *)(pppppcVar18 + 1) + 1;
            UNLOCK();
            LOCK();
            pppppcVar3 = pppppcVar18 + 1;
            *(int *)pppppcVar3 = *(int *)pppppcVar3 + -1;
            UNLOCK();
            if (*(int *)pppppcVar3 == 0) {
              (*(code *)**pppppcVar18)(pppppcVar18);
              LOCK();
              piVar1 = (int *)((longlong)local_798 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (*(code *)(*local_798)[2])(local_798);
              }
            }
          }
          local_750 = (longlong)(int)local_750;
          if ((local_428 & 1) == 0) {
            if (*(int *)(local_448 + 1) == *(int *)((longlong)local_448 + 0x34)) {
              ppppcVar30 = (code ****)0x0;
            }
            else {
              ppppcVar30 = *local_448;
LAB_142a6946e:
              ppppcVar30 = (code ****)((longlong)ppppcVar30 + local_430._4_4_ * local_750);
            }
          }
          else {
            if (*(int *)(local_448 + 1) != *(int *)((longlong)local_448 + 0x24)) {
              ppppcVar29 = *local_448;
              ppppcVar30 = (code ****)(((longlong)ppppcVar29 >> 0x18) + (longlong)local_448);
              if (((ulonglong)ppppcVar29 & 1) == 0) {
                ppppcVar30 = ppppcVar29;
              }
              goto LAB_142a6946e;
            }
            ppppcVar30 = (code ****)0x0;
          }
          lVar31 = param_2[0xe];
          local_268 = (code ****)local_748;
          if ((code *****)local_798 != (code *****)0x0) {
            LOCK();
            *(int *)(local_798 + 1) = *(int *)(local_798 + 1) + 1;
            UNLOCK();
          }
          local_7c0 = param_10;
          local_7c8 = param_9;
          pcStack_7d0 = (code *)CONCAT71(pcStack_7d0._1_7_,param_8);
          local_7d8 = param_7;
          local_7e0 = local_788;
          local_7e8 = param_5;
          local_260 = local_798;
          cVar8 = FUN_142a66f13(&local_268,lVar31,ppppcVar30,param_4);
          ppppwVar7 = local_260;
          if ((code *****)local_260 != (code *****)0x0) {
            LOCK();
            pppppcVar18 = (code *****)(local_260 + 1);
            *(int *)pppppcVar18 = *(int *)pppppcVar18 + -1;
            UNLOCK();
            if (*(int *)pppppcVar18 == 0) {
              (*(code *)**local_260)(local_260);
              LOCK();
              piVar1 = (int *)((longlong)ppppwVar7 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (*(code *)(*ppppwVar7)[2])(ppppwVar7);
              }
            }
          }
          plVar20 = local_760;
          if (cVar8 == '\0') {
            plVar20 = local_768;
            if (param_9 == (wchar_t *)0x0) goto LAB_142a6a7d4;
            local_468 = *(longlong **)param_9;
            if (local_468 != (longlong *)0x0) {
              (**(code **)(*local_468 + 8))();
            }
            local_460 = *(undefined4 *)(param_9 + 4);
            FUN_140002850(param_2,&local_2d8);
            FUN_140233b1a(local_478,&local_2d8);
            FUN_140009b9a(local_488,local_740);
            local_268 = (code ****)0x149f7e178;
            local_260._0_4_ = 0x17;
            FUN_1446e940c(&local_3d8,&local_268);
            local_268 = (code ****)0x149f7dbf0;
            local_260._0_4_ = 0x13;
            FUN_1446e940c(local_3f8,&local_268);
            local_268 = (code ****)0x149f7e104;
            local_260 = (wchar_t ****)CONCAT44(local_260._4_4_,0x39);
            FUN_140208c1e(&local_318,local_3f8,&local_3d8,&local_268);
            FUN_14023409e(&local_498,&local_318,1);
            local_268 = (code ****)CONCAT44(local_268._4_4_,4);
            FUN_14023423e(local_258,local_488);
            local_248[0] = 4;
            FUN_14023423e(local_238,local_478);
            local_228[0] = 4;
            FUN_14023423e(local_218,&local_468);
            local_280 = local_208;
            local_288 = (code ****)&local_268;
            FUN_14010d304(&local_278);
            local_298 = local_498;
            local_290 = local_490;
            if (local_490 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_490 + 1) = (int)local_490[1] + 1;
              UNLOCK();
            }
            FUN_14010c016(&local_2b0,&local_298,&local_278);
            FUN_14007f2db(local_278,(ulonglong)local_270 & 0xffffffff);
            if ((code *****)local_278 != (code *****)0x0) {
              FUN_1400020a8();
            }
            plVar20 = local_768;
            lVar28 = 0x50;
            do {
              if (*(longlong **)((longlong)&local_268 + lVar28) != (longlong *)0x0) {
                (**(code **)(**(longlong **)((longlong)&local_268 + lVar28) + 0x10))();
                *(undefined8 *)((longlong)&local_268 + lVar28) = 0;
                *(undefined4 *)((longlong)local_258 + lVar28 + -8) = 0;
              }
              lVar28 = lVar28 + -0x20;
            } while (lVar28 != -0x10);
            if (local_490 != (longlong *)0x0) {
              LOCK();
              plVar15 = local_490 + 1;
              *(int *)plVar15 = (int)*plVar15 + -1;
              UNLOCK();
              if ((int)*plVar15 == 0) {
                (**(code **)*local_490)(local_490);
                LOCK();
                piVar1 = (int *)((longlong)local_490 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_490 + 0x10))(local_490);
                }
              }
            }
            if (local_488[0] != (longlong *)0x0) {
              (**(code **)(*local_488[0] + 0x10))();
            }
            plVar15 = local_468;
            if (local_478[0] != (longlong *)0x0) {
              (**(code **)(*local_478[0] + 0x10))();
              plVar15 = local_468;
            }
          }
          else {
            if ((local_428 & 1) == 0) {
              if (*(int *)(local_448 + 1) == *(int *)((longlong)local_448 + 0x34)) {
                lVar31 = 0;
              }
              else {
                ppppcVar30 = *local_448;
LAB_142a6955e:
                lVar31 = (longlong)ppppcVar30 +
                         (longlong)(int)uStack_440 + local_430._4_4_ * local_750;
              }
            }
            else {
              if (*(int *)(local_448 + 1) != *(int *)((longlong)local_448 + 0x24)) {
                ppppcVar29 = *local_448;
                ppppcVar30 = (code ****)(((longlong)ppppcVar29 >> 0x18) + (longlong)local_448);
                if (((ulonglong)ppppcVar29 & 1) == 0) {
                  ppppcVar30 = ppppcVar29;
                }
                goto LAB_142a6955e;
              }
              lVar31 = 0;
            }
            local_7c0 = param_10;
            local_7c8 = param_9;
            pcStack_7d0 = (code *)CONCAT71(pcStack_7d0._1_7_,param_8);
            local_7d8 = param_7;
            local_7e0 = local_788;
            local_7e8 = param_5;
            cVar8 = FUN_142a66f13(lVar28 + lVar17 * 0x28 + 0x10,param_2[0xf],lVar31,param_4);
            if (cVar8 != '\0') {
              puVar36 = local_758;
              uVar34 = (uint)local_780;
              if ((code *****)local_798 != (code *****)0x0) {
                LOCK();
                pppppcVar18 = (code *****)(local_798 + 1);
                *(int *)pppppcVar18 = *(int *)pppppcVar18 + -1;
                UNLOCK();
                if (*(int *)pppppcVar18 == 0) {
                  (*(code *)**local_798)();
                  LOCK();
                  piVar1 = (int *)((longlong)local_798 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  puVar36 = local_758;
                  uVar34 = (uint)local_780;
                  if (*piVar1 == 0) {
                    (*(code *)(*local_798)[2])();
                    puVar36 = local_758;
                    uVar34 = (uint)local_780;
                  }
                }
              }
              goto LAB_142a6962b;
            }
            plVar20 = local_768;
            if (param_9 == (wchar_t *)0x0) goto LAB_142a6a7d4;
            local_4a8 = *(longlong **)param_9;
            if (local_4a8 != (longlong *)0x0) {
              (**(code **)(*local_4a8 + 8))();
            }
            local_4a0 = *(undefined4 *)(param_9 + 4);
            FUN_140002850(param_2,&local_2d8);
            FUN_140233b1a(local_4b8,&local_2d8);
            FUN_140009b9a(local_4c8,local_740);
            local_268 = (code ****)0x149f7e220;
            local_260._0_4_ = 0x19;
            FUN_1446e940c(&local_3d8,&local_268);
            local_268 = (code ****)0x149f7dbf0;
            local_260._0_4_ = 0x13;
            FUN_1446e940c(local_3f8,&local_268);
            local_268 = (code ****)0x149f7e1a8;
            local_260 = (wchar_t ****)CONCAT44(local_260._4_4_,0x3b);
            FUN_140208c1e(&local_318,local_3f8,&local_3d8,&local_268);
            FUN_14023409e(&local_4d8,&local_318,1);
            local_268 = (code ****)CONCAT44(local_268._4_4_,4);
            FUN_14023423e(local_258,local_4c8);
            local_248[0] = 4;
            FUN_14023423e(local_238,local_4b8);
            local_228[0] = 4;
            FUN_14023423e(local_218,&local_4a8);
            local_280 = local_208;
            local_288 = (code ****)&local_268;
            FUN_14010d304(&local_278);
            local_298 = local_4d8;
            local_290 = local_4d0;
            if (local_4d0 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_4d0 + 1) = (int)local_4d0[1] + 1;
              UNLOCK();
            }
            FUN_14010c016(&local_2b0,&local_298,&local_278);
            FUN_14007f2db(local_278,(ulonglong)local_270 & 0xffffffff);
            if ((code *****)local_278 != (code *****)0x0) {
              FUN_1400020a8();
            }
            plVar20 = local_768;
            lVar28 = 0x50;
            do {
              if (*(longlong **)((longlong)&local_268 + lVar28) != (longlong *)0x0) {
                (**(code **)(**(longlong **)((longlong)&local_268 + lVar28) + 0x10))();
                *(undefined8 *)((longlong)&local_268 + lVar28) = 0;
                *(undefined4 *)((longlong)local_258 + lVar28 + -8) = 0;
              }
              lVar28 = lVar28 + -0x20;
            } while (lVar28 != -0x10);
            if (local_4d0 != (longlong *)0x0) {
              LOCK();
              plVar15 = local_4d0 + 1;
              *(int *)plVar15 = (int)*plVar15 + -1;
              UNLOCK();
              if ((int)*plVar15 == 0) {
                (**(code **)*local_4d0)(local_4d0);
                LOCK();
                piVar1 = (int *)((longlong)local_4d0 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_4d0 + 0x10))(local_4d0);
                }
              }
            }
            if (local_4c8[0] != (longlong *)0x0) {
              (**(code **)(*local_4c8[0] + 0x10))();
            }
            plVar15 = local_4a8;
            if (local_4b8[0] != (longlong *)0x0) {
              (**(code **)(*local_4b8[0] + 0x10))();
              plVar15 = local_4a8;
            }
          }
          if (plVar15 != (longlong *)0x0) {
            (**(code **)(*plVar15 + 0x10))();
          }
          FUN_140008f88(param_9,&local_2b0);
          if ((code *****)local_2b0 != (code *****)0x0) {
            (*(code *)(*local_2b0)[2])();
          }
          if (local_318 != (longlong *)0x0) {
            (**(code **)(*local_318 + 0x10))();
          }
          if (local_2d8 != (longlong *)0x0) {
            FUN_1400020a8();
          }
LAB_142a6a7d4:
          if ((code *****)local_798 != (code *****)0x0) {
            LOCK();
            pppppcVar18 = (code *****)(local_798 + 1);
            *(int *)pppppcVar18 = *(int *)pppppcVar18 + -1;
            UNLOCK();
            if (*(int *)pppppcVar18 == 0) {
              (*(code *)**local_798)();
              LOCK();
              piVar1 = (int *)((longlong)local_798 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (*(code *)(*local_798)[2])();
              }
            }
          }
          bVar38 = false;
          goto LAB_142a69303;
        }
LAB_142a692eb:
        FUN_140458c30(&local_458);
        bVar38 = true;
        plVar20 = local_768;
LAB_142a69303:
        if (plVar20 != (longlong *)0x0) {
          LOCK();
          plVar15 = plVar20 + 1;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)*plVar15 == 0) {
            (**(code **)*plVar20)(plVar20);
            LOCK();
            piVar1 = (int *)((longlong)plVar20 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar20 + 0x10))(plVar20);
            }
          }
        }
LAB_142a69de7:
        if (bVar38) goto LAB_142a6b503;
        goto LAB_142a6af18;
      }
      bVar38 = puVar37 != (undefined *)0x0;
      if (puVar37 != &DAT_14c951ef0 && bVar38) {
        do {
          puVar37 = *(undefined **)(puVar37 + 0x30);
          bVar38 = puVar37 != (undefined *)0x0;
          if (puVar37 == &DAT_14c951ef0) break;
        } while (puVar37 != (undefined *)0x0);
      }
      if (bVar38) goto LAB_142a687ec;
LAB_142a68b1f:
      puVar37 = (undefined *)param_2[1];
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c952900) && (FUN_144b3d300(&DAT_14c952900), DAT_14c952900 == -1))
      {
        local_7d8 = (undefined *)FUN_1446ddbd2();
        pcStack_7d0 = FUN_1468e4cee;
        local_7e8 = (wchar_t *)0x800000008001;
        local_7e0 = (undefined *)0x0;
        FUN_14000176a(&DAT_14c9528b0,L"FSetProperty",0x800000000000,0);
        atexit(FUN_142817fb7);
        _Init_thread_footer(&DAT_14c952900);
      }
      if (DAT_14c9528b8 == 0) {
        bVar38 = puVar37 != (undefined *)0x0;
        if (puVar37 != &DAT_14c9528b0 && bVar38) {
          do {
            puVar37 = *(undefined **)(puVar37 + 0x30);
            bVar38 = puVar37 != (undefined *)0x0;
            if (puVar37 == &DAT_14c9528b0) break;
          } while (puVar37 != (undefined *)0x0);
        }
        if (bVar38) goto LAB_142a68b63;
      }
      else if ((*(ulonglong *)(puVar37 + 0x18) & DAT_14c9528b8) != 0) {
LAB_142a68b63:
        if (*(int *)(*param_1 + 8) != 5) {
          if (param_9 != (wchar_t *)0x0) {
            FUN_140002850(param_2,&local_2b0);
            FUN_140233b1a(local_548,&local_2b0);
            local_268 = (code ****)0x149f7e3f8;
            local_260._0_4_ = 0xd;
            FUN_1446e940c(&local_318,&local_268);
            local_268 = (code ****)0x149f7dbf0;
            local_260._0_4_ = 0x13;
            FUN_1446e940c(&local_3d8,&local_268);
            local_268 = (code ****)0x149f7e380;
            local_260 = (wchar_t ****)CONCAT44(local_260._4_4_,0x3b);
            FUN_140208c1e(&local_2d8,&local_3d8,&local_318,&local_268);
            FUN_14023409e(&local_558,&local_2d8,1);
            local_268 = (code ****)CONCAT44(local_268._4_4_,4);
            FUN_14023423e(local_258,local_548);
            local_270 = (longlong *)local_248;
            local_278 = (code ****)&local_268;
            FUN_14010d304(&local_458);
            local_288 = local_558;
            local_280 = local_550;
            if (local_550 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_550 + 1) = (int)local_550[1] + 1;
              UNLOCK();
            }
            FUN_14010c016(&local_298,&local_288,&local_458);
            FUN_14007f2db(local_458,(ulonglong)uStack_450 & 0xffffffff);
            if ((code *****)local_458 != (code *****)0x0) {
              FUN_1400020a8();
            }
            if (local_258[0] != (longlong *)0x0) {
              (**(code **)(*local_258[0] + 0x10))();
            }
            local_728[0] = local_548[0];
            if (local_550 != (longlong *)0x0) {
              LOCK();
              plVar20 = local_550 + 1;
              *(int *)plVar20 = (int)*plVar20 + -1;
              UNLOCK();
              if ((int)*plVar20 == 0) {
                (**(code **)*local_550)(local_550);
                LOCK();
                piVar1 = (int *)((longlong)local_550 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                local_728[0] = local_548[0];
                if (*piVar1 == 0) {
                  (**(code **)(*local_550 + 0x10))(local_550);
                  local_728[0] = local_548[0];
                }
              }
            }
            goto LAB_142a6aec7;
          }
          goto LAB_142a6af18;
        }
        puVar14 = (undefined8 *)FUN_140482996();
        local_2b0 = (wchar_t ****)0x0;
        uVar27 = *(uint *)(puVar14 + 1);
        uVar13 = *puVar14;
        local_2a8 = uVar27;
        if (uVar27 == 0) {
          local_2a4 = 0;
          uVar27 = 0;
        }
        else {
          FUN_14047d15e(&local_2b0,uVar27,0);
          FUN_14047cdb6(local_2b0,uVar13,uVar27);
          uVar27 = local_2a8;
        }
        local_458 = (wchar_t ****)param_2[0xe];
        local_448 = (code *****)param_2[0xf];
        uStack_440 = *(uint *)(param_2 + 0x10);
        uStack_43c = *(undefined4 *)((longlong)param_2 + 0x84);
        iStack_438 = (int)param_2[0x11];
        uStack_450 = param_3;
        FUN_1402608fa(&local_458,uVar27);
        if (0 < (int)uVar27) {
          local_788 = (undefined *)((ulonglong)local_788 & 0xfffffffff7ff7a7d);
          lVar28 = 0;
          uVar26 = 0;
LAB_142a69cc8:
          ppppwVar7 = local_2b0;
          if ((*(longlong *)((longlong)local_2b0 + lVar28) == 0) ||
             (*(uint *)(*(longlong *)((longlong)local_2b0 + lVar28) + 8) < 2)) goto LAB_142a69d74;
          iVar10 = FUN_14026089e(&local_458);
          if (*(int *)(uStack_450 + 1) == *(int *)((longlong)uStack_450 + 0x34)) {
            ppppcVar29 = (code ****)0x0;
          }
          else {
            ppppcVar29 = (code ****)
                         ((longlong)*uStack_450 + (longlong)iVar10 * (longlong)iStack_438);
          }
          local_7c0 = param_10;
          local_7c8 = param_9;
          pcStack_7d0 = (code *)CONCAT71(pcStack_7d0._1_7_,param_8);
          local_7d8 = param_7;
          local_7e0 = local_788;
          local_7e8 = param_5;
          cVar8 = FUN_142a66f13((longlong)ppppwVar7 + lVar28,param_2[0xe],ppppcVar29,param_4);
          if (cVar8 != '\0') goto LAB_142a69d74;
          if (param_9 != (wchar_t *)0x0) {
            local_508 = *(longlong **)param_9;
            if (local_508 != (longlong *)0x0) {
              (**(code **)(*local_508 + 8))();
            }
            local_500 = *(undefined4 *)(param_9 + 4);
            FUN_140002850(param_2,&local_318);
            FUN_140233b1a(local_518,&local_318);
            local_3d8 = (longlong *)0x0;
            plStack_3d0 = (longlong *)0x0;
            FUN_1413a454c(local_528,uVar26 & 0xffffffff,0);
            local_268 = (code ****)0x149f7e356;
            local_260._0_4_ = 0x14;
            FUN_1446e940c(local_3fc,&local_268);
            local_268 = (code ****)0x149f7dbf0;
            local_260._0_4_ = 0x13;
            FUN_1446e940c(local_400,&local_268);
            local_268 = (code ****)0x149f7e2ea;
            local_260 = (wchar_t ****)CONCAT44(local_260._4_4_,0x35);
            FUN_140208c1e(local_3f8,local_400,local_3fc,&local_268);
            FUN_14023409e(&local_538,local_3f8,1);
            local_268 = (code ****)CONCAT44(local_268._4_4_,4);
            FUN_14023423e(local_258,local_528);
            local_248[0] = 4;
            FUN_14023423e(local_238,local_518);
            local_228[0] = 4;
            FUN_14023423e(local_218,&local_508);
            local_280 = local_208;
            local_288 = (code ****)&local_268;
            FUN_14010d304(&local_278);
            local_298 = local_538;
            local_290 = local_530;
            if (local_530 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_530 + 1) = (int)local_530[1] + 1;
              UNLOCK();
            }
            FUN_14010c016(&local_2d8,&local_298,&local_278);
            FUN_14007f2db(local_278,(ulonglong)local_270 & 0xffffffff);
            if ((code *****)local_278 != (code *****)0x0) {
              FUN_1400020a8();
            }
            lVar28 = 0x50;
            do {
              if (*(longlong **)((longlong)&local_268 + lVar28) != (longlong *)0x0) {
                (**(code **)(**(longlong **)((longlong)&local_268 + lVar28) + 0x10))();
                *(undefined8 *)((longlong)&local_268 + lVar28) = 0;
                *(undefined4 *)((longlong)local_258 + lVar28 + -8) = 0;
              }
              lVar28 = lVar28 + -0x20;
            } while (lVar28 != -0x10);
            if (local_530 != (longlong *)0x0) {
              LOCK();
              plVar20 = local_530 + 1;
              *(int *)plVar20 = (int)*plVar20 + -1;
              UNLOCK();
              if ((int)*plVar20 == 0) {
                (**(code **)*local_530)(local_530);
                LOCK();
                piVar1 = (int *)((longlong)local_530 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_530 + 0x10))(local_530);
                }
              }
            }
            if (local_528[0] != (longlong *)0x0) {
              (**(code **)(*local_528[0] + 0x10))();
            }
            if (local_518[0] != (longlong *)0x0) {
              (**(code **)(*local_518[0] + 0x10))();
            }
            if (local_508 != (longlong *)0x0) {
              (**(code **)(*local_508 + 0x10))();
            }
            FUN_140008f88(param_9,&local_2d8);
            if (local_2d8 != (longlong *)0x0) {
              (**(code **)(*local_2d8 + 0x10))();
            }
            if ((code *****)local_3f8[0] != (code *****)0x0) {
              (*(code *)(*local_3f8[0])[2])();
            }
            plVar20 = plStack_3d0;
            if (plStack_3d0 != (longlong *)0x0) {
              LOCK();
              plVar15 = plStack_3d0 + 1;
              *(int *)plVar15 = (int)*plVar15 + -1;
              UNLOCK();
              if ((int)*plVar15 == 0) {
                (**(code **)*plStack_3d0)(plStack_3d0);
                LOCK();
                piVar1 = (int *)((longlong)plVar20 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar20 + 0x10))(plVar20);
                }
              }
            }
            if (local_318 != (longlong *)0x0) {
              FUN_1400020a8();
            }
          }
          bVar38 = false;
          goto LAB_142a69dc1;
        }
LAB_142a69d84:
        local_260 = (wchar_t ****)&local_278;
        local_278 = (code ****)&local_458;
        local_268 = (code ****)FUN_14281ab14;
        FUN_1402609e8(uStack_450);
        bVar38 = true;
LAB_142a69dc1:
        FUN_14047c710(local_2b0,local_2a8);
        if ((code *****)local_2b0 != (code *****)0x0) {
          FUN_1400020a8();
        }
        goto LAB_142a69de7;
      }
      puVar37 = (undefined *)param_2[1];
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c963ee0) && (FUN_144b3d300(&DAT_14c963ee0), DAT_14c963ee0 == -1))
      {
        local_7d8 = (undefined *)FUN_1446ddbd2();
        pcStack_7d0 = FUN_140fb5c52;
        local_7e0 = (undefined *)0x0;
        local_7e8 = (wchar_t *)0x40008001;
        FUN_14000176a(&DAT_14c963e90,L"FTextProperty",0x40000000,0);
        atexit(FUN_14282980e);
        _Init_thread_footer(&DAT_14c963ee0);
      }
      if (DAT_14c963e98 == 0) {
        bVar38 = puVar37 != (undefined *)0x0;
        if (puVar37 != &DAT_14c963e90 && bVar38) {
          do {
            puVar37 = *(undefined **)(puVar37 + 0x30);
            bVar38 = puVar37 != (undefined *)0x0;
            if (puVar37 == &DAT_14c963e90) break;
          } while (puVar37 != (undefined *)0x0);
        }
        if (bVar38) goto LAB_142a68f5c;
      }
      else if ((*(ulonglong *)(puVar37 + 0x18) & DAT_14c963e98) != 0) {
LAB_142a68f5c:
        puVar14 = (undefined8 *)*param_1;
        if (*(int *)(puVar14 + 1) == 2) {
          FUN_14047e026(puVar14,&local_268);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
            DAT_14c844840 = (code *****)FUN_14001cc68(0x30,0x10);
            DAT_14c844840[1] = (code ****)0x0;
            *DAT_14c844840 = (code ****)&PTR_FUN_149e19310;
            DAT_14c844840[2] = (code ****)0xffffffffffffffff;
            DAT_14c844840[3] = (code ****)0x0;
            DAT_14c844840[4] = (code ****)0x0;
            DAT_14c844840[5] = (code ****)0x0;
            if (DAT_14c844840 != (code *****)0x0) {
              LOCK();
              *(int *)(DAT_14c844840 + 1) = *(int *)(DAT_14c844840 + 1) + 1;
              UNLOCK();
            }
            DAT_14c844848 = 0;
            atexit(FUN_142760bef);
            _Init_thread_footer(&DAT_14c844850);
          }
          local_458 = (wchar_t ****)DAT_14c844840;
          if (DAT_14c844840 != (code *****)0x0) {
            if ((*DAT_14c844840)[1] == (code ***)FUN_144907e24) {
              LOCK();
              *(int *)(DAT_14c844840 + 1) = *(int *)(DAT_14c844840 + 1) + 1;
              UNLOCK();
            }
            else {
              (*(code *)(*DAT_14c844840)[1])();
            }
          }
          uStack_450 = (code *****)((ulonglong)uStack_450._4_4_ << 0x20);
          pppppcVar18 = (code *****)local_268;
          if ((int)local_260 == 0) {
            pppppcVar18 = (code *****)&DAT_149dfb77a;
          }
          local_7e8 = (wchar_t *)((ulonglong)local_7e8 & 0xffffffffffffff00);
          lVar28 = FUN_140c97480(pppppcVar18,&local_458,0,0);
          if (lVar28 == 0) {
            FUN_140009b9a(&local_278,&local_268);
            FUN_140008f88(&local_458,&local_278);
            if ((code *****)local_278 != (code *****)0x0) {
              (*(code *)(*local_278)[2])();
            }
          }
          pppppcVar18 = (code *****)*param_3;
          if (pppppcVar18 != (code *****)local_458) {
            *param_3 = (code ****)local_458;
            if ((code *****)local_458 != (code *****)0x0) {
              (*(code *)(*local_458)[1])();
            }
            if (pppppcVar18 != (code *****)0x0) {
              (*(code *)(*pppppcVar18)[2])(pppppcVar18);
            }
          }
          *(undefined4 *)(param_3 + 1) = (undefined4)uStack_450;
          pppppcVar18 = (code *****)local_268;
          if ((code *****)local_458 != (code *****)0x0) {
            (*(code *)(*local_458)[2])();
            pppppcVar18 = (code *****)local_268;
          }
          goto LAB_142a68925;
        }
        if (*(int *)(puVar14 + 1) == 6) {
          puVar14 = (undefined8 *)(**(code **)*puVar14)();
          pppppcVar18 = (code *****)*puVar14;
          pppppcVar3 = (code *****)puVar14[1];
          if (pppppcVar3 == (code *****)0x0) {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1))
            {
              DAT_14c844840 = (code *****)FUN_14001cc68(0x30,0x10);
              DAT_14c844840[1] = (code ****)0x0;
              *DAT_14c844840 = (code ****)&PTR_FUN_149e19310;
              DAT_14c844840[2] = (code ****)0xffffffffffffffff;
              DAT_14c844840[3] = (code ****)0x0;
              DAT_14c844840[4] = (code ****)0x0;
              DAT_14c844840[5] = (code ****)0x0;
              if (DAT_14c844840 != (code *****)0x0) {
                LOCK();
                *(int *)(DAT_14c844840 + 1) = *(int *)(DAT_14c844840 + 1) + 1;
                UNLOCK();
              }
              DAT_14c844848 = 0;
              atexit(FUN_142760bef);
              _Init_thread_footer(&DAT_14c844850);
            }
            local_298 = (wchar_t ****)DAT_14c844840;
            if (DAT_14c844840 != (code *****)0x0) {
              if ((*DAT_14c844840)[1] == (code ***)FUN_144907e24) {
                LOCK();
                *(int *)(DAT_14c844840 + 1) = *(int *)(DAT_14c844840 + 1) + 1;
                UNLOCK();
              }
              else {
                (*(code *)(*DAT_14c844840)[1])();
              }
            }
            local_260 = (wchar_t ****)0x0;
          }
          else {
            LOCK();
            *(int *)(pppppcVar3 + 1) = *(int *)(pppppcVar3 + 1) + 1;
            UNLOCK();
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1))
            {
              DAT_14c844840 = (code *****)FUN_14001cc68(0x30,0x10);
              DAT_14c844840[1] = (code ****)0x0;
              *DAT_14c844840 = (code ****)&PTR_FUN_149e19310;
              DAT_14c844840[2] = (code ****)0xffffffffffffffff;
              DAT_14c844840[3] = (code ****)0x0;
              DAT_14c844840[4] = (code ****)0x0;
              DAT_14c844840[5] = (code ****)0x0;
              if (DAT_14c844840 != (code *****)0x0) {
                LOCK();
                *(int *)(DAT_14c844840 + 1) = *(int *)(DAT_14c844840 + 1) + 1;
                UNLOCK();
              }
              DAT_14c844848 = 0;
              atexit(FUN_142760bef);
              _Init_thread_footer(&DAT_14c844850);
            }
            local_298 = (wchar_t ****)DAT_14c844840;
            if (DAT_14c844840 != (code *****)0x0) {
              if ((*DAT_14c844840)[1] == (code ***)FUN_144907e24) {
                LOCK();
                *(int *)(DAT_14c844840 + 1) = *(int *)(DAT_14c844840 + 1) + 1;
                UNLOCK();
              }
              else {
                (*(code *)(*DAT_14c844840)[1])();
              }
            }
            LOCK();
            *(int *)(pppppcVar3 + 1) = *(int *)(pppppcVar3 + 1) + 1;
            UNLOCK();
            local_260 = (wchar_t ****)pppppcVar3;
          }
          local_290 = (longlong *)((ulonglong)local_290._4_4_ << 0x20);
          local_268 = (code ****)pppppcVar18;
          cVar8 = FUN_146f02ef0(&local_268,&local_298);
          ppppwVar7 = local_260;
          if ((code *****)local_260 != (code *****)0x0) {
            LOCK();
            pppppcVar18 = (code *****)(local_260 + 1);
            *(int *)pppppcVar18 = *(int *)pppppcVar18 + -1;
            UNLOCK();
            if (*(int *)pppppcVar18 == 0) {
              (*(code *)**local_260)(local_260);
              LOCK();
              piVar1 = (int *)((longlong)ppppwVar7 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (*(code *)(*ppppwVar7)[2])(ppppwVar7);
              }
            }
          }
          if (cVar8 == '\0') {
            if (param_9 != (wchar_t *)0x0) {
              FUN_140002850(param_2,&local_2d8);
              FUN_140233b1a(local_568,&local_2d8);
              local_268 = (code ****)0x149f7e4a0;
              local_260._0_4_ = 0x18;
              FUN_1446e940c(&local_3d8,&local_268);
              local_268 = (code ****)0x149f7dbf0;
              local_260._0_4_ = 0x13;
              FUN_1446e940c(local_3f8,&local_268);
              local_268 = (code ****)0x149f7e414;
              local_260 = (wchar_t ****)CONCAT44(local_260._4_4_,0x45);
              FUN_140208c1e(&local_318,local_3f8,&local_3d8,&local_268);
              FUN_14023409e(&local_578,&local_318,1);
              local_268 = (code ****)CONCAT44(local_268._4_4_,4);
              FUN_14023423e(local_258,local_568);
              local_270 = (longlong *)local_248;
              local_278 = (code ****)&local_268;
              FUN_14010d304(&local_458);
              local_288 = local_578;
              local_280 = local_570;
              if (local_570 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_570 + 1) = (int)local_570[1] + 1;
                UNLOCK();
              }
              FUN_14010c016(&local_2b0,&local_288,&local_458);
              FUN_14007f2db(local_458,(ulonglong)uStack_450 & 0xffffffff);
              if ((code *****)local_458 != (code *****)0x0) {
                FUN_1400020a8();
              }
              if (local_258[0] != (longlong *)0x0) {
                (**(code **)(*local_258[0] + 0x10))();
              }
              if (local_570 != (longlong *)0x0) {
                LOCK();
                plVar20 = local_570 + 1;
                *(int *)plVar20 = (int)*plVar20 + -1;
                UNLOCK();
                if ((int)*plVar20 == 0) {
                  (**(code **)*local_570)(local_570);
                  LOCK();
                  piVar1 = (int *)((longlong)local_570 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*local_570 + 0x10))(local_570);
                  }
                }
              }
              if (local_568[0] != (longlong *)0x0) {
                (**(code **)(*local_568[0] + 0x10))();
              }
              FUN_140008f88(param_9,&local_2b0);
              if ((code *****)local_2b0 != (code *****)0x0) {
                (*(code *)(*local_2b0)[2])();
              }
              if (local_318 != (longlong *)0x0) {
                (**(code **)(*local_318 + 0x10))();
              }
              if (local_2d8 != (longlong *)0x0) {
                FUN_1400020a8();
              }
            }
          }
          else {
            pppppcVar18 = (code *****)*param_3;
            if (pppppcVar18 != (code *****)local_298) {
              *param_3 = (code ****)local_298;
              if ((code *****)local_298 != (code *****)0x0) {
                (*(code *)(*local_298)[1])();
              }
              if (pppppcVar18 != (code *****)0x0) {
                (*(code *)(*pppppcVar18)[2])(pppppcVar18);
              }
            }
            *(int *)(param_3 + 1) = (int)local_290;
          }
          if ((code *****)local_298 != (code *****)0x0) {
            (*(code *)(*local_298)[2])();
          }
          if (pppppcVar3 != (code *****)0x0) {
            LOCK();
            pppppcVar18 = pppppcVar3 + 1;
            *(int *)pppppcVar18 = *(int *)pppppcVar18 + -1;
            UNLOCK();
            if (*(int *)pppppcVar18 == 0) {
              (*(code *)**pppppcVar3)(pppppcVar3);
              LOCK();
              piVar1 = (int *)((longlong)pppppcVar3 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (*(code *)(*pppppcVar3)[2])(pppppcVar3);
              }
            }
          }
          if (cVar8 != '\0') goto LAB_142a6b503;
        }
        else if (param_9 != (wchar_t *)0x0) {
          FUN_140002850(param_2,&local_2b0);
          FUN_140233b1a(local_588,&local_2b0);
          local_268 = (code ****)0x149f7e57c;
          local_260._0_4_ = 0xe;
          FUN_1446e940c(&local_318,&local_268);
          local_268 = (code ****)0x149f7dbf0;
          local_260._0_4_ = 0x13;
          FUN_1446e940c(&local_3d8,&local_268);
          local_268 = (code ****)0x149f7e4d2;
          local_260 = (wchar_t ****)CONCAT44(local_260._4_4_,0x54);
          FUN_140208c1e(&local_2d8,&local_3d8,&local_318,&local_268);
          FUN_14023409e(&local_598,&local_2d8,1);
          local_268 = (code ****)CONCAT44(local_268._4_4_,4);
          FUN_14023423e(local_258,local_588);
          local_270 = (longlong *)local_248;
          local_278 = (code ****)&local_268;
          FUN_14010d304(&local_458);
          local_288 = local_598;
          local_280 = local_590;
          if (local_590 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_590 + 1) = (int)local_590[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(&local_298,&local_288,&local_458);
          FUN_14007f2db(local_458,(ulonglong)uStack_450 & 0xffffffff);
          if ((code *****)local_458 != (code *****)0x0) {
            FUN_1400020a8();
          }
          if (local_258[0] != (longlong *)0x0) {
            (**(code **)(*local_258[0] + 0x10))();
          }
          local_728[0] = local_588[0];
          if (local_590 != (longlong *)0x0) {
            LOCK();
            plVar20 = local_590 + 1;
            *(int *)plVar20 = (int)*plVar20 + -1;
            UNLOCK();
            if ((int)*plVar20 == 0) {
              (**(code **)*local_590)(local_590);
              LOCK();
              piVar1 = (int *)((longlong)local_590 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              local_728[0] = local_588[0];
              if (*piVar1 == 0) {
                (**(code **)(*local_590 + 0x10))(local_590);
                local_728[0] = local_588[0];
              }
            }
          }
          goto LAB_142a6aec7;
        }
        goto LAB_142a6af18;
      }
      puVar37 = (undefined *)param_2[1];
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c952a58) && (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1))
      {
        local_7d8 = (undefined *)FUN_1446ddbd2();
        pcStack_7d0 = FUN_1403a682c;
        local_7e0 = (undefined *)0x0;
        local_7e8 = (wchar_t *)0x108001;
        FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
        atexit(FUN_142818c9e);
        _Init_thread_footer(&DAT_14c952a58);
      }
      if (DAT_14c952a10 == 0) {
        bVar38 = puVar37 != (undefined *)0x0;
        if (puVar37 != &DAT_14c952a08 && bVar38) {
          do {
            puVar37 = *(undefined **)(puVar37 + 0x30);
            bVar38 = puVar37 != (undefined *)0x0;
            if (puVar37 == &DAT_14c952a08) break;
          } while (puVar37 != (undefined *)0x0);
        }
        if (bVar38) goto LAB_142a69b27;
LAB_142a69e3f:
        puVar37 = (undefined *)param_2[1];
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c952478) &&
           (FUN_144b3d300(&DAT_14c952478), DAT_14c952478 == -1)) {
          FUN_1446f4b16();
          pcStack_7d0 = FUN_1403a5f94;
          local_7d8 = &DAT_14c951c78;
          local_7e0 = (undefined *)0x0;
          local_7e8 = (wchar_t *)0x4018001;
          FUN_14000176a(&DAT_14c952428,L"FObjectProperty",0x10000,0);
          atexit(FUN_1428170e8);
          _Init_thread_footer(&DAT_14c952478);
        }
        puVar6 = DAT_14c872be8;
        if (DAT_14c952430 == 0) {
          bVar38 = puVar37 != (undefined *)0x0;
          if (puVar37 != &DAT_14c952428 && bVar38) {
            do {
              puVar37 = *(undefined **)(puVar37 + 0x30);
              bVar38 = puVar37 != (undefined *)0x0;
              if (puVar37 == &DAT_14c952428) break;
            } while (puVar37 != (undefined *)0x0);
          }
          if (!bVar38) {
LAB_142a6aca0:
            puVar37 = DAT_14c872be8;
            FUN_14047e026(*param_1,&local_268);
            pppppcVar18 = (code *****)&DAT_149dfb77a;
            if ((int)local_260 != 0) {
              pppppcVar18 = (code *****)local_268;
            }
            if (pppppcVar18 == (code *****)0x0) {
              bVar38 = true;
            }
            else {
              local_7d8 = puVar37;
              local_7e0 = (undefined *)CONCAT44(local_7e0._4_4_,0x8000000);
              local_7e8 = (wchar_t *)0x0;
              lVar28 = (**(code **)(*param_2 + 0xf8))(param_2,pppppcVar18,param_3,0);
              bVar38 = lVar28 == 0;
            }
            if ((code *****)local_268 != (code *****)0x0) {
              FUN_1400020a8();
            }
            if (!bVar38) goto LAB_142a6b503;
            if (param_9 != (wchar_t *)0x0) {
              FUN_140002850(param_2,&local_2b0);
              FUN_140233b1a(local_728,&local_2b0);
              local_268 = (code ****)0x149f7e928;
              local_260._0_4_ = 0x14;
              FUN_1446e940c(&local_318,&local_268);
              local_268 = (code ****)0x149f7dbf0;
              local_260._0_4_ = 0x13;
              FUN_1446e940c(&local_3d8,&local_268);
              local_268 = (code ****)0x149f7e8ca;
              local_260 = (wchar_t ****)CONCAT44(local_260._4_4_,0x2e);
              FUN_140208c1e(&local_2d8,&local_3d8,&local_318,&local_268);
              FUN_14023409e(&local_738,&local_2d8,1);
              local_268 = (code ****)CONCAT44(local_268._4_4_,4);
              FUN_14023423e(local_258,local_728);
              local_270 = (longlong *)local_248;
              local_278 = (code ****)&local_268;
              FUN_14010d304(&local_458);
              local_288 = local_738;
              local_280 = local_730;
              if (local_730 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_730 + 1) = (int)local_730[1] + 1;
                UNLOCK();
              }
              FUN_14010c016(&local_298,&local_288,&local_458);
              FUN_14007f2db(local_458,(ulonglong)uStack_450 & 0xffffffff);
              if ((code *****)local_458 != (code *****)0x0) {
                FUN_1400020a8();
              }
              if (local_258[0] != (longlong *)0x0) {
                (**(code **)(*local_258[0] + 0x10))();
              }
              if (local_730 != (longlong *)0x0) {
                LOCK();
                plVar20 = local_730 + 1;
                *(int *)plVar20 = (int)*plVar20 + -1;
                UNLOCK();
                if ((int)*plVar20 == 0) {
                  (**(code **)*local_730)(local_730);
                  LOCK();
                  piVar1 = (int *)((longlong)local_730 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*local_730 + 0x10))(local_730);
                  }
                }
              }
              goto LAB_142a6aec7;
            }
            goto LAB_142a6af18;
          }
        }
        else if ((*(ulonglong *)(puVar37 + 0x18) & DAT_14c952430) == 0) goto LAB_142a6aca0;
        iVar10 = *(int *)(*param_1 + 8);
        if (iVar10 != 2) {
          if (iVar10 != 6) goto LAB_142a6b503;
          local_770 = DAT_14c951640;
          if (DAT_14c927740 == 0) {
            local_7b0 = (code ****)&local_268;
            local_268 = (code ****)FUN_1449e2820;
            local_7a0 = FUN_14081d0ea;
            local_7a8 = FUN_14081d0ea;
            local_7b8 = &LAB_146856450;
            local_7c0 = FUN_1427b121c;
            local_7c8 = L"Engine";
            pcStack_7d0 = (code *)0x0;
            local_7d8 = (undefined *)CONCAT44(local_7d8._4_4_,0x10000021);
            local_7e0 = (undefined *)CONCAT44(local_7e0._4_4_,8);
            local_7e8 = (wchar_t *)CONCAT44(local_7e8._4_4_,0x28);
            FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
            if (DAT_14c927740 != 0) goto LAB_142a69eba;
          }
          else {
LAB_142a69eba:
            if ((*(int *)(DAT_14c927740 + 0x38) <= *(int *)(param_4 + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(param_4 + 0x30) + (longlong)*(int *)(DAT_14c927740 + 0x38) * 8) ==
                DAT_14c927740 + 0x30)) {
              local_770 = param_5;
            }
          }
          puVar14 = (undefined8 *)(*(code *)**(undefined8 **)*param_1)();
          uVar13 = *puVar14;
          local_790 = (longlong *)puVar14[1];
          if (local_790 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_790 + 1) = (int)local_790[1] + 1;
            UNLOCK();
          }
          lVar28 = param_2[0xe];
          local_698 = DAT_14c998228;
          local_690 = DAT_14c998230 + -1;
          if (DAT_14c998230 == 0) {
            local_690 = 0;
          }
          FUN_14047df9c(uVar13,&local_298);
          local_6a8 = DAT_14c998228;
          local_6a0 = DAT_14c998230 + -1;
          if (DAT_14c998230 == 0) {
            local_6a0 = 0;
          }
          FUN_14683939c();
          ppppwVar7 = local_298;
          if (1 < (longlong)(int)local_290) {
            lVar31 = 0;
            do {
              if (*(short *)((longlong)local_298 + lVar31) == 0x2f) {
                if (DAT_14c949118 == (code *****)0x0) {
                  local_2b0 = (wchar_t ****)FUN_140631fbe;
                  pppppcVar18 = (code *****)FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
                  DAT_14c949118 = pppppcVar18;
                  FUN_1446f470e(&local_288,L"Class",1);
                  local_7b8 = &LAB_146891e90;
                  local_7c0 = (code *)&LAB_146273097;
                  pcStack_7d0 = (code *)0x149e2b68a;
                  local_7c8 = (wchar_t *)CONCAT44(local_7c8._4_4_,199);
                  local_7d8 = (undefined *)0x20;
                  local_7e0 = (undefined *)CONCAT44(local_7e0._4_4_,0x10000000);
                  local_7e8._0_4_ = 8;
                  local_7b0 = (code ****)&local_2b0;
                  FUN_14574b4b2(pppppcVar18);
                  DAT_14c949118 = pppppcVar18;
                  local_778 = FUN_144a7a812();
                  pppppcVar18 = DAT_14c949118;
                  if (DAT_14c948f88 == (code *****)0x0) {
                    local_278 = (code ****)&DAT_1427db2a2;
                    DAT_14c948f88 = (code *****)FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
                    local_798 = (wchar_t ****)DAT_14c948f88;
                    FUN_1446f470e(&local_458,L"Struct",1);
                    local_7b0 = (code ****)&local_278;
                    local_7b8 = &LAB_146891313;
                    local_7c0 = FUN_146272f63;
                    pcStack_7d0 = (code *)0x149e2b68a;
                    local_7c8 = (wchar_t *)CONCAT44(local_7c8._4_4_,199);
                    local_7d8 = (undefined *)0x8;
                    local_7e0 = (undefined *)CONCAT44(local_7e0._4_4_,0x10000020);
                    local_7e8._0_4_ = 8;
                    FUN_14574b4b2(local_798);
                    DAT_14c948f88 = (code *****)local_798;
                    local_780 = DAT_14c927740;
                    if (DAT_14c927740 == 0) {
                      local_7b0 = (code ****)&local_268;
                      local_268 = (code ****)FUN_1449e2820;
                      local_7a0 = FUN_14081d0ea;
                      local_7a8 = FUN_14081d0ea;
                      local_7b8 = &LAB_146856450;
                      local_7c0 = FUN_1427b121c;
                      local_7c8 = L"Engine";
                      pcStack_7d0 = (code *)0x0;
                      local_7d8 = (undefined *)CONCAT44(local_7d8._4_4_,0x10000021);
                      local_7e0 = (undefined *)CONCAT44(local_7e0._4_4_,8);
                      local_7e8._0_4_ = 0x28;
                      FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
                      local_798 = (wchar_t ****)DAT_14c948f88;
                    }
                    DAT_14c948f88 = (code *****)local_798;
                    local_780 = DAT_14c927740;
                    uVar19 = FUN_1400163b0();
                    local_7e8 = L"Struct";
                    FUN_14574b446(uVar19,local_798,local_780,L"/Script/CoreUObject");
                  }
                  local_7e8 = L"Class";
                  FUN_14574b446(DAT_14c948f88,pppppcVar18,local_778,L"/Script/CoreUObject");
                }
                lVar31 = FUN_1427dcdfa(DAT_14c949118,&local_298,0);
                goto LAB_142a6bbfa;
              }
              lVar31 = lVar31 + 2;
            } while ((longlong)(int)local_290 * 2 + -2 != lVar31);
            if (DAT_14c949118 == (code *****)0x0) {
              local_2b0 = (wchar_t ****)FUN_140631fbe;
              pppppcVar18 = (code *****)FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
              DAT_14c949118 = pppppcVar18;
              FUN_1446f470e(&local_288,L"Class",1);
              local_7b8 = &LAB_146891e90;
              local_7c0 = (code *)&LAB_146273097;
              pcStack_7d0 = (code *)0x149e2b68a;
              local_7c8 = (wchar_t *)CONCAT44(local_7c8._4_4_,199);
              local_7d8 = (undefined *)0x20;
              local_7e0 = (undefined *)CONCAT44(local_7e0._4_4_,0x10000000);
              local_7e8._0_4_ = 8;
              local_7b0 = (code ****)&local_2b0;
              FUN_14574b4b2(pppppcVar18);
              DAT_14c949118 = pppppcVar18;
              local_778 = FUN_144a7a812();
              local_798 = (wchar_t ****)DAT_14c949118;
              if (DAT_14c948f88 == (code *****)0x0) {
                local_278 = (code ****)&DAT_1427db2a2;
                pppppcVar18 = (code *****)FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
                DAT_14c948f88 = pppppcVar18;
                FUN_1446f470e(&local_458,L"Struct",1);
                local_7b8 = &LAB_146891313;
                local_7c0 = FUN_146272f63;
                pcStack_7d0 = (code *)0x149e2b68a;
                local_7c8 = (wchar_t *)CONCAT44(local_7c8._4_4_,199);
                local_7d8 = (undefined *)0x8;
                local_7e0 = (undefined *)CONCAT44(local_7e0._4_4_,0x10000020);
                local_7e8._0_4_ = 8;
                local_7b0 = (code ****)&local_278;
                FUN_14574b4b2(pppppcVar18);
                DAT_14c948f88 = pppppcVar18;
                if (DAT_14c927740 == 0) {
                  local_7b0 = (code ****)&local_268;
                  local_268 = (code ****)FUN_1449e2820;
                  local_7a0 = FUN_14081d0ea;
                  local_7a8 = FUN_14081d0ea;
                  local_7b8 = &LAB_146856450;
                  local_7c0 = FUN_1427b121c;
                  local_7c8 = L"Engine";
                  pcStack_7d0 = (code *)0x0;
                  local_7d8 = (undefined *)CONCAT44(local_7d8._4_4_,0x10000021);
                  local_7e0 = (undefined *)CONCAT44(local_7e0._4_4_,8);
                  local_7e8._0_4_ = 0x28;
                  FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
                }
                pppppcVar18 = DAT_14c948f88;
                lVar31 = DAT_14c927740;
                uVar19 = FUN_1400163b0();
                local_7e8 = L"Struct";
                FUN_14574b446(uVar19,pppppcVar18,lVar31,L"/Script/CoreUObject");
              }
              local_7e8 = L"Class";
              FUN_14574b446(DAT_14c948f88,local_798,local_778,L"/Script/CoreUObject");
            }
            local_7e8 = (wchar_t *)0x0;
            lVar31 = FUN_140277cc4(DAT_14c949118,ppppwVar7,0,0);
LAB_142a6bbfa:
            if (lVar31 != 0) {
              lVar28 = lVar31;
            }
          }
          local_7d8 = (undefined *)0x0;
          pcStack_7d0 = (code *)0x0;
          local_7e0 = (undefined *)((ulonglong)local_7e0 & 0xffffffffffffff00);
          local_7e8 = (wchar_t *)((ulonglong)local_7e8 & 0xffffffff00000000);
          pwVar21 = (wchar_t *)FUN_140010cf7(lVar28,local_770,0,0);
          pcVar4 = *(code **)(lVar28 + 0xb0);
          local_7e8 = (wchar_t *)0x0;
          FUN_140aa71ae(&local_268,pwVar21,*(undefined8 *)(lVar28 + 0x110),0);
          (*pcVar4)(&local_268);
          FUN_140010906(&local_268);
          if ((pwVar21 != (wchar_t *)0x0) || ((*(byte *)((longlong)param_2 + 0x39) & 0x10) == 0)) {
            (**(code **)(*param_2 + 0x1f0))(param_2,param_3,pwVar21);
          }
          local_7e0 = (undefined *)((ulonglong)param_6 & 0xfffffffff7ff7a7d);
          local_7c0 = param_10;
          local_7c8 = param_9;
          pcStack_7d0 = (code *)CONCAT71(pcStack_7d0._1_7_,param_8);
          local_7d8 = param_7;
          local_7e8 = pwVar21;
          cVar8 = FUN_1416d7a4f(uVar13,lVar28,pwVar21,lVar28);
          if (cVar8 != '\0') {
            if ((code *****)local_298 != (code *****)0x0) {
              FUN_1400020a8();
            }
            plVar20 = local_790;
            if (local_790 != (longlong *)0x0) {
              LOCK();
              plVar15 = local_790 + 1;
              *(int *)plVar15 = (int)*plVar15 + -1;
              UNLOCK();
              if ((int)*plVar15 != 0) goto LAB_142a6b503;
              (**(code **)*local_790)(local_790);
              LOCK();
              piVar1 = (int *)((longlong)plVar20 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 != 0) goto LAB_142a6b503;
              lVar28 = *local_790;
              plVar20 = local_790;
LAB_142a69bd8:
              (**(code **)(lVar28 + 0x10))(plVar20);
            }
            goto LAB_142a6b503;
          }
          if (param_9 != (wchar_t *)0x0) {
            local_6b8 = *(longlong **)param_9;
            if (local_6b8 != (longlong *)0x0) {
              (**(code **)(*local_6b8 + 8))();
            }
            local_6b0 = *(undefined4 *)(param_9 + 4);
            FUN_140002850(param_2,&local_2d8);
            FUN_140233b1a(local_6c8,&local_2d8);
            plVar20 = (longlong *)FUN_146890bba(lVar28);
            if (plVar20 == (longlong *)0x0) {
              local_318 = (longlong *)0x0;
              uStack_310 = 0;
            }
            else {
              (**(code **)(*plVar20 + 800))(plVar20,&local_318,lVar28);
            }
            FUN_140233b1a(local_6d8,&local_318);
            local_268 = (code ****)0x149f7e85e;
            local_260._0_4_ = 0x1a;
            FUN_1446e940c(local_3f8,&local_268);
            local_268 = (code ****)0x149f7dbf0;
            local_260._0_4_ = 0x13;
            FUN_1446e940c(local_3fc,&local_268);
            local_268 = (code ****)0x149f7e59a;
            local_260 = (wchar_t ****)CONCAT44(local_260._4_4_,0x36);
            FUN_140208c1e(&local_3d8,local_3fc,local_3f8,&local_268);
            FUN_14023409e(&local_6e8,&local_3d8,1);
            local_268 = (code ****)CONCAT44(local_268._4_4_,4);
            FUN_14023423e(local_258,local_6d8);
            local_248[0] = 4;
            FUN_14023423e(local_238,local_6c8);
            local_228[0] = 4;
            FUN_14023423e(local_218,&local_6b8);
            local_270 = local_208;
            local_278 = (code ****)&local_268;
            FUN_14010d304(&local_458);
            local_288 = local_6e8;
            local_280 = local_6e0;
            if (local_6e0 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_6e0 + 1) = (int)local_6e0[1] + 1;
              UNLOCK();
            }
            FUN_14010c016(&local_2b0,&local_288,&local_458);
            FUN_14007f2db(local_458,(ulonglong)uStack_450 & 0xffffffff);
            if ((code *****)local_458 != (code *****)0x0) {
              FUN_1400020a8();
            }
            lVar28 = 0x50;
            do {
              if (*(longlong **)((longlong)&local_268 + lVar28) != (longlong *)0x0) {
                (**(code **)(**(longlong **)((longlong)&local_268 + lVar28) + 0x10))();
                *(undefined8 *)((longlong)&local_268 + lVar28) = 0;
                *(undefined4 *)((longlong)local_258 + lVar28 + -8) = 0;
              }
              lVar28 = lVar28 + -0x20;
            } while (lVar28 != -0x10);
            if (local_6e0 != (longlong *)0x0) {
              LOCK();
              plVar20 = local_6e0 + 1;
              *(int *)plVar20 = (int)*plVar20 + -1;
              UNLOCK();
              if ((int)*plVar20 == 0) {
                (**(code **)*local_6e0)(local_6e0);
                LOCK();
                piVar1 = (int *)((longlong)local_6e0 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_6e0 + 0x10))(local_6e0);
                }
              }
            }
            if (local_6d8[0] != (longlong *)0x0) {
              (**(code **)(*local_6d8[0] + 0x10))();
            }
            if (local_6c8[0] != (longlong *)0x0) {
              (**(code **)(*local_6c8[0] + 0x10))();
            }
            if (local_6b8 != (longlong *)0x0) {
              (**(code **)(*local_6b8 + 0x10))();
            }
            FUN_140008f88(param_9,&local_2b0);
            if ((code *****)local_2b0 != (code *****)0x0) {
              (*(code *)(*local_2b0)[2])();
            }
            if (local_3d8 != (longlong *)0x0) {
              (**(code **)(*local_3d8 + 0x10))();
            }
            if (local_318 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            if (local_2d8 != (longlong *)0x0) {
              FUN_1400020a8();
            }
          }
          if ((code *****)local_298 != (code *****)0x0) {
            FUN_1400020a8();
          }
          plVar20 = local_790;
          if (local_790 == (longlong *)0x0) goto LAB_142a6af18;
          LOCK();
          plVar15 = local_790 + 1;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)*plVar15 != 0) goto LAB_142a6af18;
          (**(code **)*local_790)(local_790);
          LOCK();
          piVar1 = (int *)((longlong)plVar20 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 != 0) goto LAB_142a6af18;
          lVar28 = *local_790;
          plVar20 = local_790;
LAB_142a6b06f:
          (**(code **)(lVar28 + 0x10))(plVar20);
          goto LAB_142a6af18;
        }
        FUN_14047e026(*param_1,&local_268);
        pppppcVar18 = (code *****)local_268;
        if ((int)local_260 == 0) {
          pppppcVar18 = (code *****)&DAT_149dfb77a;
        }
        if (pppppcVar18 == (code *****)0x0) {
          lVar28 = 0;
        }
        else {
          local_7d8 = puVar6;
          local_7e0 = (undefined *)CONCAT44(local_7e0._4_4_,0x8000000);
          local_7e8 = (wchar_t *)0x0;
          lVar28 = (**(code **)(*param_2 + 0xf8))(param_2,pppppcVar18,param_3,0);
        }
        if ((code *****)local_268 != (code *****)0x0) {
          FUN_1400020a8();
        }
        if (lVar28 != 0) goto LAB_142a6b503;
        if (param_9 == (wchar_t *)0x0) goto LAB_142a6af18;
        FUN_140002850(param_2,&local_2b0);
        FUN_140233b1a(local_6f8,&local_2b0);
        lVar28 = param_2[0xe];
        plVar20 = (longlong *)FUN_146890bba(lVar28);
        if (plVar20 == (longlong *)0x0) {
          local_318 = (longlong *)0x0;
          uStack_310 = 0;
          plVar20 = (longlong *)&DAT_149dfb77a;
        }
        else {
          (**(code **)(*plVar20 + 800))(plVar20,&local_318,lVar28);
          plVar20 = (longlong *)&DAT_149dfb77a;
          if ((int)uStack_310 != 0) {
            plVar20 = local_318;
          }
        }
        FUN_140056680(&local_2d8,plVar20);
        FUN_140233b1a(local_708,&local_2d8);
        local_268 = (code ****)0x149f7e894;
        local_260._0_4_ = 0x1a;
        FUN_1446e940c(local_3f8,&local_268);
        local_268 = (code ****)0x149f7dbf0;
        local_260._0_4_ = 0x13;
        FUN_1446e940c(local_3fc,&local_268);
        local_268 = (code ****)0x149f7e6f8;
        local_260 = (wchar_t ****)CONCAT44(local_260._4_4_,0x32);
        FUN_140208c1e(&local_3d8,local_3fc,local_3f8,&local_268);
        FUN_14023409e(&local_718,&local_3d8,1);
        local_268 = (code ****)CONCAT44(local_268._4_4_,4);
        FUN_14023423e(local_258,local_708);
        local_248[0] = 4;
        FUN_14023423e(local_238,local_6f8);
        local_270 = (longlong *)local_228;
        local_278 = (code ****)&local_268;
        FUN_14010d304(&local_458);
        local_288 = local_718;
        local_280 = local_710;
        if (local_710 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_710 + 1) = (int)local_710[1] + 1;
          UNLOCK();
        }
        FUN_14010c016(&local_298,&local_288,&local_458);
        FUN_14007f2db(local_458,(ulonglong)uStack_450 & 0xffffffff);
        if ((code *****)local_458 != (code *****)0x0) {
          FUN_1400020a8();
        }
        lVar28 = 0x30;
        do {
          if (*(longlong **)((longlong)&local_268 + lVar28) != (longlong *)0x0) {
            (**(code **)(**(longlong **)((longlong)&local_268 + lVar28) + 0x10))();
            *(undefined8 *)((longlong)&local_268 + lVar28) = 0;
            *(undefined4 *)((longlong)local_258 + lVar28 + -8) = 0;
          }
          lVar28 = lVar28 + -0x20;
        } while (lVar28 != -0x10);
        if (local_710 != (longlong *)0x0) {
          LOCK();
          plVar20 = local_710 + 1;
          *(int *)plVar20 = (int)*plVar20 + -1;
          UNLOCK();
          if ((int)*plVar20 == 0) {
            (**(code **)*local_710)(local_710);
            LOCK();
            piVar1 = (int *)((longlong)local_710 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_710 + 0x10))(local_710);
            }
          }
        }
        if (local_708[0] != (longlong *)0x0) {
          (**(code **)(*local_708[0] + 0x10))();
        }
        if (local_6f8[0] != (longlong *)0x0) {
          (**(code **)(*local_6f8[0] + 0x10))();
        }
        FUN_140008f88(param_9,&local_298);
        if ((code *****)local_298 != (code *****)0x0) {
          (*(code *)(*local_298)[2])();
        }
        if (local_3d8 != (longlong *)0x0) {
          (**(code **)(*local_3d8 + 0x10))();
        }
        plVar20 = local_318;
        if (local_2d8 != (longlong *)0x0) {
          FUN_1400020a8();
          plVar20 = local_318;
        }
        goto LAB_142a68328;
      }
      if ((*(ulonglong *)(puVar37 + 0x18) & DAT_14c952a10) == 0) goto LAB_142a69e3f;
LAB_142a69b27:
      puVar14 = (undefined8 *)*param_1;
      if (*(int *)(puVar14 + 1) == 2) {
        uVar26 = *(ulonglong *)(param_2[0xe] + 0x18);
        if (DAT_14c87ead8 == '\0') {
          FUN_140024d3a(&DAT_14c87eb00);
          DAT_14c87ead8 = '\x01';
          puVar14 = (undefined8 *)*param_1;
        }
        if (uVar26 == DAT_14c892c44) {
          FUN_14047e026(puVar14,&local_268);
          FUN_1415445ba(&local_458,&local_268);
          uVar12 = (&DAT_14c758c60)[(uint)local_458 >> 8 & 0xff];
          uVar2 = (&DAT_14c758c60)[(uint)local_458 & 0xff];
          *(undefined4 *)param_3 =
               *(undefined4 *)
                ((longlong)&DAT_14c758c60 + (ulonglong)((uint)local_458 >> 0xe & 0x3fc));
          *(undefined4 *)((longlong)param_3 + 4) = uVar12;
          *(undefined4 *)(param_3 + 1) = uVar2;
          *(float *)((longlong)param_3 + 0xc) = (float)((uint)local_458 >> 0x18) * 0.003921569;
          pppppcVar18 = (code *****)local_268;
          goto LAB_142a68925;
        }
        if (*(int *)(puVar14 + 1) != 2) goto LAB_142a6b974;
        uVar26 = *(ulonglong *)(param_2[0xe] + 0x18);
        if (uVar26 == DAT_14c892c38) {
          FUN_14047e026(puVar14,&local_268);
          FUN_1415445ba(&local_458,&local_268);
          *(uint *)param_3 = (uint)local_458;
          pppppcVar18 = (code *****)local_268;
        }
        else {
          if (uVar26 != DAT_14c998238) {
            plVar20 = *(longlong **)(param_2[0xe] + 0xb8);
            if (plVar20 == (longlong *)0x0) {
LAB_142a6b94c:
              FUN_14047e026(puVar14,&local_298);
              pppppcVar18 = (code *****)local_298;
              if ((int)local_290 == 0) {
                pppppcVar18 = (code *****)&DAT_149dfb77a;
              }
              if (pppppcVar18 != (code *****)0x0) {
                local_7d8 = DAT_14c872be8;
                local_7e0 = (undefined *)CONCAT44(local_7e0._4_4_,0x8000000);
                local_7e8 = (wchar_t *)0x0;
                lVar28 = (**(code **)(*param_2 + 0xf8))(param_2,pppppcVar18,param_3,0);
                pppppcVar18 = (code *****)local_298;
                if (lVar28 != 0) goto LAB_142a68925;
              }
              pppppcVar18 = (code *****)local_298;
              if (param_9 == (wchar_t *)0x0) goto LAB_142a6af0e;
              FUN_140002850(param_2,&local_2d8);
              FUN_140233b1a(local_638,&local_2d8);
              lVar28 = param_2[0xe];
              plVar20 = (longlong *)FUN_146890bba(lVar28);
              if (plVar20 == (longlong *)0x0) {
                local_318 = (longlong *)0x0;
                uStack_310 = 0;
              }
              else {
                (**(code **)(*plVar20 + 800))(plVar20,&local_318,lVar28);
              }
              FUN_140233b1a(local_648,&local_318);
              local_268 = (code ****)0x149f7e75e;
              local_260._0_4_ = 0x1a;
              FUN_1446e940c(local_3f8,&local_268);
              local_268 = (code ****)0x149f7dbf0;
              local_260._0_4_ = 0x13;
              FUN_1446e940c(local_3fc,&local_268);
              local_268 = (code ****)0x149f7e6f8;
              local_260 = (wchar_t ****)CONCAT44(local_260._4_4_,0x32);
              FUN_140208c1e(&local_3d8,local_3fc,local_3f8,&local_268);
              FUN_14023409e(&local_658,&local_3d8,1);
              local_268 = (code ****)CONCAT44(local_268._4_4_,4);
              FUN_14023423e(local_258,local_648);
              local_248[0] = 4;
              FUN_14023423e(local_238,local_638);
              local_270 = (longlong *)local_228;
              local_278 = (code ****)&local_268;
              FUN_14010d304(&local_458);
              local_288 = local_658;
              local_280 = local_650;
              if (local_650 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_650 + 1) = (int)local_650[1] + 1;
                UNLOCK();
              }
              FUN_14010c016(&local_2b0,&local_288,&local_458);
              FUN_14007f2db(local_458,(ulonglong)uStack_450 & 0xffffffff);
              if ((code *****)local_458 != (code *****)0x0) {
                FUN_1400020a8();
              }
              lVar28 = 0x30;
              do {
                if (*(longlong **)((longlong)&local_268 + lVar28) != (longlong *)0x0) {
                  (**(code **)(**(longlong **)((longlong)&local_268 + lVar28) + 0x10))();
                  *(undefined8 *)((longlong)&local_268 + lVar28) = 0;
                  *(undefined4 *)((longlong)local_258 + lVar28 + -8) = 0;
                }
                lVar28 = lVar28 + -0x20;
              } while (lVar28 != -0x10);
              if (local_650 != (longlong *)0x0) {
                LOCK();
                plVar20 = local_650 + 1;
                *(int *)plVar20 = (int)*plVar20 + -1;
                UNLOCK();
                if ((int)*plVar20 == 0) {
                  (**(code **)*local_650)(local_650);
                  LOCK();
                  piVar1 = (int *)((longlong)local_650 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*local_650 + 0x10))(local_650);
                  }
                }
              }
              if (local_648[0] != (longlong *)0x0) {
                (**(code **)(*local_648[0] + 0x10))();
              }
            }
            else {
              (**(code **)(*plVar20 + 8))(plVar20,&local_268);
              puVar14 = (undefined8 *)*param_1;
              if (((ulonglong)local_260 & 0x1000000000000) == 0) {
                if (*(int *)(puVar14 + 1) != 2) goto LAB_142a6b974;
                goto LAB_142a6b94c;
              }
              plVar20 = *(longlong **)(param_2[0xe] + 0xb8);
              FUN_14047e026(puVar14,&local_298);
              local_3f8[0] = local_298;
              if ((int)local_290 == 0) {
                local_3f8[0] = (wchar_t ****)&DAT_149dfb77a;
              }
              local_7e0 = DAT_14c872be8;
              local_7e8 = (wchar_t *)0x0;
              cVar8 = (**(code **)(*plVar20 + 0x78))(plVar20,local_3f8,param_3,0);
              pppppcVar18 = (code *****)local_298;
              if (cVar8 != '\0') goto LAB_142a68925;
              if ((code *****)local_3f8[0] != (code *****)0x0) {
                local_7d8 = DAT_14c872be8;
                local_7e0 = (undefined *)CONCAT44(local_7e0._4_4_,0x8000000);
                local_7e8 = (wchar_t *)0x0;
                lVar28 = (**(code **)(*param_2 + 0xf8))(param_2,local_3f8[0],param_3,0);
                pppppcVar18 = (code *****)local_298;
                if (lVar28 != 0) goto LAB_142a68925;
              }
              pppppcVar18 = (code *****)local_298;
              if (param_9 == (wchar_t *)0x0) goto LAB_142a6af0e;
              FUN_140002850(param_2,&local_2d8);
              FUN_140233b1a(local_608,&local_2d8);
              lVar28 = param_2[0xe];
              plVar20 = (longlong *)FUN_146890bba(lVar28);
              if (plVar20 == (longlong *)0x0) {
                local_318 = (longlong *)0x0;
                uStack_310 = 0;
              }
              else {
                (**(code **)(*plVar20 + 800))(plVar20,&local_318,lVar28);
              }
              FUN_140233b1a(local_618,&local_318);
              local_268 = (code ****)0x149f7e75e;
              local_260._0_4_ = 0x1a;
              FUN_1446e940c(local_3fc,&local_268);
              local_268 = (code ****)0x149f7dbf0;
              local_260._0_4_ = 0x13;
              FUN_1446e940c(local_400,&local_268);
              local_268 = (code ****)0x149f7e6f8;
              local_260 = (wchar_t ****)CONCAT44(local_260._4_4_,0x32);
              FUN_140208c1e(&local_3d8,local_400,local_3fc,&local_268);
              FUN_14023409e(&local_628,&local_3d8,1);
              local_268 = (code ****)CONCAT44(local_268._4_4_,4);
              FUN_14023423e(local_258,local_618);
              local_248[0] = 4;
              FUN_14023423e(local_238,local_608);
              local_270 = (longlong *)local_228;
              local_278 = (code ****)&local_268;
              FUN_14010d304(&local_458);
              local_288 = local_628;
              local_280 = local_620;
              if (local_620 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_620 + 1) = (int)local_620[1] + 1;
                UNLOCK();
              }
              FUN_14010c016(&local_2b0,&local_288,&local_458);
              FUN_14007f2db(local_458,(ulonglong)uStack_450 & 0xffffffff);
              if ((code *****)local_458 != (code *****)0x0) {
                FUN_1400020a8();
              }
              lVar28 = 0x30;
              do {
                if (*(longlong **)((longlong)&local_268 + lVar28) != (longlong *)0x0) {
                  (**(code **)(**(longlong **)((longlong)&local_268 + lVar28) + 0x10))();
                  *(undefined8 *)((longlong)&local_268 + lVar28) = 0;
                  *(undefined4 *)((longlong)local_258 + lVar28 + -8) = 0;
                }
                lVar28 = lVar28 + -0x20;
              } while (lVar28 != -0x10);
              if (local_620 != (longlong *)0x0) {
                LOCK();
                plVar20 = local_620 + 1;
                *(int *)plVar20 = (int)*plVar20 + -1;
                UNLOCK();
                if ((int)*plVar20 == 0) {
                  (**(code **)*local_620)(local_620);
                  LOCK();
                  piVar1 = (int *)((longlong)local_620 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*local_620 + 0x10))(local_620);
                  }
                }
              }
              local_638[0] = local_608[0];
              if (local_618[0] != (longlong *)0x0) {
                (**(code **)(*local_618[0] + 0x10))();
                local_638[0] = local_608[0];
              }
            }
            if (local_638[0] != (longlong *)0x0) {
              (**(code **)(*local_638[0] + 0x10))();
            }
            FUN_140008f88(param_9,&local_2b0);
            if ((code *****)local_2b0 != (code *****)0x0) {
              (*(code *)(*local_2b0)[2])();
            }
            if (local_3d8 != (longlong *)0x0) {
              (**(code **)(*local_3d8 + 0x10))();
            }
            if (local_318 != (longlong *)0x0) {
              FUN_1400020a8();
            }
LAB_142a6cc7b:
            pppppcVar18 = (code *****)local_298;
            if (local_2d8 != (longlong *)0x0) {
              FUN_1400020a8();
              pppppcVar18 = (code *****)local_298;
            }
            goto LAB_142a6af0e;
          }
          FUN_14047e026();
          pppppcVar18 = (code *****)local_298;
          if ((int)local_290 == 0) {
            pppppcVar18 = (code *****)&DAT_149dfb77a;
          }
          lVar28 = 0;
          while( true ) {
            uVar32 = *(ushort *)((longlong)pppppcVar18 + lVar28);
            uVar26 = (ulonglong)uVar32;
            uVar33 = *(ushort *)((longlong)&DAT_149e25ba0 + lVar28);
            if (uVar32 != uVar33) break;
            if (uVar32 == 0) goto LAB_142a6b8b6;
LAB_142a6b5c9:
            lVar28 = lVar28 + 2;
          }
          if ((uVar33 | uVar32) < 0x80) {
            uVar32 = (ushort)(byte)(&DAT_149e05da0)[uVar26];
            uVar35 = (ulonglong)uVar33;
            uVar33 = (ushort)(byte)(&DAT_149e05da0)[uVar35];
            if ((&DAT_149e05da0)[uVar26] == (&DAT_149e05da0)[uVar35]) goto LAB_142a6b5c9;
          }
          if (uVar32 != uVar33) {
            lVar28 = 0;
            goto LAB_142a6b602;
          }
LAB_142a6b8b6:
          *param_3 = (code ****)0x0;
          pppppcVar18 = (code *****)local_298;
        }
        goto LAB_142a68925;
      }
      if (*(int *)(puVar14 + 1) != 6) {
LAB_142a6b974:
        if (param_9 != (wchar_t *)0x0) {
          FUN_140002850(param_2,&local_2b0);
          FUN_140233b1a(local_668,&local_2b0);
          lVar28 = param_2[0xe];
          plVar20 = (longlong *)FUN_146890bba(lVar28);
          if (plVar20 == (longlong *)0x0) {
            local_2d8 = (longlong *)0x0;
            uStack_2d0 = 0;
          }
          else {
            (**(code **)(*plVar20 + 800))(plVar20,&local_2d8,lVar28);
          }
          FUN_140233b1a(local_678,&local_2d8);
          local_268 = (code ****)0x149f7e83c;
          local_260._0_4_ = 0x10;
          FUN_1446e940c(&local_3d8,&local_268);
          local_268 = (code ****)0x149f7dbf0;
          local_260._0_4_ = 0x13;
          FUN_1446e940c(local_3f8,&local_268);
          local_268 = (code ****)0x149f7e794;
          local_260 = (wchar_t ****)CONCAT44(local_260._4_4_,0x53);
          FUN_140208c1e(&local_318,local_3f8,&local_3d8,&local_268);
          FUN_14023409e(&local_688,&local_318,1);
          local_268 = (code ****)CONCAT44(local_268._4_4_,4);
          FUN_14023423e(local_258,local_678);
          local_248[0] = 4;
          FUN_14023423e(local_238,local_668);
          local_270 = (longlong *)local_228;
          local_278 = (code ****)&local_268;
          FUN_14010d304(&local_458);
          local_288 = local_688;
          local_280 = local_680;
          if (local_680 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_680 + 1) = (int)local_680[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(&local_298,&local_288,&local_458);
          FUN_14007f2db(local_458,(ulonglong)uStack_450 & 0xffffffff);
          if ((code *****)local_458 != (code *****)0x0) {
            FUN_1400020a8();
          }
          lVar28 = 0x30;
          do {
            if (*(longlong **)((longlong)&local_268 + lVar28) != (longlong *)0x0) {
              (**(code **)(**(longlong **)((longlong)&local_268 + lVar28) + 0x10))();
              *(undefined8 *)((longlong)&local_268 + lVar28) = 0;
              *(undefined4 *)((longlong)local_258 + lVar28 + -8) = 0;
            }
            lVar28 = lVar28 + -0x20;
          } while (lVar28 != -0x10);
          if (local_680 != (longlong *)0x0) {
            LOCK();
            plVar20 = local_680 + 1;
            *(int *)plVar20 = (int)*plVar20 + -1;
            UNLOCK();
            if ((int)*plVar20 == 0) {
              (**(code **)*local_680)(local_680);
              LOCK();
              piVar1 = (int *)((longlong)local_680 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_680 + 0x10))(local_680);
              }
            }
          }
          if (local_678[0] != (longlong *)0x0) {
            (**(code **)(*local_678[0] + 0x10))();
          }
          if (local_668[0] != (longlong *)0x0) {
            (**(code **)(*local_668[0] + 0x10))();
          }
          goto LAB_142a682f7;
        }
        goto LAB_142a6af18;
      }
      puVar14 = (undefined8 *)(**(code **)*puVar14)();
      uVar13 = *puVar14;
      plVar20 = (longlong *)puVar14[1];
      if (plVar20 == (longlong *)0x0) {
        local_7e0 = (undefined *)((ulonglong)param_6 & 0xfffffffff7ff7a7d);
        local_7c0 = param_10;
        local_7c8 = param_9;
        pcStack_7d0 = (code *)CONCAT71(pcStack_7d0._1_7_,param_8);
        local_7d8 = param_7;
        local_7e8 = param_5;
        cVar8 = FUN_1416d7a4f(uVar13,param_2[0xe],param_3,param_4);
        if (cVar8 == '\0') goto LAB_142a6b039;
      }
      else {
        LOCK();
        *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
        UNLOCK();
        local_7e0 = (undefined *)((ulonglong)param_6 & 0xfffffffff7ff7a7d);
        local_7c0 = param_10;
        local_7c8 = param_9;
        pcStack_7d0 = (code *)CONCAT71(pcStack_7d0._1_7_,param_8);
        local_7d8 = param_7;
        local_7e8 = param_5;
        cVar8 = FUN_1416d7a4f(uVar13,param_2[0xe],param_3,param_4);
        if (cVar8 == '\0') {
LAB_142a6b039:
          if (param_9 != (wchar_t *)0x0) {
            local_5a8 = *(longlong **)param_9;
            if (local_5a8 != (longlong *)0x0) {
              (**(code **)(*local_5a8 + 8))();
            }
            local_5a0 = *(undefined4 *)(param_9 + 4);
            FUN_140002850(param_2,&local_2b0);
            FUN_140233b1a(local_5b8,&local_2b0);
            lVar28 = param_2[0xe];
            plVar15 = (longlong *)FUN_146890bba(lVar28);
            if (plVar15 == (longlong *)0x0) {
              local_2d8 = (longlong *)0x0;
              uStack_2d0 = 0;
            }
            else {
              (**(code **)(*plVar15 + 800))(plVar15,&local_2d8,lVar28);
            }
            FUN_140233b1a(local_5c8,&local_2d8);
            local_268 = (code ****)0x149f7e608;
            local_260._0_4_ = 0x1a;
            FUN_1446e940c(&local_3d8,&local_268);
            local_268 = (code ****)0x149f7dbf0;
            local_260._0_4_ = 0x13;
            FUN_1446e940c(local_3f8,&local_268);
            local_268 = (code ****)0x149f7e59a;
            local_260 = (wchar_t ****)CONCAT44(local_260._4_4_,0x36);
            FUN_140208c1e(&local_318,local_3f8,&local_3d8,&local_268);
            FUN_14023409e(&local_5d8,&local_318,1);
            local_268 = (code ****)CONCAT44(local_268._4_4_,4);
            FUN_14023423e(local_258,local_5c8);
            local_248[0] = 4;
            FUN_14023423e(local_238,local_5b8);
            local_228[0] = 4;
            FUN_14023423e(local_218,&local_5a8);
            local_270 = local_208;
            local_278 = (code ****)&local_268;
            FUN_14010d304(&local_458);
            local_288 = local_5d8;
            local_280 = local_5d0;
            if (local_5d0 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_5d0 + 1) = (int)local_5d0[1] + 1;
              UNLOCK();
            }
            FUN_14010c016(&local_298,&local_288,&local_458);
            FUN_14007f2db(local_458,(ulonglong)uStack_450 & 0xffffffff);
            if ((code *****)local_458 != (code *****)0x0) {
              FUN_1400020a8();
            }
            lVar28 = 0x50;
            do {
              if (*(longlong **)((longlong)&local_268 + lVar28) != (longlong *)0x0) {
                (**(code **)(**(longlong **)((longlong)&local_268 + lVar28) + 0x10))();
                *(undefined8 *)((longlong)&local_268 + lVar28) = 0;
                *(undefined4 *)((longlong)local_258 + lVar28 + -8) = 0;
              }
              lVar28 = lVar28 + -0x20;
            } while (lVar28 != -0x10);
            if (local_5d0 != (longlong *)0x0) {
              LOCK();
              plVar15 = local_5d0 + 1;
              *(int *)plVar15 = (int)*plVar15 + -1;
              UNLOCK();
              if ((int)*plVar15 == 0) {
                (**(code **)*local_5d0)(local_5d0);
                LOCK();
                piVar1 = (int *)((longlong)local_5d0 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_5d0 + 0x10))(local_5d0);
                }
              }
            }
            if (local_5c8[0] != (longlong *)0x0) {
              (**(code **)(*local_5c8[0] + 0x10))();
            }
            if (local_5b8[0] != (longlong *)0x0) {
              (**(code **)(*local_5b8[0] + 0x10))();
            }
            if (local_5a8 != (longlong *)0x0) {
              (**(code **)(*local_5a8 + 0x10))();
            }
            FUN_140008f88(param_9,&local_298);
            if ((code *****)local_298 != (code *****)0x0) {
              (*(code *)(*local_298)[2])();
            }
            if (local_318 != (longlong *)0x0) {
              (**(code **)(*local_318 + 0x10))();
            }
            if (local_2d8 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            if ((code *****)local_2b0 != (code *****)0x0) {
              FUN_1400020a8();
            }
          }
          if (plVar20 != (longlong *)0x0) {
            LOCK();
            plVar15 = plVar20 + 1;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)*plVar15 == 0) {
              (**(code **)*plVar20)(plVar20);
              LOCK();
              piVar1 = (int *)((longlong)plVar20 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                lVar28 = *plVar20;
                goto LAB_142a6b06f;
              }
            }
          }
          goto LAB_142a6af18;
        }
        LOCK();
        plVar15 = plVar20 + 1;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)*plVar15 == 0) {
          (**(code **)*plVar20)(plVar20);
          LOCK();
          piVar1 = (int *)((longlong)plVar20 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            lVar28 = *plVar20;
            goto LAB_142a69bd8;
          }
        }
      }
      goto LAB_142a6b503;
    }
    if ((*(ulonglong *)(puVar37 + 0x18) & DAT_14c9520c0) == 0) goto LAB_142a67c5a;
LAB_142a67b77:
    lVar28 = (**(code **)(*param_2 + 0x1f0))(param_2);
    if ((lVar28 != 0) && (*(int *)(*param_1 + 8) == 2)) {
      lVar28 = (**(code **)(*param_2 + 0x1f0))(param_2);
      FUN_14047e026(*param_1,&local_298);
      pppppcVar18 = (code *****)local_298;
      if ((int)local_290 == 0) {
        pppppcVar18 = (code *****)&DAT_149dfb77a;
      }
      FUN_1446f470e(&local_320,pppppcVar18,1);
      iVar10 = FUN_1448e5bf4(lVar28,local_320,4);
      if ((iVar10 == -1) ||
         (*(longlong *)(*(longlong *)(lVar28 + 0x40) + 8 + (longlong)iVar10 * 0x10) == -1)) {
        if (param_9 != (wchar_t *)0x0) {
          FUN_140002850(param_2,&local_2d8);
          FUN_140233b1a(local_330,&local_2d8);
          FUN_140009b9a(local_340,&local_298);
          FUN_140009b9a(local_350,lVar28 + 0x30);
          local_268 = (code ****)0x149f7deee;
          local_260._0_4_ = 0x19;
          FUN_1446e940c(&local_3d8,&local_268);
          local_268 = (code ****)0x149f7dbf0;
          local_260._0_4_ = 0x13;
          FUN_1446e940c(local_3f8,&local_268);
          local_268 = (code ****)0x149f7de6a;
          local_260 = (wchar_t ****)CONCAT44(local_260._4_4_,0x41);
          FUN_140208c1e(&local_318,local_3f8,&local_3d8,&local_268);
          FUN_14023409e(&local_360,&local_318,1);
          local_268 = (code ****)CONCAT44(local_268._4_4_,4);
          FUN_14023423e(local_258,local_350);
          local_248[0] = 4;
          FUN_14023423e(local_238,local_340);
          local_228[0] = 4;
          FUN_14023423e(local_218,local_330);
          local_270 = local_208;
          local_278 = (code ****)&local_268;
          FUN_14010d304(&local_458);
          local_288 = local_360;
          local_280 = local_358;
          if (local_358 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_358 + 1) = (int)local_358[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(&local_2b0,&local_288,&local_458);
          FUN_14007f2db(local_458,(ulonglong)uStack_450 & 0xffffffff);
          if ((code *****)local_458 != (code *****)0x0) {
            FUN_1400020a8();
          }
          lVar28 = 0x50;
          do {
            if (*(longlong **)((longlong)&local_268 + lVar28) != (longlong *)0x0) {
              (**(code **)(**(longlong **)((longlong)&local_268 + lVar28) + 0x10))();
              *(undefined8 *)((longlong)&local_268 + lVar28) = 0;
              *(undefined4 *)((longlong)local_258 + lVar28 + -8) = 0;
            }
            lVar28 = lVar28 + -0x20;
          } while (lVar28 != -0x10);
          if (local_358 != (longlong *)0x0) {
            LOCK();
            plVar20 = local_358 + 1;
            *(int *)plVar20 = (int)*plVar20 + -1;
            UNLOCK();
            if ((int)*plVar20 == 0) {
              (**(code **)*local_358)(local_358);
              LOCK();
              piVar1 = (int *)((longlong)local_358 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_358 + 0x10))(local_358);
              }
            }
          }
          if (local_350[0] != (longlong *)0x0) {
            (**(code **)(*local_350[0] + 0x10))();
          }
          local_2c0[0] = local_330[0];
          if (local_340[0] != (longlong *)0x0) {
            (**(code **)(*local_340[0] + 0x10))();
            local_2c0[0] = local_330[0];
          }
LAB_142a685f8:
          if (local_2c0[0] != (longlong *)0x0) {
            (**(code **)(*local_2c0[0] + 0x10))();
          }
          FUN_140008f88(param_9,&local_2b0);
          if ((code *****)local_2b0 != (code *****)0x0) {
            (*(code *)(*local_2b0)[2])();
          }
          if (local_318 != (longlong *)0x0) {
            (**(code **)(*local_318 + 0x10))();
          }
          if (local_2d8 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
        goto LAB_142a68649;
      }
      lVar28 = *param_2;
LAB_142a68389:
      (**(code **)(lVar28 + 0x1f8))(param_2,param_3);
      bVar38 = false;
LAB_142a6864c:
      if ((code *****)local_298 != (code *****)0x0) {
        FUN_1400020a8();
      }
      if (bVar38) {
LAB_142a6af18:
        uVar13 = 0;
        goto LAB_142a6b505;
      }
      goto LAB_142a6b503;
    }
    cVar8 = (**(code **)(*param_2 + 0x1e0))(param_2);
    if (cVar8 != '\0') {
      uVar13 = FUN_141360850(*param_1);
      (**(code **)(*param_2 + 0x208))(param_2,param_3,uVar13);
      goto LAB_142a6b503;
    }
    cVar8 = (**(code **)(*param_2 + 0x1e8))(param_2);
    if (cVar8 == '\0') {
      if (param_9 != (wchar_t *)0x0) {
        FUN_140002850(param_2,&local_2b0);
        FUN_140233b1a(local_370,&local_2b0);
        FUN_1400021e4(param_2[1],&local_2d8);
        FUN_140233b1a(local_380,&local_2d8);
        local_268 = (code ****)0x149f7df96;
        local_260._0_4_ = 0x19;
        FUN_1446e940c(&local_3d8,&local_268);
        local_268 = (code ****)0x149f7dbf0;
        local_260._0_4_ = 0x13;
        FUN_1446e940c(local_3f8,&local_268);
        local_268 = (code ****)0x149f7df22;
        local_260 = (wchar_t ****)CONCAT44(local_260._4_4_,0x39);
        FUN_140208c1e(&local_318,local_3f8,&local_3d8,&local_268);
        FUN_14023409e(&local_390,&local_318,1);
        local_268 = (code ****)CONCAT44(local_268._4_4_,4);
        FUN_14023423e(local_258,local_380);
        local_248[0] = 4;
        FUN_14023423e(local_238,local_370);
        local_270 = (longlong *)local_228;
        local_278 = (code ****)&local_268;
        FUN_14010d304(&local_458);
        local_288 = local_390;
        local_280 = local_388;
        if (local_388 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_388 + 1) = (int)local_388[1] + 1;
          UNLOCK();
        }
        FUN_14010c016(&local_298,&local_288,&local_458);
        FUN_14007f2db(local_458,(ulonglong)uStack_450 & 0xffffffff);
        if ((code *****)local_458 != (code *****)0x0) {
          FUN_1400020a8();
        }
        lVar28 = 0x30;
        do {
          if (*(longlong **)((longlong)&local_268 + lVar28) != (longlong *)0x0) {
            (**(code **)(**(longlong **)((longlong)&local_268 + lVar28) + 0x10))();
            *(undefined8 *)((longlong)&local_268 + lVar28) = 0;
            *(undefined4 *)((longlong)local_258 + lVar28 + -8) = 0;
          }
          lVar28 = lVar28 + -0x20;
        } while (lVar28 != -0x10);
        if (local_388 != (longlong *)0x0) {
          LOCK();
          plVar20 = local_388 + 1;
          *(int *)plVar20 = (int)*plVar20 + -1;
          UNLOCK();
          if ((int)*plVar20 == 0) {
            (**(code **)*local_388)(local_388);
            LOCK();
            piVar1 = (int *)((longlong)local_388 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_388 + 0x10))(local_388);
            }
          }
        }
        if (local_380[0] != (longlong *)0x0) {
          (**(code **)(*local_380[0] + 0x10))();
        }
        if (local_370[0] != (longlong *)0x0) {
          (**(code **)(*local_370[0] + 0x10))();
        }
LAB_142a682f7:
        FUN_140008f88(param_9,&local_298);
        if ((code *****)local_298 != (code *****)0x0) {
          (*(code *)(*local_298)[2])();
        }
        plVar20 = local_2d8;
        if (local_318 != (longlong *)0x0) {
          (**(code **)(*local_318 + 0x10))();
          plVar20 = local_2d8;
        }
LAB_142a68328:
        pppppcVar18 = (code *****)local_2b0;
        if (plVar20 != (longlong *)0x0) {
          FUN_1400020a8();
          pppppcVar18 = (code *****)local_2b0;
        }
LAB_142a6af0e:
        if (pppppcVar18 != (code *****)0x0) {
          FUN_1400020a8();
        }
      }
      goto LAB_142a6af18;
    }
    if (*(int *)(*param_1 + 8) != 2) {
      dVar5 = (double)FUN_141360850();
      lVar28 = *param_2;
      goto LAB_142a67bdf;
    }
    FUN_14047e026(*param_1,&local_268);
    pppppcVar18 = (code *****)local_268;
    if ((int)local_260 == 0) {
      pppppcVar18 = (code *****)&DAT_149dfb77a;
    }
    lVar28 = _wtoi64((wchar_t *)pppppcVar18);
    (**(code **)(*param_2 + 0x1f8))(param_2,param_3,lVar28);
    pppppcVar18 = (code *****)local_268;
    goto LAB_142a68925;
  }
  if ((*(ulonglong *)(puVar37 + 0x18) & DAT_14c949690) == 0) goto LAB_142a67b33;
LAB_142a67ac5:
  if (*(int *)(*param_1 + 8) == 2) {
    lVar28 = param_2[0xf];
    FUN_14047e026(*param_1,&local_298);
    pppppcVar18 = (code *****)local_298;
    if ((int)local_290 == 0) {
      pppppcVar18 = (code *****)&DAT_149dfb77a;
    }
    FUN_1446f470e(&local_2a0,pppppcVar18,1);
    iVar10 = FUN_1448e5bf4(lVar28,local_2a0,4);
    if ((iVar10 != -1) &&
       (*(longlong *)(*(longlong *)(lVar28 + 0x40) + 8 + (longlong)iVar10 * 0x10) != -1)) {
      param_2 = (longlong *)param_2[0xe];
      lVar28 = *param_2;
      goto LAB_142a68389;
    }
    if (param_9 != (wchar_t *)0x0) {
      FUN_140002850(param_2,&local_2d8);
      FUN_140233b1a(local_2c0,&local_2d8);
      FUN_140009b9a(local_2e8,&local_298);
      FUN_140009b9a(local_2f8,lVar28 + 0x30);
      local_268 = (code ****)0x149f7de38;
      local_260._0_4_ = 0x18;
      FUN_1446e940c(&local_3d8,&local_268);
      local_268 = (code ****)0x149f7dbf0;
      local_260._0_4_ = 0x13;
      FUN_1446e940c(local_3f8,&local_268);
      local_268 = (code ****)0x149f7ddb6;
      local_260 = (wchar_t ****)CONCAT44(local_260._4_4_,0x40);
      FUN_140208c1e(&local_318,local_3f8,&local_3d8,&local_268);
      FUN_14023409e(&local_308,&local_318,1);
      local_268 = (code ****)CONCAT44(local_268._4_4_,4);
      FUN_14023423e(local_258,local_2f8);
      local_248[0] = 4;
      FUN_14023423e(local_238,local_2e8);
      local_228[0] = 4;
      FUN_14023423e(local_218,local_2c0);
      local_270 = local_208;
      local_278 = (code ****)&local_268;
      FUN_14010d304(&local_458);
      local_288 = local_308;
      local_280 = local_300;
      if (local_300 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_300 + 1) = (int)local_300[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(&local_2b0,&local_288,&local_458);
      FUN_14007f2db(local_458,(ulonglong)uStack_450 & 0xffffffff);
      if ((code *****)local_458 != (code *****)0x0) {
        FUN_1400020a8();
      }
      lVar28 = 0x50;
      do {
        if (*(longlong **)((longlong)&local_268 + lVar28) != (longlong *)0x0) {
          (**(code **)(**(longlong **)((longlong)&local_268 + lVar28) + 0x10))();
          *(undefined8 *)((longlong)&local_268 + lVar28) = 0;
          *(undefined4 *)((longlong)local_258 + lVar28 + -8) = 0;
        }
        lVar28 = lVar28 + -0x20;
      } while (lVar28 != -0x10);
      if (local_300 != (longlong *)0x0) {
        LOCK();
        plVar20 = local_300 + 1;
        *(int *)plVar20 = (int)*plVar20 + -1;
        UNLOCK();
        if ((int)*plVar20 == 0) {
          (**(code **)*local_300)(local_300);
          LOCK();
          piVar1 = (int *)((longlong)local_300 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_300 + 0x10))(local_300);
          }
        }
      }
      if (local_2f8[0] != (longlong *)0x0) {
        (**(code **)(*local_2f8[0] + 0x10))();
      }
      if (local_2e8[0] != (longlong *)0x0) {
        (**(code **)(*local_2e8[0] + 0x10))();
      }
      goto LAB_142a685f8;
    }
LAB_142a68649:
    bVar38 = true;
    goto LAB_142a6864c;
  }
  param_2 = (longlong *)param_2[0xe];
  dVar5 = (double)FUN_141360850();
  lVar28 = *param_2;
LAB_142a67bdf:
  (**(code **)(lVar28 + 0x1f8))(param_2,param_3,(longlong)dVar5);
  goto LAB_142a6b503;
LAB_142a6962b:
  uVar34 = uVar34 & ~(uint)uVar26;
  puVar16 = (uint *)plVar20[4];
  if ((uint *)plVar20[4] == (uint *)0x0) {
    puVar16 = puVar36;
  }
  uVar27 = *(uint *)(plVar20 + 5);
  iVar25 = (int)local_790;
  lVar28 = (longlong)iVar25;
  uVar11 = puVar16[lVar28] & uVar34;
  iVar10 = (int)local_770;
  if (uVar11 == 0) {
    iVar22 = uVar27 + 0x1e;
    if (-1 < (int)(uVar27 - 1)) {
      iVar22 = uVar27 - 1;
    }
    iVar22 = iVar22 >> 5;
    iVar10 = (int)local_770 + 0x20;
    iVar23 = iVar22;
    if (iVar22 < iVar25) {
      iVar23 = iVar25;
    }
    if (iVar25 < iVar22) {
      lVar31 = 0;
      do {
        uVar11 = puVar16[lVar28 + lVar31 + 1];
        if (uVar11 != 0) {
          local_790 = (longlong *)(ulonglong)(iVar25 + (int)lVar31 + 1);
          uVar34 = 0xffffffff;
          goto LAB_142a696b7;
        }
        iVar10 = iVar10 + 0x20;
        lVar31 = lVar31 + 1;
      } while (iVar23 - lVar28 != lVar31);
      uVar34 = 0xffffffff;
      lVar28 = (longlong)iVar23;
    }
    local_790 = (longlong *)(lVar28 + 1);
    puVar36 = local_758;
    plVar20 = local_760;
    uVar11 = uVar27;
  }
  else {
LAB_142a696b7:
    uVar26 = (ulonglong)(-uVar11 & uVar11);
    uVar35 = uVar26 * 2 + 1;
    lVar28 = 0x3f;
    if (uVar35 != 0) {
      for (; uVar35 >> lVar28 == 0; lVar28 = lVar28 + -1) {
      }
    }
    uVar11 = (iVar10 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
    if ((int)uVar27 <= (int)uVar11) {
      uVar11 = uVar27;
    }
  }
  if (uVar11 == (uint)local_778) goto LAB_142a692eb;
  goto LAB_142a6935a;
LAB_142a69d74:
  uVar26 = uVar26 + 1;
  lVar28 = lVar28 + 0x10;
  if (uVar27 == uVar26) goto LAB_142a69d84;
  goto LAB_142a69cc8;
LAB_142a6b602:
  uVar32 = *(ushort *)((longlong)pppppcVar18 + lVar28);
  uVar26 = (ulonglong)uVar32;
  uVar33 = *(ushort *)((longlong)&DAT_149f7e63e + lVar28);
  if (uVar32 == uVar33) {
    if (uVar32 == 0) goto LAB_142a6c447;
LAB_142a6b61b:
    lVar28 = lVar28 + 2;
    goto LAB_142a6b602;
  }
  if ((uVar33 | uVar32) < 0x80) {
    uVar32 = (ushort)(byte)(&DAT_149e05da0)[uVar26];
    uVar35 = (ulonglong)uVar33;
    uVar33 = (ushort)(byte)(&DAT_149e05da0)[uVar35];
    if ((&DAT_149e05da0)[uVar26] == (&DAT_149e05da0)[uVar35]) goto LAB_142a6b61b;
  }
  if (uVar32 != uVar33) {
    lVar28 = 0;
    goto LAB_142a6b654;
  }
LAB_142a6c447:
  pppppcVar18 = (code *****)0x2bca2875f4373fff;
  goto LAB_142a6c451;
LAB_142a6b654:
  uVar32 = *(ushort *)((longlong)pppppcVar18 + lVar28);
  uVar26 = (ulonglong)uVar32;
  uVar33 = *(ushort *)((longlong)&DAT_149f7e646 + lVar28);
  if (uVar32 == uVar33) {
    if (uVar32 == 0) goto LAB_142a6cd10;
LAB_142a6b66d:
    lVar28 = lVar28 + 2;
    goto LAB_142a6b654;
  }
  if ((uVar33 | uVar32) < 0x80) {
    uVar32 = (ushort)(byte)(&DAT_149e05da0)[uVar26];
    uVar35 = (ulonglong)uVar33;
    uVar33 = (ushort)(byte)(&DAT_149e05da0)[uVar35];
    if ((&DAT_149e05da0)[uVar26] == (&DAT_149e05da0)[uVar35]) goto LAB_142a6b66d;
  }
  if (uVar32 != uVar33) {
    cVar8 = FUN_14170a85e(pppppcVar18,param_3);
    pppppcVar18 = (code *****)local_298;
    if ((cVar8 != '\0') ||
       (cVar8 = FUN_14680f09c(&local_298,param_3), pppppcVar18 = (code *****)local_298,
       cVar8 != '\0')) goto LAB_142a68925;
    pppppcVar18 = (code *****)local_298;
    if (param_9 == (wchar_t *)0x0) goto LAB_142a6af0e;
    FUN_140002850(param_2,&local_2d8);
    FUN_140233b1a(local_5e8,&local_2d8);
    local_268 = (code ****)0x149f7e6be;
    local_260._0_4_ = 0x1c;
    FUN_1446e940c(&local_3d8,&local_268);
    local_268 = (code ****)0x149f7dbf0;
    local_260._0_4_ = 0x13;
    FUN_1446e940c(local_3f8,&local_268);
    local_268 = (code ****)0x149f7e64e;
    local_260 = (wchar_t ****)CONCAT44(local_260._4_4_,0x37);
    FUN_140208c1e(&local_318,local_3f8,&local_3d8,&local_268);
    FUN_14023409e(&local_5f8,&local_318,1);
    local_268 = (code ****)CONCAT44(local_268._4_4_,4);
    FUN_14023423e(local_258,local_5e8);
    local_270 = (longlong *)local_248;
    local_278 = (code ****)&local_268;
    FUN_14010d304(&local_458);
    local_288 = local_5f8;
    local_280 = local_5f0;
    if (local_5f0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_5f0 + 1) = (int)local_5f0[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(&local_2b0,&local_288,&local_458);
    FUN_14007f2db(local_458,(ulonglong)uStack_450 & 0xffffffff);
    if ((code *****)local_458 != (code *****)0x0) {
      FUN_1400020a8();
    }
    if (local_258[0] != (longlong *)0x0) {
      (**(code **)(*local_258[0] + 0x10))();
    }
    if (local_5f0 != (longlong *)0x0) {
      LOCK();
      plVar20 = local_5f0 + 1;
      *(int *)plVar20 = (int)*plVar20 + -1;
      UNLOCK();
      if ((int)*plVar20 == 0) {
        (**(code **)*local_5f0)(local_5f0);
        LOCK();
        piVar1 = (int *)((longlong)local_5f0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_5f0 + 0x10))(local_5f0);
        }
      }
    }
    if (local_5e8[0] != (longlong *)0x0) {
      (**(code **)(*local_5e8[0] + 0x10))();
    }
    FUN_140008f88(param_9,&local_2b0);
    if ((code *****)local_2b0 != (code *****)0x0) {
      (*(code *)(*local_2b0)[2])();
    }
    if (local_318 != (longlong *)0x0) {
      (**(code **)(*local_318 + 0x10))();
    }
    goto LAB_142a6cc7b;
  }
LAB_142a6cd10:
  FUN_140212f8e(&local_268);
  pppppcVar18 = (code *****)local_268;
LAB_142a6c451:
  *param_3 = (code ****)pppppcVar18;
  pppppcVar18 = (code *****)local_298;
LAB_142a68925:
  if (pppppcVar18 != (code *****)0x0) {
    FUN_1400020a8();
  }
LAB_142a6b503:
  uVar13 = 1;
LAB_142a6b505:
  if ((local_48 ^ (ulonglong)auStack_808) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13;
}



// FUNCTION 142a6d596 FUN_142a6d596 body=29 status=ok
// SIG undefined FUN_142a6d596(void)

undefined8 FUN_142a6d596(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a6d5c8 FUN_142a6d5c8 body=85 status=ok
// SIG undefined FUN_142a6d5c8(void)

void FUN_142a6d5c8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f7ec30;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f7ebc0;
  return;
}



// FUNCTION 142a6d61e FUN_142a6d61e body=85 status=ok
// SIG undefined FUN_142a6d61e(void)

void FUN_142a6d61e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f7ec30;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f7ebc0;
  return;
}



// FUNCTION 142a6d674 FUN_142a6d674 body=118 status=ok
// SIG undefined FUN_142a6d674(void)

void FUN_142a6d674(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f7ec30;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f7ebc0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142a6d6db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142a6d6ea FUN_142a6d6ea body=81 status=ok
// SIG undefined FUN_142a6d6ea(void)

undefined8
FUN_142a6d6ea(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  local_18 = param_4;
  FUN_142a6d7b8(param_2,&local_20,&local_18);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a6d73c FUN_142a6d73c body=123 status=ok
// SIG undefined FUN_142a6d73c(void)

undefined8 FUN_142a6d73c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  longlong *local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = param_2;
  local_18 = param_3;
  FUN_142a6d7b8(local_30,&local_20,&local_18);
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
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a6d7b8 FUN_142a6d7b8 body=534 status=ok
// SIG undefined FUN_142a6d7b8(void)

longlong * FUN_142a6d7b8(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined *puVar6;
  bool bVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *param_2;
  if (lVar3 != 0) {
    uVar4 = *param_3;
    puVar6 = *(undefined **)(lVar3 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952a58) && (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1)) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1403a682c;
      local_50 = 0;
      local_58 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
    if (DAT_14c952a10 == 0) {
      bVar7 = puVar6 != (undefined *)0x0;
      if (puVar6 != &DAT_14c952a08 && bVar7) {
        do {
          puVar6 = *(undefined **)(puVar6 + 0x30);
          bVar7 = puVar6 != (undefined *)0x0;
          if (puVar6 == &DAT_14c952a08) break;
        } while (puVar6 != (undefined *)0x0);
      }
      if (!bVar7) goto LAB_142a6d92d;
    }
    else if ((*(ulonglong *)(puVar6 + 0x18) & DAT_14c952a10) == 0) goto LAB_142a6d92d;
    if (*(longlong *)(*(longlong *)(lVar3 + 0x70) + 0x18) == DAT_14c998238) {
      FUN_14047ad2e(uVar4,&local_38,L"%Y-%m-%dT%H:%M:%S.%sZ");
      plVar5 = (longlong *)FUN_14001cc68(0x30,0x10);
      plVar5[1] = (longlong)&DAT_100000001;
      *plVar5 = (longlong)&PTR_FUN_149e43e60;
      plVar5[2] = (longlong)&PTR_FUN_149e43e80;
      plVar5[4] = local_38;
      local_38 = 0;
      *(undefined4 *)(plVar5 + 5) = (undefined4)local_30;
      *(undefined4 *)((longlong)plVar5 + 0x2c) = local_30._4_4_;
      local_30 = 0;
      *(undefined4 *)(plVar5 + 3) = 2;
      *param_1 = (longlong)(plVar5 + 2);
      param_1[1] = (longlong)plVar5;
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
      if (local_38 != 0) {
        FUN_1400020a8();
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
    }
  }
LAB_142a6d92d:
  *param_1 = 0;
  param_1[1] = 0;
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 142a6d9d1 FUN_142a6d9d1 body=362 status=ok
// SIG undefined FUN_142a6d9d1(void)

void FUN_142a6d9d1(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400b22c2(&DAT_14c998228,"_ClassName");
  atexit((_func_5014 *)&LAB_142a64c20);
  FUN_1446f470e(&DAT_14c998238,L"DateTime",1);
  DAT_14c998240 = (undefined8 *)0x0;
  DAT_14c998248 = 0;
  FUN_1446efa72(&DAT_14c998240,0,2,0x10);
  puVar1 = DAT_14c998240;
  DAT_14c998248 = 2;
  *DAT_14c998240 = &PTR_LAB_149f7ec30;
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
  puVar1[2] = lVar3;
  *puVar1 = &PTR_FUN_149f7ebc0;
  atexit(FUN_142a6799f);
  local_40 = 0;
  uStack_38 = 0;
  local_48 = 1;
  FUN_14282b410(L"/Script/JsonUtilities",&PTR_FUN_149f7da50,1,&PTR_FUN_149f7da20);
  local_28 = 0x8000000149f7db6c;
  local_14 = 0xd;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14171c728(&DAT_14c998280,&local_28);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a6db3c FUN_142a6db3c body=55 status=ok
// SIG undefined FUN_142a6db3c(void)

void FUN_142a6db3c(void)

{
  undefined8 uVar1;
  
  if (DAT_14c998290 == 0) {
    uVar1 = FUN_140cea73f();
    DAT_14c998290 = FUN_14171c317(FUN_14628922d,uVar1,L"EDataStreamSendStatus");
  }
  return;
}



// FUNCTION 142a6db73 FUN_142a6db73 body=55 status=ok
// SIG undefined FUN_142a6db73(void)

void FUN_142a6db73(void)

{
  undefined8 uVar1;
  
  if (DAT_14c998680 == 0) {
    uVar1 = FUN_140cea73f();
    DAT_14c998680 = FUN_14171c317(FUN_14628a5e8,uVar1,L"ENetObjectCountLimiterMode");
  }
  return;
}



// FUNCTION 142a6dda2 FUN_142a6dda2 body=1156 status=ok
// SIG undefined FUN_142a6dda2(void)

void FUN_142a6dda2(void)

{
  FUN_14282b410(L"/Script/IrisCore",&PTR_FUN_149f7f0c0,1,0,0,&PTR_FUN_149f7f0a0,1);
  FUN_14282b410(L"/Script/IrisCore",&PTR_FUN_149f7f780,1,&PTR_FUN_149f7f750,1,0,0);
  FUN_14282b410(L"/Script/IrisCore",&PTR_FUN_149f7fb00,1,0,0,0,0);
  FUN_14282b410(L"/Script/IrisCore",0,0,&PTR_FUN_149f7fbc0,1,0,0);
  FUN_14282b410(L"/Script/IrisCore",0,0,&PTR_FUN_149f80700,8,0,0);
  FUN_14282b410(L"/Script/IrisCore",&PTR_FUN_149f81330,2,0,0,0,0);
  FUN_14282b410(L"/Script/IrisCore",&PTR_FUN_149f81a60,2,0,0,0,0);
  FUN_14282b410(L"/Script/IrisCore",0,0,&PTR_FUN_149f81bc0,2,0,0);
  FUN_14282b410(L"/Script/IrisCore",0,0,&PTR_FUN_149f81c90,1,0,0);
  FUN_14282b410(L"/Script/IrisCore",0,0,&PTR_FUN_149f825a0,6,0,0);
  FUN_14282b410(L"/Script/IrisCore",0,0,&PTR_FUN_149f82760,1,0,0);
  FUN_14282b410(L"/Script/IrisCore",0,0,&PTR_FUN_149f82d10,4,0,0);
  FUN_14282b410(L"/Script/IrisCore",0,0,&PTR_FUN_149f82ec0,1,0,0);
  FUN_14282b410(L"/Script/IrisCore",&PTR_FUN_149f832d0,1,0,0,0,0);
  FUN_14282b410(L"/Script/IrisCore",&PTR_FUN_149f836a0,1,0,0,0,0);
  FUN_14282b410(L"/Script/IrisCore",&PTR_FUN_149f83a10,1,0,0,0,0);
  FUN_14282b410(L"/Script/IrisCore",&PTR_FUN_149f83f10,1,&PTR_FUN_149f83ee0,1,0,0);
  FUN_14282b410(L"/Script/IrisCore",&PTR_FUN_149f84290,1,0,0,0,0);
  FUN_14282b410(L"/Script/IrisCore",&PTR_FUN_149f849f0,2,0,0,0,0);
  FUN_14282b410(L"/Script/IrisCore",&PTR_FUN_149f85380,2,0,0,&PTR_FUN_149f85360,1);
  FUN_14282b410(L"/Script/IrisCore",&PTR_FUN_149f85740,1,0,0,0,0);
  FUN_14282b410(L"/Script/IrisCore",&PTR_FUN_149f85e30,2,0,0,0,0);
  FUN_14282b410(L"/Script/IrisCore",&PTR_FUN_149f86400,1,&PTR_FUN_149f863d0,1,0,0);
  FUN_14282b410(L"/Script/IrisCore",&PTR_FUN_149f87350,3,&PTR_FUN_149f87320,1,0,0);
  FUN_14282b410(L"/Script/IrisCore",&PTR_FUN_149f87a90,2,0,0,0,0);
  FUN_14282b410(L"/Script/IrisCore",&PTR_FUN_149f88120,1,&PTR_FUN_149f880f0,1,0,0);
  FUN_14282b410(L"/Script/IrisCore",&PTR_FUN_149f88490,1,0,0,0,0);
  FUN_14282b410(L"/Script/IrisCore",0,0,&PTR_FUN_149f88530,1,0,0);
  FUN_14282b410(L"/Script/IrisCore",0,0,&PTR_FUN_149f886e0,3,0,0);
  FUN_14282b410(L"/Script/IrisCore",&PTR_FUN_149f88ab0,1,0,0,0,0);
  FUN_14282b410(L"/Script/IrisCore",&PTR_FUN_149f891a0,2,0,0,0,0);
  FUN_14282b410(L"/Script/IrisCore",0,0,&PTR_FUN_149f89420,3,0,0);
  return;
}



// FUNCTION 142a6e228 FUN_142a6e228 body=49 status=ok
// SIG undefined FUN_142a6e228(void)

void FUN_142a6e228(void)

{
  FUN_144760e21(DAT_14c998df8,DAT_14c998e00);
  if (DAT_14c998df8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142a6e25a FUN_142a6e25a body=61 status=ok
// SIG undefined FUN_142a6e25a(void)

void FUN_142a6e25a(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    (**(code **)(*param_2 + 0x90))
              (param_2,*(undefined8 *)(lVar1 + 0x108),*(undefined4 *)(lVar1 + 0x110),0,0);
  }
  return;
}



// FUNCTION 142a6e297 FUN_142a6e297 body=69 status=ok
// SIG undefined FUN_142a6e297(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a6e297(void)

{
  _DAT_14c998e18 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a6e2d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c998e20,1);
  return;
}



// FUNCTION 142a6e510 FUN_142a6e510 body=651 status=ok
// SIG undefined FUN_142a6e510(void)

undefined8 FUN_142a6e510(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  wchar_t *local_88;
  undefined4 local_80;
  undefined8 local_78;
  wchar_t *local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_38;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(ulonglong *)(param_1 + 0x20);
  }
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if ((((uVar5 == DAT_14c892e9c) || (uVar5 == DAT_14c892ea0)) &&
      (*(longlong *)(param_1 + 0x70) != 0)) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18) == DAT_14c999358)) {
    if (DAT_14c927740 == 0) {
      local_50 = &local_30;
      local_30 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_14081d0ea;
      local_58 = &LAB_146856450;
      local_60 = FUN_1427b121c;
      local_68 = L"Engine";
      local_70 = (wchar_t *)0x0;
      local_78 = CONCAT44(local_78._4_4_,0x10000021);
      local_80 = 8;
      local_88 = (wchar_t *)CONCAT44(local_88._4_4_,0x28);
      FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
    }
    if (((*(ulonglong *)(param_1 + 0x10) & 1) != 0) &&
       (uVar5 = *(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffe, uVar5 != 0)) {
      lVar1 = *(longlong *)(uVar5 + 0x10);
      iVar4 = *(int *)(lVar1 + 0x38);
      if ((*(int *)(DAT_14c927740 + 0x38) <= iVar4) &&
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14c927740 + 0x38) * 8)
          == DAT_14c927740 + 0x30)) {
        if (DAT_14c949118 == 0) {
          local_38 = FUN_140631fbe;
          lVar1 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,
                                CONCAT71((int7)((ulonglong)*(longlong *)(lVar1 + 0x30) >> 8),1));
          DAT_14c949118 = lVar1;
          FUN_1446f470e(&local_30,L"Class",1);
          local_58 = &LAB_146891e90;
          local_60 = (code *)&LAB_146273097;
          local_70 = L"Engine";
          local_68 = (wchar_t *)CONCAT44(local_68._4_4_,199);
          local_78 = 0x20;
          local_80 = 0x10000000;
          local_88 = (wchar_t *)CONCAT44(local_88._4_4_,8);
          local_50 = &local_38;
          FUN_14574b4b2(lVar1);
          DAT_14c949118 = lVar1;
          uVar2 = FUN_144a7a812();
          lVar1 = DAT_14c949118;
          uVar3 = FUN_1449e2fb2();
          local_88 = L"Class";
          FUN_14574b446(uVar3,lVar1,uVar2,L"/Script/CoreUObject");
          lVar1 = *(longlong *)(uVar5 + 0x10);
          iVar4 = *(int *)(lVar1 + 0x38);
        }
        if ((*(int *)(DAT_14c949118 + 0x38) <= iVar4) &&
           (*(longlong *)
             (*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) ==
            DAT_14c949118 + 0x30)) {
          uVar2 = CONCAT71((int7)((ulonglong)*(longlong *)(lVar1 + 0x30) >> 8),1);
          goto LAB_142a6e5ed;
        }
      }
    }
  }
  uVar2 = 0;
LAB_142a6e5ed:
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a6e79c FUN_142a6e79c body=1490 status=ok
// SIG undefined FUN_142a6e79c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a6e79c(void)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_54;
  char *local_50;
  int local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar3 = 0;
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_14282b410(L"/Script/IrisCore",&PTR_FUN_149f8d250,1,0);
  uStack_70 = 0;
  local_68 = 0;
  local_78 = 6;
  FUN_14282b410(L"/Script/IrisCore",&PTR_FUN_149f8e5d0,1,&PTR_FUN_149f8e4e0);
  uStack_70 = 0;
  local_68 = 0;
  local_78 = 4;
  FUN_14282b410(L"/Script/IrisCore",0,0,&PTR_FUN_149f8e860);
  uStack_70 = 0;
  local_68 = 0;
  local_78 = 4;
  FUN_14282b410(L"/Script/IrisCore",0,0,&PTR_FUN_149f8ebd0);
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_14282b410(L"/Script/IrisCore",&PTR_FUN_149f8f470,2,0);
  uStack_70 = 0;
  local_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/IrisCore",0,0,&PTR_FUN_149f8f620);
  uStack_70 = 0;
  local_68 = 0;
  local_78 = 3;
  FUN_14282b410(L"/Script/IrisCore",0,0,&PTR_FUN_149f8f830);
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_14282b410(L"/Script/IrisCore",&PTR_FUN_149f8fc70,1,0);
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_14282b410(L"/Script/IrisCore",&PTR_FUN_149f90000,1,0);
  uStack_70 = 0;
  local_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/IrisCore",&PTR_FUN_149f906c0,1,&PTR_FUN_149f90690);
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_14282b410(L"/Script/IrisCore",&PTR_FUN_149f90a70,1,0);
  uStack_70 = 0;
  local_68 = 0;
  local_78 = 5;
  FUN_14282b410(L"/Script/IrisCore",0,0,&PTR_FUN_149f90d90);
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_14282b410(L"/Script/IrisCore",&PTR_FUN_149f915c0,2,0);
  uStack_70 = 0;
  local_68 = 0;
  local_78 = 3;
  FUN_14282b410(L"/Script/IrisCore",0,0,&PTR_FUN_149f917f0);
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_14282b410(L"/Script/IrisCore",&PTR_FUN_149f920c0,2,0);
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_14282b410(L"/Script/IrisCore",&PTR_FUN_149f92890,2,0);
  uStack_70 = 0;
  local_68 = 0;
  local_78 = 3;
  FUN_14282b410(L"/Script/IrisCore",0,0,&PTR_FUN_149f92a90);
  uStack_70 = 0;
  local_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/IrisCore",0,0,&PTR_FUN_149f92bd0);
  uStack_70 = 0;
  local_68 = 0;
  local_78 = 4;
  FUN_14282b410(L"/Script/IrisCore",0,0,&PTR_FUN_149f93190);
  uStack_70 = 0;
  local_68 = 0;
  local_78 = 3;
  FUN_14282b410(L"/Script/IrisCore",0,0,&PTR_FUN_149f933e0);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14c998e18,L"net.Iris.UseIrisReplication",&DAT_14c998e28);
  atexit(FUN_142a6e297);
  local_50 = (char *)0x8000000149f93554;
  local_54 = 8;
  local_48 = FUN_14577453c();
  local_44 = 1;
  FUN_14628d48a(&local_50);
  local_50 = "SoftObjectPath";
  local_48 = 0xe;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  DAT_14c998f50 = (ulonglong)uVar1;
  local_50 = "SoftClassPath";
  local_48 = 0xd;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  DAT_14c998f58 = (ulonglong)uVar1;
  local_50 = "Guid";
  local_48 = 4;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50);
  DAT_14c999070 = (ulonglong)uVar1;
  local_48 = 0x15;
  lVar2 = 0;
  do {
    lVar6 = lVar2;
    if ((int)lVar6 == -3) goto LAB_142a6eb92;
    lVar2 = lVar6 + -1;
  } while ((char *)((longlong)L"IrisCore" + 0x11U) < "Vector_NetQuantize100" + lVar6 + 0x13);
  uVar1 = (uint)lVar2;
  if (0xffffffeb < uVar1) {
    uVar3 = 0;
    if ((9 < ~uVar1) || ("Vector_NetQuantize100"[lVar6 + 0x13] != '_')) goto LAB_142a6eb92;
    iVar4 = 1;
    if (uVar1 != 0xffffffff) {
      if ("Vector_NetQuantize100"[lVar6 + 0x14] == '0') goto LAB_142a6eb90;
      iVar4 = -uVar1;
    }
    lVar5 = 0;
    do {
      lVar5 = (longlong)"Vector_NetQuantize100"[lVar2 + 0x15] + lVar5 * 10 + -0x30;
      lVar6 = lVar6 + 1;
      lVar2 = lVar2 + 1;
    } while (lVar6 != 1);
    if (lVar5 < 0x7fffffff) {
      local_48 = 0x14 - iVar4;
      uVar3 = (lVar5 << 0x20) + 0x100000000;
      goto LAB_142a6eb92;
    }
  }
LAB_142a6eb90:
  uVar3 = 0;
LAB_142a6eb92:
  local_50 = "Vector_NetQuantize100";
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  DAT_14c999208 = uVar1 | uVar3;
  local_50 = "Vector_NetQuantize10";
  local_48 = 0x14;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  DAT_14c999210 = (ulonglong)uVar1;
  local_50 = "Vector_NetQuantize";
  local_48 = 0x12;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  DAT_14c999218 = (ulonglong)uVar1;
  local_50 = "Vector_NetQuantizeNormal";
  local_48 = 0x18;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  DAT_14c999220 = (ulonglong)uVar1;
  local_50 = "DateTime";
  local_48 = 8;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  DAT_14c999228 = (ulonglong)uVar1;
  FUN_1446f470e(&DAT_14c999358,L"ENetRole",1);
  _DAT_14c9993f0 = 0;
  _DAT_14c9993e8 = &PTR_LAB_149f97220;
  DAT_14c9993f8 = 0;
  _DAT_14c999400 = 0;
  atexit((_func_5014 *)&LAB_142a6e2dc);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a6ed70 FUN_142a6ed70 body=177 status=ok
// SIG undefined FUN_142a6ed70(void)

undefined8 FUN_142a6ed70(longlong *param_1,longlong param_2)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ushort *puVar6;
  
  lVar2 = param_1[1];
  if ((lVar2 == 0) || (lVar4 = *param_1, lVar4 == 0)) {
LAB_142a6edfb:
    uVar3 = 0;
  }
  else {
    uVar1 = *(ushort *)(lVar4 + 0x7c);
    if ((ulonglong)uVar1 != 0) {
      lVar2 = *(longlong *)(lVar4 + 0x38);
      puVar6 = (ushort *)(*(longlong *)(lVar4 + 0x40) + 8);
      uVar5 = 0;
      do {
        lVar4 = *(longlong *)(lVar2 + uVar5 * 8);
        FUN_146f1109e(param_1,uVar5 & 0xffffffff,
                      (ulonglong)*puVar6 * (longlong)*(int *)(lVar4 + 0x34) +
                      *(int *)(lVar4 + 0x44) + param_2);
        uVar5 = uVar5 + 1;
        puVar6 = puVar6 + 8;
      } while (uVar1 != uVar5);
      lVar2 = param_1[1];
      if ((lVar2 == 0) || (lVar4 = *param_1, lVar4 == 0)) goto LAB_142a6edfb;
    }
    if ((*(byte *)(lVar4 + 0xb9) & 8) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = (ulonglong)*(uint *)(lVar4 + 0x88) - 4;
    }
    uVar3 = CONCAT71((int7)((ulonglong)lVar2 >> 8),0x3fffffff < *(uint *)(lVar2 + lVar4));
  }
  return uVar3;
}



// FUNCTION 142a6ee22 FUN_142a6ee22 body=261 status=ok
// SIG undefined FUN_142a6ee22(void)

undefined8 FUN_142a6ee22(longlong *param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  ushort uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  ushort *puVar7;
  longlong *plVar8;
  ulonglong uVar9;
  
  lVar4 = param_1[1];
  if ((lVar4 == 0) || (plVar8 = (longlong *)*param_1, plVar8 == (longlong *)0x0)) {
LAB_142a6eefe:
    uVar5 = 0;
  }
  else {
    uVar2 = *(ushort *)((longlong)plVar8 + 0x7c);
    if ((ulonglong)uVar2 != 0) {
      lVar4 = plVar8[7];
      bVar1 = *(byte *)(plVar8 + 0x17);
      puVar7 = (ushort *)(plVar8[8] + 8);
      uVar9 = 0;
      do {
        if ((*(longlong *)(puVar7 + -4) != 0) &&
           ((param_3 == 0 || (bVar1 & 1) != 0 ||
            (cVar3 = FUN_146f113c6(param_3,uVar9 & 0xffffffff), cVar3 != '\0')))) {
          lVar6 = *(longlong *)(lVar4 + uVar9 * 8);
          FUN_146f0af3c(plVar8,uVar9 & 0xffffffff,
                        (ulonglong)*(uint *)(*plVar8 + uVar9 * 8) + param_1[1],
                        (ulonglong)*puVar7 * (longlong)*(int *)(lVar6 + 0x34) +
                        *(int *)(lVar6 + 0x44) + param_2);
        }
        uVar9 = uVar9 + 1;
        puVar7 = puVar7 + 8;
      } while (uVar2 != uVar9);
      lVar4 = param_1[1];
      if ((lVar4 == 0) || (plVar8 = (longlong *)*param_1, plVar8 == (longlong *)0x0))
      goto LAB_142a6eefe;
    }
    if ((*(byte *)((longlong)plVar8 + 0xb9) & 8) == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = (ulonglong)*(uint *)(plVar8 + 0x11) - 4;
    }
    uVar5 = CONCAT71((int7)((ulonglong)lVar4 >> 8),0x3fffffff < *(uint *)(lVar4 + lVar6));
  }
  return uVar5;
}



// FUNCTION 142a6ef28 FUN_142a6ef28 body=675 status=ok
// SIG undefined FUN_142a6ef28(void)

void FUN_142a6ef28(longlong *param_1,longlong *param_2,longlong param_3,char param_4)

{
  uint *puVar1;
  ushort uVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined *puVar8;
  longlong *plVar9;
  byte bVar10;
  ushort *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_188 [39];
  byte local_161;
  longlong *local_160;
  undefined1 local_158 [256];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if ((param_1[1] != 0) && (lVar14 = *param_1, lVar14 != 0)) {
    local_58 = (undefined1 *)0x0;
    local_50 = 0x8000000000;
    uVar2 = *(ushort *)(lVar14 + 0x7c);
    bVar10 = 1;
    if (param_4 == '\0') {
      bVar10 = *(byte *)(lVar14 + 0xb8) & 1;
    }
    if ((ulonglong)uVar2 != 0) {
      lVar15 = *(longlong *)(lVar14 + 0x38);
      puVar11 = (ushort *)(*(longlong *)(lVar14 + 0x40) + 8);
      uVar13 = 0;
      local_161 = bVar10;
      local_160 = param_2;
      do {
        if ((bVar10 != 0) || (cVar4 = FUN_146f113c6(param_1,uVar13 & 0xffffffff), cVar4 != '\0')) {
          lVar14 = *(longlong *)(lVar15 + uVar13 * 8);
          FUN_146f0a8cd((longlong *)*param_1,uVar13 & 0xffffffff,
                        (ulonglong)*puVar11 * (longlong)*(int *)(lVar14 + 0x34) +
                        *(int *)(lVar14 + 0x44) + param_3,
                        (ulonglong)*(uint *)(*(longlong *)*param_1 + uVar13 * 8) + param_1[1]);
          uVar3 = local_50;
          if (*puVar11 == 0) {
            lVar12 = (longlong)(int)local_50;
            uVar5 = (int)local_50 + 1;
            local_50 = CONCAT44(local_50._4_4_,uVar5);
            if (local_50._4_4_ < uVar5) {
              FUN_146f1beb2(local_158,uVar3 & 0xffffffff);
            }
            puVar6 = local_58;
            if (local_58 == (undefined1 *)0x0) {
              puVar6 = local_158;
            }
            *(undefined2 *)(puVar6 + lVar12 * 2) = *(undefined2 *)(lVar14 + 0x40);
            bVar10 = local_161;
          }
        }
        uVar13 = uVar13 + 1;
        puVar11 = puVar11 + 8;
        param_2 = local_160;
      } while (uVar2 != uVar13);
    }
    if (param_2 != (longlong *)0x0) {
      puVar6 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar6 = local_158;
      }
      lVar14 = (longlong)(int)local_50;
      if (lVar14 != 0) {
        lVar15 = 0;
        do {
          uVar2 = *(ushort *)(puVar6 + lVar15);
          uVar13 = (**(code **)(*param_2 + 0x280))();
          if (uVar13 < 0xffffffff00000000) {
            plVar9 = DAT_14c9980d0;
            if (DAT_14c9980d8 == 0) {
              plVar9 = (longlong *)0x0;
            }
            (**(code **)(*plVar9 + 0x58))(plVar9,param_2,uVar13,uVar2);
          }
          else {
            uVar5 = (uint)uVar13;
            if ((-1 < (int)uVar5) && ((int)uVar5 < DAT_14c998088)) {
              puVar8 = DAT_14c998080;
              if (DAT_14c998080 == (undefined *)0x0) {
                puVar8 = &DAT_14c998070;
              }
              if ((*(uint *)(puVar8 + ((uint)(uVar13 >> 3) & 0xffffffc)) >> (uVar5 & 0x1f) & 1) != 0
                 ) {
                lVar7 = (ulonglong)(uVar5 & 0x7fffffff) * 0x68 + DAT_14c998060;
                lVar12 = *(longlong *)(lVar7 + 0x18);
                if (*(longlong *)(lVar7 + 0x18) == 0) {
                  lVar12 = lVar7 + 8;
                }
                puVar1 = (uint *)(lVar12 + (ulonglong)(uVar2 >> 5) * 4);
                *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
                *(byte *)(lVar7 + 0x60) = *(byte *)(lVar7 + 0x60) | 1;
              }
            }
          }
          lVar15 = lVar15 + 2;
        } while (lVar14 * 2 != lVar15);
      }
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a6f1cc FUN_142a6f1cc body=332 status=ok
// SIG undefined FUN_142a6f1cc(void)

void FUN_142a6f1cc(longlong *param_1,longlong *param_2,longlong *param_3)

{
  ushort uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  
  if (((param_1[1] != 0) && (plVar3 = (longlong *)*param_1, plVar3 != (longlong *)0x0)) &&
     (uVar1 = *(ushort *)((longlong)plVar3 + 0x7c), (ulonglong)uVar1 != 0)) {
    lVar4 = *plVar3;
    lVar5 = plVar3[7];
    plVar12 = (longlong *)plVar3[8];
    uVar2 = *(uint *)(plVar3 + 0x17);
    uVar13 = 0;
    lVar9 = 0;
    do {
      lVar6 = *plVar12;
      if (((lVar6 != 0) &&
          (((uVar2 & 1) != 0 || (cVar8 = FUN_146f113c6(param_1,uVar13 & 0xffffffff), cVar8 != '\0'))
          )) && (lVar7 = *(longlong *)(lVar5 + uVar13 * 8), lVar7 != lVar9)) {
        uVar10 = (ulonglong)*(uint *)(lVar4 + uVar13 * 8);
        if (*param_3 == 0) {
          lVar11 = 0;
        }
        else {
          lVar11 = *(longlong *)(*param_3 + 8) + uVar10;
        }
        if (*(char *)((longlong)param_3 + 9) == '\x01') {
          if (((char)param_3[1] != '\0') || ((*(byte *)(plVar3[3] + uVar13 * 2) & 8) == 0)) {
LAB_142a6f2b3:
            cVar8 = FUN_146f0a38a(plVar3,uVar13 & 0xffffffff,uVar10 + param_1[1],lVar11);
            if (cVar8 != '\0') goto LAB_142a6f2de;
          }
        }
        else if ((char)param_3[1] != '\0') goto LAB_142a6f2b3;
        (**(code **)(*param_2 + 0x248))(param_2,lVar6,lVar11);
        lVar9 = lVar7;
      }
LAB_142a6f2de:
      uVar13 = uVar13 + 1;
      plVar12 = plVar12 + 2;
    } while (uVar1 != uVar13);
  }
  return;
}



// FUNCTION 142a6f318 FUN_142a6f318 body=69 status=ok
// SIG undefined FUN_142a6f318(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a6f318(void)

{
  _DAT_14c999478 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a6f35a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c999480,1);
  return;
}



// FUNCTION 142a6f35d FUN_142a6f35d body=69 status=ok
// SIG undefined FUN_142a6f35d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a6f35d(void)

{
  _DAT_14c999488 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a6f39f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c999490,1);
  return;
}



// FUNCTION 142a6f3a2 FUN_142a6f3a2 body=69 status=ok
// SIG undefined FUN_142a6f3a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a6f3a2(void)

{
  _DAT_14c999498 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a6f3e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9994a0,1);
  return;
}



// FUNCTION 142a6f3e7 FUN_142a6f3e7 body=69 status=ok
// SIG undefined FUN_142a6f3e7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a6f3e7(void)

{
  _DAT_14c9994a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a6f429. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9994b0,1);
  return;
}



// FUNCTION 142a6f42c FUN_142a6f42c body=69 status=ok
// SIG undefined FUN_142a6f42c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a6f42c(void)

{
  _DAT_14c9994b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a6f46e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9994c0,1);
  return;
}



// FUNCTION 142a6f471 FUN_142a6f471 body=46 status=ok
// SIG undefined FUN_142a6f471(void)

void FUN_142a6f471(void)

{
  if (DAT_14c9994d0 != 0) {
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
    DAT_14c9994d0 = 0;
  }
  return;
}



// FUNCTION 142a6f4a0 FUN_142a6f4a0 body=2457 status=ok
// SIG undefined FUN_142a6f4a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_142a6f4a0(longlong *param_1,code **param_2,longlong *param_3)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  code **ppcVar8;
  longlong lVar9;
  longlong lVar10;
  code **ppcVar11;
  code **ppcVar12;
  code *pcVar13;
  ulonglong uVar14;
  code **unaff_RDI;
  int iVar15;
  byte bVar16;
  byte bVar17;
  bool bVar18;
  bool bVar19;
  undefined1 auStack_21f8 [32];
  code ***local_21d8;
  undefined4 local_21d0;
  undefined8 local_21c8;
  wchar_t *local_21c0;
  wchar_t *local_21b8;
  code *local_21b0;
  undefined1 *local_21a8;
  code **local_21a0;
  code *local_2198;
  code *local_2190;
  undefined8 local_2180;
  longlong *local_2178;
  code **local_2170;
  code **local_2168;
  longlong *local_2160;
  ulonglong local_2158 [2];
  code **local_2148;
  undefined8 uStack_2140;
  ulonglong uStack_2138;
  undefined4 local_2130;
  uint local_212c;
  code *local_2128 [3];
  undefined2 uStack_2110;
  undefined6 uStack_210e;
  ushort local_2108;
  undefined2 uStack_2106;
  undefined6 uStack_2104;
  undefined8 local_20fc;
  undefined8 local_20f0;
  undefined8 uStack_20e8;
  undefined8 local_20d8;
  undefined8 uStack_20d0;
  longlong local_20c8;
  undefined8 uStack_20c0;
  undefined8 local_20b8;
  undefined8 uStack_20b0;
  longlong local_20a8;
  longlong lStack_20a0;
  code **local_2098;
  code *local_2090;
  code *local_2088;
  code *pcStack_2080;
  undefined1 *local_2078;
  char local_2070;
  undefined1 local_2068 [224];
  code **local_1f88;
  undefined8 local_1f80;
  undefined1 local_68 [8];
  ulonglong local_60;
  undefined8 uStack_48;
  
  uStack_48 = 0x142a6f4b6;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_21f8;
  lVar5 = *param_3;
  local_2178 = param_3;
  if (lVar5 != 0) {
    local_2088 = (code *)((ulonglong)param_2 | 1);
    if ((((ulonglong)param_2 & 0xfffffffffffffffe) != 0) && (DAT_14c950c29 == '\x01')) {
      FUN_1456cec3c();
    }
    unaff_RDI = &local_2088;
    uVar7 = FUN_146f14910(unaff_RDI);
    puVar6 = (undefined8 *)FUN_142a7214e(lVar5,unaff_RDI,uVar7);
    if (puVar6 != (undefined8 *)0x0) {
      lVar5 = *(longlong *)*puVar6;
      *param_1 = lVar5;
      if ((lVar5 != 0) && ((*(byte *)(lVar5 + 0xb8) & 8) != 0)) {
        LOCK();
        *(int *)(lVar5 + 0xbc) = *(int *)(lVar5 + 0xbc) + 1;
        UNLOCK();
      }
      goto LAB_142a6f99a;
    }
  }
  if (param_2 == (code **)0x0) {
LAB_142a6f5bd:
    bVar19 = false;
    uVar14 = 0;
    bVar18 = false;
  }
  else {
    if (DAT_14c948fa0 == (code **)0x0) {
      local_2128[0] = (code *)&DAT_1427db2a2;
      ppcVar12 = (code **)FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c948fa0 = ppcVar12;
      FUN_1446f470e(&local_20d8,L"ScriptStruct",1);
      local_21a8 = &LAB_1468915ce;
      local_21b0 = FUN_1427dc742;
      local_21c0 = L"Engine";
      local_21b8 = (wchar_t *)CONCAT44(local_21b8._4_4_,199);
      local_21c8 = 0x10;
      local_21d0 = 0x10000020;
      local_21d8._0_4_ = 8;
      local_21a0 = local_2128;
      FUN_14574b4b2(ppcVar12);
      DAT_14c948fa0 = ppcVar12;
      if (DAT_14c927740 == 0) {
        local_21a0 = &local_2088;
        local_2088 = FUN_1449e2820;
        local_2190 = FUN_14081d0ea;
        local_2198 = FUN_14081d0ea;
        local_21a8 = &LAB_146856450;
        local_21b0 = FUN_1427b121c;
        local_21b8 = L"Engine";
        local_21c0 = (wchar_t *)0x0;
        local_21c8 = CONCAT44(local_21c8._4_4_,0x10000021);
        local_21d0 = 8;
        local_21d8._0_4_ = 0x28;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
      }
      unaff_RDI = DAT_14c948fa0;
      lVar5 = DAT_14c927740;
      uVar7 = FUN_1449e2fb2();
      local_21d8 = (code ***)0x149e6c396;
      FUN_14574b446(uVar7,unaff_RDI,lVar5,L"/Script/CoreUObject");
    }
    if ((*(int *)(param_2[2] + 0x38) < *(int *)(DAT_14c948fa0 + 7)) ||
       (*(code ***)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(DAT_14c948fa0 + 7) * 8) !=
        DAT_14c948fa0 + 6)) goto LAB_142a6f5bd;
    lVar5 = FUN_146288e54();
    if ((lVar5 == 0) || (*(int *)(param_2 + 7) < *(int *)(lVar5 + 0x38))) {
      bVar18 = false;
    }
    else {
      bVar18 = *(longlong *)(param_2[6] + (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30;
    }
    lVar5 = FUN_146288f1e();
    if ((((lVar5 == 0) || (*(int *)(param_2 + 7) < *(int *)(lVar5 + 0x38))) ||
        (*(longlong *)(param_2[6] + (longlong)*(int *)(lVar5 + 0x38) * 8) != lVar5 + 0x30)) ||
       ((*(byte *)(local_2178 + 3) & 4) == 0)) {
      bVar19 = (*(ushort *)((longlong)param_2 + 0xb1) & 0x1004) != 0;
      uVar14 = 0;
    }
    else {
      uVar14 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
      bVar19 = false;
    }
  }
  local_20a8 = 0;
  lStack_20a0 = 0;
  local_20b8 = 0;
  uStack_20b0 = 0;
  local_20c8 = 0;
  uStack_20c0 = 0;
  local_20d8 = 0;
  uStack_20d0 = 0;
  local_2098 = (code **)0x0;
  local_20fc = 0;
  local_2128[0] = (code *)0x0;
  local_2128[1] = (code *)0x0;
  local_2128[2] = (code *)0x0;
  uStack_2110 = 0;
  uStack_210e = 0;
  local_2108 = 0;
  uStack_2106 = 0;
  uStack_2104 = 0;
  local_20f0 = 0;
  uStack_20e8 = 0;
  local_2170 = param_2;
  local_2160 = param_1;
  if (((*(byte *)(local_2178 + 3) & 0x10) == 0) &&
     (iVar3 = FUN_146f145b0(local_2128,param_2), uVar1 = uStack_20c0, iVar3 != 0)) {
    lVar5 = (longlong)(int)uStack_20c0;
    uVar4 = (int)uStack_20c0 + 1;
    uStack_20c0 = CONCAT44(uStack_20c0._4_4_,uVar4);
    if (uStack_20c0._4_4_ < uVar4) {
      FUN_146f1aa0c(&local_20c8,uVar1 & 0xffffffff);
    }
    ppcVar12 = local_2128;
    puVar6 = (undefined8 *)(lVar5 * 0x48 + local_20c8);
    for (lVar9 = 9; lVar9 != 0; lVar9 = lVar9 + -1) {
      *puVar6 = *ppcVar12;
      ppcVar12 = ppcVar12 + 1;
      puVar6 = puVar6 + 1;
    }
    bVar17 = 1;
    ppcVar12 = local_2170;
    if (iVar3 == 2) {
      do {
        ppcVar12 = (code **)ppcVar12[8];
        if (ppcVar12 == (code **)0x0) break;
        lVar5 = FUN_146f0befe(ppcVar12[3]);
      } while (lVar5 == 0);
      local_1f88 = (code **)0x0;
      local_1f80 = 0x2000000000;
      bVar17 = 1;
      if (ppcVar12 != local_2170) {
        ppcVar11 = local_2170;
        do {
          uVar14 = local_1f80 & 0xffffffff;
          uVar4 = (int)local_1f80 + 1;
          local_1f80 = CONCAT44(local_1f80._4_4_,uVar4);
          if (local_1f80._4_4_ < uVar4) {
            FUN_146f1c572(&local_2088,uVar14);
          }
          ppcVar8 = local_1f88;
          if (local_1f88 == (code **)0x0) {
            ppcVar8 = &local_2088;
          }
          memmove(ppcVar8 + 1,ppcVar8,uVar14 << 3);
          ppcVar8 = local_1f88;
          if (local_1f88 == (code **)0x0) {
            ppcVar8 = &local_2088;
          }
          *ppcVar8 = (code *)ppcVar11;
          ppcVar11 = (code **)ppcVar11[8];
        } while (ppcVar11 != ppcVar12);
        ppcVar12 = &local_2088;
        if (local_1f88 != (code **)0x0) {
          ppcVar12 = local_1f88;
        }
        bVar17 = 1;
        if ((longlong)(int)local_1f80 != 0) {
          local_2168 = ppcVar12 + (int)local_1f80;
          bVar17 = 1;
          do {
            if (*ppcVar12 != (code *)0x0) {
              for (lVar5 = *(longlong *)(*ppcVar12 + 0x50); local_2180 = ppcVar12, lVar5 != 0;
                  lVar5 = *(longlong *)(lVar5 + 0x18)) {
                if ((~*(uint *)(*(longlong *)(lVar5 + 8) + 0x18) & 0x8001) == 0) {
                  do {
                    if ((*(byte *)(lVar5 + 0x3b) & 0x80) == 0) {
                      local_2148 = (code **)0x0;
                      uStack_2140 = 0;
                      uStack_2138 = uStack_2138 & 0xffffffffffffff00;
                      cVar2 = FUN_146f14512(local_2128,lVar5,&local_2148);
                      if (cVar2 != '\0') {
                        uVar14 = uStack_20c0;
                        for (iVar3 = *(int *)(lVar5 + 0x30); uStack_20c0 = uVar14, iVar3 != 0;
                            iVar3 = iVar3 + -1) {
                          uStack_20c0._0_4_ = (int)uVar14;
                          lVar9 = (longlong)(int)uStack_20c0;
                          uVar4 = (int)uStack_20c0 + 1;
                          uStack_20c0._4_4_ = (uint)(uVar14 >> 0x20);
                          uStack_20c0 = CONCAT44(uStack_20c0._4_4_,uVar4);
                          if (uStack_20c0._4_4_ < uVar4) {
                            FUN_146f1aa0c(&local_20c8,uVar14 & 0xffffffff);
                          }
                          ppcVar12 = local_2128;
                          puVar6 = (undefined8 *)(lVar9 * 0x48 + local_20c8);
                          for (lVar10 = 9; lVar10 != 0; lVar10 = lVar10 + -1) {
                            *puVar6 = *ppcVar12;
                            ppcVar12 = ppcVar12 + 1;
                            puVar6 = puVar6 + 1;
                          }
                          uVar14 = uStack_20c0;
                        }
                      }
                    }
                    else {
                      bVar17 = 0;
                    }
                    do {
                      lVar5 = *(longlong *)(lVar5 + 0x18);
                      ppcVar12 = local_2180;
                      if (lVar5 == 0) goto LAB_142a6fc0b;
                    } while ((~*(uint *)(*(longlong *)(lVar5 + 8) + 0x18) & 0x8001) != 0);
                  } while( true );
                }
              }
            }
LAB_142a6fc0b:
            ppcVar12 = ppcVar12 + 1;
          } while (ppcVar12 != local_2168);
        }
        if (local_1f88 != (code **)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
  else {
    ppcVar12 = local_2170;
    if (((bVar19) && (((*(byte *)(local_2178 + 3) & 0x10) == 0 && (DAT_14c872bf0 == '\0')))) &&
       (DAT_14c75f43a == '\x01')) {
      FUN_146f1466c(param_2[3]);
      ppcVar12 = local_2170;
    }
    while( true ) {
      bVar16 = 1;
      bVar19 = true;
      if (param_2 == (code **)0x0) break;
      pcVar13 = ppcVar12[10];
      if (pcVar13 != (code *)0x0) {
LAB_142a6f69b:
        local_2168 = ppcVar12;
        if ((~*(uint *)(*(longlong *)(pcVar13 + 8) + 0x18) & 0x8001) != 0)
        goto code_r0x000142a6f6b3;
        bVar16 = 1;
        iVar3 = 0;
        uVar14 = uVar14 ^ 1;
        uVar1 = (ulonglong)local_2180 >> 0x20;
        local_2180 = (code **)CONCAT44((int)uVar1,(int)uVar14);
LAB_142a6f700:
        if ((((byte)pcVar13[0x3b] & 0x80) == 0) ||
           ((bVar18 && (*(longlong *)(pcVar13 + 0x20) == DAT_14c999458)))) {
          local_2088 = (code *)0x0;
          pcStack_2080 = (code *)0x0;
          local_2078 = (undefined1 *)((ulonglong)local_2078 & 0xffffffffffffff00);
          cVar2 = FUN_146f14512(local_2128,pcVar13,&local_2088);
          if ((cVar2 != '\0') &&
             (((local_2108 & 0x800) == 0 &&
              ((((local_2108 & 0x4000) != 0 || (char)uVar14 != '\0' ||
                ((*(byte *)(local_2178 + 3) & 8) != 0)) &&
               (iVar15 = *(int *)(pcVar13 + 0x30), iVar15 != 0)))))) {
            do {
              uVar14 = uStack_20c0;
              lVar5 = (longlong)(int)uStack_20c0;
              uVar4 = (int)uStack_20c0 + 1;
              uStack_20c0 = CONCAT44(uStack_20c0._4_4_,uVar4);
              if (uStack_20c0._4_4_ < uVar4) {
                FUN_146f1aa0c(&local_20c8,uVar14 & 0xffffffff);
              }
              ppcVar12 = local_2128;
              puVar6 = (undefined8 *)(lVar5 * 0x48 + local_20c8);
              for (lVar9 = 9; lVar9 != 0; lVar9 = lVar9 + -1) {
                *puVar6 = *ppcVar12;
                ppcVar12 = ppcVar12 + 1;
                puVar6 = puVar6 + 1;
              }
              iVar15 = iVar15 + -1;
            } while (iVar15 != 0);
            uVar14 = (ulonglong)local_2180 & 0xffffffff;
          }
        }
        else {
          bVar16 = 0;
        }
        iVar3 = iVar3 + 1;
        ppcVar12 = (code **)(pcVar13 + 0x18);
        do {
          for (pcVar13 = *ppcVar12; pcVar13 != (code *)0x0; pcVar13 = *(code **)(pcVar13 + 0x18)) {
            if ((~*(uint *)(*(longlong *)(pcVar13 + 8) + 0x18) & 0x8001) == 0) goto LAB_142a6f700;
          }
          local_2168 = (code **)(**(code **)(*local_2168 + 0x2b0))();
          ppcVar12 = local_2168 + 10;
        } while (local_2168 != (code **)0x0);
        bVar19 = iVar3 == 0;
        local_2168 = (code **)0x0;
        break;
      }
LAB_142a6f6c4:
      param_2 = (code **)(**(code **)(*ppcVar12 + 0x2b0))();
      ppcVar12 = param_2;
    }
    bVar17 = 0;
    if ((bVar19 & bVar16) == 0) {
      bVar17 = bVar16;
    }
  }
  ppcVar12 = local_2170;
  iVar3 = *(int *)((longlong)local_2170 + 0x5c);
  lStack_20a0 = (longlong)iVar3;
  local_20a8 = (longlong)(int)(-iVar3 & (*(int *)(local_2170 + 0xb) + iVar3) - 1U);
  local_2098 = local_2170;
  local_2088 = (code *)local_2068;
  local_2070 = '\0';
  local_2078 = local_68;
  uStack_2140 = 0;
  uStack_2138 = 0;
  pcStack_2080 = local_2088;
  FUN_146f146dc(&local_2088,local_2170);
  local_2130 = 1;
  local_212c = (local_212c & 0xfffffffc) + (uint)bVar17 * 2;
  lVar5 = *local_2178;
  local_2090 = ppcVar12[3];
  local_2148 = &local_2088;
  FUN_1400021e4(&local_2090,local_2158);
  param_1 = local_2160;
  local_21d8 = &local_2148;
  FUN_146f11e34(&local_20d8,local_2160,local_2158,lVar5);
  if (local_2158[0] != 0) {
    FUN_1400020a8();
  }
  lVar5 = *local_2178;
  if ((lVar5 != 0) && (*param_1 != 0)) {
    local_2158[0] = (ulonglong)ppcVar12 | 1;
    if ((((ulonglong)ppcVar12 & 0xfffffffffffffffe) != 0) && (DAT_14c950c29 == '\x01')) {
      FUN_1456cec3c((ulonglong)ppcVar12 & 0xfffffffffffffffe);
    }
    uVar7 = FUN_146f14910(local_2158);
    FUN_142a722f6(lVar5,local_2158,uVar7,param_1);
  }
  if (local_2070 == '\x01') {
    FUN_1400020a8(local_2088);
  }
  FUN_146f12788(&local_20d8);
LAB_142a6f99a:
  if ((local_60 ^ (ulonglong)auStack_21f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
code_r0x000142a6f6b3:
  pcVar13 = *(code **)(pcVar13 + 0x18);
  if (pcVar13 == (code *)0x0) goto LAB_142a6f6c4;
  goto LAB_142a6f69b;
}



// FUNCTION 142a6fe3a FUN_142a6fe3a body=210 status=ok
// SIG undefined FUN_142a6fe3a(void)

void FUN_142a6fe3a(longlong *param_1,longlong param_2)

{
  ushort uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  
  if ((*(byte *)(param_2 + 0xb9) & 2) != 0) {
    lVar9 = *(longlong *)(*param_1 + 0x70);
    do {
      lVar6 = FUN_146f0befe(*(undefined8 *)(lVar9 + 0x18));
      if (lVar6 != 0) {
        return;
      }
      lVar9 = *(longlong *)(lVar9 + 0x40);
    } while (lVar9 != 0);
    uVar1 = *(ushort *)(param_2 + 0x7c);
    if (uVar1 != 0) {
      lVar9 = *(longlong *)(param_2 + 0x38);
      lVar6 = 0;
      uVar7 = 0;
      uVar11 = 0;
      plVar10 = (longlong *)0x0;
      do {
        plVar3 = *(longlong **)(lVar9 + lVar6);
        lVar4 = plVar3[6];
        iVar2 = *(int *)((longlong)plVar3 + 0x34);
        iVar5 = (**(code **)(*plVar3 + 0x178))(plVar3);
        uVar7 = -(longlong)iVar5 & (uVar7 + (longlong)iVar5) - 1;
        if (plVar3 != plVar10) {
          uVar8 = (ulonglong)*(int *)((longlong)plVar3 + 0x44);
          if ((uVar7 != uVar8) && (uVar11 != uVar8)) {
            return;
          }
          if (uVar11 != uVar8) {
            uVar11 = uVar7;
          }
          uVar7 = (longlong)iVar2 * (longlong)(int)lVar4 + uVar11;
          plVar10 = plVar3;
        }
        lVar6 = lVar6 + 8;
      } while ((ulonglong)uVar1 * 8 != lVar6);
    }
  }
  return;
}



// FUNCTION 142a6ff0c FUN_142a6ff0c body=466 status=ok
// SIG undefined FUN_142a6ff0c(void)

longlong * FUN_142a6ff0c(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f8;
  undefined8 local_f0;
  undefined8 local_e8 [3];
  undefined2 uStack_d0;
  undefined6 uStack_ce;
  undefined2 uStack_c8;
  undefined8 uStack_c6;
  undefined8 local_bc;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar4 = *param_4;
  if (lVar4 != 0) {
    local_98 = param_3;
    uVar2 = FUN_146f14910(&local_98);
    puVar3 = (undefined8 *)FUN_142a7214e(lVar4,&local_98,uVar2);
    if (puVar3 != (undefined8 *)0x0) {
      lVar4 = *(longlong *)*puVar3;
      *param_1 = lVar4;
      if ((lVar4 != 0) && ((*(byte *)(lVar4 + 0xb8) & 8) != 0)) {
        LOCK();
        *(int *)(lVar4 + 0xbc) = *(int *)(lVar4 + 0xbc) + 1;
        UNLOCK();
      }
      goto LAB_142a700a7;
    }
  }
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_58 = 0;
  local_bc = 0;
  local_e8[0] = 0;
  local_e8[1] = 0;
  local_e8[2] = 0;
  uStack_d0 = 0;
  uStack_ce = 0;
  uStack_c8 = 0;
  uStack_c6 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = local_f8 & 0xffffffffffffff00;
  cVar1 = FUN_146f14512(local_e8,param_3,&local_108);
  if (cVar1 == '\0') {
    *param_1 = 0;
  }
  else {
    uStack_80 = CONCAT44(uStack_80._4_4_,1);
    FUN_146f1aa0c(&local_88,0);
    puVar3 = local_e8;
    puVar5 = local_88;
    for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = 0;
    local_f0 = 0x200000003;
    local_118 = &local_108;
    FUN_146f11e34(&local_98,param_1,param_2,*param_4);
    lVar4 = *param_4;
    if ((lVar4 != 0) && (*param_1 != 0)) {
      local_110 = param_3;
      uVar2 = FUN_146f14910(&local_110);
      FUN_142a722f6(lVar4,&local_110,uVar2,param_1);
    }
  }
  FUN_146f12788(&local_98);
LAB_142a700a7:
  if ((local_50 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a700e0 FUN_142a700e0 body=876 status=ok
// SIG undefined FUN_142a700e0(void)

longlong * FUN_142a700e0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined1 auStack_178 [32];
  undefined8 *local_158;
  longlong *local_150;
  ulonglong local_148 [2];
  undefined8 local_138;
  undefined8 uStack_130;
  ulonglong local_128;
  undefined4 local_120;
  uint local_11c;
  undefined8 local_118 [3];
  undefined2 uStack_100;
  undefined6 uStack_fe;
  undefined2 uStack_f8;
  undefined8 uStack_f6;
  undefined8 local_ec;
  undefined8 local_e0;
  undefined8 uStack_d8;
  ulonglong local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  longlong lStack_90;
  undefined8 local_88;
  longlong local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar9 = *param_3;
  if (lVar9 != 0) {
    local_c8 = (ulonglong)param_2 | 1;
    if ((((ulonglong)param_2 & 0xfffffffffffffffe) != 0) && (DAT_14c950c29 == '\x01')) {
      FUN_1456cec3c();
    }
    uVar6 = FUN_146f14910(&local_c8);
    puVar4 = (undefined8 *)FUN_142a7214e(lVar9,&local_c8,uVar6);
    if (puVar4 != (undefined8 *)0x0) {
      lVar9 = *(longlong *)*puVar4;
      *param_1 = lVar9;
      if ((lVar9 != 0) && ((*(byte *)(lVar9 + 0xb8) & 8) != 0)) {
        LOCK();
        *(int *)(lVar9 + 0xbc) = *(int *)(lVar9 + 0xbc) + 1;
        UNLOCK();
      }
      goto LAB_142a7040c;
    }
  }
  local_98 = 0;
  lStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_88 = 0;
  local_ec = 0;
  local_118[0] = 0;
  local_118[1] = 0;
  local_118[2] = 0;
  uStack_100 = 0;
  uStack_fe = 0;
  uStack_f8 = 0;
  uStack_f6 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  uVar11 = 2;
  plVar5 = param_2;
  plVar2 = param_1;
  plVar8 = local_150;
  while (local_150 = plVar2, param_1 = local_150, plVar5 != (longlong *)0x0) {
    lVar9 = plVar5[10];
LAB_142a70190:
    if (lVar9 != 0) {
      if ((~*(uint *)(*(longlong *)(lVar9 + 8) + 0x18) & 0x8001) != 0) goto code_r0x000142a701a9;
      uVar6 = *(undefined8 *)(lVar9 + 0x38);
      if (((uint)uVar6 & 0x480) == 0x80) {
LAB_142a70265:
        if (-1 < (int)uVar6) {
          local_138 = 0;
          uStack_130 = 0;
          local_128 = local_128 & 0xffffffffffffff00;
          cVar3 = FUN_146f14512(local_118,lVar9,&local_138);
          uVar1 = uStack_b0;
          if (cVar3 != '\0') {
            lVar10 = (longlong)(int)uStack_b0;
            uVar11 = (int)uStack_b0 + 1;
            uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar11);
            if (uStack_b0._4_4_ < uVar11) {
              FUN_146f1aa0c(&local_b8,uVar1 & 0xffffffff);
            }
            puVar4 = local_118;
            puVar12 = (undefined8 *)(lVar10 * 0x48 + local_b8);
            for (lVar7 = 9; lVar7 != 0; lVar7 = lVar7 + -1) {
              *puVar12 = *puVar4;
              puVar4 = puVar4 + 1;
              puVar12 = puVar12 + 1;
            }
          }
        }
        plVar8 = (longlong *)(lVar9 + 0x18);
        do {
          for (lVar9 = *plVar8; lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x18)) {
            if ((~*(uint *)(*(longlong *)(lVar9 + 8) + 0x18) & 0x8001) == 0) {
              uVar6 = *(undefined8 *)(lVar9 + 0x38);
              if (((uint)uVar6 & 0x480) == 0x80) goto LAB_142a70265;
              goto LAB_142a70324;
            }
          }
          plVar5 = (longlong *)(**(code **)(*plVar5 + 0x2b0))(plVar5);
          plVar8 = plVar5 + 10;
        } while (plVar5 != (longlong *)0x0);
      }
LAB_142a70324:
      uVar11 = local_11c & 0xfffffffc | 2;
      param_1 = local_150;
      plVar8 = local_150;
      break;
    }
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x2b0))(plVar5);
    plVar2 = local_150;
    plVar8 = local_150;
  }
  local_150 = plVar8;
  lStack_90 = (longlong)*(int *)((longlong)param_2 + 0x5c);
  local_98 = (ulonglong)*(ushort *)((longlong)param_2 + 0xb6);
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  local_120 = 2;
  lVar9 = *param_3;
  local_78 = param_2[3];
  local_11c = uVar11;
  FUN_1400021e4(&local_78,local_148);
  local_158 = &local_138;
  FUN_146f11e34(&local_c8,param_1,local_148,lVar9);
  if (local_148[0] != 0) {
    FUN_1400020a8();
  }
  lVar9 = *param_3;
  if ((lVar9 != 0) && (*param_1 != 0)) {
    local_148[0] = (ulonglong)param_2 | 1;
    if ((((ulonglong)param_2 & 0xfffffffffffffffe) != 0) && (DAT_14c950c29 == '\x01')) {
      FUN_1456cec3c((ulonglong)param_2 & 0xfffffffffffffffe);
    }
    uVar6 = FUN_146f14910(local_148);
    FUN_142a722f6(lVar9,local_148,uVar6,param_1);
  }
  FUN_146f12788(&local_c8);
LAB_142a7040c:
  if ((local_70 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x000142a701a9:
  lVar9 = *(longlong *)(lVar9 + 0x18);
  goto LAB_142a70190;
}



// FUNCTION 142a7044e FUN_142a7044e body=168 status=ok
// SIG undefined FUN_142a7044e(void)

undefined8 FUN_142a7044e(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = *param_2;
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(ulonglong *)(lVar1 + 0x20);
  }
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if ((uVar2 == DAT_14c892e9c) || (uVar2 == DAT_14c892ea0)) {
    if ((undefined *)*param_1 == &DAT_14c99bf08) {
      if (uVar2 != DAT_14c892e9c) {
        return 0xf754c2703924c7aa;
      }
      return 0xffaab417b1123942;
    }
  }
  else if (((lVar1 != 0) && (uVar2 == DAT_14c999468)) &&
          (**(ulonglong **)(lVar1 + 8) == (ulonglong)DAT_14c892b50)) {
    return 0x6bb13a5c1a655157;
  }
  return 0;
}



// FUNCTION 142a704f6 FUN_142a704f6 body=89 status=ok
// SIG undefined FUN_142a704f6(void)

longlong FUN_142a704f6(void)

{
  longlong lVar1;
  
  lVar1 = DAT_14c9994d0;
  if (DAT_14c9994d0 == 0) {
    lVar1 = FUN_146f1aaa0(DAT_14c951640);
    if (lVar1 != 0) {
      FUN_1401924dc(lVar1);
    }
    if ((DAT_14c9994d0 != 0) && (DAT_14c872a72 == '\0')) {
      FUN_140113f48();
    }
  }
  DAT_14c9994d0 = lVar1;
  return DAT_14c9994d0;
}



// FUNCTION 142a70550 FUN_142a70550 body=1808 status=ok
// SIG undefined FUN_142a70550(void)

uint FUN_142a70550(undefined *param_1,longlong param_2,char param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  byte bVar6;
  longlong *plVar7;
  undefined *puVar8;
  uint uVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined *local_e8;
  code *local_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined2 uStack_b0;
  undefined6 uStack_ae;
  undefined1 uStack_a8;
  byte local_a7;
  undefined8 uStack_a6;
  undefined8 local_9c;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_1 == &DAT_14c99c038) {
    if (param_2 != 0) {
      puVar8 = *(undefined **)(param_2 + 8);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c952a58) && (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1))
      {
        local_e8 = (undefined *)FUN_1446ddbd2();
        local_e0 = FUN_1403a682c;
        local_f0 = 0;
        local_f8 = 0x108001;
        FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
        atexit(FUN_142818c9e);
        _Init_thread_footer(&DAT_14c952a58);
      }
      if (DAT_14c952a10 == 0) {
        bVar11 = puVar8 != (undefined *)0x0;
        if (puVar8 != &DAT_14c952a08 && bVar11) {
          do {
            puVar8 = *(undefined **)(puVar8 + 0x30);
            bVar11 = puVar8 != (undefined *)0x0;
            if (puVar8 == &DAT_14c952a08) break;
          } while (puVar8 != (undefined *)0x0);
        }
        if (bVar11) goto LAB_142a70704;
      }
      else if ((*(ulonglong *)(puVar8 + 0x18) & DAT_14c952a10) != 0) {
LAB_142a70704:
        plVar10 = *(longlong **)(param_2 + 0x70);
        lVar2 = FUN_146288f1e();
        if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= (int)plVar10[7])) &&
           (*(longlong *)(plVar10[6] + (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
          local_9c = 0;
          local_c8 = 0;
          uStack_c0 = 0;
          local_b8 = 0;
          uStack_b0 = 0;
          uStack_ae = 0;
          uStack_a8 = 0;
          local_a7 = 0;
          uStack_a6 = 0;
          local_90 = 0;
          uStack_88 = 0;
          uVar5 = 0x8000;
          plVar7 = plVar10;
          do {
            lVar2 = FUN_146f0befe(plVar7[3]);
            if (lVar2 != 0) goto LAB_142a7080b;
            plVar7 = (longlong *)plVar7[8];
            plVar3 = plVar10;
          } while (plVar7 != (longlong *)0x0);
          for (; plVar3 != (longlong *)0x0; plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2b0))()) {
            lVar2 = plVar3[10];
            if (lVar2 != 0) {
              while (local_d8 = plVar10, local_d0 = plVar3,
                    (~*(uint *)(*(longlong *)(lVar2 + 8) + 0x18) & 0x8001) != 0) {
                lVar2 = *(longlong *)(lVar2 + 0x18);
                if (lVar2 == 0) goto LAB_142a707c2;
              }
              uVar9 = 0;
              bVar6 = 0;
LAB_142a70887:
              if ((*(byte *)(lVar2 + 0x3b) & 0x80) == 0) {
                local_78 = 0;
                uStack_70 = 0;
                local_68 = 0;
                cVar1 = FUN_146f14512(&local_c8,lVar2,&local_78);
                if (cVar1 == '\0') break;
                uVar9 = uVar9 + 1;
                bVar6 = (local_a7 & 0x40) >> 6 | bVar6;
                if (param_3 == '\0') {
                  if ((1 < uVar9) || (local_c8 == 0)) break;
                  puVar8 = *(undefined **)(local_c8 + 8);
                  if ((*(int *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x110) < DAT_14c951ae0) &&
                     (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1)) {
                    FUN_1446ddbd2();
                    local_e0 = FUN_140b31576;
                    local_e8 = &DAT_14c951a38;
                    local_f0 = 0;
                    local_f8 = 0x208001;
                    FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0);
                    atexit(FUN_14280cbf7);
                    _Init_thread_footer(&DAT_14c951ae0);
                  }
                  if (DAT_14c951a98 == 0) {
                    bVar11 = puVar8 != (undefined *)0x0;
                    if (puVar8 != &DAT_14c951a90 && bVar11) {
                      do {
                        puVar8 = *(undefined **)(puVar8 + 0x30);
                        bVar11 = puVar8 != (undefined *)0x0;
                        if (puVar8 == &DAT_14c951a90) break;
                      } while (puVar8 != (undefined *)0x0);
                    }
                    if (!bVar11) break;
                  }
                  else if ((*(ulonglong *)(puVar8 + 0x18) & DAT_14c951a98) == 0) break;
                }
              }
              plVar10 = (longlong *)(lVar2 + 0x18);
              do {
                for (lVar2 = *plVar10; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x18)) {
                  if ((~*(uint *)(*(longlong *)(lVar2 + 8) + 0x18) & 0x8001) == 0)
                  goto LAB_142a70887;
                }
                local_d0 = (longlong *)(**(code **)(*local_d0 + 0x2b0))();
                plVar10 = local_d0 + 10;
              } while (local_d0 != (longlong *)0x0);
              if (bVar6 != 0) {
                if ((((uVar9 == 1 & DAT_14c75f438) == 1) && (lVar2 = FUN_14628a2c2(), lVar2 != 0))
                   && ((*(int *)(lVar2 + 0x38) <= (int)local_d8[7] &&
                       (*(longlong *)(local_d8[6] + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
                        lVar2 + 0x30)))) {
                  uVar5 = 0x21800;
                }
                else {
                  uVar5 = (uint)(1 < uVar9) << 0xd | 0x800;
                }
              }
              break;
            }
LAB_142a707c2:
          }
          goto LAB_142a7080b;
        }
        lVar2 = FUN_146288e54();
        if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= (int)plVar10[7])) &&
           (*(longlong *)(plVar10[6] + (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
          uVar5 = 0x4000;
          do {
            lVar2 = FUN_146f0befe(plVar10[3]);
            if (lVar2 != 0) goto LAB_142a70809;
            plVar10 = (longlong *)plVar10[8];
          } while (plVar10 != (longlong *)0x0);
          goto LAB_142a7080b;
        }
      }
    }
  }
  else if (param_2 != 0 && param_1 == &DAT_14c99bf88) {
    puVar8 = *(undefined **)(param_2 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1)) {
      FUN_1446ddbd2();
      local_e0 = FUN_140b31576;
      local_e8 = &DAT_14c951a38;
      local_f0 = 0;
      local_f8 = 0x208001;
      FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0);
      atexit(FUN_14280cbf7);
      _Init_thread_footer(&DAT_14c951ae0);
    }
    if (DAT_14c951a98 == 0) {
      bVar11 = puVar8 != (undefined *)0x0;
      if (puVar8 != &DAT_14c951a90 && bVar11) {
        do {
          puVar8 = *(undefined **)(puVar8 + 0x30);
          bVar11 = puVar8 != (undefined *)0x0;
          if (puVar8 == &DAT_14c951a90) break;
        } while (puVar8 != (undefined *)0x0);
      }
      if (bVar11) goto LAB_142a70677;
    }
    else if ((*(ulonglong *)(puVar8 + 0x18) & DAT_14c951a98) != 0) {
LAB_142a70677:
      lVar2 = *(longlong *)(param_2 + 0x78);
      if (lVar2 != 0) {
        puVar8 = *(undefined **)(lVar2 + 8);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c952a58) &&
           (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1)) {
          local_e8 = (undefined *)FUN_1446ddbd2();
          local_e0 = FUN_1403a682c;
          local_f0 = 0;
          local_f8 = 0x108001;
          FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
          atexit(FUN_142818c9e);
          _Init_thread_footer(&DAT_14c952a58);
        }
        if (DAT_14c952a10 == 0) {
          bVar11 = puVar8 != (undefined *)0x0;
          if (puVar8 != &DAT_14c952a08 && bVar11) {
            do {
              puVar8 = *(undefined **)(puVar8 + 0x30);
              bVar11 = puVar8 != (undefined *)0x0;
              if (puVar8 == &DAT_14c952a08) break;
            } while (puVar8 != (undefined *)0x0);
          }
          if (bVar11) goto LAB_142a70843;
        }
        else if ((*(ulonglong *)(puVar8 + 0x18) & DAT_14c952a10) != 0) {
LAB_142a70843:
          lVar2 = *(longlong *)(lVar2 + 0x70);
          lVar4 = FUN_146288e54();
          if (((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
              lVar4 + 0x30)) {
            uVar5 = 0x4000;
            goto LAB_142a7080b;
          }
        }
      }
    }
  }
LAB_142a70809:
  uVar5 = 0;
LAB_142a7080b:
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 142a70c62 FUN_142a70c62 body=5354 status=ok
// SIG undefined FUN_142a70c62(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_142a70c62(longlong *param_1,longlong *param_2,longlong *param_3)

{
  short *psVar1;
  ushort uVar2;
  ulonglong uVar3;
  wchar_t *_Str;
  int iVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  size_t sVar11;
  longlong *plVar12;
  wchar_t ****ppppwVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  longlong lVar17;
  longlong *plVar18;
  undefined8 *puVar19;
  int iVar20;
  undefined **ppuVar21;
  short *psVar22;
  int iVar23;
  uint uVar24;
  longlong lVar25;
  longlong *plVar26;
  uint uVar27;
  int iVar28;
  wchar_t *****pppppwVar29;
  longlong lVar30;
  longlong *plVar31;
  bool bVar32;
  undefined1 auStack_2778 [32];
  wchar_t ****local_2758;
  undefined4 local_2750;
  undefined8 local_2748;
  wchar_t *local_2740;
  undefined4 local_2738;
  undefined1 *local_2730;
  undefined1 *local_2728;
  wchar_t ***local_2720;
  byte local_2711;
  longlong *local_2710;
  byte local_2701;
  wchar_t ***local_2700;
  longlong *local_26f8;
  longlong *local_26f0;
  longlong *local_26e8;
  longlong local_26e0;
  undefined8 uStack_26d8;
  longlong local_26d0;
  int iStack_26c8;
  int iStack_26c4;
  longlong local_26c0;
  wchar_t ****local_26b8;
  wchar_t ***pppwStack_26b0;
  longlong local_26a8;
  undefined4 local_26a0;
  uint local_269c;
  wchar_t ****local_2698;
  undefined8 uStack_2690;
  longlong *local_2680;
  longlong *local_2678;
  byte local_2670;
  longlong local_2668 [2];
  short *local_2658;
  undefined8 uStack_2650;
  wchar_t ***local_2648;
  wchar_t ***pppwStack_2640;
  ulonglong local_2638;
  undefined8 uStack_2630;
  undefined8 local_2628;
  undefined8 uStack_2620;
  undefined8 local_2618;
  undefined8 uStack_2610;
  undefined8 local_2608;
  wchar_t ***local_2408;
  undefined8 local_2400;
  wchar_t ***local_23f8 [2];
  longlong *local_23e8;
  char cStack_23e0;
  undefined1 uStack_23df;
  undefined6 uStack_23de;
  ushort local_23d8;
  undefined2 uStack_23d6;
  int local_23d4;
  undefined2 local_23d0;
  undefined8 local_23cc;
  undefined8 local_23c0;
  undefined8 uStack_23b8;
  longlong local_2200 [965];
  longlong local_3d8 [72];
  longlong *local_198;
  undefined8 local_190;
  undefined1 local_188 [24];
  int aiStack_170 [2];
  longlong local_168;
  uint local_160 [12];
  longlong local_130;
  uint local_128;
  uint local_124;
  longlong local_e8;
  uint local_e0;
  uint local_dc;
  longlong *local_a0;
  uint local_98;
  uint local_94;
  ulonglong local_60;
  undefined8 uStack_48;
  
  uStack_48 = 0x142a70c78;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2778;
  lVar9 = *param_3;
  plVar12 = (longlong *)param_3[2];
  if ((longlong *)param_3[2] == (longlong *)0x0) {
    plVar12 = param_2;
  }
  local_2710 = param_3;
  if (lVar9 == 0) {
    lVar9 = 0;
  }
  else {
    local_23f8[0] = (wchar_t ***)((ulonglong)plVar12 | 1);
    if ((((ulonglong)plVar12 & 0xfffffffffffffffe) != 0) && (DAT_14c950c29 == '\x01')) {
      FUN_1456cec3c();
    }
    lVar9 = FUN_142a7214e(lVar9,local_23f8,param_2);
    if (lVar9 != 0) {
      FUN_146f14778(param_1,lVar9);
      iVar28 = (int)param_1[1];
      goto LAB_142a719d2;
    }
    lVar9 = *local_2710;
  }
  uVar27 = *(uint *)(local_2710 + 3);
  iVar28 = *(int *)((longlong)local_2710 + 0x1c);
  FUN_140202f34(param_2);
  local_2658 = (short *)0x0;
  uStack_2650 = 0;
  local_2668[0] = 0;
  local_2668[1] = 0;
  local_2700 = (wchar_t ***)CONCAT44(local_2700._4_4_,uVar27);
  if ((uVar27 & 2) != 0) {
    uVar27 = *(uint *)(param_2 + 0x1f);
    if ((int)uVar27 < 0) goto LAB_142a71fd2;
    if (uVar27 != 0) {
      FUN_141714720(&local_2658);
    }
    plVar18 = (longlong *)param_2[0x22];
    if (plVar18 == (longlong *)0x0) {
      (**(code **)(*param_2 + 1000))(param_2);
      plVar18 = (longlong *)param_2[0x22];
    }
    (**(code **)(*plVar18 + 0x1e0))(plVar18,&local_2658);
    FUN_146f147d6(local_2668,(int)param_2[0x1f]);
    if ((longlong)(int)uStack_2650 != 0) {
      lVar30 = 0;
      do {
        uVar2 = *(ushort *)((longlong)local_2658 + lVar30);
        *(undefined8 *)(local_2668[0] + 0x10 + (ulonglong)uVar2 * 0x18) =
             *(undefined8 *)((longlong)local_2658 + lVar30 + 0x10);
        uVar15 = ((undefined8 *)((longlong)local_2658 + lVar30))[1];
        puVar19 = (undefined8 *)(local_2668[0] + (ulonglong)uVar2 * 0x18);
        *puVar19 = *(undefined8 *)((longlong)local_2658 + lVar30);
        puVar19[1] = uVar15;
        lVar30 = lVar30 + 0x18;
      } while ((longlong)(int)uStack_2650 * 0x18 != lVar30);
    }
  }
  local_2711 = lVar9 == 0;
  local_2701 = iVar28 != -1;
  local_26f0 = param_1;
  local_26e8 = plVar12;
  memset(local_188,0,0x120);
  local_198 = (longlong *)0x0;
  local_190 = 0x800000000;
  local_2680 = local_2668;
  local_2670 = *(byte *)(local_2710 + 3) >> 3 & 1;
  lVar9 = param_2[0x1f];
  uVar14 = (ulonglong)local_2700 & 0xffffffff;
  local_26f8 = param_2;
  local_2678 = param_2;
  if ((longlong)(int)lVar9 != 0) {
    lVar30 = param_2[0x1e];
    lVar25 = 0;
    plVar12 = local_2710;
    do {
      local_23cc = 0;
      local_23f8[0] = (wchar_t ***)0x0;
      local_23f8[1] = (wchar_t ***)0x0;
      local_23e8 = (longlong *)0x0;
      cStack_23e0 = '\0';
      uStack_23df = 0;
      uStack_23de = 0;
      local_23d8 = 0;
      uStack_23d6 = 0;
      local_23d4 = 0;
      local_23d0 = 0;
      local_23c0 = 0;
      uStack_23b8 = 0;
      lVar17 = *(longlong *)(lVar30 + lVar25);
      if ((iVar28 == -1) ||
         (*(uint *)((longlong)plVar12 + 0x1c) == (uint)*(ushort *)(lVar17 + 0x40))) {
        if ((uVar14 & 1) == 0) {
          uVar3 = *(ulonglong *)(lVar17 + 0x10);
          if ((((uVar3 & 1) != 0) && ((uVar3 & 0xfffffffffffffffe) != 0)) &&
             (DAT_14c950c29 == '\x01')) {
            FUN_1456cec3c();
            uVar14 = (ulonglong)local_2700 & 0xffffffff;
            plVar12 = local_2710;
          }
          if ((((ulonglong)param_2 & 0xfffffffffffffffe) != 0) && (DAT_14c950c29 == '\x01')) {
            FUN_1456cec3c((ulonglong)param_2 & 0xfffffffffffffffe);
            uVar14 = (ulonglong)local_2700 & 0xffffffff;
            plVar12 = local_2710;
          }
          if (uVar3 != ((ulonglong)param_2 | 1)) goto LAB_142a70e7a;
        }
        cVar6 = FUN_146f14512(local_23f8,lVar17,&local_2680);
        uVar27 = local_128;
        uVar3 = local_190;
        uVar2 = local_23d8;
        uVar14 = (ulonglong)local_2700 & 0xffffffff;
        plVar12 = local_2710;
        if ((cVar6 != '\0') && (local_23d4 != 0xf)) {
          if ((short)local_23d8 < 0) {
            cStack_23e0 = '\0';
            uStack_23df = 0;
            uStack_23de = 0;
LAB_142a70f46:
            if ((local_23d8 & 1) != 0) {
              lVar17 = (longlong)(int)local_128;
              local_128 = local_128 + 1;
              if (local_124 < local_128) {
                FUN_146f1aa0c(&local_130,uVar27);
                uVar14 = (ulonglong)local_2700 & 0xffffffff;
              }
              ppppwVar13 = local_23f8;
              puVar19 = (undefined8 *)(lVar17 * 0x48 + local_130);
              for (lVar10 = 9; lVar10 != 0; lVar10 = lVar10 + -1) {
                *puVar19 = *ppppwVar13;
                ppppwVar13 = ppppwVar13 + 1;
                puVar19 = puVar19 + 1;
              }
            }
            uVar27 = local_e0;
            if ((uVar2 & 2) != 0) {
              lVar17 = (longlong)(int)local_e0;
              local_e0 = local_e0 + 1;
              if (local_dc < local_e0) {
                FUN_146f1aa0c(&local_e8,uVar27);
                uVar14 = (ulonglong)local_2700 & 0xffffffff;
              }
              ppppwVar13 = local_23f8;
              puVar19 = (undefined8 *)(lVar17 * 0x48 + local_e8);
              for (lVar10 = 9; lVar10 != 0; lVar10 = lVar10 + -1) {
                *puVar19 = *ppppwVar13;
                ppppwVar13 = ppppwVar13 + 1;
                puVar19 = puVar19 + 1;
              }
            }
            uVar27 = local_98;
            plVar12 = local_2710;
            if ((uVar2 & 3) != 0) goto LAB_142a70e7a;
            local_98 = local_98 + 1;
            plVar12 = local_a0;
            if (local_94 < local_98) {
              FUN_146f1aa0c(&local_a0,uVar27);
              uVar14 = (ulonglong)local_2700 & 0xffffffff;
              plVar12 = local_a0;
            }
          }
          else {
            if (CONCAT62(uStack_23de,CONCAT11(uStack_23df,cStack_23e0)) == 0) {
              if ((local_23d8 & 0x800) != 0) goto LAB_142a70e7a;
              goto LAB_142a70f46;
            }
            uVar27 = (uint)local_190;
            uVar24 = (uint)local_190 + 1;
            local_190 = CONCAT44(local_190._4_4_,uVar24);
            if (local_190._4_4_ < uVar24) {
              FUN_146f1c872(local_3d8,uVar3 & 0xffffffff);
              uVar14 = (ulonglong)local_2700 & 0xffffffff;
            }
            plVar12 = local_198;
            if (local_198 == (longlong *)0x0) {
              plVar12 = local_3d8;
            }
          }
          ppppwVar13 = local_23f8;
          plVar18 = plVar12 + (longlong)(int)uVar27 * 9;
          for (lVar17 = 9; plVar12 = local_2710, lVar17 != 0; lVar17 = lVar17 + -1) {
            *plVar18 = (longlong)*ppppwVar13;
            ppppwVar13 = ppppwVar13 + 1;
            plVar18 = plVar18 + 1;
          }
        }
      }
LAB_142a70e7a:
      lVar25 = lVar25 + 0x10;
    } while ((longlong)(int)lVar9 * 0x10 != lVar25);
  }
  if (DAT_14c949118 == 0) {
    local_2648 = (wchar_t ***)FUN_140631fbe;
    lVar9 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
    DAT_14c949118 = lVar9;
    FUN_1446f470e(local_23f8,L"Class",1);
    local_2728 = &LAB_146891e90;
    local_2730 = &LAB_146273097;
    local_2740 = L"Engine";
    local_2738 = 199;
    local_2748 = 0x20;
    local_2750 = 0x10000000;
    local_2758 = (wchar_t ****)CONCAT44(local_2758._4_4_,8);
    local_2720 = (wchar_t ***)&local_2648;
    FUN_14574b4b2(lVar9);
    DAT_14c949118 = lVar9;
    uVar15 = FUN_144a7a812();
    lVar9 = DAT_14c949118;
    uVar16 = FUN_1449e2fb2();
    local_2758 = (wchar_t ****)0x149e6ee30;
    FUN_14574b446(uVar16,lVar9,uVar15,L"/Script/CoreUObject");
  }
  lVar9 = FUN_140277b32(DAT_14c949118,0,L"/Script/Engine.Actor",1);
  plVar18 = local_26f0;
  plVar12 = local_26f8;
  if ((((lVar9 != 0) && (*(int *)(lVar9 + 0x38) <= (int)local_26f8[7])) &&
      (*(longlong *)(local_26f8[6] + (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) &&
     (ppppwVar13 = (wchar_t ****)local_26f8[0xe], ppppwVar13 != (wchar_t ****)0x0)) {
LAB_142a71167:
    if (ppppwVar13[4] != DAT_14c999468) goto code_r0x000142a7116d;
    local_23cc = 0;
    cStack_23e0 = '\0';
    uStack_23df = 0;
    uStack_23de = 0;
    local_23d8 = 0;
    uStack_23d6 = 0;
    local_23d4 = 0;
    local_23d0 = 1;
    local_23f8[1] = (wchar_t ***)0x0;
    local_23c0 = 0;
    uStack_23b8 = 0;
    local_23e8 = (longlong *)&DAT_14c9993e8;
    local_23f8[0] = (wchar_t ***)ppppwVar13;
    FUN_146f142b2(local_23f8,ppppwVar13,0,local_26f8);
    FUN_146f1446e(local_23f8,ppppwVar13,local_23e8,0);
    uVar24 = local_e0;
    uVar27 = CONCAT22(uStack_23d6,local_23d8) | 0x20002;
    local_23d8 = (ushort)uVar27;
    uStack_23d6 = (undefined2)(uVar27 >> 0x10);
    local_23d4 = 0xf;
    lVar9 = (longlong)(int)local_e0;
    local_e0 = local_e0 + 1;
    if (local_dc < local_e0) {
      FUN_146f1aa0c(&local_e8,uVar24);
    }
    ppppwVar13 = local_23f8;
    puVar19 = (undefined8 *)(lVar9 * 0x48 + local_e8);
    for (lVar30 = 9; lVar30 != 0; lVar30 = lVar30 + -1) {
      *puVar19 = *ppppwVar13;
      ppppwVar13 = ppppwVar13 + 1;
      puVar19 = puVar19 + 1;
    }
  }
LAB_142a71221:
  plVar26 = plVar12;
  if ((iVar28 == -1) && (plVar26 = local_26f8, plVar18 = local_26f0, plVar12 != (longlong *)0x0)) {
    lVar9 = -0x3f;
    plVar12 = local_2200 + 1;
    lVar30 = 0;
    plVar31 = local_26f8;
    do {
      lVar30 = lVar30 + 0x100000000;
      plVar12[-1] = (longlong)plVar31;
      plVar12 = plVar12 + -1;
      if (lVar9 == 0) break;
      plVar31 = (longlong *)plVar31[8];
      lVar9 = lVar9 + 1;
    } while (plVar31 != (longlong *)0x0);
    if (lVar30 != 0) {
      plVar31 = (longlong *)((lVar30 >> 0x1d) + (longlong)plVar12);
      do {
        lVar9 = (longlong)*(int *)(*plVar12 + 0x108);
        if (lVar9 != 0) {
          lVar30 = *(longlong *)(*plVar12 + 0x100);
          lVar25 = 0;
          do {
            lVar17 = *(longlong *)(lVar30 + lVar25);
            if (lVar17 != 0) {
              lVar10 = FUN_140010bca();
              uVar27 = local_160[0];
              if ((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar17 + 0x10) + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) {
                lVar10 = (longlong)(int)local_160[0];
                local_160[0] = local_160[0] + 1;
                if (local_160[1] < local_160[0]) {
                  FUN_146f1ab9c(&local_168,uVar27);
                }
                *(longlong *)(local_168 + lVar10 * 8) = lVar17;
              }
            }
            lVar25 = lVar25 + 8;
          } while (lVar9 * 8 != lVar25);
        }
        plVar12 = plVar12 + 1;
        plVar26 = local_26f8;
        plVar18 = local_26f0;
      } while (plVar31 != plVar12);
    }
  }
  cStack_23e0 = '\0';
  local_23f8[0] = (wchar_t ***)&local_23d8;
  local_23f8[1] = (wchar_t ***)&local_23d8;
  local_23e8 = local_3d8;
  local_2700 = (wchar_t ***)local_2710[2];
  if (((wchar_t ****)local_2700 == (wchar_t ****)0x0) &&
     (local_2700 = (wchar_t ***)plVar26[0x22], (wchar_t ****)local_2700 == (wchar_t ****)0x0)) {
    (**(code **)(*plVar26 + 1000))(plVar26);
    local_2700 = (wchar_t ***)plVar26[0x22];
  }
  local_2711 = local_2711 | local_2701;
  ppuVar21 = &PTR_u__Functions_149f98070;
  lVar9 = 0;
  plVar12 = local_2710;
  do {
    if ((0 < *(int *)((longlong)aiStack_170 + lVar9)) ||
       (*(int *)((longlong)local_160 + lVar9) != 0)) {
      uVar27 = uStack_2630._4_4_ & 0xfffffffc;
      FUN_146f146dc(local_23f8,plVar26);
      pppwStack_2640 = local_2700;
      local_2638 = plVar12[1];
      uStack_2630 = (ulonglong)(lVar9 == 0x48 | uVar27) << 0x20;
      lVar30 = *plVar12;
      _Str = (wchar_t *)*ppuVar21;
      local_26b8 = (wchar_t ****)plVar26[3];
      local_2648 = (wchar_t ***)local_23f8;
      FUN_1400021e4(&local_26b8,&local_2698);
      if (_Str == (wchar_t *)0x0) {
LAB_142a715b7:
        local_26b8 = local_2698;
        pppwStack_26b0 = (wchar_t ***)uStack_2690;
        local_2698 = (wchar_t ****)0x0;
        uStack_2690 = (wchar_t ****)0x0;
      }
      else {
        sVar11 = wcslen(_Str);
        if ((int)sVar11 == 0) goto LAB_142a715b7;
        iVar28 = (int)uStack_2690;
        iVar7 = (int)sVar11 + (uint)((int)uStack_2690 == 0);
        local_26b8 = local_2698;
        local_2698 = (wchar_t ****)0x0;
        iVar23 = uStack_2690._4_4_;
        pppwStack_26b0 = (wchar_t ***)uStack_2690;
        uStack_2690 = (wchar_t ****)0x0;
        iVar20 = iVar7 + iVar28;
        if (iVar20 < iVar28) goto LAB_142a720c6;
        if (iVar20 < 0) goto LAB_142a720ce;
        if (iVar23 < iVar20) {
          FUN_1446f8c06(&local_26b8);
        }
        FUN_1400020e8(&local_26b8,_Str,sVar11 & 0xffffffff);
      }
      local_2758 = &local_2648;
      FUN_146f11e34(local_188 + lVar9,&local_26d0,&local_26b8,lVar30);
      plVar18 = local_26f0;
      if ((wchar_t *****)local_26b8 != (wchar_t *****)0x0) {
        FUN_1400020a8();
      }
      if ((wchar_t *****)local_2698 != (wchar_t *****)0x0) {
        FUN_1400020a8();
      }
      iVar28 = (int)plVar18[1];
      *(uint *)(plVar18 + 1) = iVar28 + 1U;
      if (*(uint *)((longlong)plVar18 + 0xc) < iVar28 + 1U) {
        FUN_146f1c6aa(plVar18,iVar28);
      }
      *(longlong *)(*plVar18 + (longlong)iVar28 * 8) = local_26d0;
      plVar12 = local_2710;
      if (local_26d0 != 0) {
        if ((*(byte *)(local_26d0 + 0xb8) & 8) != 0) {
          LOCK();
          *(int *)(local_26d0 + 0xbc) = *(int *)(local_26d0 + 0xbc) + 1;
          UNLOCK();
          if (local_26d0 == 0) goto LAB_142a713bd;
        }
        FUN_146f11920();
        plVar12 = local_2710;
      }
    }
LAB_142a713bd:
    lVar9 = lVar9 + 0x48;
    ppuVar21 = ppuVar21 + 1;
  } while (lVar9 != 0x120);
  iVar28 = (uint)local_190;
  if (1 < (int)(uint)local_190) {
    if (DAT_14c9994d8 == (longlong *)0x0) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14c9994d8 =
           (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))
                     (DAT_14c8407a8,L"net.ReplicateCustomDeltaPropertiesInRepIndexOrder",1);
      if (DAT_14c9994d8 != (longlong *)0x0) goto LAB_142a71630;
    }
    else {
LAB_142a71630:
      cVar6 = (**(code **)(*DAT_14c9994d8 + 0xa8))();
      if (cVar6 == '\0') {
        local_2408 = (wchar_t ***)0x0;
        local_2400 = 0x800000000;
        uVar27 = (uint)local_190;
        if ((int)(uint)local_190 < 0) {
LAB_142a71fd2:
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(uVar27);
        }
        if (8 < (uint)local_190) {
          FUN_146f1c992(&local_2648);
        }
        if ((longlong)(int)uStack_2650 != 0) {
          psVar1 = local_2658 + (longlong)(int)uStack_2650 * 0xc;
          psVar22 = local_2658;
          do {
            uVar14 = local_2400;
            plVar12 = local_198;
            if (local_198 == (longlong *)0x0) {
              plVar12 = local_3d8;
            }
            if ((longlong)(int)(uint)local_190 != 0) {
              lVar9 = (longlong)(int)(uint)local_190 * 0x48;
              do {
                if (*(short *)(*plVar12 + 0x40) == *psVar22) {
                  if (plVar12 != (longlong *)0x0) {
                    lVar9 = (longlong)(int)local_2400;
                    uVar27 = (int)local_2400 + 1;
                    local_2400 = CONCAT44(local_2400._4_4_,uVar27);
                    if (local_2400._4_4_ < uVar27) {
                      FUN_146f1c872(&local_2648,uVar14 & 0xffffffff);
                    }
                    ppppwVar13 = (wchar_t ****)local_2408;
                    if ((wchar_t ****)local_2408 == (wchar_t ****)0x0) {
                      ppppwVar13 = &local_2648;
                    }
                    ppppwVar13 = ppppwVar13 + lVar9 * 9;
                    for (lVar30 = 9; lVar30 != 0; lVar30 = lVar30 + -1) {
                      *ppppwVar13 = (wchar_t ***)*plVar12;
                      plVar12 = plVar12 + 1;
                      ppppwVar13 = ppppwVar13 + 1;
                    }
                  }
                  break;
                }
                plVar12 = plVar12 + 9;
                lVar9 = lVar9 + -0x48;
              } while (lVar9 != 0);
            }
            psVar22 = psVar22 + 0xc;
          } while (psVar22 != psVar1);
        }
        FUN_146f14852(local_3d8,&local_2648);
        if ((wchar_t ****)local_2408 != (wchar_t ****)0x0) {
          FUN_1400020a8();
        }
      }
    }
    iVar28 = (uint)local_190;
  }
  if (iVar28 != 0) {
    iVar23 = 0;
    do {
      plVar12 = local_198;
      if (local_198 == (longlong *)0x0) {
        plVar12 = local_3d8;
      }
      local_2618 = 0;
      uStack_2610 = 0;
      local_2628 = 0;
      uStack_2620 = 0;
      local_2638 = 0;
      uStack_2630 = 0;
      local_2648 = (wchar_t ***)0x0;
      pppwStack_2640 = (wchar_t ***)0x0;
      local_2608 = 0;
      uVar27 = local_269c & 0xfffffffc;
      FUN_146f146dc(local_23f8,local_26f8);
      uVar14 = uStack_2630;
      pppwStack_26b0 = local_2700;
      local_26a8 = local_2710[1];
      local_26a0 = 0;
      local_269c = *(uint *)(plVar12 + (longlong)iVar23 * 9 + 4) & 1 | uVar27;
      lVar9 = (longlong)(int)uStack_2630;
      uVar27 = (int)uStack_2630 + 1;
      uStack_2630 = CONCAT44(uStack_2630._4_4_,uVar27);
      local_26b8 = local_23f8;
      if (uStack_2630._4_4_ < uVar27) {
        FUN_146f1aa0c(&local_2638,uVar14 & 0xffffffff);
      }
      plVar18 = plVar12 + (longlong)iVar23 * 9;
      plVar26 = (longlong *)(lVar9 * 0x48 + local_2638);
      for (lVar30 = 9; lVar30 != 0; lVar30 = lVar30 + -1) {
        *plVar26 = *plVar18;
        plVar18 = plVar18 + 1;
        plVar26 = plVar26 + 1;
      }
      local_2698 = (wchar_t ****)0x0;
      uStack_2690 = (wchar_t ****)0x0;
      lVar9 = plVar12[(longlong)iVar23 * 9];
      if (lVar9 == 0) {
        FUN_14020fad6(&local_2698,&DAT_149e01fe8);
      }
      else {
        FUN_1400348e2(lVar9 + 0x20,&local_2698);
      }
      lVar9 = *local_2710;
      pppppwVar29 = (wchar_t *****)&DAT_149dfb77a;
      if ((int)uStack_2690 != 0) {
        pppppwVar29 = (wchar_t *****)local_2698;
      }
      local_26d0 = local_26f8[3];
      FUN_1400021e4(&local_26d0);
      if (pppppwVar29 == (wchar_t *****)0x0) {
LAB_142a7193f:
        iStack_26c8 = (int)uStack_26d8;
        iStack_26c4 = uStack_26d8._4_4_;
        local_26d0 = local_26e0;
        local_26e0 = 0;
        uStack_26d8 = 0;
      }
      else {
        sVar11 = wcslen((wchar_t *)pppppwVar29);
        if ((int)sVar11 == 0) goto LAB_142a7193f;
        iVar4 = (int)uStack_26d8;
        iVar7 = (int)sVar11 + (uint)((int)uStack_26d8 == 0);
        local_26d0 = local_26e0;
        local_26e0 = 0;
        iStack_26c8 = (int)uStack_26d8;
        iVar5 = uStack_26d8._4_4_;
        iStack_26c4 = uStack_26d8._4_4_;
        uStack_26d8 = 0;
        iVar20 = iVar7 + iVar4;
        if (iVar20 < iVar4) {
LAB_142a720c6:
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4((longlong)iVar7);
        }
        if (iVar20 < 0) {
LAB_142a720ce:
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar20);
        }
        if (iVar5 < iVar20) {
          FUN_1446f8c06(&local_26d0);
        }
        FUN_1400020e8(&local_26d0,pppppwVar29,sVar11 & 0xffffffff);
      }
      local_2758 = (wchar_t ****)&local_26b8;
      FUN_146f11e34(&local_2648,&local_26c0,&local_26d0,lVar9);
      plVar18 = local_26f0;
      if (local_26d0 != 0) {
        FUN_1400020a8();
      }
      if (local_26e0 != 0) {
        FUN_1400020a8();
      }
      iVar7 = (int)plVar18[1];
      *(uint *)(plVar18 + 1) = iVar7 + 1U;
      if (*(uint *)((longlong)plVar18 + 0xc) < iVar7 + 1U) {
        FUN_146f1c6aa(plVar18,iVar7);
      }
      *(longlong *)(*plVar18 + (longlong)iVar7 * 8) = local_26c0;
      if (local_26c0 != 0) {
        if ((*(byte *)(local_26c0 + 0xb8) & 8) != 0) {
          LOCK();
          *(int *)(local_26c0 + 0xbc) = *(int *)(local_26c0 + 0xbc) + 1;
          UNLOCK();
          if (local_26c0 == 0) goto LAB_142a71918;
        }
        FUN_146f11920();
      }
LAB_142a71918:
      if ((wchar_t *****)local_2698 != (wchar_t *****)0x0) {
        FUN_1400020a8();
      }
      FUN_146f12788(&local_2648);
      iVar23 = iVar23 + 1;
    } while (iVar28 != iVar23);
  }
  plVar12 = local_26e8;
  iVar28 = (int)plVar18[1];
  local_2711 = local_2711 | iVar28 == 0;
  if (local_2711 == 0) {
    plVar26 = (longlong *)*local_2710;
    pppppwVar29 = (wchar_t *****)((ulonglong)local_26e8 | 1);
    local_2698 = (wchar_t ****)pppppwVar29;
    if ((((ulonglong)local_26e8 & 0xfffffffffffffffe) != 0) && (DAT_14c950c29 == '\x01')) {
      FUN_1456cec3c();
    }
    plVar31 = local_26f8;
    if ((int)plVar26[1] != *(int *)((longlong)plVar26 + 0x34)) {
      uVar27 = ((uint)((ulonglong)plVar12 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar12 >> 4)) *
               -0x7a143595;
      uVar27 = (uVar27 >> 0xd ^ uVar27) * -0x3d4d51cb;
      plVar12 = plVar26 + 7;
      if ((longlong *)plVar26[8] != (longlong *)0x0) {
        plVar12 = (longlong *)plVar26[8];
      }
      iVar28 = *(int *)((longlong)plVar12 +
                       (ulonglong)((int)plVar26[9] - 1U & (uVar27 >> 0x10 ^ uVar27)) * 4);
      if (iVar28 != -1) {
LAB_142a71b58:
        lVar9 = *plVar26 + (longlong)iVar28 * 0x30;
        if (*(wchar_t ******)(*plVar26 + (longlong)iVar28 * 0x30) != pppppwVar29)
        goto code_r0x000142a71b71;
        if ((uint *)(lVar9 + 8) != (uint *)0x0 && lVar9 != 0) {
          if (*(int *)(lVar9 + 0xc) == 0) {
LAB_142a71fcb:
            plVar12 = (longlong *)0x0;
          }
          else {
            uVar27 = *(uint *)(lVar9 + 8);
            plVar12 = (longlong *)0x0;
            if ((-1 < (int)uVar27) && ((int)uVar27 < DAT_14c9647dc)) {
              puVar19 = (undefined8 *)
                        ((ulonglong)((uVar27 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar27 >> 0x10) * 8));
              if ((puVar19 == (undefined8 *)0x0) ||
                 ((*(int *)(puVar19 + 2) != *(int *)(lVar9 + 0xc) ||
                  ((*(uint *)(puVar19 + 1) & 0x10200000) != 0)))) goto LAB_142a71fcb;
              plVar12 = (longlong *)*puVar19;
            }
          }
          if (plVar12 == local_26f8) {
            lVar30 = FUN_146f14910(&local_2698);
            if (lVar30 == 0) {
              uVar27 = 0;
              iVar28 = 0;
            }
            else {
              uVar27 = *(uint *)(lVar30 + 0xc);
              if ((int)uVar27 < DAT_14c9647dc) {
                lVar30 = (ulonglong)((uVar27 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar27 >> 0x10) * 8);
              }
              else {
                lVar30 = 0;
              }
              iVar28 = *(int *)(lVar30 + 0x10);
              if (*(int *)(lVar30 + 0x10) == 0) {
                LOCK();
                iVar28 = DAT_14c964868 + 1;
                UNLOCK();
                iVar23 = DAT_14c964868 + 1;
                bVar32 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar28;
                if (bVar32) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar23);
                }
                LOCK();
                iVar28 = *(int *)(lVar30 + 0x10);
                bVar32 = iVar28 == 0;
                if (bVar32) {
                  *(int *)(lVar30 + 0x10) = iVar23;
                  iVar28 = 0;
                }
                UNLOCK();
                plVar31 = local_26f8;
                plVar18 = local_26f0;
                if (bVar32) {
                  iVar28 = iVar23;
                }
              }
            }
            if ((*(uint *)(lVar9 + 0x20) == uVar27) && (*(int *)(lVar9 + 0x24) == iVar28))
            goto LAB_142a71f64;
          }
          if ((plVar26[10] != 0) && (iVar28 = *(int *)(lVar9 + 0x18), (longlong)iVar28 != 0)) {
            lVar9 = *(longlong *)(lVar9 + 0x10);
            lVar30 = 0;
            do {
              FUN_146f42220(plVar26[10],*(undefined8 *)(lVar9 + lVar30));
              lVar30 = lVar30 + 8;
            } while ((longlong)iVar28 * 8 != lVar30);
          }
          FUN_146f1ca6a(plVar26,&local_2698);
        }
      }
    }
LAB_142a71e4a:
    pppwStack_2640 = (wchar_t ***)0x0;
    local_2638 = 0;
    lVar9 = FUN_146f14910(&local_2698);
    uVar27 = 0;
    if (lVar9 == 0) {
      uStack_2630 = 0;
    }
    else {
      uVar24 = *(uint *)(lVar9 + 0xc);
      if ((int)uVar24 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar24 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar28 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar28 = DAT_14c964868 + 1;
        UNLOCK();
        iVar23 = DAT_14c964868 + 1;
        bVar32 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar28;
        if (bVar32) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar23);
        }
        LOCK();
        iVar28 = *(int *)(lVar9 + 0x10);
        bVar32 = iVar28 == 0;
        if (bVar32) {
          *(int *)(lVar9 + 0x10) = iVar23;
          iVar28 = 0;
        }
        UNLOCK();
        plVar31 = local_26f8;
        if (bVar32) {
          iVar28 = iVar23;
        }
      }
      uStack_2630 = CONCAT44(iVar28,uVar24);
    }
    uVar14 = 0;
    if (plVar31 != (longlong *)0x0) {
      uVar27 = *(uint *)((longlong)plVar31 + 0xc);
      if ((int)uVar27 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar27 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar27 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      uVar14 = (ulonglong)*(uint *)(lVar9 + 0x10);
      if (*(uint *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar28 = DAT_14c964868 + 1;
        UNLOCK();
        uVar24 = DAT_14c964868 + 1;
        bVar32 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar28;
        if (bVar32) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar24);
        }
        LOCK();
        uVar8 = *(uint *)(lVar9 + 0x10);
        bVar32 = uVar8 == 0;
        if (bVar32) {
          *(uint *)(lVar9 + 0x10) = uVar24;
          uVar8 = 0;
        }
        UNLOCK();
        if (bVar32) {
          uVar8 = uVar24;
        }
        uVar14 = (ulonglong)uVar8;
      }
    }
    local_2648 = (wchar_t ***)((ulonglong)uVar27 | uVar14 << 0x20);
    FUN_146f1496e(&pppwStack_2640,plVar18);
    pppwStack_26b0 = (wchar_t ***)&local_2648;
    local_26b8 = (wchar_t ****)&local_2698;
    FUN_146f1cc7e(plVar26,&local_26d0);
    FUN_146f1ad47(pppwStack_2640,local_2638 & 0xffffffff);
    if ((wchar_t ****)pppwStack_2640 != (wchar_t ****)0x0) {
      FUN_1400020a8();
    }
LAB_142a71f64:
    iVar28 = (int)plVar18[1];
  }
  if (cStack_23e0 == '\x01') {
    FUN_1400020a8(local_23f8[0]);
  }
  if (local_198 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  lVar9 = 0xd8;
  do {
    FUN_146f12788(local_188 + lVar9);
    lVar9 = lVar9 + -0x48;
  } while (lVar9 != -0x48);
  if (local_2668[0] != 0) {
    FUN_1400020a8();
  }
  if (local_2658 != (short *)0x0) {
    FUN_1400020a8();
  }
LAB_142a719d2:
  if ((local_60 ^ (ulonglong)auStack_2778) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (longlong)iVar28;
code_r0x000142a7116d:
  ppppwVar13 = (wchar_t ****)ppppwVar13[9];
  if (ppppwVar13 == (wchar_t ****)0x0) goto LAB_142a71221;
  goto LAB_142a71167;
code_r0x000142a71b71:
  iVar28 = *(int *)(lVar9 + 0x28);
  if (iVar28 == -1) goto LAB_142a71e4a;
  goto LAB_142a71b58;
}



// FUNCTION 142a7214e FUN_142a7214e body=355 status=ok
// SIG undefined FUN_142a7214e(void)

longlong FUN_142a7214e(longlong *param_1,ulonglong *param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  uVar2 = *param_2;
  uVar3 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = *(int *)((longlong)plVar5 +
                  (ulonglong)((int)param_1[9] - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
  if (iVar6 == -1) {
    return 0;
  }
  while (lVar1 = *param_1 + (longlong)iVar6 * 0x30,
        *(ulonglong *)(*param_1 + (longlong)iVar6 * 0x30) != uVar2) {
    iVar6 = *(int *)(lVar1 + 0x28);
    if (iVar6 == -1) {
      return 0;
    }
  }
  if ((uint *)(lVar1 + 8) == (uint *)0x0 || lVar1 == 0) {
    return 0;
  }
  if (*(int *)(lVar1 + 0xc) != 0) {
    uVar3 = *(uint *)(lVar1 + 8);
    lVar4 = 0;
    if (((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) goto LAB_142a72242;
    plVar5 = (longlong *)
             ((ulonglong)((uVar3 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       (((int)plVar5[2] == *(int *)(lVar1 + 0xc) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)))) {
      lVar4 = *plVar5;
      goto LAB_142a72242;
    }
  }
  lVar4 = 0;
LAB_142a72242:
  if (lVar4 != param_3) {
    return 0;
  }
  if ((uVar2 & 1) != 0) {
    if (*(int *)(lVar1 + 0x24) == 0) {
      return 0;
    }
    uVar3 = *(uint *)(lVar1 + 0x20);
    if ((int)uVar3 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar3) {
      return 0;
    }
    plVar5 = (longlong *)
             ((ulonglong)((uVar3 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
    if (plVar5 == (longlong *)0x0) {
      return 0;
    }
    if ((int)plVar5[2] != *(int *)(lVar1 + 0x24)) {
      return 0;
    }
    if ((*(uint *)(plVar5 + 1) & 0x10200000) != 0) {
      return 0;
    }
    if (*plVar5 == 0) {
      return 0;
    }
  }
  return lVar1 + 0x10;
}



// FUNCTION 142a722b1 FUN_142a722b1 body=69 status=ok
// SIG undefined FUN_142a722b1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a722b1(void)

{
  _DAT_14c999510 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a722f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c999518,1);
  return;
}



// FUNCTION 142a722f6 FUN_142a722f6 body=989 status=ok
// SIG undefined FUN_142a722f6(void)

void FUN_142a722f6(longlong *param_1,ulonglong *param_2,longlong param_3,longlong *param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  undefined1 auStack_78 [32];
  ulonglong *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar5 = *param_2;
    uVar6 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar7 +
                    (ulonglong)((int)param_1[9] - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar8 != -1) {
LAB_142a72381:
      lVar1 = *param_1 + (longlong)iVar8 * 0x30;
      if (*(ulonglong *)(*param_1 + (longlong)iVar8 * 0x30) != uVar5) goto code_r0x000142a72396;
      if ((uint *)(lVar1 + 8) != (uint *)0x0 && lVar1 != 0) {
        if (*(int *)(lVar1 + 0xc) == 0) {
LAB_142a7265c:
          lVar3 = 0;
        }
        else {
          uVar6 = *(uint *)(lVar1 + 8);
          lVar3 = 0;
          if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c9647dc)) {
            plVar7 = (longlong *)
                     ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
            if ((plVar7 == (longlong *)0x0) ||
               (((int)plVar7[2] != *(int *)(lVar1 + 0xc) ||
                ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)))) goto LAB_142a7265c;
            lVar3 = *plVar7;
          }
        }
        if (lVar3 == param_3) {
          lVar3 = FUN_146f14910(param_2);
          if (lVar3 == 0) {
            uVar6 = 0;
            iVar8 = 0;
          }
          else {
            uVar6 = *(uint *)(lVar3 + 0xc);
            if ((int)uVar6 < DAT_14c9647dc) {
              lVar3 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
            }
            else {
              lVar3 = 0;
            }
            iVar8 = *(int *)(lVar3 + 0x10);
            if (*(int *)(lVar3 + 0x10) == 0) {
              LOCK();
              iVar8 = DAT_14c964868 + 1;
              UNLOCK();
              iVar9 = DAT_14c964868 + 1;
              bVar11 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar8;
              if (bVar11) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar9);
              }
              LOCK();
              iVar8 = *(int *)(lVar3 + 0x10);
              bVar11 = iVar8 == 0;
              if (bVar11) {
                *(int *)(lVar3 + 0x10) = iVar9;
                iVar8 = 0;
              }
              UNLOCK();
              if (bVar11) {
                iVar8 = iVar9;
              }
            }
          }
          if ((*(uint *)(lVar1 + 0x20) == uVar6) && (*(int *)(lVar1 + 0x24) == iVar8))
          goto LAB_142a725db;
        }
        if ((param_1[10] != 0) && (iVar8 = *(int *)(lVar1 + 0x18), (longlong)iVar8 != 0)) {
          lVar1 = *(longlong *)(lVar1 + 0x10);
          lVar3 = 0;
          do {
            FUN_146f42220(param_1[10],*(undefined8 *)(lVar1 + lVar3));
            lVar3 = lVar3 + 8;
          } while ((longlong)iVar8 * 8 != lVar3);
        }
        FUN_146f1ca6a(param_1,param_2);
      }
    }
  }
LAB_142a724d5:
  local_58 = param_2;
  FUN_146f1d1f8(param_1,&local_4c);
  lVar1 = *param_1 + (longlong)local_4c * 0x30;
  lVar3 = FUN_146f14910(param_2);
  uVar6 = 0;
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar10 = *(uint *)(lVar3 + 0xc);
    if ((int)uVar10 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    iVar8 = *(int *)(lVar3 + 0x10);
    if (*(int *)(lVar3 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar8 = *(int *)(lVar3 + 0x10);
      bVar11 = iVar8 == 0;
      if (bVar11) {
        *(int *)(lVar3 + 0x10) = iVar9;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar11) {
        iVar8 = iVar9;
      }
    }
    uVar4 = CONCAT44(iVar8,uVar10);
  }
  *(undefined8 *)(lVar1 + 0x20) = uVar4;
  uVar5 = 0;
  if (param_3 != 0) {
    uVar6 = *(uint *)(param_3 + 0xc);
    if ((int)uVar6 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    uVar5 = (ulonglong)*(uint *)(lVar3 + 0x10);
    if (*(uint *)(lVar3 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      uVar10 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar10);
      }
      LOCK();
      uVar2 = *(uint *)(lVar3 + 0x10);
      bVar11 = uVar2 == 0;
      if (bVar11) {
        *(uint *)(lVar3 + 0x10) = uVar10;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar11) {
        uVar2 = uVar10;
      }
      uVar5 = (ulonglong)uVar2;
    }
  }
  *(ulonglong *)(lVar1 + 8) = (ulonglong)uVar6 | uVar5 << 0x20;
  iVar8 = *(int *)(lVar1 + 0x18);
  *(uint *)(lVar1 + 0x18) = iVar8 + 1U;
  if (*(uint *)(lVar1 + 0x1c) < iVar8 + 1U) {
    FUN_146f1c6aa((longlong *)(lVar1 + 0x10),iVar8);
  }
  lVar3 = *param_4;
  *(longlong *)(*(longlong *)(lVar1 + 0x10) + (longlong)iVar8 * 8) = lVar3;
  if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0xb8) & 8) != 0)) {
    LOCK();
    *(int *)(lVar3 + 0xbc) = *(int *)(lVar3 + 0xbc) + 1;
    UNLOCK();
  }
LAB_142a725db:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000142a72396:
  iVar8 = *(int *)(lVar1 + 0x28);
  if (iVar8 == -1) goto LAB_142a724d5;
  goto LAB_142a72381;
}



// FUNCTION 142a726d4 FUN_142a726d4 body=618 status=ok
// SIG undefined FUN_142a726d4(void)

void FUN_142a726d4(longlong *param_1)

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
  longlong *plVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar14 = 1;
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
      iVar9 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar9 = iVar2 + -1;
      }
      uVar13 = 0;
      uVar14 = (ulonglong)(uint)(iVar9 >> 5);
      if (iVar9 >> 5 < 1) {
        uVar14 = uVar13;
      }
      iVar8 = 0;
      do {
        if (uVar14 == uVar13) {
          return;
        }
        iVar8 = iVar8 + 0x20;
        uVar12 = puVar6[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar13 = 0;
      iVar8 = 0;
    }
    uVar14 = (ulonglong)(-uVar12 & uVar12);
    uVar1 = uVar14 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar9 = (iVar8 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar9) {
      iVar9 = iVar2;
    }
  }
  if (iVar9 < iVar2) {
    uVar12 = 0xffffffff;
    do {
      lVar7 = *param_1 + (longlong)iVar9 * 0x30;
      if (((((*(int *)(lVar7 + 0xc) == 0) || (uVar3 = *(uint *)(lVar7 + 8), (int)uVar3 < 0)) ||
           (DAT_14c9647dc <= (int)uVar3)) ||
          (((lVar11 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar11 == 0 ||
            (*(int *)(lVar11 + 0x10) != *(int *)(lVar7 + 0xc))) ||
           ((*(uint *)(lVar11 + 8) & 0x10200000) != 0)))) ||
         ((DAT_14c75f43c == '\x01' &&
          (((*(int *)(lVar7 + 0x24) == 0 || (uVar3 = *(uint *)(lVar7 + 0x20), (int)uVar3 < 0)) ||
           ((DAT_14c9647dc <= (int)uVar3 ||
            ((((plVar10 = (longlong *)
                          ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
               plVar10 == (longlong *)0x0 || ((int)plVar10[2] != *(int *)(lVar7 + 0x24))) ||
              ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)) || (*plVar10 == 0)))))))))) {
        if ((param_1[10] != 0) && (iVar2 = *(int *)(lVar7 + 0x18), (longlong)iVar2 != 0)) {
          lVar7 = *(longlong *)(lVar7 + 0x10);
          lVar11 = 0;
          do {
            FUN_146f42220(param_1[10],*(undefined8 *)(lVar7 + lVar11));
            lVar11 = lVar11 + 8;
          } while ((longlong)iVar2 * 8 != lVar11);
        }
        FUN_146f1caf4(param_1,iVar9);
        iVar2 = (int)param_1[5];
      }
      uVar12 = uVar12 & ~(uint)uVar14;
      puVar6 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar6 = (uint *)(param_1 + 2);
      }
      iVar9 = (int)uVar13;
      lVar7 = (longlong)iVar9;
      uVar3 = puVar6[lVar7] & uVar12;
      if (uVar3 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar9) {
          iVar5 = iVar9;
        }
        if (iVar4 <= iVar9) {
          return;
        }
        lVar11 = 0;
        while( true ) {
          iVar8 = iVar8 + 0x20;
          uVar3 = puVar6[lVar7 + lVar11 + 1];
          if (uVar3 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar5 - lVar7 == lVar11) {
            return;
          }
        }
        uVar13 = (ulonglong)(iVar9 + (int)lVar11 + 1);
        uVar12 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar1 = uVar14 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar9 = (iVar8 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar2);
  }
  return;
}



// FUNCTION 142a7293e FUN_142a7293e body=235 status=ok
// SIG undefined FUN_142a7293e(void)

void * FUN_142a7293e(longlong param_1,undefined8 param_2,uint param_3)

{
  longlong lVar1;
  longlong *plVar2;
  void *_Dst;
  void *_Src;
  
  plVar2 = (longlong *)FUN_146f14c8a();
  if ((plVar2 == (longlong *)0x0) || (4 < param_3)) {
    return (void *)0x0;
  }
  lVar1 = *plVar2;
  switch(param_3) {
  case 0:
    _Dst = (void *)FUN_14001cc68(*(undefined4 *)(lVar1 + 0xc),*(undefined4 *)(lVar1 + 0x10));
    break;
  case 1:
    _Dst = (void *)FUN_14153c902(*(undefined4 *)(lVar1 + 0xc),*(undefined4 *)(lVar1 + 0x10));
    break;
  case 2:
    _Dst = (void *)FUN_14001cc68(*(undefined4 *)(lVar1 + 0xc),*(undefined4 *)(lVar1 + 0x10));
    FUN_146f3b2d4(param_1 + 8,_Dst,*plVar2);
    break;
  case 3:
    _Dst = (void *)FUN_14001cc68(*(undefined4 *)(lVar1 + 0xc),*(undefined4 *)(lVar1 + 0x10));
    _Src = (void *)plVar2[1];
    goto LAB_142a729c5;
  case 4:
    _Dst = (void *)FUN_14001cc68(*(undefined4 *)(lVar1 + 0xc),*(undefined4 *)(lVar1 + 0x10));
    _Src = (void *)plVar2[2];
LAB_142a729c5:
    memcpy(_Dst,_Src,(ulonglong)*(uint *)(lVar1 + 0xc));
    if ((*(byte *)(lVar1 + 0x3c) & 1) != 0) {
      FUN_146f3ba08(param_1 + 8,_Dst,_Src,lVar1);
    }
  }
  *(short *)(plVar2 + 3) = (short)plVar2[3] + 1;
  return _Dst;
}



// FUNCTION 142a72a2a FUN_142a72a2a body=153 status=ok
// SIG undefined FUN_142a72a2a(void)

longlong * FUN_142a72a2a(longlong param_1,longlong *param_2,int param_3)

{
  uint *puVar1;
  ushort uVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  longlong lVar6;
  
  plVar5 = (longlong *)FUN_146f14c8a(param_1,param_3);
  if (plVar5 != (longlong *)0x0) {
    lVar3 = plVar5[1];
    lVar6 = FUN_14001cc68(*(undefined4 *)(*plVar5 + 0xc),*(undefined4 *)(*plVar5 + 0x10));
    if (lVar6 != 0) {
      *(short *)(plVar5 + 3) = (short)plVar5[3] + 1;
      *param_2 = lVar6;
      param_2[1] = lVar3;
      return param_2;
    }
    if ((short)plVar5[3] == 0) {
      lVar3 = *(longlong *)(param_1 + 0x178);
      uVar2 = *(ushort *)(lVar3 + (longlong)param_3 * 2);
      if (uVar2 != 0) {
        bVar4 = (byte)uVar2 & 0x1f;
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x160) + (ulonglong)(uVar2 >> 5) * 4);
        *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
        *(undefined2 *)(lVar3 + (longlong)param_3 * 2) = 0;
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 142a72ac3 FUN_142a72ac3 body=69 status=ok
// SIG undefined FUN_142a72ac3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a72ac3(void)

{
  _DAT_14c999520 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a72b05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c999528,1);
  return;
}



// FUNCTION 142a72b08 FUN_142a72b08 body=69 status=ok
// SIG undefined FUN_142a72b08(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a72b08(void)

{
  _DAT_14c999530 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a72b4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c999538,1);
  return;
}



// FUNCTION 142a72b4d FUN_142a72b4d body=69 status=ok
// SIG undefined FUN_142a72b4d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a72b4d(void)

{
  _DAT_14c999540 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a72b8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c999548,1);
  return;
}



// FUNCTION 142a72b92 FUN_142a72b92 body=69 status=ok
// SIG undefined FUN_142a72b92(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a72b92(void)

{
  _DAT_14c999550 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a72bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c999558,1);
  return;
}



// FUNCTION 142a72bd8 FUN_142a72bd8 body=262 status=ok
// SIG undefined FUN_142a72bd8(void)

ulonglong FUN_142a72bd8(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  void *_Dst;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar5 = (longlong *)*param_2;
  if ((*(byte *)(*plVar5 + 0xc) & 9) == 0) {
    uVar4 = (ulonglong)(uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0xc));
    iVar1 = *(int *)(param_2 + 1);
    lVar6 = (longlong)iVar1;
    uVar3 = (uVar4 + lVar6) - (ulonglong)*(uint *)(param_1 + 5);
    if ((ulonglong)*(uint *)(param_1 + 5) <= uVar4 + lVar6 && uVar3 != 0) {
      if (uVar3 < uVar4) {
        uVar4 = uVar3;
      }
      FUN_146f155b4(param_1 + 1,uVar4);
      plVar5 = (longlong *)*param_2;
      iVar1 = *(int *)(param_2 + 1);
      lVar6 = (longlong)iVar1;
    }
    uVar4 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    if (iVar1 != 0) {
      lVar6 = lVar6 << 3;
      do {
        FUN_146f15158(param_1 + 1,plVar5);
        plVar5 = plVar5 + 1;
        lVar6 = lVar6 + -8;
      } while (lVar6 != 0);
    }
  }
  else {
    _Dst = (void *)*param_1;
    if (_Dst == (void *)0x0) {
      _Dst = (void *)FUN_14001cc68(0x2128);
      memset(_Dst,0,0x210c);
      *(undefined8 *)((longlong)_Dst + 0x2110) = 0;
      *(undefined8 *)((longlong)_Dst + 0x2118) = 0;
      *(undefined4 *)((longlong)_Dst + 0x2120) = DAT_14c75f444;
      *param_1 = (longlong)_Dst;
    }
    local_38 = *(undefined4 *)param_2;
    uStack_34 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_30 = *(undefined4 *)(param_2 + 1);
    uStack_2c = *(undefined4 *)((longlong)param_2 + 0xc);
    uVar2 = FUN_146f150ac(_Dst);
    uVar4 = (ulonglong)uVar2;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a72ce0 FUN_142a72ce0 body=740 status=ok
// SIG undefined FUN_142a72ce0(void)

int FUN_142a72ce0(longlong *param_1,longlong param_2,longlong param_3,undefined8 *param_4,
                 undefined1 *param_5)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  bool bVar10;
  uint uVar11;
  bool bVar12;
  undefined1 auStack_98 [32];
  bool local_78;
  byte local_69;
  int local_68;
  uint local_64;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  int iVar9;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = *(longlong *)(param_2 + 0xe0);
  local_58 = 0;
  local_50 = 0;
  lVar7 = *param_1;
  if (lVar7 == 0) {
LAB_142a72d44:
    uVar5 = 0;
    uVar11 = 0;
    bVar12 = false;
  }
  else {
    uVar11 = *(int *)(lVar7 + 0x2118) + *(int *)(lVar7 + 0x2108);
    if (uVar11 == 0) goto LAB_142a72d44;
    bVar12 = *(int *)(lVar7 + 0x2108) != 0;
    uVar5 = (uint)CONCAT71((int7)((ulonglong)param_2 >> 8),1);
  }
  iVar4 = (int)param_1[1];
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  if ((bVar12 == false) && (iVar4 == iVar1)) {
    if (*(int *)(lVar2 + 0x18) == 0) {
      FUN_146f5b2fa(lVar2,*(int *)(lVar2 + 8) + 1);
    }
    *(undefined4 *)(param_4 + 1) = local_50;
    *param_4 = local_58;
    *param_5 = 0;
    iVar4 = (uVar5 & 0xff) + 1;
    goto LAB_142a72d86;
  }
  local_69 = bVar12;
  local_64 = uVar5;
  local_60 = param_3;
  FUN_146f5435e(lVar2,bVar12 != false,1);
  local_68 = *(int *)(lVar2 + 0x10) - *(int *)(lVar2 + 0xc);
  local_69 = iVar4 != iVar1;
  FUN_146f5435e(lVar2,local_69,1);
  if (*(int *)(lVar2 + 0x18) == 0) {
    uVar5 = 0;
    if (bVar12 != false) {
      lVar7 = local_60;
      if (local_60 == 0) {
        lVar7 = 0;
      }
      local_78 = local_60 != 0;
      uVar5 = FUN_142a7f944(*param_1,param_2,lVar7,&local_58);
      if (uVar5 == 0) {
        if (*(int *)(lVar2 + 0x18) == 0) {
          FUN_146f5b2fa(lVar2,*(int *)(lVar2 + 8) + 1,local_60);
        }
        goto LAB_142a72e0e;
      }
    }
    iVar9 = 0;
    iVar8 = 0;
    if (iVar4 == iVar1) {
      bVar3 = true;
LAB_142a72eac:
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_146f151a6();
      if (uVar6 == 0) {
        if (uVar5 == 0) {
          bVar3 = false;
          iVar9 = 3;
          iVar8 = 3;
          if (*(int *)(lVar2 + 0x18) == 0) {
            FUN_146f5b2fa();
            iVar9 = 3;
            iVar8 = 3;
            bVar3 = false;
          }
          goto LAB_142a72eac;
        }
        iVar4 = *(int *)(lVar2 + 0x10);
        iVar1 = *(int *)(lVar2 + 0xc);
        FUN_146f5b2fa(lVar2,local_68);
        local_69 = 0;
        FUN_146f5435e(lVar2,0,1);
        FUN_146f5b2fa(lVar2,iVar4 - iVar1);
        bVar3 = true;
        uVar6 = 0;
        iVar9 = 0;
        iVar8 = 0;
      }
      else {
        bVar3 = true;
        iVar9 = 0;
        iVar8 = 0;
      }
    }
    bVar10 = true;
    iVar4 = (uint)(bVar12 ^ 1) * 2;
    if (!bVar3) {
      iVar4 = iVar8;
    }
    if ((char)local_64 == '\0') {
      iVar4 = iVar9;
    }
    *(undefined4 *)(param_4 + 1) = local_50;
    *param_4 = local_58;
    if (uVar11 <= uVar5) {
      bVar10 = uVar6 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0xc));
    }
  }
  else {
LAB_142a72e0e:
    *(undefined4 *)(param_4 + 1) = local_50;
    *param_4 = local_58;
    iVar4 = 3;
    bVar10 = true;
  }
  *param_5 = bVar10;
LAB_142a72d86:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 142a72fc6 FUN_142a72fc6 body=282 status=ok
// SIG undefined FUN_142a72fc6(void)

undefined8 * FUN_142a72fc6(longlong *param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_58 [36];
  uint local_34;
  uint *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = param_3;
  if (param_2 == 0) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar4 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar4 = (longlong *)param_1[8];
      }
      iVar2 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_3) * 4);
      if (iVar2 != -1) {
        do {
          lVar1 = *param_1 + (longlong)iVar2 * 0x40;
          if (*(uint *)(*param_1 + (longlong)iVar2 * 0x40) == param_3) {
            if (lVar1 != 0) {
              puVar3 = (undefined8 *)(lVar1 + 8);
              goto LAB_142a73092;
            }
            break;
          }
          iVar2 = *(int *)(lVar1 + 0x38);
        } while (iVar2 != -1);
      }
    }
    if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < DAT_14c75f44c) {
      local_30 = &local_34;
      FUN_146f1d81a(param_1,&local_24);
      puVar3 = (undefined8 *)((longlong)local_24 * 0x40 + *param_1 + 8);
    }
    else {
      puVar3 = (undefined8 *)0x0;
    }
  }
  else {
    puVar3 = (undefined8 *)param_1[(ulonglong)param_2 + 10];
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)FUN_14001cc68(0x30,0x10);
      *puVar3 = 0;
      puVar3[1] = 0;
      *(undefined4 *)(puVar3 + 2) = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      *(undefined4 *)(puVar3 + 5) = DAT_14c75f440;
      param_1[(ulonglong)param_2 + 10] = (longlong)puVar3;
      if (param_2 == 1) {
        *(undefined4 *)(puVar3 + 5) = DAT_14c75f448;
      }
    }
  }
LAB_142a73092:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar3;
}



// FUNCTION 142a730e2 FUN_142a730e2 body=657 status=ok
// SIG undefined FUN_142a730e2(void)

void FUN_142a730e2(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  byte bVar9;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *(longlong *)(param_2 + 0xd8);
  uVar6 = FUN_146f546d2(lVar2,1);
  uVar7 = FUN_146f546d2(lVar2,1);
  if (*(int *)(lVar2 + 0x14) != 0) goto LAB_142a73143;
  if ((uVar6 & 1) == 0) {
LAB_142a7313d:
    if ((uVar7 & 1) == 0) goto LAB_142a73143;
  }
  else {
    FUN_146f15c16(param_1,param_2,param_3);
    if ((*(longlong *)(param_2 + 8) != 0) ||
       ((*(longlong *)(param_2 + 0xd8) != 0 && (*(int *)(*(longlong *)(param_2 + 0xd8) + 0x14) != 0)
        ))) goto LAB_142a73143;
    if (*(longlong *)(param_2 + 0xe0) == 0) goto LAB_142a7313d;
    if (((uVar7 & 1) == 0) || (*(int *)(*(longlong *)(param_2 + 0xe0) + 0x18) != 0))
    goto LAB_142a73143;
  }
  puVar8 = *(undefined8 **)(param_1 + 8);
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar8[6] = 0;
    puVar8[7] = 0;
    *(undefined8 **)(param_1 + 8) = puVar8;
    puVar8[6] = *(undefined8 *)(param_1 + 0x18);
    *(undefined1 *)(puVar8 + 7) = 1;
  }
  local_60 = *(undefined8 *)(param_2 + 0xd8);
  puVar3 = *(undefined8 **)(param_2 + 0x110);
  bVar5 = 0;
  do {
    uVar4 = DAT_14c999560;
    if (*(int *)(puVar8 + 2) - *(int *)((longlong)puVar8 + 0x14) == *(int *)(param_1 + 0x20)) {
      FUN_146f5b89e(param_2);
      if (*(longlong *)(param_2 + 8) == 0) {
        *(undefined8 *)(param_2 + 8) = uVar4;
      }
      break;
    }
    local_50 = 0xffffffff;
    FUN_146f23430(param_2,&local_50);
    (**(code **)*puVar3)(puVar3,&local_58,&local_50);
    uVar4 = DAT_14c9997b8;
    if (local_58 == (longlong *)0x0) {
      FUN_146f5b89e(param_2);
      if (*(longlong *)(param_2 + 8) == 0) {
        *(undefined8 *)(param_2 + 8) = uVar4;
      }
LAB_142a7328d:
      bVar9 = 0;
    }
    else {
      if (param_3 == 0) {
        (**(code **)(*local_58 + 0x18))();
      }
      else {
        (**(code **)(*local_58 + 8))(local_58,param_2,param_3);
      }
      bVar5 = FUN_146f546d2(local_60,1);
      if (((*(longlong *)(param_2 + 8) != 0) ||
          ((*(longlong *)(param_2 + 0xd8) != 0 &&
           (*(int *)(*(longlong *)(param_2 + 0xd8) + 0x14) != 0)))) ||
         ((*(longlong *)(param_2 + 0xe0) != 0 &&
          (*(int *)(*(longlong *)(param_2 + 0xe0) + 0x18) != 0)))) goto LAB_142a7328d;
      if (local_58 == (longlong *)0x0) {
        local_68 = false;
      }
      else {
        local_68 = (int)local_58[1] == *(int *)(param_1 + 0x24);
      }
      FUN_142a73374(puVar8,param_2,param_3,&local_58);
      if ((*(longlong *)(param_2 + 8) != 0) ||
         ((*(longlong *)(param_2 + 0xd8) != 0 &&
          (*(int *)(*(longlong *)(param_2 + 0xd8) + 0x14) != 0)))) goto LAB_142a7328d;
      bVar9 = 1;
      if ((*(longlong *)(param_2 + 0xe0) != 0) &&
         (*(int *)(*(longlong *)(param_2 + 0xe0) + 0x18) != 0)) goto LAB_142a7328d;
    }
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_58 + 4;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*local_58 + 0x20))(local_58,1);
      }
    }
    bVar9 = bVar9 & bVar5;
    bVar5 = 1;
  } while (bVar9 != 0);
LAB_142a73143:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a73374 FUN_142a73374 body=501 status=ok
// SIG undefined FUN_142a73374(void)

void FUN_142a73374(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4,
                  char param_5)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined1 auStack_88 [32];
  longlong *local_68;
  ulonglong local_60;
  
  uVar6 = DAT_14c9997b8;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((*(uint *)(*param_4 + 0xc) & 1) == 0) || (*(char *)(param_1 + 0x38) != '\x01')) {
    if (param_5 == '\0') {
      if ((*(char *)(param_1 + 0x38) == '\x01') && (*(longlong *)(param_1 + 8) != 0)) {
        *(undefined8 *)(param_1 + 8) = 0;
        FUN_146f1b720();
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_88);
    }
    uVar5 = (ulonglong)((*(uint *)(*param_4 + 0xc) & 1) << 3) ^ 8;
    lVar4 = *(longlong *)(param_1 + uVar5);
    if (lVar4 == 0) {
      if (*(longlong *)(param_1 + 0x30) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x40);
      }
      puVar3 = (undefined4 *)FUN_14001cc68(0x60,0x10);
      *puVar3 = 0xffffffff;
      *(undefined8 *)(puVar3 + 1) = 0;
      *(undefined8 *)(puVar3 + 3) = 0;
      puVar3[5] = 0;
      FUN_146f5b27a(puVar3 + 6);
      *(undefined8 *)(puVar3 + 0xe) = 0;
      *(undefined8 *)(puVar3 + 0x10) = 0;
      *(undefined8 *)(puVar3 + 0x12) = 0;
      *(undefined8 *)(puVar3 + 0x14) = 0xffffffff;
      *(undefined4 *)((longlong)puVar3 + 0x57) = 0;
      uVar2 = *(undefined8 *)(param_1 + uVar5);
      *(undefined4 **)(param_1 + uVar5) = puVar3;
      FUN_146f1b720(uVar2);
      FUN_146f1b720(0);
      *(undefined8 *)(*(longlong *)(param_1 + uVar5) + 0x40) = uVar6;
      lVar4 = *(longlong *)(param_1 + uVar5);
    }
    FUN_146f23580(lVar4,param_2,param_3,param_4);
    lVar4 = *(longlong *)(param_1 + uVar5);
    if (*(char *)(lVar4 + 0x58) == '\0') {
      if (*(char *)(lVar4 + 0x59) == '\0') goto LAB_142a73426;
    }
    else {
      FUN_146f23746(lVar4,&local_68,param_2);
      if (local_68 != (longlong *)0x0) {
        FUN_146f15158(param_1 + 0x10,&local_68);
        if (local_68 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_68 + 4;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*local_68 + 0x20))(local_68,1);
          }
        }
      }
      lVar4 = *(longlong *)(param_1 + uVar5);
    }
    if (lVar4 != 0) {
      *(undefined8 *)(param_1 + uVar5) = 0;
      FUN_146f1b720();
    }
  }
  else {
    FUN_146f5b89e(param_2);
    if (*(longlong *)(param_2 + 8) == 0) {
      *(undefined8 *)(param_2 + 8) = uVar6;
    }
  }
LAB_142a73426:
  if ((local_60 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a7358a FUN_142a7358a body=337 status=ok
// SIG undefined FUN_142a7358a(void)

undefined8 * FUN_142a7358a(longlong *param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined1 auStack_58 [36];
  uint local_34;
  uint *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = param_3;
  if (param_2 == 0) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar4 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar4 = (longlong *)param_1[8];
      }
      iVar2 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_3) * 4);
      if (iVar2 != -1) {
        do {
          lVar1 = *param_1 + (longlong)iVar2 * 0x38;
          if (*(uint *)(*param_1 + (longlong)iVar2 * 0x38) == param_3) {
            if (lVar1 != 0) {
              puVar3 = (undefined8 *)(lVar1 + 8);
              goto LAB_142a73673;
            }
            break;
          }
          iVar2 = *(int *)(lVar1 + 0x30);
        } while (iVar2 != -1);
      }
    }
    if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < DAT_14c75f44c) {
      local_30 = &local_34;
      FUN_146f1df08(param_1,&local_24);
      lVar5 = (longlong)local_24 * 0x38 + *param_1;
      puVar3 = (undefined8 *)(lVar5 + 8);
      lVar1 = param_1[0xd];
      *(longlong *)(lVar5 + 0x20) = lVar1;
      if (lVar1 == 0) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = *(undefined4 *)(lVar1 + 0x30);
      }
      *(undefined4 *)(lVar5 + 0x2c) = uVar6;
    }
    else {
      puVar3 = (undefined8 *)0x0;
    }
  }
  else {
    puVar3 = (undefined8 *)param_1[(ulonglong)param_2 + 10];
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)FUN_14001cc68(0x28,0x10);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      *(undefined4 *)(puVar3 + 4) = DAT_14c75f440;
      *(undefined4 *)((longlong)puVar3 + 0x24) = 0xffffffff;
      param_1[(ulonglong)param_2 + 10] = (longlong)puVar3;
      lVar1 = param_1[0xd];
      puVar3[3] = lVar1;
      if (lVar1 == 0) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = *(undefined4 *)(lVar1 + 0x30);
      }
      *(undefined4 *)((longlong)puVar3 + 0x24) = uVar6;
      if (param_2 == 1) {
        *(undefined4 *)(puVar3 + 4) = DAT_14c75f448;
      }
    }
  }
LAB_142a73673:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar3;
}



// FUNCTION 142a736dc FUN_142a736dc body=69 status=ok
// SIG undefined FUN_142a736dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a736dc(void)

{
  _DAT_14c999578 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a7371e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c999580,1);
  return;
}



// FUNCTION 142a73722 FUN_142a73722 body=126 status=ok
// SIG undefined FUN_142a73722(void)

void FUN_142a73722(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if (2 < ((uint)param_2 & 0xffffff) - 1) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    cVar4 = FUN_146f1a26a(lVar2,param_2);
    if (((cVar4 != '\0') &&
        (plVar5 = (longlong *)
                  ((ulonglong)(((uint)param_2 & 0xffffff) << 5) + *(longlong *)(lVar2 + 8)),
        plVar5 != (longlong *)0x0)) && (lVar2 = plVar5[1], (longlong)(int)lVar2 != 0)) {
      lVar3 = *plVar5;
      lVar6 = 0;
      do {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x98) +
                         (ulonglong)(*(uint *)(lVar3 + lVar6) >> 5) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)*(uint *)(lVar3 + lVar6) & 0x1f);
        lVar6 = lVar6 + 4;
      } while ((longlong)(int)lVar2 * 4 != lVar6);
    }
  }
  return;
}



// FUNCTION 142a737a0 FUN_142a737a0 body=236 status=ok
// SIG undefined FUN_142a737a0(void)

ulonglong FUN_142a737a0(longlong param_1,uint param_2,int param_3,uint param_4,char param_5)

{
  uint *puVar1;
  ushort uVar2;
  bool bVar3;
  uint uVar4;
  undefined8 unaff_RBX;
  uint uVar5;
  undefined1 auStack_68 [40];
  uint *local_40;
  undefined4 local_38;
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  bVar3 = param_4 < *(uint *)(param_1 + 0xb4);
  if (param_3 == 0 && bVar3) {
    uVar4 = 0;
    if (param_5 != '\0') {
      uVar4 = param_4;
    }
    if (param_4 == 0) {
      uVar4 = param_4;
    }
    uVar2 = *(ushort *)(*(longlong *)(param_1 + 0x28) + (ulonglong)param_2 * 2);
    uVar5 = uVar2 & 0x7fff;
    if (uVar4 != uVar5) {
      local_2c = uVar5;
      if (param_5 != '\0') {
        local_2c = param_4;
      }
      *(ushort *)(*(longlong *)(param_1 + 0x28) + (ulonglong)param_2 * 2) =
           uVar2 & 0x8000 | (ushort)uVar4 & 0x7fff;
      FUN_146f16336(param_1,param_2);
      puVar1 = (uint *)(*(longlong *)(param_1 + 0x98) + (ulonglong)(param_2 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)param_2 & 0x1f);
      local_38 = 1;
      local_40 = &local_2c;
      FUN_146f163c8(param_1,param_2);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_3 == 0 && bVar3) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a7388e FUN_142a7388e body=229 status=ok
// SIG undefined FUN_142a7388e(void)

void FUN_142a7388e(longlong param_1,uint param_2,ulonglong param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 auStack_68 [40];
  int *local_40;
  uint local_38;
  int local_30 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = *(longlong *)(param_1 + 8);
  if ((*(byte *)(lVar4 + 0x2e0) & 8) == 0) {
    uVar3 = (uint)*(ushort *)(*(longlong *)(lVar4 + 0xc0) + (longlong)(int)param_2 * 2);
  }
  else {
    uVar3 = FUN_146f2180c(lVar4,param_2);
  }
  uVar5 = (uint)param_3;
  if ((uVar3 != uVar5) &&
     ((uVar5 == 0 ||
      ((uVar5 < *(uint *)(*(longlong *)(param_1 + 0x10) + 0x30) &&
       ((*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) +
                  (param_3 >> 5 & 0x7ffffff) * 4) >> (uVar5 & 0x1f) & 1) != 0)))))) {
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x98) + (ulonglong)(param_2 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)param_2 & 0x1f);
    local_30[2] = uVar3;
    local_30[3] = uVar5;
    local_38 = 0;
    lVar4 = 0;
    do {
      iVar2 = *(int *)((longlong)local_30 + lVar4 + 8);
      if (iVar2 != 0) {
        uVar6 = (ulonglong)local_38;
        local_38 = local_38 + 1;
        local_30[uVar6] = iVar2;
      }
      lVar4 = lVar4 + 4;
    } while (lVar4 != 8);
    local_40 = local_30;
    FUN_146f163c8(param_1,param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a73974 FUN_142a73974 body=191 status=ok
// SIG undefined FUN_142a73974(void)

undefined8 FUN_142a73974(longlong param_1,uint param_2,int param_3,char param_4)

{
  uint *puVar1;
  ushort uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  ushort uVar6;
  ulonglong uVar7;
  undefined1 auStack_78 [32];
  undefined4 *local_58;
  undefined4 local_50;
  undefined4 local_44;
  ulonglong local_40;
  
  uVar5 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = uVar5;
  if (param_3 == 1) {
    lVar3 = *(longlong *)(param_1 + 0x28);
    uVar7 = (ulonglong)param_2;
    uVar2 = *(ushort *)(lVar3 + uVar7 * 2);
    uVar4 = (uint)uVar2;
    if (param_4 == '\0') {
      uVar6 = 0;
    }
    else {
      uVar6 = 0x8000;
      if (-1 < (short)uVar2) {
        local_58 = &local_44;
        local_44 = 0;
        local_50 = 1;
        FUN_146f163c8(param_1,param_2);
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x98) + (ulonglong)(param_2 >> 5) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)param_2 & 0x1f);
        uVar4 = (uint)*(ushort *)(lVar3 + uVar7 * 2);
      }
    }
    uVar5 = (ulonglong)(uVar4 & 0x7fff);
    *(ushort *)(lVar3 + uVar7 * 2) = uVar6 | (ushort)(uVar4 & 0x7fff);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return CONCAT71((int7)(uVar5 >> 8),param_3 == 1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a73a34 FUN_142a73a34 body=1081 status=ok
// SIG undefined FUN_142a73a34(void)

void FUN_142a73a34(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  ushort uVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  int iVar10;
  ushort *puVar11;
  ulonglong uVar12;
  longlong *plVar13;
  char *pcVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  char *pcVar21;
  longlong *plVar22;
  int iVar23;
  ushort *puVar24;
  bool bVar25;
  undefined1 auStack_d8 [36];
  int local_b4;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  uint *local_98;
  uint local_90;
  uint local_8c;
  longlong *local_88;
  ulonglong local_80;
  undefined2 local_72;
  int local_70;
  ushort local_6a;
  ushort *local_68;
  longlong *local_60;
  undefined1 local_54 [4];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(longlong *)
       (*(longlong *)(*(longlong *)(*param_1 + 0x290) + (longlong)(param_2 / 100) * 8) +
       (longlong)(param_2 % 100) * 8) != 0) {
    lVar5 = *(longlong *)(*(longlong *)(*param_1 + 0x270) + (longlong)(param_2 / 100) * 8);
    lVar17 = (longlong)(param_2 % 100) * 0x38;
    plVar15 = *(longlong **)(lVar5 + 0x10 + lVar17);
    if ((*(byte *)((longlong)plVar15 + 0x3c) & 2) != 0) {
      local_88 = &local_50;
      local_50 = 0;
      local_80 = 0x100000000;
      iVar10 = (int)plVar15[1] - (uint)*(ushort *)((longlong)plVar15 + 0x1c);
      local_b4 = param_2;
      local_b0 = param_1;
      if (iVar10 != 0) {
        plVar13 = (longlong *)((ulonglong)*(ushort *)((longlong)plVar15 + 0x1c) * 8 + *plVar15);
        plVar6 = *(longlong **)(lVar5 + lVar17 + 0x18);
        plVar16 = plVar13 + iVar10;
        local_b0 = param_1 + 9;
        local_a8 = plVar16;
        local_a0 = plVar15;
        do {
          if ((*(byte *)(*plVar13 + 0xb8) & 2) != 0) {
            lVar5 = *plVar15;
            plVar22 = *(longlong **)((longlong)plVar13 + (plVar6[1] - lVar5));
            local_80 = local_80 & 0xffffffff00000000;
            (**(code **)(*plVar22 + 0x10))(plVar22,&local_88);
            if ((int)local_80 != 0) {
              lVar17 = *local_88;
              if (lVar17 == 0) {
                puVar24 = (ushort *)0x0;
                plVar22 = (longlong *)0x0;
              }
              else {
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14c998000) &&
                   (FUN_144b3d300(&DAT_14c998000), DAT_14c998000 == -1)) {
                  FUN_145984cc0(&DAT_14c997f90);
                  atexit((_func_5014 *)&LAB_142a64008);
                  _Init_thread_footer(&DAT_14c998000);
                }
                uVar18 = *(uint *)(lVar17 + 0xc);
                if ((int)uVar18 < DAT_14c9647dc) {
                  lVar17 = (ulonglong)((uVar18 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8);
                }
                else {
                  lVar17 = 0;
                }
                iVar10 = *(int *)(lVar17 + 0x10);
                if (*(int *)(lVar17 + 0x10) == 0) {
                  LOCK();
                  iVar10 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar23 = DAT_14c964868 + 1;
                  bVar25 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar10;
                  if (bVar25) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,iVar23);
                  }
                  LOCK();
                  iVar10 = *(int *)(lVar17 + 0x10);
                  bVar25 = iVar10 == 0;
                  if (bVar25) {
                    *(int *)(lVar17 + 0x10) = iVar23;
                    iVar10 = 0;
                  }
                  UNLOCK();
                  if (bVar25) {
                    iVar10 = iVar23;
                  }
                }
                FUN_1448ef508(&DAT_14c997f90,&local_68,CONCAT44(iVar10,uVar18));
                plVar22 = local_60;
                puVar24 = local_68;
              }
              lVar17 = *plVar13;
              local_90 = *(ushort *)(lVar17 + 0x86) + 0x1f;
              local_98 = (uint *)((ulonglong)
                                  ((local_90 >> 3 & 0xfffffffc) + *(int *)(lVar17 + 0x88)) +
                                 *(longlong *)((longlong)plVar13 + (*plVar6 - lVar5)));
              local_90 = local_90 >> 5;
              local_8c = (uint)*(ushort *)(lVar17 + 0x86);
              if (local_8c == 0) {
                local_98 = &local_8c;
              }
              if ((ulonglong)*(ushort *)(lVar17 + 0x7c) != 0) {
                pcVar21 = *(char **)(lVar17 + 0x48);
                pcVar14 = pcVar21 + *(ushort *)(lVar17 + 0x7c);
                do {
                  lVar5 = *plVar13;
                  lVar17 = (longlong)pcVar21 - *(longlong *)(lVar5 + 0x48);
                  uVar3 = *(ushort *)
                           (*(longlong *)(*(longlong *)(lVar5 + 0x38) + lVar17 * 8) + 0x40);
                  puVar11 = *(ushort **)(puVar24 + 8);
                  if (*(ushort **)(puVar24 + 8) == (ushort *)0x0) {
                    puVar11 = puVar24;
                  }
                  if ((*(uint *)(puVar11 + (ulonglong)(uVar3 >> 5) * 2) >> (uVar3 & 0x1f) & 1) == 0)
                  {
                    uVar4 = *(ushort *)(*(longlong *)(lVar5 + 8) + lVar17 * 4);
                    uVar12 = ((ulonglong)*(ushort *)(*(longlong *)(lVar5 + 8) + 2 + lVar17 * 4) +
                             (ulonglong)uVar4) - 1;
                    uVar9 = (ulonglong)local_8c - 1;
                    if (uVar12 < (ulonglong)local_8c - 1) {
                      uVar9 = uVar12;
                    }
                    uVar12 = uVar9 >> 5 & 0x7ffffff;
                    uVar18 = (uint)uVar12;
                    if (uVar4 >> 5 <= uVar18) {
                      uVar19 = -1 << ((byte)uVar4 & 0x1f);
                      uVar7 = (ulonglong)(uint)(uVar4 >> 5);
                      do {
                        uVar20 = 0xffffffff;
                        if (uVar12 == uVar7) {
                          uVar20 = 0xffffffff >> (~(byte)uVar9 & 0x1f);
                        }
                        local_98[uVar7] = local_98[uVar7] & ~(uVar20 & uVar19);
                        uVar7 = uVar7 + 1;
                        uVar19 = 0xffffffff;
                      } while (uVar18 + ((uint)(uVar4 >> 5) - (uint)(uVar4 >> 5)) + 1 != uVar7);
                    }
                  }
                  if ((*pcVar21 == '\x0e') && (iVar10 = FUN_146efd72c(puVar24,uVar3), iVar10 != 0xe)
                     ) {
                    local_70 = local_b4;
                    local_6a = uVar3;
                    uVar8 = FUN_146f1e938(local_b0,local_b4,&local_70);
                    local_72 = (undefined2)iVar10;
                    local_68 = &local_6a;
                    local_60 = (longlong *)&local_72;
                    FUN_146f1eee8(uVar8,local_54,&local_68);
                  }
                  pcVar21 = pcVar21 + 1;
                } while (pcVar21 != pcVar14);
              }
              plVar15 = local_a0;
              plVar16 = local_a8;
              if (plVar22 != (longlong *)0x0) {
                LOCK();
                plVar1 = plVar22 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*plVar22)(plVar22);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar22 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar22 + 0x10))(plVar22);
                  }
                }
              }
            }
          }
          plVar13 = plVar13 + 1;
        } while (plVar13 != plVar16);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a73e6e FUN_142a73e6e body=1249 status=ok
// SIG undefined FUN_142a73e6e(void)

undefined8 FUN_142a73e6e(longlong *param_1,int param_2,longlong param_3,ushort param_4,char param_5)

{
  uint *puVar1;
  ushort uVar2;
  ushort uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  ushort *puVar17;
  longlong lVar18;
  longlong lVar19;
  longlong *plVar20;
  uint uVar21;
  uint uVar22;
  undefined1 auStack_b8 [36];
  int local_94;
  longlong *local_90;
  ulonglong local_88;
  uint *local_80;
  uint local_78;
  uint local_74;
  uint *local_70;
  uint local_68;
  uint local_64;
  longlong *local_60;
  undefined1 local_58 [8];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(longlong *)
       (*(longlong *)(*(longlong *)(*param_1 + 0x290) + (longlong)(param_2 / 100) * 8) +
       (longlong)(param_2 % 100) * 8) != 0) {
    lVar7 = *(longlong *)(*(longlong *)(*param_1 + 0x270) + (longlong)(param_2 / 100) * 8);
    lVar16 = (longlong)(param_2 % 100) * 0x38;
    plVar4 = *(longlong **)(lVar7 + 0x10 + lVar16);
    if ((*(byte *)((longlong)plVar4 + 0x3c) & 2) != 0) {
      lVar7 = lVar7 + lVar16;
      if (*(short *)((longlong)plVar4 + 0x1e) == 1) {
        uVar8 = (ulonglong)*(ushort *)((longlong)plVar4 + 0x1c);
        lVar16 = *(longlong *)(*plVar4 + uVar8 * 8);
        if ((param_4 < *(ushort *)(lVar16 + 0x84)) &&
           (uVar2 = *(ushort *)(*(longlong *)(lVar16 + 0x50) + (ulonglong)param_4 * 2),
           uVar2 != 0xffff)) {
          puVar17 = (ushort *)((ulonglong)uVar2 * 4 + *(longlong *)(lVar16 + 8));
          lVar7 = **(longlong **)(lVar7 + 0x18);
          lVar19 = *(longlong *)(lVar7 + uVar8 * 8);
          uVar2 = *(ushort *)(lVar16 + 0x86);
          uVar11 = *(uint *)(lVar16 + 0x88);
          uVar21 = uVar2 + 0x1f >> 5;
          local_60 = (longlong *)((ulonglong)(uVar11 + uVar21 * 4) + lVar19);
          local_58._4_2_ = uVar2;
          local_58._0_4_ = uVar21;
          local_58._6_2_ = 0;
          if (uVar2 == 0) {
            local_60 = (longlong *)(local_58 + 4);
          }
          uVar3 = *puVar17;
          uVar14 = ((ulonglong)puVar17[1] + (ulonglong)uVar3) - 1;
          uVar10 = (ulonglong)uVar2 - 1;
          if (uVar14 < (ulonglong)uVar2 - 1) {
            uVar10 = uVar14;
          }
          uVar15 = (uint)(uVar3 >> 5);
          uVar14 = uVar10 >> 5 & 0x7ffffff;
          uVar22 = 0xffffffff >> (~(byte)uVar10 & 0x1f);
          uVar13 = (uint)uVar14;
          if (param_5 == '\0') {
            local_94 = param_2;
            local_90 = param_1;
            if (uVar15 <= uVar13) {
              uVar11 = -1 << ((byte)uVar3 & 0x1f);
              uVar8 = (ulonglong)(uVar3 >> 5);
              do {
                uVar21 = 0xffffffff;
                if (uVar14 == uVar8) {
                  uVar21 = uVar22;
                }
                puVar1 = (uint *)((longlong)local_60 + uVar8 * 4);
                *puVar1 = *puVar1 & ~(uVar21 & uVar11);
                uVar8 = uVar8 + 1;
                uVar11 = 0xffffffff;
              } while (((uVar3 >> 5) - uVar15) + uVar13 + 1 != uVar8);
            }
          }
          else {
            if (uVar15 <= uVar13) {
              uVar11 = -1 << ((byte)uVar3 & 0x1f);
              uVar10 = (ulonglong)(uVar3 >> 5);
              do {
                uVar21 = 0xffffffff;
                if (uVar14 == uVar10) {
                  uVar21 = uVar22;
                }
                puVar1 = (uint *)((longlong)local_60 + uVar10 * 4);
                *puVar1 = *puVar1 | uVar21 & uVar11;
                uVar10 = uVar10 + 1;
                uVar11 = 0xffffffff;
              } while (uVar13 + ((uVar3 >> 5) - uVar15) + 1 != uVar10);
              lVar19 = *(longlong *)(lVar7 + uVar8 * 8);
              uVar2 = *(ushort *)(lVar16 + 0x86);
              uVar11 = *(uint *)(lVar16 + 0x88);
              uVar21 = uVar2 + 0x1f >> 5;
            }
            local_64 = (uint)uVar2;
            local_70 = (uint *)(lVar19 + (ulonglong)uVar11);
            if (uVar2 == 0) {
              local_70 = &local_64;
            }
            lVar7 = 0;
            if ((*(uint *)(lVar16 + 0xb8) >> 0xb & 1) != 0) {
              lVar7 = (ulonglong)uVar11 - 4;
            }
            local_94 = param_2;
            local_90 = param_1;
            local_68 = uVar21;
            FUN_146f11571(lVar19 + lVar7,&local_70);
            FUN_146f16562(local_90[3],local_94,0);
          }
        }
      }
      else {
        local_60 = &local_50;
        local_50 = 0;
        local_58 = (undefined1  [8])0x100000000;
        uVar2 = *(ushort *)((longlong)plVar4 + 0x1c);
        iVar12 = (int)plVar4[1] - (uint)uVar2;
        local_94 = param_2;
        local_90 = param_1;
        if (iVar12 != 0) {
          plVar5 = *(longlong **)(lVar7 + 0x18);
          plVar20 = (longlong *)(*plVar4 + (ulonglong)uVar2 * 8);
          local_88 = (ulonglong)param_4;
          lVar16 = (longlong)iVar12 << 3;
          lVar7 = *plVar4 + (ulonglong)uVar2 * 8;
          do {
            if ((*(byte *)(*plVar20 + 0xb8) & 2) != 0) {
              lVar19 = *plVar4;
              plVar6 = *(longlong **)((plVar5[1] - lVar19) + lVar7);
              local_58 = (undefined1  [8])((ulonglong)local_58 & 0xffffffff00000000);
              (**(code **)(*plVar6 + 0x10))(plVar6,&local_60);
              if ((((local_58._0_4_ != 0) && (*local_60 == param_3)) &&
                  (lVar18 = *plVar20, param_4 < *(ushort *)(lVar18 + 0x84))) &&
                 (uVar2 = *(ushort *)(*(longlong *)(lVar18 + 0x50) + local_88 * 2), uVar2 != 0xffff)
                 ) {
                puVar17 = (ushort *)((ulonglong)uVar2 * 4 + *(longlong *)(lVar18 + 8));
                lVar19 = *plVar5 - lVar19;
                lVar16 = *(longlong *)(lVar19 + lVar7);
                uVar2 = *(ushort *)(lVar18 + 0x86);
                uVar11 = *(uint *)(lVar18 + 0x88);
                local_68 = uVar2 + 0x1f >> 5;
                local_70 = (uint *)((ulonglong)(uVar11 + local_68 * 4) + lVar16);
                local_64 = (uint)uVar2;
                if (uVar2 == 0) {
                  local_70 = &local_64;
                }
                uVar3 = *puVar17;
                uVar10 = ((ulonglong)puVar17[1] + (ulonglong)uVar3) - 1;
                uVar8 = (ulonglong)uVar2 - 1;
                if (uVar10 < (ulonglong)uVar2 - 1) {
                  uVar8 = uVar10;
                }
                uVar15 = (uint)(uVar3 >> 5);
                uVar10 = uVar8 >> 5 & 0x7ffffff;
                uVar21 = 0xffffffff >> (~(byte)uVar8 & 0x1f);
                uVar13 = (uint)uVar10;
                if (param_5 == '\0') {
                  if (uVar15 <= uVar13) {
                    uVar11 = -1 << ((byte)uVar3 & 0x1f);
                    uVar8 = (ulonglong)(uVar3 >> 5);
                    do {
                      uVar22 = 0xffffffff;
                      if (uVar10 == uVar8) {
                        uVar22 = uVar21;
                      }
                      local_70[uVar8] = local_70[uVar8] & ~(uVar22 & uVar11);
                      uVar8 = uVar8 + 1;
                      uVar11 = 0xffffffff;
                    } while (((uVar3 >> 5) - uVar15) + uVar13 + 1 != uVar8);
                  }
                }
                else {
                  local_78 = local_68;
                  if (uVar15 <= uVar13) {
                    uVar11 = -1 << ((byte)uVar3 & 0x1f);
                    uVar8 = (ulonglong)(uVar3 >> 5);
                    do {
                      uVar22 = 0xffffffff;
                      if (uVar10 == uVar8) {
                        uVar22 = uVar21;
                      }
                      local_70[uVar8] = local_70[uVar8] | uVar22 & uVar11;
                      uVar8 = uVar8 + 1;
                      uVar11 = 0xffffffff;
                    } while (((uVar3 >> 5) - uVar15) + uVar13 + 1 != uVar8);
                    lVar18 = *plVar20;
                    lVar16 = *(longlong *)(lVar19 + lVar7);
                    uVar2 = *(ushort *)(lVar18 + 0x86);
                    uVar11 = *(uint *)(lVar18 + 0x88);
                    local_78 = uVar2 + 0x1f >> 5;
                  }
                  local_74 = (uint)uVar2;
                  local_80 = (uint *)(lVar16 + (ulonglong)uVar11);
                  if (uVar2 == 0) {
                    local_80 = &local_74;
                  }
                  lVar7 = 0;
                  if ((*(uint *)(lVar18 + 0xb8) >> 0xb & 1) != 0) {
                    lVar7 = (ulonglong)uVar11 - 4;
                  }
                  FUN_146f11571(lVar16 + lVar7,&local_80);
                  FUN_146f16562(local_90[3],local_94,0);
                }
                uVar9 = 1;
                goto LAB_142a73ee9;
              }
            }
            plVar20 = plVar20 + 1;
            lVar7 = lVar7 + 8;
            lVar16 = lVar16 + -8;
          } while (lVar16 != 0);
        }
      }
    }
  }
  uVar9 = 0;
LAB_142a73ee9:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 142a74350 FUN_142a74350 body=1008 status=ok
// SIG undefined FUN_142a74350(void)

undefined8
FUN_142a74350(longlong *param_1,int param_2,longlong param_3,ulonglong param_4,int param_5)

{
  ushort uVar1;
  ushort uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  byte bVar6;
  int iVar7;
  undefined4 uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  byte bVar14;
  ushort uVar15;
  ulonglong uVar16;
  longlong lVar18;
  longlong *plVar19;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  int local_9c;
  longlong *local_98;
  ulonglong local_90;
  longlong *local_88;
  ulonglong local_80;
  undefined2 local_72;
  int local_70;
  ushort local_6a;
  ushort *local_68;
  undefined8 local_60;
  ushort local_54 [2];
  longlong local_50;
  ulonglong local_48;
  undefined7 uVar17;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(longlong *)
       (*(longlong *)(*(longlong *)(*param_1 + 0x290) + (longlong)(param_2 / 100) * 8) +
       (longlong)(param_2 % 100) * 8) != 0) {
    lVar18 = *(longlong *)(*(longlong *)(*param_1 + 0x270) + (longlong)(param_2 / 100) * 8);
    lVar11 = (longlong)(param_2 % 100) * 0x38;
    plVar3 = *(longlong **)(lVar18 + 0x10 + lVar11);
    if ((*(byte *)((longlong)plVar3 + 0x3c) & 2) != 0) {
      uVar16 = param_4 & 0xffffffff;
      plVar9 = (longlong *)(lVar18 + lVar11);
      uVar17 = (undefined7)(uVar16 >> 8);
      uVar15 = (ushort)uVar16;
      if (*(short *)((longlong)plVar3 + 0x1e) != 1) {
        local_88 = &local_50;
        local_50 = 0;
        local_80 = 0x100000000;
        uVar1 = *(ushort *)((longlong)plVar3 + 0x1c);
        iVar7 = (int)plVar3[1] - (uint)uVar1;
        if (iVar7 != 0) {
          plVar4 = (longlong *)plVar9[3];
          plVar19 = (longlong *)(*plVar3 + (ulonglong)uVar1 * 8);
          local_a8 = param_4 & 0xffff;
          lVar11 = (longlong)iVar7 << 3;
          lVar18 = *plVar3 + (ulonglong)uVar1 * 8;
          local_9c = param_2;
          local_98 = param_1;
          do {
            plVar9 = (longlong *)*plVar19;
            if ((*(byte *)((longlong *)*plVar19 + 0x17) & 2) != 0) {
              lVar13 = *plVar3;
              plVar9 = *(longlong **)((plVar4[1] - lVar13) + lVar18);
              local_80 = local_80 & 0xffffffff00000000;
              plVar9 = (longlong *)(**(code **)(*plVar9 + 0x10))(plVar9,&local_88);
              plVar5 = local_98;
              iVar7 = local_9c;
              if (((((int)local_80 != 0) && (plVar9 = local_88, *local_88 == param_3)) &&
                  (plVar9 = (longlong *)*plVar19, uVar15 < *(ushort *)((longlong)plVar9 + 0x84))) &&
                 (uVar12 = (ulonglong)*(ushort *)(plVar9[10] + local_a8 * 2), uVar12 != 0xffff)) {
                if (*(char *)(plVar9[9] + uVar12) == '\x0e') {
                  local_90 = uVar12;
                  uVar8 = FUN_146f1660c(local_98,local_9c,uVar16);
                  local_a8 = CONCAT44(local_a8._4_4_,uVar8);
                  local_70 = iVar7;
                  local_6a = uVar15;
                  uVar10 = FUN_146f1e938(plVar5 + 9,iVar7);
                  local_60 = (int *)&local_72;
                  local_72 = (short)param_5;
                  local_68 = &local_6a;
                  FUN_146f1eee8(uVar10,local_54);
                  bVar14 = 1;
                  if (((param_5 != 0xf) && ((int)local_a8 != 0)) && ((int)local_a8 != 0xe)) {
                    lVar11 = *plVar19;
                    lVar18 = *(longlong *)((*plVar4 - lVar13) + lVar18);
                    uVar15 = *(ushort *)(lVar11 + 0x86);
                    local_68 = (ushort *)(lVar18 + (ulonglong)*(uint *)(lVar11 + 0x88));
                    local_60 = (int *)(ulonglong)CONCAT24(uVar15,uVar15 + 0x1f >> 5);
                    if (uVar15 == 0) {
                      local_68 = (ushort *)((longlong)&local_60 + 4);
                    }
                    lVar13 = 0;
                    if ((*(uint *)(lVar11 + 0xb8) >> 0xb & 1) != 0) {
                      lVar13 = (ulonglong)*(uint *)(lVar11 + 0x88) - 4;
                    }
                    FUN_146f11571(lVar18 + lVar13,&local_68,
                                  (ulonglong)(uint)((int)local_90 << 2) + *(longlong *)(lVar11 + 8))
                    ;
                    FUN_146f16562(local_98[3],local_9c,0);
                  }
                  bVar6 = 1;
                }
                else {
                  bVar14 = 1;
                  bVar6 = 0;
                }
                goto LAB_142a7461b;
              }
            }
            plVar19 = plVar19 + 1;
            lVar18 = lVar18 + 8;
            lVar11 = lVar11 + -8;
          } while (lVar11 != 0);
        }
        bVar6 = (byte)plVar9;
        bVar14 = 0;
        uVar17 = 0;
LAB_142a7461b:
        uVar10 = CONCAT71(uVar17,bVar14 & bVar6);
        goto LAB_142a743d4;
      }
      uVar1 = *(ushort *)((longlong)plVar3 + 0x1c);
      lVar18 = *(longlong *)(*plVar3 + (ulonglong)uVar1 * 8);
      if (uVar15 < *(ushort *)(lVar18 + 0x84)) {
        uVar2 = *(ushort *)(*(longlong *)(lVar18 + 0x50) + (param_4 & 0xffff) * 2);
        if (((ulonglong)uVar2 != 0xffff) &&
           (*(char *)(*(longlong *)(lVar18 + 0x48) + (ulonglong)uVar2) == '\x0e')) {
          local_a8 = *(ulonglong *)plVar9[3];
          iVar7 = FUN_146f1660c(param_1,param_2,uVar16);
          local_50 = CONCAT44(local_50._4_4_,param_2);
          local_98 = param_1;
          local_54[0] = uVar15;
          uVar10 = FUN_146f1e938(param_1 + 9,param_2);
          local_60 = &local_70;
          local_70 = CONCAT22(local_70._2_2_,(short)param_5);
          local_68 = local_54;
          FUN_146f1eee8(uVar10,&local_88);
          uVar10 = CONCAT71(uVar17,1);
          if ((param_5 != 0xf) && ((iVar7 != 0 && (iVar7 != 0xe)))) {
            lVar11 = *(longlong *)(local_a8 + (ulonglong)uVar1 * 8);
            uVar15 = *(ushort *)(lVar18 + 0x86);
            local_68 = (ushort *)(lVar11 + (ulonglong)*(uint *)(lVar18 + 0x88));
            local_60 = (int *)(ulonglong)CONCAT24(uVar15,uVar15 + 0x1f >> 5);
            if (uVar15 == 0) {
              local_68 = (ushort *)((longlong)&local_60 + 4);
            }
            lVar13 = 0;
            if ((*(uint *)(lVar18 + 0xb8) >> 0xb & 1) != 0) {
              lVar13 = (ulonglong)*(uint *)(lVar18 + 0x88) - 4;
            }
            FUN_146f11571(lVar11 + lVar13,&local_68,(ulonglong)uVar2 * 4 + *(longlong *)(lVar18 + 8)
                         );
            FUN_146f16562(local_98[3],param_2,0);
          }
          goto LAB_142a743d4;
        }
      }
    }
  }
  uVar10 = 0;
LAB_142a743d4:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a74742 FUN_142a74742 body=773 status=ok
// SIG undefined FUN_142a74742(void)

void FUN_142a74742(longlong *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uint *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  undefined1 auStack_c8 [47];
  bool local_99;
  longlong local_98;
  int *local_90;
  int *local_88;
  longlong *local_80;
  longlong local_78 [2];
  int *local_68;
  uint local_60;
  int local_5c;
  int *local_58;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar4 = *param_1;
  local_4c = *(int *)(lVar4 + 0xe8);
  local_58 = *(int **)(lVar4 + 0xd8);
  local_50 = local_4c + 0x1fU >> 5;
  if (local_4c == 0) {
    local_58 = &local_4c;
  }
  local_5c = *(int *)(lVar4 + 0x100);
  local_68 = *(int **)(lVar4 + 0xf0);
  local_60 = local_5c + 0x1fU >> 5;
  if (local_5c == 0) {
    local_68 = &local_5c;
  }
  uVar11 = (int)param_1[0x16] + 0x1f + (uint)((int)param_1[0x16] == 0);
  uVar10 = uVar11 >> 5;
  local_78[0] = 0;
  local_78[1] = 0;
  FUN_14017c08a(local_78,uVar10,1);
  lVar4 = local_78[0];
  if (0x1f < uVar11) {
    lVar6 = 0;
    uVar11 = 0;
    do {
      iVar2 = local_58[lVar6];
      iVar1 = local_68[lVar6];
      *(int *)(local_78[0] + (ulonglong)uVar11 * 4) = (int)lVar6;
      uVar11 = (iVar2 != iVar1) + uVar11;
      lVar6 = lVar6 + 1;
    } while (uVar10 != (uint)lVar6);
    if (uVar11 != 0) {
      local_98 = param_1[2];
      uVar7 = (ulonglong)*(uint *)(local_98 + 0x28);
      uVar10 = *(uint *)(local_98 + 0x28) * 0x20 + 0x3f;
      do {
        bVar21 = uVar7 == 0;
        uVar7 = uVar7 - 1;
        if (bVar21) {
          local_99 = true;
          goto LAB_142a74877;
        }
        uVar9 = (ulonglong)*(uint *)(*(longlong *)(local_98 + 0x20) + uVar7 * 4);
        uVar10 = uVar10 - 0x20;
      } while (uVar9 == 0);
      uVar7 = uVar9 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      local_99 = ((uint)lVar6 ^ 0x3f) == uVar10;
LAB_142a74877:
      local_80 = param_1 + 9;
      lVar6 = 0;
      local_88 = local_58;
      local_90 = local_68;
      do {
        uVar10 = *(uint *)(lVar4 + lVar6 * 4);
        uVar20 = ~local_88[uVar10] & local_90[uVar10];
        if (uVar20 != 0) {
          do {
            uVar18 = 0;
            if (uVar20 != 0) {
              for (; (uVar20 >> uVar18 & 1) == 0; uVar18 = uVar18 + 1) {
              }
            }
            uVar18 = uVar18 | uVar10 << 5;
            *(undefined2 *)(param_1[5] + (ulonglong)uVar18 * 2) = 0;
            FUN_146f1e7b6(local_80,(ulonglong)uVar18);
            if (local_99 == false) {
              uVar3 = *(uint *)(local_98 + 0x30);
              uVar7 = (ulonglong)uVar3;
              uVar12 = uVar3 + 0x1f >> 5;
              puVar5 = *(uint **)(local_98 + 0x20);
              if (uVar7 == 0) {
LAB_142a748f3:
                lVar14 = 0;
                puVar17 = puVar5;
                do {
                  puVar17 = puVar17 + 1;
                  if ((ulonglong)((uVar12 - 1) + (uint)(uVar12 == 0)) << 5 == lVar14) {
                    uVar13 = 0;
                    uVar9 = uVar7;
                    goto LAB_142a74937;
                  }
                  uVar13 = *puVar17;
                  lVar14 = lVar14 + 0x20;
                } while (uVar13 == 0);
              }
              else {
                uVar13 = *puVar5;
                lVar14 = 0;
                if (uVar13 == 0) goto LAB_142a748f3;
              }
              uVar8 = 0;
              if (uVar13 != 0) {
                for (; (uVar13 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
                }
              }
              uVar8 = uVar8 | (uint)lVar14;
              uVar9 = (ulonglong)uVar8;
              if (uVar3 <= uVar8) {
                uVar9 = uVar7;
              }
              uVar13 = uVar13 - 1 & uVar13;
LAB_142a74937:
              uVar16 = (ulonglong)(uVar3 >> 5);
              uVar8 = uVar3;
              do {
                uVar16 = uVar16 + 1;
                uVar15 = uVar3;
                if (uVar12 <= uVar16) goto LAB_142a74973;
                uVar19 = puVar5[uVar16];
                uVar8 = uVar8 + 0x20;
              } while (uVar19 == 0);
              uVar15 = 0;
              if (uVar19 != 0) {
                for (; (uVar19 >> uVar15 & 1) == 0; uVar15 = uVar15 + 1) {
                }
              }
              uVar15 = uVar15 | uVar8 & 0xffffffe0;
              if (uVar3 <= uVar15) {
                uVar15 = uVar3;
              }
LAB_142a74973:
              if ((uint)uVar9 != uVar15) {
                do {
                  uVar8 = (uint)uVar9;
                  *(undefined2 *)
                   (*(longlong *)(param_1[7] + (longlong)(int)uVar8 * 0x10) +
                   (longlong)(int)uVar18 * 2) = 0;
                  if (uVar13 == 0) {
                    uVar16 = uVar9 >> 5;
                    do {
                      uVar16 = uVar16 + 1;
                      if (uVar12 <= uVar16) {
                        uVar13 = 0;
                        uVar9 = uVar7;
                        goto LAB_142a749e4;
                      }
                      uVar13 = puVar5[uVar16];
                      uVar8 = (int)uVar9 + 0x20;
                      uVar9 = (ulonglong)uVar8;
                    } while (uVar13 == 0);
                  }
                  uVar19 = 0;
                  if (uVar13 != 0) {
                    for (; (uVar13 >> uVar19 & 1) == 0; uVar19 = uVar19 + 1) {
                    }
                  }
                  uVar19 = uVar19 | uVar8 & 0xffffffe0;
                  uVar9 = (ulonglong)uVar19;
                  if (uVar3 <= uVar19) {
                    uVar9 = uVar7;
                  }
                  uVar13 = uVar13 - 1 & uVar13;
LAB_142a749e4:
                } while ((uint)uVar9 != uVar15);
              }
            }
            uVar20 = uVar20 - 1 & uVar20;
          } while (uVar20 != 0);
        }
        lVar6 = lVar6 + 1;
      } while (uVar11 != (uint)lVar6);
    }
  }
  if (local_78[0] != 0) {
    FUN_1400020a8(local_78[0]);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a74a48 FUN_142a74a48 body=539 status=ok
// SIG undefined FUN_142a74a48(void)

void FUN_142a74a48(longlong param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  ulonglong uVar16;
  void *_Dst;
  undefined1 auStack_2a8 [32];
  int *local_288;
  undefined4 local_280;
  int local_26c;
  longlong local_268;
  longlong local_260;
  int *local_258;
  uint local_250;
  int local_248 [128];
  ulonglong local_48;
  ulonglong uVar7;
  ulonglong uVar12;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  local_268 = *(longlong *)(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0xa8);
  iVar13 = 0;
  local_260 = param_1;
  do {
    _Dst = *(void **)(param_1 + 0x98);
    local_288 = local_248;
    local_280 = 0x80;
    local_26c = iVar1;
    uVar4 = FUN_146efd1b6(_Dst,iVar1,iVar13,0xffffffff);
    if (uVar4 == 0) goto LAB_142a74c21;
    uVar2 = *(uint *)(local_268 + 0x30);
    uVar16 = (ulonglong)uVar2;
    uVar5 = uVar2 + 0x1f >> 5;
    puVar3 = *(uint **)(local_268 + 0x20);
    if (uVar16 == 0) {
LAB_142a74adf:
      lVar8 = 0;
      puVar14 = puVar3;
      do {
        puVar14 = puVar14 + 1;
        if ((ulonglong)((uVar5 - 1) + (uint)(uVar5 == 0)) << 5 == lVar8) {
          uVar15 = 0;
          uVar12 = uVar16;
          goto LAB_142a74b22;
        }
        uVar15 = *puVar14;
        lVar8 = lVar8 + 0x20;
      } while (uVar15 == 0);
    }
    else {
      uVar15 = *puVar3;
      lVar8 = 0;
      if (uVar15 == 0) goto LAB_142a74adf;
    }
    uVar10 = 0;
    if (uVar15 != 0) {
      for (; (uVar15 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
      }
    }
    uVar10 = uVar10 | (uint)lVar8;
    uVar12 = (ulonglong)uVar10;
    if (uVar2 <= uVar10) {
      uVar12 = uVar16;
    }
    uVar15 = uVar15 - 1 & uVar15;
LAB_142a74b22:
    uVar9 = (ulonglong)(uVar2 >> 5);
    uVar7 = uVar16;
    do {
      uVar9 = uVar9 + 1;
      uVar10 = uVar2;
      if (uVar5 <= uVar9) goto LAB_142a74b59;
      uVar11 = puVar3[uVar9];
      uVar6 = (int)uVar7 + 0x20;
      uVar7 = (ulonglong)uVar6;
    } while (uVar11 == 0);
    uVar10 = 0;
    if (uVar11 != 0) {
      for (; (uVar11 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
      }
    }
    uVar10 = uVar10 | uVar6 & 0xffffffe0;
    if (uVar2 <= uVar10) {
      uVar10 = uVar2;
    }
LAB_142a74b59:
    iVar1 = local_26c;
    if ((uint)uVar12 != uVar10) {
      do {
        uVar11 = (uint)uVar12;
        uVar9 = uVar12 >> 5;
        if ((*(uint *)((*(longlong **)(param_1 + 0x10))[4] + uVar9 * 4) >> (uVar11 & 0x1f) & 1) == 0
           ) {
          lVar8 = 0;
        }
        else {
          lVar8 = (longlong)(int)uVar11 * 0x28 + **(longlong **)(param_1 + 0x10);
        }
        local_258 = local_248;
        local_250 = uVar4;
        FUN_146f47cea(*(undefined8 *)(lVar8 + 8),&local_258);
        while (uVar15 == 0) {
          uVar9 = uVar9 + 1;
          if (uVar5 <= uVar9) {
            uVar15 = 0;
            uVar12 = uVar16;
            goto LAB_142a74be2;
          }
          uVar11 = (int)uVar12 + 0x20;
          uVar12 = (ulonglong)uVar11;
          uVar15 = puVar3[uVar9];
        }
        uVar6 = 0;
        if (uVar15 != 0) {
          for (; (uVar15 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
          }
        }
        uVar6 = uVar6 | uVar11 & 0xffffffe0;
        if (uVar2 <= uVar6) {
          uVar6 = uVar2;
        }
        uVar15 = uVar15 - 1 & uVar15;
        uVar12 = (ulonglong)uVar6;
LAB_142a74be2:
        param_1 = local_260;
      } while ((uint)uVar12 != uVar10);
      iVar1 = *(int *)(local_260 + 0xa8);
    }
  } while ((0x7f < uVar4) && (iVar13 = local_248[uVar4 - 1] + 1, iVar13 != iVar1));
  _Dst = *(void **)(param_1 + 0x98);
LAB_142a74c21:
  memset(_Dst,0,(longlong)*(int *)(param_1 + 0xa0) << 2);
  if ((local_48 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a74c64 FUN_142a74c64 body=644 status=ok
// SIG undefined FUN_142a74c64(void)

void FUN_142a74c64(longlong *param_1,undefined4 param_2,ushort *param_3,undefined4 param_4,
                  longlong param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined4 local_a4;
  longlong *local_a0;
  ushort *local_98;
  uint local_8c;
  longlong local_88;
  longlong local_80;
  uint local_74;
  uint local_70;
  undefined4 uStack_6c;
  longlong local_68;
  longlong lStack_60;
  uint local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_68 = 0;
  lStack_60 = 0;
  local_58 = 0;
  local_a4 = param_2;
  local_a0 = param_1;
  local_98 = param_3;
  cVar5 = FUN_146f1b8ca(*param_1 + 0x300,param_4);
  lVar6 = local_68;
  if (cVar5 != '\0') {
    uVar10 = (ulonglong)local_58;
    local_80 = lStack_60;
    if (lStack_60 == 0) {
      if (uVar10 != 0) {
        uVar9 = 0;
        do {
          uVar3 = *(undefined4 *)(lVar6 + uVar9 * 4);
          local_b8 = param_5;
          FUN_142a74c64(local_a0,local_a4,local_98,uVar3);
          iVar2 = *(int *)(param_5 + 0x88);
          *(uint *)(param_5 + 0x88) = iVar2 + 1U;
          if (*(uint *)(param_5 + 0x8c) < iVar2 + 1U) {
            FUN_140724a48(param_5,iVar2);
          }
          lVar8 = *(longlong *)(param_5 + 0x80);
          if (*(longlong *)(param_5 + 0x80) == 0) {
            lVar8 = param_5;
          }
          *(undefined4 *)(lVar8 + (longlong)iVar2 * 4) = uVar3;
          uVar9 = uVar9 + 1;
        } while (uVar10 != uVar9);
      }
    }
    else if (uVar10 != 0) {
      local_88 = local_68;
      uVar9 = 0;
      do {
        uVar1 = *(uint *)(local_88 + uVar9 * 4);
        if (*(byte *)(local_80 + uVar9) == 0x10) {
          if ((-1 < (int)uVar1) && (lVar6 = local_a0[4], (int)uVar1 < *(int *)(lVar6 + 0x48))) {
            lVar8 = *(longlong *)(lVar6 + 0x40) + (ulonglong)uVar1 * 0x18;
            iVar2 = *(int *)(lVar8 + 0x10);
            lVar7 = *(longlong *)(lVar8 + 8);
            if (*(longlong *)(lVar8 + 8) == 0) {
              lVar7 = lVar8;
            }
            if ((longlong)iVar2 != 0) {
              local_8c = (uint)*local_98;
              lVar8 = 0;
              do {
                FUN_146f16724(lVar6,&local_70,*(undefined4 *)(lVar7 + lVar8));
                if ((local_70 & 0xffffff) == 3) {
                  uVar4 = local_8c >> 10 & 1;
                }
                else if ((local_70 & 0xffffff) == 2) {
                  uVar4 = local_8c & 4;
                }
                else {
                  local_74 = 0;
                  FUN_146f21f44(local_a0[1],CONCAT44(uStack_6c,local_70),local_a4,&local_74);
                  uVar4 = local_74;
                }
                if (uVar4 != 0) goto LAB_142a74df2;
                lVar8 = lVar8 + 4;
              } while ((longlong)iVar2 * 4 != lVar8);
            }
          }
        }
        else if ((*local_98 >> (*(byte *)(local_80 + uVar9) & 0x1f) & 1) != 0) {
LAB_142a74df2:
          local_b8 = param_5;
          FUN_142a74c64(local_a0,local_a4,local_98,(ulonglong)uVar1);
          iVar2 = *(int *)(param_5 + 0x88);
          *(uint *)(param_5 + 0x88) = iVar2 + 1U;
          if (*(uint *)(param_5 + 0x8c) < iVar2 + 1U) {
            FUN_140724a48(param_5,iVar2);
          }
          lVar6 = *(longlong *)(param_5 + 0x80);
          if (*(longlong *)(param_5 + 0x80) == 0) {
            lVar6 = param_5;
          }
          *(uint *)(lVar6 + (longlong)iVar2 * 4) = uVar1;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar10);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a74eea FUN_142a74eea body=1392 status=ok
// SIG undefined FUN_142a74eea(void)

byte FUN_142a74eea(longlong param_1,int param_2,undefined1 param_3,undefined8 param_4,int param_5,
                  uint *param_6,longlong param_7,longlong *param_8)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong *plVar14;
  byte bVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  ushort uVar20;
  ulonglong uVar21;
  int iVar22;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  uint local_94;
  longlong local_90;
  uint local_84;
  longlong local_80;
  uint local_78;
  uint local_74;
  longlong *local_70;
  longlong *local_68;
  ushort local_5a;
  uint *local_58;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_4c = *(uint *)((longlong)param_8 + 0x24);
  local_58 = param_6;
  local_50 = local_4c + 0x1f >> 5;
  if (local_4c == 0) {
    local_58 = &local_4c;
  }
  if ((*(byte *)((longlong)param_8 + 0x3c) & 2) == 0) {
    bVar15 = 0;
  }
  else {
    local_a8 = param_3;
    FUN_146f167f8(param_1,&local_5a,param_2);
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)param_2 * 0x10);
    uVar1 = *(ushort *)(lVar8 + (longlong)param_5 * 2);
    local_84 = (uint)local_5a;
    if (uVar1 == 0) {
      uVar1 = local_5a;
    }
    uVar7 = (uint)uVar1;
    *(ushort *)(lVar8 + (longlong)param_5 * 2) = local_5a;
    local_78 = (uint)*(ushort *)((longlong)param_8 + 0x1e);
    if (local_78 == 1) {
      lVar8 = *(longlong *)(*param_8 + (ulonglong)*(ushort *)((longlong)param_8 + 0x1c) * 8);
      uVar1 = *(ushort *)(lVar8 + 0x7c);
      local_80 = param_1;
      if ((ulonglong)uVar1 != 0) {
        uVar17 = *(uint *)(param_8 + 4);
        lVar2 = *(longlong *)(lVar8 + 8);
        lVar3 = *(longlong *)(lVar8 + 0x48);
        uVar13 = 0;
        bVar15 = 0;
        local_90 = CONCAT44(local_90._4_4_,uVar7);
        local_94 = uVar17;
        do {
          uVar9 = (uint)*(char *)(lVar3 + uVar13);
          if (uVar9 == 0xe) {
            lVar4 = *(longlong *)(*(longlong *)(lVar8 + 0x38) + uVar13 * 8);
            uVar9 = 0xe;
            if (lVar4 != 0) {
              uVar9 = FUN_146f1660c(local_80,param_5,*(undefined2 *)(lVar4 + 0x40));
              uVar7 = (uint)local_90;
            }
          }
          if ((local_84 >> (uVar9 & 0x1f) & 1) == 0) {
            uVar9 = *(ushort *)(lVar2 + uVar13 * 4) + uVar17;
            if (*(short *)(lVar2 + 2 + uVar13 * 4) == 1) {
              uVar19 = uVar9 >> 5;
              uVar10 = uVar9 & 0x1f;
              uVar20 = 1;
              if ((local_58[uVar19] >> uVar10 & 1) != 0) {
LAB_142a75116:
                uVar21 = ((ulonglong)uVar20 + (ulonglong)uVar9) - 1;
                uVar11 = (ulonglong)local_4c - 1;
                if (uVar21 < (ulonglong)local_4c - 1) {
                  uVar11 = uVar21;
                }
                uVar21 = uVar11 >> 5 & 0x7ffffff;
                bVar15 = 1;
                uVar7 = (uint)uVar21;
                if (uVar19 <= uVar7) {
                  uVar10 = -1 << (sbyte)uVar10;
                  uVar18 = (ulonglong)(uVar9 >> 5);
                  do {
                    uVar17 = 0xffffffff;
                    if (uVar21 == uVar18) {
                      uVar17 = 0xffffffff >> (~(byte)uVar11 & 0x1f);
                    }
                    local_58[uVar18] = local_58[uVar18] & ~(uVar17 & uVar10);
                    uVar18 = uVar18 + 1;
                    uVar10 = 0xffffffff;
                    uVar17 = local_94;
                  } while (((uVar9 >> 5) - uVar19) + uVar7 + 1 != uVar18);
                }
                uVar7 = (uint)local_90;
              }
            }
            else {
              cVar5 = FUN_146f0ff32(local_58);
              uVar7 = (uint)local_90;
              if (cVar5 != '\0') {
                uVar20 = *(ushort *)(lVar2 + 2 + uVar13 * 4);
                uVar9 = *(ushort *)(lVar2 + uVar13 * 4) + uVar17;
                uVar19 = uVar9 >> 5;
                uVar10 = uVar9 & 0x1f;
                goto LAB_142a75116;
              }
            }
          }
          else if (((1 << ((byte)uVar9 & 0x1f) & uVar7) == 0) &&
                  (uVar20 = *(ushort *)(lVar2 + 2 + uVar13 * 4), uVar9 = (uint)uVar20, uVar20 != 0))
          {
            uVar10 = *(ushort *)(lVar2 + uVar13 * 4) + uVar17;
            do {
              bVar15 = bVar15 | (local_58[uVar10 >> 5] >> (uVar10 & 0x1f) & 1) == 0;
              local_58[uVar10 >> 5] = local_58[uVar10 >> 5] | 1 << (uVar10 & 0x1f);
              uVar10 = uVar10 + 1;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 != uVar1);
        goto LAB_142a74f57;
      }
    }
    else {
      iVar22 = 0;
      if ((longlong)(int)param_8[1] != 0) {
        plVar14 = (longlong *)*param_8;
        plVar12 = plVar14 + (int)param_8[1];
        bVar15 = 0;
        uVar17 = 0;
        local_94 = uVar7;
        local_80 = param_1;
        local_70 = plVar12;
        do {
          lVar8 = *plVar14;
          if ((*(byte *)(lVar8 + 0xb8) & 2) != 0) {
            uVar1 = *(ushort *)(lVar8 + 0x7c);
            local_90 = lVar8;
            local_74 = uVar17;
            local_68 = plVar14;
            if ((ulonglong)uVar1 != 0) {
              lVar2 = *(longlong *)(lVar8 + 8);
              lVar8 = *(longlong *)(lVar8 + 0x48);
              uVar13 = 0;
              uVar17 = local_84;
              do {
                uVar9 = (uint)*(char *)(lVar8 + uVar13);
                if (uVar9 == 0xe) {
                  lVar3 = *(longlong *)(*(longlong *)(local_90 + 0x38) + uVar13 * 8);
                  uVar9 = 0xe;
                  if (lVar3 != 0) {
                    uVar9 = FUN_146f1660c(local_80,param_5,*(undefined2 *)(lVar3 + 0x40));
                    uVar7 = local_94;
                  }
                }
                if ((uVar17 >> (uVar9 & 0x1f) & 1) == 0) {
                  uVar9 = (uint)*(ushort *)(lVar2 + uVar13 * 4) + iVar22;
                  if (*(short *)(lVar2 + 2 + uVar13 * 4) == 1) {
                    uVar10 = uVar9 >> 5;
                    bVar6 = (byte)(uVar9 & 0x1f);
                    uVar20 = 1;
                    if ((local_58[uVar10] >> (uVar9 & 0x1f) & 1) != 0) {
LAB_142a7532c:
                      uVar21 = ((ulonglong)uVar20 + (ulonglong)uVar9) - 1;
                      uVar11 = (ulonglong)local_4c - 1;
                      if (uVar21 < (ulonglong)local_4c - 1) {
                        uVar11 = uVar21;
                      }
                      uVar21 = uVar11 >> 5 & 0x7ffffff;
                      bVar15 = 1;
                      uVar19 = (uint)uVar21;
                      uVar7 = local_94;
                      if (uVar10 <= uVar19) {
                        uVar16 = -1 << bVar6;
                        uVar18 = (ulonglong)(uVar9 >> 5);
                        do {
                          uVar17 = 0xffffffff;
                          if (uVar21 == uVar18) {
                            uVar17 = 0xffffffff >> (~(byte)uVar11 & 0x1f);
                          }
                          local_58[uVar18] = local_58[uVar18] & ~(uVar17 & uVar16);
                          uVar18 = uVar18 + 1;
                          uVar16 = 0xffffffff;
                          uVar17 = local_84;
                        } while (((uVar9 >> 5) - uVar10) + uVar19 + 1 != uVar18);
                      }
                    }
                  }
                  else {
                    cVar5 = FUN_146f0ff32(local_58,local_4c);
                    uVar7 = local_94;
                    if (cVar5 != '\0') {
                      uVar20 = *(ushort *)(lVar2 + 2 + uVar13 * 4);
                      uVar9 = (uint)*(ushort *)(lVar2 + uVar13 * 4) + iVar22;
                      uVar10 = uVar9 >> 5;
                      bVar6 = (byte)uVar9 & 0x1f;
                      goto LAB_142a7532c;
                    }
                  }
                }
                else if (((1 << ((byte)uVar9 & 0x1f) & uVar7) == 0) &&
                        (uVar20 = *(ushort *)(lVar2 + 2 + uVar13 * 4), uVar9 = (uint)uVar20,
                        uVar20 != 0)) {
                  uVar10 = (uint)*(ushort *)(lVar2 + uVar13 * 4) + iVar22;
                  do {
                    bVar15 = bVar15 | (local_58[uVar10 >> 5] >> (uVar10 & 0x1f) & 1) == 0;
                    local_58[uVar10 >> 5] = local_58[uVar10 >> 5] | 1 << (uVar10 & 0x1f);
                    uVar10 = uVar10 + 1;
                    uVar9 = uVar9 - 1;
                  } while (uVar9 != 0);
                }
                uVar13 = uVar13 + 1;
              } while (uVar13 != uVar1);
            }
            uVar17 = local_74 + 1;
            lVar8 = local_90;
            plVar12 = local_70;
            plVar14 = local_68;
            if (uVar17 == local_78) break;
          }
          iVar22 = iVar22 + (uint)*(ushort *)(lVar8 + 0x86);
          plVar14 = plVar14 + 1;
        } while (plVar14 != plVar12);
        goto LAB_142a74f57;
      }
    }
    bVar15 = 0;
  }
LAB_142a74f57:
  if (param_7 != 0) {
    uVar7 = 0;
    if ((ulonglong)local_50 != 0) {
      uVar13 = 0;
      do {
        uVar17 = param_6[uVar13];
        uVar9 = *(uint *)(param_7 + uVar13 * 4);
        param_6[uVar13] = uVar9 & uVar17;
        uVar7 = uVar7 | ~uVar9 & uVar17;
        uVar13 = uVar13 + 1;
      } while (local_50 != uVar13);
      uVar7 = (uint)(uVar7 != 0);
    }
    bVar15 = bVar15 | (byte)uVar7;
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar15;
}



// FUNCTION 142a7545c FUN_142a7545c body=479 status=ok
// SIG undefined FUN_142a7545c(void)

void FUN_142a7545c(longlong *param_1,int param_2,ushort param_3)

{
  ushort uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_a8 [46];
  ushort local_7a;
  ulonglong local_78;
  uint *local_70;
  uint local_68;
  uint local_64;
  undefined8 *local_60;
  ulonglong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar6 = *(longlong *)(*(longlong *)(*param_1 + 0x270) + (longlong)(param_2 / 100) * 8);
  lVar7 = (longlong)(param_2 % 100) * 0x38;
  lVar9 = *(longlong *)(lVar6 + 8 + lVar7);
  local_7a = param_3;
  if ((lVar9 != 0) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(*param_1 + 0x290) + (longlong)(param_2 / 100) * 8) +
       (longlong)(param_2 % 100) * 8) != 0)) {
    lVar6 = lVar6 + lVar7;
    plVar2 = *(longlong **)(lVar6 + 0x10);
    plVar3 = *(longlong **)(lVar6 + 0x18);
    local_60 = &local_50;
    local_50 = 0;
    local_58 = 0x100000000;
    if ((longlong)(int)plVar2[1] != 0) {
      plVar8 = (longlong *)*plVar2;
      local_78 = (ulonglong)param_3;
      lVar6 = (longlong)(int)plVar2[1] << 3;
      plVar10 = plVar8;
      do {
        lVar7 = *plVar2;
        plVar4 = *(longlong **)((plVar3[1] - lVar7) + (longlong)plVar8);
        local_58 = local_58 & 0xffffffff00000000;
        (**(code **)(*plVar4 + 0x10))(plVar4,&local_60);
        if ((int)local_58 != 0) {
          FUN_14020496a(&local_70,*local_60);
          if ((((int)local_70 == (int)lVar9) &&
              (lVar5 = *plVar10, local_7a < *(ushort *)(lVar5 + 0x84))) &&
             (uVar1 = *(ushort *)(*(longlong *)(lVar5 + 0x50) + local_78 * 2), uVar1 != 0xffff)) {
            lVar6 = *(longlong *)((*plVar3 - lVar7) + (longlong)plVar8);
            local_70 = (uint *)(lVar6 + (ulonglong)*(uint *)(lVar5 + 0x88));
            local_68 = *(ushort *)(lVar5 + 0x86) + 0x1f >> 5;
            local_64 = (uint)*(ushort *)(lVar5 + 0x86);
            if (local_64 == 0) {
              local_70 = &local_64;
            }
            lVar9 = 0;
            if ((*(uint *)(lVar5 + 0xb8) >> 0xb & 1) != 0) {
              lVar9 = (ulonglong)*(uint *)(lVar5 + 0x88) - 4;
            }
            FUN_146f11571(lVar6 + lVar9,&local_70,(ulonglong)uVar1 * 4 + *(longlong *)(lVar5 + 8));
            break;
          }
        }
        plVar10 = plVar10 + 1;
        plVar8 = plVar8 + 1;
        lVar6 = lVar6 + -8;
      } while (lVar6 != 0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a7563c FUN_142a7563c body=69 status=ok
// SIG undefined FUN_142a7563c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a7563c(void)

{
  _DAT_14c999588 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a7567e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c999590,1);
  return;
}



// FUNCTION 142a75681 FUN_142a75681 body=69 status=ok
// SIG undefined FUN_142a75681(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a75681(void)

{
  _DAT_14c999598 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a756c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9995a0,1);
  return;
}



// FUNCTION 142a756c6 FUN_142a756c6 body=94 status=ok
// SIG undefined FUN_142a756c6(void)

void FUN_142a756c6(longlong param_1,undefined8 *param_2)

{
  *(int *)(param_1 + 0xcc) = *(int *)(param_1 + 0xcc) + 1;
  FUN_142a75724();
  FUN_142a758b2(param_1,*param_2);
  FUN_142a75ada(param_1);
  *(undefined4 *)(param_1 + 0xf8) = 0;
  FUN_146f14ba4(param_1 + 0xd0,*(undefined4 *)(param_1 + 0x60));
  FUN_1402d2c96(param_1 + 0xe8,*(undefined4 *)(param_1 + 0x60),1);
  return;
}



// FUNCTION 142a75724 FUN_142a75724 body=396 status=ok
// SIG undefined FUN_142a75724(void)

void FUN_142a75724(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_a8 [32];
  int *local_88;
  int *local_80;
  longlong local_78;
  ulonglong local_70;
  int *local_68;
  uint local_60;
  int local_5c;
  int *local_58;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar9 = *(longlong *)(param_1 + 0xa8);
  local_4c = *(int *)(lVar9 + 0xe8);
  local_58 = *(int **)(lVar9 + 0xd8);
  local_50 = local_4c + 0x1fU >> 5;
  if (local_4c == 0) {
    local_58 = &local_4c;
  }
  local_5c = *(int *)(lVar9 + 0x100);
  local_68 = *(int **)(lVar9 + 0xf0);
  local_60 = local_5c + 0x1fU >> 5;
  if (local_5c == 0) {
    local_68 = &local_5c;
  }
  local_88 = local_68;
  local_80 = local_58;
  if (0x1f < local_4c + 0x1fU) {
    lVar9 = *(longlong *)(param_1 + 0x38);
    uVar6 = 0;
    local_78 = lVar9;
    local_70 = (ulonglong)local_50;
    do {
      uVar5 = *(uint *)(lVar9 + uVar6 * 4);
      if (uVar5 != 0) {
        uVar1 = local_80[uVar6];
        uVar7 = local_88[uVar6];
        uVar4 = (uVar7 ^ uVar1) & uVar5;
        *(uint *)(lVar9 + uVar6 * 4) = uVar5 & uVar1;
        uVar5 = (uint)(uVar6 << 5);
        lVar9 = local_78;
        for (uVar7 = uVar7 & uVar4; local_78 = lVar9, uVar7 != 0; uVar7 = uVar7 - 1 & uVar7) {
          uVar2 = 0;
          if (uVar7 != 0) {
            for (; (uVar7 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
            }
          }
          lVar9 = *(longlong *)(param_1 + 0x68);
          lVar8 = (longlong)(int)(uVar2 | uVar5);
          uVar3 = (ulonglong)*(ushort *)(lVar9 + lVar8 * 2);
          if ((uVar3 != 0) && (*(short *)(*(longlong *)(param_1 + 0x88) + uVar3 * 2) == 0)) {
            FUN_146f171a0(param_1);
            *(undefined2 *)(lVar9 + lVar8 * 2) = 0;
          }
          lVar9 = local_78;
        }
        for (uVar4 = uVar4 & uVar1; uVar4 != 0; uVar4 = uVar4 - 1 & uVar4) {
          uVar1 = 0;
          if (uVar4 != 0) {
            for (; (uVar4 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
            }
          }
          FUN_146f171d8(param_1,uVar1 | uVar5);
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != local_70);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a758b2 FUN_142a758b2 body=552 status=ok
// SIG undefined FUN_142a758b2(void)

void FUN_142a758b2(longlong param_1,uint *param_2)

{
  uint *puVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  uint *puVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  ulonglong uVar15;
  uint *puVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  longlong *plVar20;
  bool bVar21;
  ulonglong uVar14;
  
  if (0 < (longlong)(int)param_2[4]) {
    lVar4 = *(longlong *)(param_1 + 0xa0);
    uVar15 = (ulonglong)*(uint *)(lVar4 + 0x28);
    uVar10 = *(uint *)(lVar4 + 0x28) * 0x20 + 0x3f;
    do {
      bVar21 = uVar15 == 0;
      uVar15 = uVar15 - 1;
      if (bVar21) {
        return;
      }
      uVar6 = (ulonglong)*(uint *)(*(longlong *)(lVar4 + 0x20) + uVar15 * 4);
      uVar10 = uVar10 - 0x20;
    } while (uVar6 == 0);
    uVar15 = uVar6 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    if (((uint)lVar9 ^ 0x3f) != uVar10) {
      puVar12 = param_2 + 6;
      if (*(uint **)(param_2 + 8) != (uint *)0x0) {
        puVar12 = *(uint **)(param_2 + 8);
      }
      puVar16 = *(uint **)(param_2 + 2);
      if (*(uint **)(param_2 + 2) == (uint *)0x0) {
        puVar16 = param_2;
      }
      puVar1 = puVar16 + (longlong)(int)param_2[4] * 2;
      do {
        uVar10 = puVar16[1];
        if ((uVar10 >> 0x19 & 1) != 0) {
          uVar3 = *puVar16;
          if ((((*(uint *)(*(longlong *)(param_1 + 0x38) + (ulonglong)(uVar3 >> 5) * 4) >>
                 (uVar3 & 0x1f) & 1) != 0) &&
              (uVar2 = *(ushort *)(*(longlong *)(param_1 + 0x68) + (longlong)(int)uVar3 * 2),
              uVar2 != 0)) &&
             (plVar20 = (longlong *)
                        ((ulonglong)((uint)uVar2 * *(int *)(param_1 + 0xc4)) +
                        *(longlong *)(param_1 + 0x78)), plVar20 != (longlong *)0x0)) {
            uVar3 = *(uint *)(lVar4 + 0x30);
            uVar15 = (ulonglong)uVar3;
            uVar17 = uVar3 + 0x1f >> 5;
            puVar5 = *(uint **)(lVar4 + 0x20);
            if (uVar15 == 0) {
LAB_142a759bb:
              lVar9 = 0;
              puVar13 = puVar5;
              do {
                puVar13 = puVar13 + 1;
                if ((ulonglong)((uVar17 - 1) + (uint)(uVar17 == 0)) << 5 == lVar9) {
                  uVar19 = 0;
                  uVar6 = uVar15;
                  goto LAB_142a75a00;
                }
                uVar19 = *puVar13;
                lVar9 = lVar9 + 0x20;
              } while (uVar19 == 0);
            }
            else {
              uVar19 = *puVar5;
              lVar9 = 0;
              if (uVar19 == 0) goto LAB_142a759bb;
            }
            uVar7 = 0;
            if (uVar19 != 0) {
              for (; (uVar19 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
              }
            }
            uVar7 = uVar7 | (uint)lVar9;
            uVar6 = (ulonglong)uVar7;
            if (uVar3 <= uVar7) {
              uVar6 = uVar15;
            }
            uVar19 = uVar19 - 1 & uVar19;
LAB_142a75a00:
            lVar9 = *plVar20;
            uVar2 = *(ushort *)(plVar20 + 2);
            uVar18 = (ulonglong)(uVar3 >> 5);
            uVar14 = uVar15;
            do {
              uVar18 = uVar18 + 1;
              uVar7 = uVar3;
              if (uVar17 <= uVar18) goto LAB_142a75a52;
              uVar8 = puVar5[uVar18];
              uVar11 = (int)uVar14 + 0x20;
              uVar14 = (ulonglong)uVar11;
            } while (uVar8 == 0);
            uVar7 = 0;
            if (uVar8 != 0) {
              for (; (uVar8 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
              }
            }
            uVar7 = uVar7 | uVar11 & 0xffffffe0;
            if (uVar3 <= uVar7) {
              uVar7 = uVar3;
            }
LAB_142a75a52:
            if ((uint)uVar6 != uVar7) {
              do {
                uVar8 = (uint)uVar6;
                if (uVar2 != 0) {
                  uVar18 = 0;
                  do {
                    puVar13 = (uint *)(lVar9 + (ulonglong)(uVar8 * uVar2) * 4 + uVar18 * 4);
                    *puVar13 = *puVar13 | puVar12[(uVar10 & 0xffffff) + uVar18];
                    uVar18 = uVar18 + 1;
                  } while ((uint)uVar2 != uVar18);
                }
                if (uVar19 == 0) {
                  uVar18 = uVar6 >> 5;
                  do {
                    uVar18 = uVar18 + 1;
                    if (uVar17 <= uVar18) {
                      uVar19 = 0;
                      uVar6 = uVar15;
                      goto LAB_142a75acb;
                    }
                    uVar19 = puVar5[uVar18];
                    uVar8 = (int)uVar6 + 0x20;
                    uVar6 = (ulonglong)uVar8;
                  } while (uVar19 == 0);
                }
                uVar11 = 0;
                if (uVar19 != 0) {
                  for (; (uVar19 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
                  }
                }
                uVar11 = uVar11 | uVar8 & 0xffffffe0;
                if (uVar3 <= uVar11) {
                  uVar11 = uVar3;
                }
                uVar19 = uVar19 - 1 & uVar19;
                uVar6 = (ulonglong)uVar11;
LAB_142a75acb:
              } while ((uint)uVar6 != uVar7);
            }
          }
        }
        puVar16 = puVar16 + 2;
      } while (puVar16 != puVar1);
    }
  }
  return;
}



// FUNCTION 142a75ada FUN_142a75ada body=921 status=ok
// SIG undefined FUN_142a75ada(void)

void FUN_142a75ada(longlong param_1)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  uint *puVar18;
  ulonglong uVar19;
  uint *puVar20;
  uint *puVar21;
  int iVar22;
  bool bVar23;
  undefined1 auStack_c8 [44];
  uint local_9c;
  longlong local_98;
  ulonglong local_90;
  uint *local_88;
  ulonglong local_80;
  uint *local_78;
  longlong local_70;
  ulonglong local_68;
  uint *local_60;
  longlong local_58;
  uint local_50 [2];
  ulonglong local_48;
  ulonglong uVar9;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar12 = *(longlong *)(param_1 + 0xa0);
  uVar10 = (ulonglong)*(uint *)(lVar12 + 0x28);
  uVar5 = *(uint *)(lVar12 + 0x28) * 0x20 + 0x3f;
  do {
    bVar23 = uVar10 == 0;
    uVar10 = uVar10 - 1;
    if (bVar23) goto LAB_142a75e46;
    uVar19 = (ulonglong)*(uint *)(*(longlong *)(lVar12 + 0x20) + uVar10 * 4);
    uVar5 = uVar5 - 0x20;
  } while (uVar19 == 0);
  uVar10 = uVar19 * 2 + 1;
  lVar11 = 0x3f;
  if (uVar10 != 0) {
    for (; uVar10 >> lVar11 == 0; lVar11 = lVar11 + -1) {
    }
  }
  if (((uint)lVar11 ^ 0x3f) != uVar5) {
    lVar11 = (longlong)*(int *)(*(undefined8 **)(param_1 + 0xb8) + 1);
    if (lVar11 != 0) {
      puVar21 = (uint *)**(undefined8 **)(param_1 + 0xb8);
      puVar18 = puVar21 + lVar11 * 2;
      local_78 = puVar18;
      local_70 = lVar12;
      do {
        uVar2 = *(ushort *)(*(longlong *)(param_1 + 0x68) + (longlong)(int)puVar21[1] * 2);
        uVar10 = (ulonglong)uVar2;
        if ((uVar10 != 0) && (*(short *)(*(longlong *)(param_1 + 0x88) + uVar10 * 2) != 0)) {
          lVar11 = (ulonglong)(*(int *)(param_1 + 0xc4) * (uint)uVar2) +
                   *(longlong *)(param_1 + 0x78);
          uVar5 = *puVar21;
          if ((ulonglong)uVar5 == 0) {
            uVar5 = *(uint *)(lVar12 + 0x30);
            uVar19 = (ulonglong)uVar5;
            uVar6 = uVar5 + 0x1f >> 5;
            puVar18 = *(uint **)(lVar12 + 0x20);
            if (uVar19 == 0) {
LAB_142a75be8:
              lVar12 = 0;
              puVar20 = puVar18;
              do {
                puVar20 = puVar20 + 1;
                if ((ulonglong)((uVar6 - 1) + (uint)(uVar6 == 0)) << 5 == lVar12) {
                  uVar17 = 0;
                  uVar16 = uVar19;
                  goto LAB_142a75cc9;
                }
                uVar17 = *puVar20;
                lVar12 = lVar12 + 0x20;
              } while (uVar17 == 0);
            }
            else {
              uVar17 = *puVar18;
              lVar12 = 0;
              if (uVar17 == 0) goto LAB_142a75be8;
            }
            uVar14 = 0;
            if (uVar17 != 0) {
              for (; (uVar17 >> uVar14 & 1) == 0; uVar14 = uVar14 + 1) {
              }
            }
            uVar14 = uVar14 | (uint)lVar12;
            uVar16 = (ulonglong)uVar14;
            if (uVar5 <= uVar14) {
              uVar16 = uVar19;
            }
            uVar17 = uVar17 - 1 & uVar17;
LAB_142a75cc9:
            uVar13 = (ulonglong)(uVar5 >> 5);
            uVar9 = uVar19;
            do {
              uVar13 = uVar13 + 1;
              uVar14 = uVar5;
              if (uVar6 <= uVar13) goto LAB_142a75cff;
              uVar4 = puVar18[uVar13];
              uVar8 = (int)uVar9 + 0x20;
              uVar9 = (ulonglong)uVar8;
            } while (uVar4 == 0);
            uVar14 = 0;
            if (uVar4 != 0) {
              for (; (uVar4 >> uVar14 & 1) == 0; uVar14 = uVar14 + 1) {
              }
            }
            uVar14 = uVar14 | uVar8 & 0xffffffe0;
            if (uVar5 <= uVar14) {
              uVar14 = uVar5;
            }
LAB_142a75cff:
            if ((uint)uVar16 == uVar14) {
              iVar22 = 0;
              local_98 = lVar11;
              local_90 = uVar10;
              local_88 = puVar21;
            }
            else {
              local_58 = lVar11 + 0x18;
              iVar22 = 0;
              local_9c = uVar14;
              local_98 = lVar11;
              local_90 = uVar10;
              local_88 = puVar21;
              local_80 = uVar19;
              local_68 = (ulonglong)uVar6;
              local_60 = puVar18;
              do {
                uVar5 = (uint)uVar16;
                lVar12 = uVar16 * 0x20 + local_58;
                local_50[0] = 0;
                local_50[1] = 1;
                lVar11 = 0;
                do {
                  lVar15 = (ulonglong)*(uint *)((longlong)local_50 + lVar11) * 0x10;
                  iVar3 = *(int *)(lVar12 + 8 + lVar15);
                  if (iVar3 != 0) {
                    iVar7 = iVar3 + 0xff;
                    if (-1 < iVar3) {
                      iVar7 = iVar3;
                    }
                    piVar1 = (int *)(*(longlong *)
                                      (*(longlong *)(param_1 + 0x18) + (longlong)(iVar7 >> 8) * 8) +
                                     0xc + (ulonglong)(uint)(iVar3 % 0x100) * 0x10);
                    *piVar1 = *piVar1 + -1;
                    if (*piVar1 == 0) {
                      FUN_146f17b62(param_1);
                    }
                    iVar22 = iVar22 + -1;
                    *(undefined4 *)(lVar12 + lVar15 + 8) = 0;
                  }
                  lVar11 = lVar11 + 4;
                } while (lVar11 != 8);
                if (uVar17 == 0) {
                  uVar10 = uVar16 >> 5;
                  do {
                    uVar10 = uVar10 + 1;
                    if (local_68 <= uVar10) {
                      uVar17 = 0;
                      uVar16 = local_80 & 0xffffffff;
                      goto LAB_142a75e2d;
                    }
                    uVar17 = local_60[uVar10];
                    uVar5 = (int)uVar16 + 0x20;
                    uVar16 = (ulonglong)uVar5;
                  } while (uVar17 == 0);
                }
                uVar6 = 0;
                if (uVar17 != 0) {
                  for (; (uVar17 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
                  }
                }
                uVar6 = uVar6 | uVar5 & 0xffffffe0;
                if ((uint)local_80 <= uVar6) {
                  uVar6 = (uint)local_80;
                }
                uVar17 = uVar17 - 1 & uVar17;
                uVar16 = (ulonglong)uVar6;
LAB_142a75e2d:
              } while ((uint)uVar16 != local_9c);
            }
          }
          else {
            if ((*(uint *)(*(longlong *)(lVar12 + 0x20) + (ulonglong)(uVar5 >> 5) * 4) >>
                 (uVar5 & 0x1f) & 1) == 0) goto LAB_142a75bb2;
            lVar12 = lVar11 + (ulonglong)uVar5 * 0x20;
            local_50[0] = 0;
            local_50[1] = 1;
            iVar22 = 0;
            lVar15 = 0;
            local_98 = lVar11;
            local_90 = uVar10;
            local_88 = puVar21;
            do {
              lVar11 = (ulonglong)*(uint *)((longlong)local_50 + lVar15) * 0x10;
              iVar3 = *(int *)(lVar12 + 0x20 + lVar11);
              if (iVar3 != 0) {
                iVar7 = iVar3 + 0xff;
                if (-1 < iVar3) {
                  iVar7 = iVar3;
                }
                piVar1 = (int *)(*(longlong *)
                                  (*(longlong *)(param_1 + 0x18) + (longlong)(iVar7 >> 8) * 8) + 0xc
                                + (ulonglong)(uint)(iVar3 % 0x100) * 0x10);
                *piVar1 = *piVar1 + -1;
                if (*piVar1 == 0) {
                  FUN_146f17b62(param_1);
                }
                iVar22 = iVar22 + -1;
                *(undefined4 *)(lVar12 + lVar11 + 0x20) = 0;
              }
              lVar15 = lVar15 + 4;
            } while (lVar15 != 8);
          }
          FUN_146f1785e(param_1,local_98,local_90,iVar22);
          puVar18 = local_78;
          lVar12 = local_70;
          puVar21 = local_88;
        }
LAB_142a75bb2:
        puVar21 = puVar21 + 2;
      } while (puVar21 != puVar18);
    }
  }
LAB_142a75e46:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a75e74 FUN_142a75e74 body=243 status=ok
// SIG undefined FUN_142a75e74(void)

int FUN_142a75e74(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint *puVar5;
  uint uVar6;
  ulonglong uVar7;
  
  if ((ulonglong)*(uint *)(param_1 + 0x58) != 0) {
    lVar4 = 0;
    puVar5 = *(uint **)(param_1 + 0x50);
    do {
      if (*puVar5 != 0xffffffff) {
        uVar6 = *puVar5 ^ 0xffffffff;
        if (uVar6 == 0) {
          uVar3 = 0x20;
        }
        else {
          uVar3 = 0;
          if (uVar6 != 0) {
            for (; (uVar6 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
            }
          }
        }
        uVar6 = (uint)((ulonglong)uVar3 - lVar4);
        if (*(uint *)(param_1 + 0x60) <= uVar6) {
          return 0;
        }
        puVar5 = *(uint **)(param_1 + 0x50) + ((ulonglong)uVar3 - lVar4 >> 5 & 0x7ffffff);
        *puVar5 = *puVar5 | 1 << ((byte)uVar3 & 0x1f);
        uVar7 = (ulonglong)(uVar6 * *(int *)(param_1 + 0xc4));
        iVar1 = *(int *)(param_1 + 0x80);
        if (((ulonglong)(longlong)iVar1 <= uVar7) &&
           (uVar6 = *(int *)(param_1 + 0xc4) * 0x80, *(uint *)(param_1 + 0x80) = iVar1 + uVar6,
           (uint)(*(int *)(param_1 + 0x84) - iVar1) < uVar6)) {
          FUN_146f1f0fa(param_1 + 0x78);
        }
        lVar2 = *(longlong *)(param_1 + 0x78);
        *(undefined8 *)(lVar2 + uVar7) = 0;
        ((undefined8 *)(lVar2 + uVar7))[1] = 0;
        *(undefined2 *)(lVar2 + 0x10 + uVar7) = 0;
        if ((ulonglong)*(uint *)(param_1 + 0xc0) != 0) {
          memset((void *)(lVar2 + uVar7 + 0x18),0,(ulonglong)*(uint *)(param_1 + 0xc0) << 5);
        }
        return uVar3 - (int)lVar4;
      }
      lVar4 = lVar4 + -0x20;
      puVar5 = puVar5 + 1;
    } while ((ulonglong)*(uint *)(param_1 + 0x58) * 0x20 + lVar4 != 0);
  }
  return 0;
}



// FUNCTION 142a75f67 FUN_142a75f67 body=69 status=ok
// SIG undefined FUN_142a75f67(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a75f67(void)

{
  _DAT_14c9995a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a75fa9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9995b0,1);
  return;
}



// FUNCTION 142a75fac FUN_142a75fac body=1592 status=ok
// SIG undefined FUN_142a75fac(void)

undefined8 * FUN_142a75fac(longlong param_1,undefined8 *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  size_t _Size;
  undefined8 *puVar5;
  void *pvVar6;
  ulonglong *puVar7;
  byte bVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong *puVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  uint *puVar22;
  undefined1 uVar23;
  undefined1 auStack_118 [32];
  ulonglong local_f8;
  ulonglong local_f0;
  ulonglong *local_e0;
  uint local_d8;
  uint local_d4;
  longlong local_d0;
  undefined8 *local_c8;
  longlong *local_c0;
  void *local_b8;
  longlong local_b0;
  undefined8 *local_a8;
  uint *local_a0;
  longlong local_98;
  ulonglong local_90;
  longlong local_88;
  uint *local_80;
  uint local_78;
  uint local_74;
  uint *local_70;
  uint local_68;
  uint local_64;
  uint *local_60;
  int local_58;
  undefined4 local_54;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_e0 = (ulonglong *)*param_2;
  local_a8 = (undefined8 *)(*local_e0 + 0xf & 0xfffffffffffffff0);
  puVar5 = local_a8 + 4;
  local_d0 = param_1;
  local_c8 = param_2;
  if ((undefined8 *)local_e0[1] < puVar5) {
    FUN_140023dd8(local_e0,0x30);
    local_a8 = (undefined8 *)(*local_e0 + 0xf & 0xfffffffffffffff0);
    puVar5 = local_a8 + 4;
  }
  *local_e0 = (ulonglong)puVar5;
  local_a8[2] = 0;
  local_a8[3] = 0;
  *local_a8 = 0;
  local_a8[1] = 0;
  puVar22 = (uint *)local_c8[2];
  lVar18 = local_c8[4];
  local_c0 = (longlong *)local_c8[5];
  _Size = (ulonglong)*(uint *)(local_c0 + 1) * 0x28;
  local_b8 = (void *)(*local_e0 + 0xf & 0xfffffffffffffff0);
  pvVar6 = (void *)((longlong)local_b8 + _Size);
  if ((void *)local_e0[1] < pvVar6) {
    FUN_140023dd8(0,(int)_Size + 0x10);
    local_b8 = (void *)(*local_e0 + 0xf & 0xfffffffffffffff0);
    pvVar6 = (void *)((longlong)local_b8 + _Size);
  }
  *local_e0 = (ulonglong)pvVar6;
  uVar13 = 0;
  local_a0 = puVar22;
  memset(local_b8,0,_Size);
  local_88 = *local_c0;
  local_98 = *(longlong *)(lVar18 + 8);
  lVar16 = local_c8[3];
  local_50 = 0;
  local_58 = *(int *)((longlong)local_c0 + 0x24);
  local_60 = (uint *)local_c8[1];
  local_54 = 0;
  if (local_58 != 0) {
    local_50 = (ulonglong)*local_60;
  }
  local_90 = (ulonglong)*(uint *)(local_c0 + 1);
  local_b0 = lVar18;
  if (local_90 != 0) {
    uVar11 = 0;
    uVar13 = 0;
    uVar21 = 0;
    do {
      uVar3 = *(ulonglong *)(local_88 + uVar11 * 8);
      uVar1 = *(ushort *)(uVar3 + 0x7a);
      uVar2 = *(ushort *)(uVar3 + 0x86);
      uVar20 = uVar2 + 0x1f >> 5;
      uVar12 = uVar20 * 4;
      puVar22 = (uint *)(*local_e0 + 0xf & 0xfffffffffffffff0);
      uVar15 = (longlong)puVar22 + (ulonglong)uVar12;
      local_d8 = uVar21;
      local_d4 = uVar13;
      if (local_e0[1] < uVar15) {
        FUN_140023dd8(local_e0,uVar12 + 0x10);
        puVar22 = (uint *)(*local_e0 + 0xf & 0xfffffffffffffff0);
        uVar15 = (longlong)puVar22 + (ulonglong)uVar12;
      }
      uVar13 = local_d4;
      *local_e0 = uVar15;
      local_64 = (uint)uVar2;
      if (local_64 == 0) {
        local_70 = &local_64;
      }
      else {
        puVar22[uVar20 - 1] =
             (puVar22[uVar20 - 1] << (-(char)uVar2 & 0x1fU)) >> (-(char)uVar2 & 0x1fU);
        local_70 = puVar22;
      }
      local_68 = uVar20;
      FUN_146f59f56(&local_60,puVar22,uVar2);
      if ((*(byte *)(local_d0 + 0x120) & 1) == 0) {
        bVar8 = 0;
      }
      else {
        bVar8 = *(byte *)(uVar3 + 0xb8) & 1;
      }
      uVar15 = -(ulonglong)uVar1 & ((ulonglong)uVar1 + lVar16) - 1;
      if ((ulonglong)local_68 != 0) {
        uVar10 = 0;
        do {
          if (local_70[uVar10] != 0) goto LAB_142a7623d;
          uVar10 = uVar10 + 1;
        } while (local_68 != uVar10);
      }
      uVar21 = local_d8;
      if (bVar8 != 0) {
LAB_142a7623d:
        puVar17 = (ulonglong *)((longlong)local_b8 + (ulonglong)uVar13 * 0x28);
        puVar17[2] = uVar3;
        uVar10 = *(ulonglong *)(local_98 + uVar11 * 8);
        puVar17[3] = uVar10;
        uVar21 = *(uint *)(uVar10 + 8);
        *(uint *)(puVar17 + 4) = uVar21;
        if ((uVar21 & 0x10) == 0) {
          uVar1 = *(ushort *)(uVar3 + 0x78);
          uVar13 = *(uint *)(uVar3 + 0x70);
          lVar18 = (ulonglong)uVar1 - 1;
          uVar14 = -(ulonglong)uVar1;
          uVar19 = *local_e0 + lVar18 & uVar14;
          uVar10 = uVar13 + uVar19;
          if (local_e0[1] < uVar10) {
            FUN_140023dd8(local_e0,uVar1 + uVar13);
            uVar19 = lVar18 + *local_e0 & uVar14;
            uVar10 = uVar13 + uVar19;
          }
          *local_e0 = uVar10;
          (**(code **)(uVar3 + 0xa0))(uVar19,uVar3);
          uVar13 = local_d4;
          local_80 = (uint *)(*(uint *)(uVar3 + 0x88) + uVar19);
          local_78 = *(ushort *)(uVar3 + 0x86) + 0x1f >> 5;
          local_74 = (uint)*(ushort *)(uVar3 + 0x86);
          if (local_74 == 0) {
            local_80 = &local_74;
          }
          else if (local_68 != 0) {
            memcpy(local_80,local_70,(ulonglong)(local_78 << 2));
          }
          if (((bVar8 == 0) && (DAT_14c9995b8 == '\0')) && ((*(byte *)(puVar17[3] + 9) & 0x40) != 0)
             ) {
            *(uint ***)(local_d0 + 0x108) = &local_70;
            local_f8 = uVar15;
            local_f0 = uVar3;
            FUN_146f3aa12(local_d0,&local_70,0,uVar19);
          }
          else {
            FUN_146f3ab54(local_d0,uVar19,uVar15,uVar3);
          }
          *puVar17 = uVar19;
        }
        else {
          *puVar17 = (ulonglong)puVar22;
          puVar17[1] = uVar15;
        }
        uVar21 = local_d8;
        if ((*(byte *)(uVar3 + 0xb8) & 4) == 0) {
          uVar23 = 0;
LAB_142a76318:
          bVar8 = 0;
        }
        else {
          if (local_a0 == (uint *)0x0) {
            uVar23 = 0;
          }
          else {
            local_74 = *(uint *)((longlong)local_c0 + 0x24);
            local_78 = local_74 + 0x1f >> 5;
            local_80 = local_a0;
            if (local_74 == 0) {
              local_80 = &local_74;
            }
            if (*(short *)(uVar3 + 0x86) == 1) {
              uVar23 = (local_80[local_d8 >> 5] >> (local_d8 & 0x1f) & 1) != 0;
            }
            else {
              uVar23 = FUN_146f0ff32(local_80,local_74,local_d8);
            }
          }
          if ((*(char *)(local_c8 + 6) != '\x01') || ((*(byte *)(local_d0 + 0x120) & 1) == 0))
          goto LAB_142a76318;
          bVar8 = *(byte *)(uVar3 + 0xb8) & 1;
        }
        *(undefined1 *)((longlong)puVar17 + 0x24) = uVar23;
        *(byte *)((longlong)puVar17 + 0x25) = bVar8;
        uVar13 = uVar13 + 1;
      }
      lVar16 = uVar15 + *(uint *)(uVar3 + 0x74);
      uVar21 = uVar21 + *(ushort *)(uVar3 + 0x86);
      uVar11 = uVar11 + 1;
    } while (uVar11 != local_90);
  }
  puVar5 = local_a8;
  lVar18 = local_b0;
  pvVar6 = local_b8;
  *local_a8 = local_b8;
  *(uint *)(local_a8 + 3) = uVar13;
  local_a8[2] = local_c8[2];
  uVar1 = *(ushort *)(local_b0 + 0x12) >> 1;
  uVar12 = uVar1 & 1;
  uVar21 = *(uint *)((longlong)local_a8 + 0x1c);
  *(uint *)((longlong)local_a8 + 0x1c) = uVar21 & 0xfffffffe | uVar12;
  *(uint *)((longlong)local_a8 + 0x1c) =
       (uVar21 & 0xfffffffc | uVar12) + (*(uint *)(local_d0 + 0x120) & 1) * 2;
  if ((uVar1 & 1) != 0) {
    lVar16 = (ulonglong)*(ushort *)(local_b0 + 0x10) * 8;
    puVar9 = (ulonglong *)local_e0[1];
    uVar11 = *local_e0 + 7 & 0xfffffffffffffff8;
    puVar17 = (ulonglong *)(uVar11 + lVar16);
    if (puVar9 < puVar17) {
      FUN_140023dd8(local_e0,(int)lVar16 + 8);
      puVar9 = (ulonglong *)local_e0[1];
      uVar11 = *local_e0 + 7 & 0xfffffffffffffff8;
      puVar17 = (ulonglong *)(lVar16 + uVar11);
    }
    *local_e0 = (ulonglong)puVar17;
    puVar7 = (ulonglong *)((longlong)puVar17 + 0xfU & 0xfffffffffffffff0);
    puVar17 = puVar7 + 2;
    if (puVar9 < puVar17) {
      FUN_140023dd8(local_e0,0x20);
      puVar7 = (ulonglong *)(*local_e0 + 0xf & 0xfffffffffffffff0);
      puVar17 = puVar7 + 2;
    }
    *local_e0 = (ulonglong)puVar17;
    uVar1 = *(ushort *)(lVar18 + 0x10);
    *puVar7 = uVar11;
    *(undefined4 *)(puVar7 + 1) = 0;
    *(uint *)((longlong)puVar7 + 0xc) = (uint)uVar1;
    puVar5[1] = puVar7;
    if (uVar13 != 0) {
      lVar18 = 0;
      do {
        plVar4 = *(longlong **)((longlong)pvVar6 + lVar18 + 0x18);
        if ((*(byte *)((longlong)plVar4 + 9) & 1) != 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4,puVar5[1]);
        }
        lVar18 = lVar18 + 0x28;
      } while ((longlong)(int)uVar13 * 0x28 != lVar18);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar5;
}



// FUNCTION 142a765e6 FUN_142a765e6 body=247 status=ok
// SIG undefined FUN_142a765e6(void)

void FUN_142a765e6(longlong *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar2 = (longlong *)param_1[1];
  if ((plVar2 != (longlong *)0x0) && (lVar4 = plVar2[1], (longlong)(int)lVar4 != 0)) {
    lVar3 = *plVar2;
    lVar5 = 0;
    do {
      (**(code **)(**(longlong **)(lVar3 + lVar5) + 0x210))();
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar5);
  }
  lVar4 = param_1[3];
  if ((longlong)(int)lVar4 != 0) {
    lVar3 = *param_1;
    lVar5 = 0;
    do {
      local_68 = *(undefined8 *)(lVar3 + 0x10 + lVar5);
      puVar1 = (undefined4 *)(lVar3 + lVar5);
      local_58 = *puVar1;
      uStack_54 = puVar1[1];
      uStack_50 = puVar1[2];
      uStack_4c = puVar1[3];
      local_48 = (local_48 & 0xfffffff8 | *(uint *)((longlong)param_1 + 0x1c) >> 1 & 1) +
                 (uint)*(byte *)(lVar3 + 0x24 + lVar5) * 2 +
                 (uint)*(byte *)(lVar3 + 0x25 + lVar5) * 4;
      plVar2 = *(longlong **)(lVar3 + 0x18 + lVar5);
      local_60 = param_2;
      (**(code **)(*plVar2 + 8))(plVar2,&local_68);
      lVar5 = lVar5 + 0x28;
    } while ((longlong)(int)lVar4 * 0x28 != lVar5);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a766de FUN_142a766de body=34 status=ok
// SIG undefined FUN_142a766de(void)

void FUN_142a766de(undefined8 param_1,undefined8 param_2)

{
  FUN_142a765e6();
  FUN_142a76700(param_1,param_2);
  return;
}



// FUNCTION 142a76700 FUN_142a76700 body=294 status=ok
// SIG undefined FUN_142a76700(void)

void FUN_142a76700(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar2 = (longlong *)param_1[1];
  if ((plVar2 != (longlong *)0x0) && (lVar4 = plVar2[1], (longlong)(int)lVar4 != 0)) {
    lVar3 = *plVar2;
    lVar5 = 0;
    do {
      (**(code **)(**(longlong **)(lVar3 + lVar5) + 0x218))();
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar5);
  }
  if (((*(byte *)((longlong)param_1 + 0x1c) & 1) != 0) &&
     (lVar4 = param_1[3], (longlong)(int)lVar4 != 0)) {
    lVar3 = *param_1;
    lVar5 = 0;
    do {
      plVar2 = *(longlong **)(lVar3 + 0x18 + lVar5);
      if ((*(byte *)(plVar2 + 1) & 2) != 0) {
        lVar1 = lVar3 + 0x18 + lVar5;
        local_68 = *(undefined8 *)(lVar1 + -8);
        local_58 = *(undefined4 *)(lVar1 + -0x18);
        uStack_54 = *(undefined4 *)(lVar1 + -0x14);
        uStack_50 = *(undefined4 *)(lVar1 + -0x10);
        uStack_4c = *(undefined4 *)(lVar1 + -0xc);
        local_48 = local_48 & 0xfffffffe | *(uint *)((longlong)param_1 + 0x1c) >> 1 & 1;
        local_60 = param_2;
        (**(code **)(*plVar2 + 0x18))(plVar2,&local_68);
      }
      lVar5 = lVar5 + 0x28;
    } while ((longlong)(int)lVar4 * 0x28 != lVar5);
  }
  plVar2 = (longlong *)param_1[1];
  if ((plVar2 != (longlong *)0x0) && (lVar4 = plVar2[1], (longlong)(int)lVar4 != 0)) {
    lVar3 = *plVar2;
    lVar5 = 0;
    do {
      (**(code **)(**(longlong **)(lVar3 + lVar5) + 0x220))();
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar5);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a76828 FUN_142a76828 body=165 status=ok
// SIG undefined FUN_142a76828(void)

void FUN_142a76828(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined8 *)(param_1 + 0x48) = *param_2;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)((longlong)param_2 + 0xc);
  FUN_146efc7ca(local_28);
  if (*(int *)(param_1 + 0x50) != -1) {
    FUN_146efc97c();
  }
  *(undefined4 *)(param_1 + 0x50) = local_28[0];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xc);
  FUN_146efc8cc(param_1,uVar1);
  FUN_146efc8cc(param_1 + 0x18,uVar1);
  FUN_146efc8cc(param_1 + 0x30,uVar1);
  FUN_146f17e24(*(longlong *)(param_1 + 0x48) + 0x400,local_28,param_1);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a768ce FUN_142a768ce body=169 status=ok
// SIG undefined FUN_142a768ce(void)

void FUN_142a768ce(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 auStack_48 [40];
  int *local_20;
  uint local_18;
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[10] != -1) {
    FUN_146f17f3e();
    uVar1 = *(uint *)(param_1 + 1);
    local_14 = *(int *)(param_1[9] + 0xe8);
    local_20 = *(int **)(param_1[9] + 0xd8);
    local_18 = local_14 + 0x1fU >> 5;
    if (local_14 == 0) {
      local_20 = &local_14;
    }
    if ((ulonglong)uVar1 != 0) {
      lVar2 = *param_1;
      lVar3 = param_1[6];
      uVar4 = 0;
      do {
        uVar5 = local_20[uVar4] & *(uint *)(lVar3 + uVar4 * 4);
        *(uint *)(lVar3 + uVar4 * 4) = uVar5;
        *(uint *)(lVar2 + uVar4 * 4) = (uVar5 | *(uint *)(lVar2 + uVar4 * 4)) & local_20[uVar4];
        uVar4 = uVar4 + 1;
      } while (uVar1 != uVar4);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a76978 FUN_142a76978 body=66 status=ok
// SIG undefined FUN_142a76978(void)

void FUN_142a76978(uint param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  
  if ((((param_1 < 0x10) && ((&DAT_14c999ae0)[param_1] != 0)) && (param_2 != 0)) &&
     (lVar2 = *(longlong *)((&DAT_14c999ae0)[param_1] + 0x28), param_2 < *(uint *)(lVar2 + 0x608)))
  {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(lVar2 + 0x5e0) + (ulonglong)(param_2 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)param_2 & 0x1f);
    UNLOCK();
  }
  return;
}



// FUNCTION 142a769ba FUN_142a769ba body=81 status=ok
// SIG undefined FUN_142a769ba(void)

void FUN_142a769ba(uint param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  
  if ((param_1 < 0x10) && ((&DAT_14c999ae0)[param_1] != 0)) {
    lVar2 = *(longlong *)((&DAT_14c999ae0)[param_1] + 0x28);
    uVar3 = 1 << ((byte)param_2 & 0x1f);
    puVar1 = (uint *)(*(longlong *)(lVar2 + 0x5c8) + (ulonglong)(param_2 >> 5) * 4);
    *puVar1 = *puVar1 | uVar3;
    if ((param_2 != 0) && (param_2 < *(uint *)(lVar2 + 0x608))) {
      LOCK();
      puVar1 = (uint *)(*(longlong *)(lVar2 + 0x5e0) + (ulonglong)(param_2 >> 5) * 4);
      *puVar1 = *puVar1 | uVar3;
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 142a76a0c FUN_142a76a0c body=260 status=ok
// SIG undefined FUN_142a76a0c(void)

undefined8 FUN_142a76a0c(longlong *param_1,undefined4 param_2,longlong *param_3)

{
  longlong lVar1;
  float fVar2;
  longlong lVar3;
  char cVar4;
  undefined2 uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  
  cVar4 = (**(code **)(*param_1 + 0x308))();
  if (cVar4 != '\0') {
    lVar3 = *param_3;
    iVar6 = FUN_146f18d76(param_1);
    *(int *)(lVar3 + 4) = iVar6;
    lVar10 = *(longlong *)(param_1[0xf] + (longlong)(iVar6 / 0x492) * 8);
    lVar7 = (ulonglong)(uint)(iVar6 % 0x492) * 0x38;
    lVar1 = lVar10 + lVar7;
    *(undefined4 *)(lVar10 + 0x28 + lVar7) = param_2;
    lVar10 = param_1[0xc];
    uVar5 = *(undefined2 *)(lVar10 + 0x2c);
    if ((param_3[1] != 0) && ((longlong)*(int *)(lVar10 + 0x50) != 0)) {
      plVar9 = *(longlong **)(lVar10 + 0x48);
      lVar10 = (longlong)*(int *)(lVar10 + 0x50) * 0xc;
      do {
        if (*plVar9 == param_3[1]) {
          if (plVar9 != (longlong *)0x0) {
            uVar5 = (undefined2)plVar9[1];
          }
          break;
        }
        plVar9 = (longlong *)((longlong)plVar9 + 0xc);
        lVar10 = lVar10 + -0xc;
      } while (lVar10 != 0);
    }
    *(undefined2 *)(lVar1 + 0x2c) = uVar5;
    FUN_146f18e0e(param_1,lVar3,param_3[2]);
    fVar2 = *(float *)(param_1[0xc] + 0x38);
    uVar8 = CONCAT71((int7)((ulonglong)param_1[0xc] >> 8),1);
    if (fVar2 <= 0.0) {
      return uVar8;
    }
    if (*(float *)(lVar1 + 0x30) <= fVar2) {
      return uVar8;
    }
    (**(code **)(*param_1 + 0x2b8))(param_1,param_2,lVar3);
  }
  return 0;
}



// FUNCTION 142a76b10 FUN_142a76b10 body=2857 status=ok
// SIG undefined FUN_142a76b10(void)

void FUN_142a76b10(longlong param_1,undefined8 *param_2)

{
  void *pvVar1;
  ulonglong uVar2;
  short sVar3;
  longlong lVar4;
  uint *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  int iVar8;
  undefined1 *puVar9;
  longlong lVar10;
  double *pdVar11;
  uint *puVar12;
  int iVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  int iVar17;
  longlong *plVar18;
  uint uVar19;
  void *_Src;
  longlong lVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  longlong *plVar24;
  ulonglong uVar25;
  uint uVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auStack_408 [32];
  undefined8 *local_3e8;
  void *local_3e0;
  uint *local_3d8;
  longlong *local_3d0;
  ulonglong local_3c8;
  void *local_3c0;
  longlong local_3b8;
  longlong local_3b0;
  undefined8 *local_3a8;
  int local_39c;
  int *local_398;
  longlong local_390;
  undefined1 local_384 [4];
  longlong local_380 [48];
  longlong *local_200;
  undefined8 local_1f8;
  undefined1 local_1f0 [384];
  undefined1 *local_70;
  int local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_408;
  lVar10 = *(longlong *)(param_1 + 0x68);
  lVar4 = (longlong)*(int *)(param_2 + 5) * 0x1e0;
  pvVar1 = (void *)(lVar10 + lVar4);
  local_70 = (undefined1 *)0x0;
  iVar21 = *(int *)(lVar10 + 0x188 + lVar4);
  _Src = *(void **)(lVar10 + 0x180 + lVar4);
  local_68 = iVar21;
  local_3e8 = param_2;
  if ((longlong)iVar21 == 0) {
    local_64 = 0x20;
  }
  else {
    if (_Src == (void *)0x0) {
      _Src = pvVar1;
    }
    FUN_146f1f974(local_1f0,iVar21,0);
    puVar9 = local_70;
    if (local_70 == (undefined1 *)0x0) {
      puVar9 = local_1f0;
    }
    memcpy(puVar9,_Src,(longlong)iVar21 * 0xc);
  }
  *(undefined4 *)((longlong)pvVar1 + 0x188) = 0;
  if (*(int *)((longlong)pvVar1 + 0x18c) < 0) {
    FUN_146f1fa7e(pvVar1);
  }
  local_200 = (longlong *)0x0;
  local_1f8 = 0x2000000000;
  local_3a8 = local_3e8 + 6;
  puVar15 = (undefined8 *)local_3e8[0x2a];
  if ((undefined8 *)local_3e8[0x2a] == (undefined8 *)0x0) {
    puVar15 = local_3a8;
  }
  local_3e0 = pvVar1;
  if ((longlong)*(int *)(local_3e8 + 0x2b) != 0) {
    puVar6 = puVar15 + (longlong)*(int *)(local_3e8 + 0x2b) * 9;
    do {
      local_390 = CONCAT44(local_390._4_4_,*(undefined4 *)(param_1 + 0xf8));
      dVar28 = (double)puVar15[2] / (double)*(float *)(*(longlong *)(param_1 + 0x60) + 0x30);
      dVar27 = (double)puVar15[3] / (double)*(float *)(*(longlong *)(param_1 + 0x60) + 0x34);
      iVar21 = (int)((ulonglong)(longlong)ROUND(dVar28 + dVar28 + -0.5) >> 1);
      iVar13 = (int)((ulonglong)(longlong)ROUND(dVar27 + dVar27 + -0.5) >> 1);
      local_398 = (int *)CONCAT44(iVar13,iVar21);
      FUN_146f1fadc(local_380,&local_398);
      puVar9 = local_70;
      if (local_70 == (undefined1 *)0x0) {
        puVar9 = local_1f0;
      }
      if ((longlong)local_68 != 0) {
        lVar10 = 0;
        do {
          if ((*(int *)(puVar9 + lVar10) == iVar21) && (*(int *)(puVar9 + lVar10 + 4) == iVar13)) {
            uVar26 = (int)(lVar10 >> 2) * -0x55555555;
            iVar21 = ~uVar26 + local_68;
            if (iVar21 != 0) {
              if (0 < iVar21) {
                iVar21 = 1;
              }
              memmove(puVar9 + (longlong)(int)uVar26 * 0xc,
                      puVar9 + (longlong)(local_68 - iVar21) * 0xc,(longlong)iVar21 * 0xc);
            }
            local_68 = local_68 + -1;
            FUN_146f1fb98(local_1f0);
            break;
          }
          lVar4 = lVar10 + 0xc;
          lVar10 = lVar10 + 0xc;
        } while (puVar9 + lVar4 != puVar9 + (longlong)local_68 * 0xc);
      }
      puVar15 = puVar15 + 9;
    } while (puVar15 != puVar6);
  }
  if (*(char *)(*(longlong *)(param_1 + 0x60) + 0x40) == '\0') {
    puVar9 = local_70;
    if (local_70 == (undefined1 *)0x0) {
      puVar9 = local_1f0;
    }
    lVar10 = (longlong)local_68;
    if (lVar10 != 0) {
      uVar26 = *(uint *)(*(longlong *)(param_1 + 0x60) + 0x28);
      lVar4 = 0;
      do {
        uVar16 = local_1f8;
        if ((uint)(*(int *)(param_1 + 0xf8) - *(int *)(puVar9 + lVar4 + 8)) <= uVar26) {
          lVar20 = (longlong)(int)local_1f8;
          uVar7 = (int)local_1f8 + 1;
          local_1f8 = CONCAT44(local_1f8._4_4_,uVar7);
          if (local_1f8._4_4_ < uVar7) {
            FUN_146f1fc5e(local_380,uVar16 & 0xffffffff);
          }
          plVar18 = local_200;
          if (local_200 == (longlong *)0x0) {
            plVar18 = local_380;
          }
          *(undefined4 *)((longlong)plVar18 + lVar20 * 0xc + 8) =
               *(undefined4 *)(puVar9 + lVar4 + 8);
          *(undefined8 *)((longlong)plVar18 + lVar20 * 0xc) =
               *(undefined8 *)((longlong)(puVar9 + lVar4 + 8) + -8);
        }
        lVar4 = lVar4 + 0xc;
      } while (lVar10 * 0xc != lVar4);
    }
  }
  FUN_146f19188(local_3e0);
  local_3c0 = (void *)*local_3e8;
  memset(local_3c0,0,(ulonglong)*(uint *)(local_3e8 + 1) << 2);
  plVar18 = local_200;
  if (local_200 == (longlong *)0x0) {
    plVar18 = local_380;
  }
  plVar24 = (longlong *)((longlong)(int)local_1f8 * 0xc + (longlong)plVar18);
  if (*(char *)(*(longlong *)(param_1 + 0x60) + 0x40) == '\x01') {
    if ((int)local_1f8 != 0) {
      local_3b0 = param_1 + 0xe0;
      local_3b8 = (longlong)local_3e0 + 400;
      puVar15 = local_3e8;
LAB_142a76e3f:
      if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
        lVar10 = *plVar18;
        lVar4 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar4 = local_3b0;
        }
        iVar21 = *(int *)(lVar4 + (ulonglong)
                                  (*(int *)(param_1 + 0xf0) - 1U &
                                  (int)((ulonglong)lVar10 >> 0x20) + (int)lVar10 * 0x17) * 4);
        if (iVar21 != -1) {
          do {
            lVar4 = *(longlong *)(param_1 + 0xa8) + (longlong)iVar21 * 0x60;
            if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar21 * 0x60) == lVar10) {
              local_3d0 = (longlong *)(lVar4 + 8);
              if (local_3d0 != (longlong *)0x0 && lVar4 != 0) {
                puVar12 = (uint *)(lVar4 + 0x18);
                uVar26 = *(uint *)(lVar4 + 0x30);
                if (uVar26 == 0) {
                  uVar16 = 1;
                  uVar25 = 0;
                  iVar21 = 0;
                  uVar7 = 0;
                  goto LAB_142a76f5d;
                }
                puVar5 = *(uint **)(lVar4 + 0x28);
                if (*(uint **)(lVar4 + 0x28) == (uint *)0x0) {
                  puVar5 = puVar12;
                }
                uVar7 = *puVar5;
                if (uVar7 != 0) {
                  uVar25 = 0;
                  iVar21 = 0;
                  goto LAB_142a76f2a;
                }
                iVar21 = uVar26 + 0x1e;
                if (-1 < (int)(uVar26 - 1)) {
                  iVar21 = uVar26 - 1;
                }
                uVar25 = 0;
                uVar16 = (ulonglong)(uint)(iVar21 >> 5);
                if (iVar21 >> 5 < 1) {
                  uVar16 = uVar25;
                }
                iVar21 = 0;
                goto LAB_142a76f15;
              }
              break;
            }
            iVar21 = *(int *)(lVar4 + 0x58);
          } while (iVar21 != -1);
        }
      }
      goto LAB_142a76f62;
    }
LAB_142a773ad:
    pvVar1 = local_3e0;
    puVar12 = (uint *)((longlong)local_3e0 + 0x1a0);
    iVar21 = *(int *)((longlong)local_3e0 + 0x1b8);
    if (iVar21 == 0) {
      uVar25 = 1;
      uVar16 = 0;
      iVar17 = 0;
      iVar13 = 0;
    }
    else {
      puVar5 = *(uint **)((longlong)local_3e0 + 0x1b0);
      if (*(uint **)((longlong)local_3e0 + 0x1b0) == (uint *)0x0) {
        puVar5 = puVar12;
      }
      uVar26 = *puVar5;
      if (uVar26 == 0) {
        iVar13 = iVar21 + 0x1e;
        if (-1 < iVar21 + -1) {
          iVar13 = iVar21 + -1;
        }
        uVar16 = 0;
        uVar25 = (ulonglong)(uint)(iVar13 >> 5);
        if (iVar13 >> 5 < 1) {
          uVar25 = uVar16;
        }
        iVar17 = 0;
        do {
          if (uVar25 == uVar16) goto LAB_142a775d7;
          iVar17 = iVar17 + 0x20;
          uVar26 = puVar5[uVar16 + 1];
          uVar16 = uVar16 + 1;
        } while (uVar26 == 0);
      }
      else {
        uVar16 = 0;
        iVar17 = 0;
      }
      uVar25 = (ulonglong)(-uVar26 & uVar26);
      uVar2 = uVar25 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar13 = (iVar17 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
      if (iVar21 <= iVar13) {
        iVar13 = iVar21;
      }
    }
    if (iVar13 < iVar21) {
      plVar18 = (longlong *)((longlong)local_3e0 + 400);
      uVar26 = 0xffffffff;
      do {
        lVar10 = (longlong)iVar13 * 0x10;
        sVar3 = *(short *)(*plVar18 + 4 + lVar10);
        if (sVar3 == 0) {
          FUN_146f1f8a8(plVar18);
        }
        else {
          *(short *)(*plVar18 + lVar10 + 4) = sVar3 + -1;
          puVar5 = (uint *)((longlong)local_3c0 + (ulonglong)(*(uint *)(*plVar18 + lVar10) >> 5) * 4
                           );
          *puVar5 = *puVar5 | 1 << ((byte)*(uint *)(*plVar18 + lVar10) & 0x1f);
        }
        uVar26 = uVar26 & ~(uint)uVar25;
        puVar5 = *(uint **)((longlong)pvVar1 + 0x1b0);
        if (puVar5 == (uint *)0x0) {
          puVar5 = puVar12;
        }
        iVar21 = *(int *)((longlong)pvVar1 + 0x1b8);
        iVar13 = (int)uVar16;
        lVar10 = (longlong)iVar13;
        uVar7 = puVar5[lVar10] & uVar26;
        if (uVar7 == 0) {
          iVar8 = iVar21 + 0x1e;
          if (-1 < iVar21 + -1) {
            iVar8 = iVar21 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar22 = iVar8;
          if (iVar8 < iVar13) {
            iVar22 = iVar13;
          }
          if (iVar8 <= iVar13) break;
          lVar4 = 0;
          while( true ) {
            iVar17 = iVar17 + 0x20;
            uVar7 = puVar5[lVar10 + lVar4 + 1];
            if (uVar7 != 0) break;
            lVar4 = lVar4 + 1;
            if (iVar22 - lVar10 == lVar4) goto LAB_142a775d7;
          }
          uVar16 = (ulonglong)(iVar13 + (int)lVar4 + 1);
          uVar26 = 0xffffffff;
        }
        uVar25 = (ulonglong)(-uVar7 & uVar7);
        uVar2 = uVar25 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar13 = (iVar17 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
      } while (iVar13 < iVar21);
    }
  }
  else if ((int)local_1f8 != 0) {
    local_3d0 = (longlong *)(param_1 + 0xe0);
LAB_142a77183:
    if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
      lVar10 = *plVar18;
      plVar14 = *(longlong **)(param_1 + 0xe8);
      if (*(longlong **)(param_1 + 0xe8) == (longlong *)0x0) {
        plVar14 = local_3d0;
      }
      iVar21 = *(int *)((longlong)plVar14 +
                       (ulonglong)
                       (*(int *)(param_1 + 0xf0) - 1U &
                       (int)((ulonglong)lVar10 >> 0x20) + (int)lVar10 * 0x17) * 4);
      if (iVar21 != -1) {
        do {
          lVar4 = *(longlong *)(param_1 + 0xa8) + (longlong)iVar21 * 0x60;
          if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar21 * 0x60) == lVar10) {
            if ((lVar4 + 8U & 0xfffffffffffffff7) != 0) {
              iVar21 = *(int *)(lVar4 + 0x30);
              if (iVar21 == 0) {
                uVar16 = 1;
                uVar25 = 0;
                iVar17 = 0;
                iVar13 = 0;
                goto LAB_142a7729a;
              }
              puVar12 = *(uint **)(lVar4 + 0x28);
              if (*(uint **)(lVar4 + 0x28) == (uint *)0x0) {
                puVar12 = (uint *)(lVar4 + 0x18);
              }
              uVar26 = *puVar12;
              if (uVar26 != 0) {
                uVar25 = 0;
                iVar17 = 0;
                goto LAB_142a77267;
              }
              iVar13 = iVar21 + 0x1e;
              if (-1 < iVar21 + -1) {
                iVar13 = iVar21 + -1;
              }
              uVar25 = 0;
              uVar16 = (ulonglong)(uint)(iVar13 >> 5);
              if (iVar13 >> 5 < 1) {
                uVar16 = uVar25;
              }
              iVar17 = 0;
              goto LAB_142a77252;
            }
            break;
          }
          iVar21 = *(int *)(lVar4 + 0x58);
        } while (iVar21 != -1);
      }
    }
    goto LAB_142a7729f;
  }
LAB_142a775d7:
  if (local_200 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_70 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_408) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
  while( true ) {
    iVar17 = iVar17 + 0x20;
    uVar26 = puVar12[uVar25 + 1];
    uVar25 = uVar25 + 1;
    if (uVar26 != 0) break;
LAB_142a77252:
    if (uVar16 == uVar25) goto LAB_142a7729f;
  }
LAB_142a77267:
  uVar16 = (ulonglong)(-uVar26 & uVar26);
  uVar2 = uVar16 * 2 + 1;
  lVar10 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
    }
  }
  iVar13 = (iVar17 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
  if (iVar21 <= iVar13) {
    iVar13 = iVar21;
  }
LAB_142a7729a:
  if (iVar13 != iVar21) {
    uVar26 = 0xffffffff;
    do {
      uVar7 = *(uint *)(*(longlong *)(lVar4 + 8) + (longlong)iVar13 * 0xc);
      puVar12 = (uint *)((longlong)local_3c0 + (ulonglong)(uVar7 >> 5) * 4);
      *puVar12 = *puVar12 | 1 << ((byte)uVar7 & 0x1f);
      uVar26 = ~(uint)uVar16 & uVar26;
      puVar12 = *(uint **)(lVar4 + 0x28);
      if (*(uint **)(lVar4 + 0x28) == (uint *)0x0) {
        puVar12 = (uint *)(lVar4 + 0x18);
      }
      iVar8 = *(int *)(lVar4 + 0x30);
      iVar13 = (int)uVar25;
      lVar10 = (longlong)iVar13;
      uVar7 = puVar12[lVar10] & uVar26;
      if (uVar7 == 0) {
        iVar22 = iVar8 + 0x1e;
        if (-1 < iVar8 + -1) {
          iVar22 = iVar8 + -1;
        }
        iVar22 = iVar22 >> 5;
        iVar17 = iVar17 + 0x20;
        iVar23 = iVar22;
        if (iVar22 < iVar13) {
          iVar23 = iVar13;
        }
        if (iVar13 < iVar22) {
          lVar20 = 0;
          do {
            uVar7 = puVar12[lVar10 + lVar20 + 1];
            if (uVar7 != 0) {
              uVar25 = (ulonglong)(iVar13 + (int)lVar20 + 1);
              uVar26 = 0xffffffff;
              goto LAB_142a77357;
            }
            iVar17 = iVar17 + 0x20;
            lVar20 = lVar20 + 1;
          } while (iVar23 - lVar10 != lVar20);
          uVar26 = 0xffffffff;
          lVar10 = (longlong)iVar23;
        }
        uVar25 = lVar10 + 1U & 0xffffffff;
        iVar13 = iVar8;
      }
      else {
LAB_142a77357:
        uVar16 = (ulonglong)(-uVar7 & uVar7);
        uVar2 = uVar16 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar13 = (iVar17 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        if (iVar8 <= iVar13) {
          iVar13 = iVar8;
        }
      }
    } while (iVar13 != iVar21);
  }
LAB_142a7729f:
  plVar18 = (longlong *)((longlong)plVar18 + 0xc);
  if (plVar18 == plVar24) goto LAB_142a775d7;
  goto LAB_142a77183;
  while( true ) {
    iVar21 = iVar21 + 0x20;
    uVar7 = puVar5[uVar25 + 1];
    uVar25 = uVar25 + 1;
    if (uVar7 != 0) break;
LAB_142a76f15:
    if (uVar16 == uVar25) goto LAB_142a76f62;
  }
LAB_142a76f2a:
  uVar16 = (ulonglong)(-uVar7 & uVar7);
  uVar2 = uVar16 * 2 + 1;
  lVar10 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
    }
  }
  uVar7 = (iVar21 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
  if ((int)uVar26 <= (int)uVar7) {
    uVar7 = uVar26;
  }
LAB_142a76f5d:
  if (uVar7 != uVar26) {
    uVar19 = 0xffffffff;
    local_3d8 = puVar12;
    local_3c8 = (ulonglong)uVar26;
    do {
      local_39c = *(int *)(*local_3d0 + (longlong)(int)uVar7 * 0xc);
      puVar6 = (undefined8 *)puVar15[0x2a];
      if ((undefined8 *)puVar15[0x2a] == (undefined8 *)0x0) {
        puVar6 = local_3a8;
      }
      if ((longlong)*(int *)(puVar15 + 0x2b) != 0) {
        iVar13 = *(int *)(puVar15[2] + 4 + (longlong)local_39c * 8);
        pdVar11 = (double *)
                  ((ulonglong)(uint)(iVar13 % 0x492) * 0x38 +
                  *(longlong *)(*(longlong *)(param_1 + 0x78) + (longlong)(iVar13 / 0x492) * 8));
        lVar10 = 0;
        do {
          dVar27 = *(double *)((longlong)puVar6 + lVar10 + 0x10) - *pdVar11;
          dVar29 = *(double *)((longlong)puVar6 + lVar10 + 0x18) - pdVar11[1];
          dVar28 = *(double *)((longlong)puVar6 + lVar10 + 0x20) - pdVar11[2];
          if (dVar28 * dVar28 + dVar29 * dVar29 + dVar27 * dVar27 <=
              (double)*(float *)((longlong)pdVar11 + 0x34)) {
            local_390 = (longlong)pdVar11 + 0x2c;
            local_398 = &local_39c;
            FUN_146f1fce8(local_3b8,local_384,&local_398);
            puVar12 = local_3d8;
            puVar15 = local_3e8;
            break;
          }
          lVar10 = lVar10 + 0x48;
        } while ((longlong)*(int *)(puVar15 + 0x2b) * 0x48 != lVar10);
      }
      uVar19 = uVar19 & ~(uint)uVar16;
      puVar5 = *(uint **)(lVar4 + 0x28);
      if (*(uint **)(lVar4 + 0x28) == (uint *)0x0) {
        puVar5 = puVar12;
      }
      uVar26 = *(uint *)(lVar4 + 0x30);
      iVar13 = (int)uVar25;
      lVar10 = (longlong)iVar13;
      uVar7 = puVar5[lVar10] & uVar19;
      if (uVar7 == 0) {
        iVar17 = uVar26 + 0x1e;
        if (-1 < (int)(uVar26 - 1)) {
          iVar17 = uVar26 - 1;
        }
        iVar17 = iVar17 >> 5;
        iVar21 = iVar21 + 0x20;
        iVar8 = iVar17;
        if (iVar17 < iVar13) {
          iVar8 = iVar13;
        }
        puVar12 = local_3d8;
        if (iVar13 < iVar17) {
          lVar20 = 0;
          do {
            uVar7 = puVar5[lVar10 + lVar20 + 1];
            if (uVar7 != 0) {
              uVar25 = (ulonglong)(iVar13 + (int)lVar20 + 1);
              uVar19 = 0xffffffff;
              goto LAB_142a770df;
            }
            iVar21 = iVar21 + 0x20;
            lVar20 = lVar20 + 1;
          } while (iVar8 - lVar10 != lVar20);
          uVar19 = 0xffffffff;
          iVar13 = iVar8;
        }
        uVar25 = (ulonglong)(iVar13 + 1);
        puVar15 = local_3e8;
        uVar7 = uVar26;
      }
      else {
LAB_142a770df:
        uVar16 = (ulonglong)(-uVar7 & uVar7);
        uVar2 = uVar16 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        uVar7 = (iVar21 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        if ((int)uVar26 <= (int)uVar7) {
          uVar7 = uVar26;
        }
      }
    } while (uVar7 != (uint)local_3c8);
  }
LAB_142a76f62:
  plVar18 = (longlong *)((longlong)plVar18 + 0xc);
  if (plVar18 == plVar24) goto LAB_142a773ad;
  goto LAB_142a76e3f;
}



// FUNCTION 142a7763b FUN_142a7763b body=69 status=ok
// SIG undefined FUN_142a7763b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a7763b(void)

{
  _DAT_14c9995c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a7767d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9995c8,1);
  return;
}



// FUNCTION 142a77680 FUN_142a77680 body=80 status=ok
// SIG undefined FUN_142a77680(void)

void FUN_142a77680(undefined8 *param_1)

{
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  DAT_14c75f45c = DAT_14c75f45c + 1;
  *(uint *)(param_1 + 0xe) = DAT_14c75f45c & 0xff;
  *(undefined4 *)((longlong)param_1 + 0x74) = 1;
  return;
}



// FUNCTION 142a776d0 FUN_142a776d0 body=234 status=ok
// SIG undefined FUN_142a776d0(void)

uint * FUN_142a776d0(longlong param_1,uint *param_2,longlong param_3)

{
  uint uVar1;
  undefined1 auStack_68 [40];
  uint local_40;
  undefined4 uStack_3c;
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((uint)(*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x3c)) < *(uint *)(param_1 + 0x50)) {
    if (param_3 == 0) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
      FUN_14495448a(&local_40,L"NetObjectGroup");
      param_3 = CONCAT44(uStack_3c,local_40);
    }
    FUN_146f1a120(param_1,&local_40,param_3);
    if (CONCAT44(uStack_3c,local_40) == 0) {
      uVar1 = *(uint *)(param_1 + 0x74);
      *(uint *)(param_1 + 0x74) = uVar1 + 1;
      FUN_146f20704(param_1 + 8,&local_40);
      *local_38 = 0;
      local_38[1] = 0;
      local_38[2] = param_3;
      *(uint *)(local_38 + 3) = uVar1;
      *(undefined4 *)((longlong)local_38 + 0x1c) = 0;
      *param_2 = *(int *)(param_1 + 0x70) << 0x18 | local_40 & 0xffffff;
      param_2[1] = uVar1;
      goto LAB_142a776ff;
    }
  }
  param_2[0] = 0;
  param_2[1] = 0;
LAB_142a776ff:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a777bc FUN_142a777bc body=73 status=ok
// SIG undefined FUN_142a777bc(void)

void FUN_142a777bc(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_146f1a26a();
  if (cVar1 == '\0') {
    return;
  }
  FUN_146f1a2c0(param_1,param_2);
  FUN_146f1a3a2(param_1 + 8,(uint)param_2 & 0xffffff);
  return;
}



// FUNCTION 142a77806 FUN_142a77806 body=200 status=ok
// SIG undefined FUN_142a77806(void)

void FUN_142a77806(longlong param_1,undefined8 param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (param_3 != 0) {
    cVar3 = FUN_146f1a26a();
    if ((cVar3 != '\0') &&
       (plVar6 = (longlong *)
                 ((ulonglong)(((uint)param_2 & 0xffffff) << 5) + *(longlong *)(param_1 + 8)),
       plVar6 != (longlong *)0x0)) {
      cVar3 = FUN_146f19f78((longlong)(int)param_3 * 0x18 + *(longlong *)(param_1 + 0x40),param_2);
      if (cVar3 != '\0') {
        lVar4 = *plVar6;
        iVar2 = (int)plVar6[1];
        lVar7 = (longlong)iVar2;
        if (lVar7 != 0) {
          uVar5 = 0;
          do {
            if (*(uint *)(lVar4 + uVar5) == param_3) {
              if ((int)(~uVar5 >> 2) != 0) goto LAB_142a778ac;
              break;
            }
            uVar5 = uVar5 + 4;
          } while (lVar7 * 4 - uVar5 != 0);
        }
        *(uint *)(plVar6 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)plVar6 + 0xc) < iVar2 + 1U) {
          FUN_1447808da(plVar6,iVar2);
          lVar4 = *plVar6;
        }
        *(uint *)(lVar4 + lVar7 * 4) = param_3;
LAB_142a778ac:
        if ((*(byte *)((longlong)plVar6 + 0x1c) & 3) != 0) {
          puVar1 = (uint *)(*(longlong *)(param_1 + 0x58) + (ulonglong)(param_3 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)param_3 & 0x1f);
        }
      }
    }
  }
  return;
}



// FUNCTION 142a778ce FUN_142a778ce body=284 status=ok
// SIG undefined FUN_142a778ce(void)

void FUN_142a778ce(longlong param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 != 0) {
    cVar5 = FUN_146f1a26a();
    if ((cVar5 != '\0') &&
       (plVar10 = (longlong *)((ulonglong)((param_2 & 0xffffff) << 5) + *(longlong *)(param_1 + 8)),
       plVar10 != (longlong *)0x0)) {
      lVar7 = (longlong)(int)param_3 * 0x18 + *(longlong *)(param_1 + 0x40);
      local_34 = param_2 & 0xffffff;
      FUN_146f1bd68(lVar7);
      iVar2 = (int)plVar10[1];
      if ((longlong)iVar2 != 0) {
        lVar3 = *plVar10;
        lVar6 = (longlong)iVar2 * 4;
        lVar8 = 0;
        lVar9 = 0;
        do {
          if (*(uint *)(lVar3 + lVar8 * 4) == param_3) {
            if ((uint)lVar8 != 0xffffffff) {
              memmove((void *)(lVar3 + (lVar9 >> 0x20) * 4),
                      (void *)(lVar3 + (lVar9 >> 0x20) * 4 + 4),
                      (longlong)(int)(~(uint)lVar8 + iVar2) << 2);
              *(int *)(plVar10 + 1) = (int)plVar10[1] + -1;
            }
            break;
          }
          lVar9 = lVar9 + 0x100000000;
          lVar8 = lVar8 + 1;
          lVar6 = lVar6 + -4;
        } while (lVar6 != 0);
      }
      cVar5 = FUN_146f1a492(param_1,lVar7);
      if (cVar5 == '\0') {
        bVar4 = (byte)param_3 & 0x1f;
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x58) + (ulonglong)(param_3 >> 5) * 4);
        *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a779ec FUN_142a779ec body=108 status=ok
// SIG undefined FUN_142a779ec(void)

void FUN_142a779ec(longlong param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  
  cVar4 = FUN_146f1a26a();
  if (((cVar4 != '\0') &&
      (plVar5 = (longlong *)((ulonglong)((param_2 & 0xffffff) << 5) + *(longlong *)(param_1 + 8)),
      plVar5 != (longlong *)0x0)) && ((*(uint *)((longlong)plVar5 + 0x1c) & 3) == 0)) {
    *(uint *)((longlong)plVar5 + 0x1c) = *(uint *)((longlong)plVar5 + 0x1c) | 1;
    lVar3 = plVar5[1];
    if ((longlong)(int)lVar3 != 0) {
      lVar2 = *plVar5;
      lVar6 = 0;
      do {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x58) +
                         (ulonglong)(*(uint *)(lVar2 + lVar6) >> 5) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)*(uint *)(lVar2 + lVar6) & 0x1f);
        lVar6 = lVar6 + 4;
      } while ((longlong)(int)lVar3 * 4 != lVar6);
    }
  }
  return;
}



// FUNCTION 142a77a58 FUN_142a77a58 body=142 status=ok
// SIG undefined FUN_142a77a58(void)

void FUN_142a77a58(longlong param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  char cVar6;
  longlong *plVar7;
  longlong lVar8;
  
  cVar6 = FUN_146f1a26a();
  if (((cVar6 != '\0') &&
      (plVar7 = (longlong *)((ulonglong)((param_2 & 0xffffff) << 5) + *(longlong *)(param_1 + 8)),
      plVar7 != (longlong *)0x0)) && ((*(uint *)((longlong)plVar7 + 0x1c) & 1) != 0)) {
    *(uint *)((longlong)plVar7 + 0x1c) = *(uint *)((longlong)plVar7 + 0x1c) & 0xfffffffe;
    lVar5 = plVar7[1];
    if ((longlong)(int)lVar5 != 0) {
      lVar3 = *plVar7;
      lVar8 = 0;
      do {
        uVar2 = *(uint *)(lVar3 + lVar8);
        cVar6 = FUN_146f1a492(param_1,(longlong)(int)uVar2 * 0x18 + *(longlong *)(param_1 + 0x40));
        if (cVar6 == '\0') {
          bVar4 = (byte)uVar2 & 0x1f;
          puVar1 = (uint *)(*(longlong *)(param_1 + 0x58) + (ulonglong)(uVar2 >> 5) * 4);
          *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
        }
        lVar8 = lVar8 + 4;
      } while ((longlong)(int)lVar5 * 4 != lVar8);
    }
  }
  return;
}



// FUNCTION 142a77ae6 FUN_142a77ae6 body=198 status=ok
// SIG undefined FUN_142a77ae6(void)

void FUN_142a77ae6(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  if ((*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) &&
     (iVar1 = *(int *)(param_1 + 0x98), iVar1 != 0)) {
    if (0x1f < iVar1 + 0x1fU) {
      lVar2 = *(longlong *)(param_1 + 0x88);
      uVar5 = iVar1 + 0x1fU >> 5;
      lVar3 = *param_2;
      uVar6 = 0;
      iVar8 = 0;
      do {
        uVar9 = 0xffffffff;
        if (uVar6 == uVar5 - 1) {
          uVar9 = 0xffffffff >> (-(char)iVar1 & 0x1fU);
        }
        uVar9 = uVar9 & *(uint *)(lVar2 + uVar6 * 4) & *(uint *)(lVar3 + uVar6 * 4);
        iVar7 = iVar8;
        if (uVar9 != 0) {
          do {
            if ((uVar9 & 1) != 0) {
              FUN_146f1a94c(param_1,iVar7);
            }
            bVar4 = 1 < uVar9;
            uVar9 = uVar9 >> 1;
            iVar7 = iVar7 + 1;
          } while (bVar4);
        }
        uVar6 = uVar6 + 1;
        iVar8 = iVar8 + 0x20;
      } while (uVar6 != uVar5);
    }
  }
  return;
}



// FUNCTION 142a77bac FUN_142a77bac body=802 status=ok
// SIG undefined FUN_142a77bac(void)

void FUN_142a77bac(longlong *param_1,byte param_2,longlong *param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  short sVar5;
  ulonglong uVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong *plVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_168 [32];
  uint local_148;
  uint local_144;
  ulonglong local_140;
  longlong *local_138;
  uint *local_130;
  longlong *local_128;
  longlong *local_120;
  longlong local_118;
  ulonglong local_110;
  uint local_108 [4];
  ushort local_f8 [4];
  uint local_f0 [32];
  uint *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_118 = *param_1;
  local_70 = (uint *)0x0;
  local_68 = 0x2000000000;
  local_148 = *(uint *)(param_1 + 0x10);
  if (local_148 != 0) {
    puVar8 = (uint *)param_1[0xe];
    local_144 = (uint)param_2;
    local_128 = param_1 + 4;
    uVar12 = 0;
    local_138 = param_1;
    local_120 = param_3;
    do {
      uVar13 = *puVar8;
      local_130 = puVar8;
      if (uVar13 != 0) {
        uVar11 = 0;
        local_140 = uVar12;
        local_110 = uVar12;
        do {
          if ((uVar13 & 0xf) != 0) {
            uVar12 = uVar11 | local_110;
            sVar5 = (short)local_144;
            local_f8[0] = *(short *)(local_118 + uVar12 * 2) - sVar5;
            local_f8[1] = *(short *)(local_118 + 2 + uVar12 * 2) - sVar5;
            local_f8[2] = *(short *)(local_118 + 4 + uVar12 * 2) - sVar5;
            local_f8[3] = *(short *)(local_118 + 6 + uVar12 * 2) - sVar5;
            *(ushort *)(local_118 + uVar12 * 2) = local_f8[0];
            *(ushort *)(local_118 + 2 + uVar12 * 2) = local_f8[1];
            *(ushort *)(local_118 + 4 + uVar12 * 2) = local_f8[2];
            *(ushort *)(local_118 + 6 + uVar12 * 2) = local_f8[3];
            local_108[0] = 0;
            local_108[1] = 1;
            local_108[2] = 2;
            local_108[3] = 3;
            lVar10 = 0;
            do {
              uVar6 = local_68;
              uVar3 = *(uint *)((longlong)local_108 + lVar10);
              if (((uVar13 >> (uVar3 & 0x1f) & 1) != 0) &&
                 ((ushort)-(ushort)param_2 <= local_f8[uVar3])) {
                lVar15 = (longlong)(int)local_68;
                uVar7 = (int)local_68 + 1;
                local_68 = CONCAT44(local_68._4_4_,uVar7);
                if (local_68._4_4_ < uVar7) {
                  FUN_140724a48(local_f0,uVar6 & 0xffffffff);
                }
                puVar8 = local_70;
                if (local_70 == (uint *)0x0) {
                  puVar8 = local_f0;
                }
                puVar8[lVar15] = uVar3 + (int)uVar12;
              }
              lVar10 = lVar10 + 4;
              param_3 = local_120;
            } while (lVar10 != 0x10);
          }
          plVar14 = local_138;
          uVar13 = uVar13 >> 4;
          bVar16 = uVar11 < 0x1c;
          uVar11 = uVar11 + 4;
        } while (bVar16);
        lVar10 = (longlong)(int)local_68;
        uVar12 = local_140;
        if (lVar10 != 0) {
          iVar9 = (int)param_3[1] + (int)local_68;
          if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(iVar9);
          }
          if (*(int *)((longlong)param_3 + 0xc) < iVar9) {
            FUN_14480809c(param_3);
            lVar10 = (longlong)(int)local_68;
            puVar8 = local_70;
            if (local_70 == (uint *)0x0) {
              puVar8 = local_f0;
            }
            if (lVar10 != 0) goto LAB_142a77db4;
          }
          else {
            puVar8 = local_70;
            if (local_70 == (uint *)0x0) {
              puVar8 = local_f0;
            }
LAB_142a77db4:
            puVar1 = puVar8 + lVar10;
            do {
              uVar13 = *puVar8;
              lVar10 = plVar14[2];
              iVar9 = (int)param_3[1];
              *(uint *)(param_3 + 1) = iVar9 + 1U;
              if (*(uint *)((longlong)param_3 + 0xc) < iVar9 + 1U) {
                FUN_1447808da(param_3,iVar9);
              }
              plVar14 = local_138;
              *(undefined4 *)(*param_3 + (longlong)iVar9 * 4) =
                   *(undefined4 *)(lVar10 + (longlong)(int)uVar13 * 4);
              bVar4 = (byte)uVar13 & 0x1f;
              puVar2 = (uint *)(local_138[0xe] + (ulonglong)(uVar13 >> 5) * 4);
              *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
              uVar13 = *(uint *)(local_138[2] + (longlong)(int)uVar13 * 4);
              FUN_1409a11ae(local_128,uVar13);
              bVar4 = (byte)uVar13 & 0x1f;
              puVar2 = (uint *)(plVar14[0x11] + (ulonglong)(uVar13 >> 5) * 4);
              *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
              puVar8 = puVar8 + 1;
            } while (puVar8 != puVar1);
          }
          uVar12 = local_140;
          bVar16 = (longlong)local_68 < 0;
          local_68 = local_68 & 0xffffffff00000000;
          if (bVar16) {
            FUN_1417335d8(local_f0,0);
          }
        }
      }
      uVar13 = (int)uVar12 + 0x20;
      uVar12 = (ulonglong)uVar13;
      puVar8 = local_130 + 1;
    } while (uVar13 < local_148);
    if (local_70 != (uint *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a77ede FUN_142a77ede body=523 status=ok
// SIG undefined FUN_142a77ede(void)

void FUN_142a77ede(void *param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)((longlong)param_1 + 200);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  if (uVar3 < 0x11) {
    *(undefined4 *)((longlong)param_1 + 0xcc) = 0x10;
LAB_142a77f07:
    if (*(void **)((longlong)param_1 + 0xc0) == (void *)0x0) {
      return;
    }
    memmove(param_1,*(void **)((longlong)param_1 + 0xc0),(longlong)param_2 * 0xc);
    param_2 = 0;
    uVar7 = 0;
  }
  else {
    lVar4 = (longlong)(int)uVar3;
    if (0x10 < *(uint *)((longlong)param_1 + 0xcc)) {
      lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
    }
    uVar7 = lVar4 * 0xc;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar7 + 0xf;
        if (uVar7 < 0x7ff1) {
          uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar8 = 0x32 - (ulonglong)bVar2;
            do {
              uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_142a77fbb;
              lVar4 = uVar5 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar4 != 0x33);
          }
          uVar7 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar7 = (ulonglong)DAT_14c841df8;
          }
          uVar7 = -uVar7 & ((uVar1 & 0xfffffffffffffff0) + uVar7) - 1;
        }
      }
      else {
        uVar7 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar7,0);
      }
    }
LAB_142a77fbb:
    uVar7 = uVar7 / 0xc;
    uVar6 = (uint)uVar7;
    if ((int)uVar6 < (int)uVar3) {
      *(undefined4 *)((longlong)param_1 + 0xcc) = 0x7fffffff;
      uVar7 = 0x7fffffff;
    }
    else {
      *(uint *)((longlong)param_1 + 0xcc) = uVar6;
      if (uVar6 < 0x11) goto LAB_142a77f07;
    }
    if (*(longlong *)((longlong)param_1 + 0xc0) == 0) {
      FUN_1446efa72((longlong)param_1 + 0xc0,0,uVar7,0xc);
      memmove(*(void **)((longlong)param_1 + 0xc0),param_1,(longlong)param_2 * 0xc);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 0xc0,param_2,uVar7,0xc);
  return;
}



// FUNCTION 142a780e9 FUN_142a780e9 body=1194 status=ok
// SIG undefined FUN_142a780e9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a780e9(void)

{
  uint uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  char *local_28;
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = "ReplicationID";
  local_20 = 0xd;
  local_1c = 0;
  uVar1 = FUN_14001a6c0(&local_28,1);
  DAT_14c999458 = (ulonglong)uVar1;
  local_28 = "ChangeMaskStorage";
  local_20 = 0x11;
  local_1c = 0;
  uVar1 = FUN_14001a6c0(&local_28,1);
  DAT_14c999460 = (ulonglong)uVar1;
  local_28 = "NetCullDistanceSquared";
  local_20 = 0x16;
  local_1c = 0;
  uVar1 = FUN_14001a6c0(&local_28,1);
  DAT_14c999468 = (ulonglong)uVar1;
  local_28 = "RoleGroup";
  local_20 = 9;
  local_1c = 0;
  uVar1 = FUN_14001a6c0(&local_28,1);
  DAT_14c999470 = (ulonglong)uVar1;
  local_48._0_4_ = 0;
  FUN_14153156c(&DAT_14c999478,L"net.Iris.UseNativeFastArray",&DAT_14c75f438,
                L"Enable or disable IrisNativeFastArray.");
  atexit(FUN_142a6f318);
  local_48._0_4_ = 0;
  FUN_14153156c(&DAT_14c999488,L"net.Iris.UseChangeMaskForTArray",&DAT_14c75f439,
                L"Enable or disable the use of a changemask for individual elements in TArrays. When enabled and packet loss occurs the received array may not reflect a state which was ever present on the sending side since the array won\'t be replicated atomically. Enabled by default."
               );
  atexit(FUN_142a6f35d);
  local_48._0_4_ = 0;
  FUN_14153156c(&DAT_14c999498,L"net.Iris.WarnAboutStructsWithCustomSerialization",&DAT_14c75f43a,
                L"Warn when generating descriptors for structs with custom serialization.");
  atexit(FUN_142a6f3a2);
  local_48._0_4_ = 0;
  FUN_14153156c(&DAT_14c9994a8,L"net.Iris.UseSupportsStructNetSerializerList",&DAT_14c75f43b,
                L"If enabled structs in the SupportsStructNetSerializerList will not raise warnings even if the struct has a NetSerialize/NetDeltaSerialize but has no custom NetSerializer."
               );
  atexit(FUN_142a6f3e7);
  local_48 = (ulonglong)local_48._4_4_ << 0x20;
  FUN_14153156c(&DAT_14c9994b8,
                L"net.Iris.bWarnAboutStructPropertiesWithSuspectedNotReplicatedProperties",
                &DAT_14c9994c8,
                L"Try to detect if a struct replicated as a property might contain unannotated members, disabled by default."
               );
  atexit(FUN_142a6f42c);
  DAT_14c9994d0 = 0;
  atexit(FUN_142a6f471);
  local_40 = 0;
  uStack_38 = 0;
  local_48 = 1;
  FUN_14282b410(L"/Script/IrisCore",&PTR_FUN_149f98670,1,&PTR_FUN_149f98640);
  local_48 = local_48 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14c999510,L"net.Iris.PruneReplicationStateDescriptorsWithArchetype",
                &DAT_14c75f43c,
                L"If true, we will invalidate registered descriptors if archetype is no longer resolvable, otherwise we will keep them around until CDO is no longer valid."
               );
  atexit(FUN_142a722b1);
  local_48 = local_48 & 0xffffffff00000000;
  FUN_141471170(&DAT_14c999520,L"net.UnreliableRPCQueueSize",&DAT_14c75f440,
                L"Maximum number of unreliable RPCs queued per object. If more RPCs are queued then older ones will be dropped."
               );
  atexit(FUN_142a72ac3);
  local_48 = local_48 & 0xffffffff00000000;
  FUN_141471170(&DAT_14c999530,L"net.ReliableRPCQueueSize",&DAT_14c75f444,
                L"Maximum number of reliable RPCs queued per object. This is in addition to the send window size. This is to support very large RPCs that are split into smaller pieces."
               );
  atexit(FUN_142a72b08);
  local_48 = local_48 & 0xffffffff00000000;
  FUN_141471170(&DAT_14c999540,L"net.ClientToServerUnreliableRPCQueueSize",&DAT_14c75f448,
                L"Maximum number of unreliable RPCs queued for sending from the client to the server. If more RPCs are queued then older ones will be dropped."
               );
  atexit(FUN_142a72b4d);
  local_48 = local_48 & 0xffffffff00000000;
  FUN_141471170(&DAT_14c999550,L"net.MaxSimultaneousObjectsWithRPCs",&DAT_14c75f44c,
                L"Maximum number of objects that can have unsent RPCs at the same time. ");
  atexit(FUN_142a72b92);
  local_28 = "Unreliable attachment queue full";
  local_20 = 0x20;
  local_1c = 0;
  uVar1 = FUN_14001a6c0(&local_28,1);
  DAT_14c999560 = (ulonglong)uVar1;
  local_28 = "Unsupported NetBlob type";
  local_20 = 0x18;
  local_1c = 0;
  uVar1 = FUN_14001a6c0(&local_28,1);
  _DAT_14c999568 = (ulonglong)uVar1;
  local_28 = "Too many objects being targeted by RPCs at the same time.";
  local_20 = 0x39;
  local_1c = 0;
  uVar1 = FUN_14001a6c0(&local_28,1);
  DAT_14c999570 = (ulonglong)uVar1;
  local_48 = local_48 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14c999578,L"net.Iris.EnableUpdateObjectsWithDirtyConditionals",&DAT_14c75f450,
                L"Enable the updating subobjects with conditionals.");
  atexit(FUN_142a736dc);
  local_48 = local_48 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14c999588,L"net.Iris.EnableDeltaCompression",&DAT_14c75f451,
                L"Enable delta compression for replicated objects. Default is true.");
  atexit(FUN_142a7563c);
  local_48 = local_48 & 0xffffffff00000000;
  FUN_141471170(&DAT_14c999598,L"net.Iris.MinimumNumberOfFramesBetweenBaselines",&DAT_14c75f454,
                L"Minimum number of frames between creation of new delta compression baselines for an object. Default is 60."
               );
  atexit(FUN_142a75681);
  local_48 = local_48 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14c9995a8,L"net.iris.ForceFullDequantizeAndApply",&DAT_14c9995b8,
                L"When enabled a full dequantize of dirty states will be used when applying received statedata regardless of traits set in the fragments."
               );
  atexit(FUN_142a75f67);
  local_48 = local_48 & 0xffffffff00000000;
  FUN_141471170(&DAT_14c9995c0,L"net.Iris.EnsureIfNumGroupMembershipsExceeds",&DAT_14c75f458,
                L"If set to a positive number we will warn and ensure if an object is added to a high number of groups."
               );
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    atexit(FUN_142a7763b);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_68);
}



// FUNCTION 142a78594 FUN_142a78594 body=69 status=ok
// SIG undefined FUN_142a78594(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a78594(void)

{
  _DAT_14c999608 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a785d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c999610,1);
  return;
}



// FUNCTION 142a785d9 FUN_142a785d9 body=69 status=ok
// SIG undefined FUN_142a785d9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a785d9(void)

{
  _DAT_14c999620 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a7861b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c999628,1);
  return;
}



// FUNCTION 142a7861e FUN_142a7861e body=271 status=ok
// SIG undefined FUN_142a7861e(void)

void FUN_142a7861e(longlong param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  
  *(undefined4 *)(param_1 + 0x70) = param_2;
  FUN_146f20e72();
  uVar2 = *(uint *)(param_1 + 0x48);
  iVar12 = 0;
  cVar1 = *(char *)(param_1 + 0x50);
  if ((ulonglong)uVar2 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x40);
    uVar11 = 0;
    do {
      uVar9 = 0xffffffff;
      if (uVar11 == uVar2 - 1) {
        uVar9 = 0xffffffff >> (-cVar1 & 0x1fU);
      }
      uVar9 = uVar9 & *(uint *)(lVar4 + uVar11 * 4);
      iVar8 = iVar12;
      if (uVar9 != 0) {
        do {
          if ((uVar9 & 1) != 0) {
            FUN_146f216c2(param_1,(longlong)iVar8 * 0x160 + *(longlong *)(param_1 + 0x30),param_2);
          }
          bVar7 = 1 < uVar9;
          uVar9 = uVar9 >> 1;
          iVar8 = iVar8 + 1;
        } while (bVar7);
      }
      uVar11 = uVar11 + 1;
      iVar12 = iVar12 + 0x20;
    } while (uVar11 != uVar2);
  }
  iVar12 = *(int *)(param_1 + 0x268);
  if ((longlong)iVar12 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x240);
    uVar3 = *(undefined4 *)(param_1 + 0x248);
    lVar5 = *(longlong *)(param_1 + 0x260);
    lVar10 = 0;
    do {
      plVar6 = *(longlong **)(lVar5 + lVar10);
      FUN_146efc8cc(plVar6 + 5,param_2);
      plVar6[10] = lVar4;
      *(undefined4 *)(plVar6 + 0xb) = uVar3;
      (**(code **)(*plVar6 + 0x2f8))(plVar6,param_2);
      lVar10 = lVar10 + 0x18;
    } while ((longlong)iVar12 * 0x18 != lVar10);
  }
  return;
}



// FUNCTION 142a7872e FUN_142a7872e body=311 status=ok
// SIG undefined FUN_142a7872e(void)

void FUN_142a7872e(longlong param_1)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  FUN_142a78866();
  FUN_142a78950(param_1);
  FUN_142a79196(param_1);
  FUN_142a7982e(param_1);
  FUN_142a79bb2(param_1);
  FUN_142a79f18(param_1);
  FUN_142a7a604(param_1);
  FUN_146f21456();
  if ((*(byte *)(param_1 + 0x2e0) & 0x10) == 0) {
    uVar2 = *(uint *)(param_1 + 0x48);
    iVar7 = 0;
    cVar1 = *(char *)(param_1 + 0x50);
    if ((ulonglong)uVar2 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x40);
      uVar10 = 0;
      do {
        uVar11 = 0xffffffff;
        if (uVar10 == uVar2 - 1) {
          uVar11 = 0xffffffff >> (-cVar1 & 0x1fU);
        }
        uVar11 = uVar11 & *(uint *)(lVar3 + uVar10 * 4);
        iVar8 = iVar7;
        if (uVar11 != 0) {
          do {
            if ((uVar11 & 1) != 0) {
              lVar4 = *(longlong *)(param_1 + 0x30);
              lVar6 = (longlong)iVar8 * 0x160;
              uVar9 = (ulonglong)*(uint *)(lVar4 + 0x68 + lVar6);
              if ((uVar9 != 0) && (*(int *)(lVar4 + 0x38 + lVar6) != 0)) {
                memcpy(*(void **)(lVar4 + lVar6 + 0x60),*(void **)(lVar4 + lVar6 + 0x30),uVar9 << 2)
                ;
              }
            }
            bVar5 = 1 < uVar11;
            uVar11 = uVar11 >> 1;
            iVar8 = iVar8 + 1;
          } while (bVar5);
        }
        uVar10 = uVar10 + 1;
        iVar7 = iVar7 + 0x20;
      } while (uVar10 != uVar2);
    }
  }
  else {
    FUN_142a7aa44(param_1);
    FUN_142a7ab78(param_1);
    FUN_142a7ac5c(param_1);
    FUN_142a7bc80(param_1);
  }
  FUN_142a7a7ac(param_1);
  return;
}



// FUNCTION 142a78866 FUN_142a78866 body=234 status=ok
// SIG undefined FUN_142a78866(void)

void FUN_142a78866(longlong param_1)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  
  if ((*(uint *)(param_1 + 0x2e0) & 2) != 0) {
    *(uint *)(param_1 + 0x2e0) = *(uint *)(param_1 + 0x2e0) & 0xfffffffd;
    uVar3 = *(uint *)(param_1 + 0x188);
    iVar14 = 0;
    cVar2 = *(char *)(param_1 + 400);
    if ((ulonglong)uVar3 != 0) {
      lVar7 = *(longlong *)(param_1 + 0x198);
      lVar8 = *(longlong *)(param_1 + 0x180);
      uVar12 = 0;
      do {
        uVar13 = 0xffffffff;
        if (uVar12 == uVar3 - 1) {
          uVar13 = 0xffffffff >> (-cVar2 & 0x1fU);
        }
        uVar13 = uVar13 & (*(uint *)(lVar7 + uVar12 * 4) | *(uint *)(lVar8 + uVar12 * 4));
        iVar11 = iVar14;
        if (uVar13 != 0) {
          do {
            if (((uVar13 & 1) != 0) && (uVar4 = *(uint *)(param_1 + 0x48), (ulonglong)uVar4 != 0)) {
              iVar5 = *(int *)(param_1 + 0x23c);
              iVar6 = *(int *)(*(longlong *)(param_1 + 0x108) + (longlong)iVar11 * 4);
              lVar9 = *(longlong *)(param_1 + 0xd0);
              uVar15 = 0;
              do {
                puVar1 = (uint *)((ulonglong)(uint)(iVar5 * iVar6) * 4 + lVar9 + uVar15 * 4);
                *puVar1 = *puVar1 & *(uint *)(*(longlong *)(param_1 + 0x40) + uVar15 * 4);
                uVar15 = uVar15 + 1;
              } while (uVar4 != uVar15);
            }
            bVar10 = 1 < uVar13;
            uVar13 = uVar13 >> 1;
            iVar11 = iVar11 + 1;
          } while (bVar10);
        }
        uVar12 = uVar12 + 1;
        iVar14 = iVar14 + 0x20;
      } while (uVar12 != uVar3);
    }
  }
  return;
}



// FUNCTION 142a78950 FUN_142a78950 body=2116 status=ok
// SIG undefined FUN_142a78950(void)

void FUN_142a78950(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  undefined8 *puVar6;
  byte bVar7;
  void *_Dst;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  size_t _Size;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint *puVar19;
  uint *puVar20;
  undefined1 auStack_108 [44];
  uint local_dc;
  ulonglong local_d8;
  uint *local_d0;
  ulonglong local_c8;
  uint *local_c0;
  longlong local_b8;
  ulonglong local_b0;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  void *local_80;
  int *local_78;
  uint local_70;
  int local_6c;
  longlong local_68;
  int local_60;
  int *local_58;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((*(uint *)(param_1 + 0x2e0) & 1) != 0) {
    *(uint *)(param_1 + 0x2e0) = *(uint *)(param_1 + 0x2e0) & 0xfffffffe;
    local_9c = 0xffffffff >> (-*(char *)(param_1 + 0x68) & 0x1fU);
    uVar9 = *(uint *)(param_1 + 0x60);
    _Size = 0;
    _Dst = *(void **)(param_1 + 0x58);
    if ((ulonglong)uVar9 != 0) {
      local_90 = (ulonglong)(uVar9 - 1);
      uVar11 = 0;
      uVar8 = 0;
      local_88 = (ulonglong)uVar9;
      local_80 = _Dst;
      do {
        uVar9 = 0xffffffff;
        if (uVar11 == local_90) {
          uVar9 = local_9c;
        }
        uVar9 = uVar9 & *(uint *)((longlong)local_80 + uVar11 * 4);
        uVar5 = uVar8;
        uVar18 = uVar8;
        uVar10 = uVar11;
        if (uVar9 != 0) {
          do {
            local_98 = uVar10;
            local_a4 = uVar18;
            uVar16 = uVar9;
            if ((uVar9 & 1) != 0) {
              lVar12 = *(longlong *)(param_1 + 0x10);
              local_6c = *(int *)(lVar12 + 0xe8);
              local_78 = *(int **)(lVar12 + 0xd8);
              local_70 = local_6c + 0x1fU >> 5;
              if (local_6c == 0) {
                local_78 = &local_6c;
              }
              lVar3 = *(longlong *)(param_1 + 0x30);
              plVar1 = (longlong *)(lVar3 + (longlong)(int)uVar5 * 0x160);
              local_dc = uVar5;
              local_a0 = uVar9;
              FUN_146f216c2(param_1,plVar1,*(undefined4 *)(lVar12 + 0xc));
              uVar11 = (ulonglong)*(uint *)(lVar3 + 8 + (longlong)(int)uVar5 * 0x160);
              if ((uVar11 != 0) && (local_70 != 0)) {
                memcpy((void *)*plVar1,local_78,uVar11 << 2);
              }
              *(uint *)*plVar1 = *(uint *)*plVar1 & 0xfffffffe;
              local_d8 = (ulonglong)*(uint *)(param_1 + 0x188);
              if (local_d8 != 0) {
                local_c0 = *(uint **)(param_1 + 0x180);
                local_b0 = (ulonglong)(*(uint *)(param_1 + 0x188) - 1);
                bVar7 = (byte)local_dc;
                uVar9 = local_dc >> 5;
                uVar11 = 0;
                local_c8 = local_c8 & 0xffffffff00000000;
                local_b8._0_4_ = 0xffffffff >> (-*(char *)(param_1 + 400) & 0x1fU);
                do {
                  uVar8 = 0xffffffff;
                  if (uVar11 == local_b0) {
                    uVar8 = (uint)local_b8;
                  }
                  if ((uVar8 & local_c0[uVar11]) != 0) {
                    uVar10 = local_c8 & 0xffffffff;
                    uVar8 = uVar8 & local_c0[uVar11];
                    do {
                      if (((uVar8 & 1) != 0) &&
                         ((*(uint *)((ulonglong)
                                     (uint)(*(int *)(param_1 + 0x23c) *
                                           *(int *)(*(longlong *)(param_1 + 0x108) +
                                                   (longlong)(int)uVar10 * 4)) * 4 +
                                     *(longlong *)(param_1 + 0xd0) + (ulonglong)uVar9 * 4) &
                          1 << (bVar7 & 0x1f)) == 0)) {
                        puVar6 = (undefined8 *)FUN_146f1a3d4(*(undefined8 *)(param_1 + 0x20),uVar10)
                        ;
                        if ((longlong)*(int *)(puVar6 + 1) != 0) {
                          puVar19 = (uint *)*puVar6;
                          local_d0 = puVar19 + *(int *)(puVar6 + 1);
                          do {
                            puVar20 = (uint *)(plVar1[3] + (ulonglong)(*puVar19 >> 5) * 4);
                            *puVar20 = *puVar20 | 1 << ((byte)*puVar19 & 0x1f);
                            FUN_146f1b984(*(longlong *)(param_1 + 0x10) + 0x300,&local_58);
                            if ((longlong)(int)local_50 != 0) {
                              lVar12 = 0;
                              do {
                                puVar20 = (uint *)(plVar1[3] +
                                                  (ulonglong)
                                                  (*(uint *)((longlong)local_58 + lVar12) >> 5) * 4)
                                ;
                                *puVar20 = *puVar20 |
                                           1 << ((byte)*(uint *)((longlong)local_58 + lVar12) & 0x1f
                                                );
                                lVar12 = lVar12 + 4;
                              } while ((longlong)(int)local_50 * 4 != lVar12);
                            }
                            puVar19 = puVar19 + 1;
                          } while (puVar19 != local_d0);
                        }
                      }
                      uVar10 = (ulonglong)((int)uVar10 + 1);
                      bVar4 = 1 < uVar8;
                      uVar8 = uVar8 >> 1;
                    } while (bVar4);
                  }
                  uVar11 = uVar11 + 1;
                  local_c8 = CONCAT44(local_c8._4_4_,(uint)local_c8 + 0x20);
                } while (uVar11 != local_d8);
              }
              local_d8 = (ulonglong)*(uint *)(param_1 + 0x1a0);
              local_b8 = CONCAT44(local_b8._4_4_,0xffffffff >> (-*(char *)(param_1 + 0x1a8) & 0x1fU)
                                 );
              if (local_d8 != 0) {
                local_c0 = *(uint **)(param_1 + 0x198);
                local_b0 = (ulonglong)(*(uint *)(param_1 + 0x1a0) - 1);
                bVar7 = (byte)local_dc;
                uVar9 = local_dc >> 5;
                uVar11 = 0;
                iVar17 = 0;
                do {
                  uVar8 = 0xffffffff;
                  if (uVar11 == local_b0) {
                    uVar8 = (uint)local_b8;
                  }
                  uVar10 = (ulonglong)(uVar8 & local_c0[uVar11]);
                  iVar14 = iVar17;
                  if ((uVar8 & local_c0[uVar11]) != 0) {
                    do {
                      if (((uVar10 & 1) != 0) &&
                         ((*(uint *)((ulonglong)
                                     (uint)(*(int *)(param_1 + 0x23c) *
                                           *(int *)(*(longlong *)(param_1 + 0x108) +
                                                   (longlong)iVar17 * 4)) * 4 +
                                     *(longlong *)(param_1 + 0xd0) + (ulonglong)uVar9 * 4) &
                          1 << (bVar7 & 0x1f)) != 0)) {
                        local_d0 = (uint *)CONCAT44(local_d0._4_4_,iVar14);
                        local_4c = *(int *)(*(longlong *)(param_1 + 0x10) + 0x178);
                        local_58 = *(int **)(*(longlong *)(param_1 + 0x10) + 0x168);
                        local_50 = local_4c + 0x1fU >> 5;
                        if (local_4c == 0) {
                          local_58 = &local_4c;
                        }
                        local_c8 = uVar11;
                        puVar6 = (undefined8 *)FUN_146f1a3d4(*(undefined8 *)(param_1 + 0x20),iVar17)
                        ;
                        if ((longlong)*(int *)(puVar6 + 1) != 0) {
                          puVar19 = (uint *)*puVar6;
                          puVar20 = puVar19 + *(int *)(puVar6 + 1);
                          do {
                            uVar8 = *puVar19;
                            if (((uint)local_58[uVar8 >> 5] >> (uVar8 & 0x1f) & 1) == 0) {
                              puVar2 = (uint *)(plVar1[9] + (ulonglong)(uVar8 >> 5) * 4);
                              *puVar2 = *puVar2 | 1 << ((byte)uVar8 & 0x1f);
                              FUN_146f1b984(*(longlong *)(param_1 + 0x10) + 0x300,&local_68);
                              if ((longlong)local_60 != 0) {
                                lVar12 = 0;
                                do {
                                  puVar2 = (uint *)(plVar1[9] +
                                                   (ulonglong)(*(uint *)(local_68 + lVar12) >> 5) *
                                                   4);
                                  *puVar2 = *puVar2 | 1 << ((byte)*(uint *)(local_68 + lVar12) &
                                                           0x1f);
                                  lVar12 = lVar12 + 4;
                                } while ((longlong)local_60 * 4 != lVar12);
                              }
                            }
                            puVar19 = puVar19 + 1;
                          } while (puVar19 != puVar20);
                        }
                        uVar11 = local_c8;
                        iVar14 = (int)local_d0;
                      }
                      uVar8 = (uint)uVar10;
                      uVar10 = uVar10 >> 1;
                      iVar17 = iVar17 + 1;
                    } while (1 < uVar8);
                  }
                  uVar11 = uVar11 + 1;
                  iVar17 = iVar14 + 0x20;
                } while (uVar11 != local_d8);
              }
              local_d0 = (uint *)(ulonglong)*(uint *)(param_1 + 0xb0);
              local_d8 = CONCAT44(local_d8._4_4_,0xffffffff >> (-*(char *)(param_1 + 0xb8) & 0x1fU))
              ;
              if (local_d0 != (uint *)0x0) {
                local_b8 = *(longlong *)(param_1 + 0xa8);
                local_c0 = (uint *)(ulonglong)(*(uint *)(param_1 + 0xb0) - 1);
                puVar19 = (uint *)0x0;
                uVar11 = 0;
                do {
                  iVar17 = (int)uVar11;
                  uVar9 = 0xffffffff;
                  if (puVar19 == local_c0) {
                    uVar9 = (uint)local_d8;
                  }
                  uVar9 = uVar9 & *(uint *)(local_b8 + (longlong)puVar19 * 4);
                  if (uVar9 != 0) {
                    local_c8 = CONCAT44(local_c8._4_4_,iVar17);
                    uVar10 = uVar11;
                    do {
                      uVar8 = local_dc;
                      uVar5 = (uint)uVar10;
                      if ((uVar9 & 1) != 0) {
                        uVar16 = (uint)*(ushort *)
                                        (*(longlong *)(param_1 + 0xc0) + (longlong)(int)uVar5 * 2);
                        uVar18 = 1 << ((byte)uVar10 & 0x1f);
                        if (local_dc != uVar16) {
                          uVar18 = 0;
                        }
                        *(uint *)(*plVar1 + (uVar10 >> 5) * 4) =
                             *(uint *)(*plVar1 + (uVar10 >> 5) * 4) & ~(1 << (uVar5 & 0x1f)) |
                             uVar18;
                        FUN_146f1b984(*(longlong *)(param_1 + 0x10) + 0x300,&local_58);
                        if ((longlong)(int)local_50 != 0) {
                          lVar12 = 0;
                          do {
                            uVar18 = *(uint *)((longlong)local_58 + lVar12);
                            uVar15 = 1 << ((byte)uVar18 & 0x1f);
                            if (uVar8 != uVar16) {
                              uVar15 = 0;
                            }
                            *(uint *)(*plVar1 + (ulonglong)(uVar18 >> 5) * 4) =
                                 *(uint *)(*plVar1 + (ulonglong)(uVar18 >> 5) * 4) &
                                 ~(1 << (uVar18 & 0x1f)) | uVar15;
                            lVar12 = lVar12 + 4;
                          } while ((longlong)(int)local_50 * 4 != lVar12);
                        }
                        uVar11 = local_c8 & 0xffffffff;
                      }
                      iVar17 = (int)uVar11;
                      uVar10 = (ulonglong)(uVar5 + 1);
                      bVar4 = 1 < uVar9;
                      uVar9 = uVar9 >> 1;
                    } while (bVar4);
                  }
                  puVar19 = (uint *)((longlong)puVar19 + 1);
                  uVar11 = (ulonglong)(iVar17 + 0x20);
                } while (puVar19 != local_d0);
              }
              local_d8 = (ulonglong)*(uint *)(param_1 + 0xf8);
              local_b8 = CONCAT44(local_b8._4_4_,0xffffffff >> (-*(char *)(param_1 + 0x100) & 0x1fU)
                                 );
              if (local_d8 != 0) {
                local_c0 = *(uint **)(param_1 + 0xf0);
                local_b0 = (ulonglong)(*(uint *)(param_1 + 0xf8) - 1);
                local_c8 = CONCAT44(local_c8._4_4_,1 << ((byte)local_dc & 0x1f));
                local_d0 = (uint *)(ulonglong)(local_dc >> 5);
                uVar10 = 0;
                uVar11 = 0;
                do {
                  uVar9 = 0xffffffff;
                  if (uVar10 == local_b0) {
                    uVar9 = (uint)local_b8;
                  }
                  uVar9 = uVar9 & local_c0[uVar10];
                  iVar17 = (int)uVar11;
                  if (uVar9 != 0) {
                    do {
                      uVar8 = (uint)uVar11;
                      if ((uVar9 & 1) != 0) {
                        uVar5 = 1 << ((byte)uVar11 & 0x1f);
                        uVar18 = *(uint *)((ulonglong)
                                           (uint)(*(int *)(param_1 + 0x23c) *
                                                 *(int *)(*(longlong *)(param_1 + 0x228) +
                                                         (longlong)(int)uVar8 * 4)) * 4 +
                                           *(longlong *)(param_1 + 0xd0) + (longlong)local_d0 * 4) &
                                 (uint)local_c8;
                        if (uVar18 == 0) {
                          uVar5 = 0;
                        }
                        *(uint *)(*plVar1 + (uVar11 >> 5) * 4) =
                             *(uint *)(*plVar1 + (uVar11 >> 5) * 4) & ~(1 << (uVar8 & 0x1f)) | uVar5
                        ;
                        FUN_146f1b984(*(longlong *)(param_1 + 0x10) + 0x300);
                        if ((longlong)(int)local_50 != 0) {
                          lVar12 = 0;
                          do {
                            uVar5 = *(uint *)((longlong)local_58 + lVar12);
                            uVar16 = 1 << ((byte)uVar5 & 0x1f);
                            if (uVar18 == 0) {
                              uVar16 = 0;
                            }
                            *(uint *)(*plVar1 + (ulonglong)(uVar5 >> 5) * 4) =
                                 *(uint *)(*plVar1 + (ulonglong)(uVar5 >> 5) * 4) &
                                 ~(1 << (uVar5 & 0x1f)) | uVar16;
                            lVar12 = lVar12 + 4;
                          } while ((longlong)(int)local_50 * 4 != lVar12);
                        }
                      }
                      uVar11 = (ulonglong)(uVar8 + 1);
                      bVar4 = 1 < uVar9;
                      uVar9 = uVar9 >> 1;
                    } while (bVar4);
                  }
                  uVar10 = uVar10 + 1;
                  uVar11 = (ulonglong)(iVar17 + 0x20);
                } while (uVar10 != local_d8);
              }
              uVar11 = local_98;
              uVar16 = local_a0;
              uVar8 = local_a4;
              uVar10 = (ulonglong)*(uint *)(plVar1 + 7);
              if ((uVar10 != 0) && ((int)plVar1[1] != 0)) {
                memcpy((void *)plVar1[6],(void *)*plVar1,uVar10 << 2);
                uVar10 = (ulonglong)*(uint *)(plVar1 + 7);
              }
              uVar5 = local_dc;
              if ((int)uVar10 != 0) {
                lVar12 = plVar1[3];
                lVar3 = plVar1[6];
                uVar13 = 0;
                do {
                  puVar19 = (uint *)(lVar3 + uVar13 * 4);
                  *puVar19 = *puVar19 & ~*(uint *)(lVar12 + uVar13 * 4);
                  uVar13 = uVar13 + 1;
                } while (uVar10 != uVar13);
              }
            }
            uVar9 = uVar16 >> 1;
            uVar5 = uVar5 + 1;
            uVar18 = local_a4;
            uVar10 = local_98;
          } while (1 < uVar16);
        }
        uVar11 = uVar11 + 1;
        uVar8 = uVar8 + 0x20;
      } while (uVar11 != local_88);
      _Dst = *(void **)(param_1 + 0x58);
      _Size = (longlong)*(int *)(param_1 + 0x60) << 2;
    }
    memset(_Dst,0,_Size);
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a79196 FUN_142a79196 body=1686 status=ok
// SIG undefined FUN_142a79196(void)

void FUN_142a79196(longlong param_1)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint *puVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  bool bVar23;
  undefined1 auStack_138 [36];
  uint local_114;
  ulonglong local_110;
  ulonglong local_108;
  uint *local_100;
  int *local_f8;
  longlong *local_f0;
  uint local_e4;
  int local_e0;
  uint local_dc;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  int *local_b8;
  uint local_b0;
  int local_ac;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  int local_88;
  int *local_80;
  uint local_78;
  int local_74;
  int *local_70;
  uint local_68;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar21 = *(longlong *)(param_1 + 0x10);
  local_88 = *(int *)(lVar21 + 0xe8);
  local_70 = *(int **)(lVar21 + 0xd8);
  local_68 = local_88 + 0x1fU >> 5;
  if (local_88 == 0) {
    local_70 = &local_64;
  }
  local_74 = *(int *)(lVar21 + 0x100);
  local_80 = *(int **)(lVar21 + 0xf0);
  local_78 = local_74 + 0x1fU >> 5;
  if (local_74 == 0) {
    local_80 = &local_74;
  }
  local_98 = 0;
  uStack_90 = 0;
  local_64 = local_88;
  FUN_146f14ba4();
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_14017c08a(&local_a8,*(undefined4 *)(param_1 + 0x74));
  uVar11 = *(uint *)(param_1 + 0x74);
  if ((ulonglong)uVar11 == 0) goto LAB_142a79698;
  uVar9 = *(ulonglong *)(param_1 + 0x78);
  lVar21 = *(longlong *)(param_1 + 0x90);
  uVar14 = 0;
  uVar6 = 0;
  do {
    uVar20 = local_70[uVar14];
    uVar7 = local_80[uVar14];
    uVar17 = (*(uint *)(lVar21 + uVar14 * 4) | *(uint *)(uVar9 + uVar14 * 4)) & ~(uVar7 | uVar20);
    *(uint *)(local_98 + uVar14 * 4) = uVar17 | uVar7;
    uVar17 = uVar7 ^ uVar20 | uVar17;
    iVar12 = (int)uVar6;
    *(int *)(local_a8 + uVar6 * 4) = (int)uVar14;
    uVar20 = (uint)(uVar17 != 0) + iVar12;
    uVar6 = (ulonglong)uVar20;
    uVar14 = uVar14 + 1;
  } while (uVar11 != uVar14);
  if (uVar20 == 0) goto LAB_142a79698;
  local_c8 = *(longlong *)(param_1 + 0xa8);
  local_d0 = *(longlong *)(param_1 + 0x2c8);
  local_ac = *(int *)(*(longlong *)(param_1 + 0x10) + 0x178);
  local_b8 = *(int **)(*(longlong *)(param_1 + 0x10) + 0x168);
  local_b0 = local_ac + 0x1fU >> 5;
  if (local_ac == 0) {
    local_b8 = &local_ac;
  }
  local_f0 = (longlong *)(param_1 + 0x1c8);
  uVar11 = 0;
  uVar7 = 0;
  local_f8 = local_70;
  local_d8 = local_98;
  local_108 = uVar9;
  local_e4 = uVar17;
  local_e0 = iVar12;
  local_dc = uVar20;
  local_c0 = lVar21;
  do {
    uVar20 = *(uint *)(local_a8 + (longlong)(int)uVar7 * 4);
    uVar9 = (ulonglong)uVar20;
    uVar17 = *(uint *)(local_d8 + uVar9 * 4);
    uVar10 = local_f8[uVar9];
    puVar1 = (uint *)(local_108 + uVar9 * 4);
    *puVar1 = *puVar1 & uVar10;
    puVar1 = (uint *)(local_c8 + uVar9 * 4);
    *puVar1 = *puVar1 & uVar10;
    puVar1 = (uint *)(local_c0 + uVar9 * 4);
    *puVar1 = *puVar1 & uVar10;
    local_110 = CONCAT44(local_110._4_4_,uVar20 << 5);
    local_100 = (uint *)CONCAT44(local_100._4_4_,uVar17);
    local_114 = uVar7;
    for (uVar17 = ~uVar10 & uVar17; uVar17 != 0; uVar17 = uVar17 - 1 & uVar17) {
      uVar20 = 0;
      if (uVar17 != 0) {
        for (; (uVar17 >> uVar20 & 1) == 0; uVar20 = uVar20 + 1) {
        }
      }
      uVar20 = uVar20 | (uint)local_110;
      *(undefined2 *)(*(longlong *)(param_1 + 0xc0) + (longlong)(int)uVar20 * 2) = 0;
      FUN_146f2175a(param_1,uVar20);
      if (*(char *)(*(longlong *)(param_1 + 0x250) + (longlong)(int)uVar20) != -1) {
        FUN_142a7c062(param_1,uVar20);
      }
    }
    puVar1 = (uint *)(local_d0 + uVar9 * 4);
    *puVar1 = *puVar1 | uVar10 & ~(uint)local_100;
    uVar20 = uVar10 & ~(uint)local_100 & local_b8[uVar9];
    if (uVar20 != 0) {
      do {
        if (uVar20 == 0) {
          iVar12 = 0x20;
        }
        else {
          iVar12 = 0;
          if (uVar20 != 0) {
            for (; (uVar20 >> iVar12 & 1) == 0; iVar12 = iVar12 + 1) {
            }
          }
        }
        uVar7 = *(uint *)(*(longlong *)
                           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x270) +
                           (longlong)((int)(iVar12 + (uint)local_110) / 100) * 8) + 0x28 +
                         (longlong)((int)(iVar12 + (uint)local_110) % 100) * 0x38);
        if (uVar7 != 0 && uVar7 != uVar11) {
          uVar9 = (ulonglong)(uVar7 >> 5);
          uVar17 = 1 << ((byte)uVar7 & 0x1f);
          puVar1 = (uint *)(*(longlong *)(param_1 + 0x288) + uVar9 * 4);
          *puVar1 = *puVar1 | uVar17;
          if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)(*(longlong *)(param_1 + 0x20) + 0x48))) {
            lVar21 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x40) + (ulonglong)uVar7 * 0x18;
            iVar12 = *(int *)(lVar21 + 0x10);
            lVar19 = *(longlong *)(lVar21 + 8);
            if (*(longlong *)(lVar21 + 8) == 0) {
              lVar19 = lVar21;
            }
            if ((longlong)iVar12 != 0) {
              lVar21 = 0;
              do {
                uVar11 = *(uint *)(lVar19 + lVar21);
                uVar14 = (ulonglong)(uVar11 >> 5);
                uVar10 = 1 << ((byte)uVar11 & 0x1f);
                uVar15 = 0x20;
                plVar8 = (longlong *)(param_1 + 0x1b0);
                if (((*(uint *)(*(longlong *)(param_1 + 0x180) + uVar14 * 4) >> (uVar11 & 0x1f) & 1)
                     != 0) ||
                   (uVar15 = 0x40, plVar8 = local_f0,
                   (*(uint *)(*(longlong *)(param_1 + 0x198) + uVar14 * 4) & uVar10) != 0)) {
                  puVar1 = (uint *)(*plVar8 + uVar14 * 4);
                  *puVar1 = *puVar1 | uVar10;
                  *(uint *)(param_1 + 0x2e0) = *(uint *)(param_1 + 0x2e0) | uVar15;
                }
                lVar21 = lVar21 + 4;
              } while ((longlong)iVar12 * 4 != lVar21);
            }
          }
          uVar11 = uVar7;
          if ((local_80[uVar9] & uVar17) != 0) {
            if (*(short *)(*(longlong *)(param_1 + 0xc0) + (longlong)(int)uVar7 * 2) != 0) {
              *(byte *)(param_1 + 0x2e0) = *(byte *)(param_1 + 0x2e0) | 8;
              puVar1 = (uint *)(*(longlong *)(param_1 + 0x90) + uVar9 * 4);
              *puVar1 = *puVar1 | uVar17;
            }
            if (((*(uint *)(*(longlong *)(param_1 + 0xa8) + uVar9 * 4) & uVar17) != 0) ||
               ((*(uint *)(*(longlong *)(param_1 + 0xf0) + uVar9 * 4) & uVar17) != 0)) {
              *(byte *)(param_1 + 0x2e0) = *(byte *)(param_1 + 0x2e0) | 4;
              puVar1 = (uint *)(*(longlong *)(param_1 + 0x78) + uVar9 * 4);
              *puVar1 = *puVar1 | uVar17;
            }
          }
        }
        bVar23 = uVar20 != (-uVar20 & uVar20);
        uVar20 = -uVar20 & uVar20 ^ uVar20;
      } while (bVar23);
    }
    uVar7 = local_114 + 1;
  } while (uVar7 != local_dc);
  uVar11 = *(uint *)(param_1 + 0x50);
  uVar9 = (ulonglong)uVar11;
  uVar20 = uVar11 + 0x1f >> 5;
  puVar1 = *(uint **)(param_1 + 0x40);
  if (uVar9 == 0) {
LAB_142a7960c:
    plVar8 = (longlong *)0x0;
    lVar21 = 0;
    puVar5 = puVar1;
    do {
      puVar5 = puVar5 + 1;
      uVar14 = uVar9;
      if ((ulonglong)((uVar20 - 1) + (uint)(uVar20 == 0)) << 5 == lVar21) goto LAB_142a79654;
      uVar7 = *puVar5;
      lVar21 = lVar21 + 0x20;
    } while (uVar7 == 0);
  }
  else {
    uVar7 = *puVar1;
    lVar21 = 0;
    if (uVar7 == 0) goto LAB_142a7960c;
  }
  uVar17 = 0;
  if (uVar7 != 0) {
    for (; (uVar7 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
    }
  }
  uVar17 = uVar17 | (uint)lVar21;
  uVar14 = (ulonglong)uVar17;
  if (uVar11 <= uVar17) {
    uVar14 = uVar9;
  }
  plVar8 = (longlong *)(ulonglong)(uVar7 - 1 & uVar7);
LAB_142a79654:
  uVar6 = (ulonglong)(uVar11 >> 5);
  uVar16 = (ulonglong)uVar20;
  uVar20 = uVar11;
  do {
    uVar6 = uVar6 + 1;
    uVar7 = uVar11;
    if (uVar16 <= uVar6) goto LAB_142a7968b;
    uVar17 = puVar1[uVar6];
    uVar20 = uVar20 + 0x20;
  } while (uVar17 == 0);
  uVar7 = 0;
  if (uVar17 != 0) {
    for (; (uVar17 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
    }
  }
  uVar7 = uVar7 | uVar20 & 0xffffffe0;
  if (uVar11 <= uVar7) {
    uVar7 = uVar11;
  }
LAB_142a7968b:
  if ((uint)uVar14 != uVar7) {
    do {
      local_f0 = plVar8;
      lVar21 = *(longlong *)(param_1 + 0x30);
      uVar20 = (uint)uVar14;
      lVar19 = (longlong)(int)uVar20 * 0x160;
      if ((*(byte *)(param_1 + 0x2e0) & 0x10) == 0) {
        lVar22 = 0;
        lVar13 = 0;
      }
      else {
        lVar22 = *(longlong *)(lVar21 + lVar19 + 0x78);
        lVar13 = *(longlong *)(lVar21 + lVar19 + 0xa8);
      }
      lVar2 = *(longlong *)(lVar21 + lVar19);
      lVar3 = *(longlong *)(lVar21 + 0x18 + lVar19);
      lVar4 = *(longlong *)(lVar21 + 0x48 + lVar19);
      lVar21 = *(longlong *)(lVar21 + 0x30 + lVar19);
      iVar12 = 0;
      do {
        uVar6 = (ulonglong)*(uint *)(local_a8 + (longlong)iVar12 * 4);
        uVar17 = *(uint *)(local_d8 + uVar6 * 4);
        uVar10 = local_f8[uVar6];
        uVar18 = (~uVar17 | *(uint *)(lVar2 + uVar6 * 4)) & uVar10;
        *(uint *)(lVar2 + uVar6 * 4) = uVar18;
        uVar15 = *(uint *)(lVar3 + uVar6 * 4) & uVar10;
        *(uint *)(lVar3 + uVar6 * 4) = uVar15;
        puVar5 = (uint *)(lVar4 + uVar6 * 4);
        *puVar5 = *puVar5 & uVar10;
        *(uint *)(lVar21 + uVar6 * 4) = ~uVar15 & uVar18;
        if ((*(byte *)(param_1 + 0x2e0) & 0x10) != 0) {
          uVar17 = uVar17 | ~uVar10;
          puVar5 = (uint *)(lVar22 + uVar6 * 4);
          *puVar5 = *puVar5 & uVar17;
          puVar5 = (uint *)(lVar13 + uVar6 * 4);
          *puVar5 = *puVar5 & uVar17;
        }
        iVar12 = iVar12 + 1;
      } while ((local_e0 + 1) - (uint)(local_e4 == 0) != iVar12);
      uVar17 = (uint)local_f0;
      if (uVar17 == 0) {
        uVar6 = uVar14 >> 5;
        do {
          uVar6 = uVar6 + 1;
          if (uVar16 <= uVar6) {
            plVar8 = (longlong *)0x0;
            uVar14 = uVar9;
            goto LAB_142a79817;
          }
          uVar17 = puVar1[uVar6];
          uVar20 = (int)uVar14 + 0x20;
          uVar14 = (ulonglong)uVar20;
        } while (uVar17 == 0);
      }
      uVar10 = 0;
      if (uVar17 != 0) {
        for (; (uVar17 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
        }
      }
      uVar10 = uVar10 | uVar20 & 0xffffffe0;
      if (uVar11 <= uVar10) {
        uVar10 = uVar11;
      }
      plVar8 = (longlong *)(ulonglong)(uVar17 - 1 & uVar17);
      uVar14 = (ulonglong)uVar10;
LAB_142a79817:
      local_114 = uVar7;
      local_110 = uVar9;
      local_108 = uVar16;
      local_100 = puVar1;
    } while ((uint)uVar14 != uVar7);
  }
LAB_142a79698:
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a7982e FUN_142a7982e body=899 status=ok
// SIG undefined FUN_142a7982e(void)

void FUN_142a7982e(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  byte bVar6;
  void *_Dst;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  size_t _Size;
  int iVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  longlong lVar15;
  undefined1 auStack_108 [40];
  uint local_e0;
  uint local_dc;
  int local_d8;
  int local_d4;
  uint local_d0;
  uint local_cc;
  ulonglong local_c8;
  undefined8 *local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  void *local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  longlong local_90;
  ulonglong local_88;
  longlong local_80;
  uint *local_78;
  longlong local_70;
  int *local_68;
  uint local_60;
  int local_5c;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar7 = *(uint *)(param_1 + 0x2e0);
  if ((uVar7 & 0x20) != 0) {
    local_dc = 0xffffffff >> (-*(char *)(param_1 + 0x1c0) & 0x1fU);
    uVar8 = *(uint *)(param_1 + 0x1b8);
    _Size = 0;
    _Dst = *(void **)(param_1 + 0x1b0);
    if ((ulonglong)uVar8 != 0) {
      local_b8 = (ulonglong)(uVar8 - 1);
      uVar5 = 0;
      iVar10 = 0;
      local_b0 = (ulonglong)uVar8;
      local_a8 = _Dst;
      local_80 = param_1;
      do {
        uVar7 = 0xffffffff;
        if (uVar5 == local_b8) {
          uVar7 = local_dc;
        }
        uVar7 = uVar7 & *(uint *)((longlong)_Dst + uVar5 * 4);
        iVar12 = iVar10;
        iVar4 = iVar10;
        local_a0 = uVar5;
        if (uVar7 != 0) {
          do {
            local_d8 = iVar4;
            uVar8 = uVar7;
            if ((uVar7 & 1) != 0) {
              local_70 = (ulonglong)
                         (uint)(*(int *)(param_1 + 0x23c) *
                               *(int *)(*(longlong *)(param_1 + 0x108) + (longlong)iVar12 * 4)) * 4
                         + *(longlong *)(param_1 + 0xd0);
              local_d4 = iVar12;
              local_d0 = uVar7;
              local_c0 = (undefined8 *)FUN_146f1a3d4(*(undefined8 *)(param_1 + 0x20));
              local_5c = *(int *)(*(longlong *)(param_1 + 0x10) + 0xe8);
              piVar14 = *(int **)(*(longlong *)(param_1 + 0x10) + 0xd8);
              local_60 = local_5c + 0x1fU >> 5;
              if (local_5c == 0) {
                piVar14 = &local_5c;
              }
              local_c8 = (ulonglong)*(uint *)(param_1 + 0x48);
              local_cc = 0xffffffff >> (-*(char *)(param_1 + 0x50) & 0x1fU);
              _Dst = local_a8;
              uVar8 = local_d0;
              iVar10 = local_d8;
              iVar12 = local_d4;
              local_68 = piVar14;
              if (local_c8 != 0) {
                local_90 = *(longlong *)(param_1 + 0x40);
                local_98 = (ulonglong)(*(uint *)(param_1 + 0x48) - 1);
                uVar5 = 0;
                local_e0 = 0;
                do {
                  uVar7 = 0xffffffff;
                  if (uVar5 == local_98) {
                    uVar7 = local_cc;
                  }
                  uVar7 = uVar7 & *(uint *)(local_90 + uVar5 * 4);
                  uVar8 = local_e0;
                  local_88 = uVar5;
                  if (uVar7 != 0) {
                    do {
                      if ((((uVar7 & 1) != 0) &&
                          ((*(uint *)(local_70 + (ulonglong)(uVar8 >> 5) * 4) >> (uVar8 & 0x1f) & 1)
                           == 0)) && ((longlong)*(int *)(local_c0 + 1) != 0)) {
                        lVar15 = (longlong)(int)uVar8 * 0x160 + *(longlong *)(param_1 + 0x30);
                        puVar9 = (uint *)*local_c0;
                        local_78 = puVar9 + *(int *)(local_c0 + 1);
                        do {
                          bVar6 = (byte)*puVar9;
                          uVar5 = (ulonglong)(*puVar9 >> 5);
                          puVar1 = (uint *)(*(longlong *)(lVar15 + 0x18) + uVar5 * 4);
                          *puVar1 = *puVar1 | 1 << (bVar6 & 0x1f);
                          bVar6 = bVar6 & 0x1f;
                          puVar1 = (uint *)(*(longlong *)(lVar15 + 0x30) + uVar5 * 4);
                          *puVar1 = *puVar1 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
                          FUN_146f1b984(*(longlong *)(param_1 + 0x10) + 0x300,&local_58);
                          if ((longlong)local_50 != 0) {
                            lVar11 = 0;
                            do {
                              uVar2 = *(uint *)(local_58 + lVar11);
                              uVar5 = (ulonglong)(uVar2 >> 5);
                              uVar13 = 1 << ((byte)uVar2 & 0x1f);
                              if (((uint)piVar14[uVar5] >> (uVar2 & 0x1f) & 1) == 0) {
                                uVar13 = 0;
                              }
                              bVar6 = (byte)uVar2 & 0x1f;
                              *(uint *)(*(longlong *)(lVar15 + 0x18) + uVar5 * 4) =
                                   *(uint *)(*(longlong *)(lVar15 + 0x18) + uVar5 * 4) &
                                   ~(1 << (uVar2 & 0x1f)) | uVar13;
                              puVar1 = (uint *)(*(longlong *)(lVar15 + 0x30) + uVar5 * 4);
                              *puVar1 = *puVar1 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
                              lVar11 = lVar11 + 4;
                            } while ((longlong)local_50 * 4 != lVar11);
                          }
                          puVar9 = puVar9 + 1;
                          param_1 = local_80;
                        } while (puVar9 != local_78);
                      }
                      bVar3 = 1 < uVar7;
                      uVar7 = uVar7 >> 1;
                      uVar8 = uVar8 + 1;
                    } while (bVar3);
                  }
                  uVar5 = local_88 + 1;
                  local_e0 = local_e0 + 0x20;
                  _Dst = local_a8;
                  uVar8 = local_d0;
                  iVar10 = local_d8;
                  iVar12 = local_d4;
                } while (uVar5 != local_c8);
              }
            }
            uVar7 = uVar8 >> 1;
            iVar12 = iVar12 + 1;
            iVar4 = local_d8;
          } while (1 < uVar8);
        }
        uVar5 = local_a0 + 1;
        iVar10 = iVar10 + 0x20;
      } while (uVar5 != local_b0);
      uVar7 = *(uint *)(param_1 + 0x2e0);
      _Dst = *(void **)(param_1 + 0x1b0);
      _Size = (longlong)*(int *)(param_1 + 0x1b8) << 2;
    }
    *(uint *)(param_1 + 0x2e0) = uVar7 & 0xffffffdf;
    memset(_Dst,0,_Size);
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a79bb2 FUN_142a79bb2 body=868 status=ok
// SIG undefined FUN_142a79bb2(void)

void FUN_142a79bb2(longlong param_1)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  void *_Dst;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong *plVar18;
  undefined1 auStack_f8 [36];
  uint local_d4;
  uint local_d0;
  int local_cc;
  uint local_c8;
  uint local_c4;
  ulonglong local_c0;
  longlong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  void *local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  longlong local_80;
  int *local_78;
  uint local_70;
  int local_6c;
  int *local_68;
  uint local_60;
  int local_5c;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar11 = *(uint *)(param_1 + 0x2e0);
  if ((uVar11 & 0x40) != 0) {
    local_d0 = 0xffffffff >> (-*(char *)(param_1 + 0x1d8) & 0x1fU);
    uVar12 = *(uint *)(param_1 + 0x1d0);
    uVar17 = 0;
    _Dst = *(void **)(param_1 + 0x1c8);
    if ((ulonglong)uVar12 != 0) {
      local_b0 = (ulonglong)(uVar12 - 1);
      uVar10 = 0;
      local_b8 = param_1;
      local_a8 = (ulonglong)uVar12;
      local_a0 = _Dst;
      do {
        uVar11 = 0xffffffff;
        if (uVar10 == local_b0) {
          uVar11 = local_d0;
        }
        uVar11 = uVar11 & *(uint *)((longlong)_Dst + uVar10 * 4);
        uVar15 = uVar17;
        uVar8 = uVar17;
        local_90 = uVar10;
        if (uVar11 != 0) {
          do {
            local_98 = uVar8;
            iVar13 = (int)uVar17;
            uVar12 = uVar11;
            if ((uVar11 & 1) != 0) {
              iVar3 = *(int *)(param_1 + 0x23c);
              iVar4 = *(int *)(*(longlong *)(param_1 + 0x108) + (longlong)iVar13 * 4);
              lVar6 = *(longlong *)(param_1 + 0xd0);
              local_c8 = uVar11;
              puVar9 = (undefined8 *)FUN_146f1a3d4(*(undefined8 *)(param_1 + 0x20));
              lVar16 = *(longlong *)(local_b8 + 0x10);
              local_5c = *(int *)(lVar16 + 0xe8);
              local_68 = *(int **)(lVar16 + 0xd8);
              local_60 = local_5c + 0x1fU >> 5;
              if (local_5c == 0) {
                local_68 = &local_5c;
              }
              local_6c = *(int *)(lVar16 + 0x178);
              local_78 = *(int **)(lVar16 + 0x168);
              local_70 = local_6c + 0x1fU >> 5;
              if (local_6c == 0) {
                local_78 = &local_6c;
              }
              local_c0 = (ulonglong)*(uint *)(local_b8 + 0x48);
              local_c4 = 0xffffffff >> (-*(char *)(local_b8 + 0x50) & 0x1fU);
              _Dst = local_a0;
              uVar15 = local_98;
              param_1 = local_b8;
              uVar12 = local_c8;
              local_cc = iVar13;
              if (local_c0 != 0) {
                local_80 = *(longlong *)(local_b8 + 0x40);
                local_88 = (ulonglong)(*(uint *)(local_b8 + 0x48) - 1);
                uVar17 = 0;
                local_d4 = 0;
                do {
                  uVar11 = 0xffffffff;
                  if (uVar17 == local_88) {
                    uVar11 = local_c4;
                  }
                  uVar11 = uVar11 & *(uint *)(local_80 + uVar17 * 4);
                  uVar12 = local_d4;
                  if (uVar11 != 0) {
                    do {
                      if ((((uVar11 & 1) != 0) &&
                          ((*(uint *)((ulonglong)(uint)(iVar3 * iVar4) * 4 + lVar6 +
                                     (ulonglong)(uVar12 >> 5) * 4) >> (uVar12 & 0x1f) & 1) != 0)) &&
                         ((longlong)*(int *)(puVar9 + 1) != 0)) {
                        plVar18 = (longlong *)
                                  (*(longlong *)(param_1 + 0x30) + (longlong)(int)uVar12 * 0x160 +
                                  0x48);
                        puVar14 = (uint *)*puVar9;
                        puVar1 = puVar14 + *(int *)(puVar9 + 1);
                        do {
                          uVar5 = *puVar14;
                          if (((uint)local_78[uVar5 >> 5] >> (uVar5 & 0x1f) & 1) == 0) {
                            puVar2 = (uint *)(*plVar18 + (ulonglong)(uVar5 >> 5) * 4);
                            *puVar2 = *puVar2 | 1 << ((byte)uVar5 & 0x1f);
                            FUN_146f1b984(*(longlong *)(param_1 + 0x10) + 0x300,&local_58);
                            param_1 = local_b8;
                            if ((longlong)local_50 != 0) {
                              lVar16 = 0;
                              do {
                                puVar2 = (uint *)(*plVar18 +
                                                 (ulonglong)(*(uint *)(local_58 + lVar16) >> 5) * 4)
                                ;
                                *puVar2 = *puVar2 | 1 << ((byte)*(uint *)(local_58 + lVar16) & 0x1f)
                                ;
                                lVar16 = lVar16 + 4;
                              } while ((longlong)local_50 * 4 != lVar16);
                            }
                          }
                          puVar14 = puVar14 + 1;
                        } while (puVar14 != puVar1);
                      }
                      bVar7 = 1 < uVar11;
                      uVar11 = uVar11 >> 1;
                      uVar12 = uVar12 + 1;
                    } while (bVar7);
                  }
                  uVar17 = uVar17 + 1;
                  local_d4 = local_d4 + 0x20;
                  _Dst = local_a0;
                  uVar15 = local_98;
                  uVar12 = local_c8;
                  iVar13 = local_cc;
                } while (uVar17 != local_c0);
              }
            }
            uVar11 = uVar12 >> 1;
            uVar17 = (ulonglong)(iVar13 + 1);
            uVar8 = local_98;
          } while (1 < uVar12);
        }
        uVar10 = local_90 + 1;
        uVar17 = (ulonglong)((int)uVar15 + 0x20);
      } while (uVar10 != local_a8);
      uVar11 = *(uint *)(param_1 + 0x2e0);
      _Dst = *(void **)(param_1 + 0x1c8);
      uVar17 = (longlong)*(int *)(param_1 + 0x1d0) << 2;
    }
    *(uint *)(param_1 + 0x2e0) = uVar11 & 0xffffffbf;
    memset(_Dst,0,uVar17);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a79f18 FUN_142a79f18 body=1770 status=ok
// SIG undefined FUN_142a79f18(void)

void FUN_142a79f18(longlong param_1)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  bool bVar18;
  undefined1 auStack_128 [36];
  uint local_104;
  uint local_100;
  uint local_fc;
  ulonglong local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  uint local_e0;
  uint local_dc;
  ulonglong local_d8;
  ulonglong local_d0;
  longlong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  longlong local_a8;
  longlong local_a0;
  int *local_98;
  uint local_90;
  int local_8c;
  int *local_88;
  uint local_80;
  int local_7c;
  int *local_78;
  uint local_70;
  int local_6c;
  int *local_68;
  uint local_60;
  int local_5c;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((*(uint *)(param_1 + 0x2e0) & 0xc) != 0) {
    if ((*(uint *)(param_1 + 0x2e0) & 8) != 0) {
      local_f0 = (ulonglong)*(uint *)(param_1 + 0x98);
      iVar16 = 0;
      cVar1 = *(char *)(param_1 + 0xa0);
      if (local_f0 != 0) {
        local_f8 = *(ulonglong *)(param_1 + 0x90);
        local_e8 = (ulonglong)(*(uint *)(param_1 + 0x98) - 1);
        uVar15 = 0;
        do {
          uVar12 = 0xffffffff;
          if (uVar15 == local_e8) {
            uVar12 = 0xffffffff >> (-cVar1 & 0x1fU);
          }
          uVar12 = uVar12 & *(uint *)(local_f8 + uVar15 * 4);
          uVar8 = (ulonglong)uVar12;
          iVar9 = iVar16;
          if (uVar12 != 0) {
            do {
              if ((uVar8 & 1) != 0) {
                uVar2 = *(undefined2 *)(*(longlong *)(param_1 + 0xc0) + (longlong)iVar9 * 2);
                FUN_146f1b984(*(longlong *)(param_1 + 0x10) + 0x300);
                if ((longlong)local_50 != 0) {
                  lVar6 = 0;
                  do {
                    iVar3 = *(int *)(local_58 + lVar6);
                    lVar7 = *(longlong *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x270) +
                             (longlong)(iVar3 / 100) * 8);
                    lVar14 = (longlong)(iVar3 % 100) * 0x38;
                    if ((*(int *)(lVar7 + 0x28 + lVar14) != 0) &&
                       ((*(byte *)(lVar7 + lVar14 + 0x32) & 4) != 0)) {
                      *(undefined2 *)(*(longlong *)(param_1 + 0xc0) + (longlong)iVar3 * 2) = uVar2;
                    }
                    lVar6 = lVar6 + 4;
                  } while ((longlong)local_50 * 4 != lVar6);
                }
              }
              uVar12 = (uint)uVar8;
              uVar8 = uVar8 >> 1;
              iVar9 = iVar9 + 1;
            } while (1 < uVar12);
          }
          uVar15 = uVar15 + 1;
          iVar16 = iVar16 + 0x20;
        } while (uVar15 != local_f0);
      }
    }
    local_8c = *(int *)(*(longlong *)(param_1 + 0x10) + 0xe8);
    local_98 = *(int **)(*(longlong *)(param_1 + 0x10) + 0xd8);
    local_90 = local_8c + 0x1fU >> 5;
    if (local_8c == 0) {
      local_98 = &local_8c;
    }
    if ((*(byte *)(param_1 + 0x2e0) & 4) != 0) {
      uVar12 = *(uint *)(param_1 + 0x80);
      cVar1 = *(char *)(param_1 + 0x88);
      if ((ulonglong)uVar12 != 0) {
        lVar6 = *(longlong *)(param_1 + 0x78);
        uVar15 = 0;
        uVar13 = 0;
        do {
          uVar10 = 0xffffffff;
          if (uVar15 == uVar12 - 1) {
            uVar10 = 0xffffffff >> (-cVar1 & 0x1fU);
          }
          uVar10 = uVar10 & *(uint *)(lVar6 + uVar15 * 4);
          uVar8 = (ulonglong)uVar10;
          uVar11 = uVar13;
          if (uVar10 != 0) {
            do {
              if ((uVar8 & 1) != 0) {
                uVar10 = 1 << ((byte)uVar11 & 0x1f);
                uVar17 = (ulonglong)(uVar11 >> 5);
                if ((*(uint *)(*(longlong *)(param_1 + 0xf0) + uVar17 * 4) >> (uVar11 & 0x1f) & 1)
                    == 0) {
                  uVar10 = 0;
                }
                *(uint *)(*(longlong *)(param_1 + 0x210) + uVar17 * 4) =
                     *(uint *)(*(longlong *)(param_1 + 0x210) + uVar17 * 4) &
                     ~(1 << (uVar11 & 0x1f)) | uVar10;
              }
              uVar10 = (uint)uVar8;
              uVar8 = uVar8 >> 1;
              uVar11 = uVar11 + 1;
            } while (1 < uVar10);
          }
          uVar15 = uVar15 + 1;
          uVar13 = uVar13 + 0x20;
        } while (uVar15 != uVar12);
      }
      local_d8 = (ulonglong)*(uint *)(param_1 + 0x48);
      local_100 = 0xffffffff >> (-*(char *)(param_1 + 0x50) & 0x1fU);
      if (local_d8 != 0) {
        local_c8 = *(longlong *)(param_1 + 0x40);
        local_d0 = (ulonglong)(*(uint *)(param_1 + 0x48) - 1);
        uVar15 = 0;
        local_fc = 0;
        local_a0 = param_1;
        do {
          uVar12 = 0xffffffff;
          if (uVar15 == local_d0) {
            uVar12 = local_100;
          }
          uVar12 = uVar12 & *(uint *)(local_c8 + uVar15 * 4);
          local_c0 = uVar15;
          if (uVar12 != 0) {
            local_104 = local_fc;
            do {
              uVar13 = uVar12;
              if ((uVar12 & 1) != 0) {
                lVar6 = *(longlong *)(param_1 + 0x30);
                lVar7 = (longlong)(int)local_104 * 0x160;
                local_5c = *(int *)(lVar6 + 0x10 + lVar7);
                local_68 = *(int **)(lVar6 + lVar7);
                local_60 = local_5c + 0x1fU >> 5;
                if (local_5c == 0) {
                  local_68 = &local_5c;
                }
                lVar6 = lVar6 + lVar7;
                local_6c = *(int *)(lVar6 + 0x28);
                local_78 = *(int **)(lVar6 + 0x18);
                local_70 = local_6c + 0x1fU >> 5;
                if (local_6c == 0) {
                  local_78 = &local_6c;
                }
                local_7c = *(int *)(lVar6 + 0x40);
                local_88 = *(int **)(lVar6 + 0x30);
                local_80 = local_7c + 0x1fU >> 5;
                if (local_7c == 0) {
                  local_88 = &local_7c;
                }
                local_f8 = (ulonglong)*(uint *)(param_1 + 0x80);
                local_e8 = CONCAT44(local_e8._4_4_,
                                    0xffffffff >> (-*(char *)(param_1 + 0x88) & 0x1fU));
                local_e0 = uVar12;
                if (local_f8 != 0) {
                  local_a8 = *(longlong *)(param_1 + 0x78);
                  local_b0 = (ulonglong)(*(uint *)(param_1 + 0x80) - 1);
                  local_b8 = (ulonglong)(local_104 >> 5);
                  local_dc = local_104 & 0x1f;
                  uVar15 = 0;
                  uVar12 = 0;
                  do {
                    uVar13 = 0xffffffff;
                    if (uVar15 == local_b0) {
                      uVar13 = (uint)local_e8;
                    }
                    uVar13 = uVar13 & *(uint *)(local_a8 + uVar15 * 4);
                    if (uVar13 != 0) {
                      local_f0 = CONCAT44(local_f0._4_4_,uVar12);
                      uVar10 = uVar12;
                      do {
                        if ((uVar13 & 1) != 0) {
                          uVar12 = 1 << ((byte)uVar10 & 0x1f);
                          uVar8 = (ulonglong)(uVar10 >> 5);
                          if ((*(uint *)(*(longlong *)(param_1 + 0xa8) + uVar8 * 4) >>
                               (uVar10 & 0x1f) & 1) == 0) {
                            if ((*(uint *)(*(longlong *)(param_1 + 0xf0) + uVar8 * 4) & uVar12) == 0
                               ) {
                              bVar18 = (local_78[uVar8] & uVar12) == 0;
                            }
                            else {
                              bVar18 = (local_78[uVar8] & uVar12) == 0;
                              bVar4 = false;
                              uVar11 = 0;
                              if ((*(uint *)((ulonglong)
                                             (uint)(*(int *)(param_1 + 0x23c) *
                                                   *(int *)(*(longlong *)(param_1 + 0x228) +
                                                           (longlong)(int)uVar10 * 4)) * 4 +
                                             *(longlong *)(param_1 + 0xd0) + local_b8 * 4) >>
                                   ((byte)local_dc & 0x1f) & 1) == 0) goto LAB_142a7a3d8;
                            }
LAB_142a7a3d2:
                            bVar4 = true;
                            uVar11 = uVar12;
                          }
                          else {
                            bVar18 = (local_78[uVar8] & uVar12) == 0;
                            bVar4 = false;
                            uVar11 = 0;
                            if (local_104 ==
                                *(ushort *)
                                 (*(longlong *)(param_1 + 0xc0) + (longlong)(int)uVar10 * 2))
                            goto LAB_142a7a3d2;
                          }
LAB_142a7a3d8:
                          uVar8 = (ulonglong)((uVar10 >> 5) << 2);
                          *(uint *)((longlong)local_68 + uVar8) =
                               *(uint *)((longlong)local_68 + uVar8) & ~uVar12 | uVar11;
                          uVar11 = uVar12;
                          if (!bVar4) {
                            uVar11 = 0;
                          }
                          if (!bVar18) {
                            uVar11 = 0;
                          }
                          *(uint *)((longlong)local_88 + uVar8) =
                               ~uVar12 & *(uint *)((longlong)local_88 + uVar8) | uVar11;
                          FUN_146f1b984(*(longlong *)(param_1 + 0x10) + 0x300);
                          if ((longlong)local_50 != 0) {
                            lVar6 = 0;
                            do {
                              uVar12 = *(uint *)(local_58 + lVar6);
                              if (bVar4) {
                                bVar18 = ((uint)local_98[uVar12 >> 5] >> (uVar12 & 0x1f) & 1) != 0;
                              }
                              else {
                                bVar18 = false;
                              }
                              uVar11 = 1 << ((byte)uVar12 & 0x1f);
                              uVar8 = (ulonglong)((uVar12 >> 5) << 2);
                              uVar12 = 0;
                              if ((*(uint *)((longlong)local_78 + uVar8) & uVar11) == 0) {
                                uVar12 = uVar11;
                              }
                              uVar5 = uVar11;
                              if (!bVar18) {
                                uVar12 = 0;
                                uVar5 = 0;
                              }
                              *(uint *)((longlong)local_68 + uVar8) =
                                   uVar5 | *(uint *)((longlong)local_68 + uVar8) & ~uVar11;
                              *(uint *)((longlong)local_88 + uVar8) =
                                   ~uVar11 & *(uint *)((longlong)local_88 + uVar8) | uVar12;
                              lVar6 = lVar6 + 4;
                            } while ((longlong)local_50 * 4 != lVar6);
                          }
                          param_1 = local_a0;
                          uVar12 = (uint)local_f0;
                        }
                        uVar10 = uVar10 + 1;
                        bVar4 = 1 < uVar13;
                        uVar13 = uVar13 >> 1;
                      } while (bVar4);
                    }
                    uVar15 = uVar15 + 1;
                    uVar12 = uVar12 + 0x20;
                    uVar13 = local_e0;
                  } while (uVar15 != local_f8);
                }
              }
              uVar12 = uVar13 >> 1;
              local_104 = local_104 + 1;
            } while (1 < uVar13);
          }
          uVar15 = local_c0 + 1;
          local_fc = local_fc + 0x20;
        } while (uVar15 != local_d8);
      }
    }
    *(byte *)(param_1 + 0x2e0) = *(byte *)(param_1 + 0x2e0) & 0xf3;
    memset(*(void **)(param_1 + 0x78),0,(longlong)*(int *)(param_1 + 0x80) << 2);
    memset(*(void **)(param_1 + 0x90),0,(longlong)*(int *)(param_1 + 0x98) << 2);
  }
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a7a604 FUN_142a7a604 body=424 status=ok
// SIG undefined FUN_142a7a604(void)

void FUN_142a7a604(longlong param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  void *_Dst;
  ulonglong uVar8;
  int iVar9;
  ulonglong _Size;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  
  cVar2 = *(char *)(param_1 + 0x208);
  uVar3 = *(uint *)(param_1 + 0x200);
  _Size = 0;
  _Dst = *(void **)(param_1 + 0x1f8);
  if ((ulonglong)uVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x1e0);
    uVar8 = 0;
    do {
      uVar12 = 0xffffffff;
      if (uVar8 == uVar3 - 1) {
        uVar12 = 0xffffffff >> (-cVar2 & 0x1fU);
      }
      uVar12 = uVar12 & *(uint *)((longlong)_Dst + uVar8 * 4) & *(uint *)(lVar4 + uVar8 * 4);
      iVar9 = (int)_Size;
      if (uVar12 != 0) {
        do {
          if ((((uVar12 & 1) != 0) &&
              (lVar7 = FUN_146f1a3d4(*(undefined8 *)(param_1 + 0x20)), lVar7 != 0)) &&
             (*(int *)(lVar7 + 8) == 0)) {
            lVar7 = FUN_146f21ed8(param_1,_Size);
            uVar1 = *(uint *)(param_1 + 0x50) + 0x1f;
            if (0x1f < uVar1) {
              puVar10 = (uint *)((ulonglong)
                                 (uint)(*(int *)(param_1 + 0x23c) * *(int *)(lVar7 + 0x50)) * 4 +
                                *(longlong *)(param_1 + 0xd0));
              uVar11 = 0xfffffffe;
              lVar7 = 0;
LAB_142a7a6fe:
              uVar11 = uVar11 & *puVar10;
              if (uVar11 == 0) goto code_r0x000142a7a703;
              iVar6 = 0;
              if (uVar11 != 0) {
                for (; (uVar11 >> iVar6 & 1) == 0; iVar6 = iVar6 + 1) {
                }
              }
              if (*(uint *)(param_1 + 0x50) <= (uint)(iVar6 - (int)lVar7)) goto LAB_142a7a752;
              goto LAB_142a7a68c;
            }
LAB_142a7a752:
            FUN_146f45f86(*(undefined8 *)(param_1 + 8));
          }
LAB_142a7a68c:
          _Size = (ulonglong)((int)_Size + 1);
          bVar5 = 1 < uVar12;
          uVar12 = uVar12 >> 1;
        } while (bVar5);
      }
      uVar8 = uVar8 + 1;
      _Size = (ulonglong)(iVar9 + 0x20);
    } while (uVar8 != uVar3);
    _Dst = *(void **)(param_1 + 0x1f8);
    _Size = (longlong)*(int *)(param_1 + 0x200) << 2;
  }
  memset(_Dst,0,_Size);
  return;
code_r0x000142a7a703:
  lVar7 = lVar7 + -0x20;
  puVar10 = puVar10 + 1;
  uVar11 = 0xffffffff;
  if ((ulonglong)(uVar1 & 0xffffffe0) + lVar7 == 0) goto LAB_142a7a752;
  goto LAB_142a7a6fe;
}



// FUNCTION 142a7a7ac FUN_142a7a7ac body=662 status=ok
// SIG undefined FUN_142a7a7ac(void)

void FUN_142a7a7ac(longlong param_1)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  uint uStack_80;
  int iStack_7c;
  int *local_78;
  uint local_70;
  int local_6c;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  int *local_58;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90 = param_1;
  if (DAT_14c999618 == '\x01') {
    uVar2 = *(uint *)(param_1 + 0x48);
    iVar10 = 0;
    cVar1 = *(char *)(param_1 + 0x50);
    if ((ulonglong)uVar2 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x40);
      uVar9 = 0;
      do {
        uVar6 = 0xffffffff;
        if (uVar9 == uVar2 - 1) {
          uVar6 = 0xffffffff >> (-cVar1 & 0x1fU);
        }
        uVar6 = uVar6 & *(uint *)(lVar3 + uVar9 * 4);
        iVar7 = iVar10;
        if (uVar6 != 0) {
          do {
            if ((uVar6 & 1) != 0) {
              FUN_146f229d0(local_90,iVar7);
            }
            bVar5 = 1 < uVar6;
            uVar6 = uVar6 >> 1;
            iVar7 = iVar7 + 1;
          } while (bVar5);
        }
        uVar9 = uVar9 + 1;
        iVar10 = iVar10 + 0x20;
      } while (uVar9 != uVar2);
    }
  }
  lVar3 = local_90;
  if (DAT_14c75f460 == '\0') {
    lVar3 = *(longlong *)(local_90 + 0x10);
    local_4c = *(int *)(lVar3 + 0x118);
    local_58 = *(int **)(lVar3 + 0x108);
    local_50 = local_4c + 0x1fU >> 5;
    if (local_4c == 0) {
      local_58 = &local_4c;
    }
    if ((*(int *)(lVar3 + 0xe8) != 0) &&
       (0x1f < *(int *)(lVar3 + 0xe8) + 0x1fU && 0x1f < local_4c + 0x1fU)) {
      memcpy(local_58,*(void **)(lVar3 + 0xd8),(ulonglong)(local_50 << 2));
    }
  }
  else {
    lVar4 = *(longlong *)(local_90 + 0x10);
    iStack_7c = *(int *)(lVar4 + 0x118);
    local_68 = *(int **)(lVar4 + 0x108);
    uStack_80 = iStack_7c + 0x1fU >> 5;
    if (iStack_7c == 0) {
      local_68 = &iStack_5c;
    }
    local_6c = *(int *)(lVar4 + 0xe8);
    local_78 = *(int **)(lVar4 + 0xd8);
    local_70 = local_6c + 0x1fU >> 5;
    if (local_6c == 0) {
      local_78 = &local_6c;
    }
    local_88 = (undefined4)local_68;
    uStack_84 = local_68._4_4_;
    uStack_60 = uStack_80;
    iStack_5c = iStack_7c;
    FUN_146f214ba(local_90,&local_88,&local_78);
    uVar2 = *(uint *)(lVar3 + 0x48);
    iVar10 = 0;
    cVar1 = *(char *)(lVar3 + 0x50);
    if ((ulonglong)uVar2 != 0) {
      lVar3 = *(longlong *)(local_90 + 0x40);
      uVar9 = 0;
      do {
        uVar6 = 0xffffffff;
        if (uVar9 == uVar2 - 1) {
          uVar6 = 0xffffffff >> (-cVar1 & 0x1fU);
        }
        uVar6 = uVar6 & *(uint *)(lVar3 + uVar9 * 4);
        iVar7 = iVar10;
        if (uVar6 != 0) {
          do {
            if ((uVar6 & 1) != 0) {
              local_4c = *(int *)(*(longlong *)(local_90 + 0x30) + 0x70 + (longlong)iVar7 * 0x160);
              local_50 = local_4c + 0x1fU >> 5;
              local_58 = *(int **)(*(longlong *)(local_90 + 0x30) + 0x60 + (longlong)iVar7 * 0x160);
              if (local_4c == 0) {
                local_58 = &local_4c;
              }
              if ((ulonglong)uStack_60 != 0) {
                uVar8 = 0;
                do {
                  local_68[uVar8] = local_68[uVar8] | local_58[uVar8];
                  uVar8 = uVar8 + 1;
                } while (uStack_60 != uVar8);
              }
            }
            bVar5 = 1 < uVar6;
            uVar6 = uVar6 >> 1;
            iVar7 = iVar7 + 1;
          } while (bVar5);
        }
        uVar9 = uVar9 + 1;
        iVar10 = iVar10 + 0x20;
      } while (uVar9 != uVar2);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a7aa44 FUN_142a7aa44 body=306 status=ok
// SIG undefined FUN_142a7aa44(void)

void FUN_142a7aa44(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_998 [32];
  int *local_978;
  undefined4 local_970;
  int *local_968;
  uint local_960;
  int local_95c;
  int local_958 [514];
  undefined1 local_150 [256];
  longlong local_50;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_998;
  if ((*(byte *)(param_1 + 0x2e0) & 0x80) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x28);
    local_95c = *(int *)(lVar1 + 0x5f0);
    local_968 = *(int **)(lVar1 + 0x5e0);
    local_960 = local_95c + 0x1fU >> 5;
    if (local_95c == 0) {
      local_968 = &local_95c;
    }
    FUN_146f21882(local_150,*(undefined8 *)(param_1 + 0x10),param_1 + 0x260);
    iVar3 = 0;
    do {
      local_970 = 0x200;
      local_978 = local_958;
      uVar2 = FUN_146efd1b6(local_968,local_95c,iVar3,0xffffffff);
      if (uVar2 == 0) break;
      FUN_146f2192e(param_1,local_150,local_958,uVar2);
      iVar3 = local_958[uVar2 - 1] + 1;
    } while (0x1ff < uVar2 && iVar3 != local_95c);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_998) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a7ab78 FUN_142a7ab78 body=227 status=ok
// SIG undefined FUN_142a7ab78(void)

void FUN_142a7ab78(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  int *local_68;
  uint local_60;
  int local_5c;
  int *local_58;
  uint local_50;
  int local_4c;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar1 = *(int *)(param_1 + 0x268);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x260);
    lVar4 = 0;
    do {
      if (*(int *)(lVar2 + 0x10 + lVar4) != 0) {
        local_48 = *(undefined8 *)(param_1 + 0x240);
        local_40 = *(undefined4 *)(param_1 + 0x248);
        local_5c = *(int *)(param_1 + 0x50);
        local_60 = local_5c + 0x1fU >> 5;
        local_68 = *(int **)(param_1 + 0x40);
        if (local_5c == 0) {
          local_68 = &local_5c;
        }
        local_58 = local_68;
        plVar3 = *(longlong **)(lVar2 + lVar4);
        local_50 = local_60;
        local_4c = local_5c;
        (**(code **)(*plVar3 + 0x2c8))(plVar3,&local_58);
      }
      lVar4 = lVar4 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar4);
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a7ac5c FUN_142a7ac5c body=4126 status=ok
// SIG undefined FUN_142a7ac5c(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_142a7ac5c(longlong param_1)

{
  longlong *plVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  void *_Dst;
  longlong *plVar5;
  code *pcVar6;
  undefined8 uVar7;
  longlong lVar8;
  short sVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined1 *puVar13;
  uint *puVar14;
  byte bVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined1 *puVar19;
  uint uVar20;
  longlong lVar21;
  longlong *plVar22;
  uint uVar23;
  uint *puVar24;
  longlong *plVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  uint uVar28;
  uint **ppuVar29;
  int *piVar30;
  bool bVar31;
  longlong local_1298;
  longlong local_1290;
  longlong local_1288;
  uint *local_1280;
  uint *local_1278;
  int *local_1270;
  longlong local_1268;
  uint local_125c;
  ulonglong local_1258;
  longlong *local_1250;
  uint *local_1248;
  int *local_1240;
  uint *local_1238;
  longlong local_1230;
  undefined8 *local_1228;
  int local_1220;
  int *local_1218;
  uint local_1210;
  int local_120c;
  int *local_1208;
  uint local_1200;
  int local_11fc;
  int *local_11f8;
  uint uStack_11f0;
  int iStack_11ec;
  uint *local_11e8;
  ulonglong uStack_11e0;
  int *local_11d8;
  uint uStack_11d0;
  int iStack_11cc;
  undefined8 local_11c8;
  undefined4 local_11c0;
  undefined8 local_11b8;
  uint local_11b0;
  undefined1 local_11a8 [288];
  longlong local_1088;
  undefined8 local_1080;
  uint local_1078 [192];
  uint *local_d78;
  undefined8 local_d70;
  uint local_d68 [192];
  uint *local_a68;
  undefined8 local_a60;
  uint local_a58 [640];
  uint *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)&local_1218;
  piVar30 = (int *)0x0;
  local_58 = (uint *)0x0;
  local_50 = 0x28000000000;
  local_a68 = (uint *)0x0;
  local_a60 = 0xc000000000;
  local_d78 = (uint *)0x0;
  local_d70 = 0xc000000000;
  local_11e8 = (uint *)0x0;
  uStack_11e0 = 0;
  FUN_14480809c(&local_11e8,0x100);
  plVar22 = &local_1298;
  if ((ulonglong)*(uint *)(param_1 + 0x74) != 0) {
    lVar21 = -((ulonglong)*(uint *)(param_1 + 0x74) * 4 + 0x1e & 0xfffffffffffffff0);
    plVar22 = (longlong *)((longlong)&local_1298 + lVar21);
    piVar30 = (int *)((longlong)&local_1298 + lVar21);
  }
  iStack_11ec = *(int *)(param_1 + 0x70);
  local_11f8 = piVar30;
  uStack_11f0 = iStack_11ec + 0x1fU >> 5;
  if (iStack_11ec == 0) {
    local_11f8 = &iStack_11ec;
  }
  local_1288 = *(longlong *)(param_1 + 0x288);
  local_11fc = *(int *)(*(longlong *)(param_1 + 0x10) + 400);
  local_1270 = *(int **)(*(longlong *)(param_1 + 0x10) + 0x180);
  local_1208 = local_1270;
  local_1200 = local_11fc + 0x1fU >> 5;
  if (local_11fc == 0) {
    local_1270 = &local_11fc;
    local_1208 = &local_11fc;
  }
  uVar3 = *(uint *)(param_1 + 0x50);
  local_1270 = local_1208;
  if ((ulonglong)uVar3 == 0) {
    puVar14 = (uint *)0x0;
  }
  else {
    *(undefined8 *)((longlong)plVar22 + -8) = 0x142a7ad88;
    lVar21 = -((ulonglong)uVar3 * 4 + 0x1e & 0xfffffffffffffff0);
    puVar14 = (uint *)((longlong)plVar22 + lVar21);
    plVar22 = (longlong *)((longlong)plVar22 + lVar21);
  }
  uVar17 = *(uint *)(param_1 + 0x48);
  if ((ulonglong)uVar17 != 0) {
    lVar21 = *(longlong *)(param_1 + 0x40);
    uVar27 = 0;
    uVar28 = 0;
    uVar18 = 0;
    do {
      uVar23 = 0xffffffff;
      if (uVar27 == uVar17 - 1) {
        uVar23 = 0xffffffff >> (-(char)uVar3 & 0x1fU);
      }
      uVar23 = uVar23 & *(uint *)(lVar21 + uVar27 * 4);
      uVar26 = uVar18;
      uVar20 = uVar28;
      if (uVar23 != 0) {
        do {
          uVar18 = uVar26;
          if ((uVar23 & 1) != 0) {
            uVar18 = (ulonglong)((int)uVar26 + 1);
            puVar14[uVar26] = uVar20;
          }
          bVar31 = 1 < uVar23;
          uVar26 = uVar18;
          uVar23 = uVar23 >> 1;
          uVar20 = uVar20 + 1;
        } while (bVar31);
      }
      uVar27 = uVar27 + 1;
      uVar28 = uVar28 + 0x20;
    } while (uVar27 != uVar17);
    if ((int)uVar18 != 0) {
      local_1278 = puVar14 + (int)uVar18;
      local_1268 = param_1;
      local_1240 = piVar30;
      do {
        uVar3 = *puVar14;
        lVar21 = *(longlong *)(param_1 + 0x30);
        lVar16 = (longlong)(int)uVar3 * 0x160;
        iVar12 = *(int *)(lVar21 + 0x98 + lVar16);
        _Dst = *(void **)(lVar21 + 0x90 + lVar16);
        *(undefined8 *)((longlong)plVar22 + -0x28) = 0x142a7ae4f;
        memset(_Dst,0,(longlong)iVar12 << 2);
        local_1230 = lVar21 + lVar16;
        local_125c = uVar3;
        if ((*(byte *)(param_1 + 0x2e0) & 0x10) == 0) {
          local_1248 = (uint *)0x0;
        }
        else {
          local_1248 = (uint *)*(longlong *)(lVar21 + lVar16 + 0x90);
        }
        if ((longlong)*(int *)(param_1 + 0x268) != 0) {
          plVar25 = *(longlong **)(param_1 + 0x260);
          plVar1 = plVar25 + (longlong)*(int *)(param_1 + 0x268) * 3;
          do {
            if ((int)plVar25[2] != 0) {
              local_11b8 = 0;
              local_1088 = 0;
              local_1080 = 0x400000000;
              local_11d8 = local_11f8;
              uStack_11d0 = uStack_11f0;
              iStack_11cc = iStack_11ec;
              local_11c8 = *(undefined8 *)(param_1 + 0x240);
              local_11c0 = *(undefined4 *)(param_1 + 0x248);
              puVar13 = (undefined1 *)
                        ((longlong)(int)uVar3 * 0x130 +
                        *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x10));
              local_11b0 = uVar3;
              if (local_11a8 != puVar13) {
                uVar4 = *(undefined4 *)(puVar13 + 0x128);
                puVar19 = *(undefined1 **)(puVar13 + 0x120);
                if (*(undefined1 **)(puVar13 + 0x120) == (undefined1 *)0x0) {
                  puVar19 = puVar13;
                }
                *(undefined8 *)((longlong)plVar22 + -0x28) = 0x142a7afe0;
                FUN_146f2a024(local_11a8,puVar19,uVar4,4);
              }
              plVar5 = (longlong *)*plVar25;
              pcVar6 = *(code **)(*plVar5 + 0x2d0);
              *(undefined8 *)((longlong)plVar22 + -0x28) = 0x142a7af25;
              (*pcVar6)(plVar5,&local_11d8);
              local_120c = *(int *)(*plVar25 + 0x38);
              local_1218 = *(int **)(*plVar25 + 0x28);
              local_1210 = local_120c + 0x1fU >> 5;
              if (local_120c == 0) {
                local_1218 = &local_120c;
              }
              uVar17 = *(uint *)(param_1 + 0x74);
              if ((ulonglong)uVar17 != 0) {
                uVar18 = 0;
                do {
                  uVar28 = *(uint *)((longlong)local_1248 + uVar18 * 4);
                  *(uint *)((longlong)local_1248 + uVar18 * 4) =
                       ~(piVar30[uVar18] ^ uVar28) & local_1218[uVar18] ^ uVar28;
                  uVar18 = uVar18 + 1;
                } while (uVar17 != uVar18);
              }
              if (local_1088 != 0) {
                *(undefined8 *)((longlong)plVar22 + -0x28) = 0x142a7af94;
                FUN_1400020a8();
              }
            }
            plVar25 = plVar25 + 3;
          } while (plVar25 != plVar1);
        }
        iStack_11cc = *(int *)(local_1230 + 0x88);
        local_11d8 = *(int **)(local_1230 + 0x78);
        uStack_11d0 = iStack_11cc + 0x1fU >> 5;
        if (iStack_11cc == 0) {
          local_11d8 = &iStack_11cc;
        }
        local_120c = *(int *)(local_1230 + 0xb8);
        local_1218 = *(int **)(local_1230 + 0xa8);
        local_1210 = local_120c + 0x1fU >> 5;
        if (local_120c == 0) {
          local_1218 = &local_120c;
        }
        bVar31 = (longlong)local_50 < 0;
        local_50 = local_50 & 0xffffffff00000000;
        if (bVar31) {
          *(undefined8 *)((longlong)plVar22 + -0x28) = 0x142a7bb7a;
          FUN_146f2ba40(local_a58);
        }
        bVar31 = (longlong)local_d70 < 0;
        local_d70 = local_d70 & 0xffffffff00000000;
        if (bVar31) {
          *(undefined8 *)((longlong)plVar22 + -0x28) = 0x142a7bba1;
          FUN_146f2bb2a();
        }
        bVar31 = (longlong)local_a60 < 0;
        local_a60 = local_a60 & 0xffffffff00000000;
        if (bVar31) {
          *(undefined8 *)((longlong)plVar22 + -0x28) = 0x142a7bbcb;
          FUN_146f2bb2a(local_d68);
        }
        local_1258 = (ulonglong)*(uint *)(param_1 + 0x74);
        local_1280 = puVar14;
        if ((ulonglong)*(uint *)(param_1 + 0x74) != 0) {
          local_1298 = *(longlong *)(local_1268 + 0x270);
          local_1290 = *(longlong *)(local_1230 + 0x48);
          local_1238 = (uint *)*(longlong *)(local_1230 + 0x78);
          uVar18 = 0;
          do {
            uVar17 = ~*(uint *)(local_1290 + uVar18 * 4) &
                     *(uint *)((longlong)local_1248 + uVar18 * 4);
            uVar3 = local_1270[uVar18];
            uVar28 = (*(uint *)((longlong)local_1238 + uVar18 * 4) ^ uVar17 | uVar3) &
                     *(uint *)(local_1298 + uVar18 * 4) | *(uint *)(local_1288 + uVar18 * 4);
            if (uVar28 != 0) {
              *(uint *)((longlong)local_1238 + uVar18 * 4) = uVar17;
              uVar20 = (int)uVar18 << 5;
              local_1250 = (longlong *)CONCAT44(local_1250._4_4_,uVar17);
              uVar23 = uVar28 & uVar17;
              if ((uVar28 & uVar17) != 0) {
                do {
                  uVar17 = -uVar23 & uVar23;
                  if ((uVar17 & uVar3) == 0) {
                    iVar12 = (int)local_50;
                    uVar27 = local_50 & 0xffffffff;
                    uVar10 = (int)local_50 + 1;
                    local_50 = CONCAT44(local_50._4_4_,uVar10);
                    if (local_50._4_4_ < uVar10) {
                      *(undefined8 *)((longlong)plVar22 + -0x28) = 0x142a7b151;
                      FUN_146f2bc92(local_a58,uVar27);
                    }
                    ppuVar29 = &local_58;
                    puVar14 = local_a58;
                  }
                  else {
                    iVar12 = (int)local_d70;
                    uVar27 = local_d70 & 0xffffffff;
                    uVar10 = (int)local_d70 + 1;
                    local_d70 = CONCAT44(local_d70._4_4_,uVar10);
                    if (local_d70._4_4_ < uVar10) {
                      *(undefined8 *)((longlong)plVar22 + -0x28) = 0x142a7b123;
                      FUN_146f2bc14(local_1078,uVar27);
                    }
                    ppuVar29 = &local_d78;
                    puVar14 = local_1078;
                  }
                  uVar10 = 0;
                  if (uVar23 != 0) {
                    for (; (uVar23 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
                    }
                  }
                  if (*ppuVar29 != (uint *)0x0) {
                    puVar14 = *ppuVar29;
                  }
                  puVar14[iVar12] = uVar10 | uVar20;
                  bVar31 = uVar17 != uVar23;
                  uVar23 = uVar17 ^ uVar23;
                } while (bVar31);
              }
              uVar3 = uVar28 & ~(uint)local_1250;
              uVar27 = local_a60;
              while (local_a60 = uVar27, uVar3 != 0) {
                local_a60._0_4_ = (int)uVar27;
                lVar21 = (longlong)(int)local_a60;
                uVar17 = (int)local_a60 + 1;
                local_a60._4_4_ = (uint)(uVar27 >> 0x20);
                local_a60 = CONCAT44(local_a60._4_4_,uVar17);
                if (local_a60._4_4_ < uVar17) {
                  *(undefined8 *)((longlong)plVar22 + -0x28) = 0x142a7b202;
                  FUN_146f2bc14(local_d68,uVar27 & 0xffffffff);
                }
                uVar17 = 0;
                if (uVar3 != 0) {
                  for (; (uVar3 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
                  }
                }
                puVar14 = local_a68;
                if (local_a68 == (uint *)0x0) {
                  puVar14 = local_d68;
                }
                puVar14[lVar21] = uVar17 | uVar20;
                uVar3 = uVar3 - 1 & uVar3;
                uVar27 = local_a60;
              }
            }
            uVar18 = uVar18 + 1;
          } while (uVar18 != local_1258);
        }
        param_1 = local_1268;
        uVar3 = *(uint *)(local_1268 + 0x2a8);
        uVar18 = (ulonglong)local_125c;
        local_1238 = (uint *)(uVar18 % (ulonglong)uVar3);
        if (*(int *)(local_1268 + 0x2a0) == 1) {
          iVar12 = *(int *)(local_1268 + 0x2a4);
          plVar1 = (longlong *)(local_1230 + 0xc0);
          if (*(int *)(local_1230 + 0xe8) == *(int *)(local_1230 + 0x114)) {
LAB_142a7b311:
            piVar30 = local_1240;
            puVar14 = local_a68;
            if (local_a68 == (uint *)0x0) {
              puVar14 = local_d68;
            }
            if ((int)local_a60 != 0) {
              puVar24 = puVar14 + (int)local_a60;
              do {
                bVar15 = (byte)*puVar14 & 0x1f;
                local_1218[*puVar14 >> 5] =
                     local_1218[*puVar14 >> 5] & (-2 << bVar15 | 0xfffffffeU >> 0x20 - bVar15);
                lVar21 = *(longlong *)(param_1 + 0x10);
                *(undefined8 *)((longlong)plVar22 + -0x28) = 0x142a7b360;
                FUN_146f1b984(lVar21 + 0x300,&local_1228);
                if ((longlong)local_1220 != 0) {
                  lVar21 = 0;
                  do {
                    bVar15 = (byte)*(uint *)((longlong)local_1228 + lVar21) & 0x1f;
                    local_1218[*(uint *)((longlong)local_1228 + lVar21) >> 5] =
                         local_1218[*(uint *)((longlong)local_1228 + lVar21) >> 5] &
                         (-2 << bVar15 | 0xfffffffeU >> 0x20 - bVar15);
                    lVar21 = lVar21 + 4;
                  } while ((longlong)local_1220 * 4 != lVar21);
                }
                puVar14 = puVar14 + 1;
              } while (puVar14 != puVar24);
            }
          }
          else {
            puVar14 = local_a68;
            if (local_a68 == (uint *)0x0) {
              puVar14 = local_d68;
            }
            piVar30 = local_1240;
            if ((int)local_a60 != 0) {
              lVar21 = (longlong)(int)local_a60;
              lVar16 = 0;
              do {
                uVar4 = *(undefined4 *)((longlong)puVar14 + lVar16);
                *(undefined8 *)((longlong)plVar22 + -0x28) = 0x142a7b2f7;
                FUN_146f1a94c(plVar1,uVar4);
                lVar16 = lVar16 + 4;
              } while (lVar21 * 4 != lVar16);
              goto LAB_142a7b311;
            }
          }
          puVar14 = local_58;
          if (local_58 == (uint *)0x0) {
            puVar14 = local_a58;
          }
          if ((longlong)(int)local_50 != 0) {
            puVar24 = puVar14 + (int)local_50;
            do {
              uVar17 = *puVar14;
              uVar28 = 1 << ((byte)uVar17 & 0x1f);
              uVar27 = (ulonglong)(uVar17 >> 5);
              if ((((((uint)local_1218[uVar27] >> (uVar17 & 0x1f) & 1) == 0) &&
                   (bVar15 = *(byte *)(*(longlong *)(param_1 + 0x170) + (longlong)(int)uVar17),
                   bVar15 != 0)) &&
                  ((*(uint *)(*(longlong *)(param_1 + 0x270) + uVar27 * 4) & uVar28) != 0)) &&
                 ((*(uint *)(*(longlong *)(param_1 + 0x2c8) + uVar27 * 4) & uVar28) == 0)) {
                *(undefined8 *)((longlong)plVar22 + -0x28) = 0x142a7b435;
                iVar11 = FUN_146f1a73c(plVar1,uVar17);
                *(ushort *)(*plVar1 + (longlong)iVar11 * 2) =
                     (ushort)bVar15 +
                     ((short)uVar3 -
                     (short)((((int)(uint *)(uVar18 % (ulonglong)uVar3) + uVar3) - iVar12) % uVar3))
                     + -1;
                piVar30 = local_1240;
              }
              else {
                local_1218[uVar27] = local_1218[uVar27] | uVar28;
                lVar21 = *(longlong *)(param_1 + 0x10);
                *(undefined8 *)((longlong)plVar22 + -0x28) = 0x142a7b46a;
                FUN_146f1b984(lVar21 + 0x300,&local_1228);
                if ((longlong)local_1220 != 0) {
                  lVar21 = 0;
                  do {
                    local_1218[*(uint *)((longlong)local_1228 + lVar21) >> 5] =
                         local_1218[*(uint *)((longlong)local_1228 + lVar21) >> 5] |
                         1 << ((byte)*(uint *)((longlong)local_1228 + lVar21) & 0x1f);
                    lVar21 = lVar21 + 4;
                  } while ((longlong)local_1220 * 4 != lVar21);
                }
              }
              puVar14 = puVar14 + 1;
            } while (puVar14 != puVar24);
          }
          if ((int)local_1238 == *(int *)(param_1 + 0x2a4)) {
            bVar31 = (longlong)uStack_11e0 < 0;
            uStack_11e0 = uStack_11e0 & 0xffffffff00000000;
            if (bVar31) {
              *(undefined8 *)((longlong)plVar22 + -0x28) = 0x142a7b4e2;
              FUN_14480809c(&local_11e8,0);
            }
            uVar2 = *(undefined1 *)(param_1 + 0x2a8);
            *(undefined8 *)((longlong)plVar22 + -0x28) = 0x142a7b4fd;
            FUN_142a77bac(plVar1,uVar2);
            if ((longlong)(int)uStack_11e0 != 0) {
              puVar14 = local_11e8 + (int)uStack_11e0;
              puVar24 = local_11e8;
              do {
                local_1218[*puVar24 >> 5] = local_1218[*puVar24 >> 5] | 1 << ((byte)*puVar24 & 0x1f)
                ;
                lVar21 = *(longlong *)(param_1 + 0x10);
                *(undefined8 *)((longlong)plVar22 + -0x28) = 0x142a7b549;
                FUN_146f1b984(lVar21 + 0x300,&local_1228);
                if ((longlong)local_1220 != 0) {
                  lVar21 = 0;
                  do {
                    local_1218[*(uint *)((longlong)local_1228 + lVar21) >> 5] =
                         local_1218[*(uint *)((longlong)local_1228 + lVar21) >> 5] |
                         1 << ((byte)*(uint *)((longlong)local_1228 + lVar21) & 0x1f);
                    lVar21 = lVar21 + 4;
                  } while ((longlong)local_1220 * 4 != lVar21);
                }
                puVar24 = puVar24 + 1;
              } while (puVar24 != puVar14);
            }
          }
        }
        else {
          puVar14 = local_a68;
          if (local_a68 == (uint *)0x0) {
            puVar14 = local_d68;
          }
          if ((longlong)(int)local_a60 != 0) {
            puVar24 = puVar14 + (int)local_a60;
            do {
              bVar15 = (byte)*puVar14 & 0x1f;
              local_1218[*puVar14 >> 5] =
                   local_1218[*puVar14 >> 5] & (-2 << bVar15 | 0xfffffffeU >> 0x20 - bVar15);
              lVar21 = *(longlong *)(param_1 + 0x10);
              *(undefined8 *)((longlong)plVar22 + -0x28) = 0x142a7b5e6;
              FUN_146f1b984(lVar21 + 0x300,&local_1228);
              if ((longlong)local_1220 != 0) {
                lVar21 = 0;
                do {
                  bVar15 = (byte)*(uint *)((longlong)local_1228 + lVar21) & 0x1f;
                  local_1218[*(uint *)((longlong)local_1228 + lVar21) >> 5] =
                       local_1218[*(uint *)((longlong)local_1228 + lVar21) >> 5] &
                       (-2 << bVar15 | 0xfffffffeU >> 0x20 - bVar15);
                  lVar21 = lVar21 + 4;
                } while ((longlong)local_1220 * 4 != lVar21);
              }
              puVar14 = puVar14 + 1;
            } while (puVar14 != puVar24);
          }
          piVar30 = local_1240;
          puVar14 = local_58;
          if (local_58 == (uint *)0x0) {
            puVar14 = local_a58;
          }
          if ((longlong)(int)local_50 != 0) {
            puVar24 = puVar14 + (int)local_50;
            do {
              local_1218[*puVar14 >> 5] = local_1218[*puVar14 >> 5] | 1 << ((byte)*puVar14 & 0x1f);
              lVar21 = *(longlong *)(param_1 + 0x10);
              *(undefined8 *)((longlong)plVar22 + -0x28) = 0x142a7b684;
              FUN_146f1b984(lVar21 + 0x300,&local_1228);
              if ((longlong)local_1220 != 0) {
                lVar21 = 0;
                do {
                  local_1218[*(uint *)((longlong)local_1228 + lVar21) >> 5] =
                       local_1218[*(uint *)((longlong)local_1228 + lVar21) >> 5] |
                       1 << ((byte)*(uint *)((longlong)local_1228 + lVar21) & 0x1f);
                  lVar21 = lVar21 + 4;
                } while ((longlong)local_1220 * 4 != lVar21);
              }
              puVar14 = puVar14 + 1;
            } while (puVar14 != puVar24);
          }
        }
        uVar3 = *(uint *)(param_1 + 0x74);
        if ((ulonglong)uVar3 != 0) {
          lVar21 = *(longlong *)(local_1230 + 0x30);
          lVar16 = *(longlong *)(local_1230 + 0x60);
          uVar18 = 0;
          do {
            *(uint *)(lVar16 + uVar18 * 4) = ~local_1218[uVar18] & *(uint *)(lVar21 + uVar18 * 4);
            uVar18 = uVar18 + 1;
          } while (uVar3 != uVar18);
        }
        plVar1 = (longlong *)(local_1230 + 0x60);
        puVar14 = local_d78;
        if (local_d78 == (uint *)0x0) {
          puVar14 = local_1078;
        }
        if ((longlong)(int)local_d70 == 0) {
          iVar12 = 0;
        }
        else {
          lVar21 = 0;
          do {
            bVar15 = (byte)*(uint *)((longlong)puVar14 + lVar21) & 0x1f;
            puVar24 = (uint *)(*plVar1 + (ulonglong)(*(uint *)((longlong)puVar14 + lVar21) >> 5) * 4
                              );
            *puVar24 = *puVar24 & (-2 << bVar15 | 0xfffffffeU >> 0x20 - bVar15);
            lVar21 = lVar21 + 4;
            iVar12 = (int)local_d70;
          } while ((longlong)(int)local_d70 * 4 != lVar21);
        }
        puVar14 = local_d78;
        if (local_d78 == (uint *)0x0) {
          puVar14 = local_1078;
        }
        local_1248 = puVar14 + iVar12;
        if (*(int *)(param_1 + 0x2a0) == 1) {
          if (iVar12 != 0) {
            local_1250 = (longlong *)(local_1230 + 0xc0);
            local_1258 = CONCAT44(local_1258._4_4_,
                                  ((*(int *)(param_1 + 0x2a4) - (int)local_1238) +
                                  *(uint *)(param_1 + 0x2a8)) % *(uint *)(param_1 + 0x2a8) + 0xffff)
            ;
            lVar21 = local_1230;
            do {
              uVar3 = *puVar14;
              uVar7 = *(undefined8 *)(param_1 + 0x10);
              *(undefined8 *)((longlong)plVar22 + -0x28) = 0x142a7b7c3;
              iVar12 = FUN_142a7c360(uVar7,plVar1,uVar3);
              plVar25 = local_1250;
              bVar15 = (byte)uVar3;
              if (iVar12 == 0) {
                uVar17 = 1 << (bVar15 & 0x1f);
                uVar18 = (ulonglong)(uVar3 >> 5);
                if (((uint)local_1218[uVar18] >> (uVar3 & 0x1f) & 1) == 0) {
                  bVar31 = false;
                  uVar28 = uVar17;
                  local_1238 = puVar14;
                  if ((*(uint *)(*(longlong *)(local_1230 + 0x148) + uVar18 * 4) & uVar17) == 0) {
                    bVar15 = *(byte *)(*(longlong *)(param_1 + 0x170) + (longlong)(int)uVar3);
                    bVar31 = true;
                    uVar28 = 0;
                    if (bVar15 != 0) {
                      sVar9 = (short)local_1258;
                      *(undefined8 *)((longlong)plVar22 + -0x28) = 0x142a7b838;
                      iVar12 = FUN_146f1a73c(plVar25,uVar3);
                      *(ushort *)(*plVar25 + (longlong)iVar12 * 2) = (ushort)bVar15 + sVar9;
                      bVar31 = false;
                      uVar28 = uVar17;
                    }
                  }
                  *(uint *)(*plVar1 + uVar18 * 4) =
                       ~uVar17 & *(uint *)(*plVar1 + uVar18 * 4) | uVar28;
                  lVar21 = *(longlong *)(param_1 + 0x10);
                  *(undefined8 *)((longlong)plVar22 + -0x28) = 0x142a7b874;
                  FUN_146f1b984(lVar21 + 0x300);
                  puVar14 = local_1238;
                  lVar21 = local_1230;
                  piVar30 = local_1240;
                  if ((longlong)local_1220 != 0) {
                    lVar16 = 0;
                    do {
                      uVar3 = *(uint *)((longlong)local_1228 + lVar16);
                      uVar28 = 1 << ((byte)uVar3 & 0x1f);
                      uVar17 = 0;
                      if (bVar31) {
                        uVar17 = uVar28;
                      }
                      uVar18 = (ulonglong)(uVar3 >> 5);
                      local_1218[uVar18] = local_1218[uVar18] & ~(1 << (uVar3 & 0x1f)) | uVar17;
                      uVar17 = 0;
                      if ((*(uint *)(*(longlong *)(local_1230 + 0x30) + uVar18 * 4) >>
                           (uVar3 & 0x1f) & 1) != 0) {
                        uVar17 = uVar28;
                      }
                      if (bVar31) {
                        uVar17 = 0;
                      }
                      *(uint *)(*(longlong *)(local_1230 + 0x60) + uVar18 * 4) =
                           *(uint *)(*(longlong *)(local_1230 + 0x60) + uVar18 * 4) &
                           ~(1 << (uVar3 & 0x1f)) | uVar17;
                      lVar16 = lVar16 + 4;
                    } while ((longlong)local_1220 * 4 != lVar16);
                  }
                }
                else {
                  uVar27 = (ulonglong)((uVar3 >> 5) << 2);
                  *(uint *)((longlong)local_1218 + uVar27) = local_1218[uVar18] | uVar17;
                  puVar24 = (uint *)(*plVar1 + uVar27);
                  *puVar24 = *puVar24 & ~uVar17;
                  lVar21 = *(longlong *)(param_1 + 0x10);
                  *(undefined8 *)((longlong)plVar22 + -0x28) = 0x142a7ba09;
                  FUN_146f1b984(lVar21 + 0x300);
                  lVar21 = local_1230;
                  if ((longlong)local_1220 != 0) {
                    lVar16 = 0;
                    do {
                      bVar15 = (byte)*(uint *)((longlong)local_1228 + lVar16);
                      uVar18 = (ulonglong)(*(uint *)((longlong)local_1228 + lVar16) >> 5);
                      local_1218[uVar18] = local_1218[uVar18] | 1 << (bVar15 & 0x1f);
                      bVar15 = bVar15 & 0x1f;
                      puVar24 = (uint *)(*plVar1 + uVar18 * 4);
                      *puVar24 = *puVar24 & (-2 << bVar15 | 0xfffffffeU >> 0x20 - bVar15);
                      lVar16 = lVar16 + 4;
                    } while ((longlong)local_1220 * 4 != lVar16);
                  }
                }
              }
              else {
                local_1238 = puVar14;
                *(undefined8 *)((longlong)plVar22 + -0x28) = 0x142a7b924;
                FUN_146f1a94c(plVar25,uVar3);
                local_1218[uVar3 >> 5] =
                     local_1218[uVar3 >> 5] &
                     (-2 << (bVar15 & 0x1f) | 0xfffffffeU >> 0x20 - (bVar15 & 0x1f));
                puVar14 = (uint *)(*plVar1 + (ulonglong)(uVar3 >> 5) * 4);
                *puVar14 = *puVar14 | 1 << (bVar15 & 0x1f);
                lVar16 = *(longlong *)(param_1 + 0x10);
                *(undefined8 *)((longlong)plVar22 + -0x28) = 0x142a7b96c;
                FUN_146f1b984(lVar16 + 0x300);
                puVar14 = local_1238;
                if ((longlong)local_1220 != 0) {
                  lVar16 = 0;
                  do {
                    uVar3 = *(uint *)((longlong)local_1228 + lVar16);
                    bVar15 = (byte)uVar3 & 0x1f;
                    uVar18 = (ulonglong)(uVar3 >> 5);
                    local_1218[uVar18] =
                         local_1218[uVar18] & (-2 << bVar15 | 0xfffffffeU >> 0x20 - bVar15);
                    uVar17 = 1 << ((byte)uVar3 & 0x1f);
                    if ((*(uint *)(*(longlong *)(lVar21 + 0x30) + uVar18 * 4) >> (uVar3 & 0x1f) & 1)
                        == 0) {
                      uVar17 = 0;
                    }
                    *(uint *)(*(longlong *)(lVar21 + 0x60) + uVar18 * 4) =
                         *(uint *)(*(longlong *)(lVar21 + 0x60) + uVar18 * 4) &
                         ~(1 << (uVar3 & 0x1f)) | uVar17;
                    lVar16 = lVar16 + 4;
                  } while ((longlong)local_1220 * 4 != lVar16);
                }
              }
              puVar14 = puVar14 + 1;
            } while (puVar14 != local_1248);
          }
        }
        else if (iVar12 != 0) {
          do {
            uVar3 = *puVar14;
            uVar7 = *(undefined8 *)(param_1 + 0x10);
            *(undefined8 *)((longlong)plVar22 + -0x28) = 0x142a7ba90;
            iVar12 = FUN_142a7c360(uVar7,plVar1,uVar3);
            lVar21 = local_1230;
            uVar17 = 1 << ((byte)uVar3 & 0x1f);
            if (iVar12 == 0) {
              uVar17 = 0;
            }
            *(uint *)(*plVar1 + (ulonglong)(uVar3 >> 5) * 4) =
                 *(uint *)(*plVar1 + (ulonglong)(uVar3 >> 5) * 4) & ~(1 << (uVar3 & 0x1f)) | uVar17;
            lVar16 = *(longlong *)(param_1 + 0x10);
            *(undefined8 *)((longlong)plVar22 + -0x28) = 0x142a7badf;
            FUN_146f1b984(lVar16 + 0x300);
            if ((longlong)local_1220 != 0) {
              lVar16 = 0;
              do {
                uVar3 = *(uint *)((longlong)local_1228 + lVar16);
                uVar17 = 1 << ((byte)uVar3 & 0x1f);
                uVar18 = (ulonglong)(uVar3 >> 5);
                if ((*(uint *)(*(longlong *)(lVar21 + 0x30) + uVar18 * 4) >> (uVar3 & 0x1f) & 1) ==
                    0) {
                  uVar17 = 0;
                }
                lVar8 = *(longlong *)(lVar21 + 0x60);
                if (iVar12 == 0) {
                  uVar17 = 0;
                }
                *(uint *)(lVar8 + uVar18 * 4) =
                     *(uint *)(lVar8 + uVar18 * 4) & ~(1 << (uVar3 & 0x1f)) | uVar17;
                lVar16 = lVar16 + 4;
              } while ((longlong)local_1220 * 4 != lVar16);
            }
            puVar14 = puVar14 + 1;
          } while (puVar14 != local_1248);
        }
        puVar14 = local_1280 + 1;
      } while (puVar14 != local_1278);
    }
  }
  if (local_11e8 != (uint *)0x0) {
    *(undefined8 *)((longlong)plVar22 + -0x28) = 0x142a7bbfb;
    FUN_1400020a8();
  }
  if (local_d78 != (uint *)0x0) {
    *(undefined8 *)((longlong)plVar22 + -0x28) = 0x142a7bc14;
    FUN_1400020a8();
  }
  if (local_a68 != (uint *)0x0) {
    *(undefined8 *)((longlong)plVar22 + -0x28) = 0x142a7bc2d;
    FUN_1400020a8();
  }
  if (local_58 != (uint *)0x0) {
    *(undefined8 *)((longlong)plVar22 + -0x28) = 0x142a7bc46;
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)&local_1218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((longlong)plVar22 + -0x28) = &UNK_142a7bc7a;
  FUN_144d8e3a0();
}



// FUNCTION 142a7bc80 FUN_142a7bc80 body=216 status=ok
// SIG undefined FUN_142a7bc80(void)

void FUN_142a7bc80(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  memset(*(void **)(param_1 + 0x288),0,(longlong)*(int *)(param_1 + 0x290) << 2);
  iVar1 = *(int *)(param_1 + 0x268);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x260);
    lVar3 = 0;
    do {
      if (*(int *)(lVar2 + 0x10 + lVar3) != 0) {
        (**(code **)(**(longlong **)(lVar2 + lVar3) + 0x2d8))();
      }
      lVar3 = lVar3 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar3);
  }
  *(undefined4 *)(param_1 + 0x2ac) = 0;
  memset(*(void **)(param_1 + 0x2b0),0,(longlong)*(int *)(param_1 + 0x2b8) << 2);
  memset(*(void **)(param_1 + 0x2c8),0,(longlong)*(int *)(param_1 + 0x2d0) << 2);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a7bd5a FUN_142a7bd5a body=140 status=ok
// SIG undefined FUN_142a7bd5a(void)

void FUN_142a7bd5a(longlong param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  ushort uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  if (((param_3 == 0) ||
      ((param_3 < *(uint *)(*(longlong *)(param_1 + 0x28) + 0x30) &&
       ((*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x20) +
                  (ulonglong)(param_3 >> 5) * 4) >> (param_3 & 0x1f) & 1) != 0)))) &&
     (uVar2 = *(ushort *)(*(longlong *)(param_1 + 0xc0) + (longlong)(int)param_2 * 2),
     *(short *)(*(longlong *)(param_1 + 0xc0) + (longlong)(int)param_2 * 2) = (short)param_3,
     uVar2 != param_3)) {
    *(byte *)(param_1 + 0x2e0) = *(byte *)(param_1 + 0x2e0) | 8;
    uVar4 = 1 << ((byte)param_2 & 0x1f);
    uVar3 = (ulonglong)((param_2 >> 5) * 4);
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x90) + uVar3);
    *puVar1 = *puVar1 | uVar4;
    if ((*(uint *)(*(longlong *)(param_1 + 0xa8) + uVar3) >> (param_2 & 0x1f) & 1) != 0) {
      *(byte *)(param_1 + 0x2e0) = *(byte *)(param_1 + 0x2e0) | 4;
      puVar1 = (uint *)(*(longlong *)(param_1 + 0x78) + (ulonglong)(param_2 >> 5) * 4);
      *puVar1 = *puVar1 | uVar4;
    }
  }
  return;
}



// FUNCTION 142a7bde6 FUN_142a7bde6 body=634 status=ok
// SIG undefined FUN_142a7bde6(void)

char FUN_142a7bde6(longlong *param_1,uint param_2,uint param_3,longlong param_4)

{
  uint *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  byte bVar7;
  undefined1 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  longlong local_88;
  int *local_80;
  uint local_78;
  int local_74;
  undefined8 *local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_3 != 2) {
    uVar12 = param_3 & 0x7fffffff;
    lVar11 = (longlong)(int)param_2;
    if ((int)param_3 < 0) {
      if (uVar12 < *(uint *)(param_1 + 0x4d)) goto LAB_142a7be40;
    }
    else if (param_3 < 2) {
LAB_142a7be40:
      lVar3 = param_1[2];
      lVar6 = (longlong)((int)param_2 / 100);
      lVar9 = *(longlong *)(*(longlong *)(lVar3 + 0x270) + lVar6 * 8);
      lVar10 = (longlong)((int)param_2 % 100) * 0x38;
      local_88 = param_4;
      if ((-1 < (int)param_3) || (*(int *)(lVar9 + 0x28 + lVar10) == 0)) {
        bVar7 = (byte)param_2;
        local_98 = lVar6;
        local_90 = lVar3;
        if (*(char *)(param_1[0x4a] + lVar11) == -1) {
          *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) | 4;
          puVar1 = (uint *)(param_1[0x15] + (ulonglong)(param_2 >> 5) * 4);
          *puVar1 = *puVar1 & (-2 << (bVar7 & 0x1f) | 0xfffffffeU >> 0x20 - (bVar7 & 0x1f));
          puVar1 = (uint *)(param_1[0xf] + (ulonglong)(param_2 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << (bVar7 & 0x1f);
          FUN_146f2175a(param_1,param_2);
        }
        else {
          FUN_142a7c062(param_1,param_2);
        }
        lVar3 = local_88;
        if ((int)param_3 < 0) {
          lVar9 = lVar9 + lVar10;
          local_70 = (undefined8 *)(param_1[0x48] + lVar11 * 8);
          *local_70 = 0;
          local_68 = local_88;
          local_60 = *(undefined8 *)(lVar9 + 0x18);
          local_58 = *(undefined8 *)(lVar9 + 0x10);
          local_50 = *(undefined8 *)
                      (*(longlong *)(*(longlong *)(local_90 + 0x290) + local_98 * 8) +
                      (longlong)((int)param_2 % 100) * 8);
          lVar9 = param_1[0x4c];
          plVar4 = *(longlong **)(lVar9 + (ulonglong)uVar12 * 0x18);
          cVar5 = (**(code **)(*plVar4 + 0x2b0))(plVar4,param_2);
          if (cVar5 != '\0') {
            plVar2 = (longlong *)(lVar9 + (ulonglong)uVar12 * 0x18);
            plVar4 = plVar2 + 2;
            *(int *)plVar4 = (int)*plVar4 + 1;
            lVar9 = *plVar2;
            local_74 = *(int *)(lVar9 + 0x38);
            local_80 = *(int **)(lVar9 + 0x28);
            local_78 = local_74 + 0x1fU >> 5;
            if (local_74 == 0) {
              local_80 = &local_74;
            }
            uVar12 = 1 << (bVar7 & 0x1f);
            local_80[param_2 >> 5] = local_80[param_2 >> 5] | uVar12;
            *(char *)(param_1[0x4a] + lVar11) = (char)param_3;
            puVar1 = (uint *)(param_1[0x4e] + (ulonglong)(param_2 >> 5) * 4);
            *puVar1 = *puVar1 | uVar12;
            lVar9 = *param_1;
            if ((longlong)*(int *)(lVar9 + 0x38) != 0) {
              lVar10 = 0;
              lVar6 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar9 + 0x30) + lVar10) == lVar3) {
                  lVar6 = *(longlong *)(lVar9 + 0x30) - lVar6;
                  if (lVar6 != 0) {
                    puVar8 = (undefined1 *)(lVar6 + 8);
                    goto LAB_142a7c010;
                  }
                  break;
                }
                lVar6 = lVar6 + -0xc;
                lVar10 = lVar10 + 0xc;
              } while (-lVar6 != (longlong)*(int *)(lVar9 + 0x38) * 0xc);
            }
            puVar8 = (undefined1 *)(lVar9 + 0x29);
LAB_142a7c010:
            *(undefined1 *)(param_1[0x2e] + lVar11) = *puVar8;
          }
        }
        else {
          cVar5 = '\x01';
          if (param_3 != 0) {
            puVar1 = (uint *)(param_1[0x15] + (ulonglong)(param_2 >> 5) * 4);
            *puVar1 = *puVar1 | 1 << (bVar7 & 0x1f);
          }
        }
        goto LAB_142a7be87;
      }
    }
  }
  cVar5 = '\0';
LAB_142a7be87:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return cVar5;
}



// FUNCTION 142a7c062 FUN_142a7c062 body=230 status=ok
// SIG undefined FUN_142a7c062(void)

void FUN_142a7c062(longlong param_1,uint param_2,uint param_3)

{
  longlong *plVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_58 [32];
  int *local_38;
  uint local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar5 = (longlong)(int)param_2;
  *(undefined1 *)(*(longlong *)(param_1 + 0x250) + lVar5) = 0xff;
  lVar3 = *(longlong *)(param_1 + 0x240);
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x260) + (ulonglong)param_3 * 0x18);
  *(int *)(plVar1 + 2) = (int)plVar1[2] + -1;
  local_2c = *(int *)(*plVar1 + 0x38);
  local_38 = *(int **)(*plVar1 + 0x28);
  local_30 = local_2c + 0x1fU >> 5;
  if (local_2c == 0) {
    local_38 = &local_2c;
  }
  uVar7 = 1 << ((byte)param_2 & 0x1f);
  bVar4 = (byte)param_2 & 0x1f;
  uVar6 = -2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4;
  uVar8 = (ulonglong)(param_2 >> 5);
  local_38[uVar8] = local_38[uVar8] & uVar6;
  (**(code **)(*(longlong *)*plVar1 + 0x2b8))((longlong *)*plVar1,lVar5,lVar3 + lVar5 * 8);
  puVar2 = (uint *)(*(longlong *)(param_1 + 0x270) + uVar8 * 4);
  *puVar2 = *puVar2 & uVar6;
  puVar2 = (uint *)(*(longlong *)(param_1 + 0x288) + uVar8 * 4);
  *puVar2 = *puVar2 | uVar7;
  puVar2 = (uint *)(*(longlong *)(param_1 + 0x2b0) + uVar8 * 4);
  *puVar2 = *puVar2 | uVar7;
  *(int *)(param_1 + 0x2ac) = *(int *)(param_1 + 0x2ac) + 1;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a7c14a FUN_142a7c14a body=117 status=ok
// SIG undefined FUN_142a7c14a(void)

void FUN_142a7c14a(longlong param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  
  *(byte *)(param_1 + 0x2e0) = *(byte *)(param_1 + 0x2e0) | 1;
  uVar5 = 1 << ((byte)param_2 & 0x1f);
  puVar1 = (uint *)(*(longlong *)(param_1 + 0x40) + (ulonglong)(param_2 >> 5) * 4);
  *puVar1 = *puVar1 | uVar5;
  puVar1 = (uint *)(*(longlong *)(param_1 + 0x58) + (ulonglong)(param_2 >> 5) * 4);
  *puVar1 = *puVar1 | uVar5;
  iVar2 = *(int *)(param_1 + 0x268);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x260);
    lVar6 = 0;
    do {
      plVar4 = *(longlong **)(lVar3 + lVar6);
      (**(code **)(*plVar4 + 0x2a0))(plVar4,param_2);
      lVar6 = lVar6 + 0x18;
    } while ((longlong)iVar2 * 0x18 != lVar6);
  }
  return;
}



// FUNCTION 142a7c1c0 FUN_142a7c1c0 body=416 status=ok
// SIG undefined FUN_142a7c1c0(void)

void FUN_142a7c1c0(longlong param_1,uint param_2)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  byte bVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  
  *(byte *)(param_1 + 0x2e0) = *(byte *)(param_1 + 0x2e0) | 2;
  bVar8 = (byte)param_2 & 0x1f;
  uVar11 = -2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8;
  uVar10 = (ulonglong)((param_2 >> 5) * 4);
  puVar1 = (uint *)(*(longlong *)(param_1 + 0x40) + uVar10);
  *puVar1 = *puVar1 & uVar11;
  puVar1 = (uint *)(*(longlong *)(param_1 + 0x58) + uVar10);
  *puVar1 = *puVar1 & uVar11;
  FUN_146f215cc();
  iVar3 = *(int *)(param_1 + 0x268);
  if ((longlong)iVar3 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x260);
    lVar14 = 0;
    do {
      plVar6 = *(longlong **)(lVar5 + lVar14);
      (**(code **)(*plVar6 + 0x2a8))(plVar6,param_2);
      lVar14 = lVar14 + 0x18;
    } while ((longlong)iVar3 * 0x18 != lVar14);
  }
  uVar4 = *(uint *)(param_1 + 0x1e8);
  uVar13 = 0;
  cVar2 = *(char *)(param_1 + 0x1f0);
  if ((ulonglong)uVar4 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x1e0);
    uVar10 = 0;
    do {
      uVar12 = 0xffffffff;
      if (uVar10 == uVar4 - 1) {
        uVar12 = 0xffffffff >> (-cVar2 & 0x1fU);
      }
      uVar12 = uVar12 & *(uint *)(lVar5 + uVar10 * 4);
      uVar9 = uVar13;
      if (uVar12 != 0) {
        do {
          if ((2 < uVar9 - 1 && (uVar12 & 1) != 0) &&
             (lVar14 = FUN_146f21ed8(param_1,uVar9), lVar14 != 0)) {
            if (param_2 != 0) {
              FUN_146f2cf92(lVar14,param_2);
            }
            puVar1 = (uint *)((ulonglong)(uint)(*(int *)(param_1 + 0x23c) * *(int *)(lVar14 + 0x50))
                              * 4 + *(longlong *)(param_1 + 0xd0) + (ulonglong)(param_2 >> 5) * 4);
            *puVar1 = *puVar1 & uVar11;
            puVar1 = (uint *)(*(longlong *)(param_1 + 0x1f8) + (ulonglong)(uVar9 >> 5) * 4);
            *puVar1 = *puVar1 | 1 << ((byte)uVar9 & 0x1f);
          }
          bVar7 = 1 < uVar12;
          uVar12 = uVar12 >> 1;
          uVar9 = uVar9 + 1;
        } while (bVar7);
      }
      uVar10 = uVar10 + 1;
      uVar13 = uVar13 + 0x20;
    } while (uVar10 != uVar4);
  }
  return;
}



// FUNCTION 142a7c360 FUN_142a7c360 body=168 status=ok
// SIG undefined FUN_142a7c360(void)

bool FUN_142a7c360(longlong param_1,longlong *param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146f2a1de(param_1 + 0x300,&local_48);
  if ((longlong)local_40 != 0) {
    lVar2 = 0;
    do {
      iVar1 = FUN_142a7c360(param_1,param_2,*(undefined4 *)(local_48 + lVar2));
      if (iVar1 != 0) {
        bVar3 = true;
        goto LAB_142a7c3e4;
      }
      lVar2 = lVar2 + 4;
    } while ((longlong)local_40 * 4 != lVar2);
  }
  bVar3 = (*(uint *)(*param_2 + (ulonglong)(param_3 >> 5) * 4) >> (param_3 & 0x1f) & 1) != 0;
LAB_142a7c3e4:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a7c40a FUN_142a7c40a body=110 status=ok
// SIG undefined FUN_142a7c40a(void)

void FUN_142a7c40a(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  char cVar3;
  
  cVar3 = FUN_146f1a26a(*(undefined8 *)(param_1 + 0x20));
  if (cVar3 != '\0') {
    cVar3 = FUN_146f1a52e(*(undefined8 *)(param_1 + 0x20),param_2);
    if (cVar3 == '\0') {
      uVar2 = (ulonglong)(((uint)param_2 & 0xffffff) >> 5);
      uVar1 = *(uint *)(*(longlong *)(param_1 + 0x1e0) + uVar2 * 4);
      if ((uVar1 >> ((uint)param_2 & 0x1f) & 1) == 0) {
        *(uint *)(*(longlong *)(param_1 + 0x1e0) + uVar2 * 4) = uVar1 | 1 << ((byte)param_2 & 0x1f);
        FUN_146f21d3e(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142a7c478 FUN_142a7c478 body=70 status=ok
// SIG undefined FUN_142a7c478(void)

void FUN_142a7c478(longlong param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (param_2 != 0) {
    uVar2 = (ulonglong)(((uint)param_2 & 0xffffff) >> 5);
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x1e0) + uVar2 * 4);
    if ((uVar1 >> ((uint)param_2 & 0x1f) & 1) != 0) {
      *(uint *)(*(longlong *)(param_1 + 0x1e0) + uVar2 * 4) = uVar1 & ~(1 << ((byte)param_2 & 0x1f))
      ;
      FUN_146f21ddc(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 142a7c4be FUN_142a7c4be body=537 status=ok
// SIG undefined FUN_142a7c4be(void)

void FUN_142a7c4be(longlong param_1,uint param_2,ulonglong param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [40];
  undefined1 local_50 [4];
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = param_2 & 0xffffff;
  if (2 < uVar2 - 1) {
    uVar6 = (uint)param_3;
    uVar7 = 1 << ((byte)param_3 & 0x1f);
    uVar8 = param_3 >> 5 & 0x7ffffff;
    if ((*(uint *)(*(longlong *)(param_1 + 0x40) + uVar8 * 4) >> (uVar6 & 0x1f) & 1) != 0) {
      if ((*(uint *)(*(longlong *)(param_1 + 0x1e0) + (ulonglong)(uVar2 >> 5) * 4) >>
           (param_2 & 0x1f) & 1) != 0) {
        lVar3 = FUN_146f21ed8(param_1,uVar2);
        if (uVar6 != 0) {
          if (param_4 == 1) {
            local_4c = uVar6;
            lVar4 = FUN_146f2d120(lVar3,param_3 & 0xffffffff);
            if ((local_4c != 0) &&
               (*(uint *)(lVar4 + 0x78) == 0 || *(uint *)(lVar4 + 0x78) == local_4c)) {
              *(uint *)(lVar4 + 0x78) = local_4c;
              FUN_146f22a5c(lVar4,0);
            }
            if (*(uint *)(lVar4 + 0x78) == 0 || *(uint *)(lVar4 + 0x78) == uVar6) {
              *(uint *)(lVar4 + 0x78) = uVar6;
              local_4c = (uint)(param_3 >> 0x20);
              FUN_146f2c9b0(lVar4,local_50);
            }
          }
          else {
            lVar4 = FUN_146f22ab6(lVar3,param_3 & 0xffffffff);
            if (lVar4 != 0) {
              if (*(uint *)(lVar4 + 0x78) == 0 || *(uint *)(lVar4 + 0x78) == uVar6) {
                *(uint *)(lVar4 + 0x78) = uVar6;
                FUN_146f22a5c(lVar4,param_3 >> 0x20);
              }
              if (*(int *)(lVar4 + 0x38) == *(int *)(lVar4 + 0x5c)) {
                FUN_146f2cf92(lVar3,param_3 & 0xffffffff);
              }
            }
          }
        }
        lVar4 = FUN_146f22b16(lVar3,param_3 & 0xffffffff);
        if (lVar4 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = 0;
          if (*(int *)(lVar4 + 0x38) != *(int *)(lVar4 + 0x5c)) {
            uVar6 = uVar7;
          }
        }
        puVar5 = (uint *)((ulonglong)(uint)(*(int *)(param_1 + 0x23c) * *(int *)(lVar3 + 0x50)) * 4
                         + *(longlong *)(param_1 + 0xd0));
        puVar5[uVar8] = ~uVar7 & puVar5[uVar8] | uVar6;
        uVar6 = *(uint *)(param_1 + 0x50) + 0x1f;
        if (0x1f < uVar6) {
          uVar7 = 0xfffffffe;
          lVar3 = 0;
LAB_142a7c648:
          uVar7 = uVar7 & *puVar5;
          if (uVar7 == 0) goto code_r0x000142a7c64d;
          iVar1 = 0;
          if (uVar7 != 0) {
            for (; (uVar7 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
            }
          }
          if ((uint)(iVar1 - (int)lVar3) < *(uint *)(param_1 + 0x50)) goto LAB_142a7c533;
        }
LAB_142a7c674:
        puVar5 = (uint *)(*(longlong *)(param_1 + 0x1f8) + (ulonglong)(uVar2 >> 5) * 4);
        *puVar5 = *puVar5 | 1 << ((byte)param_2 & 0x1f);
      }
    }
  }
LAB_142a7c533:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000142a7c64d:
  lVar3 = lVar3 + -0x20;
  puVar5 = puVar5 + 1;
  uVar7 = 0xffffffff;
  if ((ulonglong)(uVar6 & 0xffffffe0) + lVar3 == 0) goto LAB_142a7c674;
  goto LAB_142a7c648;
}



// FUNCTION 142a7c6d8 FUN_142a7c6d8 body=218 status=ok
// SIG undefined FUN_142a7c6d8(void)

undefined8 FUN_142a7c6d8(longlong param_1,ulonglong param_2)

{
  uint *puVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  cVar2 = FUN_146f1a26a(*(undefined8 *)(param_1 + 0x20));
  if ((cVar2 != '\0') &&
     (cVar2 = FUN_146f1a52e(*(undefined8 *)(param_1 + 0x20),param_2), cVar2 == '\0')) {
    uVar6 = 1 << ((byte)param_2 & 0x1f);
    uVar4 = (uint)(param_2 >> 5) & 0x7ffff;
    if ((*(uint *)(*(longlong *)(param_1 + 0x1e0) + (ulonglong)uVar4 * 4) >> ((uint)param_2 & 0x1f)
        & 1) == 0) {
      FUN_142a779ec(*(undefined8 *)(param_1 + 0x20),param_2);
      uVar4 = uVar4 << 2;
      puVar1 = (uint *)(*(longlong *)(param_1 + 0x180) + (ulonglong)uVar4);
      *puVar1 = *puVar1 | uVar6;
      puVar1 = (uint *)(*(longlong *)(param_1 + 0x1b0) + (ulonglong)uVar4);
      *puVar1 = *puVar1 | uVar6;
      *(byte *)(param_1 + 0x2e0) = *(byte *)(param_1 + 0x2e0) | 0x20;
      uVar3 = FUN_146f21bae(param_1);
      uVar7 = (ulonglong)((uint)param_2 & 0xffffff);
      *(undefined4 *)(*(longlong *)(param_1 + 0x108) + uVar7 * 4) = uVar3;
      uVar6 = *(uint *)(param_1 + 0x23c);
      uVar5 = CONCAT71((uint7)(uint3)(uVar4 >> 8),1);
      if ((ulonglong)uVar6 == 0) {
        return uVar5;
      }
      memset((void *)((ulonglong)(*(int *)(*(longlong *)(param_1 + 0x108) + uVar7 * 4) * uVar6) * 4
                     + *(longlong *)(param_1 + 0xd0)),0,(ulonglong)uVar6 << 2);
      return uVar5;
    }
  }
  return 0;
}



// FUNCTION 142a7c7b2 FUN_142a7c7b2 body=570 status=ok
// SIG undefined FUN_142a7c7b2(void)

void FUN_142a7c7b2(longlong param_1,ulonglong param_2)

{
  uint *puVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [36];
  uint local_74;
  ulonglong local_70;
  ulonglong local_68;
  longlong local_60;
  int *local_58;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar4 = FUN_146f1a26a(*(undefined8 *)(param_1 + 0x20));
  if (cVar4 != '\0') {
    uVar8 = (uint)param_2;
    uVar7 = 1 << ((byte)param_2 & 0x1f);
    uVar5 = (uint)(param_2 >> 5) & 0x7ffff;
    uVar10 = (ulonglong)uVar5;
    if ((*(uint *)(*(longlong *)(param_1 + 0x180) + uVar10 * 4) >> (uVar8 & 0x1f) & 1) == 0) {
      if ((*(uint *)(*(longlong *)(param_1 + 0x198) + uVar10 * 4) & uVar7) != 0) {
        uVar10 = (ulonglong)(uVar5 << 2);
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x1c8) + uVar10);
        *puVar1 = *puVar1 & ~uVar7;
        FUN_142a7c9ee(param_1,param_2,0);
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x198) + uVar10);
        *puVar1 = *puVar1 & ~uVar7;
        uVar5 = *(uint *)(*(longlong *)(param_1 + 0x108) + (ulonglong)(uVar8 & 0xffffff) * 4);
        *(undefined4 *)(*(longlong *)(param_1 + 0x108) + (ulonglong)(uVar8 & 0xffffff) * 4) = 0;
        uVar7 = *(uint *)(param_1 + 0xe8);
        local_58 = *(int **)(param_1 + 0xe0);
        local_50 = uVar7 & 0x7ffffff;
        local_4c = uVar7 << 5;
        if ((uVar7 & 0x7ffffff) == 0) {
          local_58 = &local_4c;
        }
        bVar3 = (byte)uVar5 & 0x1f;
        local_58[uVar5 >> 5] = local_58[uVar5 >> 5] & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
        FUN_146f1a4fe(*(undefined8 *)(param_1 + 0x20),param_2);
      }
    }
    else {
      local_74 = ~uVar7;
      puVar1 = (uint *)(*(longlong *)(param_1 + 0x1b0) + uVar10 * 4);
      *puVar1 = *puVar1 & local_74;
      uVar5 = *(uint *)(param_1 + 0x48);
      local_70 = (ulonglong)uVar5;
      iVar9 = 0;
      cVar4 = *(char *)(param_1 + 0x50);
      local_68 = uVar10;
      if (local_70 != 0) {
        local_60 = *(longlong *)(param_1 + 0x40);
        uVar10 = 0;
        do {
          uVar7 = 0xffffffff;
          if (uVar10 == uVar5 - 1) {
            uVar7 = 0xffffffff >> (-cVar4 & 0x1fU);
          }
          uVar7 = uVar7 & *(uint *)(local_60 + uVar10 * 4);
          iVar6 = iVar9;
          if (uVar7 != 0) {
            do {
              if ((uVar7 & 1) != 0) {
                FUN_142a7d05a(param_1,param_2,iVar6,1);
              }
              bVar2 = 1 < uVar7;
              uVar7 = uVar7 >> 1;
              iVar6 = iVar6 + 1;
            } while (bVar2);
          }
          uVar10 = uVar10 + 1;
          iVar9 = iVar9 + 0x20;
        } while (uVar10 != local_70);
      }
      puVar1 = (uint *)(*(longlong *)(param_1 + 0x180) + local_68 * 4);
      *puVar1 = *puVar1 & local_74;
      uVar5 = *(uint *)(*(longlong *)(param_1 + 0x108) + (ulonglong)(uVar8 & 0xffffff) * 4);
      *(undefined4 *)(*(longlong *)(param_1 + 0x108) + (ulonglong)(uVar8 & 0xffffff) * 4) = 0;
      uVar7 = *(uint *)(param_1 + 0xe8);
      local_58 = *(int **)(param_1 + 0xe0);
      local_50 = uVar7 & 0x7ffffff;
      local_4c = uVar7 << 5;
      if ((uVar7 & 0x7ffffff) == 0) {
        local_58 = &local_4c;
      }
      bVar3 = (byte)uVar5 & 0x1f;
      local_58[uVar5 >> 5] = local_58[uVar5 >> 5] & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      FUN_142a77a58(*(undefined8 *)(param_1 + 0x20),param_2);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a7c9ee FUN_142a7c9ee body=139 status=ok
// SIG undefined FUN_142a7c9ee(void)

void FUN_142a7c9ee(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = (uint)param_2 & 0xffffff;
  if (2 < uVar1 - 1) {
    uVar2 = (ulonglong)(uVar1 >> 5);
    if ((*(uint *)(*(longlong *)(param_1 + 0x180) + uVar2 * 4) >> ((uint)param_2 & 0x1f) & 1) == 0)
    {
      if ((*(uint *)(*(longlong *)(param_1 + 0x198) + uVar2 * 4) & 1 << ((byte)param_2 & 0x1f)) != 0
         ) {
        FUN_146f2203a(param_1,param_2,param_3);
        return;
      }
    }
    else if (1 < *(uint *)(param_1 + 0x50)) {
      uVar1 = 1;
      do {
        FUN_142a7ca7a(param_1,param_2,uVar1,param_3);
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)(param_1 + 0x50));
    }
  }
  return;
}



// FUNCTION 142a7ca7a FUN_142a7ca7a body=605 status=ok
// SIG undefined FUN_142a7ca7a(void)

void FUN_142a7ca7a(longlong param_1,uint param_2,uint param_3,int param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  uint *puVar13;
  longlong lVar14;
  undefined1 auStack_88 [32];
  longlong local_68;
  int local_60;
  int *local_58;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  ulonglong uVar8;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  param_2 = param_2 & 0xffffff;
  lVar9 = (ulonglong)
          (uint)(*(int *)(param_1 + 0x23c) *
                *(int *)(*(longlong *)(param_1 + 0x108) + (ulonglong)param_2 * 4)) * 4 +
          *(longlong *)(param_1 + 0xd0);
  uVar5 = 1 << ((byte)param_3 & 0x1f);
  uVar7 = param_3 >> 5;
  uVar8 = (ulonglong)uVar7;
  uVar3 = *(uint *)(lVar9 + uVar8 * 4);
  if (param_4 == 0) {
    if ((((uVar3 & uVar5) != 0) &&
        (*(uint *)(lVar9 + (ulonglong)(uVar7 * 4)) = uVar3 & ~uVar5,
        (*(uint *)(*(longlong *)(param_1 + 0x40) + (ulonglong)(uVar7 * 4)) & uVar5) != 0)) &&
       ((*(uint *)(*(longlong *)(param_1 + 0x58) + uVar8 * 4) & uVar5) == 0)) {
      lVar9 = *(longlong *)(param_1 + 0x20);
      cVar4 = FUN_146f1a26a(lVar9);
      if (cVar4 == '\0') {
        puVar12 = (undefined8 *)0x0;
      }
      else {
        puVar12 = (undefined8 *)((ulonglong)(param_2 << 5) + *(longlong *)(lVar9 + 8));
      }
      lVar9 = (longlong)(int)param_3 * 0x160 + *(longlong *)(param_1 + 0x30);
      local_4c = *(int *)(*(longlong *)(param_1 + 0x10) + 200);
      local_58 = *(int **)(*(longlong *)(param_1 + 0x10) + 0xb8);
      local_50 = local_4c + 0x1fU >> 5;
      if (local_4c == 0) {
        local_58 = &local_4c;
      }
      if ((longlong)*(int *)(puVar12 + 1) != 0) {
        puVar13 = (uint *)*puVar12;
        puVar1 = puVar13 + *(int *)(puVar12 + 1);
        do {
          bVar6 = (byte)*puVar13;
          uVar8 = (ulonglong)(*puVar13 >> 5);
          puVar2 = (uint *)(*(longlong *)(lVar9 + 0x18) + uVar8 * 4);
          *puVar2 = *puVar2 | 1 << (bVar6 & 0x1f);
          bVar6 = bVar6 & 0x1f;
          puVar2 = (uint *)(*(longlong *)(lVar9 + 0x30) + uVar8 * 4);
          *puVar2 = *puVar2 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
          FUN_146f1b984(*(longlong *)(param_1 + 0x10) + 0x300,&local_68);
          if ((longlong)local_60 != 0) {
            lVar10 = 0;
            do {
              uVar3 = *(uint *)(local_68 + lVar10);
              uVar8 = (ulonglong)(uVar3 >> 5);
              uVar5 = 1 << ((byte)uVar3 & 0x1f);
              if (((uint)local_58[uVar8] >> (uVar3 & 0x1f) & 1) == 0) {
                uVar5 = 0;
              }
              bVar6 = (byte)uVar3 & 0x1f;
              *(uint *)(*(longlong *)(lVar9 + 0x18) + uVar8 * 4) =
                   *(uint *)(*(longlong *)(lVar9 + 0x18) + uVar8 * 4) & ~(1 << (uVar3 & 0x1f)) |
                   uVar5;
              puVar2 = (uint *)(*(longlong *)(lVar9 + 0x30) + uVar8 * 4);
              *puVar2 = *puVar2 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
              lVar10 = lVar10 + 4;
            } while ((longlong)local_60 * 4 != lVar10);
          }
          puVar13 = puVar13 + 1;
        } while (puVar13 != puVar1);
      }
    }
  }
  else if ((((uVar3 & uVar5) == 0) &&
           (*(uint *)(lVar9 + (ulonglong)(uVar7 * 4)) = uVar3 | uVar5,
           (*(uint *)(*(longlong *)(param_1 + 0x40) + (ulonglong)(uVar7 * 4)) & uVar5) != 0)) &&
          ((*(uint *)(*(longlong *)(param_1 + 0x58) + uVar8 * 4) & uVar5) == 0)) {
    lVar9 = *(longlong *)(param_1 + 0x20);
    cVar4 = FUN_146f1a26a(lVar9);
    if (cVar4 == '\0') {
      plVar11 = (longlong *)0x0;
    }
    else {
      plVar11 = (longlong *)((ulonglong)(param_2 << 5) + *(longlong *)(lVar9 + 8));
    }
    lVar9 = plVar11[1];
    if ((longlong)(int)lVar9 != 0) {
      lVar10 = *plVar11;
      lVar14 = 0;
      do {
        FUN_146f223bc(param_1,*(undefined4 *)(lVar10 + lVar14),param_3);
        lVar14 = lVar14 + 4;
      } while ((longlong)(int)lVar9 * 4 != lVar14);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a7ccd8 FUN_142a7ccd8 body=257 status=ok
// SIG undefined FUN_142a7ccd8(void)

void FUN_142a7ccd8(longlong param_1,undefined8 param_2,longlong *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar2 = (uint)param_2 & 0xffffff;
  if ((2 < uVar2 - 1) &&
     (uVar1 = *(uint *)(param_1 + 0x50), *(uint *)((longlong)param_3 + 0xc) <= uVar1)) {
    uVar3 = (ulonglong)(uVar2 >> 5);
    if ((*(uint *)(*(longlong *)(param_1 + 0x180) + uVar3 * 4) >> ((uint)param_2 & 0x1f) & 1) == 0)
    {
      if ((1 < uVar1) &&
         ((1 << ((byte)param_2 & 0x1f) & *(uint *)(*(longlong *)(param_1 + 0x198) + uVar3 * 4)) != 0
         )) {
        uVar2 = 1;
        do {
          if ((*(uint *)((longlong)param_3 + 0xc) <= uVar2) ||
             (uVar4 = param_4,
             (*(uint *)(*param_3 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)) {
            uVar4 = (uint)(param_4 != 1);
          }
          FUN_142a7cdda(param_1,param_2,uVar2,uVar4);
          uVar2 = uVar2 + 1;
        } while (uVar1 != uVar2);
      }
    }
    else if (1 < uVar1) {
      uVar2 = 1;
      do {
        if ((*(uint *)((longlong)param_3 + 0xc) <= uVar2) ||
           (uVar4 = param_4,
           (*(uint *)(*param_3 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)) {
          uVar4 = (uint)(param_4 != 1);
        }
        FUN_142a7ca7a(param_1,param_2,uVar2,uVar4);
        uVar2 = uVar2 + 1;
      } while (uVar1 != uVar2);
    }
  }
  return;
}



// FUNCTION 142a7cdda FUN_142a7cdda body=639 status=ok
// SIG undefined FUN_142a7cdda(void)

void FUN_142a7cdda(longlong param_1,uint param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong *plVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined1 auStack_98 [32];
  longlong local_78;
  int local_70;
  int *local_68;
  uint local_60;
  int local_5c;
  int *local_58;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = (ulonglong)
          (uint)(*(int *)(param_1 + 0x23c) *
                *(int *)(*(longlong *)(param_1 + 0x108) + (ulonglong)(param_2 & 0xffffff) * 4)) * 4
          + *(longlong *)(param_1 + 0xd0);
  uVar9 = param_3 >> 5;
  uVar7 = *(uint *)(lVar4 + (ulonglong)uVar9 * 4);
  uVar5 = param_3 & 0x1f;
  if (((uVar7 >> uVar5 & 1) != 0) != param_4) {
    uVar10 = 1 << (sbyte)uVar5;
    uVar11 = 0;
    if (param_4 == 1) {
      uVar11 = uVar10;
    }
    *(uint *)(lVar4 + (ulonglong)(uVar9 * 4)) = uVar7 & ~(1 << uVar5) | uVar11;
    if (((*(uint *)(*(longlong *)(param_1 + 0x40) + (ulonglong)(uVar9 * 4)) >> uVar5 & 1) != 0) &&
       ((*(uint *)(*(longlong *)(param_1 + 0x58) + (ulonglong)uVar9 * 4) & uVar10) == 0)) {
      lVar4 = *(longlong *)(param_1 + 0x20);
      cVar3 = FUN_146f1a26a(lVar4);
      if (cVar3 == '\0') {
        plVar13 = (longlong *)0x0;
      }
      else {
        plVar13 = (longlong *)((ulonglong)((param_2 & 0xffffff) << 5) + *(longlong *)(lVar4 + 8));
      }
      if (param_4 == 0) {
        lVar4 = plVar13[1];
        if ((longlong)(int)lVar4 != 0) {
          lVar2 = *plVar13;
          lVar14 = 0;
          do {
            FUN_146f224f6(param_1,*(undefined4 *)(lVar2 + lVar14),param_3);
            lVar14 = lVar14 + 4;
          } while ((longlong)(int)lVar4 * 4 != lVar14);
        }
      }
      else {
        lVar4 = *(longlong *)(param_1 + 0x10);
        local_4c = *(int *)(lVar4 + 200);
        local_58 = *(int **)(lVar4 + 0xb8);
        local_50 = local_4c + 0x1fU >> 5;
        if (local_4c == 0) {
          local_58 = &local_4c;
        }
        local_5c = *(int *)(lVar4 + 0x178);
        local_68 = *(int **)(lVar4 + 0x168);
        local_60 = local_5c + 0x1fU >> 5;
        if (local_5c == 0) {
          local_68 = &local_5c;
        }
        if ((longlong)(int)plVar13[1] != 0) {
          plVar8 = (longlong *)
                   (*(longlong *)(param_1 + 0x30) + (longlong)(int)param_3 * 0x160 + 0x48);
          puVar12 = (uint *)*plVar13;
          puVar1 = puVar12 + (int)plVar13[1];
          do {
            uVar7 = *puVar12;
            uVar5 = 1 << ((byte)uVar7 & 0x1f);
            if (((uint)local_68[uVar7 >> 5] >> (uVar7 & 0x1f) & 1) == 0) {
              uVar6 = (ulonglong)((uVar7 >> 5) << 2);
              uVar7 = 0;
              if ((*(uint *)((longlong)local_58 + uVar6) & uVar5) != 0) {
                uVar7 = uVar5;
              }
              lVar4 = *plVar8;
              *(uint *)(lVar4 + uVar6) = ~uVar5 & *(uint *)(lVar4 + uVar6) | uVar7;
              FUN_146f1b984(*(longlong *)(param_1 + 0x10) + 0x300,&local_78);
              if ((longlong)local_70 != 0) {
                lVar4 = 0;
                do {
                  uVar7 = *(uint *)(local_78 + lVar4);
                  uVar6 = (ulonglong)(uVar7 >> 5);
                  lVar2 = *plVar8;
                  uVar5 = 1 << ((byte)uVar7 & 0x1f);
                  if (((uint)local_58[uVar6] >> (uVar7 & 0x1f) & 1) == 0) {
                    uVar5 = 0;
                  }
                  *(uint *)(lVar2 + uVar6 * 4) =
                       *(uint *)(lVar2 + uVar6 * 4) & ~(1 << (uVar7 & 0x1f)) | uVar5;
                  lVar4 = lVar4 + 4;
                } while ((longlong)local_70 * 4 != lVar4);
              }
            }
            puVar12 = puVar12 + 1;
          } while (puVar12 != puVar1);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a7d05a FUN_142a7d05a body=83 status=ok
// SIG undefined FUN_142a7d05a(void)

void FUN_142a7d05a(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  
  if (2 < (param_2 & 0xffffff) - 1) {
    uVar1 = (ulonglong)((param_2 & 0xffffff) >> 5);
    if ((*(uint *)(*(longlong *)(param_1 + 0x180) + uVar1 * 4) >> (param_2 & 0x1f) & 1) != 0) {
      FUN_142a7ca7a(param_1);
      return;
    }
    if ((*(uint *)(*(longlong *)(param_1 + 0x198) + uVar1 * 4) & 1 << ((byte)param_2 & 0x1f)) != 0)
    {
      FUN_142a7cdda(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 142a7d0ae FUN_142a7d0ae body=265 status=ok
// SIG undefined FUN_142a7d0ae(void)

void FUN_142a7d0ae(longlong param_1,uint param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  uint *puVar7;
  uint uVar8;
  
  uVar5 = 1 << ((byte)param_2 & 0x1f);
  uVar6 = (ulonglong)(param_2 >> 5 & 0x7ffff);
  if ((*(uint *)(*(longlong *)(param_1 + 0x1e0) + uVar6 * 4) >> (param_2 & 0x1f) & 1) == 0) {
    if ((*(uint *)(*(longlong *)(param_1 + 0x180) + uVar6 * 4) & uVar5) == 0) {
      if ((*(uint *)(*(longlong *)(param_1 + 0x198) + uVar6 * 4) & uVar5) != 0) {
        uVar3 = *(uint *)(param_1 + 0x50) + 0x1f;
        if (0x1f < uVar3) {
          puVar7 = (uint *)((ulonglong)
                            (uint)(*(int *)(param_1 + 0x23c) *
                                  *(int *)(*(longlong *)(param_1 + 0x108) +
                                          (ulonglong)(param_2 & 0xffffff) * 4)) * 4 +
                           *(longlong *)(param_1 + 0xd0));
          uVar8 = 0xfffffffe;
          lVar4 = 0;
          do {
            uVar8 = uVar8 & *puVar7;
            if (uVar8 != 0) {
              iVar1 = 0;
              if (uVar8 != 0) {
                for (; (uVar8 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
                }
              }
              if (*(uint *)(param_1 + 0x50) <= (uint)(iVar1 - (int)lVar4)) {
                return;
              }
              uVar3 = 0x40;
              lVar4 = 0x1c8;
              goto LAB_142a7d1a5;
            }
            lVar4 = lVar4 + -0x20;
            puVar7 = puVar7 + 1;
            uVar8 = 0xffffffff;
          } while ((ulonglong)(uVar3 & 0xffffffe0) + lVar4 != 0);
        }
      }
    }
    else {
      cVar2 = FUN_146f22608(param_1,(ulonglong)
                                    (uint)(*(int *)(param_1 + 0x23c) *
                                          *(int *)(*(longlong *)(param_1 + 0x108) +
                                                  (ulonglong)(param_2 & 0xffffff) * 4)) * 4 +
                                    *(longlong *)(param_1 + 0xd0));
      if (cVar2 != '\0') {
        uVar3 = 0x20;
        lVar4 = 0x1b0;
LAB_142a7d1a5:
        puVar7 = (uint *)(*(longlong *)(param_1 + lVar4) + uVar6 * 4);
        *puVar7 = *puVar7 | uVar5;
        *(uint *)(param_1 + 0x2e0) = *(uint *)(param_1 + 0x2e0) | uVar3;
      }
    }
  }
  return;
}



// FUNCTION 142a7d1b8 FUN_142a7d1b8 body=539 status=ok
// SIG undefined FUN_142a7d1b8(void)

void FUN_142a7d1b8(longlong param_1,uint param_2,undefined4 param_3)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  
  uVar11 = 1 << ((byte)param_2 & 0x1f);
  uVar12 = (ulonglong)(param_2 >> 5 & 0x7ffff);
  if ((*(uint *)(*(longlong *)(param_1 + 0x1e0) + uVar12 * 4) >> (param_2 & 0x1f) & 1) == 0) {
    if ((*(uint *)(*(longlong *)(param_1 + 0x180) + uVar12 * 4) & uVar11) == 0) {
      if ((*(uint *)(*(longlong *)(param_1 + 0x198) + uVar12 * 4) & uVar11) != 0) {
        uVar11 = *(uint *)(param_1 + 0x48);
        uVar13 = 0;
        cVar2 = *(char *)(param_1 + 0x50);
        if ((ulonglong)uVar11 != 0) {
          iVar3 = *(int *)(param_1 + 0x23c);
          iVar4 = *(int *)(*(longlong *)(param_1 + 0x108) + (ulonglong)(param_2 & 0xffffff) * 4);
          lVar5 = *(longlong *)(param_1 + 0xd0);
          lVar6 = *(longlong *)(param_1 + 0x58);
          lVar7 = *(longlong *)(param_1 + 0x40);
          uVar12 = 0;
          do {
            uVar10 = 0xffffffff;
            if (uVar12 == uVar11 - 1) {
              uVar10 = 0xffffffff >> (-cVar2 & 0x1fU);
            }
            uVar10 = uVar10 & *(uint *)(lVar7 + uVar12 * 4) & ~*(uint *)(lVar6 + uVar12 * 4);
            uVar9 = uVar13;
            if (uVar10 != 0) {
              do {
                if (((uVar10 & 1) != 0) &&
                   ((*(uint *)((ulonglong)(uint)(iVar3 * iVar4) * 4 + lVar5 +
                              (ulonglong)(uVar9 >> 5) * 4) >> (uVar9 & 0x1f) & 1) != 0)) {
                  FUN_146f224f6(param_1,param_3,uVar9);
                }
                bVar8 = 1 < uVar10;
                uVar10 = uVar10 >> 1;
                uVar9 = uVar9 + 1;
              } while (bVar8);
            }
            uVar12 = uVar12 + 1;
            uVar13 = uVar13 + 0x20;
          } while (uVar12 != uVar11);
        }
      }
    }
    else {
      uVar11 = *(uint *)(param_1 + 0x48);
      uVar13 = 0;
      cVar2 = *(char *)(param_1 + 0x50);
      if ((ulonglong)uVar11 != 0) {
        iVar3 = *(int *)(param_1 + 0x23c);
        iVar4 = *(int *)(*(longlong *)(param_1 + 0x108) + (ulonglong)(param_2 & 0xffffff) * 4);
        lVar5 = *(longlong *)(param_1 + 0xd0);
        lVar6 = *(longlong *)(param_1 + 0x58);
        lVar7 = *(longlong *)(param_1 + 0x40);
        uVar12 = 0;
        do {
          uVar10 = 0xffffffff;
          if (uVar12 == uVar11 - 1) {
            uVar10 = 0xffffffff >> (-cVar2 & 0x1fU);
          }
          uVar10 = uVar10 & *(uint *)(lVar7 + uVar12 * 4) & ~*(uint *)(lVar6 + uVar12 * 4);
          uVar9 = uVar13;
          if (uVar10 != 0) {
            do {
              if (((uVar10 & 1) != 0) &&
                 ((*(uint *)((ulonglong)(uint)(iVar3 * iVar4) * 4 + lVar5 +
                            (ulonglong)(uVar9 >> 5) * 4) >> (uVar9 & 0x1f) & 1) == 0)) {
                FUN_146f223bc(param_1,param_3,uVar9);
              }
              bVar8 = 1 < uVar10;
              uVar10 = uVar10 >> 1;
              uVar9 = uVar9 + 1;
            } while (bVar8);
          }
          uVar12 = uVar12 + 1;
          uVar13 = uVar13 + 0x20;
        } while (uVar12 != uVar11);
      }
    }
  }
  else {
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x1f8) + uVar12 * 4);
    *puVar1 = *puVar1 | uVar11;
  }
  return;
}



// FUNCTION 142a7d3d4 FUN_142a7d3d4 body=296 status=ok
// SIG undefined FUN_142a7d3d4(void)

void FUN_142a7d3d4(longlong param_1)

{
  char cVar1;
  bool bVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 auStack_98 [40];
  ulonglong local_70;
  ulonglong local_68;
  longlong local_60;
  int *local_58;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(param_1 + 0x2ac) != 0) {
    local_70 = (ulonglong)*(uint *)(param_1 + 0x48);
    iVar5 = 0;
    cVar1 = *(char *)(param_1 + 0x50);
    if (local_70 != 0) {
      local_60 = *(longlong *)(param_1 + 0x40);
      local_68 = (ulonglong)(*(uint *)(param_1 + 0x48) - 1);
      uVar3 = 0;
      do {
        uVar6 = 0xffffffff;
        if (uVar3 == local_68) {
          uVar6 = 0xffffffff >> (-cVar1 & 0x1fU);
        }
        uVar6 = uVar6 & *(uint *)(local_60 + uVar3 * 4);
        iVar4 = iVar5;
        if (uVar6 != 0) {
          do {
            if ((uVar6 & 1) != 0) {
              local_4c = *(int *)(param_1 + 0x2c0);
              local_50 = local_4c + 0x1fU >> 5;
              local_58 = *(int **)(param_1 + 0x2b0);
              if (local_4c == 0) {
                local_58 = &local_4c;
              }
              FUN_142a77ae6((longlong)iVar4 * 0x160 + *(longlong *)(param_1 + 0x30) + 0xc0,&local_58
                           );
            }
            bVar2 = 1 < uVar6;
            uVar6 = uVar6 >> 1;
            iVar4 = iVar4 + 1;
          } while (bVar2);
        }
        uVar3 = uVar3 + 1;
        iVar5 = iVar5 + 0x20;
      } while (uVar3 != local_70);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a7d4fd FUN_142a7d4fd body=69 status=ok
// SIG undefined FUN_142a7d4fd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a7d4fd(void)

{
  _DAT_14c999630 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a7d53f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c999638,1);
  return;
}



// FUNCTION 142a7d542 FUN_142a7d542 body=131 status=ok
// SIG undefined FUN_142a7d542(void)

uint * FUN_142a7d542(longlong param_1,uint *param_2)

{
  uint uVar1;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146f22fb6(param_1,&local_24);
  if ((longlong)local_24 == 0) {
    *param_2 = 0;
  }
  else {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 8) + (longlong)local_24 * 4);
    if ((uVar1 & 0xfffff) == 0) {
      FUN_146f2315e(param_1,param_2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
    }
    *param_2 = uVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a7d5c8 FUN_142a7d5c8 body=134 status=ok
// SIG undefined FUN_142a7d5c8(void)

void FUN_142a7d5c8(longlong param_1,undefined8 *param_2,uint param_3,longlong param_4)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar1 = param_3 & 0xfffff;
  if ((uVar1 == 0) ||
     (((param_3 >> 0x17 & 1) == 0) != ((int)(*(longlong **)(param_1 + 0x18))[5] == 1))) {
    param_4 = **(longlong **)(param_1 + 0x18);
  }
  if (((param_4 != 0 && uVar1 != 0) &&
      (uVar2 = param_3 >> 0x14 & 7, uVar2 == *(uint *)(param_1 + 0x20))) &&
     (uVar3 = (ulonglong)(uVar2 << 4), (int)uVar1 < *(int *)(param_4 + 8 + uVar3))) {
    uVar1 = *(uint *)(*(longlong *)(param_4 + uVar3) + (ulonglong)uVar1 * 4);
    if (((longlong)(int)uVar1 != 0) && (uVar1 < *(uint *)(param_1 + 0x80))) {
      *param_2 = *(undefined8 *)(*(longlong *)(param_1 + 0x78) + (longlong)(int)uVar1 * 8);
      return;
    }
  }
  *param_2 = 0;
  return;
}



// FUNCTION 142a7d64e FUN_142a7d64e body=132 status=ok
// SIG undefined FUN_142a7d64e(void)

void FUN_142a7d64e(longlong param_1,longlong param_2,int param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4((longlong)param_3 * 8 + *(longlong *)(param_1 + 0x78),&local_38);
  local_28 = local_38;
  local_20 = local_30 + -1;
  if (local_30 == 0) {
    local_20 = 0;
  }
  FUN_142aa2f3b(*(undefined8 *)(param_2 + 0xe0));
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a7d6d4 FUN_142a7d6d4 body=76 status=ok
// SIG undefined FUN_142a7d6d4(void)

void FUN_142a7d6d4(longlong param_1,undefined8 param_2,int param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *(undefined8 *)(*(longlong *)(param_1 + 0x78) + (longlong)param_3 * 8);
  FUN_14031d286(param_2);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a7d722 FUN_142a7d722 body=516 status=ok
// SIG undefined FUN_142a7d722(void)

ulonglong FUN_142a7d722(longlong param_1,ulonglong param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_88 [32];
  longlong local_68;
  int local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_2 == 0) || (*(int *)(param_2 + 0x30) != -1)) {
    uVar9 = 0;
  }
  else {
    local_68 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x18);
    FUN_1400021e4(&local_68,&local_58);
    plVar6 = (longlong *)FUN_145b0a228();
    lVar12 = plVar6[0x22];
    if (lVar12 == 0) {
      (**(code **)(*plVar6 + 1000))(plVar6);
      lVar12 = plVar6[0x22];
    }
    if ((longlong)*(int *)(lVar12 + 0x30) != 0) {
      lVar7 = *(longlong *)(lVar12 + 0x28);
      lVar11 = lVar7 + (longlong)*(int *)(lVar12 + 0x30) * 8;
      do {
        FUN_1400021e4(lVar7,&local_68);
        if (local_60 == local_50) {
          bVar13 = true;
          if (1 < local_60) {
            lVar10 = 0;
            while( true ) {
              uVar1 = *(ushort *)(local_68 + lVar10);
              uVar5 = (uint)uVar1;
              uVar2 = *(ushort *)(local_58 + lVar10);
              uVar8 = (uint)uVar2;
              if (uVar1 != uVar2) {
                if ((uVar2 | uVar1) < 0x80) {
                  uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                  uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                  if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_142a7d820;
                }
                iVar4 = uVar5 - uVar8;
                goto LAB_142a7d85b;
              }
              if (uVar1 == 0) break;
LAB_142a7d820:
              lVar10 = lVar10 + 2;
            }
            iVar4 = 0;
LAB_142a7d85b:
            bVar13 = iVar4 == 0;
          }
        }
        else {
          bVar13 = local_50 + local_60 == 1;
        }
        if (local_68 != 0) {
          FUN_1400020a8();
        }
        if (bVar13) {
          iVar4 = (int)((ulonglong)(lVar7 - *(longlong *)(lVar12 + 0x28)) >> 3);
          *(int *)(param_2 + 0x30) = iVar4;
          lVar12 = *(longlong *)(param_1 + 8);
          uVar5 = *(uint *)(param_2 + 0xc);
          *(uint *)(lVar12 + (longlong)iVar4 * 8) = uVar5;
          if ((int)uVar5 < DAT_14c9647dc) {
            lVar11 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
          }
          else {
            lVar11 = 0;
          }
          uVar5 = *(uint *)(lVar11 + 0x10);
          if (*(uint *)(lVar11 + 0x10) == 0) {
            LOCK();
            iVar3 = DAT_14c964868 + 1;
            UNLOCK();
            uVar8 = DAT_14c964868 + 1;
            param_2 = (ulonglong)uVar8;
            bVar13 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar3;
            if (bVar13) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,param_2);
            }
            LOCK();
            uVar5 = *(uint *)(lVar11 + 0x10);
            bVar13 = uVar5 == 0;
            if (bVar13) {
              *(uint *)(lVar11 + 0x10) = uVar8;
              uVar5 = 0;
            }
            UNLOCK();
            if (bVar13) {
              uVar5 = uVar8;
            }
          }
          *(uint *)(lVar12 + 4 + (longlong)iVar4 * 8) = uVar5;
          uVar9 = CONCAT71((int7)(param_2 >> 8),1);
          goto LAB_142a7d8c9;
        }
        lVar7 = lVar7 + 8;
      } while (lVar7 != lVar11);
    }
    uVar9 = 0;
LAB_142a7d8c9:
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 142a7d928 FUN_142a7d928 body=213 status=ok
// SIG undefined FUN_142a7d928(void)

undefined8 * FUN_142a7d928(longlong param_1,undefined8 *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *param_3;
  if (uVar1 < *(uint *)(param_1 + 0x10)) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 8) + 4 + (longlong)(int)uVar1 * 8);
    if (((iVar2 != 0) &&
        (uVar1 = *(uint *)(*(longlong *)(param_1 + 8) + (longlong)(int)uVar1 * 8), -1 < (int)uVar1))
       && ((int)uVar1 < DAT_14c9647dc)) {
      plVar4 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if (((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == iVar2)) &&
         (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (lVar3 = *plVar4, lVar3 != 0)))) {
        (*(code *)**(undefined8 **)(lVar3 + 0x28))(lVar3 + 0x28,&local_20);
        *param_2 = local_20;
        if (local_20 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_20 + 4) = (int)local_20[4] + 1;
          UNLOCK();
          if (local_20 != (longlong *)0x0) {
            LOCK();
            plVar4 = local_20 + 4;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
              (**(code **)(*local_20 + 0x20))(local_20,1);
            }
          }
        }
        goto LAB_142a7d9dd;
      }
    }
  }
  *param_2 = 0;
LAB_142a7d9dd:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a7d9fe FUN_142a7d9fe body=163 status=ok
// SIG undefined FUN_142a7d9fe(void)

void FUN_142a7d9fe(longlong param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  uVar4 = DAT_14c9997b8;
  if (*param_3 != 0) {
    uVar1 = *(uint *)(*param_3 + 8);
    if (uVar1 < *(uint *)(param_1 + 0x10)) {
      iVar2 = *(int *)(*(longlong *)(param_1 + 8) + 4 + (longlong)(int)uVar1 * 8);
      if (((iVar2 != 0) &&
          (uVar1 = *(uint *)(*(longlong *)(param_1 + 8) + (longlong)(int)uVar1 * 8), -1 < (int)uVar1
          )) && ((int)uVar1 < DAT_14c9647dc)) {
        plVar5 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if (((plVar5 != (longlong *)0x0) && ((int)plVar5[2] == iVar2)) &&
           (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (lVar3 = *plVar5, lVar3 != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x000142a7da7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(longlong *)(lVar3 + 0x28) + 8))(lVar3 + 0x28,param_2);
          return;
        }
      }
    }
    else {
      FUN_146f5b89e(param_2);
      if (*(longlong *)(param_2 + 8) == 0) {
        *(undefined8 *)(param_2 + 8) = uVar4;
      }
    }
  }
  return;
}



// FUNCTION 142a7daa1 FUN_142a7daa1 body=69 status=ok
// SIG undefined FUN_142a7daa1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a7daa1(void)

{
  _DAT_14c999648 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a7dae3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c999650,1);
  return;
}



// FUNCTION 142a7dae6 FUN_142a7dae6 body=69 status=ok
// SIG undefined FUN_142a7dae6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a7dae6(void)

{
  _DAT_14c999660 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a7db28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c999668,1);
  return;
}



// FUNCTION 142a7db2b FUN_142a7db2b body=69 status=ok
// SIG undefined FUN_142a7db2b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a7db2b(void)

{
  _DAT_14c999670 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a7db6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c999678,1);
  return;
}



// FUNCTION 142a7db70 FUN_142a7db70 body=69 status=ok
// SIG undefined FUN_142a7db70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a7db70(void)

{
  _DAT_14c999680 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a7dbb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c999688,1);
  return;
}



// FUNCTION 142a7dbb6 FUN_142a7dbb6 body=681 status=ok
// SIG undefined FUN_142a7dbb6(void)

undefined8 FUN_142a7dbb6(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  char cVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong lVar10;
  uint *puVar11;
  uint uVar12;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined1 *local_b0;
  undefined1 local_a8 [24];
  undefined8 local_90;
  longlong *local_88;
  uint local_80;
  int local_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong uStack_48;
  
  uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((*DAT_14c999658 < 1) || (lVar2 = *(longlong *)(param_1 + 0xb8), lVar2 == 0)) {
LAB_142a7dd3d:
    uVar8 = 0;
  }
  else {
    uVar9 = 0x200000;
    if (*(char *)(param_1 + 0x148) != '\0') {
      uVar9 = 0x1004000;
    }
    uVar8 = 0x1004001;
    if ((*(uint *)(param_2[2] + 0xb0) & uVar9) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x130);
      if ((ulonglong)*(uint *)(lVar3 + 0x28) != 0) {
        puVar11 = *(uint **)(lVar3 + 0x20);
        lVar10 = 0;
        do {
          uVar9 = *puVar11;
          if (uVar9 != 0) {
            iVar4 = 0;
            if (uVar9 != 0) {
              for (; (uVar9 >> iVar4 & 1) == 0; iVar4 = iVar4 + 1) {
              }
            }
            if (*(uint *)(lVar3 + 0x30) <= (uint)(iVar4 - (int)lVar10)) break;
            local_68 = 0;
            uStack_60 = 0;
            uStack_78 = 0;
            uStack_70 = 0;
            local_58 = 0;
            cVar7 = FUN_142a7de60(param_1,&uStack_78,param_2);
            uVar6 = local_58;
            if (cVar7 != '\0') {
              lVar3 = *(longlong *)(param_1 + 0x140);
              local_7c = *(int *)(lVar3 + 0x1d8);
              local_88 = *(longlong **)(lVar3 + 0x1c8);
              local_80 = local_7c + 0x1fU >> 5;
              if (local_7c == 0) {
                local_88 = (longlong *)&local_7c;
              }
              uVar12 = 1 << ((byte)local_58 & 0x1f);
              uVar9 = *(uint *)((longlong)local_88 + (ulonglong)((uint)local_58 >> 5) * 4);
              if (((uVar9 >> ((uint)local_58 & 0x1f) & 1) != 0) && (DAT_14c75f462 == '\0')) {
                local_7c = *(int *)(lVar3 + 0x1f0);
                local_88 = *(longlong **)(lVar3 + 0x1e0);
                local_80 = local_7c + 0x1fU >> 5;
                if (local_7c == 0) {
                  local_88 = (longlong *)&local_7c;
                }
                if ((*(uint *)((longlong)local_88 + (ulonglong)((uint)local_58 >> 5) * 4) & uVar12)
                    == 0) goto LAB_142a7dd3d;
              }
              local_b8 = param_3;
              FUN_146f23df0(lVar2,&local_88,&uStack_78,param_2[2]);
              plVar5 = local_88;
              if (local_88 != (longlong *)0x0) {
                if (((uVar12 & uVar9) != 0) && (DAT_14c75f463 != '\0')) {
                  uVar8 = FUN_146f23e78(*(undefined8 *)(param_1 + 0x120));
                  FUN_142a7e072(*(undefined8 *)(param_1 + 0x128),&local_90,*param_2,0);
                  FUN_142a8842a(uVar8,local_90);
                }
                *(undefined4 *)(plVar5 + 5) = (undefined4)uStack_78;
                *(undefined4 *)((longlong)plVar5 + 0x2c) = uStack_78._4_4_;
                *(int *)(plVar5 + 6) = (int)uStack_70;
                *(undefined4 *)((longlong)plVar5 + 0x34) = uStack_70._4_4_;
                if ((((uStack_78 ^ local_68) & 0xfffffffffffffff) != 0) ||
                   ((int)uStack_70 != (int)uStack_60)) {
                  *(undefined4 *)(plVar5 + 7) = (undefined4)local_68;
                  *(undefined4 *)((longlong)plVar5 + 0x3c) = local_68._4_4_;
                  *(int *)(plVar5 + 8) = (int)uStack_60;
                  *(undefined4 *)((longlong)plVar5 + 0x44) = uStack_60._4_4_;
                }
                FUN_146f3a758(*(undefined8 *)(param_1 + 0x130),local_a8);
                local_b8 = CONCAT44(local_b8._4_4_,param_4);
                local_b0 = local_a8;
                FUN_146f23eba(param_1 + 0x18,uVar6 & 0xffffffff,local_58._4_4_,&local_88);
                LOCK();
                plVar1 = plVar5 + 4;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)(*plVar5 + 0x20))(plVar5,1);
                }
              }
              uVar8 = 1;
              break;
            }
            goto LAB_142a7dd3d;
          }
          lVar10 = lVar10 + -0x20;
          puVar11 = puVar11 + 1;
        } while ((ulonglong)*(uint *)(lVar3 + 0x28) * 0x20 + lVar10 != 0);
      }
    }
  }
  if ((uStack_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 142a7de60 FUN_142a7de60 body=528 status=ok
// SIG undefined FUN_142a7de60(void)

undefined8 FUN_142a7de60(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  uint uVar7;
  undefined1 auStack_88 [39];
  undefined1 local_61;
  longlong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_3[1] == 0) {
    local_58 = 0;
    uStack_50 = 0;
    FUN_142a81ae8(*(undefined8 *)(param_1 + 0x128),*param_3,&local_58);
    param_2[2] = local_58;
    param_2[3] = uStack_50;
    *(int *)param_2 = (int)param_2[2];
    *(undefined4 *)((longlong)param_2 + 4) = *(undefined4 *)((longlong)param_2 + 0x14);
    *(int *)(param_2 + 1) = (int)param_2[3];
    *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)param_2 + 0x1c);
    if ((param_2[2] != 0) && (iVar3 = FUN_146f18900(*(undefined8 *)(param_1 + 0x140)), iVar3 != 0))
    goto LAB_142a7e00b;
    if (DAT_14c75f461 == '\x01') {
      plVar6 = &local_60;
      goto LAB_142a7e021;
    }
  }
  else {
    FUN_142a7e072(*(undefined8 *)(param_1 + 0x128),&local_60,param_3[1],0);
    if (local_60 != 0) {
      local_58 = 0;
      uStack_50 = 0;
      FUN_142a81ae8(*(undefined8 *)(param_1 + 0x128),param_3[1],&local_58);
      param_2[2] = local_58;
      param_2[3] = uStack_50;
      *(int *)param_2 = (int)param_2[2];
      *(undefined4 *)((longlong)param_2 + 4) = *(undefined4 *)((longlong)param_2 + 0x14);
      *(int *)(param_2 + 1) = (int)param_2[3];
      *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)param_2 + 0x1c);
      cVar2 = FUN_146f23f9e(param_1,param_2[2],param_2 + 4,(longlong)param_2 + 0x24);
      uVar4 = 1;
      if (cVar2 != '\0') goto LAB_142a7df6c;
    }
    local_58 = 0;
    uStack_50 = 0;
    FUN_142a81ae8(*(undefined8 *)(param_1 + 0x128),param_3[1],&local_58);
    *(undefined4 *)(param_2 + 2) = (undefined4)local_58;
    *(undefined4 *)((longlong)param_2 + 0x14) = local_58._4_4_;
    *(undefined4 *)(param_2 + 3) = (undefined4)uStack_50;
    *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_50._4_4_;
    local_58 = 0;
    uStack_50 = 0;
    FUN_142a81ae8(*(undefined8 *)(param_1 + 0x128),*param_3,&local_58);
    *(undefined4 *)param_2 = (undefined4)local_58;
    *(undefined4 *)((longlong)param_2 + 4) = local_58._4_4_;
    *(undefined4 *)(param_2 + 1) = (undefined4)uStack_50;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_50._4_4_;
    if ((*param_2 != 0) && (iVar3 = FUN_146f18900(*(undefined8 *)(param_1 + 0x140)), iVar3 != 0)) {
LAB_142a7e00b:
      *(int *)(param_2 + 4) = iVar3;
      uVar4 = 1;
      goto LAB_142a7df6c;
    }
    if (DAT_14c75f461 == '\x01') {
      plVar6 = (longlong *)&local_61;
LAB_142a7e021:
      *(undefined1 *)plVar6 = 0;
      local_58 = *(longlong *)(param_3[2] + 0x18);
      uVar1 = (uint)((ulonglong)local_58 >> 0x10);
      uVar7 = (uint)local_58 & 0xffff;
      puVar5 = (undefined1 *)
               FUN_146f2e200(param_1 + 0xd0,
                             ((uint)local_58 << 0x10 | uVar7) + (int)((ulonglong)local_58 >> 0x20) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar7 >> 4));
      *puVar5 = 1;
    }
  }
  uVar4 = 0;
LAB_142a7df6c:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 142a7e072 FUN_142a7e072 body=433 status=ok
// SIG undefined FUN_142a7e072(void)

ulonglong * FUN_142a7e072(longlong *param_1,ulonglong *param_2,ulonglong param_3,ulonglong param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  
  if ((param_3 != 0) && ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    uVar3 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar5 +
                    (ulonglong)((int)param_1[9] - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
    if (iVar4 != -1) {
      uVar6 = 0;
      do {
        puVar7 = (ulonglong *)(*param_1 + (longlong)iVar4 * 0x18);
        if (*puVar7 == param_3) {
          if (puVar7 + 1 == (ulonglong *)0x0 || puVar7 == (ulonglong *)0x0) goto LAB_142a7e106;
          if ((int)param_1[0xb] == *(int *)((longlong)param_1 + 0x84)) goto LAB_142a7e211;
          uVar2 = puVar7[1];
          plVar5 = param_1 + 0x11;
          if ((longlong *)param_1[0x12] != (longlong *)0x0) {
            plVar5 = (longlong *)param_1[0x12];
          }
          iVar4 = *(int *)((longlong)plVar5 +
                          (ulonglong)
                          ((int)param_1[0x13] - 1U &
                          (int)uVar2 + ((uint)(uVar2 >> 0x20) & 0xfffffff) * 0x17) * 4);
          if (iVar4 == -1) goto LAB_142a7e211;
          goto LAB_142a7e176;
        }
        iVar4 = (int)puVar7[2];
      } while (iVar4 != -1);
      goto LAB_142a7e108;
    }
  }
  goto LAB_142a7e106;
  while (iVar4 = *(int *)(lVar1 + 0x38), iVar4 != -1) {
LAB_142a7e176:
    lVar1 = param_1[10] + (longlong)iVar4 * 0x40;
    if (((*(ulonglong *)(param_1[10] + (longlong)iVar4 * 0x40) ^ uVar2) & 0xfffffffffffffff) == 0) {
      if ((lVar1 != 0) && ((uint *)(lVar1 + 8) != (uint *)0x0)) {
        if (*(int *)(lVar1 + 0xc) == 0) {
LAB_142a7e21e:
          uVar8 = 0;
        }
        else {
          uVar3 = *(uint *)(lVar1 + 8);
          uVar8 = 0;
          if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
            puVar7 = (ulonglong *)
                     ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
            if ((puVar7 == (ulonglong *)0x0) ||
               (((int)puVar7[2] != *(int *)(lVar1 + 0xc) ||
                (((uint)puVar7[1] & ((uint)((param_4 & 1) == 0) << 0x15 | 0x10000000)) != 0))))
            goto LAB_142a7e21e;
            uVar8 = *puVar7;
          }
        }
        uVar6 = 0;
        if (uVar8 == param_3) {
          uVar6 = uVar2;
        }
        goto LAB_142a7e108;
      }
      break;
    }
  }
LAB_142a7e211:
  FUN_146f31628();
LAB_142a7e106:
  uVar6 = 0;
LAB_142a7e108:
  *param_2 = uVar6;
  return param_2;
}



// FUNCTION 142a7e224 FUN_142a7e224 body=664 status=ok
// SIG undefined FUN_142a7e224(void)

undefined8
FUN_142a7e224(longlong param_1,uint param_2,undefined8 *param_3,longlong **param_4,
             undefined4 param_5)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  char cVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined1 auStack_c8 [32];
  longlong **local_a8;
  undefined4 local_a0;
  undefined8 local_90;
  longlong *local_88;
  uint local_80;
  int local_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong uStack_48;
  
  uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((*DAT_14c999658 < 1) || (lVar3 = *(longlong *)(param_1 + 0xb8), lVar3 == 0))
  goto LAB_142a7e3a7;
  if ((((*(uint *)(param_3[2] + 0xb0) >> 0x15 & 1) != 0) &&
      (uVar8 = 1, *(char *)(param_1 + 0x148) != '\0')) ||
     (((*(uint *)(param_3[2] + 0xb0) & 0x1004000) != 0 &&
      (uVar8 = 1, *(char *)(param_1 + 0x148) != '\x01')))) goto LAB_142a7e3a9;
  plVar4 = *(longlong **)(param_1 + 0x130);
  uVar8 = 1;
  if ((*(uint *)(plVar4 + 6) <= param_2) ||
     (((*(uint *)(plVar4[4] + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) == 0 ||
      (*(char *)(*plVar4 + 0x20 + (longlong)(int)param_2 * 0x28) != '\0')))) goto LAB_142a7e3a9;
  local_68 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  local_58 = 0;
  cVar7 = FUN_142a7de60(param_1,&uStack_78,param_3);
  uVar6 = local_58;
  if (cVar7 == '\0') {
LAB_142a7e3a7:
    uVar8 = 0;
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x140);
    local_7c = *(int *)(lVar5 + 0x1d8);
    local_88 = *(longlong **)(lVar5 + 0x1c8);
    local_80 = local_7c + 0x1fU >> 5;
    if (local_7c == 0) {
      local_88 = (longlong *)&local_7c;
    }
    uVar9 = 1 << ((byte)local_58 & 0x1f);
    uVar2 = *(uint *)((longlong)local_88 + (ulonglong)((uint)local_58 >> 5) * 4);
    if (((uVar2 >> ((uint)local_58 & 0x1f) & 1) != 0) && (DAT_14c75f462 == '\0')) {
      local_7c = *(int *)(lVar5 + 0x1f0);
      local_88 = *(longlong **)(lVar5 + 0x1e0);
      local_80 = local_7c + 0x1fU >> 5;
      if (local_7c == 0) {
        local_88 = (longlong *)&local_7c;
      }
      if ((*(uint *)((longlong)local_88 + (ulonglong)((uint)local_58 >> 5) * 4) & uVar9) == 0)
      goto LAB_142a7e3a7;
    }
    local_a8 = param_4;
    FUN_146f23df0(lVar3,&local_88,&uStack_78,param_3[2]);
    plVar4 = local_88;
    if (local_88 != (longlong *)0x0) {
      if (((uVar9 & uVar2) != 0) && (DAT_14c75f463 != '\0')) {
        uVar8 = FUN_146f23e78(*(undefined8 *)(param_1 + 0x120));
        FUN_142a7e072(*(undefined8 *)(param_1 + 0x128),&local_90,*param_3,0);
        FUN_142a8842a(uVar8,local_90);
      }
      *(undefined4 *)(plVar4 + 5) = (undefined4)uStack_78;
      *(undefined4 *)((longlong)plVar4 + 0x2c) = uStack_78._4_4_;
      *(int *)(plVar4 + 6) = (int)uStack_70;
      *(undefined4 *)((longlong)plVar4 + 0x34) = uStack_70._4_4_;
      if ((((uStack_78 ^ local_68) & 0xfffffffffffffff) != 0) || ((int)uStack_70 != (int)uStack_60))
      {
        *(undefined4 *)(plVar4 + 7) = (undefined4)local_68;
        *(undefined4 *)((longlong)plVar4 + 0x3c) = local_68._4_4_;
        *(int *)(plVar4 + 8) = (int)uStack_60;
        *(undefined4 *)((longlong)plVar4 + 0x44) = uStack_60._4_4_;
      }
      local_a0 = param_5;
      local_a8 = &local_88;
      FUN_146f23d6c(param_1 + 0x18,param_2,uVar6 & 0xffffffff,local_58._4_4_);
      LOCK();
      plVar1 = plVar4 + 4;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar4 + 0x20))(plVar4,1);
      }
    }
    uVar8 = 1;
  }
LAB_142a7e3a9:
  if ((uStack_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a7e4be FUN_142a7e4be body=1280 status=ok
// SIG undefined FUN_142a7e4be(void)

void FUN_142a7e4be(longlong *param_1,int param_2)

{
  uint *puVar1;
  bool bVar2;
  uint uVar3;
  ulonglong uVar4;
  char cVar5;
  longlong *plVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  uint *puVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStack_108 [32];
  uint local_e8;
  undefined4 local_dc;
  longlong *local_d8;
  undefined4 local_cc;
  undefined4 local_c8;
  uint local_c4;
  longlong local_c0;
  uint *local_b8;
  longlong local_b0;
  uint local_a8;
  int local_a4;
  uint local_a0;
  uint local_9c;
  ulonglong local_98;
  longlong local_90;
  ulonglong local_88;
  longlong local_80;
  ulonglong local_78;
  longlong local_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_1[0x12] != 0) {
    plVar6 = param_1 + 9;
    if (param_2 == 0) {
      plVar6 = param_1 + 6;
    }
    local_68 = 0;
    uStack_60 = 0;
    uVar12 = *(uint *)(plVar6 + 1);
    uVar7 = 0;
    local_a8 = 0xffffffff >> (-(char)plVar6[2] & 0x1fU);
    if ((ulonglong)uVar12 != 0) {
      local_80 = *(longlong *)param_1[0x13];
      local_90 = *plVar6;
      local_98 = (ulonglong)(uVar12 - 1);
      uVar7 = 0;
      uVar8 = 0;
      local_d8 = param_1;
      local_88 = (ulonglong)uVar12;
      do {
        uVar12 = 0xffffffff;
        if (uVar7 == local_98) {
          uVar12 = local_a8;
        }
        uVar12 = uVar12 & *(uint *)(local_90 + uVar7 * 4);
        uVar3 = uVar8;
        uVar13 = uVar8;
        local_78 = uVar7;
        if (uVar12 != 0) {
          do {
            local_a0 = uVar13;
            uVar7 = uStack_60;
            if ((uVar12 & 1) != 0) {
              FUN_146f1d381(local_68,uStack_60 & 0xffffffff);
              uVar4 = uStack_60 >> 0x20;
              uStack_60 = uStack_60 & 0xffffffff00000000;
              if (((longlong)uVar7 < 0) && ((int)uVar4 != 0)) {
                FUN_146f1d5ea(&local_68,0);
              }
              puVar10 = (uint *)((ulonglong)uVar3 * 0x30 + local_80);
              lVar9 = *(longlong *)(puVar10 + 4);
              lVar11 = *(longlong *)(lVar9 + 0x10);
              uVar13 = *puVar10;
              if (lVar11 == 0) {
                local_c8 = 0;
              }
              else {
                uVar7 = CONCAT71((int7)((ulonglong)lVar11 >> 8),*(undefined1 *)(lVar11 + 0xb9)) &
                        0xffffffffffffff10;
                local_c8 = (undefined4)CONCAT71((int7)(uVar7 >> 8),(byte)uVar7 >> 4);
              }
              local_c4 = puVar10[3];
              if ((local_c4 & 1) == 0) {
                local_cc = (undefined4)
                           CONCAT71((int7)((ulonglong)*local_d8 >> 8),
                                    *(undefined1 *)(*local_d8 + 0x149));
              }
              else {
                local_cc = 0;
              }
              local_b8 = puVar10 + 4;
              if ((char)local_c8 == '\x01' && uVar13 == 0) {
                local_dc = (undefined4)uStack_60;
LAB_142a7e6ac:
                uVar8 = local_a0;
                local_c0 = local_68;
                if ((longlong)(int)local_d8[0x10] != 0) {
                  local_9c = *(uint *)(lVar9 + 0xc);
                  local_70 = local_d8[0xf];
                  lVar9 = (longlong)(int)local_d8[0x10] << 2;
                  lVar11 = 0;
                  plVar6 = local_d8;
                  local_b0 = lVar9;
                  do {
                    uVar8 = *(uint *)(local_70 + lVar11);
                    if (((local_9c & 1) != 0) ||
                       (0 < *(int *)(*(longlong *)(plVar6[0x11] + 0x10) + 0x128 +
                                    (longlong)(int)uVar8 * 0x130))) {
                      uVar13 = 1 << ((byte)uVar8 & 0x1f);
                      uVar7 = (ulonglong)(uVar8 >> 5);
                      if ((*(uint *)(*(longlong *)(puVar10 + 6) + uVar7 * 4) >> (uVar8 & 0x1f) & 1)
                          != 0) {
                        if ((char)local_c8 != '\0') {
                          local_a4 = uStack_60._4_4_;
                          FUN_146f1d381(local_68,uStack_60 & 0xffffffff);
                          uVar4 = uStack_60 >> 0x20;
                          uStack_60 = uStack_60 & 0xffffffff00000000;
                          if ((local_a4 < 0) && ((int)uVar4 != 0)) {
                            FUN_146f1d5ea(&local_68,0);
                          }
                          local_e8 = CONCAT31(local_e8._1_3_,(char)local_cc);
                          cVar5 = FUN_146f24812(local_d8,uVar8,local_b8,&local_68);
                          lVar9 = local_b0;
                          plVar6 = local_d8;
                          if (cVar5 == '\0') goto LAB_142a7e7c7;
                          local_c0 = local_68;
                          local_dc = (undefined4)uStack_60;
                        }
                        if ((*(uint *)(((longlong *)plVar6[0x11])[4] + uVar7 * 4) & uVar13) == 0) {
                          lVar9 = 0;
                        }
                        else {
                          lVar9 = (longlong)(int)uVar8 * 0x28 + *(longlong *)plVar6[0x11];
                        }
                        local_e8 = puVar10[3];
                        local_58 = local_c0;
                        local_50 = local_dc;
                        cVar5 = FUN_142a9da0e(*(undefined8 *)(lVar9 + 8),puVar10[1],puVar10[2],
                                              &local_58);
                        lVar9 = local_b0;
                        plVar6 = local_d8;
                        if (((local_c4 & 2) != 0) && (cVar5 != '\0')) {
                          puVar1 = (uint *)(local_d8[0xc] + uVar7 * 4);
                          *puVar1 = *puVar1 | uVar13;
                        }
                      }
                    }
LAB_142a7e7c7:
                    lVar11 = lVar11 + 4;
                    uVar8 = local_a0;
                  } while (lVar9 != lVar11);
                }
              }
              else {
                local_e8 = CONCAT31(local_e8._1_3_,(char)local_cc);
                cVar5 = FUN_146f24812(local_d8,uVar13,local_b8,&local_68);
                uVar8 = local_a0;
                if (cVar5 != '\0') {
                  local_c0 = local_68;
                  local_dc = (undefined4)uStack_60;
                  if (uVar13 == 0) {
                    lVar9 = *(longlong *)local_b8;
                    goto LAB_142a7e6ac;
                  }
                  uVar13 = *puVar10;
                  if (((*(uint *)(((longlong *)local_d8[0x11])[4] + (ulonglong)(uVar13 >> 5) * 4) >>
                        (uVar13 & 0x1f) & 1) != 0) &&
                     (lVar9 = (longlong)(int)uVar13 * 0x28 + *(longlong *)local_d8[0x11], lVar9 != 0
                     )) {
                    local_e8 = puVar10[3];
                    local_58 = local_68;
                    local_50 = (undefined4)uStack_60;
                    cVar5 = FUN_142a9da0e(*(undefined8 *)(lVar9 + 8),puVar10[1],puVar10[2],&local_58
                                         );
                    uVar8 = local_a0;
                    if (((local_c4 & 2) != 0) && (cVar5 != '\0')) {
                      puVar1 = (uint *)(local_d8[0xc] + (ulonglong)(*puVar10 >> 5) * 4);
                      *puVar1 = *puVar1 | 1 << ((byte)*puVar10 & 0x1f);
                    }
                  }
                }
              }
            }
            bVar2 = 1 < uVar12;
            uVar12 = uVar12 >> 1;
            uVar3 = uVar3 + 1;
            uVar13 = local_a0;
          } while (bVar2);
        }
        uVar7 = local_78 + 1;
        uVar8 = uVar8 + 0x20;
      } while (uVar7 != local_88);
      uVar7 = uStack_60 & 0xffffffff;
    }
    FUN_146f1d381(local_68,uVar7);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a7e9c0 FUN_142a7e9c0 body=260 status=ok
// SIG undefined FUN_142a7e9c0(void)

void FUN_142a7e9c0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_2 + 0xe0);
  iVar2 = *(int *)(lVar1 + 0x10) - *(int *)(lVar1 + 0xc);
  FUN_146f5435e(lVar1,0,0x18);
  if (*(longlong *)(param_2 + 8) == 0) {
    FUN_142a7eada(param_1,param_2);
    if (*(longlong *)(param_2 + 8) == 0) {
      local_48 = *(undefined4 *)(param_1 + 0x38);
      uStack_44 = *(undefined4 *)(param_1 + 0x3c);
      uStack_40 = *(undefined4 *)(param_1 + 0x40);
      uStack_3c = *(undefined4 *)(param_1 + 0x44);
      FUN_142a84392(*(undefined8 *)(*(longlong *)(param_2 + 0xf0) + 8),param_2);
      if (*(longlong *)(param_2 + 8) == 0) {
        if ((*(longlong *)(param_1 + 0x10) != 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
          FUN_142a8e97e(param_2);
          if (*(longlong *)(param_2 + 8) != 0) goto LAB_142a7ea64;
        }
        if (*(int *)(lVar1 + 0x18) == 0) {
          iVar3 = (*(int *)(lVar1 + 0x10) - *(int *)(lVar1 + 0xc)) - iVar2;
          FUN_146f5b2fa(lVar1,iVar2);
          iVar2 = 0;
          if (iVar3 != -1) {
            iVar2 = iVar3;
          }
          FUN_146f5435e(*(undefined8 *)(param_2 + 0xe0),iVar2,0x18);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
        }
      }
    }
  }
LAB_142a7ea64:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a7eada FUN_142a7eada body=109 status=ok
// SIG undefined FUN_142a7eada(void)

void FUN_142a7eada(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0xe0);
  uVar3 = *(uint *)(param_1 + 0x48);
  if ((ushort)uVar3 < *(ushort *)(param_1 + 0x4a)) {
    uVar3 = (uint)*(ushort *)(param_1 + 0x4a);
  }
  uVar3 = uVar3 & 0xffff | 1;
  lVar2 = 0x3f;
  if (uVar3 != 0) {
    for (; uVar3 * 2 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  uVar3 = ((uint)lVar2 ^ 0xffffffc0) + 0x44;
  FUN_146f5435e(uVar1,(uVar3 >> 2) - 1,2);
  uVar3 = uVar3 & 0x3c;
  FUN_146f5435e(uVar1,*(undefined2 *)(param_1 + 0x48),uVar3);
  FUN_146f5435e(uVar1,*(undefined2 *)(param_1 + 0x4a),uVar3);
  return;
}



// FUNCTION 142a7eb48 FUN_142a7eb48 body=590 status=ok
// SIG undefined FUN_142a7eb48(void)

void FUN_142a7eb48(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  char cVar6;
  undefined2 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  iVar1 = *(int *)(*(longlong *)(param_2 + 0xd8) + 0xc);
  iVar8 = FUN_146f546d2(*(longlong *)(param_2 + 0xd8),0x18);
  if (((*(longlong *)(param_2 + 8) == 0) &&
      ((lVar3 = *(longlong *)(param_2 + 0xd8), lVar3 == 0 || (*(int *)(lVar3 + 0x14) == 0)))) &&
     ((*(longlong *)(param_2 + 0xe0) == 0 || (*(int *)(*(longlong *)(param_2 + 0xe0) + 0x18) == 0)))
     ) {
    iVar9 = FUN_146f546d2(lVar3,2);
    iVar9 = iVar9 * 4 + 4;
    uVar7 = FUN_146f546d2(lVar3,iVar9);
    *(undefined2 *)(param_1 + 0x48) = uVar7;
    uVar7 = FUN_146f546d2(lVar3,iVar9);
    *(undefined2 *)(param_1 + 0x4a) = uVar7;
    if (((*(longlong *)(param_2 + 8) == 0) &&
        ((*(longlong *)(param_2 + 0xd8) == 0 ||
         (*(int *)(*(longlong *)(param_2 + 0xd8) + 0x14) == 0)))) &&
       ((*(longlong *)(param_2 + 0xe0) == 0 || (*(int *)(*(longlong *)(param_2 + 0xe0) + 0x18) == 0)
        ))) {
      *(undefined8 *)(param_1 + 0x28) = param_3;
      *(undefined8 *)(param_1 + 0x30) = 0;
      FUN_142a84138(*(undefined8 *)(*(longlong *)(param_2 + 0xf0) + 8),param_2,param_1 + 0x38);
      if (((((*(longlong *)(param_2 + 8) == 0) &&
            ((*(longlong *)(param_2 + 0xd8) == 0 ||
             (*(int *)(*(longlong *)(param_2 + 0xd8) + 0x14) == 0)))) &&
           ((*(longlong *)(param_2 + 0xe0) == 0 ||
            (*(int *)(*(longlong *)(param_2 + 0xe0) + 0x18) == 0)))) &&
          ((cVar6 = FUN_142a7ed96(param_1,param_2), *(longlong *)(param_2 + 8) == 0 &&
           ((plVar4 = *(longlong **)(param_2 + 0xd8), plVar4 == (longlong *)0x0 ||
            (*(int *)((longlong)plVar4 + 0x14) == 0)))))) &&
         ((*(longlong *)(param_2 + 0xe0) == 0 ||
          (*(int *)(*(longlong *)(param_2 + 0xe0) + 0x18) == 0)))) {
        uVar10 = iVar8 + iVar1;
        if (cVar6 == '\0') {
          uVar2 = *(uint *)(plVar4 + 1);
          if (uVar10 < uVar2 || uVar10 - uVar2 == 0) {
            *(undefined4 *)((longlong)plVar4 + 0x14) = 0;
            *(uint *)((longlong)plVar4 + 0xc) = uVar10;
            if ((uVar10 & 0xffffffe0) < uVar2) {
              *(undefined4 *)(plVar4 + 2) = *(undefined4 *)(*plVar4 + (ulonglong)(uVar10 >> 5) * 4);
            }
          }
          else {
            *(uint *)((longlong)plVar4 + 0x14) = uVar10 - uVar2;
          }
        }
        else {
          if (((*(longlong *)(param_1 + 0x10) != 0) && (*(longlong *)(param_1 + 0x18) != 0)) &&
             (FUN_142a8ea2a(param_2), *(longlong *)(param_2 + 8) != 0)) {
            return;
          }
          plVar4 = *(longlong **)(param_2 + 0xd8);
          if ((((plVar4 == (longlong *)0x0) || (*(int *)((longlong)plVar4 + 0x14) == 0)) &&
              ((*(longlong *)(param_2 + 0xe0) == 0 ||
               (*(int *)(*(longlong *)(param_2 + 0xe0) + 0x18) == 0)))) &&
             (uVar10 != *(uint *)((longlong)plVar4 + 0xc))) {
            uVar2 = *(uint *)(plVar4 + 1);
            if (uVar10 < uVar2 || uVar10 - uVar2 == 0) {
              *(undefined4 *)((longlong)plVar4 + 0x14) = 0;
              *(uint *)((longlong)plVar4 + 0xc) = uVar10;
              if ((uVar10 & 0xffffffe0) < uVar2) {
                *(undefined4 *)(plVar4 + 2) =
                     *(undefined4 *)(*plVar4 + (ulonglong)(uVar10 >> 5) * 4);
              }
            }
            else {
              *(uint *)((longlong)plVar4 + 0x14) = uVar10 - uVar2;
            }
            uVar5 = DAT_14c99c010;
            FUN_146f5b89e(param_2);
            if (*(longlong *)(param_2 + 8) == 0) {
              *(undefined8 *)(param_2 + 8) = uVar5;
            }
            *(undefined8 *)(param_1 + 0x50) = 0;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142a7ed96 FUN_142a7ed96 body=634 status=ok
// SIG undefined FUN_142a7ed96(void)

ulonglong FUN_142a7ed96(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  void *_Dst;
  undefined8 *puVar6;
  undefined8 uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong _Size;
  bool bVar11;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar10 = **(longlong **)(param_2 + 0xf0);
    lVar1 = *(longlong *)(*(longlong *)(lVar10 + 0x28) + 0x808);
    uVar7 = DAT_14c999690;
    if (lVar1 != 0) {
      lVar4 = FUN_145a62df4();
      lVar1 = *(longlong *)(lVar1 + 0x10);
      uVar7 = DAT_14c999690;
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        puVar6 = (undefined8 *)(param_1 + 0x28);
        if ((*(uint *)(param_1 + 0x40) & 0xfffff) != 0) {
          puVar6 = (undefined8 *)(param_1 + 0x38);
        }
        if (*(longlong *)(param_1 + 0x38) != 0) {
          puVar6 = (undefined8 *)(param_1 + 0x38);
        }
        local_38 = 0;
        FUN_142a836ac(*(undefined8 *)(*(longlong *)(param_2 + 0xf0) + 8),puVar6,
                      *(longlong *)(param_2 + 0xf0) + 0x10,&local_38);
        lVar1 = local_38;
        if ((local_38 == 0) ||
           (plVar5 = (longlong *)FUN_146f45a84(lVar10,*(undefined8 *)(param_1 + 0x28)),
           plVar5 == (longlong *)0x0)) goto LAB_142a7edb7;
        uVar7 = DAT_14c999698;
        if ((uint)*(ushort *)(param_1 + 0x48) < *(uint *)(plVar5 + 1)) {
          lVar10 = *(longlong *)(*plVar5 + (ulonglong)*(ushort *)(param_1 + 0x48) * 8);
          if (*(ushort *)(param_1 + 0x4a) < *(ushort *)(lVar10 + 0x7e)) {
            plVar5 = (longlong *)
                     ((ulonglong)*(ushort *)(param_1 + 0x4a) * 0x10 + *(longlong *)(lVar10 + 0x20));
            uVar3 = *(uint *)(lVar1 + 0xc);
            *(uint *)(param_1 + 0x58) = uVar3;
            if ((int)uVar3 < DAT_14c9647dc) {
              lVar10 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
            }
            else {
              lVar10 = 0;
            }
            uVar3 = *(uint *)(lVar10 + 0x10);
            if (*(uint *)(lVar10 + 0x10) == 0) {
              LOCK();
              iVar2 = DAT_14c964868 + 1;
              UNLOCK();
              uVar8 = DAT_14c964868 + 1;
              param_2 = (ulonglong)uVar8;
              bVar11 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar2;
              if (bVar11) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,param_2);
              }
              LOCK();
              uVar3 = *(uint *)(lVar10 + 0x10);
              bVar11 = uVar3 == 0;
              if (bVar11) {
                *(uint *)(lVar10 + 0x10) = uVar8;
                uVar3 = 0;
              }
              UNLOCK();
              if (bVar11) {
                uVar3 = uVar8;
              }
            }
            *(uint *)(param_1 + 0x5c) = uVar3;
            lVar10 = *plVar5;
            *(longlong *)(param_1 + 0x50) = lVar10;
            if (lVar10 != 0) {
              uVar3 = *(uint *)(lVar10 + 0xb0);
              if ((char)uVar3 < '\0') {
                *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 1;
                uVar3 = *(uint *)(lVar10 + 0xb0);
              }
              if ((uVar3 >> 0xe & 1) == 0) {
                *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 8;
              }
            }
            lVar10 = plVar5[1];
            lVar1 = *(longlong *)(param_1 + 0x10);
            if (lVar1 != lVar10) {
              *(longlong *)(param_1 + 0x10) = lVar10;
              if ((lVar10 != 0) && ((*(byte *)(lVar10 + 0xb8) & 8) != 0)) {
                LOCK();
                *(int *)(lVar10 + 0xbc) = *(int *)(lVar10 + 0xbc) + 1;
                UNLOCK();
              }
              if (lVar1 != 0) {
                FUN_146f11920();
              }
            }
            _Size = (ulonglong)*(uint *)(plVar5[1] + 0x74);
            uVar9 = CONCAT71((int7)(param_2 >> 8),1);
            if (_Size != 0) {
              _Dst = (void *)(**(code **)(*DAT_14c872d28 + 0x28))
                                       (DAT_14c872d28,_Size,*(undefined2 *)(plVar5[1] + 0x7a));
              if (_Dst != (void *)0x0) {
                memset(_Dst,0,_Size);
              }
              if (*(longlong *)(param_1 + 0x18) != 0) {
                (**(code **)(*DAT_14c872d28 + 0x48))();
              }
              *(void **)(param_1 + 0x18) = _Dst;
            }
            goto LAB_142a7edb9;
          }
        }
      }
    }
    FUN_146f5b89e(param_2);
    if (*(longlong *)(param_2 + 8) == 0) {
      *(undefined8 *)(param_2 + 8) = uVar7;
    }
  }
LAB_142a7edb7:
  uVar9 = 0;
LAB_142a7edb9:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 142a7f012 FUN_142a7f012 body=304 status=ok
// SIG undefined FUN_142a7f012(void)

void FUN_142a7f012(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_2 + 0xe0);
  iVar2 = *(int *)(lVar1 + 0x10) - *(int *)(lVar1 + 0xc);
  FUN_146f5435e(lVar1,0,0x18);
  if (*(longlong *)(param_2 + 8) == 0) {
    local_48 = *(undefined4 *)(param_1 + 0x28);
    uStack_44 = *(undefined4 *)(param_1 + 0x2c);
    uStack_40 = *(undefined4 *)(param_1 + 0x30);
    uStack_3c = *(undefined4 *)(param_1 + 0x34);
    FUN_142a84392(*(undefined8 *)(*(longlong *)(param_2 + 0xf0) + 8),param_2,&local_48);
    local_48 = *(undefined4 *)(param_1 + 0x38);
    uStack_44 = *(undefined4 *)(param_1 + 0x3c);
    uStack_40 = *(undefined4 *)(param_1 + 0x40);
    uStack_3c = *(undefined4 *)(param_1 + 0x44);
    FUN_142a84392(*(undefined8 *)(*(longlong *)(param_2 + 0xf0) + 8),param_2,&local_48);
    if (*(longlong *)(param_2 + 8) == 0) {
      FUN_142a7eada(param_1,param_2);
      if (*(longlong *)(param_2 + 8) == 0) {
        if ((*(longlong *)(param_1 + 0x10) != 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
          FUN_142a8e97e(param_2);
          if (*(longlong *)(param_2 + 8) != 0) goto LAB_142a7f0e0;
        }
        if (*(int *)(lVar1 + 0x18) == 0) {
          iVar3 = (*(int *)(lVar1 + 0x10) - *(int *)(lVar1 + 0xc)) - iVar2;
          FUN_146f5b2fa(lVar1,iVar2);
          iVar2 = 0;
          if (iVar3 != -1) {
            iVar2 = iVar3;
          }
          FUN_146f5435e(*(undefined8 *)(param_2 + 0xe0),iVar2,0x18);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
        }
      }
    }
  }
LAB_142a7f0e0:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a7f15a FUN_142a7f15a body=470 status=ok
// SIG undefined FUN_142a7f15a(void)

void FUN_142a7f15a(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined2 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  iVar1 = *(int *)(*(longlong *)(param_2 + 0xd8) + 0xc);
  iVar7 = FUN_146f546d2(*(longlong *)(param_2 + 0xd8),0x18);
  if (((*(longlong *)(param_2 + 8) == 0) &&
      ((*(longlong *)(param_2 + 0xd8) == 0 || (*(int *)(*(longlong *)(param_2 + 0xd8) + 0x14) == 0))
      )) && ((*(longlong *)(param_2 + 0xe0) == 0 ||
             (*(int *)(*(longlong *)(param_2 + 0xe0) + 0x18) == 0)))) {
    FUN_142a84138(*(undefined8 *)(*(longlong *)(param_2 + 0xf0) + 8),param_2,param_1 + 0x28);
    FUN_142a84138(*(undefined8 *)(*(longlong *)(param_2 + 0xf0) + 8),param_2,param_1 + 0x38);
    if (((*(longlong *)(param_2 + 8) == 0) &&
        ((lVar3 = *(longlong *)(param_2 + 0xd8), lVar3 == 0 || (*(int *)(lVar3 + 0x14) == 0)))) &&
       ((*(longlong *)(param_2 + 0xe0) == 0 || (*(int *)(*(longlong *)(param_2 + 0xe0) + 0x18) == 0)
        ))) {
      iVar8 = FUN_146f546d2(lVar3,2);
      iVar8 = iVar8 * 4 + 4;
      uVar6 = FUN_146f546d2(lVar3,iVar8);
      *(undefined2 *)(param_1 + 0x48) = uVar6;
      uVar6 = FUN_146f546d2(lVar3,iVar8);
      *(undefined2 *)(param_1 + 0x4a) = uVar6;
      if (((*(longlong *)(param_2 + 8) == 0) &&
          ((*(longlong *)(param_2 + 0xd8) == 0 ||
           (*(int *)(*(longlong *)(param_2 + 0xd8) + 0x14) == 0)))) &&
         ((*(longlong *)(param_2 + 0xe0) == 0 ||
          (*(int *)(*(longlong *)(param_2 + 0xe0) + 0x18) == 0)))) {
        cVar5 = FUN_142a7ed96(param_1,param_2);
        if (((*(longlong *)(param_2 + 8) == 0) &&
            ((plVar4 = *(longlong **)(param_2 + 0xd8), plVar4 == (longlong *)0x0 ||
             (*(int *)((longlong)plVar4 + 0x14) == 0)))) &&
           ((*(longlong *)(param_2 + 0xe0) == 0 ||
            (*(int *)(*(longlong *)(param_2 + 0xe0) + 0x18) == 0)))) {
          if (cVar5 == '\0') {
            uVar9 = iVar7 + iVar1;
            uVar2 = *(uint *)(plVar4 + 1);
            if (uVar9 < uVar2 || uVar9 - uVar2 == 0) {
              *(undefined4 *)((longlong)plVar4 + 0x14) = 0;
              *(uint *)((longlong)plVar4 + 0xc) = uVar9;
              if ((uVar9 & 0xffffffe0) < uVar2) {
                *(undefined4 *)(plVar4 + 2) = *(undefined4 *)(*plVar4 + (ulonglong)(uVar9 >> 5) * 4)
                ;
              }
            }
            else {
              *(uint *)((longlong)plVar4 + 0x14) = uVar9 - uVar2;
            }
          }
          else if ((*(longlong *)(param_1 + 0x10) != 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
            FUN_142a8ea2a(param_2);
            return;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142a7f330 FUN_142a7f330 body=1186 status=ok
// SIG undefined FUN_142a7f330(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_142a7f330(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  uint uVar2;
  code *pcVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 auStack_90 [4];
  undefined8 uStack_70;
  longlong local_68;
  longlong local_60;
  undefined1 *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)&local_48;
  lVar16 = *param_2;
  plVar12 = *(longlong **)(lVar16 + 0xf0);
  lVar6 = *plVar12;
  if (((((*(int *)(param_1 + 0x5c) == 0) || (uVar2 = *(uint *)(param_1 + 0x58), (int)uVar2 < 0)) ||
       (DAT_14c9647dc <= (int)uVar2)) ||
      ((plVar8 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar8 == (longlong *)0x0 || ((int)plVar8[2] != *(int *)(param_1 + 0x5c))))) ||
     (((*(uint *)(plVar8 + 1) & 0x10200000) != 0 ||
      (plVar11 = (longlong *)*plVar8, (longlong *)*plVar8 == (longlong *)0x0)))) {
    lVar9 = param_1 + 0x28;
    if ((*(uint *)(param_1 + 0x40) & 0xfffff) != 0) {
      lVar9 = param_1 + 0x38;
    }
    if (*(longlong *)(param_1 + 0x38) != 0) {
      lVar9 = param_1 + 0x38;
    }
    local_50 = (longlong *)0x0;
    auStack_90[0] = 0x142a7f3e8;
    FUN_142a836ac(plVar12[1],lVar9,plVar12 + 2,&local_50);
    plVar11 = local_50;
    plVar12 = &local_68;
    if (local_50 == (longlong *)0x0) goto LAB_142a7f5f9;
  }
  uVar14 = DAT_14c9996a0;
  lVar9 = *(longlong *)(param_1 + 0x50);
  plVar12 = &local_68;
  if (lVar9 == 0) goto LAB_142a7f5f9;
  uVar2 = *(uint *)(lVar9 + 0xb0);
  if ((uVar2 & 0x40) == 0) {
LAB_142a7f5d7:
    auStack_90[0] = 0x142a7f5ea;
    FUN_146f5b89e(lVar16);
    plVar12 = &local_68;
    if (*(longlong *)(lVar16 + 8) == 0) {
      *(undefined8 *)(lVar16 + 8) = uVar14;
      plVar12 = &local_68;
    }
  }
  else {
    if ((*(byte *)(lVar6 + 0x50) & 1) == 0) {
      plVar12 = &local_68;
      if ((uVar2 >> 0x15 & 1) != 0) goto LAB_142a7f5f9;
    }
    else {
      if ((uVar2 & 0x1004000) != 0) goto LAB_142a7f5d7;
      auStack_90[0] = 0x142a7f5c1;
      iVar5 = FUN_146f45b3c(**(undefined8 **)(lVar16 + 0xf0));
      plVar12 = &local_68;
      if (iVar5 != *(int *)(lVar16 + 0x118)) goto LAB_142a7f5f9;
      lVar9 = *(longlong *)(param_1 + 0x50);
    }
    plVar12 = &local_68;
    uVar1 = *(ushort *)(lVar9 + 0xb6);
    if ((ulonglong)uVar1 == 0) {
      puVar10 = (undefined1 *)0x0;
    }
    else {
      uStack_70 = 0x142a7f634;
      lVar6 = -(ulonglong)(uVar1 + 0x1e & 0xfffffff0);
      plVar12 = (longlong *)((longlong)&local_68 + lVar6);
      *(undefined8 *)((longlong)auStack_90 + lVar6) = 0x142a7f648;
      memset((void *)((longlong)&local_68 + lVar6),0,(ulonglong)uVar1);
      plVar8 = *(longlong **)(param_1 + 0x10);
      puVar10 = (undefined1 *)((longlong)&local_68 + lVar6);
      if (((*(byte *)(plVar8 + 0x17) & 0x80) == 0) &&
         (uVar1 = *(ushort *)((longlong)plVar8 + 0x7c),
         puVar10 = (undefined1 *)((longlong)&local_68 + lVar6), uVar1 != 0)) {
        local_68 = *plVar8;
        lVar9 = plVar8[7];
        lVar4 = plVar8[8];
        lVar15 = 0;
        local_60 = lVar16;
        local_58 = (undefined1 *)((longlong)&local_68 + lVar6);
        do {
          if ((*(short *)(lVar4 + 8 + lVar15 * 2) == 0) &&
             (plVar8 = *(longlong **)(lVar9 + lVar15), (*(uint *)(plVar8 + 7) & 0x40000200) == 0)) {
            puVar10 = local_58 + *(uint *)(local_68 + lVar15);
            pcVar3 = *(code **)(*plVar8 + 0x160);
            *(undefined8 *)((longlong)auStack_90 + lVar6) = 0x142a7f6b1;
            (*pcVar3)(plVar8,puVar10);
          }
          lVar15 = lVar15 + 8;
        } while ((ulonglong)uVar1 * 8 != lVar15);
        plVar8 = *(longlong **)(param_1 + 0x10);
        puVar10 = local_58;
        lVar16 = local_60;
      }
      uVar14 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)((longlong)auStack_90 + lVar6) = 0x142a7f6dd;
      FUN_146f3ab54(lVar16,puVar10,uVar14,plVar8);
      lVar9 = *(longlong *)(param_1 + 0x50);
    }
    uVar14 = *(undefined8 *)(lVar9 + 0x18);
    lVar6 = plVar11[2];
    *(undefined8 *)((longlong)plVar12 + -0x28) = 0x142a7f454;
    lVar6 = FUN_1400796d0(lVar6,uVar14,1);
    if (lVar6 == 0) {
      lVar6 = *(longlong *)(param_1 + 0x50);
    }
    plVar8 = (longlong *)param_2[1];
    if ((longlong)(int)plVar8[1] != 0) {
      lVar9 = 0;
      do {
        if ((*(int *)(*plVar8 + 8 + lVar9) != 0) && (*(longlong *)(*plVar8 + lVar9) != 0)) {
          plVar7 = *(longlong **)(lVar16 + 0xf0);
          lVar16 = *(longlong *)(*plVar7 + 0x28);
          uVar14 = *(undefined8 *)(param_1 + 0x28);
          local_58 = puVar10;
          *(undefined8 *)((longlong)plVar12 + -0x28) = 0x142a7f713;
          iVar5 = FUN_146f18900(lVar16 + 0x160);
          if (iVar5 == 0) {
            plVar7 = (longlong *)0x0;
          }
          else {
            lVar16 = *(longlong *)(lVar16 + 0x3d0);
            iVar5 = *(int *)(*(longlong *)(lVar16 + (longlong)(iVar5 / 100) * 8) + 0x28 +
                            (longlong)(iVar5 % 100) * 0x38);
            if (iVar5 != 0) {
              uVar14 = *(undefined8 *)
                        (*(longlong *)(lVar16 + (longlong)(iVar5 / 100) * 8) +
                        (longlong)(iVar5 % 100) * 0x38);
            }
            lVar16 = plVar7[1];
            *(undefined8 *)((longlong)plVar12 + -0x28) = 0x142a7f7a5;
            plVar7 = (longlong *)FUN_142a82794(lVar16,uVar14,plVar7 + 2,&local_50);
          }
          puVar10 = local_58;
          plVar13 = (longlong *)0x0;
          if (plVar11 != plVar7) {
            plVar13 = plVar11;
          }
          *(undefined1 **)((longlong)plVar12 + -0x10) = local_58;
          *(undefined8 *)((longlong)plVar12 + -0x38) = 0x142a7f7ce;
          FUN_146f2e72a(plVar8,plVar7,plVar13,lVar6);
          break;
        }
        lVar9 = lVar9 + 0x10;
      } while ((longlong)(int)plVar8[1] * 0x10 != lVar9);
    }
    DAT_14c997f18 = 1;
    pcVar3 = *(code **)(*plVar11 + 0x248);
    *(undefined8 *)((longlong)plVar12 + -0x28) = 0x142a7f4b2;
    (*pcVar3)(plVar11,lVar6,puVar10);
    DAT_14c997f18 = 0;
    if ((puVar10 != (undefined1 *)0x0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0xb9) & 1) == 0)) {
      for (plVar8 = *(longlong **)(param_1 + 0x50); plVar8 != (longlong *)0x0;
          plVar8 = (longlong *)(*pcVar3)(plVar8)) {
        for (plVar11 = (longlong *)plVar8[10]; plVar11 != (longlong *)0x0;
            plVar11 = (longlong *)plVar11[3]) {
          if ((~*(uint *)(plVar11[1] + 0x18) & 0x8001) == 0) goto LAB_142a7f524;
        }
        pcVar3 = *(code **)(*plVar8 + 0x2b0);
        *(undefined8 *)((longlong)plVar12 + -0x28) = 0x142a7f513;
      }
    }
  }
LAB_142a7f5f9:
  if ((local_48 ^ (ulonglong)&local_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((longlong)plVar12 + -0x28) = &UNK_142a7f623;
  FUN_144d8e3a0();
LAB_142a7f524:
  if (((uint)plVar11[7] & 0x480) == 0x80) {
    if (((ulonglong)plVar11[7] >> 0x24 & 1) == 0) {
      iVar5 = *(int *)((longlong)plVar11 + 0x44);
      pcVar3 = *(code **)(*plVar11 + 0x148);
      *(undefined8 *)((longlong)plVar12 + -0x28) = 0x142a7f55a;
      (*pcVar3)(plVar11,puVar10 + iVar5);
    }
    plVar11 = plVar11 + 3;
    do {
      for (plVar11 = (longlong *)*plVar11; plVar11 != (longlong *)0x0;
          plVar11 = (longlong *)plVar11[3]) {
        if ((~*(uint *)(plVar11[1] + 0x18) & 0x8001) == 0) goto LAB_142a7f524;
      }
      pcVar3 = *(code **)(*plVar8 + 0x2b0);
      *(undefined8 *)((longlong)plVar12 + -0x28) = 0x142a7f590;
      plVar8 = (longlong *)(*pcVar3)(plVar8);
      plVar11 = plVar8 + 10;
    } while (plVar8 != (longlong *)0x0);
  }
  goto LAB_142a7f5f9;
}



// FUNCTION 142a7f7d8 FUN_142a7f7d8 body=144 status=ok
// SIG undefined FUN_142a7f7d8(void)

void FUN_142a7f7d8(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  byte bVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0xe0);
  FUN_146f59287(uVar1,*(undefined4 *)(param_1 + 0x3c));
  bVar2 = *(byte *)(param_1 + 0x38) & 1;
  FUN_146f5435e(uVar1,bVar2 != 0,1);
  if (bVar2 != 0) {
    FUN_146f5ab8b(uVar1,*(int *)(param_1 + 0x40) + -1);
    FUN_146f233dc(param_2,param_1 + 0x28);
  }
  uVar1 = *(undefined8 *)(param_2 + 0xe0);
  FUN_146f5ab8b(uVar1,*(undefined2 *)(param_1 + 0x42));
  FUN_146f59ca6(uVar1,*(undefined8 *)(param_1 + 0x48),0,*(undefined2 *)(param_1 + 0x42));
  return;
}



// FUNCTION 142a7f868 FUN_142a7f868 body=152 status=ok
// SIG undefined FUN_142a7f868(void)

void FUN_142a7f868(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  short sVar2;
  ushort uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  
  uVar1 = *(undefined8 *)(param_2 + 0xd8);
  uVar4 = FUN_146f592ce(uVar1);
  *(undefined4 *)(param_1 + 0x3c) = uVar4;
  *(undefined4 *)(param_1 + 0x38) = 0;
  uVar5 = FUN_146f546d2(uVar1,1);
  if ((uVar5 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x38) = 1;
    sVar2 = FUN_146f5abd0(uVar1);
    *(short *)(param_1 + 0x40) = sVar2 + 1;
    FUN_146f23430(param_2,param_1 + 0x28);
  }
  uVar1 = *(undefined8 *)(param_2 + 0xd8);
  uVar3 = FUN_146f5abd0(uVar1);
  *(ushort *)(param_1 + 0x42) = uVar3;
  FUN_14017c08a(param_1 + 0x48,uVar3 + 0x1f >> 5,1);
  FUN_146f59f56(uVar1,*(undefined8 *)(param_1 + 0x48),*(undefined2 *)(param_1 + 0x42));
  return;
}



// FUNCTION 142a7f900 FUN_142a7f900 body=67 status=ok
// SIG undefined FUN_142a7f900(void)

void FUN_142a7f900(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0xd8);
  iVar2 = FUN_146f592ce(uVar1);
  *(int *)(param_1 + 0x38) = iVar2;
  FUN_14017c08a(param_1 + 0x28,iVar2 + 0x1fU >> 5,1);
  FUN_146f59f56(uVar1,*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x38));
  return;
}



// FUNCTION 142a7f944 FUN_142a7f944 body=1249 status=ok
// SIG undefined FUN_142a7f944(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_142a7f944(longlong param_1,longlong param_2,undefined8 param_3,ulonglong *param_4,
                 char param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auStack_128 [44];
  int local_fc;
  longlong local_f8;
  uint local_ec;
  ulonglong local_e8;
  ulonglong local_e0;
  int local_d4;
  longlong local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  ulonglong *local_b0;
  longlong local_a8;
  int local_a0;
  undefined1 local_98 [16];
  longlong local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  uint local_6c;
  uint local_68 [4];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar15 = *(longlong *)(param_2 + 0xe0);
  local_c0 = *(undefined8 *)(*(longlong *)(param_2 + 0xf0) + 8);
  local_58 = (undefined1  [16])0x0;
  local_68[0] = 0xffffffff;
  local_68[1] = 0xffffffff;
  local_68[2] = 0xffffffff;
  local_68[3] = 0xffffffff;
  uVar9 = *(uint *)(param_1 + 0x2100);
  uVar13 = *(uint *)(param_1 + 0x2104);
  iVar6 = 0;
  local_b8 = param_3;
  if (uVar9 < uVar13) {
    uVar7 = 0xffffffff;
    local_e0 = 0;
    iVar6 = 0;
    uVar11 = 0;
    local_f8 = param_1;
    local_b0 = param_4;
    do {
      if ((*(uint *)(param_1 + 0x2000 + (ulonglong)(uVar9 >> 3 & 0x7c)) >> (uVar9 & 0x1f) & 1) == 0)
      {
        if (local_68[uVar11] == 0xffffffff) {
LAB_142a7fa16:
          local_68[uVar11] = uVar9;
        }
        else if ((int)uVar7 + 1U != uVar9) {
          uVar10 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar10;
          if (uVar10 < 4) goto LAB_142a7fa16;
          break;
        }
        local_d4 = *(int *)(lVar15 + 0x10) - *(int *)(lVar15 + 0xc);
        lVar4 = *(longlong *)(param_2 + 0xf8);
        if (lVar4 == 0) {
          local_80 = 0;
          local_78 = 0;
          local_74 = 0;
        }
        else {
          local_80 = CONCAT44(*(undefined4 *)(*(longlong *)(lVar4 + 8) + 0x198),
                              *(undefined4 *)(*(longlong *)(lVar4 + 8) + 0x108));
          local_78 = *(undefined4 *)(*(longlong *)(lVar4 + 8) + 0x3a8);
          local_74 = *(undefined4 *)(*(longlong *)(lVar4 + 8) + 0x438);
        }
        bVar16 = uVar9 != (int)uVar7 + 1U;
        local_6c = CONCAT31(local_6c._1_3_,bVar16);
        local_fc = iVar6;
        local_88 = param_2;
        FUN_146f5435e(lVar15,bVar16,1);
        if ((char)local_6c != '\0') {
          FUN_146f5435e(lVar15,uVar9 & 0x3ff,10);
        }
        uVar8 = (ulonglong)(uVar9 & 0x3ff);
        lVar4 = *(longlong *)(param_1 + uVar8 * 8);
        iVar6 = 0;
        if (lVar4 != 0) {
          iVar6 = *(int *)(lVar4 + 0x20);
        }
        local_6c = CONCAT31(local_6c._1_3_,iVar6 != 0);
        FUN_146f5435e(lVar15,iVar6 != 0,1);
        if ((char)local_6c != '\0') {
          plVar5 = *(longlong **)(param_1 + uVar8 * 8);
          lVar4 = *(longlong *)(param_2 + 0xf8);
          local_ec = uVar13;
          local_e8 = uVar7;
          local_d0 = lVar15;
          local_c8 = param_2;
          if (lVar4 != 0 && (*(byte *)((longlong)plVar5 + 0xc) & 4) != 0) {
            (**(code **)(*plVar5 + 0x28))(plVar5,local_98);
            FUN_142a7fe26(local_c0,local_c8,local_98);
            plVar5 = *(longlong **)(local_f8 + uVar8 * 8);
            (**(code **)(*plVar5 + 0x30))(plVar5,&local_a8);
            lVar15 = local_a8;
            lVar12 = (longlong)local_a0;
            if (lVar12 != 0) {
              lVar14 = 0;
              do {
                local_6c = *(uint *)(lVar15 + lVar14);
                FUN_146f1aed8(*(longlong *)(lVar4 + 8) + 0x3b0,&local_6c);
                lVar14 = lVar14 + 4;
              } while (lVar12 * 4 != lVar14);
            }
          }
          param_2 = local_c8;
          lVar15 = local_f8;
          FUN_146f233dc(local_c8,*(longlong *)(local_f8 + uVar8 * 8) + 8);
          plVar5 = *(longlong **)(lVar15 + uVar8 * 8);
          if (param_5 == '\0') {
            (*(code *)((undefined8 *)*plVar5)[2])(plVar5,param_2);
            uVar7 = local_e8;
            lVar15 = local_d0;
            uVar13 = local_ec;
          }
          else {
            (**(code **)*plVar5)(plVar5,param_2,local_b8);
            uVar7 = local_e8;
            lVar15 = local_d0;
            uVar13 = local_ec;
          }
        }
        iVar1 = *(int *)(lVar15 + 0x10);
        iVar2 = *(int *)(lVar15 + 0xc);
        local_6c = local_6c & 0xffffff00;
        FUN_146f5435e(lVar15,0,1);
        if (*(int *)(lVar15 + 0x18) == 0) {
          if (local_fc != 0) {
            iVar6 = *(int *)(lVar15 + 0x10);
            iVar3 = *(int *)(lVar15 + 0xc);
            FUN_146f5b2fa(lVar15,local_e0);
            local_6c = CONCAT31(local_6c._1_3_,1);
            FUN_146f5435e(lVar15,1,1);
            FUN_146f5b2fa(lVar15,iVar6 - iVar3);
          }
          iVar6 = local_fc + 1;
          iVar3 = *(int *)(local_58 + uVar11 * 4);
          *(int *)(local_58 + uVar11 * 4) = iVar3 + 1;
          bVar16 = true;
          if ((iVar3 + 1 == 0x3f) &&
             (uVar10 = (int)uVar11 + 1, uVar11 = (ulonglong)uVar10, 3 < uVar10)) {
            bVar16 = false;
          }
          else {
            uVar7 = (ulonglong)uVar9;
            local_e0 = (ulonglong)(uint)(iVar1 - iVar2);
          }
        }
        else {
          FUN_146f154f2(&local_88);
          bVar16 = false;
          iVar6 = local_fc;
        }
        param_1 = local_f8;
        if (((*(longlong *)(local_88 + 8) != 0) ||
            ((*(longlong *)(local_88 + 0xd8) != 0 &&
             (*(int *)(*(longlong *)(local_88 + 0xd8) + 0x14) != 0)))) ||
           ((*(longlong *)(local_88 + 0xe0) != 0 &&
            (*(int *)(*(longlong *)(local_88 + 0xe0) + 0x18) != 0)))) {
          local_e8 = uVar7;
          FUN_146f154f2(&local_88);
          uVar7 = local_e8;
        }
        if (*(int *)(lVar15 + 0x18) != 0) {
          local_fc = iVar6;
          FUN_146f5b2fa(lVar15,local_d4);
          iVar6 = local_fc;
        }
        param_4 = local_b0;
        if (!bVar16) break;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar13);
  }
  auVar17._4_4_ = local_68[1];
  auVar17._0_4_ = local_68[0];
  auVar17._8_4_ = local_68[2];
  auVar17._12_4_ = local_68[3];
  auVar17 = pshufb(auVar17,_DAT_149f996e0);
  auVar18 = pshufb(local_58,_DAT_149f996e0);
  auVar18 = psllw(auVar18,10);
  *param_4 = auVar18._0_8_ | auVar17._0_8_ & (ulonglong)DAT_149f996f0;
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar6;
}



// FUNCTION 142a7fe26 FUN_142a7fe26 body=113 status=ok
// SIG undefined FUN_142a7fe26(void)

void FUN_142a7fe26(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_2 + 0xf8);
  if ((lVar1 != 0) && ((longlong)(int)param_3[1] != 0)) {
    lVar2 = *param_3;
    lVar3 = (longlong)(int)param_3[1] << 4;
    do {
      if (((*(uint *)(lVar2 + 8) & 0xfffff) != 0) ||
         (((*(byte *)(param_1 + 0x118) & 1) != 0 && ((*(byte *)(lVar2 + 0xc) & 1) != 0)))) {
        FUN_146f2b108(*(longlong *)(lVar1 + 8) + 0x1a0,lVar2);
      }
      lVar2 = lVar2 + 0x10;
      lVar3 = lVar3 + -0x10;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 142a7fe98 FUN_142a7fe98 body=647 status=ok
// SIG undefined FUN_142a7fe98(void)

ulonglong FUN_142a7fe98(longlong param_1,longlong param_2,undefined8 param_3,char param_4)

{
  uint *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_a8 [39];
  char local_81;
  longlong local_80;
  ulonglong local_78;
  undefined8 local_70;
  undefined8 *local_68;
  longlong local_60;
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = *(undefined8 *)(param_2 + 0xd8);
  local_68 = *(undefined8 **)(param_2 + 0x110);
  uVar11 = 0xffffffff;
  uVar8 = 0;
  local_81 = param_4;
  local_80 = param_2;
  local_70 = param_3;
  local_60 = param_1;
  do {
    uVar7 = FUN_146f546d2(uVar2,1);
    if ((uVar7 & 1) == 0) {
      uVar11 = uVar11 + 1 & 0x3ff;
    }
    else {
      uVar11 = FUN_146f546d2(uVar2,10);
    }
    lVar10 = local_80;
    uVar5 = DAT_14c9996b0;
    uVar12 = *(uint *)(param_1 + 0x2100);
    uVar6 = (uVar12 & 0xfffffc00) + uVar11;
    uVar4 = (uVar12 & 0xfffffc00) + 0x400 + uVar11;
    if (uVar12 <= uVar6) {
      uVar4 = uVar6;
    }
    if ((uVar4 < uVar12) || (0x3ff < uVar4 - uVar12)) {
LAB_142a800b1:
      FUN_146f5b89e(local_80);
      if (*(longlong *)(lVar10 + 8) == 0) {
        *(undefined8 *)(lVar10 + 8) = uVar5;
      }
      break;
    }
    if ((*(uint *)(param_1 + 0x2080 + (ulonglong)(uVar11 >> 5) * 4) >> (uVar11 & 0x1f) & 1) != 0)
    goto LAB_142a800b1;
    local_78 = uVar8;
    uVar8 = FUN_146f546d2(uVar2,1);
    if ((uVar8 & 1) == 0) {
      plVar9 = (longlong *)0x0;
      lVar10 = local_80;
    }
    else {
      local_50 = 0xffffffff;
      FUN_146f23430(local_80,&local_50);
      (**(code **)*local_68)(local_68,&local_58,&local_50);
      plVar9 = local_58;
      lVar10 = local_80;
      uVar5 = DAT_14c9997b8;
      if (local_58 == (longlong *)0x0) {
        FUN_146f5b89e(local_80);
        uVar8 = local_78;
        if (*(longlong *)(lVar10 + 8) == 0) {
          *(undefined8 *)(lVar10 + 8) = uVar5;
        }
        break;
      }
      if (local_81 == '\0') {
        (**(code **)(*local_58 + 0x18))(local_58,local_80);
      }
      else {
        (**(code **)(*local_58 + 8))(local_58,local_80,local_70);
      }
    }
    uVar6 = FUN_146f546d2(uVar2,1);
    param_1 = local_60;
    if (((*(longlong *)(lVar10 + 8) != 0) ||
        ((*(longlong *)(lVar10 + 0xd8) != 0 && (*(int *)(*(longlong *)(lVar10 + 0xd8) + 0x14) != 0))
        )) || ((*(longlong *)(lVar10 + 0xe0) != 0 &&
               (*(int *)(*(longlong *)(lVar10 + 0xe0) + 0x18) != 0)))) {
      uVar8 = local_78;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar9 + 4;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)(*plVar9 + 0x20))(plVar9,1);
          uVar8 = local_78;
        }
      }
      break;
    }
    plVar3 = *(longlong **)(local_60 + (ulonglong)uVar11 * 8);
    *(longlong **)(local_60 + (ulonglong)uVar11 * 8) = plVar9;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar3 + 4;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)(*plVar3 + 0x20))(plVar3,1);
      }
    }
    uVar12 = uVar4 + 1;
    if (uVar4 + 1 <= *(uint *)(param_1 + 0x2104)) {
      uVar12 = *(uint *)(param_1 + 0x2104);
    }
    *(uint *)(param_1 + 0x2104) = uVar12;
    puVar1 = (uint *)(param_1 + 0x2080 + (ulonglong)(uVar11 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar11 & 0x1f);
    uVar8 = (ulonglong)((int)local_78 + 1);
  } while ((uVar6 & 1) != 0);
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 142a80120 FUN_142a80120 body=149 status=ok
// SIG undefined FUN_142a80120(void)

void FUN_142a80120(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_2 + 0xe8) != 0) &&
     (puVar1 = *(undefined8 **)(param_1 + 0x28), puVar1 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000142a8014e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,param_2);
    return;
  }
  if ((*(longlong *)(param_2 + 0xf8) != 0) &&
     ((lVar2 = *(longlong *)(param_1 + 0x28), (*(uint *)(lVar2 + 0x40) & 0xfffff) != 0 ||
      (((*(byte *)(*(longlong *)(*(longlong *)(param_2 + 0xf0) + 8) + 0x118) & 1) != 0 &&
       ((*(byte *)(lVar2 + 0x44) & 1) != 0)))))) {
    FUN_146f2b108(*(longlong *)(*(longlong *)(param_2 + 0xf8) + 8) + 0x1a0,lVar2 + 0x38);
  }
  FUN_146f59ca6(*(undefined8 *)(param_2 + 0xe0),*(undefined8 *)(param_1 + 0x50),0,
                *(undefined4 *)(param_1 + 0x60));
  return;
}



// FUNCTION 142a801b6 FUN_142a801b6 body=44 status=ok
// SIG undefined FUN_142a801b6(void)

void FUN_142a801b6(longlong param_1,longlong param_2,longlong param_3)

{
  if (((*(uint *)(param_3 + 8) & 0xfffff) == 0) &&
     (((*(byte *)(param_1 + 0x118) & 1) == 0 || ((*(byte *)(param_3 + 0xc) & 1) == 0)))) {
    return;
  }
  FUN_146f2b108(*(longlong *)(param_2 + 8) + 0x1a0,param_3);
  return;
}



// FUNCTION 142a801e2 FUN_142a801e2 body=209 status=ok
// SIG undefined FUN_142a801e2(void)

void FUN_142a801e2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((*(longlong *)(param_2 + 0xe8) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x28), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000142a80217. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
    return;
  }
  lVar2 = *(longlong *)(param_2 + 0xf8);
  if (lVar2 != 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0xf0) + 8);
    lVar4 = *(longlong *)(param_1 + 0x28);
    if (((*(uint *)(lVar4 + 0x30) & 0xfffff) != 0) ||
       (((*(byte *)(lVar3 + 0x118) & 1) != 0 && ((*(byte *)(lVar4 + 0x34) & 1) != 0)))) {
      FUN_146f2b108(*(longlong *)(lVar2 + 8) + 0x1a0,lVar4 + 0x28);
      lVar4 = *(longlong *)(param_1 + 0x28);
    }
    if (((*(uint *)(lVar4 + 0x40) & 0xfffff) != 0) ||
       (((*(byte *)(lVar3 + 0x118) & 1) != 0 && ((*(byte *)(lVar4 + 0x44) & 1) != 0)))) {
      FUN_146f2b108(*(longlong *)(lVar2 + 8) + 0x1a0,lVar4 + 0x38);
    }
  }
  FUN_146f59ca6(*(undefined8 *)(param_2 + 0xe0),*(undefined8 *)(param_1 + 0x50),0,
                *(undefined4 *)(param_1 + 0x60));
  return;
}



// FUNCTION 142a802b4 FUN_142a802b4 body=723 status=ok
// SIG undefined FUN_142a802b4(void)

void FUN_142a802b4(uint *param_1,uint *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  uint local_48 [4];
  uint local_38;
  uint local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = param_2[1] + 0x1f & 0xffffffe0;
  if (param_2[1] == 0) {
    uVar2 = 0x20;
  }
  *param_1 = uVar2;
  uVar4 = param_2[4] + 0x1f & 0xffffffe0;
  if (param_2[4] == 0) {
    uVar4 = uVar2;
  }
  param_1[2] = uVar4;
  param_1[5] = *param_2;
  uVar4 = param_2[3];
  if (uVar2 <= param_2[3]) {
    uVar4 = uVar2;
  }
  iVar5 = uVar4 + (uVar4 == 0);
  param_1[4] = iVar5 - 1;
  uVar4 = param_2[2];
  uVar3 = uVar2;
  if (uVar4 < uVar2) {
    uVar3 = uVar4;
  }
  if (uVar4 == 0) {
    uVar3 = uVar2;
  }
  uVar2 = uVar3 + 0x1f & 0xffffffe0;
  if (uVar3 == 0) {
    uVar2 = 0x20;
  }
  param_1[3] = uVar2;
  FUN_146f274e2(local_48,iVar5);
  if (param_1 + 0x9c != local_48) {
    FUN_146f2fd78(param_1 + 0x9c,local_48);
    param_1[0xa0] = local_38;
    param_1[0xa2] = local_30;
    local_38 = 0;
    local_30 = 0;
  }
  FUN_146f278d4(local_48);
  FUN_146f276d8(local_48,iVar5,0);
  if (param_1 + 0xac != local_48) {
    FUN_146f2fdc8(param_1 + 0xac,local_48);
    param_1[0xb0] = local_38;
    param_1[0xb2] = local_30;
    local_38 = 0;
    local_30 = 0;
  }
  FUN_146f2793a(local_48);
  FUN_146f275fe(local_48,iVar5,0);
  if (param_1 + 0xa4 != local_48) {
    FUN_146f2fe18(param_1 + 0xa4,local_48);
    param_1[0xa8] = local_38;
    param_1[0xaa] = local_30;
    local_38 = 0;
    local_30 = 0;
  }
  FUN_146f279a0(local_48);
  FUN_146f277b2(local_48,iVar5,0);
  if (param_1 + 0xb4 != local_48) {
    FUN_146f2fe68(param_1 + 0xb4,local_48);
    param_1[0xb8] = local_38;
    param_1[0xba] = local_30;
    local_38 = 0;
    local_30 = 0;
  }
  FUN_146f27a06(local_48);
  puVar1 = (undefined8 *)**(undefined8 **)(param_1 + 0x9c);
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 6) = 0xff;
  *(undefined2 *)((longlong)puVar1 + 0x32) = 0;
  FUN_146f27a6c(param_1,param_1 + 0x36);
  FUN_146f27a6c(param_1,param_1 + 0x3c);
  FUN_146f27a6c(param_1,param_1 + 0x2e);
  FUN_146f27a6c(param_1,param_1 + 0x42);
  FUN_146f27a6c(param_1,param_1 + 0x48);
  FUN_146f27a6c(param_1,param_1 + 0x4e);
  FUN_146f27a6c(param_1,param_1 + 0x54);
  FUN_146f27a6c(param_1,param_1 + 0x5a);
  FUN_146f27a6c(param_1,param_1 + 0x60);
  FUN_146f27a6c(param_1,param_1 + 0x66);
  FUN_146f27a6c(param_1,param_1 + 0x6c);
  FUN_146f27a6c(param_1,param_1 + 0x72);
  FUN_146f27a6c(param_1,param_1 + 0x7e);
  FUN_146f27a6c(param_1,param_1 + 0x78);
  **(uint **)(param_1 + 0x54) = **(uint **)(param_1 + 0x54) | 1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a80588 FUN_142a80588 body=1186 status=ok
// SIG undefined FUN_142a80588(void)

uint FUN_142a80588(uint *param_1,ulonglong param_2,ulonglong *param_3,longlong param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  ulonglong *puVar4;
  uint uVar5;
  longlong lVar6;
  byte bVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  uint *local_80;
  ulonglong *local_78;
  uint local_6c;
  ulonglong local_68;
  ulonglong *local_60;
  uint *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar5 = *param_1;
  local_68 = param_2;
  uVar12 = 0;
  if (param_1[1] < uVar5) {
    puVar1 = param_1 + 6;
    if (param_1[8] != param_1[0x13]) {
      puVar9 = param_1 + 0x14;
      if (*(uint **)(param_1 + 0x16) != (uint *)0x0) {
        puVar9 = *(uint **)(param_1 + 0x16);
      }
      uVar8 = puVar9[param_1[0x18] - 1 & (int)param_2 + ((uint)(param_2 >> 0x20) & 0xfffffff) * 0x17
                    ];
      if (uVar8 != 0xffffffff) {
        do {
          if (((*(ulonglong *)(*(longlong *)puVar1 + (longlong)(int)uVar8 * 0x18) ^ param_2) &
              0xfffffffffffffff) == 0) goto LAB_142a806c5;
          uVar8 = *(uint *)(*(longlong *)puVar1 + (longlong)(int)uVar8 * 0x18 + 0x10);
        } while (uVar8 != 0xffffffff);
      }
    }
    if ((ulonglong)param_1[0x56] != 0) {
      puVar9 = *(uint **)(param_1 + 0x54);
      lVar6 = 0;
LAB_142a80650:
      if (*puVar9 == 0xffffffff) goto code_r0x000142a80659;
      uVar12 = *puVar9 ^ 0xffffffff;
      if (uVar12 == 0) {
        iVar10 = 0x20;
      }
      else {
        iVar10 = 0;
        if (uVar12 != 0) {
          for (; (uVar12 >> iVar10 & 1) == 0; iVar10 = iVar10 + 1) {
          }
        }
      }
      uVar12 = iVar10 - (int)lVar6;
      if ((param_1[0x58] <= uVar12) || (puVar4 = param_3, local_6c = uVar12, iVar10 == (int)lVar6))
      goto LAB_142a80696;
      goto LAB_142a8075e;
    }
LAB_142a80696:
    uVar12 = param_1[3];
    if (uVar12 < uVar5) {
      uVar8 = param_1[2] + uVar12;
      if (uVar5 <= param_1[2] + uVar12) {
        uVar8 = uVar5;
      }
      param_1[3] = uVar8;
      uVar5 = param_1[0x10e];
      local_80 = puVar1;
      local_78 = param_3;
      if ((longlong)(int)uVar5 != 0) {
        lVar6 = *(longlong *)(param_1 + 0x10c);
        lVar11 = 0;
        do {
          FUN_146efc8cc(*(undefined8 *)(lVar6 + lVar11),uVar8);
          lVar11 = lVar11 + 8;
        } while ((longlong)(int)uVar5 * 8 != lVar11);
      }
      FUN_145ec9dc8(param_1 + 0x100,uVar8);
      puVar1 = local_80;
      puVar4 = local_78;
      if (uVar12 != 0) {
LAB_142a8075e:
        local_78 = puVar4;
        local_80 = puVar1;
        puVar4 = local_78;
        local_6c = uVar12;
        if (param_1[4] < uVar12) {
          uVar5 = param_1[0xb0];
          if ((int)uVar5 <= (int)uVar12) {
            FUN_146f2ff6e(param_1 + 0xac,(uVar12 - uVar5) + 1);
            uVar5 = param_1[0xb0];
          }
          iVar10 = param_1[0xae] * 100;
          if (iVar10 - uVar5 != 0 && (int)uVar5 <= iVar10) {
            FUN_146f2ff6e(param_1 + 0xac);
          }
          if (iVar10 - param_1[0xa8] != 0 && (int)param_1[0xa8] <= iVar10) {
            uVar5 = param_1[0xa6];
            lVar6 = (longlong)(int)uVar5;
            FUN_146f2ffec(param_1 + 0xa4);
            if ((int)uVar5 < (int)param_1[0xa6]) {
              do {
                memset(*(void **)(*(longlong *)(param_1 + 0xa4) + lVar6 * 8),0,800);
                lVar6 = lVar6 + 1;
              } while (lVar6 < (int)param_1[0xa6]);
            }
          }
          if (iVar10 - param_1[0xb8] != 0 && (int)param_1[0xb8] <= iVar10) {
            uVar5 = param_1[0xb6];
            lVar6 = (longlong)(int)uVar5;
            FUN_146f3006a(param_1 + 0xb4);
            if ((int)uVar5 < (int)param_1[0xb6]) {
              do {
                memset(*(void **)(*(longlong *)(param_1 + 0xb4) + lVar6 * 8),0,800);
                lVar6 = lVar6 + 1;
              } while (lVar6 < (int)param_1[0xb6]);
            }
          }
          if (iVar10 - param_1[0xa0] != 0 && (int)param_1[0xa0] <= iVar10) {
            uVar5 = param_1[0x9e];
            lVar6 = (longlong)(int)uVar5;
            FUN_146f300f8(param_1 + 0x9c);
            if ((int)uVar5 < (int)param_1[0x9e]) {
              do {
                memset(*(void **)(*(longlong *)(param_1 + 0x9c) + lVar6 * 8),0,0x15e0);
                lVar6 = lVar6 + 1;
              } while (lVar6 < (int)param_1[0x9e]);
            }
          }
          param_1[4] = iVar10 - 1U;
          FUN_145ec9dc8(param_1 + 0x106,iVar10 - 1U);
        }
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x9c) + (longlong)((int)uVar12 / 100) * 8);
        lVar11 = (ulonglong)(uint)((int)uVar12 % 100) * 0x38;
        *(undefined8 *)(lVar6 + 0x28 + lVar11) = 0;
        puVar2 = (undefined8 *)(lVar6 + 0x18 + lVar11);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined8 *)(lVar6 + 8 + lVar11);
        *puVar2 = 0;
        puVar2[1] = 0;
        *(undefined1 *)(lVar6 + 0x30 + lVar11) = 0xff;
        *(undefined2 *)(lVar6 + 0x32 + lVar11) = 0;
        *(ulonglong *)(lVar6 + lVar11) = param_2;
        *(ulonglong *)(lVar6 + 8 + lVar11) = *puVar4;
        *(longlong *)(lVar6 + 0x10 + lVar11) = param_4;
        *(undefined8 *)(lVar6 + 0x18 + lVar11) = 0;
        bVar7 = (byte)uVar12 & 0x1f;
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x7e) + (ulonglong)(uVar12 >> 5) * 4);
        *puVar1 = *puVar1 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
        *(undefined8 *)
         (*(longlong *)(*(longlong *)(param_1 + 0xa4) + (longlong)((int)uVar12 / 100) * 8) +
         (ulonglong)(uint)((int)uVar12 % 100) * 8) = 0;
        *(undefined8 *)(lVar6 + 0x20 + lVar11) = 0;
        pbVar3 = (byte *)(lVar6 + 0x32 + lVar11);
        *pbVar3 = *pbVar3 | 1;
        param_1[1] = param_1[1] + 1;
        local_60 = &local_68;
        local_58 = &local_6c;
        FUN_146f301ae(local_80,local_4c,&local_60,0);
        if (((int)*puVar4 != 0) || (*(int *)((longlong)puVar4 + 4) != 0)) {
          local_60 = puVar4;
          local_58 = &local_6c;
          FUN_146f306ca(param_1 + 0x1a,local_4c);
        }
        bVar7 = (byte)local_6c;
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x54) + (ulonglong)(local_6c >> 5) * 4);
        *puVar1 = *puVar1 | 1 << (bVar7 & 0x1f);
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x2e) + (ulonglong)(local_6c >> 5) * 4);
        *puVar1 = *puVar1 | 1 << (bVar7 & 0x1f);
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x5a) + (ulonglong)(local_6c >> 5) * 4);
        *puVar1 = *puVar1 & (-2 << (bVar7 & 0x1f) | 0xfffffffeU >> 0x20 - (bVar7 & 0x1f));
        pbVar3 = (byte *)(lVar6 + lVar11 + 0x32);
        *pbVar3 = *pbVar3 | 0xc0;
        *(undefined2 *)
         (*(longlong *)(*(longlong *)(param_1 + 0xac) + (longlong)((int)local_6c / 100) * 8) +
         (ulonglong)(uint)((int)local_6c % 100) * 2) = 0;
        uVar12 = local_6c;
        goto LAB_142a806c5;
      }
      uVar5 = *param_1;
      local_6c = uVar12;
    }
    local_88 = **(undefined8 **)(param_4 + 0x30);
    FUN_140033559(".\\Runtime/Experimental/Iris/Core/Private/Iris/ReplicationSystem/NetRefHandleManager.cpp"
                  ,0xd6,
                  L"NetRefHandleManager: Hit the maximum limit of active replicated objects: %u. Aborting since we cannot replicate %s"
                  ,uVar5);
    uVar12 = 0;
  }
LAB_142a806c5:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12;
code_r0x000142a80659:
  lVar6 = lVar6 + -0x20;
  puVar9 = puVar9 + 1;
  if ((ulonglong)param_1[0x56] * 0x20 + lVar6 == 0) goto LAB_142a80696;
  goto LAB_142a80650;
}



// FUNCTION 142a80a2c FUN_142a80a2c body=115 status=ok
// SIG undefined FUN_142a80a2c(void)

undefined8 FUN_142a80a2c(longlong param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x270) + (longlong)((int)param_2 / 100) * 8);
    lVar5 = (ulonglong)(uint)((int)param_2 % 100) * 0x38;
    uVar4 = *(undefined8 *)(lVar2 + 0x18 + lVar5);
    *(undefined8 *)(lVar2 + 0x18 + lVar5) = 0;
    *(undefined8 *)
     (*(longlong *)(*(longlong *)(param_1 + 0x2d0) + (longlong)((int)param_2 / 100) * 8) +
     (ulonglong)(uint)((int)param_2 % 100) * 8) = 0;
    bVar3 = (byte)param_2 & 0x1f;
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x1f8) + (ulonglong)(param_2 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  }
  return uVar4;
}



// FUNCTION 142a80aa0 FUN_142a80aa0 body=902 status=ok
// SIG undefined FUN_142a80aa0(void)

void FUN_142a80aa0(longlong param_1,uint param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  byte bVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_1e8 [40];
  longlong local_1c0;
  longlong local_1b8;
  ulonglong local_1b0;
  undefined8 local_1a8;
  undefined5 uStack_1a0;
  undefined3 uStack_19b;
  undefined5 uStack_198;
  undefined8 uStack_193;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178 [26];
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 *puStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  uVar11 = (ulonglong)(uint)((int)param_2 % 100);
  lVar13 = (longlong)((int)param_2 / 100);
  lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x270) + lVar13 * 8);
  puVar2 = (undefined8 *)(lVar8 + uVar11 * 0x38);
  lVar14 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x290) + lVar13 * 8) + uVar11 * 8);
  if ((*(byte *)(*(longlong *)(lVar8 + 0x10 + uVar11 * 0x38) + 0x3c) & 1) != 0) {
    local_178[0] = 0;
    local_178[1] = 0;
    lVar8 = 0x18;
    do {
      *(undefined8 *)((longlong)local_178 + lVar8) = 0;
      lVar8 = lVar8 + 0x18;
    } while (lVar8 != 0xd8);
    local_a8 = 0;
    local_90 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0xffffffff00000000;
    local_58 = local_58 & 0xfc;
    puStack_88 = &local_1a8;
    local_188 = 0;
    local_180 = 0;
    local_1a8 = 0;
    uStack_1a0 = 0;
    uStack_19b = 0;
    uStack_198 = 0;
    uStack_193 = 0;
    if (lVar14 != 0) {
      FUN_146f3ba90(local_178,lVar14);
    }
    if (puVar2[4] != 0) {
      FUN_146f3ba90(local_178,puVar2[4],puVar2[2]);
    }
  }
  lVar8 = param_1 + 0x300;
  lVar9 = FUN_146f27f84(lVar8,param_2);
  if (lVar9 != 0) {
    lVar12 = *(longlong *)(lVar9 + 0x20);
    if (*(longlong *)(lVar9 + 0x20) == 0) {
      lVar12 = lVar9;
    }
    iVar4 = *(int *)(lVar9 + 0x28);
    local_1c0 = lVar14;
    local_1b8 = lVar13;
    local_1b0 = uVar11;
    if ((longlong)iVar4 != 0) {
      lVar14 = 0;
      do {
        FUN_146f27ffc(param_1,param_2,*(undefined4 *)(lVar12 + lVar14),0);
        lVar14 = lVar14 + 4;
      } while ((longlong)iVar4 * 4 != lVar14);
    }
    uVar11 = local_1b0;
    lVar13 = local_1b8;
    lVar14 = local_1c0;
    *(undefined4 *)(lVar9 + 0x28) = 0;
    if (*(int *)(lVar9 + 0x2c) < 0) {
      FUN_146effd44(lVar9,0);
    }
  }
  lVar9 = FUN_146f281e4(lVar8,param_2);
  if ((lVar9 != 0) && (*(undefined4 *)(lVar9 + 0x28) = 0, *(int *)(lVar9 + 0x2c) < 0)) {
    FUN_146effd44(lVar9,0);
  }
  if (*(int *)(puVar2 + 5) != 0) {
    FUN_146f27ffc(param_1,*(int *)(puVar2 + 5),param_2,1);
  }
  FUN_146f28258(param_1,param_2);
  FUN_146f26366(lVar8,param_2);
  LOCK();
  *(int *)(puVar2[2] + 0x40) = *(int *)(puVar2[2] + 0x40) + -1;
  UNLOCK();
  if (*(int *)(puVar2[2] + 0x40) == 0) {
    FUN_146f41f76(*(undefined8 *)(param_1 + 0x3f8),puVar2[2]);
  }
  FUN_1400020a8(lVar14);
  FUN_1400020a8(puVar2[4]);
  *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x290) + lVar13 * 8) + uVar11 * 8) = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined1 *)(puVar2 + 6) = 0xff;
  *(undefined2 *)((longlong)puVar2 + 0x32) = 0;
  bVar7 = (byte)param_2 & 0x1f;
  uVar10 = -2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7;
  uVar11 = (ulonglong)((param_2 >> 5) * 4);
  puVar3 = (uint *)(*(longlong *)(param_1 + 0x150) + uVar11);
  *puVar3 = *puVar3 & uVar10;
  puVar3 = (uint *)(*(longlong *)(param_1 + 0xb8) + uVar11);
  *puVar3 = *puVar3 & uVar10;
  puVar3 = (uint *)(*(longlong *)(param_1 + 0x1f8) + uVar11);
  *puVar3 = *puVar3 & uVar10;
  puVar3 = (uint *)(*(longlong *)(param_1 + 0x168) + uVar11);
  *puVar3 = *puVar3 & uVar10;
  puVar3 = (uint *)(*(longlong *)(param_1 + 0x198) + uVar11);
  *puVar3 = *puVar3 & uVar10;
  puVar3 = (uint *)(*(longlong *)(param_1 + 0x1c8) + uVar11);
  *puVar3 = *puVar3 & uVar10;
  puVar3 = (uint *)(*(longlong *)(param_1 + 0x1e0) + uVar11);
  *puVar3 = *puVar3 & uVar10;
  uVar5 = *(uint *)(*(longlong *)(param_1 + 0x1b0) + uVar11);
  if (((uVar5 >> (param_2 & 0x1f) & 1) != 0) &&
     (*(uint *)(*(longlong *)(param_1 + 0x1b0) + (ulonglong)(param_2 >> 5) * 4) = uVar5 & uVar10,
     *(int *)(param_1 + 0x218) != *(int *)(param_1 + 0x244))) {
    lVar8 = param_1 + 0x248;
    if (*(longlong *)(param_1 + 0x250) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x250);
    }
    iVar4 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_1 + 600) - 1U & param_2) * 4);
    if (iVar4 != -1) {
      plVar1 = (longlong *)(param_1 + 0x210);
      lVar8 = *plVar1;
      do {
        lVar14 = (longlong)iVar4 * 0x10;
        if (*(uint *)(lVar8 + lVar14) == param_2) {
          uVar6 = *(undefined4 *)(lVar8 + 4 + lVar14);
          FUN_1409a1216(plVar1);
          FUN_1409a11ae(plVar1,uVar6);
          break;
        }
        iVar4 = *(int *)(lVar14 + lVar8 + 8);
      } while (iVar4 != -1);
    }
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  if ((local_48 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a80e28 FUN_142a80e28 body=317 status=ok
// SIG undefined FUN_142a80e28(void)

void FUN_142a80e28(longlong param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)(param_1 + 0x268);
  if (0 < (longlong)iVar1) {
    iVar5 = -iVar1;
    uVar4 = (longlong)iVar1;
    do {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x260) + -4 + uVar4 * 4);
      if ((*(short *)(*(longlong *)(*(longlong *)(param_1 + 0x2b0) + (longlong)(iVar1 / 100) * 8) +
                     (ulonglong)(uint)(iVar1 % 100) * 2) == 0) &&
         (FUN_146f1b984(param_1 + 0x300,local_58,iVar1), local_50 < 1)) {
        FUN_142a80aa0(param_1,iVar1);
        uVar3 = *(uint *)(param_1 + 0x268);
        if (uVar4 != uVar3) {
          iVar1 = uVar3 + iVar5;
          if (0 < (int)(uVar3 + iVar5)) {
            iVar1 = 1;
          }
          memmove((void *)(*(longlong *)(param_1 + 0x260) + uVar4 * 4 + -4),
                  (void *)(*(longlong *)(param_1 + 0x260) + (longlong)(int)(uVar3 - iVar1) * 4),
                  (longlong)iVar1 << 2);
          uVar3 = *(uint *)(param_1 + 0x268);
        }
        *(uint *)(param_1 + 0x268) = uVar3 - 1;
        FUN_144780a3c(param_1 + 0x260);
      }
      iVar5 = iVar5 + 1;
      bVar2 = 1 < uVar4;
      uVar4 = uVar4 - 1;
    } while (bVar2);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a80f66 FUN_142a80f66 body=475 status=ok
// SIG undefined FUN_142a80f66(void)

undefined8 FUN_142a80f66(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  uint *puVar9;
  undefined8 uVar10;
  uint uVar11;
  uint *puVar12;
  longlong lVar13;
  longlong lVar14;
  
  uVar5 = FUN_146f18900();
  uVar6 = FUN_146f18900(param_1,param_3);
  if (uVar6 == 0 || uVar5 == 0) {
LAB_142a80fa1:
    uVar10 = 0;
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x270) + (longlong)((int)uVar6 / 100) * 8);
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x270) + (longlong)((int)uVar5 / 100) * 8);
    puVar7 = (uint *)FUN_146f265a2(param_1 + 0x300,uVar5);
    lVar8 = FUN_146f26ad0(param_1 + 0x300,uVar6,2);
    puVar9 = *(uint **)(puVar7 + 0x10);
    puVar12 = puVar9;
    if (puVar9 == (uint *)0x0) {
      puVar12 = puVar7;
    }
    lVar13 = (longlong)(int)puVar7[0x12];
    if (lVar13 != 0) {
      lVar14 = lVar13 * 8;
      do {
        if (*puVar12 == uVar6) {
          if (puVar12 != (uint *)0x0) goto LAB_142a80fa1;
          break;
        }
        puVar12 = puVar12 + 2;
        lVar14 = lVar14 + -8;
      } while (lVar14 != 0);
    }
    uVar11 = puVar7[0x12] + 1;
    puVar7[0x12] = uVar11;
    if (puVar7[0x13] < uVar11) {
      FUN_146f31098(puVar7);
      puVar9 = *(uint **)(puVar7 + 0x10);
    }
    if (puVar9 != (uint *)0x0) {
      puVar7 = puVar9;
    }
    *(ulonglong *)(puVar7 + lVar13 * 2) = CONCAT44(param_4,uVar6) & 0xffffffffff;
    iVar2 = *(int *)(lVar8 + 0x28);
    *(uint *)(lVar8 + 0x28) = iVar2 + 1U;
    if (*(uint *)(lVar8 + 0x2c) < iVar2 + 1U) {
      FUN_140694806(lVar8,iVar2);
    }
    if (*(longlong *)(lVar8 + 0x20) != 0) {
      lVar8 = *(longlong *)(lVar8 + 0x20);
    }
    *(uint *)(lVar8 + (longlong)iVar2 * 4) = uVar5;
    pbVar1 = (byte *)(lVar3 + 0x32 + (ulonglong)(uint)((int)uVar6 % 100) * 0x38);
    *pbVar1 = *pbVar1 | 8;
    pbVar1 = (byte *)(lVar4 + 0x32 + (ulonglong)(uint)((int)uVar5 % 100) * 0x38);
    *pbVar1 = *pbVar1 | 0x10;
    puVar9 = (uint *)(*(longlong *)(param_1 + 0x198) + (ulonglong)(uVar5 >> 5) * 4);
    *puVar9 = *puVar9 | 1 << ((byte)uVar5 & 0x1f);
    uVar5 = 1 << ((byte)uVar6 & 0x1f);
    puVar9 = (uint *)(*(longlong *)(param_1 + 0x180) + (ulonglong)(uVar6 >> 5) * 4);
    *puVar9 = *puVar9 | uVar5;
    uVar10 = CONCAT71((uint7)(uint3)(uVar5 >> 8),1);
  }
  return uVar10;
}



// FUNCTION 142a81142 FUN_142a81142 body=65 status=ok
// SIG undefined FUN_142a81142(void)

void FUN_142a81142(longlong param_1)

{
  if (((ulonglong)*(uint *)(param_1 + 0xf8) != 0) && (*(int *)(param_1 + 0xe0) != 0)) {
    memcpy(*(void **)(param_1 + 0xf0),*(void **)(param_1 + 0xd8),
           (ulonglong)*(uint *)(param_1 + 0xf8) << 2);
  }
  *(byte *)(param_1 + 0xd0) = *(byte *)(param_1 + 0xd0) & 0xfe;
  return;
}



// FUNCTION 142a81183 FUN_142a81183 body=69 status=ok
// SIG undefined FUN_142a81183(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a81183(void)

{
  _DAT_14c9996b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a811c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9996c0,1);
  return;
}



// FUNCTION 142a811c8 FUN_142a811c8 body=1060 status=ok
// SIG undefined FUN_142a811c8(void)

int FUN_142a811c8(longlong param_1,void *param_2,ulonglong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined1 auStack_208 [39];
  undefined1 local_1e1;
  uint local_1e0;
  undefined4 local_1dc;
  longlong *local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  undefined1 *local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  longlong local_198;
  int iStack_190;
  uint uStack_18c;
  undefined8 local_188;
  ulonglong uStack_180;
  undefined1 local_170 [216];
  undefined8 local_98;
  longlong *local_90;
  longlong local_78;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  if (((*(longlong *)(param_1 + 0x58) != 0) &&
      (*(int *)(param_1 + 0x50) != *(int *)(param_1 + 0x4c))) &&
     (plVar2 = *(longlong **)((longlong)param_2 + 0xe0), (int)plVar2[3] == 0)) {
    uVar12 = *(uint *)(plVar2 + 2);
    uVar15 = (int)plVar2[1] - uVar12;
    if (uVar15 != 0) {
      local_1d0 = *(longlong *)((longlong)param_2 + 0xf8);
      local_198 = *plVar2;
      local_188 = plVar2[2];
      uStack_180 = plVar2[3] & 0xfffffffcffffffffU | 0x200000000;
      *(byte *)((longlong)plVar2 + 0x1c) = *(byte *)((longlong)plVar2 + 0x1c) | 1;
      uVar7 = (int)plVar2[1] + ~uVar12;
      if (uVar15 <= uVar7) {
        uVar7 = uVar15;
      }
      _iStack_190 = CONCAT44(uVar12,uVar7 + uVar12);
      local_1d8 = plVar2;
      memcpy(local_170,param_2,0x128);
      local_98 = 0;
      iVar14 = *(int *)(*(longlong *)(param_1 + 0x58) + 0x28);
      local_1b8 = param_1 + 0x28;
      local_1e0 = 0;
      local_90 = &local_198;
      do {
        uVar12 = *(uint *)(param_1 + 0x4c);
        if (*(uint *)(param_1 + 0x50) == uVar12) break;
        iVar9 = (uint)local_188 - uStack_18c;
        if (local_78 == 0) {
          local_1a8 = 0;
          local_1a0 = 0;
          local_19c = 0;
        }
        else {
          local_1a8 = CONCAT44(*(undefined4 *)(*(longlong *)(local_78 + 8) + 0x198),
                               *(undefined4 *)(*(longlong *)(local_78 + 8) + 0x108));
          local_1a0 = *(undefined4 *)(*(longlong *)(local_78 + 8) + 0x3a8);
          local_19c = *(undefined4 *)(*(longlong *)(local_78 + 8) + 0x438);
        }
        lVar4 = *(longlong *)(param_1 + 0x40);
        uVar13 = (ulonglong)(*(uint *)(param_1 + 0x48) & uVar12);
        local_1b0 = local_170;
        if (((iVar14 == 1) || ((*(uint *)(lVar4 + uVar13 * 4) & 0x800000) == 0)) &&
           (cVar6 = FUN_146f290ea(local_1d0), cVar6 == '\0')) {
          local_1e1 = 1;
          FUN_146f5435e(&local_198,1,1);
          FUN_146f2929e(local_170,*(undefined4 *)(lVar4 + uVar13 * 4),1);
          uVar12 = *(uint *)(lVar4 + uVar13 * 4);
          if ((uVar12 & 0xfffff) != 0) {
            uVar8 = (ulonglong)(uVar12 >> 0x10 & 0x70);
            plVar2 = *(longlong **)((*(longlong **)(param_1 + 0x58))[3] + 8 + uVar8);
            (**(code **)(*plVar2 + 0x10))
                      (plVar2,local_170,
                       *(undefined4 *)
                        (*(longlong *)(**(longlong **)(param_1 + 0x58) + uVar8) +
                        ((ulonglong)uVar12 & 0xfffff) * 4));
          }
          if ((int)uStack_180 == 0) {
            uVar16 = *(undefined4 *)(lVar4 + uVar13 * 4);
            lVar3 = *(longlong *)(local_1d0 + 8);
            iVar1 = *(int *)(lVar3 + 0x198);
            *(uint *)(lVar3 + 0x198) = iVar1 + 1U;
            lVar10 = lVar3 + 0x110;
            lVar11 = (longlong)iVar1;
            if (*(uint *)(lVar3 + 0x19c) < iVar1 + 1U) {
              local_1dc = uVar16;
              local_1c8 = (longlong)iVar1;
              local_1c0 = lVar3 + 0x110;
              FUN_146f1af62();
              lVar10 = local_1c0;
              lVar11 = local_1c8;
              uVar16 = local_1dc;
            }
            if (*(longlong *)(lVar3 + 400) != 0) {
              lVar10 = *(longlong *)(lVar3 + 400);
            }
            *(undefined4 *)(lVar10 + lVar11 * 4) = uVar16;
            FUN_146f313c4(local_1b8);
            uVar12 = *(uint *)(param_1 + 0x38);
            *(uint *)(param_1 + 0x38) = uVar12 + 1;
            *(undefined4 *)
             (*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar12 & *(uint *)(param_1 + 0x30)) * 4) =
                 *(undefined4 *)(lVar4 + uVar13 * 4);
            local_1e0 = local_1e0 + 1;
            uVar12 = *(uint *)(param_1 + 0x4c);
            goto LAB_142a813ce;
          }
          bVar5 = false;
        }
        else {
LAB_142a813ce:
          *(uint *)(param_1 + 0x4c) = uVar12 + 1;
          bVar5 = true;
        }
        if (((*(longlong *)(local_1b0 + 8) != 0) ||
            ((*(longlong *)(local_1b0 + 0xd8) != 0 &&
             (*(int *)(*(longlong *)(local_1b0 + 0xd8) + 0x14) != 0)))) ||
           ((*(longlong *)(local_1b0 + 0xe0) != 0 &&
            (*(int *)(*(longlong *)(local_1b0 + 0xe0) + 0x18) != 0)))) {
          FUN_146f154f2(&local_1b0);
        }
        if ((int)uStack_180 != 0) {
          FUN_146f5b2fa(&local_198,iVar9);
        }
      } while (bVar5);
      plVar2 = local_1d8;
      uVar12 = local_1e0;
      if (local_1e0 == 0) {
        FUN_146f5b442(local_1d8);
        iVar14 = 0;
      }
      else {
        FUN_146f5b3a6(local_1d8,&local_198);
        local_1b0 = (undefined1 *)((ulonglong)local_1b0 & 0xffffffffffffff00);
        FUN_146f5435e(plVar2,0,1);
        *param_3 = (ulonglong)uVar12;
        iVar14 = (0 < *(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c)) + 1;
      }
      if (((uint)local_188 < (iStack_190 + 0x1fU & 0xffffffe0)) && ((uStack_180 & 0x400000000) == 0)
         ) {
        *(undefined4 *)(local_198 + (ulonglong)((uint)local_188 >> 5) * 4) = local_188._4_4_;
      }
      goto LAB_142a8122e;
    }
  }
  iVar14 = 0;
  if (*(int *)(param_1 + 0x38) == *(int *)(param_1 + 0x34)) {
    iVar14 = 0;
    FUN_146f31278(param_1 + 0x28,0);
    iVar9 = *(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c);
    uVar13 = (ulonglong)(iVar9 + -1 + (uint)(iVar9 == 0)) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iVar9 = 1 << ((byte)lVar4 & 0x1f);
    if (*(int *)(param_1 + 0x50) == *(int *)(param_1 + 0x4c)) {
      iVar9 = iVar14;
    }
    FUN_146f31278(param_1 + 0x40,iVar9);
  }
LAB_142a8122e:
  if ((local_48 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar14;
}



// FUNCTION 142a815ee FUN_142a815ee body=164 status=ok
// SIG undefined FUN_142a815ee(void)

void FUN_142a815ee(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    lVar1 = *(longlong *)(param_2 + 0xd8);
    uVar2 = FUN_146f546d2(lVar1,1);
    if ((uVar2 & 1) != 0) {
      do {
        if (*(int *)(lVar1 + 0x14) != 0) break;
        FUN_146f2921e(&local_2c,param_2,0xffffffff);
        FUN_142a81694(*(undefined8 *)(param_1 + 0x58),param_2,local_2c,
                      *(undefined8 *)(param_1 + 0x60));
        uVar2 = FUN_146f546d2(lVar1,1);
      } while ((uVar2 & 1) != 0);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a81694 FUN_142a81694 body=232 status=ok
// SIG undefined FUN_142a81694(void)

void FUN_142a81694(longlong param_1,longlong param_2,uint param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3c = param_3;
  if ((param_3 & 0xfffff) != 0) {
    puVar1 = *(undefined8 **)(param_2 + 0xd8);
    uVar4 = param_3 >> 0x14 & 7;
    if (uVar4 < *(uint *)(param_1 + 0x20)) {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 8 + (ulonglong)(uVar4 << 4));
      (**(code **)(*plVar2 + 0x20))(plVar2,&local_40,param_2,&local_3c);
      local_48 = local_40;
      cVar3 = FUN_142a81848(param_1,plVar2,param_4,local_3c);
      if (cVar3 != '\0') goto LAB_142a81758;
    }
    if (*(int *)((longlong)puVar1 + 0x14) == 0) {
      if (*(int *)(puVar1 + 1) == -1) {
        *(undefined4 *)((longlong)puVar1 + 0x14) = 0;
        *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
        *(undefined4 *)(puVar1 + 2) = *(undefined4 *)*puVar1;
      }
      else {
        *(undefined4 *)((longlong)puVar1 + 0x14) = 1;
      }
    }
  }
LAB_142a81758:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a8177e FUN_142a8177e body=126 status=ok
// SIG undefined FUN_142a8177e(void)

void FUN_142a8177e(undefined8 param_1,longlong *param_2,ulonglong param_3)

{
  undefined1 auStack_48 [35];
  byte local_25;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = (uint)param_3 & 0xfffff;
  (**(code **)(*param_2 + 0x188))(param_2,&local_24);
  if (local_24 != 0) {
    local_25 = (byte)(param_3 >> 0x17) & 1;
    (**(code **)(*param_2 + 0x178))(param_2,&local_25,1);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a817fe FUN_142a817fe body=74 status=ok
// SIG undefined FUN_142a817fe(void)

void FUN_142a817fe(longlong *param_1,undefined8 param_2,uint param_3)

{
  longlong *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar2 = param_3 & 0xfffff;
  if (uVar2 != 0) {
    uVar3 = param_3 >> 0x14 & 7;
    uVar4 = (ulonglong)(uVar3 << 4);
    if (uVar2 < *(uint *)(*param_1 + 8 + uVar4)) {
      plVar1 = *(longlong **)(param_1[3] + 8 + (ulonglong)(uVar3 << 4));
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000142a81844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)
                (plVar1,param_2,
                 *(undefined4 *)(*(longlong *)(*param_1 + uVar4) + (ulonglong)uVar2 * 4),
                 UNRECOVERED_JUMPTABLE);
      return;
    }
  }
  return;
}



// FUNCTION 142a81848 FUN_142a81848 body=173 status=ok
// SIG undefined FUN_142a81848(void)

undefined8
FUN_142a81848(longlong param_1,longlong param_2,longlong param_3,uint param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if ((param_5 != 0) && (uVar4 = param_4 & 0xfffff, uVar4 != 0xfffff)) {
    uVar5 = (ulonglong)(param_4 >> 0x10 & 0x70);
    uVar1 = *(uint *)(param_3 + 8 + uVar5);
    if (uVar1 < uVar4 + 1) {
      uVar1 = uVar4 + 1;
    }
    FUN_146f2b08a((longlong *)(param_3 + uVar5),uVar1,1);
    lVar3 = *(longlong *)(param_3 + uVar5);
    iVar2 = *(int *)(lVar3 + (ulonglong)uVar4 * 4);
    if (iVar2 == 0 || iVar2 == param_5) {
      if (((param_4 >> 0x17 & 1) != 0) && (*(int *)(param_1 + 0x28) != 1)) {
        *(uint *)(*(longlong *)(param_2 + 8) + (longlong)param_5 * 4) = param_4;
        lVar3 = *(longlong *)(param_3 + uVar5);
      }
      *(int *)(lVar3 + (ulonglong)uVar4 * 4) = param_5;
      return CONCAT71((uint7)(uint3)(uVar4 >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 142a818f6 FUN_142a818f6 body=200 status=ok
// SIG undefined FUN_142a818f6(void)

void FUN_142a818f6(longlong param_1,longlong param_2,uint param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3c = param_3;
  if ((param_3 & 0xfffff) == 0) {
LAB_142a81983:
    if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  if ((*(byte *)(param_2 + 0x29) & 2) == 0) {
    uVar3 = param_3 >> 0x14 & 7;
    if (uVar3 < *(uint *)(param_1 + 0x20)) {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 8 + (ulonglong)(uVar3 << 4));
      (**(code **)(*plVar1 + 0x18))(plVar1,&local_40,param_2,&local_3c);
      local_48 = local_40;
      cVar2 = FUN_142a81848(param_1,plVar1,param_4,local_3c);
      if (cVar2 == '\0') {
        FUN_14572541c(param_2);
      }
      goto LAB_142a81983;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
}



// FUNCTION 142a819d4 FUN_142a819d4 body=206 status=ok
// SIG undefined FUN_142a819d4(void)

void FUN_142a819d4(uint *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  uVar3 = *param_1;
  if (uVar3 != 0) {
    param_1[1] = param_1[1] + 1;
    lVar5 = *(longlong *)(param_1 + 0x42);
    lVar6 = *(longlong *)(param_1 + 0x46);
    lVar7 = *param_2;
    lVar8 = *param_3;
    lVar9 = *param_4;
    lVar11 = 0;
    lVar10 = 0;
    do {
      uVar4 = *(uint *)(lVar7 + lVar11);
      if (uVar4 != 0) {
        pcVar1 = (char *)(lVar6 + lVar10);
        pcVar2 = (char *)(lVar6 + 0x10 + lVar10);
        auVar15[0] = *pcVar1 + -1;
        auVar15[1] = pcVar1[1] + -1;
        auVar15[2] = pcVar1[2] + -1;
        auVar15[3] = pcVar1[3] + -1;
        auVar15[4] = pcVar1[4] + -1;
        auVar15[5] = pcVar1[5] + -1;
        auVar15[6] = pcVar1[6] + -1;
        auVar15[7] = pcVar1[7] + -1;
        auVar15[8] = pcVar1[8] + -1;
        auVar15[9] = pcVar1[9] + -1;
        auVar15[10] = pcVar1[10] + -1;
        auVar15[0xb] = pcVar1[0xb] + -1;
        auVar15[0xc] = pcVar1[0xc] + -1;
        auVar15[0xd] = pcVar1[0xd] + -1;
        auVar15[0xe] = pcVar1[0xe] + -1;
        auVar15[0xf] = pcVar1[0xf] + -1;
        auVar12[0] = -(*pcVar1 == '\0');
        auVar12[1] = -(pcVar1[1] == '\0');
        auVar12[2] = -(pcVar1[2] == '\0');
        auVar12[3] = -(pcVar1[3] == '\0');
        auVar12[4] = -(pcVar1[4] == '\0');
        auVar12[5] = -(pcVar1[5] == '\0');
        auVar12[6] = -(pcVar1[6] == '\0');
        auVar12[7] = -(pcVar1[7] == '\0');
        auVar12[8] = -(pcVar1[8] == '\0');
        auVar12[9] = -(pcVar1[9] == '\0');
        auVar12[10] = -(pcVar1[10] == '\0');
        auVar12[0xb] = -(pcVar1[0xb] == '\0');
        auVar12[0xc] = -(pcVar1[0xc] == '\0');
        auVar12[0xd] = -(pcVar1[0xd] == '\0');
        auVar12[0xe] = -(pcVar1[0xe] == '\0');
        auVar12[0xf] = -(pcVar1[0xf] == '\0');
        auVar15 = pblendvb(auVar15,*(undefined1 (*) [16])(lVar5 + lVar10),auVar12);
        auVar14[0] = *pcVar2 + -1;
        auVar14[1] = pcVar2[1] + -1;
        auVar14[2] = pcVar2[2] + -1;
        auVar14[3] = pcVar2[3] + -1;
        auVar14[4] = pcVar2[4] + -1;
        auVar14[5] = pcVar2[5] + -1;
        auVar14[6] = pcVar2[6] + -1;
        auVar14[7] = pcVar2[7] + -1;
        auVar14[8] = pcVar2[8] + -1;
        auVar14[9] = pcVar2[9] + -1;
        auVar14[10] = pcVar2[10] + -1;
        auVar14[0xb] = pcVar2[0xb] + -1;
        auVar14[0xc] = pcVar2[0xc] + -1;
        auVar14[0xd] = pcVar2[0xd] + -1;
        auVar14[0xe] = pcVar2[0xe] + -1;
        auVar14[0xf] = pcVar2[0xf] + -1;
        auVar13[0] = -(*pcVar2 == '\0');
        auVar13[1] = -(pcVar2[1] == '\0');
        auVar13[2] = -(pcVar2[2] == '\0');
        auVar13[3] = -(pcVar2[3] == '\0');
        auVar13[4] = -(pcVar2[4] == '\0');
        auVar13[5] = -(pcVar2[5] == '\0');
        auVar13[6] = -(pcVar2[6] == '\0');
        auVar13[7] = -(pcVar2[7] == '\0');
        auVar13[8] = -(pcVar2[8] == '\0');
        auVar13[9] = -(pcVar2[9] == '\0');
        auVar13[10] = -(pcVar2[10] == '\0');
        auVar13[0xb] = -(pcVar2[0xb] == '\0');
        auVar13[0xc] = -(pcVar2[0xc] == '\0');
        auVar13[0xd] = -(pcVar2[0xd] == '\0');
        auVar13[0xe] = -(pcVar2[0xe] == '\0');
        auVar13[0xf] = -(pcVar2[0xf] == '\0');
        auVar14 = pblendvb(auVar14,*(undefined1 (*) [16])(lVar5 + 0x10 + lVar10),auVar13);
        *(undefined1 (*) [16])(lVar6 + lVar10) = auVar15;
        *(undefined1 (*) [16])(lVar6 + 0x10 + lVar10) = auVar14;
        *(uint *)(lVar9 + lVar11) =
             (CONCAT22((ushort)(SUB161(auVar13 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar13[0xf] >> 7) << 0xf,
                       (ushort)(SUB161(auVar12 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar12 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar12 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar12 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar12 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar12 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar12 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar12 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar12 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar12 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar12 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar12 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar12 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar12 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar12 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar12[0xf] >> 7) << 0xf) | *(uint *)(lVar8 + lVar11)) & uVar4;
      }
      lVar10 = lVar10 + 0x20;
      lVar11 = lVar11 + 4;
    } while ((uint)lVar10 <= uVar3);
  }
  return;
}



// FUNCTION 142a81aa2 FUN_142a81aa2 body=69 status=ok
// SIG undefined FUN_142a81aa2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a81aa2(void)

{
  _DAT_14c9996d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a81ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9996d8,1);
  return;
}



// FUNCTION 142a81ae8 FUN_142a81ae8 body=1821 status=ok
// SIG undefined FUN_142a81ae8(void)

undefined8 FUN_142a81ae8(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined2 *puVar14;
  int iVar15;
  uint *puVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auStack_d8 [44];
  int local_ac;
  undefined2 *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  uint local_90;
  longlong **local_88;
  byte local_80;
  longlong *local_78;
  uint local_70;
  uint local_6c;
  longlong *local_68;
  undefined1 local_5c [4];
  longlong **local_58;
  longlong **pplStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_68 = param_2;
  if ((param_2 != (longlong *)0x0) && ((*(uint *)(param_2 + 1) >> 0x1e & 1) == 0)) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      uVar7 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
              -0x7a143595;
      uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
      plVar10 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar10 = (longlong *)param_1[8];
      }
      iVar9 = *(int *)((longlong)plVar10 +
                      (ulonglong)((int)param_1[9] - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
      if (iVar9 != -1) {
        do {
          plVar10 = (longlong *)(*param_1 + (longlong)iVar9 * 0x18);
          if ((longlong *)*plVar10 == param_2) {
            if (plVar10 + 1 != (longlong *)0x0 && plVar10 != (longlong *)0x0) {
              puVar14 = (undefined2 *)plVar10[1];
              local_a8 = puVar14;
              if ((int)param_1[0xb] == *(int *)((longlong)param_1 + 0x84)) goto LAB_142a81f22;
              plVar10 = param_1 + 0x11;
              if ((longlong *)param_1[0x12] != (longlong *)0x0) {
                plVar10 = (longlong *)param_1[0x12];
              }
              iVar9 = *(int *)((longlong)plVar10 +
                              (ulonglong)
                              ((int)param_1[0x13] - 1U &
                              (int)puVar14 + ((uint)((ulonglong)puVar14 >> 0x20) & 0xfffffff) * 0x17
                              ) * 4);
              if (iVar9 == -1) goto LAB_142a81f22;
              lVar17 = param_1[10];
              goto LAB_142a81d25;
            }
            break;
          }
          iVar9 = (int)plVar10[2];
        } while (iVar9 != -1);
      }
    }
    goto LAB_142a81bb1;
  }
  goto LAB_142a81c94;
LAB_142a82051:
  uVar7 = *(uint *)((longlong)plVar10 + 0x2c) & 0x20000;
  local_80 = bVar6 & 0xe0 | bVar5 | (byte)(uVar7 >> 0x11);
  bVar6 = (byte)(uVar7 >> 0x10) ^ 2;
LAB_142a8206a:
  local_80 = local_80 | bVar6;
  pplStack_50 = (longlong **)&local_a8;
  local_58 = &local_78;
  FUN_146f318b6(param_1 + 10,local_5c,&local_58);
  local_58 = &local_68;
  pplStack_50 = &local_78;
  FUN_146f31d52(param_1,local_5c,&local_58);
  *param_3 = CONCAT44(uStack_94,local_98);
  *(undefined4 *)(param_3 + 1) = 0;
  *(uint *)((longlong)param_3 + 0xc) = (uint)((local_90 & 0xfffff) != 0);
LAB_142a820d5:
  uVar11 = 1;
  goto LAB_142a81c96;
  while (iVar9 = *(int *)(lVar1 + 0x38), iVar9 != -1) {
LAB_142a81d25:
    lVar1 = lVar17 + (longlong)iVar9 * 0x40;
    if (((*(ulonglong *)(lVar17 + (longlong)iVar9 * 0x40) ^ (ulonglong)puVar14) & 0xfffffffffffffff)
        == 0) {
      if ((lVar1 != 0) && (puVar16 = (uint *)(lVar1 + 8), puVar16 != (uint *)0x0)) {
        if (*(int *)(lVar1 + 0xc) == 0) {
LAB_142a82193:
          plVar10 = (longlong *)0x0;
        }
        else {
          uVar7 = *puVar16;
          plVar10 = (longlong *)0x0;
          if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) {
            puVar13 = (undefined8 *)
                      ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
            if ((puVar13 == (undefined8 *)0x0) ||
               ((*(int *)(puVar13 + 2) != *(int *)(lVar1 + 0xc) ||
                ((*(uint *)(puVar13 + 1) & 0x10200000) != 0)))) goto LAB_142a82193;
            plVar10 = (longlong *)*puVar13;
          }
        }
        if (plVar10 == param_2) {
          uVar7 = *(uint *)(lVar1 + 0x20);
          *param_3 = *(undefined8 *)(lVar1 + 0x18);
          *(undefined4 *)(param_3 + 1) = 0;
          *(uint *)((longlong)param_3 + 0xc) = (uint)((uVar7 & 0xfffff) != 0);
          goto LAB_142a820d5;
        }
        FUN_146f31628(param_1,*(undefined8 *)(lVar1 + 0x10));
        FUN_146f31628(param_1,param_2);
        if (((ulonglong)puVar14 & 1) == 0) {
          FUN_146f31776(param_1 + 10,&local_a8);
        }
        else {
          puVar16[0] = 0;
          puVar16[1] = 0;
          *(undefined8 *)(lVar1 + 0x10) = 0;
        }
        goto LAB_142a81bb1;
      }
      break;
    }
  }
LAB_142a81f22:
  FUN_146f31628(param_1,param_2);
LAB_142a81bb1:
  uVar8 = FUN_14008df0e(param_2);
  cVar3 = (char)uVar8;
  if ((cVar3 != '\0') || (cVar4 = (**(code **)(*param_2 + 0x200))(param_2), cVar4 != '\0')) {
    if ((*(byte *)(param_1 + 0x23) & 1) != 0) {
      FUN_146f27c60(param_1[0x22],&local_78,uVar8);
      if (cVar3 == '\0') {
        cVar4 = (**(code **)(*param_2 + 0x1f8))(param_2);
        uVar7 = 0;
        if (cVar4 != '\0') goto LAB_142a81e18;
      }
      else {
LAB_142a81e18:
        local_58 = (longlong **)param_2[3];
        FUN_1400021e4(&local_58,&local_a8);
        iVar9 = FUN_140d25081();
        if (iVar9 != -1) {
          (**(code **)(*(longlong *)param_1[0x1f] + 0x340))((longlong *)param_1[0x1f],0,&local_a8,0)
          ;
        }
        iVar9 = iStack_a0 + -1;
        puVar14 = local_a8;
        if (iStack_a0 == 0) {
          puVar14 = &DAT_149dfb77a;
          iVar9 = 0;
        }
        FUN_146f4a3aa(param_1[0x21],&local_58,puVar14,iVar9);
        uVar7 = (uint)local_58;
        if (local_a8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      local_88 = (longlong **)0x0;
      local_a8 = (undefined2 *)0x0;
      iStack_a0 = 0;
      uStack_9c = 0;
      local_98 = 0;
      uStack_94 = 0;
      local_90 = 0;
      uVar2 = *(uint *)((longlong)param_2 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar17 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar17 = 0;
      }
      iVar9 = *(int *)(lVar17 + 0x10);
      if (*(int *)(lVar17 + 0x10) == 0) {
        LOCK();
        iVar9 = DAT_14c964868 + 1;
        UNLOCK();
        iVar15 = DAT_14c964868 + 1;
        bVar18 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar9;
        if (bVar18) {
          local_ac = iVar15;
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar15);
          iVar15 = local_ac;
        }
        LOCK();
        iVar9 = *(int *)(lVar17 + 0x10);
        bVar18 = iVar9 == 0;
        if (bVar18) {
          *(int *)(lVar17 + 0x10) = iVar15;
          iVar9 = 0;
        }
        UNLOCK();
        if (bVar18) {
          iVar9 = iVar15;
        }
      }
      local_a8 = (undefined2 *)CONCAT44(iVar9,uVar2);
      iStack_a0 = (int)param_2;
      uStack_9c = (undefined4)((ulonglong)param_2 >> 0x20);
      local_98 = SUB84(local_78,0);
      uStack_94 = (undefined4)((ulonglong)local_78 >> 0x20);
      local_58 = (longlong **)0x0;
      pplStack_50 = (longlong **)0x0;
      local_90 = uVar7;
      FUN_142a81ae8(param_1,param_2[4],&local_58);
      bVar6 = local_80;
      local_88 = local_58;
      if (cVar3 != '\0') {
        bVar5 = ((longlong *)param_2[4] == (longlong *)0x0) << 2;
        local_80 = local_80 & 0xfb | bVar5;
        plVar10 = (longlong *)param_2[4];
        do {
          plVar12 = plVar10;
          plVar10 = param_2;
          if (plVar12 == (longlong *)0x0) {
LAB_142a82036:
            if (plVar10 != (longlong *)0x0) goto LAB_142a82051;
            plVar12 = (longlong *)param_2[4];
          }
          else if ((*(uint *)(param_2 + 1) >> 0x1c & 1) != 0) {
            plVar10 = (longlong *)FUN_142840154(param_2);
            goto LAB_142a82036;
          }
          plVar10 = (longlong *)plVar12[4];
          param_2 = plVar12;
        } while( true );
      }
      local_80 = (local_80 & 0xe0) + 1;
      bVar6 = 0;
      goto LAB_142a8206a;
    }
    plVar10 = param_2;
    do {
      if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
        uVar7 = ((uint)((ulonglong)plVar10 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar10 >> 4)) *
                -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        plVar12 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar12 = param_1 + 7;
        }
        iVar9 = *(int *)((longlong)plVar12 +
                        (ulonglong)((int)param_1[9] - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
        if (iVar9 != -1) {
          do {
            puVar13 = (undefined8 *)(*param_1 + (longlong)iVar9 * 0x18);
            if ((longlong *)*puVar13 == plVar10) {
              if (puVar13 + 1 != (undefined8 *)0x0 && puVar13 != (undefined8 *)0x0) {
                local_a8 = (undefined2 *)0x0;
                iStack_a0 = 0;
                uStack_9c = 0;
                FUN_1401031ac(param_2);
                iVar9 = FUN_140d25081();
                if (iVar9 != -1) {
                  (**(code **)(*(longlong *)param_1[0x1f] + 0x340))
                            ((longlong *)param_1[0x1f],0,&local_a8,0);
                }
                iVar9 = iStack_a0 + -1;
                puVar14 = local_a8;
                if (iStack_a0 == 0) {
                  puVar14 = &DAT_149dfb77a;
                  iVar9 = 0;
                }
                FUN_146f4a3aa(param_1[0x21],&local_6c,puVar14,iVar9);
                *param_3 = puVar13[1];
                *(uint *)(param_3 + 1) = local_6c;
                *(uint *)((longlong)param_3 + 0xc) = (uint)((local_6c & 0xfffff) != 0);
                goto LAB_142a81f0a;
              }
              break;
            }
            iVar9 = *(int *)(puVar13 + 2);
          } while (iVar9 != -1);
        }
      }
      plVar10 = (longlong *)plVar10[4];
    } while (plVar10 != (longlong *)0x0);
    if (cVar3 == '\0') goto LAB_142a81c94;
    local_a8 = (undefined2 *)0x0;
    iStack_a0 = 0;
    uStack_9c = 0;
    FUN_1401031ac(param_2,0);
    iVar9 = FUN_140d25081();
    if (iVar9 != -1) {
      (**(code **)(*(longlong *)param_1[0x1f] + 0x340))((longlong *)param_1[0x1f],0,&local_a8,0);
    }
    iVar9 = iStack_a0 + -1;
    puVar14 = local_a8;
    if (iStack_a0 == 0) {
      puVar14 = &DAT_149dfb77a;
      iVar9 = 0;
    }
    FUN_146f4a3aa(param_1[0x21],&local_70,puVar14,iVar9);
    *param_3 = 0;
    *(uint *)(param_3 + 1) = local_70;
    *(uint *)((longlong)param_3 + 0xc) = (uint)((local_70 & 0xfffff) != 0);
LAB_142a81f0a:
    if (local_a8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    goto LAB_142a820d5;
  }
LAB_142a81c94:
  uVar11 = 0;
LAB_142a81c96:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11;
}



// FUNCTION 142a82206 FUN_142a82206 body=664 status=ok
// SIG undefined FUN_142a82206(void)

void FUN_142a82206(longlong param_1,ulonglong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  ulonglong *local_90;
  ulonglong local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined1 local_70;
  longlong local_68;
  ulonglong local_60;
  ulonglong *local_58;
  longlong **local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = param_3;
  local_60 = param_2;
  if ((param_2 & 1) == 0 && param_2 != 0) {
    if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
      lVar7 = param_1 + 0x88;
      if (*(longlong *)(param_1 + 0x90) != 0) {
        lVar7 = *(longlong *)(param_1 + 0x90);
      }
      iVar4 = *(int *)(lVar7 + (ulonglong)
                               (*(int *)(param_1 + 0x98) - 1U &
                               (int)param_2 + ((uint)(param_2 >> 0x20) & 0xfffffff) * 0x17) * 4);
      if (iVar4 != -1) {
        lVar7 = *(longlong *)(param_1 + 0x50);
        do {
          lVar1 = lVar7 + (longlong)iVar4 * 0x40;
          if (((*(ulonglong *)(lVar7 + (longlong)iVar4 * 0x40) ^ param_2) & 0xfffffffffffffff) == 0)
          {
            if ((lVar1 + 8U & 0xfffffffffffffff7) != 0) {
              if (param_3 == 0) {
                uVar6 = 0;
                uVar3 = 0;
              }
              else {
                uVar6 = *(uint *)(param_3 + 0xc);
                if ((int)uVar6 < DAT_14c9647dc) {
                  lVar7 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
                }
                else {
                  lVar7 = 0;
                }
                uVar3 = (ulonglong)*(uint *)(lVar7 + 0x10);
                if (*(uint *)(lVar7 + 0x10) == 0) {
                  LOCK();
                  iVar4 = DAT_14c964868 + 1;
                  UNLOCK();
                  uVar5 = DAT_14c964868 + 1;
                  bVar8 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar4;
                  if (bVar8) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,uVar5);
                  }
                  LOCK();
                  uVar2 = *(uint *)(lVar7 + 0x10);
                  bVar8 = uVar2 == 0;
                  if (bVar8) {
                    *(uint *)(lVar7 + 0x10) = uVar5;
                    uVar2 = 0;
                  }
                  UNLOCK();
                  if (bVar8) {
                    uVar2 = uVar5;
                  }
                  uVar3 = (ulonglong)uVar2;
                }
              }
              *(ulonglong *)(lVar1 + 8) = (ulonglong)uVar6 | uVar3 << 0x20;
              *(longlong *)(lVar1 + 0x10) = param_3;
              goto LAB_142a82386;
            }
            break;
          }
          iVar4 = *(int *)(lVar1 + 0x38);
        } while (iVar4 != -1);
      }
    }
    if (param_3 == 0) {
      uVar6 = 0;
      uVar3 = 0;
    }
    else {
      uVar6 = *(uint *)(param_3 + 0xc);
      if ((int)uVar6 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      uVar3 = (ulonglong)*(uint *)(lVar7 + 0x10);
      if (*(uint *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        uVar5 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar5);
        }
        LOCK();
        uVar2 = *(uint *)(lVar7 + 0x10);
        bVar8 = uVar2 == 0;
        if (bVar8) {
          *(uint *)(lVar7 + 0x10) = uVar5;
          uVar2 = 0;
        }
        UNLOCK();
        if (bVar8) {
          uVar2 = uVar5;
        }
        uVar3 = (ulonglong)uVar2;
      }
    }
    local_98 = (longlong *)((ulonglong)uVar6 | uVar3 << 0x20);
    local_50 = &local_98;
    local_58 = &local_60;
    local_88 = local_60;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_90 = (ulonglong *)param_3;
    FUN_146f318b6((longlong *)(param_1 + 0x50),local_44);
LAB_142a82386:
    local_98 = &local_68;
    local_90 = &local_60;
    FUN_146f31d52(param_1,&local_58);
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a824a0 FUN_142a824a0 body=756 status=ok
// SIG undefined FUN_142a824a0(void)

void FUN_142a824a0(longlong *param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint *puVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  
  if ((param_2 & 1) == 0 && param_2 != 0) {
    if ((int)param_1[0x13] != 0) {
      plVar5 = param_1 + 0x11;
      if ((longlong *)param_1[0x12] != (longlong *)0x0) {
        plVar5 = (longlong *)param_1[0x12];
      }
      puVar6 = (ulonglong *)
               ((longlong)plVar5 +
               (longlong)
               (int)((int)param_1[0x13] - 1U &
                    ((uint)(param_2 >> 0x20) & 0xfffffff) * 0x17 + (int)param_2) * 4);
      do {
        if ((longlong)(int)*puVar6 == -1) goto LAB_142a82573;
        lVar10 = param_1[10];
        lVar15 = (longlong)(int)*puVar6 * 0x40;
        puVar6 = (ulonglong *)(lVar10 + lVar15) + 7;
      } while (((*(ulonglong *)(lVar10 + lVar15) ^ param_2) & 0xfffffffffffffff) != 0);
      if (param_3 == 0) {
        param_3 = *(ulonglong *)(lVar10 + 0x10 + lVar15);
      }
      if ((*(uint *)(lVar10 + 0x20 + lVar15) & 0xfffff) == 0) {
        FUN_146f317ea();
      }
      else {
        *(undefined8 *)(lVar10 + lVar15 + 8) = 0;
        *(undefined8 *)(lVar10 + lVar15 + 0x10) = 0;
      }
    }
LAB_142a82573:
    if (param_3 == 0) {
      iVar3 = (int)param_1[5];
      if (iVar3 == 0) {
        uVar16 = 1;
        uVar13 = 0;
        iVar14 = 0;
        iVar7 = 0;
      }
      else {
        puVar11 = (uint *)param_1[4];
        if ((uint *)param_1[4] == (uint *)0x0) {
          puVar11 = (uint *)(param_1 + 2);
        }
        uVar4 = *puVar11;
        if (uVar4 == 0) {
          iVar7 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar7 = iVar3 + -1;
          }
          uVar13 = 0;
          uVar16 = (ulonglong)(uint)(iVar7 >> 5);
          if (iVar7 >> 5 < 1) {
            uVar16 = uVar13;
          }
          iVar14 = 0;
          do {
            if (uVar16 == uVar13) {
              return;
            }
            iVar14 = iVar14 + 0x20;
            uVar4 = puVar11[uVar13 + 1];
            uVar13 = uVar13 + 1;
          } while (uVar4 == 0);
        }
        else {
          uVar13 = 0;
          iVar14 = 0;
        }
        uVar16 = (ulonglong)(-uVar4 & uVar4);
        uVar2 = uVar16 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar7 = (iVar14 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar7) {
          iVar7 = iVar3;
        }
      }
      if (iVar7 < iVar3) {
        iVar12 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar12 = iVar3 + -1;
        }
        iVar12 = iVar12 >> 5;
        uVar4 = 0xffffffff;
        do {
          if (((*(ulonglong *)(*param_1 + 8 + (longlong)iVar7 * 0x18) ^ param_2) & 0xfffffffffffffff
              ) == 0) goto LAB_142a825f9;
          uVar4 = uVar4 & ~(uint)uVar16;
          puVar11 = (uint *)param_1[4];
          if ((uint *)param_1[4] == (uint *)0x0) {
            puVar11 = (uint *)(param_1 + 2);
          }
          iVar7 = (int)uVar13;
          lVar10 = (longlong)iVar7;
          uVar8 = puVar11[lVar10] & uVar4;
          if (uVar8 == 0) {
            iVar9 = iVar12;
            if (iVar12 < iVar7) {
              iVar9 = iVar7;
            }
            if (iVar12 <= iVar7) {
              return;
            }
            lVar15 = 0;
            while( true ) {
              iVar14 = iVar14 + 0x20;
              uVar8 = puVar11[lVar10 + lVar15 + 1];
              if (uVar8 != 0) break;
              lVar15 = lVar15 + 1;
              if (iVar9 - lVar10 == lVar15) {
                return;
              }
            }
            uVar13 = (ulonglong)(iVar7 + (int)lVar15 + 1);
            uVar4 = 0xffffffff;
          }
          uVar16 = (ulonglong)(-uVar8 & uVar8);
          uVar2 = uVar16 * 2 + 1;
          lVar10 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
            }
          }
          iVar7 = (iVar14 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        } while (iVar7 < iVar3);
      }
    }
    else if ((int)param_1[9] != 0) {
      uVar4 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
      uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
      plVar5 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar5 = (longlong *)param_1[8];
      }
      puVar6 = (ulonglong *)
               ((longlong)plVar5 +
               (longlong)(int)((int)param_1[9] - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
      do {
        lVar10 = (longlong)(int)*puVar6;
        if (lVar10 == -1) {
          return;
        }
        puVar1 = (ulonglong *)(*param_1 + lVar10 * 0x18);
        puVar6 = puVar1 + 2;
      } while (*puVar1 != param_3);
      if (((param_2 ^ *(ulonglong *)(*param_1 + 8 + lVar10 * 0x18)) & 0xfffffffffffffff) == 0) {
LAB_142a825f9:
        FUN_146f316ac(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142a82794 FUN_142a82794 body=3145 status=ok
// SIG undefined FUN_142a82794(void)

byte * FUN_142a82794(longlong *param_1,byte **param_2,undefined8 *param_3,byte *param_4)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong *puVar13;
  undefined8 *puVar14;
  undefined2 *puVar15;
  int iVar16;
  uint *puVar17;
  longlong lVar18;
  uint uVar19;
  byte *pbVar20;
  bool bVar21;
  undefined1 auStack_108 [32];
  ulonglong local_e8;
  ulonglong local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  wchar_t *local_c8;
  code *local_c0;
  undefined1 *local_b8;
  byte ***local_b0;
  code *local_a8;
  code *local_a0;
  byte *local_98;
  byte *local_90;
  byte **local_88;
  ulonglong local_80;
  undefined2 *local_78;
  int local_70;
  byte *local_68;
  byte **local_60;
  ulonglong *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((int)param_1[0xb] != *(int *)((longlong)param_1 + 0x84)) {
    plVar12 = param_1 + 0x11;
    plVar11 = (longlong *)param_1[0x12];
    if ((longlong *)param_1[0x12] == (longlong *)0x0) {
      plVar11 = plVar12;
    }
    iVar6 = *(int *)((longlong)plVar11 +
                    (ulonglong)
                    ((int)param_1[0x13] - 1U &
                    (int)param_2 + ((uint)((ulonglong)param_2 >> 0x20) & 0xfffffff) * 0x17) * 4);
    if (iVar6 != -1) {
      do {
        lVar18 = param_1[10] + (longlong)iVar6 * 0x40;
        if (((*(ulonglong *)(param_1[10] + (longlong)iVar6 * 0x40) ^ (ulonglong)param_2) &
            0xfffffffffffffff) == 0) {
          puVar17 = (uint *)(lVar18 + 8);
          if (puVar17 != (uint *)0x0 && lVar18 != 0) {
            if (((((*(int *)(lVar18 + 0xc) == 0) || (uVar2 = *puVar17, (int)uVar2 < 0)) ||
                 (DAT_14c9647dc <= (int)uVar2)) ||
                ((puVar14 = (undefined8 *)
                            ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
                 puVar14 == (undefined8 *)0x0 || (*(int *)(puVar14 + 2) != *(int *)(lVar18 + 0xc))))
                ) || ((*(uint *)(puVar14 + 1) & 0x10200000) != 0)) {
              local_68 = (byte *)0x0;
              *param_4 = ~*(byte *)(lVar18 + 0x30) & 1;
            }
            else {
              pbVar20 = (byte *)*puVar14;
              *param_4 = ~*(byte *)(lVar18 + 0x30) & 1;
              local_68 = pbVar20;
              if (pbVar20 != (byte *)0x0) goto LAB_142a8285c;
            }
            pbVar20 = (byte *)(lVar18 + 0x30);
            if (((*pbVar20 & 0x18) != 0) || ((*(uint *)(lVar18 + 0x20) & 0xfffff) == 0))
            goto LAB_142a82859;
            uVar4 = *(ulonglong *)(lVar18 + 0x28);
            if (uVar4 == 0) {
              local_98 = (byte *)0x0;
              goto LAB_142a829b6;
            }
            if ((int)param_1[0xb] == *(int *)((longlong)param_1 + 0x84)) goto LAB_142a82af6;
            plVar11 = (longlong *)param_1[0x12];
            if ((longlong *)param_1[0x12] == (longlong *)0x0) {
              plVar11 = plVar12;
            }
            iVar6 = *(int *)((longlong)plVar11 +
                            (ulonglong)
                            ((int)param_1[0x13] - 1U &
                            (int)uVar4 + ((uint)(uVar4 >> 0x20) & 0xfffffff) * 0x17) * 4);
            if (iVar6 == -1) goto LAB_142a82af6;
            goto LAB_142a82983;
          }
          break;
        }
        iVar6 = *(int *)(lVar18 + 0x38);
      } while (iVar6 != -1);
    }
  }
  *param_4 = 0;
  goto LAB_142a82859;
  while (iVar6 = *(int *)(lVar7 + 0x38), iVar6 != -1) {
LAB_142a82983:
    lVar7 = param_1[10] + (longlong)iVar6 * 0x40;
    if (((*(ulonglong *)(param_1[10] + (longlong)iVar6 * 0x40) ^ uVar4) & 0xfffffffffffffff) == 0) {
      if ((lVar7 + 8U & 0xfffffffffffffff7) != 0) {
        if ((*(byte *)(lVar7 + 0x30) & 8) != 0) goto LAB_142a82aff;
        pbVar8 = (byte *)FUN_142a82794(param_1,uVar4,param_3,&local_60);
        pbVar10 = pbVar8;
        if (pbVar8 != (byte *)0x0) goto LAB_142a8333a;
        goto LAB_142a82859;
      }
      break;
    }
  }
LAB_142a82af6:
  if ((uVar4 & 1) != 0) {
LAB_142a82aff:
    *pbVar20 = *pbVar20 | 8;
  }
  goto LAB_142a82859;
LAB_142a8333a:
  local_98 = pbVar10;
  pbVar9 = pbVar8;
  pbVar8 = pbVar9;
  if (*(byte **)(pbVar9 + 0x20) != (byte *)0x0) goto code_r0x000142a83349;
  goto LAB_142a83367;
code_r0x000142a83393:
  pbVar8 = *(byte **)(pbVar10 + 0x20);
  if ((*(uint *)(pbVar10 + 8) >> 0x1c & 1) != 0) {
    local_90 = pbVar10;
    pbVar10 = (byte *)FUN_142840154();
    pbVar8 = local_90;
LAB_142a833ab:
    if (pbVar10 == (byte *)0x0) {
      pbVar8 = *(byte **)(pbVar8 + 0x20);
      goto LAB_142a83384;
    }
    goto LAB_142a829b6;
  }
  goto LAB_142a83384;
  while (iVar6 = (int)puVar13[8], iVar6 != -1) {
LAB_142a82e40:
    puVar13 = (ulonglong *)(lVar7 + (longlong)iVar6 * 0x48);
    if ((byte **)*puVar13 == local_88) goto LAB_142a8302e;
  }
  puVar13 = (ulonglong *)0x0;
LAB_142a8302e:
  local_60 = param_2;
  FUN_146f315a2(puVar13 + 1);
  *(byte *)(lVar18 + 0x30) = *(byte *)(lVar18 + 0x30) | 0x10;
LAB_142a8300e:
  pbVar20 = (byte *)0x0;
  goto LAB_142a83011;
  while (iVar16 = *(int *)(lVar18 + 0x38), iVar16 != -1) {
LAB_142a82f5f:
    lVar18 = param_1[10] + (longlong)iVar16 * 0x40;
    if (((*(ulonglong *)(param_1[10] + (longlong)iVar16 * 0x40) ^ uVar4) & 0xfffffffffffffff) == 0)
    {
      if ((lVar18 + 8U & 0xfffffffffffffff7) != 0) {
        uVar19 = *(uint *)(lVar18 + 8);
        iVar16 = *(int *)(lVar18 + 0xc);
        if (((iVar16 != 0) &&
            (((((int)uVar19 < 0 || (DAT_14c9647dc <= (int)uVar19)) ||
              (lVar18 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8), lVar18 == 0)
              ) || ((*(int *)(lVar18 + 0x10) != iVar16 ||
                    ((*(uint *)(lVar18 + 8) & 0x10200000) != 0)))))) ||
           ((uVar19 != uVar2 ||
            ((iVar16 != iVar6 ||
             ((uVar4 & 0xfffffffffffffff) < ((ulonglong)param_2 & 0xfffffffffffffff)))))))
        goto LAB_142a8308b;
        goto LAB_142a830c0;
      }
      break;
    }
  }
LAB_142a83080:
  FUN_146f31628(param_1,local_68);
LAB_142a8308b:
  local_60 = &local_68;
  local_58 = &local_80;
  FUN_146f31d52(param_1,local_4c);
LAB_142a830c0:
  FUN_146f29be6(param_1,local_80,local_68);
  pbVar20 = local_68;
LAB_142a83011:
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  goto LAB_142a8285c;
code_r0x000142a83349:
  pbVar8 = *(byte **)(pbVar9 + 0x20);
  pbVar10 = local_98;
  if ((*(uint *)(pbVar9 + 8) >> 0x1c & 1) == 0) goto LAB_142a8333a;
  local_90 = pbVar9;
  pbVar9 = (byte *)FUN_142840154(pbVar9);
  pbVar8 = local_90;
LAB_142a83367:
  if (pbVar9 == (byte *)0x0) {
    pbVar8 = *(byte **)(pbVar8 + 0x20);
    pbVar10 = local_98;
    goto LAB_142a8333a;
  }
  cVar5 = FUN_140ebe022();
  pbVar8 = local_98;
  if (cVar5 == '\0') {
LAB_142a83384:
    pbVar10 = pbVar8;
    pbVar8 = pbVar10;
    if (*(byte **)(pbVar10 + 0x20) != (byte *)0x0) goto code_r0x000142a83393;
    goto LAB_142a833ab;
  }
LAB_142a829b6:
  lVar7 = FUN_142aa2102(param_1[0x21],*(undefined4 *)(lVar18 + 0x20),*param_3);
  if (lVar7 != 0) {
    local_90 = pbVar20;
    FUN_140056680(&local_78,lVar7);
    uVar3 = *(undefined4 *)(param_3 + 1);
    iVar6 = FUN_140d25081();
    if (iVar6 != -1) {
      (**(code **)(*(longlong *)param_1[0x1f] + 0x340))((longlong *)param_1[0x1f],uVar3,&local_78,1)
      ;
    }
    iVar6 = local_70 + -1;
    if (local_70 == 0) {
      iVar6 = 0;
    }
    FUN_1446f82e2(&local_60,iVar6,local_78,1);
    local_88 = local_60;
    if (DAT_14c927740 == 0) {
      local_60 = (byte **)FUN_1449e2820;
      local_a0 = FUN_14081d0ea;
      local_a8 = FUN_14081d0ea;
      local_b0 = &local_60;
      local_b8 = &LAB_146856450;
      local_c0 = FUN_1427b121c;
      local_c8 = L"Engine";
      local_d0 = 0;
      local_d8 = 0x10000021;
      local_e0 = CONCAT44(local_e0._4_4_,8);
      local_e8 = CONCAT44(local_e8._4_4_,0x28);
      FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
    }
    local_e0 = local_e0 & 0xffffffff00000000;
    local_e8 = local_e8 & 0xffffffff00000000;
    local_68 = (byte *)FUN_140be85e0(DAT_14c927740,local_98,local_88,0);
    pbVar20 = local_90;
    bVar1 = *local_90;
    if ((local_68 == (byte *)0x0) && ((bVar1 & 1) == 0)) {
      if ((bVar1 & 4) == 0) {
        puVar15 = local_78;
        if (local_70 == 0) {
          puVar15 = &DAT_149dfb77a;
        }
        if (DAT_14c927740 == 0) {
          local_60 = (byte **)FUN_1449e2820;
          local_a0 = FUN_14081d0ea;
          local_a8 = FUN_14081d0ea;
          local_b0 = &local_60;
          local_b8 = &LAB_146856450;
          local_c0 = FUN_1427b121c;
          local_c8 = L"Engine";
          local_d0 = 0;
          local_d8 = 0x10000021;
          local_e0 = CONCAT44(local_e0._4_4_,8);
          local_e8 = CONCAT44(local_e8._4_4_,0x28);
          FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
        }
        local_d0 = 0;
        local_e0 = 0;
        local_d8 = CONCAT31(local_d8._1_3_,1);
        local_e8 = CONCAT44(local_e8._4_4_,2);
        local_68 = (byte *)FUN_1412ecd05(DAT_14c927740,local_98,puVar15,0);
        pbVar8 = local_68;
        if (local_68 != (byte *)0x0) goto LAB_142a82bcf;
      }
      else {
        if (((DAT_14c75f465 == '\x01') &&
            (((char)param_1[0x2e] == '\x02' ||
             (((char)param_1[0x2e] == '\0' && (*(char *)((longlong)param_1 + 0x171) == '\x01'))))))
           && (*(char *)((longlong)param_3 + 0xc) == '\0')) {
          if ((int)param_1[0x30] != *(int *)((longlong)param_1 + 0x1ac)) {
            uVar2 = (uint)((ulonglong)local_88 >> 0x10);
            uVar19 = (uint)local_88 & 0xffff;
            plVar12 = param_1 + 0x36;
            if ((longlong *)param_1[0x37] != (longlong *)0x0) {
              plVar12 = (longlong *)param_1[0x37];
            }
            iVar6 = *(int *)((longlong)plVar12 +
                            (ulonglong)
                            ((int)param_1[0x38] - 1U &
                            (int)((ulonglong)local_88 >> 0x20) + ((uint)local_88 << 0x10 | uVar19) +
                            (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar19 >> 4)) * 4);
            if (iVar6 != -1) {
              lVar7 = param_1[0x2f];
              iVar16 = iVar6;
              do {
                if (*(byte ***)(lVar7 + (longlong)iVar16 * 0x48) == local_88) goto LAB_142a82e40;
                iVar16 = *(int *)(lVar7 + (longlong)iVar16 * 0x48 + 0x40);
              } while (iVar16 != -1);
            }
          }
          *local_90 = bVar1 | 0x10;
          FUN_142a833de(param_1,puVar17,local_88,param_2);
          goto LAB_142a8300e;
        }
        puVar15 = local_78;
        if (local_70 == 0) {
          puVar15 = &DAT_149dfb77a;
        }
        local_e8 = 0;
        local_68 = (byte *)FUN_1402791b4(0,puVar15,0,0);
        if (local_68 != (byte *)0x0) goto LAB_142a82d30;
      }
    }
    else if (local_68 != (byte *)0x0) {
      pbVar8 = local_68;
      if ((bVar1 & 4) != 0) {
LAB_142a82d30:
        pbVar8 = local_68;
        if (DAT_14c951858 == 0) {
          local_60 = (byte **)FUN_1449e2820;
          local_a0 = FUN_14081d0ea;
          local_a8 = FUN_14081d0ea;
          local_b0 = &local_60;
          local_b8 = &LAB_1468c5283;
          local_c0 = FUN_142809da0;
          local_c8 = L"Engine";
          local_d0 = 0x400000000;
          local_d8 = 0x10000000;
          local_e0 = CONCAT44(local_e0._4_4_,8);
          local_e8 = CONCAT44(local_e8._4_4_,0x50);
          local_98 = local_68;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
          pbVar8 = local_98;
        }
        if ((*(int *)(*(longlong *)(pbVar8 + 0x10) + 0x38) < *(int *)(DAT_14c951858 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(pbVar8 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14c951858 + 0x38) * 8) != DAT_14c951858 + 0x30)) {
          *pbVar20 = *pbVar20 | 8;
          goto LAB_142a8300e;
        }
        local_98 = pbVar8;
        cVar5 = FUN_140ebe022();
        pbVar8 = local_98;
        if ((cVar5 == '\0') && (pbVar20 = local_90, (*(uint *)(local_98 + 0x2c) & 0x100010) == 0)) {
          if ((DAT_14c75f465 == '\x01') &&
             ((((char)param_1[0x2e] == '\x02' ||
               (((char)param_1[0x2e] == '\0' && (*(char *)((longlong)param_1 + 0x171) == '\x01'))))
              && (*(char *)((longlong)param_3 + 0xc) == '\0')))) {
            uVar2 = *(uint *)(local_98 + 0xc);
            if ((int)uVar2 < DAT_14c9647dc) {
              lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
            }
            else {
              lVar7 = 0;
            }
            if ((*(uint *)(lVar7 + 8) & 0x8400000) != 0) {
              FUN_142a833de(param_1,puVar17,local_88,param_2);
              pbVar8 = local_98;
              pbVar20 = local_90;
              goto LAB_142a82bcf;
            }
          }
          if ((*local_90 & 1) != 0) goto LAB_142a8300e;
          puVar15 = local_78;
          if (local_70 == 0) {
            puVar15 = &DAT_149dfb77a;
          }
          local_e8 = 0;
          local_68 = (byte *)FUN_1402791b4(0,puVar15,0,0);
          pbVar8 = local_68;
          pbVar20 = local_90;
          if (local_68 == (byte *)0x0) goto LAB_142a83002;
        }
      }
LAB_142a82bcf:
      cVar5 = (**(code **)(*(longlong *)param_1[0x1f] + 0x348))((longlong *)param_1[0x1f],pbVar8);
      if (cVar5 == '\0') goto LAB_142a8300e;
      if (local_68 != (byte *)0x0) {
        uVar2 = *(uint *)(local_68 + 0xc);
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar7 = 0;
        }
        iVar6 = *(int *)(lVar7 + 0x10);
        if (*(int *)(lVar7 + 0x10) == 0) {
          LOCK();
          iVar6 = DAT_14c964868 + 1;
          UNLOCK();
          iVar16 = DAT_14c964868 + 1;
          bVar21 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar6;
          if (bVar21) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar16);
          }
          LOCK();
          iVar6 = *(int *)(lVar7 + 0x10);
          bVar21 = iVar6 == 0;
          if (bVar21) {
            *(int *)(lVar7 + 0x10) = iVar16;
            iVar6 = 0;
          }
          UNLOCK();
          if (bVar21) {
            iVar6 = iVar16;
          }
        }
        *(ulonglong *)(lVar18 + 8) = CONCAT44(iVar6,uVar2);
        *(byte **)(lVar18 + 0x10) = local_68;
        local_80 = (ulonglong)(*(int *)(param_1[0x1e] + 0x48) + 1) << 0x3c |
                   (ulonglong)param_2 & 0xfffffffffffffff;
        if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
          uVar19 = ((uint)((ulonglong)local_68 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_68 >> 4))
                   * -0x7a143595;
          uVar19 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
          plVar11 = param_1 + 7;
          if ((longlong *)param_1[8] != (longlong *)0x0) {
            plVar11 = (longlong *)param_1[8];
          }
          iVar16 = *(int *)((longlong)plVar11 +
                           (ulonglong)((int)param_1[9] - 1U & (uVar19 >> 0x10 ^ uVar19)) * 4);
          if (iVar16 != -1) {
            do {
              puVar14 = (undefined8 *)(*param_1 + (longlong)iVar16 * 0x18);
              if ((byte *)*puVar14 == local_68) {
                if ((puVar14 + 1 != (ulonglong *)0x0 && puVar14 != (undefined8 *)0x0) &&
                   (uVar4 = puVar14[1], (((ulonglong)param_2 ^ uVar4) & 0xfffffffffffffff) != 0)) {
                  if ((int)param_1[0xb] == *(int *)((longlong)param_1 + 0x84)) goto LAB_142a83080;
                  if ((longlong *)param_1[0x12] != (longlong *)0x0) {
                    plVar12 = (longlong *)param_1[0x12];
                  }
                  iVar16 = *(int *)((longlong)plVar12 +
                                   (ulonglong)
                                   ((int)param_1[0x13] - 1U &
                                   (int)uVar4 + ((uint)(uVar4 >> 0x20) & 0xfffffff) * 0x17) * 4);
                  if (iVar16 == -1) goto LAB_142a83080;
                  goto LAB_142a82f5f;
                }
                break;
              }
              iVar16 = *(int *)(puVar14 + 2);
            } while (iVar16 != -1);
          }
        }
        goto LAB_142a8308b;
      }
    }
LAB_142a83002:
    if ((*pbVar20 & 2) == 0) {
      *pbVar20 = *pbVar20 | 8;
    }
    goto LAB_142a8300e;
  }
LAB_142a82859:
  pbVar20 = (byte *)0x0;
LAB_142a8285c:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return pbVar20;
}



// FUNCTION 142a833de FUN_142a833de body=717 status=ok
// SIG undefined FUN_142a833de(void)

void FUN_142a833de(longlong param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 *local_98;
  undefined4 local_90;
  longlong local_88;
  longlong *local_80;
  longlong **local_78;
  undefined1 local_6c [4];
  longlong *local_68 [4];
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_38 = *(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 0x40);
  local_48 = 0;
  local_40 = 0x400000001;
  *(byte *)(param_2 + 0x28) = *(byte *)(param_2 + 0x28) | 0x10;
  local_88 = param_3;
  local_68[0] = param_4;
  if (*(int *)(param_1 + 0x180) != *(int *)(param_1 + 0x1ac)) {
    uVar2 = (uint)((ulonglong)param_3 >> 0x10);
    uVar7 = (uint)param_3 & 0xffff;
    lVar9 = param_1 + 0x1b0;
    if (*(longlong *)(param_1 + 0x1b8) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x1b8);
    }
    iVar5 = *(int *)(lVar9 + (ulonglong)
                             (*(int *)(param_1 + 0x1c0) - 1U &
                             (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar7) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar5 * 0x48);
        if (*plVar1 == param_3) {
          if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
            local_80 = param_4;
            FUN_146f315a2(plVar1 + 1);
            goto LAB_142a8360f;
          }
          break;
        }
        iVar5 = (int)plVar1[8];
      } while (iVar5 != -1);
    }
  }
  local_80 = &local_88;
  local_78 = local_68;
  FUN_146f321dc((longlong *)(param_1 + 0x178),local_6c);
  lVar9 = *(longlong *)(param_1 + 0xf0);
  local_98 = (undefined8 *)0x0;
  local_90 = 0;
  FUN_1446efa72(&local_98,0,3,0x10);
  puVar3 = local_98;
  local_90 = 3;
  *local_98 = &PTR_LAB_149e665f0;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_98[2] = lVar6;
  *local_98 = &PTR_FUN_149f9a820;
  local_98[3] = 0;
  iVar5 = 0;
  if (lVar9 != 0) {
    uVar2 = *(uint *)(lVar9 + 0xc);
    *(uint *)(local_98 + 3) = uVar2;
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
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
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
  puVar3[4] = param_1;
  FUN_1400021e4(&local_88,&local_80);
  local_a8 = 0xffffffff;
  FUN_1427d6730(&local_80,&local_98,0,0);
  if (local_80 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
LAB_142a8360f:
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a836ac FUN_142a836ac body=1090 status=ok
// SIG undefined FUN_142a836ac(void)

int FUN_142a836ac(longlong param_1,longlong *param_2,undefined8 *param_3,longlong *param_4)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  code *local_a0;
  undefined1 *local_98;
  code **local_90;
  code *local_88;
  code *local_80;
  code *local_78;
  int local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined2 *local_58;
  int local_50;
  byte local_41;
  code *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_41 = 0;
  if ((*(uint *)(param_2 + 1) & 0xfffff) == 0) {
    lVar3 = FUN_142a82794(param_1,*param_2,param_3,&local_41);
LAB_142a83815:
    iVar2 = 0;
    if (lVar3 != 0) goto LAB_142a83843;
  }
  else {
    lVar3 = FUN_142aa2102(*(undefined8 *)(param_1 + 0x108),*(uint *)(param_2 + 1),*param_3);
    if (lVar3 != 0) {
      FUN_140056680(&local_58,lVar3);
      uVar1 = *(undefined4 *)(param_3 + 1);
      iVar2 = FUN_140d25081();
      if (iVar2 != -1) {
        (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x340))
                  (*(longlong **)(param_1 + 0xf8),uVar1,&local_58,1);
      }
      if (*param_2 == 0) {
        puVar5 = local_58;
        if (local_50 == 0) {
          puVar5 = &DAT_149dfb77a;
        }
        if (DAT_14c927740 == 0) {
          local_90 = &local_40;
          local_40 = FUN_1449e2820;
          local_80 = FUN_14081d0ea;
          local_88 = FUN_14081d0ea;
          local_98 = &LAB_146856450;
          local_a0 = FUN_1427b121c;
          local_a8 = L"Engine";
          local_b0 = 0;
          local_b8 = 0x10000021;
          uStack_c0 = CONCAT44(uStack_c0._4_4_,8);
          local_c8 = CONCAT44(local_c8._4_4_,0x28);
          FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
        }
        lVar3 = FUN_140277b32(DAT_14c927740,0,puVar5,0);
        if (lVar3 == 0) {
          FUN_14064b67c(&local_78,&local_58);
          local_38 = local_70 + -1;
          if (local_70 == 0) {
            local_38 = 0;
          }
          local_68 = 0;
          local_60 = 0;
          local_40 = local_78;
          FUN_1414176ea(&local_40);
          if (local_78 != (code *)0x0) {
            FUN_1400020a8();
          }
          local_c8 = 0;
          uStack_c0 = 0;
          lVar3 = 0;
          lVar4 = FUN_14283dc80(0,&local_68,0,0);
          if (lVar4 != 0) {
            puVar5 = local_58;
            if (local_50 == 0) {
              puVar5 = &DAT_149dfb77a;
            }
            if (DAT_14c927740 == 0) {
              local_40 = FUN_1449e2820;
              local_80 = FUN_14081d0ea;
              local_88 = FUN_14081d0ea;
              local_98 = &LAB_146856450;
              local_a0 = FUN_1427b121c;
              local_a8 = L"Engine";
              local_b0 = 0;
              local_b8 = 0x10000021;
              uStack_c0 = CONCAT44(uStack_c0._4_4_,8);
              local_c8 = CONCAT44(local_c8._4_4_,0x28);
              local_90 = &local_40;
              FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
            }
            lVar3 = 0;
            goto LAB_142a837c7;
          }
        }
      }
      else {
        lVar3 = FUN_142a82794(param_1,*param_2,param_3,&local_78);
        if (lVar3 == 0) {
          lVar3 = 0;
        }
        else {
          puVar5 = local_58;
          if (local_50 == 0) {
            puVar5 = &DAT_149dfb77a;
          }
          if (DAT_14c927740 == 0) {
            local_90 = &local_40;
            local_40 = FUN_1449e2820;
            local_80 = FUN_14081d0ea;
            local_88 = FUN_14081d0ea;
            local_98 = &LAB_146856450;
            local_a0 = FUN_1427b121c;
            local_a8 = L"Engine";
            local_b0 = 0;
            local_b8 = 0x10000021;
            uStack_c0 = CONCAT44(uStack_c0._4_4_,8);
            local_c8 = CONCAT44(local_c8._4_4_,0x28);
            FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
          }
LAB_142a837c7:
          lVar3 = FUN_140277b32(DAT_14c927740,lVar3,puVar5,0);
        }
      }
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_142a83815;
    }
  }
  if ((*param_2 == 0) && ((*(uint *)(param_2 + 1) & 0xfffff) == 0)) {
    lVar3 = 0;
    iVar2 = 0;
  }
  else {
    iVar2 = (uint)local_41 * 2 + 1;
    lVar3 = 0;
  }
LAB_142a83843:
  *param_4 = lVar3;
  if ((local_30 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar2;
}



// FUNCTION 142a83af0 FUN_142a83af0 body=300 status=ok
// SIG undefined FUN_142a83af0(void)

ulonglong *
FUN_142a83af0(longlong param_1,ulonglong *param_2,undefined8 *param_3,undefined8 param_4)

{
  byte bVar1;
  ulonglong uVar2;
  undefined2 *puVar3;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 auStack_80 [2];
  undefined8 *local_78;
  undefined1 local_70;
  ulonglong local_68;
  undefined1 local_5c [4];
  ulonglong *local_58;
  undefined8 *puStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  bVar1 = *(byte *)(param_1 + 0x118);
  *param_2 = 0;
  param_2[1] = 0;
  if ((bVar1 & 1) != 0) {
    FUN_146f27c60(*(undefined8 *)(param_1 + 0x110),&local_68,1);
    uVar2 = 0;
    if (local_68 != 0) {
      auStack_80[0] = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_8c = 0;
      uStack_88 = (undefined4)local_68;
      uStack_84 = (undefined4)(local_68 >> 0x20);
      if (*(int *)(param_3 + 1) == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      else {
        puVar3 = (undefined2 *)*param_3;
        uVar2 = (ulonglong)(*(int *)(param_3 + 1) - 1);
      }
      FUN_146f4a3aa(*(undefined8 *)(param_1 + 0x108),auStack_80,puVar3,uVar2);
      local_58 = (ulonglong *)0x0;
      puStack_50 = (undefined8 *)0x0;
      FUN_142a81ae8(param_1,param_4,&local_58);
      puStack_50 = &local_98;
      local_78 = local_58;
      local_70 = 3;
      local_58 = &local_68;
      FUN_146f318b6(param_1 + 0x50,local_5c,&local_58);
      uVar2 = local_68;
    }
    *param_2 = uVar2;
    param_2[1] = 0;
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 142a83c1e FUN_142a83c1e body=546 status=ok
// SIG undefined FUN_142a83c1e(void)

void FUN_142a83c1e(longlong param_1,longlong param_2,ulonglong *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_3;
  if ((uVar2 != 0) && (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84))) {
    lVar7 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x90);
    }
    iVar6 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(param_1 + 0x98) - 1U &
                             (int)uVar2 + ((uint)(uVar2 >> 0x20) & 0xfffffff) * 0x17) * 4);
    if (iVar6 != -1) {
      uVar3 = *(undefined8 *)(param_2 + 0xe0);
      do {
        lVar7 = *(longlong *)(param_1 + 0x50) + (longlong)iVar6 * 0x40;
        if (((*(ulonglong *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar6 * 0x40) ^ uVar2) &
            0xfffffffffffffff) == 0) {
          if ((lVar7 + 8U & 0xfffffffffffffff7) != 0) {
            FUN_146f5b979(param_2,uVar2);
            uVar1 = *(uint *)(lVar7 + 0x20);
            lVar5 = *(longlong *)(param_2 + 0xf8);
            if (((uVar1 & 0xfffff) == 0) || ((*(byte *)(param_1 + 0x118) & 1) == 0)) {
              bVar4 = 0;
            }
            else {
              bVar4 = 1;
              if (lVar5 != 0) {
                bVar4 = FUN_146f29cac(lVar5,uVar2);
                bVar4 = bVar4 ^ 1;
              }
            }
            local_50 = CONCAT71(local_50._1_7_,bVar4);
            FUN_146f5435e(uVar3,bVar4 != 0,1);
            if ((char)local_50 != '\0') {
              FUN_146f5435e(uVar3,*(byte *)(lVar7 + 0x30) & 1,1);
              bVar8 = (uVar1 & 0xfffff) != 0;
              local_50 = CONCAT71(local_50._1_7_,bVar8);
              FUN_146f5435e(uVar3,bVar8,1);
              if ((char)local_50 != '\0') {
                FUN_146f2929e(param_2,*(undefined4 *)(lVar7 + 0x20),0);
                FUN_146f294be(*(undefined8 *)(param_1 + 0x100),param_2,lVar5,
                              *(undefined4 *)(lVar7 + 0x20));
                local_50 = *(undefined8 *)(lVar7 + 0x28);
                local_48 = 0;
                FUN_142a83c1e(param_1,param_2);
              }
              if (lVar5 != 0) {
                lVar7 = *(longlong *)(lVar5 + 8);
                iVar6 = *(int *)(lVar7 + 0x108);
                *(uint *)(lVar7 + 0x108) = iVar6 + 1U;
                if (*(uint *)(lVar7 + 0x10c) < iVar6 + 1U) {
                  FUN_146f1b220(lVar7,iVar6);
                }
                lVar5 = *(longlong *)(lVar7 + 0x100);
                if (*(longlong *)(lVar7 + 0x100) == 0) {
                  lVar5 = lVar7;
                }
                *(ulonglong *)(lVar5 + (longlong)iVar6 * 8) = uVar2;
              }
            }
            if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0();
            }
            return;
          }
          break;
        }
        iVar6 = *(int *)(lVar7 + 0x38);
      } while (iVar6 != -1);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
}



// FUNCTION 142a83e5a FUN_142a83e5a body=733 status=ok
// SIG undefined FUN_142a83e5a(void)

void FUN_142a83e5a(longlong param_1,longlong param_2,ulonglong *param_3,uint param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  byte bVar8;
  undefined4 uVar9;
  byte bVar10;
  undefined1 auStack_d8 [44];
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  undefined4 local_90;
  longlong local_88;
  byte local_80;
  longlong local_78 [3];
  longlong *local_60;
  undefined8 *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar2 = *(undefined8 **)(param_2 + 0xd8);
  if (0x10 < param_4) {
    if (*(int *)((longlong)puVar2 + 0x14) == 0) {
      if (*(int *)(puVar2 + 1) == -1) {
        *(undefined4 *)((longlong)puVar2 + 0x14) = 0;
        *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
        *(undefined4 *)(puVar2 + 2) = *(undefined4 *)*puVar2;
      }
      else {
        *(undefined4 *)((longlong)puVar2 + 0x14) = 1;
      }
    }
    *param_3 = 0;
    param_3[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_d8);
  }
  FUN_146f5b9f7(local_78 + 2);
  lVar7 = local_78[2];
  if ((local_78[2] != 0) &&
     (uVar4 = FUN_146f546d2(puVar2,1), *(int *)((longlong)puVar2 + 0x14) == 0)) {
    local_78[0] = 0;
    local_78[1] = 0;
    if ((uVar4 & 1) == 0) {
      bVar10 = ~(byte)lVar7 & 1;
      uVar9 = 0;
    }
    else {
      bVar10 = FUN_146f546d2(puVar2,1);
      if (*(int *)((longlong)puVar2 + 0x14) != 0) goto LAB_142a83f04;
      bVar10 = bVar10 & 1;
      uVar5 = FUN_146f546d2(puVar2,1);
      if ((uVar5 & 1) == 0) {
        uVar9 = 0;
      }
      else {
        FUN_146f2921e(&local_a8,param_2,*(undefined4 *)(*(longlong *)(param_1 + 0x108) + 0x20));
        local_ac = (undefined4)local_a8;
        FUN_146f2962e(*(undefined8 *)(param_1 + 0x100),param_2);
        FUN_142a83e5a(param_1,param_2,local_78,param_4 + 1);
        uVar9 = local_ac;
      }
    }
    uVar3 = DAT_14c99c008;
    if (*(int *)((longlong)puVar2 + 0x14) == 0) {
      if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
        lVar7 = param_1 + 0x88;
        if (*(longlong *)(param_1 + 0x90) != 0) {
          lVar7 = *(longlong *)(param_1 + 0x90);
        }
        iVar6 = *(int *)(lVar7 + (ulonglong)
                                 (*(int *)(param_1 + 0x98) - 1U &
                                 (int)local_78[2] +
                                 ((uint)((ulonglong)local_78[2] >> 0x20) & 0xfffffff) * 0x17) * 4);
        if (iVar6 != -1) {
          lVar7 = *(longlong *)(param_1 + 0x50);
          do {
            lVar1 = lVar7 + (longlong)iVar6 * 0x40;
            if (((*(ulonglong *)(lVar7 + (longlong)iVar6 * 0x40) ^ local_78[2]) & 0xfffffffffffffff)
                == 0) {
              if ((lVar1 + 8U & 0xfffffffffffffff7) != 0) goto LAB_142a84050;
              break;
            }
            iVar6 = *(int *)(lVar1 + 0x38);
          } while (iVar6 != -1);
        }
      }
      if (((uVar4 & 1) == 0) && ((local_78[2] == 0 || ((local_78[2] & 1U) != 0)))) {
        FUN_146f5b89e(param_2);
        if (*(longlong *)(param_2 + 8) == 0) {
          *(undefined8 *)(param_2 + 8) = uVar3;
        }
      }
      else {
        if ((*(byte *)(param_1 + 0x118) & 1) == 0) {
          local_58 = &local_a8;
          local_a8 = 0;
          uStack_a0 = 0;
          local_98 = local_78[2];
          bVar8 = (local_78[0] == 0) << 2;
          if ((local_78[2] & 1U) == 0) {
            bVar8 = 0;
          }
          local_88 = local_78[0];
          local_80 = bVar10 * '\x02' | bVar8 | bVar10;
          local_90 = uVar9;
          local_60 = local_78 + 2;
          FUN_146f318b6((longlong *)(param_1 + 0x50),local_4c);
        }
LAB_142a84050:
        *param_3 = local_78[2];
        param_3[1] = 0;
      }
      goto LAB_142a83f0a;
    }
  }
LAB_142a83f04:
  *param_3 = 0;
  param_3[1] = 0;
LAB_142a83f0a:
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a84138 FUN_142a84138 body=227 status=ok
// SIG undefined FUN_142a84138(void)

void FUN_142a84138(longlong param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_146f546d2(*(undefined8 *)(param_2 + 0xd8),1);
  if ((uVar1 & 1) == 0) {
    if ((*(byte *)(*(longlong *)(param_2 + 0xf0) + 0x28) & 2) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
    }
    local_48 = 0;
    uStack_40 = 0;
    FUN_142a83e5a(param_1,param_2,&local_48,0);
    *(undefined4 *)param_3 = (undefined4)local_48;
    *(undefined4 *)((longlong)param_3 + 4) = local_48._4_4_;
    *(undefined4 *)(param_3 + 1) = (undefined4)uStack_40;
    *(undefined4 *)((longlong)param_3 + 0xc) = uStack_40._4_4_;
  }
  else {
    FUN_146f5b9f7(&local_48,param_2);
    FUN_146f2921e(&local_34,param_2,*(undefined4 *)(*(longlong *)(param_1 + 0x108) + 0x20));
    FUN_146f2962e(*(undefined8 *)(param_1 + 0x100),param_2,local_34);
    *param_3 = local_48;
    *(undefined4 *)(param_3 + 1) = local_34;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a84236 FUN_142a84236 body=347 status=ok
// SIG undefined FUN_142a84236(void)

void FUN_142a84236(longlong param_1,longlong param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(param_2 + 0xd8);
  uVar1 = FUN_146f546d2(lVar3,1);
  if ((uVar1 & 1) == 0) {
    FUN_146f5b9f7(&local_30,param_2);
    if ((*(int *)(lVar3 + 0x14) == 0) && (local_30 != 0)) {
      if ((local_30 & 1) == 0) {
LAB_142a842f0:
        *param_3 = local_30;
        param_3[1] = 0;
        goto LAB_142a842c1;
      }
      if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
        lVar3 = param_1 + 0x88;
        if (*(longlong *)(param_1 + 0x90) != 0) {
          lVar3 = *(longlong *)(param_1 + 0x90);
        }
        iVar2 = *(int *)(lVar3 + (ulonglong)
                                 (*(int *)(param_1 + 0x98) - 1U &
                                 (int)local_30 + ((uint)(local_30 >> 0x20) & 0xfffffff) * 0x17) * 4)
        ;
        if (iVar2 != -1) {
          do {
            lVar3 = *(longlong *)(param_1 + 0x50) + (longlong)iVar2 * 0x40;
            if (((*(ulonglong *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar2 * 0x40) ^ local_30)
                & 0xfffffffffffffff) == 0) {
              if ((lVar3 + 8U & 0xfffffffffffffff7) != 0) goto LAB_142a842f0;
              break;
            }
            iVar2 = *(int *)(lVar3 + 0x38);
          } while (iVar2 != -1);
        }
      }
    }
    *param_3 = 0;
    param_3[1] = 0;
  }
  else {
    FUN_146f5b9f7(&local_30,param_2);
    FUN_146f2921e(&local_34,param_2,*(undefined4 *)(*(longlong *)(param_1 + 0x108) + 0x20));
    *param_3 = local_30;
    *(undefined4 *)(param_3 + 1) = local_34;
  }
LAB_142a842c1:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a84392 FUN_142a84392 body=302 status=ok
// SIG undefined FUN_142a84392(void)

void FUN_142a84392(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [47];
  char local_39;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_39 = (*(uint *)(param_3 + 1) & 0xfffff) != 0;
  FUN_146f5435e(*(undefined8 *)(param_2 + 0xe0),local_39,1);
  if (local_39 != '\0') {
    FUN_146f5b979(param_2,*param_3);
    FUN_146f2929e(param_2,*(undefined4 *)(param_3 + 1),0);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  if ((*(byte *)(*(longlong *)(param_2 + 0xf0) + 0x28) & 2) == 0) {
    if ((*(longlong *)(param_2 + 0xf8) != 0) &&
       (((*(uint *)(param_3 + 1) & 0xfffff) != 0 ||
        (((*(byte *)(param_1 + 0x118) & 1) != 0 && ((*(byte *)((longlong)param_3 + 0xc) & 1) != 0)))
        ))) {
      FUN_146f2b108(*(longlong *)(*(longlong *)(param_2 + 0xf8) + 8) + 0x1a0,param_3);
    }
    local_38 = *(undefined4 *)param_3;
    uStack_34 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_30 = *(undefined4 *)(param_3 + 1);
    uStack_2c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_142a844e6(param_1,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    FUN_142a83c1e(param_1,param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a844e6 FUN_142a844e6 body=270 status=ok
// SIG undefined FUN_142a844e6(void)

void FUN_142a844e6(longlong param_1,longlong param_2,ulonglong *param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  
  bVar4 = (param_3[1] & 0xfffff) != 0;
  uVar3 = *param_3;
  FUN_146f5435e(*(undefined8 *)(param_2 + 0xe0),bVar4,1);
  if (bVar4) {
    FUN_146f5b979(param_2,*param_3);
    FUN_146f2929e(param_2,(int)param_3[1],0);
    return;
  }
  if ((uVar3 != 0) && (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84))) {
    lVar2 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x90);
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)
                             (*(int *)(param_1 + 0x98) - 1U &
                             (int)uVar3 + ((uint)(uVar3 >> 0x20) & 0xfffffff) * 0x17) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x50) + (longlong)iVar1 * 0x40;
        if (((*(ulonglong *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar1 * 0x40) ^ uVar3) &
            0xfffffffffffffff) == 0) {
          if ((lVar2 + 8U & 0xfffffffffffffff7) != 0) goto LAB_142a845de;
          break;
        }
        iVar1 = *(int *)(lVar2 + 0x38);
      } while (iVar1 != -1);
    }
  }
  uVar3 = 0;
LAB_142a845de:
  FUN_146f5b979(param_2,uVar3);
  return;
}



// FUNCTION 142a845f4 FUN_142a845f4 body=1279 status=ok
// SIG undefined FUN_142a845f4(void)

undefined8 FUN_142a845f4(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  undefined8 uVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong *puVar18;
  longlong lVar19;
  undefined1 auStack_c8 [39];
  undefined1 local_a1;
  longlong local_a0;
  uint local_94;
  int local_90;
  int local_8c;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  ulonglong local_70;
  longlong local_68;
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar3 = *(longlong *)(param_2 + 0xf8);
  uVar12 = 2;
  if (lVar3 == 0) goto LAB_142a84650;
  lVar19 = *(longlong *)(param_2 + 0xe0);
  lVar17 = *(longlong *)(lVar3 + 8);
  lVar9 = (longlong)*(int *)(lVar17 + 0x3a8);
  if ((lVar9 < 1) && (*(int *)(lVar17 + 0x438) < 1)) goto LAB_142a84650;
  local_8c = *(int *)(lVar19 + 0xc);
  puVar13 = (ulonglong *)(lVar17 + 0x1a0);
  if (*(ulonglong **)(lVar17 + 0x3a0) != (ulonglong *)0x0) {
    puVar13 = *(ulonglong **)(lVar17 + 0x3a0);
  }
  local_90 = *(int *)(lVar19 + 0x10);
  local_60 = *(longlong *)(param_2 + 0xf0);
  local_94 = 0;
  if (local_60 != 0) {
    local_94 = *(uint *)(local_60 + 0x28) & 2;
    *(uint *)(local_60 + 0x28) = *(uint *)(local_60 + 0x28) | 2;
    lVar17 = *(longlong *)(lVar3 + 8);
  }
  lVar16 = lVar17 + 0x3b0;
  if (*(longlong *)(lVar17 + 0x430) != 0) {
    lVar16 = *(longlong *)(lVar17 + 0x430);
  }
  iVar8 = *(int *)(lVar17 + 0x438);
  local_a0 = lVar19;
  local_78 = lVar9;
  if ((longlong)iVar8 != 0) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x100) + 0x28);
    lVar19 = 0;
    local_68 = param_2;
    do {
      if (((iVar2 == 1) || ((*(uint *)(lVar16 + lVar19) & 0x800000) == 0)) &&
         (cVar6 = FUN_146f290ea(lVar3), cVar6 == '\0')) {
        local_a1 = 1;
        FUN_146f5435e(local_a0,1,1);
        FUN_146f2929e(param_2,*(undefined4 *)(lVar16 + lVar19),1);
        uVar7 = *(uint *)(lVar16 + lVar19);
        uVar14 = (ulonglong)uVar7;
        if ((uVar7 & 0xfffff) != 0) {
          uVar15 = (ulonglong)(uVar7 >> 0x10 & 0x70);
          plVar5 = *(longlong **)((*(longlong **)(param_1 + 0x100))[3] + 8 + uVar15);
          (**(code **)(*plVar5 + 0x10))
                    (plVar5,param_2,
                     *(undefined4 *)
                      (*(longlong *)(**(longlong **)(param_1 + 0x100) + uVar15) +
                      (uVar14 & 0xfffff) * 4));
          uVar14 = (ulonglong)*(uint *)(lVar16 + lVar19);
        }
        lVar9 = *(longlong *)(lVar3 + 8);
        lVar17 = lVar9 + 0x110;
        lVar10 = (longlong)*(int *)(lVar9 + 0x198);
        uVar7 = *(int *)(lVar9 + 0x198) + 1;
        *(uint *)(lVar9 + 0x198) = uVar7;
        if (*(uint *)(lVar9 + 0x19c) < uVar7) {
          local_88 = lVar10;
          local_80 = lVar17;
          local_70 = uVar14;
          FUN_146f1af62(lVar17,lVar10);
          lVar17 = local_80;
          lVar10 = local_88;
          uVar14 = local_70;
        }
        if (*(longlong *)(lVar9 + 400) != 0) {
          lVar17 = *(longlong *)(lVar9 + 400);
        }
        *(int *)(lVar17 + lVar10 * 4) = (int)uVar14;
        param_2 = local_68;
      }
      lVar19 = lVar19 + 4;
    } while ((longlong)iVar8 * 4 != lVar19);
  }
  local_a1 = 0;
  FUN_146f5435e(local_a0,0,1);
  lVar19 = local_78;
  lVar17 = local_78 * 0x10;
  if ((int)local_78 != 0) {
    lVar9 = 0;
    do {
      uVar12 = *(undefined8 *)((longlong)puVar13 + lVar9);
      if ((((*(uint *)((longlong)puVar13 + lVar9 + 8) & 0xfffff) != 0) &&
          (cVar6 = FUN_146f290ea(lVar3), cVar6 == '\0')) ||
         (((*(byte *)(param_1 + 0x118) & 1) != 0 &&
          (((*(byte *)((longlong)puVar13 + lVar9 + 0xc) & 1) != 0 &&
           (cVar6 = FUN_146f29cac(lVar3,uVar12), cVar6 == '\0')))))) {
        puVar1 = (undefined4 *)(lVar9 + (longlong)puVar13);
        local_a1 = 1;
        FUN_146f5435e(local_a0,1,1);
        local_58 = *puVar1;
        uStack_54 = puVar1[1];
        uStack_50 = puVar1[2];
        uStack_4c = puVar1[3];
        FUN_142a84392(param_1,param_2,&local_58);
      }
      lVar9 = lVar9 + 0x10;
    } while (lVar17 != lVar9);
  }
  local_a1 = 0;
  FUN_146f5435e(local_a0,0,1);
  if (local_60 != 0) {
    *(uint *)(local_60 + 0x28) = *(uint *)(local_60 + 0x28) & 0xfffffffd | local_94;
  }
  uVar4 = *(undefined8 *)(param_2 + 0xe0);
  if (((*(byte *)(param_1 + 0x118) & 1) != 0) && (DAT_14c75f465 == '\x01')) {
    if (*(char *)(param_1 + 0x170) == '\x02') {
      cVar6 = '\x01';
    }
    else {
      if (*(char *)(param_1 + 0x170) != '\0') goto LAB_142a84a6b;
      cVar6 = *(char *)(param_1 + 0x171);
    }
    if ((((int)local_78 != 0) && (*(longlong *)(param_2 + 0xf8) != 0)) && (cVar6 != '\0')) {
      puVar18 = puVar13 + lVar19 * 2;
      do {
        if (((*(byte *)((longlong)puVar13 + 0xc) & 1) != 0) &&
           (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84))) {
          uVar14 = *puVar13;
          lVar19 = *(longlong *)(param_1 + 0x90);
          if (*(longlong *)(param_1 + 0x90) == 0) {
            lVar19 = param_1 + 0x88;
          }
          iVar8 = *(int *)(lVar19 + (ulonglong)
                                    (*(int *)(param_1 + 0x98) - 1U &
                                    (int)uVar14 + ((uint)(uVar14 >> 0x20) & 0xfffffff) * 0x17) * 4);
          if (iVar8 != -1) {
            do {
              lVar19 = *(longlong *)(param_1 + 0x50) + (longlong)iVar8 * 0x40;
              if (((*(ulonglong *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar8 * 0x40) ^ uVar14)
                  & 0xfffffffffffffff) == 0) {
                if (((lVar19 + 8U & 0xfffffffffffffff7) != 0) &&
                   ((*(byte *)(lVar19 + 0x30) & 1) == 0)) {
                  local_a1 = 1;
                  FUN_146f5435e(uVar4,1,1);
                  FUN_146f5b979(param_2,uVar14);
                }
                break;
              }
              iVar8 = *(int *)(lVar19 + 0x38);
            } while (iVar8 != -1);
          }
        }
        puVar13 = puVar13 + 2;
      } while (puVar13 != puVar18);
    }
  }
LAB_142a84a6b:
  iVar2 = local_8c;
  iVar8 = local_90;
  iVar11 = local_90 - local_8c;
  local_a1 = 0;
  uVar12 = 1;
  FUN_146f5435e(uVar4,0,1);
  FUN_146f29d94(lVar3);
  lVar3 = local_a0;
  if (*(int *)(local_a0 + 0x18) == 0) {
    uVar12 = 0;
    if (2 < (uint)((iVar2 + *(int *)(local_a0 + 0x10)) - (iVar8 + *(int *)(local_a0 + 0xc))))
    goto LAB_142a84650;
    FUN_146f5b2fa(local_a0,iVar11);
    uVar12 = 2;
    if (*(int *)(lVar3 + 0x18) == 0) goto LAB_142a84650;
  }
  FUN_146f5b2fa(lVar3,iVar11);
LAB_142a84650:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12;
}



// FUNCTION 142a84af4 FUN_142a84af4 body=699 status=ok
// SIG undefined FUN_142a84af4(void)

undefined8 FUN_142a84af4(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar5 = *(undefined8 *)(param_2 + 0xd8);
  uVar4 = FUN_146f546d2(uVar5,1);
  lVar2 = *(longlong *)(param_2 + 0xf0);
  uVar7 = 0;
  if (lVar2 != 0) {
    uVar7 = *(uint *)(lVar2 + 0x28) & 2;
    *(uint *)(lVar2 + 0x28) = *(uint *)(lVar2 + 0x28) | 2;
  }
  if (((uVar4 & 1) != 0) && (*(longlong *)(param_2 + 8) == 0)) {
    while (((*(longlong *)(param_2 + 0xd8) == 0 ||
            (*(int *)(*(longlong *)(param_2 + 0xd8) + 0x14) == 0)) &&
           ((*(longlong *)(param_2 + 0xe0) == 0 ||
            (*(int *)(*(longlong *)(param_2 + 0xe0) + 0x18) == 0))))) {
      FUN_146f2921e(&local_50,param_2,0xffffffff);
      FUN_142a81694(*(undefined8 *)(param_1 + 0x100),param_2,local_50,*(undefined8 *)(lVar2 + 0x10))
      ;
      uVar4 = FUN_146f546d2(uVar5,1);
      if (((uVar4 & 1) == 0) || (*(longlong *)(param_2 + 8) != 0)) break;
    }
  }
  if (lVar2 != 0) {
    *(uint *)(lVar2 + 0x28) = *(uint *)(lVar2 + 0x28) & 0xfffffffd | uVar7;
  }
  bVar3 = FUN_146f546d2(uVar5,1);
  lVar2 = *(longlong *)(param_2 + 0xf0);
  if (lVar2 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(uint *)(lVar2 + 0x28) & 2;
    *(uint *)(lVar2 + 0x28) = *(uint *)(lVar2 + 0x28) | 2;
  }
  lVar6 = *(longlong *)(param_2 + 8);
  if ((lVar6 == 0 & bVar3) == 1) {
    while (((*(longlong *)(param_2 + 0xd8) == 0 ||
            (*(int *)(*(longlong *)(param_2 + 0xd8) + 0x14) == 0)) &&
           ((*(longlong *)(param_2 + 0xe0) == 0 ||
            (*(int *)(*(longlong *)(param_2 + 0xe0) + 0x18) == 0))))) {
      FUN_142a84138(param_1,param_2,&local_50);
      uVar4 = FUN_146f546d2(uVar5,1);
      lVar6 = *(longlong *)(param_2 + 8);
      if (((uVar4 & 1) == 0) || (lVar6 != 0)) goto LAB_142a84c6d;
    }
    lVar6 = 0;
  }
LAB_142a84c6d:
  if (lVar2 != 0) {
    *(uint *)(lVar2 + 0x28) = *(uint *)(lVar2 + 0x28) & 0xfffffffd | uVar7;
    lVar6 = *(longlong *)(param_2 + 8);
  }
  if (lVar6 == 0) {
    lVar2 = *(longlong *)(param_2 + 0xd8);
    if (((lVar2 == 0) || (*(int *)(lVar2 + 0x14) == 0)) &&
       ((*(longlong *)(param_2 + 0xe0) == 0 || (*(int *)(*(longlong *)(param_2 + 0xe0) + 0x18) == 0)
        ))) {
      bVar3 = FUN_146f546d2(lVar2,1);
      lVar6 = *(longlong *)(param_2 + 8);
      if ((lVar6 == 0 & bVar3) == 1) {
        do {
          if (((*(longlong *)(param_2 + 0xd8) != 0) &&
              (*(int *)(*(longlong *)(param_2 + 0xd8) + 0x14) != 0)) ||
             ((*(longlong *)(param_2 + 0xe0) != 0 &&
              (*(int *)(*(longlong *)(param_2 + 0xe0) + 0x18) != 0)))) goto LAB_142a84cd6;
          FUN_146f5b9f7(&local_50,param_2);
          uVar4 = FUN_146f546d2(lVar2,1);
          if (param_3 != (longlong *)0x0) {
            iVar1 = (int)param_3[1];
            *(uint *)(param_3 + 1) = iVar1 + 1U;
            if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
              FUN_146f2ac26(param_3,iVar1);
            }
            *(ulonglong *)(*param_3 + (longlong)iVar1 * 8) = CONCAT44(uStack_4c,local_50);
          }
          lVar6 = *(longlong *)(param_2 + 8);
        } while (((uVar4 & 1) != 0) && (lVar6 == 0));
      }
      if (lVar6 != 0) goto LAB_142a84c8a;
    }
LAB_142a84cd6:
    if (((*(longlong *)(param_2 + 0xd8) == 0) ||
        (*(int *)(*(longlong *)(param_2 + 0xd8) + 0x14) == 0)) &&
       ((lVar2 = *(longlong *)(param_2 + 0xe0), lVar2 == 0 || (*(int *)(lVar2 + 0x18) == 0)))) {
      uVar5 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
      goto LAB_142a84c8c;
    }
  }
LAB_142a84c8a:
  uVar5 = 0;
LAB_142a84c8c:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 142a84db0 FUN_142a84db0 body=545 status=ok
// SIG undefined FUN_142a84db0(void)

void FUN_142a84db0(longlong param_1,longlong *param_2,longlong param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  byte bVar8;
  longlong *plVar9;
  ulonglong *puVar10;
  
  if (*(int *)(param_1 + 0x180) != *(int *)(param_1 + 0x1ac)) {
    lVar7 = *param_2;
    uVar2 = (uint)((ulonglong)lVar7 >> 0x10);
    uVar6 = (uint)lVar7 & 0xffff;
    lVar5 = param_1 + 0x1b0;
    if (*(longlong *)(param_1 + 0x1b8) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x1b8);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x1c0) - 1U &
                             (int)((ulonglong)lVar7 >> 0x20) + ((uint)lVar7 << 0x10 | uVar6) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        plVar9 = (longlong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar4 * 0x48);
        if (*plVar9 == lVar7) {
          if ((ulonglong *)(plVar9 + 1) == (ulonglong *)0x0 || plVar9 == (longlong *)0x0) {
            return;
          }
          puVar10 = (ulonglong *)(plVar9 + 1);
          if ((ulonglong *)plVar9[5] != (ulonglong *)0x0) {
            puVar10 = (ulonglong *)plVar9[5];
          }
          if ((longlong)(int)plVar9[6] != 0) {
            puVar1 = puVar10 + (int)plVar9[6];
            do {
              if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
                uVar3 = *puVar10;
                lVar7 = *(longlong *)(param_1 + 0x90);
                if (*(longlong *)(param_1 + 0x90) == 0) {
                  lVar7 = param_1 + 0x88;
                }
                iVar4 = *(int *)(lVar7 + (ulonglong)
                                         (*(int *)(param_1 + 0x98) - 1U &
                                         (int)uVar3 + ((uint)(uVar3 >> 0x20) & 0xfffffff) * 0x17) *
                                         4);
                if (iVar4 != -1) {
                  do {
                    lVar7 = *(longlong *)(param_1 + 0x50) + (longlong)iVar4 * 0x40;
                    if (((*(ulonglong *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar4 * 0x40) ^
                         uVar3) & 0xfffffffffffffff) == 0) {
                      if ((uint *)(lVar7 + 8) != (uint *)0x0 && lVar7 != 0) {
                        bVar8 = *(byte *)(lVar7 + 0x30) & 0xe7 | 8;
                        if (param_3 != 0) {
                          bVar8 = *(byte *)(lVar7 + 0x30) & 0xef;
                        }
                        *(byte *)(lVar7 + 0x30) = bVar8;
                        if ((((*(int *)(lVar7 + 0xc) != 0) &&
                             (uVar2 = *(uint *)(lVar7 + 8), -1 < (int)uVar2)) &&
                            ((int)uVar2 < DAT_14c9647dc)) &&
                           (((plVar9 = (longlong *)
                                       ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)
                                       ), plVar9 != (longlong *)0x0 &&
                             ((int)plVar9[2] == *(int *)(lVar7 + 0xc))) &&
                            (((*(uint *)(plVar9 + 1) & 0x10200000) == 0 && (*plVar9 != 0)))))) {
                          FUN_146f29be6(param_1);
                        }
                      }
                      break;
                    }
                    iVar4 = *(int *)(lVar7 + 0x38);
                  } while (iVar4 != -1);
                }
              }
              puVar10 = puVar10 + 1;
            } while (puVar10 != puVar1);
            lVar7 = *param_2;
          }
          FUN_146f32764((longlong *)(param_1 + 0x178),lVar7);
          return;
        }
        iVar4 = (int)plVar9[8];
      } while (iVar4 != -1);
    }
  }
  return;
}



// FUNCTION 142a84fd2 FUN_142a84fd2 body=446 status=ok
// SIG undefined FUN_142a84fd2(void)

void FUN_142a84fd2(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  
  iVar2 = *(int *)(param_1 + 0x148);
  if (iVar2 == 0) {
    uVar12 = 1;
    uVar14 = 0;
    iVar9 = 0;
    iVar5 = 0;
  }
  else {
    puVar4 = *(uint **)(param_1 + 0x140);
    if (*(uint **)(param_1 + 0x140) == (uint *)0x0) {
      puVar4 = (uint *)(param_1 + 0x130);
    }
    uVar13 = *puVar4;
    if (uVar13 == 0) {
      iVar5 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar5 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar12 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar12 = uVar14;
      }
      iVar9 = 0;
      do {
        if (uVar12 == uVar14) {
          return;
        }
        iVar9 = iVar9 + 0x20;
        uVar13 = puVar4[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar14 = 0;
      iVar9 = 0;
    }
    uVar12 = (ulonglong)(-uVar13 & uVar13);
    uVar1 = uVar12 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar5 = (iVar9 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar5) {
      iVar5 = iVar2;
    }
  }
  if (iVar5 != iVar2) {
    uVar13 = 0xffffffff;
    iVar3 = iVar2;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x120) + 8 + (longlong)iVar5 * 0x20) != 0) {
        (**(code **)(*param_2 + 0x88))
                  (param_2,*(longlong *)(param_1 + 0x120) + (longlong)iVar5 * 0x20 + 8,
                   *(undefined8 *)(param_1 + 0xf0),0);
        iVar3 = *(int *)(param_1 + 0x148);
      }
      uVar13 = uVar13 & ~(uint)uVar12;
      puVar4 = *(uint **)(param_1 + 0x140);
      if (*(uint **)(param_1 + 0x140) == (uint *)0x0) {
        puVar4 = (uint *)(param_1 + 0x130);
      }
      iVar5 = (int)uVar14;
      lVar10 = (longlong)iVar5;
      uVar6 = puVar4[lVar10] & uVar13;
      if (uVar6 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar9 = iVar9 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar5) {
          iVar8 = iVar5;
        }
        if (iVar5 < iVar7) {
          lVar11 = 0;
          do {
            uVar6 = puVar4[lVar10 + lVar11 + 1];
            if (uVar6 != 0) {
              uVar14 = (ulonglong)(iVar5 + (int)lVar11 + 1);
              uVar13 = 0xffffffff;
              goto LAB_142a85147;
            }
            iVar9 = iVar9 + 0x20;
            lVar11 = lVar11 + 1;
          } while (iVar8 - lVar10 != lVar11);
          uVar13 = 0xffffffff;
          iVar5 = iVar8;
        }
        uVar14 = (ulonglong)(iVar5 + 1);
        iVar5 = iVar3;
      }
      else {
LAB_142a85147:
        uVar12 = (ulonglong)(-uVar6 & uVar6);
        uVar1 = uVar12 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar5 = (iVar9 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar5) {
          iVar5 = iVar3;
        }
      }
    } while (iVar5 != iVar2);
  }
  return;
}



// FUNCTION 142a85190 FUN_142a85190 body=29 status=ok
// SIG undefined FUN_142a85190(void)

undefined8 FUN_142a85190(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a8532c FUN_142a8532c body=93 status=ok
// SIG undefined FUN_142a8532c(void)

void FUN_142a8532c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f9a820;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 142a8538a FUN_142a8538a body=93 status=ok
// SIG undefined FUN_142a8538a(void)

void FUN_142a8538a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f9a820;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 142a853e8 FUN_142a853e8 body=126 status=ok
// SIG undefined FUN_142a853e8(void)

void FUN_142a853e8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e665f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f9a820;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142a85457. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142a85470 FUN_142a85470 body=286 status=ok
// SIG undefined FUN_142a85470(void)

undefined8 FUN_142a85470(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_142a85587;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_142a85587;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_142a85587:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_142a85538;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_142a84db0(*(undefined8 *)(param_1 + 0x20),param_2,param_3);
      uVar6 = 1;
      goto LAB_142a85538;
    }
  }
  uVar6 = 0;
LAB_142a85538:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a8558f FUN_142a8558f body=849 status=ok
// SIG undefined FUN_142a8558f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a8558f(void)

{
  uint uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  char *local_30;
  undefined4 local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  FUN_14153156c(&DAT_14c999608,L"Net.Iris.CullNonRelevant",&DAT_14c75f460,
                L"When enabled will cull replicated actors that are not relevant to any client.");
  atexit(FUN_142a78594);
  local_38 = 0;
  FUN_14153156c(&DAT_14c999620,
                L"Net.Iris.Filtering.ValidateNobSubObjectInScopeWithFilteredOutRootObject",
                &DAT_14c999618,
                L"Validate there are no subobjects in scope with a filtered out root object.");
  atexit(FUN_142a785d9);
  local_38 = 0;
  FUN_141471170(&DAT_14c999630,L"net.Iris.PushModelMode",&DAT_14c75f468,
                L"0 = disabled but runtime togglable, 1 = enabled and not togglable, 2 = enabled but runtime togglable. Requires Net.IsPushModelEnabled is true and WITH_PUSH_MODEL > 0 to use push based dirtiness in the backwards compatibility mode."
               );
  atexit(FUN_142a7d4fd);
  local_30 = "Out of order PartialNetBlob.";
  local_28 = 0x1c;
  local_24 = 0;
  uVar1 = FUN_14001a6c0(&local_30,1);
  DAT_14c999640 = (ulonglong)uVar1;
  local_30 = "Unsupported NetBlob type";
  local_28 = 0x18;
  local_24 = 0;
  uVar1 = FUN_14001a6c0(&local_30,1);
  DAT_14c9997b8 = (ulonglong)uVar1;
  local_30 = (char *)CONCAT44(local_30._4_4_,1);
  local_38 = 0;
  FUN_14078dbce(&DAT_14c999648,L"net.Iris.EnableRPCs",&local_30,
                L"If > 0 let Iris replicate and execute RPCs.");
  atexit(FUN_142a7daa1);
  local_38 = 0;
  FUN_14153156c(&DAT_14c999660,L"net.Iris.ThrottleRPCWarnings",&DAT_14c75f461,
                L"Only log send failure warnings once per RPC type.");
  atexit(FUN_142a7dae6);
  local_38 = 0;
  FUN_14153156c(&DAT_14c999670,L"net.Iris.RPC.AllowOnDormantObjects",&DAT_14c75f462,
                L"When true allow RPCs to be sent on dormant objects. When false block all RPCs from the moment the dormant change is requested."
               );
  atexit(FUN_142a7db2b);
  local_38 = 0;
  FUN_14153156c(&DAT_14c999680,L"net.Iris.RPC.AutoNetFlushOnDormantObjects",&DAT_14c75f463,
                L"When true we will make an implicit NetFlush request when an RPC is sent on a dormant object. When false no replicated properties would be sent along with the RPC."
               );
  atexit(FUN_142a7db70);
  local_30 = "Invalid NetObjectRefererence";
  local_28 = 0x1c;
  local_24 = 0;
  uVar1 = FUN_14001a6c0(&local_30,1);
  DAT_14c999690 = (ulonglong)uVar1;
  local_30 = "Unknown RPC";
  local_28 = 0xb;
  local_24 = 0;
  uVar1 = FUN_14001a6c0(&local_30,1);
  DAT_14c999698 = (ulonglong)uVar1;
  local_30 = "RPC call not allowed";
  local_28 = 0x14;
  local_24 = 0;
  uVar1 = FUN_14001a6c0(&local_30,1);
  DAT_14c9996a0 = (ulonglong)uVar1;
  local_30 = "Reliable attachment queue full";
  local_28 = 0x1e;
  local_24 = 0;
  uVar1 = FUN_14001a6c0(&local_30,1);
  _DAT_14c9996a8 = (ulonglong)uVar1;
  local_30 = "Invalid sequence number";
  local_28 = 0x17;
  local_24 = 0;
  uVar1 = FUN_14001a6c0(&local_30,1);
  DAT_14c9996b0 = (ulonglong)uVar1;
  _DAT_14c9997a8 = 0x800000000;
  local_38 = 0;
  FUN_14153156c(&DAT_14c9996b8,L"net.Iris.IrisPreExportExistingNetTokensOnConnect",&DAT_14c9996c8,
                L"If true we will enqueue all existing NetTokens for pre-export when a new connection is added."
               );
  atexit(FUN_142a81183);
  local_38 = 0;
  FUN_14153156c(&DAT_14c9996d0,L"net.iris.AllowAsyncLoading",&DAT_14c75f465,
                L"Flag to allow or disallow async loading when using iris replication. Note: net.allowAsyncLoading must also be enabled."
               );
  atexit(FUN_142a81aa2);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a858e4 FUN_142a858e4 body=69 status=ok
// SIG undefined FUN_142a858e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a858e4(void)

{
  _DAT_14c9997c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a85926. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9997c8,1);
  return;
}



// FUNCTION 142a85929 FUN_142a85929 body=69 status=ok
// SIG undefined FUN_142a85929(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a85929(void)

{
  _DAT_14c9997d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a8596b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9997d8,1);
  return;
}



// FUNCTION 142a8596e FUN_142a8596e body=69 status=ok
// SIG undefined FUN_142a8596e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a8596e(void)

{
  _DAT_14c9997e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a859b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9997e8,1);
  return;
}



// FUNCTION 142a859b3 FUN_142a859b3 body=69 status=ok
// SIG undefined FUN_142a859b3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a859b3(void)

{
  _DAT_14c9997f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a859f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9997f8,1);
  return;
}



// FUNCTION 142a859f8 FUN_142a859f8 body=69 status=ok
// SIG undefined FUN_142a859f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a859f8(void)

{
  _DAT_14c999800 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a85a3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c999808,1);
  return;
}



// FUNCTION 142a85a3d FUN_142a85a3d body=69 status=ok
// SIG undefined FUN_142a85a3d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a85a3d(void)

{
  _DAT_14c999818 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a85a7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c999820,1);
  return;
}



// FUNCTION 142a85a82 FUN_142a85a82 body=69 status=ok
// SIG undefined FUN_142a85a82(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a85a82(void)

{
  _DAT_14c999830 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a85ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c999838,1);
  return;
}



// FUNCTION 142a85ac8 FUN_142a85ac8 body=428 status=ok
// SIG undefined FUN_142a85ac8(void)

int FUN_142a85ac8(longlong param_1,longlong param_2,ulonglong param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_a8 [36];
  int local_84;
  longlong *local_80;
  longlong local_78;
  ulonglong uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  local_50 = 0xffffffff00000007;
  local_68 = *(undefined8 *)(param_2 + 0x310);
  local_60 = *(undefined8 *)(param_2 + 0x318);
  local_80 = param_4;
  if ((param_3 & 2) == 0) {
    local_58 = FUN_144938c96(param_1);
  }
  if ((param_3 & 4) != 0) {
    local_50 = CONCAT44(local_50._4_4_,0xf);
  }
  local_78 = 0;
  uStack_70 = 0;
  FUN_142a70c62(&local_78,*(undefined8 *)(param_1 + 0x10),&local_68);
  lVar2 = local_78;
  lVar4 = (longlong)(int)uStack_70;
  local_84 = 0;
  if (lVar4 != 0) {
    lVar5 = 0;
    local_84 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar5);
      if (((param_3 & 1) == 0) || (*(short *)(lVar3 + 0x7e) != 0)) {
        if (*(code **)(lVar3 + 0xb0) == (code *)0x0) {
          lVar3 = FUN_146f39af4(param_1,lVar3,param_2);
        }
        else {
          lVar3 = (**(code **)(lVar3 + 0xb0))();
        }
        if ((local_80 != (longlong *)0x0) && (lVar3 != 0)) {
          iVar1 = (int)local_80[1];
          *(uint *)(local_80 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)local_80 + 0xc) < iVar1 + 1U) {
            FUN_146f41bae(local_80,iVar1);
          }
          *(longlong *)(*local_80 + (longlong)iVar1 * 8) = lVar3;
          local_84 = local_84 + 1;
        }
      }
      lVar5 = lVar5 + 8;
    } while (lVar4 << 3 != lVar5);
  }
  if (*(int *)(param_2 + 0x308) < 1) {
    *(undefined1 *)(param_2 + 0x324) = 1;
  }
  FUN_146f1ad47(local_78,uStack_70 & 0xffffffff);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_84;
}



// FUNCTION 142a85c76 FUN_142a85c76 body=275 status=ok
// SIG undefined FUN_142a85c76(void)

undefined8 * FUN_142a85c76(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70;
  undefined4 local_68;
  longlong local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_146f3a0bc(param_1,&local_60,*(undefined8 *)(param_4 + 0x18));
  FUN_146f283b0(*(undefined8 *)(param_1 + 0x40),param_2,param_3,*(undefined8 *)(param_1 + 0xa8));
  uVar1 = *param_2;
  if (local_60 != 0) {
    FUN_142a9d5c4(*(undefined8 *)(param_1 + 0x28),local_60,uVar1);
  }
  uVar2 = FUN_146f18900(*(undefined8 *)(param_1 + 0x40),uVar1);
  local_50 = &local_80;
  local_70 = local_60;
  local_78 = 0;
  local_80 = param_3;
  local_68 = uVar2;
  local_58 = param_2;
  FUN_146f41302(param_1 + 0xb0,local_44,&local_58,0);
  if (*(char *)(param_4 + 0x20) == '\x01') {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x28) + 0x1080;
    FUN_142aa2784(lVar3,uVar2);
    FUN_146f54128(lVar3,uVar2,param_4);
    FUN_146f457c0(*(undefined8 *)(param_1 + 0x28),*param_2,0);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a85d8a FUN_142a85d8a body=934 status=ok
// SIG undefined FUN_142a85d8a(void)

longlong *
FUN_142a85d8a(longlong param_1,longlong *param_2,longlong param_3,undefined4 param_4,
             undefined1 param_5)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined2 *puVar7;
  undefined2 **ppuVar8;
  longlong lVar9;
  undefined1 auStack_3e8 [32];
  undefined2 **local_3c8;
  longlong local_3b8;
  undefined2 *local_3b0;
  longlong local_3a8;
  undefined2 *local_3a0;
  int local_398;
  undefined2 *local_390;
  undefined2 *local_388;
  uint local_380;
  undefined4 local_37c;
  longlong local_378 [96];
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  local_378[0] = 0;
  local_378[1] = 0;
  FUN_142a81ae8(*(undefined8 *)(param_1 + 0x48),param_3,local_378);
  lVar9 = local_378[0];
  if (local_378[0] == 0) {
    *param_2 = 0;
    goto LAB_142a85de5;
  }
  cVar2 = FUN_146f45a10(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x28) + 0x160,local_378[0]);
  if (cVar2 != '\0') {
    *param_2 = lVar9;
    goto LAB_142a85de5;
  }
  local_60 = *(undefined8 *)(param_1 + 0x28);
  local_68 = *(undefined8 *)(param_1 + 0x38);
  local_78 = 0;
  local_70 = 0x2000000000;
  local_54 = 0;
  local_58 = param_4;
  FUN_146f32f03(param_3,local_378);
  puVar7 = (undefined2 *)FUN_144938c96(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  local_3b8 = FUN_146f41c40(local_378);
  uVar3 = FUN_146f41d8a(local_378);
  ppuVar8 = (undefined2 **)FUN_146f41ef8(uVar1,uVar3,puVar7);
  if (ppuVar8 == (undefined2 **)0x0) {
    local_380 = local_380 & 0xffffff00;
    local_388 = puVar7;
    local_37c = FUN_146f33e00(param_1,*(undefined8 *)(param_3 + 0x10));
    local_390 = *(undefined2 **)(*(longlong *)(param_3 + 0x10) + 0x18);
    FUN_1400021e4(&local_390,&local_3a0);
    puVar7 = local_3a0;
    if (local_398 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    local_3c8 = &local_388;
    ppuVar8 = (undefined2 **)FUN_142a95bfc(uVar1,uVar3,local_378,puVar7);
    if (local_3a0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (ppuVar8 != (undefined2 **)0x0) goto LAB_142a85f05;
    *param_2 = 0;
    lVar9 = local_3b8;
  }
  else {
LAB_142a85f05:
    FUN_146efd34a(&local_390,param_3);
    local_388 = local_390;
    local_3c8 = ppuVar8;
    FUN_146f27d56(*(undefined8 *)(param_1 + 0x40),&local_3a8,lVar9);
    lVar9 = local_3b8;
    if (local_3a8 != 0) {
      local_3b0 = local_390;
      iVar4 = FUN_146f18900(*(undefined8 *)(param_1 + 0x40),local_3a8);
      lVar9 = local_3b8;
      FUN_146f27b9a(*(undefined8 *)(param_1 + 0x40),iVar4,local_3b8,param_3);
      local_388 = local_3b0;
      FUN_146f39e02(&local_388,lVar9,
                    *(undefined8 *)
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x270) +
                       (longlong)(iVar4 / 100) * 8) + 0x10 + (ulonglong)(uint)(iVar4 % 100) * 0x38))
      ;
      FUN_142a769ba((uint)((ulonglong)local_3a8 >> 0x3c) - 1,iVar4);
      if ((*(byte *)(lVar9 + 0x12) & 0x60) != 0) {
        local_3a0 = local_390;
        local_388 = *(undefined2 **)(lVar9 + 8);
        local_380 = (uint)*(ushort *)(lVar9 + 0x10);
        FUN_146f35644();
      }
      uVar5 = FUN_146f18900(*(undefined8 *)(param_1 + 0x40),local_3a8);
      *(undefined1 *)
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x270) + (longlong)((int)uVar5 / 100) * 8) +
        0x30 + (ulonglong)(uint)((int)uVar5 % 100) * 0x38) = param_5;
      FUN_142a73a34(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x28) + 0xbe0,uVar5);
      uVar6 = 1 << ((byte)uVar5 & 0x1f);
      if (-1 < *(char *)(lVar9 + 0x12)) {
        uVar6 = 0;
      }
      *(uint *)(*(longlong *)(param_1 + 0x540) + (ulonglong)(uVar5 >> 5) * 4) =
           *(uint *)(*(longlong *)(param_1 + 0x540) + (ulonglong)(uVar5 >> 5) * 4) &
           ~(1 << (uVar5 & 0x1f)) | uVar6;
      cVar2 = FUN_146f33f46(param_1,*(undefined8 *)(param_3 + 0x10));
      if (cVar2 != '\0') {
        FUN_146f461f4(*(undefined8 *)(param_1 + 0x28),local_3a8,1);
      }
      lVar9 = 0;
    }
    *param_2 = local_3a8;
  }
  if (lVar9 != 0) {
    FUN_146f41d3a();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
LAB_142a85de5:
  if ((local_48 ^ (ulonglong)auStack_3e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 142a86132 FUN_142a86132 body=643 status=ok
// SIG undefined FUN_142a86132(void)

longlong *
FUN_142a86132(longlong param_1,longlong *param_2,longlong param_3,byte *param_4,undefined1 param_5)

{
  uint *puVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  float local_64;
  longlong local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(char *)(param_1 + 0x59a) != '\x01') {
    local_78 = param_5;
    FUN_142a85d8a(param_1,&local_60,param_3,(uint)*param_4 * 0x200 + (uint)param_4[1] * 0x400 + 0x20
                 );
    if (local_60 != 0) {
      uVar4 = FUN_146f18900(*(undefined8 *)(param_1 + 0x40),local_60);
      local_64 = *(float *)(param_4 + 0x14);
      FUN_146f3406a(param_1,*(undefined8 *)(param_3 + 0x10),&local_64);
      uVar7 = 0;
      if (0.0 < local_64) {
        fVar9 = 0.001;
        if (0.001 <= local_64) {
          fVar9 = local_64;
        }
        iVar5 = (int)(longlong)(*(float *)(param_1 + 0x1e0) / fVar9);
        uVar7 = iVar5 - 1;
        if (iVar5 == 0) {
          uVar7 = 0;
        }
        if (0xfe < uVar7) {
          uVar7 = 0xff;
        }
      }
      puVar1 = *(uint **)(param_1 + 0x1e8);
      uVar8 = *puVar1;
      if (*puVar1 < uVar4) {
        uVar8 = uVar4;
      }
      *puVar1 = uVar8;
      *(char *)(*(longlong *)(puVar1 + 0x42) + (longlong)(int)uVar4) = (char)uVar7;
      uVar7 = uVar7 & 0xff;
      bVar2 = *(char *)((longlong)puVar1 + (ulonglong)uVar7 + 8) - 1;
      *(byte *)((longlong)puVar1 + (ulonglong)uVar7 + 8) = bVar2;
      *(char *)(*(longlong *)(puVar1 + 0x46) + (longlong)(int)uVar4) =
           (char)(~((uint)bVar2 + puVar1[1]) % (uVar7 + 1));
      if (param_4[1] == 1) {
        FUN_142aa2784(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x28) + 0x1080,uVar4);
      }
      iVar5 = FUN_146f3455c(param_1,*(undefined8 *)(param_3 + 0x10),0.0 < *(float *)(param_4 + 0x10)
                           );
      if ((iVar5 != -1) || (*(float *)(param_4 + 0x10) <= 0.0)) {
        if (iVar5 == -1) {
          if (param_4[1] == 0) {
            uVar6 = FUN_146f45a84(*(undefined8 *)(param_1 + 0x28),local_60);
            cVar3 = FUN_146f4a204(uVar6,0x719e9e9e02f8b16);
            if (cVar3 == '\0') goto LAB_142a86329;
          }
          uVar6 = *(undefined8 *)(param_1 + 0x28);
          iVar5 = 0;
        }
        else {
          uVar6 = *(undefined8 *)(param_1 + 0x28);
        }
        FUN_146f457c0(uVar6,local_60,iVar5);
      }
      else {
        FUN_146f45776(*(undefined8 *)(param_1 + 0x28),local_60);
      }
LAB_142a86329:
      if (DAT_14c75f46f == '\x01') {
        local_58 = 0;
        if (param_4[4] == 1) {
          if (*(longlong *)(param_4 + 8) != 0) {
            iVar5 = FUN_146f2158c(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x28) + 0x880);
LAB_142a8635c:
            if (iVar5 != 0) {
              FUN_146f45b8e(*(undefined8 *)(param_1 + 0x28),local_60,iVar5,local_58);
            }
          }
        }
        else if (param_4[3] == 1) {
          iVar5 = FUN_146f34824(param_1,*(undefined8 *)(param_3 + 0x10),0,&local_58);
          goto LAB_142a8635c;
        }
      }
      if ((param_4[1] == 1) && (param_4[2] == 0)) {
        FUN_146f3479c(param_1,local_60,1);
      }
      *param_2 = local_60;
      goto LAB_142a861aa;
    }
  }
  *param_2 = 0;
LAB_142a861aa:
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 142a863b6 FUN_142a863b6 body=271 status=ok
// SIG undefined FUN_142a863b6(void)

longlong *
FUN_142a863b6(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4,
             undefined1 param_5)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146f33cf2(param_1,&local_40,param_3,0);
  if (local_40 == 0) {
    local_58 = param_5;
    FUN_142a85d8a(param_1,&local_48,param_3,0x20);
    if (local_48 == 0) {
      local_40 = 0;
    }
    else {
      local_58 = *(undefined1 *)(param_4 + 2);
      FUN_146f34b76(param_1,*param_4,local_48,param_4[1]);
      iVar2 = FUN_146f18900(*(undefined8 *)(param_1 + 0x40),*param_4);
      uVar3 = FUN_146f18900(*(undefined8 *)(param_1 + 0x40),local_48);
      puVar1 = *(uint **)(param_1 + 0x1e8);
      uVar4 = *puVar1;
      if (*puVar1 < uVar3) {
        uVar4 = uVar3;
      }
      *puVar1 = uVar4;
      *(undefined1 *)(*(longlong *)(puVar1 + 0x42) + (longlong)(int)uVar3) =
           *(undefined1 *)(*(longlong *)(puVar1 + 0x42) + (longlong)iVar2);
      *(undefined1 *)(*(longlong *)(puVar1 + 0x46) + (longlong)(int)uVar3) =
           *(undefined1 *)(*(longlong *)(puVar1 + 0x46) + (longlong)iVar2);
      FUN_146f34be0(param_1,local_48,*param_4);
      local_40 = local_48;
    }
  }
  *param_2 = local_40;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a864c6 FUN_142a864c6 body=134 status=ok
// SIG undefined FUN_142a864c6(void)

void FUN_142a864c6(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x28) + 0x160;
  uVar3 = FUN_146f18900(lVar5);
  cVar2 = FUN_146f28942(lVar5,uVar3,param_3);
  if ((((cVar2 != '\0') &&
       (uVar4 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x28) + 0x48), uVar4 < 0x10)) &&
      ((&DAT_14c999ae0)[uVar4] != 0)) &&
     ((uVar3 != 0 &&
      (lVar5 = *(longlong *)((&DAT_14c999ae0)[uVar4] + 0x28), uVar3 < *(uint *)(lVar5 + 0x608))))) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(lVar5 + 0x5e0) + (ulonglong)(uVar3 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar3 & 0x1f);
    UNLOCK();
  }
  return;
}



// FUNCTION 142a8654c FUN_142a8654c body=83 status=ok
// SIG undefined FUN_142a8654c(void)

void FUN_142a8654c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x28);
  lVar1 = lVar3 + 0x160;
  cVar4 = FUN_142a80f66(lVar1);
  if (cVar4 != '\0') {
    uVar5 = FUN_146f18900(lVar1,param_3);
    puVar2 = (uint *)(*(longlong *)(lVar3 + 0xb08) + (ulonglong)(uVar5 >> 5) * 4);
    *puVar2 = *puVar2 | 1 << ((byte)uVar5 & 0x1f);
  }
  return;
}



// FUNCTION 142a865a0 FUN_142a865a0 body=81 status=ok
// SIG undefined FUN_142a865a0(void)

void FUN_142a865a0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  uint uVar4;
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x28);
  lVar1 = lVar3 + 0x160;
  FUN_146f28dbe(lVar1);
  uVar4 = FUN_146f18900(lVar1,param_3);
  if (uVar4 != 0) {
    puVar2 = (uint *)(*(longlong *)(lVar3 + 0xb08) + (ulonglong)(uVar4 >> 5) * 4);
    *puVar2 = *puVar2 | 1 << ((byte)uVar4 & 0x1f);
  }
  return;
}



// FUNCTION 142a865f2 FUN_142a865f2 body=458 status=ok
// SIG undefined FUN_142a865f2(void)

undefined4 FUN_142a865f2(longlong param_1,undefined8 *param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x4f8) != *(int *)(param_1 + 0x524)) {
    lVar5 = param_1 + 0x528;
    if (*(longlong *)(param_1 + 0x530) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x530);
    }
    iVar3 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x538) - 1U &
                             (int)param_3 + ((uint)(param_3 >> 0x20) & 0xfffffff) * 0x17) * 4);
    if (iVar3 != -1) {
      do {
        puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x4f0) + (longlong)iVar3 * 0x18);
        if (((*puVar1 ^ param_3) & 0xfffffffffffffff) == 0) {
          if (puVar1 + 1 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
          }
          break;
        }
        iVar3 = (int)puVar1[2];
      } while (iVar3 != -1);
    }
  }
  lVar5 = FUN_146f45a84(*(undefined8 *)(param_1 + 0x28),param_3);
  if ((lVar5 == 0) || (iVar3 = FUN_146f18900(*(undefined8 *)(param_1 + 0x40),param_3), iVar3 == 0))
  {
    uVar4 = 0;
  }
  else {
    bVar2 = *(byte *)(*(longlong *)
                       (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x270) +
                       (longlong)(iVar3 / 100) * 8) + 0x30 + (ulonglong)(uint)(iVar3 % 100) * 0x38);
    uVar6 = 0;
    if ((bVar2 != 0xff) &&
       (*(uint *)(param_1 + 0x590) != (uint)bVar2 &&
        (int)(uint)bVar2 <= (int)*(uint *)(param_1 + 0x590))) {
      uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 0x588) + (ulonglong)bVar2 * 8);
    }
    FUN_146f27044(uVar6,&local_38,param_3,*(undefined4 *)(lVar5 + 0x2c));
    uVar4 = FUN_146f270d4(uVar6,param_3,*param_2,local_38);
    if (local_38 != (undefined8 *)0x0) {
      (**(code **)*local_38)(local_38,1);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 142a867da FUN_142a867da body=294 status=ok
// SIG undefined FUN_142a867da(void)

ulonglong FUN_142a867da(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 **local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = param_2;
  lVar3 = FUN_146f45a84(*(undefined8 *)(param_1 + 0x28));
  if (lVar3 != 0) {
    iVar2 = FUN_146f18900(*(undefined8 *)(param_1 + 0x40),param_2);
    if (iVar2 != 0) {
      bVar1 = *(byte *)(*(longlong *)
                         (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x270) +
                         (longlong)(iVar2 / 100) * 8) + 0x30 + (ulonglong)(uint)(iVar2 % 100) * 0x38
                       );
      uVar4 = 0;
      if ((bVar1 != 0xff) &&
         (*(uint *)(param_1 + 0x590) != (uint)bVar1 &&
          (int)(uint)bVar1 <= (int)*(uint *)(param_1 + 0x590))) {
        uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x588) + (ulonglong)bVar1 * 8);
      }
      FUN_146f27044(uVar4,&local_48,param_2,*(undefined4 *)(lVar3 + 0x2c));
      uVar5 = CONCAT71((int7)((ulonglong)param_2 >> 8),local_48 != (undefined8 *)0x0);
      if (local_48 != (undefined8 *)0x0) {
        local_30 = &local_50;
        local_50 = local_48;
        local_38 = &local_40;
        FUN_146f3cd00(param_1 + 0x4f0,local_24);
        if (local_50 != (undefined8 *)0x0) {
          (**(code **)*local_50)(local_50,1);
        }
      }
      goto LAB_142a8680b;
    }
  }
  uVar5 = 0;
LAB_142a8680b:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a86902 FUN_142a86902 body=400 status=ok
// SIG undefined FUN_142a86902(void)

void FUN_142a86902(longlong param_1,longlong param_2,uint param_3)

{
  byte *pbVar1;
  ushort *puVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  
  if ((param_2 == 0) ||
     (cVar6 = FUN_146f45a10(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x28) + 0x160),
     cVar6 == '\0')) {
    return;
  }
  iVar7 = FUN_146f18900(*(undefined8 *)(param_1 + 0x40),param_2);
  if (iVar7 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x40);
    uVar8 = iVar7 % 100;
    lVar9 = (longlong)(iVar7 / 100);
    lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x290) + lVar9 * 8);
    if (*(longlong *)(lVar5 + (longlong)(int)uVar8 * 8) == 0) {
      if ((param_3 & 0x20) != 0) {
        puVar2 = (ushort *)
                 (*(longlong *)(*(longlong *)(lVar4 + 0x270) + lVar9 * 8) + 0x32 +
                 (ulonglong)uVar8 * 0x38);
        *puVar2 = *puVar2 | 0x100;
      }
    }
    else {
      lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x270) + lVar9 * 8);
      uVar3 = *(ushort *)(lVar4 + 0x32 + (ulonglong)uVar8 * 0x38);
      if (((uVar3 >> 8 & 1) != 0) && (DAT_14c9998f8 != '\x01')) {
        return;
      }
      lVar4 = lVar4 + (ulonglong)uVar8 * 0x38;
      if ((param_3 & 2) == 0) {
        if (((uVar3 & 0x40) != 0) && (DAT_14c75f470 != '\0')) {
          cVar6 = FUN_146f2479a(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x28) + 0xf00,iVar7);
          if (cVar6 != '\0') {
            param_3 = param_3 | 4;
          }
        }
        if ((param_3 & 4) == 0) {
          *(ushort *)(lVar4 + 0x32) = uVar3 | 0x100;
          FUN_142a8cef4(param_1,param_2,param_3);
          return;
        }
        FUN_146f39fa0(param_1,param_2,param_3,1);
        FUN_142a8d55c(param_1,param_2);
      }
      else {
        FUN_146f39fa0(param_1,param_2,param_3,CONCAT71((int7)((ulonglong)lVar5 >> 8),1));
        FUN_142a8d08c(param_1,param_2);
      }
      pbVar1 = (byte *)(lVar4 + 0x33);
      *pbVar1 = *pbVar1 | 1;
    }
  }
  FUN_142a8cbe2(param_1,param_2);
  return;
}



// FUNCTION 142a86a92 FUN_142a86a92 body=281 status=ok
// SIG undefined FUN_142a86a92(void)

void FUN_142a86a92(longlong *param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = FUN_146f299be(param_1[9]);
  local_48 = lVar2;
  local_38 = param_3;
  local_34 = param_4;
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
  }
  iVar1 = FUN_146f18900(param_1[8],param_2);
  iVar1 = *(int *)(*(longlong *)(*(longlong *)(param_1[8] + 0x270) + (longlong)(iVar1 / 100) * 8) +
                   0x28 + (longlong)(iVar1 % 100) * 0x38);
  if (iVar1 == 0) {
    local_40 = 0;
  }
  else {
    local_40 = *(undefined8 *)
                (*(longlong *)(*(longlong *)(param_1[8] + 0x2d0) + (longlong)(iVar1 / 100) * 8) +
                (longlong)(iVar1 % 100) * 8);
  }
  FUN_146f34d1e(param_1,param_2);
  if (lVar2 != 0) {
    (**(code **)(*param_1 + 0x358))(param_1,&local_48);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a86bc2 FUN_142a86bc2 body=986 status=ok
// SIG undefined FUN_142a86bc2(void)

undefined8 *
FUN_142a86bc2(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong *plVar1;
  undefined8 *puVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined2 *puVar9;
  undefined1 auStack_428 [32];
  longlong *local_408;
  ulonglong local_3f8;
  undefined4 local_3ec;
  longlong local_3e8;
  longlong local_3e0;
  longlong local_3d8;
  longlong local_3d0;
  undefined8 local_3c8;
  undefined4 local_3c0;
  undefined2 *local_3b8;
  int local_3b0;
  longlong local_3a8;
  undefined4 local_3a0;
  undefined8 local_398;
  longlong local_390;
  undefined8 local_388;
  undefined8 *local_380;
  undefined8 local_378;
  undefined1 local_370 [768];
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  undefined4 local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_428;
  bVar3 = FUN_146f546d2(*(undefined8 *)(*param_5 + 0xd8),3);
  uVar7 = DAT_14c99c018;
  if ((bVar3 == 0xff || (int)param_1[0xb2] <= (int)(uint)bVar3) ||
     (plVar1 = *(longlong **)(param_1[0xb1] + (ulonglong)bVar3 * 8), plVar1 == (longlong *)0x0)) {
    lVar8 = *param_5;
    FUN_146f5b89e(lVar8);
    if (*(longlong *)(lVar8 + 8) == 0) {
      *(undefined8 *)(lVar8 + 8) = uVar7;
    }
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_428);
  }
  FUN_146f2717e(plVar1,&local_380,param_4,*param_5);
  puVar2 = local_380;
  if ((((local_380 == (undefined8 *)0x0) || (lVar8 = *param_5, *(longlong *)(lVar8 + 8) != 0)) ||
      ((*(longlong *)(lVar8 + 0xd8) != 0 && (*(int *)(*(longlong *)(lVar8 + 0xd8) + 0x14) != 0))))
     || ((*(longlong *)(lVar8 + 0xe0) != 0 && (*(int *)(*(longlong *)(lVar8 + 0xe0) + 0x18) != 0))))
  {
    *param_2 = 0;
    param_2[1] = 0;
    goto LAB_142a86cb8;
  }
  local_3f8 = CONCAT44(local_3f8._4_4_,*(undefined4 *)(local_380 + 1));
  local_58 = param_1[5];
  local_60 = param_1[7];
  local_70 = 0;
  local_68 = 0x2000000000;
  local_50 = 0x40;
  local_4c = 0;
  local_3e0 = param_1[6];
  local_390 = *(longlong *)(lVar8 + 0xf0) + 0x10;
  local_398 = param_4;
  local_388 = param_3;
  (**(code **)(*plVar1 + 0x2a0))(plVar1,&local_3a8,&local_398,local_380);
  if (local_3a8 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    local_3ec = local_3a0;
    FUN_146f32f03(local_3a8,local_370);
    local_3d8 = FUN_144938c96(local_3a8);
    local_3e8 = FUN_146f41c40(local_370);
    uVar6 = FUN_146f41ef8(local_3e0,local_3f8 & 0xffffffff,local_3d8);
    if (uVar6 == 0) {
      local_3d0 = local_3d8;
      local_3c8 = (undefined8 *)CONCAT71(local_3c8._1_7_,1);
      local_3c8 = (undefined8 *)CONCAT44(0xffffffff,(undefined4)local_3c8);
      local_378 = *(undefined8 *)(*(longlong *)(local_3a8 + 0x10) + 0x18);
      FUN_1400021e4(&local_378,&local_3b8);
      puVar9 = local_3b8;
      if (local_3b0 == 0) {
        puVar9 = &DAT_149dfb77a;
      }
      local_408 = &local_3d0;
      uVar6 = FUN_142a95bfc(local_3e0,local_3f8 & 0xffffffff,local_370,puVar9);
      if (local_3b8 != (undefined2 *)0x0) {
        local_3f8 = uVar6;
        FUN_1400020a8();
        uVar6 = local_3f8;
      }
      if (uVar6 != 0) goto LAB_142a86e8c;
LAB_142a86f59:
      uVar7 = FUN_146f079c6();
      FUN_146f3d30c(uVar7,param_1[5]);
      (**(code **)(*param_1 + 0x360))(param_1,param_4);
      local_3b8 = (undefined2 *)0x0;
      lVar8 = local_3e8;
    }
    else {
      local_3f8 = uVar6;
      cVar4 = FUN_142a95b9e(uVar6,local_370,0);
      uVar6 = local_3f8;
      if (cVar4 == '\0') goto LAB_142a86f59;
LAB_142a86e8c:
      local_408 = (longlong *)CONCAT71(local_408._1_7_,bVar3);
      FUN_146f27e8c(param_1[8],&local_3b8,param_4,uVar6);
      lVar8 = local_3e8;
      if (local_3b8 != (undefined2 *)0x0) {
        uVar5 = FUN_146f18900(param_1[8],local_3b8);
        FUN_146f27b9a(param_1[8],uVar5,local_3e8,local_3a8);
        if (((ulonglong)local_3b8 & 1) == 0) {
          FUN_142a82206(param_1[9],local_3b8,local_3a8);
        }
        local_3d0 = local_3a8;
        local_3c8 = puVar2;
        local_3c0 = (undefined4)param_5[1];
        (**(code **)(*plVar1 + 0x2a8))();
        lVar8 = 0;
      }
    }
    *param_2 = local_3b8;
    *(undefined4 *)(param_2 + 1) = local_3ec;
    if (lVar8 != 0) {
      FUN_146f41d3a();
    }
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
LAB_142a86cb8:
  if (local_380 != (undefined8 *)0x0) {
    (**(code **)*local_380)(local_380,1);
  }
  if ((local_48 ^ (ulonglong)auStack_428) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a86f9e FUN_142a86f9e body=375 status=ok
// SIG undefined FUN_142a86f9e(void)

void FUN_142a86f9e(int *param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_e8 [32];
  int *local_c8;
  uint local_c0;
  int local_bc [27];
  longlong local_50;
  int *local_48;
  longlong *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_2 != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 10) + 0x28);
    uVar3 = FUN_146f18900(lVar1 + 0x160);
    if (uVar3 != 0) {
      pcVar2 = *(code **)(param_1 + 0x44);
      if ((pcVar2 != (code *)0x0) &&
         (local_50 = *(longlong *)
                      (*(longlong *)
                        (*(longlong *)(lVar1 + 0x430) + (longlong)((int)uVar3 / 100) * 8) +
                      (longlong)((int)uVar3 % 100) * 8), local_50 != 0)) {
        local_bc[0] = *(int *)(lVar1 + 0x368);
        local_c8 = *(int **)(lVar1 + 0x358);
        local_c0 = local_bc[0] + 0x1fU >> 5;
        if (local_bc[0] == 0) {
          local_c8 = local_bc;
        }
        if (((uint)local_c8[uVar3 >> 5] >> (uVar3 & 0x1f) & 1) != 0) {
          local_40 = &local_50;
          local_38 = 1;
          plVar5 = (longlong *)(param_1 + 0x4c);
          if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
            plVar5 = *(longlong **)(param_1 + 0x48);
          }
          local_c8 = param_1;
          uVar4 = (**(code **)(*plVar5 + 8))();
          (*pcVar2)(uVar4,&local_40,&local_c8);
        }
      }
      local_50 = *(longlong *)(*(longlong *)(param_1 + 10) + 0x28) + 0x60;
      local_48 = param_1;
      FUN_146f35076(&local_c8);
      FUN_146f351a4(&local_c8,uVar3);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a87116 FUN_142a87116 body=2070 status=ok
// SIG undefined FUN_142a87116(void)

void FUN_142a87116(longlong param_1,ulonglong *param_2)

{
  uint *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  int *piVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  undefined1 auStack_158 [32];
  ulonglong local_138;
  int *local_130;
  longlong local_128;
  uint local_11c;
  longlong local_118;
  int *local_110;
  longlong local_108;
  int *local_100;
  int *local_f8;
  int *local_f0;
  int *local_e8;
  uint local_e0;
  int local_dc;
  int *local_d8;
  undefined8 uStack_d0;
  int local_c8;
  int *local_b8;
  uint local_b0;
  int local_ac;
  int *local_a8;
  uint local_a0;
  int local_9c;
  longlong local_98;
  ulonglong *local_90;
  int *local_88;
  uint local_80;
  int local_7c;
  int *local_78;
  uint local_70;
  int local_6c;
  ulonglong *local_68;
  uint local_60;
  int local_5c;
  int *local_58;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x28);
  local_6c = *(int *)(lVar12 + 0x278);
  local_78 = *(int **)(lVar12 + 0x268);
  local_70 = local_6c + 0x1fU >> 5;
  if (local_6c == 0) {
    local_78 = &local_6c;
  }
  local_7c = *(int *)(lVar12 + 0x338);
  local_88 = *(int **)(lVar12 + 0x328);
  local_80 = local_7c + 0x1fU >> 5;
  if (local_7c == 0) {
    local_88 = &local_7c;
  }
  if (DAT_14c75f46c == '\x01') {
    if (DAT_14c999810 == '\x01') {
      iVar4 = *(int *)(lVar12 + 0x5d8);
      local_d8 = *(int **)(lVar12 + 0x5c8);
    }
    else {
      iVar4 = *(int *)(lVar12 + 0x5c0);
      local_d8 = *(int **)(lVar12 + 0x5b0);
    }
    uStack_d0 = CONCAT44(iVar4,iVar4 + 0x1fU >> 5);
    if (iVar4 == 0) {
      local_d8 = (int *)((longlong)&uStack_d0 + 4);
    }
    FUN_142a819d4(*(undefined8 *)(param_1 + 0x1e8),&local_78);
  }
  else if (0x1f < local_6c + 0x1fU && (ulonglong)(uint)param_2[1] != 0) {
    memcpy((void *)*param_2,local_78,(ulonglong)(uint)param_2[1] << 2);
  }
  piVar7 = local_78;
  local_118 = lVar12 + 0x160;
  if (DAT_14c75f46d == '\x01') {
    uVar15 = param_2[1];
    if ((ulonglong)(uint)uVar15 != 0) {
      uVar13 = *param_2;
      uVar10 = 0;
      do {
        puVar1 = (uint *)(uVar13 + uVar10 * 4);
        *puVar1 = *puVar1 & ~local_88[uVar10];
        uVar10 = uVar10 + 1;
      } while ((uint)uVar15 != uVar10);
    }
    iVar4 = *(int *)(lVar12 + 0x350);
    lVar5 = *(longlong *)(lVar12 + 0x340);
    uVar14 = iVar4 + 0x1fU >> 5;
    if (iVar4 == 0) {
      lVar5 = (longlong)&uStack_d0 + 4;
    }
    local_4c = *(int *)(lVar12 + 0x5d8);
    local_58 = *(int **)(lVar12 + 0x5c8);
    local_50 = local_4c + 0x1fU >> 5;
    if (local_4c == 0) {
      local_58 = &local_4c;
    }
    if (0x1f < iVar4 + 0x1fU) {
      uVar15 = 0;
      uVar9 = 0;
      do {
        uVar8 = 0xffffffff;
        if (uVar15 == uVar14 - 1) {
          uVar8 = 0xffffffff >> (-(char)iVar4 & 0x1fU);
        }
        uVar8 = uVar8 & *(uint *)(lVar5 + uVar15 * 4) & local_78[uVar15];
        uVar6 = uVar9;
        if (uVar8 != 0) {
          do {
            if ((uVar8 & 1) != 0) {
              uVar17 = 1 << ((byte)uVar6 & 0x1f);
              puVar1 = (uint *)(*param_2 + (ulonglong)(uVar6 >> 5) * 4);
              *puVar1 = *puVar1 | uVar17;
              local_58[uVar6 >> 5] = local_58[uVar6 >> 5] | uVar17;
            }
            bVar3 = 1 < uVar8;
            uVar8 = uVar8 >> 1;
            uVar6 = uVar6 + 1;
          } while (bVar3);
        }
        uVar15 = uVar15 + 1;
        uVar9 = uVar9 + 0x20;
      } while (uVar15 != uVar14);
    }
    if (uVar14 != 0) {
      uVar15 = 0;
      do {
        puVar1 = (uint *)(lVar5 + uVar15 * 4);
        *puVar1 = *puVar1 & ~piVar7[uVar15];
        uVar15 = uVar15 + 1;
      } while (uVar14 != uVar15);
    }
  }
  local_9c = *(int *)(lVar12 + 0x2d8);
  local_a8 = *(int **)(lVar12 + 0x2c8);
  local_a0 = local_9c + 0x1fU >> 5;
  if (local_9c == 0) {
    local_a8 = &local_9c;
  }
  local_ac = *(int *)(lVar12 + 0x5d8);
  local_b8 = *(int **)(lVar12 + 0x5c8);
  local_b0 = local_ac + 0x1fU >> 5;
  if (local_ac == 0) {
    local_b8 = &local_ac;
  }
  local_98 = local_118;
  local_90 = param_2;
  if (DAT_14c999810 == '\x01') {
    local_d8 = (int *)0x0;
    uStack_d0 = 0;
    local_c8 = local_6c;
    FUN_146f2a4d8(&local_d8);
    local_58 = local_d8;
    local_50 = local_c8 + 0x1fU >> 5;
    local_4c = local_c8;
    if (local_c8 == 0) {
      local_58 = &local_4c;
    }
    else if (0x1f < local_c8 + 0x1fU) {
      uVar15 = 0;
      do {
        local_d8[uVar15] = local_78[uVar15] & local_b8[uVar15];
        uVar15 = uVar15 + 1;
      } while (local_50 != uVar15);
    }
  }
  else {
    local_d8 = (int *)0x0;
    uStack_d0 = 0;
    local_c8 = local_6c;
    FUN_146f2a4d8(&local_d8);
    local_58 = local_d8;
    local_50 = local_c8 + 0x1fU >> 5;
    local_4c = local_c8;
    if (local_c8 == 0) {
      local_58 = &local_4c;
    }
    local_5c = *(int *)(lVar12 + 0x5f0);
    local_68 = *(ulonglong **)(lVar12 + 0x5e0);
    local_60 = local_5c + 0x1fU >> 5;
    if (local_5c == 0) {
      local_68 = (ulonglong *)&local_5c;
    }
    if (0x1f < local_c8 + 0x1fU) {
      uVar15 = 0;
      do {
        local_58[uVar15] = *(uint *)((longlong)local_68 + uVar15 * 4) | local_b8[uVar15];
        uVar15 = uVar15 + 1;
      } while (local_50 != uVar15);
      if ((ulonglong)local_50 != 0) {
        uVar15 = 0;
        do {
          local_58[uVar15] = local_58[uVar15] & local_78[uVar15];
          uVar15 = uVar15 + 1;
        } while (local_50 != uVar15);
      }
    }
  }
  FUN_142a881e0(&local_58,&local_a8,&local_98);
  if (local_d8 != (int *)0x0) {
    FUN_1400020a8();
  }
  local_d8 = (int *)0x0;
  uStack_d0 = 0;
  local_c8 = 0;
  FUN_146f2a4d8(&local_d8,*(undefined4 *)((longlong)param_2 + 0xc));
  if (((uStack_d0 & 0xffffffff) != 0) && ((int)param_2[1] != 0)) {
    memcpy(local_d8,(void *)*param_2,(uStack_d0 & 0xffffffff) << 2);
  }
  lVar5 = local_118;
  local_dc = *(int *)(*(longlong *)(param_1 + 0x40) + 0x1a8);
  local_e8 = *(int **)(*(longlong *)(param_1 + 0x40) + 0x198);
  local_e0 = local_dc + 0x1fU >> 5;
  if (local_dc == 0) {
    local_e8 = &local_dc;
  }
  local_128 = lVar12;
  local_110 = local_e8;
  if (local_c8 != 0) {
    local_11c = 0xffffffff >> (-(char)local_c8 & 0x1fU);
    if (0x1f < local_c8 + 0x1fU) {
      uVar14 = local_c8 + 0x1fU >> 5;
      local_f0 = (int *)(ulonglong)(uVar14 - 1);
      local_108 = lVar12 + 0x460;
      local_f8 = (int *)(ulonglong)uVar14;
      piVar11 = (int *)0x0;
      uVar15 = 0;
      local_100 = local_d8;
      piVar7 = local_d8;
      do {
        iVar4 = (int)uVar15;
        uVar14 = 0xffffffff;
        if (piVar11 == local_f0) {
          uVar14 = local_11c;
        }
        uVar14 = uVar14 & piVar7[(longlong)piVar11] & local_110[(longlong)piVar11];
        uVar13 = uVar15;
        if (uVar14 != 0) {
          do {
            uVar9 = (uint)uVar15;
            if (((uVar14 & 1) != 0) &&
               (local_68 = param_2, local_60 = uVar9,
               (*(uint *)(*(longlong *)(lVar12 + 0x2f8) + (uVar15 >> 5) * 4) >> (uVar9 & 0x1f) & 1)
               != 0)) {
              local_138 = CONCAT44(local_138._4_4_,(int)uVar13);
              local_130 = piVar11;
              FUN_146f3d3b0(local_108,&local_58,uVar15);
              piVar7 = local_58;
              lVar12 = (longlong)(int)local_50;
              if (lVar12 != 0) {
                lVar16 = 0;
                do {
                  uVar8 = *(uint *)((longlong)piVar7 + lVar16);
                  puVar1 = (uint *)(*param_2 + (ulonglong)(uVar8 >> 5) * 4);
                  *puVar1 = *puVar1 | 1 << ((byte)uVar8 & 0x1f);
                  FUN_142a8fc48(lVar5,*(undefined4 *)((longlong)piVar7 + lVar16),&local_68);
                  lVar16 = lVar16 + 8;
                } while (lVar12 * 8 != lVar16);
              }
              uVar13 = local_138 & 0xffffffff;
              piVar7 = local_100;
              piVar11 = local_130;
              lVar12 = local_128;
            }
            iVar4 = (int)uVar13;
            uVar15 = (ulonglong)(uVar9 + 1);
            bVar3 = 1 < uVar14;
            uVar14 = uVar14 >> 1;
          } while (bVar3);
        }
        piVar11 = (int *)((longlong)piVar11 + 1);
        uVar15 = (ulonglong)(iVar4 + 0x20);
      } while (piVar11 != local_f8);
    }
  }
  if (local_d8 != (int *)0x0) {
    FUN_1400020a8();
  }
  uVar14 = (uint)param_2[1];
  cVar2 = *(char *)((longlong)param_2 + 0xc);
  if ((ulonglong)uVar14 != 0) {
    local_130 = local_a8;
    local_138 = *param_2;
    local_128 = local_128 + 0x460;
    uVar15 = 0;
    do {
      uVar9 = 0xffffffff;
      if (uVar15 == uVar14 - 1) {
        uVar9 = 0xffffffff >> (-cVar2 & 0x1fU);
      }
      uVar9 = uVar9 & *(uint *)(local_138 + uVar15 * 4) & ~local_130[uVar15];
      if (uVar9 != 0) {
        do {
          if ((uVar9 & 1) != 0) {
            FUN_146f1b984(local_128,&local_d8);
            if ((longlong)(int)uStack_d0 != 0) {
              lVar12 = 0;
              do {
                puVar1 = (uint *)(*param_2 +
                                 (ulonglong)(*(uint *)((longlong)local_d8 + lVar12) >> 5) * 4);
                *puVar1 = *puVar1 | 1 << ((byte)*(uint *)((longlong)local_d8 + lVar12) & 0x1f);
                lVar12 = lVar12 + 4;
              } while ((longlong)(int)uStack_d0 * 4 != lVar12);
            }
          }
          bVar3 = 1 < uVar9;
          uVar9 = uVar9 >> 1;
        } while (bVar3);
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar14);
  }
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a8792e FUN_142a8792e body=711 status=ok
// SIG undefined FUN_142a8792e(void)

void FUN_142a8792e(int **param_1,longlong *param_2)

{
  longlong lVar1;
  code *pcVar2;
  int *piVar3;
  bool bVar4;
  uint uVar5;
  undefined8 uVar6;
  int **ppiVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined1 auStack_4e8 [44];
  uint local_4bc;
  int *local_4b8;
  ulonglong local_4b0;
  longlong local_4a8;
  ulonglong local_4a0;
  int **local_498;
  uint local_490;
  int *local_488;
  uint local_480;
  int local_47c;
  int *local_478;
  ulonglong uStack_470;
  int local_468;
  int **local_460;
  undefined4 local_458;
  int **local_450;
  int *local_448;
  uint local_440;
  int local_43c [253];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_4e8;
  if (param_1[0x22] != (int *)0x0) {
    lVar1 = *(longlong *)(param_1[5] + 10);
    local_478 = (int *)0x0;
    uStack_470 = 0;
    local_468 = 0;
    local_43c[0] = *(int *)(lVar1 + 0x368);
    local_448 = *(int **)(lVar1 + 0x358);
    local_440 = local_43c[0] + 0x1fU >> 5;
    if (local_43c[0] == 0) {
      local_448 = local_43c;
    }
    FUN_146f2a4d8(&local_478);
    if (((uStack_470 & 0xffffffff) != 0) && (local_440 != 0)) {
      memcpy(local_478,local_448,(uStack_470 & 0xffffffff) << 2);
    }
    local_488 = local_478;
    local_480 = local_468 + 0x1fU >> 5;
    local_47c = local_468;
    if (local_468 == 0) {
      local_488 = &local_47c;
    }
    uVar11 = *(uint *)(param_2 + 1);
    iVar9 = 0;
    local_4bc = 0xffffffff >> (-*(char *)((longlong)param_2 + 0xc) & 0x1fU);
    local_4b8 = local_488;
    if ((ulonglong)uVar11 != 0) {
      local_4a8 = *param_2;
      local_4b0 = (ulonglong)(uVar11 - 1);
      uVar10 = 0;
      uVar5 = 0;
      local_4a0 = (ulonglong)uVar11;
      do {
        uVar11 = 0xffffffff;
        if (uVar10 == local_4b0) {
          uVar11 = local_4bc;
        }
        uVar11 = uVar11 & *(uint *)(local_4a8 + uVar10 * 4) & local_4b8[uVar10];
        iVar8 = iVar9;
        if (uVar11 != 0) {
          do {
            if ((uVar11 & 1) != 0) {
              if (uVar5 == 0x80) {
                local_460 = &local_448;
                local_458 = 0x80;
                pcVar2 = (code *)param_1[0x22];
                ppiVar7 = (int **)param_1[0x24];
                if ((int **)param_1[0x24] == (int **)0x0) {
                  ppiVar7 = param_1 + 0x26;
                }
                local_450 = param_1;
                uVar6 = (**(code **)(*ppiVar7 + 2))();
                (*pcVar2)(uVar6,&local_460,&local_450);
                uVar5 = 0;
              }
              piVar3 = *(int **)(*(longlong *)
                                  (*(longlong *)(lVar1 + 0x430) + (longlong)(iVar8 / 100) * 8) +
                                (longlong)(iVar8 % 100) * 8);
              (&local_448)[uVar5] = piVar3;
              uVar5 = (uVar5 + 1) - (uint)(piVar3 == (int *)0x0);
            }
            bVar4 = 1 < uVar11;
            uVar11 = uVar11 >> 1;
            iVar8 = iVar8 + 1;
          } while (bVar4);
        }
        uVar10 = uVar10 + 1;
        iVar9 = iVar9 + 0x20;
      } while (uVar10 != local_4a0);
      if (uVar5 != 0) {
        local_498 = &local_448;
        pcVar2 = (code *)param_1[0x22];
        ppiVar7 = param_1 + 0x26;
        if ((int **)param_1[0x24] != (int **)0x0) {
          ppiVar7 = (int **)param_1[0x24];
        }
        local_490 = uVar5;
        local_460 = param_1;
        uVar6 = (**(code **)(*ppiVar7 + 2))(ppiVar7);
        (*pcVar2)(uVar6,&local_498,&local_460);
      }
    }
    if (local_478 != (int *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_4e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a87bf6 FUN_142a87bf6 body=828 status=ok
// SIG undefined FUN_142a87bf6(void)

void FUN_142a87bf6(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_108 [44];
  uint local_dc;
  uint local_d8;
  uint local_d4;
  int *local_d0;
  int *local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  longlong *local_a0;
  ulonglong local_98;
  longlong local_90;
  int *local_88;
  uint local_80;
  int local_7c;
  int *local_78;
  uint local_70;
  int local_6c;
  int *local_68;
  uint local_60;
  int local_5c;
  int *local_58;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x28);
  local_5c = *(int *)(lVar3 + 0x2d8);
  local_68 = *(int **)(lVar3 + 0x2c8);
  local_60 = local_5c + 0x1fU >> 5;
  if (local_5c == 0) {
    local_68 = &local_5c;
  }
  local_6c = *(int *)(lVar3 + 0x228);
  local_78 = *(int **)(lVar3 + 0x218);
  local_70 = local_6c + 0x1fU >> 5;
  if (local_6c == 0) {
    local_78 = &local_6c;
  }
  local_7c = *(int *)(lVar3 + 0x248);
  local_88 = *(int **)(lVar3 + 0x238);
  local_80 = local_7c + 0x1fU >> 5;
  if (local_7c == 0) {
    local_88 = &local_7c;
  }
  local_d8 = 0xffffffff >> (-(char)local_6c & 0x1fU);
  if (0x1f < local_6c + 0x1fU) {
    local_b0 = (ulonglong)(local_70 - 1);
    local_dc = 0;
    uVar9 = 0;
    do {
      local_a8 = uVar9;
      uVar10 = 0xffffffff;
      if (local_a8 == local_b0) {
        uVar10 = local_d8;
      }
      uVar10 = uVar10 & local_78[local_a8] & ~local_88[local_a8];
      uVar5 = local_dc;
      if (uVar10 != 0) {
        do {
          if ((uVar10 & 1) != 0) {
            uVar11 = 1 << ((byte)uVar5 & 0x1f);
            uVar9 = (ulonglong)(uVar5 >> 5);
            if ((uVar5 != 0 && ((uint)local_68[uVar9] >> (uVar5 & 0x1f) & 1) != 0) &&
               (uVar2 = *(uint *)(*(longlong *)
                                   (*(longlong *)(lVar3 + 0x3d0) + (longlong)((int)uVar5 / 100) * 8)
                                  + 0x28 + (longlong)((int)uVar5 % 100) * 0x38), uVar2 != 0)) {
              puVar1 = (uint *)(*param_2 + uVar9 * 4);
              *puVar1 = *puVar1 | uVar11;
              local_c0 = (ulonglong)*(uint *)(lVar3 + 0x870);
              local_d4 = 0xffffffff >> (-*(char *)(lVar3 + 0x878) & 0x1fU);
              if (local_c0 != 0) {
                local_90 = *(longlong *)(lVar3 + 0x868);
                local_98 = (ulonglong)(*(uint *)(lVar3 + 0x870) - 1);
                uVar6 = 0;
                iVar8 = 0;
                do {
                  uVar12 = 0xffffffff;
                  if (uVar6 == local_98) {
                    uVar12 = local_d4;
                  }
                  uVar12 = uVar12 & *(uint *)(local_90 + uVar6 * 4);
                  iVar7 = iVar8;
                  if (uVar12 != 0) {
                    do {
                      if ((uVar12 & 1) != 0) {
                        local_4c = *(int *)(*(longlong *)(lVar3 + 0x8b0) + 0x70 +
                                           (longlong)iVar7 * 0x160);
                        local_50 = local_4c + 0x1fU >> 5;
                        local_58 = *(int **)(*(longlong *)(lVar3 + 0x8b0) + 0x60 +
                                            (longlong)iVar7 * 0x160);
                        if (local_4c == 0) {
                          local_58 = &local_4c;
                        }
                        if ((local_58[uVar2 >> 5] & 1 << ((byte)uVar2 & 0x1f)) != 0) {
                          local_58[uVar9] = local_58[uVar9] | uVar11;
                        }
                      }
                      bVar4 = 1 < uVar12;
                      uVar12 = uVar12 >> 1;
                      iVar7 = iVar7 + 1;
                    } while (bVar4);
                  }
                  uVar6 = uVar6 + 1;
                  iVar8 = iVar8 + 0x20;
                } while (uVar6 != local_c0);
              }
            }
          }
          bVar4 = 1 < uVar10;
          uVar10 = uVar10 >> 1;
          uVar5 = uVar5 + 1;
        } while (bVar4);
      }
      local_dc = local_dc + 0x20;
      uVar9 = local_a8 + 1;
      local_b8 = (ulonglong)local_70;
    } while (local_a8 + 1 != (ulonglong)local_70);
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
    local_d0 = local_88;
    local_c8 = local_78;
    local_a0 = param_2;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a87f34 FUN_142a87f34 body=682 status=ok
// SIG undefined FUN_142a87f34(void)

void FUN_142a87f34(longlong param_1)

{
  void *_Src;
  longlong lVar1;
  bool bVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined1 auStack_b8 [36];
  uint local_94;
  longlong local_90;
  longlong local_88;
  int *local_80;
  ulonglong local_78;
  ulonglong local_70;
  int *local_68;
  uint local_60;
  int local_5c;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar14 = *(int *)(param_1 + 0x548);
  _Src = *(void **)(param_1 + 0x540);
  *(int *)(param_1 + 0x560) = iVar14;
  if (iVar14 == 0 && *(int *)(param_1 + 0x564) == 0) {
    *(undefined4 *)(param_1 + 0x564) = 0;
  }
  else {
    FUN_1447bda9e((undefined8 *)(param_1 + 0x558),iVar14);
    if (iVar14 != 0) {
      memcpy(*(void **)(param_1 + 0x558),_Src,(longlong)iVar14 << 2);
    }
  }
  *(undefined4 *)(param_1 + 0x568) = *(undefined4 *)(param_1 + 0x550);
  lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x28);
  local_58 = 0;
  uStack_50 = 0;
  local_5c = *(int *)(lVar10 + 800);
  piVar11 = *(int **)(lVar10 + 0x310);
  local_60 = local_5c + 0x1fU >> 5;
  if (local_5c == 0) {
    piVar11 = &local_5c;
  }
  iVar14 = *(int *)(lVar10 + 0x2c0);
  local_68 = piVar11;
  if (iVar14 != 0) {
    uVar12 = 0xffffffff >> (-(char)iVar14 & 0x1fU);
    if (0x1f < iVar14 + 0x1fU) {
      lVar7 = *(longlong *)(lVar10 + 0x2b0);
      uVar4 = iVar14 + 0x1fU >> 5;
      local_70 = (ulonglong)(uVar4 - 1);
      local_78 = (ulonglong)uVar4;
      uVar9 = 0;
      iVar14 = 0;
      local_94 = uVar12;
      local_90 = param_1;
      local_88 = lVar7;
      local_80 = piVar11;
      do {
        uVar4 = 0xffffffff;
        if (uVar9 == local_70) {
          uVar4 = uVar12;
        }
        uVar4 = uVar4 & *(uint *)(lVar7 + uVar9 * 4) & ~piVar11[uVar9];
        iVar13 = iVar14;
        if (uVar4 != 0) {
          do {
            uVar3 = uStack_50;
            if ((uVar4 & 1) != 0) {
              lVar1 = *(longlong *)
                       (*(longlong *)(*(longlong *)(lVar10 + 0x430) + (longlong)(iVar13 / 100) * 8)
                       + (longlong)(iVar13 % 100) * 8);
              if ((lVar1 == 0) || ((*(uint *)(lVar1 + 8) >> 0x1e & 1) != 0)) {
                lVar1 = *(longlong *)(*(longlong *)(lVar10 + 0x3d0) + (longlong)(iVar13 / 100) * 8);
                lVar8 = (ulonglong)(uint)(iVar13 % 100) * 0x38;
                lVar6 = *(longlong *)(lVar1 + 0x18 + lVar8);
                if ((lVar6 != 0) && ((*(byte *)(lVar6 + 0x12) & 4) == 0)) {
                  lVar6 = (longlong)(int)uStack_50;
                  uVar5 = (int)uStack_50 + 1;
                  uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
                  if (uStack_50._4_4_ < uVar5) {
                    FUN_146f2ac26(&local_58,uVar3 & 0xffffffff);
                    piVar11 = local_80;
                    lVar7 = local_88;
                    uVar12 = local_94;
                  }
                  *(undefined8 *)(local_58 + lVar6 * 8) = *(undefined8 *)(lVar1 + lVar8);
                }
              }
            }
            bVar2 = 1 < uVar4;
            uVar4 = uVar4 >> 1;
            iVar13 = iVar13 + 1;
          } while (bVar2);
        }
        lVar6 = local_58;
        lVar1 = local_90;
        uVar9 = uVar9 + 1;
        iVar14 = iVar14 + 0x20;
      } while (uVar9 != local_78);
      lVar10 = (longlong)(int)uStack_50;
      if (lVar10 != 0) {
        lVar7 = 0;
        do {
          FUN_142a86902(lVar1,*(undefined8 *)(lVar6 + lVar7),1);
          lVar7 = lVar7 + 8;
        } while (lVar10 * 8 != lVar7);
      }
      *(bool *)(lVar1 + 0x599) = *(int *)(lVar1 + 0x224) < *(int *)(lVar1 + 0x1f8);
      if (local_58 != 0) {
        FUN_1400020a8(local_58);
      }
      goto LAB_142a881b7;
    }
  }
  *(bool *)(param_1 + 0x599) = *(int *)(param_1 + 0x224) < *(int *)(param_1 + 0x1f8);
LAB_142a881b7:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a881e0 FUN_142a881e0 body=211 status=ok
// SIG undefined FUN_142a881e0(void)

void FUN_142a881e0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  
  uVar3 = *(uint *)(param_1 + 1);
  iVar11 = 0;
  cVar2 = *(char *)((longlong)param_1 + 0xc);
  if ((ulonglong)uVar3 != 0) {
    lVar5 = *param_2;
    lVar6 = *param_1;
    uVar10 = 0;
    do {
      uVar8 = 0xffffffff;
      if (uVar10 == uVar3 - 1) {
        uVar8 = 0xffffffff >> (-cVar2 & 0x1fU);
      }
      uVar8 = uVar8 & *(uint *)(lVar6 + uVar10 * 4) & *(uint *)(lVar5 + uVar10 * 4);
      iVar9 = iVar11;
      if (uVar8 != 0) {
        do {
          if ((uVar8 & 1) != 0) {
            uVar4 = *(uint *)(*(longlong *)
                               (*(longlong *)(*param_3 + 0x270) + (longlong)(iVar9 / 100) * 8) +
                              0x28 + (longlong)(iVar9 % 100) * 0x38);
            puVar1 = (uint *)(*(longlong *)param_3[1] + (ulonglong)(uVar4 >> 5) * 4);
            *puVar1 = *puVar1 | 1 << ((byte)uVar4 & 0x1f);
          }
          bVar7 = 1 < uVar8;
          uVar8 = uVar8 >> 1;
          iVar9 = iVar9 + 1;
        } while (bVar7);
      }
      uVar10 = uVar10 + 1;
      iVar11 = iVar11 + 0x20;
    } while (uVar10 != uVar3);
  }
  return;
}



// FUNCTION 142a882b4 FUN_142a882b4 body=373 status=ok
// SIG undefined FUN_142a882b4(void)

void FUN_142a882b4(longlong param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  int *local_58;
  uint local_50;
  int local_4c;
  int *local_48;
  uint local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x28);
  uVar2 = FUN_146f18900(lVar4 + 0x160);
  if (uVar2 != 0) {
    uVar3 = uVar2 >> 5;
    uVar2 = 1 << ((byte)uVar2 & 0x1f);
    local_3c = *(int *)(lVar4 + 0x338);
    local_48 = *(int **)(lVar4 + 0x328);
    local_40 = local_3c + 0x1fU >> 5;
    if (local_3c == 0) {
      local_48 = &local_3c;
    }
    uVar1 = 0;
    if ((char)param_3 != '\0') {
      uVar1 = uVar2;
    }
    uVar2 = ~uVar2;
    local_48[uVar3] = local_48[uVar3] & uVar2 | uVar1;
    local_4c = *(int *)(lVar4 + 0x350);
    local_58 = *(int **)(lVar4 + 0x340);
    local_50 = local_4c + 0x1fU >> 5;
    if (local_4c == 0) {
      local_58 = &local_4c;
    }
    local_58[uVar3] = uVar2 & local_58[uVar3] | uVar1;
    FUN_146f1b984(lVar4 + 0x460,&local_58);
    if ((longlong)(int)local_50 != 0) {
      lVar4 = 0;
      do {
        uVar2 = *(uint *)((longlong)local_58 + lVar4);
        uVar3 = 1 << ((byte)uVar2 & 0x1f);
        if ((char)param_3 == '\0') {
          uVar3 = 0;
        }
        local_48[uVar2 >> 5] = local_48[uVar2 >> 5] & ~(1 << (uVar2 & 0x1f)) | uVar3;
        lVar4 = lVar4 + 4;
      } while ((longlong)(int)local_50 * 4 != lVar4);
    }
    FUN_146f3479c(param_1,param_2,param_3 ^ 1);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a8842a FUN_142a8842a body=162 status=ok
// SIG undefined FUN_142a8842a(void)

void FUN_142a8842a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined1 auStack_58 [40];
  int *local_30;
  uint local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x28);
  uVar2 = FUN_146f18900(lVar1 + 0x160);
  if (uVar2 != 0) {
    local_24 = *(int *)(lVar1 + 0x350);
    local_30 = *(int **)(lVar1 + 0x340);
    local_28 = local_24 + 0x1fU >> 5;
    if (local_24 == 0) {
      local_30 = &local_24;
    }
    local_30[uVar2 >> 5] = local_30[uVar2 >> 5] | 1 << ((byte)uVar2 & 0x1f);
    FUN_146f46302(*(undefined8 *)(param_1 + 0x28),param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a884ce FUN_142a884ce body=98 status=ok
// SIG undefined FUN_142a884ce(void)

void FUN_142a884ce(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f18900(*(undefined8 *)(param_1 + 0x40));
  if (iVar1 != 0) {
    if (*(longlong *)
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x2d0) + (longlong)(iVar1 / 100) * 8) +
         (longlong)(iVar1 % 100) * 8) != 0) {
      FUN_144938c96();
      return;
    }
  }
  return;
}



// FUNCTION 142a8853c FUN_142a8853c body=155 status=ok
// SIG undefined FUN_142a8853c(void)

void FUN_142a8853c(longlong *param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = (longlong)(int)((longlong *)param_1[1])[1];
  if (lVar4 != 0) {
    lVar1 = *param_1;
    lVar2 = *(longlong *)param_1[1];
    lVar3 = 0;
    do {
      *(int *)(param_1 + 10) = (int)param_1[10] + 1;
      if ((param_2 != '\0') &&
         (FUN_146f1b984(lVar1 + 0x300,local_50,*(undefined4 *)(lVar2 + lVar3)), local_48 != 0)) {
        *(int *)((longlong)param_1 + 0x54) = *(int *)((longlong)param_1 + 0x54) + local_48;
      }
      lVar3 = lVar3 + 0x20;
    } while (lVar4 * 0x20 != lVar3);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a885d8 FUN_142a885d8 body=69 status=ok
// SIG undefined FUN_142a885d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a885d8(void)

{
  _DAT_14c999848 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a8861a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c999850,1);
  return;
}



// FUNCTION 142a8861d FUN_142a8861d body=69 status=ok
// SIG undefined FUN_142a8861d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a8861d(void)

{
  _DAT_14c999858 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a8865f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c999860,1);
  return;
}



// FUNCTION 142a88662 FUN_142a88662 body=69 status=ok
// SIG undefined FUN_142a88662(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a88662(void)

{
  _DAT_14c999868 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a886a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c999870,1);
  return;
}



// FUNCTION 142a886a7 FUN_142a886a7 body=69 status=ok
// SIG undefined FUN_142a886a7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a886a7(void)

{
  _DAT_14c999878 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a886e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c999880,1);
  return;
}



// FUNCTION 142a886ec FUN_142a886ec body=69 status=ok
// SIG undefined FUN_142a886ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a886ec(void)

{
  _DAT_14c999888 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a8872e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c999890,1);
  return;
}



// FUNCTION 142a88731 FUN_142a88731 body=69 status=ok
// SIG undefined FUN_142a88731(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a88731(void)

{
  _DAT_14c999898 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a88773. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9998a0,1);
  return;
}



// FUNCTION 142a88776 FUN_142a88776 body=69 status=ok
// SIG undefined FUN_142a88776(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a88776(void)

{
  _DAT_14c9998a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a887b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9998b0,1);
  return;
}



// FUNCTION 142a887bc FUN_142a887bc body=298 status=ok
// SIG undefined FUN_142a887bc(void)

void FUN_142a887bc(longlong param_1,uint param_2)

{
  byte *pbVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  byte bVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  byte bVar13;
  ulonglong uVar14;
  
  lVar8 = *(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x270) +
           (longlong)((int)param_2 / 100) * 8);
  lVar9 = (ulonglong)(uint)((int)param_2 % 100) * 0x38;
  lVar5 = *(longlong *)(lVar8 + 0x18 + lVar9);
  if (lVar5 != 0) {
    lVar8 = lVar8 + lVar9;
    pbVar1 = (byte *)(lVar8 + 0x32);
    *pbVar1 = *pbVar1 & 0x7f;
    uVar11 = 1 << (sbyte)(param_2 & 0x1f);
    uVar10 = param_2 >> 5;
    if ((*(byte *)(lVar5 + 0x12) & 1) == 0) {
      puVar2 = (uint *)(*(longlong *)(param_1 + 0x38) + (ulonglong)(uVar10 << 2));
      *puVar2 = *puVar2 | uVar11;
      puVar2 = (uint *)(*(longlong *)(param_1 + 0x48) + (ulonglong)(uVar10 << 2));
      *puVar2 = *puVar2 | uVar11;
    }
    else {
      uVar12 = (ulonglong)(uVar10 * 4);
      uVar3 = *(uint *)(*(longlong *)(param_1 + 0x58) + uVar12);
      *(uint *)(*(longlong *)(param_1 + 0x58) + uVar12) = ~uVar11 & uVar3;
      bVar13 = 0;
      uVar4 = *(uint *)(*(longlong *)(param_1 + 0x48) + uVar12);
      lVar8 = *(longlong *)(lVar8 + 0x18);
      uVar12 = (ulonglong)*(ushort *)(lVar8 + 0x10);
      if (uVar12 != 0) {
        lVar8 = *(longlong *)(lVar8 + 8);
        uVar14 = 0;
        bVar13 = 0;
        do {
          plVar6 = *(longlong **)(lVar8 + uVar14 * 8);
          if ((*(byte *)(plVar6 + 1) & 0x80) != 0) {
            bVar7 = (**(code **)(*plVar6 + 0x20))
                              (plVar6,((uVar3 >> (param_2 & 0x1f) & 1) != 0) + '\x02');
            bVar13 = bVar13 | bVar7;
          }
          uVar14 = uVar14 + 1;
        } while (uVar12 != uVar14);
      }
      if (((uVar4 & uVar11) != 0) || ((bVar13 & 1) != 0)) {
        puVar2 = (uint *)(*(longlong *)(param_1 + 0x38) + (ulonglong)(uVar10 << 2));
        *puVar2 = *puVar2 | uVar11;
        puVar2 = (uint *)(*(longlong *)(param_1 + 0x48) + (ulonglong)(uVar10 << 2));
        *puVar2 = *puVar2 | uVar11;
      }
      *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
    }
  }
  return;
}



// FUNCTION 142a888e6 FUN_142a888e6 body=720 status=ok
// SIG undefined FUN_142a888e6(void)

void FUN_142a888e6(longlong param_1,uint param_2)

{
  uint *puVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  byte bVar8;
  byte bVar9;
  char cVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  byte bVar16;
  
  lVar12 = *(longlong *)
            (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x270) +
            (longlong)((int)param_2 / 100) * 8);
  lVar13 = (ulonglong)(uint)((int)param_2 % 100) * 0x38;
  lVar5 = *(longlong *)(lVar12 + 0x18 + lVar13);
  if (lVar5 != 0) {
    uVar2 = *(ushort *)(lVar5 + 0x12);
    uVar11 = 1 << ((byte)param_2 & 0x1f);
    uVar15 = param_2 >> 5;
    uVar14 = (ulonglong)uVar15;
    if (((*(uint *)(*(longlong *)(param_1 + 0x28) + uVar14 * 4) >> (param_2 & 0x1f) & 1) == 0) &&
       ((*(uint *)(*(longlong *)(param_1 + 0x48) + uVar14 * 4) & uVar11) == 0)) {
      bVar7 = false;
    }
    else {
      puVar1 = (uint *)(*(longlong *)(param_1 + 0x38) + (ulonglong)(uVar15 * 4));
      *puVar1 = *puVar1 | uVar11;
      puVar1 = (uint *)(*(longlong *)(param_1 + 0x48) + (ulonglong)(uVar15 * 4));
      *puVar1 = *puVar1 | uVar11;
      bVar7 = true;
    }
    uVar4 = *(uint *)(*(longlong *)(param_1 + 0x58) + uVar14 * 4);
    *(uint *)(*(longlong *)(param_1 + 0x58) + uVar14 * 4) = ~uVar11 & uVar4;
    if ((uVar2 & 1) != 0) {
      lVar12 = lVar12 + lVar13;
      uVar3 = *(ushort *)(lVar12 + 0x32);
      cVar10 = (char)uVar3;
      *(ushort *)(lVar12 + 0x32) = uVar3 & 0xff7f;
      if ((uVar2 & 0x40) == 0) {
        bVar16 = 0;
        if ((((~uVar2 & 0xa0) == 0) && (bVar16 = 0, (uVar4 & uVar11) != 0)) &&
           (-1 < cVar10 && !bVar7)) {
          uVar2 = *(ushort *)(lVar5 + 0x10);
          if ((ulonglong)uVar2 == 0) {
            bVar16 = 0;
          }
          else {
            lVar12 = *(longlong *)(lVar5 + 8);
            uVar14 = 0;
            bVar16 = 0;
            do {
              plVar6 = *(longlong **)(lVar12 + uVar14 * 8);
              if ((~*(uint *)(plVar6 + 1) & 0x2800) == 0) {
                bVar8 = (**(code **)(*plVar6 + 0x20))(plVar6,1);
                bVar16 = bVar16 | bVar8;
              }
              uVar14 = uVar14 + 1;
            } while (uVar2 != uVar14);
          }
          *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
        }
        uVar2 = *(ushort *)(lVar5 + 0x10);
        if ((ulonglong)uVar2 == 0) {
          bVar8 = 0;
        }
        else {
          lVar12 = *(longlong *)(lVar5 + 8);
          uVar14 = 0;
          bVar8 = 0;
          do {
            plVar6 = *(longlong **)(lVar12 + uVar14 * 8);
            if ((*(uint *)(plVar6 + 1) & ((uint)(byte)(~bVar7 & -1 < cVar10) << 0xb | 0x80)) == 0x80
               ) {
              bVar9 = (**(code **)(*plVar6 + 0x20))(plVar6,3 - (uint)((uVar4 & uVar11) == 0));
              bVar8 = bVar8 | bVar9;
            }
            uVar14 = uVar14 + 1;
          } while (uVar2 != uVar14);
        }
        bVar16 = bVar16 | bVar8;
        *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
      }
      else if ((bool)(cVar10 < '\0' | bVar7)) {
        uVar2 = *(ushort *)(lVar5 + 0x10);
        if ((ulonglong)uVar2 == 0) {
          bVar16 = 0;
        }
        else {
          lVar12 = *(longlong *)(lVar5 + 8);
          uVar14 = 0;
          bVar16 = 0;
          do {
            plVar6 = *(longlong **)(lVar12 + uVar14 * 8);
            if ((*(byte *)(plVar6 + 1) & 0x80) != 0) {
              bVar8 = (**(code **)(*plVar6 + 0x20))(plVar6,3 - (uint)((uVar4 & uVar11) == 0));
              bVar16 = bVar16 | bVar8;
            }
            uVar14 = uVar14 + 1;
          } while (uVar2 != uVar14);
        }
        *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
      }
      else if ((uVar4 & uVar11) == 0) {
        bVar16 = 0;
      }
      else {
        uVar2 = *(ushort *)(lVar5 + 0x10);
        if ((ulonglong)uVar2 == 0) {
          bVar16 = 0;
        }
        else {
          lVar12 = *(longlong *)(lVar5 + 8);
          uVar14 = 0;
          bVar16 = 0;
          do {
            plVar6 = *(longlong **)(lVar12 + uVar14 * 8);
            if ((~*(uint *)(plVar6 + 1) & 0x2800) == 0) {
              bVar8 = (**(code **)(*plVar6 + 0x20))(plVar6,1);
              bVar16 = bVar16 | bVar8;
            }
            uVar14 = uVar14 + 1;
          } while (uVar2 != uVar14);
        }
        *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
      }
      if (bVar7 != false || (bVar16 & 1) != 0) {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x38) + (ulonglong)(uVar15 << 2));
        *puVar1 = *puVar1 | uVar11;
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x48) + (ulonglong)(uVar15 << 2));
        *puVar1 = *puVar1 | uVar11;
      }
    }
  }
  return;
}



// FUNCTION 142a88bb6 FUN_142a88bb6 body=3048 status=ok
// SIG undefined FUN_142a88bb6(void)

void FUN_142a88bb6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  ulonglong uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  longlong *plVar38;
  DWORD DVar39;
  DWORD dwTlsIndex;
  DWORD DVar40;
  LPVOID lpTlsValue;
  undefined1 *puVar41;
  longlong lVar42;
  int iVar43;
  int iVar44;
  undefined1 *puVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  ulonglong uVar49;
  longlong lVar50;
  undefined1 (*pauVar51) [16];
  longlong lVar52;
  longlong lVar53;
  bool bVar54;
  double dVar55;
  double dVar59;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  double dVar60;
  double dVar61;
  double dVar63;
  double dVar64;
  double dVar65;
  undefined1 auVar62 [16];
  double dVar66;
  undefined1 auVar67 [16];
  double dVar68;
  undefined1 auVar69 [16];
  double dVar70;
  double dVar71;
  double dVar72;
  double dVar73;
  double dVar74;
  double dVar79;
  double dVar80;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined4 uVar86;
  undefined1 auStack_ae8 [32];
  undefined8 *local_ac8;
  longlong local_ac0;
  longlong *local_ab8;
  uint local_ab0;
  uint local_aac;
  double local_aa8;
  double dStack_aa0;
  double local_a98;
  double dStack_a90;
  double local_a88;
  double dStack_a80;
  double local_a78;
  double dStack_a70;
  double local_a68;
  double dStack_a60;
  double local_a58;
  double dStack_a50;
  double local_a48;
  double dStack_a40;
  ulonglong local_a38;
  ulonglong uStack_a30;
  ulonglong local_a28;
  ulonglong uStack_a20;
  double local_a18;
  double dStack_a10;
  double local_a08;
  double dStack_a00;
  ulonglong local_9f8;
  ulonglong uStack_9f0;
  ulonglong local_9e8;
  ulonglong uStack_9e0;
  double local_9d8;
  double dStack_9d0;
  double local_9c8;
  double dStack_9c0;
  ulonglong local_9b8;
  ulonglong uStack_9b0;
  ulonglong local_9a8;
  ulonglong uStack_9a0;
  double local_998;
  double dStack_990;
  double local_988;
  double dStack_980;
  double local_978;
  double dStack_970;
  double local_968;
  double dStack_960;
  double local_958;
  double dStack_950;
  double local_948;
  double dStack_940;
  double local_938;
  double dStack_930;
  double local_928;
  double dStack_920;
  double local_918;
  double dStack_910;
  double local_908;
  double dStack_900;
  double local_8f8;
  double dStack_8f0;
  double local_8e8;
  double dStack_8e0;
  double local_8d8;
  double dStack_8d0;
  double local_8c8;
  double dStack_8c0;
  double local_8b8;
  double dStack_8b0;
  undefined1 local_8a8 [16];
  undefined8 *local_890;
  undefined8 local_888;
  longlong local_880;
  char local_878;
  undefined8 local_870;
  double local_868;
  double dStack_860;
  double local_858;
  double dStack_850;
  double local_848;
  double dStack_840;
  double local_838;
  double dStack_830;
  double local_808;
  double dStack_800;
  double local_7f8;
  double dStack_7f0;
  double local_7e8;
  double dStack_7e0;
  double local_7d8;
  double dStack_7d0;
  double local_7c8;
  double dStack_7c0;
  double local_7b8;
  double dStack_7b0;
  double local_788;
  double dStack_780;
  double local_778;
  double dStack_770;
  double local_768;
  double dStack_760;
  double local_758;
  double dStack_750;
  double local_748;
  double dStack_740;
  double local_738;
  double dStack_730;
  ulonglong local_728;
  ulonglong uStack_720;
  ulonglong local_718;
  ulonglong uStack_710;
  ulonglong local_708;
  ulonglong uStack_700;
  ulonglong local_6f8;
  ulonglong uStack_6f0;
  double local_6e8;
  double dStack_6e0;
  double local_6d8;
  double dStack_6d0;
  ulonglong local_6c8;
  ulonglong uStack_6c0;
  ulonglong local_6b8;
  ulonglong uStack_6b0;
  undefined1 local_6a8 [16];
  undefined1 local_698 [16];
  undefined1 local_688 [288];
  undefined1 *local_568;
  undefined8 local_560;
  uint local_554;
  undefined1 (*local_550) [16];
  longlong local_548;
  undefined1 local_538 [512];
  undefined1 *local_338;
  undefined8 local_328;
  undefined1 local_318 [512];
  undefined1 *local_118;
  undefined8 local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_ae8;
  dwTlsIndex = DAT_14c7585d0;
  local_ac0 = param_1;
  local_ab8 = param_2;
  if (DAT_14c7585d0 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar40 = 0xffffffff;
    LOCK();
    bVar54 = DAT_14c7585d0 != 0xffffffff;
    DVar39 = dwTlsIndex;
    if (bVar54) {
      DVar40 = DAT_14c7585d0;
      DVar39 = DAT_14c7585d0;
    }
    DAT_14c7585d0 = DVar39;
    UNLOCK();
    if (bVar54) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar40;
    }
  }
  lVar42 = local_ac0;
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_140036a08(&local_868);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  plVar38 = local_ab8;
  local_ac8 = (undefined8 *)((longlong)lpTlsValue + 0x10);
  local_888 = *(undefined8 *)((longlong)lpTlsValue + 0x10);
  local_880 = *(longlong *)((longlong)lpTlsValue + 0x20);
  local_878 = '\0';
  local_870 = *(undefined8 *)((longlong)lpTlsValue + 0x28);
  *(undefined8 ***)((longlong)lpTlsValue + 0x28) = &local_890;
  *(int *)((longlong)lpTlsValue + 0x30) = *(int *)((longlong)lpTlsValue + 0x30) + 1;
  uVar47 = (int)local_ab8[1] + 3U & 0xfffffffc;
  if (0x3ff < uVar47) {
    uVar47 = 0x400;
  }
  local_568 = (undefined1 *)0x0;
  local_560 = 0x400000000;
  local_890 = local_ac8;
  FUN_146f37456(lVar42,&local_868,local_ab8,uVar47);
  if (*(uint *)(plVar38 + 1) != 0) {
    uVar47 = 0;
    local_ab0 = *(uint *)(plVar38 + 1);
    do {
      local_aac = local_ab0 - uVar47;
      if (0x3ff < local_aac) {
        local_aac = 0x400;
      }
      local_554 = local_aac;
      uVar46 = 0;
      uVar48 = local_ab0 - uVar47;
      if (uVar48 != 0) {
        lVar42 = *local_ab8;
        lVar52 = local_ab8[2];
        lVar53 = local_ab8[3];
        if (0x3ff < uVar48) {
          uVar48 = 0x400;
        }
        lVar50 = 0;
        do {
          *(undefined4 *)(local_548 + lVar50 * 4) =
               *(undefined4 *)
                (lVar52 + (ulonglong)*(uint *)(lVar42 + (ulonglong)(uVar47 + (int)lVar50) * 4) * 4);
          lVar50 = lVar50 + 1;
        } while (uVar48 != (uint)lVar50);
        uVar46 = 0;
        pauVar51 = local_550;
        if (local_aac != 0) {
          do {
            iVar43 = *(int *)(lVar53 + 4 +
                             (ulonglong)*(uint *)(lVar42 + (ulonglong)(uVar46 + uVar47) * 4) * 8);
            iVar44 = iVar43 + 0x7ff;
            if (-1 < iVar43) {
              iVar44 = iVar43;
            }
            lVar52 = *(longlong *)(*(longlong *)(local_ac0 + 0x28) + (longlong)(iVar44 >> 0xb) * 8);
            lVar50 = (longlong)(iVar43 % 0x800) * 0x20;
            auVar67 = *(undefined1 (*) [16])(lVar52 + lVar50);
            puVar1 = (undefined8 *)(lVar52 + 0x10 + lVar50);
            uVar3 = puVar1[1];
            *(undefined8 *)pauVar51[1] = *puVar1;
            *(undefined8 *)(pauVar51[1] + 8) = uVar3;
            *pauVar51 = auVar67;
            uVar46 = uVar46 + 1;
            pauVar51 = pauVar51 + 2;
          } while (local_aac != uVar46);
        }
      }
      for (iVar43 = uVar47 - (uVar47 + 3 & 0xfffffffc); iVar43 != 0; iVar43 = iVar43 + 1) {
        uVar49 = (ulonglong)uVar46;
        *(undefined4 *)(local_548 + uVar49 * 4) = 0;
        uVar46 = uVar46 + 1;
        *(undefined8 *)local_550[uVar49 * 2 + 1] = 0;
        *(undefined8 *)(local_550[uVar49 * 2 + 1] + 8) = 0;
        *(undefined8 *)local_550[uVar49 * 2] = 0;
        *(undefined8 *)(local_550[uVar49 * 2] + 8) = 0;
      }
      local_118 = (undefined1 *)0x0;
      local_108 = 0x1000000000;
      local_338 = (undefined1 *)0x0;
      local_328 = 0x1000000000;
      puVar45 = local_568;
      if (local_568 == (undefined1 *)0x0) {
        puVar45 = local_688;
      }
      lVar42 = (longlong)(int)(uint)local_560;
      uVar46 = 0;
      if (lVar42 != 0) {
        lVar52 = 0;
        do {
          uVar49 = local_108;
          uVar34 = *(undefined8 *)(puVar45 + lVar52 + 0x10);
          uVar35 = *(undefined8 *)((longlong)(puVar45 + lVar52 + 0x10) + 8);
          uVar3 = *(undefined8 *)(puVar45 + lVar52 + 0x20);
          lVar53 = (longlong)(int)local_108;
          uVar46 = (int)local_108 + 1;
          local_108 = CONCAT44(local_108._4_4_,uVar46);
          if (local_108._4_4_ < uVar46) {
            FUN_146f3fcea(local_318,uVar49 & 0xffffffff);
          }
          uVar49 = local_328;
          puVar41 = local_118;
          if (local_118 == (undefined1 *)0x0) {
            puVar41 = local_318;
          }
          *(undefined8 *)(puVar41 + lVar53 * 0x20) = uVar34;
          *(undefined8 *)((longlong)(puVar41 + lVar53 * 0x20) + 8) = uVar35;
          *(undefined8 *)(puVar41 + lVar53 * 0x20 + 0x10) = uVar3;
          *(undefined8 *)((longlong)(puVar41 + lVar53 * 0x20 + 0x10) + 8) = 0;
          puVar2 = (undefined4 *)(puVar45 + lVar52 + 0x28);
          uVar86 = *puVar2;
          uVar27 = puVar2[1];
          uVar28 = puVar2[2];
          uVar29 = puVar2[3];
          uVar3 = *(undefined8 *)(puVar45 + lVar52 + 0x38);
          lVar53 = (longlong)(int)local_328;
          uVar46 = (int)local_328 + 1;
          local_328 = CONCAT44(local_328._4_4_,uVar46);
          if (local_328._4_4_ < uVar46) {
            FUN_146f3fcea(local_538,uVar49 & 0xffffffff);
          }
          puVar41 = local_338;
          if (local_338 == (undefined1 *)0x0) {
            puVar41 = local_538;
          }
          puVar2 = (undefined4 *)(puVar41 + lVar53 * 0x20);
          *puVar2 = uVar86;
          puVar2[1] = uVar27;
          puVar2[2] = uVar28;
          puVar2[3] = uVar29;
          *(undefined8 *)(puVar41 + lVar53 * 0x20 + 0x10) = uVar3;
          *(undefined8 *)((longlong)(puVar41 + lVar53 * 0x20 + 0x10) + 8) = 0;
          lVar52 = lVar52 + 0x48;
        } while (lVar42 * 0x48 != lVar52);
        uVar46 = (uint)local_560;
      }
      if ((ulonglong)local_554 != 0) {
        uVar49 = 0;
        do {
          uVar3 = *(undefined8 *)(local_548 + uVar49 * 4);
          auVar67._0_8_ = (double)(float)uVar3;
          auVar67._8_8_ = (double)(float)((ulonglong)uVar3 >> 0x20);
          uVar3 = *(undefined8 *)(local_548 + 8 + uVar49 * 4);
          auVar69._0_8_ = (double)(float)uVar3;
          auVar69._8_8_ = (double)(float)((ulonglong)uVar3 >> 0x20);
          auVar67 = maxpd(auVar67,local_6a8);
          auVar69 = maxpd(auVar69,local_698);
          if (0 < (int)uVar46) {
            puVar45 = local_118;
            if (local_118 == (undefined1 *)0x0) {
              puVar45 = local_318;
            }
            puVar41 = local_338;
            if (local_338 == (undefined1 *)0x0) {
              puVar41 = local_538;
            }
            local_8b8 = *(double *)local_550[uVar49 * 2];
            dStack_8b0 = *(double *)(local_550[uVar49 * 2] + 8);
            local_a48 = *(double *)local_550[uVar49 * 2 + 1];
            dStack_a40 = *(double *)(local_550[uVar49 * 2 + 1] + 8);
            local_a58 = *(double *)local_550[uVar49 * 2 + 2];
            dStack_a50 = *(double *)(local_550[uVar49 * 2 + 2] + 8);
            local_a68 = *(double *)local_550[uVar49 * 2 + 3];
            dStack_a60 = *(double *)(local_550[uVar49 * 2 + 3] + 8);
            local_a78 = *(double *)local_550[uVar49 * 2 + 4];
            dStack_a70 = *(double *)(local_550[uVar49 * 2 + 4] + 8);
            local_a88 = *(double *)local_550[uVar49 * 2 + 5];
            dStack_a80 = *(double *)(local_550[uVar49 * 2 + 5] + 8);
            local_a98 = *(double *)local_550[uVar49 * 2 + 6];
            dStack_a90 = *(double *)(local_550[uVar49 * 2 + 6] + 8);
            local_aa8 = *(double *)local_550[uVar49 * 2 + 7];
            dStack_aa0 = *(double *)(local_550[uVar49 * 2 + 7] + 8);
            local_8c8 = local_868;
            dStack_8c0 = dStack_860;
            local_8d8 = local_858;
            dStack_8d0 = dStack_850;
            local_8e8 = local_848;
            dStack_8e0 = dStack_840;
            local_8f8 = local_838;
            dStack_8f0 = dStack_830;
            local_908 = local_7e8;
            dStack_900 = dStack_7e0;
            local_918 = local_7d8;
            dStack_910 = dStack_7d0;
            local_928 = local_808;
            dStack_920 = dStack_800;
            local_938 = local_7f8;
            dStack_930 = dStack_7f0;
            lVar42 = 0;
            local_948 = local_788;
            dStack_940 = dStack_780;
            local_958 = local_778;
            dStack_950 = dStack_770;
            local_968 = local_7c8;
            dStack_960 = dStack_7c0;
            local_978 = local_7b8;
            dStack_970 = dStack_7b0;
            local_988 = local_6e8;
            dStack_980 = dStack_6e0;
            local_998 = local_6d8;
            dStack_990 = dStack_6d0;
            local_9a8 = local_6c8;
            uStack_9a0 = uStack_6c0;
            local_9b8 = local_6b8;
            uStack_9b0 = uStack_6b0;
            local_9c8 = local_748;
            dStack_9c0 = dStack_740;
            local_9d8 = local_738;
            dStack_9d0 = dStack_730;
            local_9e8 = local_708;
            uStack_9e0 = uStack_700;
            local_9f8 = local_6f8;
            uStack_9f0 = uStack_6f0;
            local_a08 = local_768;
            dStack_a00 = dStack_760;
            local_a18 = local_758;
            dStack_a10 = dStack_750;
            local_a28 = local_728;
            uStack_a20 = uStack_720;
            local_a38 = local_718;
            uStack_a30 = uStack_710;
            do {
              local_8a8 = auVar67;
              dVar8 = *(double *)(puVar45 + lVar42);
              dVar9 = *(double *)((longlong)(puVar45 + lVar42) + 8);
              dVar16 = *(double *)(puVar45 + lVar42 + 0x10);
              dVar66 = *(double *)((longlong)(puVar45 + lVar42 + 0x10) + 8);
              dVar30 = *(double *)(puVar41 + lVar42);
              dVar31 = *(double *)((longlong)(puVar41 + lVar42) + 8);
              dVar74 = local_8b8 - dVar8;
              dVar79 = dStack_8b0 - dVar9;
              dVar60 = local_a48 - dVar16;
              dVar63 = dStack_a40 - dVar66;
              dVar11 = local_a58 - dVar8;
              dVar12 = dStack_a50 - dVar9;
              dVar22 = local_a68 - dVar16;
              dVar23 = dStack_a60 - dVar66;
              dVar5 = local_a78 - dVar8;
              dVar6 = dStack_a70 - dVar9;
              dVar55 = local_a88 - dVar16;
              dVar59 = dStack_a80 - dVar66;
              dVar8 = local_a98 - dVar8;
              dVar9 = dStack_a90 - dVar9;
              dVar16 = local_aa8 - dVar16;
              dVar66 = dStack_aa0 - dVar66;
              dVar71 = dVar22 * dVar22 + dVar11 * dVar11;
              dVar68 = dVar23 * dVar23 + dVar12 * dVar12;
              auVar19._8_4_ = SUB84(dVar68,0);
              auVar19._0_8_ = dVar71;
              auVar19._12_4_ = (int)((ulonglong)dVar68 >> 0x20);
              dVar70 = dVar60 * dVar60 + dVar74 * dVar74 + dVar63 * dVar63 + dVar79 * dVar79;
              dVar71 = dVar71 + auVar19._8_8_;
              dVar73 = dVar16 * dVar16 + dVar8 * dVar8;
              dVar68 = dVar66 * dVar66 + dVar9 * dVar9;
              auVar18._8_4_ = SUB84(dVar68,0);
              auVar18._0_8_ = dVar73;
              auVar18._12_4_ = (int)((ulonglong)dVar68 >> 0x20);
              dVar72 = dVar55 * dVar55 + dVar5 * dVar5 + dVar59 * dVar59 + dVar6 * dVar6;
              dVar73 = dVar73 + auVar18._8_8_;
              dVar32 = *(double *)(puVar41 + lVar42 + 0x10);
              dVar33 = *(double *)((longlong)(puVar41 + lVar42 + 0x10) + 8);
              dVar74 = dVar60 * dVar32 + dVar74 * dVar30;
              dVar64 = dVar63 * dVar33 + dVar79 * dVar31;
              dVar68 = dVar22 * dVar32 + dVar11 * dVar30;
              dVar60 = dVar23 * dVar33 + dVar12 * dVar31;
              uVar86 = (undefined4)((ulonglong)dVar60 >> 0x20);
              auVar20._8_4_ = SUB84(dVar60,0);
              auVar20._0_8_ = dVar68;
              auVar20._12_4_ = uVar86;
              dVar61 = dVar74 + dVar64;
              dVar65 = dVar68 + auVar20._8_8_;
              dVar63 = dVar55 * dVar32 + dVar5 * dVar30;
              dVar79 = dVar59 * dVar33 + dVar6 * dVar31;
              auVar10._8_4_ = SUB84(dVar64,0);
              auVar10._0_8_ = dVar74;
              auVar10._12_4_ = (int)((ulonglong)dVar64 >> 0x20);
              dVar5 = dVar74 + auVar10._8_8_;
              auVar21._8_4_ = SUB84(dVar60,0);
              auVar21._0_8_ = dVar68;
              auVar21._12_4_ = uVar86;
              dVar6 = dVar68 + auVar21._8_8_;
              dVar16 = dVar16 * dVar32 + dVar8 * dVar30;
              dVar66 = dVar66 * dVar33 + dVar9 * dVar31;
              uVar86 = (undefined4)((ulonglong)dVar66 >> 0x20);
              dVar55 = local_8b8 - dVar30 * (dVar74 + dVar64);
              dVar59 = dStack_8b0 - dVar31 * dVar5;
              dVar22 = local_a48 - (dVar74 + dVar64) * dVar32;
              dVar23 = dStack_a40 - dVar5 * dVar33;
              dVar11 = local_a58 - dVar30 * (dVar68 + dVar60);
              dVar12 = dStack_a50 - dVar31 * dVar6;
              dVar64 = local_a68 - (dVar68 + dVar60) * dVar32;
              dVar80 = dStack_a60 - dVar6 * dVar33;
              dVar60 = local_a78 - dVar30 * (dVar63 + dVar79);
              dVar74 = dStack_a70 - dVar31 * (dVar63 + dVar79);
              dVar8 = local_a88 - (dVar63 + dVar79) * dVar32;
              dVar9 = dStack_a80 - (dVar63 + dVar79) * dVar33;
              auVar13._8_4_ = SUB84(dVar66,0);
              auVar13._0_8_ = dVar16;
              auVar13._12_4_ = uVar86;
              dVar63 = dVar63 + dVar79;
              dVar79 = dVar16 + auVar13._8_8_;
              auVar14._8_4_ = SUB84(dVar66,0);
              auVar14._0_8_ = dVar16;
              auVar14._12_4_ = uVar86;
              dVar68 = dVar16 + auVar14._8_8_;
              dVar5 = local_a98 - dVar30 * (dVar16 + dVar66);
              dVar6 = dStack_a90 - dVar31 * dVar68;
              dVar66 = local_aa8 - (dVar16 + dVar66) * dVar32;
              dVar68 = dStack_aa0 - dVar68 * dVar33;
              auVar81._8_8_ = -(ulonglong)(0.0 <= dVar79);
              auVar81._0_8_ = -(ulonglong)(0.0 <= dVar63);
              bVar54 = 0.0 <= dVar61 && dVar61 <= local_848;
              bVar24 = 0.0 <= dVar65 && dVar65 <= dStack_840;
              bVar25 = dVar63 <= local_838 && 0.0 <= dVar63;
              bVar26 = dVar79 <= dStack_830 && 0.0 <= dVar79;
              auVar85._8_8_ = dVar73;
              auVar85._0_8_ = dVar72;
              auVar67 = sqrtpd(auVar81,auVar85);
              dVar16 = dVar22 * dVar22 + dVar55 * dVar55 + dVar23 * dVar23 + dVar59 * dVar59;
              dVar11 = dVar64 * dVar64 + dVar11 * dVar11 + dVar80 * dVar80 + dVar12 * dVar12;
              dVar8 = dVar8 * dVar8 + dVar60 * dVar60 + dVar9 * dVar9 + dVar74 * dVar74;
              dVar5 = dVar66 * dVar66 + dVar5 * dVar5 + dVar68 * dVar68 + dVar6 * dVar6;
              auVar56._8_8_ = -(ulonglong)(dVar79 <= dStack_850);
              auVar56._0_8_ = -(ulonglong)(dVar63 <= local_858);
              auVar75._0_8_ = local_7d8 * dVar63 * local_7d8 * dVar63;
              auVar75._8_8_ = dStack_7d0 * dVar79 * dStack_7d0 * dVar79;
              auVar36._8_8_ = dStack_7b0;
              auVar36._0_8_ = local_7b8;
              auVar82._0_8_ = (auVar67._0_8_ - local_858) * local_7f8 * local_778 + local_7b8;
              auVar82._8_8_ = (auVar67._8_8_ - dStack_850) * dStack_7f0 * dStack_770 + dStack_7b0;
              auVar83 = blendvpd(auVar82,auVar36,auVar56);
              auVar77._8_8_ = dVar71;
              auVar77._0_8_ = dVar70;
              auVar67 = sqrtpd(auVar75,auVar77);
              auVar37._8_8_ = dStack_7c0;
              auVar37._0_8_ = local_7c8;
              auVar76._0_8_ = (auVar67._0_8_ - local_868) * local_808 * local_788 + local_7c8;
              auVar76._8_8_ = (auVar67._8_8_ - dStack_860) * dStack_800 * dStack_780 + dStack_7c0;
              auVar57._8_8_ = -(ulonglong)(dVar65 <= dStack_860);
              auVar57._0_8_ = -(ulonglong)(dVar61 <= local_868);
              auVar77 = blendvpd(auVar76,auVar37,auVar57);
              auVar84._0_8_ = auVar83._0_8_ & -(ulonglong)(dVar8 <= auVar75._0_8_ && bVar25);
              auVar84._8_8_ = auVar83._8_8_ & -(ulonglong)(dVar5 <= auVar75._8_8_ && bVar26);
              auVar58._0_8_ = -(ulonglong)(dVar70 <= local_748) & local_708;
              auVar58._8_8_ = -(ulonglong)(dVar71 <= dStack_740) & uStack_700;
              auVar83._8_8_ = -(ulonglong)(dVar71 <= dStack_760) & uStack_720;
              auVar83._0_8_ = -(ulonglong)(dVar70 <= local_768) & local_728;
              auVar67 = maxpd(auVar58,auVar83);
              auVar78._0_8_ =
                   auVar77._0_8_ &
                   -(ulonglong)(dVar16 <= local_7e8 * dVar61 * local_7e8 * dVar61 && bVar54);
              auVar78._8_8_ =
                   auVar77._8_8_ &
                   -(ulonglong)(dVar11 <= dStack_7e0 * dVar65 * dStack_7e0 * dVar65 && bVar24);
              auVar62._0_8_ = -(ulonglong)(dVar72 <= local_738) & local_6f8;
              auVar62._8_8_ = -(ulonglong)(dVar73 <= dStack_730) & uStack_6f0;
              auVar4._8_8_ = -(ulonglong)(dVar73 <= dStack_750) & uStack_710;
              auVar4._0_8_ = -(ulonglong)(dVar72 <= local_758) & local_718;
              auVar77 = maxpd(auVar62,auVar4);
              uVar17 = -(ulonglong)bVar24 & uStack_6c0 & -(ulonglong)(dVar11 <= dStack_6e0);
              auVar15._8_4_ = (int)uVar17;
              auVar15._0_8_ = -(ulonglong)bVar54 & local_6c8 & -(ulonglong)(dVar16 <= local_6e8);
              auVar15._12_4_ = (int)(uVar17 >> 0x20);
              auVar83 = maxpd(auVar78,auVar15);
              auVar83 = maxpd(local_8a8,auVar83);
              uVar17 = -(ulonglong)bVar26 & uStack_6b0 & -(ulonglong)(dVar5 <= dStack_6d0);
              auVar7._8_4_ = (int)uVar17;
              auVar7._0_8_ = -(ulonglong)bVar25 & local_6b8 & -(ulonglong)(dVar8 <= local_6d8);
              auVar7._12_4_ = (int)(uVar17 >> 0x20);
              auVar85 = maxpd(auVar84,auVar7);
              auVar67 = maxpd(auVar83,auVar67);
              auVar69 = maxpd(auVar69,auVar85);
              auVar69 = maxpd(auVar69,auVar77);
              lVar42 = lVar42 + 0x20;
            } while ((ulonglong)uVar46 << 5 != lVar42);
          }
          puVar1 = (undefined8 *)(local_548 + uVar49 * 4);
          *puVar1 = CONCAT44((float)auVar67._8_8_,(float)auVar67._0_8_);
          puVar1[1] = CONCAT44((float)auVar69._8_8_,(float)auVar69._0_8_);
          uVar49 = uVar49 + 4;
        } while (uVar49 < local_554);
      }
      if (local_338 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      if (local_118 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      if (local_554 != 0) {
        lVar42 = *local_ab8;
        lVar52 = local_ab8[2];
        lVar53 = 0;
        do {
          *(undefined4 *)
           (lVar52 + (ulonglong)*(uint *)(lVar42 + (ulonglong)(uVar47 + (int)lVar53) * 4) * 4) =
               *(undefined4 *)(local_548 + lVar53 * 4);
          lVar53 = lVar53 + 1;
        } while (local_554 != (uint)lVar53);
      }
      uVar47 = local_aac + uVar47;
    } while (uVar47 < local_ab0);
  }
  if (local_568 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_878 == '\0') {
    local_878 = '\x01';
    *(int *)(local_890 + 4) = *(int *)(local_890 + 4) + -1;
    if (local_880 != local_890[2]) {
      FUN_14004673c();
    }
    *local_890 = local_888;
    local_890[3] = local_870;
  }
  if ((local_f0 ^ (ulonglong)auStack_ae8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a897a0 FUN_142a897a0 body=137 status=ok
// SIG undefined FUN_142a897a0(void)

undefined8 FUN_142a897a0(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  short *psVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  longlong lVar5;
  
  if ((ulonglong)*(uint *)(param_1 + 0x90) != 0) {
    lVar5 = 0;
    puVar3 = *(uint **)(param_1 + 0x88);
    do {
      if (*puVar3 != 0xffffffff) {
        uVar4 = *puVar3 ^ 0xffffffff;
        if (uVar4 == 0) {
          iVar2 = 0x20;
        }
        else {
          iVar2 = 0;
          if (uVar4 != 0) {
            for (; (uVar4 >> iVar2 & 1) == 0; iVar2 = iVar2 + 1) {
            }
          }
        }
        uVar4 = iVar2 - (int)lVar5;
        if (*(uint *)(param_1 + 0x98) <= uVar4) {
          return 0;
        }
        puVar3 = *(uint **)(param_1 + 0x88) + (uVar4 >> 5);
        *puVar3 = *puVar3 | 1 << ((byte)iVar2 & 0x1f);
        *(undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)(int)uVar4 * 4) = param_2;
        psVar1 = (short *)*param_3;
        *psVar1 = (short)iVar2 - (short)lVar5;
        return CONCAT71((int7)((ulonglong)psVar1 >> 8),1);
      }
      lVar5 = lVar5 + -0x20;
      puVar3 = puVar3 + 1;
    } while ((ulonglong)*(uint *)(param_1 + 0x90) * 0x20 + lVar5 != 0);
  }
  return 0;
}



// FUNCTION 142a89860 FUN_142a89860 body=184 status=ok
// SIG undefined FUN_142a89860(void)

void FUN_142a89860(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  
  iVar8 = 0;
  memset((void *)*param_2,0,(ulonglong)*(uint *)(param_2 + 1) << 2);
  lVar7 = (longlong)(int)param_2[5];
  lVar5 = *(longlong *)(param_1 + 0x78);
  uVar3 = *(uint *)(lVar5 + 8 + lVar7 * 0x18);
  cVar2 = *(char *)(lVar5 + 0x10 + lVar7 * 0x18);
  if ((ulonglong)uVar3 != 0) {
    lVar5 = *(longlong *)(lVar5 + lVar7 * 0x18);
    uVar10 = 0;
    do {
      uVar11 = 0xffffffff;
      if (uVar10 == uVar3 - 1) {
        uVar11 = 0xffffffff >> (-cVar2 & 0x1fU);
      }
      uVar11 = uVar11 & *(uint *)(lVar5 + uVar10 * 4);
      iVar9 = iVar8;
      if (uVar11 != 0) {
        do {
          if ((uVar11 & 1) != 0) {
            uVar4 = *(uint *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar9 * 4);
            puVar1 = (uint *)(*param_2 + (ulonglong)(uVar4 >> 5) * 4);
            *puVar1 = *puVar1 | 1 << ((byte)uVar4 & 0x1f);
          }
          bVar6 = 1 < uVar11;
          uVar11 = uVar11 >> 1;
          iVar9 = iVar9 + 1;
        } while (bVar6);
      }
      uVar10 = uVar10 + 1;
      iVar8 = iVar8 + 0x20;
    } while (uVar10 != uVar3);
  }
  return;
}



// FUNCTION 142a89918 FUN_142a89918 body=352 status=ok
// SIG undefined FUN_142a89918(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_142a89918(longlong param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  ushort uVar7;
  longlong lVar8;
  uint *puVar9;
  undefined8 auStack_90 [5];
  longlong lStack_68;
  uint auStack_60 [2];
  uint auStack_58 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)&local_48;
  uVar1 = *(uint *)(param_1 + 0x58);
  auStack_90[2] = 0x142a89953;
  FUN_146f14ba4((longlong *)(param_1 + 0x60),uVar1);
  uVar7 = *(ushort *)(param_1 + 0x78);
  if (uVar1 <= uVar7) {
    *(undefined2 *)(param_1 + 0x78) = 0;
    uVar7 = 0;
  }
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x30) + 0x2c);
  puVar9 = auStack_58;
  if ((ulonglong)uVar1 != 0) {
    auStack_60[0] = 0x42a899b4;
    auStack_60[1] = 1;
    lVar4 = -((ulonglong)uVar1 * 4 + 0x1e & 0xfffffffffffffff0);
    uVar2 = *(undefined4 *)(param_1 + 0x58);
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    *(uint *)((longlong)auStack_58 + lVar4 + -8) = uVar1;
    *(longlong *)((longlong)&lStack_68 + lVar4) = (longlong)auStack_58 + lVar4;
    auStack_58[3] = uVar2;
    *(undefined8 *)((longlong)auStack_90 + lVar4) = 0x142a899e7;
    uVar5 = FUN_146efd1b6(uVar3,uVar2,uVar7,0xffffffff);
    if (uVar5 < uVar1 && uVar7 != 0) {
      *(uint *)((longlong)auStack_58 + lVar4 + -8) = uVar1 - uVar5;
      *(ulonglong *)((longlong)&lStack_68 + lVar4) =
           (longlong)auStack_58 + (ulonglong)uVar5 * 4 + lVar4;
      uVar1 = auStack_58[3];
      *(undefined8 *)((longlong)auStack_90 + lVar4) = 0x142a89a75;
      iVar6 = FUN_146efd1b6(uVar3,uVar1,0,uVar7 - 1);
      uVar5 = uVar5 + iVar6;
    }
    puVar9 = (uint *)((longlong)auStack_58 + lVar4);
    if (uVar5 != 0) {
      *(short *)(param_1 + 0x78) =
           (short)*(undefined4 *)((longlong)auStack_58 + (ulonglong)(uVar5 - 1) * 4 + lVar4) + 1;
      lVar8 = 0;
      do {
        uVar1 = *(uint *)((longlong)auStack_58 + lVar8 + lVar4);
        puVar9 = (uint *)(*(longlong *)(param_1 + 0x60) + (ulonglong)(uVar1 >> 5) * 4);
        *puVar9 = *puVar9 | 1 << ((byte)uVar1 & 0x1f);
        lVar8 = lVar8 + 4;
        puVar9 = (uint *)((longlong)auStack_58 + lVar4);
      } while ((longlong)(int)uVar5 * 4 != lVar8);
    }
  }
  if ((local_48 ^ (ulonglong)&local_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((longlong)puVar9 + -0x28) = &UNK_142a8999e;
    FUN_144d8e3a0();
  }
  return;
}


