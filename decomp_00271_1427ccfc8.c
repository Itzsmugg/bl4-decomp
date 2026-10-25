// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1427ccfc8 FUN_1427ccfc8 body=29 status=ok
// SIG undefined FUN_1427ccfc8(void)

undefined8 FUN_1427ccfc8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1427ccfe6 FUN_1427ccfe6 body=56 status=ok
// SIG undefined FUN_1427ccfe6(void)

void FUN_1427ccfe6(longlong *param_1)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  longlong *plVar3;
  
  lVar1 = *param_1;
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 400);
  plVar3 = (longlong *)(lVar1 + 0x1b0);
  if (*(longlong **)(lVar1 + 0x1a0) != (longlong *)0x0) {
    plVar3 = *(longlong **)(lVar1 + 0x1a0);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001427cd01b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2);
  return;
}



// FUNCTION 1427cd048 FUN_1427cd048 body=29 status=ok
// SIG undefined FUN_1427cd048(void)

undefined8 FUN_1427cd048(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1427cd065 FUN_1427cd065 body=755 status=ok
// SIG undefined FUN_1427cd065(void)

void FUN_1427cd065(void)

{
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined1 *local_30;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = &local_19;
  local_38 = &DAT_14c948628;
  FUN_14058d408(FUN_1462721b9,&LAB_145b095aa,L"/Script/CoreUObject",L"UTextBuffer");
  DAT_14c948640 = 0;
  DAT_14c948648 = 0;
  atexit(FUN_1427b994a);
  DAT_14c948650 = 0;
  DAT_14c948658 = 0;
  atexit(FUN_1427b99a5);
  local_38 = (undefined8 *)((ulonglong)local_38 & 0xffffffff00000000);
  FUN_141471170(&DAT_14c948660,L"s.AsyncLoadingThreadEnabled",&DAT_14c948670,
                L"Placeholder console variable, currently not used in runtime.");
  atexit(FUN_1427b9c0f);
  local_38 = (undefined8 *)((ulonglong)local_38 & 0xffffffff00000000);
  FUN_141471170(&DAT_14c948678,L"s.AsyncLoadingAlwaysProcessPackages",&DAT_14c948688,
                L"When flushing, will process all packages instead of only what\'s needed. (Used to avoid a hard to repro potential deadlock)"
               );
  atexit(FUN_1427b9c54);
  local_38 = (undefined8 *)((ulonglong)local_38 & 0xffffffff00000000);
  FUN_141471170(&DAT_14c948690,L"s.FlushStreamingOnExit",&DAT_14c75ec24,
                L"Placeholder console variable, currently not used in runtime.");
  atexit(FUN_1427b9c99);
  local_38 = (undefined8 *)((ulonglong)local_38 & 0xffffffff00000000);
  FUN_141471170(&DAT_14c9486a0,L"s.EventDrivenLoaderEnabled",&DAT_14c9486b0,
                L"Placeholder console variable, currently not used in runtime.");
  atexit(FUN_1427b9cde);
  local_38 = (undefined8 *)((ulonglong)local_38 & 0xffffffff00000000);
  FUN_141471170(&DAT_14c9486b8,L"s.MaxReadyRequestsToStallMB",&DAT_14c75ec28,
                L"Controls the maximum amount memory for unhandled IO requests before we stall the pak precacher to let the CPU catch up (in megabytes)."
               );
  atexit(FUN_1427b9d23);
  local_38 = (undefined8 *)((ulonglong)local_38 & 0xffffffff00000000);
  FUN_141471170(&DAT_14c9486c8,L"s.MaxPrecacheRequestsInFlight",&DAT_14c75ec2c,
                L"Controls the maximum amount of precache requests to have in flight.");
  atexit(FUN_1427b9d68);
  local_38 = (undefined8 *)((ulonglong)local_38 & 0xffffffff00000000);
  FUN_141471170(&DAT_14c9486d8,L"s.MaxIncomingRequestsToStall",&DAT_14c75ec30,
                L"Controls the maximum number of unhandled IO requests before we stall the pak precacher to let the CPU catch up."
               );
  atexit(FUN_1427b9dad);
  local_38 = (undefined8 *)((ulonglong)local_38 & 0xffffffff00000000);
  FUN_141471170(&DAT_14c9486f0,L"s.ProcessPrestreamingRequests",&DAT_14c9486e8,
                L"If non-zero, then we process prestreaming requests in cooked builds.");
  atexit(FUN_1427b9df2);
  local_38 = (undefined8 *)((ulonglong)local_38 & 0xffffffff00000000);
  FUN_141471170(&DAT_14c948708,L"s.EditorLoadPrecacheSizeKB",&DAT_14c948700,
                L"Size, in KB, to precache when loading packages in the editor.");
  atexit(FUN_1427b9e37);
  local_38 = (undefined8 *)((ulonglong)local_38 & 0xffffffff00000000);
  FUN_141471170(&DAT_14c948720,L"s.AsyncLoadingPrecachePriority",&DAT_14c948718,
                L"Priority of asyncloading precache requests");
  atexit(FUN_1427b9e7c);
  DAT_14c948734 = 0;
  DAT_14c948740 = 0;
  local_38 = (undefined8 *)((ulonglong)local_38 & 0xffffffff00000000);
  FUN_141471170(&DAT_14c948748,L"s.RandomizeLoadOrder",&DAT_14c948744,
                L"If > 0, will randomize the load order of pending packages using this seed instead of using the most efficient order. This can be used to find bugs."
               );
  atexit(FUN_1427bad3f);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c948778);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c948778,4000);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    atexit((_func_5014 *)&LAB_1427c4e13);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 1427cd35c FUN_1427cd35c body=47 status=ok
// SIG undefined FUN_1427cd35c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427cd35c(void)

{
  _DAT_14c948938 = 0;
  if (DAT_14c948930 != 0) {
    FUN_1400020a8();
  }
  FUN_145af6fb8(&DAT_14c9488f0);
  return;
}



// FUNCTION 1427cd39c FUN_1427cd39c body=47 status=ok
// SIG undefined FUN_1427cd39c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427cd39c(void)

{
  _DAT_14c948998 = 0;
  if (DAT_14c948990 != 0) {
    FUN_1400020a8();
  }
  FUN_145af6fb8(&DAT_14c948950);
  return;
}



// FUNCTION 1427cd3dc FUN_1427cd3dc body=69 status=ok
// SIG undefined FUN_1427cd3dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427cd3dc(void)

{
  _DAT_14c9489b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427cd41e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9489b8,1);
  return;
}



// FUNCTION 1427cd421 FUN_1427cd421 body=69 status=ok
// SIG undefined FUN_1427cd421(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427cd421(void)

{
  _DAT_14c9489c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427cd463. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9489d0,1);
  return;
}



// FUNCTION 1427cd466 FUN_1427cd466 body=69 status=ok
// SIG undefined FUN_1427cd466(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427cd466(void)

{
  _DAT_14c9489e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427cd4a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9489e8,1);
  return;
}



// FUNCTION 1427cd4ab FUN_1427cd4ab body=69 status=ok
// SIG undefined FUN_1427cd4ab(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427cd4ab(void)

{
  _DAT_14c9489f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427cd4ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c948a00,1);
  return;
}



// FUNCTION 1427cd4f0 FUN_1427cd4f0 body=69 status=ok
// SIG undefined FUN_1427cd4f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427cd4f0(void)

{
  _DAT_14c948a08 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427cd532. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c948a10,1);
  return;
}



// FUNCTION 1427cd535 FUN_1427cd535 body=69 status=ok
// SIG undefined FUN_1427cd535(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427cd535(void)

{
  _DAT_14c948a18 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427cd577. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c948a20,1);
  return;
}



// FUNCTION 1427cd57a FUN_1427cd57a body=566 status=ok
// SIG undefined FUN_1427cd57a(void)

void FUN_1427cd57a(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_68 [32];
  longlong *local_48;
  int local_40;
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar2 = (longlong *)**(longlong **)(param_1 + 0x298);
  local_48 = (longlong *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,2,0x10);
  local_40 = 2;
  *local_48 = (longlong)&PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar7;
  *local_48 = (longlong)&PTR_FUN_149e68810;
  local_48[3] = param_1 + -8;
  if ((local_48 == (longlong *)0x0) || (cVar5 = (**(code **)(*local_48 + 0x30))(), cVar5 == '\0')) {
    if (local_40 != 0) {
      if (local_48 == (longlong *)0x0) goto LAB_1427cd724;
      (**(code **)*local_48)(local_48,0);
      FUN_1446efa72(&local_48,0,0,0x10);
      goto LAB_1427cd712;
    }
  }
  else {
    if (*(int *)((longlong)plVar2 + 0x14) < 1) {
      iVar1 = (int)plVar2[1];
      iVar6 = (int)plVar2[2] + -1;
      *(int *)(plVar2 + 2) = iVar6;
      if (iVar6 <= iVar1) {
        iVar6 = iVar1;
        if (0 < iVar1) {
          iVar8 = 0;
          do {
            if (((*(int *)(*plVar2 + 8 + (longlong)iVar8 * 0x10) == 0) ||
                (plVar3 = *(longlong **)(*plVar2 + (longlong)iVar8 * 0x10),
                plVar3 == (longlong *)0x0)) ||
               (cVar5 = (**(code **)(*plVar3 + 0x28))(), cVar5 != '\0')) {
              FUN_14005b288(plVar2,iVar8);
              FUN_14005b248(plVar2);
            }
            else {
              iVar8 = iVar8 + 1;
            }
            iVar6 = (int)plVar2[1];
          } while (iVar8 < iVar6);
        }
        iVar8 = 2;
        if (2 < iVar6 * 2) {
          iVar8 = iVar6 * 2;
        }
        *(int *)(plVar2 + 2) = iVar8;
        if ((iVar8 < iVar1) && (*(int *)((longlong)plVar2 + 0xc) != iVar6)) {
          FUN_14045812c();
        }
      }
    }
    if ((local_40 != 0) && (local_48 != (longlong *)0x0)) {
      (**(code **)(*local_48 + 0x38))(local_48,local_38);
    }
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(plVar2,iVar1);
    }
    lVar4 = *plVar2;
    lVar7 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar4 + lVar7) = 0;
    *(undefined4 *)(lVar4 + 8 + lVar7) = 0;
    *(longlong **)(lVar4 + lVar7) = local_48;
    local_48 = (longlong *)0x0;
    *(int *)(lVar4 + 8 + lVar7) = local_40;
LAB_1427cd712:
    local_40 = 0;
  }
  if (local_48 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_1427cd724:
  LOCK();
  *(int *)(param_1 + 0x218) = *(int *)(param_1 + 0x218) + 1;
  UNLOCK();
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427cd7b2 FUN_1427cd7b2 body=208 status=ok
// SIG undefined FUN_1427cd7b2(void)

void FUN_1427cd7b2(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (*(int *)(param_2 + 0x18) == 0) {
    iVar5 = *(int *)(param_2 + 0x10);
    lVar6 = (longlong)iVar5;
    if (0 < lVar6) {
      do {
        lVar2 = *(longlong *)(*(longlong *)(param_2 + 8) + -8 + lVar6 * 8);
        *(undefined8 *)(lVar2 + 0x2c0) = 0;
        *(longlong *)(lVar2 + 0x2c8) = param_2;
        LOCK();
        *(undefined1 *)(lVar2 + 0x2f4) = 8;
        UNLOCK();
        if (0 < *(int *)(lVar2 + 0x170)) {
          lVar8 = 0x100000000;
          lVar7 = 0;
          do {
            lVar3 = *(longlong *)(lVar2 + 0x150);
            LOCK();
            piVar1 = (int *)(lVar3 + 0x38 + (lVar8 >> 0x1a));
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              FUN_1400ee78c(lVar3 + (lVar8 >> 0x1a),param_1);
            }
            lVar7 = lVar7 + 1;
            lVar8 = lVar8 + 0x300000000;
          } while (lVar7 < *(int *)(lVar2 + 0x170));
        }
        bVar4 = 1 < lVar6;
        lVar6 = lVar6 + -1;
      } while (bVar4);
      iVar5 = *(int *)(param_2 + 0x10);
    }
    *(int *)(param_2 + 0x1c) = iVar5;
  }
  return;
}



// FUNCTION 1427cd882 FUN_1427cd882 body=296 status=ok
// SIG undefined FUN_1427cd882(void)

void FUN_1427cd882(undefined8 param_1,undefined8 param_2,ulonglong param_3,longlong param_4)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((*(ulonglong *)(param_4 + 0x2b8) < param_3) && (*(byte *)(param_4 + 0x2f4) < 0xe)) {
    LOCK();
    *(ulonglong *)(param_4 + 0x2b8) = param_3;
    UNLOCK();
    puVar5 = *(ulonglong **)(param_4 + 0x2c0);
    if (((puVar5 != (ulonglong *)0x0) ||
        (puVar5 = *(ulonglong **)(param_4 + 0x2c8), puVar5 != (ulonglong *)0x0)) &&
       (*puVar5 < param_3)) {
      *puVar5 = param_3;
      uVar4 = puVar5[2];
      if ((longlong)(int)uVar4 != 0) {
        uVar2 = puVar5[1];
        lVar6 = 0;
        do {
          if (*(ulonglong *)(*(longlong *)(uVar2 + lVar6) + 0x2b8) < param_3) {
            FUN_1427cd882(param_1,param_2,param_3);
          }
          lVar6 = lVar6 + 8;
        } while ((longlong)(int)uVar4 * 8 != lVar6);
      }
    }
    iVar1 = *(int *)(param_4 + 0x148);
    if ((longlong)iVar1 != 0) {
      lVar6 = *(longlong *)(param_4 + 0x140);
      lVar7 = 0;
      do {
        lVar3 = *(longlong *)(lVar6 + lVar7);
        if ((lVar3 != 0) && (*(ulonglong *)(lVar3 + 0x2b8) < param_3)) {
          FUN_1427cd882(param_1,param_2,param_3);
        }
        lVar7 = lVar7 + 8;
      } while ((longlong)iVar1 * 8 != lVar7);
    }
    if (*(int *)(param_4 + 0xdc) != 0x7fffffff) {
      *(undefined4 *)(param_4 + 0xdc) = 0x7fffffff;
      FUN_140f60f94(param_1,param_2,param_4);
      return;
    }
  }
  return;
}



// FUNCTION 1427cd9aa FUN_1427cd9aa body=4794 status=ok
// SIG undefined FUN_1427cd9aa(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1427cd9aa(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  DWORD DVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  DWORD dwTlsIndex;
  DWORD DVar14;
  longlong lVar15;
  undefined8 uVar16;
  longlong lVar17;
  byte bVar18;
  int iVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  undefined2 *puVar24;
  ulonglong uVar25;
  longlong *plVar26;
  uint uVar27;
  uint *puVar28;
  ulonglong uVar29;
  int iVar30;
  int iVar31;
  uint *puVar32;
  bool bVar33;
  undefined1 auStack_12a8 [32];
  uint **local_1288;
  longlong **local_1280;
  longlong *local_1278;
  longlong local_1268;
  longlong local_1260;
  longlong *local_1258;
  longlong *local_1250;
  LPCRITICAL_SECTION local_1248;
  undefined4 local_1240;
  int local_123c;
  int *local_1238;
  longlong *local_1230;
  LPCRITICAL_SECTION local_1228;
  longlong local_1220;
  ulonglong local_1218;
  LPVOID local_1210;
  longlong local_1208;
  ulonglong local_1200;
  uint local_11f8;
  undefined4 uStack_11f4;
  int iStack_11f0;
  undefined4 uStack_11ec;
  undefined4 local_11e8;
  undefined4 uStack_11e4;
  undefined4 uStack_11e0;
  undefined4 uStack_11dc;
  undefined1 local_11d8 [8];
  longlong local_11d0;
  uint *local_11c8;
  uint *local_11c0;
  undefined4 local_11b8;
  undefined1 local_11b3;
  undefined8 **local_11a8;
  undefined4 local_11a0;
  longlong local_1198;
  undefined8 **local_1190;
  undefined4 local_1188;
  uint *local_1180;
  uint *local_1178;
  undefined4 local_1170;
  undefined8 local_1168;
  undefined4 local_1160;
  undefined1 local_1158 [8];
  undefined8 local_1150;
  undefined8 local_1148;
  undefined8 uStack_1140;
  uint *local_1138;
  undefined4 uStack_1130;
  undefined4 uStack_112c;
  char local_1121;
  uint *local_1120;
  uint *local_1118;
  undefined4 local_1110;
  undefined8 local_1108;
  undefined4 local_1100;
  uint local_8f8;
  undefined4 uStack_8f4;
  int local_8f0;
  undefined8 local_8e8;
  undefined8 uStack_8e0;
  undefined4 local_8d8;
  undefined4 uStack_8d4;
  uint *puStack_8d0;
  undefined4 local_8c8;
  longlong *local_8c0;
  longlong local_8b8;
  undefined8 local_8b0;
  byte local_8a0;
  uint *local_898;
  undefined8 uStack_890;
  undefined8 local_888;
  undefined8 uStack_880;
  undefined8 local_878;
  uint uStack_870;
  uint uStack_86c;
  undefined8 local_868;
  undefined8 local_860;
  undefined1 local_858 [16];
  undefined8 local_848;
  undefined8 local_840;
  uint local_838;
  undefined4 uStack_834;
  undefined8 local_830;
  undefined8 local_828;
  undefined1 local_62 [2];
  ulonglong local_60;
  undefined8 uStack_48;
  
  uStack_48 = 0x1427cd9c0;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_12a8;
  dwTlsIndex = DAT_14c75ec34;
  local_1260 = param_2;
  if (DAT_14c75ec34 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar14 = 0xffffffff;
    LOCK();
    bVar33 = DAT_14c75ec34 != 0xffffffff;
    DVar6 = dwTlsIndex;
    if (bVar33) {
      DVar14 = DAT_14c75ec34;
      DVar6 = DAT_14c75ec34;
    }
    DAT_14c75ec34 = DVar6;
    UNLOCK();
    if (bVar33) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar14;
    }
  }
  lVar15 = local_1260;
  local_1210 = TlsGetValue(dwTlsIndex);
  if (local_1210 == (LPVOID)0x0) {
    local_1210 = (LPVOID)FUN_14001cc68(0x60,0x10);
    FUN_141073f92(local_1210);
    FUN_140fddf04(local_1210);
    TlsSetValue(dwTlsIndex,local_1210);
  }
  local_1240 = *(undefined4 *)((longlong)local_1210 + 0x50);
  *(undefined4 *)((longlong)local_1210 + 0x50) = 0;
  local_123c = 0x7fffffff;
  if (*(char *)(lVar15 + 0x8c) != '\0') {
    local_123c = 4;
  }
  local_1150 = **(undefined8 **)(param_1 + 0x290);
  local_1148 = 0;
  uStack_1140 = 0;
  FUN_142767380(local_1158,*(undefined8 *)(param_1 + 0x2a0));
  local_1250 = (longlong *)(param_1 + 0x3b0);
  if (0 < *(int *)(param_1 + 0x3b8)) {
    uVar27 = 0;
    do {
      *(undefined1 *)(lVar15 + 0x8a) = 1;
      uVar21 = (ulonglong)uVar27;
      lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x3b0) + uVar21 * 8);
      local_898 = (uint *)0x0;
      uStack_890 = (uint *)((ulonglong)uStack_890 & 0xffffffff00000000);
      local_888 = (undefined1 *)0x0;
      uStack_880 = uStack_880 & 0xffffffff00000000;
      iVar8 = FUN_144afd5ce(*(undefined8 *)(param_1 + 0x2a0),*(undefined8 *)(lVar17 + 0x100),
                            *(undefined8 *)(lVar17 + 0x108),&local_898);
      if (iVar8 == 1) {
        local_1118 = (uint *)0x0;
        local_1110 = 0;
        local_1108 = 0;
        local_1100 = 0;
        local_1288 = &local_1118;
        FUN_1401cbd08(param_1,lVar15,&local_1150,lVar17);
        LOCK();
        *(undefined1 *)(lVar17 + 0x2f4) = 1;
        UNLOCK();
        *(undefined1 *)(lVar17 + 0x368) = 1;
        lVar17 = *(longlong *)(lVar17 + 200);
        LOCK();
        piVar2 = (int *)(lVar17 + 0x38);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          FUN_1400ee78c(lVar17,lVar15);
        }
LAB_1427cdb86:
        iVar8 = *(int *)(param_1 + 0x3b8);
        if (~uVar27 + iVar8 != 0) {
          memmove((void *)(*(longlong *)(param_1 + 0x3b0) + uVar21 * 8),
                  (void *)(*(longlong *)(param_1 + 0x3b0) + uVar21 * 8 + 8),
                  (longlong)(int)(~uVar27 + iVar8) << 3);
          iVar8 = *(int *)(param_1 + 0x3b8);
        }
        *(int *)(param_1 + 0x3b8) = iVar8 + -1;
        FUN_1417127e2(local_1250);
        uVar27 = uVar27 - 1;
      }
      else if (iVar8 == 3) {
        local_1288 = &local_898;
        FUN_1401cbd08(param_1,lVar15,&local_1150,lVar17);
        FUN_1401cbed4(lVar17,&local_1150);
        goto LAB_1427cdb86;
      }
      uVar27 = uVar27 + 1;
    } while ((int)uVar27 < *(int *)(param_1 + 0x3b8));
  }
  local_1248 = (LPCRITICAL_SECTION)(param_1 + 0xb0);
  local_1208 = param_1 + 0x110;
  local_1238 = (int *)(param_1 + 0x218);
  local_1258 = (longlong *)(param_1 + 0x1b8);
  local_1268 = param_1 + 0x1c8;
  local_1220 = param_1 + 0x1f0;
  local_1228 = (LPCRITICAL_SECTION)(param_1 + 0x88);
  local_1230 = (longlong *)(param_1 + 0x78);
  uVar21 = 0;
  do {
    iVar8 = 0;
    local_1200 = uVar21;
    do {
      *(undefined1 *)(lVar15 + 0x8a) = 1;
      lVar17 = **(longlong **)(param_1 + 0x3a8);
      if (lVar17 == 0) {
        uVar21 = CONCAT71((int7)(local_1200 >> 8),(byte)local_1200 | iVar8 != 0);
        if (iVar8 == 0) goto LAB_1427ceb92;
        goto LAB_1427ceb7c;
      }
      local_8f0 = *(int *)(lVar17 + 0x10);
      local_8f8 = (uint)*(undefined8 *)(lVar17 + 8);
      uStack_8f4 = (undefined4)((ulonglong)*(undefined8 *)(lVar17 + 8) >> 0x20);
      local_8e8 = *(undefined8 *)(lVar17 + 0x18);
      uStack_8e0 = *(longlong **)(lVar17 + 0x20);
      *(undefined8 *)(lVar17 + 0x18) = 0;
      *(undefined8 *)(lVar17 + 0x20) = 0;
      local_8c8 = *(undefined4 *)(lVar17 + 0x38);
      local_8d8 = *(undefined4 *)(lVar17 + 0x28);
      uStack_8d4 = *(undefined4 *)(lVar17 + 0x2c);
      puStack_8d0 = *(uint **)(lVar17 + 0x30);
      local_8c0 = *(longlong **)(lVar17 + 0x40);
      *(undefined8 *)(lVar17 + 0x40) = 0;
      local_8b8 = *(longlong *)(lVar17 + 0x48);
      *(undefined8 *)(lVar17 + 0x48) = 0;
      local_8b0 = *(undefined8 *)(lVar17 + 0x50);
      FUN_1400020a8(*(undefined8 *)(param_1 + 0x3a8));
      *(longlong *)(param_1 + 0x3a8) = lVar17;
      local_8a0 = 1;
      LOCK();
      *(int *)(param_1 + 0x208) = *(int *)(param_1 + 0x208) + -1;
      UNLOCK();
      local_1178 = (uint *)0x0;
      local_1170 = 0;
      local_1168 = 0;
      local_1160 = 0;
      local_1180 = puStack_8d0;
      uVar9 = FUN_14026f16c(&local_1180,&local_1118,0x40b);
      local_1190 = (undefined8 **)&local_1118;
      local_1188 = uVar9;
      cVar7 = FUN_14022f3b8(&local_1190,0,0);
      if (cVar7 == '\0') {
        local_11f8 = 0;
        uStack_11f4 = 0;
        iStack_11f0 = 0;
        uStack_11ec = 0;
        FUN_14006620a(&local_898,&local_1118,uVar9);
        local_1138 = local_898;
        uStack_1130 = (undefined4)uStack_890;
        uStack_112c = uStack_890._4_4_;
        cVar7 = FUN_140f11842(&local_1138,&local_11f8,0,0);
        if (local_1138 != (uint *)0x0) {
          FUN_1400020a8();
        }
        if (cVar7 != '\0') {
          puVar24 = &DAT_149dfb77a;
          if (iStack_11f0 != 0) {
            puVar24 = (undefined2 *)CONCAT44(uStack_11f4,local_11f8);
          }
          FUN_1446f470e(&local_898,puVar24,1);
          local_1180 = local_898;
        }
        if (CONCAT44(uStack_11f4,local_11f8) != 0) {
          FUN_1400020a8();
        }
      }
      FUN_14491a35e(&local_1198,&local_1180);
      puVar28 = local_1180;
      lVar17 = local_1198;
      local_898 = (uint *)0x0;
      local_11f8 = 0;
      uStack_11f4 = 0;
      cVar7 = FUN_144aa0534(*(undefined8 *)(param_1 + 0x2a0),local_1198,&local_898,&local_11f8);
      if (cVar7 != '\0') {
        lVar17 = CONCAT44(uStack_11f4,local_11f8);
        puStack_8d0 = (uint *)0x0;
        local_8c8 = 0;
        local_1180 = (uint *)0x0;
        puVar28 = local_898;
        local_1198 = lVar17;
      }
      iVar10 = FUN_144afd5ce(*(undefined8 *)(param_1 + 0x2a0),lVar17,puVar28,&local_1178);
      if (iVar10 == 1) {
        EnterCriticalSection(local_1248);
        if (*(int *)(param_1 + 0xe0) != *(int *)(param_1 + 0x10c)) {
          lVar15 = *(longlong *)(param_1 + 0x118);
          if (*(longlong *)(param_1 + 0x118) == 0) {
            lVar15 = local_1208;
          }
          iVar10 = *(int *)(lVar15 + (ulonglong)(*(int *)(param_1 + 0x120) - 1U & (uint)lVar17) * 4)
          ;
          if (iVar10 != -1) {
            do {
              plVar26 = (longlong *)(*(longlong *)(param_1 + 0xd8) + (longlong)iVar10 * 0x18);
              if (*plVar26 == lVar17) {
                if (plVar26 != (longlong *)0x0) {
                  lVar15 = plVar26[1];
                  LeaveCriticalSection(local_1248);
                  if (lVar15 == 0) goto LAB_1427cdfae;
                  lVar17 = *(longlong *)(lVar15 + 0x100);
                  local_1180 = *(uint **)(lVar15 + 0x110);
                  local_8c8 = CONCAT31(local_8c8._1_3_,*(undefined1 *)(lVar15 + 0x118));
                  local_1198 = lVar17;
                  puStack_8d0 = local_1180;
                  iVar10 = FUN_144afd5ce(*(undefined8 *)(param_1 + 0x2a0),lVar17,puVar28,&local_1178
                                        );
                  goto LAB_1427cdfb3;
                }
                break;
              }
              iVar10 = (int)plVar26[2];
            } while (iVar10 != -1);
          }
        }
        LeaveCriticalSection(local_1248);
LAB_1427cdfae:
        iVar10 = 1;
      }
LAB_1427cdfb3:
      if (CONCAT44(uStack_8d4,local_8d8) == 0) {
        puVar32 = (uint *)0x0;
      }
      else {
        uVar9 = FUN_14026f16c(&local_8d8,&local_1118,0x40b);
        local_11a8 = (undefined8 **)&local_1118;
        local_11a0 = uVar9;
        cVar7 = FUN_14022f3b8(&local_11a8,0,0);
        if (cVar7 == '\0') {
          local_11f8 = 0;
          uStack_11f4 = 0;
          iStack_11f0 = 0;
          uStack_11ec = 0;
          FUN_14006620a(&local_898,&local_1118,uVar9);
          local_1138 = local_898;
          uStack_1130 = (undefined4)uStack_890;
          uStack_112c = uStack_890._4_4_;
          cVar7 = FUN_140f11842(&local_1138,&local_11f8,0,0);
          if (local_1138 != (uint *)0x0) {
            FUN_1400020a8();
          }
          if (cVar7 != '\0') {
            puVar24 = &DAT_149dfb77a;
            if (iStack_11f0 != 0) {
              puVar24 = (undefined2 *)CONCAT44(uStack_11f4,local_11f8);
            }
            FUN_1446f470e(&local_8d8,puVar24,1);
          }
          if (CONCAT44(uStack_11f4,local_11f8) != 0) {
            FUN_1400020a8();
          }
        }
        puVar28 = (uint *)CONCAT44(uStack_8d4,local_8d8);
        lVar17 = local_1198;
        puVar32 = puVar28;
      }
      local_11f8 = local_8f8;
      uStack_11f4 = uStack_8f4;
      iStack_11f0 = local_8f0;
      local_11e8 = (undefined4)local_8e8;
      uStack_11e4 = local_8e8._4_4_;
      uStack_11e0 = (undefined4)uStack_8e0;
      uStack_11dc = uStack_8e0._4_4_;
      local_8e8 = 0;
      uStack_8e0 = (longlong *)0x0;
      local_898 = puVar28;
      FUN_14491a35e(local_11d8,&local_898);
      lVar15 = local_1260;
      local_11c8 = local_898;
      local_11b8 = local_8c8;
      local_11c0 = puStack_8d0;
      local_11b3 = puVar32 == (uint *)0x0;
      local_11d0 = lVar17;
      if (iVar10 == 1) {
        local_1120 = local_898;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c948a80) &&
           (FUN_144b3d300(&DAT_14c948a80), DAT_14c948a80 == -1)) {
          DAT_14c948a50 = 0;
          _DAT_14c948a58 = 0;
          DAT_14c948a30 = 0;
          _DAT_14c948a38 = 0;
          _DAT_14c948a5c = 0xffffffff00000080;
          _DAT_14c948a64 = 0;
          DAT_14c948a70 = 0;
          _DAT_14c948a78 = 0;
          atexit(FUN_1427d4da9);
          _Init_thread_footer(&DAT_14c948a80);
        }
        local_1121 = '\0';
        FUN_144a13f80(&DAT_14c948a30,&local_898,&local_1120);
        if (local_1121 == '\0') {
          uStack_880 = uStack_880 & 0xffffffffffffff00;
          local_898 = (uint *)&local_878;
          local_888 = local_62;
          uStack_890 = local_898;
          FUN_14005eb5c(&local_1120,&local_898);
          local_1138 = local_898;
          uStack_1130 = (undefined4)((ulonglong)((longlong)uStack_890 - (longlong)local_898) >> 1);
          FUN_14475c62c(&local_1138);
          if ((char)uStack_880 == '\x01') {
            FUN_1400020a8(local_898);
          }
        }
        if (local_8b8 != 0) {
          local_898 = local_1120;
          uStack_890 = (uint *)0x0;
          local_888 = (undefined1 *)((ulonglong)local_888 & 0xffffffff00000000);
          FUN_146885f5a(local_8b8,&local_898);
        }
        plVar26 = local_8c0;
        if (local_8c0 == (longlong *)0x0) {
          local_898 = &local_11f8;
          uStack_890 = (uint *)CONCAT44(uStack_890._4_4_,1);
          FUN_141711b54(param_1,lVar15,&local_898);
          LOCK();
          *local_1238 = *local_1238 + -1;
          UNLOCK();
          if ((*local_1238 == 0) && (pbVar4 = *(byte **)(param_1 + 0x210), pbVar4 != (byte *)0x0)) {
            LOCK();
            bVar18 = *pbVar4;
            *pbVar4 = 1;
            UNLOCK();
            if ((bVar18 & 3) == 2) {
              FUN_1447458da(pbVar4,0xffffffff);
            }
          }
        }
        else {
          EnterCriticalSection(local_1228);
          local_898 = local_11c8;
          uStack_890 = (uint *)((ulonglong)uStack_890 & 0xffffffff00000000);
          local_888 = (undefined1 *)0x0;
          uStack_880 = 0;
          local_878 = plVar26;
          local_8c0 = (longlong *)0x0;
          local_838 = local_11f8;
          iVar10 = *(int *)(param_1 + 0x80);
          *(uint *)(param_1 + 0x80) = iVar10 + 1U;
          if (*(uint *)(param_1 + 0x84) < iVar10 + 1U) {
            FUN_141712952(local_1230,iVar10);
          }
          lVar17 = *local_1230;
          lVar20 = (longlong)iVar10 * 0x78;
          puVar3 = (undefined4 *)(lVar17 + 0x10 + lVar20);
          *puVar3 = (undefined4)local_888;
          puVar3[1] = local_888._4_4_;
          puVar3[2] = (undefined4)uStack_880;
          puVar3[3] = uStack_880._4_4_;
          *(longlong *)(lVar17 + lVar20) = (longlong)local_898;
          ((longlong *)(lVar17 + lVar20))[1] = (longlong)uStack_890;
          puVar28 = (uint *)(lVar17 + 0x20 + lVar20);
          *puVar28 = (uint)local_878;
          puVar28[1] = local_878._4_4_;
          puVar28[2] = uStack_870;
          puVar28[3] = uStack_86c;
          *(undefined8 *)(lVar17 + 0x30 + lVar20) = 0;
          local_868 = 0;
          *(undefined8 *)(lVar17 + 0x38 + lVar20) = 0x200000001;
          local_860 = 0x200000000;
          *(undefined8 *)(lVar17 + 0x50 + lVar20) = 0;
          local_848 = 0;
          *(undefined8 *)(lVar17 + 0x58 + lVar20) = 0x200000000;
          local_840 = 0x200000000;
          *(ulonglong *)(lVar17 + 0x60 + lVar20) = CONCAT44(uStack_834,local_838);
          *(undefined8 *)(lVar17 + 0x68 + lVar20) = 0;
          local_830 = 0;
          *(undefined8 *)(lVar17 + 0x70 + lVar20) = 0x200000001;
          local_828 = 0x200000000;
          FUN_1402820a6(local_858);
          FUN_14028211c(&local_878);
          LeaveCriticalSection(local_1228);
        }
      }
      else {
        local_1278 = &local_8b8;
        local_1280 = &local_8c0;
        local_1288 = (uint **)0x0;
        uVar16 = FUN_1401cc2a0(param_1,local_1260,&local_11f8,&local_898);
        if ((char)local_898 == '\x01') {
          if (iVar10 == 2) {
            iVar10 = *(int *)(param_1 + 0x3b8);
            *(uint *)(param_1 + 0x3b8) = iVar10 + 1U;
            if (*(uint *)(param_1 + 0x3bc) < iVar10 + 1U) {
              FUN_1401cc13e(local_1250,iVar10);
            }
            *(undefined8 *)(*local_1250 + (longlong)iVar10 * 8) = uVar16;
          }
          else {
            local_1288 = &local_1178;
            FUN_1401cbd08(param_1,lVar15,&local_1150,uVar16);
            FUN_1401cbed4(uVar16,&local_1150);
          }
        }
        else {
          LOCK();
          *local_1238 = *local_1238 + -1;
          UNLOCK();
          if ((*local_1238 == 0) && (pbVar4 = *(byte **)(param_1 + 0x210), pbVar4 != (byte *)0x0)) {
            LOCK();
            bVar18 = *pbVar4;
            *pbVar4 = 1;
            UNLOCK();
            if ((bVar18 & 3) == 2) {
              FUN_1447458da(pbVar4,0xffffffff);
            }
          }
        }
        if (*(int *)(param_1 + 0x1ec) == 0) {
          iVar10 = *(int *)(param_1 + 0x1c0);
          *(int *)(param_1 + 0x1c0) = iVar10 + 1;
          if (*(int *)(param_1 + 0x1c4) == iVar10) {
            FUN_14482b872(local_1258,iVar10);
          }
          iVar30 = *(int *)(param_1 + 0x1e0);
          if (iVar30 == 0) {
            iVar11 = -1;
          }
          else {
            iVar11 = iVar30 + 0x1e;
            if (-1 < iVar30 + -1) {
              iVar11 = iVar30 + -1;
            }
            iVar11 = iVar11 >> 5;
          }
          iVar19 = iVar30 + 1;
          iVar31 = iVar30 + 0x1f;
          if (-1 < iVar30) {
            iVar31 = iVar30;
          }
          if (iVar31 >> 5 == iVar11) {
            *(int *)(param_1 + 0x1e0) = iVar19;
          }
          else {
            if (*(int *)(param_1 + 0x1e4) <= iVar30) {
              iVar11 = iVar30;
              if (iVar30 + 0x20U < 0xa0) {
                iVar19 = 0x80;
              }
              else {
                uVar27 = iVar30 + 0x20U >> 5;
                if (*(int *)(param_1 + 0x1e4) + 0x1fU < 0xa0) {
                  uVar23 = 4;
                  if (4 < uVar27) {
                    uVar23 = uVar27;
                  }
                }
                else {
                  uVar23 = uVar27 + (uVar27 * 3 >> 3) + 0x10;
                }
                uVar21 = (ulonglong)(uVar23 * 4);
                if (DAT_14c872d28 != (longlong *)0x0) {
                  if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                    uVar12 = (uint)(uVar21 + 0xf);
                    if (uVar23 < 0x1ffd) {
                      uVar21 = (ulonglong)
                               (ushort)(&DAT_14c841d90)
                                       [0x32 - (byte)(&DAT_14c841e00)[uVar21 + 0xf >> 4]];
                    }
                    else {
                      uVar22 = (ulonglong)(uVar12 & 0xfffffff0);
                      lVar15 = local_1260;
                      if (uVar22 < 0x7ff1) {
                        bVar18 = (&DAT_14c841e00)[uVar12 >> 4];
                        uVar25 = 0x32;
                        if (0x32 < bVar18) {
                          uVar25 = (ulonglong)bVar18;
                        }
                        uVar29 = 0x32 - (ulonglong)bVar18;
                        do {
                          uVar21 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar29 & 0xffffffff];
                          if (((&DAT_14c841d90)[uVar29 & 0xffffffff] & 0xf) == 0)
                          goto LAB_1427ce8f9;
                          lVar17 = uVar25 + 1 + uVar29;
                          uVar29 = uVar29 - 1;
                        } while (lVar17 != 0x33);
                      }
                      uVar21 = (ulonglong)DAT_14c841df8;
                      if (DAT_14c841df8 < 0x11) {
                        uVar21 = 0x10;
                      }
                      uVar21 = -uVar21 & (uVar22 + uVar21) - 1;
                    }
                  }
                  else {
                    local_1218 = (ulonglong)uVar27;
                    uVar21 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar21,0);
                    uVar27 = (uint)local_1218;
                    iVar11 = *(int *)(param_1 + 0x1e0);
                  }
                }
LAB_1427ce8f9:
                iVar13 = (int)(uVar21 >> 2);
                iVar19 = iVar13 << 5;
                if (iVar13 < (int)uVar27) {
                  iVar19 = -0x20;
                }
              }
              *(int *)(param_1 + 0x1e4) = iVar19;
              FUN_1446efbd8(local_1268,iVar11);
              iVar19 = *(int *)(param_1 + 0x1e0) + 1;
            }
            iVar11 = iVar19 + 0x1f;
            if (-1 < iVar19) {
              iVar11 = iVar19;
            }
            *(int *)(param_1 + 0x1e0) = iVar19;
            if (iVar19 % 0x20 != 0) {
              lVar17 = *(longlong *)(param_1 + 0x1d8);
              if (*(longlong *)(param_1 + 0x1d8) == 0) {
                lVar17 = local_1268;
              }
              bVar18 = -(char)(iVar19 % 0x20);
              *(uint *)(lVar17 + (longlong)(iVar11 >> 5) * 4) =
                   (uint)(*(int *)(lVar17 + (longlong)(iVar11 >> 5) * 4) << (bVar18 & 0x1f)) >>
                   (bVar18 & 0x1f);
            }
          }
          lVar17 = (longlong)iVar10;
          lVar20 = *(longlong *)(param_1 + 0x1d8);
          if (*(longlong *)(param_1 + 0x1d8) == 0) {
            lVar20 = local_1268;
          }
          bVar18 = (byte)iVar30 & 0x1f;
          puVar28 = (uint *)(lVar20 + (longlong)(iVar31 >> 5) * 4);
          *puVar28 = *puVar28 & (-2 << bVar18 | 0xfffffffeU >> 0x20 - bVar18);
        }
        else {
          iVar10 = *(int *)(param_1 + 0x1e8);
          lVar17 = (longlong)iVar10;
          iVar30 = *(int *)(*(longlong *)(param_1 + 0x1b8) + 4 + lVar17 * 0x18);
          *(int *)(param_1 + 0x1e8) = iVar30;
          iVar11 = *(int *)(param_1 + 0x1ec) + -1;
          *(int *)(param_1 + 0x1ec) = iVar11;
          if (iVar11 != 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x1b8) + (longlong)iVar30 * 0x18) = 0xffffffff;
          }
        }
        lVar20 = *(longlong *)(param_1 + 0x1d8);
        if (*(longlong *)(param_1 + 0x1d8) == 0) {
          lVar20 = local_1268;
        }
        iVar30 = iVar10 + 0x1f;
        if (-1 < iVar10) {
          iVar30 = iVar10;
        }
        puVar28 = (uint *)(lVar20 + (longlong)(iVar30 >> 5) * 4);
        *puVar28 = *puVar28 | 1 << ((byte)iVar10 & 0x1f);
        puVar28 = (uint *)(*(longlong *)(param_1 + 0x1b8) + lVar17 * 0x18);
        *puVar28 = local_11f8;
        *(undefined8 *)(puVar28 + 2) = uVar16;
        puVar28[4] = 0xffffffff;
        uVar27 = *(int *)(param_1 + 0x1c0) - *(int *)(param_1 + 0x1ec);
        if ((uVar27 != 0) && (uVar27 != 1)) {
          lVar17 = *(longlong *)(param_1 + 0x1f8);
          if (*(longlong *)(param_1 + 0x1f8) == 0) {
            lVar17 = local_1220;
          }
          uVar23 = *(uint *)(lVar17 + (ulonglong)(*(int *)(param_1 + 0x200) - 1U & local_11f8) * 4);
          if (uVar23 != 0xffffffff) {
            do {
              puVar32 = (uint *)(*local_1258 + (longlong)(int)uVar23 * 0x18);
              if (*puVar32 == local_11f8) {
                uVar27 = puVar28[1];
                uVar23 = puVar28[2];
                uVar12 = puVar28[3];
                *puVar32 = *puVar28;
                puVar32[1] = uVar27;
                puVar32[2] = uVar23;
                puVar32[3] = uVar12;
                FUN_1427d761c(local_1258,iVar10);
                goto LAB_1427ce6e3;
              }
              uVar23 = puVar32[4];
            } while (uVar23 != 0xffffffff);
          }
        }
        if (uVar27 < 4) {
          iVar30 = 1;
        }
        else {
          uVar21 = (ulonglong)(uVar27 & 0xfffffffe) + 0xf;
          lVar17 = 0x3f;
          if (uVar21 != 0) {
            for (; uVar21 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          iVar30 = 1 << ((byte)lVar17 & 0x1f);
        }
        if (((int)uVar27 < 1) || (iVar30 <= *(int *)(param_1 + 0x200))) {
          uVar27 = *(int *)(param_1 + 0x200) - 1U & local_11f8;
          puVar28[5] = uVar27;
          lVar17 = *(longlong *)(param_1 + 0x1f8);
          if (*(longlong *)(param_1 + 0x1f8) == 0) {
            lVar17 = local_1220;
          }
          puVar28[4] = *(uint *)(lVar17 + ((longlong)*(int *)(param_1 + 0x200) - 1U &
                                          (longlong)(int)uVar27) * 4);
          lVar17 = *(longlong *)(param_1 + 0x1f8);
          if (*(longlong *)(param_1 + 0x1f8) == 0) {
            lVar17 = local_1220;
          }
          *(int *)(lVar17 + ((longlong)*(int *)(param_1 + 0x200) - 1U & (longlong)(int)uVar27) * 4)
               = iVar10;
        }
        else {
          *(int *)(param_1 + 0x200) = iVar30;
          FUN_1417120da(local_1258);
        }
      }
LAB_1427ce6e3:
      plVar26 = (longlong *)CONCAT44(uStack_11dc,uStack_11e0);
      if (plVar26 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar26 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar26)(plVar26);
          LOCK();
          piVar2 = (int *)((longlong)plVar26 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar26 + 0x10))(plVar26);
          }
        }
      }
      lVar17 = local_8b8;
      if ((local_8a0 & 1) != 0) {
        if (local_8b8 != 0) {
          FUN_1401cb1ee(local_8b8);
          FUN_1400020a8(lVar17);
        }
        plVar26 = local_8c0;
        if (local_8c0 != (longlong *)0x0) {
          if ((int)local_8c0[1] == 0) {
LAB_1427cea71:
            if (*plVar26 != 0) {
              FUN_1400020a8();
            }
          }
          else {
            puVar5 = (undefined8 *)*local_8c0;
            if (puVar5 != (undefined8 *)0x0) {
              (**(code **)*puVar5)(puVar5,0);
              FUN_1446efa72(plVar26,0,0);
              *(undefined4 *)(plVar26 + 1) = 0;
              goto LAB_1427cea71;
            }
          }
          FUN_1400020a8(plVar26);
          lVar15 = local_1260;
        }
        plVar26 = uStack_8e0;
        if (uStack_8e0 != (longlong *)0x0) {
          LOCK();
          plVar1 = uStack_8e0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*uStack_8e0)(uStack_8e0);
            LOCK();
            piVar2 = (int *)((longlong)plVar26 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar26 + 0x10))(plVar26);
            }
          }
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != local_123c);
    uVar21 = CONCAT71((int7)((ulonglong)plVar26 >> 8),1);
LAB_1427ceb7c:
    cVar7 = FUN_1427cec66(lVar15);
    if (cVar7 != '\0') {
LAB_1427ceb92:
      FUN_1400d20b8(local_1150,&local_1150,0);
      FUN_1427673f6(local_1158);
      FUN_1400d6814(&local_1150);
      *(undefined4 *)((longlong)local_1210 + 0x50) = local_1240;
      if ((local_60 ^ (ulonglong)auStack_12a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return uVar21 & 0xffffff01;
    }
  } while( true );
}



// FUNCTION 1427cec66 FUN_1427cec66 body=233 status=ok
// SIG undefined FUN_1427cec66(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1427cec66(longlong param_1)

{
  double dVar1;
  double dVar2;
  BOOL BVar3;
  undefined4 extraout_var;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x8c) == '\x01') {
    BVar3 = QueryPerformanceCounter(&local_20);
    dVar5 = (double)local_20.QuadPart * DAT_14c83f420 + 16777216.0;
    dVar1 = *(double *)(param_1 + 0x90);
    dVar2 = *(double *)(param_1 + 0x98);
    dVar6 = dVar5 - dVar2;
    if ((dVar1 < dVar6) && (DAT_14c948b4c != 0)) {
      if (((DAT_14c75ec60 != dVar2) || (NAN(DAT_14c75ec60) || NAN(dVar2))) &&
         (((double)_DAT_14c75ec58 < dVar6 && ((double)_DAT_14c75ec54 * dVar1 < dVar6)))) {
        DAT_14c75ec60 = dVar2;
      }
    }
    *(double *)(param_1 + 0xa0) = dVar5;
    uVar4 = CONCAT71((int7)(CONCAT44(extraout_var,BVar3) >> 8),1);
    if (dVar1 < dVar6) goto LAB_1427ced32;
  }
  uVar4 = (ulonglong)
          CONCAT31((int3)((uint)*(int *)(DAT_14c950c20 + 8) >> 8),*(int *)(DAT_14c950c20 + 8) != 0);
LAB_1427ced32:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427ced50 FUN_1427ced50 body=1333 status=ok
// SIG undefined FUN_1427ced50(void)

ulonglong FUN_1427ced50(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  DWORD dwTlsIndex;
  LPVOID lpTlsValue;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined8 *puVar20;
  bool bVar21;
  int iVar10;
  
  uVar14 = (ulonglong)DAT_14c75ec34;
  if (DAT_14c75ec34 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    uVar14 = (ulonglong)dwTlsIndex;
    uVar9 = 0xffffffff;
    LOCK();
    bVar21 = DAT_14c75ec34 != 0xffffffff;
    uVar18 = dwTlsIndex;
    if (bVar21) {
      uVar9 = DAT_14c75ec34;
      uVar18 = DAT_14c75ec34;
    }
    DAT_14c75ec34 = uVar18;
    UNLOCK();
    if (bVar21) {
      TlsFree(dwTlsIndex);
      uVar14 = (ulonglong)uVar9;
    }
  }
  lpTlsValue = TlsGetValue((DWORD)uVar14);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_14001cc68(0x60,0x10);
    FUN_141073f92(lpTlsValue);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue((DWORD)uVar14,lpTlsValue);
  }
  uVar1 = *(undefined4 *)((longlong)lpTlsValue + 0x50);
  *(undefined4 *)((longlong)lpTlsValue + 0x50) = 0;
  puVar2 = *(ulonglong **)
            (*(longlong *)(param_2 + 0x28) + (longlong)(*(int *)(param_2 + 0x30) + -1) * 8);
  iVar8 = *(int *)(param_1 + 0x80) + 1;
  *(int *)(param_1 + 0x80) = iVar8;
  if ((*(longlong *)(param_1 + 0x78) == 0) ||
     (*(ulonglong *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + 8) + 0x2b8) < *puVar2)) {
    uVar14 = 0;
  }
  else {
    puVar20 = *(undefined8 **)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined1 *)(param_2 + 0x8a) = 1;
    iVar10 = *(int *)(param_2 + 0x20);
    *(uint *)(param_2 + 0x20) = iVar10 + 1U;
    if (*(uint *)(param_2 + 0x24) < iVar10 + 1U) {
      FUN_14013522c(param_2 + 0x18,iVar10);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x18) + (longlong)iVar10 * 8) = puVar20;
    cVar7 = (**(code **)*puVar20)(param_2,puVar20[1],*(undefined4 *)((longlong)puVar20 + 0x34));
    *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + -1;
    FUN_144841eca(param_2 + 0x18);
    uVar14 = CONCAT71((int7)(uVar14 >> 8),1);
    if (cVar7 == '\x01') {
      FUN_144841f58(puVar20);
    }
  }
  if ((int)*(undefined8 *)(param_1 + 0x70) == 0x7fffffff) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
    uVar9 = *(uint *)(param_1 + 0x60);
    if (0 < (int)uVar9) {
      uVar18 = 0;
      uVar16 = (ulonglong)uVar9;
      do {
        uVar17 = (int)(uVar16 >> 1) + uVar18;
        uVar19 = (uint)uVar16;
        if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x58) + (ulonglong)uVar17 * 8) + 0x18) !=
            0x7fffffff) {
          uVar18 = uVar17 + (uVar19 & 1);
        }
        uVar16 = uVar16 >> 1;
      } while (1 < uVar19);
      if ((int)uVar18 < (int)uVar9) {
        uVar16 = (ulonglong)uVar18;
        lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x58) + uVar16 * 8);
        if ((lVar12 != 0) && (*(int *)(lVar12 + 0x18) == 0x7fffffff)) {
          lVar11 = FUN_1400eea42(param_1 + 0x18);
          if (*(longlong *)(lVar11 + 8) == 0) {
            *(undefined8 *)(lVar11 + 8) = *(undefined8 *)(lVar12 + 8);
          }
          else {
            lVar4 = *(longlong *)(lVar11 + 0x10);
            *(longlong *)(*(longlong *)(lVar12 + 8) + 0x18) = lVar4;
            *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(lVar12 + 8);
          }
          *(undefined8 *)(lVar11 + 0x10) = *(undefined8 *)(lVar12 + 0x10);
          *(undefined8 *)(lVar12 + 8) = 0;
          *(undefined8 *)(lVar12 + 0x10) = 0;
          puVar20 = *(undefined8 **)(*(longlong *)(param_1 + 0x58) + uVar16 * 8);
          *puVar20 = *(undefined8 *)(param_1 + 0x68);
          *(undefined8 **)(param_1 + 0x68) = puVar20;
          iVar10 = *(int *)(param_1 + 0x60);
          if (~uVar18 + iVar10 != 0) {
            memmove((void *)(*(longlong *)(param_1 + 0x58) + uVar16 * 8),
                    (void *)(*(longlong *)(param_1 + 0x58) + uVar16 * 8 + 8),
                    (longlong)(int)(~uVar18 + iVar10) << 3);
            iVar10 = *(int *)(param_1 + 0x60);
          }
          uVar9 = iVar10 - 1;
          *(uint *)(param_1 + 0x60) = uVar9;
        }
      }
    }
    if (uVar9 == 0) {
      lVar12 = -0x8000000000000000;
    }
    else {
      lVar12 = (longlong)
               *(int *)(*(longlong *)
                         (*(longlong *)(param_1 + 0x58) + (longlong)(int)(uVar9 - 1) * 8) + 0x18);
    }
    LOCK();
    *(longlong *)(param_1 + 0x70) = lVar12;
    UNLOCK();
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  }
  uVar9 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar9) {
    uVar19 = 0;
    uVar18 = uVar9;
    do {
      uVar17 = (uVar18 >> 1) + uVar19;
      if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar17 * 8) + 0x18) !=
          0x7fffffff) {
        uVar19 = uVar17 + (uVar18 & 1);
      }
      bVar21 = 1 < uVar18;
      uVar18 = uVar18 >> 1;
    } while (bVar21);
    if (((((int)uVar19 < (int)uVar9) &&
         (lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar19 * 8), lVar12 != 0
         )) && (*(int *)(lVar12 + 0x18) == 0x7fffffff)) &&
       (*(undefined8 **)(lVar12 + 8) != (undefined8 *)0x0)) {
      lVar11 = param_2 + 0x18;
      puVar20 = *(undefined8 **)(lVar12 + 8);
      do {
        while (puVar3 = (undefined8 *)puVar20[4], *puVar2 <= *(ulonglong *)(puVar20[1] + 0x2b8)) {
          lVar4 = puVar20[3];
          lVar5 = puVar20[4];
          puVar20[3] = 0;
          puVar20[4] = 0;
          if (lVar5 == 0 || lVar4 == 0) {
            plVar13 = (longlong *)(lVar12 + 8);
            if (lVar4 != 0) {
              plVar13 = (longlong *)(lVar4 + 0x20);
            }
            plVar15 = (longlong *)(lVar5 + 0x18);
            if (lVar5 == 0) {
              plVar15 = (longlong *)(lVar12 + 0x10);
            }
            *plVar13 = lVar5;
            *plVar15 = lVar4;
            if ((*(longlong *)(lVar12 + 8) == 0) &&
               (uVar9 = *(uint *)(param_1 + 0x20), 0 < (int)uVar9)) {
              uVar19 = 0;
              uVar18 = uVar9;
              do {
                uVar17 = (uVar18 >> 1) + uVar19;
                if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar17 * 8) +
                            0x18) < *(int *)(lVar12 + 0x18)) {
                  uVar19 = uVar17 + (uVar18 & 1);
                }
                bVar21 = 1 < uVar18;
                uVar18 = uVar18 >> 1;
              } while (bVar21);
              if ((int)uVar19 < (int)uVar9) {
                uVar14 = (ulonglong)uVar19;
                puVar6 = *(undefined8 **)(*(longlong *)(param_1 + 0x18) + uVar14 * 8);
                if ((puVar6 != (undefined8 *)0x0) &&
                   (*(int *)(puVar6 + 3) == *(int *)(lVar12 + 0x18))) {
                  *puVar6 = *(undefined8 *)(param_1 + 0x28);
                  *(undefined8 **)(param_1 + 0x28) = puVar6;
                  iVar10 = *(int *)(param_1 + 0x20);
                  if (~uVar19 + iVar10 != 0) {
                    memmove((void *)(*(longlong *)(param_1 + 0x18) + uVar14 * 8),
                            (void *)(*(longlong *)(param_1 + 0x18) + uVar14 * 8 + 8),
                            (longlong)(int)(~uVar19 + iVar10) << 3);
                    iVar10 = *(int *)(param_1 + 0x20);
                  }
                  *(int *)(param_1 + 0x20) = iVar10 + -1;
                }
              }
            }
          }
          else {
            *(longlong *)(lVar4 + 0x20) = lVar5;
            *(longlong *)(lVar5 + 0x18) = lVar4;
          }
          *(undefined1 *)((longlong)puVar20 + 0x3c) = 0;
          *(undefined1 *)(param_2 + 0x8a) = 1;
          iVar10 = *(int *)(param_2 + 0x20);
          *(uint *)(param_2 + 0x20) = iVar10 + 1U;
          if (*(uint *)(param_2 + 0x24) < iVar10 + 1U) {
            FUN_14013522c(lVar11,iVar10);
          }
          *(undefined8 **)(*(longlong *)(param_2 + 0x18) + (longlong)iVar10 * 8) = puVar20;
          cVar7 = (**(code **)*puVar20)
                            (param_2,puVar20[1],*(undefined4 *)((longlong)puVar20 + 0x34));
          *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + -1;
          FUN_144841eca(lVar11);
          if (cVar7 == '\x01') {
            FUN_144841f58(puVar20,param_2);
          }
          uVar14 = CONCAT71((int7)((ulonglong)lVar11 >> 8),1);
          if ((*(int *)(param_1 + 0x80) != iVar8) || (puVar20 = puVar3, puVar3 == (undefined8 *)0x0)
             ) goto LAB_1427cef7b;
        }
        puVar20 = puVar3;
      } while (puVar3 != (undefined8 *)0x0);
      cVar7 = (char)uVar14;
      goto LAB_1427cef5c;
    }
  }
  cVar7 = (char)uVar14;
LAB_1427cef5c:
  uVar14 = CONCAT71((int7)(uVar14 >> 8),1);
  if (cVar7 == '\0') {
    if (*(char *)(param_2 + 0x88) == '\x01') {
      uVar9 = FUN_144841bbc(param_1,param_2);
      uVar14 = (ulonglong)uVar9;
    }
    else {
      uVar14 = 0;
    }
  }
LAB_1427cef7b:
  *(undefined4 *)((longlong)lpTlsValue + 0x50) = uVar1;
  return uVar14 & 0xffffffff;
}



// FUNCTION 1427cf286 FUN_1427cf286 body=146 status=ok
// SIG undefined FUN_1427cf286(void)

void FUN_1427cf286(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = *(int *)(param_1 + 0x3d8);
  if ((longlong)iVar1 != 0) {
    local_40 = *(undefined8 *)(param_1 + 0x108);
    local_38 = *(undefined8 *)(param_1 + 0x2b0);
    lVar2 = param_1 + 0x3c0;
    if (*(longlong *)(param_1 + 0x3d0) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x3d0);
    }
    lVar3 = 0;
    local_30 = param_2;
    do {
      FUN_146885f5a(*(undefined8 *)(lVar2 + lVar3),&local_40);
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427cf31a FUN_1427cf31a body=4044 status=ok
// SIG undefined FUN_1427cf31a(void)

undefined8 FUN_1427cf31a(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  DWORD DVar8;
  int iVar9;
  DWORD DVar10;
  DWORD DVar11;
  LPVOID lpTlsValue;
  longlong lVar12;
  longlong *plVar13;
  LPVOID lpTlsValue_00;
  undefined8 uVar14;
  void *pvVar15;
  longlong lVar16;
  undefined8 uVar17;
  uint uVar18;
  void *_Dst;
  longlong lVar19;
  longlong *plVar20;
  bool bVar21;
  undefined1 auStack_218 [32];
  wchar_t *local_1f8;
  ulonglong local_1f0;
  undefined8 local_1e8;
  wchar_t *local_1e0;
  wchar_t *local_1d8;
  code *local_1d0;
  undefined1 *local_1c8;
  code **local_1c0;
  code *local_1b8;
  code *local_1b0;
  undefined8 local_1a0;
  longlong local_198;
  undefined8 local_190;
  undefined8 local_188;
  void *local_180;
  int local_178;
  undefined4 local_174;
  undefined8 local_170;
  ulonglong local_168;
  code *local_160;
  undefined1 local_158 [8];
  code *local_150;
  undefined1 local_148 [8];
  code *local_140;
  code *local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  longlong local_120;
  char local_110;
  longlong local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_218;
  LOCK();
  *(undefined1 *)(param_2 + 0x2f4) = 2;
  UNLOCK();
  DVar11 = DAT_14c75ec34;
  local_190 = param_1;
  if (DAT_14c75ec34 == 0xffffffff) {
    DVar11 = TlsAlloc();
    DVar10 = 0xffffffff;
    LOCK();
    bVar21 = DAT_14c75ec34 != 0xffffffff;
    DVar8 = DVar11;
    if (bVar21) {
      DVar10 = DAT_14c75ec34;
      DVar8 = DAT_14c75ec34;
    }
    DAT_14c75ec34 = DVar8;
    UNLOCK();
    if (bVar21) {
      TlsFree(DVar11);
      DVar11 = DVar10;
    }
  }
  lpTlsValue = TlsGetValue(DVar11);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_14001cc68(0x60,0x10);
    FUN_141073f92(lpTlsValue);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(DVar11,lpTlsValue);
  }
  uVar17 = *(undefined8 *)((longlong)lpTlsValue + 0x40);
  local_188 = *(undefined8 *)((longlong)lpTlsValue + 0x48);
  *(longlong *)((longlong)lpTlsValue + 0x40) = param_2;
  lVar12 = *(longlong *)(param_2 + 0x298) + 8;
  if (*(longlong *)(param_2 + 0x298) == 0) {
    lVar12 = 0;
  }
  *(longlong *)((longlong)lpTlsValue + 0x48) = lVar12;
  FUN_1427cf286(param_2,2);
  if (*(char *)(param_2 + 0x368) == '\x01') {
    if (*(char *)(param_2 + 0x11d) == '\x01') {
      lVar12 = FUN_144aff51a(*(longlong *)(param_2 + 0x298) + 0x2a8,*(undefined8 *)(param_2 + 0xf8),
                             *(undefined8 *)(param_2 + 0x108));
      *(undefined1 *)(lVar12 + 0x66) = 1;
    }
    goto LAB_1427cfa20;
  }
  plVar13 = (longlong *)FUN_141552012(param_2 + 0x290);
  puVar4 = (undefined8 *)*plVar13;
  local_168 = (ulonglong)CONCAT14(*(undefined1 *)(puVar4 + 3),*(undefined4 *)(puVar4 + 1));
  local_170 = *puVar4;
  FUN_1404d2fb4(&local_138);
  *(code **)(param_2 + 0x178) = local_138;
  if (&local_130 != (undefined8 *)(param_2 + 0x180)) {
    if (local_110 == '\x01') {
      FUN_146886b26();
    }
    else if (*(char *)(param_2 + 0x1a0) == '\x01') {
      if (*(longlong *)(param_2 + 400) != 0) {
        FUN_1400020a8();
      }
      *(undefined1 *)(param_2 + 0x1a0) = 0;
    }
  }
  if ((code **)(param_2 + 0x178) != &local_138) {
    if (*(longlong *)(param_2 + 0x1a8) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_2 + 0x1a8) = local_108;
    local_108 = 0;
    *(undefined4 *)(param_2 + 0x1b0) = (undefined4)local_100;
    *(undefined4 *)(param_2 + 0x1b4) = local_100._4_4_;
    local_100 = 0;
  }
  *(undefined4 *)(param_2 + 0x1b8) = (undefined4)local_f8;
  *(undefined8 *)(param_2 + 0x1c0) = local_f0;
  *(undefined8 *)(param_2 + 0x1c8) = uStack_e8;
  *(undefined8 *)(param_2 + 0x1d0) = local_e0;
  *(undefined8 *)(param_2 + 0x1d8) = uStack_d8;
  *(undefined8 *)(param_2 + 0x1e0) = local_d0;
  *(undefined8 *)(param_2 + 0x1e8) = uStack_c8;
  *(undefined8 *)(param_2 + 0x1f0) = local_c0;
  *(undefined8 *)(param_2 + 0x1f8) = uStack_b8;
  *(undefined8 *)(param_2 + 0x200) = local_b0;
  *(undefined8 *)(param_2 + 0x208) = uStack_a8;
  *(undefined8 *)(param_2 + 0x210) = local_a0;
  *(undefined8 *)(param_2 + 0x218) = uStack_98;
  *(undefined8 *)(param_2 + 0x220) = local_90;
  *(undefined8 *)(param_2 + 0x228) = uStack_88;
  *(undefined4 *)(param_2 + 0x230) = local_80;
  *(undefined4 *)(param_2 + 0x234) = uStack_7c;
  *(undefined4 *)(param_2 + 0x238) = uStack_78;
  *(undefined4 *)(param_2 + 0x23c) = uStack_74;
  if ((code **)(param_2 + 0x178) == &local_138) {
    if (local_70 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_2 + 0x240) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_2 + 0x240) = local_70;
    local_70 = 0;
    *(undefined4 *)(param_2 + 0x248) = (undefined4)local_68;
    *(undefined4 *)(param_2 + 0x24c) = local_68._4_4_;
    local_68 = 0;
  }
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  if ((local_110 == '\x01') && (local_120 != 0)) {
    FUN_1400020a8();
  }
  if (*(char *)(param_2 + 0x11d) == '\x01') {
    if ((longlong)*(int *)(param_2 + 0x1f8) == 0) {
      uVar18 = 0;
    }
    else {
      lVar12 = 0;
      uVar18 = 0;
      do {
        uVar18 = (uVar18 + 1) -
                 (uint)(*(longlong *)(*(longlong *)(param_2 + 0x1f0) + 0x38 + lVar12) == 0);
        lVar12 = lVar12 + 0x48;
      } while ((longlong)*(int *)(param_2 + 0x1f8) * 0x48 != lVar12);
    }
    lVar12 = FUN_144aff51a(*(longlong *)(param_2 + 0x298) + 0x2a8,*(undefined8 *)(param_2 + 0xf8),
                           *(undefined8 *)(param_2 + 0x108));
    if ((uVar18 != 0) && ((uint)(*(int *)(lVar12 + 8) - *(int *)(lVar12 + 0x34)) < uVar18)) {
      FUN_141711f10(lVar12,uVar18);
      iVar9 = 1;
      if (3 < uVar18) {
        uVar18 = (uVar18 | 1) + 0xe;
        iVar9 = 0x1f;
        if (uVar18 != 0) {
          for (; uVar18 >> iVar9 == 0; iVar9 = iVar9 + -1) {
          }
        }
        iVar9 = 1 << ((byte)iVar9 & 0x1f);
      }
      if ((*(int *)(lVar12 + 0x48) == 0) || (*(int *)(lVar12 + 0x48) < iVar9)) {
        *(int *)(lVar12 + 0x48) = iVar9;
        FUN_144a4495e(lVar12);
      }
    }
  }
  if (*(longlong *)(param_2 + 0x110) == 0) {
    *(undefined8 *)(param_2 + 0x110) = *(undefined8 *)(param_2 + 0x1c0);
    *(undefined1 *)(param_2 + 0x118) = 0;
  }
  lVar12 = *(longlong *)(param_2 + 0x108);
  if (lVar12 == 0) {
    lVar12 = *(longlong *)(param_2 + 0x1c0);
    *(longlong *)(param_2 + 0x108) = lVar12;
  }
  if (DAT_14c951858 == 0) {
    local_138 = FUN_1449e2820;
    local_1b0 = FUN_14081d0ea;
    local_1b8 = FUN_14081d0ea;
    local_1c8 = &LAB_1468c5283;
    local_1d0 = FUN_142809da0;
    local_1d8 = L"Engine";
    local_1e0 = (wchar_t *)0x400000000;
    local_1e8 = CONCAT44(local_1e8._4_4_,0x10000000);
    local_1f0 = CONCAT44(local_1f0._4_4_,8);
    local_1f8 = (wchar_t *)CONCAT44(local_1f8._4_4_,0x50);
    local_1c0 = &local_138;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  local_1f0 = local_1f0 & 0xffffffff00000000;
  local_1f8 = (wchar_t *)((ulonglong)local_1f8 & 0xffffffff00000000);
  lVar12 = FUN_140be85e0(DAT_14c951858,0,lVar12,0);
  *(longlong *)(param_2 + 0x2b0) = lVar12;
  if (lVar12 == 0) {
    DVar11 = DAT_14c75ec34;
    if (DAT_14c75ec34 == 0xffffffff) {
      DVar11 = TlsAlloc();
      DVar10 = 0xffffffff;
      LOCK();
      bVar21 = DAT_14c75ec34 != 0xffffffff;
      DVar8 = DVar11;
      if (bVar21) {
        DVar10 = DAT_14c75ec34;
        DVar8 = DAT_14c75ec34;
      }
      DAT_14c75ec34 = DVar8;
      UNLOCK();
      if (bVar21) {
        TlsFree(DVar11);
        DVar11 = DVar10;
      }
    }
    lpTlsValue_00 = TlsGetValue(DVar11);
    if (lpTlsValue_00 == (LPVOID)0x0) {
      lpTlsValue_00 = (LPVOID)FUN_14001cc68(0x60,0x10);
      FUN_141073f92(lpTlsValue_00);
      FUN_140fddf04(lpTlsValue_00);
      TlsSetValue(DVar11,lpTlsValue_00);
    }
    uVar5 = *(undefined8 *)((longlong)lpTlsValue_00 + 0x40);
    uVar7 = *(undefined8 *)((longlong)lpTlsValue_00 + 0x48);
    *(longlong *)((longlong)lpTlsValue_00 + 0x40) = param_2;
    lVar12 = *(longlong *)(param_2 + 0x298) + 8;
    if (*(longlong *)(param_2 + 0x298) == 0) {
      lVar12 = 0;
    }
    *(longlong *)((longlong)lpTlsValue_00 + 0x48) = lVar12;
    local_1f0 = 0;
    local_1f8 = (wchar_t *)((ulonglong)local_1f8 & 0xffffffffffffff00);
    uVar14 = FUN_140270f2c(0,*(undefined8 *)(param_2 + 0x108),0,0);
    *(undefined8 *)(param_2 + 0x2b0) = uVar14;
    *(undefined1 *)(param_2 + 0x369) = 1;
    *(undefined8 *)((longlong)lpTlsValue_00 + 0x40) = uVar5;
    *(undefined8 *)((longlong)lpTlsValue_00 + 0x48) = uVar7;
    lVar12 = *(longlong *)(param_2 + 0x2b0);
  }
  FUN_144757f48(lVar12,0x8000001);
  lVar12 = *(longlong *)(param_2 + 0x2b0);
  *(undefined8 *)(lVar12 + 0x38) = *(undefined8 *)(param_2 + 0x110);
  *(undefined1 *)(lVar12 + 0x40) = *(undefined1 *)(param_2 + 0x118);
  *(byte *)(*(longlong *)(param_2 + 0x2b0) + 0x28) =
       *(byte *)(*(longlong *)(param_2 + 0x2b0) + 0x28) & 0xfb | *(char *)(param_2 + 0x11d) << 2;
  *(undefined8 *)(*(longlong *)(param_2 + 0x2b0) + 0x30) = *(undefined8 *)(param_2 + 0xf8);
  puVar1 = (uint *)(*(longlong *)(param_2 + 0x2b0) + 0x2c);
  *puVar1 = *puVar1 | *(uint *)(param_2 + 0xe0);
  uVar18 = *(uint *)(*(longlong *)(param_2 + 0x2b0) + 0xc);
  if ((int)uVar18 < DAT_14c9647dc) {
    lVar12 = (ulonglong)((uVar18 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8);
  }
  else {
    lVar12 = 0;
  }
  FUN_1447f71cc(lVar12,(*(byte *)(param_2 + 0x11d) | 0x40) << 0x14);
  if (*(char *)(param_2 + 0x11d) == '\x01') {
    lVar12 = FUN_144aff51a(*(longlong *)(param_2 + 0x298) + 0x2a8,*(undefined8 *)(param_2 + 0xf8));
    iVar9 = DAT_14c9647dc;
    uVar18 = *(uint *)(lVar12 + 0x58);
    if (-1 < (int)uVar18) {
      if ((int)uVar18 < DAT_14c9647dc) {
        plVar13 = (longlong *)
                  ((ulonglong)((uVar18 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8));
      }
      else {
        plVar13 = (longlong *)0x0;
      }
      if (*plVar13 != 0) {
        lVar19 = *(longlong *)(param_2 + 0x2b0);
        if (*plVar13 != lVar19) {
          if ((int)uVar18 < DAT_14c9647dc) {
            plVar13 = (longlong *)
                      ((ulonglong)((uVar18 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8));
          }
          else {
            plVar13 = (longlong *)0x0;
          }
          lVar16 = *plVar13;
          *(undefined4 *)(lVar12 + 100) = 0;
          *(undefined4 *)(lVar12 + 0x58) = *(undefined4 *)(lVar19 + 0xc);
          *(undefined8 *)(lVar12 + 0x50) = *(undefined8 *)(lVar19 + 0x18);
          uVar18 = *(uint *)(lVar16 + 0xc);
          if ((int)uVar18 < iVar9) {
            lVar12 = (ulonglong)((uVar18 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8);
          }
          else {
            lVar12 = 0;
          }
          FUN_14482b126(lVar12,0x100000);
          local_140 = *(code **)(lVar16 + 0x18);
          FUN_14491a35e(&local_138);
          *(code **)(lVar16 + 0x30) = local_138;
        }
        goto LAB_1427cf925;
      }
    }
    lVar19 = *(longlong *)(param_2 + 0x2b0);
    if (lVar19 == 0) {
      *(undefined4 *)(lVar12 + 0x58) = 0xffffffff;
      *(undefined8 *)(lVar12 + 0x50) = 0;
    }
    else {
      *(undefined4 *)(lVar12 + 0x58) = *(undefined4 *)(lVar19 + 0xc);
      *(undefined8 *)(lVar12 + 0x50) = *(undefined8 *)(lVar19 + 0x18);
    }
  }
LAB_1427cf925:
  puVar1 = (uint *)(*(longlong *)(param_2 + 0x2b0) + 0x2c);
  *puVar1 = *puVar1 | *(uint *)(*(longlong *)(param_2 + 0x1c8) + 0x10);
  if (*(char *)(param_2 + 0x1a0) == '\x01') {
    FUN_1401edcec(*(undefined8 *)(param_2 + 0x2b0),*(undefined8 *)(param_2 + 0x184));
    FUN_1427d02e8(*(undefined8 *)(param_2 + 0x2b0),*(undefined4 *)(param_2 + 0x18c));
    uVar5 = *(undefined8 *)(param_2 + 0x2b0);
    local_180 = (void *)0x0;
    local_178 = *(int *)(param_2 + 0x198);
    lVar12 = (longlong)local_178;
    pvVar15 = *(void **)(param_2 + 400);
    if (lVar12 == 0) {
      local_174 = 0;
    }
    else {
      FUN_1401254a2(&local_180,local_178,0);
      memcpy(local_180,pvVar15,lVar12 * 0x28);
    }
    FUN_1427d033e(uVar5,&local_180);
  }
  else {
    FUN_1401edcec(*(undefined8 *)(param_2 + 0x2b0),DAT_14c89603c);
    lVar12 = *(longlong *)(*(longlong *)(param_2 + 0x2b0) + 0x48);
    if (lVar12 != 0) {
      *(undefined4 *)(lVar12 + 8) = 1;
    }
  }
  if (*(longlong *)(param_2 + 0x108) != *(longlong *)(param_2 + 0x110)) {
    FUN_14090605c(param_2 + 0xe8);
  }
LAB_1427cfa20:
  lVar12 = *(longlong *)(param_2 + 0x298);
  iVar9 = *(int *)(param_2 + 0x1f8);
  lVar19 = (longlong)iVar9;
  pvVar15 = (void *)FUN_14001cc68(lVar19 * 0x20 + (longlong)*(int *)(param_2 + 0x218) * 8,0);
  *(void **)(param_2 + 0x128) = pvVar15;
  *(void **)(param_2 + 0x130) = pvVar15;
  *(int *)(param_2 + 0x138) = iVar9;
  _Dst = (void *)(lVar19 * 0x20 + (longlong)pvVar15);
  *(void **)(param_2 + 0x280) = _Dst;
  *(int *)(param_2 + 0x288) = *(int *)(param_2 + 0x218);
  memcpy(_Dst,*(void **)(param_2 + 0x210),(longlong)*(int *)(param_2 + 0x218) << 3);
  *(undefined4 *)(param_2 + 0x270) = *(undefined4 *)(param_2 + 0x130);
  *(undefined4 *)(param_2 + 0x274) = *(undefined4 *)(param_2 + 0x134);
  *(undefined4 *)(param_2 + 0x278) = *(undefined4 *)(param_2 + 0x138);
  *(undefined4 *)(param_2 + 0x27c) = *(undefined4 *)(param_2 + 0x13c);
  if (lVar19 < -1) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar9 + 1);
  }
  if (*(int *)(param_2 + 0x38c) <= iVar9) {
    FUN_14079e7a6(param_2 + 0x380);
    pvVar15 = *(void **)(param_2 + 0x130);
    iVar9 = *(int *)(param_2 + 0x138);
    lVar19 = (longlong)iVar9;
  }
  if (iVar9 != 0) {
    memset(pvVar15,0,lVar19 << 5);
  }
  if (*(char *)(param_2 + 0x2dc) == '\0') {
    local_138 = (code *)**(undefined8 **)(lVar12 + 0x290);
    local_130 = 0;
    uStack_128 = 0;
    FUN_142767380(&local_140,*(undefined8 *)(lVar12 + 0x2a0));
    FUN_1448cb086(param_2,local_190,&local_138,*(undefined8 *)(lVar12 + 0x2a0));
    FUN_1427673f6(&local_140);
    FUN_1400d20b8(local_138,&local_138,0);
    FUN_1400d6814(&local_138);
  }
  LOCK();
  *(undefined1 *)(param_2 + 0x2f4) = 3;
  UNLOCK();
  if (*(char *)(*(longlong *)(param_2 + 0x298) + 0x20) == '\0') {
    local_f8 = 0;
    local_f0 = 0x800000000;
    if ((longlong)*(int *)(param_2 + 0x1e8) != 0) {
      plVar20 = *(longlong **)(param_2 + 0x1e0);
      plVar13 = plVar20 + *(int *)(param_2 + 0x1e8);
      do {
        lVar12 = *plVar20;
        if (((uint)((ulonglong)lVar12 >> 0x3e) == 1) &&
           (lVar19 = *(longlong *)(param_2 + 0x2a8),
           *(int *)(lVar19 + 0x60) != *(int *)(lVar19 + 0x8c))) {
          lVar16 = lVar19 + 0x90;
          if (*(longlong *)(lVar19 + 0x98) != 0) {
            lVar16 = *(longlong *)(lVar19 + 0x98);
          }
          iVar9 = *(int *)(lVar16 + (ulonglong)(*(int *)(lVar19 + 0xa0) - 1U & (uint)lVar12) * 4);
          if (iVar9 != -1) {
            do {
              plVar3 = (longlong *)(*(longlong *)(lVar19 + 0x58) + (longlong)iVar9 * 0x18);
              if (*plVar3 == lVar12) {
                if ((plVar3 != (longlong *)0x0) &&
                   (pcVar6 = (code *)plVar3[1], pcVar6 != (code *)0x0)) {
                  if (DAT_14c949118 == 0) {
                    local_160 = FUN_140631fbe;
                    local_1a0 = uVar17;
                    lVar12 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,0x140631f01);
                    DAT_14c949118 = lVar12;
                    FUN_1446f470e(local_158,L"Class",1);
                    local_1c0 = &local_160;
                    local_1c8 = &LAB_146891e90;
                    local_1d0 = (code *)&LAB_146273097;
                    local_1e0 = L"Engine";
                    local_1d8 = (wchar_t *)CONCAT44(local_1d8._4_4_,199);
                    local_1e8 = 0x20;
                    local_1f0 = CONCAT44(local_1f0._4_4_,0x10000000);
                    local_1f8._0_4_ = 8;
                    FUN_14574b4b2(lVar12);
                    DAT_14c949118 = lVar12;
                    if (DAT_14c951858 == 0) {
                      local_140 = FUN_1449e2820;
                      local_1b0 = FUN_14081d0ea;
                      local_1b8 = FUN_14081d0ea;
                      local_1c0 = &local_140;
                      local_1c8 = &LAB_1468c5283;
                      local_1d0 = FUN_142809da0;
                      local_1d8 = L"Engine";
                      local_1e0 = (wchar_t *)0x400000000;
                      local_1e8 = CONCAT44(local_1e8._4_4_,0x10000000);
                      local_1f0 = CONCAT44(local_1f0._4_4_,8);
                      local_1f8._0_4_ = 0x50;
                      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288)
                      ;
                    }
                    lVar19 = DAT_14c951858;
                    lVar12 = DAT_14c949118;
                    if (DAT_14c948f88 == 0) {
                      local_150 = (code *)&DAT_1427db2a2;
                      lVar16 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
                      DAT_14c948f88 = lVar16;
                      FUN_1446f470e(local_148,L"Struct",1);
                      local_1c0 = &local_150;
                      local_1c8 = &LAB_146891313;
                      local_1d0 = FUN_146272f63;
                      local_1e0 = L"Engine";
                      local_1d8 = (wchar_t *)CONCAT44(local_1d8._4_4_,199);
                      local_1e8 = 8;
                      local_1f0 = CONCAT44(local_1f0._4_4_,0x10000020);
                      local_1f8._0_4_ = 8;
                      FUN_14574b4b2(lVar16);
                      local_198 = DAT_14c927740;
                      DAT_14c948f88 = lVar16;
                      if (DAT_14c927740 == 0) {
                        local_140 = FUN_1449e2820;
                        local_1b0 = FUN_14081d0ea;
                        local_1b8 = FUN_14081d0ea;
                        local_1c0 = &local_140;
                        local_1c8 = &LAB_146856450;
                        local_1d0 = FUN_1427b121c;
                        local_1d8 = L"Engine";
                        local_1e0 = (wchar_t *)0x0;
                        local_1e8 = CONCAT44(local_1e8._4_4_,0x10000021);
                        local_1f0 = CONCAT44(local_1f0._4_4_,8);
                        local_1f8._0_4_ = 0x28;
                        FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456
                                     );
                      }
                      lVar16 = DAT_14c948f88;
                      local_198 = DAT_14c927740;
                      uVar17 = FUN_1400163b0();
                      local_1f8 = L"Struct";
                      FUN_14574b446(uVar17,lVar16,local_198,L"/Script/CoreUObject");
                    }
                    local_1f8 = L"Class";
                    FUN_14574b446(DAT_14c948f88,lVar12,lVar19,L"/Script/CoreUObject");
                    uVar17 = local_1a0;
                  }
                  if ((((*(int *)(DAT_14c949118 + 0x38) <=
                         *(int *)(*(longlong *)(pcVar6 + 0x10) + 0x38)) &&
                       (*(longlong *)
                         (*(longlong *)(*(longlong *)(pcVar6 + 0x10) + 0x30) +
                         (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) == DAT_14c949118 + 0x30)) &&
                      (local_140 = pcVar6, (*(uint *)(pcVar6 + 8) & 0x10) == 0)) &&
                     ((*(longlong *)(pcVar6 + 0x110) == 0 ||
                      ((*(uint *)(*(longlong *)(pcVar6 + 0x110) + 8) >> 9 & 1) != 0)))) {
                    local_1a0 = uVar17;
                    FUN_1468863bc(&local_138,&local_140);
                    uVar17 = local_1a0;
                  }
                }
                break;
              }
              iVar9 = (int)plVar3[2];
            } while (iVar9 != -1);
          }
        }
        plVar20 = plVar20 + 1;
      } while (plVar20 != plVar13);
      if ((int)local_f0 != 0) {
        FUN_145bcab2e(*(undefined8 *)(param_2 + 0x298),param_2,&local_138);
      }
    }
    if (local_f8 != 0) {
      FUN_1400020a8();
    }
  }
  lVar12 = *(longlong *)(param_2 + 200);
  LOCK();
  piVar2 = (int *)(lVar12 + 0x78);
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (*piVar2 == 0) {
    FUN_1400ee78c(lVar12 + 0x40,local_190);
  }
  *(undefined8 *)((longlong)lpTlsValue + 0x40) = uVar17;
  *(undefined8 *)((longlong)lpTlsValue + 0x48) = local_188;
  if ((local_60 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 1427d02e8 FUN_1427d02e8 body=86 status=ok
// SIG undefined FUN_1427d02e8(void)

void FUN_1427d02e8(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x48);
  if (puVar1 == (undefined8 *)0x0) {
    if (param_2 == 1) {
      return;
    }
    puVar1 = (undefined8 *)FUN_14001cc68(0x38,0x10);
    *puVar1 = 0;
    puVar1[1] = 0;
    *puVar1 = DAT_14c89603c;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[6] = 0;
    *(undefined8 **)(param_1 + 0x48) = puVar1;
  }
  *(int *)(puVar1 + 1) = param_2;
  return;
}



// FUNCTION 1427d033e FUN_1427d033e body=223 status=ok
// SIG undefined FUN_1427d033e(void)

void FUN_1427d033e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 == 0) {
    if ((int)param_2[1] == 0) goto LAB_1427d0400;
    puVar2 = (undefined8 *)FUN_14001cc68(0x38,0x10);
    *puVar2 = 0;
    puVar2[1] = 0;
    *puVar2 = DAT_14c89603c;
    *(undefined4 *)(puVar2 + 1) = 1;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[6] = 0;
    *(undefined8 **)(param_1 + 0x48) = puVar2;
    if (puVar2 + 2 == param_2) goto LAB_1427d0400;
    lVar1 = param_2[1];
    puVar2[2] = *param_2;
    *param_2 = 0;
    puVar2[3] = lVar1;
  }
  else {
    if ((longlong *)(lVar1 + 0x10) == param_2) goto LAB_1427d0400;
    if (*(longlong *)(lVar1 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(lVar1 + 0x10) = *param_2;
    *param_2 = 0;
    *(int *)(lVar1 + 0x18) = (int)param_2[1];
    *(undefined4 *)(lVar1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0xc);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  *(undefined4 *)((longlong)param_2 + 0xc) = 0;
LAB_1427d0400:
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1427d041e FUN_1427d041e body=959 status=ok
// SIG undefined FUN_1427d041e(void)

ulonglong FUN_1427d041e(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  DWORD DVar6;
  char cVar7;
  DWORD dwTlsIndex;
  DWORD DVar8;
  LPVOID lpTlsValue;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  undefined7 uVar15;
  ulonglong uVar14;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_158 [40];
  undefined **local_130 [11];
  longlong *local_d8;
  longlong local_b8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  LOCK();
  *(undefined1 *)(param_2 + 0x2f4) = 5;
  UNLOCK();
  dwTlsIndex = DAT_14c75ec34;
  if (DAT_14c75ec34 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar8 = 0xffffffff;
    LOCK();
    bVar17 = DAT_14c75ec34 != 0xffffffff;
    DVar6 = dwTlsIndex;
    if (bVar17) {
      DVar8 = DAT_14c75ec34;
      DVar6 = DAT_14c75ec34;
    }
    DAT_14c75ec34 = DVar6;
    UNLOCK();
    if (bVar17) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar8;
    }
  }
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_14001cc68(0x60,0x10);
    FUN_141073f92(lpTlsValue);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  uVar4 = *(undefined8 *)((longlong)lpTlsValue + 0x40);
  uVar5 = *(undefined8 *)((longlong)lpTlsValue + 0x48);
  *(longlong *)((longlong)lpTlsValue + 0x40) = param_2;
  lVar12 = *(longlong *)(param_2 + 0x298) + 8;
  if (*(longlong *)(param_2 + 0x298) == 0) {
    lVar12 = 0;
  }
  *(longlong *)((longlong)lpTlsValue + 0x48) = lVar12;
  if (*(char *)(param_2 + 0x368) == '\0') {
    uVar9 = FUN_141552012(param_2 + 0x290);
    FUN_14015c3c4(local_130,uVar9);
    FUN_1417119d0(param_2,local_130);
    iVar13 = *(int *)(param_2 + 0x2e4);
    if (iVar13 < *(int *)(param_2 + 0x218)) {
      do {
        lVar12 = *(longlong *)(param_2 + 0x210);
        cVar7 = FUN_1427cec66(param_1);
        if (cVar7 != '\0') {
          local_130[0] = &PTR__purecall_149e35f70;
          if (local_d8 != (longlong *)0x0) {
            if (*local_d8 != 0) {
              FUN_1400020a8();
            }
            FUN_1400020a8(local_d8);
          }
          if (local_b8 != 0) {
            if (*(longlong *)(local_b8 + 0x40) != 0) {
              FUN_1400020a8();
            }
            FUN_1400020a8(local_b8);
          }
          uVar14 = 0;
          goto LAB_1427d06de;
        }
        lVar16 = (longlong)*(int *)(lVar12 + (longlong)iVar13 * 8);
        lVar11 = *(longlong *)(*(longlong *)(param_2 + 0x270) + lVar16 * 0x20);
        if (*(int *)(lVar12 + 4 + (longlong)iVar13 * 8) == 0) {
          if (lVar11 == 0) {
            FUN_1415cb288(param_2,param_2 + 0x178);
          }
        }
        else if ((lVar11 != 0) && ((*(uint *)(lVar11 + 8) >> 10 & 1) != 0)) {
          FUN_1415cc3d6(param_2,param_2 + 0x178,lVar16,local_130);
        }
        iVar13 = *(int *)(param_2 + 0x2e4) + 1;
        *(int *)(param_2 + 0x2e4) = iVar13;
      } while (iVar13 < *(int *)(param_2 + 0x218));
    }
    local_130[0] = &PTR__purecall_149e35f70;
    if (local_d8 != (longlong *)0x0) {
      if (*local_d8 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(local_d8);
    }
    if (local_b8 != 0) {
      if (*(longlong *)(local_b8 + 0x40) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(local_b8);
    }
  }
  *(undefined4 *)(param_2 + 0x2e4) = 0;
  iVar13 = *(int *)(param_2 + 0x2e0) + 1;
  *(int *)(param_2 + 0x2e0) = iVar13;
  uVar15 = (undefined7)((ulonglong)param_2 >> 8);
  if (iVar13 == *(int *)(param_2 + 0x170)) {
    *(undefined4 *)(param_2 + 0x2e0) = 0;
    *(undefined8 *)(param_2 + 0x1e0) = 0;
    *(undefined4 *)(param_2 + 0x1e8) = 0;
    *(undefined8 *)(param_2 + 0x1f0) = 0;
    *(undefined4 *)(param_2 + 0x1f8) = 0;
    *(undefined8 *)(param_2 + 0x200) = 0;
    *(undefined4 *)(param_2 + 0x208) = 0;
    *(undefined8 *)(param_2 + 0x210) = 0;
    *(undefined4 *)(param_2 + 0x218) = 0;
    *(undefined8 *)(param_2 + 0x220) = 0;
    *(undefined4 *)(param_2 + 0x228) = 0;
    *(undefined8 *)(param_2 + 0x230) = 0;
    *(undefined4 *)(param_2 + 0x238) = 0;
    *(undefined8 *)(param_2 + 0x1c8) = 0;
    *(undefined8 *)(param_2 + 0x1d0) = 0;
    *(undefined4 *)(param_2 + 0x1d8) = 0;
    FUN_141703b80(param_2 + 0x290);
    if (*(int *)(param_2 + 0x398) != 0) {
      LOCK();
      *(undefined1 *)(param_2 + 0x2f4) = 6;
      UNLOCK();
      lVar12 = *(longlong *)(param_2 + 0x298);
      puVar10 = (undefined8 *)FUN_14001cc68(0x10,8);
      *puVar10 = 0;
      puVar10[1] = param_2;
      LOCK();
      puVar1 = (undefined8 *)(lVar12 + 0x128);
      puVar3 = (undefined8 *)*puVar1;
      *puVar1 = puVar10;
      UNLOCK();
      *puVar3 = puVar10;
      uVar14 = CONCAT71(uVar15,1);
      goto LAB_1427d06de;
    }
    lVar12 = *(longlong *)(param_2 + 200);
    LOCK();
    piVar2 = (int *)(lVar12 + 0xb8);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    uVar14 = CONCAT71(uVar15,1);
    if (*piVar2 != 0) goto LAB_1427d06de;
    lVar12 = lVar12 + 0x80;
  }
  else {
    lVar12 = *(longlong *)(param_2 + 0x150);
    lVar11 = (longlong)(iVar13 * 3) * 0x40;
    LOCK();
    piVar2 = (int *)(lVar12 + 0x38 + lVar11);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    uVar14 = CONCAT71(uVar15,1);
    if (*piVar2 != 0) goto LAB_1427d06de;
    lVar12 = lVar12 + lVar11;
  }
  uVar14 = CONCAT71(uVar15,1);
  FUN_1400ee78c(lVar12,param_1);
LAB_1427d06de:
  *(undefined8 *)((longlong)lpTlsValue + 0x40) = uVar4;
  *(undefined8 *)((longlong)lpTlsValue + 0x48) = uVar5;
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14 & 0xffffffff;
}



// FUNCTION 1427d07de FUN_1427d07de body=994 status=ok
// SIG undefined FUN_1427d07de(void)

void FUN_1427d07de(longlong param_1,longlong param_2,int param_3,uint param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  DWORD DVar5;
  LPVOID lpTlsValue;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  LPVOID local_70;
  DWORD local_64;
  
  uVar10 = *(uint *)(*(longlong *)(param_2 + 0xa8) + (longlong)param_3 * 0x14);
  if (-1 < (int)uVar10) {
    lVar12 = *(longlong *)(param_2 + 0xa8) + (longlong)param_3 * 0x14;
    if (param_4 == 1) {
      uVar10 = uVar10 + *(int *)(lVar12 + 4) + *(int *)(lVar12 + 8);
    }
    uVar11 = (ulonglong)uVar10;
    iVar13 = *(int *)(lVar12 + 4 + (ulonglong)param_4 * 8);
    if (0 < iVar13) {
      uVar11 = (ulonglong)(int)uVar10;
      do {
        uVar10 = *(uint *)(*(longlong *)(param_2 + 0xb8) + uVar11 * 4);
        if ((int)uVar10 < 1) {
          uVar8 = *(ulonglong *)(*(longlong *)(param_2 + 0x68) + (longlong)(int)~uVar10 * 8);
          lVar6 = FUN_144aff64a(param_1 + 0x2a8,param_2);
          if (((lVar6 == 0) &&
              (lVar6 = *(longlong *)(*(longlong *)(param_2 + 0xe8) + (uVar8 >> 0x1d & 0x1fffffff8)),
              lVar6 != 0)) && (0 < (longlong)*(int *)(lVar6 + 0x1f8))) {
            plVar9 = (longlong *)(*(longlong *)(lVar6 + 0x1f0) + 0x38);
            lVar7 = 0;
            iVar14 = 0;
            do {
              if (*plVar9 == *(longlong *)(*(longlong *)(param_2 + 0x58) + (longlong)(int)uVar8 * 8)
                 ) {
                if (*(longlong *)(*(longlong *)(lVar6 + 0x270) + lVar7) == 0) {
                  local_64 = DAT_14c75ec34;
                  if (DAT_14c75ec34 == 0xffffffff) {
                    local_64 = TlsAlloc();
                    DVar4 = 0xffffffff;
                    LOCK();
                    bVar15 = DAT_14c75ec34 != 0xffffffff;
                    DVar5 = local_64;
                    if (bVar15) {
                      DVar4 = DAT_14c75ec34;
                      DVar5 = DAT_14c75ec34;
                    }
                    DAT_14c75ec34 = DVar5;
                    UNLOCK();
                    if (bVar15) {
                      TlsFree(local_64);
                      local_64 = DVar4;
                    }
                  }
                  local_70 = TlsGetValue(local_64);
                  if (local_70 == (LPVOID)0x0) {
                    local_70 = (LPVOID)FUN_14001cc68(0x60,0x10);
                    FUN_141073f92(local_70);
                    FUN_140fddf04(local_70);
                    TlsSetValue(local_64,local_70);
                  }
                  uVar1 = *(undefined8 *)((longlong)local_70 + 0x40);
                  uVar2 = *(undefined8 *)((longlong)local_70 + 0x48);
                  *(longlong *)((longlong)local_70 + 0x40) = lVar6;
                  lVar7 = *(longlong *)(lVar6 + 0x298);
                  if (lVar7 != 0) {
                    lVar7 = lVar7 + 8;
                  }
                  *(longlong *)((longlong)local_70 + 0x48) = lVar7;
                  FUN_1415cb288(lVar6,lVar6 + 0x178,iVar14);
                  *(undefined8 *)((longlong)local_70 + 0x40) = uVar1;
                  *(undefined8 *)((longlong)local_70 + 0x48) = uVar2;
                }
                break;
              }
              iVar14 = iVar14 + 1;
              lVar7 = lVar7 + 0x20;
              plVar9 = plVar9 + 9;
            } while ((longlong)*(int *)(lVar6 + 0x1f8) * 0x20 != lVar7);
          }
        }
        else if (*(longlong *)(*(longlong *)(param_2 + 0xf8) + (ulonglong)(uVar10 - 1) * 0x20) == 0)
        {
          DVar4 = DAT_14c75ec34;
          if (DAT_14c75ec34 == 0xffffffff) {
            DVar4 = TlsAlloc();
            DVar5 = 0xffffffff;
            LOCK();
            bVar15 = DAT_14c75ec34 != 0xffffffff;
            DVar3 = DVar4;
            if (bVar15) {
              DVar5 = DAT_14c75ec34;
              DVar3 = DAT_14c75ec34;
            }
            DAT_14c75ec34 = DVar3;
            UNLOCK();
            if (bVar15) {
              TlsFree(DVar4);
              DVar4 = DVar5;
            }
          }
          lpTlsValue = TlsGetValue(DVar4);
          if (lpTlsValue == (LPVOID)0x0) {
            lpTlsValue = (LPVOID)FUN_14001cc68(0x60,0x10);
            FUN_141073f92(lpTlsValue);
            FUN_140fddf04(lpTlsValue);
            TlsSetValue(DVar4,lpTlsValue);
          }
          uVar1 = *(undefined8 *)((longlong)lpTlsValue + 0x40);
          uVar2 = *(undefined8 *)((longlong)lpTlsValue + 0x48);
          *(longlong *)((longlong)lpTlsValue + 0x40) = param_1;
          lVar6 = *(longlong *)(param_1 + 0x298) + 8;
          if (*(longlong *)(param_1 + 0x298) == 0) {
            lVar6 = 0;
          }
          *(longlong *)((longlong)lpTlsValue + 0x48) = lVar6;
          FUN_1415cb288(param_1,param_2,(ulonglong)(uVar10 - 1));
          *(undefined8 *)((longlong)lpTlsValue + 0x40) = uVar1;
          *(undefined8 *)((longlong)lpTlsValue + 0x48) = uVar2;
        }
        uVar11 = uVar11 + 1;
        bVar15 = 1 < iVar13;
        iVar13 = iVar13 + -1;
      } while (bVar15);
    }
    iVar13 = *(int *)(lVar12 + 8 + (ulonglong)param_4 * 8);
    if (0 < iVar13) {
      lVar12 = (longlong)(int)uVar11;
      do {
        uVar10 = *(uint *)(*(longlong *)(param_2 + 0xb8) + lVar12 * 4);
        if ((int)uVar10 < 1) {
          uVar11 = *(ulonglong *)(*(longlong *)(param_2 + 0x68) + (longlong)(int)~uVar10 * 8);
          lVar6 = FUN_144aff64a(param_1 + 0x2a8,param_2,uVar11);
          if (((lVar6 == 0) || ((*(uint *)(lVar6 + 8) >> 10 & 1) != 0)) &&
             ((lVar6 = *(longlong *)(*(longlong *)(param_2 + 0xe8) + (uVar11 >> 0x1d & 0x1fffffff8))
              , lVar6 != 0 && (0 < (longlong)*(int *)(lVar6 + 0x1f8))))) {
            plVar9 = (longlong *)(*(longlong *)(lVar6 + 0x1f0) + 0x38);
            uVar8 = 0;
            do {
              if (*plVar9 ==
                  *(longlong *)(*(longlong *)(param_2 + 0x58) + (longlong)(int)uVar11 * 8)) {
                lVar7 = lVar6 + 0x178;
                goto LAB_1427d0aff;
              }
              uVar8 = uVar8 + 1;
              plVar9 = plVar9 + 9;
            } while ((longlong)*(int *)(lVar6 + 0x1f8) != uVar8);
          }
        }
        else {
          uVar8 = (ulonglong)(uVar10 - 1);
          lVar6 = param_1;
          lVar7 = param_2;
LAB_1427d0aff:
          FUN_1415cb170(lVar6,lVar7,uVar8);
        }
        lVar12 = lVar12 + 1;
        bVar15 = 1 < iVar13;
        iVar13 = iVar13 + -1;
      } while (bVar15);
    }
  }
  return;
}



// FUNCTION 1427d0bfa FUN_1427d0bfa body=2072 status=ok
// SIG undefined FUN_1427d0bfa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1427d0bfa(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined1 uVar2;
  byte bVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  DWORD DVar8;
  DWORD DVar9;
  LPVOID pvVar10;
  LPVOID lpTlsValue;
  longlong *plVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 uVar19;
  undefined8 unaff_RBP;
  ulonglong uVar20;
  undefined7 uVar21;
  int iVar22;
  longlong *plVar23;
  undefined8 uVar24;
  bool bVar25;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  LPVOID local_98;
  longlong local_90;
  ulonglong local_88;
  undefined8 local_80;
  longlong local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar7 = DAT_14c75ec34;
  if (DAT_14c75ec34 == 0xffffffff) {
    uVar7 = TlsAlloc();
    uVar6 = 0xffffffff;
    LOCK();
    bVar25 = DAT_14c75ec34 != 0xffffffff;
    uVar4 = uVar7;
    if (bVar25) {
      uVar6 = DAT_14c75ec34;
      uVar4 = DAT_14c75ec34;
    }
    DAT_14c75ec34 = uVar4;
    UNLOCK();
    if (bVar25) {
      TlsFree(uVar7);
      uVar7 = uVar6;
    }
  }
  pvVar10 = TlsGetValue(uVar7);
  if (pvVar10 == (LPVOID)0x0) {
    pvVar10 = (LPVOID)FUN_14001cc68(0x60,0x10);
    FUN_141073f92(pvVar10);
    FUN_140fddf04(pvVar10);
    TlsSetValue(uVar7,pvVar10);
  }
  uVar19 = *(undefined8 *)((longlong)pvVar10 + 0x40);
  uVar24 = *(undefined8 *)((longlong)pvVar10 + 0x48);
  *(longlong *)((longlong)pvVar10 + 0x40) = param_2;
  lVar12 = *(longlong *)(param_2 + 0x298) + 8;
  if (*(longlong *)(param_2 + 0x298) == 0) {
    lVar12 = 0;
  }
  *(longlong *)((longlong)pvVar10 + 0x48) = lVar12;
  if (*(char *)(param_2 + 0x368) != '\0') goto LAB_1427d0e3b;
  local_a0 = uVar19;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar22 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar22 != 2)) {
    if (iVar22 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_1427d1401;
    }
  }
  else {
LAB_1427d1401:
    piVar1 = (int *)(*(longlong *)(param_2 + 0x298) + 0x5e0);
    *piVar1 = *piVar1 + 1;
  }
  uVar7 = DAT_14c75ec34;
  if (DAT_14c75ec34 == 0xffffffff) {
    uVar7 = TlsAlloc();
    uVar6 = 0xffffffff;
    LOCK();
    bVar25 = DAT_14c75ec34 != 0xffffffff;
    uVar4 = uVar7;
    if (bVar25) {
      uVar6 = DAT_14c75ec34;
      uVar4 = DAT_14c75ec34;
    }
    DAT_14c75ec34 = uVar4;
    UNLOCK();
    if (bVar25) {
      TlsFree(uVar7);
      uVar7 = uVar6;
    }
  }
  lpTlsValue = TlsGetValue(uVar7);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_14001cc68(0x60,0x10);
    FUN_141073f92(lpTlsValue);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(uVar7,lpTlsValue);
  }
  local_a8 = uVar24;
  local_98 = pvVar10;
  FUN_14283ea4c(*(undefined8 *)((longlong)lpTlsValue + 0x58),0);
  uVar20 = (ulonglong)DAT_14c75ec34;
  if (DAT_14c75ec34 == 0xffffffff) {
    DVar8 = TlsAlloc();
    uVar20 = (ulonglong)DVar8;
    uVar7 = 0xffffffff;
    LOCK();
    bVar25 = DAT_14c75ec34 != 0xffffffff;
    uVar6 = DVar8;
    if (bVar25) {
      uVar7 = DAT_14c75ec34;
      uVar6 = DAT_14c75ec34;
    }
    DAT_14c75ec34 = uVar6;
    UNLOCK();
    if (bVar25) {
      TlsFree(DVar8);
      uVar20 = (ulonglong)uVar7;
    }
  }
  pvVar10 = TlsGetValue((DWORD)uVar20);
  if (pvVar10 == (LPVOID)0x0) {
    pvVar10 = (LPVOID)FUN_14001cc68(0x60,0x10);
    FUN_141073f92(pvVar10);
    FUN_140fddf04(pvVar10);
    TlsSetValue((DWORD)uVar20,pvVar10);
  }
  uVar2 = *(undefined1 *)((longlong)pvVar10 + 0x20);
  *(undefined1 *)((longlong)pvVar10 + 0x20) = 1;
  FUN_14163927a();
  local_88 = CONCAT71(local_88._1_7_,DAT_14c948ab1);
  bVar3 = *(byte *)(*(longlong *)(param_2 + 0x298) + 0x21);
  unaff_RBP = CONCAT71((int7)(uVar20 >> 8),bVar3);
  iVar22 = *(int *)(param_2 + 0x2e4);
  while (iVar22 < *(int *)(param_2 + 0x288)) {
    lVar12 = *(longlong *)(param_2 + 0x280);
    cVar5 = FUN_1427cec66(param_1);
    if (cVar5 != '\0') {
      FUN_140442e78(param_2);
      *(undefined1 *)((longlong)pvVar10 + 0x20) = uVar2;
      uVar20 = 0;
      uVar19 = local_a0;
      pvVar10 = local_98;
      uVar24 = local_a8;
      goto LAB_1427d129b;
    }
    if (*(int *)(lVar12 + 4 + (longlong)iVar22 * 8) == 1) {
      lVar12 = (longlong)*(int *)(lVar12 + (longlong)iVar22 * 8) * 0x20;
      if (((*(char *)(*(longlong *)(param_2 + 0x270) + 0x18 + lVar12) == '\0') &&
          (plVar11 = (longlong *)(*(longlong *)(param_2 + 0x270) + lVar12),
          *(char *)((longlong)plVar11 + 0x19) == '\0')) &&
         (plVar11 = (longlong *)*plVar11, (*(uint *)(plVar11 + 1) >> 0xc & 1) != 0)) {
        if ((bVar3 & 1) != 0) {
          if (((char)local_88 == '\0') ||
             (cVar5 = (**(code **)(*plVar11 + 0x130))(plVar11), cVar5 == '\0')) goto LAB_1427d0e0b;
          for (plVar23 = (longlong *)plVar11[4]; plVar23 != (longlong *)0x0;
              plVar23 = (longlong *)plVar23[4]) {
            while ((*(uint *)(plVar23 + 1) >> 0xc & 1) != 0) {
              cVar5 = (**(code **)(*plVar23 + 0x130))(plVar23);
              if ((cVar5 == '\0') || (plVar23 = (longlong *)plVar23[4], plVar23 == (longlong *)0x0))
              {
                if (cVar5 == '\0') goto LAB_1427d0e0b;
                goto LAB_1427d0df7;
              }
            }
          }
        }
LAB_1427d0df7:
        *(longlong **)((longlong)pvVar10 + 0x38) = plVar11;
        FUN_1400337aa(plVar11);
        *(undefined8 *)((longlong)pvVar10 + 0x38) = 0;
      }
    }
LAB_1427d0e0b:
    iVar22 = *(int *)(param_2 + 0x2e4) + 1;
    *(int *)(param_2 + 0x2e4) = iVar22;
  }
  FUN_140442e78(param_2);
  *(undefined1 *)((longlong)pvVar10 + 0x20) = uVar2;
  uVar19 = local_a0;
  pvVar10 = local_98;
  uVar24 = local_a8;
LAB_1427d0e3b:
  *(undefined4 *)(param_2 + 0x2e4) = 0;
  iVar22 = *(int *)(param_2 + 0x2e0) + 1;
  *(int *)(param_2 + 0x2e0) = iVar22;
  uVar20 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  if (iVar22 == *(int *)(param_2 + 0x170)) {
    *(undefined4 *)(param_2 + 0x2e0) = 0;
    lVar12 = *(longlong *)(param_2 + 0x2c8);
    piVar1 = (int *)(lVar12 + 0x1c);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      uVar13 = (ulonglong)*(int *)(lVar12 + 0x10);
      local_a8 = uVar24;
      local_a0 = uVar19;
      local_98 = pvVar10;
      local_90 = lVar12;
      uVar19 = param_1;
      if (0 < (longlong)uVar13) {
        do {
          local_80 = uVar19;
          lVar12 = *(longlong *)(*(longlong *)(local_90 + 8) + -8 + uVar13 * 8);
          iVar22 = *(int *)(lVar12 + 0x388);
          local_88 = uVar13;
          if ((longlong)iVar22 != 0) {
            lVar17 = *(longlong *)(lVar12 + 0x380);
            lVar18 = 0;
            do {
              lVar15 = *(longlong *)(lVar17 + lVar18);
              uVar7 = *(uint *)(lVar15 + 0xc);
              if ((int)uVar7 < DAT_14c9647dc) {
                lVar14 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
              }
              else {
                lVar14 = 0;
              }
              FUN_1447f71cc(lVar14,0x8000000);
              uVar7 = *(uint *)(lVar15 + 0xc);
              if ((int)uVar7 < DAT_14c9647dc) {
                lVar15 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
              }
              else {
                lVar15 = 0;
              }
              FUN_14482b126(lVar15,0x400000);
              lVar18 = lVar18 + 8;
            } while ((longlong)iVar22 * 8 != lVar18);
          }
          local_78 = 0;
          uStack_70 = 0;
          if ((longlong)*(int *)(lVar12 + 0x138) != 0) {
            plVar11 = *(longlong **)(lVar12 + 0x130);
            plVar23 = plVar11 + (longlong)*(int *)(lVar12 + 0x138) * 4;
            do {
              lVar17 = *plVar11;
              if (lVar17 != 0) {
                if ((*(uint *)(lVar17 + 8) & 0x10) != 0) {
                  FUN_1406d3f7c(lVar17,&local_78);
                  lVar18 = local_78;
                  lVar15 = (longlong)(int)uStack_70;
                  if (lVar15 != 0) {
                    lVar14 = 0;
                    do {
                      uVar20 = *(ulonglong *)(lVar18 + lVar14);
                      if (uVar20 != 0) {
                        uVar7 = *(uint *)(uVar20 + 0xc);
                        if ((int)uVar7 < DAT_14c9647dc) {
                          lVar16 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
                          if ((*(uint *)(lVar16 + 8 + (ulonglong)(uVar7 & 0xffff) * 0x18) >> 0x16 &
                              1) != 0) {
                            lVar16 = lVar16 + (ulonglong)(uVar7 & 0xffff) * 0x18;
LAB_1427d0fed:
                            FUN_1447f71cc(lVar16,0x8000000);
                            uVar7 = *(uint *)(uVar20 + 0xc);
                            if ((int)uVar7 < DAT_14c9647dc) {
                              lVar16 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)
                              ;
                            }
                            else {
                              lVar16 = 0;
                            }
                            FUN_14482b126(lVar16,0x400000);
                          }
                        }
                        else if ((_DAT_00000008 >> 0x16 & 1) != 0) {
                          lVar16 = 0;
                          goto LAB_1427d0fed;
                        }
                      }
                      lVar14 = lVar14 + 8;
                    } while (lVar15 * 8 != lVar14);
                  }
                  bVar25 = (longlong)uStack_70 < 0;
                  uStack_70 = uStack_70 & 0xffffffff00000000;
                  if (bVar25) {
                    FUN_14079e7a6(&local_78,0);
                  }
                }
                uVar7 = *(uint *)(lVar17 + 0xc);
                if ((int)uVar7 < DAT_14c9647dc) {
                  lVar18 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
                  if ((*(uint *)(lVar18 + 8 + (ulonglong)(uVar7 & 0xffff) * 0x18) >> 0x16 & 1) != 0)
                  {
                    lVar18 = lVar18 + (ulonglong)(uVar7 & 0xffff) * 0x18;
LAB_1427d1091:
                    FUN_1447f71cc(lVar18,0x8000000);
                    uVar7 = *(uint *)(lVar17 + 0xc);
                    if ((int)uVar7 < DAT_14c9647dc) {
                      lVar17 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
                    }
                    else {
                      lVar17 = 0;
                    }
                    FUN_14482b126(lVar17,0x400000);
                  }
                }
                else if ((_DAT_00000008 >> 0x16 & 1) != 0) {
                  lVar18 = 0;
                  goto LAB_1427d1091;
                }
              }
              plVar11 = plVar11 + 4;
            } while (plVar11 != plVar23);
          }
          if (*(longlong *)(lVar12 + 0x2b0) != 0) {
            uVar7 = *(uint *)(*(longlong *)(lVar12 + 0x2b0) + 0xc);
            if ((int)uVar7 < DAT_14c9647dc) {
              lVar17 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
              if ((*(uint *)(lVar17 + 8 + (ulonglong)(uVar7 & 0xffff) * 0x18) >> 0x16 & 1) != 0) {
                lVar17 = lVar17 + (ulonglong)(uVar7 & 0xffff) * 0x18;
LAB_1427d112a:
                FUN_1447f71cc(lVar17,0x8000000);
                uVar7 = *(uint *)(*(longlong *)(lVar12 + 0x2b0) + 0xc);
                if ((int)uVar7 < DAT_14c9647dc) {
                  lVar17 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
                }
                else {
                  lVar17 = 0;
                }
                FUN_14482b126(lVar17,0x400000);
              }
            }
            else if ((_DAT_00000008 >> 0x16 & 1) != 0) {
              lVar17 = 0;
              goto LAB_1427d112a;
            }
          }
          LOCK();
          *(undefined1 *)(lVar12 + 0x2f5) = 1;
          UNLOCK();
          if (local_78 != 0) {
            FUN_1400020a8();
          }
          uVar19 = local_80;
          uVar13 = local_88 - 1;
        } while (1 < local_88);
        lVar12 = (longlong)*(int *)(local_90 + 0x10);
        if (0 < lVar12) {
          do {
            lVar17 = *(longlong *)(*(longlong *)(local_90 + 8) + -8 + lVar12 * 8);
            *(undefined8 *)(lVar17 + 0x2c8) = 0;
            LOCK();
            *(undefined1 *)(lVar17 + 0x2f4) = 9;
            UNLOCK();
            if (0 < *(int *)(lVar17 + 0x170)) {
              lVar15 = 0x200000000;
              lVar18 = 0;
              do {
                lVar14 = *(longlong *)(lVar17 + 0x150);
                LOCK();
                piVar1 = (int *)(lVar14 + 0x38 + (lVar15 >> 0x1a));
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  FUN_1400ee78c(lVar14 + (lVar15 >> 0x1a),uVar19);
                }
                lVar18 = lVar18 + 1;
                lVar15 = lVar15 + 0x300000000;
              } while (lVar18 < *(int *)(lVar17 + 0x170));
            }
            bVar25 = 1 < lVar12;
            lVar12 = lVar12 + -1;
          } while (bVar25);
        }
      }
      pvVar10 = local_98;
      uVar19 = local_a0;
      uVar24 = local_a8;
      uVar21 = (undefined7)(uVar20 >> 8);
      if (local_90 == 0) {
        uVar20 = CONCAT71(uVar21,1);
      }
      else {
        uVar20 = CONCAT71(uVar21,1);
        if (*(longlong *)(local_90 + 8) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(local_90);
      }
    }
  }
LAB_1427d129b:
  *(undefined8 *)((longlong)pvVar10 + 0x40) = uVar19;
  *(undefined8 *)((longlong)pvVar10 + 0x48) = uVar24;
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar20 & 0xffffffff;
}



// FUNCTION 1427d1414 FUN_1427d1414 body=1033 status=ok
// SIG undefined FUN_1427d1414(void)

void FUN_1427d1414(longlong param_1,longlong param_2,byte param_3)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  uint *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined4 *local_60;
  undefined4 local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((*(byte *)(param_2 + 0x88) & param_3) == 1) &&
     (lVar13 = **(longlong **)(param_2 + 0x48), lVar13 != 0)) {
    do {
      uVar2 = *(undefined8 *)(lVar13 + 8);
      *(longlong *)(param_2 + 0x48) = lVar13;
      iVar11 = *(int *)(param_2 + 0x30);
      *(uint *)(param_2 + 0x30) = iVar11 + 1U;
      if (*(uint *)(param_2 + 0x34) < iVar11 + 1U) {
        FUN_1417125f2(param_2 + 0x28,iVar11);
      }
      *(undefined8 *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar11 * 8) = uVar2;
      lVar13 = **(longlong **)(param_2 + 0x48);
    } while (lVar13 != 0);
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    puVar7 = *(undefined8 **)
              (*(longlong *)(param_2 + 0x28) + (longlong)(*(int *)(param_2 + 0x30) + -1) * 8);
    if ((param_3 & *(byte *)(param_2 + 0x88)) != 1) {
      puVar9 = (uint *)(puVar7 + 1);
      if ((uint *)puVar7[3] != (uint *)0x0) {
        puVar9 = (uint *)puVar7[3];
      }
      iVar11 = *(int *)(puVar7 + 4);
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 400));
      if ((longlong)iVar11 != 0) {
        puVar4 = puVar9 + iVar11;
        do {
          if (*(int *)(param_1 + 0x148) != *(int *)(param_1 + 0x174)) {
            lVar13 = *(longlong *)(param_1 + 0x180);
            if (*(longlong *)(param_1 + 0x180) == 0) {
              lVar13 = param_1 + 0x178;
            }
            iVar11 = *(int *)(lVar13 + (ulonglong)(*(int *)(param_1 + 0x188) - 1U & *puVar9) * 4);
            if (iVar11 != -1) {
              do {
                if (*(uint *)(*(longlong *)(param_1 + 0x140) + (longlong)iVar11 * 0xc) == *puVar9)
                goto LAB_1427d1660;
                iVar11 = *(int *)(*(longlong *)(param_1 + 0x140) + (longlong)iVar11 * 0xc + 4);
              } while (iVar11 != -1);
            }
          }
          puVar9 = puVar9 + 1;
        } while (puVar9 != puVar4);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
    }
    local_68 = (longlong *)(param_2 + 0x28);
    while( true ) {
      puVar9 = (uint *)(puVar7 + 1);
      if ((uint *)puVar7[3] != (uint *)0x0) {
        puVar9 = (uint *)puVar7[3];
      }
      iVar11 = *(int *)(puVar7 + 4);
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 400));
      if ((longlong)iVar11 != 0) {
        puVar4 = puVar9 + iVar11;
        do {
          if (*(int *)(param_1 + 0x148) != *(int *)(param_1 + 0x174)) {
            lVar13 = *(longlong *)(param_1 + 0x180);
            if (*(longlong *)(param_1 + 0x180) == 0) {
              lVar13 = param_1 + 0x178;
            }
            iVar11 = *(int *)(lVar13 + (ulonglong)(*(int *)(param_1 + 0x188) - 1U & *puVar9) * 4);
            if (iVar11 != -1) {
              do {
                if (*(uint *)(*(longlong *)(param_1 + 0x140) + (longlong)iVar11 * 0xc) == *puVar9)
                goto LAB_1427d1660;
                iVar11 = *(int *)(*(longlong *)(param_1 + 0x140) + (longlong)iVar11 * 0xc + 4);
              } while (iVar11 != -1);
            }
          }
          puVar9 = puVar9 + 1;
        } while (puVar9 != puVar4);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 400));
      FUN_141711b06(puVar7);
      plVar3 = local_68;
      *(int *)(param_2 + 0x30) = *(int *)(param_2 + 0x30) + -1;
      FUN_141712754(local_68);
      if (*(int *)(param_2 + 0x30) == 0) break;
      puVar7 = *(undefined8 **)(*plVar3 + (longlong)(*(int *)(param_2 + 0x30) + -1) * 8);
    }
  }
  goto LAB_1427d1810;
LAB_1427d1660:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 400));
  if ((*(char *)(param_2 + 0x89) == '\x01') && ((*(byte *)(puVar7 + 0xc) & 1) == 0)) {
    FUN_1427cd9aa(param_1,param_2);
    iVar11 = *(int *)(puVar7 + 4);
    if (iVar11 < 1) {
      iVar8 = 0;
    }
    else {
      lVar13 = 0;
      iVar8 = 0;
      do {
        puVar6 = (undefined8 *)puVar7[3];
        if ((undefined8 *)puVar7[3] == (undefined8 *)0x0) {
          puVar6 = puVar7 + 1;
        }
        puVar5 = (undefined8 *)puVar7[9];
        if ((undefined8 *)puVar7[9] == (undefined8 *)0x0) {
          puVar5 = puVar7 + 5;
        }
        if (puVar5[lVar13] == 0) {
          if (*(int *)(param_1 + 0x1c0) != *(int *)(param_1 + 0x1ec)) {
            uVar1 = *(uint *)((longlong)puVar6 + lVar13 * 4);
            lVar12 = *(longlong *)(param_1 + 0x1f8);
            if (*(longlong *)(param_1 + 0x1f8) == 0) {
              lVar12 = param_1 + 0x1f0;
            }
            uVar10 = *(uint *)(lVar12 + (ulonglong)(*(int *)(param_1 + 0x200) - 1U & uVar1) * 4);
            if (uVar10 != 0xffffffff) {
              do {
                puVar9 = (uint *)(*(longlong *)(param_1 + 0x1b8) + (longlong)(int)uVar10 * 0x18);
                if (*puVar9 == uVar1) {
                  if ((puVar9 != (uint *)0x0) && (*(longlong *)(puVar9 + 2) != 0)) {
                    puVar5[lVar13] = *(longlong *)(puVar9 + 2);
                    FUN_1427cd882(param_1,param_2,*puVar7);
                    iVar8 = iVar8 + 1;
                    iVar11 = *(int *)(puVar7 + 4);
                  }
                  break;
                }
                uVar10 = puVar9[4];
              } while (uVar10 != 0xffffffff);
            }
          }
        }
        else {
          iVar8 = iVar8 + 1;
        }
        lVar13 = lVar13 + 1;
      } while (lVar13 < iVar11);
    }
    if (iVar8 == iVar11) {
      *(undefined1 *)(puVar7 + 0xc) = 1;
    }
  }
  if (((*(byte *)(puVar7 + 0xc) & 1) != 0) && (iVar11 = *(int *)(puVar7 + 4), 0 < iVar11)) {
    lVar13 = 0;
    do {
      puVar6 = (undefined8 *)puVar7[3];
      if ((undefined8 *)puVar7[3] == (undefined8 *)0x0) {
        puVar6 = puVar7 + 1;
      }
      puVar5 = (undefined8 *)puVar7[9];
      if ((undefined8 *)puVar7[9] == (undefined8 *)0x0) {
        puVar5 = puVar7 + 5;
      }
      if ((puVar5[lVar13] != 0) && ((longlong)*(int *)(param_2 + 0x40) != 0)) {
        lVar12 = 0;
        do {
          if (*(longlong *)(*(longlong *)(param_2 + 0x38) + lVar12) == puVar5[lVar13]) {
            local_58 = 1;
            local_60 = &local_4c;
            local_4c = *(undefined4 *)((longlong)puVar6 + lVar13 * 4);
            FUN_141711b54(param_1,param_2,&local_60);
            iVar11 = *(int *)(puVar7 + 4);
            break;
          }
          lVar12 = lVar12 + 8;
        } while ((longlong)*(int *)(param_2 + 0x40) * 8 != lVar12);
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 < iVar11);
  }
LAB_1427d1810:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1427d1838 FUN_1427d1838 body=970 status=ok
// SIG undefined FUN_1427d1838(void)

undefined8 FUN_1427d1838(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  ulonglong uVar5;
  byte bVar6;
  int iVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  int *piVar10;
  longlong lVar11;
  undefined8 uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  ulonglong uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  int *piVar23;
  longlong lVar24;
  longlong lVar25;
  ulonglong local_60;
  
  if ((**(longlong **)(param_1 + 0x60) == 0) ||
     (lVar11 = **(longlong **)(param_1 + 0x60), lVar11 == 0)) {
    uVar12 = 0;
  }
  else {
    plVar1 = (longlong *)(param_1 + 0x1b8);
    piVar2 = (int *)(param_1 + 0x218);
    iVar15 = 1;
    do {
      puVar8 = *(undefined8 **)(lVar11 + 8);
      FUN_1400020a8(*(undefined8 *)(param_1 + 0x60));
      *(longlong *)(param_1 + 0x60) = lVar11;
      if ((longlong)*(int *)(puVar8 + 0x6f) != 0) {
        piVar23 = (int *)puVar8[0x6e];
        piVar3 = piVar23 + *(int *)(puVar8 + 0x6f);
        do {
          if (*(int *)(param_1 + 0x1c0) != *(int *)(param_1 + 0x1ec)) {
            lVar11 = *(longlong *)(param_1 + 0x1f8);
            if (*(longlong *)(param_1 + 0x1f8) == 0) {
              lVar11 = param_1 + 0x1f0;
            }
            iVar13 = *(int *)(lVar11 + ((longlong)*(int *)(param_1 + 0x200) - 1U &
                                       (longlong)*piVar23) * 4);
            if (iVar13 != -1) {
LAB_1427d18fb:
              piVar4 = (int *)(*plVar1 + (longlong)iVar13 * 0x18);
              if (*piVar4 != *piVar23) goto code_r0x0001427d190b;
              iVar18 = *(int *)(lVar11 + (longlong)piVar4[5] * 4);
              if (iVar18 == iVar13) {
                piVar10 = (int *)(lVar11 + (longlong)piVar4[5] * 4);
              }
              else {
                do {
                  piVar10 = (int *)(*plVar1 + (longlong)iVar18 * 0x18 + 0x10);
                  iVar18 = *piVar10;
                } while (iVar18 != iVar13);
              }
              *piVar10 = piVar4[4];
              FUN_1427d761c(plVar1);
            }
          }
LAB_1427d1935:
          piVar23 = piVar23 + 1;
        } while (piVar23 != piVar3);
      }
      if (*(int *)(param_1 + 0x1c0) == *(int *)(param_1 + 0x1ec)) {
        if (*(int *)(param_1 + 0x200) == 0x200) {
          lVar11 = *(longlong *)(param_1 + 0x1f8);
          if (*(longlong *)(param_1 + 0x1f8) == 0) {
            lVar11 = param_1 + 0x1f0;
          }
          iVar13 = *(int *)(param_1 + 0x1e0);
          if (iVar13 == 0) {
            uVar17 = 1;
            iVar18 = 0;
            iVar14 = 0;
            local_60 = 0;
          }
          else {
            puVar16 = *(uint **)(param_1 + 0x1d8);
            if (*(uint **)(param_1 + 0x1d8) == (uint *)0x0) {
              puVar16 = (uint *)(param_1 + 0x1c8);
            }
            uVar19 = *puVar16;
            if (uVar19 == 0) {
              iVar18 = iVar13 + 0x1e;
              if (-1 < iVar13 + -1) {
                iVar18 = iVar13 + -1;
              }
              local_60 = 0;
              uVar17 = (ulonglong)(uint)(iVar18 >> 5);
              if (iVar18 >> 5 < 1) {
                uVar17 = local_60;
              }
              iVar14 = 0;
              do {
                if (uVar17 == local_60) goto LAB_1427d1a18;
                iVar14 = iVar14 + 0x20;
                uVar19 = puVar16[local_60 + 1];
                local_60 = local_60 + 1;
              } while (uVar19 == 0);
            }
            else {
              iVar14 = 0;
              local_60 = 0;
            }
            uVar17 = (ulonglong)(-uVar19 & uVar19);
            uVar5 = uVar17 * 2 + 1;
            lVar24 = 0x3f;
            if (uVar5 != 0) {
              for (; uVar5 >> lVar24 == 0; lVar24 = lVar24 + -1) {
              }
            }
            iVar18 = (iVar14 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
            if (iVar13 <= iVar18) {
              iVar18 = iVar13;
            }
          }
          if (iVar18 != iVar13) {
            uVar19 = 0xffffffff;
            do {
              *(undefined4 *)
               (lVar11 + (longlong)
                         *(int *)(*(longlong *)(param_1 + 0x1b8) + 0x14 + (longlong)iVar18 * 0x18) *
                         4) = 0xffffffff;
              uVar19 = ~(uint)uVar17 & uVar19;
              puVar16 = *(uint **)(param_1 + 0x1d8);
              if (*(uint **)(param_1 + 0x1d8) == (uint *)0x0) {
                puVar16 = (uint *)(param_1 + 0x1c8);
              }
              iVar7 = *(int *)(param_1 + 0x1e0);
              iVar18 = (int)local_60;
              lVar24 = (longlong)iVar18;
              uVar20 = puVar16[lVar24] & uVar19;
              if (uVar20 == 0) {
                iVar21 = iVar7 + 0x1e;
                if (-1 < iVar7 + -1) {
                  iVar21 = iVar7 + -1;
                }
                iVar21 = iVar21 >> 5;
                iVar14 = iVar14 + 0x20;
                iVar22 = iVar21;
                if (iVar21 < iVar18) {
                  iVar22 = iVar18;
                }
                if (iVar18 < iVar21) {
                  lVar25 = 0;
                  do {
                    uVar20 = puVar16[lVar24 + lVar25 + 1];
                    if (uVar20 != 0) {
                      local_60 = (ulonglong)(iVar18 + (int)lVar25 + 1);
                      uVar19 = 0xffffffff;
                      goto LAB_1427d1b96;
                    }
                    iVar14 = iVar14 + 0x20;
                    lVar25 = lVar25 + 1;
                  } while (iVar22 - lVar24 != lVar25);
                  uVar19 = 0xffffffff;
                  lVar24 = (longlong)iVar22;
                }
                local_60 = lVar24 + 1;
                iVar18 = iVar7;
              }
              else {
LAB_1427d1b96:
                uVar17 = (ulonglong)(-uVar20 & uVar20);
                uVar5 = uVar17 * 2 + 1;
                lVar24 = 0x3f;
                if (uVar5 != 0) {
                  for (; uVar5 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                  }
                }
                iVar18 = (iVar14 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
                if (iVar7 <= iVar18) {
                  iVar18 = iVar7;
                }
              }
            } while (iVar18 != iVar13);
          }
LAB_1427d1a18:
          FUN_140431f46(plVar1);
        }
        else {
          FUN_140431f46(plVar1);
          *(undefined4 *)(param_1 + 0x200) = 0x200;
          FUN_1417120da(plVar1);
        }
      }
      if (puVar8 != (undefined8 *)0x0) {
        (**(code **)*puVar8)(puVar8);
      }
      LOCK();
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if ((*piVar2 == 0) && (pbVar9 = *(byte **)(param_1 + 0x210), pbVar9 != (byte *)0x0)) {
        LOCK();
        bVar6 = *pbVar9;
        *pbVar9 = 1;
        UNLOCK();
        if ((bVar6 & 3) == 2) {
          FUN_1447458da();
        }
      }
      uVar12 = 1;
      if (iVar15 == param_2) {
        return 1;
      }
      iVar15 = iVar15 + 1;
      lVar11 = **(longlong **)(param_1 + 0x60);
    } while (lVar11 != 0);
  }
  return uVar12;
code_r0x0001427d190b:
  iVar13 = piVar4[4];
  if (iVar13 == -1) goto LAB_1427d1935;
  goto LAB_1427d18fb;
}



// FUNCTION 1427d1c02 FUN_1427d1c02 body=7011 status=ok
// SIG undefined FUN_1427d1c02(void)

/* WARNING: Removing unreachable block (ram,0x0001427d2b57) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427d1c02(longlong param_1,longlong param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 *param_5,char *param_6)

{
  byte *pbVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  code *pcVar7;
  LARGE_INTEGER LVar8;
  LONG LVar9;
  DWORD DVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  DWORD DVar14;
  DWORD DVar15;
  LPVOID pvVar16;
  longlong lVar17;
  longlong *plVar18;
  LARGE_INTEGER *pLVar19;
  undefined8 uVar20;
  undefined4 uVar21;
  int *piVar22;
  LARGE_INTEGER LVar23;
  LARGE_INTEGER *pLVar24;
  int iVar25;
  LARGE_INTEGER *pLVar26;
  uint *puVar27;
  uint uVar28;
  int iVar29;
  int iVar30;
  undefined8 *puVar31;
  int iVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  uint *puVar36;
  int iVar37;
  uint uVar38;
  LARGE_INTEGER *pLVar39;
  longlong lVar40;
  longlong lVar41;
  longlong lVar42;
  void *_Dst;
  longlong *plVar43;
  longlong lVar44;
  bool bVar45;
  undefined1 auStack_228 [38];
  byte local_202;
  undefined1 local_201;
  longlong local_200;
  longlong *local_1f8;
  int local_1ec;
  uint *local_1e8;
  longlong local_1e0;
  longlong *local_1d8;
  uint *local_1d0;
  LARGE_INTEGER *local_1c8;
  longlong local_1c0;
  undefined4 local_1b4;
  LPCRITICAL_SECTION local_1b0;
  LPCRITICAL_SECTION local_1a8;
  uint *local_1a0;
  int *local_198;
  longlong local_190;
  LPCRITICAL_SECTION local_188;
  ulonglong local_180;
  longlong *local_178;
  longlong local_170;
  LPVOID local_168;
  longlong local_160;
  LARGE_INTEGER *local_158;
  DWORD local_150;
  LARGE_INTEGER *local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined4 local_130;
  LARGE_INTEGER local_128;
  LARGE_INTEGER LStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  longlong local_b0 [4];
  longlong *local_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_228;
  DVar14 = DAT_14c75ec34;
  local_200 = param_2;
  if (DAT_14c75ec34 == 0xffffffff) {
    DVar14 = TlsAlloc();
    DVar15 = 0xffffffff;
    LOCK();
    bVar45 = DAT_14c75ec34 != 0xffffffff;
    DVar10 = DVar14;
    if (bVar45) {
      DVar15 = DAT_14c75ec34;
      DVar10 = DAT_14c75ec34;
    }
    DAT_14c75ec34 = DVar10;
    UNLOCK();
    if (bVar45) {
      TlsFree(DVar14);
      DVar14 = DVar15;
    }
  }
  pvVar16 = TlsGetValue(DVar14);
  if (pvVar16 == (LPVOID)0x0) {
    pvVar16 = (LPVOID)FUN_14001cc68(0x60,0x10);
    FUN_141073f92(pvVar16);
    FUN_140fddf04(pvVar16);
    TlsSetValue(DVar14,pvVar16);
  }
  uVar21 = *(undefined4 *)((longlong)pvVar16 + 0x50);
  *(undefined4 *)((longlong)pvVar16 + 0x50) = 0x400000;
  if (0 < *(int *)(param_1 + 0x1c)) goto LAB_1427d353a;
  local_1b4 = uVar21;
  local_168 = pvVar16;
  pvVar16 = TlsGetValue(DAT_14c948a28);
  local_201 = *(undefined1 *)((longlong)pvVar16 + 0x8c);
  uVar4 = *(undefined8 *)((longlong)pvVar16 + 0x90);
  uVar5 = *(undefined8 *)((longlong)pvVar16 + 0x98);
  *(undefined1 *)((longlong)pvVar16 + 0x8c) = param_3;
  *(undefined8 *)((longlong)pvVar16 + 0x90) = param_4;
  QueryPerformanceCounter(&local_128);
  *(double *)((longlong)pvVar16 + 0x98) = (double)local_128.QuadPart * DAT_14c83f420 + 16777216.0;
  bVar6 = *(byte *)(param_1 + 0x21);
  QueryPerformanceCounter(&local_128);
  local_202 = bVar6;
  if ((bVar6 & 1) == 0) {
    FUN_1427d3766(param_1,param_1 + 0x448);
  }
  lVar40 = local_200;
  FUN_1427d1414(param_1);
  local_1d0 = (uint *)*param_5;
  local_1c0 = (longlong)*(int *)(param_5 + 1);
  if ((((*(byte *)(param_1 + 0x21) & 1) == 0) || (DAT_14c7585c8 != 1)) ||
     (cVar11 = (**(code **)(*DAT_14c82b500 + 0x38))(), cVar11 != '\0')) {
LAB_1427d1da9:
    local_90 = (longlong *)0x0;
    local_88 = 0x400000000;
    lVar42 = param_1 + 0x548;
    local_178 = (longlong *)(param_1 + 0x40);
    local_188 = (LPCRITICAL_SECTION)(param_1 + 0xb0);
    local_1d8 = (longlong *)(param_1 + 0xd8);
    local_1a8 = (LPCRITICAL_SECTION)(param_1 + 0x88);
    local_1f8 = (longlong *)(param_1 + 0x68);
    local_170 = param_1 + 0x78;
    local_198 = (int *)(param_1 + 0x218);
    local_1b0 = (LPCRITICAL_SECTION)(param_1 + 400);
    local_160 = param_1 + 0x178;
    local_190 = param_1 + 0x110;
    local_1a0 = (uint *)(param_1 + 0xe8);
    local_1e8 = local_1d0 + local_1c0;
    local_1ec = 2;
    local_1e0 = lVar42;
    do {
      cVar11 = FUN_1427cec66(lVar40);
      if (cVar11 != '\0') {
        local_1ec = 0;
        break;
      }
      while (lVar41 = **(longlong **)(lVar40 + 0x68), lVar41 != 0) {
        uVar20 = *(undefined8 *)(lVar41 + 8);
        *(longlong *)(lVar40 + 0x68) = lVar41;
        FUN_1409f17c8(lVar42,uVar20);
        FUN_140166ab6(uVar20);
      }
      if ((*(int *)(lVar40 + 0x30) == 0) ||
         (local_180 = **(ulonglong **)
                        (*(longlong *)(lVar40 + 0x28) + (longlong)(*(int *)(lVar40 + 0x30) + -1) * 8
                        ), local_180 == 0)) {
        uVar12 = FUN_144841bbc(lVar42,lVar40);
        local_180 = 0;
      }
      else {
        uVar12 = FUN_1427ced50(lVar42,lVar40);
      }
      if (0 < *(int *)(param_1 + 0x48)) {
        uVar38 = 0;
        do {
          local_1c8 = (LARGE_INTEGER *)(longlong)(int)uVar38;
          lVar40 = *(longlong *)(*local_178 + (longlong)local_1c8 * 8);
          if (local_180 <= *(ulonglong *)(lVar40 + 0x2b8)) {
            if (*(char *)(lVar40 + 0x2f4) == '\v') {
              local_128.QuadPart = 0;
              LStack_120.QuadPart = 0;
              if ((longlong)*(int *)(lVar40 + 0x138) != 0) {
                plVar18 = *(longlong **)(lVar40 + 0x130);
                plVar43 = plVar18 + (longlong)*(int *)(lVar40 + 0x138) * 4;
                do {
                  if ((((char)plVar18[3] == '\0') && (*(char *)((longlong)plVar18 + 0x19) == '\0'))
                     && ((lVar42 = *plVar18, lVar42 != 0 && ((*(uint *)(lVar42 + 8) & 0x10) != 0))))
                  {
                    FUN_1406d3f7c(lVar42,&local_128);
                    LVar23 = local_128;
                    lVar42 = (longlong)(int)LStack_120._0_4_;
                    if (lVar42 != 0) {
                      lVar41 = 0;
                      do {
                        if (*(longlong *)(LVar23.QuadPart + lVar41) != 0) {
                          uVar12 = *(uint *)(*(longlong *)(LVar23.QuadPart + lVar41) + 0xc);
                          if ((int)uVar12 < DAT_14c9647dc) {
                            lVar17 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
                            if ((*(uint *)(lVar17 + 8 + (ulonglong)(uVar12 & 0xffff) * 0x18) &
                                0x8400000) != 0) {
                              lVar17 = lVar17 + (ulonglong)(uVar12 & 0xffff) * 0x18;
LAB_1427d2028:
                              FUN_14482b126(lVar17,0x8400000);
                            }
                          }
                          else if ((_DAT_00000008 & 0x8400000) != 0) {
                            lVar17 = 0;
                            goto LAB_1427d2028;
                          }
                        }
                        lVar41 = lVar41 + 8;
                      } while (lVar42 * 8 != lVar41);
                    }
                    bVar45 = LStack_120.QuadPart < 0;
                    LStack_120.QuadPart = LStack_120.QuadPart & 0xffffffff00000000;
                    if (bVar45) {
                      FUN_14079e7a6(&local_128,0);
                    }
                  }
                  plVar18 = plVar18 + 4;
                } while (plVar18 != plVar43);
              }
              LOCK();
              *(undefined1 *)(lVar40 + 0x2f4) = 0xc;
              UNLOCK();
              if (local_128.QuadPart != 0) {
                FUN_1400020a8();
              }
            }
            plVar18 = local_1d8;
            lVar42 = local_200;
            if (*(char *)(lVar40 + 0x2f4) == '\f') {
              if (*(char *)(lVar40 + 0x368) == '\0') {
                iVar13 = *(int *)(lVar40 + 0x138);
                do {
                  iVar32 = *(int *)(lVar40 + 0x2f0);
                  do {
                    if (iVar13 <= iVar32) {
LAB_1427d213f:
                      if (iVar32 == iVar13) goto LAB_1427d2148;
                      local_1ec = 0;
                      goto LAB_1427d2151;
                    }
                    cVar11 = FUN_1427cec66(lVar42);
                    iVar32 = *(int *)(lVar40 + 0x2f0);
                    if (cVar11 != '\0') goto LAB_1427d213f;
                    lVar17 = (longlong)iVar32;
                    iVar32 = iVar32 + 1;
                    *(int *)(lVar40 + 0x2f0) = iVar32;
                    lVar41 = *(longlong *)(*(longlong *)(lVar40 + 0x130) + lVar17 * 0x20);
                  } while ((((lVar41 == 0) ||
                            (lVar17 = *(longlong *)(lVar40 + 0x130) + lVar17 * 0x20,
                            *(char *)(lVar17 + 0x18) != '\0')) || (*(char *)(lVar17 + 0x19) != '\0')
                           ) || (pcVar7 = *(code **)(**(longlong **)(lVar41 + 0x10) + 0x368),
                                pcVar7 == (code *)&LAB_144aff916));
                  (*pcVar7)();
                } while( true );
              }
LAB_1427d2148:
              LOCK();
              *(undefined1 *)(lVar40 + 0x2f4) = 0xd;
              UNLOCK();
            }
LAB_1427d2151:
            if (*(char *)(lVar40 + 0x2f4) == '\r') {
              if (((*(char *)(lVar40 + 0x368) == '\0') && (DAT_14c75b114 == '\0')) &&
                 ((DAT_14c75ece4 != 0 && ((DAT_14c75ece0 != 0 && ((DAT_14c9647c4 & 1) == 0)))))) {
                iVar13 = *(int *)(lVar40 + 0x138);
LAB_1427d21a9:
                iVar32 = *(int *)(lVar40 + 0x2ec);
LAB_1427d21b0:
                if (iVar32 < iVar13) goto code_r0x0001427d21b4;
                goto LAB_1427d2221;
              }
LAB_1427d2229:
              LOCK();
              *(undefined1 *)(lVar40 + 0x2f4) = 0xe;
              UNLOCK();
            }
            if (local_1ec == 0) {
              local_1ec = 0;
              uVar12 = 1;
              break;
            }
            if ((*(longlong *)(lVar40 + 0x2b0) != 0) && (*(char *)(lVar40 + 0x368) == '\0')) {
              pbVar1 = (byte *)(*(longlong *)(lVar40 + 0x2b0) + 0x28);
              *pbVar1 = *pbVar1 | 2;
              FUN_144757f48(*(undefined8 *)(lVar40 + 0x2b0),0x80000);
              FUN_14472eae2(*(undefined8 *)(lVar40 + 0x2b0),0x8000000);
              QueryPerformanceCounter(&local_128);
            }
            EnterCriticalSection(local_188);
            iVar13 = *(int *)(param_1 + 0xe0);
            iVar32 = *(int *)(param_1 + 0x10c);
            iVar25 = *(int *)(param_1 + 0x120);
            if (iVar13 == iVar32) {
LAB_1427d234b:
              if (iVar25 == 0x200) {
                lVar42 = *(longlong *)(param_1 + 0x118);
                if (*(longlong *)(param_1 + 0x118) == 0) {
                  lVar42 = local_190;
                }
                iVar13 = *(int *)(param_1 + 0x100);
                if (iVar13 == 0) {
                  uVar34 = 1;
                  iVar32 = 0;
                  iVar25 = 0;
                  uVar33 = 0;
LAB_1427d23f3:
                  if (iVar32 != iVar13) {
                    uVar12 = 0xffffffff;
                    do {
                      *(undefined4 *)
                       (lVar42 + (longlong)
                                 *(int *)(*(longlong *)(param_1 + 0xd8) + 0x14 +
                                         (longlong)iVar32 * 0x18) * 4) = 0xffffffff;
                      uVar12 = ~(uint)uVar34 & uVar12;
                      puVar27 = *(uint **)(param_1 + 0xf8);
                      if (*(uint **)(param_1 + 0xf8) == (uint *)0x0) {
                        puVar27 = local_1a0;
                      }
                      iVar37 = *(int *)(param_1 + 0x100);
                      iVar32 = (int)uVar33;
                      lVar41 = (longlong)iVar32;
                      uVar28 = puVar27[lVar41] & uVar12;
                      if (uVar28 == 0) {
                        iVar29 = iVar37 + 0x1e;
                        if (-1 < iVar37 + -1) {
                          iVar29 = iVar37 + -1;
                        }
                        iVar29 = iVar29 >> 5;
                        iVar25 = iVar25 + 0x20;
                        iVar30 = iVar29;
                        if (iVar29 < iVar32) {
                          iVar30 = iVar32;
                        }
                        if (iVar32 < iVar29) {
                          lVar17 = 0;
                          do {
                            uVar28 = puVar27[lVar41 + lVar17 + 1];
                            if (uVar28 != 0) {
                              uVar33 = (ulonglong)(iVar32 + (int)lVar17 + 1);
                              uVar12 = 0xffffffff;
                              goto LAB_1427d26df;
                            }
                            iVar25 = iVar25 + 0x20;
                            lVar17 = lVar17 + 1;
                          } while (iVar30 - lVar41 != lVar17);
                          uVar12 = 0xffffffff;
                          iVar32 = iVar30;
                        }
                        uVar33 = (ulonglong)(iVar32 + 1);
                        iVar32 = iVar37;
                      }
                      else {
LAB_1427d26df:
                        uVar34 = (ulonglong)(-uVar28 & uVar28);
                        uVar35 = uVar34 * 2 + 1;
                        lVar41 = 0x3f;
                        if (uVar35 != 0) {
                          for (; uVar35 >> lVar41 == 0; lVar41 = lVar41 + -1) {
                          }
                        }
                        iVar32 = (iVar25 - ((uint)lVar41 ^ 0x3f)) + 0x3e;
                        if (iVar37 <= iVar32) {
                          iVar32 = iVar37;
                        }
                      }
                      plVar18 = local_1d8;
                    } while (iVar32 != iVar13);
                  }
                }
                else {
                  puVar27 = *(uint **)(param_1 + 0xf8);
                  if (*(uint **)(param_1 + 0xf8) == (uint *)0x0) {
                    puVar27 = local_1a0;
                  }
                  uVar12 = *puVar27;
                  if (uVar12 != 0) {
                    iVar25 = 0;
                    uVar33 = 0;
LAB_1427d23c9:
                    uVar34 = (ulonglong)(-uVar12 & uVar12);
                    uVar35 = uVar34 * 2 + 1;
                    lVar41 = 0x3f;
                    if (uVar35 != 0) {
                      for (; uVar35 >> lVar41 == 0; lVar41 = lVar41 + -1) {
                      }
                    }
                    iVar32 = (iVar25 - ((uint)lVar41 ^ 0x3f)) + 0x3e;
                    if (iVar13 <= iVar32) {
                      iVar32 = iVar13;
                    }
                    goto LAB_1427d23f3;
                  }
                  iVar32 = iVar13 + 0x1e;
                  if (-1 < iVar13 + -1) {
                    iVar32 = iVar13 + -1;
                  }
                  uVar33 = 0;
                  uVar34 = (ulonglong)(uint)(iVar32 >> 5);
                  if (iVar32 >> 5 < 1) {
                    uVar34 = uVar33;
                  }
                  iVar25 = 0;
                  while (uVar34 != uVar33) {
                    iVar25 = iVar25 + 0x20;
                    uVar12 = puVar27[uVar33 + 1];
                    uVar33 = uVar33 + 1;
                    if (uVar12 != 0) goto LAB_1427d23c9;
                  }
                }
                FUN_140431fbc(plVar18,0x200);
              }
              else {
                FUN_140431fbc(plVar18,0x200);
                *(undefined4 *)(param_1 + 0x120) = 0x200;
                FUN_141712380(plVar18);
              }
            }
            else {
              lVar42 = *(longlong *)(param_1 + 0x118);
              if (*(longlong *)(param_1 + 0x118) == 0) {
                lVar42 = local_190;
              }
              iVar25 = *(int *)(lVar42 + (longlong)
                                         (int)(iVar25 - 1U & (uint)*(longlong *)(lVar40 + 0xf8)) * 4
                               );
              if (iVar25 != -1) {
LAB_1427d22e2:
                plVar43 = (longlong *)(*plVar18 + (longlong)iVar25 * 0x18);
                if (*plVar43 != *(longlong *)(lVar40 + 0xf8)) goto code_r0x0001427d22f2;
                iVar13 = *(int *)(lVar42 + (longlong)*(int *)((longlong)plVar43 + 0x14) * 4);
                if (iVar13 == iVar25) {
                  piVar22 = (int *)(lVar42 + (longlong)*(int *)((longlong)plVar43 + 0x14) * 4);
                }
                else {
                  do {
                    piVar22 = (int *)(*plVar18 + (longlong)iVar13 * 0x18 + 0x10);
                    iVar13 = *piVar22;
                  } while (iVar13 != iVar25);
                }
                *piVar22 = (int)plVar43[2];
                FUN_1427d798c(plVar18);
                iVar13 = *(int *)(param_1 + 0xe0);
                iVar32 = *(int *)(param_1 + 0x10c);
              }
LAB_1427d233d:
              if (iVar13 == iVar32) {
                iVar25 = *(int *)(param_1 + 0x120);
                goto LAB_1427d234b;
              }
            }
            iVar13 = *(int *)(lVar40 + 0x388);
            if ((longlong)iVar13 != 0) {
              lVar42 = *(longlong *)(lVar40 + 0x380);
              lVar41 = 0;
              do {
                uVar12 = *(uint *)(*(longlong *)(lVar42 + lVar41) + 0xc);
                if ((int)uVar12 < DAT_14c9647dc) {
                  lVar17 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
                }
                else {
                  lVar17 = 0;
                }
                FUN_14482b126(lVar17,0xc400000);
                lVar41 = lVar41 + 8;
              } while ((longlong)iVar13 * 8 != lVar41);
            }
            *(undefined4 *)(lVar40 + 0x388) = 0;
            if (*(int *)(lVar40 + 0x38c) != 0) {
              FUN_14079e7a6(lVar40 + 0x380,0);
            }
            iVar13 = *(int *)(lVar40 + 0x138);
            if ((longlong)iVar13 != 0) {
              lVar42 = *(longlong *)(lVar40 + 0x130);
              lVar41 = 0;
              do {
                if (*(char *)(lVar42 + 0x1a + lVar41) == '\x01') {
                  uVar12 = *(uint *)(*(longlong *)(lVar42 + lVar41) + 0xc);
                  if ((int)uVar12 < DAT_14c9647dc) {
                    lVar17 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
                  }
                  else {
                    lVar17 = 0;
                  }
                  FUN_14482b126(lVar17,0xc400000);
                }
                lVar41 = lVar41 + 0x20;
              } while ((longlong)iVar13 * 0x20 != lVar41);
            }
            if (*(longlong *)(lVar40 + 0x2b0) != 0) {
              uVar12 = *(uint *)(*(longlong *)(lVar40 + 0x2b0) + 0xc);
              if ((int)uVar12 < DAT_14c9647dc) {
                lVar42 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
              }
              else {
                lVar42 = 0;
              }
              FUN_14482b126(lVar42,0xc400000);
            }
            LeaveCriticalSection(local_188);
            iVar13 = *(int *)(param_1 + 0x48);
            if (~uVar38 + iVar13 != 0) {
              memmove((void *)(*(longlong *)(param_1 + 0x40) + (longlong)local_1c8 * 8),
                      (void *)(*(longlong *)(param_1 + 0x40) + (longlong)local_1c8 * 8 + 8),
                      (longlong)(int)(~uVar38 + iVar13) << 3);
              iVar13 = *(int *)(param_1 + 0x48);
            }
            *(int *)(param_1 + 0x48) = iVar13 + -1;
            FUN_1417127e2(local_178);
            uVar33 = local_88;
            LOCK();
            *(int *)(param_1 + 0x20c) = *(int *)(param_1 + 0x20c) + -1;
            UNLOCK();
            lVar42 = (longlong)(int)local_88;
            uVar12 = (int)local_88 + 1;
            local_88 = CONCAT44(local_88._4_4_,uVar12);
            if (local_88._4_4_ < uVar12) {
              FUN_140de50dc(local_b0,uVar33 & 0xffffffff);
            }
            uVar38 = uVar38 - 1;
            plVar18 = local_90;
            if (local_90 == (longlong *)0x0) {
              plVar18 = local_b0;
            }
            plVar18[lVar42] = lVar40;
            uVar12 = 1;
          }
          uVar38 = uVar38 + 1;
        } while ((int)uVar38 < *(int *)(param_1 + 0x48));
      }
LAB_1427d2737:
      EnterCriticalSection(local_1a8);
      uVar38 = *(uint *)(param_1 + 0x80);
      if ((longlong)(int)uVar38 != 0) {
        iVar13 = *(int *)(param_1 + 0x70);
        *(uint *)(param_1 + 0x70) = iVar13 + uVar38;
        if ((uint)(*(int *)(param_1 + 0x74) - iVar13) < uVar38) {
          FUN_141712952(local_1f8,iVar13);
        }
        memmove((void *)((longlong)iVar13 * 0x78 + *(longlong *)(param_1 + 0x68)),
                *(void **)(param_1 + 0x78),(longlong)(int)uVar38 * 0x78);
        *(undefined4 *)(param_1 + 0x80) = 0;
      }
      iVar13 = *(int *)(param_1 + 0x84);
      FUN_1449a44cd(*(undefined8 *)(param_1 + 0x78),0);
      *(undefined4 *)(param_1 + 0x80) = 0;
      if ((iVar13 < 0) && (*(int *)(param_1 + 0x84) != 0)) {
        FUN_146887e8e(local_170);
      }
      LeaveCriticalSection(local_1a8);
      plVar18 = local_90;
      if (local_90 == (longlong *)0x0) {
        plVar18 = local_b0;
      }
      if ((longlong)(int)local_88 != 0) {
        plVar43 = plVar18 + (int)local_88;
        do {
          lVar40 = *plVar18;
          LOCK();
          *(undefined1 *)(lVar40 + 0x2f4) = 0xf;
          UNLOCK();
          lVar42 = *(longlong *)(lVar40 + 0x140);
          iVar13 = *(int *)(lVar40 + 0x148);
          *(undefined4 *)(lVar40 + 0x148) = 0;
          if ((longlong)iVar13 != 0) {
            lVar41 = 0;
            do {
              if (*(longlong *)(lVar42 + lVar41) != 0) {
                FUN_140166ab6();
              }
              lVar41 = lVar41 + 8;
            } while ((longlong)iVar13 * 8 != lVar41);
          }
          if ((*(int *)(lVar40 + 0x3b8) == 0) && (*(int *)(lVar40 + 0x3d8) == 0)) {
            local_138 = *(undefined8 *)(lVar40 + 0x370);
            local_130 = *(undefined4 *)(lVar40 + 0x378);
            FUN_141711b54(param_1,local_200);
            FUN_140166ab6(lVar40);
          }
          else {
            local_128 = *(LARGE_INTEGER *)(lVar40 + 0x108);
            LStack_120.QuadPart = CONCAT44(LStack_120._4_4_,(uint)*(byte *)(lVar40 + 0x368)) ^ 1;
            local_118 = *(undefined8 *)(lVar40 + 0x2b0);
            local_f8 = *(longlong *)(lVar40 + 0x3b0);
            if (local_f8 == 0) {
              local_108 = *(undefined8 *)(lVar40 + 0x3a0);
              uStack_100 = *(undefined8 *)(lVar40 + 0x3a8);
            }
            *(undefined8 *)(lVar40 + 0x3b0) = 0;
            local_f0 = CONCAT44(*(undefined4 *)(lVar40 + 0x3bc),*(int *)(lVar40 + 0x3b8));
            *(undefined8 *)(lVar40 + 0x3b8) = 0x200000000;
            local_d8 = *(longlong *)(lVar40 + 0x3d0);
            if (local_d8 == 0) {
              local_e8 = *(undefined8 *)(lVar40 + 0x3c0);
              uStack_e0 = *(undefined8 *)(lVar40 + 0x3c8);
            }
            *(undefined8 *)(lVar40 + 0x3d0) = 0;
            local_d0 = *(undefined8 *)(lVar40 + 0x3d8);
            *(undefined8 *)(lVar40 + 0x3d8) = 0x200000000;
            local_c0 = (undefined8 *)0x0;
            local_b8 = 0x200000000;
            uVar38 = *(uint *)(lVar40 + 0x378);
            uStack_110 = lVar40;
            if ((longlong)(int)uVar38 != 0) {
              local_b8 = CONCAT44(2,uVar38);
              if (2 < uVar38) {
                FUN_140fadf14(&local_c8,0);
              }
              puVar31 = local_c0;
              if (local_c0 == (undefined8 *)0x0) {
                puVar31 = &local_c8;
              }
              memcpy(puVar31,*(void **)(lVar40 + 0x370),(longlong)(int)uVar38 << 2);
            }
            iVar13 = *(int *)(param_1 + 0x70);
            *(uint *)(param_1 + 0x70) = iVar13 + 1U;
            if (*(uint *)(param_1 + 0x74) < iVar13 + 1U) {
              FUN_141712952(local_1f8,iVar13);
            }
            lVar42 = *local_1f8;
            lVar41 = (longlong)iVar13 * 0x78;
            lVar40 = lVar42 + lVar41;
            puVar3 = (undefined4 *)(lVar42 + 0x10 + lVar41);
            *puVar3 = (undefined4)local_118;
            puVar3[1] = local_118._4_4_;
            puVar3[2] = (undefined4)uStack_110;
            puVar3[3] = uStack_110._4_4_;
            *(LARGE_INTEGER *)(lVar42 + lVar41) = local_128;
            ((LARGE_INTEGER *)(lVar42 + lVar41))[1].QuadPart = (LONGLONG)LStack_120;
            *(undefined8 *)(lVar42 + 0x30 + lVar41) = 0;
            if (local_f8 == 0) {
              *(undefined8 *)(lVar40 + 0x20) = local_108;
              *(undefined8 *)(lVar40 + 0x28) = uStack_100;
            }
            *(longlong *)(lVar40 + 0x30) = local_f8;
            *(undefined4 *)(lVar40 + 0x38) = (undefined4)local_f0;
            *(undefined4 *)(lVar40 + 0x3c) = local_f0._4_4_;
            *(undefined8 *)(lVar40 + 0x50) = 0;
            if (local_d8 == 0) {
              *(undefined8 *)(lVar40 + 0x40) = local_e8;
              *(undefined8 *)(lVar40 + 0x48) = uStack_e0;
            }
            *(longlong *)(lVar40 + 0x50) = local_d8;
            *(undefined4 *)(lVar40 + 0x58) = (undefined4)local_d0;
            *(undefined4 *)(lVar40 + 0x5c) = local_d0._4_4_;
            *(undefined8 *)(lVar40 + 0x68) = 0;
            if (local_c0 == (undefined8 *)0x0) {
              *(undefined8 *)(lVar40 + 0x60) = local_c8;
            }
            *(undefined8 **)(lVar40 + 0x68) = local_c0;
            *(undefined4 *)(lVar40 + 0x70) = (undefined4)local_b8;
            *(undefined4 *)(lVar40 + 0x74) = local_b8._4_4_;
            local_b8 = 0x200000000;
            local_c0 = (undefined8 *)0x0;
            local_d0 = 0x200000000;
            local_d8 = 0;
            local_f0 = 0x200000000;
            local_f8 = 0;
            FUN_1402820a6(&local_e8);
            FUN_14028211c(&local_108);
          }
          plVar18 = plVar18 + 1;
        } while (plVar18 != plVar43);
      }
      bVar45 = (longlong)local_88 < 0;
      local_88 = local_88 & 0xffffffff00000000;
      if (bVar45) {
        FUN_146887ebe(local_b0);
      }
      local_148 = (LARGE_INTEGER *)0x0;
      uStack_140 = 0;
      lVar40 = (longlong)*(int *)(param_1 + 0x70);
      if (0 < (longlong)*(int *)(param_1 + 0x70)) {
        do {
          lVar42 = lVar40 + -1;
          pLVar39 = (LARGE_INTEGER *)(lVar42 * 0x78 + *local_1f8);
          if ((int)local_1c0 == 0) {
            pLVar19 = (LARGE_INTEGER *)pLVar39[0xd].QuadPart;
            DVar14 = pLVar39[0xe].s.LowPart;
LAB_1427d2bf6:
            local_158 = pLVar39 + 0xc;
            if (pLVar19 != (LARGE_INTEGER *)0x0) {
              local_158 = pLVar19;
            }
            local_150 = DVar14;
            FUN_141711b54(param_1,local_200);
            uVar33 = uStack_140;
            lVar41 = (longlong)(int)uStack_140;
            uVar12 = (int)uStack_140 + 1;
            uStack_140 = CONCAT44(uStack_140._4_4_,uVar12);
            if (uStack_140._4_4_ < uVar12) {
              FUN_141712952(&local_148,uVar33 & 0xffffffff);
            }
            lVar17 = lVar41 * 0x78;
            LVar23 = *pLVar39;
            LVar8 = pLVar39[1];
            LVar9 = *(LONG *)((longlong)pLVar39 + 0x14);
            DVar14 = pLVar39[3].s.LowPart;
            uVar21 = *(undefined4 *)((longlong)pLVar39 + 0x1c);
            pLVar19 = local_148 + lVar41 * 0xf + 2;
            (pLVar19->s).LowPart = pLVar39[2].s.LowPart;
            (pLVar19->s).HighPart = LVar9;
            pLVar19[1].s.LowPart = DVar14;
            *(undefined4 *)((longlong)pLVar19 + 0xc) = uVar21;
            local_148[lVar41 * 0xf] = LVar23;
            (local_148 + lVar41 * 0xf)[1] = LVar8;
            local_148[lVar41 * 0xf + 6].QuadPart = 0;
            LVar23 = (LARGE_INTEGER)pLVar39[6].QuadPart;
            if (LVar23.QuadPart == 0) {
              LVar23 = pLVar39[5];
              local_148[lVar41 * 0xf + 4] = pLVar39[4];
              local_148[lVar41 * 0xf + 5] = LVar23;
              LVar23 = pLVar39[6];
            }
            local_148[lVar41 * 0xf + 6].QuadPart = (LONGLONG)LVar23;
            pLVar39[6].QuadPart = 0;
            local_148[lVar41 * 0xf + 7].s.LowPart = pLVar39[7].s.LowPart;
            *(undefined4 *)((longlong)local_148 + lVar17 + 0x3c) =
                 *(undefined4 *)((longlong)pLVar39 + 0x3c);
            pLVar39[7].QuadPart = 0x200000000;
            local_148[lVar41 * 0xf + 10].QuadPart = 0;
            LVar23 = (LARGE_INTEGER)pLVar39[10].QuadPart;
            if (LVar23.QuadPart == 0) {
              LVar23 = pLVar39[9];
              local_148[lVar41 * 0xf + 8] = pLVar39[8];
              local_148[lVar41 * 0xf + 9] = LVar23;
              LVar23 = pLVar39[10];
            }
            local_148[lVar41 * 0xf + 10].QuadPart = (LONGLONG)LVar23;
            pLVar39[10].QuadPart = 0;
            local_148[lVar41 * 0xf + 0xb].s.LowPart = pLVar39[0xb].s.LowPart;
            *(undefined4 *)((longlong)local_148 + lVar17 + 0x5c) =
                 *(undefined4 *)((longlong)pLVar39 + 0x5c);
            pLVar39[0xb].QuadPart = 0x200000000;
            local_148[lVar41 * 0xf + 0xd].QuadPart = 0;
            LVar23 = (LARGE_INTEGER)pLVar39[0xd].QuadPart;
            if (LVar23.QuadPart == 0) {
              local_148[lVar41 * 0xf + 0xc] = pLVar39[0xc];
              LVar23 = pLVar39[0xd];
            }
            local_148[lVar41 * 0xf + 0xd].QuadPart = (LONGLONG)LVar23;
            pLVar39[0xd].QuadPart = 0;
            local_148[lVar41 * 0xf + 0xe].s.LowPart = pLVar39[0xe].s.LowPart;
            *(undefined4 *)((longlong)local_148 + lVar17 + 0x74) =
                 *(undefined4 *)((longlong)pLVar39 + 0x74);
            pLVar39[0xe].QuadPart = 0x200000000;
            lVar41 = *local_1f8;
            lVar17 = (longlong)(int)(uint)lVar42 * 0x78;
            if (*(longlong *)(lVar41 + 0x68 + lVar17) != 0) {
              FUN_1400020a8();
            }
            _Dst = (void *)(lVar41 + lVar17);
            FUN_1402820a6((longlong)_Dst + 0x40);
            FUN_14028211c((longlong)_Dst + 0x20);
            iVar13 = *(int *)(param_1 + 0x70);
            iVar32 = ~(uint)lVar42 + iVar13;
            if (iVar32 != 0) {
              memmove(_Dst,(void *)((longlong)_Dst + 0x78),(longlong)iVar32 * 0x78);
              iVar13 = *(int *)(param_1 + 0x70);
            }
            *(int *)(param_1 + 0x70) = iVar13 + -1;
            FUN_141712ac4(local_1f8);
            uVar12 = 1;
          }
          else {
            pLVar19 = (LARGE_INTEGER *)pLVar39[0xd].QuadPart;
            pLVar26 = pLVar39 + 0xc;
            if (pLVar19 != (LARGE_INTEGER *)0x0) {
              pLVar26 = pLVar19;
            }
            DVar14 = pLVar39[0xe].s.LowPart;
            puVar27 = local_1d0;
            do {
              if (DVar14 != 0) {
                lVar41 = 0;
                do {
                  if (*(uint *)((longlong)pLVar26 + lVar41) == *puVar27) goto LAB_1427d2bf6;
                  lVar41 = lVar41 + 4;
                } while ((longlong)(int)DVar14 << 2 != lVar41);
              }
              puVar27 = puVar27 + 1;
            } while (puVar27 != local_1e8);
          }
          bVar45 = 1 < lVar40;
          lVar40 = lVar42;
        } while (bVar45);
        if ((longlong)(int)uStack_140 != 0) {
          pLVar19 = local_148 + (longlong)(int)uStack_140 * 0xf;
          pLVar39 = local_148;
          do {
            DVar14 = pLVar39[7].s.LowPart;
            if ((longlong)(int)DVar14 != 0) {
              pLVar26 = pLVar39 + 4;
              pLVar24 = (LARGE_INTEGER *)pLVar39[6].QuadPart;
              if ((LARGE_INTEGER *)pLVar39[6].QuadPart == (LARGE_INTEGER *)0x0) {
                pLVar24 = pLVar26;
              }
              lVar40 = 0;
              do {
                if (((int)(*(longlong **)((longlong)pLVar24 + lVar40))[1] != 0) &&
                   (plVar18 = (longlong *)**(longlong **)((longlong)pLVar24 + lVar40),
                   plVar18 != (longlong *)0x0)) {
                  (**(code **)(*plVar18 + 0x60))(plVar18,pLVar39);
                }
                lVar40 = lVar40 + 8;
              } while ((longlong)(int)DVar14 * 8 != lVar40);
              pLVar24 = (LARGE_INTEGER *)pLVar39[6].QuadPart;
              if ((LARGE_INTEGER *)pLVar39[6].QuadPart == (LARGE_INTEGER *)0x0) {
                pLVar24 = pLVar26;
              }
              FUN_14028218c(pLVar24,pLVar39[7].s.LowPart);
              pLVar39[7].s.LowPart = 0;
              if (*(int *)((longlong)pLVar39 + 0x3c) != 0) {
                FUN_1417122f8(pLVar26);
              }
            }
            DVar14 = pLVar39[0xb].s.LowPart;
            if ((longlong)(int)DVar14 != 0) {
              local_1c8 = pLVar39 + 8;
              local_128 = *pLVar39;
              LStack_120 = pLVar39[2];
              local_118 = CONCAT44(local_118._4_4_,(uint)(pLVar39[1].s.LowPart == 1) << 2);
              pLVar26 = (LARGE_INTEGER *)pLVar39[10].QuadPart;
              if ((LARGE_INTEGER *)pLVar39[10].QuadPart == (LARGE_INTEGER *)0x0) {
                pLVar26 = local_1c8;
              }
              lVar40 = 0;
              do {
                FUN_146885f5a(*(undefined8 *)((longlong)pLVar26 + lVar40),&local_128);
                lVar40 = lVar40 + 8;
              } while ((longlong)(int)DVar14 * 8 != lVar40);
              FUN_14688735a(local_1c8);
            }
            if (pLVar39[3].QuadPart == 0) {
              LOCK();
              *local_198 = *local_198 + -1;
              UNLOCK();
              if ((*local_198 == 0) && (pbVar1 = *(byte **)(param_1 + 0x210), pbVar1 != (byte *)0x0)
                 ) {
                LOCK();
                bVar6 = *pbVar1;
                *pbVar1 = 1;
                UNLOCK();
                if ((bVar6 & 3) == 2) {
                  FUN_1447458da(pbVar1,0xffffffff);
                }
              }
            }
            else {
              FUN_140166ab6();
            }
            pLVar39 = pLVar39 + 0xf;
          } while (pLVar39 != pLVar19);
        }
      }
      lVar42 = local_1e0;
      lVar40 = local_200;
      if ((uVar12 & 1) == 0) {
        bVar45 = false;
      }
      else {
        *param_6 = '\x01';
        if ((int)local_1c0 == 0) {
          bVar45 = true;
        }
        else {
          EnterCriticalSection(local_1b0);
          puVar27 = local_1d0;
          do {
            if (*(int *)(param_1 + 0x148) != *(int *)(param_1 + 0x174)) {
              lVar41 = *(longlong *)(param_1 + 0x180);
              if (*(longlong *)(param_1 + 0x180) == 0) {
                lVar41 = local_160;
              }
              iVar13 = *(int *)(lVar41 + (ulonglong)(*(int *)(param_1 + 0x188) - 1U & *puVar27) * 4)
              ;
              if (iVar13 != -1) {
                do {
                  bVar45 = true;
                  if (*(uint *)(*(longlong *)(param_1 + 0x140) + (longlong)iVar13 * 0xc) == *puVar27
                     ) goto LAB_1427d2fb2;
                  iVar13 = *(int *)(*(longlong *)(param_1 + 0x140) + (longlong)iVar13 * 0xc + 4);
                } while (iVar13 != -1);
              }
            }
            puVar27 = puVar27 + 1;
          } while (puVar27 != local_1e8);
          bVar45 = false;
LAB_1427d2fb2:
          LeaveCriticalSection(local_1b0);
        }
      }
      FUN_1449a44cd(local_148);
      if (local_148 != (LARGE_INTEGER *)0x0) {
        FUN_1400020a8();
      }
    } while (bVar45);
    if (local_90 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    QueryPerformanceCounter(&local_128);
    iVar13 = local_1ec;
    if (local_1ec == 0 || (local_202 & 1) != 0) {
LAB_1427d329f:
      if (iVar13 == 0) goto LAB_1427d34fb;
    }
    else if (*(int *)(param_1 + 0x220) != 0) {
      cVar11 = FUN_1427cec66(lVar40);
      if (cVar11 != '\0') goto LAB_1427d34fb;
      DVar14 = DAT_14c75ec34;
      if (DAT_14c75ec34 == 0xffffffff) {
        DVar14 = TlsAlloc();
        DVar15 = 0xffffffff;
        LOCK();
        bVar45 = DAT_14c75ec34 != 0xffffffff;
        DVar10 = DVar14;
        if (bVar45) {
          DVar15 = DAT_14c75ec34;
          DVar10 = DAT_14c75ec34;
        }
        DAT_14c75ec34 = DVar10;
        UNLOCK();
        if (bVar45) {
          TlsFree(DVar14);
          DVar14 = DVar15;
        }
      }
      pvVar16 = TlsGetValue(DVar14);
      if (pvVar16 == (LPVOID)0x0) {
        pvVar16 = (LPVOID)FUN_14001cc68(0x60,0x10);
        FUN_141073f92(pvVar16);
        FUN_140fddf04(pvVar16);
        TlsSetValue(DVar14,pvVar16);
      }
      uVar21 = *(undefined4 *)((longlong)pvVar16 + 0x50);
      *(undefined4 *)((longlong)pvVar16 + 0x50) = 0x400000;
      if ((DAT_14c86a9f8 == '\x01') &&
         (iVar13 = *(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0xc60), iVar13 != 2)) {
        if (iVar13 == 1) {
          DVar14 = FUN_140ad26c0();
          DVar15 = GetCurrentThreadId();
          if (DVar14 == DVar15) goto LAB_1427d3758;
        }
        bVar45 = false;
      }
      else {
LAB_1427d3758:
        *(int *)(param_1 + 0x5e0) = *(int *)(param_1 + 0x5e0) + 1;
        bVar45 = true;
      }
      uVar12 = 1;
LAB_1427d3171:
      if ((~uVar12 & 0x1f) == 0) {
        uVar20 = FUN_141552594();
        FUN_14275a71e(uVar20);
        FUN_1447f69b6(&DAT_14c868758);
      }
      cVar11 = FUN_1427cec66(local_200);
      iVar13 = 0;
      if ((cVar11 != '\0') || (0 < *(int *)(param_1 + 0x1c))) goto LAB_1427d328c;
      if ((*(int *)(param_1 + 0x208) != 0) || (*(int *)(param_1 + 0x3b8) != 0)) {
        cVar11 = FUN_1427cd9aa(param_1);
        iVar13 = 0;
        if (cVar11 == '\0') goto LAB_1427d328c;
LAB_1427d31d8:
        *param_6 = '\x01';
        uVar12 = uVar12 + 1;
        goto LAB_1427d3171;
      }
      if ((*(int *)(local_200 + 0x30) == 0) ||
         (**(longlong **)
            (*(longlong *)(local_200 + 0x28) + (longlong)(*(int *)(local_200 + 0x30) + -1) * 8) == 0
         )) {
        cVar11 = FUN_144841bbc(param_1 + 0x4c0);
      }
      else {
        cVar11 = FUN_1427ced50(param_1 + 0x4c0);
      }
      if (cVar11 != '\0') goto LAB_1427d31d8;
      if (**(longlong **)(param_1 + 0x130) != 0) {
        lVar40 = **(longlong **)(param_1 + 0x130);
        if (lVar40 == 0) {
          plVar18 = (longlong *)0x0;
        }
        else {
          local_1f8 = *(longlong **)(lVar40 + 8);
          FUN_1400020a8(*(undefined8 *)(param_1 + 0x130));
          *(longlong *)(param_1 + 0x130) = lVar40;
          plVar18 = local_1f8;
        }
        FUN_146885ffa(plVar18,local_200,1);
        goto LAB_1427d31d8;
      }
      cVar11 = FUN_1427d1838(param_1);
      if (cVar11 != '\0') goto LAB_1427d31d8;
      iVar13 = 2;
LAB_1427d328c:
      if (bVar45) {
        *(int *)(param_1 + 0x5e0) = *(int *)(param_1 + 0x5e0) + -1;
      }
      *(undefined4 *)((longlong)pvVar16 + 0x50) = uVar21;
      lVar40 = local_200;
      goto LAB_1427d329f;
    }
    lVar42 = local_200;
    if ((*param_6 == '\0') && (*(int *)(param_1 + 0x3f4) < *(int *)(param_1 + 0x3c8))) {
      uVar33 = 0;
      if ((longlong)*(int *)(lVar40 + 0x30) < 1) {
        uVar34 = 0;
      }
      else {
        uVar34 = **(ulonglong **)
                   (*(longlong *)(lVar40 + 0x28) + -8 + (longlong)*(int *)(lVar40 + 0x30) * 8);
      }
      iVar13 = *(int *)(param_1 + 1000);
      if (iVar13 == 0) {
        uVar35 = 1;
        iVar25 = 0;
        iVar32 = 0;
      }
      else {
        puVar27 = *(uint **)(param_1 + 0x3e0);
        if (*(uint **)(param_1 + 0x3e0) == (uint *)0x0) {
          puVar27 = (uint *)(param_1 + 0x3d0);
        }
        uVar12 = *puVar27;
        if (uVar12 == 0) {
          iVar32 = iVar13 + 0x1e;
          if (-1 < iVar13 + -1) {
            iVar32 = iVar13 + -1;
          }
          uVar33 = 0;
          uVar35 = (ulonglong)(uint)(iVar32 >> 5);
          if (iVar32 >> 5 < 1) {
            uVar35 = uVar33;
          }
          iVar25 = 0;
          do {
            if (uVar35 == uVar33) goto LAB_1427d34db;
            iVar25 = iVar25 + 0x20;
            uVar12 = puVar27[uVar33 + 1];
            uVar33 = uVar33 + 1;
          } while (uVar12 == 0);
        }
        else {
          uVar33 = 0;
          iVar25 = 0;
        }
        uVar35 = (ulonglong)(-uVar12 & uVar12);
        uVar2 = uVar35 * 2 + 1;
        lVar40 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar40 == 0; lVar40 = lVar40 + -1) {
          }
        }
        iVar32 = (iVar25 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
        if (iVar13 <= iVar32) {
          iVar32 = iVar13;
        }
      }
      if (iVar32 < iVar13) {
        puVar27 = (uint *)(param_1 + 0x3c0);
        local_1f8 = (longlong *)(param_1 + 0x410);
        uVar12 = 0xffffffff;
        do {
          lVar40 = *(longlong *)(param_1 + 0x3c0);
          lVar41 = (longlong)iVar32 * 0x20;
          plVar18 = *(longlong **)(lVar40 + lVar41);
          local_1e8 = puVar27;
          if ((0 < (longlong)*(int *)(param_1 + 0x418)) && (plVar18 != (longlong *)0x0)) {
            plVar43 = plVar18;
            do {
              lVar17 = 0;
              do {
                if (*(longlong **)(*local_1f8 + lVar17) == plVar43) goto LAB_1427d343d;
                lVar17 = lVar17 + 8;
              } while ((longlong)*(int *)(param_1 + 0x418) * 8 != lVar17);
              plVar43 = (longlong *)plVar43[8];
            } while (plVar43 != (longlong *)0x0);
          }
          lVar17 = (longlong)*(int *)(lVar40 + 0x10 + lVar41);
          if (lVar17 != 0) {
            lVar44 = 0;
LAB_1427d340e:
            if (*(ulonglong *)
                 (*(longlong *)(*(longlong *)(*(longlong *)(lVar40 + 8 + lVar41) + lVar44) + 8) +
                 0x2b8) < uVar34) goto code_r0x0001427d3422;
            if (plVar18 != (longlong *)0x0) {
              FUN_146887466(puVar27,&local_128,plVar18);
              lVar41 = 0;
              lVar40 = 0;
              if ((longlong)(int)local_128.s.LowPart != -1) {
                lVar17 = *(longlong *)puVar27;
                lVar44 = (longlong)(int)local_128.s.LowPart * 0x20;
                lVar40 = *(longlong *)(lVar17 + 8 + lVar44);
                *(undefined8 *)(lVar17 + 8 + lVar44) = 0;
                lVar41 = (longlong)*(int *)(lVar17 + 0x10 + lVar44);
                *(undefined4 *)(lVar17 + 0x10 + lVar44) = 0;
                *(undefined4 *)(lVar17 + 0x14 + lVar44) = 0;
                FUN_1458ecc8c(puVar27);
              }
              iVar13 = *(int *)(param_1 + 0x418);
              *(uint *)(param_1 + 0x418) = iVar13 + 1U;
              if (*(uint *)(param_1 + 0x41c) < iVar13 + 1U) {
                FUN_140a0062e(local_1f8,iVar13);
              }
              *(longlong **)(*local_1f8 + (longlong)iVar13 * 8) = plVar18;
              if (plVar18[0x22] == 0) {
                (**(code **)(*plVar18 + 1000))(plVar18);
              }
              *(int *)(param_1 + 0x418) = *(int *)(param_1 + 0x418) + -1;
              FUN_14593efea(local_1f8);
              if (lVar41 != 0) {
                lVar17 = 0;
                do {
                  lVar44 = *(longlong *)(lVar40 + lVar17);
                  LOCK();
                  piVar22 = (int *)(lVar44 + 0x38);
                  *piVar22 = *piVar22 + -1;
                  UNLOCK();
                  if (*piVar22 == 0) {
                    FUN_1400ee78c(lVar44,lVar42);
                  }
                  lVar17 = lVar17 + 8;
                } while (lVar41 * 8 != lVar17);
              }
              cVar11 = '\x01';
              if (lVar40 != 0) {
                FUN_1400020a8(lVar40);
              }
              goto LAB_1427d34dd;
            }
          }
LAB_1427d3436:
          iVar13 = *(int *)(param_1 + 1000);
LAB_1427d343d:
          uVar12 = uVar12 & ~(uint)uVar35;
          puVar36 = *(uint **)(param_1 + 0x3e0);
          if (*(uint **)(param_1 + 0x3e0) == (uint *)0x0) {
            puVar36 = (uint *)(param_1 + 0x3d0);
          }
          iVar32 = (int)uVar33;
          lVar40 = (longlong)iVar32;
          uVar38 = puVar36[lVar40] & uVar12;
          if (uVar38 == 0) {
            iVar37 = iVar13 + 0x1e;
            if (-1 < iVar13 + -1) {
              iVar37 = iVar13 + -1;
            }
            iVar37 = iVar37 >> 5;
            iVar29 = iVar37;
            if (iVar37 < iVar32) {
              iVar29 = iVar32;
            }
            if (iVar37 <= iVar32) break;
            lVar41 = 0;
            while( true ) {
              iVar25 = iVar25 + 0x20;
              uVar38 = puVar36[lVar40 + lVar41 + 1];
              if (uVar38 != 0) break;
              lVar41 = lVar41 + 1;
              if (iVar29 - lVar40 == lVar41) goto LAB_1427d34db;
            }
            uVar33 = (ulonglong)(iVar32 + (int)lVar41 + 1);
            uVar12 = 0xffffffff;
          }
          uVar35 = (ulonglong)(-uVar38 & uVar38);
          uVar2 = uVar35 * 2 + 1;
          lVar40 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar40 == 0; lVar40 = lVar40 + -1) {
            }
          }
          iVar32 = (iVar25 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
        } while (iVar32 < iVar13);
      }
LAB_1427d34db:
      cVar11 = '\0';
LAB_1427d34dd:
      *param_6 = cVar11;
    }
    if (*local_198 == 0) {
      FUN_1427d8cba();
    }
  }
  else {
    (**(code **)(*DAT_14c82b500 + 0x48))();
    cVar11 = FUN_1427cec66(lVar40);
    if (cVar11 == '\0') goto LAB_1427d1da9;
    QueryPerformanceCounter(&local_128);
  }
LAB_1427d34fb:
  FUN_1447f69b6(&DAT_14c868758);
  pvVar16 = TlsGetValue(DAT_14c948a28);
  *(undefined1 *)((longlong)pvVar16 + 0x8c) = local_201;
  *(undefined8 *)((longlong)pvVar16 + 0x90) = uVar4;
  *(undefined8 *)((longlong)pvVar16 + 0x98) = uVar5;
  pvVar16 = local_168;
  uVar21 = local_1b4;
LAB_1427d353a:
  *(undefined4 *)((longlong)pvVar16 + 0x50) = uVar21;
  if ((local_80 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x0001427d21b4:
  lVar41 = (longlong)iVar32;
  iVar32 = iVar32 + 1;
  *(int *)(lVar40 + 0x2ec) = iVar32;
  if (((*(char *)(*(longlong *)(lVar40 + 0x130) + 0x18 + lVar41 * 0x20) != '\0') ||
      (puVar31 = (undefined8 *)(*(longlong *)(lVar40 + 0x130) + lVar41 * 0x20),
      *(char *)((longlong)puVar31 + 0x19) != '\0')) ||
     (*(code **)(*(longlong *)*puVar31 + 0x20) == (code *)0x144aff470)) goto LAB_1427d21b0;
  cVar11 = (**(code **)(*(longlong *)*puVar31 + 0x20))();
  if (cVar11 != '\0') {
    (**(code **)(*(longlong *)*puVar31 + 0x30))();
    iVar32 = *(int *)(lVar40 + 0x2ec);
    if (iVar32 < iVar13) {
      cVar11 = FUN_1427cec66(lVar42);
      iVar32 = *(int *)(lVar40 + 0x2ec);
      if (cVar11 != '\0') {
LAB_1427d2221:
        if (iVar32 == iVar13) goto LAB_1427d2229;
        local_1ec = 0;
        uVar12 = 1;
        goto LAB_1427d2737;
      }
    }
    goto LAB_1427d21b0;
  }
  goto LAB_1427d21a9;
code_r0x0001427d22f2:
  iVar25 = (int)plVar43[2];
  if (iVar25 == -1) goto LAB_1427d233d;
  goto LAB_1427d22e2;
code_r0x0001427d3422:
  lVar44 = lVar44 + 8;
  if (lVar17 * 8 == lVar44) goto LAB_1427d3436;
  goto LAB_1427d340e;
}



// FUNCTION 1427d3766 FUN_1427d3766 body=1415 status=ok
// SIG undefined FUN_1427d3766(void)

void FUN_1427d3766(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  int *piVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong local_100;
  longlong *local_f8;
  longlong *local_f0;
  longlong local_e8;
  longlong *local_e0;
  LARGE_INTEGER local_d8;
  undefined8 uStack_d0;
  uint local_c8 [4];
  uint *local_b8;
  int local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  longlong local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((int)param_2[1] != 0) {
    QueryPerformanceCounter(&local_d8);
    local_f8 = param_2;
    if ((longlong)(int)param_2[1] != 0) {
      plVar16 = (longlong *)*param_2;
      local_e0 = plVar16 + (longlong)(int)param_2[1] * 3;
      local_f0 = (longlong *)(param_1 + 0x2b0);
      local_e8 = param_1 + 0x2e8;
      plVar1 = (longlong *)(param_1 + 0x350);
      do {
        lVar22 = *plVar16;
        if (lVar22 != 0) {
          local_b8 = (uint *)0x0;
          local_b0 = 0;
          local_d8.QuadPart = 0;
          uStack_d0 = 0;
          local_ac = 0xffffffff00000080;
          local_a4 = 0;
          local_98 = 0;
          local_90 = 0;
          local_88 = 0;
          uStack_80 = 0xffffffff;
          local_78 = 0xffffffff;
          if (*(int *)(param_1 + 0x2b8) != *(int *)(param_1 + 0x2e4)) {
            lVar13 = *(longlong *)(param_1 + 0x2f0);
            if (*(longlong *)(param_1 + 0x2f0) == 0) {
              lVar13 = local_e8;
            }
            iVar6 = *(int *)(lVar13 + (ulonglong)(*(int *)(param_1 + 0x2f8) - 1U & (uint)lVar22) * 4
                            );
            if (iVar6 != -1) {
              lVar13 = *local_f0;
LAB_1427d38a0:
              lVar20 = (longlong)iVar6 * 0x78;
              if (*(longlong *)(lVar13 + lVar20) != lVar22) goto code_r0x0001427d38ad;
              lVar13 = lVar13 + lVar20;
              FUN_141711eb2(&local_d8,lVar13 + 8);
              plVar5 = local_f0;
              local_78 = *(undefined8 *)(lVar13 + 0x68);
              local_88 = *(undefined8 *)(lVar13 + 0x58);
              uStack_80 = *(undefined8 *)(lVar13 + 0x60);
              lVar22 = *(longlong *)(param_1 + 0x2f0);
              if (*(longlong *)(param_1 + 0x2f0) == 0) {
                lVar22 = local_e8;
              }
              lVar13 = *(longlong *)(param_1 + 0x2b0);
              lVar17 = (longlong)*(int *)(lVar13 + 0x74 + lVar20);
              iVar14 = *(int *)(lVar22 + lVar17 * 4);
              if (iVar14 == iVar6) {
                piVar11 = (int *)(lVar22 + lVar17 * 4);
              }
              else {
                do {
                  piVar11 = (int *)((longlong)iVar14 * 0x78 + lVar13 + 0x70);
                  iVar14 = *piVar11;
                } while (iVar14 != iVar6);
              }
              *piVar11 = *(int *)(lVar13 + lVar20 + 0x70);
              lVar22 = *local_f0;
              *(undefined4 *)(lVar22 + 0x50 + lVar20) = 0;
              if (*(longlong *)(lVar22 + 0x48 + lVar20) != 0) {
                FUN_1400020a8();
              }
              FUN_140432214(lVar22 + lVar20 + 8);
              FUN_1427d6c42(plVar5,iVar6);
              if (local_b0 == 0) {
                uVar21 = 1;
                iVar6 = 0;
                iVar14 = 0;
                uVar18 = 0;
LAB_1427d39db:
                if (iVar6 < local_b0) {
                  uVar19 = 0xffffffff;
                  do {
                    FUN_1400b4ad0(plVar1,*(undefined4 *)
                                          (local_d8.QuadPart + 8 + (longlong)iVar6 * 0x18));
                    uVar19 = ~(uint)uVar21 & uVar19;
                    puVar10 = local_b8;
                    if (local_b8 == (uint *)0x0) {
                      puVar10 = local_c8;
                    }
                    iVar6 = (int)uVar18;
                    lVar22 = (longlong)iVar6;
                    uVar7 = puVar10[lVar22] & uVar19;
                    if (uVar7 == 0) {
                      iVar8 = local_b0 + 0x1e;
                      if (-1 < local_b0 + -1) {
                        iVar8 = local_b0 + -1;
                      }
                      iVar8 = iVar8 >> 5;
                      iVar9 = iVar8;
                      if (iVar8 < iVar6) {
                        iVar9 = iVar6;
                      }
                      if (iVar8 <= iVar6) break;
                      lVar13 = 0;
                      while( true ) {
                        iVar14 = iVar14 + 0x20;
                        uVar7 = puVar10[lVar22 + lVar13 + 1];
                        if (uVar7 != 0) break;
                        lVar13 = lVar13 + 1;
                        if (iVar9 - lVar22 == lVar13) goto LAB_1427d3aa2;
                      }
                      uVar18 = (ulonglong)(iVar6 + (int)lVar13 + 1);
                      uVar19 = 0xffffffff;
                    }
                    uVar21 = (ulonglong)(-uVar7 & uVar7);
                    uVar2 = uVar21 * 2 + 1;
                    lVar22 = 0x3f;
                    if (uVar2 != 0) {
                      for (; uVar2 >> lVar22 == 0; lVar22 = lVar22 + -1) {
                      }
                    }
                    iVar6 = (iVar14 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
                  } while (iVar6 < local_b0);
                }
              }
              else {
                puVar10 = local_b8;
                if (local_b8 == (uint *)0x0) {
                  puVar10 = local_c8;
                }
                uVar19 = *puVar10;
                if (uVar19 != 0) {
                  iVar14 = 0;
                  uVar18 = 0;
LAB_1427d39b7:
                  uVar21 = (ulonglong)(-uVar19 & uVar19);
                  uVar2 = uVar21 * 2 + 1;
                  lVar22 = 0x3f;
                  if (uVar2 != 0) {
                    for (; uVar2 >> lVar22 == 0; lVar22 = lVar22 + -1) {
                    }
                  }
                  iVar6 = (iVar14 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
                  if (local_b0 <= iVar6) {
                    iVar6 = local_b0;
                  }
                  goto LAB_1427d39db;
                }
                iVar6 = local_b0 + 0x1e;
                if (-1 < local_b0 + -1) {
                  iVar6 = local_b0 + -1;
                }
                uVar18 = 0;
                uVar21 = (ulonglong)(uint)(iVar6 >> 5);
                if (iVar6 >> 5 < 1) {
                  uVar21 = uVar18;
                }
                iVar14 = 0;
                while (uVar21 != uVar18) {
                  iVar14 = iVar14 + 0x20;
                  uVar19 = puVar10[uVar18 + 1];
                  uVar18 = uVar18 + 1;
                  if (uVar19 != 0) goto LAB_1427d39b7;
                }
              }
            }
          }
LAB_1427d3aa2:
          local_90 = 0;
          if (local_98 != 0) {
            FUN_1400020a8();
          }
          FUN_140432214(&local_d8);
        }
        plVar16 = plVar16 + 3;
      } while (plVar16 != local_e0);
      if ((longlong)(int)local_f8[1] != 0) {
        lVar17 = *local_f8;
        lVar13 = lVar17 + (longlong)(int)local_f8[1] * 0x18;
        lVar22 = param_1 + 0x388;
        lVar20 = 0;
        lVar15 = 0;
        local_108 = lVar22;
        local_100 = lVar13;
LAB_1427d3b52:
        if (*(int *)(param_1 + 0x358) != *(int *)(param_1 + 900)) {
          lVar12 = *(longlong *)(param_1 + 0x390);
          if (*(longlong *)(param_1 + 0x390) == 0) {
            lVar12 = lVar22;
          }
          iVar6 = *(int *)(lVar12 + (ulonglong)
                                    (*(int *)(param_1 + 0x398) - 1U & *(uint *)(lVar17 + 8)) * 4);
          if (iVar6 != -1) {
            lVar12 = *plVar1;
            do {
              lVar4 = (longlong)iVar6 * 0x1c;
              if (*(uint *)(lVar12 + lVar4) == *(uint *)(lVar17 + 8)) {
                uVar3 = *(undefined4 *)(lVar12 + 4 + lVar4);
                uVar19 = *(uint *)(lVar12 + 8 + lVar4);
                uVar7 = *(uint *)(lVar12 + 0xc + lVar4);
                local_e0 = (longlong *)(ulonglong)*(uint *)(lVar12 + 0x10 + lVar4);
                FUN_1400b4b28(plVar1);
                lVar22 = CONCAT44(uVar3,uVar19);
                if (lVar22 == lVar15) goto LAB_1427d3c4b;
                lVar15 = lVar22;
                if (*(int *)(param_1 + 0x2b8) == *(int *)(param_1 + 0x2e4)) goto LAB_1427d3c7a;
                lVar13 = *(longlong *)(param_1 + 0x2f0);
                if (*(longlong *)(param_1 + 0x2f0) == 0) {
                  lVar13 = local_e8;
                }
                iVar6 = *(int *)(lVar13 + (ulonglong)(*(int *)(param_1 + 0x2f8) - 1U & uVar19) * 4);
                if (iVar6 == -1) goto LAB_1427d3c7a;
                goto LAB_1427d3c23;
              }
              iVar6 = *(int *)(lVar4 + lVar12 + 0x14);
            } while (iVar6 != -1);
          }
        }
        goto LAB_1427d3ba9;
      }
    }
LAB_1427d3c8c:
    *(undefined4 *)(local_f8 + 1) = 0;
    if (*(int *)((longlong)local_f8 + 0xc) < 0) {
      FUN_146888156();
    }
    QueryPerformanceCounter(&local_d8);
  }
  if ((local_70 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x0001427d38ad:
  iVar6 = *(int *)(lVar20 + lVar13 + 0x70);
  if (iVar6 == -1) goto LAB_1427d3aa2;
  goto LAB_1427d38a0;
LAB_1427d3c23:
  lVar20 = *local_f0 + (longlong)iVar6 * 0x78;
  if (*(longlong *)(*local_f0 + (longlong)iVar6 * 0x78) != lVar22) goto code_r0x0001427d3c34;
  if (lVar20 != 0) {
    lVar20 = lVar20 + 8;
LAB_1427d3c4b:
    if (lVar20 != 0) {
      iVar6 = FUN_1403462ec(lVar20,((ulonglong)uVar7 << 0x20) + (longlong)local_e0);
      lVar13 = local_100;
      lVar22 = local_108;
      if (iVar6 != 0) {
        *(undefined1 *)(lVar20 + 100) = 0;
      }
      goto LAB_1427d3ba9;
    }
  }
  goto LAB_1427d3c7a;
code_r0x0001427d3c34:
  iVar6 = *(int *)(lVar20 + 0x70);
  if (iVar6 == -1) goto LAB_1427d3c7a;
  goto LAB_1427d3c23;
LAB_1427d3c7a:
  lVar20 = 0;
  lVar13 = local_100;
  lVar22 = local_108;
LAB_1427d3ba9:
  lVar17 = lVar17 + 0x18;
  if (lVar17 == lVar13) goto LAB_1427d3c8c;
  goto LAB_1427d3b52;
}



// FUNCTION 1427d3cee FUN_1427d3cee body=1597 status=ok
// SIG undefined FUN_1427d3cee(void)

undefined8 * FUN_1427d3cee(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  LPVOID lpTlsValue;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 local_68 [8];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = &PTR_LAB_149e67190;
  param_1[1] = &PTR_FUN_149e671c0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  puVar3 = (undefined8 *)FUN_14001cc68(0x10,8);
  *puVar3 = 0;
  param_1[0xb] = puVar3;
  param_1[0xc] = puVar3;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x11));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x11),4000);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x16));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x16),4000);
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x25] = 0;
  puVar3 = (undefined8 *)FUN_14001cc68(0x10,8);
  *puVar3 = 0;
  param_1[0x25] = puVar3;
  param_1[0x26] = puVar3;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x32));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x32),4000);
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20c) = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  *(undefined8 *)((longlong)param_1 + 0x264) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x26c) = 0;
  param_1[0x4f] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  param_1[0x52] = param_2;
  param_1[0x53] = param_3;
  uVar4 = FUN_145e2a7c0();
  param_1[0x54] = uVar4;
  FUN_1461a4e22(param_1 + 0x55,param_1);
  param_1[0x74] = 0;
  puVar3 = (undefined8 *)FUN_14001cc68(0x60,8);
  *puVar3 = 0;
  param_1[0x74] = puVar3;
  param_1[0x75] = puVar3;
  param_1[0x7c] = 0;
  *(undefined4 *)(param_1 + 0x7d) = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3ec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3f4) = 0;
  param_1[0x80] = 0;
  *(undefined4 *)(param_1 + 0x81) = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x84));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x84),4000);
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x464) = 0;
  *(undefined8 *)((longlong)param_1 + 0x46c) = 0;
  FUN_1462727d8(param_1 + 0x8f);
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x9e));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x9e),4000);
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0x8000000000000000;
  param_1[0xa7] = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xaf));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xaf),4000);
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0x8000000000000000;
  param_1[0xb8] = 0;
  *(undefined4 *)(param_1 + 0xb9) = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[0x99] = param_1 + 0x8f;
  if ((uint)(*(int *)(param_1 + 0x1c) - *(int *)((longlong)param_1 + 0x10c)) < 0x200) {
    FUN_141712b5a(param_1 + 0x1b);
    if (*(int *)(param_1 + 0x24) < 0x200) {
      *(undefined4 *)(param_1 + 0x24) = 0x200;
      FUN_141712380(param_1 + 0x1b);
    }
  }
  if (*(int *)((longlong)param_1 + 0x3bc) < 0x200) {
    FUN_1462725e2(param_1 + 0x76);
  }
  puVar3 = param_1 + 0x98;
  if ((uint)(*(int *)(param_1 + 0x38) - *(int *)((longlong)param_1 + 0x1ec)) < 0x200) {
    FUN_141712ce4(param_1 + 0x37);
    if (*(int *)(param_1 + 0x40) < 0x200) {
      *(undefined4 *)(param_1 + 0x40) = 0x200;
      FUN_1417120da(param_1 + 0x37);
    }
  }
  FUN_145c8bb22(param_1 + 0xba);
  puVar1 = (undefined8 *)param_1[0xba];
  *puVar1 = FUN_1427cf31a;
  puVar1[1] = puVar3;
  *(undefined1 *)(puVar1 + 2) = 0;
  puVar1[3] = L"ProcessSummary";
  lVar2 = param_1[0xba];
  *(code **)(lVar2 + 0x20) = FUN_140135392;
  *(undefined8 **)(lVar2 + 0x28) = puVar3;
  *(undefined1 *)(lVar2 + 0x30) = 0;
  *(wchar_t **)(lVar2 + 0x38) = L"DependenciesReady";
  lVar2 = param_1[0xba];
  *(code **)(lVar2 + 0x40) = FUN_140135414;
  *(undefined8 **)(lVar2 + 0x48) = puVar3;
  *(undefined1 *)(lVar2 + 0x50) = 1;
  *(wchar_t **)(lVar2 + 0x58) = L"ExportsSerialized";
  lVar2 = param_1[0xba];
  *(code **)(lVar2 + 0x60) = FUN_1427d041e;
  *(undefined8 **)(lVar2 + 0x68) = puVar3;
  *(undefined1 *)(lVar2 + 0x70) = 0;
  *(wchar_t **)(lVar2 + 0x78) = L"ExportBundle_Process";
  lVar2 = param_1[0xba];
  *(code **)(lVar2 + 0x80) = FUN_1427d0bfa;
  *(undefined8 **)(lVar2 + 0x88) = puVar3;
  *(undefined1 *)(lVar2 + 0x90) = 0;
  *(wchar_t **)(lVar2 + 0x98) = L"ExportBundle_PostLoad";
  lVar2 = param_1[0xba];
  *(code **)(lVar2 + 0xa0) = FUN_1401354ea;
  *(undefined8 **)(lVar2 + 0xa8) = param_1 + 0xa9;
  *(undefined1 *)(lVar2 + 0xb0) = 0;
  *(wchar_t **)(lVar2 + 0xb8) = L"ExportBundle_DeferredPostLoad";
  uVar4 = FUN_1405d8a54(0);
  param_1[5] = uVar4;
  uVar4 = FUN_1405d8a54(0);
  param_1[6] = uVar4;
  uVar4 = FUN_1405d8a54(0);
  param_1[7] = uVar4;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  uVar4 = FUN_14171c4d2();
  local_78 = &LAB_140d252d6;
  local_70 = 0;
  FUN_146272240(uVar4,local_68,param_1);
  DAT_14c948a28 = TlsAlloc();
  lpTlsValue = (LPVOID)FUN_14001cc68(0xa8,0x10);
  FUN_146272676(lpTlsValue,param_1 + 0x96);
  lVar2 = param_1[0x8b];
  param_1[0x8b] = lpTlsValue;
  if (lVar2 != 0) {
    FUN_14570fd28(lVar2);
    FUN_1400020a8(lVar2);
    lpTlsValue = (LPVOID)param_1[0x8b];
  }
  param_1[0x98] = lpTlsValue;
  param_1[0xa9] = lpTlsValue;
  TlsSetValue(DAT_14c948a28,lpTlsValue);
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427d432c FUN_1427d432c body=290 status=ok
// SIG undefined FUN_1427d432c(void)

void FUN_1427d432c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  FUN_145e6e082();
  FUN_14614aaa6(param_1 + 0x3b8);
  *(undefined4 *)(param_1 + 0x410) = 0;
  if (*(int *)(param_1 + 0x414) != 0) {
    FUN_140aa8146(param_1 + 0x408,0);
  }
  FUN_14163927a();
  if ((DAT_14c948ab0 == '\x01') && (*(longlong *)(param_1 + 8) == 0)) {
    lVar2 = FUN_14001cc68(0xa8,0x10);
    FUN_146272676(lVar2);
    lVar1 = *(longlong *)(param_1 + 0x458);
    *(longlong *)(param_1 + 0x458) = lVar2;
    if (lVar1 != 0) {
      FUN_14570fd28(lVar1);
      FUN_1400020a8(lVar1);
      lVar2 = *(longlong *)(param_1 + 0x458);
    }
    *(longlong *)(param_1 + 0x4b8) = lVar2;
    *(longlong *)(param_1 + 0x550) = param_1 + 0x48;
    *(longlong *)(param_1 + 0x208) = param_1 + 0x48;
    *(undefined1 *)(lVar2 + 0x88) = 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x458) + 0x89) = 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x450) + 0x89) = 0;
    *(undefined1 *)(param_1 + 0x19) = 1;
    uVar3 = FUN_1411b1052(param_1 + -8,L"FAsyncLoadingThread",0,0,0xffffffffffffffff,0);
    *(undefined8 *)(param_1 + 8) = uVar3;
  }
  return;
}



// FUNCTION 1427d444e FUN_1427d444e body=1220 status=ok
// SIG undefined FUN_1427d444e(void)

undefined8 FUN_1427d444e(longlong param_1)

{
  LPCRITICAL_SECTION p_Var1;
  int *piVar2;
  longlong lVar3;
  int *piVar4;
  char cVar5;
  byte bVar6;
  DWORD DVar7;
  int iVar8;
  DWORD DVar9;
  LPVOID pvVar10;
  undefined8 *puVar11;
  byte bVar12;
  char cVar13;
  undefined8 uVar14;
  bool bVar15;
  bool bVar16;
  undefined1 auStack_b8 [40];
  longlong local_90;
  LPCRITICAL_SECTION local_88;
  longlong local_80 [2];
  undefined1 local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  DVar7 = GetCurrentThreadId();
  LOCK();
  *(DWORD *)(param_1 + 0x288) = DVar7;
  UNLOCK();
  TlsSetValue(DAT_14c948a28,*(LPVOID *)(param_1 + 0x460));
  if (DAT_14c872d28 == (longlong *)0x0) {
    FUN_1460d69fa();
  }
  (**(code **)(*DAT_14c872d28 + 0x78))();
  pvVar10 = TlsGetValue(DAT_14c948a28);
  local_80[0] = param_1 + 0x478;
  local_80[1] = 0;
  local_70 = 0;
  local_68 = 0;
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    local_88 = (LPCRITICAL_SECTION)(param_1 + 0x420);
    local_90 = param_1 + 0x448;
    piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    cVar13 = '\x01';
    do {
      if (cVar13 == '\x02') {
        FUN_140330200(local_80);
LAB_1427d456d:
        cVar13 = '\x01';
      }
      else if (cVar13 == '\0') {
        while ((*(byte *)(param_1 + 0x18) & 1) == 0) {
          if ((*(int *)(param_1 + 0x1c) == 0) && (DAT_14c950c20[2] == 0)) {
            (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))();
            goto LAB_1427d456d;
          }
          FUN_14000f986(0x3a83126f);
        }
LAB_1427d489d:
        cVar13 = '\0';
      }
      else {
        cVar13 = '\x01';
        if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
          bVar16 = false;
          bVar15 = false;
LAB_1427d4588:
          *(undefined1 *)((longlong)pvVar10 + 0x8a) = 1;
          if (!bVar16) {
            do {
              piVar4 = DAT_14c950c20;
              if ((0 < *(int *)(param_1 + 0x1c)) || (DAT_14c950c20[2] != 0)) break;
              if ((DAT_14c86a9f8 == '\x01') && (*piVar2 != 2)) {
                if (*piVar2 == 1) {
                  DVar7 = FUN_140ad26c0();
                  DVar9 = GetCurrentThreadId();
                  if (DVar7 == DVar9) goto LAB_1427d4615;
                }
                p_Var1 = (LPCRITICAL_SECTION)(piVar4 + 4);
                while( true ) {
                  if (0 < piVar4[1]) {
                    (**(code **)(**(longlong **)(piVar4 + 0xe) + 0x20))
                              (*(longlong **)(piVar4 + 0xe),0xffffffff,0);
                  }
                  EnterCriticalSection(p_Var1);
                  if (piVar4[1] == 0) break;
                  LeaveCriticalSection(p_Var1);
                }
                LOCK();
                *piVar4 = *piVar4 + 1;
                UNLOCK();
                LeaveCriticalSection(p_Var1);
              }
LAB_1427d4615:
              p_Var1 = local_88;
              EnterCriticalSection(local_88);
              FUN_1427d3766(param_1,local_90);
              LeaveCriticalSection(p_Var1);
              if (bVar15) {
                lVar3 = **(longlong **)(param_1 + 0x130);
                if (lVar3 == 0) {
                  uVar14 = 0;
                }
                else {
                  uVar14 = *(undefined8 *)(lVar3 + 8);
                  FUN_1400020a8(*(undefined8 *)(param_1 + 0x130));
                  *(longlong *)(param_1 + 0x130) = lVar3;
                }
                FUN_146885ffa(uVar14,pvVar10);
                goto LAB_1427d486f;
              }
              if ((((*(int *)(param_1 + 0x208) != 0) || (*(int *)(param_1 + 0x3b8) != 0)) &&
                  (cVar5 = FUN_1427cd9aa(param_1,pvVar10), cVar5 != '\0')) &&
                 ((bVar16 = true, 0 < *(int *)(param_1 + 0x1c) || (DAT_14c950c20[2] != 0)))) {
LAB_1427d47c0:
                piVar4 = DAT_14c950c20;
                if ((DAT_14c86a9f8 == '\x01') && (*piVar2 != 2)) {
                  if (*piVar2 == 1) {
                    DVar7 = FUN_140ad26c0();
                    DVar9 = GetCurrentThreadId();
                    if (DVar7 == DVar9) goto LAB_1427d47e4;
                  }
                  LOCK();
                  *piVar4 = *piVar4 + -1;
                  UNLOCK();
                }
LAB_1427d47e4:
                bVar15 = false;
                goto LAB_1427d47e7;
              }
              bVar12 = 0;
              do {
                FUN_1427d1414(param_1,pvVar10);
                if ((*(int *)((longlong)pvVar10 + 0x30) == 0) ||
                   (**(longlong **)
                      (*(longlong *)((longlong)pvVar10 + 0x28) +
                      (longlong)(*(int *)((longlong)pvVar10 + 0x30) + -1) * 8) == 0)) {
                  bVar6 = FUN_144841bbc(param_1 + 0x4c0,pvVar10);
                }
                else {
                  bVar6 = FUN_1427ced50(param_1 + 0x4c0,pvVar10);
                }
                if (0 < *(int *)(param_1 + 0x1c)) {
                  bVar16 = true;
                  goto LAB_1427d47c0;
                }
                bVar12 = bVar12 | bVar6;
              } while ((bVar6 & DAT_14c950c20[2] == 0) != 0);
              bVar16 = DAT_14c950c20[2] != 0;
              if ((bVar12 & 1) != 0 || bVar16) goto LAB_1427d47c0;
              puVar11 = (undefined8 *)(**(longlong **)(param_1 + 0x130) + 8);
              if ((puVar11 != (undefined8 *)0x0 && **(longlong **)(param_1 + 0x130) != 0) &&
                 (iVar8 = FUN_146885ffa(*puVar11,pvVar10), iVar8 == 2)) {
                lVar3 = **(longlong **)(param_1 + 0x130);
                if (lVar3 != 0) {
                  FUN_1400020a8(*(undefined8 *)(param_1 + 0x130));
                  *(longlong *)(param_1 + 0x130) = lVar3;
                }
LAB_1427d486f:
                bVar16 = false;
                goto LAB_1427d47c0;
              }
              cVar5 = FUN_1427d1838(param_1,100);
              piVar4 = DAT_14c950c20;
              if (cVar5 != '\0') goto LAB_1427d486f;
              if ((DAT_14c86a9f8 == '\x01') && (*piVar2 != 2)) {
                if (*piVar2 == 1) {
                  DVar7 = FUN_140ad26c0();
                  DVar9 = GetCurrentThreadId();
                  if (DVar7 == DVar9) goto LAB_1427d4746;
                }
                LOCK();
                *piVar4 = *piVar4 + -1;
                UNLOCK();
              }
LAB_1427d4746:
              if (*(int *)(param_1 + 0x138) < 1) goto LAB_1427d47f6;
              FUN_140330200(local_80);
              if ((*(byte *)(param_1 + 0x18) & 1) != 0) goto LAB_1427d456d;
              *(undefined1 *)((longlong)pvVar10 + 0x8a) = 1;
            } while( true );
          }
          (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))();
          goto LAB_1427d489d;
        }
      }
LAB_1427d48a0:
    } while ((*(byte *)(param_1 + 0x18) & 1) == 0);
    if (local_68 != 0) {
      FUN_14033024a(local_80);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
LAB_1427d47f6:
  if (**(longlong **)(param_1 + 0x130) == 0) {
    cVar13 = '\x02';
    goto LAB_1427d48a0;
  }
  bVar16 = false;
  bVar15 = true;
LAB_1427d47e7:
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) goto LAB_1427d48a0;
  goto LAB_1427d4588;
}



// FUNCTION 1427d4914 FUN_1427d4914 body=189 status=ok
// SIG undefined FUN_1427d4914(void)

void FUN_1427d4914(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar2 = *(int *)(lVar3 + 0xc60);
  if (DAT_14c86a9f8 == '\x01') {
    if (iVar2 == 2) goto LAB_1427d4962;
    if (iVar2 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) {
        iVar2 = *(int *)(lVar3 + 0xc60);
        goto joined_r0x0001427d49ab;
      }
    }
  }
  else {
joined_r0x0001427d49ab:
    if (iVar2 != 4) goto LAB_1427d4962;
  }
  FUN_140033559(".\\Runtime/CoreUObject/Private/Serialization/AsyncLoading2.cpp",0x2257,
                L"Async loading can only be suspended from the main thread");
LAB_1427d4962:
  LOCK();
  piVar1 = (int *)(param_1 + 0x14);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if ((iVar2 == 0) && ((*(byte *)(param_1 + 0x19) & 1) != 0)) {
    FUN_1415277fe(param_1 + 0x470);
                    /* WARNING: Could not recover jumptable at 0x0001427d499c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x20))
              (*(longlong **)(param_1 + 0x28),0xffffffff,0);
    return;
  }
  return;
}



// FUNCTION 1427d49d2 FUN_1427d49d2 body=210 status=ok
// SIG undefined FUN_1427d49d2(void)

void FUN_1427d49d2(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar2 = *(int *)(lVar3 + 0xc60);
  if (DAT_14c86a9f8 == '\x01') {
    if (iVar2 == 2) goto LAB_1427d4a20;
    if (iVar2 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) {
        iVar2 = *(int *)(lVar3 + 0xc60);
        goto joined_r0x0001427d4a7a;
      }
    }
  }
  else {
joined_r0x0001427d4a7a:
    if (iVar2 != 4) goto LAB_1427d4a20;
  }
  FUN_140033559(".\\Runtime/CoreUObject/Private/Serialization/AsyncLoading2.cpp",0x226c,
                L"Async loading can only be resumed from the main thread");
LAB_1427d4a20:
  LOCK();
  piVar1 = (int *)(param_1 + 0x14);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 < 1) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/Serialization/AsyncLoading2.cpp",0x226e,
                  L"Trying to resume async loading when it\'s not suspended");
  }
  else if ((iVar2 == 1) && ((*(byte *)(param_1 + 0x19) & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001427d4a53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x20))
              (*(longlong **)(param_1 + 0x30),0xffffffff,0);
    return;
  }
  return;
}



// FUNCTION 1427d4aa4 FUN_1427d4aa4 body=599 status=ok
// SIG undefined FUN_1427d4aa4(void)

void FUN_1427d4aa4(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  LPCRITICAL_SECTION p_Var2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  undefined1 auStack_c8 [40];
  undefined4 local_a0;
  undefined8 *local_98;
  LPCRITICAL_SECTION local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  longlong *local_70;
  code *local_68;
  longlong **local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (DAT_14c872a72 == '\0') {
    plVar1 = (longlong *)(param_1 + -8);
    p_Var2 = (LPCRITICAL_SECTION)(param_1 + 0x418);
    EnterCriticalSection(p_Var2);
    plVar3 = (longlong *)(param_1 + 0x440);
    FUN_1427d3766(plVar1,plVar3);
    local_88 = *param_2;
    uStack_84 = param_2[1];
    iVar5 = param_2[2];
    uStack_7c = param_2[3];
    iVar4 = *(int *)(param_1 + 0x448);
    local_90 = p_Var2;
    iStack_80 = iVar5;
    if (iVar4 < iVar5) {
      *(int *)(param_1 + 0x448) = iVar5;
      if ((uint)(*(int *)(param_1 + 0x44c) - iVar4) < (uint)(iVar5 - iVar4)) {
        FUN_146272724(plVar3,iVar4);
      }
      FUN_144aff83a((longlong)iVar4 * 0x18 + *plVar3,iVar5 - iVar4);
    }
    else {
      if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar5);
      }
      if (iVar5 < iVar4) {
        *(int *)(param_1 + 0x448) = iVar5;
        FUN_1468880a8(plVar3);
      }
    }
    local_58 = 0;
    local_50 = 0;
    local_68 = (code *)&LAB_1427d8438;
    local_a0 = 0;
    local_98 = &local_58;
    local_78 = (longlong *)&local_88;
    local_70 = plVar3;
    local_60 = &local_78;
    FUN_1411ca36e(L"CollectUnreachableObjectsTask",iVar5,0x800);
    if (DAT_14c9489d8 == '\x01') {
      local_58 = 0;
      local_50 = 0;
      local_68 = FUN_1427d8480;
      local_a0 = 0;
      local_98 = &local_58;
      local_78 = plVar1;
      local_70 = (longlong *)&local_88;
      local_60 = &local_78;
      FUN_1411ca36e(L"VerifyUnreachableObjectsDebugTask",iStack_80,0x200);
    }
    if (DAT_14c9489f0 == '\x01') {
      cVar6 = (*(code *)PTR_FUN_14c75b118)();
      if (cVar6 == '\0') {
        local_78 = (longlong *)0x80034000c400000;
        local_58 = 0;
        local_50 = 0;
        local_68 = FUN_1427d768e;
        local_a0 = 0;
        local_98 = &local_58;
        local_60 = &local_78;
        FUN_1411ca36e(L"VerifyObjectLoadFlagsDebugTask",DAT_14c9647dc,0x200);
      }
    }
    p_Var2 = local_90;
    if (DAT_14c9489c0 == '\x01') {
      FUN_1427d3766(plVar1,plVar3);
    }
    FUN_1415277fe(param_1 + 0x470);
    LeaveCriticalSection(p_Var2);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427d4cfe FUN_1427d4cfe body=55 status=ok
// SIG undefined FUN_1427d4cfe(void)

void FUN_1427d4cfe(longlong param_1)

{
  FUN_146272514(param_1 + 0x2f8);
  FUN_1468875bc(param_1 + 0x2f8,*(int *)(param_1 + 0x300) - *(int *)(param_1 + 0x32c));
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



// FUNCTION 1427d4d36 FUN_1427d4d36 body=115 status=ok
// SIG undefined FUN_1427d4d36(void)

void FUN_1427d4d36(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x40);
  if (lVar3 != 0) {
    FUN_1401cb1ee(lVar3);
    FUN_1400020a8(lVar3);
  }
  lVar3 = *(longlong *)(param_1 + 0x38);
  if (lVar3 != 0) {
    FUN_1449db362(lVar3);
    FUN_1400020a8(lVar3);
  }
  plVar4 = *(longlong **)(param_1 + 0x18);
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
                    /* WARNING: Could not recover jumptable at 0x0001427d4da5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1427d4da9 FUN_1427d4da9 body=169 status=ok
// SIG undefined FUN_1427d4da9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427d4da9(void)

{
  _DAT_14c948a78 = 0;
  if (DAT_14c948a70 != 0) {
    FUN_1400020a8();
  }
  _DAT_14c948a38 = 0;
  if (DAT_14c948a3c != 0) {
    FUN_14472eb64(&DAT_14c948a30,0);
  }
  _DAT_14c948a60 = 0xffffffff;
  _DAT_14c948a58 = 0;
  if (0x80 < DAT_14c948a5c) {
    DAT_14c948a5c = 0x80;
    FUN_1446efbd8(&DAT_14c948a40,0);
  }
  if (DAT_14c948a50 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c948a30 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1427d4e52 FUN_1427d4e52 body=3279 status=ok
// SIG undefined FUN_1427d4e52(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427d4e52(longlong param_1,_struct_19 *param_2)

{
  byte *pbVar1;
  uint *puVar2;
  longlong *plVar3;
  _struct_19 _Var4;
  LPCRITICAL_SECTION p_Var5;
  int *piVar6;
  int *piVar7;
  byte bVar8;
  byte bVar9;
  LONG LVar10;
  int iVar11;
  LARGE_INTEGER LVar12;
  double dVar13;
  double dVar14;
  DWORD DVar15;
  DWORD *pDVar16;
  DWORD *pDVar17;
  char cVar18;
  DWORD DVar19;
  DWORD DVar20;
  LPVOID pvVar21;
  LPVOID pvVar22;
  longlong lVar23;
  ulonglong uVar24;
  undefined8 uVar25;
  uint *puVar26;
  uint *puVar27;
  undefined8 *puVar28;
  longlong lVar29;
  longlong lVar30;
  undefined4 uVar31;
  int iVar32;
  _struct_19 _Var33;
  longlong lVar34;
  longlong lVar35;
  DWORD *pDVar36;
  int iVar37;
  bool bVar38;
  undefined1 auStack_188 [32];
  DWORD *local_168;
  LARGE_INTEGER *local_160;
  longlong local_158;
  longlong local_150;
  undefined4 local_144;
  LPVOID local_140;
  LPVOID local_138;
  DWORD *local_130;
  DWORD local_128;
  LONG LStack_124;
  DWORD DStack_120;
  LONG LStack_11c;
  undefined1 local_109 [9];
  DWORD DStack_100;
  LONG LStack_fc;
  longlong local_f8;
  undefined1 local_f0 [16];
  byte *local_e0;
  undefined1 local_d1;
  undefined1 *local_d0;
  byte **local_c8;
  LARGE_INTEGER local_c0;
  undefined8 local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (*(int *)(param_1 + 0x210) == 0) goto LAB_1427d4f31;
  DVar19 = DAT_14c75ec34;
  local_158 = param_1;
  if (DAT_14c75ec34 == 0xffffffff) {
    DVar19 = TlsAlloc();
    DVar20 = 0xffffffff;
    LOCK();
    bVar38 = DAT_14c75ec34 != 0xffffffff;
    DVar15 = DVar19;
    if (bVar38) {
      DVar20 = DAT_14c75ec34;
      DVar15 = DAT_14c75ec34;
    }
    DAT_14c75ec34 = DVar15;
    UNLOCK();
    if (bVar38) {
      TlsFree(DVar19);
      DVar19 = DVar20;
    }
  }
  lVar35 = local_158;
  pvVar21 = TlsGetValue(DVar19);
  if (pvVar21 == (LPVOID)0x0) {
    pvVar21 = (LPVOID)FUN_14001cc68(0x60,0x10);
    FUN_141073f92(pvVar21);
    FUN_140fddf04(pvVar21);
    TlsSetValue(DVar19,pvVar21);
  }
  uVar31 = *(undefined4 *)((longlong)pvVar21 + 0x50);
  *(undefined4 *)((longlong)pvVar21 + 0x50) = 0x400000;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar32 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar32 != 2)) {
    if (iVar32 == 1) {
      DVar19 = FUN_140ad26c0();
      DVar20 = GetCurrentThreadId();
      if (DVar19 == DVar20) goto LAB_1427d5006;
    }
  }
  else {
LAB_1427d5006:
    if (0 < *(int *)(lVar35 + 0x14)) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/Serialization/AsyncLoading2.cpp",0x2663,
                    L"Cannot Flush Async Loading while async loading is suspended");
    }
    lVar35 = local_158;
    DVar19 = param_2[1].LowPart;
    if ((longlong)(int)DVar19 == 0) {
LAB_1427d50dc:
      lVar35 = local_158;
      local_150 = local_158 + -8;
      pvVar22 = TlsGetValue(DAT_14c948a28);
      if ((pvVar22 == (LPVOID)0x0) || (*(char *)((longlong)pvVar22 + 0x88) != '\x01')) {
        DVar19 = DAT_14c75ec34;
        local_144 = uVar31;
        local_138 = pvVar21;
        if (DAT_14c75ec34 == 0xffffffff) {
          DVar19 = TlsAlloc();
          DVar20 = 0xffffffff;
          LOCK();
          bVar38 = DAT_14c75ec34 != 0xffffffff;
          DVar15 = DVar19;
          if (bVar38) {
            DVar20 = DAT_14c75ec34;
            DVar15 = DAT_14c75ec34;
          }
          DAT_14c75ec34 = DVar15;
          UNLOCK();
          lVar35 = local_158;
          if (bVar38) {
            TlsFree(DVar19);
            lVar35 = local_158;
            DVar19 = DVar20;
          }
        }
        pvVar21 = TlsGetValue(DVar19);
        if (pvVar21 == (LPVOID)0x0) {
          pvVar21 = (LPVOID)FUN_14001cc68(0x60,0x10);
          FUN_141073f92(pvVar21);
          FUN_140fddf04(pvVar21);
          TlsSetValue(DVar19,pvVar21);
        }
        if (*(int *)((longlong)pvVar21 + 0x24) == 0) {
          FUN_1447f69b6(&DAT_14c868788);
        }
        QueryPerformanceCounter(&local_c0);
        local_f8 = 0;
        lVar23 = *(longlong *)(lVar35 + 0x450);
        iVar32 = *(int *)(lVar23 + 0x20);
        if (0 < iVar32) {
          if (param_2[1].LowPart == 0) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/Serialization/AsyncLoading2.cpp",0x268b,
                          L"Flushing async loading while creating, serializing or postloading an object is not permitted"
                         );
            lVar23 = *(longlong *)(lVar35 + 0x450);
            iVar32 = *(int *)(lVar23 + 0x20);
          }
          local_f8 = *(longlong *)
                      (*(longlong *)(*(longlong *)(lVar23 + 0x18) + (longlong)(iVar32 + -1) * 8) + 8
                      );
          iVar32 = *(int *)(lVar23 + 0x40);
          *(uint *)(lVar23 + 0x40) = iVar32 + 1U;
          if (*(uint *)(lVar23 + 0x44) < iVar32 + 1U) {
            FUN_1401cc13e((longlong *)(lVar23 + 0x38),iVar32);
          }
          lVar35 = local_158;
          *(longlong *)(*(longlong *)(lVar23 + 0x38) + (longlong)iVar32 * 8) = local_f8;
          lVar23 = *(longlong *)(local_f8 + 0x338);
          if (lVar23 != 0) {
            do {
              FUN_140166a5c(0x330,local_f8,lVar23);
              local_d0 = *(undefined1 **)(lVar35 + 0x450);
              local_c0.QuadPart = (LONGLONG)FUN_1427d83b4;
              local_168 = (DWORD *)(*(longlong *)(lVar23 + 0x298) + 0x470);
              local_160 = &local_c0;
              local_b8 = &local_d0;
              FUN_140166858(lVar23,local_d0,0x330,10);
              lVar23 = *(longlong *)(local_f8 + 0x338);
            } while (lVar23 != 0);
          }
          if (((*(char *)(*(longlong *)(lVar35 + 0x450) + 0x89) == '\x01') &&
              (lVar23 = *(longlong *)(local_f8 + 0x2c0), lVar23 != 0)) &&
             (1 < *(int *)(lVar23 + 0x10))) {
            local_c0.QuadPart = (LONGLONG)&local_f8;
            FUN_146888234(lVar23 + 8);
            *(int *)(lVar23 + 0x18) = *(int *)(lVar23 + 0x18) + -1;
            FUN_1427cd7b2(*(undefined8 *)(lVar35 + 0x450),lVar23);
            puVar28 = (undefined8 *)FUN_14001cc68(0x20,0x10);
            *puVar28 = 0;
            puVar28[1] = 0;
            puVar28[2] = 0;
            puVar28[3] = 0;
            *(undefined8 **)(local_f8 + 0x2c0) = puVar28;
            **(undefined8 **)(local_f8 + 0x2c0) = *(undefined8 *)(local_f8 + 0x2b8);
            lVar23 = *(longlong *)(local_f8 + 0x2c0);
            iVar32 = *(int *)(lVar23 + 0x10);
            *(uint *)(lVar23 + 0x10) = iVar32 + 1U;
            if (*(uint *)(lVar23 + 0x14) < iVar32 + 1U) {
              FUN_1401cc13e((longlong *)(lVar23 + 8),iVar32);
            }
            *(longlong *)(*(longlong *)(lVar23 + 8) + (longlong)iVar32 * 8) = local_f8;
            *(undefined4 *)(*(longlong *)(local_f8 + 0x2c0) + 0x18) = 1;
          }
        }
        if ((param_2[1].LowPart == 0) || (DAT_14c75ec38 != '\x01')) {
          local_140 = (LPVOID)0x0;
          lVar23 = local_150;
        }
        else {
          pvVar21 = (LPVOID)FUN_14001cc68(0x68,0x10);
          local_109._1_4_ = param_2->LowPart;
          local_109._5_4_ = param_2->HighPart;
          DStack_100 = param_2[1].LowPart;
          LStack_fc = param_2[1].HighPart;
          FUN_140de4f8c(pvVar21);
          *(longlong *)((longlong)pvVar21 + 0x58) = local_f8;
          lVar29 = *(longlong *)(lVar35 + 0x450);
          iVar32 = *(int *)(lVar29 + 0x30);
          *(uint *)(lVar29 + 0x30) = iVar32 + 1U;
          if (*(uint *)(lVar29 + 0x34) < iVar32 + 1U) {
            FUN_1417125f2((longlong *)(lVar29 + 0x28),iVar32);
          }
          lVar23 = local_150;
          *(LPVOID *)(*(longlong *)(lVar29 + 0x28) + (longlong)iVar32 * 8) = pvVar21;
          local_140 = pvVar21;
          if (*(longlong *)(lVar35 + 0x458) != 0) {
            LOCK();
            *(int *)((longlong)pvVar21 + 100) = *(int *)((longlong)pvVar21 + 100) + 1;
            UNLOCK();
            lVar29 = *(longlong *)(lVar35 + 0x458);
            puVar28 = *(undefined8 **)(lVar29 + 0x58);
            if (puVar28 == *(undefined8 **)(lVar29 + 0x60)) {
              *(undefined8 **)(lVar29 + 0x60) = *(undefined8 **)(lVar29 + 0x48);
              puVar28 = *(undefined8 **)(lVar29 + 0x58);
              if (puVar28 != *(undefined8 **)(lVar29 + 0x48)) goto LAB_1427d53d8;
              puVar28 = (undefined8 *)FUN_14001cc68(0x10,8);
              *puVar28 = 0;
              puVar28[1] = 0;
            }
            else {
LAB_1427d53d8:
              *(undefined8 *)(lVar29 + 0x58) = *puVar28;
              *puVar28 = 0;
            }
            puVar28[1] = pvVar21;
            **(undefined8 **)(lVar29 + 0x50) = puVar28;
            *(undefined8 **)(lVar29 + 0x50) = puVar28;
            FUN_1400ee9e6(lVar35 + 0x470);
          }
        }
        if (*(int *)(lVar35 + 0x210) != 0) {
          p_Var5 = (LPCRITICAL_SECTION)(lVar35 + 0x188);
          lVar29 = lVar35 + 0x170;
          pbVar1 = (byte *)(lVar35 + 0x48);
          iVar32 = 0;
          dVar13 = 0.0;
          do {
            local_109[0] = '\0';
            local_128 = param_2->LowPart;
            LStack_124 = param_2->HighPart;
            DStack_120 = param_2[1].LowPart;
            LStack_11c = param_2[1].HighPart;
            local_160 = (LARGE_INTEGER *)local_109;
            local_168 = &local_128;
            FUN_1427d1c02(lVar23,*(undefined8 *)(lVar35 + 0x450),0,0);
            DVar19 = param_2[1].LowPart;
            if ((longlong)(int)DVar19 != 0) {
              _Var33 = *param_2;
              EnterCriticalSection(p_Var5);
              lVar35 = local_158;
              _Var4 = (_struct_19)((longlong)_Var33 + (longlong)(int)DVar19 * 4);
              do {
                if (*(int *)(local_158 + 0x140) != *(int *)(local_158 + 0x16c)) {
                  lVar30 = *(longlong *)(local_158 + 0x178);
                  if (*(longlong *)(local_158 + 0x178) == 0) {
                    lVar30 = lVar29;
                  }
                  iVar37 = *(int *)(lVar30 + (ulonglong)
                                             (*(int *)(local_158 + 0x180) - 1U & *(uint *)_Var33) *
                                             4);
                  if (iVar37 != -1) {
                    do {
                      if (*(uint *)(*(longlong *)(local_158 + 0x138) + (longlong)iVar37 * 0xc) ==
                          *(uint *)_Var33) {
                        LeaveCriticalSection(p_Var5);
                        goto LAB_1427d5527;
                      }
                      iVar37 = *(int *)(*(longlong *)(local_158 + 0x138) + (longlong)iVar37 * 0xc +
                                       4);
                    } while (iVar37 != -1);
                  }
                }
                _Var33 = (_struct_19)((longlong)_Var33 + 4);
              } while (_Var33 != _Var4);
              LeaveCriticalSection(p_Var5);
              break;
            }
LAB_1427d5527:
            lVar35 = local_158;
            if (local_109[0] == '\0') {
              if (param_2[1].LowPart == 0) {
                EnterCriticalSection(p_Var5);
                iVar37 = *(int *)(lVar35 + 0x140);
                iVar11 = *(int *)(local_158 + 0x16c);
                LeaveCriticalSection(p_Var5);
                lVar35 = local_158;
                if (iVar37 == iVar11) break;
              }
              lVar35 = local_158;
              if ((dVar13 != 0.0) || (NAN(dVar13))) {
                QueryPerformanceCounter(&local_c0);
                if (((double)_DAT_14c75ec3c <
                     ((double)local_c0.QuadPart * DAT_14c83f420 + 16777216.0) - dVar13) &&
                   (iVar37 = iVar32 + 1, bVar38 = DAT_14c75ec40 <= iVar32, iVar32 = iVar37, bVar38))
                {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/Serialization/AsyncLoading2.cpp",
                                0x2707);
                }
              }
              else {
                QueryPerformanceCounter(&local_c0);
                dVar13 = (double)local_c0.QuadPart * DAT_14c83f420 + 16777216.0;
                iVar32 = 0;
                if (*(longlong *)(lVar35 + 0x458) != 0) {
                  *(undefined1 *)(*(longlong *)(lVar35 + 0x458) + 0x8a) = 0;
                }
              }
            }
            else {
              dVar13 = 0.0;
            }
            dVar14 = dVar13;
            if ((*(byte *)(lVar35 + 0x19) & 1) != 0) {
              uVar25 = FUN_141552594();
              FUN_14275a71e(uVar25,0);
              if (local_109[0] == '\0') {
                QueryPerformanceCounter(&local_c0);
                pDVar36 = (DWORD *)((double)local_c0.QuadPart * DAT_14c83f420 + 16777216.0 + 0.016);
                bVar9 = *pbVar1;
                pDVar17 = pDVar36;
                pDVar16 = local_130;
                while ((local_130 = pDVar17, (bVar9 & 1) == 0 &&
                       ((INFINITY <= (double)pDVar36 ||
                        (QueryPerformanceCounter(&local_c0), pDVar16 = local_130,
                        (double)local_c0.QuadPart * DAT_14c83f420 + 16777216.0 < (double)pDVar36))))
                      ) {
                  if ((bVar9 & 2) == 0) {
                    LOCK();
                    bVar8 = *pbVar1;
                    if (bVar9 == bVar8) {
                      *pbVar1 = 2;
                    }
                    UNLOCK();
                    if (bVar9 == bVar8) goto LAB_1427d571c;
                  }
                  else {
LAB_1427d571c:
                    local_b8 = (undefined1 **)&local_d1;
                    local_c0.QuadPart = (LONGLONG)&DAT_142743e10;
                    local_c8 = &local_e0;
                    local_d0 = &LAB_142743e12;
                    local_168 = local_130;
                    local_e0 = pbVar1;
                    FUN_1456d3e9c(local_f0,pbVar1,&local_d0,&local_c0);
                  }
                  bVar9 = *pbVar1;
                  pDVar17 = local_130;
                  pDVar16 = local_130;
                }
                local_130 = pDVar16;
                LOCK();
                *(byte *)(lVar35 + 0x48) = *(byte *)(lVar35 + 0x48) & 0xfe;
                UNLOCK();
                lVar23 = local_150;
                if ((*(longlong *)(lVar35 + 0x458) != 0) &&
                   (dVar14 = 0.0, (*(byte *)(*(longlong *)(lVar35 + 0x458) + 0x8a) & 1) == 0)) {
                  dVar14 = dVar13;
                }
              }
            }
            dVar13 = dVar14;
          } while (*(int *)(lVar35 + 0x210) != 0);
        }
        if (local_140 != (LPVOID)0x0) {
          FUN_141711b06();
          lVar23 = *(longlong *)(lVar35 + 0x450);
          piVar6 = (int *)(lVar23 + 0x30);
          *piVar6 = *piVar6 + -1;
          FUN_141712754(lVar23 + 0x28);
          FUN_1400ee9e6(lVar35 + 0x470);
        }
        pvVar21 = local_138;
        uVar31 = local_144;
        if (local_f8 != 0) {
          lVar35 = *(longlong *)(lVar35 + 0x450);
          piVar6 = (int *)(lVar35 + 0x40);
          *piVar6 = *piVar6 + -1;
          FUN_1417127e2(lVar35 + 0x38);
        }
      }
      else {
        DVar19 = param_2[1].LowPart;
        if (DVar19 != 0) {
          LVar12.s = *param_2;
          LVar10 = param_2[1].HighPart;
          local_140 = pvVar22;
          lVar23 = FUN_14001cc68(0x68,0x10);
          pvVar22 = local_140;
          lVar35 = local_158;
          local_b8 = (undefined1 **)CONCAT44(LVar10,DVar19);
          local_c0.s = LVar12.s;
          FUN_140de4f8c(lVar23);
          uVar24 = (ulonglong)*(uint *)((longlong)pvVar22 + 0x20);
          do {
            if ((int)uVar24 < 1) {
              lVar29 = 0;
              break;
            }
            lVar29 = uVar24 * 8;
            uVar24 = uVar24 - 1;
            lVar29 = *(longlong *)
                      (*(longlong *)(*(longlong *)((longlong)pvVar22 + 0x18) + -8 + lVar29) + 8);
          } while (lVar29 == 0);
          *(longlong *)(lVar23 + 0x58) = lVar29;
          lVar29 = *(longlong *)(lVar35 + 0x458);
          iVar32 = *(int *)(lVar29 + 0x30);
          *(uint *)(lVar29 + 0x30) = iVar32 + 1U;
          local_144 = uVar31;
          local_138 = pvVar21;
          if (*(uint *)(lVar29 + 0x34) < iVar32 + 1U) {
            FUN_1417125f2((longlong *)(lVar29 + 0x28),iVar32);
          }
          *(longlong *)(*(longlong *)(lVar29 + 0x28) + (longlong)iVar32 * 8) = lVar23;
          FUN_1427d1414(local_150,pvVar22,0);
          p_Var5 = (LPCRITICAL_SECTION)(lVar35 + 0x188);
          puVar27 = *(uint **)(lVar23 + 0x18);
          iVar32 = *(int *)(lVar23 + 0x20);
          EnterCriticalSection(p_Var5);
          lVar29 = lVar35;
          if ((longlong)iVar32 != 0) {
            puVar2 = (uint *)(lVar23 + 8);
            local_130 = (DWORD *)(lVar35 + 0x170);
            if (puVar27 == (uint *)0x0) {
              puVar27 = puVar2;
            }
            puVar26 = puVar27 + iVar32;
            lVar30 = 0;
            do {
LAB_1427d583e:
              if (*(int *)(lVar29 + 0x140) == *(int *)(lVar29 + 0x16c)) {
LAB_1427d588e:
                puVar27 = puVar27 + 1;
                if (puVar27 == puVar26) break;
                goto LAB_1427d583e;
              }
              pDVar36 = *(DWORD **)(lVar29 + 0x178);
              if (*(DWORD **)(lVar29 + 0x178) == (DWORD *)0x0) {
                pDVar36 = local_130;
              }
              DVar19 = pDVar36[*(int *)(lVar29 + 0x180) - 1U & *puVar27];
              if (DVar19 == 0xffffffff) goto LAB_1427d588e;
LAB_1427d5873:
              if (*(uint *)(*(longlong *)(lVar29 + 0x138) + (longlong)(int)DVar19 * 0xc) != *puVar27
                 ) goto code_r0x0001427d5880;
              LeaveCriticalSection(p_Var5);
              cVar18 = FUN_1427ced50(lVar35 + 0x4b8,local_140);
              lVar29 = local_150;
              if (cVar18 == '\0') {
                lVar34 = lVar30 + 1;
                iVar32 = *(int *)(lVar23 + 0x20);
                if (lVar30 == 100) {
                  if (iVar32 < 1) {
                    lVar34 = 0x65;
                  }
                  else {
                    lVar30 = 0;
                    do {
                      puVar27 = *(uint **)(lVar23 + 0x18);
                      if (*(uint **)(lVar23 + 0x18) == (uint *)0x0) {
                        puVar27 = puVar2;
                      }
                      FUN_14688613a(lVar29,puVar27[lVar30]);
                      lVar30 = lVar30 + 1;
                      iVar32 = *(int *)(lVar23 + 0x20);
                    } while (lVar30 < iVar32);
                  }
                }
              }
              else {
                iVar32 = *(int *)(lVar23 + 0x20);
                lVar34 = 0;
              }
              puVar27 = *(uint **)(lVar23 + 0x18);
              if (*(uint **)(lVar23 + 0x18) == (uint *)0x0) {
                puVar27 = puVar2;
              }
              EnterCriticalSection(p_Var5);
              puVar26 = puVar27 + iVar32;
              lVar29 = local_158;
              lVar30 = lVar34;
              if (iVar32 == 0) break;
            } while( true );
          }
          LeaveCriticalSection(p_Var5);
          lVar35 = *(longlong *)(lVar29 + 0x458);
          piVar6 = (int *)(lVar35 + 0x30);
          *piVar6 = *piVar6 + -1;
          FUN_141712754(lVar35 + 0x28);
          pvVar21 = local_138;
          uVar31 = local_144;
          if (lVar23 != 0) {
            if (*(longlong *)(lVar23 + 0x48) != 0) {
              FUN_1400020a8();
            }
            if (*(longlong *)(lVar23 + 0x18) != 0) {
              FUN_1400020a8();
            }
            FUN_1400020a8(lVar23);
          }
        }
      }
    }
    else {
      _Var33 = *param_2;
      p_Var5 = (LPCRITICAL_SECTION)(local_158 + 0x188);
      EnterCriticalSection(p_Var5);
      _Var4 = (_struct_19)((longlong)_Var33 + (longlong)(int)DVar19 * 4);
      piVar6 = (int *)(lVar35 + 0x140);
      piVar7 = (int *)(lVar35 + 0x16c);
      lVar23 = lVar35 + 0x170;
      do {
        if (*piVar6 != *piVar7) {
          lVar29 = *(longlong *)(lVar35 + 0x178);
          if (*(longlong *)(lVar35 + 0x178) == 0) {
            lVar29 = lVar23;
          }
          iVar32 = *(int *)(lVar29 + (ulonglong)(*(int *)(lVar35 + 0x180) - 1U & *(uint *)_Var33) *
                                     4);
          if (iVar32 != -1) {
            plVar3 = (longlong *)(lVar35 + 0x138);
            do {
              if (*(uint *)(*plVar3 + (longlong)iVar32 * 0xc) == *(uint *)_Var33) {
                LeaveCriticalSection(p_Var5);
                goto LAB_1427d50dc;
              }
              iVar32 = *(int *)(*plVar3 + (longlong)iVar32 * 0xc + 4);
              lVar35 = local_158;
            } while (iVar32 != -1);
          }
        }
        _Var33 = (_struct_19)((longlong)_Var33 + 4);
      } while (_Var33 != _Var4);
      LeaveCriticalSection(p_Var5);
    }
  }
  *(undefined4 *)((longlong)pvVar21 + 0x50) = uVar31;
LAB_1427d4f31:
  if ((local_b0 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x0001427d5880:
  DVar19 = *(DWORD *)(*(longlong *)(lVar29 + 0x138) + (longlong)(int)DVar19 * 0xc + 4);
  if (DVar19 == 0xffffffff) goto LAB_1427d588e;
  goto LAB_1427d5873;
}



// FUNCTION 1427d5b26 FUN_1427d5b26 body=619 status=ok
// SIG undefined FUN_1427d5b26(void)

undefined8 FUN_1427d5b26(longlong param_1,longlong param_2,undefined8 *param_3,double param_4)

{
  double dVar1;
  double dVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong unaff_R15;
  double dVar8;
  undefined1 auStack_108 [32];
  LARGE_INTEGER *local_e8;
  undefined1 *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  LARGE_INTEGER local_c8;
  undefined4 local_c0;
  undefined1 local_b1;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*(int *)(param_1 + 0x218) == 0) {
    uVar6 = 2;
  }
  else {
    if (0 < *(int *)(param_1 + 0x1c)) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/Serialization/AsyncLoading2.cpp",0x2758,
                    L"Cannot Flush Async Loading while async loading is suspended");
    }
    local_d0 = 0;
    if (*(int *)(param_2 + 0x30) == 0) {
      puVar7 = &local_d0;
      uVar5 = 0;
    }
    else {
      puVar7 = *(undefined8 **)
                (*(longlong *)(param_2 + 0x28) + (longlong)(*(int *)(param_2 + 0x30) + -1) * 8);
      uVar5 = *puVar7;
    }
    *puVar7 = 0;
    uVar6 = 2;
    if ((*(int *)(param_1 + 0x218) != 0) && (cVar3 = (*(code *)*param_3)(param_3[1]), cVar3 == '\0')
       ) {
      dVar2 = 0.0;
      dVar1 = param_4;
      local_d8 = uVar5;
      do {
        if ((0.0 < param_4) && (dVar1 <= 0.0)) {
          uVar6 = 0;
          uVar5 = local_d8;
          break;
        }
        unaff_R15 = CONCAT71((int7)(unaff_R15 >> 8),0.0 < param_4);
        QueryPerformanceCounter(&local_c8);
        dVar8 = (double)local_c8.QuadPart * DAT_14c83f420;
        local_b1 = 0;
        local_c8.QuadPart = 0;
        local_c0 = 0;
        local_e0 = &local_b1;
        local_e8 = &local_c8;
        FUN_1427d1c02(param_1,param_2,unaff_R15 & 0xffffffff,dVar1);
        uVar5 = local_d8;
        if (*(int *)(param_1 + 0x218) == 0) break;
        if ((*(byte *)(param_1 + 0x21) & 1) != 0) {
          lVar4 = FUN_141552594();
          if (dVar2 < *(double *)(lVar4 + 0x1c0)) {
            uVar5 = FUN_141552594();
            FUN_14275a71e(uVar5,0);
          }
          SwitchToThread();
        }
        QueryPerformanceCounter(&local_c8);
        uVar5 = local_d8;
        if (*(int *)(param_1 + 0x218) == 0) break;
        dVar8 = ((double)local_c8.QuadPart * DAT_14c83f420 + 16777216.0) - (dVar8 + 16777216.0);
        dVar2 = dVar2 + dVar8;
        dVar1 = dVar1 - dVar8;
        cVar3 = (*(code *)*param_3)(param_3[1]);
        uVar5 = local_d8;
      } while (cVar3 == '\0');
    }
    *puVar7 = uVar5;
  }
  if ((local_b0 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1427d5d92 FUN_1427d5d92 body=750 status=ok
// SIG undefined FUN_1427d5d92(void)

void FUN_1427d5d92(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 *local_50;
  int local_48;
  LARGE_INTEGER local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14009d848(param_1 + 0x18);
  uVar4 = FUN_1401cb356();
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  local_48 = 3;
  *local_50 = &PTR_LAB_149e02020;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_50[2] = lVar5;
  *local_50 = &PTR_FUN_149e68cc0;
  local_50[3] = param_1;
  local_50[4] = FUN_1427d6082;
  local_58 = 0;
  FUN_1405f67fc(uVar4,&local_40,&local_50,L"FAsyncLoadingFlushContext_OnAsyncLoadingCheck");
  *(LARGE_INTEGER *)(param_1 + 0x30) = local_40;
  local_40.QuadPart = 0;
  plVar2 = *(longlong **)(param_1 + 0x38);
  *(longlong **)(param_1 + 0x38) = local_38;
  local_38 = (longlong *)0x0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
    if (local_38 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_38 + 0x10))();
      }
    }
  }
  if (local_48 == 0) {
LAB_1427d5ed4:
    if (local_50 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
    goto LAB_1427d5ed4;
  }
  uVar4 = FUN_1401cb356();
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  local_48 = 3;
  *local_50 = &PTR_LAB_149e02020;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_50[2] = lVar5;
  *local_50 = &PTR_FUN_149e68cc0;
  local_50[3] = param_1;
  local_50[4] = &LAB_1427d616e;
  local_58 = 0x41200000;
  FUN_1405f67fc(uVar4,&local_40,&local_50,L"FAsyncLoadingFlushContext_OnAsyncLoadingWarn");
  *(LARGE_INTEGER *)(param_1 + 0x40) = local_40;
  local_40.QuadPart = 0;
  plVar2 = *(longlong **)(param_1 + 0x48);
  *(longlong **)(param_1 + 0x48) = local_38;
  local_38 = (longlong *)0x0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
    if (local_38 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_38 + 0x10))();
      }
    }
  }
  if (local_48 != 0) {
    if (local_50 == (undefined8 *)0x0) goto LAB_1427d5ffa;
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
  }
  if (local_50 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1427d5ffa:
  QueryPerformanceCounter(&local_40);
  *(double *)(param_1 + 0x28) = (double)local_40.QuadPart * DAT_14c83f420 + 16777216.0;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427d6082 FUN_1427d6082 body=235 status=ok
// SIG undefined FUN_1427d6082(void)

undefined4 FUN_1427d6082(longlong param_1)

{
  LARGE_INTEGER LVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = (**(code **)(*DAT_14c948aa0 + 0x98))();
  if ((char)uVar2 != '\0') goto LAB_1427d60b3;
  FUN_146886218(param_1);
  QueryPerformanceCounter(&local_38);
  LVar1 = (LARGE_INTEGER)((LARGE_INTEGER *)(param_1 + 0x18))->QuadPart;
  *(undefined8 *)(param_1 + 0x18) = 0;
  local_30 = *(int *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x20) = 0;
  local_38 = LVar1;
  if ((longlong *)LVar1.QuadPart == (longlong *)0x0 || local_30 == 0) {
    if (local_30 != 0) {
      if ((longlong *)LVar1.QuadPart == (longlong *)0x0) goto LAB_1427d60b3;
      goto LAB_1427d612c;
    }
  }
  else {
    (**(code **)(*(longlong *)LVar1 + 0x60))(LVar1.QuadPart);
LAB_1427d612c:
    (*(code *)**(undefined8 **)LVar1)(LVar1.QuadPart,0);
    FUN_1446efa72(&local_38,0,0,0x10);
    local_30 = 0;
  }
  if ((longlong *)local_38.QuadPart != (longlong *)0x0) {
    FUN_1400020a8(local_38.QuadPart);
  }
LAB_1427d60b3:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1427d6171 FUN_1427d6171 body=69 status=ok
// SIG undefined FUN_1427d6171(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427d6171(void)

{
  _DAT_14c948a88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427d61b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c948a90,1);
  return;
}



// FUNCTION 1427d61d1 FUN_1427d61d1 body=481 status=ok
// SIG undefined FUN_1427d61d1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427d61d1(void)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  byte bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_158 [40];
  undefined1 local_130 [12];
  undefined1 local_124 [260];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  bVar4 = FUN_14054d46e(&DAT_14c846b20,L"NoZenLoader");
  lVar7 = DAT_14c844ed8;
  plVar8 = DAT_14c948aa0;
  plVar3 = DAT_14c948aa0;
  if ((DAT_14c844ed8 != 0) &&
     (cVar5 = FUN_14602e73a(), plVar8 = DAT_14c948aa0, plVar3 = DAT_14c948aa0, cVar5 != '\0')) {
    lVar6 = FUN_14001cc68(0x5e8,0x10);
    FUN_1427d3cee(lVar6,lVar7,0);
    plVar2 = DAT_14c948aa0;
    plVar8 = (longlong *)(lVar6 + 8);
    if (lVar6 == 0) {
      plVar8 = (longlong *)0x0;
    }
    plVar3 = DAT_14c948aa0;
    if ((DAT_14c948aa0 != plVar8) && (plVar3 = plVar8, DAT_14c948aa0 != (longlong *)0x0)) {
      puVar1 = (undefined8 *)*DAT_14c948aa0;
      DAT_14c948aa0 = plVar8;
      (*(code *)*puVar1)(plVar2,1);
      plVar8 = DAT_14c948aa0;
      plVar3 = DAT_14c948aa0;
    }
  }
  DAT_14c948aa0 = plVar3;
  plVar3 = DAT_14c948aa0;
  if (plVar8 == (longlong *)0x0) {
    if ((bVar4 | DAT_14c75ec50) == 1) {
      lVar7 = FUN_14001cc68(0x480,0x10);
      FUN_1427c3c54(lVar7,0);
      plVar8 = (longlong *)(lVar7 + 8);
      if (lVar7 == 0) {
        plVar8 = (longlong *)0x0;
      }
    }
    else {
      if (DAT_14c844ed8 == 0) {
        FUN_1427662e8(local_124);
        DAT_14c948aa8 = 1;
      }
      lVar7 = DAT_14c844ed8;
      lVar6 = FUN_14001cc68(0x5e8,0x10);
      FUN_1427d3cee(lVar6,lVar7,0);
      plVar8 = (longlong *)(lVar6 + 8);
      if (lVar6 == 0) {
        plVar8 = (longlong *)0x0;
      }
      plVar3 = DAT_14c948aa0;
      if (DAT_14c948aa0 == plVar8) goto LAB_1427d632d;
    }
    plVar3 = plVar8;
    if (DAT_14c948aa0 != (longlong *)0x0) {
      puVar1 = (undefined8 *)*DAT_14c948aa0;
      plVar3 = DAT_14c948aa0;
      DAT_14c948aa0 = plVar8;
      (*(code *)*puVar1)(plVar3,1);
      plVar3 = DAT_14c948aa0;
    }
  }
LAB_1427d632d:
  DAT_14c948aa0 = plVar3;
  LOCK();
  _DAT_14c948a98 = _DAT_14c948a98 + 1;
  UNLOCK();
  FUN_146272394(&DAT_14c8687a0,local_130,&LAB_1427d77ba);
  FUN_1427d63b3();
  FUN_1427d642a(&DAT_14c948b08,DAT_14c948aa0);
  (**(code **)(*DAT_14c948aa0 + 8))();
  if ((local_20 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1427d63b3 FUN_1427d63b3 body=118 status=ok
// SIG undefined FUN_1427d63b3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427d63b3(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c948b18) {
    FUN_144b3d300(&DAT_14c948b18);
    if (DAT_14c948b18 == -1) {
      DAT_14c948b08 = 0;
      _DAT_14c948b10 = 0;
      FUN_14627246e(&DAT_14c948b08,0x4004);
      atexit(FUN_1427d77c1);
      _Init_thread_footer(&DAT_14c948b18);
      return;
    }
  }
  return;
}



// FUNCTION 1427d642a FUN_1427d642a body=216 status=ok
// SIG undefined FUN_1427d642a(void)

void FUN_1427d642a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  longlong lVar4;
  undefined2 *puVar5;
  longlong lVar6;
  
  lVar4 = *param_1;
  lVar1 = param_1[1];
  if ((longlong)(int)lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    lVar6 = 0;
    do {
      puVar5 = &DAT_149dfb77a;
      if (*(int *)(lVar4 + 0x18 + lVar6) != 0) {
        puVar5 = *(undefined2 **)(lVar4 + 0x10 + lVar6);
      }
      puVar3 = &DAT_149dfb77a;
      if (*(int *)(lVar4 + 8 + lVar6) != 0) {
        puVar3 = *(undefined2 **)(lVar4 + lVar6);
      }
      (**(code **)(*param_2 + 0xb0))
                (param_2,puVar3,puVar5,*(undefined4 *)(lVar4 + 0x20 + lVar6),
                 *(undefined4 *)(lVar4 + 0x24 + lVar6),*(undefined8 *)(lVar4 + 0x28 + lVar6),
                 *(undefined1 *)(lVar4 + 0x38 + lVar6),*(undefined8 *)(lVar4 + 0x30 + lVar6));
      lVar6 = lVar6 + 0x40;
    } while ((longlong)(int)lVar1 * 0x40 != lVar6);
    uVar2 = (undefined4)param_1[1];
    lVar4 = *param_1;
  }
  FUN_141712342(lVar4,uVar2);
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    return;
  }
  FUN_14627246e(param_1,0);
  return;
}



// FUNCTION 1427d6502 FUN_1427d6502 body=335 status=ok
// SIG undefined FUN_1427d6502(void)

undefined4 FUN_1427d6502(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined4 uVar5;
  undefined2 *puVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((DAT_14c75ec51 == '\0') && (cVar4 = (*(code *)PTR_FUN_14c758760)(), cVar4 == '\0')) {
    FUN_1400021e4(param_1,&local_30);
    puVar6 = local_30;
    if (local_28 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    FUN_140033559(".\\Runtime/CoreUObject/Private/Serialization/AsyncPackageLoader.cpp",0x28e,
                  L"Requesting async load of \"%s\" when async loading is not allowed (after shutdown). Please fix higher level code."
                  ,puVar6);
    if (local_30 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  plVar2 = DAT_14c948aa0;
  local_68 = *param_2;
  local_60 = param_2[1];
  param_2[1] = 0;
  local_58 = param_2[2];
  param_2[2] = 0;
  uStack_50 = *(undefined4 *)(param_2 + 3);
  uStack_4c = *(undefined4 *)((longlong)param_2 + 0x1c);
  uStack_48 = *(undefined4 *)(param_2 + 4);
  local_44 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_40 = *(undefined4 *)(param_2 + 5);
  uStack_3c = *(undefined4 *)((longlong)param_2 + 0x2c);
  uStack_38 = *(undefined4 *)(param_2 + 6);
  uVar5 = (**(code **)(*plVar2 + 0x28))(plVar2,param_1);
  lVar1 = param_2[2];
  if (lVar1 != 0) {
    FUN_1401cb1ee(lVar1);
    FUN_1400020a8(lVar1);
  }
  plVar2 = (longlong *)param_2[1];
  if (plVar2 == (longlong *)0x0) goto LAB_1427d65d7;
  if ((int)plVar2[1] == 0) {
LAB_1427d6639:
    if (*plVar2 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar3 = (undefined8 *)*plVar2;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,0);
      FUN_1446efa72(plVar2,0,0,0x10);
      *(undefined4 *)(plVar2 + 1) = 0;
      goto LAB_1427d6639;
    }
  }
  FUN_1400020a8(plVar2);
LAB_1427d65d7:
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1427d6652 FUN_1427d6652 body=221 status=ok
// SIG undefined FUN_1427d6652(void)

longlong * FUN_1427d6652(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
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
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0;
  local_48 = *(undefined4 *)param_2;
  uStack_44 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_40 = *(undefined4 *)(param_2 + 1);
  uStack_3c = *(undefined4 *)((longlong)param_2 + 0xc);
  cVar1 = FUN_140b1a3de(&local_48,param_1);
  if (cVar1 == '\0') {
    local_38 = 0;
    uStack_30 = 0;
    local_58 = *(undefined4 *)param_2;
    uStack_54 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_50 = *(undefined4 *)(param_2 + 1);
    uStack_4c = *(undefined4 *)((longlong)param_2 + 0xc);
    cVar1 = FUN_14475e408(&local_58,0);
    if (cVar1 != '\0') {
      local_68 = (undefined4)local_38;
      uStack_64 = local_38._4_4_;
      uStack_60 = uStack_30;
      uStack_5c = uStack_2c;
      FUN_140b1a3de(&local_68,param_1);
    }
  }
  if (*param_1 == 0) {
    local_78 = *(undefined4 *)param_2;
    uStack_74 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_70 = *(undefined4 *)(param_2 + 1);
    uStack_6c = *(undefined4 *)((longlong)param_2 + 0xc);
    cVar1 = FUN_1414176ea(&local_78,param_1);
    if (cVar1 == '\0') {
      local_38 = *param_2;
      uStack_30 = *(undefined4 *)(param_2 + 1);
      uStack_2c = *(undefined4 *)((longlong)param_2 + 0xc);
      FUN_1427b94de(param_1,&local_38,&local_19);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427d6730 FUN_1427d6730 body=251 status=ok
// SIG undefined FUN_1427d6730(void)

undefined4
FUN_1427d6730(undefined8 *param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  int local_58;
  undefined1 local_4c [12];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_60 = *param_1;
  local_58 = *(int *)(param_1 + 1) + -1;
  if (*(int *)(param_1 + 1) == 0) {
    local_58 = 0;
  }
  FUN_1427d6652(local_4c);
  local_70 = 0;
  local_68 = 0;
  FUN_141712e6e(&local_70,param_2);
  local_80 = 0;
  local_88 = 0;
  local_98 = param_5;
  local_90 = param_3;
  uVar2 = FUN_140b1a772(local_4c,0,&local_70,param_4);
  if ((int)param_2[1] != 0) {
    puVar1 = (undefined8 *)*param_2;
    if (puVar1 == (undefined8 *)0x0) goto LAB_1427d67fa;
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_2,0,0,0x10);
    *(undefined4 *)(param_2 + 1) = 0;
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
LAB_1427d67fa:
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427d682c FUN_1427d682c body=88 status=ok
// SIG undefined FUN_1427d682c(void)

void FUN_1427d682c(void)

{
  char cVar1;
  
  cVar1 = (**(code **)(*DAT_14c948aa0 + 0x80))();
  if (cVar1 != '\0') {
    FUN_140033559(".\\Runtime/CoreUObject/Private/Serialization/AsyncPackageLoader.cpp",0x2d0,
                  L"Cannot Cancel Async Loading while async loading is suspended.");
  }
  (**(code **)(*DAT_14c948aa0 + 0x48))();
  if (DAT_14c872bd8 != '\0') {
    return;
  }
  FUN_1427e390c(0,1);
  return;
}



// FUNCTION 1427d6884 FUN_1427d6884 body=116 status=ok
// SIG undefined FUN_1427d6884(void)

void FUN_1427d6884(void)

{
  longlong *plVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*DAT_14c948aa0 + 0xb8))();
  if (DAT_14c948aa0 == (longlong *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    local_18 = 0;
    local_10 = 0;
    (**(code **)(*DAT_14c948aa0 + 0x60))();
    plVar1 = DAT_14c948aa0;
  }
  (**(code **)(*plVar1 + 0x18))();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427d68f9 FUN_1427d68f9 body=69 status=ok
// SIG undefined FUN_1427d68f9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427d68f9(void)

{
  _DAT_14c948ac0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427d693b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c948ac8,1);
  return;
}



// FUNCTION 1427d693e FUN_1427d693e body=69 status=ok
// SIG undefined FUN_1427d693e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427d693e(void)

{
  _DAT_14c948ad0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427d6980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c948ad8,1);
  return;
}



// FUNCTION 1427d6983 FUN_1427d6983 body=69 status=ok
// SIG undefined FUN_1427d6983(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427d6983(void)

{
  _DAT_14c948ae0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427d69c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c948ae8,1);
  return;
}



// FUNCTION 1427d69c8 FUN_1427d69c8 body=155 status=ok
// SIG undefined FUN_1427d69c8(void)

char FUN_1427d69c8(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  LPVOID pvVar1;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined1 *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  pvVar1 = TlsGetValue(DAT_14c948a28);
  local_50 = &local_31;
  local_31 = 0;
  local_58 = &local_48;
  local_48 = 0;
  local_40 = 0;
  FUN_1427d1c02(param_1 + -8,pvVar1,param_2,param_4);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return (*(int *)(param_1 + 0x210) == 0) * '\x02';
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427d6a64 FUN_1427d6a64 body=478 status=ok
// SIG undefined FUN_1427d6a64(void)

void FUN_1427d6a64(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  uint *puVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  uVar13 = *(uint *)(param_2 + 0xb);
  if ((int)uVar13 < 0) {
    lVar10 = 0;
  }
  else {
    if ((int)uVar13 < DAT_14c9647dc) {
      plVar7 = (longlong *)
               ((ulonglong)((uVar13 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8));
    }
    else {
      plVar7 = (longlong *)0x0;
    }
    lVar10 = *plVar7;
  }
  if (DAT_14c9489d8 == '\x01') {
    FUN_146886530(param_1,param_2);
  }
  iVar2 = (int)param_2[5];
  if (iVar2 == 0) {
    uVar14 = 1;
    iVar3 = 0;
    iVar11 = 0;
    uVar15 = 0;
  }
  else {
    puVar8 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar8 = (uint *)(param_2 + 2);
    }
    uVar13 = *puVar8;
    if (uVar13 == 0) {
      iVar3 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar3 = iVar2 + -1;
      }
      uVar15 = 0;
      uVar14 = (ulonglong)(uint)(iVar3 >> 5);
      if (iVar3 >> 5 < 1) {
        uVar14 = uVar15;
      }
      iVar11 = 0;
      do {
        if (uVar14 == uVar15) goto LAB_1427d6c05;
        iVar11 = iVar11 + 0x20;
        uVar13 = puVar8[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar13 == 0);
    }
    else {
      iVar11 = 0;
      uVar15 = 0;
    }
    uVar14 = (ulonglong)(-uVar13 & uVar13);
    uVar1 = uVar14 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar3 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar3) {
      iVar3 = iVar2;
    }
  }
  if (iVar3 < iVar2) {
    uVar13 = 0xffffffff;
    do {
      FUN_1400b4ad0(param_1 + 0xa8,*(undefined4 *)(*param_2 + 8 + (longlong)iVar3 * 0x18));
      uVar13 = ~(uint)uVar14 & uVar13;
      puVar8 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar8 = (uint *)(param_2 + 2);
      }
      iVar2 = (int)param_2[5];
      iVar3 = (int)uVar15;
      lVar12 = (longlong)iVar3;
      uVar4 = puVar8[lVar12] & uVar13;
      if (uVar4 == 0) {
        iVar5 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar5 = iVar2 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar6 = iVar5;
        if (iVar5 < iVar3) {
          iVar6 = iVar3;
        }
        if (iVar5 <= iVar3) break;
        lVar9 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar4 = puVar8[lVar12 + lVar9 + 1];
          if (uVar4 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar6 - lVar12 == lVar9) goto LAB_1427d6c05;
        }
        uVar15 = (ulonglong)(iVar3 + (int)lVar9 + 1);
        uVar13 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar4 & uVar4);
      uVar1 = uVar14 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar3 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar3 < iVar2);
  }
LAB_1427d6c05:
  FUN_1468869ea(param_2);
  *(undefined8 *)(lVar10 + 0x30) = 0;
  return;
}



// FUNCTION 1427d6c42 FUN_1427d6c42 body=116 status=ok
// SIG undefined FUN_1427d6c42(void)

void FUN_1427d6c42(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x78) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x78) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x78 + 4) = uVar5;
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



// FUNCTION 1427d6cb6 FUN_1427d6cb6 body=842 status=ok
// SIG undefined FUN_1427d6cb6(void)

void FUN_1427d6cb6(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined2 *local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined2 *local_80;
  undefined2 *local_78;
  int local_70;
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
    lVar7 = param_1 + 0xe0;
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      lVar7 = *(longlong *)(param_1 + 0xe8);
    }
    iVar10 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0xf0) - 1U & *(uint *)(param_2 + 0xc))
                              * 4);
    if (iVar10 != -1) {
      do {
        lVar7 = *(longlong *)(param_1 + 0xa8) + (longlong)iVar10 * 0x1c;
        if (*(uint *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar10 * 0x1c) ==
            *(uint *)(param_2 + 0xc)) {
          if ((lVar7 != -4 && lVar7 != 0) && (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)))
          {
            lVar9 = param_1 + 0x40;
            if (*(longlong *)(param_1 + 0x48) != 0) {
              lVar9 = *(longlong *)(param_1 + 0x48);
            }
            iVar10 = *(int *)(lVar9 + (ulonglong)
                                      (*(int *)(param_1 + 0x50) - 1U & *(uint *)(lVar7 + 8)) * 4);
            if (iVar10 != -1) {
              lVar9 = CONCAT44(*(undefined4 *)(lVar7 + 4),*(uint *)(lVar7 + 8));
              goto LAB_1427d6da2;
            }
          }
          break;
        }
        iVar10 = *(int *)(lVar7 + 0x14);
      } while (iVar10 != -1);
    }
  }
  goto LAB_1427d6dc4;
  while (iVar10 = *(int *)(lVar6 + 0x70), iVar10 != -1) {
LAB_1427d6da2:
    lVar6 = *(longlong *)(param_1 + 8) + (longlong)iVar10 * 0x78;
    if (*(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar10 * 0x78) == lVar9) {
      if (lVar6 != 0) {
        lVar6 = FUN_146886aa0();
        if (lVar6 == 0) {
          uVar1 = *(undefined4 *)(lVar7 + 0xc);
          uVar2 = *(undefined4 *)(lVar7 + 0x10);
          FUN_146885ed2(&local_58,lVar9);
          local_80 = local_58;
          if (local_50 == 0) {
            local_80 = &DAT_149dfb77a;
          }
          uVar3 = *(uint *)(param_2 + 0xc);
          if ((int)uVar3 < DAT_14c9647dc) {
            lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
          }
          else {
            lVar8 = 0;
          }
          uVar4 = *(undefined4 *)(lVar8 + 8);
          uVar5 = *(undefined4 *)(param_2 + 8);
          FUN_144750a86(param_2,&local_68,0,0);
          puVar12 = local_68;
          if (local_60 == 0) {
            puVar12 = &DAT_149dfb77a;
          }
          local_98 = local_80;
          local_a8 = uVar5;
          local_a0 = uVar4;
          local_90 = CONCAT44(uVar1,uVar2);
          FUN_140033559(".\\Runtime/CoreUObject/Private/Serialization/AsyncLoading2.cpp",0x61f,
                        L"FGlobalImportStore::VerifyObjectForRemoval: The loaded public export object \'%s\' with flags (ObjectFlags=%x, InternalObjectFlags=%x) and id %s:0x%llX is missing in GlobalImportStore. Reason unknown. Double delete? Bug or hash collision?"
                        ,puVar12);
          if (local_68 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (local_58 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        }
        if (lVar6 != param_2) {
          lVar8 = 0;
          FUN_144750a86(lVar6,&local_58,0,0);
          puVar12 = &DAT_149dfb77a;
          if (local_50 != 0) {
            puVar12 = local_58;
          }
          uVar1 = *(undefined4 *)(lVar7 + 0xc);
          uVar2 = *(undefined4 *)(lVar7 + 0x10);
          FUN_146885ed2(&local_68,lVar9);
          puVar13 = &DAT_149dfb77a;
          if (local_60 != 0) {
            puVar13 = local_68;
          }
          uVar3 = *(uint *)(param_2 + 0xc);
          if ((int)uVar3 < DAT_14c9647dc) {
            lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
          }
          uVar4 = *(undefined4 *)(lVar8 + 8);
          uVar5 = *(undefined4 *)(param_2 + 8);
          FUN_144750a86(param_2,&local_78,0,0);
          puVar11 = local_78;
          if (local_70 == 0) {
            puVar11 = &DAT_149dfb77a;
          }
          local_a8 = uVar5;
          local_a0 = uVar4;
          local_98 = puVar13;
          local_90 = CONCAT44(uVar1,uVar2);
          local_88 = puVar12;
          FUN_140033559(".\\Runtime/CoreUObject/Private/Serialization/AsyncLoading2.cpp",0x629,
                        L"FGlobalImportStore::VerifyObjectForRemoval: The loaded public export object \'%s\' with flags (ObjectFlags=%x, InternalObjectFlags=%x) and id %s:0x%llX is not matching the object \'%s\' in GlobalImportStore. Reason unknown. Overwritten after it was added? Bug or hash collision?"
                        ,puVar11);
          if (local_78 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (local_68 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (local_58 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        }
      }
      break;
    }
  }
LAB_1427d6dc4:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1427d7002 FUN_1427d7002 body=88 status=ok
// SIG undefined FUN_1427d7002(void)

longlong FUN_1427d7002(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar1 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x48);
    }
    iVar3 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x50) - 1U & (uint)param_2) * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = *(longlong *)(param_1 + 8) + (longlong)iVar3 * 0x78;
        if (*(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar3 * 0x78) == param_2)
        goto LAB_1427d704e;
        iVar3 = *(int *)(lVar1 + 0x70);
      } while (iVar3 != -1);
    }
  }
  lVar1 = 0;
LAB_1427d704e:
  lVar2 = lVar1 + 8;
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 1427d705a FUN_1427d705a body=160 status=ok
// SIG undefined FUN_1427d705a(void)

undefined8 FUN_1427d705a(longlong *param_1,longlong param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 +
                    (ulonglong)
                    ((int)param_1[9] - 1U & (int)param_2 + (int)((ulonglong)param_2 >> 0x20) * 0x17)
                    * 4);
    if (iVar4 != -1) {
      while (plVar3 = (longlong *)(*param_1 + (longlong)iVar4 * 0x18), *plVar3 != param_2) {
        iVar4 = (int)plVar3[2];
        if (iVar4 == -1) {
          return 0;
        }
      }
      if (plVar3 == (longlong *)0x0) {
        return 0;
      }
      if ((uint *)(plVar3 + 1) == (uint *)0x0) {
        return 0;
      }
      uVar1 = *(uint *)(plVar3 + 1);
      if ((int)uVar1 < DAT_14c9647dc) {
        puVar2 = (undefined8 *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      }
      else {
        puVar2 = (undefined8 *)0x0;
      }
      return *puVar2;
    }
  }
  return 0;
}



// FUNCTION 1427d70fa FUN_1427d70fa body=229 status=ok
// SIG undefined FUN_1427d70fa(void)

void FUN_1427d70fa(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  
  iVar6 = *(int *)(param_2 + 0x28);
  uVar7 = 1;
  if (iVar6 == 0) {
    iVar5 = 0;
    iVar8 = 0;
    iVar6 = 0;
  }
  else {
    puVar4 = *(uint **)(param_2 + 0x20);
    if (*(uint **)(param_2 + 0x20) == (uint *)0x0) {
      puVar4 = (uint *)(param_2 + 0x10);
    }
    uVar3 = *puVar4;
    if (uVar3 == 0) {
      iVar5 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar5 = iVar6 + -1;
      }
      uVar10 = 0;
      uVar2 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar2 = uVar10;
      }
      iVar8 = (int)uVar2 + 1;
      iVar5 = (int)uVar2 * 0x20 + 0x20;
      iVar9 = 0;
      do {
        if (uVar2 == uVar10) goto LAB_1427d719b;
        iVar9 = iVar9 + 0x20;
        uVar3 = puVar4[uVar10 + 1];
        uVar10 = uVar10 + 1;
      } while (uVar3 == 0);
      iVar8 = (int)uVar10;
      iVar5 = iVar9;
    }
    else {
      iVar5 = 0;
      iVar8 = 0;
    }
    uVar7 = -uVar3 & uVar3;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar9 = (iVar5 - ((uint)lVar1 ^ 0x3f)) + 0x3e;
    if (iVar9 < iVar6) {
      iVar6 = iVar9;
    }
  }
LAB_1427d719b:
  *param_1 = param_2;
  *(int *)(param_1 + 1) = iVar8;
  *(uint *)((longlong)param_1 + 0xc) = uVar7;
  param_1[2] = param_2 + 0x10;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(int *)((longlong)param_1 + 0x1c) = iVar6;
  *(int *)(param_1 + 4) = iVar5;
  param_1[5] = param_2;
  param_1[6] = param_2;
  *(undefined2 *)(param_1 + 7) = 0;
  return;
}



// FUNCTION 1427d7232 FUN_1427d7232 body=1000 status=ok
// SIG undefined FUN_1427d7232(void)

undefined8 FUN_1427d7232(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  undefined4 *puVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  char cVar9;
  ulonglong uVar10;
  void *_Dst;
  undefined8 *puVar11;
  undefined1 uVar12;
  longlong lVar13;
  ulonglong uVar14;
  short sVar15;
  undefined1 auStack_1b8 [40];
  ulonglong local_190;
  ulonglong local_188;
  undefined8 local_180;
  undefined4 local_178;
  ulonglong local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar4 = param_1[0x14];
  bVar2 = *(byte *)(param_1 + 0x1c);
  local_170 = 0xffffffffffffffff;
  if (*(int *)(param_1[0x17] + 0x90) == 0) {
    FUN_14607a792(param_1,(longlong)*(int *)(param_3 + 8),param_2 + 1,&local_170);
    uVar3 = *(uint *)((longlong)param_2 + 0x14);
    uVar12 = 0;
  }
  else {
    local_168 = CONCAT44(local_168._4_4_,0xffffffff);
    puVar5 = (ulonglong *)param_1[1];
    puVar1 = (undefined4 *)*puVar5 + 1;
    if ((undefined4 *)puVar5[1] < puVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_168,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_168);
      }
    }
    else {
      local_168 = CONCAT44(local_168._4_4_,*(undefined4 *)*puVar5);
      *puVar5 = (ulonglong)puVar1;
    }
    lVar6 = *(longlong *)(param_1[0x17] + 0x88);
    lVar13 = (longlong)(int)local_168 * 0x20;
    uVar3 = *(uint *)(lVar6 + 0x18 + lVar13);
    *(uint *)((longlong)param_2 + 0x14) = uVar3;
    uVar14 = *(ulonglong *)(lVar6 + lVar13);
    if (0x7ffffffffffffffe < uVar14) {
      uVar14 = 0x7fffffffffffffff;
    }
    *(char *)((longlong)param_2 + 0xd) = (char)uVar14;
    *(char *)((longlong)param_2 + 0xe) = (char)(uVar14 >> 8);
    *(char *)((longlong)param_2 + 0xf) = (char)(uVar14 >> 0x10);
    *(char *)(param_2 + 2) = (char)(uVar14 >> 0x18);
    *(char *)((longlong)param_2 + 0x11) = (char)(uVar14 >> 0x20);
    uVar7 = *(undefined8 *)(lVar6 + 0x10 + lVar13);
    *(char *)(param_2 + 1) = (char)uVar7;
    *(char *)((longlong)param_2 + 9) = (char)((ulonglong)uVar7 >> 8);
    *(char *)((longlong)param_2 + 10) = (char)((ulonglong)uVar7 >> 0x10);
    *(char *)((longlong)param_2 + 0xb) = (char)((ulonglong)uVar7 >> 0x18);
    *(char *)((longlong)param_2 + 0xc) = (char)((ulonglong)uVar7 >> 0x20);
    local_170 = *(ulonglong *)(lVar6 + 8 + lVar13);
    uVar12 = *(undefined1 *)(lVar6 + 0x1c + lVar13);
  }
  *(uint *)((longlong)param_2 + 0x14) = uVar3 | 0x80040000;
  if ((uVar3 & 1) == 0) {
    if ((uVar3 & 0x20) == 0) {
      uVar14 = (ulonglong)*(uint5 *)(param_2 + 1);
      if (uVar14 != 0) {
        uVar10 = *(longlong *)param_1[1] - ((longlong *)param_1[1])[2];
        if (0x7ffffffffffffffe < uVar10) {
          uVar10 = 0x7fffffffffffffff;
        }
        *(char *)((longlong)param_2 + 0xd) = (char)uVar10;
        *(char *)((longlong)param_2 + 0xe) = (char)(uVar10 >> 8);
        *(char *)((longlong)param_2 + 0xf) = (char)(uVar10 >> 0x10);
        *(char *)(param_2 + 2) = (char)(uVar10 >> 0x18);
        *(char *)((longlong)param_2 + 0x11) = (char)(uVar10 >> 0x20);
        param_2[3] = *(undefined8 *)(lVar4 + 0x28);
        *(ushort *)(param_2 + 4) = (ushort)bVar2 << 8;
        *(undefined2 *)((longlong)param_2 + 0x22) = 0x100;
        _Dst = (void *)FUN_14001fdce(*param_2,uVar14,0);
        *param_2 = _Dst;
        if ((*(byte *)((longlong)param_1 + 0x29) & 2) == 0) {
          plVar8 = (longlong *)param_1[1];
          memcpy(_Dst,(void *)*plVar8,uVar14);
          *plVar8 = *plVar8 + uVar14;
        }
      }
    }
  }
  else if ((uVar3 >> 0xc & 1) == 0) {
    sVar15 = (ushort)bVar2 << 8;
    param_2[3] = *(undefined8 *)(lVar4 + 0x28);
    *(short *)(param_2 + 4) = sVar15;
    *(undefined1 *)((longlong)param_2 + 0x22) = uVar12;
    *(byte *)((longlong)param_2 + 0x23) = (uVar3 >> 0xb & 1) == 0 ^ 3;
    if ((uVar3 >> 0xe & 1) != 0) {
      local_168 = *(undefined8 *)(lVar4 + 0x28);
      local_160 = CONCAT22(0x300,sVar15);
      cVar9 = FUN_1402df388(*(undefined8 *)param_1[0x12]);
      if (cVar9 != '\0') {
        *(undefined4 *)(param_2 + 4) = local_160;
        param_2[3] = local_168;
        *(uint *)((longlong)param_2 + 0x14) =
             *(uint *)((longlong)param_2 + 0x14) & 0xffffb7ff | 0x800;
        uVar14 = 0x7fffffffffffffff;
        if (local_170 < 0x7fffffffffffffff) {
          uVar14 = local_170;
        }
        *(char *)((longlong)param_2 + 0xd) = (char)uVar14;
        *(char *)((longlong)param_2 + 0xe) = (char)(uVar14 >> 8);
        *(char *)((longlong)param_2 + 0xf) = (char)(uVar14 >> 0x10);
        *(char *)(param_2 + 2) = (char)(uVar14 >> 0x18);
        *(char *)((longlong)param_2 + 0x11) = (char)(uVar14 >> 0x20);
      }
    }
  }
  else {
    param_2[3] = *(undefined8 *)(lVar4 + 0x28);
    *(ushort *)(param_2 + 4) = (ushort)bVar2 << 8;
    *(undefined2 *)((longlong)param_2 + 0x22) = 0x400;
    if (*(char *)(param_3 + 0xd) == '\x01') {
      local_188 = (ulonglong)*(uint5 *)(param_2 + 1);
      local_190 = 0xffffffffffffffff;
      if ((ulonglong)*(uint5 *)((longlong)param_2 + 0xd) != 0xffffffffff) {
        local_190 = (ulonglong)*(uint5 *)((longlong)param_2 + 0xd);
      }
      local_180 = 0;
      local_178 = 0;
      FUN_1467e8d0a(*(undefined8 *)param_1[0x12],&local_168,param_2 + 3);
      if ((int)local_168 == 0) {
        local_168 = CONCAT44(local_168._4_4_,DAT_14c845ecc);
        memcpy((void *)((longlong)&local_168 + 4),&DAT_14c845ed0,0x100);
        puVar11 = (undefined8 *)FUN_14001cc68(0x18,0x10);
        *puVar11 = 0;
        puVar11[1] = local_60;
        puVar11[2] = uStack_58;
        *param_2 = puVar11;
        *(byte *)((longlong)param_2 + 0x17) = *(byte *)((longlong)param_2 + 0x17) | 0x40;
      }
      else {
        FUN_14031515e(param_2);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427d761c FUN_1427d761c body=114 status=ok
// SIG undefined FUN_1427d761c(void)

void FUN_1427d761c(longlong *param_1,int param_2)

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



// FUNCTION 1427d768e FUN_1427d768e body=298 status=ok
// SIG undefined FUN_1427d768e(void)

void FUN_1427d768e(undefined8 param_1,uint *param_2)

{
  longlong lVar1;
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
  lVar1 = *(longlong *)
           (*(longlong *)(DAT_14c9647c8 + (ulonglong)(*param_2 >> 0x10) * 8) +
           (ulonglong)(*param_2 & 0xffff) * 0x18);
  if (((lVar1 != 0) && ((*(uint *)(lVar1 + 8) >> 0x13 & 1) != 0)) && (DAT_14c951858 == 0)) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1468c5283;
    local_40 = FUN_142809da0;
    local_48 = L"Engine";
    local_50 = 0x400000000;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427d77c1 FUN_1427d77c1 body=49 status=ok
// SIG undefined FUN_1427d77c1(void)

void FUN_1427d77c1(void)

{
  FUN_141712342(DAT_14c948b08,DAT_14c948b10);
  if (DAT_14c948b08 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1427d77f2 FUN_1427d77f2 body=29 status=ok
// SIG undefined FUN_1427d77f2(void)

undefined8 FUN_1427d77f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1427d7824 FUN_1427d7824 body=93 status=ok
// SIG undefined FUN_1427d7824(void)

void FUN_1427d7824(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e68810;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1427d7882 FUN_1427d7882 body=93 status=ok
// SIG undefined FUN_1427d7882(void)

void FUN_1427d7882(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e68810;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1427d78e0 FUN_1427d78e0 body=126 status=ok
// SIG undefined FUN_1427d78e0(void)

void FUN_1427d78e0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149e68810;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001427d794f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1427d7970 FUN_1427d7970 body=28 status=ok
// SIG undefined FUN_1427d7970(void)

undefined8 FUN_1427d7970(longlong param_1)

{
  FUN_1400ee9e6(*(longlong *)(param_1 + 0x18) + 0x478);
  return 1;
}



// FUNCTION 1427d798c FUN_1427d798c body=114 status=ok
// SIG undefined FUN_1427d798c(void)

void FUN_1427d798c(longlong *param_1,int param_2)

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



// FUNCTION 1427d79fe FUN_1427d79fe body=1194 status=ok
// SIG undefined FUN_1427d79fe(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1427d79fe(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  undefined1 auStack_1168 [32];
  longlong **local_1148;
  undefined1 local_1140 [4];
  undefined1 local_113c [4];
  longlong *local_1138 [2];
  ulonglong local_1128 [2];
  longlong *local_1118 [2];
  longlong *local_1108 [2];
  longlong *local_10f8 [2];
  longlong *local_10e8 [2];
  longlong *local_10d8 [2];
  ulonglong local_10c8;
  char *local_10c0;
  undefined4 local_10b8;
  undefined1 local_10b4;
  longlong local_1090 [2];
  longlong local_1080 [2];
  wchar_t *local_1070;
  undefined4 local_1068;
  undefined4 uStack_1064;
  undefined2 *local_1060;
  undefined2 *local_1058;
  ulonglong *local_1050;
  char local_1048;
  undefined2 local_1040 [2048];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1168;
  FUN_1400021e4(param_1,local_1080);
  FUN_1400021e4(param_1 + 8,local_1090);
  local_1060 = local_1040;
  local_1048 = '\0';
  local_1050 = &local_40;
  local_1058 = local_1060;
  FUN_1427b67ca(param_1,&local_1060);
  if ((int)((ulonglong)((longlong)local_1058 - (longlong)local_1060) >> 1) == 0) {
    local_10c0 = "LoadErrors";
    local_10b8 = 10;
    local_10b4 = 0;
    uVar4 = FUN_14001a6c0(&local_10c0,1);
    local_1128[0] = (ulonglong)uVar4;
    FUN_14276766e(&local_10c0);
    FUN_140009b9a(local_10e8,local_1080);
    FUN_140009b9a(local_10f8,local_1090);
    local_1070 = L"AsyncLoading_SkippedPackage_NoExplanation";
    local_1068 = 0x29;
    FUN_1446e940c(local_1138,&local_1070);
    local_1070 = L"Core";
    local_1068 = 4;
    FUN_1446e940c(&local_10c8,&local_1070);
    local_1070 = 
    L"While trying to load package {MissingPackage}, a dependent package {DependentPackage} was not available. No additional explanation was available."
    ;
    local_1068 = 0x91;
    FUN_140208c1e(local_1118,&local_10c8,local_1138,&local_1070);
    FUN_14023409e(local_1108,local_1118,1);
    FUN_1468876ec(local_10d8,local_1108,local_10f8,local_10e8);
    FUN_1427679d4(&local_10c0,&local_1070,local_10d8);
    plVar3 = (longlong *)CONCAT44(uStack_1064,local_1068);
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
    if (local_10d8[0] != (longlong *)0x0) {
      (**(code **)(*local_10d8[0] + 0x10))();
    }
    if (local_1118[0] != (longlong *)0x0) {
      (**(code **)(*local_1118[0] + 0x10))();
    }
    if (local_10f8[0] != (longlong *)0x0) {
      (**(code **)(*local_10f8[0] + 0x10))();
    }
    if (local_10e8[0] != (longlong *)0x0) {
      (**(code **)(*local_10e8[0] + 0x10))();
    }
  }
  else {
    local_10c0 = "LoadErrors";
    local_10b8 = 10;
    local_10b4 = 0;
    uVar4 = FUN_14001a6c0(&local_10c0,1);
    local_10c8 = (ulonglong)uVar4;
    FUN_14276766e(&local_10c0);
    *local_1058 = 0;
    FUN_140056680(local_10f8,local_1060);
    FUN_140233b1a(local_10e8,local_10f8);
    FUN_140009b9a(local_1108,local_1080);
    FUN_140009b9a(local_1118,local_1090);
    local_1070 = L"AsyncLoading_SkippedPackage_Explanation";
    local_1068 = 0x27;
    FUN_1446e940c(local_113c,&local_1070);
    local_1070 = L"Core";
    local_1068 = 4;
    FUN_1446e940c(local_1140,&local_1070);
    local_1070 = 
    L"While trying to load package {MissingPackage}, a dependent package {DependentPackage} was not available. Additional explanatory information follows:\n{Explanation}"
    ;
    local_1068 = 0xa2;
    FUN_140208c1e(local_1138,local_1140,local_113c,&local_1070);
    FUN_14023409e(local_1128,local_1138,1);
    local_1148 = local_10e8;
    FUN_146887608(local_10d8,local_1128,local_1118,local_1108);
    FUN_1427679d4(&local_10c0,&local_1070,local_10d8);
    plVar3 = (longlong *)CONCAT44(uStack_1064,local_1068);
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
    if (local_10d8[0] != (longlong *)0x0) {
      (**(code **)(*local_10d8[0] + 0x10))();
    }
    if (local_1138[0] != (longlong *)0x0) {
      (**(code **)(*local_1138[0] + 0x10))();
    }
    if (local_1118[0] != (longlong *)0x0) {
      (**(code **)(*local_1118[0] + 0x10))();
    }
    if (local_1108[0] != (longlong *)0x0) {
      (**(code **)(*local_1108[0] + 0x10))();
    }
    if (local_10e8[0] != (longlong *)0x0) {
      (**(code **)(*local_10e8[0] + 0x10))();
    }
    if (local_10f8[0] != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_1427678c0(&local_10c0);
  if (local_1048 == '\x01') {
    FUN_1400020a8(local_1060);
  }
  if (local_1090[0] != 0) {
    FUN_1400020a8();
  }
  if (local_1080[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_1168) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427d7eb4 FUN_1427d7eb4 body=12 status=ok
// SIG undefined FUN_1427d7eb4(void)

void FUN_1427d7eb4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001427d7ebd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1427d7ec0 FUN_1427d7ec0 body=29 status=ok
// SIG undefined FUN_1427d7ec0(void)

undefined8 FUN_1427d7ec0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1427d7ede FUN_1427d7ede body=190 status=ok
// SIG undefined FUN_1427d7ede(void)

void FUN_1427d7ede(longlong *param_1,int *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong unaff_RSI;
  
  iVar4 = *param_2;
  if (iVar4 == 0) {
    unaff_RSI = *(longlong *)(param_2 + 0x42);
    param_2[0x42] = 0;
    param_2[0x43] = 0;
    *param_2 = 1;
    *(undefined2 *)(param_2 + 1) = 0;
    lVar6 = *param_1;
  }
  else {
    lVar6 = *param_1;
    *(undefined1 *)(lVar6 + 0x368) = 1;
  }
  LOCK();
  piVar2 = (int *)(*(longlong *)(lVar6 + 0x298) + 0x138);
  *piVar2 = *piVar2 + -1;
  iVar3 = *piVar2;
  UNLOCK();
  plVar5 = *(longlong **)(lVar6 + 200);
  lVar6 = *(longlong *)(lVar6 + 0x298);
  LOCK();
  plVar1 = plVar5 + 7;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)*plVar1 == 0) {
    FUN_1400ee8c2(*(undefined8 *)(*plVar5 + 8),0);
  }
  if (iVar3 == 0) {
    FUN_1400ee9e6(lVar6 + 0x478);
  }
  if (unaff_RSI != 0 && iVar4 == 0) {
    LOCK();
    piVar2 = (int *)(unaff_RSI + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      FUN_144716208(unaff_RSI);
      FUN_1400020a8(unaff_RSI);
      return;
    }
  }
  return;
}



// FUNCTION 1427d7fc6 FUN_1427d7fc6 body=29 status=ok
// SIG undefined FUN_1427d7fc6(void)

undefined8 FUN_1427d7fc6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1427d7fe4 FUN_1427d7fe4 body=498 status=ok
// SIG undefined FUN_1427d7fe4(void)

longlong * FUN_1427d7fe4(longlong *param_1,longlong *param_2,undefined8 *param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined ***pppuVar10;
  undefined1 auStack_e8 [32];
  code *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined ***local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined **local_a8;
  longlong lStack_a0;
  undefined8 *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined8 uStack_80;
  undefined ***local_78;
  undefined8 uStack_70;
  undefined **local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  puVar4 = (undefined8 *)*param_4;
  *param_4 = 0;
  lStack_a0 = *param_2;
  LOCK();
  piVar2 = (int *)(*(longlong *)(lStack_a0 + 200) + 0xb8);
  *piVar2 = *piVar2 + 1;
  UNLOCK();
  LOCK();
  piVar2 = (int *)(*(longlong *)(lStack_a0 + 0x298) + 0x138);
  *piVar2 = *piVar2 + 1;
  UNLOCK();
  plVar9 = (longlong *)param_2[1];
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
    UNLOCK();
  }
  local_b8 = (undefined ***)0x0;
  local_a8 = &PTR_LAB_149e68c30;
  local_c8 = FUN_1427d81d8;
  uVar3 = *(undefined4 *)(lStack_a0 + 0xdc);
  piVar2 = *(int **)(*plVar9 + 0x38);
  local_98 = puVar4;
  lVar8 = FUN_14005d3a6(piVar2 + 2,piVar2);
  LOCK();
  *piVar2 = *piVar2 + 1;
  UNLOCK();
  *(undefined4 *)(lVar8 + 0x18) = *(undefined4 *)(param_3 + 1);
  *(undefined8 *)(lVar8 + 0x10) = *param_3;
  *(undefined8 *)(lVar8 + 0x20) = 0;
  *(undefined8 *)(lVar8 + 0x28) = 0xffffffffffffffff;
  *(undefined8 *)(lVar8 + 0x30) = 0;
  *(undefined8 *)(lVar8 + 0x38) = 0;
  *(undefined4 *)(lVar8 + 0x40) = uVar3;
  LOCK();
  *(int *)(lVar8 + 0xb0) = *(int *)(lVar8 + 0xb0) + 1;
  UNLOCK();
  plVar1 = plVar9 + 2;
  if (plVar9[1] == 0) {
    plVar9 = plVar9 + 1;
    *plVar1 = lVar8;
  }
  else {
    *(longlong *)*plVar1 = lVar8;
    plVar9 = plVar1;
  }
  *plVar9 = lVar8;
  local_88 = *(longlong *)(lVar8 + 0x70);
  uStack_80 = *(undefined8 *)(lVar8 + 0x78);
  local_78 = *(undefined ****)(lVar8 + 0x80);
  uStack_70 = *(undefined8 *)(lVar8 + 0x88);
  local_68 = *(undefined ***)(lVar8 + 0x90);
  uStack_60 = *(undefined8 *)(lVar8 + 0x98);
  local_58 = *(undefined8 *)(lVar8 + 0xa0);
  uStack_50 = *(undefined8 *)(lVar8 + 0xa8);
  uVar7 = uStack_50;
  uVar6 = uStack_70;
  uVar5 = uStack_80;
  *(undefined8 **)(lVar8 + 0xa0) = local_98;
  *(ulonglong *)(lVar8 + 0xa8) = CONCAT44(uStack_8c,uStack_90);
  *(undefined ***)(lVar8 + 0x90) = local_a8;
  *(longlong *)(lVar8 + 0x98) = lStack_a0;
  *(undefined ****)(lVar8 + 0x80) = local_b8;
  *(ulonglong *)(lVar8 + 0x88) = CONCAT44(uStack_ac,uStack_b0);
  *(code **)(lVar8 + 0x70) = local_c8;
  *(ulonglong *)(lVar8 + 0x78) = CONCAT44(uStack_bc,uStack_c0);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_98 = (undefined8 *)local_58;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_a8 = local_68;
  lStack_a0 = uStack_60;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  uStack_c0 = (undefined4)uStack_80;
  uStack_bc = uStack_80._4_4_;
  *param_1 = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 0xb0) = *(int *)(lVar8 + 0xb0) + 1;
    UNLOCK();
  }
  local_c8 = (code *)local_88;
  local_b8 = local_78;
  uStack_80 = uVar5;
  uStack_70 = uVar6;
  uStack_50 = uVar7;
  if (local_88 != 0) {
    pppuVar10 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar10 = &local_a8;
    }
    (*(code *)(*pppuVar10)[2])();
  }
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar4 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427d81d8 FUN_1427d81d8 body=303 status=ok
// SIG undefined FUN_1427d81d8(void)

void FUN_1427d81d8(longlong *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong unaff_RSI;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar3 = *param_2;
  if (iVar3 == 0) {
    unaff_RSI = *(longlong *)(param_2 + 0x42);
    param_2[0x42] = 0;
    param_2[0x43] = 0;
    *param_2 = 1;
    *(undefined2 *)(param_2 + 1) = 0;
  }
  lVar4 = *param_1;
  LOCK();
  *(int *)(param_1[1] + 8) = *(int *)(param_1[1] + 8) + 1;
  UNLOCK();
  local_29 = 1;
  FUN_1447439e4();
  LOCK();
  piVar1 = (int *)(*(longlong *)(lVar4 + 0x298) + 0x138);
  *piVar1 = *piVar1 + -1;
  iVar2 = *piVar1;
  UNLOCK();
  lVar5 = *(longlong *)(lVar4 + 200);
  lVar4 = *(longlong *)(lVar4 + 0x298);
  LOCK();
  piVar1 = (int *)(lVar5 + 0xb8);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    FUN_1400ee8c2(*(undefined8 *)(*(longlong *)(lVar5 + 0x80) + 8),0,lVar5 + 0x80);
  }
  if (iVar2 == 0) {
    FUN_1400ee9e6(lVar4 + 0x478);
  }
  if (unaff_RSI != 0 && iVar3 == 0) {
    LOCK();
    piVar1 = (int *)(unaff_RSI + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      FUN_144716208(unaff_RSI);
      FUN_1400020a8(unaff_RSI);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427d8344 FUN_1427d8344 body=68 status=ok
// SIG undefined FUN_1427d8344(void)

undefined8 * FUN_1427d8344(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_LAB_149e68c30;
  puVar2 = (undefined8 *)param_1[2];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1427d83b4 FUN_1427d83b4 body=131 status=ok
// SIG undefined FUN_1427d83b4(void)

void FUN_1427d83b4(longlong *param_1,longlong *param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *param_2;
  LOCK();
  *(undefined1 *)(lVar4 + 0x2f4) = 0xb;
  UNLOCK();
  lVar5 = *(longlong *)(lVar4 + 0x298);
  iVar3 = *(int *)(lVar5 + 0x48);
  *(uint *)(lVar5 + 0x48) = iVar3 + 1U;
  if (*(uint *)(lVar5 + 0x4c) < iVar3 + 1U) {
    FUN_1401cc13e((longlong *)(lVar5 + 0x40),iVar3);
  }
  *(longlong *)(*(longlong *)(lVar5 + 0x40) + (longlong)iVar3 * 8) = lVar4;
  if (*(char *)(*param_1 + 0x88) == '\x01') {
    lVar4 = *(longlong *)(lVar4 + 0x298);
    LOCK();
    pbVar1 = (byte *)(lVar4 + 0x50);
    bVar2 = *pbVar1;
    *pbVar1 = 1;
    UNLOCK();
    if ((bVar2 & 3) == 2) {
      FUN_1447458da(lVar4 + 0x50,0xffffffff);
      return;
    }
  }
  return;
}



// FUNCTION 1427d8480 FUN_1427d8480 body=177 status=ok
// SIG undefined FUN_1427d8480(void)

void FUN_1427d8480(longlong *param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  lVar1 = *param_1;
  lVar2 = **(longlong **)(*(longlong *)param_1[1] + (longlong)*param_2 * 8);
  if (((*(longlong *)(lVar2 + 0x20) == 0) && ((*(byte *)(lVar2 + 0x28) & 4) != 0)) &&
     (*(int *)(lVar1 + 0x2b8) != *(int *)(lVar1 + 0x2e4))) {
    lVar3 = lVar1 + 0x2e8;
    if (*(longlong *)(lVar1 + 0x2f0) != 0) {
      lVar3 = *(longlong *)(lVar1 + 0x2f0);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(lVar1 + 0x2f8) - 1U & (uint)*(longlong *)(lVar2 + 0x30)) * 4)
    ;
    if (iVar4 != -1) {
      do {
        lVar3 = *(longlong *)(lVar1 + 0x2b0) + (longlong)iVar4 * 0x78;
        if (*(longlong *)(*(longlong *)(lVar1 + 0x2b0) + (longlong)iVar4 * 0x78) ==
            *(longlong *)(lVar2 + 0x30)) {
          if (lVar3 != 0) {
            FUN_146886530(lVar1 + 0x2a8,lVar3 + 8);
          }
          break;
        }
        iVar4 = *(int *)(lVar3 + 0x70);
      } while (iVar4 != -1);
    }
  }
  FUN_1427d6cb6(lVar1 + 0x2a8,lVar2);
  return;
}



// FUNCTION 1427d8532 FUN_1427d8532 body=20 status=ok
// SIG undefined FUN_1427d8532(void)

undefined8 FUN_1427d8532(longlong param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x18))(param_2);
  return 1;
}



// FUNCTION 1427d8546 FUN_1427d8546 body=795 status=ok
// SIG undefined FUN_1427d8546(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427d8546(void)

{
  uint uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  char *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  _DAT_14c948910 = 0;
  _DAT_14c948918 = 0;
  _DAT_14c9488f0 = 0;
  uRam000000014c9488f8 = 0;
  _DAT_14c94891c = 0xffffffff00000080;
  _DAT_14c948924 = 0;
  DAT_14c948930 = 0;
  _DAT_14c948938 = 0;
  atexit(FUN_1427cd35c);
  DAT_14c948940 = 0;
  uRam000000014c948948 = 0;
  atexit((_func_5014 *)&LAB_1427cd38b);
  _DAT_14c948970 = 0;
  _DAT_14c948978 = 0;
  _DAT_14c948950 = 0;
  uRam000000014c948958 = 0;
  _DAT_14c94897c = 0xffffffff00000080;
  _DAT_14c948984 = 0;
  DAT_14c948990 = 0;
  _DAT_14c948998 = 0;
  atexit(FUN_1427cd39c);
  DAT_14c9489a0 = 0;
  uRam000000014c9489a8 = 0;
  atexit((_func_5014 *)&LAB_1427cd3cb);
  local_48 = 0;
  FUN_14153156c(&DAT_14c9489b0,L"s.RemoveUnreachableObjectsOnGT",&DAT_14c9489c0,
                L"Remove unreachable objects from GlobalImportStore on the GT from the GC callback NotifyUnreachableObjects (slow)."
               );
  atexit(FUN_1427cd3dc);
  local_48 = 0;
  FUN_14153156c(&DAT_14c9489c8,L"s.VerifyUnreachableObjects",&DAT_14c9489d8,
                L"Run GlobalImportStore verifications for unreachable objects from the GC callback NotifyUnreachableObjects (slow)."
               );
  atexit(FUN_1427cd421);
  local_48 = 0;
  FUN_14153156c(&DAT_14c9489e0,L"s.VerifyObjectLoadFlags",&DAT_14c9489f0,
                L"Run AsyncFlags verifications for all objects when finished loading from the GC callback NotifyUnreachableObjects (slow)."
               );
  atexit(FUN_1427cd466);
  local_48 = 0;
  FUN_14153156c(&DAT_14c9489f8,L"s.OnlyProcessRequiredPackagesWhenSyncLoading",&DAT_14c75ec38,
                L"When sync loading a package process only that package and its imports");
  atexit(FUN_1427cd4ab);
  local_48 = 0;
  FUN_1415c789c(&DAT_14c948a08,L"s.StallDetectorTimeout",&DAT_14c75ec3c,
                L"Time in seconds after which we consider the loader stalled if no progress is being made"
               );
  atexit(FUN_1427cd4f0);
  local_48 = 0;
  FUN_141471170(&DAT_14c948a18,L"s.StallDetectorIdleLoops",&DAT_14c75ec40,
                L"The minimum amount of idle loops before considering the loader stalled if no progress is being made"
               );
  atexit(FUN_1427cd535);
  local_48 = 0;
  FUN_14153156c(&DAT_14c948a88,L"s.UseOldLoaderAsFallback",&DAT_14c75ec50,
                L"When active, the old loader will be used as the fallback instead of zenloader");
  atexit(FUN_1427d6171);
  DAT_14c948aa0 = 0;
  atexit((_func_5014 *)&LAB_1427d61b6);
  DAT_14c948aac = 0;
  local_40 = "PrestreamPackage";
  local_38 = 0x10;
  local_34 = 0;
  uVar1 = FUN_14001a6c0(&local_40,1);
  DAT_14c948b38 = (ulonglong)uVar1;
  local_48 = 0;
  FUN_141471170(&DAT_14c948ac0,L"s.WarnIfTimeLimitExceeded",&DAT_14c948b4c,
                L"Enables log warning if time limit for time-sliced package streaming has been exceeded."
               );
  atexit(FUN_1427d68f9);
  local_48 = 0;
  FUN_1415c789c(&DAT_14c948ad0,L"s.TimeLimitExceededMultiplier",&DAT_14c75ec54,
                L"Multiplier for time limit exceeded warning time threshold.");
  atexit(FUN_1427d693e);
  local_48 = 0;
  FUN_1415c789c(&DAT_14c948ae0,L"s.TimeLimitExceededMinTime",&DAT_14c75ec58,
                L"Minimum time the time limit exceeded warning will be triggered by.");
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    atexit(FUN_1427d6983);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
}



// FUNCTION 1427d8864 FUN_1427d8864 body=15 status=ok
// SIG undefined FUN_1427d8864(void)

ulonglong FUN_1427d8864(longlong param_1)

{
  return (ulonglong)*(uint5 *)(param_1 + 8);
}



// FUNCTION 1427d8874 FUN_1427d8874 body=50 status=ok
// SIG undefined FUN_1427d8874(void)

void FUN_1427d8874(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)((longlong)param_1 + 0x11) = 0xff;
  *(undefined4 *)((longlong)param_1 + 0xd) = 0xffffffff;
  param_1[3] = DAT_14c845dbc;
  *(undefined4 *)(param_1 + 4) = DAT_14c845dc4;
  FUN_1404d7984();
  return;
}



// FUNCTION 1427d88a6 FUN_1427d88a6 body=37 status=ok
// SIG undefined FUN_1427d88a6(void)

void FUN_1427d88a6(longlong param_1)

{
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_1400ea36e(param_1,param_1);
  *(byte *)(param_1 + 0x16) = *(byte *)(param_1 + 0x16) & 0xfb;
  return;
}



// FUNCTION 1427d88cc FUN_1427d88cc body=8 status=ok
// SIG undefined FUN_1427d88cc(void)

byte FUN_1427d88cc(longlong param_1)

{
  return (*(byte *)(param_1 + 0x14) & 2) >> 1;
}



// FUNCTION 1427d88d4 FUN_1427d88d4 body=27 status=ok
// SIG undefined FUN_1427d88d4(void)

undefined8 FUN_1427d88d4(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0x18) ^ DAT_14c845dbc;
  return CONCAT71((int7)(uVar1 >> 8),*(int *)(param_1 + 0x20) != DAT_14c845dc4 || uVar1 != 0);
}



// FUNCTION 1427d88f0 FUN_1427d88f0 body=8 status=ok
// SIG undefined FUN_1427d88f0(void)

bool FUN_1427d88f0(longlong *param_1)

{
  return *param_1 != 0;
}



// FUNCTION 1427d88f8 FUN_1427d88f8 body=269 status=ok
// SIG undefined FUN_1427d88f8(void)

undefined4 FUN_1427d88f8(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_88 [32];
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_38;
  longlong *local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar5 = 0xffffffffffffffff;
  if ((ulonglong)*(uint5 *)(param_1 + 0xd) != 0xffffffffff) {
    uVar5 = (ulonglong)*(uint5 *)(param_1 + 0xd);
  }
  uVar6 = (ulonglong)*(uint5 *)(param_1 + 8);
  if ((uVar6 == 0) ||
     (*(int *)(param_1 + 0x20) == DAT_14c845dc4 && *(longlong *)(param_1 + 0x18) == DAT_14c845dbc))
  {
    uVar3 = 0;
  }
  else {
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_caseD_4_149e69b90;
    local_68[0] = FUN_1427da114;
    local_40 = param_1;
    local_38 = uVar6;
    local_30 = param_2;
    uVar3 = FUN_14688894a(param_1 + 0x18,uVar5,uVar6,local_68);
    if (local_68[0] != (code *)0x0) {
      pppuVar4 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar4 = &local_48;
      }
      (*(code *)(*pppuVar4)[2])();
    }
  }
  lVar2 = *param_2;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      FUN_144716208(lVar2);
      FUN_1400020a8(lVar2);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427d8a06 FUN_1427d8a06 body=76 status=ok
// SIG undefined FUN_1427d8a06(void)

undefined8 FUN_1427d8a06(undefined8 *param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  
  param_2 = param_2 * param_3;
  *(char *)(param_1 + 1) = (char)param_2;
  *(char *)((longlong)param_1 + 9) = (char)((ulonglong)param_2 >> 8);
  *(char *)((longlong)param_1 + 10) = (char)((ulonglong)param_2 >> 0x10);
  *(char *)((longlong)param_1 + 0xb) = (char)((ulonglong)param_2 >> 0x18);
  *(char *)((longlong)param_1 + 0xc) = (char)((ulonglong)param_2 >> 0x20);
  uVar1 = FUN_14001fdce(*param_1,param_2,0);
  *param_1 = uVar1;
  if ((*(byte *)((longlong)param_1 + 0x17) & 0x40) != 0) {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 1427d8a52 FUN_1427d8a52 body=19 status=ok
// SIG undefined FUN_1427d8a52(void)

void FUN_1427d8a52(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x13) = 0;
  if ((*(byte *)(param_1 + 0x14) & 8) == 0) {
    return;
  }
  FUN_1400ea36e(param_1,param_1);
  return;
}



// FUNCTION 1427d8a65 FUN_1427d8a65 body=69 status=ok
// SIG undefined FUN_1427d8a65(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427d8a65(void)

{
  _DAT_14c948b50 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427d8aa7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c948b58,1);
  return;
}



// FUNCTION 1427d8aaa FUN_1427d8aaa body=159 status=ok
// SIG undefined FUN_1427d8aaa(void)

void FUN_1427d8aaa(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  uint param_5)

{
  if (param_4 != 0 && (char)((param_5 & 0x20) >> 5) == '\0') {
    if ((param_5 & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001427d8af1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x170))(param_2,param_3,param_4);
      return;
    }
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    FUN_1416a07d6(param_2,param_3,param_4,DAT_14c892f44,DAT_14c892f44,0,0,0);
  }
  return;
}



// FUNCTION 1427d8b4c FUN_1427d8b4c body=30 status=ok
// SIG undefined FUN_1427d8b4c(void)

void FUN_1427d8b4c(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001427d8b67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 1427d8b6a FUN_1427d8b6a body=16 status=ok
// SIG undefined FUN_1427d8b6a(void)

void FUN_1427d8b6a(undefined8 *param_1,undefined4 param_2)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = param_2;
  param_1[2] = 0;
  return;
}



// FUNCTION 1427d8b7a FUN_1427d8b7a body=265 status=ok
// SIG undefined FUN_1427d8b7a(void)

longlong FUN_1427d8b7a(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar7 = 0xffffffffffffffff;
  if ((ulonglong)*(uint5 *)(param_2 + 0xd) != 0xffffffffff) {
    uVar7 = (ulonglong)*(uint5 *)(param_2 + 0xd);
  }
  uVar8 = (ulonglong)*(uint5 *)(param_2 + 8);
  if (param_4 <= *(uint5 *)(param_2 + 8)) {
    uVar8 = param_4;
  }
  lVar6 = param_1 + 0x18;
  lVar5 = (longlong)*(int *)(param_1 + 0xe0);
  if (0 < lVar5) {
    lVar4 = *(longlong *)(param_1 + 0xd8);
    if (*(longlong *)(param_1 + 0xd8) == 0) {
      lVar4 = lVar6;
    }
    lVar1 = *(longlong *)(lVar4 + -8 + lVar5 * 0x18);
    if (*(longlong *)(lVar4 + -0x10 + lVar5 * 0x18) + lVar1 == uVar7 + param_3) {
      lVar4 = lVar4 + lVar5 * 0x18;
      lVar2 = *(longlong *)(lVar4 + -0x18);
      if ((*(int *)(lVar2 + 0x14) == *(int *)(param_2 + 0x14)) &&
         (*(int *)(lVar2 + 0x20) == *(int *)(param_2 + 0x20) &&
          *(longlong *)(lVar2 + 0x18) == *(longlong *)(param_2 + 0x18))) {
        *(ulonglong *)(lVar4 + -8) = lVar1 + uVar8;
        return param_1;
      }
    }
  }
  uVar3 = *(int *)(param_1 + 0xe0) + 1;
  *(uint *)(param_1 + 0xe0) = uVar3;
  if (*(uint *)(param_1 + 0xe4) < uVar3) {
    FUN_14688b608(lVar6);
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    lVar6 = *(longlong *)(param_1 + 0xd8);
  }
  *(longlong *)(lVar6 + lVar5 * 0x18) = param_2;
  *(ulonglong *)(lVar6 + 8 + lVar5 * 0x18) = uVar7 + param_3;
  *(ulonglong *)(lVar6 + 0x10 + lVar5 * 0x18) = uVar8;
  return param_1;
}



// FUNCTION 1427d8c83 FUN_1427d8c83 body=41 status=ok
// SIG undefined FUN_1427d8c83(void)

void FUN_1427d8c83(void)

{
  DAT_14c948ba8 = 0;
  if (DAT_14c948ba0 != 0) {
    FUN_1400020a8();
  }
  FUN_145c1c8e6();
  return;
}



// FUNCTION 1427d8cba FUN_1427d8cba body=571 status=ok
// SIG undefined FUN_1427d8cba(void)

void FUN_1427d8cba(void)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uint *puVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 auStack_98 [32];
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c948bb0);
  iVar2 = DAT_14c948b88;
  if (DAT_14c948b88 == 0) {
    uVar15 = 1;
    uVar14 = 0;
    iVar5 = 0;
    iVar9 = 0;
  }
  else {
    puVar12 = &DAT_14c948b70;
    if (DAT_14c948b80 != (uint *)0x0) {
      puVar12 = DAT_14c948b80;
    }
    uVar13 = *puVar12;
    if (uVar13 == 0) {
      iVar5 = DAT_14c948b88 + 0x1e;
      if (-1 < DAT_14c948b88 + -1) {
        iVar5 = DAT_14c948b88 + -1;
      }
      uVar14 = 0;
      uVar15 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar15 = uVar14;
      }
      iVar9 = 0;
      do {
        if (uVar15 == uVar14) goto LAB_1427d8e3b;
        iVar9 = iVar9 + 0x20;
        uVar13 = puVar12[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar14 = 0;
      iVar9 = 0;
    }
    uVar15 = (ulonglong)(-uVar13 & uVar13);
    uVar1 = uVar15 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar5 = (iVar9 - ((uint)lVar3 ^ 0x3f)) + 0x3e;
    if (DAT_14c948b88 <= iVar5) {
      iVar5 = DAT_14c948b88;
    }
  }
  if (iVar5 != DAT_14c948b88) {
    uVar13 = 0xffffffff;
    lVar3 = DAT_14c948b60;
    iVar4 = DAT_14c948b88;
    do {
      if (*(int *)(*(longlong *)(lVar3 + 8 + (longlong)iVar5 * 0x18) + 8) != 0) {
        lVar3 = lVar3 + (longlong)iVar5 * 0x18;
        FUN_14276766e(local_78,lVar3);
        thunk_FUN_1467e9698(local_78,*(undefined8 *)(lVar3 + 8));
        FUN_146888d7e(*(longlong *)(lVar3 + 8),*(undefined4 *)(*(longlong *)(lVar3 + 8) + 8));
        FUN_1427678c0(local_78);
        lVar3 = DAT_14c948b60;
        iVar4 = DAT_14c948b88;
      }
      uVar13 = uVar13 & ~(uint)uVar15;
      puVar12 = DAT_14c948b80;
      if (DAT_14c948b80 == (uint *)0x0) {
        puVar12 = &DAT_14c948b70;
      }
      iVar5 = (int)uVar14;
      lVar10 = (longlong)iVar5;
      uVar6 = puVar12[lVar10] & uVar13;
      if (uVar6 == 0) {
        iVar7 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar7 = iVar4 + -1;
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
            uVar6 = puVar12[lVar10 + lVar11 + 1];
            if (uVar6 != 0) {
              uVar14 = (ulonglong)(iVar5 + (int)lVar11 + 1);
              uVar13 = 0xffffffff;
              goto LAB_1427d8e0d;
            }
            iVar9 = iVar9 + 0x20;
            lVar11 = lVar11 + 1;
          } while (iVar8 - lVar10 != lVar11);
          uVar13 = 0xffffffff;
          iVar5 = iVar8;
        }
        uVar14 = (ulonglong)(iVar5 + 1);
        iVar5 = iVar4;
      }
      else {
LAB_1427d8e0d:
        uVar15 = (ulonglong)(-uVar6 & uVar6);
        uVar1 = uVar15 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar5 = (iVar9 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar5) {
          iVar5 = iVar4;
        }
      }
    } while (iVar5 != iVar2);
  }
LAB_1427d8e3b:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c948bb0);
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1427d8ef6 FUN_1427d8ef6 body=69 status=ok
// SIG undefined FUN_1427d8ef6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427d8ef6(void)

{
  _DAT_14c948bd8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427d8f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c948be0,1);
  return;
}



// FUNCTION 1427d8f3b FUN_1427d8f3b body=69 status=ok
// SIG undefined FUN_1427d8f3b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427d8f3b(void)

{
  _DAT_14c948bf0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427d8f7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c948bf8,1);
  return;
}



// FUNCTION 1427d8f80 FUN_1427d8f80 body=69 status=ok
// SIG undefined FUN_1427d8f80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427d8f80(void)

{
  _DAT_14c948c08 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427d8fc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c948c10,1);
  return;
}



// FUNCTION 1427d8fc5 FUN_1427d8fc5 body=69 status=ok
// SIG undefined FUN_1427d8fc5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427d8fc5(void)

{
  _DAT_14c948c20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427d9007. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c948c28,1);
  return;
}



// FUNCTION 1427d900a FUN_1427d900a body=531 status=ok
// SIG undefined FUN_1427d900a(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_1427d900a(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  DWORD DVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_1098 [32];
  undefined1 local_1078;
  undefined8 local_1070;
  longlong *local_1060;
  int local_1058;
  longlong *local_1050;
  longlong *local_1048;
  undefined8 local_1040;
  undefined4 local_1038;
  undefined8 local_1034;
  undefined4 uStack_102c;
  undefined4 uStack_1028;
  undefined4 uStack_1024;
  undefined8 uStack_1020;
  ulonglong local_40;
  
  plVar4 = DAT_14c9518c8;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1098;
  if ((*(ushort *)(param_1 + 0x54) & 0x104) == 0) {
    local_1070 = 0;
    local_1078 = 0;
    (**(code **)(*DAT_14c9518c8 + 0x28))(DAT_14c9518c8,&local_1048,param_1 + 0x48,0);
    plVar4 = local_1048;
    if ((char)local_1040 != '\0') {
      if (local_1048 != (longlong *)0x0) {
        (**(code **)*local_1048)(local_1048);
      }
      plVar4 = (longlong *)0x0;
    }
  }
  else {
    FUN_1468750d6(param_1 + 0x48,&local_1048);
    local_1060 = local_1048;
    local_1058 = (int)local_1040 + -1;
    if ((int)local_1040 == 0) {
      local_1058 = 0;
    }
    (**(code **)(*plVar4 + 0x48))(plVar4,&local_1050,0);
    plVar4 = local_1050;
    local_1050 = (longlong *)0x0;
    if (local_1048 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if (plVar4 == (longlong *)0x0) {
    DVar2 = GetLastError();
    if (DVar2 != 0) {
      memset(&local_1048,0,0x1000);
      FUN_14682f6b8(&local_1048,0x1000,DVar2);
    }
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined4 *)((longlong)param_2 + 0x14) = 1;
  }
  else {
    uVar3 = (**(code **)(*plVar4 + 0x30))(plVar4);
    (**(code **)(*plVar4 + 0x1a0))(plVar4,uVar3);
    local_1048 = (longlong *)0xffffffffffffffff;
    local_1040 = 0;
    local_1038 = 0xffffffff;
    local_1034 = 0;
    uStack_102c = 0;
    uStack_1028 = 0;
    uStack_1024 = 0;
    uStack_1020 = 0;
    cVar1 = FUN_1468c71cc(&local_1048,plVar4);
    if (cVar1 == '\0') {
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      *(undefined4 *)((longlong)param_2 + 0x14) = 1;
    }
    else {
      FUN_1468c70dc(&local_1048,param_2,param_1 + 0x10,plVar4);
    }
    if (CONCAT44(uStack_1024,uStack_1028) != 0) {
      FUN_1400020a8();
    }
    (**(code **)*plVar4)(plVar4,1);
  }
  if ((local_40 ^ (ulonglong)auStack_1098) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427d921e FUN_1427d921e body=378 status=ok
// SIG undefined FUN_1427d921e(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_1427d921e(longlong param_1,undefined8 *param_2,int param_3)

{
  char cVar1;
  DWORD DVar2;
  undefined1 auStack_1088 [32];
  undefined1 local_1068;
  undefined8 local_1060;
  undefined8 *local_1058;
  char local_1050;
  undefined8 local_1048;
  undefined8 local_1040;
  undefined4 local_1038;
  undefined8 local_1034;
  undefined4 uStack_102c;
  undefined4 uStack_1028;
  undefined4 uStack_1024;
  undefined8 uStack_1020;
  ulonglong local_40;
  undefined8 uStack_28;
  
  uStack_28 = 0x1427d922d;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1088;
  local_1060 = 0;
  local_1068 = 5;
  (**(code **)(*DAT_14c9518c8 + 0x28))(DAT_14c9518c8,&local_1058,param_1 + 0x48,0);
  if ((local_1058 == (undefined8 *)0x0) || (local_1050 != '\0')) {
    if (0 < param_3) {
      DVar2 = GetLastError();
      if (DVar2 != 0) {
        memset(&local_1048,0,0x1000);
        FUN_14682f6b8(&local_1048,0x1000,DVar2);
      }
    }
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined4 *)((longlong)param_2 + 0x14) = 1;
  }
  else {
    local_1048 = 0xffffffffffffffff;
    local_1040 = 0;
    local_1038 = 0xffffffff;
    local_1034 = 0;
    uStack_102c = 0;
    uStack_1028 = 0;
    uStack_1024 = 0;
    uStack_1020 = 0;
    cVar1 = FUN_1468c7392();
    if (cVar1 == '\0') {
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      *(undefined4 *)((longlong)param_2 + 0x14) = 1;
    }
    else {
      FUN_1468c70dc(&local_1048,param_2,param_1 + 0x10,local_1058);
    }
    if (CONCAT44(uStack_1024,uStack_1028) != 0) {
      FUN_1400020a8();
    }
  }
  if (local_1058 != (undefined8 *)0x0) {
    (**(code **)*local_1058)(local_1058,1);
  }
  if ((local_40 ^ (ulonglong)auStack_1088) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427d939a FUN_1427d939a body=634 status=ok
// SIG undefined FUN_1427d939a(void)

ulonglong FUN_1427d939a(ulong *param_1,longlong *param_2,ulong *param_3)

{
  uint *puVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  uint uVar4;
  longlong *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  DWORD DVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar1 = param_1 + 0x16;
  DVar10 = GetCurrentThreadId();
  uVar11 = param_1[0x16];
  if ((uVar11 & 1) == 0) {
    LOCK();
    uVar4 = *puVar1;
    bVar14 = uVar11 == uVar4;
    if (bVar14) {
      *puVar1 = uVar11 | 1;
      uVar4 = uVar11;
    }
    uVar11 = uVar4;
    UNLOCK();
    if (!bVar14) goto LAB_1427d93e4;
    param_1[0x17] = DVar10;
  }
  else {
LAB_1427d93e4:
    if (param_1[0x17] == DVar10) {
      LOCK();
      *puVar1 = *puVar1 + 4;
      UNLOCK();
    }
    else {
      FUN_1402441ea(puVar1,uVar11);
    }
  }
  plVar5 = *(longlong **)(param_1 + 0xe);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x1b8))(plVar5,param_1,0);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  plVar5 = (longlong *)*param_2;
  if (plVar5 == (longlong *)0x0) {
LAB_1427d943c:
    FUN_1467fe61e(param_1 + 10);
  }
  else {
    if ((plVar5[3] & 0x4000000000000000U) == 0) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
    if (plVar5[2] == 0) goto LAB_1427d943c;
    FUN_1467fe194(param_2,&local_48);
    uVar9 = local_48._0_8_;
    plVar5 = *(longlong **)(param_1 + 10);
    local_48._0_8_ = (longlong *)0x0;
    *(undefined8 *)(param_1 + 10) = uVar9;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar5 + 3;
      lVar12 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (((uint)lVar12 & 0x3fffffff) == 1) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        plVar5[1] = 0;
        plVar5[2] = 0;
        LOCK();
        puVar3 = (ulonglong *)(plVar5 + 3);
        uVar13 = *puVar3;
        *puVar3 = *puVar3 - 0x40000000;
        UNLOCK();
        if ((uVar13 & 0xfffffffc0000000) == 0x40000000) {
          (**(code **)*plVar5)(plVar5,1);
        }
      }
      uVar9 = local_48._0_8_;
      if ((longlong *)local_48._0_8_ != (longlong *)0x0) {
        LOCK();
        plVar5 = (longlong *)(local_48._0_8_ + 0x18);
        lVar12 = *plVar5;
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (((uint)lVar12 & 0x3fffffff) == 1) {
          (**(code **)(*(longlong *)local_48._0_8_ + 0x10))(local_48._0_8_);
          *(longlong *)(uVar9 + 8) = 0;
          *(longlong *)(uVar9 + 0x10) = 0;
          LOCK();
          puVar3 = (ulonglong *)(uVar9 + 0x18);
          uVar13 = *puVar3;
          *puVar3 = *puVar3 - 0x40000000;
          UNLOCK();
          if ((uVar13 & 0xfffffffc0000000) == 0x40000000) {
            (*(code *)**(undefined8 **)uVar9)(uVar9,1);
          }
        }
      }
    }
  }
  plVar5 = *(longlong **)(param_1 + 10);
  if (plVar5 == (longlong *)0x0) {
    lVar12 = 0;
  }
  else {
    if ((plVar5[3] & 0x4000000000000000U) == 0) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
    lVar12 = plVar5[2];
  }
  *(longlong *)(param_1 + 0xc) = lVar12;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  param_1[4] = *param_3;
  param_1[5] = uVar6;
  param_1[6] = uVar7;
  param_1[7] = uVar8;
  param_1[8] = param_3[4];
  param_1[0x15] = param_1[0x15] & 0xfffffed2;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  if ((0 < lVar12) && (((param_1[1] == 0 && *param_1 == 0) && param_1[2] == 0) && param_1[3] == 0))
  {
    local_48._0_8_ = (longlong *)0x0;
    local_48.Data4[0] = '\0';
    local_48.Data4[1] = '\0';
    local_48.Data4[2] = '\0';
    local_48.Data4[3] = '\0';
    local_48.Data4[4] = '\0';
    local_48.Data4[5] = '\0';
    local_48.Data4[6] = '\0';
    local_48.Data4[7] = '\0';
    CoCreateGuid(&local_48);
    *param_1 = local_48.Data1;
    param_1[1] = local_48._4_4_;
    param_1[2] = local_48.Data4._0_4_;
    param_1[3] = local_48.Data4._4_4_;
  }
  uVar11 = *puVar1;
  uVar13 = (ulonglong)uVar11;
  if (uVar11 < 4) {
    param_1[0x17] = 0;
    if (uVar11 < 2) {
      LOCK();
      uVar4 = *puVar1;
      if (uVar11 == uVar4) {
        *puVar1 = 0;
      }
      else {
        uVar13 = (ulonglong)uVar4;
      }
      UNLOCK();
      if (uVar11 == uVar4) goto LAB_1427d9516;
    }
    uVar13 = FUN_140d366d2(puVar1);
  }
  else {
    LOCK();
    *puVar1 = *puVar1 - 4;
    UNLOCK();
  }
LAB_1427d9516:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13;
}



// FUNCTION 1427d9616 FUN_1427d9616 body=2442 status=ok
// SIG undefined FUN_1427d9616(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_1427d9616(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  int *piVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  char cVar8;
  DWORD DVar9;
  uint uVar10;
  undefined4 uVar11;
  DWORD DVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined4 *puVar18;
  longlong **pplVar19;
  longlong *plVar20;
  longlong *plVar21;
  longlong unaff_GS_OFFSET;
  bool bVar22;
  undefined1 auStack_10d8 [32];
  ulonglong local_10b8;
  ulonglong local_10b0;
  undefined1 local_10a8;
  undefined8 local_10a0;
  longlong local_1098;
  longlong *local_1090;
  undefined1 local_1088;
  longlong *local_1080;
  int local_1078;
  longlong *local_1070;
  longlong *local_1068;
  longlong **pplStack_1060;
  undefined8 local_1058;
  longlong *local_1048;
  longlong **local_1040;
  int local_1038;
  undefined4 local_1034 [1019];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_10d8;
  puVar1 = (uint *)(param_1 + 0x58);
  DVar9 = GetCurrentThreadId();
  uVar10 = *(uint *)(param_1 + 0x58);
  if ((uVar10 & 1) == 0) {
    LOCK();
    uVar4 = *puVar1;
    bVar22 = uVar10 == uVar4;
    if (bVar22) {
      *puVar1 = uVar10 | 1;
      uVar4 = uVar10;
    }
    uVar10 = uVar4;
    UNLOCK();
    if (!bVar22) goto LAB_1427d966c;
    *(DWORD *)(param_1 + 0x5c) = DVar9;
  }
  else {
LAB_1427d966c:
    if (*(DWORD *)(param_1 + 0x5c) == DVar9) {
      LOCK();
      *puVar1 = *puVar1 + 4;
      UNLOCK();
    }
    else {
      FUN_1402441ea(puVar1,uVar10);
    }
  }
  FUN_14688bb88(&local_1098);
  lVar13 = DAT_14c948be8;
  local_1088 = 0;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    *(undefined8 *)(local_1098 + 0x80) = 0;
LAB_1427d96da:
    FUN_140b576f0();
  }
  else {
    lVar15 = *(longlong *)(param_1 + 0x28);
    if (lVar15 != 0) {
      LOCK();
      puVar2 = (ulonglong *)(lVar15 + 0x18);
      uVar17 = *puVar2;
      *puVar2 = *puVar2 + 1;
      UNLOCK();
      if ((uVar17 & 0x3fffffff) == 0) {
        LOCK();
        *(longlong *)(lVar15 + 0x18) = *(longlong *)(lVar15 + 0x18) + 0x40000000;
        UNLOCK();
      }
      *(longlong *)(local_1098 + 0x80) = lVar15;
      goto LAB_1427d96da;
    }
    uVar10 = *(uint *)(param_1 + 0x54);
    if ((uVar10 & 1) == 0) {
      if (*(longlong *)(param_1 + 0x48) == 0) goto LAB_1427d9b81;
      lVar15 = param_1 + 0x48;
      lVar16 = 1;
      if ((uVar10 & 2) == 0) {
LAB_1427d9890:
        lVar13 = DAT_14c948c00;
        if (((byte)(uVar10 >> 0xb) & 1 | lVar16 == 0) == 1) {
          if (((uVar10 & 4) == 0) && ((uVar10 >> 9 & 1) != 0)) {
            FUN_1427d900a(param_1,&local_1048);
            if (local_1038 == 0) {
              puVar18 = (undefined4 *)((longlong)&local_1058 + 4);
              local_1068 = (longlong *)0x0;
              pplStack_1060 = (longlong **)0x0;
              local_1058 = 0;
            }
            else {
              if (local_1040 == (longlong **)0x0) {
                local_1068 = local_1048;
              }
              pplStack_1060 = local_1040;
              puVar18 = local_1034;
              local_1040 = (longlong **)0x0;
              local_1058 = CONCAT44(local_1034[0],local_1038);
              local_1038 = 0;
            }
            *puVar18 = 1;
            goto LAB_1427d9d53;
          }
          goto LAB_1427d9b81;
        }
        iVar6 = *(int *)(*(longlong *)
                          (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) +
                        0xc60);
        if (iVar6 == 0x40000002) {
          uVar17 = 0;
        }
        else {
          bVar22 = true;
          if ((DAT_14c86a9f8 == '\x01') && (iVar6 != 2)) {
            if (iVar6 == 1) {
              DVar9 = FUN_140ad26c0();
              DVar12 = GetCurrentThreadId();
              bVar22 = DVar9 == DVar12;
              uVar10 = *(uint *)(param_1 + 0x54);
            }
            else {
              bVar22 = false;
            }
          }
          uVar17 = (ulonglong)(bVar22 ^ 1);
        }
        plVar21 = DAT_14c9518c8;
        if ((*(char *)(lVar13 + uVar17) == '\x01') && ((uVar10 & 0x200) != 0)) {
          FUN_1427d900a(param_1,&local_1068);
        }
        else {
          if ((uVar10 & 0x104) == 0) {
            local_10b0 = 0;
            local_10b8 = local_10b8 & 0xffffffffffffff00;
            (**(code **)(*DAT_14c9518c8 + 0x28))(DAT_14c9518c8,&local_1048,lVar15,0);
            plVar21 = local_1048;
            if ((char)local_1040 != '\0') {
              if (local_1048 != (longlong *)0x0) {
                (**(code **)*local_1048)(local_1048);
              }
              plVar21 = (longlong *)0x0;
            }
          }
          else {
            FUN_1468750d6(lVar15,&local_1048);
            local_1080 = local_1048;
            local_1078 = (int)local_1040 + -1;
            if ((int)local_1040 == 0) {
              local_1078 = 0;
            }
            (**(code **)(*plVar21 + 0x48))(plVar21,&local_1068,0);
            plVar21 = local_1068;
            local_1068 = (longlong *)0x0;
            if (local_1048 != (longlong *)0x0) {
              FUN_1400020a8();
            }
          }
          if (plVar21 == (longlong *)0x0) {
            DVar9 = GetLastError();
            if (DVar9 != 0) {
              memset(&local_1048,0,0x1000);
              FUN_14682f6b8(&local_1048,0x1000,DVar9);
            }
            goto LAB_1427d9b81;
          }
          (**(code **)(*plVar21 + 0x1a0))(plVar21,*(undefined8 *)(param_1 + 0x40));
          pplStack_1060 = (longlong **)0x0;
          local_1058 = 0x100000000;
          bVar5 = *(byte *)(plVar21 + 5);
          if (((bVar5 & 4) == 0) && (((*(uint *)(param_1 + 0x54) & 4) != 0 || ((bVar5 & 1) == 0))))
          {
            if ((bVar5 & 1) != 0) {
              lVar13 = *(longlong *)(param_1 + 0x30);
              if ((*(uint *)(param_1 + 0x54) & 8) == 0) {
                lVar15 = (**(code **)(*plVar21 + 0x30))(plVar21);
                lVar16 = (**(code **)(*plVar21 + 0x28))(plVar21);
                if (lVar15 - lVar16 < lVar13) {
                  FUN_14572541c(plVar21);
                  goto LAB_1427d9cb3;
                }
                FUN_140e03604(&local_1048,lVar13);
                plVar20 = local_1048;
                if (local_1048 == (longlong *)0x0) {
                  lVar15 = 0;
                }
                else {
                  if (((ulonglong)local_1048[3] >> 0x3e & 1) == 0) {
                    (**(code **)(*local_1048 + 8))(local_1048);
                  }
                  lVar15 = plVar20[1];
                }
                (**(code **)(*plVar21 + 0x170))(plVar21,lVar15,lVar13);
              }
              else {
                FUN_140e03604(&local_1048,lVar13);
                plVar20 = local_1048;
                if (DAT_14c87ead8 == '\0') {
                  FUN_140024d3a(&DAT_14c87eb00);
                  DAT_14c87ead8 = '\x01';
                }
                uVar17 = (ulonglong)DAT_14c892f44;
                if (plVar20 == (longlong *)0x0) {
                  lVar15 = 0;
                }
                else {
                  if (((ulonglong)plVar20[3] >> 0x3e & 1) == 0) {
                    (**(code **)(*plVar20 + 8))(plVar20);
                  }
                  lVar15 = plVar20[1];
                }
                local_10a0 = 0;
                local_10a8 = 0;
                local_10b0 = local_10b0 & 0xffffffff00000000;
                local_10b8 = uVar17;
                FUN_1416a07d6(plVar21,lVar15,lVar13,uVar17);
              }
              local_10b8 = 0;
              local_1070 = plVar20;
              FUN_1467a8b50(&local_1048,&local_1070,0,0);
              FUN_1467aaaf0(&local_1068,&local_1048);
              FUN_1458cf622(&local_1048);
              if (local_1070 != (longlong *)0x0) {
                LOCK();
                plVar20 = local_1070 + 3;
                lVar13 = *plVar20;
                *plVar20 = *plVar20 + -1;
                UNLOCK();
                if (((uint)lVar13 & 0x3fffffff) == 1) {
                  (**(code **)(*local_1070 + 0x10))(local_1070);
                  local_1070[1] = 0;
                  local_1070[2] = 0;
                  LOCK();
                  puVar2 = (ulonglong *)(local_1070 + 3);
                  uVar17 = *puVar2;
                  *puVar2 = *puVar2 - 0x40000000;
                  UNLOCK();
                  if ((uVar17 & 0xfffffffc0000000) == 0x40000000) {
                    (**(code **)*local_1070)(local_1070,1);
                  }
                }
              }
            }
          }
          else {
            FUN_1467a9214(plVar21,&local_1068);
          }
LAB_1427d9cb3:
          local_1040 = (longlong **)0x0;
          pplVar19 = pplStack_1060;
          if (pplStack_1060 == (longlong **)0x0) {
            pplVar19 = &local_1068;
          }
          FUN_1467ac028(&local_1048,pplVar19,local_1058 & 0xffffffff,0);
          FUN_14688a0f0(param_1,&local_1048);
          (**(code **)*plVar21)(plVar21,1);
        }
      }
      else {
        lVar16 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8);
        iVar6 = *(int *)(lVar16 + 0xc60);
        if (iVar6 == 0x40000002) {
          uVar17 = 0;
        }
        else {
          bVar22 = true;
          if ((DAT_14c86a9f8 == '\x01') && (iVar6 != 2)) {
            if (iVar6 == 1) {
              DVar9 = FUN_140ad26c0();
              DVar12 = GetCurrentThreadId();
              bVar22 = DVar9 == DVar12;
            }
            else {
              bVar22 = false;
            }
          }
          uVar17 = (ulonglong)(bVar22 ^ 1);
        }
        lVar7 = DAT_14c948c18;
        if (*(char *)(lVar13 + uVar17) == '\0') {
          lVar16 = *(longlong *)(param_1 + 0x48);
          uVar10 = *(uint *)(param_1 + 0x54);
          goto LAB_1427d9890;
        }
        iVar6 = *(int *)(lVar16 + 0xc60);
        if (((iVar6 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar6 == 2)) {
          uVar17 = 0;
        }
        else if (iVar6 == 1) {
          DVar9 = FUN_140ad26c0();
          DVar12 = GetCurrentThreadId();
          uVar17 = (ulonglong)(DVar9 != DVar12);
        }
        else {
          uVar17 = 1;
        }
        if (*(char *)(lVar7 + uVar17) == '\x01') {
          FUN_1427d921e(param_1,&local_1068,0);
          if ((int)local_1058 != 0) goto LAB_1427d9ba0;
          if ((*(int *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) + 0x110
                       ) < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1)) {
            FUN_1456d85e6(&DAT_14c8337f0);
            atexit((_func_5014 *)&LAB_142748837);
            _Init_thread_footer(&DAT_14c8338a0);
          }
          local_1048 = (longlong *)0x149e69870;
          local_1040 = (longlong **)CONCAT35(local_1040._5_3_,0x24);
          uVar11 = FUN_14001a6c0(&local_1048,1);
          lVar13 = (**(code **)(DAT_14c8337f0 + 0x20))(&DAT_14c8337f0,uVar11,0);
          puVar14 = (undefined8 *)(lVar13 + -8);
          if ((puVar14 == (undefined8 *)0x0 || lVar13 == 0) ||
             (cVar8 = (**(code **)*puVar14)(puVar14,lVar15), cVar8 == '\0')) goto LAB_1427d9ba0;
          FUN_1427d921e(param_1,&local_1048,1);
          FUN_1467aaaf0(&local_1068,&local_1048);
LAB_1427d9d53:
          FUN_1458cf622(&local_1048);
        }
        else {
          FUN_1427d921e(param_1,&local_1068,1);
        }
      }
    }
    else {
      if (DAT_14c896230 == (longlong *)0x0) {
        FUN_142794351(1);
      }
      cVar8 = (**(code **)(*DAT_14c896230 + 0x10))();
      if (cVar8 != '\0') {
        if (DAT_14c896230 == (longlong *)0x0) {
          FUN_142794351(1);
        }
        FUN_14688a15a(DAT_14c896230,&local_1068,param_1 + 0x10);
        goto LAB_1427d9ba0;
      }
LAB_1427d9b81:
      local_1068 = (longlong *)0x0;
      pplStack_1060 = (longlong **)0x0;
      local_1058 = 0x100000000;
    }
LAB_1427d9ba0:
    FUN_1467a904e(&local_1068,&local_1048);
    if (local_1048 != (longlong *)0x0) {
      LOCK();
      puVar2 = (ulonglong *)(local_1048 + 3);
      uVar17 = *puVar2;
      *puVar2 = *puVar2 + 1;
      UNLOCK();
      if ((uVar17 & 0x3fffffff) == 0) {
        LOCK();
        local_1048[3] = local_1048[3] + 0x40000000;
        UNLOCK();
      }
    }
    *(longlong **)(local_1098 + 0x80) = local_1048;
    FUN_140b576f0();
    plVar21 = local_1048;
    if (local_1048 != (longlong *)0x0) {
      LOCK();
      plVar20 = local_1048 + 3;
      lVar13 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (((uint)lVar13 & 0x3fffffff) == 1) {
        (**(code **)(*local_1048 + 0x10))(local_1048);
        plVar21[1] = 0;
        plVar21[2] = 0;
        LOCK();
        puVar2 = (ulonglong *)(plVar21 + 3);
        uVar17 = *puVar2;
        *puVar2 = *puVar2 - 0x40000000;
        UNLOCK();
        if ((uVar17 & 0xfffffffc0000000) == 0x40000000) {
          (**(code **)*plVar21)(plVar21,1);
        }
      }
    }
    FUN_1458cf622();
  }
  local_1088 = 1;
  *param_2 = local_1098;
  param_2[1] = (longlong)local_1090;
  if (local_1090 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1090 + 1) = (int)local_1090[1] + 1;
    UNLOCK();
    if (local_1090 != (longlong *)0x0) {
      LOCK();
      plVar21 = local_1090 + 1;
      *(int *)plVar21 = (int)*plVar21 + -1;
      UNLOCK();
      if ((int)*plVar21 == 0) {
        (**(code **)*local_1090)();
        LOCK();
        piVar3 = (int *)((longlong)local_1090 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*local_1090 + 0x10))();
        }
      }
    }
  }
  uVar10 = *puVar1;
  if (uVar10 < 4) {
    *(undefined4 *)(param_1 + 0x5c) = 0;
    if (uVar10 < 2) {
      LOCK();
      uVar4 = *puVar1;
      if (uVar10 == uVar4) {
        *puVar1 = 0;
      }
      UNLOCK();
      if (uVar10 == uVar4) goto LAB_1427d9750;
    }
    FUN_140d366d2(puVar1);
  }
  else {
    LOCK();
    *puVar1 = *puVar1 - 4;
    UNLOCK();
  }
LAB_1427d9750:
  if ((local_48 ^ (ulonglong)auStack_10d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1427d9fa1 FUN_1427d9fa1 body=171 status=ok
// SIG undefined FUN_1427d9fa1(void)

undefined8 * FUN_1427d9fa1(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = (longlong *)*param_2;
  if (plVar1 != (longlong *)0x0) {
    if (((ulonglong)plVar1[3] >> 0x3e & 1) == 0) {
      (**(code **)(*plVar1 + 8))(plVar1);
    }
    if (plVar1[2] != 0) {
      FUN_1467fe202(param_2,&local_68);
      local_58 = local_68;
      uStack_54 = uStack_64;
      uStack_50 = uStack_60;
      uStack_4c = uStack_5c;
      FUN_1467c4f68(&local_40);
      *(undefined4 *)(param_1 + 2) = local_30;
      *(undefined4 *)param_1 = local_40;
      *(undefined4 *)((longlong)param_1 + 4) = uStack_3c;
      *(undefined4 *)(param_1 + 1) = uStack_38;
      *(undefined4 *)((longlong)param_1 + 0xc) = uStack_34;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_88);
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427da04f FUN_1427da04f body=47 status=ok
// SIG undefined FUN_1427da04f(void)

void FUN_1427da04f(void)

{
  DAT_14c948c88 = 0;
  if (DAT_14c948c80 != 0) {
    FUN_1400020a8();
  }
  FUN_140957b56(&DAT_14c948c40);
  return;
}



// FUNCTION 1427da07e FUN_1427da07e body=116 status=ok
// SIG undefined FUN_1427da07e(void)

void FUN_1427da07e(longlong param_1,int *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar1 = *(code **)(param_1 + 0x40);
  if (pcVar1 != (code *)0x0) {
    local_28 = param_1 + 0x30;
    local_29 = *param_2 != 0;
    plVar3 = (longlong *)(param_1 + 0x60);
    if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x50);
    }
    uVar2 = (**(code **)(*plVar3 + 8))();
    (*pcVar1)(uVar2,&local_29,&local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427da114 FUN_1427da114 body=39 status=ok
// SIG undefined FUN_1427da114(void)

void FUN_1427da114(longlong *param_1,undefined8 param_2)

{
  FUN_1427d8aaa(*(undefined8 **)param_1[2],param_2,**(undefined8 **)param_1[2],param_1[1],
                *(undefined4 *)(*param_1 + 0x14));
  return;
}



// FUNCTION 1427da162 caseD_6 body=12 status=ok
// SIG undefined caseD_6(void)

void switchD_14013128b::caseD_6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001427da16b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1427da16e caseD_7 body=29 status=ok
// SIG undefined caseD_7(void)

undefined8 switchD_14013128b::caseD_7(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1427da18c FUN_1427da18c body=290 status=ok
// SIG undefined FUN_1427da18c(void)

void FUN_1427da18c(longlong *param_1,int *param_2)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  bool bVar6;
  undefined1 auStack_158 [40];
  int local_130;
  undefined2 local_12c [130];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  iVar3 = *param_2;
  local_130 = iVar3;
  memcpy(local_12c,param_2 + 1,0x100);
  if (iVar3 == 0) {
    local_28 = *(longlong *)(param_2 + 0x42);
    param_2[0x42] = 0;
    param_2[0x43] = 0;
    *param_2 = 1;
    *(undefined2 *)(param_2 + 1) = 0;
    param_1 = (longlong *)*param_1;
    param_1[4] = (ulonglong)CONCAT14(*(undefined1 *)(local_28 + 0x18),*(undefined4 *)(local_28 + 8))
    ;
    uVar5 = 4;
  }
  else {
    param_1 = (longlong *)*param_1;
    uVar5 = 2;
  }
  *(uint *)(param_1 + 5) = uVar5;
  (**(code **)(*param_1 + 8))(param_1,&local_130);
  *(uint *)(param_1 + 5) = uVar5 | 8;
  LOCK();
  bVar2 = *(byte *)(param_1 + 2);
  *(byte *)(param_1 + 2) = 1;
  UNLOCK();
  if ((bVar2 & 3) == 2) {
    FUN_1447458da(param_1 + 2,0xffffffff);
  }
  lVar4 = local_28;
  bVar6 = local_130 == 0;
  local_130 = 1;
  local_12c[0] = 0;
  if ((bVar6) && (local_28 != 0)) {
    LOCK();
    piVar1 = (int *)(local_28 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      FUN_144716208(local_28);
      FUN_1400020a8(lVar4);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427da2da caseD_b body=29 status=ok
// SIG undefined caseD_b(void)

undefined8 switchD_14013128b::caseD_b(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1427da2f8 FUN_1427da2f8 body=189 status=ok
// SIG undefined FUN_1427da2f8(void)

void FUN_1427da2f8(undefined8 *param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_168 [40];
  int local_140;
  undefined2 local_13c;
  undefined1 local_13a [258];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_168;
  iVar1 = *param_2;
  iVar3 = param_2[1];
  if (iVar1 == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x42);
    param_2[0x42] = 0;
    param_2[0x43] = 0;
    *param_2 = 1;
    *(undefined2 *)(param_2 + 1) = 0;
    memcpy(local_13a,(void *)((longlong)param_2 + 6),0xfe);
    local_38 = uVar2;
  }
  else {
    memcpy(local_13a,(void *)((longlong)param_2 + 6),0xfe);
  }
  local_140 = iVar1;
  local_13c = (short)iVar3;
  FUN_14688953e(*param_1,param_1[1]);
  if ((local_30 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427da3d4 FUN_1427da3d4 body=12 status=ok
// SIG undefined FUN_1427da3d4(void)

void FUN_1427da3d4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001427da3dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1427da3e0 FUN_1427da3e0 body=29 status=ok
// SIG undefined FUN_1427da3e0(void)

undefined8 FUN_1427da3e0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1427da3fd FUN_1427da3fd body=497 status=ok
// SIG undefined FUN_1427da3fd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427da3fd(void)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  FUN_141471170(&DAT_14c948b50,L"s.MinBulkDataSizeForAsyncLoading",&DAT_14c75ec68,
                L"Minimum time the time limit exceeded warning will be triggered by.");
  atexit(FUN_1427d8a65);
  DAT_14c948b80 = 0;
  DAT_14c948b88 = 0;
  DAT_14c948b60 = 0;
  _DAT_14c948b68 = 0;
  _DAT_14c948b8c = 0xffffffff00000080;
  DAT_14c948b94 = 0;
  DAT_14c948ba0 = 0;
  DAT_14c948ba8 = 0;
  atexit(FUN_1427d8c83);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c948bb0);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c948bb0,4000);
  atexit((_func_5014 *)&LAB_1427d8cac);
  local_34 = 0;
  local_48 = 0;
  FUN_140bd5914(&DAT_14c948bd8,L"Serialization.LoadFromSidecar",&local_34,
                L"When true FEditorBulkData will load from the sidecar file");
  atexit(FUN_1427d8ef6);
  local_33 = 0;
  local_48 = 0;
  FUN_140bd5914(&DAT_14c948bf0,L"Serialization.LoadFromTrailer",&local_33,
                L"When true FEditorBulkData will load payloads via the package trailer rather than the package itself"
               );
  atexit(FUN_1427d8f3b);
  local_32 = 0;
  local_48 = 0;
  FUN_140bd5914(&DAT_14c948c08,L"Serialization.AllowSidecarSyncing",&local_32,
                L"When true FEditorBulkData will attempt to sync it\'s .upayload file via sourcecontrol if the first attempt to load from it fails"
               );
  atexit(FUN_1427d8f80);
  local_31 = 0;
  local_48 = 0;
  FUN_140bd5914(&DAT_14c948c20,L"Serialization.RehydrateOnSave",&local_31,
                L"When true FVirtualizedUntypedBulkData virtualized payloads will by hydrated and stored locally when saved to a package"
               );
  atexit(FUN_1427d8fc5);
  InitializeSRWLock((PSRWLOCK)&DAT_14c948c38);
  _DAT_14c948c60 = 0;
  _DAT_14c948c68 = 0;
  DAT_14c948c40 = 0;
  _DAT_14c948c48 = 0;
  _DAT_14c948c6c = 0xffffffff00000080;
  DAT_14c948c74 = 0;
  DAT_14c948c80 = 0;
  DAT_14c948c88 = 0;
  atexit(FUN_1427da04f);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427da5fc FUN_1427da5fc body=91 status=ok
// SIG undefined FUN_1427da5fc(void)

void FUN_1427da5fc(void)

{
  if (DAT_14c948cd8 != 0) {
    if (DAT_14c948cd0 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c948cd0)(DAT_14c948cd0,0);
    FUN_1446efa72(&DAT_14c948cd0,0,0,0x10);
    DAT_14c948cd8 = 0;
  }
  if (DAT_14c948cd0 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1427da658 FUN_1427da658 body=864 status=ok
// SIG undefined FUN_1427da658(void)

void FUN_1427da658(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  uint *puVar2;
  ulonglong *puVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_58 [36];
  uint local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14c948cb0);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    iVar5 = FUN_1448332aa(param_2,&DAT_14c948cb0);
    if (iVar5 < 0) {
      uVar6 = (**(code **)(*param_2 + 0x28))(param_2);
      uVar4 = local_30._4_4_;
      local_30 = (ulonglong)local_30._4_4_ << 0x20;
      puVar3 = (ulonglong *)param_2[1];
      piVar1 = (int *)*puVar3 + 1;
      if ((int *)puVar3[1] < piVar1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_30,4);
        }
        else {
          FUN_14572512c(param_2,&local_30);
        }
        iVar5 = (int)local_30;
      }
      else {
        iVar5 = *(int *)*puVar3;
        local_30 = CONCAT44(uVar4,iVar5);
        *puVar3 = (ulonglong)piVar1;
      }
      if (iVar5 != -0x54545455) {
        (**(code **)(*param_2 + 0x1a0))(param_2,uVar6);
      }
      local_34 = local_34 & 0xffffff00;
      puVar3 = (ulonglong *)param_2[1];
      if (puVar3[1] < *puVar3 + 1) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_34,1);
      }
      else {
        *puVar3 = *puVar3 + 1;
      }
    }
  }
  local_30 = *param_1;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 4) != 0) {
      (**(code **)(*param_2 + 0x150))(param_2,&local_30);
      uVar6 = (**(code **)(*param_2 + 0x28))(param_2);
      local_34 = 0;
      puVar3 = (ulonglong *)param_2[1];
      puVar2 = (uint *)*puVar3 + 1;
      if ((uint *)puVar3[1] < puVar2) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_34,4);
        }
        else {
          FUN_14572512c(param_2,&local_34);
        }
      }
      else {
        local_34 = *(uint *)*puVar3;
        *puVar3 = (ulonglong)puVar2;
      }
      iVar5 = (**(code **)(*param_2 + 0x28))(param_2);
      if ((local_30 != 0) && (param_1[1] != 0)) {
        FUN_14047320e(local_30,param_2,param_1[1],0);
      }
      lVar7 = (**(code **)(*param_2 + 0x28))(param_2);
      (**(code **)(*param_2 + 0x1a0))(param_2,uVar6);
      local_34 = (int)lVar7 - iVar5;
      puVar3 = (ulonglong *)param_2[1];
      puVar2 = (uint *)*puVar3 + 1;
      if ((uint *)puVar3[1] < puVar2) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_34,4);
        }
        else {
          FUN_14572512c(param_2,&local_34);
        }
      }
      else {
        local_34 = *(uint *)*puVar3;
        *puVar3 = (ulonglong)puVar2;
      }
      lVar8 = *param_2;
LAB_1427da94d:
      (**(code **)(lVar8 + 0x1a0))(param_2,lVar7);
      goto LAB_1427da953;
    }
    if ((*(byte *)((longlong)param_2 + 0x2b) & 0xe) == 0) goto LAB_1427da953;
    (**(code **)(*param_2 + 0x150))(param_2,&local_30);
  }
  else {
    (**(code **)(*param_2 + 0x150))(param_2,&local_30);
    if (local_30 == 0) {
      lVar8 = 0;
    }
    else {
      (**(code **)(*param_2 + 0x198))(param_2);
      lVar8 = local_30;
    }
    FUN_1401fa0f0(param_1,lVar8,0);
    local_34 = 0;
    puVar3 = (ulonglong *)param_2[1];
    puVar2 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_34,4);
      }
      else {
        FUN_14572512c(param_2,&local_34);
      }
    }
    else {
      local_34 = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar2;
    }
    if ((local_30 == 0) && (0 < (int)local_34)) {
      lVar7 = (**(code **)(*param_2 + 0x28))(param_2);
      lVar7 = (int)local_34 + lVar7;
      lVar8 = *param_2;
      goto LAB_1427da94d;
    }
  }
  if ((local_30 != 0) && (param_1[1] != 0)) {
    FUN_14047320e(local_30,param_2,param_1[1],0);
  }
LAB_1427da953:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427da9ba FUN_1427da9ba body=417 status=ok
// SIG undefined FUN_1427da9ba(void)

undefined4 FUN_1427da9ba(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  char *pcVar6;
  undefined1 auStack_78 [40];
  longlong local_50;
  char *local_48;
  undefined4 local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c948ce8) {
    FUN_144b3d300(&DAT_14c948ce8);
    if (DAT_14c948ce8 == -1) {
      local_48 = "StructVariant";
      local_40 = 0xd;
      local_3c = 0;
      uVar3 = FUN_14001a6c0(&local_48,1);
      DAT_14c948ce0 = (ulonglong)uVar3;
      _Init_thread_footer(&DAT_14c948ce8);
    }
  }
  local_48 = (char *)CONCAT44(local_48._4_4_,*(undefined4 *)(param_2 + 8));
  uVar2 = FUN_1468ec2ac(&local_48,DAT_14c948ce0);
  if ((char)uVar2 != '\0') {
    plVar1 = *(longlong **)(*param_3 + 8);
    local_48 = (char *)0x0;
    (**(code **)(*plVar1 + 0x150))(plVar1,&local_48);
    if (local_48 == (char *)0x0) {
      pcVar6 = (char *)0x0;
    }
    else {
      (**(code **)(*plVar1 + 0x198))(plVar1);
      pcVar6 = local_48;
    }
    FUN_1401fa0f0(param_1,pcVar6,0);
    pcVar6 = local_48;
    local_50 = 0;
    FUN_1408383eb(plVar1);
    lVar4 = (**(code **)(*plVar1 + 0x28))(plVar1);
    if (pcVar6 != (char *)0x0) {
      FUN_14483b62e(pcVar6,param_3,*(undefined8 *)(param_1 + 8),0);
    }
    lVar5 = (**(code **)(*plVar1 + 0x28))(plVar1);
    lVar4 = lVar4 + local_50;
    if (lVar5 != lVar4) {
      if (local_48 != (char *)0x0) {
        FUN_1468216ba(plVar1);
      }
      (**(code **)(*plVar1 + 0x1a0))(plVar1,lVar4);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427dab5c FUN_1427dab5c body=436 status=ok
// SIG undefined FUN_1427dab5c(void)

void FUN_1427dab5c(longlong *param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  longlong *plVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  char local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(byte *)(param_2 + 5) & 4) == 0) || (param_1[1] == 0)) {
    local_31 = false;
  }
  else {
    local_31 = *param_1 != 0;
  }
  (**(code **)(*param_2 + 0x178))(param_2,&local_31,1);
  bVar1 = *(byte *)(param_2 + 5);
  if (local_31 == '\0') {
    if ((bVar1 & 1) != 0) {
      lVar2 = param_1[1];
      if (lVar2 != 0) {
        plVar5 = (longlong *)*param_1;
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x2f0))(plVar5,lVar2,1);
        }
        FUN_1400020a8(lVar2);
      }
      *param_1 = 0;
      param_1[1] = 0;
    }
    *param_4 = 1;
  }
  else {
    if ((bVar1 & 1) == 0) {
      if ((bVar1 & 4) != 0) {
        (**(code **)(*param_2 + 0x138))(param_2,param_1);
      }
    }
    else {
      local_40 = 0;
      (**(code **)(*param_2 + 0x150))(param_2,&local_40);
      if (*param_1 != local_40) {
        FUN_1401fa0f0(param_1,local_40,0);
      }
      if ((param_1[1] == 0) || (*param_1 == 0)) {
        FUN_14572541c(param_2);
        *param_4 = 0;
      }
    }
    lVar2 = *param_1;
    if (lVar2 != 0) {
      if ((*(byte *)(lVar2 + 0xb1) & 4) == 0) {
        if ((DAT_14c948cd0 != (longlong *)0x0 && DAT_14c948cd8 != 0) &&
           (cVar3 = (**(code **)(*DAT_14c948cd0 + 0x30))(), cVar3 != '\0')) {
          plVar5 = DAT_14c948cd0;
          if (DAT_14c948cd8 == 0) {
            plVar5 = (longlong *)0x0;
          }
          uVar4 = (**(code **)(*plVar5 + 0x58))(plVar5,param_1,param_2,param_3);
          *param_4 = uVar4;
        }
      }
      else {
        local_48 = param_1[1];
        (**(code **)(**(longlong **)(lVar2 + 0xb8) + 0x40))
                  (*(longlong **)(lVar2 + 0xb8),param_2,param_3,param_4);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1427dad12 FUN_1427dad12 body=1202 status=ok
// SIG undefined FUN_1427dad12(void)

bool FUN_1427dad12(longlong *param_1,longlong *param_2)

{
  char *pcVar1;
  int *piVar2;
  undefined4 *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined1 auStack_a8 [39];
  char local_81;
  ulonglong local_80;
  undefined4 local_78;
  ulonglong local_70;
  ulonglong local_68;
  undefined8 uStack_60;
  int local_50;
  char local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_49 = '\0';
  puVar4 = (ulonglong *)param_2[1];
  pcVar1 = (char *)*puVar4 + 1;
  if ((char *)puVar4[1] < pcVar1) {
    (**(code **)(*param_2 + 0x170))(param_2,&local_49,1);
  }
  else {
    local_49 = *(char *)*puVar4;
    *puVar4 = (ulonglong)pcVar1;
  }
  cVar10 = local_49;
  if (local_49 == '\0') {
    local_50 = *(int *)((longlong)param_1 + 0xc);
    puVar4 = (ulonglong *)param_2[1];
    piVar2 = (int *)*puVar4 + 1;
    local_81 = local_49;
    if ((int *)puVar4[1] < piVar2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_50,4);
      }
      else {
        FUN_14572512c(param_2,&local_50);
      }
    }
    else {
      local_50 = *(int *)*puVar4;
      *puVar4 = (ulonglong)piVar2;
    }
    cVar10 = local_81;
    if (0 < local_50) {
      if ((*(byte *)(param_2 + 5) & 1) == 0) {
        if ((*(byte *)(param_2 + 5) & 4) == 0) {
          if ((*(byte *)((longlong)param_2 + 0x2b) & 0xc) != 0) {
            if (0 < *(int *)((longlong)param_1 + 0xc)) {
              iVar11 = 0;
              iVar12 = -0x10;
              do {
                (**(code **)(*param_2 + 0x138))
                          (param_2,(longlong)((int)param_1[1] + iVar12) + *param_1);
                iVar11 = iVar11 + 1;
                iVar12 = iVar12 + -0x10;
              } while (iVar11 < *(int *)((longlong)param_1 + 0xc));
              cVar10 = local_81;
              if (local_50 < 1) goto LAB_1427db186;
            }
            iVar12 = 0;
            iVar13 = -0x10;
            iVar11 = local_50;
            do {
              lVar16 = *param_1;
              lVar14 = (longlong)((int)param_1[1] + iVar13);
              lVar5 = *(longlong *)(lVar16 + lVar14);
              if (lVar5 != 0) {
                FUN_14047320e(lVar5,param_2,*(int *)(lVar16 + lVar14 + 8) + lVar16,0);
                iVar11 = local_50;
              }
              iVar12 = iVar12 + 1;
              iVar13 = iVar13 + -0x10;
              cVar10 = local_81;
            } while (iVar12 < iVar11);
          }
        }
        else {
          if (0 < *(int *)((longlong)param_1 + 0xc)) {
            iVar11 = 0;
            iVar12 = -0x10;
            do {
              (**(code **)(*param_2 + 0x138))
                        (param_2,(longlong)((int)param_1[1] + iVar12) + *param_1);
              iVar11 = iVar11 + 1;
              iVar12 = iVar12 + -0x10;
            } while (iVar11 < *(int *)((longlong)param_1 + 0xc));
            cVar10 = local_81;
            if (local_50 < 1) goto LAB_1427db186;
          }
          iVar12 = 0;
          iVar11 = -0x10;
          do {
            lVar5 = param_1[1];
            lVar16 = *param_1;
            uVar8 = (**(code **)(*param_2 + 0x28))(param_2);
            uVar15 = local_68 >> 0x20;
            local_68 = local_68 & 0xffffffff00000000;
            puVar4 = (ulonglong *)param_2[1];
            puVar3 = (undefined4 *)*puVar4 + 1;
            if ((undefined4 *)puVar4[1] < puVar3) {
              if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                (**(code **)(*param_2 + 0x170))(param_2,&local_68,4);
              }
              else {
                FUN_14572512c(param_2,&local_68);
              }
            }
            else {
              local_68 = CONCAT44((int)uVar15,*(undefined4 *)*puVar4);
              *puVar4 = (ulonglong)puVar3;
            }
            lVar14 = (longlong)((int)lVar5 + iVar11);
            iVar13 = (**(code **)(*param_2 + 0x28))(param_2);
            lVar5 = *(longlong *)(lVar16 + lVar14);
            if (lVar5 != 0) {
              FUN_14047320e(lVar5,param_2,(longlong)*(int *)(lVar16 + 8 + lVar14) + *param_1,0);
            }
            uVar9 = (**(code **)(*param_2 + 0x28))(param_2);
            (**(code **)(*param_2 + 0x1a0))(param_2,uVar8);
            local_68 = CONCAT44(local_68._4_4_,(int)uVar9 - iVar13);
            puVar4 = (ulonglong *)param_2[1];
            puVar3 = (undefined4 *)*puVar4 + 1;
            if ((undefined4 *)puVar4[1] < puVar3) {
              if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                (**(code **)(*param_2 + 0x170))(param_2,&local_68,4);
              }
              else {
                FUN_14572512c(param_2,&local_68);
              }
            }
            else {
              local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)*puVar4);
              *puVar4 = (ulonglong)puVar3;
            }
            (**(code **)(*param_2 + 0x1a0))(param_2,uVar9);
            iVar12 = iVar12 + 1;
            iVar11 = iVar11 + -0x10;
            cVar10 = local_81;
          } while (iVar12 < local_50);
        }
      }
      else {
        local_68 = 0;
        uStack_60 = 0;
        FUN_146896800();
        if (0 < local_50) {
          iVar11 = 0;
          do {
            local_70 = 0;
            (**(code **)(*param_2 + 0x150))(param_2,&local_70);
            if (local_70 == 0) {
              uVar15 = 0;
            }
            else {
              (**(code **)(*param_2 + 0x198))(param_2);
              uVar15 = local_70;
            }
            uVar6 = uStack_60;
            lVar16 = (longlong)(int)uStack_60;
            uVar7 = (int)uStack_60 + 1;
            uStack_60 = CONCAT44(uStack_60._4_4_,uVar7);
            if (uStack_60._4_4_ < uVar7) {
              FUN_146896856(&local_68,uVar6 & 0xffffffff);
            }
            *(ulonglong *)(local_68 + lVar16 * 0x10) = uVar15;
            *(undefined8 *)(local_68 + 8 + lVar16 * 0x10) = 0;
            iVar11 = iVar11 + 1;
          } while (iVar11 < local_50);
        }
        FUN_1459cb75c(param_1);
        local_80 = local_68;
        local_78 = (int)uStack_60;
        iVar11 = 0;
        FUN_14688c712(param_1,0);
        if (0 < local_50) {
          iVar12 = -0x10;
          do {
            lVar5 = param_1[1];
            lVar16 = *param_1;
            uVar15 = local_70 >> 0x20;
            local_70 = local_70 & 0xffffffff00000000;
            puVar4 = (ulonglong *)param_2[1];
            puVar3 = (undefined4 *)*puVar4 + 1;
            if ((undefined4 *)puVar4[1] < puVar3) {
              if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                (**(code **)(*param_2 + 0x170))(param_2,&local_70,4);
              }
              else {
                FUN_14572512c(param_2,&local_70);
              }
            }
            else {
              local_70 = CONCAT44((int)uVar15,*(undefined4 *)*puVar4);
              *puVar4 = (ulonglong)puVar3;
            }
            lVar14 = (longlong)((int)lVar5 + iVar12);
            lVar5 = *(longlong *)(lVar16 + lVar14);
            if ((lVar5 == 0) && (0 < (int)local_70)) {
              lVar16 = (**(code **)(*param_2 + 0x28))(param_2);
              (**(code **)(*param_2 + 0x1a0))(param_2,(int)local_70 + lVar16);
            }
            else if (lVar5 != 0) {
              FUN_14047320e(lVar5,param_2,(longlong)*(int *)(lVar16 + 8 + lVar14) + *param_1,0);
            }
            iVar11 = iVar11 + 1;
            iVar12 = iVar12 + -0x10;
          } while (iVar11 < local_50);
        }
        cVar10 = local_81;
        if (local_68 != 0) {
          FUN_1400020a8();
          cVar10 = local_81;
        }
      }
    }
  }
  else {
    FUN_14572541c(param_2);
  }
LAB_1427db186:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return cVar10 == '\0';
}



// FUNCTION 1427db1c5 FUN_1427db1c5 body=55 status=ok
// SIG undefined FUN_1427db1c5(void)

void FUN_1427db1c5(void)

{
  undefined8 uVar1;
  
  if (DAT_14c948d10 == 0) {
    uVar1 = FUN_140e8dd8e();
    DAT_14c948d10 = FUN_14171c317(FUN_146272918,uVar1,L"EPropertyBagPropertyType");
  }
  return;
}



// FUNCTION 1427db1fc FUN_1427db1fc body=55 status=ok
// SIG undefined FUN_1427db1fc(void)

void FUN_1427db1fc(void)

{
  undefined8 uVar1;
  
  if (DAT_14c948d28 == 0) {
    uVar1 = FUN_140e8dd8e();
    DAT_14c948d28 = FUN_14171c317(FUN_146272947,uVar1,L"EPropertyBagContainerType");
  }
  return;
}



// FUNCTION 1427db233 FUN_1427db233 body=55 status=ok
// SIG undefined FUN_1427db233(void)

void FUN_1427db233(void)

{
  undefined8 uVar1;
  
  if (DAT_14c948d58 == 0) {
    uVar1 = FUN_140e8dd8e();
    DAT_14c948d58 = FUN_14171c317(FUN_146272a0c,uVar1,L"EPropertyBagResult");
  }
  return;
}



// FUNCTION 1427db26a FUN_1427db26a body=55 status=ok
// SIG undefined FUN_1427db26a(void)

void FUN_1427db26a(void)

{
  undefined8 uVar1;
  
  if (DAT_14c948db8 == 0) {
    uVar1 = FUN_140e8dd8e();
    DAT_14c948db8 = FUN_14171c317(FUN_146272c00,uVar1,L"EPropertyBagMissingEnum");
  }
  return;
}



// FUNCTION 1427db2b0 FUN_1427db2b0 body=4061 status=ok
// SIG undefined FUN_1427db2b0(void)

/* WARNING: Type propagation algorithm not settling */

longlong * FUN_1427db2b0(longlong *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  void *_Dst;
  int iVar11;
  undefined2 *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  wchar_t *local_1a0;
  wchar_t *local_198;
  code *local_190;
  undefined1 *local_188;
  undefined ***local_180;
  code *local_178;
  code *local_170;
  longlong local_160;
  longlong *local_158;
  longlong *local_150;
  longlong *local_148;
  ulonglong local_140;
  undefined8 local_138;
  undefined8 local_130;
  GUID local_128 [5];
  longlong *local_d0;
  longlong local_b0;
  undefined **local_98;
  undefined1 local_90 [8];
  undefined **local_88;
  undefined1 local_80 [8];
  int local_78;
  int iStack_74;
  uint local_70;
  uint local_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_158 = param_1;
  if ((longlong)(int)param_1[1] == 0) {
    uVar18 = 0;
  }
  else {
    plVar4 = (longlong *)*param_1;
    plVar5 = plVar4 + (longlong)(int)param_1[1] * 6;
    uVar18 = 0;
    do {
      uVar9 = plVar4[2];
      uVar2 = plVar4[1] + 0x9ae16a3b2f90404f;
      uVar2 = ((uVar2 << 0x27 | uVar2 >> 0x19) + uVar9) * -0x651e95c4d06fbf91;
      uVar9 = ((uVar9 << 0x1b | uVar9 >> 0x25) * -0x651e95c4d06fbf91 + plVar4[1] +
               0x9ae16a3b2f90404f ^ uVar2) * -0x651e95c4d06fbf91;
      lVar10 = (uVar9 >> 0x2f ^ uVar2 ^ uVar9) * -0x651e95c4d06fbf91;
      local_78 = ((uint)((ulonglong)lVar10 >> 0x2f) ^ (uint)lVar10) * 0x2f90406f;
      lVar10 = plVar4[3];
      uVar13 = (uint)((ulonglong)lVar10 >> 0x10);
      uVar14 = (uint)lVar10 & 0xffff;
      iStack_74 = ((uint)lVar10 << 0x10 | uVar14) + (int)((ulonglong)lVar10 >> 0x20) +
                  (uVar13 << 0x13 | uVar13 & 0xffff) + (uVar14 >> 4);
      local_70 = (uint)*(byte *)(plVar4 + 4);
      local_6c = 0;
      if ((ulonglong)*(byte *)((longlong)plVar4 + 0x23) != 0) {
        uVar9 = 0;
        local_6c = 0;
        do {
          local_6c = local_6c ^
                     (uint)*(byte *)((longlong)plVar4 + uVar9 + 0x21) +
                     (local_6c >> 2) + local_6c * 0x40 + 0x9e3779b9;
          uVar9 = uVar9 + 1;
        } while (*(byte *)((longlong)plVar4 + 0x23) != uVar9);
      }
      if (*plVar4 == 0) {
        FUN_140056680(local_128,&DAT_149e01fe8);
      }
      else {
        local_128[0]._0_8_ = (undefined **)0x0;
        local_128[0].Data4[0] = '\0';
        local_128[0].Data4[1] = '\0';
        local_128[0].Data4[2] = '\0';
        local_128[0].Data4[3] = '\0';
        local_128[0].Data4[4] = '\0';
        local_128[0].Data4[5] = '\0';
        local_128[0].Data4[6] = '\0';
        local_128[0].Data4[7] = '\0';
        FUN_1401031ac(*plVar4,0,local_128);
      }
      uVar6 = local_128[0]._0_8_;
      iVar11 = local_128[0].Data4._0_4_ + -1;
      if (local_128[0].Data4._0_4_ == 0) {
        iVar11 = 0;
      }
      uVar3 = FUN_1447addd0(local_128[0]._0_8_,iVar11 * 2);
      if ((undefined **)uVar6 != (undefined **)0x0) {
        FUN_1400020a8(uVar6);
      }
      uVar9 = FUN_144859ac6(&local_78,0x10,uVar3);
      uVar18 = (uVar18 ^ uVar9) * -0x622015f714c7d297;
      uVar18 = (uVar18 >> 0x2f ^ uVar9 ^ uVar18) * -0x622015f714c7d297;
      uVar18 = (uVar18 >> 0x2f ^ uVar18) * -0x622015f714c7d297;
      plVar4 = plVar4 + 6;
    } while (plVar4 != plVar5);
  }
  FUN_140002266(&local_78,L"PropertyBag_%llx",uVar18);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c948e20);
  if (local_70 == 0) {
    puVar12 = &DAT_149dfb77a;
  }
  else {
    puVar12 = (undefined2 *)CONCAT44(iStack_74,local_78);
  }
  FUN_1446f470e(&local_130,puVar12,1);
  uVar6 = DAT_14c951640;
  uVar3 = FUN_141156bb2();
  local_1b0 = 0;
  local_1b8 = (wchar_t *)((ulonglong)local_1b8._4_4_ << 0x20);
  plVar4 = (longlong *)FUN_14283d079(uVar3,uVar6,local_130,1);
  if (plVar4 != (longlong *)0x0) {
    lVar10 = FUN_141156bb2();
    if ((*(int *)(lVar10 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
        lVar10 + 0x30)) goto LAB_1427db557;
  }
  if (local_70 == 0) {
    puVar12 = &DAT_149dfb77a;
  }
  else {
    puVar12 = (undefined2 *)CONCAT44(iStack_74,local_78);
  }
  FUN_1446f470e(&local_138,puVar12,1);
  plVar5 = (longlong *)FUN_146272d51(DAT_14c951640,local_138);
  plVar4 = plVar5 + 0x18;
  iVar11 = (int)local_158[1];
  lVar10 = *local_158;
  *(int *)(plVar5 + 0x19) = iVar11;
  local_150 = plVar5;
  if (iVar11 == 0 && *(int *)((longlong)plVar5 + 0xcc) == 0) {
    *(undefined4 *)((longlong)plVar5 + 0xcc) = 0;
  }
  else {
    FUN_1462733a6(plVar4,iVar11);
    FUN_1427ded14(plVar5[0x18],lVar10,iVar11);
    iVar11 = (int)plVar5[0x19];
  }
  if (iVar11 != 0) {
    lVar10 = *plVar4;
    lVar19 = 0;
    do {
      switch(*(undefined1 *)(lVar10 + 0x20 + lVar19)) {
      case 10:
        if (*(longlong *)(lVar10 + lVar19) != 0) {
          lVar8 = *(longlong *)(*(longlong *)(lVar10 + lVar19) + 0x10);
          lVar7 = FUN_140851d9a();
          if (((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar8 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
              lVar7 + 0x30)) goto switchD_1427db671_default;
        }
        lVar8 = DAT_14c948db8;
        if (DAT_14c948db8 == 0) {
          uVar6 = FUN_140e8dd8e();
          lVar8 = FUN_14171c317(FUN_146272c00,uVar6,L"EPropertyBagMissingEnum");
          DAT_14c948db8 = lVar8;
        }
        break;
      case 0xb:
        if (*(longlong *)(lVar10 + lVar19) != 0) {
          lVar8 = *(longlong *)(*(longlong *)(lVar10 + lVar19) + 0x10);
          if (DAT_14c948fa0 == 0) {
            local_98 = (undefined **)&DAT_1427db2a2;
            if (DAT_14c963f04 == '\0') {
              uVar6 = FUN_140011aa6();
              lVar7 = FUN_140011c0e(uVar6,0x250,8);
            }
            else {
              lVar7 = FUN_14001cc68(0x250,8);
            }
            DAT_14c948fa0 = lVar7;
            FUN_1446f470e(local_90,L"ScriptStruct",1);
            local_180 = &local_98;
            local_188 = &LAB_1468915ce;
            local_190 = FUN_1427dc742;
            local_1a0 = L"Engine";
            local_198 = (wchar_t *)CONCAT44(local_198._4_4_,199);
            local_1a8 = 0x10;
            local_1b0 = 0x10000020;
            local_1b8._0_4_ = 8;
            FUN_14574b4b2(lVar7);
            local_158 = DAT_14c927740;
            DAT_14c948fa0 = lVar7;
            if (DAT_14c927740 == (longlong *)0x0) {
              local_128[0]._0_8_ = FUN_1449e2820;
              local_170 = FUN_14081d0ea;
              local_178 = FUN_14081d0ea;
              local_180 = (undefined ***)local_128;
              local_188 = &LAB_146856450;
              local_190 = FUN_1427b121c;
              local_198 = L"Engine";
              local_1a0 = (wchar_t *)0x0;
              local_1a8 = CONCAT44(local_1a8._4_4_,0x10000021);
              local_1b0 = 8;
              local_1b8._0_4_ = 0x28;
              FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
            }
            lVar7 = DAT_14c948fa0;
            local_158 = DAT_14c927740;
            if (DAT_14c948f88 == 0) {
              local_88 = (undefined **)&DAT_1427db2a2;
              if (DAT_14c963f04 == '\0') {
                uVar6 = FUN_140011aa6();
                DAT_14c948f88 = FUN_140011c0e(uVar6,0x250,8);
              }
              else {
                DAT_14c948f88 = FUN_14001cc68(0x250,8);
              }
              local_160 = DAT_14c948f88;
              FUN_1446f470e(local_80,L"Struct",1);
              local_180 = &local_88;
              local_188 = &LAB_146891313;
              local_190 = FUN_146272f63;
              local_1a0 = L"Engine";
              local_198 = (wchar_t *)CONCAT44(local_198._4_4_,199);
              local_1a8 = 8;
              local_1b0 = 0x10000020;
              local_1b8._0_4_ = 8;
              FUN_14574b4b2(local_160);
              DAT_14c948f88 = local_160;
              local_148 = DAT_14c927740;
              if (DAT_14c927740 == (longlong *)0x0) {
                local_128[0]._0_8_ = FUN_1449e2820;
                local_170 = FUN_14081d0ea;
                local_178 = FUN_14081d0ea;
                local_180 = (undefined ***)local_128;
                local_188 = &LAB_146856450;
                local_190 = FUN_1427b121c;
                local_198 = L"Engine";
                local_1a0 = (wchar_t *)0x0;
                local_1a8 = CONCAT44(local_1a8._4_4_,0x10000021);
                local_1b0 = 8;
                local_1b8._0_4_ = 0x28;
                FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
                local_160 = DAT_14c948f88;
              }
              DAT_14c948f88 = local_160;
              local_148 = DAT_14c927740;
              uVar6 = FUN_1400163b0();
              local_1b8 = L"Struct";
              FUN_14574b446(uVar6,local_160,local_148,L"/Script/CoreUObject");
            }
            local_1b8 = L"ScriptStruct";
            FUN_14574b446(DAT_14c948f88,lVar7,local_158,L"/Script/CoreUObject");
            if (DAT_14c948fa0 == 0) goto LAB_1427db769;
          }
          if ((*(int *)(DAT_14c948fa0 + 0x38) <= *(int *)(lVar8 + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(DAT_14c948fa0 + 0x38) * 8) ==
              DAT_14c948fa0 + 0x30)) goto switchD_1427db671_default;
        }
LAB_1427db769:
        lVar8 = DAT_14c948dd0;
        if (DAT_14c948dd0 == 0) {
          uVar6 = FUN_140e8dd8e();
          lVar8 = FUN_140002ddd(FUN_146272c67,uVar6,L"PropertyBagMissingStruct");
          DAT_14c948dd0 = lVar8;
        }
        break;
      case 0xc:
      case 0xd:
        if (*(longlong *)(lVar10 + lVar19) == 0) goto LAB_1427db6b9;
        goto switchD_1427db671_default;
      case 0xe:
      case 0xf:
        if (*(longlong *)(lVar10 + lVar19) != 0) {
          lVar8 = *(longlong *)(*(longlong *)(lVar10 + lVar19) + 0x10);
          if (DAT_14c949118 == 0) {
            local_98 = (undefined **)FUN_140631fbe;
            if (DAT_14c963f04 == '\0') {
              uVar6 = FUN_140011aa6();
              lVar7 = FUN_140011c0e(uVar6,0x250,8);
            }
            else {
              lVar7 = FUN_14001cc68(0x250,8);
            }
            DAT_14c949118 = lVar7;
            FUN_1446f470e(local_90,L"Class",1);
            local_180 = &local_98;
            local_188 = &LAB_146891e90;
            local_190 = (code *)&LAB_146273097;
            local_1a0 = L"Engine";
            local_198 = (wchar_t *)CONCAT44(local_198._4_4_,199);
            local_1a8 = 0x20;
            local_1b0 = 0x10000000;
            local_1b8._0_4_ = 8;
            FUN_14574b4b2(lVar7);
            local_158 = DAT_14c951858;
            DAT_14c949118 = lVar7;
            if (DAT_14c951858 == (longlong *)0x0) {
              local_128[0]._0_8_ = FUN_1449e2820;
              local_170 = FUN_14081d0ea;
              local_178 = FUN_14081d0ea;
              local_180 = (undefined ***)local_128;
              local_188 = &LAB_1468c5283;
              local_190 = FUN_142809da0;
              local_198 = L"Engine";
              local_1a0 = (wchar_t *)0x400000000;
              local_1a8 = CONCAT44(local_1a8._4_4_,0x10000000);
              local_1b0 = 8;
              local_1b8._0_4_ = 0x50;
              FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
            }
            lVar7 = DAT_14c949118;
            local_158 = DAT_14c951858;
            if (DAT_14c948f88 == 0) {
              local_88 = (undefined **)&DAT_1427db2a2;
              if (DAT_14c963f04 == '\0') {
                uVar6 = FUN_140011aa6();
                DAT_14c948f88 = FUN_140011c0e(uVar6,0x250,8);
              }
              else {
                DAT_14c948f88 = FUN_14001cc68(0x250,8);
              }
              local_160 = DAT_14c948f88;
              FUN_1446f470e(local_80,L"Struct",1);
              local_180 = &local_88;
              local_188 = &LAB_146891313;
              local_190 = FUN_146272f63;
              local_1a0 = L"Engine";
              local_198 = (wchar_t *)CONCAT44(local_198._4_4_,199);
              local_1a8 = 8;
              local_1b0 = 0x10000020;
              local_1b8._0_4_ = 8;
              FUN_14574b4b2(local_160);
              DAT_14c948f88 = local_160;
              local_148 = DAT_14c927740;
              if (DAT_14c927740 == (longlong *)0x0) {
                local_128[0]._0_8_ = FUN_1449e2820;
                local_170 = FUN_14081d0ea;
                local_178 = FUN_14081d0ea;
                local_180 = (undefined ***)local_128;
                local_188 = &LAB_146856450;
                local_190 = FUN_1427b121c;
                local_198 = L"Engine";
                local_1a0 = (wchar_t *)0x0;
                local_1a8 = CONCAT44(local_1a8._4_4_,0x10000021);
                local_1b0 = 8;
                local_1b8._0_4_ = 0x28;
                FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
                local_160 = DAT_14c948f88;
              }
              DAT_14c948f88 = local_160;
              local_148 = DAT_14c927740;
              uVar6 = FUN_1400163b0();
              local_1b8 = L"Struct";
              FUN_14574b446(uVar6,local_160,local_148,L"/Script/CoreUObject");
            }
            local_1b8 = L"Class";
            FUN_14574b446(DAT_14c948f88,lVar7,local_158,L"/Script/CoreUObject");
            if (DAT_14c949118 == 0) goto LAB_1427db6b9;
          }
          if ((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(lVar8 + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) ==
              DAT_14c949118 + 0x30)) goto switchD_1427db671_default;
        }
LAB_1427db6b9:
        lVar8 = FUN_145c506aa();
        break;
      default:
        goto switchD_1427db671_default;
      }
      if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar8);
      }
      *(longlong *)(lVar10 + lVar19) = lVar8;
switchD_1427db671_default:
      plVar5 = local_150;
      lVar19 = lVar19 + 0x30;
    } while ((longlong)iVar11 * 0x30 != lVar19);
    uVar13 = *(uint *)(local_150 + 0x19);
    if (1 < (int)uVar13) {
      uVar18 = 0;
      do {
        uVar9 = uVar18 + 1;
        if ((int)uVar9 < (int)uVar13) {
          lVar10 = *(longlong *)(*plVar4 + 0x18 + uVar18 * 0x30);
          uVar18 = uVar9 & 0xffffffff;
          do {
            uVar14 = (uint)uVar18;
            if (*(longlong *)(*plVar4 + 0x18 + (longlong)(int)uVar14 * 0x30) == lVar10) {
              if (~uVar14 + uVar13 != 0) {
                _Dst = (void *)(*plVar4 + (longlong)(int)uVar14 * 0x30);
                memmove(_Dst,(void *)((longlong)_Dst + 0x30),
                        (longlong)(int)(~uVar14 + uVar13) * 0x30);
                uVar13 = *(uint *)(local_150 + 0x19);
              }
              *(uint *)(plVar5 + 0x19) = uVar13 - 1;
              FUN_146896b20(plVar4);
              uVar14 = uVar14 - 1;
              uVar13 = *(uint *)(plVar5 + 0x19);
            }
            uVar18 = (ulonglong)(uVar14 + 1);
          } while ((int)(uVar14 + 1) < (int)uVar13);
        }
        uVar18 = uVar9;
      } while ((longlong)uVar9 < (longlong)(int)(uVar13 - 1));
    }
    if (uVar13 != 0) {
      local_160 = *plVar4;
      local_158 = (longlong *)(local_160 + 0x50);
      uVar15 = 0;
      bVar20 = *(char *)(local_160 + 0x20) == '\0';
      uVar14 = 0;
      do {
        uVar18 = (ulonglong)uVar14;
        uVar1 = uVar14 + 1;
        if ((int)(uVar14 + 1) < (int)uVar13) {
          uVar1 = uVar13;
        }
        lVar10 = uVar18 * 0x30;
        plVar5 = local_158 + uVar18 * 6;
        uVar16 = uVar14;
        do {
          uVar18 = uVar18 + 1;
          uVar17 = uVar1;
          if ((longlong)(int)uVar13 <= (longlong)uVar18) break;
          lVar19 = *plVar5;
          uVar16 = uVar16 + 1;
          plVar5 = plVar5 + 6;
          uVar17 = uVar16;
        } while (bVar20 == ((char)lVar19 == '\0'));
        if (bVar20 == false) {
          if (uVar15 != uVar14) {
            memmove((void *)((longlong)(int)uVar15 * 0x30 + local_160),(void *)(lVar10 + local_160),
                    (longlong)(int)(uVar17 - uVar14) * 0x30);
          }
          uVar15 = uVar15 + (uVar17 - uVar14);
        }
        bVar20 = (bool)(bVar20 ^ 1);
        uVar14 = uVar17;
      } while ((longlong)uVar18 < (longlong)(int)uVar13);
      *(uint *)(local_150 + 0x19) = uVar15;
      if (0 < (int)uVar15) {
        uVar9 = (ulonglong)local_150 | 1;
        uVar18 = (ulonglong)local_150 & 0xfffffffffffffffe;
        uVar2 = (ulonglong)uVar15 + 1;
        lVar10 = (ulonglong)uVar15 * 0x30;
        do {
          lVar10 = lVar10 + -0x30;
          lVar19 = *plVar4;
          if (((*(int *)(lVar19 + 0xc + lVar10) == 0 && *(int *)(lVar19 + 8 + lVar10) == 0) &&
              *(int *)(lVar19 + 0x10 + lVar10) == 0) && *(int *)(lVar19 + 0x14 + lVar10) == 0) {
            lVar8 = lVar19 + lVar10;
            local_128[0]._0_8_ = (undefined **)0x0;
            local_128[0].Data4[0] = '\0';
            local_128[0].Data4[1] = '\0';
            local_128[0].Data4[2] = '\0';
            local_128[0].Data4[3] = '\0';
            local_128[0].Data4[4] = '\0';
            local_128[0].Data4[5] = '\0';
            local_128[0].Data4[6] = '\0';
            local_128[0].Data4[7] = '\0';
            CoCreateGuid(local_128);
            *(ulong *)(lVar8 + 8) = local_128[0].Data1;
            *(undefined4 *)(lVar8 + 0xc) = local_128[0]._4_4_;
            *(undefined4 *)(lVar8 + 0x10) = local_128[0].Data4._0_4_;
            *(undefined4 *)(lVar8 + 0x14) = local_128[0].Data4._4_4_;
          }
          local_140 = uVar9;
          if ((uVar18 != 0) && (DAT_14c950c29 == '\x01')) {
            FUN_1456cec3c(uVar18);
          }
          lVar8 = FUN_14153fbcb(lVar19 + lVar10,&local_140);
          if (lVar8 != 0) {
            *(byte *)(lVar8 + 0x38) = *(byte *)(lVar8 + 0x38) | 1;
            (**(code **)(*local_150 + 0x2a0))(local_150,lVar8);
            *(longlong *)(lVar19 + 0x28 + lVar10) = lVar8;
          }
          uVar2 = uVar2 - 1;
        } while (1 < uVar2);
      }
    }
  }
  plVar4 = local_150;
  (**(code **)(*local_150 + 0x310))(local_150,0);
  (**(code **)(*plVar4 + 0x2a8))(plVar4);
  FUN_144869430(local_128);
  local_128[0]._0_8_ = &PTR_FUN_149e69f40;
  (**(code **)(*plVar4 + 0x2b8))(plVar4,local_128,1);
  local_128[0]._0_8_ = &PTR__purecall_149e35f70;
  if (local_d0 != (longlong *)0x0) {
    if (*local_d0 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_d0);
  }
  if (local_b0 != 0) {
    if (*(longlong *)(local_b0 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_b0);
  }
LAB_1427db557:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c948e20);
  if (CONCAT44(iStack_74,local_78) != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar4;
}



// FUNCTION 1427dc2a7 FUN_1427dc2a7 body=41 status=ok
// SIG undefined FUN_1427dc2a7(void)

void FUN_1427dc2a7(void)

{
  DAT_14c948ec0 = 0;
  if (DAT_14c948eb8 != 0) {
    FUN_1400020a8();
  }
  FUN_145d6fe88();
  return;
}



// FUNCTION 1427dc2d0 FUN_1427dc2d0 body=41 status=ok
// SIG undefined FUN_1427dc2d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427dc2d0(void)

{
  _DAT_14c948f10 = 0;
  if (DAT_14c948f08 != 0) {
    FUN_1400020a8();
  }
  FUN_146172c4e();
  return;
}



// FUNCTION 1427dc308 FUN_1427dc308 body=45 status=ok
// SIG undefined FUN_1427dc308(void)

void FUN_1427dc308(void)

{
  if (DAT_14c948f50 != (longlong *)0x0) {
    (**(code **)(*DAT_14c948f50 + 8))(DAT_14c948f50,1);
  }
  DAT_14c948f50 = (longlong *)0x0;
  return;
}



// FUNCTION 1427dc336 FUN_1427dc336 body=10 status=ok
// SIG undefined FUN_1427dc336(void)

void FUN_1427dc336(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



// FUNCTION 1427dc34d FUN_1427dc34d body=409 status=ok
// SIG undefined FUN_1427dc34d(void)

void FUN_1427dc34d(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  longlong local_28;
  undefined1 local_1c [4];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *param_1;
  local_28 = lVar1;
  if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
    if (lVar1 == 0) goto LAB_1427dc3cd;
  }
  else {
    FUN_1456cec3c(lVar1);
  }
  if (DAT_14c9512b0 == 0) {
    local_40 = &local_18;
    local_18 = FUN_140631fbe;
    local_30 = &LAB_145834656;
    local_38 = &LAB_146272d4c;
    local_48 = &LAB_1468be089;
    local_50 = FUN_14609ba58;
    local_58 = L"Engine";
    local_60 = 0;
    local_68 = 0x10000000;
    local_70 = 8;
    local_78 = 0x410;
    FUN_14081cfa3(L"/Script/CoreUObject",L"LinkerPlaceholderClass",&DAT_14c9512b0,&DAT_1468be08e);
  }
  if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(DAT_14c9512b0 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14c9512b0 + 0x38) * 8) != DAT_14c9512b0 + 0x30)) {
    lVar2 = FUN_14001206a();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      local_18 = (code *)&local_28;
      FUN_146896004(lVar1 + 0x200,local_1c);
    }
  }
  else {
    local_18 = (code *)&local_28;
    FUN_146898006(lVar1 + 0x370,local_1c);
  }
LAB_1427dc3cd:
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427dc4e7 FUN_1427dc4e7 body=35 status=ok
// SIG undefined FUN_1427dc4e7(void)

void FUN_1427dc4e7(void)

{
  if (DAT_14c948f90 == 0) {
    DAT_14c948f90 = FUN_145e26bee();
  }
  return;
}



// FUNCTION 1427dc50a FUN_1427dc50a body=377 status=ok
// SIG undefined FUN_1427dc50a(void)

void FUN_1427dc50a(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  undefined8 *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = param_2;
  FUN_1427dc684();
  if (DAT_14c949410 != DAT_14c94943c) {
    lVar3 = *param_1;
    lVar4 = param_1[1];
    uVar11 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar10 = (uint)lVar3 & 0xffff;
    uVar6 = (uint)((ulonglong)lVar4 >> 0x10);
    uVar7 = (uint)lVar4 & 0xffff;
    uVar11 = (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar10) +
             (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar10 >> 4);
    puVar8 = &DAT_14c949440;
    if (DAT_14c949448 != (undefined *)0x0) {
      puVar8 = DAT_14c949448;
    }
    iVar2 = *(int *)(puVar8 + (ulonglong)
                              (DAT_14c949450 - 1U &
                              ((uVar11 >> 2) +
                               ((uint)lVar4 << 0x10 | uVar7) + (int)((ulonglong)lVar4 >> 0x20) +
                               (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar7 >> 4) + uVar11 * 0x40 +
                               0x9e3779b9 ^ uVar11)) * 4);
    while (iVar2 != -1) {
      lVar9 = (longlong)iVar2 * 0x20;
      lVar1 = DAT_14c949408 + lVar9;
      if ((*(longlong *)(DAT_14c949408 + lVar9) == lVar3) &&
         (*(longlong *)(DAT_14c949408 + 8 + lVar9) == lVar4)) {
        if ((lVar1 != 0) && (puVar5 = *(undefined8 **)(lVar1 + 0x10), puVar5 != (undefined8 *)0x0))
        {
          (**(code **)*puVar5)(puVar5,1);
        }
        break;
      }
      iVar2 = *(int *)(lVar1 + 0x18);
    }
  }
  local_38 = &local_48;
  local_40 = param_1;
  FUN_141529d90(&DAT_14c949408,local_2c,&local_40,0);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427dc684 FUN_1427dc684 body=152 status=ok
// SIG undefined FUN_1427dc684(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427dc684(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c949458) {
    FUN_144b3d300(&DAT_14c949458);
    if (DAT_14c949458 == -1) {
      DAT_14c949428 = 0;
      DAT_14c949430 = 0;
      DAT_14c949408 = 0;
      _DAT_14c949410 = 0;
      _DAT_14c949434 = 0xffffffff00000080;
      DAT_14c94943c = 0;
      DAT_14c949448 = 0;
      DAT_14c949450 = 0;
      atexit(FUN_1427deb1e);
      _Init_thread_footer(&DAT_14c949458);
      return;
    }
  }
  return;
}



// FUNCTION 1427dc71c FUN_1427dc71c body=27 status=ok
// SIG undefined FUN_1427dc71c(void)

byte FUN_1427dc71c(longlong param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = 1;
  if (((*(byte *)(param_2 + 0x28) & 5) != 0) && ((*(byte *)(param_2 + 0x28) & 0x20) == 0)) {
    bVar1 = (*(byte *)(param_1 + 0xb0) & 0x20) >> 5;
  }
  return bVar1;
}



// FUNCTION 1427dc742 FUN_1427dc742 body=151 status=ok
// SIG undefined FUN_1427dc742(void)

void FUN_1427dc742(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0xffffffff;
  puVar1[0x15] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  *puVar1 = &PTR_FUN_149e6bd00;
  *(undefined4 *)(puVar1 + 0x16) = 0;
  *(undefined1 *)((longlong)puVar1 + 0xb4) = 0;
  puVar1[0x17] = 0;
  return;
}



// FUNCTION 1427dc7e5 FUN_1427dc7e5 body=69 status=ok
// SIG undefined FUN_1427dc7e5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427dc7e5(void)

{
  _DAT_14c9490e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427dc827. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9490e8,1);
  return;
}



// FUNCTION 1427dc82a FUN_1427dc82a body=20 status=ok
// SIG undefined FUN_1427dc82a(void)

undefined8 FUN_1427dc82a(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x40) != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x120);
  }
  return 0;
}



// FUNCTION 1427dc83e FUN_1427dc83e body=57 status=ok
// SIG undefined FUN_1427dc83e(void)

longlong FUN_1427dc83e(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x40);
  if (plVar1 == (longlong *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = plVar1[0x22];
    if (lVar2 == 0) {
      (**(code **)(*plVar1 + 1000))(plVar1);
      lVar2 = plVar1[0x22];
    }
  }
  return lVar2;
}



// FUNCTION 1427dc87c FUN_1427dc87c body=1390 status=ok
// SIG undefined FUN_1427dc87c(void)

void FUN_1427dc87c(void)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined1 auStack_f8 [32];
  wchar_t *local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  wchar_t *local_c0;
  wchar_t *local_b8;
  code *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  code *local_98;
  code *local_90;
  longlong local_80;
  longlong local_78;
  code *local_70;
  undefined1 local_68 [8];
  code *local_60;
  undefined1 local_58 [8];
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar8 = 0;
  uVar2 = (ulonglong)DAT_14c9647dc;
  if ((int)DAT_14c9647dc < 1) {
    uVar2 = uVar8;
  }
  do {
    uVar7 = (uint)uVar8;
    if ((uint)uVar2 == uVar7) goto LAB_1427dcdbd;
    uVar6 = uVar8 & 0xffff;
    lVar4 = *(longlong *)(DAT_14c9647c8 + (uVar8 >> 0x10) * 8);
    plVar9 = *(longlong **)(lVar4 + uVar6 * 0x18);
    uVar8 = (ulonglong)(uVar7 + 1);
  } while (plVar9 == (longlong *)0x0);
  if (lVar4 + uVar6 * 0x18 != 0) {
    do {
      if (DAT_14c949118 == 0) {
        local_70 = FUN_140631fbe;
        if (DAT_14c963f04 == '\0') {
          uVar3 = FUN_140011aa6();
          lVar4 = FUN_140011c0e(uVar3,0x250,8);
        }
        else {
          lVar4 = FUN_14001cc68(0x250,8);
        }
        DAT_14c949118 = lVar4;
        FUN_1446f470e(local_68,L"Class",1);
        local_a8 = &LAB_146891e90;
        local_b0 = (code *)&LAB_146273097;
        local_c0 = L"Engine";
        local_b8 = (wchar_t *)CONCAT44(local_b8._4_4_,199);
        local_c8 = 0x20;
        local_d0 = 0x10000000;
        local_d8._0_4_ = 8;
        local_a0 = &local_70;
        FUN_14574b4b2(lVar4);
        DAT_14c949118 = lVar4;
        if (DAT_14c951858 == 0) {
          local_50 = FUN_1449e2820;
          local_90 = FUN_14081d0ea;
          local_98 = FUN_14081d0ea;
          local_a0 = &local_50;
          local_a8 = &LAB_1468c5283;
          local_b0 = FUN_142809da0;
          local_b8 = L"Engine";
          local_c0 = (wchar_t *)0x400000000;
          local_c8 = CONCAT44(local_c8._4_4_,0x10000000);
          local_d0 = 8;
          local_d8._0_4_ = 0x50;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
        }
        lVar1 = DAT_14c951858;
        lVar4 = DAT_14c949118;
        if (DAT_14c948f88 == 0) {
          local_60 = (code *)&DAT_1427db2a2;
          if (DAT_14c963f04 == '\0') {
            uVar3 = FUN_140011aa6();
            DAT_14c948f88 = FUN_140011c0e(uVar3,0x250,8);
          }
          else {
            DAT_14c948f88 = FUN_14001cc68(0x250,8);
          }
          local_80 = DAT_14c948f88;
          FUN_1446f470e(local_58,L"Struct",1);
          local_a0 = &local_60;
          local_a8 = &LAB_146891313;
          local_b0 = FUN_146272f63;
          local_c0 = L"Engine";
          local_b8 = (wchar_t *)CONCAT44(local_b8._4_4_,199);
          local_c8 = 8;
          local_d0 = 0x10000020;
          local_d8._0_4_ = 8;
          FUN_14574b4b2(local_80);
          DAT_14c948f88 = local_80;
          local_78 = DAT_14c927740;
          if (DAT_14c927740 == 0) {
            local_50 = FUN_1449e2820;
            local_90 = FUN_14081d0ea;
            local_98 = FUN_14081d0ea;
            local_a0 = &local_50;
            local_a8 = &LAB_146856450;
            local_b0 = FUN_1427b121c;
            local_b8 = L"Engine";
            local_c0 = (wchar_t *)0x0;
            local_c8 = CONCAT44(local_c8._4_4_,0x10000021);
            local_d0 = 8;
            local_d8._0_4_ = 0x28;
            FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
            local_80 = DAT_14c948f88;
          }
          DAT_14c948f88 = local_80;
          local_78 = DAT_14c927740;
          uVar3 = FUN_1400163b0();
          local_d8 = L"Struct";
          FUN_14574b446(uVar3,local_80,local_78,L"/Script/CoreUObject");
        }
        local_d8 = L"Class";
        FUN_14574b446(DAT_14c948f88,lVar4,lVar1,L"/Script/CoreUObject");
      }
      if ((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(plVar9[2] + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(plVar9[2] + 0x30) + (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) ==
          DAT_14c949118 + 0x30)) {
        if ((DAT_14c872a72 == '\0') &&
           (((*(uint *)(plVar9 + 1) >> 0x11 & 1) == 0 && (plVar9[0x22] == 0)))) {
          (**(code **)(*plVar9 + 1000))(plVar9);
        }
        if (((*(uint *)(plVar9 + 1) & 0x10) == 0) &&
           ((*(byte *)((longlong)plVar9 + 0xd6) & 0x40) == 0)) {
          FUN_1408a750e(plVar9,0);
        }
      }
      uVar5 = uVar7 + 1;
      if ((int)(uVar7 + 1) < (int)DAT_14c9647dc) {
        uVar5 = DAT_14c9647dc;
      }
      do {
        if (uVar5 - 1 == uVar7) goto LAB_1427dcdbd;
        uVar7 = uVar7 + 1;
        lVar4 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
        plVar9 = *(longlong **)(lVar4 + (ulonglong)(uVar7 & 0xffff) * 0x18);
      } while (plVar9 == (longlong *)0x0);
    } while (lVar4 + (ulonglong)(uVar7 & 0xffff) * 0x18 != 0);
  }
LAB_1427dcdbd:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1427dcdfa FUN_1427dcdfa body=628 status=ok
// SIG undefined FUN_1427dcdfa(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1427dcdfa(undefined8 param_1,longlong *param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  ushort uVar6;
  undefined2 *puVar7;
  longlong lVar8;
  ushort uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStack_1908 [32];
  wchar_t *local_18e8;
  char *local_18e0;
  undefined8 local_18d8 [10];
  char local_1888 [1032];
  undefined4 *local_1480;
  undefined4 *local_1478;
  undefined4 *local_1470;
  char local_1468;
  undefined4 local_1460 [512];
  undefined4 local_c60 [774];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1908;
  iVar1 = (int)param_2[1];
  if (iVar1 < 2) {
    uVar12 = 0;
  }
  else {
    uVar12 = 0;
    lVar8 = 0;
    while( true ) {
      uVar6 = *(ushort *)(*param_2 + lVar8);
      uVar11 = (ulonglong)uVar6;
      uVar9 = *(ushort *)((longlong)&DAT_149e01fe8 + lVar8);
      if (uVar6 != uVar9) break;
      if (uVar6 == 0) goto LAB_1427dce30;
LAB_1427dce93:
      lVar8 = lVar8 + 2;
    }
    if ((uVar9 | uVar6) < 0x80) {
      uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
      uVar10 = (ulonglong)uVar9;
      uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
      if ((&DAT_149e05da0)[uVar11] == (&DAT_149e05da0)[uVar10]) goto LAB_1427dce93;
    }
    uVar12 = 0;
    if (uVar6 != uVar9) {
      uVar11 = (ulonglong)(iVar1 - 1);
      if (iVar1 == 0) {
        uVar11 = uVar12;
      }
      do {
        if (*(short *)(*param_2 + uVar12) == 0x2f) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_1908);
        }
        uVar12 = uVar12 + 2;
      } while (uVar11 * 2 != uVar12);
      local_1480 = local_1460;
      local_1468 = '\0';
      local_1470 = local_c60;
      local_1478 = local_1480;
      uVar4 = FUN_146830e68(local_18d8,10,0);
      if (1 < uVar4) {
        uVar12 = 10;
        if (uVar4 < 10) {
          uVar12 = (ulonglong)uVar4;
        }
        uVar11 = 1;
        do {
          local_1888[0] = '\0';
          uVar2 = local_18d8[uVar11];
          local_18e0 = local_1888;
          memset(local_c60,0,0xc18);
          FUN_146830fc4(uVar2,local_c60);
          cVar3 = FUN_1467b7f14(local_c60,local_1888,0x400);
          if ((cVar3 != '\0') && (pcVar5 = strchr(local_1888,0x21), pcVar5 != (char *)0x0)) {
            local_18e0 = pcVar5 + 1;
          }
          FUN_146891d46(&local_1480);
          if (local_1470 <= local_1478 + 1) {
            FUN_140213274(&local_1480);
          }
          *local_1478 = 0xa000d;
          local_1478 = local_1478 + 1;
          uVar11 = uVar11 + 1;
        } while (uVar12 != uVar11);
      }
      if ((int)param_2[1] == 0) {
        puVar7 = &DAT_149dfb77a;
      }
      else {
        puVar7 = (undefined2 *)*param_2;
      }
      local_18e8 = L"TryFindType";
      uVar12 = FUN_140277cc4(param_1,puVar7,param_3 | 0xc,2);
      if (local_1468 == '\x01') {
        FUN_1400020a8(local_1480);
      }
    }
  }
LAB_1427dce30:
  if ((local_48 ^ (ulonglong)auStack_1908) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12;
}



// FUNCTION 1427dd092 FUN_1427dd092 body=1254 status=ok
// SIG undefined FUN_1427dd092(void)

void FUN_1427dd092(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_108 [32];
  wchar_t *local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  wchar_t *local_d0;
  wchar_t *local_c8;
  code *local_c0;
  undefined1 *local_b8;
  code **local_b0;
  code *local_a8;
  code *local_a0;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  code *local_70;
  undefined1 local_68 [8];
  code *local_60;
  undefined1 local_58 [8];
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar1 = DAT_14c949118;
  for (lVar4 = param_1; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x20)) {
    if (lVar1 == 0) {
      local_70 = FUN_140631fbe;
      if (DAT_14c963f04 == '\0') {
        uVar2 = FUN_140011aa6();
        DAT_14c949118 = FUN_140011c0e(uVar2,0x250,8);
      }
      else {
        DAT_14c949118 = FUN_14001cc68(0x250,8);
      }
      local_88 = DAT_14c949118;
      FUN_1446f470e(local_68,L"Class",1);
      local_b0 = &local_70;
      local_b8 = &LAB_146891e90;
      local_c0 = (code *)&LAB_146273097;
      local_d0 = L"Engine";
      local_c8 = (wchar_t *)CONCAT44(local_c8._4_4_,199);
      local_d8 = 0x20;
      local_e0 = 0x10000000;
      local_e8._0_4_ = 8;
      FUN_14574b4b2(local_88);
      DAT_14c949118 = local_88;
      local_78 = DAT_14c951858;
      if (DAT_14c951858 == 0) {
        local_50 = FUN_1449e2820;
        local_a0 = FUN_14081d0ea;
        local_a8 = FUN_14081d0ea;
        local_b0 = &local_50;
        local_b8 = &LAB_1468c5283;
        local_c0 = FUN_142809da0;
        local_c8 = L"Engine";
        local_d0 = (wchar_t *)0x400000000;
        local_d8 = CONCAT44(local_d8._4_4_,0x10000000);
        local_e0 = 8;
        local_e8._0_4_ = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
        local_88 = DAT_14c949118;
      }
      DAT_14c949118 = local_88;
      local_78 = DAT_14c951858;
      if (DAT_14c948f88 == 0) {
        local_60 = (code *)&DAT_1427db2a2;
        if (DAT_14c963f04 == '\0') {
          uVar2 = FUN_140011aa6();
          DAT_14c948f88 = FUN_140011c0e(uVar2,0x250,8);
        }
        else {
          DAT_14c948f88 = FUN_14001cc68(0x250,8);
        }
        local_90 = DAT_14c948f88;
        FUN_1446f470e(local_58,L"Struct",1);
        local_b0 = &local_60;
        local_b8 = &LAB_146891313;
        local_c0 = FUN_146272f63;
        local_d0 = L"Engine";
        local_c8 = (wchar_t *)CONCAT44(local_c8._4_4_,199);
        local_d8 = 8;
        local_e0 = 0x10000020;
        local_e8._0_4_ = 8;
        FUN_14574b4b2(local_90);
        DAT_14c948f88 = local_90;
        local_80 = DAT_14c927740;
        if (DAT_14c927740 == 0) {
          local_50 = FUN_1449e2820;
          local_a0 = FUN_14081d0ea;
          local_a8 = FUN_14081d0ea;
          local_b0 = &local_50;
          local_b8 = &LAB_146856450;
          local_c0 = FUN_1427b121c;
          local_c8 = L"Engine";
          local_d0 = (wchar_t *)0x0;
          local_d8 = CONCAT44(local_d8._4_4_,0x10000021);
          local_e0 = 8;
          local_e8._0_4_ = 0x28;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
          local_90 = DAT_14c948f88;
        }
        DAT_14c948f88 = local_90;
        local_80 = DAT_14c927740;
        uVar2 = FUN_1400163b0();
        local_e8 = L"Struct";
        FUN_14574b446(uVar2,local_90,local_80,L"/Script/CoreUObject");
      }
      local_e8 = L"Class";
      FUN_14574b446(DAT_14c948f88,local_88,local_78,L"/Script/CoreUObject");
      lVar1 = DAT_14c949118;
    }
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_1427dd4f7;
  }
  lVar4 = 0;
LAB_1427dd4f7:
  if ((*(byte *)(param_1 + 0xb1) & 4) == 0) {
    pcVar3 = FUN_140183844;
LAB_1427dd509:
    *(code **)(param_1 + 0xd8) = pcVar3;
  }
  else if ((longlong)*(int *)(lVar4 + 0x1f8) != 0) {
    plVar5 = *(longlong **)(lVar4 + 0x1f0);
    lVar4 = (longlong)*(int *)(lVar4 + 0x1f8) << 4;
    do {
      if (*plVar5 == *(longlong *)(param_1 + 0x18)) {
        if (plVar5 != (longlong *)0x0) {
          pcVar3 = (code *)plVar5[1];
          goto LAB_1427dd509;
        }
        break;
      }
      plVar5 = plVar5 + 2;
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427dd579 FUN_1427dd579 body=129 status=ok
// SIG undefined FUN_1427dd579(void)

void FUN_1427dd579(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0xffffffff;
  puVar1[0x15] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  *puVar1 = &PTR_FUN_149e6e840;
  return;
}



// FUNCTION 1427dd624 FUN_1427dd624 body=161 status=ok
// SIG undefined FUN_1427dd624(void)

void FUN_1427dd624(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  
  if (*param_1 == 0) {
    return;
  }
  uVar6 = 0;
  (**(code **)(*param_2 + 0x88))(param_2,param_1,0,0);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar5 = *param_2;
  if (*(code **)(lVar5 + 0x38) != (code *)&LAB_144809cfe) {
    bVar3 = (**(code **)(lVar5 + 0x38))(param_2);
    uVar6 = (uint)bVar3 * 2;
    lVar5 = *param_2;
  }
  if (*(code **)(lVar5 + 0x48) == (code *)&LAB_144809d02) {
    uVar4 = 0;
  }
  else {
    bVar3 = (**(code **)(lVar5 + 0x48))(param_2);
    uVar4 = (uint)bVar3;
  }
  (*(code *)(&PTR_FUN_149eb1110)[uVar4 | uVar6])(param_2,lVar1,lVar2,0);
  return;
}



// FUNCTION 1427dd768 FUN_1427dd768 body=743 status=ok
// SIG undefined FUN_1427dd768(void)

undefined8
FUN_1427dd768(longlong param_1,longlong param_2,longlong *param_3,longlong param_4,
             undefined8 param_5)

{
  char *pcVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  ulonglong *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  char cVar10;
  longlong *plVar11;
  double *pdVar12;
  undefined1 auStack_58 [40];
  double local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  piVar6 = (int *)FUN_1400760d0(&DAT_14c87eb00,*(undefined4 *)(param_2 + 0xc));
  uVar8 = 0;
  if ((piVar6 == (int *)0x0) || (*(int *)(param_2 + 0x10) != 0)) goto switchD_1427dd7d5_caseD_5;
  switch(*piVar6) {
  case 1:
    if (0 < *(int *)(*(longlong *)
                      (&DAT_14c952ad0 + (longlong)((int)*(uint *)(param_2 + 8) >> 0xd) * 8) + 8 +
                    (ulonglong)(*(uint *)(param_2 + 8) & 0x1fff) * 0xc)) goto LAB_1427dd843;
  case 0x17:
    plVar11 = *(longlong **)(*param_3 + 8);
    puVar7 = (ulonglong *)plVar11[1];
    pcVar1 = (char *)*puVar7 + 1;
    if ((char *)puVar7[1] < pcVar1) {
      (**(code **)(*plVar11 + 0x170))(plVar11,&local_30,1);
      cVar10 = local_30._0_1_;
    }
    else {
      cVar10 = *(char *)*puVar7;
      *puVar7 = (ulonglong)pcVar1;
    }
    uVar5 = (int)cVar10;
    break;
  case 2:
    plVar11 = *(longlong **)(*param_3 + 8);
    puVar7 = (ulonglong *)plVar11[1];
    puVar3 = (undefined4 *)*puVar7 + 1;
    if ((undefined4 *)puVar7[1] < puVar3) {
      if ((*(byte *)((longlong)plVar11 + 0x2a) & 2) == 0) {
        (**(code **)(*plVar11 + 0x170))(plVar11,&local_30,4);
      }
      else {
        FUN_14572512c(plVar11,&local_30);
      }
    }
    else {
      local_30 = (double)CONCAT44(local_30._4_4_,*(undefined4 *)*puVar7);
      *puVar7 = (ulonglong)puVar3;
    }
    *(float *)((longlong)*(int *)(param_1 + 0x34) * (longlong)*(int *)(param_2 + 0x40) +
              param_4 + *(int *)(param_1 + 0x44)) = local_30._0_4_;
    uVar8 = 1;
    goto switchD_1427dd7d5_caseD_5;
  case 3:
    *(uint *)((longlong)*(int *)(param_1 + 0x34) * (longlong)*(int *)(param_2 + 0x40) +
             param_4 + *(int *)(param_1 + 0x44)) = (uint)*(byte *)(param_2 + 0x71);
    goto LAB_1427dd9ed;
  case 4:
    plVar11 = *(longlong **)(*param_3 + 8);
    puVar7 = (ulonglong *)plVar11[1];
    puVar3 = (undefined4 *)*puVar7 + 1;
    if ((undefined4 *)puVar7[1] < puVar3) {
      if ((*(byte *)((longlong)plVar11 + 0x2a) & 2) == 0) {
        (**(code **)(*plVar11 + 0x170))(plVar11,&local_30,4);
      }
      else {
        FUN_14572512c(plVar11,&local_30);
      }
    }
    else {
      local_30 = (double)CONCAT44(local_30._4_4_,*(undefined4 *)*puVar7);
      *puVar7 = (ulonglong)puVar3;
    }
    uVar5 = (uint)local_30._0_4_;
    break;
  case 5:
  case 6:
  case 7:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x15:
    goto switchD_1427dd7d5_caseD_5;
  case 8:
    plVar11 = *(longlong **)(*param_3 + 8);
    puVar7 = (ulonglong *)plVar11[1];
    pdVar12 = (double *)*puVar7 + 1;
    if ((double *)puVar7[1] < pdVar12) {
      if ((*(byte *)((longlong)plVar11 + 0x2a) & 2) == 0) {
        (**(code **)(*plVar11 + 0x170))(plVar11,&local_30,8);
      }
      else {
        FUN_146821949(plVar11,&local_30);
      }
    }
    else {
      local_30 = *(double *)*puVar7;
      *puVar7 = (ulonglong)pdVar12;
    }
    uVar5 = (uint)local_30;
    break;
  case 0x14:
    FUN_1408383eb(*(undefined8 *)(*param_3 + 8),&local_30);
    uVar5 = (uint)local_30._0_4_;
    break;
  case 0x16:
    FUN_1458ec23e(*param_3,&local_30);
    uVar5 = (int)(short)local_30._0_2_;
    break;
  case 0x18:
    plVar11 = *(longlong **)(*param_3 + 8);
    puVar7 = (ulonglong *)plVar11[1];
    pdVar12 = (double *)*puVar7 + 1;
    if ((double *)puVar7[1] < pdVar12) {
      if ((*(byte *)((longlong)plVar11 + 0x2a) & 2) == 0) {
        lVar9 = *plVar11;
        uVar8 = 8;
LAB_1427dda4e:
        (**(code **)(lVar9 + 0x170))(plVar11,&local_30,uVar8);
      }
      else {
        FUN_146821949(plVar11,&local_30);
      }
    }
    else {
      local_30 = *(double *)*puVar7;
LAB_1427dd9c6:
      *puVar7 = (ulonglong)pdVar12;
    }
    goto LAB_1427dd9c9;
  case 0x19:
    plVar11 = *(longlong **)(*param_3 + 8);
    puVar7 = (ulonglong *)plVar11[1];
    pdVar12 = (double *)((undefined4 *)*puVar7 + 1);
    if (pdVar12 <= (double *)puVar7[1]) {
      local_30 = (double)CONCAT44(local_30._4_4_,*(undefined4 *)*puVar7);
      goto LAB_1427dd9c6;
    }
    if ((*(byte *)((longlong)plVar11 + 0x2a) & 2) == 0) {
      lVar9 = *plVar11;
      uVar8 = 4;
      goto LAB_1427dda4e;
    }
    FUN_14572512c(plVar11,&local_30);
LAB_1427dd9c9:
    uVar5 = (uint)local_30._0_4_;
    break;
  case 0x1a:
    plVar11 = *(longlong **)(*param_3 + 8);
    puVar7 = (ulonglong *)plVar11[1];
    puVar2 = (undefined2 *)*puVar7 + 1;
    if ((undefined2 *)puVar7[1] < puVar2) {
      if ((*(byte *)((longlong)plVar11 + 0x2a) & 2) == 0) {
        (**(code **)(*plVar11 + 0x170))(plVar11,&local_30,2);
      }
      else {
        FUN_1457251a8(plVar11,&local_30);
      }
    }
    else {
      local_30 = (double)CONCAT62(local_30._2_6_,*(undefined2 *)*puVar7);
      *puVar7 = (ulonglong)puVar2;
    }
    uVar5 = (uint)local_30._0_2_;
    break;
  default:
    uVar8 = 0;
    if (*piVar6 != 0x22) goto switchD_1427dd7d5_caseD_5;
LAB_1427dd843:
    uVar4 = FUN_14281294c(param_3,param_5,param_2);
    *(undefined4 *)
     ((longlong)*(int *)(param_1 + 0x34) * (longlong)*(int *)(param_2 + 0x40) +
     param_4 + *(int *)(param_1 + 0x44)) = uVar4;
    goto LAB_1427dd9ed;
  }
  *(uint *)((longlong)*(int *)(param_1 + 0x34) * (longlong)*(int *)(param_2 + 0x40) +
           param_4 + *(int *)(param_1 + 0x44)) = uVar5;
LAB_1427dd9ed:
  uVar8 = 3;
switchD_1427dd7d5_caseD_5:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 1427ddbb4 FUN_1427ddbb4 body=989 status=ok
// SIG undefined FUN_1427ddbb4(void)

undefined8
FUN_1427ddbb4(longlong param_1,longlong param_2,longlong *param_3,longlong param_4,
             undefined8 param_5)

{
  char *pcVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  ulonglong *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  char cVar10;
  longlong *plVar11;
  double *pdVar12;
  undefined1 auStack_58 [40];
  double local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  piVar6 = (int *)FUN_1400760d0(&DAT_14c87eb00,*(undefined4 *)(param_2 + 0xc));
  uVar8 = 0;
  if ((piVar6 == (int *)0x0) || (*(int *)(param_2 + 0x10) != 0)) goto switchD_1427ddc21_caseD_5;
  switch(*piVar6) {
  case 1:
    if (0 < *(int *)(*(longlong *)
                      (&DAT_14c952ad0 + (longlong)((int)*(uint *)(param_2 + 8) >> 0xd) * 8) + 8 +
                    (ulonglong)(*(uint *)(param_2 + 8) & 0x1fff) * 0xc)) goto LAB_1427ddc8f;
  case 0x17:
    plVar11 = *(longlong **)(*param_3 + 8);
    puVar7 = (ulonglong *)plVar11[1];
    pcVar1 = (char *)*puVar7 + 1;
    if ((char *)puVar7[1] < pcVar1) {
      (**(code **)(*plVar11 + 0x170))(plVar11,&local_30,1);
      cVar10 = local_30._0_1_;
    }
    else {
      cVar10 = *(char *)*puVar7;
      *puVar7 = (ulonglong)pcVar1;
    }
    uVar5 = (int)cVar10;
    break;
  case 2:
    plVar11 = *(longlong **)(*param_3 + 8);
    puVar7 = (ulonglong *)plVar11[1];
    pdVar12 = (double *)((undefined4 *)*puVar7 + 1);
    if ((double *)puVar7[1] < pdVar12) {
      if ((*(byte *)((longlong)plVar11 + 0x2a) & 2) == 0) {
        lVar9 = *plVar11;
        uVar8 = 4;
LAB_1427ddeb3:
        (**(code **)(lVar9 + 0x170))(plVar11,&local_30,uVar8);
      }
      else {
        FUN_14572512c(plVar11,&local_30);
      }
    }
    else {
      local_30 = (double)CONCAT44(local_30._4_4_,*(undefined4 *)*puVar7);
LAB_1427ddd39:
      *puVar7 = (ulonglong)pdVar12;
    }
    goto LAB_1427ddd3c;
  case 3:
    *(uint *)((longlong)*(int *)(param_1 + 0x34) * (longlong)*(int *)(param_2 + 0x40) +
             param_4 + *(int *)(param_1 + 0x44)) = (uint)*(byte *)(param_2 + 0x71);
    goto LAB_1427dde38;
  case 4:
    plVar11 = *(longlong **)(*param_3 + 8);
    puVar7 = (ulonglong *)plVar11[1];
    puVar3 = (undefined4 *)*puVar7 + 1;
    if ((undefined4 *)puVar7[1] < puVar3) {
      if ((*(byte *)((longlong)plVar11 + 0x2a) & 2) == 0) {
        (**(code **)(*plVar11 + 0x170))(plVar11,&local_30,4);
      }
      else {
        FUN_14572512c(plVar11,&local_30);
      }
    }
    else {
      local_30 = (double)CONCAT44(local_30._4_4_,*(undefined4 *)*puVar7);
      *puVar7 = (ulonglong)puVar3;
    }
    uVar4 = (undefined4)(longlong)local_30._0_4_;
    goto LAB_1427ddda2;
  case 5:
  case 6:
  case 7:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x15:
    goto switchD_1427ddc21_caseD_5;
  case 8:
    plVar11 = *(longlong **)(*param_3 + 8);
    puVar7 = (ulonglong *)plVar11[1];
    pdVar12 = (double *)*puVar7 + 1;
    if ((double *)puVar7[1] < pdVar12) {
      if ((*(byte *)((longlong)plVar11 + 0x2a) & 2) == 0) {
        (**(code **)(*plVar11 + 0x170))(plVar11,&local_30,8);
      }
      else {
        FUN_146821949(plVar11,&local_30);
      }
    }
    else {
      local_30 = *(double *)*puVar7;
      *puVar7 = (ulonglong)pdVar12;
    }
    uVar4 = (undefined4)(longlong)local_30;
    goto LAB_1427ddda2;
  case 0x14:
    FUN_1408383eb(*(undefined8 *)(*param_3 + 8),&local_30);
    uVar5 = (uint)local_30._0_4_;
    break;
  case 0x16:
    FUN_1458ec23e(*param_3,&local_30);
    uVar5 = (int)(short)local_30._0_2_;
    break;
  case 0x18:
    plVar11 = *(longlong **)(*param_3 + 8);
    puVar7 = (ulonglong *)plVar11[1];
    pdVar12 = (double *)*puVar7 + 1;
    if (pdVar12 <= (double *)puVar7[1]) {
      local_30 = *(double *)*puVar7;
      goto LAB_1427ddd39;
    }
    if ((*(byte *)((longlong)plVar11 + 0x2a) & 2) == 0) {
      lVar9 = *plVar11;
      uVar8 = 8;
      goto LAB_1427ddeb3;
    }
    FUN_146821949(plVar11,&local_30);
LAB_1427ddd3c:
    uVar5 = (uint)local_30._0_4_;
    break;
  case 0x19:
    plVar11 = *(longlong **)(*param_3 + 8);
    puVar7 = (ulonglong *)plVar11[1];
    puVar3 = (undefined4 *)*puVar7 + 1;
    if ((undefined4 *)puVar7[1] < puVar3) {
      if ((*(byte *)((longlong)plVar11 + 0x2a) & 2) == 0) {
        (**(code **)(*plVar11 + 0x170))(plVar11,&local_30,4);
      }
      else {
        FUN_14572512c(plVar11,&local_30);
      }
    }
    else {
      local_30 = (double)CONCAT44(local_30._4_4_,*(undefined4 *)*puVar7);
      *puVar7 = (ulonglong)puVar3;
    }
    *(float *)((longlong)*(int *)(param_1 + 0x34) * (longlong)*(int *)(param_2 + 0x40) +
              param_4 + *(int *)(param_1 + 0x44)) = local_30._0_4_;
    uVar8 = 1;
    goto switchD_1427ddc21_caseD_5;
  case 0x1a:
    plVar11 = *(longlong **)(*param_3 + 8);
    puVar7 = (ulonglong *)plVar11[1];
    puVar2 = (undefined2 *)*puVar7 + 1;
    if ((undefined2 *)puVar7[1] < puVar2) {
      if ((*(byte *)((longlong)plVar11 + 0x2a) & 2) == 0) {
        (**(code **)(*plVar11 + 0x170))(plVar11,&local_30,2);
      }
      else {
        FUN_1457251a8(plVar11,&local_30);
      }
    }
    else {
      local_30 = (double)CONCAT62(local_30._2_6_,*(undefined2 *)*puVar7);
      *puVar7 = (ulonglong)puVar2;
    }
    uVar5 = (uint)local_30._0_2_;
    break;
  default:
    uVar8 = 0;
    if (*piVar6 != 0x22) goto switchD_1427ddc21_caseD_5;
LAB_1427ddc8f:
    uVar4 = FUN_14281294c(param_3,param_5,param_2);
LAB_1427ddda2:
    *(undefined4 *)
     ((longlong)*(int *)(param_1 + 0x34) * (longlong)*(int *)(param_2 + 0x40) +
     param_4 + *(int *)(param_1 + 0x44)) = uVar4;
    goto LAB_1427dde38;
  }
  *(uint *)((longlong)*(int *)(param_1 + 0x34) * (longlong)*(int *)(param_2 + 0x40) +
           param_4 + *(int *)(param_1 + 0x44)) = uVar5;
LAB_1427dde38:
  uVar8 = 3;
switchD_1427ddc21_caseD_5:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 1427de006 FUN_1427de006 body=25 status=ok
// SIG undefined FUN_1427de006(void)

void FUN_1427de006(undefined8 param_1,undefined4 *param_2,wchar_t *param_3)

{
  longlong lVar1;
  
  lVar1 = _wtoi64(param_3);
  *param_2 = (int)lVar1;
  return;
}



// FUNCTION 1427de03e FUN_1427de03e body=572 status=ok
// SIG undefined FUN_1427de03e(void)

undefined8
FUN_1427de03e(longlong param_1,longlong param_2,longlong *param_3,longlong param_4,
             undefined8 param_5)

{
  char *pcVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  double *pdVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  int *piVar7;
  double dVar8;
  undefined8 uVar9;
  char cVar10;
  undefined1 auStack_58 [40];
  double local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  piVar7 = (int *)FUN_1400760d0(&DAT_14c87eb00,*(undefined4 *)(param_2 + 0xc));
  uVar9 = 0;
  if ((piVar7 == (int *)0x0) || (*(int *)(param_2 + 0x10) != 0)) goto switchD_14483b9ea_caseD_d2;
  switch(*piVar7) {
  case 1:
    if (0 < *(int *)(*(longlong *)
                      (&DAT_14c952ad0 + (longlong)((int)*(uint *)(param_2 + 8) >> 0xd) * 8) + 8 +
                    (ulonglong)(*(uint *)(param_2 + 8) & 0x1fff) * 0xc)) goto LAB_1427de119;
  case 0x17:
    plVar5 = *(longlong **)(*param_3 + 8);
    puVar6 = (ulonglong *)plVar5[1];
    pcVar1 = (char *)*puVar6 + 1;
    if ((char *)puVar6[1] < pcVar1) {
      (**(code **)(*plVar5 + 0x170))(plVar5,&local_30,1);
      cVar10 = local_30._0_1_;
    }
    else {
      cVar10 = *(char *)*puVar6;
      *puVar6 = (ulonglong)pcVar1;
    }
    dVar8 = (double)(longlong)cVar10;
    break;
  case 2:
    plVar5 = *(longlong **)(*param_3 + 8);
    puVar6 = (ulonglong *)plVar5[1];
    puVar3 = (undefined4 *)*puVar6 + 1;
    if ((undefined4 *)puVar6[1] < puVar3) {
      if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
        (**(code **)(*plVar5 + 0x170))(plVar5,&local_30,4);
      }
      else {
        FUN_14572512c(plVar5,&local_30);
      }
    }
    else {
      local_30 = (double)CONCAT44(local_30._4_4_,*(undefined4 *)*puVar6);
      *puVar6 = (ulonglong)puVar3;
    }
    dVar8 = (double)(longlong)(int)local_30._0_4_;
    break;
  case 3:
    *(ulonglong *)
     ((longlong)*(int *)(param_1 + 0x34) * (longlong)*(int *)(param_2 + 0x40) +
     param_4 + *(int *)(param_1 + 0x44)) = (ulonglong)*(byte *)(param_2 + 0x71);
    goto code_r0x0001427de2bf;
  case 4:
    plVar5 = *(longlong **)(*param_3 + 8);
    puVar6 = (ulonglong *)plVar5[1];
    puVar3 = (undefined4 *)*puVar6 + 1;
    if ((undefined4 *)puVar6[1] < puVar3) {
      if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
        (**(code **)(*plVar5 + 0x170))(plVar5,&local_30,4);
      }
      else {
        FUN_14572512c(plVar5,&local_30);
      }
    }
    else {
      local_30 = (double)CONCAT44(local_30._4_4_,*(undefined4 *)*puVar6);
      *puVar6 = (ulonglong)puVar3;
    }
    dVar8 = (double)(longlong)local_30._0_4_;
    break;
  case 5:
  case 6:
  case 7:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x15:
    goto switchD_14483b9ea_caseD_d2;
  case 8:
    plVar5 = *(longlong **)(*param_3 + 8);
    puVar6 = (ulonglong *)plVar5[1];
    pdVar4 = (double *)*puVar6 + 1;
    if ((double *)puVar6[1] < pdVar4) {
      if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
        (**(code **)(*plVar5 + 0x170))(plVar5,&local_30,8);
      }
      else {
        FUN_146821949(plVar5,&local_30);
      }
    }
    else {
      local_30 = *(double *)*puVar6;
      *puVar6 = (ulonglong)pdVar4;
    }
    dVar8 = (double)(longlong)local_30;
    break;
  case 0x14:
    FUN_1408383eb(*(undefined8 *)(*param_3 + 8),&local_30);
    *(double *)
     ((longlong)*(int *)(param_1 + 0x34) * (longlong)*(int *)(param_2 + 0x40) +
     param_4 + *(int *)(param_1 + 0x44)) = local_30;
    uVar9 = 1;
    goto switchD_14483b9ea_caseD_d2;
  case 0x16:
    FUN_1458ec23e(*param_3,&local_30);
    dVar8 = (double)(longlong)local_30._0_2_;
    break;
  case 0x18:
    plVar5 = *(longlong **)(*param_3 + 8);
    puVar6 = (ulonglong *)plVar5[1];
    pdVar4 = (double *)*puVar6 + 1;
    if ((double *)puVar6[1] < pdVar4) {
      if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
        (**(code **)(*plVar5 + 0x170))(plVar5,&local_30,8);
        dVar8 = local_30;
      }
      else {
        FUN_146821949(plVar5,&local_30);
        dVar8 = local_30;
      }
    }
    else {
      local_30 = *(double *)*puVar6;
      *puVar6 = (ulonglong)pdVar4;
      dVar8 = local_30;
    }
    break;
  case 0x19:
    plVar5 = *(longlong **)(*param_3 + 8);
    puVar6 = (ulonglong *)plVar5[1];
    puVar3 = (undefined4 *)*puVar6 + 1;
    if ((undefined4 *)puVar6[1] < puVar3) {
      if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
        (**(code **)(*plVar5 + 0x170))(plVar5,&local_30,4);
      }
      else {
        FUN_14572512c(plVar5,&local_30);
      }
    }
    else {
      local_30 = (double)CONCAT44(local_30._4_4_,*(undefined4 *)*puVar6);
      *puVar6 = (ulonglong)puVar3;
    }
    dVar8 = (double)((ulonglong)local_30 & 0xffffffff);
    break;
  case 0x1a:
    plVar5 = *(longlong **)(*param_3 + 8);
    puVar6 = (ulonglong *)plVar5[1];
    puVar2 = (undefined2 *)*puVar6 + 1;
    if ((undefined2 *)puVar6[1] < puVar2) {
      if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
        (**(code **)(*plVar5 + 0x170))(plVar5,&local_30,2);
      }
      else {
        FUN_1457251a8(plVar5,&local_30);
      }
    }
    else {
      local_30 = (double)CONCAT62(local_30._2_6_,*(undefined2 *)*puVar6);
      *puVar6 = (ulonglong)puVar2;
    }
    dVar8 = (double)((ulonglong)local_30 & 0xffff);
    break;
  default:
    uVar9 = 0;
    if (*piVar7 != 0x22) goto switchD_14483b9ea_caseD_d2;
LAB_1427de119:
    dVar8 = (double)FUN_14281294c(param_3,param_5,param_2);
  }
  *(double *)
   ((longlong)*(int *)(param_1 + 0x34) * (longlong)*(int *)(param_2 + 0x40) +
   param_4 + *(int *)(param_1 + 0x44)) = dVar8;
code_r0x0001427de2bf:
  uVar9 = 3;
switchD_14483b9ea_caseD_d2:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 1427de446 FUN_1427de446 body=1069 status=ok
// SIG undefined FUN_1427de446(void)

undefined8
FUN_1427de446(longlong param_1,longlong param_2,longlong *param_3,longlong param_4,
             undefined8 param_5)

{
  char *pcVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  double *pdVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  int *piVar7;
  double dVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  char cVar11;
  ulonglong uVar12;
  undefined1 auStack_58 [40];
  double local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  piVar7 = (int *)FUN_1400760d0(&DAT_14c87eb00,*(undefined4 *)(param_2 + 0xc));
  uVar10 = 0;
  if ((piVar7 == (int *)0x0) || (*(int *)(param_2 + 0x10) != 0)) goto switchD_1427de4b3_caseD_5;
  switch(*piVar7) {
  case 1:
    if (0 < *(int *)(*(longlong *)
                      (&DAT_14c952ad0 + (longlong)((int)*(uint *)(param_2 + 8) >> 0xd) * 8) + 8 +
                    (ulonglong)(*(uint *)(param_2 + 8) & 0x1fff) * 0xc)) goto LAB_1427de521;
  case 0x17:
    plVar5 = *(longlong **)(*param_3 + 8);
    puVar6 = (ulonglong *)plVar5[1];
    pcVar1 = (char *)*puVar6 + 1;
    if ((char *)puVar6[1] < pcVar1) {
      (**(code **)(*plVar5 + 0x170))(plVar5,&local_30,1);
      cVar11 = local_30._0_1_;
    }
    else {
      cVar11 = *(char *)*puVar6;
      *puVar6 = (ulonglong)pcVar1;
    }
    dVar8 = (double)(longlong)cVar11;
    break;
  case 2:
    plVar5 = *(longlong **)(*param_3 + 8);
    puVar6 = (ulonglong *)plVar5[1];
    puVar3 = (undefined4 *)*puVar6 + 1;
    if ((undefined4 *)puVar6[1] < puVar3) {
      if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
        (**(code **)(*plVar5 + 0x170))(plVar5,&local_30,4);
      }
      else {
        FUN_14572512c(plVar5,&local_30);
      }
    }
    else {
      local_30 = (double)CONCAT44(local_30._4_4_,*(undefined4 *)*puVar6);
      *puVar6 = (ulonglong)puVar3;
    }
    dVar8 = (double)(longlong)(int)local_30._0_4_;
    break;
  case 3:
    *(ulonglong *)
     ((longlong)*(int *)(param_1 + 0x34) * (longlong)*(int *)(param_2 + 0x40) +
     param_4 + *(int *)(param_1 + 0x44)) = (ulonglong)*(byte *)(param_2 + 0x71);
    goto LAB_1427de711;
  case 4:
    plVar5 = *(longlong **)(*param_3 + 8);
    puVar6 = (ulonglong *)plVar5[1];
    puVar3 = (undefined4 *)*puVar6 + 1;
    if ((undefined4 *)puVar6[1] < puVar3) {
      if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
        (**(code **)(*plVar5 + 0x170))(plVar5,&local_30,4);
      }
      else {
        FUN_14572512c(plVar5,&local_30);
      }
    }
    else {
      local_30 = (double)CONCAT44(local_30._4_4_,*(undefined4 *)*puVar6);
      *puVar6 = (ulonglong)puVar3;
    }
    uVar9 = (ulonglong)local_30._0_4_;
    uVar12 = (ulonglong)(local_30._0_4_ - 9.223372e+18);
    goto LAB_1427de68d;
  case 5:
  case 6:
  case 7:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x15:
    goto switchD_1427de4b3_caseD_5;
  case 8:
    plVar5 = *(longlong **)(*param_3 + 8);
    puVar6 = (ulonglong *)plVar5[1];
    pdVar4 = (double *)*puVar6 + 1;
    if ((double *)puVar6[1] < pdVar4) {
      if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
        (**(code **)(*plVar5 + 0x170))(plVar5,&local_30,8);
      }
      else {
        FUN_146821949(plVar5,&local_30);
      }
    }
    else {
      local_30 = *(double *)*puVar6;
      *puVar6 = (ulonglong)pdVar4;
    }
    uVar9 = (ulonglong)local_30;
    uVar12 = (ulonglong)(local_30 - 9.223372036854776e+18);
LAB_1427de68d:
    *(ulonglong *)
     ((longlong)*(int *)(param_1 + 0x34) * (longlong)*(int *)(param_2 + 0x40) +
     param_4 + *(int *)(param_1 + 0x44)) = uVar12 & (longlong)uVar9 >> 0x3f | uVar9;
    goto LAB_1427de711;
  case 0x14:
    FUN_1408383eb(*(undefined8 *)(*param_3 + 8),&local_30);
    dVar8 = local_30;
    break;
  case 0x16:
    FUN_1458ec23e(*param_3,&local_30);
    dVar8 = (double)(longlong)local_30._0_2_;
    break;
  case 0x18:
    plVar5 = *(longlong **)(*param_3 + 8);
    puVar6 = (ulonglong *)plVar5[1];
    pdVar4 = (double *)*puVar6 + 1;
    if ((double *)puVar6[1] < pdVar4) {
      if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
        (**(code **)(*plVar5 + 0x170))(plVar5,&local_30,8);
      }
      else {
        FUN_146821949(plVar5,&local_30);
      }
    }
    else {
      local_30 = *(double *)*puVar6;
      *puVar6 = (ulonglong)pdVar4;
    }
    *(double *)
     ((longlong)*(int *)(param_1 + 0x34) * (longlong)*(int *)(param_2 + 0x40) +
     param_4 + *(int *)(param_1 + 0x44)) = local_30;
    uVar10 = 1;
    goto switchD_1427de4b3_caseD_5;
  case 0x19:
    plVar5 = *(longlong **)(*param_3 + 8);
    puVar6 = (ulonglong *)plVar5[1];
    puVar3 = (undefined4 *)*puVar6 + 1;
    if ((undefined4 *)puVar6[1] < puVar3) {
      if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
        (**(code **)(*plVar5 + 0x170))(plVar5,&local_30,4);
      }
      else {
        FUN_14572512c(plVar5,&local_30);
      }
    }
    else {
      local_30 = (double)CONCAT44(local_30._4_4_,*(undefined4 *)*puVar6);
      *puVar6 = (ulonglong)puVar3;
    }
    dVar8 = (double)((ulonglong)local_30 & 0xffffffff);
    break;
  case 0x1a:
    plVar5 = *(longlong **)(*param_3 + 8);
    puVar6 = (ulonglong *)plVar5[1];
    puVar2 = (undefined2 *)*puVar6 + 1;
    if ((undefined2 *)puVar6[1] < puVar2) {
      if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
        (**(code **)(*plVar5 + 0x170))(plVar5,&local_30,2);
      }
      else {
        FUN_1457251a8(plVar5,&local_30);
      }
    }
    else {
      local_30 = (double)CONCAT62(local_30._2_6_,*(undefined2 *)*puVar6);
      *puVar6 = (ulonglong)puVar2;
    }
    dVar8 = (double)((ulonglong)local_30 & 0xffff);
    break;
  default:
    uVar10 = 0;
    if (*piVar7 != 0x22) goto switchD_1427de4b3_caseD_5;
LAB_1427de521:
    dVar8 = (double)FUN_14281294c(param_3,param_5,param_2);
  }
  *(double *)
   ((longlong)*(int *)(param_1 + 0x34) * (longlong)*(int *)(param_2 + 0x40) +
   param_4 + *(int *)(param_1 + 0x44)) = dVar8;
LAB_1427de711:
  uVar10 = 3;
switchD_1427de4b3_caseD_5:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10;
}



// FUNCTION 1427de8dc FUN_1427de8dc body=168 status=ok
// SIG undefined FUN_1427de8dc(void)

undefined8
FUN_1427de8dc(undefined8 param_1,longlong param_2,longlong *param_3,longlong param_4,
             longlong param_5)

{
  char *pcVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  undefined1 auStack_58 [39];
  char local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = *(longlong **)(*param_3 + 8);
  puVar3 = (ulonglong *)plVar2[1];
  pcVar1 = (char *)*puVar3 + 1;
  if ((char *)puVar3[1] < pcVar1) {
    (**(code **)(*plVar2 + 0x170))(plVar2,&local_31,1);
  }
  else {
    local_31 = *(char *)*puVar3;
    *puVar3 = (ulonglong)pcVar1;
  }
  *(float *)((longlong)*(int *)(param_2 + 0x34) * (longlong)*(int *)(param_5 + 0x40) +
            param_4 + *(int *)(param_2 + 0x44)) = (float)(int)local_31;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427de9fe FUN_1427de9fe body=29 status=ok
// SIG undefined FUN_1427de9fe(void)

void FUN_1427de9fe(undefined8 param_1,double *param_2,wchar_t *param_3)

{
  double dVar1;
  
  dVar1 = wcstod(param_3,(wchar_t **)0x0);
  *param_2 = dVar1;
  return;
}



// FUNCTION 1427dea22 FUN_1427dea22 body=168 status=ok
// SIG undefined FUN_1427dea22(void)

undefined8
FUN_1427dea22(undefined8 param_1,longlong param_2,longlong *param_3,longlong param_4,
             longlong param_5)

{
  char *pcVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  undefined1 auStack_58 [39];
  char local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = *(longlong **)(*param_3 + 8);
  puVar3 = (ulonglong *)plVar2[1];
  pcVar1 = (char *)*puVar3 + 1;
  if ((char *)puVar3[1] < pcVar1) {
    (**(code **)(*plVar2 + 0x170))(plVar2,&local_31,1);
  }
  else {
    local_31 = *(char *)*puVar3;
    *puVar3 = (ulonglong)pcVar1;
  }
  *(double *)
   ((longlong)*(int *)(param_2 + 0x34) * (longlong)*(int *)(param_5 + 0x40) +
   param_4 + *(int *)(param_2 + 0x44)) = (double)(int)local_31;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427deb1e FUN_1427deb1e body=423 status=ok
// SIG undefined FUN_1427deb1e(void)

void FUN_1427deb1e(void)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  uint *puVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  
  if (DAT_14c949430 == 0) {
    uVar15 = 1;
    uVar10 = 0;
    iVar11 = 0;
    iVar6 = 0;
  }
  else {
    puVar12 = &DAT_14c949418;
    if (DAT_14c949428 != (uint *)0x0) {
      puVar12 = DAT_14c949428;
    }
    uVar9 = *puVar12;
    if (uVar9 == 0) {
      iVar11 = DAT_14c949430 + 0x1e;
      if (-1 < DAT_14c949430 + -1) {
        iVar11 = DAT_14c949430 + -1;
      }
      uVar10 = 0;
      uVar7 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar7 = uVar10;
      }
      iVar11 = 0;
      do {
        if (uVar7 == uVar10) goto LAB_1427dec91;
        iVar11 = iVar11 + 0x20;
        uVar9 = puVar12[uVar10 + 1];
        uVar10 = uVar10 + 1;
      } while (uVar9 == 0);
    }
    else {
      uVar10 = 0;
      iVar11 = 0;
    }
    uVar15 = (ulonglong)(-uVar9 & uVar9);
    uVar7 = uVar15 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar6 = (iVar11 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    if (DAT_14c949430 <= iVar6) {
      iVar6 = DAT_14c949430;
    }
  }
  if (iVar6 < DAT_14c949430) {
    uVar9 = 0xffffffff;
    lVar8 = DAT_14c949408;
    iVar2 = DAT_14c949430;
    do {
      puVar1 = *(undefined8 **)(lVar8 + 0x10 + (longlong)iVar6 * 0x20);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
        lVar8 = DAT_14c949408;
        iVar2 = DAT_14c949430;
      }
      uVar9 = uVar9 & ~(uint)uVar15;
      puVar12 = DAT_14c949428;
      if (DAT_14c949428 == (uint *)0x0) {
        puVar12 = &DAT_14c949418;
      }
      iVar6 = (int)uVar10;
      lVar14 = (longlong)iVar6;
      uVar3 = puVar12[lVar14] & uVar9;
      if (uVar3 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar6) {
          iVar5 = iVar6;
        }
        if (iVar4 <= iVar6) break;
        lVar13 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar3 = puVar12[lVar14 + lVar13 + 1];
          if (uVar3 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar5 - lVar14 == lVar13) goto LAB_1427dec91;
        }
        uVar10 = (ulonglong)(iVar6 + (int)lVar13 + 1);
        uVar9 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar3 & uVar3);
      uVar7 = uVar15 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar6 = (iVar11 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_1427dec91:
  DAT_14c949450 = 0;
  if (DAT_14c949448 != 0) {
    FUN_1400020a8();
  }
  FUN_145d6b7d0();
  return;
}



// FUNCTION 1427decc6 FUN_1427decc6 body=77 status=ok
// SIG undefined FUN_1427decc6(void)

undefined8 FUN_1427decc6(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(undefined8 *)(*param_2 + 0x18);
  FUN_1400021e4(&local_18,param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427ded14 FUN_1427ded14 body=116 status=ok
// SIG undefined FUN_1427ded14(void)

void FUN_1427ded14(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  byte bVar10;
  longlong lVar11;
  
  if (param_3 != 0) {
    lVar11 = 0;
    bVar10 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_2 + lVar11);
      *(longlong *)(param_1 + lVar11) = lVar2;
      if ((lVar2 != 0 & bVar10) == 1) {
        FUN_1456cec3c();
        bVar10 = DAT_14c950c29;
      }
      lVar2 = param_1 + lVar11;
      lVar1 = param_2 + lVar11;
      *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
      uVar3 = *(undefined4 *)(lVar1 + 8);
      uVar4 = *(undefined4 *)(lVar1 + 0xc);
      uVar5 = *(undefined4 *)(lVar1 + 0x10);
      uVar6 = *(undefined4 *)(lVar1 + 0x14);
      uVar7 = *(undefined4 *)(lVar1 + 0x1c);
      uVar8 = *(undefined4 *)(lVar1 + 0x20);
      uVar9 = *(undefined4 *)(lVar1 + 0x24);
      *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(lVar1 + 0x18);
      *(undefined4 *)(lVar2 + 0x1c) = uVar7;
      *(undefined4 *)(lVar2 + 0x20) = uVar8;
      *(undefined4 *)(lVar2 + 0x24) = uVar9;
      *(undefined4 *)(lVar2 + 8) = uVar3;
      *(undefined4 *)(lVar2 + 0xc) = uVar4;
      *(undefined4 *)(lVar2 + 0x10) = uVar5;
      *(undefined4 *)(lVar2 + 0x14) = uVar6;
      lVar11 = lVar11 + 0x30;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1427ded96 FUN_1427ded96 body=85 status=ok
// SIG undefined FUN_1427ded96(void)

undefined8 * FUN_1427ded96(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  puVar2 = (undefined8 *)*param_2;
  *param_1 = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 1427dedeb FUN_1427dedeb body=106 status=ok
// SIG undefined FUN_1427dedeb(void)

void FUN_1427dedeb(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3);
      *(longlong *)(param_1 + lVar3) = lVar1;
      if ((lVar1 != 0 & bVar2) == 1) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      *(undefined1 *)(param_1 + lVar3 + 0xc) = *(undefined1 *)(param_2 + lVar3 + 0xc);
      *(undefined4 *)(param_1 + lVar3 + 8) = *(undefined4 *)(param_2 + lVar3 + 8);
      lVar3 = lVar3 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1427dee55 FUN_1427dee55 body=1140 status=ok
// SIG undefined FUN_1427dee55(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427dee55(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined **local_90;
  undefined8 uStack_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90 = (undefined **)0x0;
  uStack_88 = 0;
  local_98 = (undefined8 *)0x1;
  FUN_14282b410(L"/Script/CoreUObject",0,0,&PTR_FUN_149e6a260);
  _DAT_14c948cb0 = 0xaf47425ee21e1caa;
  uRam000000014c948cb8 = 0x4c44a8bb89bf6ad4;
  local_68 = 0xaf47425ee21e1caa;
  uStack_60 = 0x4c44a8bb89bf6ad4;
  _DAT_14c948cc0 = 0xe21e1caa;
  uRam000000014c948cc4 = 0xaf47425e;
  uRam000000014c948cc8 = 0x89bf6ad4;
  uRam000000014c948ccc = 0x4c44a8bb;
  FUN_141005458(&local_68,0,L"InstancedStructCustomVersion",0);
  atexit((_func_5014 *)&LAB_1427da5f0);
  DAT_14c948cd0 = 0;
  DAT_14c948cd8 = 0;
  atexit(FUN_1427da5fc);
  local_90 = (undefined **)0x0;
  uStack_88 = 0;
  local_98 = (undefined8 *)0x1;
  FUN_14282b410(L"/Script/CoreUObject",0,0,&PTR_FUN_149e6a320);
  local_90 = &PTR_FUN_149e6b460;
  uStack_88 = 4;
  local_98 = (undefined8 *)0x5;
  FUN_14282b410(L"/Script/CoreUObject",&PTR_FUN_149e6b5b0,2,&PTR_FUN_149e6b4e0);
  local_68 = 0xd5e249a3134a157e;
  uStack_60 = 0x98fe9e318d4e843c;
  _DAT_14c948e10 = 0x134a157e;
  uRam000000014c948e14 = 0xd5e249a3;
  uRam000000014c948e18 = 0x8d4e843c;
  uRam000000014c948e1c = 0x98fe9e31;
  FUN_141005458(&local_68,3,L"PropertyBagCustomVersion",0);
  atexit((_func_5014 *)((longlong)&DAT_1427db2a2 + 1));
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c948e20);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c948e20,4000);
  atexit((_func_5014 *)&LAB_1427dc28e);
  local_90 = (undefined **)0x0;
  uStack_88 = 0;
  local_98 = (undefined8 *)0x2;
  FUN_14282b410(L"/Script/CoreUObject",0,0,&PTR_FUN_149e6b780);
  DAT_14c948e98 = 0;
  DAT_14c948ea0 = 0;
  DAT_14c948e78 = 0;
  _DAT_14c948e80 = 0;
  _DAT_14c948ea4 = 0xffffffff00000080;
  DAT_14c948eac = 0;
  DAT_14c948eb8 = 0;
  DAT_14c948ec0 = 0;
  atexit(FUN_1427dc2a7);
  DAT_14c948ee8 = 0;
  DAT_14c948ef0 = 0;
  DAT_14c948ec8 = 0;
  _DAT_14c948ed0 = 0;
  _DAT_14c948ef4 = 0xffffffff00000080;
  _DAT_14c948efc = 0;
  DAT_14c948f08 = 0;
  _DAT_14c948f10 = 0;
  atexit(FUN_1427dc2d0);
  FUN_1446f470e(&local_70,L"TestUninitializedScriptStructMembersTest",1);
  FUN_1446f470e(&local_78,L"/Script/CoreUObject",1);
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_149e6e6d0;
  local_68 = local_78;
  uStack_60 = local_70;
  FUN_1427dc50a(&local_68,puVar1);
  uVar2 = FUN_145bdd13a(&DAT_14c950040);
  FUN_145bdd0b8(uVar2,FUN_140631fbe,1);
  local_98 = &DAT_14c948f70;
  local_90 = (undefined **)&local_68;
  FUN_14058d408(FUN_145a2282e,&LAB_146272f5e,L"/Script/CoreUObject",&DAT_149e6b8a2);
  local_98 = &DAT_14c948f88;
  local_90 = (undefined **)&local_68;
  FUN_14058d408(FUN_1427dc4e7,&LAB_146272fac,L"/Script/CoreUObject",L"UStruct");
  local_98 = &DAT_14c948fa0;
  local_90 = (undefined **)&local_68;
  FUN_14058d408(FUN_14156cd8b,&LAB_146271292,L"/Script/CoreUObject",L"UScriptStruct");
  local_98 = (undefined8 *)((ulonglong)local_98 & 0xffffffff00000000);
  FUN_14627302a(&DAT_14c9490e0,L"net.ValidateReplicatedPropertyRegistration",0,
                L"Warns if replicated properties were not registered in GetLifetimeReplicatedProps."
               );
  atexit(FUN_1427dc7e5);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c9490f0);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c9490f0,4000);
  atexit((_func_5014 *)&LAB_1427dcdeb);
  local_98 = &DAT_14c949118;
  local_90 = (undefined **)&local_68;
  FUN_14058d408(FUN_14156ba2d,&LAB_146272d4c,L"/Script/CoreUObject",L"UClass");
  local_98 = &DAT_14c9493c0;
  local_90 = (undefined **)&local_68;
  FUN_14058d408(FUN_141528330,&LAB_1462730a2,L"/Script/CoreUObject",L"UFunction");
  local_98 = &DAT_14c9493d8;
  local_90 = (undefined **)&local_68;
  FUN_14058d408(FUN_145e1f764,&LAB_1462730f0,L"/Script/CoreUObject",L"UDelegateFunction");
  local_98 = &DAT_14c9493f0;
  local_90 = (undefined **)&local_68;
  FUN_14058d408(FUN_145e1f823,&LAB_146273146,L"/Script/CoreUObject",L"USparseDelegateFunction");
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427df2cc FUN_1427df2cc body=102 status=ok
// SIG undefined FUN_1427df2cc(void)

void FUN_1427df2cc(undefined8 *param_1,byte param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(uint *)(param_1 + 2) = (uint)param_2;
  *(undefined2 *)((longlong)param_1 + 0x14) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  return;
}



// FUNCTION 1427df332 FUN_1427df332 body=1849 status=ok
// SIG undefined FUN_1427df332(void)

undefined4 FUN_1427df332(longlong param_1,longlong *param_2,undefined4 param_3,char param_4)

{
  undefined4 uVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined *puVar11;
  bool bVar12;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined *local_78;
  code *local_70;
  undefined8 local_60;
  undefined2 *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 == (longlong *)0x0) {
    FUN_140056680(&local_58);
  }
  else {
    FUN_1400021e4(param_2 + 4);
  }
  puVar8 = local_58;
  uVar2 = (int)uStack_50 - 1;
  if ((int)uStack_50 == 0) {
    uVar2 = 0;
  }
  if (0 < (int)uVar2) {
    uVar6 = 0;
    do {
      local_58[uVar6] = (ushort)((ushort)local_58[uVar6] - 0x41 < 0x1a) * 0x20 + local_58[uVar6];
      uVar6 = uVar6 + 1;
    } while (uVar2 != uVar6);
  }
  puVar7 = local_58;
  if ((int)uStack_50 == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  local_58 = (undefined2 *)0x0;
  uStack_50 = 0;
  uVar1 = FUN_144a1ccda(puVar7,param_3);
  if (puVar8 != (undefined2 *)0x0) {
    FUN_1400020a8(puVar8);
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  (**(code **)(*param_2 + 0x70))(param_2,&local_58,0,0);
  puVar8 = local_58;
  uVar2 = (int)uStack_50 - 1;
  if ((int)uStack_50 == 0) {
    uVar2 = 0;
  }
  if (0 < (int)uVar2) {
    uVar6 = 0;
    do {
      local_58[uVar6] = (ushort)((ushort)local_58[uVar6] - 0x41 < 0x1a) * 0x20 + local_58[uVar6];
      uVar6 = uVar6 + 1;
    } while (uVar2 != uVar6);
  }
  puVar7 = local_58;
  if ((int)uStack_50 == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  local_58 = (undefined2 *)0x0;
  uStack_50 = 0;
  uVar1 = FUN_144a1ccda(puVar7,uVar1);
  if (puVar8 != (undefined2 *)0x0) {
    FUN_1400020a8(puVar8);
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140002266(&local_58,&DAT_149e061aa,(int)param_2[6]);
  puVar8 = &DAT_149dfb77a;
  if ((int)uStack_50 != 0) {
    puVar8 = local_58;
  }
  uVar1 = FUN_144a1ccda(puVar8,uVar1);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (param_4 != '\x01' || param_2 == (longlong *)0x0) goto LAB_1427df7d7;
  puVar11 = (undefined *)param_2[1];
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
      FUN_140342cba();
      local_70 = FUN_1468c7f1e;
      local_78 = &DAT_14c949750;
      local_80 = 0;
      local_88 = 0x8001;
      FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
      atexit(FUN_14280c819);
      _Init_thread_footer(&DAT_14c951a88);
    }
    local_70 = FUN_140b31576;
    local_78 = &DAT_14c951a38;
    local_80 = 0;
    local_88 = 0x208001;
    FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0);
    atexit(FUN_14280cbf7);
    _Init_thread_footer(&DAT_14c951ae0);
  }
  if (DAT_14c951a98 == 0) {
    bVar12 = puVar11 != (undefined *)0x0;
    if (puVar11 != &DAT_14c951a90 && bVar12) {
      do {
        puVar11 = *(undefined **)(puVar11 + 0x30);
        bVar12 = puVar11 != (undefined *)0x0;
        if (puVar11 == &DAT_14c951a90) break;
      } while (puVar11 != (undefined *)0x0);
    }
    lVar3 = 0x78;
    if (!bVar12) goto LAB_1427df57f;
  }
  else {
    lVar3 = 0x78;
    if ((*(ulonglong *)(puVar11 + 0x18) & DAT_14c951a98) == 0) {
LAB_1427df57f:
      puVar11 = (undefined *)param_2[1];
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c952a58) && (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1))
      {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c951a88) &&
           (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
          FUN_140342cba();
          local_70 = FUN_1468c7f1e;
          local_78 = &DAT_14c949750;
          local_80 = 0;
          local_88 = 0x8001;
          FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
          atexit(FUN_14280c819);
          _Init_thread_footer(&DAT_14c951a88);
        }
        local_70 = FUN_1403a682c;
        local_78 = &DAT_14c951a38;
        local_80 = 0;
        local_88 = 0x108001;
        FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
        atexit(FUN_142818c9e);
        _Init_thread_footer(&DAT_14c952a58);
      }
      if (DAT_14c952a10 == 0) {
        bVar12 = puVar11 != (undefined *)0x0;
        if (puVar11 != &DAT_14c952a08 && bVar12) {
          do {
            puVar11 = *(undefined **)(puVar11 + 0x30);
            bVar12 = puVar11 != (undefined *)0x0;
            if (puVar11 == &DAT_14c952a08) break;
          } while (puVar11 != (undefined *)0x0);
        }
        if (bVar12) goto LAB_1427df5f7;
      }
      else if ((*(ulonglong *)(puVar11 + 0x18) & DAT_14c952a10) != 0) {
LAB_1427df5f7:
        local_60 = *(undefined8 *)(param_2[0xe] + 0x18);
        FUN_1400021e4();
        puVar8 = local_58;
        uVar2 = (int)uStack_50 - 1;
        if ((int)uStack_50 == 0) {
          uVar2 = 0;
        }
        if (0 < (int)uVar2) {
          uVar6 = 0;
          do {
            local_58[uVar6] =
                 (ushort)((ushort)local_58[uVar6] - 0x41 < 0x1a) * 0x20 + local_58[uVar6];
            uVar6 = uVar6 + 1;
          } while (uVar2 != uVar6);
        }
        puVar7 = &DAT_149dfb77a;
        if ((int)uStack_50 != 0) {
          puVar7 = local_58;
        }
        local_58 = (undefined2 *)0x0;
        uStack_50 = 0;
        uVar1 = FUN_144a1ccda(puVar7,uVar1);
        if (puVar8 != (undefined2 *)0x0) {
          FUN_1400020a8(puVar8);
        }
        if (local_58 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
        plVar4 = (longlong *)param_2[0xe];
        local_58 = (undefined2 *)0x0;
        uStack_50 = 0;
        for (; plVar4 != (longlong *)0x0;
            plVar4 = (longlong *)(**(code **)(*plVar4 + 0x2b0))(plVar4)) {
          lVar3 = plVar4[10];
LAB_1427df6b4:
          if (lVar3 != 0) {
            if ((~*(uint *)(*(longlong *)(lVar3 + 8) + 0x18) & 0x8001) != 0)
            goto code_r0x0001427df6c9;
LAB_1427df6ea:
            uVar6 = uStack_50;
            if ((*(byte *)(lVar3 + 0x3b) & 0x80) == 0) {
              lVar9 = (longlong)(int)uStack_50;
              uVar2 = (int)uStack_50 + 1;
              uStack_50 = CONCAT44(uStack_50._4_4_,uVar2);
              if (uStack_50._4_4_ < uVar2) {
                FUN_140001000(&local_58,uVar6 & 0xffffffff);
              }
              *(longlong *)(local_58 + lVar9 * 4) = lVar3;
            }
            plVar10 = (longlong *)(lVar3 + 0x18);
            do {
              for (lVar3 = *plVar10; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x18)) {
                if ((~*(uint *)(*(longlong *)(lVar3 + 8) + 0x18) & 0x8001) == 0) goto LAB_1427df6ea;
              }
              plVar4 = (longlong *)(**(code **)(*plVar4 + 0x2b0))(plVar4);
              plVar10 = plVar4 + 10;
            } while (plVar4 != (longlong *)0x0);
            break;
          }
        }
        FUN_141714950(&local_58);
        puVar8 = local_58;
        lVar3 = (longlong)(int)uStack_50;
        if (lVar3 != 0) {
          lVar9 = 0;
          do {
            uVar1 = FUN_1427df332(param_1,*(undefined8 *)((longlong)puVar8 + lVar9),uVar1,1);
            lVar9 = lVar9 + 8;
          } while (lVar3 * 8 != lVar9);
        }
        if (local_58 != (undefined2 *)0x0) {
          FUN_1400020a8(local_58);
        }
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
      }
      lVar9 = param_2[1];
      lVar5 = FUN_140019ace();
      if (*(ulonglong *)(lVar5 + 8) == 0) {
        bVar12 = lVar9 != 0;
        if (lVar9 != lVar5 && bVar12) {
          do {
            lVar9 = *(longlong *)(lVar9 + 0x30);
            bVar12 = lVar9 != 0;
            if (lVar9 == lVar5) break;
          } while (lVar9 != 0);
        }
        lVar3 = 0x70;
        if (!bVar12) goto LAB_1427df7d7;
      }
      else {
        lVar3 = 0x70;
        if ((*(ulonglong *)(lVar9 + 0x18) & *(ulonglong *)(lVar5 + 8)) == 0) goto LAB_1427df7d7;
      }
    }
  }
  uVar1 = FUN_1427df332(param_1,*(undefined8 *)((longlong)param_2 + lVar3),uVar1,1);
LAB_1427df7d7:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x0001427df6c9:
  lVar3 = *(longlong *)(lVar3 + 0x18);
  goto LAB_1427df6b4;
}



// FUNCTION 1427dfa6c FUN_1427dfa6c body=264 status=ok
// SIG undefined FUN_1427dfa6c(void)

longlong FUN_1427dfa6c(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = *(longlong **)(param_1 + 0xb0);
  if (DAT_14c927740 == 0) {
    local_40 = &local_28;
    local_28 = FUN_1449e2820;
    local_30 = FUN_14081d0ea;
    local_38 = FUN_14081d0ea;
    local_48 = &LAB_146856450;
    local_50 = FUN_1427b121c;
    local_58 = L"Engine";
    local_60 = 0;
    local_68 = 0x10000021;
    local_70 = 8;
    local_78 = CONCAT44(local_78._4_4_,0x28);
    FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
  }
  local_78 = 0;
  (**(code **)(*plVar1 + 0x2a8))(plVar1,param_1,DAT_14c927740,param_2);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427dfb75 FUN_1427dfb75 body=105 status=ok
// SIG undefined FUN_1427dfb75(void)

undefined8 FUN_1427dfb75(undefined8 *param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_14689d5aa(*param_1);
  if (cVar1 != '\0') {
    cVar1 = FUN_14689d5aa(param_1[1],param_2 + 0x430,param_3,param_4);
    if (cVar1 != '\0') {
      uVar2 = FUN_14689d5aa(param_1[2],param_2 + 0x860,param_3,param_4);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1427dfbde FUN_1427dfbde body=105 status=ok
// SIG undefined FUN_1427dfbde(void)

undefined8 FUN_1427dfbde(undefined8 *param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_14689d6c6(*param_1);
  if (cVar1 != '\0') {
    cVar1 = FUN_14689d6c6(param_1[1],param_2 + 0x430,param_3,param_4);
    if (cVar1 != '\0') {
      uVar2 = FUN_14689d6c6(param_1[2],param_2 + 0x860,param_3,param_4);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1427dfc69 FUN_1427dfc69 body=41 status=ok
// SIG undefined FUN_1427dfc69(void)

void FUN_1427dfc69(void)

{
  DAT_14c9495a0 = 0;
  if (DAT_14c949598 != 0) {
    FUN_1400020a8();
  }
  FUN_145d61c40();
  return;
}



// FUNCTION 1427dfc98 FUN_1427dfc98 body=276 status=ok
// SIG undefined FUN_1427dfc98(void)

byte FUN_1427dfc98(undefined8 *param_1)

{
  char cVar1;
  byte bVar2;
  DWORD DVar3;
  longlong lVar4;
  byte bVar5;
  undefined4 *puVar6;
  undefined1 auStack_58 [40];
  undefined *local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = &DAT_14c949608;
  local_28 = 0;
  DVar3 = GetCurrentThreadId();
  if (DAT_14c949610 != DVar3) {
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c949608);
    LOCK();
    UNLOCK();
    DAT_14c949610 = DVar3;
  }
  DAT_14c949614 = DAT_14c949614 + 1;
  if ((longlong)*(int *)(param_1 + 1) == 0) {
    bVar5 = 0;
  }
  else {
    puVar6 = (undefined4 *)*param_1;
    lVar4 = (longlong)*(int *)(param_1 + 1) * 0xa0;
    bVar5 = 0;
    do {
      if ((((*(longlong *)(puVar6 + 1) != 0) || (*(longlong *)(puVar6 + 5) != 0)) &&
          ((*(longlong *)(puVar6 + 7) != 0 || (*(longlong *)(puVar6 + 0xb) != 0)))) &&
         (((((int)puVar6[0x16] <= (int)puVar6[0x21] &&
            (cVar1 = FUN_1407d01da(puVar6 + 1,*puVar6), cVar1 != '\0')) &&
           (cVar1 = FUN_1407d01da(puVar6 + 7,*puVar6), cVar1 != '\0')) &&
          ((*(longlong *)(puVar6 + 0xb) == *(longlong *)(puVar6 + 5) ||
           (*(longlong *)(puVar6 + 3) == 0)))))) {
        bVar2 = FUN_146899b72(puVar6);
        bVar5 = bVar5 | bVar2;
      }
      puVar6 = puVar6 + 0x28;
      lVar4 = lVar4 + -0xa0;
    } while (lVar4 != 0);
  }
  FUN_141072054(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar5 & 1;
}



// FUNCTION 1427dfdae FUN_1427dfdae body=3324 status=ok
// SIG undefined FUN_1427dfdae(void)

ulonglong FUN_1427dfdae(undefined8 *param_1)

{
  short *psVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  short sVar6;
  bool bVar7;
  longlong lVar8;
  byte bVar9;
  DWORD DVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  longlong *plVar16;
  uint *puVar17;
  uint uVar18;
  undefined2 *puVar19;
  undefined *puVar20;
  wchar_t *pwVar21;
  uint *puVar22;
  int iVar23;
  ulonglong uVar24;
  uint uVar25;
  longlong lVar26;
  ulonglong uVar27;
  uint uVar28;
  longlong lVar29;
  undefined8 *puVar30;
  short *psVar31;
  ulonglong uVar32;
  undefined1 auStack_1b8 [32];
  ulonglong local_198;
  int local_190;
  byte local_182;
  byte local_181;
  int local_180;
  uint local_17c;
  uint local_178;
  uint local_174;
  int local_170;
  uint local_16c;
  uint local_168;
  int local_164;
  longlong *local_160;
  wchar_t *local_158;
  undefined8 *local_150;
  ulonglong local_148;
  uint *local_140;
  longlong local_138;
  undefined4 local_130;
  short *local_128 [2];
  longlong local_118;
  longlong lStack_110;
  undefined8 local_108 [2];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  char local_dc;
  byte local_db;
  char local_da;
  char local_d9;
  longlong local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  wchar_t *local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined *local_98;
  undefined1 local_90;
  wchar_t *local_88;
  undefined8 uStack_80;
  short *local_70;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_98 = &DAT_14c949608;
  local_90 = 0;
  DVar10 = GetCurrentThreadId();
  if (DAT_14c949610 != DVar10) {
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c949608);
    LOCK();
    UNLOCK();
    DAT_14c949610 = DVar10;
  }
  DAT_14c949614 = DAT_14c949614 + 1;
  FUN_1410720c4();
  if (DAT_14c872ce0 == 0) {
    uVar32 = 0;
  }
  else {
    uVar32 = 0;
    plVar16 = (longlong *)FUN_140d6a126(DAT_14c872ce0,L"CoreRedirects",0,param_1);
    if (plVar16 != (longlong *)0x0) {
      local_a8 = 0;
      uStack_a0 = 0;
      iVar12 = (int)plVar16[5];
      if (iVar12 == 0) {
        uVar24 = 1;
        iVar23 = 0;
        iVar11 = 0;
      }
      else {
        puVar17 = (uint *)plVar16[4];
        if ((uint *)plVar16[4] == (uint *)0x0) {
          puVar17 = (uint *)(plVar16 + 2);
        }
        uVar28 = *puVar17;
        if (uVar28 == 0) {
          iVar23 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar23 = iVar12 + -1;
          }
          uVar32 = 0;
          uVar24 = (ulonglong)(uint)(iVar23 >> 5);
          if (iVar23 >> 5 < 1) {
            uVar24 = uVar32;
          }
          iVar23 = 0;
          do {
            if (uVar24 == uVar32) goto LAB_1427e09e7;
            iVar23 = iVar23 + 0x20;
            uVar28 = puVar17[uVar32 + 1];
            uVar32 = uVar32 + 1;
          } while (uVar28 == 0);
        }
        else {
          uVar32 = 0;
          iVar23 = 0;
        }
        uVar24 = (ulonglong)(-uVar28 & uVar28);
        uVar27 = uVar24 * 2 + 1;
        lVar29 = 0x3f;
        if (uVar27 != 0) {
          for (; uVar27 >> lVar29 == 0; lVar29 = lVar29 + -1) {
          }
        }
        iVar11 = (iVar23 - ((uint)lVar29 ^ 0x3f)) + 0x3e;
        if (iVar12 <= iVar11) {
          iVar11 = iVar12;
        }
      }
      if (iVar11 < iVar12) {
        uVar28 = 0xffffffff;
        local_160 = plVar16;
        local_150 = param_1;
        local_140 = (uint *)(plVar16 + 2);
LAB_1427dff18:
        local_b8 = (wchar_t *)0x0;
        uStack_b0 = 0;
        local_c8 = 0;
        uStack_c0 = 0;
        local_d8 = 0;
        uStack_d0 = 0;
        local_d9 = '\0';
        local_da = '\0';
        local_db = 0;
        local_dc = '\0';
        lVar26 = (longlong)iVar11 * 0x40;
        lVar29 = (ulonglong)(*(int *)(*plVar16 + 0x28 + lVar26) - 2U < 0x7fffffff) * 0x10 +
                 *plVar16 + lVar26;
        puVar30 = (undefined8 *)(lVar29 + 0x10);
        puVar19 = &DAT_149dfb77a;
        if (*(int *)(lVar29 + 0x18) != 0) {
          puVar19 = (undefined2 *)*puVar30;
        }
        local_168 = uVar28;
        FUN_140751e3e(puVar19,L"InstanceOnly=",&local_d9);
        puVar19 = &DAT_149dfb77a;
        if (*(int *)(lVar29 + 0x18) != 0) {
          puVar19 = (undefined2 *)*puVar30;
        }
        FUN_140751e3e(puVar19,L"Removed=",&local_da);
        puVar19 = &DAT_149dfb77a;
        if (*(int *)(lVar29 + 0x18) != 0) {
          puVar19 = (undefined2 *)*puVar30;
        }
        FUN_140751e3e(puVar19,L"MatchSubstring=",&local_db);
        puVar19 = &DAT_149dfb77a;
        if (*(int *)(lVar29 + 0x18) != 0) {
          puVar19 = (undefined2 *)*puVar30;
        }
        FUN_140751e3e(puVar19,L"MatchWildcard=",&local_dc);
        puVar19 = &DAT_149dfb77a;
        if (*(int *)(lVar29 + 0x18) != 0) {
          puVar19 = (undefined2 *)*puVar30;
        }
        local_198 = 0;
        FUN_14063337c(puVar19,L"OldName=",&local_b8,1);
        puVar19 = &DAT_149dfb77a;
        if (*(int *)(lVar29 + 0x18) != 0) {
          puVar19 = (undefined2 *)*puVar30;
        }
        local_198 = 0;
        local_164 = iVar23;
        FUN_14063337c(puVar19,L"NewName=",&local_c8,1);
        puVar19 = &DAT_149dfb77a;
        if (*(int *)(lVar29 + 0x18) != 0) {
          puVar19 = (undefined2 *)*puVar30;
        }
        local_198 = 0;
        FUN_14063337c(puVar19,L"OverrideClassName=",&local_d8,1);
        pwVar21 = local_b8;
        if (DAT_14c949560 != DAT_14c94958c) {
          lVar26 = *(longlong *)(*plVar16 + lVar26);
          uVar28 = (uint)((ulonglong)lVar26 >> 0x10);
          uVar13 = (uint)lVar26 & 0xffff;
          puVar20 = DAT_14c949598;
          if (DAT_14c949598 == (undefined *)0x0) {
            puVar20 = &DAT_14c949590;
          }
          iVar12 = *(int *)(puVar20 +
                           (ulonglong)
                           (DAT_14c9495a0 - 1U &
                           (int)((ulonglong)lVar26 >> 0x20) + ((uint)lVar26 << 0x10 | uVar13) +
                           (uVar28 << 0x13 | uVar28 & 0xffff) + (uVar13 >> 4)) * 4);
          while (iVar12 != -1) {
            plVar2 = (longlong *)(DAT_14c949558 + (longlong)iVar12 * 0x14);
            if (*plVar2 == lVar26) {
              if ((uint *)(plVar2 + 1) != (uint *)0x0 && plVar2 != (longlong *)0x0) {
                uVar28 = *(uint *)(plVar2 + 1);
                uVar13 = uVar28 | 0x10000;
                if (local_d9 == '\0') {
                  uVar13 = uVar28;
                }
                uVar28 = uVar13 | 0x20000;
                if (local_da == '\0') {
                  uVar28 = uVar13;
                }
                if ((local_dc == '\0') && (local_db != 1)) goto LAB_1427e0440;
                iVar12 = (int)uStack_b0;
                local_178 = 0;
                uVar27 = (ulonglong)((int)uStack_b0 - 1);
                if ((int)uStack_b0 == 0) {
                  uVar27 = 0;
                }
                uVar13 = (uint)uVar27;
                local_174 = uVar28;
                local_148 = uVar32;
                if ((int)uVar13 < 3) {
                  uVar28 = 0;
                }
                else {
                  iVar23 = wcscmp(local_b8 + (uVar27 - 3),L"...");
                  uVar28 = (uint)CONCAT71((int7)((ulonglong)param_1 >> 8),iVar23 == 0);
                }
                local_180 = iVar12;
                local_158 = pwVar21;
                if (iVar12 == 0) {
                  pwVar21 = L"";
                }
                local_170 = wcsncmp(pwVar21,L"...",3);
                pwVar21 = local_158;
                local_182 = local_db;
                local_181 = local_170 == 0 & (byte)uVar28 | local_db;
                local_17c = uVar13;
                local_16c = uVar28;
                local_db = local_181;
                if ((int)uVar13 < 3) goto LAB_1427e02d2;
                iVar23 = 0;
                iVar12 = local_180 + -1;
                if (local_180 == 0) {
                  iVar12 = iVar23;
                }
                local_178 = 0;
                goto LAB_1427e026b;
              }
              break;
            }
            iVar12 = *(int *)((longlong)plVar2 + 0xc);
          }
        }
        goto LAB_1427e08e3;
      }
LAB_1427e09e7:
      if (*(int *)(param_1 + 1) == 0) {
        puVar19 = &DAT_149dfb77a;
      }
      else {
        puVar19 = (undefined2 *)*param_1;
      }
      FUN_140fe5fda(DAT_14c872ce0,L"CoreRedirects",puVar19);
      local_138 = local_a8;
      local_130 = (int)uStack_a0;
      uVar28 = FUN_141071fba(&local_138,param_1);
      uVar32 = (ulonglong)uVar28;
      FUN_1407a3a24(local_a8,uStack_a0 & 0xffffffff);
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
    }
  }
  FUN_141072054(&local_98);
  if ((local_60 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar32;
LAB_1427e026b:
  if ((uint)uVar27 < 3) goto LAB_1427e02d2;
  iVar11 = 0;
  lVar26 = -(ulonglong)((uint)uVar27 * 2);
  while (iVar14 = wcsncmp((wchar_t *)((longlong)pwVar21 + lVar26 + (longlong)(int)uVar13 * 2),L"..."
                          ,3), iVar14 != 0) {
    iVar11 = iVar11 + 1;
    bVar7 = -8 < lVar26;
    lVar26 = lVar26 + 2;
    if (bVar7) goto LAB_1427e02d2;
  }
  if ((iVar11 == -1) || (iVar23 + iVar11 == -1)) goto LAB_1427e02d2;
  iVar14 = (iVar12 + -3) - iVar23;
  iVar23 = iVar23 + iVar11 + 3;
  local_178 = local_178 + 1;
  uVar28 = iVar14 - iVar11;
  if ((int)local_17c <= (int)uVar28) {
    uVar28 = local_17c;
  }
  uVar27 = (ulonglong)uVar28;
  if ((int)uVar28 < 3) goto LAB_1427e02d2;
  goto LAB_1427e026b;
LAB_1427e02d2:
  uVar32 = local_148;
  plVar16 = local_160;
  bVar9 = local_170 == 0 | (byte)local_16c;
  param_1 = local_150;
  if ((((local_181 | bVar9) & 1) == 0) || ((local_16c & 0xff) + (uint)(local_170 == 0) < local_178))
  goto LAB_1427e08e3;
  if ((byte)local_16c == 0) {
    uVar13 = local_174;
    uVar18 = local_17c;
    if (local_170 == 0) goto LAB_1427e03e2;
    uVar28 = local_174;
    if (bVar9 != 0) goto LAB_1427e0430;
    uVar13 = 0;
    if (local_182 != 0) {
      uVar13 = 0x3000000;
    }
  }
  else {
    uVar28 = 3;
    if (3 < (int)local_17c) {
      uVar28 = local_17c;
    }
    uVar28 = uVar28 - 3;
    uVar18 = local_17c - uVar28;
    uVar13 = 3;
    if ((int)uVar18 < 3) {
      uVar13 = uVar18;
    }
    if ((int)uVar13 < 1) {
      uVar13 = 0;
    }
    iVar12 = local_180;
    if (0 < (int)uVar18) {
      iVar23 = local_180 - (uVar13 + uVar28);
      if (iVar23 != 0) {
        memmove(local_158 + uVar28,local_158 + uVar28 + uVar13,(longlong)iVar23 * 2);
        iVar12 = (int)uStack_b0;
      }
      uStack_b0 = CONCAT44(uStack_b0._4_4_,iVar12 - uVar13);
      iVar12 = iVar12 - uVar13;
    }
    uVar28 = local_174 | 0x1000000;
    if (local_170 == 0) {
      uVar13 = uVar28;
      uVar18 = iVar12 - 1;
      local_180 = iVar12;
      if (iVar12 == 0) {
        uVar18 = 0;
      }
LAB_1427e03e2:
      uVar25 = 3;
      if ((int)uVar18 < 3) {
        uVar25 = uVar18;
      }
      if ((int)uVar25 < 1) {
        uVar25 = 0;
      }
      uVar28 = uVar13 | 0x2000000;
      if (0 < (int)uVar18) {
        iVar12 = local_180;
        if (local_180 - uVar25 != 0) {
          memmove(local_b8,local_b8 + uVar25,(longlong)(int)(local_180 - uVar25) * 2);
          iVar12 = (int)uStack_b0;
        }
        uStack_b0 = CONCAT44(uStack_b0._4_4_,iVar12 - uVar25);
      }
    }
LAB_1427e0430:
    local_db = 1;
    uVar13 = 0x3000000;
  }
  uVar28 = uVar28 | uVar13;
LAB_1427e0440:
  local_f8 = (longlong *)0x0;
  uStack_f0 = (wchar_t **)0x0;
  local_e8 = 0;
  local_118 = local_c8;
  iVar12 = (int)uStack_c0 + -1;
  if ((int)uStack_c0 == 0) {
    iVar12 = 0;
  }
  lStack_110 = CONCAT44(lStack_110._4_4_,iVar12);
  FUN_1448405cc(&local_118,&local_f8,&uStack_f0,&local_e8);
  local_118 = 0;
  lStack_110 = 0;
  local_108[0] = 0;
  local_88 = local_b8;
  iVar12 = (int)uStack_b0 + -1;
  if ((int)uStack_b0 == 0) {
    iVar12 = 0;
  }
  uStack_80 = CONCAT44(uStack_80._4_4_,iVar12);
  FUN_1448405cc(&local_88,&local_118,&lStack_110,local_108);
  uVar27 = uStack_a0;
  lVar26 = (longlong)(int)uStack_a0;
  uVar13 = (int)uStack_a0 + 1;
  uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar13);
  if (uStack_a0._4_4_ < uVar13) {
    FUN_141518130(&local_a8,uVar27 & 0xffffffff);
  }
  lVar8 = local_a8;
  param_1 = local_150;
  lVar26 = lVar26 * 0xa0;
  *(uint *)(local_a8 + lVar26) = uVar28;
  plVar2 = (longlong *)(local_a8 + 4 + lVar26);
  *plVar2 = local_118;
  plVar2[1] = lStack_110;
  *(undefined8 *)(local_a8 + 0x14 + lVar26) = local_108[0];
  puVar4 = (undefined4 *)(local_a8 + 0x1c + lVar26);
  *puVar4 = (undefined4)local_f8;
  puVar4[1] = local_f8._4_4_;
  puVar4[2] = (undefined4)uStack_f0;
  puVar4[3] = uStack_f0._4_4_;
  *(undefined8 *)(local_a8 + 0x2c + lVar26) = local_e8;
  *(undefined8 *)(local_a8 + 0x70 + lVar26) = 0;
  *(undefined4 *)(local_a8 + 0x78 + lVar26) = 0;
  puVar5 = (undefined8 *)(local_a8 + 0x34 + lVar26);
  *puVar5 = 0;
  puVar5[1] = 0;
  *(undefined8 *)(local_a8 + 0x44 + lVar26) = 0;
  puVar5 = (undefined8 *)(local_a8 + 0x50 + lVar26);
  *puVar5 = 0;
  puVar5[1] = 0;
  *(undefined8 *)(local_a8 + 0x7c + lVar26) = 0xffffffff00000080;
  *(undefined4 *)(local_a8 + 0x84 + lVar26) = 0;
  *(undefined8 *)(local_a8 + 0x90 + lVar26) = 0;
  *(undefined4 *)(local_a8 + 0x98 + lVar26) = 0;
  if (*(longlong *)(local_a8 + 0x1c + lVar26) == 0) {
    *(undefined8 *)(local_a8 + lVar26 + 0x1c) = *(undefined8 *)(local_a8 + lVar26 + 4);
  }
  lVar3 = local_a8 + lVar26;
  if (*(longlong *)(lVar3 + 0x24) == 0) {
    *(undefined8 *)(lVar3 + 0x24) = *(undefined8 *)(lVar3 + 0xc);
  }
  if (*(longlong *)(lVar3 + 0x2c) == 0) {
    *(undefined8 *)(lVar3 + 0x2c) = *(undefined8 *)(lVar3 + 0x14);
  }
  if (1 < (int)uStack_d0) {
    lVar3 = local_a8 + lVar26;
    local_f8 = (longlong *)0x0;
    uStack_f0 = (wchar_t **)0x0;
    local_e8 = 0;
    local_118 = local_d8;
    lStack_110 = CONCAT44(lStack_110._4_4_,(int)uStack_d0 + -1);
    FUN_1448405cc(&local_118,&local_f8,&uStack_f0,&local_e8);
    *(undefined8 *)(lVar3 + 0x44) = local_e8;
    *(undefined4 *)(lVar3 + 0x34) = (undefined4)local_f8;
    *(undefined4 *)(lVar3 + 0x38) = local_f8._4_4_;
    *(undefined4 *)(lVar3 + 0x3c) = (undefined4)uStack_f0;
    *(undefined4 *)(lVar3 + 0x40) = uStack_f0._4_4_;
    plVar16 = local_160;
  }
  local_190 = -1;
  local_198 = local_198 & 0xffffffff00000000;
  iVar12 = FUN_1447ee042(puVar30,L"ValueChanges=",0xd,1);
  if (iVar12 == -1) goto LAB_1427e08e3;
  local_198 = local_198 & 0xffffffff00000000;
  local_190 = iVar12;
  uVar28 = FUN_1447ee042(puVar30,&DAT_149e06140,1,0);
  iVar12 = *(int *)(lVar29 + 0x18);
  puVar19 = &DAT_149dfb77a;
  if (iVar12 != 0) {
    puVar19 = (undefined2 *)*puVar30;
  }
  uVar13 = iVar12 - 1;
  if (iVar12 == 0) {
    uVar13 = 0;
  }
  if ((int)uVar13 <= (int)uVar28) {
    uVar28 = uVar13;
  }
  if ((int)uVar28 < 1) {
    uVar28 = 0;
  }
  FUN_14006620a(local_128,puVar19 + uVar28,uVar13 - uVar28);
  local_70 = local_128[0] + 1;
  if (*local_128[0] == 0x28) {
    FUN_1408dea53(&local_70);
    if (*local_70 == 0x29) {
      psVar31 = local_70 + 1;
    }
    else {
      psVar31 = local_70;
      do {
        FUN_1408dea53(&local_70);
        if (*local_70 != 0x28) goto LAB_1427e09c1;
        local_118 = 0;
        lStack_110 = 0;
        local_88 = (wchar_t *)0x0;
        uStack_80 = 0;
        local_70 = (short *)FUN_1401e9420(local_70 + 1,&local_118,1);
        if (local_70 == (short *)0x0) {
LAB_1427e08a1:
          psVar31 = (short *)0x0;
          bVar7 = false;
        }
        else {
          FUN_1408dea53(&local_70);
          psVar1 = local_70 + 1;
          sVar6 = *local_70;
          local_70 = psVar1;
          if (sVar6 != 0x2c) goto LAB_1427e08a1;
          FUN_1408dea53(&local_70);
          local_70 = (short *)FUN_1401e9420(local_70,&local_88,1);
          if (local_70 == (short *)0x0) goto LAB_1427e08a1;
          FUN_1408dea53(&local_70);
          psVar1 = local_70 + 1;
          sVar6 = *local_70;
          local_70 = psVar1;
          if (sVar6 != 0x29) goto LAB_1427e08a1;
          local_f8 = &local_118;
          uStack_f0 = &local_88;
          bVar7 = false;
          FUN_140ac5c08(lVar8 + lVar26 + 0x50,local_64,&local_f8,0);
          psVar1 = local_70 + 1;
          sVar6 = *local_70;
          local_70 = psVar1;
          if (sVar6 == 0x2c) {
            bVar7 = true;
          }
          else {
            psVar31 = psVar1;
            if (sVar6 != 0x29) goto LAB_1427e08a1;
          }
        }
        if (local_88 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        if (local_118 != 0) {
          FUN_1400020a8();
        }
      } while (bVar7);
    }
    if (psVar31 == (short *)0x0) goto LAB_1427e09c1;
  }
  else {
LAB_1427e09c1:
    FUN_1468b36d2(&local_a8,(int)uStack_a0 + -1);
    FUN_1468b374a(&local_a8);
  }
  if (local_128[0] != (short *)0x0) {
    FUN_1400020a8();
  }
LAB_1427e08e3:
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  puVar17 = local_140;
  iVar23 = local_164;
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  uVar28 = local_168 & ~(uint)uVar24;
  puVar22 = (uint *)plVar16[4];
  if ((uint *)plVar16[4] == (uint *)0x0) {
    puVar22 = puVar17;
  }
  iVar12 = (int)plVar16[5];
  iVar11 = (int)uVar32;
  lVar29 = (longlong)iVar11;
  uVar13 = puVar22[lVar29] & uVar28;
  if (uVar13 == 0) {
    iVar14 = iVar12 + 0x1e;
    if (-1 < iVar12 + -1) {
      iVar14 = iVar12 + -1;
    }
    iVar14 = iVar14 >> 5;
    iVar15 = iVar14;
    if (iVar14 < iVar11) {
      iVar15 = iVar11;
    }
    if (iVar14 <= iVar11) goto LAB_1427e09e7;
    lVar26 = 0;
    while( true ) {
      iVar23 = iVar23 + 0x20;
      uVar13 = puVar22[lVar29 + lVar26 + 1];
      if (uVar13 != 0) break;
      lVar26 = lVar26 + 1;
      if (iVar15 - lVar29 == lVar26) goto LAB_1427e09e7;
    }
    uVar32 = (ulonglong)(iVar11 + (int)lVar26 + 1);
    uVar28 = 0xffffffff;
  }
  uVar24 = (ulonglong)(-uVar13 & uVar13);
  uVar27 = uVar24 * 2 + 1;
  lVar29 = 0x3f;
  if (uVar27 != 0) {
    for (; uVar27 >> lVar29 == 0; lVar29 = lVar29 + -1) {
    }
  }
  iVar11 = (iVar23 - ((uint)lVar29 ^ 0x3f)) + 0x3e;
  if (iVar12 <= iVar11) goto LAB_1427e09e7;
  goto LAB_1427dff18;
}



// FUNCTION 1427e0aac FUN_1427e0aac body=1773 status=ok
// SIG undefined FUN_1427e0aac(void)

undefined8 FUN_1427e0aac(uint *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  byte bVar12;
  int iVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  uint *puVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  longlong lVar30;
  longlong *plVar31;
  bool bVar32;
  
  uVar2 = *param_1;
  plVar11 = (longlong *)FUN_1407a34cc(uVar2);
  if ((uVar2 & 0x3000000) == 0) {
    lVar24 = *(longlong *)(param_1 + (ulonglong)((*param_1 & 0xc0) != 0) * 4 + 1);
    uVar20 = (uint)((ulonglong)lVar24 >> 0x10);
    uVar8 = (uint)lVar24 & 0xffff;
    uVar20 = ((uint)lVar24 << 0x10 | uVar8) + (int)((ulonglong)lVar24 >> 0x20) +
             (uVar20 << 0x13 | uVar20 & 0xffff) + (uVar8 >> 4);
    iVar29 = (int)plVar11[1];
    iVar28 = *(int *)((longlong)plVar11 + 0x34);
    if (iVar29 != iVar28) {
      plVar31 = plVar11 + 7;
      if ((longlong *)plVar11[8] != (longlong *)0x0) {
        plVar31 = (longlong *)plVar11[8];
      }
      iVar7 = *(int *)((longlong)plVar31 + (ulonglong)((int)plVar11[9] - 1U & uVar20) * 4);
      if (iVar7 != -1) {
        do {
          lVar30 = *plVar11 + (longlong)iVar7 * 0x20;
          if (*(longlong *)(*plVar11 + (longlong)iVar7 * 0x20) == lVar24) {
            if (lVar30 != 0) {
              plVar31 = (longlong *)(lVar30 + 8);
              goto LAB_1427e0dbc;
            }
            break;
          }
          iVar7 = *(int *)(lVar30 + 0x18);
        } while (iVar7 != -1);
      }
    }
    if (iVar28 == 0) {
      *(int *)(plVar11 + 1) = iVar29 + 1;
      if (*(int *)((longlong)plVar11 + 0xc) == iVar29) {
        FUN_1447711aa(plVar11,iVar29);
      }
      iVar28 = (int)plVar11[5];
      if (iVar28 == 0) {
        iVar7 = -1;
      }
      else {
        iVar7 = iVar28 + 0x1e;
        if (-1 < iVar28 + -1) {
          iVar7 = iVar28 + -1;
        }
        iVar7 = iVar7 >> 5;
      }
      plVar31 = plVar11 + 2;
      iVar13 = iVar28 + 1;
      iVar27 = iVar28 + 0x1f;
      if (-1 < iVar28) {
        iVar27 = iVar28;
      }
      if (iVar27 >> 5 == iVar7) {
        *(int *)(plVar11 + 5) = iVar13;
      }
      else {
        if (*(int *)((longlong)plVar11 + 0x2c) <= iVar28) {
          iVar7 = iVar28;
          if (iVar28 + 0x20U < 0xa0) {
            iVar13 = 0x80;
          }
          else {
            uVar8 = iVar28 + 0x20U >> 5;
            if (*(int *)((longlong)plVar11 + 0x2c) + 0x1fU < 0xa0) {
              uVar18 = 4;
              if (4 < uVar8) {
                uVar18 = uVar8;
              }
            }
            else {
              uVar18 = uVar8 + (uVar8 * 3 >> 3) + 0x10;
            }
            uVar15 = (ulonglong)(uVar18 * 4);
            if (DAT_14c872d28 != (longlong *)0x0) {
              if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                uVar9 = (uint)(uVar15 + 0xf);
                if (uVar18 < 0x1ffd) {
                  uVar15 = (ulonglong)
                           (ushort)(&DAT_14c841d90)
                                   [0x32 - (byte)(&DAT_14c841e00)[uVar15 + 0xf >> 4]];
                }
                else {
                  uVar17 = (ulonglong)(uVar9 & 0xfffffff0);
                  if (uVar17 < 0x7ff1) {
                    bVar12 = (&DAT_14c841e00)[uVar9 >> 4];
                    uVar19 = 0x32;
                    if (0x32 < bVar12) {
                      uVar19 = (ulonglong)bVar12;
                    }
                    uVar23 = 0x32 - (ulonglong)bVar12;
                    do {
                      uVar15 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar23 & 0xffffffff];
                      if (((&DAT_14c841d90)[uVar23 & 0xffffffff] & 0xf) == 0) goto LAB_1427e1035;
                      lVar30 = uVar19 + 1 + uVar23;
                      uVar23 = uVar23 - 1;
                    } while (lVar30 != 0x33);
                  }
                  uVar15 = 0x10;
                  if (0x10 < DAT_14c841df8) {
                    uVar15 = (ulonglong)DAT_14c841df8;
                  }
                  uVar15 = -uVar15 & (uVar17 + uVar15) - 1;
                }
              }
              else {
                uVar15 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar15,0);
                iVar7 = (int)plVar11[5];
              }
            }
LAB_1427e1035:
            iVar10 = (int)(uVar15 >> 2);
            iVar13 = -0x20;
            if ((int)uVar8 <= iVar10) {
              iVar13 = iVar10 << 5;
            }
          }
          *(int *)((longlong)plVar11 + 0x2c) = iVar13;
          FUN_1446efbd8(plVar31,iVar7);
          iVar13 = (int)plVar11[5] + 1;
        }
        iVar7 = iVar13 + 0x1f;
        if (-1 < iVar13) {
          iVar7 = iVar13;
        }
        *(int *)(plVar11 + 5) = iVar13;
        if (iVar13 % 0x20 != 0) {
          plVar14 = (longlong *)plVar11[4];
          if ((longlong *)plVar11[4] == (longlong *)0x0) {
            plVar14 = plVar31;
          }
          bVar12 = -(char)(iVar13 % 0x20);
          *(uint *)((longlong)plVar14 + (longlong)(iVar7 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar14 + (longlong)(iVar7 >> 5) * 4) << (bVar12 & 0x1f))
               >> (bVar12 & 0x1f);
        }
      }
      lVar30 = (longlong)iVar29;
      if ((longlong *)plVar11[4] != (longlong *)0x0) {
        plVar31 = (longlong *)plVar11[4];
      }
      bVar12 = (byte)iVar28 & 0x1f;
      puVar21 = (uint *)((longlong)plVar31 + (longlong)(iVar27 >> 5) * 4);
      *puVar21 = *puVar21 & (-2 << bVar12 | 0xfffffffeU >> 0x20 - bVar12);
    }
    else {
      iVar29 = (int)plVar11[6];
      lVar30 = (longlong)iVar29;
      iVar7 = *(int *)(*plVar11 + 4 + lVar30 * 0x20);
      *(int *)(plVar11 + 6) = iVar7;
      *(int *)((longlong)plVar11 + 0x34) = iVar28 + -1;
      if (iVar28 + -1 != 0) {
        *(undefined4 *)(*plVar11 + (longlong)iVar7 * 0x20) = 0xffffffff;
      }
    }
    plVar31 = plVar11 + 2;
    if ((longlong *)plVar11[4] != (longlong *)0x0) {
      plVar31 = (longlong *)plVar11[4];
    }
    iVar28 = iVar29 + 0x1f;
    if (-1 < iVar29) {
      iVar28 = iVar29;
    }
    puVar21 = (uint *)((longlong)plVar31 + (longlong)(iVar28 >> 5) * 4);
    *puVar21 = *puVar21 | 1 << ((byte)iVar29 & 0x1f);
    iVar28 = 1;
    lVar16 = *plVar11;
    lVar30 = lVar30 * 0x20;
    plVar31 = (longlong *)(lVar30 + lVar16);
    *(longlong *)(lVar16 + lVar30) = lVar24;
    puVar22 = (undefined8 *)(lVar16 + 8 + lVar30);
    *puVar22 = 0;
    puVar22[1] = 0;
    FUN_1407a3a24(0,0);
    *(undefined4 *)(lVar16 + 0x18 + lVar30) = 0xffffffff;
    uVar8 = (int)plVar11[1] - *(int *)((longlong)plVar11 + 0x34);
    if (uVar8 != 1) {
      if ((int)plVar11[1] != *(int *)((longlong)plVar11 + 0x34)) {
        plVar14 = plVar11 + 7;
        if ((longlong *)plVar11[8] != (longlong *)0x0) {
          plVar14 = (longlong *)plVar11[8];
        }
        iVar7 = *(int *)((longlong)plVar14 + (ulonglong)((int)plVar11[9] - 1U & uVar20) * 4);
        if (iVar7 != -1) {
          do {
            puVar1 = (undefined4 *)(*plVar11 + (longlong)iVar7 * 0x20);
            if (*(longlong *)(*plVar11 + (longlong)iVar7 * 0x20) == *plVar31) {
              FUN_1407a3a24(*(undefined8 *)(puVar1 + 2),puVar1[4]);
              if (*(longlong *)(puVar1 + 2) != 0) {
                FUN_1400020a8();
              }
              lVar24 = *plVar31;
              uVar5 = *(undefined4 *)((longlong)plVar31 + 4);
              lVar30 = plVar31[1];
              uVar6 = *(undefined4 *)((longlong)plVar31 + 0xc);
              *(longlong *)(puVar1 + 4) = plVar31[2];
              *puVar1 = (int)lVar24;
              puVar1[1] = uVar5;
              puVar1[2] = (int)lVar30;
              puVar1[3] = uVar6;
              FUN_1468b3660(plVar11,iVar29);
              goto LAB_1427e0d1c;
            }
            iVar7 = puVar1[6];
          } while (iVar7 != -1);
        }
      }
      if (3 < uVar8) {
        uVar15 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
        lVar24 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar24 == 0; lVar24 = lVar24 + -1) {
          }
        }
        iVar28 = 1 << ((byte)lVar24 & 0x1f);
      }
    }
    if (((int)uVar8 < 1) || (iVar28 <= (int)plVar11[9])) {
      uVar20 = (int)plVar11[9] - 1U & uVar20;
      *(uint *)((longlong)plVar31 + 0x1c) = uVar20;
      plVar14 = (longlong *)plVar11[8];
      if ((longlong *)plVar11[8] == (longlong *)0x0) {
        plVar14 = plVar11 + 7;
      }
      *(undefined4 *)(plVar31 + 3) =
           *(undefined4 *)
            ((longlong)plVar14 + ((longlong)(int)plVar11[9] - 1U & (longlong)(int)uVar20) * 4);
      plVar31 = plVar11 + 7;
      if ((longlong *)plVar11[8] != (longlong *)0x0) {
        plVar31 = (longlong *)plVar11[8];
      }
      *(int *)((longlong)plVar31 + ((longlong)(int)plVar11[9] - 1U & (longlong)(int)uVar20) * 4) =
           iVar29;
    }
    else {
      *(int *)(plVar11 + 9) = iVar28;
      FUN_141716c12(plVar11);
    }
LAB_1427e0d1c:
    plVar31 = (longlong *)(*plVar11 + (longlong)iVar29 * 0x20 + 8);
  }
  else {
    uVar20 = *param_1;
    if ((~uVar20 & 0x3000000) == 0) {
      plVar31 = (longlong *)plVar11[10];
    }
    else if ((uVar20 >> 0x18 & 1) == 0) {
      if ((uVar20 >> 0x19 & 1) == 0) {
        plVar31 = (longlong *)0x0;
      }
      else {
        plVar31 = (longlong *)(plVar11[10] + 0x20);
      }
    }
    else {
      plVar31 = (longlong *)(plVar11[10] + 0x10);
    }
  }
LAB_1427e0dbc:
  lVar24 = *plVar31;
  iVar29 = (int)plVar31[1];
  lVar30 = (longlong)iVar29;
  if (lVar30 != 0) {
    lVar3 = *(longlong *)(param_1 + 3);
    lVar4 = *(longlong *)(param_1 + 5);
    lVar16 = lVar24 + 0x50;
    lVar26 = lVar30 * 0xa0;
    do {
      if ((((*(uint *)(lVar16 + -0x50) == *param_1) &&
           (*(longlong *)(lVar16 + -0x4c) == *(longlong *)(param_1 + 1))) &&
          (*(longlong *)(lVar16 + -0x44) == lVar3)) && (*(longlong *)(lVar16 + -0x3c) == lVar4)) {
        lVar24 = *(longlong *)(lVar16 + -0x34);
        if (lVar24 == *(longlong *)(param_1 + 7)) {
          lVar25 = *(longlong *)(param_1 + 9);
          lVar30 = lVar25;
          lVar26 = *(longlong *)(lVar16 + -0x2c);
          if (*(longlong *)(lVar16 + -0x2c) != lVar25) goto LAB_1427e0eef;
          lVar30 = *(longlong *)(param_1 + 0xb);
          if (*(longlong *)(lVar16 + -0x24) == lVar30) goto LAB_1427e0f21;
        }
        else {
          if ((*(longlong *)(param_1 + 7) != 0) && (lVar24 != 0)) {
            return 0;
          }
          lVar30 = *(longlong *)(param_1 + 9);
          lVar26 = *(longlong *)(lVar16 + -0x2c);
LAB_1427e0eef:
          lVar25 = lVar26;
          if (((lVar25 != lVar30) && (lVar30 != 0)) && (lVar25 != 0)) {
            return 0;
          }
        }
        lVar30 = *(longlong *)(param_1 + 0xb);
        lVar26 = *(longlong *)(lVar16 + -0x24);
        if (((lVar26 != lVar30) && (bVar32 = lVar30 != 0, lVar30 = lVar26, bVar32)) && (lVar26 != 0)
           ) {
          return 0;
        }
LAB_1427e0f21:
        if (*(longlong *)(param_1 + 1) == 0) {
          *(undefined8 *)(lVar16 + -0x4c) = 0;
        }
        if (lVar3 == 0) {
          *(undefined8 *)(lVar16 + -0x44) = *(undefined8 *)(param_1 + 3);
        }
        if (lVar4 == 0) {
          *(undefined8 *)(lVar16 + -0x3c) = *(undefined8 *)(param_1 + 5);
        }
        if (lVar24 == 0) {
          *(undefined8 *)(lVar16 + -0x34) = *(undefined8 *)(param_1 + 7);
        }
        if (lVar25 == 0) {
          *(undefined8 *)(lVar16 + -0x2c) = *(undefined8 *)(param_1 + 9);
        }
        if (lVar30 == 0) {
          *(undefined8 *)(lVar16 + -0x24) = *(undefined8 *)(param_1 + 0xb);
        }
        FUN_146273996(lVar16,param_1 + 0x14);
        return 0;
      }
      lVar16 = lVar16 + 0xa0;
      lVar26 = lVar26 + -0xa0;
    } while (lVar26 != 0);
  }
  if ((uVar2 & 0x3000000) == 0) {
    *(uint *)(plVar31 + 1) = iVar29 + 1U;
    if (*(uint *)((longlong)plVar31 + 0xc) < iVar29 + 1U) {
      FUN_141518130(plVar31,iVar29);
      lVar24 = *plVar31;
    }
    puVar21 = param_1;
    puVar22 = (undefined8 *)(lVar24 + lVar30 * 0xa0);
    for (lVar16 = 9; lVar16 != 0; lVar16 = lVar16 + -1) {
      *puVar22 = *(undefined8 *)puVar21;
      puVar21 = puVar21 + 2;
      puVar22 = puVar22 + 1;
    }
    lVar24 = lVar24 + lVar30 * 0xa0;
    *(uint *)(lVar24 + 0x48) = param_1[0x12];
    *(undefined8 *)(lVar24 + 0x70) = 0;
    *(undefined4 *)(lVar24 + 0x78) = 0;
    *(undefined8 *)(lVar24 + 0x50) = 0;
    *(undefined8 *)(lVar24 + 0x58) = 0;
    *(undefined8 *)(lVar24 + 0x7c) = 0xffffffff00000080;
    *(undefined4 *)(lVar24 + 0x84) = 0;
    *(undefined8 *)(lVar24 + 0x90) = 0;
    *(undefined4 *)(lVar24 + 0x98) = 0;
    FUN_14058acb2((undefined8 *)(lVar24 + 0x50),param_1 + 0x14);
  }
  else {
    FUN_1460d48b8(plVar11[10],param_1);
  }
  return 1;
}



// FUNCTION 1427e1199 FUN_1427e1199 body=41 status=ok
// SIG undefined FUN_1427e1199(void)

void FUN_1427e1199(void)

{
  DAT_14c949668 = 0;
  if (DAT_14c949660 != 0) {
    FUN_1400020a8();
  }
  FUN_146174dba();
  return;
}



// FUNCTION 1427e11c2 FUN_1427e11c2 body=37 status=ok
// SIG undefined FUN_1427e11c2(void)

void FUN_1427e11c2(longlong param_1,undefined8 *param_2,uint param_3)

{
  undefined8 uVar1;
  
  if (((int)param_3 < 0) || (*(int *)(param_1 + 0x48) <= (int)param_3)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + (ulonglong)param_3 * 0x10);
  }
  *param_2 = uVar1;
  return;
}



// FUNCTION 1427e11e8 FUN_1427e11e8 body=68 status=ok
// SIG undefined FUN_1427e11e8(void)

undefined8 FUN_1427e11e8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int7 iVar5;
  undefined8 uVar4;
  longlong *plVar6;
  ulonglong uVar7;
  
  uVar3 = (ulonglong)*(int *)(param_1 + 0x48);
  if ((longlong)uVar3 < 1) {
    uVar4 = 0;
  }
  else {
    iVar5 = (int7)(int3)((uint)*(int *)(param_1 + 0x48) >> 8);
    if (*(longlong *)(*(longlong *)(param_1 + 0x40) + 8) == param_2) {
      uVar4 = CONCAT71(iVar5,1);
    }
    else {
      plVar6 = (longlong *)(*(longlong *)(param_1 + 0x40) + 0x18);
      uVar2 = 1;
      do {
        uVar7 = uVar2;
        if (uVar3 == uVar7) break;
        lVar1 = *plVar6;
        plVar6 = plVar6 + 2;
        uVar2 = uVar7 + 1;
      } while (lVar1 != param_2);
      uVar4 = CONCAT71(iVar5,uVar7 < uVar3);
    }
  }
  return uVar4;
}



// FUNCTION 1427e122c FUN_1427e122c body=721 status=ok
// SIG undefined FUN_1427e122c(void)

void FUN_1427e122c(uint *param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  undefined1 auStack_8d8 [39];
  char local_8b1;
  uint *local_8b0;
  ulonglong local_8a8;
  longlong *local_8a0;
  undefined1 *local_898;
  undefined4 local_890;
  undefined8 local_888;
  undefined1 *local_880;
  undefined1 *local_878;
  undefined1 *local_870;
  char local_868;
  undefined1 local_860 [2070];
  undefined1 local_4a [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_8d8;
  local_8b1 = '\x01';
  local_8b0 = param_1;
  if ((*param_1 & 4) != 0) {
    local_880 = local_860;
    local_868 = '\0';
    local_870 = local_4a;
    local_888 = param_3;
    local_878 = local_880;
    FUN_14005eb5c(&local_888,&local_880);
    local_898 = local_880;
    local_890 = (undefined4)((ulonglong)((longlong)local_878 - (longlong)local_880) >> 1);
    local_8b1 = FUN_14475c62c();
    if (local_868 == '\x01') {
      FUN_1400020a8(local_880);
    }
  }
  uVar8 = *(uint *)(param_4 + 5);
  local_8a8 = (ulonglong)uVar8;
  local_8a0 = param_2;
  if (uVar8 == 0) {
    uVar14 = 1;
    uVar10 = 0;
    iVar13 = 0;
    uVar4 = 0;
  }
  else {
    puVar3 = (uint *)param_4[4];
    if ((uint *)param_4[4] == (uint *)0x0) {
      puVar3 = (uint *)(param_4 + 2);
    }
    uVar2 = *puVar3;
    if (uVar2 == 0) {
      iVar13 = uVar8 + 0x1e;
      if (-1 < (int)(uVar8 - 1)) {
        iVar13 = uVar8 - 1;
      }
      uVar10 = 0;
      uVar4 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar4 = uVar10;
      }
      iVar13 = 0;
      do {
        if (uVar4 == uVar10) goto LAB_1427e135e;
        iVar13 = iVar13 + 0x20;
        uVar2 = puVar3[uVar10 + 1];
        uVar10 = uVar10 + 1;
      } while (uVar2 == 0);
    }
    else {
      uVar10 = 0;
      iVar13 = 0;
    }
    uVar14 = (ulonglong)(-uVar2 & uVar2);
    uVar4 = uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar2 = (iVar13 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    uVar4 = (ulonglong)uVar2;
    if ((int)uVar8 <= (int)uVar2) {
      uVar4 = local_8a8;
    }
  }
  if ((uint)uVar4 != uVar8) {
    uVar8 = 0xffffffff;
    do {
      lVar11 = *param_4;
      local_880 = *(undefined1 **)(lVar11 + (longlong)(int)uVar4 * 0x18);
      cVar1 = (*(code *)**(undefined8 **)(local_8b0 + 2))
                        ((*(undefined8 **)(local_8b0 + 2))[1],&local_880);
      if (cVar1 != '\0') {
        lVar11 = lVar11 + (longlong)(int)uVar4 * 0x18;
        if (*local_8a0 == 0) {
          *local_8a0 = *(longlong *)(lVar11 + 8);
          **(char **)(local_8b0 + 4) = local_8b1;
          if ((local_8b1 != '\0') && ((*local_8b0 & 8) == 0)) break;
        }
        else if ((local_8b1 != '\0') && (**(char **)(local_8b0 + 4) == '\0')) {
          *local_8a0 = *(longlong *)(lVar11 + 8);
          **(char **)(local_8b0 + 4) = local_8b1;
        }
      }
      uVar8 = uVar8 & ~(uint)uVar14;
      puVar3 = (uint *)param_4[4];
      if ((uint *)param_4[4] == (uint *)0x0) {
        puVar3 = (uint *)(param_4 + 2);
      }
      uVar2 = *(uint *)(param_4 + 5);
      iVar9 = (int)uVar10;
      lVar11 = (longlong)iVar9;
      uVar7 = puVar3[lVar11] & uVar8;
      if (uVar7 == 0) {
        iVar5 = uVar2 + 0x1e;
        if (-1 < (int)(uVar2 - 1)) {
          iVar5 = uVar2 - 1;
        }
        iVar5 = iVar5 >> 5;
        iVar13 = iVar13 + 0x20;
        iVar6 = iVar5;
        if (iVar5 < iVar9) {
          iVar6 = iVar9;
        }
        if (iVar9 < iVar5) {
          lVar12 = 0;
          do {
            uVar7 = puVar3[lVar11 + lVar12 + 1];
            if (uVar7 != 0) {
              uVar10 = (ulonglong)(iVar9 + (int)lVar12 + 1);
              uVar8 = 0xffffffff;
              goto LAB_1427e149f;
            }
            iVar13 = iVar13 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar6 - lVar11 != lVar12);
          uVar8 = 0xffffffff;
          iVar9 = iVar6;
        }
        uVar10 = (ulonglong)(iVar9 + 1);
        uVar7 = uVar2;
      }
      else {
LAB_1427e149f:
        uVar14 = (ulonglong)(-uVar7 & uVar7);
        uVar4 = uVar14 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        uVar7 = (iVar13 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if ((int)uVar2 <= (int)uVar7) {
          uVar7 = uVar2;
        }
      }
      uVar4 = (ulonglong)uVar7;
    } while (uVar7 != (uint)local_8a8);
  }
LAB_1427e135e:
  if ((local_48 ^ (ulonglong)auStack_8d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1427e14fe FUN_1427e14fe body=43 status=ok
// SIG undefined FUN_1427e14fe(void)

void FUN_1427e14fe(void)

{
  if (DAT_14c9496c0 != (longlong *)0x0) {
    (**(code **)(*DAT_14c9496c0 + 8))(DAT_14c9496c0,1);
  }
  DAT_14c9496c0 = (longlong *)0x0;
  return;
}



// FUNCTION 1427e152a FUN_1427e152a body=106 status=ok
// SIG undefined FUN_1427e152a(void)

void FUN_1427e152a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_140c11da0(*(longlong *)(param_1 + 0x78),param_1,*(undefined8 *)(param_1 + 0x70),param_2,
                  param_3,param_4,param_5,param_6,param_7,param_8);
  }
  return;
}



// FUNCTION 1427e15a2 FUN_1427e15a2 body=72 status=ok
// SIG undefined FUN_1427e15a2(void)

undefined8 FUN_1427e15a2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined7 uVar3;
  undefined8 uVar2;
  undefined7 extraout_var;
  
  if ((param_2 == 0) || (*(longlong *)(param_1 + 8) != *(longlong *)(param_2 + 8))) {
    uVar2 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x78);
    uVar3 = (undefined7)((ulonglong)*(longlong *)(param_1 + 8) >> 8);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
      uVar3 = extraout_var;
    }
    uVar2 = CONCAT71(uVar3,*(longlong *)(param_2 + 0x78) == lVar1);
  }
  return uVar2;
}



// FUNCTION 1427e15ea FUN_1427e15ea body=110 status=ok
// SIG undefined FUN_1427e15ea(void)

void FUN_1427e15ea(byte param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)param_1;
  cVar1 = (**(code **)(*param_2 + 0x268))(param_2,uVar2);
  if ((cVar1 == '\0') || (cVar1 = FUN_14689a1d6(param_3,uVar2), cVar1 == '\0')) {
    if ((*(byte *)(param_3 + 0x51) & 1) == 0) {
      uVar2 = FUN_1404d8156(param_3);
    }
    else {
      uVar2 = 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001427e1644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x200))(param_2,param_4,uVar2);
  return;
}



// FUNCTION 1427e16dc FUN_1427e16dc body=968 status=ok
// SIG undefined FUN_1427e16dc(void)

ulonglong FUN_1427e16dc(longlong *param_1,uint param_2,undefined8 param_3)

{
  undefined2 *puVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  undefined *puVar11;
  bool bVar12;
  undefined1 auStack_2c8 [32];
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined *local_298;
  code *local_290;
  undefined8 local_288;
  undefined8 local_280;
  longlong *local_278;
  undefined8 local_270;
  undefined2 *local_268;
  undefined2 *local_260;
  ulonglong *local_258;
  char local_250;
  undefined2 local_248 [256];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  (**(code **)(*param_1 + 0x168))(param_1,&local_268);
  uVar8 = (ulonglong)(param_2 & 0x1fff);
  lVar10 = (longlong)((int)param_2 >> 0xd);
  uVar5 = 0;
  if (local_268 != *(undefined2 **)(*(longlong *)(&DAT_14c952ad0 + lVar10 * 8) + uVar8 * 0xc))
  goto LAB_1427e17f5;
  uVar7 = param_2 + 1;
  if (*(int *)(*(longlong *)(&DAT_14c952ad0 + lVar10 * 8) + 8 + uVar8 * 0xc) < 1) {
    uVar7 = 0;
  }
  local_270 = *(undefined8 *)
               (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar7 >> 0xd) * 8) +
               (ulonglong)(uVar7 & 0x1fff) * 0xc);
  local_268 = local_248;
  local_250 = '\0';
  local_258 = &local_48;
  local_288 = param_3;
  local_260 = local_268;
  FUN_14005eb5c(&local_270,&local_268);
  *local_260 = 0;
  puVar1 = local_268;
  uVar3 = FUN_140851d9a();
  local_2a8 = 0;
  lVar4 = FUN_140277cc4(uVar3,puVar1,4,0);
  if (local_250 == '\x01') {
    FUN_1400020a8(local_268);
  }
  uVar5 = 0;
  if (lVar4 == 0) goto LAB_1427e17f5;
  if (1 < *(int *)(*(longlong *)(&DAT_14c952ad0 + lVar10 * 8) + 8 + uVar8 * 0xc)) {
    iVar9 = 1;
    uVar5 = 0xc;
    do {
      iVar9 = iVar9 + *(int *)(*(longlong *)(&DAT_14c952ad0 + lVar10 * 8) + uVar8 * 0xc + 8 + uVar5)
              + -1;
      uVar5 = uVar5 + 0xc;
    } while (0 < iVar9);
    uVar5 = (ulonglong)((int)(uVar5 >> 2) * -0x55555555 + param_2);
  }
  if (param_1 == (longlong *)0x0) {
    local_268 = (undefined2 *)0x0;
  }
  else {
    local_268 = (undefined2 *)param_1[4];
  }
  local_280 = *(undefined8 *)
               (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)(uint)uVar5 >> 0xd) * 8) +
               (ulonglong)((uint)uVar5 & 0x1fff) * 0xc);
  local_278 = param_1;
  plVar6 = (longlong *)FUN_14689ac8c();
  if (plVar6 != (longlong *)0x0) {
    puVar11 = (undefined *)plVar6[1];
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952108) && (FUN_144b3d300(&DAT_14c952108), DAT_14c952108 == -1)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1))
      {
        FUN_140342cba();
        local_290 = FUN_1468c7f1e;
        local_298 = &DAT_14c949750;
        local_2a0 = 0;
        local_2a8 = 0x8001;
        FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
        atexit(FUN_14280c819);
        _Init_thread_footer(&DAT_14c951a88);
      }
      local_290 = FUN_1468e0f50;
      local_298 = &DAT_14c951a38;
      local_2a0 = 0;
      local_2a8 = 0x1008001;
      FUN_14000176a(&DAT_14c9520b8,L"FNumericProperty",0x1000000,0);
      atexit(FUN_142816f26);
      _Init_thread_footer(&DAT_14c952108);
    }
    if (DAT_14c9520c0 == 0) {
      bVar12 = puVar11 != (undefined *)0x0;
      if (puVar11 != &DAT_14c9520b8 && bVar12) {
        do {
          puVar11 = *(undefined **)(puVar11 + 0x30);
          bVar12 = puVar11 != (undefined *)0x0;
          if (puVar11 == &DAT_14c9520b8) break;
        } while (puVar11 != (undefined *)0x0);
      }
      if (bVar12) goto LAB_1427e1925;
    }
    else if ((*(ulonglong *)(puVar11 + 0x18) & DAT_14c9520c0) != 0) {
LAB_1427e1925:
      cVar2 = (**(code **)(*plVar6 + 0x198))(plVar6,uVar5,local_288);
      if (cVar2 != '\0') {
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar4);
        }
        param_1[0xf] = lVar4;
        (**(code **)(*param_1 + 0x38))(param_1,plVar6);
        uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
        goto LAB_1427e17f5;
      }
    }
    (**(code **)(*plVar6 + 8))(plVar6,1);
  }
  uVar5 = 0;
LAB_1427e17f5:
  if ((local_48 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1427e1ab6 FUN_1427e1ab6 body=41 status=ok
// SIG undefined FUN_1427e1ab6(void)

void FUN_1427e1ab6(void)

{
  DAT_14c949740 = 0;
  if (DAT_14c949738 != 0) {
    FUN_1400020a8();
  }
  FUN_145d61cde();
  return;
}



// FUNCTION 1427e1adf FUN_1427e1adf body=43 status=ok
// SIG undefined FUN_1427e1adf(void)

void FUN_1427e1adf(void)

{
  if (DAT_14c949788 != (longlong *)0x0) {
    (**(code **)(*DAT_14c949788 + 8))(DAT_14c949788,1);
  }
  DAT_14c949788 = (longlong *)0x0;
  return;
}



// FUNCTION 1427e1b0a FUN_1427e1b0a body=380 status=ok
// SIG undefined FUN_1427e1b0a(void)

undefined8 * FUN_1427e1b0a(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = (int)param_2[1];
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  if ((longlong)iVar1 != 0) {
    lVar6 = *param_2;
    lVar5 = 0;
    do {
      local_58 = *(longlong *)(lVar6 + lVar5);
      iVar2 = FUN_140180c78(&local_58);
      iVar4 = iVar4 + iVar2;
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (iVar4 != 0) {
    if (0 < iVar4) {
      FUN_1446f8c06(param_1,iVar4 + 1);
    }
    FUN_1400021e4((longlong)((int)param_2[1] + -1) * 8 + *param_2,&local_58);
    iVar1 = local_50 + -1;
    if (local_50 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(param_1,local_58,iVar1);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if (1 < (int)param_2[1]) {
      if ((*(uint *)(param_1 + 1) < 2) || (uVar3 = 0x2e, *(short *)*param_1 != 0x2f)) {
        uVar3 = 0x3a;
      }
      FUN_140002184(param_1,uVar3);
      if (1 < (int)param_2[1]) {
        lVar6 = (ulonglong)((int)param_2[1] - 2) << 3;
        while( true ) {
          FUN_1400021e4(*param_2 + lVar6,&local_58);
          iVar1 = local_50 + -1;
          if (local_50 == 0) {
            iVar1 = 0;
          }
          FUN_1400020e8(param_1,local_58,iVar1);
          if (local_58 != 0) {
            FUN_1400020a8();
          }
          if (lVar6 == 0) break;
          FUN_140002184(param_1,0x3a);
          lVar6 = lVar6 + -8;
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427e1c87 FUN_1427e1c87 body=43 status=ok
// SIG undefined FUN_1427e1c87(void)

void FUN_1427e1c87(void)

{
  if (DAT_14c9497e0 != (longlong *)0x0) {
    (**(code **)(*DAT_14c9497e0 + 8))(DAT_14c9497e0,1);
  }
  DAT_14c9497e0 = (longlong *)0x0;
  return;
}



// FUNCTION 1427e1cb2 FUN_1427e1cb2 body=692 status=ok
// SIG undefined FUN_1427e1cb2(void)

undefined8 FUN_1427e1cb2(longlong param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  uint *puVar1;
  int iVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  void *_Src;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 auStack_228 [44];
  uint local_1fc;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  void *local_1e8;
  undefined8 uStack_1e0;
  undefined **local_1d8;
  longlong *local_1d0;
  undefined ***local_1c8;
  undefined ****local_1c0;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_228;
  uVar3 = *(ulonglong *)(param_2 + 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  uVar9 = 0;
  if (uVar3 == DAT_14c892b54) {
    plVar4 = *(longlong **)(*param_3 + 8);
    lVar8 = (**(code **)(*plVar4 + 0x20))(plVar4);
    local_1e8 = (void *)0x0;
    uStack_1e0 = 0;
    local_1f8 = 0;
    uStack_1f0 = 0;
    local_1fc = 0;
    local_1c0 = &local_1c8;
    local_1d8 = &PTR_FUN_149e37810;
    local_1c8 = &local_1d8;
    puVar5 = (ulonglong *)plVar4[1];
    puVar1 = (uint *)*puVar5 + 1;
    local_1d0 = plVar4;
    if ((uint *)puVar5[1] < puVar1) {
      if ((*(byte *)((longlong)plVar4 + 0x2a) & 2) == 0) {
        (**(code **)(*plVar4 + 0x170))(plVar4,&local_1fc,4);
      }
      else {
        FUN_14572512c(plVar4,&local_1fc);
      }
    }
    else {
      local_1fc = *(uint *)*puVar5;
      *puVar5 = (ulonglong)puVar1;
    }
    uVar7 = local_1fc;
    if (local_1fc != 0) {
      do {
        uVar3 = uStack_1e0;
        if ((int)local_1fc < 0) {
          puVar11 = (undefined8 *)((ulonglong)~local_1fc * 0x38 + *(longlong *)(lVar8 + 8));
        }
        else {
          puVar11 = (undefined8 *)
                    (*(longlong *)(lVar8 + 0x18) + (ulonglong)local_1fc * 0x68 + -0x68);
        }
        lVar10 = (longlong)(int)uStack_1e0;
        uVar6 = (int)uStack_1e0 + 1;
        uStack_1e0 = CONCAT44(uStack_1e0._4_4_,uVar6);
        if (uStack_1e0._4_4_ < uVar6) {
          FUN_1446f84a2(&local_1e8,uVar3 & 0xffffffff);
        }
        *(undefined8 *)((longlong)local_1e8 + lVar10 * 8) = *puVar11;
        local_1fc = *(uint *)(puVar11 + 1);
      } while (local_1fc != 0);
      if (0 < (int)uVar7) {
        lVar10 = (longlong)(int)uStack_1e0;
        uVar9 = *(undefined8 *)(*(longlong *)(lVar8 + 0xa0) + 0x18);
        uVar7 = (int)uStack_1e0 + 1;
        uStack_1e0 = CONCAT44(uStack_1e0._4_4_,uVar7);
        if (uStack_1e0._4_4_ < uVar7) {
          FUN_1446f84a2(&local_1e8);
        }
        *(undefined8 *)((longlong)local_1e8 + lVar10 * 8) = uVar9;
      }
      if ((int)uStack_1e0 != 0) {
        if (lVar8 == 0) {
          FUN_1456c2db2(&local_1f8,0,0);
        }
        else {
          iVar2 = *(int *)(lVar8 + 0x98);
          lVar8 = FUN_1456c2db2(&local_1f8,0,0);
          if ((iVar2 == 1) && (lVar8 == 0)) {
            FUN_14689b444(&local_1f8);
          }
        }
      }
    }
    _Src = local_1e8;
    param_4 = param_4 + *(int *)(param_1 + 0x44);
    lVar8 = (longlong)*(int *)(param_1 + 0x34) * (longlong)*(int *)(param_2 + 0x40);
    puVar11 = (undefined8 *)(param_4 + lVar8);
    *(undefined8 *)(lVar8 + param_4) = local_1f8;
    *(undefined8 *)(lVar8 + 8 + param_4) = uStack_1f0;
    if (puVar11 != &local_1f8) {
      iVar2 = (int)uStack_1e0;
      lVar10 = (longlong)(int)uStack_1e0;
      *(int *)(puVar11 + 3) = (int)uStack_1e0;
      if ((int)uStack_1e0 == 0 && *(int *)((longlong)puVar11 + 0x1c) == 0) {
        *(undefined4 *)((longlong)puVar11 + 0x1c) = 0;
      }
      else {
        puVar11 = (undefined8 *)(param_4 + lVar8 + 0x10);
        FUN_1401b309e(puVar11,uStack_1e0 & 0xffffffff);
        if (iVar2 != 0) {
          memcpy((void *)*puVar11,_Src,lVar10 << 3);
        }
      }
    }
    if (local_1e8 != (void *)0x0) {
      FUN_1400020a8();
    }
    uVar9 = 3;
  }
  if ((local_48 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 1427e1f68 FUN_1427e1f68 body=903 status=ok
// SIG undefined FUN_1427e1f68(void)

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_1427e1f68(undefined8 *param_1,longlong *param_2)

{
  void *_Src;
  char cVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_120;
  longlong local_110;
  int local_108;
  longlong local_100;
  int local_f8;
  longlong local_f0;
  int local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  longlong local_a8 [4];
  longlong local_88 [3];
  undefined8 uStack_70;
  undefined2 *local_68;
  undefined8 uStack_60;
  undefined2 *local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_58 = (undefined2 *)0x0;
  uStack_50 = 0;
  local_68 = (undefined2 *)0x0;
  uStack_60 = 0;
  local_88[2] = 0;
  uStack_70 = 0;
  local_88[0] = 0;
  local_88[1] = 0;
  FUN_140056680(local_a8,&DAT_149e0635c);
  local_120 = 0;
  local_128 = 1;
  cVar1 = FUN_1407cdbc6(param_2,local_a8,&local_58,local_88);
  if (cVar1 == '\0') {
    cVar1 = '\0';
  }
  else {
    FUN_140056680(&local_c8,&DAT_149e31048);
    local_120 = 0;
    local_128 = 1;
    cVar1 = FUN_1407cdbc6(local_88,&local_c8,&local_68,local_88 + 2);
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if (cVar1 != '\0') {
    local_a8[0] = 0;
    local_a8[1] = 0;
    local_a8[2] = 0;
    local_c8 = *param_2;
    iVar2 = (int)param_2[1] + -1;
    if ((int)param_2[1] == 0) {
      iVar2 = 0;
    }
    uStack_c0 = CONCAT44(uStack_c0._4_4_,iVar2);
    FUN_1448405cc(&local_c8,local_a8,local_a8 + 1);
    local_b8 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_110 = 0;
    local_128 = 0;
    cVar1 = FUN_14689995c(0x20,local_a8,&local_c8);
    if (cVar1 != '\0') {
      FUN_14103ad02(param_1,local_c8,uStack_c0,local_b8);
      goto LAB_1427e20ad;
    }
    puVar3 = &DAT_149dfb77a;
    if ((int)uStack_50 != 0) {
      puVar3 = local_58;
    }
    FUN_1446f470e(&local_d0,puVar3,1);
    puVar3 = &DAT_149dfb77a;
    if ((int)uStack_60 != 0) {
      puVar3 = local_68;
    }
    FUN_1446f470e(&local_d8,puVar3,1);
    local_a8[0] = local_d8;
    local_a8[1] = 0;
    local_a8[2] = local_d0;
    local_b8 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_e0 = 0;
    local_128 = 0;
    cVar1 = FUN_14689995c(0x46);
    if (cVar1 != '\0') {
      local_f0 = local_88[2];
      local_e8 = (int)uStack_70 + -1;
      if ((int)uStack_70 == 0) {
        local_e8 = 0;
      }
      FUN_14103ad02(&local_110,local_c8,uStack_c0,local_b8);
      local_100 = local_110;
      local_f8 = local_108 + -1;
      if (local_108 == 0) {
        local_f8 = 0;
      }
      FUN_1461c06e2(param_1,&local_100,&local_f0);
      if (local_110 != 0) {
        FUN_1400020a8();
      }
      goto LAB_1427e20ad;
    }
  }
  *param_1 = 0;
  iVar2 = (int)param_2[1];
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar2,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar2 * 2);
  }
LAB_1427e20ad:
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if (local_88[2] != 0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427e2320 FUN_1427e2320 body=52 status=ok
// SIG undefined FUN_1427e2320(void)

void FUN_1427e2320(void)

{
  DAT_14c950c20 = 0;
  FUN_14018802a(DAT_14c949890);
  DAT_14c949890 = 0;
                    /* WARNING: Could not recover jumptable at 0x0001427e234d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14c949868);
  return;
}



// FUNCTION 1427e2354 FUN_1427e2354 body=69 status=ok
// SIG undefined FUN_1427e2354(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427e2354(void)

{
  _DAT_14c9498a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427e2396. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9498a8,1);
  return;
}



// FUNCTION 1427e23b6 FUN_1427e23b6 body=69 status=ok
// SIG undefined FUN_1427e23b6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427e23b6(void)

{
  _DAT_14c9498c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427e23f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9498c8,1);
  return;
}



// FUNCTION 1427e23fb FUN_1427e23fb body=49 status=ok
// SIG undefined FUN_1427e23fb(void)

void FUN_1427e23fb(void)

{
  FUN_1468b4b83(&DAT_14c9498b0);
  DAT_14c9498b8 = 0;
  if (DAT_14c9498bc == 0) {
    return;
  }
  FUN_14689d876();
  return;
}



// FUNCTION 1427e242c FUN_1427e242c body=69 status=ok
// SIG undefined FUN_1427e242c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427e242c(void)

{
  _DAT_14c9498d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427e246e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9498d8,1);
  return;
}



// FUNCTION 1427e2471 FUN_1427e2471 body=69 status=ok
// SIG undefined FUN_1427e2471(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427e2471(void)

{
  _DAT_14c9498e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427e24b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9498e8,1);
  return;
}



// FUNCTION 1427e24b6 FUN_1427e24b6 body=69 status=ok
// SIG undefined FUN_1427e24b6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427e24b6(void)

{
  _DAT_14c9498f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427e24f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c949900,1);
  return;
}



// FUNCTION 1427e24fb FUN_1427e24fb body=69 status=ok
// SIG undefined FUN_1427e24fb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427e24fb(void)

{
  _DAT_14c949908 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427e253d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c949910,1);
  return;
}



// FUNCTION 1427e2540 FUN_1427e2540 body=69 status=ok
// SIG undefined FUN_1427e2540(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427e2540(void)

{
  _DAT_14c949920 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427e2582. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c949928,1);
  return;
}



// FUNCTION 1427e2585 FUN_1427e2585 body=69 status=ok
// SIG undefined FUN_1427e2585(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427e2585(void)

{
  _DAT_14c949938 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427e25c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c949940,1);
  return;
}



// FUNCTION 1427e25ca FUN_1427e25ca body=84 status=ok
// SIG undefined FUN_1427e25ca(void)

/* WARNING: Removing unreachable block (ram,0x0001427e25e8) */

void FUN_1427e25ca(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_14c949988;
  LOCK();
  UNLOCK();
  if ((DAT_14c949980 & 1) != 0) {
    do {
    } while( true );
  }
  DAT_14c949988 = (undefined8 *)0x0;
  DAT_14c949980 = 0;
  while (puVar1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar1;
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 1427e261e FUN_1427e261e body=84 status=ok
// SIG undefined FUN_1427e261e(void)

/* WARNING: Removing unreachable block (ram,0x0001427e263c) */

void FUN_1427e261e(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_14c9499c8;
  LOCK();
  UNLOCK();
  if ((DAT_14c9499c0 & 1) != 0) {
    do {
    } while( true );
  }
  DAT_14c9499c8 = (undefined8 *)0x0;
  DAT_14c9499c0 = 0;
  while (puVar1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar1;
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 1427e2677 FUN_1427e2677 body=169 status=ok
// SIG undefined FUN_1427e2677(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427e2677(void)

{
  DAT_14c949e60 = 0;
  if (DAT_14c949e58 != 0) {
    FUN_1400020a8();
  }
  DAT_14c949e20 = 0;
  if (DAT_14c949e24 != 0) {
    FUN_1447a08a2(&DAT_14c949e18,0);
  }
  _DAT_14c949e48 = 0xffffffff;
  DAT_14c949e40 = 0;
  if (0x80 < DAT_14c949e44) {
    DAT_14c949e44 = 0x80;
    FUN_1446efbd8(&DAT_14c949e28,0);
  }
  if (DAT_14c949e38 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c949e18 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1427e272e FUN_1427e272e body=49 status=ok
// SIG undefined FUN_1427e272e(void)

void FUN_1427e272e(void)

{
  FUN_140ea1d39(DAT_14c949ea0,DAT_14c949ea8);
  if (DAT_14c949ea0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1427e2760 FUN_1427e2760 body=99 status=ok
// SIG undefined FUN_1427e2760(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427e2760(void)

{
  longlong lVar1;
  
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c949ec0);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c949ec0,4000);
  DAT_14c949ee8 = 0;
  _DAT_14c949ef0 = 0;
  lVar1 = 0x48;
  do {
    *(undefined4 *)((longlong)&DAT_14c949eb8 + lVar1) = 0;
    memset(&DAT_14c949ec0 + lVar1,0,0x100);
    lVar1 = lVar1 + 0x140;
  } while (lVar1 != 0x1588);
  return;
}



// FUNCTION 1427e27c3 FUN_1427e27c3 body=104 status=ok
// SIG undefined FUN_1427e27c3(void)

void FUN_1427e27c3(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  lVar2 = 0x1580;
  puVar3 = &DAT_14c94b308;
  do {
    iVar1 = *(int *)(lVar2 + 0x14c949d80);
    if ((longlong)iVar1 != 0) {
      lVar4 = 0;
      do {
        FUN_1400020a8(*(undefined8 *)((longlong)puVar3 + lVar4));
        lVar4 = lVar4 + 8;
      } while ((longlong)iVar1 * 8 != lVar4);
    }
    lVar2 = lVar2 + -0x140;
    puVar3 = puVar3 + -0x28;
  } while (lVar2 != 0x40);
  FUN_1417164a4();
  return;
}



// FUNCTION 1427e282b FUN_1427e282b body=49 status=ok
// SIG undefined FUN_1427e282b(void)

void FUN_1427e282b(void)

{
  longlong lVar1;
  
  lVar1 = 0x4c00;
  do {
    if (*(longlong *)(lVar1 + 0x14c94b400) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x4c0;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 1427e285c FUN_1427e285c body=67 status=ok
// SIG undefined FUN_1427e285c(void)

void FUN_1427e285c(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x18);
    uVar1 = (&DAT_14c949f00)[lVar2 * 0x50];
    if (0x1f < (ulonglong)uVar1) {
      FUN_1400020a8(param_2 + -8);
      return;
    }
    (&DAT_14c949f00)[lVar2 * 0x50] = uVar1 + 1;
    *(longlong *)(&DAT_14c949f08 + (ulonglong)uVar1 * 8 + lVar2 * 0x140) = param_2 + -8;
  }
  return;
}



// FUNCTION 1427e289f FUN_1427e289f body=69 status=ok
// SIG undefined FUN_1427e289f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427e289f(void)

{
  _DAT_14c950200 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427e28e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c950208,1);
  return;
}



// FUNCTION 1427e28e4 FUN_1427e28e4 body=1804 status=ok
// SIG undefined FUN_1427e28e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1427e28e4(undefined4 param_1,double param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  int iVar10;
  LARGE_INTEGER *pLVar11;
  byte bVar12;
  undefined1 uVar13;
  byte bVar14;
  undefined8 unaff_RDI;
  longlong *plVar15;
  longlong *plVar16;
  undefined7 uVar17;
  int iVar18;
  undefined1 uVar19;
  int iVar20;
  longlong lVar21;
  double dVar22;
  undefined1 auStack_d8 [38];
  undefined1 local_b2;
  undefined1 local_b1;
  undefined8 local_b0;
  LARGE_INTEGER local_a8;
  ulonglong local_a0;
  
  uVar8 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a0 = uVar8;
  if (DAT_14c872a72 == '\x01') {
    LOCK();
    DAT_14c950c00 = 1;
    UNLOCK();
    uVar8 = FUN_1468fef18(&DAT_14c9647b8);
    DAT_14c950210 = '\0';
  }
  uVar19 = DAT_14c950c28;
  if (((DAT_14c950c00 & 1) == 0) && ((DAT_14c949801 & 1) == 0)) goto LAB_1427e2fa7;
  LOCK();
  DAT_14c949801 = 1;
  UNLOCK();
  plVar15 = (longlong *)CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  bVar12 = (byte)param_1;
  if ((DAT_14c950c00 & 1) == 0) {
    FUN_14275c362(1);
  }
  else {
    DAT_14c950c28 = 1;
    QueryPerformanceCounter(&local_a8);
    DAT_14c949808 = (double)local_a8.QuadPart * DAT_14c83f420 + 16777216.0;
    if (((DAT_14c950214 < DAT_14c949828) || ((DAT_14c949e10 & 1) != 0)) &&
       (cVar7 = FUN_1427e2ff1(param_1,param_2), cVar7 != '\0')) {
LAB_1427e2f2a:
      bVar14 = 0;
      uVar17 = 0;
    }
    else {
      QueryPerformanceCounter(&local_a8);
      uVar13 = DAT_14c950c28;
      dVar22 = (double)local_a8.QuadPart * DAT_14c83f420 + 16777216.0;
      DAT_14c950c28 = 1;
      if (DAT_14c950c01 == 0) {
        local_b1 = uVar19;
        if (DAT_14c950210 != '\x01') {
          DAT_14c950c04 = 0;
          DAT_14c950210 = '\x01';
        }
        iVar18 = 0;
        local_b2 = uVar13;
        if (DAT_14c950c04 < DAT_14c949828) {
          iVar20 = 0;
          plVar15 = (longlong *)0x0;
          iVar6 = 1;
          do {
            iVar18 = iVar6;
            puVar1 = *(undefined8 **)(DAT_14c949820 + (longlong)DAT_14c950c04 * 8);
            if ((*(uint *)(puVar1 + 1) >> 0x1c & 1) != 0) {
              plVar16 = (longlong *)*puVar1;
              cVar7 = (**(code **)(*plVar16 + 0xc0))(plVar16);
              uVar5 = DAT_14c949818;
              if (cVar7 == '\0') {
                lVar21 = (longlong)(int)DAT_14c949818;
                DAT_14c949818 = DAT_14c949818 + 1;
                if (DAT_14c94981c < DAT_14c949818) {
                  FUN_1447f76d2(&DAT_14c949810,uVar5);
                }
                *(longlong **)(DAT_14c949810 + lVar21 * 8) = plVar16;
                DAT_14c950c08 = DAT_14c950c08 + 1;
              }
              else {
                FUN_144757d26(plVar16);
              }
            }
            DAT_14c950c04 = DAT_14c950c04 + 1;
            if (((bVar12 != 0) && (iVar20 + (int)((ulonglong)plVar15 / 10) * 10 == 0)) &&
               (QueryPerformanceCounter(&local_a8),
               param_2 < ((double)local_a8.QuadPart * DAT_14c83f420 + 16777216.0) - DAT_14c949808))
            {
              uVar9 = CONCAT71((int7)((ulonglong)&local_a8 >> 8),1);
              goto LAB_1427e2ba7;
            }
            iVar20 = iVar20 + -1;
            plVar15 = (longlong *)(ulonglong)((int)plVar15 + 1);
            iVar6 = iVar18 + 1;
          } while (DAT_14c950c04 < DAT_14c949828);
          uVar9 = 0;
        }
        else {
          uVar9 = 0;
        }
LAB_1427e2ba7:
        uVar13 = local_b2;
        uVar19 = local_b1;
        if (DAT_14c949828 <= DAT_14c950c04) {
          local_b0 = uVar9;
          if (0 < DAT_14c950c08) {
            dVar3 = (double)_DAT_14c75ec84;
            uVar8 = 0;
            dVar4 = dVar22;
            do {
              iVar6 = DAT_14c950c08;
              iVar20 = 0;
              do {
                iVar10 = iVar18;
                plVar15 = *(longlong **)(DAT_14c949810 + (longlong)iVar20 * 8);
                cVar7 = (**(code **)(*plVar15 + 0xc0))(plVar15);
                if (cVar7 == '\0') {
                  iVar20 = iVar20 + 1;
                }
                else {
                  FUN_144757d26(plVar15);
                  *(undefined8 *)(DAT_14c949810 + (longlong)iVar20 * 8) =
                       *(undefined8 *)(DAT_14c949810 + -8 + (longlong)DAT_14c950c08 * 8);
                  DAT_14c950c08 = DAT_14c950c08 + -1;
                }
                if (((bVar12 != 0) && (iVar10 % 10 == 0)) &&
                   (pLVar11 = &local_a8, QueryPerformanceCounter(&local_a8),
                   param_2 < ((double)local_a8.QuadPart * DAT_14c83f420 + 16777216.0) -
                             DAT_14c949808)) {
                  local_b0 = CONCAT71((int7)((ulonglong)pLVar11 >> 8),1);
                  break;
                }
                iVar18 = iVar10 + 1;
              } while (iVar20 < DAT_14c950c08);
              if ((bVar12 != 0) || (DAT_14c950c08 < 1)) break;
              if ((iVar6 == DAT_14c950c08) &&
                 (((int)uVar8 + (int)(uVar8 / 10) * -10 == 0 &&
                  (QueryPerformanceCounter(&local_a8),
                  dVar3 < ((double)local_a8.QuadPart * DAT_14c83f420 + 16777216.0) - dVar4)))) {
                QueryPerformanceCounter(&local_a8);
                dVar4 = (double)local_a8.QuadPart * DAT_14c83f420 + 16777216.0;
                if (DAT_14c75ec80 == '\x01') {
                  if ((0 < DAT_14c950c08) && (0 < DAT_14c75ec74)) {
                    plVar16 = (longlong *)&DAT_00000001;
                    do {
                      (**(code **)(**(longlong **)(DAT_14c949810 + -8 + (longlong)plVar16 * 8) +
                                  0xc0))();
                      plVar15 = plVar16;
                      if ((longlong)DAT_14c950c08 <= (longlong)plVar16) break;
                      plVar15 = (longlong *)((longlong)plVar16 + 1);
                      bVar2 = (longlong)plVar16 < (longlong)DAT_14c75ec74;
                      plVar16 = plVar15;
                    } while (bVar2);
                  }
                }
                else if (DAT_14c950c0c == '\0') {
                  DAT_14c950c0c = '\x01';
                }
              }
              iVar18 = iVar10 + 1;
              uVar8 = (ulonglong)((int)uVar8 + 1);
              FUN_14000f986(0);
            } while (0 < DAT_14c950c08);
          }
          uVar9 = local_b0;
          uVar19 = local_b1;
          uVar13 = local_b2;
          if (DAT_14c950c08 == 0) {
            DAT_14c949818 = 0;
            if (DAT_14c94981c != 0x100) {
              FUN_14079e7a6(&DAT_14c949810,0x100);
            }
            DAT_14c950c01 = 1;
            DAT_14c950210 = '\0';
            DAT_14c950c0c = '\0';
          }
        }
      }
      else {
        uVar9 = 0;
      }
      if (((~DAT_14c950c01 | (byte)uVar9) & 1) == 0) {
        if (DAT_14c950210 == '\0') {
          DAT_14c949e90 = 0;
          DAT_14c949e94 = 0;
          _DAT_14c949e98 = 0;
          DAT_14c950210 = '\x01';
        }
        FUN_1427e3f24(param_1,param_2,DAT_14c949808);
        uVar17 = (undefined7)((ulonglong)plVar15 >> 8);
        cVar7 = DAT_14c75ec78;
        if (DAT_14c75ec78 == '\x01') {
          DAT_14c950c01 = 0;
          LOCK();
          DAT_14c950c00 = 0;
          UNLOCK();
          DAT_14c950210 = '\0';
          _DAT_14c949e98 = 0;
          cVar7 = '\x01';
        }
      }
      else {
        uVar17 = 0;
        cVar7 = '\0';
      }
      QueryPerformanceCounter(&local_a8);
      dVar22 = ((double)local_a8.QuadPart * DAT_14c83f420 + 16777216.0) - dVar22;
      iVar18 = DAT_14c9502e8 + 1;
      DAT_14c9502d8 = DAT_14c9502d8 + dVar22;
      if (_DAT_14c9502e0 < dVar22) {
        _DAT_14c9502ec = DAT_14c9502e8;
        _DAT_14c9502e0 = dVar22;
      }
      _DAT_14c950230 = param_2;
      DAT_14c9502e8 = iVar18;
      DAT_14c950c28 = uVar13;
      if (cVar7 == '\0') goto LAB_1427e2f2a;
      uVar9 = FUN_14171c548();
      FUN_1447f69b6(uVar9);
      bVar14 = 1;
    }
    if ((bVar12 ^ 1) == 0) {
      QueryPerformanceCounter(&local_a8);
      _DAT_14c950218 =
           (((double)local_a8.QuadPart * DAT_14c83f420 + 16777216.0) - DAT_14c949808) +
           _DAT_14c950218;
    }
    plVar15 = (longlong *)CONCAT71(uVar17,bVar14 & (bVar12 ^ 1));
    DAT_14c950c28 = uVar19;
  }
  uVar8 = (ulonglong)plVar15 & 0xffffffff ^ 1;
  DAT_14c95031c = (undefined1)uVar8;
  if ((bVar12 & (byte)plVar15) == 1) {
    uVar8 = FUN_1447f69b6(&DAT_14c9646c8);
  }
  bVar12 = DAT_14c949801;
  if ((byte)plVar15 != 0) {
    LOCK();
    DAT_14c949801 = 0;
    uVar8 = (ulonglong)bVar12;
    UNLOCK();
  }
LAB_1427e2fa7:
  if ((local_a0 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 1427e2ff1 FUN_1427e2ff1 body=687 status=ok
// SIG undefined FUN_1427e2ff1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1427e2ff1(byte param_1,double param_2)

{
  int iVar1;
  longlong *plVar2;
  byte bVar3;
  char cVar4;
  LARGE_INTEGER *unaff_RSI;
  ulonglong uVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_b8 [32];
  LARGE_INTEGER local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (DAT_14c949e10 == '\x01') {
    bVar3 = FUN_141330bcb();
    dVar8 = param_2;
    if (param_1 == 0) {
      dVar8 = 0.0;
    }
    cVar4 = FUN_1427e3652(bVar3 ^ 1,dVar8);
    if (param_1 == 1 && cVar4 == '\0') {
      unaff_RSI = &local_98;
      QueryPerformanceCounter(unaff_RSI);
      dVar7 = ((double)local_98.QuadPart * DAT_14c83f420 + 16777216.0) - DAT_14c949808;
      dVar8 = param_2;
      if (dVar7 <= param_2) {
        dVar8 = dVar7;
      }
      param_2 = param_2 - dVar8;
    }
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if (cVar4 != '\0') goto LAB_1427e3261;
  }
  bVar3 = DAT_14c949802;
  LOCK();
  DAT_14c949802 = 1;
  UNLOCK();
  FUN_1447f69b6(&DAT_14c964740);
  QueryPerformanceCounter(&local_98);
  dVar8 = (double)local_98.QuadPart * DAT_14c83f420 + 16777216.0;
  uVar5 = 0;
  if (DAT_14c950214 < DAT_14c949828) {
    dVar7 = 0.0;
    uVar6 = 0;
    do {
      iVar1 = DAT_14c950214 + 1;
      plVar2 = (longlong *)**(longlong **)(DAT_14c949820 + (longlong)DAT_14c950214 * 8);
      DAT_14c950214 = iVar1;
      if (-1 < (short)(int)plVar2[1]) {
        FUN_144757f48(plVar2,0x8000);
        (**(code **)(*plVar2 + 0xb8))(plVar2);
      }
      if (((int)uVar5 + (int)(uVar6 / 10) * 10 == 0 & param_1) != 0) {
        QueryPerformanceCounter(&local_98);
        dVar7 = (double)local_98.QuadPart * DAT_14c83f420 + 16777216.0;
        if (param_2 < dVar7 - dVar8) break;
      }
      uVar5 = (ulonglong)((int)uVar5 - 1);
      uVar6 = (ulonglong)((int)uVar6 + 1);
    } while (DAT_14c950214 < DAT_14c949828);
    uVar5 = CONCAT71((int7)(uVar5 >> 8),DAT_14c950214 < DAT_14c949828);
    if ((dVar7 == 0.0) && (!NAN(dVar7))) goto LAB_1427e31d6;
  }
  else {
LAB_1427e31d6:
    QueryPerformanceCounter(&local_98);
    dVar7 = (double)local_98.QuadPart * DAT_14c83f420 + 16777216.0;
  }
  dVar7 = dVar7 - dVar8;
  DAT_14c9502c0 = DAT_14c9502c0 + dVar7;
  if (_DAT_14c9502c8 < dVar7) {
    _DAT_14c9502d4 = DAT_14c9502d0;
    _DAT_14c9502c8 = dVar7;
  }
  _DAT_14c950228 = param_2;
  DAT_14c9502d0 = DAT_14c9502d0 + 1;
  FUN_1447f69b6(&DAT_14c964758);
  LOCK();
  UNLOCK();
  DAT_14c949802 = bVar3 & 1;
LAB_1427e3261:
  if ((local_90 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 1427e32a1 FUN_1427e32a1 body=69 status=ok
// SIG undefined FUN_1427e32a1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427e32a1(void)

{
  _DAT_14c950320 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427e32e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c950328,1);
  return;
}



// FUNCTION 1427e32e6 FUN_1427e32e6 body=69 status=ok
// SIG undefined FUN_1427e32e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427e32e6(void)

{
  _DAT_14c950330 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427e3328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c950338,1);
  return;
}



// FUNCTION 1427e332b FUN_1427e332b body=69 status=ok
// SIG undefined FUN_1427e332b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427e332b(void)

{
  _DAT_14c950340 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427e336d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c950348,1);
  return;
}



// FUNCTION 1427e3370 FUN_1427e3370 body=69 status=ok
// SIG undefined FUN_1427e3370(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427e3370(void)

{
  _DAT_14c950350 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427e33b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c950358,1);
  return;
}



// FUNCTION 1427e33b5 FUN_1427e33b5 body=69 status=ok
// SIG undefined FUN_1427e33b5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427e33b5(void)

{
  _DAT_14c950360 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427e33f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c950368,1);
  return;
}



// FUNCTION 1427e33fa FUN_1427e33fa body=599 status=ok
// SIG undefined FUN_1427e33fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427e33fa(uint param_1)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  LARGE_INTEGER *pLVar6;
  longlong lVar7;
  undefined1 auStack_4d8 [40];
  uint local_4b0;
  LARGE_INTEGER *local_4a8;
  LARGE_INTEGER *local_498;
  undefined8 *puStack_490;
  undefined4 *local_488;
  undefined4 local_47c;
  code *local_478;
  LARGE_INTEGER **local_470;
  LARGE_INTEGER local_468;
  undefined4 local_460;
  LARGE_INTEGER local_458 [128];
  LARGE_INTEGER *local_58;
  ulonglong local_50;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_4d8;
  if (DAT_14c964108 != 0) {
    QueryPerformanceCounter(local_458);
    dVar1 = (double)local_458[0].QuadPart * DAT_14c83f420;
    local_47c = 0;
    local_58 = (LARGE_INTEGER *)0x0;
    local_50 = 0x2000000000;
    local_48 = 0;
    iVar2 = 1;
    if ((param_1 & 1) != 0) {
      iVar4 = (DAT_14c9640f0 - (DAT_14c9640f0 + 1 >> 0x1f)) + 1 >> 1;
      iVar2 = (**(code **)(*DAT_14c82b500 + 0x20))();
      iVar3 = 0x10;
      if (iVar2 < 0x10) {
        iVar3 = iVar2;
      }
      iVar2 = 1;
      if (1 < iVar3) {
        iVar2 = iVar3;
      }
      if (iVar4 <= iVar2) {
        iVar2 = iVar4;
      }
    }
    FUN_141116956(local_458,param_1,DAT_14c9640f0,iVar2);
    local_470 = &local_498;
    puStack_490 = &DAT_14c9640e8;
    local_488 = &local_47c;
    local_4a8 = &local_468;
    local_468.QuadPart = 0;
    local_460 = 0;
    local_478 = FUN_1427f0d24;
    local_4b0 = (uint)((int)local_50 == 1);
    local_498 = local_458;
    FUN_1411ca36e(L"GC.DissolveUnreachableClusters",local_50 & 0xffffffff,1);
    local_498 = (LARGE_INTEGER *)0x0;
    puStack_490 = (undefined8 *)0x0;
    FUN_14118fe4c(local_458,&local_498);
    pLVar6 = local_498;
    lVar5 = (longlong)(int)puStack_490;
    if (lVar5 == 0) {
      _DAT_14c950304 = 0;
    }
    else {
      lVar7 = 0;
      do {
        FUN_140d631ae(&DAT_14c9640e8,*(undefined4 *)((longlong)pLVar6 + lVar7));
        lVar7 = lVar7 + 4;
      } while (lVar5 * 4 != lVar7);
      _DAT_14c950304 = (int)puStack_490;
    }
    _DAT_14c950308 = local_47c;
    QueryPerformanceCounter(&local_468);
    _DAT_14c950270 =
         ((double)local_468.QuadPart * DAT_14c83f420 + 16777216.0) - (dVar1 + 16777216.0);
    if (local_498 != (LARGE_INTEGER *)0x0) {
      FUN_1400020a8();
    }
    pLVar6 = local_458;
    if (local_58 != (LARGE_INTEGER *)0x0) {
      pLVar6 = local_58;
    }
    FUN_14118ffe0(pLVar6,local_50 & 0xffffffff);
    if (local_58 != (LARGE_INTEGER *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_4d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427e3652 FUN_1427e3652 body=687 status=ok
// SIG undefined FUN_1427e3652(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1427e3652(undefined4 param_1,undefined8 param_2)

{
  double dVar1;
  longlong lVar2;
  int iVar3;
  BOOL BVar4;
  ulonglong uVar5;
  undefined4 extraout_var;
  int iVar6;
  undefined4 uVar7;
  double dVar8;
  undefined1 auStack_c8 [40];
  uint local_a0;
  undefined8 *local_98;
  LARGE_INTEGER local_88;
  double *local_80;
  undefined8 *local_78;
  int *local_70;
  int local_64;
  double local_60;
  undefined8 local_58;
  code *local_50;
  LARGE_INTEGER *local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_58 = param_2;
  QueryPerformanceCounter(&local_88);
  local_60 = (double)local_88.QuadPart * DAT_14c83f420 + 16777216.0;
  DAT_14c949828 = 0;
  if (DAT_14c94982c < 0) {
    FUN_14583811e(0);
  }
  DAT_14c950214 = 0;
  if (DAT_14c949e08 < 1) {
    uVar7 = 0;
    if (DAT_14c872a72 == '\0') {
      uVar7 = DAT_14c9647b8;
    }
    FUN_1410f882e(param_1,DAT_14c9647dc,uVar7);
  }
  local_70 = &local_64;
  local_64 = 0;
  local_88.QuadPart = (LONGLONG)&DAT_14c949a00;
  local_80 = &local_60;
  local_78 = &local_58;
  local_98 = &local_40;
  local_40 = 0;
  local_38 = 0;
  local_50 = FUN_1427e4162;
  local_a0 = (uint)(DAT_14c949e08 == 1);
  local_48 = &local_88;
  FUN_1411ca36e(L"GC.GatherUnreachable",DAT_14c949e08,1);
  iVar3 = local_64;
  if (local_64 == 0) {
    FUN_1411d9560();
  }
  QueryPerformanceCounter(&local_88);
  dVar1 = (double)local_88.QuadPart * DAT_14c83f420 + 16777216.0;
  dVar8 = dVar1 - local_60;
  uVar5 = (ulonglong)DAT_14c9502b8;
  iVar6 = DAT_14c9502b8 + 1;
  DAT_14c9502a8 = DAT_14c9502a8 + dVar8;
  if (_DAT_14c9502b0 < dVar8) {
    _DAT_14c9502bc = DAT_14c9502b8;
    _DAT_14c9502b0 = dVar8;
  }
  DAT_14c9502b8 = iVar6;
  if (iVar3 == 0) {
    _DAT_14c950300 = DAT_14c949828;
    if (*(int *)(DAT_14c950c20 + 4) == 0) {
      QueryPerformanceCounter(&local_88);
      FUN_14110ab78(DAT_14c950c20);
      QueryPerformanceCounter(&local_88);
      local_88 = DAT_14c949820;
      local_80 = (double *)CONCAT44(local_80._4_4_,DAT_14c949828);
      (**(code **)(*DAT_14c948aa0 + 0xa8))(DAT_14c948aa0,&local_88);
      lVar2 = DAT_14c950c20;
      (**(code **)(**(longlong **)(DAT_14c950c20 + 0x38) + 0x10))();
      LOCK();
      *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + -1;
      UNLOCK();
    }
    else {
      local_88 = DAT_14c949820;
      local_80 = (double *)CONCAT44(local_80._4_4_,DAT_14c949828);
      (**(code **)(*DAT_14c948aa0 + 0xa8))();
    }
    BVar4 = QueryPerformanceCounter(&local_88);
    uVar5 = CONCAT44(extraout_var,BVar4);
    _DAT_14c950268 = ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) - dVar1;
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return CONCAT71((int7)(uVar5 >> 8),iVar3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427e3902 thunk_FUN_145acc075 body=5 status=ok
// SIG undefined thunk_FUN_145acc075(void)

void thunk_FUN_145acc075(undefined4 param_1)

{
  byte bVar1;
  uint uVar2;
  undefined1 auStack_b8 [32];
  undefined **ppuStack_98;
  code *pcStack_90;
  code *pcStack_88;
  code *pcStack_80;
  code *pcStack_78;
  code *pcStack_70;
  code *pcStack_68;
  code *pcStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  ulonglong uStack_20;
  
  uStack_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar2 = (uint)DAT_14c951760;
  bVar1 = FUN_141330bcb();
  ppuStack_98 = &PTR_FUN_149e88ca0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  pcStack_90 = FUN_1427e4308;
  pcStack_88 = FUN_1427e514a;
  pcStack_80 = FUN_1427e518e;
  pcStack_78 = FUN_140ec6a48;
  pcStack_70 = FUN_1427e5dac;
  pcStack_68 = FUN_1427e6cce;
  pcStack_60 = FUN_1427e6d12;
  pcStack_58 = FUN_1427e7a08;
  FUN_1405bceea();
  FUN_141330da2(&ppuStack_98,param_1,(uint)(bVar1 ^ 1) + uVar2 * 4);
  FUN_145acc160(&ppuStack_98);
  if ((uStack_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427e3907 thunk_FUN_141330a9a body=5 status=ok
// SIG undefined thunk_FUN_141330a9a(void)

void thunk_FUN_141330a9a(undefined4 param_1)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  undefined1 auStack_c8 [40];
  undefined **ppuStack_a0;
  code *pcStack_98;
  code *pcStack_90;
  code *pcStack_88;
  code *pcStack_80;
  code *pcStack_78;
  code *pcStack_70;
  code *pcStack_68;
  code *pcStack_60;
  undefined8 *puStack_58;
  longlong lStack_50;
  undefined8 uStack_48;
  longlong lStack_40;
  undefined8 uStack_38;
  ulonglong uStack_28;
  
  uStack_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  bVar4 = DAT_14c9498f0 != 0;
  uVar3 = (uint)DAT_14c951760;
  bVar2 = FUN_141330bcb();
  ppuStack_a0 = &PTR_FUN_149e88ca0;
  puStack_58 = (undefined8 *)0x0;
  lStack_50 = 0;
  uStack_48 = 0;
  lStack_40 = 0;
  uStack_38 = 0;
  pcStack_98 = FUN_1427e4308;
  pcStack_90 = FUN_1427e514a;
  pcStack_88 = FUN_1427e518e;
  pcStack_80 = FUN_140ec6a48;
  pcStack_78 = FUN_1427e5dac;
  pcStack_70 = FUN_1427e6cce;
  pcStack_68 = FUN_1427e6d12;
  pcStack_60 = FUN_1427e7a08;
  FUN_1405bceea();
  FUN_141330da2(&ppuStack_a0,param_1,(uint)(bVar2 ^ 1) + (uint)bVar4 * 8 + uVar3 * 4);
  ppuStack_a0 = &PTR_FUN_149e88ca0;
  if (lStack_40 != 0) {
    FUN_1400020a8();
  }
  if (lStack_50 != 0) {
    FUN_1400020a8();
  }
  if (puStack_58 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puStack_58 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puStack_58)(puStack_58,1);
    }
  }
  if ((uStack_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427e390c FUN_1427e390c body=226 status=ok
// SIG undefined FUN_1427e390c(void)

void FUN_1427e390c(undefined4 param_1,undefined4 param_2)

{
  double dVar1;
  undefined1 auStack_78 [32];
  LARGE_INTEGER local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14c75b114 == '\0') {
    QueryPerformanceCounter(&local_58);
    FUN_14110ab78(DAT_14c950c20);
    QueryPerformanceCounter(&local_58);
    QueryPerformanceCounter(&local_58);
    dVar1 = (double)local_58.QuadPart * DAT_14c83f420;
    FUN_141452150(&DAT_14c9500c0,param_1,param_2);
    QueryPerformanceCounter(&local_58);
    DAT_14c75ec90 = ((double)local_58.QuadPart * DAT_14c83f420 + 16777216.0) - (dVar1 + 16777216.0);
  }
  if ((local_50 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427e39ef FUN_1427e39ef body=324 status=ok
// SIG undefined FUN_1427e39ef(void)

undefined8 FUN_1427e39ef(undefined4 param_1,undefined4 param_2)

{
  double dVar1;
  char cVar2;
  BOOL BVar3;
  undefined4 extraout_var;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  LARGE_INTEGER local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14c75b114 != '\0') {
LAB_1427e3a1c:
    uVar4 = 0;
    goto LAB_1427e3ad0;
  }
  if (DAT_14c950c29 == '\x01') {
LAB_1427e3a30:
    QueryPerformanceCounter(&local_58);
    FUN_14110ab78(DAT_14c950c20);
    QueryPerformanceCounter(&local_58);
  }
  else {
    cVar2 = FUN_1427e3b34(DAT_14c950c20);
    if (cVar2 == '\0') {
      if (DAT_14c950380 <= DAT_14c75ec8c || DAT_14c75ec8c < 1) {
        DAT_14c950380 = DAT_14c950380 + 1;
        goto LAB_1427e3a1c;
      }
      DAT_14c950380 = 0;
      goto LAB_1427e3a30;
    }
  }
  QueryPerformanceCounter(&local_58);
  dVar1 = (double)local_58.QuadPart * DAT_14c83f420;
  FUN_141452150(&DAT_14c9500c0,param_1,param_2);
  BVar3 = QueryPerformanceCounter(&local_58);
  DAT_14c75ec90 = ((double)local_58.QuadPart * DAT_14c83f420 + 16777216.0) - (dVar1 + 16777216.0);
  uVar4 = CONCAT71((int7)(CONCAT44(extraout_var,BVar3) >> 8),1);
LAB_1427e3ad0:
  if ((local_50 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427e3b34 FUN_1427e3b34 body=67 status=ok
// SIG undefined FUN_1427e3b34(void)

undefined4 FUN_1427e3b34(int *param_1)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  iVar1 = *param_1;
  if (iVar1 == 0) {
    (**(code **)(**(longlong **)(param_1 + 0xe) + 0x18))();
    LOCK();
    param_1[1] = param_1[1] + 1;
    UNLOCK();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return CONCAT31((int3)((uint)iVar1 >> 8),iVar1 == 0);
}



// FUNCTION 1427e3b77 FUN_1427e3b77 body=834 status=ok
// SIG undefined FUN_1427e3b77(void)

void FUN_1427e3b77(void)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  bool bVar12;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c9647c4 == '\x01') {
    FUN_142829d0a(&DAT_14c9647b8);
  }
  if (DAT_14c950c29 == '\x01') {
    FUN_14689c8ec(0);
  }
  if (((DAT_14c949801 & 1) != 0) || ((DAT_14c950c00 & 1) != 0)) {
    FUN_1427e28e4(0,0x3f60624dd2f1a9fc);
  }
  QueryPerformanceCounter(&local_28);
  FUN_14110ab78(DAT_14c950c20);
  QueryPerformanceCounter(&local_28);
  FUN_140d6303e(&DAT_14c9640e8,1);
  uVar10 = 0;
  LOCK();
  DAT_14c9497fc = 0;
  UNLOCK();
  uVar6 = (ulonglong)DAT_14c9647dc;
  if ((int)DAT_14c9647dc < 1) {
    uVar6 = uVar10;
  }
  do {
    uVar9 = (uint)uVar10;
    if ((uint)uVar6 == uVar9) goto LAB_1427e3d3a;
    uVar11 = uVar10 & 0xffff;
    lVar3 = *(longlong *)(DAT_14c9647c8 + (uVar10 >> 0x10) * 8);
    uVar10 = (ulonglong)(uVar9 + 1);
  } while (*(longlong *)(lVar3 + uVar11 * 0x18) == 0);
  plVar1 = (longlong *)(lVar3 + uVar11 * 0x18);
  while (plVar1 != (longlong *)0x0) {
    LOCK();
    DAT_14c9497fc = DAT_14c9497fc + 1;
    UNLOCK();
    lVar3 = *plVar1;
    if (lVar3 != 0) {
      lVar5 = FUN_1400163b0();
      uVar7 = DAT_14c75ec9c;
      uVar8 = DAT_14c75ec98;
      lVar3 = *(longlong *)(lVar3 + 0x10);
      if ((*(int *)(lVar3 + 0x38) < *(int *)(lVar5 + 0x38)) ||
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
          lVar5 + 0x30)) {
        uVar7 = ~DAT_14c75ec98;
        do {
          uVar2 = *(uint *)(plVar1 + 1);
          uVar4 = DAT_14c75ec9c;
          if ((uVar2 & uVar8) == 0) break;
          LOCK();
          bVar12 = uVar2 == *(uint *)(plVar1 + 1);
          if (bVar12) {
            *(uint *)(plVar1 + 1) = uVar2 & uVar7;
          }
          UNLOCK();
          uVar4 = DAT_14c75ec9c;
        } while (!bVar12);
        do {
          uVar8 = *(uint *)(plVar1 + 1);
          if ((uVar4 & ~uVar8) == 0) break;
          LOCK();
          bVar12 = uVar8 == *(uint *)(plVar1 + 1);
          if (bVar12) {
            *(uint *)(plVar1 + 1) = uVar8 | uVar4;
          }
          UNLOCK();
        } while (!bVar12);
      }
      else {
        uVar8 = ~DAT_14c75ec9c;
        do {
          uVar2 = *(uint *)(plVar1 + 1);
          uVar4 = DAT_14c75ec98;
          if ((uVar2 & uVar7) == 0) break;
          LOCK();
          bVar12 = uVar2 == *(uint *)(plVar1 + 1);
          if (bVar12) {
            *(uint *)(plVar1 + 1) = uVar2 & uVar8;
          }
          UNLOCK();
          uVar4 = DAT_14c75ec98;
        } while (!bVar12);
        do {
          uVar8 = *(uint *)(plVar1 + 1);
          if ((uVar4 & ~uVar8) == 0) break;
          LOCK();
          bVar12 = uVar8 == *(uint *)(plVar1 + 1);
          if (bVar12) {
            *(uint *)(plVar1 + 1) = uVar8 | uVar4;
          }
          UNLOCK();
        } while (!bVar12);
      }
    }
    uVar8 = uVar9 + 1;
    if ((int)(uVar9 + 1) < (int)DAT_14c9647dc) {
      uVar8 = DAT_14c9647dc;
    }
    do {
      if (uVar8 - 1 == uVar9) goto LAB_1427e3d3a;
      uVar9 = uVar9 + 1;
      lVar3 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
    } while (*(longlong *)(lVar3 + (ulonglong)(ushort)uVar9 * 0x18) == 0);
    plVar1 = (longlong *)(lVar3 + (ulonglong)(ushort)uVar9 * 0x18);
  }
LAB_1427e3d3a:
  DAT_14c872a72 = 1;
  FUN_1427e3652(1,0);
  uVar10 = 0;
  FUN_1427e28e4(0,0x3f60624dd2f1a9fc);
  LOCK();
  DAT_14c9497fc = 0;
  UNLOCK();
  uVar6 = (ulonglong)DAT_14c9647dc;
  if ((int)DAT_14c9647dc < 1) {
    uVar6 = uVar10;
  }
  do {
    uVar9 = (uint)uVar10;
    if ((uint)uVar6 == uVar9) goto LAB_1427e3e36;
    uVar11 = uVar10 & 0xffff;
    lVar3 = *(longlong *)(DAT_14c9647c8 + (uVar10 >> 0x10) * 8);
    uVar10 = (ulonglong)(uVar9 + 1);
  } while (*(longlong *)(lVar3 + uVar11 * 0x18) == 0);
  uVar8 = DAT_14c75ec98;
  for (lVar3 = lVar3 + uVar11 * 0x18; DAT_14c75ec98 = uVar8, lVar3 != 0;
      lVar3 = lVar3 + (ulonglong)(uVar9 & 0xffff) * 0x18) {
    LOCK();
    DAT_14c9497fc = DAT_14c9497fc + 1;
    UNLOCK();
    do {
      uVar7 = *(uint *)(lVar3 + 8);
      uVar2 = DAT_14c75ec9c;
      if ((uVar7 & uVar8) == 0) break;
      LOCK();
      bVar12 = uVar7 == *(uint *)(lVar3 + 8);
      if (bVar12) {
        *(uint *)(lVar3 + 8) = uVar7 & ~uVar8;
      }
      UNLOCK();
      uVar2 = DAT_14c75ec9c;
    } while (!bVar12);
    do {
      uVar8 = *(uint *)(lVar3 + 8);
      if ((uVar2 & ~uVar8) == 0) break;
      LOCK();
      bVar12 = uVar8 == *(uint *)(lVar3 + 8);
      if (bVar12) {
        *(uint *)(lVar3 + 8) = uVar8 | uVar2;
      }
      UNLOCK();
    } while (!bVar12);
    uVar8 = uVar9 + 1;
    if ((int)(uVar9 + 1) < (int)DAT_14c9647dc) {
      uVar8 = DAT_14c9647dc;
    }
    do {
      if (uVar8 - 1 == uVar9) goto LAB_1427e3e36;
      uVar9 = uVar9 + 1;
      lVar3 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
    } while (*(longlong *)(lVar3 + (ulonglong)(uVar9 & 0xffff) * 0x18) == 0);
    uVar8 = DAT_14c75ec98;
  }
LAB_1427e3e36:
  FUN_1427e3652(1,0);
  FUN_1427e28e4(0,0x3f60624dd2f1a9fc);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c949e68);
  FUN_14068ded2(&DAT_14c949e18,0);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c949e68);
  lVar3 = DAT_14c950c20;
  (**(code **)(**(longlong **)(DAT_14c950c20 + 0x38) + 0x10))();
  LOCK();
  *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + -1;
  UNLOCK();
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427e3f24 FUN_1427e3f24 body=572 status=ok
// SIG undefined FUN_1427e3f24(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427e3f24(byte param_1,double param_2,double param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  LARGE_INTEGER local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c9647e8);
  if (DAT_14c949e90 < DAT_14c949828) {
    iVar5 = 0;
    do {
      lVar3 = DAT_14c949820;
      lVar6 = (longlong)DAT_14c949e90;
      uVar1 = **(undefined8 **)(DAT_14c949820 + lVar6 * 8);
      FUN_142829f36(&DAT_14c9647b8,uVar1);
      *(undefined8 *)(lVar3 + lVar6 * 8) = uVar1;
      DAT_14c949e90 = DAT_14c949e90 + 1;
      if ((DAT_14c949e90 < DAT_14c949828 & 0x62 < iVar5 & param_1) == 1) {
        QueryPerformanceCounter(&local_88);
        if (param_2 < ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) - param_3)
        goto LAB_1427e4029;
        iVar5 = 0;
      }
      else {
        iVar5 = iVar5 + 1;
      }
    } while (DAT_14c949e90 < DAT_14c949828);
  }
  else {
LAB_1427e4029:
    iVar5 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c9647e8);
  iVar4 = DAT_14c949828;
  if ((DAT_14c949e90 == DAT_14c949828) && (iVar4 = DAT_14c949e90, DAT_14c949e94 < DAT_14c949e90)) {
    do {
      lVar3 = DAT_14c949820;
      lVar6 = (longlong)DAT_14c949e94;
      puVar2 = *(undefined8 **)(DAT_14c949820 + lVar6 * 8);
      (**(code **)*puVar2)(puVar2,0);
      if (DAT_14c846248 <= (ulonglong)((longlong)puVar2 - DAT_14c846240)) {
        FUN_1400020a8(puVar2);
      }
      *(undefined8 *)(lVar3 + lVar6 * 8) = 0;
      _DAT_14c949e98 = _DAT_14c949e98 + 1;
      DAT_14c949e94 = DAT_14c949e94 + 1;
      if ((DAT_14c949e94 < DAT_14c949828 & 0x62 < iVar5 & param_1) == 1) {
        QueryPerformanceCounter(&local_88);
        iVar5 = 0;
        iVar4 = DAT_14c949828;
        if (param_2 < ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) - param_3) break;
      }
      else {
        iVar5 = iVar5 + 1;
      }
      iVar4 = DAT_14c949828;
    } while (DAT_14c949e94 < DAT_14c949828);
  }
  DAT_14c75ec78 = DAT_14c949e94 == iVar4;
  if ((local_80 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1427e4162 FUN_1427e4162 body=421 status=ok
// SIG undefined FUN_1427e4162(void)

void FUN_1427e4162(longlong *param_1,int *param_2)

{
  double dVar1;
  double dVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_b8 [32];
  LARGE_INTEGER local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar8 = *(longlong *)(*param_1 + 0x400);
  if (lVar8 == 0) {
    lVar8 = *param_1;
  }
  lVar7 = (longlong)*param_2 * 0x20;
  uVar5 = *(uint *)(lVar8 + 4 + lVar7);
  if ((int)uVar5 <= *(int *)(lVar8 + 0xc + lVar7)) {
    piVar3 = (int *)param_1[3];
    dVar1 = *(double *)param_1[2];
    dVar2 = *(double *)param_1[1];
    lVar8 = lVar8 + lVar7;
    iVar6 = *param_2 * 10;
    do {
      *(uint *)(lVar8 + 4) = uVar5 + 1;
      lVar7 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
      if ((DAT_14c75ec9c & *(uint *)(lVar7 + 8 + (ulonglong)(uVar5 & 0xffff) * 0x18)) != 0) {
        lVar7 = lVar7 + (ulonglong)(uVar5 & 0xffff) * 0x18;
        do {
          uVar5 = *(uint *)(lVar7 + 8);
          if ((uVar5 >> 0x1c & 1) != 0) break;
          LOCK();
          bVar9 = uVar5 == *(uint *)(lVar7 + 8);
          if (bVar9) {
            *(uint *)(lVar7 + 8) = uVar5 | 0x10000000;
          }
          UNLOCK();
        } while (!bVar9);
        iVar4 = *(int *)(lVar8 + 0x18);
        *(uint *)(lVar8 + 0x18) = iVar4 + 1U;
        if (*(uint *)(lVar8 + 0x1c) < iVar4 + 1U) {
          FUN_141716500((longlong *)(lVar8 + 0x10),iVar4);
        }
        *(longlong *)(*(longlong *)(lVar8 + 0x10) + (longlong)iVar4 * 8) = lVar7;
      }
      if (0.0 < dVar1) {
        iVar4 = iVar6 * -0x33333333;
        iVar6 = iVar6 + 1;
        uVar5 = iVar4 + 0x19999998;
        if ((uVar5 >> 1 | (uint)((uVar5 & 1) != 0) << 0x1f) < 0x19999999) {
          QueryPerformanceCounter(&local_98);
          if (dVar1 <= ((double)local_98.QuadPart * DAT_14c83f420 + 16777216.0) - dVar2) {
            *piVar3 = 1;
            break;
          }
        }
        else if (*piVar3 != 0) break;
      }
      uVar5 = *(uint *)(lVar8 + 4);
    } while ((int)uVar5 <= *(int *)(lVar8 + 0xc));
  }
  if ((local_90 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1427e4308 FUN_1427e4308 body=3649 status=ok
// SIG undefined FUN_1427e4308(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427e4308(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auVar10 [16];
  char cVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  longlong lVar17;
  undefined8 *puVar18;
  ulonglong *puVar19;
  ulonglong *puVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong in_R10;
  longlong *plVar27;
  ushort *puVar28;
  ushort *puVar29;
  longlong lVar30;
  longlong lVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar39 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar40 [16];
  longlong *local_7900;
  ulonglong local_78c8;
  undefined **local_78c0;
  undefined8 local_78b8;
  undefined2 local_78b0;
  longlong *local_7880 [3];
  undefined8 local_7868;
  undefined1 local_7840 [64];
  uint local_7800;
  undefined8 auStack_77f8 [39];
  uint local_76c0;
  ulonglong auStack_76b8 [71];
  uint local_7480;
  longlong alStack_7478 [2223];
  undefined1 local_2f00 [64];
  uint local_2ec0;
  undefined8 auStack_2eb8 [39];
  uint local_2d80;
  ulonglong auStack_2d78 [71];
  uint local_2b40;
  ulonglong local_2b38 [1135];
  uint local_7c0 [2];
  longlong alStack_7b8 [2];
  int aiStack_7a8 [202];
  uint local_480;
  ulonglong auStack_478 [2];
  uint auStack_468 [232];
  byte local_c8 [4];
  uint local_c4;
  byte local_c0;
  uint local_bc;
  byte local_b8;
  uint local_b4;
  byte local_b0;
  uint local_ac;
  ulonglong local_a8;
  
  local_a8 = DAT_14c707940 ^ (ulonglong)&local_78b8;
  if (DAT_14c95014d == '\0') {
    DAT_14c9500c0 = 1;
    DAT_14c95014d = '\0';
    DAT_14c9500c8 = param_2;
  }
  *(undefined2 *)(param_2 + 0xf) = 0x100;
  local_78b8 = 0;
  local_78b0 = 1;
  local_78c0 = &PTR_FUN_149e88cb0;
  FUN_14689dbb2(local_7880,param_2);
  *param_2 = DAT_14c948580;
  iVar4 = *(int *)(param_2 + 8);
  if ((longlong)iVar4 != 0) {
    lVar13 = param_2[7];
    lVar17 = 0;
    do {
      uVar25 = (ulonglong)local_2b40;
      local_2b40 = local_2b40 + 1;
      local_2b38[uVar25] = **(ulonglong **)(lVar13 + lVar17);
      if (local_2b40 == 0x20) {
        FUN_14689e7d8(local_2f00);
      }
      lVar17 = lVar17 + 8;
    } while ((longlong)iVar4 * 8 != lVar17);
  }
  auVar10 = _DAT_149931e80;
  local_7900 = (longlong *)param_2[1];
  uVar25 = (ulonglong)*(uint *)(param_2 + 2);
  auVar39 = pmovsxbq(unaff_XMM7,0x800);
  auVar40 = pmovsxbq(unaff_XMM8,0x100);
  do {
    if ((int)uVar25 != 0) {
      plVar27 = local_7900;
      do {
        lVar13 = *plVar27;
        uVar23 = *(ulonglong *)(lVar13 + 0x10);
        uVar15 = *(ulonglong *)(lVar13 + 0x20);
        uVar6 = *(ulonglong *)(uVar23 + 0x1e8);
        *local_7880[0] = lVar13;
        uVar21 = (ulonglong)local_2b40;
        local_2b40 = local_2b40 + 1;
        local_2b38[uVar21] = uVar23;
        if (local_2b40 == 0x20) {
          FUN_14689e7d8(local_2f00);
        }
        uVar22 = local_2b40 + 1;
        local_2b38[local_2b40] = uVar15;
        local_2b40 = uVar22;
        if (uVar22 == 0x20) {
          FUN_14689e7d8(local_2f00);
        }
        if (1 < uVar6) {
          puVar28 = (ushort *)(uVar6 & 0xfffffffffffffffe);
          uVar23 = (ulonglong)((uint)uVar6 & 1);
          lVar17 = lVar13;
          do {
            local_c8[0] = (byte)*puVar28 & 0x1f;
            local_c4 = (uint)(*puVar28 >> 5);
            local_c0 = (byte)puVar28[1] & 0x1f;
            local_bc = (uint)(puVar28[1] >> 5);
            local_b8 = (byte)puVar28[2] & 0x1f;
            local_b4 = (uint)(puVar28[2] >> 5);
            local_b0 = (byte)puVar28[3] & 0x1f;
            local_ac = (uint)(puVar28[3] >> 5);
            lVar24 = 0;
            do {
              bVar3 = local_c8[lVar24];
              if (0x11 < bVar3) {
                FUN_140030042(bVar3,lVar13);
                goto switchD_1427e45c3_caseD_0;
              }
              uVar22 = *(uint *)((longlong)&local_c4 + lVar24);
              puVar19 = (ulonglong *)(lVar17 + (ulonglong)uVar22 * 8);
              puVar29 = puVar28;
              uVar12 = local_480;
              switch(bVar3) {
              case 0:
                goto switchD_1427e45c3_caseD_0;
              case 1:
                lVar17 = lVar17 + (ulonglong)(uVar22 * 0x800 + 0x800) * 8;
                break;
              case 2:
                if ((uVar6 & 1) == 0) {
                  uVar15 = (ulonglong)local_2b40;
                  local_2b40 = local_2b40 + 1;
                  local_2b38[uVar15] = *puVar19;
                  if (local_2b40 == 0x20) {
                    FUN_14689e7d8(local_2f00);
                    uVar12 = local_480;
                  }
                }
                else {
                  uVar15 = (ulonglong)local_7480;
                  local_7480 = local_7480 + 1;
                  alStack_7478[uVar15] = (longlong)puVar19;
                  if (local_7480 == 0x20) {
                    FUN_14689e3f8(local_7840);
                    uVar12 = local_480;
                  }
                }
                break;
              case 3:
                if ((uVar6 & 1) == 0) {
                  uVar15 = (ulonglong)local_2ec0;
                  local_2ec0 = local_2ec0 + 1;
                  auStack_2eb8[uVar15] = puVar19;
                  if (local_2ec0 == 0x20) {
                    FUN_14689eed8(local_2f00);
                    uVar12 = local_480;
                  }
                }
                else {
                  uVar15 = (ulonglong)local_7800;
                  local_7800 = local_7800 + 1;
                  auStack_77f8[uVar15] = puVar19;
                  if (local_7800 == 0x20) {
                    FUN_14689ec46(local_7840);
                    uVar12 = local_480;
                  }
                }
                break;
              case 4:
                uVar21 = puVar19[1];
                uVar15 = *puVar19;
                uVar26 = (ulonglong)local_480;
                auStack_478[uVar26 * 3] =
                     (*(ulonglong *)(puVar28 + 4) & 0xfffffffffffffffe) + uVar23;
                auStack_478[uVar26 * 3 + 1] = uVar15;
                auStack_468[uVar26 * 6] = (uint)uVar21;
                goto LAB_1427e4781;
              case 5:
                puVar29 = puVar28 + 4;
                in_R10 = in_R10 & 0xffffffff00000000 | (ulonglong)*(uint *)(puVar28 + 4);
                if ((uVar6 & 1) == 0) {
                  uVar15 = (ulonglong)local_2d80;
                  local_2d80 = local_2d80 + 1;
                  auStack_2d78[uVar15 * 2] = (ulonglong)puVar19;
                  auStack_2d78[uVar15 * 2 + 1] = in_R10;
                  if (local_2d80 == 0x20) {
                    FUN_14689f432(local_2f00);
                    uVar12 = local_480;
                  }
                }
                else {
                  uVar15 = (ulonglong)local_76c0;
                  local_76c0 = local_76c0 + 1;
                  auStack_76b8[uVar15 * 2] = (ulonglong)puVar19;
                  auStack_76b8[uVar15 * 2 + 1] = in_R10;
                  if (local_76c0 == 0x20) {
                    FUN_14689f29e(local_7840);
                    uVar12 = local_480;
                  }
                }
                break;
              case 6:
                uVar15 = puVar19[1];
                iVar4 = *(int *)((longlong)puVar19 + 0x34);
                iVar5 = *(int *)((*(ulonglong *)(puVar28 + 4) & 0xfffffffffffffffe) - 8);
                uVar21 = (ulonglong)local_7c0[0];
                local_7c0[0] = local_7c0[0] + 1;
                alStack_7b8[uVar21 * 3] =
                     (*(ulonglong *)(puVar28 + 4) & 0xfffffffffffffffe) + uVar23;
                alStack_7b8[uVar21 * 3 + 1] = (longlong)puVar19;
                aiStack_7a8[uVar21 * 6] = (int)uVar15 - iVar4;
                aiStack_7a8[uVar21 * 6 + 1] = iVar5;
                puVar29 = puVar28 + 4;
                uVar12 = local_480;
                if (local_7c0[0] == 0x20) {
                  FUN_14002fe56(local_7c0);
                  uVar12 = local_480;
                }
                break;
              case 7:
                if (((*(int *)((longlong)puVar19 + 0xc) != 0) &&
                    (uVar22 = (uint)puVar19[1], -1 < (int)uVar22)) &&
                   (((int)uVar22 < DAT_14c9647dc &&
                    ((puVar20 = (ulonglong *)
                                ((ulonglong)((uVar22 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8)),
                     puVar20 != (ulonglong *)0x0 &&
                     ((int)puVar20[2] == *(int *)((longlong)puVar19 + 0xc))))))) {
                  uVar15 = *puVar20;
                  local_78c8 = uVar15;
                  FUN_14689eff2(local_7880,&local_78c8);
                  uVar12 = local_480;
                  if ((uVar15 != 0) && (local_78c8 == 0)) {
                    *puVar19 = 0;
                    puVar19[1] = 0;
                  }
                }
                break;
              case 8:
                uVar15 = puVar19[1];
                if ((longlong)(int)uVar15 != 0) {
                  uVar21 = *puVar19;
                  lVar31 = uVar21 + 0xc;
                  lVar30 = 0;
                  do {
                    iVar4 = *(int *)(lVar31 + lVar30);
                    if ((((iVar4 != 0) &&
                         (uVar22 = *(uint *)(uVar21 + 8 + lVar30), -1 < (int)uVar22)) &&
                        ((int)uVar22 < DAT_14c9647dc)) &&
                       ((puVar19 = (ulonglong *)
                                   ((ulonglong)((uVar22 & 0xffff) * 0x18) +
                                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8)),
                        puVar19 != (ulonglong *)0x0 && ((int)puVar19[2] == iVar4)))) {
                      uVar26 = *puVar19;
                      local_78c8 = uVar26;
                      FUN_14689eff2(local_7880,&local_78c8);
                      if ((uVar26 != 0) && (local_78c8 == 0)) {
                        lVar1 = lVar31 + lVar30;
                        *(undefined8 *)(lVar1 + -0xc) = 0;
                        *(undefined8 *)(lVar1 + -4) = 0;
                      }
                    }
                    lVar30 = lVar30 + 0x20;
                    uVar12 = local_480;
                  } while ((longlong)(int)uVar15 * 0x20 != lVar30);
                }
                break;
              case 9:
                puVar14 = (ulonglong *)*puVar19;
                puVar20 = (ulonglong *)(((longlong)puVar14 >> 0x18) + (longlong)puVar19);
                if (((ulonglong)puVar14 & 1) == 0) {
                  puVar20 = puVar14;
                }
                uVar22 = (uint)puVar19[1];
                if ((uVar6 & 1) == 0) {
                  if (uVar22 == 0) break;
                  uVar12 = 0x20 - local_2b40;
                  if (uVar22 < uVar12) {
                    puVar19 = puVar20 + (int)uVar22;
LAB_1427e4c58:
                    puVar14 = local_2b38 + local_2b40;
                    do {
                      *puVar14 = *puVar20;
                      puVar14 = puVar14 + 1;
                      puVar20 = puVar20 + 1;
                    } while (puVar20 != puVar19);
                  }
                  else {
                    do {
                      if (uVar12 != 0) {
                        lVar31 = 0;
                        do {
                          *(undefined8 *)((longlong)local_2b38 + lVar31 + (ulonglong)local_2b40 * 8)
                               = *(undefined8 *)((longlong)puVar20 + lVar31);
                          lVar31 = lVar31 + 8;
                        } while ((longlong)(int)uVar12 * 8 - lVar31 != 0);
                      }
                      uVar22 = uVar22 - uVar12;
                      puVar20 = puVar20 + (int)uVar12;
                      local_2b40 = local_2b40 + uVar12;
                      FUN_14689e7d8(local_2f00);
                      uVar12 = 0x20;
                    } while (0x1f < uVar22);
                    if (uVar22 != 0) {
                      puVar19 = puVar20 + uVar22;
                      goto LAB_1427e4c58;
                    }
                    uVar22 = 0;
                  }
                  local_2b40 = uVar22 + local_2b40;
                  uVar12 = local_480;
                }
                else {
                  if (uVar22 == 0) break;
                  uVar12 = 0x20 - local_7480;
                  if (uVar22 < uVar12) {
                    puVar19 = puVar20 + (int)uVar22;
LAB_1427e4da2:
                    uVar15 = (longlong)puVar19 + (-8 - (longlong)puVar20);
                    auVar33._8_4_ = (int)uVar15;
                    auVar33._0_8_ = uVar15;
                    auVar33._12_4_ = (int)(uVar15 >> 0x20);
                    auVar34._0_8_ = uVar15 >> 3;
                    auVar34._8_8_ = auVar33._8_8_ >> 3;
                    uVar21 = 0;
                    do {
                      auVar36._8_4_ = (int)puVar20;
                      auVar36._0_8_ = puVar20;
                      auVar36._12_4_ = (int)((ulonglong)puVar20 >> 0x20);
                      if ((bool)(~(SUB168(auVar34 | auVar10,0) < (longlong)(uVar21 ^ auVar10._0_8_))
                                & 1)) {
                        alStack_7478[local_7480 + uVar21] = (longlong)puVar20 + auVar39._0_8_;
                      }
                      auVar38._8_4_ = (int)uVar21;
                      auVar38._0_8_ = uVar21;
                      auVar38._12_4_ = (int)(uVar21 >> 0x20);
                      if ((longlong)((auVar38._8_8_ | auVar40._8_8_) ^ auVar10._8_8_) <=
                          SUB168(auVar34 | auVar10,8)) {
                        alStack_7478[(ulonglong)local_7480 + uVar21 + 1] =
                             auVar36._8_8_ + auVar39._8_8_;
                      }
                      uVar21 = uVar21 + 2;
                      puVar20 = puVar20 + 2;
                    } while (((uVar15 >> 3) + 2 & 0xfffffffffffffffe) != uVar21);
                  }
                  else {
                    do {
                      if (uVar12 != 0) {
                        uVar15 = (longlong)(int)uVar12 + 0x1fffffffffffffff;
                        uVar21 = uVar15 & 0x1fffffffffffffff;
                        auVar32._8_4_ = (int)uVar21;
                        auVar32._0_8_ = uVar21;
                        auVar32._12_4_ = (int)(uVar21 >> 0x20);
                        uVar26 = 0;
                        puVar19 = puVar20;
                        do {
                          auVar35._8_4_ = (int)puVar19;
                          auVar35._0_8_ = puVar19;
                          auVar35._12_4_ = (int)((ulonglong)puVar19 >> 0x20);
                          if ((bool)(~(SUB168(auVar32 | auVar10,0) <
                                      (longlong)(uVar26 ^ auVar10._0_8_)) & 1)) {
                            alStack_7478[local_7480 + uVar26] = (longlong)puVar19 + auVar39._0_8_;
                          }
                          auVar37._8_4_ = (int)uVar26;
                          auVar37._0_8_ = uVar26;
                          auVar37._12_4_ = (int)(uVar26 >> 0x20);
                          if ((longlong)((auVar37._8_8_ | auVar40._8_8_) ^ auVar10._8_8_) <=
                              SUB168(auVar32 | auVar10,8)) {
                            alStack_7478[(ulonglong)local_7480 + uVar26 + 1] =
                                 auVar35._8_8_ + auVar39._8_8_;
                          }
                          uVar26 = uVar26 + 2;
                          puVar19 = puVar19 + 2;
                        } while ((uVar21 - ((uint)uVar15 & 1)) + 2 != uVar26);
                      }
                      uVar22 = uVar22 - uVar12;
                      puVar20 = puVar20 + (int)uVar12;
                      local_7480 = local_7480 + uVar12;
                      FUN_14689e3f8(local_7840);
                      uVar12 = 0x20;
                    } while (0x1f < uVar22);
                    if (uVar22 != 0) {
                      puVar19 = puVar20 + uVar22;
                      goto LAB_1427e4da2;
                    }
                    uVar22 = 0;
                  }
                  local_7480 = uVar22 + local_7480;
                  uVar12 = local_480;
                }
                break;
              case 10:
                uVar21 = puVar19[1];
                uVar15 = *puVar19;
                uVar26 = ((longlong)uVar15 >> 0x18) + (longlong)puVar19;
                if ((uVar15 & 1) == 0) {
                  uVar26 = uVar15;
                }
                uVar15 = (ulonglong)local_480;
                auStack_478[uVar15 * 3] =
                     (*(ulonglong *)(puVar28 + 4) & 0xfffffffffffffffe) + uVar23;
                auStack_478[uVar15 * 3 + 1] = uVar26;
                auStack_468[uVar15 * 6] = (uint)uVar21;
LAB_1427e4781:
                puVar29 = puVar28 + 4;
                uVar12 = local_480 + 1;
                if (local_480 + 1 == 0x20) {
LAB_1427e478b:
                  local_480 = local_480 + 1;
                  FUN_144710c38(local_7c0);
                  puVar29 = puVar28 + 4;
                  uVar12 = local_480;
                }
                break;
              case 0xb:
                bVar3 = *(byte *)((longlong)puVar19 +
                                 (ulonglong)
                                 *(uint *)((*(ulonglong *)(puVar28 + 4) & 0xfffffffffffffffe) - 8));
                uVar15 = (ulonglong)local_480;
                auStack_478[uVar15 * 3] =
                     (*(ulonglong *)(puVar28 + 4) & 0xfffffffffffffffe) + uVar23;
                auStack_478[uVar15 * 3 + 1] = (ulonglong)puVar19;
                auStack_468[uVar15 * 6] = (uint)bVar3;
                puVar29 = puVar28 + 4;
                uVar12 = local_480 + 1;
                if (local_480 + 1 != 0x20) break;
                goto LAB_1427e478b;
              case 0xc:
                (*(code *)**(undefined8 **)*puVar19)((undefined8 *)*puVar19,local_7868);
                plVar7 = (longlong *)*puVar19;
                uVar12 = local_480;
                if (*(char *)((longlong)plVar7 + 0x11) == '\x01') {
                  if (((ulonglong)plVar7[1] < 9) && (*(byte *)(plVar7 + 2) < 4)) {
                    puVar19 = puVar19 + 1;
                  }
                  else {
                    puVar19 = (ulonglong *)puVar19[1];
                  }
                  (**(code **)(*plVar7 + 8))(plVar7,puVar19);
                  uVar12 = local_480;
                }
                break;
              case 0xd:
                (**(code **)(puVar28 + 4))(lVar13,local_7868);
                goto switchD_1427e45c3_caseD_0;
              case 0xe:
                (*(code *)(&DAT_14c950070)[(int)uVar22])(lVar13,local_7868);
switchD_1427e45c3_caseD_0:
                goto LAB_1427e4efd;
              case 0xf:
                (**(code **)(puVar28 + 4))(puVar19,local_7868);
                puVar29 = puVar28 + 4;
                uVar12 = local_480;
                break;
              case 0x10:
                local_78c8 = puVar19[1];
                FUN_14689eff2(local_7880,&local_78c8);
                uVar12 = local_480;
                break;
              case 0x11:
                uVar15 = puVar19[1];
                if ((longlong)(int)uVar15 != 0) {
                  uVar21 = *puVar19;
                  lVar31 = 0;
                  do {
                    local_78c8 = *(ulonglong *)(uVar21 + 8 + lVar31);
                    FUN_14689eff2(local_7880,&local_78c8);
                    lVar31 = lVar31 + 0x18;
                    uVar12 = local_480;
                  } while ((longlong)(int)uVar15 * 0x18 != lVar31);
                }
              }
              local_480 = uVar12;
              lVar24 = lVar24 + 8;
              puVar28 = puVar29;
            } while (lVar24 != 0x20);
            puVar28 = puVar29 + 4;
          } while( true );
        }
LAB_1427e4efd:
        plVar27 = plVar27 + 1;
      } while (plVar27 != local_7900 + (int)uVar25);
    }
    if ((local_7900 != (longlong *)0x0) && (local_7900 != (longlong *)param_2[1])) {
      lVar13 = (longlong)*(int *)(param_2 + 6);
      uVar22 = (&DAT_14c949f00)[lVar13 * 0x50];
      if ((ulonglong)uVar22 < 0x20) {
        (&DAT_14c949f00)[lVar13 * 0x50] = uVar22 + 1;
        *(longlong **)(&DAT_14c949f08 + (ulonglong)uVar22 * 8 + lVar13 * 0x140) = local_7900 + -1;
      }
      else {
        FUN_1400020a8();
      }
    }
    puVar18 = (undefined8 *)param_2[5];
    if (puVar18 == (undefined8 *)0x0) {
      cVar11 = FUN_14689f5c6(local_7880);
      if (cVar11 != '\0') {
        FUN_1427e7d0a(local_7880);
      }
      FUN_14689f954(local_7880);
      puVar18 = (undefined8 *)param_2[5];
      if (puVar18 != (undefined8 *)0x0) goto LAB_1427e5018;
      lVar13 = param_2[3];
      uVar25 = (lVar13 - param_2[4]) - 8U >> 3;
      if ((int)uVar25 == 0) break;
      uVar8 = *(undefined4 *)(lVar13 + -8);
      uVar9 = *(undefined4 *)(lVar13 + -4);
      lVar17 = 0;
      do {
        puVar2 = (undefined4 *)(lVar13 + lVar17 * 8);
        *puVar2 = uVar8;
        puVar2[1] = uVar9;
        puVar2[2] = uVar8;
        puVar2[3] = uVar9;
        lVar17 = lVar17 + 2;
      } while (lVar17 != 0x10);
      puVar18 = (undefined8 *)param_2[4];
      puVar16 = (undefined8 *)FUN_1400305d2(&DAT_14c949ec0,*(undefined4 *)(param_2 + 6));
      param_2[4] = puVar16;
      *puVar16 = 0;
      param_2[3] = param_2[4] + 8;
      if (puVar18 == (undefined8 *)0x0) break;
    }
    else {
LAB_1427e5018:
      param_2[5] = *puVar18;
      uVar25 = 0x1ef;
    }
    local_7900 = puVar18 + 1;
  } while( true );
  FUN_14689db36(&local_78c0);
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  param_2[7] = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  DAT_14c95014d = 0;
  if (0 < (longlong)DAT_14c9500c0) {
    lVar13 = 0;
    do {
      if ((DAT_14c95014d & 1) != 0) goto LAB_1427e509d;
      DAT_14c95014d = *(byte *)((longlong)(&DAT_14c9500c8)[lVar13] + 0x78);
      lVar13 = lVar13 + 1;
    } while (DAT_14c9500c0 != lVar13);
    if (DAT_14c95014d != 0) goto LAB_1427e509d;
  }
  DAT_14c95014d = 0;
LAB_1427e509d:
  if ((local_a8 ^ (ulonglong)&local_78b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1427e514a FUN_1427e514a body=66 status=ok
// SIG undefined FUN_1427e514a(void)

void FUN_1427e514a(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_14002e560(&LAB_1468a0c36,&local_9,param_2);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427e518e FUN_1427e518e body=3100 status=ok
// SIG undefined FUN_1427e518e(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427e518e(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  char cVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong *plVar16;
  ulonglong *puVar17;
  ulonglong *puVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  ushort *puVar29;
  ushort *puVar30;
  longlong lVar31;
  longlong *plVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar40 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar41 [16];
  longlong *local_7908;
  ulonglong local_78c8;
  undefined **local_78c0;
  undefined8 local_78b8;
  undefined2 local_78b0;
  longlong *local_7880 [3];
  undefined8 local_7868;
  undefined1 local_7840 [64];
  uint local_7800;
  undefined8 auStack_77f8 [39];
  uint local_76c0;
  undefined8 auStack_76b8 [71];
  uint local_7480;
  longlong alStack_7478 [2223];
  undefined1 local_2f00 [960];
  uint local_2b40;
  longlong alStack_2b38 [1135];
  uint local_7c0 [2];
  longlong alStack_7b8 [2];
  int aiStack_7a8 [202];
  uint local_480;
  ulonglong auStack_478 [2];
  uint auStack_468 [232];
  byte local_c8 [4];
  uint local_c4;
  byte local_c0;
  uint local_bc;
  byte local_b8;
  uint local_b4;
  byte local_b0;
  uint local_ac;
  ulonglong local_a8;
  
  local_a8 = DAT_14c707940 ^ (ulonglong)&local_78b8;
  if (DAT_14c95014d == '\0') {
    DAT_14c9500c0 = 1;
    DAT_14c95014d = '\0';
    DAT_14c9500c8 = param_2;
  }
  *(undefined2 *)(param_2 + 0xf) = 0x100;
  local_78b8 = 0;
  local_78b0 = 1;
  local_78c0 = &PTR_FUN_149e88df0;
  FUN_1468a3a34(local_7880,param_2);
  *param_2 = DAT_14c948580;
  lVar12 = param_2[8];
  if ((longlong)(int)lVar12 != 0) {
    lVar15 = param_2[7];
    lVar31 = 0;
    do {
      uVar23 = (ulonglong)local_7480;
      local_7480 = local_7480 + 1;
      alStack_7478[uVar23] = *(longlong *)(lVar15 + lVar31);
      if (local_7480 == 0x20) {
        FUN_1468a4250(local_7840);
      }
      lVar31 = lVar31 + 8;
    } while ((longlong)(int)lVar12 * 8 != lVar31);
  }
  auVar9 = _DAT_149931e80;
  uVar23 = (ulonglong)*(uint *)(param_2 + 2);
  auVar40 = pmovsxbq(unaff_XMM7,0x800);
  auVar41 = pmovsxbq(unaff_XMM8,0x100);
  plVar32 = param_2;
  local_7908 = (longlong *)param_2[1];
  do {
    if ((int)uVar23 != 0) {
      plVar16 = local_7908;
      do {
        lVar12 = *plVar16;
        lVar15 = *(longlong *)(lVar12 + 0x10);
        lVar31 = *(longlong *)(lVar12 + 0x20);
        uVar22 = *(ulonglong *)(lVar15 + 0x1e8);
        *local_7880[0] = lVar12;
        uVar13 = (ulonglong)local_2b40;
        local_2b40 = local_2b40 + 1;
        alStack_2b38[uVar13] = lVar15;
        if (local_2b40 == 0x20) {
          FUN_1468a4630(local_2f00);
        }
        uVar21 = local_2b40 + 1;
        alStack_2b38[local_2b40] = lVar31;
        local_2b40 = uVar21;
        if (uVar21 == 0x20) {
          FUN_1468a4630(local_2f00);
        }
        if (1 < uVar22) {
          uVar13 = (ulonglong)((uint)uVar22 & 1);
          puVar29 = (ushort *)(uVar22 & 0xfffffffffffffffe);
          lVar15 = lVar12;
          do {
            local_c8[0] = (byte)*puVar29 & 0x1f;
            local_c4 = (uint)(*puVar29 >> 5);
            local_c0 = (byte)puVar29[1] & 0x1f;
            local_bc = (uint)(puVar29[1] >> 5);
            local_b8 = (byte)puVar29[2] & 0x1f;
            local_b4 = (uint)(puVar29[2] >> 5);
            local_b0 = (byte)puVar29[3] & 0x1f;
            local_ac = (uint)(puVar29[3] >> 5);
            lVar31 = 0;
            do {
              bVar3 = local_c8[lVar31];
              if (0x11 < bVar3) {
                FUN_140030042(bVar3,lVar12);
                goto switchD_1427e5442_caseD_0;
              }
              uVar21 = *(uint *)((longlong)&local_c4 + lVar31);
              puVar17 = (ulonglong *)(lVar15 + (ulonglong)uVar21 * 8);
              puVar30 = puVar29;
              uVar11 = local_480;
              switch(bVar3) {
              case 0:
                goto switchD_1427e5442_caseD_0;
              case 1:
                lVar15 = lVar15 + (ulonglong)(uVar21 * 0x800 + 0x800) * 8;
                break;
              case 2:
                uVar22 = (ulonglong)local_7480;
                local_7480 = local_7480 + 1;
                alStack_7478[uVar22] = (longlong)puVar17;
                if (local_7480 == 0x20) {
                  FUN_1468a4250(local_7840);
                  uVar11 = local_480;
                }
                break;
              case 3:
                uVar22 = (ulonglong)local_7800;
                local_7800 = local_7800 + 1;
                auStack_77f8[uVar22] = puVar17;
                if (local_7800 == 0x20) {
                  FUN_1468a4a9e(local_7840);
                  uVar11 = local_480;
                }
                break;
              case 4:
                uVar20 = puVar17[1];
                uVar22 = *puVar17;
                uVar19 = (ulonglong)local_480;
                auStack_478[uVar19 * 3] =
                     (*(ulonglong *)(puVar29 + 4) & 0xfffffffffffffffe) + uVar13;
                auStack_478[uVar19 * 3 + 1] = uVar22;
                auStack_468[uVar19 * 6] = (uint)uVar20;
                goto LAB_1427e55e9;
              case 5:
                plVar32 = (longlong *)
                          ((ulonglong)plVar32 & 0xffffffff00000000 |
                          (ulonglong)*(uint *)(puVar29 + 4));
                uVar22 = (ulonglong)local_76c0;
                local_76c0 = local_76c0 + 1;
                auStack_76b8[uVar22 * 2] = puVar17;
                auStack_76b8[uVar22 * 2 + 1] = plVar32;
                puVar30 = puVar29 + 4;
                if (local_76c0 == 0x20) {
                  FUN_1468a50f6(local_7840);
                  uVar11 = local_480;
                }
                break;
              case 6:
                uVar22 = puVar17[1];
                iVar4 = *(int *)((longlong)puVar17 + 0x34);
                iVar5 = *(int *)((*(ulonglong *)(puVar29 + 4) & 0xfffffffffffffffe) - 8);
                uVar20 = (ulonglong)local_7c0[0];
                local_7c0[0] = local_7c0[0] + 1;
                alStack_7b8[uVar20 * 3] =
                     (*(ulonglong *)(puVar29 + 4) & 0xfffffffffffffffe) + uVar13;
                alStack_7b8[uVar20 * 3 + 1] = (longlong)puVar17;
                aiStack_7a8[uVar20 * 6] = (int)uVar22 - iVar4;
                aiStack_7a8[uVar20 * 6 + 1] = iVar5;
                puVar30 = puVar29 + 4;
                uVar11 = local_480;
                if (local_7c0[0] == 0x20) {
                  FUN_14002fe56(local_7c0);
                  uVar11 = local_480;
                }
                break;
              case 7:
                if (((*(int *)((longlong)puVar17 + 0xc) != 0) &&
                    (uVar21 = (uint)puVar17[1], -1 < (int)uVar21)) &&
                   (((int)uVar21 < DAT_14c9647dc &&
                    ((puVar18 = (ulonglong *)
                                ((ulonglong)((uVar21 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8)),
                     puVar18 != (ulonglong *)0x0 &&
                     ((int)puVar18[2] == *(int *)((longlong)puVar17 + 0xc))))))) {
                  uVar22 = *puVar18;
                  local_78c8 = uVar22;
                  FUN_1468a4e4a(local_7880,&local_78c8,1);
                  uVar11 = local_480;
                  if ((uVar22 != 0) && (local_78c8 == 0)) {
                    *puVar17 = 0;
                    puVar17[1] = 0;
                  }
                }
                break;
              case 8:
                uVar22 = puVar17[1];
                if ((longlong)(int)uVar22 != 0) {
                  uVar20 = *puVar17;
                  lVar28 = uVar20 + 0xc;
                  lVar27 = 0;
                  do {
                    iVar4 = *(int *)(lVar28 + lVar27);
                    if ((((iVar4 != 0) &&
                         (uVar21 = *(uint *)(uVar20 + 8 + lVar27), -1 < (int)uVar21)) &&
                        ((int)uVar21 < DAT_14c9647dc)) &&
                       ((puVar17 = (ulonglong *)
                                   ((ulonglong)((uVar21 & 0xffff) * 0x18) +
                                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8)),
                        puVar17 != (ulonglong *)0x0 && ((int)puVar17[2] == iVar4)))) {
                      uVar19 = *puVar17;
                      local_78c8 = uVar19;
                      FUN_1468a4e4a(local_7880,&local_78c8,1);
                      if ((uVar19 != 0) && (local_78c8 == 0)) {
                        lVar1 = lVar28 + lVar27;
                        *(undefined8 *)(lVar1 + -0xc) = 0;
                        *(undefined8 *)(lVar1 + -4) = 0;
                      }
                    }
                    lVar27 = lVar27 + 0x20;
                    uVar11 = local_480;
                  } while ((longlong)(int)uVar22 * 0x20 != lVar27);
                }
                break;
              case 9:
                uVar21 = (uint)puVar17[1];
                uVar22 = (ulonglong)(int)uVar21;
                if (uVar22 != 0) {
                  uVar19 = *puVar17;
                  uVar20 = ((longlong)uVar19 >> 0x18) + (longlong)puVar17;
                  if ((uVar19 & 1) == 0) {
                    uVar20 = uVar19;
                  }
                  uVar11 = 0x20 - local_7480;
                  if (uVar21 < uVar11) {
                    lVar28 = uVar20 + uVar22 * 8;
LAB_1427e5a13:
                    uVar22 = (lVar28 - uVar20) - 8;
                    auVar34._8_4_ = (int)uVar22;
                    auVar34._0_8_ = uVar22;
                    auVar34._12_4_ = (int)(uVar22 >> 0x20);
                    auVar35._0_8_ = uVar22 >> 3;
                    auVar35._8_8_ = auVar34._8_8_ >> 3;
                    uVar19 = 0;
                    do {
                      auVar37._8_4_ = (int)uVar20;
                      auVar37._0_8_ = uVar20;
                      auVar37._12_4_ = (int)(uVar20 >> 0x20);
                      if ((bool)(~(SUB168(auVar35 | auVar9,0) < (longlong)(uVar19 ^ auVar9._0_8_)) &
                                1)) {
                        alStack_7478[local_7480 + uVar19] = uVar20 + auVar40._0_8_;
                      }
                      auVar39._8_4_ = (int)uVar19;
                      auVar39._0_8_ = uVar19;
                      auVar39._12_4_ = (int)(uVar19 >> 0x20);
                      if ((longlong)((auVar39._8_8_ | auVar41._8_8_) ^ auVar9._8_8_) <=
                          SUB168(auVar35 | auVar9,8)) {
                        alStack_7478[(ulonglong)local_7480 + uVar19 + 1] =
                             auVar37._8_8_ + auVar40._8_8_;
                      }
                      uVar19 = uVar19 + 2;
                      uVar20 = uVar20 + 0x10;
                    } while (((uVar22 >> 3) + 2 & 0xfffffffffffffffe) != uVar19);
                  }
                  else {
                    do {
                      if (uVar11 != 0) {
                        uVar19 = (longlong)(int)uVar11 + 0x1fffffffffffffff;
                        uVar24 = uVar19 & 0x1fffffffffffffff;
                        auVar33._8_4_ = (int)uVar24;
                        auVar33._0_8_ = uVar24;
                        auVar33._12_4_ = (int)(uVar24 >> 0x20);
                        uVar26 = 0;
                        uVar25 = uVar20;
                        do {
                          auVar36._8_4_ = (int)uVar25;
                          auVar36._0_8_ = uVar25;
                          auVar36._12_4_ = (int)(uVar25 >> 0x20);
                          if ((bool)(~(SUB168(auVar33 | auVar9,0) <
                                      (longlong)(uVar26 ^ auVar9._0_8_)) & 1)) {
                            alStack_7478[local_7480 + uVar26] = uVar25 + auVar40._0_8_;
                          }
                          auVar38._8_4_ = (int)uVar26;
                          auVar38._0_8_ = uVar26;
                          auVar38._12_4_ = (int)(uVar26 >> 0x20);
                          if ((longlong)((auVar38._8_8_ | auVar41._8_8_) ^ auVar9._8_8_) <=
                              SUB168(auVar33 | auVar9,8)) {
                            alStack_7478[(ulonglong)local_7480 + uVar26 + 1] =
                                 auVar36._8_8_ + auVar40._8_8_;
                          }
                          uVar26 = uVar26 + 2;
                          uVar25 = uVar25 + 0x10;
                        } while ((uVar24 - ((uint)uVar19 & 1)) + 2 != uVar26);
                      }
                      uVar21 = (int)uVar22 - uVar11;
                      uVar22 = (ulonglong)uVar21;
                      uVar20 = uVar20 + (longlong)(int)uVar11 * 8;
                      local_7480 = local_7480 + uVar11;
                      FUN_1468a4250(local_7840);
                      uVar11 = 0x20;
                    } while (0x1f < uVar21);
                    if (uVar21 != 0) {
                      lVar28 = uVar20 + (ulonglong)uVar21 * 8;
                      goto LAB_1427e5a13;
                    }
                    uVar21 = 0;
                  }
                  local_7480 = uVar21 + local_7480;
                  uVar11 = local_480;
                }
                break;
              case 10:
                uVar20 = puVar17[1];
                uVar22 = *puVar17;
                uVar19 = ((longlong)uVar22 >> 0x18) + (longlong)puVar17;
                if ((uVar22 & 1) == 0) {
                  uVar19 = uVar22;
                }
                uVar22 = (ulonglong)local_480;
                auStack_478[uVar22 * 3] =
                     (*(ulonglong *)(puVar29 + 4) & 0xfffffffffffffffe) + uVar13;
                auStack_478[uVar22 * 3 + 1] = uVar19;
                auStack_468[uVar22 * 6] = (uint)uVar20;
LAB_1427e55e9:
                puVar30 = puVar29 + 4;
                uVar11 = local_480 + 1;
                if (local_480 + 1 == 0x20) {
LAB_1427e55f3:
                  local_480 = local_480 + 1;
                  FUN_144710c38(local_7c0);
                  puVar30 = puVar29 + 4;
                  uVar11 = local_480;
                }
                break;
              case 0xb:
                bVar3 = *(byte *)((longlong)puVar17 +
                                 (ulonglong)
                                 *(uint *)((*(ulonglong *)(puVar29 + 4) & 0xfffffffffffffffe) - 8));
                uVar22 = (ulonglong)local_480;
                auStack_478[uVar22 * 3] =
                     (*(ulonglong *)(puVar29 + 4) & 0xfffffffffffffffe) + uVar13;
                auStack_478[uVar22 * 3 + 1] = (ulonglong)puVar17;
                auStack_468[uVar22 * 6] = (uint)bVar3;
                puVar30 = puVar29 + 4;
                uVar11 = local_480 + 1;
                if (local_480 + 1 != 0x20) break;
                goto LAB_1427e55f3;
              case 0xc:
                (*(code *)**(undefined8 **)*puVar17)((undefined8 *)*puVar17,local_7868);
                plVar6 = (longlong *)*puVar17;
                uVar11 = local_480;
                if (*(char *)((longlong)plVar6 + 0x11) == '\x01') {
                  if (((ulonglong)plVar6[1] < 9) && (*(byte *)(plVar6 + 2) < 4)) {
                    puVar17 = puVar17 + 1;
                  }
                  else {
                    puVar17 = (ulonglong *)puVar17[1];
                  }
                  (**(code **)(*plVar6 + 8))(plVar6,puVar17,local_7868);
                  uVar11 = local_480;
                }
                break;
              case 0xd:
                (**(code **)(puVar29 + 4))(lVar12,local_7868);
                goto switchD_1427e5442_caseD_0;
              case 0xe:
                (*(code *)(&DAT_14c950070)[(int)uVar21])(lVar12,local_7868);
switchD_1427e5442_caseD_0:
                goto LAB_1427e5b78;
              case 0xf:
                (**(code **)(puVar29 + 4))(puVar17,local_7868);
                puVar30 = puVar29 + 4;
                uVar11 = local_480;
                break;
              case 0x10:
                local_78c8 = puVar17[1];
                FUN_1468a4e4a(local_7880,&local_78c8,1);
                uVar11 = local_480;
                break;
              case 0x11:
                uVar22 = puVar17[1];
                if ((longlong)(int)uVar22 != 0) {
                  uVar20 = *puVar17;
                  lVar28 = 0;
                  do {
                    local_78c8 = *(ulonglong *)(uVar20 + 8 + lVar28);
                    FUN_1468a4e4a(local_7880,&local_78c8,1);
                    lVar28 = lVar28 + 0x18;
                    uVar11 = local_480;
                  } while ((longlong)(int)uVar22 * 0x18 != lVar28);
                }
              }
              local_480 = uVar11;
              lVar31 = lVar31 + 8;
              puVar29 = puVar30;
            } while (lVar31 != 0x20);
            puVar29 = puVar30 + 4;
          } while( true );
        }
LAB_1427e5b78:
        plVar16 = plVar16 + 1;
      } while (plVar16 != local_7908 + (int)uVar23);
    }
    if ((local_7908 != (longlong *)0x0) && (local_7908 != (longlong *)param_2[1])) {
      lVar12 = (longlong)(int)param_2[6];
      uVar21 = (&DAT_14c949f00)[lVar12 * 0x50];
      if ((ulonglong)uVar21 < 0x20) {
        (&DAT_14c949f00)[lVar12 * 0x50] = uVar21 + 1;
        *(longlong **)(&DAT_14c949f08 + (ulonglong)uVar21 * 8 + lVar12 * 0x140) = local_7908 + -1;
      }
      else {
        FUN_1400020a8();
      }
    }
    plVar32 = (longlong *)param_2[5];
    if (plVar32 == (longlong *)0x0) {
      cVar10 = FUN_1468a528a(local_7880);
      if (cVar10 != '\0') {
        FUN_1427ea958(local_7880);
      }
      FUN_1468a5618(local_7880);
      plVar32 = (longlong *)param_2[5];
      if (plVar32 != (longlong *)0x0) goto LAB_1427e5c83;
      lVar12 = param_2[3];
      uVar23 = (lVar12 - param_2[4]) - 8U >> 3;
      if ((int)uVar23 == 0) break;
      uVar7 = *(undefined4 *)(lVar12 + -8);
      uVar8 = *(undefined4 *)(lVar12 + -4);
      lVar15 = 0;
      do {
        puVar2 = (undefined4 *)(lVar12 + lVar15 * 8);
        *puVar2 = uVar7;
        puVar2[1] = uVar8;
        puVar2[2] = uVar7;
        puVar2[3] = uVar8;
        lVar15 = lVar15 + 2;
      } while (lVar15 != 0x10);
      plVar32 = (longlong *)param_2[4];
      puVar14 = (undefined8 *)FUN_1400305d2(&DAT_14c949ec0,(int)param_2[6]);
      param_2[4] = (longlong)puVar14;
      *puVar14 = 0;
      param_2[3] = param_2[4] + 8;
      if (plVar32 == (longlong *)0x0) break;
    }
    else {
LAB_1427e5c83:
      param_2[5] = *plVar32;
      uVar23 = 0x1ef;
    }
    plVar32 = plVar32 + 1;
    local_7908 = plVar32;
  } while( true );
  FUN_1468a39b8();
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  param_2[7] = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  DAT_14c95014d = 0;
  if (0 < (longlong)DAT_14c9500c0) {
    lVar12 = 0;
    do {
      if ((DAT_14c95014d & 1) != 0) goto LAB_1427e5d03;
      DAT_14c95014d = *(byte *)((longlong)(&DAT_14c9500c8)[lVar12] + 0x78);
      lVar12 = lVar12 + 1;
    } while (DAT_14c9500c0 != lVar12);
    if (DAT_14c95014d != 0) goto LAB_1427e5d03;
  }
  DAT_14c95014d = 0;
LAB_1427e5d03:
  if ((local_a8 ^ (ulonglong)&local_78b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1427e5dac FUN_1427e5dac body=3873 status=ok
// SIG undefined FUN_1427e5dac(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427e5dac(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined4 *puVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auVar11 [16];
  char cVar12;
  uint uVar13;
  ulonglong *puVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  longlong lVar19;
  ulonglong *puVar20;
  ulonglong *puVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong in_R10;
  longlong lVar26;
  longlong *plVar27;
  ushort *puVar28;
  ushort *puVar29;
  uint uVar30;
  ulonglong uVar31;
  longlong lVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 unaff_XMM9 [16];
  undefined1 auVar40 [16];
  undefined1 unaff_XMM10 [16];
  undefined1 auVar41 [16];
  longlong *local_7900;
  ulonglong local_78c8;
  undefined **local_78c0;
  undefined8 local_78b8;
  undefined2 local_78b0;
  longlong *local_7880 [3];
  undefined8 local_7868;
  undefined1 local_7840 [64];
  uint local_7800;
  undefined8 auStack_77f8 [39];
  uint local_76c0;
  ulonglong auStack_76b8 [71];
  uint local_7480;
  longlong alStack_7478 [2223];
  undefined1 local_2f00 [64];
  uint local_2ec0;
  undefined8 auStack_2eb8 [39];
  uint local_2d80;
  ulonglong auStack_2d78 [71];
  uint local_2b40;
  ulonglong local_2b38 [1135];
  uint local_7c0 [2];
  longlong alStack_7b8 [2];
  int aiStack_7a8 [202];
  uint local_480;
  ulonglong auStack_478 [2];
  uint auStack_468 [224];
  LARGE_INTEGER local_e8;
  uint uStack_e0;
  uint uStack_dc;
  byte local_d8;
  uint local_d4;
  byte local_d0;
  uint local_cc;
  ulonglong local_c8;
  
  local_c8 = DAT_14c707940 ^ (ulonglong)&local_78b8;
  if (DAT_14c95014d == '\0') {
    DAT_14c9500c0 = 1;
    DAT_14c95014d = '\0';
    DAT_14c9500c8 = param_2;
  }
  *(undefined2 *)(param_2 + 0xf) = 0x100;
  local_78b8 = 0;
  local_78b0 = 1;
  local_78c0 = &PTR_FUN_149e88f30;
  FUN_1468a6a6c(local_7880,param_2);
  *param_2 = DAT_14c948580;
  iVar5 = *(int *)(param_2 + 8);
  if ((longlong)iVar5 != 0) {
    lVar16 = param_2[7];
    lVar19 = 0;
    do {
      uVar24 = (ulonglong)local_2b40;
      local_2b40 = local_2b40 + 1;
      local_2b38[uVar24] = **(ulonglong **)(lVar16 + lVar19);
      if (local_2b40 == 0x20) {
        FUN_1468a7692(local_2f00);
      }
      lVar19 = lVar19 + 8;
    } while ((longlong)iVar5 * 8 != lVar19);
  }
  auVar11 = _DAT_149931e80;
  local_7900 = (longlong *)param_2[1];
  uVar24 = (ulonglong)*(uint *)(param_2 + 2);
  auVar40 = pmovsxbq(unaff_XMM9,0x800);
  auVar41 = pmovsxbq(unaff_XMM10,0x100);
LAB_1427e5eeb:
  if ((int)uVar24 != 0) {
    plVar27 = local_7900;
    do {
      lVar16 = *plVar27;
      uVar31 = *(ulonglong *)(lVar16 + 0x10);
      uVar15 = *(ulonglong *)(lVar16 + 0x20);
      uVar7 = *(ulonglong *)(uVar31 + 0x1e8);
      *local_7880[0] = lVar16;
      uVar22 = (ulonglong)local_2b40;
      local_2b40 = local_2b40 + 1;
      local_2b38[uVar22] = uVar31;
      if (local_2b40 == 0x20) {
        FUN_1468a7692(local_2f00);
      }
      uVar30 = local_2b40 + 1;
      local_2b38[local_2b40] = uVar15;
      local_2b40 = uVar30;
      if (uVar30 == 0x20) {
        FUN_1468a7692(local_2f00);
      }
      if (1 < uVar7) {
        puVar28 = (ushort *)(uVar7 & 0xfffffffffffffffe);
        uVar31 = (ulonglong)((uint)uVar7 & 1);
        lVar19 = lVar16;
        do {
          local_e8.s.LowPart = CONCAT31(local_e8.s.LowPart._1_3_,(char)*puVar28) & 0xffffff1f;
          local_e8.s.HighPart = (uint)(*puVar28 >> 5);
          uStack_e0 = CONCAT31(uStack_e0._1_3_,(char)puVar28[1]) & 0xffffff1f;
          uStack_dc = (uint)(puVar28[1] >> 5);
          local_d8 = (byte)puVar28[2] & 0x1f;
          local_d4 = (uint)(puVar28[2] >> 5);
          local_d0 = (byte)puVar28[3] & 0x1f;
          local_cc = (uint)(puVar28[3] >> 5);
          lVar23 = 0;
          do {
            bVar4 = *(byte *)((longlong)&local_e8 + lVar23);
            if (0x11 < bVar4) {
              FUN_140030042(bVar4,lVar16);
              goto switchD_1427e602c_caseD_0;
            }
            uVar30 = *(uint *)((longlong)&local_e8 + lVar23 + 4);
            puVar20 = (ulonglong *)(lVar19 + (ulonglong)uVar30 * 8);
            puVar29 = puVar28;
            uVar13 = local_480;
            switch(bVar4) {
            case 0:
              goto switchD_1427e602c_caseD_0;
            case 1:
              lVar19 = lVar19 + (ulonglong)(uVar30 * 0x800 + 0x800) * 8;
              break;
            case 2:
              if ((uVar7 & 1) == 0) {
                uVar15 = (ulonglong)local_2b40;
                local_2b40 = local_2b40 + 1;
                local_2b38[uVar15] = *puVar20;
                if (local_2b40 == 0x20) {
                  FUN_1468a7692(local_2f00);
                  uVar13 = local_480;
                }
              }
              else {
                uVar15 = (ulonglong)local_7480;
                local_7480 = local_7480 + 1;
                alStack_7478[uVar15] = (longlong)puVar20;
                if (local_7480 == 0x20) {
                  FUN_1468a72b2(local_7840);
                  uVar13 = local_480;
                }
              }
              break;
            case 3:
              if ((uVar7 & 1) == 0) {
                uVar15 = (ulonglong)local_2ec0;
                local_2ec0 = local_2ec0 + 1;
                auStack_2eb8[uVar15] = puVar20;
                if (local_2ec0 == 0x20) {
                  FUN_1468a7d92(local_2f00);
                  uVar13 = local_480;
                }
              }
              else {
                uVar15 = (ulonglong)local_7800;
                local_7800 = local_7800 + 1;
                auStack_77f8[uVar15] = puVar20;
                if (local_7800 == 0x20) {
                  FUN_1468a7b00(local_7840);
                  uVar13 = local_480;
                }
              }
              break;
            case 4:
              uVar22 = puVar20[1];
              uVar15 = *puVar20;
              uVar25 = (ulonglong)local_480;
              auStack_478[uVar25 * 3] = (*(ulonglong *)(puVar28 + 4) & 0xfffffffffffffffe) + uVar31;
              auStack_478[uVar25 * 3 + 1] = uVar15;
              auStack_468[uVar25 * 6] = (uint)uVar22;
              goto LAB_1427e61eb;
            case 5:
              puVar29 = puVar28 + 4;
              in_R10 = in_R10 & 0xffffffff00000000 | (ulonglong)*(uint *)(puVar28 + 4);
              if ((uVar7 & 1) == 0) {
                uVar15 = (ulonglong)local_2d80;
                local_2d80 = local_2d80 + 1;
                auStack_2d78[uVar15 * 2] = (ulonglong)puVar20;
                auStack_2d78[uVar15 * 2 + 1] = in_R10;
                if (local_2d80 == 0x20) {
                  FUN_1468a82ec(local_2f00);
                  uVar13 = local_480;
                }
              }
              else {
                uVar15 = (ulonglong)local_76c0;
                local_76c0 = local_76c0 + 1;
                auStack_76b8[uVar15 * 2] = (ulonglong)puVar20;
                auStack_76b8[uVar15 * 2 + 1] = in_R10;
                if (local_76c0 == 0x20) {
                  FUN_1468a8158(local_7840);
                  uVar13 = local_480;
                }
              }
              break;
            case 6:
              uVar15 = puVar20[1];
              iVar5 = *(int *)((longlong)puVar20 + 0x34);
              iVar6 = *(int *)((*(ulonglong *)(puVar28 + 4) & 0xfffffffffffffffe) - 8);
              uVar22 = (ulonglong)local_7c0[0];
              local_7c0[0] = local_7c0[0] + 1;
              alStack_7b8[uVar22 * 3] = (*(ulonglong *)(puVar28 + 4) & 0xfffffffffffffffe) + uVar31;
              alStack_7b8[uVar22 * 3 + 1] = (longlong)puVar20;
              aiStack_7a8[uVar22 * 6] = (int)uVar15 - iVar5;
              aiStack_7a8[uVar22 * 6 + 1] = iVar6;
              puVar29 = puVar28 + 4;
              uVar13 = local_480;
              if (local_7c0[0] == 0x20) {
                FUN_14002fe56(local_7c0);
                uVar13 = local_480;
              }
              break;
            case 7:
              if (((*(int *)((longlong)puVar20 + 0xc) != 0) &&
                  (uVar30 = (uint)puVar20[1], -1 < (int)uVar30)) &&
                 (((int)uVar30 < DAT_14c9647dc &&
                  ((puVar21 = (ulonglong *)
                              ((ulonglong)((uVar30 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar30 >> 0x10) * 8)),
                   puVar21 != (ulonglong *)0x0 &&
                   ((int)puVar21[2] == *(int *)((longlong)puVar20 + 0xc))))))) {
                uVar15 = *puVar21;
                local_78c8 = uVar15;
                FUN_1468a7eac(local_7880,&local_78c8);
                uVar13 = local_480;
                if ((uVar15 != 0) && (local_78c8 == 0)) {
                  *puVar20 = 0;
                  puVar20[1] = 0;
                }
              }
              break;
            case 8:
              uVar15 = puVar20[1];
              if ((longlong)(int)uVar15 != 0) {
                uVar22 = *puVar20;
                lVar32 = uVar22 + 0xc;
                lVar26 = 0;
                do {
                  iVar5 = *(int *)(lVar32 + lVar26);
                  if ((((iVar5 != 0) && (uVar30 = *(uint *)(uVar22 + 8 + lVar26), -1 < (int)uVar30))
                      && ((int)uVar30 < DAT_14c9647dc)) &&
                     ((puVar20 = (ulonglong *)
                                 ((ulonglong)((uVar30 & 0xffff) * 0x18) +
                                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar30 >> 0x10) * 8)),
                      puVar20 != (ulonglong *)0x0 && ((int)puVar20[2] == iVar5)))) {
                    uVar25 = *puVar20;
                    local_78c8 = uVar25;
                    FUN_1468a7eac(local_7880,&local_78c8);
                    if ((uVar25 != 0) && (local_78c8 == 0)) {
                      lVar2 = lVar32 + lVar26;
                      *(undefined8 *)(lVar2 + -0xc) = 0;
                      *(undefined8 *)(lVar2 + -4) = 0;
                    }
                  }
                  lVar26 = lVar26 + 0x20;
                  uVar13 = local_480;
                } while ((longlong)(int)uVar15 * 0x20 != lVar26);
              }
              break;
            case 9:
              puVar14 = (ulonglong *)*puVar20;
              puVar21 = (ulonglong *)(((longlong)puVar14 >> 0x18) + (longlong)puVar20);
              if (((ulonglong)puVar14 & 1) == 0) {
                puVar21 = puVar14;
              }
              uVar30 = (uint)puVar20[1];
              if ((uVar7 & 1) == 0) {
                if (uVar30 == 0) break;
                uVar13 = 0x20 - local_2b40;
                if (uVar30 < uVar13) {
                  puVar20 = puVar21 + (int)uVar30;
LAB_1427e66ca:
                  puVar14 = local_2b38 + local_2b40;
                  do {
                    *puVar14 = *puVar21;
                    puVar14 = puVar14 + 1;
                    puVar21 = puVar21 + 1;
                  } while (puVar21 != puVar20);
                }
                else {
                  do {
                    if (uVar13 != 0) {
                      lVar26 = 0;
                      do {
                        *(undefined8 *)((longlong)local_2b38 + lVar26 + (ulonglong)local_2b40 * 8) =
                             *(undefined8 *)((longlong)puVar21 + lVar26);
                        lVar26 = lVar26 + 8;
                      } while ((longlong)(int)uVar13 * 8 - lVar26 != 0);
                    }
                    uVar30 = uVar30 - uVar13;
                    puVar21 = puVar21 + (int)uVar13;
                    local_2b40 = local_2b40 + uVar13;
                    FUN_1468a7692(local_2f00);
                    uVar13 = 0x20;
                  } while (0x1f < uVar30);
                  if (uVar30 != 0) {
                    puVar20 = puVar21 + uVar30;
                    goto LAB_1427e66ca;
                  }
                  uVar30 = 0;
                }
                local_2b40 = uVar30 + local_2b40;
                uVar13 = local_480;
              }
              else {
                if (uVar30 == 0) break;
                uVar13 = 0x20 - local_7480;
                if (uVar30 < uVar13) {
                  puVar20 = puVar21 + (int)uVar30;
LAB_1427e6814:
                  uVar15 = (longlong)puVar20 + (-8 - (longlong)puVar21);
                  auVar34._8_4_ = (int)uVar15;
                  auVar34._0_8_ = uVar15;
                  auVar34._12_4_ = (int)(uVar15 >> 0x20);
                  auVar35._0_8_ = uVar15 >> 3;
                  auVar35._8_8_ = auVar34._8_8_ >> 3;
                  uVar22 = 0;
                  do {
                    auVar37._8_4_ = (int)puVar21;
                    auVar37._0_8_ = puVar21;
                    auVar37._12_4_ = (int)((ulonglong)puVar21 >> 0x20);
                    if ((bool)(~(SUB168(auVar35 | auVar11,0) < (longlong)(uVar22 ^ auVar11._0_8_)) &
                              1)) {
                      alStack_7478[local_7480 + uVar22] = (longlong)puVar21 + auVar40._0_8_;
                    }
                    auVar39._8_4_ = (int)uVar22;
                    auVar39._0_8_ = uVar22;
                    auVar39._12_4_ = (int)(uVar22 >> 0x20);
                    if ((longlong)((auVar39._8_8_ | auVar41._8_8_) ^ auVar11._8_8_) <=
                        SUB168(auVar35 | auVar11,8)) {
                      alStack_7478[(ulonglong)local_7480 + uVar22 + 1] =
                           auVar37._8_8_ + auVar40._8_8_;
                    }
                    uVar22 = uVar22 + 2;
                    puVar21 = puVar21 + 2;
                  } while (((uVar15 >> 3) + 2 & 0xfffffffffffffffe) != uVar22);
                }
                else {
                  do {
                    if (uVar13 != 0) {
                      uVar15 = (longlong)(int)uVar13 + 0x1fffffffffffffff;
                      uVar22 = uVar15 & 0x1fffffffffffffff;
                      auVar33._8_4_ = (int)uVar22;
                      auVar33._0_8_ = uVar22;
                      auVar33._12_4_ = (int)(uVar22 >> 0x20);
                      uVar25 = 0;
                      puVar20 = puVar21;
                      do {
                        auVar36._8_4_ = (int)puVar20;
                        auVar36._0_8_ = puVar20;
                        auVar36._12_4_ = (int)((ulonglong)puVar20 >> 0x20);
                        if ((bool)(~(SUB168(auVar33 | auVar11,0) <
                                    (longlong)(uVar25 ^ auVar11._0_8_)) & 1)) {
                          alStack_7478[local_7480 + uVar25] = (longlong)puVar20 + auVar40._0_8_;
                        }
                        auVar38._8_4_ = (int)uVar25;
                        auVar38._0_8_ = uVar25;
                        auVar38._12_4_ = (int)(uVar25 >> 0x20);
                        if ((longlong)((auVar38._8_8_ | auVar41._8_8_) ^ auVar11._8_8_) <=
                            SUB168(auVar33 | auVar11,8)) {
                          alStack_7478[(ulonglong)local_7480 + uVar25 + 1] =
                               auVar36._8_8_ + auVar40._8_8_;
                        }
                        uVar25 = uVar25 + 2;
                        puVar20 = puVar20 + 2;
                      } while ((uVar22 - ((uint)uVar15 & 1)) + 2 != uVar25);
                    }
                    uVar30 = uVar30 - uVar13;
                    puVar21 = puVar21 + (int)uVar13;
                    local_7480 = local_7480 + uVar13;
                    FUN_1468a72b2(local_7840);
                    uVar13 = 0x20;
                  } while (0x1f < uVar30);
                  if (uVar30 != 0) {
                    puVar20 = puVar21 + uVar30;
                    goto LAB_1427e6814;
                  }
                  uVar30 = 0;
                }
                local_7480 = uVar30 + local_7480;
                uVar13 = local_480;
              }
              break;
            case 10:
              uVar22 = puVar20[1];
              uVar15 = *puVar20;
              uVar25 = ((longlong)uVar15 >> 0x18) + (longlong)puVar20;
              if ((uVar15 & 1) == 0) {
                uVar25 = uVar15;
              }
              uVar15 = (ulonglong)local_480;
              auStack_478[uVar15 * 3] = (*(ulonglong *)(puVar28 + 4) & 0xfffffffffffffffe) + uVar31;
              auStack_478[uVar15 * 3 + 1] = uVar25;
              auStack_468[uVar15 * 6] = (uint)uVar22;
LAB_1427e61eb:
              puVar29 = puVar28 + 4;
              uVar13 = local_480 + 1;
              if (local_480 + 1 == 0x20) {
LAB_1427e61f5:
                local_480 = local_480 + 1;
                FUN_144710c38(local_7c0);
                puVar29 = puVar28 + 4;
                uVar13 = local_480;
              }
              break;
            case 0xb:
              bVar4 = *(byte *)((longlong)puVar20 +
                               (ulonglong)
                               *(uint *)((*(ulonglong *)(puVar28 + 4) & 0xfffffffffffffffe) - 8));
              uVar15 = (ulonglong)local_480;
              auStack_478[uVar15 * 3] = (*(ulonglong *)(puVar28 + 4) & 0xfffffffffffffffe) + uVar31;
              auStack_478[uVar15 * 3 + 1] = (ulonglong)puVar20;
              auStack_468[uVar15 * 6] = (uint)bVar4;
              puVar29 = puVar28 + 4;
              uVar13 = local_480 + 1;
              if (local_480 + 1 != 0x20) break;
              goto LAB_1427e61f5;
            case 0xc:
              (*(code *)**(undefined8 **)*puVar20)((undefined8 *)*puVar20,local_7868);
              plVar8 = (longlong *)*puVar20;
              uVar13 = local_480;
              if (*(char *)((longlong)plVar8 + 0x11) == '\x01') {
                if (((ulonglong)plVar8[1] < 9) && (*(byte *)(plVar8 + 2) < 4)) {
                  puVar20 = puVar20 + 1;
                }
                else {
                  puVar20 = (ulonglong *)puVar20[1];
                }
                (**(code **)(*plVar8 + 8))(plVar8,puVar20);
                uVar13 = local_480;
              }
              break;
            case 0xd:
              (**(code **)(puVar28 + 4))(lVar16,local_7868);
              goto switchD_1427e602c_caseD_0;
            case 0xe:
              (*(code *)(&DAT_14c950070)[(int)uVar30])(lVar16,local_7868);
switchD_1427e602c_caseD_0:
              goto LAB_1427e6973;
            case 0xf:
              (**(code **)(puVar28 + 4))(puVar20,local_7868);
              puVar29 = puVar28 + 4;
              uVar13 = local_480;
              break;
            case 0x10:
              local_78c8 = puVar20[1];
              FUN_1468a7eac(local_7880,&local_78c8);
              uVar13 = local_480;
              break;
            case 0x11:
              uVar15 = puVar20[1];
              if ((longlong)(int)uVar15 != 0) {
                uVar22 = *puVar20;
                lVar26 = 0;
                do {
                  local_78c8 = *(ulonglong *)(uVar22 + 8 + lVar26);
                  FUN_1468a7eac(local_7880,&local_78c8);
                  lVar26 = lVar26 + 0x18;
                  uVar13 = local_480;
                } while ((longlong)(int)uVar15 * 0x18 != lVar26);
              }
            }
            local_480 = uVar13;
            lVar23 = lVar23 + 8;
            puVar28 = puVar29;
          } while (lVar23 != 0x20);
          puVar28 = puVar29 + 4;
        } while( true );
      }
LAB_1427e6973:
      plVar27 = plVar27 + 1;
    } while (plVar27 != local_7900 + (int)uVar24);
  }
  if ((local_7900 != (longlong *)0x0) && (local_7900 != (longlong *)param_2[1])) {
    lVar16 = (longlong)*(int *)(param_2 + 6);
    uVar30 = (&DAT_14c949f00)[lVar16 * 0x50];
    if ((ulonglong)uVar30 < 0x20) {
      (&DAT_14c949f00)[lVar16 * 0x50] = uVar30 + 1;
      *(longlong **)(&DAT_14c949f08 + (ulonglong)uVar30 * 8 + lVar16 * 0x140) = local_7900 + -1;
    }
    else {
      FUN_1400020a8();
    }
  }
  if ((DAT_14c9501c0 <= 0.0) ||
     (QueryPerformanceCounter(&local_e8),
     ((double)CONCAT44(local_e8.s.HighPart,local_e8.s.LowPart) * DAT_14c83f420 + 16777216.0) -
     _DAT_14c950180 < DAT_14c9501c0)) {
    puVar18 = (undefined8 *)param_2[5];
    if (puVar18 == (undefined8 *)0x0) {
      cVar12 = FUN_1468a8480(local_7880);
      if (cVar12 != '\0') {
        FUN_1427eb5d8(local_7880);
      }
      FUN_1468a880e(local_7880);
      puVar18 = (undefined8 *)param_2[5];
      if (puVar18 != (undefined8 *)0x0) goto LAB_1427e6a83;
      lVar16 = param_2[3];
      uVar24 = (lVar16 - param_2[4]) - 8U >> 3;
      if ((int)uVar24 == 0) goto LAB_1427e6ba6;
      uVar9 = *(undefined4 *)(lVar16 + -8);
      uVar10 = *(undefined4 *)(lVar16 + -4);
      lVar19 = 0;
      do {
        puVar3 = (undefined4 *)(lVar16 + lVar19 * 8);
        *puVar3 = uVar9;
        puVar3[1] = uVar10;
        puVar3[2] = uVar9;
        puVar3[3] = uVar10;
        lVar19 = lVar19 + 2;
      } while (lVar19 != 0x10);
      puVar18 = (undefined8 *)param_2[4];
      puVar17 = (undefined8 *)FUN_1400305d2(&DAT_14c949ec0,*(undefined4 *)(param_2 + 6));
      param_2[4] = puVar17;
      *puVar17 = 0;
      param_2[3] = param_2[4] + 8;
      if (puVar18 == (undefined8 *)0x0) goto LAB_1427e6ba6;
    }
    else {
LAB_1427e6a83:
      param_2[5] = *puVar18;
      uVar24 = 0x1ef;
    }
    local_7900 = puVar18 + 1;
    goto LAB_1427e5eeb;
  }
  cVar12 = FUN_1468a8480(local_7880);
  if (cVar12 != '\0') {
    FUN_1427eb5d8(local_7880);
  }
  FUN_1468a880e(local_7880);
  FUN_1468a880e(local_7880);
  FUN_1468a08b0(local_7c0,&local_e8);
  local_7880[0][0xd] = CONCAT44(local_e8.s.HighPart,local_e8.s.LowPart);
  local_7880[0][0xe] = CONCAT44(uStack_dc,uStack_e0);
  *(undefined1 *)(param_2 + 0xf) = 1;
  if (param_2[9] != 0) {
    LOCK();
    piVar1 = (int *)(param_2[9] + 0x4c);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
LAB_1427e6ba6:
  FUN_1468a69f0(&local_78c0);
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  param_2[7] = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  DAT_14c95014d = 0;
  if (0 < (longlong)DAT_14c9500c0) {
    lVar16 = 0;
    do {
      if ((DAT_14c95014d & 1) != 0) goto LAB_1427e6c11;
      DAT_14c95014d = *(byte *)((longlong)(&DAT_14c9500c8)[lVar16] + 0x78);
      lVar16 = lVar16 + 1;
    } while (DAT_14c9500c0 != lVar16);
    if (DAT_14c95014d != 0) goto LAB_1427e6c11;
  }
  DAT_14c95014d = 0;
LAB_1427e6c11:
  if ((local_c8 ^ (ulonglong)&local_78b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1427e6cce FUN_1427e6cce body=66 status=ok
// SIG undefined FUN_1427e6cce(void)

void FUN_1427e6cce(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_14002e560(&LAB_1468a976a,&local_9,param_2);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427e6d12 FUN_1427e6d12 body=3317 status=ok
// SIG undefined FUN_1427e6d12(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427e6d12(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined4 *puVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auVar10 [16];
  char cVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  longlong lVar16;
  longlong *plVar17;
  ulonglong *puVar18;
  ulonglong *puVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ushort *puVar27;
  ushort *puVar28;
  longlong lVar29;
  longlong lVar30;
  ulonglong uVar31;
  longlong lVar32;
  longlong *plVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 unaff_XMM9 [16];
  undefined1 auVar41 [16];
  undefined1 unaff_XMM10 [16];
  undefined1 auVar42 [16];
  longlong *local_7908;
  ulonglong local_78c8;
  undefined **local_78c0;
  undefined8 local_78b8;
  undefined2 local_78b0;
  longlong *local_7880 [3];
  undefined8 local_7868;
  undefined1 local_7840 [64];
  uint local_7800;
  undefined8 auStack_77f8 [39];
  uint local_76c0;
  undefined8 auStack_76b8 [71];
  uint local_7480;
  longlong alStack_7478 [2223];
  undefined1 local_2f00 [960];
  uint local_2b40;
  longlong alStack_2b38 [1135];
  uint local_7c0 [2];
  longlong alStack_7b8 [2];
  int aiStack_7a8 [202];
  uint local_480;
  ulonglong auStack_478 [2];
  uint auStack_468 [224];
  LARGE_INTEGER local_e8;
  uint uStack_e0;
  uint uStack_dc;
  byte local_d8;
  uint local_d4;
  byte local_d0;
  uint local_cc;
  ulonglong local_c8;
  
  local_c8 = DAT_14c707940 ^ (ulonglong)&local_78b8;
  if (DAT_14c95014d == '\0') {
    DAT_14c9500c0 = 1;
    DAT_14c95014d = '\0';
    DAT_14c9500c8 = param_2;
  }
  *(undefined2 *)(param_2 + 0xf) = 0x100;
  local_78b8 = 0;
  local_78b0 = 1;
  local_78c0 = &PTR_FUN_149e89070;
  FUN_1468ac568(local_7880,param_2);
  *param_2 = DAT_14c948580;
  lVar14 = param_2[8];
  if ((longlong)(int)lVar14 != 0) {
    lVar16 = param_2[7];
    lVar32 = 0;
    do {
      uVar23 = (ulonglong)local_7480;
      local_7480 = local_7480 + 1;
      alStack_7478[uVar23] = *(longlong *)(lVar16 + lVar32);
      if (local_7480 == 0x20) {
        FUN_1468acd84(local_7840);
      }
      lVar32 = lVar32 + 8;
    } while ((longlong)(int)lVar14 * 8 != lVar32);
  }
  auVar10 = _DAT_149931e80;
  uVar23 = (ulonglong)*(uint *)(param_2 + 2);
  auVar41 = pmovsxbq(unaff_XMM9,0x800);
  auVar42 = pmovsxbq(unaff_XMM10,0x100);
  plVar33 = param_2;
  local_7908 = (longlong *)param_2[1];
LAB_1427e6e40:
  if ((int)uVar23 != 0) {
    plVar17 = local_7908;
    do {
      lVar14 = *plVar17;
      lVar16 = *(longlong *)(lVar14 + 0x10);
      lVar32 = *(longlong *)(lVar14 + 0x20);
      uVar22 = *(ulonglong *)(lVar16 + 0x1e8);
      *local_7880[0] = lVar14;
      uVar13 = (ulonglong)local_2b40;
      local_2b40 = local_2b40 + 1;
      alStack_2b38[uVar13] = lVar16;
      if (local_2b40 == 0x20) {
        FUN_1468ad164(local_2f00);
      }
      uVar21 = local_2b40 + 1;
      alStack_2b38[local_2b40] = lVar32;
      local_2b40 = uVar21;
      if (uVar21 == 0x20) {
        FUN_1468ad164(local_2f00);
      }
      if (1 < uVar22) {
        uVar13 = (ulonglong)((uint)uVar22 & 1);
        puVar27 = (ushort *)(uVar22 & 0xfffffffffffffffe);
        lVar16 = lVar14;
        do {
          local_e8.s.LowPart = CONCAT31(local_e8.s.LowPart._1_3_,(char)*puVar27) & 0xffffff1f;
          local_e8.s.HighPart = (uint)(*puVar27 >> 5);
          uStack_e0 = CONCAT31(uStack_e0._1_3_,(char)puVar27[1]) & 0xffffff1f;
          uStack_dc = (uint)(puVar27[1] >> 5);
          local_d8 = (byte)puVar27[2] & 0x1f;
          local_d4 = (uint)(puVar27[2] >> 5);
          local_d0 = (byte)puVar27[3] & 0x1f;
          local_cc = (uint)(puVar27[3] >> 5);
          lVar32 = 0;
          do {
            bVar4 = *(byte *)((longlong)&local_e8 + lVar32);
            if (0x11 < bVar4) {
              FUN_140030042(bVar4,lVar14);
              goto switchD_1427e6f89_caseD_0;
            }
            uVar21 = *(uint *)((longlong)&local_e8 + lVar32 + 4);
            puVar18 = (ulonglong *)(lVar16 + (ulonglong)uVar21 * 8);
            puVar28 = puVar27;
            uVar12 = local_480;
            switch(bVar4) {
            case 0:
              goto switchD_1427e6f89_caseD_0;
            case 1:
              lVar16 = lVar16 + (ulonglong)(uVar21 * 0x800 + 0x800) * 8;
              break;
            case 2:
              uVar22 = (ulonglong)local_7480;
              local_7480 = local_7480 + 1;
              alStack_7478[uVar22] = (longlong)puVar18;
              if (local_7480 == 0x20) {
                FUN_1468acd84(local_7840);
                uVar12 = local_480;
              }
              break;
            case 3:
              uVar22 = (ulonglong)local_7800;
              local_7800 = local_7800 + 1;
              auStack_77f8[uVar22] = puVar18;
              if (local_7800 == 0x20) {
                FUN_1468ad5d2(local_7840);
                uVar12 = local_480;
              }
              break;
            case 4:
              uVar31 = puVar18[1];
              uVar22 = *puVar18;
              uVar20 = (ulonglong)local_480;
              auStack_478[uVar20 * 3] = (*(ulonglong *)(puVar27 + 4) & 0xfffffffffffffffe) + uVar13;
              auStack_478[uVar20 * 3 + 1] = uVar22;
              auStack_468[uVar20 * 6] = (uint)uVar31;
              goto LAB_1427e7135;
            case 5:
              plVar33 = (longlong *)
                        ((ulonglong)plVar33 & 0xffffffff00000000 | (ulonglong)*(uint *)(puVar27 + 4)
                        );
              uVar22 = (ulonglong)local_76c0;
              local_76c0 = local_76c0 + 1;
              auStack_76b8[uVar22 * 2] = puVar18;
              auStack_76b8[uVar22 * 2 + 1] = plVar33;
              puVar28 = puVar27 + 4;
              if (local_76c0 == 0x20) {
                FUN_1468adc2a(local_7840);
                uVar12 = local_480;
              }
              break;
            case 6:
              uVar22 = puVar18[1];
              iVar5 = *(int *)((longlong)puVar18 + 0x34);
              iVar6 = *(int *)((*(ulonglong *)(puVar27 + 4) & 0xfffffffffffffffe) - 8);
              uVar31 = (ulonglong)local_7c0[0];
              local_7c0[0] = local_7c0[0] + 1;
              alStack_7b8[uVar31 * 3] = (*(ulonglong *)(puVar27 + 4) & 0xfffffffffffffffe) + uVar13;
              alStack_7b8[uVar31 * 3 + 1] = (longlong)puVar18;
              aiStack_7a8[uVar31 * 6] = (int)uVar22 - iVar5;
              aiStack_7a8[uVar31 * 6 + 1] = iVar6;
              puVar28 = puVar27 + 4;
              uVar12 = local_480;
              if (local_7c0[0] == 0x20) {
                FUN_14002fe56(local_7c0);
                uVar12 = local_480;
              }
              break;
            case 7:
              if (((*(int *)((longlong)puVar18 + 0xc) != 0) &&
                  (uVar21 = (uint)puVar18[1], -1 < (int)uVar21)) &&
                 (((int)uVar21 < DAT_14c9647dc &&
                  ((puVar19 = (ulonglong *)
                              ((ulonglong)((uVar21 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8)),
                   puVar19 != (ulonglong *)0x0 &&
                   ((int)puVar19[2] == *(int *)((longlong)puVar18 + 0xc))))))) {
                uVar22 = *puVar19;
                local_78c8 = uVar22;
                FUN_1468ad97e(local_7880,&local_78c8,1);
                uVar12 = local_480;
                if ((uVar22 != 0) && (local_78c8 == 0)) {
                  *puVar18 = 0;
                  puVar18[1] = 0;
                }
              }
              break;
            case 8:
              uVar22 = puVar18[1];
              if ((longlong)(int)uVar22 != 0) {
                uVar31 = *puVar18;
                lVar30 = uVar31 + 0xc;
                lVar29 = 0;
                do {
                  iVar5 = *(int *)(lVar30 + lVar29);
                  if ((((iVar5 != 0) && (uVar21 = *(uint *)(uVar31 + 8 + lVar29), -1 < (int)uVar21))
                      && ((int)uVar21 < DAT_14c9647dc)) &&
                     ((puVar18 = (ulonglong *)
                                 ((ulonglong)((uVar21 & 0xffff) * 0x18) +
                                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8)),
                      puVar18 != (ulonglong *)0x0 && ((int)puVar18[2] == iVar5)))) {
                    uVar20 = *puVar18;
                    local_78c8 = uVar20;
                    FUN_1468ad97e(local_7880,&local_78c8,1);
                    if ((uVar20 != 0) && (local_78c8 == 0)) {
                      lVar2 = lVar30 + lVar29;
                      *(undefined8 *)(lVar2 + -0xc) = 0;
                      *(undefined8 *)(lVar2 + -4) = 0;
                    }
                  }
                  lVar29 = lVar29 + 0x20;
                  uVar12 = local_480;
                } while ((longlong)(int)uVar22 * 0x20 != lVar29);
              }
              break;
            case 9:
              uVar21 = (uint)puVar18[1];
              uVar22 = (ulonglong)(int)uVar21;
              if (uVar22 != 0) {
                uVar20 = *puVar18;
                uVar31 = ((longlong)uVar20 >> 0x18) + (longlong)puVar18;
                if ((uVar20 & 1) == 0) {
                  uVar31 = uVar20;
                }
                uVar12 = 0x20 - local_7480;
                if (uVar21 < uVar12) {
                  lVar29 = uVar31 + uVar22 * 8;
LAB_1427e755d:
                  uVar22 = (lVar29 - uVar31) - 8;
                  auVar35._8_4_ = (int)uVar22;
                  auVar35._0_8_ = uVar22;
                  auVar35._12_4_ = (int)(uVar22 >> 0x20);
                  auVar36._0_8_ = uVar22 >> 3;
                  auVar36._8_8_ = auVar35._8_8_ >> 3;
                  uVar20 = 0;
                  do {
                    auVar38._8_4_ = (int)uVar31;
                    auVar38._0_8_ = uVar31;
                    auVar38._12_4_ = (int)(uVar31 >> 0x20);
                    if ((bool)(~(SUB168(auVar36 | auVar10,0) < (longlong)(uVar20 ^ auVar10._0_8_)) &
                              1)) {
                      alStack_7478[local_7480 + uVar20] = uVar31 + auVar41._0_8_;
                    }
                    auVar40._8_4_ = (int)uVar20;
                    auVar40._0_8_ = uVar20;
                    auVar40._12_4_ = (int)(uVar20 >> 0x20);
                    if ((longlong)((auVar40._8_8_ | auVar42._8_8_) ^ auVar10._8_8_) <=
                        SUB168(auVar36 | auVar10,8)) {
                      alStack_7478[(ulonglong)local_7480 + uVar20 + 1] =
                           auVar38._8_8_ + auVar41._8_8_;
                    }
                    uVar20 = uVar20 + 2;
                    uVar31 = uVar31 + 0x10;
                  } while (((uVar22 >> 3) + 2 & 0xfffffffffffffffe) != uVar20);
                }
                else {
                  do {
                    if (uVar12 != 0) {
                      uVar20 = (longlong)(int)uVar12 + 0x1fffffffffffffff;
                      uVar24 = uVar20 & 0x1fffffffffffffff;
                      auVar34._8_4_ = (int)uVar24;
                      auVar34._0_8_ = uVar24;
                      auVar34._12_4_ = (int)(uVar24 >> 0x20);
                      uVar26 = 0;
                      uVar25 = uVar31;
                      do {
                        auVar37._8_4_ = (int)uVar25;
                        auVar37._0_8_ = uVar25;
                        auVar37._12_4_ = (int)(uVar25 >> 0x20);
                        if ((bool)(~(SUB168(auVar34 | auVar10,0) <
                                    (longlong)(uVar26 ^ auVar10._0_8_)) & 1)) {
                          alStack_7478[local_7480 + uVar26] = uVar25 + auVar41._0_8_;
                        }
                        auVar39._8_4_ = (int)uVar26;
                        auVar39._0_8_ = uVar26;
                        auVar39._12_4_ = (int)(uVar26 >> 0x20);
                        if ((longlong)((auVar39._8_8_ | auVar42._8_8_) ^ auVar10._8_8_) <=
                            SUB168(auVar34 | auVar10,8)) {
                          alStack_7478[(ulonglong)local_7480 + uVar26 + 1] =
                               auVar37._8_8_ + auVar41._8_8_;
                        }
                        uVar26 = uVar26 + 2;
                        uVar25 = uVar25 + 0x10;
                      } while ((uVar24 - ((uint)uVar20 & 1)) + 2 != uVar26);
                    }
                    uVar21 = (int)uVar22 - uVar12;
                    uVar22 = (ulonglong)uVar21;
                    uVar31 = uVar31 + (longlong)(int)uVar12 * 8;
                    local_7480 = local_7480 + uVar12;
                    FUN_1468acd84(local_7840);
                    uVar12 = 0x20;
                  } while (0x1f < uVar21);
                  if (uVar21 != 0) {
                    lVar29 = uVar31 + (ulonglong)uVar21 * 8;
                    goto LAB_1427e755d;
                  }
                  uVar21 = 0;
                }
                local_7480 = uVar21 + local_7480;
                uVar12 = local_480;
              }
              break;
            case 10:
              uVar31 = puVar18[1];
              uVar22 = *puVar18;
              uVar20 = ((longlong)uVar22 >> 0x18) + (longlong)puVar18;
              if ((uVar22 & 1) == 0) {
                uVar20 = uVar22;
              }
              uVar22 = (ulonglong)local_480;
              auStack_478[uVar22 * 3] = (*(ulonglong *)(puVar27 + 4) & 0xfffffffffffffffe) + uVar13;
              auStack_478[uVar22 * 3 + 1] = uVar20;
              auStack_468[uVar22 * 6] = (uint)uVar31;
LAB_1427e7135:
              puVar28 = puVar27 + 4;
              uVar12 = local_480 + 1;
              if (local_480 + 1 == 0x20) {
LAB_1427e713f:
                local_480 = local_480 + 1;
                FUN_144710c38(local_7c0);
                puVar28 = puVar27 + 4;
                uVar12 = local_480;
              }
              break;
            case 0xb:
              bVar4 = *(byte *)((longlong)puVar18 +
                               (ulonglong)
                               *(uint *)((*(ulonglong *)(puVar27 + 4) & 0xfffffffffffffffe) - 8));
              uVar22 = (ulonglong)local_480;
              auStack_478[uVar22 * 3] = (*(ulonglong *)(puVar27 + 4) & 0xfffffffffffffffe) + uVar13;
              auStack_478[uVar22 * 3 + 1] = (ulonglong)puVar18;
              auStack_468[uVar22 * 6] = (uint)bVar4;
              puVar28 = puVar27 + 4;
              uVar12 = local_480 + 1;
              if (local_480 + 1 != 0x20) break;
              goto LAB_1427e713f;
            case 0xc:
              (*(code *)**(undefined8 **)*puVar18)((undefined8 *)*puVar18,local_7868);
              plVar7 = (longlong *)*puVar18;
              uVar12 = local_480;
              if (*(char *)((longlong)plVar7 + 0x11) == '\x01') {
                if (((ulonglong)plVar7[1] < 9) && (*(byte *)(plVar7 + 2) < 4)) {
                  puVar18 = puVar18 + 1;
                }
                else {
                  puVar18 = (ulonglong *)puVar18[1];
                }
                (**(code **)(*plVar7 + 8))(plVar7,puVar18,local_7868);
                uVar12 = local_480;
              }
              break;
            case 0xd:
              (**(code **)(puVar27 + 4))(lVar14,local_7868);
              goto switchD_1427e6f89_caseD_0;
            case 0xe:
              (*(code *)(&DAT_14c950070)[(int)uVar21])(lVar14,local_7868);
switchD_1427e6f89_caseD_0:
              goto LAB_1427e76c2;
            case 0xf:
              (**(code **)(puVar27 + 4))(puVar18,local_7868);
              puVar28 = puVar27 + 4;
              uVar12 = local_480;
              break;
            case 0x10:
              local_78c8 = puVar18[1];
              FUN_1468ad97e(local_7880,&local_78c8,1);
              uVar12 = local_480;
              break;
            case 0x11:
              uVar22 = puVar18[1];
              if ((longlong)(int)uVar22 != 0) {
                uVar31 = *puVar18;
                lVar29 = 0;
                do {
                  local_78c8 = *(ulonglong *)(uVar31 + 8 + lVar29);
                  FUN_1468ad97e(local_7880,&local_78c8,1);
                  lVar29 = lVar29 + 0x18;
                  uVar12 = local_480;
                } while ((longlong)(int)uVar22 * 0x18 != lVar29);
              }
            }
            local_480 = uVar12;
            lVar32 = lVar32 + 8;
            puVar27 = puVar28;
          } while (lVar32 != 0x20);
          puVar27 = puVar28 + 4;
        } while( true );
      }
LAB_1427e76c2:
      plVar17 = plVar17 + 1;
    } while (plVar17 != local_7908 + (int)uVar23);
  }
  if ((local_7908 != (longlong *)0x0) && (local_7908 != (longlong *)param_2[1])) {
    lVar14 = (longlong)(int)param_2[6];
    uVar21 = (&DAT_14c949f00)[lVar14 * 0x50];
    if ((ulonglong)uVar21 < 0x20) {
      (&DAT_14c949f00)[lVar14 * 0x50] = uVar21 + 1;
      *(longlong **)(&DAT_14c949f08 + (ulonglong)uVar21 * 8 + lVar14 * 0x140) = local_7908 + -1;
    }
    else {
      FUN_1400020a8();
    }
  }
  if ((DAT_14c9501c0 <= 0.0) ||
     (QueryPerformanceCounter(&local_e8),
     ((double)CONCAT44(local_e8.s.HighPart,local_e8.s.LowPart) * DAT_14c83f420 + 16777216.0) -
     _DAT_14c950180 < DAT_14c9501c0)) {
    plVar33 = (longlong *)param_2[5];
    if (plVar33 == (longlong *)0x0) {
      cVar11 = FUN_1468addbe(local_7880);
      if (cVar11 != '\0') {
        FUN_1427ee2a8(local_7880);
      }
      FUN_1468ae14c(local_7880);
      plVar33 = (longlong *)param_2[5];
      if (plVar33 != (longlong *)0x0) goto LAB_1427e77d4;
      lVar14 = param_2[3];
      uVar23 = (lVar14 - param_2[4]) - 8U >> 3;
      if ((int)uVar23 == 0) goto LAB_1427e78ea;
      uVar8 = *(undefined4 *)(lVar14 + -8);
      uVar9 = *(undefined4 *)(lVar14 + -4);
      lVar16 = 0;
      do {
        puVar3 = (undefined4 *)(lVar14 + lVar16 * 8);
        *puVar3 = uVar8;
        puVar3[1] = uVar9;
        puVar3[2] = uVar8;
        puVar3[3] = uVar9;
        lVar16 = lVar16 + 2;
      } while (lVar16 != 0x10);
      plVar33 = (longlong *)param_2[4];
      puVar15 = (undefined8 *)FUN_1400305d2(&DAT_14c949ec0,(int)param_2[6]);
      param_2[4] = (longlong)puVar15;
      *puVar15 = 0;
      param_2[3] = param_2[4] + 8;
      if (plVar33 == (longlong *)0x0) goto LAB_1427e78ea;
    }
    else {
LAB_1427e77d4:
      param_2[5] = *plVar33;
      uVar23 = 0x1ef;
    }
    plVar33 = plVar33 + 1;
    local_7908 = plVar33;
    goto LAB_1427e6e40;
  }
  cVar11 = FUN_1468addbe(local_7880);
  if (cVar11 != '\0') {
    FUN_1427ee2a8(local_7880);
  }
  FUN_1468ae14c(local_7880);
  FUN_1468ae14c(local_7880);
  FUN_1468a08b0(local_7c0,&local_e8);
  local_7880[0][0xd] = CONCAT44(local_e8.s.HighPart,local_e8.s.LowPart);
  local_7880[0][0xe] = CONCAT44(uStack_dc,uStack_e0);
  *(undefined1 *)(param_2 + 0xf) = 1;
  if (param_2[9] != 0) {
    LOCK();
    piVar1 = (int *)(param_2[9] + 0x4c);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
LAB_1427e78ea:
  FUN_1468ac4ec();
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  param_2[7] = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  DAT_14c95014d = 0;
  if (0 < (longlong)DAT_14c9500c0) {
    lVar14 = 0;
    do {
      if ((DAT_14c95014d & 1) != 0) goto LAB_1427e7950;
      DAT_14c95014d = *(byte *)((longlong)(&DAT_14c9500c8)[lVar14] + 0x78);
      lVar14 = lVar14 + 1;
    } while (DAT_14c9500c0 != lVar14);
    if (DAT_14c95014d != 0) goto LAB_1427e7950;
  }
  DAT_14c95014d = 0;
LAB_1427e7950:
  if ((local_c8 ^ (ulonglong)&local_78b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1427e7a08 FUN_1427e7a08 body=66 status=ok
// SIG undefined FUN_1427e7a08(void)

void FUN_1427e7a08(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_14002e560(&LAB_1468af0a8,&local_9,param_2);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427e7a4b FUN_1427e7a4b body=702 status=ok
// SIG undefined FUN_1427e7a4b(void)

void FUN_1427e7a4b(int param_1,undefined8 *param_2)

{
  longlong lVar1;
  uint *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  bool bVar16;
  uint *puVar17;
  bool bVar18;
  
  lVar12 = (longlong)param_1 * 0x50;
  lVar1 = DAT_14c9640e8 + lVar12;
  lVar11 = (longlong)*(int *)(DAT_14c9640e8 + 0x20 + lVar12);
  if (lVar11 == 0) {
    lVar11 = (longlong)*(int *)(lVar1 + 0x30);
    if (lVar11 == 0) {
      return;
    }
    puVar17 = *(uint **)(lVar1 + 0x28);
    bVar16 = false;
  }
  else {
    lVar12 = *(longlong *)(DAT_14c9640e8 + 0x18 + lVar12);
    lVar15 = 0;
    bVar16 = false;
    do {
      uVar9 = *(uint *)(lVar12 + lVar15);
      if (-1 < (int)uVar9) {
        lVar6 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
        if ((*(uint *)(lVar6 + 8 + (ulonglong)(uVar9 & 0xffff) * 0x18) >> 0x15 & 1) == 0) {
          puVar17 = (uint *)(lVar6 + (ulonglong)(uVar9 & 0xffff) * 0x18 + 8);
          LOCK();
          *puVar17 = *puVar17 & ~DAT_14c75ec9c;
          UNLOCK();
          LOCK();
          *puVar17 = *puVar17 | DAT_14c75ec98;
          UNLOCK();
        }
        else {
          *(undefined4 *)(lVar12 + lVar15) = 0xffffffff;
          bVar16 = true;
        }
      }
      lVar15 = lVar15 + 4;
    } while (lVar11 * 4 != lVar15);
    lVar11 = (longlong)*(int *)(lVar1 + 0x30);
    if (lVar11 == 0) goto joined_r0x0001427e7c80;
    puVar17 = *(uint **)(lVar1 + 0x28);
  }
  puVar2 = puVar17 + lVar11;
  bVar8 = 0;
  do {
    uVar10 = DAT_14c75ec9c;
    uVar9 = *puVar17;
    if (-1 < (int)uVar9) {
      lVar11 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
      if ((*(uint *)(lVar11 + 8 + (ulonglong)(uVar9 & 0xffff) * 0x18) >> 0x15 & 1) == 0) {
        puVar3 = (undefined8 *)(lVar11 + (ulonglong)(uVar9 & 0xffff) * 0x18);
        if ((DAT_14c75ec9c & *(uint *)(puVar3 + 1)) == 0) {
          if ((0 < *(int *)((longlong)puVar3 + 0xc)) && ((*(uint *)(puVar3 + 1) >> 0x17 & 1) == 0))
          {
            do {
              uVar9 = *(uint *)(puVar3 + 1);
              if ((uVar9 >> 0x17 & 1) != 0) goto LAB_1427e7bd5;
              LOCK();
              bVar18 = uVar9 == *(uint *)(puVar3 + 1);
              if (bVar18) {
                *(uint *)(puVar3 + 1) = uVar9 | 0x800000;
              }
              uVar9 = DAT_14c75ec9c;
              UNLOCK();
            } while (!bVar18);
            uVar13 = (ulonglong)(*(uint *)((longlong)puVar3 + 0xc) & 0xffff);
            lVar11 = *(longlong *)
                      (DAT_14c9647c8 + (ulonglong)(*(uint *)((longlong)puVar3 + 0xc) >> 0x10) * 8);
            if (((DAT_14c75ec9c & *(uint *)(lVar11 + 8 + uVar13 * 0x18)) != 0) &&
               (lVar11 = lVar11 + uVar13 * 0x18, (*(uint *)(lVar11 + 8) & DAT_14c75ec9c) != 0)) {
              uVar14 = ~DAT_14c75ec9c;
              uVar10 = *(uint *)(lVar11 + 8);
              do {
                LOCK();
                uVar4 = *(uint *)(lVar11 + 8);
                bVar18 = uVar10 == uVar4;
                if (bVar18) {
                  *(uint *)(lVar11 + 8) = uVar10 & uVar14;
                  uVar4 = uVar10;
                }
                uVar10 = uVar4;
                UNLOCK();
              } while (!bVar18);
              LOCK();
              *(uint *)(lVar11 + 8) = *(uint *)(lVar11 + 8) | DAT_14c75ec98;
              UNLOCK();
              if ((uVar10 & uVar9) != 0) {
                uVar9 = *(uint *)(lVar11 + 0xc);
                goto LAB_1427e7bbf;
              }
            }
          }
        }
        else if ((*(uint *)(puVar3 + 1) & DAT_14c75ec9c) != 0) {
          uVar14 = ~DAT_14c75ec9c;
          uVar9 = *(uint *)(puVar3 + 1);
          do {
            LOCK();
            uVar4 = *(uint *)(puVar3 + 1);
            bVar18 = uVar9 == uVar4;
            if (bVar18) {
              *(uint *)(puVar3 + 1) = uVar9 & uVar14;
              uVar4 = uVar9;
            }
            uVar9 = uVar4;
            UNLOCK();
          } while (!bVar18);
          LOCK();
          *(uint *)(puVar3 + 1) = *(uint *)(puVar3 + 1) | DAT_14c75ec98;
          UNLOCK();
          if ((uVar9 & uVar10) != 0) {
            plVar7 = (longlong *)*param_2;
            *(undefined8 *)*plVar7 = *puVar3;
            lVar11 = *plVar7;
            *plVar7 = lVar11 + 8;
            if (lVar11 + 8 == plVar7[1] + 0xf80) {
              FUN_141715f94();
            }
            uVar9 = *(uint *)((longlong)puVar3 + 0xc);
            if ((int)uVar9 < 0) {
LAB_1427e7bbf:
              FUN_1427e7a4b(~uVar9,param_2);
            }
          }
        }
      }
      else {
        *puVar17 = 0xffffffff;
        bVar8 = 1;
      }
    }
LAB_1427e7bd5:
    puVar17 = puVar17 + 1;
  } while (puVar17 != puVar2);
  bVar16 = (bool)(bVar8 | bVar16);
joined_r0x0001427e7c80:
  if (bVar16) {
    iVar5 = *(int *)(lVar1 + 0x10);
    if ((longlong)iVar5 != 0) {
      lVar11 = *(longlong *)(lVar1 + 8);
      lVar12 = 0;
      do {
        uVar9 = *(uint *)(lVar11 + lVar12);
        plVar7 = (longlong *)*param_2;
        *(undefined8 *)*plVar7 =
             *(undefined8 *)
              (*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8) +
              (ulonglong)(uVar9 & 0xffff) * 0x18);
        lVar15 = *plVar7;
        *plVar7 = lVar15 + 8;
        if (lVar15 + 8 == plVar7[1] + 0xf80) {
          FUN_141715f94();
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)iVar5 * 4 != lVar12);
    }
    *(undefined1 *)(lVar1 + 0x48) = 1;
    DAT_14c96410c = 1;
  }
  return;
}



// FUNCTION 1427e7d0a FUN_1427e7d0a body=3122 status=ok
// SIG undefined FUN_1427e7d0a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427e7d0a(undefined8 *param_1)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined1 auVar6 [16];
  char cVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong *puVar15;
  ulonglong *puVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  int iVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong in_R11;
  longlong lVar23;
  uint *puVar24;
  ushort *puVar25;
  ushort *puVar26;
  undefined8 *puVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar35 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar36 [16];
  undefined1 auStack_198 [32];
  ulonglong local_178;
  ulonglong local_170;
  undefined8 *local_168;
  undefined8 *local_160;
  undefined8 *local_158;
  ulonglong *local_150;
  ulonglong local_148;
  undefined8 *local_140;
  undefined8 *local_138;
  uint *local_130;
  undefined8 *local_128;
  ulonglong *local_120;
  ulonglong *local_118;
  ushort *local_110;
  ulonglong local_108;
  ulonglong local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  ulonglong local_e0;
  ushort *local_d8;
  int local_cc;
  ulonglong local_c8;
  byte local_c0 [4];
  uint local_bc;
  byte local_b8;
  uint local_b4;
  byte local_b0;
  uint local_ac;
  byte local_a8;
  uint local_a4;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_128 = param_1 + 0xee8;
  *(undefined8 *)*param_1 = 0;
  auVar6 = _DAT_149931e80;
  local_158 = param_1 + 0xe81;
  puVar24 = (uint *)(param_1 + 0xe18);
  local_e8 = param_1 + 0xe19;
  local_160 = param_1 + 8;
  local_168 = param_1 + 0x930;
  local_140 = param_1 + 0x9a9;
  local_f0 = param_1 + 0x39;
  local_f8 = param_1 + 0x961;
  local_138 = param_1 + 0x82;
  auVar35 = pmovsxbq(unaff_XMM7,0x800);
  auVar36 = pmovsxbq(unaff_XMM8,0x100);
  local_130 = puVar24;
LAB_1427e7e11:
  local_118 = (ulonglong *)FUN_141716706(local_128,&local_cc);
  local_120 = local_118 + (longlong)local_cc * 3;
  local_150 = local_118;
LAB_1427e7e55:
  uVar10 = *local_118;
  uVar14 = local_118[1];
  puVar1 = (uint *)((longlong)local_118 + 0x14);
  local_100 = (ulonglong)*puVar1;
  puVar15 = local_118 + 2;
  local_118 = local_118 + 3;
  local_108 = (int)*puVar15 * *puVar1 + uVar14;
  local_110 = (ushort *)(uVar10 & 0xfffffffffffffffe);
  local_178 = (ulonglong)((uint)uVar10 & 1);
  puVar25 = local_110;
  uVar10 = uVar14;
LAB_1427e7ec0:
  do {
    local_148 = uVar10;
    local_c0[0] = (byte)*puVar25 & 0x1f;
    local_bc = (uint)(*puVar25 >> 5);
    local_b8 = (byte)puVar25[1] & 0x1f;
    local_b4 = (uint)(puVar25[1] >> 5);
    local_b0 = (byte)puVar25[2] & 0x1f;
    local_ac = (uint)(puVar25[2] >> 5);
    local_a8 = (byte)puVar25[3] & 0x1f;
    local_a4 = (uint)(puVar25[3] >> 5);
    lVar12 = 0;
    do {
      uVar10 = (ulonglong)local_c0[lVar12];
      if (0x11 < uVar10) {
LAB_1427e882e:
        FUN_1427e893d(uVar10);
        goto switchD_1427e7f55_caseD_0;
      }
      puVar15 = (ulonglong *)(uVar14 + (ulonglong)*(uint *)((longlong)&local_bc + lVar12) * 8);
      puVar26 = puVar25;
      switch(uVar10) {
      case 0:
        goto switchD_1427e7f55_caseD_0;
      case 1:
        uVar14 = uVar14 + (ulonglong)(*(uint *)((longlong)&local_bc + lVar12) * 0x800 + 0x800) * 8;
        break;
      case 2:
        if ((int)local_178 == 0) {
          uVar10 = *puVar15;
          uVar18 = *(uint *)(param_1 + 0x9a8);
          iVar20 = uVar18 + 1;
          *(int *)(param_1 + 0x9a8) = iVar20;
          param_1[(ulonglong)uVar18 + 0x9a9] = uVar10;
          if (iVar20 == 0x20) {
            FUN_14689e7d8(local_168);
          }
        }
        else {
          uVar18 = *(uint *)(param_1 + 0x80);
          iVar20 = uVar18 + 1;
          *(int *)(param_1 + 0x80) = iVar20;
          param_1[(ulonglong)uVar18 + 0x81] = puVar15;
          if (iVar20 == 0x20) {
            FUN_14689e3f8(local_160);
          }
        }
        break;
      case 3:
        if ((int)local_178 == 0) {
          uVar18 = *(uint *)(param_1 + 0x938);
          iVar20 = uVar18 + 1;
          *(int *)(param_1 + 0x938) = iVar20;
          param_1[(ulonglong)uVar18 + 0x939] = puVar15;
          if (iVar20 == 0x20) {
            FUN_14689eed8(local_168);
          }
        }
        else {
          uVar18 = *(uint *)(param_1 + 0x10);
          iVar20 = uVar18 + 1;
          *(int *)(param_1 + 0x10) = iVar20;
          param_1[(ulonglong)uVar18 + 0x11] = puVar15;
          if (iVar20 == 0x20) {
            FUN_14689ec46(local_160);
          }
        }
        break;
      case 4:
        uVar10 = *(ulonglong *)(puVar25 + 4);
        uVar22 = puVar15[1];
        uVar17 = *puVar15;
        uVar21 = (ulonglong)*(uint *)(param_1 + 0xe80);
        iVar20 = *(uint *)(param_1 + 0xe80) + 1;
        *(int *)(param_1 + 0xe80) = iVar20;
        local_158[uVar21 * 3] = (uVar10 & 0xfffffffffffffffe) + local_178;
        local_158[uVar21 * 3 + 1] = uVar17;
        *(int *)(local_158 + uVar21 * 3 + 2) = (int)uVar22;
        goto LAB_1427e80fc;
      case 5:
        puVar26 = puVar25 + 4;
        in_R11 = in_R11 & 0xffffffff00000000 | (ulonglong)*(uint *)(puVar25 + 4);
        if ((int)local_178 == 0) {
          uVar18 = *(uint *)(param_1 + 0x960);
          *(uint *)(param_1 + 0x960) = uVar18 + 1;
          local_f8[(ulonglong)uVar18 * 2] = puVar15;
          local_f8[(ulonglong)uVar18 * 2 + 1] = in_R11;
          if (uVar18 + 1 == 0x20) {
            FUN_14689f432(local_168);
          }
        }
        else {
          uVar18 = *(uint *)(param_1 + 0x38);
          *(uint *)(param_1 + 0x38) = uVar18 + 1;
          local_f0[(ulonglong)uVar18 * 2] = puVar15;
          local_f0[(ulonglong)uVar18 * 2 + 1] = in_R11;
          if (uVar18 + 1 == 0x20) {
            FUN_14689f29e(local_160);
          }
        }
        break;
      case 6:
        uVar10 = *(ulonglong *)(puVar25 + 4);
        uVar17 = puVar15[1];
        iVar20 = *(int *)((longlong)puVar15 + 0x34);
        uVar4 = *(undefined4 *)((uVar10 & 0xfffffffffffffffe) - 8);
        uVar22 = (ulonglong)*puVar24;
        uVar18 = *puVar24 + 1;
        *puVar24 = uVar18;
        local_e8[uVar22 * 3] = (uVar10 & 0xfffffffffffffffe) + local_178;
        local_e8[uVar22 * 3 + 1] = puVar15;
        *(int *)(local_e8 + uVar22 * 3 + 2) = (int)uVar17 - iVar20;
        *(undefined4 *)((longlong)local_e8 + uVar22 * 0x18 + 0x14) = uVar4;
        puVar26 = puVar25 + 4;
        if (uVar18 == 0x20) {
          FUN_14002fe56(puVar24);
        }
        break;
      case 7:
        if (((*(int *)((longlong)puVar15 + 0xc) != 0) &&
            (uVar18 = (uint)puVar15[1], -1 < (int)uVar18)) &&
           (((int)uVar18 < DAT_14c9647dc &&
            ((puVar16 = (ulonglong *)
                        ((ulonglong)((uVar18 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8)),
             puVar16 != (ulonglong *)0x0 && ((int)puVar16[2] == *(int *)((longlong)puVar15 + 0xc))))
            ))) {
          uVar10 = *puVar16;
          local_c8 = uVar10;
          FUN_14689eff2(param_1,&local_c8);
          if ((uVar10 != 0) && (local_c8 == 0)) {
            *puVar15 = 0;
            puVar15[1] = 0;
          }
        }
        break;
      case 8:
        uVar10 = puVar15[1];
        if ((longlong)(int)uVar10 != 0) {
          uVar17 = *puVar15;
          lVar19 = uVar17 + 0xc;
          lVar23 = 0;
          do {
            iVar20 = *(int *)(lVar19 + lVar23);
            if ((((iVar20 != 0) && (uVar18 = *(uint *)(uVar17 + 8 + lVar23), -1 < (int)uVar18)) &&
                ((int)uVar18 < DAT_14c9647dc)) &&
               ((puVar15 = (ulonglong *)
                           ((ulonglong)((uVar18 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8)),
                puVar15 != (ulonglong *)0x0 && ((int)puVar15[2] == iVar20)))) {
              uVar22 = *puVar15;
              local_170 = uVar14;
              local_c8 = uVar22;
              FUN_14689eff2(param_1,&local_c8);
              uVar14 = local_170;
              if ((uVar22 != 0) && (local_c8 == 0)) {
                lVar2 = lVar23 + lVar19;
                *(undefined8 *)(lVar2 + -0xc) = 0;
                *(undefined8 *)(lVar2 + -4) = 0;
              }
            }
            lVar23 = lVar23 + 0x20;
            puVar24 = local_130;
          } while ((longlong)(int)uVar10 * 0x20 != lVar23);
        }
        break;
      case 9:
        puVar9 = (undefined8 *)*puVar15;
        puVar27 = (undefined8 *)(((longlong)puVar9 >> 0x18) + (longlong)puVar15);
        if (((ulonglong)puVar9 & 1) == 0) {
          puVar27 = puVar9;
        }
        uVar18 = (uint)puVar15[1];
        if ((int)local_178 == 0) {
          if (uVar18 == 0) break;
          uVar13 = *(uint *)(param_1 + 0x9a8);
          uVar8 = 0x20 - uVar13;
          if (uVar18 < uVar8) {
            puVar9 = puVar27 + (int)uVar18;
LAB_1427e8793:
            puVar11 = local_140 + uVar13;
            do {
              *puVar11 = *puVar27;
              puVar11 = puVar11 + 1;
              puVar27 = puVar27 + 1;
            } while (puVar27 != puVar9);
            uVar13 = *(uint *)(param_1 + 0x9a8);
          }
          else {
            do {
              local_170 = uVar14;
              uVar13 = *(uint *)(param_1 + 0x9a8);
              if (uVar8 != 0) {
                lVar19 = 0;
                do {
                  *(undefined8 *)((longlong)local_140 + lVar19 + (ulonglong)uVar13 * 8) =
                       *(undefined8 *)((longlong)puVar27 + lVar19);
                  lVar19 = lVar19 + 8;
                } while ((longlong)(int)uVar8 * 8 - lVar19 != 0);
                uVar13 = *(uint *)(param_1 + 0x9a8);
              }
              uVar18 = uVar18 - uVar8;
              puVar27 = puVar27 + (int)uVar8;
              *(uint *)(param_1 + 0x9a8) = uVar13 + uVar8;
              FUN_14689e7d8(local_168);
              uVar8 = 0x20;
              uVar14 = local_170;
            } while (0x1f < uVar18);
            uVar13 = *(uint *)(param_1 + 0x9a8);
            if (uVar18 != 0) {
              puVar9 = puVar27 + uVar18;
              goto LAB_1427e8793;
            }
            uVar18 = 0;
          }
          *(uint *)(param_1 + 0x9a8) = uVar18 + uVar13;
        }
        else {
          if (uVar18 == 0) break;
          uVar13 = *(uint *)(param_1 + 0x80);
          uVar8 = 0x20 - uVar13;
          if (uVar18 < uVar8) {
            puVar9 = puVar27 + (int)uVar18;
LAB_1427e8562:
            uVar10 = (longlong)puVar9 + (-8 - (longlong)puVar27);
            auVar29._8_4_ = (int)uVar10;
            auVar29._0_8_ = uVar10;
            auVar29._12_4_ = (int)(uVar10 >> 0x20);
            auVar30._0_8_ = uVar10 >> 3;
            auVar30._8_8_ = auVar29._8_8_ >> 3;
            uVar17 = 0;
            do {
              auVar32._8_4_ = (int)puVar27;
              auVar32._0_8_ = puVar27;
              auVar32._12_4_ = (int)((ulonglong)puVar27 >> 0x20);
              if ((bool)(~(SUB168(auVar30 | auVar6,0) < (longlong)(uVar17 ^ auVar6._0_8_)) & 1)) {
                local_138[(ulonglong)uVar13 + (uVar17 - 1)] = (longlong)puVar27 + auVar35._0_8_;
              }
              auVar34._8_4_ = (int)uVar17;
              auVar34._0_8_ = uVar17;
              auVar34._12_4_ = (int)(uVar17 >> 0x20);
              if ((longlong)((auVar34._8_8_ | auVar36._8_8_) ^ auVar6._8_8_) <=
                  SUB168(auVar30 | auVar6,8)) {
                local_138[uVar13 + uVar17] = auVar32._8_8_ + auVar35._8_8_;
              }
              uVar17 = uVar17 + 2;
              puVar27 = puVar27 + 2;
            } while (((uVar10 >> 3) + 2 & 0xfffffffffffffffe) != uVar17);
            uVar13 = *(uint *)(param_1 + 0x80);
          }
          else {
            do {
              uVar13 = *(uint *)(param_1 + 0x80);
              if (uVar8 != 0) {
                uVar10 = (longlong)(int)uVar8 + 0x1fffffffffffffff;
                uVar17 = uVar10 & 0x1fffffffffffffff;
                auVar28._8_4_ = (int)uVar17;
                auVar28._0_8_ = uVar17;
                auVar28._12_4_ = (int)(uVar17 >> 0x20);
                uVar22 = 0;
                puVar9 = puVar27;
                do {
                  auVar31._8_4_ = (int)puVar9;
                  auVar31._0_8_ = puVar9;
                  auVar31._12_4_ = (int)((ulonglong)puVar9 >> 0x20);
                  if ((bool)(~(SUB168(auVar28 | auVar6,0) < (longlong)(uVar22 ^ auVar6._0_8_)) & 1))
                  {
                    local_138[(ulonglong)uVar13 + (uVar22 - 1)] = (longlong)puVar9 + auVar35._0_8_;
                  }
                  auVar33._8_4_ = (int)uVar22;
                  auVar33._0_8_ = uVar22;
                  auVar33._12_4_ = (int)(uVar22 >> 0x20);
                  if ((longlong)((auVar33._8_8_ | auVar36._8_8_) ^ auVar6._8_8_) <=
                      SUB168(auVar28 | auVar6,8)) {
                    local_138[uVar13 + uVar22] = auVar31._8_8_ + auVar35._8_8_;
                  }
                  uVar22 = uVar22 + 2;
                  puVar9 = puVar9 + 2;
                } while ((uVar17 - ((uint)uVar10 & 1)) + 2 != uVar22);
                uVar13 = *(uint *)(param_1 + 0x80);
              }
              uVar18 = uVar18 - uVar8;
              puVar27 = puVar27 + (int)uVar8;
              *(uint *)(param_1 + 0x80) = uVar13 + uVar8;
              FUN_14689e3f8(local_160);
              uVar8 = 0x20;
            } while (0x1f < uVar18);
            uVar13 = *(uint *)(param_1 + 0x80);
            if (uVar18 != 0) {
              puVar9 = puVar27 + uVar18;
              goto LAB_1427e8562;
            }
            uVar18 = 0;
          }
          *(uint *)(param_1 + 0x80) = uVar18 + uVar13;
        }
        break;
      case 10:
        uVar10 = *(ulonglong *)(puVar25 + 4);
        uVar22 = puVar15[1];
        uVar17 = *puVar15;
        uVar21 = ((longlong)uVar17 >> 0x18) + (longlong)puVar15;
        if ((uVar17 & 1) == 0) {
          uVar21 = uVar17;
        }
        uVar17 = (ulonglong)*(uint *)(param_1 + 0xe80);
        iVar20 = *(uint *)(param_1 + 0xe80) + 1;
        *(int *)(param_1 + 0xe80) = iVar20;
        local_158[uVar17 * 3] = (uVar10 & 0xfffffffffffffffe) + local_178;
        local_158[uVar17 * 3 + 1] = uVar21;
        *(int *)(local_158 + uVar17 * 3 + 2) = (int)uVar22;
LAB_1427e80fc:
        puVar26 = puVar25 + 4;
        if (iVar20 == 0x20) {
LAB_1427e8106:
          FUN_144710c38(puVar24);
          puVar26 = puVar25 + 4;
        }
        break;
      case 0xb:
        uVar10 = *(ulonglong *)(puVar25 + 4);
        bVar3 = *(byte *)((longlong)puVar15 +
                         (ulonglong)*(uint *)((uVar10 & 0xfffffffffffffffe) - 8));
        uVar17 = (ulonglong)*(uint *)(param_1 + 0xe80);
        iVar20 = *(uint *)(param_1 + 0xe80) + 1;
        *(int *)(param_1 + 0xe80) = iVar20;
        local_158[uVar17 * 3] = (uVar10 & 0xfffffffffffffffe) + local_178;
        local_158[uVar17 * 3 + 1] = puVar15;
        *(uint *)(local_158 + uVar17 * 3 + 2) = (uint)bVar3;
        puVar26 = puVar25 + 4;
        if (iVar20 != 0x20) break;
        goto LAB_1427e8106;
      case 0xc:
        (*(code *)**(undefined8 **)*puVar15)((undefined8 *)*puVar15,param_1[3]);
        plVar5 = (longlong *)*puVar15;
        if (*(char *)((longlong)plVar5 + 0x11) == '\x01') {
          if (((ulonglong)plVar5[1] < 9) && (*(byte *)(plVar5 + 2) < 4)) {
            puVar15 = puVar15 + 1;
          }
          else {
            puVar15 = (ulonglong *)puVar15[1];
          }
          (**(code **)(*plVar5 + 8))(plVar5,puVar15);
        }
        break;
      case 0xd:
        (**(code **)(puVar25 + 4))(local_148,param_1[3]);
switchD_1427e7f55_caseD_0:
        uVar14 = local_148 + local_100;
        puVar25 = local_110;
        uVar10 = uVar14;
        if (uVar14 != local_108) goto LAB_1427e7ec0;
        if (local_118 != local_120) goto LAB_1427e7e55;
        lVar12 = (longlong)*(int *)(param_1 + 0xeea);
        uVar18 = (&DAT_14c949f00)[lVar12 * 0x50];
        if ((ulonglong)uVar18 < 0x20) {
          (&DAT_14c949f00)[lVar12 * 0x50] = uVar18 + 1;
          *(ulonglong **)(&DAT_14c949f08 + (ulonglong)uVar18 * 8 + lVar12 * 0x140) = local_150;
        }
        else {
          FUN_1400020a8(local_150);
        }
        if (((*(longlong *)(param_1[0xee9] + 0xff0) == 0) &&
            ((int)((ulonglong)(param_1[0xee8] - param_1[0xee9]) >> 3) * -0x55555555 < 1)) &&
           (cVar7 = FUN_14689f5c6(param_1), cVar7 == '\0')) {
          if ((local_a0 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0();
          }
          return;
        }
        goto LAB_1427e7e11;
      case 0xe:
        uVar10 = CONCAT71((int7)((ulonglong)
                                 ((longlong)&switchD_1427e7f55::switchdataD_149e89d58 +
                                 (longlong)(int)(&switchD_1427e7f55::switchdataD_149e89d58)[uVar10])
                                >> 8),0xe);
        goto LAB_1427e882e;
      case 0xf:
        (**(code **)(puVar25 + 4))(puVar15,param_1[3]);
        puVar26 = puVar25 + 4;
        break;
      case 0x10:
        local_c8 = puVar15[1];
        FUN_14689eff2(param_1,&local_c8);
        break;
      case 0x11:
        uVar10 = puVar15[1];
        if ((longlong)(int)uVar10 != 0) {
          uVar17 = *puVar15;
          lVar19 = 0;
          local_170 = uVar14;
          local_e0 = in_R11;
          local_d8 = puVar25;
          do {
            local_c8 = *(ulonglong *)(uVar17 + 8 + lVar19);
            FUN_14689eff2(param_1,&local_c8);
            lVar19 = lVar19 + 0x18;
            uVar14 = local_170;
            in_R11 = local_e0;
            puVar24 = local_130;
            puVar26 = local_d8;
          } while ((longlong)(int)uVar10 * 0x18 != lVar19);
        }
      }
      lVar12 = lVar12 + 8;
      puVar25 = puVar26;
    } while (lVar12 != 0x20);
    puVar25 = puVar26 + 4;
    uVar10 = local_148;
  } while( true );
}



// FUNCTION 1427e893d FUN_1427e893d body=46 status=ok
// SIG undefined FUN_1427e893d(void)

void FUN_1427e893d(undefined1 param_1)

{
  FUN_140033559("Runtime\\CoreUObject\\Public\\UObject/FastReferenceCollector.h",0x27c,
                L"Illegal GC struct member type %d at %d",param_1,0);
  return;
}



// FUNCTION 1427e896c FUN_1427e896c body=3643 status=ok
// SIG undefined FUN_1427e896c(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427e896c(undefined8 *param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  char cVar10;
  uint uVar11;
  int iVar12;
  ushort *puVar13;
  ulonglong *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  ulonglong *puVar18;
  ulonglong *puVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  longlong lVar26;
  ushort *puVar27;
  uint uVar28;
  longlong *plVar29;
  longlong lVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar38 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar39 [16];
  longlong *local_7900;
  ulonglong local_78d0;
  ulonglong local_78c8;
  undefined **local_78c0;
  undefined8 local_78b8;
  undefined2 local_78b0;
  longlong *local_7880 [3];
  undefined8 local_7868;
  undefined1 local_7840 [64];
  uint local_7800;
  undefined8 auStack_77f8 [39];
  uint local_76c0;
  ulonglong auStack_76b8 [71];
  uint local_7480;
  longlong alStack_7478 [2223];
  undefined1 local_2f00 [64];
  uint local_2ec0;
  undefined8 auStack_2eb8 [39];
  uint local_2d80;
  ulonglong auStack_2d78 [71];
  uint local_2b40;
  ulonglong auStack_2b38 [1135];
  uint local_7c0 [2];
  ulonglong auStack_7b8 [2];
  int aiStack_7a8 [202];
  uint local_480;
  ulonglong auStack_478 [2];
  uint auStack_468 [232];
  undefined8 local_c8;
  byte local_c0;
  uint local_bc;
  byte local_b8;
  uint local_b4;
  byte local_b0;
  uint local_ac;
  ulonglong local_a8;
  
  local_a8 = DAT_14c707940 ^ (ulonglong)&local_78b8;
  *(undefined2 *)(param_1 + 0xf) = 0x100;
  local_78b8 = 0;
  local_78b0 = 1;
  local_78c0 = &PTR_FUN_149e88d50;
  FUN_1468a0cba(local_7880,param_1);
  auVar9 = _DAT_149931e80;
  auVar38 = pmovsxbq(unaff_XMM7,0x800);
  auVar39 = pmovsxbq(unaff_XMM8,0x100);
LAB_1427e8a34:
  *param_1 = DAT_14c948580;
  iVar12 = *(int *)(param_1 + 8);
  if ((longlong)iVar12 != 0) {
    lVar15 = param_1[7];
    lVar21 = 0;
    do {
      uVar24 = (ulonglong)local_2b40;
      local_2b40 = local_2b40 + 1;
      auStack_2b38[uVar24] = **(ulonglong **)(lVar15 + lVar21);
      if (local_2b40 == 0x20) {
        FUN_1468a18e0(local_2f00);
      }
      lVar21 = lVar21 + 8;
    } while ((longlong)iVar12 * 8 != lVar21);
  }
  local_7900 = (longlong *)param_1[1];
  uVar24 = (ulonglong)*(uint *)(param_1 + 2);
  do {
    if ((int)uVar24 != 0) {
      plVar29 = local_7900;
      do {
        lVar15 = *plVar29;
        uVar16 = *(ulonglong *)(lVar15 + 0x10);
        uVar22 = *(ulonglong *)(lVar15 + 0x20);
        uVar5 = *(ulonglong *)(uVar16 + 0x1e8);
        *local_7880[0] = lVar15;
        uVar20 = (ulonglong)local_2b40;
        local_2b40 = local_2b40 + 1;
        auStack_2b38[uVar20] = uVar16;
        if (local_2b40 == 0x20) {
          FUN_1468a18e0(local_2f00);
        }
        uVar28 = local_2b40 + 1;
        auStack_2b38[local_2b40] = uVar22;
        local_2b40 = uVar28;
        if (uVar28 == 0x20) {
          FUN_1468a18e0(local_2f00);
        }
        if (1 < uVar5) {
          puVar13 = (ushort *)(uVar5 & 0xfffffffffffffffe);
          uVar16 = (ulonglong)((uint)uVar5 & 1);
          lVar21 = lVar15;
          do {
            local_c8 = (ulonglong)
                       (CONCAT24(*puVar13 >> 5,(int)CONCAT71(local_c8._1_7_,(char)*puVar13)) &
                       0xffffffffff1f);
            local_c0 = (byte)puVar13[1] & 0x1f;
            local_bc = (uint)(puVar13[1] >> 5);
            local_b8 = (byte)puVar13[2] & 0x1f;
            local_b4 = (uint)(puVar13[2] >> 5);
            local_b0 = (byte)puVar13[3] & 0x1f;
            local_ac = (uint)(puVar13[3] >> 5);
            lVar23 = 0;
            do {
              bVar3 = *(byte *)((longlong)&local_c8 + lVar23);
              if (0x11 < bVar3) {
                FUN_140030042(bVar3,lVar15);
                goto switchD_1427e8bf2_caseD_0;
              }
              uVar28 = *(uint *)((longlong)&local_c8 + lVar23 + 4);
              puVar18 = (ulonglong *)(lVar21 + (ulonglong)uVar28 * 8);
              puVar27 = puVar13;
              uVar11 = local_480;
              switch(bVar3) {
              case 0:
                goto switchD_1427e8bf2_caseD_0;
              case 1:
                lVar21 = lVar21 + (ulonglong)(uVar28 * 0x800 + 0x800) * 8;
                break;
              case 2:
                if ((uVar5 & 1) == 0) {
                  uVar22 = (ulonglong)local_2b40;
                  local_2b40 = local_2b40 + 1;
                  auStack_2b38[uVar22] = *puVar18;
                  if (local_2b40 == 0x20) {
                    FUN_1468a18e0(local_2f00);
                    uVar11 = local_480;
                  }
                }
                else {
                  uVar22 = (ulonglong)local_7480;
                  local_7480 = local_7480 + 1;
                  alStack_7478[uVar22] = (longlong)puVar18;
                  if (local_7480 == 0x20) {
                    FUN_1468a1500(local_7840);
                    uVar11 = local_480;
                  }
                }
                break;
              case 3:
                if ((uVar5 & 1) == 0) {
                  uVar22 = (ulonglong)local_2ec0;
                  local_2ec0 = local_2ec0 + 1;
                  auStack_2eb8[uVar22] = puVar18;
                  if (local_2ec0 == 0x20) {
                    FUN_1468a1fe0(local_2f00);
                    uVar11 = local_480;
                  }
                }
                else {
                  uVar22 = (ulonglong)local_7800;
                  local_7800 = local_7800 + 1;
                  auStack_77f8[uVar22] = puVar18;
                  if (local_7800 == 0x20) {
                    FUN_1468a1d4e(local_7840);
                    uVar11 = local_480;
                  }
                }
                break;
              case 4:
                uVar20 = puVar18[1];
                uVar22 = *puVar18;
                uVar25 = (ulonglong)local_480;
                auStack_478[uVar25 * 3] = *(ulonglong *)(puVar13 + 4) & 0xfffffffffffffffe | uVar16;
                auStack_478[uVar25 * 3 + 1] = uVar22;
                auStack_468[uVar25 * 6] = (uint)uVar20;
                goto LAB_1427e8db6;
              case 5:
                puVar27 = puVar13 + 4;
                local_78d0 = local_78d0 & 0xffffffff00000000 | (ulonglong)*(uint *)(puVar13 + 4);
                if ((uVar5 & 1) == 0) {
                  uVar22 = (ulonglong)local_2d80;
                  local_2d80 = local_2d80 + 1;
                  auStack_2d78[uVar22 * 2] = (ulonglong)puVar18;
                  auStack_2d78[uVar22 * 2 + 1] = local_78d0;
                  if (local_2d80 == 0x20) {
                    FUN_1468a253a(local_2f00);
                    uVar11 = local_480;
                  }
                }
                else {
                  uVar22 = (ulonglong)local_76c0;
                  local_76c0 = local_76c0 + 1;
                  auStack_76b8[uVar22 * 2] = (ulonglong)puVar18;
                  auStack_76b8[uVar22 * 2 + 1] = local_78d0;
                  if (local_76c0 == 0x20) {
                    FUN_1468a23a6(local_7840);
                    uVar11 = local_480;
                  }
                }
                break;
              case 6:
                uVar22 = puVar18[1];
                iVar12 = *(int *)((longlong)puVar18 + 0x34);
                iVar4 = *(int *)((*(ulonglong *)(puVar13 + 4) & 0xfffffffffffffffe) - 8);
                uVar20 = (ulonglong)local_7c0[0];
                local_7c0[0] = local_7c0[0] + 1;
                auStack_7b8[uVar20 * 3] = *(ulonglong *)(puVar13 + 4) & 0xfffffffffffffffe | uVar16;
                auStack_7b8[uVar20 * 3 + 1] = (ulonglong)puVar18;
                aiStack_7a8[uVar20 * 6] = (int)uVar22 - iVar12;
                aiStack_7a8[uVar20 * 6 + 1] = iVar4;
                puVar27 = puVar13 + 4;
                uVar11 = local_480;
                if (local_7c0[0] == 0x20) {
                  FUN_14002fe56(local_7c0);
                  uVar11 = local_480;
                }
                break;
              case 7:
                if (((*(int *)((longlong)puVar18 + 0xc) != 0) &&
                    (uVar28 = (uint)puVar18[1], -1 < (int)uVar28)) &&
                   (((int)uVar28 < DAT_14c9647dc &&
                    ((puVar19 = (ulonglong *)
                                ((ulonglong)((uVar28 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar28 >> 0x10) * 8)),
                     puVar19 != (ulonglong *)0x0 &&
                     ((int)puVar19[2] == *(int *)((longlong)puVar18 + 0xc))))))) {
                  uVar22 = *puVar19;
                  local_78c8 = uVar22;
                  FUN_1468a20fa(local_7880,&local_78c8);
                  uVar11 = local_480;
                  if ((uVar22 != 0) && (local_78c8 == 0)) {
                    *puVar18 = 0;
                    puVar18[1] = 0;
                  }
                }
                break;
              case 8:
                uVar22 = puVar18[1];
                if ((longlong)(int)uVar22 != 0) {
                  uVar20 = *puVar18;
                  lVar26 = uVar20 + 0xc;
                  lVar30 = 0;
                  do {
                    iVar12 = *(int *)(lVar26 + lVar30);
                    if ((((iVar12 != 0) &&
                         (uVar28 = *(uint *)(uVar20 + 8 + lVar30), -1 < (int)uVar28)) &&
                        ((int)uVar28 < DAT_14c9647dc)) &&
                       ((puVar18 = (ulonglong *)
                                   ((ulonglong)((uVar28 & 0xffff) * 0x18) +
                                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar28 >> 0x10) * 8)),
                        puVar18 != (ulonglong *)0x0 && ((int)puVar18[2] == iVar12)))) {
                      uVar25 = *puVar18;
                      local_78c8 = uVar25;
                      FUN_1468a20fa(local_7880,&local_78c8);
                      if ((uVar25 != 0) && (local_78c8 == 0)) {
                        lVar1 = lVar26 + lVar30;
                        *(undefined8 *)(lVar1 + -0xc) = 0;
                        *(undefined8 *)(lVar1 + -4) = 0;
                      }
                    }
                    lVar30 = lVar30 + 0x20;
                    uVar11 = local_480;
                  } while ((longlong)(int)uVar22 * 0x20 != lVar30);
                }
                break;
              case 9:
                puVar14 = (ulonglong *)*puVar18;
                puVar19 = (ulonglong *)(((longlong)puVar14 >> 0x18) + (longlong)puVar18);
                if (((ulonglong)puVar14 & 1) == 0) {
                  puVar19 = puVar14;
                }
                uVar28 = (uint)puVar18[1];
                if ((uVar5 & 1) == 0) {
                  if (uVar28 == 0) break;
                  uVar11 = 0x20 - local_2b40;
                  if (uVar28 < uVar11) {
                    puVar18 = puVar19 + (int)uVar28;
LAB_1427e945d:
                    puVar14 = auStack_2b38 + local_2b40;
                    do {
                      *puVar14 = *puVar19;
                      puVar14 = puVar14 + 1;
                      puVar19 = puVar19 + 1;
                    } while (puVar19 != puVar18);
                  }
                  else {
                    do {
                      if (uVar11 != 0) {
                        lVar26 = 0;
                        do {
                          *(undefined8 *)
                           ((longlong)auStack_2b38 + lVar26 + (ulonglong)local_2b40 * 8) =
                               *(undefined8 *)((longlong)puVar19 + lVar26);
                          lVar26 = lVar26 + 8;
                        } while ((longlong)(int)uVar11 * 8 - lVar26 != 0);
                      }
                      uVar28 = uVar28 - uVar11;
                      puVar19 = puVar19 + (int)uVar11;
                      local_2b40 = local_2b40 + uVar11;
                      FUN_1468a18e0(local_2f00);
                      uVar11 = 0x20;
                    } while (0x1f < uVar28);
                    if (uVar28 != 0) {
                      puVar18 = puVar19 + uVar28;
                      goto LAB_1427e945d;
                    }
                    uVar28 = 0;
                  }
                  local_2b40 = uVar28 + local_2b40;
                  uVar11 = local_480;
                }
                else {
                  if (uVar28 == 0) break;
                  uVar11 = 0x20 - local_7480;
                  if (uVar28 < uVar11) {
                    puVar18 = puVar19 + (int)uVar28;
LAB_1427e9314:
                    uVar22 = (longlong)puVar18 + (-8 - (longlong)puVar19);
                    auVar32._8_4_ = (int)uVar22;
                    auVar32._0_8_ = uVar22;
                    auVar32._12_4_ = (int)(uVar22 >> 0x20);
                    auVar33._0_8_ = uVar22 >> 3;
                    auVar33._8_8_ = auVar32._8_8_ >> 3;
                    uVar20 = 0;
                    do {
                      auVar35._8_4_ = (int)puVar19;
                      auVar35._0_8_ = puVar19;
                      auVar35._12_4_ = (int)((ulonglong)puVar19 >> 0x20);
                      if ((bool)(~(SUB168(auVar33 | auVar9,0) < (longlong)(uVar20 ^ auVar9._0_8_)) &
                                1)) {
                        alStack_7478[local_7480 + uVar20] = (longlong)puVar19 + auVar38._0_8_;
                      }
                      auVar37._8_4_ = (int)uVar20;
                      auVar37._0_8_ = uVar20;
                      auVar37._12_4_ = (int)(uVar20 >> 0x20);
                      if ((longlong)((auVar37._8_8_ | auVar39._8_8_) ^ auVar9._8_8_) <=
                          SUB168(auVar33 | auVar9,8)) {
                        alStack_7478[(ulonglong)local_7480 + uVar20 + 1] =
                             auVar35._8_8_ + auVar38._8_8_;
                      }
                      uVar20 = uVar20 + 2;
                      puVar19 = puVar19 + 2;
                    } while (((uVar22 >> 3) + 2 & 0xfffffffffffffffe) != uVar20);
                  }
                  else {
                    do {
                      if (uVar11 != 0) {
                        uVar22 = (longlong)(int)uVar11 + 0x1fffffffffffffff;
                        uVar20 = uVar22 & 0x1fffffffffffffff;
                        auVar31._8_4_ = (int)uVar20;
                        auVar31._0_8_ = uVar20;
                        auVar31._12_4_ = (int)(uVar20 >> 0x20);
                        uVar25 = 0;
                        puVar18 = puVar19;
                        do {
                          auVar34._8_4_ = (int)puVar18;
                          auVar34._0_8_ = puVar18;
                          auVar34._12_4_ = (int)((ulonglong)puVar18 >> 0x20);
                          if ((bool)(~(SUB168(auVar31 | auVar9,0) <
                                      (longlong)(uVar25 ^ auVar9._0_8_)) & 1)) {
                            alStack_7478[local_7480 + uVar25] = (longlong)puVar18 + auVar38._0_8_;
                          }
                          auVar36._8_4_ = (int)uVar25;
                          auVar36._0_8_ = uVar25;
                          auVar36._12_4_ = (int)(uVar25 >> 0x20);
                          if ((longlong)((auVar36._8_8_ | auVar39._8_8_) ^ auVar9._8_8_) <=
                              SUB168(auVar31 | auVar9,8)) {
                            alStack_7478[(ulonglong)local_7480 + uVar25 + 1] =
                                 auVar34._8_8_ + auVar38._8_8_;
                          }
                          uVar25 = uVar25 + 2;
                          puVar18 = puVar18 + 2;
                        } while ((uVar20 - ((uint)uVar22 & 1)) + 2 != uVar25);
                      }
                      uVar28 = uVar28 - uVar11;
                      puVar19 = puVar19 + (int)uVar11;
                      local_7480 = local_7480 + uVar11;
                      FUN_1468a1500(local_7840);
                      uVar11 = 0x20;
                    } while (0x1f < uVar28);
                    if (uVar28 != 0) {
                      puVar18 = puVar19 + uVar28;
                      goto LAB_1427e9314;
                    }
                    uVar28 = 0;
                  }
                  local_7480 = uVar28 + local_7480;
                  uVar11 = local_480;
                }
                break;
              case 10:
                uVar20 = puVar18[1];
                uVar22 = *puVar18;
                uVar25 = ((longlong)uVar22 >> 0x18) + (longlong)puVar18;
                if ((uVar22 & 1) == 0) {
                  uVar25 = uVar22;
                }
                uVar22 = (ulonglong)local_480;
                auStack_478[uVar22 * 3] = *(ulonglong *)(puVar13 + 4) & 0xfffffffffffffffe | uVar16;
                auStack_478[uVar22 * 3 + 1] = uVar25;
                auStack_468[uVar22 * 6] = (uint)uVar20;
LAB_1427e8db6:
                puVar27 = puVar13 + 4;
                uVar11 = local_480 + 1;
                if (local_480 + 1 == 0x20) {
LAB_1427e8dc0:
                  local_480 = local_480 + 1;
                  FUN_144710c38(local_7c0);
                  puVar27 = puVar13 + 4;
                  uVar11 = local_480;
                }
                break;
              case 0xb:
                bVar3 = *(byte *)((longlong)puVar18 +
                                 (ulonglong)
                                 *(uint *)((*(ulonglong *)(puVar13 + 4) & 0xfffffffffffffffe) - 8));
                uVar22 = (ulonglong)local_480;
                auStack_478[uVar22 * 3] = *(ulonglong *)(puVar13 + 4) & 0xfffffffffffffffe | uVar16;
                auStack_478[uVar22 * 3 + 1] = (ulonglong)puVar18;
                auStack_468[uVar22 * 6] = (uint)bVar3;
                puVar27 = puVar13 + 4;
                uVar11 = local_480 + 1;
                if (local_480 + 1 != 0x20) break;
                goto LAB_1427e8dc0;
              case 0xc:
                (*(code *)**(undefined8 **)*puVar18)((undefined8 *)*puVar18,local_7868);
                plVar6 = (longlong *)*puVar18;
                uVar11 = local_480;
                if (*(char *)((longlong)plVar6 + 0x11) == '\x01') {
                  if (((ulonglong)plVar6[1] < 9) && (*(byte *)(plVar6 + 2) < 4)) {
                    puVar18 = puVar18 + 1;
                  }
                  else {
                    puVar18 = (ulonglong *)puVar18[1];
                  }
                  (**(code **)(*plVar6 + 8))(plVar6,puVar18);
                  uVar11 = local_480;
                }
                break;
              case 0xd:
                (**(code **)(puVar13 + 4))(lVar15,local_7868);
                goto switchD_1427e8bf2_caseD_0;
              case 0xe:
                cVar10 = FUN_14689c496((ulonglong)uVar28,lVar15);
                if (cVar10 == '\0') {
                  (*(code *)(&DAT_14c950070)[(int)uVar28])(lVar15,local_7868);
                }
switchD_1427e8bf2_caseD_0:
                goto LAB_1427e9544;
              case 0xf:
                (**(code **)(puVar13 + 4))(puVar18,local_7868);
                puVar27 = puVar13 + 4;
                uVar11 = local_480;
                break;
              case 0x10:
                local_78c8 = puVar18[1];
                FUN_1468a20fa(local_7880,&local_78c8);
                uVar11 = local_480;
                break;
              case 0x11:
                uVar22 = puVar18[1];
                if ((longlong)(int)uVar22 != 0) {
                  uVar20 = *puVar18;
                  lVar26 = 0;
                  do {
                    local_78c8 = *(ulonglong *)(uVar20 + 8 + lVar26);
                    FUN_1468a20fa(local_7880,&local_78c8);
                    lVar26 = lVar26 + 0x18;
                    uVar11 = local_480;
                  } while ((longlong)(int)uVar22 * 0x18 != lVar26);
                }
              }
              local_480 = uVar11;
              lVar23 = lVar23 + 8;
              puVar13 = puVar27;
            } while (lVar23 != 0x20);
            puVar13 = puVar27 + 4;
          } while( true );
        }
LAB_1427e9544:
        plVar29 = plVar29 + 1;
      } while (plVar29 != local_7900 + (int)uVar24);
    }
    if ((local_7900 != (longlong *)0x0) && (local_7900 != (longlong *)param_1[1])) {
      lVar15 = (longlong)*(int *)(param_1 + 6);
      uVar28 = (&DAT_14c949f00)[lVar15 * 0x50];
      if ((ulonglong)uVar28 < 0x20) {
        (&DAT_14c949f00)[lVar15 * 0x50] = uVar28 + 1;
        *(longlong **)(&DAT_14c949f08 + (ulonglong)uVar28 * 8 + lVar15 * 0x140) = local_7900 + -1;
      }
      else {
        FUN_1400020a8();
      }
    }
    uVar16 = FUN_1456b24b8(param_1[5]);
    if (uVar16 == 0) {
      FUN_140030620(param_1,&local_78c0);
      uVar22 = 0x1ef;
      do {
        cVar10 = FUN_1468a26ce(local_7880);
        if (cVar10 != '\0') {
          FUN_1427e9a66(local_7880);
        }
        FUN_1468a2a5c(local_7880);
        uVar16 = FUN_1456b24b8(param_1[5]);
        uVar24 = uVar22;
        if (uVar16 != 0) goto LAB_1427e9732;
        lVar15 = param_1[3];
        uVar24 = (lVar15 - param_1[4]) - 8U >> 3;
        if ((int)uVar24 == 0) {
          local_c8 = 0;
        }
        else {
          uVar7 = *(undefined4 *)(lVar15 + -8);
          uVar8 = *(undefined4 *)(lVar15 + -4);
          lVar21 = 0;
          do {
            puVar2 = (undefined4 *)(lVar15 + lVar21 * 8);
            *puVar2 = uVar7;
            puVar2[1] = uVar8;
            puVar2[2] = uVar7;
            puVar2[3] = uVar8;
            lVar21 = lVar21 + 2;
          } while (lVar21 != 0x10);
          uVar16 = param_1[4];
          puVar17 = (undefined8 *)FUN_1400305d2(&DAT_14c949ec0,*(undefined4 *)(param_1 + 6));
          param_1[4] = puVar17;
          *puVar17 = 0;
          param_1[3] = param_1[4] + 8;
          uVar22 = uVar24 & 0xffffffff;
          local_c8 = uVar16;
          if (uVar16 != 0) goto LAB_1427e9732;
        }
        iVar12 = FUN_14689c9f7(param_1,&local_78c0,&local_c8,1);
      } while (iVar12 == 2);
      if (iVar12 == 3) goto LAB_1427e8a34;
      uVar16 = local_c8;
      uVar24 = uVar22;
      if (local_c8 == 0) {
        FUN_1468a0c3e(&local_78c0);
        if ((local_a8 ^ (ulonglong)&local_78b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return;
      }
    }
    else {
      uVar24 = 0x1ef;
    }
LAB_1427e9732:
    local_7900 = (longlong *)(uVar16 + 8);
  } while( true );
}



// FUNCTION 1427e97a8 FUN_1427e97a8 body=702 status=ok
// SIG undefined FUN_1427e97a8(void)

void FUN_1427e97a8(int param_1,undefined8 *param_2)

{
  longlong lVar1;
  uint *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  bool bVar16;
  uint *puVar17;
  bool bVar18;
  
  lVar12 = (longlong)param_1 * 0x50;
  lVar1 = DAT_14c9640e8 + lVar12;
  lVar11 = (longlong)*(int *)(DAT_14c9640e8 + 0x20 + lVar12);
  if (lVar11 == 0) {
    lVar11 = (longlong)*(int *)(lVar1 + 0x30);
    if (lVar11 == 0) {
      return;
    }
    puVar17 = *(uint **)(lVar1 + 0x28);
    bVar16 = false;
  }
  else {
    lVar12 = *(longlong *)(DAT_14c9640e8 + 0x18 + lVar12);
    lVar15 = 0;
    bVar16 = false;
    do {
      uVar9 = *(uint *)(lVar12 + lVar15);
      if (-1 < (int)uVar9) {
        lVar6 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
        if ((*(uint *)(lVar6 + 8 + (ulonglong)(uVar9 & 0xffff) * 0x18) >> 0x15 & 1) == 0) {
          puVar17 = (uint *)(lVar6 + (ulonglong)(uVar9 & 0xffff) * 0x18 + 8);
          LOCK();
          *puVar17 = *puVar17 & ~DAT_14c75ec9c;
          UNLOCK();
          LOCK();
          *puVar17 = *puVar17 | DAT_14c75ec98;
          UNLOCK();
        }
        else {
          *(undefined4 *)(lVar12 + lVar15) = 0xffffffff;
          bVar16 = true;
        }
      }
      lVar15 = lVar15 + 4;
    } while (lVar11 * 4 != lVar15);
    lVar11 = (longlong)*(int *)(lVar1 + 0x30);
    if (lVar11 == 0) goto joined_r0x0001427e99dd;
    puVar17 = *(uint **)(lVar1 + 0x28);
  }
  puVar2 = puVar17 + lVar11;
  bVar8 = 0;
  do {
    uVar10 = DAT_14c75ec9c;
    uVar9 = *puVar17;
    if (-1 < (int)uVar9) {
      lVar11 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
      if ((*(uint *)(lVar11 + 8 + (ulonglong)(uVar9 & 0xffff) * 0x18) >> 0x15 & 1) == 0) {
        puVar3 = (undefined8 *)(lVar11 + (ulonglong)(uVar9 & 0xffff) * 0x18);
        if ((DAT_14c75ec9c & *(uint *)(puVar3 + 1)) == 0) {
          if ((0 < *(int *)((longlong)puVar3 + 0xc)) && ((*(uint *)(puVar3 + 1) >> 0x17 & 1) == 0))
          {
            do {
              uVar9 = *(uint *)(puVar3 + 1);
              if ((uVar9 >> 0x17 & 1) != 0) goto LAB_1427e9932;
              LOCK();
              bVar18 = uVar9 == *(uint *)(puVar3 + 1);
              if (bVar18) {
                *(uint *)(puVar3 + 1) = uVar9 | 0x800000;
              }
              uVar9 = DAT_14c75ec9c;
              UNLOCK();
            } while (!bVar18);
            uVar13 = (ulonglong)(*(uint *)((longlong)puVar3 + 0xc) & 0xffff);
            lVar11 = *(longlong *)
                      (DAT_14c9647c8 + (ulonglong)(*(uint *)((longlong)puVar3 + 0xc) >> 0x10) * 8);
            if (((DAT_14c75ec9c & *(uint *)(lVar11 + 8 + uVar13 * 0x18)) != 0) &&
               (lVar11 = lVar11 + uVar13 * 0x18, (*(uint *)(lVar11 + 8) & DAT_14c75ec9c) != 0)) {
              uVar14 = ~DAT_14c75ec9c;
              uVar10 = *(uint *)(lVar11 + 8);
              do {
                LOCK();
                uVar4 = *(uint *)(lVar11 + 8);
                bVar18 = uVar10 == uVar4;
                if (bVar18) {
                  *(uint *)(lVar11 + 8) = uVar10 & uVar14;
                  uVar4 = uVar10;
                }
                uVar10 = uVar4;
                UNLOCK();
              } while (!bVar18);
              LOCK();
              *(uint *)(lVar11 + 8) = *(uint *)(lVar11 + 8) | DAT_14c75ec98;
              UNLOCK();
              if ((uVar10 & uVar9) != 0) {
                uVar9 = *(uint *)(lVar11 + 0xc);
                goto LAB_1427e991c;
              }
            }
          }
        }
        else if ((*(uint *)(puVar3 + 1) & DAT_14c75ec9c) != 0) {
          uVar14 = ~DAT_14c75ec9c;
          uVar9 = *(uint *)(puVar3 + 1);
          do {
            LOCK();
            uVar4 = *(uint *)(puVar3 + 1);
            bVar18 = uVar9 == uVar4;
            if (bVar18) {
              *(uint *)(puVar3 + 1) = uVar9 & uVar14;
              uVar4 = uVar9;
            }
            uVar9 = uVar4;
            UNLOCK();
          } while (!bVar18);
          LOCK();
          *(uint *)(puVar3 + 1) = *(uint *)(puVar3 + 1) | DAT_14c75ec98;
          UNLOCK();
          if ((uVar9 & uVar10) != 0) {
            plVar7 = (longlong *)*param_2;
            *(undefined8 *)*plVar7 = *puVar3;
            lVar11 = *plVar7;
            *plVar7 = lVar11 + 8;
            if (lVar11 + 8 == plVar7[1] + 0xf80) {
              FUN_1400318c8();
            }
            uVar9 = *(uint *)((longlong)puVar3 + 0xc);
            if ((int)uVar9 < 0) {
LAB_1427e991c:
              FUN_1427e97a8(~uVar9,param_2);
            }
          }
        }
      }
      else {
        *puVar17 = 0xffffffff;
        bVar8 = 1;
      }
    }
LAB_1427e9932:
    puVar17 = puVar17 + 1;
  } while (puVar17 != puVar2);
  bVar16 = (bool)(bVar8 | bVar16);
joined_r0x0001427e99dd:
  if (bVar16) {
    iVar5 = *(int *)(lVar1 + 0x10);
    if ((longlong)iVar5 != 0) {
      lVar11 = *(longlong *)(lVar1 + 8);
      lVar12 = 0;
      do {
        uVar9 = *(uint *)(lVar11 + lVar12);
        plVar7 = (longlong *)*param_2;
        *(undefined8 *)*plVar7 =
             *(undefined8 *)
              (*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8) +
              (ulonglong)(uVar9 & 0xffff) * 0x18);
        lVar15 = *plVar7;
        *plVar7 = lVar15 + 8;
        if (lVar15 + 8 == plVar7[1] + 0xf80) {
          FUN_1400318c8();
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)iVar5 * 4 != lVar12);
    }
    *(undefined1 *)(lVar1 + 0x48) = 1;
    DAT_14c96410c = 1;
  }
  return;
}



// FUNCTION 1427e9a66 FUN_1427e9a66 body=3122 status=ok
// SIG undefined FUN_1427e9a66(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427e9a66(undefined8 *param_1)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined1 auVar6 [16];
  char cVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong *puVar15;
  ulonglong *puVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  int iVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong in_R11;
  longlong lVar23;
  uint *puVar24;
  ushort *puVar25;
  ushort *puVar26;
  undefined8 *puVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar35 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar36 [16];
  undefined1 auStack_198 [32];
  ulonglong local_178;
  ulonglong local_170;
  undefined8 *local_168;
  undefined8 *local_160;
  undefined8 *local_158;
  ulonglong *local_150;
  ulonglong local_148;
  undefined8 *local_140;
  undefined8 *local_138;
  uint *local_130;
  undefined8 *local_128;
  ulonglong *local_120;
  ulonglong *local_118;
  ushort *local_110;
  ulonglong local_108;
  ulonglong local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  ulonglong local_e0;
  ushort *local_d8;
  int local_cc;
  ulonglong local_c8;
  byte local_c0 [4];
  uint local_bc;
  byte local_b8;
  uint local_b4;
  byte local_b0;
  uint local_ac;
  byte local_a8;
  uint local_a4;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_128 = param_1 + 0xee8;
  *(undefined8 *)*param_1 = 0;
  auVar6 = _DAT_149931e80;
  local_158 = param_1 + 0xe81;
  puVar24 = (uint *)(param_1 + 0xe18);
  local_e8 = param_1 + 0xe19;
  local_160 = param_1 + 8;
  local_168 = param_1 + 0x930;
  local_140 = param_1 + 0x9a9;
  local_f0 = param_1 + 0x39;
  local_f8 = param_1 + 0x961;
  local_138 = param_1 + 0x82;
  auVar35 = pmovsxbq(unaff_XMM7,0x800);
  auVar36 = pmovsxbq(unaff_XMM8,0x100);
  local_130 = puVar24;
LAB_1427e9b6d:
  local_118 = (ulonglong *)FUN_141716706(local_128,&local_cc);
  local_120 = local_118 + (longlong)local_cc * 3;
  local_150 = local_118;
LAB_1427e9bb1:
  uVar10 = *local_118;
  uVar14 = local_118[1];
  puVar1 = (uint *)((longlong)local_118 + 0x14);
  local_100 = (ulonglong)*puVar1;
  puVar15 = local_118 + 2;
  local_118 = local_118 + 3;
  local_108 = (int)*puVar15 * *puVar1 + uVar14;
  local_110 = (ushort *)(uVar10 & 0xfffffffffffffffe);
  local_178 = (ulonglong)((uint)uVar10 & 1);
  puVar25 = local_110;
  uVar10 = uVar14;
LAB_1427e9c1c:
  do {
    local_148 = uVar10;
    local_c0[0] = (byte)*puVar25 & 0x1f;
    local_bc = (uint)(*puVar25 >> 5);
    local_b8 = (byte)puVar25[1] & 0x1f;
    local_b4 = (uint)(puVar25[1] >> 5);
    local_b0 = (byte)puVar25[2] & 0x1f;
    local_ac = (uint)(puVar25[2] >> 5);
    local_a8 = (byte)puVar25[3] & 0x1f;
    local_a4 = (uint)(puVar25[3] >> 5);
    lVar12 = 0;
    do {
      uVar10 = (ulonglong)local_c0[lVar12];
      if (0x11 < uVar10) {
LAB_1427ea58a:
        FUN_1427e893d(uVar10);
        goto switchD_1427e9cb1_caseD_0;
      }
      puVar15 = (ulonglong *)(uVar14 + (ulonglong)*(uint *)((longlong)&local_bc + lVar12) * 8);
      puVar26 = puVar25;
      switch(uVar10) {
      case 0:
        goto switchD_1427e9cb1_caseD_0;
      case 1:
        uVar14 = uVar14 + (ulonglong)(*(uint *)((longlong)&local_bc + lVar12) * 0x800 + 0x800) * 8;
        break;
      case 2:
        if ((int)local_178 == 0) {
          uVar10 = *puVar15;
          uVar18 = *(uint *)(param_1 + 0x9a8);
          iVar20 = uVar18 + 1;
          *(int *)(param_1 + 0x9a8) = iVar20;
          param_1[(ulonglong)uVar18 + 0x9a9] = uVar10;
          if (iVar20 == 0x20) {
            FUN_1468a18e0(local_168);
          }
        }
        else {
          uVar18 = *(uint *)(param_1 + 0x80);
          iVar20 = uVar18 + 1;
          *(int *)(param_1 + 0x80) = iVar20;
          param_1[(ulonglong)uVar18 + 0x81] = puVar15;
          if (iVar20 == 0x20) {
            FUN_1468a1500(local_160);
          }
        }
        break;
      case 3:
        if ((int)local_178 == 0) {
          uVar18 = *(uint *)(param_1 + 0x938);
          iVar20 = uVar18 + 1;
          *(int *)(param_1 + 0x938) = iVar20;
          param_1[(ulonglong)uVar18 + 0x939] = puVar15;
          if (iVar20 == 0x20) {
            FUN_1468a1fe0(local_168);
          }
        }
        else {
          uVar18 = *(uint *)(param_1 + 0x10);
          iVar20 = uVar18 + 1;
          *(int *)(param_1 + 0x10) = iVar20;
          param_1[(ulonglong)uVar18 + 0x11] = puVar15;
          if (iVar20 == 0x20) {
            FUN_1468a1d4e(local_160);
          }
        }
        break;
      case 4:
        uVar10 = *(ulonglong *)(puVar25 + 4);
        uVar22 = puVar15[1];
        uVar17 = *puVar15;
        uVar21 = (ulonglong)*(uint *)(param_1 + 0xe80);
        iVar20 = *(uint *)(param_1 + 0xe80) + 1;
        *(int *)(param_1 + 0xe80) = iVar20;
        local_158[uVar21 * 3] = (uVar10 & 0xfffffffffffffffe) + local_178;
        local_158[uVar21 * 3 + 1] = uVar17;
        *(int *)(local_158 + uVar21 * 3 + 2) = (int)uVar22;
        goto LAB_1427e9e58;
      case 5:
        puVar26 = puVar25 + 4;
        in_R11 = in_R11 & 0xffffffff00000000 | (ulonglong)*(uint *)(puVar25 + 4);
        if ((int)local_178 == 0) {
          uVar18 = *(uint *)(param_1 + 0x960);
          *(uint *)(param_1 + 0x960) = uVar18 + 1;
          local_f8[(ulonglong)uVar18 * 2] = puVar15;
          local_f8[(ulonglong)uVar18 * 2 + 1] = in_R11;
          if (uVar18 + 1 == 0x20) {
            FUN_1468a253a(local_168);
          }
        }
        else {
          uVar18 = *(uint *)(param_1 + 0x38);
          *(uint *)(param_1 + 0x38) = uVar18 + 1;
          local_f0[(ulonglong)uVar18 * 2] = puVar15;
          local_f0[(ulonglong)uVar18 * 2 + 1] = in_R11;
          if (uVar18 + 1 == 0x20) {
            FUN_1468a23a6(local_160);
          }
        }
        break;
      case 6:
        uVar10 = *(ulonglong *)(puVar25 + 4);
        uVar17 = puVar15[1];
        iVar20 = *(int *)((longlong)puVar15 + 0x34);
        uVar4 = *(undefined4 *)((uVar10 & 0xfffffffffffffffe) - 8);
        uVar22 = (ulonglong)*puVar24;
        uVar18 = *puVar24 + 1;
        *puVar24 = uVar18;
        local_e8[uVar22 * 3] = (uVar10 & 0xfffffffffffffffe) + local_178;
        local_e8[uVar22 * 3 + 1] = puVar15;
        *(int *)(local_e8 + uVar22 * 3 + 2) = (int)uVar17 - iVar20;
        *(undefined4 *)((longlong)local_e8 + uVar22 * 0x18 + 0x14) = uVar4;
        puVar26 = puVar25 + 4;
        if (uVar18 == 0x20) {
          FUN_14002fe56(puVar24);
        }
        break;
      case 7:
        if (((*(int *)((longlong)puVar15 + 0xc) != 0) &&
            (uVar18 = (uint)puVar15[1], -1 < (int)uVar18)) &&
           (((int)uVar18 < DAT_14c9647dc &&
            ((puVar16 = (ulonglong *)
                        ((ulonglong)((uVar18 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8)),
             puVar16 != (ulonglong *)0x0 && ((int)puVar16[2] == *(int *)((longlong)puVar15 + 0xc))))
            ))) {
          uVar10 = *puVar16;
          local_c8 = uVar10;
          FUN_1468a20fa(param_1,&local_c8);
          if ((uVar10 != 0) && (local_c8 == 0)) {
            *puVar15 = 0;
            puVar15[1] = 0;
          }
        }
        break;
      case 8:
        uVar10 = puVar15[1];
        if ((longlong)(int)uVar10 != 0) {
          uVar17 = *puVar15;
          lVar19 = uVar17 + 0xc;
          lVar23 = 0;
          do {
            iVar20 = *(int *)(lVar19 + lVar23);
            if ((((iVar20 != 0) && (uVar18 = *(uint *)(uVar17 + 8 + lVar23), -1 < (int)uVar18)) &&
                ((int)uVar18 < DAT_14c9647dc)) &&
               ((puVar15 = (ulonglong *)
                           ((ulonglong)((uVar18 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8)),
                puVar15 != (ulonglong *)0x0 && ((int)puVar15[2] == iVar20)))) {
              uVar22 = *puVar15;
              local_170 = uVar14;
              local_c8 = uVar22;
              FUN_1468a20fa(param_1,&local_c8);
              uVar14 = local_170;
              if ((uVar22 != 0) && (local_c8 == 0)) {
                lVar2 = lVar23 + lVar19;
                *(undefined8 *)(lVar2 + -0xc) = 0;
                *(undefined8 *)(lVar2 + -4) = 0;
              }
            }
            lVar23 = lVar23 + 0x20;
            puVar24 = local_130;
          } while ((longlong)(int)uVar10 * 0x20 != lVar23);
        }
        break;
      case 9:
        puVar9 = (undefined8 *)*puVar15;
        puVar27 = (undefined8 *)(((longlong)puVar9 >> 0x18) + (longlong)puVar15);
        if (((ulonglong)puVar9 & 1) == 0) {
          puVar27 = puVar9;
        }
        uVar18 = (uint)puVar15[1];
        if ((int)local_178 == 0) {
          if (uVar18 == 0) break;
          uVar13 = *(uint *)(param_1 + 0x9a8);
          uVar8 = 0x20 - uVar13;
          if (uVar18 < uVar8) {
            puVar9 = puVar27 + (int)uVar18;
LAB_1427ea4ef:
            puVar11 = local_140 + uVar13;
            do {
              *puVar11 = *puVar27;
              puVar11 = puVar11 + 1;
              puVar27 = puVar27 + 1;
            } while (puVar27 != puVar9);
            uVar13 = *(uint *)(param_1 + 0x9a8);
          }
          else {
            do {
              local_170 = uVar14;
              uVar13 = *(uint *)(param_1 + 0x9a8);
              if (uVar8 != 0) {
                lVar19 = 0;
                do {
                  *(undefined8 *)((longlong)local_140 + lVar19 + (ulonglong)uVar13 * 8) =
                       *(undefined8 *)((longlong)puVar27 + lVar19);
                  lVar19 = lVar19 + 8;
                } while ((longlong)(int)uVar8 * 8 - lVar19 != 0);
                uVar13 = *(uint *)(param_1 + 0x9a8);
              }
              uVar18 = uVar18 - uVar8;
              puVar27 = puVar27 + (int)uVar8;
              *(uint *)(param_1 + 0x9a8) = uVar13 + uVar8;
              FUN_1468a18e0(local_168);
              uVar8 = 0x20;
              uVar14 = local_170;
            } while (0x1f < uVar18);
            uVar13 = *(uint *)(param_1 + 0x9a8);
            if (uVar18 != 0) {
              puVar9 = puVar27 + uVar18;
              goto LAB_1427ea4ef;
            }
            uVar18 = 0;
          }
          *(uint *)(param_1 + 0x9a8) = uVar18 + uVar13;
        }
        else {
          if (uVar18 == 0) break;
          uVar13 = *(uint *)(param_1 + 0x80);
          uVar8 = 0x20 - uVar13;
          if (uVar18 < uVar8) {
            puVar9 = puVar27 + (int)uVar18;
LAB_1427ea2be:
            uVar10 = (longlong)puVar9 + (-8 - (longlong)puVar27);
            auVar29._8_4_ = (int)uVar10;
            auVar29._0_8_ = uVar10;
            auVar29._12_4_ = (int)(uVar10 >> 0x20);
            auVar30._0_8_ = uVar10 >> 3;
            auVar30._8_8_ = auVar29._8_8_ >> 3;
            uVar17 = 0;
            do {
              auVar32._8_4_ = (int)puVar27;
              auVar32._0_8_ = puVar27;
              auVar32._12_4_ = (int)((ulonglong)puVar27 >> 0x20);
              if ((bool)(~(SUB168(auVar30 | auVar6,0) < (longlong)(uVar17 ^ auVar6._0_8_)) & 1)) {
                local_138[(ulonglong)uVar13 + (uVar17 - 1)] = (longlong)puVar27 + auVar35._0_8_;
              }
              auVar34._8_4_ = (int)uVar17;
              auVar34._0_8_ = uVar17;
              auVar34._12_4_ = (int)(uVar17 >> 0x20);
              if ((longlong)((auVar34._8_8_ | auVar36._8_8_) ^ auVar6._8_8_) <=
                  SUB168(auVar30 | auVar6,8)) {
                local_138[uVar13 + uVar17] = auVar32._8_8_ + auVar35._8_8_;
              }
              uVar17 = uVar17 + 2;
              puVar27 = puVar27 + 2;
            } while (((uVar10 >> 3) + 2 & 0xfffffffffffffffe) != uVar17);
            uVar13 = *(uint *)(param_1 + 0x80);
          }
          else {
            do {
              uVar13 = *(uint *)(param_1 + 0x80);
              if (uVar8 != 0) {
                uVar10 = (longlong)(int)uVar8 + 0x1fffffffffffffff;
                uVar17 = uVar10 & 0x1fffffffffffffff;
                auVar28._8_4_ = (int)uVar17;
                auVar28._0_8_ = uVar17;
                auVar28._12_4_ = (int)(uVar17 >> 0x20);
                uVar22 = 0;
                puVar9 = puVar27;
                do {
                  auVar31._8_4_ = (int)puVar9;
                  auVar31._0_8_ = puVar9;
                  auVar31._12_4_ = (int)((ulonglong)puVar9 >> 0x20);
                  if ((bool)(~(SUB168(auVar28 | auVar6,0) < (longlong)(uVar22 ^ auVar6._0_8_)) & 1))
                  {
                    local_138[(ulonglong)uVar13 + (uVar22 - 1)] = (longlong)puVar9 + auVar35._0_8_;
                  }
                  auVar33._8_4_ = (int)uVar22;
                  auVar33._0_8_ = uVar22;
                  auVar33._12_4_ = (int)(uVar22 >> 0x20);
                  if ((longlong)((auVar33._8_8_ | auVar36._8_8_) ^ auVar6._8_8_) <=
                      SUB168(auVar28 | auVar6,8)) {
                    local_138[uVar13 + uVar22] = auVar31._8_8_ + auVar35._8_8_;
                  }
                  uVar22 = uVar22 + 2;
                  puVar9 = puVar9 + 2;
                } while ((uVar17 - ((uint)uVar10 & 1)) + 2 != uVar22);
                uVar13 = *(uint *)(param_1 + 0x80);
              }
              uVar18 = uVar18 - uVar8;
              puVar27 = puVar27 + (int)uVar8;
              *(uint *)(param_1 + 0x80) = uVar13 + uVar8;
              FUN_1468a1500(local_160);
              uVar8 = 0x20;
            } while (0x1f < uVar18);
            uVar13 = *(uint *)(param_1 + 0x80);
            if (uVar18 != 0) {
              puVar9 = puVar27 + uVar18;
              goto LAB_1427ea2be;
            }
            uVar18 = 0;
          }
          *(uint *)(param_1 + 0x80) = uVar18 + uVar13;
        }
        break;
      case 10:
        uVar10 = *(ulonglong *)(puVar25 + 4);
        uVar22 = puVar15[1];
        uVar17 = *puVar15;
        uVar21 = ((longlong)uVar17 >> 0x18) + (longlong)puVar15;
        if ((uVar17 & 1) == 0) {
          uVar21 = uVar17;
        }
        uVar17 = (ulonglong)*(uint *)(param_1 + 0xe80);
        iVar20 = *(uint *)(param_1 + 0xe80) + 1;
        *(int *)(param_1 + 0xe80) = iVar20;
        local_158[uVar17 * 3] = (uVar10 & 0xfffffffffffffffe) + local_178;
        local_158[uVar17 * 3 + 1] = uVar21;
        *(int *)(local_158 + uVar17 * 3 + 2) = (int)uVar22;
LAB_1427e9e58:
        puVar26 = puVar25 + 4;
        if (iVar20 == 0x20) {
LAB_1427e9e62:
          FUN_144710c38(puVar24);
          puVar26 = puVar25 + 4;
        }
        break;
      case 0xb:
        uVar10 = *(ulonglong *)(puVar25 + 4);
        bVar3 = *(byte *)((longlong)puVar15 +
                         (ulonglong)*(uint *)((uVar10 & 0xfffffffffffffffe) - 8));
        uVar17 = (ulonglong)*(uint *)(param_1 + 0xe80);
        iVar20 = *(uint *)(param_1 + 0xe80) + 1;
        *(int *)(param_1 + 0xe80) = iVar20;
        local_158[uVar17 * 3] = (uVar10 & 0xfffffffffffffffe) + local_178;
        local_158[uVar17 * 3 + 1] = puVar15;
        *(uint *)(local_158 + uVar17 * 3 + 2) = (uint)bVar3;
        puVar26 = puVar25 + 4;
        if (iVar20 != 0x20) break;
        goto LAB_1427e9e62;
      case 0xc:
        (*(code *)**(undefined8 **)*puVar15)((undefined8 *)*puVar15,param_1[3]);
        plVar5 = (longlong *)*puVar15;
        if (*(char *)((longlong)plVar5 + 0x11) == '\x01') {
          if (((ulonglong)plVar5[1] < 9) && (*(byte *)(plVar5 + 2) < 4)) {
            puVar15 = puVar15 + 1;
          }
          else {
            puVar15 = (ulonglong *)puVar15[1];
          }
          (**(code **)(*plVar5 + 8))(plVar5,puVar15);
        }
        break;
      case 0xd:
        (**(code **)(puVar25 + 4))(local_148,param_1[3]);
switchD_1427e9cb1_caseD_0:
        uVar14 = local_148 + local_100;
        puVar25 = local_110;
        uVar10 = uVar14;
        if (uVar14 != local_108) goto LAB_1427e9c1c;
        if (local_118 != local_120) goto LAB_1427e9bb1;
        lVar12 = (longlong)*(int *)(param_1 + 0xeea);
        uVar18 = (&DAT_14c949f00)[lVar12 * 0x50];
        if ((ulonglong)uVar18 < 0x20) {
          (&DAT_14c949f00)[lVar12 * 0x50] = uVar18 + 1;
          *(ulonglong **)(&DAT_14c949f08 + (ulonglong)uVar18 * 8 + lVar12 * 0x140) = local_150;
        }
        else {
          FUN_1400020a8(local_150);
        }
        if (((*(longlong *)(param_1[0xee9] + 0xff0) == 0) &&
            ((int)((ulonglong)(param_1[0xee8] - param_1[0xee9]) >> 3) * -0x55555555 < 1)) &&
           (cVar7 = FUN_1468a26ce(param_1), cVar7 == '\0')) {
          if ((local_a0 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0();
          }
          return;
        }
        goto LAB_1427e9b6d;
      case 0xe:
        uVar10 = CONCAT71((int7)((ulonglong)
                                 ((longlong)&switchD_1427e9cb1::switchdataD_149e89de8 +
                                 (longlong)(int)(&switchD_1427e9cb1::switchdataD_149e89de8)[uVar10])
                                >> 8),0xe);
        goto LAB_1427ea58a;
      case 0xf:
        (**(code **)(puVar25 + 4))(puVar15,param_1[3]);
        puVar26 = puVar25 + 4;
        break;
      case 0x10:
        local_c8 = puVar15[1];
        FUN_1468a20fa(param_1,&local_c8);
        break;
      case 0x11:
        uVar10 = puVar15[1];
        if ((longlong)(int)uVar10 != 0) {
          uVar17 = *puVar15;
          lVar19 = 0;
          local_170 = uVar14;
          local_e0 = in_R11;
          local_d8 = puVar25;
          do {
            local_c8 = *(ulonglong *)(uVar17 + 8 + lVar19);
            FUN_1468a20fa(param_1,&local_c8);
            lVar19 = lVar19 + 0x18;
            uVar14 = local_170;
            in_R11 = local_e0;
            puVar24 = local_130;
            puVar26 = local_d8;
          } while ((longlong)(int)uVar10 * 0x18 != lVar19);
        }
      }
      lVar12 = lVar12 + 8;
      puVar25 = puVar26;
    } while (lVar12 != 0x20);
    puVar25 = puVar26 + 4;
    uVar10 = local_148;
  } while( true );
}



// FUNCTION 1427ea699 FUN_1427ea699 body=702 status=ok
// SIG undefined FUN_1427ea699(void)

void FUN_1427ea699(int param_1,undefined8 *param_2)

{
  longlong lVar1;
  uint *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  bool bVar16;
  uint *puVar17;
  bool bVar18;
  
  lVar12 = (longlong)param_1 * 0x50;
  lVar1 = DAT_14c9640e8 + lVar12;
  lVar11 = (longlong)*(int *)(DAT_14c9640e8 + 0x20 + lVar12);
  if (lVar11 == 0) {
    lVar11 = (longlong)*(int *)(lVar1 + 0x30);
    if (lVar11 == 0) {
      return;
    }
    puVar17 = *(uint **)(lVar1 + 0x28);
    bVar16 = false;
  }
  else {
    lVar12 = *(longlong *)(DAT_14c9640e8 + 0x18 + lVar12);
    lVar15 = 0;
    bVar16 = false;
    do {
      uVar9 = *(uint *)(lVar12 + lVar15);
      if (-1 < (int)uVar9) {
        lVar6 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
        if ((*(uint *)(lVar6 + 8 + (ulonglong)(uVar9 & 0xffff) * 0x18) >> 0x15 & 1) == 0) {
          puVar17 = (uint *)(lVar6 + (ulonglong)(uVar9 & 0xffff) * 0x18 + 8);
          LOCK();
          *puVar17 = *puVar17 & ~DAT_14c75ec9c;
          UNLOCK();
          LOCK();
          *puVar17 = *puVar17 | DAT_14c75ec98;
          UNLOCK();
        }
        else {
          *(undefined4 *)(lVar12 + lVar15) = 0xffffffff;
          bVar16 = true;
        }
      }
      lVar15 = lVar15 + 4;
    } while (lVar11 * 4 != lVar15);
    lVar11 = (longlong)*(int *)(lVar1 + 0x30);
    if (lVar11 == 0) goto joined_r0x0001427ea8ce;
    puVar17 = *(uint **)(lVar1 + 0x28);
  }
  puVar2 = puVar17 + lVar11;
  bVar8 = 0;
  do {
    uVar10 = DAT_14c75ec9c;
    uVar9 = *puVar17;
    if (-1 < (int)uVar9) {
      lVar11 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
      if ((*(uint *)(lVar11 + 8 + (ulonglong)(uVar9 & 0xffff) * 0x18) >> 0x15 & 1) == 0) {
        puVar3 = (undefined8 *)(lVar11 + (ulonglong)(uVar9 & 0xffff) * 0x18);
        if ((DAT_14c75ec9c & *(uint *)(puVar3 + 1)) == 0) {
          if ((0 < *(int *)((longlong)puVar3 + 0xc)) && ((*(uint *)(puVar3 + 1) >> 0x17 & 1) == 0))
          {
            do {
              uVar9 = *(uint *)(puVar3 + 1);
              if ((uVar9 >> 0x17 & 1) != 0) goto LAB_1427ea823;
              LOCK();
              bVar18 = uVar9 == *(uint *)(puVar3 + 1);
              if (bVar18) {
                *(uint *)(puVar3 + 1) = uVar9 | 0x800000;
              }
              uVar9 = DAT_14c75ec9c;
              UNLOCK();
            } while (!bVar18);
            uVar13 = (ulonglong)(*(uint *)((longlong)puVar3 + 0xc) & 0xffff);
            lVar11 = *(longlong *)
                      (DAT_14c9647c8 + (ulonglong)(*(uint *)((longlong)puVar3 + 0xc) >> 0x10) * 8);
            if (((DAT_14c75ec9c & *(uint *)(lVar11 + 8 + uVar13 * 0x18)) != 0) &&
               (lVar11 = lVar11 + uVar13 * 0x18, (*(uint *)(lVar11 + 8) & DAT_14c75ec9c) != 0)) {
              uVar14 = ~DAT_14c75ec9c;
              uVar10 = *(uint *)(lVar11 + 8);
              do {
                LOCK();
                uVar4 = *(uint *)(lVar11 + 8);
                bVar18 = uVar10 == uVar4;
                if (bVar18) {
                  *(uint *)(lVar11 + 8) = uVar10 & uVar14;
                  uVar4 = uVar10;
                }
                uVar10 = uVar4;
                UNLOCK();
              } while (!bVar18);
              LOCK();
              *(uint *)(lVar11 + 8) = *(uint *)(lVar11 + 8) | DAT_14c75ec98;
              UNLOCK();
              if ((uVar10 & uVar9) != 0) {
                uVar9 = *(uint *)(lVar11 + 0xc);
                goto LAB_1427ea80d;
              }
            }
          }
        }
        else if ((*(uint *)(puVar3 + 1) & DAT_14c75ec9c) != 0) {
          uVar14 = ~DAT_14c75ec9c;
          uVar9 = *(uint *)(puVar3 + 1);
          do {
            LOCK();
            uVar4 = *(uint *)(puVar3 + 1);
            bVar18 = uVar9 == uVar4;
            if (bVar18) {
              *(uint *)(puVar3 + 1) = uVar9 & uVar14;
              uVar4 = uVar9;
            }
            uVar9 = uVar4;
            UNLOCK();
          } while (!bVar18);
          LOCK();
          *(uint *)(puVar3 + 1) = *(uint *)(puVar3 + 1) | DAT_14c75ec98;
          UNLOCK();
          if ((uVar9 & uVar10) != 0) {
            plVar7 = (longlong *)*param_2;
            *(undefined8 *)*plVar7 = *puVar3;
            lVar11 = *plVar7;
            *plVar7 = lVar11 + 8;
            if (lVar11 + 8 == plVar7[1] + 0xf80) {
              FUN_141715f94();
            }
            uVar9 = *(uint *)((longlong)puVar3 + 0xc);
            if ((int)uVar9 < 0) {
LAB_1427ea80d:
              FUN_1427ea699(~uVar9,param_2);
            }
          }
        }
      }
      else {
        *puVar17 = 0xffffffff;
        bVar8 = 1;
      }
    }
LAB_1427ea823:
    puVar17 = puVar17 + 1;
  } while (puVar17 != puVar2);
  bVar16 = (bool)(bVar8 | bVar16);
joined_r0x0001427ea8ce:
  if (bVar16) {
    iVar5 = *(int *)(lVar1 + 0x10);
    if ((longlong)iVar5 != 0) {
      lVar11 = *(longlong *)(lVar1 + 8);
      lVar12 = 0;
      do {
        uVar9 = *(uint *)(lVar11 + lVar12);
        plVar7 = (longlong *)*param_2;
        *(undefined8 *)*plVar7 =
             *(undefined8 *)
              (*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8) +
              (ulonglong)(uVar9 & 0xffff) * 0x18);
        lVar15 = *plVar7;
        *plVar7 = lVar15 + 8;
        if (lVar15 + 8 == plVar7[1] + 0xf80) {
          FUN_141715f94();
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)iVar5 * 4 != lVar12);
    }
    *(undefined1 *)(lVar1 + 0x48) = 1;
    DAT_14c96410c = 1;
  }
  return;
}



// FUNCTION 1427ea958 FUN_1427ea958 body=2481 status=ok
// SIG undefined FUN_1427ea958(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427ea958(undefined8 *param_1)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined1 auVar6 [16];
  char cVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong *puVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ushort *puVar21;
  ushort *puVar22;
  longlong lVar23;
  ulonglong uVar24;
  uint *puVar25;
  ulonglong uVar26;
  longlong lVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar35 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar36 [16];
  undefined1 auStack_178 [40];
  undefined8 *local_150;
  uint *local_148;
  undefined8 *local_140;
  ulonglong *local_138;
  ulonglong local_130;
  ulonglong local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  ulonglong *local_110;
  ulonglong *local_108;
  ulonglong local_100;
  ulonglong local_f8;
  ushort *local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  ulonglong local_d8;
  int local_cc;
  ulonglong local_c8;
  byte local_c0 [4];
  uint local_bc;
  byte local_b8;
  uint local_b4;
  byte local_b0;
  uint local_ac;
  byte local_a8;
  uint local_a4;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_118 = param_1 + 0xee8;
  *(undefined8 *)*param_1 = 0;
  auVar6 = _DAT_149931e80;
  local_140 = param_1 + 0xe81;
  puVar25 = (uint *)(param_1 + 0xe18);
  local_e0 = param_1 + 0xe19;
  local_150 = param_1 + 8;
  local_e8 = param_1 + 0x39;
  local_120 = param_1 + 0x82;
  auVar35 = pmovsxbq(unaff_XMM7,0x800);
  auVar36 = pmovsxbq(unaff_XMM8,0x100);
  local_148 = puVar25;
LAB_1427eaa38:
  local_108 = (ulonglong *)FUN_141716706(local_118,&local_cc);
  local_110 = local_108 + (longlong)local_cc * 3;
  local_138 = local_108;
LAB_1427eaa7c:
  uVar16 = *local_108;
  uVar14 = local_108[1];
  puVar1 = (uint *)((longlong)local_108 + 0x14);
  local_f8 = (ulonglong)*puVar1;
  puVar11 = local_108 + 2;
  local_108 = local_108 + 3;
  local_100 = (int)*puVar11 * *puVar1 + uVar14;
  uVar26 = (ulonglong)((uint)uVar16 & 1);
  local_f0 = (ushort *)(uVar16 & 0xfffffffffffffffe);
  puVar21 = local_f0;
  uVar16 = uVar14;
  local_128 = uVar26;
LAB_1427eaade:
  do {
    local_130 = uVar16;
    local_c0[0] = (byte)*puVar21 & 0x1f;
    local_bc = (uint)(*puVar21 >> 5);
    local_b8 = (byte)puVar21[1] & 0x1f;
    local_b4 = (uint)(puVar21[1] >> 5);
    local_b0 = (byte)puVar21[2] & 0x1f;
    local_ac = (uint)(puVar21[2] >> 5);
    local_a8 = (byte)puVar21[3] & 0x1f;
    local_a4 = (uint)(puVar21[3] >> 5);
    lVar9 = 0;
    do {
      uVar16 = (ulonglong)local_c0[lVar9];
      if (0x11 < uVar16) {
LAB_1427eb201:
        FUN_1427e893d(uVar16);
        goto switchD_1427eab73_caseD_0;
      }
      puVar11 = (ulonglong *)(uVar14 + (ulonglong)*(uint *)((longlong)&local_bc + lVar9) * 8);
      puVar22 = puVar21;
      switch(uVar16) {
      case 0:
        goto switchD_1427eab73_caseD_0;
      case 1:
        uVar14 = uVar14 + (ulonglong)(*(uint *)((longlong)&local_bc + lVar9) * 0x800 + 0x800) * 8;
        break;
      case 2:
        uVar15 = *(uint *)(param_1 + 0x80);
        iVar17 = uVar15 + 1;
        *(int *)(param_1 + 0x80) = iVar17;
        param_1[(ulonglong)uVar15 + 0x81] = puVar11;
        if (iVar17 == 0x20) {
          FUN_1468a4250(local_150);
        }
        break;
      case 3:
        uVar15 = *(uint *)(param_1 + 0x10);
        iVar17 = uVar15 + 1;
        *(int *)(param_1 + 0x10) = iVar17;
        param_1[(ulonglong)uVar15 + 0x11] = puVar11;
        if (iVar17 == 0x20) {
          FUN_1468a4a9e(local_150);
        }
        break;
      case 4:
        uVar16 = *(ulonglong *)(puVar21 + 4);
        uVar13 = puVar11[1];
        uVar24 = *puVar11;
        uVar19 = (ulonglong)*(uint *)(param_1 + 0xe80);
        iVar17 = *(uint *)(param_1 + 0xe80) + 1;
        *(int *)(param_1 + 0xe80) = iVar17;
        local_140[uVar19 * 3] = uVar16 & 0xfffffffffffffffe | uVar26;
        local_140[uVar19 * 3 + 1] = uVar24;
        *(int *)(local_140 + uVar19 * 3 + 2) = (int)uVar13;
        goto LAB_1427ead06;
      case 5:
        local_d8 = local_d8 & 0xffffffff00000000 | (ulonglong)*(uint *)(puVar21 + 4);
        uVar15 = *(uint *)(param_1 + 0x38);
        *(uint *)(param_1 + 0x38) = uVar15 + 1;
        local_e8[(ulonglong)uVar15 * 2] = puVar11;
        local_e8[(ulonglong)uVar15 * 2 + 1] = local_d8;
        puVar22 = puVar21 + 4;
        if (uVar15 + 1 == 0x20) {
          FUN_1468a50f6(local_150);
        }
        break;
      case 6:
        uVar16 = *(ulonglong *)(puVar21 + 4);
        uVar24 = puVar11[1];
        iVar17 = *(int *)((longlong)puVar11 + 0x34);
        uVar4 = *(undefined4 *)((uVar16 & 0xfffffffffffffffe) - 8);
        uVar13 = (ulonglong)*puVar25;
        uVar15 = *puVar25 + 1;
        *puVar25 = uVar15;
        local_e0[uVar13 * 3] = uVar16 & 0xfffffffffffffffe | uVar26;
        local_e0[uVar13 * 3 + 1] = puVar11;
        *(int *)(local_e0 + uVar13 * 3 + 2) = (int)uVar24 - iVar17;
        *(undefined4 *)((longlong)local_e0 + uVar13 * 0x18 + 0x14) = uVar4;
        puVar22 = puVar21 + 4;
        if (uVar15 == 0x20) {
          FUN_14002fe56(puVar25);
        }
        break;
      case 7:
        if (((*(int *)((longlong)puVar11 + 0xc) != 0) &&
            (uVar15 = (uint)puVar11[1], -1 < (int)uVar15)) &&
           (((int)uVar15 < DAT_14c9647dc &&
            ((puVar12 = (ulonglong *)
                        ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8)),
             puVar12 != (ulonglong *)0x0 && ((int)puVar12[2] == *(int *)((longlong)puVar11 + 0xc))))
            ))) {
          uVar16 = *puVar12;
          local_c8 = uVar16;
          FUN_1468a4e4a(param_1,&local_c8,1);
          if ((uVar16 != 0) && (local_c8 == 0)) {
            *puVar11 = 0;
            puVar11[1] = 0;
          }
        }
        break;
      case 8:
        uVar16 = puVar11[1];
        if ((longlong)(int)uVar16 != 0) {
          uVar24 = *puVar11;
          lVar27 = uVar24 + 0xc;
          lVar23 = 0;
          do {
            iVar17 = *(int *)(lVar27 + lVar23);
            if ((((iVar17 != 0) && (uVar15 = *(uint *)(uVar24 + 8 + lVar23), -1 < (int)uVar15)) &&
                ((int)uVar15 < DAT_14c9647dc)) &&
               ((puVar11 = (ulonglong *)
                           ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8)),
                puVar11 != (ulonglong *)0x0 && ((int)puVar11[2] == iVar17)))) {
              uVar13 = *puVar11;
              local_c8 = uVar13;
              FUN_1468a4e4a(param_1,&local_c8,1);
              uVar26 = local_128;
              if ((uVar13 != 0) && (local_c8 == 0)) {
                lVar2 = lVar27 + lVar23;
                *(undefined8 *)(lVar2 + -0xc) = 0;
                *(undefined8 *)(lVar2 + -4) = 0;
              }
            }
            lVar23 = lVar23 + 0x20;
            puVar25 = local_148;
          } while ((longlong)(int)uVar16 * 0x20 != lVar23);
        }
        break;
      case 9:
        uVar15 = (uint)puVar11[1];
        uVar16 = (ulonglong)(int)uVar15;
        if (uVar16 != 0) {
          uVar13 = *puVar11;
          uVar24 = ((longlong)uVar13 >> 0x18) + (longlong)puVar11;
          if ((uVar13 & 1) == 0) {
            uVar24 = uVar13;
          }
          uVar10 = *(uint *)(param_1 + 0x80);
          uVar8 = 0x20 - uVar10;
          if (uVar15 < uVar8) {
            lVar23 = uVar16 * 8 + uVar24;
LAB_1427eb0db:
            uVar16 = (lVar23 - uVar24) - 8;
            auVar29._8_4_ = (int)uVar16;
            auVar29._0_8_ = uVar16;
            auVar29._12_4_ = (int)(uVar16 >> 0x20);
            auVar30._0_8_ = uVar16 >> 3;
            auVar30._8_8_ = auVar29._8_8_ >> 3;
            uVar13 = 0;
            do {
              auVar32._8_4_ = (int)uVar24;
              auVar32._0_8_ = uVar24;
              auVar32._12_4_ = (int)(uVar24 >> 0x20);
              if ((bool)(~(SUB168(auVar30 | auVar6,0) < (longlong)(uVar13 ^ auVar6._0_8_)) & 1)) {
                local_120[(ulonglong)uVar10 + (uVar13 - 1)] = uVar24 + auVar35._0_8_;
              }
              auVar34._8_4_ = (int)uVar13;
              auVar34._0_8_ = uVar13;
              auVar34._12_4_ = (int)(uVar13 >> 0x20);
              if ((longlong)((auVar34._8_8_ | auVar36._8_8_) ^ auVar6._8_8_) <=
                  SUB168(auVar30 | auVar6,8)) {
                local_120[uVar10 + uVar13] = auVar32._8_8_ + auVar35._8_8_;
              }
              uVar13 = uVar13 + 2;
              uVar24 = uVar24 + 0x10;
            } while (((uVar16 >> 3) + 2 & 0xfffffffffffffffe) != uVar13);
            uVar10 = *(uint *)(param_1 + 0x80);
          }
          else {
            do {
              uVar10 = *(uint *)(param_1 + 0x80);
              if (uVar8 != 0) {
                uVar13 = (longlong)(int)uVar8 + 0x1fffffffffffffff;
                uVar18 = uVar13 & 0x1fffffffffffffff;
                auVar28._8_4_ = (int)uVar18;
                auVar28._0_8_ = uVar18;
                auVar28._12_4_ = (int)(uVar18 >> 0x20);
                uVar20 = 0;
                uVar19 = uVar24;
                do {
                  auVar31._8_4_ = (int)uVar19;
                  auVar31._0_8_ = uVar19;
                  auVar31._12_4_ = (int)(uVar19 >> 0x20);
                  if ((bool)(~(SUB168(auVar28 | auVar6,0) < (longlong)(uVar20 ^ auVar6._0_8_)) & 1))
                  {
                    local_120[(ulonglong)uVar10 + (uVar20 - 1)] = uVar19 + auVar35._0_8_;
                  }
                  auVar33._8_4_ = (int)uVar20;
                  auVar33._0_8_ = uVar20;
                  auVar33._12_4_ = (int)(uVar20 >> 0x20);
                  if ((longlong)((auVar33._8_8_ | auVar36._8_8_) ^ auVar6._8_8_) <=
                      SUB168(auVar28 | auVar6,8)) {
                    local_120[uVar10 + uVar20] = auVar31._8_8_ + auVar35._8_8_;
                  }
                  uVar20 = uVar20 + 2;
                  uVar19 = uVar19 + 0x10;
                } while ((uVar18 - ((uint)uVar13 & 1)) + 2 != uVar20);
                uVar10 = *(uint *)(param_1 + 0x80);
              }
              uVar15 = (int)uVar16 - uVar8;
              uVar16 = (ulonglong)uVar15;
              uVar24 = uVar24 + (longlong)(int)uVar8 * 8;
              *(uint *)(param_1 + 0x80) = uVar10 + uVar8;
              FUN_1468a4250(local_150);
              uVar8 = 0x20;
            } while (0x1f < uVar15);
            uVar10 = *(uint *)(param_1 + 0x80);
            if (uVar15 != 0) {
              lVar23 = (ulonglong)uVar15 * 8 + uVar24;
              goto LAB_1427eb0db;
            }
            uVar15 = 0;
          }
          *(uint *)(param_1 + 0x80) = uVar15 + uVar10;
          puVar25 = local_148;
        }
        break;
      case 10:
        uVar16 = *(ulonglong *)(puVar21 + 4);
        uVar13 = puVar11[1];
        uVar24 = *puVar11;
        uVar19 = ((longlong)uVar24 >> 0x18) + (longlong)puVar11;
        if ((uVar24 & 1) == 0) {
          uVar19 = uVar24;
        }
        uVar24 = (ulonglong)*(uint *)(param_1 + 0xe80);
        iVar17 = *(uint *)(param_1 + 0xe80) + 1;
        *(int *)(param_1 + 0xe80) = iVar17;
        local_140[uVar24 * 3] = uVar16 & 0xfffffffffffffffe | uVar26;
        local_140[uVar24 * 3 + 1] = uVar19;
        *(int *)(local_140 + uVar24 * 3 + 2) = (int)uVar13;
LAB_1427ead06:
        puVar22 = puVar21 + 4;
        if (iVar17 == 0x20) {
LAB_1427ead10:
          FUN_144710c38(puVar25);
          puVar22 = puVar21 + 4;
        }
        break;
      case 0xb:
        uVar16 = *(ulonglong *)(puVar21 + 4);
        bVar3 = *(byte *)((longlong)puVar11 +
                         (ulonglong)*(uint *)((uVar16 & 0xfffffffffffffffe) - 8));
        uVar24 = (ulonglong)*(uint *)(param_1 + 0xe80);
        iVar17 = *(uint *)(param_1 + 0xe80) + 1;
        *(int *)(param_1 + 0xe80) = iVar17;
        local_140[uVar24 * 3] = uVar16 & 0xfffffffffffffffe | uVar26;
        local_140[uVar24 * 3 + 1] = puVar11;
        *(uint *)(local_140 + uVar24 * 3 + 2) = (uint)bVar3;
        puVar22 = puVar21 + 4;
        if (iVar17 != 0x20) break;
        goto LAB_1427ead10;
      case 0xc:
        (*(code *)**(undefined8 **)*puVar11)((undefined8 *)*puVar11,param_1[3]);
        plVar5 = (longlong *)*puVar11;
        if (*(char *)((longlong)plVar5 + 0x11) == '\x01') {
          if (((ulonglong)plVar5[1] < 9) && (*(byte *)(plVar5 + 2) < 4)) {
            puVar11 = puVar11 + 1;
          }
          else {
            puVar11 = (ulonglong *)puVar11[1];
          }
          (**(code **)(*plVar5 + 8))(plVar5,puVar11,param_1[3]);
        }
        break;
      case 0xd:
        (**(code **)(puVar21 + 4))(local_130,param_1[3]);
switchD_1427eab73_caseD_0:
        uVar14 = local_130 + local_f8;
        puVar21 = local_f0;
        uVar16 = uVar14;
        if (uVar14 != local_100) goto LAB_1427eaade;
        if (local_108 != local_110) goto LAB_1427eaa7c;
        lVar9 = (longlong)*(int *)(param_1 + 0xeea);
        uVar15 = (&DAT_14c949f00)[lVar9 * 0x50];
        if ((ulonglong)uVar15 < 0x20) {
          (&DAT_14c949f00)[lVar9 * 0x50] = uVar15 + 1;
          *(ulonglong **)(&DAT_14c949f08 + (ulonglong)uVar15 * 8 + lVar9 * 0x140) = local_138;
        }
        else {
          FUN_1400020a8(local_138);
        }
        if (((*(longlong *)(param_1[0xee9] + 0xff0) == 0) &&
            ((int)((ulonglong)(param_1[0xee8] - param_1[0xee9]) >> 3) * -0x55555555 < 1)) &&
           (cVar7 = FUN_1468a528a(param_1), cVar7 == '\0')) {
          if ((local_a0 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0();
          }
          return;
        }
        goto LAB_1427eaa38;
      case 0xe:
        uVar16 = CONCAT71((int7)((ulonglong)
                                 ((longlong)&switchD_1427eab73::switchdataD_149e89e30 +
                                 (longlong)(int)(&switchD_1427eab73::switchdataD_149e89e30)[uVar16])
                                >> 8),0xe);
        goto LAB_1427eb201;
      case 0xf:
        (**(code **)(puVar21 + 4))(puVar11,param_1[3]);
        puVar22 = puVar21 + 4;
        break;
      case 0x10:
        local_c8 = puVar11[1];
        FUN_1468a4e4a(param_1,&local_c8,1);
        break;
      case 0x11:
        uVar16 = puVar11[1];
        if ((longlong)(int)uVar16 != 0) {
          uVar24 = *puVar11;
          lVar23 = 0;
          do {
            local_c8 = *(ulonglong *)(uVar24 + 8 + lVar23);
            FUN_1468a4e4a(param_1,&local_c8,1);
            lVar23 = lVar23 + 0x18;
            puVar25 = local_148;
            uVar26 = local_128;
          } while ((longlong)(int)uVar16 * 0x18 != lVar23);
        }
      }
      lVar9 = lVar9 + 8;
      puVar21 = puVar22;
    } while (lVar9 != 0x20);
    puVar21 = puVar22 + 4;
    uVar16 = local_130;
  } while( true );
}



// FUNCTION 1427eb319 FUN_1427eb319 body=702 status=ok
// SIG undefined FUN_1427eb319(void)

void FUN_1427eb319(int param_1,undefined8 *param_2)

{
  longlong lVar1;
  uint *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  bool bVar16;
  uint *puVar17;
  bool bVar18;
  
  lVar12 = (longlong)param_1 * 0x50;
  lVar1 = DAT_14c9640e8 + lVar12;
  lVar11 = (longlong)*(int *)(DAT_14c9640e8 + 0x20 + lVar12);
  if (lVar11 == 0) {
    lVar11 = (longlong)*(int *)(lVar1 + 0x30);
    if (lVar11 == 0) {
      return;
    }
    puVar17 = *(uint **)(lVar1 + 0x28);
    bVar16 = false;
  }
  else {
    lVar12 = *(longlong *)(DAT_14c9640e8 + 0x18 + lVar12);
    lVar15 = 0;
    bVar16 = false;
    do {
      uVar9 = *(uint *)(lVar12 + lVar15);
      if (-1 < (int)uVar9) {
        lVar6 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
        if ((*(uint *)(lVar6 + 8 + (ulonglong)(uVar9 & 0xffff) * 0x18) >> 0x15 & 1) == 0) {
          puVar17 = (uint *)(lVar6 + (ulonglong)(uVar9 & 0xffff) * 0x18 + 8);
          LOCK();
          *puVar17 = *puVar17 & ~DAT_14c75ec9c;
          UNLOCK();
          LOCK();
          *puVar17 = *puVar17 | DAT_14c75ec98;
          UNLOCK();
        }
        else {
          *(undefined4 *)(lVar12 + lVar15) = 0xffffffff;
          bVar16 = true;
        }
      }
      lVar15 = lVar15 + 4;
    } while (lVar11 * 4 != lVar15);
    lVar11 = (longlong)*(int *)(lVar1 + 0x30);
    if (lVar11 == 0) goto joined_r0x0001427eb54e;
    puVar17 = *(uint **)(lVar1 + 0x28);
  }
  puVar2 = puVar17 + lVar11;
  bVar8 = 0;
  do {
    uVar10 = DAT_14c75ec9c;
    uVar9 = *puVar17;
    if (-1 < (int)uVar9) {
      lVar11 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
      if ((*(uint *)(lVar11 + 8 + (ulonglong)(uVar9 & 0xffff) * 0x18) >> 0x15 & 1) == 0) {
        puVar3 = (undefined8 *)(lVar11 + (ulonglong)(uVar9 & 0xffff) * 0x18);
        if ((DAT_14c75ec9c & *(uint *)(puVar3 + 1)) == 0) {
          if ((0 < *(int *)((longlong)puVar3 + 0xc)) && ((*(uint *)(puVar3 + 1) >> 0x17 & 1) == 0))
          {
            do {
              uVar9 = *(uint *)(puVar3 + 1);
              if ((uVar9 >> 0x17 & 1) != 0) goto LAB_1427eb4a3;
              LOCK();
              bVar18 = uVar9 == *(uint *)(puVar3 + 1);
              if (bVar18) {
                *(uint *)(puVar3 + 1) = uVar9 | 0x800000;
              }
              uVar9 = DAT_14c75ec9c;
              UNLOCK();
            } while (!bVar18);
            uVar13 = (ulonglong)(*(uint *)((longlong)puVar3 + 0xc) & 0xffff);
            lVar11 = *(longlong *)
                      (DAT_14c9647c8 + (ulonglong)(*(uint *)((longlong)puVar3 + 0xc) >> 0x10) * 8);
            if (((DAT_14c75ec9c & *(uint *)(lVar11 + 8 + uVar13 * 0x18)) != 0) &&
               (lVar11 = lVar11 + uVar13 * 0x18, (*(uint *)(lVar11 + 8) & DAT_14c75ec9c) != 0)) {
              uVar14 = ~DAT_14c75ec9c;
              uVar10 = *(uint *)(lVar11 + 8);
              do {
                LOCK();
                uVar4 = *(uint *)(lVar11 + 8);
                bVar18 = uVar10 == uVar4;
                if (bVar18) {
                  *(uint *)(lVar11 + 8) = uVar10 & uVar14;
                  uVar4 = uVar10;
                }
                uVar10 = uVar4;
                UNLOCK();
              } while (!bVar18);
              LOCK();
              *(uint *)(lVar11 + 8) = *(uint *)(lVar11 + 8) | DAT_14c75ec98;
              UNLOCK();
              if ((uVar10 & uVar9) != 0) {
                uVar9 = *(uint *)(lVar11 + 0xc);
                goto LAB_1427eb48d;
              }
            }
          }
        }
        else if ((*(uint *)(puVar3 + 1) & DAT_14c75ec9c) != 0) {
          uVar14 = ~DAT_14c75ec9c;
          uVar9 = *(uint *)(puVar3 + 1);
          do {
            LOCK();
            uVar4 = *(uint *)(puVar3 + 1);
            bVar18 = uVar9 == uVar4;
            if (bVar18) {
              *(uint *)(puVar3 + 1) = uVar9 & uVar14;
              uVar4 = uVar9;
            }
            uVar9 = uVar4;
            UNLOCK();
          } while (!bVar18);
          LOCK();
          *(uint *)(puVar3 + 1) = *(uint *)(puVar3 + 1) | DAT_14c75ec98;
          UNLOCK();
          if ((uVar9 & uVar10) != 0) {
            plVar7 = (longlong *)*param_2;
            *(undefined8 *)*plVar7 = *puVar3;
            lVar11 = *plVar7;
            *plVar7 = lVar11 + 8;
            if (lVar11 + 8 == plVar7[1] + 0xf80) {
              FUN_141715f94();
            }
            uVar9 = *(uint *)((longlong)puVar3 + 0xc);
            if ((int)uVar9 < 0) {
LAB_1427eb48d:
              FUN_1427eb319(~uVar9,param_2);
            }
          }
        }
      }
      else {
        *puVar17 = 0xffffffff;
        bVar8 = 1;
      }
    }
LAB_1427eb4a3:
    puVar17 = puVar17 + 1;
  } while (puVar17 != puVar2);
  bVar16 = (bool)(bVar8 | bVar16);
joined_r0x0001427eb54e:
  if (bVar16) {
    iVar5 = *(int *)(lVar1 + 0x10);
    if ((longlong)iVar5 != 0) {
      lVar11 = *(longlong *)(lVar1 + 8);
      lVar12 = 0;
      do {
        uVar9 = *(uint *)(lVar11 + lVar12);
        plVar7 = (longlong *)*param_2;
        *(undefined8 *)*plVar7 =
             *(undefined8 *)
              (*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8) +
              (ulonglong)(uVar9 & 0xffff) * 0x18);
        lVar15 = *plVar7;
        *plVar7 = lVar15 + 8;
        if (lVar15 + 8 == plVar7[1] + 0xf80) {
          FUN_141715f94();
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)iVar5 * 4 != lVar12);
    }
    *(undefined1 *)(lVar1 + 0x48) = 1;
    DAT_14c96410c = 1;
  }
  return;
}



// FUNCTION 1427eb5d8 FUN_1427eb5d8 body=3122 status=ok
// SIG undefined FUN_1427eb5d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427eb5d8(undefined8 *param_1)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined1 auVar6 [16];
  char cVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong *puVar15;
  ulonglong *puVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  int iVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong in_R11;
  longlong lVar23;
  uint *puVar24;
  ushort *puVar25;
  ushort *puVar26;
  undefined8 *puVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar35 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar36 [16];
  undefined1 auStack_198 [32];
  ulonglong local_178;
  ulonglong local_170;
  undefined8 *local_168;
  undefined8 *local_160;
  undefined8 *local_158;
  ulonglong *local_150;
  ulonglong local_148;
  undefined8 *local_140;
  undefined8 *local_138;
  uint *local_130;
  undefined8 *local_128;
  ulonglong *local_120;
  ulonglong *local_118;
  ushort *local_110;
  ulonglong local_108;
  ulonglong local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  ulonglong local_e0;
  ushort *local_d8;
  int local_cc;
  ulonglong local_c8;
  byte local_c0 [4];
  uint local_bc;
  byte local_b8;
  uint local_b4;
  byte local_b0;
  uint local_ac;
  byte local_a8;
  uint local_a4;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_128 = param_1 + 0xee8;
  *(undefined8 *)*param_1 = 0;
  auVar6 = _DAT_149931e80;
  local_158 = param_1 + 0xe81;
  puVar24 = (uint *)(param_1 + 0xe18);
  local_e8 = param_1 + 0xe19;
  local_160 = param_1 + 8;
  local_168 = param_1 + 0x930;
  local_140 = param_1 + 0x9a9;
  local_f0 = param_1 + 0x39;
  local_f8 = param_1 + 0x961;
  local_138 = param_1 + 0x82;
  auVar35 = pmovsxbq(unaff_XMM7,0x800);
  auVar36 = pmovsxbq(unaff_XMM8,0x100);
  local_130 = puVar24;
LAB_1427eb6df:
  local_118 = (ulonglong *)FUN_141716706(local_128,&local_cc);
  local_120 = local_118 + (longlong)local_cc * 3;
  local_150 = local_118;
LAB_1427eb723:
  uVar10 = *local_118;
  uVar14 = local_118[1];
  puVar1 = (uint *)((longlong)local_118 + 0x14);
  local_100 = (ulonglong)*puVar1;
  puVar15 = local_118 + 2;
  local_118 = local_118 + 3;
  local_108 = (int)*puVar15 * *puVar1 + uVar14;
  local_110 = (ushort *)(uVar10 & 0xfffffffffffffffe);
  local_178 = (ulonglong)((uint)uVar10 & 1);
  puVar25 = local_110;
  uVar10 = uVar14;
LAB_1427eb78e:
  do {
    local_148 = uVar10;
    local_c0[0] = (byte)*puVar25 & 0x1f;
    local_bc = (uint)(*puVar25 >> 5);
    local_b8 = (byte)puVar25[1] & 0x1f;
    local_b4 = (uint)(puVar25[1] >> 5);
    local_b0 = (byte)puVar25[2] & 0x1f;
    local_ac = (uint)(puVar25[2] >> 5);
    local_a8 = (byte)puVar25[3] & 0x1f;
    local_a4 = (uint)(puVar25[3] >> 5);
    lVar12 = 0;
    do {
      uVar10 = (ulonglong)local_c0[lVar12];
      if (0x11 < uVar10) {
LAB_1427ec0fc:
        FUN_1427e893d(uVar10);
        goto switchD_1427eb823_caseD_0;
      }
      puVar15 = (ulonglong *)(uVar14 + (ulonglong)*(uint *)((longlong)&local_bc + lVar12) * 8);
      puVar26 = puVar25;
      switch(uVar10) {
      case 0:
        goto switchD_1427eb823_caseD_0;
      case 1:
        uVar14 = uVar14 + (ulonglong)(*(uint *)((longlong)&local_bc + lVar12) * 0x800 + 0x800) * 8;
        break;
      case 2:
        if ((int)local_178 == 0) {
          uVar10 = *puVar15;
          uVar18 = *(uint *)(param_1 + 0x9a8);
          iVar20 = uVar18 + 1;
          *(int *)(param_1 + 0x9a8) = iVar20;
          param_1[(ulonglong)uVar18 + 0x9a9] = uVar10;
          if (iVar20 == 0x20) {
            FUN_1468a7692(local_168);
          }
        }
        else {
          uVar18 = *(uint *)(param_1 + 0x80);
          iVar20 = uVar18 + 1;
          *(int *)(param_1 + 0x80) = iVar20;
          param_1[(ulonglong)uVar18 + 0x81] = puVar15;
          if (iVar20 == 0x20) {
            FUN_1468a72b2(local_160);
          }
        }
        break;
      case 3:
        if ((int)local_178 == 0) {
          uVar18 = *(uint *)(param_1 + 0x938);
          iVar20 = uVar18 + 1;
          *(int *)(param_1 + 0x938) = iVar20;
          param_1[(ulonglong)uVar18 + 0x939] = puVar15;
          if (iVar20 == 0x20) {
            FUN_1468a7d92(local_168);
          }
        }
        else {
          uVar18 = *(uint *)(param_1 + 0x10);
          iVar20 = uVar18 + 1;
          *(int *)(param_1 + 0x10) = iVar20;
          param_1[(ulonglong)uVar18 + 0x11] = puVar15;
          if (iVar20 == 0x20) {
            FUN_1468a7b00(local_160);
          }
        }
        break;
      case 4:
        uVar10 = *(ulonglong *)(puVar25 + 4);
        uVar22 = puVar15[1];
        uVar17 = *puVar15;
        uVar21 = (ulonglong)*(uint *)(param_1 + 0xe80);
        iVar20 = *(uint *)(param_1 + 0xe80) + 1;
        *(int *)(param_1 + 0xe80) = iVar20;
        local_158[uVar21 * 3] = (uVar10 & 0xfffffffffffffffe) + local_178;
        local_158[uVar21 * 3 + 1] = uVar17;
        *(int *)(local_158 + uVar21 * 3 + 2) = (int)uVar22;
        goto LAB_1427eb9ca;
      case 5:
        puVar26 = puVar25 + 4;
        in_R11 = in_R11 & 0xffffffff00000000 | (ulonglong)*(uint *)(puVar25 + 4);
        if ((int)local_178 == 0) {
          uVar18 = *(uint *)(param_1 + 0x960);
          *(uint *)(param_1 + 0x960) = uVar18 + 1;
          local_f8[(ulonglong)uVar18 * 2] = puVar15;
          local_f8[(ulonglong)uVar18 * 2 + 1] = in_R11;
          if (uVar18 + 1 == 0x20) {
            FUN_1468a82ec(local_168);
          }
        }
        else {
          uVar18 = *(uint *)(param_1 + 0x38);
          *(uint *)(param_1 + 0x38) = uVar18 + 1;
          local_f0[(ulonglong)uVar18 * 2] = puVar15;
          local_f0[(ulonglong)uVar18 * 2 + 1] = in_R11;
          if (uVar18 + 1 == 0x20) {
            FUN_1468a8158(local_160);
          }
        }
        break;
      case 6:
        uVar10 = *(ulonglong *)(puVar25 + 4);
        uVar17 = puVar15[1];
        iVar20 = *(int *)((longlong)puVar15 + 0x34);
        uVar4 = *(undefined4 *)((uVar10 & 0xfffffffffffffffe) - 8);
        uVar22 = (ulonglong)*puVar24;
        uVar18 = *puVar24 + 1;
        *puVar24 = uVar18;
        local_e8[uVar22 * 3] = (uVar10 & 0xfffffffffffffffe) + local_178;
        local_e8[uVar22 * 3 + 1] = puVar15;
        *(int *)(local_e8 + uVar22 * 3 + 2) = (int)uVar17 - iVar20;
        *(undefined4 *)((longlong)local_e8 + uVar22 * 0x18 + 0x14) = uVar4;
        puVar26 = puVar25 + 4;
        if (uVar18 == 0x20) {
          FUN_14002fe56(puVar24);
        }
        break;
      case 7:
        if (((*(int *)((longlong)puVar15 + 0xc) != 0) &&
            (uVar18 = (uint)puVar15[1], -1 < (int)uVar18)) &&
           (((int)uVar18 < DAT_14c9647dc &&
            ((puVar16 = (ulonglong *)
                        ((ulonglong)((uVar18 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8)),
             puVar16 != (ulonglong *)0x0 && ((int)puVar16[2] == *(int *)((longlong)puVar15 + 0xc))))
            ))) {
          uVar10 = *puVar16;
          local_c8 = uVar10;
          FUN_1468a7eac(param_1,&local_c8);
          if ((uVar10 != 0) && (local_c8 == 0)) {
            *puVar15 = 0;
            puVar15[1] = 0;
          }
        }
        break;
      case 8:
        uVar10 = puVar15[1];
        if ((longlong)(int)uVar10 != 0) {
          uVar17 = *puVar15;
          lVar19 = uVar17 + 0xc;
          lVar23 = 0;
          do {
            iVar20 = *(int *)(lVar19 + lVar23);
            if ((((iVar20 != 0) && (uVar18 = *(uint *)(uVar17 + 8 + lVar23), -1 < (int)uVar18)) &&
                ((int)uVar18 < DAT_14c9647dc)) &&
               ((puVar15 = (ulonglong *)
                           ((ulonglong)((uVar18 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8)),
                puVar15 != (ulonglong *)0x0 && ((int)puVar15[2] == iVar20)))) {
              uVar22 = *puVar15;
              local_170 = uVar14;
              local_c8 = uVar22;
              FUN_1468a7eac(param_1,&local_c8);
              uVar14 = local_170;
              if ((uVar22 != 0) && (local_c8 == 0)) {
                lVar2 = lVar23 + lVar19;
                *(undefined8 *)(lVar2 + -0xc) = 0;
                *(undefined8 *)(lVar2 + -4) = 0;
              }
            }
            lVar23 = lVar23 + 0x20;
            puVar24 = local_130;
          } while ((longlong)(int)uVar10 * 0x20 != lVar23);
        }
        break;
      case 9:
        puVar9 = (undefined8 *)*puVar15;
        puVar27 = (undefined8 *)(((longlong)puVar9 >> 0x18) + (longlong)puVar15);
        if (((ulonglong)puVar9 & 1) == 0) {
          puVar27 = puVar9;
        }
        uVar18 = (uint)puVar15[1];
        if ((int)local_178 == 0) {
          if (uVar18 == 0) break;
          uVar13 = *(uint *)(param_1 + 0x9a8);
          uVar8 = 0x20 - uVar13;
          if (uVar18 < uVar8) {
            puVar9 = puVar27 + (int)uVar18;
LAB_1427ec061:
            puVar11 = local_140 + uVar13;
            do {
              *puVar11 = *puVar27;
              puVar11 = puVar11 + 1;
              puVar27 = puVar27 + 1;
            } while (puVar27 != puVar9);
            uVar13 = *(uint *)(param_1 + 0x9a8);
          }
          else {
            do {
              local_170 = uVar14;
              uVar13 = *(uint *)(param_1 + 0x9a8);
              if (uVar8 != 0) {
                lVar19 = 0;
                do {
                  *(undefined8 *)((longlong)local_140 + lVar19 + (ulonglong)uVar13 * 8) =
                       *(undefined8 *)((longlong)puVar27 + lVar19);
                  lVar19 = lVar19 + 8;
                } while ((longlong)(int)uVar8 * 8 - lVar19 != 0);
                uVar13 = *(uint *)(param_1 + 0x9a8);
              }
              uVar18 = uVar18 - uVar8;
              puVar27 = puVar27 + (int)uVar8;
              *(uint *)(param_1 + 0x9a8) = uVar13 + uVar8;
              FUN_1468a7692(local_168);
              uVar8 = 0x20;
              uVar14 = local_170;
            } while (0x1f < uVar18);
            uVar13 = *(uint *)(param_1 + 0x9a8);
            if (uVar18 != 0) {
              puVar9 = puVar27 + uVar18;
              goto LAB_1427ec061;
            }
            uVar18 = 0;
          }
          *(uint *)(param_1 + 0x9a8) = uVar18 + uVar13;
        }
        else {
          if (uVar18 == 0) break;
          uVar13 = *(uint *)(param_1 + 0x80);
          uVar8 = 0x20 - uVar13;
          if (uVar18 < uVar8) {
            puVar9 = puVar27 + (int)uVar18;
LAB_1427ebe30:
            uVar10 = (longlong)puVar9 + (-8 - (longlong)puVar27);
            auVar29._8_4_ = (int)uVar10;
            auVar29._0_8_ = uVar10;
            auVar29._12_4_ = (int)(uVar10 >> 0x20);
            auVar30._0_8_ = uVar10 >> 3;
            auVar30._8_8_ = auVar29._8_8_ >> 3;
            uVar17 = 0;
            do {
              auVar32._8_4_ = (int)puVar27;
              auVar32._0_8_ = puVar27;
              auVar32._12_4_ = (int)((ulonglong)puVar27 >> 0x20);
              if ((bool)(~(SUB168(auVar30 | auVar6,0) < (longlong)(uVar17 ^ auVar6._0_8_)) & 1)) {
                local_138[(ulonglong)uVar13 + (uVar17 - 1)] = (longlong)puVar27 + auVar35._0_8_;
              }
              auVar34._8_4_ = (int)uVar17;
              auVar34._0_8_ = uVar17;
              auVar34._12_4_ = (int)(uVar17 >> 0x20);
              if ((longlong)((auVar34._8_8_ | auVar36._8_8_) ^ auVar6._8_8_) <=
                  SUB168(auVar30 | auVar6,8)) {
                local_138[uVar13 + uVar17] = auVar32._8_8_ + auVar35._8_8_;
              }
              uVar17 = uVar17 + 2;
              puVar27 = puVar27 + 2;
            } while (((uVar10 >> 3) + 2 & 0xfffffffffffffffe) != uVar17);
            uVar13 = *(uint *)(param_1 + 0x80);
          }
          else {
            do {
              uVar13 = *(uint *)(param_1 + 0x80);
              if (uVar8 != 0) {
                uVar10 = (longlong)(int)uVar8 + 0x1fffffffffffffff;
                uVar17 = uVar10 & 0x1fffffffffffffff;
                auVar28._8_4_ = (int)uVar17;
                auVar28._0_8_ = uVar17;
                auVar28._12_4_ = (int)(uVar17 >> 0x20);
                uVar22 = 0;
                puVar9 = puVar27;
                do {
                  auVar31._8_4_ = (int)puVar9;
                  auVar31._0_8_ = puVar9;
                  auVar31._12_4_ = (int)((ulonglong)puVar9 >> 0x20);
                  if ((bool)(~(SUB168(auVar28 | auVar6,0) < (longlong)(uVar22 ^ auVar6._0_8_)) & 1))
                  {
                    local_138[(ulonglong)uVar13 + (uVar22 - 1)] = (longlong)puVar9 + auVar35._0_8_;
                  }
                  auVar33._8_4_ = (int)uVar22;
                  auVar33._0_8_ = uVar22;
                  auVar33._12_4_ = (int)(uVar22 >> 0x20);
                  if ((longlong)((auVar33._8_8_ | auVar36._8_8_) ^ auVar6._8_8_) <=
                      SUB168(auVar28 | auVar6,8)) {
                    local_138[uVar13 + uVar22] = auVar31._8_8_ + auVar35._8_8_;
                  }
                  uVar22 = uVar22 + 2;
                  puVar9 = puVar9 + 2;
                } while ((uVar17 - ((uint)uVar10 & 1)) + 2 != uVar22);
                uVar13 = *(uint *)(param_1 + 0x80);
              }
              uVar18 = uVar18 - uVar8;
              puVar27 = puVar27 + (int)uVar8;
              *(uint *)(param_1 + 0x80) = uVar13 + uVar8;
              FUN_1468a72b2(local_160);
              uVar8 = 0x20;
            } while (0x1f < uVar18);
            uVar13 = *(uint *)(param_1 + 0x80);
            if (uVar18 != 0) {
              puVar9 = puVar27 + uVar18;
              goto LAB_1427ebe30;
            }
            uVar18 = 0;
          }
          *(uint *)(param_1 + 0x80) = uVar18 + uVar13;
        }
        break;
      case 10:
        uVar10 = *(ulonglong *)(puVar25 + 4);
        uVar22 = puVar15[1];
        uVar17 = *puVar15;
        uVar21 = ((longlong)uVar17 >> 0x18) + (longlong)puVar15;
        if ((uVar17 & 1) == 0) {
          uVar21 = uVar17;
        }
        uVar17 = (ulonglong)*(uint *)(param_1 + 0xe80);
        iVar20 = *(uint *)(param_1 + 0xe80) + 1;
        *(int *)(param_1 + 0xe80) = iVar20;
        local_158[uVar17 * 3] = (uVar10 & 0xfffffffffffffffe) + local_178;
        local_158[uVar17 * 3 + 1] = uVar21;
        *(int *)(local_158 + uVar17 * 3 + 2) = (int)uVar22;
LAB_1427eb9ca:
        puVar26 = puVar25 + 4;
        if (iVar20 == 0x20) {
LAB_1427eb9d4:
          FUN_144710c38(puVar24);
          puVar26 = puVar25 + 4;
        }
        break;
      case 0xb:
        uVar10 = *(ulonglong *)(puVar25 + 4);
        bVar3 = *(byte *)((longlong)puVar15 +
                         (ulonglong)*(uint *)((uVar10 & 0xfffffffffffffffe) - 8));
        uVar17 = (ulonglong)*(uint *)(param_1 + 0xe80);
        iVar20 = *(uint *)(param_1 + 0xe80) + 1;
        *(int *)(param_1 + 0xe80) = iVar20;
        local_158[uVar17 * 3] = (uVar10 & 0xfffffffffffffffe) + local_178;
        local_158[uVar17 * 3 + 1] = puVar15;
        *(uint *)(local_158 + uVar17 * 3 + 2) = (uint)bVar3;
        puVar26 = puVar25 + 4;
        if (iVar20 != 0x20) break;
        goto LAB_1427eb9d4;
      case 0xc:
        (*(code *)**(undefined8 **)*puVar15)((undefined8 *)*puVar15,param_1[3]);
        plVar5 = (longlong *)*puVar15;
        if (*(char *)((longlong)plVar5 + 0x11) == '\x01') {
          if (((ulonglong)plVar5[1] < 9) && (*(byte *)(plVar5 + 2) < 4)) {
            puVar15 = puVar15 + 1;
          }
          else {
            puVar15 = (ulonglong *)puVar15[1];
          }
          (**(code **)(*plVar5 + 8))(plVar5,puVar15);
        }
        break;
      case 0xd:
        (**(code **)(puVar25 + 4))(local_148,param_1[3]);
switchD_1427eb823_caseD_0:
        uVar14 = local_148 + local_100;
        puVar25 = local_110;
        uVar10 = uVar14;
        if (uVar14 != local_108) goto LAB_1427eb78e;
        if (local_118 != local_120) goto LAB_1427eb723;
        lVar12 = (longlong)*(int *)(param_1 + 0xeea);
        uVar18 = (&DAT_14c949f00)[lVar12 * 0x50];
        if ((ulonglong)uVar18 < 0x20) {
          (&DAT_14c949f00)[lVar12 * 0x50] = uVar18 + 1;
          *(ulonglong **)(&DAT_14c949f08 + (ulonglong)uVar18 * 8 + lVar12 * 0x140) = local_150;
        }
        else {
          FUN_1400020a8(local_150);
        }
        if (((*(longlong *)(param_1[0xee9] + 0xff0) == 0) &&
            ((int)((ulonglong)(param_1[0xee8] - param_1[0xee9]) >> 3) * -0x55555555 < 1)) &&
           (cVar7 = FUN_1468a8480(param_1), cVar7 == '\0')) {
          if ((local_a0 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0();
          }
          return;
        }
        goto LAB_1427eb6df;
      case 0xe:
        uVar10 = CONCAT71((int7)((ulonglong)
                                 ((longlong)&switchD_1427eb823::switchdataD_149e89f08 +
                                 (longlong)(int)(&switchD_1427eb823::switchdataD_149e89f08)[uVar10])
                                >> 8),0xe);
        goto LAB_1427ec0fc;
      case 0xf:
        (**(code **)(puVar25 + 4))(puVar15,param_1[3]);
        puVar26 = puVar25 + 4;
        break;
      case 0x10:
        local_c8 = puVar15[1];
        FUN_1468a7eac(param_1,&local_c8);
        break;
      case 0x11:
        uVar10 = puVar15[1];
        if ((longlong)(int)uVar10 != 0) {
          uVar17 = *puVar15;
          lVar19 = 0;
          local_170 = uVar14;
          local_e0 = in_R11;
          local_d8 = puVar25;
          do {
            local_c8 = *(ulonglong *)(uVar17 + 8 + lVar19);
            FUN_1468a7eac(param_1,&local_c8);
            lVar19 = lVar19 + 0x18;
            uVar14 = local_170;
            in_R11 = local_e0;
            puVar24 = local_130;
            puVar26 = local_d8;
          } while ((longlong)(int)uVar10 * 0x18 != lVar19);
        }
      }
      lVar12 = lVar12 + 8;
      puVar25 = puVar26;
    } while (lVar12 != 0x20);
    puVar25 = puVar26 + 4;
    uVar10 = local_148;
  } while( true );
}



// FUNCTION 1427ec20c FUN_1427ec20c body=3819 status=ok
// SIG undefined FUN_1427ec20c(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427ec20c(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined4 *puVar3;
  byte bVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  char cVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong *puVar16;
  longlong lVar17;
  LARGE_INTEGER LVar18;
  undefined8 *puVar19;
  longlong *plVar20;
  ulonglong *puVar21;
  ulonglong *puVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  longlong lVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  longlong lVar29;
  ushort *puVar30;
  ushort *puVar31;
  uint uVar32;
  longlong lVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 unaff_XMM9 [16];
  undefined1 auVar41 [16];
  undefined1 unaff_XMM10 [16];
  undefined1 auVar42 [16];
  longlong *local_7900;
  ulonglong local_78d0;
  ulonglong local_78c8;
  undefined **local_78c0;
  undefined8 local_78b8;
  undefined2 local_78b0;
  longlong *local_7880 [3];
  undefined8 local_7868;
  undefined1 local_7840 [64];
  uint local_7800;
  undefined8 auStack_77f8 [39];
  uint local_76c0;
  ulonglong auStack_76b8 [71];
  uint local_7480;
  longlong alStack_7478 [2223];
  undefined1 local_2f00 [64];
  uint local_2ec0;
  undefined8 auStack_2eb8 [39];
  uint local_2d80;
  ulonglong auStack_2d78 [71];
  uint local_2b40;
  ulonglong auStack_2b38 [1135];
  uint local_7c0 [2];
  ulonglong auStack_7b8 [2];
  int aiStack_7a8 [202];
  uint local_480;
  ulonglong auStack_478 [2];
  uint auStack_468 [224];
  LARGE_INTEGER local_e8;
  uint uStack_e0;
  uint uStack_dc;
  byte local_d8;
  uint local_d4;
  byte local_d0;
  uint local_cc;
  ulonglong local_c8;
  
  local_c8 = DAT_14c707940 ^ (ulonglong)&local_78b8;
  *(undefined2 *)(param_1 + 0xf) = 0x100;
  local_78b8 = 0;
  local_78b0 = 1;
  local_78c0 = &PTR_FUN_149e88fd0;
  FUN_1468a97ee(local_7880,param_1,&local_78c0);
  auVar11 = _DAT_149931e80;
  auVar41 = pmovsxbq(unaff_XMM9,0x800);
  auVar42 = pmovsxbq(unaff_XMM10,0x100);
LAB_1427ec2ec:
  *param_1 = DAT_14c948580;
  iVar14 = *(int *)(param_1 + 8);
  if ((longlong)iVar14 != 0) {
    lVar17 = param_1[7];
    lVar24 = 0;
    do {
      uVar27 = (ulonglong)local_2b40;
      local_2b40 = local_2b40 + 1;
      auStack_2b38[uVar27] = **(ulonglong **)(lVar17 + lVar24);
      if (local_2b40 == 0x20) {
        FUN_1468aa414(local_2f00);
      }
      lVar24 = lVar24 + 8;
    } while ((longlong)iVar14 * 8 != lVar24);
  }
  local_7900 = (longlong *)param_1[1];
  uVar27 = (ulonglong)*(uint *)(param_1 + 2);
  do {
    if ((int)uVar27 != 0) {
      plVar20 = local_7900;
      do {
        lVar17 = *plVar20;
        uVar25 = *(ulonglong *)(lVar17 + 0x10);
        uVar15 = *(ulonglong *)(lVar17 + 0x20);
        uVar6 = *(ulonglong *)(uVar25 + 0x1e8);
        *local_7880[0] = lVar17;
        uVar23 = (ulonglong)local_2b40;
        local_2b40 = local_2b40 + 1;
        auStack_2b38[uVar23] = uVar25;
        if (local_2b40 == 0x20) {
          FUN_1468aa414(local_2f00);
        }
        uVar32 = local_2b40 + 1;
        auStack_2b38[local_2b40] = uVar15;
        local_2b40 = uVar32;
        if (uVar32 == 0x20) {
          FUN_1468aa414(local_2f00);
        }
        if (1 < uVar6) {
          puVar30 = (ushort *)(uVar6 & 0xfffffffffffffffe);
          uVar25 = (ulonglong)((uint)uVar6 & 1);
          lVar24 = lVar17;
          do {
            uVar10 = CONCAT71(local_e8.QuadPart._1_7_,(char)*puVar30);
            local_e8.s.HighPart._2_2_ = 0;
            local_e8.QuadPart._0_6_ = CONCAT24(*puVar30 >> 5,(int)uVar10) & 0xffffffffff1f;
            uStack_e0 = CONCAT31(uStack_e0._1_3_,(char)puVar30[1]) & 0xffffff1f;
            uStack_dc = (uint)(puVar30[1] >> 5);
            local_d8 = (byte)puVar30[2] & 0x1f;
            local_d4 = (uint)(puVar30[2] >> 5);
            local_d0 = (byte)puVar30[3] & 0x1f;
            local_cc = (uint)(puVar30[3] >> 5);
            lVar26 = 0;
            do {
              bVar4 = *(byte *)((longlong)&local_e8 + lVar26);
              if (0x11 < bVar4) {
                FUN_140030042(bVar4,lVar17);
                goto switchD_1427ec4a8_caseD_0;
              }
              uVar32 = *(uint *)((longlong)&local_e8 + lVar26 + 4);
              puVar21 = (ulonglong *)(lVar24 + (ulonglong)uVar32 * 8);
              puVar31 = puVar30;
              uVar13 = local_480;
              switch(bVar4) {
              case 0:
                goto switchD_1427ec4a8_caseD_0;
              case 1:
                lVar24 = lVar24 + (ulonglong)(uVar32 * 0x800 + 0x800) * 8;
                break;
              case 2:
                if ((uVar6 & 1) == 0) {
                  uVar15 = (ulonglong)local_2b40;
                  local_2b40 = local_2b40 + 1;
                  auStack_2b38[uVar15] = *puVar21;
                  if (local_2b40 == 0x20) {
                    FUN_1468aa414(local_2f00);
                    uVar13 = local_480;
                  }
                }
                else {
                  uVar15 = (ulonglong)local_7480;
                  local_7480 = local_7480 + 1;
                  alStack_7478[uVar15] = (longlong)puVar21;
                  if (local_7480 == 0x20) {
                    FUN_1468aa034(local_7840);
                    uVar13 = local_480;
                  }
                }
                break;
              case 3:
                if ((uVar6 & 1) == 0) {
                  uVar15 = (ulonglong)local_2ec0;
                  local_2ec0 = local_2ec0 + 1;
                  auStack_2eb8[uVar15] = puVar21;
                  if (local_2ec0 == 0x20) {
                    FUN_1468aab14(local_2f00);
                    uVar13 = local_480;
                  }
                }
                else {
                  uVar15 = (ulonglong)local_7800;
                  local_7800 = local_7800 + 1;
                  auStack_77f8[uVar15] = puVar21;
                  if (local_7800 == 0x20) {
                    FUN_1468aa882(local_7840);
                    uVar13 = local_480;
                  }
                }
                break;
              case 4:
                uVar23 = puVar21[1];
                uVar15 = *puVar21;
                uVar28 = (ulonglong)local_480;
                auStack_478[uVar28 * 3] = *(ulonglong *)(puVar30 + 4) & 0xfffffffffffffffe | uVar25;
                auStack_478[uVar28 * 3 + 1] = uVar15;
                auStack_468[uVar28 * 6] = (uint)uVar23;
                goto LAB_1427ec668;
              case 5:
                puVar31 = puVar30 + 4;
                local_78d0 = local_78d0 & 0xffffffff00000000 | (ulonglong)*(uint *)(puVar30 + 4);
                if ((uVar6 & 1) == 0) {
                  uVar15 = (ulonglong)local_2d80;
                  local_2d80 = local_2d80 + 1;
                  auStack_2d78[uVar15 * 2] = (ulonglong)puVar21;
                  auStack_2d78[uVar15 * 2 + 1] = local_78d0;
                  if (local_2d80 == 0x20) {
                    FUN_1468ab06e(local_2f00);
                    uVar13 = local_480;
                  }
                }
                else {
                  uVar15 = (ulonglong)local_76c0;
                  local_76c0 = local_76c0 + 1;
                  auStack_76b8[uVar15 * 2] = (ulonglong)puVar21;
                  auStack_76b8[uVar15 * 2 + 1] = local_78d0;
                  if (local_76c0 == 0x20) {
                    FUN_1468aaeda(local_7840);
                    uVar13 = local_480;
                  }
                }
                break;
              case 6:
                uVar15 = puVar21[1];
                iVar14 = *(int *)((longlong)puVar21 + 0x34);
                iVar5 = *(int *)((*(ulonglong *)(puVar30 + 4) & 0xfffffffffffffffe) - 8);
                uVar23 = (ulonglong)local_7c0[0];
                local_7c0[0] = local_7c0[0] + 1;
                auStack_7b8[uVar23 * 3] = *(ulonglong *)(puVar30 + 4) & 0xfffffffffffffffe | uVar25;
                auStack_7b8[uVar23 * 3 + 1] = (ulonglong)puVar21;
                aiStack_7a8[uVar23 * 6] = (int)uVar15 - iVar14;
                aiStack_7a8[uVar23 * 6 + 1] = iVar5;
                puVar31 = puVar30 + 4;
                uVar13 = local_480;
                if (local_7c0[0] == 0x20) {
                  FUN_14002fe56(local_7c0);
                  uVar13 = local_480;
                }
                break;
              case 7:
                if (((*(int *)((longlong)puVar21 + 0xc) != 0) &&
                    (uVar32 = (uint)puVar21[1], -1 < (int)uVar32)) &&
                   (((int)uVar32 < DAT_14c9647dc &&
                    ((puVar22 = (ulonglong *)
                                ((ulonglong)((uVar32 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar32 >> 0x10) * 8)),
                     puVar22 != (ulonglong *)0x0 &&
                     ((int)puVar22[2] == *(int *)((longlong)puVar21 + 0xc))))))) {
                  uVar15 = *puVar22;
                  local_78c8 = uVar15;
                  FUN_1468aac2e(local_7880,&local_78c8);
                  uVar13 = local_480;
                  if ((uVar15 != 0) && (local_78c8 == 0)) {
                    *puVar21 = 0;
                    puVar21[1] = 0;
                  }
                }
                break;
              case 8:
                uVar15 = puVar21[1];
                if ((longlong)(int)uVar15 != 0) {
                  uVar23 = *puVar21;
                  lVar33 = uVar23 + 0xc;
                  lVar29 = 0;
                  do {
                    iVar14 = *(int *)(lVar33 + lVar29);
                    if ((((iVar14 != 0) &&
                         (uVar32 = *(uint *)(uVar23 + 8 + lVar29), -1 < (int)uVar32)) &&
                        ((int)uVar32 < DAT_14c9647dc)) &&
                       ((puVar21 = (ulonglong *)
                                   ((ulonglong)((uVar32 & 0xffff) * 0x18) +
                                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar32 >> 0x10) * 8)),
                        puVar21 != (ulonglong *)0x0 && ((int)puVar21[2] == iVar14)))) {
                      uVar28 = *puVar21;
                      local_78c8 = uVar28;
                      FUN_1468aac2e(local_7880,&local_78c8);
                      if ((uVar28 != 0) && (local_78c8 == 0)) {
                        lVar2 = lVar33 + lVar29;
                        *(undefined8 *)(lVar2 + -0xc) = 0;
                        *(undefined8 *)(lVar2 + -4) = 0;
                      }
                    }
                    lVar29 = lVar29 + 0x20;
                    uVar13 = local_480;
                  } while ((longlong)(int)uVar15 * 0x20 != lVar29);
                }
                break;
              case 9:
                puVar16 = (ulonglong *)*puVar21;
                puVar22 = (ulonglong *)(((longlong)puVar16 >> 0x18) + (longlong)puVar21);
                if (((ulonglong)puVar16 & 1) == 0) {
                  puVar22 = puVar16;
                }
                uVar32 = (uint)puVar21[1];
                if ((uVar6 & 1) == 0) {
                  if (uVar32 == 0) break;
                  uVar13 = 0x20 - local_2b40;
                  if (uVar32 < uVar13) {
                    puVar21 = puVar22 + (int)uVar32;
LAB_1427eccef:
                    puVar16 = auStack_2b38 + local_2b40;
                    do {
                      *puVar16 = *puVar22;
                      puVar16 = puVar16 + 1;
                      puVar22 = puVar22 + 1;
                    } while (puVar22 != puVar21);
                  }
                  else {
                    do {
                      if (uVar13 != 0) {
                        lVar29 = 0;
                        do {
                          *(undefined8 *)
                           ((longlong)auStack_2b38 + lVar29 + (ulonglong)local_2b40 * 8) =
                               *(undefined8 *)((longlong)puVar22 + lVar29);
                          lVar29 = lVar29 + 8;
                        } while ((longlong)(int)uVar13 * 8 - lVar29 != 0);
                      }
                      uVar32 = uVar32 - uVar13;
                      puVar22 = puVar22 + (int)uVar13;
                      local_2b40 = local_2b40 + uVar13;
                      FUN_1468aa414(local_2f00);
                      uVar13 = 0x20;
                    } while (0x1f < uVar32);
                    if (uVar32 != 0) {
                      puVar21 = puVar22 + uVar32;
                      goto LAB_1427eccef;
                    }
                    uVar32 = 0;
                  }
                  local_2b40 = uVar32 + local_2b40;
                  uVar13 = local_480;
                }
                else {
                  if (uVar32 == 0) break;
                  uVar13 = 0x20 - local_7480;
                  if (uVar32 < uVar13) {
                    puVar21 = puVar22 + (int)uVar32;
LAB_1427ecba5:
                    uVar15 = (longlong)puVar21 + (-8 - (longlong)puVar22);
                    auVar35._8_4_ = (int)uVar15;
                    auVar35._0_8_ = uVar15;
                    auVar35._12_4_ = (int)(uVar15 >> 0x20);
                    auVar36._0_8_ = uVar15 >> 3;
                    auVar36._8_8_ = auVar35._8_8_ >> 3;
                    uVar23 = 0;
                    do {
                      auVar38._8_4_ = (int)puVar22;
                      auVar38._0_8_ = puVar22;
                      auVar38._12_4_ = (int)((ulonglong)puVar22 >> 0x20);
                      if ((bool)(~(SUB168(auVar36 | auVar11,0) < (longlong)(uVar23 ^ auVar11._0_8_))
                                & 1)) {
                        alStack_7478[local_7480 + uVar23] = (longlong)puVar22 + auVar41._0_8_;
                      }
                      auVar40._8_4_ = (int)uVar23;
                      auVar40._0_8_ = uVar23;
                      auVar40._12_4_ = (int)(uVar23 >> 0x20);
                      if ((longlong)((auVar40._8_8_ | auVar42._8_8_) ^ auVar11._8_8_) <=
                          SUB168(auVar36 | auVar11,8)) {
                        alStack_7478[(ulonglong)local_7480 + uVar23 + 1] =
                             auVar38._8_8_ + auVar41._8_8_;
                      }
                      uVar23 = uVar23 + 2;
                      puVar22 = puVar22 + 2;
                    } while (((uVar15 >> 3) + 2 & 0xfffffffffffffffe) != uVar23);
                  }
                  else {
                    do {
                      if (uVar13 != 0) {
                        uVar15 = (longlong)(int)uVar13 + 0x1fffffffffffffff;
                        uVar23 = uVar15 & 0x1fffffffffffffff;
                        auVar34._8_4_ = (int)uVar23;
                        auVar34._0_8_ = uVar23;
                        auVar34._12_4_ = (int)(uVar23 >> 0x20);
                        uVar28 = 0;
                        puVar21 = puVar22;
                        do {
                          auVar37._8_4_ = (int)puVar21;
                          auVar37._0_8_ = puVar21;
                          auVar37._12_4_ = (int)((ulonglong)puVar21 >> 0x20);
                          if ((bool)(~(SUB168(auVar34 | auVar11,0) <
                                      (longlong)(uVar28 ^ auVar11._0_8_)) & 1)) {
                            alStack_7478[local_7480 + uVar28] = (longlong)puVar21 + auVar41._0_8_;
                          }
                          auVar39._8_4_ = (int)uVar28;
                          auVar39._0_8_ = uVar28;
                          auVar39._12_4_ = (int)(uVar28 >> 0x20);
                          if ((longlong)((auVar39._8_8_ | auVar42._8_8_) ^ auVar11._8_8_) <=
                              SUB168(auVar34 | auVar11,8)) {
                            alStack_7478[(ulonglong)local_7480 + uVar28 + 1] =
                                 auVar37._8_8_ + auVar41._8_8_;
                          }
                          uVar28 = uVar28 + 2;
                          puVar21 = puVar21 + 2;
                        } while ((uVar23 - ((uint)uVar15 & 1)) + 2 != uVar28);
                      }
                      uVar32 = uVar32 - uVar13;
                      puVar22 = puVar22 + (int)uVar13;
                      local_7480 = local_7480 + uVar13;
                      FUN_1468aa034(local_7840);
                      uVar13 = 0x20;
                    } while (0x1f < uVar32);
                    if (uVar32 != 0) {
                      puVar21 = puVar22 + uVar32;
                      goto LAB_1427ecba5;
                    }
                    uVar32 = 0;
                  }
                  local_7480 = uVar32 + local_7480;
                  uVar13 = local_480;
                }
                break;
              case 10:
                uVar23 = puVar21[1];
                uVar15 = *puVar21;
                uVar28 = ((longlong)uVar15 >> 0x18) + (longlong)puVar21;
                if ((uVar15 & 1) == 0) {
                  uVar28 = uVar15;
                }
                uVar15 = (ulonglong)local_480;
                auStack_478[uVar15 * 3] = *(ulonglong *)(puVar30 + 4) & 0xfffffffffffffffe | uVar25;
                auStack_478[uVar15 * 3 + 1] = uVar28;
                auStack_468[uVar15 * 6] = (uint)uVar23;
LAB_1427ec668:
                puVar31 = puVar30 + 4;
                uVar13 = local_480 + 1;
                if (local_480 + 1 == 0x20) {
LAB_1427ec672:
                  local_480 = local_480 + 1;
                  FUN_144710c38(local_7c0);
                  puVar31 = puVar30 + 4;
                  uVar13 = local_480;
                }
                break;
              case 0xb:
                bVar4 = *(byte *)((longlong)puVar21 +
                                 (ulonglong)
                                 *(uint *)((*(ulonglong *)(puVar30 + 4) & 0xfffffffffffffffe) - 8));
                uVar15 = (ulonglong)local_480;
                auStack_478[uVar15 * 3] = *(ulonglong *)(puVar30 + 4) & 0xfffffffffffffffe | uVar25;
                auStack_478[uVar15 * 3 + 1] = (ulonglong)puVar21;
                auStack_468[uVar15 * 6] = (uint)bVar4;
                puVar31 = puVar30 + 4;
                uVar13 = local_480 + 1;
                if (local_480 + 1 != 0x20) break;
                goto LAB_1427ec672;
              case 0xc:
                (*(code *)**(undefined8 **)*puVar21)((undefined8 *)*puVar21,local_7868);
                plVar7 = (longlong *)*puVar21;
                uVar13 = local_480;
                if (*(char *)((longlong)plVar7 + 0x11) == '\x01') {
                  if (((ulonglong)plVar7[1] < 9) && (*(byte *)(plVar7 + 2) < 4)) {
                    puVar21 = puVar21 + 1;
                  }
                  else {
                    puVar21 = (ulonglong *)puVar21[1];
                  }
                  (**(code **)(*plVar7 + 8))(plVar7,puVar21);
                  uVar13 = local_480;
                }
                break;
              case 0xd:
                (**(code **)(puVar30 + 4))(lVar17,local_7868);
                goto switchD_1427ec4a8_caseD_0;
              case 0xe:
                cVar12 = FUN_14689c496((ulonglong)uVar32,lVar17,local_7880[0]);
                if (cVar12 == '\0') {
                  (*(code *)(&DAT_14c950070)[(int)uVar32])(lVar17,local_7868);
                }
switchD_1427ec4a8_caseD_0:
                goto LAB_1427ecdc6;
              case 0xf:
                (**(code **)(puVar30 + 4))(puVar21,local_7868);
                puVar31 = puVar30 + 4;
                uVar13 = local_480;
                break;
              case 0x10:
                local_78c8 = puVar21[1];
                FUN_1468aac2e(local_7880,&local_78c8);
                uVar13 = local_480;
                break;
              case 0x11:
                uVar15 = puVar21[1];
                if ((longlong)(int)uVar15 != 0) {
                  uVar23 = *puVar21;
                  lVar29 = 0;
                  do {
                    local_78c8 = *(ulonglong *)(uVar23 + 8 + lVar29);
                    FUN_1468aac2e(local_7880,&local_78c8);
                    lVar29 = lVar29 + 0x18;
                    uVar13 = local_480;
                  } while ((longlong)(int)uVar15 * 0x18 != lVar29);
                }
              }
              local_480 = uVar13;
              lVar26 = lVar26 + 8;
              puVar30 = puVar31;
            } while (lVar26 != 0x20);
            puVar30 = puVar31 + 4;
          } while( true );
        }
LAB_1427ecdc6:
        plVar20 = plVar20 + 1;
      } while (plVar20 != local_7900 + (int)uVar27);
    }
    if ((local_7900 != (longlong *)0x0) && (local_7900 != (longlong *)param_1[1])) {
      lVar17 = (longlong)*(int *)(param_1 + 6);
      uVar32 = (&DAT_14c949f00)[lVar17 * 0x50];
      if ((ulonglong)uVar32 < 0x20) {
        (&DAT_14c949f00)[lVar17 * 0x50] = uVar32 + 1;
        *(longlong **)(&DAT_14c949f08 + (ulonglong)uVar32 * 8 + lVar17 * 0x140) = local_7900 + -1;
      }
      else {
        FUN_1400020a8();
      }
    }
    if ((0.0 < DAT_14c9501c0) &&
       (QueryPerformanceCounter(&local_e8),
       DAT_14c9501c0 <= ((double)local_e8.QuadPart * DAT_14c83f420 + 16777216.0) - _DAT_14c950180))
    {
      cVar12 = FUN_1468ab202(local_7880);
      if (cVar12 != '\0') {
        FUN_1427ed3b6(local_7880);
      }
      FUN_1468ab590(local_7880);
      FUN_1468ab590(local_7880);
      FUN_1468a08b0(local_7c0,&local_e8);
      *(LARGE_INTEGER *)(local_7880[0] + 0xd) = local_e8;
      local_7880[0][0xe] = CONCAT44(uStack_dc,uStack_e0);
      *(undefined1 *)(param_1 + 0xf) = 1;
      if (param_1[9] != 0) {
        LOCK();
        piVar1 = (int *)(param_1[9] + 0x4c);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
LAB_1427ed087:
      FUN_1468a9772(&local_78c0);
      if ((local_c8 ^ (ulonglong)&local_78b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    LVar18.QuadPart = FUN_1456b24b8(param_1[5]);
    if (LVar18.QuadPart == 0) {
      FUN_140030620(param_1,&local_78c0);
      uVar25 = 0x1ef;
      do {
        cVar12 = FUN_1468ab202(local_7880);
        if (cVar12 != '\0') {
          FUN_1427ed3b6(local_7880);
        }
        FUN_1468ab590(local_7880);
        LVar18.QuadPart = FUN_1456b24b8(param_1[5]);
        uVar27 = uVar25;
        if (LVar18.QuadPart != 0) goto LAB_1427ed00f;
        lVar17 = param_1[3];
        uVar27 = (lVar17 - param_1[4]) - 8U >> 3;
        if ((int)uVar27 == 0) {
          local_e8.QuadPart = 0;
        }
        else {
          uVar8 = *(undefined4 *)(lVar17 + -8);
          uVar9 = *(undefined4 *)(lVar17 + -4);
          lVar24 = 0;
          do {
            puVar3 = (undefined4 *)(lVar17 + lVar24 * 8);
            *puVar3 = uVar8;
            puVar3[1] = uVar9;
            puVar3[2] = uVar8;
            puVar3[3] = uVar9;
            lVar24 = lVar24 + 2;
          } while (lVar24 != 0x10);
          LVar18 = (LARGE_INTEGER)((LARGE_INTEGER *)(param_1 + 4))->QuadPart;
          puVar19 = (undefined8 *)FUN_1400305d2(&DAT_14c949ec0,*(undefined4 *)(param_1 + 6));
          param_1[4] = puVar19;
          *puVar19 = 0;
          param_1[3] = param_1[4] + 8;
          uVar25 = uVar27 & 0xffffffff;
          local_e8 = LVar18;
          if (LVar18.QuadPart != 0) goto LAB_1427ed00f;
        }
        iVar14 = FUN_14689c9f7(param_1,&local_78c0,&local_e8,9);
      } while (iVar14 == 2);
      if (iVar14 == 3) goto LAB_1427ec2ec;
      LVar18 = local_e8;
      uVar27 = uVar25;
      if (local_e8.QuadPart == 0) goto LAB_1427ed087;
    }
    else {
      uVar27 = 0x1ef;
    }
LAB_1427ed00f:
    local_7900 = (longlong *)(LVar18.QuadPart + 8);
  } while( true );
}



// FUNCTION 1427ed0f8 FUN_1427ed0f8 body=702 status=ok
// SIG undefined FUN_1427ed0f8(void)

void FUN_1427ed0f8(int param_1,undefined8 *param_2)

{
  longlong lVar1;
  uint *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  bool bVar16;
  uint *puVar17;
  bool bVar18;
  
  lVar12 = (longlong)param_1 * 0x50;
  lVar1 = DAT_14c9640e8 + lVar12;
  lVar11 = (longlong)*(int *)(DAT_14c9640e8 + 0x20 + lVar12);
  if (lVar11 == 0) {
    lVar11 = (longlong)*(int *)(lVar1 + 0x30);
    if (lVar11 == 0) {
      return;
    }
    puVar17 = *(uint **)(lVar1 + 0x28);
    bVar16 = false;
  }
  else {
    lVar12 = *(longlong *)(DAT_14c9640e8 + 0x18 + lVar12);
    lVar15 = 0;
    bVar16 = false;
    do {
      uVar9 = *(uint *)(lVar12 + lVar15);
      if (-1 < (int)uVar9) {
        lVar6 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
        if ((*(uint *)(lVar6 + 8 + (ulonglong)(uVar9 & 0xffff) * 0x18) >> 0x15 & 1) == 0) {
          puVar17 = (uint *)(lVar6 + (ulonglong)(uVar9 & 0xffff) * 0x18 + 8);
          LOCK();
          *puVar17 = *puVar17 & ~DAT_14c75ec9c;
          UNLOCK();
          LOCK();
          *puVar17 = *puVar17 | DAT_14c75ec98;
          UNLOCK();
        }
        else {
          *(undefined4 *)(lVar12 + lVar15) = 0xffffffff;
          bVar16 = true;
        }
      }
      lVar15 = lVar15 + 4;
    } while (lVar11 * 4 != lVar15);
    lVar11 = (longlong)*(int *)(lVar1 + 0x30);
    if (lVar11 == 0) goto joined_r0x0001427ed32d;
    puVar17 = *(uint **)(lVar1 + 0x28);
  }
  puVar2 = puVar17 + lVar11;
  bVar8 = 0;
  do {
    uVar10 = DAT_14c75ec9c;
    uVar9 = *puVar17;
    if (-1 < (int)uVar9) {
      lVar11 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
      if ((*(uint *)(lVar11 + 8 + (ulonglong)(uVar9 & 0xffff) * 0x18) >> 0x15 & 1) == 0) {
        puVar3 = (undefined8 *)(lVar11 + (ulonglong)(uVar9 & 0xffff) * 0x18);
        if ((DAT_14c75ec9c & *(uint *)(puVar3 + 1)) == 0) {
          if ((0 < *(int *)((longlong)puVar3 + 0xc)) && ((*(uint *)(puVar3 + 1) >> 0x17 & 1) == 0))
          {
            do {
              uVar9 = *(uint *)(puVar3 + 1);
              if ((uVar9 >> 0x17 & 1) != 0) goto LAB_1427ed282;
              LOCK();
              bVar18 = uVar9 == *(uint *)(puVar3 + 1);
              if (bVar18) {
                *(uint *)(puVar3 + 1) = uVar9 | 0x800000;
              }
              uVar9 = DAT_14c75ec9c;
              UNLOCK();
            } while (!bVar18);
            uVar13 = (ulonglong)(*(uint *)((longlong)puVar3 + 0xc) & 0xffff);
            lVar11 = *(longlong *)
                      (DAT_14c9647c8 + (ulonglong)(*(uint *)((longlong)puVar3 + 0xc) >> 0x10) * 8);
            if (((DAT_14c75ec9c & *(uint *)(lVar11 + 8 + uVar13 * 0x18)) != 0) &&
               (lVar11 = lVar11 + uVar13 * 0x18, (*(uint *)(lVar11 + 8) & DAT_14c75ec9c) != 0)) {
              uVar14 = ~DAT_14c75ec9c;
              uVar10 = *(uint *)(lVar11 + 8);
              do {
                LOCK();
                uVar4 = *(uint *)(lVar11 + 8);
                bVar18 = uVar10 == uVar4;
                if (bVar18) {
                  *(uint *)(lVar11 + 8) = uVar10 & uVar14;
                  uVar4 = uVar10;
                }
                uVar10 = uVar4;
                UNLOCK();
              } while (!bVar18);
              LOCK();
              *(uint *)(lVar11 + 8) = *(uint *)(lVar11 + 8) | DAT_14c75ec98;
              UNLOCK();
              if ((uVar10 & uVar9) != 0) {
                uVar9 = *(uint *)(lVar11 + 0xc);
                goto LAB_1427ed26c;
              }
            }
          }
        }
        else if ((*(uint *)(puVar3 + 1) & DAT_14c75ec9c) != 0) {
          uVar14 = ~DAT_14c75ec9c;
          uVar9 = *(uint *)(puVar3 + 1);
          do {
            LOCK();
            uVar4 = *(uint *)(puVar3 + 1);
            bVar18 = uVar9 == uVar4;
            if (bVar18) {
              *(uint *)(puVar3 + 1) = uVar9 & uVar14;
              uVar4 = uVar9;
            }
            uVar9 = uVar4;
            UNLOCK();
          } while (!bVar18);
          LOCK();
          *(uint *)(puVar3 + 1) = *(uint *)(puVar3 + 1) | DAT_14c75ec98;
          UNLOCK();
          if ((uVar9 & uVar10) != 0) {
            plVar7 = (longlong *)*param_2;
            *(undefined8 *)*plVar7 = *puVar3;
            lVar11 = *plVar7;
            *plVar7 = lVar11 + 8;
            if (lVar11 + 8 == plVar7[1] + 0xf80) {
              FUN_1400318c8();
            }
            uVar9 = *(uint *)((longlong)puVar3 + 0xc);
            if ((int)uVar9 < 0) {
LAB_1427ed26c:
              FUN_1427ed0f8(~uVar9,param_2);
            }
          }
        }
      }
      else {
        *puVar17 = 0xffffffff;
        bVar8 = 1;
      }
    }
LAB_1427ed282:
    puVar17 = puVar17 + 1;
  } while (puVar17 != puVar2);
  bVar16 = (bool)(bVar8 | bVar16);
joined_r0x0001427ed32d:
  if (bVar16) {
    iVar5 = *(int *)(lVar1 + 0x10);
    if ((longlong)iVar5 != 0) {
      lVar11 = *(longlong *)(lVar1 + 8);
      lVar12 = 0;
      do {
        uVar9 = *(uint *)(lVar11 + lVar12);
        plVar7 = (longlong *)*param_2;
        *(undefined8 *)*plVar7 =
             *(undefined8 *)
              (*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8) +
              (ulonglong)(uVar9 & 0xffff) * 0x18);
        lVar15 = *plVar7;
        *plVar7 = lVar15 + 8;
        if (lVar15 + 8 == plVar7[1] + 0xf80) {
          FUN_1400318c8();
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)iVar5 * 4 != lVar12);
    }
    *(undefined1 *)(lVar1 + 0x48) = 1;
    DAT_14c96410c = 1;
  }
  return;
}



// FUNCTION 1427ed3b6 FUN_1427ed3b6 body=3122 status=ok
// SIG undefined FUN_1427ed3b6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427ed3b6(undefined8 *param_1)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined1 auVar6 [16];
  char cVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong *puVar15;
  ulonglong *puVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  int iVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong in_R11;
  longlong lVar23;
  uint *puVar24;
  ushort *puVar25;
  ushort *puVar26;
  undefined8 *puVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar35 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar36 [16];
  undefined1 auStack_198 [32];
  ulonglong local_178;
  ulonglong local_170;
  undefined8 *local_168;
  undefined8 *local_160;
  undefined8 *local_158;
  ulonglong *local_150;
  ulonglong local_148;
  undefined8 *local_140;
  undefined8 *local_138;
  uint *local_130;
  undefined8 *local_128;
  ulonglong *local_120;
  ulonglong *local_118;
  ushort *local_110;
  ulonglong local_108;
  ulonglong local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  ulonglong local_e0;
  ushort *local_d8;
  int local_cc;
  ulonglong local_c8;
  byte local_c0 [4];
  uint local_bc;
  byte local_b8;
  uint local_b4;
  byte local_b0;
  uint local_ac;
  byte local_a8;
  uint local_a4;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_128 = param_1 + 0xee8;
  *(undefined8 *)*param_1 = 0;
  auVar6 = _DAT_149931e80;
  local_158 = param_1 + 0xe81;
  puVar24 = (uint *)(param_1 + 0xe18);
  local_e8 = param_1 + 0xe19;
  local_160 = param_1 + 8;
  local_168 = param_1 + 0x930;
  local_140 = param_1 + 0x9a9;
  local_f0 = param_1 + 0x39;
  local_f8 = param_1 + 0x961;
  local_138 = param_1 + 0x82;
  auVar35 = pmovsxbq(unaff_XMM7,0x800);
  auVar36 = pmovsxbq(unaff_XMM8,0x100);
  local_130 = puVar24;
LAB_1427ed4bd:
  local_118 = (ulonglong *)FUN_141716706(local_128,&local_cc);
  local_120 = local_118 + (longlong)local_cc * 3;
  local_150 = local_118;
LAB_1427ed501:
  uVar10 = *local_118;
  uVar14 = local_118[1];
  puVar1 = (uint *)((longlong)local_118 + 0x14);
  local_100 = (ulonglong)*puVar1;
  puVar15 = local_118 + 2;
  local_118 = local_118 + 3;
  local_108 = (int)*puVar15 * *puVar1 + uVar14;
  local_110 = (ushort *)(uVar10 & 0xfffffffffffffffe);
  local_178 = (ulonglong)((uint)uVar10 & 1);
  puVar25 = local_110;
  uVar10 = uVar14;
LAB_1427ed56c:
  do {
    local_148 = uVar10;
    local_c0[0] = (byte)*puVar25 & 0x1f;
    local_bc = (uint)(*puVar25 >> 5);
    local_b8 = (byte)puVar25[1] & 0x1f;
    local_b4 = (uint)(puVar25[1] >> 5);
    local_b0 = (byte)puVar25[2] & 0x1f;
    local_ac = (uint)(puVar25[2] >> 5);
    local_a8 = (byte)puVar25[3] & 0x1f;
    local_a4 = (uint)(puVar25[3] >> 5);
    lVar12 = 0;
    do {
      uVar10 = (ulonglong)local_c0[lVar12];
      if (0x11 < uVar10) {
LAB_1427ededa:
        FUN_1427e893d(uVar10);
        goto switchD_1427ed601_caseD_0;
      }
      puVar15 = (ulonglong *)(uVar14 + (ulonglong)*(uint *)((longlong)&local_bc + lVar12) * 8);
      puVar26 = puVar25;
      switch(uVar10) {
      case 0:
        goto switchD_1427ed601_caseD_0;
      case 1:
        uVar14 = uVar14 + (ulonglong)(*(uint *)((longlong)&local_bc + lVar12) * 0x800 + 0x800) * 8;
        break;
      case 2:
        if ((int)local_178 == 0) {
          uVar10 = *puVar15;
          uVar18 = *(uint *)(param_1 + 0x9a8);
          iVar20 = uVar18 + 1;
          *(int *)(param_1 + 0x9a8) = iVar20;
          param_1[(ulonglong)uVar18 + 0x9a9] = uVar10;
          if (iVar20 == 0x20) {
            FUN_1468aa414(local_168);
          }
        }
        else {
          uVar18 = *(uint *)(param_1 + 0x80);
          iVar20 = uVar18 + 1;
          *(int *)(param_1 + 0x80) = iVar20;
          param_1[(ulonglong)uVar18 + 0x81] = puVar15;
          if (iVar20 == 0x20) {
            FUN_1468aa034(local_160);
          }
        }
        break;
      case 3:
        if ((int)local_178 == 0) {
          uVar18 = *(uint *)(param_1 + 0x938);
          iVar20 = uVar18 + 1;
          *(int *)(param_1 + 0x938) = iVar20;
          param_1[(ulonglong)uVar18 + 0x939] = puVar15;
          if (iVar20 == 0x20) {
            FUN_1468aab14(local_168);
          }
        }
        else {
          uVar18 = *(uint *)(param_1 + 0x10);
          iVar20 = uVar18 + 1;
          *(int *)(param_1 + 0x10) = iVar20;
          param_1[(ulonglong)uVar18 + 0x11] = puVar15;
          if (iVar20 == 0x20) {
            FUN_1468aa882(local_160);
          }
        }
        break;
      case 4:
        uVar10 = *(ulonglong *)(puVar25 + 4);
        uVar22 = puVar15[1];
        uVar17 = *puVar15;
        uVar21 = (ulonglong)*(uint *)(param_1 + 0xe80);
        iVar20 = *(uint *)(param_1 + 0xe80) + 1;
        *(int *)(param_1 + 0xe80) = iVar20;
        local_158[uVar21 * 3] = (uVar10 & 0xfffffffffffffffe) + local_178;
        local_158[uVar21 * 3 + 1] = uVar17;
        *(int *)(local_158 + uVar21 * 3 + 2) = (int)uVar22;
        goto LAB_1427ed7a8;
      case 5:
        puVar26 = puVar25 + 4;
        in_R11 = in_R11 & 0xffffffff00000000 | (ulonglong)*(uint *)(puVar25 + 4);
        if ((int)local_178 == 0) {
          uVar18 = *(uint *)(param_1 + 0x960);
          *(uint *)(param_1 + 0x960) = uVar18 + 1;
          local_f8[(ulonglong)uVar18 * 2] = puVar15;
          local_f8[(ulonglong)uVar18 * 2 + 1] = in_R11;
          if (uVar18 + 1 == 0x20) {
            FUN_1468ab06e(local_168);
          }
        }
        else {
          uVar18 = *(uint *)(param_1 + 0x38);
          *(uint *)(param_1 + 0x38) = uVar18 + 1;
          local_f0[(ulonglong)uVar18 * 2] = puVar15;
          local_f0[(ulonglong)uVar18 * 2 + 1] = in_R11;
          if (uVar18 + 1 == 0x20) {
            FUN_1468aaeda(local_160);
          }
        }
        break;
      case 6:
        uVar10 = *(ulonglong *)(puVar25 + 4);
        uVar17 = puVar15[1];
        iVar20 = *(int *)((longlong)puVar15 + 0x34);
        uVar4 = *(undefined4 *)((uVar10 & 0xfffffffffffffffe) - 8);
        uVar22 = (ulonglong)*puVar24;
        uVar18 = *puVar24 + 1;
        *puVar24 = uVar18;
        local_e8[uVar22 * 3] = (uVar10 & 0xfffffffffffffffe) + local_178;
        local_e8[uVar22 * 3 + 1] = puVar15;
        *(int *)(local_e8 + uVar22 * 3 + 2) = (int)uVar17 - iVar20;
        *(undefined4 *)((longlong)local_e8 + uVar22 * 0x18 + 0x14) = uVar4;
        puVar26 = puVar25 + 4;
        if (uVar18 == 0x20) {
          FUN_14002fe56(puVar24);
        }
        break;
      case 7:
        if (((*(int *)((longlong)puVar15 + 0xc) != 0) &&
            (uVar18 = (uint)puVar15[1], -1 < (int)uVar18)) &&
           (((int)uVar18 < DAT_14c9647dc &&
            ((puVar16 = (ulonglong *)
                        ((ulonglong)((uVar18 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8)),
             puVar16 != (ulonglong *)0x0 && ((int)puVar16[2] == *(int *)((longlong)puVar15 + 0xc))))
            ))) {
          uVar10 = *puVar16;
          local_c8 = uVar10;
          FUN_1468aac2e(param_1,&local_c8);
          if ((uVar10 != 0) && (local_c8 == 0)) {
            *puVar15 = 0;
            puVar15[1] = 0;
          }
        }
        break;
      case 8:
        uVar10 = puVar15[1];
        if ((longlong)(int)uVar10 != 0) {
          uVar17 = *puVar15;
          lVar19 = uVar17 + 0xc;
          lVar23 = 0;
          do {
            iVar20 = *(int *)(lVar19 + lVar23);
            if ((((iVar20 != 0) && (uVar18 = *(uint *)(uVar17 + 8 + lVar23), -1 < (int)uVar18)) &&
                ((int)uVar18 < DAT_14c9647dc)) &&
               ((puVar15 = (ulonglong *)
                           ((ulonglong)((uVar18 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8)),
                puVar15 != (ulonglong *)0x0 && ((int)puVar15[2] == iVar20)))) {
              uVar22 = *puVar15;
              local_170 = uVar14;
              local_c8 = uVar22;
              FUN_1468aac2e(param_1,&local_c8);
              uVar14 = local_170;
              if ((uVar22 != 0) && (local_c8 == 0)) {
                lVar2 = lVar23 + lVar19;
                *(undefined8 *)(lVar2 + -0xc) = 0;
                *(undefined8 *)(lVar2 + -4) = 0;
              }
            }
            lVar23 = lVar23 + 0x20;
            puVar24 = local_130;
          } while ((longlong)(int)uVar10 * 0x20 != lVar23);
        }
        break;
      case 9:
        puVar9 = (undefined8 *)*puVar15;
        puVar27 = (undefined8 *)(((longlong)puVar9 >> 0x18) + (longlong)puVar15);
        if (((ulonglong)puVar9 & 1) == 0) {
          puVar27 = puVar9;
        }
        uVar18 = (uint)puVar15[1];
        if ((int)local_178 == 0) {
          if (uVar18 == 0) break;
          uVar13 = *(uint *)(param_1 + 0x9a8);
          uVar8 = 0x20 - uVar13;
          if (uVar18 < uVar8) {
            puVar9 = puVar27 + (int)uVar18;
LAB_1427ede3f:
            puVar11 = local_140 + uVar13;
            do {
              *puVar11 = *puVar27;
              puVar11 = puVar11 + 1;
              puVar27 = puVar27 + 1;
            } while (puVar27 != puVar9);
            uVar13 = *(uint *)(param_1 + 0x9a8);
          }
          else {
            do {
              local_170 = uVar14;
              uVar13 = *(uint *)(param_1 + 0x9a8);
              if (uVar8 != 0) {
                lVar19 = 0;
                do {
                  *(undefined8 *)((longlong)local_140 + lVar19 + (ulonglong)uVar13 * 8) =
                       *(undefined8 *)((longlong)puVar27 + lVar19);
                  lVar19 = lVar19 + 8;
                } while ((longlong)(int)uVar8 * 8 - lVar19 != 0);
                uVar13 = *(uint *)(param_1 + 0x9a8);
              }
              uVar18 = uVar18 - uVar8;
              puVar27 = puVar27 + (int)uVar8;
              *(uint *)(param_1 + 0x9a8) = uVar13 + uVar8;
              FUN_1468aa414(local_168);
              uVar8 = 0x20;
              uVar14 = local_170;
            } while (0x1f < uVar18);
            uVar13 = *(uint *)(param_1 + 0x9a8);
            if (uVar18 != 0) {
              puVar9 = puVar27 + uVar18;
              goto LAB_1427ede3f;
            }
            uVar18 = 0;
          }
          *(uint *)(param_1 + 0x9a8) = uVar18 + uVar13;
        }
        else {
          if (uVar18 == 0) break;
          uVar13 = *(uint *)(param_1 + 0x80);
          uVar8 = 0x20 - uVar13;
          if (uVar18 < uVar8) {
            puVar9 = puVar27 + (int)uVar18;
LAB_1427edc0e:
            uVar10 = (longlong)puVar9 + (-8 - (longlong)puVar27);
            auVar29._8_4_ = (int)uVar10;
            auVar29._0_8_ = uVar10;
            auVar29._12_4_ = (int)(uVar10 >> 0x20);
            auVar30._0_8_ = uVar10 >> 3;
            auVar30._8_8_ = auVar29._8_8_ >> 3;
            uVar17 = 0;
            do {
              auVar32._8_4_ = (int)puVar27;
              auVar32._0_8_ = puVar27;
              auVar32._12_4_ = (int)((ulonglong)puVar27 >> 0x20);
              if ((bool)(~(SUB168(auVar30 | auVar6,0) < (longlong)(uVar17 ^ auVar6._0_8_)) & 1)) {
                local_138[(ulonglong)uVar13 + (uVar17 - 1)] = (longlong)puVar27 + auVar35._0_8_;
              }
              auVar34._8_4_ = (int)uVar17;
              auVar34._0_8_ = uVar17;
              auVar34._12_4_ = (int)(uVar17 >> 0x20);
              if ((longlong)((auVar34._8_8_ | auVar36._8_8_) ^ auVar6._8_8_) <=
                  SUB168(auVar30 | auVar6,8)) {
                local_138[uVar13 + uVar17] = auVar32._8_8_ + auVar35._8_8_;
              }
              uVar17 = uVar17 + 2;
              puVar27 = puVar27 + 2;
            } while (((uVar10 >> 3) + 2 & 0xfffffffffffffffe) != uVar17);
            uVar13 = *(uint *)(param_1 + 0x80);
          }
          else {
            do {
              uVar13 = *(uint *)(param_1 + 0x80);
              if (uVar8 != 0) {
                uVar10 = (longlong)(int)uVar8 + 0x1fffffffffffffff;
                uVar17 = uVar10 & 0x1fffffffffffffff;
                auVar28._8_4_ = (int)uVar17;
                auVar28._0_8_ = uVar17;
                auVar28._12_4_ = (int)(uVar17 >> 0x20);
                uVar22 = 0;
                puVar9 = puVar27;
                do {
                  auVar31._8_4_ = (int)puVar9;
                  auVar31._0_8_ = puVar9;
                  auVar31._12_4_ = (int)((ulonglong)puVar9 >> 0x20);
                  if ((bool)(~(SUB168(auVar28 | auVar6,0) < (longlong)(uVar22 ^ auVar6._0_8_)) & 1))
                  {
                    local_138[(ulonglong)uVar13 + (uVar22 - 1)] = (longlong)puVar9 + auVar35._0_8_;
                  }
                  auVar33._8_4_ = (int)uVar22;
                  auVar33._0_8_ = uVar22;
                  auVar33._12_4_ = (int)(uVar22 >> 0x20);
                  if ((longlong)((auVar33._8_8_ | auVar36._8_8_) ^ auVar6._8_8_) <=
                      SUB168(auVar28 | auVar6,8)) {
                    local_138[uVar13 + uVar22] = auVar31._8_8_ + auVar35._8_8_;
                  }
                  uVar22 = uVar22 + 2;
                  puVar9 = puVar9 + 2;
                } while ((uVar17 - ((uint)uVar10 & 1)) + 2 != uVar22);
                uVar13 = *(uint *)(param_1 + 0x80);
              }
              uVar18 = uVar18 - uVar8;
              puVar27 = puVar27 + (int)uVar8;
              *(uint *)(param_1 + 0x80) = uVar13 + uVar8;
              FUN_1468aa034(local_160);
              uVar8 = 0x20;
            } while (0x1f < uVar18);
            uVar13 = *(uint *)(param_1 + 0x80);
            if (uVar18 != 0) {
              puVar9 = puVar27 + uVar18;
              goto LAB_1427edc0e;
            }
            uVar18 = 0;
          }
          *(uint *)(param_1 + 0x80) = uVar18 + uVar13;
        }
        break;
      case 10:
        uVar10 = *(ulonglong *)(puVar25 + 4);
        uVar22 = puVar15[1];
        uVar17 = *puVar15;
        uVar21 = ((longlong)uVar17 >> 0x18) + (longlong)puVar15;
        if ((uVar17 & 1) == 0) {
          uVar21 = uVar17;
        }
        uVar17 = (ulonglong)*(uint *)(param_1 + 0xe80);
        iVar20 = *(uint *)(param_1 + 0xe80) + 1;
        *(int *)(param_1 + 0xe80) = iVar20;
        local_158[uVar17 * 3] = (uVar10 & 0xfffffffffffffffe) + local_178;
        local_158[uVar17 * 3 + 1] = uVar21;
        *(int *)(local_158 + uVar17 * 3 + 2) = (int)uVar22;
LAB_1427ed7a8:
        puVar26 = puVar25 + 4;
        if (iVar20 == 0x20) {
LAB_1427ed7b2:
          FUN_144710c38(puVar24);
          puVar26 = puVar25 + 4;
        }
        break;
      case 0xb:
        uVar10 = *(ulonglong *)(puVar25 + 4);
        bVar3 = *(byte *)((longlong)puVar15 +
                         (ulonglong)*(uint *)((uVar10 & 0xfffffffffffffffe) - 8));
        uVar17 = (ulonglong)*(uint *)(param_1 + 0xe80);
        iVar20 = *(uint *)(param_1 + 0xe80) + 1;
        *(int *)(param_1 + 0xe80) = iVar20;
        local_158[uVar17 * 3] = (uVar10 & 0xfffffffffffffffe) + local_178;
        local_158[uVar17 * 3 + 1] = puVar15;
        *(uint *)(local_158 + uVar17 * 3 + 2) = (uint)bVar3;
        puVar26 = puVar25 + 4;
        if (iVar20 != 0x20) break;
        goto LAB_1427ed7b2;
      case 0xc:
        (*(code *)**(undefined8 **)*puVar15)((undefined8 *)*puVar15,param_1[3]);
        plVar5 = (longlong *)*puVar15;
        if (*(char *)((longlong)plVar5 + 0x11) == '\x01') {
          if (((ulonglong)plVar5[1] < 9) && (*(byte *)(plVar5 + 2) < 4)) {
            puVar15 = puVar15 + 1;
          }
          else {
            puVar15 = (ulonglong *)puVar15[1];
          }
          (**(code **)(*plVar5 + 8))(plVar5,puVar15);
        }
        break;
      case 0xd:
        (**(code **)(puVar25 + 4))(local_148,param_1[3]);
switchD_1427ed601_caseD_0:
        uVar14 = local_148 + local_100;
        puVar25 = local_110;
        uVar10 = uVar14;
        if (uVar14 != local_108) goto LAB_1427ed56c;
        if (local_118 != local_120) goto LAB_1427ed501;
        lVar12 = (longlong)*(int *)(param_1 + 0xeea);
        uVar18 = (&DAT_14c949f00)[lVar12 * 0x50];
        if ((ulonglong)uVar18 < 0x20) {
          (&DAT_14c949f00)[lVar12 * 0x50] = uVar18 + 1;
          *(ulonglong **)(&DAT_14c949f08 + (ulonglong)uVar18 * 8 + lVar12 * 0x140) = local_150;
        }
        else {
          FUN_1400020a8(local_150);
        }
        if (((*(longlong *)(param_1[0xee9] + 0xff0) == 0) &&
            ((int)((ulonglong)(param_1[0xee8] - param_1[0xee9]) >> 3) * -0x55555555 < 1)) &&
           (cVar7 = FUN_1468ab202(param_1), cVar7 == '\0')) {
          if ((local_a0 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0();
          }
          return;
        }
        goto LAB_1427ed4bd;
      case 0xe:
        uVar10 = CONCAT71((int7)((ulonglong)
                                 ((longlong)&switchD_1427ed601::switchdataD_149e89f98 +
                                 (longlong)(int)(&switchD_1427ed601::switchdataD_149e89f98)[uVar10])
                                >> 8),0xe);
        goto LAB_1427ededa;
      case 0xf:
        (**(code **)(puVar25 + 4))(puVar15,param_1[3]);
        puVar26 = puVar25 + 4;
        break;
      case 0x10:
        local_c8 = puVar15[1];
        FUN_1468aac2e(param_1,&local_c8);
        break;
      case 0x11:
        uVar10 = puVar15[1];
        if ((longlong)(int)uVar10 != 0) {
          uVar17 = *puVar15;
          lVar19 = 0;
          local_170 = uVar14;
          local_e0 = in_R11;
          local_d8 = puVar25;
          do {
            local_c8 = *(ulonglong *)(uVar17 + 8 + lVar19);
            FUN_1468aac2e(param_1,&local_c8);
            lVar19 = lVar19 + 0x18;
            uVar14 = local_170;
            in_R11 = local_e0;
            puVar24 = local_130;
            puVar26 = local_d8;
          } while ((longlong)(int)uVar10 * 0x18 != lVar19);
        }
      }
      lVar12 = lVar12 + 8;
      puVar25 = puVar26;
    } while (lVar12 != 0x20);
    puVar25 = puVar26 + 4;
    uVar10 = local_148;
  } while( true );
}



// FUNCTION 1427edfe9 FUN_1427edfe9 body=702 status=ok
// SIG undefined FUN_1427edfe9(void)

void FUN_1427edfe9(int param_1,undefined8 *param_2)

{
  longlong lVar1;
  uint *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  bool bVar16;
  uint *puVar17;
  bool bVar18;
  
  lVar12 = (longlong)param_1 * 0x50;
  lVar1 = DAT_14c9640e8 + lVar12;
  lVar11 = (longlong)*(int *)(DAT_14c9640e8 + 0x20 + lVar12);
  if (lVar11 == 0) {
    lVar11 = (longlong)*(int *)(lVar1 + 0x30);
    if (lVar11 == 0) {
      return;
    }
    puVar17 = *(uint **)(lVar1 + 0x28);
    bVar16 = false;
  }
  else {
    lVar12 = *(longlong *)(DAT_14c9640e8 + 0x18 + lVar12);
    lVar15 = 0;
    bVar16 = false;
    do {
      uVar9 = *(uint *)(lVar12 + lVar15);
      if (-1 < (int)uVar9) {
        lVar6 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
        if ((*(uint *)(lVar6 + 8 + (ulonglong)(uVar9 & 0xffff) * 0x18) >> 0x15 & 1) == 0) {
          puVar17 = (uint *)(lVar6 + (ulonglong)(uVar9 & 0xffff) * 0x18 + 8);
          LOCK();
          *puVar17 = *puVar17 & ~DAT_14c75ec9c;
          UNLOCK();
          LOCK();
          *puVar17 = *puVar17 | DAT_14c75ec98;
          UNLOCK();
        }
        else {
          *(undefined4 *)(lVar12 + lVar15) = 0xffffffff;
          bVar16 = true;
        }
      }
      lVar15 = lVar15 + 4;
    } while (lVar11 * 4 != lVar15);
    lVar11 = (longlong)*(int *)(lVar1 + 0x30);
    if (lVar11 == 0) goto joined_r0x0001427ee21e;
    puVar17 = *(uint **)(lVar1 + 0x28);
  }
  puVar2 = puVar17 + lVar11;
  bVar8 = 0;
  do {
    uVar10 = DAT_14c75ec9c;
    uVar9 = *puVar17;
    if (-1 < (int)uVar9) {
      lVar11 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
      if ((*(uint *)(lVar11 + 8 + (ulonglong)(uVar9 & 0xffff) * 0x18) >> 0x15 & 1) == 0) {
        puVar3 = (undefined8 *)(lVar11 + (ulonglong)(uVar9 & 0xffff) * 0x18);
        if ((DAT_14c75ec9c & *(uint *)(puVar3 + 1)) == 0) {
          if ((0 < *(int *)((longlong)puVar3 + 0xc)) && ((*(uint *)(puVar3 + 1) >> 0x17 & 1) == 0))
          {
            do {
              uVar9 = *(uint *)(puVar3 + 1);
              if ((uVar9 >> 0x17 & 1) != 0) goto LAB_1427ee173;
              LOCK();
              bVar18 = uVar9 == *(uint *)(puVar3 + 1);
              if (bVar18) {
                *(uint *)(puVar3 + 1) = uVar9 | 0x800000;
              }
              uVar9 = DAT_14c75ec9c;
              UNLOCK();
            } while (!bVar18);
            uVar13 = (ulonglong)(*(uint *)((longlong)puVar3 + 0xc) & 0xffff);
            lVar11 = *(longlong *)
                      (DAT_14c9647c8 + (ulonglong)(*(uint *)((longlong)puVar3 + 0xc) >> 0x10) * 8);
            if (((DAT_14c75ec9c & *(uint *)(lVar11 + 8 + uVar13 * 0x18)) != 0) &&
               (lVar11 = lVar11 + uVar13 * 0x18, (*(uint *)(lVar11 + 8) & DAT_14c75ec9c) != 0)) {
              uVar14 = ~DAT_14c75ec9c;
              uVar10 = *(uint *)(lVar11 + 8);
              do {
                LOCK();
                uVar4 = *(uint *)(lVar11 + 8);
                bVar18 = uVar10 == uVar4;
                if (bVar18) {
                  *(uint *)(lVar11 + 8) = uVar10 & uVar14;
                  uVar4 = uVar10;
                }
                uVar10 = uVar4;
                UNLOCK();
              } while (!bVar18);
              LOCK();
              *(uint *)(lVar11 + 8) = *(uint *)(lVar11 + 8) | DAT_14c75ec98;
              UNLOCK();
              if ((uVar10 & uVar9) != 0) {
                uVar9 = *(uint *)(lVar11 + 0xc);
                goto LAB_1427ee15d;
              }
            }
          }
        }
        else if ((*(uint *)(puVar3 + 1) & DAT_14c75ec9c) != 0) {
          uVar14 = ~DAT_14c75ec9c;
          uVar9 = *(uint *)(puVar3 + 1);
          do {
            LOCK();
            uVar4 = *(uint *)(puVar3 + 1);
            bVar18 = uVar9 == uVar4;
            if (bVar18) {
              *(uint *)(puVar3 + 1) = uVar9 & uVar14;
              uVar4 = uVar9;
            }
            uVar9 = uVar4;
            UNLOCK();
          } while (!bVar18);
          LOCK();
          *(uint *)(puVar3 + 1) = *(uint *)(puVar3 + 1) | DAT_14c75ec98;
          UNLOCK();
          if ((uVar9 & uVar10) != 0) {
            plVar7 = (longlong *)*param_2;
            *(undefined8 *)*plVar7 = *puVar3;
            lVar11 = *plVar7;
            *plVar7 = lVar11 + 8;
            if (lVar11 + 8 == plVar7[1] + 0xf80) {
              FUN_141715f94();
            }
            uVar9 = *(uint *)((longlong)puVar3 + 0xc);
            if ((int)uVar9 < 0) {
LAB_1427ee15d:
              FUN_1427edfe9(~uVar9,param_2);
            }
          }
        }
      }
      else {
        *puVar17 = 0xffffffff;
        bVar8 = 1;
      }
    }
LAB_1427ee173:
    puVar17 = puVar17 + 1;
  } while (puVar17 != puVar2);
  bVar16 = (bool)(bVar8 | bVar16);
joined_r0x0001427ee21e:
  if (bVar16) {
    iVar5 = *(int *)(lVar1 + 0x10);
    if ((longlong)iVar5 != 0) {
      lVar11 = *(longlong *)(lVar1 + 8);
      lVar12 = 0;
      do {
        uVar9 = *(uint *)(lVar11 + lVar12);
        plVar7 = (longlong *)*param_2;
        *(undefined8 *)*plVar7 =
             *(undefined8 *)
              (*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8) +
              (ulonglong)(uVar9 & 0xffff) * 0x18);
        lVar15 = *plVar7;
        *plVar7 = lVar15 + 8;
        if (lVar15 + 8 == plVar7[1] + 0xf80) {
          FUN_141715f94();
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)iVar5 * 4 != lVar12);
    }
    *(undefined1 *)(lVar1 + 0x48) = 1;
    DAT_14c96410c = 1;
  }
  return;
}



// FUNCTION 1427ee2a8 FUN_1427ee2a8 body=2481 status=ok
// SIG undefined FUN_1427ee2a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427ee2a8(undefined8 *param_1)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined1 auVar6 [16];
  char cVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong *puVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ushort *puVar21;
  ushort *puVar22;
  longlong lVar23;
  ulonglong uVar24;
  uint *puVar25;
  ulonglong uVar26;
  longlong lVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar35 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar36 [16];
  undefined1 auStack_178 [40];
  undefined8 *local_150;
  uint *local_148;
  undefined8 *local_140;
  ulonglong *local_138;
  ulonglong local_130;
  ulonglong local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  ulonglong *local_110;
  ulonglong *local_108;
  ulonglong local_100;
  ulonglong local_f8;
  ushort *local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  ulonglong local_d8;
  int local_cc;
  ulonglong local_c8;
  byte local_c0 [4];
  uint local_bc;
  byte local_b8;
  uint local_b4;
  byte local_b0;
  uint local_ac;
  byte local_a8;
  uint local_a4;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_118 = param_1 + 0xee8;
  *(undefined8 *)*param_1 = 0;
  auVar6 = _DAT_149931e80;
  local_140 = param_1 + 0xe81;
  puVar25 = (uint *)(param_1 + 0xe18);
  local_e0 = param_1 + 0xe19;
  local_150 = param_1 + 8;
  local_e8 = param_1 + 0x39;
  local_120 = param_1 + 0x82;
  auVar35 = pmovsxbq(unaff_XMM7,0x800);
  auVar36 = pmovsxbq(unaff_XMM8,0x100);
  local_148 = puVar25;
LAB_1427ee388:
  local_108 = (ulonglong *)FUN_141716706(local_118,&local_cc);
  local_110 = local_108 + (longlong)local_cc * 3;
  local_138 = local_108;
LAB_1427ee3cc:
  uVar16 = *local_108;
  uVar14 = local_108[1];
  puVar1 = (uint *)((longlong)local_108 + 0x14);
  local_f8 = (ulonglong)*puVar1;
  puVar11 = local_108 + 2;
  local_108 = local_108 + 3;
  local_100 = (int)*puVar11 * *puVar1 + uVar14;
  uVar26 = (ulonglong)((uint)uVar16 & 1);
  local_f0 = (ushort *)(uVar16 & 0xfffffffffffffffe);
  puVar21 = local_f0;
  uVar16 = uVar14;
  local_128 = uVar26;
LAB_1427ee42e:
  do {
    local_130 = uVar16;
    local_c0[0] = (byte)*puVar21 & 0x1f;
    local_bc = (uint)(*puVar21 >> 5);
    local_b8 = (byte)puVar21[1] & 0x1f;
    local_b4 = (uint)(puVar21[1] >> 5);
    local_b0 = (byte)puVar21[2] & 0x1f;
    local_ac = (uint)(puVar21[2] >> 5);
    local_a8 = (byte)puVar21[3] & 0x1f;
    local_a4 = (uint)(puVar21[3] >> 5);
    lVar9 = 0;
    do {
      uVar16 = (ulonglong)local_c0[lVar9];
      if (0x11 < uVar16) {
LAB_1427eeb51:
        FUN_1427e893d(uVar16);
        goto switchD_1427ee4c3_caseD_0;
      }
      puVar11 = (ulonglong *)(uVar14 + (ulonglong)*(uint *)((longlong)&local_bc + lVar9) * 8);
      puVar22 = puVar21;
      switch(uVar16) {
      case 0:
        goto switchD_1427ee4c3_caseD_0;
      case 1:
        uVar14 = uVar14 + (ulonglong)(*(uint *)((longlong)&local_bc + lVar9) * 0x800 + 0x800) * 8;
        break;
      case 2:
        uVar15 = *(uint *)(param_1 + 0x80);
        iVar17 = uVar15 + 1;
        *(int *)(param_1 + 0x80) = iVar17;
        param_1[(ulonglong)uVar15 + 0x81] = puVar11;
        if (iVar17 == 0x20) {
          FUN_1468acd84(local_150);
        }
        break;
      case 3:
        uVar15 = *(uint *)(param_1 + 0x10);
        iVar17 = uVar15 + 1;
        *(int *)(param_1 + 0x10) = iVar17;
        param_1[(ulonglong)uVar15 + 0x11] = puVar11;
        if (iVar17 == 0x20) {
          FUN_1468ad5d2(local_150);
        }
        break;
      case 4:
        uVar16 = *(ulonglong *)(puVar21 + 4);
        uVar13 = puVar11[1];
        uVar24 = *puVar11;
        uVar19 = (ulonglong)*(uint *)(param_1 + 0xe80);
        iVar17 = *(uint *)(param_1 + 0xe80) + 1;
        *(int *)(param_1 + 0xe80) = iVar17;
        local_140[uVar19 * 3] = uVar16 & 0xfffffffffffffffe | uVar26;
        local_140[uVar19 * 3 + 1] = uVar24;
        *(int *)(local_140 + uVar19 * 3 + 2) = (int)uVar13;
        goto LAB_1427ee656;
      case 5:
        local_d8 = local_d8 & 0xffffffff00000000 | (ulonglong)*(uint *)(puVar21 + 4);
        uVar15 = *(uint *)(param_1 + 0x38);
        *(uint *)(param_1 + 0x38) = uVar15 + 1;
        local_e8[(ulonglong)uVar15 * 2] = puVar11;
        local_e8[(ulonglong)uVar15 * 2 + 1] = local_d8;
        puVar22 = puVar21 + 4;
        if (uVar15 + 1 == 0x20) {
          FUN_1468adc2a(local_150);
        }
        break;
      case 6:
        uVar16 = *(ulonglong *)(puVar21 + 4);
        uVar24 = puVar11[1];
        iVar17 = *(int *)((longlong)puVar11 + 0x34);
        uVar4 = *(undefined4 *)((uVar16 & 0xfffffffffffffffe) - 8);
        uVar13 = (ulonglong)*puVar25;
        uVar15 = *puVar25 + 1;
        *puVar25 = uVar15;
        local_e0[uVar13 * 3] = uVar16 & 0xfffffffffffffffe | uVar26;
        local_e0[uVar13 * 3 + 1] = puVar11;
        *(int *)(local_e0 + uVar13 * 3 + 2) = (int)uVar24 - iVar17;
        *(undefined4 *)((longlong)local_e0 + uVar13 * 0x18 + 0x14) = uVar4;
        puVar22 = puVar21 + 4;
        if (uVar15 == 0x20) {
          FUN_14002fe56(puVar25);
        }
        break;
      case 7:
        if (((*(int *)((longlong)puVar11 + 0xc) != 0) &&
            (uVar15 = (uint)puVar11[1], -1 < (int)uVar15)) &&
           (((int)uVar15 < DAT_14c9647dc &&
            ((puVar12 = (ulonglong *)
                        ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8)),
             puVar12 != (ulonglong *)0x0 && ((int)puVar12[2] == *(int *)((longlong)puVar11 + 0xc))))
            ))) {
          uVar16 = *puVar12;
          local_c8 = uVar16;
          FUN_1468ad97e(param_1,&local_c8,1);
          if ((uVar16 != 0) && (local_c8 == 0)) {
            *puVar11 = 0;
            puVar11[1] = 0;
          }
        }
        break;
      case 8:
        uVar16 = puVar11[1];
        if ((longlong)(int)uVar16 != 0) {
          uVar24 = *puVar11;
          lVar27 = uVar24 + 0xc;
          lVar23 = 0;
          do {
            iVar17 = *(int *)(lVar27 + lVar23);
            if ((((iVar17 != 0) && (uVar15 = *(uint *)(uVar24 + 8 + lVar23), -1 < (int)uVar15)) &&
                ((int)uVar15 < DAT_14c9647dc)) &&
               ((puVar11 = (ulonglong *)
                           ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8)),
                puVar11 != (ulonglong *)0x0 && ((int)puVar11[2] == iVar17)))) {
              uVar13 = *puVar11;
              local_c8 = uVar13;
              FUN_1468ad97e(param_1,&local_c8,1);
              uVar26 = local_128;
              if ((uVar13 != 0) && (local_c8 == 0)) {
                lVar2 = lVar27 + lVar23;
                *(undefined8 *)(lVar2 + -0xc) = 0;
                *(undefined8 *)(lVar2 + -4) = 0;
              }
            }
            lVar23 = lVar23 + 0x20;
            puVar25 = local_148;
          } while ((longlong)(int)uVar16 * 0x20 != lVar23);
        }
        break;
      case 9:
        uVar15 = (uint)puVar11[1];
        uVar16 = (ulonglong)(int)uVar15;
        if (uVar16 != 0) {
          uVar13 = *puVar11;
          uVar24 = ((longlong)uVar13 >> 0x18) + (longlong)puVar11;
          if ((uVar13 & 1) == 0) {
            uVar24 = uVar13;
          }
          uVar10 = *(uint *)(param_1 + 0x80);
          uVar8 = 0x20 - uVar10;
          if (uVar15 < uVar8) {
            lVar23 = uVar16 * 8 + uVar24;
LAB_1427eea2b:
            uVar16 = (lVar23 - uVar24) - 8;
            auVar29._8_4_ = (int)uVar16;
            auVar29._0_8_ = uVar16;
            auVar29._12_4_ = (int)(uVar16 >> 0x20);
            auVar30._0_8_ = uVar16 >> 3;
            auVar30._8_8_ = auVar29._8_8_ >> 3;
            uVar13 = 0;
            do {
              auVar32._8_4_ = (int)uVar24;
              auVar32._0_8_ = uVar24;
              auVar32._12_4_ = (int)(uVar24 >> 0x20);
              if ((bool)(~(SUB168(auVar30 | auVar6,0) < (longlong)(uVar13 ^ auVar6._0_8_)) & 1)) {
                local_120[(ulonglong)uVar10 + (uVar13 - 1)] = uVar24 + auVar35._0_8_;
              }
              auVar34._8_4_ = (int)uVar13;
              auVar34._0_8_ = uVar13;
              auVar34._12_4_ = (int)(uVar13 >> 0x20);
              if ((longlong)((auVar34._8_8_ | auVar36._8_8_) ^ auVar6._8_8_) <=
                  SUB168(auVar30 | auVar6,8)) {
                local_120[uVar10 + uVar13] = auVar32._8_8_ + auVar35._8_8_;
              }
              uVar13 = uVar13 + 2;
              uVar24 = uVar24 + 0x10;
            } while (((uVar16 >> 3) + 2 & 0xfffffffffffffffe) != uVar13);
            uVar10 = *(uint *)(param_1 + 0x80);
          }
          else {
            do {
              uVar10 = *(uint *)(param_1 + 0x80);
              if (uVar8 != 0) {
                uVar13 = (longlong)(int)uVar8 + 0x1fffffffffffffff;
                uVar18 = uVar13 & 0x1fffffffffffffff;
                auVar28._8_4_ = (int)uVar18;
                auVar28._0_8_ = uVar18;
                auVar28._12_4_ = (int)(uVar18 >> 0x20);
                uVar20 = 0;
                uVar19 = uVar24;
                do {
                  auVar31._8_4_ = (int)uVar19;
                  auVar31._0_8_ = uVar19;
                  auVar31._12_4_ = (int)(uVar19 >> 0x20);
                  if ((bool)(~(SUB168(auVar28 | auVar6,0) < (longlong)(uVar20 ^ auVar6._0_8_)) & 1))
                  {
                    local_120[(ulonglong)uVar10 + (uVar20 - 1)] = uVar19 + auVar35._0_8_;
                  }
                  auVar33._8_4_ = (int)uVar20;
                  auVar33._0_8_ = uVar20;
                  auVar33._12_4_ = (int)(uVar20 >> 0x20);
                  if ((longlong)((auVar33._8_8_ | auVar36._8_8_) ^ auVar6._8_8_) <=
                      SUB168(auVar28 | auVar6,8)) {
                    local_120[uVar10 + uVar20] = auVar31._8_8_ + auVar35._8_8_;
                  }
                  uVar20 = uVar20 + 2;
                  uVar19 = uVar19 + 0x10;
                } while ((uVar18 - ((uint)uVar13 & 1)) + 2 != uVar20);
                uVar10 = *(uint *)(param_1 + 0x80);
              }
              uVar15 = (int)uVar16 - uVar8;
              uVar16 = (ulonglong)uVar15;
              uVar24 = uVar24 + (longlong)(int)uVar8 * 8;
              *(uint *)(param_1 + 0x80) = uVar10 + uVar8;
              FUN_1468acd84(local_150);
              uVar8 = 0x20;
            } while (0x1f < uVar15);
            uVar10 = *(uint *)(param_1 + 0x80);
            if (uVar15 != 0) {
              lVar23 = (ulonglong)uVar15 * 8 + uVar24;
              goto LAB_1427eea2b;
            }
            uVar15 = 0;
          }
          *(uint *)(param_1 + 0x80) = uVar15 + uVar10;
          puVar25 = local_148;
        }
        break;
      case 10:
        uVar16 = *(ulonglong *)(puVar21 + 4);
        uVar13 = puVar11[1];
        uVar24 = *puVar11;
        uVar19 = ((longlong)uVar24 >> 0x18) + (longlong)puVar11;
        if ((uVar24 & 1) == 0) {
          uVar19 = uVar24;
        }
        uVar24 = (ulonglong)*(uint *)(param_1 + 0xe80);
        iVar17 = *(uint *)(param_1 + 0xe80) + 1;
        *(int *)(param_1 + 0xe80) = iVar17;
        local_140[uVar24 * 3] = uVar16 & 0xfffffffffffffffe | uVar26;
        local_140[uVar24 * 3 + 1] = uVar19;
        *(int *)(local_140 + uVar24 * 3 + 2) = (int)uVar13;
LAB_1427ee656:
        puVar22 = puVar21 + 4;
        if (iVar17 == 0x20) {
LAB_1427ee660:
          FUN_144710c38(puVar25);
          puVar22 = puVar21 + 4;
        }
        break;
      case 0xb:
        uVar16 = *(ulonglong *)(puVar21 + 4);
        bVar3 = *(byte *)((longlong)puVar11 +
                         (ulonglong)*(uint *)((uVar16 & 0xfffffffffffffffe) - 8));
        uVar24 = (ulonglong)*(uint *)(param_1 + 0xe80);
        iVar17 = *(uint *)(param_1 + 0xe80) + 1;
        *(int *)(param_1 + 0xe80) = iVar17;
        local_140[uVar24 * 3] = uVar16 & 0xfffffffffffffffe | uVar26;
        local_140[uVar24 * 3 + 1] = puVar11;
        *(uint *)(local_140 + uVar24 * 3 + 2) = (uint)bVar3;
        puVar22 = puVar21 + 4;
        if (iVar17 != 0x20) break;
        goto LAB_1427ee660;
      case 0xc:
        (*(code *)**(undefined8 **)*puVar11)((undefined8 *)*puVar11,param_1[3]);
        plVar5 = (longlong *)*puVar11;
        if (*(char *)((longlong)plVar5 + 0x11) == '\x01') {
          if (((ulonglong)plVar5[1] < 9) && (*(byte *)(plVar5 + 2) < 4)) {
            puVar11 = puVar11 + 1;
          }
          else {
            puVar11 = (ulonglong *)puVar11[1];
          }
          (**(code **)(*plVar5 + 8))(plVar5,puVar11,param_1[3]);
        }
        break;
      case 0xd:
        (**(code **)(puVar21 + 4))(local_130,param_1[3]);
switchD_1427ee4c3_caseD_0:
        uVar14 = local_130 + local_f8;
        puVar21 = local_f0;
        uVar16 = uVar14;
        if (uVar14 != local_100) goto LAB_1427ee42e;
        if (local_108 != local_110) goto LAB_1427ee3cc;
        lVar9 = (longlong)*(int *)(param_1 + 0xeea);
        uVar15 = (&DAT_14c949f00)[lVar9 * 0x50];
        if ((ulonglong)uVar15 < 0x20) {
          (&DAT_14c949f00)[lVar9 * 0x50] = uVar15 + 1;
          *(ulonglong **)(&DAT_14c949f08 + (ulonglong)uVar15 * 8 + lVar9 * 0x140) = local_138;
        }
        else {
          FUN_1400020a8(local_138);
        }
        if (((*(longlong *)(param_1[0xee9] + 0xff0) == 0) &&
            ((int)((ulonglong)(param_1[0xee8] - param_1[0xee9]) >> 3) * -0x55555555 < 1)) &&
           (cVar7 = FUN_1468addbe(param_1), cVar7 == '\0')) {
          if ((local_a0 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0();
          }
          return;
        }
        goto LAB_1427ee388;
      case 0xe:
        uVar16 = CONCAT71((int7)((ulonglong)
                                 ((longlong)&switchD_1427ee4c3::switchdataD_149e89fe0 +
                                 (longlong)(int)(&switchD_1427ee4c3::switchdataD_149e89fe0)[uVar16])
                                >> 8),0xe);
        goto LAB_1427eeb51;
      case 0xf:
        (**(code **)(puVar21 + 4))(puVar11,param_1[3]);
        puVar22 = puVar21 + 4;
        break;
      case 0x10:
        local_c8 = puVar11[1];
        FUN_1468ad97e(param_1,&local_c8,1);
        break;
      case 0x11:
        uVar16 = puVar11[1];
        if ((longlong)(int)uVar16 != 0) {
          uVar24 = *puVar11;
          lVar23 = 0;
          do {
            local_c8 = *(ulonglong *)(uVar24 + 8 + lVar23);
            FUN_1468ad97e(param_1,&local_c8,1);
            lVar23 = lVar23 + 0x18;
            puVar25 = local_148;
            uVar26 = local_128;
          } while ((longlong)(int)uVar16 * 0x18 != lVar23);
        }
      }
      lVar9 = lVar9 + 8;
      puVar21 = puVar22;
    } while (lVar9 != 0x20);
    puVar21 = puVar22 + 4;
    uVar16 = local_130;
  } while( true );
}



// FUNCTION 1427eec5a FUN_1427eec5a body=3303 status=ok
// SIG undefined FUN_1427eec5a(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427eec5a(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined4 *puVar3;
  byte bVar4;
  int iVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  char cVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  LARGE_INTEGER LVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  ulonglong uVar18;
  ulonglong *puVar19;
  ulonglong *puVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ushort *puVar30;
  ushort *puVar31;
  uint uVar32;
  longlong lVar33;
  longlong lVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 unaff_XMM9 [16];
  undefined1 auVar42 [16];
  undefined1 unaff_XMM10 [16];
  undefined1 auVar43 [16];
  longlong *local_7910;
  ulonglong local_78d0;
  ulonglong local_78c8;
  undefined **local_78c0;
  undefined8 local_78b8;
  undefined2 local_78b0;
  longlong *local_7880 [3];
  undefined8 local_7868;
  undefined1 local_7840 [64];
  uint local_7800;
  undefined8 auStack_77f8 [39];
  uint local_76c0;
  ulonglong auStack_76b8 [71];
  uint local_7480;
  longlong alStack_7478 [2223];
  undefined1 local_2f00 [960];
  uint local_2b40;
  longlong alStack_2b38 [1135];
  uint local_7c0 [2];
  ulonglong auStack_7b8 [2];
  int aiStack_7a8 [202];
  uint local_480;
  ulonglong auStack_478 [2];
  uint auStack_468 [224];
  LARGE_INTEGER local_e8;
  uint uStack_e0;
  uint uStack_dc;
  byte local_d8;
  uint local_d4;
  byte local_d0;
  uint local_cc;
  ulonglong local_c8;
  
  local_c8 = DAT_14c707940 ^ (ulonglong)&local_78b8;
  *(undefined2 *)(param_1 + 0xf) = 0x100;
  local_78b8 = 0;
  local_78b0 = 1;
  local_78c0 = &PTR_FUN_149e89110;
  FUN_1468af12c(local_7880,param_1,&local_78c0);
  auVar10 = _DAT_149931e80;
  auVar42 = pmovsxbq(unaff_XMM9,0x800);
  auVar43 = pmovsxbq(unaff_XMM10,0x100);
LAB_1427eed3e:
  *param_1 = DAT_14c948580;
  iVar13 = *(int *)(param_1 + 8);
  if ((longlong)iVar13 != 0) {
    lVar14 = param_1[7];
    lVar22 = 0;
    do {
      uVar26 = (ulonglong)local_7480;
      local_7480 = local_7480 + 1;
      alStack_7478[uVar26] = *(longlong *)(lVar14 + lVar22);
      if (local_7480 == 0x20) {
        FUN_1468af948(local_7840);
      }
      lVar22 = lVar22 + 8;
    } while ((longlong)iVar13 * 8 != lVar22);
  }
  local_7910 = (longlong *)param_1[1];
  uVar26 = (ulonglong)*(uint *)(param_1 + 2);
  do {
    if ((int)uVar26 != 0) {
      plVar17 = local_7910;
      do {
        lVar14 = *plVar17;
        lVar22 = *(longlong *)(lVar14 + 0x10);
        lVar23 = *(longlong *)(lVar14 + 0x20);
        uVar24 = *(ulonglong *)(lVar22 + 0x1e8);
        *local_7880[0] = lVar14;
        uVar18 = (ulonglong)local_2b40;
        local_2b40 = local_2b40 + 1;
        alStack_2b38[uVar18] = lVar22;
        if (local_2b40 == 0x20) {
          FUN_1468afd28(local_2f00);
        }
        uVar32 = local_2b40 + 1;
        alStack_2b38[local_2b40] = lVar23;
        local_2b40 = uVar32;
        if (uVar32 == 0x20) {
          FUN_1468afd28(local_2f00);
        }
        if (1 < uVar24) {
          uVar18 = (ulonglong)((uint)uVar24 & 1);
          puVar30 = (ushort *)(uVar24 & 0xfffffffffffffffe);
          lVar22 = lVar14;
          do {
            uVar9 = CONCAT71(local_e8.QuadPart._1_7_,(char)*puVar30);
            local_e8.s.HighPart._2_2_ = 0;
            local_e8.QuadPart._0_6_ = CONCAT24(*puVar30 >> 5,(int)uVar9) & 0xffffffffff1f;
            uStack_e0 = CONCAT31(uStack_e0._1_3_,(char)puVar30[1]) & 0xffffff1f;
            uStack_dc = (uint)(puVar30[1] >> 5);
            local_d8 = (byte)puVar30[2] & 0x1f;
            local_d4 = (uint)(puVar30[2] >> 5);
            local_d0 = (byte)puVar30[3] & 0x1f;
            local_cc = (uint)(puVar30[3] >> 5);
            lVar23 = 0;
            do {
              bVar4 = *(byte *)((longlong)&local_e8 + lVar23);
              if (0x11 < bVar4) {
                FUN_140030042(bVar4,lVar14);
                goto switchD_1427eeeef_caseD_0;
              }
              uVar32 = *(uint *)((longlong)&local_e8 + lVar23 + 4);
              puVar19 = (ulonglong *)(lVar22 + (ulonglong)uVar32 * 8);
              puVar31 = puVar30;
              uVar12 = local_480;
              switch(bVar4) {
              case 0:
                goto switchD_1427eeeef_caseD_0;
              case 1:
                lVar22 = lVar22 + (ulonglong)(uVar32 * 0x800 + 0x800) * 8;
                break;
              case 2:
                uVar24 = (ulonglong)local_7480;
                local_7480 = local_7480 + 1;
                alStack_7478[uVar24] = (longlong)puVar19;
                if (local_7480 == 0x20) {
                  FUN_1468af948(local_7840);
                  uVar12 = local_480;
                }
                break;
              case 3:
                uVar24 = (ulonglong)local_7800;
                local_7800 = local_7800 + 1;
                auStack_77f8[uVar24] = puVar19;
                if (local_7800 == 0x20) {
                  FUN_1468b0196(local_7840);
                  uVar12 = local_480;
                }
                break;
              case 4:
                uVar25 = puVar19[1];
                uVar24 = *puVar19;
                uVar21 = (ulonglong)local_480;
                auStack_478[uVar21 * 3] = *(ulonglong *)(puVar30 + 4) & 0xfffffffffffffffe | uVar18;
                auStack_478[uVar21 * 3 + 1] = uVar24;
                auStack_468[uVar21 * 6] = (uint)uVar25;
                goto LAB_1427ef09a;
              case 5:
                local_78d0 = local_78d0 & 0xffffffff00000000 | (ulonglong)*(uint *)(puVar30 + 4);
                uVar24 = (ulonglong)local_76c0;
                local_76c0 = local_76c0 + 1;
                auStack_76b8[uVar24 * 2] = (ulonglong)puVar19;
                auStack_76b8[uVar24 * 2 + 1] = local_78d0;
                puVar31 = puVar30 + 4;
                if (local_76c0 == 0x20) {
                  FUN_1468b07ee(local_7840);
                  uVar12 = local_480;
                }
                break;
              case 6:
                uVar24 = puVar19[1];
                iVar13 = *(int *)((longlong)puVar19 + 0x34);
                iVar5 = *(int *)((*(ulonglong *)(puVar30 + 4) & 0xfffffffffffffffe) - 8);
                uVar25 = (ulonglong)local_7c0[0];
                local_7c0[0] = local_7c0[0] + 1;
                auStack_7b8[uVar25 * 3] = *(ulonglong *)(puVar30 + 4) & 0xfffffffffffffffe | uVar18;
                auStack_7b8[uVar25 * 3 + 1] = (ulonglong)puVar19;
                aiStack_7a8[uVar25 * 6] = (int)uVar24 - iVar13;
                aiStack_7a8[uVar25 * 6 + 1] = iVar5;
                puVar31 = puVar30 + 4;
                uVar12 = local_480;
                if (local_7c0[0] == 0x20) {
                  FUN_14002fe56(local_7c0);
                  uVar12 = local_480;
                }
                break;
              case 7:
                if (((*(int *)((longlong)puVar19 + 0xc) != 0) &&
                    (uVar32 = (uint)puVar19[1], -1 < (int)uVar32)) &&
                   (((int)uVar32 < DAT_14c9647dc &&
                    ((puVar20 = (ulonglong *)
                                ((ulonglong)((uVar32 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar32 >> 0x10) * 8)),
                     puVar20 != (ulonglong *)0x0 &&
                     ((int)puVar20[2] == *(int *)((longlong)puVar19 + 0xc))))))) {
                  uVar24 = *puVar20;
                  local_78c8 = uVar24;
                  FUN_1468b0542(local_7880,&local_78c8,1);
                  uVar12 = local_480;
                  if ((uVar24 != 0) && (local_78c8 == 0)) {
                    *puVar19 = 0;
                    puVar19[1] = 0;
                  }
                }
                break;
              case 8:
                uVar24 = puVar19[1];
                if ((longlong)(int)uVar24 != 0) {
                  uVar25 = *puVar19;
                  lVar34 = uVar25 + 0xc;
                  lVar33 = 0;
                  do {
                    iVar13 = *(int *)(lVar34 + lVar33);
                    if ((((iVar13 != 0) &&
                         (uVar32 = *(uint *)(uVar25 + 8 + lVar33), -1 < (int)uVar32)) &&
                        ((int)uVar32 < DAT_14c9647dc)) &&
                       ((puVar19 = (ulonglong *)
                                   ((ulonglong)((uVar32 & 0xffff) * 0x18) +
                                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar32 >> 0x10) * 8)),
                        puVar19 != (ulonglong *)0x0 && ((int)puVar19[2] == iVar13)))) {
                      uVar21 = *puVar19;
                      local_78c8 = uVar21;
                      FUN_1468b0542(local_7880,&local_78c8,1);
                      if ((uVar21 != 0) && (local_78c8 == 0)) {
                        lVar2 = lVar34 + lVar33;
                        *(undefined8 *)(lVar2 + -0xc) = 0;
                        *(undefined8 *)(lVar2 + -4) = 0;
                      }
                    }
                    lVar33 = lVar33 + 0x20;
                    uVar12 = local_480;
                  } while ((longlong)(int)uVar24 * 0x20 != lVar33);
                }
                break;
              case 9:
                uVar32 = (uint)puVar19[1];
                uVar24 = (ulonglong)(int)uVar32;
                if (uVar24 != 0) {
                  uVar21 = *puVar19;
                  uVar25 = ((longlong)uVar21 >> 0x18) + (longlong)puVar19;
                  if ((uVar21 & 1) == 0) {
                    uVar25 = uVar21;
                  }
                  uVar12 = 0x20 - local_7480;
                  if (uVar32 < uVar12) {
                    lVar34 = uVar25 + uVar24 * 8;
LAB_1427ef4d3:
                    uVar24 = (lVar34 - uVar25) - 8;
                    auVar36._8_4_ = (int)uVar24;
                    auVar36._0_8_ = uVar24;
                    auVar36._12_4_ = (int)(uVar24 >> 0x20);
                    auVar37._0_8_ = uVar24 >> 3;
                    auVar37._8_8_ = auVar36._8_8_ >> 3;
                    uVar21 = 0;
                    do {
                      auVar39._8_4_ = (int)uVar25;
                      auVar39._0_8_ = uVar25;
                      auVar39._12_4_ = (int)(uVar25 >> 0x20);
                      if ((bool)(~(SUB168(auVar37 | auVar10,0) < (longlong)(uVar21 ^ auVar10._0_8_))
                                & 1)) {
                        alStack_7478[local_7480 + uVar21] = uVar25 + auVar42._0_8_;
                      }
                      auVar41._8_4_ = (int)uVar21;
                      auVar41._0_8_ = uVar21;
                      auVar41._12_4_ = (int)(uVar21 >> 0x20);
                      if ((longlong)((auVar41._8_8_ | auVar43._8_8_) ^ auVar10._8_8_) <=
                          SUB168(auVar37 | auVar10,8)) {
                        alStack_7478[(ulonglong)local_7480 + uVar21 + 1] =
                             auVar39._8_8_ + auVar42._8_8_;
                      }
                      uVar21 = uVar21 + 2;
                      uVar25 = uVar25 + 0x10;
                    } while (((uVar24 >> 3) + 2 & 0xfffffffffffffffe) != uVar21);
                  }
                  else {
                    do {
                      if (uVar12 != 0) {
                        uVar21 = (longlong)(int)uVar12 + 0x1fffffffffffffff;
                        uVar27 = uVar21 & 0x1fffffffffffffff;
                        auVar35._8_4_ = (int)uVar27;
                        auVar35._0_8_ = uVar27;
                        auVar35._12_4_ = (int)(uVar27 >> 0x20);
                        uVar29 = 0;
                        uVar28 = uVar25;
                        do {
                          auVar38._8_4_ = (int)uVar28;
                          auVar38._0_8_ = uVar28;
                          auVar38._12_4_ = (int)(uVar28 >> 0x20);
                          if ((bool)(~(SUB168(auVar35 | auVar10,0) <
                                      (longlong)(uVar29 ^ auVar10._0_8_)) & 1)) {
                            alStack_7478[local_7480 + uVar29] = uVar28 + auVar42._0_8_;
                          }
                          auVar40._8_4_ = (int)uVar29;
                          auVar40._0_8_ = uVar29;
                          auVar40._12_4_ = (int)(uVar29 >> 0x20);
                          if ((longlong)((auVar40._8_8_ | auVar43._8_8_) ^ auVar10._8_8_) <=
                              SUB168(auVar35 | auVar10,8)) {
                            alStack_7478[(ulonglong)local_7480 + uVar29 + 1] =
                                 auVar38._8_8_ + auVar42._8_8_;
                          }
                          uVar29 = uVar29 + 2;
                          uVar28 = uVar28 + 0x10;
                        } while ((uVar27 - ((uint)uVar21 & 1)) + 2 != uVar29);
                      }
                      uVar32 = (int)uVar24 - uVar12;
                      uVar24 = (ulonglong)uVar32;
                      uVar25 = uVar25 + (longlong)(int)uVar12 * 8;
                      local_7480 = local_7480 + uVar12;
                      FUN_1468af948(local_7840);
                      uVar12 = 0x20;
                    } while (0x1f < uVar32);
                    if (uVar32 != 0) {
                      lVar34 = uVar25 + (ulonglong)uVar32 * 8;
                      goto LAB_1427ef4d3;
                    }
                    uVar32 = 0;
                  }
                  local_7480 = uVar32 + local_7480;
                  uVar12 = local_480;
                }
                break;
              case 10:
                uVar25 = puVar19[1];
                uVar24 = *puVar19;
                uVar21 = ((longlong)uVar24 >> 0x18) + (longlong)puVar19;
                if ((uVar24 & 1) == 0) {
                  uVar21 = uVar24;
                }
                uVar24 = (ulonglong)local_480;
                auStack_478[uVar24 * 3] = *(ulonglong *)(puVar30 + 4) & 0xfffffffffffffffe | uVar18;
                auStack_478[uVar24 * 3 + 1] = uVar21;
                auStack_468[uVar24 * 6] = (uint)uVar25;
LAB_1427ef09a:
                puVar31 = puVar30 + 4;
                uVar12 = local_480 + 1;
                if (local_480 + 1 == 0x20) {
LAB_1427ef0a4:
                  local_480 = local_480 + 1;
                  FUN_144710c38(local_7c0);
                  puVar31 = puVar30 + 4;
                  uVar12 = local_480;
                }
                break;
              case 0xb:
                bVar4 = *(byte *)((longlong)puVar19 +
                                 (ulonglong)
                                 *(uint *)((*(ulonglong *)(puVar30 + 4) & 0xfffffffffffffffe) - 8));
                uVar24 = (ulonglong)local_480;
                auStack_478[uVar24 * 3] = *(ulonglong *)(puVar30 + 4) & 0xfffffffffffffffe | uVar18;
                auStack_478[uVar24 * 3 + 1] = (ulonglong)puVar19;
                auStack_468[uVar24 * 6] = (uint)bVar4;
                puVar31 = puVar30 + 4;
                uVar12 = local_480 + 1;
                if (local_480 + 1 != 0x20) break;
                goto LAB_1427ef0a4;
              case 0xc:
                (*(code *)**(undefined8 **)*puVar19)();
                plVar6 = (longlong *)*puVar19;
                uVar12 = local_480;
                if (*(char *)((longlong)plVar6 + 0x11) == '\x01') {
                  if (((ulonglong)plVar6[1] < 9) && (*(byte *)(plVar6 + 2) < 4)) {
                    puVar19 = puVar19 + 1;
                  }
                  else {
                    puVar19 = (ulonglong *)puVar19[1];
                  }
                  (**(code **)(*plVar6 + 8))(plVar6,puVar19,local_7868);
                  uVar12 = local_480;
                }
                break;
              case 0xd:
                (**(code **)(puVar30 + 4))(lVar14,local_7868);
                goto switchD_1427eeeef_caseD_0;
              case 0xe:
                cVar11 = FUN_14689c496((ulonglong)uVar32,lVar14,local_7880[0]);
                if (cVar11 == '\0') {
                  (*(code *)(&DAT_14c950070)[(int)uVar32])(lVar14,local_7868);
                }
switchD_1427eeeef_caseD_0:
                goto LAB_1427ef631;
              case 0xf:
                (**(code **)(puVar30 + 4))(puVar19);
                puVar31 = puVar30 + 4;
                uVar12 = local_480;
                break;
              case 0x10:
                local_78c8 = puVar19[1];
                FUN_1468b0542(local_7880,&local_78c8,1);
                uVar12 = local_480;
                break;
              case 0x11:
                uVar24 = puVar19[1];
                if ((longlong)(int)uVar24 != 0) {
                  uVar25 = *puVar19;
                  lVar34 = 0;
                  do {
                    local_78c8 = *(ulonglong *)(uVar25 + 8 + lVar34);
                    FUN_1468b0542(local_7880,&local_78c8,1);
                    lVar34 = lVar34 + 0x18;
                    uVar12 = local_480;
                  } while ((longlong)(int)uVar24 * 0x18 != lVar34);
                }
              }
              local_480 = uVar12;
              lVar23 = lVar23 + 8;
              puVar30 = puVar31;
            } while (lVar23 != 0x20);
            puVar30 = puVar31 + 4;
          } while( true );
        }
LAB_1427ef631:
        plVar17 = plVar17 + 1;
      } while (plVar17 != local_7910 + (int)uVar26);
    }
    if ((local_7910 != (longlong *)0x0) && (local_7910 != (longlong *)param_1[1])) {
      lVar14 = (longlong)*(int *)(param_1 + 6);
      uVar32 = (&DAT_14c949f00)[lVar14 * 0x50];
      if ((ulonglong)uVar32 < 0x20) {
        (&DAT_14c949f00)[lVar14 * 0x50] = uVar32 + 1;
        *(longlong **)(&DAT_14c949f08 + (ulonglong)uVar32 * 8 + lVar14 * 0x140) = local_7910 + -1;
      }
      else {
        FUN_1400020a8();
      }
    }
    if ((0.0 < DAT_14c9501c0) &&
       (QueryPerformanceCounter(&local_e8),
       DAT_14c9501c0 <= ((double)local_e8.QuadPart * DAT_14c83f420 + 16777216.0) - _DAT_14c950180))
    {
      cVar11 = FUN_1468b0982(local_7880);
      if (cVar11 != '\0') {
        FUN_1427efc00(local_7880);
      }
      FUN_1468b0d10(local_7880);
      FUN_1468b0d10(local_7880);
      FUN_1468a08b0(local_7c0,&local_e8);
      *(LARGE_INTEGER *)(local_7880[0] + 0xd) = local_e8;
      local_7880[0][0xe] = CONCAT44(uStack_dc,uStack_e0);
      *(undefined1 *)(param_1 + 0xf) = 1;
      if (param_1[9] != 0) {
        LOCK();
        piVar1 = (int *)(param_1[9] + 0x4c);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
LAB_1427ef8d1:
      FUN_1468af0b0(&local_78c0);
      if ((local_c8 ^ (ulonglong)&local_78b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    LVar15.QuadPart = FUN_1456b24b8(param_1[5]);
    if (LVar15.QuadPart == 0) {
      FUN_140030620(param_1,&local_78c0);
      uVar24 = 0x1ef;
      do {
        cVar11 = FUN_1468b0982(local_7880);
        if (cVar11 != '\0') {
          FUN_1427efc00(local_7880);
        }
        FUN_1468b0d10(local_7880);
        LVar15.QuadPart = FUN_1456b24b8(param_1[5]);
        uVar26 = uVar24;
        if (LVar15.QuadPart != 0) goto LAB_1427ef85f;
        lVar14 = param_1[3];
        uVar26 = (lVar14 - param_1[4]) - 8U >> 3;
        if ((int)uVar26 == 0) {
          local_e8.QuadPart = 0;
        }
        else {
          uVar7 = *(undefined4 *)(lVar14 + -8);
          uVar8 = *(undefined4 *)(lVar14 + -4);
          lVar22 = 0;
          do {
            puVar3 = (undefined4 *)(lVar14 + lVar22 * 8);
            *puVar3 = uVar7;
            puVar3[1] = uVar8;
            puVar3[2] = uVar7;
            puVar3[3] = uVar8;
            lVar22 = lVar22 + 2;
          } while (lVar22 != 0x10);
          LVar15 = (LARGE_INTEGER)((LARGE_INTEGER *)(param_1 + 4))->QuadPart;
          puVar16 = (undefined8 *)FUN_1400305d2(&DAT_14c949ec0,*(undefined4 *)(param_1 + 6));
          param_1[4] = puVar16;
          *puVar16 = 0;
          param_1[3] = param_1[4] + 8;
          uVar24 = uVar26 & 0xffffffff;
          local_e8 = LVar15;
          if (LVar15.QuadPart != 0) goto LAB_1427ef85f;
        }
        iVar13 = FUN_14689c9f7(param_1,&local_78c0,&local_e8,0xd);
      } while (iVar13 == 2);
      if (iVar13 == 3) goto LAB_1427eed3e;
      LVar15 = local_e8;
      uVar26 = uVar24;
      if (local_e8.QuadPart == 0) goto LAB_1427ef8d1;
    }
    else {
      uVar26 = 0x1ef;
    }
LAB_1427ef85f:
    local_7910 = (longlong *)(LVar15.QuadPart + 8);
  } while( true );
}



// FUNCTION 1427ef942 FUN_1427ef942 body=702 status=ok
// SIG undefined FUN_1427ef942(void)

void FUN_1427ef942(int param_1,undefined8 *param_2)

{
  longlong lVar1;
  uint *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  bool bVar16;
  uint *puVar17;
  bool bVar18;
  
  lVar12 = (longlong)param_1 * 0x50;
  lVar1 = DAT_14c9640e8 + lVar12;
  lVar11 = (longlong)*(int *)(DAT_14c9640e8 + 0x20 + lVar12);
  if (lVar11 == 0) {
    lVar11 = (longlong)*(int *)(lVar1 + 0x30);
    if (lVar11 == 0) {
      return;
    }
    puVar17 = *(uint **)(lVar1 + 0x28);
    bVar16 = false;
  }
  else {
    lVar12 = *(longlong *)(DAT_14c9640e8 + 0x18 + lVar12);
    lVar15 = 0;
    bVar16 = false;
    do {
      uVar9 = *(uint *)(lVar12 + lVar15);
      if (-1 < (int)uVar9) {
        lVar6 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
        if ((*(uint *)(lVar6 + 8 + (ulonglong)(uVar9 & 0xffff) * 0x18) >> 0x15 & 1) == 0) {
          puVar17 = (uint *)(lVar6 + (ulonglong)(uVar9 & 0xffff) * 0x18 + 8);
          LOCK();
          *puVar17 = *puVar17 & ~DAT_14c75ec9c;
          UNLOCK();
          LOCK();
          *puVar17 = *puVar17 | DAT_14c75ec98;
          UNLOCK();
        }
        else {
          *(undefined4 *)(lVar12 + lVar15) = 0xffffffff;
          bVar16 = true;
        }
      }
      lVar15 = lVar15 + 4;
    } while (lVar11 * 4 != lVar15);
    lVar11 = (longlong)*(int *)(lVar1 + 0x30);
    if (lVar11 == 0) goto joined_r0x0001427efb77;
    puVar17 = *(uint **)(lVar1 + 0x28);
  }
  puVar2 = puVar17 + lVar11;
  bVar8 = 0;
  do {
    uVar10 = DAT_14c75ec9c;
    uVar9 = *puVar17;
    if (-1 < (int)uVar9) {
      lVar11 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
      if ((*(uint *)(lVar11 + 8 + (ulonglong)(uVar9 & 0xffff) * 0x18) >> 0x15 & 1) == 0) {
        puVar3 = (undefined8 *)(lVar11 + (ulonglong)(uVar9 & 0xffff) * 0x18);
        if ((DAT_14c75ec9c & *(uint *)(puVar3 + 1)) == 0) {
          if ((0 < *(int *)((longlong)puVar3 + 0xc)) && ((*(uint *)(puVar3 + 1) >> 0x17 & 1) == 0))
          {
            do {
              uVar9 = *(uint *)(puVar3 + 1);
              if ((uVar9 >> 0x17 & 1) != 0) goto LAB_1427efacc;
              LOCK();
              bVar18 = uVar9 == *(uint *)(puVar3 + 1);
              if (bVar18) {
                *(uint *)(puVar3 + 1) = uVar9 | 0x800000;
              }
              uVar9 = DAT_14c75ec9c;
              UNLOCK();
            } while (!bVar18);
            uVar13 = (ulonglong)(*(uint *)((longlong)puVar3 + 0xc) & 0xffff);
            lVar11 = *(longlong *)
                      (DAT_14c9647c8 + (ulonglong)(*(uint *)((longlong)puVar3 + 0xc) >> 0x10) * 8);
            if (((DAT_14c75ec9c & *(uint *)(lVar11 + 8 + uVar13 * 0x18)) != 0) &&
               (lVar11 = lVar11 + uVar13 * 0x18, (*(uint *)(lVar11 + 8) & DAT_14c75ec9c) != 0)) {
              uVar14 = ~DAT_14c75ec9c;
              uVar10 = *(uint *)(lVar11 + 8);
              do {
                LOCK();
                uVar4 = *(uint *)(lVar11 + 8);
                bVar18 = uVar10 == uVar4;
                if (bVar18) {
                  *(uint *)(lVar11 + 8) = uVar10 & uVar14;
                  uVar4 = uVar10;
                }
                uVar10 = uVar4;
                UNLOCK();
              } while (!bVar18);
              LOCK();
              *(uint *)(lVar11 + 8) = *(uint *)(lVar11 + 8) | DAT_14c75ec98;
              UNLOCK();
              if ((uVar10 & uVar9) != 0) {
                uVar9 = *(uint *)(lVar11 + 0xc);
                goto LAB_1427efab6;
              }
            }
          }
        }
        else if ((*(uint *)(puVar3 + 1) & DAT_14c75ec9c) != 0) {
          uVar14 = ~DAT_14c75ec9c;
          uVar9 = *(uint *)(puVar3 + 1);
          do {
            LOCK();
            uVar4 = *(uint *)(puVar3 + 1);
            bVar18 = uVar9 == uVar4;
            if (bVar18) {
              *(uint *)(puVar3 + 1) = uVar9 & uVar14;
              uVar4 = uVar9;
            }
            uVar9 = uVar4;
            UNLOCK();
          } while (!bVar18);
          LOCK();
          *(uint *)(puVar3 + 1) = *(uint *)(puVar3 + 1) | DAT_14c75ec98;
          UNLOCK();
          if ((uVar9 & uVar10) != 0) {
            plVar7 = (longlong *)*param_2;
            *(undefined8 *)*plVar7 = *puVar3;
            lVar11 = *plVar7;
            *plVar7 = lVar11 + 8;
            if (lVar11 + 8 == plVar7[1] + 0xf80) {
              FUN_1400318c8();
            }
            uVar9 = *(uint *)((longlong)puVar3 + 0xc);
            if ((int)uVar9 < 0) {
LAB_1427efab6:
              FUN_1427ef942(~uVar9,param_2);
            }
          }
        }
      }
      else {
        *puVar17 = 0xffffffff;
        bVar8 = 1;
      }
    }
LAB_1427efacc:
    puVar17 = puVar17 + 1;
  } while (puVar17 != puVar2);
  bVar16 = (bool)(bVar8 | bVar16);
joined_r0x0001427efb77:
  if (bVar16) {
    iVar5 = *(int *)(lVar1 + 0x10);
    if ((longlong)iVar5 != 0) {
      lVar11 = *(longlong *)(lVar1 + 8);
      lVar12 = 0;
      do {
        uVar9 = *(uint *)(lVar11 + lVar12);
        plVar7 = (longlong *)*param_2;
        *(undefined8 *)*plVar7 =
             *(undefined8 *)
              (*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8) +
              (ulonglong)(uVar9 & 0xffff) * 0x18);
        lVar15 = *plVar7;
        *plVar7 = lVar15 + 8;
        if (lVar15 + 8 == plVar7[1] + 0xf80) {
          FUN_1400318c8();
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)iVar5 * 4 != lVar12);
    }
    *(undefined1 *)(lVar1 + 0x48) = 1;
    DAT_14c96410c = 1;
  }
  return;
}



// FUNCTION 1427efc00 FUN_1427efc00 body=2481 status=ok
// SIG undefined FUN_1427efc00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427efc00(undefined8 *param_1)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined1 auVar6 [16];
  char cVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong *puVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ushort *puVar21;
  ushort *puVar22;
  longlong lVar23;
  ulonglong uVar24;
  uint *puVar25;
  ulonglong uVar26;
  longlong lVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar35 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar36 [16];
  undefined1 auStack_178 [40];
  undefined8 *local_150;
  uint *local_148;
  undefined8 *local_140;
  ulonglong *local_138;
  ulonglong local_130;
  ulonglong local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  ulonglong *local_110;
  ulonglong *local_108;
  ulonglong local_100;
  ulonglong local_f8;
  ushort *local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  ulonglong local_d8;
  int local_cc;
  ulonglong local_c8;
  byte local_c0 [4];
  uint local_bc;
  byte local_b8;
  uint local_b4;
  byte local_b0;
  uint local_ac;
  byte local_a8;
  uint local_a4;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_118 = param_1 + 0xee8;
  *(undefined8 *)*param_1 = 0;
  auVar6 = _DAT_149931e80;
  local_140 = param_1 + 0xe81;
  puVar25 = (uint *)(param_1 + 0xe18);
  local_e0 = param_1 + 0xe19;
  local_150 = param_1 + 8;
  local_e8 = param_1 + 0x39;
  local_120 = param_1 + 0x82;
  auVar35 = pmovsxbq(unaff_XMM7,0x800);
  auVar36 = pmovsxbq(unaff_XMM8,0x100);
  local_148 = puVar25;
LAB_1427efce0:
  local_108 = (ulonglong *)FUN_141716706(local_118,&local_cc);
  local_110 = local_108 + (longlong)local_cc * 3;
  local_138 = local_108;
LAB_1427efd24:
  uVar16 = *local_108;
  uVar14 = local_108[1];
  puVar1 = (uint *)((longlong)local_108 + 0x14);
  local_f8 = (ulonglong)*puVar1;
  puVar11 = local_108 + 2;
  local_108 = local_108 + 3;
  local_100 = (int)*puVar11 * *puVar1 + uVar14;
  uVar26 = (ulonglong)((uint)uVar16 & 1);
  local_f0 = (ushort *)(uVar16 & 0xfffffffffffffffe);
  puVar21 = local_f0;
  uVar16 = uVar14;
  local_128 = uVar26;
LAB_1427efd86:
  do {
    local_130 = uVar16;
    local_c0[0] = (byte)*puVar21 & 0x1f;
    local_bc = (uint)(*puVar21 >> 5);
    local_b8 = (byte)puVar21[1] & 0x1f;
    local_b4 = (uint)(puVar21[1] >> 5);
    local_b0 = (byte)puVar21[2] & 0x1f;
    local_ac = (uint)(puVar21[2] >> 5);
    local_a8 = (byte)puVar21[3] & 0x1f;
    local_a4 = (uint)(puVar21[3] >> 5);
    lVar9 = 0;
    do {
      uVar16 = (ulonglong)local_c0[lVar9];
      if (0x11 < uVar16) {
LAB_1427f04a9:
        FUN_1427e893d(uVar16);
        goto switchD_1427efe1b_caseD_0;
      }
      puVar11 = (ulonglong *)(uVar14 + (ulonglong)*(uint *)((longlong)&local_bc + lVar9) * 8);
      puVar22 = puVar21;
      switch(uVar16) {
      case 0:
        goto switchD_1427efe1b_caseD_0;
      case 1:
        uVar14 = uVar14 + (ulonglong)(*(uint *)((longlong)&local_bc + lVar9) * 0x800 + 0x800) * 8;
        break;
      case 2:
        uVar15 = *(uint *)(param_1 + 0x80);
        iVar17 = uVar15 + 1;
        *(int *)(param_1 + 0x80) = iVar17;
        param_1[(ulonglong)uVar15 + 0x81] = puVar11;
        if (iVar17 == 0x20) {
          FUN_1468af948(local_150);
        }
        break;
      case 3:
        uVar15 = *(uint *)(param_1 + 0x10);
        iVar17 = uVar15 + 1;
        *(int *)(param_1 + 0x10) = iVar17;
        param_1[(ulonglong)uVar15 + 0x11] = puVar11;
        if (iVar17 == 0x20) {
          FUN_1468b0196(local_150);
        }
        break;
      case 4:
        uVar16 = *(ulonglong *)(puVar21 + 4);
        uVar13 = puVar11[1];
        uVar24 = *puVar11;
        uVar19 = (ulonglong)*(uint *)(param_1 + 0xe80);
        iVar17 = *(uint *)(param_1 + 0xe80) + 1;
        *(int *)(param_1 + 0xe80) = iVar17;
        local_140[uVar19 * 3] = uVar16 & 0xfffffffffffffffe | uVar26;
        local_140[uVar19 * 3 + 1] = uVar24;
        *(int *)(local_140 + uVar19 * 3 + 2) = (int)uVar13;
        goto LAB_1427effae;
      case 5:
        local_d8 = local_d8 & 0xffffffff00000000 | (ulonglong)*(uint *)(puVar21 + 4);
        uVar15 = *(uint *)(param_1 + 0x38);
        *(uint *)(param_1 + 0x38) = uVar15 + 1;
        local_e8[(ulonglong)uVar15 * 2] = puVar11;
        local_e8[(ulonglong)uVar15 * 2 + 1] = local_d8;
        puVar22 = puVar21 + 4;
        if (uVar15 + 1 == 0x20) {
          FUN_1468b07ee(local_150);
        }
        break;
      case 6:
        uVar16 = *(ulonglong *)(puVar21 + 4);
        uVar24 = puVar11[1];
        iVar17 = *(int *)((longlong)puVar11 + 0x34);
        uVar4 = *(undefined4 *)((uVar16 & 0xfffffffffffffffe) - 8);
        uVar13 = (ulonglong)*puVar25;
        uVar15 = *puVar25 + 1;
        *puVar25 = uVar15;
        local_e0[uVar13 * 3] = uVar16 & 0xfffffffffffffffe | uVar26;
        local_e0[uVar13 * 3 + 1] = puVar11;
        *(int *)(local_e0 + uVar13 * 3 + 2) = (int)uVar24 - iVar17;
        *(undefined4 *)((longlong)local_e0 + uVar13 * 0x18 + 0x14) = uVar4;
        puVar22 = puVar21 + 4;
        if (uVar15 == 0x20) {
          FUN_14002fe56(puVar25);
        }
        break;
      case 7:
        if (((*(int *)((longlong)puVar11 + 0xc) != 0) &&
            (uVar15 = (uint)puVar11[1], -1 < (int)uVar15)) &&
           (((int)uVar15 < DAT_14c9647dc &&
            ((puVar12 = (ulonglong *)
                        ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8)),
             puVar12 != (ulonglong *)0x0 && ((int)puVar12[2] == *(int *)((longlong)puVar11 + 0xc))))
            ))) {
          uVar16 = *puVar12;
          local_c8 = uVar16;
          FUN_1468b0542(param_1,&local_c8,1);
          if ((uVar16 != 0) && (local_c8 == 0)) {
            *puVar11 = 0;
            puVar11[1] = 0;
          }
        }
        break;
      case 8:
        uVar16 = puVar11[1];
        if ((longlong)(int)uVar16 != 0) {
          uVar24 = *puVar11;
          lVar27 = uVar24 + 0xc;
          lVar23 = 0;
          do {
            iVar17 = *(int *)(lVar27 + lVar23);
            if ((((iVar17 != 0) && (uVar15 = *(uint *)(uVar24 + 8 + lVar23), -1 < (int)uVar15)) &&
                ((int)uVar15 < DAT_14c9647dc)) &&
               ((puVar11 = (ulonglong *)
                           ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8)),
                puVar11 != (ulonglong *)0x0 && ((int)puVar11[2] == iVar17)))) {
              uVar13 = *puVar11;
              local_c8 = uVar13;
              FUN_1468b0542(param_1,&local_c8,1);
              uVar26 = local_128;
              if ((uVar13 != 0) && (local_c8 == 0)) {
                lVar2 = lVar27 + lVar23;
                *(undefined8 *)(lVar2 + -0xc) = 0;
                *(undefined8 *)(lVar2 + -4) = 0;
              }
            }
            lVar23 = lVar23 + 0x20;
            puVar25 = local_148;
          } while ((longlong)(int)uVar16 * 0x20 != lVar23);
        }
        break;
      case 9:
        uVar15 = (uint)puVar11[1];
        uVar16 = (ulonglong)(int)uVar15;
        if (uVar16 != 0) {
          uVar13 = *puVar11;
          uVar24 = ((longlong)uVar13 >> 0x18) + (longlong)puVar11;
          if ((uVar13 & 1) == 0) {
            uVar24 = uVar13;
          }
          uVar10 = *(uint *)(param_1 + 0x80);
          uVar8 = 0x20 - uVar10;
          if (uVar15 < uVar8) {
            lVar23 = uVar16 * 8 + uVar24;
LAB_1427f0383:
            uVar16 = (lVar23 - uVar24) - 8;
            auVar29._8_4_ = (int)uVar16;
            auVar29._0_8_ = uVar16;
            auVar29._12_4_ = (int)(uVar16 >> 0x20);
            auVar30._0_8_ = uVar16 >> 3;
            auVar30._8_8_ = auVar29._8_8_ >> 3;
            uVar13 = 0;
            do {
              auVar32._8_4_ = (int)uVar24;
              auVar32._0_8_ = uVar24;
              auVar32._12_4_ = (int)(uVar24 >> 0x20);
              if ((bool)(~(SUB168(auVar30 | auVar6,0) < (longlong)(uVar13 ^ auVar6._0_8_)) & 1)) {
                local_120[(ulonglong)uVar10 + (uVar13 - 1)] = uVar24 + auVar35._0_8_;
              }
              auVar34._8_4_ = (int)uVar13;
              auVar34._0_8_ = uVar13;
              auVar34._12_4_ = (int)(uVar13 >> 0x20);
              if ((longlong)((auVar34._8_8_ | auVar36._8_8_) ^ auVar6._8_8_) <=
                  SUB168(auVar30 | auVar6,8)) {
                local_120[uVar10 + uVar13] = auVar32._8_8_ + auVar35._8_8_;
              }
              uVar13 = uVar13 + 2;
              uVar24 = uVar24 + 0x10;
            } while (((uVar16 >> 3) + 2 & 0xfffffffffffffffe) != uVar13);
            uVar10 = *(uint *)(param_1 + 0x80);
          }
          else {
            do {
              uVar10 = *(uint *)(param_1 + 0x80);
              if (uVar8 != 0) {
                uVar13 = (longlong)(int)uVar8 + 0x1fffffffffffffff;
                uVar18 = uVar13 & 0x1fffffffffffffff;
                auVar28._8_4_ = (int)uVar18;
                auVar28._0_8_ = uVar18;
                auVar28._12_4_ = (int)(uVar18 >> 0x20);
                uVar20 = 0;
                uVar19 = uVar24;
                do {
                  auVar31._8_4_ = (int)uVar19;
                  auVar31._0_8_ = uVar19;
                  auVar31._12_4_ = (int)(uVar19 >> 0x20);
                  if ((bool)(~(SUB168(auVar28 | auVar6,0) < (longlong)(uVar20 ^ auVar6._0_8_)) & 1))
                  {
                    local_120[(ulonglong)uVar10 + (uVar20 - 1)] = uVar19 + auVar35._0_8_;
                  }
                  auVar33._8_4_ = (int)uVar20;
                  auVar33._0_8_ = uVar20;
                  auVar33._12_4_ = (int)(uVar20 >> 0x20);
                  if ((longlong)((auVar33._8_8_ | auVar36._8_8_) ^ auVar6._8_8_) <=
                      SUB168(auVar28 | auVar6,8)) {
                    local_120[uVar10 + uVar20] = auVar31._8_8_ + auVar35._8_8_;
                  }
                  uVar20 = uVar20 + 2;
                  uVar19 = uVar19 + 0x10;
                } while ((uVar18 - ((uint)uVar13 & 1)) + 2 != uVar20);
                uVar10 = *(uint *)(param_1 + 0x80);
              }
              uVar15 = (int)uVar16 - uVar8;
              uVar16 = (ulonglong)uVar15;
              uVar24 = uVar24 + (longlong)(int)uVar8 * 8;
              *(uint *)(param_1 + 0x80) = uVar10 + uVar8;
              FUN_1468af948(local_150);
              uVar8 = 0x20;
            } while (0x1f < uVar15);
            uVar10 = *(uint *)(param_1 + 0x80);
            if (uVar15 != 0) {
              lVar23 = (ulonglong)uVar15 * 8 + uVar24;
              goto LAB_1427f0383;
            }
            uVar15 = 0;
          }
          *(uint *)(param_1 + 0x80) = uVar15 + uVar10;
          puVar25 = local_148;
        }
        break;
      case 10:
        uVar16 = *(ulonglong *)(puVar21 + 4);
        uVar13 = puVar11[1];
        uVar24 = *puVar11;
        uVar19 = ((longlong)uVar24 >> 0x18) + (longlong)puVar11;
        if ((uVar24 & 1) == 0) {
          uVar19 = uVar24;
        }
        uVar24 = (ulonglong)*(uint *)(param_1 + 0xe80);
        iVar17 = *(uint *)(param_1 + 0xe80) + 1;
        *(int *)(param_1 + 0xe80) = iVar17;
        local_140[uVar24 * 3] = uVar16 & 0xfffffffffffffffe | uVar26;
        local_140[uVar24 * 3 + 1] = uVar19;
        *(int *)(local_140 + uVar24 * 3 + 2) = (int)uVar13;
LAB_1427effae:
        puVar22 = puVar21 + 4;
        if (iVar17 == 0x20) {
LAB_1427effb8:
          FUN_144710c38(puVar25);
          puVar22 = puVar21 + 4;
        }
        break;
      case 0xb:
        uVar16 = *(ulonglong *)(puVar21 + 4);
        bVar3 = *(byte *)((longlong)puVar11 +
                         (ulonglong)*(uint *)((uVar16 & 0xfffffffffffffffe) - 8));
        uVar24 = (ulonglong)*(uint *)(param_1 + 0xe80);
        iVar17 = *(uint *)(param_1 + 0xe80) + 1;
        *(int *)(param_1 + 0xe80) = iVar17;
        local_140[uVar24 * 3] = uVar16 & 0xfffffffffffffffe | uVar26;
        local_140[uVar24 * 3 + 1] = puVar11;
        *(uint *)(local_140 + uVar24 * 3 + 2) = (uint)bVar3;
        puVar22 = puVar21 + 4;
        if (iVar17 != 0x20) break;
        goto LAB_1427effb8;
      case 0xc:
        (*(code *)**(undefined8 **)*puVar11)((undefined8 *)*puVar11,param_1[3]);
        plVar5 = (longlong *)*puVar11;
        if (*(char *)((longlong)plVar5 + 0x11) == '\x01') {
          if (((ulonglong)plVar5[1] < 9) && (*(byte *)(plVar5 + 2) < 4)) {
            puVar11 = puVar11 + 1;
          }
          else {
            puVar11 = (ulonglong *)puVar11[1];
          }
          (**(code **)(*plVar5 + 8))(plVar5,puVar11,param_1[3]);
        }
        break;
      case 0xd:
        (**(code **)(puVar21 + 4))(local_130,param_1[3]);
switchD_1427efe1b_caseD_0:
        uVar14 = local_130 + local_f8;
        puVar21 = local_f0;
        uVar16 = uVar14;
        if (uVar14 != local_100) goto LAB_1427efd86;
        if (local_108 != local_110) goto LAB_1427efd24;
        lVar9 = (longlong)*(int *)(param_1 + 0xeea);
        uVar15 = (&DAT_14c949f00)[lVar9 * 0x50];
        if ((ulonglong)uVar15 < 0x20) {
          (&DAT_14c949f00)[lVar9 * 0x50] = uVar15 + 1;
          *(ulonglong **)(&DAT_14c949f08 + (ulonglong)uVar15 * 8 + lVar9 * 0x140) = local_138;
        }
        else {
          FUN_1400020a8(local_138);
        }
        if (((*(longlong *)(param_1[0xee9] + 0xff0) == 0) &&
            ((int)((ulonglong)(param_1[0xee8] - param_1[0xee9]) >> 3) * -0x55555555 < 1)) &&
           (cVar7 = FUN_1468b0982(param_1), cVar7 == '\0')) {
          if ((local_a0 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0();
          }
          return;
        }
        goto LAB_1427efce0;
      case 0xe:
        uVar16 = CONCAT71((int7)((ulonglong)
                                 ((longlong)&switchD_1427efe1b::switchdataD_149e8a070 +
                                 (longlong)(int)(&switchD_1427efe1b::switchdataD_149e8a070)[uVar16])
                                >> 8),0xe);
        goto LAB_1427f04a9;
      case 0xf:
        (**(code **)(puVar21 + 4))(puVar11,param_1[3]);
        puVar22 = puVar21 + 4;
        break;
      case 0x10:
        local_c8 = puVar11[1];
        FUN_1468b0542(param_1,&local_c8,1);
        break;
      case 0x11:
        uVar16 = puVar11[1];
        if ((longlong)(int)uVar16 != 0) {
          uVar24 = *puVar11;
          lVar23 = 0;
          do {
            local_c8 = *(ulonglong *)(uVar24 + 8 + lVar23);
            FUN_1468b0542(param_1,&local_c8,1);
            lVar23 = lVar23 + 0x18;
            puVar25 = local_148;
            uVar26 = local_128;
          } while ((longlong)(int)uVar16 * 0x18 != lVar23);
        }
      }
      lVar9 = lVar9 + 8;
      puVar21 = puVar22;
    } while (lVar9 != 0x20);
    puVar21 = puVar22 + 4;
    uVar16 = local_130;
  } while( true );
}



// FUNCTION 1427f05b2 FUN_1427f05b2 body=130 status=ok
// SIG undefined FUN_1427f05b2(void)

void FUN_1427f05b2(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  byte bVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c9647e8);
  uVar1 = DAT_14c75ec98;
  DAT_14c75ec98 = DAT_14c75ec9c;
  DAT_14c75ec9c = uVar1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c9647e8);
  DAT_14c9497fc = DAT_14c9647dc - (DAT_14c964818 + DAT_14c9647b8);
  LOCK();
  UNLOCK();
  bVar2 = FUN_141330bcb();
  FUN_1411c9d7c(bVar2 ^ 1,param_1 + 0x60);
  FUN_140fba05e(bVar2 ^ 1,param_2,param_1 + 0x60);
  return;
}



// FUNCTION 1427f0634 FUN_1427f0634 body=243 status=ok
// SIG undefined FUN_1427f0634(void)

void FUN_1427f0634(longlong *param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  longlong lVar7;
  longlong lVar8;
  
  cVar2 = DAT_14c951760;
  lVar8 = *(longlong *)(*param_1 + 0x400);
  if (lVar8 == 0) {
    lVar8 = *param_1;
  }
  lVar7 = (longlong)param_2 * 0x20;
  uVar4 = *(uint *)(lVar8 + 4 + lVar7);
  iVar3 = *(int *)(lVar8 + 0xc + lVar7);
  if ((int)uVar4 <= iVar3) {
    lVar8 = lVar8 + lVar7;
    do {
      uVar5 = uVar4 + 1;
      *(uint *)(lVar8 + 4) = uVar5;
      uVar6 = (ushort)uVar4;
      lVar7 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
      lVar1 = *(longlong *)(lVar7 + (ulonglong)uVar6 * 0x18);
      uVar4 = uVar5;
      if (((lVar1 != 0) &&
          (lVar7 = lVar7 + (ulonglong)uVar6 * 0x18, (*(uint *)(lVar7 + 8) & 0x6e500000) == 0)) &&
         ((cVar2 == '\0' || ((*(uint *)(lVar7 + 8) >> 0x15 & 1) == 0)))) {
        if ((*(uint *)param_1[1] & *(uint *)(lVar1 + 8)) != 0) {
          LOCK();
          *(uint *)(lVar7 + 8) = *(uint *)(lVar7 + 8) & ~DAT_14c75ec9c;
          UNLOCK();
          LOCK();
          *(uint *)(lVar7 + 8) = *(uint *)(lVar7 + 8) | DAT_14c75ec98;
          UNLOCK();
          iVar3 = *(int *)(lVar8 + 0x18);
          *(uint *)(lVar8 + 0x18) = iVar3 + 1U;
          if (*(uint *)(lVar8 + 0x1c) < iVar3 + 1U) {
            FUN_1447f76d2(lVar8 + 0x10,iVar3);
          }
          *(longlong *)(*(longlong *)(lVar8 + 0x10) + (longlong)iVar3 * 8) = lVar1;
          uVar4 = *(uint *)(lVar8 + 4);
          iVar3 = *(int *)(lVar8 + 0xc);
        }
      }
    } while ((int)uVar4 <= iVar3);
  }
  return;
}



// FUNCTION 1427f0728 FUN_1427f0728 body=176 status=ok
// SIG undefined FUN_1427f0728(void)

void FUN_1427f0728(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)param_1[1] == '\x01') {
    lVar1 = *param_1;
    FUN_1446f82e2(&local_28,*(undefined4 *)(param_2 + 1),*param_2,1);
    iVar2 = FUN_1448e5bf4(lVar1,local_28,(int)param_1[3]);
    if (iVar2 == -1) {
      *(undefined1 *)param_1[1] = 0;
    }
    else {
      iVar2 = FUN_1448e5bf4(lVar1,local_28,0);
      if (iVar2 == -1) {
        uVar3 = 0xffffffffffffffff;
      }
      else {
        uVar3 = *(ulonglong *)(*(longlong *)(lVar1 + 0x40) + 8 + (longlong)iVar2 * 0x10);
      }
      *(ulonglong *)param_1[2] = *(ulonglong *)param_1[2] | uVar3;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427f07e4 FUN_1427f07e4 body=315 status=ok
// SIG undefined FUN_1427f07e4(void)

undefined8 * FUN_1427f07e4(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  code *pcVar2;
  void *_Src;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [40];
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1 = (longlong *)*param_1;
  uVar3 = 0xffffffff;
  if (0 < (longlong)(int)param_1[9]) {
    plVar4 = (longlong *)(param_1[8] + 8);
    uVar5 = 0;
    do {
      if (*plVar4 == param_3) {
        uVar3 = uVar5 & 0xffffffff;
        break;
      }
      uVar5 = uVar5 + 1;
      plVar4 = plVar4 + 2;
    } while ((longlong)(int)param_1[9] != uVar5);
  }
  (**(code **)(*param_1 + 0x2b0))(param_1,local_30,uVar3);
  plVar4 = local_30[0];
  if (*(code **)(*local_30[0] + 0x50) != FUN_144828418) {
    plVar4 = (longlong *)(**(code **)(*local_30[0] + 0x50))();
  }
  FUN_1447a1fc0(plVar4);
  pcVar2 = *(code **)(*local_30[0] + 0x28);
  if (pcVar2 == FUN_14482841c) {
    plVar4 = local_30[0] + 3;
    if (local_30[0][5] != 0) {
      plVar4 = (longlong *)(local_30[0][5] + 8);
    }
  }
  else if (pcVar2 == (code *)&LAB_14010c34c) {
    plVar4 = local_30[0] + 2;
  }
  else {
    plVar4 = (longlong *)(*pcVar2)(local_30[0]);
  }
  *param_2 = 0;
  iVar1 = (int)plVar4[1];
  _Src = (void *)*plVar4;
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  if (local_30[0] != (longlong *)0x0) {
    (**(code **)(*local_30[0] + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}


