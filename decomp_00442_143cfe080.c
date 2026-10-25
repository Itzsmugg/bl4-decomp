// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143cfe080 FUN_143cfe080 body=64 status=ok
// SIG undefined FUN_143cfe080(void)

undefined8 * FUN_143cfe080(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b3f6230;
  plVar2 = (longlong *)param_1[4];
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



// FUNCTION 143cfe0d4 FUN_143cfe0d4 body=110 status=ok
// SIG undefined FUN_143cfe0d4(void)

void FUN_143cfe0d4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f6230;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143cfe142 FUN_143cfe142 body=110 status=ok
// SIG undefined FUN_143cfe142(void)

void FUN_143cfe142(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f6230;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143cfe1b0 FUN_143cfe1b0 body=148 status=ok
// SIG undefined FUN_143cfe1b0(void)

void FUN_143cfe1b0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9ef0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3f6230;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143cfe234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143cfe244 FUN_143cfe244 body=66 status=ok
// SIG undefined FUN_143cfe244(void)

void FUN_143cfe244(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_143cfe2ce(param_1 + 0x18,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cfe288 FUN_143cfe288 body=68 status=ok
// SIG undefined FUN_143cfe288(void)

undefined8 FUN_143cfe288(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_143cfe2ce(param_1 + 0x18,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cfe2ce FUN_143cfe2ce body=226 status=ok
// SIG undefined FUN_143cfe2ce(void)

void FUN_143cfe2ce(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  bool bVar12;
  
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    param_2 = (longlong *)*param_2;
    iVar9 = (int)plVar3[1];
    do {
      if (iVar9 == 0) {
        return;
      }
      LOCK();
      iVar7 = (int)plVar3[1];
      bVar12 = iVar9 == iVar7;
      if (bVar12) {
        *(int *)(plVar3 + 1) = iVar9 + 1;
        iVar7 = iVar9;
      }
      iVar9 = iVar7;
      UNLOCK();
    } while (!bVar12);
    lVar4 = *param_1;
    if (param_2 != (longlong *)0x0 && lVar4 != 0) {
      uVar10 = (**(code **)(*param_2 + 0xf8))();
      iVar9 = *(int *)(lVar4 + 0x78);
      if ((longlong)iVar9 != 0) {
        lVar5 = *(longlong *)(lVar4 + 0x70);
        lVar11 = 0;
        do {
          lVar6 = *(longlong *)(lVar5 + lVar11);
          if (((*(longlong *)(lVar6 + 0x40) != 0) &&
              (*(char *)(*(longlong *)(lVar6 + 0x40) + 0x1a8) < '\0')) &&
             (cVar8 = FUN_14069eaf4(lVar6 + 0x58,uVar10), cVar8 != '\0')) {
            FUN_14074668c(lVar4,lVar6);
          }
          lVar11 = lVar11 + 8;
        } while ((longlong)iVar9 * 8 != lVar11);
      }
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
                    /* WARNING: Could not recover jumptable at 0x000143cfe39b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143cfe3b0 FUN_143cfe3b0 body=2707 status=ok
// SIG undefined FUN_143cfe3b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143cfe3b0(void)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  char *local_98;
  undefined4 local_90;
  undefined1 local_8c;
  undefined8 local_88;
  undefined **local_78;
  undefined1 *local_70;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1400b22c2(&local_98,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_98,&DAT_14cb7627c);
  if (cVar2 == '\0') {
    _DAT_14cb7627c = 0;
    uRam000000014cb76284 = 0;
  }
  if (local_98 != (char *)0x0) {
    FUN_1400020a8();
  }
  _DAT_14cb762a0 = 0x47efffffe0000000;
  _DAT_14cb762a8 = 0x47efffffe0000000;
  _DAT_14cb762b0 = 0x47efffffe0000000;
  _DAT_14cb762b8 = 0x47efffffe0000000;
  _DAT_14cb762c0 = 0x47efffffe0000000;
  _DAT_14cb762c8 = 0x47efffffe0000000;
  _DAT_14cb762d0 = 0x47efffffe0000000;
  _DAT_14cb762d8 = 0x47efffffe0000000;
  local_98 = "bone";
  local_90 = 4;
  local_8c = 0;
  FUN_14001a6c0(&local_98,1);
  local_98 = "AssetRegistry";
  local_90 = 0xd;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb762e0 = (ulonglong)uVar3;
  _DAT_14cb762ec = 0;
  FUN_14052b5e0(&DAT_14cb762e8,"PlayerAwareness",0);
  _DAT_14cb762f8 = "PlayerAwareness";
  FUN_1446f470e(&DAT_14cb76300,L"SelfActor",1);
  FUN_1446f470e(&DAT_14cb76308,L"ControlledMove_Teleport",1);
  FUN_1446f470e(&DAT_14cb76310,L"NAME_ControlledMove_MovementMode",1);
  _DAT_14cb76318 = 0;
  uRam000000014cb76320 = 0;
  _DAT_14cb76328 = 0;
  DAT_14cb76330 = 0;
  uRam000000014cb76338 = 0;
  FUN_1446ddda2(&DAT_14cb76318,&DAT_14b3f1758,0);
  atexit((_func_5014 *)&LAB_143cebfe9);
  _DAT_14cb76340 = 0;
  uRam000000014cb76348 = 0;
  _DAT_14cb76350 = 0;
  DAT_14cb76358 = 0;
  uRam000000014cb76360 = 0;
  FUN_1446ddda2(&DAT_14cb76340,&DAT_14b3f534a,0);
  atexit((_func_5014 *)&LAB_143cebffa);
  DAT_14cb763c8 = 0;
  _DAT_14cb763d0 = 0;
  local_88 = 0;
  local_78 = &PTR_LAB_14a1795c0;
  local_70 = &LAB_143cfd0e2;
  local_98 = &DAT_14011fc1e;
  FUN_1460e9c8c(&local_98);
  atexit((_func_5014 *)&LAB_143cf5e1d);
  ram0x00014cb76464 = 0;
  FUN_14052b5e0(&DAT_14cb76460,"currencies",0);
  _DAT_14cb76470 = "currencies";
  ram0x00014cb7647c = 0;
  FUN_14052b5e0(&DAT_14cb76478,"shifttransaction",0);
  _DAT_14cb76488 = "shifttransaction";
  local_98 = "success";
  local_90 = 7;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  DAT_14cb76490 = (ulonglong)uVar3;
  local_98 = "failure";
  local_90 = 7;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  DAT_14cb76498 = (ulonglong)uVar3;
  local_a8 = 0;
  FUN_14153156c(&DAT_14cb764a0,L"gbx.currency.ClampCurrencyValuesToInt32Max",&DAT_14c7638c0,
                L"If true, currency values will be clamped to int32 max.");
  atexit(FUN_143cf5f4a);
  DAT_14cb76510 = 0;
  _DAT_14cb76518 = 0;
  local_88 = 0;
  local_78 = &PTR_LAB_14a1795c0;
  local_70 = &LAB_143cfd762;
  local_98 = &DAT_14011fc1e;
  FUN_1460ea422(&local_98);
  atexit((_func_5014 *)&LAB_143cf6ef8);
  _DAT_14cb765a8 = &LAB_143cf6efd;
  _DAT_14cb765b0 = 0x444dc000;
  DAT_14cb765b4 = 1;
  DAT_14cb765a0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb765a0;
  atexit((_func_5014 *)&LAB_143cf6f02);
  ram0x00014cb765c4 = 0;
  FUN_14052b5e0(&DAT_14cb765c0,"player_customization",0);
  _DAT_14cb765d0 = "player_customization";
  FUN_1446f470e(&DAT_14cb765d8,L"body",1);
  local_a8 = 0;
  FUN_141471170(&DAT_14cb765e8,L"gbx.Corpse.DetailLevel",&DAT_14cb765e0,
                L"Which settings to use in the damage globals.");
  atexit(FUN_143cf70bb);
  local_a8 = 0;
  FUN_14153156c(&DAT_14cb76600,L"gbx.Corpse.ShouldUseLowGraphics",&DAT_14cb765f8,
                L"Whether to use low graphics options (default false)");
  atexit(FUN_143cf7100);
  local_a8 = 0;
  FUN_1412cc41e(&DAT_14cb76610,L"FCorpseManager",0,0);
  _DAT_14cb76620 = 0x47efffffe0000000;
  _DAT_14cb76628 = 0x47efffffe0000000;
  _DAT_14cb76630 = 0x47efffffe0000000;
  _DAT_14cb76640 = 0x47efffffe0000000;
  _DAT_14cb76648 = 0x47efffffe0000000;
  _DAT_14cb76650 = 0x47efffffe0000000;
  _DAT_14cb76658 = 0x47efffffe0000000;
  _DAT_14cb76660 = 0x47efffffe0000000;
  _DAT_14cb76668 = 0x47efffffe0000000;
  _DAT_14cb76670 = 0x47efffffe0000000;
  DAT_14cb767f8 = 0;
  _DAT_14cb76800 = 0;
  atexit((_func_5014 *)&LAB_143cf74fa);
  DAT_14cb76808 = 0;
  _DAT_14cb76810 = 0;
  atexit((_func_5014 *)&LAB_143cf750b);
  local_98 = "DamageArea";
  local_90 = 10;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  DAT_14cb76678 = (ulonglong)uVar3;
  FUN_1446f470e(&DAT_14cb76680,L"DamageAreaTrace",1);
  DAT_14cb76688 = (undefined8 *)0x0;
  _DAT_14cb76690 = 0;
  puVar4 = (undefined8 *)FUN_140595974(0x1740,0);
  lVar6 = 7;
  puVar1 = puVar4;
  do {
    puVar5 = puVar1 + 0x5d;
    *puVar1 = puVar5;
    lVar6 = lVar6 + -1;
    puVar1 = puVar5;
  } while (lVar6 != 0);
  _DAT_14cb76690 = _DAT_14cb76690 + 8;
  *puVar5 = DAT_14cb76688;
  DAT_14cb76688 = puVar4;
  DAT_14cb76698 = 0;
  DAT_14cb766a0 = 0;
  atexit(FUN_143cfc2e3);
  local_98 = "damage";
  local_90 = 6;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb766a8 = (ulonglong)uVar3;
  local_98 = "damagemultiplier";
  local_90 = 0x10;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb766b0 = (ulonglong)uVar3;
  local_98 = "damageinterval";
  local_90 = 0xe;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb766b8 = (ulonglong)uVar3;
  local_98 = "damageovertimeincreasescalar";
  local_90 = 0x1c;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb766c0 = (ulonglong)uVar3;
  local_98 = "damageovertimeincreaseinterval";
  local_90 = 0x1e;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb766c8 = (ulonglong)uVar3;
  local_98 = "puddlehazardduration";
  local_90 = 0x14;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb766d0 = (ulonglong)uVar3;
  local_98 = "puddledamage";
  local_90 = 0xc;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb766d8 = (ulonglong)uVar3;
  local_98 = "puddledamagemultiplier";
  local_90 = 0x16;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb766e0 = (ulonglong)uVar3;
  local_98 = "maxdamageduration";
  local_90 = 0x11;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb766e8 = (ulonglong)uVar3;
  local_98 = "initialdelay";
  local_90 = 0xc;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb766f0 = (ulonglong)uVar3;
  local_98 = "effectinterval";
  local_90 = 0xe;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb766f8 = (ulonglong)uVar3;
  local_98 = "damageovertimemaxvalue";
  local_90 = 0x16;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb76700 = (ulonglong)uVar3;
  local_98 = "HitDirection";
  local_90 = 0xc;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb76708 = (ulonglong)uVar3;
  local_98 = "HitLocation";
  local_90 = 0xb;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb76710 = (ulonglong)uVar3;
  ram0x00014cb767cc = 0;
  FUN_14052b5e0(&DAT_14cb767c8,&DAT_14b3f5b32,0);
  _DAT_14cb767d8 = &DAT_14b3f5b32;
  ram0x00014cb767e4 = 0;
  FUN_14052b5e0(&DAT_14cb767e0,"bDemigod",0);
  _DAT_14cb767f0 = "bDemigod";
  local_98 = "GodFact";
  local_90 = 7;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  DAT_14cb76718 = (ulonglong)uVar3;
  local_98 = "DemigodFact";
  local_90 = 0xb;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  DAT_14cb76720 = (ulonglong)uVar3;
  FUN_1446f470e(&DAT_14cb76728,L"PainterComponent",1);
  local_98 = "DamageContext";
  local_90 = 0xd;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb76730 = (ulonglong)uVar3;
  local_98 = "DamageDef";
  local_90 = 9;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb76738 = (ulonglong)uVar3;
  DAT_14cb76740 = (undefined8 *)0x0;
  _DAT_14cb76748 = 0;
  puVar4 = (undefined8 *)FUN_140595974(0x1e00,0);
  lVar6 = 0x1f;
  puVar1 = puVar4;
  do {
    puVar5 = puVar1 + 0x1e;
    *puVar1 = puVar5;
    lVar6 = lVar6 + -1;
    puVar1 = puVar5;
  } while (lVar6 != 0);
  *puVar5 = DAT_14cb76740;
  _DAT_14cb76748 = _DAT_14cb76748 + 0x20;
  local_a8 = 0;
  DAT_14cb76740 = puVar4;
  FUN_14153156c(&DAT_14cb76750,L"gbx.Damage.EnableAsync",&DAT_14c7638c1,
                L"If true, async damage is allowed.");
  atexit(FUN_143cfcd43);
  local_a8 = 0;
  FUN_14153156c(&DAT_14cb76768,L"gbx.Damage.ForceAsync",&DAT_14cb76760,
                L"If true, all damage is forced to run async overriding the settings in the def.");
  atexit(FUN_143cfcd88);
  local_a8 = 0;
  FUN_141471170(&DAT_14cb76778,L"gbx.Damage.MaxAsyncDamageRequestsPerFrame",&DAT_14c7638c4,
                L"Maximum number of async damage requests that can be processed in one frame.");
  atexit(FUN_143cfcdcd);
  DAT_14cb76788 = (undefined8 *)0x0;
  _DAT_14cb76790 = 0;
  puVar4 = (undefined8 *)FUN_140595974(0x7400,0);
  lVar6 = 0x1f;
  puVar1 = puVar4;
  do {
    puVar5 = puVar1 + 0x74;
    *puVar1 = puVar5;
    lVar6 = lVar6 + -1;
    puVar1 = puVar5;
  } while (lVar6 != 0);
  *puVar5 = DAT_14cb76788;
  _DAT_14cb76790 = _DAT_14cb76790 + 0x20;
  local_a8 = 0x3f800000;
  DAT_14cb76788 = puVar4;
  FUN_1412cc41e(&DAT_14cb76798,L"FDamageManager",0,0xffffffff);
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cfee44 FUN_143cfee44 body=340 status=ok
// SIG undefined FUN_143cfee44(void)

undefined8 FUN_143cfee44(longlong param_1)

{
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 == 0) {
    if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  if (DAT_14caf64b8 == 0) {
    local_40 = &local_20;
    local_20 = FUN_141030f22;
    local_30 = FUN_14081d0ea;
    local_38 = FUN_142b4754c;
    local_48 = &LAB_147c45ce0;
    local_50 = &LAB_1463f1ff4;
    local_58 = &DAT_149e063b2;
    local_60 = 0x4000000000;
    local_68 = 0x10000004;
    local_70 = 8;
    local_78 = 0x428;
    FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
  }
  if (((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(DAT_14caf64b8 + 0x38)) ||
      (*(longlong *)
        (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
        (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) != DAT_14caf64b8 + 0x30)) &&
     (*(longlong *)(param_1 + 0x1b0) != param_1 && *(longlong *)(param_1 + 0x1b0) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
}



// FUNCTION 143cfefb8 FUN_143cfefb8 body=560 status=ok
// SIG undefined FUN_143cfefb8(void)

longlong FUN_143cfefb8(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
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
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    if (DAT_14caf9cd0 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1463c0cc2;
      local_48 = &LAB_147c9db5b;
      local_50 = &LAB_1463f9c44;
      local_58 = &DAT_149e063b2;
      local_60 = 0x2000000000;
      local_68 = 0x10000004;
      local_70 = 8;
      local_78 = 0x958;
      FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0,FUN_1463f9c22);
      lVar1 = *(longlong *)(param_1 + 0x48);
      if (lVar1 == 0) goto LAB_143cff0f8;
    }
    if ((((DAT_14caf9cd0 != 0) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
        (*(int *)(DAT_14caf9cd0 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14caf9cd0 + 0x38) * 8) ==
        DAT_14caf9cd0 + 0x30)) goto LAB_143cff024;
  }
LAB_143cff0f8:
  lVar1 = *(longlong *)(param_1 + 0x418);
  if (lVar1 != 0) {
    lVar2 = FUN_144a75eb4();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) goto LAB_143cff024;
  }
  lVar1 = *(longlong *)(param_1 + 0x420);
  if (lVar1 != 0) {
    lVar2 = FUN_144a75eb4();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) goto LAB_143cff024;
  }
  lVar1 = *(longlong *)(param_1 + 0x430);
  if (lVar1 != 0) {
    lVar2 = FUN_144a75eb4();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) goto LAB_143cff024;
  }
  if ((*(longlong *)(param_1 + 0x18) == 0) ||
     ((*(longlong **)(param_1 + 0x20) == (longlong *)0x0 ||
      (lVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x20))(), lVar1 == 0)))) {
    lVar1 = 0;
  }
  else {
    if (*(longlong *)(param_1 + 0x18) == 0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = *(longlong **)(param_1 + 0x20);
    }
    lVar1 = (**(code **)(*plVar3 + 0x20))();
    lVar1 = *(longlong *)(lVar1 + 0x300);
  }
LAB_143cff024:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 143cff1ea FUN_143cff1ea body=7174 status=ok
// SIG undefined FUN_143cff1ea(void)

void FUN_143cff1ea(longlong *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  code *pcVar3;
  ulonglong uVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined ***pppuVar10;
  float *pfVar11;
  float *pfVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined1 local_110;
  undefined ***local_108;
  undefined **local_100;
  undefined **local_f8;
  longlong *local_f0;
  ulonglong uStack_e8;
  float local_d0;
  undefined4 uStack_cc;
  ushort local_b8;
  byte local_b0;
  float local_a8;
  undefined4 uStack_a4;
  ushort local_90;
  byte local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((char)param_1[0x4b] == '\x02') goto LAB_143cffc91;
  cVar5 = FUN_140e2de6e(param_1);
  if (((cVar5 != '\0') && (lVar8 = FUN_140ccfc10(), *(char *)((longlong)param_1 + 0x53e) == '\0'))
     && (*(char *)((longlong)param_1 + 0x53f) == '\0')) {
    local_118 = (code *)((ulonglong)local_118 & 0xffffffffffffff00);
    local_f0 = (longlong *)((ulonglong)local_f0 & 0xffffffff00000000);
    FUN_1456bb102(&local_118,param_1[0x8f]);
    pfVar11 = &local_d0;
    FUN_1448729ea(lVar8 + 0xb8,pfVar11,&local_118);
    if (local_b0 == 3) {
      uVar7 = 3;
      fVar17 = local_d0;
    }
    else {
      pfVar12 = &local_a8;
      FUN_1400b56fe(pfVar12,&local_d0,3);
      fVar17 = local_a8;
      if (local_88 == 0) {
        fVar17 = 1.0;
      }
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_88 * 0x120));
      if (pcVar3 != (code *)0x0) {
        if (0x18 < local_90) {
          pfVar12 = (float *)CONCAT44(uStack_a4,local_a8);
        }
        (*pcVar3)(pfVar12);
      }
      if (0x18 < local_90) {
        FUN_1400020a8(CONCAT44(uStack_a4,local_a8));
      }
      uVar7 = (uint)local_b0;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar7 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_b8) {
        pfVar11 = (float *)CONCAT44(uStack_cc,local_d0);
      }
      (*pcVar3)(pfVar11);
    }
    if (0x18 < local_b8) {
      FUN_1400020a8(CONCAT44(uStack_cc,local_d0));
    }
    FUN_1448173f8(&local_f0);
    if (((char)local_118 == '\x03') && (local_108 != (undefined ***)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_108 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (*(code *)(*local_108)[2])();
      }
    }
    if ((fVar17 != 1.0) || (NAN(fVar17))) {
      *(undefined1 *)(param_1 + 0x6b) = 1;
      *(float *)(param_1 + 0x69) = fVar17 * *(float *)(param_1 + 0x69);
    }
  }
  if ((char)param_1[0x9b] != '\0') {
    if ((param_1[0x87] != 0) && ((longlong *)param_1[0x88] != (longlong *)0x0)) {
      (**(code **)(*(longlong *)param_1[0x88] + 0x10))();
    }
    FUN_140ef3800(param_1 + 0x67);
    FUN_140ef3800(param_1 + 0x67);
  }
  if (((char)param_1[0xa3] == '\0') && (param_1[5] != 0)) {
    lVar8 = FUN_140ccfc10();
    local_118 = (code *)((ulonglong)local_118 & 0xffffffffffffff00);
    local_f0 = (longlong *)((ulonglong)local_f0 & 0xffffffff00000000);
    FUN_1456bb102(&local_118,param_1[5]);
    pfVar11 = &local_d0;
    FUN_1448729ea(lVar8 + 0x108,pfVar11,&local_118);
    if (local_b0 == 3) {
      uVar7 = 3;
    }
    else {
      pfVar12 = &local_a8;
      FUN_1400b56fe(pfVar12,&local_d0,3);
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_88 * 0x120));
      if (pcVar3 != (code *)0x0) {
        if (0x18 < local_90) {
          pfVar12 = (float *)CONCAT44(uStack_a4,local_a8);
        }
        (*pcVar3)(pfVar12);
      }
      if (0x18 < local_90) {
        FUN_1400020a8(CONCAT44(uStack_a4,local_a8));
      }
      uVar7 = (uint)local_b0;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar7 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_b8) {
        pfVar11 = (float *)CONCAT44(uStack_cc,local_d0);
      }
      (*pcVar3)(pfVar11);
    }
    if (0x18 < local_b8) {
      FUN_1400020a8(CONCAT44(uStack_cc,local_d0));
    }
    FUN_1448173f8(&local_f0);
    if (((char)local_118 == '\x03') && (local_108 != (undefined ***)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_108 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (*(code *)(*local_108)[2])();
      }
    }
    if (0 < (int)param_1[0x12]) {
      plVar9 = (longlong *)param_1[0x11];
      if ((longlong *)param_1[0x11] == (longlong *)0x0) {
        plVar9 = param_1 + 0xb;
      }
      if ((*plVar9 != 0) && ((int)plVar9[1] - 1U < 0xfffffffe)) {
        local_108 = (undefined ***)0x0;
        local_f8 = &PTR_LAB_14b3f7020;
        local_118 = FUN_143d0a6d2;
        local_f0 = param_1;
        FUN_140cf3304(param_1 + 0xb,&local_118);
        if (local_118 != (code *)0x0) {
          pppuVar10 = local_108;
          if (local_108 == (undefined ***)0x0) {
            pppuVar10 = &local_f8;
          }
          (*(code *)(*pppuVar10)[2])();
        }
      }
    }
    FUN_140ef3800(param_1 + 0x67);
  }
  if (*(int *)((longlong)param_1 + 0x514) != 0) {
    FUN_140ccfc10();
    if ((char)param_1[0x6b] == '\x01') {
      fVar17 = ((*(float *)(param_1 + 0x67) + 1.0) / (1.0 - *(float *)((longlong)param_1 + 0x33c)))
               * *(float *)(param_1 + 0x69) *
               (*(float *)((longlong)param_1 + 0x34c) + *(float *)(param_1 + 0x68)) +
               *(float *)((longlong)param_1 + 0x344);
      *(float *)((longlong)param_1 + 0x354) = fVar17;
      *(undefined1 *)(param_1 + 0x6b) = 0;
    }
    else {
      fVar17 = *(float *)((longlong)param_1 + 0x354);
    }
    FUN_140ef3800(param_1 + 0x67);
    if ((char)param_1[0x6b] == '\x01') {
      fVar15 = ((*(float *)(param_1 + 0x67) + 1.0) / (1.0 - *(float *)((longlong)param_1 + 0x33c)))
               * *(float *)(param_1 + 0x69) *
               (*(float *)((longlong)param_1 + 0x34c) + *(float *)(param_1 + 0x68)) +
               *(float *)((longlong)param_1 + 0x344);
      *(float *)((longlong)param_1 + 0x354) = fVar15;
      *(undefined1 *)(param_1 + 0x6b) = 0;
    }
    else {
      fVar15 = *(float *)((longlong)param_1 + 0x354);
    }
    *(float *)((longlong)param_1 + 0x374) = fVar17 - fVar15;
  }
  if ((*(char *)((longlong)param_1 + 0x53e) == '\0') &&
     (*(char *)((longlong)param_1 + 0x53f) == '\0')) {
    if ((param_1[0x8b] != 0) && ((longlong *)param_1[0x8c] != (longlong *)0x0)) {
      (**(code **)(*(longlong *)param_1[0x8c] + 0x10))();
    }
    FUN_140ef3800(param_1 + 0x67);
    FUN_140ef3800(param_1 + 0x67);
  }
  if (param_1[10] != 0) {
    lVar13 = param_1[10] + 0x70;
    lVar8 = param_1[0x8d];
    if ((lVar8 == 0) || (param_1[0x8e] == 0)) {
      lVar8 = param_1[5];
    }
    FUN_140ef3872(lVar13,lVar8);
    FUN_140ce165c(lVar13,param_1[0x8f]);
    if ((char)param_1[0x6b] == '\x01') {
      fVar17 = ((*(float *)(param_1 + 0x67) + 1.0) / (1.0 - *(float *)((longlong)param_1 + 0x33c)))
               * *(float *)(param_1 + 0x69) *
               (*(float *)((longlong)param_1 + 0x34c) + *(float *)(param_1 + 0x68)) +
               *(float *)((longlong)param_1 + 0x344);
      *(float *)((longlong)param_1 + 0x354) = fVar17;
      *(undefined1 *)(param_1 + 0x6b) = 0;
    }
    else {
      fVar17 = *(float *)((longlong)param_1 + 0x354);
    }
    FUN_140ef3800(param_1 + 0x67);
    FUN_140ef3800(param_1 + 0x67);
    if ((char)param_1[0x6b] == '\x01') {
      fVar15 = ((*(float *)(param_1 + 0x67) + 1.0) / (1.0 - *(float *)((longlong)param_1 + 0x33c)))
               * *(float *)(param_1 + 0x69) *
               (*(float *)((longlong)param_1 + 0x34c) + *(float *)(param_1 + 0x68)) +
               *(float *)((longlong)param_1 + 0x344);
      *(float *)((longlong)param_1 + 0x354) = fVar15;
      *(undefined1 *)(param_1 + 0x6b) = 0;
    }
    else {
      fVar15 = *(float *)((longlong)param_1 + 0x354);
    }
    *(float *)(param_1 + 0x6f) = fVar17 - fVar15;
  }
  if (0 < (int)param_1[0x12]) {
    plVar9 = (longlong *)param_1[0x11];
    if ((longlong *)param_1[0x11] == (longlong *)0x0) {
      plVar9 = param_1 + 0xb;
    }
    if ((*plVar9 != 0) && ((int)plVar9[1] - 1U < 0xfffffffe)) {
      if ((char)param_1[0x6b] == '\x01') {
        fVar17 = ((*(float *)(param_1 + 0x67) + 1.0) / (1.0 - *(float *)((longlong)param_1 + 0x33c))
                 ) * *(float *)(param_1 + 0x69) *
                 (*(float *)((longlong)param_1 + 0x34c) + *(float *)(param_1 + 0x68)) +
                 *(float *)((longlong)param_1 + 0x344);
        *(float *)((longlong)param_1 + 0x354) = fVar17;
        *(undefined1 *)(param_1 + 0x6b) = 0;
      }
      else {
        fVar17 = *(float *)((longlong)param_1 + 0x354);
      }
      local_108 = (undefined ***)0x0;
      local_f8 = &PTR_LAB_14b3f7040;
      local_118 = FUN_143d0a8c8;
      local_f0 = param_1;
      FUN_140cf3304(param_1 + 0xb,&local_118);
      if (local_118 != (code *)0x0) {
        pppuVar10 = local_108;
        if (local_108 == (undefined ***)0x0) {
          pppuVar10 = &local_f8;
        }
        (*(code *)(*pppuVar10)[2])();
      }
      if ((char)param_1[0x6b] == '\x01') {
        fVar15 = ((*(float *)(param_1 + 0x67) + 1.0) / (1.0 - *(float *)((longlong)param_1 + 0x33c))
                 ) * *(float *)(param_1 + 0x69) *
                 (*(float *)((longlong)param_1 + 0x34c) + *(float *)(param_1 + 0x68)) +
                 *(float *)((longlong)param_1 + 0x344);
        *(float *)((longlong)param_1 + 0x354) = fVar15;
        *(undefined1 *)(param_1 + 0x6b) = 0;
      }
      else {
        fVar15 = *(float *)((longlong)param_1 + 0x354);
      }
      *(float *)((longlong)param_1 + 0x37c) = fVar17 - fVar15;
    }
  }
  if ((char)param_1[0xa8] == '\x01') {
    *(byte *)((longlong)param_1 + 0x39c) = *(byte *)((longlong)param_1 + 0x39c) | 1;
    FUN_140ef3800(param_1 + 0x67);
  }
  lVar8 = param_1[0x91];
  if (lVar8 == 0) goto LAB_143cffc91;
  if (*(int *)(lVar8 + 0x2ac) < *(int *)(lVar8 + 0x280)) {
    if ((char)param_1[0x6b] == '\x01') {
      *(float *)((longlong)param_1 + 0x354) =
           ((*(float *)(param_1 + 0x67) + 1.0) / (1.0 - *(float *)((longlong)param_1 + 0x33c))) *
           *(float *)(param_1 + 0x69) *
           (*(float *)((longlong)param_1 + 0x34c) + *(float *)(param_1 + 0x68)) +
           *(float *)((longlong)param_1 + 0x344);
      *(undefined1 *)(param_1 + 0x6b) = 0;
    }
    if (((char)param_1[0x9b] == '\0') || ((longlong)(int)param_1[0x9a] < 1)) {
      plVar9 = (longlong *)FUN_1402179b4(param_1 + 0x95);
      if (plVar9 != (longlong *)0x0) {
        if (((*(byte *)(param_1 + 0x3a) & 0x20) == 0) || ((*(byte *)(plVar9 + 0x1a) & 1) == 0)) {
          (**(code **)(*plVar9 + 0x18))(plVar9,param_1[0x8f]);
        }
        else {
          (**(code **)(*plVar9 + 0x20))(plVar9,param_1[0x8f]);
        }
      }
    }
    else {
      lVar8 = param_1[0x99];
      lVar13 = (longlong)(int)param_1[0x9a] << 5;
      do {
        plVar9 = (longlong *)FUN_1402179b4(lVar8);
        if (plVar9 != (longlong *)0x0) {
          if (((*(byte *)(param_1 + 0x3a) & 0x20) == 0) ||
             (lVar14 = 0x20, (*(byte *)(plVar9 + 0x1a) & 1) == 0)) {
            lVar14 = 0x18;
          }
          (**(code **)(*plVar9 + lVar14))(plVar9,param_1[0x8f]);
        }
        lVar8 = lVar8 + 0x20;
        lVar13 = lVar13 + -0x20;
      } while (lVar13 != 0);
    }
    FUN_140ef3800(param_1 + 0x67);
    lVar8 = param_1[0x91];
    if (lVar8 == 0) goto LAB_143cffc91;
  }
  if (((*(byte *)(param_1 + 0x3a) & 2) != 0) && ((char)param_1[0x74] == '\0')) {
    if ((char)param_1[0x6b] == '\x01') {
      fVar17 = ((*(float *)(param_1 + 0x67) + 1.0) / (1.0 - *(float *)((longlong)param_1 + 0x33c)))
               * *(float *)(param_1 + 0x69) *
               (*(float *)((longlong)param_1 + 0x34c) + *(float *)(param_1 + 0x68)) +
               *(float *)((longlong)param_1 + 0x344);
      *(float *)((longlong)param_1 + 0x354) = fVar17;
      *(undefined1 *)(param_1 + 0x6b) = 0;
    }
    else {
      fVar17 = *(float *)((longlong)param_1 + 0x354);
    }
    fVar15 = *(float *)(lVar8 + 0x4c0);
    fVar16 = 0.0;
    if ((param_1[0x8b] != 0) && ((longlong *)param_1[0x8c] != (longlong *)0x0)) {
      lVar8 = (**(code **)(*(longlong *)param_1[0x8c] + 0x10))();
      fVar16 = *(float *)(lVar8 + 0x1d4);
    }
    if ((fVar15 <= 0.0) || (uVar7 = rand(), fVar15 < (float)(uVar7 & 0x7fff) / 32767.0)) {
      lVar8 = FUN_1402179b4();
      if (lVar8 == 0) {
        fVar15 = 1.0;
        goto LAB_143cffa9f;
      }
      if ((char)param_1[0x9b] != '\x01') {
        if ((*(byte *)(lVar8 + 0xd0) & 2) == 0) {
          if ((*(byte *)(lVar8 + 0xd0) & 4) != 0) {
            uVar7 = rand();
            local_118 = (code *)((ulonglong)local_118 & 0xffffffffffffff00);
            local_f0 = (longlong *)((ulonglong)local_f0 & 0xffffffff00000000);
            FUN_1456bb102(&local_118,param_1[0x8f]);
            pfVar11 = &local_d0;
            FUN_1448729ea(lVar8 + 0x128,pfVar11,&local_118);
            if (local_b0 == 3) {
              fVar15 = local_d0;
              bVar6 = 3;
            }
            else {
              pfVar12 = &local_a8;
              FUN_1400b56fe(pfVar12,&local_d0,3);
              fVar15 = 0.0;
              if (local_88 != 0) {
                fVar15 = local_a8;
              }
              pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_88 * 0x120));
              if (pcVar3 != (code *)0x0) {
                if (0x18 < local_90) {
                  pfVar12 = (float *)CONCAT44(uStack_a4,local_a8);
                }
                (*pcVar3)(pfVar12);
              }
              bVar6 = local_b0;
              if (0x18 < local_90) {
                FUN_1400020a8(CONCAT44(uStack_a4,local_a8));
                bVar6 = local_b0;
              }
            }
            pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar6 * 0x120));
            if (pcVar3 != (code *)0x0) {
              if (0x18 < local_b8) {
                pfVar11 = (float *)CONCAT44(uStack_cc,local_d0);
              }
              (*pcVar3)(pfVar11);
            }
            if (0x18 < local_b8) {
              FUN_1400020a8(CONCAT44(uStack_cc,local_d0));
            }
            FUN_1448173f8();
            if (((char)local_118 == '\x03') && (local_108 != (undefined ***)0x0)) {
              LOCK();
              piVar1 = (int *)((longlong)local_108 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (*(code *)(*local_108)[2])();
              }
            }
            if ((float)(uVar7 & 0x7fff) / 32767.0 <= fVar15) goto LAB_143d00858;
          }
          goto LAB_143d000ba;
        }
        uVar7 = rand();
        local_118 = (code *)((ulonglong)local_118 & 0xffffffffffffff00);
        local_f0 = (longlong *)((ulonglong)local_f0 & 0xffffffff00000000);
        FUN_1456bb102(&local_118,param_1[0x8f]);
        pfVar11 = &local_d0;
        FUN_1448729ea(lVar8 + 0xd8,pfVar11,&local_118);
        if (local_b0 == 3) {
          fVar15 = local_d0;
          bVar6 = 3;
        }
        else {
          pfVar12 = &local_a8;
          FUN_1400b56fe(pfVar12,&local_d0,3);
          fVar15 = 0.0;
          if (local_88 != 0) {
            fVar15 = local_a8;
          }
          pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_88 * 0x120));
          if (pcVar3 != (code *)0x0) {
            if (0x18 < local_90) {
              pfVar12 = (float *)CONCAT44(uStack_a4,local_a8);
            }
            (*pcVar3)(pfVar12);
          }
          bVar6 = local_b0;
          if (0x18 < local_90) {
            FUN_1400020a8(CONCAT44(uStack_a4,local_a8));
            bVar6 = local_b0;
          }
        }
        pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar6 * 0x120));
        if (pcVar3 != (code *)0x0) {
          if (0x18 < local_b8) {
            pfVar11 = (float *)CONCAT44(uStack_cc,local_d0);
          }
          (*pcVar3)(pfVar11);
        }
        if (0x18 < local_b8) {
          FUN_1400020a8(CONCAT44(uStack_cc,local_d0));
        }
        FUN_1448173f8();
        if (((char)local_118 == '\x03') && (local_108 != (undefined ***)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)local_108 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (*(code *)(*local_108)[2])();
          }
        }
        if (fVar15 < (float)(uVar7 & 0x7fff) / 32767.0) {
          if ((*(byte *)(lVar8 + 0xd0) & 8) == 0) goto LAB_143d000ba;
LAB_143d00858:
          *(undefined1 *)(param_1 + 0x74) = 3;
        }
        else {
          *(undefined1 *)(param_1 + 0x74) = 2;
          *(undefined4 *)(param_1 + 0x76) = *(undefined4 *)(lVar8 + 0x178);
        }
LAB_143d00904:
        local_118 = (code *)((ulonglong)local_118 & 0xffffffffffffff00);
        local_f0 = (longlong *)((ulonglong)local_f0 & 0xffffffff00000000);
        FUN_1456bb102(&local_118,param_1[0x8f]);
        pfVar11 = &local_d0;
        FUN_1448729ea(lVar8 + 0x180,pfVar11,&local_118);
        if (local_b0 == 3) {
          fVar15 = local_d0;
          bVar6 = 3;
        }
        else {
          pfVar12 = &local_a8;
          FUN_1400b56fe(pfVar12,&local_d0,3);
          fVar15 = local_a8;
          if (local_88 == 0) {
            fVar15 = 1.0;
          }
          pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_88 * 0x120));
          if (pcVar3 != (code *)0x0) {
            if (0x18 < local_90) {
              pfVar12 = (float *)CONCAT44(uStack_a4,local_a8);
            }
            (*pcVar3)(pfVar12);
          }
          bVar6 = local_b0;
          if (0x18 < local_90) {
            FUN_1400020a8(CONCAT44(uStack_a4,local_a8));
            bVar6 = local_b0;
          }
        }
        pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar6 * 0x120));
        if (pcVar3 != (code *)0x0) {
          if (0x18 < local_b8) {
            pfVar11 = (float *)CONCAT44(uStack_cc,local_d0);
          }
          (*pcVar3)(pfVar11);
        }
        if (0x18 < local_b8) {
          FUN_1400020a8(CONCAT44(uStack_cc,local_d0));
        }
        FUN_1448173f8(&local_f0);
        if (((char)local_118 == '\x03') && (local_108 != (undefined ***)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)local_108 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (*(code *)(*local_108)[2])();
          }
        }
        *(undefined4 *)(param_1 + 0x76) = *(undefined4 *)(lVar8 + 0x178);
        *(byte *)((longlong)param_1 + 0x3ac) = *(byte *)(lVar8 + 0xd0) >> 4 & 1;
        local_118 = (code *)((ulonglong)local_118 & 0xffffffffffffff00);
        local_f0 = (longlong *)((ulonglong)local_f0 & 0xffffffff00000000);
        FUN_1456bb102(&local_118,param_1[0x8f]);
        pfVar11 = &local_d0;
        FUN_1448729ea(lVar8 + 0x1d0,pfVar11,&local_118);
        if (local_b0 == 3) {
          local_b0 = 3;
          fVar18 = local_d0;
        }
        else {
          pfVar12 = &local_a8;
          FUN_1400b56fe(pfVar12,&local_d0,3);
          fVar18 = local_a8;
          if (local_88 == 0) {
            fVar18 = 1.0;
          }
          pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_88 * 0x120));
          if (pcVar3 != (code *)0x0) {
            if (0x18 < local_90) {
              pfVar12 = (float *)CONCAT44(uStack_a4,local_a8);
            }
            (*pcVar3)(pfVar12);
          }
          if (0x18 < local_90) {
            FUN_1400020a8(CONCAT44(uStack_a4,local_a8));
          }
        }
        *(float *)((longlong)param_1 + 0x3a4) = fVar18;
        pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_b0 * 0x120));
        if (pcVar3 != (code *)0x0) {
          if (0x18 < local_b8) {
            pfVar11 = (float *)CONCAT44(uStack_cc,local_d0);
          }
          (*pcVar3)(pfVar11);
        }
        if (0x18 < local_b8) {
          FUN_1400020a8(CONCAT44(uStack_cc,local_d0));
        }
        FUN_1448173f8(&local_f0);
        if (((char)local_118 == '\x03') && (local_108 != (undefined ***)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)local_108 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (*(code *)(*local_108)[2])();
          }
        }
        *(float *)(param_1 + 0x75) = fVar17 * fVar15;
        param_1[0x77] = *(longlong *)(param_1[0x91] + 0x4f0);
        (**(code **)(param_1[0x78] + 0x20))(param_1 + 0x78,0);
        param_1[0x79] = *(longlong *)(lVar8 + 0x228);
        FUN_1406022fe(param_1 + 0x7a,lVar8 + 0x230);
        goto LAB_143cffa9f;
      }
LAB_143d000ba:
      if ((char)param_1[0x74] != '\0') goto LAB_143d00904;
      fVar15 = 1.0;
LAB_143d000d0:
      if ((char)param_1[0xa5] != '\0') {
        uVar7 = rand();
        if ((float)(uVar7 & 0x7fff) / 32767.0 <= *(float *)((longlong)param_1 + 0x52c)) {
          cVar5 = (char)param_1[0xa5];
          *(char *)(param_1 + 0x74) = cVar5;
          *(char *)((longlong)param_1 + 0x3ac) = (char)param_1[0xa7];
          *(undefined4 *)(param_1 + 0x76) = *(undefined4 *)((longlong)param_1 + 0x534);
          *(int *)((longlong)param_1 + 0x3a4) = (int)param_1[0xa6];
          *(float *)(param_1 + 0x75) = fVar17;
        }
        else {
          if (*(char *)((longlong)param_1 + 0x539) != '\0') {
            *(undefined1 *)(param_1 + 0x74) = 3;
            *(undefined1 *)((longlong)param_1 + 0x3ac) = 0;
            *(int *)((longlong)param_1 + 0x3a4) = (int)param_1[0xa6];
            *(float *)(param_1 + 0x75) = fVar17;
            goto LAB_143cffaac;
          }
          cVar5 = (char)param_1[0x74];
        }
        if (cVar5 != '\0') goto LAB_143cffaac;
      }
      if (param_1[0x8b] != 0) {
        if ((((0.0 < fVar16) && (param_1[0x8c] != 0)) &&
            (uVar7 = rand(), (float)(uVar7 & 0x7fff) / 32767.0 <= fVar16)) &&
           ((int)param_1[0xa2] == 2)) {
          if (param_1[0x8b] == 0) {
            plVar9 = (longlong *)0x0;
          }
          else {
            plVar9 = (longlong *)param_1[0x8c];
          }
          lVar8 = (**(code **)(*plVar9 + 0x10))();
          fVar15 = *(float *)(lVar8 + 0x1e4);
          *(undefined1 *)(param_1 + 0x74) = 1;
          *(undefined1 *)((longlong)param_1 + 0x3ac) = *(undefined1 *)(lVar8 + 0x1e8);
          *(undefined4 *)((longlong)param_1 + 0x3a4) = *(undefined4 *)(lVar8 + 0x1e0);
          *(float *)(param_1 + 0x75) = fVar17 * fVar15;
          param_1[0x77] = *(longlong *)(lVar8 + 0x1f0);
          (**(code **)(param_1[0x78] + 0x20))(param_1 + 0x78,0);
          param_1[0x79] = *(longlong *)(lVar8 + 0x200);
          FUN_1406022fe(param_1 + 0x7a,lVar8 + 0x208);
        }
        if ((char)param_1[0x74] != '\0') goto LAB_143cffaac;
      }
    }
    else {
      lVar8 = param_1[0x91];
      FUN_1405c5fa2();
      local_f8 = (undefined **)&DAT_14cb769e8;
      local_f0 = (longlong *)0x0;
      uStack_e8 = 0;
      local_100 = &PTR_FUN_14b0394b0;
      uVar2 = *(undefined4 *)(lVar8 + 0x4d8);
      fVar15 = *(float *)(lVar8 + 0x4cc);
      local_118 = (code *)CONCAT44(fVar15,uVar2);
      local_110 = *(int *)(lVar8 + 0x4e4) != 0;
      local_108 = *(undefined ****)(lVar8 + 0x4f0);
      *(undefined1 *)(param_1 + 0x74) = 2;
      *(undefined1 *)((longlong)param_1 + 0x3ac) = local_110;
      *(undefined4 *)((longlong)param_1 + 0x3a4) = uVar2;
      *(float *)(param_1 + 0x75) = fVar17 * fVar15;
      param_1[0x77] = (longlong)local_108;
      (**(code **)(param_1[0x78] + 0x20))(param_1 + 0x78,0);
      param_1[0x79] = (longlong)&DAT_14cb769e8;
      FUN_1406022fe(param_1 + 0x7a,&local_f0);
      local_100 = (undefined **)&DAT_14a171d50;
      uVar4 = uStack_e8 >> 0x20;
      uStack_e8 = uStack_e8 & 0xffffffff00000000;
      if ((int)uVar4 != 0) {
        FUN_140115c12(&local_f0,0);
      }
      local_f8 = (undefined **)0x0;
      if (local_f0 != (longlong *)0x0) {
        FUN_1400020a8();
      }
LAB_143cffa9f:
      if ((char)param_1[0x74] == '\0') goto LAB_143d000d0;
LAB_143cffaac:
      if ((fVar15 != 1.0) || (NAN(fVar15))) {
        fVar15 = fVar15 * *(float *)(param_1 + 0x69);
        *(float *)(param_1 + 0x69) = fVar15;
LAB_143cffb23:
        fVar15 = ((*(float *)(param_1 + 0x67) + 1.0) / (1.0 - *(float *)((longlong)param_1 + 0x33c))
                 ) * fVar15 * (*(float *)((longlong)param_1 + 0x34c) + *(float *)(param_1 + 0x68)) +
                 *(float *)((longlong)param_1 + 0x344);
        *(float *)((longlong)param_1 + 0x354) = fVar15;
        *(undefined1 *)(param_1 + 0x6b) = 0;
      }
      else {
        if ((*(byte *)(param_1 + 0x6b) & 1) != 0) {
          fVar15 = *(float *)(param_1 + 0x69);
          goto LAB_143cffb23;
        }
        fVar15 = *(float *)((longlong)param_1 + 0x354);
      }
      *(float *)((longlong)param_1 + 900) = fVar17 - fVar15;
    }
  }
  if (param_1[0x91] != 0) {
    if ((char)param_1[0x6b] == '\x01') {
      fVar17 = ((*(float *)(param_1 + 0x67) + 1.0) / (1.0 - *(float *)((longlong)param_1 + 0x33c)))
               * *(float *)(param_1 + 0x69) *
               (*(float *)((longlong)param_1 + 0x34c) + *(float *)(param_1 + 0x68)) +
               *(float *)((longlong)param_1 + 0x344);
      *(float *)((longlong)param_1 + 0x354) = fVar17;
      *(undefined1 *)(param_1 + 0x6b) = 0;
    }
    else {
      fVar17 = *(float *)((longlong)param_1 + 0x354);
    }
    FUN_140ef3800(param_1 + 0x67);
    if ((char)param_1[0x6b] == '\x01') {
      fVar15 = ((*(float *)(param_1 + 0x67) + 1.0) / (1.0 - *(float *)((longlong)param_1 + 0x33c)))
               * *(float *)(param_1 + 0x69) *
               (*(float *)((longlong)param_1 + 0x34c) + *(float *)(param_1 + 0x68)) +
               *(float *)((longlong)param_1 + 0x344);
      *(float *)((longlong)param_1 + 0x354) = fVar15;
      *(undefined1 *)(param_1 + 0x6b) = 0;
    }
    else {
      fVar15 = *(float *)((longlong)param_1 + 0x354);
    }
    *(float *)((longlong)param_1 + 900) = fVar17 - fVar15;
  }
LAB_143cffc91:
  (**(code **)(*param_1 + 0x1e0))(param_1);
  (**(code **)(*param_1 + 0x1e8))(param_1);
  if ((char)param_1[0x4b] != '\x02') {
    if (((param_1[0x91] != 0) && (lVar8 = param_1[0x90], lVar8 != 0)) &&
       (0.0 < *(float *)(param_1[0x91] + 0x4ac))) {
      if (*(int *)(lVar8 + 0x40) < 1) {
        fVar17 = -1.0;
      }
      else {
        fVar17 = (float)FUN_14055830e(*(undefined8 *)(lVar8 + 0x38));
      }
      if ((char)param_1[0x6b] == '\x01') {
        fVar15 = ((*(float *)(param_1 + 0x67) + 1.0) / (1.0 - *(float *)((longlong)param_1 + 0x33c))
                 ) * *(float *)(param_1 + 0x69) *
                 (*(float *)((longlong)param_1 + 0x34c) + *(float *)(param_1 + 0x68)) +
                 *(float *)((longlong)param_1 + 0x344);
        *(float *)((longlong)param_1 + 0x354) = fVar15;
        *(undefined1 *)(param_1 + 0x6b) = 0;
      }
      else {
        fVar15 = *(float *)((longlong)param_1 + 0x354);
      }
      if ((fVar17 - fVar15 <= 0.0001) &&
         (uVar7 = rand(), (float)(uVar7 & 0x7fff) / 32767.0 <= *(float *)(param_1[0x91] + 0x4ac))) {
        param_1[0x67] = 0;
        param_1[0x68] = 0;
        param_1[0x69] = 0x3f800000;
        *(undefined4 *)((longlong)param_1 + 0x354) = 0;
        *(undefined1 *)(param_1 + 0x6a) = 1;
        *(undefined1 *)(param_1 + 0x6b) = 0;
      }
    }
    if ((((((*(byte *)(param_1 + 0x3a) & 8) == 0) && (param_1[0x91] != 0)) && (param_1[0x90] != 0))
        && (((*(byte *)(param_1[0x91] + 0x7d) & 2) != 0 &&
            (lVar8 = FUN_140ccfc10(), (char)param_1[0xa3] == '\0')))) &&
       (cVar5 = (**(code **)(*param_1 + 0x1f0))(param_1), cVar5 == '\0')) {
      if (*(int *)(param_1[0x90] + 0x40) < 1) {
        fVar17 = -1.0;
      }
      else {
        fVar17 = (float)FUN_14055830e(*(undefined8 *)(param_1[0x90] + 0x38));
      }
      if ((char)param_1[0x6b] == '\x01') {
        fVar15 = ((*(float *)(param_1 + 0x67) + 1.0) / (1.0 - *(float *)((longlong)param_1 + 0x33c))
                 ) * *(float *)(param_1 + 0x69) *
                 (*(float *)((longlong)param_1 + 0x34c) + *(float *)(param_1 + 0x68)) +
                 *(float *)((longlong)param_1 + 0x344);
        *(float *)((longlong)param_1 + 0x354) = fVar15;
        *(undefined1 *)(param_1 + 0x6b) = 0;
      }
      else {
        fVar15 = *(float *)((longlong)param_1 + 0x354);
      }
      lVar13 = param_1[0x91];
      if (((*(byte *)(lVar13 + 0x471) & 1) == 0) && (*(char *)((longlong)param_1 + 0x53a) == '\0'))
      {
        if (*(int *)(param_1[0x90] + 0x40) < 1) {
          fVar16 = -1.0;
        }
        else {
          fVar16 = (float)FUN_1405583ce(*(undefined8 *)(param_1[0x90] + 0x38));
          lVar13 = param_1[0x91];
        }
        fVar16 = fVar16 * *(float *)(lVar8 + 0xac);
        if ((fVar16 <= fVar17) && (fVar17 - fVar15 < fVar16)) {
          FUN_143d06c5c();
          lVar13 = param_1[0x91];
        }
      }
      if ((*(byte *)(lVar13 + 0x471) & 1) != 0) {
        if ((char)param_1[0x6b] == '\x01') {
          fVar16 = ((*(float *)(param_1 + 0x67) + 1.0) /
                   (1.0 - *(float *)((longlong)param_1 + 0x33c))) * *(float *)(param_1 + 0x69) *
                   (*(float *)((longlong)param_1 + 0x34c) + *(float *)(param_1 + 0x68)) +
                   *(float *)((longlong)param_1 + 0x344);
          *(float *)((longlong)param_1 + 0x354) = fVar16;
          *(undefined1 *)(param_1 + 0x6b) = 0;
        }
        else {
          fVar16 = *(float *)((longlong)param_1 + 0x354);
        }
        fVar17 = fVar17 - *(float *)(lVar13 + 0x4b4);
        uVar7 = -(uint)(fVar15 < fVar17);
        fVar17 = (float)(uVar7 & (uint)fVar16 | ~uVar7 & (uint)fVar17);
        fVar16 = 0.0;
        if (0.0 <= fVar17) {
          fVar16 = fVar17;
        }
        *(float *)(param_1 + 0x72) = fVar15 - fVar16;
        param_1[0x67] = 0;
        param_1[0x68] = 0;
        *(undefined4 *)(param_1 + 0x69) = 0x3f800000;
        *(float *)((longlong)param_1 + 0x34c) = fVar16;
        *(float *)((longlong)param_1 + 0x354) = fVar16;
        *(undefined1 *)(param_1 + 0x6a) = 1;
        *(undefined1 *)(param_1 + 0x6b) = 0;
      }
    }
    if ((*(char *)((longlong)param_1 + 0x53b) == '\x01') && (lVar8 = param_1[0x90], lVar8 != 0)) {
      if (*(int *)(lVar8 + 0x40) < 1) {
        fVar17 = -2.0;
      }
      else {
        fVar17 = (float)FUN_14055830e(*(undefined8 *)(lVar8 + 0x38));
        fVar17 = fVar17 + -1.0;
      }
      if ((char)param_1[0x6b] == '\x01') {
        fVar15 = ((*(float *)(param_1 + 0x67) + 1.0) / (1.0 - *(float *)((longlong)param_1 + 0x33c))
                 ) * *(float *)(param_1 + 0x69) *
                 (*(float *)((longlong)param_1 + 0x34c) + *(float *)(param_1 + 0x68)) +
                 *(float *)((longlong)param_1 + 0x344);
      }
      else {
        fVar15 = *(float *)((longlong)param_1 + 0x354);
      }
      fVar15 = (float)(~-(uint)(fVar17 <= fVar15) & (uint)fVar15 |
                      (uint)fVar17 & -(uint)(fVar17 <= fVar15));
      fVar17 = 0.0;
      if (0.0 <= fVar15) {
        fVar17 = fVar15;
      }
      param_1[0x67] = 0;
      param_1[0x68] = 0;
      *(undefined4 *)(param_1 + 0x69) = 0x3f800000;
      *(float *)((longlong)param_1 + 0x34c) = fVar17;
      *(float *)((longlong)param_1 + 0x354) = fVar17;
      *(undefined1 *)(param_1 + 0x6a) = 1;
      *(undefined1 *)(param_1 + 0x6b) = 0;
    }
  }
  if ((local_80 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d00e0a FUN_143d00e0a body=1196 status=ok
// SIG undefined FUN_143d00e0a(void)

void FUN_143d00e0a(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  undefined1 uVar6;
  longlong *plVar7;
  undefined ***pppuVar8;
  code *pcVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
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
  code *local_88;
  longlong local_80;
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar2 = *(longlong *)(param_1 + 0x478);
  if (lVar2 == 0) {
LAB_143d00e70:
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x478) + 0x1b0);
    lVar3 = *(longlong *)(param_1 + 0x28);
    if (((*(longlong *)(param_1 + 0x50) == 0) ||
        (uVar6 = 1, *(char *)(*(longlong *)(param_1 + 0x50) + 0x38) == '\0')) &&
       (uVar6 = 2, *(char *)(param_1 + 600) != '\x01')) {
      if (((*(int *)(param_1 + 0x510) == 0) &&
          (lVar11 = *(longlong *)(param_1 + 0x480), lVar11 != 0)) && (0 < *(int *)(param_1 + 0x90)))
      {
        plVar7 = *(longlong **)(param_1 + 0x88);
        if (*(longlong **)(param_1 + 0x88) == (longlong *)0x0) {
          plVar7 = (longlong *)(param_1 + 0x58);
        }
        if (((*plVar7 != 0) && ((int)plVar7[1] - 1U < 0xfffffffe)) &&
           ((longlong)*(int *)(lVar11 + 0x40) != 0)) {
          lVar10 = *(longlong *)(lVar11 + 0x38);
          lVar11 = (longlong)*(int *)(lVar11 + 0x40) * 0x88;
          do {
            local_78 = (undefined ***)0x0;
            local_68 = &PTR_LAB_14b3f70a0;
            local_88 = FUN_143d0ab4c;
            local_60 = param_1;
            local_58 = lVar10;
            cVar5 = FUN_1402d0c8a((longlong *)(param_1 + 0x58),&local_88);
            if (local_88 != (code *)0x0) {
              pppuVar8 = local_78;
              if (local_78 == (undefined ***)0x0) {
                pppuVar8 = &local_68;
              }
              (*(code *)(*pppuVar8)[2])();
            }
            if (cVar5 != '\0') {
              uVar6 = 3;
              goto LAB_143d00e9e;
            }
            lVar10 = lVar10 + 0x88;
            lVar11 = lVar11 + -0x88;
          } while (lVar11 != 0);
        }
      }
      *(undefined1 *)(param_1 + 0x51c) = 0;
      lVar11 = *(longlong *)(param_1 + 0x480);
      if ((lVar11 != 0) && (*(longlong *)(param_1 + 0x488) != 0)) {
        if ((*(byte *)(lVar11 + 0x55) & 4) == 0) {
          if ((0 < *(int *)(lVar11 + 0x40)) &&
             (fVar12 = (float)FUN_14055830e(*(undefined8 *)(lVar11 + 0x38)), fVar12 <= 0.0)) {
            bVar4 = *(byte *)(*(longlong *)(param_1 + 0x488) + 0x470) & 0x40;
joined_r0x000143d01064:
            if (bVar4 == 0) goto LAB_143d00efb;
          }
        }
        else if ((*(byte *)(*(longlong *)(param_1 + 0x488) + 0x470) & 0x20) == 0) {
          bVar4 = *(byte *)(param_1 + 0x548);
          goto joined_r0x000143d01064;
        }
      }
      local_80 = *(longlong *)(param_1 + 0x28);
      if (DAT_14c950c29 == 1) {
        if (local_80 == 0) {
          local_80 = 0;
        }
        else {
          FUN_1456cec3c();
          local_80 = *(longlong *)(param_1 + 0x28);
        }
      }
      pcVar9 = *(code **)(param_1 + 0x38);
      if ((DAT_14c950c29 & 1) != 0) {
        if (pcVar9 == (code *)0x0) {
          pcVar9 = (code *)0x0;
        }
        else {
          FUN_1456cec3c();
          pcVar9 = *(code **)(param_1 + 0x38);
        }
      }
      local_88 = pcVar9;
      cVar5 = FUN_140a8bacc(&local_88,*(undefined8 *)(param_1 + 0x478));
      if (((*(longlong *)(param_1 + 0x438) == 0) ||
          (*(longlong **)(param_1 + 0x440) == (longlong *)0x0)) ||
         (cVar5 != '\x01' || *(longlong *)(param_1 + 0x488) == 0)) {
LAB_143d0110c:
        if (cVar5 == '\0') {
          if (*(char *)(param_1 + 0x288) == '\x01') {
            lVar11 = param_1 + 0x260;
            lVar10 = *(longlong *)(param_1 + 0x488);
            if (lVar10 != 0) {
              lVar10 = lVar10 + 0x528;
            }
            uVar1 = *(undefined4 *)(param_1 + 0x510);
          }
          else {
            if ((*(longlong *)(param_1 + 0x438) == 0) ||
               (*(longlong **)(param_1 + 0x440) == (longlong *)0x0)) goto LAB_143d0119a;
            lVar11 = (**(code **)(**(longlong **)(param_1 + 0x440) + 0x10))();
            lVar11 = lVar11 + 0xd8;
            lVar10 = *(longlong *)(param_1 + 0x488);
            if (lVar10 != 0) {
              lVar10 = lVar10 + 0x528;
            }
            uVar1 = *(undefined4 *)(param_1 + 0x510);
          }
          cVar5 = FUN_141218324(lVar11,uVar1,lVar2 == lVar3,lVar10);
          uVar6 = 1;
          if (cVar5 == '\0') goto LAB_143d011bc;
        }
LAB_143d0119a:
        if (((*(longlong *)(param_1 + 0x488) == 0) ||
            (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x488) + 0x250), lVar2 == 0)) ||
           (uVar6 = 1, (*(byte *)(lVar2 + 0x62) & 4) != 0)) {
          uVar6 = 0;
        }
      }
      else if (*(char *)(param_1 + 0x291) == '\x01') {
        uVar6 = 1;
        if (*(char *)(param_1 + 0x290) != '\0') goto LAB_143d0110c;
      }
      else {
        lVar11 = (**(code **)(**(longlong **)(param_1 + 0x440) + 0x10))();
        uVar6 = 1;
        if (*(char *)(lVar11 + 0x100) == '\x01') goto LAB_143d0110c;
      }
LAB_143d011bc:
      *(undefined1 *)(param_1 + 0x51b) = uVar6;
      goto LAB_143d011c2;
    }
LAB_143d00e9e:
    *(undefined1 *)(param_1 + 0x51c) = uVar6;
    *(undefined1 *)(param_1 + 0x51b) = 2;
    if (((*(byte *)(param_1 + 0x1d1) & 1) == 0) || (*(char *)(param_1 + 0x288) != '\x01'))
    goto LAB_143d011c2;
    lVar11 = *(longlong *)(param_1 + 0x488);
    if (lVar11 != 0) {
      lVar11 = lVar11 + 0x528;
    }
    cVar5 = FUN_141218324(param_1 + 0x260,*(undefined4 *)(param_1 + 0x510),lVar2 == lVar3,lVar11);
    if (cVar5 != '\0') goto LAB_143d011c2;
  }
  else {
    if (DAT_14cb56270 == 0) {
      local_a0 = &local_88;
      local_88 = FUN_1449e2820;
      local_90 = FUN_14081d0ea;
      local_98 = FUN_1427b09ee;
      local_a8 = &LAB_148630fef;
      local_b0 = FUN_1464b6a91;
      local_b8 = L"Engine";
      local_c0 = 0;
      local_c8 = 0x10004001;
      local_d0 = 8;
      local_d8 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
    }
    plVar7 = (longlong *)FUN_144718840(lVar2,DAT_14cb56270);
    if ((plVar7 == (longlong *)0x0) ||
       (cVar5 = (**(code **)(*plVar7 + 0x70))(plVar7,param_1), cVar5 != '\0')) goto LAB_143d00e70;
  }
LAB_143d00efb:
  *(undefined1 *)(param_1 + 0x51b) = 1;
LAB_143d011c2:
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d012b8 FUN_143d012b8 body=3244 status=ok
// SIG undefined FUN_143d012b8(void)

void FUN_143d012b8(longlong *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  float fVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined ***pppuVar10;
  undefined8 *puVar11;
  undefined1 **ppuVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong *plVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  undefined4 uVar19;
  undefined1 **unaff_RDI;
  longlong lVar20;
  longlong lVar21;
  int *piVar22;
  undefined1 auStack_1f8 [32];
  float *local_1d8;
  undefined1 **local_1d0;
  char *local_1c8;
  char *local_1c0;
  float *local_1b8;
  char *local_1b0;
  undefined1 **local_1a8;
  undefined4 local_19c;
  longlong *local_198;
  longlong local_190;
  float local_184;
  char local_17f;
  char local_17e;
  char local_17d;
  float local_17c;
  undefined1 *local_178 [2];
  undefined ***local_168;
  undefined **local_158;
  undefined1 *local_150;
  undefined1 **local_78;
  undefined8 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  *(undefined1 *)(param_1 + 0xa8) = 0;
  cVar6 = FUN_14021794c();
  if (cVar6 == '\0') {
LAB_143d01389:
    uVar19 = 0;
  }
  else {
    if (0 < (int)param_1[0x12]) {
      plVar14 = (longlong *)param_1[0x11];
      if ((longlong *)param_1[0x11] == (longlong *)0x0) {
        plVar14 = param_1 + 0xb;
      }
      if ((*plVar14 != 0) && ((int)plVar14[1] - 1U < 0xfffffffe)) {
        unaff_RDI = local_178;
        local_168 = (undefined ***)0x0;
        local_158 = &PTR_LAB_14b3f76d0;
        local_150 = &LAB_143d0a992;
        local_178[0] = &LAB_1402d0d18;
        cVar6 = FUN_1402d0c8a();
        if (local_178[0] != (undefined1 *)0x0) {
          pppuVar10 = local_168;
          if (local_168 == (undefined ***)0x0) {
            pppuVar10 = &local_158;
          }
          (*(code *)(*pppuVar10)[2])();
        }
        if (cVar6 == '\0') goto LAB_143d01389;
      }
    }
    uVar19 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  }
  local_17c = 0.0;
  local_17d = '\0';
  local_17e = '\0';
  local_17f = '\0';
  local_19c = uVar19;
  if ((param_1[0x8b] != 0) && ((longlong *)param_1[0x8c] != (longlong *)0x0)) {
    lVar8 = (**(code **)(*(longlong *)param_1[0x8c] + 0x10))();
    local_178[0] = (undefined1 *)CONCAT44(local_178[0]._4_4_,*(undefined4 *)(lVar8 + 0x1c8));
    lVar8 = param_1[0x8b];
    if (lVar8 == 0) {
      plVar14 = (longlong *)0x0;
    }
    else {
      plVar14 = (longlong *)param_1[0x8c];
    }
    lVar9 = (**(code **)(*plVar14 + 0x10))();
    local_1d0 = local_178;
    local_1d8 = (float *)CONCAT71(local_1d8._1_7_,(char)uVar19);
    FUN_143d05850(param_1,lVar9 + 400,lVar8,0);
    if ((param_1[0x87] != 0) && (plVar14 = (longlong *)param_1[0x88], plVar14 != (longlong *)0x0)) {
      lVar8 = param_1[0x8b];
      plVar13 = (longlong *)0x0;
      if (lVar8 != 0) {
        plVar13 = (longlong *)param_1[0x8c];
      }
      if ((param_1[0x87] != lVar8) || (plVar14 != plVar13)) {
        lVar9 = (**(code **)(*plVar14 + 0x10))();
        local_1d0 = local_178;
        local_1d8 = (float *)CONCAT71(local_1d8._1_7_,(char)uVar19);
        FUN_143d05850(param_1,lVar9 + 400,lVar8,1);
      }
    }
    fVar5 = local_178[0]._0_4_;
    if ((0.0 < local_178[0]._0_4_) && (uVar7 = rand(), (float)(uVar7 & 0x7fff) / 32767.0 <= fVar5))
    {
      local_17d = '\x01';
      local_17e = '\x01';
    }
    if ((param_1[0x8b] != 0) && ((longlong *)param_1[0x8c] != (longlong *)0x0)) {
      lVar8 = (**(code **)(*(longlong *)param_1[0x8c] + 0x10))();
      uVar17 = (ulonglong)*(uint *)(lVar8 + 0x158);
      if (0 < (int)*(uint *)(lVar8 + 0x158)) {
        lVar9 = param_1[0x8b];
        if (lVar9 == 0) {
          lVar9 = param_1[5];
        }
        local_178[0] = (undefined1 *)((ulonglong)local_178[0] & 0xffffffffffffff00);
        piVar22 = (int *)(*(longlong *)(lVar8 + 0x150) + 0x1c);
        do {
          if ((*piVar22 == 0) || (uVar7 = piVar22[-1], (int)uVar7 < 0)) {
LAB_143d0162f:
            lVar8 = 0;
          }
          else {
            lVar8 = 0;
            if ((int)uVar7 < DAT_14c9647dc) {
              plVar14 = (longlong *)
                        ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
              if (((plVar14 == (longlong *)0x0) || ((int)plVar14[2] != *piVar22)) ||
                 ((*(uint *)(plVar14 + 1) & 0x10200000) != 0)) goto LAB_143d0162f;
              lVar8 = *plVar14;
            }
          }
          lVar20 = lVar9;
          if (lVar8 != 0) {
            lVar20 = lVar8;
          }
          if ((piVar22[-2] == 0) || (uVar7 = piVar22[-3], (int)uVar7 < 0)) {
LAB_143d01636:
            local_1d8 = (float *)0x0;
          }
          else {
            local_1d8 = (float *)0x0;
            if ((int)uVar7 < DAT_14c9647dc) {
              puVar11 = (undefined8 *)
                        ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
              if (((puVar11 == (undefined8 *)0x0) || (*(int *)(puVar11 + 2) != piVar22[-2])) ||
                 ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)) goto LAB_143d01636;
              local_1d8 = (float *)*puVar11;
            }
          }
          local_1a8 = local_178;
          local_1d0 = (undefined1 **)CONCAT71(local_1d0._1_7_,(char)local_19c);
          local_1c8 = &local_17e;
          local_1c0 = &local_17d;
          local_1b8 = &local_17c;
          local_1b0 = &local_17f;
          FUN_143d053dc(param_1,*(undefined8 *)(piVar22 + -7),0,lVar20);
          piVar22 = piVar22 + 8;
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
      }
    }
  }
  local_198 = param_1;
  if ((param_1[0x87] != 0) && (plVar14 = (longlong *)param_1[0x88], plVar14 != (longlong *)0x0)) {
    plVar13 = (longlong *)0x0;
    if (param_1[0x8b] != 0) {
      plVar13 = (longlong *)param_1[0x8c];
    }
    if ((param_1[0x87] != param_1[0x8b]) || (plVar14 != plVar13)) {
      lVar8 = (**(code **)(*plVar14 + 0x10))();
      iVar1 = *(int *)(lVar8 + 0x158);
      if (0 < (longlong)iVar1) {
        lVar9 = param_1[0x82];
        lVar8 = *(longlong *)(lVar8 + 0x150);
        local_178[0] = (undefined1 *)((ulonglong)local_178[0] & 0xffffffffffffff00);
        lVar20 = 0;
        do {
          iVar2 = *(int *)(lVar8 + 0x1c + lVar20);
          if ((iVar2 == 0) || (uVar7 = *(uint *)(lVar8 + 0x18 + lVar20), (int)uVar7 < 0)) {
LAB_143d017d7:
            lVar15 = 0;
          }
          else {
            lVar15 = 0;
            if ((int)uVar7 < DAT_14c9647dc) {
              plVar14 = (longlong *)
                        ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
              if (((plVar14 == (longlong *)0x0) || ((int)plVar14[2] != iVar2)) ||
                 ((*(uint *)(plVar14 + 1) & 0x10200000) != 0)) goto LAB_143d017d7;
              lVar15 = *plVar14;
            }
          }
          lVar21 = lVar9;
          if (lVar15 != 0) {
            lVar21 = lVar15;
          }
          iVar2 = *(int *)(lVar8 + 0x14 + lVar20);
          if ((iVar2 == 0) || (uVar7 = *(uint *)(lVar8 + 0x10 + lVar20), (int)uVar7 < 0)) {
LAB_143d017de:
            local_1d8 = (float *)0x0;
          }
          else {
            local_1d8 = (float *)0x0;
            if ((int)uVar7 < DAT_14c9647dc) {
              puVar11 = (undefined8 *)
                        ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
              if (((puVar11 == (undefined8 *)0x0) || (*(int *)(puVar11 + 2) != iVar2)) ||
                 ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)) goto LAB_143d017de;
              local_1d8 = (float *)*puVar11;
            }
          }
          local_1a8 = local_178;
          local_1d0 = (undefined1 **)CONCAT71(local_1d0._1_7_,(char)local_19c);
          local_1c8 = &local_17e;
          local_1c0 = &local_17d;
          local_1b8 = &local_17c;
          local_1b0 = &local_17f;
          FUN_143d053dc(local_198,*(undefined8 *)(lVar8 + lVar20),1,lVar21);
          lVar20 = lVar20 + 0x20;
          param_1 = local_198;
        } while ((longlong)iVar1 * 0x20 != lVar20);
      }
    }
  }
  lVar8 = param_1[0x91];
  if ((lVar8 != 0) && (iVar1 = *(int *)(lVar8 + 0x20), 0 < (longlong)iVar1)) {
    lVar9 = param_1[0x8f];
    lVar8 = *(longlong *)(lVar8 + 0x18);
    local_178[0] = (undefined1 *)((ulonglong)local_178[0] & 0xffffffffffffff00);
    lVar20 = 0;
    do {
      iVar2 = *(int *)(lVar8 + 0x1c + lVar20);
      if ((iVar2 == 0) || (uVar7 = *(uint *)(lVar8 + 0x18 + lVar20), (int)uVar7 < 0)) {
LAB_143d01940:
        lVar15 = 0;
      }
      else {
        lVar15 = 0;
        if ((int)uVar7 < DAT_14c9647dc) {
          plVar14 = (longlong *)
                    ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
          if (((plVar14 == (longlong *)0x0) || ((int)plVar14[2] != iVar2)) ||
             ((*(uint *)(plVar14 + 1) & 0x10200000) != 0)) goto LAB_143d01940;
          lVar15 = *plVar14;
        }
      }
      lVar21 = lVar9;
      if (lVar15 != 0) {
        lVar21 = lVar15;
      }
      iVar2 = *(int *)(lVar8 + 0x14 + lVar20);
      if ((iVar2 == 0) || (uVar7 = *(uint *)(lVar8 + 0x10 + lVar20), (int)uVar7 < 0)) {
LAB_143d01947:
        local_1d8 = (float *)0x0;
      }
      else {
        local_1d8 = (float *)0x0;
        if ((int)uVar7 < DAT_14c9647dc) {
          puVar11 = (undefined8 *)
                    ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
          if (((puVar11 == (undefined8 *)0x0) || (*(int *)(puVar11 + 2) != iVar2)) ||
             ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)) goto LAB_143d01947;
          local_1d8 = (float *)*puVar11;
        }
      }
      local_1a8 = local_178;
      local_1d0 = (undefined1 **)CONCAT71(local_1d0._1_7_,(char)local_19c);
      local_1c8 = &local_17e;
      local_1c0 = &local_17d;
      local_1b8 = &local_17c;
      local_1b0 = &local_17f;
      FUN_143d053dc(local_198,*(undefined8 *)(lVar8 + lVar20),0,lVar21);
      lVar20 = lVar20 + 0x20;
      param_1 = local_198;
    } while ((longlong)iVar1 * 0x20 != lVar20);
  }
  if ((longlong *)param_1[0x94] != (longlong *)0x0) {
    lVar8 = (**(code **)(*(longlong *)param_1[0x94] + 0x10))();
    iVar1 = *(int *)(lVar8 + 0x40);
    if (0 < (longlong)iVar1) {
      lVar9 = param_1[8];
      lVar8 = *(longlong *)(lVar8 + 0x38);
      local_178[0] = (undefined1 *)((ulonglong)local_178[0] & 0xffffffffffffff00);
      lVar20 = 0;
      do {
        iVar2 = *(int *)(lVar8 + 0x1c + lVar20);
        if ((iVar2 == 0) || (uVar7 = *(uint *)(lVar8 + 0x18 + lVar20), (int)uVar7 < 0)) {
LAB_143d01aac:
          lVar15 = 0;
        }
        else {
          lVar15 = 0;
          if ((int)uVar7 < DAT_14c9647dc) {
            plVar14 = (longlong *)
                      ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
            if (((plVar14 == (longlong *)0x0) || ((int)plVar14[2] != iVar2)) ||
               ((*(uint *)(plVar14 + 1) & 0x10200000) != 0)) goto LAB_143d01aac;
            lVar15 = *plVar14;
          }
        }
        lVar21 = lVar9;
        if (lVar15 != 0) {
          lVar21 = lVar15;
        }
        iVar2 = *(int *)(lVar8 + 0x14 + lVar20);
        if ((iVar2 == 0) || (uVar7 = *(uint *)(lVar8 + 0x10 + lVar20), (int)uVar7 < 0)) {
LAB_143d01ab3:
          local_1d8 = (float *)0x0;
        }
        else {
          local_1d8 = (float *)0x0;
          if ((int)uVar7 < DAT_14c9647dc) {
            puVar11 = (undefined8 *)
                      ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
            if (((puVar11 == (undefined8 *)0x0) || (*(int *)(puVar11 + 2) != iVar2)) ||
               ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)) goto LAB_143d01ab3;
            local_1d8 = (float *)*puVar11;
          }
        }
        local_1a8 = local_178;
        local_1d0 = (undefined1 **)CONCAT71(local_1d0._1_7_,(char)local_19c);
        local_1c8 = &local_17e;
        local_1c0 = &local_17d;
        local_1b8 = &local_17c;
        local_1b0 = &local_17f;
        FUN_143d053dc(local_198,*(undefined8 *)(lVar8 + lVar20),0,lVar21);
        lVar20 = lVar20 + 0x20;
        param_1 = local_198;
      } while ((longlong)iVar1 * 0x20 != lVar20);
    }
  }
  local_78 = (undefined1 **)0x0;
  local_70 = 0x800000000;
  lVar8 = FUN_14049c336();
  if ((longlong)(int)param_1[0x5d] != 0) {
    puVar11 = (undefined8 *)local_198[0x5c];
    puVar18 = puVar11 + (longlong)(int)param_1[0x5d] * 4;
    lVar9 = lVar8 + 0x30;
    local_190 = lVar9;
    do {
      plVar14 = (longlong *)*puVar11;
      plVar13 = (longlong *)puVar11[1];
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
      }
      puVar3 = (undefined1 *)puVar11[2];
      puVar4 = (undefined1 *)puVar11[3];
      lVar20 = (**(code **)(*plVar14 + 8))();
      if (((lVar8 == 0) || (*(int *)(lVar20 + 0x38) < *(int *)(lVar8 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar20 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
          lVar9)) {
        if (plVar13 != (longlong *)0x0) goto LAB_143d01b52;
      }
      else {
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
          UNLOCK();
        }
        lVar20 = (longlong)(int)local_70;
        uVar7 = (int)local_70 + 1;
        local_70 = CONCAT44(local_70._4_4_,uVar7);
        if (local_70._4_4_ < uVar7) {
          FUN_148822fee(local_178);
        }
        lVar9 = local_190;
        ppuVar12 = local_78;
        if (local_78 == (undefined1 **)0x0) {
          ppuVar12 = local_178;
        }
        ppuVar12[lVar20 * 4] = (undefined1 *)plVar14;
        ppuVar12[lVar20 * 4 + 1] = (undefined1 *)plVar13;
        if (plVar13 == (longlong *)0x0) {
          ppuVar12[lVar20 * 4 + 2] = puVar3;
          ppuVar12[lVar20 * 4 + 3] = puVar4;
        }
        else {
          LOCK();
          *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
          UNLOCK();
          ppuVar12[lVar20 * 4 + 2] = puVar3;
          ppuVar12[lVar20 * 4 + 3] = puVar4;
          LOCK();
          plVar14 = plVar13 + 1;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)*plVar14 == 0) {
            (**(code **)*plVar13)();
            LOCK();
            piVar22 = (int *)((longlong)plVar13 + 0xc);
            *piVar22 = *piVar22 + -1;
            UNLOCK();
            if (*piVar22 == 0) {
              (**(code **)(*plVar13 + 0x10))();
            }
          }
LAB_143d01b52:
          LOCK();
          plVar14 = plVar13 + 1;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)*plVar14 == 0) {
            (**(code **)*plVar13)();
            LOCK();
            piVar22 = (int *)((longlong)plVar13 + 0xc);
            *piVar22 = *piVar22 + -1;
            UNLOCK();
            if (*piVar22 == 0) {
              (**(code **)(*plVar13 + 0x10))();
            }
          }
        }
      }
      puVar11 = puVar11 + 4;
    } while (puVar11 != puVar18);
  }
  uVar17 = local_70 & 0xffffffff;
  if (0 < (int)local_70) {
    lVar8 = local_198[0x8b];
    if (lVar8 == 0) {
      lVar8 = local_198[5];
    }
    ppuVar12 = local_78;
    if (local_78 == (undefined1 **)0x0) {
      ppuVar12 = local_178;
    }
    local_184 = (float)((uint)local_184 & 0xffffff00);
    piVar22 = (int *)((longlong)ppuVar12 + 0x1c);
    do {
      if ((*piVar22 == 0) || (uVar7 = piVar22[-1], (int)uVar7 < 0)) {
LAB_143d01d9e:
        lVar9 = 0;
      }
      else {
        lVar9 = 0;
        if ((int)uVar7 < DAT_14c9647dc) {
          plVar14 = (longlong *)
                    ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
          if (((plVar14 == (longlong *)0x0) || ((int)plVar14[2] != *piVar22)) ||
             ((*(uint *)(plVar14 + 1) & 0x10200000) != 0)) goto LAB_143d01d9e;
          lVar9 = *plVar14;
        }
      }
      lVar20 = lVar8;
      if (lVar9 != 0) {
        lVar20 = lVar9;
      }
      if ((piVar22[-2] == 0) || (uVar7 = piVar22[-3], (int)uVar7 < 0)) {
LAB_143d01da5:
        local_1d8 = (float *)0x0;
      }
      else {
        local_1d8 = (float *)0x0;
        if ((int)uVar7 < DAT_14c9647dc) {
          puVar11 = (undefined8 *)
                    ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
          if (((puVar11 == (undefined8 *)0x0) || (*(int *)(puVar11 + 2) != piVar22[-2])) ||
             ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)) goto LAB_143d01da5;
          local_1d8 = (float *)*puVar11;
        }
      }
      local_1d0 = (undefined1 **)CONCAT71(local_1d0._1_7_,(char)local_19c);
      local_1c8 = &local_17e;
      local_1c0 = &local_17d;
      local_1b8 = &local_17c;
      local_1b0 = &local_17f;
      local_1a8 = (undefined1 **)&local_184;
      FUN_143d053dc(local_198,*(undefined8 *)(piVar22 + -7),0,lVar20);
      piVar22 = piVar22 + 8;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  plVar14 = local_198;
  uVar19 = local_19c;
  local_1d8 = &local_17c;
  (**(code **)(*local_198 + 0x198))(local_198,local_19c,&local_17e,&local_17d);
  if ((local_17d != '\x01' & ~(byte)uVar19) == 0 && local_17d != '\x02') {
    local_184 = 1.0;
    if ((((byte)uVar19 != 0) || (local_17e != '\0')) || (local_17f == '\x01')) {
      if ((plVar14[0x8b] != 0) && ((longlong *)plVar14[0x8c] != (longlong *)0x0)) {
        lVar8 = (**(code **)(*(longlong *)plVar14[0x8c] + 0x10))();
        local_184 = *(float *)(lVar8 + 0x1bc);
        lVar8 = plVar14[0x8b];
        if ((lVar8 != 0) && ((longlong *)plVar14[0x8c] != (longlong *)0x0)) {
          lVar9 = (**(code **)(*(longlong *)plVar14[0x8c] + 0x10))();
          local_1d0 = (undefined1 **)&local_184;
          local_1d8 = (float *)CONCAT71(local_1d8._1_7_,1);
          FUN_143d05850(plVar14,lVar9 + 0x1a0,lVar8,0);
        }
      }
      if ((plVar14[0x87] != 0) && (plVar13 = (longlong *)plVar14[0x88], plVar13 != (longlong *)0x0))
      {
        lVar8 = plVar14[0x8b];
        plVar16 = (longlong *)0x0;
        if (lVar8 != 0) {
          plVar16 = (longlong *)plVar14[0x8c];
        }
        if ((plVar14[0x87] != lVar8) || (plVar13 != plVar16)) {
          lVar9 = (**(code **)(*plVar13 + 0x10))();
          local_1d0 = (undefined1 **)&local_184;
          local_1d8 = (float *)CONCAT71(local_1d8._1_7_,1);
          FUN_143d05850(plVar14,lVar9 + 0x1a0,lVar8,1);
        }
      }
    }
    *(float *)((longlong)plVar14 + 0x544) = local_184 + local_17c;
    *(undefined1 *)(plVar14 + 0xa8) = 1;
  }
  ppuVar12 = local_78;
  if (local_78 == (undefined1 **)0x0) {
    ppuVar12 = local_178;
  }
  FUN_140d9afb1(ppuVar12,local_70 & 0xffffffff);
  if (local_78 != (undefined1 **)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d01f66 FUN_143d01f66 body=2595 status=ok
// SIG undefined FUN_143d01f66(void)

void FUN_143d01f66(longlong param_1,longlong param_2,char param_3,ulonglong param_4,
                  undefined8 param_5,char *param_6)

{
  int *piVar1;
  code *pcVar2;
  ulonglong uVar3;
  char cVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  longlong lVar10;
  longlong *plVar11;
  char *pcVar12;
  longlong lVar13;
  undefined8 ****ppppuVar14;
  longlong *plVar15;
  char *pcVar16;
  float *pfVar17;
  longlong lVar18;
  char *pcVar19;
  bool bVar20;
  bool bVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_168 [32];
  undefined1 local_148;
  undefined1 local_140;
  ulonglong local_138;
  char *local_130;
  char local_128 [16];
  longlong *local_118;
  undefined4 local_100 [2];
  char local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  undefined4 local_d0 [2];
  undefined8 ***local_c8 [3];
  ushort local_b0;
  byte local_a8;
  float local_a0;
  undefined4 uStack_9c;
  ushort local_88;
  undefined6 uStack_86;
  byte local_80;
  float *local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if ((param_3 != '\0') && (*(char *)(param_2 + 0x221) != '\x01')) goto LAB_143d01ff7;
  local_140 = 1;
  if (*(char *)(param_1 + 0x540) == '\0') {
    local_140 = FUN_14021794c(param_1);
  }
  local_148 = 0;
  cVar4 = FUN_143d0298a(param_1,param_2,param_4,param_5);
  if ((cVar4 == '\0') ||
     ((*(char *)(param_2 + 0x254) == '\x01' && (*(char *)(param_1 + 0x548) == '\x03'))))
  goto LAB_143d01ff7;
  pcVar9 = (char *)FUN_1405faa04(param_2 + 0x228);
  if ((longlong)*(int *)(param_2 + 0x248) != 0) {
    if (*(int *)(param_2 + 0x250) == 2) {
      lVar13 = 0x38;
LAB_143d02072:
      local_138 = *(ulonglong *)(param_1 + lVar13);
    }
    else {
      local_138 = param_4;
      if (*(int *)(param_2 + 0x250) == 3) {
        lVar13 = 0x478;
        goto LAB_143d02072;
      }
    }
    lVar18 = *(longlong *)(param_2 + 0x240) + 0x18;
    lVar13 = (longlong)*(int *)(param_2 + 0x248) * 0x30;
    local_130 = pcVar9;
    do {
      local_128[0] = '\0';
      local_100[0] = 0;
      FUN_1456bb102(local_128,local_138);
      local_f8 = '\0';
      local_d0[0] = 0;
      lVar10 = *(longlong *)(lVar18 + -8);
      if (lVar10 == 0) {
        local_c8[0] = *(undefined8 ****)(lVar18 + -0x18);
        FUN_1446dcdd4(&local_a0,local_c8);
        lVar10 = FUN_1448fdc6e(&local_a0);
        if (CONCAT62(uStack_86,local_88) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(lVar18 + -8) = lVar10;
      }
      FUN_1400606f6(&local_a0,lVar10,local_128);
      pfVar17 = local_70;
      if (local_70 == (float *)0x0) {
        pfVar17 = &local_a0;
      }
      if (local_68 < 1) {
        pfVar17 = (float *)&DAT_14c9a40e0;
      }
      FUN_1400603ec(local_c8,lVar10,pfVar17);
      pfVar17 = local_70;
      if (local_70 == (float *)0x0) {
        pfVar17 = &local_a0;
      }
      FUN_1446fdf58(pfVar17,local_68);
      if (local_70 != (float *)0x0) {
        FUN_1400020a8();
      }
      if (local_a8 == 1) {
        bVar20 = local_c8[0]._0_4_ != 0.0;
        bVar5 = 1;
      }
      else {
        FUN_1400b56fe(&local_a0,local_c8,1);
        bVar20 = local_80 != 0;
        bVar21 = local_a0 != 0.0;
        pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
        if (pcVar2 != (code *)0x0) {
          pfVar17 = &local_a0;
          if (0x18 < local_88) {
            pfVar17 = (float *)CONCAT44(uStack_9c,local_a0);
          }
          (*pcVar2)(pfVar17);
        }
        if (0x18 < local_88) {
          FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
        }
        bVar20 = bVar20 && bVar21;
        bVar5 = local_a8;
      }
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar5 * 0x120));
      if (pcVar2 != (code *)0x0) {
        ppppuVar14 = local_c8;
        if (0x18 < local_b0) {
          ppppuVar14 = (undefined8 ****)local_c8[0];
        }
        (*pcVar2)(ppppuVar14);
      }
      if (0x18 < local_b0) {
        FUN_1400020a8(local_c8[0]);
      }
      FUN_1448173f8(local_d0);
      if (local_f8 != '\0') {
        if (local_f8 == '\x01') {
          local_f0 = 0;
        }
        else if ((local_f8 == '\x03') && (local_e8 != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)local_e8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_e8 + 0x10))();
          }
        }
        local_f8 = '\0';
      }
      FUN_1448173f8(local_100);
      if ((local_128[0] == '\x03') && (local_118 != (longlong *)0x0)) {
        LOCK();
        piVar1 = (int *)((longlong)local_118 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_118 + 0x10))();
        }
      }
      if (bVar20) {
        pcVar9 = (char *)FUN_1405faa04(lVar18);
        break;
      }
      lVar18 = lVar18 + 0x30;
      lVar13 = lVar13 + -0x30;
      pcVar9 = local_130;
    } while (lVar13 != 0);
  }
  iVar8 = *(int *)(param_2 + 0x290);
  if ((char)iVar8 != '\0' && pcVar9 == (char *)0x0) {
    pcVar9 = *(char **)(param_1 + 0x50);
  }
  if (pcVar9 != (char *)0x0) {
    bVar5 = *(byte *)(param_2 + 0x298);
    if (bVar5 < 3) {
      if ((*param_6 != '\x01') || ((bVar5 != 0 && (param_6[1] == '\x03')))) {
        cVar4 = '\x01';
        if (bVar5 != 1) {
          cVar4 = (bVar5 == 2) * '\x02';
        }
        local_128[0] = '\0';
        local_100[0] = 0;
        FUN_1456bb102(local_128,param_4);
        FUN_1448729ea(param_2 + 0x2a0,local_c8,local_128);
        if (local_a8 == 3) {
          uVar7 = 3;
          fVar23 = local_c8[0]._0_4_;
        }
        else {
          pfVar17 = &local_a0;
          FUN_1400b56fe(pfVar17,local_c8,3);
          fVar23 = 0.0;
          if (local_80 != 0) {
            fVar23 = local_a0;
          }
          pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
          if (pcVar2 != (code *)0x0) {
            if (0x18 < local_88) {
              pfVar17 = (float *)CONCAT44(uStack_9c,local_a0);
            }
            (*pcVar2)(pfVar17);
          }
          if (0x18 < local_88) {
            FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
          }
          uVar7 = (uint)local_a8;
        }
        pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar7 * 0x120));
        if (pcVar2 != (code *)0x0) {
          ppppuVar14 = local_c8;
          if (0x18 < local_b0) {
            ppppuVar14 = (undefined8 ****)local_c8[0];
          }
          (*pcVar2)(ppppuVar14);
        }
        if (0x18 < local_b0) {
          FUN_1400020a8(local_c8[0]);
        }
        FUN_1448173f8(local_100);
        if ((local_128[0] == '\x03') && (local_118 != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)local_118 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_118 + 0x10))();
          }
        }
        if (1e-08 < ABS(fVar23)) {
          pcVar16 = param_6 + 0x68;
          local_130 = *(char **)(param_6 + 0x1a8);
          pcVar19 = local_130;
          if (local_130 == (char *)0x0) {
            pcVar19 = pcVar16;
          }
          local_138 = (ulonglong)*(int *)(param_6 + 0x1b0);
          if (local_138 != 0) {
            lVar13 = local_138 * 0x50;
            do {
              if (((pcVar19[0x4c] == cVar4) &&
                  (cVar6 = FUN_1400ff15e(pcVar19 + 8,param_2 + 600), cVar6 != '\0')) &&
                 (*(char **)pcVar19 == pcVar9)) {
                if (pcVar19 != (char *)0x0) {
                  fVar22 = *(float *)(pcVar19 + 0x48);
                  goto LAB_143d02558;
                }
                break;
              }
              pcVar19 = pcVar19 + 0x50;
              lVar13 = lVar13 + -0x50;
            } while (lVar13 != 0);
          }
          uVar3 = local_138;
          uVar7 = (int)local_138 + 1;
          *(uint *)(param_6 + 0x1b0) = uVar7;
          if (*(uint *)(param_6 + 0x1b4) < uVar7) {
            FUN_148822d42(pcVar16,local_138 & 0xffffffff);
            local_130 = *(char **)(param_6 + 0x1a8);
          }
          if (local_130 != (char *)0x0) {
            pcVar16 = local_130;
          }
          pcVar19 = pcVar16 + uVar3 * 0x50;
          cVar6 = *(char *)(param_2 + 0x255);
          pcVar16 = pcVar16 + uVar3 * 0x50;
          *(char **)pcVar16 = pcVar9;
          pcVar16[0x38] = '\0';
          pcVar16[0x39] = '\0';
          pcVar16[0x3a] = '\0';
          pcVar16[0x3b] = '\0';
          pcVar16[0x3c] = '\0';
          pcVar16[0x3d] = '\0';
          pcVar16[0x3e] = '\0';
          pcVar16[0x3f] = '\0';
          lVar13 = param_2 + 600;
          if (*(longlong *)(param_2 + 0x288) != 0) {
            lVar13 = *(longlong *)(param_2 + 0x288);
          }
          FUN_1400709d4(pcVar16 + 8,lVar13,*(undefined4 *)(param_2 + 0x290),0);
          pcVar16[0x48] = '\0';
          pcVar16[0x49] = '\0';
          pcVar16[0x4a] = '\0';
          pcVar16[0x4b] = '\0';
          pcVar16[0x4c] = cVar4;
          pcVar16[0x4d] = cVar6;
          fVar22 = 0.0;
LAB_143d02558:
          *(float *)(pcVar19 + 0x48) = fVar23 + fVar22;
        }
      }
    }
    else if (bVar5 == 3) {
      if (*param_6 == '\0') {
        local_128[0] = '\0';
        local_100[0] = 0;
        FUN_1456bb102(local_128,param_4);
        FUN_1448729ea(param_2 + 0x2a0,local_c8,local_128);
        if (local_a8 == 3) {
          uVar7 = 3;
          fVar23 = local_c8[0]._0_4_;
        }
        else {
          pfVar17 = &local_a0;
          FUN_1400b56fe(pfVar17,local_c8,3);
          fVar23 = 0.0;
          if (local_80 != 0) {
            fVar23 = local_a0;
          }
          pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
          if (pcVar2 != (code *)0x0) {
            if (0x18 < local_88) {
              pfVar17 = (float *)CONCAT44(uStack_9c,local_a0);
            }
            (*pcVar2)(pfVar17);
          }
          if (0x18 < local_88) {
            FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
          }
          uVar7 = (uint)local_a8;
        }
        pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar7 * 0x120));
        if (pcVar2 != (code *)0x0) {
          ppppuVar14 = local_c8;
          if (0x18 < local_b0) {
            ppppuVar14 = (undefined8 ****)local_c8[0];
          }
          (*pcVar2)(ppppuVar14);
        }
        if (0x18 < local_b0) {
          FUN_1400020a8(local_c8[0]);
        }
        FUN_1448173f8(local_100);
        if ((local_128[0] == '\x03') && (local_118 != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)local_118 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_118 + 0x10))();
          }
        }
        if (1e-08 < ABS(fVar23)) {
          pcVar16 = param_6 + 0x1b8;
          pcVar12 = *(char **)(param_6 + 0x318);
          pcVar19 = pcVar12;
          if (pcVar12 == (char *)0x0) {
            pcVar19 = pcVar16;
          }
          iVar8 = *(int *)(param_6 + 800);
          lVar13 = (longlong)iVar8;
          if (lVar13 != 0) {
            lVar18 = lVar13 * 0x58;
            do {
              if (*(char **)pcVar19 == pcVar9) {
                if (pcVar19 != (char *)0x0) goto LAB_143d027fd;
                break;
              }
              pcVar19 = pcVar19 + 0x58;
              lVar18 = lVar18 + -0x58;
            } while (lVar18 != 0);
          }
          *(uint *)(param_6 + 800) = iVar8 + 1U;
          if (*(uint *)(param_6 + 0x324) < iVar8 + 1U) {
            FUN_148822e62(pcVar16,iVar8);
            pcVar12 = *(char **)(param_6 + 0x318);
          }
          if (pcVar12 != (char *)0x0) {
            pcVar16 = pcVar12;
          }
          pcVar19 = pcVar16 + lVar13 * 0x58;
          cVar4 = *(char *)(param_2 + 0x255);
          pcVar16 = pcVar16 + lVar13 * 0x58;
          *(char **)pcVar16 = pcVar9;
          pcVar16[8] = '\0';
          pcVar16[9] = '\0';
          pcVar16[10] = '\0';
          pcVar16[0xb] = '\0';
          pcVar16[0x40] = '\0';
          pcVar16[0x41] = '\0';
          pcVar16[0x42] = '\0';
          pcVar16[0x43] = '\0';
          pcVar16[0x44] = '\0';
          pcVar16[0x45] = '\0';
          pcVar16[0x46] = '\0';
          pcVar16[0x47] = '\0';
          lVar13 = param_2 + 600;
          if (*(longlong *)(param_2 + 0x288) != 0) {
            lVar13 = *(longlong *)(param_2 + 0x288);
          }
          FUN_1400709d4(pcVar16 + 0x10,lVar13,*(undefined4 *)(param_2 + 0x290),0);
          pcVar16[0x50] = cVar4;
LAB_143d027fd:
          *(float *)(pcVar19 + 8) = fVar23 + *(float *)(pcVar19 + 8);
        }
      }
    }
    else if (bVar5 == 4) {
      if (*(int *)(param_6 + 0x14) < *(int *)(param_2 + 0x2f0)) {
        *(int *)(param_6 + 0x14) = *(int *)(param_2 + 0x2f0);
        *(char **)(param_6 + 8) = pcVar9;
        param_6[0x10] = *(char *)(param_2 + 0x254);
        iVar8 = *(int *)(param_2 + 0x290);
      }
      if (0 < iVar8) {
        plVar15 = (longlong *)(param_2 + 600);
        plVar11 = *(longlong **)(param_2 + 0x288);
        if (*(longlong **)(param_2 + 0x288) == (longlong *)0x0) {
          plVar11 = plVar15;
        }
        if (((*plVar11 != 0) && ((int)plVar11[1] - 1U < 0xfffffffe)) &&
           (*(int *)(param_6 + 0x18) < *(int *)(param_2 + 0x2f0))) {
          *(int *)(param_6 + 0x18) = *(int *)(param_2 + 0x2f0);
          param_6[0x60] = *(char *)(param_2 + 0x255);
          if ((longlong *)(param_6 + 0x20) != plVar15) {
            if (*(longlong **)(param_2 + 0x288) != (longlong *)0x0) {
              plVar15 = *(longlong **)(param_2 + 0x288);
            }
            FUN_1400709d4(param_6 + 0x20,plVar15,*(undefined4 *)(param_2 + 0x290),
                          *(undefined4 *)(param_6 + 0x5c));
          }
        }
      }
    }
  }
LAB_143d01ff7:
  if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d0298a FUN_143d0298a body=3989 status=ok
// SIG undefined FUN_143d0298a(void)

/* WARNING: Type propagation algorithm not settling */

bool FUN_143d0298a(longlong param_1,longlong param_2,longlong param_3,longlong param_4,char param_5,
                  char param_6)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 uVar5;
  code *pcVar6;
  char cVar7;
  bool bVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  undefined8 uVar13;
  float *pfVar14;
  undefined8 *unaff_RBP;
  float *pfVar15;
  undefined8 *******pppppppuVar16;
  bool bVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_1f8 [44];
  float local_1cc;
  double local_1c8;
  double local_1c0;
  char local_1b8;
  undefined7 uStack_1b7;
  double local_1b0;
  longlong *local_1a8;
  undefined4 local_190 [2];
  char local_188;
  undefined8 local_180;
  longlong *local_178;
  undefined4 local_160 [2];
  undefined8 *******local_158 [3];
  ushort local_140;
  byte local_138;
  float local_130;
  undefined4 uStack_12c;
  ushort local_118;
  undefined6 uStack_116;
  byte local_110;
  float *local_100;
  int local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  if (((*(char *)(param_1 + 0x53e) != '\0') ||
      ((*(char *)(param_1 + 0x53f) == '\x01' &&
       (((*(longlong *)(param_1 + 0x28) == param_3 || (*(longlong *)(param_1 + 0x458) == param_3))
        || (*(longlong *)(param_1 + 0x38) == param_3)))))) ||
     ((((*(char *)(param_2 + 0x220) == '\0' && ((byte)(*(char *)(param_1 + 0x548) - 1U) < 2)) ||
       (cVar7 = FUN_1403343e8(param_2 + 0xd0,param_1 + 0x58), cVar7 == '\0')) ||
      ((cVar7 = FUN_14187bccc(param_2 + 0xb0,*(undefined8 *)(param_1 + 0x50)), cVar7 == '\0' ||
       (cVar7 = FUN_14187bed8(param_2 + 0xf0,param_1 + 0x98), cVar7 == '\0'))))))
  goto LAB_143d02a1c;
  if (*(char *)(param_2 + 0x118) == '\x01') {
    dVar2 = *(double *)(param_1 + 0x210);
    dVar3 = *(double *)(param_1 + 0x218);
    dVar4 = *(double *)(param_1 + 0x220);
    if ((((((dVar2 != 0.0) || (NAN(dVar2))) || (dVar3 != 0.0)) || ((NAN(dVar3) || (dVar4 != 0.0))))
        || (NAN(dVar4))) && (*(longlong *)(param_1 + 0x488) != 0)) {
      local_1b8 = '\0';
      local_190[0] = 0;
      FUN_1456bb102(&local_1b8,*(undefined8 *)(param_1 + 0x478));
      FUN_1448729ea(param_2 + 0x120,local_158,&local_1b8);
      if (local_138 == 3) {
        fVar27 = local_158[0]._0_4_;
        bVar9 = 3;
      }
      else {
        pfVar14 = &local_130;
        FUN_1400b56fe(pfVar14,local_158,3);
        fVar27 = 0.0;
        if (local_110 != 0) {
          fVar27 = local_130;
        }
        pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_110 * 0x120));
        if (pcVar6 != (code *)0x0) {
          if (0x18 < local_118) {
            pfVar14 = (float *)CONCAT44(uStack_12c,local_130);
          }
          (*pcVar6)(pfVar14);
        }
        bVar9 = local_138;
        if (0x18 < local_118) {
          FUN_1400020a8(CONCAT44(uStack_12c,local_130));
          bVar9 = local_138;
        }
      }
      unaff_RBP = &DAT_14c9a8508;
      pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar9 * 0x120));
      if (pcVar6 != (code *)0x0) {
        pppppppuVar16 = local_158;
        if (0x18 < local_140) {
          pppppppuVar16 = local_158[0];
        }
        (*pcVar6)(pppppppuVar16);
      }
      if (0x18 < local_140) {
        FUN_1400020a8(local_158[0]);
      }
      FUN_1448173f8(local_190);
      if ((local_1b8 == '\x03') && (local_1a8 != (longlong *)0x0)) {
        LOCK();
        piVar1 = (int *)((longlong)local_1a8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_1a8 + 0x10))();
        }
      }
      local_1b8 = '\0';
      local_190[0] = 0;
      FUN_1456bb102(&local_1b8,*(undefined8 *)(param_1 + 0x478));
      FUN_1448729ea(param_2 + 0x170,local_158,&local_1b8);
      if (local_138 == 3) {
        fVar26 = local_158[0]._0_4_;
        bVar9 = 3;
      }
      else {
        pfVar14 = &local_130;
        FUN_1400b56fe(pfVar14,local_158,3);
        fVar26 = 0.0;
        if (local_110 != 0) {
          fVar26 = local_130;
        }
        pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_110 * 0x120));
        if (pcVar6 != (code *)0x0) {
          if (0x18 < local_118) {
            pfVar14 = (float *)CONCAT44(uStack_12c,local_130);
          }
          (*pcVar6)(pfVar14);
        }
        bVar9 = local_138;
        if (0x18 < local_118) {
          FUN_1400020a8(CONCAT44(uStack_12c,local_130));
          bVar9 = local_138;
        }
      }
      pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar9 * 0x120));
      if (pcVar6 != (code *)0x0) {
        pppppppuVar16 = local_158;
        if (0x18 < local_140) {
          pppppppuVar16 = local_158[0];
        }
        (*pcVar6)(pppppppuVar16);
      }
      if (0x18 < local_140) {
        FUN_1400020a8(local_158[0]);
      }
      FUN_1448173f8(local_190);
      if ((local_1b8 == '\x03') && (local_1a8 != (longlong *)0x0)) {
        LOCK();
        piVar1 = (int *)((longlong)local_1a8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_1a8 + 0x10))();
        }
      }
      if (360.0 <= fVar27) {
        fVar27 = 360.0;
      }
      dVar23 = DAT_14c8462e0;
      dVar22 = DAT_14c8462e8;
      dVar25 = DAT_14c8462d8;
      if (*(longlong *)(param_1 + 0x488) != 0) {
        FUN_1412d231c(*(longlong *)(param_1 + 0x488),&local_1b8);
        local_1cc = fVar27;
        dVar18 = sin((double)fVar26 * 0.017453292519943295);
        dVar19 = cos((double)fVar26 * 0.017453292519943295);
        local_1c0 = DAT_14c8462c0 * DAT_14c8462c0;
        local_1c8 = dVar18 * DAT_14c8462c8;
        dVar25 = 1.0 - dVar19;
        dVar24 = DAT_14c8462c0 * DAT_14c8462d0 * dVar25;
        dVar22 = DAT_14c8462c8 * DAT_14c8462d0 * dVar25;
        dVar21 = (double)CONCAT71(uStack_1b7,local_1b8);
        dVar20 = DAT_14c8462c0 * DAT_14c8462c8 * dVar25;
        dVar23 = (dVar22 - dVar18 * DAT_14c8462c0) * (double)local_1a8 +
                 (dVar20 + dVar18 * DAT_14c8462d0) * dVar21 +
                 (DAT_14c8462c8 * DAT_14c8462c8 * dVar25 + dVar19) * local_1b0;
        dVar22 = (DAT_14c8462d0 * DAT_14c8462d0 * dVar25 + dVar19) * (double)local_1a8 +
                 (dVar24 - local_1c8) * dVar21 + (dVar22 + dVar18 * DAT_14c8462c0) * local_1b0;
        dVar25 = (dVar24 + local_1c8) * (double)local_1a8 +
                 (dVar25 * local_1c0 + dVar19) * dVar21 +
                 (dVar20 - dVar18 * DAT_14c8462d0) * local_1b0;
        fVar27 = local_1cc;
      }
      if (fVar27 <= 0.0) {
        fVar27 = 0.0;
      }
      dVar21 = dVar2 * dVar2 + dVar3 * dVar3;
      if ((dVar21 != 1.0) || (NAN(dVar21))) {
        dVar19 = DAT_14c8464f0;
        dVar4 = DAT_14c8464e8;
        dVar18 = DAT_14c8464e0;
        if (9.99999993922529e-09 <= dVar21) {
          dVar19 = 0.0;
          dVar4 = dVar3 * (1.0 / SQRT(dVar21));
          dVar18 = dVar2 * (1.0 / SQRT(dVar21));
        }
      }
      else {
        dVar19 = (double)(-(ulonglong)(dVar4 == 0.0) & (ulonglong)dVar4);
        dVar4 = dVar3;
        dVar18 = dVar2;
      }
      fVar27 = cosf(fVar27 * 0.5 * 0.017453292);
      if ((float)((dVar25 * -dVar18 - dVar23 * dVar4) - dVar22 * dVar19) < fVar27)
      goto LAB_143d02a1c;
    }
  }
  if (*(char *)(param_2 + 0x1c0) == '\0') goto switchD_143d02bc5_default;
  cVar7 = FUN_14021794c(param_1);
  switch(*(undefined1 *)(param_2 + 0x1c0)) {
  case 1:
    if (cVar7 != '\0') break;
    goto LAB_143d02a1c;
  case 2:
    goto joined_r0x000143d02be3;
  case 3:
    if (param_6 == '\0') goto LAB_143d02a1c;
    break;
  case 4:
    cVar7 = param_6;
joined_r0x000143d02be3:
    if (cVar7 == '\0') break;
    goto LAB_143d02a1c;
  }
switchD_143d02bc5_default:
  switch(*(undefined1 *)(param_2 + 0x1c1)) {
  case 1:
    if (*(char *)(param_1 + 0x4d8) != '\x01') break;
    goto LAB_143d02a1c;
  case 2:
    if (*(char *)(param_1 + 0x4d8) != '\x01') goto LAB_143d02a1c;
    break;
  case 3:
    if (0.0 < *(float *)(param_1 + 0x4f8)) goto LAB_143d02a1c;
    break;
  case 4:
    if (*(float *)(param_1 + 0x4f8) <= 0.0001 && *(float *)(param_1 + 0x4f8) != 0.0001)
    goto LAB_143d02a1c;
  }
  iVar10 = *(int *)(param_2 + 0x1c4);
  if ((iVar10 == 0) || (lVar12 = *(longlong *)(param_1 + 0x50), lVar12 == 0)) {
LAB_143d02c90:
    if ((param_5 != '\0') ||
       ((*(char *)(param_2 + 0x1c8) != '\x01' ||
        (cVar7 = FUN_14881bd12(param_2 + 0x1c8,*(undefined8 *)(param_1 + 0x458),&local_1b8,
                               &local_130), cVar7 != '\0')))) {
      if ((*(longlong *)(param_2 + 0x18) != 0) && (*(int *)(param_2 + 0x20) - 1U < 0xfffffffe)) {
        switch(*(undefined4 *)(param_2 + 0x5c)) {
        case 0:
          lVar12 = *(longlong *)(param_1 + 0x458);
          break;
        case 1:
          lVar12 = param_3;
          break;
        case 2:
          lVar12 = *(longlong *)(param_1 + 0x38);
          break;
        case 3:
          lVar12 = *(longlong *)(param_1 + 0x478);
          break;
        default:
          lVar12 = 0;
        }
        local_1b8 = '\0';
        local_190[0] = 0;
        FUN_1456bb102(&local_1b8,lVar12);
        local_188 = '\0';
        local_160[0] = 0;
        lVar12 = *(longlong *)(param_2 + 0x28);
        if (lVar12 == 0) {
          local_158[0] = *(undefined8 ********)(param_2 + 0x18);
          FUN_1446dcdd4(&local_130);
          lVar12 = FUN_1448fdc6e(&local_130);
          if (CONCAT62(uStack_116,local_118) != 0) {
            FUN_1400020a8();
          }
          *(longlong *)(param_2 + 0x28) = lVar12;
        }
        FUN_1400606f6(&local_130,lVar12,&local_1b8);
        pfVar14 = local_100;
        if (local_100 == (float *)0x0) {
          pfVar14 = &local_130;
        }
        pfVar15 = (float *)&DAT_14c9a40e0;
        if (0 < local_f8) {
          pfVar15 = pfVar14;
        }
        FUN_1400603ec(local_158,lVar12,pfVar15);
        pfVar14 = local_100;
        if (local_100 == (float *)0x0) {
          pfVar14 = &local_130;
        }
        FUN_1446fdf58(pfVar14,local_f8);
        if (local_100 != (float *)0x0) {
          FUN_1400020a8();
        }
        if (local_138 == 1) {
          bVar8 = local_158[0]._0_4_ != 0.0;
          bVar9 = 1;
        }
        else {
          pfVar14 = &local_130;
          FUN_1400b56fe(pfVar14,local_158,1);
          bVar8 = local_110 != 0;
          bVar17 = local_130 != 0.0;
          pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_110 * 0x120));
          if (pcVar6 != (code *)0x0) {
            if (0x18 < local_118) {
              pfVar14 = (float *)CONCAT44(uStack_12c,local_130);
            }
            (*pcVar6)(pfVar14);
          }
          if (0x18 < local_118) {
            FUN_1400020a8(CONCAT44(uStack_12c,local_130));
          }
          bVar8 = bVar8 && bVar17;
          bVar9 = local_138;
        }
        unaff_RBP = (undefined8 *)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),bVar8);
        pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar9 * 0x120));
        if (pcVar6 != (code *)0x0) {
          pppppppuVar16 = local_158;
          if (0x18 < local_140) {
            pppppppuVar16 = local_158[0];
          }
          (*pcVar6)(pppppppuVar16);
        }
        if (0x18 < local_140) {
          FUN_1400020a8(local_158[0]);
        }
        FUN_1448173f8(local_160);
        if (local_188 != '\0') {
          if (local_188 == '\x01') {
            local_180 = 0;
          }
          else if ((local_188 == '\x03') && (local_178 != (longlong *)0x0)) {
            LOCK();
            piVar1 = (int *)((longlong)local_178 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_178 + 0x10))();
            }
          }
          local_188 = '\0';
        }
        FUN_1448173f8(local_190);
        if ((local_1b8 == '\x03') && (local_1a8 != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)local_1a8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_1a8 + 0x10))();
          }
        }
        if (bVar8 == false) goto LAB_143d02a1c;
      }
      lVar12 = FUN_14095dd8e(param_2 + 0x30);
      if (lVar12 != 0) {
        switch(*(undefined4 *)(param_2 + 0x5c)) {
        case 0:
          lVar12 = *(longlong *)(param_1 + 0x458);
          break;
        case 1:
          lVar12 = param_3;
          break;
        case 2:
          lVar12 = *(longlong *)(param_1 + 0x38);
          break;
        case 3:
          lVar12 = *(longlong *)(param_1 + 0x478);
          break;
        default:
          lVar12 = 0;
        }
        unaff_RBP = (undefined8 *)
                    CONCAT71((int7)((ulonglong)unaff_RBP >> 8),*(undefined1 *)(param_2 + 0x58));
        uVar13 = FUN_14095dd8e(param_2 + 0x30);
        iVar10 = FUN_140948ece(*(undefined8 *)(param_1 + 0x458),uVar13,
                               (ulonglong)unaff_RBP & 0xffffffff,lVar12);
        if (iVar10 == 0) goto LAB_143d02a1c;
      }
      if ((*(longlong *)(param_2 + 0x60) != 0) && (*(int *)(param_2 + 0x68) - 1U < 0xfffffffe)) {
        switch(*(undefined4 *)(param_2 + 0xa4)) {
        case 0:
          lVar12 = *(longlong *)(param_1 + 0x458);
          break;
        case 1:
          lVar12 = param_3;
          break;
        case 2:
          lVar12 = *(longlong *)(param_1 + 0x38);
          break;
        case 3:
          lVar12 = *(longlong *)(param_1 + 0x478);
          break;
        default:
          lVar12 = 0;
        }
        local_1b8 = '\0';
        local_190[0] = 0;
        FUN_1456bb102(&local_1b8,lVar12);
        local_188 = '\0';
        local_160[0] = 0;
        lVar12 = *(longlong *)(param_2 + 0x70);
        if (lVar12 == 0) {
          local_158[0] = *(undefined8 ********)(param_2 + 0x60);
          FUN_1446dcdd4(&local_130);
          lVar12 = FUN_1448fdc6e(&local_130);
          if (CONCAT62(uStack_116,local_118) != 0) {
            FUN_1400020a8();
          }
          *(longlong *)(param_2 + 0x70) = lVar12;
        }
        FUN_1400606f6(&local_130,lVar12,&local_1b8);
        pfVar14 = local_100;
        if (local_100 == (float *)0x0) {
          pfVar14 = &local_130;
        }
        pfVar15 = (float *)&DAT_14c9a40e0;
        if (0 < local_f8) {
          pfVar15 = pfVar14;
        }
        FUN_1400603ec(local_158,lVar12,pfVar15);
        pfVar14 = local_100;
        if (local_100 == (float *)0x0) {
          pfVar14 = &local_130;
        }
        FUN_1446fdf58(pfVar14,local_f8);
        if (local_100 != (float *)0x0) {
          FUN_1400020a8();
        }
        if (local_138 == 1) {
          bVar8 = local_158[0]._0_4_ != 0.0;
          uVar11 = 1;
        }
        else {
          pfVar14 = &local_130;
          FUN_1400b56fe(pfVar14,local_158,1);
          bVar8 = local_130 != 0.0;
          pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_110 * 0x120));
          if (pcVar6 != (code *)0x0) {
            if (0x18 < local_118) {
              pfVar14 = (float *)CONCAT44(uStack_12c,local_130);
            }
            (*pcVar6)(pfVar14);
          }
          if (0x18 < local_118) {
            FUN_1400020a8(CONCAT44(uStack_12c,local_130));
          }
          bVar8 = local_110 != 0 && bVar8;
          uVar11 = (uint)local_138;
        }
        unaff_RBP = (undefined8 *)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),bVar8);
        pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar11 * 0x120));
        if (pcVar6 != (code *)0x0) {
          pppppppuVar16 = local_158;
          if (0x18 < local_140) {
            pppppppuVar16 = local_158[0];
          }
          (*pcVar6)(pppppppuVar16);
        }
        if (0x18 < local_140) {
          FUN_1400020a8(local_158[0]);
        }
        FUN_1448173f8(local_160);
        if (local_188 != '\0') {
          if (local_188 == '\x01') {
            local_180 = 0;
          }
          else if ((local_188 == '\x03') && (local_178 != (longlong *)0x0)) {
            LOCK();
            piVar1 = (int *)((longlong)local_178 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_178 + 0x10))();
            }
          }
          local_188 = '\0';
        }
        FUN_1448173f8(local_190);
        if ((local_1b8 == '\x03') && (local_1a8 != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)local_1a8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_1a8 + 0x10))();
          }
        }
        if (bVar8 == false) goto LAB_143d02a1c;
      }
      lVar12 = FUN_14095dd8e(param_2 + 0x78);
      if (lVar12 != 0) {
        switch(*(undefined4 *)(param_2 + 0xa4)) {
        case 0:
          lVar12 = *(longlong *)(param_1 + 0x458);
          break;
        case 1:
          lVar12 = param_3;
          break;
        case 2:
          lVar12 = *(longlong *)(param_1 + 0x38);
          break;
        case 3:
          lVar12 = *(longlong *)(param_1 + 0x478);
          break;
        default:
          lVar12 = 0;
        }
        uVar5 = *(undefined1 *)(param_2 + 0xa0);
        uVar13 = FUN_14095dd8e(param_2 + 0x78);
        iVar10 = FUN_140948ece(*(undefined8 *)(param_1 + 0x478),uVar13,
                               CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar5) & 0xffffffff,lVar12
                              );
        if (iVar10 == 0) goto LAB_143d02a1c;
      }
      bVar8 = true;
      if (*(char *)(param_2 + 0xa8) == '\x01') {
        switch(*(undefined4 *)(param_2 + 0xac)) {
        case 0:
          param_3 = *(longlong *)(param_1 + 0x458);
          break;
        case 1:
          break;
        case 2:
          param_3 = *(longlong *)(param_1 + 0x38);
          break;
        case 3:
          param_3 = *(longlong *)(param_1 + 0x478);
          break;
        default:
          param_3 = 0;
        }
        bVar8 = param_3 == param_4 && param_4 != 0;
      }
      goto LAB_143d02a1e;
    }
  }
  else if (iVar10 == 2) {
    if (*(char *)(lVar12 + 0x39) == '\0') goto LAB_143d02c90;
  }
  else if ((iVar10 != 1) || (*(char *)(lVar12 + 0x39) != '\0')) goto LAB_143d02c90;
LAB_143d02a1c:
  bVar8 = false;
LAB_143d02a1e:
  if ((local_f0 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar8;
}



// FUNCTION 143d0393a FUN_143d0393a body=3470 status=ok
// SIG undefined FUN_143d0393a(void)

ulonglong FUN_143d0393a(longlong param_1,longlong param_2,char param_3,longlong param_4,
                       undefined8 param_5,longlong param_6,undefined8 param_7)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  longlong lVar7;
  double *pdVar8;
  longlong lVar9;
  double *pdVar10;
  undefined8 ****ppppuVar11;
  longlong lVar12;
  undefined8 unaff_RBP;
  undefined7 uVar14;
  ulonglong uVar13;
  float *pfVar15;
  bool bVar16;
  bool bVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_178 [32];
  undefined1 local_158;
  undefined1 local_150;
  longlong local_148;
  longlong local_140;
  char local_138 [16];
  longlong *local_128;
  undefined4 local_110 [2];
  char local_108;
  undefined8 local_100;
  longlong *local_f8;
  undefined4 local_e0 [2];
  undefined8 ***local_d8 [3];
  ushort local_c0;
  byte local_b8;
  float local_b0;
  undefined4 uStack_ac;
  ushort local_98;
  undefined6 uStack_96;
  byte local_90;
  float *local_80;
  int local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if ((param_3 == '\0') || (*(char *)(param_2 + 0x221) == '\x01')) {
    local_150 = *(undefined1 *)(param_1 + 0x540);
    local_158 = 0;
    cVar4 = FUN_143d0298a(param_1,param_2,param_4,param_5);
    if (cVar4 != '\0') {
      local_148 = param_4;
      if ((longlong)*(int *)(param_2 + 0x288) != 0) {
        lVar12 = *(longlong *)(param_2 + 0x280);
        local_140 = (longlong)*(int *)(param_2 + 0x288) * 0x68;
        unaff_RBP = 0;
        lVar9 = 0;
        do {
          local_138[0] = '\0';
          local_110[0] = 0;
          FUN_1456bb102(local_138,*(undefined8 *)(param_1 + 0x478));
          local_108 = '\0';
          local_e0[0] = 0;
          lVar7 = *(longlong *)(lVar12 + 0x10 + lVar9);
          if (lVar7 == 0) {
            local_d8[0] = *(undefined8 ****)(lVar12 + lVar9);
            FUN_1446dcdd4(&local_b0,local_d8);
            lVar7 = FUN_1448fdc6e(&local_b0);
            if (CONCAT62(uStack_96,local_98) != 0) {
              FUN_1400020a8();
            }
            *(longlong *)(lVar12 + 0x10 + lVar9) = lVar7;
          }
          FUN_1400606f6(&local_b0,lVar7,local_138);
          pfVar15 = local_80;
          if (local_80 == (float *)0x0) {
            pfVar15 = &local_b0;
          }
          if (local_78 < 1) {
            pfVar15 = (float *)&DAT_14c9a40e0;
          }
          FUN_1400603ec(local_d8,lVar7,pfVar15);
          pfVar15 = local_80;
          if (local_80 == (float *)0x0) {
            pfVar15 = &local_b0;
          }
          FUN_1446fdf58(pfVar15,local_78);
          if (local_80 != (float *)0x0) {
            FUN_1400020a8();
          }
          if (local_b8 == 1) {
            bVar16 = local_d8[0]._0_4_ != 0.0;
            bVar5 = 1;
          }
          else {
            FUN_1400b56fe(&local_b0,local_d8,1);
            bVar16 = local_90 != 0;
            bVar17 = local_b0 != 0.0;
            pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
            if (pcVar3 != (code *)0x0) {
              pfVar15 = &local_b0;
              if (0x18 < local_98) {
                pfVar15 = (float *)CONCAT44(uStack_ac,local_b0);
              }
              (*pcVar3)(pfVar15);
            }
            if (0x18 < local_98) {
              FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
            }
            bVar16 = bVar16 && bVar17;
            bVar5 = local_b8;
          }
          pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar5 * 0x120));
          if (pcVar3 != (code *)0x0) {
            ppppuVar11 = local_d8;
            if (0x18 < local_c0) {
              ppppuVar11 = (undefined8 ****)local_d8[0];
            }
            (*pcVar3)(ppppuVar11);
          }
          if (0x18 < local_c0) {
            FUN_1400020a8(local_d8[0]);
          }
          FUN_1448173f8(local_e0);
          if (local_108 != '\0') {
            if (local_108 == '\x01') {
              local_100 = 0;
            }
            else if ((local_108 == '\x03') && (local_f8 != (longlong *)0x0)) {
              LOCK();
              piVar1 = (int *)((longlong)local_f8 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_f8 + 0x10))();
              }
            }
            local_108 = '\0';
          }
          FUN_1448173f8(local_110);
          if ((local_138[0] == '\x03') && (local_128 != (longlong *)0x0)) {
            LOCK();
            piVar1 = (int *)((longlong)local_128 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_128 + 0x10))();
            }
          }
        } while ((!bVar16) && (lVar9 = lVar9 + 0x68, local_140 != lVar9));
      }
      lVar12 = local_148;
      local_138[0] = '\0';
      local_110[0] = 0;
      FUN_1456bb102(local_138,local_148);
      FUN_1448729ea(param_2 + 0x230,local_d8,local_138);
      if (local_b8 == 3) {
        fVar21 = local_d8[0]._0_4_;
        bVar5 = 3;
      }
      else {
        pfVar15 = &local_b0;
        FUN_1400b56fe(pfVar15,local_d8,3);
        fVar21 = 0.0;
        if (local_90 != 0) {
          fVar21 = local_b0;
        }
        pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
        if (pcVar3 != (code *)0x0) {
          if (0x18 < local_98) {
            pfVar15 = (float *)CONCAT44(uStack_ac,local_b0);
          }
          (*pcVar3)(pfVar15);
          lVar12 = local_148;
        }
        bVar5 = local_b8;
        if (0x18 < local_98) {
          FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
          bVar5 = local_b8;
        }
      }
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar5 * 0x120));
      if (pcVar3 != (code *)0x0) {
        ppppuVar11 = local_d8;
        if (0x18 < local_c0) {
          ppppuVar11 = (undefined8 ****)local_d8[0];
        }
        (*pcVar3)(ppppuVar11);
      }
      if (0x18 < local_c0) {
        FUN_1400020a8(local_d8[0]);
      }
      FUN_1448173f8(local_110);
      if ((local_138[0] == '\x03') && (local_128 != (longlong *)0x0)) {
        LOCK();
        piVar1 = (int *)((longlong)local_128 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_128 + 0x10))();
        }
      }
      if (*(char *)(param_2 + 0x292) == '\x01') {
        if (*(longlong *)(param_1 + 0x28) != 0 && *(longlong *)(param_1 + 0x478) != 0) {
          lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x1c8);
          if (lVar9 == 0) {
            pdVar10 = (double *)&DAT_14c8464e0;
            dVar19 = DAT_14c8464f0;
          }
          else {
            pdVar10 = (double *)(lVar9 + 0x260);
            dVar19 = *(double *)(lVar9 + 0x270);
          }
          lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x478) + 0x1c8);
          if (lVar9 == 0) {
            pdVar8 = (double *)&DAT_14c8464e0;
            dVar20 = DAT_14c8464f0;
          }
          else {
            pdVar8 = (double *)(lVar9 + 0x260);
            dVar20 = *(double *)(lVar9 + 0x270);
          }
          if (0.0 < (float)SQRT((dVar19 - dVar20) * (dVar19 - dVar20) +
                                (*pdVar10 - *pdVar8) * (*pdVar10 - *pdVar8) +
                                (pdVar10[1] - pdVar8[1]) * (pdVar10[1] - pdVar8[1]))) {
            lVar9 = FUN_1447e736e(param_2 + 0x298);
            if (lVar9 == 0) {
              fVar18 = 1.0;
            }
            else {
              fVar18 = (float)FUN_1449e6cbc(lVar9);
            }
            fVar21 = fVar21 * fVar18;
          }
        }
      }
      if (param_6 != 0) {
        if (*(char *)(param_1 + 0x358) == '\x01') {
          fVar18 = ((*(float *)(param_1 + 0x338) + 1.0) / (1.0 - *(float *)(param_1 + 0x33c))) *
                   *(float *)(param_1 + 0x348) *
                   (*(float *)(param_1 + 0x34c) + *(float *)(param_1 + 0x340)) +
                   *(float *)(param_1 + 0x344);
          *(float *)(param_1 + 0x354) = fVar18;
          *(undefined1 *)(param_1 + 0x358) = 0;
        }
        else {
          fVar18 = *(float *)(param_1 + 0x354);
        }
        cVar4 = *(char *)(param_2 + 0x228);
        fVar22 = fVar21;
        if (cVar4 == '\x02') {
LAB_143d03f2b:
          fVar22 = (fVar22 + -1.0) * fVar18;
        }
        else if (cVar4 != '\x01') {
          if (cVar4 == '\0') {
            if (fVar21 < 0.0) {
              fVar22 = 1.0 / (1.0 - fVar21);
              goto LAB_143d03f2b;
            }
            fVar22 = fVar18 * fVar21;
          }
          else {
            fVar22 = 0.0;
          }
        }
        iVar2 = *(int *)(param_1 + 0x3f8);
        lVar9 = (longlong)iVar2;
        *(uint *)(param_1 + 0x3f8) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0x3fc) < iVar2 + 1U) {
          FUN_14654ad30((longlong *)(param_1 + 0x3f0),iVar2);
        }
        lVar7 = *(longlong *)(param_1 + 0x3f0);
        *(longlong *)(lVar7 + lVar9 * 0x18) = param_2;
        *(longlong *)(lVar7 + 8 + lVar9 * 0x18) = param_6;
        *(float *)(lVar7 + 0x10 + lVar9 * 0x18) = fVar22;
      }
      if (*(byte *)(param_2 + 0x228) < 3) {
        FUN_140af2c5a(param_7,0x30100 >> ((*(byte *)(param_2 + 0x228) & 3) << 3),fVar21);
      }
      if (*(char *)(param_2 + 0x290) == '\0') {
        *(undefined1 *)(param_1 + 0x53b) = 1;
      }
      if (*(char *)(param_2 + 0x291) == '\x01') {
        *(undefined1 *)(param_1 + 0x53c) = 1;
      }
      uVar14 = (undefined7)((ulonglong)unaff_RBP >> 8);
      if (*(char *)(param_2 + 0x2c0) == '\x01') {
        local_138[0] = '\0';
        local_110[0] = 0;
        FUN_1456bb102(local_138,lVar12);
        FUN_1448729ea(param_2 + 0x2c8,local_d8,local_138);
        if (local_b8 == 3) {
          uVar6 = 3;
          fVar21 = local_d8[0]._0_4_;
        }
        else {
          pfVar15 = &local_b0;
          FUN_1400b56fe(pfVar15,local_d8,3);
          fVar21 = 0.0;
          if (local_90 != 0) {
            fVar21 = local_b0;
          }
          pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
          if (pcVar3 != (code *)0x0) {
            if (0x18 < local_98) {
              pfVar15 = (float *)CONCAT44(uStack_ac,local_b0);
            }
            (*pcVar3)(pfVar15);
          }
          if (0x18 < local_98) {
            FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
          }
          uVar6 = (uint)local_b8;
          lVar12 = local_148;
        }
        pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar6 * 0x120));
        if (pcVar3 != (code *)0x0) {
          ppppuVar11 = local_d8;
          if (0x18 < local_c0) {
            ppppuVar11 = (undefined8 ****)local_d8[0];
          }
          (*pcVar3)(ppppuVar11);
        }
        if (0x18 < local_c0) {
          FUN_1400020a8(local_d8[0]);
        }
        FUN_1448173f8(local_110);
        if ((local_138[0] == '\x03') && (local_128 != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)local_128 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_128 + 0x10))();
          }
        }
        uVar13 = CONCAT71(uVar14,1);
        if (0.0001 < fVar21) {
          *(char *)(param_1 + 0x528) = (*(longlong *)(param_1 + 0x478) == lVar12) + '\x01';
          *(float *)(param_1 + 0x52c) = fVar21;
          local_138[0] = '\0';
          local_110[0] = 0;
          FUN_1456bb102(local_138,lVar12);
          FUN_1448729ea(param_2 + 0x318,local_d8,local_138);
          if (local_b8 == 3) {
            uVar6 = 3;
            fVar21 = local_d8[0]._0_4_;
          }
          else {
            pfVar15 = &local_b0;
            FUN_1400b56fe(pfVar15,local_d8,3);
            fVar21 = 0.0;
            if (local_90 != 0) {
              fVar21 = local_b0;
            }
            pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
            if (pcVar3 != (code *)0x0) {
              if (0x18 < local_98) {
                pfVar15 = (float *)CONCAT44(uStack_ac,local_b0);
              }
              (*pcVar3)(pfVar15);
            }
            if (0x18 < local_98) {
              FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
            }
            uVar6 = (uint)local_b8;
          }
          *(float *)(param_1 + 0x530) = fVar21;
          pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar6 * 0x120));
          if (pcVar3 != (code *)0x0) {
            ppppuVar11 = local_d8;
            if (0x18 < local_c0) {
              ppppuVar11 = (undefined8 ****)local_d8[0];
            }
            (*pcVar3)(ppppuVar11);
          }
          if (0x18 < local_c0) {
            FUN_1400020a8(local_d8[0]);
          }
          FUN_1448173f8(local_110);
          if ((local_138[0] == '\x03') && (local_128 != (longlong *)0x0)) {
            LOCK();
            piVar1 = (int *)((longlong)local_128 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_128 + 0x10))();
            }
          }
          *(undefined4 *)(param_1 + 0x534) = *(undefined4 *)(param_2 + 0x368);
          *(undefined1 *)(param_1 + 0x538) = *(undefined1 *)(param_2 + 0x36c);
          *(undefined1 *)(param_1 + 0x539) = *(undefined1 *)(param_2 + 0x36d);
        }
      }
      else {
        uVar13 = CONCAT71(uVar14,1);
        if (*(char *)(param_2 + 0x36e) == '\x01') {
          local_138[0] = '\0';
          local_110[0] = 0;
          FUN_1456bb102(local_138,lVar12);
          FUN_1448729ea(param_2 + 0x370,local_d8,local_138);
          if (local_b8 == 3) {
            uVar6 = 3;
            fVar21 = local_d8[0]._0_4_;
          }
          else {
            pfVar15 = &local_b0;
            FUN_1400b56fe(pfVar15,local_d8,3);
            fVar21 = 0.0;
            if (local_90 != 0) {
              fVar21 = local_b0;
            }
            pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
            if (pcVar3 != (code *)0x0) {
              if (0x18 < local_98) {
                pfVar15 = (float *)CONCAT44(uStack_ac,local_b0);
              }
              (*pcVar3)(pfVar15);
            }
            if (0x18 < local_98) {
              FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
            }
            uVar6 = (uint)local_b8;
            lVar12 = local_148;
          }
          pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar6 * 0x120));
          if (pcVar3 != (code *)0x0) {
            ppppuVar11 = local_d8;
            if (0x18 < local_c0) {
              ppppuVar11 = (undefined8 ****)local_d8[0];
            }
            (*pcVar3)(ppppuVar11);
          }
          if (0x18 < local_c0) {
            FUN_1400020a8(local_d8[0]);
          }
          FUN_1448173f8(local_110);
          if ((local_138[0] == '\x03') && (local_128 != (longlong *)0x0)) {
            LOCK();
            piVar1 = (int *)((longlong)local_128 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_128 + 0x10))();
            }
          }
          if (0.0001 < fVar21) {
            *(undefined1 *)(param_1 + 0x528) = 3;
            *(float *)(param_1 + 0x52c) = fVar21;
            local_138[0] = '\0';
            local_110[0] = 0;
            FUN_1456bb102(local_138,lVar12);
            FUN_1448729ea(param_2 + 0x3c0,local_d8,local_138);
            if (local_b8 == 3) {
              uVar6 = 3;
              fVar21 = local_d8[0]._0_4_;
            }
            else {
              pfVar15 = &local_b0;
              FUN_1400b56fe(pfVar15,local_d8,3);
              fVar21 = 0.0;
              if (local_90 != 0) {
                fVar21 = local_b0;
              }
              pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
              if (pcVar3 != (code *)0x0) {
                if (0x18 < local_98) {
                  pfVar15 = (float *)CONCAT44(uStack_ac,local_b0);
                }
                (*pcVar3)(pfVar15);
              }
              if (0x18 < local_98) {
                FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
              }
              uVar6 = (uint)local_b8;
            }
            *(float *)(param_1 + 0x530) = fVar21;
            pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar6 * 0x120));
            if (pcVar3 != (code *)0x0) {
              ppppuVar11 = local_d8;
              if (0x18 < local_c0) {
                ppppuVar11 = (undefined8 ****)local_d8[0];
              }
              (*pcVar3)(ppppuVar11);
            }
            if (0x18 < local_c0) {
              FUN_1400020a8(local_d8[0]);
            }
            FUN_1448173f8(local_110);
            if ((local_138[0] == '\x03') && (local_128 != (longlong *)0x0)) {
              LOCK();
              piVar1 = (int *)((longlong)local_128 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_128 + 0x10))();
              }
            }
          }
        }
      }
      goto LAB_143d039b1;
    }
  }
  uVar13 = 0;
LAB_143d039b1:
  if ((local_70 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13 & 0xffffffff;
}



// FUNCTION 143d046ca FUN_143d046ca body=2205 status=ok
// SIG undefined FUN_143d046ca(void)

void FUN_143d046ca(longlong param_1,undefined8 param_2,undefined1 *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  int *piVar16;
  undefined8 *puVar18;
  ulonglong uVar19;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  longlong local_190;
  undefined8 local_188;
  longlong local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined1 *local_168;
  longlong local_160;
  undefined1 local_158 [256];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  undefined1 *puVar17;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if ((*(longlong *)(param_1 + 0x458) != 0) && (*(longlong **)(param_1 + 0x460) != (longlong *)0x0))
  {
    lVar6 = (**(code **)(**(longlong **)(param_1 + 0x460) + 0x10))();
    iVar1 = *(int *)(lVar6 + 0x148);
    if (0 < (longlong)iVar1) {
      lVar12 = *(longlong *)(param_1 + 0x458);
      lVar6 = *(longlong *)(lVar6 + 0x140);
      lVar15 = 0;
      do {
        iVar2 = *(int *)(lVar6 + 0x1c + lVar15);
        if ((iVar2 == 0) || (uVar5 = *(uint *)(lVar6 + 0x18 + lVar15), (int)uVar5 < 0)) {
LAB_143d0482b:
          lVar8 = 0;
        }
        else {
          lVar8 = 0;
          if ((int)uVar5 < DAT_14c9647dc) {
            plVar9 = (longlong *)
                     ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
            if (((plVar9 == (longlong *)0x0) || ((int)plVar9[2] != iVar2)) ||
               ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)) goto LAB_143d0482b;
            lVar8 = *plVar9;
          }
        }
        lVar11 = lVar12;
        if (lVar8 != 0) {
          lVar11 = lVar8;
        }
        iVar2 = *(int *)(lVar6 + 0x14 + lVar15);
        if ((iVar2 == 0) || (uVar5 = *(uint *)(lVar6 + 0x10 + lVar15), (int)uVar5 < 0)) {
LAB_143d04832:
          local_198 = 0;
        }
        else {
          local_198 = 0;
          if ((int)uVar5 < DAT_14c9647dc) {
            puVar10 = (undefined8 *)
                      ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
            if (((puVar10 == (undefined8 *)0x0) || (*(int *)(puVar10 + 2) != iVar2)) ||
               ((*(uint *)(puVar10 + 1) & 0x10200000) != 0)) goto LAB_143d04832;
            local_198 = *puVar10;
          }
        }
        local_190 = lVar12;
        local_188 = param_2;
        cVar4 = FUN_143d0393a(param_1,*(undefined8 *)(lVar6 + lVar15),0,lVar11);
        if (cVar4 != '\0') {
          *param_3 = 1;
        }
        lVar15 = lVar15 + 0x20;
      } while ((longlong)iVar1 * 0x20 != lVar15);
    }
  }
  local_180 = param_1;
  if ((*(longlong *)(param_1 + 0x438) != 0) &&
     (plVar9 = *(longlong **)(param_1 + 0x440), plVar9 != (longlong *)0x0)) {
    if (*(longlong *)(param_1 + 0x458) == 0) {
      plVar13 = (longlong *)0x0;
    }
    else {
      plVar13 = *(longlong **)(param_1 + 0x460);
    }
    if ((*(longlong *)(param_1 + 0x458) != *(longlong *)(param_1 + 0x438)) || (plVar13 != plVar9)) {
      lVar6 = (**(code **)(*plVar9 + 0x10))();
      iVar1 = *(int *)(lVar6 + 0x148);
      if (0 < (longlong)iVar1) {
        lVar12 = *(longlong *)(local_180 + 0x410);
        lVar15 = *(longlong *)(local_180 + 0x438);
        lVar6 = *(longlong *)(lVar6 + 0x140);
        lVar8 = 0;
        do {
          iVar2 = *(int *)(lVar6 + 0x1c + lVar8);
          if ((iVar2 == 0) || (uVar5 = *(uint *)(lVar6 + 0x18 + lVar8), (int)uVar5 < 0)) {
LAB_143d049b3:
            lVar11 = 0;
          }
          else {
            lVar11 = 0;
            if ((int)uVar5 < DAT_14c9647dc) {
              plVar9 = (longlong *)
                       ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
              if (((plVar9 == (longlong *)0x0) || ((int)plVar9[2] != iVar2)) ||
                 ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)) goto LAB_143d049b3;
              lVar11 = *plVar9;
            }
          }
          lVar14 = lVar12;
          if (lVar11 != 0) {
            lVar14 = lVar11;
          }
          iVar2 = *(int *)(lVar6 + 0x14 + lVar8);
          if ((iVar2 == 0) || (uVar5 = *(uint *)(lVar6 + 0x10 + lVar8), (int)uVar5 < 0)) {
LAB_143d049ba:
            local_198 = 0;
          }
          else {
            local_198 = 0;
            if ((int)uVar5 < DAT_14c9647dc) {
              puVar10 = (undefined8 *)
                        ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
              if (((puVar10 == (undefined8 *)0x0) || (*(int *)(puVar10 + 2) != iVar2)) ||
                 ((*(uint *)(puVar10 + 1) & 0x10200000) != 0)) goto LAB_143d049ba;
              local_198 = *puVar10;
            }
          }
          local_190 = lVar15;
          local_188 = param_2;
          cVar4 = FUN_143d0393a(local_180,*(undefined8 *)(lVar6 + lVar8),
                                CONCAT71((int7)((ulonglong)local_198 >> 8),1),lVar14);
          if (cVar4 != '\0') {
            *param_3 = 1;
          }
          lVar8 = lVar8 + 0x20;
        } while ((longlong)iVar1 * 0x20 != lVar8);
      }
    }
  }
  lVar12 = local_180;
  lVar6 = *(longlong *)(local_180 + 0x488);
  if ((lVar6 != 0) && (iVar1 = *(int *)(lVar6 + 0x10), 0 < (longlong)iVar1)) {
    lVar15 = *(longlong *)(local_180 + 0x478);
    lVar6 = *(longlong *)(lVar6 + 8);
    lVar8 = 0;
    do {
      iVar2 = *(int *)(lVar6 + 0x1c + lVar8);
      if ((iVar2 == 0) || (uVar5 = *(uint *)(lVar6 + 0x18 + lVar8), (int)uVar5 < 0)) {
LAB_143d04add:
        lVar11 = 0;
      }
      else {
        lVar11 = 0;
        if ((int)uVar5 < DAT_14c9647dc) {
          plVar9 = (longlong *)
                   ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
          if (((plVar9 == (longlong *)0x0) || ((int)plVar9[2] != iVar2)) ||
             ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)) goto LAB_143d04add;
          lVar11 = *plVar9;
        }
      }
      lVar14 = lVar15;
      if (lVar11 != 0) {
        lVar14 = lVar11;
      }
      iVar2 = *(int *)(lVar6 + 0x14 + lVar8);
      if ((iVar2 == 0) || (uVar5 = *(uint *)(lVar6 + 0x10 + lVar8), (int)uVar5 < 0)) {
LAB_143d04ae4:
        local_198 = 0;
      }
      else {
        local_198 = 0;
        if ((int)uVar5 < DAT_14c9647dc) {
          puVar10 = (undefined8 *)
                    ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
          if (((puVar10 == (undefined8 *)0x0) || (*(int *)(puVar10 + 2) != iVar2)) ||
             ((*(uint *)(puVar10 + 1) & 0x10200000) != 0)) goto LAB_143d04ae4;
          local_198 = *puVar10;
        }
      }
      local_190 = lVar15;
      local_188 = param_2;
      cVar4 = FUN_143d0393a(lVar12,*(undefined8 *)(lVar6 + lVar8),0,lVar14);
      if (cVar4 != '\0') {
        *param_3 = 1;
      }
      lVar8 = lVar8 + 0x20;
    } while ((longlong)iVar1 * 0x20 != lVar8);
  }
  if (*(longlong **)(lVar12 + 0x4a0) != (longlong *)0x0) {
    lVar6 = (**(code **)(**(longlong **)(lVar12 + 0x4a0) + 0x10))();
    iVar1 = *(int *)(lVar6 + 0x30);
    if (0 < (longlong)iVar1) {
      lVar15 = *(longlong *)(lVar12 + 0x40);
      lVar6 = *(longlong *)(lVar6 + 0x28);
      lVar8 = 0;
      do {
        iVar2 = *(int *)(lVar6 + 0x1c + lVar8);
        if ((iVar2 == 0) || (uVar5 = *(uint *)(lVar6 + 0x18 + lVar8), (int)uVar5 < 0)) {
LAB_143d04c05:
          lVar11 = 0;
        }
        else {
          lVar11 = 0;
          if ((int)uVar5 < DAT_14c9647dc) {
            plVar9 = (longlong *)
                     ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
            if (((plVar9 == (longlong *)0x0) || ((int)plVar9[2] != iVar2)) ||
               ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)) goto LAB_143d04c05;
            lVar11 = *plVar9;
          }
        }
        lVar14 = lVar15;
        if (lVar11 != 0) {
          lVar14 = lVar11;
        }
        iVar2 = *(int *)(lVar6 + 0x14 + lVar8);
        if ((iVar2 == 0) || (uVar5 = *(uint *)(lVar6 + 0x10 + lVar8), (int)uVar5 < 0)) {
LAB_143d04c0c:
          local_198 = 0;
        }
        else {
          local_198 = 0;
          if ((int)uVar5 < DAT_14c9647dc) {
            puVar10 = (undefined8 *)
                      ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
            if (((puVar10 == (undefined8 *)0x0) || (*(int *)(puVar10 + 2) != iVar2)) ||
               ((*(uint *)(puVar10 + 1) & 0x10200000) != 0)) goto LAB_143d04c0c;
            local_198 = *puVar10;
          }
        }
        local_190 = lVar15;
        local_188 = param_2;
        cVar4 = FUN_143d0393a(lVar12,*(undefined8 *)(lVar6 + lVar8),0,lVar14);
        if (cVar4 != '\0') {
          *param_3 = 1;
        }
        lVar8 = lVar8 + 0x20;
      } while ((longlong)iVar1 * 0x20 != lVar8);
    }
  }
  local_58 = (undefined1 *)0x0;
  local_50 = 0x800000000;
  lVar6 = FUN_141845d40();
  if ((longlong)*(int *)(lVar12 + 0x2e8) == 0) {
    uVar19 = 0;
  }
  else {
    puVar10 = *(undefined8 **)(lVar12 + 0x2e0);
    puVar18 = puVar10 + (longlong)*(int *)(lVar12 + 0x2e8) * 4;
    local_160 = lVar6 + 0x30;
    local_170 = param_2;
    local_168 = param_3;
    do {
      plVar9 = (longlong *)*puVar10;
      plVar13 = (longlong *)puVar10[1];
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
      }
      uVar3 = puVar10[2];
      local_178 = puVar10[3];
      lVar15 = (**(code **)(*plVar9 + 8))(plVar9);
      uVar19 = local_50;
      if (((lVar6 == 0) || (*(int *)(lVar15 + 0x38) < *(int *)(lVar6 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar15 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
          local_160)) {
        if (plVar13 != (longlong *)0x0) goto LAB_143d04cc2;
      }
      else {
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
          UNLOCK();
        }
        lVar15 = (longlong)(int)local_50;
        uVar5 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,uVar5);
        if (local_50._4_4_ < uVar5) {
          FUN_148822c3c(local_158,uVar19 & 0xffffffff);
        }
        lVar12 = local_180;
        puVar7 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar7 = local_158;
        }
        lVar15 = lVar15 * 0x20;
        *(longlong **)(puVar7 + lVar15) = plVar9;
        *(longlong **)(puVar7 + lVar15 + 8) = plVar13;
        if (plVar13 == (longlong *)0x0) {
          *(undefined8 *)(puVar7 + lVar15 + 0x10) = uVar3;
          *(undefined8 *)(puVar7 + lVar15 + 0x18) = local_178;
        }
        else {
          LOCK();
          *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
          UNLOCK();
          *(undefined8 *)(puVar7 + lVar15 + 0x10) = uVar3;
          *(undefined8 *)(puVar7 + lVar15 + 0x18) = local_178;
          LOCK();
          plVar9 = plVar13 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*plVar13)(plVar13);
            LOCK();
            piVar16 = (int *)((longlong)plVar13 + 0xc);
            *piVar16 = *piVar16 + -1;
            UNLOCK();
            if (*piVar16 == 0) {
              (**(code **)(*plVar13 + 0x10))(plVar13);
            }
          }
LAB_143d04cc2:
          LOCK();
          plVar9 = plVar13 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*plVar13)(plVar13);
            LOCK();
            piVar16 = (int *)((longlong)plVar13 + 0xc);
            *piVar16 = *piVar16 + -1;
            UNLOCK();
            if (*piVar16 == 0) {
              (**(code **)(*plVar13 + 0x10))(plVar13);
            }
          }
        }
      }
      puVar7 = local_168;
      uVar3 = local_170;
      puVar10 = puVar10 + 4;
    } while (puVar10 != puVar18);
    uVar19 = local_50 & 0xffffffff;
    if (0 < (int)local_50) {
      lVar6 = *(longlong *)(lVar12 + 0x458);
      if (lVar6 == 0) {
        lVar6 = *(longlong *)(lVar12 + 0x28);
      }
      puVar17 = local_158;
      if (local_58 != (undefined1 *)0x0) {
        puVar17 = local_58;
      }
      piVar16 = (int *)(puVar17 + 0x1c);
      do {
        if ((*piVar16 == 0) || (uVar5 = piVar16[-1], (int)uVar5 < 0)) {
LAB_143d04ef3:
          lVar15 = 0;
        }
        else {
          lVar15 = 0;
          if ((int)uVar5 < DAT_14c9647dc) {
            plVar9 = (longlong *)
                     ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
            if (((plVar9 == (longlong *)0x0) || ((int)plVar9[2] != *piVar16)) ||
               ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)) goto LAB_143d04ef3;
            lVar15 = *plVar9;
          }
        }
        lVar8 = lVar6;
        if (lVar15 != 0) {
          lVar8 = lVar15;
        }
        if ((piVar16[-2] == 0) || (uVar5 = piVar16[-3], (int)uVar5 < 0)) {
LAB_143d04efa:
          local_198 = 0;
        }
        else {
          local_198 = 0;
          if ((int)uVar5 < DAT_14c9647dc) {
            puVar10 = (undefined8 *)
                      ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
            if (((puVar10 == (undefined8 *)0x0) || (*(int *)(puVar10 + 2) != piVar16[-2])) ||
               ((*(uint *)(puVar10 + 1) & 0x10200000) != 0)) goto LAB_143d04efa;
            local_198 = *puVar10;
          }
        }
        local_188 = uVar3;
        local_190 = 0;
        cVar4 = FUN_143d0393a(lVar12,*(undefined8 *)(piVar16 + -7),0,lVar8);
        if (cVar4 != '\0') {
          *puVar7 = 1;
        }
        piVar16 = piVar16 + 8;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
      uVar19 = local_50 & 0xffffffff;
    }
  }
  puVar7 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar7 = local_158;
  }
  FUN_140d9affe(puVar7,uVar19);
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d04f6a FUN_143d04f6a body=679 status=ok
// SIG undefined FUN_143d04f6a(void)

void FUN_143d04f6a(longlong param_1,longlong param_2,undefined8 param_3,char param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined1 auStack_1d8 [40];
  longlong local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong *local_190;
  char *local_188;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  undefined8 local_168;
  char local_159;
  undefined1 local_158 [256];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x800000000;
  local_1a0 = param_2;
  local_178 = param_1;
  local_170 = param_2;
  local_168 = param_3;
  local_159 = param_4;
  lVar8 = FUN_141845ccc();
  local_1b0 = param_1;
  if ((longlong)*(int *)(param_1 + 0x2e8) != 0) {
    puVar13 = *(undefined8 **)(param_1 + 0x2e0);
    puVar11 = puVar13 + (longlong)*(int *)(param_1 + 0x2e8) * 4;
    lVar12 = lVar8 + 0x30;
    local_1a8 = lVar12;
    do {
      plVar2 = (longlong *)*puVar13;
      plVar3 = (longlong *)puVar13[1];
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      uVar4 = puVar13[2];
      uVar5 = puVar13[3];
      lVar9 = (**(code **)(*plVar2 + 8))(plVar2);
      uVar6 = local_50;
      if (((lVar8 == 0) || (*(int *)(lVar9 + 0x38) < *(int *)(lVar8 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
          lVar12)) {
        if (plVar3 != (longlong *)0x0) goto LAB_143d05046;
      }
      else {
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
        }
        lVar9 = (longlong)(int)local_50;
        uVar7 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,uVar7);
        if (local_50._4_4_ < uVar7) {
          FUN_148822ee8(local_158,uVar6 & 0xffffffff);
        }
        lVar12 = local_1a8;
        puVar10 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar10 = local_158;
        }
        lVar9 = lVar9 * 0x20;
        *(longlong **)(puVar10 + lVar9) = plVar2;
        *(longlong **)(puVar10 + lVar9 + 8) = plVar3;
        if (plVar3 == (longlong *)0x0) {
          *(undefined8 *)(puVar10 + lVar9 + 0x10) = uVar4;
          *(undefined8 *)(puVar10 + lVar9 + 0x18) = uVar5;
        }
        else {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
          *(undefined8 *)(puVar10 + lVar9 + 0x10) = uVar4;
          *(undefined8 *)(puVar10 + lVar9 + 0x18) = uVar5;
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
LAB_143d05046:
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
      puVar13 = puVar13 + 4;
    } while (puVar13 != puVar11);
  }
  lVar8 = local_1a0;
  local_198 = local_1b0;
  local_190 = &local_178;
  local_188 = &local_159;
  local_180 = local_1a0;
  FUN_143d05212(&local_198,1,local_158);
  if (local_159 == '\x01') {
    if (*(longlong *)(lVar8 + 8) != 0) {
      *(longlong *)(local_1b0 + 0x50) = *(longlong *)(lVar8 + 8);
    }
    if (*(char *)(lVar8 + 0x58) != '\0') {
      FUN_14881d03e(local_1b0,lVar8 + 0x20,*(undefined1 *)(lVar8 + 0x60));
    }
  }
  FUN_143d05212(&local_198,0,local_158);
  puVar10 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar10 = local_158;
  }
  FUN_140d9b04b(puVar10,local_50 & 0xffffffff);
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d05212 FUN_143d05212 body=457 status=ok
// SIG undefined FUN_143d05212(void)

void FUN_143d05212(longlong *param_1,char param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  if ((*(longlong *)(lVar1 + 0x458) != 0) && (*(longlong **)(lVar1 + 0x460) != (longlong *)0x0)) {
    lVar3 = (**(code **)(**(longlong **)(lVar1 + 0x460) + 0x10))();
    if (0 < *(int *)(lVar3 + 0x168)) {
      lVar5 = *(longlong *)(lVar1 + 0x458);
      if (lVar5 == 0) {
        lVar5 = *(longlong *)(lVar1 + 0x28);
      }
      FUN_143d0952c(param_1[1],*(undefined8 *)(lVar3 + 0x160),*(int *)(lVar3 + 0x168),0,lVar5,
                    param_2);
    }
  }
  if ((*(longlong *)(lVar1 + 0x438) != 0) &&
     (plVar2 = *(longlong **)(lVar1 + 0x440), plVar2 != (longlong *)0x0)) {
    plVar4 = (longlong *)0x0;
    if (*(longlong *)(lVar1 + 0x458) != 0) {
      plVar4 = *(longlong **)(lVar1 + 0x460);
    }
    if ((*(longlong *)(lVar1 + 0x438) != *(longlong *)(lVar1 + 0x458)) || (plVar2 != plVar4)) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (0 < *(int *)(lVar3 + 0x168)) {
        FUN_143d0952c(param_1[1],*(undefined8 *)(lVar3 + 0x160),*(int *)(lVar3 + 0x168),
                      CONCAT71((int7)((ulonglong)*(undefined8 *)(lVar1 + 0x410) >> 8),1),
                      *(undefined8 *)(lVar1 + 0x410),param_2);
      }
    }
  }
  if (*(int *)(param_3 + 0x108) != 0) {
    lVar3 = *(longlong *)(lVar1 + 0x458);
    if (lVar3 == 0) {
      lVar3 = *(longlong *)(lVar1 + 0x28);
    }
    lVar5 = *(longlong *)(param_3 + 0x100);
    if (*(longlong *)(param_3 + 0x100) == 0) {
      lVar5 = param_3;
    }
    FUN_143d0952c(param_1[1],lVar5,*(int *)(param_3 + 0x108),0,lVar3,param_2);
  }
  if ((param_2 != '\0') && (*(char *)param_1[2] == '\x01')) {
    lVar3 = param_1[3];
    if (*(longlong *)(lVar3 + 8) != 0) {
      *(longlong *)(lVar1 + 0x50) = *(longlong *)(lVar3 + 8);
      lVar3 = param_1[3];
    }
    if (*(char *)(lVar3 + 0x58) != '\0') {
      FUN_14881d03e(lVar1,lVar3 + 0x20,*(undefined1 *)(lVar3 + 0x60));
    }
  }
  lVar3 = *(longlong *)(lVar1 + 0x488);
  if ((lVar3 != 0) && (0 < *(int *)(lVar3 + 0x30))) {
    FUN_143d0952c(param_1[1],*(undefined8 *)(lVar3 + 0x28),*(int *)(lVar3 + 0x30),0,
                  *(undefined8 *)(lVar1 + 0x478),param_2);
  }
  if (*(longlong **)(lVar1 + 0x4a0) != (longlong *)0x0) {
    lVar3 = (**(code **)(**(longlong **)(lVar1 + 0x4a0) + 0x10))();
    if (0 < *(int *)(lVar3 + 0x50)) {
      FUN_143d0952c(param_1[1],*(undefined8 *)(lVar3 + 0x48),*(int *)(lVar3 + 0x50),0,
                    *(undefined8 *)(lVar1 + 0x40),param_2);
    }
  }
  return;
}



// FUNCTION 143d053dc FUN_143d053dc body=1138 status=ok
// SIG undefined FUN_143d053dc(void)

void FUN_143d053dc(undefined8 param_1,longlong param_2,undefined4 param_3,longlong param_4,
                  undefined8 param_5,byte param_6,undefined1 *param_7,char *param_8,float *param_9,
                  undefined1 *param_10,char *param_11)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  float *pfVar9;
  float *pfVar10;
  float fVar11;
  undefined1 auStack_118 [32];
  byte local_f8;
  float *local_f0;
  longlong local_e8;
  float local_e0 [4];
  longlong *local_d0;
  undefined4 local_b8 [2];
  float local_b0;
  undefined4 uStack_ac;
  ushort local_98;
  byte local_90;
  float local_88;
  undefined4 uStack_84;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((((char)param_3 == '\0') || (*(char *)(param_2 + 0x221) == '\x01')) && (*param_8 != '\x02')) {
    param_6 = *param_8 == '\x01' | param_6;
    local_f0 = (float *)CONCAT71(local_f0._1_7_,param_6);
    local_f8 = 1;
    cVar3 = FUN_143d0298a(param_1,param_2,param_4,param_5);
    if (cVar3 != '\0') {
      if ((*(char *)(param_2 + 0x1c8) == '\x01') && (*param_11 == '\0')) {
        local_e8 = param_2 + 0x1d0;
        local_e0[0] = (float)((uint)local_e0[0] & 0xffffff00);
        local_b8[0] = 0;
        FUN_1456bb102(local_e0,param_4);
        FUN_1448729ea(local_e8,&local_b0,local_e0);
        if (local_90 == 3) {
          fVar11 = local_b0;
          bVar4 = 3;
        }
        else {
          pfVar9 = &local_88;
          FUN_1400b56fe(pfVar9,&local_b0,3);
          fVar11 = 0.0;
          if (local_68 != 0) {
            fVar11 = local_88;
          }
          pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
          if (pcVar2 != (code *)0x0) {
            if (0x18 < local_70) {
              pfVar9 = (float *)CONCAT44(uStack_84,local_88);
            }
            (*pcVar2)(pfVar9);
          }
          bVar4 = local_90;
          if (0x18 < local_70) {
            FUN_1400020a8(CONCAT44(uStack_84,local_88));
            bVar4 = local_90;
          }
        }
        pfVar9 = &local_b0;
        pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar4 * 0x120));
        if (pcVar2 != (code *)0x0) {
          if (0x18 < local_98) {
            pfVar9 = (float *)CONCAT44(uStack_ac,local_b0);
          }
          (*pcVar2)(pfVar9);
        }
        if (0x18 < local_98) {
          FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
        }
        FUN_1448173f8(local_b8);
        if ((local_e0[0]._0_1_ == '\x03') && (local_d0 != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)local_d0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_d0 + 0x10))();
          }
        }
        if ((param_4 != 0) && (*(char *)(param_2 + 0x229) != '\0')) {
          uVar6 = FUN_1403ec9c0();
          plVar7 = (longlong *)FUN_144718840(param_4,uVar6);
          if (plVar7 != (longlong *)0x0) {
            lVar8 = (**(code **)(*plVar7 + 0x10))(plVar7);
            local_e0[0] = fVar11 + *(float *)(lVar8 + 0x1c8);
            lVar8 = (**(code **)(*plVar7 + 0x10))(plVar7);
            local_f0 = local_e0;
            local_f8 = param_6;
            FUN_143d05850(param_1,lVar8 + 400,param_5,param_3);
            *param_10 = 1;
            fVar11 = local_e0[0];
          }
        }
        uVar5 = rand();
        if (fVar11 <= (float)(uVar5 & 0x7fff) / 32767.0) goto LAB_143d054b3;
      }
      cVar3 = '\x02';
      if (*(char *)(param_2 + 0x22a) != '\x02') {
        if (*(char *)(param_2 + 0x228) == '\x01') {
          *param_7 = 1;
        }
        else {
          local_e0[0] = (float)((uint)local_e0[0] & 0xffffff00);
          local_b8[0] = 0;
          FUN_1456bb102(local_e0,param_4);
          pfVar9 = &local_b0;
          FUN_1448729ea(param_2 + 0x230,pfVar9,local_e0);
          if (local_90 == 3) {
            uVar5 = 3;
            fVar11 = local_b0;
          }
          else {
            pfVar10 = &local_88;
            FUN_1400b56fe(pfVar10,&local_b0,3);
            fVar11 = 0.0;
            if (local_68 != 0) {
              fVar11 = local_88;
            }
            pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
            if (pcVar2 != (code *)0x0) {
              if (0x18 < local_70) {
                pfVar10 = (float *)CONCAT44(uStack_84,local_88);
              }
              (*pcVar2)(pfVar10);
            }
            if (0x18 < local_70) {
              FUN_1400020a8(CONCAT44(uStack_84,local_88));
            }
            uVar5 = (uint)local_90;
          }
          pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar5 * 0x120));
          if (pcVar2 != (code *)0x0) {
            if (0x18 < local_98) {
              pfVar9 = (float *)CONCAT44(uStack_ac,local_b0);
            }
            (*pcVar2)(pfVar9);
          }
          if (0x18 < local_98) {
            FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
          }
          FUN_1448173f8(local_b8);
          if ((local_e0[0]._0_1_ == '\x03') && (local_d0 != (longlong *)0x0)) {
            LOCK();
            piVar1 = (int *)((longlong)local_d0 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_d0 + 0x10))();
            }
          }
          *param_9 = fVar11 + *param_9;
        }
        cVar3 = *(char *)(param_2 + 0x22a);
        if (cVar3 == '\0') goto LAB_143d054b3;
      }
      *param_8 = cVar3;
    }
  }
LAB_143d054b3:
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d05850 FUN_143d05850 body=339 status=ok
// SIG undefined FUN_143d05850(void)

void FUN_143d05850(undefined8 param_1,longlong *param_2,undefined8 param_3,char param_4,
                  undefined1 param_5,float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  longlong lVar8;
  float fVar9;
  
  lVar6 = param_2[1];
  if ((longlong)(int)lVar6 != 0) {
    lVar4 = *param_2;
    lVar8 = 0;
    do {
      lVar5 = *(longlong *)(lVar4 + 8 + lVar8);
      if (lVar5 == 0) {
LAB_143d058e4:
        fVar1 = *(float *)(lVar4 + 0x1c + lVar8);
        fVar9 = *(float *)(lVar4 + 0x28 + lVar8);
        fVar2 = *(float *)(lVar4 + 0x34 + lVar8);
        fVar3 = *(float *)(lVar4 + 0x40 + lVar8);
        if (((((fVar1 != 0.0) || (NAN(fVar1))) || (fVar9 != 0.0)) ||
            ((NAN(fVar9) || (fVar2 != 1.0)))) || ((NAN(fVar2) || ((fVar3 != 0.0 || (NAN(fVar3)))))))
        {
          if ((fVar1 != 0.0) || (NAN(fVar1))) {
            *param_6 = fVar1 + *param_6;
          }
          if ((fVar2 != 1.0) || (NAN(fVar2))) {
            *param_6 = fVar2 * *param_6;
          }
          if ((fVar9 != 0.0) || (NAN(fVar9))) {
            if (fVar9 <= 0.0) {
              if (0.0 <= fVar9) goto LAB_143d0596a;
              fVar9 = 1.0 / (1.0 - fVar9);
            }
            else {
              fVar9 = fVar9 + 1.0;
            }
            *param_6 = fVar9 * *param_6;
          }
LAB_143d0596a:
          if ((fVar3 != 0.0) || (NAN(fVar3))) {
            *param_6 = fVar3 + *param_6;
          }
        }
      }
      else if ((param_4 == '\0') || (*(char *)(lVar5 + 0x221) == '\x01')) {
        cVar7 = FUN_143d0298a(param_1,lVar5,0,param_3,0,param_5);
        if (cVar7 != '\0') goto LAB_143d058e4;
      }
      lVar8 = lVar8 + 0x48;
    } while ((longlong)(int)lVar6 * 0x48 != lVar8);
  }
  return;
}



// FUNCTION 143d059b0 FUN_143d059b0 body=482 status=ok
// SIG undefined FUN_143d059b0(void)

void FUN_143d059b0(longlong param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = *(uint *)(param_3 + 0x18);
    lVar7 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x48);
    }
    iVar8 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             (uVar2 << 0x10 | uVar2 & 0xffff) + ((uVar2 & 0xffff) >> 4) +
                             ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10)) * 4);
    if (iVar8 != -1) {
      do {
        lVar7 = *(longlong *)(param_1 + 8) + (longlong)iVar8 * 0x80;
        if (*(uint *)(*(longlong *)(param_1 + 8) + 0x18 + (longlong)iVar8 * 0x80) == uVar2) {
          if (lVar7 == 0) {
            return;
          }
          lVar4 = FUN_1402179b4(lVar7);
          if ((*(byte *)(lVar4 + 0x19) & 0x10) == 0) {
            return;
          }
          if (*(char *)(param_2 + 0x358) == '\x01') {
            fVar11 = ((*(float *)(param_2 + 0x338) + 1.0) / (1.0 - *(float *)(param_2 + 0x33c))) *
                     *(float *)(param_2 + 0x348) *
                     (*(float *)(param_2 + 0x34c) + *(float *)(param_2 + 0x340)) +
                     *(float *)(param_2 + 0x344);
            *(float *)(param_2 + 0x354) = fVar11;
            *(undefined1 *)(param_2 + 0x358) = 0;
          }
          else {
            fVar11 = *(float *)(param_2 + 0x354);
          }
          lVar5 = FUN_1402179b4(lVar7);
          lVar4 = lVar7 + 0x38;
          cVar3 = FUN_1403ae288(lVar4);
          if (cVar3 == '\0') {
            pfVar9 = (float *)(lVar7 + 0x2c);
          }
          else {
            lVar6 = FUN_140280ec4(lVar4);
            pfVar9 = (float *)(lVar6 + 0x30);
          }
          if (0.0 < *pfVar9) {
            cVar3 = FUN_1403ae288(lVar4);
            if (cVar3 == '\0') {
              pfVar9 = (float *)(lVar7 + 0x24);
            }
            else {
              lVar7 = FUN_140280ec4(lVar4);
              pfVar9 = (float *)(lVar7 + 200);
            }
            fVar1 = *pfVar9;
            if (*(char *)(lVar5 + 0x260) == '\0') {
              fVar10 = fVar11;
              if (fVar1 <= fVar11) {
                fVar10 = fVar1;
              }
            }
            else if ((*(char *)(lVar5 + 0x260) != '\x01') ||
                    ((fVar10 = 0.0, 0.01 < fVar1 && (fVar10 = fVar1, 0.01 < fVar1 - fVar11))))
            goto LAB_143d05b43;
            *(float *)(param_3 + 0x20) = fVar10;
          }
LAB_143d05b43:
          if (*(char *)(param_2 + 0x4d8) != '\x01') {
            if (*(char *)(lVar5 + 0x260) == '\0') {
              fVar11 = 0.0;
            }
            else {
              fVar11 = *(float *)(param_3 + 0x20);
            }
          }
          *(float *)(param_3 + 0x24) = fVar11;
          return;
        }
        iVar8 = *(int *)(lVar7 + 0x78);
      } while (iVar8 != -1);
    }
  }
  return;
}



// FUNCTION 143d05b92 FUN_143d05b92 body=2063 status=ok
// SIG undefined FUN_143d05b92(void)

void FUN_143d05b92(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  longlong lVar7;
  undefined *puVar8;
  longlong *plVar9;
  int iVar10;
  longlong *plVar11;
  float *pfVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  char *pcVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_158 [32];
  int local_138;
  longlong local_128;
  longlong local_120;
  float local_114;
  char local_110 [16];
  longlong *local_100;
  int local_e8;
  float local_e0;
  undefined4 uStack_dc;
  ushort local_c8;
  byte local_c0;
  float local_b8;
  undefined4 uStack_b4;
  ushort local_a0;
  byte local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_128 = *(longlong *)(param_1 + 0x480);
  if (local_128 == 0) goto LAB_143d06200;
  if (*(char *)(param_1 + 0x358) == '\x01') {
    local_114 = ((*(float *)(param_1 + 0x338) + 1.0) / (1.0 - *(float *)(param_1 + 0x33c))) *
                *(float *)(param_1 + 0x348) *
                (*(float *)(param_1 + 0x34c) + *(float *)(param_1 + 0x340)) +
                *(float *)(param_1 + 0x344);
    *(float *)(param_1 + 0x354) = local_114;
    *(undefined1 *)(param_1 + 0x358) = 0;
  }
  else {
    local_114 = *(float *)(param_1 + 0x354);
  }
  if (*(int *)(local_128 + 0x40) == 0) goto LAB_143d06200;
  lVar16 = *(longlong *)(param_1 + 0x50);
  if (lVar16 == 0) {
    local_120 = 0;
  }
  else {
    local_120 = 0;
    if (*(int *)(lVar16 + 0xa8) != 0) {
      local_120 = lVar16;
    }
  }
  *(byte *)(param_1 + 0x39c) = *(byte *)(param_1 + 0x39c) | 8;
  uVar13 = (ulonglong)*(int *)(local_128 + 0x40);
  if (1 < (longlong)uVar13) {
    do {
      uVar14 = uVar13 - 1;
      lVar16 = *(longlong *)(local_128 + 0x38);
      lVar19 = uVar14 * 0x80 + uVar13 * 8 + -8;
      lVar18 = lVar19 + lVar16 + 0x18;
      lVar7 = FUN_1409d448e(lVar18);
      if (lVar7 != 0) {
        pcVar15 = (char *)(lVar16 + lVar19);
        if (*pcVar15 == '\x01') {
          plVar9 = *(longlong **)(pcVar15 + 0x38);
          if ((plVar9 != (longlong *)0x0) && (*(int *)(pcVar15 + 0x34) != 0)) {
            uVar2 = *(uint *)(pcVar15 + 0x30);
            if (((-1 < (int)uVar2) &&
                ((((int)uVar2 < DAT_14c9647dc &&
                  (lVar16 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8),
                  lVar16 != 0)) && (*(int *)(lVar16 + 0x10) == *(int *)(pcVar15 + 0x34))))) &&
               ((*(uint *)(lVar16 + 8) & 0x10200000) == 0)) {
              if (*(code **)(*plVar9 + 0x10) == (code *)&LAB_1447a1f2e) {
                plVar9 = plVar9 + 0xd9;
              }
              else {
                plVar9 = (longlong *)(**(code **)(*plVar9 + 0x10))();
              }
              cVar5 = FUN_14486eb0e(plVar9,pcVar15 + 0x30);
              if (cVar5 != '\0') goto LAB_143d05da8;
            }
          }
        }
        else if (0.0 < *(float *)(pcVar15 + 0x54)) {
LAB_143d05da8:
          fVar21 = (float)FUN_14055848a(pcVar15);
          lVar16 = local_120;
          if (fVar21 < 1.0) {
            *(byte *)(param_1 + 0x39c) = *(byte *)(param_1 + 0x39c) & 0xf7;
          }
          if (local_120 != 0) {
            lVar7 = FUN_1409d448e(lVar18);
            lVar19 = (longlong)*(int *)(lVar16 + 0xa8);
            if (lVar19 != 0) {
              plVar11 = *(longlong **)(lVar16 + 0xa0);
              plVar9 = plVar11 + lVar19;
              do {
                if (*(int *)(lVar7 + 0x78) != 0) {
                  lVar16 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar7 + 0x70) + lVar16) == *plVar11)
                    goto LAB_143d05e48;
                    lVar16 = lVar16 + 8;
                  } while ((longlong)*(int *)(lVar7 + 0x78) << 3 != lVar16);
                }
                if ((longlong)*(int *)(lVar7 + 0x88) == 0) goto LAB_143d05ed1;
                lVar16 = 0;
                while (*(longlong *)(*(longlong *)(lVar7 + 0x80) + lVar16) != *plVar11) {
                  lVar16 = lVar16 + 8;
                  if ((longlong)*(int *)(lVar7 + 0x88) * 8 == lVar16) goto LAB_143d05ed1;
                }
LAB_143d05e48:
                plVar11 = plVar11 + 1;
              } while (plVar11 != plVar9);
            }
          }
          fVar21 = (float)FUN_14055830e(pcVar15);
          lVar16 = FUN_1409d448e(lVar18);
          local_138 = (int)uVar14;
          fVar22 = (float)FUN_143d063a2(param_1,&local_114,lVar16,fVar21);
          if ((int)uVar14 < *(int *)(param_1 + 0x368)) {
            fVar20 = fVar22;
            if (fVar21 <= fVar22) {
              fVar20 = fVar21;
            }
            *(float *)(*(longlong *)(param_1 + 0x360) + (uVar14 & 0xffffffff) * 4) = fVar20;
            if ((lVar16 != 0) && (*(char *)(lVar16 + 0x90) == '\x01')) {
              *(uint *)(param_1 + 0x370) = *(uint *)(param_1 + 0x370) | 1 << ((byte)uVar14 & 0x1f);
            }
          }
          if (((0.0 < fVar22) && (lVar16 = FUN_1409d448e(lVar18), lVar16 != 0)) &&
             (*(char *)(lVar16 + 0x90) == '\x01')) {
            local_110[0] = '\0';
            local_e8 = 0;
            FUN_1456bb102(local_110,*(undefined8 *)(param_1 + 0x478));
            FUN_1448729ea(lVar16 + 0x98,&local_e0,local_110);
            if (local_c0 == 3) {
              fVar21 = local_e0;
              bVar6 = 3;
            }
            else {
              FUN_1400b56fe(&local_b8,&local_e0,3);
              fVar21 = 0.0;
              if (local_98 != 0) {
                fVar21 = local_b8;
              }
              pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
              if (pcVar3 != (code *)0x0) {
                pfVar12 = &local_b8;
                if (0x18 < local_a0) {
                  pfVar12 = (float *)CONCAT44(uStack_b4,local_b8);
                }
                (*pcVar3)(pfVar12);
              }
              bVar6 = local_c0;
              if (0x18 < local_a0) {
                FUN_1400020a8(CONCAT44(uStack_b4,local_b8));
                bVar6 = local_c0;
              }
            }
            pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar6 * 0x120));
            if (pcVar3 != (code *)0x0) {
              pfVar12 = &local_e0;
              if (0x18 < local_c8) {
                pfVar12 = (float *)CONCAT44(uStack_dc,local_e0);
              }
              (*pcVar3)(pfVar12);
            }
            if (0x18 < local_c8) {
              FUN_1400020a8(CONCAT44(uStack_dc,local_e0));
            }
            lVar16 = DAT_14c9a3da0;
            if ((longlong)local_e8 != 0) {
              lVar18 = (longlong)local_e8 + -1;
              lVar7 = lVar18 * 0x10;
              FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar7),
                            *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar7));
              if (*(longlong *)(lVar16 + lVar7) != 0) {
                FUN_1400020a8();
              }
              lVar16 = DAT_14c9a3da0;
              iVar17 = (int)lVar18;
              if (DAT_14c9a3dd4 != 0) {
                *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar17;
              }
              *(undefined4 *)(lVar16 + lVar7) = 0xffffffff;
              iVar10 = -1;
              if (0 < DAT_14c9a3dd4) {
                iVar10 = DAT_14c9a3dd0;
              }
              *(int *)(lVar16 + 4 + lVar7) = iVar10;
              DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
              puVar8 = DAT_14c9a3dc0;
              if (DAT_14c9a3dc0 == (undefined *)0x0) {
                puVar8 = &DAT_14c9a3db0;
              }
              iVar10 = iVar17 + 0x1f;
              if (-1 < iVar17) {
                iVar10 = iVar17;
              }
              bVar6 = (byte)lVar18 & 0x1f;
              DAT_14c9a3dd0 = iVar17;
              *(uint *)(puVar8 + (longlong)(iVar10 >> 5) * 4) =
                   *(uint *)(puVar8 + (longlong)(iVar10 >> 5) * 4) &
                   (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
              local_e8 = 0;
            }
            if ((local_110[0] == '\x03') && (local_100 != (longlong *)0x0)) {
              LOCK();
              piVar1 = (int *)((longlong)local_100 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_100 + 0x10))();
              }
            }
            *(float *)(param_1 + 0x398) = fVar22 * fVar21 + *(float *)(param_1 + 0x398);
          }
        }
      }
LAB_143d05ed1:
      bVar4 = 2 < (longlong)uVar13;
      uVar13 = uVar14;
    } while (bVar4);
  }
  pcVar15 = *(char **)(local_128 + 0x38);
  lVar7 = FUN_1409d448e(pcVar15 + 0x18);
  lVar16 = local_120;
  fVar21 = local_114;
  if (lVar7 != 0) {
    if (*pcVar15 == '\x01') {
      plVar9 = *(longlong **)(pcVar15 + 0x38);
      if ((plVar9 != (longlong *)0x0) && (*(int *)(pcVar15 + 0x34) != 0)) {
        uVar2 = *(uint *)(pcVar15 + 0x30);
        if ((-1 < (int)uVar2) &&
           (((((int)uVar2 < DAT_14c9647dc &&
              (lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar7 != 0))
             && (*(int *)(lVar7 + 0x10) == *(int *)(pcVar15 + 0x34))) &&
            ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)))) {
          if (*(code **)(*plVar9 + 0x10) == (code *)&LAB_1447a1f2e) {
            plVar9 = plVar9 + 0xd9;
          }
          else {
            plVar9 = (longlong *)(**(code **)(*plVar9 + 0x10))();
          }
          cVar5 = FUN_14486eb0e(plVar9,pcVar15 + 0x30);
          fVar21 = local_114;
          if (cVar5 != '\0') goto LAB_143d06261;
        }
      }
    }
    else if (0.0 < *(float *)(pcVar15 + 0x54)) {
LAB_143d06261:
      fVar21 = (float)FUN_14055848a(*(undefined8 *)(local_128 + 0x38));
      if (fVar21 < 1.0) {
        *(byte *)(param_1 + 0x39c) = *(byte *)(param_1 + 0x39c) & 0xf7;
      }
      if (lVar16 != 0) {
        lVar7 = FUN_1409d448e(*(longlong *)(local_128 + 0x38) + 0x18);
        if ((longlong)*(int *)(lVar16 + 0xa8) != 0) {
          plVar11 = *(longlong **)(lVar16 + 0xa0);
          plVar9 = plVar11 + *(int *)(lVar16 + 0xa8);
          do {
            if (*(int *)(lVar7 + 0x78) != 0) {
              lVar16 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar7 + 0x70) + lVar16) == *plVar11)
                goto LAB_143d06312;
                lVar16 = lVar16 + 8;
              } while ((longlong)*(int *)(lVar7 + 0x78) << 3 != lVar16);
            }
            if ((longlong)*(int *)(lVar7 + 0x88) == 0) goto LAB_143d06200;
            lVar16 = 0;
            while (*(longlong *)(*(longlong *)(lVar7 + 0x80) + lVar16) != *plVar11) {
              lVar16 = lVar16 + 8;
              if ((longlong)*(int *)(lVar7 + 0x88) * 8 == lVar16) goto LAB_143d06200;
            }
LAB_143d06312:
            plVar11 = plVar11 + 1;
          } while (plVar11 != plVar9);
        }
      }
      lVar16 = local_128;
      fVar22 = (float)FUN_14055830e(*(undefined8 *)(local_128 + 0x38));
      lVar16 = FUN_1409d448e(*(longlong *)(lVar16 + 0x38) + 0x18);
      local_138 = 0;
      fVar21 = (float)FUN_143d063a2(param_1,&local_114,lVar16,fVar22);
      if (0 < *(int *)(param_1 + 0x368)) {
        fVar20 = fVar21;
        if (fVar22 <= fVar21) {
          fVar20 = fVar22;
        }
        **(float **)(param_1 + 0x360) = fVar20;
        if ((lVar16 != 0) && (*(char *)(lVar16 + 0x90) == '\x01')) {
          *(byte *)(param_1 + 0x370) = *(byte *)(param_1 + 0x370) | 1;
        }
      }
    }
  }
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined8 *)(param_1 + 0x340) = 0;
  *(undefined4 *)(param_1 + 0x348) = 0x3f800000;
  *(float *)(param_1 + 0x34c) = fVar21;
  *(float *)(param_1 + 0x354) = fVar21;
  *(undefined1 *)(param_1 + 0x350) = 1;
  *(undefined1 *)(param_1 + 0x358) = 0;
LAB_143d06200:
  if ((local_90 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d063a2 FUN_143d063a2 body=2232 status=ok
// SIG undefined FUN_143d063a2(void)

undefined8
FUN_143d063a2(longlong *param_1,float *param_2,longlong param_3,undefined8 param_4,uint param_5)

{
  int *piVar1;
  code *pcVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  undefined *puVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  ulonglong uVar20;
  undefined4 uVar21;
  undefined1 auStack_128 [40];
  char local_100 [16];
  longlong *local_f0;
  int local_d8;
  float local_d0;
  undefined4 uStack_cc;
  ushort local_b8;
  byte local_b0;
  float local_a8;
  undefined4 uStack_a4;
  ushort local_90;
  byte local_88;
  ulonglong local_80;
  
  uVar17 = (undefined4)((ulonglong)param_4 >> 0x20);
  fVar19 = (float)param_4;
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((char)param_1[0x4b] == '\x02') {
    uVar20 = 0x3f800000;
  }
  else {
    uVar14 = (**(code **)(*param_1 + 0x158))(param_1,param_1[10],param_3);
    fVar18 = (float)uVar14;
    fVar15 = 1.0;
    if (*(char *)((longlong)param_1 + 0x53d) == '\0') {
      fVar15 = fVar18;
    }
    uVar20 = (ulonglong)(~-(uint)(fVar18 < 1.0) & (uint)fVar18) |
             CONCAT44((int)((ulonglong)uVar14 >> 0x20),
                      (~-(uint)(0.0001 < fVar18) & (uint)fVar18 |
                      -(uint)(0.0001 < fVar18) & (uint)fVar15) & -(uint)(fVar18 < 1.0));
  }
  fVar15 = 0.0;
  uVar16 = 0;
  fVar18 = (float)uVar20;
  uVar21 = (undefined4)(uVar20 >> 0x20);
  if (fVar19 <= 0.0) {
    fVar19 = fVar15;
    uVar17 = uVar16;
    if ((param_5 == 0) && (0.0001 <= fVar18)) {
      fVar19 = fVar18 * *param_2;
      uVar17 = uVar21;
    }
    goto LAB_143d06584;
  }
  if ((param_3 != 0) && (*(char *)(param_3 + 0xe8) == '\x01')) {
    local_100[0] = '\0';
    local_d8 = 0;
    FUN_1456bb102(local_100,param_1[0x8f]);
    pfVar8 = &local_d0;
    FUN_1448729ea(param_3 + 0xf0,pfVar8,local_100);
    if (local_b0 == 3) {
      fVar13 = local_d0;
      bVar3 = 3;
    }
    else {
      pfVar9 = &local_a8;
      FUN_1400b56fe(pfVar9,&local_d0,3);
      fVar13 = 0.0;
      if (local_88 != 0) {
        fVar13 = local_a8;
      }
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_88 * 0x120));
      if (pcVar2 != (code *)0x0) {
        if (0x18 < local_90) {
          pfVar9 = (float *)CONCAT44(uStack_a4,local_a8);
        }
        (*pcVar2)(pfVar9);
      }
      bVar3 = local_b0;
      if (0x18 < local_90) {
        FUN_1400020a8(CONCAT44(uStack_a4,local_a8));
        bVar3 = local_b0;
      }
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_b8) {
        pfVar8 = (float *)CONCAT44(uStack_cc,local_d0);
      }
      (*pcVar2)(pfVar8);
    }
    if (0x18 < local_b8) {
      FUN_1400020a8(CONCAT44(uStack_cc,local_d0));
    }
    lVar5 = DAT_14c9a3da0;
    if ((longlong)local_d8 != 0) {
      lVar11 = (longlong)local_d8 + -1;
      lVar12 = lVar11 * 0x10;
      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar12),
                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar12));
      if (*(longlong *)(lVar5 + lVar12) != 0) {
        FUN_1400020a8();
      }
      lVar5 = DAT_14c9a3da0;
      iVar10 = (int)lVar11;
      if (DAT_14c9a3dd4 != 0) {
        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar10;
      }
      *(undefined4 *)(lVar5 + lVar12) = 0xffffffff;
      iVar6 = -1;
      if (0 < DAT_14c9a3dd4) {
        iVar6 = DAT_14c9a3dd0;
      }
      *(int *)(lVar5 + 4 + lVar12) = iVar6;
      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
      puVar7 = &DAT_14c9a3db0;
      if (DAT_14c9a3dc0 != (undefined *)0x0) {
        puVar7 = DAT_14c9a3dc0;
      }
      iVar6 = iVar10 + 0x1f;
      if (-1 < iVar10) {
        iVar6 = iVar10;
      }
      bVar3 = (byte)lVar11 & 0x1f;
      DAT_14c9a3dd0 = iVar10;
      *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) =
           *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) &
           (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      local_d8 = 0;
    }
    if ((local_100[0] == '\x03') && (local_f0 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_f0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_f0 + 0x10))();
      }
    }
    *param_2 = *param_2 - fVar13;
  }
  if (0.0001 <= fVar18) {
    fVar13 = *param_2;
    fVar15 = fVar18 * fVar13;
    if ((param_5 != 0) && (fVar19 < fVar15)) {
      if (param_3 == 0) {
        *param_2 = fVar13 - fVar19 / fVar18;
      }
      else {
        if (*(char *)(param_3 + 0x90) == '\x01') {
          local_100[0] = '\0';
          local_d8 = 0;
          FUN_1456bb102(local_100,param_1[0x8f]);
          pfVar8 = &local_d0;
          FUN_1448729ea(param_3 + 0x98,pfVar8,local_100);
          if (local_b0 == 3) {
            uVar4 = 3;
            fVar15 = local_d0;
          }
          else {
            pfVar9 = &local_a8;
            FUN_1400b56fe(pfVar9,&local_d0,3);
            fVar15 = local_a8;
            if (local_88 == 0) {
              fVar15 = 1.0;
            }
            pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_88 * 0x120));
            if (pcVar2 != (code *)0x0) {
              if (0x18 < local_90) {
                pfVar9 = (float *)CONCAT44(uStack_a4,local_a8);
              }
              (*pcVar2)(pfVar9);
            }
            if (0x18 < local_90) {
              FUN_1400020a8(CONCAT44(uStack_a4,local_a8));
            }
            uVar4 = (uint)local_b0;
          }
          pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar4 * 0x120));
          if (pcVar2 != (code *)0x0) {
            if (0x18 < local_b8) {
              pfVar8 = (float *)CONCAT44(uStack_cc,local_d0);
            }
            (*pcVar2)(pfVar8);
          }
          if (0x18 < local_b8) {
            FUN_1400020a8(CONCAT44(uStack_cc,local_d0));
          }
          lVar5 = DAT_14c9a3da0;
          if ((longlong)local_d8 != 0) {
            lVar11 = (longlong)local_d8 + -1;
            lVar12 = lVar11 * 0x10;
            FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar12),
                          *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar12));
            if (*(longlong *)(lVar5 + lVar12) != 0) {
              FUN_1400020a8();
            }
            lVar5 = DAT_14c9a3da0;
            iVar10 = (int)lVar11;
            if (DAT_14c9a3dd4 != 0) {
              *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar10;
            }
            *(undefined4 *)(lVar5 + lVar12) = 0xffffffff;
            iVar6 = -1;
            if (0 < DAT_14c9a3dd4) {
              iVar6 = DAT_14c9a3dd0;
            }
            *(int *)(lVar5 + 4 + lVar12) = iVar6;
            DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
            puVar7 = &DAT_14c9a3db0;
            if (DAT_14c9a3dc0 != (undefined *)0x0) {
              puVar7 = DAT_14c9a3dc0;
            }
            iVar6 = iVar10 + 0x1f;
            if (-1 < iVar10) {
              iVar6 = iVar10;
            }
            bVar3 = (byte)lVar11 & 0x1f;
            DAT_14c9a3dd0 = iVar10;
            *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) =
                 *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) &
                 (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
            local_d8 = 0;
          }
          if ((local_100[0] == '\x03') && (local_f0 != (longlong *)0x0)) {
            LOCK();
            piVar1 = (int *)((longlong)local_f0 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_f0 + 0x10))();
            }
          }
          fVar13 = 0.0;
          if (0.0 <= 1.0 - fVar15) {
            fVar13 = 1.0 - fVar15;
          }
          fVar13 = fVar13 * *param_2;
        }
        else {
          fVar13 = fVar13 - fVar19 / fVar18;
        }
        *param_2 = fVar13;
        if (((*(char *)(param_3 + 0x140) == '\x01') && (-1 < (int)param_5)) &&
           ((int)param_5 < *(int *)(param_1[0x90] + 0x40))) {
          lVar5 = *(longlong *)(param_1[0x90] + 0x38);
          if (*(char *)(lVar5 + 0x80 + (ulonglong)param_5 * 0x88) == '\x01') {
            lVar5 = lVar5 + (ulonglong)param_5 * 0x88;
            *(undefined1 *)(lVar5 + 0x80) = 0;
            if (*(longlong *)(lVar5 + 0x10) != 0) {
              FUN_14036aa80();
            }
            *param_2 = 0.0;
          }
        }
      }
      goto LAB_143d06584;
    }
    uVar16 = uVar21;
    if ((param_3 != 0) && (*(char *)(param_3 + 0x90) == '\x01')) {
      local_100[0] = '\0';
      local_d8 = 0;
      FUN_1456bb102(local_100,param_1[0x8f]);
      pfVar8 = &local_d0;
      FUN_1448729ea(param_3 + 0x98,pfVar8,local_100);
      if (local_b0 == 3) {
        uVar4 = 3;
        fVar19 = local_d0;
      }
      else {
        pfVar9 = &local_a8;
        FUN_1400b56fe(pfVar9,&local_d0,3);
        fVar19 = 0.0;
        if (local_88 != 0) {
          fVar19 = local_a8;
        }
        pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_88 * 0x120));
        if (pcVar2 != (code *)0x0) {
          if (0x18 < local_90) {
            pfVar9 = (float *)CONCAT44(uStack_a4,local_a8);
          }
          (*pcVar2)(pfVar9);
        }
        if (0x18 < local_90) {
          FUN_1400020a8(CONCAT44(uStack_a4,local_a8));
        }
        uVar4 = (uint)local_b0;
      }
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar4 * 0x120));
      if (pcVar2 != (code *)0x0) {
        if (0x18 < local_b8) {
          pfVar8 = (float *)CONCAT44(uStack_cc,local_d0);
        }
        (*pcVar2)(pfVar8);
      }
      if (0x18 < local_b8) {
        FUN_1400020a8(CONCAT44(uStack_cc,local_d0));
      }
      lVar5 = DAT_14c9a3da0;
      if ((longlong)local_d8 != 0) {
        lVar12 = (longlong)local_d8 + -1;
        lVar11 = lVar12 * 0x10;
        FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar11),
                      *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar11));
        if (*(longlong *)(lVar5 + lVar11) != 0) {
          FUN_1400020a8();
        }
        lVar5 = DAT_14c9a3da0;
        iVar10 = (int)lVar12;
        if (DAT_14c9a3dd4 != 0) {
          *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar10;
        }
        *(undefined4 *)(lVar5 + lVar11) = 0xffffffff;
        iVar6 = -1;
        if (0 < DAT_14c9a3dd4) {
          iVar6 = DAT_14c9a3dd0;
        }
        *(int *)(lVar5 + 4 + lVar11) = iVar6;
        DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
        puVar7 = &DAT_14c9a3db0;
        if (DAT_14c9a3dc0 != (undefined *)0x0) {
          puVar7 = DAT_14c9a3dc0;
        }
        iVar6 = iVar10 + 0x1f;
        if (-1 < iVar10) {
          iVar6 = iVar10;
        }
        bVar3 = (byte)lVar12 & 0x1f;
        DAT_14c9a3dd0 = iVar10;
        *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) =
             *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) &
             (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
        local_d8 = 0;
      }
      if ((local_100[0] == '\x03') && (local_f0 != (longlong *)0x0)) {
        LOCK();
        piVar1 = (int *)((longlong)local_f0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_f0 + 0x10))();
        }
      }
      fVar18 = 0.0;
      if (0.0 <= 1.0 - fVar19) {
        fVar18 = 1.0 - fVar19;
      }
      *param_2 = fVar18 * *param_2;
      fVar19 = fVar15;
      uVar17 = uVar21;
      goto LAB_143d06584;
    }
  }
  *param_2 = 0.0;
  fVar19 = fVar15;
  uVar17 = uVar16;
LAB_143d06584:
  if ((local_80 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT44(uVar17,fVar19);
}



// FUNCTION 143d06c5c FUN_143d06c5c body=925 status=ok
// SIG undefined FUN_143d06c5c(void)

void FUN_143d06c5c(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_108 [32];
  undefined2 *local_e8;
  undefined8 *local_d8;
  int local_d0;
  undefined8 local_c8;
  undefined2 local_c0 [2];
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  byte local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (((*(byte *)(param_1 + 0x7d) & 2) == 0) || ((*(byte *)(param_1 + 0x471) & 1) != 0))
  goto LAB_143d06f41;
  lVar5 = FUN_140ccfc10();
  *(byte *)(param_1 + 0x471) = *(byte *)(param_1 + 0x471) | 1;
  uVar1 = *(undefined4 *)(lVar5 + 0xa8);
  local_c8 = 0;
  if (*(longlong *)(param_1 + 0x250) == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = FUN_1447210f0();
  }
  if (*(longlong *)(lVar6 + 0x1f0) == 0) {
    puVar7 = (undefined8 *)(lVar6 + 0x458);
  }
  else {
    puVar7 = (undefined8 *)(*(longlong *)(lVar6 + 0x1f0) + 0xf0);
  }
  uVar2 = *puVar7;
  lVar6 = *(longlong *)(param_1 + 0x250);
  local_d8 = (undefined8 *)0x0;
  local_d0 = 0;
  FUN_1446efa72(&local_d8,0,3,0x10);
  puVar7 = local_d8;
  local_d0 = 3;
  *local_d8 = &PTR_LAB_14a1c8830;
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
  local_d8[2] = lVar8;
  *local_d8 = &PTR_FUN_14b3f7190;
  local_d8[3] = 0;
  iVar10 = 0;
  if (lVar6 != 0) {
    uVar4 = *(uint *)(lVar6 + 0xc);
    *(uint *)(local_d8 + 3) = uVar4;
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
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
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar11);
      }
      LOCK();
      iVar10 = *(int *)(lVar6 + 0x10);
      bVar12 = iVar10 == 0;
      if (bVar12) {
        *(int *)(lVar6 + 0x10) = iVar11;
        iVar10 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar10 = iVar11;
      }
    }
  }
  *(int *)((longlong)puVar7 + 0x1c) = iVar10;
  puVar7[4] = param_1;
  local_b8 = 0;
  local_b0 = 0;
  FUN_14487d8d8(&local_b8,&local_d8);
  local_78 = 1;
  local_e8 = local_c0;
  local_c0[0] = 0;
  local_bc = 0xbf800000;
  FUN_1406f4044(uVar2,&local_c8,&local_b8,uVar1);
  (*(code *)(&PTR_LAB_14a1c87a0)[local_78])(&local_b8);
  if (local_d0 == 0) {
LAB_143d06e55:
    if (local_d8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_d8 != (undefined8 *)0x0) {
    (**(code **)*local_d8)(local_d8,0);
    FUN_1446efa72(&local_d8,0,0,0x10);
    local_d0 = 0;
    goto LAB_143d06e55;
  }
  if (*(longlong *)(param_1 + 600) == 0) {
    plVar9 = (longlong *)0x0;
  }
  else {
    plVar9 = *(longlong **)(param_1 + 0x260);
  }
  lVar6 = (**(code **)(*plVar9 + 0x10))();
  if (lVar6 == 0) {
    fVar13 = 0.0;
  }
  else if (*(int *)(lVar6 + 0x40) < 1) {
    fVar13 = -1.0;
  }
  else {
    fVar13 = (float)FUN_1405583ce();
  }
  fVar13 = fVar13 * *(float *)(lVar5 + 0xb0);
  fVar14 = 1.0;
  if (1.0 <= fVar13) {
    fVar14 = fVar13;
  }
  uVar4 = rand();
  *(float *)(param_1 + 0x4b4) = ((float)(uVar4 & 0x7fff) / 32767.0) * (fVar14 + -1.0) + 1.0;
  if (*(longlong *)(param_1 + 600) == 0) {
    plVar9 = (longlong *)0x0;
  }
  else {
    plVar9 = *(longlong **)(param_1 + 0x260);
  }
  lVar5 = (**(code **)(*plVar9 + 0x10))();
  if (lVar5 == 0) {
    fVar13 = 0.0;
  }
  else if (*(int *)(lVar5 + 0x40) < 1) {
    fVar13 = -1.0;
  }
  else {
    fVar13 = (float)FUN_14055830e(*(undefined8 *)(lVar5 + 0x38));
  }
  if (fVar13 < *(float *)(param_1 + 0x4b4)) {
    fVar14 = 1.0;
    if (1.0 <= fVar13) {
      fVar14 = fVar13;
    }
    *(float *)(param_1 + 0x4b4) = fVar14;
  }
LAB_143d06f41:
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d06ffa FUN_143d06ffa body=161 status=ok
// SIG undefined FUN_143d06ffa(void)

float FUN_143d06ffa(longlong *param_1)

{
  float fVar1;
  
  (**(code **)(*param_1 + 0x1b8))();
  (**(code **)(*param_1 + 0x1a0))(param_1);
  (**(code **)(*param_1 + 0x1a8))(param_1);
  (**(code **)(*param_1 + 0x1b0))(param_1);
  if ((char)param_1[0x6b] == '\x01') {
    fVar1 = ((*(float *)(param_1 + 0x67) + 1.0) / (1.0 - *(float *)((longlong)param_1 + 0x33c))) *
            *(float *)(param_1 + 0x69) *
            (*(float *)((longlong)param_1 + 0x34c) + *(float *)(param_1 + 0x68)) +
            *(float *)((longlong)param_1 + 0x344);
    *(float *)((longlong)param_1 + 0x354) = fVar1;
    *(undefined1 *)(param_1 + 0x6b) = 0;
  }
  else {
    fVar1 = *(float *)((longlong)param_1 + 0x354);
  }
  return fVar1;
}



// FUNCTION 143d070a2 FUN_143d070a2 body=572 status=ok
// SIG undefined FUN_143d070a2(void)

void FUN_143d070a2(longlong param_1,longlong *param_2,char param_3,undefined8 param_4,
                  longlong param_5,longlong param_6)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined1 local_c0;
  char local_b0 [16];
  longlong *local_a0;
  undefined4 local_88 [2];
  undefined **local_80;
  char local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined1 local_50 [24];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((param_3 == '\0') || (*(char *)((longlong)param_2 + 0x221) == '\x01')) {
    local_c0 = *(undefined1 *)(param_1 + 0x540);
    local_c8 = 0;
    cVar3 = FUN_143d0298a(param_1,param_2,param_4,param_5);
    if (cVar3 != '\0') {
      local_b0[0] = '\0';
      local_88[0] = 0;
      FUN_1456bb102(local_b0,param_4);
      FUN_1418adffa(&local_80,param_6 + 0x50,&DAT_14cb768a8,local_b0);
      (**(code **)(*param_2 + 0x18))(param_2,&local_80);
      local_80 = &PTR_LAB_14b3f62b0;
      FUN_1448173f8(local_50);
      if (local_78 != '\0') {
        if (local_78 == '\x01') {
          local_70 = 0;
        }
        else if ((local_78 == '\x03') && (local_68 != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)local_68 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_68 + 0x10))();
          }
        }
        local_78 = '\0';
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
      if ((param_5 != 0) && ((char)param_2[0x45] != '\0')) {
        uVar2 = *(uint *)(param_5 + 0xc);
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar5 = 0;
        }
        iVar4 = *(int *)(lVar5 + 0x10);
        if (*(int *)(lVar5 + 0x10) == 0) {
          LOCK();
          iVar4 = DAT_14c964868 + 1;
          UNLOCK();
          iVar6 = DAT_14c964868 + 1;
          bVar7 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar4;
          if (bVar7) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar6);
          }
          LOCK();
          iVar4 = *(int *)(lVar5 + 0x10);
          bVar7 = iVar4 == 0;
          if (bVar7) {
            *(int *)(lVar5 + 0x10) = iVar6;
            iVar4 = 0;
          }
          UNLOCK();
          if (bVar7) {
            iVar4 = iVar6;
          }
        }
        iVar6 = *(int *)(param_6 + 0x88);
        *(uint *)(param_6 + 0x88) = iVar6 + 1U;
        if (*(uint *)(param_6 + 0x8c) < iVar6 + 1U) {
          FUN_1409d3082((longlong *)(param_6 + 0x80),iVar6);
        }
        *(ulonglong *)(*(longlong *)(param_6 + 0x80) + (longlong)iVar6 * 8) = CONCAT44(iVar4,uVar2);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d072e0 FUN_143d072e0 body=2053 status=ok
// SIG undefined FUN_143d072e0(void)

void FUN_143d072e0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  int *piVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined8 local_180;
  longlong local_178;
  undefined8 local_170;
  longlong local_168;
  undefined8 local_160;
  undefined1 local_158 [256];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if ((*(longlong *)(param_1 + 0x458) != 0) && (*(longlong **)(param_1 + 0x460) != (longlong *)0x0))
  {
    lVar5 = (**(code **)(**(longlong **)(param_1 + 0x460) + 0x10))();
    iVar1 = *(int *)(lVar5 + 0x188);
    if (0 < (longlong)iVar1) {
      lVar6 = *(longlong *)(param_1 + 0x458);
      lVar5 = *(longlong *)(lVar5 + 0x180);
      lVar14 = 0;
      do {
        iVar2 = *(int *)(lVar5 + 0x1c + lVar14);
        if ((iVar2 == 0) || (uVar4 = *(uint *)(lVar5 + 0x18 + lVar14), (int)uVar4 < 0)) {
LAB_143d07432:
          lVar8 = 0;
        }
        else {
          lVar8 = 0;
          if ((int)uVar4 < DAT_14c9647dc) {
            plVar9 = (longlong *)
                     ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
            if (((plVar9 == (longlong *)0x0) || ((int)plVar9[2] != iVar2)) ||
               ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)) goto LAB_143d07432;
            lVar8 = *plVar9;
          }
        }
        lVar13 = lVar6;
        if (lVar8 != 0) {
          lVar13 = lVar8;
        }
        iVar2 = *(int *)(lVar5 + 0x14 + lVar14);
        if ((iVar2 == 0) || (uVar4 = *(uint *)(lVar5 + 0x10 + lVar14), (int)uVar4 < 0)) {
LAB_143d07439:
          local_188 = 0;
        }
        else {
          local_188 = 0;
          if ((int)uVar4 < DAT_14c9647dc) {
            puVar10 = (undefined8 *)
                      ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
            if (((puVar10 == (undefined8 *)0x0) || (*(int *)(puVar10 + 2) != iVar2)) ||
               ((*(uint *)(puVar10 + 1) & 0x10200000) != 0)) goto LAB_143d07439;
            local_188 = *puVar10;
          }
        }
        local_180 = param_2;
        FUN_143d070a2(param_1,*(undefined8 *)(lVar5 + lVar14),0,lVar13);
        lVar14 = lVar14 + 0x20;
      } while ((longlong)iVar1 * 0x20 != lVar14);
    }
  }
  if ((*(longlong *)(param_1 + 0x438) != 0) &&
     (plVar9 = *(longlong **)(param_1 + 0x440), plVar9 != (longlong *)0x0)) {
    if (*(longlong *)(param_1 + 0x458) == 0) {
      plVar12 = (longlong *)0x0;
    }
    else {
      plVar12 = *(longlong **)(param_1 + 0x460);
    }
    if ((*(longlong *)(param_1 + 0x458) != *(longlong *)(param_1 + 0x438)) || (plVar12 != plVar9)) {
      lVar5 = (**(code **)(*plVar9 + 0x10))();
      iVar1 = *(int *)(lVar5 + 0x188);
      if (0 < (longlong)iVar1) {
        lVar6 = *(longlong *)(param_1 + 0x410);
        lVar5 = *(longlong *)(lVar5 + 0x180);
        lVar14 = 0;
        do {
          iVar2 = *(int *)(lVar5 + 0x1c + lVar14);
          if ((iVar2 == 0) || (uVar4 = *(uint *)(lVar5 + 0x18 + lVar14), (int)uVar4 < 0)) {
LAB_143d0758d:
            lVar8 = 0;
          }
          else {
            lVar8 = 0;
            if ((int)uVar4 < DAT_14c9647dc) {
              plVar9 = (longlong *)
                       ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
              if (((plVar9 == (longlong *)0x0) || ((int)plVar9[2] != iVar2)) ||
                 ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)) goto LAB_143d0758d;
              lVar8 = *plVar9;
            }
          }
          lVar13 = lVar6;
          if (lVar8 != 0) {
            lVar13 = lVar8;
          }
          iVar2 = *(int *)(lVar5 + 0x14 + lVar14);
          if ((iVar2 == 0) || (uVar4 = *(uint *)(lVar5 + 0x10 + lVar14), (int)uVar4 < 0)) {
LAB_143d07594:
            local_188 = 0;
          }
          else {
            local_188 = 0;
            if ((int)uVar4 < DAT_14c9647dc) {
              puVar10 = (undefined8 *)
                        ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
              if (((puVar10 == (undefined8 *)0x0) || (*(int *)(puVar10 + 2) != iVar2)) ||
                 ((*(uint *)(puVar10 + 1) & 0x10200000) != 0)) goto LAB_143d07594;
              local_188 = *puVar10;
            }
          }
          local_180 = param_2;
          FUN_143d070a2(param_1,*(undefined8 *)(lVar5 + lVar14),
                        CONCAT71((int7)((ulonglong)local_188 >> 8),1),lVar13);
          lVar14 = lVar14 + 0x20;
        } while ((longlong)iVar1 * 0x20 != lVar14);
      }
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x488);
  if ((lVar5 != 0) && (iVar1 = *(int *)(lVar5 + 0x50), 0 < (longlong)iVar1)) {
    lVar6 = *(longlong *)(param_1 + 0x478);
    lVar5 = *(longlong *)(lVar5 + 0x48);
    lVar14 = 0;
    do {
      iVar2 = *(int *)(lVar5 + 0x1c + lVar14);
      if ((iVar2 == 0) || (uVar4 = *(uint *)(lVar5 + 0x18 + lVar14), (int)uVar4 < 0)) {
LAB_143d076a6:
        lVar8 = 0;
      }
      else {
        lVar8 = 0;
        if ((int)uVar4 < DAT_14c9647dc) {
          plVar9 = (longlong *)
                   ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
          if (((plVar9 == (longlong *)0x0) || ((int)plVar9[2] != iVar2)) ||
             ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)) goto LAB_143d076a6;
          lVar8 = *plVar9;
        }
      }
      lVar13 = lVar6;
      if (lVar8 != 0) {
        lVar13 = lVar8;
      }
      iVar2 = *(int *)(lVar5 + 0x14 + lVar14);
      if ((iVar2 == 0) || (uVar4 = *(uint *)(lVar5 + 0x10 + lVar14), (int)uVar4 < 0)) {
LAB_143d076ad:
        local_188 = 0;
      }
      else {
        local_188 = 0;
        if ((int)uVar4 < DAT_14c9647dc) {
          puVar10 = (undefined8 *)
                    ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
          if (((puVar10 == (undefined8 *)0x0) || (*(int *)(puVar10 + 2) != iVar2)) ||
             ((*(uint *)(puVar10 + 1) & 0x10200000) != 0)) goto LAB_143d076ad;
          local_188 = *puVar10;
        }
      }
      local_180 = param_2;
      FUN_143d070a2(param_1,*(undefined8 *)(lVar5 + lVar14),0,lVar13);
      lVar14 = lVar14 + 0x20;
    } while ((longlong)iVar1 * 0x20 != lVar14);
  }
  if (*(longlong **)(param_1 + 0x4a0) != (longlong *)0x0) {
    lVar5 = (**(code **)(**(longlong **)(param_1 + 0x4a0) + 0x10))();
    iVar1 = *(int *)(lVar5 + 0x70);
    if (0 < (longlong)iVar1) {
      lVar6 = *(longlong *)(param_1 + 0x40);
      lVar5 = *(longlong *)(lVar5 + 0x68);
      lVar14 = 0;
      do {
        iVar2 = *(int *)(lVar5 + 0x1c + lVar14);
        if ((iVar2 == 0) || (uVar4 = *(uint *)(lVar5 + 0x18 + lVar14), (int)uVar4 < 0)) {
LAB_143d077c2:
          lVar8 = 0;
        }
        else {
          lVar8 = 0;
          if ((int)uVar4 < DAT_14c9647dc) {
            plVar9 = (longlong *)
                     ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
            if (((plVar9 == (longlong *)0x0) || ((int)plVar9[2] != iVar2)) ||
               ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)) goto LAB_143d077c2;
            lVar8 = *plVar9;
          }
        }
        lVar13 = lVar6;
        if (lVar8 != 0) {
          lVar13 = lVar8;
        }
        iVar2 = *(int *)(lVar5 + 0x14 + lVar14);
        if ((iVar2 == 0) || (uVar4 = *(uint *)(lVar5 + 0x10 + lVar14), (int)uVar4 < 0)) {
LAB_143d077c9:
          local_188 = 0;
        }
        else {
          local_188 = 0;
          if ((int)uVar4 < DAT_14c9647dc) {
            puVar10 = (undefined8 *)
                      ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
            if (((puVar10 == (undefined8 *)0x0) || (*(int *)(puVar10 + 2) != iVar2)) ||
               ((*(uint *)(puVar10 + 1) & 0x10200000) != 0)) goto LAB_143d077c9;
            local_188 = *puVar10;
          }
        }
        local_180 = param_2;
        FUN_143d070a2(param_1,*(undefined8 *)(lVar5 + lVar14),0,lVar13);
        lVar14 = lVar14 + 0x20;
      } while ((longlong)iVar1 * 0x20 != lVar14);
    }
  }
  local_58 = (undefined1 *)0x0;
  local_50 = 0x800000000;
  lVar5 = FUN_143c38d58();
  if ((longlong)*(int *)(param_1 + 0x2e8) == 0) {
    uVar16 = 0;
  }
  else {
    puVar10 = *(undefined8 **)(param_1 + 0x2e0);
    puVar15 = puVar10 + (longlong)*(int *)(param_1 + 0x2e8) * 4;
    local_168 = lVar5 + 0x30;
    local_178 = param_1;
    local_170 = param_2;
    do {
      plVar9 = (longlong *)*puVar10;
      plVar12 = (longlong *)puVar10[1];
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
      }
      local_160 = puVar10[2];
      uVar3 = puVar10[3];
      lVar6 = (**(code **)(*plVar9 + 8))(plVar9);
      uVar16 = local_50;
      if (((lVar5 == 0) || (*(int *)(lVar6 + 0x38) < *(int *)(lVar5 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
          local_168)) {
        if (plVar12 != (longlong *)0x0) goto LAB_143d0787e;
      }
      else {
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        lVar6 = (longlong)(int)local_50;
        uVar4 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,uVar4);
        if (local_50._4_4_ < uVar4) {
          FUN_143d0abe2(local_158,uVar16 & 0xffffffff);
        }
        param_1 = local_178;
        puVar7 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar7 = local_158;
        }
        lVar6 = lVar6 * 0x20;
        *(longlong **)(puVar7 + lVar6) = plVar9;
        *(longlong **)(puVar7 + lVar6 + 8) = plVar12;
        if (plVar12 == (longlong *)0x0) {
          *(undefined8 *)(puVar7 + lVar6 + 0x10) = local_160;
          *(undefined8 *)(puVar7 + lVar6 + 0x18) = uVar3;
        }
        else {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
          *(undefined8 *)(puVar7 + lVar6 + 0x10) = local_160;
          *(undefined8 *)(puVar7 + lVar6 + 0x18) = uVar3;
          LOCK();
          plVar9 = plVar12 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar11 = (int *)((longlong)plVar12 + 0xc);
            *piVar11 = *piVar11 + -1;
            UNLOCK();
            if (*piVar11 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
            }
          }
LAB_143d0787e:
          LOCK();
          plVar9 = plVar12 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar11 = (int *)((longlong)plVar12 + 0xc);
            *piVar11 = *piVar11 + -1;
            UNLOCK();
            if (*piVar11 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
            }
          }
        }
      }
      uVar3 = local_170;
      puVar10 = puVar10 + 4;
    } while (puVar10 != puVar15);
    uVar16 = local_50 & 0xffffffff;
    if (0 < (int)local_50) {
      lVar5 = *(longlong *)(param_1 + 0x458);
      if (lVar5 == 0) {
        lVar5 = *(longlong *)(param_1 + 0x28);
      }
      puVar7 = local_158;
      if (local_58 != (undefined1 *)0x0) {
        puVar7 = local_58;
      }
      piVar11 = (int *)(puVar7 + 0x1c);
      do {
        if ((*piVar11 == 0) || (uVar4 = piVar11[-1], (int)uVar4 < 0)) {
LAB_143d07a76:
          lVar6 = 0;
        }
        else {
          lVar6 = 0;
          if ((int)uVar4 < DAT_14c9647dc) {
            plVar9 = (longlong *)
                     ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
            if (((plVar9 == (longlong *)0x0) || ((int)plVar9[2] != *piVar11)) ||
               ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)) goto LAB_143d07a76;
            lVar6 = *plVar9;
          }
        }
        lVar14 = lVar5;
        if (lVar6 != 0) {
          lVar14 = lVar6;
        }
        if ((piVar11[-2] == 0) || (uVar4 = piVar11[-3], (int)uVar4 < 0)) {
LAB_143d07a7a:
          local_188 = 0;
        }
        else {
          local_188 = 0;
          if ((int)uVar4 < DAT_14c9647dc) {
            puVar10 = (undefined8 *)
                      ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
            if (((puVar10 == (undefined8 *)0x0) || (*(int *)(puVar10 + 2) != piVar11[-2])) ||
               ((*(uint *)(puVar10 + 1) & 0x10200000) != 0)) goto LAB_143d07a7a;
            local_188 = *puVar10;
          }
        }
        local_180 = uVar3;
        FUN_143d070a2(param_1,*(undefined8 *)(piVar11 + -7),0,lVar14);
        piVar11 = piVar11 + 8;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
      uVar16 = local_50 & 0xffffffff;
    }
  }
  puVar7 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar7 = local_158;
  }
  FUN_143c38609(puVar7,uVar16);
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d07afc FUN_143d07afc body=341 status=ok
// SIG undefined FUN_143d07afc(void)

undefined8 FUN_143d07afc(longlong param_1,undefined8 param_2,longlong param_3)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 ****ppppuVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [40];
  undefined4 local_a0;
  undefined1 local_98 [40];
  undefined4 local_70;
  undefined8 ***local_68 [3];
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar3 = 0;
  if ((param_3 != 0) && (uVar3 = 0, (longlong)*(int *)(param_1 + 0xa0) != 0)) {
    lVar5 = *(longlong *)(param_1 + 0x98);
    lVar6 = (longlong)*(int *)(param_1 + 0xa0) * 0x30;
    do {
      lVar2 = FUN_1409d448e(lVar5);
      if (lVar2 == param_3) {
        local_c8[0] = 0;
        local_a0 = 0;
        FUN_1456bb102(local_c8,param_2);
        local_98[0] = 0;
        local_70 = 0;
        uVar3 = FUN_144873cc0(lVar5 + 0x18);
        FUN_144750e81(local_68,uVar3,local_c8);
        uVar3 = FUN_144a7b41a(local_68,0);
        pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
        if (pcVar1 != (code *)0x0) {
          ppppuVar4 = local_68;
          if (0x18 < local_50) {
            ppppuVar4 = (undefined8 ****)local_68[0];
          }
          (*pcVar1)(ppppuVar4);
        }
        if (0x18 < local_50) {
          FUN_1400020a8(local_68[0]);
        }
        FUN_144a5ac3a(local_98);
        FUN_144a5ac3a(local_c8);
        break;
      }
      lVar5 = lVar5 + 0x30;
      lVar6 = lVar6 + -0x30;
      uVar3 = 0;
    } while (lVar6 != 0);
  }
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 143d07c96 FUN_143d07c96 body=358 status=ok
// SIG undefined FUN_143d07c96(void)

void FUN_143d07c96(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58;
  longlong *local_50;
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_1 != 0 && param_2 != 0) && (lVar5 = FUN_1447210f0(param_1), lVar5 != 0)) {
    local_60 = *param_3;
    FUN_1446dcdd4(&local_58);
    if (DAT_14cb77e00 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = FUN_144837462(DAT_14cb77e00,&local_58);
    }
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if ((lVar6 != 0) && (FUN_1405fd34a(&local_58,lVar5), local_50 != (longlong *)0x0)) {
      iVar4 = (int)local_50[1];
      do {
        if (iVar4 == 0) {
          plVar7 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar3 = (int)local_50[1];
        bVar8 = iVar4 == iVar3;
        if (bVar8) {
          *(int *)(local_50 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
        plVar7 = local_50;
      } while (!bVar8);
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_50 + 0x10))();
      }
      lVar5 = local_58;
      if (plVar7 != (longlong *)0x0) {
        if (local_58 != 0) {
          local_58 = param_1;
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(param_1);
          }
          local_50 = (longlong *)0x0;
          FUN_14881bf82(lVar5,&local_58,param_2,lVar6);
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
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d07dfe FUN_143d07dfe body=400 status=ok
// SIG undefined FUN_143d07dfe(void)

undefined8
FUN_143d07dfe(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  code *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((param_1 != 0) && (*(char *)(param_1 + 0x178) == '\x03')) {
    lVar1 = FUN_1409d448e(param_2);
    if (lVar1 != 0) {
      if (DAT_14cb56270 == 0) {
        local_60 = &local_48;
        local_48 = FUN_1449e2820;
        local_50 = FUN_14081d0ea;
        local_58 = FUN_1427b09ee;
        local_68 = &LAB_148630fef;
        local_70 = FUN_1464b6a91;
        local_78 = L"Engine";
        local_80 = 0;
        local_88 = 0x10004001;
        local_90 = 8;
        local_98 = 0x28;
        FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
      }
      plVar2 = (longlong *)FUN_144718840(param_1,DAT_14cb56270);
      if (plVar2 != (longlong *)0x0) {
        lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
        if (lVar3 != 0) {
          local_90 = param_6;
          local_98 = param_4;
          FUN_143d07f94(lVar3,lVar1,param_5,param_3);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_b8);
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d07f94 FUN_143d07f94 body=679 status=ok
// SIG undefined FUN_143d07f94(void)

undefined4
FUN_143d07f94(longlong param_1,longlong param_2,float param_3,float param_4,float param_5,
             undefined4 param_6)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  longlong *local_100;
  float local_f0 [2];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar2 = 0xffffffff;
  if ((param_2 != 0) && ((*(byte *)(param_1 + 0x55) & 2) != 0)) {
    fVar10 = 0.0;
    if (param_3 <= 0.0) {
      if ((longlong)*(int *)(param_1 + 0x40) != 0) {
        lVar7 = *(longlong *)(param_1 + 0x38);
        lVar5 = (longlong)*(int *)(param_1 + 0x40) * 0x88;
        do {
          lVar3 = FUN_1409d448e(lVar7 + 0x18);
          if (lVar3 == param_2) {
            FUN_145be4800(lVar7,param_4,param_5,0);
          }
          lVar7 = lVar7 + 0x88;
          lVar5 = lVar5 + -0x88;
        } while (lVar5 != 0);
      }
    }
    else {
      fVar11 = 0.0;
      if ((longlong)*(int *)(param_1 + 0x40) != 0) {
        lVar7 = *(longlong *)(param_1 + 0x38);
        lVar5 = (longlong)*(int *)(param_1 + 0x40) * 0x88 + lVar7;
LAB_143d08048:
        lVar3 = FUN_1409d448e(lVar7 + 0x18);
        if ((lVar3 != 0) && ((longlong)*(int *)(param_2 + 0x78) != 0)) {
          plVar4 = *(longlong **)(param_2 + 0x70);
          plVar1 = plVar4 + *(int *)(param_2 + 0x78);
          do {
            if (*(int *)(lVar3 + 0x78) != 0) {
              lVar6 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar3 + 0x70) + lVar6) == *plVar4)
                goto LAB_143d080ce;
                lVar6 = lVar6 + 8;
              } while ((longlong)*(int *)(lVar3 + 0x78) << 3 != lVar6);
            }
            if ((longlong)*(int *)(lVar3 + 0x88) != 0) {
              lVar6 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar3 + 0x80) + lVar6) == *plVar4)
                goto LAB_143d080ce;
                lVar6 = lVar6 + 8;
              } while ((longlong)*(int *)(lVar3 + 0x88) * 8 != lVar6);
            }
            plVar4 = plVar4 + 1;
          } while (plVar4 != plVar1);
        }
        goto LAB_143d080e8;
      }
LAB_143d080f8:
      fVar11 = (float)(-(uint)(0.0 < fVar10) & (uint)(fVar11 / fVar10));
      uVar2 = 0xffffffff;
      if (fVar11 < param_5) {
        uVar8 = -(uint)(param_5 < fVar11 + param_4);
        local_f0[0] = (fVar10 * (float)(~uVar8 & (uint)param_4 | (uint)(param_5 - fVar11) & uVar8))
                      / param_3;
        local_e8 = 0;
        uStack_e0 = 0;
        local_d8 = 0;
        uStack_d0 = 0;
        local_c8 = 0;
        uStack_c0 = 0;
        local_b8 = 0xf00000d0;
        local_b0 = 0;
        local_a8 = 0x3f800000;
        local_108 = param_6;
        local_100 = (longlong *)(param_2 + 0x70);
        uVar2 = FUN_14163a0ae(param_1,param_3,local_f0,1);
      }
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
LAB_143d080ce:
  fVar9 = (float)FUN_14055830e(lVar7);
  fVar11 = fVar11 + fVar9;
  fVar9 = (float)FUN_1405583ce(lVar7);
  fVar10 = fVar10 + fVar9;
LAB_143d080e8:
  lVar7 = lVar7 + 0x88;
  if (lVar7 == lVar5) goto LAB_143d080f8;
  goto LAB_143d08048;
}



// FUNCTION 143d0823c FUN_143d0823c body=516 status=ok
// SIG undefined FUN_143d0823c(void)

void FUN_143d0823c(longlong *param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
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
  longlong local_28;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_28 = param_2;
  if ((param_1 != (longlong *)0x0 && param_2 != 0) && ((char)param_1[0x2f] == '\x03')) {
    if (DAT_14cb56270 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_1427b09ee;
      local_48 = &LAB_148630fef;
      local_50 = FUN_1464b6a91;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
    }
    plVar1 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,DAT_14cb56270);
    if (plVar1 != (longlong *)0x0) {
      if (DAT_14cb56270 == 0) {
        local_40 = &local_20;
        local_20 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_1427b09ee;
        local_48 = &LAB_148630fef;
        local_50 = FUN_1464b6a91;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10004001;
        local_70 = 8;
        local_78 = 0x28;
        FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
      }
      plVar2 = (longlong *)FUN_144718840(plVar1,DAT_14cb56270);
      if (plVar2 != (longlong *)0x0 && plVar1 != plVar2) {
        lVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
        if (lVar3 != 0) {
          FUN_143d08442(lVar3,&local_28,param_3);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d08442 FUN_143d08442 body=71 status=ok
// SIG undefined FUN_143d08442(void)

void FUN_143d08442(longlong param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  
  if (param_3 == '\0') {
    FUN_1400bc8c2();
    return;
  }
  cVar1 = *(char *)(param_1 + 0x478);
  FUN_1400bc96c();
  if (cVar1 != '\0') {
    return;
  }
  FUN_1447f69b6(param_1 + 0x238);
  return;
}



// FUNCTION 143d08489 FUN_143d08489 body=91 status=ok
// SIG undefined FUN_143d08489(void)

void FUN_143d08489(void)

{
  if (DAT_14cb76960 != 0) {
    if (DAT_14cb76958 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb76958)(DAT_14cb76958,0);
    FUN_1446efa72(&DAT_14cb76958,0,0,0x10);
    DAT_14cb76960 = 0;
  }
  if (DAT_14cb76958 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143d084e4 FUN_143d084e4 body=169 status=ok
// SIG undefined FUN_143d084e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d084e4(void)

{
  DAT_14cb769d8 = 0;
  if (DAT_14cb769d0 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb76998 = 0;
  if (DAT_14cb7699c != 0) {
    FUN_14472eb64(&DAT_14cb76990,0);
  }
  _DAT_14cb769c0 = 0xffffffff;
  _DAT_14cb769b8 = 0;
  if (0x80 < DAT_14cb769bc) {
    DAT_14cb769bc = 0x80;
    FUN_1446efbd8(&DAT_14cb769a0,0);
  }
  if (DAT_14cb769b0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb76990 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143d0858d FUN_143d0858d body=64 status=ok
// SIG undefined FUN_143d0858d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d0858d(void)

{
  if (DAT_14cb76a38 != 0) {
    FUN_1400020a8();
  }
  _DAT_14cb76a30 = 0;
  if (DAT_14cb76a28 != 0) {
    FUN_1400020a8();
  }
  FUN_1411af278(&DAT_14cb769e8);
  return;
}



// FUNCTION 143d085cd FUN_143d085cd body=89 status=ok
// SIG undefined FUN_143d085cd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d085cd(void)

{
  _DAT_14cb77c70 = &DAT_14a171d50;
  _DAT_14cb77c88 = 0;
  if (DAT_14cb77c8c != 0) {
    FUN_140115c12(&DAT_14cb77c80,0);
  }
  DAT_14cb77c78 = 0;
  if (DAT_14cb77c80 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143d08626 FUN_143d08626 body=415 status=ok
// SIG undefined FUN_143d08626(void)

undefined8 * FUN_143d08626(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  
  lVar7 = *param_2;
  if ((lVar7 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar7);
LAB_143d08657:
    uVar6 = *(uint *)(lVar7 + 0xc);
    if ((int)uVar6 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar1 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar1 = *(int *)(lVar7 + 0x10);
      bVar8 = iVar1 == 0;
      if (bVar8) {
        *(int *)(lVar7 + 0x10) = iVar4;
        iVar1 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar1 = iVar4;
      }
    }
  }
  else {
    if (lVar7 != 0) goto LAB_143d08657;
    uVar6 = 0;
    iVar1 = 0;
  }
  *param_1 = CONCAT44(iVar1,uVar6);
  lVar7 = param_2[1];
  if ((lVar7 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar7);
  }
  else if (lVar7 == 0) {
    uVar6 = 0;
    uVar3 = 0;
    goto LAB_143d086ed;
  }
  uVar6 = *(uint *)(lVar7 + 0xc);
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
    iVar1 = DAT_14c964868 + 1;
    UNLOCK();
    uVar5 = DAT_14c964868 + 1;
    bVar8 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar1;
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
LAB_143d086ed:
  param_1[1] = (ulonglong)uVar6 | uVar3 << 0x20;
  return param_1;
}



// FUNCTION 143d08829 FUN_143d08829 body=69 status=ok
// SIG undefined FUN_143d08829(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d08829(void)

{
  _DAT_14cb76c38 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d0886b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb76c40,1);
  return;
}



// FUNCTION 143d0887d FUN_143d0887d body=49 status=ok
// SIG undefined FUN_143d0887d(void)

void FUN_143d0887d(void)

{
  FUN_144760e21(DAT_14cb76c48,DAT_14cb76c50);
  if (DAT_14cb76c48 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143d088ae FUN_143d088ae body=69 status=ok
// SIG undefined FUN_143d088ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d088ae(void)

{
  _DAT_14cb76c68 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d088f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb76c70,1);
  return;
}



// FUNCTION 143d088f3 FUN_143d088f3 body=69 status=ok
// SIG undefined FUN_143d088f3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d088f3(void)

{
  _DAT_14cb76c78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d08935. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb76c80,1);
  return;
}



// FUNCTION 143d08938 FUN_143d08938 body=69 status=ok
// SIG undefined FUN_143d08938(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d08938(void)

{
  _DAT_14cb76c88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d0897a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb76c90,1);
  return;
}



// FUNCTION 143d08982 FUN_143d08982 body=91 status=ok
// SIG undefined FUN_143d08982(void)

undefined8 FUN_143d08982(longlong param_1)

{
  char cVar1;
  
  if (((((*(byte *)(param_1 + 0x470) & 8) != 0) && (*(longlong *)(param_1 + 0x268) != 0)) &&
      (*(longlong *)(param_1 + 0x250) != 0)) &&
     (((*(longlong *)(*(longlong *)(param_1 + 0x250) + 0x1c8) != 0 &&
       (*(longlong *)(*(longlong *)(param_1 + 0x268) + 0x1c8) != 0)) &&
      (cVar1 = FUN_1414a8c54(), cVar1 != '\0')))) {
    return *(undefined8 *)(param_1 + 0x268);
  }
  return 0;
}



// FUNCTION 143d089de FUN_143d089de body=586 status=ok
// SIG undefined FUN_143d089de(void)

void FUN_143d089de(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_378 [32];
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  longlong lStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined **local_2d0;
  undefined *local_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined1 local_2b0 [4];
  undefined4 local_2ac;
  undefined4 local_20c;
  undefined4 local_1e0;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined1 local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined1 local_110;
  undefined1 local_e0;
  undefined1 local_d7;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if (param_2 == 0) {
    if ((*(byte *)(param_1 + 0x470) & 2) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_378);
    }
  }
  else {
    plVar1 = (longlong *)FUN_1405473b6();
    if (plVar1 != (longlong *)0x0) {
      local_2e0 = 0;
      local_2d8 = 0x200000000;
      FUN_1405c5fa2();
      local_2c8 = &DAT_14cb769e8;
      local_2c0 = 0;
      uStack_2b8 = 0;
      local_2d0 = &PTR_FUN_14b0394b0;
      memset(local_2b0,0,0x100);
      local_1e0 = 0xffffffff;
      local_2ac = 0x3f800000;
      local_20c = 0xffffffff;
      local_1b0 = 0;
      local_1a8 = 0x4fc71eb4;
      local_1a0 = 0;
      local_190 = 0;
      local_e0 = 0;
      local_d7 = 0;
      local_c8 = 0;
      local_b8 = 0;
      local_5c = 0;
      local_358 = 0;
      uStack_350 = 0;
      local_348 = 0;
      uStack_340 = 0;
      local_338 = 0;
      lStack_330 = 0;
      local_328 = 0;
      uStack_320 = 0;
      local_318 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_198 = 0x80;
      local_188 = (undefined4)DAT_14c8464e0;
      uStack_184 = DAT_14c8464e0._4_4_;
      uStack_180 = (undefined4)DAT_14c8464e8;
      uStack_17c = DAT_14c8464e8._4_4_;
      local_178 = DAT_14c8464f0;
      local_170 = (undefined4)DAT_14c8464e0;
      uStack_16c = DAT_14c8464e0._4_4_;
      uStack_168 = (undefined4)DAT_14c8464e8;
      uStack_164 = DAT_14c8464e8._4_4_;
      local_160 = DAT_14c8464f0;
      local_158 = (undefined4)DAT_14c8464e0;
      uStack_154 = DAT_14c8464e0._4_4_;
      uStack_150 = (undefined4)DAT_14c8464e8;
      uStack_14c = DAT_14c8464e8._4_4_;
      local_148 = DAT_14c8464f0;
      local_140 = (undefined4)DAT_14c8464e0;
      uStack_13c = DAT_14c8464e0._4_4_;
      uStack_138 = (undefined4)DAT_14c8464e8;
      uStack_134 = DAT_14c8464e8._4_4_;
      local_130 = DAT_14c8464f0;
      local_118 = DAT_14c8464f0;
      local_128 = (undefined4)DAT_14c8464e0;
      uStack_124 = DAT_14c8464e0._4_4_;
      uStack_120 = (undefined4)DAT_14c8464e8;
      uStack_11c = DAT_14c8464e8._4_4_;
      local_110 = 0;
      FUN_14082cfa8(&local_358,*(undefined8 *)(param_1 + 0x250));
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      lStack_330 = param_2;
      (**(code **)(*plVar1 + 0x128))(plVar1,&local_358);
      FUN_140960bca(param_1,plVar1);
      FUN_14025a2c6(plVar1);
      FUN_1403dfdc4(&local_358);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_378) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d08c8e FUN_143d08c8e body=350 status=ok
// SIG undefined FUN_143d08c8e(void)

longlong FUN_143d08c8e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  
  FUN_14016a17c();
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (lVar4 != 0) goto LAB_143d08cad;
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return 0;
  }
  lVar3 = FUN_14000e0c8(param_1 + 0x18);
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (lVar3 == 0) {
    if (lVar4 == 0) {
      return 0;
    }
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
LAB_143d08db3:
    *(longlong *)(param_1 + 0x48) = lVar3;
    lVar4 = lVar3;
  }
  else if (lVar4 != lVar3) {
    if ((lVar4 != 0) && (DAT_14c872a72 == '\0')) {
      FUN_140113f48();
    }
    FUN_1401924dc(lVar3);
    goto LAB_143d08db3;
  }
  if (lVar4 == 0) {
    return 0;
  }
LAB_143d08cad:
  lVar3 = FUN_141858df8();
  if ((((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
      (param_2 != 0 &&
       *(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
       lVar3 + 0x30)) && (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84))) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar5 = (uint)param_2 & 0xffff;
    lVar4 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x90);
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x98) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar5) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      while (plVar1 = (longlong *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar6 * 0x18),
            *plVar1 != param_2) {
        iVar6 = (int)plVar1[2];
        if (iVar6 == -1) {
          return 0;
        }
      }
      if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
        return plVar1[1];
      }
    }
  }
  return 0;
}



// FUNCTION 143d08dec FUN_143d08dec body=49 status=ok
// SIG undefined FUN_143d08dec(void)

void FUN_143d08dec(void)

{
  FUN_14187caaf(DAT_14cb77c48,DAT_14cb77c50);
  if (DAT_14cb77c48 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143d08e26 FUN_143d08e26 body=1590 status=ok
// SIG undefined FUN_143d08e26(void)

void FUN_143d08e26(longlong param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  int *piVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  undefined1 auStack_138 [44];
  uint local_10c;
  longlong *local_108;
  char local_100 [16];
  longlong *local_f0;
  undefined4 local_d8 [2];
  int local_d0;
  undefined4 uStack_cc;
  ushort local_b8;
  byte local_b0;
  int local_a8;
  undefined4 uStack_a4;
  ushort local_90;
  byte local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_138;
  for (piVar1 = *(int **)(param_1 + 0x60); piVar1 != (int *)0x0; piVar1 = *(int **)(piVar1 + 0x22))
  {
    if (*piVar1 == param_2) {
      if ((*(longlong *)(param_1 + 0x30) == 0) || (lVar4 = FUN_1447210f0(), lVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_80 ^ (ulonglong)auStack_138);
      }
      fVar15 = (float)*(double *)(lVar4 + 0x6d0) - (float)piVar1[0x26];
      piVar1[0x26] = (int)(float)*(double *)(lVar4 + 0x6d0);
      fVar14 = (float)piVar1[1];
      if (fVar14 <= 0.0) {
        local_10c = 0;
      }
      else {
        fVar16 = fVar14;
        if (fVar14 > fVar15) {
          fVar16 = fVar15;
        }
        local_10c = (uint)CONCAT71((int7)((ulonglong)lVar4 >> 8),fVar14 <= fVar15);
        piVar1[1] = (int)(fVar14 - fVar16);
        fVar15 = fVar16;
      }
      fVar14 = *(float *)(*(longlong *)(param_1 + 0x30) + 0x74);
      if (*(int *)(param_1 + 0x40) < 1) goto LAB_143d08ff8;
      local_108 = (longlong *)CONCAT44(local_108._4_4_,piVar1[0x27]);
      lVar4 = 0;
      goto LAB_143d08f27;
    }
  }
  goto LAB_143d09398;
LAB_143d08f27:
  do {
    lVar8 = lVar4 * 0x88 + *(longlong *)(param_1 + 0x38);
    cVar3 = FUN_14187c7e4(lVar8);
    if (cVar3 == '\0') {
      lVar8 = lVar8 + 0x18;
      lVar5 = FUN_1409d448e(lVar8);
      if (lVar5 != 0) {
        if (piVar1[0x1a] == 0) {
LAB_143d09017:
          uVar11 = (uint)lVar4;
          piVar1[0x27] = uVar11;
          if (((int)uVar11 < 0) || (iVar17 = *(int *)(param_1 + 0x40), iVar17 <= (int)uVar11))
          goto LAB_143d09130;
          uVar7 = local_10c;
          uVar12 = (uint)local_108;
          if ((uint)local_108 == uVar11) goto LAB_143d09152;
          local_100[0] = '\0';
          local_d8[0] = 0;
          FUN_1456bb102(local_100,*(undefined8 *)(param_1 + 0x30));
          piVar9 = &local_d0;
          FUN_1448729ea(piVar1 + 4,piVar9,local_100);
          iVar17 = local_d0;
          if (local_b0 != 3) {
            piVar13 = &local_a8;
            FUN_1400b56fe(piVar13,&local_d0,3);
            iVar17 = 0;
            if (local_88 != 0) {
              iVar17 = local_a8;
            }
            pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_88 * 0x120));
            if (pcVar2 != (code *)0x0) {
              if (0x18 < local_90) {
                piVar13 = (int *)CONCAT44(uStack_a4,local_a8);
              }
              (*pcVar2)(piVar13);
            }
            if (0x18 < local_90) {
              FUN_1400020a8(CONCAT44(uStack_a4,local_a8));
            }
          }
          piVar1[3] = iVar17;
          pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_b0 * 0x120));
          if (pcVar2 != (code *)0x0) {
            if (0x18 < local_b8) {
              piVar9 = (int *)CONCAT44(uStack_cc,local_d0);
            }
            (*pcVar2)(piVar9);
          }
          if (0x18 < local_b8) {
            FUN_1400020a8(CONCAT44(uStack_cc,local_d0));
          }
          FUN_1448173f8(local_d8);
          if ((local_100[0] == '\x03') && (local_f0 != (longlong *)0x0)) {
            LOCK();
            piVar9 = (int *)((longlong)local_f0 + 0xc);
            *piVar9 = *piVar9 + -1;
            UNLOCK();
            if (*piVar9 == 0) {
              (**(code **)(*local_f0 + 0x10))();
            }
          }
          uVar7 = 1;
          if (1e-08 < ABS((float)piVar1[3])) {
            uVar7 = local_10c & 0xff;
          }
          uVar12 = piVar1[0x27];
          goto LAB_143d09147;
        }
        lVar8 = FUN_1409d448e(lVar8);
        if ((longlong)piVar1[0x1a] != 0) {
          plVar6 = *(longlong **)(piVar1 + 0x18);
          plVar10 = plVar6 + piVar1[0x1a];
          do {
            if (*(int *)(lVar8 + 0x78) != 0) {
              lVar5 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar8 + 0x70) + lVar5) == *plVar6)
                goto LAB_143d09017;
                lVar5 = lVar5 + 8;
              } while ((longlong)*(int *)(lVar8 + 0x78) << 3 != lVar5);
            }
            if ((longlong)*(int *)(lVar8 + 0x88) != 0) {
              lVar5 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar8 + 0x80) + lVar5) == *plVar6)
                goto LAB_143d09017;
                lVar5 = lVar5 + 8;
              } while ((longlong)*(int *)(lVar8 + 0x88) * 8 != lVar5);
            }
            plVar6 = plVar6 + 1;
          } while (plVar6 != plVar10);
        }
      }
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 < *(int *)(param_1 + 0x40));
LAB_143d08ff8:
  piVar1[0x27] = -1;
  lVar4 = 0xffffffff;
LAB_143d09130:
  uVar7 = 1;
  if ((char)piVar1[0x20] == '\0') {
    uVar7 = local_10c & 0xff;
  }
  uVar12 = (uint)lVar4;
LAB_143d09147:
  if ((int)uVar12 < 0) {
LAB_143d09394:
    if ((char)uVar7 == '\0') goto LAB_143d09398;
  }
  else {
    iVar17 = *(int *)(param_1 + 0x40);
LAB_143d09152:
    plVar10 = (longlong *)(param_1 + 0x38);
    if (iVar17 <= (int)uVar12) goto LAB_143d09394;
    fVar16 = fVar15 * fVar14 * (float)piVar1[3];
    fVar14 = (float)FUN_14055830e((ulonglong)uVar12 * 0x88 + *plVar10);
    fVar15 = (float)FUN_1405583ce((longlong)piVar1[0x27] * 0x88 + *plVar10);
    FUN_140b555a6((longlong)piVar1[0x27] * 0x88 + *plVar10,fVar16,0);
    if (((char)uVar7 != '\0') ||
       (cVar3 = FUN_14187c7e4((longlong)piVar1[0x27] * 0x88 + *plVar10), cVar3 == '\0'))
    goto LAB_143d09394;
    lVar4 = (longlong)piVar1[0x27] + 1;
    uVar11 = 0xffffffff;
    if ((int)lVar4 < *(int *)(param_1 + 0x40)) {
      do {
        local_10c = uVar7;
        lVar8 = lVar4 * 0x88 + *plVar10;
        cVar3 = FUN_14187c7e4(lVar8);
        if (cVar3 == '\0') {
          lVar8 = lVar8 + 0x18;
          lVar5 = FUN_1409d448e(lVar8);
          if (lVar5 != 0) {
            uVar11 = (uint)lVar4;
            uVar7 = local_10c;
            if (piVar1[0x1a] == 0) break;
            lVar8 = FUN_1409d448e(lVar8);
            if ((longlong)piVar1[0x1a] != 0) {
              plVar6 = *(longlong **)(piVar1 + 0x18);
              local_108 = plVar6 + piVar1[0x1a];
              do {
                uVar7 = local_10c;
                if (*(int *)(lVar8 + 0x78) != 0) {
                  lVar5 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar8 + 0x70) + lVar5) == *plVar6)
                    goto LAB_143d0933b;
                    lVar5 = lVar5 + 8;
                  } while ((longlong)*(int *)(lVar8 + 0x78) << 3 != lVar5);
                }
                if ((longlong)*(int *)(lVar8 + 0x88) != 0) {
                  lVar5 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar8 + 0x80) + lVar5) == *plVar6)
                    goto LAB_143d0933b;
                    lVar5 = lVar5 + 8;
                  } while ((longlong)*(int *)(lVar8 + 0x88) * 8 != lVar5);
                }
                plVar6 = plVar6 + 1;
              } while (plVar6 != local_108);
            }
          }
        }
        lVar4 = lVar4 + 1;
        uVar7 = local_10c;
        uVar11 = 0xffffffff;
      } while (lVar4 < *(int *)(param_1 + 0x40));
    }
LAB_143d0933b:
    if ((uVar11 != 0xffffffff) || ((char)piVar1[0x20] == '\0')) {
      if ((-1 < (int)uVar11) &&
         ((((char)piVar1[0x28] != '\0' && (fVar15 = (fVar16 + fVar14) - fVar15, 0.0 < fVar15)) &&
          ((int)uVar11 < *(int *)(param_1 + 0x40))))) {
        FUN_140b555a6((ulonglong)uVar11 * 0x88 + *plVar10,fVar15,0);
      }
      goto LAB_143d09394;
    }
  }
  FUN_145cfd944(param_1,param_2);
LAB_143d09398:
  if ((local_80 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d09494 FUN_143d09494 body=53 status=ok
// SIG undefined FUN_143d09494(void)

undefined8 FUN_143d09494(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  iVar2 = *(int *)(param_1 + 0x58);
  if (((longlong)iVar2 < 0) || (*(int *)(param_1 + 0x40) <= iVar2)) {
    uVar6 = 0;
  }
  else {
    lVar3 = (longlong)iVar2 * 0x88;
    puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x30 + lVar3);
    uVar6 = *puVar1;
    uVar4 = puVar1[1];
    puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x40 + lVar3);
    uVar5 = puVar1[1];
    param_2[2] = *puVar1;
    param_2[3] = uVar5;
    *param_2 = uVar6;
    param_2[1] = uVar4;
    uVar6 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
  }
  return uVar6;
}



// FUNCTION 143d094c9 FUN_143d094c9 body=91 status=ok
// SIG undefined FUN_143d094c9(void)

void FUN_143d094c9(void)

{
  if (DAT_14cb77cd8 != 0) {
    if (DAT_14cb77cd0 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb77cd0)(DAT_14cb77cd0,0);
    FUN_1446efa72(&DAT_14cb77cd0,0,0,0x10);
    DAT_14cb77cd8 = 0;
  }
  if (DAT_14cb77cd0 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143d0952c FUN_143d0952c body=630 status=ok
// SIG undefined FUN_143d0952c(void)

void FUN_143d0952c(undefined8 *param_1,longlong *param_2,uint param_3,undefined1 param_4,
                  longlong param_5,char param_6)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  bool bVar10;
  
  if (0 < (int)param_3) {
    uVar3 = *param_1;
    uVar9 = (ulonglong)param_3;
    do {
      if ((*(char *)(*param_2 + 0x298) != '\x04') != (bool)param_6) {
        if ((*(int *)((longlong)param_2 + 0x1c) == 0) ||
           (uVar2 = *(uint *)(param_2 + 3), (int)uVar2 < 0)) {
LAB_143d09727:
          lVar5 = 0;
        }
        else {
          lVar5 = 0;
          if ((int)uVar2 < DAT_14c9647dc) {
            plVar6 = (longlong *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
            if (((plVar6 == (longlong *)0x0) ||
                ((int)plVar6[2] != *(int *)((longlong)param_2 + 0x1c))) ||
               ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)) goto LAB_143d09727;
            lVar5 = *plVar6;
          }
        }
        lVar8 = param_5;
        if (lVar5 != 0) {
          lVar8 = lVar5;
        }
        if (*(char *)(*param_2 + 0x1c0) == '\0') {
          FUN_143d01f66(uVar3);
        }
        else {
          plVar6 = (longlong *)param_1[2];
          iVar7 = (int)plVar6[1];
          *(uint *)(plVar6 + 1) = iVar7 + 1U;
          if (*(uint *)((longlong)plVar6 + 0xc) < iVar7 + 1U) {
            FUN_148822508(plVar6,iVar7);
          }
          puVar1 = (undefined8 *)(*plVar6 + (longlong)iVar7 * 0x28);
          puVar1[2] = 0;
          puVar1[3] = 0;
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1[4] = 0;
          FUN_1488224aa(puVar1,param_2);
          if (lVar8 == 0) {
            *(undefined4 *)(puVar1 + 3) = 0;
            iVar7 = 0;
          }
          else {
            uVar2 = *(uint *)(lVar8 + 0xc);
            *(uint *)(puVar1 + 3) = uVar2;
            if ((int)uVar2 < DAT_14c9647dc) {
              lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
            }
            else {
              lVar5 = 0;
            }
            iVar7 = *(int *)(lVar5 + 0x10);
            if (*(int *)(lVar5 + 0x10) == 0) {
              LOCK();
              iVar4 = DAT_14c964868 + 1;
              UNLOCK();
              iVar7 = DAT_14c964868 + 1;
              bVar10 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar4;
              if (bVar10) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d);
              }
              LOCK();
              iVar4 = *(int *)(lVar5 + 0x10);
              bVar10 = iVar4 == 0;
              if (bVar10) {
                *(int *)(lVar5 + 0x10) = iVar7;
                iVar4 = 0;
              }
              UNLOCK();
              if (!bVar10) {
                iVar7 = iVar4;
              }
            }
          }
          *(int *)((longlong)puVar1 + 0x1c) = iVar7;
          *(undefined1 *)(puVar1 + 4) = param_4;
        }
      }
      param_2 = param_2 + 4;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return;
}



// FUNCTION 143d097a2 FUN_143d097a2 body=29 status=ok
// SIG undefined FUN_143d097a2(void)

undefined8 FUN_143d097a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d097bf FUN_143d097bf body=58 status=ok
// SIG undefined FUN_143d097bf(void)

void FUN_143d097bf(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x30);
    do {
      if (plVar2[-4] != 0) {
        plVar1 = (longlong *)plVar2[-2];
        if ((longlong *)plVar2[-2] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 143d097f9 FUN_143d097f9 body=60 status=ok
// SIG undefined FUN_143d097f9(void)

void FUN_143d097f9(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x30);
    do {
      if (plVar2[-4] != 0) {
        plVar1 = (longlong *)plVar2[-2];
        if ((longlong *)plVar2[-2] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 143d09835 FUN_143d09835 body=64 status=ok
// SIG undefined FUN_143d09835(void)

void FUN_143d09835(longlong param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 != 0) {
    pcVar1 = (char *)(param_1 + 0x20);
    do {
      if (*(longlong *)(pcVar1 + 0x80) != 0) {
        FUN_1400020a8();
      }
      if (*pcVar1 == '\x01') {
        *pcVar1 = '\0';
      }
      pcVar1 = pcVar1 + 0xb0;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 143d09936 FUN_143d09936 body=1693 status=ok
// SIG undefined FUN_143d09936(void)

undefined8 * FUN_143d09936(undefined8 param_1)

{
  wchar_t wVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  size_t sVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined2 *puVar15;
  code *_Str;
  code *pcVar16;
  undefined1 auStack_3f8 [32];
  wchar_t *local_3d8;
  ulonglong local_3d0;
  undefined8 local_3c8;
  code *pcStack_3c0;
  wchar_t *local_3b8;
  code *local_3b0;
  undefined1 *local_3a8;
  code **local_3a0;
  code *local_398;
  code *local_390;
  undefined1 *local_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined1 *local_350;
  undefined8 local_348;
  uint local_340;
  undefined4 uStack_33c;
  int local_338;
  code *local_330;
  undefined8 local_328;
  undefined1 local_320 [128];
  undefined1 *local_2a0;
  undefined1 *local_298;
  uint local_290;
  code *local_288;
  int local_280;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  FUN_1400021e4(param_1,&local_288);
  puVar15 = &DAT_149dfb77a;
  _Str = local_288;
  if (local_280 == 0) {
    _Str = (code *)&DAT_149dfb77a;
  }
  local_2a0 = (undefined1 *)0x0;
  if (_Str == (code *)0x0) {
    local_298 = (undefined1 *)0x0;
    local_290 = 0;
  }
  else {
    sVar6 = wcslen((wchar_t *)_Str);
    local_340 = 0;
    local_388 = (undefined1 *)CONCAT44(local_388._4_4_,0x7fffffff);
    uVar9 = sVar6 & 0xffffffff;
    pcVar16 = _Str;
    do {
      iVar13 = (int)uVar9;
      if (iVar13 < 1) {
LAB_143d09a81:
        local_290 = local_340;
        uVar12 = local_340 + 1;
        if (uVar12 < 0x81) goto LAB_143d09aa1;
        FUN_1446efa72(&local_2a0,0,uVar12,1);
        local_388 = local_2a0;
        goto LAB_143d09aa3;
      }
      wVar1 = *(wchar_t *)pcVar16;
      uVar12 = (uint)(ushort)wVar1;
      pcVar3 = pcVar16 + 2;
      uVar14 = iVar13 - 1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar13 == 1) {
          cVar5 = FUN_140024707(uVar12,&local_340,&local_388);
          if (cVar5 != '\0') goto LAB_143d09a81;
          break;
        }
        if (((ushort)*(wchar_t *)pcVar3 & 0xfc00) == 0xdc00) {
          uVar12 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*(wchar_t *)pcVar3 + 0xfca02400;
          uVar14 = iVar13 - 2;
          pcVar3 = pcVar16 + 4;
        }
      }
      pcVar16 = pcVar3;
      cVar5 = FUN_140024707(uVar12,&local_340,&local_388);
      uVar9 = (ulonglong)uVar14;
    } while (cVar5 != '\0');
    local_290 = 0xffffffff;
    uVar12 = 0;
LAB_143d09aa1:
    local_388 = (undefined1 *)0x0;
LAB_143d09aa3:
    if (local_388 == (undefined1 *)0x0) {
      local_388 = local_320;
    }
    iVar13 = (int)sVar6 + 1;
    local_340 = uVar12;
    local_298 = local_388;
    do {
      if (iVar13 < 1) break;
      wVar1 = *(wchar_t *)_Str;
      uVar12 = (uint)(ushort)wVar1;
      pcVar16 = _Str + 2;
      iVar4 = iVar13 + -1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar13 == 1) {
          FUN_1400247af(uVar12,&local_388,&local_340);
          break;
        }
        if (((ushort)*(wchar_t *)pcVar16 & 0xfc00) == 0xdc00) {
          uVar12 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*(wchar_t *)pcVar16 + 0xfca02400;
          pcVar16 = _Str + 4;
          iVar4 = iVar13 + -2;
        }
      }
      iVar13 = iVar4;
      _Str = pcVar16;
      cVar5 = FUN_1400247af(uVar12,&local_388,&local_340);
    } while (cVar5 != '\0');
  }
  if (local_288 != (code *)0x0) {
    FUN_1400020a8();
  }
  uStack_368 = 0;
  local_360 = 0;
  uStack_358 = 0;
  local_380 = 0;
  uStack_378 = 0;
  local_388 = local_298;
  local_370 = 0x4000000019;
  local_350 = &LAB_143d0a108;
  uVar7 = FUN_1409ffe1d();
  local_328 = DAT_14c9aac68;
  FUN_1400021e4(&local_328,&local_288);
  FUN_140ba7826(&local_340,L"GbxValue_",&local_288);
  if (local_288 != (code *)0x0) {
    FUN_1400020a8();
  }
  puVar8 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar8[1] = 0x800000028;
  *puVar8 = &PTR_FUN_14b3f6e40;
  if (local_338 != 0) {
    puVar15 = (undefined2 *)CONCAT44(uStack_33c,local_340);
  }
  FUN_1446f470e(&local_348,puVar15,1);
  if (DAT_14c948fa0 == 0) {
    local_330 = (code *)&DAT_1427db2a2;
    lVar10 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
    DAT_14c948fa0 = lVar10;
    FUN_1446f470e(&local_328,L"ScriptStruct",1);
    local_3a8 = &LAB_1468915ce;
    local_3b0 = FUN_1427dc742;
    pcStack_3c0 = (code *)0x149e2b68a;
    local_3b8 = (wchar_t *)CONCAT44(local_3b8._4_4_,199);
    local_3c8 = 0x10;
    local_3d0 = CONCAT44(local_3d0._4_4_,0x10000020);
    local_3d8._0_4_ = 8;
    local_3a0 = &local_330;
    FUN_14574b4b2(lVar10);
    DAT_14c948fa0 = lVar10;
    if (DAT_14c927740 == 0) {
      local_288 = FUN_1449e2820;
      local_390 = FUN_14081d0ea;
      local_398 = FUN_14081d0ea;
      local_3a8 = &LAB_146856450;
      local_3b0 = FUN_1427b121c;
      local_3b8 = L"Engine";
      pcStack_3c0 = (code *)0x0;
      local_3c8 = CONCAT44(local_3c8._4_4_,0x10000021);
      local_3d0 = CONCAT44(local_3d0._4_4_,8);
      local_3d8._0_4_ = 0x28;
      local_3a0 = &local_288;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
    }
    lVar2 = DAT_14c948fa0;
    lVar10 = DAT_14c927740;
    uVar11 = FUN_1449e2fb2();
    local_3d8 = L"ScriptStruct";
    FUN_14574b446(uVar11,lVar2,lVar10,L"/Script/CoreUObject");
  }
  local_3c8 = 0;
  pcStack_3c0 = (code *)0x0;
  local_3d0 = local_3d0 & 0xffffffffffffff00;
  local_3d8 = (wchar_t *)((ulonglong)local_3d8 & 0xffffffff00000000);
  uVar9 = FUN_140010cf7(DAT_14c948fa0,uVar7,local_348,0xc5);
  FUN_140282a3c(&local_288);
  local_3c8 = 8;
  local_3d0 = 0x28;
  local_3d8 = (wchar_t *)CONCAT44(local_3d8._4_4_,1);
  FUN_14086a4ba(uVar9,&local_288,0,puVar8);
  FUN_140010906(&local_288);
  puVar8 = (undefined8 *)FUN_14001cc68(0x78,0);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c952a58) && (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1)) {
    local_3c8 = FUN_1446ddbd2();
    pcStack_3c0 = FUN_1403a682c;
    local_3d0 = 0;
    local_3d8 = (wchar_t *)0x108001;
    FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
    atexit(FUN_142818c9e);
    _Init_thread_footer(&DAT_14c952a58);
  }
  puVar8[1] = &DAT_14c952a08;
  puVar8[2] = 0;
  puVar8[3] = 0;
  *(undefined8 *)((longlong)puVar8 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar8 + 0x24) = 0;
  puVar8[0xd] = 0;
  puVar8[0xe] = 0;
  *puVar8 = &PTR_LAB_149e71fe0;
  local_288 = (code *)(uVar9 | 1);
  if (((uVar9 & 0xfffffffffffffffe) != 0) && (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c(uVar9 & 0xfffffffffffffffe);
  }
  FUN_140015d32(puVar8,&local_288,&local_388);
  if (CONCAT44(uStack_33c,local_340) != 0) {
    FUN_1400020a8();
  }
  if (local_2a0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_3f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar8;
}



// FUNCTION 143d09fd4 FUN_143d09fd4 body=47 status=ok
// SIG undefined FUN_143d09fd4(void)

void FUN_143d09fd4(undefined8 *param_1)

{
  FUN_1405c5fa2();
  param_1[1] = &DAT_14cb769e8;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14b0394b0;
  return;
}



// FUNCTION 143d0a010 FUN_143d0a010 body=70 status=ok
// SIG undefined FUN_143d0a010(void)

void FUN_143d0a010(undefined8 *param_1,longlong param_2)

{
  *param_1 = &DAT_14a171d50;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = *(undefined8 *)(param_2 + 8);
  FUN_1406022fe(param_1 + 2,param_2 + 0x10);
  *param_1 = &PTR_FUN_14b0394b0;
  return;
}



// FUNCTION 143d0a056 FUN_143d0a056 body=70 status=ok
// SIG undefined FUN_143d0a056(void)

void FUN_143d0a056(undefined8 *param_1,longlong param_2)

{
  *param_1 = &DAT_14a171d50;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = *(undefined8 *)(param_2 + 8);
  FUN_1406022fe(param_1 + 2,param_2 + 0x10);
  *param_1 = &PTR_FUN_14b0394b0;
  return;
}



// FUNCTION 143d0a09c FUN_143d0a09c body=53 status=ok
// SIG undefined FUN_143d0a09c(void)

void FUN_143d0a09c(longlong *param_1,longlong param_2)

{
  (**(code **)(*param_1 + 0x20))(param_1,0);
  param_1[1] = *(longlong *)(param_2 + 8);
  FUN_1406022fe(param_1 + 2,param_2 + 0x10);
  return;
}



// FUNCTION 143d0a0d2 FUN_143d0a0d2 body=53 status=ok
// SIG undefined FUN_143d0a0d2(void)

void FUN_143d0a0d2(longlong *param_1,longlong param_2)

{
  (**(code **)(*param_1 + 0x20))(param_1,0);
  param_1[1] = *(longlong *)(param_2 + 8);
  FUN_1406022fe(param_1 + 2,param_2 + 0x10);
  return;
}



// FUNCTION 143d0a10e FUN_143d0a10e body=29 status=ok
// SIG undefined FUN_143d0a10e(void)

undefined8 FUN_143d0a10e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d0a13a FUN_143d0a13a body=83 status=ok
// SIG undefined FUN_143d0a13a(void)

void FUN_143d0a13a(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined8 *_Dst;
  
  uVar1 = DAT_14c9aac70;
  uVar2 = (ushort)DAT_14c9aac70;
  *(ushort *)(param_2 + 3) = uVar2;
  _Dst = param_2;
  if (0x18 < uVar2) {
    _Dst = (undefined8 *)FUN_14001cc68(uVar1 & 0xffff);
    *param_2 = _Dst;
  }
  if (DAT_14c9aad08 == (code *)0x0) {
    memset(_Dst,0,(longlong)(int)DAT_14c9aac70);
  }
  else {
    (*DAT_14c9aad08)();
  }
  *(undefined1 *)(param_2 + 4) = 0x23;
  return;
}



// FUNCTION 143d0a18e FUN_143d0a18e body=83 status=ok
// SIG undefined FUN_143d0a18e(void)

void FUN_143d0a18e(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined8 *_Dst;
  
  uVar1 = DAT_14c9aac70;
  uVar2 = (ushort)DAT_14c9aac70;
  *(ushort *)(param_2 + 3) = uVar2;
  _Dst = param_2;
  if (0x18 < uVar2) {
    _Dst = (undefined8 *)FUN_14001cc68(uVar1 & 0xffff);
    *param_2 = _Dst;
  }
  if (DAT_14c9aad08 == (code *)0x0) {
    memset(_Dst,0,(longlong)(int)DAT_14c9aac70);
  }
  else {
    (*DAT_14c9aad08)();
  }
  *(undefined1 *)(param_2 + 4) = 0x23;
  return;
}



// FUNCTION 143d0a1e2 FUN_143d0a1e2 body=81 status=ok
// SIG undefined FUN_143d0a1e2(void)

void FUN_143d0a1e2(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_2 + 4) * 0x120));
  if (pcVar1 != (code *)0x0) {
    puVar2 = param_2;
    if (0x18 < *(ushort *)(param_2 + 3)) {
      puVar2 = (undefined8 *)*param_2;
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < *(ushort *)(param_2 + 3)) {
    FUN_1400020a8(*param_2);
    return;
  }
  return;
}



// FUNCTION 143d0a24a FUN_143d0a24a body=280 status=ok
// SIG undefined FUN_143d0a24a(void)

undefined8 FUN_143d0a24a(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    bVar1 = *(byte *)(param_2 + 4);
    if (bVar1 == *(byte *)(param_3 + 4)) {
      puVar6 = param_3;
      if (0x18 < *(ushort *)(param_3 + 3)) {
        puVar6 = (undefined8 *)*param_3;
      }
      puVar5 = param_2;
      if (0x18 < *(ushort *)(param_2 + 3)) {
        puVar5 = (undefined8 *)*param_2;
      }
      uVar4 = (ulonglong)((uint)bVar1 * 0x120);
      pcVar3 = *(code **)((longlong)&DAT_14c9a85c0 + uVar4);
      if (pcVar3 == (code *)0x0) {
        memcpy(puVar5,puVar6,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar4));
      }
      else {
        (*pcVar3)();
      }
    }
    else {
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
      if (pcVar3 != (code *)0x0) {
        puVar6 = param_2;
        if (0x18 < *(ushort *)(param_2 + 3)) {
          puVar6 = (undefined8 *)*param_2;
        }
        (*pcVar3)(puVar6);
      }
      if (0x18 < *(ushort *)(param_2 + 3)) {
        FUN_1400020a8(*param_2);
      }
      bVar1 = *(byte *)(param_3 + 4);
      uVar2 = *(ushort *)(param_3 + 3);
      *(ushort *)(param_2 + 3) = uVar2;
      puVar5 = param_2;
      puVar6 = param_3;
      if (0x18 < uVar2) {
        puVar5 = (undefined8 *)FUN_14001cc68(uVar2,0);
        *param_2 = puVar5;
        puVar6 = (undefined8 *)*param_3;
      }
      pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
      if (pcVar3 == (code *)0x0) {
        memcpy(puVar5,puVar6,
               (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120)));
      }
      else {
        (*pcVar3)();
      }
      *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_3 + 4);
    }
    param_3 = param_3 + 5;
    param_2 = param_2 + 5;
  }
  return 1;
}



// FUNCTION 143d0a38a FUN_143d0a38a body=59 status=ok
// SIG undefined FUN_143d0a38a(void)

undefined8 FUN_143d0a38a(longlong *param_1)

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



// FUNCTION 143d0a3d0 FUN_143d0a3d0 body=85 status=ok
// SIG undefined FUN_143d0a3d0(void)

void FUN_143d0a3d0(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  if (*(char *)(param_2 + 5) == '\x01') {
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_2 + 4) * 0x120)
                       );
    if (pcVar1 != (code *)0x0) {
      puVar2 = param_2;
      if (0x18 < *(ushort *)(param_2 + 3)) {
        puVar2 = (undefined8 *)*param_2;
      }
      (*pcVar1)(puVar2);
    }
    if (0x18 < *(ushort *)(param_2 + 3)) {
      FUN_1400020a8(*param_2);
    }
    *(undefined1 *)(param_2 + 5) = 0;
  }
  return;
}



// FUNCTION 143d0a476 FUN_143d0a476 body=40 status=ok
// SIG undefined FUN_143d0a476(void)

void FUN_143d0a476(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1464b9f8e();
  FUN_14470ec92(uVar1,param_1,param_2,0);
  return;
}



// FUNCTION 143d0a49e FUN_143d0a49e body=39 status=ok
// SIG undefined FUN_143d0a49e(void)

void FUN_143d0a49e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1464b9f8e();
  FUN_14470ec92(uVar1,param_1,&DAT_14cb77c70,0);
  return;
}



// FUNCTION 143d0a4ce FUN_143d0a4ce body=276 status=ok
// SIG undefined FUN_143d0a4ce(void)

undefined8 * FUN_143d0a4ce(undefined8 *param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [40];
  undefined **local_70;
  undefined *local_68;
  longlong local_60;
  ulonglong uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(char *)(param_2 + 0x20) == '\x12') {
    FUN_1405c5fa2();
    local_68 = &DAT_14cb769e8;
    local_60 = 0;
    uStack_58 = 0;
    local_70 = &PTR_FUN_14b0394b0;
    FUN_140653d46(&local_70,param_2);
    *(undefined2 *)(param_1 + 3) = 0x20;
    puVar2 = (undefined8 *)FUN_14001cc68(0x20,0);
    *param_1 = puVar2;
    *puVar2 = &DAT_14a171d50;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[1] = local_68;
    FUN_1406022fe(puVar2 + 2,&local_60);
    *puVar2 = &PTR_FUN_14b0394b0;
    *(undefined1 *)(param_1 + 4) = 0x23;
    local_70 = (undefined **)&DAT_14a171d50;
    uVar1 = uStack_58 >> 0x20;
    uStack_58 = uStack_58 & 0xffffffff00000000;
    if ((int)uVar1 != 0) {
      FUN_140115c12(&local_60,0);
    }
    local_68 = (undefined *)0x0;
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    *(undefined2 *)(param_1 + 3) = 0;
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d0a5e3 FUN_143d0a5e3 body=49 status=ok
// SIG undefined FUN_143d0a5e3(void)

void FUN_143d0a5e3(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x40);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 143d0a614 FUN_143d0a614 body=51 status=ok
// SIG undefined FUN_143d0a614(void)

void FUN_143d0a614(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x38);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 143d0a648 FUN_143d0a648 body=31 status=ok
// SIG undefined FUN_143d0a648(void)

undefined8 FUN_143d0a648(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d0a685 FUN_143d0a685 body=77 status=ok
// SIG undefined FUN_143d0a685(void)

void FUN_143d0a685(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 143d0a6d2 FUN_143d0a6d2 body=428 status=ok
// SIG undefined FUN_143d0a6d2(void)

undefined8 FUN_143d0a6d2(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined1 auStack_e8 [40];
  char local_c0 [16];
  longlong *local_b0;
  undefined4 local_98 [2];
  undefined4 local_90;
  undefined4 uStack_8c;
  ushort local_78;
  byte local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar2 = *param_1;
  local_c0[0] = '\0';
  local_98[0] = 0;
  FUN_1456bb102(local_c0,*(undefined8 *)(lVar2 + 0x28));
  puVar6 = &local_90;
  FUN_1448729ea(param_2 + 0x48,puVar6,local_c0);
  if (local_70 == 3) {
    uVar4 = 3;
    uVar7 = local_90;
  }
  else {
    puVar5 = &local_68;
    FUN_1400b56fe(puVar5,&local_90,3);
    uVar7 = local_68;
    if (local_48 == 0) {
      uVar7 = 0x3f800000;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_50) {
        puVar5 = (undefined4 *)CONCAT44(uStack_64,local_68);
      }
      (*pcVar3)(puVar5);
    }
    if (0x18 < local_50) {
      FUN_1400020a8(CONCAT44(uStack_64,local_68));
    }
    uVar4 = (uint)local_70;
  }
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar4 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_78) {
      puVar6 = (undefined4 *)CONCAT44(uStack_8c,local_90);
    }
    (*pcVar3)(puVar6);
  }
  if (0x18 < local_78) {
    FUN_1400020a8(CONCAT44(uStack_8c,local_90));
  }
  FUN_1448173f8(local_98);
  if ((local_c0[0] == '\x03') && (local_b0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_b0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_b0 + 0x10))();
    }
  }
  FUN_140ef3800(lVar2 + 0x338,uVar7);
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 143d0a89e FUN_143d0a89e body=12 status=ok
// SIG undefined FUN_143d0a89e(void)

void FUN_143d0a89e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143d0a8a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143d0a8aa FUN_143d0a8aa body=29 status=ok
// SIG undefined FUN_143d0a8aa(void)

undefined8 FUN_143d0a8aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d0a8c8 FUN_143d0a8c8 body=129 status=ok
// SIG undefined FUN_143d0a8c8(void)

undefined1 FUN_143d0a8c8(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  lVar1 = *param_1;
  lVar2 = *(longlong *)(lVar1 + 0x468);
  if ((lVar2 == 0) || (*(longlong *)(lVar1 + 0x470) == 0)) {
    lVar2 = *(longlong *)(lVar1 + 0x28);
  }
  uVar3 = FUN_140ef3872(param_2 + 0x18,lVar2);
  uVar4 = FUN_140ce165c(param_2 + 0x18,*(undefined8 *)(lVar1 + 0x478));
  FUN_140ef3800(lVar1 + 0x338,uVar3);
  FUN_140ef3800(lVar1 + 0x338,uVar4);
  return 1;
}



// FUNCTION 143d0a968 FUN_143d0a968 body=12 status=ok
// SIG undefined FUN_143d0a968(void)

void FUN_143d0a968(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143d0a971. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143d0a974 FUN_143d0a974 body=29 status=ok
// SIG undefined FUN_143d0a974(void)

undefined8 FUN_143d0a974(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d0a99a FUN_143d0a99a body=129 status=ok
// SIG undefined FUN_143d0a99a(void)

undefined1 FUN_143d0a99a(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  lVar1 = *param_1;
  lVar2 = *(longlong *)(lVar1 + 0x468);
  if ((lVar2 == 0) || (*(longlong *)(lVar1 + 0x470) == 0)) {
    lVar2 = *(longlong *)(lVar1 + 0x28);
  }
  uVar3 = FUN_140ef3872(param_2 + 0x18,lVar2);
  uVar4 = FUN_140ce165c(param_2 + 0x18,*(undefined8 *)(lVar1 + 0x478));
  FUN_140ef3800(lVar1 + 0x338,uVar3);
  FUN_140ef3800(lVar1 + 0x338,uVar4);
  return 1;
}



// FUNCTION 143d0aa3a FUN_143d0aa3a body=12 status=ok
// SIG undefined FUN_143d0aa3a(void)

void FUN_143d0aa3a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143d0aa43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143d0aa46 FUN_143d0aa46 body=29 status=ok
// SIG undefined FUN_143d0aa46(void)

undefined8 FUN_143d0aa46(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d0aa64 FUN_143d0aa64 body=95 status=ok
// SIG undefined FUN_143d0aa64(void)

undefined8 FUN_143d0aa64(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  float *pfVar2;
  undefined8 uVar3;
  longlong lVar4;
  float fVar5;
  
  lVar1 = param_1[2];
  *(undefined1 *)*param_1 = 1;
  uVar3 = FUN_1409d448e(param_1[3] + 0x18);
  lVar4 = *(longlong *)(lVar1 + 0x468);
  if ((lVar4 == 0) || (*(longlong *)(lVar1 + 0x470) == 0)) {
    lVar4 = *(longlong *)(lVar1 + 0x28);
  }
  fVar5 = (float)FUN_143d07afc(param_2,lVar4,uVar3);
  pfVar2 = (float *)param_1[1];
  *pfVar2 = fVar5 * *pfVar2;
  return CONCAT71((int7)((ulonglong)pfVar2 >> 8),1);
}



// FUNCTION 143d0aac4 FUN_143d0aac4 body=70 status=ok
// SIG undefined FUN_143d0aac4(void)

undefined8 * FUN_143d0aac4(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14b3f7080;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  return puVar4 + 1;
}



// FUNCTION 143d0ab10 FUN_143d0ab10 body=29 status=ok
// SIG undefined FUN_143d0ab10(void)

void FUN_143d0ab10(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143d0ab2e FUN_143d0ab2e body=29 status=ok
// SIG undefined FUN_143d0ab2e(void)

undefined8 FUN_143d0ab2e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d0ab4c FUN_143d0ab4c body=78 status=ok
// SIG undefined FUN_143d0ab4c(void)

bool FUN_143d0ab4c(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  float fVar4;
  
  lVar1 = *param_1;
  uVar2 = FUN_1409d448e(param_1[1] + 0x18);
  lVar3 = *(longlong *)(lVar1 + 0x468);
  if ((lVar3 == 0) || (*(longlong *)(lVar1 + 0x470) == 0)) {
    lVar3 = *(longlong *)(lVar1 + 0x28);
  }
  fVar4 = (float)FUN_143d07afc(param_2,lVar3,uVar2);
  return 0.0 < fVar4;
}



// FUNCTION 143d0abb8 FUN_143d0abb8 body=12 status=ok
// SIG undefined FUN_143d0abb8(void)

void FUN_143d0abb8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143d0abc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143d0abc4 FUN_143d0abc4 body=29 status=ok
// SIG undefined FUN_143d0abc4(void)

undefined8 FUN_143d0abc4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d0abe2 FUN_143d0abe2 body=433 status=ok
// SIG undefined FUN_143d0abe2(void)

void FUN_143d0abe2(void *param_1,int param_2)

{
  uint uVar1;
  void *_Src;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x108);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (uVar1 < 9) {
    *(undefined4 *)((longlong)param_1 + 0x10c) = 8;
    _Src = *(void **)((longlong)param_1 + 0x100);
joined_r0x000143d0ad15:
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 5);
    param_2 = 0;
    uVar4 = 0;
  }
  else {
    uVar3 = (ulonglong)(int)uVar1;
    if (8 < *(uint *)((longlong)param_1 + 0x10c)) {
      uVar3 = uVar3 + (uVar3 * 3 >> 3) + 0x10;
    }
    uVar4 = uVar3 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x7ffffffffffffff) * 2]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
      }
    }
    uVar4 = uVar4 >> 5;
    uVar2 = (uint)uVar4;
    if ((int)uVar2 < (int)uVar1) {
      *(undefined4 *)((longlong)param_1 + 0x10c) = 0x7fffffff;
      uVar4 = 0x7fffffff;
      _Src = *(void **)((longlong)param_1 + 0x100);
    }
    else {
      *(uint *)((longlong)param_1 + 0x10c) = uVar2;
      _Src = *(void **)((longlong)param_1 + 0x100);
      if (uVar2 < 9) goto joined_r0x000143d0ad15;
    }
    if (_Src == (void *)0x0) {
      FUN_1446efa72((longlong)param_1 + 0x100,0,uVar4,0x20);
      memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 << 5);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,uVar4,0x20);
  return;
}



// FUNCTION 143d0ad94 FUN_143d0ad94 body=2543 status=ok
// SIG undefined FUN_143d0ad94(void)

void FUN_143d0ad94(uint *param_1)

{
  double dVar1;
  uint uVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  void *_Src;
  void *pvVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined1 auStack_498 [32];
  undefined8 *local_478;
  undefined4 local_470;
  undefined *local_468;
  undefined1 *local_460;
  undefined4 *local_458;
  code **local_450;
  char local_441;
  undefined4 local_440;
  undefined1 local_43c;
  uint local_438;
  uint uStack_434;
  uint uStack_430;
  uint uStack_42c;
  double local_428;
  double dStack_420;
  void *local_418;
  undefined8 uStack_410;
  undefined1 local_3f9;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 *local_3e8;
  undefined1 local_3e0 [184];
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined4 local_310;
  undefined1 local_30c;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 local_2e8;
  longlong local_2d8;
  undefined8 local_2d0;
  longlong local_2c8;
  undefined8 local_2c0;
  longlong local_2b8;
  undefined8 local_2b0;
  longlong local_2a8;
  undefined8 local_2a0;
  undefined4 local_298;
  longlong local_288;
  longlong *local_278;
  longlong local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  longlong local_248;
  longlong *local_238;
  longlong local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 local_1dc;
  undefined4 uStack_1d8;
  undefined8 uStack_1d4;
  code *local_1c8 [2];
  undefined8 *local_1b8;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  longlong local_168;
  undefined8 uStack_160;
  longlong local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  longlong local_138;
  longlong *local_128;
  longlong local_118 [4];
  longlong local_f8;
  longlong *local_e8;
  longlong local_d8 [4];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_498;
  local_178 = (double)CONCAT44(local_178._4_4_,(uint)local_178);
  if (((param_1[3] == 0) ||
      (uVar2 = param_1[2], local_178 = (double)CONCAT44(local_178._4_4_,(uint)local_178),
      (int)uVar2 < 0)) ||
     (local_178 = (double)CONCAT44(local_178._4_4_,(uint)local_178), DAT_14c9647dc <= (int)uVar2))
  goto LAB_143d0b691;
  plVar11 = (longlong *)
            ((ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
  local_178 = (double)CONCAT44(local_178._4_4_,(uint)local_178);
  if (((plVar11 == (longlong *)0x0) ||
      (local_178 = (double)CONCAT44(local_178._4_4_,(uint)local_178),
      *(uint *)(plVar11 + 2) != param_1[3])) ||
     ((local_178 = (double)CONCAT44(local_178._4_4_,(uint)local_178),
      (*(uint *)(plVar11 + 1) & 0x10200000) != 0 ||
      (local_178 = (double)CONCAT44(local_178._4_4_,(uint)local_178), *plVar11 == 0))))
  goto LAB_143d0b691;
  lVar6 = FUN_140ccfc10();
  if ((char)param_1[4] == '\x01') {
    lVar7 = FUN_1401f6e4a(lVar6 + 0xf70);
    if (lVar7 == 0) goto LAB_143d0b691;
  }
  lVar6 = FUN_1401f6e4a(lVar6 + 0xf88);
  if (lVar6 == 0) goto LAB_143d0b691;
  local_418 = (void *)0x0;
  uStack_410 = 0;
  local_428 = *(double *)(param_1 + 6);
  dStack_420 = *(double *)(param_1 + 8);
  dVar1 = *(double *)(param_1 + 10);
  local_438 = param_1[6];
  uStack_434 = param_1[7];
  uStack_430 = param_1[8];
  uStack_42c = param_1[9];
  fVar16 = (float)param_1[5];
  if ((((char)param_1[4] == '\0') && (param_1[1] != 0)) &&
     ((uVar2 = *param_1, -1 < (int)uVar2 &&
      (((((int)uVar2 < DAT_14c9647dc &&
         (plVar11 = (longlong *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
         plVar11 != (longlong *)0x0)) && (*(uint *)(plVar11 + 2) == param_1[1])) &&
       (((*(uint *)(plVar11 + 1) & 0x10200000) == 0 && ((longlong *)*plVar11 != (longlong *)0x0)))))
      ))) {
    plVar8 = (longlong *)0x0;
    if ((*(uint *)(plVar11 + 1) & 0x10200000) == 0) {
      plVar8 = (longlong *)*plVar11;
    }
    local_478 = (undefined8 *)((ulonglong)local_478 & 0xffffffffffffff00);
    (**(code **)(*plVar8 + 800))
              (local_438,CONCAT71((uint7)(uint3)(*(uint *)(plVar11 + 1) >> 8),1),&local_3f8,
               &local_188);
    uVar13 = SUB84(local_188,0);
    uVar15 = (undefined4)((ulonglong)local_188 >> 0x20);
    if (local_188 <= uStack_180) {
      uVar13 = SUB84(uStack_180,0);
      uVar15 = (undefined4)((ulonglong)uStack_180 >> 0x20);
    }
    if ((double)CONCAT44(uVar15,uVar13) <= (double)CONCAT44(local_178._4_4_,(uint)local_178)) {
      uVar13 = (uint)local_178;
      uVar15 = local_178._4_4_;
    }
    fVar16 = (float)(double)CONCAT44(uVar15,uVar13);
  }
  local_3e8 = (undefined8 *)(dVar1 - (double)fVar16);
  local_178 = dVar1 + (double)fVar16;
  local_43c = 0;
  local_440 = 1;
  if (param_1[3] == 0) {
LAB_143d0b6cf:
    uVar9 = 0;
  }
  else {
    uVar2 = param_1[2];
    uVar9 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar10 = (undefined8 *)
                ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar10 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar10 + 2) != param_1[3] || ((*(uint *)(puVar10 + 1) & 0x10200000) != 0))))
      goto LAB_143d0b6cf;
      uVar9 = *puVar10;
    }
  }
  local_478 = &local_3f8;
  local_3f8 = (code *)CONCAT44(uStack_434,local_438);
  uStack_3f0 = CONCAT44(uStack_42c,uStack_430);
  local_188 = local_428;
  uStack_180 = dStack_420;
  local_450 = local_1c8;
  local_458 = &local_440;
  local_460 = &DAT_14cad0f10;
  local_468 = &DAT_14cad0f68;
  local_470 = DAT_14cad0ec4;
  FUN_1401e2596(uVar9,&local_418,&local_3f9);
  local_441 = (char)param_1[4];
  if ((longlong)(int)uStack_410 != 0) {
    pvVar12 = (void *)((longlong)(int)uStack_410 * 0x100 + (longlong)local_418);
    _Src = local_418;
    do {
      lVar6 = (longlong)_Src + 0xb8;
      lVar7 = FUN_14485cccc(lVar6);
      if (lVar7 != 0) {
        lVar7 = FUN_14485cccc(lVar6);
        if (*(longlong *)(lVar7 + 0x10) != 0) {
          lVar6 = FUN_14485cccc(lVar6);
          local_188 = *(double *)(*(longlong *)(lVar6 + 0x10) + 0x18);
          FUN_1400021e4(&local_188,&local_3f8);
          local_470 = 0xffffffff;
          local_478 = (undefined8 *)((ulonglong)local_478 & 0xffffffff00000000);
          iVar5 = FUN_1447ee042(&local_3f8,L"Water",5,1);
          if (local_3f8 != (code *)0x0) {
            FUN_1400020a8();
          }
          if (iVar5 != -1) {
            local_158 = 0;
            uStack_150 = 0;
            local_168 = 0;
            uStack_160 = 0;
            local_178._0_4_ = 0;
            local_178._4_4_ = 0;
            uStack_170 = 0;
            uStack_16c = 0;
            local_188 = 0.0;
            uStack_180 = 0.0;
            local_148 = 0xc0;
            local_138 = 0;
            local_128 = (longlong *)0x0;
            local_f8 = 0;
            local_e8 = (longlong *)0x0;
            local_b8 = 0;
            uStack_b0 = 0;
            local_a8 = 0;
            local_a0 = 0x3ff0000000000000;
            local_98 = 0x3ff0000000000000;
            local_90 = 0x3ff0000000000000;
            local_88 = 0x3f80000000000000;
            local_80 = 0;
            cVar4 = (char)param_1[4];
            if (cVar4 == '\x01') {
              fVar14 = ABS((*(float *)((longlong)_Src + 4) + -0.5) * (fVar16 + fVar16));
              fVar16 = fVar16 * fVar16 - fVar14 * fVar14;
              if (fVar16 < 0.0) {
                fVar16 = sqrtf(fVar16);
              }
              else {
                fVar16 = SQRT(fVar16);
              }
              cVar4 = (char)param_1[4];
            }
            local_88 = CONCAT44(local_88._4_4_,fVar16);
            local_3f8 = *(code **)(param_1 + 2);
            uStack_3f0 = *(undefined8 *)param_1;
            local_3e8 = (undefined8 *)CONCAT71(local_3e8._1_7_,cVar4);
            memcpy(local_3e0,_Src,0xb8);
            local_328 = *(undefined8 *)((longlong)_Src + 0xb8);
            uStack_320 = *(undefined8 *)((longlong)_Src + 0xc0);
            local_318 = *(undefined8 *)((longlong)_Src + 200);
            local_310 = *(undefined4 *)((longlong)_Src + 0xd0);
            local_30c = *(undefined1 *)((longlong)_Src + 0xd4);
            local_2e8 = *(undefined8 *)((longlong)_Src + 0xf8);
            local_308 = *(undefined4 *)((longlong)_Src + 0xd8);
            uStack_304 = *(undefined4 *)((longlong)_Src + 0xdc);
            uStack_300 = *(undefined4 *)((longlong)_Src + 0xe0);
            uStack_2fc = *(undefined4 *)((longlong)_Src + 0xe4);
            local_2f8 = *(undefined4 *)((longlong)_Src + 0xe8);
            uStack_2f4 = *(undefined4 *)((longlong)_Src + 0xec);
            uStack_2f0 = *(undefined4 *)((longlong)_Src + 0xf0);
            uStack_2ec = *(undefined4 *)((longlong)_Src + 0xf4);
            FUN_1405bd0f8(&local_2d8,&local_188);
            local_1c8[0] = (code *)0x0;
            puVar10 = (undefined8 *)FUN_14001cc68(0x240,0x10);
            *puVar10 = &PTR_LAB_14b3f70e0;
            *(undefined1 *)(puVar10 + 4) = local_3e8._0_1_;
            puVar10[2] = local_3f8;
            puVar10[3] = uStack_3f0;
            local_1b8 = puVar10;
            memcpy(puVar10 + 5,local_3e0,0xb8);
            puVar10[0x1c] = local_328;
            puVar10[0x1d] = uStack_320;
            puVar10[0x1e] = local_318;
            *(undefined4 *)(puVar10 + 0x1f) = local_310;
            *(undefined1 *)((longlong)puVar10 + 0xfc) = local_30c;
            puVar10[0x24] = local_2e8;
            puVar10[0x22] = CONCAT44(uStack_2f4,local_2f8);
            puVar10[0x23] = CONCAT44(uStack_2ec,uStack_2f0);
            puVar10[0x20] = CONCAT44(uStack_304,local_308);
            puVar10[0x21] = CONCAT44(uStack_2fc,uStack_300);
            puVar10[0x26] = local_2d8;
            local_2d8 = 0;
            *(undefined4 *)(puVar10 + 0x27) = (undefined4)local_2d0;
            *(undefined4 *)((longlong)puVar10 + 0x13c) = local_2d0._4_4_;
            local_2d0 = 0;
            puVar10[0x28] = local_2c8;
            local_2c8 = 0;
            *(undefined4 *)(puVar10 + 0x29) = (undefined4)local_2c0;
            *(undefined4 *)((longlong)puVar10 + 0x14c) = local_2c0._4_4_;
            local_2c0 = 0;
            puVar10[0x2a] = local_2b8;
            local_2b8 = 0;
            *(undefined4 *)(puVar10 + 0x2b) = (undefined4)local_2b0;
            *(undefined4 *)((longlong)puVar10 + 0x15c) = local_2b0._4_4_;
            local_2b0 = 0;
            puVar10[0x2c] = local_2a8;
            local_2a8 = 0;
            *(undefined4 *)(puVar10 + 0x2d) = (undefined4)local_2a0;
            *(undefined4 *)((longlong)puVar10 + 0x16c) = local_2a0._4_4_;
            local_2a0 = 0;
            *(undefined4 *)(puVar10 + 0x2e) = local_298;
            puVar10[0x30] = local_288;
            puVar10[0x32] = local_278;
            local_278 = (longlong *)0x0;
            puVar10[0x36] = local_258;
            puVar10[0x37] = uStack_250;
            puVar10[0x34] = local_268;
            puVar10[0x35] = uStack_260;
            if (local_288 != 0) {
              local_288 = 0;
            }
            puVar10[0x38] = local_248;
            puVar10[0x3a] = local_238;
            local_238 = (longlong *)0x0;
            puVar10[0x3e] = local_218;
            puVar10[0x3f] = uStack_210;
            puVar10[0x3c] = local_228;
            puVar10[0x3d] = uStack_220;
            if (local_248 != 0) {
              local_248 = 0;
            }
            *(ulonglong *)((longlong)puVar10 + 0x22c) = CONCAT44(uStack_1d8,local_1dc);
            *(undefined8 *)((longlong)puVar10 + 0x234) = uStack_1d4;
            *(undefined4 *)(puVar10 + 0x44) = uStack_1e8;
            *(undefined4 *)((longlong)puVar10 + 0x224) = uStack_1e4;
            *(undefined4 *)(puVar10 + 0x45) = uStack_1e0;
            *(undefined4 *)((longlong)puVar10 + 0x22c) = local_1dc;
            *(undefined4 *)(puVar10 + 0x42) = local_1f8;
            *(undefined4 *)((longlong)puVar10 + 0x214) = uStack_1f4;
            *(undefined4 *)(puVar10 + 0x43) = uStack_1f0;
            *(undefined4 *)((longlong)puVar10 + 0x21c) = uStack_1ec;
            *(undefined4 *)(puVar10 + 0x40) = local_208;
            *(undefined4 *)((longlong)puVar10 + 0x204) = uStack_204;
            *(undefined4 *)(puVar10 + 0x41) = uStack_200;
            *(undefined4 *)((longlong)puVar10 + 0x20c) = uStack_1fc;
            if (puVar10 != (undefined8 *)&DAT_fffffffffffffff0) {
              local_1c8[0] = FUN_143d0b7ca;
            }
            FUN_1407461b0(1,local_1c8);
            if (local_248 != 0) {
              plVar11 = local_238;
              if (local_238 == (longlong *)0x0) {
                plVar11 = &local_228;
              }
              (**(code **)(*plVar11 + 0x10))();
            }
            if (local_288 != 0) {
              plVar11 = local_278;
              if (local_278 == (longlong *)0x0) {
                plVar11 = &local_268;
              }
              (**(code **)(*plVar11 + 0x10))();
            }
            if (local_2a8 != 0) {
              FUN_1400020a8();
            }
            if (local_2b8 != 0) {
              FUN_1400020a8();
            }
            if (local_2c8 != 0) {
              FUN_1400020a8();
            }
            if (local_2d8 != 0) {
              FUN_1400020a8();
            }
            if (local_f8 != 0) {
              plVar11 = local_e8;
              if (local_e8 == (longlong *)0x0) {
                plVar11 = local_d8;
              }
              (**(code **)(*plVar11 + 0x10))();
            }
            if (local_138 != 0) {
              plVar11 = local_128;
              if (local_128 == (longlong *)0x0) {
                plVar11 = local_118;
              }
              (**(code **)(*plVar11 + 0x10))();
            }
            if (local_158 != 0) {
              FUN_1400020a8();
            }
            if (local_168 != 0) {
              FUN_1400020a8();
            }
            if (CONCAT44(local_178._4_4_,(uint)local_178) != 0) {
              FUN_1400020a8();
            }
            if (local_188 != 0.0) {
              FUN_1400020a8();
            }
            goto LAB_143d0b67f;
          }
        }
        if (((*(byte *)((longlong)_Src + 0xad) & 1) != 0) && ((char)param_1[4] != '\0')) break;
      }
      _Src = (void *)((longlong)_Src + 0x100);
    } while (_Src != pvVar12);
  }
  if (local_441 == '\0') {
    uVar9 = *(undefined8 *)param_1;
    uVar3 = *(undefined8 *)(param_1 + 2);
    local_178._4_4_ = (undefined4)*(undefined8 *)(param_1 + 10);
    uStack_170 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 10) >> 0x20);
    uStack_180 = *(double *)(param_1 + 7);
    local_178._0_4_ = param_1[9];
    local_188 = (double)CONCAT44(param_1[6],(undefined4)local_188);
    uVar2 = param_1[0xc];
    local_3f8 = (code *)0x0;
    local_3e8 = (undefined8 *)FUN_14001cc68(0x40,8);
    *local_3e8 = &PTR_LAB_14b3f7100;
    *(float *)(local_3e8 + 1) = fVar16;
    *(undefined8 *)((longlong)local_3e8 + 0xc) = uVar3;
    *(undefined8 *)((longlong)local_3e8 + 0x14) = uVar9;
    *(undefined4 *)((longlong)local_3e8 + 0x1c) = (undefined4)local_188;
    *(undefined4 *)(local_3e8 + 4) = local_188._4_4_;
    *(undefined4 *)((longlong)local_3e8 + 0x24) = (undefined4)uStack_180;
    *(undefined4 *)(local_3e8 + 5) = uStack_180._4_4_;
    *(undefined4 *)(local_3e8 + 5) = uStack_180._4_4_;
    *(uint *)((longlong)local_3e8 + 0x2c) = (uint)local_178;
    *(undefined4 *)(local_3e8 + 6) = local_178._4_4_;
    *(undefined4 *)((longlong)local_3e8 + 0x34) = uStack_170;
    *(uint *)(local_3e8 + 7) = uVar2;
    if ((float *)(local_3e8 + 1) != (float *)0x0) {
      local_3f8 = FUN_143d0bae2;
    }
    FUN_1407461b0(1,&local_3f8);
  }
LAB_143d0b67f:
  if (local_418 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_143d0b691:
  if ((local_70 ^ (ulonglong)auStack_498) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d0b78e FUN_143d0b78e body=29 status=ok
// SIG undefined FUN_143d0b78e(void)

void FUN_143d0b78e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143d0b7ac FUN_143d0b7ac body=29 status=ok
// SIG undefined FUN_143d0b7ac(void)

undefined8 FUN_143d0b7ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d0b7ca FUN_143d0b7ca body=552 status=ok
// SIG undefined FUN_143d0b7ca(void)

void FUN_143d0b7ca(uint *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  uint *local_50;
  undefined4 local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((((param_1[1] == 0) || (uVar2 = *param_1, (int)uVar2 < 0)) || (DAT_14c9647dc <= (int)uVar2))
      || ((plVar6 = (longlong *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
          plVar6 == (longlong *)0x0 || (*(uint *)(plVar6 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 || (*plVar6 == 0)))) goto LAB_143d0b9c1;
  lVar5 = FUN_140ccfc10();
  if (param_1[1] == 0) {
LAB_143d0b9e4:
    uVar7 = 0;
  }
  else {
    uVar2 = *param_1;
    uVar7 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar8 = (undefined8 *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar8 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar8 + 2) != param_1[1] || ((*(uint *)(puVar8 + 1) & 0x10200000) != 0))))
      goto LAB_143d0b9e4;
      uVar7 = *puVar8;
    }
  }
  FUN_1407f7f84(&local_40,uVar7);
  if (local_38 == (longlong *)0x0) goto LAB_143d0b9c1;
  iVar4 = (int)local_38[1];
  do {
    if (iVar4 == 0) {
      plVar6 = (longlong *)0x0;
      break;
    }
    LOCK();
    iVar3 = (int)local_38[1];
    bVar12 = iVar4 == iVar3;
    if (bVar12) {
      *(int *)(local_38 + 1) = iVar4 + 1;
      iVar3 = iVar4;
    }
    iVar4 = iVar3;
    UNLOCK();
    plVar6 = local_38;
  } while (!bVar12);
  LOCK();
  piVar1 = (int *)((longlong)local_38 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*local_38 + 0x10))();
  }
  if (plVar6 == (longlong *)0x0) goto LAB_143d0b9c1;
  if (local_40 != 0) {
    if (param_1[3] == 0) {
LAB_143d0b9eb:
      lVar11 = 0;
    }
    else {
      uVar2 = param_1[2];
      lVar11 = 0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        plVar9 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((plVar9 == (longlong *)0x0) ||
           ((*(uint *)(plVar9 + 2) != param_1[3] || ((*(uint *)(plVar9 + 1) & 0x10200000) != 0))))
        goto LAB_143d0b9eb;
        lVar11 = *plVar9;
      }
    }
    lVar10 = lVar5 + 0xf70;
    if ((char)param_1[4] == '\0') {
      lVar10 = lVar5 + 0xf88;
    }
    lVar5 = FUN_1401f6e4a(lVar10);
    if ((lVar11 != 0) && (lVar5 != 0)) {
      local_50 = param_1 + 0x48;
      local_48 = 0;
      local_58 = 0;
      FUN_1408f2522(local_40,lVar5,lVar11,param_1 + 6);
    }
  }
  LOCK();
  plVar9 = plVar6 + 1;
  *(int *)plVar9 = (int)*plVar9 + -1;
  UNLOCK();
  if ((int)*plVar9 == 0) {
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
LAB_143d0b9c1:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d0b9fe FUN_143d0b9fe body=29 status=ok
// SIG undefined FUN_143d0b9fe(void)

void FUN_143d0b9fe(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143d0ba1c FUN_143d0ba1c body=198 status=ok
// SIG undefined FUN_143d0ba1c(void)

undefined8 * FUN_143d0ba1c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14b3f70e0;
  if (param_1[0x38] != 0) {
    plVar1 = param_1 + 0x3c;
    if ((longlong *)param_1[0x3a] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x3a];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0x30] != 0) {
    plVar1 = param_1 + 0x34;
    if ((longlong *)param_1[0x32] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x32];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d0bae2 FUN_143d0bae2 body=875 status=ok
// SIG undefined FUN_143d0bae2(void)

void FUN_143d0bae2(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_288 [32];
  undefined1 local_268;
  longlong *local_260;
  undefined4 local_258;
  longlong local_248;
  longlong *local_240;
  undefined1 local_238 [4];
  undefined4 local_234;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined4 local_194;
  undefined4 local_168;
  longlong local_138 [8];
  undefined4 local_f8;
  longlong local_e8;
  longlong *local_d8;
  longlong local_c8 [4];
  longlong local_a8;
  longlong *local_98;
  longlong local_88 [4];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_288;
  uVar9 = 0;
  memset(local_238,0,0x100);
  local_168 = 0xffffffff;
  local_234 = 0x3f800000;
  local_194 = 0xffffffff;
  local_228 = *(undefined8 *)(param_1 + 6);
  uStack_220 = *(undefined8 *)(param_1 + 8);
  local_218 = *(undefined8 *)(param_1 + 10);
  local_200 = *(undefined8 *)(param_1 + 10);
  local_210 = *(undefined8 *)(param_1 + 6);
  uStack_208 = *(undefined8 *)(param_1 + 8);
  local_1d0 = DAT_14c8462d0;
  local_1e0 = DAT_14c8462c0;
  uStack_1d8 = DAT_14c8462c8;
  local_1e8 = DAT_14c8462d0;
  local_1f8 = DAT_14c8462c0;
  uStack_1f0 = DAT_14c8462c8;
  local_138[6] = 0;
  local_138[7] = 0;
  local_138[4] = 0;
  local_138[5] = 0;
  local_138[2] = 0;
  local_138[3] = 0;
  local_138[0] = 0;
  local_138[1] = 0;
  local_f8 = 0xc0;
  local_e8 = 0;
  local_d8 = (longlong *)0x0;
  local_a8 = 0;
  local_98 = (longlong *)0x0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0x3ff0000000000000;
  local_48 = 0x3ff0000000000000;
  local_40 = 0x3ff0000000000000;
  local_34 = 0x3f800000;
  local_38 = *param_1;
  local_30 = param_1[0xc];
  if (param_1[2] != 0) {
    uVar2 = param_1[1];
    uVar9 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar7 = (undefined8 *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar7 == (undefined8 *)0x0) ||
         ((*(int *)(puVar7 + 2) != param_1[2] || ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)))) {
        uVar9 = 0;
      }
      else {
        uVar9 = *puVar7;
      }
    }
  }
  FUN_1407f7f84(&local_248,uVar9);
  if (local_240 == (longlong *)0x0) goto LAB_143d0bd7b;
  iVar4 = (int)local_240[1];
  do {
    if (iVar4 == 0) {
      plVar6 = (longlong *)0x0;
      break;
    }
    LOCK();
    iVar3 = (int)local_240[1];
    bVar11 = iVar4 == iVar3;
    if (bVar11) {
      *(int *)(local_240 + 1) = iVar4 + 1;
      iVar3 = iVar4;
    }
    iVar4 = iVar3;
    UNLOCK();
    plVar6 = local_240;
  } while (!bVar11);
  LOCK();
  piVar1 = (int *)((longlong)local_240 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*local_240 + 0x10))();
  }
  if (plVar6 == (longlong *)0x0) goto LAB_143d0bd7b;
  if (local_248 != 0) {
    lVar5 = FUN_140ccfc10();
    if (param_1[4] == 0) {
LAB_143d0be04:
      lVar8 = 0;
    }
    else {
      uVar2 = param_1[3];
      lVar8 = 0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        plVar10 = (longlong *)
                  ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((plVar10 == (longlong *)0x0) ||
           (((int)plVar10[2] != param_1[4] || ((*(uint *)(plVar10 + 1) & 0x10200000) != 0))))
        goto LAB_143d0be04;
        lVar8 = *plVar10;
      }
    }
    lVar5 = FUN_1401f6e4a(lVar5 + 0xf88);
    if ((lVar8 != 0) && (lVar5 != 0)) {
      local_260 = local_138;
      local_258 = 0;
      local_268 = 0;
      FUN_1408f2522(local_248,lVar5,lVar8,local_238);
    }
  }
  LOCK();
  plVar10 = plVar6 + 1;
  *(int *)plVar10 = (int)*plVar10 + -1;
  UNLOCK();
  if ((int)*plVar10 == 0) {
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
LAB_143d0bd7b:
  if (local_a8 != 0) {
    plVar6 = local_98;
    if (local_98 == (longlong *)0x0) {
      plVar6 = local_88;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (local_e8 != 0) {
    plVar6 = local_d8;
    if (local_d8 == (longlong *)0x0) {
      plVar6 = local_c8;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (local_138[6] != 0) {
    FUN_1400020a8();
  }
  if (local_138[4] != 0) {
    FUN_1400020a8();
  }
  if (local_138[2] != 0) {
    FUN_1400020a8();
  }
  if (local_138[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d0be58 FUN_143d0be58 body=29 status=ok
// SIG undefined FUN_143d0be58(void)

void FUN_143d0be58(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143d0be76 FUN_143d0be76 body=29 status=ok
// SIG undefined FUN_143d0be76(void)

undefined8 FUN_143d0be76(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d0be94 FUN_143d0be94 body=496 status=ok
// SIG undefined FUN_143d0be94(void)

void FUN_143d0be94(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  byte bVar10;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong *local_68;
  longlong local_60;
  longlong *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_2 = *param_2 + *(longlong *)*param_1;
  if (*(char *)param_1[1] == '\x01') {
    param_2[1] = param_2[1] + *(longlong *)*param_1;
  }
  lVar3 = param_1[2];
  bVar2 = *(byte *)(lVar3 + 0x38);
  if (bVar2 == 0) {
LAB_143d0c05d:
    if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  plVar1 = param_2 + 2;
  local_68 = param_2 + 9;
  bVar10 = 0;
  do {
    lVar5 = *(longlong *)(lVar3 + 0x30);
    if (*(longlong *)(lVar3 + 0x30) == 0) {
      lVar5 = lVar3;
    }
    lVar3 = FUN_14033465a(lVar5 + (ulonglong)bVar10 * 0x18);
    if (lVar3 == 0) {
      if (bVar2 <= (byte)(bVar10 + 1)) goto LAB_143d0c05d;
    }
    else {
      lVar5 = *(longlong *)*param_1;
      puVar9 = *(undefined4 **)(lVar3 + 8);
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = &DAT_14c9485f0;
      }
      if (DAT_14c947fe0 == 0) {
        lVar3 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar3);
        DAT_14c947fe0 = lVar3;
      }
      FUN_140045924(DAT_14c947fe0,&local_60,puVar9,1);
      uVar7 = (uint)((ulonglong)local_60 >> 0x10);
      uVar8 = (uint)local_60 & 0xffff;
      uVar7 = ((uint)local_60 << 0x10 | uVar8) + (int)((ulonglong)local_60 >> 0x20) +
              (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar8 >> 4);
      if ((int)param_2[3] != *(int *)((longlong)param_2 + 0x44)) {
        plVar6 = (longlong *)param_2[10];
        if ((longlong *)param_2[10] == (longlong *)0x0) {
          plVar6 = local_68;
        }
        iVar4 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_2[0xb] - 1U & uVar7) * 4);
        if (iVar4 != -1) {
          do {
            plVar6 = (longlong *)(*plVar1 + (longlong)iVar4 * 0x18);
            if (*plVar6 == local_60) {
              if (plVar6 != (longlong *)0x0) goto LAB_143d0c010;
              break;
            }
            iVar4 = (int)plVar6[2];
          } while (iVar4 != -1);
        }
      }
      local_58 = &local_60;
      local_78 = 0;
      FUN_140136100(plVar1,&local_4c,uVar7,&local_58);
      plVar6 = (longlong *)(*plVar1 + (longlong)local_4c * 0x18);
LAB_143d0c010:
      plVar6[1] = plVar6[1] + lVar5;
      if ((bVar2 <= (byte)(bVar10 + 1)) || (DAT_14cb76c30 == '\0')) goto LAB_143d0c05d;
    }
    bVar10 = bVar10 + 1;
    lVar3 = param_1[2];
  } while( true );
}



// FUNCTION 143d0c086 FUN_143d0c086 body=202 status=ok
// SIG undefined FUN_143d0c086(void)

void FUN_143d0c086(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar4 = (ulonglong)DAT_14cb76c50;
  if ((longlong)uVar4 < 1) {
    return;
  }
  bVar5 = false;
  DAT_14cb76c5c = DAT_14cb76c5c + 1;
  do {
    lVar6 = uVar4 * 0x10 + -8;
    uVar7 = uVar4;
    while (((*(int *)(DAT_14cb76c48 + lVar6) != 0 &&
            (plVar1 = *(longlong **)(DAT_14cb76c48 + -8 + lVar6), plVar1 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1,param_2,param_3), cVar3 != '\0')))
    {
      lVar6 = lVar6 + -0x10;
      bVar2 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar2) {
        DAT_14cb76c5c = DAT_14cb76c5c + -1;
        if (!bVar5) {
          return;
        }
        goto LAB_143d0c136;
      }
    }
    uVar4 = uVar7 - 1;
    bVar5 = true;
  } while (1 < uVar7);
  DAT_14cb76c5c = DAT_14cb76c5c + -1;
LAB_143d0c136:
  FUN_14474d06a(&DAT_14cb76c48,0);
  return;
}



// FUNCTION 143d0c1a0 FUN_143d0c1a0 body=29 status=ok
// SIG undefined FUN_143d0c1a0(void)

undefined8 FUN_143d0c1a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d0c33c FUN_143d0c33c body=93 status=ok
// SIG undefined FUN_143d0c33c(void)

void FUN_143d0c33c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3f7120;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143d0c39a FUN_143d0c39a body=93 status=ok
// SIG undefined FUN_143d0c39a(void)

void FUN_143d0c39a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3f7120;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143d0c3f8 FUN_143d0c3f8 body=126 status=ok
// SIG undefined FUN_143d0c3f8(void)

void FUN_143d0c3f8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b3f7120;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d0c467. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d0c480 FUN_143d0c480 body=266 status=ok
// SIG undefined FUN_143d0c480(void)

undefined8 FUN_143d0c480(longlong param_1)

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
    if (iVar1 == 2) goto LAB_143d0c584;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143d0c584;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143d0c584:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143d0c538;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_141483e78(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_143d0c538;
    }
  }
  uVar6 = 0;
LAB_143d0c538:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d0c58c FUN_143d0c58c body=29 status=ok
// SIG undefined FUN_143d0c58c(void)

undefined8 FUN_143d0c58c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d0c728 FUN_143d0c728 body=93 status=ok
// SIG undefined FUN_143d0c728(void)

void FUN_143d0c728(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3f7190;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143d0c786 FUN_143d0c786 body=93 status=ok
// SIG undefined FUN_143d0c786(void)

void FUN_143d0c786(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3f7190;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143d0c7e4 FUN_143d0c7e4 body=126 status=ok
// SIG undefined FUN_143d0c7e4(void)

void FUN_143d0c7e4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b3f7190;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d0c853. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d0c86e FUN_143d0c86e body=268 status=ok
// SIG undefined FUN_143d0c86e(void)

undefined8 FUN_143d0c86e(longlong param_1)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar2 == 2) goto LAB_143d0c974;
    if (iVar2 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_143d0c974;
    }
    FUN_140192332(param_1 + 0x18,&local_20,0);
  }
  else {
LAB_143d0c974:
    local_20 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar3 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) goto LAB_143d0c92c;
    lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    if ((lVar7 != 0) &&
       ((*(int *)(lVar7 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)))) {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x20) + 0x471);
      *pbVar1 = *pbVar1 & 0xfe;
      uVar6 = 1;
      goto LAB_143d0c92c;
    }
  }
  uVar6 = 0;
LAB_143d0c92c:
  if ((local_20 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d0c97c FUN_143d0c97c body=24 status=ok
// SIG undefined FUN_143d0c97c(void)

void FUN_143d0c97c(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d0c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 143d0c994 FUN_143d0c994 body=29 status=ok
// SIG undefined FUN_143d0c994(void)

undefined8 FUN_143d0c994(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d0cb30 FUN_143d0cb30 body=93 status=ok
// SIG undefined FUN_143d0cb30(void)

void FUN_143d0cb30(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7600;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f7220;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143d0cb8e FUN_143d0cb8e body=93 status=ok
// SIG undefined FUN_143d0cb8e(void)

void FUN_143d0cb8e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7600;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f7220;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143d0cbec FUN_143d0cbec body=126 status=ok
// SIG undefined FUN_143d0cbec(void)

void FUN_143d0cbec(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3f7600;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3f7220;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d0cc5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d0cc74 FUN_143d0cc74 body=275 status=ok
// SIG undefined FUN_143d0cc74(void)

undefined8 FUN_143d0cc74(longlong param_1,undefined8 param_2)

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
    if (iVar1 == 2) goto LAB_143d0cd81;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143d0cd81;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_143d0cd81:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143d0cd23;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1488203b2(*(undefined8 *)(param_1 + 0x20),param_2);
      uVar6 = 1;
      goto LAB_143d0cd23;
    }
  }
  uVar6 = 0;
LAB_143d0cd23:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d0cd88 FUN_143d0cd88 body=225 status=ok
// SIG undefined FUN_143d0cd88(void)

undefined8
FUN_143d0cd88(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  
  lVar3 = *param_1;
  if ((longlong)*(int *)(lVar3 + 0x28) != 0) {
    lVar4 = *(longlong *)(lVar3 + 0x20);
    lVar8 = 0;
    do {
      if (*(longlong *)(lVar4 + 0xf0 + lVar8) == *param_5) {
        iVar1 = *(int *)(lVar4 + 0xdc + lVar8);
        if ((iVar1 == 0) || (uVar2 = *(uint *)(lVar4 + 0xd8 + lVar8), (int)uVar2 < 0)) {
LAB_143d0ce3e:
          lVar6 = 0;
        }
        else {
          lVar6 = 0;
          if ((int)uVar2 < DAT_14c9647dc) {
            plVar7 = (longlong *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
            if (((plVar7 == (longlong *)0x0) || ((int)plVar7[2] != iVar1)) ||
               ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)) goto LAB_143d0ce3e;
            lVar6 = *plVar7;
          }
        }
        if (lVar6 == *param_2) {
          return 1;
        }
      }
      lVar8 = lVar8 + 0x100;
    } while ((longlong)*(int *)(lVar3 + 0x28) * 0x100 != lVar8);
  }
  uVar5 = FUN_14881f544(*param_2,param_3,param_4,param_5,lVar3);
  return uVar5;
}



// FUNCTION 143d0ce88 FUN_143d0ce88 body=12 status=ok
// SIG undefined FUN_143d0ce88(void)

void FUN_143d0ce88(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143d0ce91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143d0ce94 FUN_143d0ce94 body=29 status=ok
// SIG undefined FUN_143d0ce94(void)

undefined8 FUN_143d0ce94(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d0ceb2 FUN_143d0ceb2 body=29 status=ok
// SIG undefined FUN_143d0ceb2(void)

undefined8 FUN_143d0ceb2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d0cee4 FUN_143d0cee4 body=93 status=ok
// SIG undefined FUN_143d0cee4(void)

void FUN_143d0cee4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3f72b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143d0cf42 FUN_143d0cf42 body=93 status=ok
// SIG undefined FUN_143d0cf42(void)

void FUN_143d0cf42(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3f72b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143d0cfa0 FUN_143d0cfa0 body=126 status=ok
// SIG undefined FUN_143d0cfa0(void)

void FUN_143d0cfa0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b3f72b0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d0d00f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d0d028 FUN_143d0d028 body=20 status=ok
// SIG undefined FUN_143d0d028(void)

undefined1 FUN_143d0d028(longlong param_1)

{
  FUN_143d0d03c(param_1 + 0x18);
  return 1;
}



// FUNCTION 143d0d03c FUN_143d0d03c body=171 status=ok
// SIG undefined FUN_143d0d03c(void)

void FUN_143d0d03c(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  
  if (*(longlong **)(param_1 + 2) != (longlong *)0x0) {
    if (((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
    {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if (((lVar3 != 0) && (*(uint *)(lVar3 + 0x10) == param_1[1])) &&
         ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
        lVar3 = (**(code **)(**(longlong **)(param_1 + 2) + 0x20))();
        if (lVar3 != 0) {
          lVar2 = FUN_144860928();
          fVar4 = *(float *)(lVar2 + 0x94) * -0.1 + *(float *)(lVar3 + 0x50c);
          if (fVar4 <= 0.0) {
            fVar4 = 0.0;
          }
          *(float *)(lVar3 + 0x50c) = fVar4;
          *(undefined8 *)(lVar3 + 0x510) = 0;
          FUN_1409d3a2e(lVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 143d0d0e8 FUN_143d0d0e8 body=29 status=ok
// SIG undefined FUN_143d0d0e8(void)

undefined8 FUN_143d0d0e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d0d11a FUN_143d0d11a body=93 status=ok
// SIG undefined FUN_143d0d11a(void)

void FUN_143d0d11a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8700;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f7390;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143d0d178 FUN_143d0d178 body=93 status=ok
// SIG undefined FUN_143d0d178(void)

void FUN_143d0d178(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8700;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f7390;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143d0d1d6 FUN_143d0d1d6 body=126 status=ok
// SIG undefined FUN_143d0d1d6(void)

void FUN_143d0d1d6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8700;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3f7390;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d0d245. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d0d268 FUN_143d0d268 body=31 status=ok
// SIG undefined FUN_143d0d268(void)

undefined8 FUN_143d0d268(longlong param_1)

{
  FUN_1407145b8(*(longlong *)(param_1 + 0x18) + 200,*(undefined4 *)(param_1 + 0x20));
  return 1;
}



// FUNCTION 143d0d288 FUN_143d0d288 body=29 status=ok
// SIG undefined FUN_143d0d288(void)

undefined8 FUN_143d0d288(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d0d2ba FUN_143d0d2ba body=93 status=ok
// SIG undefined FUN_143d0d2ba(void)

void FUN_143d0d2ba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f76f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f7400;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143d0d318 FUN_143d0d318 body=93 status=ok
// SIG undefined FUN_143d0d318(void)

void FUN_143d0d318(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f76f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f7400;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143d0d376 FUN_143d0d376 body=126 status=ok
// SIG undefined FUN_143d0d376(void)

void FUN_143d0d376(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3f76f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3f7400;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d0d3e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d0d40c FUN_143d0d40c body=34 status=ok
// SIG undefined FUN_143d0d40c(void)

undefined8 FUN_143d0d40c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_1407145b8(*(longlong *)(param_1 + 0x18) + 200,*(undefined4 *)(param_1 + 0x20),param_4);
  return 1;
}



// FUNCTION 143d0d42e FUN_143d0d42e body=29 status=ok
// SIG undefined FUN_143d0d42e(void)

undefined8 FUN_143d0d42e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d0d460 FUN_143d0d460 body=93 status=ok
// SIG undefined FUN_143d0d460(void)

void FUN_143d0d460(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8700;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f7470;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143d0d4be FUN_143d0d4be body=93 status=ok
// SIG undefined FUN_143d0d4be(void)

void FUN_143d0d4be(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8700;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f7470;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143d0d51c FUN_143d0d51c body=126 status=ok
// SIG undefined FUN_143d0d51c(void)

void FUN_143d0d51c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8700;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3f7470;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d0d58b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d0d5ae FUN_143d0d5ae body=31 status=ok
// SIG undefined FUN_143d0d5ae(void)

undefined8 FUN_143d0d5ae(longlong param_1)

{
  FUN_1407145b8(*(longlong *)(param_1 + 0x18) + 0xe0,*(undefined4 *)(param_1 + 0x20));
  return 1;
}



// FUNCTION 143d0d5ce FUN_143d0d5ce body=29 status=ok
// SIG undefined FUN_143d0d5ce(void)

undefined8 FUN_143d0d5ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d0d600 FUN_143d0d600 body=93 status=ok
// SIG undefined FUN_143d0d600(void)

void FUN_143d0d600(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7900;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f74e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143d0d65e FUN_143d0d65e body=93 status=ok
// SIG undefined FUN_143d0d65e(void)

void FUN_143d0d65e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7900;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f74e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143d0d6bc FUN_143d0d6bc body=126 status=ok
// SIG undefined FUN_143d0d6bc(void)

void FUN_143d0d6bc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3f7900;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3f74e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d0d72b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d0d74e FUN_143d0d74e body=31 status=ok
// SIG undefined FUN_143d0d74e(void)

undefined8 FUN_143d0d74e(longlong param_1)

{
  FUN_1407145b8(*(longlong *)(param_1 + 0x18) + 0xe0,*(undefined4 *)(param_1 + 0x20));
  return 1;
}



// FUNCTION 143d0d76e FUN_143d0d76e body=29 status=ok
// SIG undefined FUN_143d0d76e(void)

undefined8 FUN_143d0d76e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d0d90a FUN_143d0d90a body=101 status=ok
// SIG undefined FUN_143d0d90a(void)

void FUN_143d0d90a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3f7550;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143d0d970 FUN_143d0d970 body=101 status=ok
// SIG undefined FUN_143d0d970(void)

void FUN_143d0d970(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3f7550;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143d0d9d6 FUN_143d0d9d6 body=134 status=ok
// SIG undefined FUN_143d0d9d6(void)

void FUN_143d0d9d6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3f7550;
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
                    /* WARNING: Could not recover jumptable at 0x000143d0da4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d0da6c FUN_143d0da6c body=269 status=ok
// SIG undefined FUN_143d0da6c(void)

undefined8 FUN_143d0da6c(longlong param_1)

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
    if (iVar1 == 2) goto LAB_143d0db73;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143d0db73;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143d0db73:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143d0db27;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143d08e26(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
      uVar6 = 1;
      goto LAB_143d0db27;
    }
  }
  uVar6 = 0;
LAB_143d0db27:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d0db7a FUN_143d0db7a body=116 status=ok
// SIG undefined FUN_143d0db7a(void)

void FUN_143d0db7a(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x80) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x80) = 0xffffffff;
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x80 + 4) = uVar4;
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



// FUNCTION 143d0dbee FUN_143d0dbee body=1845 status=ok
// SIG undefined FUN_143d0dbee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d0dbee(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  longlong *local_68;
  undefined1 *local_60;
  longlong local_58;
  ulonglong uStack_50;
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = (longlong *)0x149fca2ba;
  local_60._0_5_ = 0xd;
  uVar2 = FUN_14001a6c0(&local_68,1);
  _DAT_14cb76830 = (ulonglong)uVar2;
  _DAT_14cb76838 = 0x47efffffe0000000;
  _DAT_14cb76840 = 0x47efffffe0000000;
  _DAT_14cb76848 = 0x47efffffe0000000;
  _DAT_14cb76850 = 0x47efffffe0000000;
  _DAT_14cb76858 = 0x47efffffe0000000;
  _DAT_14cb76860 = 0x47efffffe0000000;
  _DAT_14cb76868 = 0x47efffffe0000000;
  _DAT_14cb76870 = 0x47efffffe0000000;
  local_68 = (longlong *)&DAT_14a19662d;
  local_60._0_5_ = 4;
  FUN_14001a6c0(&local_68,1);
  local_68 = (longlong *)0x14a197dc8;
  local_60._0_5_ = 8;
  uVar2 = FUN_14001a6c0(&local_68,1);
  _DAT_14cb76878 = (ulonglong)uVar2;
  local_68 = (longlong *)0x14b3f6570;
  local_60._0_5_ = 0xd;
  uVar2 = FUN_14001a6c0(&local_68,1);
  _DAT_14cb76880 = (ulonglong)uVar2;
  local_68 = (longlong *)0x14a78e0b0;
  local_60._0_5_ = 10;
  uVar2 = FUN_14001a6c0(&local_68,1);
  _DAT_14cb76888 = (ulonglong)uVar2;
  local_68 = (longlong *)0x14a3a2373;
  local_60._0_5_ = 0xc;
  uVar2 = FUN_14001a6c0(&local_68,1);
  _DAT_14cb76890 = (ulonglong)uVar2;
  local_68 = (longlong *)0x14b039490;
  local_60._0_5_ = 10;
  uVar2 = FUN_14001a6c0(&local_68,1);
  _DAT_14cb76898 = (ulonglong)uVar2;
  local_68 = (longlong *)0x14b03949b;
  local_60._0_5_ = 9;
  uVar2 = FUN_14001a6c0(&local_68,1);
  _DAT_14cb768a0 = (ulonglong)uVar2;
  local_68 = (longlong *)0x149f72b00;
  local_60._0_5_ = 0xe;
  uVar2 = FUN_14001a6c0(&local_68,1);
  _DAT_14cb768a8 = (ulonglong)uVar2;
  local_68 = (longlong *)0x14b3f657e;
  local_60._0_5_ = 0xe;
  uVar2 = FUN_14001a6c0(&local_68,1);
  _DAT_14cb768b0 = (ulonglong)uVar2;
  local_68 = (longlong *)0x14a3a2368;
  local_60._0_5_ = 10;
  uVar2 = FUN_14001a6c0(&local_68,1);
  _DAT_14cb768b8 = (ulonglong)uVar2;
  local_68 = (longlong *)0x14b02dd0d;
  local_60._0_5_ = 9;
  uVar2 = FUN_14001a6c0(&local_68,1);
  _DAT_14cb768c0 = (ulonglong)uVar2;
  local_68 = (longlong *)0x14b3f658d;
  local_60._0_5_ = 7;
  uVar2 = FUN_14001a6c0(&local_68,1);
  _DAT_14cb768c8 = (ulonglong)uVar2;
  local_68 = (longlong *)0x14b3f6595;
  local_60._0_5_ = 7;
  uVar2 = FUN_14001a6c0(&local_68,1);
  _DAT_14cb768d0 = (ulonglong)uVar2;
  local_68 = (longlong *)0x14b3f659d;
  local_60._0_5_ = 8;
  uVar2 = FUN_14001a6c0(&local_68,1);
  _DAT_14cb768d8 = (ulonglong)uVar2;
  DAT_14cb77cc0 = 0;
  _DAT_14cb77cc8 = 0x200000000;
  atexit((_func_5014 *)&LAB_143d07aeb);
  local_68 = (longlong *)&DAT_14a171d39;
  local_60 = (undefined1 *)CONCAT35(local_60._5_3_,4);
  uVar2 = FUN_14001a6c0(&local_68,1);
  _DAT_14cb768e8 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cb768f0,L"GoreStump_");
  atexit((_func_5014 *)&LAB_143d07c52);
  FUN_140056680(&DAT_14cb76900,L"GoreLimb_");
  atexit((_func_5014 *)&LAB_143d07c63);
  FUN_140056680(&DAT_14cb76910,L"GoreDecal_");
  atexit((_func_5014 *)&LAB_143d07c74);
  FUN_140056680(&DAT_14cb76920,L"GoreFX_");
  atexit((_func_5014 *)&LAB_143d07c85);
  FUN_1446f470e(&DAT_14cb76930,L"LIMB_GORED",1);
  _DAT_14cb76938 = 0x4072c00000000000;
  _DAT_14cb76940 = 0x4082c00000000000;
  FUN_1400b22c2(&local_68,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_68,&DAT_14cb76948);
  if (cVar1 == '\0') {
    _DAT_14cb76948 = 0;
    uRam000000014cb76950 = 0;
  }
  if (local_68 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_1405c5fa2();
  DAT_14cb77c78 = &DAT_14cb769e8;
  DAT_14cb77c80 = 0;
  _DAT_14cb77c88 = 0;
  _DAT_14cb77c70 = &PTR_FUN_14b0394b0;
  atexit(FUN_143d085cd);
  _DAT_14cb76a68 = &LAB_143d09876;
  DAT_14cb76a70 = 0x23;
  if (DAT_14c9aad88 == '\x01') {
    DAT_14c9aac70 = 0x20;
    DAT_14c9aad08 = FUN_143d09fd4;
    DAT_14c9aad30 = &LAB_143d0a004;
    _DAT_14c9aad10 = FUN_143d0a010;
    _DAT_14c9aad18 = FUN_143d0a056;
    _DAT_14c9aad20 = FUN_143d0a09c;
    _DAT_14c9aad28 = FUN_143d0a0d2;
    _DAT_14c9aac90 = FUN_143d09936;
    _DAT_14c9aac88 = &LAB_143d09930;
    _DAT_14c9aad40 = FUN_143d0a476;
    _DAT_14c9aad80 = FUN_143d0a49e;
    _DAT_14c9aac78 = 0x3f19999a;
    uRam000000014c9aac7c = 0x3ecccccd;
    uRam000000014c9aac80 = 0x3ecccccd;
    uRam000000014c9aac84 = 0x3f800000;
    DAT_14c9aad01 = 0;
    DAT_14c9aac74 = 0;
    _DAT_14c9aacc8 = &LAB_143d0a4c6;
    _DAT_14c9aacd8 = FUN_143d0a4ce;
  }
  else {
    _DAT_14cb76a60 = DAT_14c9a84f8;
    DAT_14c9a84f8 = &DAT_14cb76a60;
  }
  FUN_14654a948();
  atexit((_func_5014 *)&LAB_143d0881d);
  local_78 = 0;
  FUN_14153156c(&DAT_14cb76c38,L"gbx.analytics.ReportAllDamageSources",&DAT_14cb76c30,
                L"If true damage with multiple sources will report all of them. Otherwise it reports only the first.\n"
               );
  atexit(FUN_143d08829);
  local_78 = 0;
  FUN_141471170(&DAT_14cb76c68,L"gbx.Damage.ThrottledFleshImpactMax",&DAT_14c7638cc,
                L"Max number of flesh impacts than can spawn in the throttle period.  Flesh is anything that isn\'t shield.\n"
               );
  atexit(FUN_143d088ae);
  local_78 = 0;
  FUN_141471170(&DAT_14cb76c78,L"gbx.Damage.ThrottledShieldImpactMax",&DAT_14c7638d0,
                L"Max number of shield impacts than can spawn in the throttle period.\n");
  atexit(FUN_143d088f3);
  local_78 = 0;
  FUN_1415c789c(&DAT_14cb76c88,L"gbx.Damage.ThrottleDamageImpactPeriod",&DAT_14c7638d4,
                L"Period within which damage impact effects on an actor are throttled.\n");
  atexit(FUN_143d08938);
  _DAT_14cb77c68 = 0;
  LOCK();
  DAT_14cb77c60 = 0;
  UNLOCK();
  atexit((_func_5014 *)&LAB_143d0897d);
  DAT_14cb76c98 = 0;
  atexit((_func_5014 *)&LAB_143d08c75);
  InitializeSRWLock((PSRWLOCK)&DAT_14cb77c40);
  local_68 = &local_58;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = local_48;
  FUN_145d0b766();
  FUN_140653573(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  atexit(FUN_143d08dec);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d0e369 FUN_143d0e369 body=49 status=ok
// SIG undefined FUN_143d0e369(void)

void FUN_143d0e369(void)

{
  FUN_140bd4e4b(DAT_14cb77d58,DAT_14cb77d60);
  if (DAT_14cb77d58 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143d0e39a FUN_143d0e39a body=954 status=ok
// SIG undefined FUN_143d0e39a(void)

void FUN_143d0e39a(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  byte bVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong *plVar15;
  int iVar16;
  longlong lVar17;
  
  lVar10 = (**(code **)(*(longlong *)*param_2 + 8))();
  lVar11 = FUN_141845ccc();
  if (((lVar11 != 0) && (*(int *)(lVar11 + 0x38) <= *(int *)(lVar10 + 0x38))) &&
     (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
      lVar11 + 0x30)) {
    FUN_14882436c(param_1 + 0x20,param_2,param_3);
    return;
  }
  lVar10 = (**(code **)(*(longlong *)*param_2 + 8))();
  lVar11 = FUN_141845d40();
  if (((lVar11 != 0) && (*(int *)(lVar11 + 0x38) <= *(int *)(lVar10 + 0x38))) &&
     (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
      lVar11 + 0x30)) {
    FUN_148824412(param_1,param_2,param_3);
    return;
  }
  lVar10 = (**(code **)(*(longlong *)*param_2 + 8))();
  lVar11 = FUN_14049c336();
  if (((lVar11 != 0) && (*(int *)(lVar11 + 0x38) <= *(int *)(lVar10 + 0x38))) &&
     (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
      lVar11 + 0x30)) {
    FUN_1488244b8(param_1 + 0x10,param_2,param_3);
    return;
  }
  lVar10 = (**(code **)(*(longlong *)*param_2 + 8))();
  lVar11 = FUN_141845d06();
  if (((lVar11 != 0) && (*(int *)(lVar11 + 0x38) <= *(int *)(lVar10 + 0x38))) &&
     (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
      lVar11 + 0x30)) {
    FUN_14882455e(param_1 + 0x30,param_2,param_3);
    return;
  }
  lVar10 = (**(code **)(*(longlong *)*param_2 + 8))();
  lVar11 = FUN_143c38d58();
  if (((lVar11 != 0) && (*(int *)(lVar11 + 0x38) <= *(int *)(lVar10 + 0x38))) &&
     (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
      lVar11 + 0x30)) {
    lVar10 = *param_2;
    plVar3 = (longlong *)param_2[1];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    uVar2 = *(uint *)(param_1 + 0x48);
    lVar11 = (longlong)(int)uVar2;
    if (lVar11 != 0) {
      plVar4 = *(longlong **)(param_1 + 0x40);
      iVar16 = 0;
      bVar8 = 0;
      if (*plVar4 == lVar10) {
        bVar8 = FUN_1409d2f40(plVar4 + 2,param_3);
      }
      uVar14 = 0;
LAB_143d0e535:
      do {
        iVar6 = (int)uVar14;
        if ((int)(iVar6 + 1U) < (int)uVar2) {
          lVar17 = (longlong)iVar6;
          plVar15 = plVar4 + lVar17 * 4 + 6;
          bVar5 = true;
          lVar13 = 0;
          do {
            if (plVar15[-2] == lVar10) {
              bVar9 = FUN_1409d2f40(plVar15,param_3);
              if (((bVar9 ^ bVar8) & 1) != 0) {
                uVar7 = (int)(lVar17 + 1) + (int)lVar13;
                break;
              }
            }
            else if ((bVar8 & 1) != 0) {
              FUN_143c38609(plVar4 + lVar17 * 4,(int)lVar13 + 1);
              if (!bVar5) goto LAB_143d0e677;
              uVar14 = lVar17 + 1 + lVar13;
              bVar8 = 0;
              goto LAB_143d0e535;
            }
            bVar5 = lVar17 + lVar13 + 2 < lVar11;
            lVar13 = lVar13 + 1;
            plVar15 = plVar15 + 4;
            uVar7 = uVar2;
          } while ((lVar17 - lVar11) + 1 + lVar13 != 0);
        }
        else {
          bVar5 = false;
          uVar7 = iVar6 + 1U;
        }
        uVar14 = (ulonglong)uVar7;
        iVar12 = uVar7 - iVar6;
        if ((bVar8 & 1) != 0) {
          FUN_143c38609(plVar4 + (longlong)iVar6 * 4,iVar12);
          bVar8 = 0;
          if (!bVar5) break;
          goto LAB_143d0e535;
        }
        if (iVar16 != iVar6) {
          memmove(plVar4 + (longlong)iVar16 * 4,plVar4 + (longlong)iVar6 * 4,(longlong)iVar12 << 5);
        }
        iVar16 = iVar16 + iVar12;
        bVar8 = 1;
      } while (bVar5);
LAB_143d0e677:
      *(int *)(param_1 + 0x48) = iVar16;
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
                    /* WARNING: Could not recover jumptable at 0x000143d0e6c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 143d0e8c8 FUN_143d0e8c8 body=47 status=ok
// SIG undefined FUN_143d0e8c8(void)

void FUN_143d0e8c8(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = &DAT_14c846480;
  if (*(longlong *)(param_1 + -0x1e0) != 0) {
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + -0x1e0) + 0x240);
  }
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_2 = *puVar2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  return;
}



// FUNCTION 143d0e900 FUN_143d0e900 body=1977 status=ok
// SIG undefined FUN_143d0e900(void)

void FUN_143d0e900(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  code *pcVar5;
  longlong lVar6;
  byte bVar7;
  longlong lVar8;
  float *pfVar9;
  float *pfVar10;
  longlong *plVar11;
  longlong *plVar12;
  float fVar13;
  undefined1 auStack_118 [40];
  char local_f0 [16];
  longlong *local_e0;
  longlong local_d8;
  undefined4 local_c8 [8];
  longlong *local_a8;
  float local_a0;
  undefined4 uStack_9c;
  ushort local_88;
  byte local_80;
  float local_78;
  undefined4 uStack_74;
  ushort local_60;
  byte local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar3 = *param_2;
  plVar12 = (longlong *)param_2[1];
  if (plVar12 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x660) = uVar3;
    plVar11 = *(longlong **)(param_1 + 0x668);
    if (plVar11 == (longlong *)0x0) goto LAB_143d0e9c5;
    *(undefined8 *)(param_1 + 0x668) = 0;
LAB_143d0e98f:
    LOCK();
    plVar12 = plVar11 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 != 0) goto LAB_143d0e9c5;
    (**(code **)*plVar11)(plVar11);
    LOCK();
    piVar1 = (int *)((longlong)plVar11 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar12 = plVar11;
  }
  else {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x660) = uVar3;
    plVar11 = *(longlong **)(param_1 + 0x668);
    if (plVar12 != plVar11) {
      *(longlong **)(param_1 + 0x668) = plVar12;
      if (plVar11 == (longlong *)0x0) goto LAB_143d0e9c5;
      goto LAB_143d0e98f;
    }
    LOCK();
    plVar11 = plVar12 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 != 0) goto LAB_143d0e9c5;
    (**(code **)*plVar12)(plVar12);
    LOCK();
    piVar1 = (int *)((longlong)plVar12 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
LAB_143d0e9c5:
  plVar12 = (longlong *)(param_1 + 0x660);
  *(undefined4 *)(param_1 + 0x670) = param_3;
  lVar8 = *(longlong *)(param_1 + 0x1b0);
  if (lVar8 == 0) {
    lVar8 = *(longlong *)(param_1 + 0x168);
  }
  if ((*(longlong *)(param_1 + 0x698) != 0) &&
     (*(undefined1 *)(*(longlong *)(param_1 + 0x698) + 0x179) = *(undefined1 *)(*plVar12 + 0x2ea),
     *(char *)(*plVar12 + 0x198) == '\x01')) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x698) + 0x178) = 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x698) + 0x17a) =
         *(undefined1 *)(*(longlong *)(param_1 + 0x660) + 0x2e8);
    *(undefined4 *)(*(longlong *)(param_1 + 0x698) + 0x188) =
         *(undefined4 *)(*(longlong *)(param_1 + 0x660) + 0x290);
    lVar4 = *(longlong *)(param_1 + 0x660);
    local_f0[0] = '\0';
    local_c8[0] = 0;
    FUN_1456bb102(local_f0,lVar8);
    pfVar9 = &local_a0;
    FUN_1448729ea(lVar4 + 0x1a0,pfVar9,local_f0);
    if (local_80 == 3) {
      fVar13 = local_a0;
      bVar7 = 3;
    }
    else {
      pfVar10 = &local_78;
      FUN_1400b56fe(pfVar10,&local_a0,3);
      fVar13 = 0.0;
      if (local_58 != 0) {
        fVar13 = local_78;
      }
      pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
      if (pcVar5 != (code *)0x0) {
        if (0x18 < local_60) {
          pfVar10 = (float *)CONCAT44(uStack_74,local_78);
        }
        (*pcVar5)(pfVar10);
      }
      bVar7 = local_80;
      if (0x18 < local_60) {
        FUN_1400020a8(CONCAT44(uStack_74,local_78));
        bVar7 = local_80;
      }
    }
    *(float *)(*(longlong *)(param_1 + 0x698) + 0x17c) = fVar13;
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar7 * 0x120));
    if (pcVar5 != (code *)0x0) {
      if (0x18 < local_88) {
        pfVar9 = (float *)CONCAT44(uStack_9c,local_a0);
      }
      (*pcVar5)(pfVar9);
    }
    if (0x18 < local_88) {
      FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
    }
    FUN_1448173f8(local_c8);
    if ((local_f0[0] == '\x03') && (local_e0 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_e0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_e0 + 0x10))();
      }
    }
    lVar4 = *plVar12;
    local_f0[0] = '\0';
    local_c8[0] = 0;
    FUN_1456bb102(local_f0,lVar8);
    pfVar9 = &local_a0;
    FUN_1448729ea(lVar4 + 0x1f0,pfVar9,local_f0);
    if (local_80 == 3) {
      fVar13 = local_a0;
      bVar7 = 3;
    }
    else {
      pfVar10 = &local_78;
      FUN_1400b56fe(pfVar10,&local_a0,3);
      fVar13 = 0.0;
      if (local_58 != 0) {
        fVar13 = local_78;
      }
      pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
      if (pcVar5 != (code *)0x0) {
        if (0x18 < local_60) {
          pfVar10 = (float *)CONCAT44(uStack_74,local_78);
        }
        (*pcVar5)(pfVar10);
      }
      bVar7 = local_80;
      if (0x18 < local_60) {
        FUN_1400020a8(CONCAT44(uStack_74,local_78));
        bVar7 = local_80;
      }
    }
    *(float *)(*(longlong *)(param_1 + 0x698) + 0x180) = fVar13;
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar7 * 0x120));
    if (pcVar5 != (code *)0x0) {
      if (0x18 < local_88) {
        pfVar9 = (float *)CONCAT44(uStack_9c,local_a0);
      }
      (*pcVar5)(pfVar9);
    }
    if (0x18 < local_88) {
      FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
    }
    FUN_1448173f8(local_c8);
    if ((local_f0[0] == '\x03') && (local_e0 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_e0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_e0 + 0x10))();
      }
    }
    lVar4 = *plVar12;
    local_f0[0] = '\0';
    local_c8[0] = 0;
    FUN_1456bb102(local_f0,lVar8);
    pfVar9 = &local_a0;
    FUN_1448729ea(lVar4 + 0x240,pfVar9,local_f0);
    if (local_80 == 3) {
      fVar13 = local_a0;
      bVar7 = 3;
    }
    else {
      pfVar10 = &local_78;
      FUN_1400b56fe(pfVar10,&local_a0,3);
      fVar13 = 0.0;
      if (local_58 != 0) {
        fVar13 = local_78;
      }
      pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
      if (pcVar5 != (code *)0x0) {
        if (0x18 < local_60) {
          pfVar10 = (float *)CONCAT44(uStack_74,local_78);
        }
        (*pcVar5)(pfVar10);
      }
      bVar7 = local_80;
      if (0x18 < local_60) {
        FUN_1400020a8(CONCAT44(uStack_74,local_78));
        bVar7 = local_80;
      }
    }
    *(float *)(*(longlong *)(param_1 + 0x698) + 0x184) = fVar13;
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar7 * 0x120));
    if (pcVar5 != (code *)0x0) {
      if (0x18 < local_88) {
        pfVar9 = (float *)CONCAT44(uStack_9c,local_a0);
      }
      (*pcVar5)(pfVar9);
    }
    if (0x18 < local_88) {
      FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
    }
    FUN_1448173f8(local_c8);
    if ((local_f0[0] == '\x03') && (local_e0 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_e0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_e0 + 0x10))();
      }
    }
    lVar4 = *(longlong *)(param_1 + 0x660);
    lVar6 = *(longlong *)(param_1 + 0x698);
    local_f0[0] = '\0';
    local_c8[0] = 0;
    FUN_1456bb102(local_f0,lVar8);
    pfVar9 = &local_a0;
    FUN_1448729ea(lVar4 + 0x298,pfVar9,local_f0);
    fVar13 = local_a0;
    if (local_80 != 3) {
      pfVar10 = &local_78;
      FUN_1400b56fe(pfVar10,&local_a0,3);
      fVar13 = local_78;
      if (local_58 == 0) {
        fVar13 = 90.0;
      }
      pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
      if (pcVar5 != (code *)0x0) {
        if (0x18 < local_60) {
          pfVar10 = (float *)CONCAT44(uStack_74,local_78);
        }
        (*pcVar5)(pfVar10);
      }
      if (0x18 < local_60) {
        FUN_1400020a8(CONCAT44(uStack_74,local_78));
      }
    }
    fVar13 = cosf(fVar13 * 0.017453292);
    *(float *)(lVar6 + 0x18c) = fVar13;
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
    if (pcVar5 != (code *)0x0) {
      if (0x18 < local_88) {
        pfVar9 = (float *)CONCAT44(uStack_9c,local_a0);
      }
      (*pcVar5)(pfVar9);
    }
    if (0x18 < local_88) {
      FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
    }
    FUN_1448173f8(local_c8);
    if ((local_f0[0] == '\x03') && (local_e0 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_e0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_e0 + 0x10))();
      }
    }
  }
  FUN_14078a36a(param_1 + 0x5f0,param_1 + 0x3b0);
  lVar8 = (**(code **)(*(longlong *)(param_1 + 0x398) + 0x18))(param_1 + 0x398);
  if (lVar8 != 0) {
    FUN_140851e80(local_f0,lVar8);
    FUN_14078a636(param_1 + 0x5f0,local_f0);
    if (local_a8 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_a8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_a8 + 0x10))();
      }
    }
    if (local_d8 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_14078a0a0(param_1 + 0x398,0);
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d0f0ba FUN_143d0f0ba body=1966 status=ok
// SIG undefined FUN_143d0f0ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d0f0ba(longlong *param_1,float param_2)

{
  longlong *plVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  double dVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  double *pdVar11;
  longlong lVar12;
  uint uVar13;
  undefined4 *puVar14;
  longlong *plVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined4 uVar28;
  undefined4 uVar29;
  double _X;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined1 auStack_328 [32];
  undefined4 *local_308;
  uint local_300;
  char **local_2f8;
  undefined1 *local_2f0;
  undefined4 *local_2e8;
  undefined1 *local_2e0;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined4 local_22c;
  undefined4 local_200;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  longlong local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a4;
  undefined1 local_1a0;
  undefined1 local_199;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  double local_168;
  undefined1 local_159;
  char *local_158;
  double dStack_150;
  undefined1 local_148 [16];
  undefined1 local_138;
  undefined4 local_134;
  undefined2 local_130;
  longlong local_108;
  undefined8 local_100;
  undefined4 local_f8;
  longlong local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_328;
  FUN_14347b504();
  if (param_1[0x15] != 0) {
    lVar8 = *(longlong *)(param_1[0x15] + 0x1c8);
    if (lVar8 == 0) {
      puVar10 = &DAT_14c8464e0;
      uVar30 = SUB84(DAT_14c8464f0,0);
      uVar31 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      puVar10 = (undefined8 *)(lVar8 + 0x260);
      uVar30 = (undefined4)*(undefined8 *)(lVar8 + 0x270);
      uVar31 = (undefined4)((ulonglong)*(undefined8 *)(lVar8 + 0x270) >> 0x20);
    }
    local_1d0 = (double)param_2;
    local_1c0 = (double)param_1[0x27] * local_1d0;
    local_1c8 = (double)param_1[0x26] * local_1d0;
    local_1d0 = local_1d0 * (double)param_1[0x25];
    uVar3 = *puVar10;
    uVar4 = puVar10[1];
    puVar14 = &local_2d0;
    memset(&local_2d0,0,0x100);
    uVar23 = SUB84(puVar14,0);
    dVar7 = 2.12199579047121e-314;
    local_200 = 0xffffffff;
    local_2cc = 0x3f800000;
    local_22c = 0xffffffff;
    if (lVar8 == 0) {
      uVar28 = SUB84(DAT_14c8464f8,0);
      uVar29 = (undefined4)((ulonglong)DAT_14c8464f8 >> 0x20);
      uVar23 = SUB84(DAT_14c846500,0);
      uVar24 = (undefined4)((ulonglong)DAT_14c846500 >> 0x20);
      dVar7 = DAT_14c846508;
    }
    else {
      pcVar2 = *(char **)(lVar8 + 0x240);
      dVar19 = *(double *)(lVar8 + 0x248);
      dVar20 = *(double *)*(undefined1 (*) [16])(lVar8 + 0x250);
      dVar16 = *(double *)(lVar8 + 600);
      local_148 = *(undefined1 (*) [16])(lVar8 + 0x250);
      pdVar11 = *(double **)(lVar8 + 0x228);
      local_158 = pcVar2;
      dStack_150 = dVar19;
      if (pdVar11 == (double *)0x0) {
        uVar23 = 0x40;
        pdVar11 = (double *)FUN_14001cc68(0x40,0x10);
        dVar7 = DAT_14c8463d8;
        *pdVar11 = DAT_14c8463d0;
        pdVar11[1] = dVar7;
        dVar7 = DAT_14c8463e8;
        pdVar11[2] = DAT_14c8463e0;
        pdVar11[3] = dVar7;
        dVar7 = DAT_14c846500;
        pdVar11[4] = DAT_14c8464f8;
        pdVar11[5] = dVar7;
        dVar7 = DAT_14c846508;
        pdVar11[6] = DAT_14c846508;
        *(double **)(lVar8 + 0x228) = pdVar11;
      }
      auVar27._8_8_ = -(ulonglong)(dVar16 != pdVar11[3]);
      auVar27._0_8_ = -(ulonglong)(dVar20 != pdVar11[2]);
      auVar26._8_4_ = (int)-(ulonglong)(dVar19 != pdVar11[1]);
      auVar26._0_8_ = -(ulonglong)((double)pcVar2 != *pdVar11);
      auVar26._12_4_ = (int)(-(ulonglong)(dVar19 != pdVar11[1]) >> 0x20);
      iVar6 = movmskpd(SUB84(dVar7,0),auVar26);
      uVar13 = movmskpd(uVar23,auVar27);
      if ((uVar13 & 0x3fffffff) != 0 || iVar6 != 0) {
        *(undefined4 *)(pdVar11 + 2) = local_148._0_4_;
        *(undefined4 *)((longlong)pdVar11 + 0x14) = local_148._4_4_;
        *(undefined4 *)(pdVar11 + 3) = local_148._8_4_;
        *(undefined4 *)((longlong)pdVar11 + 0x1c) = local_148._12_4_;
        *pdVar11 = (double)local_158;
        pdVar11[1] = dStack_150;
        FUN_1448052ee(&local_158,&local_178);
        pdVar11[6] = local_168;
        pdVar11[4] = (double)CONCAT44(uStack_174,local_178);
        pdVar11[5] = (double)CONCAT44(uStack_16c,uStack_170);
      }
      uVar28 = SUB84(pdVar11[4],0);
      uVar29 = (undefined4)((ulonglong)pdVar11[4] >> 0x20);
      uVar23 = SUB84(pdVar11[5],0);
      uVar24 = (undefined4)((ulonglong)pdVar11[5] >> 0x20);
      dVar7 = pdVar11[6];
    }
    auVar25._4_4_ = uVar29;
    auVar25._0_4_ = uVar28;
    auVar25._12_4_ = uVar24;
    auVar25._8_4_ = uVar23;
    auVar26 = divpd(auVar25,_DAT_1499387d0);
    auVar22._0_8_ = dVar7 / 360.0;
    auVar22._8_8_ = 0;
    auVar27 = roundpd(auVar26,auVar26,3);
    auVar26 = roundpd(auVar22,auVar22,3);
    dVar19 = ((double)CONCAT44(uVar29,uVar28) - auVar27._0_8_ * (double)DAT_1499387d0) *
             0.008726646259971648;
    dVar20 = ((double)CONCAT44(uVar24,uVar23) - auVar27._8_8_ * DAT_1499387d0._8_8_) *
             0.008726646259971648;
    dVar7 = (dVar7 - auVar26._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
    _X = (0.0 - auVar26._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
    dVar16 = sin(dVar19);
    dVar17 = sin(dVar20);
    dVar18 = sin(dVar7);
    sin(_X);
    dVar19 = cos(dVar19);
    dVar20 = cos(dVar20);
    dVar21 = cos(dVar7);
    cos(_X);
    dVar7 = dVar17 * dVar16 * dVar18 + dVar20 * dVar19 * dVar21;
    local_158 = (char *)(dVar16 * dVar17 * dVar21 - dVar19 * dVar20 * dVar18);
    dStack_150 = -(dVar16 * dVar20 * dVar21) - dVar19 * dVar17 * dVar18;
    local_148._8_4_ = SUB84(dVar7,0);
    local_148._0_8_ = -(dVar20 * dVar16 * dVar18) + dVar17 * dVar19 * dVar21;
    local_148._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    local_300 = local_300 & 0xffffff00;
    local_308 = &local_2d0;
    cVar5 = (**(code **)(*param_1 + 0x4e8))(param_1,&local_1d0,&local_158,1);
    if (cVar5 != '\0') {
      if ((char)param_1[0x2f] == '\x01') {
        FUN_1401722a8(param_1,0);
      }
      if (*(char *)((longlong)param_1 + 0x179) == '\x01') {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14cb77e40) &&
           (FUN_144b3d300(&DAT_14cb77e40), DAT_14cb77e40 == -1)) {
          local_158 = "RadiateDamageWall";
          dStack_150 = (double)CONCAT35(dStack_150._5_3_,0x11);
          uVar13 = FUN_14001a6c0(&local_158,1);
          DAT_14cb77e38 = (char *)(ulonglong)uVar13;
          _Init_thread_footer(&DAT_14cb77e40);
        }
        lVar8 = param_1[0x16];
        if (lVar8 == 0) {
          lVar8 = FUN_1448abda6(param_1);
        }
        plVar1 = (longlong *)param_1[0x15];
        if (plVar1 != (longlong *)0x0) {
          lVar9 = FUN_1401726e6();
          if ((((*(int *)(lVar9 + 0x38) <= *(int *)(plVar1[2] + 0x38)) && (lVar8 != 0)) &&
              (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
               == lVar9 + 0x30)) && ((*(byte *)(plVar1 + 0x69) & 2) == 0)) {
            lVar9 = plVar1[0x39];
            if (lVar9 == 0) {
              puVar10 = &DAT_14c8464e0;
              local_168 = DAT_14c8464f0;
            }
            else {
              puVar10 = (undefined8 *)(lVar9 + 0x260);
              local_168 = *(double *)(lVar9 + 0x270);
            }
            local_178 = *(undefined4 *)puVar10;
            uStack_174 = *(undefined4 *)((longlong)puVar10 + 4);
            uStack_170 = *(undefined4 *)(puVar10 + 1);
            uStack_16c = *(undefined4 *)((longlong)puVar10 + 0xc);
            if ((double)CONCAT44(uVar31,uVar30) <= local_168) {
              uVar30 = SUB84(local_168,0);
              uVar31 = (undefined4)((ulonglong)local_168 >> 0x20);
            }
            local_134 = 0;
            local_130 = 0x101;
            local_108 = 0;
            local_100 = 0x800000000;
            local_e8 = 0;
            local_dc = 4;
            local_158 = DAT_14cb77e38;
            local_138 = 0;
            local_f8 = *(undefined4 *)((longlong)plVar1 + 0xc);
            local_e0 = 1;
            dStack_150 = (double)plVar1[3];
            local_148._7_2_ = 0x101;
            local_148._0_7_ = 0x100;
            local_148._12_4_ = 0;
            local_2e8 = &local_1a4;
            local_1a0 = 0;
            local_1a4 = 3;
            local_1b8 = 0;
            uStack_1b0 = 0;
            local_308 = &local_178;
            local_188 = CONCAT44(uVar31,uVar30);
            local_2e0 = &local_159;
            local_2f0 = &DAT_14cad0f10;
            local_300 = DAT_14cad0ec4;
            local_2f8 = &local_158;
            local_198 = uVar3;
            uStack_190 = uVar4;
            FUN_1401e2596(lVar8,&local_1b8,&local_199);
            if ((longlong)(int)uStack_1b0 != 0) {
              lVar9 = (longlong)(int)uStack_1b0 << 8;
              lVar8 = local_1b8;
              do {
                if (((((*(byte *)(lVar8 + 0xad) & 3) == 1) &&
                     ((lVar12 = FUN_14485cccc(lVar8 + 0xb8), lVar12 == 0 ||
                      ((*(byte *)(lVar12 + 0x62) & 4) == 0)))) && (*(int *)(lVar8 + 0xdc) != 0)) &&
                   ((((uVar13 = *(uint *)(lVar8 + 0xd8), -1 < (int)uVar13 &&
                      ((int)uVar13 < DAT_14c9647dc)) &&
                     ((plVar15 = (longlong *)
                                 ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8)),
                      plVar15 != (longlong *)0x0 &&
                      (((((int)plVar15[2] == *(int *)(lVar8 + 0xdc) &&
                         ((*(uint *)(plVar15 + 1) & 0x10200000) == 0)) &&
                        (plVar15 = (longlong *)*plVar15, plVar15 != (longlong *)0x0)) &&
                       ((lVar12 = (**(code **)(*plVar15 + 0x7b8))
                                            (plVar15,*(undefined8 *)(lVar8 + 0xf0),1,0xffffffff),
                        lVar12 == 0 || (*(char *)(lVar12 + 0x77) == '\x02')))))))) &&
                    (cVar5 = FUN_143d0f86a(param_1,lVar8), cVar5 == '\0')))) {
                  (**(code **)(*plVar1 + 0x5c8))(plVar1,0);
                  break;
                }
                lVar8 = lVar8 + 0x100;
                lVar9 = lVar9 + -0x100;
              } while (lVar9 != 0);
            }
            if (local_1b8 != 0) {
              FUN_1400020a8(local_1b8);
            }
            if (local_e8 != 0) {
              FUN_1400020a8();
            }
            if (local_108 != 0) {
              FUN_1400020a8();
            }
          }
        }
      }
    }
  }
  if ((local_d0 ^ (ulonglong)auStack_328) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d0f86a FUN_143d0f86a body=478 status=ok
// SIG undefined FUN_143d0f86a(void)

bool FUN_143d0f86a(longlong param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  char *pcVar4;
  longlong lVar5;
  longlong *plVar6;
  float fVar7;
  float fVar8;
  
  if (((*(byte *)(param_2 + 0xad) & 3) != 1) ||
     (*(double *)(param_2 + 0x68) <= 9.999999747378752e-05 &&
      *(double *)(param_2 + 0x68) != 9.999999747378752e-05)) {
    bVar3 = false;
  }
  else {
    fVar8 = *(float *)(param_1 + 0x18c);
    if (((((*(int *)(param_2 + 0xdc) != 0) && (uVar2 = *(uint *)(param_2 + 0xd8), -1 < (int)uVar2))
         && ((int)uVar2 < DAT_14c9647dc)) &&
        ((plVar6 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
         plVar6 != (longlong *)0x0 && ((int)plVar6[2] == *(int *)(param_2 + 0xdc))))) &&
       (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 && (lVar5 = *plVar6, lVar5 != 0)))) {
      if (((((*(byte *)(lVar5 + 0x44d) & 0x10) == 0) && (*(int *)(lVar5 + 0x414) != 0)) &&
          (uVar2 = *(uint *)(lVar5 + 0x410), -1 < (int)uVar2)) &&
         (((((int)uVar2 < DAT_14c9647dc &&
            (plVar6 = (longlong *)
                      ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
            plVar6 != (longlong *)0x0)) && ((int)plVar6[2] == *(int *)(lVar5 + 0x414))) &&
          ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)))) {
        if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
          lVar5 = *plVar6;
        }
        else {
          lVar5 = 0;
        }
        pcVar4 = (char *)(lVar5 + 200);
      }
      else {
        pcVar4 = (char *)(lVar5 + 0x520);
      }
      cVar1 = *pcVar4;
      if (cVar1 == '\x03') {
        fVar8 = 2.0;
      }
      else if (cVar1 == '\x02') {
        fVar7 = *(float *)(pcVar4 + 4);
        if ((*(float *)(pcVar4 + 8) != fVar7) || (NAN(*(float *)(pcVar4 + 8)) || NAN(fVar7))) {
          fVar7 = cosf(fVar7 * 0.017453292);
          if (1.0 <= fVar7) {
            fVar7 = 1.0;
          }
          if (fVar7 <= 0.0) {
            fVar7 = 0.0;
          }
          *(float *)(pcVar4 + 0xc) = fVar7;
          *(undefined4 *)(pcVar4 + 8) = *(undefined4 *)(pcVar4 + 4);
        }
        else {
          fVar7 = *(float *)(pcVar4 + 0xc);
        }
        if (fVar8 <= fVar7) {
          fVar8 = fVar7;
        }
      }
      else if (cVar1 == '\x01') {
        fVar7 = *(float *)(pcVar4 + 4);
        if ((*(float *)(pcVar4 + 8) != fVar7) || (NAN(*(float *)(pcVar4 + 8)) || NAN(fVar7))) {
          fVar7 = cosf(fVar7 * 0.017453292);
          if (1.0 <= fVar7) {
            fVar7 = 1.0;
          }
          if (fVar7 <= 0.0) {
            fVar7 = 0.0;
          }
          *(float *)(pcVar4 + 0xc) = fVar7;
          *(undefined4 *)(pcVar4 + 8) = *(undefined4 *)(pcVar4 + 4);
        }
        else {
          fVar7 = *(float *)(pcVar4 + 0xc);
        }
        if (fVar7 <= fVar8) {
          fVar8 = fVar7;
        }
      }
    }
    bVar3 = (double)fVar8 < *(double *)(param_2 + 0x68) ||
            (double)fVar8 == *(double *)(param_2 + 0x68);
  }
  return bVar3;
}



// FUNCTION 143d0fa4e FUN_143d0fa4e body=162 status=ok
// SIG undefined FUN_143d0fa4e(void)

void FUN_143d0fa4e(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [24];
  undefined1 local_70 [24];
  longlong local_58;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(uint *)(param_1 + -0x390) & 0x10) == 0) {
    FUN_1406c9d00(param_1 + 0x58,local_88);
    FUN_14031575e(local_70,local_88);
    FUN_14042b1ec(param_2,local_70,1);
    if (local_28 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d0faf2 FUN_143d0faf2 body=4379 status=ok
// SIG undefined FUN_143d0faf2(void)

ulonglong FUN_143d0faf2(longlong param_1,longlong param_2,char param_3,undefined4 param_4,
                       char param_5)

{
  code *_Dst;
  undefined4 *puVar1;
  void *pvVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  uint *puVar11;
  longlong lVar12;
  code *pcVar13;
  longlong lVar14;
  undefined7 uVar15;
  int iVar16;
  longlong *plVar17;
  longlong *plVar18;
  uint uVar19;
  code *pcVar20;
  longlong lVar21;
  undefined8 *puVar22;
  bool bVar23;
  undefined4 uVar24;
  undefined1 auStack_228 [32];
  undefined4 *local_208;
  longlong local_200;
  undefined4 local_1f8;
  longlong local_1f0;
  wchar_t *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  undefined8 *local_1d0;
  code *local_1c8;
  code *local_1c0;
  code *local_1b0;
  uint *local_1a8;
  undefined8 local_1a0;
  undefined2 local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  longlong local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 local_128;
  undefined4 local_b0;
  undefined2 local_ac;
  void *local_a8;
  int local_a0;
  longlong local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  void *local_80;
  int local_78;
  longlong local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_228;
  if ((param_2 != 0) && ((*(uint *)(param_2 + 8) >> 0x1e & 1) == 0)) {
    puVar11 = (uint *)(param_1 + 0x12a8);
    cVar3 = FUN_148825a8a(puVar11,param_2);
    if (cVar3 == '\0') {
      uVar19 = *(uint *)(param_2 + 0xc);
      *puVar11 = uVar19;
      if ((int)uVar19 < DAT_14c9647dc) {
        pcVar13 = (code *)((ulonglong)((uVar19 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8));
      }
      else {
        pcVar13 = (code *)0x0;
      }
      iVar5 = *(int *)(pcVar13 + 0x10);
      if (*(int *)(pcVar13 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar16 = DAT_14c964868 + 1;
        bVar23 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar23) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar16);
        }
        LOCK();
        iVar5 = *(int *)(pcVar13 + 0x10);
        bVar23 = iVar5 == 0;
        if (bVar23) {
          *(int *)(pcVar13 + 0x10) = iVar16;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar23) {
          iVar5 = iVar16;
        }
      }
      *(int *)(param_1 + 0x12ac) = iVar5;
      uVar24 = FUN_143d10c0e(param_1);
      *(undefined4 *)(param_1 + 0x12b4) = uVar24;
      local_1a8 = puVar11;
      if (param_3 != '\0') {
        *(undefined4 *)(param_1 + 0x12b0) = param_4;
        FUN_1446f470e(&local_148,L"DangerZoneDestroyOnProjectileEvent");
        if (param_1 == 0) {
          uVar19 = 0;
          uVar8 = 0;
        }
        else {
          uVar19 = *(uint *)(param_1 + 0xc);
          if ((int)uVar19 < DAT_14c9647dc) {
            lVar14 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8);
          }
          else {
            lVar14 = 0;
          }
          uVar8 = (ulonglong)*(uint *)(lVar14 + 0x10);
          if (*(uint *)(lVar14 + 0x10) == 0) {
            LOCK();
            iVar5 = DAT_14c964868 + 1;
            UNLOCK();
            uVar10 = DAT_14c964868 + 1;
            bVar23 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar5;
            if (bVar23) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,uVar10);
            }
            LOCK();
            uVar6 = *(uint *)(lVar14 + 0x10);
            bVar23 = uVar6 == 0;
            if (bVar23) {
              *(uint *)(lVar14 + 0x10) = uVar10;
              uVar6 = 0;
            }
            UNLOCK();
            if (bVar23) {
              uVar6 = uVar10;
            }
            uVar8 = (ulonglong)uVar6;
            puVar11 = local_1a8;
          }
        }
        pcVar13 = local_148;
        if (*(int *)(param_1 + 0x12ac) == 0) {
LAB_143d10ad5:
          lVar14 = 0;
        }
        else {
          uVar10 = *puVar11;
          lVar14 = 0;
          if ((-1 < (int)uVar10) && ((int)uVar10 < DAT_14c9647dc)) {
            plVar17 = (longlong *)
                      ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
            if ((plVar17 == (longlong *)0x0) ||
               (((int)plVar17[2] != *(int *)(param_1 + 0x12ac) ||
                ((*(uint *)(plVar17 + 1) & 0x10200000) != 0)))) goto LAB_143d10ad5;
            lVar14 = *plVar17;
          }
        }
        plVar17 = (longlong *)(lVar14 + 0xd18);
        pcVar20 = (code *)((ulonglong)uVar19 | uVar8 << 0x20);
        uStack_140 = local_148;
        local_148 = pcVar20;
        FUN_1403350f6(plVar17);
        iVar5 = *(int *)(lVar14 + 0xd20);
        if (0 < iVar5) {
          lVar12 = 0;
          bVar23 = false;
          do {
            local_1b0 = (code *)CONCAT44(local_1b0._4_4_,~(uint)lVar12);
            while( true ) {
              lVar7 = *plVar17;
              puVar11 = (uint *)(lVar7 + lVar12 * 0x10);
              if ((((((*(longlong *)(lVar7 + 8 + lVar12 * 0x10) != 0) && (puVar11[1] != 0)) &&
                    (uVar19 = *puVar11, -1 < (int)uVar19)) &&
                   (((int)uVar19 < DAT_14c9647dc &&
                    (plVar18 = (longlong *)
                               ((ulonglong)((uVar19 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8)),
                    plVar18 != (longlong *)0x0)))) && (*(uint *)(plVar18 + 2) == puVar11[1])) &&
                 (((*(uint *)(plVar18 + 1) >> 0x1c & 1) == 0 && (*plVar18 != 0)))) break;
              iVar16 = iVar5 + (int)local_1b0;
              if (iVar16 != 0) {
                if (0 < iVar16) {
                  iVar16 = 1;
                }
                memmove(puVar11,(void *)(lVar7 + (longlong)(iVar5 - iVar16) * 0x10),
                        (longlong)iVar16 << 4);
                iVar5 = *(int *)(lVar14 + 0xd20);
              }
              iVar5 = iVar5 + -1;
              *(int *)(lVar14 + 0xd20) = iVar5;
              bVar23 = true;
              if (iVar5 <= lVar12) goto LAB_143d10abb;
            }
            lVar12 = lVar12 + 1;
          } while (lVar12 < iVar5);
          if (bVar23) {
LAB_143d10abb:
            FUN_1400bbcfc(plVar17);
          }
        }
        if (*(int *)(param_1 + 0x12ac) == 0) {
LAB_143d10add:
          lVar14 = 0;
        }
        else {
          uVar19 = *local_1a8;
          lVar14 = 0;
          if ((-1 < (int)uVar19) && ((int)uVar19 < DAT_14c9647dc)) {
            plVar17 = (longlong *)
                      ((ulonglong)((uVar19 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8));
            if ((plVar17 == (longlong *)0x0) ||
               (((int)plVar17[2] != *(int *)(param_1 + 0x12ac) ||
                ((*(uint *)(plVar17 + 1) & 0x10200000) != 0)))) goto LAB_143d10add;
            lVar14 = *plVar17;
          }
        }
        plVar17 = (longlong *)(lVar14 + 0xd28);
        uStack_140 = pcVar13;
        local_148 = pcVar20;
        FUN_1403350f6(plVar17);
        iVar5 = *(int *)(lVar14 + 0xd30);
        if (0 < iVar5) {
          lVar12 = 0;
          bVar23 = false;
          do {
            local_1b0 = (code *)CONCAT44(local_1b0._4_4_,~(uint)lVar12);
            while( true ) {
              lVar7 = *plVar17;
              puVar11 = (uint *)(lVar7 + lVar12 * 0x10);
              if ((((*(longlong *)(lVar7 + 8 + lVar12 * 0x10) != 0) && (puVar11[1] != 0)) &&
                  (uVar19 = *puVar11, -1 < (int)uVar19)) &&
                 ((((int)uVar19 < DAT_14c9647dc &&
                   (plVar18 = (longlong *)
                              ((ulonglong)((uVar19 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8)),
                   plVar18 != (longlong *)0x0)) &&
                  ((*(uint *)(plVar18 + 2) == puVar11[1] &&
                   (((*(uint *)(plVar18 + 1) >> 0x1c & 1) == 0 && (*plVar18 != 0)))))))) break;
              iVar16 = iVar5 + (int)local_1b0;
              if (iVar16 != 0) {
                if (0 < iVar16) {
                  iVar16 = 1;
                }
                memmove(puVar11,(void *)(lVar7 + (longlong)(iVar5 - iVar16) * 0x10),
                        (longlong)iVar16 << 4);
                iVar5 = *(int *)(lVar14 + 0xd30);
              }
              iVar5 = iVar5 + -1;
              *(int *)(lVar14 + 0xd30) = iVar5;
              bVar23 = true;
              if (iVar5 <= lVar12) goto LAB_143d10ac8;
            }
            lVar12 = lVar12 + 1;
          } while (lVar12 < iVar5);
          if (bVar23) {
LAB_143d10ac8:
            FUN_1400bbcfc(plVar17);
          }
        }
        puVar11 = local_1a8;
        if (*(int *)(param_1 + 0x12ac) == 0) {
          lVar14 = 0;
        }
        else {
          uVar19 = *local_1a8;
          lVar14 = 0;
          if ((-1 < (int)uVar19) && ((int)uVar19 < DAT_14c9647dc)) {
            plVar17 = (longlong *)
                      ((ulonglong)((uVar19 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8));
            if ((plVar17 == (longlong *)0x0) ||
               (((int)plVar17[2] != *(int *)(param_1 + 0x12ac) ||
                ((*(uint *)(plVar17 + 1) & 0x10200000) != 0)))) {
              lVar14 = 0;
            }
            else {
              lVar14 = *plVar17;
            }
          }
        }
        FUN_14111abfe(lVar14 + 0x20e,&local_150);
        uStack_140 = pcVar13;
        local_148 = pcVar20;
        bVar4 = FUN_140a28ca8(lVar14,local_150);
        *(byte *)(lVar14 + 0x20e) = *(byte *)(lVar14 + 0x20e) | bVar4;
      }
      FUN_1446f470e(&local_148,L"BroadcastProjectileHit");
      if (param_1 == 0) {
        uVar19 = 0;
        uVar8 = 0;
      }
      else {
        uVar19 = *(uint *)(param_1 + 0xc);
        if ((int)uVar19 < DAT_14c9647dc) {
          pcVar13 = (code *)((ulonglong)((uVar19 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8));
        }
        else {
          pcVar13 = (code *)0x0;
        }
        uVar8 = (ulonglong)*(uint *)(pcVar13 + 0x10);
        if (*(uint *)(pcVar13 + 0x10) == 0) {
          LOCK();
          iVar5 = DAT_14c964868 + 1;
          UNLOCK();
          uVar10 = DAT_14c964868 + 1;
          bVar23 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar5;
          if (bVar23) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar10);
          }
          LOCK();
          uVar6 = *(uint *)(pcVar13 + 0x10);
          bVar23 = uVar6 == 0;
          if (bVar23) {
            *(uint *)(pcVar13 + 0x10) = uVar10;
            uVar6 = 0;
          }
          UNLOCK();
          if (bVar23) {
            uVar6 = uVar10;
          }
          uVar8 = (ulonglong)uVar6;
        }
      }
      if (*(int *)(param_1 + 0x12ac) == 0) {
LAB_143d10a9f:
        lVar14 = 0;
      }
      else {
        uVar10 = *puVar11;
        lVar14 = 0;
        if ((-1 < (int)uVar10) && ((int)uVar10 < DAT_14c9647dc)) {
          plVar17 = (longlong *)
                    ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
          if ((plVar17 == (longlong *)0x0) ||
             (((int)plVar17[2] != *(int *)(param_1 + 0x12ac) ||
              ((*(uint *)(plVar17 + 1) & 0x10200000) != 0)))) goto LAB_143d10a9f;
          lVar14 = *plVar17;
        }
      }
      plVar17 = (longlong *)(lVar14 + 0xd18);
      pcVar20 = (code *)((ulonglong)uVar19 | uVar8 << 0x20);
      local_1b0 = local_148;
      uStack_140 = local_148;
      local_148 = pcVar20;
      FUN_1403350f6(plVar17);
      iVar5 = *(int *)(lVar14 + 0xd20);
      if (0 < iVar5) {
        lVar12 = 0;
        bVar23 = false;
        do {
          pcVar13 = (code *)(lVar12 * 0x10);
          while( true ) {
            lVar7 = *plVar17;
            _Dst = pcVar13 + lVar7;
            if ((((*(longlong *)(pcVar13 + lVar7 + 8) != 0) && (*(uint *)(_Dst + 4) != 0)) &&
                (uVar19 = *(uint *)_Dst, -1 < (int)uVar19)) &&
               ((((int)uVar19 < DAT_14c9647dc &&
                 (plVar18 = (longlong *)
                            ((ulonglong)((uVar19 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8)),
                 puVar11 = local_1a8, plVar18 != (longlong *)0x0)) &&
                ((*(uint *)(plVar18 + 2) == *(uint *)(_Dst + 4) &&
                 (((*(uint *)(plVar18 + 1) >> 0x1c & 1) == 0 && (*plVar18 != 0)))))))) break;
            iVar16 = iVar5 + ~(uint)lVar12;
            if (iVar16 != 0) {
              if (0 < iVar16) {
                iVar16 = 1;
              }
              memmove(_Dst,(void *)(lVar7 + (longlong)(iVar5 - iVar16) * 0x10),(longlong)iVar16 << 4
                     );
              iVar5 = *(int *)(lVar14 + 0xd20);
            }
            iVar5 = iVar5 + -1;
            *(int *)(lVar14 + 0xd20) = iVar5;
            bVar23 = true;
            if (iVar5 <= lVar12) goto LAB_143d10a85;
          }
          lVar12 = lVar12 + 1;
        } while (lVar12 < iVar5);
        if (bVar23) {
LAB_143d10a85:
          FUN_1400bbcfc(plVar17);
        }
      }
      if (*(int *)(param_1 + 0x12ac) == 0) {
LAB_143d10ab1:
        lVar14 = 0;
      }
      else {
        uVar19 = *puVar11;
        lVar14 = 0;
        if ((int)uVar19 < 0) goto LAB_143d10ab1;
        if ((int)uVar19 < DAT_14c9647dc) {
          plVar17 = (longlong *)
                    ((ulonglong)((uVar19 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8));
          if (((plVar17 == (longlong *)0x0) || ((int)plVar17[2] != *(int *)(param_1 + 0x12ac))) ||
             ((*(uint *)(plVar17 + 1) & 0x10200000) != 0)) {
            lVar14 = 0;
          }
          else {
            lVar14 = *plVar17;
          }
        }
      }
      uStack_140 = local_1b0;
      local_148 = pcVar20;
      FUN_1403350f6();
      iVar5 = *(int *)(lVar14 + 0xd30);
      if (0 < iVar5) {
        lVar12 = 0;
        bVar23 = false;
        do {
          pcVar13 = (code *)(lVar12 * 0x10);
          while( true ) {
            lVar7 = *(longlong *)(lVar14 + 0xd28);
            pcVar20 = pcVar13 + lVar7;
            if (((*(longlong *)(pcVar13 + lVar7 + 8) != 0) && (*(uint *)(pcVar20 + 4) != 0)) &&
               ((((uVar19 = *(uint *)pcVar20, -1 < (int)uVar19 &&
                  (((int)uVar19 < DAT_14c9647dc &&
                   (plVar17 = (longlong *)
                              ((ulonglong)((uVar19 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8)),
                   plVar17 != (longlong *)0x0)))) &&
                 (*(uint *)(plVar17 + 2) == *(uint *)(pcVar20 + 4))) &&
                (((*(uint *)(plVar17 + 1) >> 0x1c & 1) == 0 && (*plVar17 != 0)))))) break;
            iVar16 = iVar5 + ~(uint)lVar12;
            if (iVar16 != 0) {
              if (0 < iVar16) {
                iVar16 = 1;
              }
              memmove(pcVar20,(void *)(lVar7 + (longlong)(iVar5 - iVar16) * 0x10),
                      (longlong)iVar16 << 4);
              iVar5 = *(int *)(lVar14 + 0xd30);
            }
            iVar5 = iVar5 + -1;
            *(int *)(lVar14 + 0xd30) = iVar5;
            bVar23 = true;
            if (iVar5 <= lVar12) goto LAB_143d10a92;
          }
          lVar12 = lVar12 + 1;
        } while (lVar12 < iVar5);
        if (bVar23) {
LAB_143d10a92:
          FUN_1400bbcfc();
        }
      }
      puVar11 = local_1a8;
      if (param_5 != '\0') {
        if (*(int *)(param_1 + 0x12ac) == 0) {
LAB_143d10ae5:
          lVar14 = 0;
        }
        else {
          uVar19 = *local_1a8;
          lVar14 = 0;
          if ((-1 < (int)uVar19) && ((int)uVar19 < DAT_14c9647dc)) {
            plVar17 = (longlong *)
                      ((ulonglong)((uVar19 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8));
            if ((plVar17 == (longlong *)0x0) ||
               (((int)plVar17[2] != *(int *)(param_1 + 0x12ac) ||
                ((*(uint *)(plVar17 + 1) & 0x10200000) != 0)))) goto LAB_143d10ae5;
            lVar14 = *plVar17;
          }
        }
        local_208 = &local_168;
        local_158 = DAT_14c8464f0;
        local_168 = (undefined4)DAT_14c8464e0;
        uStack_164 = DAT_14c8464e0._4_4_;
        uStack_160 = (undefined4)DAT_14c8464e8;
        uStack_15c = DAT_14c8464e8._4_4_;
        (**(code **)(*(longlong *)(lVar14 + 0x3d0) + 0x80))(lVar14 + 0x3d0,param_1,0,0);
      }
      if (*(longlong *)(param_1 + 0x4f8) != 0) {
        pcVar20 = (code *)(param_1 + 0x12c8);
        FUN_1457419e5(*(undefined8 *)(param_1 + 0x12c8),*(undefined4 *)(param_1 + 0x12d0));
        *(undefined4 *)(param_1 + 0x12d0) = 0;
        if (*(int *)(param_1 + 0x12d4) != 0) {
          FUN_14882adc0(pcVar20);
        }
        lVar14 = (longlong)*(int *)(*(longlong *)(param_1 + 0x4f8) + 0x118);
        if (lVar14 != 0) {
          lVar14 = lVar14 * 200;
          lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x4f8) + 0x110) + 0x10;
          do {
            if ((*(char *)(lVar12 + -0x10) == '\x01') &&
               (lVar7 = *(longlong *)(lVar12 + -8), lVar7 != 0)) {
              if (DAT_14cac6e60 == 0) {
                local_148 = FUN_144a7958c;
                local_1c0 = FUN_14081d0ea;
                local_1c8 = FUN_142b47bc4;
                local_1d0 = &local_148;
                local_1d8 = &LAB_1478989f1;
                local_1e0 = &LAB_146391124;
                local_1e8 = L"Engine";
                local_1f0 = 0x10000000000;
                local_1f8 = 0x10000005;
                local_200 = CONCAT44(local_200._4_4_,0x10);
                local_208 = (undefined4 *)CONCAT44(local_208._4_4_,0x620);
                FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
              }
              local_170 = DAT_14cac6e60;
              if ((DAT_14cac6e60 != 0) && (DAT_14c950c29 != '\0')) {
                FUN_1456cec3c();
              }
              local_208 = (undefined4 *)0x0;
              lVar7 = FUN_140ae4830(param_1,&local_170,lVar7,0);
              if (lVar7 != 0) {
                if (DAT_14cac6e60 == 0) {
                  local_148 = FUN_144a7958c;
                  local_1c0 = FUN_14081d0ea;
                  local_1c8 = FUN_142b47bc4;
                  local_1d0 = &local_148;
                  local_1d8 = &LAB_1478989f1;
                  local_1e0 = &LAB_146391124;
                  local_1e8 = L"Engine";
                  local_1f0 = 0x10000000000;
                  local_1f8 = 0x10000005;
                  local_200 = CONCAT44(local_200._4_4_,0x10);
                  local_208 = (undefined4 *)CONCAT44(local_208._4_4_,0x620);
                  FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60);
                }
                if ((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38))
                   && (*(longlong *)
                        (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
                        (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) == DAT_14cac6e60 + 0x30)) {
                  uVar19 = *(uint *)(lVar7 + 0xc);
                  if ((int)uVar19 < DAT_14c9647dc) {
                    pcVar13 = (code *)((ulonglong)((uVar19 & 0xffff) * 0x18) +
                                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8)
                                      );
                  }
                  else {
                    pcVar13 = (code *)0x0;
                  }
                  iVar5 = *(int *)(pcVar13 + 0x10);
                  if (iVar5 == 0) {
                    LOCK();
                    iVar5 = DAT_14c964868 + 1;
                    UNLOCK();
                    iVar16 = DAT_14c964868 + 1;
                    bVar23 = DAT_14c964868 < 1000;
                    DAT_14c964868 = iVar5;
                    local_1b0 = pcVar20;
                    if (bVar23) {
                      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                    L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                   );
                    }
                    LOCK();
                    iVar5 = *(int *)(pcVar13 + 0x10);
                    bVar23 = iVar5 == 0;
                    if (bVar23) {
                      *(int *)(pcVar13 + 0x10) = iVar16;
                      iVar5 = 0;
                    }
                    UNLOCK();
                    if (bVar23) {
                      iVar5 = iVar16;
                    }
                    puVar11 = local_1a8;
                    pcVar20 = local_1b0;
                    if (iVar5 == 0) goto LAB_143d10622;
                  }
                  if ((-1 < (int)uVar19) && ((int)uVar19 < DAT_14c9647dc)) {
                    plVar17 = (longlong *)
                              ((ulonglong)((uVar19 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8));
                    if ((plVar17 != (longlong *)0x0) &&
                       ((((int)plVar17[2] == iVar5 && ((*(uint *)(plVar17 + 1) & 0x10200000) == 0))
                        && (lVar7 = *plVar17, lVar7 != 0)))) {
                      local_1f0 = lVar12 + -0xd;
                      local_208 = (undefined4 *)(lVar12 + 8);
                      if ((*(uint *)(plVar17 + 1) & 0x10200000) != 0) {
                        lVar7 = 0;
                      }
                      local_178 = *(undefined8 *)(lVar7 + 0x1d8);
                      local_188 = *(undefined4 *)(lVar7 + 0x1c8);
                      uStack_184 = *(undefined4 *)(lVar7 + 0x1cc);
                      uStack_180 = *(undefined4 *)(lVar7 + 0x1d0);
                      uStack_17c = *(undefined4 *)(lVar7 + 0x1d4);
                      local_1f8 = CONCAT31(local_1f8._1_3_,*(undefined1 *)(lVar12 + -0xe));
                      local_200 = lVar12;
                      local_1b0 = pcVar20;
                      FUN_148825b02(&local_148,CONCAT44(iVar5,uVar19),&local_188);
                      iVar5 = *(int *)(param_1 + 0x12d0);
                      *(uint *)(param_1 + 0x12d0) = iVar5 + 1U;
                      if (*(uint *)(param_1 + 0x12d4) < iVar5 + 1U) {
                        FUN_14882adf0(local_1b0,iVar5);
                      }
                      pvVar2 = local_a8;
                      lVar7 = *(longlong *)local_1b0;
                      lVar9 = (longlong)iVar5 * 0xe8;
                      pcVar13 = (code *)(lVar7 + lVar9);
                      *(undefined1 *)(lVar7 + 0x20 + lVar9) = local_128;
                      puVar1 = (undefined4 *)(lVar7 + 0x10 + lVar9);
                      *puVar1 = local_138;
                      puVar1[1] = uStack_134;
                      puVar1[2] = uStack_130;
                      puVar1[3] = uStack_12c;
                      puVar1 = (undefined4 *)(lVar7 + lVar9);
                      *puVar1 = (undefined4)local_148;
                      puVar1[1] = local_148._4_4_;
                      puVar1[2] = (undefined4)uStack_140;
                      puVar1[3] = uStack_140._4_4_;
                      *(undefined ***)(lVar7 + 0x28 + lVar9) = &PTR_FUN_14b00bdf8;
                      *(undefined8 *)(lVar7 + 0x58 + lVar9) = 0;
                      *(undefined4 *)(lVar7 + 0x60 + lVar9) = 0;
                      puVar22 = (undefined8 *)(lVar7 + 0x38 + lVar9);
                      *puVar22 = 0;
                      puVar22[1] = 0;
                      *(undefined8 *)(lVar7 + 100 + lVar9) = 0xffffffff00000080;
                      *(undefined4 *)(lVar7 + 0x6c + lVar9) = 0;
                      *(undefined8 *)(lVar7 + 0x78 + lVar9) = 0;
                      *(undefined4 *)(lVar7 + 0x80 + lVar9) = 0;
                      puVar22 = (undefined8 *)(lVar7 + 0x88 + lVar9);
                      *puVar22 = 0;
                      puVar22[1] = 0;
                      *(undefined ***)(lVar7 + 0x30 + lVar9) = &PTR_FUN_14a176fc0;
                      *(undefined4 *)(lVar7 + 0x98 + lVar9) = local_b0;
                      *(undefined2 *)(lVar7 + 0x9c + lVar9) = local_ac;
                      *(undefined **)(lVar7 + 0x30 + lVar9) = &DAT_14a176f00;
                      *(undefined8 *)(lVar7 + 0xa0 + lVar9) = 0;
                      lVar21 = (longlong)local_a0;
                      *(int *)(lVar7 + 0xa8 + lVar9) = local_a0;
                      if (lVar21 == 0) {
                        *(undefined4 *)(pcVar13 + 0xac) = 0;
                      }
                      else {
                        puVar22 = (undefined8 *)(lVar7 + lVar9 + 0xa0);
                        FUN_140501c24(puVar22,local_a0,0);
                        memcpy((void *)*puVar22,pvVar2,lVar21 * 0x1c);
                      }
                      pvVar2 = local_80;
                      *(longlong *)(pcVar13 + 0xb0) = local_98;
                      *(undefined4 *)(pcVar13 + 0xb8) = local_90;
                      *(undefined4 *)(pcVar13 + 0xbc) = uStack_8c;
                      *(undefined4 *)(pcVar13 + 0xc0) = uStack_88;
                      *(undefined4 *)(pcVar13 + 0xc4) = uStack_84;
                      *(longlong *)(pcVar13 + 200) = 0;
                      lVar7 = (longlong)local_78;
                      *(int *)(pcVar13 + 0xd0) = local_78;
                      if (lVar7 == 0) {
                        *(undefined4 *)(pcVar13 + 0xd4) = 0;
                      }
                      else {
                        FUN_1446dd670(pcVar13 + 200,local_78,0);
                        memcpy(*(void **)(pcVar13 + 200),pvVar2,lVar7 * 2);
                      }
                      *(undefined4 *)(pcVar13 + 0xe0) = local_68;
                      *(longlong *)(pcVar13 + 0xd8) = local_70;
                      FUN_14051f4c4();
                      puVar11 = local_1a8;
                      pcVar20 = local_1b0;
                    }
                  }
                }
              }
            }
LAB_143d10622:
            lVar12 = lVar12 + 200;
            lVar14 = lVar14 + -200;
          } while (lVar14 != 0);
        }
      }
      if (*(int *)(param_1 + 0x12ac) == 0) {
LAB_143d10aa7:
        lVar14 = 0;
      }
      else {
        uVar19 = *puVar11;
        lVar14 = 0;
        if ((-1 < (int)uVar19) && ((int)uVar19 < DAT_14c9647dc)) {
          plVar17 = (longlong *)
                    ((ulonglong)((uVar19 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8));
          if ((plVar17 == (longlong *)0x0) ||
             (((int)plVar17[2] != *(int *)(param_1 + 0x12ac) ||
              ((*(uint *)(plVar17 + 1) & 0x10200000) != 0)))) goto LAB_143d10aa7;
          lVar14 = *plVar17;
        }
      }
      lVar14 = (**(code **)(*(longlong *)(lVar14 + 0x3c0) + 0x10))(lVar14 + 0x3c0);
      uVar15 = (undefined7)((ulonglong)pcVar13 >> 8);
      uVar8 = CONCAT71(uVar15,1);
      if ((lVar14 != 0) && (*(char *)(param_1 + 0x1340) == '\x01')) {
        local_1a0 = *(undefined8 *)(lVar14 + 0x20);
        local_198 = *(undefined2 *)(lVar14 + 0x28);
        local_190 = *(undefined8 *)(lVar14 + 0x30);
        uVar8 = CONCAT71(uVar15,1);
        FUN_140365ba6(param_1 + 0x12d8,&local_1a0,1);
      }
      goto LAB_143d0fb32;
    }
  }
  uVar8 = 0;
LAB_143d0fb32:
  if ((local_60 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 143d10c0e FUN_143d10c0e body=236 status=ok
// SIG undefined FUN_143d10c0e(void)

undefined8 FUN_143d10c0e(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  double *pdVar3;
  double *pdVar4;
  longlong *plVar5;
  double dVar6;
  double dVar7;
  
  if (((((*(int *)(param_1 + 0x12ac) != 0) && (uVar1 = *(uint *)(param_1 + 0x12a8), -1 < (int)uVar1)
        ) && ((int)uVar1 < DAT_14c9647dc)) &&
      ((plVar5 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar5 != (longlong *)0x0 && ((int)plVar5[2] == *(int *)(param_1 + 0x12ac))))) &&
     (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 &&
      (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (*plVar5 != 0)))))) {
    lVar2 = *(longlong *)(param_1 + 0x1c8);
    if (lVar2 == 0) {
      pdVar4 = (double *)&DAT_14c8464e0;
      dVar6 = DAT_14c8464f0;
    }
    else {
      pdVar4 = (double *)(lVar2 + 0x260);
      dVar6 = *(double *)(lVar2 + 0x270);
    }
    lVar2 = *(longlong *)(*plVar5 + 0x1c8);
    if (lVar2 == 0) {
      pdVar3 = (double *)&DAT_14c8464e0;
      dVar7 = DAT_14c8464f0;
    }
    else {
      pdVar3 = (double *)(lVar2 + 0x260);
      dVar7 = *(double *)(lVar2 + 0x270);
    }
    dVar6 = SQRT((dVar6 - dVar7) * (dVar6 - dVar7) +
                 (*pdVar4 - *pdVar3) * (*pdVar4 - *pdVar3) +
                 (pdVar4[1] - pdVar3[1]) * (pdVar4[1] - pdVar3[1]));
    return CONCAT44((int)((ulonglong)dVar6 >> 0x20),(float)dVar6);
  }
  return 0;
}



// FUNCTION 143d10cfa FUN_143d10cfa body=126 status=ok
// SIG undefined FUN_143d10cfa(void)

float FUN_143d10cfa(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  float fVar3;
  
  fVar3 = 0.0;
  if ((((0.0 < *(float *)(param_1 + 0x12b4)) && (*(int *)(param_1 + 0x12ac) != 0)) &&
      (uVar1 = *(uint *)(param_1 + 0x12a8), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x10) == *(int *)(param_1 + 0x12ac))) &&
       ((*(uint *)(lVar2 + 8) & 0x10200000) == 0)) {
      fVar3 = (float)FUN_143d10c0e(param_1);
      fVar3 = 1.0 - fVar3 / *(float *)(param_1 + 0x12b4);
    }
  }
  return fVar3;
}



// FUNCTION 143d10d78 FUN_143d10d78 body=1248 status=ok
// SIG undefined FUN_143d10d78(void)

void FUN_143d10d78(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  uint *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 *puVar8;
  uint *puVar9;
  undefined8 *puVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [24];
  undefined1 local_e0 [24];
  undefined1 local_c8 [24];
  undefined1 local_b0 [24];
  double local_98;
  double local_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_118;
  fVar12 = 0.0;
  if ((((0.0 < *(float *)(param_1 + 0x12b4)) && (*(int *)(param_1 + 0x12ac) != 0)) &&
      (uVar2 = *(uint *)(param_1 + 0x12a8), -1 < (int)uVar2)) &&
     ((((int)uVar2 < DAT_14c9647dc &&
       (lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar6 != 0)) &&
      ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x12ac) &&
       ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))))) {
    fVar12 = (float)FUN_143d10c0e(param_1);
    fVar12 = 1.0 - fVar12 / *(float *)(param_1 + 0x12b4);
  }
  if ((longlong)*(int *)(param_1 + 0x12d0) != 0) {
    puVar9 = *(uint **)(param_1 + 0x12c8);
    lVar6 = (longlong)*(int *)(param_1 + 0x12d0) * 0xe8;
    do {
      if (((puVar9[1] != 0) && (uVar2 = *puVar9, -1 < (int)uVar2)) &&
         ((((int)uVar2 < DAT_14c9647dc &&
           (((plVar7 = (longlong *)
                       ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
             plVar7 != (longlong *)0x0 && (*(uint *)(plVar7 + 2) == puVar9[1])) &&
            ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)))) && (*plVar7 != 0)))) {
        puVar1 = puVar9 + 0x2c;
        lVar3 = FUN_1447e736e(puVar1);
        puVar4 = puVar9;
        if (lVar3 != 0) {
          puVar4 = (uint *)FUN_1447e736e(puVar1);
        }
        fVar11 = fVar12;
        if (0 < (int)puVar4[0x2a]) {
          lVar3 = FUN_1447e736e(puVar1);
          puVar4 = puVar9;
          if (lVar3 != 0) {
            puVar4 = (uint *)FUN_1447e736e(puVar1);
          }
          fVar11 = (float)FUN_1448c9f94(puVar4 + 0xc,fVar12,0);
        }
        switch((char)puVar9[8]) {
        case '\0':
          if (((((puVar9[1] != 0) && (uVar2 = *puVar9, -1 < (int)uVar2)) &&
               (((int)uVar2 < DAT_14c9647dc &&
                ((plVar7 = (longlong *)
                           ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
                 plVar7 != (longlong *)0x0 && (*(uint *)(plVar7 + 2) == puVar9[1])))))) &&
              ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)) && (lVar3 = *plVar7, lVar3 != 0)) {
            lVar5 = FUN_14081cebe();
            if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
                (*(longlong *)
                  (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
                  (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) &&
               (*(longlong *)(puVar9 + 0x36) != 0)) {
              FUN_14347fe0c(lVar3);
            }
          }
          break;
        case '\x01':
          if ((((puVar9[1] != 0) && (uVar2 = *puVar9, -1 < (int)uVar2)) &&
              (((int)uVar2 < DAT_14c9647dc &&
               ((plVar7 = (longlong *)
                          ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
                plVar7 != (longlong *)0x0 && (*(uint *)(plVar7 + 2) == puVar9[1])))))) &&
             (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 && (lVar3 = *plVar7, lVar3 != 0)))) {
            lVar5 = FUN_14081cebe();
            if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
                (*(longlong *)
                  (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
                  (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) &&
               (*(longlong *)(puVar9 + 0x36) != 0)) {
              local_98 = (double)fVar11;
              local_90 = local_98;
              local_88 = local_98;
              FUN_1479e6904(lVar3,*(longlong *)(puVar9 + 0x36),&local_98);
            }
          }
          break;
        case '\x02':
          if ((puVar9[1] == 0) || (uVar2 = *puVar9, (int)uVar2 < 0)) {
LAB_143d11205:
            plVar7 = (longlong *)0x0;
          }
          else {
            plVar7 = (longlong *)0x0;
            if ((int)uVar2 < DAT_14c9647dc) {
              puVar10 = (undefined8 *)
                        ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
              if (((puVar10 == (undefined8 *)0x0) || (*(uint *)(puVar10 + 2) != puVar9[1])) ||
                 ((*(uint *)(puVar10 + 1) & 0x10200000) != 0)) goto LAB_143d11205;
              plVar7 = (longlong *)*puVar10;
            }
          }
          if ((char)puVar9[0x38] == '\0') {
            FUN_148825d36(puVar9,local_e0);
            lVar3 = *plVar7;
            puVar8 = local_e0;
            goto LAB_143d111e9;
          }
          FUN_148825d36(puVar9,local_f8);
          puVar8 = local_f8;
LAB_143d111b6:
          FUN_141226a1c(plVar7,puVar8);
          break;
        case '\x03':
          if ((puVar9[1] == 0) || (uVar2 = *puVar9, (int)uVar2 < 0)) {
LAB_143d1120d:
            plVar7 = (longlong *)0x0;
          }
          else {
            plVar7 = (longlong *)0x0;
            if ((int)uVar2 < DAT_14c9647dc) {
              puVar10 = (undefined8 *)
                        ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
              if (((puVar10 == (undefined8 *)0x0) || (*(uint *)(puVar10 + 2) != puVar9[1])) ||
                 ((*(uint *)(puVar10 + 1) & 0x10200000) != 0)) goto LAB_143d1120d;
              plVar7 = (longlong *)*puVar10;
            }
          }
          if ((char)puVar9[0x38] != '\0') {
            FUN_148825d36(puVar9,local_c8);
            puVar8 = local_c8;
            goto LAB_143d111b6;
          }
          FUN_148825d36(puVar9,local_b0);
          lVar3 = *plVar7;
          puVar8 = local_b0;
LAB_143d111e9:
          (**(code **)(lVar3 + 0x478))(plVar7,puVar8);
        }
      }
      puVar9 = puVar9 + 0x3a;
      lVar6 = lVar6 + -0xe8;
    } while (lVar6 != 0);
  }
  if ((local_80 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d1125a FUN_143d1125a body=2135 status=ok
// SIG undefined FUN_143d1125a(void)

void FUN_143d1125a(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  float param_5,void *param_6,undefined8 *param_7,undefined8 param_8,
                  longlong param_9,double *param_10,float param_11,undefined8 param_12,
                  longlong *param_13,float param_14,char param_15)

{
  int *piVar1;
  longlong *plVar2;
  double dVar3;
  double dVar4;
  void *pvVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  void **ppvVar15;
  bool bVar16;
  float fVar17;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined2 *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  code **local_120;
  undefined1 *local_118;
  code *local_110;
  void *local_100;
  int local_f8;
  undefined4 local_f4;
  longlong local_f0;
  longlong *local_e8;
  longlong local_e0;
  void *local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  code *local_b0;
  void *local_a8;
  ulonglong uStack_a0;
  longlong *local_98;
  longlong local_90;
  undefined4 local_80 [2];
  void **local_78;
  ulonglong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_c8 = *param_4;
  local_b8 = param_2;
  FUN_1446dcdd4(&local_a8);
  if (DAT_14cb77e00 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = FUN_144837462(DAT_14cb77e00,&local_a8);
  }
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  if (param_1 != 0 && lVar9 != 0) {
    FUN_1405fab15(&local_c8);
    if (param_5 <= 0.0) {
      if (*(char *)(local_c8 + 0xc) == '\x01') {
        *(undefined1 *)(local_c8 + 0xc) = 0;
      }
    }
    else {
      *(float *)(local_c8 + 8) = param_5;
      *(undefined1 *)(local_c8 + 0xc) = 1;
    }
    memcpy((void *)(local_c8 + 0xa0),param_6,0x100);
    local_d8 = (void *)*param_7;
    FUN_1446dcdd4(&local_a8);
    if (DAT_14cb77da0 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = FUN_144837462(DAT_14cb77da0,&local_a8);
    }
    *(undefined8 *)(local_c8 + 0x10) = uVar10;
    if (local_90 != 0) {
      FUN_1400020a8();
    }
    local_78 = (void **)0x0;
    local_70 = 0x200000000;
    FUN_140a6f4d0(&local_a8,param_8);
    if ((void **)(local_c8 + 0x18) != &local_a8) {
      ppvVar15 = &local_a8;
      if (local_78 != (void **)0x0) {
        ppvVar15 = local_78;
      }
      FUN_1400709d4((void **)(local_c8 + 0x18),ppvVar15,local_70 & 0xffffffff,
                    *(undefined4 *)(local_c8 + 0x54));
    }
    if (local_78 != (void **)0x0) {
      FUN_1400020a8();
    }
    lVar14 = local_c8;
    if (param_9 == 0) {
      *(undefined4 *)(local_c8 + 0x1d8) = 0;
      iVar7 = 0;
    }
    else {
      uVar8 = *(uint *)(param_9 + 0xc);
      *(uint *)(local_c8 + 0x1d8) = uVar8;
      if ((int)uVar8 < DAT_14c9647dc) {
        lVar13 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
      }
      else {
        lVar13 = 0;
      }
      iVar7 = *(int *)(lVar13 + 0x10);
      if (*(int *)(lVar13 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar12 = DAT_14c964868 + 1;
        bVar16 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar16) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar12);
        }
        LOCK();
        iVar7 = *(int *)(lVar13 + 0x10);
        bVar16 = iVar7 == 0;
        if (bVar16) {
          *(int *)(lVar13 + 0x10) = iVar12;
          iVar7 = 0;
        }
        UNLOCK();
        if (bVar16) {
          iVar7 = iVar12;
        }
      }
    }
    *(int *)(lVar14 + 0x1dc) = iVar7;
    if (((((*param_10 != 0.0) || (NAN(*param_10))) || (param_10[1] != 0.0)) ||
        ((NAN(param_10[1]) || (param_10[2] != 0.0)))) || (NAN(param_10[2]))) {
      dVar3 = *param_10;
      dVar4 = param_10[1];
      *(double *)(local_c8 + 0x1f0) = param_10[2];
      *(double *)(local_c8 + 0x1e0) = dVar3;
      *(double *)(local_c8 + 0x1e8) = dVar4;
      *(undefined1 *)(local_c8 + 0x1f8) = 1;
    }
    else if (*(char *)(local_c8 + 0x1f8) == '\x01') {
      *(undefined1 *)(local_c8 + 0x1f8) = 0;
    }
    if (param_11 <= 0.0) {
      if (*(char *)(local_c8 + 0x7c) == '\x01') {
        *(undefined1 *)(local_c8 + 0x7c) = 0;
      }
    }
    else {
      *(float *)(local_c8 + 0x78) = param_11;
      *(undefined1 *)(local_c8 + 0x7c) = 1;
    }
    local_a8 = (void *)((ulonglong)local_a8 & 0xffffffffffffff00);
    local_80[0] = 0;
    fVar17 = (float)FUN_140a8b8c6(param_12,&local_a8);
    FUN_1448173f8(local_80);
    if (((char)local_a8 == '\x03') && (local_98 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_98 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_98 + 0x10))();
      }
    }
    if ((fVar17 != 0.0) || (NAN(fVar17))) {
      *(float *)(local_c8 + 0x1c0) = fVar17;
      *(undefined1 *)(local_c8 + 0x1c4) = 1;
    }
    else if (*(char *)(local_c8 + 0x1c4) == '\x01') {
      *(undefined1 *)(local_c8 + 0x1c4) = 0;
    }
    if ((*(longlong *)(local_c8 + 0x290) != *param_13) ||
       (*(int *)(local_c8 + 0x298) != (int)param_13[1])) {
      *(longlong *)(local_c8 + 0x290) = *param_13;
      *(int *)(local_c8 + 0x298) = (int)param_13[1];
      *(undefined8 *)(local_c8 + 0x2a0) = 0;
    }
    if (param_14 <= 0.0) {
      if (*(char *)(local_c8 + 0x264) == '\x01') {
        *(undefined1 *)(local_c8 + 0x264) = 0;
      }
    }
    else {
      *(float *)(local_c8 + 0x260) = param_14;
      *(undefined1 *)(local_c8 + 0x264) = 1;
    }
    local_a8 = (void *)0x0;
    uStack_a0 = 0;
    local_d8 = (void *)0x0;
    uStack_d0 = 0;
    if (DAT_14cb5b388 == 0) {
      local_120 = &local_b0;
      local_b0 = FUN_141864c34;
      local_110 = FUN_14081d0ea;
      local_118 = &LAB_146431698;
      local_128 = &LAB_1486775cb;
      local_130 = &LAB_1464cee35;
      local_138 = &DAT_149e063b2;
      local_140 = 0;
      local_148 = 0x10000005;
      local_150 = 0x10;
      local_158 = CONCAT44(local_158._4_4_,0x3a20);
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
    }
    local_e0 = DAT_14cb5b388;
    if ((DAT_14cb5b388 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_140d0a558(param_1,&local_a8,&local_e0);
    local_b0 = (code *)&local_b8;
    FUN_147ed663a(&local_a8,&local_b0);
    pvVar5 = local_a8;
    if (param_15 == '\0') {
      lVar14 = (longlong)(int)uStack_a0;
      uStack_d0 = CONCAT44(uStack_d0._4_4_,(int)uStack_a0);
      if (lVar14 == 0) {
        uStack_d0 = uStack_a0 & 0xffffffff;
      }
      else {
        FUN_1457242e8(&local_d8,uStack_a0 & 0xffffffff,0);
        memcpy(local_d8,pvVar5,lVar14 << 3);
      }
    }
    else {
      lVar14 = (longlong)(int)uStack_a0;
      if (lVar14 != 0) {
        lVar13 = 0;
        do {
          plVar2 = *(longlong **)((longlong)pvVar5 + lVar13);
          lVar11 = (**(code **)(*plVar2 + 0x5d0))(plVar2);
          if (lVar11 != 0) {
            if (DAT_14cb61cd0 == 0) {
              local_b0 = FUN_141030f22;
              local_110 = FUN_14081d0ea;
              local_118 = &LAB_1463b31ae;
              local_128 = &LAB_1486dca4f;
              local_130 = &LAB_1464f50a6;
              local_138 = &DAT_149e063b2;
              local_140 = 0;
              local_148 = 0x10000004;
              local_150 = 8;
              local_158 = CONCAT44(local_158._4_4_,0xd70);
              local_120 = &local_b0;
              FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
            }
            uVar6 = uStack_d0;
            if ((*(int *)(DAT_14cb61cd0 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) == DAT_14cb61cd0 + 0x30)) {
              lVar11 = (longlong)(int)uStack_d0;
              uVar8 = (int)uStack_d0 + 1;
              uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar8);
              if (uStack_d0._4_4_ < uVar8) {
                FUN_1447d05f2(&local_d8,uVar6 & 0xffffffff);
              }
              *(longlong **)((longlong)local_d8 + lVar11 * 8) = plVar2;
            }
          }
          lVar13 = lVar13 + 8;
        } while (lVar14 * 8 != lVar13);
      }
    }
    pvVar5 = local_d8;
    local_f0 = local_c8;
    local_e8 = local_c0;
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
      UNLOCK();
    }
    local_100 = (void *)0x0;
    lVar14 = (longlong)(int)uStack_d0;
    local_f8 = (int)uStack_d0;
    if (lVar14 == 0) {
      local_f4 = 0;
    }
    else {
      FUN_1457242e8(&local_100,uStack_d0 & 0xffffffff,0);
      memcpy(local_100,pvVar5,lVar14 << 3);
    }
    local_158 = param_3;
    FUN_14881d9a2(local_b8,lVar9,&local_100,&local_f0);
    if (local_d8 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_a8 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_c0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar1 = (int *)((longlong)local_c0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_c0 + 0x10))(local_c0);
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d11ab2 FUN_143d11ab2 body=5044 status=ok
// SIG undefined FUN_143d11ab2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d11ab2(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  longlong lVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  longlong lVar15;
  double *pdVar16;
  longlong *plVar17;
  undefined8 uVar18;
  int iVar19;
  longlong *plVar20;
  longlong lVar21;
  uint uVar22;
  bool bVar23;
  float fVar24;
  float fVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined1 auVar50 [16];
  double dVar51;
  undefined1 auVar52 [16];
  undefined1 auStack_3c8 [32];
  ulonglong local_3a8;
  undefined *local_3a0;
  undefined1 *local_398;
  char local_381;
  double local_380;
  float local_378;
  float local_374;
  double local_370;
  float local_364;
  int local_360;
  float local_35c;
  double local_358;
  ulonglong local_350;
  int local_344;
  float local_340;
  float local_33c;
  undefined8 local_338;
  undefined8 uStack_330;
  double local_320;
  double local_318;
  double local_310;
  double local_308;
  double local_300;
  double local_2f8;
  double local_2f0;
  double local_2e8;
  double local_2e0;
  longlong *local_2d8;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2a8;
  double local_290;
  undefined8 local_288;
  double local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  undefined4 local_1b4;
  undefined4 local_188;
  longlong local_158;
  undefined8 uStack_150;
  longlong local_148;
  undefined8 uStack_140;
  double local_130;
  double local_128;
  double local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  double dStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  if ((*(longlong *)(param_1 + 0x13b0) != 0) && (*(longlong *)(param_1 + 0x1360) != 0)) {
    plVar17 = *(longlong **)(param_1 + 0x1598);
    uVar46 = 0;
    if ((longlong)*(int *)(param_1 + 0x15a0) != 0) {
      plVar20 = plVar17 + (longlong)*(int *)(param_1 + 0x15a0) * 4;
      do {
        lVar9 = plVar17[1];
        if ((longlong)(int)lVar9 != 0) {
          lVar15 = *plVar17;
          lVar21 = 0;
          do {
            plVar6 = *(longlong **)(lVar15 + lVar21);
            if (plVar6 != (longlong *)0x0) {
              (**(code **)(*plVar6 + 0x420))(plVar6,0);
            }
            lVar21 = lVar21 + 8;
          } while ((longlong)(int)lVar9 * 8 != lVar21);
        }
        *(undefined4 *)(plVar17 + 1) = 0;
        if (*(int *)((longlong)plVar17 + 0xc) != 0) {
          FUN_1474beb1a(plVar17);
        }
        plVar17 = plVar17 + 4;
      } while (plVar17 != plVar20);
      uVar46 = *(undefined4 *)(param_1 + 0x15a0);
      plVar17 = *(longlong **)(param_1 + 0x1598);
    }
    FUN_145d32a2e(plVar17,uVar46);
    *(undefined4 *)(param_1 + 0x15a0) = 0;
    if (*(int *)(param_1 + 0x15a4) != 0) {
      FUN_14882aed0((longlong *)(param_1 + 0x1598));
    }
    lVar9 = *(longlong *)(param_1 + 0x13b0);
    fVar25 = *(float *)(lVar9 + 0x254);
    fVar37 = *(float *)(lVar9 + 600);
    fVar24 = fVar25 + fVar37;
    if ((int)fVar24 != 0) {
      fVar40 = *(float *)(lVar9 + 0x274);
      fVar1 = *(float *)(lVar9 + 0x278);
      local_378 = *(float *)(lVar9 + 0x25c);
      fVar2 = *(float *)(lVar9 + 0x260);
      fVar3 = *(float *)(lVar9 + 0x26c);
      local_381 = *(char *)(lVar9 + 0x264);
      local_350 = (ulonglong)*(uint *)(lVar9 + 0x268);
      iVar5 = *(int *)(*(longlong *)(param_1 + 0x1360) + 400);
      iVar11 = (int)ABS((*(float *)(lVar9 + 0x248) - *(float *)(lVar9 + 0x24c)) -
                        (*(float *)(lVar9 + 0x248) + *(float *)(lVar9 + 0x24c))) / (int)fVar24;
      local_360 = *(int *)(lVar9 + 0x240);
      if (iVar11 < *(int *)(lVar9 + 0x240)) {
        local_360 = iVar11;
      }
      dVar26 = *(double *)(lVar9 + 0x230);
      lVar15 = *(longlong *)((longlong)dVar26 + 0x660);
      local_380 = (double)CONCAT44(local_380._4_4_,*(undefined4 *)(lVar9 + 0x23c));
      local_370 = (double)CONCAT44(local_370._4_4_,*(undefined4 *)(lVar9 + 0x270));
      local_364 = fVar24;
      iVar11 = local_360;
      if ((DAT_14c950c29 == '\x01') && (lVar15 != 0)) {
        lVar21 = lVar15;
        FUN_1456cec3c();
        iVar11 = (int)lVar21;
        dVar26 = *(double *)(lVar9 + 0x230);
      }
      dVar4 = *(double *)(lVar15 + 0x200);
      dVar31 = *(double *)(lVar15 + 0x218);
      dVar30 = *(double *)((longlong)dVar26 + 0x1c8);
      lVar15 = *(longlong *)(param_1 + 0x1c8);
      if (lVar15 == 0) {
        uVar46 = SUB84(DAT_14c846500,0);
        uVar47 = (undefined4)((ulonglong)DAT_14c846500 >> 0x20);
      }
      else {
        dVar27 = *(double *)(lVar15 + 0x240);
        dVar28 = *(double *)(lVar15 + 0x248);
        dVar29 = *(double *)(lVar15 + 0x250);
        dVar51 = *(double *)(lVar15 + 600);
        pdVar16 = *(double **)(lVar15 + 0x228);
        local_258 = dVar27;
        dStack_250 = dVar28;
        local_248 = dVar29;
        dStack_240 = dVar51;
        if (pdVar16 == (double *)0x0) {
          iVar11 = 0x40;
          pdVar16 = (double *)FUN_14001cc68();
          dVar26 = DAT_14c8463d8;
          *pdVar16 = DAT_14c8463d0;
          pdVar16[1] = dVar26;
          dVar26 = DAT_14c8463e8;
          pdVar16[2] = DAT_14c8463e0;
          pdVar16[3] = dVar26;
          dVar26 = DAT_14c846500;
          pdVar16[4] = DAT_14c8464f8;
          pdVar16[5] = dVar26;
          dVar26 = DAT_14c846508;
          pdVar16[6] = DAT_14c846508;
          *(double **)(lVar15 + 0x228) = pdVar16;
        }
        auVar32._8_4_ = (int)-(ulonglong)(dVar28 != pdVar16[1]);
        auVar32._0_8_ = -(ulonglong)(dVar27 != *pdVar16);
        auVar32._12_4_ = (int)(-(ulonglong)(dVar28 != pdVar16[1]) >> 0x20);
        iVar12 = movmskpd(SUB84(dVar26,0),auVar32);
        auVar39._8_4_ = (int)-(ulonglong)(dVar51 != pdVar16[3]);
        auVar39._0_8_ = -(ulonglong)(dVar29 != pdVar16[2]);
        auVar39._12_4_ = (int)(-(ulonglong)(dVar51 != pdVar16[3]) >> 0x20);
        uVar14 = movmskpd(iVar11,auVar39);
        if ((uVar14 & 0x3fffffff) != 0 || iVar12 != 0) {
          pdVar16[2] = local_248;
          pdVar16[3] = dStack_240;
          *pdVar16 = local_258;
          pdVar16[1] = dStack_250;
          FUN_1448052ee();
          pdVar16[6] = local_108;
          pdVar16[4] = local_118;
          pdVar16[5] = uStack_110;
        }
        uVar46 = SUB84(pdVar16[5],0);
        uVar47 = (undefined4)((ulonglong)pdVar16[5] >> 0x20);
      }
      dVar26 = (double)FUN_144719204();
      dVar27 = (double)FUN_144719204(CONCAT44(uVar47,uVar46));
      sin(dVar26 * 0.017453292519943295);
      cos(dVar26 * 0.017453292519943295);
      sin(dVar27 * 0.017453292519943295);
      cos(dVar27 * 0.017453292519943295);
      if (0 < local_360) {
        local_340 = local_378 - fVar2;
        local_378 = local_378 + fVar2;
        fVar24 = (float)(((dVar4 + dVar31) - (dVar4 - dVar31)) * dVar30);
        local_2c8 = DAT_14c846508;
        uVar14 = *(uint *)(param_1 + 0x1594);
        local_2f8 = (double)(fVar40 - fVar1);
        local_2f0 = (double)(fVar40 + fVar1) - local_2f8;
        local_2e8 = (double)(fVar25 - fVar37);
        local_2e0 = (double)local_364 - local_2e8;
        dVar26 = (double)fVar24 * 0.95;
        dVar4 = (double)local_380._0_4_;
        local_310 = (double)local_340;
        local_308 = (double)(fVar3 - local_370._0_4_) - local_310;
        local_320 = (double)local_378;
        local_318 = (double)(fVar3 + local_370._0_4_) - local_320;
        local_35c = (float)((int)local_350 + 1);
        iVar11 = 0;
        local_2d0 = DAT_14c8464f8;
        dVar31 = DAT_14c8464f8;
        local_2d8 = (longlong *)(param_1 + 0x1598);
        do {
          local_148 = 0;
          uStack_140 = 0;
          local_158 = 0;
          uStack_150 = 0;
          uVar22 = uVar14 * -0x4b9b4d07 + 0x9d6f2492;
          dVar30 = (double)(float)((double)((float)(uVar22 >> 9 | 0x3f800000) + -1.0) * local_2e0 +
                                   local_2e8 +
                                  (double)((float)iVar11 * local_364 + *(float *)(lVar9 + 0x250)));
          local_344 = iVar11;
          dVar27 = (double)FUN_144719204(dVar31);
          dVar28 = (double)FUN_144719204();
          sin(dVar27 * 0.017453292519943295);
          dVar27 = cos(dVar27 * 0.017453292519943295);
          dVar29 = sin(dVar28 * 0.017453292519943295);
          dVar28 = cos(dVar28 * 0.017453292519943295);
          if (0 < *(int *)(lVar9 + 0x244)) {
            local_33c = (float)((double)((float)(uVar14 * 0xbb38435 + 0x3619636b >> 9 | 0x3f800000)
                                        + -1.0) * local_2f0 + local_2f8);
            auVar38._0_8_ = dVar28 * dVar27 * (double)*(float *)(lVar9 + 0x238);
            auVar38._8_8_ = extraout_XMM0_Qb;
            local_380 = dVar29 * dVar27 * (double)*(float *)(lVar9 + 0x238);
            bVar23 = false;
            local_338 = 0;
            uStack_330 = 0;
            iVar11 = 0;
            fVar25 = 0.0;
            do {
              fVar25 = fVar25 + fVar24;
              if ((bVar23) || (local_33c < fVar25 && iVar11 != 0)) break;
              local_374 = fVar25;
              dVar27 = (double)FUN_144719204(dVar31,0x4076800000000000);
              local_358 = dVar30;
              dVar30 = (double)FUN_144719204();
              sin(dVar27 * 0.017453292519943295);
              dVar28 = cos(dVar27 * 0.017453292519943295);
              dVar27 = sin(dVar30 * 0.017453292519943295);
              dVar30 = cos(dVar30 * 0.017453292519943295);
              dVar27 = dVar27 * dVar28 * dVar26 + local_380;
              dVar28 = dVar30 * dVar28 * dVar26 + auVar38._0_8_;
              local_370 = auVar38._0_8_;
              lVar15 = FUN_1447210f0(param_1);
              memset(&local_258,0,0x100);
              dVar30 = local_358;
              local_188 = 0xffffffff;
              local_258 = (double)CONCAT44(0x3f800000,(undefined4)local_258);
              local_1b4 = 0xffffffff;
              uVar46 = (undefined4)((ulonglong)local_358 >> 0x20);
              if (lVar15 == 0 || iVar5 == 2) {
                bVar23 = false;
              }
              else {
                lVar21 = *(longlong *)(param_1 + 0x1c8);
                if (lVar21 == 0) {
                  pdVar16 = (double *)&DAT_14c8464e0;
                  local_108 = DAT_14c8464f0;
                }
                else {
                  pdVar16 = (double *)(lVar21 + 0x260);
                  local_108 = *(double *)(lVar21 + 0x270);
                }
                local_108 = local_108 + dVar4;
                uStack_110 = pdVar16[1] + dVar27;
                local_118 = *pdVar16 + dVar28;
                if (lVar21 == 0) {
                  pdVar16 = (double *)&DAT_14c8464e0;
                  local_120 = DAT_14c8464f0;
                }
                else {
                  pdVar16 = (double *)(lVar21 + 0x260);
                  local_120 = *(double *)(lVar21 + 0x270);
                }
                local_120 = local_120 + dVar4;
                local_128 = pdVar16[1] + local_380;
                local_130 = *pdVar16 + local_370;
                local_398 = &DAT_14cad0f10;
                local_3a0 = &DAT_14cad0f68;
                local_3a8 = local_3a8 & 0xffffffff00000000;
                cVar10 = FUN_1400b50cc(lVar15,&local_258,&local_130,&local_118);
                if (cVar10 != '\0') {
                  if (iVar5 == 1) {
                    bVar23 = true;
                    goto LAB_143d123d0;
                  }
                  if (iVar5 == 0) break;
                }
                bVar23 = false;
              }
LAB_143d123d0:
              uVar47 = SUB84(dVar30,0);
              local_3a0 = (undefined *)0x0;
              local_3a8 = local_3a8 & 0xffffffffffffff00;
              plVar17 = (longlong *)FUN_141797230(param_1,0,0x41,0);
              if (plVar17 == (longlong *)0x0) {
                iVar12 = *(int *)(lVar9 + 0x244);
                uVar48 = SUB84(local_370,0);
                uVar49 = (undefined4)((ulonglong)local_370 >> 0x20);
                uVar13 = SUB84(local_380,0);
                uVar45 = (undefined4)((ulonglong)local_380 >> 0x20);
              }
              else {
                lVar15 = *(longlong *)(*(longlong *)(lVar9 + 0x230) + 0x660);
                if ((DAT_14c950c29 == '\x01') && (lVar15 != 0)) {
                  FUN_1456cec3c(lVar15);
                }
                local_300 = dVar27;
                local_2c0 = dVar28;
                (**(code **)(*plVar17 + 0xa78))(plVar17,lVar15);
                FUN_140486fc4(plVar17,*(undefined8 *)(param_1 + 0x1c8),0);
                FUN_1449e3cec(plVar17,0,1);
                uVar13 = (**(code **)(**(longlong **)(lVar9 + 0x230) + 0x4e8))();
                FUN_14045627c(plVar17,uVar13,1);
                *(byte *)((longlong)plVar17 + 0x2d6) = *(byte *)((longlong)plVar17 + 0x2d6) & 0xfd;
                if ((*(byte *)((longlong)plVar17 + 0x2d3) & 8) == 0) {
                  *(byte *)((longlong)plVar17 + 0x2d3) = *(byte *)((longlong)plVar17 + 0x2d3) | 8;
                  (**(code **)(*plVar17 + 0x958))(plVar17);
                }
                *(undefined1 *)((longlong)plVar17 + 0x1fb) = 2;
                FUN_14057a3b2(plVar17,0,0);
                uVar13 = (**(code **)(**(longlong **)(lVar9 + 0x230) + 0x570))();
                (**(code **)(*plVar17 + 0x720))(plVar17,uVar13);
                uVar18 = (**(code **)(**(longlong **)(lVar9 + 0x230) + 0x558))();
                (**(code **)(*plVar17 + 0x948))(plVar17,uVar18);
                uVar13 = (**(code **)(**(longlong **)(lVar9 + 0x230) + 0x580))();
                (**(code **)(*plVar17 + 0x730))(plVar17,uVar13);
                lVar15 = *(longlong *)(lVar9 + 0x230);
                local_268 = *(undefined8 *)(lVar15 + 0x1d8);
                local_278 = *(undefined8 *)(lVar15 + 0x1c8);
                uStack_270 = *(undefined8 *)(lVar15 + 0x1d0);
                (**(code **)(*plVar17 + 0x478))(plVar17,&local_278);
                auVar32 = *(undefined1 (*) [16])(plVar17 + 0x36);
                dVar27 = auVar32._0_8_;
                dVar28 = auVar32._8_8_;
                dVar30 = (double)plVar17[0x38];
                pdVar16 = (double *)plVar17[0x46];
                if (pdVar16 == (double *)0x0) {
                  pdVar16 = (double *)FUN_14001cc68(0x40,0x10);
                  dVar29 = DAT_14c8463d8;
                  *pdVar16 = DAT_14c8463d0;
                  pdVar16[1] = dVar29;
                  dVar29 = DAT_14c8463e8;
                  pdVar16[2] = DAT_14c8463e0;
                  pdVar16[3] = dVar29;
                  dVar29 = DAT_14c846500;
                  pdVar16[4] = DAT_14c8464f8;
                  pdVar16[5] = dVar29;
                  pdVar16[6] = DAT_14c846508;
                  plVar17[0x46] = (longlong)pdVar16;
                }
                auVar39 = _DAT_1499387d0;
                if ((((pdVar16[4] != dVar27) || (NAN(pdVar16[4]) || NAN(dVar27))) ||
                    (pdVar16[5] != dVar28)) || (NAN(pdVar16[5]) || NAN(dVar28))) {
LAB_143d125a0:
                  auVar41._8_8_ = 0;
                  auVar41._0_8_ = dVar30;
                  dVar31 = (double)DAT_1499387d0;
                  dVar29 = DAT_1499387d0._8_8_;
                  auVar32 = divpd(auVar32,_DAT_1499387d0);
                  auVar38 = divpd(auVar41,_DAT_1499387d0);
                  auVar32 = roundpd(auVar32,auVar32,3);
                  auVar38 = roundpd(auVar38,auVar38,3);
                  dVar27 = dVar27 - auVar32._0_8_ * dVar31;
                  dVar28 = dVar28 - auVar32._8_8_ * dVar29;
                  auVar42._0_8_ = dVar30 - auVar38._0_8_ * dVar31;
                  auVar42._8_8_ = 0.0 - auVar38._8_8_ * dVar29;
                  auVar50._0_8_ = dVar27 + dVar31;
                  auVar50._8_8_ = dVar28 + dVar29;
                  auVar44._0_8_ = auVar42._0_8_ + dVar31;
                  auVar44._8_8_ = auVar42._8_8_ + dVar29;
                  auVar33._8_8_ = -(ulonglong)(0.0 <= dVar28);
                  auVar33._0_8_ = -(ulonglong)(0.0 <= dVar27);
                  auVar8._8_4_ = SUB84(dVar28,0);
                  auVar8._0_8_ = dVar27;
                  auVar8._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
                  auVar38 = blendvpd(auVar50,auVar8,auVar33);
                  auVar34._8_8_ = -(ulonglong)(0.0 <= auVar42._8_8_);
                  auVar34._0_8_ = -(ulonglong)(0.0 <= auVar42._0_8_);
                  auVar32 = blendvpd(auVar44,auVar42,auVar34);
                  auVar43._0_8_ = auVar38._0_8_ + -360.0;
                  auVar43._8_8_ = auVar38._8_8_ + -360.0;
                  dVar30 = auVar32._8_8_ + 0.0;
                  auVar35._8_8_ = -(ulonglong)(180.0 < auVar38._8_8_);
                  auVar35._0_8_ = -(ulonglong)(180.0 < auVar38._0_8_);
                  auVar38 = blendvpd(auVar38,auVar43,auVar35);
                  auVar36._8_8_ = -(ulonglong)(180.0 < auVar32._8_8_);
                  auVar36._0_8_ = -(ulonglong)(180.0 < auVar32._0_8_);
                  auVar7._8_4_ = SUB84(dVar30,0);
                  auVar7._0_8_ = auVar32._0_8_ + -360.0;
                  auVar7._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
                  auVar32 = blendvpd(auVar32,auVar7,auVar36);
                  *(undefined1 (*) [16])(pdVar16 + 4) = auVar38;
                  dVar30 = auVar32._0_8_;
                  pdVar16[6] = dVar30;
                  auVar52._8_8_ = 0;
                  auVar52._0_8_ = dVar30;
                  auVar32 = divpd(auVar38,auVar39);
                  auVar39 = divpd(auVar52,auVar39);
                  auVar32 = roundpd(auVar32,auVar32,3);
                  auVar39 = roundpd(auVar39,auVar39,3);
                  dVar27 = (auVar38._0_8_ - auVar32._0_8_ * dVar31) * 0.008726646259971648;
                  dVar28 = (auVar38._8_8_ - auVar32._8_8_ * dVar29) * 0.008726646259971648;
                  dVar51 = (dVar30 - auVar39._0_8_ * dVar31) * 0.008726646259971648;
                  dVar29 = (0.0 - auVar39._8_8_ * dVar29) * 0.008726646259971648;
                  local_2a8 = sin(dVar27);
                  dVar31 = sin(dVar28);
                  local_2b8 = sin(dVar51);
                  sin(dVar29);
                  dVar30 = cos(dVar27);
                  dVar27 = cos(dVar28);
                  dVar28 = cos(dVar51);
                  cos(dVar29);
                  uVar47 = SUB84(local_358,0);
                  uVar46 = (undefined4)((ulonglong)local_358 >> 0x20);
                  *pdVar16 = local_2a8 * dVar31 * dVar28 - dVar30 * dVar27 * local_2b8;
                  pdVar16[1] = -(local_2a8 * dVar27 * dVar28) - dVar30 * dVar31 * local_2b8;
                  pdVar16[2] = -(dVar27 * local_2a8 * local_2b8) + dVar31 * dVar30 * dVar28;
                  pdVar16[3] = dVar31 * local_2a8 * local_2b8 + dVar27 * dVar30 * dVar28;
                  dVar31 = local_2d0;
                }
                else if ((pdVar16[6] != dVar30) || (NAN(pdVar16[6]) || NAN(dVar30)))
                goto LAB_143d125a0;
                local_118 = *pdVar16;
                uStack_110 = pdVar16[1];
                local_108 = pdVar16[2];
                dStack_100 = pdVar16[3];
                local_130 = local_370;
                local_128 = local_380;
                local_3a0 = (undefined *)((ulonglong)local_3a0 & 0xffffffffffffff00);
                local_3a8 = 0;
                local_120 = dVar4;
                FUN_144927ad4(plVar17,&local_130,&local_118);
                local_288 = CONCAT44(uVar46,uVar47);
                local_280 = local_2c8;
                local_3a8 = local_3a8 & 0xffffffffffffff00;
                local_290 = dVar31;
                FUN_14020f75c(plVar17,&local_290,0);
                if (DAT_14c950c29 == '\x01') {
                  FUN_1456cec3c(plVar17);
                }
                lVar15 = (longlong)(int)uStack_150;
                uVar14 = (int)uStack_150 + 1;
                uStack_150 = CONCAT44(uStack_150._4_4_,uVar14);
                uVar48 = SUB84(local_2c0,0);
                uVar49 = (undefined4)((ulonglong)local_2c0 >> 0x20);
                if (uStack_150._4_4_ < uVar14) {
                  FUN_1474beb7a(&local_158);
                }
                *(longlong **)(local_158 + lVar15 * 8) = plVar17;
                if (DAT_14c950c29 == '\x01') {
                  FUN_1456cec3c(plVar17);
                }
                fVar25 = 5.0;
                if (*(longlong *)(param_1 + 0x1360) != 0) {
                  (**(code **)(*plVar17 + 0x820))(plVar17,&local_118,0);
                  if ((int)local_118 == 3) {
                    dVar30 = (double)(float)uStack_110;
                  }
                  else if ((int)local_118 == 2) {
                    dVar30 = (double)local_118._4_4_;
                  }
                  else {
                    dVar30 = DAT_14c8464f0;
                    if ((int)local_118 == 1) {
                      dVar30 = (double)uStack_110._4_4_;
                    }
                  }
                  fVar25 = (float)(((double)*(float *)(*(longlong *)(param_1 + 0x1360) + 0x168) -
                                   dVar30) + 5.0);
                }
                lVar15 = (longlong)(int)uStack_140;
                uVar14 = (int)uStack_140 + 1;
                uStack_140 = CONCAT44(uStack_140._4_4_,uVar14);
                if (uStack_140._4_4_ < uVar14) {
                  FUN_1403e3958(&local_148);
                }
                *(double *)(local_148 + lVar15 * 0x18) = local_370 + 0.0;
                *(double *)(local_148 + 8 + lVar15 * 0x18) = local_380 + 0.0;
                *(double *)(local_148 + 0x10 + lVar15 * 0x18) = (double)fVar25 + dVar4;
                iVar12 = *(int *)(lVar9 + 0x244);
                if (iVar11 == iVar12) break;
                uVar13 = SUB84(local_300,0);
                uVar45 = (undefined4)((ulonglong)local_300 >> 0x20);
                if (local_381 == '\0') {
                  iVar19 = uVar22 * 0xbb38435;
                  uVar22 = uVar22 * -0x4b9b4d07 + 0x9d6f2492;
                  fVar37 = (float)((double)((float)(iVar19 + 0x3619636bU >> 9 | 0x3f800000) + -1.0)
                                   * local_308 + local_310);
                  uVar14 = 0;
                  dVar30 = (double)((float)(uVar22 >> 9 | 0x3f800000) + -1.0) * local_318 +
                           local_320;
                  local_338._4_4_ = (uint)((ulonglong)dVar30 >> 0x20);
                  fVar25 = (float)dVar30;
                  uStack_330._0_4_ = 0;
                  uStack_330._4_4_ = 0;
                  if ((0.0 <= local_340) || (0.0 <= (float)local_338)) {
                    if ((local_378 <= 0.0) || ((float)local_338 <= 0.0)) {
                      uVar22 = uVar22 * 0xbb38435 + 0x3619636b;
                      fVar40 = (float)(uVar22 >> 9 | 0x3f800000) + -1.0;
                      if ((int)(fVar40 + fVar40) != 1) goto LAB_143d12c0b;
                    }
                    else if (((int)local_350 < 0) ||
                            (uVar22 = uVar22 * 0xbb38435 + 0x3619636b,
                            (int)(((float)(uVar22 >> 9 | 0x3f800000) + -1.0) * local_35c) == 0))
                    goto LAB_143d12c11;
                  }
                  else if ((-1 < (int)local_350) &&
                          (uVar22 = uVar22 * 0xbb38435 + 0x3619636b,
                          (int)(((float)(uVar22 >> 9 | 0x3f800000) + -1.0) * local_35c) != 0)) {
LAB_143d12c0b:
                    fVar37 = fVar25;
                    uVar14 = local_338._4_4_;
                  }
                  local_338._4_4_ = uVar14;
                  fVar25 = fVar37;
                  uStack_330._4_4_ = 0;
                  uStack_330._0_4_ = 0;
                }
                else {
                  if (iVar11 == 0) {
                    uVar14 = uVar22 * 0x1c3c718d + 0xf50d3da5;
                    fVar25 = (float)(uVar14 >> 9 | 0x3f800000) + -1.0;
                    if ((int)(fVar25 + fVar25) == 1) {
                      dVar30 = (double)((float)(uVar22 * 0xbb38435 + 0x3619636b >> 9 | 0x3f800000) +
                                       -1.0) * local_308 + local_310;
                    }
                    else {
                      dVar30 = (double)((float)(uVar22 * -0x4b9b4d07 + 0x9d6f2492 >> 9 | 0x3f800000)
                                       + -1.0) * local_318 + local_320;
                    }
                    local_338 = CONCAT44((int)((ulonglong)dVar30 >> 0x20),(float)dVar30);
                    uStack_330 = 0;
                    dVar30 = (double)CONCAT44(uVar46,uVar47) + (double)(float)dVar30 * 0.5;
                    uVar22 = uVar14;
                    goto LAB_143d12c28;
                  }
                  fVar25 = -(float)local_338;
                  local_338._4_4_ = local_338._4_4_ ^ 0x80000000;
                  uStack_330._0_4_ = (uint)uStack_330 ^ 0x80000000;
                  uStack_330._4_4_ = uStack_330._4_4_ ^ 0x80000000;
                }
LAB_143d12c11:
                dVar30 = (double)CONCAT44(uVar46,uVar47) + (double)fVar25;
                local_338 = CONCAT44(local_338._4_4_,fVar25);
              }
LAB_143d12c28:
              iVar11 = iVar11 + 1;
              local_380 = (double)CONCAT44(uVar45,uVar13);
              auVar38._4_4_ = uVar49;
              auVar38._0_4_ = uVar48;
              auVar38._8_8_ = 0;
              fVar25 = local_374;
            } while (iVar11 < iVar12);
          }
          uVar14 = uVar22;
          plVar17 = local_2d8;
          iVar11 = *(int *)(param_1 + 0x15a0);
          *(uint *)(param_1 + 0x15a0) = iVar11 + 1U;
          if (*(uint *)(param_1 + 0x15a4) < iVar11 + 1U) {
            FUN_14882af00(local_2d8,iVar11);
          }
          FUN_14868f152((longlong)iVar11 * 0x20 + *plVar17);
          if (local_148 != 0) {
            FUN_1400020a8();
          }
          if (local_158 != 0) {
            FUN_1400020a8();
          }
          iVar11 = local_344 + 1;
        } while (iVar11 != local_360);
      }
      lVar9 = *(longlong *)(param_1 + 0x1c8);
      if ((((lVar9 != 0) && ((*(uint *)(lVar9 + 8) >> 0x1e & 1) == 0)) &&
          ((*(byte *)(lVar9 + 0x9c) & 1) != 0)) && ((longlong)*(int *)(param_1 + 0x15a0) != 0)) {
        plVar17 = *(longlong **)(param_1 + 0x1598);
        plVar20 = plVar17 + (longlong)*(int *)(param_1 + 0x15a0) * 4;
        do {
          lVar9 = plVar17[1];
          if ((longlong)(int)lVar9 != 0) {
            lVar15 = *plVar17;
            lVar21 = 0;
            do {
              FUN_140b506a4(*(undefined8 *)(lVar15 + lVar21));
              lVar21 = lVar21 + 8;
            } while ((longlong)(int)lVar9 * 8 != lVar21);
          }
          plVar17 = plVar17 + 4;
        } while (plVar17 != plVar20);
      }
      FUN_148826300(param_1);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_3c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d12e6c FUN_143d12e6c body=1122 status=ok
// SIG undefined FUN_143d12e6c(void)

void FUN_143d12e6c(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  uint local_50;
  uint uStack_4c;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar2 = (**(code **)(*param_1 + 0x28))();
  if (cVar2 == '\0') goto LAB_143d131f8;
  uStack_4c = 0;
  if (param_3 == 0) {
    local_50 = 0;
    uVar3 = 0;
  }
  else {
    local_50 = *(uint *)(param_3 + 0xc);
    if ((int)local_50 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((local_50 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_50 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    uVar3 = *(uint *)(lVar11 + 0x10);
    if (*(uint *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      uVar9 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar9);
      }
      LOCK();
      uVar3 = *(uint *)(lVar11 + 0x10);
      bVar13 = uVar3 == 0;
      if (bVar13) {
        *(uint *)(lVar11 + 0x10) = uVar9;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar13) {
        uVar3 = uVar9;
      }
    }
  }
  plVar6 = param_1 + 0xd;
  plVar12 = (longlong *)param_1[0x1d];
  if ((longlong *)param_1[0x1d] == (longlong *)0x0) {
    plVar12 = plVar6;
  }
  uStack_4c = uVar3;
  uStack_48 = param_4;
  if ((longlong)(int)param_1[0x1e] == 0) {
    iVar10 = 0;
  }
  else {
    lVar11 = (longlong)(int)param_1[0x1e] << 4;
    do {
      if ((plVar12[1] == uStack_48) && (cVar2 = FUN_14038330a(plVar12,&local_50), cVar2 != '\0'))
      goto LAB_143d131f8;
      plVar12 = plVar12 + 2;
      lVar11 = lVar11 + -0x10;
    } while (lVar11 != 0);
    iVar10 = (int)param_1[0x1e];
  }
  *(uint *)(param_1 + 0x1e) = iVar10 + 1U;
  if (*(uint *)((longlong)param_1 + 0xf4) < iVar10 + 1U) {
    FUN_14882af86(plVar6,iVar10);
  }
  if ((longlong *)param_1[0x1d] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[0x1d];
  }
  puVar1 = (uint *)(plVar6 + (longlong)iVar10 * 2);
  *puVar1 = local_50;
  puVar1[1] = uStack_4c;
  puVar1[2] = (uint)uStack_48;
  puVar1[3] = uStack_48._4_4_;
  if (param_2 != (longlong *)0x0) {
    uVar4 = FUN_14027972a();
    lVar11 = (**(code **)(*param_2 + 0x288))(param_2,uVar4);
    if (lVar11 != 0) {
      uVar4 = FUN_14027972a();
      lVar5 = FUN_144718840(lVar11,uVar4);
      if (lVar11 != lVar5 && lVar5 != 0) goto LAB_143d131f8;
    }
  }
  lVar11 = param_1[9];
  plVar6 = (longlong *)FUN_1410c028c(param_2);
  if (plVar6 == (longlong *)0x0) {
LAB_143d13092:
    lVar5 = *(longlong *)(lVar11 + 0x50);
    if ((((lVar5 == 0) || (lVar7 = FUN_1410c02f4(), lVar7 == 0)) ||
        (*(int *)(lVar5 + 0x38) < *(int *)(lVar7 + 0x38))) ||
       (((*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
          lVar7 + 0x30 || (lVar5 = *(longlong *)(lVar11 + 0x50), lVar5 == 0)) ||
        ((lVar7 = FUN_1410c02f4(), lVar7 == 0 ||
         ((*(int *)(lVar5 + 0x38) < *(int *)(lVar7 + 0x38) ||
          (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
           lVar7 + 0x30)))))))) {
      lVar5 = FUN_1410c02f4();
    }
    uVar3 = *(uint *)(param_2 + 1);
    FUN_148827848(&local_58);
    plVar6 = (longlong *)FUN_148827776(param_2,lVar5,local_58,uVar3 & 0x61 | 0x100008);
    if (plVar6 == (longlong *)0x0) goto LAB_143d131f8;
    lVar5 = *(longlong *)(lVar11 + 0x38);
    if (plVar6[0x24] != lVar5) {
      plVar6[0x26] = 0;
    }
    plVar6[0x24] = lVar5;
    if (plVar6[0x25] != *(longlong *)(lVar11 + 0x40)) {
      plVar6[0x26] = 0;
    }
    uVar4 = FUN_14477b664();
    lVar5 = FUN_14477b664(uVar4);
    plVar6[0x25] = lVar5;
    plVar6[0x26] = *(longlong *)(lVar11 + 0x48);
    FUN_14010ee68(param_2,plVar6);
    if ((((*(byte *)((longlong)plVar6 + 0x9c) & 1) == 0) && ((*(uint *)(param_2 + 1) & 0x20) == 0))
       && (lVar5 = FUN_1447210f0(param_2), lVar5 != 0)) {
      FUN_140b506a4(plVar6);
    }
  }
  else {
    lVar5 = *(longlong *)(lVar11 + 0x50);
    if ((((lVar5 != 0) && (lVar7 = FUN_1410c02f4(), lVar7 != 0)) &&
        (*(int *)(lVar7 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
       ((*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
         lVar7 + 0x30 && (lVar5 = *(longlong *)(lVar11 + 0x50), lVar5 != 0)))) {
      lVar7 = plVar6[2];
      lVar8 = FUN_1410c02f4();
      if ((lVar8 == 0) ||
         ((*(int *)(lVar5 + 0x38) < *(int *)(lVar8 + 0x38) ||
          (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
           lVar8 + 0x30)))) {
        lVar5 = 0;
      }
      else {
        lVar5 = *(longlong *)(lVar11 + 0x50);
      }
      if (lVar7 != lVar5) {
        FUN_144757f48(plVar6,0x40);
        FUN_140675170(param_2,plVar6);
        (**(code **)(*plVar6 + 0x420))(plVar6,0);
        FUN_1405691ed(plVar6,0x35);
        goto LAB_143d13092;
      }
    }
  }
  FUN_14472eae2(plVar6,0x40);
  lVar5 = *(longlong *)(lVar11 + 0x38);
  if (plVar6[0x24] != lVar5) {
    plVar6[0x26] = 0;
  }
  plVar6[0x24] = lVar5;
  if (plVar6[0x25] != *(longlong *)(lVar11 + 0x40)) {
    plVar6[0x26] = 0;
  }
  uVar4 = FUN_14477b664();
  lVar5 = FUN_14477b664(uVar4);
  plVar6[0x25] = lVar5;
  plVar6[0x26] = *(longlong *)(lVar11 + 0x48);
  FUN_141200de6(param_2,plVar6);
LAB_143d131f8:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d132d0 FUN_143d132d0 body=375 status=ok
// SIG undefined FUN_143d132d0(void)

void FUN_143d132d0(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auStack_98 [36];
  int local_74;
  int local_70;
  int local_6c;
  undefined1 local_68 [24];
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((((*(int *)(param_1 + 0xa8) != 0) && (*(int *)(param_1 + 0xac) != 0)) &&
      (dVar1 = param_2[3], 0.0 < dVar1)) && (dVar2 = param_2[4], 0.0 < dVar2)) {
    local_50 = 0;
    auVar9._0_8_ = ((*param_2 - dVar1) - *(double *)(param_1 + 0x78)) / *(double *)(param_1 + 0x98);
    auVar9._8_8_ = 0;
    auVar9 = roundpd(auVar9,auVar9,1);
    auVar7._0_8_ = ((dVar1 + *param_2) - *(double *)(param_1 + 0x78)) / *(double *)(param_1 + 0x98);
    auVar7._8_8_ = 0;
    auVar7 = roundpd(auVar7,auVar7,1);
    local_74 = (int)auVar7._0_8_;
    if ((int)auVar9._0_8_ <= local_74) {
      auVar8._0_8_ = ((param_2[1] - dVar2) - *(double *)(param_1 + 0x80)) /
                     *(double *)(param_1 + 0xa0);
      auVar8._8_8_ = 0;
      auVar8 = roundpd(auVar8,auVar8,1);
      auVar6._0_8_ = ((dVar2 + param_2[1]) - *(double *)(param_1 + 0x80)) /
                     *(double *)(param_1 + 0xa0);
      auVar6._8_8_ = 0;
      auVar7 = roundpd(auVar6,auVar6,1);
      iVar3 = (int)auVar9._0_8_;
      do {
        iVar4 = (int)auVar8._0_8_;
        if ((int)auVar8._0_8_ <= (int)auVar7._0_8_) {
          do {
            local_70 = iVar3;
            local_6c = iVar4;
            FUN_143d13dc0(param_1,&local_70,0xff,local_68);
            iVar4 = iVar4 + 1;
          } while ((int)auVar7._0_8_ + 1 != iVar4);
        }
        bVar5 = iVar3 != local_74;
        iVar3 = iVar3 + 1;
      } while (bVar5);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d13448 FUN_143d13448 body=1323 status=ok
// SIG undefined FUN_143d13448(void)

void FUN_143d13448(longlong *param_1,float param_2,double *param_3,byte param_4)

{
  uint uVar1;
  double dVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  float fVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  undefined1 auStack_168 [36];
  float local_144;
  int local_140;
  float local_13c;
  int local_138;
  int local_134;
  ulonglong local_130;
  ulonglong local_128;
  int local_120;
  int local_11c;
  uint local_118;
  int local_114;
  undefined1 local_110 [24];
  char local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if ((*(char *)((longlong)param_1 + 0x54) == '\x01') && (*(char *)(param_3 + 3) == '\x01')) {
    fVar20 = *(float *)(param_1 + 0x20);
    *(float *)(param_1 + 0x20) = fVar20 + param_2;
    if (*(float *)(param_1 + 0xc) <= fVar20 + param_2) {
      *(undefined4 *)(param_1 + 0x20) = 0;
      if ((char)param_1[0x1f] == '\x01') {
        dVar12 = (*param_3 - (double)param_1[0x1c]) * (*param_3 - (double)param_1[0x1c]) +
                 (param_3[1] - (double)param_1[0x1d]) * (param_3[1] - (double)param_1[0x1d]);
      }
      else {
        dVar12 = 8796093022208.0;
      }
      if ((((double)*(float *)(param_1 + 0xd) <= dVar12) && (iVar8 = (int)param_1[0x15], iVar8 != 0)
          ) && (uVar1 = *(uint *)((longlong)param_1 + 0xac), uVar1 != 0)) {
        local_144 = *(float *)(param_1 + (ulonglong)param_4 + 0x18);
        if ((double *)(param_1 + 0x1c) != param_3) {
          param_1[0x1e] = (longlong)param_3[2];
          dVar12 = param_3[1];
          param_1[0x1c] = (longlong)*param_3;
          param_1[0x1d] = (longlong)dVar12;
          *(undefined1 *)(param_1 + 0x1f) = 1;
        }
        local_f8 = '\0';
        dVar12 = param_3[1];
        dVar13 = (double)param_1[0x10];
        dVar16 = (double)param_1[0x14];
        auVar17._0_8_ = (dVar12 - dVar13) / dVar16;
        auVar17._8_8_ = 0;
        auVar18 = roundpd(auVar17,auVar17,1);
        iVar10 = (int)auVar18._0_8_;
        auVar19._8_8_ = 0;
        auVar19._0_8_ = (*param_3 - (double)param_1[0xf]) / (double)param_1[0x13];
        auVar18 = roundpd(auVar19,auVar19,1);
        local_118 = (uint)auVar18._0_8_;
        local_130 = (ulonglong)local_118;
        local_13c = *(float *)(param_1 + 0x1a) * local_144;
        dVar2 = (double)local_144;
        auVar18._0_8_ = ((*param_3 + dVar2) - (double)param_1[0xf]) / (double)param_1[0x13];
        auVar18._8_8_ = 0;
        auVar18 = roundpd(auVar18,auVar18,1);
        iVar6 = (int)auVar18._0_8_ - local_118;
        if (iVar8 < iVar6) {
          iVar6 = iVar8;
        }
        local_114 = iVar10;
        FUN_143d13dc0(param_1,&local_118,CONCAT71((uint7)(uint3)(local_118 >> 8),0xff));
        local_140 = iVar6;
        if (-1 < iVar6) {
          auVar14._8_8_ = 0;
          auVar14._0_8_ = ((dVar12 + dVar2) - dVar13) / dVar16;
          auVar18 = roundpd(auVar14,auVar14,1);
          uVar4 = (int)auVar18._0_8_ - iVar10;
          if ((int)uVar1 < (int)uVar4) {
            uVar4 = uVar1;
          }
          local_128 = (ulonglong)uVar4;
          local_134 = -uVar4;
          dVar12 = (double)local_13c;
          fVar20 = local_144 - local_13c;
          local_138 = uVar4 * 2 + 1;
          iVar8 = -iVar6;
          do {
            if (-1 < (int)local_128) {
              iVar9 = iVar8 + (int)local_130;
              iVar6 = local_134;
              iVar5 = local_138;
              do {
                if (iVar6 != 0 || iVar8 != 0) {
                  local_11c = iVar10 + iVar6;
                  dVar16 = (((double)local_11c + 0.5) * (double)param_1[0x14] +
                           (double)param_1[0x10]) - param_3[1];
                  dVar13 = ((double)param_1[0x13] * ((double)iVar9 + 0.5) + (double)param_1[0xf]) -
                           *param_3;
                  dVar13 = SQRT(dVar13 * dVar13 + dVar16 * dVar16);
                  local_120 = iVar9;
                  if (dVar13 < dVar2) {
                    fVar15 = 1.0;
                    if (dVar12 < dVar13) {
                      if (ABS(fVar20) <= 1e-08) {
                        fVar15 = (float)(-(uint)(local_144 <= (float)dVar13) & 0x3f800000);
                      }
                      else {
                        fVar15 = ((float)dVar13 - local_13c) / fVar20;
                      }
                      if (1.0 <= fVar15) {
                        fVar15 = 1.0;
                      }
                      if (fVar15 <= 0.0) {
                        fVar15 = 0.0;
                      }
                      fVar15 = 1.0 - fVar15;
                    }
                    if (1.0 <= fVar15) {
                      fVar15 = 1.0;
                    }
                    if (fVar15 <= 0.0) {
                      fVar15 = 0.0;
                    }
                    iVar7 = (int)(fVar15 * 255.0 + 0.0);
                    if (0xfe < iVar7) {
                      iVar7 = 0xff;
                    }
                    if (iVar7 < 1) {
                      iVar7 = 0;
                    }
                    FUN_143d13dc0(param_1,&local_120,iVar7,local_110);
                  }
                }
                iVar6 = iVar6 + 1;
                iVar5 = iVar5 + -1;
              } while (iVar5 != 0);
            }
            bVar11 = iVar8 != local_140;
            iVar8 = iVar8 + 1;
          } while (bVar11);
        }
        if ((local_f8 != '\0') && (*(char *)((longlong)param_1 + 0x109) == '\0')) {
          *(undefined1 *)(param_1 + 0x21) = 1;
          if (*(int *)((longlong)param_1 + 0x11c) != -1) {
            if (param_1[0x22] != 0) {
              FUN_1400020a8();
            }
            param_1[0x22] = 0;
            param_1[0x23] = -0x100000000;
          }
          uVar3 = (**(code **)(*param_1 + 0x2c0))(param_1);
          FUN_141495eae(uVar3,local_110);
        }
      }
    }
    if (((char)param_1[0x21] == '\x01') &&
       (param_2 = param_2 + *(float *)((longlong)param_1 + 0x104),
       *(float *)((longlong)param_1 + 0x104) = param_2,
       *(float *)((longlong)param_1 + 100) <= param_2)) {
      *(undefined4 *)((longlong)param_1 + 0x104) = 0;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_168);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d139e8 FUN_143d139e8 body=977 status=ok
// SIG undefined FUN_143d139e8(void)

undefined8 * FUN_143d139e8(longlong param_1,undefined8 *param_2)

{
  void *pvVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  undefined8 *local_b0;
  longlong local_a8;
  double local_a0;
  double local_98;
  undefined8 local_90;
  longlong local_88 [3];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(int *)(param_1 + 0x11c) != -1) {
    *param_2 = 0;
    iVar11 = *(int *)(param_1 + 0x118);
    pvVar1 = *(void **)(param_1 + 0x110);
    *(int *)(param_2 + 1) = iVar11;
    if ((longlong)iVar11 != 0) {
      FUN_14882b19c(param_2,iVar11);
      memcpy((void *)*param_2,pvVar1,(longlong)iVar11 << 3);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_d8);
    }
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    goto LAB_143d13c93;
  }
  local_b8 = (longlong *)(param_1 + 0x110);
  local_88[0] = 0;
  local_88[1] = 0;
  lVar8 = *(longlong *)(param_1 + 0x70);
  local_b0 = param_2;
  if (lVar8 != 0) {
    lVar6 = *(longlong *)(lVar8 + 0xa0);
    if (lVar6 == 0) {
      uVar5 = FUN_145733170();
      lVar6 = FUN_14477b664(uVar5);
      *(longlong *)(lVar8 + 0xa0) = lVar6;
    }
    if (*(longlong *)(lVar8 + 0xa8) == 0) {
      if ((lVar6 != 0) && (*(longlong *)(lVar8 + 0x98) != 0)) {
        plVar2 = *(longlong **)(lVar6 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
          *(undefined8 *)(lVar8 + 0xa8) = 0;
        }
        else {
          uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar6 = FUN_144aff482(uVar5,(longlong *)(lVar8 + 0x98));
          *(longlong *)(lVar8 + 0xa8) = lVar6;
          if (lVar6 != 0) goto LAB_143d13a9b;
        }
      }
    }
    else {
LAB_143d13a9b:
      iVar11 = *(int *)(param_1 + 0xa8);
      if (0 < iVar11) {
        iVar4 = *(int *)(param_1 + 0xac);
        uVar10 = 0;
        do {
          if (0 < iVar4) {
            iVar11 = 0;
            do {
              if ((int)uVar10 < *(int *)(param_1 + 0xa8)) {
                lVar8 = (ulonglong)(uint)(*(int *)(param_1 + 0xa8) * iVar11) + (ulonglong)uVar10;
                iVar7 = (int)lVar8;
                if (((-1 < iVar7) && (iVar7 < *(int *)(param_1 + 0xb8))) &&
                   (0x80 < *(byte *)(*(longlong *)(param_1 + 0xb0) + lVar8))) {
                  local_a0 = *(double *)(param_1 + 0x98) * ((double)(int)uVar10 + 0.5) +
                             *(double *)(param_1 + 0x78);
                  local_98 = ((double)iVar11 + 0.5) * *(double *)(param_1 + 0xa0) +
                             *(double *)(param_1 + 0x80);
                  local_90 = 0;
                  lVar8 = *(longlong *)(param_1 + 0x70);
                  lVar6 = *(longlong *)(lVar8 + 0xa0);
                  if (lVar6 == 0) {
                    uVar5 = FUN_145733170();
                    lVar6 = FUN_14477b664(uVar5);
                    *(longlong *)(lVar8 + 0xa0) = lVar6;
                  }
                  lVar9 = *(longlong *)(lVar8 + 0xa8);
                  if (lVar9 == 0) {
                    if (lVar6 == 0) {
                      lVar9 = 0;
                    }
                    else {
                      lVar9 = 0;
                      if (*(longlong *)(lVar8 + 0x98) != 0) {
                        plVar2 = *(longlong **)(lVar6 + 0xb8);
                        if ((plVar2 == (longlong *)0x0) ||
                           (cVar3 = (**(code **)(*plVar2 + 0x108))(), cVar3 == '\0')) {
                          lVar9 = 0;
                        }
                        else {
                          uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
                          lVar9 = FUN_144aff482(uVar5,(longlong *)(lVar8 + 0x98));
                        }
                        *(longlong *)(lVar8 + 0xa8) = lVar9;
                      }
                    }
                  }
                  local_a8 = FUN_14027a7b0(lVar9,&local_a0);
                  if (local_a8 != 0) {
                    FUN_141427f78(local_88,&local_a8);
                  }
                  iVar4 = *(int *)(param_1 + 0xac);
                }
              }
              iVar11 = iVar11 + 1;
            } while (iVar11 < iVar4);
            iVar11 = *(int *)(param_1 + 0xa8);
          }
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < iVar11);
      }
    }
  }
  if (local_88 != local_b8) {
    FUN_14882b1f6(local_b8,local_88);
  }
  param_2 = local_b0;
  *local_b0 = 0;
  iVar11 = *(int *)(param_1 + 0x118);
  pvVar1 = *(void **)(param_1 + 0x110);
  *(int *)(local_b0 + 1) = iVar11;
  if ((longlong)iVar11 == 0) {
    *(undefined4 *)((longlong)local_b0 + 0xc) = 0;
  }
  else {
    FUN_14882b19c(local_b0,iVar11);
    memcpy((void *)*param_2,pvVar1,(longlong)iVar11 << 3);
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
LAB_143d13c93:
  if ((local_70 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 143d13dc0 FUN_143d13dc0 body=191 status=ok
// SIG undefined FUN_143d13dc0(void)

void FUN_143d13dc0(longlong param_1,uint *param_2,byte param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar2 = *param_2;
  if ((((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(param_1 + 0xa8))) &&
      (uVar1 = param_2[1], -1 < (int)uVar1)) &&
     ((((int)uVar1 < *(int *)(param_1 + 0xac) &&
       (lVar3 = (ulonglong)(uVar1 * *(int *)(param_1 + 0xa8)) + (ulonglong)uVar2,
       (int)lVar3 < *(int *)(param_1 + 0xb8))) &&
      (lVar4 = *(longlong *)(param_1 + 0xb0), *(byte *)(lVar4 + lVar3) < param_3)))) {
    if ((char)param_4[6] == '\0') {
      param_4[0] = 0;
      param_4[1] = 0;
      param_4[2] = 0;
      param_4[3] = 0;
      param_4[4] = 0;
      param_4[5] = 0;
      *(undefined1 *)(param_4 + 6) = 1;
      *(undefined8 *)param_4 = *(undefined8 *)param_2;
      *(undefined8 *)(param_4 + 2) = *(undefined8 *)param_2;
      lVar4 = *(longlong *)(param_1 + 0xb0);
    }
    *(byte *)(lVar4 + lVar3) = param_3;
    uVar2 = *param_2;
    if ((int)*param_4 < (int)*param_2) {
      uVar2 = *param_4;
    }
    *param_4 = uVar2;
    uVar2 = param_2[1];
    if ((int)param_4[1] < (int)param_2[1]) {
      uVar2 = param_4[1];
    }
    param_4[1] = uVar2;
    uVar2 = param_4[2];
    if ((int)param_4[2] < (int)*param_2) {
      uVar2 = *param_2;
    }
    param_4[2] = uVar2;
    uVar2 = param_4[3];
    if ((int)param_4[3] < (int)param_2[1]) {
      uVar2 = param_2[1];
    }
    param_4[3] = uVar2;
  }
  return;
}



// FUNCTION 143d13eb8 FUN_143d13eb8 body=69 status=ok
// SIG undefined FUN_143d13eb8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d13eb8(void)

{
  _DAT_14cb77ec8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d13efa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb77ed0,1);
  return;
}



// FUNCTION 143d13efe FUN_143d13efe body=566 status=ok
// SIG undefined FUN_143d13efe(void)

void FUN_143d13efe(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  int *piVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  
  lVar6 = FUN_140279ac4(param_2);
  if (((lVar6 == 0) || (lVar6 = FUN_140279ac4(param_2), *(longlong *)(lVar6 + 0x228) == 0)) &&
     (cVar3 = FUN_1402799c0(param_1), cVar3 != '\0')) {
    FUN_140279ac4(param_2);
    iVar4 = FUN_1406ba864(param_1,param_2,0);
    if (iVar4 != param_3) {
      uVar5 = FUN_14027a0c2(param_2);
      piVar7 = (int *)FUN_140ebd788(param_1 + 0x1d0,uVar5,param_2);
      *piVar7 = param_3;
      *(undefined1 *)(param_1 + 0x1b8) = 1;
      if (*(int *)(param_1 + 0x120) == 2) {
        plVar8 = (longlong *)FUN_140caa0c0(param_1);
        if (plVar8 != (longlong *)0x0) {
          uVar9 = (**(code **)(*plVar8 + 0x10))(plVar8);
          uVar10 = FUN_140279ac4(param_2);
          FUN_143d1d39a(uVar9,uVar10,param_3);
          if (((((iVar4 < param_3) && (*(char *)(param_1 + 0x310) == '\0')) &&
               ((plVar8 = *(longlong **)(param_1 + 0x138), plVar8 != (longlong *)0x0 &&
                ((*(int *)(param_1 + 0x134) != 0 &&
                 (uVar1 = *(uint *)(param_1 + 0x130), -1 < (int)uVar1)))))) &&
              ((int)uVar1 < DAT_14c9647dc)) &&
             (((lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar6 != 0 &&
               (*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x134))) &&
              ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
            (**(code **)(*plVar8 + 0x38))(plVar8,param_2,param_3,param_4);
          }
        }
      }
      else if (*(char *)(param_1 + 0x310) == '\0') {
        FUN_143d14134(param_1,param_2,param_3,param_4);
      }
      if (((param_3 == 2) && (lVar6 = FUN_1411a568a(param_2), lVar6 != 0)) &&
         (*(char *)(lVar6 + 0x97) == '\x01')) {
        FUN_14882b3b8(param_1 + 0xf0,param_2);
      }
      if ((longlong)*(int *)(param_1 + 0x150) != 0) {
        plVar11 = *(longlong **)(param_1 + 0x148);
        plVar8 = plVar11 + *(int *)(param_1 + 0x150);
        do {
          lVar6 = *plVar11;
          if ((lVar6 != 0) && (iVar4 = *(int *)(lVar6 + 0x40), (longlong)iVar4 != 0)) {
            lVar6 = *(longlong *)(lVar6 + 0x38);
            lVar12 = 0;
            do {
              plVar2 = *(longlong **)(lVar6 + lVar12);
              if (plVar2 != (longlong *)0x0) {
                (**(code **)(*plVar2 + 0x2c8))();
              }
              lVar12 = lVar12 + 0x18;
            } while ((longlong)iVar4 * 0x18 != lVar12);
          }
          plVar11 = plVar11 + 1;
        } while (plVar11 != plVar8);
      }
    }
  }
  return;
}



// FUNCTION 143d14134 FUN_143d14134 body=706 status=ok
// SIG undefined FUN_143d14134(void)

/* WARNING: Removing unreachable block (ram,0x000143d142e8) */

void FUN_143d14134(longlong param_1,undefined8 *param_2,int param_3,longlong param_4)

{
  longlong *plVar1;
  uint uVar2;
  void *_Src;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  int *piVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  undefined8 local_60;
  int local_58;
  uint uStack_54;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = *param_2;
  uVar6 = FUN_14477b664(param_2[1]);
  local_80 = FUN_14477b664(uVar6);
  local_78 = param_2[2];
  local_70 = (void *)0x0;
  uVar2 = *(uint *)(param_2 + 4);
  _Src = (void *)param_2[3];
  local_68 = CONCAT44(local_68._4_4_,uVar2);
  if ((longlong)(int)uVar2 == 0) {
    local_68 = (ulonglong)uVar2;
  }
  else {
    FUN_1446dd670(&local_70,uVar2,0);
    memcpy(local_70,_Src,(longlong)(int)uVar2 * 2);
  }
  local_60 = param_2[5];
  local_50 = 0;
  local_58 = param_3;
  if (param_4 == 0) {
    uStack_54 = 0;
    iVar5 = 0;
  }
  else {
    uStack_54 = *(uint *)(param_4 + 0xc);
    if ((int)uStack_54 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uStack_54 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uStack_54 >> 0x10) * 8);
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
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar5 = *(int *)(lVar9 + 0x10);
      bVar11 = iVar5 == 0;
      if (bVar11) {
        *(int *)(lVar9 + 0x10) = iVar8;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar11) {
        iVar5 = iVar8;
      }
    }
  }
  iVar8 = *(int *)(param_1 + 0x1b0);
  *(uint *)(param_1 + 0x1b0) = iVar8 + 1U;
  local_50 = iVar5;
  if (*(uint *)(param_1 + 0x1b4) < iVar8 + 1U) {
    FUN_14654b4d4((longlong *)(param_1 + 0x1a8),iVar8);
  }
  lVar9 = *(longlong *)(param_1 + 0x1a8);
  lVar10 = (longlong)iVar8 * 0x40;
  *(undefined8 *)(lVar9 + 0x10 + lVar10) = 0;
  *(undefined8 *)(lVar9 + lVar10) = 0;
  ((undefined8 *)(lVar9 + lVar10))[1] = 0;
  *(undefined8 *)(lVar9 + lVar10) = local_88;
  uVar6 = FUN_14477b664(local_80);
  uVar6 = FUN_14477b664(uVar6);
  *(undefined8 *)(lVar9 + 8 + lVar10) = uVar6;
  *(undefined8 *)(lVar9 + 0x10 + lVar10) = local_78;
  *(undefined8 *)(lVar9 + 0x18 + lVar10) = 0;
  *(void **)(lVar9 + 0x18 + lVar10) = local_70;
  *(undefined4 *)(lVar9 + 0x20 + lVar10) = (undefined4)local_68;
  *(undefined4 *)(lVar9 + 0x24 + lVar10) = local_68._4_4_;
  *(undefined8 *)(lVar9 + 0x28 + lVar10) = local_60;
  *(int *)(lVar9 + 0x38 + lVar10) = local_50;
  *(ulonglong *)(lVar9 + 0x30 + lVar10) = CONCAT44(uStack_54,local_58);
  local_68 = 0;
  local_70 = (void *)0x0;
  cVar3 = FUN_1402799c0(param_1);
  if (cVar3 == '\0') {
    plVar1 = (longlong *)(param_1 + 0x270);
    uVar4 = FUN_14027a0c2(param_2);
    iVar5 = FUN_140279a58(plVar1,uVar4,param_2);
    if (iVar5 != -1) {
      uVar4 = FUN_14027a0c2(param_2);
      iVar5 = FUN_140279a58(plVar1,uVar4,param_2);
      if (iVar5 == -1) {
        lVar9 = 0;
      }
      else {
        lVar9 = (longlong)iVar5 * 0x40 + *plVar1;
      }
      if (param_3 <= *(int *)(lVar9 + 0x30)) goto LAB_143d14373;
    }
    uVar4 = FUN_14027a0c2(param_2);
    piVar7 = (int *)FUN_140ebd788(plVar1,uVar4,param_2);
    *piVar7 = param_3;
    *(undefined1 *)(param_1 + 0x1b8) = 1;
  }
LAB_143d14373:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d143f8 FUN_143d143f8 body=1966 status=ok
// SIG undefined FUN_143d143f8(void)

ulonglong FUN_143d143f8(longlong param_1,longlong param_2,uint param_3,int param_4,
                       undefined8 param_5,longlong *param_6)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined8 unaff_RBP;
  undefined7 uVar12;
  int iVar13;
  longlong lVar14;
  undefined4 *puVar15;
  longlong lVar16;
  undefined4 *puVar17;
  longlong lVar18;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  byte local_a1;
  undefined8 local_a0;
  byte *local_98;
  longlong *plStack_90;
  undefined4 local_7c;
  byte *local_78;
  longlong *plStack_70;
  undefined1 local_64 [36];
  
  local_64._4_8_ = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((param_3 != 1) ||
     (((param_2 != 0 && (*(char *)(param_2 + 0xd68) == '\x01')) &&
      (cVar5 = (**(code **)(*DAT_14cb8a878 + 0xa8))(), cVar5 != '\0')))) {
    if (param_4 == 1) {
      lVar7 = 0x38a;
    }
    else {
      if (param_4 != 2) goto LAB_143d149b6;
      lVar7 = 0x388;
    }
    if (*(char *)((ulonglong)param_3 + lVar7 + param_1) == '\x01') {
      uVar12 = (undefined7)((ulonglong)unaff_RBP >> 8);
      if (param_3 == 0) {
        uVar8 = CONCAT71(uVar12,1);
LAB_143d144c7:
        if ((param_2 == 0) || (bVar6 = 1, *(char *)(param_2 + 0xd68) == '\x01')) {
          bVar6 = (**(code **)(*DAT_14cb8a878 + 0xa8))();
          bVar6 = bVar6 ^ 1;
        }
      }
      else {
        if ((param_2 == 0) || (uVar8 = CONCAT71(uVar12,1), *(char *)(param_2 + 0xd68) == '\x01')) {
          uVar8 = (**(code **)(*DAT_14cb8a878 + 0xa8))();
          uVar8 = uVar8 & 0xffffffff ^ 1;
        }
        bVar6 = 1;
        if (param_3 != 1) goto LAB_143d144c7;
      }
      if ((*(longlong **)(param_1 + 0x138) == (longlong *)0x0) ||
         (iVar13 = *(int *)(param_1 + 0x134), iVar13 == 0)) {
        if (param_4 == 1) goto LAB_143d145ac;
LAB_143d14995:
        uVar8 = CONCAT71((int7)(uVar8 >> 8),1);
        if (*(int *)(param_1 + 0x120) != 2) goto LAB_143d149b8;
        cVar5 = FUN_1402799c0(param_1);
        iVar13 = 2;
        if (cVar5 == '\0') goto LAB_143d149b6;
      }
      else {
        if (param_4 != 1) goto LAB_143d14995;
        if (iVar13 == 0) {
LAB_143d145ac:
          uVar9 = 0;
        }
        else {
          uVar3 = *(uint *)(param_1 + 0x130);
          uVar9 = 0;
          if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
            lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
            if ((lVar7 == 0) ||
               ((*(int *)(lVar7 + 0x10) != iVar13 || ((*(uint *)(lVar7 + 8) & 0x10200000) != 0))))
            goto LAB_143d145ac;
            uVar9 = (**(code **)(**(longlong **)(param_1 + 0x138) + 0x10))();
          }
        }
        plVar10 = (longlong *)FUN_14041a931(uVar9);
        if ((char)uVar8 == '\x01' && plVar10 != (longlong *)0x0) {
          uVar9 = (**(code **)(*plVar10 + 0x10))(plVar10);
          if ((*(longlong **)(param_1 + 0x138) == (longlong *)0x0) ||
             (*(int *)(param_1 + 0x134) == 0)) {
LAB_143d14635:
            uVar11 = 0;
          }
          else {
            uVar3 = *(uint *)(param_1 + 0x130);
            uVar11 = 0;
            if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
              lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
              if ((((lVar7 == 0) || (*(int *)(lVar7 + 0x10) != *(int *)(param_1 + 0x134))) ||
                  ((*(uint *)(lVar7 + 8) & 0x10200000) != 0)) ||
                 (lVar7 = (**(code **)(**(longlong **)(param_1 + 0x138) + 0x10))(), lVar7 == 0))
              goto LAB_143d14635;
              uVar11 = *(undefined8 *)(lVar7 + 0x398);
            }
          }
          FUN_14187f712(uVar9,uVar11,param_5,param_6);
        }
        if (bVar6 == 1 && *(longlong *)(param_1 + 0x140) != 0) {
          FUN_143d1a39e(*(longlong *)(param_1 + 0x140),param_5,param_6);
        }
        if ((char)uVar8 != '\0') {
          local_98 = (byte *)0x0;
          plStack_90 = (longlong *)0x0;
          FUN_14009b010(&local_98,3,0);
          if ((local_98 != (byte *)0x0) && ((~*local_98 & 3) == 0)) {
            lVar7 = *(longlong *)(local_98 + 8);
            plStack_70 = (longlong *)local_64;
            local_64._0_4_ = 1;
            local_78 = &DAT_14cb78188;
            FUN_14049fede(lVar7 + 0x18,&local_a0,&local_78,0);
            lVar7 = *(longlong *)
                     (*(longlong *)(lVar7 + 0x18) + 0x28 + (longlong)(int)local_a0 * 0x40);
            if (lVar7 != 0) {
              FUN_1401269d0(lVar7,param_1 + 0x458);
            }
          }
          if (*(longlong *)(param_1 + 0x460) == 0) {
            local_a0 = 0;
          }
          else {
            puVar17 = *(undefined4 **)(*(longlong *)(param_1 + 0x460) + 8);
            puVar15 = &DAT_14c9485f0;
            if (puVar17 != (undefined4 *)0x0) {
              puVar15 = puVar17;
            }
            if (DAT_14c947fe0 == 0) {
              lVar7 = FUN_14001cc68(0x140,0x10);
              FUN_1456b2032(lVar7);
              DAT_14c947fe0 = lVar7;
            }
            FUN_140045924(DAT_14c947fe0,&local_a0,puVar15,1);
          }
          if ((local_98 != (byte *)0x0) && ((~*local_98 & 3) == 0)) {
            lVar7 = *(longlong *)(local_98 + 8);
            plStack_70 = (longlong *)&local_7c;
            local_7c = 1;
            local_78 = &DAT_14cb781b0;
            FUN_14049fede(lVar7 + 0x18,local_64,&local_78,0);
            lVar7 = *(longlong *)
                     (*(longlong *)(lVar7 + 0x18) + 0x28 + (longlong)(int)local_64._0_4_ * 0x40);
            if (lVar7 != 0) {
              FUN_1401269d0(lVar7,&local_a0);
            }
          }
          local_78 = (byte *)0x0;
          plStack_70 = (longlong *)0x0;
          local_a1 = bVar6;
          FUN_14009b010(&local_78,2,0);
          if ((longlong)*(int *)(param_1 + 0x470) != 0) {
            lVar7 = *(longlong *)(param_1 + 0x468);
            lVar14 = (longlong)*(int *)(param_1 + 0x470) << 3;
            do {
              if ((local_78 != (byte *)0x0) && ((*local_78 & 3) == 2)) {
                plVar10 = *(longlong **)(local_78 + 8);
                iVar13 = (int)plVar10[2];
                *(uint *)(plVar10 + 2) = iVar13 + 1U;
                if (*(uint *)((longlong)plVar10 + 0x14) < iVar13 + 1U) {
                  FUN_14000961e(plVar10,iVar13);
                }
                lVar18 = *plVar10;
                lVar16 = (longlong)iVar13 * 0x10;
                *(undefined8 *)(lVar18 + lVar16) = 0;
                ((undefined8 *)(lVar18 + lVar16))[1] = 0;
                FUN_14009b010(lVar18 + lVar16,1,0);
                if (*(longlong *)(lVar18 + lVar16) != 0) {
                  FUN_1401269d0(*(longlong *)(lVar18 + lVar16),lVar7);
                }
              }
              lVar7 = lVar7 + 8;
              lVar14 = lVar14 + -8;
            } while (lVar14 != 0);
          }
          local_b8 = 0;
          FUN_14014191c(local_98,&DAT_14cb781d8,&local_78,0);
          plVar10 = plStack_70;
          if (plStack_70 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_70 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_70)(plStack_70);
              LOCK();
              piVar2 = (int *)((longlong)plVar10 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar10 + 0x10))(plVar10);
              }
            }
          }
          local_78 = (byte *)0x0;
          plStack_70 = (longlong *)0x0;
          FUN_14009b010(&local_78,2,0);
          iVar13 = *(int *)(param_1 + 0x480);
          if ((longlong)iVar13 != 0) {
            uVar8 = *(ulonglong *)(param_1 + 0x478);
            lVar7 = 0;
            do {
              if (*(longlong *)(uVar8 + lVar7) != 0) {
                puVar17 = *(undefined4 **)(*(longlong *)(uVar8 + lVar7) + 8);
                if (puVar17 == (undefined4 *)0x0) {
                  puVar17 = &DAT_14c9485f0;
                }
                if (DAT_14c947fe0 == 0) {
                  lVar14 = FUN_14001cc68(0x140,0x10);
                  FUN_1456b2032(lVar14);
                  DAT_14c947fe0 = lVar14;
                }
                FUN_140045924(DAT_14c947fe0,&local_a0,puVar17,1);
                if ((local_78 != (byte *)0x0) && ((*local_78 & 3) == 2)) {
                  plVar10 = *(longlong **)(local_78 + 8);
                  iVar4 = (int)plVar10[2];
                  *(uint *)(plVar10 + 2) = iVar4 + 1U;
                  if (*(uint *)((longlong)plVar10 + 0x14) < iVar4 + 1U) {
                    FUN_14000961e(plVar10,iVar4);
                  }
                  lVar14 = *plVar10;
                  lVar18 = (longlong)iVar4 * 0x10;
                  *(undefined8 *)(lVar14 + lVar18) = 0;
                  ((undefined8 *)(lVar14 + lVar18))[1] = 0;
                  FUN_14009b010(lVar14 + lVar18,1,0);
                  if (*(longlong *)(lVar14 + lVar18) != 0) {
                    FUN_1401269d0(*(longlong *)(lVar14 + lVar18),&local_a0);
                  }
                }
              }
              lVar7 = lVar7 + 8;
            } while ((longlong)iVar13 * 8 != lVar7);
          }
          local_b8 = 0;
          FUN_14014191c(local_98,&DAT_14cb78200,&local_78,0);
          plVar10 = plStack_70;
          if (plStack_70 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_70 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_70)(plStack_70);
              LOCK();
              piVar2 = (int *)((longlong)plVar10 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar10 + 0x10))(plVar10);
              }
            }
          }
          bVar6 = local_a1;
          if (*param_6 != 0) {
            local_b8 = 0;
            FUN_14014191c(*param_6,&DAT_14cb78160,&local_98,0);
          }
          plVar10 = plStack_90;
          if (plStack_90 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_90 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_90)(plStack_90);
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
        iVar13 = 1;
        if ((DAT_14c7638d8 & bVar6) == 1) {
          local_78 = &DAT_14cb78948;
          plStack_70 = (longlong *)&DAT_14cb789e8;
          FUN_143d1b176(&local_78,param_6,param_1 + 0x358,param_1 + 0x220);
        }
      }
      uVar8 = CONCAT71((int7)(uVar8 >> 8),1);
      if (bVar6 == 1 && *(int *)(param_1 + 0x120) == iVar13) {
        local_78 = (byte *)&DAT_14cb78920;
        plStack_70 = (longlong *)&DAT_14cb789c0;
        FUN_143d1b176(&local_78,param_6,param_1 + 0x358,param_1 + 0x1d0);
      }
      goto LAB_143d149b8;
    }
  }
LAB_143d149b6:
  uVar8 = 0;
LAB_143d149b8:
  if ((local_64._4_8_ ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 143d14ba8 FUN_143d14ba8 body=1191 status=ok
// SIG undefined FUN_143d14ba8(void)

void FUN_143d14ba8(longlong param_1,longlong param_2,uint param_3,int param_4,undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined4 *local_58;
  undefined4 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_3 == 1) {
    if (((param_2 == 0) || (*(char *)(param_2 + 0xd68) != '\x01')) ||
       (cVar4 = (**(code **)(*DAT_14cb8a878 + 0xa8))(), cVar4 == '\0')) goto LAB_143d15002;
LAB_143d14c12:
    bVar5 = 1;
    if (*(char *)(param_2 + 0xd68) == '\x01') {
LAB_143d14c1f:
      bVar5 = (**(code **)(*DAT_14cb8a878 + 0xa8))();
      bVar5 = bVar5 ^ 1;
    }
    bVar6 = 1;
    if (param_3 != 1) goto LAB_143d14c43;
  }
  else {
    if (param_3 != 0) {
      if (param_2 != 0) goto LAB_143d14c12;
      goto LAB_143d14c1f;
    }
    bVar5 = 1;
LAB_143d14c43:
    if ((param_2 == 0) || (bVar6 = 1, *(char *)(param_2 + 0xd68) == '\x01')) {
      bVar6 = (**(code **)(*DAT_14cb8a878 + 0xa8))();
      bVar6 = bVar6 ^ 1;
    }
  }
  if (param_4 == 2) {
    if (*(int *)(param_1 + 0x120) != 2) goto LAB_143d14f5a;
    cVar4 = FUN_1402799c0(param_1);
    if (cVar4 != '\0') goto LAB_143d14e45;
    if (*(int *)(param_1 + 0x1d8) != *(int *)(param_1 + 0x204)) {
      FUN_143d18ca6(param_1 + 0x1d0);
      FUN_14187f1c8(param_1 + 0x1d0);
    }
    *(undefined1 *)(param_1 + 0x1b8) = 1;
    lVar7 = 0x388;
    if ((longlong)*(int *)(param_1 + 0x150) != 0) {
      plVar13 = *(longlong **)(param_1 + 0x148);
      plVar8 = plVar13 + *(int *)(param_1 + 0x150);
      do {
        lVar12 = *plVar13;
        if ((lVar12 != 0) && (iVar2 = *(int *)(lVar12 + 0x40), (longlong)iVar2 != 0)) {
          lVar12 = *(longlong *)(lVar12 + 0x38);
          lVar11 = 0;
          do {
            plVar3 = *(longlong **)(lVar12 + lVar11);
            if (plVar3 != (longlong *)0x0) {
              (**(code **)(*plVar3 + 0x2c8))();
            }
            lVar11 = lVar11 + 0x18;
          } while ((longlong)iVar2 * 0x18 != lVar11);
        }
        plVar13 = plVar13 + 1;
      } while (plVar13 != plVar8);
    }
  }
  else {
    if (param_4 != 1) goto LAB_143d15002;
    if ((*(longlong **)(param_1 + 0x138) == (longlong *)0x0) || (*(int *)(param_1 + 0x134) == 0)) {
LAB_143d14d28:
      uVar9 = 0;
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x130);
      uVar9 = 0;
      if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
        lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        if (((lVar7 == 0) || (*(int *)(lVar7 + 0x10) != *(int *)(param_1 + 0x134))) ||
           ((*(uint *)(lVar7 + 8) & 0x10200000) != 0)) goto LAB_143d14d28;
        uVar9 = (**(code **)(**(longlong **)(param_1 + 0x138) + 0x10))();
      }
    }
    plVar8 = (longlong *)FUN_14041a931(uVar9);
    if (bVar5 == 1 && plVar8 != (longlong *)0x0) {
      uVar9 = (**(code **)(*plVar8 + 0x10))(plVar8);
      if ((*(longlong **)(param_1 + 0x138) == (longlong *)0x0) || (*(int *)(param_1 + 0x134) == 0))
      {
LAB_143d14daa:
        uVar10 = 0;
      }
      else {
        uVar1 = *(uint *)(param_1 + 0x130);
        uVar10 = 0;
        if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
          lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          if ((((lVar7 == 0) || (*(int *)(lVar7 + 0x10) != *(int *)(param_1 + 0x134))) ||
              ((*(uint *)(lVar7 + 8) & 0x10200000) != 0)) ||
             (lVar7 = (**(code **)(**(longlong **)(param_1 + 0x138) + 0x10))(), lVar7 == 0))
          goto LAB_143d14daa;
          uVar10 = *(undefined8 *)(lVar7 + 0x398);
        }
      }
      FUN_143d1ce00(uVar9,uVar10,param_5);
    }
    if (bVar6 == 1 && *(longlong *)(param_1 + 0x140) != 0) {
      FUN_143d1a8a8(*(longlong *)(param_1 + 0x140),param_5);
    }
    if (bVar5 != 0) {
      FUN_1459b32e6(param_1 + 0x410,param_5);
    }
    if ((DAT_14c7638d8 & bVar6) == 1) {
      local_58 = (undefined4 *)&DAT_14cb78948;
      local_50 = (undefined4 *)&DAT_14cb789e8;
      FUN_143d1bb00(&local_58,param_5,param_1 + 0x358,param_1 + 0x220);
    }
LAB_143d14e45:
    if (bVar6 == 1 && *(int *)(param_1 + 0x120) == param_4) {
      lVar7 = param_1 + 0x1d0;
      if (*(int *)(param_1 + 0x1d8) != *(int *)(param_1 + 0x204)) {
        FUN_143d18ca6(lVar7);
        FUN_14187f1c8(lVar7);
      }
      *(undefined1 *)(param_1 + 0x1b8) = 1;
      local_58 = &DAT_14cb78920;
      local_50 = &DAT_14cb789c0;
      local_60 = lVar7;
      FUN_143d1bb00(&local_58,param_5,param_1 + 0x358,lVar7);
      if ((longlong)*(int *)(param_1 + 0x150) != 0) {
        plVar13 = *(longlong **)(param_1 + 0x148);
        plVar8 = plVar13 + *(int *)(param_1 + 0x150);
        do {
          lVar7 = *plVar13;
          if ((lVar7 != 0) && (iVar2 = *(int *)(lVar7 + 0x40), (longlong)iVar2 != 0)) {
            lVar7 = *(longlong *)(lVar7 + 0x38);
            lVar12 = 0;
            do {
              plVar3 = *(longlong **)(lVar7 + lVar12);
              if (plVar3 != (longlong *)0x0) {
                (**(code **)(*plVar3 + 0x2c8))();
              }
              lVar12 = lVar12 + 0x18;
            } while ((longlong)iVar2 * 0x18 != lVar12);
          }
          plVar13 = plVar13 + 1;
        } while (plVar13 != plVar8);
      }
      cVar4 = FUN_1402799c0(param_1);
      if (((cVar4 != '\0') && (*(int *)(param_1 + 0x120) == 2)) &&
         (plVar8 = (longlong *)FUN_140caa0c0(param_1), plVar8 != (longlong *)0x0)) {
        uVar9 = (**(code **)(*plVar8 + 0x10))(plVar8);
        FUN_140caa3de(uVar9,local_60);
      }
    }
    if (param_4 == 1) {
      lVar7 = 0x38a;
    }
    else {
      if (param_4 != 2) goto LAB_143d15002;
LAB_143d14f5a:
      lVar7 = 0x388;
    }
  }
  *(undefined1 *)((ulonglong)param_3 + param_1 + lVar7) = 1;
LAB_143d15002:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d15052 FUN_143d15052 body=8 status=ok
// SIG undefined FUN_143d15052(void)

undefined8 FUN_143d15052(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x3f0);
}



// FUNCTION 143d1505a FUN_143d1505a body=525 status=ok
// SIG undefined FUN_143d1505a(void)

void FUN_143d1505a(longlong param_1,longlong param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint *puVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  
  if (param_3 == '\0') {
    uVar6 = *(uint *)(param_1 + 0x400);
    lVar13 = (longlong)(int)uVar6;
    if (lVar13 != 0) {
      lVar15 = *(longlong *)(param_1 + 0x3f8);
      bVar4 = FUN_14882b710(lVar15,param_2);
      uVar14 = 0;
      uVar12 = 0;
      do {
        uVar9 = (ulonglong)uVar12;
        uVar2 = uVar12 + 1;
        if ((int)(uVar12 + 1) < (int)uVar6) {
          uVar2 = uVar6;
        }
        lVar16 = uVar9 * 0x10;
        lVar17 = lVar15 + 0x10 + lVar16;
        uVar10 = uVar12;
        do {
          uVar9 = uVar9 + 1;
          uVar11 = uVar2;
          if (lVar13 <= (longlong)uVar9) break;
          bVar5 = FUN_14882b710(lVar17,param_2);
          uVar10 = uVar10 + 1;
          lVar17 = lVar17 + 0x10;
          uVar11 = uVar10;
        } while ((bVar4 & 1) == bVar5);
        if ((bVar4 & 1) == 0) {
          if (uVar14 != uVar12) {
            memmove((void *)((longlong)(int)uVar14 * 0x10 + lVar15),(void *)(lVar16 + lVar15),
                    (longlong)(int)(uVar11 - uVar12) << 4);
          }
          uVar14 = uVar14 + (uVar11 - uVar12);
        }
        uVar12 = uVar11;
        bVar4 = bVar4 ^ 1;
      } while ((longlong)uVar9 < lVar13);
      *(uint *)(param_1 + 0x400) = uVar14;
    }
  }
  else {
    if ((longlong)*(int *)(param_1 + 0x400) == 0) {
      bVar18 = false;
    }
    else {
      lVar13 = *(longlong *)(param_1 + 0x3f8);
      lVar15 = (longlong)*(int *)(param_1 + 0x400) << 4;
      do {
        cVar3 = FUN_14882b710(lVar13,param_2);
        if (cVar3 != '\0') goto LAB_143d150ab;
        lVar13 = lVar13 + 0x10;
        lVar15 = lVar15 + -0x10;
      } while (lVar15 != 0);
      lVar13 = 0;
LAB_143d150ab:
      bVar18 = lVar13 != 0;
    }
    if ((param_2 != 0) && (!bVar18)) {
      puVar7 = (uint *)FUN_1488280d4(param_1 + 0x3f8);
      uVar6 = *(uint *)(param_2 + 0xc);
      *puVar7 = uVar6;
      if ((int)uVar6 < DAT_14c9647dc) {
        lVar13 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
      }
      else {
        lVar13 = 0;
      }
      uVar6 = *(uint *)(lVar13 + 0x10);
      if (*(uint *)(lVar13 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        uVar12 = DAT_14c964868 + 1;
        bVar18 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar18) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar12);
        }
        LOCK();
        uVar6 = *(uint *)(lVar13 + 0x10);
        bVar18 = uVar6 == 0;
        if (bVar18) {
          *(uint *)(lVar13 + 0x10) = uVar12;
          uVar6 = 0;
        }
        UNLOCK();
        if (bVar18) {
          uVar6 = uVar12;
        }
      }
      puVar7[1] = uVar6;
      if (*(char *)(param_2 + 0x60) == '\x01') {
        uVar8 = *(undefined8 *)(param_2 + 0x50);
      }
      else {
        uVar8 = 0;
      }
      *(undefined8 *)(puVar7 + 2) = uVar8;
    }
  }
  return;
}



// FUNCTION 143d15368 FUN_143d15368 body=588 status=ok
// SIG undefined FUN_143d15368(void)

void FUN_143d15368(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  if (param_1 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x178) != '\x03') {
    return;
  }
  lVar3 = FUN_14054e771(param_1);
  if (lVar3 != 0) {
    return;
  }
  plVar4 = (longlong *)FUN_1410c028c(param_1);
  if (plVar4 != (longlong *)0x0) {
    lVar3 = *param_3;
    if ((((lVar3 == 0) || (lVar5 = FUN_1410c02f4(), lVar5 == 0)) ||
        (*(int *)(lVar3 + 0x38) < *(int *)(lVar5 + 0x38))) ||
       ((*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
         lVar5 + 0x30 || (lVar3 = *param_3, lVar3 == 0)))) goto LAB_143d1541c;
    lVar5 = plVar4[2];
    lVar6 = FUN_1410c02f4();
    if ((lVar6 == 0) ||
       ((*(int *)(lVar3 + 0x38) < *(int *)(lVar6 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
         lVar6 + 0x30)))) {
      lVar3 = 0;
    }
    else {
      lVar3 = *param_3;
    }
    if (lVar5 == lVar3) goto LAB_143d1541c;
    FUN_144757f48(plVar4,0x40);
    FUN_140675170(param_1,plVar4);
    (**(code **)(*plVar4 + 0x420))(plVar4,0);
    FUN_1405691ed(plVar4,0x35);
  }
  lVar3 = *param_3;
  if ((((lVar3 == 0) || (lVar5 = FUN_1410c02f4(), lVar5 == 0)) ||
      (*(int *)(lVar3 + 0x38) < *(int *)(lVar5 + 0x38))) ||
     (((*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
        lVar5 + 0x30 || (lVar3 = *param_3, lVar3 == 0)) ||
      ((lVar5 = FUN_1410c02f4(), lVar5 == 0 ||
       ((*(int *)(lVar3 + 0x38) < *(int *)(lVar5 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
         lVar5 + 0x30)))))))) {
    lVar3 = FUN_1410c02f4();
  }
  plVar4 = (longlong *)FUN_148827776(param_1,lVar3,0,0x100008);
  if (plVar4 == (longlong *)0x0) {
    return;
  }
  FUN_140b361ee(plVar4,1);
  lVar3 = param_2[1];
  if (lVar3 == 0) {
    uVar7 = FUN_14050c9fe();
    lVar3 = FUN_14477b664(uVar7);
    param_2[1] = lVar3;
  }
  if (((param_2[2] == 0) && (lVar3 != 0)) && (*param_2 != 0)) {
    plVar1 = *(longlong **)(lVar3 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      lVar3 = 0;
    }
    else {
      uVar7 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar3 = FUN_144aff482(uVar7,param_2);
    }
    param_2[2] = lVar3;
  }
  FUN_1488278c6(plVar4);
  FUN_14010ee68(param_1,plVar4);
  if ((((*(byte *)((longlong)plVar4 + 0x9c) & 1) == 0) && ((*(uint *)(param_1 + 8) & 0x20) == 0)) &&
     (lVar3 = FUN_1447210f0(param_1), lVar3 != 0)) {
    FUN_140b506a4(plVar4);
  }
LAB_143d1541c:
  FUN_14472eae2(plVar4,0x40);
  FUN_141200de6(param_1,plVar4);
  return;
}



// FUNCTION 143d155b4 FUN_143d155b4 body=144 status=ok
// SIG undefined FUN_143d155b4(void)

void FUN_143d155b4(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if ((param_1 != (longlong *)0x0) && ((char)param_1[0x2f] == '\x03')) {
    plVar1 = (longlong *)FUN_1410c028c(param_1);
    if (plVar1 != (longlong *)0x0) {
      FUN_144757f48(plVar1,0x40);
      (**(code **)(*plVar1 + 0x420))(plVar1,0);
      FUN_1405691ed(plVar1,0x35);
      return;
    }
    uVar2 = FUN_14027972a();
    lVar3 = (**(code **)(*param_1 + 0x288))(param_1,uVar2);
    if (lVar3 != 0) {
      uVar2 = FUN_14027972a();
      FUN_144718840(lVar3,uVar2);
      return;
    }
  }
  return;
}



// FUNCTION 143d15644 FUN_143d15644 body=69 status=ok
// SIG undefined FUN_143d15644(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d15644(void)

{
  _DAT_14cb78248 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d15686. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb78250,1);
  return;
}



// FUNCTION 143d15689 FUN_143d15689 body=69 status=ok
// SIG undefined FUN_143d15689(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d15689(void)

{
  _DAT_14cb78260 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d156cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb78268,1);
  return;
}



// FUNCTION 143d15720 FUN_143d15720 body=68 status=ok
// SIG undefined FUN_143d15720(void)

undefined4 FUN_143d15720(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  if ((((param_1[9] == param_2[9]) && (param_1[0xb] == param_2[0xb])) && (param_1[6] == param_2[6]))
     && (((param_1[8] == param_2[8] && (param_1[3] == param_2[3])) &&
         ((param_1[5] == param_2[5] && (*param_1 == *param_2)))))) {
    uVar1 = CONCAT31((int3)((uint)param_1[2] >> 8),param_1[2] == param_2[2]);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 143d1579e FUN_143d1579e body=2886 status=ok
// SIG undefined FUN_143d1579e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d1579e(longlong param_1,longlong param_2,longlong *param_3)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  double _X;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined4 uVar8;
  int *piVar9;
  undefined8 *****pppppuVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined7 uVar15;
  longlong *plVar14;
  longlong lVar16;
  bool bVar17;
  bool bVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  int iVar27;
  undefined1 auStack_1d8 [32];
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 ****local_198;
  double dStack_190;
  longlong local_188;
  char local_178 [16];
  longlong *local_168;
  undefined4 local_150 [2];
  undefined8 ****local_148;
  double dStack_140;
  undefined1 local_138 [16];
  byte local_128;
  int local_118;
  undefined4 uStack_114;
  ushort local_100;
  byte local_f8;
  ulonglong local_f0;
  
  auVar7 = _DAT_1499387d0;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if ((param_2 != 0) && (lVar6 = param_3[1], (longlong)(int)lVar6 != 0)) {
    lVar3 = *param_3;
    lVar16 = 0;
    do {
      if (*(longlong *)(lVar3 + lVar16) == 0) goto switchD_143d158ab_caseD_6;
      lVar13 = lVar3 + 8 + lVar16;
      bVar1 = *(byte *)(lVar3 + 0x30 + lVar16);
      if (0x12 < bVar1) {
        if (bVar1 == 0x13) goto switchD_143d158ab_caseD_7;
        if (bVar1 == 0x15) goto switchD_143d158ab_caseD_3;
        if (bVar1 != 0x18) goto switchD_143d158ab_caseD_6;
        if ((*(int *)(param_1 + 0x44) == 0) || (uVar2 = *(uint *)(param_1 + 0x40), (int)uVar2 < 0))
        {
LAB_143d16196:
          uVar11 = 0;
        }
        else {
          uVar11 = 0;
          if ((int)uVar2 < DAT_14c9647dc) {
            puVar12 = (undefined8 *)
                      ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
            if (((puVar12 == (undefined8 *)0x0) ||
                (*(int *)(puVar12 + 2) != *(int *)(param_1 + 0x44))) ||
               ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)) goto LAB_143d16196;
            uVar11 = *puVar12;
          }
        }
        local_178[0] = '\0';
        local_150[0] = 0;
        FUN_1456bb102(local_178,uVar11);
        FUN_1447c3578(lVar13,&local_118,local_178);
        FUN_140a1ca64(&local_118,&local_148);
        FUN_1406eff12(param_2,*(undefined8 *)(lVar3 + lVar16),&local_148);
        goto LAB_143d15c3b;
      }
      switch(bVar1) {
      case 1:
        if ((*(int *)(param_1 + 0x44) == 0) || (uVar2 = *(uint *)(param_1 + 0x40), (int)uVar2 < 0))
        {
LAB_143d16181:
          uVar11 = 0;
        }
        else {
          uVar11 = 0;
          if ((int)uVar2 < DAT_14c9647dc) {
            puVar12 = (undefined8 *)
                      ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
            if (((puVar12 == (undefined8 *)0x0) ||
                (*(int *)(puVar12 + 2) != *(int *)(param_1 + 0x44))) ||
               ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)) goto LAB_143d16181;
            uVar11 = *puVar12;
          }
        }
        local_178[0] = '\0';
        local_150[0] = 0;
        FUN_1456bb102(local_178,uVar11);
        FUN_1447c3578(lVar13,&local_148,local_178);
        uVar15 = (undefined7)((ulonglong)lVar13 >> 8);
        if (local_128 == 1) {
          uVar8 = (undefined4)CONCAT71(uVar15,(int)local_148 != 0);
        }
        else {
          FUN_1400b56fe(&local_118,&local_148,1);
          bVar17 = local_f8 != 0;
          bVar18 = local_118 != 0;
          pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_f8 * 0x120));
          if (pcVar4 != (code *)0x0) {
            piVar9 = &local_118;
            if (0x18 < local_100) {
              piVar9 = (int *)CONCAT44(uStack_114,local_118);
            }
            (*pcVar4)(piVar9);
          }
          if (0x18 < local_100) {
            FUN_1400020a8(CONCAT44(uStack_114,local_118));
          }
          uVar8 = (undefined4)CONCAT71(uVar15,bVar17 && bVar18);
        }
        FUN_1408c9a80(param_2,*(undefined8 *)(lVar3 + lVar16),uVar8);
        break;
      case 2:
        if ((*(int *)(param_1 + 0x44) == 0) || (uVar2 = *(uint *)(param_1 + 0x40), (int)uVar2 < 0))
        {
LAB_143d1617a:
          uVar11 = 0;
        }
        else {
          uVar11 = 0;
          if ((int)uVar2 < DAT_14c9647dc) {
            puVar12 = (undefined8 *)
                      ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
            if (((puVar12 == (undefined8 *)0x0) ||
                (*(int *)(puVar12 + 2) != *(int *)(param_1 + 0x44))) ||
               ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)) goto LAB_143d1617a;
            uVar11 = *puVar12;
          }
        }
        local_178[0] = '\0';
        local_150[0] = 0;
        FUN_1456bb102(local_178,uVar11);
        FUN_1447c3578(lVar13,&local_118,local_178);
        uVar8 = FUN_1405d5f74(&local_118);
        FUN_14042f9da(param_2,*(undefined8 *)(lVar3 + lVar16),uVar8);
        goto LAB_143d15c3b;
      case 3:
switchD_143d158ab_caseD_3:
        if ((*(int *)(param_1 + 0x44) == 0) || (uVar2 = *(uint *)(param_1 + 0x40), (int)uVar2 < 0))
        {
LAB_143d16173:
          uVar11 = 0;
        }
        else {
          uVar11 = 0;
          if ((int)uVar2 < DAT_14c9647dc) {
            puVar12 = (undefined8 *)
                      ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
            if (((puVar12 == (undefined8 *)0x0) ||
                (*(int *)(puVar12 + 2) != *(int *)(param_1 + 0x44))) ||
               ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)) goto LAB_143d16173;
            uVar11 = *puVar12;
          }
        }
        local_178[0] = '\0';
        local_150[0] = 0;
        FUN_1456bb102(local_178,uVar11);
        FUN_1447c3578(lVar13,&local_148,local_178);
        if (local_128 == 3) {
          iVar27 = (int)local_148;
        }
        else {
          FUN_1400b56fe(&local_118,&local_148,3);
          iVar27 = 0;
          if (local_f8 != 0) {
            iVar27 = local_118;
          }
          pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_f8 * 0x120));
          if (pcVar4 != (code *)0x0) {
            piVar9 = &local_118;
            if (0x18 < local_100) {
              piVar9 = (int *)CONCAT44(uStack_114,local_118);
            }
            (*pcVar4)(piVar9);
          }
          if (0x18 < local_100) {
            FUN_1400020a8(CONCAT44(uStack_114,local_118));
          }
        }
        FUN_140219d5e(param_2,*(undefined8 *)(lVar3 + lVar16),iVar27);
        break;
      case 4:
        if ((*(int *)(param_1 + 0x44) == 0) || (uVar2 = *(uint *)(param_1 + 0x40), (int)uVar2 < 0))
        {
LAB_143d1618f:
          uVar11 = 0;
        }
        else {
          uVar11 = 0;
          if ((int)uVar2 < DAT_14c9647dc) {
            puVar12 = (undefined8 *)
                      ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
            if (((puVar12 == (undefined8 *)0x0) ||
                (*(int *)(puVar12 + 2) != *(int *)(param_1 + 0x44))) ||
               ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)) goto LAB_143d1618f;
            uVar11 = *puVar12;
          }
        }
        local_178[0] = '\0';
        local_150[0] = 0;
        FUN_1456bb102(local_178,uVar11);
        FUN_1447c3578(lVar13,&local_148,local_178);
        if (local_128 == 4) {
          local_188 = local_138._0_8_;
          local_198 = local_148;
          dStack_190 = dStack_140;
        }
        else {
          plVar14 = (longlong *)&local_118;
          FUN_1400b56fe(plVar14,&local_148,4);
          if (local_f8 == 0) {
            plVar14 = &DAT_14c9ab228;
          }
          local_188 = plVar14[2];
          local_198 = (undefined8 ****)*plVar14;
          dStack_190 = (double)plVar14[1];
          pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_f8 * 0x120));
          if (pcVar4 != (code *)0x0) {
            piVar9 = &local_118;
            if (0x18 < local_100) {
              piVar9 = (int *)CONCAT44(uStack_114,local_118);
            }
            (*pcVar4)(piVar9);
          }
          if (0x18 < local_100) {
            FUN_1400020a8(CONCAT44(uStack_114,local_118));
          }
        }
        FUN_1404e0f62(param_2,*(undefined8 *)(lVar3 + lVar16),&local_198);
        break;
      case 5:
        if ((*(int *)(param_1 + 0x44) == 0) || (uVar2 = *(uint *)(param_1 + 0x40), (int)uVar2 < 0))
        {
LAB_143d16188:
          uVar11 = 0;
        }
        else {
          uVar11 = 0;
          if ((int)uVar2 < DAT_14c9647dc) {
            puVar12 = (undefined8 *)
                      ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
            if (((puVar12 == (undefined8 *)0x0) ||
                (*(int *)(puVar12 + 2) != *(int *)(param_1 + 0x44))) ||
               ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)) goto LAB_143d16188;
            uVar11 = *puVar12;
          }
        }
        local_178[0] = '\0';
        local_150[0] = 0;
        FUN_1456bb102(local_178,uVar11);
        FUN_1447c3578(lVar13,&local_118,local_178);
        FUN_142b38d56(&local_118,&local_1b8);
        auVar25._8_8_ = dStack_1b0;
        auVar25._0_8_ = local_1b8;
        auVar25 = divpd(auVar25,auVar7);
        auVar26._8_8_ = 0;
        auVar26._0_8_ = local_1a8;
        auVar26 = divpd(auVar26,auVar7);
        auVar25 = roundpd(auVar25,auVar25,3);
        auVar26 = roundpd(auVar26,auVar26,3);
        dVar22 = (local_1b8 - auVar25._0_8_ * auVar7._0_8_) * 0.008726646259971648;
        dVar23 = (dStack_1b0 - auVar25._8_8_ * auVar7._8_8_) * 0.008726646259971648;
        dVar5 = (local_1a8 - auVar26._0_8_ * auVar7._0_8_) * 0.008726646259971648;
        _X = (0.0 - auVar26._8_8_ * auVar7._8_8_) * 0.008726646259971648;
        dVar19 = sin(dVar22);
        dVar20 = sin(dVar23);
        dVar21 = sin(dVar5);
        sin(_X);
        dVar22 = cos(dVar22);
        dVar23 = cos(dVar23);
        dVar24 = cos(dVar5);
        cos(_X);
        dVar5 = dVar20 * dVar19 * dVar21 + dVar23 * dVar22 * dVar24;
        local_148 = (undefined8 ****)(dVar19 * dVar20 * dVar24 - dVar22 * dVar23 * dVar21);
        dStack_140 = -(dVar19 * dVar23 * dVar24) - dVar22 * dVar20 * dVar21;
        local_138._8_4_ = SUB84(dVar5,0);
        local_138._0_8_ = -(dVar23 * dVar19 * dVar21) + dVar20 * dVar22 * dVar24;
        local_138._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
        FUN_14810f980(param_2,*(undefined8 *)(lVar3 + lVar16),&local_148);
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_f8 * 0x120));
        if (pcVar4 != (code *)0x0) {
          piVar9 = &local_118;
          if (0x18 < local_100) {
            piVar9 = (int *)CONCAT44(uStack_114,local_118);
          }
          (*pcVar4)(piVar9);
        }
        if (0x18 < local_100) {
          FUN_1400020a8(CONCAT44(uStack_114,local_118));
        }
        FUN_1448173f8(local_150);
        if (local_178[0] != '\x03') goto switchD_143d158ab_caseD_6;
        goto LAB_143d160e2;
      default:
        goto switchD_143d158ab_caseD_6;
      case 7:
switchD_143d158ab_caseD_7:
        if ((*(int *)(param_1 + 0x44) == 0) || (uVar2 = *(uint *)(param_1 + 0x40), (int)uVar2 < 0))
        {
LAB_143d1616c:
          uVar11 = 0;
        }
        else {
          uVar11 = 0;
          if ((int)uVar2 < DAT_14c9647dc) {
            puVar12 = (undefined8 *)
                      ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
            if (((puVar12 == (undefined8 *)0x0) ||
                (*(int *)(puVar12 + 2) != *(int *)(param_1 + 0x44))) ||
               ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)) goto LAB_143d1616c;
            uVar11 = *puVar12;
          }
        }
        local_178[0] = '\0';
        local_150[0] = 0;
        FUN_1456bb102(local_178,uVar11);
        FUN_1447c3578(lVar13,&local_118,local_178);
        uVar11 = FUN_14030a32e(&local_118);
        FUN_140e2f260(param_2,*(undefined8 *)(lVar3 + lVar16),uVar11);
LAB_143d15c3b:
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_f8 * 0x120));
        if (pcVar4 != (code *)0x0) {
          piVar9 = &local_118;
          if (0x18 < local_100) {
            piVar9 = (int *)CONCAT44(uStack_114,local_118);
          }
          (*pcVar4)(piVar9);
        }
        if (0x18 < local_100) {
          pppppuVar10 = (undefined8 *****)CONCAT44(uStack_114,local_118);
          goto LAB_143d160b7;
        }
        goto LAB_143d160bc;
      }
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_128 * 0x120));
      if (pcVar4 != (code *)0x0) {
        pppppuVar10 = &local_148;
        if (0x18 < (ushort)local_138._8_2_) {
          pppppuVar10 = (undefined8 *****)local_148;
        }
        (*pcVar4)(pppppuVar10);
      }
      pppppuVar10 = (undefined8 *****)local_148;
      if (0x18 < (ushort)local_138._8_2_) {
LAB_143d160b7:
        FUN_1400020a8(pppppuVar10);
      }
LAB_143d160bc:
      FUN_1448173f8(local_150);
      if (local_178[0] == '\x03') {
LAB_143d160e2:
        if (local_168 != (longlong *)0x0) {
          LOCK();
          piVar9 = (int *)((longlong)local_168 + 0xc);
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (*piVar9 == 0) {
            (**(code **)(*local_168 + 0x10))();
          }
        }
      }
switchD_143d158ab_caseD_6:
      lVar16 = lVar16 + 0x40;
    } while ((longlong)(int)lVar6 * 0x40 != lVar16);
  }
  if ((local_f0 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d16358 FUN_143d16358 body=89 status=ok
// SIG undefined FUN_143d16358(void)

undefined8 FUN_143d16358(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    if (((*(int *)(param_1 + 0xc) != 0) && (uVar1 = *(uint *)(param_1 + 8), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if (((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0xc))) &&
         ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000143d163aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))();
        return uVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 143d163b2 FUN_143d163b2 body=163 status=ok
// SIG undefined FUN_143d163b2(void)

undefined8 FUN_143d163b2(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) && (*(int *)(param_1 + 0xc) != 0)) {
    uVar1 = *(uint *)(param_1 + 8);
    if ((int)uVar1 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return 0;
    }
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if ((((lVar2 != 0) && (*(int *)(lVar2 + 0x10) == *(int *)(param_1 + 0xc))) &&
        ((*(uint *)(lVar2 + 8) & 0x10200000) == 0)) &&
       ((lVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))(), lVar2 != 0 &&
        ((*(byte *)(lVar2 + 0x65) & 0x18) == 0x10)))) {
      lVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))();
      if (*(int *)(lVar2 + 0x3f4) == 0 && *(int *)(lVar2 + 0x3f0) == 0) {
        return 1;
      }
      uVar3 = FUN_144729dda(lVar2 + 0x3f0);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 143d16456 FUN_143d16456 body=138 status=ok
// SIG undefined FUN_143d16456(void)

ulonglong FUN_143d16456(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) && (*(int *)(param_1 + 0xc) != 0)) {
    uVar1 = *(uint *)(param_1 + 8);
    if ((int)uVar1 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return 0;
    }
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x10) == *(int *)(param_1 + 0xc))) &&
       ((*(uint *)(lVar2 + 8) & 0x10200000) == 0)) {
      lVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))();
      if (*(char *)(lVar2 + 0x20) == '\x01') {
        puVar3 = (undefined1 *)(lVar2 + 0x21);
      }
      else {
        lVar2 = FUN_14061177a(param_1);
        if (lVar2 == 0) {
          return 0;
        }
        puVar3 = (undefined1 *)(lVar2 + 0x93);
      }
      return CONCAT71((int7)((ulonglong)puVar3 >> 8),*puVar3) ^ 1;
    }
  }
  return 0;
}



// FUNCTION 143d1651a FUN_143d1651a body=864 status=ok
// SIG undefined FUN_143d1651a(void)

longlong FUN_143d1651a(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4,
                      longlong param_5,longlong param_6,undefined8 param_7)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_4 < 2) || (*(char *)(param_1 + 0x110) == '\0')) {
LAB_143d166e3:
    lVar9 = FUN_140bd958e(param_1,param_4);
  }
  else {
    if (param_6 == 0) {
LAB_143d16658:
      if (param_5 == 0) goto LAB_143d166e3;
      lVar6 = *(longlong *)(param_5 + 0x240);
      if (lVar6 == 0) {
        local_40[0] = *(longlong *)(param_5 + 0x230);
        lVar6 = FUN_14050aea0();
        *(longlong *)(param_5 + 0x240) = lVar6;
        if (lVar6 == 0) goto LAB_143d166e3;
      }
    }
    else {
      if (param_5 == 0) {
LAB_143d165a3:
        FUN_1488294fe(local_40,param_6,param_1 + 0x114);
        if ((local_40[0] != 0) && (*(int *)(param_1 + 0x128) != *(int *)(param_1 + 0x154))) {
          uVar3 = (uint)((ulonglong)local_40[0] >> 0x10);
          uVar10 = (uint)local_40[0] & 0xffff;
          lVar6 = param_1 + 0x158;
          if (*(longlong *)(param_1 + 0x160) != 0) {
            lVar6 = *(longlong *)(param_1 + 0x160);
          }
          iVar11 = *(int *)(lVar6 + (ulonglong)
                                    (*(int *)(param_1 + 0x168) - 1U &
                                    (int)((ulonglong)local_40[0] >> 0x20) +
                                    ((uint)local_40[0] << 0x10 | uVar10) +
                                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar10 >> 4)) * 4);
          if (iVar11 != -1) {
            lVar6 = *(longlong *)(param_1 + 0x120);
            iVar12 = iVar11;
            do {
              if (*(longlong *)(lVar6 + (longlong)iVar12 * 0x30) == local_40[0]) goto LAB_143d167eb;
              iVar12 = *(int *)((longlong)iVar12 * 0x30 + lVar6 + 0x28);
            } while (iVar12 != -1);
          }
        }
        goto LAB_143d16658;
      }
      lVar6 = *(longlong *)(param_5 + 0x240);
      if (lVar6 == 0) {
        local_40[0] = *(longlong *)(param_5 + 0x230);
        lVar6 = FUN_14050aea0();
        *(longlong *)(param_5 + 0x240) = lVar6;
        if (lVar6 == 0) goto LAB_143d165a3;
      }
    }
    if ((DAT_14c872bf2 != '\x01') || (*(char *)(lVar6 + 0x31) == '\x01')) {
      plVar1 = *(longlong **)(lVar6 + 0x38);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar4 = (**(code **)(*plVar1 + 0x10))(plVar1,param_7), cVar4 != '\0')) {
        bVar5 = FUN_140db3cd0(lVar6,param_7);
        lVar7 = FUN_14073fae1();
        lVar6 = (ulonglong)(bVar5 ^ 1) * 8 + 0x68;
      }
      else {
        lVar6 = 0x70;
        lVar7 = FUN_14073fae1();
      }
      lVar6 = *(longlong *)(lVar7 + lVar6);
      if ((lVar6 != 0) && (*(int *)(param_1 + 0x128) != *(int *)(param_1 + 0x154))) {
        uVar3 = (uint)((ulonglong)lVar6 >> 0x10);
        uVar10 = (uint)lVar6 & 0xffff;
        lVar7 = param_1 + 0x158;
        if (*(longlong *)(param_1 + 0x160) != 0) {
          lVar7 = *(longlong *)(param_1 + 0x160);
        }
        iVar11 = *(int *)(lVar7 + (ulonglong)
                                  (*(int *)(param_1 + 0x168) - 1U &
                                  (int)((ulonglong)lVar6 >> 0x20) + ((uint)lVar6 << 0x10 | uVar10) +
                                  (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar10 >> 4)) * 4);
        if (iVar11 != -1) {
          lVar2 = *(longlong *)(param_1 + 0x120);
          lVar9 = 0;
          iVar12 = iVar11;
          do {
            if (*(longlong *)(lVar2 + (longlong)iVar12 * 0x30) == lVar6) goto LAB_143d167a7;
            iVar12 = *(int *)((longlong)iVar12 * 0x30 + lVar2 + 0x28);
          } while (iVar12 != -1);
          goto LAB_143d167c0;
        }
      }
    }
    lVar9 = 0;
  }
  goto LAB_143d167c0;
  while (iVar11 = *(int *)(lVar7 + 0x28), iVar11 != -1) {
LAB_143d167eb:
    lVar7 = lVar6 + (longlong)iVar11 * 0x30;
    if (*(longlong *)(lVar6 + (longlong)iVar11 * 0x30) == local_40[0]) goto LAB_143d16804;
  }
  goto LAB_143d16802;
  while (iVar11 = *(int *)(lVar7 + 0x28), iVar11 != -1) {
LAB_143d167a7:
    lVar7 = lVar2 + (longlong)iVar11 * 0x30;
    if (*(longlong *)(lVar2 + (longlong)iVar11 * 0x30) == lVar6) goto LAB_143d16804;
  }
LAB_143d16802:
  lVar7 = 0;
LAB_143d16804:
  lVar6 = *(longlong *)(lVar7 + 0x18);
  if (lVar6 == 0) {
    uVar8 = FUN_140bd9786();
    lVar6 = FUN_14477b664(uVar8);
    *(longlong *)(lVar7 + 0x18) = lVar6;
  }
  lVar9 = *(longlong *)(lVar7 + 0x20);
  if (((lVar9 == 0) && (lVar9 = 0, lVar6 != 0)) && (*(longlong *)(lVar7 + 0x10) != 0)) {
    plVar1 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar4 == '\0')) {
      lVar9 = 0;
    }
    else {
      uVar8 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar9 = FUN_144aff482(uVar8,(longlong *)(lVar7 + 0x10));
    }
    *(longlong *)(lVar7 + 0x20) = lVar9;
  }
LAB_143d167c0:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar9;
}



// FUNCTION 143d16884 FUN_143d16884 body=902 status=ok
// SIG undefined FUN_143d16884(void)

void FUN_143d16884(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_178 [32];
  uint local_158;
  undefined4 local_150;
  undefined4 local_148;
  undefined8 local_140;
  wchar_t *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  code **local_120;
  code *local_118;
  code *local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  code *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar3 = *param_1;
  if (DAT_14cac9ca8 == 0) {
    local_120 = &local_a8;
    local_a8 = FUN_141030f22;
    local_110 = FUN_14081d0ea;
    local_118 = FUN_14081d0ea;
    local_128 = &LAB_1478c0a72;
    local_130 = &LAB_1417b2375;
    local_138 = L"Engine";
    local_140 = 0x1000000000;
    local_148 = 0x10000004;
    local_150 = 8;
    local_158 = 0x390;
    FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
  }
  lVar11 = param_2[2];
  iVar10 = *(int *)(lVar11 + 0x38);
  if ((iVar10 < *(int *)(DAT_14cac9ca8 + 0x38)) ||
     (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) !=
      DAT_14cac9ca8 + 0x30)) {
    if (DAT_14cad00c8 == 0) {
      local_120 = &local_a8;
      local_a8 = FUN_144a7958c;
      local_110 = FUN_14081d0ea;
      local_118 = FUN_14081d0ea;
      local_128 = &LAB_1479b7a0c;
      local_130 = &LAB_1463b464e;
      local_138 = L"Engine";
      local_140 = 0;
      local_148 = 0x10000005;
      local_150 = 8;
      local_158 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      lVar11 = param_2[2];
      iVar10 = *(int *)(lVar11 + 0x38);
    }
    if (((iVar10 < *(int *)(DAT_14cad00c8 + 0x38)) ||
        (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8)
         != DAT_14cad00c8 + 0x30)) ||
       (param_2 = (longlong *)param_2[0x15], param_2 == (longlong *)0x0)) goto LAB_143d16a78;
  }
  local_a8 = DAT_14c846480;
  uStack_a0 = DAT_14c846488;
  local_98 = DAT_14c846490;
  uStack_90 = DAT_14c846498;
  local_c8 = DAT_14c8464c0;
  uStack_c0 = DAT_14c8464c8;
  local_b8 = DAT_14c8464d0;
  uStack_b0 = uRam000000014c8464d8;
  local_d8 = DAT_14c8464f0;
  local_e8 = (undefined4)DAT_14c8464e0;
  uStack_e4 = DAT_14c8464e0._4_4_;
  uStack_e0 = (undefined4)DAT_14c8464e8;
  uStack_dc = DAT_14c8464e8._4_4_;
  local_f8 = DAT_14c8464f0;
  local_108 = (undefined4)DAT_14c8464e0;
  uStack_104 = DAT_14c8464e0._4_4_;
  uStack_100 = (undefined4)DAT_14c8464e8;
  uStack_fc = DAT_14c8464e8._4_4_;
  local_158 = local_158 & 0xffffff00;
  (**(code **)(*param_2 + 800))(param_2,0,&local_e8,&local_108);
  uVar9 = local_d8;
  uVar8 = local_f8;
  uVar6 = CONCAT44(uStack_e4,local_e8);
  uVar7 = CONCAT44(uStack_dc,uStack_e0);
  uVar4 = CONCAT44(uStack_104,local_108);
  uVar5 = CONCAT44(uStack_fc,uStack_100);
  iVar10 = *(int *)(lVar3 + 0x18);
  *(uint *)(lVar3 + 0x18) = iVar10 + 1U;
  if (*(uint *)(lVar3 + 0x1c) < iVar10 + 1U) {
    FUN_14187ed24((longlong *)(lVar3 + 0x10),iVar10);
  }
  lVar3 = *(longlong *)(lVar3 + 0x10);
  lVar11 = (longlong)iVar10 * 0x90;
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar11);
  *puVar1 = local_98;
  puVar1[1] = uStack_90;
  *(undefined8 *)(lVar3 + lVar11) = local_a8;
  ((undefined8 *)(lVar3 + lVar11))[1] = uStack_a0;
  puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar11);
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar11);
  *puVar1 = uVar9;
  puVar1[1] = 0;
  puVar2 = (undefined4 *)(lVar3 + 0x40 + lVar11);
  *puVar2 = (undefined4)local_c8;
  puVar2[1] = local_c8._4_4_;
  puVar2[2] = (undefined4)uStack_c0;
  puVar2[3] = uStack_c0._4_4_;
  puVar1 = (undefined8 *)(lVar3 + 0x50 + lVar11);
  *puVar1 = local_b8;
  puVar1[1] = uStack_b0;
  *(undefined4 *)(lVar3 + 0x60 + lVar11) = 0;
  *(undefined8 *)(lVar3 + 0x68 + lVar11) = uVar4;
  *(undefined8 *)(lVar3 + 0x70 + lVar11) = uVar5;
  *(undefined8 *)(lVar3 + 0x78 + lVar11) = uVar8;
  *(undefined8 *)(lVar3 + 0x80 + lVar11) = 0x4230000041b00000;
  *(undefined4 *)(lVar3 + 0x88 + lVar11) = 0x41b00000;
LAB_143d16a78:
  if ((local_80 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d16ccc FUN_143d16ccc body=268 status=ok
// SIG undefined FUN_143d16ccc(void)

void FUN_143d16ccc(longlong param_1,longlong param_2,uint *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*param_3 < 2) {
    plVar2 = *(longlong **)(param_2 + 0x10);
    do {
      if (plVar2[5] != 0) {
        lVar3 = *(longlong *)(plVar2[5] + 0x30);
        if ((((lVar3 != 0) && (*(longlong *)(lVar3 + 0x360) != 0)) &&
            (lVar3 = FUN_1400f6f32(), lVar3 != 0)) &&
           ((*(longlong *)(lVar3 + 0x68) != 0 &&
            (lVar3 = FUN_140d1732e(*(longlong *)(lVar3 + 0x68),param_2 + 0x18), lVar3 != 0)))) {
          FUN_1407934de(&local_38,lVar3);
          if (local_38 != (longlong *)0x0) {
            local_48 = param_4;
            (**(code **)(*local_38 + 0x60))(local_38,lVar3,*(undefined4 *)(param_1 + 0x100),1);
          }
          if (local_30 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_30 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
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
        }
        break;
      }
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2f0))(plVar2);
    } while (plVar2 != (longlong *)0x0);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d16dda FUN_143d16dda body=320 status=ok
// SIG undefined FUN_143d16dda(void)

byte FUN_143d16dda(longlong param_1,longlong param_2,uint *param_3,undefined8 param_4,
                  ulonglong param_5)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  ulonglong local_50;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_3 < 2) {
    plVar4 = *(longlong **)(param_2 + 0x10);
    do {
      if (plVar4[5] != 0) {
        lVar5 = *(longlong *)(plVar4[5] + 0x30);
        if ((((lVar5 == 0) || (*(longlong *)(lVar5 + 0x360) == 0)) ||
            (lVar5 = FUN_1400f6f32(), lVar5 == 0)) ||
           ((*(longlong *)(lVar5 + 0x68) == 0 ||
            (lVar5 = FUN_140d1732e(*(longlong *)(lVar5 + 0x68),param_2 + 0x18), lVar5 == 0))))
        goto LAB_143d16ec5;
        FUN_1407934de(&local_40,lVar5);
        plVar4 = local_40;
        if (local_40 != (longlong *)0x0) {
          FUN_14009b010(param_5,3,0);
          local_50 = param_5;
          local_58 = param_4;
          param_5 = (**(code **)(*local_40 + 0x58))
                              (local_40,lVar5,*(undefined4 *)(param_1 + 0x100),1);
          param_5 = param_5 & 0xffffffff;
        }
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
        bVar3 = plVar4 != (longlong *)0x0 & (byte)param_5;
        break;
      }
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x2f0))();
      bVar3 = 0;
    } while (plVar4 != (longlong *)0x0);
  }
  else {
LAB_143d16ec5:
    bVar3 = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar3;
}



// FUNCTION 143d16f1c FUN_143d16f1c body=106 status=ok
// SIG undefined FUN_143d16f1c(void)

undefined8 * FUN_143d16f1c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_145ad78be(param_1,uVar1);
  *param_1 = &PTR_FUN_14b1351c0;
  *(undefined4 *)(param_1 + 0x20) = 1;
  FUN_1447715ec(param_1 + 5,&DAT_14cb78728);
  FUN_1447715ec(param_1 + 10,&DAT_14cb78600);
  param_1[0x10] = DAT_14cb785f8;
  *(undefined1 *)((longlong)param_1 + 0xea) = 1;
  return param_1;
}



// FUNCTION 143d16f86 FUN_143d16f86 body=268 status=ok
// SIG undefined FUN_143d16f86(void)

void FUN_143d16f86(longlong param_1,longlong param_2,uint *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*param_3 < 2) {
    plVar2 = *(longlong **)(param_2 + 0x10);
    do {
      if (plVar2[5] != 0) {
        lVar3 = *(longlong *)(plVar2[5] + 0x30);
        if ((((lVar3 != 0) && (*(longlong *)(lVar3 + 0x360) != 0)) &&
            (lVar3 = FUN_1400f6f32(), lVar3 != 0)) &&
           ((*(longlong *)(lVar3 + 0x68) != 0 &&
            (lVar3 = FUN_140d1732e(*(longlong *)(lVar3 + 0x68),param_2 + 0x18), lVar3 != 0)))) {
          FUN_1407934de(&local_38,lVar3);
          if (local_38 != (longlong *)0x0) {
            local_48 = param_4;
            (**(code **)(*local_38 + 0x60))(local_38,lVar3,*(undefined4 *)(param_1 + 0x100),2);
          }
          if (local_30 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_30 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
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
        }
        break;
      }
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2f0))(plVar2);
    } while (plVar2 != (longlong *)0x0);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d17094 FUN_143d17094 body=318 status=ok
// SIG undefined FUN_143d17094(void)

byte FUN_143d17094(longlong param_1,longlong param_2,uint *param_3,undefined8 param_4,
                  ulonglong param_5)

{
  int *piVar1;
  byte bVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  ulonglong local_50;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_3 < 2) {
    plVar3 = *(longlong **)(param_2 + 0x10);
    do {
      if (plVar3[5] != 0) {
        lVar4 = *(longlong *)(plVar3[5] + 0x30);
        if ((((lVar4 == 0) || (*(longlong *)(lVar4 + 0x360) == 0)) ||
            (lVar4 = FUN_1400f6f32(), lVar4 == 0)) ||
           ((*(longlong *)(lVar4 + 0x68) == 0 ||
            (lVar4 = FUN_140d1732e(*(longlong *)(lVar4 + 0x68),param_2 + 0x18), lVar4 == 0))))
        goto LAB_143d1717d;
        FUN_14009b010(param_5,3,0);
        FUN_1407934de(&local_40,lVar4);
        if (local_40 != (longlong *)0x0) {
          local_50 = param_5;
          local_58 = param_4;
          param_5 = (**(code **)(*local_40 + 0x58))
                              (local_40,lVar4,*(undefined4 *)(param_1 + 0x100),2);
          param_5 = param_5 & 0xffffffff;
        }
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
        bVar2 = local_40 != (longlong *)0x0 & (byte)param_5;
        break;
      }
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2f0))();
      bVar2 = 0;
    } while (plVar3 != (longlong *)0x0);
  }
  else {
LAB_143d1717d:
    bVar2 = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar2;
}



// FUNCTION 143d171d4 FUN_143d171d4 body=106 status=ok
// SIG undefined FUN_143d171d4(void)

undefined8 * FUN_143d171d4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_14599f510(param_1,uVar1);
  *param_1 = &PTR_FUN_14b135780;
  *(undefined4 *)(param_1 + 0x20) = 1;
  FUN_1447715ec(param_1 + 5,&DAT_14cb78700);
  FUN_1447715ec(param_1 + 10,&DAT_14cb78630);
  param_1[0x10] = DAT_14cb78628;
  *(undefined1 *)((longlong)param_1 + 0xea) = 1;
  return param_1;
}



// FUNCTION 143d1723e FUN_143d1723e body=97 status=ok
// SIG undefined FUN_143d1723e(void)

undefined8 * FUN_143d1723e(longlong *param_1,undefined8 *param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x2b8))();
  if (lVar2 == 0) {
    *(undefined1 *)param_2 = 1;
    *(undefined4 *)((longlong)param_2 + 4) = 0;
    *(undefined1 *)(param_2 + 1) = 0;
    *(undefined4 *)((longlong)param_2 + 0xc) = 0x55000000;
  }
  else {
    puVar3 = (undefined8 *)(lVar2 + 0x174 + (longlong)param_3 * 0x10);
    if (4 < param_3) {
      puVar3 = (undefined8 *)(lVar2 + 0x174);
    }
    uVar1 = puVar3[1];
    *param_2 = *puVar3;
    param_2[1] = uVar1;
  }
  return param_2;
}



// FUNCTION 143d172a0 FUN_143d172a0 body=44 status=ok
// SIG undefined FUN_143d172a0(void)

undefined8 FUN_143d172a0(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x2b8))();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d172c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,0,*(code **)(*plVar1 + 0x30));
    return uVar2;
  }
  return 0;
}



// FUNCTION 143d17305 FUN_143d17305 body=91 status=ok
// SIG undefined FUN_143d17305(void)

void FUN_143d17305(void)

{
  if (DAT_14cb786a0 != 0) {
    if (DAT_14cb78698 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb78698)(DAT_14cb78698,0);
    FUN_1446efa72(&DAT_14cb78698,0,0,0x10);
    DAT_14cb786a0 = 0;
  }
  if (DAT_14cb78698 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143d17364 FUN_143d17364 body=31 status=ok
// SIG undefined FUN_143d17364(void)

undefined8 FUN_143d17364(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d17384 FUN_143d17384 body=141 status=ok
// SIG undefined FUN_143d17384(void)

void FUN_143d17384(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar2 = *(longlong **)(param_1 + 0x10);
  uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
  FUN_140c675e6(&local_28,uVar3);
  if (local_28 != 0) {
    FUN_140c14c5e(local_28,plVar2);
  }
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



// FUNCTION 143d17422 FUN_143d17422 body=29 status=ok
// SIG undefined FUN_143d17422(void)

undefined8 FUN_143d17422(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d17440 FUN_143d17440 body=127 status=ok
// SIG undefined FUN_143d17440(void)

longlong * FUN_143d17440(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  if ((longlong)*(int *)(param_1 + 1) == 0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    lVar4 = (longlong)*(int *)(param_1 + 1) << 5;
    plVar6 = (longlong *)*param_1;
    do {
      plVar5 = plVar6;
      if ((*plVar5 == *param_2) && (cVar3 = FUN_1409d2f40(plVar5 + 2,param_2[2]), cVar3 != '\0'))
      break;
      plVar6 = plVar5 + 4;
      lVar4 = lVar4 + -0x20;
      plVar5 = (longlong *)0x0;
    } while (lVar4 != 0);
  }
  plVar6 = (longlong *)param_2[1];
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
  return plVar5;
}



// FUNCTION 143d174c0 FUN_143d174c0 body=112 status=ok
// SIG undefined FUN_143d174c0(void)

longlong * FUN_143d174c0(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    plVar6 = (longlong *)*param_1;
    lVar5 = (longlong)*(int *)(param_1 + 1) << 5;
    do {
      if (*plVar6 == *param_2) {
        cVar4 = FUN_1409d2f40(plVar6 + 2,param_2[2]);
        if (cVar4 != '\0') goto LAB_143d174ff;
      }
      plVar6 = plVar6 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar6 = (longlong *)0x0;
LAB_143d174ff:
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
  return plVar6;
}



// FUNCTION 143d17530 FUN_143d17530 body=248 status=ok
// SIG undefined FUN_143d17530(void)

void FUN_143d17530(longlong param_1,int param_2)

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
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = uVar3 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x7ffffffffffffff) * 2]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 5)) {
      uVar3 = uVar4 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 143d17628 FUN_143d17628 body=1 status=ok
// SIG undefined FUN_143d17628(void)

void FUN_143d17628(void)

{
  return;
}



// FUNCTION 143d1762a FUN_143d1762a body=29 status=ok
// SIG undefined FUN_143d1762a(void)

undefined8 FUN_143d1762a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d17648 FUN_143d17648 body=29 status=ok
// SIG undefined FUN_143d17648(void)

undefined8 FUN_143d17648(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d177e4 FUN_143d177e4 body=147 status=ok
// SIG undefined FUN_143d177e4(void)

void FUN_143d177e4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 7) {
    FUN_1446efa72(param_2,0,7,0x10);
    *(undefined4 *)(param_2 + 1) = 7;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f8960;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(param_1 + 0x30);
  puVar1[7] = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  puVar1[8] = *(undefined8 *)(param_1 + 0x40);
  puVar1[9] = uVar2;
  puVar1[10] = uVar3;
  puVar1[0xb] = uVar4;
  puVar1[0xc] = *(undefined8 *)(param_1 + 0x60);
  return;
}



// FUNCTION 143d17878 FUN_143d17878 body=147 status=ok
// SIG undefined FUN_143d17878(void)

void FUN_143d17878(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 7) {
    FUN_1446efa72(param_2,0,7,0x10);
    *(undefined4 *)(param_2 + 1) = 7;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f8960;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(param_1 + 0x30);
  puVar1[7] = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  puVar1[8] = *(undefined8 *)(param_1 + 0x40);
  puVar1[9] = uVar2;
  puVar1[10] = uVar3;
  puVar1[0xb] = uVar4;
  puVar1[0xc] = *(undefined8 *)(param_1 + 0x60);
  return;
}



// FUNCTION 143d1790c FUN_143d1790c body=180 status=ok
// SIG undefined FUN_143d1790c(void)

void FUN_143d1790c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined4 uVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  DWORD DVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 uVar9;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 7) {
    FUN_1446efa72(param_2 + 1,0,7,0x10);
    param_2[1].LockCount = 7;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14a3a3510;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14b3f8960;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  p_Var2->EntryCount = (int)uVar3;
  p_Var2->ContentionCount = (int)((ulonglong)uVar3 >> 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var2->Flags = (int)uVar3;
  p_Var2->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var2->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  p_Var2[1].Type = (short)uVar1;
  p_Var2[1].CreatorBackTraceIndex = (short)((uint)uVar1 >> 0x10);
  p_Var2[1].CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
  uVar1 = *(undefined4 *)(param_1 + 0x44);
  uVar4 = *(undefined4 *)(param_1 + 0x48);
  uVar5 = *(undefined4 *)(param_1 + 0x4c);
  DVar6 = *(DWORD *)(param_1 + 0x50);
  DVar7 = *(DWORD *)(param_1 + 0x54);
  DVar8 = *(DWORD *)(param_1 + 0x58);
  uVar9 = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)&p_Var2[1].ProcessLocksList.Flink = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)((longlong)&p_Var2[1].ProcessLocksList.Flink + 4) = uVar1;
  *(undefined4 *)&p_Var2[1].ProcessLocksList.Blink = uVar4;
  *(undefined4 *)((longlong)&p_Var2[1].ProcessLocksList.Blink + 4) = uVar5;
  p_Var2[1].EntryCount = DVar6;
  p_Var2[1].ContentionCount = DVar7;
  p_Var2[1].Flags = DVar8;
  p_Var2[1].CreatorBackTraceIndexHigh = (short)uVar9;
  p_Var2[1].SpareWORD = (short)((uint)uVar9 >> 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  p_Var2[2].Type = (short)uVar3;
  p_Var2[2].CreatorBackTraceIndex = (short)((ulonglong)uVar3 >> 0x10);
  *(int *)&p_Var2[2].field_0x4 = (int)((ulonglong)uVar3 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d179b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d179c0 FUN_143d179c0 body=66 status=ok
// SIG undefined FUN_143d179c0(void)

void FUN_143d179c0(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_143d17b1c(param_1 + 0x20,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d17a04 FUN_143d17a04 body=279 status=ok
// SIG undefined FUN_143d17a04(void)

undefined8 FUN_143d17a04(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143d17b15;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143d17b15;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143d17b15:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143d17ac9;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143d17b1c(param_1 + 0x20,&local_30);
      uVar6 = 1;
      goto LAB_143d17ac9;
    }
  }
  uVar6 = 0;
LAB_143d17ac9:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d17b1c FUN_143d17b1c body=131 status=ok
// SIG undefined FUN_143d17b1c(void)

void FUN_143d17b1c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    lVar1 = FUN_1410c9586();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      (**(code **)(*param_2 + 0x388))(param_2,*(undefined4 *)(param_1 + 0x20));
      if ((param_2[0x252] != *(longlong *)(param_1 + 8)) ||
         ((int)param_2[0x253] != *(int *)(param_1 + 0x10))) {
        param_2[0x252] = *(longlong *)(param_1 + 8);
        *(undefined4 *)(param_2 + 0x253) = *(undefined4 *)(param_1 + 0x10);
        param_2[0x254] = 0;
      }
      **(longlong **)(param_1 + 0x40) = (longlong)param_2;
    }
  }
  return;
}



// FUNCTION 143d17ba0 FUN_143d17ba0 body=29 status=ok
// SIG undefined FUN_143d17ba0(void)

undefined8 FUN_143d17ba0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d17d3c FUN_143d17d3c body=147 status=ok
// SIG undefined FUN_143d17d3c(void)

void FUN_143d17d3c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 7) {
    FUN_1446efa72(param_2,0,7,0x10);
    *(undefined4 *)(param_2 + 1) = 7;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f89d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(param_1 + 0x30);
  puVar1[7] = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  puVar1[8] = *(undefined8 *)(param_1 + 0x40);
  puVar1[9] = uVar2;
  puVar1[10] = uVar3;
  puVar1[0xb] = uVar4;
  puVar1[0xc] = *(undefined8 *)(param_1 + 0x60);
  return;
}



// FUNCTION 143d17dd0 FUN_143d17dd0 body=147 status=ok
// SIG undefined FUN_143d17dd0(void)

void FUN_143d17dd0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 7) {
    FUN_1446efa72(param_2,0,7,0x10);
    *(undefined4 *)(param_2 + 1) = 7;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f89d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(param_1 + 0x30);
  puVar1[7] = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  puVar1[8] = *(undefined8 *)(param_1 + 0x40);
  puVar1[9] = uVar2;
  puVar1[10] = uVar3;
  puVar1[0xb] = uVar4;
  puVar1[0xc] = *(undefined8 *)(param_1 + 0x60);
  return;
}



// FUNCTION 143d17e64 FUN_143d17e64 body=180 status=ok
// SIG undefined FUN_143d17e64(void)

void FUN_143d17e64(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined4 uVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  DWORD DVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 uVar9;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 7) {
    FUN_1446efa72(param_2 + 1,0,7,0x10);
    param_2[1].LockCount = 7;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14a3a3510;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14b3f89d0;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  p_Var2->EntryCount = (int)uVar3;
  p_Var2->ContentionCount = (int)((ulonglong)uVar3 >> 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var2->Flags = (int)uVar3;
  p_Var2->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var2->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  p_Var2[1].Type = (short)uVar1;
  p_Var2[1].CreatorBackTraceIndex = (short)((uint)uVar1 >> 0x10);
  p_Var2[1].CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
  uVar1 = *(undefined4 *)(param_1 + 0x44);
  uVar4 = *(undefined4 *)(param_1 + 0x48);
  uVar5 = *(undefined4 *)(param_1 + 0x4c);
  DVar6 = *(DWORD *)(param_1 + 0x50);
  DVar7 = *(DWORD *)(param_1 + 0x54);
  DVar8 = *(DWORD *)(param_1 + 0x58);
  uVar9 = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)&p_Var2[1].ProcessLocksList.Flink = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)((longlong)&p_Var2[1].ProcessLocksList.Flink + 4) = uVar1;
  *(undefined4 *)&p_Var2[1].ProcessLocksList.Blink = uVar4;
  *(undefined4 *)((longlong)&p_Var2[1].ProcessLocksList.Blink + 4) = uVar5;
  p_Var2[1].EntryCount = DVar6;
  p_Var2[1].ContentionCount = DVar7;
  p_Var2[1].Flags = DVar8;
  p_Var2[1].CreatorBackTraceIndexHigh = (short)uVar9;
  p_Var2[1].SpareWORD = (short)((uint)uVar9 >> 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  p_Var2[2].Type = (short)uVar3;
  p_Var2[2].CreatorBackTraceIndex = (short)((ulonglong)uVar3 >> 0x10);
  *(int *)&p_Var2[2].field_0x4 = (int)((ulonglong)uVar3 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d17f09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d17f18 FUN_143d17f18 body=66 status=ok
// SIG undefined FUN_143d17f18(void)

void FUN_143d17f18(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_143d18074(param_1 + 0x20,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d17f5c FUN_143d17f5c body=279 status=ok
// SIG undefined FUN_143d17f5c(void)

undefined8 FUN_143d17f5c(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143d1806d;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143d1806d;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143d1806d:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143d18021;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143d18074(param_1 + 0x20,&local_30);
      uVar6 = 1;
      goto LAB_143d18021;
    }
  }
  uVar6 = 0;
LAB_143d18021:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d18074 FUN_143d18074 body=131 status=ok
// SIG undefined FUN_143d18074(void)

void FUN_143d18074(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    lVar1 = FUN_1410c9586();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      (**(code **)(*param_2 + 0x388))(param_2,*(undefined4 *)(param_1 + 0x20));
      if ((param_2[0x252] != *(longlong *)(param_1 + 8)) ||
         ((int)param_2[0x253] != *(int *)(param_1 + 0x10))) {
        param_2[0x252] = *(longlong *)(param_1 + 8);
        *(undefined4 *)(param_2 + 0x253) = *(undefined4 *)(param_1 + 0x10);
        param_2[0x254] = 0;
      }
      **(longlong **)(param_1 + 0x40) = (longlong)param_2;
    }
  }
  return;
}



// FUNCTION 143d180f8 FUN_143d180f8 body=243 status=ok
// SIG undefined FUN_143d180f8(void)

void FUN_143d180f8(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar3 = (longlong)param_2 * 0x30;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar2 & (uVar3 + uVar2) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    iVar1 = (int)(uVar3 / 0x30);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x30,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 143d181ec FUN_143d181ec body=29 status=ok
// SIG undefined FUN_143d181ec(void)

undefined8 FUN_143d181ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d18388 FUN_143d18388 body=93 status=ok
// SIG undefined FUN_143d18388(void)

void FUN_143d18388(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3f8ab0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143d183e6 FUN_143d183e6 body=93 status=ok
// SIG undefined FUN_143d183e6(void)

void FUN_143d183e6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3f8ab0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143d18444 FUN_143d18444 body=126 status=ok
// SIG undefined FUN_143d18444(void)

void FUN_143d18444(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b3f8ab0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d184b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d184cc FUN_143d184cc body=266 status=ok
// SIG undefined FUN_143d184cc(void)

undefined8 FUN_143d184cc(longlong param_1)

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
    if (iVar1 == 2) goto LAB_143d185d0;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143d185d0;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143d185d0:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143d18577;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1457917a6(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_143d18577;
    }
  }
  uVar6 = 0;
LAB_143d18577:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d185d8 FUN_143d185d8 body=29 status=ok
// SIG undefined FUN_143d185d8(void)

undefined8 FUN_143d185d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d18774 FUN_143d18774 body=93 status=ok
// SIG undefined FUN_143d18774(void)

void FUN_143d18774(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f8d60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f8b20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143d187d2 FUN_143d187d2 body=93 status=ok
// SIG undefined FUN_143d187d2(void)

void FUN_143d187d2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f8d60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f8b20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143d18830 FUN_143d18830 body=126 status=ok
// SIG undefined FUN_143d18830(void)

void FUN_143d18830(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3f8d60;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3f8b20;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d1889f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d188b8 FUN_143d188b8 body=284 status=ok
// SIG undefined FUN_143d188b8(void)

undefined8 FUN_143d188b8(longlong param_1,undefined4 param_2,undefined8 param_3)

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
    if (iVar1 == 2) goto LAB_143d189cd;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143d189cd;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_143d189cd:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143d1896b;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_148827fbc(*(undefined8 *)(param_1 + 0x20),param_2,param_3);
      uVar6 = 1;
      goto LAB_143d1896b;
    }
  }
  uVar6 = 0;
LAB_143d1896b:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d189d6 FUN_143d189d6 body=64 status=ok
// SIG undefined FUN_143d189d6(void)

undefined8 * FUN_143d189d6(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b3f8b90;
  plVar2 = (longlong *)param_1[4];
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



// FUNCTION 143d18a1a FUN_143d18a1a body=81 status=ok
// SIG undefined FUN_143d18a1a(void)

undefined8 FUN_143d18a1a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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



// FUNCTION 143d18a70 FUN_143d18a70 body=89 status=ok
// SIG undefined FUN_143d18a70(void)

bool FUN_143d18a70(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_143d18abb;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_143d18abb:
  return lVar6 == param_2;
}



// FUNCTION 143d18ae6 FUN_143d18ae6 body=118 status=ok
// SIG undefined FUN_143d18ae6(void)

void FUN_143d18ae6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f8f90;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f8b90;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143d18b5c FUN_143d18b5c body=118 status=ok
// SIG undefined FUN_143d18b5c(void)

void FUN_143d18b5c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f8f90;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f8b90;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143d18bd2 FUN_143d18bd2 body=156 status=ok
// SIG undefined FUN_143d18bd2(void)

void FUN_143d18bd2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3f8f90;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3f8b90;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d18c5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d18c78 FUN_143d18c78 body=46 status=ok
// SIG undefined FUN_143d18c78(void)

undefined8 FUN_143d18c78(longlong param_1)

{
  undefined8 uVar1;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_141496108(*(undefined8 *)(param_1 + 0x28));
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 143d18ca6 FUN_143d18ca6 body=325 status=ok
// SIG undefined FUN_143d18ca6(void)

void FUN_143d18ca6(longlong *param_1)

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
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x3c + (longlong)iVar4 * 0x40) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d18dec FUN_143d18dec body=64 status=ok
// SIG undefined FUN_143d18dec(void)

undefined8 * FUN_143d18dec(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b3f8c00;
  plVar2 = (longlong *)param_1[4];
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



// FUNCTION 143d18e30 FUN_143d18e30 body=81 status=ok
// SIG undefined FUN_143d18e30(void)

undefined8 FUN_143d18e30(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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



// FUNCTION 143d18e86 FUN_143d18e86 body=89 status=ok
// SIG undefined FUN_143d18e86(void)

bool FUN_143d18e86(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_143d18ed1;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_143d18ed1:
  return lVar6 == param_2;
}



// FUNCTION 143d18efc FUN_143d18efc body=118 status=ok
// SIG undefined FUN_143d18efc(void)

void FUN_143d18efc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f8c00;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143d18f72 FUN_143d18f72 body=118 status=ok
// SIG undefined FUN_143d18f72(void)

void FUN_143d18f72(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f8c00;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143d18fe8 FUN_143d18fe8 body=156 status=ok
// SIG undefined FUN_143d18fe8(void)

void FUN_143d18fe8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3f8c00;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d19074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d1908e FUN_143d1908e body=46 status=ok
// SIG undefined FUN_143d1908e(void)

undefined8 FUN_143d1908e(longlong param_1)

{
  undefined8 uVar1;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_1415b8b76(*(undefined8 *)(param_1 + 0x28));
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 143d190e2 FUN_143d190e2 body=53 status=ok
// SIG undefined FUN_143d190e2(void)

void FUN_143d190e2(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14050b866(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  return;
}


