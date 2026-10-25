// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14327645a FUN_14327645a body=85 status=ok
// SIG undefined FUN_14327645a(void)

void FUN_14327645a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  FUN_141795bc1(&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432764b0 FUN_1432764b0 body=87 status=ok
// SIG undefined FUN_1432764b0(void)

undefined8 FUN_1432764b0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  FUN_141795bc1(&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143276508 FUN_143276508 body=29 status=ok
// SIG undefined FUN_143276508(void)

undefined8 FUN_143276508(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14327653a FUN_14327653a body=85 status=ok
// SIG undefined FUN_14327653a(void)

void FUN_14327653a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3ea270;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a3e9f80;
  return;
}



// FUNCTION 143276590 FUN_143276590 body=85 status=ok
// SIG undefined FUN_143276590(void)

void FUN_143276590(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3ea270;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a3e9f80;
  return;
}



// FUNCTION 1432765e6 FUN_1432765e6 body=118 status=ok
// SIG undefined FUN_1432765e6(void)

void FUN_1432765e6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a3ea270;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a3e9f80;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014327664d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14327665c FUN_14327665c body=85 status=ok
// SIG undefined FUN_14327665c(void)

void FUN_14327665c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  FUN_1400ff1cf(&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432766b2 FUN_1432766b2 body=87 status=ok
// SIG undefined FUN_1432766b2(void)

undefined8 FUN_1432766b2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  FUN_1400ff1cf(&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143276732 FUN_143276732 body=282 status=ok
// SIG undefined FUN_143276732(void)

undefined8 * FUN_143276732(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14327670a);
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



// FUNCTION 14327684c FUN_14327684c body=631 status=ok
// SIG undefined FUN_14327684c(void)

void FUN_14327684c(void)

{
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uStack_60 = 0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/DataflowSimulation",&PTR_FUN_14a3e4cd0,1,&PTR_FUN_14a3e4ca0);
  uStack_60 = 0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/DataflowSimulation",&PTR_FUN_14a3e5140,1,&PTR_FUN_14a3e5110);
  uStack_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/DataflowSimulation",&PTR_FUN_14a3e54a0,1,0);
  uStack_60 = 0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/DataflowSimulation",&PTR_FUN_14a3e58d0,1,&PTR_FUN_14a3e58a0);
  uStack_60 = 0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/DataflowSimulation",&PTR_FUN_14a3e5d00,1,&PTR_FUN_14a3e5cd0);
  uStack_60 = 0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/DataflowSimulation",&PTR_FUN_14a3e6240,1,&PTR_FUN_14a3e6210);
  FUN_1446f470e(&DAT_14caa8838,L"PostDataflowSimulationTick",1);
  FUN_1446f470e(&DAT_14caa8848,L"PreDataflowSimulationTick",1);
  uStack_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/DataflowSimulation",&PTR_FUN_14a3e6c00,2,0);
  uStack_60 = 0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/DataflowSimulation",0,0,&PTR_FUN_14a3e6cd0);
  local_68 = local_68 & 0xffffffff00000000;
  uStack_60 = CONCAT44(uStack_60._4_4_,0x200);
  FUN_1412c7f16(&DAT_14caa8888,L"TaskGraph.TaskPriorities.DataflowSimulationTask",
                L"Task and thread priority for the dataflow simulation.",0x400);
  atexit(FUN_1432759a4);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_141471170(&DAT_14caa88c8,L"p.Dataflow.Simulation.ThreadingMode",&DAT_14c760f30,
                L"0 : run simulation on GT | 1 : run simulation on PT (GT is blocked in manager Tick) | 2 : run simulation on PT (GT will be blocked at the end of the world tick)"
               );
  atexit(FUN_143275a0e);
  DAT_14caa88d8 = 0;
  DAT_14caa88e0 = 0;
  DAT_14caa88e8 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  local_68 = 10;
  FUN_14282b410(L"/Script/DataflowSimulation",0,0,&PTR_FUN_14a3e7ae0);
  local_48 = 0x800000014a3e7c98;
  local_34 = 0x12;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_146329c42(&local_48);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143276ac4 FUN_143276ac4 body=1057 status=ok
// SIG undefined FUN_143276ac4(void)

void FUN_143276ac4(longlong param_1,double *param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  PSRWLOCK SRWLock;
  longlong lVar12;
  ulonglong *puVar13;
  byte *pbVar14;
  byte *pbVar15;
  longlong *plVar16;
  float fVar17;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  ulonglong local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  ulonglong *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  fVar17 = (float)*param_2;
  if (*(float *)(param_1 + 0x32c) <= fVar17 && fVar17 != *(float *)(param_1 + 0x32c)) {
    *(float *)(param_1 + 0x32c) = fVar17;
    lVar8 = *(longlong *)(param_1 + 0xb0);
    if (lVar8 == 0) {
      lVar8 = FUN_1448abda6(param_1);
    }
    lVar8 = *(longlong *)(lVar8 + 0x260);
    local_58 = (ulonglong *)0x0;
    uStack_50 = 0;
    if ((longlong)*(int *)(param_2 + 2) == 0) {
      uVar11 = 0;
    }
    else {
      pbVar14 = (byte *)param_2[1];
      pbVar15 = pbVar14 + (longlong)*(int *)(param_2 + 2) * 0xd0;
      local_90 = param_1;
      do {
        if (((*pbVar14 & 1) != 0) && (uVar11 = *(ulonglong *)(pbVar14 + 8), uVar11 != 0)) {
          SRWLock = (PSRWLOCK)0x0;
          if (DAT_14c992a90 != '\0') {
            SRWLock = (PSRWLOCK)(lVar8 + 0x280);
          }
          if (SRWLock != (PSRWLOCK)0x0) {
            AcquireSRWLockShared(SRWLock);
          }
          if (*(int *)(lVar8 + 0x2b0) != *(int *)(lVar8 + 0x2dc)) {
            uVar6 = ((uint)(uVar11 >> 0x14) & 0xffff ^ (uint)(uVar11 >> 4)) * -0x7a143595;
            uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
            lVar12 = *(longlong *)(lVar8 + 0x2e8);
            if (*(longlong *)(lVar8 + 0x2e8) == 0) {
              lVar12 = lVar8 + 0x2e0;
            }
            iVar7 = *(int *)(lVar12 + (ulonglong)
                                      (*(int *)(lVar8 + 0x2f0) - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
            if (iVar7 != -1) {
              do {
                puVar13 = (ulonglong *)(*(longlong *)(lVar8 + 0x2a8) + (longlong)iVar7 * 0x18);
                if (*puVar13 == uVar11) {
                  if (puVar13 != (ulonglong *)0x0) {
                    uVar11 = 0;
                    if (puVar13 + 1 != (ulonglong *)0x0) {
                      uVar11 = puVar13[1];
                    }
                    goto LAB_143276c48;
                  }
                  break;
                }
                iVar7 = (int)puVar13[2];
              } while (iVar7 != -1);
            }
          }
          uVar11 = 0;
LAB_143276c48:
          if (SRWLock != (PSRWLOCK)0x0) {
            ReleaseSRWLockShared(SRWLock);
          }
          if (uVar11 != 0) {
            lVar12 = (longlong)(int)uStack_50;
            uVar6 = (int)uStack_50 + 1;
            uStack_50 = CONCAT44(uStack_50._4_4_,uVar6);
            if (uStack_50._4_4_ < uVar6) {
              FUN_14748d140(&local_58);
            }
            puVar13 = local_58 + lVar12 * 0x18;
            memset(puVar13,0,0xc0);
            if (DAT_14c950c29 == 1) {
              FUN_1456cec3c(uVar11);
            }
            *puVar13 = uVar11;
            puVar13[3] = *(ulonglong *)(pbVar14 + 0x20);
            uVar11 = *(ulonglong *)(pbVar14 + 0x18);
            puVar13[1] = *(ulonglong *)(pbVar14 + 0x10);
            puVar13[2] = uVar11;
            uVar11 = *(ulonglong *)(pbVar14 + 0x30);
            uVar2 = *(ulonglong *)(pbVar14 + 0x38);
            uVar3 = *(ulonglong *)(pbVar14 + 0x48);
            puVar13[6] = *(ulonglong *)(pbVar14 + 0x40);
            puVar13[7] = uVar3;
            puVar13[4] = uVar11;
            puVar13[5] = uVar2;
            puVar13[10] = *(ulonglong *)(pbVar14 + 0x60);
            uVar11 = *(ulonglong *)(pbVar14 + 0x58);
            puVar13[8] = *(ulonglong *)(pbVar14 + 0x50);
            puVar13[9] = uVar11;
            puVar13[0xd] = *(ulonglong *)(pbVar14 + 0x78);
            uVar11 = *(ulonglong *)(pbVar14 + 0x70);
            puVar13[0xb] = *(ulonglong *)(pbVar14 + 0x68);
            puVar13[0xc] = uVar11;
            *(float *)(puVar13 + 0xe) = (float)*(double *)(pbVar14 + 0x80);
            local_78 = *(ulonglong *)(pbVar14 + 0x98);
            uVar11 = *(ulonglong *)(pbVar14 + 0x88);
            uVar4 = *(undefined8 *)(pbVar14 + 0x90);
            uVar9 = *(undefined8 *)(pbVar14 + 0xb0);
            local_70 = *(ulonglong *)(pbVar14 + 0xa0);
            uVar5 = *(undefined8 *)(pbVar14 + 0xa8);
            local_88._0_4_ = (undefined4)uVar11;
            local_88._4_4_ = (undefined4)(uVar11 >> 0x20);
            uStack_80._0_4_ = (undefined4)uVar4;
            uStack_80._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
            uStack_68._0_4_ = (undefined4)uVar5;
            uStack_68._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
            local_60._0_4_ = (undefined4)uVar9;
            local_60._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
            puVar13[0x11] = local_78;
            puVar13[0x12] = local_70;
            *(undefined4 *)(puVar13 + 0x13) = (undefined4)uStack_68;
            *(undefined4 *)((longlong)puVar13 + 0x9c) = uStack_68._4_4_;
            *(undefined4 *)(puVar13 + 0x14) = (undefined4)local_60;
            *(undefined4 *)((longlong)puVar13 + 0xa4) = local_60._4_4_;
            *(undefined4 *)(puVar13 + 0xf) = (undefined4)local_88;
            *(undefined4 *)((longlong)puVar13 + 0x7c) = local_88._4_4_;
            *(undefined4 *)(puVar13 + 0x10) = (undefined4)uStack_80;
            *(undefined4 *)((longlong)puVar13 + 0x84) = uStack_80._4_4_;
            *(undefined1 *)(puVar13 + 0x15) = 1;
            local_88 = uVar11;
            uStack_80 = uVar4;
            uStack_68 = uVar5;
            local_60 = uVar9;
            FUN_14054c6c4(puVar13 + 0x16);
          }
        }
        pbVar14 = pbVar14 + 0xd0;
      } while (pbVar14 != pbVar15);
      uVar11 = (ulonglong)(int)uStack_50;
      if (0 < (longlong)uVar11) {
        plVar16 = (longlong *)(local_90 + 0x2d0);
        lVar8 = uVar11 * 0xc0;
        puVar13 = local_58;
        do {
          uVar11 = *puVar13;
          if (uVar11 != 0) {
            if (DAT_14c950c29 == 1) {
              FUN_1456cec3c(uVar11);
            }
            if ((DAT_14c950c29 & 1) != 0) {
              FUN_1456cec3c(uVar11);
            }
            local_88 = uVar11;
            if ((DAT_14c950c29 & 1) != 0) {
              FUN_1456cec3c(uVar11);
            }
            if ((DAT_14c950c29 & 1) != 0) {
              FUN_1456cec3c(uVar11);
            }
            uVar6 = ((uint)(uVar11 >> 0x14) & 0xffff ^ (uint)(uVar11 >> 4)) * -0x7a143595;
            uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
            iVar7 = FUN_14748b794(plVar16,uVar6 >> 0x10 ^ uVar6,&local_88);
            lVar12 = (longlong)iVar7 * 0x60 + *plVar16;
            if (lVar12 != 0 && iVar7 != -1) {
              pcVar1 = *(code **)(lVar12 + 0x10);
              plVar10 = (longlong *)(lVar12 + 0x30);
              if (*(longlong **)(lVar12 + 0x20) != (longlong *)0x0) {
                plVar10 = *(longlong **)(lVar12 + 0x20);
              }
              uVar9 = (**(code **)(*plVar10 + 8))();
              (*pcVar1)(uVar9,puVar13);
            }
          }
          puVar13 = puVar13 + 0x18;
          lVar8 = lVar8 + -0xc0;
        } while (lVar8 != 0);
        uVar11 = uStack_50 & 0xffffffff;
      }
    }
    FUN_14748d10a(local_58,uVar11);
    if (local_58 != (ulonglong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143276ee6 FUN_143276ee6 body=479 status=ok
// SIG undefined FUN_143276ee6(void)

void FUN_143276ee6(uint *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  
  if (param_2 == (longlong *)0x0) {
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
LAB_143277002:
    param_1[4] = 0xffffffff;
  }
  else {
    uVar2 = *(uint *)((longlong)param_2 + 0xc);
    param_1[2] = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    uVar2 = *(uint *)(lVar7 + 0x10);
    if (*(uint *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar6 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar6);
      }
      LOCK();
      uVar2 = *(uint *)(lVar7 + 0x10);
      bVar8 = uVar2 == 0;
      if (bVar8) {
        *(uint *)(lVar7 + 0x10) = uVar6;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar8) {
        uVar2 = uVar6;
      }
    }
    param_1[3] = uVar2;
    if (param_2[0x15] == 0) {
      *param_1 = 0;
      uVar2 = 0;
    }
    else {
      uVar2 = *(uint *)(param_2[0x15] + 0xc);
      *param_1 = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      uVar2 = *(uint *)(lVar7 + 0x10);
      if (*(uint *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        uVar6 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar6);
        }
        LOCK();
        uVar2 = *(uint *)(lVar7 + 0x10);
        bVar8 = uVar2 == 0;
        if (bVar8) {
          *(uint *)(lVar7 + 0x10) = uVar6;
          uVar2 = 0;
        }
        UNLOCK();
        if (bVar8) {
          uVar2 = uVar6;
        }
      }
    }
    param_1[1] = uVar2;
    puVar3 = (uint *)(**(code **)(*param_2 + 0x7b8))(param_2,0,1,0xffffffff);
    if (puVar3 == (uint *)0x0) goto LAB_143277002;
    param_1[4] = puVar3[3];
    if (puVar3[1] != 0) {
      uVar2 = *puVar3;
      uVar5 = 0;
      if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14327700b;
      plVar4 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar4 != (longlong *)0x0) &&
         ((*(uint *)(plVar4 + 2) == puVar3[1] && ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)))) {
        if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
          lVar7 = *plVar4;
        }
        else {
          lVar7 = 0;
        }
        uVar5 = *(undefined8 *)(lVar7 + 0x28);
        goto LAB_14327700b;
      }
    }
  }
  uVar5 = 0;
LAB_14327700b:
  *(undefined8 *)(param_1 + 5) = uVar5;
  return;
}



// FUNCTION 1432770c6 FUN_1432770c6 body=117 status=ok
// SIG undefined FUN_1432770c6(void)

longlong * FUN_1432770c6(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *param_2;
    }
  }
  bVar1 = DAT_14c950c29;
  *param_1 = lVar2;
  lVar2 = param_2[1];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[1];
    }
  }
  param_1[1] = lVar2;
  memcpy(param_1 + 2,param_2 + 2,0xb0);
  return param_1;
}



// FUNCTION 14327713b FUN_14327713b body=55 status=ok
// SIG undefined FUN_14327713b(void)

void FUN_14327713b(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa8b48 == 0) {
    uVar1 = FUN_14125eb4e();
    DAT_14caa8b48 = FUN_14171c317(FUN_14632a641,uVar1,L"EClusterConnectionTypeEnum");
  }
  return;
}



// FUNCTION 143277172 FUN_143277172 body=158 status=ok
// SIG undefined FUN_143277172(void)

void FUN_143277172(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(longlong *)(param_1 + 0x78) != 0) &&
     (iVar1 = *(int *)(param_1 + 0x88), (longlong)iVar1 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x80);
    lVar3 = 0;
    do {
      local_50 = *(undefined8 *)(lVar2 + lVar3);
      local_58 = *(longlong *)(param_1 + 0x78);
      LOCK();
      *(int *)(local_58 + 0x200) = *(int *)(local_58 + 0x200) + 1;
      UNLOCK();
      local_48 = local_58;
      local_40 = local_50;
      local_38 = local_58;
      FUN_1429aeccc(&local_58);
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143277211 FUN_143277211 body=81 status=ok
// SIG undefined FUN_143277211(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143277211(void)

{
  if (DAT_14caa8be0 != (longlong *)0x0) {
    (**(code **)(*DAT_14caa8be0 + 0x10))();
  }
  _DAT_14caa8bb0 = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (DAT_14caa8bb9 == '\x01')) {
    FUN_14019e20a(DAT_14c948580,&DAT_14caa8bb0);
    DAT_14caa8bb9 = '\0';
  }
  return;
}



// FUNCTION 143277264 FUN_143277264 body=48 status=ok
// SIG undefined FUN_143277264(void)

longlong FUN_143277264(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_145b085a6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143277314 FUN_143277314 body=151 status=ok
// SIG undefined FUN_143277314(void)

bool FUN_143277314(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    (**(code **)(param_1 + 0x20))
              ((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 8),&local_30);
    if (&local_30 == param_2) {
      if (local_30 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_30;
      *(undefined4 *)(param_2 + 1) = local_28;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_24;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432773b2 FUN_1432773b2 body=151 status=ok
// SIG undefined FUN_1432773b2(void)

bool FUN_1432773b2(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    (**(code **)(param_1 + 0x20))
              ((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 8),&local_30);
    if (&local_30 == param_2) {
      if (local_30 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_30;
      *(undefined4 *)(param_2 + 1) = local_28;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_24;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143277450 FUN_143277450 body=151 status=ok
// SIG undefined FUN_143277450(void)

bool FUN_143277450(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    (**(code **)(param_1 + 0x20))
              ((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 8),&local_30);
    if (&local_30 == param_2) {
      if (local_30 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_30;
      *(undefined4 *)(param_2 + 1) = local_28;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_24;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432774ee FUN_1432774ee body=151 status=ok
// SIG undefined FUN_1432774ee(void)

bool FUN_1432774ee(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    (**(code **)(param_1 + 0x20))
              ((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 8),&local_30);
    if (&local_30 == param_2) {
      if (local_30 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_30;
      *(undefined4 *)(param_2 + 1) = local_28;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_24;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14327758c FUN_14327758c body=151 status=ok
// SIG undefined FUN_14327758c(void)

bool FUN_14327758c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    (**(code **)(param_1 + 0x20))
              ((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 8),&local_30);
    if (&local_30 == param_2) {
      if (local_30 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_30;
      *(undefined4 *)(param_2 + 1) = local_28;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_24;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143277644 FUN_143277644 body=29 status=ok
// SIG undefined FUN_143277644(void)

void FUN_143277644(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143277662 FUN_143277662 body=29 status=ok
// SIG undefined FUN_143277662(void)

undefined8 FUN_143277662(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143277698 FUN_143277698 body=29 status=ok
// SIG undefined FUN_143277698(void)

undefined8 FUN_143277698(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1432776b5 FUN_1432776b5 body=551 status=ok
// SIG undefined FUN_1432776b5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432776b5(void)

{
  char cVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined **ppuStack_70;
  undefined8 local_68;
  undefined *local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ChaosSolverEngine",&PTR_FUN_14a3ea670,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ChaosSolverEngine",&PTR_FUN_14a3eacc0,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ChaosSolverEngine",&PTR_FUN_14a3eb2a0,1,0);
  FUN_1400b22c2(&local_58,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_58,&DAT_14caa8a48);
  if (cVar1 == '\0') {
    _DAT_14caa8a48 = 0;
    uRam000000014caa8a50 = 0;
  }
  if (local_58 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  local_58 = &DAT_14a19662d;
  local_50 = 4;
  local_4c = 0;
  FUN_14001a6c0(&local_58,1);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 4;
  FUN_14282b410(L"/Script/ChaosSolverEngine",&PTR_FUN_14a3ec000,1,&PTR_FUN_14a3ebf60);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/ChaosSolverEngine",&PTR_FUN_14a3eccd0,2,&PTR_FUN_14a3ecca0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ChaosSolverEngine",&PTR_FUN_14a3ed040,1,0);
  local_68 = 1;
  ppuStack_70 = &PTR_FUN_14a3ee210;
  local_78 = 2;
  FUN_14282b410(L"/Script/ChaosSolverEngine",&PTR_FUN_14a3ee280,1,&PTR_FUN_14a3ee230);
  local_58 = (undefined *)0x800000014a3ee2a8;
  local_44 = 0x11;
  local_50 = FUN_14577453c();
  local_4c = 1;
  FUN_14632a856(&local_58);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ChaosSolverEngine",&PTR_FUN_14a3ee690,1,0);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432778e0 FUN_1432778e0 body=61 status=ok
// SIG undefined FUN_1432778e0(void)

undefined8 * FUN_1432778e0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x2a0,0x10);
  FUN_1406ff4f8(puVar1,param_1,0);
  *puVar1 = &PTR_FUN_14a3fda60;
  return puVar1;
}



// FUNCTION 143277970 FUN_143277970 body=29 status=ok
// SIG undefined FUN_143277970(void)

void FUN_143277970(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14327798e FUN_14327798e body=108 status=ok
// SIG undefined FUN_14327798e(void)

undefined8 * FUN_14327798e(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_LAB_14a3fdf20;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_1401712c0(param_1 + 0x11);
  puVar1 = (undefined8 *)param_1[3];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1432779fa FUN_1432779fa body=81 status=ok
// SIG undefined FUN_1432779fa(void)

void FUN_1432779fa(longlong *param_1)

{
  undefined1 auStack_38 [40];
  longlong *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_1 + 1;
  FUN_146ef0f10(*(longlong *)(*param_1 + 0xa80) + 0x110);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143277a56 FUN_143277a56 body=29 status=ok
// SIG undefined FUN_143277a56(void)

void FUN_143277a56(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143277a74 FUN_143277a74 body=108 status=ok
// SIG undefined FUN_143277a74(void)

undefined8 * FUN_143277a74(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_LAB_14a3fdf40;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_1401712c0(param_1 + 0x11);
  puVar1 = (undefined8 *)param_1[3];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143277ae0 FUN_143277ae0 body=277 status=ok
// SIG undefined FUN_143277ae0(void)

void FUN_143277ae0(void)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/FieldSystemEngine",&PTR_FUN_14a3efd90,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/FieldSystemEngine",&PTR_FUN_14a3f0100,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/FieldSystemEngine",&PTR_FUN_14a3f1e50,1,0);
  local_48 = 0x800000014a3f1e78;
  local_34 = 0x11;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_14171c728(&DAT_14caa8cc8,&local_48);
  uStack_60 = 0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/FieldSystemEngine",&PTR_FUN_14a3fd6a0,0x18,&PTR_FUN_14a3fd670);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143277bf8 FUN_143277bf8 body=55 status=ok
// SIG undefined FUN_143277bf8(void)

void FUN_143277bf8(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa9058 == 0) {
    uVar1 = FUN_140ef4a6d();
    DAT_14caa9058 = FUN_14171c317(FUN_14632c723,uVar1,L"ECollectionAttributeEnum");
  }
  return;
}



// FUNCTION 143277c2f FUN_143277c2f body=55 status=ok
// SIG undefined FUN_143277c2f(void)

void FUN_143277c2f(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa9070 == 0) {
    uVar1 = FUN_140ef4a6d();
    DAT_14caa9070 = FUN_14171c317(FUN_14632c752,uVar1,L"ECollectionGroupEnum");
  }
  return;
}



// FUNCTION 143277c66 FUN_143277c66 body=55 status=ok
// SIG undefined FUN_143277c66(void)

void FUN_143277c66(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa91b0 == 0) {
    uVar1 = FUN_140ef4a6d();
    DAT_14caa91b0 = FUN_14171c317(FUN_14632cc9a,uVar1,L"EChaosBreakingSortMethod");
  }
  return;
}



// FUNCTION 143277c9d FUN_143277c9d body=55 status=ok
// SIG undefined FUN_143277c9d(void)

void FUN_143277c9d(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa91f8 == 0) {
    uVar1 = FUN_140ef4a6d();
    DAT_14caa91f8 = FUN_14171c317(FUN_14632ccf8,uVar1,L"EChaosCollisionSortMethod");
  }
  return;
}



// FUNCTION 143277cd4 FUN_143277cd4 body=55 status=ok
// SIG undefined FUN_143277cd4(void)

void FUN_143277cd4(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa9240 == 0) {
    uVar1 = FUN_140ef4a6d();
    DAT_14caa9240 = FUN_14171c317(FUN_14632cd56,uVar1,L"EChaosRemovalSortMethod");
  }
  return;
}



// FUNCTION 143277d0b FUN_143277d0b body=55 status=ok
// SIG undefined FUN_143277d0b(void)

void FUN_143277d0b(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa9288 == 0) {
    uVar1 = FUN_140ef4a6d();
    DAT_14caa9288 = FUN_14171c317(FUN_14632cdb4,uVar1,L"EChaosTrailingSortMethod");
  }
  return;
}



// FUNCTION 143277d42 FUN_143277d42 body=164 status=ok
// SIG undefined FUN_143277d42(void)

void FUN_143277d42(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(uint *)(param_1[2] + 0xd4) & 0x40080) != 0x80) {
    local_1c = param_2;
    uVar1 = FUN_14477b072(param_1,DAT_14cac9bd0);
    (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_1c);
    lVar2 = FUN_1447210f0(param_1);
    if (lVar2 != 0) {
      uVar1 = FUN_14119d0a4(lVar2);
      FUN_140e65914(uVar1,param_1,*(undefined4 *)(lVar2 + 0x6f4));
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143277de7 FUN_143277de7 body=69 status=ok
// SIG undefined FUN_143277de7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143277de7(void)

{
  _DAT_14caa95c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143277e29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caa95c8,1);
  return;
}



// FUNCTION 143277e2c FUN_143277e2c body=69 status=ok
// SIG undefined FUN_143277e2c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143277e2c(void)

{
  _DAT_14caa95d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143277e6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caa95d8,1);
  return;
}



// FUNCTION 143277e71 FUN_143277e71 body=69 status=ok
// SIG undefined FUN_143277e71(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143277e71(void)

{
  _DAT_14caa95e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143277eb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caa95e8,1);
  return;
}



// FUNCTION 143277eb6 FUN_143277eb6 body=69 status=ok
// SIG undefined FUN_143277eb6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143277eb6(void)

{
  _DAT_14caa95f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143277ef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caa95f8,1);
  return;
}



// FUNCTION 143277efb FUN_143277efb body=69 status=ok
// SIG undefined FUN_143277efb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143277efb(void)

{
  _DAT_14caa9600 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143277f3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caa9608,1);
  return;
}



// FUNCTION 143277f40 FUN_143277f40 body=69 status=ok
// SIG undefined FUN_143277f40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143277f40(void)

{
  _DAT_14caa9618 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143277f82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caa9620,1);
  return;
}



// FUNCTION 143277f85 FUN_143277f85 body=69 status=ok
// SIG undefined FUN_143277f85(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143277f85(void)

{
  _DAT_14caa9630 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143277fc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caa9638,1);
  return;
}



// FUNCTION 143277fca FUN_143277fca body=69 status=ok
// SIG undefined FUN_143277fca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143277fca(void)

{
  _DAT_14caa9640 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014327800c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caa9648,1);
  return;
}



// FUNCTION 14327800f FUN_14327800f body=69 status=ok
// SIG undefined FUN_14327800f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14327800f(void)

{
  _DAT_14caa9650 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143278051. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caa9658,1);
  return;
}



// FUNCTION 143278054 FUN_143278054 body=69 status=ok
// SIG undefined FUN_143278054(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143278054(void)

{
  _DAT_14caa9660 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143278096. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caa9668,1);
  return;
}



// FUNCTION 1432780e7 FUN_1432780e7 body=69 status=ok
// SIG undefined FUN_1432780e7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432780e7(void)

{
  _DAT_14caa9730 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143278129. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caa9738,1);
  return;
}



// FUNCTION 14327812c FUN_14327812c body=69 status=ok
// SIG undefined FUN_14327812c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14327812c(void)

{
  _DAT_14caa9740 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014327816e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caa9748,1);
  return;
}



// FUNCTION 143278171 FUN_143278171 body=69 status=ok
// SIG undefined FUN_143278171(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143278171(void)

{
  _DAT_14caa9758 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432781b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caa9760,1);
  return;
}



// FUNCTION 1432781b6 FUN_1432781b6 body=1027 status=ok
// SIG undefined FUN_1432781b6(void)

double * FUN_1432781b6(longlong param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((*(char *)(param_1 + 0xa28) == '\0') || (*(char *)(param_1 + 0x82c) == '\x01')) {
    FUN_1406ceb3e(param_1,&local_f8,&DAT_14c846480);
    *(undefined8 *)(param_1 + 0xa28) = local_c8;
    *(undefined8 *)(param_1 + 0xa18) = local_d8;
    *(undefined8 *)(param_1 + 0xa20) = uStack_d0;
    *(undefined8 *)(param_1 + 0xa08) = local_e8;
    *(undefined8 *)(param_1 + 0xa10) = uStack_e0;
    *(undefined8 *)(param_1 + 0x9f8) = local_f8;
    *(undefined8 *)(param_1 + 0xa00) = uStack_f0;
    if (*(char *)(param_1 + 0xa28) == '\0') {
      dVar3 = 0.0;
      dVar13 = 0.0;
      dVar7 = 0.0;
      dVar5 = 0.0;
      dVar8 = 0.0;
      dVar10 = 0.0;
      goto LAB_1432784be;
    }
  }
  dVar10 = *param_3;
  dVar1 = param_3[1];
  dVar7 = param_3[2];
  dVar12 = param_3[8];
  dVar2 = param_3[9];
  dVar17 = param_3[10];
  dVar8 = dVar7 + dVar7;
  dVar11 = dVar10 + dVar10;
  dVar14 = dVar1 + dVar1;
  dVar3 = param_3[3];
  dVar5 = param_3[3];
  dVar16 = dVar14 * dVar3;
  auVar9._0_8_ = (dVar16 + *param_3 * dVar8) * dVar17;
  auVar9._8_8_ = (dVar11 * dVar5 + *param_3 * dVar11) * param_3[0xb];
  dVar3 = dVar8 * dVar3;
  dVar5 = dVar11 * dVar5;
  dVar13 = (1.0 - (dVar8 * dVar7 + dVar14 * dVar1)) * dVar12;
  dVar7 = (1.0 - (dVar8 * dVar7 + dVar11 * dVar10)) * dVar2;
  dVar4 = (dVar3 + dVar14 * dVar10) * dVar12;
  dVar6 = (dVar5 + dVar8 * dVar1) * dVar2;
  dVar12 = (*param_3 * dVar8 - dVar16) * dVar12;
  auVar18._0_8_ = dVar2 * (dVar14 * dVar10 - dVar3);
  auVar18._8_8_ = dVar17 * (dVar8 * dVar1 - dVar5);
  auVar9 = blendpd(auVar9,auVar18,2);
  auVar19._8_4_ = SUB84(dVar7,0);
  auVar19._0_8_ = dVar13;
  auVar19._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  auVar19 = blendpd(auVar18,auVar19,2);
  dVar17 = (1.0 - (dVar11 * dVar10 + dVar14 * dVar1)) * dVar17;
  dVar7 = (*(double *)(param_1 + 0x9f8) + *(double *)(param_1 + 0xa10)) * 0.5;
  dVar1 = (*(double *)(param_1 + 0xa00) + *(double *)(param_1 + 0xa18)) * 0.5;
  dVar14 = (*(double *)(param_1 + 0xa08) + *(double *)(param_1 + 0xa20)) * 0.5;
  dVar16 = (*(double *)(param_1 + 0xa10) - *(double *)(param_1 + 0x9f8)) * 0.5;
  dVar15 = (*(double *)(param_1 + 0xa18) - *(double *)(param_1 + 0xa00)) * 0.5;
  dVar5 = (*(double *)(param_1 + 0xa20) - *(double *)(param_1 + 0xa08)) * 0.5;
  dVar2 = dVar14 * auVar9._0_8_ + dVar1 * auVar19._0_8_ + dVar7 * dVar13 + param_3[4];
  dVar11 = dVar14 * auVar9._8_8_ + dVar1 * auVar19._8_8_ + dVar7 * dVar4 + param_3[5];
  dVar3 = ABS(dVar5 * auVar9._0_8_) + ABS(auVar19._0_8_ * dVar15) + ABS(dVar16 * dVar13);
  dVar13 = ABS(dVar5 * auVar9._8_8_) + ABS(auVar19._8_8_ * dVar15) + ABS(dVar16 * dVar4);
  dVar8 = dVar2 - dVar3;
  dVar10 = dVar11 - dVar13;
  dVar3 = dVar3 + dVar2;
  dVar13 = dVar13 + dVar11;
  dVar7 = dVar14 * dVar17 + dVar1 * dVar6 + dVar7 * dVar12 + param_3[6];
  dVar12 = ABS(dVar15 * dVar6) + ABS(dVar16 * dVar12) + ABS(dVar5 * dVar17);
  dVar5 = dVar7 - dVar12;
  dVar7 = dVar7 + dVar12;
LAB_1432784be:
  dVar7 = (dVar7 - dVar5) * 0.5;
  dVar13 = (dVar13 - dVar10) * 0.5;
  dVar3 = (dVar3 - dVar8) * 0.5;
  *param_2 = dVar8 + dVar3;
  param_2[1] = dVar10 + dVar13;
  param_2[2] = dVar5 + dVar7;
  param_2[3] = dVar3;
  param_2[4] = dVar13;
  param_2[5] = dVar7;
  param_2[6] = SQRT(dVar7 * dVar7 + dVar3 * dVar3 + dVar13 * dVar13);
  if ((local_c0 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432785be FUN_1432785be body=4142 status=ok
// SIG undefined FUN_1432785be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1432785be(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  float fVar20;
  undefined4 uVar21;
  byte bVar22;
  int iVar23;
  ulonglong uVar24;
  uint uVar25;
  longlong *plVar26;
  int iVar27;
  double dVar28;
  ulonglong unaff_RBX;
  longlong lVar29;
  int iVar30;
  ulonglong uVar31;
  longlong lVar32;
  int iVar33;
  longlong lVar34;
  longlong lVar35;
  uint uVar36;
  longlong lVar37;
  longlong lVar38;
  double dVar39;
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  undefined1 auVar49 [16];
  double dVar50;
  undefined1 auVar51 [16];
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  double dVar62;
  undefined1 auStack_3a8 [32];
  undefined4 local_388;
  ulonglong local_380;
  double *local_378;
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  longlong *local_340;
  double local_338;
  double dStack_330;
  longlong local_328 [3];
  undefined8 uStack_310;
  longlong local_308;
  undefined8 uStack_300;
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  double local_2c8;
  double dStack_2c0;
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  double local_298;
  undefined8 uStack_290;
  double local_288;
  double dStack_280;
  undefined1 *local_278;
  undefined1 **ppuStack_270;
  double local_268;
  undefined8 uStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined1 *local_178;
  longlong *local_170;
  double local_168;
  undefined4 local_160;
  undefined4 local_15c;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  lVar34 = *(longlong *)(param_1 + 0x3b8);
  local_340 = param_2;
  if (lVar34 == 0) {
    uVar31 = 0;
    goto LAB_143279506;
  }
  if (*(char *)(param_1 + 0x5a7) == '\x01') {
    if (0 < *(int *)(lVar34 + 200)) {
      lVar29 = 0;
      uVar31 = 0;
      do {
        lVar38 = *(longlong *)(lVar34 + 0xc0);
        if (*(longlong *)(lVar38 + lVar29 * 8) != 0) {
          if (lVar34 == 0) {
            uVar24 = 0xffffffff;
          }
          else {
            uVar24 = (ulonglong)*(uint *)(lVar34 + 0x1e8);
          }
          lVar34 = *(longlong *)(param_1 + 0x7a0);
          if (lVar34 == 0) {
            local_368 = DAT_14c8464a0;
            dStack_360 = DAT_14c8464a8;
            local_358 = DAT_14c8464b0;
            dStack_350 = DAT_14c8464b8;
            lVar34 = 0;
            dVar48 = DAT_14c8464d0;
            dStack_330 = dRam000000014c8464d8;
            dVar28 = DAT_14c8464c0;
            dVar39 = DAT_14c8464c8;
            dVar56 = DAT_14c846480;
            dVar62 = DAT_14c846488;
            dVar40 = DAT_14c846490;
            dVar57 = DAT_14c846498;
          }
          else {
            if (*(char *)(lVar34 + 0x118) == '\0') {
              plVar26 = (longlong *)(*(longlong *)(lVar34 + 0xb8) + 0xc0);
            }
            else {
              plVar26 = (longlong *)(lVar34 + 0x108);
            }
            lVar34 = *plVar26;
            uVar24 = (longlong)(int)uVar24 * 0x30;
            uVar3 = *(undefined8 *)(lVar34 + 0x20 + uVar24);
            uVar4 = *(undefined8 *)(lVar34 + 0x28 + uVar24);
            uVar5 = *(undefined8 *)(lVar34 + 0x10 + uVar24);
            local_368 = (double)(float)uVar5;
            dStack_360 = (double)(float)((ulonglong)uVar5 >> 0x20);
            uVar5 = *(undefined8 *)(lVar34 + 0x18 + uVar24);
            local_358 = (double)(float)uVar5;
            dStack_350 = (double)(float)((ulonglong)uVar5 >> 0x20);
            uVar5 = *(undefined8 *)(lVar34 + 8 + uVar24);
            dVar48 = (double)(float)uVar4;
            dStack_330 = (double)(float)((ulonglong)uVar4 >> 0x20);
            dVar28 = (double)(float)uVar3;
            dVar39 = (double)(float)((ulonglong)uVar3 >> 0x20);
            dVar56 = (double)(float)*(undefined8 *)(lVar34 + uVar24);
            dVar62 = (double)(float)((ulonglong)*(undefined8 *)(lVar34 + uVar24) >> 0x20);
            dVar40 = (double)(float)uVar5;
            dVar57 = (double)(float)((ulonglong)uVar5 >> 0x20);
          }
          local_2c8 = 0.0;
          dStack_2c0 = 0.0;
          local_2d8 = ZEXT816(0);
          auVar58 = *(undefined1 (*) [16])(param_1 + -0x28);
          dVar10 = auVar58._0_8_;
          dVar11 = auVar58._8_8_;
          auVar59 = *(undefined1 (*) [16])(param_1 + -0x18);
          dVar13 = auVar59._0_8_;
          dVar6 = auVar59._8_8_;
          auVar61._8_8_ = dVar39;
          auVar61._0_8_ = dVar28;
          auVar58 = minpd(auVar61,auVar58);
          auVar60._8_8_ = dStack_330;
          auVar60._0_8_ = dVar48;
          auVar61 = minpd(auVar60,auVar59);
          auVar59._8_8_ = -(ulonglong)(auVar58._8_8_ < 0.0);
          auVar59._0_8_ = -(ulonglong)(auVar58._0_8_ < 0.0);
          iVar23 = movmskpd((int)uVar24,auVar59);
          auVar58._8_8_ = -(ulonglong)(auVar61._8_8_ < 0.0);
          auVar58._0_8_ = -(ulonglong)(auVar61._0_8_ < 0.0);
          uVar25 = movmskpd((int)lVar34,auVar58);
          if ((uVar25 & 0x3fffffff) == 0 && iVar23 == 0) {
            dVar16 = *(double *)(param_1 + -0x68);
            dVar17 = *(double *)(param_1 + -0x60);
            dVar18 = *(double *)(param_1 + -0x58);
            dVar19 = *(double *)(param_1 + -0x50);
            dVar12 = *(double *)(param_1 + -0x50);
            dVar47 = *(double *)(param_1 + -0x50);
            dVar14 = *(double *)(param_1 + -0x68);
            dVar15 = *(double *)(param_1 + -0x68);
            dVar7 = *(double *)(param_1 + -0x60);
            dVar50 = *(double *)(param_1 + -0x60);
            dVar8 = *(double *)(param_1 + -0x58);
            dVar54 = *(double *)(param_1 + -0x58);
            dVar55 = dVar56 * dVar54 * 1.0 +
                     dVar57 * dVar50 + dVar40 * dVar15 * -1.0 + dVar62 * dVar47;
            dVar15 = dVar40 * dVar54 * -1.0 +
                     ((dVar15 * dVar56 * -1.0 + dVar57 * dVar47) - dVar62 * dVar50);
            dVar45 = local_368 * dVar10;
            dVar46 = dStack_360 * dVar11;
            dVar43 = local_358 * dVar13;
            dVar44 = dStack_350 * dVar6;
            dVar50 = dVar46 * dVar16 - dVar45 * dVar17;
            dVar52 = dVar43 * dVar17 - dVar46 * dVar18;
            dVar53 = dVar45 * dVar18 - dVar43 * dVar16;
            dVar54 = dVar44 * dVar19 - dVar44 * dVar19;
            dVar52 = dVar52 + dVar52;
            dVar53 = dVar53 + dVar53;
            dVar50 = dVar50 + dVar50;
            dVar54 = dVar54 + dVar54;
            local_2d8._0_8_ =
                 (dVar50 * dVar17 - dVar18 * dVar53) + dVar12 * dVar52 + dVar45 +
                 *(double *)(param_1 + -0x48);
            local_2d8._8_8_ =
                 (dVar52 * dVar18 - dVar50 * dVar16) + dVar47 * dVar53 + dVar46 +
                 *(double *)(param_1 + -0x40);
            local_2c8 = (dVar53 * dVar16 - dVar17 * dVar52) + dVar12 * dVar50 + dVar43 +
                        *(double *)(param_1 + -0x38);
            dStack_2c0 = (dVar54 * dVar19 - dVar54 * dVar19) + dVar47 * dVar54 + dVar44 +
                         *(double *)(param_1 + -0x30);
            local_2f8._8_4_ = SUB84(dVar55,0);
            local_2f8._0_8_ =
                 dVar62 * dVar8 * -1.0 + dVar40 * dVar7 + dVar57 * dVar14 * 1.0 + dVar56 * dVar12;
            local_2f8._12_4_ = (int)((ulonglong)dVar55 >> 0x20);
            local_2e8._8_4_ = SUB84(dVar15,0);
            local_2e8._0_8_ =
                 dVar57 * dVar8 * 1.0 + ((dVar14 * dVar62 * 1.0 + dVar40 * dVar12) - dVar56 * dVar7)
            ;
            local_2e8._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
            dVar13 = dVar48 * dVar13;
            dVar6 = dStack_330 * dVar6;
            local_338 = dVar48;
          }
          else {
            local_338 = dVar48 * dVar13;
            dStack_330 = dStack_330 * dVar6;
            dVar7 = *(double *)(param_1 + -0x68);
            dVar54 = *(double *)(param_1 + -0x60);
            dVar8 = *(double *)(param_1 + -0x58);
            dVar12 = dVar54 + dVar54;
            dVar14 = dVar8 + dVar8;
            dVar47 = dVar7 * (dVar7 + dVar7);
            local_1a8 = (1.0 - (dVar47 + dVar54 * dVar12)) * dVar13;
            dVar55 = *(double *)(param_1 + -0x68) * dVar14;
            dVar6 = *(double *)(param_1 + -0x50);
            dVar15 = dVar14 * dVar6;
            dVar50 = (dVar7 + dVar7) * *(double *)(param_1 + -0x50);
            dVar6 = dVar12 * dVar6;
            local_1b8 = (dVar6 + dVar55) * dVar13;
            dStack_1b0 = (dVar14 * dVar54 - dVar50) * dVar13;
            local_1f8 = (1.0 - (dVar8 * dVar14 + dVar54 * dVar12)) * dVar10;
            dVar13 = (1.0 - (dVar8 * dVar14 + dVar47)) * dVar11;
            dStack_1f0 = (dVar12 * dVar7 + dVar15) * dVar10;
            local_1c8 = (dVar14 * dVar54 + dVar50) * dVar11;
            local_1e8 = (dVar55 - dVar6) * dVar10;
            uStack_1e0 = 0;
            local_1d8._8_4_ = SUB84(dVar13,0);
            local_1d8._0_8_ = (dVar12 * dVar7 - dVar15) * dVar11;
            local_1d8._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
            uStack_1c0 = 0;
            uStack_1a0 = 0;
            local_198 = *(undefined8 *)(param_1 + -0x48);
            uStack_190 = *(undefined8 *)(param_1 + -0x40);
            local_188 = *(undefined8 *)(param_1 + -0x38);
            uStack_180 = 0x3ff0000000000000;
            dVar13 = dVar62 + dVar62;
            dVar6 = dVar40 + dVar40;
            dVar47 = dVar56 * (dVar56 + dVar56);
            local_228 = (1.0 - (dVar47 + dVar62 * dVar13)) * dVar48;
            dVar12 = (dVar56 + dVar56) * dVar57;
            local_238 = (dVar13 * dVar57 + dVar56 * dVar6) * dVar48;
            local_258 = (dVar13 * dVar56 - dVar6 * dVar57) * dVar39;
            dStack_230 = (dVar6 * dVar62 - dVar12) * dVar48;
            local_278 = (undefined1 *)((1.0 - (dVar40 * dVar6 + dVar62 * dVar13)) * dVar28);
            dStack_250 = (1.0 - (dVar40 * dVar6 + dVar47)) * dVar39;
            ppuStack_270 = (undefined1 **)((dVar13 * dVar56 + dVar6 * dVar57) * dVar28);
            local_248 = (dVar6 * dVar62 + dVar12) * dVar39;
            local_268 = (dVar56 * dVar6 - dVar13 * dVar57) * dVar28;
            uStack_260 = 0;
            uStack_240 = 0;
            uStack_220 = 0;
            local_218 = local_368;
            dStack_210 = dStack_360;
            local_208 = local_358;
            uStack_200 = 0x3ff0000000000000;
            FUN_1447fea8d(&local_178,&local_278,&local_1f8);
            dVar6 = dStack_330;
            dVar13 = local_338;
            auVar58 = _DAT_149934d80;
            local_368 = local_168;
            dVar56 = local_168 * local_168 +
                     (double)local_178 * (double)local_178 + (double)local_170 * (double)local_170;
            dVar62 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
            dVar48 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
            uVar24 = -(ulonglong)(0.0 <= dVar56 + -9.99999993922529e-09);
            dVar56 = (double)(~uVar24 & 0x3ff0000000000000 |
                             (ulonglong)(1.0 / SQRT(dVar56)) & uVar24);
            uVar24 = -(ulonglong)(0.0 <= dVar62 + -9.99999993922529e-09);
            dVar62 = (double)(~uVar24 & 0x3ff0000000000000 |
                             (ulonglong)(1.0 / SQRT(dVar62)) & uVar24);
            uVar24 = -(ulonglong)(0.0 <= dVar48 + -9.99999993922529e-09);
            dVar48 = (double)(~uVar24 & 0x3ff0000000000000 |
                             (ulonglong)(1.0 / SQRT(dVar48)) & uVar24);
            auVar41._8_8_ = -(ulonglong)(0.0 <= dVar39 * dVar11);
            auVar41._0_8_ = -(ulonglong)(0.0 <= dVar28 * dVar10);
            auVar59 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar41);
            dVar40 = (double)(~-(ulonglong)(0.0 <= local_338) & 0xbff0000000000000 |
                             (ulonglong)
                             ((uint)(-(ulonglong)(0.0 <= local_338) >> 0x20) & 0x3ff00000) << 0x20);
            dVar57 = auVar59._0_8_;
            local_178 = (undefined1 *)((double)local_178 * dVar56 * dVar57);
            local_170 = (longlong *)((double)local_170 * dVar56 * dVar57);
            local_168 = dVar56 * local_168 * dVar57;
            dVar56 = auVar59._8_8_;
            local_148 = dVar62 * local_148 * dVar56;
            local_150 = local_150 * dVar62 * dVar56;
            local_158 = dVar56 * local_158 * dVar62;
            local_128 = dVar48 * local_128 * dVar40;
            local_130 = local_130 * dVar48 * dVar40;
            local_138 = dVar40 * local_138 * dVar48;
            FUN_14481fd10(&local_298,&local_178);
            dVar48 = local_288 * local_288 + local_298 * local_298;
            dVar56 = dStack_280 * dStack_280 + uStack_290 * uStack_290;
            auVar49._0_8_ = dVar48 + dVar56;
            auVar49._8_8_ = dVar48 + dVar56;
            auVar42._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar49._8_8_);
            auVar42._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar49._0_8_);
            auVar59 = sqrtpd(auVar49,auVar49);
            auVar58 = divpd(auVar58,auVar59);
            auVar51._0_8_ = auVar58._0_8_ * local_288;
            auVar51._8_8_ = auVar58._8_8_ * dStack_280;
            local_2e8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar51,auVar42);
            local_2f8._8_8_ =
                 (ulonglong)(uStack_290 * auVar58._8_8_) &
                 -(ulonglong)(9.99999993922529e-09 <= auVar49._8_8_);
            local_2f8._0_8_ =
                 (ulonglong)(local_298 * auVar58._0_8_) &
                 -(ulonglong)(9.99999993922529e-09 <= auVar49._0_8_);
            local_2d8._8_8_ = uStack_110;
            local_2d8._0_8_ = local_118;
            local_2c8 = local_108;
            dStack_2c0 = 0.0;
          }
          dVar39 = dVar39 * dVar11;
          dVar28 = dVar28 * dVar10;
          local_2b8._8_4_ = SUB84(dVar39,0);
          local_2b8._0_8_ = dVar28;
          local_2b8._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
          local_2a8._8_4_ = SUB84(dVar6,0);
          local_2a8._0_8_ = dVar13;
          local_2a8._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
          if ((((((dVar28 != 0.0) || (NAN(dVar28))) || (dVar39 != 0.0)) ||
               ((NAN(dVar39) || (dVar13 != 0.0)))) || (NAN(dVar13))) &&
             ((plVar26 = *(longlong **)(*(longlong *)(lVar38 + lVar29 * 8) + 0x248),
              plVar26 != (longlong *)0x0 && ((*(byte *)(plVar26 + 5) & 1) == 0)))) {
            bVar22 = (**(code **)(*plVar26 + 0x2b0))(plVar26,local_2f8,local_340);
            uVar31 = (ulonglong)(byte)((byte)uVar31 | bVar22);
          }
          lVar34 = *(longlong *)(param_1 + 0x3b8);
        }
        lVar29 = lVar29 + 1;
      } while (lVar29 < *(int *)(lVar34 + 200));
      uVar31 = uVar31 ^ 1;
      goto LAB_143279506;
    }
  }
  else {
    local_2f8 = ZEXT816(0);
    local_298 = 0.0;
    uStack_290 = 0.0;
    lVar29 = *(longlong *)(lVar34 + 0x218);
    plVar26 = *(longlong **)(lVar34 + 0x220);
    if (plVar26 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar26 + 1) = (int)plVar26[1] + 1;
      UNLOCK();
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
    fVar20 = DAT_14c760f54;
    local_358 = (double)(param_1 + -0x2a8);
    local_308 = 0;
    uStack_300 = 0;
    local_328[2] = 0;
    uStack_310 = 0;
    uVar25 = FUN_1401f66f6(lVar29,DAT_14c996af0);
    iVar23 = 0;
    uVar36 = 0;
    if (0 < (int)uVar25) {
      dVar28 = (double)(ulonglong)uVar25;
      dVar39 = 0.0;
      lVar34 = 0x28;
      uVar36 = 0;
      iVar23 = 0;
      local_368 = dVar28;
      do {
        uVar31 = uStack_310;
        lVar38 = *(longlong *)(lVar29 + 0x3d0);
        dVar48 = *(double *)(lVar38 + lVar34) - *(double *)(lVar38 + -0x18 + lVar34);
        dVar62 = *(double *)(lVar38 + -8 + lVar34) - *(double *)(lVar38 + -0x20 + lVar34);
        dVar56 = *(double *)(lVar38 + -0x10 + lVar34) - *(double *)(lVar38 + -0x28 + lVar34);
        if ((double)(fVar20 * fVar20) < dVar48 * dVar48 + dVar56 * dVar56 + dVar62 * dVar62) {
          lVar38 = *(longlong *)(lVar29 + 0x3b0);
          lVar37 = (longlong)(int)uStack_310;
          uVar25 = (int)uStack_310 + 1;
          uStack_310 = CONCAT44(uStack_310._4_4_,uVar25);
          if (uStack_310._4_4_ < uVar25) {
            FUN_1446f48e2(local_328 + 2,uVar31 & 0xffffffff);
            dVar28 = local_368;
          }
          uVar31 = uStack_300;
          *(undefined4 *)(local_328[2] + lVar37 * 4) =
               *(undefined4 *)(lVar38 + (longlong)dVar39 * 4);
          lVar38 = (longlong)(int)uStack_300;
          uVar25 = (int)uStack_300 + 1;
          uStack_300 = CONCAT44(uStack_300._4_4_,uVar25);
          if (uStack_300._4_4_ < uVar25) {
            FUN_1446f48e2(&local_308,uVar31 & 0xffffffff);
            dVar28 = local_368;
          }
          *(int *)(local_308 + lVar38 * 4) = SUB84(dVar39,0);
          uVar36 = uVar36 + *(int *)(*(longlong *)(lVar29 + 0x450) + (longlong)dVar39 * 4);
          iVar23 = iVar23 + *(int *)(*(longlong *)(lVar29 + 0x490) + (longlong)dVar39 * 4);
        }
        dVar39 = (double)((longlong)dVar39 + 1);
        lVar34 = lVar34 + 0x38;
      } while (dVar28 != dVar39);
    }
    local_328[0] = 0;
    local_328[1] = 0;
    FUN_1474a5948(local_358);
    uVar21 = local_2f8._8_4_;
    local_2f8._8_4_ = local_2f8._8_4_ + uVar36;
    if ((uint)(local_2f8._12_4_ - uVar21) < uVar36) {
      FUN_1403e3958(local_2f8);
    }
    uVar31 = uStack_300 & 0xffffffff;
    if (0 < (int)uStack_300) {
      lVar34 = 0;
      iVar33 = 0;
      do {
        lVar38 = (longlong)*(int *)(local_308 + lVar34 * 4);
        local_160 = *(undefined4 *)(*(longlong *)(lVar29 + 0x430) + lVar38 * 4);
        iVar27 = *(int *)(*(longlong *)(lVar29 + 0x450) + lVar38 * 4);
        local_178 = local_2f8;
        local_170 = local_328;
        local_15c = (undefined4)lVar34;
        local_158 = (double)CONCAT44(local_158._4_4_,iVar33);
        local_1f8 = 0.0;
        dStack_1f0 = (double)((ulonglong)dStack_1f0 & 0xffffffff00000000);
        local_278 = &LAB_14327c3e4;
        ppuStack_270 = &local_178;
        local_378 = &local_1f8;
        local_380 = local_380 & 0xffffffff00000000;
        local_168 = (double)(lVar29 + 0x220);
        FUN_1401f8d10(L"ParallelFor Task",iVar27,1,&local_278);
        iVar33 = iVar33 + iVar27;
        lVar34 = lVar34 + 1;
        uVar31 = (ulonglong)(int)uStack_300;
      } while (lVar34 < (longlong)uVar31);
    }
    iVar33 = (int)uStack_290;
    uStack_290 = (double)CONCAT44(uStack_290._4_4_,(int)uStack_290 + iVar23 * 3);
    if ((uint)(uStack_290._4_4_ - iVar33) < (uint)(iVar23 * 3)) {
      FUN_1446f48e2();
      uVar31 = uStack_300 & 0xffffffff;
    }
    dVar28 = uStack_290;
    iVar23 = (int)uStack_290;
    if ((int)uVar31 < 1) {
      iVar33 = 0;
      if ((int)uStack_290 < 0) goto LAB_1432795a6;
LAB_14327946a:
      if (iVar33 < (int)uStack_290) {
        uStack_290 = (double)CONCAT44(uStack_290._4_4_,iVar33);
        FUN_14479f406();
      }
    }
    else {
      lVar34 = 0;
      iVar33 = 0;
      iVar27 = 0;
      do {
        lVar37 = (longlong)*(int *)(local_308 + lVar34 * 4);
        iVar9 = *(int *)(*(longlong *)(lVar29 + 0x450) + lVar37 * 4);
        lVar38 = (longlong)*(int *)(*(longlong *)(lVar29 + 0x490) + lVar37 * 4);
        if (0 < lVar38) {
          iVar30 = iVar27 - *(int *)(*(longlong *)(lVar29 + 0x430) + lVar37 * 4);
          lVar32 = (longlong)*(int *)(*(longlong *)(lVar29 + 0x470) + lVar37 * 4);
          lVar38 = lVar38 + lVar32;
          lVar37 = lVar32 * 0xc;
          do {
            lVar35 = *(longlong *)(lVar29 + 800);
            if (*(longlong *)(lVar29 + 800) == 0) {
              lVar35 = lVar29 + 0x310;
            }
            uVar25 = (uint)lVar32;
            uVar36 = uVar25 + 0x1f;
            if (-1 < (int)uVar25) {
              uVar36 = uVar25;
            }
            if ((*(uint *)(lVar35 + (longlong)((int)uVar36 >> 5) * 4) >> (uVar25 & 0x1f) & 1) != 0)
            {
              lVar35 = (longlong)iVar33;
              *(int *)((longlong)local_298 + lVar35 * 4) =
                   *(int *)(*(longlong *)(lVar29 + 0x2f0) + lVar37) + iVar30;
              *(int *)((longlong)local_298 + 4 + lVar35 * 4) =
                   *(int *)(*(longlong *)(lVar29 + 0x2f0) + 4 + lVar37) + iVar30;
              iVar33 = iVar33 + 3;
              *(int *)((longlong)local_298 + 8 + lVar35 * 4) =
                   *(int *)(*(longlong *)(lVar29 + 0x2f0) + 8 + lVar37) + iVar30;
            }
            lVar32 = lVar32 + 1;
            lVar37 = lVar37 + 0xc;
          } while (lVar32 < lVar38);
          uVar31 = uStack_300 & 0xffffffff;
        }
        iVar27 = iVar27 + iVar9;
        lVar34 = lVar34 + 1;
      } while (lVar34 < (int)uVar31);
      if (iVar33 <= (int)uStack_290) {
        if (iVar33 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar33);
        }
        goto LAB_14327946a;
      }
LAB_1432795a6:
      uStack_290 = (double)CONCAT44(uStack_290._4_4_,iVar33);
      if ((uint)(uStack_290._4_4_ - iVar23) < (uint)(iVar33 - iVar23)) {
        FUN_1446f48e2(&local_298);
      }
      memset((void *)((longlong)iVar23 * 4 + (longlong)local_298),0,(longlong)(iVar33 - iVar23) << 2
            );
    }
    unaff_RBX = (ulonglong)dVar28 & 0xffffffff;
    local_380 = param_1 - 0x68;
    local_388 = (int)uStack_290;
    (**(code **)(*local_340 + 0x30))(local_340,local_2f8._0_8_,local_2f8._8_4_,local_298);
    if (local_328[0] != 0) {
      FUN_1400020a8();
    }
    if (local_328[2] != 0) {
      FUN_1400020a8();
    }
    if (local_308 != 0) {
      FUN_1400020a8();
    }
    if (local_298 != 0.0) {
      FUN_1400020a8();
    }
    if (local_2f8._0_8_ != 0) {
      FUN_1400020a8();
    }
  }
  uVar31 = CONCAT71((int7)(unaff_RBX >> 8),1);
LAB_143279506:
  if ((local_f0 ^ (ulonglong)auStack_3a8) == DAT_14c707940) {
    return uVar31 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432795ee FUN_1432795ee body=1101 status=ok
// SIG undefined FUN_1432795ee(void)

void FUN_1432795ee(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  float *pfVar3;
  double *pdVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ulonglong uVar17;
  char cVar18;
  uint uVar19;
  int iVar20;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  longlong lVar26;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  undefined1 local_110;
  longlong local_100;
  longlong *local_f8;
  longlong local_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uVar7 = *(uint *)(param_1 + 0xa68);
  if ((ulonglong)uVar7 != 0) {
    local_100 = *(longlong *)(*(longlong *)(param_1 + 0x660) + 0x218);
    plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x660) + 0x220);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
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
    uVar8 = *(uint *)(param_1 + 0x9b0);
    uVar23 = (ulonglong)uVar8;
    uVar19 = (**(code **)(*(longlong *)(local_100 + 0x200) + 0x60))(local_100 + 0x200);
    if (uVar8 == uVar19) {
      uVar10 = *(undefined8 *)(*(longlong *)(param_1 + 0x660) + 0x218);
      plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x660) + 0x220);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      uVar5 = DAT_14c9974a8;
      FUN_1446ddc76(&local_c8,&DAT_14a40dd9e,1);
      cVar18 = FUN_140498cd4(uVar10,local_c8,uVar5);
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
      if (cVar18 == '\0') {
        lVar21 = 0;
      }
      else {
        uVar10 = *(undefined8 *)(*(longlong *)(param_1 + 0x660) + 0x218);
        plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x660) + 0x220);
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
        }
        uVar5 = DAT_14c9974a8;
        FUN_1446ddc76(&local_d0,&DAT_14a40dd9e,1);
        lVar21 = FUN_146eb1f4e(uVar10,local_d0,uVar5);
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
      }
      local_f8 = (longlong *)FUN_1406cf856(param_1 + 0x9a0);
      if (0 < (int)uVar7) {
        local_f0 = lVar21 + 0x10;
        uVar25 = 0;
        do {
          local_e8 = 0;
          uStack_e0 = 0;
          if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(uVar23);
          }
          if (uVar23 != 0) {
            FUN_1401a2688(&local_e8,uVar8);
            lVar26 = 0x20;
            uVar22 = 0;
            do {
              uVar17 = uStack_e0;
              if (uVar25 == *(uint *)(*(longlong *)(local_100 + 0x210) + uVar22 * 4)) {
                if (lVar21 != 0) {
                  lVar24 = *(longlong *)(lVar21 + 0x20);
                  if (*(longlong *)(lVar21 + 0x20) == 0) {
                    lVar24 = local_f0;
                  }
                  if ((*(uint *)(lVar24 + (uVar22 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar22 & 0x1f) &
                      1) != 0) goto LAB_1432798ca;
                }
                lVar24 = *local_f8;
                pfVar3 = (float *)(lVar24 + -0x20 + lVar26);
                fVar11 = *pfVar3;
                fVar12 = pfVar3[1];
                pfVar3 = (float *)(lVar24 + -0x10 + lVar26);
                fVar13 = *pfVar3;
                fVar14 = pfVar3[1];
                fVar15 = *(float *)(lVar24 + lVar26);
                fVar16 = ((float *)(lVar24 + lVar26))[1];
                uVar10 = *(undefined8 *)(lVar24 + 8 + lVar26);
                uVar5 = *(undefined8 *)(lVar24 + -8 + lVar26);
                uVar6 = *(undefined8 *)(lVar24 + -0x18 + lVar26);
                lVar24 = (longlong)(int)uStack_e0;
                uVar19 = (int)uStack_e0 + 1;
                uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar19);
                if (uStack_e0._4_4_ < uVar19) {
                  FUN_144a2c682(&local_e8,uVar17 & 0xffffffff);
                }
                lVar24 = lVar24 * 0x60;
                *(double *)(local_e8 + lVar24) = (double)fVar11;
                ((double *)(local_e8 + lVar24))[1] = (double)fVar12;
                pdVar4 = (double *)(local_e8 + 0x10 + lVar24);
                *pdVar4 = (double)(float)uVar6;
                pdVar4[1] = (double)(float)((ulonglong)uVar6 >> 0x20);
                pdVar4 = (double *)(local_e8 + 0x20 + lVar24);
                *pdVar4 = (double)fVar13;
                pdVar4[1] = (double)fVar14;
                pdVar4 = (double *)(local_e8 + 0x30 + lVar24);
                *pdVar4 = (double)(float)uVar5;
                pdVar4[1] = (double)(float)((ulonglong)uVar5 >> 0x20);
                pdVar4 = (double *)(local_e8 + 0x40 + lVar24);
                *pdVar4 = (double)fVar15;
                pdVar4[1] = (double)fVar16;
                pdVar4 = (double *)(local_e8 + 0x50 + lVar24);
                *pdVar4 = (double)(float)uVar10;
                pdVar4[1] = (double)(float)((ulonglong)uVar10 >> 0x20);
              }
LAB_1432798ca:
              uVar22 = uVar22 + 1;
              lVar26 = lVar26 + 0x30;
            } while (uVar23 != uVar22);
          }
          if (*(longlong *)(*(longlong *)(param_1 + 0xa60) + uVar25 * 8) != 0) {
            iVar20 = FUN_147af9036();
            plVar9 = *(longlong **)(*(longlong *)(param_1 + 0xa60) + uVar25 * 8);
            lVar26 = *plVar9;
            if (iVar20 == (int)uStack_e0) {
              local_110 = 0;
              local_118 = 1;
              (**(code **)(lVar26 + 0xb48))(plVar9,0,&local_e8,0);
            }
            else {
              (**(code **)(lVar26 + 0xb80))();
              plVar9 = *(longlong **)(*(longlong *)(param_1 + 0xa60) + uVar25 * 8);
              (**(code **)(*plVar9 + 0xb28))(plVar9,uStack_e0 & 0xffffffff);
              if ((longlong)(int)uStack_e0 != 0) {
                lVar26 = (longlong)(int)uStack_e0 * 0x60;
                lVar24 = local_e8;
                do {
                  plVar9 = *(longlong **)(*(longlong *)(param_1 + 0xa60) + uVar25 * 8);
                  (**(code **)(*plVar9 + 0xaf8))(plVar9,lVar24,0);
                  lVar24 = lVar24 + 0x60;
                  lVar26 = lVar26 + -0x60;
                } while (lVar26 != 0);
              }
              FUN_1448215fa(*(undefined8 *)(*(longlong *)(param_1 + 0xa60) + uVar25 * 8));
            }
          }
          if (local_e8 != 0) {
            FUN_1400020a8();
          }
          uVar25 = uVar25 + 1;
        } while (uVar25 != uVar7);
      }
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143279a3e FUN_143279a3e body=232 status=ok
// SIG undefined FUN_143279a3e(void)

bool FUN_143279a3e(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  
  if ((*(char *)((longlong)param_1 + 0x84c) == '\x01') &&
     (*(char *)((longlong)param_1 + 0x9e) < '\0')) {
    if (*(code **)(param_1[0x55] + 0x58) == (code *)&LAB_1457ba96c) {
      uVar1 = (uint)*(byte *)((longlong)param_1 + 0x2e9);
    }
    else {
      uVar1 = (**(code **)(param_1[0x55] + 0x58))(param_1 + 0x55);
    }
    if (1 < (int)uVar1) {
      return true;
    }
    lVar2 = *param_1;
    if (*(code **)(lVar2 + 0x558) == (code *)&LAB_1448a8146) {
      plVar3 = param_1 + 0x8f;
    }
    else {
      plVar3 = (longlong *)(**(code **)(lVar2 + 0x558))(param_1);
      lVar2 = *param_1;
    }
    if (*(code **)(lVar2 + 0x570) == (code *)&LAB_1448a814e) {
      if ((param_1[0x15] != 0) && ((*(byte *)(param_1[0x15] + 0x65) & 1) == 0)) goto LAB_143279afc;
      uVar1 = (uint)*(byte *)((longlong)param_1 + 0x427);
    }
    else {
      uVar1 = (**(code **)(lVar2 + 0x570))(param_1);
    }
    bVar4 = false;
    if (((uVar1 < 6) && ((0x2aU >> (uVar1 & 0x1f) & 1) != 0)) &&
       (bVar4 = true, *(char *)((longlong)plVar3 + 2) != '\x02')) {
      bVar4 = *(char *)((longlong)plVar3 + 6) == '\x02';
    }
  }
  else {
LAB_143279afc:
    bVar4 = false;
  }
  return bVar4;
}



// FUNCTION 143279b26 FUN_143279b26 body=230 status=ok
// SIG undefined FUN_143279b26(void)

bool FUN_143279b26(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  
  if ((*(char *)((longlong)param_1 + 0x5a4) == '\x01') &&
     (*(char *)((longlong)param_1 + -0x20a) < '\0')) {
    if (*(code **)(*param_1 + 0x58) == (code *)&LAB_1457ba96c) {
      uVar2 = (uint)*(byte *)((longlong)param_1 + 0x41);
    }
    else {
      uVar2 = (**(code **)(*param_1 + 0x58))(param_1);
    }
    if (1 < (int)uVar2) {
      return true;
    }
    plVar1 = param_1 + -0x55;
    lVar3 = *plVar1;
    if (*(code **)(lVar3 + 0x558) == (code *)&LAB_1448a8146) {
      plVar4 = param_1 + 0x3a;
    }
    else {
      plVar4 = (longlong *)(**(code **)(lVar3 + 0x558))(plVar1);
      lVar3 = *plVar1;
    }
    if (*(code **)(lVar3 + 0x570) == (code *)&LAB_1448a814e) {
      if ((param_1[-0x40] != 0) && ((*(byte *)(param_1[-0x40] + 0x65) & 1) == 0))
      goto LAB_143279be6;
      uVar2 = (uint)*(byte *)((longlong)param_1 + 0x17f);
    }
    else {
      uVar2 = (**(code **)(lVar3 + 0x570))(plVar1);
    }
    bVar5 = false;
    if (((uVar2 < 6) && ((0x2aU >> (uVar2 & 0x1f) & 1) != 0)) &&
       (bVar5 = true, *(char *)((longlong)plVar4 + 2) != '\x02')) {
      bVar5 = *(char *)((longlong)plVar4 + 6) == '\x02';
    }
  }
  else {
LAB_143279be6:
    bVar5 = false;
  }
  return bVar5;
}



// FUNCTION 143279c0c FUN_143279c0c body=120 status=ok
// SIG undefined FUN_143279c0c(void)

void FUN_143279c0c(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*param_1 != 0) {
    lVar3 = FUN_140f5398e();
    plVar1 = (longlong *)*param_1;
    if ((((plVar1 != (longlong *)0x0) && (lVar3 != 0)) && (lVar2 = plVar1[2], lVar2 != 0)) &&
       ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
         lVar3 + 0x30)))) {
      (**(code **)(*plVar1 + 0xa78))(plVar1,param_1);
      if (0 < (int)plVar1[0xf7]) {
        FUN_1417962d4(plVar1 + 0xf6,param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143279c84 FUN_143279c84 body=120 status=ok
// SIG undefined FUN_143279c84(void)

void FUN_143279c84(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*param_1 != 0) {
    lVar3 = FUN_140f5398e();
    plVar1 = (longlong *)*param_1;
    if ((((plVar1 != (longlong *)0x0) && (lVar3 != 0)) && (lVar2 = plVar1[2], lVar2 != 0)) &&
       ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
         lVar3 + 0x30)))) {
      (**(code **)(*plVar1 + 0xa80))(plVar1,param_1);
      if (0 < (int)plVar1[0xf9]) {
        FUN_14749cfb0(plVar1 + 0xf8,param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143279cfc FUN_143279cfc body=100 status=ok
// SIG undefined FUN_143279cfc(void)

void FUN_143279cfc(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*param_1 != 0) {
    lVar3 = FUN_140f5398e();
    lVar1 = *param_1;
    if ((((lVar1 != 0) && (lVar3 != 0)) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
       (((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) && (0 < *(int *)(lVar1 + 0x7d8))))) {
      FUN_14749d030(lVar1 + 2000,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 143279d60 FUN_143279d60 body=4355 status=ok
// SIG undefined FUN_143279d60(void)

void FUN_143279d60(longlong param_1)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  byte bVar9;
  void *_Src;
  longlong *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong *plVar13;
  char cVar14;
  int iVar15;
  uint uVar16;
  undefined1 *puVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  longlong lVar20;
  undefined2 uVar21;
  int iVar22;
  int iVar23;
  undefined *puVar24;
  uint *puVar25;
  longlong *plVar26;
  byte bVar27;
  uint *puVar28;
  uint uVar29;
  longlong lVar30;
  undefined8 **ppuVar31;
  int iVar32;
  longlong *plVar33;
  ulonglong uVar34;
  longlong *plVar35;
  longlong lVar36;
  ulonglong uVar37;
  undefined1 auStack_228 [40];
  uint *local_200;
  undefined8 local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  void *local_1e0;
  ulonglong local_1d8;
  int local_1cc;
  longlong local_1c8;
  longlong local_1c0;
  ulonglong *local_1b8;
  ulonglong uStack_1b0;
  undefined1 local_19c [4];
  ulonglong *local_198;
  longlong *local_190;
  int local_188;
  undefined4 local_184;
  undefined1 local_180 [48];
  longlong *local_150;
  longlong local_148;
  undefined8 uStack_140;
  longlong local_138;
  undefined8 uStack_130;
  int iStack_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  char local_11c;
  byte local_118;
  undefined8 *local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  int local_d4;
  undefined1 local_d0 [8];
  undefined1 *local_c8;
  int local_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_228;
  if (DAT_14c760f44 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_b0 ^ (ulonglong)auStack_228);
  }
  if (((((*(char *)(param_1 + 0x852) == '\x01') && (*(longlong *)(param_1 + 0xa40) != 0)) &&
       (lVar20 = *(longlong *)(param_1 + 0xa8), lVar20 != 0)) &&
      ((iVar15 = FUN_14487fd02(lVar20), iVar15 != 0 && (*(char *)(param_1 + 0x9c) < '\0')))) &&
     (*(char *)(lVar20 + 0x178) == '\x03')) {
    local_1d8 = CONCAT71(local_1d8._1_7_,*(undefined1 *)(lVar20 + 0x60));
    ppuVar31 = (undefined8 **)(param_1 + 0xa70);
    local_1c8 = lVar20;
    if (*(longlong *)(param_1 + 0xa70) == 0) {
      local_108 = (undefined8 *)FUN_14001cc68(0x50,0x10);
      local_108[4] = 0;
      *(undefined4 *)(local_108 + 5) = 0;
      *local_108 = 0;
      local_108[1] = 0;
      *(undefined8 *)((longlong)local_108 + 0x2c) = 0xffffffff00000080;
      *(undefined4 *)((longlong)local_108 + 0x34) = 0;
      local_108[8] = 0;
      *(undefined4 *)(local_108 + 9) = 0;
      if (ppuVar31 != &local_108) {
        *ppuVar31 = local_108;
        local_108 = (undefined8 *)0x0;
      }
      FUN_140aeeb5c(&local_108,local_108);
    }
    local_11c = '\0';
    local_118 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_128 = *(undefined4 *)(param_1 + 0x8d0);
    if (((undefined4 *)(param_1 + 0x8d8) != &local_120) && (*(char *)(param_1 + 0x8dc) == '\x01')) {
      local_120 = *(undefined4 *)(param_1 + 0x8d8);
      local_11c = '\x01';
    }
    local_124 = *(undefined4 *)(param_1 + 0x8d4);
    local_1e8 = *(longlong *)(*(longlong *)(param_1 + 0xa40) + 8);
    lVar20 = *(longlong *)(local_1e8 + 0x9c8);
    local_1f8 = ppuVar31;
    FUN_1401c0b60(*(longlong *)(param_1 + 0xa40) + 0x5d0,local_180);
    lVar36 = *(longlong *)(param_1 + 0xa40);
    local_190 = (longlong *)0x0;
    local_188 = *(int *)(lVar36 + 0x348);
    lVar30 = (longlong)local_188;
    _Src = *(void **)(lVar36 + 0x340);
    if (lVar30 == 0) {
      local_184 = 0;
    }
    else {
      FUN_14172b2d6(&local_190,local_188,0);
      memcpy(local_190,_Src,lVar30 << 3);
      lVar36 = *(longlong *)(param_1 + 0xa40);
    }
    ppuVar31 = local_1f8;
    local_1c0 = param_1 + 0x8b0;
    local_118 = *(byte *)(param_1 + 0x8e0);
    iVar15 = *(int *)(*(longlong *)(lVar36 + 0x410) + (longlong)*(int *)(lVar36 + 0x180) * 4);
    if (((-1 < (longlong)iVar15) && (iVar15 < *(int *)(lVar36 + 0x348))) &&
       (plVar26 = *(longlong **)(*(longlong *)(lVar36 + 0x340) + (longlong)iVar15 * 8),
       plVar26 != (longlong *)0x0)) {
      local_118 = *(byte *)(*(longlong *)(*plVar26 + 0x680) + (longlong)(int)plVar26[1]) >> 1 & 1;
    }
    local_e8 = 0;
    local_e0 = 0;
    local_108 = (undefined8 *)0x0;
    uStack_100 = 0;
    local_dc = 0xffffffff00000080;
    local_d4 = 0;
    local_c8 = (undefined1 *)0x0;
    local_c0 = 0;
    local_1f0 = lVar20;
    FUN_1474a5e24(&local_148);
    if ((longlong)local_188 != 0) {
      plVar33 = local_190 + local_188;
      local_200 = (uint *)(local_1f0 + 0x548);
      local_1e0 = (void *)(local_1e8 + 0x2b0);
      plVar26 = local_190;
      do {
        local_1b8 = (ulonglong *)*plVar26;
        if (local_1b8 != (ulonglong *)0x0) {
          FUN_140a3609c(&local_108,&local_198,&local_1b8,0);
          local_198 = local_1b8;
          while( true ) {
            plVar13 = local_150;
            uVar37 = *local_198;
            lVar20 = (longlong)(int)local_198[1];
            puVar2 = *(ulonglong **)(*(longlong *)(uVar37 + 0x5a8) + lVar20 * 0x10);
            if ((puVar2 == (ulonglong *)0x0) || (*(byte *)((longlong)puVar2 + 0xc) < 3)) break;
            local_198 = puVar2;
            if ((int)uStack_100 != local_d4) {
              uVar29 = ((uint)((ulonglong)puVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)puVar2 >> 4))
                       * -0x7a143595;
              uVar29 = (uVar29 >> 0xd ^ uVar29) * -0x3d4d51cb;
              puVar17 = local_c8;
              if (local_c8 == (undefined1 *)0x0) {
                puVar17 = local_d0;
              }
              for (iVar15 = *(int *)(puVar17 +
                                    (ulonglong)(local_c0 - 1U & (uVar29 >> 0x10 ^ uVar29)) * 4);
                  iVar15 != -1; iVar15 = *(int *)(local_108 + (longlong)iVar15 * 2 + 1)) {
                if ((ulonglong *)local_108[(longlong)iVar15 * 2] == puVar2) goto LAB_14327a745;
              }
            }
            FUN_140a3609c(&local_108,local_19c,&local_198,0);
          }
          if (*(char *)(*(longlong *)(uVar37 + 0x2c0) + 0xd + lVar20 * 0x10) == '\0') {
            plVar10 = *ppuVar31;
            if ((int)plVar10[1] != *(int *)((longlong)plVar10 + 0x34)) {
              uVar29 = ((uint)((ulonglong)local_198 >> 0x14) & 0xffff ^
                       (uint)((ulonglong)local_198 >> 4)) * -0x7a143595;
              uVar29 = (uVar29 >> 0xd ^ uVar29) * -0x3d4d51cb;
              plVar35 = plVar10 + 7;
              if ((longlong *)plVar10[8] != (longlong *)0x0) {
                plVar35 = (longlong *)plVar10[8];
              }
              iVar15 = *(int *)((longlong)plVar35 +
                               (ulonglong)((int)plVar10[9] - 1U & (uVar29 >> 0x10 ^ uVar29)) * 4);
              if (iVar15 != -1) {
                do {
                  lVar36 = *plVar10 + (longlong)iVar15 * 0x10;
                  if (*(ulonglong **)(*plVar10 + (longlong)iVar15 * 0x10) == local_198) {
                    if (lVar36 != 0) goto LAB_14327a745;
                    break;
                  }
                  iVar15 = *(int *)(lVar36 + 8);
                } while (iVar15 != -1);
              }
            }
            lVar36 = *(longlong *)(param_1 + 0xa40);
            if (*(longlong *)(*(longlong *)(uVar37 + 200) + lVar20 * 8) == lVar36) {
              if ((*(byte *)(*(longlong *)(uVar37 + 0x680) + lVar20) & 1) == 0) {
                iVar32 = -1;
                iVar15 = -1;
                if (*(int *)(lVar36 + 0x358) != *(int *)(lVar36 + 900)) {
                  uVar29 = ((uint)((ulonglong)local_198 >> 0x14) & 0xffff ^
                           (uint)((ulonglong)local_198 >> 4)) * -0x7a143595;
                  uVar29 = (uVar29 >> 0xd ^ uVar29) * -0x3d4d51cb;
                  lVar20 = lVar36 + 0x388;
                  if (*(longlong *)(lVar36 + 0x390) != 0) {
                    lVar20 = *(longlong *)(lVar36 + 0x390);
                  }
                  iVar22 = *(int *)(lVar20 + (ulonglong)
                                             (*(int *)(lVar36 + 0x398) - 1U &
                                             (uVar29 >> 0x10 ^ uVar29)) * 4);
                  if (iVar22 != -1) {
                    do {
                      puVar1 = (undefined8 *)
                               (*(longlong *)(lVar36 + 0x350) + (longlong)iVar22 * 0x18);
                      if ((ulonglong *)*puVar1 == local_198) {
                        iVar15 = -1;
                        if ((puVar1 != (undefined8 *)0x0) && ((int *)(puVar1 + 1) != (int *)0x0)) {
                          iVar15 = *(int *)(puVar1 + 1);
                        }
                        goto LAB_14327a587;
                      }
                      iVar22 = *(int *)(puVar1 + 2);
                    } while (iVar22 != -1);
                    iVar15 = -1;
                  }
                }
LAB_14327a587:
                if (local_150 != (longlong *)0x0) {
                  iVar32 = (**(code **)(*local_150 + 0x60))(local_150);
                  if (iVar32 < 1) goto LAB_14327a5ec;
                  iVar32 = *(int *)(plVar13[2] + (longlong)iVar15 * 4);
                }
              }
              else {
                if (*(int *)(local_1f0 + 0x518) != *(int *)(local_1f0 + 0x544)) {
                  uVar29 = ((uint)((ulonglong)local_198 >> 0x14) & 0xffff ^
                           (uint)((ulonglong)local_198 >> 4)) * -0x7a143595;
                  uVar29 = (uVar29 >> 0xd ^ uVar29) * -0x3d4d51cb;
                  puVar25 = *(uint **)(local_1f0 + 0x550);
                  if (*(uint **)(local_1f0 + 0x550) == (uint *)0x0) {
                    puVar25 = local_200;
                  }
                  uVar29 = puVar25[*(int *)(local_1f0 + 0x558) - 1U & (uVar29 >> 0x10 ^ uVar29)];
                  if (uVar29 != 0xffffffff) {
                    do {
                      lVar20 = *(longlong *)(local_1f0 + 0x510) + (longlong)(int)uVar29 * 0x20;
                      if (*(ulonglong **)
                           (*(longlong *)(local_1f0 + 0x510) + (longlong)(int)uVar29 * 0x20) ==
                          local_198) goto LAB_14327a4c9;
                      uVar29 = *(uint *)(lVar20 + 0x18);
                    } while (uVar29 != 0xffffffff);
                  }
                }
                lVar20 = 0;
LAB_14327a4c9:
                iVar15 = -1;
                iVar32 = -1;
                if (*(int *)(lVar36 + 0x358) != *(int *)(lVar36 + 900)) {
                  uVar37 = **(ulonglong **)(lVar20 + 8);
                  uVar29 = ((uint)(uVar37 >> 0x14) & 0xffff ^ (uint)(uVar37 >> 4)) * -0x7a143595;
                  uVar29 = (uVar29 >> 0xd ^ uVar29) * -0x3d4d51cb;
                  lVar20 = lVar36 + 0x388;
                  if (*(longlong *)(lVar36 + 0x390) != 0) {
                    lVar20 = *(longlong *)(lVar36 + 0x390);
                  }
                  iVar22 = *(int *)(lVar20 + (ulonglong)
                                             (*(int *)(lVar36 + 0x398) - 1U &
                                             (uVar29 >> 0x10 ^ uVar29)) * 4);
                  if (iVar22 != -1) {
                    do {
                      puVar2 = (ulonglong *)
                               (*(longlong *)(lVar36 + 0x350) + (longlong)iVar22 * 0x18);
                      if (*puVar2 == uVar37) {
                        iVar32 = -1;
                        if ((puVar2 != (ulonglong *)0x0) && (puVar2 + 1 != (ulonglong *)0x0)) {
                          iVar32 = (int)puVar2[1];
                        }
                        goto LAB_14327a5c2;
                      }
                      iVar22 = (int)puVar2[2];
                    } while (iVar22 != -1);
                    iVar32 = -1;
                  }
                }
LAB_14327a5c2:
                if ((local_150 == (longlong *)0x0) ||
                   (iVar22 = (**(code **)(*local_150 + 0x60))(local_150), iVar22 < 1)) {
LAB_14327a5ec:
                  iVar32 = -1;
                }
                else {
                  iVar32 = *(int *)(plVar13[2] + (longlong)iVar32 * 4) + -1;
                }
              }
              ppuVar31 = local_1f8;
              if (((*(char *)(param_1 + 0x853) != '\x01') || (iVar32 <= *(int *)(param_1 + 0x8a8)))
                 && (iVar32 <= *(int *)(param_1 + 0x8ac))) {
                FUN_140a3609c(*local_1f8,local_19c,&local_198,0);
              }
              uVar18 = uStack_140;
              uVar37 = *local_198;
              if (((*(byte *)(*(longlong *)(uVar37 + 0x680) + (longlong)(int)local_198[1]) & 1) == 0
                  ) && (0 < iVar32)) {
                lVar20 = *(longlong *)(uVar37 + 0x278);
                lVar36 = *(longlong *)(uVar37 + 0x290);
                lVar30 = (longlong)(int)local_198[1] * 0xc;
                fVar6 = *(float *)(lVar36 + 8 + lVar30);
                fVar7 = *(float *)(lVar36 + 4 + lVar30);
                fVar8 = *(float *)(lVar36 + lVar30);
                fVar3 = *(float *)(lVar20 + 8 + lVar30);
                fVar4 = *(float *)(lVar20 + 4 + lVar30);
                fVar5 = *(float *)(lVar20 + lVar30);
                lVar20 = (longlong)(int)uStack_140;
                if (lVar20 != 0) {
                  lVar36 = 0;
                  do {
                    if (*(short *)(local_148 + lVar36) == (short)iVar15) goto LAB_14327a705;
                    lVar36 = lVar36 + 0x38;
                  } while (lVar20 * 0x38 - lVar36 != 0);
                }
                uVar29 = (int)uStack_140 + 1;
                uStack_140 = CONCAT44(uStack_140._4_4_,uVar29);
                if (uStack_140._4_4_ < uVar29) {
                  local_1cc = iVar32;
                  FUN_1474ac40a(&local_148,uVar18 & 0xffffffff);
                  iVar32 = local_1cc;
                }
                lVar20 = lVar20 * 0x38;
                *(short *)(local_148 + lVar20) = (short)iVar15;
                *(double *)(local_148 + 8 + lVar20) = (double)fVar5;
                *(double *)(local_148 + 0x10 + lVar20) = (double)fVar4;
                *(double *)(local_148 + 0x18 + lVar20) = (double)fVar3;
                *(double *)(local_148 + 0x20 + lVar20) = (double)fVar8;
                *(double *)(local_148 + 0x28 + lVar20) = (double)fVar7;
                *(double *)(local_148 + 0x30 + lVar20) = (double)fVar6;
              }
LAB_14327a705:
              if (((*(char *)(param_1 + 0x853) == '\x01') && (*(int *)(param_1 + 0x8a8) < iVar32))
                 && (*(char *)(*(longlong *)(*local_198 + 0x2c0) + 0xd +
                              (longlong)(int)local_198[1] * 0x10) == '\0')) {
                FUN_14016e00e(*(undefined8 *)(local_1e8 + 0x9c8));
                FUN_1456cc230(local_1e0,local_198,1);
              }
            }
          }
        }
LAB_14327a745:
        plVar26 = plVar26 + 1;
      } while (plVar26 != plVar33);
    }
    lVar20 = local_1f0;
    if ((local_1d8 & 0x10) != 0) {
      plVar26 = *ppuVar31;
      iVar15 = (int)plVar26[1] - *(int *)((longlong)plVar26 + 0x34);
      if (iVar15 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar15);
      }
      if (iStack_12c < iVar15) {
        FUN_1474aa862(&local_138);
        plVar26 = *ppuVar31;
      }
      iVar15 = (int)plVar26[5];
      if (iVar15 == 0) {
        uVar34 = 1;
        uVar37 = 0;
        local_1f8 = (undefined8 **)((ulonglong)local_1f8 & 0xffffffff00000000);
        iVar32 = 0;
      }
      else {
        puVar25 = (uint *)plVar26[4];
        if ((uint *)plVar26[4] == (uint *)0x0) {
          puVar25 = (uint *)(plVar26 + 2);
        }
        uVar29 = *puVar25;
        if (uVar29 == 0) {
          iVar32 = iVar15 + 0x1e;
          if (-1 < iVar15 + -1) {
            iVar32 = iVar15 + -1;
          }
          uVar37 = 0;
          uVar18 = (ulonglong)(uint)(iVar32 >> 5);
          if (iVar32 >> 5 < 1) {
            uVar18 = uVar37;
          }
          local_1f8 = (undefined8 **)((ulonglong)local_1f8._4_4_ << 0x20);
          do {
            if (uVar18 == uVar37) goto LAB_14327acef;
            local_1f8 = (undefined8 **)CONCAT44(local_1f8._4_4_,(int)local_1f8 + 0x20);
            uVar29 = puVar25[uVar37 + 1];
            uVar37 = uVar37 + 1;
          } while (uVar29 == 0);
        }
        else {
          uVar37 = 0;
          local_1f8 = (undefined8 **)((ulonglong)local_1f8._4_4_ << 0x20);
        }
        uVar34 = (ulonglong)(-uVar29 & uVar29);
        uVar18 = uVar34 * 2 + 1;
        lVar36 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar36 == 0; lVar36 = lVar36 + -1) {
          }
        }
        iVar32 = ((int)local_1f8 - ((uint)lVar36 ^ 0x3f)) + 0x3e;
        if (iVar15 <= iVar32) {
          iVar32 = iVar15;
        }
      }
      if (iVar32 < iVar15) {
        local_1d8 = lVar20 + 0x548;
        uVar29 = 0xffffffff;
        local_200 = (uint *)(plVar26 + 2);
LAB_14327a840:
        plVar33 = *(longlong **)(*plVar26 + (longlong)iVar32 * 0x10);
        if (*(int *)(lVar20 + 0x518) != *(int *)(lVar20 + 0x544)) {
          uVar16 = ((uint)((ulonglong)plVar33 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar33 >> 4)) *
                   -0x7a143595;
          uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
          uVar18 = *(ulonglong *)(lVar20 + 0x550);
          if (*(ulonglong *)(lVar20 + 0x550) == 0) {
            uVar18 = local_1d8;
          }
          iVar15 = *(int *)(uVar18 + (ulonglong)
                                     (*(int *)(lVar20 + 0x558) - 1U & (uVar16 >> 0x10 ^ uVar16)) * 4
                           );
          if (iVar15 != -1) {
            do {
              lVar36 = *(longlong *)(lVar20 + 0x510) + (longlong)iVar15 * 0x20;
              if (*(longlong **)(*(longlong *)(lVar20 + 0x510) + (longlong)iVar15 * 0x20) == plVar33
                 ) {
                if (lVar36 != 0) {
                  local_1b8 = (ulonglong *)0x0;
                  uVar16 = *(uint *)(lVar36 + 0x10);
                  uStack_1b0 = CONCAT44(uStack_1b0._4_4_,uVar16);
                  if ((longlong)(int)uVar16 == 0) {
                    uStack_1b0 = (ulonglong)uVar16;
                    lVar20 = local_1f0;
                  }
                  else {
                    local_1e0 = *(void **)(lVar36 + 8);
                    FUN_140509e62(&local_1b8,uVar16,0);
                    memcpy(local_1b8,local_1e0,(longlong)(int)uVar16 << 3);
                    lVar20 = local_1f0;
                  }
                  goto LAB_14327a928;
                }
                break;
              }
              iVar15 = *(int *)(lVar36 + 0x18);
            } while (iVar15 != -1);
          }
        }
        local_1b8 = (ulonglong *)0x0;
        uStack_1b0 = 0;
LAB_14327a928:
        if ((*(char *)(*(longlong *)(*plVar33 + 0x2c0) + 0xd + (longlong)(int)plVar33[1] * 0x10) ==
             '\0') &&
           (((int)uStack_1b0 != 0 ||
            ((*(byte *)(*(longlong *)(*plVar33 + 0x680) + (longlong)(int)plVar33[1]) & 1) == 0)))) {
          puVar19 = (undefined8 *)FUN_1474a5e7a(&local_138);
          uVar11 = *(undefined8 *)
                    (*(longlong *)(*plVar33 + 0x28) + 0x10 + (longlong)(int)plVar33[1] * 0x18);
          puVar1 = (undefined8 *)(*(longlong *)(*plVar33 + 0x28) + (longlong)(int)plVar33[1] * 0x18)
          ;
          uVar12 = puVar1[1];
          *puVar19 = *puVar1;
          puVar19[1] = uVar12;
          puVar19[2] = uVar11;
          lVar36 = *(longlong *)(*plVar33 + 0x48);
          lVar30 = (longlong)(int)plVar33[1] * 0x10;
          fVar6 = *(float *)(lVar36 + 0xc + lVar30);
          fVar7 = *(float *)(lVar36 + 8 + lVar30);
          fVar8 = *(float *)(lVar36 + 4 + lVar30);
          puVar19[10] = (double)*(float *)(lVar36 + lVar30);
          puVar19[0xb] = (double)fVar8;
          puVar19[0xc] = (double)fVar7;
          puVar19[0xd] = (double)fVar6;
          lVar30 = (longlong)(int)plVar33[1];
          lVar36 = *(longlong *)(*plVar33 + 0x278);
          fVar6 = *(float *)(lVar36 + 8 + lVar30 * 0xc);
          fVar7 = *(float *)(lVar36 + 4 + lVar30 * 0xc);
          puVar19[3] = (double)*(float *)(lVar36 + lVar30 * 0xc);
          puVar19[4] = (double)fVar7;
          puVar19[5] = (double)fVar6;
          lVar30 = (longlong)(int)plVar33[1];
          lVar36 = *(longlong *)(*plVar33 + 0x290);
          fVar6 = *(float *)(lVar36 + 8 + lVar30 * 0xc);
          fVar7 = *(float *)(lVar36 + 4 + lVar30 * 0xc);
          puVar19[6] = (double)*(float *)(lVar36 + lVar30 * 0xc);
          puVar19[7] = (double)fVar7;
          puVar19[8] = (double)fVar6;
          bVar9 = *(byte *)(*(longlong *)(*plVar33 + 0x2c0) + 0xb + (longlong)(int)plVar33[1] * 0x10
                           );
          bVar27 = *(byte *)((longlong)puVar19 + 0x72) & 0xf8;
          *(byte *)((longlong)puVar19 + 0x72) = bVar9 & 7 | bVar27;
          *(byte *)((longlong)puVar19 + 0x72) =
               (*(byte *)(*(longlong *)(*plVar33 + 0x680) + (longlong)(int)plVar33[1]) & 1) << 3 |
               bVar9 & 6 | bVar27;
          lVar36 = *(longlong *)(param_1 + 0xa40);
          if ((*(byte *)(*(longlong *)(*plVar33 + 0x680) + (longlong)(int)plVar33[1]) & 1) == 0) {
            if (*(int *)(lVar36 + 0x358) != *(int *)(lVar36 + 900)) {
              uVar16 = ((uint)((ulonglong)plVar33 >> 0x14) & 0xffff ^
                       (uint)((ulonglong)plVar33 >> 4)) * -0x7a143595;
              uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
              lVar30 = lVar36 + 0x388;
              if (*(longlong *)(lVar36 + 0x390) != 0) {
                lVar30 = *(longlong *)(lVar36 + 0x390);
              }
              iVar15 = *(int *)(lVar30 + (ulonglong)
                                         (*(int *)(lVar36 + 0x398) - 1U & (uVar16 >> 0x10 ^ uVar16))
                                         * 4);
              if (iVar15 != -1) {
                do {
                  puVar2 = (ulonglong *)(*(longlong *)(lVar36 + 0x350) + (longlong)iVar15 * 0x18);
                  if ((longlong *)*puVar2 == plVar33) {
                    if (puVar2 != (ulonglong *)0x0) goto joined_r0x00014327ace2;
                    break;
                  }
                  iVar15 = (int)puVar2[2];
                } while (iVar15 != -1);
              }
            }
LAB_14327ac15:
            uVar21 = 0xffff;
          }
          else {
            uVar21 = 0xffff;
            if (*(int *)(lVar36 + 0x358) == *(int *)(lVar36 + 900)) goto LAB_14327ac15;
            uVar18 = *local_1b8;
            uVar16 = ((uint)(uVar18 >> 0x14) & 0xffff ^ (uint)(uVar18 >> 4)) * -0x7a143595;
            uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
            lVar30 = lVar36 + 0x388;
            if (*(longlong *)(lVar36 + 0x390) != 0) {
              lVar30 = *(longlong *)(lVar36 + 0x390);
            }
            iVar15 = *(int *)(lVar30 + (ulonglong)
                                       (*(int *)(lVar36 + 0x398) - 1U & (uVar16 >> 0x10 ^ uVar16)) *
                                       4);
            if (iVar15 != -1) {
              do {
                puVar2 = (ulonglong *)(*(longlong *)(lVar36 + 0x350) + (longlong)iVar15 * 0x18);
                if (*puVar2 == uVar18) {
                  if (puVar2 != (ulonglong *)0x0) goto joined_r0x00014327ace2;
                  break;
                }
                iVar15 = (int)puVar2[2];
              } while (iVar15 != -1);
            }
          }
          goto LAB_14327ace6;
        }
        FUN_14016e3f4(plVar26,iVar32);
        goto LAB_14327a971;
      }
    }
LAB_14327acef:
    lVar20 = local_1c0;
    cVar14 = FUN_1474a42c4(&local_148,local_1c0);
    if (cVar14 != '\0') {
      local_124 = *(undefined4 *)(local_1e8 + 0x88);
      if ((DAT_14c760f48 == 1) && (*(longlong *)(param_1 + 0xa8) != 0)) {
        FUN_14103d96c();
      }
      FUN_1474a5eba(lVar20,&local_148);
      uVar37 = *(ulonglong *)(param_1 + 0x38);
      if (uVar37 < 0xffffffff00000000) {
        plVar26 = DAT_14c9980d0;
        if (DAT_14c9980d8 == 0) {
          plVar26 = (longlong *)0x0;
        }
        (**(code **)(*plVar26 + 0x58))(plVar26,param_1,uVar37,0x11);
      }
      else {
        uVar29 = (uint)uVar37;
        if ((-1 < (int)uVar29) && ((int)uVar29 < DAT_14c998088)) {
          puVar24 = &DAT_14c998070;
          if (DAT_14c998080 != (undefined *)0x0) {
            puVar24 = DAT_14c998080;
          }
          if ((*(uint *)(puVar24 + ((uint)(uVar37 >> 3) & 0xffffffc)) >> (uVar29 & 0x1f) & 1) != 0)
          {
            lVar20 = DAT_14c998060 + (ulonglong)(uVar29 & 0x7fffffff) * 0x68;
            puVar25 = *(uint **)(lVar20 + 0x18);
            if (*(uint **)(lVar20 + 0x18) == (uint *)0x0) {
              puVar25 = (uint *)(lVar20 + 8);
            }
            *puVar25 = *puVar25 | 0x20000;
            *(byte *)(lVar20 + 0x60) = *(byte *)(lVar20 + 0x60) | 1;
          }
        }
      }
      *(int *)(param_1 + 0x8d0) = *(int *)(param_1 + 0x8d0) + 1;
      if ((1 < *(byte *)(local_1c8 + 0x179)) && (DAT_14c760f48 != 1)) {
        FUN_14081ae08(local_1c8,1);
      }
    }
    local_c0 = 0;
    if (local_c8 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_140d9ce6e(&local_108);
    if (local_190 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_11c == '\x01') {
      local_11c = '\0';
    }
    if (local_138 != 0) {
      FUN_1400020a8();
    }
    if (local_148 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
joined_r0x00014327ace2:
  uVar21 = 0xffff;
  if (puVar2 + 1 != (ulonglong *)0x0) {
    uVar21 = (undefined2)(int)puVar2[1];
  }
LAB_14327ace6:
  *(undefined2 *)(puVar19 + 0xe) = uVar21;
LAB_14327a971:
  puVar25 = local_200;
  if (local_1b8 != (ulonglong *)0x0) {
    FUN_1400020a8();
  }
  uVar29 = uVar29 & ~(uint)uVar34;
  puVar28 = (uint *)plVar26[4];
  if ((uint *)plVar26[4] == (uint *)0x0) {
    puVar28 = puVar25;
  }
  iVar15 = (int)plVar26[5];
  iVar32 = (int)uVar37;
  lVar36 = (longlong)iVar32;
  uVar16 = puVar28[lVar36] & uVar29;
  if (uVar16 == 0) {
    iVar22 = iVar15 + 0x1e;
    if (-1 < iVar15 + -1) {
      iVar22 = iVar15 + -1;
    }
    iVar22 = iVar22 >> 5;
    iVar23 = iVar22;
    if (iVar22 < iVar32) {
      iVar23 = iVar32;
    }
    if (iVar22 <= iVar32) goto LAB_14327acef;
    local_1f8 = (undefined8 **)CONCAT44(local_1f8._4_4_,(int)local_1f8 + 0x20);
    lVar30 = 0;
    while (uVar16 = puVar28[lVar36 + lVar30 + 1], uVar16 == 0) {
      local_1f8 = (undefined8 **)CONCAT44(local_1f8._4_4_,(int)local_1f8 + 0x20);
      lVar30 = lVar30 + 1;
      if (iVar23 - lVar36 == lVar30) goto LAB_14327acef;
    }
    uVar37 = (ulonglong)(iVar32 + (int)lVar30 + 1);
    uVar29 = 0xffffffff;
  }
  uVar34 = (ulonglong)(-uVar16 & uVar16);
  uVar18 = uVar34 * 2 + 1;
  lVar36 = 0x3f;
  if (uVar18 != 0) {
    for (; uVar18 >> lVar36 == 0; lVar36 = lVar36 + -1) {
    }
  }
  iVar32 = ((int)local_1f8 - ((uint)lVar36 ^ 0x3f)) + 0x3e;
  if (iVar15 <= iVar32) goto LAB_14327acef;
  goto LAB_14327a840;
}



// FUNCTION 14327aeb8 FUN_14327aeb8 body=69 status=ok
// SIG undefined FUN_14327aeb8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14327aeb8(void)

{
  _DAT_14caa9788 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014327aefa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caa9790,1);
  return;
}



// FUNCTION 14327aefd FUN_14327aefd body=69 status=ok
// SIG undefined FUN_14327aefd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14327aefd(void)

{
  _DAT_14caa9798 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014327af3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caa97a0,1);
  return;
}



// FUNCTION 14327af42 FUN_14327af42 body=69 status=ok
// SIG undefined FUN_14327af42(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14327af42(void)

{
  _DAT_14caa97a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014327af84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caa97b0,1);
  return;
}



// FUNCTION 14327af87 FUN_14327af87 body=69 status=ok
// SIG undefined FUN_14327af87(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14327af87(void)

{
  _DAT_14caa97c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014327afc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caa97c8,1);
  return;
}



// FUNCTION 14327afcc FUN_14327afcc body=69 status=ok
// SIG undefined FUN_14327afcc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14327afcc(void)

{
  _DAT_14caa97d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014327b00e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caa97d8,1);
  return;
}



// FUNCTION 14327b011 FUN_14327b011 body=69 status=ok
// SIG undefined FUN_14327b011(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14327b011(void)

{
  _DAT_14caa97e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014327b053. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caa97e8,1);
  return;
}



// FUNCTION 14327b056 FUN_14327b056 body=69 status=ok
// SIG undefined FUN_14327b056(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14327b056(void)

{
  _DAT_14caa97f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014327b098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caa97f8,1);
  return;
}



// FUNCTION 14327b09b FUN_14327b09b body=720 status=ok
// SIG undefined FUN_14327b09b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_14327b09b(float param_1,float param_2,longlong *param_3,longlong param_4,int *param_5,
                  int *param_6,undefined8 param_7,char param_8)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 unaff_RBP;
  longlong lVar10;
  longlong lVar11;
  byte bVar12;
  float fVar13;
  float fVar14;
  
  if (((param_4 != 0) && ((*(byte *)(param_4 + 0x319) & 8) != 0)) &&
     (*(char *)(param_4 + 0x318) == '\x02')) {
    fVar13 = param_2;
    if (*(char *)((longlong)param_3 + 0x2c) != '\0') {
      fVar13 = *(float *)(param_3 + 5);
    }
    fVar14 = 0.0;
    if (0.0 <= param_2 - fVar13) {
      fVar14 = param_2 - fVar13;
    }
    if ((fVar14 <= _DAT_14c760f60) && ((*param_5 != (int)param_3[4] || (DAT_14c760f64 == '\x01'))))
    {
      FUN_14327bad1(param_4,(char)param_3[6]);
      cVar4 = FUN_14327bba5((int)param_3[4],*param_5,
                            CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_8) & 0xffffffff,param_7
                           );
      lVar3 = *(longlong *)(param_4 + 8);
      iVar6 = *param_6;
      if (iVar6 < (int)param_3[1]) {
        lVar10 = *(longlong *)(lVar3 + 0x9c8);
        do {
          lVar11 = (longlong)iVar6 * 0x38;
          lVar8 = (longlong)
                  *(int *)(*(longlong *)(param_4 + 0x410) +
                          (ulonglong)*(ushort *)(*param_3 + lVar11) * 4);
          if (((lVar8 != -1) &&
              (plVar9 = *(longlong **)(*(longlong *)(param_4 + 0x340) + lVar8 * 8),
              plVar9 != (longlong *)0x0)) && (2 < *(byte *)((longlong)plVar9 + 0xc))) {
            if (cVar4 == '\0') {
              lVar7 = *param_3 + lVar11;
              dVar1 = *(double *)(lVar7 + 0x18);
              lVar11 = (longlong)(int)plVar9[1];
              dVar2 = *(double *)(lVar7 + 0x10);
              lVar8 = *(longlong *)(*plVar9 + 0x278);
              *(float *)(lVar8 + lVar11 * 0xc) = (float)*(double *)(lVar7 + 8);
              *(float *)(lVar8 + 4 + lVar11 * 0xc) = (float)dVar2;
              *(float *)(lVar8 + 8 + lVar11 * 0xc) = (float)dVar1;
              dVar1 = *(double *)(lVar7 + 0x30);
              lVar11 = (longlong)(int)plVar9[1];
              dVar2 = *(double *)(lVar7 + 0x28);
              lVar8 = *(longlong *)(*plVar9 + 0x290);
              *(float *)(lVar8 + lVar11 * 0xc) = (float)*(double *)(lVar7 + 0x20);
              *(float *)(lVar8 + 4 + lVar11 * 0xc) = (float)dVar2;
              *(float *)(lVar8 + 8 + lVar11 * 0xc) = (float)dVar1;
            }
            FUN_1429c4862(lVar10 + 0x448,plVar9,CONCAT71((int7)((ulonglong)lVar11 >> 8),1));
            iVar6 = *param_6;
          }
          iVar6 = iVar6 + 1;
          *param_6 = iVar6;
        } while (iVar6 < (int)param_3[1]);
      }
      if ((param_8 == '\0') || ((longlong)(int)param_3[3] == 0)) {
        bVar12 = 0;
      }
      else {
        lVar10 = (longlong)(int)param_3[3] << 7;
        lVar8 = param_3[2] + 0x50;
        bVar12 = 0;
        do {
          lVar11 = (longlong)
                   *(int *)(*(longlong *)(param_4 + 0x410) +
                           (ulonglong)*(ushort *)(lVar8 + 0x20) * 4);
          if ((lVar11 != -1) &&
             (plVar9 = *(longlong **)(*(longlong *)(param_4 + 0x340) + lVar11 * 8),
             plVar9 != (longlong *)0x0)) {
            if ((*(byte *)(lVar8 + 0x22) & 8) != 0) {
              if (*(byte *)((longlong)plVar9 + 0xc) < 3) {
                plVar9 = (longlong *)0x0;
              }
              plVar9 = *(longlong **)
                        (*(longlong *)(*plVar9 + 0x5a8) + (longlong)(int)plVar9[1] * 0x10);
              if ((plVar9 == (longlong *)0x0) || (*(byte *)((longlong)plVar9 + 0xc) < 3))
              goto LAB_14327b34c;
            }
            if (*(char *)(*(longlong *)(*plVar9 + 0x2c0) + 0xd + (longlong)(int)plVar9[1] * 0x10) ==
                '\0') {
              bVar5 = FUN_14327bc74(lVar3,plVar9,lVar8 + -0x50,lVar8,lVar8 + -0x38,lVar8 + -0x20,
                                    cVar4,(double)fVar14,(double)param_1);
              bVar12 = bVar12 | bVar5;
            }
          }
LAB_14327b34c:
          lVar8 = lVar8 + 0x80;
          lVar10 = lVar10 + -0x80;
        } while (lVar10 != 0);
      }
      *param_5 = (int)param_3[4];
      goto LAB_14327b0fe;
    }
  }
  bVar12 = 0;
LAB_14327b0fe:
  return bVar12 & 1;
}



// FUNCTION 14327b36c FUN_14327b36c body=365 status=ok
// SIG undefined FUN_14327b36c(void)

longlong * FUN_14327b36c(longlong param_1)

{
  float *pfVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar21;
  undefined1 auVar20 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  plVar10 = (longlong *)FUN_1413dd87e(&DAT_14caa9c28);
  plVar11 = (longlong *)FUN_1406cf856(param_1 + 0x9a0);
  FUN_140491ce0(plVar10,(int)plVar11[1],1);
  if (0 < (int)plVar11[1]) {
    lVar12 = 0x30;
    lVar13 = 0x20;
    lVar14 = 0;
    do {
      lVar2 = *plVar11;
      pfVar1 = (float *)(lVar2 + -0x20 + lVar13);
      fVar4 = *pfVar1;
      fVar5 = pfVar1[1];
      fVar16 = pfVar1[2];
      fVar6 = pfVar1[3];
      fVar17 = fVar4 + fVar4;
      fVar18 = fVar5 + fVar5;
      fVar19 = fVar16 + fVar16;
      pfVar1 = (float *)(lVar2 + lVar13);
      fVar7 = *pfVar1;
      fVar8 = pfVar1[1];
      fVar9 = pfVar1[2];
      fVar21 = fVar6 * (fVar6 + fVar6);
      auVar22._0_4_ = (1.0 - (fVar16 * fVar19 + fVar5 * fVar18)) * fVar7;
      auVar22._4_4_ = (1.0 - (fVar16 * fVar19 + fVar4 * fVar17)) * fVar8;
      auVar22._8_4_ = (1.0 - (fVar5 * fVar18 + fVar4 * fVar17)) * fVar9;
      auVar22._12_4_ = (0.0 - (fVar21 + fVar21)) * pfVar1[3];
      fVar16 = (fVar18 * fVar4 + fVar19 * fVar6) * fVar7;
      fVar21 = (fVar19 * fVar4 + fVar18 * fVar6) * fVar9;
      auVar15._4_4_ = (fVar19 * fVar5 + fVar17 * fVar6) * fVar8;
      auVar15._0_4_ = fVar16;
      auVar15._8_4_ = fVar21;
      auVar15._12_4_ = (fVar17 * fVar4 + fVar17 * fVar6) * pfVar1[3];
      auVar23 = blendps(auVar22,ZEXT816(0),8);
      auVar20 = insertps(auVar15,auVar15,0x4c);
      auVar15 = insertps(*(undefined1 (*) [16])(lVar2 + -0x10 + lVar13),0x3f800000,0x30);
      lVar2 = *plVar10;
      auVar3._4_4_ = fVar16;
      auVar3._0_4_ = auVar22._0_4_;
      auVar3._8_4_ = (fVar19 * fVar4 - fVar18 * fVar6) * fVar7;
      auVar3._12_4_ = 0;
      *(undefined1 (*) [16])(lVar2 + -0x30 + lVar12) = auVar3;
      pfVar1 = (float *)(lVar2 + -0x20 + lVar12);
      *pfVar1 = (fVar18 * fVar4 - fVar19 * fVar6) * fVar8;
      pfVar1[1] = auVar22._4_4_;
      pfVar1[2] = auVar20._0_4_;
      pfVar1[3] = auVar20._8_4_;
      pfVar1 = (float *)(lVar2 + -0x10 + lVar12);
      *pfVar1 = fVar21;
      pfVar1[1] = (fVar19 * fVar5 - fVar17 * fVar6) * fVar9;
      pfVar1[2] = auVar23._8_4_;
      pfVar1[3] = auVar23._12_4_;
      *(undefined1 (*) [16])(lVar2 + lVar12) = auVar15;
      lVar14 = lVar14 + 1;
      lVar12 = lVar12 + 0x40;
      lVar13 = lVar13 + 0x30;
    } while (lVar14 < (int)plVar11[1]);
  }
  return plVar10;
}



// FUNCTION 14327b4da FUN_14327b4da body=84 status=ok
// SIG undefined FUN_14327b4da(void)

void FUN_14327b4da(longlong param_1,ulonglong param_2)

{
  if (((param_2 & 1) == 0) && (*(longlong *)(param_1 + 0xa40) != 0)) {
    FUN_146ee9690(*(longlong *)(param_1 + 0xa40),param_1 + 0x240);
  }
  if ((*(longlong *)(param_1 + 0x5a8) != 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x5a8) + 0x74) & 8) != 0)) {
    FUN_1448c69c8(param_1);
    FUN_1448c6f34(param_1);
    return;
  }
  return;
}



// FUNCTION 14327b52e FUN_14327b52e body=58 status=ok
// SIG undefined FUN_14327b52e(void)

void FUN_14327b52e(longlong *param_1)

{
  if ((param_1[0x148] != 0) && ((*(byte *)(param_1[0x148] + 0x319) & 8) != 0)) {
    FUN_1479b7370();
                    /* WARNING: Could not recover jumptable at 0x00014327b561. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xa88))(param_1);
    return;
  }
  return;
}



// FUNCTION 14327b568 FUN_14327b568 body=93 status=ok
// SIG undefined FUN_14327b568(void)

void FUN_14327b568(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  
  if (*(char *)(param_1 + 4) == '\x01') {
    uVar4 = 1 << ((byte)param_2 & 0x1f);
    lVar3 = param_1 + 0x30;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x40);
    }
    uVar1 = param_2 + 0x1f;
    if (-1 < (int)param_2) {
      uVar1 = param_2;
    }
    lVar2 = (longlong)((int)uVar1 >> 5);
    uVar1 = *(uint *)(lVar3 + lVar2 * 4);
    if ((uVar1 >> (param_2 & 0x1f) & 1) == 0) {
      *(uint *)(lVar3 + lVar2 * 4) = uVar1 | uVar4;
      lVar3 = param_1 + 0x10;
      if (*(longlong *)(param_1 + 0x20) != 0) {
        lVar3 = *(longlong *)(param_1 + 0x20);
      }
      if ((*(uint *)(lVar3 + lVar2 * 4) & uVar4) != 0) {
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
      }
    }
  }
  return;
}



// FUNCTION 14327b5c6 FUN_14327b5c6 body=992 status=ok
// SIG undefined FUN_14327b5c6(void)

longlong FUN_14327b5c6(longlong *param_1,code *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  undefined4 uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined8 local_110;
  wchar_t *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  code **local_f0;
  undefined1 *local_e8;
  code *local_e0;
  undefined8 local_d8;
  undefined2 local_d0;
  undefined1 local_ce;
  char local_cd [33];
  undefined8 local_ac;
  longlong local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined2 local_8c;
  undefined1 local_8a;
  undefined8 local_88;
  ulonglong uStack_80;
  undefined8 local_78;
  ulonglong uStack_70;
  code *local_68;
  undefined4 *local_60;
  int local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar1 = *param_1;
  plVar2 = (longlong *)param_1[1];
  if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
    lVar12 = *(longlong *)param_2;
    uVar5 = (uint)((ulonglong)lVar12 >> 0x10);
    uVar9 = (uint)lVar12 & 0xffff;
    plVar6 = plVar2 + 7;
    if ((longlong *)plVar2[8] != (longlong *)0x0) {
      plVar6 = (longlong *)plVar2[8];
    }
    iVar4 = *(int *)((longlong)plVar6 +
                    (ulonglong)
                    ((int)plVar2[9] - 1U &
                    (int)((ulonglong)lVar12 >> 0x20) + ((uint)lVar12 << 0x10 | uVar9) +
                    (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar9 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        lVar8 = *plVar2 + (longlong)iVar4 * 0x38;
        if (*(longlong *)(*plVar2 + (longlong)iVar4 * 0x38) == lVar12) {
          if (lVar8 != 0) {
            lVar8 = lVar8 + 8;
            goto LAB_14327b6dd;
          }
          break;
        }
        iVar4 = *(int *)(lVar8 + 0x30);
      } while (iVar4 != -1);
    }
  }
  local_90 = 0xffffffff;
  lVar8 = 0;
  local_8c = 0;
  local_8a = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_ce = 1;
  FUN_1449b671c(local_cd);
  local_ac = 0;
  local_a0 = 0;
  uStack_98 = 0;
  if (*(longlong *)param_2 == 0) goto LAB_14327b6dd;
  if (*(longlong *)param_2 == DAT_14caa9768) {
    local_88 = *(undefined8 *)(lVar1 + 0x96c);
    uStack_80 = *(ulonglong *)(lVar1 + 0x974);
    local_78 = *(undefined8 *)(lVar1 + 0x95c);
    uStack_70 = *(ulonglong *)(lVar1 + 0x964);
    local_8c._1_1_ = true;
    local_8a = true;
LAB_14327b740:
    local_60 = &local_90;
    local_8c = CONCAT11(local_8c._1_1_,1);
    plVar2 = (longlong *)param_1[1];
    local_68 = param_2;
    FUN_1474aab32(plVar2,&local_54);
    lVar8 = *plVar2 + (longlong)local_54 * 0x38 + 8;
  }
  else {
    if (DAT_14cacfd48 == 0) {
      local_f0 = &local_68;
      local_68 = FUN_1449e2820;
      local_e0 = FUN_14081d0ea;
      local_e8 = &LAB_140eca530;
      local_f8 = &LAB_1479b02e7;
      local_100 = &LAB_146063820;
      local_108 = L"Engine";
      local_110 = 0;
      local_118 = 0x10000006;
      local_120 = 8;
      local_128 = 0x170;
      FUN_14081cfa3(L"/Script/Engine",L"CollisionProfile",&DAT_14cacfd48,&DAT_1479b02e6);
    }
    lVar8 = DAT_14cacfd48;
    lVar12 = *(longlong *)(DAT_14cacfd48 + 0x110);
    if (lVar12 == 0) {
      FUN_140aa6c08(DAT_14cacfd48);
      lVar12 = *(longlong *)(lVar8 + 0x110);
    }
    if (DAT_14cacfd78 == '\0') {
      FUN_1416bf7d6(lVar12,0);
      DAT_14cacfd78 = '\x01';
    }
    cVar3 = FUN_1479b0440(lVar12);
    lVar8 = 0;
    uVar7 = 0;
    if (cVar3 != '\0') {
      if (*(longlong *)(lVar1 + 0xa8) != 0) {
        uVar7 = *(undefined4 *)(*(longlong *)(lVar1 + 0xa8) + 0xc);
      }
      cVar3 = '\x01';
      if (*(char *)(lVar1 + 0x841) == '\0') {
        cVar3 = *(char *)(lVar1 + 0x847);
      }
      uVar5 = 0;
      uVar9 = 0;
      lVar12 = 0;
      do {
        if (local_cd[lVar12] == '\x02') {
          uVar9 = uVar9 | 1 << ((uint)lVar12 & 0x1f);
        }
        else if (local_cd[lVar12] == '\x01') {
          uVar5 = uVar5 | 1 << ((uint)lVar12 & 0x1f);
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 != 0x20);
      uVar11 = (uint)*(byte *)(lVar1 + 0x426) * 0x4000000 + (*(byte *)(lVar1 + 1099) & 1) * 4 |
               (uint)local_d0._1_1_ << 0x15;
      uVar10 = uVar11 + 8;
      if (cVar3 == '\0') {
        uVar10 = uVar11;
      }
      local_88 = CONCAT44(uVar9,uVar7);
      local_78 = CONCAT44(uVar9,0xffff);
      uStack_80 = CONCAT44(uVar10,uVar5) | 0x300000000;
      uStack_70 = CONCAT44(uVar10,*(undefined4 *)(lVar1 + 0xc)) | 0x300000000;
      local_8c._1_1_ = (byte)local_d0 == 5 || ((byte)local_d0 & 0xfd) == 1;
      local_8a = ((byte)local_d0 & 0xfe) == 2;
      goto LAB_14327b740;
    }
  }
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
LAB_14327b6dd:
  if ((local_50 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar8;
}



// FUNCTION 14327b9ba FUN_14327b9ba body=48 status=ok
// SIG undefined FUN_14327b9ba(void)

longlong FUN_14327b9ba(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x650;
  FUN_140aee7e4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14327bad1 FUN_14327bad1 body=212 status=ok
// SIG undefined FUN_14327bad1(void)

void FUN_14327bad1(longlong param_1,byte param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = (longlong)
          *(int *)(*(longlong *)(param_1 + 0x410) + (longlong)*(int *)(param_1 + 0x180) * 4);
  if ((lVar3 != -1) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x340) + lVar3 * 8), plVar1 != (longlong *)0x0
     )) {
    lVar3 = *plVar1;
    lVar4 = (longlong)(int)plVar1[1];
    lVar2 = *(longlong *)(*(longlong *)(lVar3 + 0x5a8) + lVar4 * 0x10);
    if (((lVar2 != 0) && (2 < *(byte *)(lVar2 + 0xc))) ||
       (*(char *)(*(longlong *)(lVar3 + 0x2c0) + 0xd + lVar4 * 0x10) == '\0')) {
      lVar3 = *(longlong *)(lVar3 + 0x680);
      if ((*(byte *)(lVar3 + lVar4) & 2) >> 1 != param_2) {
        *(byte *)(lVar3 + lVar4) = *(byte *)(lVar3 + lVar4) & 0xfd | param_2 * '\x02';
        if ((*(longlong *)(param_1 + 8) != 0) &&
           (lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x9c8), lVar2 != 0)) {
          FUN_1400d2fee(lVar2,plVar1,CONCAT71((int7)((ulonglong)lVar3 >> 8),2));
          FUN_140a357a8(plVar1,lVar2 + 0x510,lVar2);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14327bba5 FUN_14327bba5 body=206 status=ok
// SIG undefined FUN_14327bba5(void)

undefined8 FUN_14327bba5(int param_1,int param_2,char param_3,double *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 == '\0') goto LAB_14327bc51;
  QueryPerformanceCounter(&local_30);
  lVar1 = (longlong)
          ((((double)CONCAT44(0x43300000,local_30.s.LowPart) - 4503599627370496.0) +
           ((double)CONCAT44(0x45300000,local_30.s.HighPart) - 1.9342813113834067e+25)) *
           DAT_14c83f418 * 1000.0);
  if (param_2 != 0) {
    if (param_2 < param_1) {
      if (DAT_14c760f64 == '\0') {
        if ((param_1 - param_2 <= DAT_14c760f68) && ((double)lVar1 - *param_4 <= 100.0))
        goto LAB_14327bc51;
      }
      else if (param_1 - param_2 <= DAT_14c760f68) {
LAB_14327bc51:
        uVar2 = 0;
        goto LAB_14327bc53;
      }
    }
    else if (param_2 <= param_1) goto LAB_14327bc51;
  }
  *param_4 = (double)lVar1;
  uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
LAB_14327bc53:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 14327bc74 FUN_14327bc74 body=1380 status=ok
// SIG undefined FUN_14327bc74(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14327bc74(longlong param_1,longlong *param_2,double *param_3,double *param_4,
                       double *param_5,double *param_6,char param_7,double param_8,double param_9)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  bool bVar6;
  double dVar7;
  longlong lVar8;
  double *unaff_RBX;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar20;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auStack_148 [32];
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_100;
  double local_f8;
  double local_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (param_7 == '\0') {
    if (DAT_14c760f64 != '\x01') {
LAB_14327c165:
      uVar9 = 0;
      goto LAB_14327c167;
    }
    dVar2 = param_5[1];
    dVar3 = param_5[2];
    lVar11 = *param_2;
    lVar12 = (longlong)(int)param_2[1];
    lVar10 = *(longlong *)(lVar11 + 0x28);
    dVar16 = (dVar3 * param_8 + param_3[2]) - *(double *)(lVar10 + 0x10 + lVar12 * 0x18);
    dVar21 = (dVar2 * param_8 + param_3[1]) - *(double *)(lVar10 + 8 + lVar12 * 0x18);
    dVar4 = (*param_5 * param_8 + *param_3) - *(double *)(lVar10 + lVar12 * 0x18);
    bVar5 = 1e-08 < (float)(dVar16 * dVar16 + dVar4 * dVar4 + dVar21 * dVar21);
    bVar6 = 1e-08 < DAT_14c760f58;
    if (bVar6 && bVar5) {
      dVar17 = 1.0;
      if ((double)DAT_14c760f58 * param_9 <= 1.0) {
        dVar17 = (double)DAT_14c760f58 * param_9;
      }
      lVar11 = *(longlong *)(lVar11 + 0x278);
      *(float *)(lVar11 + lVar12 * 0xc) = (float)(*param_5 + dVar4 * dVar17);
      *(float *)(lVar11 + 4 + lVar12 * 0xc) = (float)(dVar2 + dVar21 * dVar17);
      *(float *)(lVar11 + 8 + lVar12 * 0xc) = (float)(dVar3 + dVar16 * dVar17);
      lVar11 = *param_2;
      lVar12 = (longlong)(int)param_2[1];
    }
    dVar2 = *param_6;
    dVar3 = param_6[1];
    dVar4 = param_6[2];
    dVar17 = *param_4;
    dVar20 = param_4[1];
    dVar7 = param_4[2];
    dVar15 = param_4[3];
    param_8 = param_8 * 0.5;
    dVar16 = (dVar20 * dVar4 * -1.0 + dVar7 * dVar3 + dVar15 * dVar2 * 1.0 + dVar17 * 0.0) * param_8
             + dVar17;
    dVar21 = (dVar17 * dVar4 * 1.0 + dVar15 * dVar3 + dVar7 * dVar2 * -1.0 + dVar20 * 0.0) * param_8
             + dVar20;
    dVar14 = (dVar15 * dVar4 * 1.0 + ((dVar2 * dVar20 * 1.0 + dVar7 * 0.0) - dVar3 * dVar17)) *
             param_8 + dVar7;
    dVar15 = (dVar7 * dVar4 * -1.0 + ((dVar2 * dVar17 * -1.0 + dVar15 * 0.0) - dVar3 * dVar20)) *
             param_8 + dVar15;
    dVar17 = dVar14 * dVar14 + dVar16 * dVar16;
    dVar20 = dVar15 * dVar15 + dVar21 * dVar21;
    auVar18._0_8_ = dVar17 + dVar20;
    auVar18._8_8_ = dVar17 + dVar20;
    uVar13 = -(ulonglong)(9.99999993922529e-09 <= auVar18._8_8_);
    auVar19 = sqrtpd(auVar18,auVar18);
    auVar22 = divpd(_DAT_149934d80,auVar19);
    auVar23._0_8_ = auVar22._0_8_ * dVar14;
    auVar23._8_8_ = auVar22._8_8_ * dVar15;
    uVar9 = (ulonglong)(dVar21 * auVar22._8_8_) & uVar13;
    auVar19._8_4_ = (int)uVar13;
    auVar19._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar18._0_8_);
    auVar19._12_4_ = (int)(uVar13 >> 0x20);
    local_d8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar23,auVar19);
    local_e8._8_4_ = (int)uVar9;
    local_e8._0_8_ =
         (ulonglong)(dVar16 * auVar22._0_8_) & -(ulonglong)(9.99999993922529e-09 <= auVar18._0_8_);
    local_e8._12_4_ = (int)(uVar9 >> 0x20);
    lVar10 = *(longlong *)(lVar11 + 0x48);
    lVar8 = lVar12 * 0x10;
    local_110 = (double)*(float *)(lVar10 + 0xc + lVar8);
    local_118 = (double)*(float *)(lVar10 + 8 + lVar8);
    local_120 = (double)*(float *)(lVar10 + 4 + lVar8);
    local_128 = (double)*(float *)(lVar10 + lVar8);
    unaff_RBX = &local_100;
    FUN_140185264(unaff_RBX,&local_128,local_e8,(double)_DAT_14c760f5c);
    if (local_f0 * local_f0 + local_100 * local_100 + local_f8 * local_f8 <= 9.99999993922529e-09) {
      if (!bVar6 || !bVar5) goto LAB_14327c165;
    }
    else {
      lVar11 = *(longlong *)(lVar11 + 0x290);
      *(float *)(lVar11 + lVar12 * 0xc) = (float)(dVar2 + local_100);
      *(float *)(lVar11 + 4 + lVar12 * 0xc) = (float)(dVar3 + local_f8);
      *(float *)(lVar11 + 8 + lVar12 * 0xc) = (float)(dVar4 + local_f0);
    }
  }
  else {
    lVar10 = param_2[1];
    lVar11 = *(longlong *)(*param_2 + 0x28);
    dVar2 = *param_3;
    dVar3 = param_3[1];
    *(double *)(lVar11 + 0x10 + (longlong)(int)lVar10 * 0x18) = param_3[2];
    pdVar1 = (double *)(lVar11 + (longlong)(int)lVar10 * 0x18);
    *pdVar1 = dVar2;
    pdVar1[1] = dVar3;
    dVar2 = param_4[3];
    dVar3 = param_4[2];
    dVar4 = param_4[1];
    lVar11 = *(longlong *)(*param_2 + 0x48);
    lVar10 = (longlong)(int)param_2[1] * 0x10;
    *(float *)(lVar11 + lVar10) = (float)*param_4;
    *(float *)(lVar11 + 4 + lVar10) = (float)dVar4;
    *(float *)(lVar11 + 8 + lVar10) = (float)dVar3;
    *(float *)(lVar11 + 0xc + lVar10) = (float)dVar2;
    dVar2 = param_5[2];
    lVar10 = (longlong)(int)param_2[1];
    dVar3 = param_5[1];
    lVar11 = *(longlong *)(*param_2 + 0x278);
    *(float *)(lVar11 + lVar10 * 0xc) = (float)*param_5;
    *(float *)(lVar11 + 4 + lVar10 * 0xc) = (float)dVar3;
    *(float *)(lVar11 + 8 + lVar10 * 0xc) = (float)dVar2;
    dVar2 = param_6[2];
    lVar10 = (longlong)(int)param_2[1];
    dVar3 = param_6[1];
    lVar11 = *(longlong *)(*param_2 + 0x290);
    *(float *)(lVar11 + lVar10 * 0xc) = (float)*param_6;
    *(float *)(lVar11 + 4 + lVar10 * 0xc) = (float)dVar3;
    *(float *)(lVar11 + 8 + lVar10 * 0xc) = (float)dVar2;
  }
  uVar9 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (*(char *)(*(longlong *)(*param_2 + 0x2c0) + 0xb + (longlong)(int)param_2[1] * 0x10) == '\x01')
  {
    FUN_1400d2fee(*(undefined8 *)(param_1 + 0x9c8),param_2,4);
  }
LAB_14327c167:
  if ((local_c0 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return uVar9 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14327c1ea FUN_14327c1ea body=29 status=ok
// SIG undefined FUN_14327c1ea(void)

undefined8 FUN_14327c1ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14327c21c FUN_14327c21c body=85 status=ok
// SIG undefined FUN_14327c21c(void)

void FUN_14327c21c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a40d8c0;
  return;
}



// FUNCTION 14327c272 FUN_14327c272 body=85 status=ok
// SIG undefined FUN_14327c272(void)

void FUN_14327c272(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a40d8c0;
  return;
}



// FUNCTION 14327c2c8 FUN_14327c2c8 body=118 status=ok
// SIG undefined FUN_14327c2c8(void)

void FUN_14327c2c8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e170a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a40d8c0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014327c32f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14327c33e FUN_14327c33e body=81 status=ok
// SIG undefined FUN_14327c33e(void)

void FUN_14327c33e(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14165273a(local_70);
  FUN_1416525c2(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14327c390 FUN_14327c390 body=83 status=ok
// SIG undefined FUN_14327c390(void)

undefined8 FUN_14327c390(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14165273a(local_70);
  FUN_1416525c2(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14327c4e2 FUN_14327c4e2 body=29 status=ok
// SIG undefined FUN_14327c4e2(void)

undefined8 FUN_14327c4e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14327c55c FUN_14327c55c body=29 status=ok
// SIG undefined FUN_14327c55c(void)

undefined8 FUN_14327c55c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14327c5a0 FUN_14327c5a0 body=29 status=ok
// SIG undefined FUN_14327c5a0(void)

undefined8 FUN_14327c5a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14327c5f2 FUN_14327c5f2 body=29 status=ok
// SIG undefined FUN_14327c5f2(void)

undefined8 FUN_14327c5f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14327c644 FUN_14327c644 body=29 status=ok
// SIG undefined FUN_14327c644(void)

undefined8 FUN_14327c644(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14327c688 FUN_14327c688 body=29 status=ok
// SIG undefined FUN_14327c688(void)

undefined8 FUN_14327c688(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14327c6cc FUN_14327c6cc body=29 status=ok
// SIG undefined FUN_14327c6cc(void)

undefined8 FUN_14327c6cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14327c6ea FUN_14327c6ea body=262 status=ok
// SIG undefined FUN_14327c6ea(void)

void FUN_14327c6ea(longlong param_1,int param_2)

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



// FUNCTION 14327c7f0 FUN_14327c7f0 body=67 status=ok
// SIG undefined FUN_14327c7f0(void)

void FUN_14327c7f0(undefined8 *param_1,double *param_2,double *param_3)

{
  FUN_14327b09b((float)*param_2,(float)*param_3,param_1 + 1,*param_1,param_1[8],param_1[10],
                param_1[9],*(undefined1 *)(param_1 + 0xb));
  return;
}



// FUNCTION 14327c83e FUN_14327c83e body=29 status=ok
// SIG undefined FUN_14327c83e(void)

void FUN_14327c83e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14327c85c FUN_14327c85c body=87 status=ok
// SIG undefined FUN_14327c85c(void)

undefined8 * FUN_14327c85c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a40da70;
  if (*(char *)((longlong)param_1 + 0x3c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14327c8b4 FUN_14327c8b4 body=743 status=ok
// SIG undefined FUN_14327c8b4(void)

void FUN_14327c8b4(longlong *param_1)

{
  double dVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  void *_Src;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  short *psVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong local_78;
  void *local_70;
  int local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = *param_1;
  if ((((lVar4 != 0) && ((*(byte *)(lVar4 + 0x319) & 8) != 0)) &&
      (*(char *)(lVar4 + 0x318) == '\x02')) &&
     (piVar5 = (int *)param_1[9], *piVar5 != (int)param_1[1])) {
    local_70 = (void *)0x0;
    local_68 = *(int *)(lVar4 + 0x348);
    lVar11 = (longlong)local_68;
    _Src = *(void **)(lVar4 + 0x340);
    if (lVar11 == 0) {
      local_64 = 0;
    }
    else {
      FUN_14172b2d6(&local_70,local_68,0);
      memcpy(local_70,_Src,lVar11 << 3);
    }
    FUN_14327bad1(lVar4,(char)param_1[6] != '\0');
    if (((int)param_1[5] == *(int *)(lVar4 + 0x300)) && (0 < local_68)) {
      local_78 = *(longlong *)(lVar4 + 8);
      lVar11 = *(longlong *)(local_78 + 0x9c8);
      local_80 = local_78 + 0x2b0;
      lVar14 = 0;
      do {
        plVar6 = *(longlong **)((longlong)local_70 + lVar14 * 8);
        if (plVar6 != (longlong *)0x0) {
          lVar7 = *(longlong *)(*(longlong *)(*plVar6 + 0x5a8) + (longlong)(int)plVar6[1] * 0x10);
          if (lVar7 == 0) {
            lVar7 = 0;
          }
          else if (*(byte *)(lVar7 + 0xc) < 3) {
            lVar7 = 0;
          }
          iVar3 = *(int *)(*(longlong *)(lVar4 + 0x400) + lVar14 * 4);
          plVar8 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar8 = param_1 + 2;
          }
          iVar12 = iVar3 + 0x1f;
          if (-1 < iVar3) {
            iVar12 = iVar3;
          }
          if ((lVar7 != 0) &&
             ((1 << ((byte)iVar3 & 0x1f) & *(uint *)((longlong)plVar8 + (longlong)(iVar12 >> 5) * 4)
              ) != 0)) {
            FUN_1429c4862(lVar11 + 0x448,plVar6,CONCAT71((uint7)(uint3)(iVar12 >> 0xd),1));
            lVar7 = *plVar6;
            lVar9 = (longlong)(int)plVar6[1];
            if (*(char *)(*(longlong *)(lVar7 + 0x2c0) + 0xd + lVar9 * 0x10) == '\0') {
              if ((longlong)(int)param_1[8] != 0) {
                psVar10 = (short *)param_1[7];
                lVar13 = (longlong)(int)param_1[8] * 0x38;
                do {
                  if (iVar3 == *psVar10) {
                    if (psVar10 != (short *)0x0) {
                      dVar1 = *(double *)(psVar10 + 0xc);
                      dVar2 = *(double *)(psVar10 + 8);
                      lVar7 = *(longlong *)(lVar7 + 0x278);
                      *(float *)(lVar7 + lVar9 * 0xc) = (float)*(double *)(psVar10 + 4);
                      *(float *)(lVar7 + 4 + lVar9 * 0xc) = (float)dVar2;
                      *(float *)(lVar7 + 8 + lVar9 * 0xc) = (float)dVar1;
                      dVar1 = *(double *)(psVar10 + 0x18);
                      dVar2 = *(double *)(psVar10 + 0x14);
                      lVar9 = (longlong)(int)plVar6[1];
                      lVar7 = *(longlong *)(*plVar6 + 0x290);
                      *(float *)(lVar7 + lVar9 * 0xc) =
                           (float)(*(double *)(psVar10 + 0x10) * 0.01745329238474369);
                      *(float *)(lVar7 + 4 + lVar9 * 0xc) = (float)(dVar2 * 0.01745329238474369);
                      *(float *)(lVar7 + 8 + lVar9 * 0xc) = (float)(dVar1 * 0.01745329238474369);
                      goto LAB_14327cb20;
                    }
                    break;
                  }
                  psVar10 = psVar10 + 0x1c;
                  lVar13 = lVar13 + -0x38;
                } while (lVar13 != 0);
              }
              if (*(int *)(*(longlong *)(lVar7 + 0x5a8) + 8 + lVar9 * 0x10) == 0) {
                FUN_14016e00e(*(undefined8 *)(local_78 + 0x9c8),plVar6);
                FUN_1456cc230(local_80,plVar6,1);
              }
            }
          }
        }
LAB_14327cb20:
        lVar14 = lVar14 + 1;
      } while (lVar14 < local_68);
    }
    *piVar5 = (int)param_1[1];
    if (local_70 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14327cba6 FUN_14327cba6 body=29 status=ok
// SIG undefined FUN_14327cba6(void)

void FUN_14327cba6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14327cbc4 FUN_14327cbc4 body=71 status=ok
// SIG undefined FUN_14327cbc4(void)

undefined8 * FUN_14327cbc4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a40da90;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14327cc0c FUN_14327cc0c body=1008 status=ok
// SIG undefined FUN_14327cc0c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14327cc0c(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double _X;
  undefined1 auVar8 [16];
  undefined1 uVar9;
  longlong lVar10;
  undefined8 unaff_RDI;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auStack_188 [32];
  longlong local_168;
  double *local_160;
  undefined1 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double dStack_110;
  undefined1 local_108 [16];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar3 = *param_1;
  if (((lVar3 != 0) && ((*(byte *)(lVar3 + 0x319) & 8) != 0)) &&
     (*(char *)(lVar3 + 0x318) == '\x02')) {
    piVar4 = (int *)param_1[4];
    iVar2 = *piVar4;
    if ((iVar2 != (int)param_1[1]) && (0.0 <= _DAT_14c760f60)) {
      uVar1 = *param_2;
      lVar12 = param_1[5];
      uVar9 = FUN_14327bba5((int)param_1[1],iVar2,
                            CONCAT71((int7)((ulonglong)unaff_RDI >> 8),(char)lVar12) & 0xffffffff,
                            param_1[6]);
      auVar8 = _DAT_1499387d0;
      if (((char)lVar12 != '\0') && ((longlong)(int)param_1[3] != 0)) {
        local_138 = *(undefined8 *)(lVar3 + 8);
        lVar12 = param_1[2];
        lVar13 = (longlong)(int)param_1[3] * 0x68;
        dVar5 = (double)DAT_1499387d0;
        dVar6 = DAT_1499387d0._8_8_;
        do {
          lVar10 = (longlong)
                   *(int *)(*(longlong *)(lVar3 + 0x410) + (ulonglong)*(ushort *)(lVar12 + 0x60) * 4
                           );
          if ((lVar10 != -1) &&
             (plVar11 = *(longlong **)(*(longlong *)(lVar3 + 0x340) + lVar10 * 8),
             plVar11 != (longlong *)0x0)) {
            if (*(char *)(lVar12 + 0x62) != '\0') {
              if (*(byte *)((longlong)plVar11 + 0xc) < 3) {
                plVar11 = (longlong *)0x0;
              }
              plVar11 = *(longlong **)
                         (*(longlong *)(*plVar11 + 0x5a8) + (longlong)(int)plVar11[1] * 0x10);
              if ((plVar11 == (longlong *)0x0) || (*(byte *)((longlong)plVar11 + 0xc) < 3))
              goto LAB_14327cf63;
            }
            if (*(char *)(*(longlong *)(*plVar11 + 0x2c0) + 0xd + (longlong)(int)plVar11[1] * 0x10)
                == '\0') {
              auVar20 = divpd(*(undefined1 (*) [16])(lVar12 + 0x20),auVar8);
              auVar21._8_8_ = 0;
              auVar21._0_8_ = *(double *)(lVar12 + 0x18);
              auVar21 = divpd(auVar21,auVar8);
              auVar20 = roundpd(auVar20,auVar20,3);
              auVar21 = roundpd(auVar21,auVar21,3);
              dVar17 = (*(double *)*(undefined1 (*) [16])(lVar12 + 0x20) - auVar20._0_8_ * dVar5) *
                       0.008726646259971648;
              dVar18 = (*(double *)(lVar12 + 0x28) - auVar20._8_8_ * dVar6) * 0.008726646259971648;
              dVar7 = (*(double *)(lVar12 + 0x18) - auVar21._0_8_ * dVar5) * 0.008726646259971648;
              _X = (0.0 - auVar21._8_8_ * dVar6) * 0.008726646259971648;
              dVar14 = sin(dVar17);
              dVar15 = sin(dVar18);
              dVar16 = sin(dVar7);
              sin(_X);
              dVar17 = cos(dVar17);
              dVar18 = cos(dVar18);
              dVar19 = cos(dVar7);
              cos(_X);
              dVar7 = dVar15 * dVar14 * dVar16 + dVar18 * dVar17 * dVar19;
              local_118 = dVar14 * dVar15 * dVar19 - dVar17 * dVar18 * dVar16;
              dStack_110 = -(dVar14 * dVar18 * dVar19) - dVar17 * dVar15 * dVar16;
              local_108._8_4_ = SUB84(dVar7,0);
              local_108._0_8_ = -(dVar18 * dVar14 * dVar16) + dVar15 * dVar17 * dVar19;
              local_108._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
              local_120 = *(double *)(lVar12 + 0x58) * 0.01745329238474369;
              local_128 = *(double *)(lVar12 + 0x50) * 0.01745329238474369;
              local_130 = *(double *)(lVar12 + 0x48) * 0.01745329238474369;
              local_168 = lVar12 + 0x30;
              local_160 = &local_130;
              local_150 = 0;
              local_158 = uVar9;
              local_148 = uVar1;
              FUN_14327bc74(local_138,plVar11,lVar12,&local_118);
            }
          }
LAB_14327cf63:
          lVar12 = lVar12 + 0x68;
          lVar13 = lVar13 + -0x68;
        } while (lVar13 != 0);
      }
      *piVar4 = (int)param_1[1];
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14327d008 FUN_14327d008 body=29 status=ok
// SIG undefined FUN_14327d008(void)

void FUN_14327d008(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14327d026 FUN_14327d026 body=57 status=ok
// SIG undefined FUN_14327d026(void)

undefined8 * FUN_14327d026(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a40dab0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14327d08c FUN_14327d08c body=12 status=ok
// SIG undefined FUN_14327d08c(void)

void FUN_14327d08c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014327d095. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14327d098 FUN_14327d098 body=29 status=ok
// SIG undefined FUN_14327d098(void)

undefined8 FUN_14327d098(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14327d0dc FUN_14327d0dc body=12 status=ok
// SIG undefined FUN_14327d0dc(void)

void FUN_14327d0dc(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014327d0e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14327d0e8 FUN_14327d0e8 body=29 status=ok
// SIG undefined FUN_14327d0e8(void)

undefined8 FUN_14327d0e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14327d106 FUN_14327d106 body=1260 status=ok
// SIG undefined FUN_14327d106(void)

void FUN_14327d106(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 uVar8;
  longlong *plVar9;
  char cVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_2c8 [32];
  undefined4 local_2a8;
  undefined4 local_2a0;
  undefined4 local_298;
  undefined8 local_290;
  wchar_t *local_288;
  undefined1 *local_280;
  undefined1 *local_278;
  code **local_270;
  undefined1 *local_268;
  code *local_260;
  longlong local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 *local_240;
  code *local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 local_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 local_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 local_204;
  uint local_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8 [2];
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158 [2];
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98 [2];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  lVar2 = *param_1;
  lVar13 = (longlong)*(int *)(*(longlong *)(lVar2 + 0x660) + 200);
  local_240 = param_2;
  if (lVar13 != 0) {
    lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x660) + 0xc0);
    local_258 = lVar2 + 0x410;
    lVar14 = 0;
    local_250 = param_3;
    local_248 = param_4;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar14);
      if ((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x188), lVar4 != 0)) {
        local_a8 = 0;
        uStack_a0 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_c8 = 0;
        uStack_c0 = 0;
        local_98[0] = 0;
        FUN_144a2a070(local_258,&local_c8,0xffffffff);
        lVar7 = DAT_14c997cc0;
        if (DAT_14c997cc0 == 0) {
          lVar6 = FUN_145a62958();
          lVar7 = *(longlong *)(lVar6 + 0x110);
          if (lVar7 == 0) {
            FUN_140aa6c08(lVar6);
            lVar7 = *(longlong *)(lVar6 + 0x110);
          }
        }
        cVar10 = *(char *)(lVar7 + 0x75);
        if (*(char *)(lVar4 + 0x31) != '\0') {
          cVar10 = *(char *)(lVar4 + 0x31);
        }
        if (((((*(int *)(lVar2 + 0x554) == 0) || (uVar1 = *(uint *)(lVar2 + 0x550), (int)uVar1 < 0))
             || (DAT_14c9647dc <= (int)uVar1)) ||
            ((plVar9 = (longlong *)
                       ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
             plVar9 == (longlong *)0x0 || ((int)plVar9[2] != *(int *)(lVar2 + 0x554))))) ||
           (((*(uint *)(plVar9 + 1) & 0x10200000) != 0 || (lVar7 = *plVar9, lVar7 == 0)))) {
LAB_14327d2cb:
          lVar7 = lVar2;
LAB_14327d2ce:
          uVar8 = *(undefined1 *)(lVar7 + 0x427);
        }
        else {
          if ((*(longlong *)(lVar7 + 0xa8) == 0) ||
             ((*(byte *)(*(longlong *)(lVar7 + 0xa8) + 0x65) & 1) != 0)) {
            if (DAT_14cad2858 == 0) {
              local_238 = FUN_144a7958c;
              local_260 = FUN_14081d0ea;
              local_268 = &LAB_146395584;
              local_270 = &local_238;
              local_278 = &LAB_147a0ba80;
              local_280 = &LAB_14575ccce;
              local_288 = L"Engine";
              local_290 = 0x40000000000;
              local_298 = 0x10000004;
              local_2a0 = 0x10;
              local_2a8 = 0x1180;
              FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe)
              ;
            }
            if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(DAT_14cad2858 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) != DAT_14cad2858 + 0x30))
            goto LAB_14327d2cb;
            goto LAB_14327d2ce;
          }
          uVar8 = 0;
        }
        FUN_147c48a7c(local_98,uVar8,cVar10 == '\x03');
        local_1d8 = 0;
        local_1d0 = 0;
        local_1c8 = 0;
        local_1c0 = 0;
        local_1b8[0] = 0;
        local_1b8[1] = 0;
        local_1a8 = 0;
        uStack_1a4 = 0;
        uStack_1a0 = 0;
        uStack_19c = 0x3ff00000;
        local_188 = 0;
        uStack_180 = 0;
        local_198 = 0;
        uStack_190 = 0;
        local_178 = 0x3ff0000000000000;
        uStack_170 = 0x3ff0000000000000;
        local_168 = 0x3ff0000000000000;
        uStack_160 = 0;
        local_158[0] = 0;
        local_158[1] = 0;
        local_148 = 0;
        uStack_144 = 0;
        uStack_140 = 0;
        uStack_13c = 0x3ff00000;
        local_128 = 0;
        uStack_120 = 0;
        local_138 = 0;
        uStack_130 = 0;
        local_118 = 0x3ff0000000000000;
        uStack_110 = 0x3ff0000000000000;
        local_108 = 0x3ff0000000000000;
        uStack_100 = 0;
        local_f0 = 0;
        local_e8 = 0;
        local_e0 = 0;
        local_d8 = 0;
        local_d0 = 0xffffffff;
        local_204 = local_98[0];
        local_214 = (undefined4)local_a8;
        uStack_210 = local_a8._4_4_;
        uStack_20c = (undefined4)uStack_a0;
        uStack_208 = uStack_a0._4_4_;
        local_224 = (undefined4)local_b8;
        uStack_220 = local_b8._4_4_;
        uStack_21c = (undefined4)uStack_b0;
        uStack_218 = uStack_b0._4_4_;
        local_238 = (code *)(CONCAT44((undefined4)local_c8,
                                      (int)CONCAT71(local_238._1_7_,*(byte *)(lVar4 + 0xb8) >> 3)) &
                            0xffffffffffffff01);
        uStack_230 = local_c8._4_4_;
        uStack_22c = (undefined4)uStack_c0;
        uStack_228 = uStack_c0._4_4_;
        lVar7 = DAT_14c997cc0;
        if (DAT_14c997cc0 == 0) {
          lVar6 = FUN_145a62958();
          lVar7 = *(longlong *)(lVar6 + 0x110);
          if (lVar7 == 0) {
            FUN_140aa6c08(lVar6);
            lVar7 = *(longlong *)(lVar6 + 0x110);
          }
        }
        bVar5 = *(byte *)(lVar7 + 0x75);
        if (*(byte *)(lVar4 + 0x31) != 0) {
          bVar5 = *(byte *)(lVar4 + 0x31);
        }
        local_200 = (uint)bVar5;
        puVar11 = (undefined8 *)(*(longlong *)(lVar2 + 0xa40) + 0x240);
        puVar12 = local_158;
        for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
          *puVar12 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar12 = puVar12 + 1;
        }
        local_1f8 = (undefined4)local_118;
        uStack_1f4 = local_118._4_4_;
        uStack_1f0 = (undefined4)uStack_110;
        uStack_1ec = uStack_110._4_4_;
        local_1e8 = local_108;
        local_1e0 = FUN_14075957a(lVar2);
        puVar11 = local_240;
        puVar12 = local_1b8;
        for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
          *puVar12 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar12 = puVar12 + 1;
        }
        local_f8 = lVar4 + 0x38;
        FUN_143627594(&local_238,local_250,local_248);
      }
      lVar14 = lVar14 + 8;
    } while (lVar13 * 8 != lVar14);
  }
  if ((local_90 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14327d612 FUN_14327d612 body=12 status=ok
// SIG undefined FUN_14327d612(void)

void FUN_14327d612(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014327d61b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14327d61e FUN_14327d61e body=29 status=ok
// SIG undefined FUN_14327d61e(void)

undefined8 FUN_14327d61e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14327d63c FUN_14327d63c body=283 status=ok
// SIG undefined FUN_14327d63c(void)

void FUN_14327d63c(longlong *param_1)

{
  byte *pbVar1;
  void *_Src;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 auStack_58 [32];
  longlong *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (longlong *)0x0;
  local_30 = *(int *)(*param_1 + 0x348);
  lVar4 = (longlong)local_30;
  _Src = *(void **)(*param_1 + 0x340);
  if (lVar4 != 0) {
    FUN_14172b2d6(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar4 << 3);
    if ((longlong)local_30 != 0) {
      plVar3 = local_38;
      do {
        plVar2 = (longlong *)*plVar3;
        if (plVar2 != (longlong *)0x0) {
          iVar5 = -1;
          if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
            iVar5 = 0;
            for (plVar6 = *(longlong **)
                           (*(longlong *)(*plVar2 + 0x5a8) + (longlong)(int)plVar2[1] * 0x10);
                (plVar6 != (longlong *)0x0 && (2 < *(byte *)((longlong)plVar6 + 0xc)));
                plVar6 = *(longlong **)
                          (*(longlong *)(*plVar6 + 0x5a8) + (longlong)(int)plVar6[1] * 0x10)) {
              iVar5 = iVar5 + 1;
            }
          }
          if (iVar5 <= (int)param_1[1]) {
            pbVar1 = (byte *)(*(longlong *)(*plVar2 + 0x680) + (longlong)(int)plVar2[1]);
            *pbVar1 = *pbVar1 | 4;
          }
        }
        plVar3 = plVar3 + 1;
      } while (plVar3 != local_38 + local_30);
    }
    if (local_38 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14327d76e FUN_14327d76e body=29 status=ok
// SIG undefined FUN_14327d76e(void)

undefined8 FUN_14327d76e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14327d7b8 FUN_14327d7b8 body=12 status=ok
// SIG undefined FUN_14327d7b8(void)

void FUN_14327d7b8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014327d7c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14327d7c4 FUN_14327d7c4 body=29 status=ok
// SIG undefined FUN_14327d7c4(void)

undefined8 FUN_14327d7c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14327d802 FUN_14327d802 body=29 status=ok
// SIG undefined FUN_14327d802(void)

void FUN_14327d802(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14327d820 FUN_14327d820 body=29 status=ok
// SIG undefined FUN_14327d820(void)

undefined8 FUN_14327d820(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14327d83e FUN_14327d83e body=282 status=ok
// SIG undefined FUN_14327d83e(void)

undefined8 * FUN_14327d83e(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14327baaa);
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



// FUNCTION 14327d958 FUN_14327d958 body=122 status=ok
// SIG undefined FUN_14327d958(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14327d958(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_144910c5a(_DAT_000000b0,_DAT_000000b8,0xc0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_144910c5a(param_1[0x16],param_1[0x17],param_1 + 0x18);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014327d9a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14327d9ec FUN_14327d9ec body=12 status=ok
// SIG undefined FUN_14327d9ec(void)

void FUN_14327d9ec(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014327d9f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14327d9f8 FUN_14327d9f8 body=29 status=ok
// SIG undefined FUN_14327d9f8(void)

undefined8 FUN_14327d9f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14327da16 FUN_14327da16 body=282 status=ok
// SIG undefined FUN_14327da16(void)

undefined8 * FUN_14327da16(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14327baaa);
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



// FUNCTION 14327db30 FUN_14327db30 body=123 status=ok
// SIG undefined FUN_14327db30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14327db30(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1474b796c(_DAT_000000a8,&DAT_14ca85100,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1474b796c(param_1[0x15],&DAT_14ca85100,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014327db7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14327dbab FUN_14327dbab body=2387 status=ok
// SIG undefined FUN_14327dbab(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14327dbab(void)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  char **local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  char *local_50;
  int local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = (char **)0x0;
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  lVar4 = 0;
  FUN_14282b410(L"/Script/GeometryCollectionEngine",&PTR_FUN_14a3fe740,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = (char **)0x1;
  FUN_14282b410(L"/Script/GeometryCollectionEngine",0,0,&PTR_FUN_14a3fe930);
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_FUN_14a3feb00 + lVar4),
                  L"/Script/GeometryCollectionEngine",
                  *(undefined8 *)((longlong)&PTR_u_ECollectionAttributeEnum_14a3feb08 + lVar4),
                  *(undefined8 *)((longlong)&PTR_DAT_14a3feb10 + lVar4));
    lVar4 = lVar4 + 0x20;
  } while (lVar4 != 0x40);
  local_58 = 0;
  local_68 = (char **)0x0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GeometryCollectionEngine",&PTR_FUN_14a3ff1f0,2,0);
  local_58 = 0;
  local_68 = (char **)0x0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GeometryCollectionEngine",&PTR_FUN_14a3ff3f0,1,0);
  local_58 = 0;
  local_68 = (char **)0x0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GeometryCollectionEngine",&PTR_FUN_14a4015e0,1,0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14a401aa0;
  local_68 = (char **)0x2;
  FUN_14282b410(L"/Script/GeometryCollectionEngine",0,0,&PTR_FUN_14a401ac0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14a4020c0;
  local_68 = (char **)0x2;
  FUN_14282b410(L"/Script/GeometryCollectionEngine",0,0,&PTR_FUN_14a4020e0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14a402500;
  local_68 = (char **)0x2;
  FUN_14282b410(L"/Script/GeometryCollectionEngine",0,0,&PTR_FUN_14a402520);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14a402a80;
  local_68 = (char **)0x2;
  FUN_14282b410(L"/Script/GeometryCollectionEngine",0,0,&PTR_FUN_14a402aa0);
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14caa92b0);
  if (cVar1 == '\0') {
    _DAT_14caa92b0 = 0;
    uRam000000014caa92b8 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_58 = 0;
  local_68 = (char **)0x0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GeometryCollectionEngine",&PTR_FUN_14a403410,1,0);
  local_58 = 0;
  local_68 = (char **)0x0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GeometryCollectionEngine",&PTR_FUN_14a4038d0,1,0);
  local_50 = "CollectionName";
  local_48 = 0xe;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  DAT_14caa92f8 = (ulonglong)uVar2;
  local_50 = "CollectionIdGuid";
  local_48 = 0x10;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  DAT_14caa9300 = (ulonglong)uVar2;
  local_50 = "CollectionStateGuid";
  local_48 = 0x13;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  DAT_14caa9308 = (ulonglong)uVar2;
  local_50 = "SMInstance";
  local_48 = 10;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14caa9310 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14caa9498,L"ReceivePhysicsCollision",1);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = (char **)0x4;
  FUN_14282b410(L"/Script/GeometryCollectionEngine",&PTR_FUN_14a40ab90,1,&PTR_FUN_14a40aaf0);
  local_68 = (char **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14caa95c0,L"p.Chaos.GC.UseCustomRenderer",&DAT_14c760f34,
                L"When enabled, use a custom renderer if specified");
  atexit(FUN_143277de7);
  local_68 = (char **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14caa95d0,L"p.Chaos.GC.InitConstantDataUseParallelFor",&DAT_14c760f35,
                L"When enabled, InitConstant data will use parallelFor for copying some of the data"
               );
  atexit(FUN_143277e2c);
  local_68 = (char **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14caa95e0,L"p.Chaos.GC.InitConstantDataParallelForBatchSize",&DAT_14c760f38,
                L"When parallelFor is used in InitConstantData, defined the minimium size of a batch of vertex "
               );
  atexit(FUN_143277e71);
  local_68 = (char **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14caa95f0,L"p.Chaos.GC.MaxGeometryCollectionAsyncPhysicsTickIdleTimeMs",
                &DAT_14c760f3c,
                L"Amount of time in milliseconds before the async tick turns off when it is otherwise not doing anything."
               );
  atexit(FUN_143277eb6);
  local_68 = (char **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14caa9600,L"p.Chaos.GC.RemovalTimerMultiplier",&DAT_14c760f40,
                L"Multiplier for the removal time evaluation ( > 1 : faster removal , > 1 slower");
  atexit(FUN_143277efb);
  local_68 = (char **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14caa9618,L"p.Chaos.GC.EmitRootBreakingEvent",&DAT_14caa9610,
                L"When true send a breaking event when root is breaking");
  atexit(FUN_143277f40);
  local_68 = (char **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14caa9630,L"p.Chaos.GC.CreatePhysicsStateInEditor",&DAT_14caa9628,
                L"when on , physics state for a GC will be create in editor ( non PIE )");
  atexit(FUN_143277f85);
  local_68 = (char **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14caa9640,L"p.Chaos.GC.UseReplicationV2",&DAT_14c760f44,
                L"When true use new replication data model");
  atexit(FUN_143277fca);
  local_68 = (char **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14caa9650,L"p.Chaos.GC.NetAwakeningMode",&DAT_14c760f48,
                L"Changes how GC components ensure that their owner is awake for replication. 0 = ForceDormancyAwake, 1 = Use Flush Net Dormancy"
               );
  atexit(FUN_14327800f);
  local_68 = (char **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14caa9660,L"p.Chaos.GC.CustomRendererHiddenActorFix",&DAT_14c760f4c,
                L"When true custom renderer will account for the actor hidden flag");
  atexit(FUN_143278054);
  local_50 = "GeometryCollectionRepData";
  local_48 = 0x19;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  DAT_14caa9670 = (ulonglong)uVar2;
  FUN_14588533c(&DAT_14caa9690,0);
  _DAT_14caa9690 = &PTR_FUN_14a40d720;
  atexit((_func_5014 *)&LAB_143278099);
  local_50 = "GeometryCollectionRepStateData";
  local_48 = 0x1e;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  DAT_14caa96b0 = (ulonglong)uVar2;
  FUN_14588533c(&DAT_14caa96d0,0);
  _DAT_14caa96d0 = &PTR_FUN_14a40d740;
  atexit((_func_5014 *)&LAB_1432780b3);
  local_50 = "GeometryCollectionRepDynamicData";
  local_48 = 0x20;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  DAT_14caa96f0 = (ulonglong)uVar2;
  FUN_14588533c(&DAT_14caa9710,0);
  _DAT_14caa9710 = &PTR_FUN_14a40d760;
  atexit((_func_5014 *)&LAB_1432780cd);
  local_50 = (char *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48 = 2;
  *(undefined ***)local_50 = &PTR_LAB_149e170a0;
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
  *(longlong *)(local_50 + 0x10) = lVar3;
  *(undefined ***)local_50 = &PTR_FUN_14a40d8c0;
  ppuStack_60 = (undefined **)CONCAT44(ppuStack_60._4_4_,0x20);
  local_68 = &local_50;
  FUN_141703554(&DAT_14caa9730,L"r.GeometryCollection.Nanite",&DAT_14c760f50,
                L"Render geometry collections using Nanite.");
  if (local_48 != 0) {
    if (local_50 == (char *)0x0) goto LAB_14327e2c8;
    (*(code *)**(undefined8 **)local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_14327e2c8:
  atexit(FUN_1432780e7);
  local_68 = (char **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14caa9740,L"p.GeometryCollectionNavigationSizeThreshold",&DAT_14c760f54,
                L"Size in CM used as a threshold for whether a geometry in the collection is collected and exported for navigation purposes. Measured as the diagonal of the leaf node bounds."
               );
  atexit(FUN_14327812c);
  local_68 = (char **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14caa9758,L"p.GeometryCollectionSingleThreadedBoundsCalculation",&DAT_14caa9750
                ,L"[Debug Only] Single threaded bounds calculation. [def:false]");
  atexit(FUN_143278171);
  local_50 = "InternalGCDefaultCollision";
  local_48 = 0x1a;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  DAT_14caa9768 = (ulonglong)uVar2;
  local_68 = (char **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14caa9788,L"p.GeometryCollectionRepLinearMatchStrength",&DAT_14c760f58,
                L"Units can be interpreted as %/s^2 - acceleration of percent linear correction");
  atexit(FUN_14327aeb8);
  local_68 = (char **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14caa9798,L"p.GeometryCollectionRepAngularMatchTime",&DAT_14c760f5c,
                L"In seconds, how quickly should the angle match the replicated target angle");
  atexit(FUN_14327aefd);
  local_68 = (char **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14caa97a8,L"p.GeometryCollectionRepMaxExtrapolationTime",&DAT_14c760f60,
                L"Number of seconds that replicated physics data will persist for a GC, extrapolating velocities"
               );
  atexit(FUN_14327af42);
  local_68 = (char **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14caa97c0,L"p.Chaos.DebugDraw.GeometryCollectionReplication",&DAT_14caa97b8,
                L"If true debug draw deltas and corrections for geometry collection replication");
  atexit(FUN_14327af87);
  local_68 = (char **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14caa97d0,L"p.bGeometryCollectionRepUseClusterVelocityMatch",&DAT_14c760f64,
                L"Use physical velocity to match cluster states");
  atexit(FUN_14327afcc);
  local_68 = (char **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14caa97e0,L"p.GeometryCollectionHardMissingUpdatesSnapThreshold",&DAT_14c760f68
                ,L"Determines how many missing updates before we trigger a hard snap");
  atexit(FUN_14327b011);
  local_68 = (char **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14caa97f0,L"p.GeometryCollectionHardsnapThresholdMs",&DAT_14c760f68,
                L"Determines how many ms since the last hardsnap to trigger a new one");
  atexit(FUN_14327b056);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14327e500 FUN_14327e500 body=55 status=ok
// SIG undefined FUN_14327e500(void)

void FUN_14327e500(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa98a8 == 0) {
    uVar1 = FUN_140ef4a6d();
    DAT_14caa98a8 =
         FUN_14171c317(FUN_14632e534,uVar1,L"EGeometryCollectionDebugDrawActorHideGeometry");
  }
  return;
}



// FUNCTION 14327e537 FUN_14327e537 body=69 status=ok
// SIG undefined FUN_14327e537(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14327e537(void)

{
  _DAT_14caa9998 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014327e579. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caa99a0,1);
  return;
}



// FUNCTION 14327e57c FUN_14327e57c body=69 status=ok
// SIG undefined FUN_14327e57c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14327e57c(void)

{
  _DAT_14caa99b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014327e5be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caa99b8,1);
  return;
}



// FUNCTION 14327e5c1 FUN_14327e5c1 body=69 status=ok
// SIG undefined FUN_14327e5c1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14327e5c1(void)

{
  _DAT_14caa99c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014327e603. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caa99c8,1);
  return;
}



// FUNCTION 14327e606 FUN_14327e606 body=69 status=ok
// SIG undefined FUN_14327e606(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14327e606(void)

{
  _DAT_14caa99d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014327e648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caa99d8,1);
  return;
}



// FUNCTION 14327e64c FUN_14327e64c body=330 status=ok
// SIG undefined FUN_14327e64c(void)

undefined8
FUN_14327e64c(longlong param_1,uint param_2,undefined8 param_3,undefined4 param_4,
             undefined8 *param_5)

{
  uint *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 auStack_b8 [32];
  undefined4 *local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar2 = 0xffffffff;
  if (*(int *)(param_1 + 0x2b8) != *(int *)(param_1 + 0x2e4)) {
    lVar3 = param_1 + 0x2e8;
    if (*(longlong *)(param_1 + 0x2f0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x2f0);
    }
    uVar4 = *(uint *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x2f8) - 1U & param_2) * 4);
    if (uVar4 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x2b0) + (longlong)(int)uVar4 * 0x28);
        if (*puVar1 == param_2) {
          if (puVar1 + 2 != (uint *)0x0 && puVar1 != (uint *)0x0) {
            local_58 = *param_5;
            uStack_50 = param_5[1];
            local_68 = 0;
            uStack_60 = 0;
            local_70 = FUN_1474b02ec(param_1 + 0x300,param_1,param_3,&local_41);
            local_6c = FUN_1474affc6((longlong)local_70 * 0xb8 + *(longlong *)(param_1 + 0x300),
                                     param_4,&local_58);
            local_88 = *(undefined4 *)param_5;
            uStack_84 = *(undefined4 *)((longlong)param_5 + 4);
            uStack_80 = *(undefined4 *)(param_5 + 1);
            uStack_7c = *(undefined4 *)((longlong)param_5 + 0xc);
            local_98 = &local_88;
            uVar2 = FUN_1474af4ac(puVar1 + 2,param_3,param_4,&local_70);
          }
          break;
        }
        uVar4 = puVar1[8];
      } while (uVar4 != 0xffffffff);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 14327e798 FUN_14327e798 body=1130 status=ok
// SIG undefined FUN_14327e798(void)

void FUN_14327e798(longlong param_1,uint param_2,uint param_3,longlong *param_4)

{
  uint *puVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong *plVar22;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined1 local_a0;
  bool local_95;
  int local_94;
  longlong local_90;
  int *local_88;
  undefined4 local_80;
  int **local_78;
  int local_70;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(param_1 + 0x2b8) != *(int *)(param_1 + 0x2e4)) {
    lVar21 = param_1 + 0x2e8;
    if (*(longlong *)(param_1 + 0x2f0) != 0) {
      lVar21 = *(longlong *)(param_1 + 0x2f0);
    }
    uVar18 = *(uint *)(lVar21 + (ulonglong)(*(int *)(param_1 + 0x2f8) - 1U & param_2) * 4);
    if (uVar18 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x2b0) + (longlong)(int)uVar18 * 0x28);
        if (*puVar1 == param_2) {
          if (((((ulonglong)(puVar1 + 2) & 0xfffffffffffffff7) != 0) && (-1 < (int)param_3)) &&
             ((int)param_3 < (int)puVar1[4])) {
            iVar17 = *(int *)(*(longlong *)(puVar1 + 2) + (ulonglong)param_3 * 0x18);
            if ((-1 < (longlong)iVar17) && (iVar17 < *(int *)(param_1 + 0x308))) {
              local_90 = *(longlong *)(puVar1 + 2) + (ulonglong)param_3 * 0x18;
              lVar21 = *(longlong *)(param_1 + 0x300);
              lVar14 = (longlong)iVar17 * 0xb8;
              lVar20 = (longlong)*(int *)(local_90 + 4);
              lVar16 = *(longlong *)(lVar21 + 0x78 + lVar14);
              lVar2 = *(longlong *)(lVar21 + 0x88 + lVar14);
              auVar8._8_8_ = -(ulonglong)(*(double *)(lVar16 + 0x268) != DAT_14c8464a8);
              auVar8._0_8_ = -(ulonglong)(*(double *)(lVar16 + 0x260) != DAT_14c8464a0);
              iVar17 = movmskpd((int)local_90,auVar8);
              auVar10._8_8_ = -(ulonglong)(*(double *)(lVar16 + 0x278) != DAT_14c8464b8);
              auVar10._0_8_ = -(ulonglong)(*(double *)(lVar16 + 0x270) != DAT_14c8464b0);
              uVar18 = movmskpd(param_3 * 3,auVar10);
              local_95 = true;
              if ((uVar18 & 0x3fffffff) == 0 && iVar17 == 0) {
                auVar12._8_8_ = -(ulonglong)(*(double *)(lVar16 + 0x248) != DAT_14c846488);
                auVar12._0_8_ = -(ulonglong)(*(double *)(lVar16 + 0x240) != DAT_14c846480);
                uVar18 = movmskpd(iVar17,auVar12);
                auVar13._8_8_ = -(ulonglong)(*(double *)(lVar16 + 600) != DAT_14c846498);
                auVar13._0_8_ = -(ulonglong)(*(double *)(lVar16 + 0x250) != DAT_14c846490);
                iVar17 = movmskpd(0,auVar13);
                uVar19 = iVar17 << 2 | uVar18;
                if (uVar19 != 0) {
                  auVar7._8_8_ = -(ulonglong)(*(double *)(lVar16 + 0x248) + DAT_14c846488 != 0.0);
                  auVar7._0_8_ = -(ulonglong)(*(double *)(lVar16 + 0x240) + DAT_14c846480 != 0.0);
                  uVar18 = movmskpd(uVar18,auVar7);
                  auVar6._8_8_ = -(ulonglong)(*(double *)(lVar16 + 600) + DAT_14c846498 != 0.0);
                  auVar6._0_8_ = -(ulonglong)(*(double *)(lVar16 + 0x250) + DAT_14c846490 != 0.0);
                  uVar19 = movmskpd(uVar19,auVar6);
                  if ((uVar19 & 0x3fffffff) != 0 || uVar18 != 0) goto LAB_14327e9fa;
                }
                auVar9._8_8_ = -(ulonglong)(*(double *)(lVar16 + 0x288) != DAT_14c8464c8);
                auVar9._0_8_ = -(ulonglong)(*(double *)(lVar16 + 0x280) != DAT_14c8464c0);
                iVar17 = movmskpd((int)lVar16,auVar9);
                auVar11._8_8_ = -(ulonglong)(*(double *)(lVar16 + 0x298) != dRam000000014c8464d8);
                auVar11._0_8_ = -(ulonglong)(*(double *)(lVar16 + 0x290) != DAT_14c8464d0);
                uVar18 = movmskpd(uVar18,auVar11);
                local_95 = (uVar18 & 0x3fffffff) != 0 || iVar17 != 0;
              }
LAB_14327e9fa:
              uVar18 = *(uint *)(lVar2 + 4 + lVar20 * 8);
              if ((int)*(uint *)(param_4 + 1) < (int)uVar18) {
                uVar18 = *(uint *)(param_4 + 1);
              }
              if (0 < (int)uVar18) {
                uVar19 = puVar1[6];
                lVar16 = *param_4;
                lVar21 = lVar21 + lVar14;
                uVar15 = 0;
                goto LAB_14327ea22;
              }
            }
          }
          break;
        }
        uVar18 = puVar1[8];
      } while (uVar18 != 0xffffffff);
    }
  }
  goto LAB_14327ebd3;
LAB_14327ea22:
  do {
    iVar17 = *(int *)((longlong)*(int *)(lVar2 + lVar20 * 8) * 4 + *(longlong *)(lVar21 + 0xa8) +
                     uVar15 * 4);
    if ((char)uVar19 == '\0') {
LAB_14327eac1:
      if (iVar17 != -1) {
        plVar22 = *(longlong **)(lVar21 + 0x78);
LAB_14327eaca:
        if ((int)plVar22[0x119] != 0) {
          iVar17 = *(int *)(plVar22[0x11a] + (longlong)iVar17 * 4);
        }
        local_a0 = 0;
        local_a8 = 0;
        (**(code **)(*plVar22 + 0xb30))(plVar22,iVar17,lVar16,local_95);
      }
    }
    else {
      bVar4 = *(double *)(lVar16 + 0x40) == 0.0;
      bVar5 = *(double *)(lVar16 + 0x48) == 0.0;
      bVar3 = *(double *)(lVar16 + 0x50) != 0.0;
      if ((bVar3 || (!bVar5 || !bVar4)) || (iVar17 == -1)) {
        if (!bVar3 && (bVar5 && bVar4)) goto LAB_14327eac1;
        plVar22 = *(longlong **)(lVar21 + 0x78);
        if (iVar17 == -1) {
          local_94 = (int)plVar22[0xe5];
          local_a8 = local_95;
          FUN_141048e2e(plVar22,local_94,0,lVar16);
          iVar17 = local_94;
          if ((int)plVar22[0x119] != 0) {
            iVar17 = *(int *)(plVar22[0x118] + (longlong)local_94 * 4);
          }
          *(int *)((longlong)*(int *)(lVar2 + lVar20 * 8) * 4 + *(longlong *)(lVar21 + 0xa8) +
                  uVar15 * 4) = iVar17;
          if (*(int *)(local_90 + 0x10) != 0) {
            local_70 = *(int *)(*(longlong *)(lVar21 + 0x78) + 0x7a0);
            local_78 = (int **)((longlong)local_70 * uVar15 * 4 + *(longlong *)(local_90 + 8));
            local_88 = &local_64;
            local_80 = 1;
            local_64 = iVar17;
            FUN_1402d2f88(*(longlong *)(lVar21 + 0x78),&local_88,&local_78);
          }
          goto LAB_14327eaff;
        }
        goto LAB_14327eaca;
      }
      local_88 = (int *)CONCAT44(local_88._4_4_,iVar17);
      local_78 = &local_88;
      local_70 = 1;
      (**(code **)(**(longlong **)(lVar21 + 0x78) + 0xb08))
                (*(longlong **)(lVar21 + 0x78),&local_78,1);
      *(undefined4 *)
       ((longlong)*(int *)(lVar2 + lVar20 * 8) * 4 + *(longlong *)(lVar21 + 0xa8) + uVar15 * 4) =
           0xffffffff;
    }
LAB_14327eaff:
    uVar15 = uVar15 + 1;
    lVar16 = lVar16 + 0x60;
  } while (uVar18 != uVar15);
LAB_14327ebd3:
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14327ec03 FUN_14327ec03 body=69 status=ok
// SIG undefined FUN_14327ec03(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14327ec03(void)

{
  _DAT_14caa9b00 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014327ec45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caa9b08,1);
  return;
}



// FUNCTION 14327ec48 FUN_14327ec48 body=69 status=ok
// SIG undefined FUN_14327ec48(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14327ec48(void)

{
  _DAT_14caa9b10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014327ec8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caa9b18,1);
  return;
}



// FUNCTION 14327ec8d FUN_14327ec8d body=69 status=ok
// SIG undefined FUN_14327ec8d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14327ec8d(void)

{
  _DAT_14caa9b28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014327eccf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caa9b30,1);
  return;
}



// FUNCTION 14327ecd2 FUN_14327ecd2 body=329 status=ok
// SIG undefined FUN_14327ecd2(void)

void FUN_14327ecd2(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_1 = *param_2;
  plVar1 = (longlong *)(param_1 + 2);
  iVar2 = param_2[4];
  iVar3 = param_1[4];
  if (iVar3 < iVar2) {
    param_1[4] = iVar2;
    if ((uint)(param_1[5] - iVar3) < (uint)(iVar2 - iVar3)) {
      FUN_1474bd09c();
    }
  }
  else {
    if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4();
    }
    if (iVar2 < iVar3) {
      param_1[4] = iVar2;
      FUN_1474bd130();
    }
  }
  if (0 < (int)param_2[4]) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      *(undefined1 *)(*plVar1 + lVar4) = *(undefined1 *)(*(longlong *)(param_2 + 2) + lVar4);
      *(undefined1 *)(*plVar1 + 1 + lVar4) = *(undefined1 *)(*(longlong *)(param_2 + 2) + 1 + lVar4)
      ;
      *(undefined4 *)(*plVar1 + 4 + lVar4) = *(undefined4 *)(*(longlong *)(param_2 + 2) + 4 + lVar4)
      ;
      *(undefined4 *)(*plVar1 + 8 + lVar4) = *(undefined4 *)(*(longlong *)(param_2 + 2) + 8 + lVar4)
      ;
      *(undefined4 *)(*plVar1 + 0xc + lVar4) =
           *(undefined4 *)(*(longlong *)(param_2 + 2) + 0xc + lVar4);
      *(undefined4 *)(*plVar1 + 0x10 + lVar4) =
           *(undefined4 *)(*(longlong *)(param_2 + 2) + 0x10 + lVar4);
      *(undefined4 *)(*plVar1 + 0x1c + lVar4) =
           *(undefined4 *)(*(longlong *)(param_2 + 2) + 0x1c + lVar4);
      *(undefined4 *)(*plVar1 + 0x20 + lVar4) =
           *(undefined4 *)(*(longlong *)(param_2 + 2) + 0x20 + lVar4);
      *(undefined4 *)(*plVar1 + 0x14 + lVar4) =
           *(undefined4 *)(*(longlong *)(param_2 + 2) + 0x14 + lVar4);
      *(undefined4 *)(*plVar1 + 0x18 + lVar4) =
           *(undefined4 *)(*(longlong *)(param_2 + 2) + 0x18 + lVar4);
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x24;
    } while (lVar5 < (int)param_2[4]);
  }
  param_1[1] = (float)(int)param_2[6];
  return;
}



// FUNCTION 14327ee1c FUN_14327ee1c body=151 status=ok
// SIG undefined FUN_14327ee1c(void)

void FUN_14327ee1c(longlong param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x10) + 0x390);
  if (pcVar1 != (code *)&LAB_1427dd5fe) {
    (*pcVar1)(*(longlong **)(param_1 + 0x10),param_1,0x1427dd501,0,0);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951808) {
    FUN_144b3d300(&DAT_14c951808);
    if (DAT_14c951808 == -1) {
      FUN_145dfc00c(&DAT_14c951778);
      atexit((_func_5014 *)&LAB_142809c19);
      _Init_thread_footer(&DAT_14c951808);
      return;
    }
  }
  return;
}



// FUNCTION 14327eeb4 FUN_14327eeb4 body=174 status=ok
// SIG undefined FUN_14327eeb4(void)

float FUN_14327eeb4(longlong param_1,char *param_2,char param_3)

{
  char cVar1;
  float *pfVar2;
  longlong lVar3;
  float fVar4;
  
  cVar1 = *(char *)(param_1 + 0xf8);
  *param_2 = cVar1;
  fVar4 = *(float *)(param_1 + 0xfc);
  if (cVar1 != '\0') {
    fVar4 = fVar4 / 1e+06;
  }
  if (*(char *)(param_1 + 0xf0) == '\x01') {
    if ((param_3 == '\0') || (*(float *)(param_1 + 0xf4) <= 0.0)) {
      lVar3 = *(longlong *)(param_1 + 0xe8);
      if (lVar3 == 0) {
        if (DAT_14cb0d2b0 == 0) {
          return fVar4;
        }
        lVar3 = *(longlong *)(DAT_14cb0d2b0 + 0x898);
        if ((lVar3 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(fVar4);
        }
        else if (lVar3 == 0) {
          return fVar4;
        }
      }
      *param_2 = '\x01';
      pfVar2 = (float *)(lVar3 + 0x3c);
    }
    else {
      pfVar2 = (float *)(param_1 + 0xf4);
      *param_2 = '\x01';
    }
    return *pfVar2 / 1000.0;
  }
  return fVar4;
}



// FUNCTION 14327ef62 FUN_14327ef62 body=298 status=ok
// SIG undefined FUN_14327ef62(void)

void FUN_14327ef62(longlong *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  
  lVar3 = *param_1;
  uVar5 = (**(code **)(*(longlong *)(lVar3 + 0xf0) + 0x60))(lVar3 + 0xf0);
  if (0 < (int)uVar5) {
    uVar6 = (ulonglong)uVar5;
    lVar7 = 0;
    do {
      iVar9 = uVar5 * 0xbb38435;
      iVar8 = uVar5 * -0x4b9b4d07;
      uVar5 = uVar5 * 0x1c3c718d + 0xf50d3da5;
      uVar1 = (&DAT_14c758c60)
              [(int)(((float)(iVar8 + 0x9d6f2492U >> 9 | 0x3f800000) + -1.0) * 100.0 + 5.0) & 0xff];
      uVar2 = (&DAT_14c758c60)
              [(int)(((float)(uVar5 >> 9 | 0x3f800000) + -1.0) * 100.0 + 5.0) & 0xff];
      lVar4 = *(longlong *)(lVar3 + 0x100);
      *(undefined4 *)(lVar4 + lVar7) =
           (&DAT_14c758c60)
           [(int)(((float)(iVar9 + 0x3619636bU >> 9 | 0x3f800000) + -1.0) * 100.0 + 5.0) & 0xff];
      *(undefined4 *)(lVar4 + 4 + lVar7) = uVar1;
      *(undefined4 *)(lVar4 + 8 + lVar7) = uVar2;
      *(undefined4 *)(lVar4 + 0xc + lVar7) = 0x3f800000;
      lVar7 = lVar7 + 0x10;
    } while (uVar6 << 4 != lVar7);
  }
  return;
}



// FUNCTION 14327f08c FUN_14327f08c body=58 status=ok
// SIG undefined FUN_14327f08c(void)

undefined1 FUN_14327f08c(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x218);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else if (((*(char *)(param_1 + 0xe0) != '\x01') || (*(longlong *)(param_1 + 0x50) == 0)) ||
          (uVar3 = 1, *(char *)(*(longlong *)(param_1 + 0x50) + 1) == '\0')) {
    plVar1 = (longlong *)(lVar2 + 0x300);
    iVar4 = (**(code **)(*(longlong *)(lVar2 + 0x300) + 0x60))(plVar1);
    uVar6 = 0;
    if (0 < iVar4) {
      do {
        lVar5 = *(longlong *)(lVar2 + 800);
        if (*(longlong *)(lVar2 + 800) == 0) {
          lVar5 = lVar2 + 0x310;
        }
        if ((*(uint *)(lVar5 + (ulonglong)(uVar6 >> 5) * 4) & 1 << ((byte)uVar6 & 0x1f)) != 0) {
          return 1;
        }
        uVar6 = uVar6 + 1;
        iVar4 = (**(code **)(*plVar1 + 0x60))(plVar1);
      } while ((int)uVar6 < iVar4);
    }
    return 0;
  }
  return uVar3;
}



// FUNCTION 14327f0c6 FUN_14327f0c6 body=69 status=ok
// SIG undefined FUN_14327f0c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14327f0c6(void)

{
  _DAT_14caa9b38 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014327f108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caa9b40,1);
  return;
}



// FUNCTION 14327f10c FUN_14327f10c body=886 status=ok
// SIG undefined FUN_14327f10c(void)

void FUN_14327f10c(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_a8 [32];
  ulonglong *local_88;
  undefined4 local_80;
  wchar_t *local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar5 = *(longlong *)(param_1 + 0x28);
  local_78 = L"FBoneMapVertexBuffer";
  local_88 = (ulonglong *)CONCAT44(local_88._4_4_,*(undefined4 *)(param_1 + 0x18));
  local_80 = 0x121;
  FUN_1402b31d8(param_1,&local_68,param_2,param_1 + 0x28);
  uVar10 = local_68;
  puVar1 = (ulonglong *)(param_1 + 0x10);
  if (puVar1 == &local_68) {
LAB_14327f1e8:
    uVar10 = local_68;
    if (local_68 != 0) {
      LOCK();
      puVar2 = (uint *)(local_68 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(local_68 + 8);
        LOCK();
        uVar3 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(local_68 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = uVar10;
          plVar11 = DAT_14ca843c0;
          plVar9 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar11;
              LOCK();
              bVar12 = plVar11 != DAT_14ca843c0;
              plVar9 = plVar8;
              if (bVar12) {
                plVar11 = DAT_14ca843c0;
                plVar9 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar9;
              UNLOCK();
            } while (bVar12);
          }
          else {
            do {
              *plVar8 = (longlong)plVar9;
              LOCK();
              bVar12 = plVar9 != DAT_14ca843c8;
              plVar11 = plVar8;
              if (bVar12) {
                plVar9 = DAT_14ca843c8;
                plVar11 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar11;
              UNLOCK();
            } while (bVar12);
          }
        }
      }
    }
    uVar10 = *puVar1;
  }
  else {
    uVar6 = *puVar1;
    *puVar1 = local_68;
    local_68 = 0;
    if (uVar6 != 0) {
      LOCK();
      puVar2 = (uint *)(uVar6 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(uVar6 + 8);
        LOCK();
        uVar3 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(uVar6 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = uVar6;
          plVar11 = DAT_14ca843c0;
          plVar9 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar11;
              LOCK();
              bVar12 = plVar11 != DAT_14ca843c0;
              plVar9 = plVar8;
              if (bVar12) {
                plVar11 = DAT_14ca843c0;
                plVar9 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar9;
              UNLOCK();
            } while (bVar12);
          }
          else {
            do {
              *plVar8 = (longlong)plVar9;
              LOCK();
              bVar12 = plVar9 != DAT_14ca843c8;
              plVar11 = plVar8;
              if (bVar12) {
                plVar9 = DAT_14ca843c8;
                plVar11 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar11;
              UNLOCK();
            } while (bVar12);
          }
        }
      }
      goto LAB_14327f1e8;
    }
  }
  if (uVar10 == 0) goto LAB_14327f3dc;
  if (lVar5 == 0) {
    uVar10 = 0;
  }
  else {
    LOCK();
    *(int *)(uVar10 + 8) = *(int *)(uVar10 + 8) + 1;
    UNLOCK();
  }
  local_68._0_2_ = 0;
  uStack_60 = 0;
  uVar7 = 4;
  if ((*(byte *)(uVar10 + 0x28) & 0x10) == 0) {
    local_68._0_2_ = 0x2000;
    uVar7 = 1;
  }
  local_68 = (ulonglong)CONCAT12(uVar7,(undefined2)local_68);
  local_88 = &local_68;
  local_58 = uVar10;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_50,param_2,uVar10);
  plVar11 = (longlong *)(param_1 + 0x20);
  if (plVar11 == &local_50) {
LAB_14327f325:
    lVar5 = local_50;
    if (local_50 != 0) {
      LOCK();
      puVar2 = (uint *)(local_50 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(local_50 + 8);
        LOCK();
        uVar3 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(local_50 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = lVar5;
          plVar11 = DAT_14ca843c0;
          plVar9 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar11;
              LOCK();
              bVar12 = plVar11 != DAT_14ca843c0;
              plVar9 = plVar8;
              if (bVar12) {
                plVar11 = DAT_14ca843c0;
                plVar9 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar9;
              UNLOCK();
            } while (bVar12);
          }
          else {
            do {
              *plVar8 = (longlong)plVar9;
              LOCK();
              bVar12 = plVar9 != DAT_14ca843c8;
              plVar11 = plVar8;
              if (bVar12) {
                plVar9 = DAT_14ca843c8;
                plVar11 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar11;
              UNLOCK();
            } while (bVar12);
          }
        }
      }
    }
  }
  else {
    lVar5 = *plVar11;
    *plVar11 = local_50;
    local_50 = 0;
    if (lVar5 != 0) {
      LOCK();
      puVar2 = (uint *)(lVar5 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(lVar5 + 8);
        LOCK();
        uVar3 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(lVar5 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = lVar5;
          plVar11 = DAT_14ca843c0;
          plVar9 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar11;
              LOCK();
              bVar12 = plVar11 != DAT_14ca843c0;
              plVar9 = plVar8;
              if (bVar12) {
                plVar11 = DAT_14ca843c0;
                plVar9 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar9;
              UNLOCK();
            } while (bVar12);
          }
          else {
            do {
              *plVar8 = (longlong)plVar9;
              LOCK();
              bVar12 = plVar9 != DAT_14ca843c8;
              plVar11 = plVar8;
              if (bVar12) {
                plVar9 = DAT_14ca843c8;
                plVar11 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar11;
              UNLOCK();
            } while (bVar12);
          }
        }
      }
      goto LAB_14327f325;
    }
  }
  if (uVar10 != 0) {
    LOCK();
    puVar2 = (uint *)(uVar10 + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      puVar2 = (uint *)(uVar10 + 8);
      LOCK();
      uVar3 = *puVar2;
      *puVar2 = *puVar2 | 0x40000000;
      UNLOCK();
      if ((uVar3 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)(uVar10 + 0xd);
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = uVar10;
        plVar11 = DAT_14ca843c0;
        plVar9 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar11;
            LOCK();
            bVar12 = plVar11 != DAT_14ca843c0;
            plVar9 = plVar8;
            if (bVar12) {
              plVar11 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar12);
        }
        else {
          do {
            *plVar8 = (longlong)plVar9;
            LOCK();
            bVar12 = plVar9 != DAT_14ca843c8;
            plVar11 = plVar8;
            if (bVar12) {
              plVar9 = DAT_14ca843c8;
              plVar11 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar11;
            UNLOCK();
          } while (bVar12);
        }
      }
    }
  }
LAB_14327f3dc:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14327f483 FUN_14327f483 body=69 status=ok
// SIG undefined FUN_14327f483(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14327f483(void)

{
  _DAT_14caa9b80 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014327f4c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caa9b88,1);
  return;
}



// FUNCTION 14327f4c8 FUN_14327f4c8 body=69 status=ok
// SIG undefined FUN_14327f4c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14327f4c8(void)

{
  _DAT_14caa9b98 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014327f50a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caa9ba0,1);
  return;
}



// FUNCTION 14327f50d FUN_14327f50d body=69 status=ok
// SIG undefined FUN_14327f50d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14327f50d(void)

{
  _DAT_14caa9ba8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014327f54f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caa9bb0,1);
  return;
}



// FUNCTION 14327f558 FUN_14327f558 body=1035 status=ok
// SIG undefined FUN_14327f558(void)

void FUN_14327f558(longlong param_1,longlong param_2,undefined8 param_3,uint param_4,
                  longlong *param_5)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStack_1b8 [36];
  uint local_194;
  int local_190;
  uint local_18c;
  longlong local_188;
  longlong local_180;
  longlong local_178;
  undefined1 local_170 [256];
  undefined1 *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_180 = param_2;
  if (*(int *)(param_1 + 0x2c0) != 0) {
    iVar10 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
    if (((iVar10 != 0x40000002) && (iVar10 == 1)) && (DAT_14c86a9f8 != '\0')) {
      FUN_140ad26c0();
      GetCurrentThreadId();
    }
    iVar10 = *(int *)(local_180 + 8);
    if (0 < iVar10) {
      local_188 = param_1 + 0x3a0;
      uVar15 = 0;
      local_194 = param_4;
      local_178 = param_1;
      do {
        if ((param_4 >> (uVar15 & 0x1f) & 1) != 0) {
          local_70 = (undefined1 *)0x0;
          local_68 = 0x2000000000;
          if (0 < *(int *)(param_1 + 0x308)) {
            lVar11 = 2;
            lVar12 = 0;
            do {
              uVar6 = FUN_1474b7cde(param_1,*(undefined1 *)(*(longlong *)(param_1 + 0x300) + lVar11)
                                   );
              uVar4 = local_68;
              lVar13 = (longlong)(int)local_68;
              uVar5 = (int)local_68 + 1;
              local_68 = CONCAT44(local_68._4_4_,uVar5);
              if (local_68._4_4_ < uVar5) {
                FUN_1474bee6e(local_170,uVar4 & 0xffffffff);
              }
              puVar7 = local_70;
              if (local_70 == (undefined1 *)0x0) {
                puVar7 = local_170;
              }
              *(undefined8 *)(puVar7 + lVar13 * 8) = uVar6;
              lVar12 = lVar12 + 1;
              lVar11 = lVar11 + 0x14;
            } while (lVar12 < *(int *)(param_1 + 0x308));
            if (0 < *(int *)(param_1 + 0x308)) {
              lVar12 = 0;
              lVar11 = local_188;
              local_18c = uVar15;
              do {
                lVar13 = lVar12 * 0x14 + *(longlong *)(param_1 + 0x300);
                iVar10 = (int)param_5[1];
                iVar2 = (int)param_5[2];
                iVar3 = (iVar2 + 0x44) / 0x44;
                *(int *)(param_5 + 2) = iVar2 + 1;
                if (iVar10 < iVar3) {
                  do {
                    local_190 = iVar10;
                    lVar11 = FUN_14001cc68(0x3fc0,0x10);
                    lVar14 = 0;
                    do {
                      *(undefined8 *)(lVar11 + 0xa8 + lVar14) = 0;
                      puVar8 = (undefined8 *)(lVar11 + 0xb8 + lVar14);
                      *puVar8 = 0;
                      puVar8[1] = 0;
                      *(undefined8 *)(lVar11 + 200 + lVar14) = 0;
                      *(undefined8 *)(lVar11 + 0xd0 + lVar14) = 0xffffffff;
                      *(undefined8 *)(lVar11 + 0xd8 + lVar14) = 0xff0000ffffffff;
                      *(undefined1 *)(lVar11 + 0xe0 + lVar14) = 0;
                      *(undefined4 *)(lVar11 + 0xe4 + lVar14) = 0x40c00f07;
                      pbVar1 = (byte *)(lVar11 + 0xe8 + lVar14);
                      *pbVar1 = *pbVar1 & 0xfc;
                      *(undefined1 **)(lVar11 + 0xb0 + lVar14) = &DAT_100000001;
                      FUN_14470b9e0(lVar11 + lVar14,1);
                      lVar14 = lVar14 + 0xf0;
                    } while (lVar14 != 0x3fc0);
                    iVar10 = (int)param_5[1];
                    *(uint *)(param_5 + 1) = iVar10 + 1U;
                    if (*(uint *)((longlong)param_5 + 0xc) < iVar10 + 1U) {
                      FUN_14002baf6(param_5,iVar10);
                    }
                    *(longlong *)(*param_5 + (longlong)iVar10 * 8) = lVar11;
                    iVar10 = local_190 + 1;
                    param_1 = local_178;
                    lVar11 = local_188;
                  } while (iVar10 != iVar3);
                }
                uVar15 = local_18c;
                lVar14 = *(longlong *)(*param_5 + (longlong)(iVar2 / 0x44) * 8);
                lVar9 = (ulonglong)(uint)(iVar2 % 0x44) * 0xf0;
                uVar5 = *(uint *)(lVar14 + 0xe4 + lVar9);
                *(uint *)(lVar14 + 0xe4 + lVar9) = uVar5 & 0xffffefff;
                *(longlong *)(lVar14 + 0xb8 + lVar9) = lVar11;
                puVar7 = local_70;
                if (local_70 == (undefined1 *)0x0) {
                  puVar7 = local_170;
                }
                *(undefined8 *)(lVar14 + 0xc0 + lVar9) = *(undefined8 *)(puVar7 + lVar12 * 8);
                *(uint *)(lVar14 + 0xe4 + lVar9) =
                     (uVar5 & 0xffe02fbf) + (*(byte *)(param_1 + 0x6b) & 1) * 0x40 + 0x100000;
                puVar8 = *(undefined8 **)(lVar14 + 0xa8 + lVar9);
                if (puVar8 == (undefined8 *)0x0) {
                  puVar8 = (undefined8 *)(lVar14 + lVar9);
                }
                puVar8[3] = *(undefined8 *)(param_1 + 0x2b8);
                *puVar8 = *(undefined8 *)(param_1 + 0x250);
                *(int *)(puVar8 + 0xb) = *(int *)(lVar13 + 4) * 3;
                *(undefined4 *)((longlong)puVar8 + 0x5c) = *(undefined4 *)(lVar13 + 8);
                *(undefined4 *)(puVar8 + 0xd) = *(undefined4 *)(lVar13 + 0xc);
                *(undefined4 *)((longlong)puVar8 + 0x6c) = *(undefined4 *)(lVar13 + 0x10);
                FUN_1436a14f8(param_5,local_18c);
                lVar12 = lVar12 + 1;
              } while (lVar12 < *(int *)(param_1 + 0x308));
            }
            param_4 = local_194;
            if (local_70 != (undefined1 *)0x0) {
              FUN_1400020a8();
            }
          }
          iVar10 = *(int *)(local_180 + 8);
        }
        uVar15 = uVar15 + 1;
      } while ((int)uVar15 < iVar10);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14327f964 FUN_14327f964 body=1215 status=ok
// SIG undefined FUN_14327f964(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14327f964(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_308 [32];
  ulonglong local_2e8;
  longlong local_2e0;
  longlong local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 local_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 *local_280;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined8 local_260;
  longlong local_258;
  undefined8 local_250;
  int iStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined1 uStack_22c;
  undefined1 uStack_22b;
  undefined2 uStack_22a;
  undefined4 uStack_228;
  undefined8 local_220;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined8 *local_200;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 local_1f0;
  undefined8 uStack_1ec;
  undefined4 uStack_1e4;
  undefined8 local_1e0;
  undefined8 local_1d8;
  int local_1d0;
  undefined4 local_1cc;
  undefined1 local_1c8;
  int local_1c4;
  int local_1c0;
  undefined4 local_1bc;
  longlong local_1b8;
  longlong local_1b0;
  undefined1 local_1a8;
  undefined4 local_1a4;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158 [64];
  undefined4 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_308;
  if ((DAT_14caa9bb8 != 0) && (*(int *)(param_1 + 0x2c0) != 0)) {
    local_158[0] = *(undefined4 *)(*(longlong *)(param_1 + 0x210) + 8);
    plVar6 = (longlong *)FUN_1474bef74(*(undefined8 *)(param_2 + 0xe8),local_158);
    plVar6 = (longlong *)(**(code **)(*plVar6 + 8))(plVar6);
    lVar7 = (**(code **)(*plVar6 + 0x30))(plVar6);
    if ((*(byte *)(lVar7 + 0x29) & 4) != 0) {
      FUN_1474b7226(param_1,*(undefined8 *)(param_2 + 0x110),plVar6);
      FUN_1474b7d24(param_1,param_1 + 0x300);
      if ((*(int *)(param_1 + 0x308) != 0) && ((*(byte *)(param_1 + 0x750) & 2) != 0)) {
        local_2e0 = param_1 + 0x6b0;
        uStack_240 = 0;
        uStack_23c = 0;
        uStack_238 = 0;
        local_250 = 0;
        iStack_248 = 0;
        uStack_244 = 0;
        uStack_230 = 0xff;
        uStack_22c = 0;
        uStack_22b = 1;
        uStack_228 = 0;
        local_1e0 = 0;
        local_220 = 0;
        uStack_218 = 0;
        uStack_214 = 0;
        local_210 = 0;
        uStack_20c = 0;
        uStack_208 = 0;
        local_200 = (undefined8 *)0x0;
        uStack_1f4 = 0;
        local_1f0 = 0;
        uStack_1ec = 0;
        uStack_1f8 = 1;
        local_258 = local_2e0;
        FUN_140518214(&local_200,0);
        puVar10 = (undefined8 *)(param_1 + 0x100);
        puVar11 = local_200;
        for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
          *puVar11 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar11 = puVar11 + 1;
        }
        local_58 = (undefined4 *)0x0;
        local_50 = 0x2000000000;
        local_2e8 = 1;
        if (0 < *(int *)(param_1 + 0x308)) {
          lVar12 = 2;
          lVar7 = 0;
          do {
            lVar8 = (**(code **)(**(longlong **)
                                   (*(longlong *)(param_1 + 0x298) +
                                   (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x300) + lVar12) * 8
                                   ) + 0x2f0))();
            if (lVar8 == 0) {
              FUN_14003fbd6();
              lVar8 = (**(code **)(*DAT_14caea080 + 0x2f0))();
            }
            uVar4 = local_50;
            lVar13 = (longlong)(int)local_50;
            uVar5 = (int)local_50 + 1;
            local_50 = CONCAT44(local_50._4_4_,uVar5);
            if (local_50._4_4_ < uVar5) {
              FUN_1474bee6e(local_158,uVar4 & 0xffffffff);
            }
            puVar9 = local_58;
            if (local_58 == (undefined4 *)0x0) {
              puVar9 = local_158;
            }
            *(longlong *)(puVar9 + lVar13 * 2) = lVar8;
            lVar7 = lVar7 + 1;
            lVar12 = lVar12 + 0x14;
          } while (lVar7 < *(int *)(param_1 + 0x308));
          if (0 < *(int *)(param_1 + 0x308)) {
            lVar7 = 0;
            lVar12 = 0x10;
            uVar5 = 0;
            do {
              lVar8 = *(longlong *)(param_1 + 0x300);
              puVar10 = (undefined8 *)FUN_1474b7f2a(&local_250);
              uVar1 = *(uint *)((longlong)puVar10 + 0xe4);
              *(uint *)((longlong)puVar10 + 0xe4) = uVar1 & 0xffffefff;
              *(int *)(puVar10 + 0x1b) = (int)lVar7;
              puVar10[0x17] = plVar6;
              puVar9 = local_58;
              if (local_58 == (undefined4 *)0x0) {
                puVar9 = local_158;
              }
              puVar10[0x18] = *(undefined8 *)(puVar9 + lVar7 * 2);
              *(undefined1 *)((longlong)puVar10 + 0xde) = 0;
              *(uint *)((longlong)puVar10 + 0xe4) = uVar1 & 0xffe02f7f | 0x100080;
              puVar11 = (undefined8 *)puVar10[0x15];
              if ((undefined8 *)puVar10[0x15] == (undefined8 *)0x0) {
                puVar11 = puVar10;
              }
              puVar11[3] = *(undefined8 *)(param_1 + 0x2b8);
              *puVar11 = *(undefined8 *)(param_1 + 0x250);
              *(int *)(puVar11 + 0xb) = *(int *)(lVar8 + -0xc + lVar12) * 3;
              *(undefined4 *)((longlong)puVar11 + 0x5c) = *(undefined4 *)(lVar8 + -8 + lVar12);
              *(undefined4 *)(puVar11 + 0xd) = *(undefined4 *)(lVar8 + -4 + lVar12);
              *(undefined4 *)((longlong)puVar11 + 0x6c) = *(undefined4 *)(lVar8 + lVar12);
              *(undefined4 *)(puVar11 + 0xc) = 1;
              if (uVar5 < *(uint *)(lVar8 + lVar12)) {
                uVar5 = *(uint *)(lVar8 + lVar12);
              }
              lVar7 = lVar7 + 1;
              lVar12 = lVar12 + 0x14;
            } while (lVar7 < *(int *)(param_1 + 0x308));
            local_2e8 = (ulonglong)(uVar5 + 1);
          }
        }
        iVar3 = iStack_248;
        uVar2 = local_250;
        lVar7 = param_1 + 0x760;
        if (*(int *)(param_1 + 0x778) == 0) {
          lVar7 = 0;
        }
        local_1d8 = 0;
        local_1d0 = iStack_248;
        if (iStack_248 == 0) {
          local_1cc = 0;
        }
        else {
          FUN_147471e8a(&local_1d8,iStack_248,0);
          FUN_147471efc(local_1d8,uVar2,iVar3);
        }
        local_1c8 = 0;
        local_1c4 = (int)local_2e8;
        local_1c0 = local_1c4 * 0xc;
        local_1bc = *(undefined4 *)(param_1 + 0x700);
        local_1b8 = local_2e0;
        local_1a8 = 1;
        local_1a4 = 0;
        local_198 = _DAT_14c846250;
        uStack_190 = DAT_14c846258;
        local_188 = _DAT_14c846260;
        uStack_180 = _DAT_14c846268;
        local_178 = _DAT_14c846270;
        uStack_170 = _DAT_14c846278;
        local_168 = DAT_14c846280;
        uStack_164 = DAT_14c846284;
        uStack_160 = DAT_14c846288;
        uStack_15c = DAT_14c84628c;
        local_1b0 = lVar7;
        FUN_147ceea5a(param_2);
        local_2d8 = local_258;
        uStack_2c8 = CONCAT44(uStack_244,iStack_248);
        local_2d0 = local_250;
        local_250 = 0;
        iStack_248 = 0;
        uStack_244 = 0;
        local_2c0 = CONCAT44(uStack_23c,uStack_240);
        uStack_2ac = CONCAT22(uStack_22a,CONCAT11(uStack_22b,uStack_22c));
        _uStack_2b8 = CONCAT44(uStack_234,uStack_238);
        uStack_2b0 = uStack_230;
        uStack_2a8 = uStack_228;
        local_2a0 = (undefined4)local_220;
        uStack_29c = local_220._4_4_;
        uStack_298 = uStack_218;
        uStack_294 = uStack_214;
        local_220 = 0;
        uStack_218 = 0;
        uStack_214 = 0;
        local_290 = CONCAT44(uStack_20c,local_210);
        uStack_288 = CONCAT44(uStack_204,uStack_208);
        local_280 = local_200;
        local_200 = (undefined8 *)0x0;
        local_278 = uStack_1f8;
        local_274 = uStack_1f4;
        uStack_1f8 = 0;
        uStack_1f4 = 0;
        local_270 = local_1f0;
        uStack_26c = (undefined4)uStack_1ec;
        uStack_268 = uStack_1ec._4_4_;
        uStack_264 = uStack_1e4;
        local_260 = local_1e0;
        local_1e0 = 0;
        FUN_147cee9b0(param_2);
        if (local_58 != (undefined4 *)0x0) {
          FUN_1400020a8();
        }
        FUN_1472aaabe(&local_258);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_308) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14327fe62 FUN_14327fe62 body=230 status=ok
// SIG undefined FUN_14327fe62(void)

ulonglong * FUN_14327fe62(longlong param_1,ulonglong *param_2,longlong param_3)

{
  byte bVar1;
  ulonglong uVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  param_2[1] = 0;
  param_2[2] = 0;
  cVar3 = FUN_14480c900(0,param_3);
  uVar6 = 0x81;
  if (cVar3 != '\0') {
    uVar6 = *(uint *)(*(longlong *)(param_3 + 8) + 0x60) >> 0x14 & 4 | 0x81;
  }
  bVar4 = FUN_144914152(param_1,param_3);
  uVar7 = 0;
  uVar5 = 0;
  if ((DAT_14c761968 != 0) && (DAT_14c761ae8 - 1U < 3)) {
    uVar5 = (uint)(*(byte *)(param_1 + 0x78) >> 1 & 0x20);
  }
  cVar3 = *(char *)(param_1 + 0x82);
  uVar2 = *(ulonglong *)(param_1 + 0x308);
  *param_2 = uVar2;
  if ((((uVar2 >> 0x21 & 1) != 0) && (uVar7 = 0x10, 1 < (byte)(*(char *)(param_1 + 0x68) - 1U))) &&
     ((*(byte *)(param_1 + 0x78) & 0x10) == 0)) {
    bVar1 = *(byte *)(param_1 + 0x75);
    if (bVar1 < 0x40) {
      uVar7 = (uint)bVar1 + (uint)bVar1 & 0x10;
    }
  }
  *(uint *)(param_2 + 2) =
       uVar6 | uVar5 | (bVar4 & 0x1d) << 3 | (uint)(cVar3 != '\x01') << 0xd | uVar7;
  return param_2;
}



// FUNCTION 14327ff72 FUN_14327ff72 body=1304 status=ok
// SIG undefined FUN_14327ff72(void)

void FUN_14327ff72(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  undefined4 *puVar8;
  uint *puVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined ***pppuVar12;
  uint *puVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  uint uVar16;
  undefined1 auStack_98 [32];
  code **local_78;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar5 = *(int *)(lVar3 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar5 != 2) {
      if (iVar5 != 1) goto LAB_14327ffb0;
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      if (DVar6 == DVar7) goto LAB_14327ffb9;
      goto LAB_14328004e;
    }
  }
  else {
LAB_14327ffb0:
    if (iVar5 != 0x10) {
LAB_14328004e:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar5 = *(int *)(lVar3 + 0xc60), iVar5 == 2))
        goto LAB_14327ffb9;
        if (iVar5 == 1) {
          DVar6 = FUN_140ad26c0();
          DVar7 = GetCurrentThreadId();
          if (DVar6 == DVar7) goto LAB_14327ffb9;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar9 = (uint *)*puVar2;
        if (puVar9 != (uint *)0x0) goto LAB_1432801af;
        while( true ) {
          uVar11 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar11 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar11 | 1;
            __tlregdtor(&LAB_14328076c);
          }
          lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar8 = *(undefined4 **)(lVar3 + 0x310);
          *(undefined8 *)(lVar3 + 0x310) = 0;
          if (puVar8 == (undefined4 *)0x0) {
            puVar8 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar8 = 0xffffffff;
          *(undefined4 **)(puVar8 + 0x10) = puVar8 + 0x16;
          puVar8[0x12] = 0;
          *puVar2 = puVar8;
          FUN_140217a48(puVar2);
          puVar9 = (uint *)*puVar2;
LAB_1432801af:
          puVar15 = (undefined8 *)(*(longlong *)(puVar9 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar13 = (uint *)(puVar15 + 0x16);
          uVar11 = puVar9[0x12];
          if (puVar13 <= puVar9 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar9 + 0x10) = puVar9 + 0x4000;
            LOCK();
            uVar16 = *puVar9;
            *puVar9 = *puVar9 + uVar11 + 1;
            UNLOCK();
            if ((uVar16 ^ uVar11) != 0xffffffff) break;
            puVar9 = (uint *)*puVar2;
            *puVar9 = 0xffffffff;
            *(uint **)(puVar9 + 0x10) = puVar9 + 0x16;
            puVar9[0x12] = 0;
            *puVar2 = puVar9;
            puVar15 = (undefined8 *)((longlong)puVar9 + 0x5fU & 0xfffffffffffffff8);
            puVar13 = (uint *)(puVar15 + 0x16);
            uVar11 = 0;
            if (puVar13 <= puVar9 + 0x4000) {
              uVar11 = 1;
              goto LAB_14328022f;
            }
          }
        }
        uVar11 = uVar11 + 1;
LAB_14328022f:
        *(uint **)(puVar9 + 0x10) = puVar13;
        puVar9[0x12] = uVar11;
        iVar5 = 0;
        FUN_1447247dc(puVar15,0);
        *puVar15 = &PTR_FUN_14a417ff8;
        puVar15[0x15] = param_1;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar11 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar11 < 2) {
            uVar14 = (ulonglong)(byte)(&DAT_149e38edc)[uVar11];
            iVar5 = 0;
          }
          else {
            uVar14 = 2;
          }
        }
        else {
          iVar5 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar14 = 5;
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
        lVar3 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar3 == 0) {
          uVar4 = 1;
          if ((char)uVar14 != '\x06') {
            uVar4 = uVar14;
          }
          uVar14 = uVar4;
          uVar10 = 0;
        }
        else {
          if ((char)uVar14 == '\x06') {
            uVar14 = *(ulonglong *)(lVar3 + 0x38) >> 0x3b;
          }
          uVar10 = *(undefined8 *)(lVar3 + 0x30);
        }
        puVar15[0xf] = uVar10;
        puVar15[0x10] = uVar14 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar15 + 0x1c) = iVar5;
        if (puVar15 == (undefined8 *)0x0) {
          local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
          UNLOCK();
          local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
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
        local_48 = &PTR_LAB_14a417fa0;
        local_68[0] = FUN_143280d0a;
        local_40 = param_1;
        FUN_14005a792(&DAT_14ca9a440,L"NaniteProxyUpdateGPUScene",&DAT_14caa9c18);
        if (local_68[0] != (code *)0x0) {
          pppuVar12 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar12 = &local_48;
          }
          (*(code *)(*pppuVar12)[2])();
        }
      }
      goto LAB_1432800ed;
    }
  }
LAB_14327ffb9:
  lVar3 = *(longlong *)(param_1 + 0x218);
  if ((lVar3 != 0) && (uVar11 = *(uint *)(param_1 + 0x318), (uVar11 & 8) != 0)) {
    uVar16 = 8;
    if ((*(longlong *)(lVar3 + 0x148) != 0) && ((~*(uint *)(lVar3 + 0x158) & 0x7fffffff) != 0)) {
      FUN_1400338f4(*(longlong *)(lVar3 + 0x148) + 0x3f08,*(undefined4 *)(lVar3 + 0x15c));
      uVar11 = *(uint *)(param_1 + 0x318);
      uVar16 = 0;
    }
    *(uint *)(param_1 + 0x318) = uVar11 & 0xfffffff7 | uVar16;
  }
LAB_1432800ed:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14328048d FUN_14328048d body=144 status=ok
// SIG undefined FUN_14328048d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14328048d(void)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar4 = DAT_14caa9bf8;
  _DAT_14caa9bd0 = &PTR_LAB_14a3d46d0;
  if (DAT_14caa9bf8 != 0) {
    LOCK();
    puVar1 = (uint *)(DAT_14caa9bf8 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  return;
}



// FUNCTION 1432805d4 FUN_1432805d4 body=54 status=ok
// SIG undefined FUN_1432805d4(void)

undefined8 FUN_1432805d4(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbf8);
  return 0;
}



// FUNCTION 143280618 FUN_143280618 body=80 status=ok
// SIG undefined FUN_143280618(void)

void FUN_143280618(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 143280676 FUN_143280676 body=245 status=ok
// SIG undefined FUN_143280676(void)

longlong * FUN_143280676(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = FUN_145e38e46();
  local_48 = param_3;
  local_40 = param_4;
  (**(code **)(*DAT_14ca83900 + 0x138))
            (DAT_14ca83900,&local_30,param_2,*(undefined8 *)(lVar4 + 0x48));
  *param_1 = local_30;
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
    if (local_30 != 0) {
      LOCK();
      puVar1 = (uint *)(local_30 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_30 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_30 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = local_30;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar8 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar8) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar8);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar8 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar8) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar8);
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1432807ae FUN_1432807ae body=983 status=ok
// SIG undefined FUN_1432807ae(void)

void FUN_1432807ae(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined8 *local_b0;
  longlong local_a0;
  undefined1 local_98;
  undefined1 uStack_97;
  undefined1 uStack_96;
  undefined1 uStack_95;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  uint local_64;
  undefined1 local_60;
  undefined4 local_5c;
  wchar_t *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 1;
  local_74 = 0;
  uStack_6c = 0;
  local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_60 = 0;
  local_5c = 0;
  local_58 = L"FGeometryCollectionTransformBuffer";
  local_50 = 0;
  uStack_48 = 0;
  iVar5 = *(int *)(param_1 + 0x18) << 6;
  local_98 = (undefined1)iVar5;
  uStack_97 = (undefined1)((uint)iVar5 >> 8);
  uStack_96 = (undefined1)((uint)iVar5 >> 0x10);
  uStack_95 = (undefined1)((uint)iVar5 >> 0x18);
  uStack_94 = 0;
  uStack_90 = 0x4102;
  if (iVar5 == 0) {
    FUN_14570b4be(param_2,&local_88,0x4102,0);
  }
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_b0 = &local_88;
    local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,0x78);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x78;
    FUN_14002049c(param_2,0);
  }
  else {
    local_b0 = &local_88;
    local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,0x78);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x78;
  }
  lVar10 = local_a0;
  plVar9 = (longlong *)(param_1 + 0x10);
  if (plVar9 == &local_a0) {
LAB_143280952:
    lVar10 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_a0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_a0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_a0 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar10;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar11 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar11) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
    lVar10 = *plVar9;
  }
  else {
    lVar4 = *plVar9;
    *plVar9 = local_a0;
    local_a0 = 0;
    if (lVar4 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar4 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar4 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar4;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar11 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar11) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
      goto LAB_143280952;
    }
  }
  if ((lVar10 == 0) || ((*(byte *)(lVar10 + 0x28) & 0x10) == 0)) {
    uStack_97 = 1;
    uStack_96 = 1;
  }
  else {
    uStack_97 = 0;
    uStack_96 = 4;
  }
  uStack_8c = 0;
  uStack_90 = 0;
  uStack_94 = 0;
  uStack_95 = 0;
  local_98 = 0;
  local_b8 = &local_98;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_a0,param_2);
  plVar9 = (longlong *)(param_1 + 0x20);
  if (plVar9 != &local_a0) {
    lVar10 = *plVar9;
    *plVar9 = local_a0;
    local_a0 = 0;
    if (lVar10 == 0) goto LAB_143280adc;
    LOCK();
    puVar1 = (uint *)(lVar10 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar10 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar10 + 0xd);
        plVar7 = (longlong *)FUN_14001cc68(0x10,8);
        plVar7[1] = lVar10;
        plVar9 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar7 = (longlong)plVar9;
            LOCK();
            bVar11 = plVar9 != DAT_14ca843c0;
            plVar8 = plVar7;
            if (bVar11) {
              plVar9 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar8;
            UNLOCK();
          } while (bVar11);
        }
        else {
          do {
            *plVar7 = (longlong)plVar8;
            LOCK();
            bVar11 = plVar8 != DAT_14ca843c8;
            plVar9 = plVar7;
            if (bVar11) {
              plVar8 = DAT_14ca843c8;
              plVar9 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar9;
            UNLOCK();
          } while (bVar11);
        }
      }
    }
  }
  lVar10 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_a0 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_a0 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_a0 + 0xd);
        plVar7 = (longlong *)FUN_14001cc68(0x10,8);
        plVar7[1] = lVar10;
        plVar9 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar7 = (longlong)plVar9;
            LOCK();
            bVar11 = plVar9 != DAT_14ca843c0;
            plVar8 = plVar7;
            if (bVar11) {
              plVar9 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar8;
            UNLOCK();
          } while (bVar11);
        }
        else {
          do {
            *plVar7 = (longlong)plVar8;
            LOCK();
            bVar11 = plVar8 != DAT_14ca843c8;
            plVar9 = plVar7;
            if (bVar11) {
              plVar8 = DAT_14ca843c8;
              plVar9 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar9;
            UNLOCK();
          } while (bVar11);
        }
      }
    }
  }
LAB_143280adc:
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143280b86 FUN_143280b86 body=130 status=ok
// SIG undefined FUN_143280b86(void)

void FUN_143280b86(undefined8 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)*param_1;
  iVar2 = *param_2 * iVar1;
  if (*(uint *)(param_1[1] + 0x2c0) < (uint)(iVar2 + iVar1)) {
    iVar1 = *(int *)param_1[2] - iVar2;
  }
  if (iVar1 != 0) {
    FUN_142220310((ulonglong)(uint)(*(int *)param_1[5] * iVar2) + *(longlong *)param_1[4],iVar1,
                  *(int *)param_1[5],(ulonglong)(uint)(iVar2 * 2) + *(longlong *)(param_1[6] + 0x30)
                  ,*(undefined8 *)param_1[3],
                  (ulonglong)(uint)(*(int *)(param_1[7] + 0x30) * iVar2) +
                  *(longlong *)(param_1[7] + 0x28));
  }
  return;
}



// FUNCTION 143280c08 FUN_143280c08 body=258 status=ok
// SIG undefined FUN_143280c08(void)

undefined8 * FUN_143280c08(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  bool bVar8;
  
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar3 = (uint *)*puVar1;
  if (puVar3 != (uint *)0x0) goto LAB_143280c3e;
  while( true ) {
    FUN_14472e504(puVar1);
    puVar3 = (uint *)*puVar1;
LAB_143280c3e:
    puVar6 = (undefined8 *)(*(longlong *)(puVar3 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar7 = puVar3[0x12];
    if (puVar6 + 0x48 <= puVar3 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar3 + 0x10) = puVar3 + 0x4000;
      LOCK();
      uVar2 = *puVar3;
      *puVar3 = *puVar3 + uVar7 + 1;
      UNLOCK();
      if ((uVar2 ^ uVar7) != 0xffffffff) break;
      puVar3 = (uint *)*puVar1;
      *puVar3 = 0xffffffff;
      *(uint **)(puVar3 + 0x10) = puVar3 + 0x16;
      puVar3[0x12] = 0;
      *puVar1 = puVar3;
      puVar6 = (undefined8 *)((longlong)puVar3 + 0x5fU & 0xfffffffffffffff8);
      uVar7 = 0;
      if (puVar6 + 0x48 <= puVar3 + 0x4000) {
        uVar7 = 1;
        goto LAB_143280cba;
      }
    }
  }
  uVar7 = uVar7 + 1;
LAB_143280cba:
  *(undefined8 **)(puVar3 + 0x10) = puVar6 + 0x49;
  puVar3[0x12] = uVar7;
  *(int *)(puVar6 + -1) = ((int)puVar6 + -8) - (int)puVar3;
  *(undefined4 *)((longlong)puVar6 + -4) = 0x240;
  puVar6[1] = 0;
  *puVar6 = &PTR_FUN_14a417f88;
  lVar4 = *param_1;
  do {
    puVar6[1] = lVar4;
    LOCK();
    lVar5 = *param_1;
    bVar8 = lVar4 == lVar5;
    if (bVar8) {
      *param_1 = (longlong)puVar6;
      lVar5 = lVar4;
    }
    UNLOCK();
    lVar4 = lVar5;
  } while (!bVar8);
  return puVar6 + 2;
}



// FUNCTION 143280d0a FUN_143280d0a body=115 status=ok
// SIG undefined FUN_143280d0a(void)

void FUN_143280d0a(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  
  lVar1 = *param_1;
  lVar2 = *(longlong *)(lVar1 + 0x218);
  if ((lVar2 != 0) && (uVar3 = *(uint *)(lVar1 + 0x318), (uVar3 & 8) != 0)) {
    uVar4 = 8;
    if ((*(longlong *)(lVar2 + 0x148) != 0) && ((~*(uint *)(lVar2 + 0x158) & 0x7fffffff) != 0)) {
      FUN_1400338f4(*(longlong *)(lVar2 + 0x148) + 0x3f08,*(undefined4 *)(lVar2 + 0x15c));
      uVar3 = *(uint *)(lVar1 + 0x318);
      uVar4 = 0;
    }
    *(uint *)(lVar1 + 0x318) = uVar3 & 0xfffffff7 | uVar4;
  }
  return;
}



// FUNCTION 143280d88 FUN_143280d88 body=12 status=ok
// SIG undefined FUN_143280d88(void)

void FUN_143280d88(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143280d91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143280d94 FUN_143280d94 body=29 status=ok
// SIG undefined FUN_143280d94(void)

undefined8 FUN_143280d94(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143280db2 FUN_143280db2 body=282 status=ok
// SIG undefined FUN_143280db2(void)

undefined8 * FUN_143280db2(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14328076c);
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



// FUNCTION 143280ecc FUN_143280ecc body=174 status=ok
// SIG undefined FUN_143280ecc(void)

ulonglong FUN_143280ecc(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar6 = (ulonglong)DAT_14c7585c8;
  lVar2 = param_1[0x15];
  lVar3 = *(longlong *)(lVar2 + 0x218);
  if (lVar3 != 0) {
    uVar4 = *(uint *)(lVar2 + 0x318);
    uVar6 = (ulonglong)uVar4;
    if ((uVar4 & 8) != 0) {
      uVar5 = 8;
      if ((*(longlong *)(lVar3 + 0x148) != 0) && ((~*(uint *)(lVar3 + 0x158) & 0x7fffffff) != 0)) {
        FUN_1400338f4(*(longlong *)(lVar3 + 0x148) + 0x3f08,*(undefined4 *)(lVar3 + 0x15c));
        uVar4 = *(uint *)(lVar2 + 0x318);
        uVar5 = 0;
      }
      uVar5 = uVar4 & 0xfffffff7 | uVar5;
      uVar6 = (ulonglong)uVar5;
      *(uint *)(lVar2 + 0x318) = uVar5;
    }
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143280f6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (**(code **)*param_1)(param_1,1);
      return uVar6;
    }
  }
  return uVar6;
}



// FUNCTION 143280f7a FUN_143280f7a body=1625 status=ok
// SIG undefined FUN_143280f7a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143280f7a(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined **ppuStack_80;
  undefined8 local_78;
  undefined4 local_64;
  char *local_60;
  undefined4 local_58;
  undefined1 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_60 = (char *)0x800000014a40e1f0;
  local_64 = 0x18;
  local_58 = FUN_14577453c();
  local_54 = 1;
  FUN_14632e44c(&local_60);
  FUN_1400b22c2(&local_60,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_60,&DAT_14caa988c);
  if (cVar1 == '\0') {
    _DAT_14caa988c = 0;
    uRam000000014caa9894 = 0;
  }
  if (local_60 != (char *)0x0) {
    FUN_1400020a8();
  }
  ppuStack_80 = &PTR_FUN_14a410220;
  local_78 = 1;
  local_88 = 2;
  FUN_14282b410(L"/Script/GeometryCollectionEngine",&PTR_FUN_14a410290,1,&PTR_FUN_14a410240);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GeometryCollectionEngine",&PTR_FUN_14a410950,1,0);
  local_60 = "AssetRegistry";
  local_58 = 0xd;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14caa9918 = (ulonglong)uVar2;
  local_60 = "bone";
  local_58 = 4;
  local_54 = 0;
  FUN_14001a6c0(&local_60,1);
  local_60 = "BreakTimer";
  local_58 = 10;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  DAT_14caa9920 = (ulonglong)uVar2;
  local_60 = "PostBreakDuration";
  local_58 = 0x11;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  DAT_14caa9928 = (ulonglong)uVar2;
  local_60 = "BreakRemovalDuration";
  local_58 = 0x14;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  DAT_14caa9930 = (ulonglong)uVar2;
  local_60 = "SleepTimer";
  local_58 = 10;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  DAT_14caa9938 = (ulonglong)uVar2;
  local_60 = "MaxSleepTime";
  local_58 = 0xc;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  DAT_14caa9940 = (ulonglong)uVar2;
  local_60 = "SleepRemovalDuration";
  local_58 = 0x14;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  DAT_14caa9948 = (ulonglong)uVar2;
  local_60 = "LastPosition";
  local_58 = 0xc;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  DAT_14caa9950 = (ulonglong)uVar2;
  local_60 = "Decay";
  local_58 = 5;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  DAT_14caa9958 = (ulonglong)uVar2;
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GeometryCollectionEngine",&PTR_FUN_14a411190,1,0);
  local_60 = "SMInstance";
  local_58 = 10;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14caa9978 = (ulonglong)uVar2;
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GeometryCollectionEngine",&PTR_FUN_14a4118f0,1,0);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14caa9998,L"r.GC.ISMPool.ComponentKeepAlive",&DAT_14caa99a8,
                L"Keep ISM components alive when all their instances are removed.");
  atexit(FUN_14327e537);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14caa99b0,L"r.GC.ISMPool.ComponentRecycle",&DAT_14c760f6c,
                L"Recycle ISM components to a free list for reuse when all their instances are removed."
               );
  atexit(FUN_14327e57c);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14caa99c0,L"r.GC.ISMPool.ComponentFreeListTargetSize",&DAT_14c760f70,
                L"Target size for number of ISM components in the recycling free list.");
  atexit(FUN_14327e5c1);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14caa99d0,L"r.GC.ISMPool.ShadowCopyCustomData",&DAT_14caa99e0,
                L"Keeps a copy of custom instance data so it can be restored if the instance is removed and readded."
               );
  atexit(FUN_14327e606);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GeometryCollectionEngine",&PTR_FUN_14a412120,1,0);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 9;
  FUN_14282b410(L"/Script/GeometryCollectionEngine",&PTR_FUN_14a414f40,1,&PTR_FUN_14a414dd0);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14caa9b00,L"p.GeometryCollectionAssetForceStripOnCook",&DAT_14c760f74,
                L"Bypass the construction of simulation properties when all bodies are simply cached for playback."
               );
  atexit(FUN_14327ec03);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14caa9b10,L"p.GeometryCollectionEnableForcedConvexGenerationInSerialize",
                &DAT_14c760f75,
                L"Enable generation of convex geometry on older destruction files.[def:true]");
  atexit(FUN_14327ec48);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14caa9b28,L"p.GeometryCollectionAlwaysRecreateSimulationData",&DAT_14caa9b20,
                L"always recreate the simulation data even if the simulation data is not marked as dirty - this has runtime cost in editor - only use as a last resort if default has issues [def:false]"
               );
  atexit(FUN_14327ec8d);
  local_60 = (char *)((ulonglong)local_60 & 0xffffffff00000000);
  local_88 = CONCAT44(local_88._4_4_,4);
  FUN_14078dbce(&DAT_14caa9b38,L"r.GeometryCollection.GbxForceGenerateNaniteFallbackRenderData",
                &local_60,
                L"If non-zero, always generates Nanite fallback render data and strips from cook based on platform and asset settings."
               );
  atexit(FUN_14327f0c6);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GeometryCollectionEngine",&PTR_FUN_14a415e30,1,0);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GeometryCollectionEngine",&PTR_FUN_14a416390,1,0);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14caa9b80,L"r.ParallelGeometryCollectionBatchSize",&DAT_14c760f78,
                L"The number of vertices per thread dispatch in a single collection. \n");
  atexit(FUN_14327f483);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14caa9b98,L"r.GeometryCollectionTripleBufferUploads",&DAT_14c760f7c,
                L"Whether to triple buffer geometry collection uploads, which allows Lock_NoOverwrite uploads which are much faster on the GPU with large amounts of data."
               );
  atexit(FUN_14327f4c8);
  local_88 = CONCAT44(local_88._4_4_,0x20);
  FUN_141471170(&DAT_14caa9ba8,L"r.RayTracing.Geometry.GeometryCollection",&DAT_14caa9bb8,
                L"Include geometry collection proxy meshes in ray tracing effects (default = 0 (Geometry collection meshes disabled in ray tracing))"
               );
  atexit(FUN_14327f50d);
  FUN_1415be764();
  atexit((_func_5014 *)&LAB_14327f552);
  _DAT_14caa9bd8 = 0;
  _DAT_14caa9be0 = 0;
  uRam000000014caa9be8 = 0;
  _DAT_14caa9bf0 = 0;
  DAT_14caa9bf8 = 0;
  _DAT_14caa9bd0 = &PTR_FUN_14a417da8;
  atexit(FUN_14328048d);
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432815d4 FUN_1432815d4 body=69 status=ok
// SIG undefined FUN_1432815d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432815d4(void)

{
  _DAT_14caa9ca0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143281616. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caa9ca8,1);
  return;
}



// FUNCTION 143281619 FUN_143281619 body=69 status=ok
// SIG undefined FUN_143281619(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143281619(void)

{
  _DAT_14caa9cb8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014328165b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caa9cc0,1);
  return;
}



// FUNCTION 14328165e FUN_14328165e body=29 status=ok
// SIG undefined FUN_14328165e(void)

undefined8 FUN_14328165e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143281690 FUN_143281690 body=85 status=ok
// SIG undefined FUN_143281690(void)

void FUN_143281690(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a4191d0;
  return;
}



// FUNCTION 1432816e6 FUN_1432816e6 body=85 status=ok
// SIG undefined FUN_1432816e6(void)

void FUN_1432816e6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a4191d0;
  return;
}



// FUNCTION 14328173c FUN_14328173c body=118 status=ok
// SIG undefined FUN_14328173c(void)

void FUN_14328173c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e170a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a4191d0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001432817a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1432817b8 FUN_1432817b8 body=16 status=ok
// SIG undefined FUN_1432817b8(void)

undefined1 FUN_1432817b8(void)

{
  FUN_1474bf4a8();
  return 1;
}



// FUNCTION 1432817c8 FUN_1432817c8 body=29 status=ok
// SIG undefined FUN_1432817c8(void)

undefined8 FUN_1432817c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1432817fa FUN_1432817fa body=85 status=ok
// SIG undefined FUN_1432817fa(void)

void FUN_1432817fa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a419240;
  return;
}



// FUNCTION 143281850 FUN_143281850 body=85 status=ok
// SIG undefined FUN_143281850(void)

void FUN_143281850(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a419240;
  return;
}



// FUNCTION 1432818a6 FUN_1432818a6 body=118 status=ok
// SIG undefined FUN_1432818a6(void)

void FUN_1432818a6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e170a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a419240;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014328190d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14328191c FUN_14328191c body=86 status=ok
// SIG undefined FUN_14328191c(void)

void FUN_14328191c(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1474bf4a8();
  FUN_14165273a(local_70);
  FUN_1416525c2(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143281974 FUN_143281974 body=88 status=ok
// SIG undefined FUN_143281974(void)

undefined8 FUN_143281974(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1474bf4a8();
  FUN_14165273a(local_70);
  FUN_1416525c2(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432819cd FUN_1432819cd body=744 status=ok
// SIG undefined FUN_1432819cd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432819cd(void)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_3c;
  char *local_38;
  int local_30;
  undefined1 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1400b22c2(&local_38,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_38,&DAT_14caa9c70);
  if (cVar2 == '\0') {
    _DAT_14caa9c70 = 0;
    uRam000000014caa9c78 = 0;
  }
  if (local_38 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_38 = "SMInstance";
  local_30 = 10;
  local_2c = 0;
  uVar3 = FUN_14001a6c0(&local_38,1);
  _DAT_14caa9c80 = (ulonglong)uVar3;
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/GeometryCollectionEngine",&PTR_FUN_14a4190b0,1,0);
  local_38 = (char *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  local_30 = 2;
  *(undefined ***)local_38 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_38 + 0x10) = lVar4;
  *(undefined ***)local_38 = &PTR_FUN_14a4191d0;
  local_3c = 0;
  local_58 = local_58 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14caa9ca0,L"p.Chaos.GC.ISMPoolDebugStats",&local_3c,
                L"Show stats for the ISM pools");
  (**(code **)(*DAT_14caa9ca8 + 200))(DAT_14caa9ca8,&local_38);
  if (local_30 == 0) {
LAB_143281b57:
    if (local_38 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_38 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_38)(local_38,0);
    FUN_1446efa72(&local_38,0,0,0x10);
    local_30 = 0;
    goto LAB_143281b57;
  }
  atexit(FUN_1432815d4);
  local_38 = (char *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  local_30 = 2;
  *(undefined ***)local_38 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_38 + 0x10) = lVar4;
  *(undefined ***)local_38 = &PTR_FUN_14a419240;
  local_3c = 0;
  local_58 = local_58 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14caa9cb8,L"p.Chaos.GC.ISMPoolDebugDraw",&local_3c,
                L"Show debug drawing for the ISM pools");
  (**(code **)(*DAT_14caa9cc0 + 200))(DAT_14caa9cc0,&local_38);
  if (local_30 != 0) {
    if (local_38 == (char *)0x0) goto LAB_143281c50;
    (*(code *)**(undefined8 **)local_38)(local_38,0);
    FUN_1446efa72(&local_38,0,0,0x10);
    local_30 = 0;
  }
  if (local_38 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_143281c50:
  atexit(FUN_143281619);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143281cb8 FUN_143281cb8 body=55 status=ok
// SIG undefined FUN_143281cb8(void)

void FUN_143281cb8(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa9d20 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caa9d20 = FUN_14171c317(FUN_14632f394,uVar1,L"EBoneModificationMode");
  }
  return;
}



// FUNCTION 143281cef FUN_143281cef body=55 status=ok
// SIG undefined FUN_143281cef(void)

void FUN_143281cef(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa9d50 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caa9d50 = FUN_14171c317(FUN_14632f424,uVar1,L"ERefPoseType");
  }
  return;
}



// FUNCTION 143281d26 FUN_143281d26 body=55 status=ok
// SIG undefined FUN_143281d26(void)

void FUN_143281d26(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa9e60 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caa9e60 = FUN_14171c317(FUN_14632f9ab,uVar1,L"EEasingFuncType");
  }
  return;
}



// FUNCTION 143281d5d FUN_143281d5d body=55 status=ok
// SIG undefined FUN_143281d5d(void)

void FUN_143281d5d(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa9e78 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caa9e78 = FUN_14171c317(FUN_14632f9da,uVar1,L"ERotationComponent");
  }
  return;
}



// FUNCTION 143281da0 FUN_143281da0 body=140 status=ok
// SIG undefined FUN_143281da0(void)

undefined8 FUN_143281da0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  
  lVar4 = FUN_1474d8804(param_2);
  if (lVar4 != 0) {
    plVar5 = (longlong *)FUN_1478ed1c2();
    if (plVar5 != (longlong *)0x0) {
      if (*plVar5 == 0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = *(longlong **)(*plVar5 + 0x138);
      }
      lVar6 = (**(code **)(*plVar7 + 0x20))();
      uVar1 = *(uint *)(plVar5 + 3);
      iVar2 = *(int *)(lVar6 + 8);
      uVar3 = FUN_147912fac(lVar4);
      lVar4 = *plVar5;
      lVar6 = FUN_14790146c(lVar4,~uVar1 + iVar2);
      if (lVar6 != 0) {
        uVar8 = FUN_14066ab3e(lVar6,lVar4,uVar3);
        return uVar8;
      }
    }
  }
  return 0x7f7fffff;
}



// FUNCTION 143281e2c FUN_143281e2c body=140 status=ok
// SIG undefined FUN_143281e2c(void)

undefined8 FUN_143281e2c(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  
  lVar4 = FUN_1474d8804(param_2);
  if (lVar4 != 0) {
    plVar5 = (longlong *)FUN_1478ed1c2();
    if (plVar5 != (longlong *)0x0) {
      if (*plVar5 == 0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = *(longlong **)(*plVar5 + 0x138);
      }
      lVar6 = (**(code **)(*plVar7 + 0x20))();
      uVar1 = *(uint *)(plVar5 + 3);
      iVar2 = *(int *)(lVar6 + 8);
      uVar3 = FUN_147912fac(lVar4);
      lVar4 = *plVar5;
      lVar6 = FUN_14790146c(lVar4,~uVar1 + iVar2);
      if (lVar6 != 0) {
        uVar8 = FUN_1479018b4(lVar6,lVar4,uVar3);
        return uVar8;
      }
    }
  }
  return 0x3f800000;
}



// FUNCTION 143281eb8 FUN_143281eb8 body=1166 status=ok
// SIG undefined FUN_143281eb8(void)

void FUN_143281eb8(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  byte *pbVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar6 = *(byte **)(param_2 + 0x20);
  if (pbVar6 == (byte *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar2[3];
    if ((*(byte *)((longlong)plVar2 + 0x39) & 1) == 0) {
      lVar7 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar2 + 0x44) + lVar7;
      *(longlong *)(param_2 + 0x40) = lVar7;
      pcVar3 = *(code **)(*plVar2 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar2 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar2);
          if (cVar5 != '\0') {
            (**(code **)(*plVar2 + 0xa0))(plVar2,lVar7,&local_48);
            goto LAB_14328204d;
          }
        }
        puVar11 = (undefined8 *)(lVar7 + *(int *)((longlong)plVar2 + 0x44));
        if (puVar11 != &local_48) {
          if ((*(byte *)((longlong)plVar2 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar2 + 0x100))(plVar2,&local_48,puVar11,(int)plVar2[6]);
          }
          else {
            memcpy(&local_48,puVar11,
                   (longlong)(int)plVar2[6] * (longlong)*(int *)((longlong)plVar2 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = (undefined4)plVar2[6];
        local_68 = 0;
        FUN_1400746b0(plVar2,&local_48,lVar7,1);
      }
      else {
        (*pcVar3)(plVar2,&local_48,lVar7);
      }
    }
    else {
      puVar11 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar10 = (undefined8 *)*puVar11;
        puVar11 = puVar10 + 2;
      } while ((longlong *)*puVar10 != plVar2);
      *(undefined8 *)(param_2 + 0x38) = puVar10[1];
    }
LAB_14328204d:
    pbVar6 = *(byte **)(param_2 + 0x20);
    puVar11 = *(undefined8 **)(param_2 + 0x38);
  }
  else {
    uVar8 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar8,param_2,&local_48);
      goto LAB_14328204d;
    }
    if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar8,param_2,&local_48);
      goto LAB_14328204d;
    }
    if (pcVar3 != (code *)&LAB_1428293cc) {
      (*pcVar3)(uVar8,param_2,&local_48);
      goto LAB_14328204d;
    }
    local_48 = *(undefined8 *)(pbVar6 + 1);
    pbVar6 = pbVar6 + 9;
    *(byte **)(param_2 + 0x20) = pbVar6;
    puVar11 = (undefined8 *)0x0;
  }
  puVar10 = &local_48;
  if (puVar11 != (undefined8 *)0x0) {
    puVar10 = puVar11;
  }
  local_58 = 0;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar6 == (byte *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar2[3];
    if ((*(byte *)((longlong)plVar2 + 0x39) & 1) == 0) {
      lVar7 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar2 + 0x44) + lVar7;
      *(longlong *)(param_2 + 0x40) = lVar7;
      pcVar3 = *(code **)(*plVar2 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar2 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar2);
          if (cVar5 != '\0') {
            (**(code **)(*plVar2 + 0xa0))(plVar2,lVar7,&local_58);
            goto LAB_14328220f;
          }
        }
        puVar11 = (undefined8 *)(lVar7 + *(int *)((longlong)plVar2 + 0x44));
        if (puVar11 != &local_58) {
          if ((*(byte *)((longlong)plVar2 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar2 + 0x100))(plVar2,&local_58,puVar11,(int)plVar2[6]);
          }
          else {
            memcpy(&local_58,puVar11,
                   (longlong)(int)plVar2[6] * (longlong)*(int *)((longlong)plVar2 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = (undefined4)plVar2[6];
        local_68 = 0;
        FUN_1400746b0(plVar2,&local_58,lVar7,1);
      }
      else {
        (*pcVar3)(plVar2,&local_58,lVar7);
      }
    }
    else {
      puVar11 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar11;
        puVar11 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar2);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar8 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar8,param_2,&local_58);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar8,param_2,&local_58);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_58 = *(undefined8 *)(pbVar6 + 1);
      *(byte **)(param_2 + 0x20) = pbVar6 + 9;
    }
    else {
      (*pcVar3)(uVar8,param_2,&local_58);
    }
  }
LAB_14328220f:
  puVar11 = &local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar11 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar7 = FUN_1474d884c(puVar11);
  if (lVar7 != 0) {
    lVar9 = FUN_1478ed1c2(puVar10);
    if (lVar9 != 0) {
      uVar8 = *(undefined8 *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x38) + 0x10) +
               (longlong)*(int *)(lVar7 + 0x2c) * 0x78);
      goto LAB_14328223b;
    }
  }
  uVar8 = 0;
LAB_14328223b:
  *param_3 = uVar8;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_40 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_40 + 0x10))();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143282348 FUN_143282348 body=153 status=ok
// SIG undefined FUN_143282348(void)

bool FUN_143282348(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  float extraout_XMM0_Da;
  
  lVar4 = FUN_1474d8804(param_2);
  if ((lVar4 != 0) && (plVar5 = (longlong *)FUN_1478ed1c2(), plVar5 != (longlong *)0x0)) {
    if (*plVar5 == 0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = *(longlong **)(*plVar5 + 0x138);
    }
    lVar6 = (**(code **)(*plVar7 + 0x20))();
    uVar1 = *(uint *)(plVar5 + 3);
    iVar2 = *(int *)(lVar6 + 8);
    iVar3 = FUN_147912fac(lVar4);
    lVar4 = *plVar5;
    lVar6 = FUN_14790146c(lVar4,~uVar1 + iVar2);
    if (lVar6 != 0) {
      iVar2 = *(int *)(lVar6 + 0x2c);
      FUN_147901520(lVar4,*(undefined4 *)(lVar6 + 0x18),iVar3);
      return iVar2 == iVar3 && extraout_XMM0_Da < 1.0;
    }
  }
  return false;
}



// FUNCTION 1432823e2 FUN_1432823e2 body=148 status=ok
// SIG undefined FUN_1432823e2(void)

bool FUN_1432823e2(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  float extraout_XMM0_Da;
  
  lVar4 = FUN_1474d8804(param_2);
  if ((lVar4 != 0) && (plVar5 = (longlong *)FUN_1478ed1c2(), plVar5 != (longlong *)0x0)) {
    if (*plVar5 == 0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = *(longlong **)(*plVar5 + 0x138);
    }
    lVar6 = (**(code **)(*plVar7 + 0x20))();
    uVar1 = *(uint *)(plVar5 + 3);
    iVar2 = *(int *)(lVar6 + 8);
    iVar3 = FUN_147912fac(lVar4);
    lVar4 = *plVar5;
    lVar6 = FUN_14790146c(lVar4,~uVar1 + iVar2);
    if (lVar6 != 0) {
      iVar2 = *(int *)(lVar6 + 0x2c);
      FUN_147901520(lVar4,*(undefined4 *)(lVar6 + 0x18),iVar3);
      return iVar2 != iVar3 && 0.0 < extraout_XMM0_Da;
    }
  }
  return false;
}



// FUNCTION 143282476 FUN_143282476 body=5372 status=ok
// SIG undefined FUN_143282476(void)

void FUN_143282476(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  char cVar12;
  byte *pbVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  longlong *plVar21;
  undefined4 *puVar22;
  undefined1 *puVar23;
  undefined7 *_Src;
  longlong *plVar24;
  undefined1 auStack_128 [32];
  ulonglong local_108;
  undefined8 local_100;
  undefined *local_f8;
  code *local_f0;
  longlong local_e0;
  undefined1 local_d1;
  undefined7 uStack_d0;
  undefined1 uStack_c9;
  undefined1 local_c5;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  longlong *plStack_a0;
  undefined8 local_90;
  int local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined1 local_70;
  longlong local_68;
  longlong local_60;
  undefined2 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar21 = (longlong *)(param_2 + 0x38);
  local_a8 = 0;
  plStack_a0 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar13 = *(byte **)(param_2 + 0x20);
  if (pbVar13 == (byte *)0x0) {
    plVar24 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar24[3];
    if ((*(byte *)((longlong)plVar24 + 0x39) & 1) == 0) {
      lVar3 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar24 + 0x44) + lVar3;
      *(longlong *)(param_2 + 0x40) = lVar3;
      pcVar4 = *(code **)(*plVar24 + 0x120);
      if (pcVar4 == FUN_144afffdc) {
        pcVar4 = *(code **)(*plVar24 + 0x88);
        if ((pcVar4 == (code *)&LAB_1447713a0) || (cVar12 = (*pcVar4)(plVar24), cVar12 == '\0')) {
          puVar19 = (undefined8 *)(lVar3 + *(int *)((longlong)plVar24 + 0x44));
          if (puVar19 != &local_a8) {
            if ((*(byte *)((longlong)plVar24 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar24 + 0x100))(plVar24,&local_a8,puVar19,(int)plVar24[6]);
            }
            else {
              memcpy(&local_a8,puVar19,
                     (longlong)(int)plVar24[6] * (longlong)*(int *)((longlong)plVar24 + 0x34));
            }
          }
        }
        else {
          (**(code **)(*plVar24 + 0xa0))(plVar24,lVar3,&local_a8);
        }
      }
      else if (pcVar4 == FUN_14007468e) {
        local_100 = CONCAT44(local_100._4_4_,(int)plVar24[6]);
        local_108 = local_108 & 0xffffffff00000000;
        FUN_1400746b0(plVar24,&local_a8,lVar3,1);
      }
      else {
        (*pcVar4)(plVar24,&local_a8,lVar3);
      }
    }
    else {
      puVar19 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar20 = (undefined8 *)*puVar19;
        puVar19 = puVar20 + 2;
      } while ((longlong *)*puVar20 != plVar24);
      *plVar21 = puVar20[1];
    }
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar13 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar13];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar5,param_2,&local_a8);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar5,param_2,&local_a8);
    }
    else {
      if (pcVar4 == (code *)&LAB_1428293cc) {
        local_a8 = *(undefined8 *)(pbVar13 + 1);
        pbVar13 = pbVar13 + 9;
        *(byte **)(param_2 + 0x20) = pbVar13;
        puVar19 = (undefined8 *)0x0;
        goto LAB_143282636;
      }
      (*pcVar4)(uVar5,param_2,&local_a8);
    }
  }
  pbVar13 = *(byte **)(param_2 + 0x20);
  puVar19 = *(undefined8 **)(param_2 + 0x38);
LAB_143282636:
  puVar20 = &local_a8;
  if (puVar19 != (undefined8 *)0x0) {
    puVar20 = puVar19;
  }
  local_b8 = 0;
  uStack_b0 = 0;
  *plVar21 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar13 == (byte *)0x0) {
    plVar24 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar24[3];
    if ((*(byte *)((longlong)plVar24 + 0x39) & 1) == 0) {
      lVar3 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar24 + 0x44) + lVar3;
      *(longlong *)(param_2 + 0x40) = lVar3;
      pcVar4 = *(code **)(*plVar24 + 0x120);
      if (pcVar4 == FUN_144afffdc) {
        pcVar4 = *(code **)(*plVar24 + 0x88);
        if ((pcVar4 == (code *)&LAB_1447713a0) || (cVar12 = (*pcVar4)(plVar24), cVar12 == '\0')) {
          puVar19 = (undefined8 *)(lVar3 + *(int *)((longlong)plVar24 + 0x44));
          if (puVar19 != &local_b8) {
            if ((*(byte *)((longlong)plVar24 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar24 + 0x100))(plVar24,&local_b8,puVar19,(int)plVar24[6]);
            }
            else {
              memcpy(&local_b8,puVar19,
                     (longlong)(int)plVar24[6] * (longlong)*(int *)((longlong)plVar24 + 0x34));
            }
          }
        }
        else {
          (**(code **)(*plVar24 + 0xa0))(plVar24,lVar3,&local_b8);
        }
      }
      else if (pcVar4 == FUN_14007468e) {
        local_100 = CONCAT44(local_100._4_4_,(int)plVar24[6]);
        local_108 = local_108 & 0xffffffff00000000;
        FUN_1400746b0(plVar24,&local_b8,lVar3,1);
      }
      else {
        (*pcVar4)(plVar24,&local_b8,lVar3);
      }
    }
    else {
      puVar19 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar14 = (undefined8 *)*puVar19;
        puVar19 = puVar14 + 2;
      } while ((longlong *)*puVar14 != plVar24);
      *(undefined8 *)(param_2 + 0x38) = puVar14[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar13 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar13];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar5,param_2,&local_b8);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar5,param_2,&local_b8);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      local_b8 = *(undefined8 *)(pbVar13 + 1);
      *(byte **)(param_2 + 0x20) = pbVar13 + 9;
    }
    else {
      (*pcVar4)(uVar5,param_2,&local_b8);
    }
  }
  puVar19 = &local_b8;
  if ((undefined8 *)*plVar21 != (undefined8 *)0x0) {
    puVar19 = (undefined8 *)*plVar21;
  }
  uStack_c0 = 0;
  uStack_bc = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9520b0) && (FUN_144b3d300(&DAT_14c9520b0), DAT_14c9520b0 == -1)) {
    local_f8 = (undefined *)FUN_1446ddbd2();
    local_f0 = FUN_1409e12a0;
    local_100 = 0;
    local_108 = 0xa001;
    FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
    atexit(FUN_142816ef9);
    _Init_thread_footer(&DAT_14c9520b0);
  }
  pbVar13 = *(byte **)(param_2 + 0x20);
  if (pbVar13 == (byte *)0x0) {
    plVar21 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar21[3];
    if ((*(byte *)((longlong)plVar21 + 0x39) & 1) == 0) {
      lVar3 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar21 + 0x44) + lVar3;
      *(longlong *)(param_2 + 0x40) = lVar3;
      pcVar4 = *(code **)(*plVar21 + 0x120);
      if (pcVar4 == FUN_144afffdc) {
        pcVar4 = *(code **)(*plVar21 + 0x88);
        if ((pcVar4 == (code *)&LAB_1447713a0) || (cVar12 = (*pcVar4)(plVar21), cVar12 == '\0')) {
          puVar22 = (undefined4 *)(lVar3 + *(int *)((longlong)plVar21 + 0x44));
          if (puVar22 != &uStack_c0) {
            if ((*(byte *)((longlong)plVar21 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar21 + 0x100))(plVar21,&uStack_c0,puVar22,(int)plVar21[6]);
            }
            else {
              memcpy(&uStack_c0,puVar22,
                     (longlong)(int)plVar21[6] * (longlong)*(int *)((longlong)plVar21 + 0x34));
            }
          }
        }
        else {
          (**(code **)(*plVar21 + 0xa0))(plVar21,lVar3,&uStack_c0);
        }
      }
      else if (pcVar4 == FUN_14007468e) {
        local_100 = CONCAT44(local_100._4_4_,(int)plVar21[6]);
        local_108 = local_108 & 0xffffffff00000000;
        FUN_1400746b0(plVar21,&uStack_c0,lVar3,1);
      }
      else {
        (*pcVar4)(plVar21,&uStack_c0,lVar3);
      }
    }
    else {
      puVar14 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar14;
        puVar14 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar21);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar13 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar13];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar5,param_2,&uStack_c0);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar5,param_2,&uStack_c0);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      uVar5 = *(undefined8 *)(pbVar13 + 1);
      *(byte **)(param_2 + 0x20) = pbVar13 + 9;
      uStack_c0 = (undefined4)uVar5;
      uStack_bc = (undefined4)((ulonglong)uVar5 >> 0x20);
    }
    else {
      (*pcVar4)(uVar5,param_2,&uStack_c0);
    }
  }
  uStack_c4 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9523c8) && (FUN_144b3d300(&DAT_14c9523c8), DAT_14c9523c8 == -1)) {
    FUN_14475b26a();
    local_f0 = FUN_1408a629c;
    local_f8 = &DAT_14c9520b8;
    local_100 = 0;
    local_108 = 0x1008101;
    FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
    atexit(FUN_14281708e);
    _Init_thread_footer(&DAT_14c9523c8);
  }
  pbVar13 = *(byte **)(param_2 + 0x20);
  if (pbVar13 == (byte *)0x0) {
    plVar21 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar21[3];
    if ((*(byte *)((longlong)plVar21 + 0x39) & 1) == 0) {
      lVar3 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar21 + 0x44) + lVar3;
      *(longlong *)(param_2 + 0x40) = lVar3;
      pcVar4 = *(code **)(*plVar21 + 0x120);
      if (pcVar4 == FUN_144afffdc) {
        pcVar4 = *(code **)(*plVar21 + 0x88);
        if ((pcVar4 == (code *)&LAB_1447713a0) || (cVar12 = (*pcVar4)(plVar21), cVar12 == '\0')) {
          puVar22 = (undefined4 *)(lVar3 + *(int *)((longlong)plVar21 + 0x44));
          if (puVar22 != &uStack_c4) {
            if ((*(byte *)((longlong)plVar21 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar21 + 0x100))(plVar21,&uStack_c4,puVar22,(int)plVar21[6]);
            }
            else {
              memcpy(&uStack_c4,puVar22,
                     (longlong)(int)plVar21[6] * (longlong)*(int *)((longlong)plVar21 + 0x34));
            }
          }
        }
        else {
          (**(code **)(*plVar21 + 0xa0))(plVar21,lVar3,&uStack_c4);
        }
      }
      else if (pcVar4 == FUN_14007468e) {
        local_100 = CONCAT44(local_100._4_4_,(int)plVar21[6]);
        local_108 = local_108 & 0xffffffff00000000;
        FUN_1400746b0(plVar21,&uStack_c4,lVar3,1);
      }
      else {
        (*pcVar4)(plVar21,&uStack_c4,lVar3);
      }
    }
    else {
      puVar14 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar14;
        puVar14 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar21);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar13 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar13];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar5,param_2,&uStack_c4);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar5,param_2,&uStack_c4);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      uVar5 = *(undefined8 *)(pbVar13 + 1);
      *(byte **)(param_2 + 0x20) = pbVar13 + 9;
      uStack_c4 = (undefined4)uVar5;
      uStack_c0 = (undefined4)((ulonglong)uVar5 >> 0x20);
    }
    else {
      (*pcVar4)(uVar5,param_2,&uStack_c4);
    }
  }
  local_c5 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951d78) && (FUN_144b3d300(&DAT_14c951d78), DAT_14c951d78 == -1)) {
    FUN_14475b26a();
    local_f0 = FUN_1409f1a5c;
    local_f8 = &DAT_14c9520b8;
    local_100 = 0;
    local_108 = 0x1008041;
    FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0);
    atexit(FUN_14281201f);
    _Init_thread_footer(&DAT_14c951d78);
  }
  pbVar13 = *(byte **)(param_2 + 0x20);
  if (pbVar13 == (byte *)0x0) {
    plVar21 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar21[3];
    if ((*(byte *)((longlong)plVar21 + 0x39) & 1) == 0) {
      lVar3 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar21 + 0x44) + lVar3;
      *(longlong *)(param_2 + 0x40) = lVar3;
      pcVar4 = *(code **)(*plVar21 + 0x120);
      if (pcVar4 == FUN_144afffdc) {
        pcVar4 = *(code **)(*plVar21 + 0x88);
        if ((pcVar4 == (code *)&LAB_1447713a0) || (cVar12 = (*pcVar4)(plVar21), cVar12 == '\0')) {
          puVar23 = (undefined1 *)(lVar3 + *(int *)((longlong)plVar21 + 0x44));
          if (puVar23 != &local_c5) {
            if ((*(byte *)((longlong)plVar21 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar21 + 0x100))(plVar21,&local_c5,puVar23,(int)plVar21[6]);
            }
            else {
              memcpy(&local_c5,puVar23,
                     (longlong)(int)plVar21[6] * (longlong)*(int *)((longlong)plVar21 + 0x34));
            }
          }
        }
        else {
          (**(code **)(*plVar21 + 0xa0))(plVar21,lVar3,&local_c5);
        }
      }
      else if (pcVar4 == FUN_14007468e) {
        local_100 = CONCAT44(local_100._4_4_,(int)plVar21[6]);
        local_108 = local_108 & 0xffffffff00000000;
        FUN_1400746b0(plVar21,&local_c5,lVar3,1);
      }
      else {
        (*pcVar4)(plVar21,&local_c5,lVar3);
      }
    }
    else {
      puVar14 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar14;
        puVar14 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar21);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar13 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar13];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar5,param_2,&local_c5);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar5,param_2,&local_c5);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      uVar5 = *(undefined8 *)(pbVar13 + 1);
      *(byte **)(param_2 + 0x20) = pbVar13 + 9;
      local_c5 = (undefined1)uVar5;
      uStack_c4 = (undefined4)((ulonglong)uVar5 >> 8);
      uStack_c0._0_3_ = (undefined3)((ulonglong)uVar5 >> 0x28);
    }
    else {
      (*pcVar4)(uVar5,param_2,&local_c5);
    }
  }
  uStack_d0 = 0;
  uStack_c9 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951cc8) && (FUN_144b3d300(&DAT_14c951cc8), DAT_14c951cc8 == -1)) {
    local_f8 = (undefined *)FUN_1446ddbd2();
    local_f0 = FUN_1468d96f0;
    local_100 = 0;
    local_108 = 0x4008001;
    FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
    atexit(FUN_14281144d);
    _Init_thread_footer(&DAT_14c951cc8);
  }
  pbVar13 = *(byte **)(param_2 + 0x20);
  if (pbVar13 == (byte *)0x0) {
    plVar21 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar21[3];
    if ((*(byte *)((longlong)plVar21 + 0x39) & 1) == 0) {
      lVar3 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar21 + 0x44) + lVar3;
      *(longlong *)(param_2 + 0x40) = lVar3;
      pcVar4 = *(code **)(*plVar21 + 0x120);
      if (pcVar4 == FUN_144afffdc) {
        pcVar4 = *(code **)(*plVar21 + 0x88);
        if ((pcVar4 == (code *)&LAB_1447713a0) || (cVar12 = (*pcVar4)(plVar21), cVar12 == '\0')) {
          _Src = (undefined7 *)(lVar3 + *(int *)((longlong)plVar21 + 0x44));
          if (_Src != &uStack_d0) {
            if ((*(byte *)((longlong)plVar21 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar21 + 0x100))(plVar21,&uStack_d0,_Src,(int)plVar21[6]);
            }
            else {
              memcpy(&uStack_d0,_Src,
                     (longlong)(int)plVar21[6] * (longlong)*(int *)((longlong)plVar21 + 0x34));
            }
          }
        }
        else {
          (**(code **)(*plVar21 + 0xa0))(plVar21,lVar3,&uStack_d0);
        }
      }
      else if (pcVar4 == FUN_14007468e) {
        local_100 = CONCAT44(local_100._4_4_,(int)plVar21[6]);
        local_108 = local_108 & 0xffffffff00000000;
        FUN_1400746b0(plVar21,&uStack_d0,lVar3,1);
      }
      else {
        (*pcVar4)(plVar21,&uStack_d0,lVar3);
      }
    }
    else {
      puVar14 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar14;
        puVar14 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar21);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar13 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar13];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar5,param_2,&uStack_d0);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar5,param_2,&uStack_d0);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      uVar5 = *(undefined8 *)(pbVar13 + 1);
      *(byte **)(param_2 + 0x20) = pbVar13 + 9;
      uStack_d0 = (undefined7)uVar5;
      uStack_c9 = (undefined1)((ulonglong)uVar5 >> 0x38);
    }
    else {
      (*pcVar4)(uVar5,param_2,&uStack_d0);
    }
  }
  local_d1 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9496d8) && (FUN_144b3d300(&DAT_14c9496d8), DAT_14c9496d8 == -1)) {
    local_f8 = (undefined *)FUN_1446ddbd2();
    local_f0 = FUN_140a4831c;
    local_108 = 0x1000000008001;
    local_100 = 0;
    FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
    atexit(FUN_1427e14fe);
    _Init_thread_footer(&DAT_14c9496d8);
  }
  pbVar13 = *(byte **)(param_2 + 0x20);
  if (pbVar13 == (byte *)0x0) {
    plVar21 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar21[3];
    if ((*(byte *)((longlong)plVar21 + 0x39) & 1) == 0) {
      lVar3 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar21 + 0x44) + lVar3;
      *(longlong *)(param_2 + 0x40) = lVar3;
      pcVar4 = *(code **)(*plVar21 + 0x120);
      if (pcVar4 == FUN_144afffdc) {
        pcVar4 = *(code **)(*plVar21 + 0x88);
        if ((pcVar4 == (code *)&LAB_1447713a0) || (cVar12 = (*pcVar4)(plVar21), cVar12 == '\0')) {
          puVar23 = (undefined1 *)(lVar3 + *(int *)((longlong)plVar21 + 0x44));
          if (puVar23 != &local_d1) {
            if ((*(byte *)((longlong)plVar21 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar21 + 0x100))(plVar21,&local_d1,puVar23,(int)plVar21[6]);
            }
            else {
              memcpy(&local_d1,puVar23,
                     (longlong)(int)plVar21[6] * (longlong)*(int *)((longlong)plVar21 + 0x34));
            }
          }
        }
        else {
          (**(code **)(*plVar21 + 0xa0))(plVar21,lVar3,&local_d1);
        }
      }
      else if (pcVar4 == FUN_14007468e) {
        local_100 = CONCAT44(local_100._4_4_,(int)plVar21[6]);
        local_108 = local_108 & 0xffffffff00000000;
        FUN_1400746b0(plVar21,&local_d1,lVar3,1);
      }
      else {
        (*pcVar4)(plVar21,&local_d1,lVar3);
      }
    }
    else {
      puVar14 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar14;
        puVar14 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar21);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar13 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar13];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar5,param_2,&local_d1);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar5,param_2,&local_d1);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      uVar5 = *(undefined8 *)(pbVar13 + 1);
      *(byte **)(param_2 + 0x20) = pbVar13 + 9;
      local_d1 = (undefined1)uVar5;
      uStack_d0 = (undefined7)((ulonglong)uVar5 >> 8);
    }
    else {
      (*pcVar4)(uVar5,param_2,&local_d1);
    }
  }
  local_e0 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951cc8) && (FUN_144b3d300(&DAT_14c951cc8), DAT_14c951cc8 == -1)) {
    local_f8 = (undefined *)FUN_1446ddbd2();
    local_f0 = FUN_1468d96f0;
    local_100 = 0;
    local_108 = 0x4008001;
    FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
    atexit(FUN_14281144d);
    _Init_thread_footer(&DAT_14c951cc8);
  }
  pbVar13 = *(byte **)(param_2 + 0x20);
  if (pbVar13 == (byte *)0x0) {
    plVar21 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar21[3];
    if ((*(byte *)((longlong)plVar21 + 0x39) & 1) == 0) {
      lVar3 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar21 + 0x44) + lVar3;
      *(longlong *)(param_2 + 0x40) = lVar3;
      pcVar4 = *(code **)(*plVar21 + 0x120);
      if (pcVar4 == FUN_144afffdc) {
        pcVar4 = *(code **)(*plVar21 + 0x88);
        if ((pcVar4 == (code *)&LAB_1447713a0) || (cVar12 = (*pcVar4)(plVar21), cVar12 == '\0')) {
          plVar24 = (longlong *)(lVar3 + *(int *)((longlong)plVar21 + 0x44));
          if (plVar24 != &local_e0) {
            if ((*(byte *)((longlong)plVar21 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar21 + 0x100))(plVar21,&local_e0,plVar24,(int)plVar21[6]);
            }
            else {
              memcpy(&local_e0,plVar24,
                     (longlong)(int)plVar21[6] * (longlong)*(int *)((longlong)plVar21 + 0x34));
            }
          }
        }
        else {
          (**(code **)(*plVar21 + 0xa0))(plVar21,lVar3,&local_e0);
        }
      }
      else if (pcVar4 == FUN_14007468e) {
        local_100 = CONCAT44(local_100._4_4_,(int)plVar21[6]);
        local_108 = local_108 & 0xffffffff00000000;
        FUN_1400746b0(plVar21,&local_e0,lVar3,1);
      }
      else {
        (*pcVar4)(plVar21,&local_e0,lVar3);
      }
    }
    else {
      puVar14 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar14;
        puVar14 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar21);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar13 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar13];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar5,param_2,&local_e0);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar5,param_2,&local_e0);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      local_e0 = *(longlong *)(pbVar13 + 1);
      *(byte **)(param_2 + 0x20) = pbVar13 + 9;
    }
    else {
      (*pcVar4)(uVar5,param_2,&local_e0);
    }
  }
  uVar11 = uStack_c4;
  uVar10 = local_c5;
  uVar9 = local_d1;
  lVar8 = local_e0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar3 = CONCAT17(uStack_c9,uStack_d0);
  lVar7 = CONCAT44(uStack_bc,uStack_c0);
  lVar15 = FUN_1474d884c(puVar19);
  if ((lVar15 != 0) && (lVar16 = FUN_1478ed1c2(puVar20), lVar16 != 0)) {
    lVar18 = (longlong)*(int *)(*(longlong *)(lVar15 + 0x38) + 0x18);
    if (0 < lVar18) {
      iVar2 = *(int *)(lVar15 + 0x2c);
      plVar21 = *(longlong **)(*(longlong *)(lVar15 + 0x38) + 0x10);
      lVar17 = 0;
      do {
        if (*plVar21 == lVar7) {
          if (iVar2 != -1) {
            local_90 = 0;
            local_7c = 0xffffffffffffffff;
            local_74 = 0xffffffff;
            local_58 = 0;
            local_84 = (undefined4)lVar17;
            local_80 = uVar11;
            local_70 = uVar9;
            local_88 = iVar2;
            if (lVar8 != 0 && DAT_14c950c29 == 1) {
              FUN_1456cec3c(lVar8);
            }
            local_68 = lVar8;
            if ((lVar3 != 0) && ((DAT_14c950c29 & 1) != 0)) {
              FUN_1456cec3c(lVar3);
            }
            local_58 = CONCAT11(local_58._1_1_,uVar10);
            local_60 = lVar3;
            FUN_1408b824a(lVar15,lVar16,&local_90,0);
          }
          break;
        }
        lVar17 = lVar17 + 1;
        plVar21 = plVar21 + 0xf;
      } while (lVar18 != lVar17);
    }
  }
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_a0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_a0 + 0x10))();
    }
  }
  if ((local_50 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143283973 FUN_143283973 body=69 status=ok
// SIG undefined FUN_143283973(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143283973(void)

{
  _DAT_14caaa010 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432839b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caaa018,1);
  return;
}



// FUNCTION 1432839b8 FUN_1432839b8 body=69 status=ok
// SIG undefined FUN_1432839b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432839b8(void)

{
  _DAT_14caaa040 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432839fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caaa048,1);
  return;
}



// FUNCTION 1432839fd FUN_1432839fd body=69 status=ok
// SIG undefined FUN_1432839fd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432839fd(void)

{
  _DAT_14caaa058 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143283a3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caaa060,1);
  return;
}



// FUNCTION 143283a44 FUN_143283a44 body=459 status=ok
// SIG undefined FUN_143283a44(void)

void FUN_143283a44(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  byte bVar3;
  float fVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  float local_38;
  undefined8 uStack_34;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = FUN_14477dc2a();
  FUN_14477dadc(uVar1,param_2);
  fVar4 = *(float *)(param_1 + 0x58) * *(float *)(param_1 + 0x60) + *(float *)(param_1 + 100);
  if (1.0 <= fVar4) {
    fVar4 = 1.0;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  *(float *)(param_1 + 0x5c) = fVar4;
  if (*(char *)(param_1 + 0x6a) == '\x01') {
    if (1.0 <= fVar4) {
      fVar4 = 1.0;
    }
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    fVar4 = 1.0 - fVar4;
    *(float *)(param_1 + 0x5c) = fVar4;
  }
  if (fVar4 <= 1e-05) {
    bVar3 = false;
  }
  else {
    bVar3 = 0 < *(int *)(param_1 + 0x50);
  }
  *(byte *)(param_1 + 0x69) = bVar3;
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 != (longlong *)0x0) {
    uStack_44 = *(undefined4 *)(param_1 + 0x20);
    local_58 = *param_2;
    uStack_54 = param_2[1];
    uStack_50 = param_2[2];
    uStack_4c = param_2[3];
    local_48 = param_2[4];
    uStack_40 = param_2[5];
    uStack_3c = param_2[7];
    local_38 = (float)param_2[8];
    uStack_34 = *(undefined8 *)(param_2 + 9);
    uStack_2c = param_2[0xb];
    if ((plVar2[1] != 0) && ((*(byte *)(plVar2[1] + 0x24) & 7) != 0)) {
      FUN_144b1fcbe(&local_58,plVar2);
      FUN_144b1fd46(&local_58,*(undefined8 *)(param_1 + 0x18));
      FUN_144b1fe18(&local_58,*(undefined8 *)(param_1 + 0x18));
      plVar2 = *(longlong **)(param_1 + 0x18);
    }
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_58);
    bVar3 = *(byte *)(param_1 + 0x69);
  }
  if (((bVar3 & 1) != 0) && (plVar2 = *(longlong **)(param_1 + 0x28), plVar2 != (longlong *)0x0)) {
    local_38 = *(float *)(param_1 + 0x5c) * (float)param_2[8];
    uStack_44 = *(undefined4 *)(param_1 + 0x30);
    local_58 = *param_2;
    uStack_54 = param_2[1];
    uStack_50 = param_2[2];
    uStack_4c = param_2[3];
    local_48 = param_2[4];
    uStack_40 = param_2[5];
    uStack_3c = param_2[7];
    uStack_34 = *(undefined8 *)(param_2 + 9);
    uStack_2c = param_2[0xb];
    if ((plVar2[1] != 0) && ((*(byte *)(plVar2[1] + 0x24) & 7) != 0)) {
      FUN_144b1fcbe(&local_58,plVar2);
      FUN_144b1fd46(&local_58,*(undefined8 *)(param_1 + 0x28));
      FUN_144b1fe18(&local_58,*(undefined8 *)(param_1 + 0x28));
      plVar2 = *(longlong **)(param_1 + 0x28);
    }
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_58);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143283c10 FUN_143283c10 body=55 status=ok
// SIG undefined FUN_143283c10(void)

void FUN_143283c10(void)

{
  undefined8 uVar1;
  
  if (DAT_14caaa0c0 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caaa0c0 = FUN_14171c317(FUN_1463305b4,uVar1,L"EBlendListTransitionType");
  }
  return;
}



// FUNCTION 143283c48 FUN_143283c48 body=2613 status=ok
// SIG undefined FUN_143283c48(void)

void FUN_143283c48(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  int *piVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_698 [32];
  int **local_678;
  int **local_670;
  int **local_668;
  int **local_660;
  undefined8 *local_658;
  longlong local_650;
  longlong local_648;
  undefined1 *local_640;
  undefined4 local_638;
  undefined1 *local_630;
  undefined4 local_628;
  undefined1 *local_620;
  undefined4 local_618;
  undefined1 *local_610;
  undefined4 local_608;
  int *local_600;
  int local_5f8;
  undefined1 *local_5f0;
  undefined4 local_5e8;
  undefined1 *local_5e0;
  undefined4 local_5d8;
  undefined1 *local_5d0;
  undefined4 local_5c8;
  int *local_5c0;
  undefined4 local_5b8;
  int *local_5b0;
  undefined4 local_5a8;
  undefined1 *local_5a0;
  undefined4 local_598;
  undefined1 *local_590;
  undefined4 local_588;
  undefined1 *local_580;
  undefined4 local_578;
  int *local_570;
  undefined4 local_568;
  int *local_560;
  undefined4 local_558;
  int *local_550;
  undefined8 *local_548;
  undefined8 local_540;
  undefined4 uStack_538;
  undefined8 local_530;
  undefined8 uStack_528;
  undefined8 local_520;
  undefined1 uStack_518;
  undefined7 uStack_517;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined1 uStack_508;
  undefined8 local_500;
  longlong lStack_4f8;
  ulonglong local_4f0;
  longlong lStack_4e8;
  ulonglong local_4e0;
  longlong lStack_4d8;
  ulonglong local_4d0;
  longlong lStack_4c8;
  undefined8 local_4c0;
  char local_4b8;
  undefined1 local_4b0 [512];
  undefined1 *local_2b0;
  undefined8 local_2a8;
  undefined1 local_2a0 [256];
  undefined1 *local_1a0;
  undefined8 local_198;
  undefined1 local_190 [192];
  undefined1 *local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [32];
  undefined1 *local_a0;
  undefined8 local_98;
  int local_90 [8];
  int *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_698;
  local_70 = (int *)0x0;
  local_68 = 0x800000000;
  local_a0 = (undefined1 *)0x0;
  local_98 = 0x800000000;
  iVar2 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar2 < 1) {
LAB_143283e1a:
    if (*(char *)(param_2 + 0x13) == '\x01') {
      uVar3 = *(undefined4 *)(param_2 + 5);
      uVar10 = param_2[4];
LAB_143283e2c:
      FUN_142400d60(uVar10,uVar3);
      goto LAB_1432844f8;
    }
    uVar10 = param_2[6];
  }
  else {
    lVar16 = 0x30;
    lVar14 = 0;
    local_658 = param_2;
    do {
      uVar5 = local_98;
      lVar13 = *(longlong *)(param_1 + 0x28);
      lVar12 = (longlong)(int)local_98;
      uVar6 = (int)local_98 + 1;
      local_98 = CONCAT44(local_98._4_4_,uVar6);
      if (local_98._4_4_ < uVar6) {
        FUN_140e79564(local_c0,uVar5 & 0xffffffff);
      }
      puVar8 = local_a0;
      if (local_a0 == (undefined1 *)0x0) {
        puVar8 = local_c0;
      }
      fVar1 = *(float *)(lVar13 + lVar16);
      *(float *)(puVar8 + lVar12 * 4) = fVar1;
      uVar5 = local_68;
      if (1e-05 < fVar1) {
        lVar13 = (longlong)(int)local_68;
        uVar6 = (int)local_68 + 1;
        local_68 = CONCAT44(local_68._4_4_,uVar6);
        if (local_68._4_4_ < uVar6) {
          FUN_1400cc390(local_90,uVar5 & 0xffffffff);
        }
        piVar7 = local_70;
        if (local_70 == (int *)0x0) {
          piVar7 = local_90;
        }
        piVar7[lVar13] = (int)lVar14;
      }
      uVar5 = local_68;
      puVar11 = local_658;
      lVar14 = lVar14 + 1;
      lVar16 = lVar16 + 0x40;
    } while (iVar2 != lVar14);
    iVar2 = (int)local_68;
    param_2 = local_658;
    if (((int)local_68 < 1) || (*(int *)(param_1 + 0x20) != (int)local_98)) goto LAB_143283e1a;
    lVar14 = FUN_144a40dda(param_1);
    if (iVar2 != 1) {
LAB_143283e4b:
      local_d0 = (undefined1 *)0x0;
      local_c8 = 0x800000000;
      local_1a0 = (undefined1 *)0x0;
      local_198 = 0x800000000;
      local_2b0 = (undefined1 *)0x0;
      local_2a8 = 0x800000000;
      FUN_140b37432(local_190,uVar5 & 0xffffffff);
      FUN_140b37286(local_2a0,uVar5 & 0xffffffff);
      FUN_140b3735c(local_4b0,uVar5 & 0xffffffff);
      if (0 < (int)local_68) {
        lVar13 = 0;
        lVar15 = 0;
        lVar16 = 0;
        lVar12 = 0;
        local_648 = lVar14;
        do {
          puVar11 = local_658;
          piVar7 = local_70;
          if (local_70 == (int *)0x0) {
            piVar7 = local_90;
          }
          iVar2 = piVar7[lVar12];
          local_550 = (int *)*local_658;
          local_548 = (undefined8 *)0x0;
          local_540._0_4_ = CONCAT31(local_540._1_3_,1);
          local_540._4_4_ = 0xffffffff;
          uStack_538 = 0xffffffff;
          uStack_510 = 0;
          uStack_50c = 0;
          uStack_508 = 0;
          local_520 = 0;
          uStack_518 = 0;
          uStack_517 = 0;
          local_530 = 0;
          uStack_528 = 0;
          local_4c0 = 0;
          local_4d0 = 0;
          lStack_4c8 = 0;
          local_4e0 = 0;
          lStack_4d8 = 0;
          local_4f0 = 0;
          lStack_4e8 = 0;
          local_500 = 0;
          lStack_4f8 = 0;
          local_4b8 = *(char *)(local_658 + 0x13);
          local_650 = lVar16;
          FUN_1447ce2ce(&local_550);
          local_540._4_4_ = *(undefined4 *)((longlong)puVar11 + 0x14);
          uStack_538 = *(undefined4 *)(puVar11 + 3);
          if (*(longlong *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar2 * 0x10) == 0) {
            if (local_4b8 == '\x01') {
              FUN_142400d60(local_530,uStack_528 & 0xffffffff);
            }
            else {
              FUN_1448859f0(&local_530,local_520);
            }
          }
          else {
            puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar2 * 0x10);
            plVar4 = (longlong *)*puVar11;
            uStack_538 = local_540._4_4_;
            local_540._4_4_ = *(undefined4 *)(puVar11 + 1);
            (**(code **)(*plVar4 + 0x28))(plVar4,&local_550);
          }
          lVar16 = local_650;
          puVar8 = local_d0;
          if (local_d0 == (undefined1 *)0x0) {
            puVar8 = local_190;
          }
          if ((undefined8 *)(puVar8 + lVar13) != &local_530) {
            *(undefined8 *)(puVar8 + lVar13) = local_530;
            local_530 = 0;
            *(undefined4 *)(puVar8 + lVar13 + 8) = (undefined4)uStack_528;
            *(undefined4 *)(puVar8 + lVar13 + 0xc) = uStack_528._4_4_;
            uStack_528 = 0;
            *(undefined8 *)(puVar8 + lVar13 + 0x10) = local_520;
            local_520 = 0;
          }
          puVar8 = local_1a0;
          if (local_1a0 == (undefined1 *)0x0) {
            puVar8 = local_2a0;
          }
          if (puVar8 + lVar15 != &uStack_518) {
            *(ulonglong *)(puVar8 + lVar15) = CONCAT71(uStack_517,uStack_518);
            uStack_518 = 0;
            uStack_517 = 0;
            *(undefined4 *)(puVar8 + lVar15 + 8) = uStack_510;
            *(undefined4 *)(puVar8 + lVar15 + 0xc) = uStack_50c;
            uStack_510 = 0;
            uStack_50c = 0;
          }
          puVar8[lVar15 + 0x10] = uStack_508;
          uStack_508 = 0;
          puVar8 = local_2b0;
          if (local_2b0 == (undefined1 *)0x0) {
            puVar8 = local_4b0;
          }
          FUN_1447e1642(puVar8 + local_650,&lStack_4f8);
          if (lStack_4c8 != 0) {
            FUN_1400020a8();
          }
          FUN_144716785(lStack_4d8,local_4d0 & 0xffffffff);
          if (lStack_4d8 != 0) {
            FUN_1400020a8();
          }
          FUN_144716758(lStack_4e8,local_4e0 & 0xffffffff);
          if (lStack_4e8 != 0) {
            FUN_1400020a8();
          }
          FUN_144716727(lStack_4f8,local_4f0 & 0xffffffff);
          if (lStack_4f8 != 0) {
            FUN_1400020a8();
          }
          lVar12 = lVar12 + 1;
          lVar16 = lVar16 + 0x40;
          lVar15 = lVar15 + 0x20;
          lVar13 = lVar13 + 0x18;
          lVar14 = local_648;
        } while (lVar12 < (int)local_68);
      }
      local_550 = (int *)(local_658 + 4);
      local_548 = local_658 + 7;
      local_540 = local_658 + 0xb;
      if (lVar14 == 0) {
        local_600 = local_90;
        if (local_70 != (int *)0x0) {
          local_600 = local_70;
        }
        local_678 = &local_600;
        local_610 = local_c0;
        if (local_a0 != (undefined1 *)0x0) {
          local_610 = local_a0;
        }
        local_608 = (int)local_98;
        local_620 = local_4b0;
        if (local_2b0 != (undefined1 *)0x0) {
          local_620 = local_2b0;
        }
        local_618 = (undefined4)local_2a8;
        local_630 = local_2a0;
        if (local_1a0 != (undefined1 *)0x0) {
          local_630 = local_1a0;
        }
        local_628 = (undefined4)local_198;
        local_640 = local_190;
        if (local_d0 != (undefined1 *)0x0) {
          local_640 = local_d0;
        }
        local_638 = (undefined4)local_c8;
        local_670 = &local_550;
        local_5f8 = (int)local_68;
        FUN_1433ce9ac();
      }
      else {
        iVar2 = *(int *)(local_658[6] + 0x44);
        if (iVar2 == 0) {
LAB_143284649:
          uVar10 = 0;
        }
        else {
          uVar6 = *(uint *)(local_658[6] + 0x40);
          uVar10 = 0;
          if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c9647dc)) {
            puVar11 = (undefined8 *)
                      ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
            if ((puVar11 == (undefined8 *)0x0) ||
               ((*(int *)(puVar11 + 2) != iVar2 || ((*(uint *)(puVar11 + 1) & 0x10200000) != 0))))
            goto LAB_143284649;
            uVar10 = *puVar11;
          }
        }
        local_668 = (int **)FUN_14481774e(DAT_14cacd528,*(undefined8 *)(lVar14 + 0x30),uVar10);
        if (((((*(uint *)((longlong)local_668 + 4) == 0) ||
              (uVar6 = *(uint *)local_668, (int)uVar6 < 0)) || (DAT_14c9647dc <= (int)uVar6)) ||
            ((((lVar16 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8), lVar16 == 0
               || (*(uint *)(lVar16 + 0x10) != *(uint *)((longlong)local_668 + 4))) ||
              (((*(uint *)(lVar16 + 8) & 0x10200000) != 0 ||
               ((*(uint *)((longlong)local_668 + 0xc) == 0 ||
                (uVar6 = *(uint *)(local_668 + 1), (int)uVar6 < 0)))))) ||
             (DAT_14c9647dc <= (int)uVar6)))) ||
           (((lVar16 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8), lVar16 == 0 ||
             (*(uint *)(lVar16 + 0x10) != *(uint *)((longlong)local_668 + 0xc))) ||
            ((*(uint *)(lVar16 + 8) & 0x10200000) != 0)))) {
          local_5b0 = local_90;
          if (local_70 != (int *)0x0) {
            local_5b0 = local_70;
          }
          local_670 = &local_5b0;
          local_5a8 = (int)local_68;
          local_5c0 = *(int **)(param_1 + 0x38);
          local_678 = &local_5c0;
          local_5b8 = *(undefined4 *)(param_1 + 0x40);
          local_5d0 = local_4b0;
          if (local_2b0 != (undefined1 *)0x0) {
            local_5d0 = local_2b0;
          }
          local_5c8 = (undefined4)local_2a8;
          local_5e0 = local_2a0;
          if (local_1a0 != (undefined1 *)0x0) {
            local_5e0 = local_1a0;
          }
          local_5d8 = (undefined4)local_198;
          local_5f0 = local_190;
          if (local_d0 != (undefined1 *)0x0) {
            local_5f0 = local_d0;
          }
          local_5e8 = (undefined4)local_c8;
          local_668 = &local_550;
          FUN_1478d0f72(&local_5f0,&local_5e0,&local_5d0,lVar14 + 0x28);
        }
        else {
          local_560 = local_90;
          if (local_70 != (int *)0x0) {
            local_560 = local_70;
          }
          local_670 = &local_560;
          local_558 = (int)local_68;
          local_570 = *(int **)(param_1 + 0x38);
          local_678 = &local_570;
          local_568 = *(undefined4 *)(param_1 + 0x40);
          local_580 = local_4b0;
          if (local_2b0 != (undefined1 *)0x0) {
            local_580 = local_2b0;
          }
          local_578 = (undefined4)local_2a8;
          local_590 = local_2a0;
          if (local_1a0 != (undefined1 *)0x0) {
            local_590 = local_1a0;
          }
          local_588 = (undefined4)local_198;
          local_5a0 = local_190;
          if (local_d0 != (undefined1 *)0x0) {
            local_5a0 = local_d0;
          }
          local_598 = (undefined4)local_c8;
          local_660 = &local_550;
          FUN_1478d1346(&local_5a0,&local_590,&local_580,lVar14 + 0x28);
        }
      }
      FUN_1400cc878(local_4b0);
      FUN_1400cc8b6(local_2a0);
      FUN_1400cc8f4(local_190);
      goto LAB_1432844f8;
    }
    piVar7 = local_70;
    if (local_70 == (int *)0x0) {
      piVar7 = local_90;
    }
    puVar8 = local_a0;
    if (local_a0 == (undefined1 *)0x0) {
      puVar8 = local_c0;
    }
    if ((lVar14 != 0) || (*(float *)(puVar8 + (longlong)*piVar7 * 4) < 0.99999)) goto LAB_143283e4b;
    lVar14 = (longlong)*piVar7 * 0x10;
    if (*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar14) != 0) {
      puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + lVar14);
      uVar3 = *(undefined4 *)(puVar9 + 1);
      *(undefined4 *)(puVar11 + 3) = *(undefined4 *)((longlong)puVar11 + 0x14);
      *(undefined4 *)((longlong)puVar11 + 0x14) = uVar3;
      plVar4 = (longlong *)*puVar9;
      (**(code **)(*plVar4 + 0x28))(plVar4,puVar11);
      goto LAB_1432844f8;
    }
    if (*(char *)(puVar11 + 0x13) == '\x01') {
      uVar3 = *(undefined4 *)(local_658 + 5);
      uVar10 = local_658[4];
      goto LAB_143283e2c;
    }
    uVar10 = local_658[6];
    param_2 = local_658;
  }
  FUN_1448859f0(param_2 + 4,uVar10);
LAB_1432844f8:
  if (local_a0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_70 != (int *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_698) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143284686 FUN_143284686 body=55 status=ok
// SIG undefined FUN_143284686(void)

void FUN_143284686(void)

{
  undefined8 uVar1;
  
  if (DAT_14caaa1c8 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caaa1c8 = FUN_14171c317(FUN_146330b68,uVar1,L"EAnimFunctionCallSite");
  }
  return;
}



// FUNCTION 1432846c0 FUN_1432846c0 body=982 status=ok
// SIG undefined FUN_1432846c0(void)

void FUN_1432846c0(longlong *param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
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
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = *param_1;
  if (((*(int *)(lVar2 + 0x30) != 0) && (uVar1 = *(uint *)(lVar2 + 0x2c), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar5 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar5 != (longlong *)0x0) && ((int)plVar5[2] == *(int *)(lVar2 + 0x30))) &&
       (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (lVar3 = *plVar5, lVar3 != 0)))) {
      if (lVar3 != param_2) goto LAB_1432848cc;
      lVar4 = *(longlong *)(lVar3 + 0x658);
      if (lVar4 == 0) {
        lVar4 = *(longlong *)(lVar3 + 0x660);
        if ((DAT_14c950c29 == 1) && (lVar4 != 0)) goto LAB_143284a97;
        if (lVar4 != 0) goto LAB_143284770;
LAB_143284929:
        lVar4 = 0;
      }
      else {
        if (DAT_14c950c29 == 1) {
LAB_143284a97:
          FUN_1456cec3c(lVar4);
        }
LAB_143284770:
        if (DAT_14cb06da8 == 0) {
          local_50 = &local_30;
          local_30 = FUN_1449e2820;
          local_40 = FUN_14081d0ea;
          local_48 = &LAB_1464003b0;
          local_58 = &LAB_147d17bdf;
          local_60 = &LAB_1417edf22;
          local_68 = L"Engine";
          local_70 = 0;
          local_78 = 0x10000000;
          local_80 = 8;
          local_88 = 0x588;
          FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
        }
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) != DAT_14cb06da8 + 0x30))
        goto LAB_143284929;
      }
      if (*(int *)(lVar2 + 0x38) == 0) {
LAB_1432848fc:
        lVar3 = 0;
      }
      else {
        uVar1 = *(uint *)(lVar2 + 0x34);
        lVar3 = 0;
        if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
          plVar5 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if ((plVar5 == (longlong *)0x0) ||
             (((int)plVar5[2] != *(int *)(lVar2 + 0x38) ||
              ((*(uint *)(plVar5 + 1) & 0x10200000) != 0)))) goto LAB_1432848fc;
          lVar3 = *plVar5;
        }
      }
      if (lVar4 != lVar3) goto LAB_1432848cc;
      if (param_3 == 0) goto LAB_1432848a6;
      lVar3 = *(longlong *)(param_3 + 0x658);
      if (lVar3 == 0) {
        lVar3 = *(longlong *)(param_3 + 0x660);
        if ((DAT_14c950c29 & lVar3 != 0) != 0) goto LAB_143284aa4;
        if (lVar3 != 0) goto LAB_143284826;
LAB_143284953:
        lVar3 = 0;
      }
      else {
        if (DAT_14c950c29 == 1) {
LAB_143284aa4:
          FUN_1456cec3c(lVar3);
        }
LAB_143284826:
        if (DAT_14cb06da8 == 0) {
          local_50 = &local_30;
          local_30 = FUN_1449e2820;
          local_40 = FUN_14081d0ea;
          local_48 = &LAB_1464003b0;
          local_58 = &LAB_147d17bdf;
          local_60 = &LAB_1417edf22;
          local_68 = L"Engine";
          local_70 = 0;
          local_78 = 0x10000000;
          local_80 = 8;
          local_88 = 0x588;
          FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
        }
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) != DAT_14cb06da8 + 0x30))
        goto LAB_143284953;
      }
      if (*(int *)(lVar2 + 0x48) == 0) {
LAB_143284903:
        lVar4 = 0;
      }
      else {
        uVar1 = *(uint *)(lVar2 + 0x44);
        lVar4 = 0;
        if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
          plVar5 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if ((plVar5 == (longlong *)0x0) ||
             (((int)plVar5[2] != *(int *)(lVar2 + 0x48) ||
              ((*(uint *)(plVar5 + 1) & 0x10200000) != 0)))) goto LAB_143284903;
          lVar4 = *plVar5;
        }
      }
      if (lVar3 != lVar4) goto LAB_1432848cc;
      goto LAB_1432848a6;
    }
  }
  if (param_2 != 0) {
LAB_1432848cc:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  }
LAB_1432848a6:
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143284ab2 FUN_143284ab2 body=195 status=ok
// SIG undefined FUN_143284ab2(void)

undefined8 FUN_143284ab2(undefined8 *param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1459e924a();
    uVar2 = FUN_144718840(param_2,uVar2);
  }
  *(undefined8 *)*param_1 = uVar2;
  if (*(longlong *)*param_1 != 0) {
    FUN_14793ac0e(&local_38,param_2);
    if (local_38 == *param_3) {
      if ((param_2 == 0) || (DAT_14c950c29 == '\0')) {
        *param_4 = param_2;
        if (param_2 == 0) {
          param_4[1] = 0;
        }
      }
      else {
        FUN_1456cec3c(param_2);
        *param_4 = param_2;
      }
      lVar1 = *(longlong *)*param_1;
      param_4[1] = lVar1;
      uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
      goto LAB_143284af0;
    }
  }
  uVar2 = 0;
LAB_143284af0:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143284b76 FUN_143284b76 body=55 status=ok
// SIG undefined FUN_143284b76(void)

void FUN_143284b76(void)

{
  undefined8 uVar1;
  
  if (DAT_14caaa228 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caaa228 = FUN_14171c317(FUN_146330d7c,uVar1,L"ELayeredBoneBlendMode");
  }
  return;
}



// FUNCTION 143284bae FUN_143284bae body=49 status=ok
// SIG undefined FUN_143284bae(void)

undefined1 FUN_143284bae(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x58) = param_2;
  return 1;
}



// FUNCTION 143284be6 FUN_143284be6 body=55 status=ok
// SIG undefined FUN_143284be6(void)

void FUN_143284be6(void)

{
  undefined8 uVar1;
  
  if (DAT_14caaa2b8 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caaa2b8 = FUN_14171c317(FUN_146331064,uVar1,L"EModifyCurveApplyMode");
  }
  return;
}



// FUNCTION 143284c1e FUN_143284c1e body=329 status=ok
// SIG undefined FUN_143284c1e(void)

void FUN_143284c1e(longlong param_1,undefined4 *param_2)

{
  float fVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  float local_78;
  undefined8 local_74;
  undefined4 local_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar4 = FUN_14477dc2a();
  FUN_14477dadc(uVar4,param_2);
  FUN_140739bbe(param_1);
  iVar3 = *(int *)(param_1 + 0x20);
  if (0 < iVar3) {
    lVar6 = 0;
    lVar7 = 0;
    do {
      fVar1 = *(float *)(*(longlong *)(param_1 + 0x38) + lVar7 * 4);
      if (1e-05 < fVar1) {
        lVar2 = *(longlong *)(param_1 + 0x18);
        plVar5 = *(longlong **)(lVar2 + lVar6);
        if (plVar5 != (longlong *)0x0) {
          local_78 = fVar1 * (float)param_2[8];
          uStack_84 = *(undefined4 *)(lVar2 + 8 + lVar6);
          local_98 = *param_2;
          uStack_94 = param_2[1];
          uStack_90 = param_2[2];
          uStack_8c = param_2[3];
          local_88 = param_2[4];
          uStack_80 = param_2[5];
          uStack_7c = param_2[7];
          local_6c = param_2[0xb];
          local_74 = *(undefined8 *)(param_2 + 9);
          if ((plVar5[1] != 0) && ((*(byte *)(plVar5[1] + 0x24) & 7) != 0)) {
            FUN_144b1fcbe(&local_98);
            FUN_144b1fd46(&local_98,*(undefined8 *)(lVar2 + lVar6));
            FUN_144b1fe18(&local_98,*(undefined8 *)(lVar2 + lVar6));
            plVar5 = *(longlong **)(lVar2 + lVar6);
          }
          (**(code **)(*plVar5 + 0x20))(plVar5,&local_98);
          iVar3 = *(int *)(param_1 + 0x20);
        }
      }
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x10;
    } while (lVar7 < iVar3);
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143284d68 FUN_143284d68 body=1651 status=ok
// SIG undefined FUN_143284d68(void)

void FUN_143284d68(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined1 auStack_218 [32];
  longlong local_1f8;
  longlong *local_1f0;
  undefined8 *local_1e8;
  undefined1 *local_1e0;
  longlong *local_1d8;
  undefined8 *local_1d0;
  undefined8 *local_1c8;
  undefined8 *local_1c0;
  undefined8 *local_1b8;
  undefined1 *local_1b0;
  longlong *local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined1 local_190;
  undefined8 local_18c;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined1 uStack_160;
  undefined8 uStack_15f;
  undefined8 local_150;
  longlong lStack_148;
  ulonglong local_140;
  longlong lStack_138;
  ulonglong local_130;
  longlong lStack_128;
  ulonglong local_120;
  longlong lStack_118;
  undefined8 local_110;
  undefined1 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined8 local_ec;
  undefined8 local_e0;
  ulonglong uStack_d8;
  undefined8 local_d0;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  int local_c0;
  undefined4 uStack_bc;
  char local_b8;
  undefined8 local_b0;
  longlong lStack_a8;
  ulonglong local_a0;
  longlong lStack_98;
  ulonglong local_90;
  longlong lStack_88;
  ulonglong local_80;
  longlong lStack_78;
  undefined8 local_70;
  char local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_100 = *param_2;
  local_f8 = 0;
  local_f0 = 1;
  local_ec = 0xffffffffffffffff;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  uStack_c7 = 0;
  local_c0 = 0;
  uStack_bc = 0;
  local_b8 = '\0';
  local_b0 = 0;
  lStack_a8 = 0;
  local_a0 = 0;
  lStack_98 = 0;
  local_90 = 0;
  lStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_70 = 0;
  local_68 = *(char *)(param_2 + 0x13);
  FUN_1447ce2ce(&local_100);
  local_ec = *(undefined8 *)((longlong)param_2 + 0x14);
  if (*(longlong **)(param_1 + 0xa8) == (longlong *)0x0) {
    if (local_68 == '\x01') {
      FUN_142400d60(local_e0,uStack_d8 & 0xffffffff);
    }
    else {
      FUN_1448859f0(&local_e0,local_d0);
    }
  }
  else {
    local_ec = CONCAT44(*(undefined4 *)((longlong)param_2 + 0x14),*(undefined4 *)(param_1 + 0xb0));
    (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x28))();
  }
  if ((((((*(int *)(param_1 + 0x4c) != 0) && (uVar1 = *(uint *)(param_1 + 0x48), -1 < (int)uVar1))
        && ((int)uVar1 < DAT_14c9647dc)) &&
       ((plVar8 = (longlong *)
                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
        plVar8 != (longlong *)0x0 && ((int)plVar8[2] == *(int *)(param_1 + 0x4c))))) &&
      (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 &&
       ((plVar8 = (longlong *)*plVar8, plVar8 != (longlong *)0x0 && (0 < *(int *)(param_1 + 0x78))))
       ))) && (plVar8[8] != 0)) {
    local_1a0 = *param_2;
    local_198 = 0;
    local_190 = 1;
    local_18c = 0xffffffffffffffff;
    local_180 = 0;
    uStack_178 = 0;
    local_170 = 0;
    uStack_168 = 0;
    uStack_167 = 0;
    uStack_160 = 0;
    uStack_15f = 0;
    local_150 = 0;
    lStack_148 = 0;
    local_140 = 0;
    lStack_138 = 0;
    local_130 = 0;
    lStack_128 = 0;
    local_120 = 0;
    lStack_118 = 0;
    local_110 = 0;
    local_108 = *(undefined1 *)(param_2 + 0x13);
    local_1f0 = plVar8;
    FUN_1447ce2ce(&local_1a0);
    local_18c = *(undefined8 *)((longlong)param_2 + 0x14);
    if (local_b8 == '\0') {
      FUN_144716af1(CONCAT71(uStack_c7,uStack_c8),local_c0);
      local_b8 = '\x01';
    }
    if (*(char *)(param_1 + 0xd8) == '\0') {
      FUN_1474da780(*(undefined8 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xd0));
      *(undefined1 *)(param_1 + 0xd8) = 1;
    }
    iVar5 = local_c0;
    local_1f8 = param_1 + 0x50;
    iVar2 = *(int *)(param_1 + 0xd0);
    if (local_c0 != 0 || iVar2 < 1) {
      iVar10 = 0;
      iVar11 = 0;
      do {
        if (iVar10 <= iVar5 && iVar11 == iVar2) break;
        lVar3 = *(longlong *)(param_1 + 200);
        lVar9 = *(longlong *)(lVar3 + (longlong)iVar11 * 0xc);
        lVar4 = *(longlong *)(CONCAT71(uStack_c7,uStack_c8) + (longlong)iVar10 * 0x10);
        if (lVar4 == lVar9) {
          lVar9 = CONCAT71(uStack_c7,uStack_c8) + (longlong)iVar10 * 0x10;
          uVar12 = FUN_14002c5a6(*(undefined4 *)(lVar9 + 8),
                                 CONCAT71((int7)((ulonglong)lVar9 >> 8),
                                          *(undefined1 *)(param_1 + 0xb8)),
                                 *(undefined8 *)(param_1 + 0xc0));
          *(undefined4 *)
           (*(longlong *)(param_1 + 0x70) + 0xc +
           (longlong)*(int *)(lVar3 + (longlong)iVar11 * 0xc + 8) * 0x10) = uVar12;
          iVar10 = iVar10 + 1;
LAB_1432850d4:
          iVar11 = iVar11 + 1;
        }
        else {
          iVar7 = (int)lVar4 - (int)lVar9;
          if (iVar7 == 0) {
            iVar7 = (int)((ulonglong)lVar4 >> 0x20) - (int)((ulonglong)lVar9 >> 0x20);
          }
          if (-1 < iVar7) goto LAB_1432850d4;
          iVar10 = iVar10 + 1;
        }
      } while (iVar2 <= iVar11 || iVar10 != iVar5);
    }
    plVar8 = local_1f0;
    local_1b8 = &local_180;
    local_1b0 = &uStack_168;
    local_1a8 = &lStack_148;
    cVar6 = FUN_1433eeed2(local_1f0,&local_1b8,local_1f8);
    if (cVar6 != '\0') {
      cVar6 = (**(code **)(*plVar8 + 0x2c0))(plVar8);
      if (cVar6 == '\0') {
        local_1e0 = &uStack_c8;
        local_1c8 = param_2 + 7;
        local_1c0 = param_2 + 0xb;
        local_1d8 = &lStack_a8;
        local_1e8 = &local_e0;
        local_1d0 = param_2 + 4;
        FUN_1403d2b4e(&local_1e8,&local_1b8,param_1 + 0x98);
      }
      else {
        FUN_140341844(param_2,&local_100);
        FUN_1400bcc9a(param_2 + 4,local_1b8,0x3f800000);
        FUN_144716836(param_2 + 7,local_1b0,0x3f800000);
        FUN_140035fa4(local_1a8,param_2 + 0xb,0x3f800000,1);
        FUN_142400cf0(param_2[4],*(undefined4 *)(param_2 + 5));
      }
      if (lStack_118 != 0) {
        FUN_1400020a8();
      }
      FUN_144716785(lStack_128,local_120 & 0xffffffff);
      if (lStack_128 != 0) {
        FUN_1400020a8();
      }
      FUN_144716758(lStack_138,local_130 & 0xffffffff);
      if (lStack_138 != 0) {
        FUN_1400020a8();
      }
      FUN_144716727(lStack_148,local_140 & 0xffffffff);
      if (lStack_148 != 0) {
        FUN_1400020a8();
      }
      goto LAB_143285188;
    }
    if (lStack_118 != 0) {
      FUN_1400020a8();
    }
    FUN_144716785(lStack_128,local_120 & 0xffffffff);
    if (lStack_128 != 0) {
      FUN_1400020a8();
    }
    FUN_144716758(lStack_138,local_130 & 0xffffffff);
    if (lStack_138 != 0) {
      FUN_1400020a8();
    }
    FUN_144716727(lStack_148,local_140 & 0xffffffff);
    if (lStack_148 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_140341844(param_2,&local_100);
LAB_143285188:
  if (lStack_78 != 0) {
    FUN_1400020a8();
  }
  FUN_144716785(lStack_88,local_80 & 0xffffffff);
  if (lStack_88 != 0) {
    FUN_1400020a8();
  }
  FUN_144716758(lStack_98,local_90 & 0xffffffff);
  if (lStack_98 != 0) {
    FUN_1400020a8();
  }
  FUN_144716727(lStack_a8,local_a0 & 0xffffffff);
  if (lStack_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1432853dc FUN_1432853dc body=55 status=ok
// SIG undefined FUN_1432853dc(void)

void FUN_1432853dc(void)

{
  undefined8 uVar1;
  
  if (DAT_14caaa330 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caaa330 = FUN_14171c317(FUN_146331320,uVar1,L"EPoseDriverType");
  }
  return;
}



// FUNCTION 143285413 FUN_143285413 body=55 status=ok
// SIG undefined FUN_143285413(void)

void FUN_143285413(void)

{
  undefined8 uVar1;
  
  if (DAT_14caaa348 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caaa348 = FUN_14171c317(FUN_14633134f,uVar1,L"EPoseDriverSource");
  }
  return;
}



// FUNCTION 14328544a FUN_14328544a body=55 status=ok
// SIG undefined FUN_14328544a(void)

void FUN_14328544a(void)

{
  undefined8 uVar1;
  
  if (DAT_14caaa360 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caaa360 = FUN_14171c317(FUN_14633137e,uVar1,L"EPoseDriverOutput");
  }
  return;
}



// FUNCTION 143285482 FUN_143285482 body=9341 status=ok
// SIG undefined FUN_143285482(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143285482(longlong *param_1,ulonglong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  byte *pbVar4;
  code *pcVar5;
  longlong *plVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  char cVar24;
  byte bVar25;
  int iVar26;
  undefined4 extraout_EAX;
  int iVar27;
  undefined8 uVar28;
  uint uVar29;
  uint uVar30;
  undefined4 uVar31;
  uint uVar32;
  longlong lVar33;
  longlong lVar34;
  ulonglong *puVar35;
  undefined8 *puVar36;
  int *piVar37;
  longlong lVar38;
  ulonglong uVar39;
  ulonglong *puVar40;
  double *pdVar41;
  longlong lVar42;
  ulonglong uVar43;
  double **ppdVar44;
  longlong **pplVar45;
  double *pdVar46;
  longlong *plVar47;
  longlong lVar48;
  longlong *plVar49;
  longlong lVar50;
  int *piVar51;
  bool bVar52;
  double dVar53;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  double dVar54;
  double dVar55;
  double dVar61;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  double dVar62;
  double dVar69;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  double dVar63;
  double dVar70;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  double dVar71;
  double dVar72;
  double dVar73;
  double dVar74;
  double dVar75;
  double dVar76;
  double dVar77;
  double dVar78;
  ulonglong *puVar79;
  double dVar80;
  double dVar81;
  undefined1 *puVar82;
  undefined4 uVar83;
  undefined4 uVar84;
  undefined4 uVar85;
  undefined4 uVar86;
  undefined4 uVar87;
  double dVar88;
  double dVar89;
  double dVar90;
  double dVar91;
  double dVar92;
  double dVar93;
  undefined1 auVar94 [16];
  undefined4 uVar95;
  undefined1 auStack_408 [32];
  longlong *local_3e8;
  ulonglong *local_3d8;
  ulonglong *local_3d0;
  ulonglong *local_3c8;
  undefined8 uStack_3c0;
  longlong *local_3b8;
  ulonglong *local_3b0;
  undefined8 *local_3a8;
  undefined8 uStack_3a0;
  longlong *local_390;
  undefined1 local_388 [12];
  uint uStack_37c;
  undefined1 local_378 [4];
  undefined1 auStack_374 [12];
  double local_368;
  double dStack_360;
  double local_358;
  undefined1 uStack_350;
  undefined7 uStack_34f;
  undefined1 local_348;
  undefined7 uStack_347;
  undefined1 uStack_340;
  undefined7 uStack_33f;
  double *local_338;
  double dStack_330;
  ulonglong local_328;
  longlong lStack_320;
  ulonglong local_318;
  longlong lStack_310;
  ulonglong local_308;
  longlong lStack_300;
  undefined8 local_2f8;
  undefined1 local_2f0;
  double *local_2e8;
  undefined1 *puStack_2e0;
  double *local_2d8;
  double dStack_2d0;
  longlong *local_2c8 [3];
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double *local_268 [3];
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  ulonglong *local_208;
  ulonglong *puStack_200;
  ulonglong *local_1f8;
  longlong lStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  double *local_1b8;
  undefined1 *puStack_1b0;
  double *local_1a8;
  double dStack_1a0;
  ulonglong local_190 [2];
  undefined1 local_180;
  undefined8 local_17c;
  longlong local_170;
  ulonglong uStack_168;
  ulonglong *local_160;
  undefined1 uStack_158;
  undefined7 uStack_157;
  undefined1 uStack_150;
  undefined8 uStack_14f;
  undefined8 local_140;
  longlong lStack_138;
  ulonglong local_130;
  longlong lStack_128;
  ulonglong local_120;
  longlong lStack_118;
  ulonglong local_110;
  longlong lStack_108;
  undefined8 local_100;
  char local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_408;
  plVar49 = (longlong *)*param_2;
  pcVar5 = *(code **)(*param_1 + 0x98);
  if (pcVar5 == (code *)&LAB_1400e9baa) {
    iVar26 = *(int *)((longlong)param_1 + 0xe4);
  }
  else if (pcVar5 == (code *)&LAB_1400e9bb2) {
    iVar26 = (int)param_1[5];
  }
  else if (pcVar5 == (code *)&LAB_1400e9bb6) {
    iVar26 = *(int *)((longlong)param_1 + 0x44);
  }
  else {
    iVar26 = (*pcVar5)(param_1);
  }
  if ((iVar26 != -1) && (iVar26 < (int)plVar49[0xd6])) {
LAB_143287053:
    if (param_1[0x15] != 0) {
      lVar38 = param_1[0x16];
      *(undefined4 *)(param_2 + 3) = *(undefined4 *)((longlong)param_2 + 0x14);
      *(int *)((longlong)param_2 + 0x14) = (int)lVar38;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_408);
    }
    if ((char)param_2[0x13] == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_408);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_408);
  }
  bVar25 = *(byte *)(param_1 + 2);
  if ((bVar25 & 1) == 0) {
    uVar28 = (**(code **)(*param_1 + 8))(param_1);
    cVar24 = (**(code **)(*plVar49 + 0xc0))(plVar49,uVar28,(longlong)param_1 + 0x11);
    bVar25 = (cVar24 * '\x02' | *(byte *)(param_1 + 2) & 0xfc) + 1;
    *(byte *)(param_1 + 2) = bVar25;
  }
  if (((bVar25 & 2) != 0) &&
     (cVar24 = (**(code **)(*plVar49 + 0xb8))(plVar49,*(undefined1 *)((longlong)param_1 + 0x11)),
     cVar24 == '\0')) goto LAB_143287053;
  local_190[0] = *param_2;
  local_190[1] = 0;
  local_180 = 1;
  local_17c = 0xffffffffffffffff;
  local_170 = 0;
  uStack_168 = 0;
  local_160 = (ulonglong *)0x0;
  uStack_158 = 0;
  uStack_157 = 0;
  uStack_150 = 0;
  uStack_14f = 0;
  local_140 = 0;
  lStack_138 = 0;
  local_130 = 0;
  lStack_128 = 0;
  local_120 = 0;
  lStack_118 = 0;
  local_110 = 0;
  lStack_108 = 0;
  local_100 = 0;
  local_f8 = (char)param_2[0x13];
  FUN_1447ce2ce(local_190);
  local_17c = *(undefined8 *)((longlong)param_2 + 0x14);
  if ((longlong *)param_1[0x15] == (longlong *)0x0) {
    if (local_f8 == '\x01') {
      FUN_142400d60(local_170,uStack_168 & 0xffffffff);
    }
    else {
      FUN_1448859f0(&local_170,local_160);
    }
  }
  else {
    local_17c = CONCAT44(*(undefined4 *)((longlong)param_2 + 0x14),(int)param_1[0x16]);
    (**(code **)(*(longlong *)param_1[0x15] + 0x28))();
  }
  if (((((*(byte *)(param_1 + 0x2f) & 1) != 0) && (*(int *)((longlong)param_1 + 0x4c) != 0)) &&
      (uVar30 = *(uint *)(param_1 + 9), -1 < (int)uVar30)) &&
     ((((int)uVar30 < DAT_14c9647dc &&
       (puVar36 = (undefined8 *)
                  ((ulonglong)((uVar30 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar30 >> 0x10) * 8)),
       puVar36 != (undefined8 *)0x0)) &&
      ((*(int *)(puVar36 + 2) == *(int *)((longlong)param_1 + 0x4c) &&
       ((*(uint *)(puVar36 + 1) & 0x10200000) == 0)))))) {
    if ((*(uint *)(puVar36 + 1) & 0x10200000) == 0) {
      uVar28 = *puVar36;
    }
    else {
      uVar28 = 0;
    }
    (**(code **)(*param_1 + 0x1a0))(param_1,*(undefined8 *)(*param_2 + 0x6a0),uVar28);
  }
  puVar35 = local_160;
  plVar49 = param_1 + 0x32;
  *(undefined4 *)(param_1 + 0x33) = 0;
  if (*(int *)((longlong)param_1 + 0x19c) < 0) {
    FUN_14482f6fa(plVar49,0);
  }
  plVar47 = param_1 + 0x2a;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  if (*(int *)((longlong)param_1 + 0x15c) < 0) {
    FUN_1401a2688(plVar47,0);
  }
  if ((longlong)(int)param_1[0x18] != 0) {
    local_3d8 = puVar35;
    local_3c8 = puVar35 + 2;
    local_3b0 = (ulonglong *)((longlong)param_1 + 0xd4);
    piVar51 = (int *)(param_1[0x17] + 0xc);
    lVar38 = (longlong)(int)param_1[0x18] << 4;
    bVar52 = false;
    local_3a8 = (undefined8 *)0x0;
    uStack_3a0 = 0x3ff0000000000000;
    local_3d0 = param_2;
    do {
      dVar91 = (double)CONCAT44(DAT_14c846480._4_4_,(undefined4)DAT_14c846480);
      dVar92 = (double)CONCAT44(DAT_14c846488._4_4_,(undefined4)DAT_14c846488);
      local_1a8 = DAT_14c8464d0;
      dStack_1a0 = dRam000000014c8464d8;
      local_1b8 = DAT_14c8464c0;
      puStack_1b0 = DAT_14c8464c8;
      uVar30 = piVar51[-1];
      piVar37 = piVar51;
      dVar69 = DAT_14c8464a0;
      dVar55 = DAT_14c8464a8;
      dVar54 = DAT_14c8464b0;
      dVar62 = DAT_14c8464b8;
      puVar35 = DAT_14c846490;
      dVar90 = DAT_14c846498;
      if ((int)uVar30 < 0) {
        if ((((~uVar30 & 0x7fffffff) != 0) && (uVar30 = (int)(uVar30 * 2) >> 1, -1 < (int)uVar30))
           && ((int)uVar30 < (int)local_3d8[0x11])) {
          piVar37 = (int *)((ulonglong)uVar30 * 4 + local_3d8[0x10]);
          goto LAB_14328578b;
        }
      }
      else {
LAB_14328578b:
        iVar26 = *piVar37;
        lVar50 = (longlong)iVar26;
        if (lVar50 != -1) {
          uVar30 = *(uint *)(param_1 + 0x1a);
          uVar29 = ~uVar30;
          if ((uVar29 & 0x7fffffff) == 0) {
LAB_143285c64:
            uVar43 = (ulonglong)uVar29;
            if (((char)param_1[0x1b] == '\x01') && (iVar26 < (int)local_3d8[1])) {
              if (local_3d8[0x1d] == 0) {
                uVar43 = local_3d8[9];
                pdVar41 = (double *)
                          ((ulonglong)((uint)*(ushort *)(*local_3d8 + lVar50 * 2) * 0x60) +
                          *(longlong *)(uVar43 + 0x30));
              }
              else {
                pdVar41 = (double *)(*(longlong *)(local_3d8[0x1d] + 0x10) + lVar50 * 0x60);
              }
              pdVar46 = (double *)(lVar50 * 0x60 + local_170);
              _local_388 = ZEXT816(0);
              auStack_374._4_8_ = uStack_3a0;
              _local_378 = local_3a8;
              local_358 = 0.0;
              uStack_350 = 0;
              uStack_34f = 0;
              local_368 = 0.0;
              dStack_360 = 0.0;
              local_348 = 0;
              uStack_347 = 0x3ff00000000000;
              uStack_340 = 0;
              uStack_33f = 0x3ff00000000000;
              local_338 = (double *)&DAT_3ff0000000000000;
              dStack_330 = 0.0;
              dVar88 = pdVar41[2] * pdVar41[2] + *pdVar41 * *pdVar41;
              dVar53 = pdVar41[3] * pdVar41[3] + pdVar41[1] * pdVar41[1];
              auVar56._8_8_ = -(ulonglong)(0.009999999776482582 < ABS(1.0 - (dVar88 + dVar53)));
              auVar56._0_8_ = -(ulonglong)(0.009999999776482582 < ABS(1.0 - (dVar88 + dVar53)));
              iVar26 = movmskpd((int)&local_368,auVar56);
              if (iVar26 == 0) {
                auVar56 = minpd(*(undefined1 (*) [16])(pdVar46 + 8),
                                *(undefined1 (*) [16])(pdVar41 + 8));
                auVar68 = minpd(*(undefined1 (*) [16])(pdVar46 + 10),
                                *(undefined1 (*) [16])(pdVar41 + 10));
                auVar64._8_8_ = -(ulonglong)(auVar56._8_8_ < 0.0);
                auVar64._0_8_ = -(ulonglong)(auVar56._0_8_ < 0.0);
                iVar26 = movmskpd(0,auVar64);
                auVar66._8_8_ = -(ulonglong)(auVar68._8_8_ < 0.0);
                auVar66._0_8_ = -(ulonglong)(auVar68._0_8_ < 0.0);
                uVar30 = movmskpd((int)uVar43,auVar66);
                if ((uVar30 & 0x3fffffff) == 0 && iVar26 == 0) {
                  if ((*(int *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x110) < DAT_14c8460b0) &&
                     (FUN_144b3d300(&DAT_14c8460b0), DAT_14c8460b0 == -1)) {
                    DAT_14c8460a0 = 0x322bcc77322bcc77;
                    DAT_14c8460a8 = 0x322bcc77322bcc77;
                    _Init_thread_footer(&DAT_14c8460b0);
                  }
                  auVar56 = *(undefined1 (*) [16])(pdVar41 + 8);
                  auVar64 = divpd(_DAT_149934d80,auVar56);
                  auVar68 = divpd(ZEXT816(0x3ff0000000000000),*(undefined1 (*) [16])(pdVar41 + 10));
                  dVar75 = (double)(-(ulonglong)((double)(float)DAT_14c8460a0 < ABS(auVar56._0_8_))
                                   & auVar64._0_8_);
                  dVar77 = (double)(-(ulonglong)
                                     ((double)(float)((ulonglong)DAT_14c8460a0 >> 0x20) <
                                     ABS(auVar56._8_8_)) & auVar64._8_8_);
                  dVar73 = (double)(-(ulonglong)
                                     ((double)(float)DAT_14c8460a8 <
                                     ABS(SUB168(*(undefined1 (*) [16])(pdVar41 + 10),0))) &
                                   auVar68._0_8_);
                  dVar69 = pdVar46[4] - pdVar41[4];
                  dVar55 = pdVar46[5] - pdVar41[5];
                  dVar89 = pdVar46[6] - pdVar41[6];
                  dVar78 = -*pdVar41;
                  dVar81 = -pdVar41[1];
                  dVar80 = pdVar41[2] * -1.0;
                  dVar93 = pdVar41[3] * 1.0;
                  dVar54 = dVar55 * dVar78 - dVar69 * dVar81;
                  dVar53 = dVar89 * dVar81 - dVar55 * dVar80;
                  dVar61 = dVar69 * dVar80 - dVar89 * dVar78;
                  dVar62 = dVar93 * 0.0 - dVar93 * 0.0;
                  dVar53 = dVar53 + dVar53;
                  dVar61 = dVar61 + dVar61;
                  dVar54 = dVar54 + dVar54;
                  dVar62 = dVar62 + dVar62;
                  dVar74 = pdVar46[8] * dVar75;
                  dVar76 = pdVar46[9] * dVar77;
                  local_338 = (double *)(pdVar46[10] * dVar73);
                  dStack_330 = pdVar46[0xb] * 0.0;
                  dVar63 = *pdVar46;
                  dVar70 = pdVar46[1];
                  dVar71 = pdVar46[2];
                  dVar72 = pdVar46[3];
                  dVar62 = ((dVar62 * dVar93 - dVar62 * dVar93) + dVar93 * dVar62 + 0.0) * 0.0;
                  dVar90 = (double)DAT_149931170;
                  dVar88 = DAT_149931170._8_8_;
                  dVar92 = pdVar41[1];
                  dVar91 = pdVar41[1];
                  local_388._0_8_ =
                       dVar70 * dVar80 * -1.0 +
                       ((dVar63 * dVar93 - *pdVar41 * dVar72 * dVar90) - dVar71 * dVar92);
                  unique0x10000f2c =
                       (longlong *)
                       (dVar63 * dVar80 * 1.0 +
                       ((dVar70 * dVar93 - *pdVar41 * dVar71 * dVar88) - dVar72 * dVar91));
                  local_348 = SUB81(dVar74,0);
                  uStack_347 = (undefined7)((ulonglong)dVar74 >> 8);
                  uStack_340 = SUB81(dVar76,0);
                  uStack_33f = (undefined7)((ulonglong)dVar76 >> 8);
                  dVar69 = ((dVar54 * dVar81 - dVar80 * dVar61) + dVar93 * dVar53 + dVar69) * dVar75
                  ;
                  dVar55 = ((dVar53 * dVar80 - dVar54 * dVar78) + dVar93 * dVar61 + dVar55) * dVar77
                  ;
                  dVar54 = ((dVar61 * dVar78 - dVar81 * dVar53) + dVar93 * dVar54 + dVar89) * dVar73
                  ;
                  puVar35 = (ulonglong *)
                            (dVar72 * dVar80 * dVar90 +
                            dVar92 * dVar63 + (dVar93 * dVar71 - *pdVar41 * dVar70 * dVar90));
                  dVar90 = dVar71 * dVar80 * dVar88 +
                           dVar91 * dVar70 + (dVar93 * dVar72 - *pdVar41 * dVar63 * dVar88);
                }
                else {
                  FUN_1402db8fa(local_388,pdVar46,pdVar41);
                  dVar62 = (double)CONCAT71(uStack_34f,uStack_350);
                  dVar69 = local_368;
                  dVar55 = dStack_360;
                  dVar54 = local_358;
                  puVar35 = _local_378;
                  dVar90 = (double)auStack_374._4_8_;
                }
                local_268[0] = (double *)CONCAT71(uStack_347,local_348);
                local_268[1] = (double *)CONCAT71(uStack_33f,uStack_340);
                local_268[2] = local_338;
                dStack_250 = dStack_330;
                local_1b8 = local_268[0];
                puStack_1b0 = (undefined1 *)local_268[1];
                local_1a8 = local_268[2];
                dStack_1a0 = dStack_250;
              }
              else {
                local_268[2] = DAT_14c8464d0;
                dStack_250 = dRam000000014c8464d8;
                local_388._0_8_ = dVar91;
                unique0x1000465b = (longlong *)dVar92;
                local_268[0] = DAT_14c8464c0;
                local_268[1] = (double *)DAT_14c8464c8;
                local_1a8 = local_268[2];
                dStack_1a0 = dStack_250;
              }
            }
            else {
              lVar50 = lVar50 * 0x60;
              puVar36 = (undefined8 *)(local_170 + 0x10 + lVar50);
              pdVar41 = (double *)(local_170 + 0x20 + lVar50);
              pdVar46 = (double *)(local_170 + 0x30 + lVar50);
              plVar3 = (longlong *)(local_170 + 0x40 + lVar50);
              local_1b8 = (double *)*plVar3;
              puStack_1b0 = (undefined1 *)plVar3[1];
              puVar2 = (undefined8 *)(local_170 + 0x50 + lVar50);
              local_1a8 = (double *)*puVar2;
              dStack_1a0 = (double)puVar2[1];
              local_388._0_8_ = *(double *)(local_170 + lVar50);
              unique0x1000464b = (longlong *)((double *)(local_170 + lVar50))[1];
              dVar69 = *pdVar41;
              dVar55 = pdVar41[1];
              dVar54 = *pdVar46;
              dVar62 = pdVar46[1];
              puVar35 = (ulonglong *)*puVar36;
              dVar90 = (double)puVar36[1];
            }
          }
          else {
            puVar40 = (ulonglong *)local_3d8[4];
            if ((ulonglong *)local_3d8[4] == (ulonglong *)0x0) {
              puVar40 = local_3c8;
            }
            uVar29 = *(uint *)((longlong)puVar40 + (ulonglong)(uVar30 >> 3 & 0x1ffc));
            if ((uVar29 >> (uVar30 & 0x1f) & 1) == 0) goto LAB_143285c64;
            local_1d8 = 0;
            uStack_1d0 = 0;
            local_1e8 = 0;
            uStack_1e0 = 0;
            local_1f8 = (ulonglong *)0x0;
            lStack_1f0 = 0;
            local_208 = (ulonglong *)0x0;
            puStack_200 = (ulonglong *)0x0;
            local_1c8 = 0;
            FUN_1417977a6(&local_208,&local_170);
            uVar30 = *(uint *)(param_1 + 0x1a);
            puVar35 = local_3b0;
            if ((int)uVar30 < 0) {
              iVar27 = -1;
              if ((((~uVar30 & 0x7fffffff) != 0) &&
                  (uVar30 = (int)(uVar30 * 2) >> 1, -1 < (int)uVar30)) &&
                 ((int)uVar30 < (int)local_3d8[0x11])) {
                puVar35 = (ulonglong *)((ulonglong)uVar30 * 4 + local_3d8[0x10]);
                goto LAB_143285831;
              }
            }
            else {
LAB_143285831:
              iVar27 = (int)*puVar35;
            }
            if (*(char *)(lStack_1f0 + iVar27) == '\0') {
              FUN_1447d5d8e(&local_208);
            }
            lVar34 = lStack_1f0;
            puVar35 = local_208;
            puVar40 = local_208 + (longlong)iVar27 * 0xc;
            ppdVar44 = local_268;
            for (lVar33 = 0xc; lVar33 != 0; lVar33 = lVar33 + -1) {
              *ppdVar44 = (double *)*puVar40;
              puVar40 = puVar40 + 1;
              ppdVar44 = ppdVar44 + 1;
            }
            if (*(char *)(lVar34 + lVar50) == '\0') {
              FUN_1447d5d8e(&local_208,iVar26);
              puVar35 = local_208;
            }
            puVar35 = puVar35 + lVar50 * 0xc;
            pplVar45 = local_2c8;
            for (lVar34 = 0xc; lVar34 != 0; lVar34 = lVar34 + -1) {
              *pplVar45 = (longlong *)*puVar35;
              puVar35 = puVar35 + 1;
              pplVar45 = pplVar45 + 1;
            }
            _local_388 = ZEXT816(0);
            auStack_374._4_8_ = uStack_3a0;
            _local_378 = local_3a8;
            local_358 = 0.0;
            uStack_350 = 0;
            uStack_34f = 0;
            local_368 = 0.0;
            dStack_360 = 0.0;
            local_348 = 0;
            uStack_347 = 0x3ff00000000000;
            uStack_340 = 0;
            uStack_33f = 0x3ff00000000000;
            dVar62 = (double)local_268[2] * (double)local_268[2] +
                     (double)local_268[0] * (double)local_268[0];
            dVar69 = dStack_250 * dStack_250 + (double)local_268[1] * (double)local_268[1];
            local_338 = (double *)&DAT_3ff0000000000000;
            dStack_330 = 0.0;
            auVar68._8_8_ = -(ulonglong)(0.009999999776482582 < ABS(1.0 - (dVar62 + dVar69)));
            auVar68._0_8_ = -(ulonglong)(0.009999999776482582 < ABS(1.0 - (dVar62 + dVar69)));
            iVar26 = movmskpd((int)&local_368,auVar68);
            if (iVar26 == 0) {
              auVar13._8_8_ = dStack_280;
              auVar13._0_8_ = local_288;
              auVar14._8_8_ = dStack_270;
              auVar14._0_8_ = local_278;
              auVar56 = minpd(auVar13,local_228);
              auVar64 = minpd(auVar14,local_218);
              auVar57._8_8_ = -(ulonglong)(auVar56._8_8_ < 0.0);
              auVar57._0_8_ = -(ulonglong)(auVar56._0_8_ < 0.0);
              iVar26 = movmskpd(0,auVar57);
              auVar65._8_8_ = -(ulonglong)(auVar64._8_8_ < 0.0);
              auVar65._0_8_ = -(ulonglong)(auVar64._0_8_ < 0.0);
              uVar30 = movmskpd(0,auVar65);
              if ((uVar30 & 0x3fffffff) == 0 && iVar26 == 0) {
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14c8460b0) &&
                   (FUN_144b3d300(&DAT_14c8460b0), DAT_14c8460b0 == -1)) {
                  DAT_14c8460a0 = 0x322bcc77322bcc77;
                  DAT_14c8460a8 = 0x322bcc77322bcc77;
                  _Init_thread_footer(&DAT_14c8460b0);
                }
                auVar56 = divpd(_DAT_149934d80,local_228);
                auVar64 = divpd(ZEXT816(0x3ff0000000000000),local_218);
                dVar53 = (double)(-(ulonglong)((double)(float)DAT_14c8460a0 < ABS(local_228._0_8_))
                                 & auVar56._0_8_);
                dVar61 = (double)(-(ulonglong)
                                   ((double)(float)((ulonglong)DAT_14c8460a0 >> 0x20) <
                                   ABS(local_228._8_8_)) & auVar56._8_8_);
                dVar71 = (double)(-(ulonglong)((double)(float)DAT_14c8460a8 < ABS(local_218._0_8_))
                                 & auVar64._0_8_);
                dVar69 = local_2a8 - local_248;
                dVar55 = dStack_2a0 - dStack_240;
                dVar93 = local_298 - local_238;
                dVar77 = -(double)local_268[0];
                dVar80 = -(double)local_268[1];
                dVar63 = (double)local_268[2] * -1.0;
                dVar70 = dStack_250 * 1.0;
                dVar54 = dVar55 * dVar77 - dVar69 * dVar80;
                dVar90 = dVar93 * dVar80 - dVar55 * dVar63;
                dVar88 = dVar69 * dVar63 - dVar93 * dVar77;
                dVar62 = dVar70 * 0.0 - dVar70 * 0.0;
                dVar90 = dVar90 + dVar90;
                dVar88 = dVar88 + dVar88;
                dVar54 = dVar54 + dVar54;
                dVar62 = dVar62 + dVar62;
                dVar72 = local_288 * dVar53;
                dVar75 = dStack_280 * dVar61;
                local_338 = (double *)(local_278 * dVar71);
                dStack_330 = dStack_270 * 0.0;
                dVar62 = ((dVar62 * dVar70 - dVar62 * dVar70) + dVar70 * dVar62 + 0.0) * 0.0;
                dVar91 = (double)DAT_149931170;
                dVar92 = DAT_149931170._8_8_;
                local_388._0_8_ =
                     (double)local_2c8[1] * dVar63 * -1.0 +
                     (((double)local_2c8[0] * dVar70 - (double)local_268[0] * dStack_2b0 * dVar91) -
                     (double)local_2c8[2] * (double)local_268[1]);
                unique0x10000ee4 =
                     (longlong *)
                     ((double)local_2c8[0] * dVar63 * 1.0 +
                     (((double)local_2c8[1] * dVar70 -
                      (double)local_268[0] * (double)local_2c8[2] * dVar92) -
                     dStack_2b0 * (double)local_268[1]));
                local_348 = SUB81(dVar72,0);
                uStack_347 = (undefined7)((ulonglong)dVar72 >> 8);
                uStack_340 = SUB81(dVar75,0);
                uStack_33f = (undefined7)((ulonglong)dVar75 >> 8);
                dVar69 = ((dVar54 * dVar80 - dVar63 * dVar88) + dVar70 * dVar90 + dVar69) * dVar53;
                dVar55 = ((dVar90 * dVar63 - dVar54 * dVar77) + dVar70 * dVar88 + dVar55) * dVar61;
                dVar54 = ((dVar88 * dVar77 - dVar80 * dVar90) + dVar70 * dVar54 + dVar93) * dVar71;
                puVar35 = (ulonglong *)
                          (dStack_2b0 * dVar63 * dVar91 +
                          (double)local_268[1] * (double)local_2c8[0] +
                          (dVar70 * (double)local_2c8[2] -
                          (double)local_268[0] * (double)local_2c8[1] * dVar91));
                dVar90 = (double)local_2c8[2] * dVar63 * dVar92 +
                         (double)local_268[1] * (double)local_2c8[1] +
                         (dVar70 * dStack_2b0 - (double)local_268[0] * (double)local_2c8[0] * dVar92
                         );
              }
              else {
                FUN_1402db8fa(local_388,local_2c8,local_268);
                dVar62 = (double)CONCAT71(uStack_34f,uStack_350);
                dVar69 = local_368;
                dVar55 = dStack_360;
                dVar54 = local_358;
                puVar35 = _local_378;
                dVar90 = (double)auStack_374._4_8_;
              }
              local_2e8 = (double *)CONCAT71(uStack_347,local_348);
              puStack_2e0 = (undefined1 *)CONCAT71(uStack_33f,uStack_340);
              local_2d8 = local_338;
              dStack_2d0 = dStack_330;
              local_1b8 = local_2e8;
              puStack_1b0 = puStack_2e0;
              local_1a8 = local_2d8;
              dStack_1a0 = dStack_2d0;
            }
            else {
              local_388._0_8_ = CONCAT44(DAT_14c846480._4_4_,(undefined4)DAT_14c846480);
              unique0x100034ba = (longlong *)CONCAT44(DAT_14c846488._4_4_,(undefined4)DAT_14c846488)
              ;
              local_2e8 = DAT_14c8464c0;
              puStack_2e0 = DAT_14c8464c8;
              local_2d8 = DAT_14c8464d0;
              dStack_2d0 = dRam000000014c8464d8;
              dVar69 = DAT_14c8464a0;
              dVar55 = DAT_14c8464a8;
              dVar54 = DAT_14c8464b0;
              dVar62 = DAT_14c8464b8;
              puVar35 = DAT_14c846490;
              dVar90 = DAT_14c846498;
              local_1b8 = local_2e8;
              puStack_1b0 = puStack_2e0;
              local_1a8 = local_2d8;
              dStack_1a0 = dStack_2d0;
            }
          }
          bVar52 = true;
          dVar91 = (double)local_388._0_8_;
          dVar92 = (double)unique0x100024cb;
        }
      }
      uVar85 = (undefined4)((ulonglong)dVar55 >> 0x20);
      uVar83 = (undefined4)((ulonglong)dVar92 >> 0x20);
      if ((char)param_1[0x27] == '\x01') {
        local_388._8_4_ = SUB84(dVar55,0);
        local_388._0_8_ = dVar69;
        uStack_37c = uVar85;
        _local_378 = (ulonglong *)dVar54;
        FUN_147506b32(plVar49,local_388);
      }
      else {
        local_388._8_4_ = SUB84(dVar92,0);
        local_388._0_8_ = dVar91;
        uStack_37c = uVar83;
        auStack_374._4_8_ = dVar90;
        _local_378 = puVar35;
        FUN_1448052ee(local_388,local_268);
        iVar26 = (int)param_1[0x33];
        lVar50 = (longlong)iVar26;
        *(int *)(param_1 + 0x33) = iVar26 + 3;
        if ((uint)(*(int *)((longlong)param_1 + 0x19c) - iVar26) < 3) {
          FUN_14475e4ac(plVar49,iVar26);
        }
        *(float *)(*plVar49 + lVar50 * 4) = (float)(double)local_268[2];
        *(float *)(*plVar49 + 4 + lVar50 * 4) = (float)(double)local_268[0];
        *(float *)(*plVar49 + 8 + lVar50 * 4) = (float)(double)local_268[1];
      }
      iVar26 = (int)param_1[0x2b];
      *(uint *)(param_1 + 0x2b) = iVar26 + 1U;
      if (*(uint *)((longlong)param_1 + 0x15c) < iVar26 + 1U) {
        FUN_144a2c682(plVar47,iVar26);
      }
      lVar50 = *plVar47;
      lVar34 = (longlong)iVar26 * 0x60;
      auVar8._8_4_ = SUB84(dVar92,0);
      auVar8._0_8_ = dVar91;
      auVar8._12_4_ = uVar83;
      *(undefined1 (*) [16])(lVar50 + lVar34) = auVar8;
      puVar36 = (undefined8 *)(lVar50 + 0x10 + lVar34);
      *puVar36 = puVar35;
      puVar36[1] = dVar90;
      auVar11._8_4_ = SUB84(dVar55,0);
      auVar11._0_8_ = dVar69;
      auVar11._12_4_ = uVar85;
      *(undefined1 (*) [16])(lVar50 + 0x20 + lVar34) = auVar11;
      auVar12._8_4_ = SUB84(dVar62,0);
      auVar12._0_8_ = dVar54;
      auVar12._12_4_ = (int)((ulonglong)dVar62 >> 0x20);
      *(undefined1 (*) [16])(lVar50 + 0x30 + lVar34) = auVar12;
      auVar15._8_8_ = dStack_1a0;
      auVar15._0_8_ = local_1a8;
      plVar3 = (longlong *)(lVar50 + 0x40 + lVar34);
      *plVar3 = (longlong)local_1b8;
      plVar3[1] = (longlong)puStack_1b0;
      *(undefined1 (*) [16])(lVar50 + 0x50 + lVar34) = auVar15;
      piVar51 = piVar51 + 4;
      lVar38 = lVar38 + -0x10;
    } while (lVar38 != 0);
    param_2 = local_3d0;
    if (bVar52) {
      *(int *)(param_1 + 0x20) = (int)param_1[0x18] * 3;
      *(undefined4 *)(param_1 + 0x29) = 0;
      if (*(int *)((longlong)param_1 + 0x14c) < 0) {
        FUN_1474dae4c(param_1 + 0x28);
      }
      plVar47 = param_1 + 0x34;
      iVar26 = *(int *)((longlong)param_1 + 0x1ac);
      local_390 = param_1 + 0x28;
      FUN_140d46ec5(param_1[0x34]);
      *(undefined4 *)(param_1 + 0x35) = 0;
      iVar27 = *(int *)((longlong)param_1 + 0x1ac);
      local_3b8 = plVar47;
      if (iVar26 < 0) {
        if (iVar27 == 0) {
          iVar27 = 0;
          iVar26 = 0;
        }
        else {
          FUN_1474dae1c(plVar47);
          iVar26 = (int)param_1[0x35];
          iVar27 = *(int *)((longlong)param_1 + 0x1ac);
        }
      }
      else {
        iVar26 = 0;
      }
      uVar30 = *(uint *)(param_1 + 0x1f);
      *(uint *)(param_1 + 0x35) = uVar30 + iVar26;
      if ((uint)(iVar27 - iVar26) < uVar30) {
        FUN_1417985a0(plVar47);
      }
      memset((void *)((longlong)iVar26 * 0xa0 + param_1[0x34]),0,(longlong)(int)uVar30 * 0xa0);
      if (0 < (int)param_1[0x1f]) {
        puVar35 = (ulonglong *)0x0;
        do {
          puVar40 = (ulonglong *)((longlong)puVar35 * 0xa0 + param_1[0x34]);
          plVar47 = (longlong *)((longlong)puVar35 * 200 + param_1[0x1e]);
          local_3b0 = puVar35;
          if (0 < (int)param_1[0x18]) {
            lVar38 = 0xc;
            lVar34 = 0;
            lVar50 = 0;
            dVar62 = uStack_3c0;
            do {
              if (lVar50 < (int)plVar47[1]) {
                auVar60._4_4_ = DAT_14c846480._4_4_;
                auVar60._0_4_ = (undefined4)DAT_14c846480;
                auVar60._8_4_ = (undefined4)DAT_14c846488;
                auVar60._12_4_ = DAT_14c846488._4_4_;
                auVar94._8_8_ = DAT_14c8464c8;
                auVar94._0_8_ = DAT_14c8464c0;
                cVar24 = (char)param_1[0x1b];
                uVar83 = SUB84(DAT_14c8464d0,0);
                uVar85 = (undefined4)((ulonglong)DAT_14c8464d0 >> 0x20);
                uVar86 = SUB84(dRam000000014c8464d8,0);
                uVar87 = (undefined4)((ulonglong)dRam000000014c8464d8 >> 0x20);
                uVar84 = (undefined4)DAT_14c846480;
                uVar30 = DAT_14c846480._4_4_;
                uVar95 = (undefined4)DAT_14c846488;
                uVar29 = DAT_14c846488._4_4_;
                dVar69 = DAT_14c8464a0;
                dVar55 = DAT_14c8464a8;
                dVar54 = DAT_14c8464b0;
                puVar79 = DAT_14c846490;
                uStack_3c0 = DAT_14c846498;
                if (((local_3d8 != (ulonglong *)0x0) && (cVar24 != '\0')) &&
                   ((puVar35 = (ulonglong *)param_1[0x17],
                    (~*(uint *)((longlong)puVar35 + lVar38 + -4) & 0x7fffffff) != 0 &&
                    (piVar51 = (int *)((longlong)puVar35 + lVar38),
                    puVar35 = (ulonglong *)(longlong)*piVar51, *piVar51 < (int)local_3d8[1])))) {
                  if (local_3d8[0x1d] == 0) {
                    puVar35 = (ulonglong *)
                              ((ulonglong)
                               ((uint)*(ushort *)(*local_3d8 + (longlong)puVar35 * 2) * 0x60) +
                              *(longlong *)(local_3d8[9] + 0x30));
                  }
                  else {
                    puVar35 = (ulonglong *)
                              ((longlong)puVar35 * 0x60 + *(longlong *)(local_3d8[0x1d] + 0x10));
                  }
                  auVar94 = *(undefined1 (*) [16])(puVar35 + 8);
                  uVar83 = (undefined4)puVar35[10];
                  uVar85 = *(undefined4 *)((longlong)puVar35 + 0x54);
                  uVar86 = (undefined4)puVar35[0xb];
                  uVar87 = *(undefined4 *)((longlong)puVar35 + 0x5c);
                  uVar84 = (int)*puVar35;
                  uVar30 = *(uint *)((longlong)puVar35 + 4);
                  uVar95 = (int)puVar35[1];
                  uVar29 = *(uint *)((longlong)puVar35 + 0xc);
                  dVar69 = (double)puVar35[4];
                  dVar55 = (double)puVar35[5];
                  dVar54 = (double)puVar35[6];
                  puVar79 = (ulonglong *)puVar35[2];
                  uStack_3c0 = (double)puVar35[3];
                }
                uVar31 = SUB84(puVar35,0);
                lVar33 = *plVar47;
                if ((char)param_1[0x27] == '\x01') {
                  if (cVar24 == '\0') {
                    puVar36 = (undefined8 *)(lVar33 + lVar34);
                  }
                  else {
                    dVar91 = ABS(auVar94._0_8_);
                    dVar92 = ABS(auVar94._8_8_);
                    lVar42 = -(ulonglong)(9.99999993922529e-09 < dVar92);
                    auVar9._8_4_ = (int)lVar42;
                    auVar9._0_8_ = -(ulonglong)(9.99999993922529e-09 < dVar91);
                    auVar9._12_4_ = (int)((ulonglong)lVar42 >> 0x20);
                    iVar26 = movmskpd((int)CONCAT71((int7)(int3)((uint)(int)plVar47[1] >> 8),cVar24)
                                      ,auVar9);
                    lVar42 = -(ulonglong)
                              (9.99999993922529e-09 < ABS((double)CONCAT44(uVar87,uVar86)));
                    auVar10._8_4_ = (int)lVar42;
                    auVar10._0_8_ =
                         -(ulonglong)(9.99999993922529e-09 < ABS((double)CONCAT44(uVar85,uVar83)));
                    auVar10._12_4_ = (int)((ulonglong)lVar42 >> 0x20);
                    uVar32 = movmskpd(uVar31,auVar10);
                    if ((uVar32 & 0x3fffffff) == 0 && iVar26 == 0) {
                      puVar79 = DAT_14c846490;
                      uStack_3c0 = DAT_14c846498;
                      pdVar46 = DAT_14c8464c0;
                      puVar82 = DAT_14c8464c8;
                      uVar84 = (undefined4)DAT_14c846480;
                      uVar29 = DAT_14c846480._4_4_;
                      dVar69 = auVar60._8_8_;
                      dVar91 = DAT_14c8464a0;
                      dVar55 = DAT_14c8464a8;
                      dVar54 = DAT_14c8464b0;
                      pdVar41 = DAT_14c8464d0;
                    }
                    else {
                      auVar56 = divpd(_DAT_149934d80,auVar94);
                      auVar7._4_4_ = uVar85;
                      auVar7._0_4_ = uVar83;
                      auVar7._8_4_ = uVar86;
                      auVar7._12_4_ = uVar87;
                      auVar64 = divpd(ZEXT816(0x3ff0000000000000),auVar7);
                      pdVar46 = (double *)
                                (-(ulonglong)(9.99999993922529e-09 < dVar91) & auVar56._0_8_);
                      puVar82 = (undefined1 *)
                                (-(ulonglong)(9.99999993922529e-09 < dVar92) & auVar56._8_8_);
                      pdVar41 = (double *)
                                (-(ulonglong)
                                  (9.99999993922529e-09 < ABS((double)CONCAT44(uVar85,uVar83))) &
                                auVar64._0_8_);
                      auVar60._0_8_ = -(double)CONCAT44(uVar30,uVar84);
                      auVar60._8_8_ = -(double)CONCAT44(uVar29,uVar95);
                      puVar79 = (ulonglong *)((double)puVar79 * -1.0);
                      uStack_3c0 = uStack_3c0 * 1.0;
                      dVar69 = dVar69 * (double)pdVar46;
                      dVar55 = dVar55 * (double)puVar82;
                      dVar54 = dVar54 * (double)pdVar41;
                      uVar29 = (uint)((ulonglong)auVar60._0_8_ >> 0x20);
                      dVar92 = dVar55 * auVar60._0_8_ - auVar60._8_8_ * dVar69;
                      dVar90 = dVar54 * auVar60._8_8_ - (double)puVar79 * dVar55;
                      dVar88 = dVar69 * (double)puVar79 - auVar60._0_8_ * dVar54;
                      dVar90 = dVar90 + dVar90;
                      dVar88 = dVar88 + dVar88;
                      dVar92 = dVar92 + dVar92;
                      dVar91 = 0.0 - ((dVar92 * auVar60._8_8_ - dVar88 * (double)puVar79) +
                                     uStack_3c0 * dVar90 + dVar69);
                      dVar55 = 0.0 - (dVar92 * (double)CONCAT44(uVar30,uVar84) +
                                      (double)puVar79 * dVar90 + uStack_3c0 * dVar88 + dVar55);
                      dVar54 = 0.0 - (uStack_3c0 * dVar92 + dVar54 +
                                     (dVar88 * auVar60._0_8_ - dVar90 * auVar60._8_8_));
                      dVar69 = auVar60._8_8_;
                    }
                    dVar61 = *(double *)(lVar33 + lVar34) * (double)pdVar46;
                    dVar63 = ((double *)(lVar33 + lVar34))[1] * (double)puVar82;
                    dVar88 = *(double *)(lVar33 + 0x10 + lVar34) * (double)pdVar41;
                    dVar90 = dVar63 * auVar60._0_8_ - dVar69 * dVar61;
                    dVar53 = dVar88 * auVar60._8_8_ - (double)puVar79 * dVar63;
                    dVar92 = dVar61 * (double)puVar79 - (double)CONCAT44(uVar29,uVar84) * dVar88;
                    dVar53 = dVar53 + dVar53;
                    dVar92 = dVar92 + dVar92;
                    dVar90 = dVar90 + dVar90;
                    stack0xfffffffffffffc80 =
                         (longlong *)
                         (((double)puVar79 * dVar53 - (double)CONCAT44(uVar29,uVar84) * dVar90) +
                          uStack_3c0 * dVar92 + dVar63 + dVar55);
                    local_388._0_8_ =
                         (dVar90 * auVar60._8_8_ - dVar92 * (double)puVar79) +
                         uStack_3c0 * dVar53 + dVar61 + dVar91;
                    _local_378 = (ulonglong *)
                                 (dVar90 * uStack_3c0 + dVar88 +
                                  (dVar92 * auVar60._0_8_ - dVar53 * dVar69) + dVar54);
                    puVar36 = (undefined8 *)local_388;
                  }
                  goto LAB_143286bca;
                }
                if (cVar24 == '\0') {
                  iVar26 = (int)puVar40[1];
                  local_3c8 = (ulonglong *)(longlong)iVar26;
                  *(int *)(puVar40 + 1) = iVar26 + 3;
                  if ((uint)(*(int *)((longlong)puVar40 + 0xc) - iVar26) < 3) {
                    FUN_14475e4ac(puVar40,local_3c8);
                  }
                  *(float *)(*puVar40 + (longlong)local_3c8 * 4) =
                       (float)*(double *)(lVar33 + 0x28 + lVar34);
                  *(float *)(*puVar40 + 4 + (longlong)local_3c8 * 4) =
                       (float)*(double *)(lVar33 + 0x18 + lVar34);
                  *(float *)(*puVar40 + 8 + (longlong)local_3c8 * 4) =
                       (float)*(double *)(lVar33 + 0x20 + lVar34);
                  puVar35 = local_3c8;
                }
                else {
                  auVar56 = *(undefined1 (*) [16])(lVar33 + 0x18 + lVar34);
                  dVar62 = *(double *)(lVar33 + 0x28 + lVar34);
                  auVar64 = divpd(auVar56,_DAT_1499387d0);
                  auVar67._8_8_ = 0;
                  auVar67._0_8_ = dVar62;
                  auVar68 = divpd(auVar67,_DAT_1499387d0);
                  auVar64 = roundpd(auVar64,auVar64,3);
                  auVar68 = roundpd(auVar68,auVar68,3);
                  dVar69 = (auVar56._0_8_ - auVar64._0_8_ * (double)DAT_1499387d0) *
                           0.008726646259971648;
                  dVar55 = (auVar56._8_8_ - auVar64._8_8_ * DAT_1499387d0._8_8_) *
                           0.008726646259971648;
                  dVar91 = (dVar62 - auVar68._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
                  dVar92 = (0.0 - auVar68._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
                  local_3c8 = puVar79;
                  local_3a8 = (undefined8 *)sin(dVar69);
                  uStack_3a0 = extraout_XMM0_Qb;
                  dVar62 = sin(dVar55);
                  dVar54 = sin(dVar91);
                  sin(dVar92);
                  dVar69 = cos(dVar69);
                  dVar55 = cos(dVar55);
                  dVar91 = cos(dVar91);
                  cos(dVar92);
                  auVar58._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar94._8_8_));
                  auVar58._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar94._0_8_));
                  iVar26 = movmskpd(extraout_EAX,auVar58);
                  auVar59._8_8_ =
                       -(ulonglong)(9.99999993922529e-09 < ABS((double)CONCAT44(uVar87,uVar86)));
                  auVar59._0_8_ =
                       -(ulonglong)(9.99999993922529e-09 < ABS((double)CONCAT44(uVar85,uVar83)));
                  uVar32 = movmskpd(uVar31,auVar59);
                  if ((uVar32 & 0x3fffffff) == 0 && iVar26 == 0) {
                    uVar83 = 0;
                    uVar85 = 0xbff00000;
                    uVar86 = 0;
                    uVar87 = 0x3ff00000;
                    uVar84 = (undefined4)DAT_14c846480;
                    uVar30 = DAT_14c846480._4_4_;
                    uVar95 = (undefined4)DAT_14c846488;
                    uVar29 = DAT_14c846488._4_4_;
                    puVar35 = DAT_14c846490;
                    dVar92 = DAT_14c846498;
                  }
                  else {
                    uVar83 = (undefined4)DAT_149931160;
                    uVar85 = DAT_149931160._4_4_;
                    uVar86 = DAT_149931160._8_4_;
                    uVar87 = DAT_149931160._12_4_;
                    uVar30 = uVar30 ^ 0x80000000;
                    uVar29 = uVar29 ^ 0x80000000;
                    puVar35 = (ulonglong *)((double)local_3c8 * DAT_149931160);
                    dVar92 = uStack_3c0 * DAT_149931160._8_8_;
                  }
                  dVar90 = -(dVar55 * (double)local_3a8 * dVar54) + dVar62 * dVar69 * dVar91;
                  dVar88 = dVar62 * (double)local_3a8 * dVar54 + dVar55 * dVar69 * dVar91;
                  dVar53 = (double)local_3a8 * dVar62 * dVar91 - dVar69 * dVar55 * dVar54;
                  dVar62 = -((double)local_3a8 * dVar55 * dVar91) - dVar69 * dVar62 * dVar54;
                  _local_378 = (ulonglong *)
                               (dVar88 * (double)puVar35 * 1.0 +
                               (((double)CONCAT44(uVar30,uVar84) * dVar62 * 1.0 + dVar92 * dVar90) -
                               (double)CONCAT44(uVar29,uVar95) * dVar53));
                  auStack_374._4_8_ =
                       dVar90 * (double)puVar35 * -1.0 +
                       (((double)CONCAT44(uVar30,uVar84) * dVar53 * -1.0 + dVar92 * dVar88) -
                       (double)CONCAT44(uVar29,uVar95) * dVar62);
                  stack0xfffffffffffffc80 =
                       (longlong *)
                       (dVar53 * (double)puVar35 * (double)CONCAT44(uVar87,uVar86) +
                       dVar88 * (double)CONCAT44(uVar29,uVar95) +
                       dVar90 * (double)CONCAT44(uVar30,uVar84) * -1.0 + dVar62 * dVar92);
                  local_388._0_8_ =
                       dVar62 * (double)puVar35 * (double)CONCAT44(uVar85,uVar83) +
                       dVar90 * (double)CONCAT44(uVar29,uVar95) +
                       dVar88 * (double)CONCAT44(uVar30,uVar84) * 1.0 + dVar53 * dVar92;
                  puVar35 = (ulonglong *)local_388;
                  FUN_1448052ee(puVar35,local_268);
                  iVar26 = (int)puVar40[1];
                  lVar33 = (longlong)iVar26;
                  *(int *)(puVar40 + 1) = iVar26 + 3;
                  if ((uint)(*(int *)((longlong)puVar40 + 0xc) - iVar26) < 3) {
                    puVar35 = puVar40;
                    FUN_14475e4ac(puVar40,iVar26);
                  }
                  *(float *)(*puVar40 + lVar33 * 4) = (float)(double)local_268[2];
                  *(float *)(*puVar40 + 4 + lVar33 * 4) = (float)(double)local_268[0];
                  *(float *)(*puVar40 + 8 + lVar33 * 4) = (float)(double)local_268[1];
                }
              }
              else {
                puVar36 = &DAT_14c8464e0;
LAB_143286bca:
                puVar35 = puVar40;
                uStack_3c0 = dVar62;
                FUN_147506b32(puVar40,puVar36);
              }
              lVar50 = lVar50 + 1;
              lVar38 = lVar38 + 0x10;
              lVar34 = lVar34 + 0x30;
              dVar62 = uStack_3c0;
            } while (lVar50 < (int)param_1[0x18]);
          }
          *(int *)(puVar40 + 2) = (int)plVar47[5];
          *(undefined1 *)((longlong)puVar40 + 0x14) = *(undefined1 *)((longlong)plVar47 + 0x2e);
          *(int *)(puVar40 + 0x10) = (int)plVar47[0x13];
          *(undefined2 *)((longlong)puVar40 + 0x84) = *(undefined2 *)((longlong)plVar47 + 0x9c);
          FUN_14093c00e(puVar40 + 0x11,plVar47 + 0x14);
          *(undefined1 *)(puVar40 + 0x13) = *(undefined1 *)((longlong)plVar47 + 0x2c);
          *(undefined1 *)((longlong)puVar40 + 0x99) = *(undefined1 *)((longlong)plVar47 + 0x2d);
          puVar35 = (ulonglong *)((longlong)local_3b0 + 1);
        } while ((longlong)puVar35 < (longlong)(int)param_1[0x1f]);
      }
      plVar3 = local_3b8;
      param_2 = local_3d0;
      plVar47 = param_1 + 0x20;
      if (param_1[0x30] == 0) {
LAB_143286c6b:
        FUN_140eb6ad6(local_388,plVar47,plVar3);
        if (param_1 + 0x30 != (longlong *)local_388) {
          param_1[0x30] = local_388._0_8_;
          plVar1 = stack0xfffffffffffffc80;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = stack0xfffffffffffffc80;
          _local_388 = auVar16 << 0x40;
          plVar6 = (longlong *)param_1[0x31];
          if (plVar1 != plVar6) {
            _local_388 = ZEXT816(0);
            param_1[0x31] = (longlong)plVar1;
            if (plVar6 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar6 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plVar6)(plVar6);
                LOCK();
                piVar51 = (int *)((longlong)plVar6 + 0xc);
                *piVar51 = *piVar51 + -1;
                UNLOCK();
                if (*piVar51 == 0) {
                  (**(code **)(*plVar6 + 0x10))(plVar6);
                }
              }
            }
          }
        }
        plVar6 = stack0xfffffffffffffc80;
        if (stack0xfffffffffffffc80 != (longlong *)0x0) {
          LOCK();
          plVar1 = stack0xfffffffffffffc80 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*stack0xfffffffffffffc80)(stack0xfffffffffffffc80);
            LOCK();
            piVar51 = (int *)((longlong)plVar6 + 0xc);
            *piVar51 = *piVar51 + -1;
            UNLOCK();
            if (*piVar51 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
        }
      }
      else {
        cVar24 = FUN_144b1ef28(param_1[0x30],plVar47,local_3b8);
        if (cVar24 == '\0') goto LAB_143286c6b;
      }
      local_3e8 = local_390;
      FUN_1449fb2c0(param_1[0x30],plVar47,plVar3,plVar49);
      auVar56 = _local_378;
      lVar38 = (longlong)(int)param_1[0x29];
      if (0 < lVar38) {
        if (*(char *)((longlong)param_1 + 0x139) == '\x01') {
          FUN_140341844(param_2,local_190);
          _local_388 = ZEXT816(0);
          _local_378 = ZEXT716(local_378._1_7_) << 8;
          lVar38 = param_1[0x29];
          if ((longlong)(int)lVar38 == 0) goto LAB_14328752d;
          lVar50 = param_1[0x28];
          lVar34 = 0;
          do {
            lVar33 = param_1[0x1e];
            lVar42 = (longlong)*(int *)(lVar50 + lVar34) * 200;
            if (*(longlong *)(lVar33 + 0xb0 + lVar42) != 0) {
              uVar83 = local_388._8_4_;
              lVar48 = (longlong)(int)local_388._8_4_;
              uVar30 = local_388._8_4_ + 1;
              local_388._8_4_ = uVar30;
              if (uStack_37c < uVar30) {
                FUN_1406de67a(local_388,uVar83);
              }
              lVar48 = lVar48 * 0x10;
              uVar83 = *(undefined4 *)(lVar50 + 4 + lVar34);
              *(undefined8 *)(local_388._0_8_ + lVar48) = *(undefined8 *)(lVar42 + lVar33 + 0xb0);
              *(undefined4 *)(local_388._0_8_ + 8 + lVar48) = uVar83;
              *(undefined1 *)(local_388._0_8_ + 0xc + lVar48) = 0;
              auVar17[0xf] = 0;
              auVar17._0_15_ = stack0xfffffffffffffc89;
              _local_378 = auVar17 << 8;
            }
            puVar35 = local_3d0;
            lVar34 = lVar34 + 8;
          } while ((longlong)(int)lVar38 * 8 != lVar34);
          uVar83 = local_388._8_4_;
          if (local_388._8_4_ == 0) goto LAB_14328752d;
          uVar30 = (uint)local_3d0[8];
          if ((char)local_3d0[9] == '\0') {
            FUN_144716af1(local_3d0[7],uVar30);
            *(undefined1 *)(puVar35 + 9) = 1;
            if ((local_378[0] & 1) == 0) {
              goto LAB_143286f3c;
            }
          }
          else {
LAB_143286f3c:
            FUN_144716af1(local_388._0_8_,local_388._8_4_);
            local_378[0] = 1;
          }
          uVar29 = uVar30;
          if ((int)uVar30 < (int)uVar83) {
            uVar29 = uVar83;
          }
          iVar26 = (int)uVar29 / 2 + uVar29;
          if (iVar26 < 0) {
LAB_143287915:
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(iVar26);
          }
          local_3d8 = puVar35 + 7;
          if (*(int *)((longlong)puVar35 + 0x44) < iVar26) {
            FUN_14480ffb8(local_3d8);
          }
          uVar29 = 0;
          if ((int)uVar83 < 1 || uVar30 != 0) {
            uVar43 = 1;
            iVar26 = 0;
            lVar50 = 0;
            lVar38 = 0;
            uVar29 = 0;
            do {
              puVar40 = local_3d0;
              puVar35 = local_3d8;
              if ((uVar29 == uVar83) && ((longlong)(uVar43 - 1) <= (longlong)(int)uVar30))
              goto LAB_14328752d;
              uVar39 = *local_3d8;
              puVar36 = (undefined8 *)(local_388._0_8_ + (longlong)(int)uVar29 * 0x10);
              lVar34 = *(longlong *)(local_388._0_8_ + (longlong)(int)uVar29 * 0x10);
              lVar33 = *(longlong *)(uVar39 + lVar50);
              if (lVar33 == lVar34) {
                lVar34 = uVar39 + lVar38 * 0x10;
LAB_1432871f7:
                *(undefined4 *)(lVar34 + 8) = *(undefined4 *)(puVar36 + 1);
                *(byte *)(lVar34 + 0xc) =
                     *(byte *)(lVar34 + 0xc) | *(byte *)((longlong)puVar36 + 0xc);
                uVar29 = uVar29 + 1;
              }
              else {
                iVar27 = (int)lVar33 - (int)lVar34;
                if (iVar27 == 0) {
                  iVar27 = (int)((ulonglong)lVar33 >> 0x20) - (int)((ulonglong)lVar34 >> 0x20);
                }
                if (-1 < iVar27) {
                  local_3c8 = (ulonglong *)CONCAT44(local_3c8._4_4_,uVar29);
                  iVar27 = (int)local_3d0[8];
                  *(int *)(local_3d0 + 8) = iVar27 + 1;
                  local_3a8 = puVar36;
                  if (*(int *)((longlong)local_3d0 + 0x44) == iVar27) {
                    FUN_1406de67a(local_3d8,iVar27);
                    uVar39 = *puVar35;
                  }
                  memmove((void *)(uVar39 + lVar50 + 0x10),(void *)(uVar39 + lVar50),
                          (ulonglong)(uint)(iVar27 + iVar26) << 4);
                  uVar39 = puVar40[7];
                  lVar34 = uVar39 + lVar50;
                  FUN_14470c6f4(lVar34,1);
                  uVar30 = (uint)puVar40[8];
                  *(undefined8 *)(uVar39 + lVar50) = *local_3a8;
                  puVar36 = local_3a8;
                  uVar29 = (uint)local_3c8;
                  goto LAB_1432871f7;
                }
              }
              lVar38 = lVar38 + 1;
              bVar52 = uVar43 != uVar30;
              uVar43 = uVar43 + 1;
              lVar50 = lVar50 + 0x10;
              iVar26 = iVar26 + -1;
            } while (bVar52 || (int)uVar83 <= (int)uVar29);
          }
          iVar26 = (uVar83 - uVar29) + (int)local_3d0[8];
          if (iVar26 < 0) goto LAB_143287915;
          if (*(int *)((longlong)local_3d0 + 0x44) < iVar26) {
            FUN_14480ffb8(local_3d8);
          }
          iVar26 = uVar83 - uVar29;
          if (iVar26 != 0 && (int)uVar29 <= (int)uVar83) {
            uVar43 = (longlong)(int)uVar29 << 4 | 0xc;
            do {
              uVar28 = local_388._0_8_;
              iVar27 = (int)local_3d0[8];
              *(uint *)(local_3d0 + 8) = iVar27 + 1U;
              if (*(uint *)((longlong)local_3d0 + 0x44) < iVar27 + 1U) {
                FUN_1406de67a(local_3d8,iVar27);
              }
              uVar39 = *local_3d8;
              lVar38 = (longlong)iVar27 * 0x10;
              FUN_14470c6f4(uVar39 + lVar38,1);
              *(undefined8 *)(uVar39 + lVar38) = *(undefined8 *)((uVar28 - 0xc) + uVar43);
              *(undefined4 *)(uVar39 + 8 + lVar38) = *(undefined4 *)((uVar28 - 4) + uVar43);
              pbVar4 = (byte *)(uVar39 + 0xc + lVar38);
              *pbVar4 = *pbVar4 | *(byte *)(uVar28 + uVar43);
              uVar43 = uVar43 + 0x10;
              iVar26 = iVar26 + -1;
            } while (iVar26 != 0);
          }
          goto LAB_14328752d;
        }
        if ((((((*(char *)((longlong)param_1 + 0x139) != '\0') ||
               (*(int *)((longlong)param_1 + 0x4c) == 0)) ||
              (uVar30 = *(uint *)(param_1 + 9), (int)uVar30 < 0)) ||
             ((DAT_14c9647dc <= (int)uVar30 ||
              (plVar49 = (longlong *)
                         ((ulonglong)((uVar30 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar30 >> 0x10) * 8)),
              plVar49 == (longlong *)0x0)))) ||
            (((int)plVar49[2] != *(int *)((longlong)param_1 + 0x4c) ||
             (((*(uint *)(plVar49 + 1) & 0x10200000) != 0 || (lVar50 = *plVar49, lVar50 == 0))))))
           || (*(longlong *)(lVar50 + 0x40) == 0)) goto LAB_14328751d;
        if ((int)param_1[0xf] < 1) {
LAB_14328724e:
          piVar37 = (int *)param_1[0x28];
          piVar51 = piVar37 + lVar38 * 2;
          do {
            lVar38 = (longlong)*(int *)(param_1[0x1e] + 0xbc + (longlong)*piVar37 * 200);
            if (lVar38 != -1) {
              *(int *)(param_1[0xe] + 0xc + lVar38 * 0x10) = piVar37[1];
            }
            piVar37 = piVar37 + 2;
          } while (piVar37 != piVar51);
        }
        else {
          lVar38 = 0xc;
          lVar34 = 0;
          do {
            *(undefined4 *)(param_1[0xe] + lVar38) = 0;
            lVar34 = lVar34 + 1;
            lVar38 = lVar38 + 0x10;
          } while (lVar34 < (int)param_1[0xf]);
          lVar38 = (longlong)(int)param_1[0x29];
          if (lVar38 != 0) goto LAB_14328724e;
        }
        stack0xfffffffffffffc80 = (longlong *)0x0;
        local_388._0_8_ = *param_2;
        local_378[0] = 1;
        auVar64 = _local_378;
        auStack_374._8_4_ = auVar56._12_4_;
        local_378 = auVar64._0_4_;
        auStack_374._0_8_ = 0xffffffffffffffff;
        local_368 = 0.0;
        dStack_360 = 0.0;
        local_358 = 0.0;
        uStack_350 = 0;
        uStack_34f = 0;
        local_348 = 0;
        uStack_347 = 0;
        uStack_340 = 0;
        local_338 = (double *)0x0;
        dStack_330 = 0.0;
        local_328 = 0;
        lStack_320 = 0;
        local_318 = 0;
        lStack_310 = 0;
        local_308 = 0;
        lStack_300 = 0;
        local_2f8 = 0;
        local_2f0 = (undefined1)param_2[0x13];
        FUN_1447ce2ce(local_388);
        auVar56 = _local_378;
        auStack_374._0_4_ = *(undefined4 *)((longlong)param_2 + 0x14);
        auStack_374._8_4_ = auVar56._12_4_;
        auStack_374._4_4_ = (int)param_2[3];
        local_268[0] = &local_368;
        local_268[1] = (double *)&uStack_350;
        local_268[2] = &dStack_330;
        cVar24 = FUN_1433eeed2(lVar50,local_268,param_1 + 10);
        if (cVar24 != '\0') {
          if (*(int *)((longlong)param_1 + 0x4c) == 0) {
LAB_14328786a:
            plVar49 = (longlong *)0x0;
          }
          else {
            uVar30 = *(uint *)(param_1 + 9);
            plVar49 = (longlong *)0x0;
            if ((-1 < (int)uVar30) && ((int)uVar30 < DAT_14c9647dc)) {
              puVar36 = (undefined8 *)
                        ((ulonglong)((uVar30 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar30 >> 0x10) * 8));
              if ((puVar36 == (undefined8 *)0x0) ||
                 ((*(int *)(puVar36 + 2) != *(int *)((longlong)param_1 + 0x4c) ||
                  ((*(uint *)(puVar36 + 1) & 0x10200000) != 0)))) goto LAB_14328786a;
              plVar49 = (longlong *)*puVar36;
            }
          }
          cVar24 = (**(code **)(*plVar49 + 0x2c0))();
          uVar23 = DAT_14c8464f0;
          uVar22 = DAT_14c8464e8;
          uVar21 = DAT_14c8464e0;
          uVar20 = DAT_14c8463e8;
          uVar19 = DAT_14c8463e0;
          uVar18 = DAT_14c8463d8;
          uVar28 = DAT_14c8463d0;
          if (cVar24 == '\0') {
            local_2c8[0] = &local_170;
            local_2c8[1] = (longlong *)&uStack_158;
            local_2c8[2] = &lStack_138;
            local_208 = param_2 + 4;
            puStack_200 = param_2 + 7;
            local_1f8 = param_2 + 0xb;
            FUN_1403d2b4e(local_2c8,local_268,param_1 + 0x13);
          }
          else {
            if ((longlong)(int)param_1[0x18] != 0) {
              piVar51 = (int *)(param_1[0x17] + 0xc);
              lVar38 = (longlong)(int)param_1[0x18] << 4;
              do {
                uVar30 = piVar51[-1];
                piVar37 = piVar51;
                if ((int)uVar30 < 0) {
                  iVar26 = -1;
                  param_2 = local_3d0;
                  if ((((~uVar30 & 0x7fffffff) != 0) &&
                      (uVar30 = (int)(uVar30 * 2) >> 1, -1 < (int)uVar30)) &&
                     ((int)uVar30 < (int)local_3d8[0x11])) {
                    piVar37 = (int *)((ulonglong)uVar30 * 4 + local_3d8[0x10]);
                    goto LAB_143287400;
                  }
                }
                else {
LAB_143287400:
                  iVar26 = *piVar37;
                }
                lVar50 = (longlong)iVar26 * 0x60;
                *(undefined8 *)((longlong)local_368 + lVar50) = uVar28;
                ((undefined8 *)((longlong)local_368 + lVar50))[1] = uVar18;
                puVar36 = (undefined8 *)((longlong)local_368 + 0x10 + lVar50);
                *puVar36 = uVar19;
                puVar36[1] = uVar20;
                puVar36 = (undefined8 *)((longlong)local_368 + 0x20 + lVar50);
                *puVar36 = uVar21;
                puVar36[1] = uVar22;
                puVar36 = (undefined8 *)((longlong)local_368 + 0x30 + lVar50);
                *puVar36 = uVar23;
                puVar36[1] = 0;
                puVar36 = (undefined8 *)((longlong)local_368 + 0x40 + lVar50);
                *puVar36 = uVar21;
                puVar36[1] = uVar22;
                puVar36 = (undefined8 *)((longlong)local_368 + 0x50 + lVar50);
                *puVar36 = uVar23;
                puVar36[1] = 0;
                piVar51 = piVar51 + 4;
                lVar38 = lVar38 + -0x10;
              } while (lVar38 != 0);
            }
            if (((char)param_1[0x2c] != '\0') &&
               (lVar38 = param_1[0x2e], (longlong)(int)lVar38 != 0)) {
              lVar50 = param_1[0x2d];
              lVar34 = 0;
              do {
                lVar33 = (longlong)*(int *)(lVar50 + lVar34) * 0x60;
                *(undefined8 *)((longlong)local_368 + lVar33) = uVar28;
                ((undefined8 *)((longlong)local_368 + lVar33))[1] = uVar18;
                puVar36 = (undefined8 *)((longlong)local_368 + 0x10 + lVar33);
                *puVar36 = uVar19;
                puVar36[1] = uVar20;
                puVar36 = (undefined8 *)((longlong)local_368 + 0x20 + lVar33);
                *puVar36 = uVar21;
                puVar36[1] = uVar22;
                puVar36 = (undefined8 *)((longlong)local_368 + 0x30 + lVar33);
                *puVar36 = uVar23;
                puVar36[1] = 0;
                puVar36 = (undefined8 *)((longlong)local_368 + 0x40 + lVar33);
                *puVar36 = uVar21;
                puVar36[1] = uVar22;
                puVar36 = (undefined8 *)((longlong)local_368 + 0x50 + lVar33);
                *puVar36 = uVar23;
                puVar36[1] = 0;
                lVar34 = lVar34 + 4;
              } while ((longlong)(int)lVar38 * 4 != lVar34);
            }
            FUN_140341844(param_2,local_190);
            FUN_1400bcc9a(param_2 + 4,local_268[0],0x3f800000);
            FUN_144716836(param_2 + 7,local_268[1],0x3f800000);
            FUN_140035fa4(local_268[2],param_2 + 0xb,0x3f800000,1);
            FUN_142400cf0(param_2[4],(int)param_2[5]);
          }
          if (lStack_300 != 0) {
            FUN_1400020a8();
          }
          FUN_144716785(lStack_310,local_308 & 0xffffffff);
          if (lStack_310 != 0) {
            FUN_1400020a8();
          }
          FUN_144716758(lStack_320,local_318 & 0xffffffff);
          if (lStack_320 != 0) {
            FUN_1400020a8();
          }
          FUN_144716727(dStack_330,local_328 & 0xffffffff);
          if (dStack_330 != 0.0) {
            FUN_1400020a8();
          }
          goto LAB_14328752d;
        }
        if (lStack_300 != 0) {
          FUN_1400020a8();
        }
        FUN_144716785(lStack_310,local_308 & 0xffffffff);
        if (lStack_310 != 0) {
          FUN_1400020a8();
        }
        FUN_144716758(lStack_320,local_318 & 0xffffffff);
        if (lStack_320 != 0) {
          FUN_1400020a8();
        }
        FUN_144716727(dStack_330,local_328 & 0xffffffff);
        if (dStack_330 != 0.0) {
          FUN_1400020a8();
        }
      }
    }
  }
LAB_14328751d:
  FUN_140341844(param_2,local_190);
LAB_14328752d:
  if (lStack_108 != 0) {
    FUN_1400020a8();
  }
  FUN_144716785(lStack_118,local_110 & 0xffffffff);
  if (lStack_118 != 0) {
    FUN_1400020a8();
  }
  FUN_144716758(lStack_128,local_120 & 0xffffffff);
  if (lStack_128 != 0) {
    FUN_1400020a8();
  }
  FUN_144716727(lStack_138,local_130 & 0xffffffff);
  if (lStack_138 != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_408) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143287a62 FUN_143287a62 body=55 status=ok
// SIG undefined FUN_143287a62(void)

void FUN_143287a62(void)

{
  undefined8 uVar1;
  
  if (DAT_14caaa3d8 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caaa3d8 = FUN_14171c317(FUN_1463315d8,uVar1,L"ESnapshotSourceMode");
  }
  return;
}



// FUNCTION 143287a9a FUN_143287a9a body=110 status=ok
// SIG undefined FUN_143287a9a(void)

void FUN_143287a9a(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x18))(plVar3,param_2);
      }
      lVar4 = lVar4 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar4);
  }
  plVar3 = *(longlong **)(param_1 + 0x70);
  if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143287af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x18))(plVar3,param_2);
    return;
  }
  return;
}



// FUNCTION 143287b08 FUN_143287b08 body=55 status=ok
// SIG undefined FUN_143287b08(void)

void FUN_143287b08(void)

{
  undefined8 uVar1;
  
  if (DAT_14caaa480 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caaa480 = FUN_14171c317(FUN_14633198c,uVar1,L"ESequenceEvalReinit");
  }
  return;
}



// FUNCTION 143287b78 FUN_143287b78 body=52 status=ok
// SIG undefined FUN_143287b78(void)

undefined1 FUN_143287b78(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x90) = param_2;
  return 1;
}



// FUNCTION 143287bce FUN_143287bce body=57 status=ok
// SIG undefined FUN_143287bce(void)

void FUN_143287bce(void)

{
  undefined8 uVar1;
  
  if (DAT_14caaa3a8 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caaa3a8 = FUN_140002ddd(FUN_146331511,uVar1,L"AnimNode_PoseDriver");
  }
  return;
}



// FUNCTION 143287dea FUN_143287dea body=326 status=ok
// SIG undefined FUN_143287dea(void)

undefined1 FUN_143287dea(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
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
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  byte bVar21;
  longlong lVar22;
  longlong lVar23;
  
  if (param_4 != 0) {
    lVar23 = 0x90;
    bVar21 = DAT_14c950c29;
    do {
      *(undefined2 *)(param_2 + -0x80 + lVar23) = *(undefined2 *)(param_3 + -0x80 + lVar23);
      *(undefined8 *)(param_2 + -0x88 + lVar23) = *(undefined8 *)(param_3 + -0x88 + lVar23);
      puVar1 = (undefined4 *)(param_3 + -0x78 + lVar23);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      puVar1 = (undefined4 *)(param_3 + -0x68 + lVar23);
      uVar9 = *puVar1;
      uVar10 = puVar1[1];
      uVar11 = puVar1[2];
      uVar12 = puVar1[3];
      puVar1 = (undefined4 *)(param_3 + -0x58 + lVar23);
      uVar13 = puVar1[1];
      uVar14 = puVar1[2];
      uVar15 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + -0x58 + lVar23);
      *puVar2 = *puVar1;
      puVar2[1] = uVar13;
      puVar2[2] = uVar14;
      puVar2[3] = uVar15;
      puVar1 = (undefined4 *)(param_2 + -0x68 + lVar23);
      *puVar1 = uVar9;
      puVar1[1] = uVar10;
      puVar1[2] = uVar11;
      puVar1[3] = uVar12;
      puVar1 = (undefined4 *)(param_2 + -0x78 + lVar23);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      *(undefined2 *)(param_2 + -0x40 + lVar23) = *(undefined2 *)(param_3 + -0x40 + lVar23);
      *(undefined8 *)(param_2 + -0x48 + lVar23) = *(undefined8 *)(param_3 + -0x48 + lVar23);
      lVar22 = *(longlong *)(param_3 + -0x38 + lVar23);
      if ((bVar21 & 1) != 0) {
        if (lVar22 == 0) {
          lVar22 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar22 = *(longlong *)(param_3 + -0x38 + lVar23);
          bVar21 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + -0x38 + lVar23) = lVar22;
      lVar22 = *(longlong *)(param_3 + -0x30 + lVar23);
      if ((bVar21 & 1) != 0) {
        if (lVar22 == 0) {
          lVar22 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar22 = *(longlong *)(param_3 + -0x30 + lVar23);
          bVar21 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + -0x30 + lVar23) = lVar22;
      puVar3 = (undefined8 *)(param_3 + -0x28 + lVar23);
      uVar16 = puVar3[1];
      puVar4 = (undefined8 *)(param_3 + -0x18 + lVar23);
      uVar17 = *puVar4;
      uVar18 = puVar4[1];
      puVar4 = (undefined8 *)(param_2 + -0x28 + lVar23);
      *puVar4 = *puVar3;
      puVar4[1] = uVar16;
      puVar3 = (undefined8 *)(param_2 + -0x18 + lVar23);
      *puVar3 = uVar17;
      puVar3[1] = uVar18;
      *(undefined4 *)(param_2 + -8 + lVar23) = *(undefined4 *)(param_3 + -8 + lVar23);
      uVar16 = ((undefined8 *)(param_3 + lVar23))[1];
      puVar3 = (undefined8 *)(param_3 + 0x10 + lVar23);
      uVar17 = *puVar3;
      uVar18 = puVar3[1];
      puVar3 = (undefined8 *)(param_3 + 0x20 + lVar23);
      uVar19 = *puVar3;
      uVar20 = puVar3[1];
      puVar1 = (undefined4 *)(param_3 + 0x2f + lVar23);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      *(undefined8 *)(param_2 + lVar23) = *(undefined8 *)(param_3 + lVar23);
      ((undefined8 *)(param_2 + lVar23))[1] = uVar16;
      puVar3 = (undefined8 *)(param_2 + 0x10 + lVar23);
      *puVar3 = uVar17;
      puVar3[1] = uVar18;
      puVar3 = (undefined8 *)(param_2 + 0x20 + lVar23);
      *puVar3 = uVar19;
      puVar3[1] = uVar20;
      puVar1 = (undefined4 *)(param_2 + 0x2f + lVar23);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      lVar23 = lVar23 + 0xd0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14328827e FUN_14328827e body=91 status=ok
// SIG undefined FUN_14328827e(void)

void FUN_14328827e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a42d4a0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14328834a FUN_14328834a body=87 status=ok
// SIG undefined FUN_14328834a(void)

void FUN_14328834a(undefined8 *param_1)

{
  param_1[1] = 0;
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfc;
  *(undefined1 *)((longlong)param_1 + 0x11) = 0;
  *(undefined4 *)(param_1 + 3) = 0xfffffffe;
  *(undefined4 *)(param_1 + 4) = 0xfffffffe;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *param_1 = &PTR_FUN_14a42da70;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4f) = 0;
  param_1[9] = 0;
  *(undefined2 *)((longlong)param_1 + 0x6c) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x6e) = 2;
  *(undefined4 *)(param_1 + 0xe) = 0;
  return;
}



// FUNCTION 1432883a2 FUN_1432883a2 body=49 status=ok
// SIG undefined FUN_1432883a2(void)

undefined1 FUN_1432883a2(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x58) = param_2;
  return 1;
}



// FUNCTION 1432883f0 FUN_1432883f0 body=917 status=ok
// SIG undefined FUN_1432883f0(void)

void FUN_1432883f0(undefined8 param_1,undefined8 *param_2)

{
  byte *pbVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  param_2[1] = 0;
  *(byte *)(param_2 + 2) = *(byte *)(param_2 + 2) & 0xfc;
  *(undefined1 *)((longlong)param_2 + 0x11) = 0;
  *param_2 = &PTR_FUN_14a4263e0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 4) = 0xffffffff;
  param_2[5] = DAT_14cacd6f8;
  *(undefined1 *)(param_2 + 6) = 0;
  *(undefined8 *)((longlong)param_2 + 0x34) = 0;
  *(undefined4 *)((longlong)param_2 + 0x3c) = 0;
  param_2[8] = 0xffffffffffffffff;
  *(undefined4 *)(param_2 + 9) = 0xffff;
  param_2[0xb] = 0;
  *(byte *)(param_2 + 0xc) = *(byte *)(param_2 + 0xc) & 0xfc;
  *(undefined1 *)((longlong)param_2 + 0x61) = 0;
  *(undefined1 *)(param_2 + 0xd) = 1;
  *(undefined4 *)((longlong)param_2 + 0x84) = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  *(undefined1 *)(param_2 + 0x10) = 0;
  param_2[0x11] = 0xffffffffffffffff;
  *(undefined4 *)(param_2 + 0x12) = 0xffff;
  *(undefined1 *)((longlong)param_2 + 0xb4) = 0;
  *(undefined1 *)(param_2 + 0x29) = 0;
  param_2[0x2e] = 0;
  *(undefined4 *)(param_2 + 0x2f) = 0;
  param_2[0x15] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  *(undefined4 *)((longlong)param_2 + 0x17c) = 8;
  param_2[10] = &PTR_FUN_14a427a60;
  param_2[0x30] = 0;
  *(undefined4 *)(param_2 + 0x31) = 0;
  *(undefined4 *)(param_2 + 0x32) = 0;
  lVar3 = 0x37f;
  do {
    *(undefined8 *)((longlong)param_2 + lVar3 + -0x1df) = 0;
    pbVar1 = (byte *)((longlong)param_2 + lVar3 + -0x1d7);
    *pbVar1 = *pbVar1 & 0xfc;
    *(undefined1 *)((longlong)param_2 + lVar3 + -0x1d6) = 0;
    *(undefined ***)((longlong)param_2 + lVar3 + -0x1e7) = &PTR_FUN_14a427bc0;
    *(undefined8 *)((longlong)param_2 + lVar3 + -0x1cf) = 0x3f80000000000000;
    *(undefined4 *)((longlong)param_2 + lVar3 + -0x1c7) = 0x3dcccccd;
    *(undefined1 *)((longlong)param_2 + lVar3 + -0x1c3) = 0;
    puVar2 = (undefined8 *)((longlong)param_2 + lVar3 + -0x1bf);
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined1 *)((longlong)param_2 + lVar3 + -0x1af) = 0;
    *(undefined2 *)((longlong)param_2 + lVar3 + -0x1a7) = 0x300;
    *(undefined1 *)((longlong)param_2 + lVar3 + -0x1a5) = 0;
    *(undefined8 *)((longlong)param_2 + lVar3 + -0x197) = 0;
    pbVar1 = (byte *)((longlong)param_2 + lVar3 + -399);
    *pbVar1 = *pbVar1 & 0xfc;
    *(undefined1 *)((longlong)param_2 + lVar3 + -0x18e) = 0;
    *(undefined4 *)((longlong)param_2 + lVar3 + -0x187) = 0xfffffffe;
    *(undefined4 *)((longlong)param_2 + lVar3 + -0x17f) = 0xfffffffe;
    *(undefined1 *)((longlong)param_2 + lVar3 + -0x163) = 0;
    *(undefined1 *)((longlong)param_2 + lVar3 + -0x167) = 0;
    puVar2 = (undefined8 *)((longlong)param_2 + lVar3 + -0x177);
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined4 *)((longlong)param_2 + lVar3 + -0x15f) = 0;
    *(undefined1 *)((longlong)param_2 + lVar3 + -0x15b) = 0;
    *(undefined8 *)((longlong)param_2 + lVar3 + -0x157) = 0;
    *(undefined4 *)((longlong)param_2 + lVar3 + -0x14f) = 0x100;
    *(undefined8 *)((longlong)param_2 + lVar3 + -0x147) = 0;
    *(undefined1 **)((longlong)param_2 + lVar3 + -0x13f) = &DAT_3f8000003f800000;
    *(undefined2 *)((longlong)param_2 + lVar3 + -0x137) = 0;
    *(undefined1 *)((longlong)param_2 + lVar3 + -0x135) = 0;
    puVar2 = (undefined8 *)((longlong)param_2 + lVar3 + -0x133);
    *puVar2 = 0x3f80000000000000;
    puVar2[1] = 0x3f80000000000000;
    puVar2 = (undefined8 *)((longlong)param_2 + lVar3 + -0x123);
    *puVar2 = 0x3f800000;
    puVar2[1] = 0x3f80000000000000;
    *(undefined8 *)((longlong)param_2 + lVar3 + -0x113) = 0x4120000041200000;
    *(undefined4 *)((longlong)param_2 + lVar3 + -0x10b) = 0;
    *(undefined2 *)((longlong)param_2 + lVar3 + -0x107) = 1;
    *(undefined ***)((longlong)param_2 + lVar3 + -0x19f) = &PTR_FUN_14a42cfe0;
    *(undefined8 *)((longlong)param_2 + lVar3 + -0xf7) = 0;
    pbVar1 = (byte *)((longlong)param_2 + lVar3 + -0xef);
    *pbVar1 = *pbVar1 & 0xfc;
    *(undefined1 *)((longlong)param_2 + lVar3 + -0xee) = 0;
    *(undefined4 *)((longlong)param_2 + lVar3 + -0xe7) = 0xfffffffe;
    *(undefined4 *)((longlong)param_2 + lVar3 + -0xdf) = 0xfffffffe;
    *(undefined1 *)((longlong)param_2 + lVar3 + -0xc3) = 0;
    *(undefined1 *)((longlong)param_2 + lVar3 + -199) = 0;
    puVar2 = (undefined8 *)((longlong)param_2 + lVar3 + -0xd7);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = (undefined8 *)((longlong)param_2 + lVar3 + -0xaf);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = (undefined8 *)((longlong)param_2 + lVar3 + -0xbf);
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined4 *)((longlong)param_2 + lVar3 + -0x9f) = 0xffffffff;
    puVar2 = (undefined8 *)((longlong)param_2 + lVar3 + -0x97);
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined ***)((longlong)param_2 + lVar3 + -0xff) = &PTR_FUN_14a42de10;
    *(undefined2 *)((longlong)param_2 + lVar3 + -0x87) = 0x100;
    *(undefined8 *)((longlong)param_2 + lVar3 + -0x85) = 0;
    *(undefined2 *)((longlong)param_2 + lVar3 + -0x7d) = 0;
    *(undefined4 *)((longlong)param_2 + lVar3 + -0x7b) = 0x3f800000;
    *(undefined2 *)((longlong)param_2 + lVar3 + -0x77) = 0x101;
    *(undefined4 *)((longlong)param_2 + lVar3 + -0x73) = 0;
    *(undefined8 *)((longlong)param_2 + lVar3 + -0x6f) = 0;
    *(undefined8 *)((longlong)param_2 + lVar3 + -0x5f) = 0;
    pbVar1 = (byte *)((longlong)param_2 + lVar3 + -0x57);
    *pbVar1 = *pbVar1 & 0xfc;
    *(undefined1 *)((longlong)param_2 + lVar3 + -0x56) = 0;
    *(undefined8 *)((longlong)param_2 + lVar3 + -0x4f) = 0;
    *(undefined4 *)((longlong)param_2 + lVar3 + -0x47) = 0xffffffff;
    *(undefined2 *)((longlong)param_2 + lVar3 + -0x3f) = 0;
    puVar2 = (undefined8 *)((longlong)param_2 + lVar3 + -0x27);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = (undefined8 *)((longlong)param_2 + lVar3 + -0x37);
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined ***)((longlong)param_2 + lVar3 + -0x67) = &PTR_FUN_14a4225a0;
    *(undefined1 *)((longlong)param_2 + lVar3 + -0x17) = 1;
    *(undefined8 *)((longlong)param_2 + lVar3 + -0xf) = 0;
    *(undefined8 *)((longlong)param_2 + lVar3 + -7) = 0x101010000000000;
    lVar3 = lVar3 + 0x1e8;
  } while (lVar3 != 0xd07);
  param_2[0x1bd] = 0;
  param_2[0x1be] = 0x400000000;
  param_2[0x164] = 0;
  param_2[0x165] = 0;
  param_2[0x166] = 0;
  param_2[0x167] = 0;
  *(undefined4 *)(param_2 + 0x168) = 0;
  param_2[0x1c3] = 0;
  param_2[0x1c4] = 0x400000000;
  param_2[0x1c9] = 0;
  param_2[0x1ca] = 0x400000000;
  param_2[0x1cb] = 0;
  param_2[0x1cc] = 0;
  param_2[0x1cd] = 0xffffffffffffffff;
  *(undefined4 *)(param_2 + 0x1ce) = 0xffff;
  return;
}



// FUNCTION 14328879a FUN_14328879a body=49 status=ok
// SIG undefined FUN_14328879a(void)

undefined1 FUN_14328879a(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x58) = param_2;
  return 1;
}



// FUNCTION 1432887de FUN_1432887de body=29 status=ok
// SIG undefined FUN_1432887de(void)

undefined8 FUN_1432887de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143288810 FUN_143288810 body=85 status=ok
// SIG undefined FUN_143288810(void)

void FUN_143288810(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a42d1e0;
  return;
}



// FUNCTION 143288866 FUN_143288866 body=85 status=ok
// SIG undefined FUN_143288866(void)

void FUN_143288866(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a42d1e0;
  return;
}



// FUNCTION 1432888bc FUN_1432888bc body=118 status=ok
// SIG undefined FUN_1432888bc(void)

void FUN_1432888bc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a42d1e0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143288923. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143288938 FUN_143288938 body=16 status=ok
// SIG undefined FUN_143288938(void)

undefined1 FUN_143288938(void)

{
  FUN_143288948();
  return 1;
}



// FUNCTION 143288948 FUN_143288948 body=3792 status=ok
// SIG undefined FUN_143288948(void)

void FUN_143288948(void)

{
  undefined4 *puVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  int iVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined2 *puVar13;
  ulonglong *puVar14;
  int iVar15;
  longlong *plVar16;
  longlong *plVar18;
  longlong lVar19;
  longlong *plVar20;
  longlong *plVar21;
  ulonglong uVar22;
  undefined2 *puVar23;
  uint uVar24;
  uint uVar25;
  ulonglong uVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  int iVar30;
  longlong *plVar31;
  float fVar32;
  undefined1 auStack_468 [40];
  undefined8 *local_440;
  ulonglong local_438;
  longlong *local_430;
  longlong local_428;
  undefined8 uStack_420;
  undefined1 local_414 [4];
  undefined2 *local_410;
  int local_408;
  ulonglong local_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3d8;
  undefined4 local_3d0;
  undefined8 local_3cc;
  undefined4 local_3c4;
  longlong local_3b8;
  undefined4 local_3b0;
  longlong local_3a8;
  undefined8 uStack_3a0;
  uint local_398 [4];
  uint *local_388;
  int local_380;
  undefined8 local_37c;
  int local_374;
  undefined1 local_370 [8];
  undefined1 *local_368;
  int local_360;
  undefined8 local_358;
  undefined8 uStack_350;
  uint local_348 [188];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  longlong *plVar17;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_468;
  local_388 = (uint *)0x0;
  local_380 = 0;
  local_3a8 = 0;
  uStack_3a0 = 0;
  local_37c = 0xffffffff00000080;
  local_374 = 0;
  local_368 = (undefined1 *)0x0;
  local_360 = 0;
  local_3d8 = 0;
  local_3d0 = 0;
  local_3f8 = 0;
  uStack_3f0 = 0;
  local_3cc = 0xffffffff00000080;
  local_3c4 = 0;
  local_3b8 = 0;
  local_3b0 = 0;
  FUN_1474d8894(&local_358);
  uVar22 = (ulonglong)local_348[0];
  if ((-1 < (int)local_348[0]) && ((int)local_348[0] < (int)uStack_350)) {
    do {
      puVar13 = *(undefined2 **)(*(longlong *)(local_358 + (uVar22 & 0xffffffff) * 8) + 0x10);
      if (puVar13 != (undefined2 *)0x0) {
        lVar6 = FUN_140993eba();
        if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(puVar13 + 8) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(puVar13 + 8) + 0x30) +
             (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
          local_410 = puVar13;
          FUN_1474d8900(&local_3f8,&local_58,&local_410);
          if ((longlong)*(int *)(puVar13 + 0x224) != 0) {
            plVar18 = *(longlong **)(puVar13 + 0x220);
            plVar20 = plVar18 + *(int *)(puVar13 + 0x224);
            do {
              uVar22 = *(ulonglong *)(*plVar18 + 0x70);
              if ((int)uStack_3a0 != local_374) {
                uVar25 = ((uint)(uVar22 >> 0x14) & 0xffff ^ (uint)(uVar22 >> 4)) * -0x7a143595;
                uVar25 = (uVar25 >> 0xd ^ uVar25) * -0x3d4d51cb;
                puVar9 = local_368;
                if (local_368 == (undefined1 *)0x0) {
                  puVar9 = local_370;
                }
                iVar12 = *(int *)(puVar9 + (ulonglong)(local_360 - 1U & (uVar25 >> 0x10 ^ uVar25)) *
                                           4);
                while (iVar12 != -1) {
                  puVar14 = (ulonglong *)(local_3a8 + (longlong)iVar12 * 0x18);
                  if (*puVar14 == uVar22) {
                    if ((puVar14 != (ulonglong *)0x0) &&
                       (puVar14 = puVar14 + 1, puVar14 != (ulonglong *)0x0)) {
                      *puVar14 = *puVar14 + 1;
                      goto LAB_143288ba7;
                    }
                    break;
                  }
                  iVar12 = (int)puVar14[2];
                }
              }
              local_428 = 1;
              local_400 = uVar22;
              local_58 = &local_400;
              uStack_50 = &local_428;
              FUN_1474d8dec(&local_3a8,local_414,&local_58);
LAB_143288ba7:
              plVar18 = plVar18 + 1;
            } while (plVar18 != plVar20);
          }
        }
      }
      uVar22 = (longlong)(int)local_348[0];
      do {
        uVar10 = uVar22;
        uVar22 = uVar10 + 1;
        local_348[0] = (uint)uVar22;
        if ((longlong)(int)uStack_350 <= (longlong)uVar22) break;
      } while (*(longlong *)(local_358 + uVar22 * 8) == 0);
    } while ((-2 < (longlong)uVar10) && ((int)(uint)uVar22 < (int)uStack_350));
  }
  if (local_358 != 0) {
    FUN_1400020a8();
  }
  local_428 = 0;
  uStack_420 = 0;
  iVar12 = (int)uStack_3a0 - local_374;
  if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar12);
  }
  if (iVar12 != 0) {
    FUN_1474d92e8(&local_428);
  }
  iVar12 = local_380;
  if (local_380 == 0) {
    uVar26 = 1;
    uVar22 = 0;
    iVar15 = 0;
    iVar30 = 0;
  }
  else {
    puVar7 = local_388;
    if (local_388 == (uint *)0x0) {
      puVar7 = local_398;
    }
    uVar25 = *puVar7;
    if (uVar25 == 0) {
      iVar15 = local_380 + 0x1e;
      if (-1 < local_380 + -1) {
        iVar15 = local_380 + -1;
      }
      uVar22 = 0;
      uVar10 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar10 = uVar22;
      }
      iVar15 = 0;
      do {
        if (uVar10 == uVar22) goto LAB_143288c82;
        iVar15 = iVar15 + 0x20;
        uVar25 = puVar7[uVar22 + 1];
        uVar22 = uVar22 + 1;
      } while (uVar25 == 0);
    }
    else {
      uVar22 = 0;
      iVar15 = 0;
    }
    uVar26 = (ulonglong)(-uVar25 & uVar25);
    uVar10 = uVar26 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar30 = (iVar15 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (local_380 <= iVar30) {
      iVar30 = local_380;
    }
  }
  if (iVar30 != local_380) {
    uVar25 = 0xffffffff;
    do {
      uVar10 = uStack_420;
      plVar20 = (longlong *)(local_3a8 + (longlong)iVar30 * 0x18);
      local_358 = *plVar20;
      uStack_350 = plVar20[1];
      lVar6 = (longlong)(int)uStack_420;
      uVar5 = (int)uStack_420 + 1;
      uStack_420 = CONCAT44(uStack_420._4_4_,uVar5);
      if (uStack_420._4_4_ < uVar5) {
        FUN_1474d9348(&local_428,uVar10 & 0xffffffff);
      }
      puVar1 = (undefined4 *)(local_428 + lVar6 * 0x10);
      *puVar1 = (undefined4)local_358;
      puVar1[1] = local_358._4_4_;
      puVar1[2] = (int)uStack_350;
      puVar1[3] = uStack_350._4_4_;
      uVar25 = uVar25 & ~(uint)uVar26;
      puVar7 = local_388;
      if (local_388 == (uint *)0x0) {
        puVar7 = local_398;
      }
      iVar30 = (int)uVar22;
      lVar6 = (longlong)iVar30;
      uVar5 = puVar7[lVar6] & uVar25;
      if (uVar5 == 0) {
        iVar8 = local_380 + 0x1e;
        if (-1 < local_380 + -1) {
          iVar8 = local_380 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar15 = iVar15 + 0x20;
        iVar28 = iVar8;
        if (iVar8 < iVar30) {
          iVar28 = iVar30;
        }
        if (iVar30 < iVar8) {
          lVar19 = 0;
          do {
            uVar5 = puVar7[lVar6 + lVar19 + 1];
            if (uVar5 != 0) {
              uVar22 = (ulonglong)(iVar30 + (int)lVar19 + 1);
              uVar25 = 0xffffffff;
              goto LAB_1432897ba;
            }
            iVar15 = iVar15 + 0x20;
            lVar19 = lVar19 + 1;
          } while (iVar28 - lVar6 != lVar19);
          uVar25 = 0xffffffff;
          iVar30 = iVar28;
        }
        uVar22 = (ulonglong)(iVar30 + 1);
        iVar30 = local_380;
      }
      else {
LAB_1432897ba:
        uVar26 = (ulonglong)(-uVar5 & uVar5);
        uVar10 = uVar26 * 2 + 1;
        lVar6 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        iVar30 = (iVar15 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
        if (local_380 <= iVar30) {
          iVar30 = local_380;
        }
      }
    } while (iVar30 != iVar12);
  }
LAB_143288c82:
  lVar6 = local_428;
  iVar12 = (int)uStack_420;
  lVar19 = (longlong)(int)uStack_420;
  if (1 < lVar19) {
    memset(local_348,0,0x2f0);
    local_358 = lVar6;
    uStack_350 = lVar19 * 0x10 + lVar6 + -0x10;
    fVar32 = logf((float)iVar12);
    local_348[0] = (uint)(longlong)(fVar32 + fVar32);
    puVar11 = &local_358;
    do {
      plVar18 = (longlong *)*puVar11;
      plVar20 = (longlong *)puVar11[1];
      iVar12 = *(int *)(puVar11 + 2);
      iVar15 = (int)((ulonglong)((longlong)plVar20 - (longlong)plVar18) >> 4);
      uVar25 = iVar15 + 1;
      local_440 = puVar11;
      if (iVar12 != 0) {
LAB_143288d1b:
        if (8 < (int)uVar25) {
          local_438 = CONCAT44(local_438._4_4_,iVar12);
          puVar13 = (undefined2 *)plVar18[(ulonglong)(uVar25 >> 1) * 2];
          lVar6 = (plVar18 + (ulonglong)(uVar25 >> 1) * 2)[1];
          lVar19 = plVar18[1];
          plVar18[(ulonglong)(uVar25 >> 1) * 2] = *plVar18;
          (plVar18 + (ulonglong)(uVar25 >> 1) * 2)[1] = lVar19;
          local_58._0_4_ = SUB84(puVar13,0);
          local_58._4_4_ = (undefined4)((ulonglong)puVar13 >> 0x20);
          uStack_50._0_4_ = (int)lVar6;
          uStack_50._4_4_ = (undefined4)((ulonglong)lVar6 >> 0x20);
          *(undefined4 *)plVar18 = (undefined4)local_58;
          *(undefined4 *)((longlong)plVar18 + 4) = local_58._4_4_;
          *(int *)(plVar18 + 1) = (int)uStack_50;
          *(undefined4 *)((longlong)plVar18 + 0xc) = uStack_50._4_4_;
          plVar31 = plVar20 + 2;
          plVar16 = plVar18;
          local_430 = plVar20;
          local_58 = (ulonglong *)puVar13;
          uStack_50 = (longlong *)lVar6;
LAB_143288d62:
          plVar17 = plVar16;
          plVar16 = plVar17 + 2;
          if (plVar16 <= plVar20) goto code_r0x000143288d6f;
          goto LAB_143288e3e;
        }
        for (; puVar11 = local_440, plVar16 = plVar18, plVar31 = plVar18, plVar18 < plVar20;
            plVar20 = plVar20 + -2) {
          while (plVar31 = plVar31 + 2, plVar31 <= plVar20) {
            lVar6 = *plVar16;
            local_410 = *(undefined2 **)(*plVar31 + 0x18);
            FUN_1400021e4(&local_410,&local_58);
            local_400 = *(ulonglong *)(lVar6 + 0x18);
            FUN_1400021e4(&local_400,&local_410);
            puVar14 = local_58;
            if ((int)uStack_50 == 0) {
              puVar14 = (ulonglong *)&DAT_149dfb77a;
            }
            puVar13 = local_410;
            if (local_408 == 0) {
              puVar13 = &DAT_149dfb77a;
            }
            lVar6 = 0;
            while( true ) {
              uVar2 = *(ushort *)((longlong)puVar13 + lVar6);
              uVar25 = (uint)uVar2;
              uVar3 = *(ushort *)((longlong)puVar14 + lVar6);
              uVar5 = (uint)uVar3;
              if (uVar2 != uVar3) {
                if ((uVar3 | uVar2) < 0x80) {
                  uVar25 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                  uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                  if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_1432895ad;
                }
                iVar12 = uVar25 - uVar5;
                goto LAB_1432895df;
              }
              if (uVar2 == 0) break;
LAB_1432895ad:
              lVar6 = lVar6 + 2;
            }
            iVar12 = 0;
LAB_1432895df:
            if (local_410 != (undefined2 *)0x0) {
              FUN_1400020a8(local_410);
            }
            if (local_58 != (ulonglong *)0x0) {
              FUN_1400020a8();
            }
            if (iVar12 < 0) {
              plVar16 = plVar31;
            }
          }
          local_58 = (ulonglong *)*plVar16;
          uStack_50 = (longlong *)plVar16[1];
          puVar14 = local_58;
          plVar31 = uStack_50;
          lVar6 = plVar20[1];
          *plVar16 = *plVar20;
          plVar16[1] = lVar6;
          local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
          uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
          *(undefined4 *)plVar20 = (undefined4)local_58;
          *(undefined4 *)((longlong)plVar20 + 4) = local_58._4_4_;
          *(int *)(plVar20 + 1) = (int)uStack_50;
          *(undefined4 *)((longlong)plVar20 + 0xc) = uStack_50._4_4_;
          local_58 = puVar14;
          uStack_50 = plVar31;
        }
        goto LAB_143289644;
      }
LAB_14328900b:
      puVar11 = local_440;
      if (uVar25 != 0) {
        uVar5 = (iVar15 - (iVar15 + -1 >> 0x1f)) + -1 >> 1;
        do {
          uVar22 = (ulonglong)uVar5;
          local_438 = uVar22;
          while (uVar24 = uVar5 * 2 + 1, (int)uVar24 < (int)uVar25) {
            uVar29 = uVar5 * 2 + 2;
            uVar5 = uVar24;
            if ((int)uVar29 < (int)uVar25) {
              lVar6 = plVar18[(longlong)(int)uVar29 * 2];
              local_410 = *(undefined2 **)(plVar18[(longlong)(int)uVar24 * 2] + 0x18);
              FUN_1400021e4(&local_410,&local_58);
              local_400 = *(ulonglong *)(lVar6 + 0x18);
              FUN_1400021e4(&local_400,&local_410);
              puVar14 = local_58;
              if ((int)uStack_50 == 0) {
                puVar14 = (ulonglong *)&DAT_149dfb77a;
              }
              puVar13 = local_410;
              if (local_408 == 0) {
                puVar13 = &DAT_149dfb77a;
              }
              lVar6 = 0;
              while( true ) {
                uVar2 = *(ushort *)((longlong)puVar13 + lVar6);
                uVar27 = (uint)uVar2;
                uVar3 = *(ushort *)((longlong)puVar14 + lVar6);
                uVar5 = (uint)uVar3;
                if (uVar2 != uVar3) {
                  if ((uVar3 | uVar2) < 0x80) {
                    uVar27 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                    uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                    if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_1432890dc;
                  }
                  iVar12 = uVar27 - uVar5;
                  goto LAB_143289115;
                }
                if (uVar2 == 0) break;
LAB_1432890dc:
                lVar6 = lVar6 + 2;
              }
              iVar12 = 0;
LAB_143289115:
              if (local_410 != (undefined2 *)0x0) {
                FUN_1400020a8(local_410);
              }
              if (local_58 != (ulonglong *)0x0) {
                FUN_1400020a8();
              }
              uVar5 = uVar29;
              if (iVar12 < 0) {
                uVar5 = uVar24;
              }
            }
            plVar20 = plVar18 + (longlong)(int)uVar22 * 2;
            plVar31 = plVar18 + (longlong)(int)uVar5 * 2;
            lVar6 = plVar18[(longlong)(int)uVar22 * 2];
            local_410 = *(undefined2 **)(plVar18[(longlong)(int)uVar5 * 2] + 0x18);
            FUN_1400021e4(&local_410,&local_58);
            local_400 = *(ulonglong *)(lVar6 + 0x18);
            FUN_1400021e4(&local_400,&local_410);
            puVar14 = local_58;
            if ((int)uStack_50 == 0) {
              puVar14 = (ulonglong *)&DAT_149dfb77a;
            }
            puVar13 = local_410;
            if (local_408 == 0) {
              puVar13 = &DAT_149dfb77a;
            }
            lVar6 = 0;
            while( true ) {
              uVar2 = *(ushort *)((longlong)puVar13 + lVar6);
              uVar29 = (uint)uVar2;
              uVar3 = *(ushort *)((longlong)puVar14 + lVar6);
              uVar24 = (uint)uVar3;
              if (uVar2 != uVar3) {
                if ((uVar3 | uVar2) < 0x80) {
                  uVar29 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                  uVar24 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                  if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_1432891cd;
                }
                iVar12 = uVar29 - uVar24;
                goto LAB_143289200;
              }
              if (uVar2 == 0) break;
LAB_1432891cd:
              lVar6 = lVar6 + 2;
            }
            iVar12 = 0;
LAB_143289200:
            if (local_410 != (undefined2 *)0x0) {
              FUN_1400020a8(local_410);
            }
            if (local_58 != (ulonglong *)0x0) {
              FUN_1400020a8();
            }
            if (-1 < iVar12) break;
            local_58 = (ulonglong *)*plVar20;
            uStack_50 = (longlong *)plVar20[1];
            puVar14 = local_58;
            plVar16 = uStack_50;
            lVar6 = plVar31[1];
            *plVar20 = *plVar31;
            plVar20[1] = lVar6;
            local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
            uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
            *(undefined4 *)plVar31 = (undefined4)local_58;
            *(undefined4 *)((longlong)plVar31 + 4) = local_58._4_4_;
            *(int *)(plVar31 + 1) = (int)uStack_50;
            *(undefined4 *)((longlong)plVar31 + 0xc) = uStack_50._4_4_;
            uVar22 = (ulonglong)uVar5;
            local_58 = puVar14;
            uStack_50 = plVar16;
          }
          uVar5 = (int)local_438 - 1;
        } while ((int)local_438 != 0);
        puVar11 = local_440;
        if (1 < (int)uVar25) {
          uVar22 = (ulonglong)uVar25 - 1;
          local_58 = (ulonglong *)*plVar18;
          uStack_50 = (longlong *)plVar18[1];
          puVar14 = local_58;
          plVar31 = uStack_50;
          lVar6 = (plVar18 + uVar22 * 2)[1];
          *plVar18 = plVar18[uVar22 * 2];
          plVar18[1] = lVar6;
          local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
          uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
          plVar20 = plVar18 + uVar22 * 2;
          *(undefined4 *)plVar20 = (undefined4)local_58;
          *(undefined4 *)((longlong)plVar20 + 4) = local_58._4_4_;
          *(int *)(plVar20 + 1) = (int)uStack_50;
          *(undefined4 *)((longlong)plVar20 + 0xc) = uStack_50._4_4_;
          local_58 = puVar14;
          uStack_50 = plVar31;
          if (uVar25 != 2) {
            do {
              iVar12 = 0;
              iVar30 = 1;
              iVar15 = 0;
              do {
                iVar12 = iVar12 + 2;
                iVar8 = iVar30;
                if ((longlong)iVar12 < (longlong)uVar22) {
                  lVar6 = plVar18[(longlong)iVar12 * 2];
                  local_410 = *(undefined2 **)(plVar18[(longlong)iVar30 * 2] + 0x18);
                  FUN_1400021e4(&local_410,&local_58);
                  local_400 = *(ulonglong *)(lVar6 + 0x18);
                  FUN_1400021e4(&local_400,&local_410);
                  puVar14 = local_58;
                  if ((int)uStack_50 == 0) {
                    puVar14 = (ulonglong *)&DAT_149dfb77a;
                  }
                  puVar13 = local_410;
                  if (local_408 == 0) {
                    puVar13 = &DAT_149dfb77a;
                  }
                  lVar6 = 0;
                  while( true ) {
                    uVar2 = *(ushort *)((longlong)puVar13 + lVar6);
                    uVar5 = (uint)uVar2;
                    uVar3 = *(ushort *)((longlong)puVar14 + lVar6);
                    uVar25 = (uint)uVar3;
                    if (uVar2 != uVar3) {
                      if ((uVar3 | uVar2) < 0x80) {
                        uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                        uVar25 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                        if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_143289359;
                      }
                      iVar28 = uVar5 - uVar25;
                      goto LAB_143289392;
                    }
                    if (uVar2 == 0) break;
LAB_143289359:
                    lVar6 = lVar6 + 2;
                  }
                  iVar28 = 0;
LAB_143289392:
                  if (local_410 != (undefined2 *)0x0) {
                    FUN_1400020a8(local_410);
                  }
                  if (local_58 != (ulonglong *)0x0) {
                    FUN_1400020a8();
                  }
                  iVar8 = iVar12;
                  if (iVar28 < 0) {
                    iVar8 = iVar30;
                  }
                }
                plVar20 = plVar18 + (longlong)iVar15 * 2;
                plVar31 = plVar18 + (longlong)iVar8 * 2;
                lVar6 = plVar18[(longlong)iVar15 * 2];
                local_410 = *(undefined2 **)(plVar18[(longlong)iVar8 * 2] + 0x18);
                FUN_1400021e4(&local_410,&local_58);
                local_400 = *(ulonglong *)(lVar6 + 0x18);
                FUN_1400021e4(&local_400,&local_410);
                puVar14 = local_58;
                if ((int)uStack_50 == 0) {
                  puVar14 = (ulonglong *)&DAT_149dfb77a;
                }
                puVar13 = local_410;
                if (local_408 == 0) {
                  puVar13 = &DAT_149dfb77a;
                }
                lVar6 = 0;
                while( true ) {
                  uVar2 = *(ushort *)((longlong)puVar13 + lVar6);
                  uVar5 = (uint)uVar2;
                  uVar3 = *(ushort *)((longlong)puVar14 + lVar6);
                  uVar25 = (uint)uVar3;
                  if (uVar2 != uVar3) {
                    if ((uVar3 | uVar2) < 0x80) {
                      uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                      uVar25 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                      if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_14328944a;
                    }
                    iVar12 = uVar5 - uVar25;
                    goto LAB_14328947d;
                  }
                  if (uVar2 == 0) break;
LAB_14328944a:
                  lVar6 = lVar6 + 2;
                }
                iVar12 = 0;
LAB_14328947d:
                if (local_410 != (undefined2 *)0x0) {
                  FUN_1400020a8(local_410);
                }
                if (local_58 != (ulonglong *)0x0) {
                  FUN_1400020a8();
                }
                if (-1 < iVar12) break;
                puVar14 = (ulonglong *)*plVar20;
                plVar16 = (longlong *)plVar20[1];
                lVar6 = plVar31[1];
                *plVar20 = *plVar31;
                plVar20[1] = lVar6;
                local_58._0_4_ = SUB84(puVar14,0);
                local_58._4_4_ = (undefined4)((ulonglong)puVar14 >> 0x20);
                uStack_50._0_4_ = (int)plVar16;
                uStack_50._4_4_ = (undefined4)((ulonglong)plVar16 >> 0x20);
                *(undefined4 *)plVar31 = (undefined4)local_58;
                *(undefined4 *)((longlong)plVar31 + 4) = local_58._4_4_;
                *(int *)(plVar31 + 1) = (int)uStack_50;
                *(undefined4 *)((longlong)plVar31 + 0xc) = uStack_50._4_4_;
                iVar12 = iVar8 * 2;
                iVar30 = iVar8 * 2 + 1;
                local_58 = puVar14;
                uStack_50 = plVar16;
                iVar15 = iVar8;
              } while ((longlong)iVar30 < (longlong)uVar22);
              uVar10 = uVar22 - 1;
              local_58 = (ulonglong *)*plVar18;
              uStack_50 = (longlong *)plVar18[1];
              puVar14 = local_58;
              plVar31 = uStack_50;
              lVar6 = (plVar18 + uVar10 * 2)[1];
              *plVar18 = plVar18[uVar10 * 2];
              plVar18[1] = lVar6;
              local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
              uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
              plVar20 = plVar18 + uVar10 * 2;
              *(undefined4 *)plVar20 = (undefined4)local_58;
              *(undefined4 *)((longlong)plVar20 + 4) = local_58._4_4_;
              *(int *)(plVar20 + 1) = (int)uStack_50;
              *(undefined4 *)((longlong)plVar20 + 0xc) = uStack_50._4_4_;
              bVar4 = 2 < uVar22;
              puVar11 = local_440;
              uVar22 = uVar10;
              local_58 = puVar14;
              uStack_50 = plVar31;
            } while (bVar4);
          }
        }
      }
LAB_143289644:
      puVar11 = puVar11 + -3;
    } while (&local_358 <= puVar11);
  }
  if (local_428 != 0) {
    FUN_1400020a8(local_428);
  }
  local_3b0 = 0;
  if (local_3b8 != 0) {
    FUN_1400020a8();
  }
  FUN_1474d93ce(&local_3f8);
  local_360 = 0;
  if (local_368 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1474d945c(&local_3a8);
  if ((local_48 ^ (ulonglong)auStack_468) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000143288d6f:
  lVar6 = *plVar18;
  local_410 = *(undefined2 **)(*plVar16 + 0x18);
  FUN_1400021e4(&local_410,&local_58);
  local_400 = *(ulonglong *)(lVar6 + 0x18);
  FUN_1400021e4(&local_400,&local_410);
  puVar13 = (undefined2 *)local_58;
  if ((int)uStack_50 == 0) {
    puVar13 = &DAT_149dfb77a;
  }
  puVar23 = local_410;
  if (local_408 == 0) {
    puVar23 = &DAT_149dfb77a;
  }
  lVar6 = 0;
  while( true ) {
    uVar2 = *(ushort *)((longlong)puVar23 + lVar6);
    uVar25 = (uint)uVar2;
    uVar3 = *(ushort *)((longlong)puVar13 + lVar6);
    uVar5 = (uint)uVar3;
    if (uVar2 != uVar3) {
      if ((uVar3 | uVar2) < 0x80) {
        uVar25 = (uint)(byte)(&DAT_149e05da0)[uVar2];
        uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar3];
        if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_143288de5;
      }
      iVar12 = uVar25 - uVar5;
      goto LAB_143288e17;
    }
    if (uVar2 == 0) break;
LAB_143288de5:
    lVar6 = lVar6 + 2;
  }
  iVar12 = 0;
LAB_143288e17:
  if (local_410 != (undefined2 *)0x0) {
    FUN_1400020a8(local_410);
  }
  if (local_58 != (ulonglong *)0x0) {
    FUN_1400020a8();
  }
  if (-1 < iVar12) goto LAB_143288d62;
LAB_143288e3e:
  do {
    plVar21 = plVar31;
    plVar31 = plVar21 + -2;
    if (plVar31 <= plVar18) break;
    lVar6 = *plVar31;
    local_410 = *(undefined2 **)(*plVar18 + 0x18);
    FUN_1400021e4(&local_410,&local_58);
    local_400 = *(ulonglong *)(lVar6 + 0x18);
    FUN_1400021e4(&local_400,&local_410);
    puVar13 = (undefined2 *)local_58;
    if ((int)uStack_50 == 0) {
      puVar13 = &DAT_149dfb77a;
    }
    puVar23 = local_410;
    if (local_408 == 0) {
      puVar23 = &DAT_149dfb77a;
    }
    lVar6 = 0;
    while( true ) {
      uVar2 = *(ushort *)((longlong)puVar23 + lVar6);
      uVar5 = (uint)uVar2;
      uVar3 = *(ushort *)((longlong)puVar13 + lVar6);
      uVar25 = (uint)uVar3;
      if (uVar2 != uVar3) {
        if ((uVar3 | uVar2) < 0x80) {
          uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar2];
          uVar25 = (uint)(byte)(&DAT_149e05da0)[uVar3];
          if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_143288ec5;
        }
        iVar12 = uVar5 - uVar25;
        goto LAB_143288ef8;
      }
      if (uVar2 == 0) break;
LAB_143288ec5:
      lVar6 = lVar6 + 2;
    }
    iVar12 = 0;
LAB_143288ef8:
    if (local_410 != (undefined2 *)0x0) {
      FUN_1400020a8(local_410);
    }
    if (local_58 != (ulonglong *)0x0) {
      FUN_1400020a8();
    }
  } while (-1 < iVar12);
  if (plVar16 <= plVar31) {
    puVar13 = (undefined2 *)*plVar16;
    lVar6 = plVar17[3];
    lVar19 = plVar21[-1];
    *plVar16 = *plVar31;
    plVar17[3] = lVar19;
    local_58._0_4_ = SUB84(puVar13,0);
    local_58._4_4_ = (undefined4)((ulonglong)puVar13 >> 0x20);
    uStack_50._0_4_ = (int)lVar6;
    uStack_50._4_4_ = (undefined4)((ulonglong)lVar6 >> 0x20);
    *(undefined4 *)plVar31 = (undefined4)local_58;
    *(undefined4 *)((longlong)plVar21 + -0xc) = local_58._4_4_;
    *(int *)(plVar21 + -1) = (int)uStack_50;
    *(undefined4 *)((longlong)plVar21 + -4) = uStack_50._4_4_;
    local_58 = (ulonglong *)puVar13;
    uStack_50 = (longlong *)lVar6;
    goto LAB_143288d62;
  }
  local_58 = (ulonglong *)*plVar18;
  uStack_50 = (longlong *)plVar18[1];
  puVar14 = local_58;
  plVar17 = uStack_50;
  lVar6 = plVar21[-1];
  *plVar18 = *plVar31;
  plVar18[1] = lVar6;
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  *(undefined4 *)plVar31 = (undefined4)local_58;
  *(undefined4 *)((longlong)plVar21 + -0xc) = local_58._4_4_;
  *(int *)(plVar21 + -1) = (int)uStack_50;
  *(undefined4 *)((longlong)plVar21 + -4) = uStack_50._4_4_;
  iVar12 = (int)local_438 + -1;
  plVar21 = plVar21 + -4;
  local_58 = puVar14;
  uStack_50 = plVar17;
  if ((longlong)plVar21 - (longlong)plVar18 < (longlong)local_430 - (longlong)plVar16) {
    if (plVar16 < plVar20) {
      *local_440 = plVar16;
      local_440[1] = plVar20;
      *(int *)(local_440 + 2) = iVar12;
      local_440 = local_440 + 3;
    }
    puVar11 = local_440;
    if (plVar31 <= plVar18 + 2) goto LAB_143289644;
  }
  else {
    puVar11 = local_440;
    if (plVar18 + 2 < plVar31) {
      *local_440 = plVar18;
      local_440[1] = plVar21;
      *(int *)(local_440 + 2) = iVar12;
      puVar11 = local_440 + 3;
    }
    plVar21 = plVar20;
    plVar18 = plVar16;
    if (plVar20 <= plVar16) goto LAB_143289644;
  }
  local_440 = puVar11;
  iVar15 = (int)((ulonglong)((longlong)plVar21 - (longlong)plVar18) >> 4);
  uVar25 = iVar15 + 1;
  plVar20 = plVar21;
  if (iVar12 == 0) goto LAB_14328900b;
  goto LAB_143288d1b;
}



// FUNCTION 143289828 FUN_143289828 body=1 status=ok
// SIG undefined FUN_143289828(void)

void FUN_143289828(void)

{
  return;
}



// FUNCTION 14328982a FUN_14328982a body=180 status=ok
// SIG undefined FUN_14328982a(void)

void FUN_14328982a(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  lVar4 = param_1[1];
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
LAB_14328983e:
    for (; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x18)) {
      if (((~*(uint *)(*(longlong *)(lVar4 + 8) + 0x18) & 0x4018001) == 0) &&
         ((*(char *)((longlong)param_1 + 0x15) != '\0' || ((*(byte *)(lVar4 + 0x3b) & 0x20) == 0))))
      goto LAB_143289890;
    }
    if (*(char *)((longlong)param_1 + 0x16) == '\x01') {
      lVar4 = (longlong)(int)param_1[2] + 1;
      iVar3 = (int)lVar4;
      *(int *)(param_1 + 2) = iVar3;
      if (iVar3 < (int)plVar2[0x3c]) {
        lVar1 = *(longlong *)(plVar2[0x3b] + lVar4 * 0x10);
        lVar4 = 0;
        if (lVar1 != 0) {
          lVar4 = *(longlong *)(lVar1 + 0x50);
        }
        goto LAB_14328983e;
      }
    }
    if (*(char *)((longlong)param_1 + 0x14) == '\x01') {
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2b0))();
      if (plVar2 != (longlong *)0x0) {
        lVar4 = plVar2[10];
        *(undefined4 *)(param_1 + 2) = 0xffffffff;
        goto LAB_14328983e;
      }
      plVar2 = (longlong *)0x0;
    }
    lVar4 = 0;
  }
LAB_143289890:
  *param_1 = (longlong)plVar2;
  param_1[1] = lVar4;
  return;
}



// FUNCTION 1432898de FUN_1432898de body=288 status=ok
// SIG undefined FUN_1432898de(void)

void FUN_1432898de(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  longlong lVar11;
  
  if ((longlong)(int)param_3[1] != 0) {
    lVar4 = *param_1;
    piVar9 = (int *)(*param_3 + 0xc);
    lVar6 = (longlong)(int)param_3[1] << 4;
    do {
      uVar5 = piVar9[-1];
      piVar10 = piVar9;
      if ((int)uVar5 < 0) {
        if ((((~uVar5 & 0x7fffffff) != 0) && (uVar5 = (int)(uVar5 * 2) >> 1, -1 < (int)uVar5)) &&
           ((int)uVar5 < *(int *)(param_1[1] + 0x88))) {
          piVar10 = (int *)((ulonglong)uVar5 * 4 + *(longlong *)(param_1[1] + 0x80));
          goto LAB_143289919;
        }
      }
      else {
LAB_143289919:
        lVar11 = (longlong)*piVar10;
        if (lVar11 != -1) {
          lVar6 = *(longlong *)(lVar4 + 0x70);
          fVar2 = *(float *)(lVar6 + 4 + lVar11 * 8);
          plVar1 = (longlong *)(lVar4 + 0xa0);
          iVar3 = *(int *)(lVar4 + 0xa8);
          uVar5 = iVar3 + 1;
          *(uint *)(lVar4 + 0xa8) = uVar5;
          if (fVar2 <= 0.0) {
            if (*(uint *)(lVar4 + 0xac) < uVar5) {
              FUN_1474da03a(plVar1,iVar3);
            }
            puVar7 = (undefined8 *)((longlong)iVar3 * 0x14 + *plVar1);
            uVar8 = 0xff;
          }
          else {
            if (*(uint *)(lVar4 + 0xac) < uVar5) {
              FUN_1474da03a(plVar1,iVar3);
            }
            puVar7 = (undefined8 *)((longlong)iVar3 * 0x14 + *plVar1);
            uVar8 = *(undefined4 *)(lVar6 + lVar11 * 8);
          }
          *puVar7 = *param_2;
          *(undefined4 *)(puVar7 + 1) = 0;
          *(undefined1 *)((longlong)puVar7 + 0xc) = 0;
          *(undefined4 *)(puVar7 + 2) = uVar8;
          *(undefined1 *)(lVar4 + 0xb0) = 0;
          return;
        }
      }
      piVar9 = piVar9 + 4;
      lVar6 = lVar6 + -0x10;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 1432899fe FUN_1432899fe body=826 status=ok
// SIG undefined FUN_1432899fe(void)

void FUN_1432899fe(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  ulonglong uVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  longlong *plVar14;
  int *piVar15;
  int *piVar16;
  int iVar17;
  int *piVar18;
  int *piVar19;
  float fVar20;
  undefined1 auStack_378 [32];
  longlong local_358;
  longlong local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  undefined8 uStack_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if (1 < (int)param_2) {
    memset(local_348,0,0x2f0);
    local_350 = param_1 + (ulonglong)param_2 * 0x14 + -0x14;
    local_358 = param_1;
    fVar20 = logf((float)(int)param_2);
    local_348[0] = (int)(longlong)(fVar20 + fVar20);
    plVar14 = &local_358;
    do {
      piVar6 = (int *)*plVar14;
      piVar15 = (int *)plVar14[1];
      iVar17 = (int)plVar14[2];
      iVar13 = (int)((ulonglong)((longlong)piVar15 - (longlong)piVar6) >> 2);
      piVar18 = piVar15;
      piVar11 = piVar6;
      if (iVar17 != 0) {
LAB_143289acb:
        uVar8 = iVar13 * -0x33333333 + 1;
        if (8 < (int)uVar8) {
          uVar9 = (ulonglong)(uVar8 >> 1);
          iVar13 = piVar6[uVar9 * 5 + 4];
          uVar1 = *(undefined8 *)(piVar6 + uVar9 * 5);
          uVar2 = *(undefined8 *)(piVar6 + uVar9 * 5 + 2);
          piVar6[uVar9 * 5 + 4] = piVar6[4];
          uVar3 = *(undefined8 *)(piVar6 + 2);
          *(undefined8 *)(piVar6 + uVar9 * 5) = *(undefined8 *)piVar6;
          *(undefined8 *)(piVar6 + uVar9 * 5 + 2) = uVar3;
          piVar6[4] = iVar13;
          *(undefined8 *)piVar6 = uVar1;
          *(undefined8 *)(piVar6 + 2) = uVar2;
          piVar10 = piVar15 + 5;
          piVar7 = piVar6;
          do {
            piVar4 = piVar7 + 5;
            piVar16 = piVar7 + 5;
            do {
              piVar7 = piVar16;
              piVar12 = piVar4;
              if (piVar15 < piVar7) break;
              iVar13 = *piVar6 - *piVar7;
              if (*piVar6 - *piVar7 == 0) {
                iVar13 = piVar6[1] - piVar7[1];
              }
              piVar4 = piVar12 + 5;
              piVar16 = piVar7 + 5;
            } while (-1 < iVar13);
            piVar4 = piVar10 + -10;
            do {
              piVar16 = piVar10;
              piVar19 = piVar4;
              piVar10 = piVar16 + -5;
              if (piVar10 <= piVar6) break;
              iVar13 = *piVar10 - *piVar6;
              if (*piVar10 - *piVar6 == 0) {
                iVar13 = piVar16[-4] - piVar6[1];
              }
              piVar4 = piVar19 + -5;
            } while (-1 < iVar13);
            if (piVar10 < piVar7) goto LAB_143289bbe;
            iVar13 = piVar7[4];
            uVar1 = *(undefined8 *)piVar7;
            uVar2 = *(undefined8 *)(piVar7 + 2);
            piVar7[4] = piVar16[-1];
            uVar3 = *(undefined8 *)(piVar16 + -3);
            *(undefined8 *)piVar7 = *(undefined8 *)piVar10;
            *(undefined8 *)(piVar7 + 2) = uVar3;
            piVar16[-1] = iVar13;
            *(undefined8 *)piVar10 = uVar1;
            *(undefined8 *)(piVar16 + -3) = uVar2;
          } while( true );
        }
        if (piVar6 < piVar15) {
          do {
            piVar18 = piVar6;
            if (piVar6 + 5 <= piVar15) {
              iVar17 = *piVar6;
              piVar11 = piVar6 + 5;
              piVar10 = piVar6;
              do {
                iVar13 = iVar17 - *piVar11;
                if (iVar13 == 0) {
                  iVar13 = piVar10[1] - piVar11[1];
                }
                piVar18 = piVar11;
                iVar5 = *piVar11;
                if (-1 < iVar13) {
                  piVar18 = piVar10;
                  iVar5 = iVar17;
                }
                iVar17 = iVar5;
                piVar11 = piVar11 + 5;
                piVar10 = piVar18;
              } while (piVar11 <= piVar15);
            }
            local_48 = piVar18[4];
            local_58 = *(undefined8 *)piVar18;
            uStack_50 = *(undefined8 *)(piVar18 + 2);
            uVar2 = local_58;
            uVar3 = uStack_50;
            piVar18[4] = piVar15[4];
            uVar1 = *(undefined8 *)(piVar15 + 2);
            *(undefined8 *)piVar18 = *(undefined8 *)piVar15;
            *(undefined8 *)(piVar18 + 2) = uVar1;
            piVar15[4] = local_48;
            local_58._4_4_ = (int)((ulonglong)local_58 >> 0x20);
            uStack_50._4_4_ = (int)((ulonglong)uStack_50 >> 0x20);
            *piVar15 = (int)local_58;
            piVar15[1] = local_58._4_4_;
            piVar15[2] = (int)uStack_50;
            piVar15[3] = uStack_50._4_4_;
            piVar15 = piVar15 + -5;
            local_58 = uVar2;
            uStack_50 = uVar3;
          } while (piVar6 < piVar15);
        }
        goto LAB_143289d1d;
      }
LAB_143289d32:
      FUN_1474da18a(piVar6);
LAB_143289d1d:
      plVar14 = plVar14 + -3;
    } while (&local_358 <= plVar14);
  }
  if ((local_40 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_143289bbe:
  local_48 = piVar6[4];
  local_58 = *(undefined8 *)piVar6;
  uStack_50 = *(undefined8 *)(piVar6 + 2);
  uVar2 = local_58;
  uVar3 = uStack_50;
  piVar6[4] = piVar16[-1];
  uVar1 = *(undefined8 *)(piVar16 + -3);
  *(undefined8 *)piVar6 = *(undefined8 *)piVar10;
  *(undefined8 *)(piVar6 + 2) = uVar1;
  piVar16[-1] = local_48;
  local_58._4_4_ = (int)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (int)((ulonglong)uStack_50 >> 0x20);
  *piVar10 = (int)local_58;
  piVar16[-4] = local_58._4_4_;
  piVar16[-3] = (int)uStack_50;
  piVar16[-2] = uStack_50._4_4_;
  iVar17 = iVar17 + -1;
  piVar16 = piVar16 + -10;
  local_58 = uVar2;
  uStack_50 = uVar3;
  if ((longlong)piVar19 - (longlong)piVar11 < (longlong)piVar18 - (longlong)piVar12) {
    if (piVar7 < piVar15) {
      *plVar14 = (longlong)piVar7;
      plVar14[1] = (longlong)piVar15;
      *(int *)(plVar14 + 2) = iVar17;
      plVar14 = plVar14 + 3;
    }
    piVar12 = piVar6;
    if (piVar10 <= piVar6 + 5) goto LAB_143289d1d;
  }
  else {
    if (piVar6 + 5 < piVar10) {
      *plVar14 = (longlong)piVar6;
      plVar14[1] = (longlong)piVar16;
      *(int *)(plVar14 + 2) = iVar17;
      plVar14 = plVar14 + 3;
    }
    piVar6 = piVar7;
    piVar16 = piVar15;
    piVar19 = piVar15;
    if (piVar15 <= piVar7) goto LAB_143289d1d;
  }
  iVar13 = (int)((ulonglong)((longlong)piVar19 - (longlong)piVar12) >> 2);
  piVar15 = piVar16;
  piVar18 = piVar19;
  piVar11 = piVar12;
  if (iVar17 == 0) goto LAB_143289d32;
  goto LAB_143289acb;
}



// FUNCTION 143289d39 FUN_143289d39 body=2166 status=ok
// SIG undefined FUN_143289d39(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143289d39(void)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 local_58;
  int iStack_50;
  uint uStack_4c;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = (undefined8 *)&DAT_14a19662d;
  iStack_50 = 4;
  uStack_4c = uStack_4c & 0xffffff00;
  FUN_14001a6c0(&local_58,1);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/AnimGraphRuntime",0,0,&PTR_FUN_14a4193c0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/AnimGraphRuntime",0,0,&PTR_FUN_14a419480);
  uStack_68 = 1;
  ppuStack_70 = &PTR_FUN_14a419840;
  local_78 = 1;
  FUN_14282b410(L"/Script/AnimGraphRuntime",0,0,&PTR_FUN_14a419860);
  uStack_68 = 1;
  ppuStack_70 = &PTR_FUN_14a4199f0;
  local_78 = 2;
  FUN_14282b410(L"/Script/AnimGraphRuntime",0,0,&PTR_FUN_14a419a10);
  FUN_1400b22c2(&local_58,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_58,&DAT_14caa9d90);
  if (cVar2 == '\0') {
    _DAT_14caa9d90 = 0;
    uRam000000014caa9d98 = 0;
  }
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/AnimGraphRuntime",&PTR_FUN_14a41a2d0,1,&PTR_FUN_14a41a2a0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/AnimGraphRuntime",0,0,&PTR_FUN_14a41a4e0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/AnimGraphRuntime",&PTR_FUN_14a41aec0,1,&PTR_FUN_14a41ae90);
  uStack_68 = 2;
  ppuStack_70 = &PTR_FUN_14a41b690;
  local_78 = 1;
  FUN_14282b410(L"/Script/AnimGraphRuntime",0,0,&PTR_FUN_14a41b6d0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/AnimGraphRuntime",0,0,&PTR_FUN_14a41b770);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/AnimGraphRuntime",0,0,&PTR_FUN_14a41b8e0);
  FUN_1446f470e(&DAT_14caa9ed0,L"AllowsCinematicOverride",1);
  FUN_1446f470e(&DAT_14caa9ee0,L"GetSequencerAnimSlotNames",1);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AnimGraphRuntime",&PTR_FUN_14a41be70,1,0);
  local_58 = (undefined8 *)0x1ac4d102eb5fdbd;
  iStack_50 = 0x8136f38f;
  uStack_4c = 0x3393a5da;
  _DAT_14caa9f08 = 0x2eb5fdbd;
  uRam000000014caa9f0c = 0x1ac4d10;
  uRam000000014caa9f10 = 0x8136f38f;
  uRam000000014caa9f14 = 0x3393a5da;
  FUN_141005458(&local_58,5,L"AnimGraphVer",0);
  atexit((_func_5014 *)&LAB_143281d94);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/AnimGraphRuntime",&PTR_FUN_14a41d2f0,1,&PTR_FUN_14a41d2a0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AnimGraphRuntime",&PTR_FUN_14a41e230,1,0);
  local_58 = (undefined8 *)0x0;
  iStack_50 = 0;
  FUN_1446efa72(&local_58,0,2,0x10);
  iStack_50 = 2;
  *local_58 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_58[2] = lVar3;
  *local_58 = &PTR_FUN_14a42d1e0;
  local_78 = CONCAT44(local_78._4_4_,1);
  FUN_14152bcb8(&DAT_14caaa010,L"a.AuditLoadedAnimGraphs",
                L"Audit memory breakdown of currently loaded anim graphs. Writes results to the log."
                ,&local_58);
  if (iStack_50 != 0) {
    if (local_58 == (undefined8 *)0x0) goto LAB_14328a0e5;
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    iStack_50 = 0;
  }
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_14328a0e5:
  atexit(FUN_143283973);
  local_58 = (undefined8 *)0x800000014a41e32e;
  local_44 = 0x10;
  iStack_50 = FUN_14577453c();
  uStack_4c = CONCAT31(uStack_4c._1_3_,1);
  FUN_146330242(&local_58);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/AnimGraphRuntime",0,0,&PTR_FUN_14a41e650);
  local_58._0_4_ = 1;
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14caaa040,L"a.AnimNode.AimOffsetLookAt.Enable",&local_58,
                L"Enable/Disable LookAt AimOffset");
  atexit(FUN_1432839b8);
  local_58 = (undefined8 *)((ulonglong)local_58._4_4_ << 0x20);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14caaa058,L"a.AnimNode.AimOffsetLookAt.Debug",&local_58,
                L"Toggle LookAt AimOffset debug");
  atexit(FUN_1432839fd);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/AnimGraphRuntime",0,0,&PTR_FUN_14a41ed70);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/AnimGraphRuntime",0,0,&PTR_FUN_14a41f3a0);
  uStack_68 = 1;
  ppuStack_70 = &PTR_FUN_14a41f570;
  local_78 = 1;
  FUN_14282b410(L"/Script/AnimGraphRuntime",0,0,&PTR_FUN_14a41f590);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/AnimGraphRuntime",0,0,&PTR_FUN_14a41f6a0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/AnimGraphRuntime",0,0,&PTR_FUN_14a41f750);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/AnimGraphRuntime",0,0,&PTR_FUN_14a41f800);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/AnimGraphRuntime",0,0,&PTR_FUN_14a41fab0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/AnimGraphRuntime",0,0,&PTR_FUN_14a4201a0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 3;
  FUN_14282b410(L"/Script/AnimGraphRuntime",0,0,&PTR_FUN_14a420800);
  uStack_68 = 1;
  ppuStack_70 = &PTR_FUN_14a420af0;
  local_78 = 1;
  FUN_14282b410(L"/Script/AnimGraphRuntime",0,0,&PTR_FUN_14a420b10);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/AnimGraphRuntime",0,0,&PTR_FUN_14a420e60);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/AnimGraphRuntime",0,0,&PTR_FUN_14a421180);
  uStack_68 = 1;
  ppuStack_70 = &PTR_FUN_14a4219c0;
  local_78 = 1;
  FUN_14282b410(L"/Script/AnimGraphRuntime",0,0,&PTR_FUN_14a4219e0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/AnimGraphRuntime",0,0,&PTR_FUN_14a421bf0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 3;
  FUN_14282b410(L"/Script/AnimGraphRuntime",0,0,&PTR_FUN_14a422140);
  uStack_68 = 1;
  ppuStack_70 = &PTR_FUN_14a422b90;
  local_78 = 1;
  FUN_14282b410(L"/Script/AnimGraphRuntime",0,0,&PTR_FUN_14a422bb0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/AnimGraphRuntime",0,0,&PTR_FUN_14a422f90);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/AnimGraphRuntime",0,0,&PTR_FUN_14a423160);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/AnimGraphRuntime",0,0,&PTR_FUN_14a423440);
  uStack_68 = 3;
  ppuStack_70 = &PTR_FUN_14a424020;
  local_78 = 3;
  FUN_14282b410(L"/Script/AnimGraphRuntime",0,0,&PTR_FUN_14a424080);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/AnimGraphRuntime",0,0,&PTR_FUN_14a424380);
  uStack_68 = 1;
  ppuStack_70 = &PTR_FUN_14a4245b0;
  local_78 = 1;
  FUN_14282b410(L"/Script/AnimGraphRuntime",0,0,&PTR_FUN_14a4245d0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/AnimGraphRuntime",0,0,&PTR_FUN_14a424a60);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/AnimGraphRuntime",0,0,&PTR_FUN_14a424f60);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/AnimGraphRuntime",0,0,&PTR_FUN_14a425460);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/AnimGraphRuntime",0,0,&PTR_FUN_14a425a40);
  uStack_68 = 1;
  ppuStack_70 = &PTR_FUN_14a4260f0;
  local_78 = 3;
  FUN_14282b410(L"/Script/AnimGraphRuntime",0,0,&PTR_FUN_14a426110);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/AnimGraphRuntime",0,0,&PTR_FUN_14a426320);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14328a5b0 FUN_14328a5b0 body=66 status=ok
// SIG undefined FUN_14328a5b0(void)

void FUN_14328a5b0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
  }
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014328a5e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 14328a5f2 FUN_14328a5f2 body=1981 status=ok
// SIG undefined FUN_14328a5f2(void)

void FUN_14328a5f2(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  byte bVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined8 uStack_84;
  undefined4 uStack_7c;
  float local_78;
  undefined8 uStack_74;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar5 = FUN_14477dc2a();
  plVar7 = param_2;
  FUN_14477dadc(uVar5,param_2);
  *(undefined4 *)(param_1 + 200) = 0;
  cVar1 = *(char *)(param_1 + 0x38);
  if (cVar1 == '\x02') {
    lVar2 = *(longlong *)(*param_2 + 0x130);
    if (lVar2 != 0) {
      lVar6 = FUN_1402e44f4();
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
           ) == lVar6 + 0x30)) {
        fVar10 = *(float *)(param_2 + 5);
        fVar11 = (float)FUN_144945460(lVar2,*(undefined8 *)(param_1 + 0x90));
        if (*(char *)(param_1 + 0x98) == '\x01') {
          fVar12 = *(float *)(param_1 + 0xa0) - *(float *)(param_1 + 0x9c);
          if (ABS(fVar12) <= 1e-08) {
            fVar12 = (float)(-(uint)(*(float *)(param_1 + 0xa0) <= fVar11) & 0x3f800000);
          }
          else {
            fVar12 = (fVar11 - *(float *)(param_1 + 0x9c)) / fVar12;
          }
          fVar11 = (*(float *)(param_1 + 0xa8) - *(float *)(param_1 + 0xa4)) * fVar12 +
                   *(float *)(param_1 + 0xa4);
        }
        fVar11 = fVar11 * *(float *)(param_1 + 0xac) + *(float *)(param_1 + 0xb0);
        if (*(char *)(param_1 + 0x99) == '\x01') {
          if (*(float *)(param_1 + 0xb8) <= fVar11) {
            fVar11 = *(float *)(param_1 + 0xb8);
          }
          if (fVar11 <= *(float *)(param_1 + 0xb4)) {
            fVar11 = *(float *)(param_1 + 0xb4);
          }
        }
        if (*(char *)(param_1 + 0x9a) == '\x01') {
          if (*(char *)(param_1 + 0x9b) == '\x01') {
            fVar12 = *(float *)(param_1 + 0xc4);
            fVar14 = *(float *)(param_1 + 0xbc + (ulonglong)(fVar11 < fVar12) * 4);
            if ((0.0 < fVar14) && (fVar13 = fVar11 - fVar12, 1e-08 <= fVar13 * fVar13)) {
              fVar10 = fVar10 * fVar14;
              if (1.0 <= fVar10) {
                fVar10 = 1.0;
              }
              if (fVar10 <= 0.0) {
                fVar10 = 0.0;
              }
              fVar11 = fVar12 + fVar13 * fVar10;
            }
          }
          *(float *)(param_1 + 0xc4) = fVar11;
        }
        *(undefined1 *)(param_1 + 0x9b) = 1;
        goto LAB_14328a6c8;
      }
    }
  }
  else {
    if (cVar1 == '\x01') {
      fVar11 = (float)FUN_1447f0fd6(param_1 + 0x48,
                                    CONCAT71((int7)((ulonglong)plVar7 >> 8),
                                             *(undefined1 *)(param_1 + 0x39)) & 0xffffffffffffff01,
                                    (int)param_2[5]);
    }
    else {
      if (cVar1 != '\0') goto LAB_14328a6d0;
      fVar10 = *(float *)(param_1 + 0x3c);
      if (*(char *)(param_1 + 0x98) == '\x01') {
        fVar11 = *(float *)(param_1 + 0xa0) - *(float *)(param_1 + 0x9c);
        if (ABS(fVar11) <= 1e-08) {
          fVar11 = (float)(-(uint)(*(float *)(param_1 + 0xa0) <= fVar10) & 0x3f800000);
        }
        else {
          fVar11 = (fVar10 - *(float *)(param_1 + 0x9c)) / fVar11;
        }
        fVar10 = (*(float *)(param_1 + 0xa8) - *(float *)(param_1 + 0xa4)) * fVar11 +
                 *(float *)(param_1 + 0xa4);
      }
      fVar10 = fVar10 * *(float *)(param_1 + 0xac) + *(float *)(param_1 + 0xb0);
      if (*(char *)(param_1 + 0x99) == '\x01') {
        if (*(float *)(param_1 + 0xb8) <= fVar10) {
          fVar10 = *(float *)(param_1 + 0xb8);
        }
        if (fVar10 <= *(float *)(param_1 + 0xb4)) {
          fVar10 = *(float *)(param_1 + 0xb4);
        }
      }
      if (*(char *)(param_1 + 0x9a) == '\x01') {
        if (*(char *)(param_1 + 0x9b) == '\x01') {
          fVar11 = *(float *)(param_1 + 0xc4);
          fVar12 = *(float *)(param_1 + 0xbc + (ulonglong)(fVar10 < fVar11) * 4);
          if ((0.0 < fVar12) && (fVar14 = fVar10 - fVar11, 1e-08 <= fVar14 * fVar14)) {
            fVar12 = fVar12 * *(float *)(param_2 + 5);
            if (1.0 <= fVar12) {
              fVar12 = 1.0;
            }
            if (fVar12 <= 0.0) {
              fVar12 = 0.0;
            }
            fVar10 = fVar11 + fVar14 * fVar12;
          }
        }
        *(float *)(param_1 + 0xc4) = fVar10;
      }
      *(undefined1 *)(param_1 + 0x9b) = 1;
      fVar11 = fVar10 * *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x44);
      if (1.0 <= fVar11) {
        fVar11 = 1.0;
      }
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
    }
LAB_14328a6c8:
    *(float *)(param_1 + 200) = fVar11;
  }
LAB_14328a6d0:
  fVar10 = *(float *)(param_1 + 200);
  if (1.0 <= fVar10) {
    fVar10 = 1.0;
  }
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  *(float *)(param_1 + 200) = fVar10;
  if (*(char *)(param_1 + 0xcc) == '\x01') {
    fVar10 = 1.0 - fVar10;
    *(float *)(param_1 + 200) = fVar10;
  }
  bVar4 = *(byte *)(param_1 + 0x39);
  if ((bVar4 & 8) == 0) {
    bVar8 = (1e-05 < fVar10) << 2 | (fVar10 < 0.99999) * '\x02' | bVar4 & 0xf1;
    *(byte *)(param_1 + 0x39) = bVar8;
    if (1e-05 < fVar10) goto LAB_14328a7d5;
LAB_14328a94c:
    plVar7 = *(longlong **)(param_1 + 0x18);
    if (plVar7 != (longlong *)0x0) {
      local_98 = (undefined4)*param_2;
      uStack_94 = *(undefined4 *)((longlong)param_2 + 4);
      uStack_90 = (undefined4)param_2[1];
      uStack_8c = *(undefined4 *)((longlong)param_2 + 0xc);
      local_88 = (undefined4)param_2[2];
      uStack_7c = *(undefined4 *)((longlong)param_2 + 0x1c);
      local_78 = *(float *)(param_2 + 4);
      uStack_74 = *(undefined8 *)((longlong)param_2 + 0x24);
      uStack_6c = *(undefined4 *)((longlong)param_2 + 0x2c);
      uStack_84 = CONCAT44(*(undefined4 *)((longlong)param_2 + 0x14),*(undefined4 *)(param_1 + 0x20)
                          );
      if ((plVar7[1] != 0) && ((*(byte *)(plVar7[1] + 0x24) & 7) != 0)) {
        FUN_144b1fcbe(&local_98,plVar7);
        FUN_144b1fd46(&local_98,*(undefined8 *)(param_1 + 0x18));
        FUN_144b1fe18(&local_98,*(undefined8 *)(param_1 + 0x18));
        plVar7 = *(longlong **)(param_1 + 0x18);
      }
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_98);
      bVar8 = *(byte *)(param_1 + 0x39);
    }
    if (((bVar8 & 0x10) == 0) ||
       (plVar7 = *(longlong **)(param_1 + 0x28), plVar7 == (longlong *)0x0)) goto LAB_14328aabb;
    local_78 = *(float *)(param_2 + 4) * 2e-05;
    uVar9 = *(undefined4 *)(param_1 + 0x30);
    local_98 = (undefined4)*param_2;
    uStack_94 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_90 = (undefined4)param_2[1];
    uStack_8c = *(undefined4 *)((longlong)param_2 + 0xc);
    local_88 = (undefined4)param_2[2];
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
    uStack_7c = *(undefined4 *)((longlong)param_2 + 0x1c);
    uStack_74 = *(undefined8 *)((longlong)param_2 + 0x24);
    uStack_6c = *(undefined4 *)((longlong)param_2 + 0x2c);
  }
  else {
    if ((bVar4 & 2) == 0 && fVar10 < 0.99999) {
      local_98 = (undefined4)*param_2;
      uStack_94 = *(undefined4 *)((longlong)param_2 + 4);
      uStack_90 = (undefined4)param_2[1];
      uStack_8c = *(undefined4 *)((longlong)param_2 + 0xc);
      local_88 = CONCAT31(local_88._1_3_,1);
      uStack_84 = 0xffffffffffffffff;
      FUN_140320438(param_1 + 0x18);
      bVar4 = *(byte *)(param_1 + 0x39);
    }
    if (fVar10 <= 1e-05) {
      bVar8 = bVar4 & 0xf9 | (fVar10 < 0.99999) * '\x02';
      *(byte *)(param_1 + 0x39) = bVar8;
      goto LAB_14328a94c;
    }
    if ((bVar4 & 4) == 0) {
      local_98 = (undefined4)*param_2;
      uStack_94 = *(undefined4 *)((longlong)param_2 + 4);
      uStack_90 = (undefined4)param_2[1];
      uStack_8c = *(undefined4 *)((longlong)param_2 + 0xc);
      local_88 = CONCAT31(local_88._1_3_,1);
      uStack_84 = 0xffffffffffffffff;
      FUN_140320438(param_1 + 0x28);
      bVar4 = *(byte *)(param_1 + 0x39);
    }
    *(byte *)(param_1 + 0x39) = (fVar10 < 0.99999) * '\x02' | bVar4 & 0xf9 | 4;
LAB_14328a7d5:
    if (fVar10 < 0.99999) {
      fVar10 = *(float *)(param_1 + 200);
      plVar7 = *(longlong **)(param_1 + 0x18);
      if (plVar7 != (longlong *)0x0) {
        local_78 = (1.0 - fVar10) * *(float *)(param_2 + 4);
        local_98 = (undefined4)*param_2;
        uStack_94 = *(undefined4 *)((longlong)param_2 + 4);
        uStack_90 = (undefined4)param_2[1];
        uStack_8c = *(undefined4 *)((longlong)param_2 + 0xc);
        local_88 = (undefined4)param_2[2];
        uStack_7c = *(undefined4 *)((longlong)param_2 + 0x1c);
        uStack_74 = *(undefined8 *)((longlong)param_2 + 0x24);
        uStack_6c = *(undefined4 *)((longlong)param_2 + 0x2c);
        uStack_84 = CONCAT44(*(undefined4 *)((longlong)param_2 + 0x14),
                             *(undefined4 *)(param_1 + 0x20));
        if ((plVar7[1] != 0) && ((*(byte *)(plVar7[1] + 0x24) & 7) != 0)) {
          FUN_144b1fcbe(&local_98,plVar7);
          FUN_144b1fd46(&local_98,*(undefined8 *)(param_1 + 0x18));
          FUN_144b1fe18(&local_98,*(undefined8 *)(param_1 + 0x18));
          plVar7 = *(longlong **)(param_1 + 0x18);
        }
        (**(code **)(*plVar7 + 0x20))(plVar7,&local_98);
        fVar10 = *(float *)(param_1 + 200);
      }
      plVar7 = *(longlong **)(param_1 + 0x28);
      if (plVar7 == (longlong *)0x0) goto LAB_14328aabb;
      local_78 = fVar10 * *(float *)(param_2 + 4);
      uVar9 = *(undefined4 *)(param_1 + 0x30);
      local_98 = (undefined4)*param_2;
      uStack_94 = *(undefined4 *)((longlong)param_2 + 4);
      uStack_90 = (undefined4)param_2[1];
      uStack_8c = *(undefined4 *)((longlong)param_2 + 0xc);
      local_88 = (undefined4)param_2[2];
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
      uStack_7c = *(undefined4 *)((longlong)param_2 + 0x1c);
      uStack_74 = *(undefined8 *)((longlong)param_2 + 0x24);
      uStack_6c = *(undefined4 *)((longlong)param_2 + 0x2c);
    }
    else {
      if (((bVar4 & 0x10) != 0) &&
         (plVar7 = *(longlong **)(param_1 + 0x18), plVar7 != (longlong *)0x0)) {
        local_78 = *(float *)(param_2 + 4) * 2e-05;
        local_98 = (undefined4)*param_2;
        uStack_94 = *(undefined4 *)((longlong)param_2 + 4);
        uStack_90 = (undefined4)param_2[1];
        uStack_8c = *(undefined4 *)((longlong)param_2 + 0xc);
        local_88 = (undefined4)param_2[2];
        uStack_7c = *(undefined4 *)((longlong)param_2 + 0x1c);
        uStack_74 = *(undefined8 *)((longlong)param_2 + 0x24);
        uStack_6c = *(undefined4 *)((longlong)param_2 + 0x2c);
        uStack_84 = CONCAT44(*(undefined4 *)((longlong)param_2 + 0x14),
                             *(undefined4 *)(param_1 + 0x20));
        if ((plVar7[1] != 0) && ((*(byte *)(plVar7[1] + 0x24) & 7) != 0)) {
          FUN_144b1fcbe(&local_98,plVar7);
          FUN_144b1fd46(&local_98,*(undefined8 *)(param_1 + 0x18));
          FUN_144b1fe18(&local_98,*(undefined8 *)(param_1 + 0x18));
          plVar7 = *(longlong **)(param_1 + 0x18);
        }
        (**(code **)(*plVar7 + 0x20))(plVar7,&local_98);
      }
      plVar7 = *(longlong **)(param_1 + 0x28);
      if (plVar7 == (longlong *)0x0) goto LAB_14328aabb;
      uVar9 = *(undefined4 *)(param_1 + 0x30);
      local_98 = (undefined4)*param_2;
      uStack_94 = *(undefined4 *)((longlong)param_2 + 4);
      uStack_90 = (undefined4)param_2[1];
      uStack_8c = *(undefined4 *)((longlong)param_2 + 0xc);
      local_88 = (undefined4)param_2[2];
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
      uStack_7c = *(undefined4 *)((longlong)param_2 + 0x1c);
      local_78 = *(float *)(param_2 + 4);
      uStack_74 = *(undefined8 *)((longlong)param_2 + 0x24);
      uStack_6c = *(undefined4 *)((longlong)param_2 + 0x2c);
    }
  }
  uStack_84 = CONCAT44(uVar3,uVar9);
  if ((plVar7[1] != 0) && ((*(byte *)(plVar7[1] + 0x24) & 7) != 0)) {
    FUN_144b1fcbe(&local_98,plVar7);
    FUN_144b1fd46(&local_98,*(undefined8 *)(param_1 + 0x28));
    FUN_144b1fe18(&local_98,*(undefined8 *)(param_1 + 0x28));
    plVar7 = *(longlong **)(param_1 + 0x28);
  }
  (**(code **)(*plVar7 + 0x20))(plVar7,&local_98);
LAB_14328aabb:
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14328adc6 FUN_14328adc6 body=55 status=ok
// SIG undefined FUN_14328adc6(void)

void FUN_14328adc6(void)

{
  undefined8 uVar1;
  
  if (DAT_14caaae08 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caaae08 = FUN_14171c317(FUN_146332628,uVar1,L"ESwapRootBone");
  }
  return;
}



// FUNCTION 14328ae00 FUN_14328ae00 body=5680 status=ok
// SIG undefined FUN_14328ae00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14328ae00(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char cVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  double *pdVar16;
  uint uVar17;
  undefined1 *puVar18;
  undefined8 uVar19;
  ulonglong uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  double dVar38;
  double dVar39;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar40;
  double dVar41;
  undefined1 auVar42 [16];
  double dVar45;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar51;
  undefined1 auVar50 [16];
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auStack_388 [32];
  undefined8 local_368;
  undefined1 local_360;
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  undefined1 local_338 [16];
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  double local_2c8;
  double dStack_2c0;
  undefined1 local_2b0 [24];
  double local_298;
  double dStack_290;
  undefined1 local_280 [24];
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  undefined1 local_188 [16];
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 uStack_150;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double local_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_c0;
  
  auVar62 = _DAT_149934d80;
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_388;
  if (((*(longlong *)(param_1 + 0x148) != 0) &&
      (cVar12 = *(char *)(param_1 + 0xc40), cVar12 != '\x02')) &&
     (*(char *)(param_1 + 0xd20) == '\x01')) {
    dVar30 = *(double *)(param_1 + 0xcc0);
    dVar39 = *(double *)(param_1 + 0xcc8);
    local_338 = *(undefined1 (*) [16])(param_1 + 0xcd0);
    local_328 = *(double *)(param_1 + 0xce0);
    dStack_320 = *(double *)(param_1 + 0xce8);
    local_318 = *(double *)(param_1 + 0xcf0);
    dStack_310 = *(double *)(param_1 + 0xcf8);
    local_308 = *(double *)*(undefined1 (*) [16])(param_1 + 0xd00);
    dStack_300 = *(double *)(param_1 + 0xd08);
    local_2f8 = *(undefined1 (*) [16])(param_1 + 0xd10);
    if (*(char *)(param_1 + 0xcb0) == '\x01') {
      auVar33 = *(undefined1 (*) [16])(param_1 + 0xc90);
      dVar38 = auVar33._0_8_;
      dVar52 = auVar33._8_8_;
      auVar50 = *(undefined1 (*) [16])(param_1 + 0xca0);
      dVar41 = auVar50._0_8_;
      dVar58 = auVar50._8_8_;
      auVar33 = minpd(*(undefined1 (*) [16])(param_1 + 0xd00),auVar33);
      auVar42 = minpd(local_2f8,auVar50);
      auVar50._8_8_ = -(ulonglong)(auVar33._8_8_ < 0.0);
      auVar50._0_8_ = -(ulonglong)(auVar33._0_8_ < 0.0);
      iVar14 = movmskpd((int)param_1,auVar50);
      auVar33._8_8_ = -(ulonglong)(auVar42._8_8_ < 0.0);
      auVar33._0_8_ = -(ulonglong)(auVar42._0_8_ < 0.0);
      uVar17 = movmskpd(param_2,auVar33);
      if ((uVar17 & 0x3fffffff) == 0 && iVar14 == 0) {
        dVar51 = *(double *)(param_1 + 0xc50);
        dVar60 = *(double *)(param_1 + 0xc58);
        dVar49 = *(double *)(param_1 + 0xc68);
        dVar40 = *(double *)(param_1 + 0xc68);
        dVar53 = *(double *)(param_1 + 0xc50);
        dVar31 = *(double *)(param_1 + 0xc50);
        dVar57 = dVar53 * dVar39;
        dVar59 = dVar31 * dVar30;
        dVar54 = *(double *)(param_1 + 0xc58);
        dVar56 = *(double *)(param_1 + 0xc58);
        dVar61 = *(double *)(param_1 + 0xc60);
        dVar7 = *(double *)(param_1 + 0xc68);
        dVar47 = dVar30 * dVar54;
        dVar48 = dVar39 * dVar56;
        dVar55 = *(double *)(param_1 + 0xc60);
        dVar45 = *(double *)(param_1 + 0xc60);
        dVar46 = dVar30 * dVar45;
        dVar32 = (double)local_338._8_8_ * dVar55;
        dVar30 = dVar39 * dVar55 * -1.0 +
                 (double)local_338._0_8_ * dVar54 +
                 (double)local_338._8_8_ * dVar53 * 1.0 + dVar30 * dVar49;
        dVar39 = dVar46 * 1.0 +
                 (double)local_338._8_8_ * dVar56 +
                 (double)local_338._0_8_ * dVar31 * -1.0 + dVar39 * dVar40;
        local_328 = local_328 * dVar38;
        dStack_320 = dStack_320 * dVar52;
        local_318 = local_318 * dVar41;
        dStack_310 = dStack_310 * dVar58;
        dVar54 = dStack_320 * dVar51 - local_328 * dVar60;
        dVar56 = local_318 * dVar60 - dStack_320 * dVar61;
        dVar53 = local_328 * dVar61 - local_318 * dVar51;
        dVar31 = dStack_310 * dVar7 - dStack_310 * dVar7;
        dVar56 = dVar56 + dVar56;
        dVar53 = dVar53 + dVar53;
        dVar54 = dVar54 + dVar54;
        dVar31 = dVar31 + dVar31;
        local_308 = local_308 * dVar38;
        dStack_300 = dStack_300 * dVar52;
        local_328 = (dVar54 * dVar60 - dVar61 * dVar53) + dVar49 * dVar56 + local_328 +
                    *(double *)(param_1 + 0xc70);
        dStack_320 = (dVar56 * dVar61 - dVar54 * dVar51) + dVar40 * dVar53 + dStack_320 +
                     *(double *)(param_1 + 0xc78);
        local_318 = (dVar53 * dVar51 - dVar60 * dVar56) + dVar49 * dVar54 + local_318 +
                    *(double *)(param_1 + 0xc80);
        dStack_310 = (dVar31 * dVar7 - dVar31 * dVar7) + dVar40 * dVar31 + dStack_310 +
                     *(double *)(param_1 + 0xc88);
        local_2f8._8_8_ = (double)local_2f8._8_8_ * dVar58;
        local_2f8._0_8_ = (double)local_2f8._0_8_ * dVar41;
        local_338._8_8_ =
             (double)local_338._0_8_ * dVar45 * -1.0 +
             ((dVar59 * -1.0 + (double)local_338._8_8_ * dVar40) - dVar48);
        local_338._0_8_ =
             dVar32 * 1.0 + ((dVar57 * 1.0 + (double)local_338._0_8_ * dVar49) - dVar47);
        param_2 = 0;
      }
      else {
        dVar54 = *(double *)(param_1 + 0xc50);
        dVar56 = *(double *)(param_1 + 0xc58);
        dVar55 = *(double *)(param_1 + 0xc60);
        dVar45 = dVar56 + dVar56;
        dVar47 = dVar55 + dVar55;
        dVar49 = dVar54 * (dVar54 + dVar54);
        dVar53 = *(double *)(param_1 + 0xc50) * dVar47;
        dVar40 = *(double *)(param_1 + 0xc68);
        dVar48 = dVar47 * dVar40;
        dVar51 = (dVar54 + dVar54) * *(double *)(param_1 + 0xc68);
        dVar40 = dVar45 * dVar40;
        dVar31 = (double)local_2f8._0_8_ * dVar41;
        dVar58 = (double)local_2f8._8_8_ * dVar58;
        local_178 = (1.0 - (dVar49 + dVar56 * dVar45)) * dVar41;
        local_1a8 = (dVar45 * dVar54 - dVar48) * dVar52;
        dVar60 = local_308 * dVar38;
        dVar61 = dStack_300 * dVar52;
        local_1c8 = ((double)DAT_149934d80 - (dVar55 * dVar47 + dVar56 * dVar45)) * dVar38;
        dStack_1a0 = (DAT_149934d80._8_8_ - (dVar55 * dVar47 + dVar49)) * dVar52;
        dStack_1c0 = (dVar45 * dVar54 + dVar48) * dVar38;
        local_198 = (dVar47 * dVar56 + dVar51) * dVar52;
        local_1b8 = (dVar53 - dVar40) * dVar38;
        param_3 = SUB84(&local_1c8,0);
        uStack_1b0 = 0;
        uStack_190 = 0;
        local_188._8_8_ = (dVar47 * dVar56 - dVar51) * dVar41;
        local_188._0_8_ = (dVar40 + dVar53) * dVar41;
        uStack_170 = 0;
        local_168 = *(double *)(param_1 + 0xc70);
        dStack_160 = *(double *)(param_1 + 0xc78);
        local_158 = *(double *)(param_1 + 0xc80);
        uStack_150 = 0x3ff0000000000000;
        dVar38 = dVar39 + dVar39;
        dVar52 = (double)local_338._0_8_ + (double)local_338._0_8_;
        dVar41 = dVar30 * (dVar30 + dVar30);
        local_1f8 = (1.0 - (dVar41 + dVar39 * dVar38)) * (double)local_2f8._0_8_;
        dVar40 = (dVar30 + dVar30) * (double)local_338._8_8_;
        local_208 = (dVar38 * (double)local_338._8_8_ + dVar30 * dVar52) * (double)local_2f8._0_8_;
        local_228 = (dVar38 * dVar30 - dVar52 * (double)local_338._8_8_) * dStack_300;
        dStack_200 = (dVar52 * dVar39 - dVar40) * (double)local_2f8._0_8_;
        local_248 = ((double)DAT_149934d80 - ((double)local_338._0_8_ * dVar52 + dVar39 * dVar38)) *
                    local_308;
        dStack_220 = (DAT_149934d80._8_8_ - ((double)local_338._0_8_ * dVar52 + dVar41)) *
                     dStack_300;
        dStack_240 = (dVar38 * dVar30 + dVar52 * (double)local_338._8_8_) * local_308;
        local_218 = (dVar52 * dVar39 + dVar40) * dStack_300;
        local_238 = (dVar30 * dVar52 - dVar38 * (double)local_338._8_8_) * local_308;
        uStack_230 = 0;
        uStack_210 = 0;
        uStack_1f0 = 0;
        uStack_1d0 = 0x3ff0000000000000;
        puVar18 = local_148;
        local_1e8 = local_328;
        dStack_1e0 = dStack_320;
        local_1d8 = local_318;
        FUN_1447fea8d(puVar18);
        FUN_144a1c686(puVar18,0x3e45798ee0000000);
        auVar42._8_8_ = -(ulonglong)(0.0 <= dVar61);
        auVar42._0_8_ = -(ulonglong)(0.0 <= dVar60);
        auVar33 = blendvpd(_DAT_149936790,auVar62,auVar42);
        uVar20 = -(ulonglong)(0.0 <= dVar31);
        dVar30 = (double)(~uVar20 & 0xbff0000000000000 | uVar20 & 0x3ff0000000000000);
        dVar39 = auVar33._0_8_;
        local_148._8_8_ = (double)local_148._8_8_ * dVar39;
        local_148._0_8_ = (double)local_148._0_8_ * dVar39;
        local_138._0_8_ = (double)local_138._0_8_ * dVar39;
        dVar39 = auVar33._8_8_;
        local_118 = local_118 * dVar39;
        local_120 = local_120 * dVar39;
        local_128 = dVar39 * local_128;
        local_f8 = local_f8 * dVar30;
        local_100 = local_100 * dVar30;
        local_108 = dVar30 * local_108;
        FUN_14481fd10(&local_268);
        param_2 = SUB84(puVar18,0);
        dVar30 = local_258 * local_258 + local_268 * local_268;
        dVar39 = dStack_250 * dStack_250 + dStack_260 * dStack_260;
        auVar34._0_8_ = dVar30 + dVar39;
        auVar34._8_8_ = dVar30 + dVar39;
        auVar21._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar34._8_8_);
        auVar21._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar34._0_8_);
        auVar33 = sqrtpd(auVar34,auVar34);
        auVar62 = divpd(auVar62,auVar33);
        auVar63._0_8_ = auVar62._0_8_ * local_258;
        auVar63._8_8_ = auVar62._8_8_ * dStack_250;
        dVar30 = (double)((ulonglong)(local_268 * auVar62._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar34._0_8_));
        dVar39 = (double)((ulonglong)(dStack_260 * auVar62._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar34._8_8_));
        local_338 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar63,auVar21);
        local_328 = local_e8;
        dStack_320 = dStack_e0;
        local_318 = local_d8;
        dStack_310 = 0.0;
        cVar12 = *(char *)(param_1 + 0xc40);
        local_2f8._8_4_ = SUB84(dVar58,0);
        local_2f8._0_8_ = dVar31;
        local_2f8._12_4_ = (int)((ulonglong)dVar58 >> 0x20);
        local_308 = dVar60;
        dStack_300 = dVar61;
      }
    }
    if (cVar12 == '\x01') {
      lVar1 = *(longlong *)(param_1 + 0x148);
      lVar2 = *(longlong *)(lVar1 + 0xa8);
      if ((lVar2 == 0) || (lVar13 = *(longlong *)(lVar2 + 0x1c8), lVar13 == 0)) goto LAB_14328ae95;
      auVar62 = *(undefined1 (*) [16])(lVar1 + 0x280);
      auVar33 = *(undefined1 (*) [16])(lVar1 + 0x290);
      auVar3._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar62._8_8_));
      auVar3._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar62._0_8_));
      iVar14 = movmskpd(param_2,auVar3);
      auVar4._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar33._8_8_));
      auVar4._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar33._0_8_));
      uVar17 = movmskpd(param_3,auVar4);
      if ((uVar17 & 0x3fffffff) == 0 && iVar14 == 0) {
        local_348 = DAT_14c8464a0;
        dStack_340 = DAT_14c8464a8;
        dStack_350 = DAT_14c8464b8;
        local_358 = DAT_14c8464b0;
        auVar22 = _DAT_14c8464c0;
        auVar62 = _DAT_14c8464d0;
        dVar38 = DAT_14c846480;
        dVar41 = DAT_14c846488;
        dVar52 = DAT_14c846490;
        dVar58 = DAT_14c846498;
      }
      else {
        auVar42 = divpd(_DAT_149934d80,auVar62);
        auVar50 = divpd(ZEXT816(0x3ff0000000000000),auVar33);
        auVar22._0_8_ =
             (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar62._0_8_)) & auVar42._0_8_);
        auVar22._8_8_ =
             (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar62._8_8_)) & auVar42._8_8_);
        dVar53 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar33._0_8_)) & auVar50._0_8_);
        auVar62._8_8_ = 0;
        auVar62._0_8_ = dVar53;
        dVar52 = *(double *)(lVar1 + 0x250) * -1.0;
        dVar58 = *(double *)(lVar1 + 600) * 1.0;
        dVar38 = -*(double *)(lVar1 + 0x240);
        dVar41 = -*(double *)(lVar1 + 0x248);
        dVar40 = *(double *)(lVar1 + 0x260) * auVar22._0_8_;
        dVar49 = *(double *)(lVar1 + 0x268) * auVar22._8_8_;
        dVar53 = *(double *)(lVar1 + 0x270) * dVar53;
        dVar54 = dVar49 * dVar38 - dVar41 * dVar40;
        dVar56 = dVar53 * dVar41 - dVar52 * dVar49;
        dVar31 = dVar40 * dVar52 - dVar38 * dVar53;
        dVar56 = dVar56 + dVar56;
        dVar31 = dVar31 + dVar31;
        dVar54 = dVar54 + dVar54;
        local_348 = 0.0 - ((dVar54 * dVar41 - dVar31 * dVar52) + dVar58 * dVar56 + dVar40);
        dStack_340 = 0.0 - (dVar54 * *(double *)(lVar1 + 0x240) + dVar52 * dVar56 +
                           dVar58 * dVar31 + dVar49);
        local_358 = 0.0 - (dVar58 * dVar54 + dVar53 + (dVar31 * dVar38 - dVar56 * dVar41));
        dStack_350 = 0.0;
      }
      local_2d8 = *(undefined1 (*) [16])(lVar13 + 0x280);
      local_2e8 = *(undefined1 (*) [16])(lVar13 + 0x290);
      auVar33 = minpd(local_2d8,auVar22);
      auVar50 = minpd(local_2e8,auVar62);
      auVar28._8_8_ = -(ulonglong)(auVar33._8_8_ < 0.0);
      auVar28._0_8_ = -(ulonglong)(auVar33._0_8_ < 0.0);
      iVar15 = movmskpd((int)lVar1,auVar28);
      auVar35._8_8_ = -(ulonglong)(auVar50._8_8_ < 0.0);
      auVar35._0_8_ = -(ulonglong)(auVar50._0_8_ < 0.0);
      uVar17 = movmskpd(iVar14,auVar35);
      dVar49 = auVar22._0_8_;
      dVar53 = auVar22._8_8_;
      dVar40 = auVar62._0_8_;
      uVar19 = local_2e8._0_8_;
      uVar9 = local_2e8._8_8_;
      uVar10 = local_2d8._0_8_;
      uVar11 = local_2d8._8_8_;
      if ((uVar17 & 0x3fffffff) == 0 && iVar15 == 0) {
        dVar31 = *(double *)(lVar13 + 0x240);
        dVar54 = *(double *)(lVar13 + 0x248);
        dVar56 = *(double *)(lVar13 + 0x250);
        dVar55 = *(double *)(lVar13 + 600);
        dVar60 = dVar54 * dVar52 * -1.0 + dVar56 * dVar41 + dVar38 * dVar55 * 1.0 + dVar58 * dVar31;
        dVar61 = dVar31 * dVar52 * 1.0 + dVar55 * dVar41 + dVar38 * dVar56 * -1.0 + dVar58 * dVar54;
        auVar64._0_8_ =
             dVar55 * dVar52 * 1.0 + ((dVar38 * dVar54 * 1.0 + dVar58 * dVar56) - dVar41 * dVar31);
        auVar64._8_8_ =
             dVar56 * dVar52 * -1.0 + ((dVar38 * dVar31 * -1.0 + dVar58 * dVar55) - dVar41 * dVar54)
        ;
        dVar56 = *(double *)(lVar13 + 0x260) * dVar49;
        dVar55 = *(double *)(lVar13 + 0x268) * dVar53;
        dVar31 = *(double *)(lVar13 + 0x270) * dVar40;
        dVar54 = *(double *)(lVar13 + 0x278) * auVar62._8_8_;
        dVar45 = dVar55 * dVar38 - dVar41 * dVar56;
        dVar48 = dVar31 * dVar41 - dVar52 * dVar55;
        dVar51 = dVar56 * dVar52 - dVar38 * dVar31;
        dVar47 = dVar54 * dVar58 - dVar58 * dVar54;
        dVar48 = dVar48 + dVar48;
        dVar51 = dVar51 + dVar51;
        dVar45 = dVar45 + dVar45;
        dVar47 = dVar47 + dVar47;
        local_348 = local_348 + (dVar45 * dVar41 - dVar52 * dVar51) + dVar58 * dVar48 + dVar56;
        dStack_340 = dStack_340 + (dVar48 * dVar52 - dVar45 * dVar38) + dVar58 * dVar51 + dVar55;
        local_358 = local_358 + (dVar51 * dVar38 - dVar41 * dVar48) + dVar58 * dVar45 + dVar31;
        dStack_350 = dStack_350 + (dVar47 * dVar58 - dVar47 * dVar58) + dVar58 * dVar47 + dVar54;
      }
      else {
        dVar31 = dVar41 + dVar41;
        dVar55 = dVar52 + dVar52;
        dVar56 = dVar38 * (dVar38 + dVar38);
        local_1c8 = (1.0 - (dVar52 * dVar55 + dVar41 * dVar31)) * dVar49;
        dStack_1a0 = (1.0 - (dVar52 * dVar55 + dVar56)) * dVar53;
        dVar45 = (dVar38 + dVar38) * dVar58;
        local_1a8 = (dVar31 * dVar38 - dVar55 * dVar58) * dVar53;
        dVar54 = (dVar55 * dVar41 - dVar45) * dVar40;
        local_178 = (1.0 - (dVar56 + dVar41 * dVar31)) * dVar40;
        dVar52 = dVar40 * (double)local_2e8._0_8_;
        dStack_1c0 = (dVar31 * dVar38 + dVar55 * dVar58) * dVar49;
        local_198 = (dVar55 * dVar41 + dVar45) * dVar53;
        local_1b8 = (dVar38 * dVar55 - dVar31 * dVar58) * dVar49;
        uStack_1b0 = 0;
        uStack_190 = 0;
        local_188._8_4_ = SUB84(dVar54,0);
        local_188._0_8_ = (dVar38 * dVar55 + dVar31 * dVar58) * dVar40;
        local_188._12_4_ = (int)((ulonglong)dVar54 >> 0x20);
        uStack_170 = 0;
        local_168 = local_348;
        dStack_160 = dStack_340;
        local_158 = local_358;
        uStack_150 = 0x3ff0000000000000;
        dVar54 = *(double *)(lVar13 + 0x240);
        dVar56 = *(double *)(lVar13 + 0x248);
        dVar55 = *(double *)(lVar13 + 0x250);
        dVar47 = dVar56 + dVar56;
        dVar48 = dVar55 + dVar55;
        dVar45 = dVar54 * (dVar54 + dVar54);
        local_1f8 = (1.0 - (dVar45 + dVar56 * dVar47)) * (double)local_2e8._0_8_;
        dVar41 = *(double *)(lVar13 + 0x240) * dVar48;
        dVar38 = *(double *)(lVar13 + 600);
        dVar51 = dVar48 * dVar38;
        dVar60 = (dVar54 + dVar54) * *(double *)(lVar13 + 600);
        dVar38 = dVar47 * dVar38;
        local_208 = (dVar38 + dVar41) * (double)local_2e8._0_8_;
        local_228 = (dVar47 * dVar54 - dVar51) * (double)local_2d8._8_8_;
        dStack_200 = (dVar48 * dVar56 - dVar60) * (double)local_2e8._0_8_;
        dVar58 = dVar49 * (double)local_2d8._0_8_;
        dVar31 = dVar53 * (double)local_2d8._8_8_;
        local_248 = (1.0 - (dVar55 * dVar48 + dVar56 * dVar47)) * (double)local_2d8._0_8_;
        dStack_220 = (1.0 - (dVar55 * dVar48 + dVar45)) * (double)local_2d8._8_8_;
        dStack_240 = (dVar47 * dVar54 + dVar51) * (double)local_2d8._0_8_;
        local_218 = (dVar48 * dVar56 + dVar60) * (double)local_2d8._8_8_;
        local_238 = (dVar41 - dVar38) * (double)local_2d8._0_8_;
        uStack_230 = 0;
        uStack_210 = 0;
        uStack_1f0 = 0;
        local_1e8 = *(double *)(lVar13 + 0x260);
        dStack_1e0 = *(double *)(lVar13 + 0x268);
        local_1d8 = *(double *)(lVar13 + 0x270);
        uStack_1d0 = 0x3ff0000000000000;
        FUN_1447fea8d(local_148);
        FUN_144a1c686(local_148,0x3e45798ee0000000);
        auVar33 = _DAT_149934d80;
        auVar23._8_8_ = -(ulonglong)(0.0 <= dVar31);
        auVar23._0_8_ = -(ulonglong)(0.0 <= dVar58);
        auVar50 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar23);
        uVar20 = -(ulonglong)(0.0 <= dVar52);
        dVar38 = (double)(~uVar20 & 0xbff0000000000000 | uVar20 & 0x3ff0000000000000);
        dVar41 = auVar50._0_8_;
        local_148._8_8_ = (double)local_148._8_8_ * dVar41;
        local_148._0_8_ = (double)local_148._0_8_ * dVar41;
        local_138._0_8_ = (double)local_138._0_8_ * dVar41;
        dVar41 = auVar50._8_8_;
        local_118 = local_118 * dVar41;
        local_120 = local_120 * dVar41;
        local_128 = dVar41 * local_128;
        local_f8 = local_f8 * dVar38;
        local_100 = local_100 * dVar38;
        local_108 = dVar38 * local_108;
        pdVar16 = &local_268;
        lVar13 = FUN_14481fd10(pdVar16,local_148);
        iVar15 = (int)pdVar16;
        dVar38 = local_258 * local_258 + local_268 * local_268;
        dVar41 = dStack_250 * dStack_250 + dStack_260 * dStack_260;
        auVar36._0_8_ = dVar38 + dVar41;
        auVar36._8_8_ = dVar38 + dVar41;
        auVar24._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar36._8_8_);
        auVar24._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar36._0_8_);
        auVar50 = sqrtpd(auVar36,auVar36);
        auVar33 = divpd(auVar33,auVar50);
        auVar43._0_8_ = auVar33._0_8_ * local_258;
        auVar43._8_8_ = auVar33._8_8_ * dStack_250;
        dVar60 = (double)((ulonglong)(local_268 * auVar33._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar36._0_8_));
        dVar61 = (double)((ulonglong)(dStack_260 * auVar33._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar36._8_8_));
        auVar64 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar43,auVar24);
        local_348 = local_e8;
        dStack_340 = dStack_e0;
        local_358 = local_d8;
        dStack_350 = 0.0;
      }
      auVar33 = _DAT_149934d80;
      dVar53 = dVar53 * (double)uVar11;
      dVar49 = dVar49 * (double)uVar10;
      dVar40 = dVar40 * (double)uVar19;
      dVar38 = auVar62._8_8_ * (double)uVar9;
      auVar8._8_8_ = dStack_300;
      auVar8._0_8_ = local_308;
      auVar6._8_4_ = SUB84(dVar53,0);
      auVar6._0_8_ = dVar49;
      auVar6._12_4_ = (int)((ulonglong)dVar53 >> 0x20);
      auVar62 = minpd(auVar8,auVar6);
      auVar5._8_4_ = SUB84(dVar38,0);
      auVar5._0_8_ = dVar40;
      auVar5._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
      auVar50 = minpd(local_2f8,auVar5);
      auVar25._8_8_ = -(ulonglong)(auVar62._8_8_ < 0.0);
      auVar25._0_8_ = -(ulonglong)(auVar62._0_8_ < 0.0);
      iVar14 = movmskpd((int)lVar13,auVar25);
      auVar29._8_8_ = -(ulonglong)(auVar50._8_8_ < 0.0);
      auVar29._0_8_ = -(ulonglong)(auVar50._0_8_ < 0.0);
      uVar17 = movmskpd(iVar15,auVar29);
      dVar41 = auVar64._0_8_;
      dVar52 = auVar64._8_8_;
      if ((uVar17 & 0x3fffffff) == 0 && iVar14 == 0) {
        local_148._0_8_ =
             dVar39 * dVar41 * -1.0 +
             (double)local_338._0_8_ * dVar61 +
             (double)local_338._8_8_ * dVar60 * 1.0 + dVar30 * dVar52;
        local_148._8_8_ =
             dVar30 * dVar41 * 1.0 +
             (double)local_338._8_8_ * dVar61 +
             (double)local_338._0_8_ * dVar60 * -1.0 + dVar39 * dVar52;
        local_138._0_8_ =
             (double)local_338._8_8_ * dVar41 * 1.0 +
             ((dVar60 * dVar39 * 1.0 + (double)local_338._0_8_ * dVar52) - dVar61 * dVar30);
        local_138._8_8_ =
             (double)local_338._0_8_ * dVar41 * -1.0 +
             ((dVar60 * dVar30 * -1.0 + (double)local_338._8_8_ * dVar52) - dVar61 * dVar39);
        dVar49 = local_328 * dVar49;
        dVar53 = dStack_320 * dVar53;
        dVar40 = local_318 * dVar40;
        dVar38 = dStack_310 * dVar38;
        dVar58 = dVar53 * dVar60 - dVar49 * dVar61;
        dVar31 = dVar40 * dVar61 - dVar53 * dVar41;
        dVar30 = dVar49 * dVar41 - dVar40 * dVar60;
        dVar39 = dVar38 * dVar52 - dVar38 * dVar52;
        dVar31 = dVar31 + dVar31;
        dVar30 = dVar30 + dVar30;
        dVar58 = dVar58 + dVar58;
        dVar39 = dVar39 + dVar39;
        local_348 = local_348 + (dVar58 * dVar61 - dVar41 * dVar30) + dVar52 * dVar31 + dVar49;
        dStack_340 = dStack_340 + (dVar31 * dVar41 - dVar58 * dVar60) + dVar52 * dVar30 + dVar53;
        local_d8 = local_358 + (dVar30 * dVar60 - dVar61 * dVar31) + dVar52 * dVar58 + dVar40;
        dStack_350 = dStack_350 + (dVar39 * dVar52 - dVar39 * dVar52) + dVar52 * dVar39 + dVar38;
      }
      else {
        dVar54 = dVar61 + dVar61;
        dVar56 = dVar41 + dVar41;
        dVar31 = dVar60 * (dVar60 + dVar60);
        dVar55 = (dVar60 + dVar60) * dVar52;
        local_1a8 = (dVar54 * dVar60 - dVar56 * dVar52) * dVar53;
        dVar38 = local_308 * dVar49;
        dVar58 = dStack_300 * dVar53;
        local_1c8 = ((double)DAT_149934d80 - (dVar41 * dVar56 + dVar61 * dVar54)) * dVar49;
        dStack_1a0 = (DAT_149934d80._8_8_ - (dVar41 * dVar56 + dVar31)) * dVar53;
        dStack_1c0 = (dVar54 * dVar60 + dVar56 * dVar52) * dVar49;
        local_198 = (dVar56 * dVar61 + dVar55) * dVar53;
        local_1b8 = (dVar60 * dVar56 - dVar54 * dVar52) * dVar49;
        uStack_1b0 = 0;
        local_178 = (1.0 - (dVar31 + dVar61 * dVar54)) * dVar40;
        uStack_190 = 0;
        local_188._8_8_ = (dVar56 * dVar61 - dVar55) * dVar40;
        local_188._0_8_ = (dVar60 * dVar56 + dVar54 * dVar52) * dVar40;
        uStack_170 = 0;
        local_168 = local_348;
        dStack_160 = dStack_340;
        local_158 = local_358;
        uStack_150 = 0x3ff0000000000000;
        dVar52 = dVar39 + dVar39;
        dVar49 = (double)local_338._0_8_ + (double)local_338._0_8_;
        dVar41 = dVar30 * (dVar30 + dVar30);
        dVar53 = (dVar30 + dVar30) * (double)local_338._8_8_;
        uVar19 = local_2f8._0_8_;
        local_228 = (dVar52 * dVar30 - dVar49 * (double)local_338._8_8_) * dStack_300;
        dStack_200 = (dVar49 * dVar39 - dVar53) * (double)local_2f8._0_8_;
        local_248 = ((double)DAT_149934d80 - ((double)local_338._0_8_ * dVar49 + dVar39 * dVar52)) *
                    local_308;
        dStack_220 = (DAT_149934d80._8_8_ - ((double)local_338._0_8_ * dVar49 + dVar41)) *
                     dStack_300;
        dStack_240 = (dVar52 * dVar30 + dVar49 * (double)local_338._8_8_) * local_308;
        local_218 = (dVar49 * dVar39 + dVar53) * dStack_300;
        local_208 = (dVar30 * dVar49 + dVar52 * (double)local_338._8_8_) * (double)local_2f8._0_8_;
        local_238 = (dVar30 * dVar49 - dVar52 * (double)local_338._8_8_) * local_308;
        uStack_230 = 0;
        uStack_210 = 0;
        local_1f8 = (1.0 - (dVar41 + dVar39 * dVar52)) * (double)local_2f8._0_8_;
        uStack_1f0 = 0;
        local_1e8 = local_328;
        dStack_1e0 = dStack_320;
        local_1d8 = local_318;
        uStack_1d0 = 0x3ff0000000000000;
        FUN_1447fea8d(local_148);
        FUN_144a1c686(local_148,0x3e45798ee0000000);
        auVar26._8_8_ = -(ulonglong)(0.0 <= dVar58);
        auVar26._0_8_ = -(ulonglong)(0.0 <= dVar38);
        auVar62 = blendvpd(_DAT_149936790,auVar33,auVar26);
        uVar20 = -(ulonglong)(0.0 <= (double)uVar19 * dVar40);
        dVar30 = (double)(~uVar20 & 0xbff0000000000000 | uVar20 & 0x3ff0000000000000);
        dVar39 = auVar62._0_8_;
        local_148._8_8_ = (double)local_148._8_8_ * dVar39;
        local_148._0_8_ = (double)local_148._0_8_ * dVar39;
        local_138._0_8_ = (double)local_138._0_8_ * dVar39;
        dVar39 = auVar62._8_8_;
        local_118 = local_118 * dVar39;
        local_120 = local_120 * dVar39;
        local_128 = dVar39 * local_128;
        local_f8 = local_f8 * dVar30;
        local_100 = local_100 * dVar30;
        local_108 = dVar30 * local_108;
        FUN_14481fd10(&local_268,local_148);
        auVar37._0_8_ = local_268 * local_268;
        auVar37._8_8_ = dStack_260 * dStack_260;
        dVar30 = local_258 * local_258 + auVar37._0_8_;
        dVar39 = dStack_250 * dStack_250 + auVar37._8_8_;
        auVar44._0_8_ = dVar30 + dVar39;
        auVar44._8_8_ = dVar30 + dVar39;
        auVar27._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar44._8_8_);
        auVar27._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar44._0_8_);
        auVar62 = sqrtpd(auVar37,auVar44);
        auVar62 = divpd(auVar33,auVar62);
        auVar65._0_8_ = auVar62._0_8_ * local_258;
        auVar65._8_8_ = auVar62._8_8_ * dStack_250;
        local_148._0_8_ =
             (ulonglong)(local_268 * auVar62._0_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar44._0_8_);
        local_148._8_8_ =
             (ulonglong)(dStack_260 * auVar62._8_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar44._8_8_);
        local_138 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar65,auVar27);
        local_348 = local_e8;
        dStack_340 = dStack_e0;
        dStack_350 = 0.0;
      }
      uVar19 = *(undefined8 *)(lVar2 + 0x1c8);
      puVar18 = local_2b0;
      local_358 = local_d8;
      FUN_1448052ee(local_148,puVar18);
      pdVar16 = &local_2c8;
      local_2c8 = local_348;
      dStack_2c0 = dStack_340;
      dVar30 = local_358;
    }
    else {
      if (cVar12 != '\0') goto LAB_14328ae95;
      uVar19 = *(undefined8 *)(param_1 + 0x148);
      local_148._8_4_ = SUB84(dVar39,0);
      local_148._0_8_ = dVar30;
      local_148._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
      local_138 = local_338;
      puVar18 = local_280;
      FUN_1448052ee(local_148,puVar18);
      pdVar16 = &local_298;
      local_298 = local_328;
      dStack_290 = dStack_320;
      dVar30 = local_318;
    }
    pdVar16[2] = dVar30;
    local_360 = 0;
    local_368 = 0;
    FUN_1401ca0e6(uVar19,pdVar16,puVar18,0);
  }
LAB_14328ae95:
  if ((local_c0 ^ (ulonglong)auStack_388) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14328c432 FUN_14328c432 body=589 status=ok
// SIG undefined FUN_14328c432(void)

void FUN_14328c432(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  char cVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar2[3];
    if ((*(byte *)((longlong)plVar2 + 0x39) & 1) == 0) {
      lVar7 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar2 + 0x44) + lVar7;
      *(longlong *)(param_2 + 0x40) = lVar7;
      pcVar3 = *(code **)(*plVar2 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar2 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar3)(plVar2);
          if (cVar6 != '\0') {
            (**(code **)(*plVar2 + 0xa0))(plVar2,lVar7,&local_38);
            goto LAB_14328c5dd;
          }
        }
        puVar8 = (undefined8 *)(lVar7 + *(int *)((longlong)plVar2 + 0x44));
        if (puVar8 != &local_38) {
          if ((*(byte *)((longlong)plVar2 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar2 + 0x100))(plVar2,&local_38,puVar8,(int)plVar2[6]);
          }
          else {
            memcpy(&local_38,puVar8,
                   (longlong)(int)plVar2[6] * (longlong)*(int *)((longlong)plVar2 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_40 = (undefined4)plVar2[6];
        local_48 = 0;
        FUN_1400746b0(plVar2,&local_38,lVar7,1);
      }
      else {
        (*pcVar3)(plVar2,&local_38,lVar7);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar8;
        puVar8 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar2);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&local_38);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&local_38);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_38 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar4,param_2,&local_38);
    }
  }
LAB_14328c5dd:
  puVar8 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar8 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar7 = FUN_1474fe0ba(puVar8);
  if (lVar7 != 0) {
    FUN_140894062(lVar7);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14328c680 FUN_14328c680 body=81 status=ok
// SIG undefined FUN_14328c680(void)

double * FUN_14328c680(double *param_1,undefined8 param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  param_1[2] = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)param_1 = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 4) = uVar2;
  *(undefined4 *)(param_1 + 1) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
  lVar5 = FUN_1474fe102(param_2);
  if (lVar5 != 0) {
    fVar1 = *(float *)(lVar5 + 0x1c);
    *param_1 = (double)*(float *)(lVar5 + 0x18);
    param_1[1] = (double)fVar1;
    param_1[2] = 0.0;
  }
  return param_1;
}



// FUNCTION 14328c6d2 FUN_14328c6d2 body=135 status=ok
// SIG undefined FUN_14328c6d2(void)

double * FUN_14328c6d2(double *param_1,undefined8 param_2)

{
  int iVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  float *pfVar7;
  double dVar8;
  double dVar9;
  
  param_1[2] = DAT_14c8464f0;
  uVar5 = DAT_14c8464e8._4_4_;
  uVar4 = (undefined4)DAT_14c8464e8;
  uVar3 = DAT_14c8464e0._4_4_;
  *(undefined4 *)param_1 = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 4) = uVar3;
  *(undefined4 *)(param_1 + 1) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar5;
  lVar6 = FUN_1474fe102(param_2);
  if (lVar6 == 0) {
    return param_1;
  }
  iVar1 = *(int *)(lVar6 + 0x50);
  if (iVar1 < 3) {
    if (iVar1 == 2) {
      pfVar7 = *(float **)(lVar6 + 0x48);
      dVar2 = 0.0;
      goto LAB_14328c71e;
    }
    if (iVar1 < 1) {
      dVar8 = 0.0;
      dVar2 = 0.0;
      dVar9 = 0.0;
      goto LAB_14328c727;
    }
    pfVar7 = *(float **)(lVar6 + 0x48);
    dVar8 = 0.0;
    dVar2 = 0.0;
  }
  else {
    pfVar7 = *(float **)(lVar6 + 0x48);
    dVar2 = (double)pfVar7[0x1c];
LAB_14328c71e:
    dVar8 = (double)pfVar7[0xe];
  }
  dVar9 = (double)*pfVar7;
LAB_14328c727:
  *param_1 = dVar9;
  param_1[1] = dVar8;
  param_1[2] = dVar2;
  return param_1;
}



// FUNCTION 14328c75a FUN_14328c75a body=40 status=ok
// SIG undefined FUN_14328c75a(void)

void FUN_14328c75a(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1474fe102();
  if (lVar1 == 0) {
    return;
  }
  FUN_1474c5aa8(lVar1,param_2);
  return;
}



// FUNCTION 14328c782 FUN_14328c782 body=650 status=ok
// SIG undefined FUN_14328c782(void)

void FUN_14328c782(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  byte *pbVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  char cVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar7 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar7[3];
    if ((*(byte *)((longlong)plVar7 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar7 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar7 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar7 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar3)(plVar7);
          if (cVar6 != '\0') {
            (**(code **)(*plVar7 + 0xa0))(plVar7,lVar2,&local_38);
            goto LAB_14328c932;
          }
        }
        puVar8 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar7 + 0x44));
        if (puVar8 != &local_38) {
          if ((*(byte *)((longlong)plVar7 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar7 + 0x100))(plVar7,&local_38,puVar8,(int)plVar7[6]);
          }
          else {
            memcpy(&local_38,puVar8,
                   (longlong)(int)plVar7[6] * (longlong)*(int *)((longlong)plVar7 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = (undefined4)plVar7[6];
        local_68 = 0;
        FUN_1400746b0(plVar7,&local_38,lVar2,1);
      }
      else {
        (*pcVar3)(plVar7,&local_38,lVar2);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar8;
        puVar8 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar7);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&local_38);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&local_38);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_38 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar4,param_2,&local_38);
    }
  }
LAB_14328c932:
  puVar8 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar8 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = DAT_14c8464f0;
  local_58 = (undefined4)DAT_14c8464e0;
  uStack_54 = DAT_14c8464e0._4_4_;
  uStack_50 = (undefined4)DAT_14c8464e8;
  uStack_4c = DAT_14c8464e8._4_4_;
  plVar7 = (longlong *)FUN_1474fe14a(puVar8);
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x1a0))(plVar7,&local_58);
  }
  *(undefined8 *)(param_3 + 4) = local_48;
  *param_3 = local_58;
  param_3[1] = uStack_54;
  param_3[2] = uStack_50;
  param_3[3] = uStack_4c;
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14328ca0e FUN_14328ca0e body=1274 status=ok
// SIG undefined FUN_14328ca0e(void)

void FUN_14328ca0e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  byte *pbVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = 0;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar10 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar10[3];
    if ((*(byte *)((longlong)plVar10 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar10 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar10 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar10 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar9 = (*pcVar3)(plVar10);
          if (cVar9 != '\0') {
            (**(code **)(*plVar10 + 0xa0))(plVar10,lVar2,&local_48);
            goto LAB_14328cbc4;
          }
        }
        puVar11 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar10 + 0x44));
        if (puVar11 != &local_48) {
          if ((*(byte *)((longlong)plVar10 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar10 + 0x100))(plVar10,&local_48,puVar11,(int)plVar10[6]);
          }
          else {
            memcpy(&local_48,puVar11,
                   (longlong)(int)plVar10[6] * (longlong)*(int *)((longlong)plVar10 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_70 = CONCAT44(local_70._4_4_,(int)plVar10[6]);
        local_78 = local_78 & 0xffffffff00000000;
        FUN_1400746b0(plVar10,&local_48,lVar2,1);
      }
      else {
        (*pcVar3)(plVar10,&local_48,lVar2);
      }
    }
    else {
      puVar11 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar12 = (undefined8 *)*puVar11;
        puVar11 = puVar12 + 2;
      } while ((longlong *)*puVar12 != plVar10);
      *(undefined8 *)(param_2 + 0x38) = puVar12[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&local_48);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&local_48);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_48 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar4,param_2,&local_48);
    }
  }
LAB_14328cbc4:
  puVar11 = &local_48;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar11 = *(undefined8 **)(param_2 + 0x38);
  }
  local_50 = 0;
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
    plVar10 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar10[3];
    if ((*(byte *)((longlong)plVar10 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar10 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar10 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar10 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar9 = (*pcVar3)(plVar10);
          if (cVar9 != '\0') {
            (**(code **)(*plVar10 + 0xa0))(plVar10,lVar2,&local_50);
            goto LAB_14328cd8a;
          }
        }
        puVar12 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar10 + 0x44));
        if (puVar12 != &local_50) {
          if ((*(byte *)((longlong)plVar10 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar10 + 0x100))(plVar10,&local_50,puVar12,(int)plVar10[6]);
          }
          else {
            memcpy(&local_50,puVar12,
                   (longlong)(int)plVar10[6] * (longlong)*(int *)((longlong)plVar10 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_70 = CONCAT44(local_70._4_4_,(int)plVar10[6]);
        local_78 = local_78 & 0xffffffff00000000;
        FUN_1400746b0(plVar10,&local_50,lVar2,1);
      }
      else {
        (*pcVar3)(plVar10,&local_50,lVar2);
      }
    }
    else {
      puVar12 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar12;
        puVar12 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar10);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&local_50);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&local_50);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_50 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar4,param_2,&local_50);
    }
  }
LAB_14328cd8a:
  uVar4 = local_50;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar10 = (longlong *)FUN_1474fe14a(puVar11);
  if (plVar10 != (longlong *)0x0) {
    (**(code **)(*plVar10 + 0x1e0))(plVar10,uVar4);
  }
  uVar6 = *(undefined4 *)((longlong)puVar11 + 4);
  uVar7 = *(undefined4 *)(puVar11 + 1);
  uVar8 = *(undefined4 *)((longlong)puVar11 + 0xc);
  *param_3 = *(undefined4 *)puVar11;
  param_3[1] = uVar6;
  param_3[2] = uVar7;
  param_3[3] = uVar8;
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14328cf0a FUN_14328cf0a body=2900 status=ok
// SIG undefined FUN_14328cf0a(void)

void FUN_14328cf0a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  char cVar10;
  byte *pbVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined4 *_Src;
  float *_Src_00;
  undefined8 *puVar17;
  undefined1 auStack_118 [32];
  ulonglong local_f8;
  undefined8 local_f0;
  undefined *local_e8;
  code *local_e0;
  float local_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  longlong *plStack_b0;
  float local_a0 [2];
  undefined8 local_98;
  undefined2 local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar13 = (longlong *)(param_2 + 0x38);
  local_b8 = 0;
  plStack_b0 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar11 = *(byte **)(param_2 + 0x20);
  if (pbVar11 == (byte *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar2[3];
    if ((*(byte *)((longlong)plVar2 + 0x39) & 1) == 0) {
      lVar15 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar2 + 0x44) + lVar15;
      *(longlong *)(param_2 + 0x40) = lVar15;
      pcVar3 = *(code **)(*plVar2 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar2 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar10 = (*pcVar3)(plVar2);
          if (cVar10 != '\0') {
            (**(code **)(*plVar2 + 0xa0))(plVar2,lVar15,&local_b8);
            goto LAB_14328d0b0;
          }
        }
        puVar17 = (undefined8 *)(lVar15 + *(int *)((longlong)plVar2 + 0x44));
        if (puVar17 != &local_b8) {
          if ((*(byte *)((longlong)plVar2 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar2 + 0x100))(plVar2,&local_b8,puVar17,(int)plVar2[6]);
          }
          else {
            memcpy(&local_b8,puVar17,
                   (longlong)(int)plVar2[6] * (longlong)*(int *)((longlong)plVar2 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_f0 = CONCAT44(local_f0._4_4_,(int)plVar2[6]);
        local_f8 = local_f8 & 0xffffffff00000000;
        FUN_1400746b0(plVar2,&local_b8,lVar15,1);
      }
      else {
        (*pcVar3)(plVar2,&local_b8,lVar15);
      }
    }
    else {
      puVar17 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar16 = (undefined8 *)*puVar17;
        puVar17 = puVar16 + 2;
      } while ((longlong *)*puVar16 != plVar2);
      *plVar13 = puVar16[1];
    }
LAB_14328d0b0:
    pbVar11 = *(byte **)(param_2 + 0x20);
    puVar17 = *(undefined8 **)(param_2 + 0x38);
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar11 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar11];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&local_b8);
      goto LAB_14328d0b0;
    }
    if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&local_b8);
      goto LAB_14328d0b0;
    }
    if (pcVar3 != (code *)&LAB_1428293cc) {
      (*pcVar3)(uVar4,param_2,&local_b8);
      goto LAB_14328d0b0;
    }
    local_b8 = *(undefined8 *)(pbVar11 + 1);
    pbVar11 = pbVar11 + 9;
    *(byte **)(param_2 + 0x20) = pbVar11;
    puVar17 = (undefined8 *)0x0;
  }
  puVar16 = &local_b8;
  if (puVar17 != (undefined8 *)0x0) {
    puVar16 = puVar17;
  }
  local_c8 = 0;
  uStack_c0 = 0;
  *plVar13 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar11 == (byte *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar2[3];
    if ((*(byte *)((longlong)plVar2 + 0x39) & 1) == 0) {
      lVar15 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar2 + 0x44) + lVar15;
      *(longlong *)(param_2 + 0x40) = lVar15;
      pcVar3 = *(code **)(*plVar2 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar2 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar10 = (*pcVar3)(plVar2);
          if (cVar10 != '\0') {
            (**(code **)(*plVar2 + 0xa0))(plVar2,lVar15,&local_c8);
            goto LAB_14328d273;
          }
        }
        puVar17 = (undefined8 *)(lVar15 + *(int *)((longlong)plVar2 + 0x44));
        if (puVar17 != &local_c8) {
          if ((*(byte *)((longlong)plVar2 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar2 + 0x100))(plVar2,&local_c8,puVar17,(int)plVar2[6]);
          }
          else {
            memcpy(&local_c8,puVar17,
                   (longlong)(int)plVar2[6] * (longlong)*(int *)((longlong)plVar2 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_f0 = CONCAT44(local_f0._4_4_,(int)plVar2[6]);
        local_f8 = local_f8 & 0xffffffff00000000;
        FUN_1400746b0(plVar2,&local_c8,lVar15,1);
      }
      else {
        (*pcVar3)(plVar2,&local_c8,lVar15);
      }
    }
    else {
      puVar17 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar12 = (undefined8 *)*puVar17;
        puVar17 = puVar12 + 2;
      } while ((longlong *)*puVar12 != plVar2);
      *(undefined8 *)(param_2 + 0x38) = puVar12[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar11 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar11];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&local_c8);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&local_c8);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_c8 = *(undefined8 *)(pbVar11 + 1);
      *(byte **)(param_2 + 0x20) = pbVar11 + 9;
    }
    else {
      (*pcVar3)(uVar4,param_2,&local_c8);
    }
  }
LAB_14328d273:
  puVar17 = &local_c8;
  if ((undefined8 *)*plVar13 != (undefined8 *)0x0) {
    puVar17 = (undefined8 *)*plVar13;
  }
  uStack_d0 = 0;
  uStack_cc = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_e8 = (undefined *)FUN_1446ddbd2();
      local_e0 = FUN_1468d96f0;
      local_f0 = 0;
      local_f8 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar11 = *(byte **)(param_2 + 0x20);
  if (pbVar11 == (byte *)0x0) {
    plVar13 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar13[3];
    if ((*(byte *)((longlong)plVar13 + 0x39) & 1) == 0) {
      lVar15 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar13 + 0x44) + lVar15;
      *(longlong *)(param_2 + 0x40) = lVar15;
      pcVar3 = *(code **)(*plVar13 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar13 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar10 = (*pcVar3)(plVar13);
          if (cVar10 != '\0') {
            (**(code **)(*plVar13 + 0xa0))(plVar13,lVar15,&uStack_d0);
            goto LAB_14328d43a;
          }
        }
        _Src = (undefined4 *)(lVar15 + *(int *)((longlong)plVar13 + 0x44));
        if (_Src != &uStack_d0) {
          if ((*(byte *)((longlong)plVar13 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar13 + 0x100))(plVar13,&uStack_d0,_Src,(int)plVar13[6]);
          }
          else {
            memcpy(&uStack_d0,_Src,
                   (longlong)(int)plVar13[6] * (longlong)*(int *)((longlong)plVar13 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_f0 = CONCAT44(local_f0._4_4_,(int)plVar13[6]);
        local_f8 = local_f8 & 0xffffffff00000000;
        FUN_1400746b0(plVar13,&uStack_d0,lVar15,1);
      }
      else {
        (*pcVar3)(plVar13,&uStack_d0,lVar15);
      }
    }
    else {
      puVar12 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar12;
        puVar12 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar13);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar11 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar11];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&uStack_d0);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&uStack_d0);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar4 = *(undefined8 *)(pbVar11 + 1);
      *(byte **)(param_2 + 0x20) = pbVar11 + 9;
      uStack_d0 = (undefined4)uVar4;
      uStack_cc = (undefined4)((ulonglong)uVar4 >> 0x20);
    }
    else {
      (*pcVar3)(uVar4,param_2,&uStack_d0);
    }
  }
LAB_14328d43a:
  local_d4 = 0.0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_e0 = FUN_1408a629c;
      local_e8 = &DAT_14c9520b8;
      local_f0 = 0;
      local_f8 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar11 = *(byte **)(param_2 + 0x20);
  if (pbVar11 == (byte *)0x0) {
    plVar13 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar13[3];
    if ((*(byte *)((longlong)plVar13 + 0x39) & 1) == 0) {
      lVar15 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar13 + 0x44) + lVar15;
      *(longlong *)(param_2 + 0x40) = lVar15;
      pcVar3 = *(code **)(*plVar13 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar13 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar10 = (*pcVar3)(plVar13);
          if (cVar10 != '\0') {
            (**(code **)(*plVar13 + 0xa0))(plVar13,lVar15,&local_d4);
            goto LAB_14328d5f0;
          }
        }
        _Src_00 = (float *)(lVar15 + *(int *)((longlong)plVar13 + 0x44));
        if (_Src_00 != &local_d4) {
          if ((*(byte *)((longlong)plVar13 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar13 + 0x100))(plVar13,&local_d4,_Src_00,(int)plVar13[6]);
          }
          else {
            memcpy(&local_d4,_Src_00,
                   (longlong)(int)plVar13[6] * (longlong)*(int *)((longlong)plVar13 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_f0 = CONCAT44(local_f0._4_4_,(int)plVar13[6]);
        local_f8 = local_f8 & 0xffffffff00000000;
        FUN_1400746b0(plVar13,&local_d4,lVar15,1);
      }
      else {
        (*pcVar3)(plVar13,&local_d4,lVar15);
      }
    }
    else {
      puVar12 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar12;
        puVar12 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar13);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar11 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar11];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&local_d4);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&local_d4);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar4 = *(undefined8 *)(pbVar11 + 1);
      *(byte **)(param_2 + 0x20) = pbVar11 + 9;
      local_d4 = (float)uVar4;
      uStack_d0 = (undefined4)((ulonglong)uVar4 >> 0x20);
    }
    else {
      (*pcVar3)(uVar4,param_2,&local_d4);
    }
  }
LAB_14328d5f0:
  fVar9 = local_d4;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar15 = CONCAT44(uStack_cc,uStack_d0);
  plVar13 = (longlong *)FUN_1474fe14a(puVar17);
  if (plVar13 != (longlong *)0x0) {
    lVar14 = (**(code **)(*plVar13 + 0x198))(plVar13);
    (**(code **)(*plVar13 + 0x1e0))(plVar13,lVar15);
    if ((lVar14 != lVar15) && (0.0 < fVar9)) {
      lVar15 = FUN_1478ed1c2(puVar16);
      if (lVar15 != 0) {
        plVar13 = (longlong *)FUN_14025b9ca(lVar15);
        if (plVar13 != (longlong *)0x0) {
          local_a0[0] = -1.0;
          local_98 = 0;
          local_90 = 0;
          local_88 = 0;
          if (*(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110) <
              DAT_14c844850) {
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
          local_80 = DAT_14c844840;
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
          local_78 = 0;
          local_70 = 0;
          uStack_68 = 0;
          local_60 = 0xffffffff;
          local_58 = 0;
          local_a0[0] = fVar9;
          (**(code **)(*plVar13 + 0x20))(plVar13,local_a0);
          if (local_70 != 0) {
            FUN_1400020a8();
          }
          if (local_80 != (longlong *)0x0) {
            (**(code **)(*local_80 + 0x10))();
          }
        }
      }
    }
  }
  uVar6 = *(undefined4 *)((longlong)puVar17 + 4);
  uVar7 = *(undefined4 *)(puVar17 + 1);
  uVar8 = *(undefined4 *)((longlong)puVar17 + 0xc);
  *param_3 = *(undefined4 *)puVar17;
  param_3[1] = uVar6;
  param_3[2] = uVar7;
  param_3[3] = uVar8;
  if (plStack_b0 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_b0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_b0 + 0x10))();
    }
  }
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14328da60 FUN_14328da60 body=1276 status=ok
// SIG undefined FUN_14328da60(void)

void FUN_14328da60(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  byte *pbVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  char cVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined4 *puVar13;
  int *_Src;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  int local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar12 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar12[3];
    if ((*(byte *)((longlong)plVar12 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar12 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar12 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar12 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar10 = (*pcVar3)(plVar12);
          if (cVar10 != '\0') {
            (**(code **)(*plVar12 + 0xa0))(plVar12,lVar2,&uStack_48);
            goto LAB_14328dc17;
          }
        }
        puVar13 = (undefined4 *)(lVar2 + *(int *)((longlong)plVar12 + 0x44));
        if (puVar13 != &uStack_48) {
          if ((*(byte *)((longlong)plVar12 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar12 + 0x100))(plVar12,&uStack_48,puVar13,(int)plVar12[6]);
          }
          else {
            memcpy(&uStack_48,puVar13,
                   (longlong)(int)plVar12[6] * (longlong)*(int *)((longlong)plVar12 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_70 = CONCAT44(local_70._4_4_,(int)plVar12[6]);
        local_78 = local_78 & 0xffffffff00000000;
        FUN_1400746b0(plVar12,&uStack_48,lVar2,1);
      }
      else {
        (*pcVar3)(plVar12,&uStack_48,lVar2);
      }
    }
    else {
      puVar11 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar11;
        puVar11 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar12);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&uStack_48);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&uStack_48);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar4 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_48 = (undefined4)uVar4;
      uStack_44 = (undefined4)((ulonglong)uVar4 >> 0x20);
    }
    else {
      (*pcVar3)(uVar4,param_2,&uStack_48);
    }
  }
LAB_14328dc17:
  puVar13 = &uStack_48;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar13 = *(undefined4 **)(param_2 + 0x38);
  }
  local_4c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_14067a048;
      local_70 = 0;
      local_78 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar12 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar12[3];
    if ((*(byte *)((longlong)plVar12 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar12 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar12 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar12 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar10 = (*pcVar3)(plVar12);
          if (cVar10 != '\0') {
            (**(code **)(*plVar12 + 0xa0))(plVar12,lVar2,&local_4c);
            goto LAB_14328dddc;
          }
        }
        _Src = (int *)(lVar2 + *(int *)((longlong)plVar12 + 0x44));
        if (_Src != &local_4c) {
          if ((*(byte *)((longlong)plVar12 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar12 + 0x100))(plVar12,&local_4c,_Src,(int)plVar12[6]);
          }
          else {
            memcpy(&local_4c,_Src,
                   (longlong)(int)plVar12[6] * (longlong)*(int *)((longlong)plVar12 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_70 = CONCAT44(local_70._4_4_,(int)plVar12[6]);
        local_78 = local_78 & 0xffffffff00000000;
        FUN_1400746b0(plVar12,&local_4c,lVar2,1);
      }
      else {
        (*pcVar3)(plVar12,&local_4c,lVar2);
      }
    }
    else {
      puVar11 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar11;
        puVar11 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar12);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&local_4c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&local_4c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar4 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_4c = (int)uVar4;
      uStack_48 = (undefined4)((ulonglong)uVar4 >> 0x20);
    }
    else {
      (*pcVar3)(uVar4,param_2,&local_4c);
    }
  }
LAB_14328dddc:
  iVar9 = local_4c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar12 = (longlong *)FUN_1474fe14a(puVar13);
  if (plVar12 != (longlong *)0x0) {
    (**(code **)(*plVar12 + 0x1f8))(plVar12,iVar9 != 0);
  }
  uVar6 = puVar13[1];
  uVar7 = puVar13[2];
  uVar8 = puVar13[3];
  *param_3 = *puVar13;
  param_3[1] = uVar6;
  param_3[2] = uVar7;
  param_3[3] = uVar8;
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14328df5e FUN_14328df5e body=1296 status=ok
// SIG undefined FUN_14328df5e(void)

void FUN_14328df5e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  byte *pbVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined4 *puVar12;
  undefined4 *_Src;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined8 local_80;
  undefined *local_78;
  code *local_70;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar11 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar11[3];
    if ((*(byte *)((longlong)plVar11 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar11 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar11 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar11 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar9 = (*pcVar3)(plVar11);
          if (cVar9 != '\0') {
            (**(code **)(*plVar11 + 0xa0))(plVar11,lVar2,&uStack_58);
            goto LAB_14328e11c;
          }
        }
        puVar12 = (undefined4 *)(lVar2 + *(int *)((longlong)plVar11 + 0x44));
        if (puVar12 != &uStack_58) {
          if ((*(byte *)((longlong)plVar11 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar11 + 0x100))(plVar11,&uStack_58,puVar12,(int)plVar11[6]);
          }
          else {
            memcpy(&uStack_58,puVar12,
                   (longlong)(int)plVar11[6] * (longlong)*(int *)((longlong)plVar11 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_80 = CONCAT44(local_80._4_4_,(int)plVar11[6]);
        local_88 = local_88 & 0xffffffff00000000;
        FUN_1400746b0(plVar11,&uStack_58,lVar2,1);
      }
      else {
        (*pcVar3)(plVar11,&uStack_58,lVar2);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar10;
        puVar10 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar11);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&uStack_58);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&uStack_58);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar4 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_58 = (undefined4)uVar4;
      uStack_54 = (undefined4)((ulonglong)uVar4 >> 0x20);
    }
    else {
      (*pcVar3)(uVar4,param_2,&uStack_58);
    }
  }
LAB_14328e11c:
  puVar12 = &uStack_58;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar12 = *(undefined4 **)(param_2 + 0x38);
  }
  local_5c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_70 = FUN_1408a629c;
      local_78 = &DAT_14c9520b8;
      local_80 = 0;
      local_88 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar11 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar11[3];
    if ((*(byte *)((longlong)plVar11 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar11 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar11 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar11 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar9 = (*pcVar3)(plVar11);
          if (cVar9 != '\0') {
            (**(code **)(*plVar11 + 0xa0))(plVar11,lVar2,&local_5c);
            goto LAB_14328e2e1;
          }
        }
        _Src = (undefined4 *)(lVar2 + *(int *)((longlong)plVar11 + 0x44));
        if (_Src != &local_5c) {
          if ((*(byte *)((longlong)plVar11 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar11 + 0x100))(plVar11,&local_5c,_Src,(int)plVar11[6]);
          }
          else {
            memcpy(&local_5c,_Src,
                   (longlong)(int)plVar11[6] * (longlong)*(int *)((longlong)plVar11 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_80 = CONCAT44(local_80._4_4_,(int)plVar11[6]);
        local_88 = local_88 & 0xffffffff00000000;
        FUN_1400746b0(plVar11,&local_5c,lVar2,1);
      }
      else {
        (*pcVar3)(plVar11,&local_5c,lVar2);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar10;
        puVar10 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar11);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&local_5c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&local_5c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar4 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_5c = (undefined4)uVar4;
      uStack_58 = (undefined4)((ulonglong)uVar4 >> 0x20);
    }
    else {
      (*pcVar3)(uVar4,param_2,&local_5c);
    }
  }
LAB_14328e2e1:
  uVar6 = local_5c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar11 = (longlong *)FUN_1474fe14a(puVar12);
  if (plVar11 != (longlong *)0x0) {
    (**(code **)(*plVar11 + 0x1f0))(plVar11,uVar6);
  }
  uVar6 = puVar12[1];
  uVar7 = puVar12[2];
  uVar8 = puVar12[3];
  *param_3 = *puVar12;
  param_3[1] = uVar6;
  param_3[2] = uVar7;
  param_3[3] = uVar8;
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14328e470 FUN_14328e470 body=1276 status=ok
// SIG undefined FUN_14328e470(void)

void FUN_14328e470(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  byte *pbVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  char cVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined4 *puVar13;
  int *_Src;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  int local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar12 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar12[3];
    if ((*(byte *)((longlong)plVar12 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar12 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar12 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar12 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar10 = (*pcVar3)(plVar12);
          if (cVar10 != '\0') {
            (**(code **)(*plVar12 + 0xa0))(plVar12,lVar2,&uStack_48);
            goto LAB_14328e627;
          }
        }
        puVar13 = (undefined4 *)(lVar2 + *(int *)((longlong)plVar12 + 0x44));
        if (puVar13 != &uStack_48) {
          if ((*(byte *)((longlong)plVar12 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar12 + 0x100))(plVar12,&uStack_48,puVar13,(int)plVar12[6]);
          }
          else {
            memcpy(&uStack_48,puVar13,
                   (longlong)(int)plVar12[6] * (longlong)*(int *)((longlong)plVar12 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_70 = CONCAT44(local_70._4_4_,(int)plVar12[6]);
        local_78 = local_78 & 0xffffffff00000000;
        FUN_1400746b0(plVar12,&uStack_48,lVar2,1);
      }
      else {
        (*pcVar3)(plVar12,&uStack_48,lVar2);
      }
    }
    else {
      puVar11 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar11;
        puVar11 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar12);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&uStack_48);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&uStack_48);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar4 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_48 = (undefined4)uVar4;
      uStack_44 = (undefined4)((ulonglong)uVar4 >> 0x20);
    }
    else {
      (*pcVar3)(uVar4,param_2,&uStack_48);
    }
  }
LAB_14328e627:
  puVar13 = &uStack_48;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar13 = *(undefined4 **)(param_2 + 0x38);
  }
  local_4c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_14067a048;
      local_70 = 0;
      local_78 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar12 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar12[3];
    if ((*(byte *)((longlong)plVar12 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar12 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar12 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar12 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar10 = (*pcVar3)(plVar12);
          if (cVar10 != '\0') {
            (**(code **)(*plVar12 + 0xa0))(plVar12,lVar2,&local_4c);
            goto LAB_14328e7ec;
          }
        }
        _Src = (int *)(lVar2 + *(int *)((longlong)plVar12 + 0x44));
        if (_Src != &local_4c) {
          if ((*(byte *)((longlong)plVar12 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar12 + 0x100))(plVar12,&local_4c,_Src,(int)plVar12[6]);
          }
          else {
            memcpy(&local_4c,_Src,
                   (longlong)(int)plVar12[6] * (longlong)*(int *)((longlong)plVar12 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_70 = CONCAT44(local_70._4_4_,(int)plVar12[6]);
        local_78 = local_78 & 0xffffffff00000000;
        FUN_1400746b0(plVar12,&local_4c,lVar2,1);
      }
      else {
        (*pcVar3)(plVar12,&local_4c,lVar2);
      }
    }
    else {
      puVar11 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar11;
        puVar11 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar12);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&local_4c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&local_4c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar4 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_4c = (int)uVar4;
      uStack_48 = (undefined4)((ulonglong)uVar4 >> 0x20);
    }
    else {
      (*pcVar3)(uVar4,param_2,&local_4c);
    }
  }
LAB_14328e7ec:
  iVar9 = local_4c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar12 = (longlong *)FUN_1474fe14a(puVar13);
  if (plVar12 != (longlong *)0x0) {
    (**(code **)(*plVar12 + 0x1c8))(plVar12,iVar9 != 0);
  }
  uVar6 = puVar13[1];
  uVar7 = puVar13[2];
  uVar8 = puVar13[3];
  *param_3 = *puVar13;
  param_3[1] = uVar6;
  param_3[2] = uVar7;
  param_3[3] = uVar8;
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14328e96e FUN_14328e96e body=1275 status=ok
// SIG undefined FUN_14328e96e(void)

void FUN_14328e96e(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  char cVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined8 local_80;
  undefined8 local_78;
  code *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar2[3];
    if ((*(byte *)((longlong)plVar2 + 0x39) & 1) == 0) {
      lVar7 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar2 + 0x44) + lVar7;
      *(longlong *)(param_2 + 0x40) = lVar7;
      pcVar3 = *(code **)(*plVar2 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar2 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar3)(plVar2);
          if (cVar6 != '\0') {
            (**(code **)(*plVar2 + 0xa0))(plVar2,lVar7,&local_38);
            goto LAB_14328eb25;
          }
        }
        puVar8 = (undefined8 *)(lVar7 + *(int *)((longlong)plVar2 + 0x44));
        if (puVar8 != &local_38) {
          if ((*(byte *)((longlong)plVar2 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar2 + 0x100))(plVar2,&local_38,puVar8,(int)plVar2[6]);
          }
          else {
            memcpy(&local_38,puVar8,
                   (longlong)(int)plVar2[6] * (longlong)*(int *)((longlong)plVar2 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_80 = CONCAT44(local_80._4_4_,(int)plVar2[6]);
        local_88 = local_88 & 0xffffffff00000000;
        FUN_1400746b0(plVar2,&local_38,lVar7,1);
      }
      else {
        (*pcVar3)(plVar2,&local_38,lVar7);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar9 = (undefined8 *)*puVar8;
        puVar8 = puVar9 + 2;
      } while ((longlong *)*puVar9 != plVar2);
      *(undefined8 *)(param_2 + 0x38) = puVar9[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&local_38);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&local_38);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_38 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar4,param_2,&local_38);
    }
  }
LAB_14328eb25:
  puVar8 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar8 = *(undefined8 **)(param_2 + 0x38);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_78 = FUN_1446ddbd2();
      local_70 = FUN_1403a682c;
      local_80 = 0;
      local_88 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar2[3];
    if ((*(byte *)((longlong)plVar2 + 0x39) & 1) == 0) {
      lVar7 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar2 + 0x44) + lVar7;
      *(longlong *)(param_2 + 0x40) = lVar7;
      pcVar3 = *(code **)(*plVar2 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar2 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar3)(plVar2);
          if (cVar6 != '\0') {
            (**(code **)(*plVar2 + 0xa0))(plVar2,lVar7,&local_50);
            goto LAB_14328ecdf;
          }
        }
        puVar9 = (undefined8 *)(lVar7 + *(int *)((longlong)plVar2 + 0x44));
        if (puVar9 != &local_50) {
          if ((*(byte *)((longlong)plVar2 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar2 + 0x100))(plVar2,&local_50,puVar9,(int)plVar2[6]);
          }
          else {
            memcpy(&local_50,puVar9,
                   (longlong)(int)plVar2[6] * (longlong)*(int *)((longlong)plVar2 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_80 = CONCAT44(local_80._4_4_,(int)plVar2[6]);
        local_88 = local_88 & 0xffffffff00000000;
        FUN_1400746b0(plVar2,&local_50,lVar7,1);
      }
      else {
        (*pcVar3)(plVar2,&local_50,lVar7);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar9;
        puVar9 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar2);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&local_50);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&local_50);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_50 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar4,param_2,&local_50);
    }
  }
LAB_14328ecdf:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_40;
  local_68 = (undefined4)local_50;
  uStack_64 = local_50._4_4_;
  uStack_60 = uStack_48;
  uStack_5c = uStack_44;
  lVar7 = FUN_1474fe14a(puVar8);
  if (lVar7 != 0) {
    FUN_1474c5dc4(lVar7,&local_68);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14328ee6a FUN_14328ee6a body=55 status=ok
// SIG undefined FUN_14328ee6a(void)

void FUN_14328ee6a(void)

{
  undefined8 uVar1;
  
  if (DAT_14caaaf18 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caaaf18 = FUN_14171c317(FUN_146332bcd,uVar1,L"AnimPhysAngularConstraintType");
  }
  return;
}



// FUNCTION 14328eea1 FUN_14328eea1 body=55 status=ok
// SIG undefined FUN_14328eea1(void)

void FUN_14328eea1(void)

{
  undefined8 uVar1;
  
  if (DAT_14caaaf30 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caaaf30 = FUN_14171c317(FUN_146332bfc,uVar1,L"AnimPhysLinearConstraintType");
  }
  return;
}



// FUNCTION 14328eed8 FUN_14328eed8 body=55 status=ok
// SIG undefined FUN_14328eed8(void)

void FUN_14328eed8(void)

{
  undefined8 uVar1;
  
  if (DAT_14caaaf48 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caaaf48 = FUN_14171c317(FUN_146332c2d,uVar1,L"AnimPhysSimSpaceType");
  }
  return;
}



// FUNCTION 14328ef0f FUN_14328ef0f body=55 status=ok
// SIG undefined FUN_14328ef0f(void)

void FUN_14328ef0f(void)

{
  undefined8 uVar1;
  
  if (DAT_14caaaf90 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caaaf90 = FUN_14171c317(FUN_146332d8a,uVar1,L"ESphericalLimitType");
  }
  return;
}



// FUNCTION 14328ef46 FUN_14328ef46 body=69 status=ok
// SIG undefined FUN_14328ef46(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14328ef46(void)

{
  _DAT_14caaafe8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014328ef88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caaaff0,1);
  return;
}



// FUNCTION 14328ef8b FUN_14328ef8b body=69 status=ok
// SIG undefined FUN_14328ef8b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14328ef8b(void)

{
  _DAT_14caab000 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014328efcd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caab008,1);
  return;
}



// FUNCTION 14328efd0 FUN_14328efd0 body=69 status=ok
// SIG undefined FUN_14328efd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14328efd0(void)

{
  _DAT_14caab018 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014328f012. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caab020,1);
  return;
}



// FUNCTION 14328f015 FUN_14328f015 body=69 status=ok
// SIG undefined FUN_14328f015(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14328f015(void)

{
  _DAT_14caab030 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014328f057. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caab038,1);
  return;
}



// FUNCTION 14328f05a FUN_14328f05a body=69 status=ok
// SIG undefined FUN_14328f05a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14328f05a(void)

{
  _DAT_14caab048 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014328f09c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caab050,1);
  return;
}



// FUNCTION 14328f09f FUN_14328f09f body=69 status=ok
// SIG undefined FUN_14328f09f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14328f09f(void)

{
  _DAT_14caab060 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014328f0e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caab068,1);
  return;
}



// FUNCTION 14328f0e4 FUN_14328f0e4 body=69 status=ok
// SIG undefined FUN_14328f0e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14328f0e4(void)

{
  _DAT_14caab078 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014328f126. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caab080,1);
  return;
}



// FUNCTION 14328f129 FUN_14328f129 body=69 status=ok
// SIG undefined FUN_14328f129(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14328f129(void)

{
  _DAT_14caab090 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014328f16b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caab098,1);
  return;
}


