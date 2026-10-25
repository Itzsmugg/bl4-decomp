// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143fdd608 FUN_143fdd608 body=126 status=ok
// SIG undefined FUN_143fdd608(void)

void FUN_143fdd608(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b5a3360;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143fdd677. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143fdd686 FUN_143fdd686 body=20 status=ok
// SIG undefined FUN_143fdd686(void)

undefined8 FUN_143fdd686(longlong param_1)

{
  FUN_143fc9e06(*(undefined8 *)(param_1 + 0x18));
  return 0;
}



// FUNCTION 143fdd69a FUN_143fdd69a body=20 status=ok
// SIG undefined FUN_143fdd69a(void)

undefined1 FUN_143fdd69a(longlong param_1)

{
  FUN_143fc9e06(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 143fdd6ae FUN_143fdd6ae body=48 status=ok
// SIG undefined FUN_143fdd6ae(void)

longlong FUN_143fdd6ae(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1e0;
  FUN_143fdd792(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fdd6de FUN_143fdd6de body=48 status=ok
// SIG undefined FUN_143fdd6de(void)

longlong FUN_143fdd6de(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1e8;
  FUN_143fdd792(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fdd70e FUN_143fdd70e body=59 status=ok
// SIG undefined FUN_143fdd70e(void)

longlong FUN_143fdd70e(longlong param_1,int param_2)

{
  FUN_148b6a0e9(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fdd74a FUN_143fdd74a body=59 status=ok
// SIG undefined FUN_143fdd74a(void)

longlong FUN_143fdd74a(longlong param_1,int param_2)

{
  FUN_148b6a195(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fdd792 FUN_143fdd792 body=335 status=ok
// SIG undefined FUN_143fdd792(void)

void FUN_143fdd792(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b5a34d0;
  param_1[0x3c] = &PTR_FUN_14b5a3710;
  param_1[0x3d] = &PTR_FUN_14b5a3730;
  plVar3 = (longlong *)param_1[0x71];
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
  if (*(char *)((longlong)param_1 + 0x37c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x37c) = 0;
  }
  FUN_14122e0b2(param_1 + 0x55);
  if (param_1[0x53] != 0) {
    FUN_1400020a8();
  }
  FUN_148b6a195(param_1[0x4e],*(undefined4 *)(param_1 + 0x4f));
  if (param_1[0x4e] != 0) {
    FUN_1400020a8();
  }
  FUN_148b6a0e9(param_1[0x49],*(undefined4 *)(param_1 + 0x4a));
  if (param_1[0x49] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x41] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  param_1[0x3d] = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (*(char *)((longlong)param_1 + 0x1f1) == '\x01')) {
    FUN_14019e20a(DAT_14c948580,param_1 + 0x3d);
    *(undefined1 *)((longlong)param_1 + 0x1f1) = 0;
  }
  param_1[0x3c] = &PTR_FUN_14b59f880;
  FUN_148b68d0a(param_1 + 0x3c);
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 143fdd8e2 FUN_143fdd8e2 body=1923 status=ok
// SIG undefined FUN_143fdd8e2(void)

void FUN_143fdd8e2(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_438 [32];
  wchar_t *local_418;
  undefined4 local_410;
  undefined8 local_408;
  wchar_t *local_400;
  wchar_t *local_3f8;
  code *local_3f0;
  undefined1 *local_3e8;
  code **local_3e0;
  code *local_3d8;
  code *local_3d0;
  undefined1 local_3b9;
  code *local_3b8;
  longlong *local_3b0;
  undefined8 local_3a0;
  longlong *local_398;
  longlong local_390;
  longlong *local_388;
  longlong local_380;
  longlong *local_378;
  longlong local_370;
  longlong local_368;
  code *local_360 [59];
  undefined8 local_188;
  longlong *local_180;
  undefined1 local_b8 [112];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_438;
  if ((((*(int *)((longlong)param_1 + 0xc) != 0) &&
       (uVar7 = *(uint *)(param_1 + 1), -1 < (int)uVar7)) && ((int)uVar7 < DAT_14c9647dc)) &&
     (((plVar12 = (longlong *)
                  ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
       plVar12 != (longlong *)0x0 && ((int)plVar12[2] == *(int *)((longlong)param_1 + 0xc))) &&
      ((lVar3 = *param_1, (*(uint *)(plVar12 + 1) & 0x10200000) == 0 &&
       ((lVar4 = *plVar12, local_368 = lVar4, lVar4 != 0 && ((longlong)*(int *)(lVar3 + 0x200) != 0)
        ))))))) {
    lVar13 = 0;
    do {
      if (*(longlong *)(*(longlong *)(lVar3 + 0x1f8) + lVar13) == lVar4) {
        if (((((*(int *)((longlong)param_1 + 0x14) == 0) ||
              (uVar7 = *(uint *)(param_1 + 2), (int)uVar7 < 0)) || (DAT_14c9647dc <= (int)uVar7)) ||
            ((plVar12 = (longlong *)
                        ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
             plVar12 == (longlong *)0x0 || ((int)plVar12[2] != *(int *)((longlong)param_1 + 0x14))))
            ) || (((*(uint *)(plVar12 + 1) & 0x10200000) != 0 || (lVar13 = *plVar12, lVar13 == 0))))
        {
          if (param_1[3] != 0) {
            lVar13 = FUN_140007850();
            cVar6 = (*(code *)PTR_FUN_14c758760)();
            if ((lVar13 == 0) || (cVar6 == '\0')) {
              if (lVar13 != 0) {
                uVar7 = *(uint *)(lVar13 + 0xc);
                goto LAB_143fdda7b;
              }
              param_1[2] = 0;
            }
            else {
              uVar7 = *(uint *)(lVar13 + 0xc);
              if ((int)uVar7 < DAT_14c9647dc) {
                lVar10 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
              }
              else {
                lVar10 = 0;
              }
              if ((*(uint *)(lVar10 + 8) & 0x8400000) == 0) {
LAB_143fdda7b:
                *(uint *)(param_1 + 2) = uVar7;
                if ((int)uVar7 < DAT_14c9647dc) {
                  lVar10 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
                }
                else {
                  lVar10 = 0;
                }
                iVar8 = *(int *)(lVar10 + 0x10);
                if (*(int *)(lVar10 + 0x10) == 0) {
                  LOCK();
                  iVar8 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar11 = DAT_14c964868 + 1;
                  bVar14 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar8;
                  if (bVar14) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,iVar11);
                  }
                  LOCK();
                  iVar8 = *(int *)(lVar10 + 0x10);
                  bVar14 = iVar8 == 0;
                  if (bVar14) {
                    *(int *)(lVar10 + 0x10) = iVar11;
                    iVar8 = 0;
                  }
                  UNLOCK();
                  if (bVar14) {
                    iVar8 = iVar11;
                  }
                }
                *(int *)((longlong)param_1 + 0x14) = iVar8;
              }
              if ((*(uint *)(lVar13 + 8) >> 0x1e & 1) == 0) goto LAB_143fddabf;
            }
          }
LAB_143fddb35:
          local_370 = 0;
        }
        else {
LAB_143fddabf:
          if (DAT_14c949118 == 0) {
            local_3b8 = FUN_140631fbe;
            if (DAT_14c963f04 == '\0') {
              uVar9 = FUN_140011aa6();
              lVar10 = FUN_140011c0e(uVar9,0x250,8);
            }
            else {
              lVar10 = FUN_14001cc68(0x250,8);
            }
            DAT_14c949118 = lVar10;
            FUN_1446f470e(local_b8,L"Class",1);
            local_3e0 = &local_3b8;
            local_3e8 = &LAB_146891e90;
            local_3f0 = (code *)&LAB_146273097;
            local_400 = L"Engine";
            local_3f8 = (wchar_t *)CONCAT44(local_3f8._4_4_,199);
            local_408 = 0x20;
            local_410 = 0x10000000;
            local_418._0_4_ = 8;
            FUN_14574b4b2(lVar10);
            DAT_14c949118 = lVar10;
            if (DAT_14c951858 == 0) {
              local_3e0 = local_360;
              local_360[0] = FUN_1449e2820;
              local_3d0 = FUN_14081d0ea;
              local_3d8 = FUN_14081d0ea;
              local_3e8 = &LAB_1468c5283;
              local_3f0 = FUN_142809da0;
              local_3f8 = L"Engine";
              local_400 = (wchar_t *)0x400000000;
              local_408 = CONCAT44(local_408._4_4_,0x10000000);
              local_410 = 8;
              local_418._0_4_ = 0x50;
              FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
            }
            lVar5 = DAT_14c951858;
            lVar10 = DAT_14c949118;
            uVar9 = FUN_1449e2fb2();
            local_418 = L"Class";
            FUN_14574b446(uVar9,lVar10,lVar5,L"/Script/CoreUObject");
          }
          if ((((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) < *(int *)(DAT_14c949118 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) != DAT_14c949118 + 0x30)) ||
              (lVar10 = FUN_1405e2bf2(), lVar10 == 0)) ||
             (*(int *)(lVar13 + 0x38) < *(int *)(lVar10 + 0x38))) goto LAB_143fddb35;
          local_370 = 0;
          if (*(longlong *)(*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
              lVar10 + 0x30) {
            local_370 = lVar13;
          }
          if ((local_370 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c();
          }
        }
        lVar13 = FUN_14772de36(lVar3 + 0x2a8,&local_370);
        if (lVar13 != 0) {
          uVar9 = FUN_145b86eb0();
          plVar12 = (longlong *)FUN_144718840(lVar13,uVar9);
          if (plVar12 != (longlong *)0x0) {
            (**(code **)(*plVar12 + 0x10))(plVar12,lVar4);
          }
          uVar7 = *(uint *)(lVar13 + 0xc);
          *(uint *)(lVar4 + 0x28) = uVar7;
          if ((int)uVar7 < DAT_14c9647dc) {
            lVar10 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
          }
          else {
            lVar10 = 0;
          }
          iVar8 = *(int *)(lVar10 + 0x10);
          if (*(int *)(lVar10 + 0x10) == 0) {
            LOCK();
            iVar8 = DAT_14c964868 + 1;
            UNLOCK();
            iVar11 = DAT_14c964868 + 1;
            bVar14 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar8;
            if (bVar14) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar11);
            }
            LOCK();
            iVar8 = *(int *)(lVar10 + 0x10);
            bVar14 = iVar8 == 0;
            if (bVar14) {
              *(int *)(lVar10 + 0x10) = iVar11;
              iVar8 = 0;
            }
            UNLOCK();
            if (bVar14) {
              iVar8 = iVar11;
            }
          }
          *(int *)(lVar4 + 0x2c) = iVar8;
          local_360[0] = (code *)&local_368;
          FUN_148b6b7ea(lVar3 + 0x208);
          FUN_148b641c6(lVar3,local_b8,local_368);
          FUN_140a53a96(local_360);
          local_3b0 = &local_380;
          local_3b8 = FUN_143336ee2;
          FUN_1407616b4(lVar13,&local_3a0);
          plVar12 = local_180;
          if (local_398 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_398 + 1) = (int)local_398[1] + 1;
            UNLOCK();
          }
          local_188 = local_3a0;
          local_180 = local_398;
          if (plVar12 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar12 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar12)(plVar12);
              LOCK();
              piVar2 = (int *)((longlong)plVar12 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar12 + 0x10))(plVar12);
              }
            }
          }
          local_418 = (wchar_t *)&local_3b9;
          FUN_140a53d66(&local_3b8,&DAT_149efe19f,
                        ".\\../Plugins/Gearbox/GbxUIUMG/Source/GbxUIUMG/Private/IndicatorSystem/SIndicatorCanvas.cpp"
                        ,0x270);
          lVar3 = local_368;
          if (local_3b0 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)local_3b0 + 0xc) = *(int *)((longlong)local_3b0 + 0xc) + 1;
            UNLOCK();
          }
          *(code **)(lVar3 + 0x120) = local_3b8;
          plVar12 = *(longlong **)(lVar3 + 0x128);
          *(longlong **)(lVar3 + 0x128) = local_3b0;
          if (plVar12 != (longlong *)0x0) {
            LOCK();
            piVar2 = (int *)((longlong)plVar12 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar12 + 0x10))();
            }
          }
          FUN_140a50bf4(&local_3b8,&local_390,local_360);
          plVar12 = local_388;
          local_380 = local_390;
          local_378 = local_388;
          if (local_388 == (longlong *)0x0) {
            FUN_148b6b8b4(local_b8,&local_380);
          }
          else {
            LOCK();
            *(int *)(local_388 + 1) = (int)local_388[1] + 1;
            UNLOCK();
            FUN_148b6b8b4(local_b8);
            if (plVar12 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar12 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plVar12)(plVar12);
                LOCK();
                piVar2 = (int *)((longlong)plVar12 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar12 + 0x10))(plVar12);
                }
              }
            }
          }
          if (local_388 != (longlong *)0x0) {
            LOCK();
            plVar12 = local_388 + 1;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)*plVar12 == 0) {
              (**(code **)*local_388)(local_388);
              LOCK();
              piVar2 = (int *)((longlong)local_388 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*local_388 + 0x10))(local_388);
              }
            }
          }
          plVar12 = local_3b0;
          if (local_3b0 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_3b0 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_3b0)(local_3b0);
              LOCK();
              piVar2 = (int *)((longlong)plVar12 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar12 + 0x10))(plVar12);
              }
            }
          }
          if (local_398 != (longlong *)0x0) {
            LOCK();
            plVar12 = local_398 + 1;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)*plVar12 == 0) {
              (**(code **)*local_398)(local_398);
              LOCK();
              piVar2 = (int *)((longlong)local_398 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*local_398 + 0x10))(local_398);
              }
            }
          }
          FUN_140a5660c(local_360);
          FUN_148b6b93c(local_b8);
        }
        break;
      }
      lVar13 = lVar13 + 8;
    } while ((longlong)*(int *)(lVar3 + 0x200) * 8 != lVar13);
  }
  if ((local_48 ^ (ulonglong)auStack_438) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143fde066 FUN_143fde066 body=156 status=ok
// SIG undefined FUN_143fde066(void)

undefined8 * FUN_143fde066(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)FUN_14001cc68(0x40,8);
  *param_2 = puVar6;
  *puVar6 = &PTR_FUN_14b5a3c00;
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  puVar6[1] = *(undefined8 *)(param_1 + 8);
  puVar6[2] = uVar5;
  puVar6[3] = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  uVar4 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(puVar6 + 4) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
  *(undefined4 *)(puVar6 + 5) = uVar3;
  *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  puVar6[6] = 0;
  iVar1 = *(int *)(param_1 + 0x38);
  _Src = *(void **)(param_1 + 0x30);
  *(int *)(puVar6 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar6 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(puVar6 + 6,iVar1,0);
    memcpy((void *)puVar6[6],_Src,(longlong)iVar1 * 2);
  }
  return puVar6 + 1;
}



// FUNCTION 143fde108 FUN_143fde108 body=29 status=ok
// SIG undefined FUN_143fde108(void)

void FUN_143fde108(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143fde126 FUN_143fde126 body=57 status=ok
// SIG undefined FUN_143fde126(void)

undefined8 * FUN_143fde126(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b5a3c00;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fde160 FUN_143fde160 body=88 status=ok
// SIG undefined FUN_143fde160(void)

void FUN_143fde160(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    if (*param_1 != 0) {
      FUN_148b633de();
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
                    /* WARNING: Could not recover jumptable at 0x000143fde1a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143fde1f4 FUN_143fde1f4 body=64 status=ok
// SIG undefined FUN_143fde1f4(void)

undefined8 * FUN_143fde1f4(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14b5a3c30;
  plVar2 = (longlong *)param_1[2];
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



// FUNCTION 143fde240 FUN_143fde240 body=29 status=ok
// SIG undefined FUN_143fde240(void)

undefined8 FUN_143fde240(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fde272 FUN_143fde272 body=93 status=ok
// SIG undefined FUN_143fde272(void)

void FUN_143fde272(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5a3ce0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143fde2d0 FUN_143fde2d0 body=93 status=ok
// SIG undefined FUN_143fde2d0(void)

void FUN_143fde2d0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5a3ce0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143fde32e FUN_143fde32e body=126 status=ok
// SIG undefined FUN_143fde32e(void)

void FUN_143fde32e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b5a3ce0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143fde39d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143fde3b6 FUN_143fde3b6 body=20 status=ok
// SIG undefined FUN_143fde3b6(void)

undefined1 FUN_143fde3b6(longlong param_1)

{
  FUN_143fde3ca(param_1 + 0x18);
  return 1;
}



// FUNCTION 143fde3ca FUN_143fde3ca body=176 status=ok
// SIG undefined FUN_143fde3ca(void)

void FUN_143fde3ca(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  
  lVar1 = *param_1;
  lVar4 = lVar1 + 0x18;
  lVar2 = FUN_14090ae24(lVar4);
  if (lVar2 != 0) {
    uVar3 = FUN_14090ae24(lVar4);
    FUN_140648376(lVar1 + 0x60,uVar3);
    lVar2 = FUN_14090ae24(lVar4);
    fVar5 = 0.0;
    fVar6 = 0.0;
    if (*(longlong *)(lVar2 + 0x148) != 0) {
      fVar6 = (float)*(int *)(*(longlong *)(lVar2 + 0x148) + 4);
    }
    lVar4 = FUN_14090ae24(lVar4);
    if (*(int **)(lVar4 + 0x148) != (int *)0x0) {
      fVar5 = (float)**(int **)(lVar4 + 0x148);
    }
    *(float *)(lVar1 + 0x80) = fVar5;
    *(float *)(lVar1 + 0x84) = fVar6;
    *(undefined8 *)(lVar1 + 0x68) = *(undefined8 *)(lVar1 + 0x40);
    *(undefined8 *)(lVar1 + 0x70) = *(undefined8 *)(lVar1 + 0x48);
    *(undefined4 *)(lVar1 + 0x78) = *(undefined4 *)(lVar1 + 0x50);
    *(undefined4 *)(lVar1 + 0x7c) = 0x1000003;
  }
  return;
}



// FUNCTION 143fde480 FUN_143fde480 body=346 status=ok
// SIG undefined FUN_143fde480(void)

void FUN_143fde480(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_143fde512;
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
LAB_143fde512:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 143fde5e0 FUN_143fde5e0 body=346 status=ok
// SIG undefined FUN_143fde5e0(void)

void FUN_143fde5e0(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_143fde672;
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
LAB_143fde672:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 143fde740 FUN_143fde740 body=48 status=ok
// SIG undefined FUN_143fde740(void)

void FUN_143fde740(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 143fde770 FUN_143fde770 body=83 status=ok
// SIG undefined FUN_143fde770(void)

longlong * FUN_143fde770(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_143fb75a2();
    cVar2 = FUN_1448093f4(lVar1,uVar3);
    if (cVar2 != '\0') {
      *param_2 = *param_1;
      lVar1 = param_1[1];
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



// FUNCTION 143fde7c4 FUN_143fde7c4 body=29 status=ok
// SIG undefined FUN_143fde7c4(void)

undefined8 FUN_143fde7c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fde960 FUN_143fde960 body=93 status=ok
// SIG undefined FUN_143fde960(void)

void FUN_143fde960(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b5a3d50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143fde9be FUN_143fde9be body=93 status=ok
// SIG undefined FUN_143fde9be(void)

void FUN_143fde9be(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b5a3d50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143fdea1c FUN_143fdea1c body=126 status=ok
// SIG undefined FUN_143fdea1c(void)

void FUN_143fdea1c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b5a3d50;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143fdea8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143fdeaa4 FUN_143fdeaa4 body=269 status=ok
// SIG undefined FUN_143fdeaa4(void)

undefined8 FUN_143fdeaa4(longlong param_1)

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
    if (iVar1 == 2) goto LAB_143fdebab;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143fdebab;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143fdebab:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143fdeb5f;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143fdebb2(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_143fdeb5f;
    }
  }
  uVar6 = 0;
LAB_143fdeb5f:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fdebb2 FUN_143fdebb2 body=1423 status=ok
// SIG undefined FUN_143fdebb2(void)

void FUN_143fdebb2(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  code *pcVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  bool bVar12;
  undefined1 auStack_f8 [32];
  wchar_t *local_d8;
  undefined4 local_d0;
  undefined8 *local_c8;
  wchar_t *local_c0;
  wchar_t *local_b8;
  code *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  code *local_98;
  code *local_90;
  code *local_80 [2];
  longlong *local_70;
  code *local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  param_1 = (longlong *)*param_1;
  lVar5 = FUN_1409be8d8(param_1[6]);
  if (lVar5 == 0) {
LAB_143fdec18:
    lVar5 = 0;
  }
  else {
    if (DAT_14c949118 == 0) {
      local_68 = FUN_140631fbe;
      if (DAT_14c963f04 == '\0') {
        uVar6 = FUN_140011aa6();
        lVar7 = FUN_140011c0e(uVar6,0x250,8);
      }
      else {
        lVar7 = FUN_14001cc68(0x250,8);
      }
      DAT_14c949118 = lVar7;
      FUN_1446f470e(&local_58,L"Class",1);
      local_a0 = &local_68;
      local_a8 = &LAB_146891e90;
      local_b0 = (code *)&LAB_146273097;
      local_c0 = L"Engine";
      local_b8 = (wchar_t *)CONCAT44(local_b8._4_4_,199);
      local_c8 = (undefined8 *)&DAT_00000020;
      local_d0 = 0x10000000;
      local_d8._0_4_ = 8;
      FUN_14574b4b2(lVar7);
      DAT_14c949118 = lVar7;
      if (DAT_14c951858 == 0) {
        local_a0 = local_80;
        local_80[0] = FUN_1449e2820;
        local_90 = FUN_14081d0ea;
        local_98 = FUN_14081d0ea;
        local_a8 = &LAB_1468c5283;
        local_b0 = FUN_142809da0;
        local_b8 = L"Engine";
        local_c0 = (wchar_t *)0x400000000;
        local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,0x10000000);
        local_d0 = 8;
        local_d8._0_4_ = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar10 = DAT_14c951858;
      lVar7 = DAT_14c949118;
      uVar6 = FUN_1449e2fb2();
      local_d8 = L"Class";
      FUN_14574b446(uVar6,lVar7,lVar10,L"/Script/CoreUObject");
    }
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(DAT_14c949118 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) != DAT_14c949118 + 0x30)) goto LAB_143fdec18;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar5);
    }
  }
  param_1[0xd] = lVar5;
  lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_148b64ef8(lVar5);
  }
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    lVar7 = param_1[4];
  }
  else {
    lVar7 = 0;
  }
  lVar7 = *(longlong *)(lVar7 + 0x20);
  if (lVar7 != 0) {
    if (DAT_14cae9568 == 0) {
      local_a0 = local_80;
      local_80[0] = FUN_1417de738;
      local_90 = (code *)&LAB_145893408;
      local_98 = (code *)&LAB_1458cbbd2;
      local_a8 = &LAB_147ba21f1;
      local_b0 = (code *)&LAB_1463e9233;
      local_b8 = L"Engine";
      local_c0 = (wchar_t *)0x0;
      local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,0x1000000c);
      local_d0 = 8;
      local_d8 = (wchar_t *)CONCAT44(local_d8._4_4_,0x2b8);
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
    }
    if ((((*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
         (lVar5 != 0)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) == DAT_14cae9568 + 0x30)) &&
       (param_1[9] != 0)) {
      local_68 = (code *)0x0;
      local_60 = 0;
      FUN_1446efa72(&local_68,0,3,0x10);
      pcVar4 = local_68;
      local_60 = 3;
      *(undefined ***)local_68 = &PTR_LAB_14b5a3e30;
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 1;
      lVar10 = DAT_14c758608 + 1;
      if (lVar8 == 0) {
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 2;
        lVar10 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar10;
      *(longlong *)(local_68 + 0x10) = lVar8;
      *(undefined ***)local_68 = &PTR_FUN_14b5a3dc0;
      *(undefined8 *)(local_68 + 0x18) = 0;
      iVar9 = 0;
      if (param_1 != (longlong *)0x0) {
        uVar3 = *(uint *)((longlong)param_1 + 0xc);
        *(uint *)(local_68 + 0x18) = uVar3;
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar10 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar10 = 0;
        }
        iVar9 = *(int *)(lVar10 + 0x10);
        if (*(int *)(lVar10 + 0x10) == 0) {
          LOCK();
          iVar9 = DAT_14c964868 + 1;
          UNLOCK();
          iVar11 = DAT_14c964868 + 1;
          bVar12 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar9;
          if (bVar12) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar11);
          }
          LOCK();
          iVar9 = *(int *)(lVar10 + 0x10);
          bVar12 = iVar9 == 0;
          if (bVar12) {
            *(int *)(lVar10 + 0x10) = iVar11;
            iVar9 = 0;
          }
          UNLOCK();
          if (bVar12) {
            iVar9 = iVar11;
          }
        }
      }
      *(int *)(pcVar4 + 0x1c) = iVar9;
      *(code **)(pcVar4 + 0x20) = FUN_143fd1b64;
      local_58 = 0;
      local_50 = 0;
      FUN_143fc5c60(&local_58,&local_68);
      local_48 = 1;
      local_d8 = (wchar_t *)param_1[0xd];
      local_d0 = 0xffffffff;
      local_c8 = &local_58;
      FUN_143fd1bd2(lVar5,local_80,param_1[9] + 0x30,lVar7);
      FUN_148b53d4c(param_1 + 0xe,local_80);
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
      if (local_60 != 0) {
        if (local_68 == (code *)0x0) goto LAB_143fdec84;
        (*(code *)**(undefined8 **)local_68)(local_68,0);
        FUN_1446efa72(&local_68,0,0,0x10);
        local_60 = 0;
      }
      if (local_68 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_143fdec84:
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143fdf142 FUN_143fdf142 body=29 status=ok
// SIG undefined FUN_143fdf142(void)

undefined8 FUN_143fdf142(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fdf2f4 FUN_143fdf2f4 body=93 status=ok
// SIG undefined FUN_143fdf2f4(void)

void FUN_143fdf2f4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5a3e30;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5a3dc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143fdf352 FUN_143fdf352 body=93 status=ok
// SIG undefined FUN_143fdf352(void)

void FUN_143fdf352(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5a3e30;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5a3dc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143fdf3b0 FUN_143fdf3b0 body=126 status=ok
// SIG undefined FUN_143fdf3b0(void)

void FUN_143fdf3b0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b5a3e30;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b5a3dc0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143fdf41f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143fdf48c FUN_143fdf48c body=277 status=ok
// SIG undefined FUN_143fdf48c(void)

undefined8 FUN_143fdf48c(longlong param_1,undefined8 param_2)

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
    if (iVar1 == 2) goto LAB_143fdf59b;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143fdf59b;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_143fdf59b:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143fdf54e;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5,param_2);
      uVar6 = 1;
      goto LAB_143fdf54e;
    }
  }
  uVar6 = 0;
LAB_143fdf54e:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fdf5a4 FUN_143fdf5a4 body=346 status=ok
// SIG undefined FUN_143fdf5a4(void)

void FUN_143fdf5a4(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_143fdf636;
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
LAB_143fdf636:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 143fdf6fe FUN_143fdf6fe body=29 status=ok
// SIG undefined FUN_143fdf6fe(void)

undefined8 FUN_143fdf6fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fdf89a FUN_143fdf89a body=93 status=ok
// SIG undefined FUN_143fdf89a(void)

void FUN_143fdf89a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b5a3f10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143fdf8f8 FUN_143fdf8f8 body=93 status=ok
// SIG undefined FUN_143fdf8f8(void)

void FUN_143fdf8f8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b5a3f10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143fdf956 FUN_143fdf956 body=126 status=ok
// SIG undefined FUN_143fdf956(void)

void FUN_143fdf956(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b5a3f10;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143fdf9c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143fdf9de FUN_143fdf9de body=269 status=ok
// SIG undefined FUN_143fdf9de(void)

undefined8 FUN_143fdf9de(longlong param_1)

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
    if (iVar1 == 2) goto LAB_143fdfae5;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143fdfae5;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143fdfae5:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143fdfa99;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143fdfaec(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_143fdfa99;
    }
  }
  uVar6 = 0;
LAB_143fdfa99:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fdfaec FUN_143fdfaec body=1454 status=ok
// SIG undefined FUN_143fdfaec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143fdfaec(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  void *_Src;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_168 [32];
  wchar_t *local_148;
  undefined4 local_140;
  undefined8 local_138;
  wchar_t *local_130;
  wchar_t *local_128;
  code *local_120;
  undefined1 *local_118;
  code **local_110;
  code *local_108;
  code *local_100;
  code *local_f0;
  undefined1 local_e8 [8];
  code *local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined8 uStack_c8;
  void *local_c0;
  uint local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  longlong lStack_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar2 = *param_1;
  lVar4 = FUN_145905bd0();
  local_d8 = *(longlong *)(lVar4 + 0x140);
  local_d0 = *(longlong *)(lVar4 + 0x148);
  uStack_c8 = *(undefined8 *)(lVar4 + 0x150);
  local_c0 = (void *)0x0;
  local_b8 = *(uint *)(lVar4 + 0x160);
  lVar11 = (longlong)(int)local_b8;
  _Src = *(void **)(lVar4 + 0x158);
  if (lVar11 == 0) {
    iVar7 = (int)((ulonglong)local_d8 >> 0x20);
    local_b4 = 0;
  }
  else {
    FUN_1446dd670(&local_c0,local_b8,0);
    memcpy(local_c0,_Src,lVar11 * 2);
    iVar7 = local_d8._4_4_;
  }
  if (iVar7 == 0) {
LAB_143fdfea2:
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    if ((-1 < (int)(uint)local_d8) && ((int)(uint)local_d8 < DAT_14c9647dc)) {
      plVar8 = (longlong *)
               ((ulonglong)(((uint)local_d8 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_d8 >> 0x10) * 8));
      if ((plVar8 == (longlong *)0x0) ||
         (((int)plVar8[2] != iVar7 || ((*(uint *)(plVar8 + 1) & 0x10200000) != 0))))
      goto LAB_143fdfea2;
      lVar4 = *plVar8;
    }
  }
  if ((lVar4 == 0) && (local_d0 != 0)) {
    lVar4 = FUN_140007850(&local_d0);
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar4 == 0) || (cVar3 == '\0')) {
      if (lVar4 != 0) {
        uVar1 = *(uint *)(lVar4 + 0xc);
        local_d8 = CONCAT44(local_d8._4_4_,uVar1);
        if (DAT_14c9647dc <= (int)uVar1) goto LAB_143fdfe7c;
        lVar11 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        goto LAB_143fdfca4;
      }
      local_d8 = 0;
    }
    else {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        if ((*(uint *)(*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8) + 8 +
                      (ulonglong)(uVar1 & 0xffff) * 0x18) & 0x8400000) == 0) {
          local_d8 = CONCAT44(local_d8._4_4_,uVar1);
          lVar11 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
LAB_143fdfca4:
          iVar7 = *(int *)(lVar11 + 0x10);
          if (*(int *)(lVar11 + 0x10) == 0) {
            LOCK();
            iVar7 = DAT_14c964868 + 1;
            UNLOCK();
            iVar9 = DAT_14c964868 + 1;
            bVar12 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar7;
            if (bVar12) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar9);
            }
            LOCK();
            iVar7 = *(int *)(lVar11 + 0x10);
            bVar12 = iVar7 == 0;
            if (bVar12) {
              *(int *)(lVar11 + 0x10) = iVar9;
              iVar7 = 0;
            }
            UNLOCK();
            if (bVar12) {
              iVar7 = iVar9;
            }
          }
          local_d8 = CONCAT44(iVar7,(uint)local_d8);
        }
      }
      else if ((_DAT_00000008 & 0x8400000) == 0) {
        local_d8 = CONCAT44(local_d8._4_4_,uVar1);
LAB_143fdfe7c:
        lVar11 = 0;
        goto LAB_143fdfca4;
      }
      if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0) goto LAB_143fdfcd5;
    }
  }
  else if (lVar4 != 0) {
LAB_143fdfcd5:
    if (DAT_14c949118 == 0) {
      local_f0 = FUN_140631fbe;
      if (DAT_14c963f04 == '\0') {
        uVar6 = FUN_140011aa6();
        lVar11 = FUN_140011c0e(uVar6,0x250,8);
      }
      else {
        lVar11 = FUN_14001cc68(0x250,8);
      }
      DAT_14c949118 = lVar11;
      FUN_1446f470e(local_e8,L"Class",1);
      local_110 = &local_f0;
      local_118 = &LAB_146891e90;
      local_120 = (code *)&LAB_146273097;
      local_130 = L"Engine";
      local_128 = (wchar_t *)CONCAT44(local_128._4_4_,199);
      local_138 = 0x20;
      local_140 = 0x10000000;
      local_148._0_4_ = 8;
      FUN_14574b4b2(lVar11);
      DAT_14c949118 = lVar11;
      if (DAT_14c951858 == 0) {
        local_110 = &local_e0;
        local_e0 = FUN_1449e2820;
        local_100 = FUN_14081d0ea;
        local_108 = FUN_14081d0ea;
        local_118 = &LAB_1468c5283;
        local_120 = FUN_142809da0;
        local_128 = L"Engine";
        local_130 = (wchar_t *)0x400000000;
        local_138 = CONCAT44(local_138._4_4_,0x10000000);
        local_140 = 8;
        local_148._0_4_ = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar10 = DAT_14c951858;
      lVar11 = DAT_14c949118;
      uVar6 = FUN_1449e2fb2();
      local_148 = L"Class";
      FUN_14574b446(uVar6,lVar11,lVar10,L"/Script/CoreUObject");
    }
    if ((((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) == DAT_14c949118 + 0x30)) &&
        (lVar11 = FUN_143fb468a(), lVar11 != 0)) &&
       (*(int *)(lVar11 + 0x38) <= *(int *)(lVar4 + 0x38))) {
      lVar10 = 0;
      if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
          lVar11 + 0x30) {
        lVar10 = lVar4;
      }
      goto LAB_143fdfd07;
    }
  }
  lVar10 = 0;
LAB_143fdfd07:
  if (local_c0 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (lVar10 != 0) {
    FUN_14058b40c(lVar2,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
    local_88 = (longlong *)0x0;
    local_58 = 0;
    uStack_c8 = 0;
    local_c0 = (void *)0x0;
    local_b8 = local_b8 & 0xffff0000;
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = 0;
    lStack_98 = 0;
    local_d8 = lVar10;
    local_d0 = lVar2;
    lVar4 = FUN_1402710dd(&local_d8);
    if (lStack_98 != 0) {
      plVar8 = local_88;
      if (local_88 == (longlong *)0x0) {
        plVar8 = local_78;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar4);
    }
    *(longlong *)(lVar2 + 0x68) = lVar4;
    iVar7 = *(int *)(lVar4 + 0x30);
    if ((longlong)iVar7 != 0) {
      lVar11 = *(longlong *)(lVar4 + 0x28);
      lVar10 = 0;
      do {
        plVar8 = *(longlong **)(lVar11 + lVar10);
        if (((plVar8 != (longlong *)0x0) && ((*(uint *)(plVar8 + 1) >> 0x1e & 1) == 0)) &&
           (lVar5 = (**(code **)(*plVar8 + 0x2a0))(), lVar5 != 0)) {
          iVar9 = *(int *)(lVar4 + 0x40);
          *(uint *)(lVar4 + 0x40) = iVar9 + 1U;
          if (*(uint *)(lVar4 + 0x44) < iVar9 + 1U) {
            FUN_143fdcf70((longlong *)(lVar4 + 0x38),iVar9);
          }
          *(longlong *)(*(longlong *)(lVar4 + 0x38) + (longlong)iVar9 * 8) = lVar5;
        }
        lVar10 = lVar10 + 8;
      } while ((longlong)iVar7 * 8 != lVar10);
    }
  }
  FUN_1416ac158(lVar2);
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143fe009c FUN_143fe009c body=57 status=ok
// SIG undefined FUN_143fe009c(void)

undefined8 * FUN_143fe009c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b5a3f80;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fe0254 FUN_143fe0254 body=191 status=ok
// SIG undefined FUN_143fe0254(void)

void FUN_143fe0254(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e020b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b5a3f80;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined4 *)(param_1 + 0x34);
  uVar4 = *(undefined4 *)(param_1 + 0x38);
  uVar5 = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((longlong)puVar2 + 0x34) = uVar3;
  *(undefined4 *)(puVar2 + 7) = uVar4;
  *(undefined4 *)((longlong)puVar2 + 0x3c) = uVar5;
  puVar2[8] = 0;
  iVar1 = *(int *)(param_1 + 0x48);
  _Src = *(void **)(param_1 + 0x40);
  *(int *)(puVar2 + 9) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 8,iVar1,0);
    memcpy((void *)puVar2[8],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x4c) = 0;
  return;
}



// FUNCTION 143fe0314 FUN_143fe0314 body=191 status=ok
// SIG undefined FUN_143fe0314(void)

void FUN_143fe0314(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e020b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b5a3f80;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined4 *)(param_1 + 0x34);
  uVar4 = *(undefined4 *)(param_1 + 0x38);
  uVar5 = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((longlong)puVar2 + 0x34) = uVar3;
  *(undefined4 *)(puVar2 + 7) = uVar4;
  *(undefined4 *)((longlong)puVar2 + 0x3c) = uVar5;
  puVar2[8] = 0;
  iVar1 = *(int *)(param_1 + 0x48);
  _Src = *(void **)(param_1 + 0x40);
  *(int *)(puVar2 + 9) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 8,iVar1,0);
    memcpy((void *)puVar2[8],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x4c) = 0;
  return;
}



// FUNCTION 143fe03d4 FUN_143fe03d4 body=230 status=ok
// SIG undefined FUN_143fe03d4(void)

void FUN_143fe03d4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  undefined8 uVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_149e020b0;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14b5a3f80;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  p_Var2->EntryCount = (int)uVar3;
  p_Var2->ContentionCount = (int)((ulonglong)uVar3 >> 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var2->Flags = (int)uVar3;
  p_Var2->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var2->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  uVar6 = *(undefined4 *)(param_1 + 0x38);
  uVar7 = *(undefined4 *)(param_1 + 0x3c);
  p_Var2[1].Type = (short)uVar4;
  p_Var2[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var2[1].field_0x4 = uVar5;
  *(undefined4 *)&p_Var2[1].CriticalSection = uVar6;
  *(undefined4 *)((longlong)&p_Var2[1].CriticalSection + 4) = uVar7;
  p_Var2[1].ProcessLocksList.Flink = (_LIST_ENTRY *)0x0;
  iVar1 = *(int *)(param_1 + 0x48);
  _Src = *(void **)(param_1 + 0x40);
  *(int *)&p_Var2[1].ProcessLocksList.Blink = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)&p_Var2[1].ProcessLocksList.Blink + 4) = 0;
  }
  else {
    FUN_1446dd670(&p_Var2[1].ProcessLocksList,iVar1,0);
    memcpy(p_Var2[1].ProcessLocksList.Flink,_Src,(longlong)iVar1 * 2);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143fe04a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143fe04c4 FUN_143fe04c4 body=269 status=ok
// SIG undefined FUN_143fe04c4(void)

undefined8 FUN_143fe04c4(longlong param_1)

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
    if (iVar1 == 2) goto LAB_143fe05cb;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143fe05cb;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143fe05cb:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143fe057f;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143fe05d2(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_143fe057f;
    }
  }
  uVar6 = 0;
LAB_143fe057f:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fe05d2 FUN_143fe05d2 body=2143 status=ok
// SIG undefined FUN_143fe05d2(void)

void FUN_143fe05d2(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  int iVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_e8 [32];
  wchar_t *local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  wchar_t *local_b0;
  wchar_t *local_a8;
  code *local_a0;
  undefined1 *local_98;
  code **local_90;
  code *local_88;
  code *local_80;
  code *local_78;
  undefined1 local_70 [8];
  code *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar1 = *param_1;
  if ((((((*(int *)((longlong)param_1 + 0xc) == 0) ||
         (uVar6 = *(uint *)(param_1 + 1), (int)uVar6 < 0)) || (DAT_14c9647dc <= (int)uVar6)) ||
       ((plVar11 = (longlong *)
                   ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
        plVar11 == (longlong *)0x0 || ((int)plVar11[2] != *(int *)((longlong)param_1 + 0xc))))) ||
      ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)) || (lVar8 = *plVar11, lVar8 == 0)) {
    if (param_1[2] == 0) goto LAB_143fe081b;
    lVar8 = FUN_140007850();
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar8 == 0) || (cVar3 == '\0')) {
      if (lVar8 == 0) {
        param_1[1] = 0;
        goto LAB_143fe081b;
      }
      uVar6 = *(uint *)(lVar8 + 0xc);
LAB_143fe07db:
      *(uint *)(param_1 + 1) = uVar6;
      if ((int)uVar6 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      iVar5 = *(int *)(lVar7 + 0x10);
      if (*(int *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar12 = DAT_14c964868 + 1;
        bVar14 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar14) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar12);
        }
        LOCK();
        iVar5 = *(int *)(lVar7 + 0x10);
        bVar14 = iVar5 == 0;
        if (bVar14) {
          *(int *)(lVar7 + 0x10) = iVar12;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar14) {
          iVar5 = iVar12;
        }
      }
      *(int *)((longlong)param_1 + 0xc) = iVar5;
    }
    else {
      uVar6 = *(uint *)(lVar8 + 0xc);
      if ((int)uVar6 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      if ((*(uint *)(lVar7 + 8) & 0x8400000) == 0) goto LAB_143fe07db;
    }
    if ((*(uint *)(lVar8 + 8) >> 0x1e & 1) != 0) goto LAB_143fe081b;
  }
  if (DAT_14c949118 == 0) {
    local_78 = FUN_140631fbe;
    if (DAT_14c963f04 == '\0') {
      uVar10 = FUN_140011aa6();
      lVar7 = FUN_140011c0e(uVar10,0x250,8);
    }
    else {
      lVar7 = FUN_14001cc68(0x250,8);
    }
    DAT_14c949118 = lVar7;
    FUN_1446f470e(local_70,L"Class",1);
    local_90 = &local_78;
    local_98 = &LAB_146891e90;
    local_a0 = (code *)&LAB_146273097;
    local_b0 = L"Engine";
    local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,199);
    local_b8 = 0x20;
    local_c0 = 0x10000000;
    local_c8._0_4_ = 8;
    FUN_14574b4b2(lVar7);
    DAT_14c949118 = lVar7;
    if (DAT_14c951858 == 0) {
      local_90 = &local_68;
      local_68 = FUN_1449e2820;
      local_80 = FUN_14081d0ea;
      local_88 = FUN_14081d0ea;
      local_98 = &LAB_1468c5283;
      local_a0 = FUN_142809da0;
      local_a8 = L"Engine";
      local_b0 = (wchar_t *)0x400000000;
      local_b8 = CONCAT44(local_b8._4_4_,0x10000000);
      local_c0 = 8;
      local_c8._0_4_ = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar13 = DAT_14c951858;
    lVar7 = DAT_14c949118;
    uVar10 = FUN_1449e2fb2();
    local_c8 = L"Class";
    FUN_14574b446(uVar10,lVar7,lVar13,L"/Script/CoreUObject");
  }
  if ((((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(DAT_14c949118 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) != DAT_14c949118 + 0x30)) ||
      (lVar7 = FUN_1459880c0(), lVar7 == 0)) ||
     ((*(int *)(lVar8 + 0x38) < *(int *)(lVar7 + 0x38) ||
      (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
       lVar7 + 0x30)))) goto LAB_143fe081b;
  if ((((*(int *)((longlong)param_1 + 0xc) == 0) ||
       ((uVar6 = *(uint *)(param_1 + 1), (int)uVar6 < 0 || (DAT_14c9647dc <= (int)uVar6)))) ||
      (plVar11 = (longlong *)
                 ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
      plVar11 == (longlong *)0x0)) ||
     ((((int)plVar11[2] != *(int *)((longlong)param_1 + 0xc) ||
       ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)) || (lVar8 = *plVar11, lVar8 == 0)))) {
    if (param_1[2] != 0) {
      lVar8 = FUN_140007850();
      cVar3 = (*(code *)PTR_FUN_14c758760)();
      if ((lVar8 == 0) || (cVar3 == '\0')) {
        if (lVar8 != 0) {
          uVar6 = *(uint *)(lVar8 + 0xc);
          goto LAB_143fe08a5;
        }
        param_1[1] = 0;
      }
      else {
        uVar6 = *(uint *)(lVar8 + 0xc);
        if ((int)uVar6 < DAT_14c9647dc) {
          lVar7 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
        }
        else {
          lVar7 = 0;
        }
        if ((*(uint *)(lVar7 + 8) & 0x8400000) == 0) {
LAB_143fe08a5:
          *(uint *)(param_1 + 1) = uVar6;
          if ((int)uVar6 < DAT_14c9647dc) {
            lVar7 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
          }
          else {
            lVar7 = 0;
          }
          iVar5 = *(int *)(lVar7 + 0x10);
          if (*(int *)(lVar7 + 0x10) == 0) {
            LOCK();
            iVar5 = DAT_14c964868 + 1;
            UNLOCK();
            iVar12 = DAT_14c964868 + 1;
            bVar14 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar5;
            if (bVar14) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar12);
            }
            LOCK();
            iVar5 = *(int *)(lVar7 + 0x10);
            bVar14 = iVar5 == 0;
            if (bVar14) {
              *(int *)(lVar7 + 0x10) = iVar12;
              iVar5 = 0;
            }
            UNLOCK();
            if (bVar14) {
              iVar5 = iVar12;
            }
          }
          *(int *)((longlong)param_1 + 0xc) = iVar5;
        }
        if ((*(uint *)(lVar8 + 8) >> 0x1e & 1) == 0) goto LAB_143fe08e5;
      }
    }
  }
  else {
LAB_143fe08e5:
    if (DAT_14c949118 == 0) {
      local_78 = FUN_140631fbe;
      if (DAT_14c963f04 == '\0') {
        uVar10 = FUN_140011aa6();
        lVar7 = FUN_140011c0e(uVar10,0x250,8);
      }
      else {
        lVar7 = FUN_14001cc68(0x250,8);
      }
      DAT_14c949118 = lVar7;
      FUN_1446f470e(local_70,L"Class",1);
      local_90 = &local_78;
      local_98 = &LAB_146891e90;
      local_a0 = (code *)&LAB_146273097;
      local_b0 = L"Engine";
      local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,199);
      local_b8 = 0x20;
      local_c0 = 0x10000000;
      local_c8._0_4_ = 8;
      FUN_14574b4b2(lVar7);
      DAT_14c949118 = lVar7;
      if (DAT_14c951858 == 0) {
        local_90 = &local_68;
        local_68 = FUN_1449e2820;
        local_80 = FUN_14081d0ea;
        local_88 = FUN_14081d0ea;
        local_98 = &LAB_1468c5283;
        local_a0 = FUN_142809da0;
        local_a8 = L"Engine";
        local_b0 = (wchar_t *)0x400000000;
        local_b8 = CONCAT44(local_b8._4_4_,0x10000000);
        local_c0 = 8;
        local_c8._0_4_ = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar13 = DAT_14c951858;
      lVar7 = DAT_14c949118;
      uVar10 = FUN_1449e2fb2();
      local_c8 = L"Class";
      FUN_14574b446(uVar10,lVar7,lVar13,L"/Script/CoreUObject");
    }
    if ((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) == DAT_14c949118 + 0x30)) {
      FUN_1459880c0();
    }
  }
  lVar8 = FUN_148b6c2fc(lVar1);
  if ((lVar8 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(lVar8);
  }
  *(longlong *)(lVar1 + 0x70) = lVar8;
  iVar5 = *(int *)(lVar8 + 0x30);
  if ((longlong)iVar5 != 0) {
    lVar7 = *(longlong *)(lVar8 + 0x28);
    lVar13 = 0;
    bVar4 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(lVar7 + lVar13);
      if (((bVar4 & 1) == 0) || (lVar2 == 0)) {
        if (lVar2 != 0) goto LAB_143fe09b3;
      }
      else {
        FUN_1456cec3c(lVar2);
LAB_143fe09b3:
        puVar9 = (undefined8 *)FUN_1488e8eaa(&DAT_14cb91de0);
        puVar9[1] = 0;
        puVar9[2] = 0;
        *puVar9 = &PTR_FUN_14b465ec0;
        memset(puVar9 + 3,0,0x90);
        puVar9[3] = *(undefined8 *)(lVar2 + 0x28);
        FUN_1403de7ba(puVar9 + 5,lVar2 + 0x30);
        FUN_1403de7ba(puVar9 + 9,lVar2 + 0x50);
        FUN_1403de7ba(puVar9 + 0xd,lVar2 + 0x70);
        FUN_1403de7ba(puVar9 + 0x11);
        iVar12 = *(int *)(lVar8 + 0x40);
        uVar6 = iVar12 + 1;
        *(uint *)(lVar8 + 0x40) = uVar6;
        if (*(uint *)(lVar8 + 0x44) < uVar6) {
          FUN_143fdd224((longlong *)(lVar8 + 0x38));
        }
        *(undefined8 **)(*(longlong *)(lVar8 + 0x38) + (longlong)iVar12 * 8) = puVar9;
        bVar4 = DAT_14c950c29;
      }
      lVar13 = lVar13 + 8;
    } while ((longlong)iVar5 * 8 != lVar13);
  }
LAB_143fe081b:
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1416ac158(lVar1);
  return;
}



// FUNCTION 143fe0e32 FUN_143fe0e32 body=374 status=ok
// SIG undefined FUN_143fe0e32(void)

void FUN_143fe0e32(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar5 = (ulonglong)uVar3;
  iVar6 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar6 - uVar3) & 0x1ffffffffffff800U) != 0) ||
      ((int)(uVar3 * 3) < iVar6 * 2)) && (uVar3 == 0 || 0x40 < (int)(iVar6 - uVar3))) {
    if (0 < (int)uVar3) {
      uVar5 = uVar5 * 8;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar4 = uVar5 + 0xf;
          if (uVar3 < 0xfff) {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
          }
          else {
            if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
              bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
              uVar7 = 0x32;
              if (0x32 < bVar2) {
                uVar7 = (ulonglong)bVar2;
              }
              uVar8 = 0x32 - (ulonglong)bVar2;
              do {
                uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_143fe0edb;
                lVar1 = uVar7 + 1 + uVar8;
                uVar8 = uVar8 - 1;
              } while (lVar1 != 0x33);
            }
            uVar5 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar5 = (ulonglong)DAT_14c841df8;
            }
            uVar5 = -uVar5 & ((uVar4 & 0x7fffffff0) + uVar5) - 1;
          }
        }
        else {
          uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
          iVar6 = *(int *)(param_1 + 0xc);
        }
      }
LAB_143fe0edb:
      uVar5 = uVar5 >> 3 & 0xffffffff;
    }
    if ((int)uVar5 != iVar6) {
      *(int *)(param_1 + 0xc) = (int)uVar5;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,8);
    }
  }
  return;
}



// FUNCTION 143fe0fa8 FUN_143fe0fa8 body=29 status=ok
// SIG undefined FUN_143fe0fa8(void)

undefined8 FUN_143fe0fa8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fe1144 FUN_143fe1144 body=93 status=ok
// SIG undefined FUN_143fe1144(void)

void FUN_143fe1144(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b5a3ff0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143fe11a2 FUN_143fe11a2 body=93 status=ok
// SIG undefined FUN_143fe11a2(void)

void FUN_143fe11a2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b5a3ff0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143fe1200 FUN_143fe1200 body=126 status=ok
// SIG undefined FUN_143fe1200(void)

void FUN_143fe1200(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b5a3ff0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143fe126f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143fe128c FUN_143fe128c body=270 status=ok
// SIG undefined FUN_143fe128c(void)

undefined8 FUN_143fe128c(longlong param_1)

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
    if (iVar1 == 2) goto LAB_143fe1394;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143fe1394;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143fe1394:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143fe1348;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x2d0))();
      uVar6 = 1;
      goto LAB_143fe1348;
    }
  }
  uVar6 = 0;
LAB_143fe1348:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fe139c FUN_143fe139c body=25 status=ok
// SIG undefined FUN_143fe139c(void)

void FUN_143fe139c(longlong param_1)

{
  longlong lVar1;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b59f730;
  lVar1 = *(longlong *)(param_1 + 0x30);
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



// FUNCTION 143fe13b6 FUN_143fe13b6 body=29 status=ok
// SIG undefined FUN_143fe13b6(void)

undefined8 FUN_143fe13b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fe13d4 FUN_143fe13d4 body=29 status=ok
// SIG undefined FUN_143fe13d4(void)

undefined8 FUN_143fe13d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fe1570 FUN_143fe1570 body=93 status=ok
// SIG undefined FUN_143fe1570(void)

void FUN_143fe1570(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b5a4160;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143fe15ce FUN_143fe15ce body=93 status=ok
// SIG undefined FUN_143fe15ce(void)

void FUN_143fe15ce(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b5a4160;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143fe162c FUN_143fe162c body=126 status=ok
// SIG undefined FUN_143fe162c(void)

void FUN_143fe162c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b5a4160;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143fe169b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143fe16b8 FUN_143fe16b8 body=270 status=ok
// SIG undefined FUN_143fe16b8(void)

undefined8 FUN_143fe16b8(longlong param_1)

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
    if (iVar1 == 2) goto LAB_143fe17c0;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143fe17c0;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143fe17c0:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143fe1774;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x318))();
      uVar6 = 1;
      goto LAB_143fe1774;
    }
  }
  uVar6 = 0;
LAB_143fe1774:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fe17c8 FUN_143fe17c8 body=83 status=ok
// SIG undefined FUN_143fe17c8(void)

longlong * FUN_143fe17c8(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_143fb7638();
    cVar2 = FUN_1448093f4(lVar1,uVar3);
    if (cVar2 != '\0') {
      *param_2 = *param_1;
      lVar1 = param_1[1];
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



// FUNCTION 143fe181c FUN_143fe181c body=29 status=ok
// SIG undefined FUN_143fe181c(void)

undefined8 FUN_143fe181c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fe19b8 FUN_143fe19b8 body=101 status=ok
// SIG undefined FUN_143fe19b8(void)

void FUN_143fe19b8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b5a4320;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143fe1a1e FUN_143fe1a1e body=101 status=ok
// SIG undefined FUN_143fe1a1e(void)

void FUN_143fe1a1e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b5a4320;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143fe1a84 FUN_143fe1a84 body=134 status=ok
// SIG undefined FUN_143fe1a84(void)

void FUN_143fe1a84(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b5a4320;
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
                    /* WARNING: Could not recover jumptable at 0x000143fe1afb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143fe1b14 FUN_143fe1b14 body=269 status=ok
// SIG undefined FUN_143fe1b14(void)

undefined8 FUN_143fe1b14(longlong param_1)

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
    if (iVar1 == 2) goto LAB_143fe1c1b;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143fe1c1b;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143fe1c1b:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143fe1bcf;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143fe1c22(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_143fe1bcf;
    }
  }
  uVar6 = 0;
LAB_143fe1bcf:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fe1c22 FUN_143fe1c22 body=207 status=ok
// SIG undefined FUN_143fe1c22(void)

void FUN_143fe1c22(longlong *param_1)

{
  longlong lVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *param_1;
  *(undefined8 *)(lVar1 + 0xd8) = 0;
  FUN_140056680(local_38,&DAT_149dfb77a);
  local_60 = *(undefined8 *)(lVar1 + 0xa8);
  local_58 = *(undefined4 *)(lVar1 + 0xb0);
  uStack_54 = *(undefined4 *)(lVar1 + 0xb4);
  uStack_50 = *(undefined4 *)(lVar1 + 0xb8);
  uStack_4c = *(undefined4 *)(lVar1 + 0xbc);
  local_48 = (void *)0x0;
  local_40 = *(int *)(lVar1 + 200);
  lVar2 = (longlong)local_40;
  _Src = *(void **)(lVar1 + 0xc0);
  if (lVar2 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar2 * 2);
  }
  FUN_147abd634(param_1[1],&local_60,1,local_38);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fe1cf2 FUN_143fe1cf2 body=71 status=ok
// SIG undefined FUN_143fe1cf2(void)

void FUN_143fe1cf2(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b59f750;
  FUN_143fb3f62(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143fe1d3a FUN_143fe1d3a body=29 status=ok
// SIG undefined FUN_143fe1d3a(void)

undefined8 FUN_143fe1d3a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fe1d58 FUN_143fe1d58 body=1042 status=ok
// SIG undefined FUN_143fe1d58(void)

void FUN_143fe1d58(longlong *param_1,char *param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_78 [32];
  longlong *local_58;
  int local_50;
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar4 = *param_2;
  param_1 = (longlong *)*param_1;
  if (cVar4 == '\0') {
    if (param_1[8] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
    }
    goto LAB_143fe20a6;
  }
  lVar2 = *param_3;
  if (cVar4 != '\x02') {
    if (cVar4 == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
    }
    goto LAB_143fe20a6;
  }
  if ((lVar2 == 0) || ((*(uint *)(lVar2 + 8) >> 0x1e & 1) != 0)) goto LAB_143fe20a6;
  lVar6 = FUN_1458995bc();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
      lVar6 + 0x30)) {
    param_1[5] = 0;
    goto LAB_143fe20a6;
  }
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c();
  }
  param_1[5] = lVar2;
  if ((*(uint *)(lVar2 + 8) >> 0x1e & 1) != 0) goto LAB_143fe20a6;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    plVar7 = (longlong *)param_1[4];
  }
  else {
    plVar7 = (longlong *)0x0;
  }
  (**(code **)(*plVar7 + 0x2d0))(plVar7,param_1[8]);
  lVar2 = param_1[5];
  local_58 = (longlong *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  plVar7 = local_58;
  local_50 = 3;
  *local_58 = (longlong)&PTR_LAB_149e020b0;
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
  local_58[2] = lVar8;
  *local_58 = (longlong)&PTR_FUN_14b5a43d0;
  local_58[3] = 0;
  iVar10 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar1 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_58 + 3) = uVar1;
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
      iVar5 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar10 = *(int *)(lVar6 + 0x10);
      bVar11 = iVar10 == 0;
      if (bVar11) {
        *(int *)(lVar6 + 0x10) = iVar5;
        iVar10 = 0;
      }
      UNLOCK();
      if (bVar11) {
        iVar10 = iVar5;
      }
    }
  }
  *(int *)((longlong)plVar7 + 0x1c) = iVar10;
  plVar7[4] = (longlong)param_1;
  if (((local_50 == 0) || (local_58 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*local_58 + 0x30))(), cVar4 == '\0')) {
    if (local_50 == 0) goto LAB_143fe208b;
    if (local_58 != (longlong *)0x0) {
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      goto LAB_143fe207e;
    }
  }
  else {
    plVar7 = (longlong *)(lVar2 + 0x3a0);
    if (*(int *)(lVar2 + 0x3b4) < 1) {
      iVar10 = *(int *)(lVar2 + 0x3a8);
      iVar5 = *(int *)(lVar2 + 0x3b0) + -1;
      *(int *)(lVar2 + 0x3b0) = iVar5;
      if (iVar5 <= iVar10) {
        iVar5 = iVar10;
        if (0 < iVar10) {
          iVar9 = 0;
          do {
            if (((*(int *)(*plVar7 + 8 + (longlong)iVar9 * 0x10) == 0) ||
                (plVar3 = *(longlong **)(*plVar7 + (longlong)iVar9 * 0x10),
                plVar3 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar3 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(plVar7,iVar9);
              FUN_14005b248(plVar7);
            }
            else {
              iVar9 = iVar9 + 1;
            }
            iVar5 = *(int *)(lVar2 + 0x3a8);
          } while (iVar9 < iVar5);
        }
        iVar9 = 2;
        if (2 < iVar5 * 2) {
          iVar9 = iVar5 * 2;
        }
        *(int *)(lVar2 + 0x3b0) = iVar9;
        if ((iVar9 < iVar10) && (*(int *)(lVar2 + 0x3ac) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    if ((local_50 != 0) && (local_58 != (longlong *)0x0)) {
      (**(code **)(*local_58 + 0x38))(local_58,local_48);
    }
    iVar10 = *(int *)(lVar2 + 0x3a8);
    *(uint *)(lVar2 + 0x3a8) = iVar10 + 1U;
    if (*(uint *)(lVar2 + 0x3ac) < iVar10 + 1U) {
      FUN_1447a71f6(plVar7,iVar10);
    }
    lVar2 = *plVar7;
    lVar6 = (longlong)iVar10 * 0x10;
    *(undefined8 *)(lVar2 + lVar6) = 0;
    *(undefined4 *)(lVar2 + 8 + lVar6) = 0;
    *(longlong **)(lVar2 + lVar6) = local_58;
    local_58 = (longlong *)0x0;
    *(int *)(lVar2 + 8 + lVar6) = local_50;
LAB_143fe207e:
    local_50 = 0;
LAB_143fe208b:
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((char)param_1[0xb] == '\x01') {
    (**(code **)(*param_1 + 0x2a8))(param_1);
  }
LAB_143fe20a6:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fe21cc FUN_143fe21cc body=29 status=ok
// SIG undefined FUN_143fe21cc(void)

undefined8 FUN_143fe21cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fe21ea FUN_143fe21ea body=29 status=ok
// SIG undefined FUN_143fe21ea(void)

undefined8 FUN_143fe21ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fe2386 FUN_143fe2386 body=93 status=ok
// SIG undefined FUN_143fe2386(void)

void FUN_143fe2386(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b5a43d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143fe23e4 FUN_143fe23e4 body=93 status=ok
// SIG undefined FUN_143fe23e4(void)

void FUN_143fe23e4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b5a43d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143fe2442 FUN_143fe2442 body=126 status=ok
// SIG undefined FUN_143fe2442(void)

void FUN_143fe2442(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b5a43d0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143fe24b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143fe24ca FUN_143fe24ca body=269 status=ok
// SIG undefined FUN_143fe24ca(void)

undefined8 FUN_143fe24ca(longlong param_1)

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
    if (iVar1 == 2) goto LAB_143fe25d1;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143fe25d1;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143fe25d1:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143fe2585;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143fe25d8(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_143fe2585;
    }
  }
  uVar6 = 0;
LAB_143fe2585:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fe25d8 FUN_143fe25d8 body=568 status=ok
// SIG undefined FUN_143fe25d8(void)

void FUN_143fe25d8(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
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
  undefined1 *local_50;
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar2 = *param_1;
  if (*(longlong *)(lVar2 + 0x48) != 0) {
    if ((*(uint *)(lVar2 + 8) & 0x10) == 0) {
      plVar7 = *(longlong **)(lVar2 + 0x20);
    }
    else {
      plVar7 = (longlong *)0x0;
    }
    if (*(longlong *)(lVar2 + 0x28) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined1 *)(*(longlong *)(lVar2 + 0x28) + 0x42a);
    }
    (**(code **)(*plVar7 + 0x2d8))(plVar7,*(undefined8 *)(lVar2 + 0x40),uVar8);
    if ((((*(longlong *)(lVar2 + 0x28) != 0) && (*(char *)(lVar2 + 0x58) == '\0')) &&
        (*(char *)(*(longlong *)(lVar2 + 0x28) + 0x42a) == '\0')) &&
       ((*(char *)(*(longlong *)(lVar2 + 0x48) + 0x38) == '\x01' &&
        (*(undefined1 *)(lVar2 + 0x58) = 1, *(longlong *)(lVar2 + 0x40) != 0)))) {
      if ((*(uint *)(lVar2 + 8) & 0x10) == 0) {
        lVar5 = *(longlong *)(lVar2 + 0x20);
      }
      else {
        lVar5 = 0;
      }
      lVar5 = *(longlong *)(lVar5 + 0x20);
      if (lVar5 != 0) {
        if (DAT_14cae9568 == 0) {
          local_60 = &local_48;
          local_48 = FUN_1417de738;
          local_50 = &LAB_145893408;
          local_58 = &LAB_1458cbbd2;
          local_68 = &LAB_147ba21f1;
          local_70 = &LAB_1463e9233;
          local_78 = L"Engine";
          local_80 = 0;
          local_88 = 0x1000000c;
          local_90 = 8;
          local_98 = 0x2b8;
          FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
        }
        lVar5 = *(longlong *)(lVar5 + 0x10);
        iVar1 = *(int *)(DAT_14cae9568 + 0x38);
        if ((iVar1 <= *(int *)(lVar5 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar1 * 8) == DAT_14cae9568 + 0x30
           )) {
          if ((*(uint *)(lVar2 + 8) & 0x10) == 0) {
            lVar5 = *(longlong *)(lVar2 + 0x20);
          }
          else {
            lVar5 = 0;
          }
          lVar5 = *(longlong *)(lVar5 + 0x20);
          if (((lVar5 == 0) || (*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < iVar1)) ||
             (*(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar1 * 8)
              != DAT_14cae9568 + 0x30)) {
            lVar5 = 0;
          }
          lVar5 = FUN_148b5bece(lVar5);
          if (lVar5 != 0) {
            lVar2 = *(longlong *)(lVar2 + 0x40);
            uVar9 = (ulonglong)*(uint *)(lVar2 + 0x50);
            if (uVar9 != 0) {
              uVar10 = 0;
              do {
                lVar3 = *(longlong *)(lVar5 + 0x88);
                if (lVar3 != 0) {
                  lVar4 = *(longlong *)(lVar2 + 0x48);
                  puVar6 = (undefined8 *)FUN_14001cc68(0x18,0x10);
                  *(undefined1 *)(puVar6 + 1) = 0;
                  *(undefined4 *)((longlong)puVar6 + 0xc) = 0x10;
                  *puVar6 = &PTR_FUN_14b466570;
                  puVar6[2] = *(undefined8 *)(lVar4 + uVar10 * 8);
                  FUN_1409ee7a4(lVar3,puVar6);
                }
                uVar10 = uVar10 + 1;
              } while (uVar9 != uVar10);
            }
          }
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143fe2812 FUN_143fe2812 body=29 status=ok
// SIG undefined FUN_143fe2812(void)

undefined8 FUN_143fe2812(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fe29ae FUN_143fe29ae body=124 status=ok
// SIG undefined FUN_143fe29ae(void)

void FUN_143fe29ae(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5a44f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5a4480;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  return;
}



// FUNCTION 143fe2a2a FUN_143fe2a2a body=124 status=ok
// SIG undefined FUN_143fe2a2a(void)

void FUN_143fe2a2a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5a44f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5a4480;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  return;
}



// FUNCTION 143fe2aa6 FUN_143fe2aa6 body=157 status=ok
// SIG undefined FUN_143fe2aa6(void)

void FUN_143fe2aa6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b5a44f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b5a4480;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  p_Var1->Flags = 0;
  p_Var1->CreatorBackTraceIndexHigh = 0;
  p_Var1->SpareWORD = 0;
  p_Var1[1].Type = 0;
  p_Var1[1].CreatorBackTraceIndex = 0;
  *(undefined4 *)&p_Var1[1].field_0x4 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  p_Var1[1].Type = (short)uVar2;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)uVar2 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143fe2b34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143fe2b44 FUN_143fe2b44 body=151 status=ok
// SIG undefined FUN_143fe2b44(void)

void FUN_143fe2b44(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((*(longlong *)(param_1 + 0x30) != 0) && (*(int *)(param_1 + 0x2c) != 0)) {
    uVar1 = *(uint *)(param_1 + 0x28);
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar3 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(param_1 + 0x2c))) &&
          ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)) && (*plVar3 != 0)) {
        lVar2 = FUN_1400796d0(*(undefined8 *)(*plVar3 + 0x10),*(longlong *)(param_1 + 0x30),1);
        if (lVar2 != 0) {
          FUN_143fb786a((uint *)(param_1 + 0x28),param_2,param_3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 143fe2bdc FUN_143fe2bdc body=409 status=ok
// SIG undefined FUN_143fe2bdc(void)

undefined8 FUN_143fe2bdc(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143fe2d6f;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143fe2d6f;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar7 = local_38;
  }
  else {
LAB_143fe2d6f:
    lVar7 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143fe2c9b;
    lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar8 != 0) &&
       ((*(int *)(lVar8 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar8 + 8) & 0x10200000) == 0)))) {
      uVar6 = 1;
      if ((*(longlong *)(param_1 + 0x30) != 0) && (*(int *)(param_1 + 0x2c) != 0)) {
        uVar2 = *(uint *)(param_1 + 0x28);
        if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
          plVar5 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if ((plVar5 != (longlong *)0x0) &&
             ((((int)plVar5[2] == *(int *)(param_1 + 0x2c) &&
               ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)) && (*plVar5 != 0)))) {
            lVar8 = FUN_1400796d0(*(undefined8 *)(*plVar5 + 0x10),*(longlong *)(param_1 + 0x30),1);
            if (lVar8 != 0) {
              FUN_143fb786a((uint *)(param_1 + 0x28),param_2,param_3);
            }
          }
        }
      }
      goto LAB_143fe2c9b;
    }
  }
  uVar6 = 0;
LAB_143fe2c9b:
  if ((lVar7 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar7);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fe2d7c FUN_143fe2d7c body=29 status=ok
// SIG undefined FUN_143fe2d7c(void)

undefined8 FUN_143fe2d7c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fe2f22 FUN_143fe2f22 body=101 status=ok
// SIG undefined FUN_143fe2f22(void)

void FUN_143fe2f22(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5a3e30;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5a4720;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143fe2f88 FUN_143fe2f88 body=101 status=ok
// SIG undefined FUN_143fe2f88(void)

void FUN_143fe2f88(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5a3e30;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5a4720;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143fe2fee FUN_143fe2fee body=134 status=ok
// SIG undefined FUN_143fe2fee(void)

void FUN_143fe2fee(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b5a3e30;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b5a4720;
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
                    /* WARNING: Could not recover jumptable at 0x000143fe3065. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143fe30d6 FUN_143fe30d6 body=284 status=ok
// SIG undefined FUN_143fe30d6(void)

undefined8 FUN_143fe30d6(longlong param_1,undefined8 param_2)

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
    if (iVar1 == 2) goto LAB_143fe31ec;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143fe31ec;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_143fe31ec:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143fe319f;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_143fe319f;
    }
  }
  uVar6 = 0;
LAB_143fe319f:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fe31f3 FUN_143fe31f3 body=16124 status=ok
// SIG undefined FUN_143fe31f3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143fe31f3(void)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  void *pvVar6;
  char cVar7;
  uint uVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  ulonglong uVar13;
  undefined ***pppuVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  int iVar20;
  undefined *puVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong lVar24;
  int iVar25;
  bool bVar26;
  undefined1 auStack_118 [32];
  ulonglong local_f8;
  undefined **ppuStack_f0;
  undefined8 local_e8;
  char *local_d8;
  undefined8 uStack_d0;
  void *local_c8;
  ulonglong uStack_c0;
  undefined1 *local_b8;
  undefined4 local_b0;
  wchar_t *local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined ***local_98;
  undefined **local_88;
  undefined1 *puStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  DAT_14cb9d978 = 0;
  _DAT_14cb9d980 = 0;
  DAT_14cb9d958 = 0;
  _DAT_14cb9d960 = 0;
  _DAT_14cb9d984 = 0xffffffff00000080;
  DAT_14cb9d98c = 0;
  DAT_14cb9d998 = 0;
  DAT_14cb9d9a0 = 0;
  atexit(FUN_143fc96a8);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cb9d9a8);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cb9d9a8,4000);
  atexit((_func_5014 *)&LAB_143fc974e);
  local_a8 = L"AssetRegistry";
  local_a0 = 0xd;
  local_9c = 0;
  uVar8 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb9d9d0 = (ulonglong)uVar8;
  DAT_14cb9d9f8 = 0;
  DAT_14cb9da00 = 0;
  DAT_14cb9d9d8 = 0;
  _DAT_14cb9d9e0 = 0;
  _DAT_14cb9da04 = 0xffffffff00000080;
  DAT_14cb9da0c = 0;
  DAT_14cb9da18 = 0;
  DAT_14cb9da20 = 0;
  atexit(FUN_143fc9c6e);
  ppuStack_f0 = &PTR_FUN_14b5a2740;
  local_f8 = 0;
  local_e8 = 1;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b5a2760,1,0);
  local_a8 = L"WidgetPaletteCategory_Core";
  local_a0 = 0x1a;
  FUN_1446e940c(&local_d8,&local_a8);
  local_a8 = L"GbxUIUMG";
  local_a0 = 8;
  FUN_1446e940c(&local_b8,&local_a8);
  local_a8 = L"GBX CORE";
  local_a0 = 8;
  FUN_140208c1e(&DAT_14cb9dbb8,&local_b8,&local_d8,&local_a8);
  atexit((_func_5014 *)&LAB_143fca878);
  local_a8 = L"WidgetPaletteCategory_Text";
  local_a0 = 0x1a;
  FUN_1446e940c(&local_d8,&local_a8);
  local_a8 = L"GbxUIUMG";
  local_a0 = 8;
  FUN_1446e940c(&local_b8,&local_a8);
  local_a8 = L"GBX TEXT";
  local_a0 = 8;
  FUN_140208c1e(&DAT_14cb9dbc8,&local_b8,&local_d8,&local_a8);
  atexit((_func_5014 *)&LAB_143fca88c);
  local_a8 = L"WidgetPaletteCategory_List";
  local_a0 = 0x1a;
  FUN_1446e940c(&local_d8,&local_a8);
  local_a8 = L"GbxUIUMG";
  local_a0 = 8;
  FUN_1446e940c(&local_b8,&local_a8);
  local_a8 = L"GBX LIST";
  local_a0 = 8;
  FUN_140208c1e(&DAT_14cb9dbd8,&local_b8,&local_d8,&local_a8);
  atexit((_func_5014 *)&LAB_143fca8a0);
  local_a8 = L"WidgetPaletteCategory_Switcher";
  local_a0 = 0x1e;
  FUN_1446e940c(&local_d8,&local_a8);
  local_a8 = L"GbxUIUMG";
  local_a0 = 8;
  FUN_1446e940c(&local_b8,&local_a8);
  local_a8 = L"GBX SWITCHER";
  local_a0 = 0xc;
  FUN_140208c1e(&DAT_14cb9dbe8,&local_b8,&local_d8,&local_a8);
  atexit((_func_5014 *)&LAB_143fca8b4);
  local_a8 = L"WidgetPaletteCategory_Extra";
  local_a0 = 0x1b;
  FUN_1446e940c(&local_d8,&local_a8);
  local_a8 = L"GbxUIUMG";
  local_a0 = 8;
  FUN_1446e940c(&local_b8,&local_a8);
  local_a8 = L"GBX EXTRA";
  local_a0 = 9;
  FUN_140208c1e(&DAT_14cb9dbf8,&local_b8,&local_d8,&local_a8);
  atexit((_func_5014 *)&LAB_143fca8c8);
  local_a8 = L"WidgetPaletteCategory_Widget";
  local_a0 = 0x1c;
  FUN_1446e940c(&local_d8,&local_a8);
  local_a8 = L"GbxUIUMG";
  local_a0 = 8;
  FUN_1446e940c(&local_b8,&local_a8);
  local_a8 = L"GBX WIDGET";
  local_a0 = 10;
  FUN_140208c1e(&DAT_14cb9dc08,&local_b8,&local_d8,&local_a8);
  atexit((_func_5014 *)&LAB_143fca8dc);
  local_a8 = L"WidgetPaletteCategory_Panel";
  local_a0 = 0x1b;
  FUN_1446e940c(&local_d8,&local_a8);
  local_a8 = L"GbxUIUMG";
  local_a0 = 8;
  FUN_1446e940c(&local_b8,&local_a8);
  local_a8 = L"GBX PANEL";
  local_a0 = 9;
  FUN_140208c1e(&DAT_14cb9dc18,&local_b8,&local_d8,&local_a8);
  atexit((_func_5014 *)&LAB_143fca8f0);
  local_a8 = L"WidgetPaletteCategory_Input";
  local_a0 = 0x1b;
  FUN_1446e940c(&local_d8,&local_a8);
  local_a8 = L"GbxUIUMG";
  local_a0 = 8;
  FUN_1446e940c(&local_b8,&local_a8);
  local_a8 = L"GBX INPUT";
  local_a0 = 9;
  FUN_140208c1e(&DAT_14cb9dc28,&local_b8,&local_d8,&local_a8);
  atexit((_func_5014 *)&LAB_143fca904);
  local_a8 = L"WidgetPaletteCategory_UserCreated";
  local_a0 = 0x21;
  FUN_1446e940c(&local_d8,&local_a8);
  local_a8 = L"GbxUIUMG";
  local_a0 = 8;
  FUN_1446e940c(&local_b8,&local_a8);
  local_a8 = L"USER CREATED";
  local_a0 = 0xc;
  FUN_140208c1e(&DAT_14cb9dc38,&local_b8,&local_d8,&local_a8);
  atexit((_func_5014 *)&LAB_143fca918);
  local_e8 = 0;
  local_f8 = 0;
  ppuStack_f0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxUIUMG",&PTR_FUN_14b5a2bb0,1,0);
  DAT_14cb9dc60 = 0xbff0000000000000;
  DAT_14cb9dc68 = 0;
  DAT_14cb9dc70 = 0;
  _DAT_14cb9dc78 = 0xbff0000000000000;
  DAT_14cb9dc80 = 0x3ff0000000000000;
  _DAT_14cb9dc88 = 0;
  DAT_14cb9dc90 = 0;
  _DAT_14cb9dc98 = 0x3ff0000000000000;
  local_a8 = L"nexus";
  local_a0 = 5;
  local_9c = 0;
  uVar8 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb9dca0 = (ulonglong)uVar8;
  _DAT_14cb9dcb0 = &LAB_143fcda70;
  _DAT_14cb9dcb8 = 0x43a10000;
  DAT_14cb9dcbc = 1;
  DAT_14cb9dca8 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb9dca8;
  atexit((_func_5014 *)&LAB_143fcda75);
  DAT_14cb9dd28 = 0;
  uRam000000014cb9dd30 = 0;
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_14a1795c0;
  puStack_80 = &LAB_143fde234;
  local_a8 = L"ｈ찡䡖\xec83䠠캉돨";
  DAT_14cb9dd40 = 0;
  local_d8 = "uidatadef";
  uStack_d0 = CONCAT35(uStack_d0._5_3_,9);
  uVar8 = FUN_14001a6c0(&local_d8,1);
  DAT_14cb9dd44 = (ulonglong)uVar8;
  _DAT_14cb9dd50 = 0;
  _DAT_14cb9dd58 = (char *)0x0;
  _DAT_14cb9dd60 = 0;
  DAT_14cb9dd68 = (void *)0x0;
  _DAT_14cb9dd70 = 0;
  _DAT_14cb9dd78 = FUN_143fcdc12;
  DAT_14cb9dd80 = local_a8;
  DAT_14cb9dd90 = local_98;
  local_98 = (undefined ***)0x0;
  DAT_14cb9dda0 = local_88;
  puRam000000014cb9dda8 = puStack_80;
  _DAT_14cb9ddb0 = local_78;
  uRam000000014cb9ddb4 = uStack_74;
  uRam000000014cb9ddb8 = uStack_70;
  uRam000000014cb9ddbc = uStack_6c;
  if (local_a8 != (wchar_t *)0x0) {
    local_a8 = (wchar_t *)0x0;
  }
  local_d8 = (char *)0x0;
  uStack_d0 = 0;
  local_c8 = (void *)0x0;
  uStack_c0 = 0;
  local_b8 = &DAT_149e02088;
  local_b0 = 0;
  FUN_14475bea4(&local_d8);
  pvVar6 = local_c8;
  _DAT_14cb9dd50 = 0;
  _DAT_14cb9dd58 = local_d8;
  _DAT_14cb9dd60 = uStack_d0;
  iVar25 = (int)uStack_c0;
  lVar16 = (longlong)(int)uStack_c0;
  _DAT_14cb9dd70 = CONCAT44(DAT_14cb9dd74,(int)uStack_c0);
  if ((int)uStack_c0 == 0 && DAT_14cb9dd74 == 0) {
    _DAT_14cb9dd70 = uStack_c0 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb9dd68,uStack_c0 & 0xffffffff);
    if (iVar25 != 0) {
      memcpy(DAT_14cb9dd68,pvVar6,lVar16 * 2);
    }
  }
  if (local_c8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb9dd40) && ((DAT_14cb9dcc8 == (int *)0x0 || (*DAT_14cb9dcc8 < DAT_14cb9dd40)))) {
    DAT_14cb9dcc8 = &DAT_14cb9dd40;
  }
  FUN_143fcdad4();
  iVar10 = DAT_14cb9dd00;
  iVar25 = DAT_14cb9dcd8;
  if (DAT_14cb9dd04 == 0) {
    iVar10 = DAT_14cb9dcd8 + 1;
    bVar26 = DAT_14cb9dcdc == DAT_14cb9dcd8;
    DAT_14cb9dcd8 = iVar10;
    if (bVar26) {
      FUN_14482b872(&DAT_14cb9dcd0,iVar25);
    }
    iVar10 = DAT_14cb9dcf8;
    if (DAT_14cb9dcf8 == 0) {
      iVar20 = -1;
    }
    else {
      iVar20 = DAT_14cb9dcf8 + 0x1e;
      if (-1 < DAT_14cb9dcf8 + -1) {
        iVar20 = DAT_14cb9dcf8 + -1;
      }
      iVar20 = iVar20 >> 5;
    }
    iVar11 = DAT_14cb9dcf8 + 1;
    iVar15 = DAT_14cb9dcf8 + 0x1f;
    if (-1 < DAT_14cb9dcf8) {
      iVar15 = DAT_14cb9dcf8;
    }
    if (iVar15 >> 5 != iVar20) {
      if (DAT_14cb9dcfc <= DAT_14cb9dcf8) {
        if (DAT_14cb9dcf8 + 0x20U < 0xa0) {
          DAT_14cb9dcfc = 0x80;
        }
        else {
          uVar8 = DAT_14cb9dcf8 + 0x20U >> 5;
          if (DAT_14cb9dcfc + 0x1fU < 0xa0) {
            uVar17 = 4;
            if (4 < uVar8) {
              uVar17 = uVar8;
            }
          }
          else {
            uVar17 = uVar8 + (uVar8 * 3 >> 3) + 0x10;
          }
          uVar13 = (ulonglong)(uVar17 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar19 = (uint)(uVar13 + 0xf);
              if (uVar17 < 0x1ffd) {
                uVar13 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar19 >> 4]];
              }
              else {
                uVar22 = uVar13 + 0xf & 0xfffffffffffffff0;
                if (uVar22 < 0x7ff1) {
                  bVar9 = (&DAT_14c841e00)[uVar19 >> 4];
                  uVar18 = 0x32;
                  if (0x32 < bVar9) {
                    uVar18 = (ulonglong)bVar9;
                  }
                  uVar23 = 0x32 - (ulonglong)bVar9;
                  do {
                    uVar13 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar23 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar23 & 0xffffffff] & 0xf) == 0) goto LAB_143fe67e7;
                    lVar16 = uVar18 + 1 + uVar23;
                    uVar23 = uVar23 - 1;
                  } while (lVar16 != 0x33);
                }
                uVar13 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar13 = (ulonglong)DAT_14c841df8;
                }
                uVar13 = -uVar13 & (uVar22 + uVar13) - 1;
              }
            }
            else {
              uVar13 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar13,0);
            }
          }
LAB_143fe67e7:
          iVar20 = (int)(uVar13 >> 2);
          DAT_14cb9dcfc = -0x20;
          if ((int)uVar8 <= iVar20) {
            DAT_14cb9dcfc = iVar20 << 5;
          }
        }
        FUN_1446efbd8(&DAT_14cb9dce0,DAT_14cb9dcf8);
        iVar11 = DAT_14cb9dcf8 + 1;
      }
      iVar20 = iVar11 + 0x1f;
      if (-1 < iVar11) {
        iVar20 = iVar11;
      }
      if (iVar11 % 0x20 != 0) {
        puVar12 = &DAT_14cb9dce0;
        if (DAT_14cb9dcf0 != (uint *)0x0) {
          puVar12 = DAT_14cb9dcf0;
        }
        bVar9 = -(char)(iVar11 % 0x20);
        DAT_14cb9dcf8 = iVar11;
        puVar12[iVar20 >> 5] = (puVar12[iVar20 >> 5] << (bVar9 & 0x1f)) >> (bVar9 & 0x1f);
        iVar11 = DAT_14cb9dcf8;
      }
    }
    DAT_14cb9dcf8 = iVar11;
    lVar16 = (longlong)iVar25;
    puVar12 = &DAT_14cb9dce0;
    if (DAT_14cb9dcf0 != (uint *)0x0) {
      puVar12 = DAT_14cb9dcf0;
    }
    bVar9 = (byte)iVar10 & 0x1f;
    puVar12[iVar15 >> 5] = puVar12[iVar15 >> 5] & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
  }
  else {
    lVar16 = (longlong)DAT_14cb9dd00;
    DAT_14cb9dd00 = *(int *)(DAT_14cb9dcd0 + 4 + lVar16 * 0x18);
    DAT_14cb9dd04 = DAT_14cb9dd04 + -1;
    iVar25 = iVar10;
    if (DAT_14cb9dd04 != 0) {
      *(undefined4 *)(DAT_14cb9dcd0 + (longlong)DAT_14cb9dd00 * 0x18) = 0xffffffff;
    }
  }
  puVar12 = DAT_14cb9dcf0;
  if (DAT_14cb9dcf0 == (uint *)0x0) {
    puVar12 = &DAT_14cb9dce0;
  }
  iVar10 = iVar25 + 0x1f;
  if (-1 < iVar25) {
    iVar10 = iVar25;
  }
  puVar12[iVar10 >> 5] = puVar12[iVar10 >> 5] | 1 << ((byte)iVar25 & 0x1f);
  uVar13 = DAT_14cb9dd44;
  uVar17 = 1;
  puVar1 = (ulonglong *)(DAT_14cb9dcd0 + lVar16 * 0x18);
  *puVar1 = DAT_14cb9dd44;
  puVar1[1] = (ulonglong)&DAT_14cb9dd40;
  *(undefined4 *)(puVar1 + 2) = 0xffffffff;
  uVar8 = (uint)(uVar13 >> 0x10);
  uVar19 = (uint)uVar13 & 0xffff;
  uVar8 = ((uint)uVar13 << 0x10 | uVar19) + (int)(uVar13 >> 0x20) + (uVar8 << 0x13 | uVar8 & 0xffff)
          + (uVar19 >> 4);
  uVar19 = DAT_14cb9dcd8 - DAT_14cb9dd04;
  if (1 < uVar19) {
    puVar21 = &DAT_14cb9dd08;
    if (DAT_14cb9dd10 != (undefined *)0x0) {
      puVar21 = DAT_14cb9dd10;
    }
    iVar10 = *(int *)(puVar21 + (ulonglong)(DAT_14cb9dd18 - 1 & uVar8) * 4);
    while (iVar10 != -1) {
      puVar2 = (ulonglong *)(DAT_14cb9dcd0 + (longlong)iVar10 * 0x18);
      if (*puVar2 == uVar13) {
        uVar4 = *(undefined4 *)((longlong)puVar1 + 4);
        uVar13 = puVar1[1];
        uVar5 = *(undefined4 *)((longlong)puVar1 + 0xc);
        *(int *)puVar2 = (int)*puVar1;
        *(undefined4 *)((longlong)puVar2 + 4) = uVar4;
        *(int *)(puVar2 + 1) = (int)uVar13;
        *(undefined4 *)((longlong)puVar2 + 0xc) = uVar5;
        FUN_143fdbf58(iVar25);
        goto LAB_143fe3eb0;
      }
      iVar10 = (int)puVar2[2];
    }
  }
  if (3 < uVar19) {
    uVar13 = (ulonglong)(uVar19 & 0xfffffffe) + 0xf;
    lVar16 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar17 = 1 << ((byte)lVar16 & 0x1f);
  }
  if (((int)uVar19 < 1) || ((int)uVar17 <= (int)DAT_14cb9dd18)) {
    uVar8 = DAT_14cb9dd18 - 1 & uVar8;
    *(uint *)((longlong)puVar1 + 0x14) = uVar8;
    puVar21 = DAT_14cb9dd10;
    if (DAT_14cb9dd10 == (undefined *)0x0) {
      puVar21 = &DAT_14cb9dd08;
    }
    *(undefined4 *)(puVar1 + 2) =
         *(undefined4 *)(puVar21 + ((longlong)(int)DAT_14cb9dd18 - 1U & (longlong)(int)uVar8) * 4);
    puVar21 = DAT_14cb9dd10;
    if (DAT_14cb9dd10 == (undefined *)0x0) {
      puVar21 = &DAT_14cb9dd08;
    }
    *(int *)(puVar21 + ((longlong)(int)DAT_14cb9dd18 - 1U & (longlong)(int)uVar8) * 4) = iVar25;
  }
  else {
    DAT_14cb9dd18 = uVar17;
    if (DAT_14cb9dd10 != (undefined *)0x0) {
      FUN_1446efa72(&DAT_14cb9dd10,0,0,4);
    }
    uVar8 = DAT_14cb9dd18;
    if (DAT_14cb9dd18 != 0) {
      if (DAT_14cb9dd18 == 1) {
        if (DAT_14cb9dd10 != (undefined *)0x0) {
          FUN_1446efa72(&DAT_14cb9dd10,0,0,4);
        }
LAB_143fe3c20:
        uVar17 = 0;
        do {
          puVar21 = DAT_14cb9dd10;
          if (DAT_14cb9dd10 == (undefined *)0x0) {
            puVar21 = &DAT_14cb9dd08;
          }
          *(undefined4 *)(puVar21 + (ulonglong)(DAT_14cb9dd18 + 0x7fffffff & uVar17) * 4) =
               0xffffffff;
          uVar17 = uVar17 + 1;
        } while (uVar8 != uVar17);
      }
      else {
        FUN_1446efa72(&DAT_14cb9dd10,0,DAT_14cb9dd18,4);
        if (0 < (int)uVar8) goto LAB_143fe3c20;
      }
      if (DAT_14cb9dcf8 == 0) {
        uVar13 = 0;
        uVar22 = 1;
        iVar10 = 0;
        iVar25 = 0;
      }
      else {
        puVar12 = DAT_14cb9dcf0;
        if (DAT_14cb9dcf0 == (uint *)0x0) {
          puVar12 = &DAT_14cb9dce0;
        }
        uVar8 = *puVar12;
        if (uVar8 == 0) {
          iVar25 = DAT_14cb9dcf8 + 0x1e;
          if (-1 < DAT_14cb9dcf8 + -1) {
            iVar25 = DAT_14cb9dcf8 + -1;
          }
          uVar13 = 0;
          uVar22 = (ulonglong)(uint)(iVar25 >> 5);
          if (iVar25 >> 5 < 1) {
            uVar22 = uVar13;
          }
          iVar10 = 0;
          do {
            if (uVar22 == uVar13) goto LAB_143fe3eb0;
            iVar10 = iVar10 + 0x20;
            uVar8 = puVar12[uVar13 + 1];
            uVar13 = uVar13 + 1;
          } while (uVar8 == 0);
        }
        else {
          uVar13 = 0;
          iVar10 = 0;
        }
        uVar22 = (ulonglong)(-uVar8 & uVar8);
        uVar18 = uVar22 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar25 = (iVar10 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if (DAT_14cb9dcf8 <= iVar25) {
          iVar25 = DAT_14cb9dcf8;
        }
      }
      if (iVar25 < DAT_14cb9dcf8) {
        uVar8 = 0xffffffff;
        do {
          lVar16 = DAT_14cb9dcd0;
          lVar24 = (longlong)iVar25;
          uVar3 = *(undefined8 *)(DAT_14cb9dcd0 + lVar24 * 0x18);
          uVar17 = (uint)((ulonglong)uVar3 >> 0x10);
          uVar19 = (uint)uVar3 & 0xffff;
          uVar18 = (longlong)
                   (int)(((uint)uVar3 << 0x10 | uVar19) + (int)((ulonglong)uVar3 >> 0x20) +
                         (uVar17 << 0x13 | uVar17 & 0xffff) + (uVar19 >> 4)) &
                   (longlong)(int)DAT_14cb9dd18 - 1U;
          iVar20 = (int)uVar18;
          *(int *)(DAT_14cb9dcd0 + 0x14 + lVar24 * 0x18) = iVar20;
          puVar21 = DAT_14cb9dd10;
          if (DAT_14cb9dd10 == (undefined *)0x0) {
            puVar21 = &DAT_14cb9dd08;
          }
          *(undefined4 *)(lVar16 + 0x10 + lVar24 * 0x18) =
               *(undefined4 *)(puVar21 + ((longlong)(int)DAT_14cb9dd18 - 1U & uVar18) * 4);
          puVar21 = DAT_14cb9dd10;
          if (DAT_14cb9dd10 == (undefined *)0x0) {
            puVar21 = &DAT_14cb9dd08;
          }
          *(int *)(puVar21 + ((longlong)iVar20 & (longlong)(int)DAT_14cb9dd18 - 1U) * 4) = iVar25;
          uVar8 = ~(uint)uVar22 & uVar8;
          puVar12 = DAT_14cb9dcf0;
          if (DAT_14cb9dcf0 == (uint *)0x0) {
            puVar12 = &DAT_14cb9dce0;
          }
          iVar25 = (int)uVar13;
          lVar16 = (longlong)iVar25;
          uVar17 = puVar12[lVar16] & uVar8;
          if (uVar17 == 0) {
            iVar20 = DAT_14cb9dcf8 + 0x1e;
            if (-1 < DAT_14cb9dcf8 + -1) {
              iVar20 = DAT_14cb9dcf8 + -1;
            }
            iVar20 = iVar20 >> 5;
            iVar11 = iVar20;
            if (iVar20 < iVar25) {
              iVar11 = iVar25;
            }
            if (iVar20 <= iVar25) break;
            lVar24 = 0;
            while( true ) {
              iVar10 = iVar10 + 0x20;
              uVar17 = puVar12[lVar16 + lVar24 + 1];
              if (uVar17 != 0) break;
              lVar24 = lVar24 + 1;
              if (iVar11 - lVar16 == lVar24) goto LAB_143fe3eb0;
            }
            uVar13 = (ulonglong)(iVar25 + (int)lVar24 + 1);
            uVar8 = 0xffffffff;
          }
          uVar22 = (ulonglong)(-uVar17 & uVar17);
          uVar18 = uVar22 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar18 != 0) {
            for (; uVar18 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          iVar25 = (iVar10 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        } while (iVar25 < DAT_14cb9dcf8);
      }
    }
  }
LAB_143fe3eb0:
  if (local_a8 != (wchar_t *)0x0) {
    pppuVar14 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar14 = &local_88;
    }
    (*(code *)(*pppuVar14)[2])();
  }
  atexit(FUN_143fcdc8a);
  _DAT_14cb9ddc8 = &LAB_143fce0c6;
  _DAT_14cb9ddd0 = 0x43a30000;
  DAT_14cb9ddd4 = 1;
  DAT_14cb9ddc0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb9ddc0;
  atexit((_func_5014 *)&LAB_143fce0cb);
  DAT_14cb9de40 = 0;
  _DAT_14cb9de48 = 0;
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_14a1795c0;
  puStack_80 = &LAB_143fde23a;
  local_a8 = L"ｈ찡䡖\xec83䠠캉돨";
  DAT_14cb9de50 = 0;
  local_d8 = "uimarkupimage";
  uStack_d0 = CONCAT35(uStack_d0._5_3_,0xd);
  uVar8 = FUN_14001a6c0(&local_d8,1);
  DAT_14cb9de54 = (ulonglong)uVar8;
  _DAT_14cb9de60 = 0;
  _DAT_14cb9de68 = (char *)0x0;
  _DAT_14cb9de70 = 0;
  DAT_14cb9de78 = (void *)0x0;
  _DAT_14cb9de80 = 0;
  _DAT_14cb9de88 = FUN_143fce268;
  DAT_14cb9de90 = local_a8;
  DAT_14cb9dea0 = local_98;
  local_98 = (undefined ***)0x0;
  DAT_14cb9deb0 = local_88;
  puRam000000014cb9deb8 = puStack_80;
  _DAT_14cb9dec0 = local_78;
  uRam000000014cb9dec4 = uStack_74;
  uRam000000014cb9dec8 = uStack_70;
  uRam000000014cb9decc = uStack_6c;
  if (local_a8 != (wchar_t *)0x0) {
    local_a8 = (wchar_t *)0x0;
  }
  local_d8 = (char *)0x0;
  uStack_d0 = 0;
  local_c8 = (void *)0x0;
  uStack_c0 = 0;
  local_b8 = &DAT_149e02088;
  local_b0 = 0;
  FUN_14475bea4(&local_d8);
  pvVar6 = local_c8;
  _DAT_14cb9de60 = 0;
  _DAT_14cb9de68 = local_d8;
  _DAT_14cb9de70 = uStack_d0;
  iVar25 = (int)uStack_c0;
  lVar16 = (longlong)(int)uStack_c0;
  _DAT_14cb9de80 = CONCAT44(DAT_14cb9de84,(int)uStack_c0);
  if ((int)uStack_c0 == 0 && DAT_14cb9de84 == 0) {
    _DAT_14cb9de80 = uStack_c0 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb9de78,uStack_c0 & 0xffffffff);
    if (iVar25 != 0) {
      memcpy(DAT_14cb9de78,pvVar6,lVar16 * 2);
    }
  }
  if (local_c8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb9de50) && ((DAT_14cb9dde0 == (int *)0x0 || (*DAT_14cb9dde0 < DAT_14cb9de50)))) {
    DAT_14cb9dde0 = &DAT_14cb9de50;
  }
  FUN_143fce12a();
  iVar10 = DAT_14cb9de18;
  iVar25 = DAT_14cb9ddf0;
  if (DAT_14cb9de1c == 0) {
    iVar10 = DAT_14cb9ddf0 + 1;
    bVar26 = DAT_14cb9ddf4 == DAT_14cb9ddf0;
    DAT_14cb9ddf0 = iVar10;
    if (bVar26) {
      FUN_14482b872(&DAT_14cb9dde8,iVar25);
    }
    iVar10 = DAT_14cb9de10;
    if (DAT_14cb9de10 == 0) {
      iVar20 = -1;
    }
    else {
      iVar20 = DAT_14cb9de10 + 0x1e;
      if (-1 < DAT_14cb9de10 + -1) {
        iVar20 = DAT_14cb9de10 + -1;
      }
      iVar20 = iVar20 >> 5;
    }
    iVar11 = DAT_14cb9de10 + 1;
    iVar15 = DAT_14cb9de10 + 0x1f;
    if (-1 < DAT_14cb9de10) {
      iVar15 = DAT_14cb9de10;
    }
    if (iVar15 >> 5 != iVar20) {
      if (DAT_14cb9de14 <= DAT_14cb9de10) {
        if (DAT_14cb9de10 + 0x20U < 0xa0) {
          DAT_14cb9de14 = 0x80;
        }
        else {
          uVar8 = DAT_14cb9de10 + 0x20U >> 5;
          if (DAT_14cb9de14 + 0x1fU < 0xa0) {
            uVar17 = 4;
            if (4 < uVar8) {
              uVar17 = uVar8;
            }
          }
          else {
            uVar17 = uVar8 + (uVar8 * 3 >> 3) + 0x10;
          }
          uVar13 = (ulonglong)(uVar17 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar19 = (uint)(uVar13 + 0xf);
              if (uVar17 < 0x1ffd) {
                uVar13 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar19 >> 4]];
              }
              else {
                uVar22 = uVar13 + 0xf & 0xfffffffffffffff0;
                if (uVar22 < 0x7ff1) {
                  bVar9 = (&DAT_14c841e00)[uVar19 >> 4];
                  uVar18 = 0x32;
                  if (0x32 < bVar9) {
                    uVar18 = (ulonglong)bVar9;
                  }
                  uVar23 = 0x32 - (ulonglong)bVar9;
                  do {
                    uVar13 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar23 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar23 & 0xffffffff] & 0xf) == 0) goto LAB_143fe688c;
                    lVar16 = uVar18 + 1 + uVar23;
                    uVar23 = uVar23 - 1;
                  } while (lVar16 != 0x33);
                }
                uVar13 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar13 = (ulonglong)DAT_14c841df8;
                }
                uVar13 = -uVar13 & (uVar22 + uVar13) - 1;
              }
            }
            else {
              uVar13 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar13,0);
            }
          }
LAB_143fe688c:
          iVar20 = (int)(uVar13 >> 2);
          DAT_14cb9de14 = -0x20;
          if ((int)uVar8 <= iVar20) {
            DAT_14cb9de14 = iVar20 << 5;
          }
        }
        FUN_1446efbd8(&DAT_14cb9ddf8,DAT_14cb9de10);
        iVar11 = DAT_14cb9de10 + 1;
      }
      iVar20 = iVar11 + 0x1f;
      if (-1 < iVar11) {
        iVar20 = iVar11;
      }
      if (iVar11 % 0x20 != 0) {
        puVar12 = &DAT_14cb9ddf8;
        if (DAT_14cb9de08 != (uint *)0x0) {
          puVar12 = DAT_14cb9de08;
        }
        bVar9 = -(char)(iVar11 % 0x20);
        DAT_14cb9de10 = iVar11;
        puVar12[iVar20 >> 5] = (puVar12[iVar20 >> 5] << (bVar9 & 0x1f)) >> (bVar9 & 0x1f);
        iVar11 = DAT_14cb9de10;
      }
    }
    DAT_14cb9de10 = iVar11;
    lVar16 = (longlong)iVar25;
    puVar12 = &DAT_14cb9ddf8;
    if (DAT_14cb9de08 != (uint *)0x0) {
      puVar12 = DAT_14cb9de08;
    }
    bVar9 = (byte)iVar10 & 0x1f;
    puVar12[iVar15 >> 5] = puVar12[iVar15 >> 5] & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
  }
  else {
    lVar16 = (longlong)DAT_14cb9de18;
    DAT_14cb9de18 = *(int *)(DAT_14cb9dde8 + 4 + lVar16 * 0x18);
    DAT_14cb9de1c = DAT_14cb9de1c + -1;
    iVar25 = iVar10;
    if (DAT_14cb9de1c != 0) {
      *(undefined4 *)(DAT_14cb9dde8 + (longlong)DAT_14cb9de18 * 0x18) = 0xffffffff;
    }
  }
  puVar12 = DAT_14cb9de08;
  if (DAT_14cb9de08 == (uint *)0x0) {
    puVar12 = &DAT_14cb9ddf8;
  }
  iVar10 = iVar25 + 0x1f;
  if (-1 < iVar25) {
    iVar10 = iVar25;
  }
  puVar12[iVar10 >> 5] = puVar12[iVar10 >> 5] | 1 << ((byte)iVar25 & 0x1f);
  uVar13 = DAT_14cb9de54;
  uVar17 = 1;
  puVar1 = (ulonglong *)(DAT_14cb9dde8 + lVar16 * 0x18);
  *puVar1 = DAT_14cb9de54;
  puVar1[1] = (ulonglong)&DAT_14cb9de50;
  *(undefined4 *)(puVar1 + 2) = 0xffffffff;
  uVar8 = (uint)(uVar13 >> 0x10);
  uVar19 = (uint)uVar13 & 0xffff;
  uVar8 = ((uint)uVar13 << 0x10 | uVar19) + (int)(uVar13 >> 0x20) + (uVar8 << 0x13 | uVar8 & 0xffff)
          + (uVar19 >> 4);
  uVar19 = DAT_14cb9ddf0 - DAT_14cb9de1c;
  if (1 < uVar19) {
    puVar21 = &DAT_14cb9de20;
    if (DAT_14cb9de28 != (undefined *)0x0) {
      puVar21 = DAT_14cb9de28;
    }
    iVar10 = *(int *)(puVar21 + (ulonglong)(DAT_14cb9de30 - 1 & uVar8) * 4);
    while (iVar10 != -1) {
      puVar2 = (ulonglong *)(DAT_14cb9dde8 + (longlong)iVar10 * 0x18);
      if (*puVar2 == uVar13) {
        uVar4 = *(undefined4 *)((longlong)puVar1 + 4);
        uVar13 = puVar1[1];
        uVar5 = *(undefined4 *)((longlong)puVar1 + 0xc);
        *(int *)puVar2 = (int)*puVar1;
        *(undefined4 *)((longlong)puVar2 + 4) = uVar4;
        *(int *)(puVar2 + 1) = (int)uVar13;
        *(undefined4 *)((longlong)puVar2 + 0xc) = uVar5;
        FUN_143fdbfd8(iVar25);
        goto LAB_143fe45b7;
      }
      iVar10 = (int)puVar2[2];
    }
  }
  if (3 < uVar19) {
    uVar13 = (ulonglong)(uVar19 & 0xfffffffe) + 0xf;
    lVar16 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar17 = 1 << ((byte)lVar16 & 0x1f);
  }
  if (((int)uVar19 < 1) || ((int)uVar17 <= (int)DAT_14cb9de30)) {
    uVar8 = DAT_14cb9de30 - 1 & uVar8;
    *(uint *)((longlong)puVar1 + 0x14) = uVar8;
    puVar21 = DAT_14cb9de28;
    if (DAT_14cb9de28 == (undefined *)0x0) {
      puVar21 = &DAT_14cb9de20;
    }
    *(undefined4 *)(puVar1 + 2) =
         *(undefined4 *)(puVar21 + ((longlong)(int)DAT_14cb9de30 - 1U & (longlong)(int)uVar8) * 4);
    puVar21 = DAT_14cb9de28;
    if (DAT_14cb9de28 == (undefined *)0x0) {
      puVar21 = &DAT_14cb9de20;
    }
    *(int *)(puVar21 + ((longlong)(int)DAT_14cb9de30 - 1U & (longlong)(int)uVar8) * 4) = iVar25;
  }
  else {
    DAT_14cb9de30 = uVar17;
    if (DAT_14cb9de28 != (undefined *)0x0) {
      FUN_1446efa72(&DAT_14cb9de28,0,0,4);
    }
    uVar8 = DAT_14cb9de30;
    if (DAT_14cb9de30 != 0) {
      if (DAT_14cb9de30 == 1) {
        if (DAT_14cb9de28 != (undefined *)0x0) {
          FUN_1446efa72(&DAT_14cb9de28,0,0,4);
        }
LAB_143fe4327:
        uVar17 = 0;
        do {
          puVar21 = DAT_14cb9de28;
          if (DAT_14cb9de28 == (undefined *)0x0) {
            puVar21 = &DAT_14cb9de20;
          }
          *(undefined4 *)(puVar21 + (ulonglong)(DAT_14cb9de30 + 0x7fffffff & uVar17) * 4) =
               0xffffffff;
          uVar17 = uVar17 + 1;
        } while (uVar8 != uVar17);
      }
      else {
        FUN_1446efa72(&DAT_14cb9de28,0,DAT_14cb9de30,4);
        if (0 < (int)uVar8) goto LAB_143fe4327;
      }
      if (DAT_14cb9de10 == 0) {
        uVar13 = 0;
        uVar22 = 1;
        iVar10 = 0;
        iVar25 = 0;
      }
      else {
        puVar12 = DAT_14cb9de08;
        if (DAT_14cb9de08 == (uint *)0x0) {
          puVar12 = &DAT_14cb9ddf8;
        }
        uVar8 = *puVar12;
        if (uVar8 == 0) {
          iVar25 = DAT_14cb9de10 + 0x1e;
          if (-1 < DAT_14cb9de10 + -1) {
            iVar25 = DAT_14cb9de10 + -1;
          }
          uVar13 = 0;
          uVar22 = (ulonglong)(uint)(iVar25 >> 5);
          if (iVar25 >> 5 < 1) {
            uVar22 = uVar13;
          }
          iVar10 = 0;
          do {
            if (uVar22 == uVar13) goto LAB_143fe45b7;
            iVar10 = iVar10 + 0x20;
            uVar8 = puVar12[uVar13 + 1];
            uVar13 = uVar13 + 1;
          } while (uVar8 == 0);
        }
        else {
          uVar13 = 0;
          iVar10 = 0;
        }
        uVar22 = (ulonglong)(-uVar8 & uVar8);
        uVar18 = uVar22 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar25 = (iVar10 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if (DAT_14cb9de10 <= iVar25) {
          iVar25 = DAT_14cb9de10;
        }
      }
      if (iVar25 < DAT_14cb9de10) {
        uVar8 = 0xffffffff;
        do {
          lVar16 = DAT_14cb9dde8;
          lVar24 = (longlong)iVar25;
          uVar3 = *(undefined8 *)(DAT_14cb9dde8 + lVar24 * 0x18);
          uVar17 = (uint)((ulonglong)uVar3 >> 0x10);
          uVar19 = (uint)uVar3 & 0xffff;
          uVar18 = (longlong)
                   (int)(((uint)uVar3 << 0x10 | uVar19) + (int)((ulonglong)uVar3 >> 0x20) +
                         (uVar17 << 0x13 | uVar17 & 0xffff) + (uVar19 >> 4)) &
                   (longlong)(int)DAT_14cb9de30 - 1U;
          iVar20 = (int)uVar18;
          *(int *)(DAT_14cb9dde8 + 0x14 + lVar24 * 0x18) = iVar20;
          puVar21 = DAT_14cb9de28;
          if (DAT_14cb9de28 == (undefined *)0x0) {
            puVar21 = &DAT_14cb9de20;
          }
          *(undefined4 *)(lVar16 + 0x10 + lVar24 * 0x18) =
               *(undefined4 *)(puVar21 + ((longlong)(int)DAT_14cb9de30 - 1U & uVar18) * 4);
          puVar21 = DAT_14cb9de28;
          if (DAT_14cb9de28 == (undefined *)0x0) {
            puVar21 = &DAT_14cb9de20;
          }
          *(int *)(puVar21 + ((longlong)iVar20 & (longlong)(int)DAT_14cb9de30 - 1U) * 4) = iVar25;
          uVar8 = ~(uint)uVar22 & uVar8;
          puVar12 = DAT_14cb9de08;
          if (DAT_14cb9de08 == (uint *)0x0) {
            puVar12 = &DAT_14cb9ddf8;
          }
          iVar25 = (int)uVar13;
          lVar16 = (longlong)iVar25;
          uVar17 = puVar12[lVar16] & uVar8;
          if (uVar17 == 0) {
            iVar20 = DAT_14cb9de10 + 0x1e;
            if (-1 < DAT_14cb9de10 + -1) {
              iVar20 = DAT_14cb9de10 + -1;
            }
            iVar20 = iVar20 >> 5;
            iVar11 = iVar20;
            if (iVar20 < iVar25) {
              iVar11 = iVar25;
            }
            if (iVar20 <= iVar25) break;
            lVar24 = 0;
            while( true ) {
              iVar10 = iVar10 + 0x20;
              uVar17 = puVar12[lVar16 + lVar24 + 1];
              if (uVar17 != 0) break;
              lVar24 = lVar24 + 1;
              if (iVar11 - lVar16 == lVar24) goto LAB_143fe45b7;
            }
            uVar13 = (ulonglong)(iVar25 + (int)lVar24 + 1);
            uVar8 = 0xffffffff;
          }
          uVar22 = (ulonglong)(-uVar17 & uVar17);
          uVar18 = uVar22 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar18 != 0) {
            for (; uVar18 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          iVar25 = (iVar10 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        } while (iVar25 < DAT_14cb9de10);
      }
    }
  }
LAB_143fe45b7:
  if (local_a8 != (wchar_t *)0x0) {
    pppuVar14 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar14 = &local_88;
    }
    (*(code *)(*pppuVar14)[2])();
  }
  atexit(FUN_143fce3ca);
  _DAT_14cb9ded8 = &LAB_143fceb7c;
  _DAT_14cb9dee0 = 0x43a28000;
  DAT_14cb9dee4 = 1;
  DAT_14cb9ded0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb9ded0;
  atexit((_func_5014 *)&LAB_143fceb81);
  DAT_14cb9df50 = 0;
  uRam000000014cb9df58 = 0;
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_14a1795c0;
  puStack_80 = &LAB_143fde47a;
  local_a8 = L"ｈ찡䡖\xec83䠠캉돨";
  DAT_14cb9df60 = 0;
  local_d8 = "uimarkuptextstyle";
  uStack_d0 = CONCAT35(uStack_d0._5_3_,0x11);
  uVar8 = FUN_14001a6c0(&local_d8,1);
  DAT_14cb9df64 = (ulonglong)uVar8;
  _DAT_14cb9df70 = 0;
  _DAT_14cb9df78 = (char *)0x0;
  _DAT_14cb9df80 = 0;
  DAT_14cb9df88 = (void *)0x0;
  _DAT_14cb9df90 = 0;
  _DAT_14cb9df98 = FUN_143fced1e;
  DAT_14cb9dfa0 = local_a8;
  DAT_14cb9dfb0 = local_98;
  local_98 = (undefined ***)0x0;
  DAT_14cb9dfc0 = local_88;
  puRam000000014cb9dfc8 = puStack_80;
  _DAT_14cb9dfd0 = local_78;
  uRam000000014cb9dfd4 = uStack_74;
  uRam000000014cb9dfd8 = uStack_70;
  uRam000000014cb9dfdc = uStack_6c;
  if (local_a8 != (wchar_t *)0x0) {
    local_a8 = (wchar_t *)0x0;
  }
  local_d8 = (char *)0x0;
  uStack_d0 = 0;
  local_c8 = (void *)0x0;
  uStack_c0 = 0;
  local_b8 = &DAT_149e02088;
  local_b0 = 0;
  FUN_14475bea4(&local_d8);
  pvVar6 = local_c8;
  _DAT_14cb9df70 = 0;
  _DAT_14cb9df78 = local_d8;
  _DAT_14cb9df80 = uStack_d0;
  iVar25 = (int)uStack_c0;
  lVar16 = (longlong)(int)uStack_c0;
  _DAT_14cb9df90 = CONCAT44(DAT_14cb9df94,(int)uStack_c0);
  if ((int)uStack_c0 == 0 && DAT_14cb9df94 == 0) {
    _DAT_14cb9df90 = uStack_c0 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb9df88,uStack_c0 & 0xffffffff);
    if (iVar25 != 0) {
      memcpy(DAT_14cb9df88,pvVar6,lVar16 * 2);
    }
  }
  if (local_c8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb9df60) && ((DAT_14cb9def0 == (int *)0x0 || (*DAT_14cb9def0 < DAT_14cb9df60)))) {
    DAT_14cb9def0 = &DAT_14cb9df60;
  }
  FUN_143fcebe0();
  iVar10 = DAT_14cb9df28;
  iVar25 = DAT_14cb9df00;
  if (DAT_14cb9df2c == 0) {
    iVar10 = DAT_14cb9df00 + 1;
    bVar26 = DAT_14cb9df04 == DAT_14cb9df00;
    DAT_14cb9df00 = iVar10;
    if (bVar26) {
      FUN_14482b872(&DAT_14cb9def8,iVar25);
    }
    iVar10 = DAT_14cb9df20;
    if (DAT_14cb9df20 == 0) {
      iVar20 = -1;
    }
    else {
      iVar20 = DAT_14cb9df20 + 0x1e;
      if (-1 < DAT_14cb9df20 + -1) {
        iVar20 = DAT_14cb9df20 + -1;
      }
      iVar20 = iVar20 >> 5;
    }
    iVar11 = DAT_14cb9df20 + 1;
    iVar15 = DAT_14cb9df20 + 0x1f;
    if (-1 < DAT_14cb9df20) {
      iVar15 = DAT_14cb9df20;
    }
    if (iVar15 >> 5 != iVar20) {
      if (DAT_14cb9df24 <= DAT_14cb9df20) {
        if (DAT_14cb9df20 + 0x20U < 0xa0) {
          DAT_14cb9df24 = 0x80;
        }
        else {
          uVar8 = DAT_14cb9df20 + 0x20U >> 5;
          if (DAT_14cb9df24 + 0x1fU < 0xa0) {
            uVar17 = 4;
            if (4 < uVar8) {
              uVar17 = uVar8;
            }
          }
          else {
            uVar17 = uVar8 + (uVar8 * 3 >> 3) + 0x10;
          }
          uVar13 = (ulonglong)(uVar17 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar19 = (uint)(uVar13 + 0xf);
              if (uVar17 < 0x1ffd) {
                uVar13 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar19 >> 4]];
              }
              else {
                uVar22 = uVar13 + 0xf & 0xfffffffffffffff0;
                if (uVar22 < 0x7ff1) {
                  bVar9 = (&DAT_14c841e00)[uVar19 >> 4];
                  uVar18 = 0x32;
                  if (0x32 < bVar9) {
                    uVar18 = (ulonglong)bVar9;
                  }
                  uVar23 = 0x32 - (ulonglong)bVar9;
                  do {
                    uVar13 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar23 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar23 & 0xffffffff] & 0xf) == 0) goto LAB_143fe6931;
                    lVar16 = uVar18 + 1 + uVar23;
                    uVar23 = uVar23 - 1;
                  } while (lVar16 != 0x33);
                }
                uVar13 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar13 = (ulonglong)DAT_14c841df8;
                }
                uVar13 = -uVar13 & (uVar22 + uVar13) - 1;
              }
            }
            else {
              uVar13 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar13,0);
            }
          }
LAB_143fe6931:
          iVar20 = (int)(uVar13 >> 2);
          DAT_14cb9df24 = -0x20;
          if ((int)uVar8 <= iVar20) {
            DAT_14cb9df24 = iVar20 << 5;
          }
        }
        FUN_1446efbd8(&DAT_14cb9df08,DAT_14cb9df20);
        iVar11 = DAT_14cb9df20 + 1;
      }
      iVar20 = iVar11 + 0x1f;
      if (-1 < iVar11) {
        iVar20 = iVar11;
      }
      if (iVar11 % 0x20 != 0) {
        puVar12 = &DAT_14cb9df08;
        if (DAT_14cb9df18 != (uint *)0x0) {
          puVar12 = DAT_14cb9df18;
        }
        bVar9 = -(char)(iVar11 % 0x20);
        DAT_14cb9df20 = iVar11;
        puVar12[iVar20 >> 5] = (puVar12[iVar20 >> 5] << (bVar9 & 0x1f)) >> (bVar9 & 0x1f);
        iVar11 = DAT_14cb9df20;
      }
    }
    DAT_14cb9df20 = iVar11;
    lVar16 = (longlong)iVar25;
    puVar12 = &DAT_14cb9df08;
    if (DAT_14cb9df18 != (uint *)0x0) {
      puVar12 = DAT_14cb9df18;
    }
    bVar9 = (byte)iVar10 & 0x1f;
    puVar12[iVar15 >> 5] = puVar12[iVar15 >> 5] & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
  }
  else {
    lVar16 = (longlong)DAT_14cb9df28;
    DAT_14cb9df28 = *(int *)(DAT_14cb9def8 + 4 + lVar16 * 0x18);
    DAT_14cb9df2c = DAT_14cb9df2c + -1;
    iVar25 = iVar10;
    if (DAT_14cb9df2c != 0) {
      *(undefined4 *)(DAT_14cb9def8 + (longlong)DAT_14cb9df28 * 0x18) = 0xffffffff;
    }
  }
  puVar12 = DAT_14cb9df18;
  if (DAT_14cb9df18 == (uint *)0x0) {
    puVar12 = &DAT_14cb9df08;
  }
  iVar10 = iVar25 + 0x1f;
  if (-1 < iVar25) {
    iVar10 = iVar25;
  }
  puVar12[iVar10 >> 5] = puVar12[iVar10 >> 5] | 1 << ((byte)iVar25 & 0x1f);
  uVar13 = DAT_14cb9df64;
  uVar17 = 1;
  puVar1 = (ulonglong *)(DAT_14cb9def8 + lVar16 * 0x18);
  *puVar1 = DAT_14cb9df64;
  puVar1[1] = (ulonglong)&DAT_14cb9df60;
  *(undefined4 *)(puVar1 + 2) = 0xffffffff;
  uVar8 = (uint)(uVar13 >> 0x10);
  uVar19 = (uint)uVar13 & 0xffff;
  uVar8 = ((uint)uVar13 << 0x10 | uVar19) + (int)(uVar13 >> 0x20) + (uVar8 << 0x13 | uVar8 & 0xffff)
          + (uVar19 >> 4);
  uVar19 = DAT_14cb9df00 - DAT_14cb9df2c;
  if (1 < uVar19) {
    puVar21 = &DAT_14cb9df30;
    if (DAT_14cb9df38 != (undefined *)0x0) {
      puVar21 = DAT_14cb9df38;
    }
    iVar10 = *(int *)(puVar21 + (ulonglong)(DAT_14cb9df40 - 1 & uVar8) * 4);
    while (iVar10 != -1) {
      puVar2 = (ulonglong *)(DAT_14cb9def8 + (longlong)iVar10 * 0x18);
      if (*puVar2 == uVar13) {
        uVar4 = *(undefined4 *)((longlong)puVar1 + 4);
        uVar13 = puVar1[1];
        uVar5 = *(undefined4 *)((longlong)puVar1 + 0xc);
        *(int *)puVar2 = (int)*puVar1;
        *(undefined4 *)((longlong)puVar2 + 4) = uVar4;
        *(int *)(puVar2 + 1) = (int)uVar13;
        *(undefined4 *)((longlong)puVar2 + 0xc) = uVar5;
        FUN_143fdc058(iVar25);
        goto LAB_143fe4cb7;
      }
      iVar10 = (int)puVar2[2];
    }
  }
  if (3 < uVar19) {
    uVar13 = (ulonglong)(uVar19 & 0xfffffffe) + 0xf;
    lVar16 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar17 = 1 << ((byte)lVar16 & 0x1f);
  }
  if (((int)uVar19 < 1) || ((int)uVar17 <= (int)DAT_14cb9df40)) {
    uVar8 = DAT_14cb9df40 - 1 & uVar8;
    *(uint *)((longlong)puVar1 + 0x14) = uVar8;
    puVar21 = DAT_14cb9df38;
    if (DAT_14cb9df38 == (undefined *)0x0) {
      puVar21 = &DAT_14cb9df30;
    }
    *(undefined4 *)(puVar1 + 2) =
         *(undefined4 *)(puVar21 + ((longlong)(int)DAT_14cb9df40 - 1U & (longlong)(int)uVar8) * 4);
    puVar21 = DAT_14cb9df38;
    if (DAT_14cb9df38 == (undefined *)0x0) {
      puVar21 = &DAT_14cb9df30;
    }
    *(int *)(puVar21 + ((longlong)(int)DAT_14cb9df40 - 1U & (longlong)(int)uVar8) * 4) = iVar25;
  }
  else {
    DAT_14cb9df40 = uVar17;
    if (DAT_14cb9df38 != (undefined *)0x0) {
      FUN_1446efa72(&DAT_14cb9df38,0,0,4);
    }
    uVar8 = DAT_14cb9df40;
    if (DAT_14cb9df40 != 0) {
      if (DAT_14cb9df40 == 1) {
        if (DAT_14cb9df38 != (undefined *)0x0) {
          FUN_1446efa72(&DAT_14cb9df38,0,0,4);
        }
LAB_143fe4a27:
        uVar17 = 0;
        do {
          puVar21 = DAT_14cb9df38;
          if (DAT_14cb9df38 == (undefined *)0x0) {
            puVar21 = &DAT_14cb9df30;
          }
          *(undefined4 *)(puVar21 + (ulonglong)(DAT_14cb9df40 + 0x7fffffff & uVar17) * 4) =
               0xffffffff;
          uVar17 = uVar17 + 1;
        } while (uVar8 != uVar17);
      }
      else {
        FUN_1446efa72(&DAT_14cb9df38,0,DAT_14cb9df40,4);
        if (0 < (int)uVar8) goto LAB_143fe4a27;
      }
      if (DAT_14cb9df20 == 0) {
        uVar13 = 0;
        uVar22 = 1;
        iVar10 = 0;
        iVar25 = 0;
      }
      else {
        puVar12 = DAT_14cb9df18;
        if (DAT_14cb9df18 == (uint *)0x0) {
          puVar12 = &DAT_14cb9df08;
        }
        uVar8 = *puVar12;
        if (uVar8 == 0) {
          iVar25 = DAT_14cb9df20 + 0x1e;
          if (-1 < DAT_14cb9df20 + -1) {
            iVar25 = DAT_14cb9df20 + -1;
          }
          uVar13 = 0;
          uVar22 = (ulonglong)(uint)(iVar25 >> 5);
          if (iVar25 >> 5 < 1) {
            uVar22 = uVar13;
          }
          iVar10 = 0;
          do {
            if (uVar22 == uVar13) goto LAB_143fe4cb7;
            iVar10 = iVar10 + 0x20;
            uVar8 = puVar12[uVar13 + 1];
            uVar13 = uVar13 + 1;
          } while (uVar8 == 0);
        }
        else {
          uVar13 = 0;
          iVar10 = 0;
        }
        uVar22 = (ulonglong)(-uVar8 & uVar8);
        uVar18 = uVar22 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar25 = (iVar10 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if (DAT_14cb9df20 <= iVar25) {
          iVar25 = DAT_14cb9df20;
        }
      }
      if (iVar25 < DAT_14cb9df20) {
        uVar8 = 0xffffffff;
        do {
          lVar16 = DAT_14cb9def8;
          lVar24 = (longlong)iVar25;
          uVar3 = *(undefined8 *)(DAT_14cb9def8 + lVar24 * 0x18);
          uVar17 = (uint)((ulonglong)uVar3 >> 0x10);
          uVar19 = (uint)uVar3 & 0xffff;
          uVar18 = (longlong)
                   (int)(((uint)uVar3 << 0x10 | uVar19) + (int)((ulonglong)uVar3 >> 0x20) +
                         (uVar17 << 0x13 | uVar17 & 0xffff) + (uVar19 >> 4)) &
                   (longlong)(int)DAT_14cb9df40 - 1U;
          iVar20 = (int)uVar18;
          *(int *)(DAT_14cb9def8 + 0x14 + lVar24 * 0x18) = iVar20;
          puVar21 = DAT_14cb9df38;
          if (DAT_14cb9df38 == (undefined *)0x0) {
            puVar21 = &DAT_14cb9df30;
          }
          *(undefined4 *)(lVar16 + 0x10 + lVar24 * 0x18) =
               *(undefined4 *)(puVar21 + ((longlong)(int)DAT_14cb9df40 - 1U & uVar18) * 4);
          puVar21 = DAT_14cb9df38;
          if (DAT_14cb9df38 == (undefined *)0x0) {
            puVar21 = &DAT_14cb9df30;
          }
          *(int *)(puVar21 + ((longlong)iVar20 & (longlong)(int)DAT_14cb9df40 - 1U) * 4) = iVar25;
          uVar8 = ~(uint)uVar22 & uVar8;
          puVar12 = DAT_14cb9df18;
          if (DAT_14cb9df18 == (uint *)0x0) {
            puVar12 = &DAT_14cb9df08;
          }
          iVar25 = (int)uVar13;
          lVar16 = (longlong)iVar25;
          uVar17 = puVar12[lVar16] & uVar8;
          if (uVar17 == 0) {
            iVar20 = DAT_14cb9df20 + 0x1e;
            if (-1 < DAT_14cb9df20 + -1) {
              iVar20 = DAT_14cb9df20 + -1;
            }
            iVar20 = iVar20 >> 5;
            iVar11 = iVar20;
            if (iVar20 < iVar25) {
              iVar11 = iVar25;
            }
            if (iVar20 <= iVar25) break;
            lVar24 = 0;
            while( true ) {
              iVar10 = iVar10 + 0x20;
              uVar17 = puVar12[lVar16 + lVar24 + 1];
              if (uVar17 != 0) break;
              lVar24 = lVar24 + 1;
              if (iVar11 - lVar16 == lVar24) goto LAB_143fe4cb7;
            }
            uVar13 = (ulonglong)(iVar25 + (int)lVar24 + 1);
            uVar8 = 0xffffffff;
          }
          uVar22 = (ulonglong)(-uVar17 & uVar17);
          uVar18 = uVar22 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar18 != 0) {
            for (; uVar18 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          iVar25 = (iVar10 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        } while (iVar25 < DAT_14cb9df20);
      }
    }
  }
LAB_143fe4cb7:
  if (local_a8 != (wchar_t *)0x0) {
    pppuVar14 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar14 = &local_88;
    }
    (*(code *)(*pppuVar14)[2])();
  }
  atexit(FUN_143fcef92);
  _DAT_14cb9dfe8 = &LAB_143fcf3ce;
  _DAT_14cb9dff0 = 0x445e499a;
  DAT_14cb9dff4 = 1;
  DAT_14cb9dfe0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb9dfe0;
  atexit((_func_5014 *)&LAB_143fcf3d3);
  DAT_14cb9e060 = 0;
  _DAT_14cb9e068 = 0;
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_14a1795c0;
  puStack_80 = &LAB_143fde5da;
  local_a8 = L"ｈ찡䡖\xec83䠠캉돨";
  DAT_14cb9e070 = 0;
  local_d8 = "FGbxUITextStyleDefs";
  uStack_d0 = CONCAT35(uStack_d0._5_3_,0x13);
  uVar8 = FUN_14001a6c0(&local_d8,1);
  DAT_14cb9e074 = (ulonglong)uVar8;
  _DAT_14cb9e080 = 0;
  _DAT_14cb9e088 = (char *)0x0;
  _DAT_14cb9e090 = 0;
  DAT_14cb9e098 = (void *)0x0;
  _DAT_14cb9e0a0 = 0;
  _DAT_14cb9e0a8 = FUN_143fcf570;
  DAT_14cb9e0b0 = local_a8;
  DAT_14cb9e0c0 = local_98;
  local_98 = (undefined ***)0x0;
  DAT_14cb9e0d0 = local_88;
  puRam000000014cb9e0d8 = puStack_80;
  _DAT_14cb9e0e0 = local_78;
  uRam000000014cb9e0e4 = uStack_74;
  uRam000000014cb9e0e8 = uStack_70;
  uRam000000014cb9e0ec = uStack_6c;
  if (local_a8 != (wchar_t *)0x0) {
    local_a8 = (wchar_t *)0x0;
  }
  local_d8 = (char *)0x0;
  uStack_d0 = 0;
  local_c8 = (void *)0x0;
  uStack_c0 = 0;
  local_b8 = &DAT_149e02088;
  local_b0 = 0;
  FUN_14475bea4(&local_d8);
  pvVar6 = local_c8;
  _DAT_14cb9e080 = 0;
  _DAT_14cb9e088 = local_d8;
  _DAT_14cb9e090 = uStack_d0;
  iVar25 = (int)uStack_c0;
  lVar16 = (longlong)(int)uStack_c0;
  _DAT_14cb9e0a0 = CONCAT44(DAT_14cb9e0a4,(int)uStack_c0);
  if ((int)uStack_c0 == 0 && DAT_14cb9e0a4 == 0) {
    _DAT_14cb9e0a0 = uStack_c0 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb9e098,uStack_c0 & 0xffffffff);
    if (iVar25 != 0) {
      memcpy(DAT_14cb9e098,pvVar6,lVar16 * 2);
    }
  }
  if (local_c8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb9e070) && ((DAT_14cb9e000 == (int *)0x0 || (*DAT_14cb9e000 < DAT_14cb9e070)))) {
    DAT_14cb9e000 = &DAT_14cb9e070;
  }
  FUN_143fcf432();
  iVar10 = DAT_14cb9e038;
  iVar25 = DAT_14cb9e010;
  if (DAT_14cb9e03c == 0) {
    iVar10 = DAT_14cb9e010 + 1;
    bVar26 = DAT_14cb9e014 == DAT_14cb9e010;
    DAT_14cb9e010 = iVar10;
    if (bVar26) {
      FUN_14482b872(&DAT_14cb9e008,iVar25);
    }
    iVar10 = DAT_14cb9e030;
    if (DAT_14cb9e030 == 0) {
      iVar20 = -1;
    }
    else {
      iVar20 = DAT_14cb9e030 + 0x1e;
      if (-1 < DAT_14cb9e030 + -1) {
        iVar20 = DAT_14cb9e030 + -1;
      }
      iVar20 = iVar20 >> 5;
    }
    iVar11 = DAT_14cb9e030 + 1;
    iVar15 = DAT_14cb9e030 + 0x1f;
    if (-1 < DAT_14cb9e030) {
      iVar15 = DAT_14cb9e030;
    }
    if (iVar15 >> 5 != iVar20) {
      if (DAT_14cb9e034 <= DAT_14cb9e030) {
        if (DAT_14cb9e030 + 0x20U < 0xa0) {
          DAT_14cb9e034 = 0x80;
        }
        else {
          uVar8 = DAT_14cb9e030 + 0x20U >> 5;
          if (DAT_14cb9e034 + 0x1fU < 0xa0) {
            uVar17 = 4;
            if (4 < uVar8) {
              uVar17 = uVar8;
            }
          }
          else {
            uVar17 = uVar8 + (uVar8 * 3 >> 3) + 0x10;
          }
          uVar13 = (ulonglong)(uVar17 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar19 = (uint)(uVar13 + 0xf);
              if (uVar17 < 0x1ffd) {
                uVar13 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar19 >> 4]];
              }
              else {
                uVar22 = uVar13 + 0xf & 0xfffffffffffffff0;
                if (uVar22 < 0x7ff1) {
                  bVar9 = (&DAT_14c841e00)[uVar19 >> 4];
                  uVar18 = 0x32;
                  if (0x32 < bVar9) {
                    uVar18 = (ulonglong)bVar9;
                  }
                  uVar23 = 0x32 - (ulonglong)bVar9;
                  do {
                    uVar13 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar23 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar23 & 0xffffffff] & 0xf) == 0) goto LAB_143fe69d6;
                    lVar16 = uVar18 + 1 + uVar23;
                    uVar23 = uVar23 - 1;
                  } while (lVar16 != 0x33);
                }
                uVar13 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar13 = (ulonglong)DAT_14c841df8;
                }
                uVar13 = -uVar13 & (uVar22 + uVar13) - 1;
              }
            }
            else {
              uVar13 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar13,0);
            }
          }
LAB_143fe69d6:
          iVar20 = (int)(uVar13 >> 2);
          DAT_14cb9e034 = -0x20;
          if ((int)uVar8 <= iVar20) {
            DAT_14cb9e034 = iVar20 << 5;
          }
        }
        FUN_1446efbd8(&DAT_14cb9e018,DAT_14cb9e030);
        iVar11 = DAT_14cb9e030 + 1;
      }
      iVar20 = iVar11 + 0x1f;
      if (-1 < iVar11) {
        iVar20 = iVar11;
      }
      if (iVar11 % 0x20 != 0) {
        puVar12 = &DAT_14cb9e018;
        if (DAT_14cb9e028 != (uint *)0x0) {
          puVar12 = DAT_14cb9e028;
        }
        bVar9 = -(char)(iVar11 % 0x20);
        DAT_14cb9e030 = iVar11;
        puVar12[iVar20 >> 5] = (puVar12[iVar20 >> 5] << (bVar9 & 0x1f)) >> (bVar9 & 0x1f);
        iVar11 = DAT_14cb9e030;
      }
    }
    DAT_14cb9e030 = iVar11;
    lVar16 = (longlong)iVar25;
    puVar12 = &DAT_14cb9e018;
    if (DAT_14cb9e028 != (uint *)0x0) {
      puVar12 = DAT_14cb9e028;
    }
    bVar9 = (byte)iVar10 & 0x1f;
    puVar12[iVar15 >> 5] = puVar12[iVar15 >> 5] & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
  }
  else {
    lVar16 = (longlong)DAT_14cb9e038;
    DAT_14cb9e038 = *(int *)(DAT_14cb9e008 + 4 + lVar16 * 0x18);
    DAT_14cb9e03c = DAT_14cb9e03c + -1;
    iVar25 = iVar10;
    if (DAT_14cb9e03c != 0) {
      *(undefined4 *)(DAT_14cb9e008 + (longlong)DAT_14cb9e038 * 0x18) = 0xffffffff;
    }
  }
  puVar12 = DAT_14cb9e028;
  if (DAT_14cb9e028 == (uint *)0x0) {
    puVar12 = &DAT_14cb9e018;
  }
  iVar10 = iVar25 + 0x1f;
  if (-1 < iVar25) {
    iVar10 = iVar25;
  }
  puVar12[iVar10 >> 5] = puVar12[iVar10 >> 5] | 1 << ((byte)iVar25 & 0x1f);
  uVar13 = DAT_14cb9e074;
  uVar17 = 1;
  puVar1 = (ulonglong *)(DAT_14cb9e008 + lVar16 * 0x18);
  *puVar1 = DAT_14cb9e074;
  puVar1[1] = (ulonglong)&DAT_14cb9e070;
  *(undefined4 *)(puVar1 + 2) = 0xffffffff;
  uVar8 = (uint)(uVar13 >> 0x10);
  uVar19 = (uint)uVar13 & 0xffff;
  uVar8 = ((uint)uVar13 << 0x10 | uVar19) + (int)(uVar13 >> 0x20) + (uVar8 << 0x13 | uVar8 & 0xffff)
          + (uVar19 >> 4);
  uVar19 = DAT_14cb9e010 - DAT_14cb9e03c;
  if (1 < uVar19) {
    puVar21 = &DAT_14cb9e040;
    if (DAT_14cb9e048 != (undefined *)0x0) {
      puVar21 = DAT_14cb9e048;
    }
    iVar10 = *(int *)(puVar21 + (ulonglong)(DAT_14cb9e050 - 1 & uVar8) * 4);
    while (iVar10 != -1) {
      puVar2 = (ulonglong *)(DAT_14cb9e008 + (longlong)iVar10 * 0x18);
      if (*puVar2 == uVar13) {
        uVar4 = *(undefined4 *)((longlong)puVar1 + 4);
        uVar13 = puVar1[1];
        uVar5 = *(undefined4 *)((longlong)puVar1 + 0xc);
        *(int *)puVar2 = (int)*puVar1;
        *(undefined4 *)((longlong)puVar2 + 4) = uVar4;
        *(int *)(puVar2 + 1) = (int)uVar13;
        *(undefined4 *)((longlong)puVar2 + 0xc) = uVar5;
        FUN_143fdc0d8(iVar25);
        goto LAB_143fe53b7;
      }
      iVar10 = (int)puVar2[2];
    }
  }
  if (3 < uVar19) {
    uVar13 = (ulonglong)(uVar19 & 0xfffffffe) + 0xf;
    lVar16 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar17 = 1 << ((byte)lVar16 & 0x1f);
  }
  if (((int)uVar19 < 1) || ((int)uVar17 <= (int)DAT_14cb9e050)) {
    uVar8 = DAT_14cb9e050 - 1 & uVar8;
    *(uint *)((longlong)puVar1 + 0x14) = uVar8;
    puVar21 = DAT_14cb9e048;
    if (DAT_14cb9e048 == (undefined *)0x0) {
      puVar21 = &DAT_14cb9e040;
    }
    *(undefined4 *)(puVar1 + 2) =
         *(undefined4 *)(puVar21 + ((longlong)(int)DAT_14cb9e050 - 1U & (longlong)(int)uVar8) * 4);
    puVar21 = DAT_14cb9e048;
    if (DAT_14cb9e048 == (undefined *)0x0) {
      puVar21 = &DAT_14cb9e040;
    }
    *(int *)(puVar21 + ((longlong)(int)DAT_14cb9e050 - 1U & (longlong)(int)uVar8) * 4) = iVar25;
  }
  else {
    DAT_14cb9e050 = uVar17;
    if (DAT_14cb9e048 != (undefined *)0x0) {
      FUN_1446efa72(&DAT_14cb9e048,0,0,4);
    }
    uVar8 = DAT_14cb9e050;
    if (DAT_14cb9e050 != 0) {
      if (DAT_14cb9e050 == 1) {
        if (DAT_14cb9e048 != (undefined *)0x0) {
          FUN_1446efa72(&DAT_14cb9e048,0,0,4);
        }
LAB_143fe5127:
        uVar17 = 0;
        do {
          puVar21 = DAT_14cb9e048;
          if (DAT_14cb9e048 == (undefined *)0x0) {
            puVar21 = &DAT_14cb9e040;
          }
          *(undefined4 *)(puVar21 + (ulonglong)(DAT_14cb9e050 + 0x7fffffff & uVar17) * 4) =
               0xffffffff;
          uVar17 = uVar17 + 1;
        } while (uVar8 != uVar17);
      }
      else {
        FUN_1446efa72(&DAT_14cb9e048,0,DAT_14cb9e050,4);
        if (0 < (int)uVar8) goto LAB_143fe5127;
      }
      if (DAT_14cb9e030 == 0) {
        uVar13 = 0;
        uVar22 = 1;
        iVar10 = 0;
        iVar25 = 0;
      }
      else {
        puVar12 = DAT_14cb9e028;
        if (DAT_14cb9e028 == (uint *)0x0) {
          puVar12 = &DAT_14cb9e018;
        }
        uVar8 = *puVar12;
        if (uVar8 == 0) {
          iVar25 = DAT_14cb9e030 + 0x1e;
          if (-1 < DAT_14cb9e030 + -1) {
            iVar25 = DAT_14cb9e030 + -1;
          }
          uVar13 = 0;
          uVar22 = (ulonglong)(uint)(iVar25 >> 5);
          if (iVar25 >> 5 < 1) {
            uVar22 = uVar13;
          }
          iVar10 = 0;
          do {
            if (uVar22 == uVar13) goto LAB_143fe53b7;
            iVar10 = iVar10 + 0x20;
            uVar8 = puVar12[uVar13 + 1];
            uVar13 = uVar13 + 1;
          } while (uVar8 == 0);
        }
        else {
          uVar13 = 0;
          iVar10 = 0;
        }
        uVar22 = (ulonglong)(-uVar8 & uVar8);
        uVar18 = uVar22 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar25 = (iVar10 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if (DAT_14cb9e030 <= iVar25) {
          iVar25 = DAT_14cb9e030;
        }
      }
      if (iVar25 < DAT_14cb9e030) {
        uVar8 = 0xffffffff;
        do {
          lVar16 = DAT_14cb9e008;
          lVar24 = (longlong)iVar25;
          uVar3 = *(undefined8 *)(DAT_14cb9e008 + lVar24 * 0x18);
          uVar17 = (uint)((ulonglong)uVar3 >> 0x10);
          uVar19 = (uint)uVar3 & 0xffff;
          uVar18 = (longlong)
                   (int)(((uint)uVar3 << 0x10 | uVar19) + (int)((ulonglong)uVar3 >> 0x20) +
                         (uVar17 << 0x13 | uVar17 & 0xffff) + (uVar19 >> 4)) &
                   (longlong)(int)DAT_14cb9e050 - 1U;
          iVar20 = (int)uVar18;
          *(int *)(DAT_14cb9e008 + 0x14 + lVar24 * 0x18) = iVar20;
          puVar21 = DAT_14cb9e048;
          if (DAT_14cb9e048 == (undefined *)0x0) {
            puVar21 = &DAT_14cb9e040;
          }
          *(undefined4 *)(lVar16 + 0x10 + lVar24 * 0x18) =
               *(undefined4 *)(puVar21 + ((longlong)(int)DAT_14cb9e050 - 1U & uVar18) * 4);
          puVar21 = DAT_14cb9e048;
          if (DAT_14cb9e048 == (undefined *)0x0) {
            puVar21 = &DAT_14cb9e040;
          }
          *(int *)(puVar21 + ((longlong)iVar20 & (longlong)(int)DAT_14cb9e050 - 1U) * 4) = iVar25;
          uVar8 = ~(uint)uVar22 & uVar8;
          puVar12 = DAT_14cb9e028;
          if (DAT_14cb9e028 == (uint *)0x0) {
            puVar12 = &DAT_14cb9e018;
          }
          iVar25 = (int)uVar13;
          lVar16 = (longlong)iVar25;
          uVar17 = puVar12[lVar16] & uVar8;
          if (uVar17 == 0) {
            iVar20 = DAT_14cb9e030 + 0x1e;
            if (-1 < DAT_14cb9e030 + -1) {
              iVar20 = DAT_14cb9e030 + -1;
            }
            iVar20 = iVar20 >> 5;
            iVar11 = iVar20;
            if (iVar20 < iVar25) {
              iVar11 = iVar25;
            }
            if (iVar20 <= iVar25) break;
            lVar24 = 0;
            while( true ) {
              iVar10 = iVar10 + 0x20;
              uVar17 = puVar12[lVar16 + lVar24 + 1];
              if (uVar17 != 0) break;
              lVar24 = lVar24 + 1;
              if (iVar11 - lVar16 == lVar24) goto LAB_143fe53b7;
            }
            uVar13 = (ulonglong)(iVar25 + (int)lVar24 + 1);
            uVar8 = 0xffffffff;
          }
          uVar22 = (ulonglong)(-uVar17 & uVar17);
          uVar18 = uVar22 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar18 != 0) {
            for (; uVar18 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          iVar25 = (iVar10 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        } while (iVar25 < DAT_14cb9e030);
      }
    }
  }
LAB_143fe53b7:
  if (local_a8 != (wchar_t *)0x0) {
    pppuVar14 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar14 = &local_88;
    }
    (*(code *)(*pppuVar14)[2])();
  }
  atexit(FUN_143fcf8a4);
  _DAT_14cb9e0f8 = &LAB_143fcfdc2;
  _DAT_14cb9e100 = 0x43a08000;
  DAT_14cb9e104 = 1;
  DAT_14cb9e0f0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb9e0f0;
  atexit((_func_5014 *)&LAB_143fcfdc7);
  DAT_14cb9e170 = 0;
  _DAT_14cb9e178 = 0;
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_14a1795c0;
  puStack_80 = &LAB_143fde73a;
  local_a8 = L"ｈ찡䡖\xec83䠠캉돨";
  DAT_14cb9e180 = 0;
  local_d8 = "uiumgwidgetdef";
  uStack_d0 = CONCAT35(uStack_d0._5_3_,0xe);
  uVar8 = FUN_14001a6c0(&local_d8,1);
  DAT_14cb9e184 = (ulonglong)uVar8;
  _DAT_14cb9e190 = 0;
  _DAT_14cb9e198 = (char *)0x0;
  _DAT_14cb9e1a0 = 0;
  DAT_14cb9e1a8 = (void *)0x0;
  _DAT_14cb9e1b0 = 0;
  _DAT_14cb9e1b8 = FUN_143fcff64;
  DAT_14cb9e1c0 = local_a8;
  DAT_14cb9e1d0 = local_98;
  local_98 = (undefined ***)0x0;
  DAT_14cb9e1e0 = local_88;
  puRam000000014cb9e1e8 = puStack_80;
  _DAT_14cb9e1f0 = local_78;
  uRam000000014cb9e1f4 = uStack_74;
  uRam000000014cb9e1f8 = uStack_70;
  uRam000000014cb9e1fc = uStack_6c;
  if (local_a8 != (wchar_t *)0x0) {
    local_a8 = (wchar_t *)0x0;
  }
  local_d8 = (char *)0x0;
  uStack_d0 = 0;
  local_c8 = (void *)0x0;
  uStack_c0 = 0;
  local_b8 = &DAT_149e02088;
  local_b0 = 0;
  FUN_14475bea4(&local_d8);
  pvVar6 = local_c8;
  _DAT_14cb9e190 = 0;
  _DAT_14cb9e198 = local_d8;
  _DAT_14cb9e1a0 = uStack_d0;
  iVar25 = (int)uStack_c0;
  lVar16 = (longlong)(int)uStack_c0;
  _DAT_14cb9e1b0 = CONCAT44(DAT_14cb9e1b4,(int)uStack_c0);
  if ((int)uStack_c0 == 0 && DAT_14cb9e1b4 == 0) {
    _DAT_14cb9e1b0 = uStack_c0 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb9e1a8,uStack_c0 & 0xffffffff);
    if (iVar25 != 0) {
      memcpy(DAT_14cb9e1a8,pvVar6,lVar16 * 2);
    }
  }
  if (local_c8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb9e180) && ((DAT_14cb9e110 == (int *)0x0 || (*DAT_14cb9e110 < DAT_14cb9e180)))) {
    DAT_14cb9e110 = &DAT_14cb9e180;
  }
  FUN_143fcfe26();
  iVar10 = DAT_14cb9e148;
  iVar25 = DAT_14cb9e120;
  if (DAT_14cb9e14c == 0) {
    iVar10 = DAT_14cb9e120 + 1;
    bVar26 = DAT_14cb9e124 == DAT_14cb9e120;
    DAT_14cb9e120 = iVar10;
    if (bVar26) {
      FUN_14482b872(&DAT_14cb9e118,iVar25);
    }
    iVar10 = DAT_14cb9e140;
    if (DAT_14cb9e140 == 0) {
      iVar20 = -1;
    }
    else {
      iVar20 = DAT_14cb9e140 + 0x1e;
      if (-1 < DAT_14cb9e140 + -1) {
        iVar20 = DAT_14cb9e140 + -1;
      }
      iVar20 = iVar20 >> 5;
    }
    iVar11 = DAT_14cb9e140 + 1;
    iVar15 = DAT_14cb9e140 + 0x1f;
    if (-1 < DAT_14cb9e140) {
      iVar15 = DAT_14cb9e140;
    }
    if (iVar15 >> 5 != iVar20) {
      if (DAT_14cb9e144 <= DAT_14cb9e140) {
        if (DAT_14cb9e140 + 0x20U < 0xa0) {
          DAT_14cb9e144 = 0x80;
        }
        else {
          uVar8 = DAT_14cb9e140 + 0x20U >> 5;
          if (DAT_14cb9e144 + 0x1fU < 0xa0) {
            uVar17 = 4;
            if (4 < uVar8) {
              uVar17 = uVar8;
            }
          }
          else {
            uVar17 = uVar8 + (uVar8 * 3 >> 3) + 0x10;
          }
          uVar13 = (ulonglong)(uVar17 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar19 = (uint)(uVar13 + 0xf);
              if (uVar17 < 0x1ffd) {
                uVar13 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar19 >> 4]];
              }
              else {
                uVar22 = uVar13 + 0xf & 0xfffffffffffffff0;
                if (uVar22 < 0x7ff1) {
                  bVar9 = (&DAT_14c841e00)[uVar19 >> 4];
                  uVar18 = 0x32;
                  if (0x32 < bVar9) {
                    uVar18 = (ulonglong)bVar9;
                  }
                  uVar23 = 0x32 - (ulonglong)bVar9;
                  do {
                    uVar13 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar23 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar23 & 0xffffffff] & 0xf) == 0) goto LAB_143fe6a7b;
                    lVar16 = uVar18 + 1 + uVar23;
                    uVar23 = uVar23 - 1;
                  } while (lVar16 != 0x33);
                }
                uVar13 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar13 = (ulonglong)DAT_14c841df8;
                }
                uVar13 = -uVar13 & (uVar22 + uVar13) - 1;
              }
            }
            else {
              uVar13 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar13,0);
            }
          }
LAB_143fe6a7b:
          iVar20 = (int)(uVar13 >> 2);
          DAT_14cb9e144 = -0x20;
          if ((int)uVar8 <= iVar20) {
            DAT_14cb9e144 = iVar20 << 5;
          }
        }
        FUN_1446efbd8(&DAT_14cb9e128,DAT_14cb9e140);
        iVar11 = DAT_14cb9e140 + 1;
      }
      iVar20 = iVar11 + 0x1f;
      if (-1 < iVar11) {
        iVar20 = iVar11;
      }
      if (iVar11 % 0x20 != 0) {
        puVar12 = &DAT_14cb9e128;
        if (DAT_14cb9e138 != (uint *)0x0) {
          puVar12 = DAT_14cb9e138;
        }
        bVar9 = -(char)(iVar11 % 0x20);
        DAT_14cb9e140 = iVar11;
        puVar12[iVar20 >> 5] = (puVar12[iVar20 >> 5] << (bVar9 & 0x1f)) >> (bVar9 & 0x1f);
        iVar11 = DAT_14cb9e140;
      }
    }
    DAT_14cb9e140 = iVar11;
    lVar16 = (longlong)iVar25;
    puVar12 = &DAT_14cb9e128;
    if (DAT_14cb9e138 != (uint *)0x0) {
      puVar12 = DAT_14cb9e138;
    }
    bVar9 = (byte)iVar10 & 0x1f;
    puVar12[iVar15 >> 5] = puVar12[iVar15 >> 5] & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
  }
  else {
    lVar16 = (longlong)DAT_14cb9e148;
    DAT_14cb9e148 = *(int *)(DAT_14cb9e118 + 4 + lVar16 * 0x18);
    DAT_14cb9e14c = DAT_14cb9e14c + -1;
    iVar25 = iVar10;
    if (DAT_14cb9e14c != 0) {
      *(undefined4 *)(DAT_14cb9e118 + (longlong)DAT_14cb9e148 * 0x18) = 0xffffffff;
    }
  }
  puVar12 = DAT_14cb9e138;
  if (DAT_14cb9e138 == (uint *)0x0) {
    puVar12 = &DAT_14cb9e128;
  }
  iVar10 = iVar25 + 0x1f;
  if (-1 < iVar25) {
    iVar10 = iVar25;
  }
  puVar12[iVar10 >> 5] = puVar12[iVar10 >> 5] | 1 << ((byte)iVar25 & 0x1f);
  uVar13 = DAT_14cb9e184;
  uVar17 = 1;
  puVar1 = (ulonglong *)(DAT_14cb9e118 + lVar16 * 0x18);
  *puVar1 = DAT_14cb9e184;
  puVar1[1] = (ulonglong)&DAT_14cb9e180;
  *(undefined4 *)(puVar1 + 2) = 0xffffffff;
  uVar8 = (uint)(uVar13 >> 0x10);
  uVar19 = (uint)uVar13 & 0xffff;
  uVar8 = ((uint)uVar13 << 0x10 | uVar19) + (int)(uVar13 >> 0x20) + (uVar8 << 0x13 | uVar8 & 0xffff)
          + (uVar19 >> 4);
  uVar19 = DAT_14cb9e120 - DAT_14cb9e14c;
  if (1 < uVar19) {
    puVar21 = &DAT_14cb9e150;
    if (DAT_14cb9e158 != (undefined *)0x0) {
      puVar21 = DAT_14cb9e158;
    }
    iVar10 = *(int *)(puVar21 + (ulonglong)(DAT_14cb9e160 - 1 & uVar8) * 4);
    while (iVar10 != -1) {
      puVar2 = (ulonglong *)(DAT_14cb9e118 + (longlong)iVar10 * 0x18);
      if (*puVar2 == uVar13) {
        uVar4 = *(undefined4 *)((longlong)puVar1 + 4);
        uVar13 = puVar1[1];
        uVar5 = *(undefined4 *)((longlong)puVar1 + 0xc);
        *(int *)puVar2 = (int)*puVar1;
        *(undefined4 *)((longlong)puVar2 + 4) = uVar4;
        *(int *)(puVar2 + 1) = (int)uVar13;
        *(undefined4 *)((longlong)puVar2 + 0xc) = uVar5;
        FUN_143fdc158(iVar25);
        goto LAB_143fe5ab7;
      }
      iVar10 = (int)puVar2[2];
    }
  }
  if (3 < uVar19) {
    uVar13 = (ulonglong)(uVar19 & 0xfffffffe) + 0xf;
    lVar16 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar17 = 1 << ((byte)lVar16 & 0x1f);
  }
  if (((int)uVar19 < 1) || ((int)uVar17 <= (int)DAT_14cb9e160)) {
    uVar8 = DAT_14cb9e160 - 1 & uVar8;
    *(uint *)((longlong)puVar1 + 0x14) = uVar8;
    puVar21 = DAT_14cb9e158;
    if (DAT_14cb9e158 == (undefined *)0x0) {
      puVar21 = &DAT_14cb9e150;
    }
    *(undefined4 *)(puVar1 + 2) =
         *(undefined4 *)(puVar21 + ((longlong)(int)DAT_14cb9e160 - 1U & (longlong)(int)uVar8) * 4);
    puVar21 = DAT_14cb9e158;
    if (DAT_14cb9e158 == (undefined *)0x0) {
      puVar21 = &DAT_14cb9e150;
    }
    *(int *)(puVar21 + ((longlong)(int)DAT_14cb9e160 - 1U & (longlong)(int)uVar8) * 4) = iVar25;
  }
  else {
    DAT_14cb9e160 = uVar17;
    if (DAT_14cb9e158 != (undefined *)0x0) {
      FUN_1446efa72(&DAT_14cb9e158,0,0,4);
    }
    uVar8 = DAT_14cb9e160;
    if (DAT_14cb9e160 != 0) {
      if (DAT_14cb9e160 == 1) {
        if (DAT_14cb9e158 != (undefined *)0x0) {
          FUN_1446efa72(&DAT_14cb9e158,0,0,4);
        }
LAB_143fe5827:
        uVar17 = 0;
        do {
          puVar21 = DAT_14cb9e158;
          if (DAT_14cb9e158 == (undefined *)0x0) {
            puVar21 = &DAT_14cb9e150;
          }
          *(undefined4 *)(puVar21 + (ulonglong)(DAT_14cb9e160 + 0x7fffffff & uVar17) * 4) =
               0xffffffff;
          uVar17 = uVar17 + 1;
        } while (uVar8 != uVar17);
      }
      else {
        FUN_1446efa72(&DAT_14cb9e158,0,DAT_14cb9e160,4);
        if (0 < (int)uVar8) goto LAB_143fe5827;
      }
      if (DAT_14cb9e140 == 0) {
        uVar13 = 0;
        uVar22 = 1;
        iVar10 = 0;
        iVar25 = 0;
      }
      else {
        puVar12 = DAT_14cb9e138;
        if (DAT_14cb9e138 == (uint *)0x0) {
          puVar12 = &DAT_14cb9e128;
        }
        uVar8 = *puVar12;
        if (uVar8 == 0) {
          iVar25 = DAT_14cb9e140 + 0x1e;
          if (-1 < DAT_14cb9e140 + -1) {
            iVar25 = DAT_14cb9e140 + -1;
          }
          uVar13 = 0;
          uVar22 = (ulonglong)(uint)(iVar25 >> 5);
          if (iVar25 >> 5 < 1) {
            uVar22 = uVar13;
          }
          iVar10 = 0;
          do {
            if (uVar22 == uVar13) goto LAB_143fe5ab7;
            iVar10 = iVar10 + 0x20;
            uVar8 = puVar12[uVar13 + 1];
            uVar13 = uVar13 + 1;
          } while (uVar8 == 0);
        }
        else {
          uVar13 = 0;
          iVar10 = 0;
        }
        uVar22 = (ulonglong)(-uVar8 & uVar8);
        uVar18 = uVar22 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar25 = (iVar10 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if (DAT_14cb9e140 <= iVar25) {
          iVar25 = DAT_14cb9e140;
        }
      }
      if (iVar25 < DAT_14cb9e140) {
        uVar8 = 0xffffffff;
        do {
          lVar16 = DAT_14cb9e118;
          lVar24 = (longlong)iVar25;
          uVar3 = *(undefined8 *)(DAT_14cb9e118 + lVar24 * 0x18);
          uVar17 = (uint)((ulonglong)uVar3 >> 0x10);
          uVar19 = (uint)uVar3 & 0xffff;
          uVar18 = (longlong)
                   (int)(((uint)uVar3 << 0x10 | uVar19) + (int)((ulonglong)uVar3 >> 0x20) +
                         (uVar17 << 0x13 | uVar17 & 0xffff) + (uVar19 >> 4)) &
                   (longlong)(int)DAT_14cb9e160 - 1U;
          iVar20 = (int)uVar18;
          *(int *)(DAT_14cb9e118 + 0x14 + lVar24 * 0x18) = iVar20;
          puVar21 = DAT_14cb9e158;
          if (DAT_14cb9e158 == (undefined *)0x0) {
            puVar21 = &DAT_14cb9e150;
          }
          *(undefined4 *)(lVar16 + 0x10 + lVar24 * 0x18) =
               *(undefined4 *)(puVar21 + ((longlong)(int)DAT_14cb9e160 - 1U & uVar18) * 4);
          puVar21 = DAT_14cb9e158;
          if (DAT_14cb9e158 == (undefined *)0x0) {
            puVar21 = &DAT_14cb9e150;
          }
          *(int *)(puVar21 + ((longlong)iVar20 & (longlong)(int)DAT_14cb9e160 - 1U) * 4) = iVar25;
          uVar8 = ~(uint)uVar22 & uVar8;
          puVar12 = DAT_14cb9e138;
          if (DAT_14cb9e138 == (uint *)0x0) {
            puVar12 = &DAT_14cb9e128;
          }
          iVar25 = (int)uVar13;
          lVar16 = (longlong)iVar25;
          uVar17 = puVar12[lVar16] & uVar8;
          if (uVar17 == 0) {
            iVar20 = DAT_14cb9e140 + 0x1e;
            if (-1 < DAT_14cb9e140 + -1) {
              iVar20 = DAT_14cb9e140 + -1;
            }
            iVar20 = iVar20 >> 5;
            iVar11 = iVar20;
            if (iVar20 < iVar25) {
              iVar11 = iVar25;
            }
            if (iVar20 <= iVar25) break;
            lVar24 = 0;
            while( true ) {
              iVar10 = iVar10 + 0x20;
              uVar17 = puVar12[lVar16 + lVar24 + 1];
              if (uVar17 != 0) break;
              lVar24 = lVar24 + 1;
              if (iVar11 - lVar16 == lVar24) goto LAB_143fe5ab7;
            }
            uVar13 = (ulonglong)(iVar25 + (int)lVar24 + 1);
            uVar8 = 0xffffffff;
          }
          uVar22 = (ulonglong)(-uVar17 & uVar17);
          uVar18 = uVar22 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar18 != 0) {
            for (; uVar18 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          iVar25 = (iVar10 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        } while (iVar25 < DAT_14cb9e140);
      }
    }
  }
LAB_143fe5ab7:
  if (local_a8 != (wchar_t *)0x0) {
    pppuVar14 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar14 = &local_88;
    }
    (*(code *)(*pppuVar14)[2])();
  }
  atexit(FUN_143fd0102);
  DAT_14cb9e200 = 0;
  _DAT_14cb9e208 = 0xffffffff;
  _DAT_14cb9e20c = 0;
  local_a8 = L"GbxTextColor";
  local_a0 = 0xc;
  local_9c = 0;
  uVar8 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb9e210 = (ulonglong)uVar8;
  local_a8 = L"GbxTextOutlineColor";
  local_a0 = 0x13;
  local_9c = 0;
  uVar8 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb9e218 = (ulonglong)uVar8;
  local_f8 = local_f8 & 0xffffffff00000000;
  FUN_1412cc41e(&DAT_14cb9e220,L"UMGPlayerSubsystem",0,0xffffffff);
  FUN_1400b22c2(&local_a8,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar7 = FUN_140b10a34(&local_a8,&DAT_14cb9e22c);
  if (cVar7 == '\0') {
    _DAT_14cb9e22c = 0;
    uRam000000014cb9e234 = 0;
  }
  if (local_a8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  DAT_14cb9e2a0 = 0;
  _DAT_14cb9e2a8 = 0;
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_14a1795c0;
  puStack_80 = &LAB_143fe2d76;
  local_a8 = L"ｈ찡䡖\xec83䠠캉돨";
  DAT_14cb9e2b0 = 0;
  local_d8 = "uiextension";
  uStack_d0 = CONCAT35(uStack_d0._5_3_,0xb);
  uVar8 = FUN_14001a6c0(&local_d8,1);
  DAT_14cb9e2b4 = (ulonglong)uVar8;
  _DAT_14cb9e2c0 = 0;
  _DAT_14cb9e2c8 = (char *)0x0;
  _DAT_14cb9e2d0 = 0;
  DAT_14cb9e2d8 = (void *)0x0;
  _DAT_14cb9e2e0 = 0;
  _DAT_14cb9e2e8 = FUN_143fd7f90;
  DAT_14cb9e2f0 = local_a8;
  DAT_14cb9e300 = local_98;
  local_98 = (undefined ***)0x0;
  DAT_14cb9e310 = local_88;
  puRam000000014cb9e318 = puStack_80;
  _DAT_14cb9e320 = local_78;
  uRam000000014cb9e324 = uStack_74;
  uRam000000014cb9e328 = uStack_70;
  uRam000000014cb9e32c = uStack_6c;
  if (local_a8 != (wchar_t *)0x0) {
    local_a8 = (wchar_t *)0x0;
  }
  local_d8 = (char *)0x0;
  uStack_d0 = 0;
  local_c8 = (void *)0x0;
  uStack_c0 = 0;
  local_b8 = &DAT_149e02088;
  local_b0 = 0;
  FUN_14475bea4(&local_d8);
  pvVar6 = local_c8;
  _DAT_14cb9e2c0 = 0;
  _DAT_14cb9e2c8 = local_d8;
  _DAT_14cb9e2d0 = uStack_d0;
  iVar25 = (int)uStack_c0;
  lVar16 = (longlong)(int)uStack_c0;
  _DAT_14cb9e2e0 = CONCAT44(DAT_14cb9e2e4,(int)uStack_c0);
  if ((int)uStack_c0 == 0 && DAT_14cb9e2e4 == 0) {
    _DAT_14cb9e2e0 = uStack_c0 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb9e2d8,uStack_c0 & 0xffffffff);
    if (iVar25 != 0) {
      memcpy(DAT_14cb9e2d8,pvVar6,lVar16 * 2);
    }
  }
  if (local_c8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb9e2b0) && ((DAT_14cb9e240 == (int *)0x0 || (*DAT_14cb9e240 < DAT_14cb9e2b0)))) {
    DAT_14cb9e240 = &DAT_14cb9e2b0;
  }
  FUN_143fd7e52();
  iVar10 = DAT_14cb9e278;
  iVar25 = DAT_14cb9e250;
  if (DAT_14cb9e27c == 0) {
    iVar10 = DAT_14cb9e250 + 1;
    bVar26 = DAT_14cb9e254 == DAT_14cb9e250;
    DAT_14cb9e250 = iVar10;
    if (bVar26) {
      FUN_14482b872(&DAT_14cb9e248,iVar25);
    }
    iVar10 = DAT_14cb9e270;
    if (DAT_14cb9e270 == 0) {
      iVar20 = -1;
    }
    else {
      iVar20 = DAT_14cb9e270 + 0x1e;
      if (-1 < DAT_14cb9e270 + -1) {
        iVar20 = DAT_14cb9e270 + -1;
      }
      iVar20 = iVar20 >> 5;
    }
    iVar11 = DAT_14cb9e270 + 1;
    iVar15 = DAT_14cb9e270 + 0x1f;
    if (-1 < DAT_14cb9e270) {
      iVar15 = DAT_14cb9e270;
    }
    if (iVar15 >> 5 != iVar20) {
      if (DAT_14cb9e274 <= DAT_14cb9e270) {
        if (DAT_14cb9e270 + 0x20U < 0xa0) {
          DAT_14cb9e274 = 0x80;
        }
        else {
          uVar8 = DAT_14cb9e270 + 0x20U >> 5;
          if (DAT_14cb9e274 + 0x1fU < 0xa0) {
            uVar17 = 4;
            if (4 < uVar8) {
              uVar17 = uVar8;
            }
          }
          else {
            uVar17 = uVar8 + (uVar8 * 3 >> 3) + 0x10;
          }
          uVar13 = (ulonglong)(uVar17 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar19 = (uint)(uVar13 + 0xf);
              if (uVar17 < 0x1ffd) {
                uVar13 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar19 >> 4]];
              }
              else {
                uVar22 = uVar13 + 0xf & 0xfffffffffffffff0;
                if (uVar22 < 0x7ff1) {
                  bVar9 = (&DAT_14c841e00)[uVar19 >> 4];
                  uVar18 = 0x32;
                  if (0x32 < bVar9) {
                    uVar18 = (ulonglong)bVar9;
                  }
                  uVar23 = 0x32 - (ulonglong)bVar9;
                  do {
                    uVar13 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar23 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar23 & 0xffffffff] & 0xf) == 0) goto LAB_143fe6b20;
                    lVar16 = uVar18 + 1 + uVar23;
                    uVar23 = uVar23 - 1;
                  } while (lVar16 != 0x33);
                }
                uVar13 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar13 = (ulonglong)DAT_14c841df8;
                }
                uVar13 = -uVar13 & (uVar22 + uVar13) - 1;
              }
            }
            else {
              uVar13 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar13,0);
            }
          }
LAB_143fe6b20:
          iVar20 = (int)(uVar13 >> 2);
          DAT_14cb9e274 = -0x20;
          if ((int)uVar8 <= iVar20) {
            DAT_14cb9e274 = iVar20 << 5;
          }
        }
        FUN_1446efbd8(&DAT_14cb9e258,DAT_14cb9e270);
        iVar11 = DAT_14cb9e270 + 1;
      }
      iVar20 = iVar11 + 0x1f;
      if (-1 < iVar11) {
        iVar20 = iVar11;
      }
      if (iVar11 % 0x20 != 0) {
        puVar12 = &DAT_14cb9e258;
        if (DAT_14cb9e268 != (uint *)0x0) {
          puVar12 = DAT_14cb9e268;
        }
        bVar9 = -(char)(iVar11 % 0x20);
        DAT_14cb9e270 = iVar11;
        puVar12[iVar20 >> 5] = (puVar12[iVar20 >> 5] << (bVar9 & 0x1f)) >> (bVar9 & 0x1f);
        iVar11 = DAT_14cb9e270;
      }
    }
    DAT_14cb9e270 = iVar11;
    lVar16 = (longlong)iVar25;
    puVar12 = &DAT_14cb9e258;
    if (DAT_14cb9e268 != (uint *)0x0) {
      puVar12 = DAT_14cb9e268;
    }
    bVar9 = (byte)iVar10 & 0x1f;
    puVar12[iVar15 >> 5] = puVar12[iVar15 >> 5] & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
  }
  else {
    lVar16 = (longlong)DAT_14cb9e278;
    DAT_14cb9e278 = *(int *)(DAT_14cb9e248 + 4 + lVar16 * 0x18);
    DAT_14cb9e27c = DAT_14cb9e27c + -1;
    iVar25 = iVar10;
    if (DAT_14cb9e27c != 0) {
      *(undefined4 *)(DAT_14cb9e248 + (longlong)DAT_14cb9e278 * 0x18) = 0xffffffff;
    }
  }
  puVar12 = DAT_14cb9e268;
  if (DAT_14cb9e268 == (uint *)0x0) {
    puVar12 = &DAT_14cb9e258;
  }
  iVar10 = iVar25 + 0x1f;
  if (-1 < iVar25) {
    iVar10 = iVar25;
  }
  puVar12[iVar10 >> 5] = puVar12[iVar10 >> 5] | 1 << ((byte)iVar25 & 0x1f);
  uVar13 = DAT_14cb9e2b4;
  uVar17 = 1;
  puVar1 = (ulonglong *)(DAT_14cb9e248 + lVar16 * 0x18);
  *puVar1 = DAT_14cb9e2b4;
  puVar1[1] = (ulonglong)&DAT_14cb9e2b0;
  *(undefined4 *)(puVar1 + 2) = 0xffffffff;
  uVar8 = (uint)(uVar13 >> 0x10);
  uVar19 = (uint)uVar13 & 0xffff;
  uVar8 = ((uint)uVar13 << 0x10 | uVar19) + (int)(uVar13 >> 0x20) + (uVar8 << 0x13 | uVar8 & 0xffff)
          + (uVar19 >> 4);
  uVar19 = DAT_14cb9e250 - DAT_14cb9e27c;
  if (1 < uVar19) {
    puVar21 = &DAT_14cb9e280;
    if (DAT_14cb9e288 != (undefined *)0x0) {
      puVar21 = DAT_14cb9e288;
    }
    iVar10 = *(int *)(puVar21 + (ulonglong)(DAT_14cb9e290 - 1 & uVar8) * 4);
    while (iVar10 != -1) {
      puVar2 = (ulonglong *)(DAT_14cb9e248 + (longlong)iVar10 * 0x18);
      if (*puVar2 == uVar13) {
        uVar4 = *(undefined4 *)((longlong)puVar1 + 4);
        uVar13 = puVar1[1];
        uVar5 = *(undefined4 *)((longlong)puVar1 + 0xc);
        *(int *)puVar2 = (int)*puVar1;
        *(undefined4 *)((longlong)puVar2 + 4) = uVar4;
        *(int *)(puVar2 + 1) = (int)uVar13;
        *(undefined4 *)((longlong)puVar2 + 0xc) = uVar5;
        FUN_143fdc78c(iVar25);
        goto LAB_143fe6248;
      }
      iVar10 = (int)puVar2[2];
    }
  }
  if (3 < uVar19) {
    uVar13 = (ulonglong)(uVar19 & 0xfffffffe) + 0xf;
    lVar16 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar17 = 1 << ((byte)lVar16 & 0x1f);
  }
  if (((int)uVar19 < 1) || ((int)uVar17 <= (int)DAT_14cb9e290)) {
    uVar8 = DAT_14cb9e290 - 1 & uVar8;
    *(uint *)((longlong)puVar1 + 0x14) = uVar8;
    puVar21 = DAT_14cb9e288;
    if (DAT_14cb9e288 == (undefined *)0x0) {
      puVar21 = &DAT_14cb9e280;
    }
    *(undefined4 *)(puVar1 + 2) =
         *(undefined4 *)(puVar21 + ((longlong)(int)DAT_14cb9e290 - 1U & (longlong)(int)uVar8) * 4);
    puVar21 = DAT_14cb9e288;
    if (DAT_14cb9e288 == (undefined *)0x0) {
      puVar21 = &DAT_14cb9e280;
    }
    *(int *)(puVar21 + ((longlong)(int)DAT_14cb9e290 - 1U & (longlong)(int)uVar8) * 4) = iVar25;
    goto LAB_143fe6248;
  }
  DAT_14cb9e290 = uVar17;
  if (DAT_14cb9e288 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb9e288,0,0,4);
  }
  uVar8 = DAT_14cb9e290;
  if (DAT_14cb9e290 == 0) goto LAB_143fe6248;
  if (DAT_14cb9e290 == 1) {
    if (DAT_14cb9e288 != (undefined *)0x0) {
      FUN_1446efa72(&DAT_14cb9e288,0,0,4);
    }
LAB_143fe5fb8:
    uVar17 = 0;
    do {
      puVar21 = DAT_14cb9e288;
      if (DAT_14cb9e288 == (undefined *)0x0) {
        puVar21 = &DAT_14cb9e280;
      }
      *(undefined4 *)(puVar21 + (ulonglong)(DAT_14cb9e290 + 0x7fffffff & uVar17) * 4) = 0xffffffff;
      uVar17 = uVar17 + 1;
    } while (uVar8 != uVar17);
  }
  else {
    FUN_1446efa72(&DAT_14cb9e288,0,DAT_14cb9e290,4);
    if (0 < (int)uVar8) goto LAB_143fe5fb8;
  }
  if (DAT_14cb9e270 == 0) {
    uVar13 = 0;
    uVar22 = 1;
    iVar10 = 0;
    iVar25 = 0;
  }
  else {
    puVar12 = DAT_14cb9e268;
    if (DAT_14cb9e268 == (uint *)0x0) {
      puVar12 = &DAT_14cb9e258;
    }
    uVar8 = *puVar12;
    if (uVar8 == 0) {
      iVar25 = DAT_14cb9e270 + 0x1e;
      if (-1 < DAT_14cb9e270 + -1) {
        iVar25 = DAT_14cb9e270 + -1;
      }
      uVar13 = 0;
      uVar22 = (ulonglong)(uint)(iVar25 >> 5);
      if (iVar25 >> 5 < 1) {
        uVar22 = uVar13;
      }
      iVar10 = 0;
      do {
        if (uVar22 == uVar13) goto LAB_143fe6248;
        iVar10 = iVar10 + 0x20;
        uVar8 = puVar12[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar8 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar22 = (ulonglong)(-uVar8 & uVar8);
    uVar18 = uVar22 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar25 = (iVar10 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if (DAT_14cb9e270 <= iVar25) {
      iVar25 = DAT_14cb9e270;
    }
  }
  if (iVar25 < DAT_14cb9e270) {
    uVar8 = 0xffffffff;
    do {
      lVar16 = DAT_14cb9e248;
      lVar24 = (longlong)iVar25;
      uVar3 = *(undefined8 *)(DAT_14cb9e248 + lVar24 * 0x18);
      uVar17 = (uint)((ulonglong)uVar3 >> 0x10);
      uVar19 = (uint)uVar3 & 0xffff;
      uVar18 = (longlong)
               (int)(((uint)uVar3 << 0x10 | uVar19) + (int)((ulonglong)uVar3 >> 0x20) +
                     (uVar17 << 0x13 | uVar17 & 0xffff) + (uVar19 >> 4)) &
               (longlong)(int)DAT_14cb9e290 - 1U;
      iVar20 = (int)uVar18;
      *(int *)(DAT_14cb9e248 + 0x14 + lVar24 * 0x18) = iVar20;
      puVar21 = DAT_14cb9e288;
      if (DAT_14cb9e288 == (undefined *)0x0) {
        puVar21 = &DAT_14cb9e280;
      }
      *(undefined4 *)(lVar16 + 0x10 + lVar24 * 0x18) =
           *(undefined4 *)(puVar21 + ((longlong)(int)DAT_14cb9e290 - 1U & uVar18) * 4);
      puVar21 = DAT_14cb9e288;
      if (DAT_14cb9e288 == (undefined *)0x0) {
        puVar21 = &DAT_14cb9e280;
      }
      *(int *)(puVar21 + ((longlong)iVar20 & (longlong)(int)DAT_14cb9e290 - 1U) * 4) = iVar25;
      uVar8 = ~(uint)uVar22 & uVar8;
      puVar12 = DAT_14cb9e268;
      if (DAT_14cb9e268 == (uint *)0x0) {
        puVar12 = &DAT_14cb9e258;
      }
      iVar25 = (int)uVar13;
      lVar16 = (longlong)iVar25;
      uVar17 = puVar12[lVar16] & uVar8;
      if (uVar17 == 0) {
        iVar20 = DAT_14cb9e270 + 0x1e;
        if (-1 < DAT_14cb9e270 + -1) {
          iVar20 = DAT_14cb9e270 + -1;
        }
        iVar20 = iVar20 >> 5;
        iVar11 = iVar20;
        if (iVar20 < iVar25) {
          iVar11 = iVar25;
        }
        if (iVar20 <= iVar25) break;
        lVar24 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar17 = puVar12[lVar16 + lVar24 + 1];
          if (uVar17 != 0) break;
          lVar24 = lVar24 + 1;
          if (iVar11 - lVar16 == lVar24) goto LAB_143fe6248;
        }
        uVar13 = (ulonglong)(iVar25 + (int)lVar24 + 1);
        uVar8 = 0xffffffff;
      }
      uVar22 = (ulonglong)(-uVar17 & uVar17);
      uVar18 = uVar22 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar25 = (iVar10 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    } while (iVar25 < DAT_14cb9e270);
  }
LAB_143fe6248:
  if (local_a8 != (wchar_t *)0x0) {
    pppuVar14 = &local_88;
    if (local_98 != (undefined ***)0x0) {
      pppuVar14 = local_98;
    }
    (*(code *)(*pppuVar14)[2])(pppuVar14);
  }
  atexit(FUN_143fd807c);
  _DAT_14cb9e338 = &LAB_143fd81ae;
  _DAT_14cb9e340 = 0x44264000;
  DAT_14cb9e344 = 1;
  DAT_14cb9e330 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb9e330;
  atexit((_func_5014 *)&LAB_143fd81b3);
  local_a8 = L"UpscalingMethod";
  local_a0 = 0xf;
  local_9c = 0;
  uVar8 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb9e350 = (ulonglong)uVar8;
  local_a8 = L"FrameGeneration";
  local_a0 = 0xf;
  local_9c = 0;
  uVar8 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb9e358 = (ulonglong)uVar8;
  local_a8 = L"Upscaling";
  local_a0 = 9;
  local_9c = 0;
  uVar8 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb9e360 = (ulonglong)uVar8;
  local_a8 = L"AntiAliasingMethod";
  local_a0 = 0x12;
  local_9c = 0;
  uVar8 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb9e368 = (ulonglong)uVar8;
  local_a8 = L"WindowsTextureLODGroups";
  local_a0 = 0x17;
  local_9c = 0;
  uVar8 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb9e370 = (ulonglong)uVar8;
  local_a8 = L"Textures";
  local_a0 = 8;
  local_9c = 0;
  uVar8 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb9e378 = (ulonglong)uVar8;
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143fe70f0 FUN_143fe70f0 body=1492 status=ok
// SIG undefined FUN_143fe70f0(void)

void FUN_143fe70f0(void)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  undefined4 *puVar8;
  uint *puVar9;
  uint uVar10;
  undefined ***pppuVar11;
  uint *puVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  int iVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined8 local_70;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined8 local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cb0d2b0 == 0) goto LAB_143fe7302;
  lVar17 = *(longlong *)(DAT_14cb0d2b0 + 0xc20);
  if ((lVar17 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar17);
  }
  else if (lVar17 == 0) goto LAB_143fe7302;
  uVar10 = *(uint *)(lVar17 + 0xc);
  if ((int)uVar10 < DAT_14c9647dc) {
    lVar17 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
  }
  else {
    lVar17 = 0;
  }
  iVar5 = *(int *)(lVar17 + 0x10);
  if (iVar5 == 0) {
    LOCK();
    iVar5 = DAT_14c964868 + 1;
    UNLOCK();
    iVar16 = DAT_14c964868 + 1;
    bVar18 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar5;
    if (bVar18) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar16);
    }
    LOCK();
    iVar5 = *(int *)(lVar17 + 0x10);
    bVar18 = iVar5 == 0;
    if (bVar18) {
      *(int *)(lVar17 + 0x10) = iVar16;
      iVar5 = 0;
    }
    UNLOCK();
    if (bVar18) {
      iVar5 = iVar16;
    }
    if (iVar5 == 0) goto LAB_143fe7302;
  }
  if (((((int)uVar10 < 0) || (DAT_14c9647dc <= (int)uVar10)) ||
      (lVar17 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8), lVar17 == 0)) ||
     ((*(int *)(lVar17 + 0x10) != iVar5 || ((*(uint *)(lVar17 + 8) & 0x10200000) != 0))))
  goto LAB_143fe7302;
  uVar14 = CONCAT44(iVar5,uVar10);
  lVar17 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar5 = *(int *)(lVar17 + 0xc60);
  local_70 = uVar14;
  if (DAT_14c86a9fc == 0) {
    if (iVar5 != 2) {
      if (iVar5 != 1) goto LAB_143fe71eb;
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      if (DVar6 == DVar7) goto LAB_143fe71f0;
      goto LAB_143fe7263;
    }
  }
  else {
LAB_143fe71eb:
    if (iVar5 != 0x10) {
LAB_143fe7263:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar5 = *(int *)(lVar17 + 0xc60), iVar5 == 2))
        goto LAB_143fe71f0;
        if (iVar5 == 1) {
          DVar6 = FUN_140ad26c0();
          DVar7 = GetCurrentThreadId();
          if (DVar6 == DVar7) goto LAB_143fe71f0;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar9 = (uint *)*puVar2;
        if (puVar9 != (uint *)0x0) goto LAB_143fe73c3;
        while( true ) {
          uVar10 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar10 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar10 | 1;
            __tlregdtor(&LAB_143feea9b);
          }
          lVar17 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar8 = *(undefined4 **)(lVar17 + 0x310);
          *(undefined8 *)(lVar17 + 0x310) = 0;
          if (puVar8 == (undefined4 *)0x0) {
            puVar8 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar8 = 0xffffffff;
          *(undefined4 **)(puVar8 + 0x10) = puVar8 + 0x16;
          puVar8[0x12] = 0;
          *puVar2 = puVar8;
          FUN_140217a48(puVar2);
          puVar9 = (uint *)*puVar2;
LAB_143fe73c3:
          puVar15 = (undefined8 *)(*(longlong *)(puVar9 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar12 = (uint *)(puVar15 + 0x16);
          uVar10 = puVar9[0x12];
          if (puVar12 <= puVar9 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar9 + 0x10) = puVar9 + 0x4000;
            LOCK();
            uVar3 = *puVar9;
            *puVar9 = *puVar9 + uVar10 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar10) != 0xffffffff) break;
            puVar9 = (uint *)*puVar2;
            *puVar9 = 0xffffffff;
            *(uint **)(puVar9 + 0x10) = puVar9 + 0x16;
            puVar9[0x12] = 0;
            *puVar2 = puVar9;
            puVar15 = (undefined8 *)((longlong)puVar9 + 0x5fU & 0xfffffffffffffff8);
            puVar12 = (uint *)(puVar15 + 0x16);
            uVar10 = 0;
            if (puVar12 <= puVar9 + 0x4000) {
              uVar10 = 1;
              goto LAB_143fe7443;
            }
          }
        }
        uVar10 = uVar10 + 1;
LAB_143fe7443:
        *(uint **)(puVar9 + 0x10) = puVar12;
        puVar9[0x12] = uVar10;
        iVar5 = 0;
        FUN_1447247dc(puVar15,0);
        *puVar15 = &PTR_FUN_14b5a8b70;
        puVar15[0x15] = local_70;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar10 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar10 < 2) {
            uVar13 = (ulonglong)(byte)(&DAT_149e38edc)[uVar10];
            iVar5 = 0;
          }
          else {
            uVar13 = 2;
          }
        }
        else {
          iVar5 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar13 = 5;
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
        lVar17 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar17 == 0) {
          uVar4 = 1;
          if ((char)uVar13 != '\x06') {
            uVar4 = uVar13;
          }
          uVar13 = uVar4;
          uVar14 = 0;
        }
        else {
          if ((char)uVar13 == '\x06') {
            uVar13 = *(ulonglong *)(lVar17 + 0x38) >> 0x3b;
          }
          uVar14 = *(undefined8 *)(lVar17 + 0x30);
        }
        puVar15[0xf] = uVar14;
        puVar15[0x10] = uVar13 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar15 + 0x1c) = iVar5;
        if (puVar15 == (undefined8 *)0x0) {
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
          UNLOCK();
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
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
        local_48 = &PTR_LAB_14b5a8b30;
        local_68[0] = &LAB_143feffee;
        local_40 = uVar14;
        FUN_14005a792(&DAT_14ca9a440,L"BinkOverlays",&DAT_14cb9e700);
        if (local_68[0] != (undefined1 *)0x0) {
          pppuVar11 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar11 = &local_48;
          }
          (*(code *)(*pppuVar11)[2])();
        }
      }
      goto LAB_143fe7302;
    }
  }
LAB_143fe71f0:
  FUN_143fefeda(&local_70,&DAT_14ca85100);
LAB_143fe7302:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fe76c5 FUN_143fe76c5 body=55 status=ok
// SIG undefined FUN_143fe76c5(void)

void FUN_143fe76c5(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9e408 == 0) {
    uVar1 = FUN_1418c27b3();
    DAT_14cb9e408 = FUN_14171c317(FUN_14659f96b,uVar1,L"EBinkMediaPlayerBinkBufferModes");
  }
  return;
}



// FUNCTION 143fe76fc FUN_143fe76fc body=55 status=ok
// SIG undefined FUN_143fe76fc(void)

void FUN_143fe76fc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9e420 == 0) {
    uVar1 = FUN_1418c27b3();
    DAT_14cb9e420 = FUN_14171c317(FUN_14659f99a,uVar1,L"EBinkMediaPlayerBinkSoundTrack");
  }
  return;
}



// FUNCTION 143fe7733 FUN_143fe7733 body=55 status=ok
// SIG undefined FUN_143fe7733(void)

void FUN_143fe7733(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9e438 == 0) {
    uVar1 = FUN_1418c27b3();
    DAT_14cb9e438 = FUN_14171c317(FUN_14659f9c9,uVar1,L"EBinkMediaPlayerBinkDrawStyle");
  }
  return;
}



// FUNCTION 143fe776a FUN_143fe776a body=2278 status=ok
// SIG undefined FUN_143fe776a(void)

void FUN_143fe776a(longlong param_1,longlong *param_2,undefined1 param_3,undefined4 param_4,
                  undefined4 param_5,undefined1 param_6,undefined1 param_7)

{
  int *piVar1;
  code *pcVar2;
  undefined8 *puVar3;
  uint uVar4;
  code cVar5;
  code *pcVar6;
  longlong lVar7;
  ulonglong uVar8;
  char cVar9;
  int iVar10;
  DWORD DVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined4 *puVar14;
  uint *puVar15;
  undefined8 uVar16;
  longlong *plVar17;
  longlong *plVar18;
  uint uVar19;
  uint *puVar20;
  code *pcVar21;
  code *pcVar22;
  ulonglong uVar23;
  DWORD DVar24;
  undefined8 *puVar25;
  bool bVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_128 [32];
  code **local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined1 local_f0;
  undefined1 local_e8;
  DWORD local_e0;
  int local_dc;
  code *local_d8;
  DWORD local_cc;
  code *local_c8;
  undefined8 uStack_c0;
  longlong *local_b8;
  undefined8 uStack_b0;
  longlong local_a8 [5];
  undefined8 uStack_80;
  int iStack_7c;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((*(longlong *)(param_1 + 0xf8) == 0) || (lVar12 = FUN_1447b4020(param_2), lVar12 == 0))
  goto LAB_143fe7ada;
  lVar12 = FUN_1447b4020(param_2);
  pcVar6 = *(code **)(lVar12 + 0x10);
  pcVar21 = (code *)0x0;
  if (pcVar6[0x52] == (code)0x0) {
    pcVar21 = pcVar6;
  }
  if (pcVar21 != (code *)0x0) {
    LOCK();
    *(int *)(pcVar21 + 8) = *(int *)(pcVar21 + 8) + 1;
    UNLOCK();
  }
  if (*(longlong *)(param_1 + 0xf8) == 0) {
LAB_143fe7a7f:
    if (pcVar21 == (code *)0x0) goto LAB_143fe7ada;
  }
  else {
    local_a8[4] = 0;
    uStack_80 = 0;
    local_a8[2] = 0;
    local_a8[3] = 0;
    local_a8[0] = 0;
    local_a8[1] = 0;
    local_b8 = (longlong *)0x0;
    uStack_b0 = 0;
    local_c8 = (code *)0x0;
    uStack_c0 = 0;
    local_78 = 0;
    FUN_144d6e1b0(*(longlong *)(param_1 + 0xf8),&local_c8);
    if ((iStack_7c != 0) || (*(char *)(param_1 + 0x100) != '\0')) {
      if (*(longlong *)(param_1 + 0xf8) != 0) {
        local_a8[4] = 0;
        uStack_80 = 0;
        local_a8[2] = 0;
        local_a8[3] = 0;
        local_a8[0] = 0;
        local_a8[1] = 0;
        local_b8 = (longlong *)0x0;
        uStack_b0 = 0;
        local_c8 = (code *)0x0;
        uStack_c0 = 0;
        local_78 = 0;
        FUN_144d6e1b0(*(longlong *)(param_1 + 0xf8),&local_c8);
        cVar9 = '\x01';
        if (iStack_7c != 1) {
          cVar9 = *(char *)(param_1 + 0x100);
        }
        if ((pcVar21 != (code *)0x0) && (cVar9 != '\0')) goto LAB_143fe78ad;
      }
      goto LAB_143fe7a7f;
    }
    if (pcVar21 == (code *)0x0) goto LAB_143fe7ada;
LAB_143fe78ad:
    fVar27 = (float)(**(code **)(*param_2 + 0x350))(param_2);
    fVar28 = (float)(**(code **)(*param_2 + 0x358))(param_2);
    lVar12 = (**(code **)(*(longlong *)pcVar21 + 0x20))(pcVar21);
    if (lVar12 != 0) {
      local_dc = (int)fVar28;
      DVar24 = (DWORD)fVar27;
      LOCK();
      *(int *)(pcVar21 + 8) = *(int *)(pcVar21 + 8) + 1;
      UNLOCK();
      LOCK();
      *(int *)(pcVar21 + 8) = *(int *)(pcVar21 + 8) + 1;
      UNLOCK();
      local_d8 = pcVar21 + 8;
      lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      iVar10 = *(int *)(lVar7 + 0xc60);
      if (DAT_14c86a9fc == 0) {
        if (iVar10 != 2) {
          local_e0 = DVar24;
          if (iVar10 == 1) {
            local_cc = FUN_140ad26c0();
            DVar24 = GetCurrentThreadId();
            bVar26 = local_cc == DVar24;
          }
          else {
            bVar26 = iVar10 == 0x10;
          }
          DVar24 = local_e0;
          if (!bVar26) goto LAB_143fe7937;
        }
LAB_143fe7ea8:
        LOCK();
        *(int *)(pcVar21 + 8) = *(int *)(pcVar21 + 8) + 1;
        UNLOCK();
        local_e8 = param_7;
        local_f0 = param_6;
        local_f8 = param_5;
        local_108 = (code **)CONCAT71(local_108._1_7_,param_3);
        local_100 = param_4;
        local_c8 = pcVar21;
        FUN_148b72aee(param_1,&local_c8,DVar24,local_dc);
        pcVar22 = local_d8;
        LOCK();
        pcVar2 = pcVar6 + 8;
        uVar19 = *(uint *)pcVar2;
        *(uint *)pcVar2 = *(uint *)pcVar2 - 1;
        UNLOCK();
        if ((uVar19 & 0x3fffffff) == 1) {
          pcVar2 = pcVar6 + 8;
          LOCK();
          uVar19 = *(uint *)pcVar2;
          *(uint *)pcVar2 = *(uint *)pcVar2 | 0x40000000;
          UNLOCK();
          if ((uVar19 >> 0x1e & 1) == 0) {
            cVar5 = pcVar6[0xd];
            plVar13 = (longlong *)FUN_14001cc68(0x10,8);
            plVar13[1] = (longlong)pcVar6;
            plVar18 = DAT_14ca843c0;
            plVar17 = DAT_14ca843c8;
            if (((byte)cVar5 & 2) == 0) {
              do {
                *plVar13 = (longlong)plVar18;
                LOCK();
                bVar26 = plVar18 != DAT_14ca843c0;
                plVar17 = plVar13;
                if (bVar26) {
                  plVar18 = DAT_14ca843c0;
                  plVar17 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar17;
                UNLOCK();
              } while (bVar26);
            }
            else {
              do {
                *plVar13 = (longlong)plVar17;
                LOCK();
                bVar26 = plVar17 != DAT_14ca843c8;
                plVar18 = plVar13;
                if (bVar26) {
                  plVar17 = DAT_14ca843c8;
                  plVar18 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar18;
                UNLOCK();
              } while (bVar26);
            }
          }
        }
      }
      else {
        if (iVar10 == 0x10) goto LAB_143fe7ea8;
LAB_143fe7937:
        if (DAT_14ca9a438 == '\0') {
          if ((DAT_14c86a9f8 != '\x01') || (iVar10 = *(int *)(lVar7 + 0xc60), iVar10 == 2))
          goto LAB_143fe7ea8;
          if (iVar10 == 1) {
            local_e0 = FUN_140ad26c0();
            DVar11 = GetCurrentThreadId();
            if (local_e0 == DVar11) goto LAB_143fe7ea8;
          }
        }
        if (DAT_14ca9a43c == 0) {
          puVar3 = (undefined8 *)
                   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x308);
          puVar15 = (uint *)*puVar3;
          if (puVar15 != (uint *)0x0) goto LAB_143fe7bd0;
          while( true ) {
            uVar19 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar19 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar19 | 1;
              __tlregdtor(&LAB_143feea9b);
            }
            lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            puVar14 = *(undefined4 **)(lVar7 + 0x310);
            *(undefined8 *)(lVar7 + 0x310) = 0;
            if (puVar14 == (undefined4 *)0x0) {
              puVar14 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar14 = 0xffffffff;
            *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
            puVar14[0x12] = 0;
            *puVar3 = puVar14;
            FUN_140217a48(puVar3);
            puVar15 = (uint *)*puVar3;
LAB_143fe7bd0:
            puVar25 = (undefined8 *)(*(longlong *)(puVar15 + 0x10) + 7U & 0xfffffffffffffff8);
            puVar20 = (uint *)(puVar25 + 0x1b);
            uVar19 = puVar15[0x12];
            if (puVar20 <= puVar15 + 0x4000) break;
            while( true ) {
              *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
              LOCK();
              uVar4 = *puVar15;
              *puVar15 = *puVar15 + uVar19 + 1;
              UNLOCK();
              if ((uVar4 ^ uVar19) != 0xffffffff) break;
              puVar15 = (uint *)*puVar3;
              *puVar15 = 0xffffffff;
              *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
              puVar15[0x12] = 0;
              *puVar3 = puVar15;
              puVar25 = (undefined8 *)((longlong)puVar15 + 0x5fU & 0xfffffffffffffff8);
              puVar20 = (uint *)(puVar25 + 0x1b);
              uVar19 = 0;
              if (puVar20 <= puVar15 + 0x4000) {
                uVar19 = 1;
                goto LAB_143fe7c52;
              }
            }
          }
          uVar19 = uVar19 + 1;
LAB_143fe7c52:
          *(uint **)(puVar15 + 0x10) = puVar20;
          puVar15[0x12] = uVar19;
          iVar10 = 0;
          FUN_1447247dc(puVar25,0);
          *puVar25 = &PTR_FUN_14b5a8a80;
          puVar25[0x15] = param_1;
          puVar25[0x16] = pcVar21;
          puVar25[0x17] = lVar12;
          *(DWORD *)(puVar25 + 0x18) = DVar24;
          *(int *)((longlong)puVar25 + 0xc4) = local_dc;
          *(undefined1 *)(puVar25 + 0x19) = param_3;
          *(undefined1 *)((longlong)puVar25 + 0xc9) = param_6;
          *(undefined1 *)((longlong)puVar25 + 0xca) = param_7;
          *(undefined4 *)((longlong)puVar25 + 0xcc) = param_4;
          *(undefined4 *)(puVar25 + 0x1a) = param_5;
          if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
            uVar19 = DAT_14c7585c8 >> 10 & 3;
            if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar19 < 2) {
              uVar23 = (ulonglong)(byte)(&DAT_149e38edc)[uVar19];
              iVar10 = 0;
            }
            else {
              uVar23 = 2;
            }
          }
          else {
            iVar10 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                     *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
            uVar23 = 5;
          }
          if (*(code **)(puVar25[0xe] + 0x18) != FUN_144713626) {
            (**(code **)(puVar25[0xe] + 0x18))(puVar25 + 0xe,puVar25 + 9);
          }
          pcVar22 = local_d8;
          puVar25[0xe] = LowLevelTasks::
                         TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                         TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                         ::vftable;
          puVar25[9] = puVar25;
          puVar25[10] = puVar25;
          lVar12 = *(longlong *)
                    (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x2b8);
          if (lVar12 == 0) {
            uVar8 = 1;
            if ((char)uVar23 != '\x06') {
              uVar8 = uVar23;
            }
            uVar23 = uVar8;
            uVar16 = 0;
          }
          else {
            if ((char)uVar23 == '\x06') {
              uVar23 = *(ulonglong *)(lVar12 + 0x38) >> 0x3b;
            }
            uVar16 = *(undefined8 *)(lVar12 + 0x30);
          }
          puVar25[0xf] = uVar16;
          puVar25[0x10] = uVar23 << 0x3b | 0xc00000527800b400;
          *(int *)((longlong)puVar25 + 0x1c) = iVar10;
          if (puVar25 == (undefined8 *)0x0) {
            local_c8 = (code *)CONCAT71(local_c8._1_7_,1);
            FUN_1447439e4(0);
          }
          else {
            LOCK();
            *(int *)(puVar25 + 1) = *(int *)(puVar25 + 1) + 1;
            UNLOCK();
            local_c8 = (code *)CONCAT71(local_c8._1_7_,1);
            FUN_1447439e4(puVar25);
            LOCK();
            piVar1 = (int *)(puVar25 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*puVar25)(puVar25,1);
            }
          }
        }
        else {
          local_c8 = (code *)0x0;
          local_b8 = (longlong *)FUN_14001cc68(0x38,8);
          *local_b8 = (longlong)&PTR_LAB_14b5a8a30;
          local_b8[1] = param_1;
          local_b8[2] = (longlong)pcVar21;
          local_b8[3] = lVar12;
          *(DWORD *)(local_b8 + 4) = DVar24;
          *(int *)((longlong)local_b8 + 0x24) = local_dc;
          *(undefined1 *)(local_b8 + 5) = param_3;
          *(undefined1 *)((longlong)local_b8 + 0x29) = param_6;
          *(undefined1 *)((longlong)local_b8 + 0x2a) = param_7;
          *(undefined4 *)((longlong)local_b8 + 0x2c) = param_4;
          *(undefined4 *)(local_b8 + 6) = param_5;
          if (local_b8 + 1 != (longlong *)0x0) {
            local_c8 = FUN_143fef1e4;
          }
          local_108 = &local_c8;
          FUN_14005a792(&DAT_14ca9a440,L"BinkMediaPlayer_Draw",&DAT_14cb9e6f8);
          pcVar22 = local_d8;
          if (local_c8 != (code *)0x0) {
            plVar18 = local_b8;
            if (local_b8 == (longlong *)0x0) {
              plVar18 = local_a8;
            }
            (**(code **)(*plVar18 + 0x10))();
          }
        }
      }
      LOCK();
      uVar19 = *(uint *)pcVar22;
      *(uint *)pcVar22 = *(uint *)pcVar22 - 1;
      UNLOCK();
      if ((uVar19 & 0x3fffffff) == 1) {
        LOCK();
        uVar19 = *(uint *)pcVar22;
        *(uint *)pcVar22 = *(uint *)pcVar22 | 0x40000000;
        UNLOCK();
        if ((uVar19 >> 0x1e & 1) == 0) {
          cVar5 = pcVar21[0xd];
          plVar13 = (longlong *)FUN_14001cc68(0x10,8);
          plVar13[1] = (longlong)pcVar21;
          plVar18 = DAT_14ca843c0;
          plVar17 = DAT_14ca843c8;
          if (((byte)cVar5 & 2) == 0) {
            do {
              *plVar13 = (longlong)plVar18;
              LOCK();
              bVar26 = plVar18 != DAT_14ca843c0;
              plVar17 = plVar13;
              if (bVar26) {
                plVar18 = DAT_14ca843c0;
                plVar17 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar17;
              UNLOCK();
            } while (bVar26);
          }
          else {
            do {
              *plVar13 = (longlong)plVar17;
              LOCK();
              bVar26 = plVar17 != DAT_14ca843c8;
              plVar18 = plVar13;
              if (bVar26) {
                plVar17 = DAT_14ca843c8;
                plVar18 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar18;
              UNLOCK();
            } while (bVar26);
          }
        }
      }
      goto LAB_143fe7a7f;
    }
    (**(code **)(*param_2 + 0x318))(param_2);
  }
  LOCK();
  pcVar6 = pcVar21 + 8;
  uVar19 = *(uint *)pcVar6;
  *(uint *)pcVar6 = *(uint *)pcVar6 - 1;
  UNLOCK();
  if ((uVar19 & 0x3fffffff) == 1) {
    pcVar6 = pcVar21 + 8;
    LOCK();
    uVar19 = *(uint *)pcVar6;
    *(uint *)pcVar6 = *(uint *)pcVar6 | 0x40000000;
    UNLOCK();
    if ((uVar19 >> 0x1e & 1) == 0) {
      cVar5 = pcVar21[0xd];
      plVar13 = (longlong *)FUN_14001cc68(0x10,8);
      plVar13[1] = (longlong)pcVar21;
      plVar18 = DAT_14ca843c0;
      plVar17 = DAT_14ca843c8;
      if (((byte)cVar5 & 2) == 0) {
        do {
          *plVar13 = (longlong)plVar18;
          LOCK();
          bVar26 = plVar18 != DAT_14ca843c0;
          plVar17 = plVar13;
          if (bVar26) {
            plVar18 = DAT_14ca843c0;
            plVar17 = DAT_14ca843c0;
          }
          DAT_14ca843c0 = plVar17;
          UNLOCK();
        } while (bVar26);
      }
      else {
        do {
          *plVar13 = (longlong)plVar17;
          LOCK();
          bVar26 = plVar17 != DAT_14ca843c8;
          plVar18 = plVar13;
          if (bVar26) {
            plVar17 = DAT_14ca843c8;
            plVar18 = DAT_14ca843c8;
          }
          DAT_14ca843c8 = plVar18;
          UNLOCK();
        } while (bVar26);
      }
    }
  }
LAB_143fe7ada:
  if ((local_70 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fe8051 FUN_143fe8051 body=55 status=ok
// SIG undefined FUN_143fe8051(void)

void FUN_143fe8051(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9e590 == 0) {
    uVar1 = FUN_1418c27b3();
    DAT_14cb9e590 = FUN_14171c317(FUN_1465a0022,uVar1,L"EBinkMoviePlayerBinkBufferModes");
  }
  return;
}



// FUNCTION 143fe8088 FUN_143fe8088 body=55 status=ok
// SIG undefined FUN_143fe8088(void)

void FUN_143fe8088(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9e5a8 == 0) {
    uVar1 = FUN_1418c27b3();
    DAT_14cb9e5a8 = FUN_14171c317(FUN_1465a0051,uVar1,L"EBinkMoviePlayerBinkSoundTrack");
  }
  return;
}



// FUNCTION 143fe80bf FUN_143fe80bf body=417 status=ok
// SIG undefined FUN_143fe80bf(void)

void FUN_143fe80bf(void)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  int local_a8;
  uint local_a0;
  longlong local_98 [18];
  
  local_98[0xb] = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_148b7335a(&local_b0);
  uVar5 = (ulonglong)local_a0;
  lVar3 = local_b0;
  if ((int)local_a0 < local_a8 && -1 < (int)local_a0) {
    iVar2 = local_a8;
    do {
      lVar1 = *(longlong *)(lVar3 + (uVar5 & 0xffffffff) * 8);
      uVar4 = (uint)uVar5;
      if ((*(uint *)(lVar1 + 8) & 0x10) == 0) {
        lVar1 = *(longlong *)(lVar1 + 0xf8);
        if (lVar1 != 0) {
          local_98[8] = 0;
          local_98[9] = 0;
          local_98[6] = 0;
          local_98[7] = 0;
          local_98[4] = 0;
          local_98[5] = 0;
          local_98[2] = 0;
          local_98[3] = 0;
          local_98[0] = 0;
          local_98[1] = 0;
          local_98[10] = 0;
          FUN_144d6e1b0(lVar1,local_98);
          lVar3 = local_b0;
          uVar4 = local_a0;
        }
        FUN_148b71626(*(undefined8 *)(lVar3 + (longlong)(int)uVar4 * 8),local_98);
        lVar3 = local_b0;
        iVar2 = local_a8;
        uVar4 = local_a0;
        if (0.0 < (double)local_98[0] / 10000000.0) {
          FUN_148b71802(*(undefined8 *)(local_b0 + (longlong)(int)local_a0 * 8),local_98);
          lVar3 = local_b0;
          iVar2 = local_a8;
          uVar4 = local_a0;
        }
      }
      uVar5 = (longlong)(int)uVar4;
      do {
        uVar6 = uVar5;
        uVar5 = uVar6 + 1;
        local_a0 = (uint)uVar5;
        if ((longlong)iVar2 <= (longlong)uVar5) break;
      } while (*(longlong *)(lVar3 + uVar5 * 8) == 0);
    } while ((-2 < (longlong)uVar6) && ((int)local_a0 < iVar2));
  }
  if (lVar3 != 0) {
    FUN_1400020a8();
  }
  if ((local_98[0xb] ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143fe8261 FUN_143fe8261 body=69 status=ok
// SIG undefined FUN_143fe8261(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143fe8261(void)

{
  _DAT_14cb9e618 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143fe82a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb9e620,1);
  return;
}



// FUNCTION 143fe82a6 FUN_143fe82a6 body=3898 status=ok
// SIG undefined FUN_143fe82a6(void)

ulonglong FUN_143fe82a6(longlong param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  int iVar4;
  short *psVar5;
  uint uVar6;
  undefined1 uVar7;
  short sVar8;
  void *pvVar9;
  char cVar10;
  byte bVar11;
  undefined4 uVar12;
  int iVar13;
  DWORD DVar14;
  DWORD DVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined8 uVar18;
  longlong lVar19;
  undefined4 *puVar20;
  uint *puVar21;
  undefined1 uVar22;
  int iVar23;
  uint uVar24;
  undefined ***pppuVar25;
  ulonglong uVar26;
  int iVar27;
  code *pcVar28;
  longlong lVar29;
  size_t _Size;
  undefined8 *puVar30;
  undefined2 *puVar31;
  bool bVar32;
  undefined1 auStack_1a8 [32];
  code **local_188;
  undefined4 local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined2 *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  code **local_150;
  code *local_148;
  code *local_140;
  longlong local_130;
  longlong *local_128;
  code *local_120;
  void *local_118;
  int local_110;
  undefined4 local_10c;
  void *local_108;
  int local_100;
  undefined4 local_fc;
  longlong local_f8 [2];
  void *local_e8;
  int local_e0;
  int local_dc;
  void *local_d8;
  int local_d0;
  int local_cc;
  undefined2 *local_c8;
  int local_c0;
  undefined2 *local_b8;
  int local_b0;
  code *local_a8;
  ulonglong uStack_a0;
  undefined ***local_98;
  undefined8 uStack_90;
  undefined **local_88;
  longlong lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  cVar10 = FUN_146155cc7();
  if ((cVar10 != '\0') && (1 < (int)param_2[1])) {
    local_130 = param_1;
    if (*(longlong *)(param_1 + 0xf8) != 0) {
      local_68 = 0;
      uStack_60 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_88 = (undefined **)0x0;
      lStack_80 = 0;
      local_98 = (undefined ***)0x0;
      uStack_90 = 0;
      local_a8 = (code *)0x0;
      uStack_a0 = 0;
      local_58 = 0;
      FUN_144d6e1b0(*(longlong *)(param_1 + 0xf8),&local_a8);
      if ((uStack_60._4_4_ == 0) && (*(char *)(param_1 + 0x100) == '\0')) goto LAB_143fe8721;
      lVar29 = *(longlong *)(param_1 + 0xf8);
      if (lVar29 == 0) goto LAB_143fe8462;
      lVar19 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      iVar13 = *(int *)(lVar19 + 0xc60);
      if (DAT_14c86a9fc == 0) {
        if (iVar13 != 2) {
          if (iVar13 == 1) {
            DVar14 = FUN_140ad26c0();
            DVar15 = GetCurrentThreadId();
            bVar32 = DVar14 == DVar15;
          }
          else {
            bVar32 = iVar13 == 0x10;
          }
          param_1 = local_130;
          if (!bVar32) goto LAB_143fe83ab;
        }
LAB_143fe837a:
        FUN_144d6e160(lVar29);
      }
      else {
        if (iVar13 == 0x10) goto LAB_143fe837a;
LAB_143fe83ab:
        if (DAT_14ca9a438 == '\0') {
          if ((DAT_14c86a9f8 != '\x01') || (iVar13 = *(int *)(lVar19 + 0xc60), iVar13 == 2))
          goto LAB_143fe837a;
          if (iVar13 == 1) {
            DVar14 = FUN_140ad26c0();
            DVar15 = GetCurrentThreadId();
            if (DVar14 == DVar15) goto LAB_143fe837a;
          }
        }
        if (DAT_14ca9a43c == 0) {
          puVar3 = (undefined8 *)
                   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x308);
          puVar21 = (uint *)*puVar3;
          if (puVar21 != (uint *)0x0) goto LAB_143fe8d0b;
          do {
            uVar24 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar24 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar24 | 1;
              __tlregdtor(&LAB_143feea9b);
            }
            lVar19 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            puVar20 = *(undefined4 **)(lVar19 + 0x310);
            *(undefined8 *)(lVar19 + 0x310) = 0;
            if (puVar20 == (undefined4 *)0x0) {
              puVar20 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar20 = 0xffffffff;
            *(undefined4 **)(puVar20 + 0x10) = puVar20 + 0x16;
            puVar20[0x12] = 0;
            *puVar3 = puVar20;
            FUN_140217a48(puVar3);
            puVar21 = (uint *)*puVar3;
LAB_143fe8d0b:
            uVar26 = *(longlong *)(puVar21 + 0x10) + 7;
            uVar24 = puVar21[0x12];
            while( true ) {
              puVar30 = (undefined8 *)(uVar26 & 0xfffffffffffffff8);
              if (puVar30 + 0x16 <= puVar21 + 0x4000) {
                *(undefined8 **)(puVar21 + 0x10) = puVar30 + 0x16;
                puVar21[0x12] = uVar24 + 1;
                iVar13 = 0;
                FUN_1447247dc(puVar30,0);
                *puVar30 = &PTR_FUN_14b5a8950;
                puVar30[0x15] = lVar29;
                if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                  uVar24 = DAT_14c7585c8 >> 10 & 3;
                  if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar24 < 2) {
                    uVar26 = (ulonglong)(byte)(&DAT_149e38edc)[uVar24];
                    iVar13 = 0;
                  }
                  else {
                    uVar26 = 2;
                  }
                }
                else {
                  iVar13 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                           *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                  uVar26 = 5;
                }
                if (*(code **)(puVar30[0xe] + 0x18) != FUN_144713626) {
                  (**(code **)(puVar30[0xe] + 0x18))(puVar30 + 0xe,puVar30 + 9);
                }
                puVar30[0xe] = LowLevelTasks::
                               TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                               TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                               ::vftable;
                puVar30[9] = puVar30;
                puVar30[10] = puVar30;
                lVar29 = *(longlong *)
                          (*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x2b8);
                if (lVar29 == 0) {
                  uVar2 = 1;
                  if ((char)uVar26 != '\x06') {
                    uVar2 = uVar26;
                  }
                  uVar26 = uVar2;
                  uVar18 = 0;
                }
                else {
                  if ((char)uVar26 == '\x06') {
                    uVar26 = *(ulonglong *)(lVar29 + 0x38) >> 0x3b;
                  }
                  uVar18 = *(undefined8 *)(lVar29 + 0x30);
                }
                puVar30[0xf] = uVar18;
                puVar30[0x10] = uVar26 << 0x3b | 0xc00000527800b400;
                *(int *)((longlong)puVar30 + 0x1c) = iVar13;
                if (puVar30 == (undefined8 *)0x0) {
                  local_a8 = (code *)CONCAT71(local_a8._1_7_,1);
                  FUN_1447439e4(0);
                }
                else {
                  LOCK();
                  *(int *)(puVar30 + 1) = *(int *)(puVar30 + 1) + 1;
                  UNLOCK();
                  local_a8 = (code *)CONCAT71(local_a8._1_7_,1);
                  FUN_1447439e4(puVar30);
                  LOCK();
                  piVar1 = (int *)(puVar30 + 1);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)*puVar30)(puVar30,1);
                  }
                }
                goto LAB_143fe8456;
              }
              *(uint **)(puVar21 + 0x10) = puVar21 + 0x4000;
              LOCK();
              uVar6 = *puVar21;
              *puVar21 = *puVar21 + uVar24 + 1;
              UNLOCK();
              if ((uVar6 ^ uVar24) != 0xffffffff) break;
              puVar21 = (uint *)*puVar3;
              *puVar21 = 0xffffffff;
              *(uint **)(puVar21 + 0x10) = puVar21 + 0x16;
              puVar21[0x12] = 0;
              *puVar3 = puVar21;
              uVar26 = (longlong)puVar21 + 0x5f;
              uVar24 = 0;
            }
          } while( true );
        }
        local_98 = (undefined ***)0x0;
        local_88 = &PTR_LAB_14b5a88f0;
        local_a8 = (code *)&LAB_143feea60;
        local_188 = &local_a8;
        lStack_80 = lVar29;
        FUN_14005a792(&DAT_14ca9a440,L"BinkMediaPlayer_Open_CloseBink",&DAT_14cb9e6cc);
        if (local_a8 != (code *)0x0) {
          pppuVar25 = local_98;
          if (local_98 == (undefined ***)0x0) {
            pppuVar25 = &local_88;
          }
          (*(code *)(*pppuVar25)[2])();
        }
      }
LAB_143fe8456:
      *(undefined8 *)(param_1 + 0xf8) = 0;
    }
LAB_143fe8462:
    uVar26 = 2;
    if ((DAT_14cb259f8 != 0) && (DAT_14cb25ab0 == '\x01')) {
      AK::SoundEngine::GetSpeakerConfiguration((__uint64)&local_a8);
      uVar26 = (ulonglong)local_a8 & 0xff;
    }
    FUN_144d6ea40(uVar26);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14caced84) && (FUN_144b3d300(&DAT_14caced84), DAT_14caced84 == -1)) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      cVar10 = FUN_14054d46e(&DAT_14c846b20,L"nosound");
      if (cVar10 == '\0') {
        DAT_14caced80 = 0;
      }
      else {
        if (DAT_14c846b14 == '\0') {
          FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                        L"Attempting to get the command line but it hasn\'t been initialized yet.");
        }
        bVar11 = FUN_14054d46e(&DAT_14c846b20,L"enablesound");
        DAT_14caced80 = bVar11 ^ 1;
      }
      _Init_thread_footer(&DAT_14caced84);
      param_1 = local_130;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14caced8c) && (FUN_144b3d300(&DAT_14caced8c), DAT_14caced8c == -1)) {
      DAT_14caced88 = 1;
      if (DAT_14c866ff0 == '\0') {
        if (DAT_14c872bf0 == '\x01') {
          DAT_14caced88 = DAT_14c872bc0 ^ 1;
        }
        else {
          DAT_14caced88 = 0;
        }
      }
      _Init_thread_footer(&DAT_14caced8c);
      param_1 = local_130;
    }
    if ((DAT_14caced88 == 0) && ((DAT_14caced80 & 1) == 0)) {
      if (*(char *)(param_1 + 0xa9) != '\0') {
        local_188 = (code **)CONCAT44(local_188._4_4_,1);
        FUN_140807d8e(param_2,&local_a8,L".bk2",&DAT_149dfb77a);
        cVar10 = FUN_144a38768(&local_a8,&DAT_14b5a8038,3,1);
        uVar22 = 3;
        if (cVar10 == '\0') {
          cVar10 = FUN_144a38768(&local_a8,L"_51L",4,1);
          uVar22 = 4;
          if (cVar10 != '\0') goto LAB_143fe85c3;
          cVar10 = FUN_144a38768(&local_a8,&DAT_14b5a8040,3,1);
          uVar22 = 5;
          if (cVar10 != '\0') goto LAB_143fe85c3;
          cVar10 = FUN_144a38768(&local_a8,L"_71L",4,1);
          uVar22 = 6;
          if (cVar10 != '\0') goto LAB_143fe85c3;
        }
        else {
LAB_143fe85c3:
          *(undefined1 *)(param_1 + 0xa9) = uVar22;
        }
        if (local_a8 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
    }
    else {
      *(undefined1 *)(param_1 + 0xa9) = 0;
    }
    if (*(int *)(param_1 + 0xac) == 0) {
      if (DAT_14cb253f8 == (longlong *)0x0) {
        local_150 = &local_a8;
        local_a8 = FUN_1449e2820;
        local_140 = FUN_14081d0ea;
        local_148 = FUN_14081d0ea;
        local_158 = &LAB_147f6f09d;
        local_160 = &LAB_146201c25;
        local_168 = &DAT_149e063b2;
        local_170 = 0;
        local_178 = 0x10000006;
        local_180 = 8;
        local_188 = (code **)CONCAT44(local_188._4_4_,0x480);
        FUN_14081cfa3(L"/Script/GbxAudio",L"GbxAudioSettings",&DAT_14cb253f8,&DAT_147f6f09c);
      }
      plVar16 = DAT_14cb253f8;
      lVar29 = DAT_14cb253f8[0x22];
      if (lVar29 == 0) {
        (**(code **)(*DAT_14cb253f8 + 1000))(DAT_14cb253f8);
        lVar29 = plVar16[0x22];
        if (lVar29 == 0) goto LAB_143fe8637;
      }
      uVar12 = FUN_146448ac0(lVar29,param_2);
      *(undefined4 *)(param_1 + 0xac) = uVar12;
    }
LAB_143fe8637:
    plVar16 = (longlong *)FUN_1400dbadc();
    local_128 = (longlong *)*plVar16;
    if (local_128 == (longlong *)0x0) {
      local_128 = (longlong *)FUN_140e92164();
      *plVar16 = (longlong)local_128;
    }
    plVar17 = (longlong *)FUN_1400dbadc();
    plVar16 = (longlong *)*plVar17;
    if (plVar16 == (longlong *)0x0) {
      plVar16 = (longlong *)FUN_140e92164();
      *plVar17 = (longlong)plVar16;
    }
    if ((int)param_2[1] == 0) {
      puVar31 = &DAT_149dfb77a;
    }
    else {
      puVar31 = (undefined2 *)*param_2;
    }
    cVar10 = (**(code **)(*plVar16 + 0x78))(plVar16,puVar31);
    if (cVar10 != '\0') {
      puVar31 = &DAT_149dfb77a;
      if ((int)param_2[1] != 0) {
        puVar31 = (undefined2 *)*param_2;
      }
      uVar22 = *(undefined1 *)(param_1 + 0xa8);
      uVar12 = *(undefined4 *)(param_1 + 0xac);
      uVar7 = *(undefined1 *)(param_1 + 0xa9);
      (**(code **)(*local_128 + 0x1f0))(local_128,&local_a8,puVar31);
      pcVar28 = (code *)&DAT_149dfb77a;
      if ((int)uStack_a0 != 0) {
        pcVar28 = local_a8;
      }
      local_188 = (code **)0x0;
      uVar18 = thunk_FUN_144d6ffd0(pcVar28,uVar7,uVar12,uVar22);
      param_1 = local_130;
      *(undefined8 *)(local_130 + 0xf8) = uVar18;
      if (local_a8 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    if (*(longlong *)(param_1 + 0xf8) != 0) {
      lVar19 = FUN_140d5712e();
      lVar29 = *(longlong *)(lVar19 + 0x28);
      plVar16 = *(longlong **)(lVar19 + 0x30);
      if (plVar16 == (longlong *)0x0) {
        FUN_1406dbdc2(*(undefined8 *)(lVar19 + 0x20),&local_a8,lVar29 + 0x28);
      }
      else {
        LOCK();
        *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
        UNLOCK();
        FUN_1406dbdc2(*(undefined8 *)(lVar19 + 0x20),&local_a8,lVar29 + 0x28);
        LOCK();
        plVar17 = plVar16 + 1;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)*plVar17 == 0) {
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
      *(undefined4 *)(param_1 + 0xd8) = 0;
      if ((longlong)(int)uStack_a0 != 0) {
        local_120 = local_a8 + (longlong)(int)uStack_a0 * 0x10;
        pcVar28 = local_a8;
        do {
          iVar13 = (int)param_2[1];
          uVar26 = (longlong)iVar13 * 2;
          do {
            iVar27 = -1;
            if (uVar26 == 0) goto LAB_143fe88d2;
            uVar2 = uVar26 - 2;
            psVar5 = (short *)(*param_2 + -2 + uVar26);
            uVar26 = uVar2;
          } while (*psVar5 != 0x2e);
          iVar23 = (int)(uVar2 >> 1);
          if (iVar23 != -1) {
            iVar27 = iVar13 + -1;
            if (iVar13 == 0) {
              iVar27 = 0;
            }
            uVar26 = (longlong)iVar27 * 2;
            do {
              iVar27 = iVar23;
              if (uVar26 == 0) goto LAB_143fe88d2;
              sVar8 = *(short *)(*param_2 + -2 + uVar26);
              uVar26 = uVar26 - 2;
            } while ((sVar8 != 0x5c) && (sVar8 != 0x2f));
            iVar13 = (int)(uVar26 >> 1);
            if (iVar23 < iVar13) {
              iVar27 = -1;
            }
            if (iVar13 == -1) {
              iVar27 = iVar23;
            }
          }
LAB_143fe88d2:
          FUN_1400b22c2(&local_c8,&DAT_14b5a8048);
          FUN_1400b22c2(local_f8,L"_Common");
          if (iVar27 == -1) {
            local_108 = (void *)0x0;
            local_100 = (int)param_2[1];
            lVar29 = (longlong)local_100;
            pvVar9 = (void *)*param_2;
            if (lVar29 == 0) {
              local_fc = 0;
              param_1 = local_130;
            }
            else {
              FUN_1446dd670(&local_108,local_100,0);
              memcpy(local_108,pvVar9,lVar29 * 2);
              param_1 = local_130;
            }
          }
          else {
            puVar31 = &DAT_149dfb77a;
            iVar13 = (int)param_2[1] + -1;
            if ((int)param_2[1] == 0) {
              iVar13 = 0;
            }
            else {
              puVar31 = (undefined2 *)*param_2;
            }
            if (iVar27 < iVar13) {
              iVar13 = iVar27;
            }
            if (iVar13 < 1) {
              iVar13 = 0;
            }
            FUN_14006620a(&local_108,puVar31,iVar13);
          }
          FUN_1407ec8fc(&local_e8,&local_108,local_f8);
          iVar27 = local_dc;
          iVar13 = local_e0;
          if (local_e0 < 2) {
            local_d8 = (void *)0x0;
            local_d0 = *(int *)(pcVar28 + 8);
            lVar29 = (longlong)local_d0;
            pvVar9 = *(void **)pcVar28;
            if (lVar29 == 0) {
              local_cc = 0;
              param_1 = local_130;
            }
            else {
              FUN_1446dd670(&local_d8,local_d0,0);
              memcpy(local_d8,pvVar9,lVar29 * 2);
              param_1 = local_130;
            }
          }
          else {
            iVar23 = *(int *)(pcVar28 + 8) + -1;
            if (*(int *)(pcVar28 + 8) == 0) {
              iVar23 = 0;
            }
            local_d8 = local_e8;
            local_e8 = (void *)0x0;
            local_d0 = local_e0;
            local_cc = local_dc;
            local_e0 = 0;
            local_dc = 0;
            iVar4 = iVar23 + iVar13;
            if (iVar4 < iVar13) {
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4((longlong)iVar23);
            }
            if (iVar27 < iVar4) {
              FUN_1446f8c06(&local_d8);
            }
            FUN_1400020e8(&local_d8,*(undefined8 *)pcVar28,iVar23);
          }
          FUN_1401c7f3e(&local_b8,&local_d8,&local_c8);
          if (local_d8 != (void *)0x0) {
            FUN_1400020a8();
          }
          if (local_e8 != (void *)0x0) {
            FUN_1400020a8();
          }
          if (local_108 != (void *)0x0) {
            FUN_1400020a8();
          }
          if (local_f8[0] != 0) {
            FUN_1400020a8();
          }
          if (local_c8 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          plVar17 = (longlong *)FUN_1400dbadc();
          plVar16 = (longlong *)*plVar17;
          if (plVar16 == (longlong *)0x0) {
            plVar16 = (longlong *)FUN_140e92164();
            *plVar17 = (longlong)plVar16;
          }
          puVar31 = &DAT_149dfb77a;
          if (local_b0 != 0) {
            puVar31 = local_b8;
          }
          cVar10 = (**(code **)(*plVar16 + 0x78))(plVar16,puVar31);
          if (cVar10 != '\0') {
            puVar31 = &DAT_149dfb77a;
            if (local_b0 != 0) {
              puVar31 = local_b8;
            }
            (**(code **)(*local_128 + 0x1f0))(local_128,&local_c8,puVar31);
            puVar31 = &DAT_149dfb77a;
            if (local_c0 != 0) {
              puVar31 = local_c8;
            }
            iVar13 = FUN_144d6ea70(*(undefined8 *)(param_1 + 0xf8),puVar31);
            if (local_c8 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            if (iVar13 != 0) {
              *(undefined4 *)(param_1 + 0xd8) = 1;
              if (local_b8 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              break;
            }
          }
          if (local_b8 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          pcVar28 = pcVar28 + 0x10;
        } while (pcVar28 != local_120);
      }
      FUN_1447a1747(local_a8,uStack_a0 & 0xffffffff);
      if (local_a8 != (code *)0x0) {
        FUN_1400020a8();
      }
      *(undefined2 *)(param_1 + 0x100) = 0;
      local_118 = (void *)0x0;
      local_110 = (int)param_2[1];
      lVar29 = (longlong)local_110;
      pvVar9 = (void *)*param_2;
      if (lVar29 == 0) {
        local_10c = 0;
        _Size = 0;
      }
      else {
        FUN_1446dd670(&local_118,local_110,0);
        _Size = lVar29 * 2;
        memcpy(local_118,pvVar9,_Size);
      }
      FUN_148b7285c(param_1,&local_118);
      lVar29 = FUN_140ce13fe();
      uVar26 = CONCAT71((int7)(_Size >> 8),1);
      if (lVar29 != 0) {
        FUN_144d6e7f0(*(undefined8 *)(param_1 + 0xf8),*(undefined4 *)(lVar29 + 0x48));
      }
      goto LAB_143fe8723;
    }
  }
LAB_143fe8721:
  uVar26 = 0;
LAB_143fe8723:
  if ((local_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar26 & 0xffffffff;
}



// FUNCTION 143fe91e2 FUN_143fe91e2 body=2350 status=ok
// SIG undefined FUN_143fe91e2(void)

/* WARNING: Removing unreachable block (ram,0x000143fe949c) */

void FUN_143fe91e2(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_138 [32];
  undefined1 **local_118;
  undefined8 local_110;
  float fStack_108;
  float fStack_104;
  float local_100;
  float fStack_fc;
  double local_f8;
  double local_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 *local_88;
  undefined8 local_80;
  undefined ***local_78;
  undefined **local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  float fStack_58;
  float fStack_54;
  undefined8 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((*(longlong *)(param_1 + 0xd0) != 0) && (*(char *)(param_1 + 0xd9) == '\0')) {
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_98 = 0;
    FUN_144d6e1b0(*(longlong *)(param_1 + 0xd0),&local_e8);
    if ((uStack_a0._4_4_ != 0) || (*(char *)(param_1 + 0xd8) != '\0')) {
      if (*(longlong *)(param_1 + 0xd0) != 0) {
        local_a8 = 0;
        uStack_a0 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_c8 = 0;
        uStack_c0 = 0;
        local_d8 = 0;
        uStack_d0 = 0;
        local_e8 = 0;
        uStack_e0 = 0;
        local_98 = 0;
        FUN_144d6e1b0(*(longlong *)(param_1 + 0xd0),&local_e8);
        if ((uStack_a0._4_4_ == 1) || (*(char *)(param_1 + 0xd8) != '\0')) goto LAB_143fe9300;
        if (*(longlong *)(param_1 + 0xd0) != 0) {
          local_a8 = 0;
          uStack_a0 = 0;
          local_b8 = 0;
          uStack_b0 = 0;
          local_c8 = 0;
          uStack_c0 = 0;
          local_d8 = 0;
          uStack_d0 = 0;
          local_e8 = 0;
          uStack_e0 = 0;
          local_98 = 0;
          FUN_144d6e1b0(*(longlong *)(param_1 + 0xd0),&local_e8);
          if ((uStack_a0._4_4_ < 3) && (uStack_c0._4_4_ == 0)) goto LAB_143fe9300;
        }
      }
      FUN_1447cd2ec(param_1 + 0x28,0);
      *(undefined1 *)(param_1 + 0xd9) = 1;
    }
  }
LAB_143fe9300:
  if ((DAT_14cb0d2b0 == 0 || *(longlong *)(param_1 + 0xd0) == 0) ||
     (*(longlong *)(DAT_14cb0d2b0 + 0xc20) == 0)) goto LAB_143fe9758;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_98 = 0;
  FUN_144d6e1b0(*(longlong *)(param_1 + 0xd0),&local_e8);
  if ((uStack_a0._4_4_ != 0) || (*(char *)(param_1 + 0xd8) != '\0')) {
    if (*(longlong *)(param_1 + 0xd0) == 0) goto LAB_143fe9758;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_98 = 0;
    FUN_144d6e1b0(*(longlong *)(param_1 + 0xd0),&local_e8);
    if ((uStack_a0._4_4_ != 1) && (*(char *)(param_1 + 0xd8) == '\0')) goto LAB_143fe9758;
  }
  FUN_14039c14e(*(undefined8 *)(DAT_14cb0d2b0 + 0xc20),&local_f8);
  if (*(int *)(param_1 + 0xb0) == 1) {
    local_e8 = 0;
    uStack_e0 = 0;
    local_110 = local_110 & 0xffffffff00000000;
    lVar9 = FUN_144d6eae0(*(undefined8 *)(param_1 + 0xd0));
    if (lVar9 != 0) {
      do {
        FUN_142746448(&local_88,lVar9);
        uVar15 = uStack_e0;
        lVar9 = (longlong)(int)uStack_e0;
        uVar5 = (int)uStack_e0 + 1;
        uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar5);
        if (uStack_e0._4_4_ < uVar5) {
          FUN_1447a1bd6(&local_e8,uVar15 & 0xffffffff);
        }
        lVar9 = lVar9 * 0x10;
        *(undefined8 *)(local_e8 + lVar9) = 0;
        *(undefined1 **)(local_e8 + lVar9) = local_88;
        *(undefined4 *)(local_e8 + 8 + lVar9) = (undefined4)local_80;
        *(undefined4 *)(local_e8 + 0xc + lVar9) = local_80._4_4_;
        local_80 = 0;
        local_88 = (undefined1 *)0x0;
        lVar9 = FUN_144d6eae0(*(undefined8 *)(param_1 + 0xd0),&local_110);
      } while (lVar9 != 0);
    }
    uVar10 = FUN_1415b2342();
    FUN_147d68a02(uVar10,param_1 + -0x28,&local_e8);
    FUN_1447a1747(local_e8,uStack_e0 & 0xffffffff);
    if (local_e8 != 0) {
      FUN_1400020a8();
    }
  }
  if (*(char *)(param_1 + 0x88) == '\0') goto LAB_143fe9758;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_98 = 0;
  FUN_144d6e1b0(*(undefined8 *)(param_1 + 0xd0),&local_e8);
  if (*(char *)(param_1 + 0x88) == '\x01') {
    fVar18 = (float)((double)(int)local_d8 / local_f8);
    fVar17 = (float)((double)local_d8._4_4_ / local_f0);
    fStack_fc = 1.0;
    local_100 = (float)(-(uint)(fVar17 < fVar18) & 0x3f800000 |
                       ~-(uint)(fVar17 < fVar18) & (uint)(fVar18 / fVar17));
    if (fVar17 < fVar18) {
      fStack_fc = fVar17 / fVar18;
    }
    fStack_108 = (1.0 - local_100) * 0.5;
    fStack_104 = (1.0 - fStack_fc) * 0.5;
    local_100 = local_100 + fStack_108;
    fStack_fc = fStack_fc + fStack_104;
  }
  else if (*(char *)(param_1 + 0x88) == '\x02') {
    fStack_108 = (float)((local_f8 - (double)(int)local_d8) / (local_f8 + local_f8));
    fStack_104 = (float)((local_f0 - (double)local_d8._4_4_) / (local_f0 + local_f0));
    local_100 = (float)((double)fStack_108 + (double)(int)local_d8 / local_f8);
    fStack_fc = (float)((double)fStack_104 + (double)local_d8._4_4_ / local_f0);
  }
  else {
    fStack_fc = (float)*(double *)(param_1 + 0x68);
    local_100 = (float)*(double *)(param_1 + 0x60);
    fStack_104 = (float)*(double *)(param_1 + 0x58);
    fStack_108 = (float)*(double *)(param_1 + 0x50);
  }
  local_110 = *(ulonglong *)(param_1 + 0xd0);
  lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar9 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_143fe967e;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_143fe9683;
      goto LAB_143fe96ad;
    }
  }
  else {
LAB_143fe967e:
    if (iVar6 != 0x10) {
LAB_143fe96ad:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar9 + 0xc60), iVar6 == 2))
        goto LAB_143fe9683;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_143fe9683;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar12 = (uint *)*puVar2;
        if (puVar12 != (uint *)0x0) goto LAB_143fe9825;
        while( true ) {
          uVar5 = *(uint *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x318);
          if ((uVar5 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar5 | 1;
            __tlregdtor(&LAB_143feea9b);
          }
          lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar11 = *(undefined4 **)(lVar9 + 0x310);
          *(undefined8 *)(lVar9 + 0x310) = 0;
          if (puVar11 == (undefined4 *)0x0) {
            puVar11 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar11 = 0xffffffff;
          *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
          puVar11[0x12] = 0;
          *puVar2 = puVar11;
          FUN_140217a48(puVar2);
          puVar12 = (uint *)*puVar2;
LAB_143fe9825:
          puVar16 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar16 + 0x18);
          uVar5 = puVar12[0x12];
          if (puVar14 <= puVar12 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
            LOCK();
            uVar3 = *puVar12;
            *puVar12 = *puVar12 + uVar5 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar5) != 0xffffffff) break;
            puVar12 = (uint *)*puVar2;
            *puVar12 = 0xffffffff;
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
            puVar12[0x12] = 0;
            *puVar2 = puVar12;
            puVar16 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(puVar16 + 0x18);
            uVar5 = 0;
            if (puVar14 <= puVar12 + 0x4000) {
              uVar5 = 1;
              goto LAB_143fe98a5;
            }
          }
        }
        uVar5 = uVar5 + 1;
LAB_143fe98a5:
        *(uint **)(puVar12 + 0x10) = puVar14;
        puVar12[0x12] = uVar5;
        iVar6 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14b5a8a18;
        *(undefined4 *)(puVar16 + 0x15) = (undefined4)local_110;
        *(undefined4 *)((longlong)puVar16 + 0xac) = local_110._4_4_;
        *(float *)(puVar16 + 0x16) = fStack_108;
        *(float *)((longlong)puVar16 + 0xb4) = fStack_104;
        puVar16[0x17] = CONCAT44(fStack_fc,local_100);
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar5 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar5 < 2) {
            uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar5];
            iVar6 = 0;
          }
          else {
            uVar15 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar15 = 5;
        }
        if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
        }
        puVar16[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar16[9] = puVar16;
        puVar16[10] = puVar16;
        lVar9 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar9 == 0) {
          uVar4 = 1;
          if ((char)uVar15 != '\x06') {
            uVar4 = uVar15;
          }
          uVar15 = uVar4;
          uVar10 = 0;
        }
        else {
          if ((char)uVar15 == '\x06') {
            uVar15 = *(ulonglong *)(lVar9 + 0x38) >> 0x3b;
          }
          uVar10 = *(undefined8 *)(lVar9 + 0x30);
        }
        puVar16[0xf] = uVar10;
        puVar16[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar16 + 0x1c) = iVar6;
        if (puVar16 == (undefined8 *)0x0) {
          local_88 = (undefined1 *)CONCAT71(local_88._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          local_88 = (undefined1 *)CONCAT71(local_88._1_7_,1);
          FUN_1447439e4(puVar16);
          LOCK();
          piVar1 = (int *)(puVar16 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar16)(puVar16,1);
          }
        }
      }
      else {
        local_118 = &local_88;
        local_78 = (undefined ***)0x0;
        local_68 = &PTR_LAB_14b5a89d0;
        local_60 = (undefined4)local_110;
        uStack_5c = local_110._4_4_;
        fStack_58 = fStack_108;
        fStack_54 = fStack_104;
        local_50 = CONCAT44(fStack_fc,local_100);
        local_88 = &LAB_143fef034;
        FUN_14005a792(&DAT_14ca9a440,L"BinkScheduleOverlay",&DAT_14cb9e6f4);
        if (local_88 != (undefined1 *)0x0) {
          pppuVar13 = local_78;
          if (local_78 == (undefined ***)0x0) {
            pppuVar13 = &local_68;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_143fe9758;
    }
  }
LAB_143fe9683:
  FUN_143feedee(&local_110);
LAB_143fe9758:
  if ((local_40 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143fe9b12 FUN_143fe9b12 body=1945 status=ok
// SIG undefined FUN_143fe9b12(void)

void FUN_143fe9b12(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined4 *puVar13;
  uint *puVar14;
  undefined8 uVar15;
  longlong *plVar16;
  undefined ***pppuVar17;
  uint *puVar18;
  uint uVar19;
  undefined8 *puVar20;
  uint uVar21;
  ulonglong uVar22;
  bool bVar23;
  float fVar24;
  undefined1 auStack_d8 [32];
  undefined1 **local_b8;
  longlong local_b0;
  undefined8 uStack_a8;
  uint uStack_a0;
  uint uStack_9c;
  undefined1 *local_98 [2];
  undefined ***local_88;
  undefined **local_78;
  longlong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  uint uStack_60;
  uint uStack_5c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  fVar24 = (float)(**(code **)(**(longlong **)(param_1 + 0x88) + 0x350))();
  uVar21 = 8;
  uVar19 = 8;
  if (0.0 < fVar24) {
    fVar24 = (float)(**(code **)(**(longlong **)(param_1 + 0x88) + 0x350))();
    uVar19 = (int)fVar24 + 7U & 0xfffffff8;
  }
  fVar24 = (float)(**(code **)(**(longlong **)(param_1 + 0x88) + 0x358))();
  if (0.0 < fVar24) {
    fVar24 = (float)(**(code **)(**(longlong **)(param_1 + 0x88) + 0x358))();
    uVar21 = (int)fVar24 + 7U & 0xfffffff8;
  }
  lVar4 = *(longlong *)(param_1 + 0x58);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  lVar5 = *(longlong *)(param_1 + 0x10);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar6 + 0xc60);
  local_b0 = lVar4;
  uStack_a8 = lVar5;
  uStack_a0 = uVar19;
  uStack_9c = uVar21;
  if (DAT_14c86a9fc == 0) {
    if (iVar8 != 2) {
      if (iVar8 != 1) goto LAB_143fe9c0b;
      DVar9 = FUN_140ad26c0();
      DVar10 = GetCurrentThreadId();
      if (DVar9 == DVar10) goto LAB_143fe9c10;
      goto LAB_143fe9c41;
    }
  }
  else {
LAB_143fe9c0b:
    if (iVar8 != 0x10) {
LAB_143fe9c41:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar8 = *(int *)(lVar6 + 0xc60), iVar8 == 2))
        goto LAB_143fe9c10;
        if (iVar8 == 1) {
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          if (DVar9 == DVar10) goto LAB_143fe9c10;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar14 = (uint *)*puVar2;
        if (puVar14 != (uint *)0x0) goto LAB_143fe9f3f;
        while( true ) {
          uVar19 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar19 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar19 | 1;
            __tlregdtor(&LAB_143feea9b);
          }
          lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar13 = *(undefined4 **)(lVar6 + 0x310);
          *(undefined8 *)(lVar6 + 0x310) = 0;
          if (puVar13 == (undefined4 *)0x0) {
            puVar13 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar13 = 0xffffffff;
          *(undefined4 **)(puVar13 + 0x10) = puVar13 + 0x16;
          puVar13[0x12] = 0;
          *puVar2 = puVar13;
          FUN_140217a48(puVar2);
          puVar14 = (uint *)*puVar2;
LAB_143fe9f3f:
          puVar20 = (undefined8 *)(*(longlong *)(puVar14 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar18 = (uint *)(puVar20 + 0x18);
          uVar19 = puVar14[0x12];
          if (puVar18 <= puVar14 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar14 + 0x10) = puVar14 + 0x4000;
            LOCK();
            uVar21 = *puVar14;
            *puVar14 = *puVar14 + uVar19 + 1;
            UNLOCK();
            if ((uVar21 ^ uVar19) != 0xffffffff) break;
            puVar14 = (uint *)*puVar2;
            *puVar14 = 0xffffffff;
            *(uint **)(puVar14 + 0x10) = puVar14 + 0x16;
            puVar14[0x12] = 0;
            *puVar2 = puVar14;
            puVar20 = (undefined8 *)((longlong)puVar14 + 0x5fU & 0xfffffffffffffff8);
            puVar18 = (uint *)(puVar20 + 0x18);
            uVar19 = 0;
            if (puVar18 <= puVar14 + 0x4000) {
              uVar19 = 1;
              goto LAB_143fe9fbf;
            }
          }
        }
        uVar19 = uVar19 + 1;
LAB_143fe9fbf:
        *(uint **)(puVar14 + 0x10) = puVar18;
        puVar14[0x12] = uVar19;
        iVar8 = 0;
        FUN_1447247dc(puVar20,0);
        *puVar20 = &PTR_FUN_14b5a8b20;
        puVar20[0x15] = local_b0;
        local_b0 = 0;
        puVar20[0x16] = uStack_a8;
        uStack_a8 = 0;
        puVar20[0x17] = CONCAT44(uStack_9c,uStack_a0);
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar19 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar19 < 2) {
            uVar22 = (ulonglong)(byte)(&DAT_149e38edc)[uVar19];
          }
          else {
            uVar22 = 2;
          }
        }
        else {
          iVar8 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar22 = 5;
        }
        if (*(code **)(puVar20[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar20[0xe] + 0x18))(puVar20 + 0xe,puVar20 + 9);
        }
        puVar20[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar20[9] = puVar20;
        puVar20[10] = puVar20;
        lVar6 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar6 == 0) {
          uVar7 = 1;
          if ((char)uVar22 != '\x06') {
            uVar7 = uVar22;
          }
          uVar22 = uVar7;
          uVar15 = 0;
        }
        else {
          if ((char)uVar22 == '\x06') {
            uVar22 = *(ulonglong *)(lVar6 + 0x38) >> 0x3b;
          }
          uVar15 = *(undefined8 *)(lVar6 + 0x30);
        }
        puVar20[0xf] = uVar15;
        puVar20[0x10] = uVar22 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar20 + 0x1c) = iVar8;
        if (puVar20 == (undefined8 *)0x0) {
          local_98[0] = (undefined1 *)CONCAT71(local_98[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
          UNLOCK();
          local_98[0] = (undefined1 *)CONCAT71(local_98[0]._1_7_,1);
          FUN_1447439e4(puVar20);
          LOCK();
          piVar1 = (int *)(puVar20 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar20)(puVar20,1);
          }
        }
      }
      else {
        local_b8 = local_98;
        local_88 = (undefined ***)0x0;
        local_78 = &PTR_LAB_14b5a8b00;
        local_70 = local_b0;
        local_68 = (undefined4)uStack_a8;
        uStack_64 = uStack_a8._4_4_;
        local_b0 = 0;
        uStack_a8 = 0;
        uStack_60 = uStack_a0;
        uStack_5c = uStack_9c;
        local_98[0] = &LAB_143fefb38;
        FUN_14005a792(&DAT_14ca9a440,L"BinkMediaPlayer_Draw",&DAT_14cb9e6fc);
        if (local_98[0] != (undefined1 *)0x0) {
          pppuVar17 = local_88;
          if (local_88 == (undefined ***)0x0) {
            pppuVar17 = &local_78;
          }
          (*(code *)(*pppuVar17)[2])();
        }
      }
      goto LAB_143fe9cee;
    }
  }
LAB_143fe9c10:
  FUN_143fef5b0(&local_b0,&DAT_14ca85100);
LAB_143fe9cee:
  lVar6 = uStack_a8;
  if (uStack_a8 != 0) {
    LOCK();
    puVar14 = (uint *)(uStack_a8 + 8);
    uVar19 = *puVar14;
    *puVar14 = *puVar14 - 1;
    UNLOCK();
    if ((uVar19 & 0x3fffffff) == 1) {
      puVar14 = (uint *)(uStack_a8 + 8);
      LOCK();
      uVar19 = *puVar14;
      *puVar14 = *puVar14 | 0x40000000;
      UNLOCK();
      if ((uVar19 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(uStack_a8 + 0xd);
        plVar11 = (longlong *)FUN_14001cc68(0x10,8);
        plVar11[1] = lVar6;
        plVar16 = DAT_14ca843c0;
        plVar12 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar11 = (longlong)plVar16;
            LOCK();
            bVar23 = plVar16 != DAT_14ca843c0;
            plVar12 = plVar11;
            if (bVar23) {
              plVar16 = DAT_14ca843c0;
              plVar12 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar12;
            UNLOCK();
          } while (bVar23);
        }
        else {
          do {
            *plVar11 = (longlong)plVar12;
            LOCK();
            bVar23 = plVar12 != DAT_14ca843c8;
            plVar16 = plVar11;
            if (bVar23) {
              plVar12 = DAT_14ca843c8;
              plVar16 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar16;
            UNLOCK();
          } while (bVar23);
        }
      }
    }
  }
  lVar6 = local_b0;
  if (local_b0 != 0) {
    LOCK();
    puVar14 = (uint *)(local_b0 + 8);
    uVar19 = *puVar14;
    *puVar14 = *puVar14 - 1;
    UNLOCK();
    if ((uVar19 & 0x3fffffff) == 1) {
      puVar14 = (uint *)(local_b0 + 8);
      LOCK();
      uVar19 = *puVar14;
      *puVar14 = *puVar14 | 0x40000000;
      UNLOCK();
      if ((uVar19 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_b0 + 0xd);
        plVar11 = (longlong *)FUN_14001cc68(0x10,8);
        plVar11[1] = lVar6;
        plVar16 = DAT_14ca843c0;
        plVar12 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar11 = (longlong)plVar16;
            LOCK();
            bVar23 = plVar16 != DAT_14ca843c0;
            plVar12 = plVar11;
            if (bVar23) {
              plVar16 = DAT_14ca843c0;
              plVar12 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar12;
            UNLOCK();
          } while (bVar23);
        }
        else {
          do {
            *plVar11 = (longlong)plVar12;
            LOCK();
            bVar23 = plVar12 != DAT_14ca843c8;
            plVar16 = plVar11;
            if (bVar23) {
              plVar12 = DAT_14ca843c8;
              plVar16 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar16;
            UNLOCK();
          } while (bVar23);
        }
      }
    }
  }
  if (lVar5 != 0) {
    LOCK();
    puVar14 = (uint *)(lVar5 + 8);
    uVar19 = *puVar14;
    *puVar14 = *puVar14 - 1;
    UNLOCK();
    if ((uVar19 & 0x3fffffff) == 1) {
      puVar14 = (uint *)(lVar5 + 8);
      LOCK();
      uVar19 = *puVar14;
      *puVar14 = *puVar14 | 0x40000000;
      UNLOCK();
      if ((uVar19 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar5 + 0xd);
        plVar11 = (longlong *)FUN_14001cc68(0x10,8);
        plVar11[1] = lVar5;
        plVar16 = DAT_14ca843c0;
        plVar12 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar11 = (longlong)plVar16;
            LOCK();
            bVar23 = plVar16 != DAT_14ca843c0;
            plVar12 = plVar11;
            if (bVar23) {
              plVar16 = DAT_14ca843c0;
              plVar12 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar12;
            UNLOCK();
          } while (bVar23);
        }
        else {
          do {
            *plVar11 = (longlong)plVar12;
            LOCK();
            bVar23 = plVar12 != DAT_14ca843c8;
            plVar16 = plVar11;
            if (bVar23) {
              plVar12 = DAT_14ca843c8;
              plVar16 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar16;
            UNLOCK();
          } while (bVar23);
        }
      }
    }
  }
  if (lVar4 != 0) {
    LOCK();
    puVar14 = (uint *)(lVar4 + 8);
    uVar19 = *puVar14;
    *puVar14 = *puVar14 - 1;
    UNLOCK();
    if ((uVar19 & 0x3fffffff) == 1) {
      puVar14 = (uint *)(lVar4 + 8);
      LOCK();
      uVar19 = *puVar14;
      *puVar14 = *puVar14 | 0x40000000;
      UNLOCK();
      if ((uVar19 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar11 = (longlong *)FUN_14001cc68(0x10,8);
        plVar11[1] = lVar4;
        plVar16 = DAT_14ca843c0;
        plVar12 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar11 = (longlong)plVar16;
            LOCK();
            bVar23 = plVar16 != DAT_14ca843c0;
            plVar12 = plVar11;
            if (bVar23) {
              plVar16 = DAT_14ca843c0;
              plVar12 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar12;
            UNLOCK();
          } while (bVar23);
        }
        else {
          do {
            *plVar11 = (longlong)plVar12;
            LOCK();
            bVar23 = plVar12 != DAT_14ca843c8;
            plVar16 = plVar11;
            if (bVar23) {
              plVar12 = DAT_14ca843c8;
              plVar16 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar16;
            UNLOCK();
          } while (bVar23);
        }
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fea2ac FUN_143fea2ac body=2824 status=ok
// SIG undefined FUN_143fea2ac(void)

void FUN_143fea2ac(longlong param_1,ulonglong *param_2)

{
  longlong *plVar1;
  uint *puVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [4];
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  wchar_t *pwVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  uint uVar15;
  byte bVar16;
  undefined8 *puVar17;
  wchar_t *_Dest;
  bool bVar18;
  float fVar19;
  undefined1 auStack_3e8 [36];
  uint local_3c4;
  ulonglong local_3c0;
  byte local_3b4;
  char local_3b3;
  char local_3b2;
  undefined8 local_3b1;
  undefined1 local_3a9;
  undefined4 local_3a8;
  undefined1 local_3a4 [8];
  undefined1 local_39c;
  undefined1 local_398 [8];
  undefined1 local_390 [7];
  byte bStack_389;
  undefined8 local_388;
  undefined8 local_380;
  undefined4 local_378;
  undefined2 local_374;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined1 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined8 local_2a0;
  uint local_298;
  undefined4 uStack_294;
  undefined3 uStack_290;
  ulonglong local_288;
  undefined4 local_280;
  undefined8 local_27c;
  undefined8 uStack_274;
  uint local_26c;
  undefined4 local_268;
  ulonglong local_264;
  undefined4 local_25c;
  undefined2 local_258;
  undefined1 local_256;
  char local_255;
  undefined2 local_254;
  undefined4 local_250;
  wchar_t *local_248;
  undefined1 local_240 [7];
  undefined1 auStack_239 [4];
  uint uStack_235;
  undefined1 auStack_231 [4];
  byte abStack_22d [4];
  undefined1 uStack_229;
  longlong local_228;
  undefined4 uStack_220;
  undefined8 local_218;
  undefined1 local_210;
  undefined8 local_20c;
  undefined4 local_204;
  undefined1 local_1f8;
  longlong lStack_175;
  undefined1 local_168 [4];
  byte local_164;
  undefined1 local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  ushort local_78;
  undefined8 local_70;
  ushort local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  fVar19 = (float)(**(code **)(**(longlong **)(param_1 + 0x88) + 0x350))();
  uVar14 = 8;
  uVar15 = 8;
  if (0.0 < fVar19) {
    fVar19 = (float)(**(code **)(**(longlong **)(param_1 + 0x88) + 0x350))();
    uVar15 = (int)fVar19 + 7U & 0xfffffff8;
  }
  fVar19 = (float)(**(code **)(**(longlong **)(param_1 + 0x88) + 0x358))();
  if (0.0 < fVar19) {
    fVar19 = (float)(**(code **)(**(longlong **)(param_1 + 0x88) + 0x358))();
    uVar14 = (ulonglong)((int)fVar19 + 7U & 0xfffffff8);
  }
  local_255 = *(char *)(param_1 + 0x90);
  local_264 = (ulonglong)uVar15 | uVar14 << 0x20;
  local_26c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  bVar16 = 9;
  if (local_255 != '\x12') {
    bVar16 = (*(byte *)(*(longlong *)(param_1 + 0x88) + 0xfe) & 1) << 4 | 9;
  }
  local_288 = (ulonglong)bVar16;
  local_256 = 0;
  local_254 = 0xff00;
  local_25c = 0x10001;
  local_258 = 0x101;
  local_280 = 1;
  local_268 = 0;
  local_27c = 0;
  uStack_274 = 0;
  local_250 = 0x70;
  local_248 = L"Bink";
  _local_240 = 0;
  stack0xfffffffffffffdc8 = 0;
  stack0xfffffffffffffdd0 = 0;
  local_3c4 = uVar15;
  local_3c0 = uVar14;
  (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_228,param_2);
  lVar9 = local_228;
  plVar1 = (longlong *)(param_1 + 0x58);
  if (plVar1 == &local_228) {
LAB_143fea4a6:
    lVar9 = *plVar1;
  }
  else {
    lVar5 = *plVar1;
    *plVar1 = local_228;
    local_228 = 0;
    if (lVar5 != 0) {
      LOCK();
      puVar2 = (uint *)(lVar5 + 8);
      uVar15 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar15 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(lVar5 + 8);
        LOCK();
        uVar15 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar15 >> 0x1e & 1) == 0) {
          bVar16 = *(byte *)(lVar5 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = lVar5;
          plVar12 = DAT_14ca843c0;
          plVar10 = DAT_14ca843c8;
          if ((bVar16 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar12;
              LOCK();
              bVar18 = plVar12 != DAT_14ca843c0;
              plVar10 = plVar8;
              if (bVar18) {
                plVar12 = DAT_14ca843c0;
                plVar10 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar10;
              UNLOCK();
            } while (bVar18);
          }
          else {
            do {
              *plVar8 = (longlong)plVar10;
              LOCK();
              bVar18 = plVar10 != DAT_14ca843c8;
              plVar12 = plVar8;
              if (bVar18) {
                plVar10 = DAT_14ca843c8;
                plVar12 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar12;
              UNLOCK();
            } while (bVar18);
          }
        }
      }
      goto LAB_143fea4a6;
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x10);
  if (lVar5 != lVar9) {
    *(longlong *)(param_1 + 0x10) = lVar9;
    if (lVar9 != 0) {
      LOCK();
      *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
      UNLOCK();
    }
    if (lVar5 != 0) {
      LOCK();
      puVar2 = (uint *)(lVar5 + 8);
      uVar15 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar15 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(lVar5 + 8);
        LOCK();
        uVar15 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar15 >> 0x1e & 1) == 0) {
          bVar16 = *(byte *)(lVar5 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = lVar5;
          plVar12 = DAT_14ca843c0;
          plVar10 = DAT_14ca843c8;
          if ((bVar16 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar12;
              LOCK();
              bVar18 = plVar12 != DAT_14ca843c0;
              plVar10 = plVar8;
              if (bVar18) {
                plVar12 = DAT_14ca843c0;
                plVar10 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar10;
              UNLOCK();
            } while (bVar18);
          }
          else {
            do {
              *plVar8 = (longlong)plVar10;
              LOCK();
              bVar18 = plVar10 != DAT_14ca843c8;
              plVar12 = plVar8;
              if (bVar18) {
                plVar10 = DAT_14ca843c8;
                plVar12 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar12;
              UNLOCK();
            } while (bVar18);
          }
        }
      }
    }
  }
  lVar9 = local_228;
  if (local_228 != 0) {
    LOCK();
    puVar2 = (uint *)(local_228 + 8);
    uVar15 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar15 & 0x3fffffff) == 1) {
      puVar2 = (uint *)(local_228 + 8);
      LOCK();
      uVar15 = *puVar2;
      *puVar2 = *puVar2 | 0x40000000;
      UNLOCK();
      if ((uVar15 >> 0x1e & 1) == 0) {
        bVar16 = *(byte *)(local_228 + 0xd);
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = lVar9;
        plVar12 = DAT_14ca843c0;
        plVar10 = DAT_14ca843c8;
        if ((bVar16 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar12;
            LOCK();
            bVar18 = plVar12 != DAT_14ca843c0;
            plVar10 = plVar8;
            if (bVar18) {
              plVar12 = DAT_14ca843c0;
              plVar10 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar10;
            UNLOCK();
          } while (bVar18);
        }
        else {
          do {
            *plVar8 = (longlong)plVar10;
            LOCK();
            bVar18 = plVar10 != DAT_14ca843c8;
            plVar12 = plVar8;
            if (bVar18) {
              plVar10 = DAT_14ca843c8;
              plVar12 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar12;
            UNLOCK();
          } while (bVar18);
        }
      }
    }
  }
  fVar19 = (float)(**(code **)(**(longlong **)(param_1 + 0x88) + 0x350))();
  if ((fVar19 != 0.0) || (NAN(fVar19))) {
    fVar19 = (float)(**(code **)(**(longlong **)(param_1 + 0x88) + 0x358))();
    if ((fVar19 != 0.0) || (NAN(fVar19))) {
      puVar13 = &DAT_14cb0b950;
      do {
        puVar13 = (undefined8 *)*puVar13;
        if (puVar13 == (undefined8 *)0x0) {
          *(longlong *)(param_1 + 0x78) = param_1 + 0x60;
          if (DAT_14cb0b950 != 0) {
            *(longlong *)(DAT_14cb0b950 + 8) = param_1 + 0x68;
          }
          *(longlong *)(param_1 + 0x68) = DAT_14cb0b950;
          *(longlong **)(param_1 + 0x70) = &DAT_14cb0b950;
          DAT_14c761df4 = 1;
          DAT_14cb0b950 = param_1 + 0x68;
          break;
        }
      } while (puVar13[2] != param_1 + 0x60);
      *(undefined1 *)(param_1 + 0x80) = 0;
    }
  }
  cVar3 = *(char *)(*(longlong *)(param_1 + 0x88) + 0x138);
  cVar4 = *(char *)(*(longlong *)(param_1 + 0x88) + 0x139);
  lVar9 = FUN_140032b16(0);
  local_3b4 = *(byte *)(*(longlong *)(param_1 + 0x88) + 0xf1);
  if (2 < local_3b4) {
    local_3b4 = *(byte *)(*(longlong *)(*(longlong *)(lVar9 + 0x78) + 0x28) + 1 +
                         (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x88) + 0xf6) * 0x5c);
  }
  local_3b3 = '\x02' - (cVar3 == '\x01');
  if (cVar3 == '\0') {
    local_3b3 = '\0';
  }
  local_3b2 = '\x02' - (cVar4 == '\x01');
  if (cVar4 == '\0') {
    local_3b2 = '\0';
  }
  local_3b1 = 0;
  local_3a9 = 0;
  local_3a8 = 0x7f7fffff;
  local_3a4 = (undefined1  [8])0x0;
  local_39c = 0;
  (**(code **)(*DAT_14ca83900 + 0x48))(DAT_14ca83900,&local_228);
  plVar12 = (longlong *)(param_1 + 0x18);
  if (plVar12 != &local_228) {
    lVar9 = *plVar12;
    *plVar12 = local_228;
    local_228 = 0;
    if (lVar9 == 0) goto LAB_143fea7aa;
    LOCK();
    puVar2 = (uint *)(lVar9 + 8);
    uVar15 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar15 & 0x3fffffff) == 1) {
      puVar2 = (uint *)(lVar9 + 8);
      LOCK();
      uVar15 = *puVar2;
      *puVar2 = *puVar2 | 0x40000000;
      UNLOCK();
      if ((uVar15 >> 0x1e & 1) == 0) {
        bVar16 = *(byte *)(lVar9 + 0xd);
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = lVar9;
        plVar12 = DAT_14ca843c0;
        plVar10 = DAT_14ca843c8;
        if ((bVar16 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar12;
            LOCK();
            bVar18 = plVar12 != DAT_14ca843c0;
            plVar10 = plVar8;
            if (bVar18) {
              plVar12 = DAT_14ca843c0;
              plVar10 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar10;
            UNLOCK();
          } while (bVar18);
        }
        else {
          do {
            *plVar8 = (longlong)plVar10;
            LOCK();
            bVar18 = plVar10 != DAT_14ca843c8;
            plVar12 = plVar8;
            if (bVar18) {
              plVar10 = DAT_14ca843c8;
              plVar12 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar12;
            UNLOCK();
          } while (bVar18);
        }
      }
    }
  }
  lVar9 = local_228;
  if (local_228 != 0) {
    LOCK();
    puVar2 = (uint *)(local_228 + 8);
    uVar15 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar15 & 0x3fffffff) == 1) {
      puVar2 = (uint *)(local_228 + 8);
      LOCK();
      uVar15 = *puVar2;
      *puVar2 = *puVar2 | 0x40000000;
      UNLOCK();
      if ((uVar15 >> 0x1e & 1) == 0) {
        bVar16 = *(byte *)(local_228 + 0xd);
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = lVar9;
        plVar12 = DAT_14ca843c0;
        plVar10 = DAT_14ca843c8;
        if ((bVar16 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar12;
            LOCK();
            bVar18 = plVar12 != DAT_14ca843c0;
            plVar10 = plVar8;
            if (bVar18) {
              plVar12 = DAT_14ca843c0;
              plVar10 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar10;
            UNLOCK();
          } while (bVar18);
        }
        else {
          do {
            *plVar8 = (longlong)plVar10;
            LOCK();
            bVar18 = plVar10 != DAT_14ca843c8;
            plVar12 = plVar8;
            if (bVar18) {
              plVar10 = DAT_14ca843c8;
              plVar12 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar12;
            UNLOCK();
          } while (bVar18);
        }
      }
    }
  }
LAB_143fea7aa:
  lVar9 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x88) + 0x128) + 0x10);
  if (lVar9 != 0) {
    (**(code **)(*DAT_14ca83900 + 0x178))(DAT_14ca83900,param_2,lVar9,*plVar1);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  lVar9 = 0x15;
  do {
    *(undefined8 *)(local_3a4 + lVar9 + 7) = 0;
    *(undefined8 *)(local_398 + lVar9 + 3) = 0;
    *(undefined4 *)(local_390 + lVar9 + 3) = 0xffffffff;
    (&bStack_389 + lVar9)[0] = 0;
    (&bStack_389 + lVar9)[1] = 0;
    lVar9 = lVar9 + 0x18;
  } while (lVar9 != 0xd5);
  local_2b4 = 0;
  local_2c8 = 0;
  uStack_2c0 = 0;
  local_2b8 = 0;
  local_2b0 = 0xffffffff;
  uStack_2ac = 0xffffffff;
  uStack_2a8 = 0xffffffff;
  uStack_2a4 = 0xffffffff;
  local_2a0 = 0;
  local_298 = local_298 & 0xffffff00;
  uStack_294 = 0;
  uStack_290 = 0;
  local_380 = 0;
  local_378 = 0xffffffff;
  local_374 = 0x900;
  local_228 = -1;
  uStack_220 = 0xffffffff;
  local_210 = 1;
  local_20c = 0x100000000000;
  local_204 = 0;
  local_1f8 = 0;
  local_390._0_4_ = 1;
  local_398 = (undefined1  [8])&local_228;
  local_388 = uVar6;
  local_218 = uVar6;
  FUN_144760590(param_2,local_398,0);
  _Dest = (wchar_t *)(*param_2 + 1 & 0xfffffffffffffffe);
  pwVar11 = _Dest + 0xd;
  if ((wchar_t *)param_2[1] < pwVar11) {
    FUN_140023dd8(param_2,0x1c);
    _Dest = (wchar_t *)(*param_2 + 1 & 0xfffffffffffffffe);
    pwVar11 = _Dest + 0xd;
  }
  *param_2 = (ulonglong)pwVar11;
  wcscpy(_Dest,L"ClearTexture");
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar17 + 0x23;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x120);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar17 + 0x23;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_FUN_14a217b50;
  memcpy(puVar17 + 2,&local_388,0xe8);
  uVar15 = local_3c4;
  puVar17[0x1f] = 0;
  puVar17[0x20] = CONCAT44(uStack_294,local_298);
  *(uint *)((longlong)puVar17 + 0x107) = CONCAT31(uStack_290,uStack_294._3_1_);
  puVar17[0x22] = _Dest;
  lVar9 = 0x11;
  do {
    *(undefined8 *)(local_240 + lVar9 + 7) = 0;
    *(undefined8 *)(auStack_231 + lVar9) = 0xffffffff00000000;
    *(undefined2 *)(&uStack_229 + lVar9) = 0;
    lVar9 = lVar9 + 0x18;
  } while (lVar9 != 0xd1);
  local_168 = (undefined1  [4])0x0;
  local_164 = 0;
  lVar9 = 0xd9;
  do {
    *(undefined8 *)(local_240 + lVar9 + 7) = 0;
    *(undefined8 *)(auStack_231 + lVar9) = 0xffffffff00000000;
    *(undefined2 *)(&uStack_229 + lVar9) = 0;
    lVar9 = lVar9 + 0x18;
  } while (lVar9 != 0x199);
  local_a0 = 0;
  local_70 = 0;
  local_68 = local_68 & 0xff;
  local_98 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  local_78 = local_78 & 0xff00;
  lVar9 = 0x15;
  do {
    if (*(longlong *)(local_3a4 + lVar9 + 7) == 0) break;
    *(longlong *)(local_240 + lVar9 + 3) = *(longlong *)(local_3a4 + lVar9 + 7);
    bVar16 = *(byte *)((longlong)&local_388 + lVar9) >> 2;
    abStack_22d[lVar9] = bVar16;
    abStack_22d[lVar9 + 1] = *(byte *)((longlong)&local_388 + lVar9) & 3;
    *(undefined4 *)(auStack_231 + lVar9) = *(undefined4 *)(local_390 + lVar9 + 3);
    *(uint *)(auStack_231 + lVar9 + -4) = (uint)(&bStack_389)[lVar9];
    local_168 = (undefined1  [4])((int)local_168 + 1);
    local_164 = local_164 | bVar16 == 2;
    lVar5 = *(longlong *)(local_398 + lVar9 + 3);
    if (lVar5 != 0) {
      local_a0 = 1;
      uVar6 = *(undefined8 *)(auStack_231 + lVar9 + -4);
      *(undefined8 *)((longlong)&lStack_175 + lVar9) = *(undefined8 *)(local_240 + lVar9 + 3);
      *(undefined8 *)(&stack0xfffffffffffffe93 + lVar9) = uVar6;
      *(undefined8 *)(local_168 + lVar9 + 3) = *(undefined8 *)(abStack_22d + lVar9);
      *(longlong *)((longlong)&lStack_175 + lVar9) = lVar5;
    }
    lVar9 = lVar9 + 0x18;
  } while (lVar9 != 0xd5);
  auVar7 = local_168;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_98 = ZEXT816(0);
  if (0 < (longlong)(int)local_168) {
    memcpy(param_2 + 0x15,&local_228,(longlong)(int)local_168 * 0x18);
  }
  *(undefined1 (*) [4])(param_2 + 0x14) = auVar7;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  bVar16 = *(byte *)((longlong)param_2 + 0x17b);
  *(undefined1 *)((longlong)param_2 + 0x17a) = 0;
  *(undefined2 *)(param_2 + 0x2f) = 0;
  *(byte *)((longlong)param_2 + 0x17b) = bVar16 & 0xfc | 2;
  if ((bVar16 & 8) != 0) {
    (**(code **)(*DAT_14ca83900 + 0x2a0))(DAT_14ca83900,param_2,1);
    *(byte *)((longlong)param_2 + 0x17b) = *(byte *)((longlong)param_2 + 0x17b) & 0xf7;
  }
  uVar14 = local_3c0;
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar17 + 2;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x18);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar17 + 2;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a217b58;
  *(byte *)((longlong)param_2 + 0x17b) = *(byte *)((longlong)param_2 + 0x17b) & 0xfd;
  *(undefined2 *)(param_2 + 0x2f) = 0;
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar17 + 5;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x30);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar17 + 5;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  puVar17[2] = 0;
  *puVar17 = &PTR_LAB_14a1e7fc8;
  *(undefined4 *)(puVar17 + 3) = 0;
  *(float *)((longlong)puVar17 + 0x1c) = (float)(int)uVar15;
  *(float *)(puVar17 + 4) = (float)(int)uVar14;
  *(undefined4 *)((longlong)puVar17 + 0x24) = 0x3f800000;
  local_218 = *(undefined8 *)(param_1 + 0x10);
  local_228 = -1;
  uStack_220 = 0xffffffff;
  local_210 = 1;
  local_20c = 0x80000001000;
  local_204 = 0;
  local_1f8 = 0;
  local_390._0_4_ = 1;
  local_398 = (undefined1  [8])&local_228;
  FUN_144760590(param_2,local_398,0);
  if ((local_60 ^ (ulonglong)auStack_3e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143feadb5 FUN_143feadb5 body=59 status=ok
// SIG undefined FUN_143feadb5(void)

void FUN_143feadb5(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14cb9e640;
  if (DAT_14cb9e640 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14cb9e640 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143feade5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143feadf0 FUN_143feadf0 body=49 status=ok
// SIG undefined FUN_143feadf0(void)

void FUN_143feadf0(void)

{
  FUN_1461e29ae(DAT_14cb9e628,DAT_14cb9e630);
  if (DAT_14cb9e628 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143feae38 FUN_143feae38 body=3011 status=ok
// SIG undefined FUN_143feae38(void)

/* WARNING: Removing unreachable block (ram,0x000143feb00e) */

ulonglong FUN_143feae38(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  byte bVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  int iVar13;
  DWORD DVar14;
  DWORD DVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong *plVar19;
  longlong *plVar20;
  longlong *plVar21;
  undefined4 *puVar22;
  uint *puVar23;
  undefined8 uVar24;
  uint uVar25;
  undefined8 uVar26;
  uint *puVar27;
  undefined8 *puVar28;
  ulonglong uVar29;
  bool bVar30;
  float fVar31;
  undefined1 auStack_1b8 [32];
  code **local_198;
  undefined4 local_190;
  longlong *local_188;
  undefined4 local_180;
  undefined4 local_178;
  undefined8 local_168;
  longlong local_160;
  undefined8 *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  code **local_d8;
  undefined4 local_d0;
  code *local_c8;
  undefined8 uStack_c0;
  longlong *local_b8;
  undefined1 local_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  longlong *local_a0;
  undefined1 local_98;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar16 = *(longlong *)(param_1 + 0x70);
  if (lVar16 == 0) {
    FUN_141654242(param_1);
    if (*(int *)(param_1 + 100) < *(int *)(param_1 + 0x28) + -1) {
LAB_143feaeba:
      FUN_1416d349e(param_1);
      lVar16 = *(longlong *)(param_1 + 0x70);
      goto LAB_143feaec6;
    }
    if (*(char *)(param_1 + 0x60) != '\0') {
      iVar13 = -1;
      if (*(char *)(param_1 + 0x60) == '\x02') {
        iVar13 = *(int *)(param_1 + 0x28) + -2;
      }
      *(int *)(param_1 + 100) = iVar13;
      goto LAB_143feaeba;
    }
LAB_143feb396:
    uVar29 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
    goto LAB_143feb50f;
  }
LAB_143feaec6:
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_e8 = 0;
  FUN_144d6e1b0(lVar16,&local_138);
  if (uStack_f0._4_4_ == 0) {
    if ((*(char *)(param_1 + 0x68) == '\x01') && (DAT_14cb0d2b0 != 0)) {
      local_c8 = (code *)0x0;
      uStack_c0 = 0;
      local_d8 = (code **)((ulonglong)local_d8 & 0xffffffff00000000);
      lVar16 = FUN_144d6eae0(*(undefined8 *)(param_1 + 0x70));
      if (lVar16 != 0) {
        do {
          FUN_142746448(&local_158,lVar16);
          uVar29 = uStack_c0;
          lVar16 = (longlong)(int)uStack_c0;
          uVar25 = (int)uStack_c0 + 1;
          uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar25);
          if (uStack_c0._4_4_ < uVar25) {
            FUN_1447a1bd6(&local_c8,uVar29 & 0xffffffff);
          }
          lVar16 = lVar16 * 0x10;
          *(undefined8 *)(local_c8 + lVar16) = 0;
          *(undefined8 **)(local_c8 + lVar16) = local_158;
          *(undefined4 *)(local_c8 + lVar16 + 8) = (undefined4)local_150;
          *(undefined4 *)(local_c8 + lVar16 + 0xc) = local_150._4_4_;
          local_150 = 0;
          local_158 = (undefined8 *)0x0;
          lVar16 = FUN_144d6eae0(*(undefined8 *)(param_1 + 0x70),&local_d8);
        } while (lVar16 != 0);
      }
      if (((int)uStack_c0 != 0) && (lVar16 = FUN_1415b2342(), lVar16 != 0)) {
        FUN_147d68a02(lVar16,DAT_14cb0d2b0,&local_c8);
      }
      FUN_1447a1747(local_c8,uStack_c0 & 0xffffffff);
      if (local_c8 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  else if (uStack_f0._4_4_ == 3) {
    FUN_141654242(param_1);
    if (*(int *)(param_1 + 0x28) + -1 <= *(int *)(param_1 + 100)) {
      if (*(char *)(param_1 + 0x60) == '\0') goto LAB_143feb396;
      iVar13 = -1;
      if (*(char *)(param_1 + 0x60) == '\x02') {
        iVar13 = *(int *)(param_1 + 0x28) + -2;
      }
      *(int *)(param_1 + 100) = iVar13;
    }
    FUN_1416d349e(param_1);
  }
  if ((*(longlong *)(param_1 + 0x70) != 0) && (lVar16 = *(longlong *)(param_1 + 0x40), lVar16 != 0))
  {
    plVar17 = (longlong *)FUN_14147ade4();
    lVar18 = plVar17[0x22];
    if (lVar18 == 0) {
      (**(code **)(*plVar17 + 1000))(plVar17);
      lVar18 = plVar17[0x22];
    }
    dVar4 = *(double *)(lVar18 + 0x30);
    dVar5 = *(double *)(lVar18 + 0x38);
    plVar17 = (longlong *)FUN_14147ade4();
    lVar18 = plVar17[0x22];
    if (lVar18 == 0) {
      (**(code **)(*plVar17 + 1000))(plVar17);
      lVar18 = plVar17[0x22];
    }
    dVar6 = *(double *)(lVar18 + 0x40);
    dVar7 = *(double *)(lVar18 + 0x48);
    if (*(int *)(lVar16 + 0x28) == -1) {
      (**(code **)(*(longlong *)(lVar16 + 0x20) + 0x18))(lVar16 + 0x20,&DAT_14ca85100);
    }
    plVar17 = *(longlong **)(lVar16 + 8);
    if (plVar17 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
      UNLOCK();
    }
    lVar18 = (**(code **)(*plVar17 + 8))(plVar17);
    uVar10 = *(undefined4 *)(lVar18 + 0x24);
    lVar18 = (**(code **)(*plVar17 + 8))(plVar17);
    uVar11 = *(undefined4 *)(lVar18 + 0x28);
    lVar18 = (**(code **)(*plVar17 + 8))(plVar17);
    cVar8 = *(char *)(lVar18 + 0x33);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb9e698) && (FUN_144b3d300(&DAT_14cb9e698), DAT_14cb9e698 == -1)) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar21 = (longlong *)
                (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.HDR.EnableHDROutput",1);
      if (plVar21 == (longlong *)0x0) {
        DAT_14cb9e690 = 0;
      }
      else {
        DAT_14cb9e690 = (**(code **)(*plVar21 + 0x68))(plVar21);
      }
      _Init_thread_footer(&DAT_14cb9e698);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb9e6a8) && (FUN_144b3d300(&DAT_14cb9e6a8), DAT_14cb9e6a8 == -1)) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar21 = (longlong *)
                (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.HDR.Display.OutputDevice",1);
      if (plVar21 == (longlong *)0x0) {
        DAT_14cb9e6a0 = 0;
      }
      else {
        DAT_14cb9e6a0 = (**(code **)(*plVar21 + 0x68))(plVar21);
      }
      _Init_thread_footer(&DAT_14cb9e6a8);
    }
    if ((DAT_14ca84f23 == '\x01') && (*(int *)(DAT_14cb9e690 + 4) != 0)) {
      uVar25 = *(uint *)(DAT_14cb9e6a0 + 4);
      fVar31 = (float)FUN_14019a38d();
      if (uVar25 < 7) {
        if ((7U >> (uVar25 & 0x1f) & 1) != 0) goto LAB_143feb1f8;
        iVar13 = (int)fVar31;
        uVar24 = *(undefined8 *)(param_1 + 0x70);
        uVar26 = 1;
      }
      else {
        uVar24 = *(undefined8 *)(param_1 + 0x70);
        uVar26 = 0;
        iVar13 = 1000;
      }
    }
    else {
LAB_143feb1f8:
      uVar24 = *(undefined8 *)(param_1 + 0x70);
      uVar26 = 1;
      iVar13 = 0x50;
    }
    FUN_144d6e8f0(uVar24,uVar26,0x3f800000,iVar13);
    FUN_144d6e9c0(*(undefined8 *)(param_1 + 0x70),cVar8 != '\x02');
    local_198 = (code **)CONCAT44(local_198._4_4_,(float)dVar7);
    local_190 = 0;
    local_188 = plVar17;
    local_180 = uVar10;
    local_178 = uVar11;
    FUN_144d6e390(*(undefined8 *)(param_1 + 0x70),(float)dVar4,(float)dVar5,(float)dVar6);
    local_150 = 0;
    uStack_148 = 0;
    local_140 = 0;
    local_158 = &DAT_14ca85100;
    FUN_144b3d940();
    FUN_144b3d960();
    FUN_144b3d920(0);
    FUN_144d6e130(1,0);
    plVar21 = *(longlong **)(lVar16 + 8);
    if (plVar21 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
      UNLOCK();
    }
    lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar13 = *(int *)(lVar16 + 0xc60);
    if (DAT_14c86a9fc == 0) {
      if (iVar13 != 2) {
        if (iVar13 != 1) goto LAB_143feb2c6;
        DVar14 = FUN_140ad26c0();
        DVar15 = GetCurrentThreadId();
        if (DVar14 == DVar15) goto LAB_143feb2cf;
        goto LAB_143feb3de;
      }
LAB_143feb2cf:
      local_d8 = &local_c8;
      local_c8 = (code *)0xffffffffffffffff;
      uStack_c0 = CONCAT44(uStack_c0._4_4_,0xffffffff);
      local_b0 = 1;
      local_ac = 0;
      uStack_a8 = 0x70;
      local_a4 = 0;
      local_98 = 0;
      local_d0 = 1;
      local_b8 = plVar21;
      FUN_144760590(&DAT_14ca85100,&local_d8,0);
      if (plVar21 != (longlong *)0x0) {
        LOCK();
        puVar23 = (uint *)(plVar21 + 1);
        uVar25 = *puVar23;
        *puVar23 = *puVar23 - 1;
        UNLOCK();
        if ((uVar25 & 0x3fffffff) == 1) {
          puVar23 = (uint *)(plVar21 + 1);
          LOCK();
          uVar25 = *puVar23;
          *puVar23 = *puVar23 | 0x40000000;
          UNLOCK();
          if ((uVar25 >> 0x1e & 1) == 0) {
            bVar9 = *(byte *)((longlong)plVar21 + 0xd);
            plVar19 = (longlong *)FUN_14001cc68(0x10,8);
            plVar19[1] = (longlong)plVar21;
            plVar21 = DAT_14ca843c0;
            plVar20 = DAT_14ca843c8;
            if ((bVar9 & 2) == 0) {
              do {
                *plVar19 = (longlong)plVar21;
                LOCK();
                bVar30 = plVar21 != DAT_14ca843c0;
                plVar20 = plVar19;
                if (bVar30) {
                  plVar21 = DAT_14ca843c0;
                  plVar20 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar20;
                UNLOCK();
              } while (bVar30);
            }
            else {
              do {
                *plVar19 = (longlong)plVar20;
                LOCK();
                bVar30 = plVar20 != DAT_14ca843c8;
                plVar21 = plVar19;
                if (bVar30) {
                  plVar20 = DAT_14ca843c8;
                  plVar21 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar21;
                UNLOCK();
              } while (bVar30);
            }
          }
        }
      }
    }
    else {
LAB_143feb2c6:
      if (iVar13 == 0x10) goto LAB_143feb2cf;
LAB_143feb3de:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar13 = *(int *)(lVar16 + 0xc60), iVar13 == 2))
        goto LAB_143feb2cf;
        if (iVar13 == 1) {
          DVar14 = FUN_140ad26c0();
          DVar15 = GetCurrentThreadId();
          if (DVar14 == DVar15) goto LAB_143feb2cf;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar23 = (uint *)*puVar2;
        if (puVar23 != (uint *)0x0) goto LAB_143feb600;
        while( true ) {
          uVar25 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar25 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar25 | 1;
            __tlregdtor(&LAB_143feea9b);
          }
          lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar22 = *(undefined4 **)(lVar16 + 0x310);
          *(undefined8 *)(lVar16 + 0x310) = 0;
          if (puVar22 == (undefined4 *)0x0) {
            puVar22 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar22 = 0xffffffff;
          *(undefined4 **)(puVar22 + 0x10) = puVar22 + 0x16;
          puVar22[0x12] = 0;
          *puVar2 = puVar22;
          FUN_140217a48(puVar2);
          puVar23 = (uint *)*puVar2;
LAB_143feb600:
          puVar28 = (undefined8 *)(*(longlong *)(puVar23 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar27 = (uint *)(puVar28 + 0x16);
          uVar25 = puVar23[0x12];
          if (puVar27 <= puVar23 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar23 + 0x10) = puVar23 + 0x4000;
            LOCK();
            uVar3 = *puVar23;
            *puVar23 = *puVar23 + uVar25 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar25) != 0xffffffff) break;
            puVar23 = (uint *)*puVar2;
            *puVar23 = 0xffffffff;
            *(uint **)(puVar23 + 0x10) = puVar23 + 0x16;
            puVar23[0x12] = 0;
            *puVar2 = puVar23;
            puVar28 = (undefined8 *)((longlong)puVar23 + 0x5fU & 0xfffffffffffffff8);
            puVar27 = (uint *)(puVar28 + 0x16);
            uVar25 = 0;
            if (puVar27 <= puVar23 + 0x4000) {
              uVar25 = 1;
              goto LAB_143feb680;
            }
          }
        }
        uVar25 = uVar25 + 1;
LAB_143feb680:
        *(uint **)(puVar23 + 0x10) = puVar27;
        puVar23[0x12] = uVar25;
        iVar13 = 0;
        FUN_1447247dc(puVar28,0);
        *puVar28 = &PTR_FUN_14b5a8db8;
        puVar28[0x15] = plVar21;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar25 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar25 < 2) {
            uVar29 = (ulonglong)(byte)(&DAT_149e38edc)[uVar25];
            iVar13 = 0;
          }
          else {
            uVar29 = 2;
          }
        }
        else {
          iVar13 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar29 = 5;
        }
        if (*(code **)(puVar28[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar28[0xe] + 0x18))(puVar28 + 0xe,puVar28 + 9);
        }
        puVar28[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar28[9] = puVar28;
        puVar28[10] = puVar28;
        lVar16 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar16 == 0) {
          uVar12 = 1;
          if ((char)uVar29 != '\x06') {
            uVar12 = uVar29;
          }
          uVar29 = uVar12;
          uVar24 = 0;
        }
        else {
          if ((char)uVar29 == '\x06') {
            uVar29 = *(ulonglong *)(lVar16 + 0x38) >> 0x3b;
          }
          uVar24 = *(undefined8 *)(lVar16 + 0x30);
        }
        puVar28[0xf] = uVar24;
        puVar28[0x10] = uVar29 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar28 + 0x1c) = iVar13;
        if (puVar28 == (undefined8 *)0x0) {
          local_c8 = (code *)CONCAT71(local_c8._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar28 + 1) = *(int *)(puVar28 + 1) + 1;
          UNLOCK();
          local_c8 = (code *)CONCAT71(local_c8._1_7_,1);
          FUN_1447439e4(puVar28);
          LOCK();
          piVar1 = (int *)(puVar28 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar28)(puVar28,1);
          }
        }
      }
      else {
        local_198 = &local_c8;
        local_b8 = (longlong *)0x0;
        uStack_a8 = 0x4b5a8d60;
        local_a4 = 1;
        local_c8 = FUN_143ff02ee;
        local_a0 = plVar21;
        FUN_14005a792(&DAT_14ca9a440,L"TransitionTextureSRVState",&DAT_14cb9e708);
        if (local_c8 != (code *)0x0) {
          plVar21 = local_b8;
          if (local_b8 == (longlong *)0x0) {
            plVar21 = (longlong *)&uStack_a8;
          }
          (**(code **)(*plVar21 + 0x10))();
        }
      }
    }
    uVar24 = *(undefined8 *)(param_1 + 0x30);
    local_168 = *(undefined8 *)(param_1 + 0x40);
    local_160 = *(longlong *)(param_1 + 0x48);
    if (local_160 != 0) {
      LOCK();
      *(int *)(local_160 + 0xc) = *(int *)(local_160 + 0xc) + 1;
      UNLOCK();
    }
    FUN_143feb9fc(uVar24,&local_168);
    if (plVar17 != (longlong *)0x0) {
      LOCK();
      puVar23 = (uint *)(plVar17 + 1);
      uVar25 = *puVar23;
      *puVar23 = *puVar23 - 1;
      UNLOCK();
      if ((uVar25 & 0x3fffffff) == 1) {
        puVar23 = (uint *)(plVar17 + 1);
        LOCK();
        uVar25 = *puVar23;
        *puVar23 = *puVar23 | 0x40000000;
        UNLOCK();
        if ((uVar25 >> 0x1e & 1) == 0) {
          bVar9 = *(byte *)((longlong)plVar17 + 0xd);
          plVar21 = (longlong *)FUN_14001cc68(0x10,8);
          plVar21[1] = (longlong)plVar17;
          if ((bVar9 & 2) == 0) {
            uVar29 = 0;
            plVar17 = DAT_14ca843c0;
            do {
              *plVar21 = (longlong)plVar17;
              LOCK();
              bVar30 = plVar17 != DAT_14ca843c0;
              plVar20 = plVar21;
              if (bVar30) {
                plVar17 = DAT_14ca843c0;
                plVar20 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar20;
              UNLOCK();
            } while (bVar30);
          }
          else {
            uVar29 = 0;
            plVar17 = DAT_14ca843c8;
            do {
              *plVar21 = (longlong)plVar17;
              LOCK();
              bVar30 = plVar17 != DAT_14ca843c8;
              plVar20 = plVar21;
              if (bVar30) {
                plVar17 = DAT_14ca843c8;
                plVar20 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar20;
              UNLOCK();
            } while (bVar30);
          }
          goto LAB_143feb50f;
        }
      }
    }
  }
  uVar29 = 0;
LAB_143feb50f:
  if ((local_80 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar29 & 0xffffffff;
}



// FUNCTION 143feb9fc FUN_143feb9fc body=92 status=ok
// SIG undefined FUN_143feb9fc(void)

void FUN_143feb9fc(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  uVar2 = *param_2;
  lVar3 = param_2[1];
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(longlong *)(param_1 + 0x20) = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143feba54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 143febabe FUN_143febabe body=3658 status=ok
// SIG undefined FUN_143febabe(void)

undefined8 * FUN_143febabe(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  undefined8 *_Dst;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  bool bVar12;
  undefined1 auStack_1a8 [40];
  int *local_180;
  undefined4 *local_178;
  longlong local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  uint local_14c;
  undefined4 local_148;
  undefined8 local_144;
  undefined2 local_13c;
  undefined2 uStack_13a;
  undefined2 local_138;
  undefined1 local_136;
  undefined2 local_135;
  undefined1 local_133;
  int local_130;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  uint local_ec;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined2 local_dc;
  undefined2 uStack_da;
  undefined2 local_d8;
  undefined1 local_d6;
  undefined2 local_d5;
  undefined1 local_d3;
  int local_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  uint local_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined2 local_7c;
  undefined4 local_7a;
  undefined1 local_76;
  undefined2 local_75;
  undefined1 local_73;
  int local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  _Dst = (undefined8 *)FUN_14001cc68(0x290);
  if (_Dst != (undefined8 *)0x0) {
    memset(_Dst,0,0x290);
    _Dst[0xb] = param_3;
    _Dst[0x17] = param_1;
    _Dst[0x18] = param_2;
    *(undefined4 *)(_Dst + 0x15) = *param_2;
    *(undefined4 *)((longlong)_Dst + 0xac) = param_2[1];
    piVar2 = (int *)(_Dst + 0x19);
    FUN_144d67a00(param_2,piVar2);
    local_180 = piVar2;
    iVar5 = FUN_144d68f50(param_2,piVar2,0);
    if (iVar5 != 0) {
      local_e4 = *(undefined8 *)((longlong)_Dst + 0xcc);
      local_14c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
      uStack_fc = 0;
      uStack_f8 = 0;
      uStack_f4 = 0;
      uStack_f0 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_b0 = 0;
      local_d6 = 0;
      local_108 = 0x140;
      local_d5 = 0x47;
      local_dc = 1;
      uStack_da = 1;
      local_d8 = 0x101;
      local_100 = 1;
      local_e8 = 0;
      local_d3 = 0xff;
      local_d0 = 0;
      uStack_c8 = L"BINK";
      local_144 = *(undefined8 *)((longlong)_Dst + 0xd4);
      uStack_15c = 0;
      uStack_158 = 0;
      uStack_154 = 0;
      uStack_150 = 0;
      local_120 = 0;
      uStack_118 = 0;
      local_110 = 0;
      local_136 = 0;
      local_168 = 0x140;
      local_135 = 0x47;
      local_13c = 1;
      uStack_13a = 1;
      local_138 = 0x101;
      local_160 = 1;
      local_148 = 0;
      local_133 = 0xff;
      local_130 = 0;
      uStack_128 = L"BINK";
      local_178 = param_2;
      local_ec = local_14c;
      if (0 < *(int *)(_Dst + 0x19)) {
        lVar10 = 0;
        do {
          if (*(int *)(_Dst + lVar10 * 10 + 0x1d) != 0) {
            if (local_d0 == 0) {
              local_76 = local_d6;
              local_a8 = local_108;
              local_75 = local_d5;
              local_84 = local_e4;
              local_7c = local_dc;
              local_7a = CONCAT22(local_d8,uStack_da);
              local_90 = uStack_f0;
              local_a0 = CONCAT44(uStack_fc,local_100);
              uStack_98 = CONCAT44(uStack_f4,uStack_f8);
              local_88 = local_e8;
              local_73 = local_d3;
              local_8c = local_ec;
              local_50 = local_b0;
              local_60 = (undefined4)local_c0;
              uStack_5c = local_c0._4_4_;
              uStack_58 = (undefined4)uStack_b8;
              uStack_54 = uStack_b8._4_4_;
              local_70 = local_d0;
              uStack_6c = uStack_cc;
              uStack_68 = (undefined4)uStack_c8;
              uStack_64 = uStack_c8._4_4_;
              local_70 = FUN_1431edf91(local_108,local_c0 != 0);
              lVar7 = *DAT_14ca83900;
              puVar11 = &local_a8;
            }
            else {
              lVar7 = *DAT_14ca83900;
              puVar11 = &local_108;
            }
            (**(code **)(lVar7 + 0x1a0))(DAT_14ca83900,&local_170,&DAT_14ca85100,puVar11);
            lVar7 = _Dst[lVar10 + 0x41];
            _Dst[lVar10 + 0x41] = local_170;
            local_170 = 0;
            if (lVar7 != 0) {
              LOCK();
              puVar1 = (uint *)(lVar7 + 8);
              uVar3 = *puVar1;
              *puVar1 = *puVar1 - 1;
              UNLOCK();
              if ((uVar3 & 0x3fffffff) == 1) {
                puVar1 = (uint *)(lVar7 + 8);
                LOCK();
                uVar3 = *puVar1;
                *puVar1 = *puVar1 | 0x40000000;
                UNLOCK();
                if ((uVar3 >> 0x1e & 1) == 0) {
                  bVar4 = *(byte *)(lVar7 + 0xd);
                  plVar6 = (longlong *)FUN_14001cc68(0x10,8);
                  plVar6[1] = lVar7;
                  plVar9 = DAT_14ca843c0;
                  plVar8 = DAT_14ca843c8;
                  if ((bVar4 & 2) == 0) {
                    do {
                      *plVar6 = (longlong)plVar9;
                      LOCK();
                      bVar12 = plVar9 != DAT_14ca843c0;
                      plVar8 = plVar6;
                      if (bVar12) {
                        plVar9 = DAT_14ca843c0;
                        plVar8 = DAT_14ca843c0;
                      }
                      DAT_14ca843c0 = plVar8;
                      UNLOCK();
                    } while (bVar12);
                  }
                  else {
                    do {
                      *plVar6 = (longlong)plVar8;
                      LOCK();
                      bVar12 = plVar8 != DAT_14ca843c8;
                      plVar9 = plVar6;
                      if (bVar12) {
                        plVar8 = DAT_14ca843c8;
                        plVar9 = DAT_14ca843c8;
                      }
                      DAT_14ca843c8 = plVar9;
                      UNLOCK();
                    } while (bVar12);
                  }
                }
              }
              lVar7 = local_170;
              if (local_170 != 0) {
                LOCK();
                puVar1 = (uint *)(local_170 + 8);
                uVar3 = *puVar1;
                *puVar1 = *puVar1 - 1;
                UNLOCK();
                if ((uVar3 & 0x3fffffff) == 1) {
                  puVar1 = (uint *)(local_170 + 8);
                  LOCK();
                  uVar3 = *puVar1;
                  *puVar1 = *puVar1 | 0x40000000;
                  UNLOCK();
                  if ((uVar3 >> 0x1e & 1) == 0) {
                    bVar4 = *(byte *)(local_170 + 0xd);
                    plVar6 = (longlong *)FUN_14001cc68(0x10,8);
                    plVar6[1] = lVar7;
                    plVar9 = DAT_14ca843c0;
                    plVar8 = DAT_14ca843c8;
                    if ((bVar4 & 2) == 0) {
                      do {
                        *plVar6 = (longlong)plVar9;
                        LOCK();
                        bVar12 = plVar9 != DAT_14ca843c0;
                        plVar8 = plVar6;
                        if (bVar12) {
                          plVar9 = DAT_14ca843c0;
                          plVar8 = DAT_14ca843c0;
                        }
                        DAT_14ca843c0 = plVar8;
                        UNLOCK();
                      } while (bVar12);
                    }
                    else {
                      do {
                        *plVar6 = (longlong)plVar8;
                        LOCK();
                        bVar12 = plVar8 != DAT_14ca843c8;
                        plVar9 = plVar6;
                        if (bVar12) {
                          plVar8 = DAT_14ca843c8;
                          plVar9 = DAT_14ca843c8;
                        }
                        DAT_14ca843c8 = plVar9;
                        UNLOCK();
                      } while (bVar12);
                    }
                  }
                }
              }
            }
          }
          if (*(int *)(_Dst + lVar10 * 10 + 0x1f) != 0) {
            if (local_130 == 0) {
              local_76 = local_136;
              local_a8 = local_168;
              local_75 = local_135;
              local_84 = local_144;
              local_7c = local_13c;
              local_7a = CONCAT22(local_138,uStack_13a);
              local_90 = uStack_150;
              local_a0 = CONCAT44(uStack_15c,local_160);
              uStack_98 = CONCAT44(uStack_154,uStack_158);
              local_88 = local_148;
              local_73 = local_133;
              local_8c = local_14c;
              local_50 = local_110;
              local_60 = (undefined4)local_120;
              uStack_5c = local_120._4_4_;
              uStack_58 = (undefined4)uStack_118;
              uStack_54 = uStack_118._4_4_;
              local_70 = local_130;
              uStack_6c = uStack_12c;
              uStack_68 = (undefined4)uStack_128;
              uStack_64 = uStack_128._4_4_;
              local_70 = FUN_1431edf91(local_168,local_120 != 0);
              lVar7 = *DAT_14ca83900;
              puVar11 = &local_a8;
            }
            else {
              lVar7 = *DAT_14ca83900;
              puVar11 = &local_168;
            }
            (**(code **)(lVar7 + 0x1a0))(DAT_14ca83900,&local_170,&DAT_14ca85100,puVar11);
            lVar7 = _Dst[lVar10 + 0x44];
            _Dst[lVar10 + 0x44] = local_170;
            local_170 = 0;
            if (lVar7 != 0) {
              LOCK();
              puVar1 = (uint *)(lVar7 + 8);
              uVar3 = *puVar1;
              *puVar1 = *puVar1 - 1;
              UNLOCK();
              if ((uVar3 & 0x3fffffff) == 1) {
                puVar1 = (uint *)(lVar7 + 8);
                LOCK();
                uVar3 = *puVar1;
                *puVar1 = *puVar1 | 0x40000000;
                UNLOCK();
                if ((uVar3 >> 0x1e & 1) == 0) {
                  bVar4 = *(byte *)(lVar7 + 0xd);
                  plVar6 = (longlong *)FUN_14001cc68(0x10,8);
                  plVar6[1] = lVar7;
                  plVar9 = DAT_14ca843c0;
                  plVar8 = DAT_14ca843c8;
                  if ((bVar4 & 2) == 0) {
                    do {
                      *plVar6 = (longlong)plVar9;
                      LOCK();
                      bVar12 = plVar9 != DAT_14ca843c0;
                      plVar8 = plVar6;
                      if (bVar12) {
                        plVar9 = DAT_14ca843c0;
                        plVar8 = DAT_14ca843c0;
                      }
                      DAT_14ca843c0 = plVar8;
                      UNLOCK();
                    } while (bVar12);
                  }
                  else {
                    do {
                      *plVar6 = (longlong)plVar8;
                      LOCK();
                      bVar12 = plVar8 != DAT_14ca843c8;
                      plVar9 = plVar6;
                      if (bVar12) {
                        plVar8 = DAT_14ca843c8;
                        plVar9 = DAT_14ca843c8;
                      }
                      DAT_14ca843c8 = plVar9;
                      UNLOCK();
                    } while (bVar12);
                  }
                }
              }
              lVar7 = local_170;
              if (local_170 != 0) {
                LOCK();
                puVar1 = (uint *)(local_170 + 8);
                uVar3 = *puVar1;
                *puVar1 = *puVar1 - 1;
                UNLOCK();
                if ((uVar3 & 0x3fffffff) == 1) {
                  puVar1 = (uint *)(local_170 + 8);
                  LOCK();
                  uVar3 = *puVar1;
                  *puVar1 = *puVar1 | 0x40000000;
                  UNLOCK();
                  if ((uVar3 >> 0x1e & 1) == 0) {
                    bVar4 = *(byte *)(local_170 + 0xd);
                    plVar6 = (longlong *)FUN_14001cc68(0x10,8);
                    plVar6[1] = lVar7;
                    plVar9 = DAT_14ca843c0;
                    plVar8 = DAT_14ca843c8;
                    if ((bVar4 & 2) == 0) {
                      do {
                        *plVar6 = (longlong)plVar9;
                        LOCK();
                        bVar12 = plVar9 != DAT_14ca843c0;
                        plVar8 = plVar6;
                        if (bVar12) {
                          plVar9 = DAT_14ca843c0;
                          plVar8 = DAT_14ca843c0;
                        }
                        DAT_14ca843c0 = plVar8;
                        UNLOCK();
                      } while (bVar12);
                    }
                    else {
                      do {
                        *plVar6 = (longlong)plVar8;
                        LOCK();
                        bVar12 = plVar8 != DAT_14ca843c8;
                        plVar9 = plVar6;
                        if (bVar12) {
                          plVar8 = DAT_14ca843c8;
                          plVar9 = DAT_14ca843c8;
                        }
                        DAT_14ca843c8 = plVar9;
                        UNLOCK();
                      } while (bVar12);
                    }
                  }
                }
              }
            }
          }
          if (*(int *)(_Dst + lVar10 * 10 + 0x21) != 0) {
            if (local_130 == 0) {
              local_76 = local_136;
              local_a8 = local_168;
              local_75 = local_135;
              local_84 = local_144;
              local_7c = local_13c;
              local_7a = CONCAT22(local_138,uStack_13a);
              local_90 = uStack_150;
              local_a0 = CONCAT44(uStack_15c,local_160);
              uStack_98 = CONCAT44(uStack_154,uStack_158);
              local_88 = local_148;
              local_73 = local_133;
              local_8c = local_14c;
              local_50 = local_110;
              local_60 = (undefined4)local_120;
              uStack_5c = local_120._4_4_;
              uStack_58 = (undefined4)uStack_118;
              uStack_54 = uStack_118._4_4_;
              local_70 = local_130;
              uStack_6c = uStack_12c;
              uStack_68 = (undefined4)uStack_128;
              uStack_64 = uStack_128._4_4_;
              local_70 = FUN_1431edf91(local_168,local_120 != 0);
              lVar7 = *DAT_14ca83900;
              puVar11 = &local_a8;
            }
            else {
              lVar7 = *DAT_14ca83900;
              puVar11 = &local_168;
            }
            (**(code **)(lVar7 + 0x1a0))(DAT_14ca83900,&local_170,&DAT_14ca85100,puVar11);
            lVar7 = _Dst[lVar10 + 0x47];
            _Dst[lVar10 + 0x47] = local_170;
            local_170 = 0;
            if (lVar7 != 0) {
              LOCK();
              puVar1 = (uint *)(lVar7 + 8);
              uVar3 = *puVar1;
              *puVar1 = *puVar1 - 1;
              UNLOCK();
              if ((uVar3 & 0x3fffffff) == 1) {
                puVar1 = (uint *)(lVar7 + 8);
                LOCK();
                uVar3 = *puVar1;
                *puVar1 = *puVar1 | 0x40000000;
                UNLOCK();
                if ((uVar3 >> 0x1e & 1) == 0) {
                  bVar4 = *(byte *)(lVar7 + 0xd);
                  plVar6 = (longlong *)FUN_14001cc68(0x10,8);
                  plVar6[1] = lVar7;
                  plVar9 = DAT_14ca843c0;
                  plVar8 = DAT_14ca843c8;
                  if ((bVar4 & 2) == 0) {
                    do {
                      *plVar6 = (longlong)plVar9;
                      LOCK();
                      bVar12 = plVar9 != DAT_14ca843c0;
                      plVar8 = plVar6;
                      if (bVar12) {
                        plVar9 = DAT_14ca843c0;
                        plVar8 = DAT_14ca843c0;
                      }
                      DAT_14ca843c0 = plVar8;
                      UNLOCK();
                    } while (bVar12);
                  }
                  else {
                    do {
                      *plVar6 = (longlong)plVar8;
                      LOCK();
                      bVar12 = plVar8 != DAT_14ca843c8;
                      plVar9 = plVar6;
                      if (bVar12) {
                        plVar8 = DAT_14ca843c8;
                        plVar9 = DAT_14ca843c8;
                      }
                      DAT_14ca843c8 = plVar9;
                      UNLOCK();
                    } while (bVar12);
                  }
                }
              }
              lVar7 = local_170;
              if (local_170 != 0) {
                LOCK();
                puVar1 = (uint *)(local_170 + 8);
                uVar3 = *puVar1;
                *puVar1 = *puVar1 - 1;
                UNLOCK();
                if ((uVar3 & 0x3fffffff) == 1) {
                  puVar1 = (uint *)(local_170 + 8);
                  LOCK();
                  uVar3 = *puVar1;
                  *puVar1 = *puVar1 | 0x40000000;
                  UNLOCK();
                  if ((uVar3 >> 0x1e & 1) == 0) {
                    bVar4 = *(byte *)(local_170 + 0xd);
                    plVar6 = (longlong *)FUN_14001cc68(0x10,8);
                    plVar6[1] = lVar7;
                    plVar9 = DAT_14ca843c0;
                    plVar8 = DAT_14ca843c8;
                    if ((bVar4 & 2) == 0) {
                      do {
                        *plVar6 = (longlong)plVar9;
                        LOCK();
                        bVar12 = plVar9 != DAT_14ca843c0;
                        plVar8 = plVar6;
                        if (bVar12) {
                          plVar9 = DAT_14ca843c0;
                          plVar8 = DAT_14ca843c0;
                        }
                        DAT_14ca843c0 = plVar8;
                        UNLOCK();
                      } while (bVar12);
                    }
                    else {
                      do {
                        *plVar6 = (longlong)plVar8;
                        LOCK();
                        bVar12 = plVar8 != DAT_14ca843c8;
                        plVar9 = plVar6;
                        if (bVar12) {
                          plVar8 = DAT_14ca843c8;
                          plVar9 = DAT_14ca843c8;
                        }
                        DAT_14ca843c8 = plVar9;
                        UNLOCK();
                      } while (bVar12);
                    }
                  }
                }
              }
            }
          }
          if (*(int *)(_Dst + lVar10 * 10 + 0x23) != 0) {
            if (local_d0 == 0) {
              local_76 = local_d6;
              local_a8 = local_108;
              local_75 = local_d5;
              local_84 = local_e4;
              local_7c = local_dc;
              local_7a = CONCAT22(local_d8,uStack_da);
              local_90 = uStack_f0;
              local_a0 = CONCAT44(uStack_fc,local_100);
              uStack_98 = CONCAT44(uStack_f4,uStack_f8);
              local_88 = local_e8;
              local_73 = local_d3;
              local_8c = local_ec;
              local_50 = local_b0;
              local_60 = (undefined4)local_c0;
              uStack_5c = local_c0._4_4_;
              uStack_58 = (undefined4)uStack_b8;
              uStack_54 = uStack_b8._4_4_;
              local_70 = local_d0;
              uStack_6c = uStack_cc;
              uStack_68 = (undefined4)uStack_c8;
              uStack_64 = uStack_c8._4_4_;
              local_70 = FUN_1431edf91(local_108,local_c0 != 0);
              lVar7 = *DAT_14ca83900;
              puVar11 = &local_a8;
            }
            else {
              lVar7 = *DAT_14ca83900;
              puVar11 = &local_108;
            }
            (**(code **)(lVar7 + 0x1a0))(DAT_14ca83900,&local_170,&DAT_14ca85100,puVar11);
            lVar7 = _Dst[lVar10 + 0x4a];
            _Dst[lVar10 + 0x4a] = local_170;
            local_170 = 0;
            if (lVar7 != 0) {
              LOCK();
              puVar1 = (uint *)(lVar7 + 8);
              uVar3 = *puVar1;
              *puVar1 = *puVar1 - 1;
              UNLOCK();
              if ((uVar3 & 0x3fffffff) == 1) {
                puVar1 = (uint *)(lVar7 + 8);
                LOCK();
                uVar3 = *puVar1;
                *puVar1 = *puVar1 | 0x40000000;
                UNLOCK();
                if ((uVar3 >> 0x1e & 1) == 0) {
                  bVar4 = *(byte *)(lVar7 + 0xd);
                  plVar6 = (longlong *)FUN_14001cc68(0x10,8);
                  plVar6[1] = lVar7;
                  plVar9 = DAT_14ca843c0;
                  plVar8 = DAT_14ca843c8;
                  if ((bVar4 & 2) == 0) {
                    do {
                      *plVar6 = (longlong)plVar9;
                      LOCK();
                      bVar12 = plVar9 != DAT_14ca843c0;
                      plVar8 = plVar6;
                      if (bVar12) {
                        plVar9 = DAT_14ca843c0;
                        plVar8 = DAT_14ca843c0;
                      }
                      DAT_14ca843c0 = plVar8;
                      UNLOCK();
                    } while (bVar12);
                  }
                  else {
                    do {
                      *plVar6 = (longlong)plVar8;
                      LOCK();
                      bVar12 = plVar8 != DAT_14ca843c8;
                      plVar9 = plVar6;
                      if (bVar12) {
                        plVar8 = DAT_14ca843c8;
                        plVar9 = DAT_14ca843c8;
                      }
                      DAT_14ca843c8 = plVar9;
                      UNLOCK();
                    } while (bVar12);
                  }
                }
              }
              lVar7 = local_170;
              if (local_170 != 0) {
                LOCK();
                puVar1 = (uint *)(local_170 + 8);
                uVar3 = *puVar1;
                *puVar1 = *puVar1 - 1;
                UNLOCK();
                if ((uVar3 & 0x3fffffff) == 1) {
                  puVar1 = (uint *)(local_170 + 8);
                  LOCK();
                  uVar3 = *puVar1;
                  *puVar1 = *puVar1 | 0x40000000;
                  UNLOCK();
                  if ((uVar3 >> 0x1e & 1) == 0) {
                    bVar4 = *(byte *)(local_170 + 0xd);
                    plVar6 = (longlong *)FUN_14001cc68(0x10,8);
                    plVar6[1] = lVar7;
                    plVar9 = DAT_14ca843c0;
                    plVar8 = DAT_14ca843c8;
                    if ((bVar4 & 2) == 0) {
                      do {
                        *plVar6 = (longlong)plVar9;
                        LOCK();
                        bVar12 = plVar9 != DAT_14ca843c0;
                        plVar8 = plVar6;
                        if (bVar12) {
                          plVar9 = DAT_14ca843c0;
                          plVar8 = DAT_14ca843c0;
                        }
                        DAT_14ca843c0 = plVar8;
                        UNLOCK();
                      } while (bVar12);
                    }
                    else {
                      do {
                        *plVar6 = (longlong)plVar8;
                        LOCK();
                        bVar12 = plVar8 != DAT_14ca843c8;
                        plVar9 = plVar6;
                        if (bVar12) {
                          plVar8 = DAT_14ca843c8;
                          plVar9 = DAT_14ca843c8;
                        }
                        DAT_14ca843c8 = plVar9;
                        UNLOCK();
                      } while (bVar12);
                    }
                  }
                }
              }
            }
          }
          if (*(int *)(_Dst + lVar10 * 10 + 0x25) != 0) {
            if (local_d0 == 0) {
              local_76 = local_d6;
              local_a8 = local_108;
              local_75 = local_d5;
              local_84 = local_e4;
              local_7c = local_dc;
              local_7a = CONCAT22(local_d8,uStack_da);
              local_90 = uStack_f0;
              local_a0 = CONCAT44(uStack_fc,local_100);
              uStack_98 = CONCAT44(uStack_f4,uStack_f8);
              local_88 = local_e8;
              local_73 = local_d3;
              local_8c = local_ec;
              local_50 = local_b0;
              local_60 = (undefined4)local_c0;
              uStack_5c = local_c0._4_4_;
              uStack_58 = (undefined4)uStack_b8;
              uStack_54 = uStack_b8._4_4_;
              local_70 = local_d0;
              uStack_6c = uStack_cc;
              uStack_68 = (undefined4)uStack_c8;
              uStack_64 = uStack_c8._4_4_;
              local_70 = FUN_1431edf91(local_108,local_c0 != 0);
              lVar7 = *DAT_14ca83900;
              puVar11 = &local_a8;
            }
            else {
              lVar7 = *DAT_14ca83900;
              puVar11 = &local_108;
            }
            (**(code **)(lVar7 + 0x1a0))(DAT_14ca83900,&local_170,&DAT_14ca85100,puVar11);
            lVar7 = _Dst[lVar10 + 0x4d];
            _Dst[lVar10 + 0x4d] = local_170;
            local_170 = 0;
            if (lVar7 != 0) {
              LOCK();
              puVar1 = (uint *)(lVar7 + 8);
              uVar3 = *puVar1;
              *puVar1 = *puVar1 - 1;
              UNLOCK();
              if ((uVar3 & 0x3fffffff) == 1) {
                puVar1 = (uint *)(lVar7 + 8);
                LOCK();
                uVar3 = *puVar1;
                *puVar1 = *puVar1 | 0x40000000;
                UNLOCK();
                if ((uVar3 >> 0x1e & 1) == 0) {
                  bVar4 = *(byte *)(lVar7 + 0xd);
                  plVar6 = (longlong *)FUN_14001cc68(0x10,8);
                  plVar6[1] = lVar7;
                  plVar9 = DAT_14ca843c0;
                  plVar8 = DAT_14ca843c8;
                  if ((bVar4 & 2) == 0) {
                    do {
                      *plVar6 = (longlong)plVar9;
                      LOCK();
                      bVar12 = plVar9 != DAT_14ca843c0;
                      plVar8 = plVar6;
                      if (bVar12) {
                        plVar9 = DAT_14ca843c0;
                        plVar8 = DAT_14ca843c0;
                      }
                      DAT_14ca843c0 = plVar8;
                      UNLOCK();
                    } while (bVar12);
                  }
                  else {
                    do {
                      *plVar6 = (longlong)plVar8;
                      LOCK();
                      bVar12 = plVar8 != DAT_14ca843c8;
                      plVar9 = plVar6;
                      if (bVar12) {
                        plVar8 = DAT_14ca843c8;
                        plVar9 = DAT_14ca843c8;
                      }
                      DAT_14ca843c8 = plVar9;
                      UNLOCK();
                    } while (bVar12);
                  }
                }
              }
              lVar7 = local_170;
              if (local_170 != 0) {
                LOCK();
                puVar1 = (uint *)(local_170 + 8);
                uVar3 = *puVar1;
                *puVar1 = *puVar1 - 1;
                UNLOCK();
                if ((uVar3 & 0x3fffffff) == 1) {
                  puVar1 = (uint *)(local_170 + 8);
                  LOCK();
                  uVar3 = *puVar1;
                  *puVar1 = *puVar1 | 0x40000000;
                  UNLOCK();
                  if ((uVar3 >> 0x1e & 1) == 0) {
                    bVar4 = *(byte *)(local_170 + 0xd);
                    plVar6 = (longlong *)FUN_14001cc68(0x10,8);
                    plVar6[1] = lVar7;
                    plVar9 = DAT_14ca843c0;
                    plVar8 = DAT_14ca843c8;
                    if ((bVar4 & 2) == 0) {
                      do {
                        *plVar6 = (longlong)plVar9;
                        LOCK();
                        bVar12 = plVar9 != DAT_14ca843c0;
                        plVar8 = plVar6;
                        if (bVar12) {
                          plVar9 = DAT_14ca843c0;
                          plVar8 = DAT_14ca843c0;
                        }
                        DAT_14ca843c0 = plVar8;
                        UNLOCK();
                      } while (bVar12);
                    }
                    else {
                      do {
                        *plVar6 = (longlong)plVar8;
                        LOCK();
                        bVar12 = plVar8 != DAT_14ca843c8;
                        plVar9 = plVar6;
                        if (bVar12) {
                          plVar8 = DAT_14ca843c8;
                          plVar9 = DAT_14ca843c8;
                        }
                        DAT_14ca843c8 = plVar9;
                        UNLOCK();
                      } while (bVar12);
                    }
                  }
                }
              }
            }
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 < *local_180);
      }
      FUN_144d67bc0(local_178,local_180);
      _Dst[0x3a] = 0;
      _Dst[0x3b] = 0x3f800000;
      _Dst[0x3c] = 0x3f80000000000000;
      *(undefined4 *)((longlong)_Dst + 500) = 0;
      *(undefined4 *)(_Dst + 0x3f) = 0;
      *(undefined4 *)((longlong)_Dst + 0x1fc) = 0x3f800000;
      *(undefined4 *)(_Dst + 0x40) = 0x3f800000;
      _Dst[0x3d] = 0x3f800000;
      *(undefined4 *)(_Dst + 0x3e) = 0;
      *(undefined4 *)(_Dst + 0x50) = 0;
      *(undefined1 **)((longlong)_Dst + 0x284) = &DAT_3f8000003f800000;
      _Dst[10] = FUN_143feca32;
      *_Dst = &DAT_143fecd2b;
      _Dst[1] = &LAB_143fecd2c;
      _Dst[2] = FUN_143fecd82;
      _Dst[3] = &LAB_143fed9b8;
      _Dst[4] = &LAB_143fec97f;
      _Dst[5] = &LAB_143fec9c2;
      _Dst[6] = &LAB_143fec9e9;
      _Dst[7] = &LAB_143feca0e;
      goto LAB_143fec8d8;
    }
    FUN_1400020a8(_Dst);
  }
  _Dst = (undefined8 *)0x0;
LAB_143fec8d8:
  if ((local_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return _Dst;
}



// FUNCTION 143fec91c FUN_143fec91c body=96 status=ok
// SIG undefined FUN_143fec91c(void)

undefined8 FUN_143fec91c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) ||
      (plVar3 = *(longlong **)(param_1 + 0x20), plVar3 == (longlong *)0x0)) || ((int)plVar3[1] < 1))
  {
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



// FUNCTION 143feca32 FUN_143feca32 body=761 status=ok
// SIG undefined FUN_143feca32(void)

void FUN_143feca32(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  
  if (0 < *(int *)(param_1 + 200)) {
    lVar8 = 0;
    do {
      lVar4 = *(longlong *)(param_1 + 0x208 + lVar8 * 8);
      if (lVar4 != 0) {
        *(undefined8 *)(param_1 + 0x208 + lVar8 * 8) = 0;
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
            plVar5 = (longlong *)FUN_14001cc68(0x10,8);
            plVar5[1] = lVar4;
            plVar7 = DAT_14ca843c0;
            plVar6 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar5 = (longlong)plVar7;
                LOCK();
                bVar9 = plVar7 != DAT_14ca843c0;
                plVar6 = plVar5;
                if (bVar9) {
                  plVar7 = DAT_14ca843c0;
                  plVar6 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar6;
                UNLOCK();
              } while (bVar9);
            }
            else {
              do {
                *plVar5 = (longlong)plVar6;
                LOCK();
                bVar9 = plVar6 != DAT_14ca843c8;
                plVar7 = plVar5;
                if (bVar9) {
                  plVar6 = DAT_14ca843c8;
                  plVar7 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar7;
                UNLOCK();
              } while (bVar9);
            }
          }
        }
      }
      lVar4 = *(longlong *)(param_1 + 0x220 + lVar8 * 8);
      if (lVar4 != 0) {
        *(undefined8 *)(param_1 + 0x220 + lVar8 * 8) = 0;
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
            plVar5 = (longlong *)FUN_14001cc68(0x10,8);
            plVar5[1] = lVar4;
            plVar7 = DAT_14ca843c0;
            plVar6 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar5 = (longlong)plVar7;
                LOCK();
                bVar9 = plVar7 != DAT_14ca843c0;
                plVar6 = plVar5;
                if (bVar9) {
                  plVar7 = DAT_14ca843c0;
                  plVar6 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar6;
                UNLOCK();
              } while (bVar9);
            }
            else {
              do {
                *plVar5 = (longlong)plVar6;
                LOCK();
                bVar9 = plVar6 != DAT_14ca843c8;
                plVar7 = plVar5;
                if (bVar9) {
                  plVar6 = DAT_14ca843c8;
                  plVar7 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar7;
                UNLOCK();
              } while (bVar9);
            }
          }
        }
      }
      lVar4 = *(longlong *)(param_1 + 0x238 + lVar8 * 8);
      if (lVar4 != 0) {
        *(undefined8 *)(param_1 + 0x238 + lVar8 * 8) = 0;
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
            plVar5 = (longlong *)FUN_14001cc68(0x10,8);
            plVar5[1] = lVar4;
            plVar7 = DAT_14ca843c0;
            plVar6 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar5 = (longlong)plVar7;
                LOCK();
                bVar9 = plVar7 != DAT_14ca843c0;
                plVar6 = plVar5;
                if (bVar9) {
                  plVar7 = DAT_14ca843c0;
                  plVar6 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar6;
                UNLOCK();
              } while (bVar9);
            }
            else {
              do {
                *plVar5 = (longlong)plVar6;
                LOCK();
                bVar9 = plVar6 != DAT_14ca843c8;
                plVar7 = plVar5;
                if (bVar9) {
                  plVar6 = DAT_14ca843c8;
                  plVar7 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar7;
                UNLOCK();
              } while (bVar9);
            }
          }
        }
      }
      lVar4 = *(longlong *)(param_1 + 0x250 + lVar8 * 8);
      if (lVar4 != 0) {
        *(undefined8 *)(param_1 + 0x250 + lVar8 * 8) = 0;
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
            plVar5 = (longlong *)FUN_14001cc68(0x10,8);
            plVar5[1] = lVar4;
            plVar7 = DAT_14ca843c0;
            plVar6 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar5 = (longlong)plVar7;
                LOCK();
                bVar9 = plVar7 != DAT_14ca843c0;
                plVar6 = plVar5;
                if (bVar9) {
                  plVar7 = DAT_14ca843c0;
                  plVar6 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar6;
                UNLOCK();
              } while (bVar9);
            }
            else {
              do {
                *plVar5 = (longlong)plVar6;
                LOCK();
                bVar9 = plVar6 != DAT_14ca843c8;
                plVar7 = plVar5;
                if (bVar9) {
                  plVar6 = DAT_14ca843c8;
                  plVar7 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar7;
                UNLOCK();
              } while (bVar9);
            }
          }
        }
      }
      lVar4 = *(longlong *)(param_1 + 0x268 + lVar8 * 8);
      if (lVar4 != 0) {
        *(undefined8 *)(param_1 + 0x268 + lVar8 * 8) = 0;
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
            plVar5 = (longlong *)FUN_14001cc68(0x10,8);
            plVar5[1] = lVar4;
            plVar7 = DAT_14ca843c0;
            plVar6 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar5 = (longlong)plVar7;
                LOCK();
                bVar9 = plVar7 != DAT_14ca843c0;
                plVar6 = plVar5;
                if (bVar9) {
                  plVar7 = DAT_14ca843c0;
                  plVar6 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar6;
                UNLOCK();
              } while (bVar9);
            }
            else {
              do {
                *plVar5 = (longlong)plVar6;
                LOCK();
                bVar9 = plVar6 != DAT_14ca843c8;
                plVar7 = plVar5;
                if (bVar9) {
                  plVar6 = DAT_14ca843c8;
                  plVar7 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar7;
                UNLOCK();
              } while (bVar9);
            }
          }
        }
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_1 + 200));
  }
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143fecd82 FUN_143fecd82 body=3125 status=ok
// SIG undefined FUN_143fecd82(void)

void FUN_143fecd82(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  bool bVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_798 [32];
  undefined1 local_778;
  undefined1 local_769;
  undefined4 local_768;
  undefined4 uStack_764;
  undefined4 uStack_760;
  undefined4 uStack_75c;
  undefined4 local_758;
  undefined4 uStack_754;
  undefined4 uStack_750;
  undefined4 uStack_74c;
  undefined4 local_748;
  undefined4 uStack_744;
  undefined4 uStack_740;
  undefined4 uStack_73c;
  undefined8 *local_738;
  undefined8 *local_730;
  undefined8 *local_728;
  undefined8 *local_720;
  int local_718;
  int local_714;
  longlong local_710;
  int local_704;
  longlong local_700;
  longlong local_6f8;
  undefined8 local_6f0;
  undefined8 uStack_6e8;
  longlong local_6e0;
  undefined1 local_6d8 [112];
  undefined8 *local_668;
  undefined8 *local_660;
  longlong local_640;
  uint local_638;
  uint local_634;
  longlong local_570;
  uint local_568;
  uint local_564;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_798;
  local_700 = param_1 + 200;
  local_704 = *(int *)(param_1 + 0xdc);
  lVar5 = (longlong)local_704 * 0x50 + param_1;
  local_710 = lVar5 + 0xe0;
  local_6f8 = param_1;
  if (DAT_14cb9e6b0 == 0) goto LAB_143fed982;
  local_714 = *(int *)(lVar5 + 0x118);
  local_718 = *(int *)(lVar5 + 0x128);
  FUN_1407779ba(local_6d8,&DAT_14ca85100,param_3,0);
  puVar10 = (undefined8 *)((longlong)local_668 + 0xfU & 0xfffffffffffffff0);
  puVar9 = puVar10 + 0x40;
  if (local_660 < puVar9) {
    FUN_140023dd8(&local_668,0x210);
    puVar10 = (undefined8 *)((longlong)local_668 + 0xfU & 0xfffffffffffffff0);
    puVar9 = puVar10 + 0x40;
  }
  *puVar10 = &PTR_FUN_14b5a8898;
  local_668 = puVar9;
  FUN_143fed9f0(puVar10 + 2);
  uVar4 = local_638;
  lVar5 = (longlong)(int)local_638;
  local_638 = local_638 + 1;
  if (local_634 < local_638) {
    FUN_1448cfae8(&local_640,uVar4);
  }
  *(undefined8 **)(local_640 + lVar5 * 8) = puVar10;
  local_720 = puVar10 + 2;
  uVar6 = FUN_1418c2815(local_6d8,DAT_14cb9e6b0,L"Bink_RT");
  lVar5 = local_6f8;
  uVar2 = DAT_14cb9e6b8;
  puVar10[0x20] = uVar6;
  puVar10[0x21] = 0;
  *(undefined1 *)(puVar10 + 0x22) = uVar2;
  *(undefined1 *)((longlong)puVar10 + 0x111) = 0;
  *(undefined2 *)((longlong)puVar10 + 0x112) = 0xffff;
  lVar11 = (longlong)local_704;
  puVar9 = (undefined8 *)(local_6f8 + 0x208 + lVar11 * 8);
  uVar6 = FUN_1418c2815(local_6d8,*puVar9,L"BinkY");
  puVar10[2] = uVar6;
  uVar6 = FUN_1418c2815(local_6d8,puVar9[3],L"BinkCr");
  puVar10[3] = uVar6;
  uVar6 = FUN_1418c2815(local_6d8,puVar9[6],L"BinkCb");
  puVar10[4] = uVar6;
  puVar7 = (undefined8 *)(lVar5 + 0x250 + lVar11 * 8);
  if (local_714 == 0) {
    puVar7 = puVar9;
  }
  uVar6 = FUN_1418c2815(local_6d8,*puVar7,L"BinkA");
  iVar1 = local_718;
  puVar10[5] = uVar6;
  puVar7 = (undefined8 *)(lVar5 + 0x268 + lVar11 * 8);
  if (local_718 == 0) {
    puVar7 = puVar9;
  }
  uVar6 = FUN_1418c2815(local_6d8,*puVar7,L"BinkH");
  puVar10[6] = uVar6;
  uVar6 = DAT_14c9c0de0;
  puVar10[7] = DAT_14c9c0de0;
  puVar10[8] = uVar6;
  puVar10[9] = uVar6;
  puVar10[10] = uVar6;
  puVar10[0xb] = uVar6;
  if (*(int *)(lVar5 + 0x1ec) == 1) {
    uVar13 = *(undefined4 *)(lVar5 + 0x1e8);
LAB_143fed082:
    *(undefined4 *)(puVar10 + 0xc) = uVar13;
    *(undefined4 *)((longlong)puVar10 + 100) = uVar13;
    *(undefined4 *)(puVar10 + 0xd) = uVar13;
    *(undefined4 *)((longlong)puVar10 + 0x6c) = *(undefined4 *)(lVar5 + 0x1e8);
    *(undefined4 *)(puVar10 + 0xe) = *(undefined4 *)(*(longlong *)(lVar5 + 0xc0) + 0x60);
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)puVar10 + 0x74) = *(undefined4 *)(lVar5 + 0x284);
      *(undefined4 *)(puVar10 + 0xf) = *(undefined4 *)(lVar5 + 0x288);
      *(undefined4 *)((longlong)puVar10 + 0x7c) = 0;
      *(undefined4 *)(puVar10 + 0x10) = *(undefined4 *)(*(longlong *)(lVar5 + 0xc0) + 100);
      *(undefined4 *)((longlong)puVar10 + 0x84) =
           *(undefined4 *)(*(longlong *)(lVar5 + 0xc0) + 0x68);
      *(undefined4 *)(puVar10 + 0x11) = *(undefined4 *)(*(longlong *)(lVar5 + 0xc0) + 0x6c);
      uVar13 = *(undefined4 *)(*(longlong *)(lVar5 + 0xc0) + 0x70);
      goto LAB_143fed139;
    }
    *(undefined4 *)((longlong)puVar10 + 0x74) = *(undefined4 *)(*(longlong *)(lVar5 + 0xc0) + 100);
    *(undefined4 *)(puVar10 + 0xf) = *(undefined4 *)(*(longlong *)(lVar5 + 0xc0) + 0x68);
    *(undefined4 *)((longlong)puVar10 + 0x7c) = *(undefined4 *)(*(longlong *)(lVar5 + 0xc0) + 0x6c);
    *(undefined4 *)(puVar10 + 0x10) = *(undefined4 *)(*(longlong *)(lVar5 + 0xc0) + 0x70);
    *(undefined4 *)((longlong)puVar10 + 0x84) = *(undefined4 *)(*(longlong *)(lVar5 + 0xc0) + 0x74);
    *(undefined4 *)(puVar10 + 0x11) = *(undefined4 *)(*(longlong *)(lVar5 + 0xc0) + 0x78);
    *(undefined4 *)((longlong)puVar10 + 0x8c) = *(undefined4 *)(*(longlong *)(lVar5 + 0xc0) + 0x7c);
    *(undefined4 *)(puVar10 + 0x12) = *(undefined4 *)(*(longlong *)(lVar5 + 0xc0) + 0x80);
    *(undefined4 *)((longlong)puVar10 + 0x94) = *(undefined4 *)(*(longlong *)(lVar5 + 0xc0) + 0x84);
    *(undefined4 *)(puVar10 + 0x13) = *(undefined4 *)(*(longlong *)(lVar5 + 0xc0) + 0x88);
    *(undefined4 *)((longlong)puVar10 + 0x9c) = *(undefined4 *)(*(longlong *)(lVar5 + 0xc0) + 0x8c);
    *(undefined4 *)(puVar10 + 0x14) = *(undefined4 *)(*(longlong *)(lVar5 + 0xc0) + 0x90);
    *(undefined4 *)((longlong)puVar10 + 0xa4) = *(undefined4 *)(*(longlong *)(lVar5 + 0xc0) + 0x94);
    *(undefined4 *)(puVar10 + 0x15) = *(undefined4 *)(*(longlong *)(lVar5 + 0xc0) + 0x98);
    uVar13 = *(undefined4 *)(*(longlong *)(lVar5 + 0xc0) + 0x9c);
    lVar11 = 0xac;
  }
  else {
    if (*(int *)(lVar5 + 0x1ec) != 3) {
      uVar13 = 0x3f800000;
      goto LAB_143fed082;
    }
    puVar10[0xc] = &DAT_3f8000003f800000;
    puVar10[0xd] = &DAT_3f8000003f800000;
    puVar10[0xe] = 0x3f40c0c23f40c0c2;
    puVar10[0xf] = 0x3f8000003f40c0c2;
    *(float *)(puVar10 + 0x10) = (float)**(uint **)(lVar5 + 0xc0) * 0.125;
    *(float *)((longlong)puVar10 + 0x84) = (float)*(uint *)(*(longlong *)(lVar5 + 0xc0) + 4) * 0.125
    ;
    *(undefined4 *)(puVar10 + 0x11) = 0;
    uVar13 = 0;
LAB_143fed139:
    lVar11 = 0x8c;
  }
  *(undefined4 *)((longlong)puVar10 + lVar11) = uVar13;
  fVar14 = *(float *)(lVar5 + 0x1d8) - *(float *)(lVar5 + 0x1d0);
  *(float *)(puVar10 + 0x16) = fVar14 + fVar14;
  fVar14 = *(float *)(lVar5 + 0x1e0) - *(float *)(lVar5 + 0x1d0);
  *(float *)((longlong)puVar10 + 0xb4) = fVar14 + fVar14;
  *(float *)(puVar10 + 0x17) = (*(float *)(lVar5 + 0x1dc) - *(float *)(lVar5 + 0x1d4)) * -2.0;
  *(float *)((longlong)puVar10 + 0xbc) =
       (*(float *)(lVar5 + 0x1e4) - *(float *)(lVar5 + 0x1d4)) * -2.0;
  *(float *)(puVar10 + 0x18) = *(float *)(lVar5 + 0x1d0) + *(float *)(lVar5 + 0x1d0) + -1.0;
  *(float *)((longlong)puVar10 + 0xc4) =
       1.0 - (*(float *)(lVar5 + 0x1d4) + *(float *)(lVar5 + 0x1d4));
  puVar10[0x19] = 0;
  fVar14 = (float)*(int *)(lVar5 + 0xa8) / (float)*(uint *)(local_700 + 4);
  fVar15 = (float)*(int *)(lVar5 + 0xac) / (float)*(uint *)(local_700 + 8);
  fVar16 = (float)(*(int *)(lVar5 + 0xa8) / 2) / (float)*(uint *)(local_700 + 0xc);
  fVar17 = (float)(*(int *)(lVar5 + 0xac) / 2) / (float)*(uint *)(local_700 + 0x10);
  *(float *)(puVar10 + 0x1a) = (*(float *)(lVar5 + 0x1fc) - *(float *)(lVar5 + 500)) * fVar14;
  *(undefined4 *)((longlong)puVar10 + 0xd4) = 0;
  *(float *)(puVar10 + 0x1b) = (*(float *)(lVar5 + 0x1fc) - *(float *)(lVar5 + 500)) * fVar16;
  *(undefined8 *)((longlong)puVar10 + 0xdc) = 0;
  *(float *)((longlong)puVar10 + 0xe4) =
       (*(float *)(lVar5 + 0x200) - *(float *)(lVar5 + 0x1f8)) * fVar15;
  *(undefined4 *)(puVar10 + 0x1d) = 0;
  *(float *)((longlong)puVar10 + 0xec) =
       (*(float *)(lVar5 + 0x200) - *(float *)(lVar5 + 0x1f8)) * fVar17;
  *(float *)(puVar10 + 0x1e) = fVar14 * *(float *)(lVar5 + 500);
  *(float *)((longlong)puVar10 + 0xf4) = fVar15 * *(float *)(lVar5 + 0x1f8);
  *(float *)(puVar10 + 0x1f) = fVar16 * *(float *)(lVar5 + 500);
  *(float *)((longlong)puVar10 + 0xfc) = fVar17 * *(float *)(lVar5 + 0x1f8);
  puVar10 = (undefined8 *)((longlong)local_668 + 0xfU & 0xfffffffffffffff0);
  puVar9 = puVar10 + 0x40;
  if (local_660 < puVar9) {
    FUN_140023dd8(&local_668,0x210);
    puVar10 = (undefined8 *)((longlong)local_668 + 0xfU & 0xfffffffffffffff0);
    puVar9 = puVar10 + 0x40;
  }
  *puVar10 = &PTR_FUN_14b5a88a0;
  puVar7 = puVar10 + 2;
  local_668 = puVar9;
  FUN_143fed9f0(puVar7);
  uVar4 = local_638;
  lVar5 = (longlong)(int)local_638;
  local_638 = local_638 + 1;
  if (local_634 < local_638) {
    FUN_1448cfae8(&local_640,uVar4);
  }
  *(undefined8 **)(local_640 + lVar5 * 8) = puVar10;
  local_728 = puVar7;
  memcpy(puVar7,local_720,0x1f0);
  puVar10 = (undefined8 *)((longlong)local_668 + 0xfU & 0xfffffffffffffff0);
  puVar9 = puVar10 + 0x40;
  if (local_660 < puVar9) {
    FUN_140023dd8(&local_668,0x210);
    puVar10 = (undefined8 *)((longlong)local_668 + 0xfU & 0xfffffffffffffff0);
    puVar9 = puVar10 + 0x40;
  }
  *puVar10 = &PTR_FUN_14b5a88a8;
  puVar7 = puVar10 + 2;
  local_668 = puVar9;
  FUN_143fed9f0(puVar7);
  uVar4 = local_638;
  lVar5 = (longlong)(int)local_638;
  local_638 = local_638 + 1;
  if (local_634 < local_638) {
    FUN_1448cfae8(&local_640,uVar4);
  }
  *(undefined8 **)(local_640 + lVar5 * 8) = puVar10;
  local_730 = puVar7;
  memcpy(puVar7,local_720,0x1f0);
  puVar10 = (undefined8 *)((longlong)local_668 + 0xfU & 0xfffffffffffffff0);
  puVar9 = puVar10 + 0x40;
  if (local_660 < puVar9) {
    FUN_140023dd8(&local_668,0x210);
    puVar10 = (undefined8 *)((longlong)local_668 + 0xfU & 0xfffffffffffffff0);
    puVar9 = puVar10 + 0x40;
  }
  *puVar10 = &PTR_FUN_14b5a88b0;
  puVar7 = puVar10 + 2;
  local_668 = puVar9;
  FUN_143fed9f0(puVar7);
  uVar4 = local_638;
  lVar5 = (longlong)(int)local_638;
  local_638 = local_638 + 1;
  if (local_634 < local_638) {
    FUN_1448cfae8(&local_640,uVar4);
  }
  puVar3 = local_720;
  *(undefined8 **)(local_640 + lVar5 * 8) = puVar10;
  local_738 = puVar7;
  memcpy(puVar7,local_720,0x1f0);
  uVar6 = *(undefined8 *)
           (&DAT_14ca8c1f0 +
           (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
  uVar8 = FUN_1415a9850();
  FUN_1448e935e(uVar6,&local_6f0,uVar8,0);
  FUN_1415a9850();
  lVar5 = local_6f8;
  local_748 = (undefined4)local_6f0;
  uStack_744 = local_6f0._4_4_;
  uStack_740 = (undefined4)uStack_6e8;
  uStack_73c = uStack_6e8._4_4_;
  bVar12 = local_714 != 0;
  iVar1 = *(int *)(local_6f8 + 0x280);
  uVar8 = FUN_1415aa1a4();
  FUN_1448e935e(uVar6,&local_6f0,uVar8,(iVar1 == 1) * '\x02' + (iVar1 == 2) * '\x04' | bVar12);
  FUN_1415aa1a4();
  local_758 = (undefined4)local_6f0;
  uStack_754 = local_6f0._4_4_;
  uStack_750 = (undefined4)uStack_6e8;
  uStack_74c = uStack_6e8._4_4_;
  iVar1 = *(int *)(lVar5 + 0x1f0);
  uVar8 = FUN_1415a9a7a();
  FUN_1448e935e(uVar6,&local_6f0,uVar8,(uint)bVar12 + (iVar1 >> 0x1f) * -2);
  FUN_1415a9a7a();
  local_768 = (undefined4)local_6f0;
  uStack_764 = local_6f0._4_4_;
  uStack_760 = (undefined4)uStack_6e8;
  uStack_75c = uStack_6e8._4_4_;
  lVar5 = FUN_1415384ac();
  FUN_140069376(local_6d8);
  puVar10 = (undefined8 *)((longlong)local_668 + 7U & 0xfffffffffffffff8);
  puVar9 = puVar10 + 0x44;
  if (local_660 < puVar9) {
    FUN_140023dd8(&local_668,0x228);
    puVar10 = (undefined8 *)((longlong)local_668 + 7U & 0xfffffffffffffff8);
    puVar9 = puVar10 + 0x44;
  }
  local_6f0 = puVar3;
  uStack_6e8 = *(longlong *)(lVar5 + 0x48);
  if (uStack_6e8 != 0) {
    LOCK();
    *(int *)(uStack_6e8 + 8) = *(int *)(uStack_6e8 + 8) + 1;
    UNLOCK();
  }
  local_778 = 0;
  local_6e0 = lVar5;
  local_668 = puVar9;
  FUN_140068f1a(puVar10,&local_769,&local_6f0,0x21);
  uVar4 = local_568;
  *puVar10 = &PTR_FUN_14b5a88c0;
  puVar10[0x37] = &local_6f8;
  puVar10[0x38] = &local_700;
  puVar10[0x39] = &local_704;
  puVar10[0x3a] = &local_710;
  puVar10[0x3b] = &local_714;
  puVar10[0x3c] = &local_718;
  puVar10[0x3d] = &local_720;
  puVar10[0x3e] = &local_748;
  puVar10[0x3f] = &local_758;
  puVar10[0x40] = &local_730;
  puVar10[0x41] = &local_768;
  puVar10[0x42] = &local_738;
  puVar10[0x43] = &local_728;
  lVar5 = (longlong)(int)local_568;
  local_568 = local_568 + 1;
  if (local_564 < local_568) {
    FUN_14470e57a(&local_570,uVar4);
  }
  *(undefined8 **)(local_570 + lVar5 * 8) = puVar10;
  *(uint *)((longlong)puVar10 + 0x2c) = local_568 - 1;
  FUN_140069100(local_6d8,puVar10);
  FUN_140779360(local_6d8);
  FUN_140778010(local_6d8);
LAB_143fed982:
  if ((local_60 ^ (ulonglong)auStack_798) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fed9f0 FUN_143fed9f0 body=203 status=ok
// SIG undefined FUN_143fed9f0(void)

void FUN_143fed9f0(undefined1 (*param_1) [16])

{
  longlong lVar1;
  
  *(undefined1 (*) [16])(param_1[4] + 0xc) = (undefined1  [16])0x0;
  param_1[4] = (undefined1  [16])0x0;
  param_1[3] = (undefined1  [16])0x0;
  param_1[2] = (undefined1  [16])0x0;
  param_1[1] = (undefined1  [16])0x0;
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)(param_1[5] + 0xc) = 0x3f800000;
  *(undefined8 *)(param_1[6] + 4) = 0;
  *(undefined8 *)(param_1[6] + 0xc) = 0x3f800000;
  *(undefined8 *)(param_1[7] + 4) = 0;
  *(undefined8 *)(param_1[7] + 0xc) = 0x3f800000;
  *(undefined8 *)(param_1[8] + 4) = 0;
  *(undefined8 *)(param_1[8] + 0xc) = 0x3f800000;
  *(undefined8 *)(param_1[9] + 4) = 0;
  *(undefined8 *)(param_1[9] + 0xc) = 0x3f800000;
  *(undefined8 *)(param_1[10] + 4) = 0;
  *(undefined8 *)(param_1[10] + 0xc) = 0x3f800000;
  *(undefined8 *)(param_1[0xb] + 4) = 0;
  *(undefined8 *)(param_1[0xb] + 0xc) = 0x3f800000;
  *(undefined8 *)(param_1[0xc] + 4) = 0;
  *(undefined8 *)(param_1[0xc] + 0xc) = 0x3f800000;
  *(undefined8 *)(param_1[0xd] + 4) = 0;
  *(undefined8 *)(param_1[0xd] + 0xc) = 0x3f800000;
  *(undefined8 *)(param_1[0xe] + 4) = 0;
  *(undefined4 *)(param_1[0xe] + 0xc) = 0x3f800000;
  lVar1 = 0xf0;
  do {
    *(undefined1 (*) [16])(*param_1 + lVar1) = (undefined1  [16])0x0;
    *(undefined4 *)(param_1[1] + lVar1) = 0xffff0000;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x1b0);
  *(undefined4 *)(param_1[0x1c] + 4) = 0;
  param_1[0x1b] = (undefined1  [16])0x0;
  *(undefined2 *)param_1[0x1c] = 0;
  *(undefined4 *)(param_1[0x1c] + 8) = 0xffffffff;
  *(undefined4 *)(param_1[0x1c] + 0xc) = 0xffffffff;
  *(undefined4 *)param_1[0x1d] = 0xffffffff;
  *(undefined4 *)(param_1[0x1d] + 4) = 0xffffffff;
  *(undefined4 *)(param_1[0x1d] + 8) = 0;
  *(undefined2 *)(param_1[0x1d] + 0xc) = 0;
  *(undefined8 *)param_1[0x1e] = 0;
  return;
}



// FUNCTION 143fedabc FUN_143fedabc body=31 status=ok
// SIG undefined FUN_143fedabc(void)

undefined8 FUN_143fedabc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fedadc FUN_143fedadc body=31 status=ok
// SIG undefined FUN_143fedadc(void)

undefined8 FUN_143fedadc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fedafc FUN_143fedafc body=31 status=ok
// SIG undefined FUN_143fedafc(void)

undefined8 FUN_143fedafc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fedb1c FUN_143fedb1c body=31 status=ok
// SIG undefined FUN_143fedb1c(void)

undefined8 FUN_143fedb1c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fedb3c FUN_143fedb3c body=38 status=ok
// SIG undefined FUN_143fedb3c(void)

undefined8 FUN_143fedb3c(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fedb62 FUN_143fedb62 body=3837 status=ok
// SIG undefined FUN_143fedb62(void)

void FUN_143fedb62(longlong param_1,ulonglong *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined1 auVar8 [4];
  wchar_t *pwVar9;
  undefined8 *puVar10;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined8 *_Dst;
  longlong lVar18;
  undefined *puVar19;
  longlong lVar20;
  wchar_t *_Dest;
  byte bVar21;
  undefined8 *puVar22;
  size_t _Size;
  undefined8 uVar23;
  undefined1 *_Src;
  bool bVar24;
  undefined1 auStack_3f8 [32];
  undefined1 *local_3d8;
  undefined4 local_3d0;
  undefined8 local_3c8;
  longlong alStack_33d [2];
  undefined4 uStack_32d;
  byte bStack_329;
  undefined1 local_328 [16];
  undefined8 local_318;
  undefined1 local_268 [16];
  undefined1 local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined1 local_240 [7];
  undefined1 auStack_239 [5];
  undefined1 auStack_234 [3];
  undefined1 auStack_231 [5];
  byte abStack_22c [3];
  undefined1 uStack_229;
  undefined1 local_228 [16];
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  int iStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined8 local_1ac;
  undefined8 uStack_1a4;
  undefined8 local_19c;
  undefined5 uStack_194;
  undefined3 uStack_18f;
  undefined5 uStack_18c;
  undefined8 uStack_187;
  undefined1 local_178 [8];
  undefined1 auStack_170 [8];
  undefined1 local_168 [4];
  byte bStack_164;
  undefined3 uStack_163;
  uint local_160;
  undefined8 uStack_158;
  undefined1 local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  ushort local_78;
  undefined8 local_70;
  ushort local_68;
  ulonglong local_60;
  undefined *puVar11;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  FUN_144b1c6fa(param_1 + 0x10,local_228);
  puVar22 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar10 = puVar22 + 0x11;
  if ((undefined8 *)param_2[1] < puVar10) {
    FUN_140023dd8(param_2,0x90);
    puVar22 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar22 + 0x11;
  }
  *param_2 = (ulonglong)puVar10;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar22;
  param_2[6] = (ulonglong)(puVar22 + 1);
  puVar22[1] = 0;
  *puVar22 = &PTR_FUN_14a1fb978;
  puVar22[3] = 0;
  _Size = (size_t)(int)local_218;
  *(int *)(puVar22 + 4) = (int)local_218;
  if (_Size == 0) {
    *(undefined4 *)((longlong)puVar22 + 0x24) = 8;
  }
  else {
    _Src = (undefined1 *)local_228._8_8_;
    if ((undefined1 *)local_228._8_8_ == (undefined1 *)0x0) {
      _Src = local_228;
    }
    FUN_1446fe144(puVar22 + 2,local_218 & 0xffffffff,0);
    puVar10 = (undefined8 *)puVar22[3];
    if ((undefined8 *)puVar22[3] == (undefined8 *)0x0) {
      puVar10 = puVar22 + 2;
    }
    memcpy(puVar10,_Src,_Size);
  }
  puVar22[0xd] = 0;
  puVar10 = (undefined8 *)CONCAT44(uStack_1cc,local_1d0);
  *(int *)(puVar22 + 0xe) = iStack_1c8;
  if ((longlong)iStack_1c8 == 0) {
    *(undefined4 *)((longlong)puVar22 + 0x74) = 8;
  }
  else {
    if (puVar10 == (undefined8 *)0x0) {
      puVar10 = &uStack_210;
    }
    FUN_1446fe1b8(puVar22 + 5,iStack_1c8,0);
    _Dst = (undefined8 *)puVar22[0xd];
    if ((undefined8 *)puVar22[0xd] == (undefined8 *)0x0) {
      _Dst = puVar22 + 5;
    }
    memcpy(_Dst,puVar10,(longlong)iStack_1c8 << 3);
    puVar10 = (undefined8 *)CONCAT44(uStack_1cc,local_1d0);
  }
  puVar22[0xf] = CONCAT44(uStack_1bc,uStack_1c0);
  puVar22[0x10] = CONCAT44(uStack_1b4,uStack_1b8);
  if (puVar10 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar10);
  }
  if (local_228._8_8_ != 0) {
    FUN_1400020a8();
  }
  if (*(int *)(**(longlong **)(param_1 + 0x1b8) + 0xb0) != 0) {
    *(undefined4 *)(**(longlong **)(param_1 + 0x1b8) + 0xb0) = 0;
    local_218 = *(ulonglong *)(**(longlong **)(param_1 + 0x1c0) + 4);
    local_228 = (undefined1  [16])0x0;
    local_318 = *(undefined8 *)(**(longlong **)(param_1 + 0x1c0) + 0xc);
    local_328 = (undefined1  [16])0x0;
    local_3c8 = *(undefined8 *)**(longlong **)(param_1 + 0x1d0);
    local_3d0 = *(undefined4 *)(**(longlong **)(param_1 + 0x1d0) + 0xc);
    uVar23 = *(undefined8 *)
              (**(longlong **)(param_1 + 0x1b8) + 0x208 + (longlong)**(int **)(param_1 + 0x1c8) * 8)
    ;
    local_3d8 = local_228;
    if (*(char *)((longlong)param_2 + 0x69) == '\0') {
      FUN_14002049c(param_2,1);
      (**(code **)(*DAT_14ca83900 + 0x210))(DAT_14ca83900,param_2,uVar23,0);
      FUN_14002049c(param_2,0);
    }
    else {
      (**(code **)(*DAT_14ca83900 + 0x210))(DAT_14ca83900,param_2,uVar23,0);
    }
    uVar23 = *(undefined8 *)(**(longlong **)(param_1 + 0x1d0) + 0x10);
    uVar6 = *(undefined4 *)(**(longlong **)(param_1 + 0x1d0) + 0x1c);
    uVar14 = *(undefined8 *)
              (**(longlong **)(param_1 + 0x1b8) + 0x220 + (longlong)**(int **)(param_1 + 0x1c8) * 8)
    ;
    if (*(char *)((longlong)param_2 + 0x69) == '\0') {
      FUN_14002049c(param_2,1);
      local_3d8 = local_328;
      local_3d0 = uVar6;
      local_3c8 = uVar23;
      (**(code **)(*DAT_14ca83900 + 0x210))(DAT_14ca83900,param_2,uVar14,0);
      FUN_14002049c(param_2,0);
    }
    else {
      local_3d8 = local_328;
      local_3d0 = uVar6;
      local_3c8 = uVar23;
      (**(code **)(*DAT_14ca83900 + 0x210))(DAT_14ca83900,param_2,uVar14,0);
    }
    uVar23 = *(undefined8 *)(**(longlong **)(param_1 + 0x1d0) + 0x20);
    uVar6 = *(undefined4 *)(**(longlong **)(param_1 + 0x1d0) + 0x2c);
    uVar14 = *(undefined8 *)
              (**(longlong **)(param_1 + 0x1b8) + 0x238 + (longlong)**(int **)(param_1 + 0x1c8) * 8)
    ;
    if (*(char *)((longlong)param_2 + 0x69) == '\0') {
      FUN_14002049c(param_2,1);
      local_3d8 = local_328;
      local_3d0 = uVar6;
      local_3c8 = uVar23;
      (**(code **)(*DAT_14ca83900 + 0x210))(DAT_14ca83900,param_2,uVar14,0);
      FUN_14002049c(param_2,0);
    }
    else {
      local_3d8 = local_328;
      local_3d0 = uVar6;
      local_3c8 = uVar23;
      (**(code **)(*DAT_14ca83900 + 0x210))(DAT_14ca83900,param_2,uVar14,0);
    }
    if (**(int **)(param_1 + 0x1d8) != 0) {
      uVar23 = *(undefined8 *)(**(longlong **)(param_1 + 0x1d0) + 0x30);
      uVar6 = *(undefined4 *)(**(longlong **)(param_1 + 0x1d0) + 0x3c);
      uVar14 = *(undefined8 *)
                (**(longlong **)(param_1 + 0x1b8) + 0x250 +
                (longlong)**(int **)(param_1 + 0x1c8) * 8);
      if (*(char *)((longlong)param_2 + 0x69) == '\0') {
        FUN_14002049c(param_2,1);
        local_3d8 = local_228;
        local_3d0 = uVar6;
        local_3c8 = uVar23;
        (**(code **)(*DAT_14ca83900 + 0x210))(DAT_14ca83900,param_2,uVar14,0);
        FUN_14002049c(param_2,0);
      }
      else {
        local_3d8 = local_228;
        local_3d0 = uVar6;
        local_3c8 = uVar23;
        (**(code **)(*DAT_14ca83900 + 0x210))(DAT_14ca83900,param_2,uVar14,0);
      }
    }
    if (**(int **)(param_1 + 0x1e0) != 0) {
      uVar23 = *(undefined8 *)(**(longlong **)(param_1 + 0x1d0) + 0x40);
      uVar6 = *(undefined4 *)(**(longlong **)(param_1 + 0x1d0) + 0x4c);
      uVar14 = *(undefined8 *)
                (**(longlong **)(param_1 + 0x1b8) + 0x268 +
                (longlong)**(int **)(param_1 + 0x1c8) * 8);
      if (*(char *)((longlong)param_2 + 0x69) == '\0') {
        FUN_14002049c(param_2,1);
        local_3d8 = local_228;
        local_3d0 = uVar6;
        local_3c8 = uVar23;
        (**(code **)(*DAT_14ca83900 + 0x210))(DAT_14ca83900,param_2,uVar14,0);
        FUN_14002049c(param_2,0);
      }
      else {
        local_3d8 = local_228;
        local_3d0 = uVar6;
        local_3c8 = uVar23;
        (**(code **)(*DAT_14ca83900 + 0x210))(DAT_14ca83900,param_2,uVar14,0);
      }
    }
  }
  uVar12 = *(ulonglong *)(*(longlong *)(**(longlong **)(param_1 + 0x1e8) + 0xf0) + 0x10);
  cVar4 = *(char *)(uVar12 + 0x52);
  lVar18 = 0x15;
  do {
    *(undefined1 (*) [16])((longlong)alStack_33d + lVar18) = (undefined1  [16])0x0;
    *(undefined4 *)(local_328 + lVar18 + -5) = 0xffffffff;
    *(undefined2 *)(local_328 + lVar18 + -1) = 0;
    lVar18 = lVar18 + 0x18;
  } while (lVar18 != 0xd5);
  if (cVar4 != '\0') {
    uVar12 = 0;
  }
  local_254 = 0;
  local_268 = (undefined1  [16])0x0;
  local_258 = 0;
  local_250 = 0xffffffff;
  uStack_24c = 0xffffffff;
  uStack_248 = 0xffffffff;
  uStack_244 = 0xffffffff;
  _local_240 = 0;
  auStack_239._1_4_ = auStack_239._1_4_ & 0xffffff00;
  _auStack_234 = 0;
  auStack_231._1_3_ = 0;
  local_328._8_8_ = 0;
  local_328._0_8_ = uVar12;
  local_318 = CONCAT26(local_318._6_2_,0x900ffffffff);
  _Dest = (wchar_t *)(*param_2 + 1 & 0xfffffffffffffffe);
  pwVar9 = _Dest + 9;
  if ((wchar_t *)param_2[1] < pwVar9) {
    FUN_140023dd8(param_2,0x14);
    _Dest = (wchar_t *)(*param_2 + 1 & 0xfffffffffffffffe);
    pwVar9 = _Dest + 9;
  }
  *param_2 = (ulonglong)pwVar9;
  wcscpy(_Dest,L"BinkPass");
  puVar22 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar10 = puVar22 + 0x23;
  if ((undefined8 *)param_2[1] < puVar10) {
    FUN_140023dd8(param_2,0x120);
    puVar22 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar22 + 0x23;
  }
  *param_2 = (ulonglong)puVar10;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar22;
  param_2[6] = (ulonglong)(puVar22 + 1);
  puVar22[1] = 0;
  *puVar22 = &PTR_FUN_14a217b50;
  memcpy(puVar22 + 2,local_328,0xe8);
  puVar22[0x1f] = 0;
  puVar22[0x20] = CONCAT44(_auStack_234,auStack_239._1_4_);
  *(uint *)((longlong)puVar22 + 0x107) = CONCAT31(auStack_231._1_3_,auStack_231[0]);
  puVar22[0x22] = _Dest;
  lVar18 = 0x11;
  do {
    *(undefined8 *)(local_240 + lVar18 + 7) = 0;
    *(undefined8 *)(auStack_234 + lVar18 + 3) = 0xffffffff00000000;
    *(undefined2 *)(local_228 + lVar18 + -1) = 0;
    lVar18 = lVar18 + 0x18;
  } while (lVar18 != 0xd1);
  _local_168 = _local_168 & 0xffffff0000000000;
  lVar18 = 0xd9;
  do {
    *(undefined8 *)(local_240 + lVar18 + 7) = 0;
    *(undefined8 *)(auStack_234 + lVar18 + 3) = 0xffffffff00000000;
    *(undefined2 *)(local_228 + lVar18 + -1) = 0;
    lVar18 = lVar18 + 0x18;
  } while (lVar18 != 0x199);
  local_a0 = 0;
  local_70 = 0;
  local_68 = local_68 & 0xff;
  local_98 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  local_78 = local_78 & 0xff00;
  lVar18 = 0x15;
  do {
    if (*(longlong *)((longlong)alStack_33d + lVar18) == 0) break;
    *(longlong *)(local_240 + lVar18 + 3) = *(longlong *)((longlong)alStack_33d + lVar18);
    bVar5 = local_328[lVar18];
    bVar21 = bVar5 >> 2;
    auStack_231[lVar18 + 4] = bVar21;
    abStack_22c[lVar18] = bVar5 & 3;
    *(undefined4 *)(auStack_234 + lVar18 + 3) = *(undefined4 *)(local_328 + lVar18 + -5);
    *(uint *)(auStack_239 + lVar18 + 4) = (uint)(byte)local_328[lVar18 + -1];
    iVar2 = (int)local_168 + 1;
    bVar5 = bStack_164 | bVar21 == 2;
    _local_168 = CONCAT14(bVar5,iVar2);
    lVar7 = *(longlong *)((longlong)alStack_33d + lVar18 + 8);
    if (lVar7 != 0) {
      local_a0 = 1;
      uVar23 = *(undefined8 *)(auStack_239 + lVar18 + 4);
      *(undefined8 *)(local_178 + lVar18 + 3) = *(undefined8 *)(local_240 + lVar18 + 3);
      *(undefined8 *)(auStack_170 + lVar18 + 3) = uVar23;
      *(undefined8 *)(local_168 + lVar18 + 3) = *(undefined8 *)(auStack_231 + lVar18 + 4);
      *(longlong *)(local_178 + lVar18 + 3) = lVar7;
    }
    lVar18 = lVar18 + 0x18;
  } while (lVar18 != 0xd5);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_98 = ZEXT816(0);
  auVar8 = local_168;
  if (0 < (longlong)(int)local_168) {
    memcpy(param_2 + 0x15,local_228,(longlong)(int)local_168 * 0x18);
  }
  *(undefined1 (*) [4])(param_2 + 0x14) = auVar8;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  *(undefined1 *)((longlong)param_2 + 0x17a) = 0;
  *(undefined2 *)(param_2 + 0x2f) = 0;
  *(byte *)((longlong)param_2 + 0x17b) = *(byte *)((longlong)param_2 + 0x17b) & 0xfc | 2;
  local_1d8 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_228 = ZEXT816(0);
  uStack_1cc = 0;
  iStack_1c8 = 0;
  uStack_1c4 = 0;
  uStack_1c0 = 0;
  uStack_1bc = 0;
  uStack_1b8 = 0;
  uStack_1b4 = 0;
  uStack_1b0 = 0;
  local_1ac = 0;
  uStack_1a4 = 0;
  local_19c = 0;
  uStack_194 = 0;
  uStack_18f = 0;
  uStack_18c = 0;
  uStack_187 = 0;
  local_178 = (undefined1  [8])0x0;
  auStack_170 = (undefined1  [8])0x0;
  _local_168 = 0;
  local_160 = 1;
  uStack_158 = 0;
  FUN_144b0e33a(param_2);
  if ((**(int **)(param_1 + 0x1d8) != 0) ||
     (*(float *)(**(longlong **)(param_1 + 0x1b8) + 0x1e8) < 0.999)) {
    iVar2 = *(int *)(**(longlong **)(param_1 + 0x1b8) + 0x1ec);
    puVar19 = &DAT_14c9d5280;
    if (iVar2 == 1) {
      puVar19 = &DAT_14ca5e710;
    }
    puVar11 = &DAT_14c9c0d40;
    if (iVar2 != 2) {
      puVar11 = puVar19;
    }
    puVar10 = (undefined8 *)(puVar11 + 0x10);
  }
  else {
    puVar10 = &DAT_14c9c0d50;
  }
  local_1f8 = *puVar10;
  uStack_1f0 = DAT_14ca16b50;
  local_1e8 = DAT_14c9c0d98;
  stack0xfffffffffffffcd0 = 0x1100000000;
  uVar12 = FUN_14486d71a();
  local_228._0_8_ = uVar12;
  lVar18 = **(longlong **)(param_1 + 0x1f0);
  if (lVar18 == 0) {
    uVar13 = 0;
  }
  else {
    lVar7 = *(longlong *)((*(longlong **)(param_1 + 0x1f0))[1] + 8);
    lVar18 = (longlong)*(int *)(lVar18 + 0xd4);
    uVar13 = *(ulonglong *)(*(longlong *)(lVar7 + 0x50) + lVar18 * 8);
    if (uVar13 == 0) {
      uVar13 = FUN_1400bafc2(lVar7,lVar18,1);
      uVar12 = local_228._0_8_;
    }
  }
  local_228._0_8_ = uVar12;
  local_1d0 = 1;
  local_228._8_8_ = uVar13;
  if (**(int **)(param_1 + 0x1e0) == 0) {
    lVar18 = **(longlong **)(param_1 + 0x208);
    if (lVar18 == 0) {
      lVar18 = 0;
    }
    else {
      lVar7 = *(longlong *)((*(longlong **)(param_1 + 0x208))[1] + 8);
      lVar20 = (longlong)*(int *)(lVar18 + 0xd4);
      lVar18 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar20 * 8);
      if (lVar18 == 0) {
        lVar18 = FUN_1400bafc2(lVar7,lVar20,1);
      }
    }
    local_218 = lVar18;
    lVar18 = FUN_140028f18(param_2);
    if ((lVar18 != 0) && ((local_160 & 0x10000000) == 0)) {
      *(undefined4 *)(param_2 + 0x35) = (undefined4)local_208;
      *(undefined4 *)((longlong)param_2 + 0x1ac) = local_208._4_4_;
      *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_200;
      *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_200._4_4_;
      *(int *)(param_2 + 0x33) = (int)local_218;
      *(undefined4 *)((longlong)param_2 + 0x19c) = local_218._4_4_;
      *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_210;
      *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_210._4_4_;
      param_2[0x31] = local_228._0_8_;
      param_2[0x32] = local_228._8_8_;
      puVar22 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar10 = puVar22 + 4;
      if ((undefined8 *)param_2[1] < puVar10) {
        FUN_140023dd8(param_2,0x28);
        puVar22 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar10 = puVar22 + 4;
      }
      *param_2 = (ulonglong)puVar10;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar22;
      param_2[6] = (ulonglong)(puVar22 + 1);
      puVar22[1] = 0;
      *puVar22 = &PTR_LAB_14a37d348;
      puVar22[2] = lVar18;
      *(undefined4 *)(puVar22 + 3) = 0;
      *(undefined1 *)((longlong)puVar22 + 0x1c) = 1;
    }
    uVar23 = **(undefined8 **)(param_1 + 0x210);
    lVar18 = **(longlong **)(param_1 + 0x208);
    if (lVar18 == 0) {
      lVar18 = 0;
    }
    else {
      lVar7 = *(longlong *)((*(longlong **)(param_1 + 0x208))[1] + 8);
      lVar20 = (longlong)*(int *)(lVar18 + 0xd4);
      lVar18 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar20 * 8);
      if (lVar18 == 0) {
        lVar18 = FUN_1400bafc2(lVar7,lVar20,1);
      }
    }
    puVar10 = *(undefined8 **)(param_1 + 0x208);
    uVar14 = FUN_1415a9b9a();
  }
  else {
    lVar18 = **(longlong **)(param_1 + 0x1f8);
    if (lVar18 == 0) {
      lVar18 = 0;
    }
    else {
      lVar7 = *(longlong *)((*(longlong **)(param_1 + 0x1f8))[1] + 8);
      lVar20 = (longlong)*(int *)(lVar18 + 0xd4);
      lVar18 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar20 * 8);
      if (lVar18 == 0) {
        lVar18 = FUN_1400bafc2(lVar7,lVar20,1);
      }
    }
    local_218 = lVar18;
    lVar18 = FUN_140028f18(param_2);
    if ((lVar18 != 0) && ((local_160 & 0x10000000) == 0)) {
      *(undefined4 *)(param_2 + 0x35) = (undefined4)local_208;
      *(undefined4 *)((longlong)param_2 + 0x1ac) = local_208._4_4_;
      *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_200;
      *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_200._4_4_;
      *(int *)(param_2 + 0x33) = (int)local_218;
      *(undefined4 *)((longlong)param_2 + 0x19c) = local_218._4_4_;
      *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_210;
      *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_210._4_4_;
      param_2[0x31] = local_228._0_8_;
      param_2[0x32] = local_228._8_8_;
      puVar22 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar10 = puVar22 + 4;
      if ((undefined8 *)param_2[1] < puVar10) {
        FUN_140023dd8(param_2,0x28);
        puVar22 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar10 = puVar22 + 4;
      }
      *param_2 = (ulonglong)puVar10;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar22;
      param_2[6] = (ulonglong)(puVar22 + 1);
      puVar22[1] = 0;
      *puVar22 = &PTR_LAB_14a37d348;
      puVar22[2] = lVar18;
      *(undefined4 *)(puVar22 + 3) = 0;
      *(undefined1 *)((longlong)puVar22 + 0x1c) = 1;
    }
    uVar23 = **(undefined8 **)(param_1 + 0x200);
    lVar18 = **(longlong **)(param_1 + 0x1f8);
    if (lVar18 == 0) {
      lVar18 = 0;
    }
    else {
      lVar7 = *(longlong *)((*(longlong **)(param_1 + 0x1f8))[1] + 8);
      lVar20 = (longlong)*(int *)(lVar18 + 0xd4);
      lVar18 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar20 * 8);
      if (lVar18 == 0) {
        lVar18 = FUN_1400bafc2(lVar7,lVar20,1);
      }
    }
    puVar10 = *(undefined8 **)(param_1 + 0x1f8);
    uVar14 = FUN_145f9aba8();
  }
  local_3d8 = (undefined1 *)uVar23;
  FUN_1449cc26b(param_2,lVar18,*puVar10,uVar14);
  uVar23 = **(undefined8 **)(param_1 + 0x218);
  lVar18 = **(longlong **)(param_1 + 0x1f0);
  if (lVar18 == 0) {
    lVar18 = 0;
  }
  else {
    lVar7 = *(longlong *)((*(longlong **)(param_1 + 0x1f0))[1] + 8);
    lVar20 = (longlong)*(int *)(lVar18 + 0xd4);
    lVar18 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar20 * 8);
    if (lVar18 == 0) {
      lVar18 = FUN_1400bafc2(lVar7,lVar20,1);
    }
  }
  puVar10 = *(undefined8 **)(param_1 + 0x1f0);
  uVar14 = FUN_1415a9970();
  local_3d8 = (undefined1 *)uVar23;
  FUN_1449cc26b(param_2,lVar18,*puVar10,uVar14);
  puVar22 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar10 = puVar22 + 4;
  if ((undefined8 *)param_2[1] < puVar10) {
    FUN_140023dd8(param_2,0x28);
    puVar22 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar22 + 4;
  }
  *param_2 = (ulonglong)puVar10;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar22;
  param_2[6] = (ulonglong)(puVar22 + 1);
  puVar22[1] = 0;
  *puVar22 = &PTR_LAB_14a1fc200;
  puVar22[2] = 0x200000000;
  *(undefined4 *)(puVar22 + 3) = 1;
  if ((*(byte *)((longlong)param_2 + 0x17b) & 8) != 0) {
    (**(code **)(*DAT_14ca83900 + 0x2a0))(DAT_14ca83900,param_2,1);
    *(byte *)((longlong)param_2 + 0x17b) = *(byte *)((longlong)param_2 + 0x17b) & 0xf7;
  }
  puVar22 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar10 = puVar22 + 2;
  if ((undefined8 *)param_2[1] < puVar10) {
    FUN_140023dd8(param_2,0x18);
    puVar22 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar22 + 2;
  }
  lVar18 = _local_240;
  *param_2 = (ulonglong)puVar10;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar22;
  param_2[6] = (ulonglong)(puVar22 + 1);
  puVar22[1] = 0;
  *puVar22 = &PTR_LAB_14a217b58;
  *(byte *)((longlong)param_2 + 0x17b) = *(byte *)((longlong)param_2 + 0x17b) & 0xfd;
  *(undefined2 *)(param_2 + 0x2f) = 0;
  if (_local_240 != 0) {
    LOCK();
    puVar1 = (uint *)(_local_240 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(_local_240 + 8);
      LOCK();
      uVar3 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar3 >> 0x1e & 1) == 0) {
        bVar5 = *(byte *)(_local_240 + 0xd);
        plVar15 = (longlong *)FUN_14001cc68(0x10,8);
        plVar15[1] = lVar18;
        plVar17 = DAT_14ca843c0;
        plVar16 = DAT_14ca843c8;
        if ((bVar5 & 2) == 0) {
          do {
            *plVar15 = (longlong)plVar17;
            LOCK();
            bVar24 = plVar17 != DAT_14ca843c0;
            plVar16 = plVar15;
            if (bVar24) {
              plVar17 = DAT_14ca843c0;
              plVar16 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar16;
            UNLOCK();
          } while (bVar24);
        }
        else {
          do {
            *plVar15 = (longlong)plVar16;
            LOCK();
            bVar24 = plVar16 != DAT_14ca843c8;
            plVar17 = plVar15;
            if (bVar24) {
              plVar16 = DAT_14ca843c8;
              plVar17 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar17;
            UNLOCK();
          } while (bVar24);
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_3f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143feea72 FUN_143feea72 body=12 status=ok
// SIG undefined FUN_143feea72(void)

void FUN_143feea72(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143feea7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143feea7e FUN_143feea7e body=29 status=ok
// SIG undefined FUN_143feea7e(void)

undefined8 FUN_143feea7e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143feeac2 FUN_143feeac2 body=282 status=ok
// SIG undefined FUN_143feeac2(void)

undefined8 * FUN_143feeac2(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143feea9b);
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



// FUNCTION 143feebdc FUN_143feebdc body=94 status=ok
// SIG undefined FUN_143feebdc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143feebdc(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_144d6e160(_DAT_000000a8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_144d6e160(param_1[0x15]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143feec18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143feec4c FUN_143feec4c body=12 status=ok
// SIG undefined FUN_143feec4c(void)

void FUN_143feec4c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143feec55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143feec58 FUN_143feec58 body=29 status=ok
// SIG undefined FUN_143feec58(void)

undefined8 FUN_143feec58(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143feec76 FUN_143feec76 body=282 status=ok
// SIG undefined FUN_143feec76(void)

undefined8 * FUN_143feec76(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143feea9b);
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



// FUNCTION 143feed90 FUN_143feed90 body=94 status=ok
// SIG undefined FUN_143feed90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143feed90(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_144d6e160(_DAT_000000a8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_144d6e160(param_1[0x15]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143feedcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143feedee FUN_143feedee body=581 status=ok
// SIG undefined FUN_143feedee(void)

void FUN_143feedee(undefined8 *param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  float fVar6;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb9e6e0) && (FUN_144b3d300(&DAT_14cb9e6e0), DAT_14cb9e6e0 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar2 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.HDR.EnableHDROutput",1);
    if (plVar2 == (longlong *)0x0) {
      DAT_14cb9e6d8 = 0;
    }
    else {
      DAT_14cb9e6d8 = (**(code **)(*plVar2 + 0x68))(plVar2);
    }
    _Init_thread_footer(&DAT_14cb9e6e0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb9e6f0) && (FUN_144b3d300(&DAT_14cb9e6f0), DAT_14cb9e6f0 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar2 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.HDR.Display.OutputDevice",1);
    if (plVar2 == (longlong *)0x0) {
      DAT_14cb9e6e8 = 0;
    }
    else {
      DAT_14cb9e6e8 = (**(code **)(*plVar2 + 0x68))(plVar2);
    }
    _Init_thread_footer(&DAT_14cb9e6f0);
  }
  if ((DAT_14ca84f23 != '\x01') || (*(int *)(DAT_14cb9e6d8 + 4) == 0)) {
    FUN_144d6e8f0(*param_1,1,0x3f800000,0x50);
    uVar4 = 0;
    goto LAB_143feef11;
  }
  uVar1 = *(undefined4 *)(DAT_14cb9e6e8 + 4);
  fVar6 = (float)FUN_14019a38d();
  switch(uVar1) {
  case 0:
  case 1:
  case 2:
    uVar3 = *param_1;
    iVar5 = 0x50;
    break;
  case 3:
  case 4:
    iVar5 = (int)fVar6;
    uVar4 = *param_1;
    uVar3 = 2;
    goto LAB_143feef07;
  case 5:
  case 6:
    iVar5 = (int)fVar6;
    uVar3 = *param_1;
    break;
  default:
    uVar4 = *param_1;
    uVar3 = 0;
    iVar5 = 1000;
LAB_143feef07:
    FUN_144d6e8f0(uVar4,uVar3,0x3f800000,iVar5);
    uVar4 = 1;
    goto LAB_143feef11;
  }
  uVar4 = 1;
  FUN_144d6e8f0(uVar3,1,0x3f800000,iVar5);
LAB_143feef11:
  FUN_144d6e9c0(*param_1,uVar4);
  FUN_144d6ea00(*param_1,0);
  FUN_144d6e560(*param_1,*(undefined4 *)(param_1 + 1),*(undefined4 *)((longlong)param_1 + 0xc),
                *(undefined4 *)(param_1 + 2),*(undefined4 *)((longlong)param_1 + 0x14),0);
  return;
}



// FUNCTION 143fef044 FUN_143fef044 body=12 status=ok
// SIG undefined FUN_143fef044(void)

void FUN_143fef044(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143fef04d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143fef050 FUN_143fef050 body=29 status=ok
// SIG undefined FUN_143fef050(void)

undefined8 FUN_143fef050(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fef06e FUN_143fef06e body=282 status=ok
// SIG undefined FUN_143fef06e(void)

undefined8 * FUN_143fef06e(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143feea9b);
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



// FUNCTION 143fef188 FUN_143fef188 body=91 status=ok
// SIG undefined FUN_143fef188(void)

void FUN_143fef188(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_143feedee(0xa8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_143feedee(param_1 + 0x15);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143fef1c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143fef1e4 FUN_143fef1e4 body=135 status=ok
// SIG undefined FUN_143fef1e4(void)

void FUN_143fef1e4(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined1 local_30;
  undefined1 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = *param_1;
  local_20 = param_1[1];
  local_28 = *(undefined1 *)((longlong)param_1 + 0x22);
  local_30 = *(undefined1 *)((longlong)param_1 + 0x21);
  local_38 = *(undefined4 *)(param_1 + 5);
  local_40 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_48 = *(undefined1 *)(param_1 + 4);
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 3);
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_148b72aee(uVar3,&local_20,uVar2,uVar1);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fef276 FUN_143fef276 body=29 status=ok
// SIG undefined FUN_143fef276(void)

void FUN_143fef276(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143fef294 FUN_143fef294 body=163 status=ok
// SIG undefined FUN_143fef294(void)

undefined8 * FUN_143fef294(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_LAB_14b5a8a30;
  lVar4 = param_1[2];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fef338 FUN_143fef338 body=282 status=ok
// SIG undefined FUN_143fef338(void)

undefined8 * FUN_143fef338(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143feea9b);
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



// FUNCTION 143fef452 FUN_143fef452 body=327 status=ok
// SIG undefined FUN_143fef452(void)

void FUN_143fef452(longlong param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined1 local_40;
  undefined1 local_38;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    UNLOCK();
  }
  uVar7 = *(undefined8 *)(param_1 + 0xa8);
  local_28 = *(longlong *)(param_1 + 0xb0);
  local_38 = *(undefined1 *)(param_1 + 0xca);
  local_40 = *(undefined1 *)(param_1 + 0xc9);
  local_48 = *(undefined4 *)(param_1 + 0xd0);
  local_50 = *(undefined4 *)(param_1 + 0xcc);
  local_58 = *(undefined1 *)(param_1 + 200);
  uVar5 = *(undefined4 *)(param_1 + 0xc4);
  uVar6 = *(undefined4 *)(param_1 + 0xc0);
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_148b72aee(uVar7,&local_28,uVar6,uVar5);
  lVar8 = *(longlong *)(param_1 + 0xb0);
  if (lVar8 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar8 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar8 + 8);
      LOCK();
      uVar3 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar3 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)(lVar8 + 0xd);
        plVar9 = (longlong *)FUN_14001cc68(0x10,8);
        plVar9[1] = lVar8;
        plVar11 = DAT_14ca843c0;
        plVar10 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *plVar9 = (longlong)plVar11;
            LOCK();
            bVar12 = plVar11 != DAT_14ca843c0;
            plVar10 = plVar9;
            if (bVar12) {
              plVar11 = DAT_14ca843c0;
              plVar10 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar10;
            UNLOCK();
          } while (bVar12);
        }
        else {
          do {
            *plVar9 = (longlong)plVar10;
            LOCK();
            bVar12 = plVar10 != DAT_14ca843c8;
            plVar11 = plVar9;
            if (bVar12) {
              plVar10 = DAT_14ca843c8;
              plVar11 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar11;
            UNLOCK();
          } while (bVar12);
        }
      }
    }
  }
  if (param_1 != 0) {
    LOCK();
    piVar2 = (int *)(param_1 + 8);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143fef5b0 FUN_143fef5b0 body=1414 status=ok
// SIG undefined FUN_143fef5b0(void)

void FUN_143fef5b0(longlong param_1,ulonglong *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auVar6 [4];
  wchar_t *pwVar7;
  undefined8 *puVar8;
  longlong lVar9;
  wchar_t *_Dest;
  byte bVar10;
  undefined8 *puVar11;
  undefined1 auStack_358 [27];
  undefined1 auStack_33d [8];
  undefined1 auStack_335 [8];
  undefined4 uStack_32d;
  byte bStack_329;
  undefined8 local_328;
  undefined8 local_320;
  undefined4 local_318;
  undefined2 local_314;
  undefined1 local_268 [16];
  undefined1 local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined1 local_240 [7];
  undefined1 auStack_239 [5];
  undefined1 auStack_234 [3];
  undefined1 auStack_231 [5];
  byte abStack_22c [3];
  undefined1 uStack_229;
  undefined8 local_228;
  undefined4 uStack_220;
  undefined8 local_218;
  undefined1 local_210;
  undefined8 local_20c;
  undefined4 local_204;
  undefined1 local_1f8;
  longlong lStack_175;
  undefined1 local_168 [4];
  byte local_164;
  undefined1 local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  ushort local_78;
  undefined8 local_70;
  ushort local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_358;
  uVar4 = *(undefined8 *)(param_1 + 8);
  lVar9 = 0x15;
  do {
    *(undefined1 (*) [16])(auStack_33d + lVar9) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)&uStack_32d + lVar9) = 0xffffffff;
    (&bStack_329 + lVar9)[0] = 0;
    (&bStack_329 + lVar9)[1] = 0;
    lVar9 = lVar9 + 0x18;
  } while (lVar9 != 0xd5);
  local_254 = 0;
  local_268 = (undefined1  [16])0x0;
  local_258 = 0;
  local_250 = 0xffffffff;
  uStack_24c = 0xffffffff;
  uStack_248 = 0xffffffff;
  uStack_244 = 0xffffffff;
  _local_240 = 0;
  auStack_239._1_4_ = auStack_239._1_4_ & 0xffffff00;
  _auStack_234 = 0;
  auStack_231._1_3_ = 0;
  local_320 = 0;
  local_318 = 0xffffffff;
  local_314 = 0x900;
  local_228 = 0xffffffffffffffff;
  uStack_220 = 0xffffffff;
  local_210 = 1;
  local_20c = 0x100000000000;
  local_204 = 0;
  local_1f8 = 0;
  stack0xfffffffffffffcd0 = 1;
  unique0x100009ea = &local_228;
  local_328 = uVar4;
  local_218 = uVar4;
  FUN_144760590(param_2,auStack_33d + 5,0);
  _Dest = (wchar_t *)(*param_2 + 1 & 0xfffffffffffffffe);
  pwVar7 = _Dest + 0xd;
  if ((wchar_t *)param_2[1] < pwVar7) {
    FUN_140023dd8(param_2,0x1c);
    _Dest = (wchar_t *)(*param_2 + 1 & 0xfffffffffffffffe);
    pwVar7 = _Dest + 0xd;
  }
  *param_2 = (ulonglong)pwVar7;
  wcscpy(_Dest,L"ClearTexture");
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar8 = puVar11 + 0x23;
  if ((undefined8 *)param_2[1] < puVar8) {
    FUN_140023dd8(param_2,0x120);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar11 + 0x23;
  }
  *param_2 = (ulonglong)puVar8;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_FUN_14a217b50;
  memcpy(puVar11 + 2,&local_328,0xe8);
  puVar11[0x1f] = 0;
  puVar11[0x20] = CONCAT44(_auStack_234,auStack_239._1_4_);
  *(uint *)((longlong)puVar11 + 0x107) = CONCAT31(auStack_231._1_3_,auStack_231[0]);
  puVar11[0x22] = _Dest;
  lVar9 = 0x11;
  do {
    *(undefined8 *)(local_240 + lVar9 + 7) = 0;
    *(undefined8 *)(auStack_234 + lVar9 + 3) = 0xffffffff00000000;
    *(undefined2 *)(&uStack_229 + lVar9) = 0;
    lVar9 = lVar9 + 0x18;
  } while (lVar9 != 0xd1);
  local_168 = (undefined1  [4])0x0;
  local_164 = 0;
  lVar9 = 0xd9;
  do {
    *(undefined8 *)(local_240 + lVar9 + 7) = 0;
    *(undefined8 *)(auStack_234 + lVar9 + 3) = 0xffffffff00000000;
    *(undefined2 *)(&uStack_229 + lVar9) = 0;
    lVar9 = lVar9 + 0x18;
  } while (lVar9 != 0x199);
  local_a0 = 0;
  local_70 = 0;
  local_68 = local_68 & 0xff;
  local_98 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  local_78 = local_78 & 0xff00;
  lVar9 = 0x15;
  do {
    if (*(longlong *)(auStack_33d + lVar9) == 0) break;
    *(longlong *)(local_240 + lVar9 + 3) = *(longlong *)(auStack_33d + lVar9);
    bVar1 = *(byte *)((longlong)&local_328 + lVar9);
    bVar10 = bVar1 >> 2;
    auStack_231[lVar9 + 4] = bVar10;
    abStack_22c[lVar9] = bVar1 & 3;
    *(undefined4 *)(auStack_234 + lVar9 + 3) = *(undefined4 *)((longlong)&uStack_32d + lVar9);
    *(uint *)(auStack_239 + lVar9 + 4) = (uint)(&bStack_329)[lVar9];
    local_168 = (undefined1  [4])((int)local_168 + 1);
    local_164 = local_164 | bVar10 == 2;
    lVar5 = *(longlong *)(auStack_335 + lVar9);
    if (lVar5 != 0) {
      local_a0 = 1;
      uVar4 = *(undefined8 *)(auStack_239 + lVar9 + 4);
      *(undefined8 *)((longlong)&lStack_175 + lVar9) = *(undefined8 *)(local_240 + lVar9 + 3);
      *(undefined8 *)(&stack0xfffffffffffffe93 + lVar9) = uVar4;
      *(undefined8 *)(local_168 + lVar9 + 3) = *(undefined8 *)(auStack_231 + lVar9 + 4);
      *(longlong *)((longlong)&lStack_175 + lVar9) = lVar5;
    }
    lVar9 = lVar9 + 0x18;
  } while (lVar9 != 0xd5);
  auVar6 = local_168;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_98 = ZEXT816(0);
  if (0 < (longlong)(int)local_168) {
    memcpy(param_2 + 0x15,&local_228,(longlong)(int)local_168 * 0x18);
  }
  *(undefined1 (*) [4])(param_2 + 0x14) = auVar6;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  bVar1 = *(byte *)((longlong)param_2 + 0x17b);
  *(undefined1 *)((longlong)param_2 + 0x17a) = 0;
  *(undefined2 *)(param_2 + 0x2f) = 0;
  *(byte *)((longlong)param_2 + 0x17b) = bVar1 & 0xfc | 2;
  if ((bVar1 & 8) != 0) {
    (**(code **)(*DAT_14ca83900 + 0x2a0))(DAT_14ca83900,param_2,1);
    *(byte *)((longlong)param_2 + 0x17b) = *(byte *)((longlong)param_2 + 0x17b) & 0xf7;
  }
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar8 = puVar11 + 2;
  if ((undefined8 *)param_2[1] < puVar8) {
    FUN_140023dd8(param_2,0x18);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar11 + 2;
  }
  *param_2 = (ulonglong)puVar8;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_14a217b58;
  *(byte *)((longlong)param_2 + 0x17b) = *(byte *)((longlong)param_2 + 0x17b) & 0xfd;
  *(undefined2 *)(param_2 + 0x2f) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  iVar3 = *(int *)(param_1 + 0x14);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar8 = puVar11 + 5;
  if ((undefined8 *)param_2[1] < puVar8) {
    FUN_140023dd8(param_2,0x30);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar11 + 5;
  }
  *param_2 = (ulonglong)puVar8;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  puVar11[2] = 0;
  *puVar11 = &PTR_LAB_14a1e7fc8;
  *(undefined4 *)(puVar11 + 3) = 0;
  *(float *)((longlong)puVar11 + 0x1c) = (float)iVar2;
  *(float *)(puVar11 + 4) = (float)iVar3;
  *(undefined4 *)((longlong)puVar11 + 0x24) = 0x3f800000;
  local_218 = *(undefined8 *)(param_1 + 8);
  local_228 = 0xffffffffffffffff;
  uStack_220 = 0xffffffff;
  local_210 = 1;
  local_20c = 0x80000001000;
  local_204 = 0;
  local_1f8 = 0;
  stack0xfffffffffffffcd0 = 1;
  unique0x100009f2 = &local_228;
  FUN_144760590(param_2,auStack_33d + 5,0);
  if ((local_60 ^ (ulonglong)auStack_358) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143fefb48 FUN_143fefb48 body=12 status=ok
// SIG undefined FUN_143fefb48(void)

void FUN_143fefb48(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143fefb51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143fefb54 FUN_143fefb54 body=286 status=ok
// SIG undefined FUN_143fefb54(void)

undefined8 * FUN_143fefb54(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_LAB_14b5a8b00;
  lVar4 = param_1[2];
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
  lVar4 = param_1[1];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fefc72 FUN_143fefc72 body=282 status=ok
// SIG undefined FUN_143fefc72(void)

undefined8 * FUN_143fefc72(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143feea9b);
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



// FUNCTION 143fefd8c FUN_143fefd8c body=333 status=ok
// SIG undefined FUN_143fefd8c(void)

void FUN_143fefd8c(undefined8 *param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_143fef5b0(param_1 + 0x15,&DAT_14ca85100);
  lVar5 = param_1[0x16];
  if (lVar5 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar5 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar5 + 8);
      LOCK();
      uVar3 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar3 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)(lVar5 + 0xd);
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar5;
        plVar8 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar8;
            LOCK();
            bVar9 = plVar8 != DAT_14ca843c0;
            plVar7 = plVar6;
            if (bVar9) {
              plVar8 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar9);
        }
        else {
          do {
            *plVar6 = (longlong)plVar7;
            LOCK();
            bVar9 = plVar7 != DAT_14ca843c8;
            plVar8 = plVar6;
            if (bVar9) {
              plVar7 = DAT_14ca843c8;
              plVar8 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar8;
            UNLOCK();
          } while (bVar9);
        }
      }
    }
  }
  lVar5 = param_1[0x15];
  if (lVar5 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar5 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar5 + 8);
      LOCK();
      uVar3 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar3 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)(lVar5 + 0xd);
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar5;
        plVar8 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar8;
            LOCK();
            bVar9 = plVar8 != DAT_14ca843c0;
            plVar7 = plVar6;
            if (bVar9) {
              plVar8 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar9);
        }
        else {
          do {
            *plVar6 = (longlong)plVar7;
            LOCK();
            bVar9 = plVar7 != DAT_14ca843c8;
            plVar8 = plVar6;
            if (bVar9) {
              plVar7 = DAT_14ca843c8;
              plVar8 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar8;
            UNLOCK();
          } while (bVar9);
        }
      }
    }
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(param_1 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143fefe9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143fefeda FUN_143fefeda body=274 status=ok
// SIG undefined FUN_143fefeda(void)

void FUN_143fefeda(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((((plVar3 != (longlong *)0x0) && (*(uint *)(plVar3 + 2) == param_1[1])) &&
         (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 &&
          (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && (lVar2 = *plVar3, lVar2 != 0)))))) &&
        (DAT_14cb0d2b0 != 0)) && (*(longlong *)(lVar2 + 0xf8) != 0)) {
      FUN_14039c14e(lVar2,&local_28);
      plVar3 = (longlong *)(**(code **)(**(longlong **)(lVar2 + 0xf8) + 0x10))();
      plVar3 = (longlong *)*plVar3;
      if (plVar3 != (longlong *)0x0) {
        local_38 = 4;
        local_34 = (undefined4)(longlong)local_28;
        local_30 = (undefined4)(longlong)local_20;
        local_40 = plVar3;
        lVar2 = (**(code **)(*plVar3 + 8))();
        local_2c = (uint)(*(char *)(lVar2 + 0x33) == '\x12');
        local_48 = param_2;
        FUN_144b3d940(&local_48);
        FUN_144b3d960();
        FUN_144d6e130(0,1);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fefffe FUN_143fefffe body=12 status=ok
// SIG undefined FUN_143fefffe(void)

void FUN_143fefffe(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143ff0007. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143ff000a FUN_143ff000a body=29 status=ok
// SIG undefined FUN_143ff000a(void)

undefined8 FUN_143ff000a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ff0028 FUN_143ff0028 body=282 status=ok
// SIG undefined FUN_143ff0028(void)

undefined8 * FUN_143ff0028(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143feea9b);
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



// FUNCTION 143ff0142 FUN_143ff0142 body=105 status=ok
// SIG undefined FUN_143ff0142(void)

void FUN_143ff0142(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_143fefeda(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_143fefeda(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143ff0185. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143ff01b4 FUN_143ff01b4 body=31 status=ok
// SIG undefined FUN_143ff01b4(void)

undefined8 FUN_143ff01b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ff01d4 FUN_143ff01d4 body=282 status=ok
// SIG undefined FUN_143ff01d4(void)

undefined8 * FUN_143ff01d4(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143feea9b);
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



// FUNCTION 143ff02ee FUN_143ff02ee body=134 status=ok
// SIG undefined FUN_143ff02ee(void)

void FUN_143ff02ee(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined1 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = *param_1;
  local_50 = &local_40;
  local_40 = 0xffffffffffffffff;
  local_38 = 0xffffffff;
  local_28 = 1;
  local_24 = 0x7000000000;
  local_1c = 0;
  local_10 = 0;
  local_48 = 1;
  FUN_144760590(param_2,&local_50,0);
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ff0380 FUN_143ff0380 body=12 status=ok
// SIG undefined FUN_143ff0380(void)

void FUN_143ff0380(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143ff0389. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143ff038c FUN_143ff038c body=163 status=ok
// SIG undefined FUN_143ff038c(void)

undefined8 * FUN_143ff038c(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_LAB_14b5a8d60;
  lVar4 = param_1[1];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ff0430 FUN_143ff0430 body=282 status=ok
// SIG undefined FUN_143ff0430(void)

undefined8 * FUN_143ff0430(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143feea9b);
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



// FUNCTION 143ff054a FUN_143ff054a body=300 status=ok
// SIG undefined FUN_143ff054a(void)

void FUN_143ff054a(undefined8 *param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  local_48 = param_1[0x15];
  local_68 = &local_58;
  local_58 = 0xffffffffffffffff;
  local_50 = 0xffffffff;
  local_40 = 1;
  local_3c = 0x7000000000;
  local_34 = 0;
  local_28 = 0;
  local_60 = 1;
  FUN_144760590(&DAT_14ca85100,&local_68,0);
  lVar5 = param_1[0x15];
  if (lVar5 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar5 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar5 + 8);
      LOCK();
      uVar3 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar3 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)(lVar5 + 0xd);
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar5;
        plVar8 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar8;
            LOCK();
            bVar9 = plVar8 != DAT_14ca843c0;
            plVar7 = plVar6;
            if (bVar9) {
              plVar8 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar9);
        }
        else {
          do {
            *plVar6 = (longlong)plVar7;
            LOCK();
            bVar9 = plVar7 != DAT_14ca843c8;
            plVar8 = plVar6;
            if (bVar9) {
              plVar7 = DAT_14ca843c8;
              plVar8 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar8;
            UNLOCK();
          } while (bVar9);
        }
      }
    }
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(param_1 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*param_1)(param_1,1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ff06a0 FUN_143ff06a0 body=12 status=ok
// SIG undefined FUN_143ff06a0(void)

void FUN_143ff06a0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143ff06a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143ff06ac FUN_143ff06ac body=29 status=ok
// SIG undefined FUN_143ff06ac(void)

undefined8 FUN_143ff06ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ff06ca FUN_143ff06ca body=282 status=ok
// SIG undefined FUN_143ff06ca(void)

undefined8 * FUN_143ff06ca(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143feea9b);
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



// FUNCTION 143ff07e4 FUN_143ff07e4 body=147 status=ok
// SIG undefined FUN_143ff07e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ff07e4(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  uVar3 = _DAT_000000b4;
  lVar2 = _DAT_000000a8;
  if (param_1 == (undefined8 *)0x0) {
    *(undefined4 *)(_DAT_000000a8 + 0x30) = _DAT_000000b0;
    *(undefined4 *)(lVar2 + 0x34) = uVar3;
    FUN_1447fd100(lVar2 + 0x20,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  lVar2 = param_1[0x15];
  *(undefined8 *)(lVar2 + 0x30) = param_1[0x16];
  FUN_1447fd100(lVar2 + 0x20,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143ff0836. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143ff0894 FUN_143ff0894 body=12 status=ok
// SIG undefined FUN_143ff0894(void)

void FUN_143ff0894(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143ff089d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143ff08a0 FUN_143ff08a0 body=29 status=ok
// SIG undefined FUN_143ff08a0(void)

undefined8 FUN_143ff08a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ff08be FUN_143ff08be body=282 status=ok
// SIG undefined FUN_143ff08be(void)

undefined8 * FUN_143ff08be(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143feea9b);
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



// FUNCTION 143ff09d8 FUN_143ff09d8 body=124 status=ok
// SIG undefined FUN_143ff09d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ff09d8(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ff0a4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(_DAT_000000a8 + 0x20) + 0x18))(_DAT_000000a8 + 0x20,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  (**(code **)(*(longlong *)(param_1[0x15] + 0x20) + 0x18))(param_1[0x15] + 0x20,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143ff0a21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143ff0a54 FUN_143ff0a54 body=285 status=ok
// SIG undefined FUN_143ff0a54(void)

void FUN_143ff0a54(longlong *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  longlong local_48;
  undefined1 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1447fd100(*param_1 + 0x20);
  lVar4 = *(longlong *)(*param_1 + 8);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  local_68 = &local_58;
  local_58 = 0xffffffffffffffff;
  local_50 = 0xffffffff;
  local_40 = 1;
  local_3c = 0x7000000000;
  local_34 = 0;
  local_28 = '\0';
  local_60 = 1;
  local_48 = lVar4;
  FUN_144760590(param_2,&local_68,0);
  if (local_28 == '\x01') {
    local_28 = '\0';
  }
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
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ff0b7c FUN_143ff0b7c body=12 status=ok
// SIG undefined FUN_143ff0b7c(void)

void FUN_143ff0b7c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143ff0b85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143ff0b88 FUN_143ff0b88 body=29 status=ok
// SIG undefined FUN_143ff0b88(void)

undefined8 FUN_143ff0b88(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ff0ba6 FUN_143ff0ba6 body=282 status=ok
// SIG undefined FUN_143ff0ba6(void)

undefined8 * FUN_143ff0ba6(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143feea9b);
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



// FUNCTION 143ff0cc0 FUN_143ff0cc0 body=340 status=ok
// SIG undefined FUN_143ff0cc0(void)

void FUN_143ff0cc0(undefined8 *param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  longlong local_48;
  undefined1 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1447fd100(param_1[0x15] + 0x20,&DAT_14ca85100);
  lVar5 = *(longlong *)(param_1[0x15] + 8);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  local_68 = &local_58;
  local_58 = 0xffffffffffffffff;
  local_50 = 0xffffffff;
  local_40 = 1;
  local_3c = 0x7000000000;
  local_34 = 0;
  local_28 = '\0';
  local_60 = 1;
  local_48 = lVar5;
  FUN_144760590(&DAT_14ca85100,&local_68,0);
  if (local_28 == '\x01') {
    local_28 = '\0';
  }
  if (lVar5 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar5 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar5 + 8);
      LOCK();
      uVar3 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar3 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)(lVar5 + 0xd);
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar5;
        plVar8 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar8;
            LOCK();
            bVar9 = plVar8 != DAT_14ca843c0;
            plVar7 = plVar6;
            if (bVar9) {
              plVar8 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar9);
        }
        else {
          do {
            *plVar6 = (longlong)plVar7;
            LOCK();
            bVar9 = plVar7 != DAT_14ca843c8;
            plVar8 = plVar6;
            if (bVar9) {
              plVar7 = DAT_14ca843c8;
              plVar8 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar8;
            UNLOCK();
          } while (bVar9);
        }
      }
    }
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(param_1 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*param_1)(param_1,1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ff0e15 FUN_143ff0e15 body=773 status=ok
// SIG undefined FUN_143ff0e15(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ff0e15(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  undefined8 *local_48;
  int local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/BinkMediaPlayer",&PTR_FUN_14b5a4f90,1,0);
  ppuStack_60 = &PTR_FUN_14b5a6ff0;
  local_68 = 0;
  local_58 = 3;
  FUN_14282b410(L"/Script/BinkMediaPlayer",&PTR_FUN_14b5a7050,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/BinkMediaPlayer",&PTR_FUN_14b5a78c0,1,0);
  ppuStack_60 = &PTR_FUN_14b5a7f40;
  local_68 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/BinkMediaPlayer",&PTR_FUN_14b5a7f80,1,0);
  _DAT_14cb9e5d4 = 0;
  FUN_14052b5e0(&DAT_14cb9e5d0,"volume_overall",0);
  _DAT_14cb9e5e0 = 0;
  FUN_14052b5e0(&DAT_14cb9e5dc,"volume_music",0);
  _DAT_14cb9e5ec = 0;
  FUN_14052b5e0(&DAT_14cb9e5e8,"volume_sfx",0);
  _DAT_14cb9e5f8 = 0;
  FUN_14052b5e0(&DAT_14cb9e5f4,"volume_dialog",0);
  _DAT_14cb9e604 = 0;
  FUN_14052b5e0(&DAT_14cb9e600,"PlayInBackground",0);
  _DAT_14cb9e610 = 0;
  FUN_14052b5e0(&DAT_14cb9e60c,"MuteHitNotifies",0);
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,2,0x10);
  local_40 = 2;
  *local_48 = &PTR_LAB_149e020b0;
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
  *local_48 = &PTR_FUN_149e062c0;
  local_48[3] = FUN_143fe80bf;
  local_68 = local_68 & 0xffffffff00000000;
  FUN_14152bcb8(&DAT_14cb9e618,L"bink.List",
                L"Display all Bink Media Player objects and their current state",&local_48);
  if (local_40 != 0) {
    if (local_48 == (undefined8 *)0x0) goto LAB_143ff106e;
    (**(code **)*local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
  }
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143ff106e:
  atexit(FUN_143fe8261);
  DAT_14cb9e638 = 0;
  DAT_14cb9e640 = 0;
  atexit(FUN_143feadb5);
  DAT_14cb9e628 = 0;
  _DAT_14cb9e630 = 0;
  atexit(FUN_143feadf0);
  local_48 = (undefined8 *)0x800000014b5a8082;
  local_34 = 0xf;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_1465a0148(&local_48);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ff111c FUN_143ff111c body=310 status=ok
// SIG undefined FUN_143ff111c(void)

void FUN_143ff111c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  bool bVar10;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x3c0) = param_2;
  if (((*(longlong *)(param_1 + 0x488) != 0) &&
      (plVar8 = *(longlong **)(param_1 + 0x490), plVar8 != (longlong *)0x0)) && (0 < (int)plVar8[1])
     ) {
    lVar7 = 0;
    iVar5 = (int)plVar8[1];
    do {
      iVar4 = iVar5;
      if (iVar4 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_143ff118d;
      }
      LOCK();
      iVar5 = (int)plVar8[1];
      bVar10 = iVar4 == iVar5;
      if (bVar10) {
        *(int *)(plVar8 + 1) = iVar4 + 1;
        iVar5 = iVar4;
      }
      UNLOCK();
    } while (!bVar10);
    lVar7 = *(longlong *)(param_1 + 0x488);
LAB_143ff118d:
    *(undefined4 *)(param_1 + 0x5c4) = *(undefined4 *)(lVar7 + 500);
    lVar6 = 0;
    uVar9 = 1;
    if (*(longlong *)(lVar7 + 0x188) == 0) {
      uVar9 = -(uint)(*(longlong *)(lVar7 + 0x180) == 0);
    }
    if (uVar9 < 2) {
      lVar6 = *(longlong *)(lVar7 + 400 + (ulonglong)uVar9 * 8);
    }
    if ((longlong)*(int *)(param_1 + 0x5d8) == 0) {
      bVar10 = false;
    }
    else {
      lVar7 = 0;
      do {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x5d0) + lVar7);
        if (lVar3 == lVar6) break;
        bVar10 = (longlong)*(int *)(param_1 + 0x5d8) * 8 + -8 != lVar7;
        lVar7 = lVar7 + 8;
      } while (bVar10);
      bVar10 = lVar3 == lVar6;
    }
    *(bool *)(param_1 + 0x5c9) = bVar10;
    if (iVar4 != 0) {
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
  FUN_143ffa9f0(param_1);
  return;
}



// FUNCTION 143ff1252 FUN_143ff1252 body=733 status=ok
// SIG undefined FUN_143ff1252(void)

void FUN_143ff1252(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  int *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  int local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_28 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_78);
  uStack_24 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_78) >> 0x20);
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
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_2c);
            goto LAB_143ff1423;
          }
        }
        _Src = (int *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &local_2c) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_2c,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&local_2c,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_2c,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_2c,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
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
LAB_143ff1423:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143ff1530(param_1,local_2c != 0);
  if ((CONCAT44(uStack_24,uStack_28) ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ff1530 FUN_143ff1530 body=291 status=ok
// SIG undefined FUN_143ff1530(void)

void FUN_143ff1530(longlong param_1,char param_2)

{
  longlong lVar1;
  byte bVar2;
  undefined2 *puVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x460);
  if (lVar1 == 0) {
    return;
  }
  if ((*(uint *)(lVar1 + 8) >> 0x1e & 1) != 0) {
    return;
  }
  if (param_2 == '\0') {
    *(undefined1 *)(lVar1 + 0xc78) = 0;
    lVar1 = *(longlong *)(param_1 + 0x460);
    if ((*(byte *)(lVar1 + 0x379) & 0x40) == 0) goto LAB_143ff1598;
    bVar2 = *(byte *)(lVar1 + 0x379) & 0xbf;
  }
  else {
    *(undefined1 *)(lVar1 + 0xc78) = 1;
    lVar1 = *(longlong *)(param_1 + 0x460);
    if ((*(byte *)(lVar1 + 0x379) & 0x40) != 0) goto LAB_143ff1598;
    bVar2 = *(byte *)(lVar1 + 0x379) | 0x40;
  }
  *(byte *)(lVar1 + 0x379) = bVar2;
LAB_143ff1598:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb9ea20) && (FUN_144b3d300(&DAT_14cb9ea20), DAT_14cb9ea20 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14cb9ea18 =
         (longlong *)
         (**(code **)(*DAT_14c8407a8 + 200))
                   (DAT_14c8407a8,L"r.gbx.OverrideSeparateTranslucencyDisable",1);
    _Init_thread_footer(&DAT_14cb9ea20);
  }
  if (DAT_14cb9ea18 == (longlong *)0x0) {
    return;
  }
  puVar3 = &DAT_149e25dfc;
  if (param_2 != '\0') {
    puVar3 = &DAT_149e0209e;
  }
                    /* WARNING: Could not recover jumptable at 0x000143ff15f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14cb9ea18 + 0x98))(DAT_14cb9ea18,puVar3,0xd000000,0);
  return;
}



// FUNCTION 143ff1654 FUN_143ff1654 body=2373 status=ok
// SIG undefined FUN_143ff1654(void)

double * FUN_143ff1654(longlong param_1,double *param_2,double *param_3)

{
  double dVar1;
  undefined4 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  ulonglong uVar12;
  char cVar13;
  uint uVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  longlong lVar17;
  longlong lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined4 uVar22;
  uint uVar23;
  undefined4 uVar24;
  uint uVar25;
  undefined4 uVar26;
  uint uVar27;
  undefined1 auStack_338 [32];
  undefined4 local_318;
  undefined8 *local_310;
  undefined1 *local_308;
  double local_300;
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  double local_2d8;
  double dStack_2d0;
  undefined1 local_2c8 [16];
  double local_2b0;
  double local_2a8;
  double local_2a0;
  undefined1 local_298 [4];
  undefined4 local_294;
  undefined4 local_1f4;
  undefined4 local_1c8;
  double local_198;
  double dStack_190;
  double local_188;
  longlong *local_178;
  uint uStack_170;
  uint uStack_16c;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined1 local_150;
  undefined2 local_14f;
  undefined1 local_14d;
  undefined4 local_14c;
  undefined1 local_148;
  undefined4 local_144;
  undefined1 local_140;
  undefined4 local_13c;
  undefined2 local_138;
  longlong local_110;
  undefined8 local_108;
  undefined1 local_100 [16];
  undefined1 *local_f0;
  undefined8 local_e8;
  ulonglong local_e0;
  double dVar2;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_338;
  local_178 = (longlong *)0x0;
  uStack_170 = 1;
  uStack_16c = 0;
  FUN_1447d05f2(&local_178);
  *local_178 = param_1;
  lVar18 = *(longlong *)(param_1 + 0x450);
  lVar17 = (longlong)(int)uStack_170;
  uStack_170 = uStack_170 + 1;
  if (uStack_16c < uStack_170) {
    FUN_1447d05f2(&local_178);
  }
  local_178[lVar17] = lVar18;
  local_188 = param_3[2];
  local_198 = *param_3;
  dStack_190 = param_3[1];
  if (*(longlong *)(param_1 + 0x450) == 0) {
    local_2e8._4_4_ = DAT_14c8464e0._4_4_;
    local_2e8._0_4_ = (undefined4)DAT_14c8464e0;
    local_2f8._4_4_ = DAT_14c8464e0._4_4_;
    local_2f8._0_4_ = (undefined4)DAT_14c8464e0;
    local_2f8._12_4_ = DAT_14c8464e8._4_4_;
    local_2f8._8_4_ = (undefined4)DAT_14c8464e8;
    local_2e8._8_8_ = 0;
    local_2d8 = DAT_14c8464f0;
    dStack_2d0 = 0.0;
    uVar22 = (undefined4)DAT_14c8464e0;
    uVar23 = DAT_14c8464e0._4_4_;
    uVar24 = (undefined4)DAT_14c8464e8;
    uVar25 = DAT_14c8464e8._4_4_;
    uVar26 = (undefined4)DAT_14c8464e8;
    uVar27 = DAT_14c8464e8._4_4_;
    dVar19 = DAT_14c8464f0;
    dVar4 = DAT_14c8464f0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x450) + 0x1c8);
    if (lVar18 == 0) {
      dStack_2d0 = 0.0;
      local_2f8._8_8_ = DAT_14c846298;
      local_2f8._0_8_ = DAT_14c846290;
      dVar19 = DAT_14c8462a0;
      dVar4 = DAT_14c846290;
      dVar5 = DAT_14c846298;
      dVar21 = DAT_14c8462e8;
      dVar2 = DAT_14c8462e0;
      dVar1 = DAT_14c8462d8;
    }
    else {
      dVar9 = *(double *)(lVar18 + 0x240);
      dVar10 = *(double *)(lVar18 + 0x248);
      dVar11 = *(double *)(lVar18 + 0x250);
      dVar1 = *(double *)(lVar18 + 600);
      dVar2 = *(double *)(lVar18 + 600);
      dVar6 = dVar9 * 0.0 - dVar10 * 1.0;
      dVar7 = dVar10 * 0.0 - dVar11 * 0.0;
      dVar8 = dVar11 * 1.0 - dVar9 * 0.0;
      dVar7 = dVar7 + dVar7;
      dVar8 = dVar8 + dVar8;
      dVar6 = dVar6 + dVar6;
      dVar19 = dVar9 * 1.0 - dVar10 * 0.0;
      dVar20 = dVar10 * 0.0 - dVar11 * 1.0;
      dVar21 = dVar11 * 0.0 - dVar9 * 0.0;
      dStack_2d0 = *(double *)(lVar18 + 600) * 0.0 - *(double *)(lVar18 + 600) * 0.0;
      dVar20 = dVar20 + dVar20;
      dVar21 = dVar21 + dVar21;
      dVar19 = dVar19 + dVar19;
      dStack_2d0 = dStack_2d0 + dStack_2d0;
      dVar4 = (dVar19 * dVar10 - dVar21 * dVar11) + dVar1 * dVar20 + 0.0;
      dVar5 = (dVar11 * dVar20 - dVar9 * dVar19) + dVar2 * dVar21 + 1.0;
      local_2f8._8_4_ = SUB84(dVar5,0);
      local_2f8._0_8_ = dVar4;
      local_2f8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      dVar19 = dVar19 * dVar1 + 0.0 + (dVar21 * dVar9 - dVar20 * dVar10);
      dVar21 = dVar6 * dVar1 + 0.0 + (dVar8 * dVar9 - dVar7 * dVar10);
      dVar2 = (dVar11 * dVar7 - dVar9 * dVar6) + dVar2 * dVar8 + 0.0;
      dVar1 = (dVar6 * dVar10 - dVar8 * dVar11) + dVar1 * dVar7 + 1.0;
    }
    local_2d8 = -dVar19;
    dStack_2d0 = -dStack_2d0;
    uVar25 = (uint)((ulonglong)dVar5 >> 0x20);
    local_2e8._8_4_ = SUB84(dVar5,0);
    local_2e8._0_8_ = -dVar4;
    local_2e8._12_4_ = uVar25 ^ 0x80000000;
    uVar22 = SUB84(dVar1,0);
    uVar23 = (uint)((ulonglong)dVar1 >> 0x20) ^ 0x80000000;
    uVar24 = SUB84(dVar5,0);
    uVar25 = uVar25 ^ 0x80000000;
    uVar26 = SUB84(dVar2,0);
    uVar27 = (uint)((ulonglong)dVar2 >> 0x20) ^ 0x80000000;
    dVar4 = -dVar21;
  }
  memset(local_298,0,0x100);
  dVar6 = local_188;
  dVar1 = dStack_190;
  local_1c8 = 0xffffffff;
  local_294 = 0x3f800000;
  local_1f4 = 0xffffffff;
  dVar21 = (double)*(float *)(param_1 + 0x5e8);
  dVar5 = dVar4 * dVar21 + local_188;
  dVar2 = (double)CONCAT44(uVar27,uVar26) * dVar21 + dStack_190;
  dVar21 = dVar21 * (double)CONCAT44(uVar23,uVar22) + local_198;
  local_13c = 0;
  local_138 = 0x101;
  local_110 = 0;
  local_108 = 0x800000000;
  local_f0 = (undefined1 *)0x0;
  local_e8 = 0x400000000;
  local_150 = 0;
  local_144 = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_14f = 1;
  local_14d = 0;
  local_140 = 0;
  local_14c = 0x1000000;
  local_148 = 1;
  local_300 = local_198;
  local_2b0 = dVar21;
  local_2a8 = dVar2;
  local_2a0 = dVar5;
  if (0 < (int)uStack_170) {
    lVar18 = 0;
    uVar14 = uStack_170;
    do {
      uVar12 = local_e8;
      if (local_178[lVar18] != 0) {
        uVar3 = *(undefined4 *)(local_178[lVar18] + 0xc);
        lVar17 = (longlong)(int)local_e8;
        uVar14 = (int)local_e8 + 1;
        local_e8 = CONCAT44(local_e8._4_4_,uVar14);
        if (local_e8._4_4_ < uVar14) {
          FUN_1447de67e(local_100,uVar12 & 0xffffffff);
        }
        puVar15 = local_f0;
        if (local_f0 == (undefined1 *)0x0) {
          puVar15 = local_100;
        }
        *(undefined4 *)(puVar15 + lVar17 * 4) = uVar3;
        uVar14 = uStack_170;
      }
      lVar18 = lVar18 + 1;
    } while (lVar18 < (int)uVar14);
  }
  local_150 = 1;
  local_14d = 0;
  uVar16 = FUN_1447210f0(param_1);
  local_308 = &DAT_14cad0f10;
  local_318 = 5;
  local_310 = &local_160;
  cVar13 = FUN_1400b50cc(uVar16,local_298,&local_198,&local_2b0);
  if (cVar13 != '\0') {
    dVar21 = (double)*(float *)(param_1 + 0x5e8);
    dVar5 = local_2d8 * dVar21 + dVar6;
    dVar2 = (double)CONCAT44(uVar25,uVar24) * dVar21 + dVar1;
    dVar21 = dVar21 * (double)local_2e8._0_8_ + local_300;
    local_2b0 = dVar21;
    local_2a8 = dVar2;
    local_2a0 = dVar5;
    uVar16 = FUN_1447210f0(param_1);
    local_308 = &DAT_14cad0f10;
    local_318 = 5;
    local_310 = &local_160;
    cVar13 = FUN_1400b50cc(uVar16,local_298,&local_198,&local_2b0);
    if (cVar13 != '\0') {
      dVar21 = (double)*(float *)(param_1 + 0x5e8);
      local_2c8._8_4_ = local_2f8._8_4_;
      local_2c8._0_8_ = local_2f8._8_8_;
      local_2c8._12_4_ = local_2f8._12_4_;
      dVar5 = dVar19 * dVar21 + dVar6;
      dVar2 = local_2f8._8_8_ * dVar21 + dVar1;
      dVar21 = dVar21 * local_2f8._0_8_ + local_300;
      local_2b0 = dVar21;
      local_2a8 = dVar2;
      local_2a0 = dVar5;
      uVar16 = FUN_1447210f0(param_1);
      local_308 = &DAT_14cad0f10;
      local_318 = 5;
      local_310 = &local_160;
      cVar13 = FUN_1400b50cc(uVar16,local_298,&local_198,&local_2b0);
      if (cVar13 != '\0') {
        dVar21 = (double)*(float *)(param_1 + 0x5ec);
        dVar5 = dVar4 * dVar21 + dVar6;
        dVar2 = (double)CONCAT44(uVar27,uVar26) * dVar21 + dVar1;
        dVar21 = (double)CONCAT44(uVar23,uVar22) * dVar21 + local_300;
        local_2b0 = dVar21;
        local_2a8 = dVar2;
        local_2a0 = dVar5;
        uVar16 = FUN_1447210f0(param_1);
        local_308 = &DAT_14cad0f10;
        local_318 = 5;
        local_310 = &local_160;
        cVar13 = FUN_1400b50cc(uVar16,local_298,&local_198,&local_2b0);
        if (cVar13 != '\0') {
          dVar4 = (double)*(float *)(param_1 + 0x5ec);
          dVar5 = local_2d8 * dVar4 + dVar6;
          dVar2 = (double)CONCAT44(uVar25,uVar24) * dVar4 + dVar1;
          dVar21 = (double)local_2e8._0_8_ * dVar4 + local_300;
          local_2b0 = dVar21;
          local_2a8 = dVar2;
          local_2a0 = dVar5;
          uVar16 = FUN_1447210f0(param_1);
          local_308 = &DAT_14cad0f10;
          local_318 = 5;
          local_310 = &local_160;
          cVar13 = FUN_1400b50cc(uVar16,local_298,&local_198,&local_2b0);
          if (cVar13 != '\0') {
            dVar4 = (double)*(float *)(param_1 + 0x5ec);
            dVar5 = dVar19 * dVar4 + dVar6;
            dVar2 = (double)local_2c8._0_8_ * dVar4 + dVar1;
            dVar21 = (double)local_2f8._0_8_ * dVar4 + local_300;
            local_2b0 = dVar21;
            local_2a8 = dVar2;
            local_2a0 = dVar5;
            uVar16 = FUN_1447210f0(param_1);
            local_308 = &DAT_14cad0f10;
            local_318 = 5;
            local_310 = &local_160;
            cVar13 = FUN_1400b50cc(uVar16,local_298,&local_198,&local_2b0);
            if (cVar13 != '\0') {
              param_2[2] = DAT_14c8464f0;
              uVar25 = DAT_14c8464e8._4_4_;
              uVar22 = (undefined4)DAT_14c8464e8;
              uVar23 = DAT_14c8464e0._4_4_;
              *(undefined4 *)param_2 = (undefined4)DAT_14c8464e0;
              *(uint *)((longlong)param_2 + 4) = uVar23;
              *(undefined4 *)(param_2 + 1) = uVar22;
              *(uint *)((longlong)param_2 + 0xc) = uVar25;
              goto LAB_143ff1edd;
            }
          }
        }
      }
    }
  }
  *param_2 = dVar21 - local_300;
  param_2[1] = dVar2 - dVar1;
  param_2[2] = dVar5 - dVar6;
LAB_143ff1edd:
  if (local_f0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_110 != 0) {
    FUN_1400020a8();
  }
  if (local_178 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_e0 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 143ff1f9a FUN_143ff1f9a body=47 status=ok
// SIG undefined FUN_143ff1f9a(void)

longlong FUN_143ff1f9a(void)

{
  if (DAT_14cb9e7b0 == 0) {
    FUN_14000fc22(&DAT_14cb9e7b0,&PTR_FUN_14b5a9290);
  }
  return DAT_14cb9e7b0;
}



// FUNCTION 143ff1fca FUN_143ff1fca body=809 status=ok
// SIG undefined FUN_143ff1fca(void)

void FUN_143ff1fca(undefined8 param_1,longlong param_2,longlong *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
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
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_38);
            goto LAB_143ff21a4;
          }
        }
        puVar8 = (undefined8 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar8 != &local_38) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_38,puVar8,(int)plVar4[6]);
          }
          else {
            memcpy(&local_38,puVar8,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar4[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_38,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_38,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
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
LAB_143ff21a4:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143ff22f4(param_1,&local_48,local_38);
  if (&local_48 == param_3) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_48;
    *(undefined4 *)(param_3 + 1) = local_40;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_3c;
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ff22f4 FUN_143ff22f4 body=3714 status=ok
// SIG undefined FUN_143ff22f4(void)

longlong * FUN_143ff22f4(longlong *param_1,longlong *param_2,code *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  size_t sVar7;
  code *pcVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  char cVar13;
  int iVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  ulonglong uVar24;
  wchar_t *pwVar25;
  byte bVar26;
  code *pcVar27;
  bool bVar28;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined8 local_110;
  wchar_t *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  code **local_f0;
  code *local_e8;
  code *local_e0;
  longlong *local_d8;
  byte local_c9;
  undefined8 local_c8;
  code *local_c0;
  longlong *local_b8;
  code *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  int local_98;
  uint local_94;
  longlong local_90;
  longlong *local_88;
  undefined8 uStack_80;
  code *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  *param_2 = 0;
  param_2[1] = 0;
  plVar11 = param_1;
  plVar5 = (longlong *)FUN_14081cebe();
  bVar28 = plVar5 == (longlong *)0x0;
  local_d8 = plVar5;
  if ((bVar28) || (DAT_14c950c29 == 0)) {
    *(undefined4 *)(param_2 + 1) = 0;
  }
  else {
    FUN_1456cec3c(plVar5);
    *(undefined4 *)(param_2 + 1) = 0;
    plVar11 = plVar5;
    if (*(int *)((longlong)param_2 + 0xc) < 0) {
      plVar11 = param_2;
      FUN_148952ed2(param_2,0);
    }
  }
  local_a8 = param_1;
  local_a0 = param_2;
  if ((local_d8 == (longlong *)0x0) || (DAT_14c950c29 == 0)) {
    if (local_d8 != (longlong *)0x0) goto LAB_143ff2388;
    local_c8 = (code *)CONCAT44(local_c8._4_4_,(int)CONCAT71((int7)((ulonglong)plVar11 >> 8),1));
    if (DAT_14cad00c8 == (longlong *)0x0) {
      uVar4 = 1;
      goto LAB_143ff30cc;
    }
    plVar11 = (longlong *)0x0;
LAB_143ff23e6:
    bVar26 = !bVar28;
    if (plVar11 == DAT_14cad00c8) {
      if ((local_d8 != (longlong *)0x0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c();
      }
      plVar11 = local_a0;
      pcVar27 = param_3 + 0x250;
      uVar2 = *(uint *)(param_3 + 0x268);
      if (uVar2 == 0) {
        uVar24 = 1;
        uVar15 = 0;
        iVar14 = 0;
        uVar3 = 0;
      }
      else {
        pcVar8 = *(code **)(param_3 + 0x260);
        if (*(code **)(param_3 + 0x260) == (code *)0x0) {
          pcVar8 = pcVar27;
        }
        uVar3 = *(uint *)pcVar8;
        if (uVar3 == 0) {
          iVar14 = uVar2 + 0x1e;
          if (-1 < (int)(uVar2 - 1)) {
            iVar14 = uVar2 - 1;
          }
          uVar15 = 0;
          uVar24 = (ulonglong)(uint)(iVar14 >> 5);
          if (iVar14 >> 5 < 1) {
            uVar24 = uVar15;
          }
          iVar14 = 0;
          do {
            if (uVar24 == uVar15) goto LAB_143ff2492;
            iVar14 = iVar14 + 0x20;
            uVar3 = *(uint *)(pcVar8 + (uVar15 + 1) * 4);
            uVar15 = uVar15 + 1;
          } while (uVar3 == 0);
        }
        else {
          uVar15 = 0;
          iVar14 = 0;
        }
        uVar24 = (ulonglong)(-uVar3 & uVar3);
        uVar1 = uVar24 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        uVar3 = (iVar14 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if ((int)uVar2 <= (int)uVar3) {
          uVar3 = uVar2;
        }
      }
      if (uVar3 != uVar2) {
        uVar19 = 0xffffffff;
        uVar22 = uVar2;
        local_c8 = pcVar27;
        do {
          lVar17 = *(longlong *)(*(longlong *)(param_3 + 0x240) + (longlong)(int)uVar3 * 0x10);
          if (lVar17 != 0) {
            iVar23 = (int)plVar11[1];
            *(uint *)(plVar11 + 1) = iVar23 + 1U;
            if (*(uint *)((longlong)plVar11 + 0xc) < iVar23 + 1U) {
              local_c0 = (code *)CONCAT44(local_c0._4_4_,uVar19);
              FUN_140b24874(plVar11,iVar23);
              pcVar27 = local_c8;
              uVar19 = (uint)local_c0;
            }
            *(longlong *)(*plVar11 + (longlong)iVar23 * 8) = lVar17;
            uVar22 = *(uint *)(param_3 + 0x268);
          }
          uVar19 = uVar19 & ~(uint)uVar24;
          pcVar8 = *(code **)(param_3 + 0x260);
          if (*(code **)(param_3 + 0x260) == (code *)0x0) {
            pcVar8 = pcVar27;
          }
          iVar23 = (int)uVar15;
          lVar17 = (longlong)iVar23;
          uVar3 = *(uint *)(pcVar8 + lVar17 * 4) & uVar19;
          if (uVar3 == 0) {
            iVar9 = uVar22 + 0x1e;
            if (-1 < (int)(uVar22 - 1)) {
              iVar9 = uVar22 - 1;
            }
            iVar9 = iVar9 >> 5;
            iVar14 = iVar14 + 0x20;
            iVar10 = iVar9;
            if (iVar9 < iVar23) {
              iVar10 = iVar23;
            }
            if (iVar23 < iVar9) {
              lVar6 = 0;
              do {
                uVar3 = *(uint *)(pcVar8 + (lVar6 + lVar17 + 1) * 4);
                if (uVar3 != 0) {
                  uVar15 = (ulonglong)(iVar23 + (int)lVar6 + 1);
                  uVar19 = 0xffffffff;
                  goto LAB_143ff2f4a;
                }
                iVar14 = iVar14 + 0x20;
                lVar6 = lVar6 + 1;
              } while (iVar10 - lVar17 != lVar6);
              uVar19 = 0xffffffff;
              iVar23 = iVar10;
            }
            uVar15 = (ulonglong)(iVar23 + 1);
            pcVar27 = local_c8;
            uVar3 = uVar22;
          }
          else {
LAB_143ff2f4a:
            uVar24 = (ulonglong)(-uVar3 & uVar3);
            uVar1 = uVar24 * 2 + 1;
            lVar17 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            uVar3 = (iVar14 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
            if ((int)uVar22 <= (int)uVar3) {
              uVar3 = uVar22;
            }
          }
        } while (uVar3 != uVar2);
      }
      goto LAB_143ff2492;
    }
  }
  else {
    FUN_1456cec3c(local_d8);
LAB_143ff2388:
    if (DAT_14cad00c8 == (longlong *)0x0) {
      local_f0 = &local_78;
      local_78 = FUN_144a7958c;
      local_e0 = FUN_14081d0ea;
      local_e8 = FUN_14081d0ea;
      local_f8 = &LAB_1479b7a0c;
      local_100 = &LAB_1463b464e;
      local_108 = L"Engine";
      local_110 = 0;
      local_118 = 0x10000005;
      local_120 = 8;
      local_128 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      if (DAT_14cad00c8 == (longlong *)0x0) {
        uVar4 = 0;
LAB_143ff30cc:
        local_c8 = (code *)CONCAT44(local_c8._4_4_,uVar4);
        local_f0 = &local_78;
        local_78 = FUN_144a7958c;
        local_e0 = FUN_14081d0ea;
        local_e8 = FUN_14081d0ea;
        local_f8 = &LAB_1479b7a0c;
        local_100 = &LAB_1463b464e;
        local_108 = L"Engine";
        local_110 = 0;
        local_118 = 0x10000005;
        local_120 = 8;
        local_128 = 0x110;
        FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
        plVar11 = (longlong *)0x0;
        goto LAB_143ff23e6;
      }
    }
    bVar26 = true;
    if ((int)local_d8[7] < (int)DAT_14cad00c8[7]) {
      local_c8 = (code *)((ulonglong)local_c8._4_4_ << 0x20);
    }
    else {
      local_c8 = (code *)((ulonglong)local_c8._4_4_ << 0x20);
      plVar11 = local_d8;
      if (*(longlong **)(local_d8[6] + (longlong)(int)DAT_14cad00c8[7] * 8) == DAT_14cad00c8 + 6)
      goto LAB_143ff23e6;
    }
  }
  if (((bool)bVar26 != false) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(local_d8);
  }
  pcVar27 = param_3 + 0x250;
  uVar2 = *(uint *)(param_3 + 0x268);
  if (uVar2 == 0) {
    uVar15 = 1;
    uVar24 = 0;
    iVar14 = 0;
    uVar3 = 0;
  }
  else {
    pcVar8 = *(code **)(param_3 + 0x260);
    if (*(code **)(param_3 + 0x260) == (code *)0x0) {
      pcVar8 = pcVar27;
    }
    uVar3 = *(uint *)pcVar8;
    if (uVar3 == 0) {
      iVar14 = uVar2 + 0x1e;
      if (-1 < (int)(uVar2 - 1)) {
        iVar14 = uVar2 - 1;
      }
      uVar24 = 0;
      uVar15 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar15 = uVar24;
      }
      iVar14 = 0;
      do {
        if (uVar15 == uVar24) goto LAB_143ff2492;
        iVar14 = iVar14 + 0x20;
        uVar3 = *(uint *)(pcVar8 + (uVar24 + 1) * 4);
        uVar24 = uVar24 + 1;
      } while (uVar3 == 0);
    }
    else {
      uVar24 = 0;
      iVar14 = 0;
    }
    uVar15 = (ulonglong)(-uVar3 & uVar3);
    uVar1 = uVar15 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    uVar3 = (iVar14 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    if ((int)uVar2 <= (int)uVar3) {
      uVar3 = uVar2;
    }
  }
  if (uVar3 != uVar2) {
    uVar22 = 0xffffffff;
    local_b8 = (longlong *)CONCAT71(local_b8._1_7_,bVar26);
    plVar11 = local_d8;
    local_c0 = pcVar27;
    local_b0 = param_3;
    do {
      lVar17 = *(longlong *)(*(longlong *)(param_3 + 0x240) + (longlong)(int)uVar3 * 0x10);
      if (lVar17 != 0) {
        if ((DAT_14c950c29 & bVar26) == 1) {
          FUN_1456cec3c(plVar11);
          pcVar27 = local_c0;
          plVar11 = local_d8;
LAB_143ff28f0:
          if (DAT_14cad00c8 == (longlong *)0x0) {
            local_78 = FUN_144a7958c;
            local_e0 = FUN_14081d0ea;
            local_e8 = FUN_14081d0ea;
            local_f0 = &local_78;
            local_f8 = &LAB_1479b7a0c;
            local_100 = &LAB_1463b464e;
            local_108 = L"Engine";
            local_110 = 0;
            local_118 = 0x10000005;
            local_120 = 8;
            local_128 = 0x110;
            FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
            pcVar27 = local_c0;
            plVar11 = local_d8;
            if (DAT_14cad00c8 == (longlong *)0x0) goto LAB_143ff290a;
          }
          if ((int)plVar11[7] < (int)DAT_14cad00c8[7]) goto LAB_143ff290a;
          plVar5 = (longlong *)0x0;
          if (*(longlong **)(plVar11[6] + (longlong)(int)DAT_14cad00c8[7] * 8) == DAT_14cad00c8 + 6)
          {
            plVar5 = plVar11;
          }
        }
        else {
          if ((char)local_c8 == '\0') goto LAB_143ff28f0;
LAB_143ff290a:
          plVar5 = (longlong *)0x0;
        }
        plVar16 = local_a0;
        if (((int)plVar5[7] <= *(int *)(*(longlong *)(lVar17 + 0x10) + 0x38)) &&
           (*(longlong **)
             (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x30) + (longlong)(int)plVar5[7] * 8) ==
            plVar5 + 6)) {
          iVar23 = (int)local_a0[1];
          *(uint *)(local_a0 + 1) = iVar23 + 1U;
          if (*(uint *)((longlong)local_a0 + 0xc) < iVar23 + 1U) {
            FUN_140b24874(local_a0,iVar23);
            pcVar27 = local_c0;
            plVar11 = local_d8;
          }
          *(longlong *)(*plVar16 + (longlong)iVar23 * 8) = lVar17;
          param_3 = local_b0;
          bVar26 = (byte)local_b8;
        }
      }
      uVar22 = uVar22 & ~(uint)uVar15;
      pcVar8 = *(code **)(param_3 + 0x260);
      if (*(code **)(param_3 + 0x260) == (code *)0x0) {
        pcVar8 = pcVar27;
      }
      uVar19 = *(uint *)(param_3 + 0x268);
      iVar23 = (int)uVar24;
      lVar17 = (longlong)iVar23;
      uVar3 = *(uint *)(pcVar8 + lVar17 * 4) & uVar22;
      if (uVar3 == 0) {
        iVar9 = uVar19 + 0x1e;
        if (-1 < (int)(uVar19 - 1)) {
          iVar9 = uVar19 - 1;
        }
        iVar9 = iVar9 >> 5;
        iVar14 = iVar14 + 0x20;
        iVar10 = iVar9;
        if (iVar9 < iVar23) {
          iVar10 = iVar23;
        }
        pcVar27 = local_c0;
        if (iVar23 < iVar9) {
          lVar6 = 0;
          do {
            uVar3 = *(uint *)(pcVar8 + (lVar6 + lVar17 + 1) * 4);
            if (uVar3 != 0) {
              uVar24 = (ulonglong)(iVar23 + (int)lVar6 + 1);
              uVar22 = 0xffffffff;
              goto LAB_143ff2a24;
            }
            iVar14 = iVar14 + 0x20;
            lVar6 = lVar6 + 1;
          } while (iVar10 - lVar17 != lVar6);
          uVar22 = 0xffffffff;
          iVar23 = iVar10;
        }
        uVar24 = (ulonglong)(iVar23 + 1);
        plVar11 = local_d8;
        uVar3 = uVar19;
      }
      else {
LAB_143ff2a24:
        uVar15 = (ulonglong)(-uVar3 & uVar3);
        uVar1 = uVar15 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        uVar3 = (iVar14 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if ((int)uVar19 <= (int)uVar3) {
          uVar3 = uVar19;
        }
      }
    } while (uVar3 != uVar2);
  }
LAB_143ff2492:
  local_88 = (longlong *)0x0;
  uStack_80 = 0;
  FUN_14490f2e4(param_3,&local_88,1,1);
  plVar11 = local_a0;
  plVar5 = local_a8;
  if ((longlong)(int)uStack_80 != 0) {
    local_d8 = local_88 + (int)uStack_80;
    plVar16 = local_88;
    do {
      lVar17 = *plVar16;
      if (lVar17 != 0) {
        lVar6 = FUN_14059e8cc();
        if ((*(int *)(*(longlong *)(lVar17 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar6 + 0x38) * 8) != lVar6 + 0x30)) {
          local_78 = (code *)0x0;
          uStack_70 = 0;
          FUN_14110b764(lVar17,&local_78,0);
          lVar6 = (longlong)(int)(uint)uStack_70;
          if (lVar6 != 0) {
            iVar14 = (int)plVar11[1];
            *(uint *)(plVar11 + 1) = iVar14 + (uint)uStack_70;
            if ((uint)(*(int *)((longlong)plVar11 + 0xc) - iVar14) < (uint)uStack_70) {
              FUN_140b24874(plVar11,iVar14);
            }
            memcpy((void *)((longlong)iVar14 * 8 + *plVar11),local_78,lVar6 << 3);
          }
          if (local_78 != (code *)0x0) {
            FUN_1400020a8();
          }
        }
        if (DAT_14cb939a8 == 0) {
          local_78 = FUN_140940982;
          local_e0 = FUN_14081d0ea;
          local_e8 = (code *)&LAB_146522c26;
          local_f0 = &local_78;
          local_f8 = &LAB_148a0db91;
          local_100 = &LAB_146572ba7;
          local_108 = L"Engine";
          local_110 = 0;
          local_118 = 0x10000004;
          local_120 = 8;
          local_128 = 0xdd8;
          FUN_14081cfa3(L"/Script/GbxWeapon",L"Weapon",&DAT_14cb939a8,FUN_146572b80);
        }
        if (((*(int *)(DAT_14cb939a8 + 0x38) <= *(int *)(*(longlong *)(lVar17 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x30) +
              (longlong)*(int *)(DAT_14cb939a8 + 0x38) * 8) == DAT_14cb939a8 + 0x30)) &&
           (((*(byte *)(lVar17 + 0xd50) & 0x10) != 0 || (*(char *)(lVar17 + 0x60) < '\0')))) {
          local_78 = (code *)0x0;
          uStack_70 = 0;
          FUN_14110b764(lVar17,&local_78,0);
          if ((longlong)(int)(uint)uStack_70 != 0) {
            pcVar27 = local_78 + (longlong)(int)(uint)uStack_70 * 8;
            iVar14 = (int)plVar11[1];
            pcVar8 = local_78;
            local_b8 = plVar16;
            local_b0 = pcVar27;
            do {
              iVar23 = 0;
              if (iVar14 != 0) {
                lVar17 = *(longlong *)pcVar8;
                plVar11 = (longlong *)*plVar11;
                lVar6 = (longlong)iVar14;
                iVar23 = 0;
                local_c0 = (code *)CONCAT44(local_c0._4_4_,iVar14);
                iVar9 = 0;
                local_c8 = pcVar8;
                bVar28 = *plVar11 == lVar17;
                do {
                  lVar12 = (longlong)iVar9;
                  iVar20 = iVar9;
                  lVar18 = lVar12;
                  iVar10 = iVar9 + 1;
                  if (iVar9 + 1 < iVar14) {
                    iVar10 = iVar14;
                  }
                  do {
                    lVar18 = lVar18 + 1;
                    iVar21 = iVar10;
                    if (lVar6 <= lVar18) break;
                    iVar21 = iVar20 + 1;
                    iVar20 = iVar21;
                  } while (bVar28 == (plVar11[lVar18] == lVar17));
                  if (bVar28 == false) {
                    if (iVar23 != iVar9) {
                      memmove(plVar11 + iVar23,plVar11 + lVar12,(longlong)(iVar21 - iVar9) << 3);
                    }
                    iVar23 = iVar23 + (iVar21 - iVar9);
                    iVar14 = (uint)local_c0;
                  }
                  iVar9 = iVar21;
                  bVar28 = (bool)(bVar28 ^ 1);
                } while (lVar18 < lVar6);
                *(int *)(local_a0 + 1) = iVar23;
                pcVar27 = local_b0;
                pcVar8 = local_c8;
                plVar11 = local_a0;
                plVar5 = local_a8;
              }
              iVar14 = iVar23;
              pcVar8 = pcVar8 + 8;
              plVar16 = local_b8;
            } while (pcVar8 != pcVar27);
          }
          if (local_78 != (code *)0x0) {
            FUN_1400020a8();
          }
        }
      }
      plVar16 = plVar16 + 1;
    } while (plVar16 != local_d8);
  }
  if (((int)plVar5[0xad] != 0) &&
     (pcVar27 = (code *)(longlong)(int)plVar11[1], pcVar27 != (code *)0x0)) {
    local_d8 = (longlong *)*plVar11;
    local_68 = *(undefined8 *)(*local_d8 + 0x18);
    FUN_1400021e4(&local_68,&local_78);
    lVar17 = plVar5[0xad];
    if ((longlong)(int)lVar17 == 0) {
      uVar15 = 0;
    }
    else {
      lVar6 = plVar5[0xac];
      lVar18 = 0;
      do {
        pwVar25 = L"";
        if (*(int *)(lVar6 + 8 + lVar18) != 0) {
          pwVar25 = *(wchar_t **)(lVar6 + lVar18);
        }
        if (pwVar25 != (wchar_t *)0x0) {
          sVar7 = wcslen(pwVar25);
          local_120 = 0xffffffff;
          local_128 = 0;
          iVar14 = FUN_1447ee042(&local_78,pwVar25,sVar7 & 0xffffffff,1);
          if (iVar14 != -1) {
            uVar15 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
            plVar5 = local_a8;
            goto LAB_143ff2c19;
          }
        }
        lVar18 = lVar18 + 0x10;
      } while ((longlong)(int)lVar17 * 0x10 != lVar18);
      uVar15 = 0;
      plVar5 = local_a8;
    }
LAB_143ff2c19:
    if (local_78 != (code *)0x0) {
      FUN_1400020a8();
    }
    pcVar8 = (code *)0x0;
    local_b8 = (longlong *)((ulonglong)local_b8 & 0xffffffff00000000);
    local_b0 = pcVar27;
    do {
      local_c9 = (byte)uVar15;
      local_94 = (uint)uVar15 ^ 1;
      local_98 = (int)local_b8;
      lVar17 = (longlong)(int)local_b8;
      iVar14 = (int)local_b8 + 1;
      if ((int)local_b8 + 1 < (int)pcVar27) {
        iVar14 = (int)pcVar27;
      }
      local_b8 = (longlong *)CONCAT44(local_b8._4_4_,iVar14);
      local_c8 = (code *)(CONCAT71(local_c8._1_7_,local_c9) & 0xffffffffffffff01);
      local_c0 = pcVar8;
      local_90 = lVar17;
      do {
        lVar17 = lVar17 + 1;
        if ((longlong)pcVar27 <= lVar17) goto LAB_143ff2d83;
        local_68 = *(undefined8 *)(local_d8[lVar17] + 0x18);
        FUN_1400021e4(&local_68,&local_78);
        lVar6 = plVar5[0xad];
        if ((longlong)(int)lVar6 == 0) {
          cVar13 = '\0';
        }
        else {
          lVar18 = plVar5[0xac];
          lVar12 = 0;
          do {
            pwVar25 = L"";
            if (*(int *)(lVar18 + 8 + lVar12) != 0) {
              pwVar25 = *(wchar_t **)(lVar18 + lVar12);
            }
            if (pwVar25 != (wchar_t *)0x0) {
              sVar7 = wcslen(pwVar25);
              local_120 = 0xffffffff;
              local_128 = 0;
              iVar14 = FUN_1447ee042(&local_78,pwVar25,sVar7 & 0xffffffff,1);
              if (iVar14 != -1) {
                cVar13 = '\x01';
                plVar5 = local_a8;
                pcVar27 = local_b0;
                goto LAB_143ff2d55;
              }
            }
            lVar12 = lVar12 + 0x10;
          } while ((longlong)(int)lVar6 * 0x10 != lVar12);
          cVar13 = '\0';
          plVar5 = local_a8;
          pcVar27 = local_b0;
        }
LAB_143ff2d55:
        pcVar8 = local_c0;
        if (local_78 != (code *)0x0) {
          FUN_1400020a8();
        }
      } while ((char)local_c8 == cVar13);
      local_b8 = (longlong *)CONCAT44(local_b8._4_4_,(int)lVar17);
LAB_143ff2d83:
      if ((local_c9 & 1) == 0) {
        iVar14 = (int)local_b8 - local_98;
        iVar23 = (int)pcVar8;
        if (iVar23 != local_98) {
          memmove(local_d8 + iVar23,local_d8 + local_90,(longlong)iVar14 << 3);
        }
        pcVar8 = (code *)(ulonglong)(uint)(iVar23 + iVar14);
      }
      uVar15 = (ulonglong)local_94;
    } while (lVar17 < (longlong)pcVar27);
    *(int *)(local_a0 + 1) = (int)pcVar8;
    plVar11 = local_a0;
  }
  if (local_88 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar11;
}



// FUNCTION 143ff3177 FUN_143ff3177 body=47 status=ok
// SIG undefined FUN_143ff3177(void)

longlong FUN_143ff3177(void)

{
  if (DAT_14cb9e7b8 == 0) {
    FUN_14000fc22(&DAT_14cb9e7b8,&PTR_FUN_14b5a93c0);
  }
  return DAT_14cb9e7b8;
}



// FUNCTION 143ff31a6 FUN_143ff31a6 body=809 status=ok
// SIG undefined FUN_143ff31a6(void)

void FUN_143ff31a6(undefined8 param_1,longlong param_2,longlong *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
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
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_38);
            goto LAB_143ff3380;
          }
        }
        puVar8 = (undefined8 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar8 != &local_38) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_38,puVar8,(int)plVar4[6]);
          }
          else {
            memcpy(&local_38,puVar8,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar4[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_38,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_38,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
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
LAB_143ff3380:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143ff34d0(param_1,&local_48,local_38);
  if (&local_48 == param_3) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_48;
    *(undefined4 *)(param_3 + 1) = local_40;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_3c;
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ff34d0 FUN_143ff34d0 body=1394 status=ok
// SIG undefined FUN_143ff34d0(void)

longlong * FUN_143ff34d0(longlong param_1,longlong *param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  size_t sVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong *plVar17;
  wchar_t *pwVar18;
  longlong *plVar19;
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
  uint local_d4;
  ulonglong local_d0;
  longlong local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong *local_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_80;
  code *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  *param_2 = 0;
  param_2[1] = 0;
  local_c8 = param_1;
  if (DAT_14cb39ca0 == 0) {
    local_f0 = &local_78;
    local_78 = FUN_144a7958c;
    local_e0 = FUN_14081d0ea;
    local_e8 = &LAB_14638c6c0;
    local_f8 = &LAB_14811044c;
    local_100 = &LAB_1407f5cf8;
    local_108 = L"Engine";
    local_110 = 0;
    local_118 = 0x10000004;
    local_120 = 0x10;
    local_128 = 0x8e0;
    FUN_14081cfa3(L"/Script/Niagara",L"NiagaraComponent",&DAT_14cb39ca0,FUN_14646d392);
  }
  local_80 = DAT_14cb39ca0;
  if ((DAT_14cb39ca0 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  FUN_143ffe6b8(param_3,&local_80,param_2,0);
  local_98 = 0;
  uStack_90 = 0;
  FUN_14490f2e4(param_3,&local_98,1,1);
  lVar9 = local_98;
  lVar11 = (longlong)(int)uStack_90;
  if (lVar11 != 0) {
    lVar13 = 0;
    do {
      lVar16 = *(longlong *)(lVar9 + lVar13);
      if (lVar16 != 0) {
        lVar5 = FUN_14059e8cc();
        if ((*(int *)(*(longlong *)(lVar16 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar5 + 0x38) * 8) != lVar5 + 0x30)) {
          local_78 = (code *)0x0;
          uStack_70 = 0;
          FUN_14032d1e2(lVar16,&local_78,0);
          lVar16 = (longlong)(int)(uint)uStack_70;
          if (lVar16 != 0) {
            iVar10 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar10 + (uint)uStack_70;
            if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar10) < (uint)uStack_70) {
              FUN_1456fde5c(param_2,iVar10);
            }
            memcpy((void *)((longlong)iVar10 * 8 + *param_2),local_78,lVar16 << 3);
          }
          if (local_78 != (code *)0x0) {
            FUN_1400020a8();
          }
        }
      }
      lVar13 = lVar13 + 8;
    } while (lVar11 * 8 != lVar13);
  }
  lVar9 = local_c8;
  if ((*(int *)(local_c8 + 0x578) == 0) ||
     (plVar17 = (longlong *)(longlong)(int)param_2[1], plVar17 == (longlong *)0x0))
  goto LAB_143ff394d;
  plVar19 = (longlong *)*param_2;
  local_c0 = plVar19;
  local_b8 = plVar17;
  local_b0 = param_2;
  if (*(longlong *)(*plVar19 + 0x668) == 0) {
LAB_143ff3773:
    local_d4 = 0;
  }
  else {
    local_68 = *(undefined8 *)(*(longlong *)(*plVar19 + 0x668) + 0x18);
    uVar6 = FUN_1400021e4(&local_68,&local_78);
    iVar10 = *(int *)(lVar9 + 0x578);
    bVar1 = true;
    if ((longlong)iVar10 != 0) {
      lVar11 = *(longlong *)(lVar9 + 0x570);
      lVar13 = 0;
      do {
        pwVar18 = L"";
        if (*(int *)(lVar11 + 8 + lVar13) != 0) {
          pwVar18 = *(wchar_t **)(lVar11 + lVar13);
        }
        if (pwVar18 != (wchar_t *)0x0) {
          sVar7 = wcslen(pwVar18);
          local_120 = 0xffffffff;
          local_128 = 0;
          uVar6 = FUN_1447ee042(&local_78,pwVar18,sVar7 & 0xffffffff,1);
          if ((int)uVar6 != -1) {
            bVar1 = false;
            lVar9 = local_c8;
            plVar17 = local_b8;
            plVar19 = local_c0;
            break;
          }
        }
        lVar13 = lVar13 + 0x10;
        lVar9 = local_c8;
        plVar17 = local_b8;
        plVar19 = local_c0;
      } while ((longlong)iVar10 * 0x10 != lVar13);
    }
    if (local_78 != (code *)0x0) {
      uVar6 = FUN_1400020a8();
    }
    local_d4 = (uint)CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
    if (bVar1) goto LAB_143ff3773;
  }
  uVar8 = 0;
  plVar14 = (longlong *)0x0;
  do {
    plVar15 = (longlong *)((ulonglong)plVar14 & 0xffffffff);
    local_d0 = uVar8;
    while( true ) {
      uVar4 = (uint)local_d0;
      uVar12 = (int)plVar15 + 1;
      plVar14 = (longlong *)(ulonglong)uVar12;
      local_a8 = (longlong)(int)plVar15;
      local_a0 = plVar15;
      if ((int)plVar17 <= (int)uVar12) break;
      bVar1 = true;
      plVar15 = (longlong *)(local_a8 + 1);
LAB_143ff37b6:
      while (*(longlong *)(plVar19[(longlong)plVar15] + 0x668) != 0) {
        local_68 = *(undefined8 *)(*(longlong *)(plVar19[(longlong)plVar15] + 0x668) + 0x18);
        FUN_1400021e4(&local_68,&local_78);
        iVar10 = *(int *)(lVar9 + 0x578);
        bVar2 = true;
        if ((longlong)iVar10 != 0) {
          lVar11 = *(longlong *)(lVar9 + 0x570);
          lVar13 = 0;
          do {
            pwVar18 = L"";
            if (*(int *)(lVar11 + 8 + lVar13) != 0) {
              pwVar18 = *(wchar_t **)(lVar11 + lVar13);
            }
            if (pwVar18 != (wchar_t *)0x0) {
              sVar7 = wcslen(pwVar18);
              local_120 = 0xffffffff;
              local_128 = 0;
              iVar3 = FUN_1447ee042(&local_78,pwVar18,sVar7 & 0xffffffff,1);
              if (iVar3 != -1) {
                bVar2 = false;
                lVar9 = local_c8;
                plVar17 = local_b8;
                plVar19 = local_c0;
                break;
              }
            }
            lVar13 = lVar13 + 0x10;
            lVar9 = local_c8;
            plVar17 = local_b8;
            plVar19 = local_c0;
          } while ((longlong)iVar10 * 0x10 != lVar13);
        }
        if (local_78 != (code *)0x0) {
          FUN_1400020a8();
        }
        if (bVar2) break;
        if ((local_d4 & 1) == 0) goto LAB_143ff38e0;
        plVar15 = (longlong *)((longlong)plVar15 + 1);
        bVar1 = (longlong)plVar15 < (longlong)plVar17;
        if (plVar15 == plVar17) {
          uVar4 = (uint)local_d0;
          goto LAB_143ff3941;
        }
      }
      if ((local_d4 & 1) == 0) {
        plVar15 = (longlong *)((longlong)plVar15 + 1);
        bVar1 = (longlong)plVar15 < (longlong)plVar17;
        if (plVar15 == plVar17) {
          plVar15 = (longlong *)((ulonglong)plVar17 & 0xffffffff);
LAB_143ff38e0:
          uVar4 = (uint)local_d0;
          plVar14 = plVar15;
          goto LAB_143ff38e5;
        }
        goto LAB_143ff37b6;
      }
      local_d4 = 0;
      uVar4 = (uint)local_d0;
      if (!bVar1) goto LAB_143ff3941;
    }
    if ((char)local_d4 != '\0') break;
    bVar1 = false;
LAB_143ff38e5:
    iVar10 = (int)plVar14 - (uint)local_a0;
    plVar15 = local_a0;
    if (uVar4 != (uint)local_a0) {
      plVar15 = plVar19 + (int)local_d0;
      memmove(plVar15,plVar19 + local_a8,(longlong)iVar10 << 3);
      uVar4 = (uint)local_d0;
    }
    uVar4 = uVar4 + iVar10;
    uVar8 = (ulonglong)uVar4;
    local_d4 = (uint)CONCAT71((int7)((ulonglong)plVar15 >> 8),1);
  } while (bVar1);
LAB_143ff3941:
  *(uint *)(local_b0 + 1) = uVar4;
  param_2 = local_b0;
LAB_143ff394d:
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 143ff3af9 FUN_143ff3af9 body=47 status=ok
// SIG undefined FUN_143ff3af9(void)

longlong FUN_143ff3af9(void)

{
  if (DAT_14cb9e7d0 == 0) {
    FUN_14000fc22(&DAT_14cb9e7d0,&PTR_FUN_14b5a9610);
  }
  return DAT_14cb9e7d0;
}



// FUNCTION 143ff3b28 FUN_143ff3b28 body=743 status=ok
// SIG undefined FUN_143ff3b28(void)

void FUN_143ff3b28(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 uVar7;
  char cVar8;
  undefined8 *puVar9;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar3)(plVar4);
          if (cVar8 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_38);
            goto LAB_143ff3d02;
          }
        }
        puVar9 = (undefined8 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar9 != &local_38) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_38,puVar9,(int)plVar4[6]);
          }
          else {
            memcpy(&local_38,puVar9,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_38,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_38,lVar5);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar9;
        puVar9 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
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
LAB_143ff3d02:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar7 = FUN_143ff3e10(param_1,local_38);
  *param_3 = uVar7;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ff3e10 FUN_143ff3e10 body=365 status=ok
// SIG undefined FUN_143ff3e10(void)

undefined8 FUN_143ff3e10(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  int iVar3;
  size_t sVar4;
  undefined8 uVar5;
  longlong lVar6;
  wchar_t *_Str;
  longlong lVar7;
  bool bVar8;
  bool bVar9;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  wchar_t *local_68;
  int local_60;
  undefined4 local_5c;
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
    local_68 = *(wchar_t **)(param_2 + 0x18);
    FUN_1400021e4(&local_68,local_58);
    iVar1 = *(int *)(param_1 + 0x588);
    if ((longlong)iVar1 == 0) {
      bVar8 = true;
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0x580);
      lVar7 = 0;
      do {
        local_68 = (wchar_t *)0x0;
        local_60 = *(int *)(lVar2 + 8 + lVar7);
        lVar6 = (longlong)local_60;
        _Src = *(void **)(lVar2 + lVar7);
        if (lVar6 == 0) {
          local_5c = 0;
          _Str = L"";
LAB_143ff3ee6:
          sVar4 = wcslen(_Str);
          local_70 = 0xffffffff;
          local_78 = 0;
          iVar3 = FUN_1447ee042(local_58,_Str,sVar4 & 0xffffffff,1);
          bVar8 = iVar3 != -1;
          if (local_68 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          FUN_1446dd670(&local_68,local_60,0);
          memcpy(local_68,_Src,lVar6 * 2);
          _Str = L"";
          if ((local_60 == 0) || (_Str = local_68, local_68 != (wchar_t *)0x0)) goto LAB_143ff3ee6;
          bVar8 = false;
        }
      } while ((!bVar8) &&
              (bVar9 = (longlong)iVar1 * 0x10 + -0x10 != lVar7, lVar7 = lVar7 + 0x10, bVar9));
      bVar8 = (bool)(bVar8 ^ 1);
    }
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    uVar5 = 1;
    if (!bVar8) goto LAB_143ff3f56;
  }
  uVar5 = 0;
LAB_143ff3f56:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ff3f7e FUN_143ff3f7e body=1334 status=ok
// SIG undefined FUN_143ff3f7e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ff3f7e(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  double *pdVar10;
  double *pdVar11;
  longlong *plVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auStack_88 [32];
  double local_68;
  double local_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar7 = param_1[0x8a];
  if ((lVar7 == 0) || ((*(uint *)(lVar7 + 8) >> 0x1e & 1) != 0)) goto LAB_143ff42f8;
  fVar13 = 0.0;
  if ((*(uint *)(lVar7 + 8) >> 0x1e & 1) == 0) {
    lVar8 = *(longlong *)(lVar7 + 0x1c8);
    if (lVar8 == 0) {
      pdVar10 = &DAT_14c8464e0;
      dVar15 = DAT_14c8464f0;
    }
    else {
      pdVar10 = (double *)(lVar8 + 0x260);
      dVar15 = *(double *)(lVar8 + 0x270);
    }
    lVar8 = param_1[0x39];
    if (lVar8 == 0) {
      pdVar11 = &DAT_14c8464e0;
      dVar16 = DAT_14c8464f0;
    }
    else {
      pdVar11 = (double *)(lVar8 + 0x260);
      dVar16 = *(double *)(lVar8 + 0x270);
    }
    fVar13 = (float)SQRT((dVar15 - dVar16) * (dVar15 - dVar16) +
                         (*pdVar10 - *pdVar11) * (*pdVar10 - *pdVar11) +
                         (pdVar10[1] - pdVar11[1]) * (pdVar10[1] - pdVar11[1]));
  }
  if (*(float *)(param_1 + 0xb2) <= fVar13 && fVar13 != *(float *)(param_1 + 0xb2)) {
    lVar7 = *(longlong *)(lVar7 + 0x1c8);
    if (lVar7 == 0) {
      pdVar10 = &DAT_14c8464e0;
      uVar17 = SUB84(DAT_14c8464f0,0);
      uVar18 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      uVar17 = (undefined4)*(undefined8 *)(lVar7 + 0x270);
      uVar18 = (undefined4)((ulonglong)*(undefined8 *)(lVar7 + 0x270) >> 0x20);
      pdVar10 = (double *)(lVar7 + 0x260);
    }
    lVar7 = param_1[0x39];
    if (lVar7 == 0) {
      pdVar11 = &DAT_14c8464e0;
      dVar15 = DAT_14c8464f0;
    }
    else {
      pdVar11 = (double *)(lVar7 + 0x260);
      dVar15 = *(double *)(lVar7 + 0x270);
    }
    dVar15 = (double)CONCAT44(uVar18,uVar17) - dVar15;
    dVar16 = *pdVar10 - *pdVar11;
    dVar3 = pdVar10[1] - pdVar11[1];
    dVar14 = dVar15 * dVar15 + dVar16 * dVar16 + dVar3 * dVar3;
    if (((dVar14 != 1.0) || (dVar4 = dVar15, dVar5 = dVar16, dVar6 = dVar3, NAN(dVar14))) &&
       (dVar4 = DAT_14c8464f0, dVar5 = DAT_14c8464e0, dVar6 = DAT_14c8464e8,
       9.99999993922529e-09 <= dVar14)) {
      dVar14 = 1.0 / SQRT(dVar14);
      dVar4 = dVar15 * dVar14;
      dVar5 = dVar16 * dVar14;
      dVar6 = dVar3 * dVar14;
    }
    lVar7 = (**(code **)(*param_1 + 0x638))(param_1);
    if (lVar7 != 0) {
      lVar8 = FUN_145c26246();
      if (((((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) &&
           (((int)param_1[0x90] != 0 &&
            ((uVar2 = *(uint *)((longlong)param_1 + 0x47c), -1 < (int)uVar2 &&
             ((int)uVar2 < DAT_14c9647dc)))))) &&
          (plVar9 = (longlong *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
          plVar9 != (longlong *)0x0)) &&
         (((int)plVar9[2] == (int)param_1[0x90] && ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)))) {
        lVar8 = param_1[0x8a];
        fVar13 = 0.0;
        if ((lVar8 != 0) && ((*(uint *)(lVar8 + 8) >> 0x1e & 1) == 0)) {
          lVar8 = *(longlong *)(lVar8 + 0x1c8);
          if (lVar8 == 0) {
            pdVar10 = &DAT_14c8464e0;
            dVar15 = DAT_14c8464f0;
          }
          else {
            pdVar10 = (double *)(lVar8 + 0x260);
            dVar15 = *(double *)(lVar8 + 0x270);
          }
          lVar8 = param_1[0x39];
          if (lVar8 == 0) {
            pdVar11 = &DAT_14c8464e0;
            dVar16 = DAT_14c8464f0;
          }
          else {
            pdVar11 = (double *)(lVar8 + 0x260);
            dVar16 = *(double *)(lVar8 + 0x270);
          }
          fVar13 = (float)SQRT((dVar15 - dVar16) * (dVar15 - dVar16) +
                               (*pdVar10 - *pdVar11) * (*pdVar10 - *pdVar11) +
                               (pdVar10[1] - pdVar11[1]) * (pdVar10[1] - pdVar11[1]));
        }
        fVar13 = (fVar13 - *(float *)(param_1 + 0xb2)) / *(float *)(param_1 + 0xb2);
        fVar13 = fVar13 * fVar13 * *(float *)(param_1 + 0xbe) + 1.0;
        if (fVar13 <= 1.0) {
          fVar13 = 1.0;
        }
        if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
          lVar8 = *plVar9;
        }
        else {
          lVar8 = 0;
        }
        *(float *)(lVar7 + 0x1e0) = fVar13 * *(float *)(lVar8 + 0x38);
      }
    }
    local_68 = dVar5;
    local_60 = dVar6;
    local_58 = dVar4;
    (**(code **)(*param_1 + 0x768))(param_1,&local_68,0x3f800000,0);
    goto LAB_143ff42f8;
  }
  plVar9 = (longlong *)(**(code **)(*param_1 + 0x638))(param_1);
  if (plVar9 == (longlong *)0x0) goto LAB_143ff42f8;
  lVar7 = FUN_145c26246();
  if (((((*(int *)(plVar9[2] + 0x38) < *(int *)(lVar7 + 0x38)) ||
        (*(longlong *)(*(longlong *)(plVar9[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
         lVar7 + 0x30)) || ((int)param_1[0x90] == 0)) ||
      ((uVar2 = *(uint *)((longlong)param_1 + 0x47c), (int)uVar2 < 0 ||
       (DAT_14c9647dc <= (int)uVar2)))) ||
     ((lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar7 == 0 ||
      ((*(int *)(lVar7 + 0x10) != (int)param_1[0x90] || ((*(uint *)(lVar7 + 8) & 0x10200000) != 0)))
      ))) goto LAB_143ff42f8;
  fVar13 = (float)(**(code **)(*plVar9 + 0x480))(plVar9);
  iVar1 = (int)param_1[0x90];
  if ((iVar1 == 0) ||
     ((uVar2 = *(uint *)((longlong)param_1 + 0x47c), (int)uVar2 < 0 || (DAT_14c9647dc <= (int)uVar2)
      ))) {
    if (fVar13 <= _DAT_00000038) goto LAB_143ff42f8;
LAB_143ff44a2:
    lVar7 = 0;
  }
  else {
    plVar12 = (longlong *)
              ((ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((plVar12 == (longlong *)0x0) || ((int)plVar12[2] != iVar1)) ||
       ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)) {
      lVar7 = 0;
    }
    else {
      lVar7 = *plVar12;
    }
    if (fVar13 < *(float *)(lVar7 + 0x38) || fVar13 == *(float *)(lVar7 + 0x38)) goto LAB_143ff42f8;
    if (((DAT_14c9647dc <= (int)uVar2) ||
        (plVar12 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
        plVar12 == (longlong *)0x0)) ||
       (((int)plVar12[2] != iVar1 || ((*(uint *)(plVar12 + 1) & 0x10200000) != 0))))
    goto LAB_143ff44a2;
    lVar7 = *plVar12;
  }
  *(undefined4 *)(plVar9 + 0x3c) = *(undefined4 *)(lVar7 + 0x38);
LAB_143ff42f8:
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ff44b6 FUN_143ff44b6 body=450 status=ok
// SIG undefined FUN_143ff44b6(void)

void FUN_143ff44b6(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  double dVar10;
  double *pdVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar8 = FUN_143ffb7fe();
  if ((lVar8 != 0) && (*(longlong *)(param_1 + 0x450) != 0)) {
    lVar8 = param_1;
    plVar9 = (longlong *)FUN_143ffb7fe();
    uVar12 = (undefined4)lVar8;
    dVar10 = *(double *)(param_1 + 0x450);
    lVar8 = *(longlong *)((longlong)dVar10 + 0x1c8);
    if (lVar8 == 0) {
      local_58 = DAT_14c846508;
      local_68 = (undefined4)DAT_14c8464f8;
      uStack_64 = DAT_14c8464f8._4_4_;
      uStack_60 = (undefined4)DAT_14c846500;
      uStack_5c = DAT_14c846500._4_4_;
    }
    else {
      dVar3 = *(double *)(lVar8 + 0x240);
      dVar4 = *(double *)(lVar8 + 0x248);
      dVar5 = *(double *)(lVar8 + 0x250);
      dVar6 = *(double *)(lVar8 + 600);
      pdVar11 = *(double **)(lVar8 + 0x228);
      local_88 = dVar3;
      uStack_80 = dVar4;
      local_78 = dVar5;
      uStack_70 = dVar6;
      if (pdVar11 == (double *)0x0) {
        uVar12 = 0x40;
        pdVar11 = (double *)FUN_14001cc68(0x40,0x10);
        dVar10 = DAT_14c8463d8;
        *pdVar11 = DAT_14c8463d0;
        pdVar11[1] = dVar10;
        dVar10 = DAT_14c8463e8;
        pdVar11[2] = DAT_14c8463e0;
        pdVar11[3] = dVar10;
        dVar10 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
        pdVar11[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
        pdVar11[5] = dVar10;
        dVar10 = DAT_14c846508;
        pdVar11[6] = DAT_14c846508;
        *(double **)(lVar8 + 0x228) = pdVar11;
      }
      auVar1._8_4_ = (int)-(ulonglong)(dVar4 != pdVar11[1]);
      auVar1._0_8_ = -(ulonglong)(dVar3 != *pdVar11);
      auVar1._12_4_ = (int)(-(ulonglong)(dVar4 != pdVar11[1]) >> 0x20);
      iVar7 = movmskpd(SUB84(dVar10,0),auVar1);
      auVar2._8_4_ = (int)-(ulonglong)(dVar6 != pdVar11[3]);
      auVar2._0_8_ = -(ulonglong)(dVar5 != pdVar11[2]);
      auVar2._12_4_ = (int)(-(ulonglong)(dVar6 != pdVar11[3]) >> 0x20);
      uVar13 = movmskpd(uVar12,auVar2);
      if ((uVar13 & 0x3fffffff) != 0 || iVar7 != 0) {
        *(undefined4 *)(pdVar11 + 2) = (undefined4)local_78;
        *(undefined4 *)((longlong)pdVar11 + 0x14) = local_78._4_4_;
        *(undefined4 *)(pdVar11 + 3) = (undefined4)uStack_70;
        *(undefined4 *)((longlong)pdVar11 + 0x1c) = uStack_70._4_4_;
        *(undefined4 *)pdVar11 = (undefined4)local_88;
        *(undefined4 *)((longlong)pdVar11 + 4) = local_88._4_4_;
        *(undefined4 *)(pdVar11 + 1) = (undefined4)uStack_80;
        *(undefined4 *)((longlong)pdVar11 + 0xc) = uStack_80._4_4_;
        FUN_1448052ee(&local_88,&local_68);
        pdVar11[6] = local_58;
        pdVar11[4] = (double)CONCAT44(uStack_64,local_68);
        pdVar11[5] = (double)CONCAT44(uStack_5c,uStack_60);
      }
      local_58 = pdVar11[6];
      local_68 = *(undefined4 *)(pdVar11 + 4);
      uStack_64 = *(undefined4 *)((longlong)pdVar11 + 0x24);
      uStack_60 = *(undefined4 *)(pdVar11 + 5);
      uStack_5c = *(undefined4 *)((longlong)pdVar11 + 0x2c);
    }
    (**(code **)(*plVar9 + 0x688))(plVar9,&local_68,1);
  }
  *(undefined1 *)(param_1 + 0x478) = 0;
  FUN_148b73b9c(param_1);
  lVar8 = *(longlong *)(param_1 + 0x458);
  if ((lVar8 != 0) && ((*(uint *)(lVar8 + 8) >> 0x1e & 1) == 0)) {
    FUN_140898514(lVar8 + 0xa0,0);
  }
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ff467a FUN_143ff467a body=603 status=ok
// SIG undefined FUN_143ff467a(void)

void FUN_143ff467a(longlong param_1,undefined8 param_2)

{
  byte *pbVar1;
  longlong lVar2;
  longlong *plVar3;
  double *pdVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  double dVar8;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong local_68;
  longlong lStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar3 = *(longlong **)(param_1 + 0x1c8);
  if (plVar3 != (longlong *)0x0) {
    dVar8 = (double)(float)param_2;
    local_38 = ((*(double *)(param_1 + 0x6e8) - *(double *)(param_1 + 0x6b8)) * dVar8 +
               *(double *)(param_1 + 0x6b8)) - (double)plVar3[0x4e];
    local_40 = ((*(double *)(param_1 + 0x6e0) - *(double *)(param_1 + 0x6b0)) * dVar8 +
               *(double *)(param_1 + 0x6b0)) - (double)plVar3[0x4d];
    local_48 = ((*(double *)(param_1 + 0x6d8) - *(double *)(param_1 + 0x6a8)) * dVar8 +
               *(double *)(param_1 + 0x6a8)) - (double)plVar3[0x4c];
    local_68 = plVar3[0x48];
    lStack_60 = plVar3[0x49];
    local_58 = (undefined4)plVar3[0x4a];
    uStack_54 = *(undefined4 *)((longlong)plVar3 + 0x254);
    uStack_50 = (undefined4)plVar3[0x4b];
    uStack_4c = *(undefined4 *)((longlong)plVar3 + 0x25c);
    local_c8 = 0;
    local_d0 = 0;
    local_d8 = 0;
    (**(code **)(*plVar3 + 0x510))(plVar3,&local_48,&local_68,0);
  }
  local_88 = *(undefined8 *)(param_1 + 0x6f0);
  uStack_80 = *(undefined8 *)(param_1 + 0x6f8);
  local_78 = *(undefined8 *)(param_1 + 0x700);
  local_a8 = *(undefined4 *)(param_1 + 0x6c0);
  uStack_a4 = *(undefined4 *)(param_1 + 0x6c4);
  uStack_a0 = *(undefined4 *)(param_1 + 0x6c8);
  uStack_9c = *(undefined4 *)(param_1 + 0x6cc);
  local_98 = *(undefined8 *)(param_1 + 0x6d0);
  local_d8 = CONCAT71(local_d8._1_7_,1);
  FUN_140ca2a46(&local_68,&local_a8,&local_88,param_2);
  plVar3 = (longlong *)FUN_143ffb7fe(param_1);
  (**(code **)(*plVar3 + 0x688))(plVar3,&local_68,1);
  FUN_148b73d98(param_1,&local_c0);
  lVar2 = *(longlong *)(param_1 + 0x1c8);
  if (lVar2 == 0) {
    pdVar4 = (double *)&DAT_14c8464e0;
    uVar5 = (undefined4)DAT_14c8464f0;
    uVar7 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  }
  else {
    uVar5 = (undefined4)*(undefined8 *)(lVar2 + 0x270);
    uVar7 = (undefined4)((ulonglong)*(undefined8 *)(lVar2 + 0x270) >> 0x20);
    pdVar4 = (double *)(lVar2 + 0x260);
  }
  local_b0 = local_b0 - (double)CONCAT44(uVar7,uVar5);
  fVar6 = (float)SQRT(local_b0 * local_b0 +
                      (local_b8 - pdVar4[1]) * (local_b8 - pdVar4[1]) +
                      (local_c0 - *pdVar4) * (local_c0 - *pdVar4));
  if ((fVar6 < 20.0) ||
     (*(float *)(param_1 + 0x590) <= fVar6 && fVar6 != *(float *)(param_1 + 0x590))) {
    *(undefined1 *)(param_1 + 0x478) = 0;
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x470) + 0x112);
    *pbVar1 = *pbVar1 & 0xfe;
    plVar3 = (longlong *)FUN_143ffb7fe(param_1);
    (**(code **)(*plVar3 + 0x688))(plVar3,param_1 + 0x660,1);
    FUN_143ff44b6(param_1);
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ff48d6 FUN_143ff48d6 body=123 status=ok
// SIG undefined FUN_143ff48d6(void)

void FUN_143ff48d6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined1 *)(param_1 + 0x478) = 0;
  plVar1 = (longlong *)FUN_143ffb7fe();
  (**(code **)(*plVar1 + 0x680))(plVar1,&local_30);
  *(undefined8 *)(param_1 + 0x6a0) = local_20;
  *(undefined4 *)(param_1 + 0x690) = local_30;
  *(undefined4 *)(param_1 + 0x694) = uStack_2c;
  *(undefined4 *)(param_1 + 0x698) = uStack_28;
  *(undefined4 *)(param_1 + 0x69c) = uStack_24;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ff4952 FUN_143ff4952 body=1698 status=ok
// SIG undefined FUN_143ff4952(void)

void FUN_143ff4952(longlong param_1,float param_2)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  double *pdVar7;
  longlong *plVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  uint uVar18;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  undefined4 local_170;
  undefined1 local_168;
  float local_15c;
  undefined1 local_158 [16];
  double local_148;
  undefined8 uStack_140;
  double local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  double local_110;
  undefined8 local_108;
  double local_100;
  double local_f8;
  double dStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  double local_d8;
  double local_d0;
  double local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (*(longlong *)(param_1 + 0x450) == 0) {
    pdVar7 = (double *)(param_1 + 0x620);
    uVar9 = (undefined4)*(undefined8 *)(param_1 + 0x630);
    uVar10 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x630) >> 0x20);
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x450) + 0x1c8);
    if (lVar1 == 0) {
      pdVar7 = &DAT_14c8464e0;
      uVar9 = SUB84(DAT_14c8464f0,0);
      uVar10 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      uVar9 = (undefined4)*(undefined8 *)(lVar1 + 0x270);
      uVar10 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x270) >> 0x20);
      pdVar7 = (double *)(lVar1 + 0x260);
    }
  }
  plVar8 = *(longlong **)(param_1 + 0x1c8);
  if (plVar8 != (longlong *)0x0) {
    dVar17 = (double)param_2;
    local_c8 = ((((double)CONCAT44(uVar10,uVar9) + *(double *)(param_1 + 0x688)) -
                *(double *)(param_1 + 0x630)) * dVar17 + *(double *)(param_1 + 0x630)) -
               (double)plVar8[0x4e];
    local_d0 = (((pdVar7[1] + *(double *)(param_1 + 0x680)) - *(double *)(param_1 + 0x628)) * dVar17
               + *(double *)(param_1 + 0x628)) - (double)plVar8[0x4d];
    local_d8 = (((*pdVar7 + *(double *)(param_1 + 0x678)) - *(double *)(param_1 + 0x620)) * dVar17 +
               *(double *)(param_1 + 0x620)) - (double)plVar8[0x4c];
    local_f8 = (double)plVar8[0x48];
    dStack_f0 = (double)plVar8[0x49];
    local_e8 = (undefined4)plVar8[0x4a];
    uStack_e4 = *(undefined4 *)((longlong)plVar8 + 0x254);
    uStack_e0 = (undefined4)plVar8[0x4b];
    uStack_dc = *(undefined4 *)((longlong)plVar8 + 0x25c);
    local_168 = 0;
    local_170 = 0;
    local_178 = 0;
    (**(code **)(*plVar8 + 0x510))(plVar8,&local_d8,&local_f8,0);
  }
  FUN_148b73d98(param_1,&local_f8);
  lVar1 = *(longlong *)(param_1 + 0x1c8);
  if (lVar1 == 0) {
    pdVar7 = &DAT_14c8464e0;
    uVar9 = SUB84(DAT_14c8464f0,0);
    uVar10 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  }
  else {
    uVar9 = (undefined4)*(undefined8 *)(lVar1 + 0x270);
    uVar10 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x270) >> 0x20);
    pdVar7 = (double *)(lVar1 + 0x260);
  }
  dVar15 = dStack_f0 - pdVar7[1];
  dVar16 = local_f8 - *pdVar7;
  dVar12 = (double)CONCAT44(uStack_e4,local_e8) - (double)CONCAT44(uVar10,uVar9);
  dVar17 = dVar12 * dVar12 + dVar16 * dVar16 + dVar15 * dVar15;
  if (((dVar17 != 1.0) || (dVar13 = dVar15, dVar2 = dVar16, dVar14 = dVar12, NAN(dVar17))) &&
     (dVar13 = DAT_14c8464e8, dVar2 = DAT_14c8464e0, dVar14 = DAT_14c8464f0,
     9.99999993922529e-09 <= dVar17)) {
    dVar17 = 1.0 / SQRT(dVar17);
    dVar13 = dVar15 * dVar17;
    dVar2 = dVar16 * dVar17;
    dVar14 = dVar12 * dVar17;
  }
  uVar11 = 0x3ff00000;
  uVar18 = ~(uint)(-(ulonglong)(ABS(dVar14) < 0.9998999834060669) >> 0x20) & 0x3ff00000;
  if (0.9998999834060669 <= ABS(dVar14)) {
    uVar11 = 0;
  }
  dVar17 = (double)((ulonglong)uVar18 << 0x20) * dVar13 + dVar2 * -0.0;
  dVar16 = (double)((ulonglong)uVar11 << 0x20) * dVar2 -
           dVar14 * (double)((ulonglong)uVar18 << 0x20);
  dVar15 = dVar14 * 0.0 - dVar13 * (double)((ulonglong)uVar11 << 0x20);
  dVar12 = dVar17 * dVar17 + dVar15 * dVar15 + dVar16 * dVar16;
  if (((dVar12 != 1.0) || (dVar3 = dVar17, dVar4 = dVar16, dVar5 = dVar15, NAN(dVar12))) &&
     (dVar3 = DAT_14c8464f0, dVar4 = DAT_14c8464e8, dVar5 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar12)) {
    dVar12 = 1.0 / SQRT(dVar12);
    dVar3 = dVar17 * dVar12;
    dVar4 = dVar16 * dVar12;
    dVar5 = dVar15 * dVar12;
  }
  dVar16 = dVar5 * dVar13;
  dVar17 = dVar14 * dVar5;
  local_148 = dVar13 * dVar3;
  local_15c = param_2;
  if (((dVar2 != -dVar2) || (NAN(dVar2) || NAN(-dVar2))) || ((dVar13 != 0.0 || (NAN(dVar13))))) {
    local_158._0_8_ = dVar5;
    dVar15 = atan2(dVar13,dVar2);
    dVar15 = dVar15 * 57.29577951308232;
    uVar9 = extraout_XMM0_Dc;
    uVar10 = extraout_XMM0_Dd;
    dVar5 = (double)local_158._0_8_;
  }
  else {
    dVar15 = 0.0;
    uVar9 = 0;
    uVar10 = 0;
  }
  dVar16 = dVar2 * dVar4 - dVar16;
  uStack_140 = 0;
  local_138 = dVar17 - dVar3 * dVar2;
  uStack_130 = 0;
  dVar12 = local_148 - dVar4 * dVar14;
  dVar13 = SQRT(dVar13 * dVar13 + dVar2 * dVar2);
  dVar17 = 0.0;
  local_148 = dVar16;
  if ((((dVar14 != 0.0) || (NAN(dVar14))) || (dVar13 != 0.0)) || (NAN(dVar13))) {
    dVar17 = atan2(dVar14,dVar13);
    dVar17 = dVar17 * 57.29577951308232;
  }
  local_158._8_4_ = uVar9;
  local_158._0_8_ = dVar15;
  local_158._12_4_ = uVar10;
  dVar16 = sin(dVar17 * 0.01745329238474369);
  dVar13 = sin(dVar15 * 0.01745329238474369);
  dVar2 = cos(dVar17 * 0.01745329238474369);
  dVar15 = cos(dVar15 * 0.01745329238474369);
  fVar6 = local_15c;
  local_100 = 0.0;
  dVar14 = dVar16 * 0.0 * dVar15 - dVar13;
  dVar15 = dVar16 * 0.0 * dVar13 + dVar15;
  dVar16 = dVar3 * dVar2 * -0.0 + dVar5 * dVar14 + dVar4 * dVar15;
  dVar15 = local_148 * dVar2 * -0.0 + dVar12 * dVar14 + local_138 * dVar15;
  if (((dVar15 != 0.0) || (NAN(dVar15))) || ((dVar16 != 0.0 || (NAN(dVar16))))) {
    local_100 = atan2(dVar15,dVar16);
    local_100 = local_100 * 57.29577951308232;
  }
  local_108 = local_158._0_8_;
  local_128 = *(undefined4 *)(param_1 + 0x660);
  uStack_124 = *(undefined4 *)(param_1 + 0x664);
  uStack_120 = *(undefined4 *)(param_1 + 0x668);
  uStack_11c = *(undefined4 *)(param_1 + 0x66c);
  local_118 = *(undefined8 *)(param_1 + 0x670);
  local_178 = CONCAT71(local_178._1_7_,1);
  local_110 = dVar17;
  FUN_140ca2a46(&local_f8,&local_128,&local_110,fVar6);
  plVar8 = (longlong *)FUN_143ffb7fe(param_1);
  (**(code **)(*plVar8 + 0x688))(plVar8,&local_f8,1);
  if ((local_c0 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ff4ffb FUN_143ff4ffb body=47 status=ok
// SIG undefined FUN_143ff4ffb(void)

longlong FUN_143ff4ffb(void)

{
  if (DAT_14cb9e800 == 0) {
    FUN_14000fc22(&DAT_14cb9e800,&PTR_FUN_14b5a9938);
  }
  return DAT_14cb9e800;
}



// FUNCTION 143ff502a FUN_143ff502a body=1382 status=ok
// SIG undefined FUN_143ff502a(void)

void FUN_143ff502a(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined4 *_Src;
  int *_Src_00;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  int local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uStack_30 = 0;
  uStack_2c = 0;
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
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&uStack_30);
            goto LAB_143ff51fc;
          }
        }
        _Src = (undefined4 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &uStack_30) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&uStack_30,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&uStack_30,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&uStack_30,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&uStack_30,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_30);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_30);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_30 = (undefined4)uVar2;
      uStack_2c = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_30);
    }
  }
LAB_143ff51fc:
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
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_34);
            goto LAB_143ff53af;
          }
        }
        _Src_00 = (int *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src_00 != &local_34) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_34,_Src_00,(int)plVar4[6]);
          }
          else {
            memcpy(&local_34,_Src_00,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_34,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_34,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_34);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_34);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_34 = (int)uVar2;
      uStack_30 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_34);
    }
  }
LAB_143ff53af:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143ff5592(param_1,CONCAT44(uStack_2c,uStack_30),local_34 != 0);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ff5592 FUN_143ff5592 body=846 status=ok
// SIG undefined FUN_143ff5592(void)

void FUN_143ff5592(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  byte bVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_188 [32];
  longlong local_168 [2];
  undefined8 *local_158 [2];
  longlong local_148;
  longlong *local_138;
  longlong local_128 [4];
  int local_108;
  undefined1 *local_f8;
  int local_f0;
  longlong local_e8;
  undefined **local_d8;
  undefined8 local_d0;
  undefined *local_c8 [4];
  int local_a8;
  longlong local_a0;
  undefined1 local_98 [16];
  longlong local_88;
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  FUN_143ff22f4(param_1,&local_f8,param_2);
  puVar2 = local_f8;
  lVar7 = (longlong)local_f0;
  if (lVar7 != 0) {
    lVar8 = 0;
    do {
      lVar1 = *(longlong *)(puVar2 + lVar8);
      FUN_1449e3cec(lVar1,param_3,1);
      if (((*(byte *)(lVar1 + 0x2d6) & 2) >> 1 == (byte)param_3) &&
         (*(byte *)(lVar1 + 0x2d6) = *(byte *)(lVar1 + 0x2d6) & 0xfd | ((byte)param_3 ^ 1) * '\x02',
         (~*(byte *)(lVar1 + 0x9c) & 3) == 0)) {
        bVar3 = *(byte *)(lVar1 + 0x9d);
        if ((bVar3 & 1) != 0) {
          if ((*(longlong *)(lVar1 + 0xb0) != 0) || (lVar4 = FUN_1448abda6(lVar1), lVar4 != 0))
          goto LAB_143ff5617;
          bVar3 = *(byte *)(lVar1 + 0x9d);
        }
        *(byte *)(lVar1 + 0x9d) = bVar3 | 1;
        FUN_1401057d4(lVar1);
        FUN_14010586c(&DAT_14cad0140,lVar1);
      }
LAB_143ff5617:
      lVar8 = lVar8 + 8;
    } while (lVar7 * 8 != lVar8);
  }
  if (local_f8 != (undefined1 *)0x0) {
    FUN_1400020a8(local_f8);
  }
  FUN_143ff34d0(param_1,&local_f8,param_2);
  puVar2 = local_f8;
  if ((longlong)local_f0 != 0) {
    lVar7 = 0;
    do {
      FUN_1449e3cec(*(undefined8 *)(puVar2 + lVar7),param_3,1);
      lVar7 = lVar7 + 8;
    } while ((longlong)local_f0 * 8 != lVar7);
  }
  if (local_f8 != (undefined1 *)0x0) {
    FUN_1400020a8(local_f8);
  }
  uVar5 = FUN_1447210f0(param_1);
  uVar5 = FUN_1412af310(uVar5);
  FUN_143ff34d0(param_1,local_168,uVar5);
  local_e8 = 0;
  local_d8 = &PTR_DAT_14b414cb0;
  local_f8 = &LAB_143dcca28;
  local_d0 = param_2;
  FUN_1458e8594(uVar5,local_98);
  FUN_1458e842a(local_98,&local_f8);
  FUN_1458e84aa(local_98,local_158);
  if (local_a8 != local_108) {
    do {
      if (local_a8 < 0) {
        if ((local_108 < 0) || (*(int *)(local_158[0] + 0x73) <= local_108)) break;
      }
      else if (local_108 < 0) {
        if (*(int *)(local_f8 + 0x398) <= local_a8) break;
      }
      else if (local_108 < *(int *)(local_158[0] + 0x73) == local_a8 < *(int *)(local_f8 + 0x398))
      break;
      if ((local_a0 != 0) && (*(longlong *)(local_a0 + 0x80) != 0)) {
        FUN_1449e3cec(*(longlong *)(local_a0 + 0x80),param_3,1);
      }
      local_a8 = local_a8 + 1;
      FUN_14131935c(&local_f8);
    } while (local_a8 != local_108);
  }
  if (local_148 != 0) {
    if (local_138 == (longlong *)0x0) {
      local_138 = local_128;
    }
    (**(code **)(*local_138 + 0x10))();
  }
  if (local_e8 != 0) {
    ppuVar6 = local_d8;
    if (local_d8 == (undefined **)0x0) {
      ppuVar6 = local_c8;
    }
    (**(code **)(*ppuVar6 + 0x10))();
  }
  if (local_88 != 0) {
    if (local_78 == (longlong *)0x0) {
      local_78 = local_68;
    }
    (**(code **)(*local_78 + 0x10))();
  }
  if (local_168[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ff58e2 FUN_143ff58e2 body=759 status=ok
// SIG undefined FUN_143ff58e2(void)

void FUN_143ff58e2(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined4 *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_28 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_78);
  uStack_24 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_78) >> 0x20);
  local_2c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_40 = FUN_1408a629c;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar6 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar6;
      *(longlong *)(param_2 + 0x40) = lVar6;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar6,&local_2c);
            goto LAB_143ff5ab3;
          }
        }
        _Src = (undefined4 *)(lVar6 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &local_2c) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_2c,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&local_2c,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_2c,lVar6,1);
      }
      else {
        (*pcVar3)(plVar4,&local_2c,lVar6);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar8;
        puVar8 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
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
      local_2c = (undefined4)uVar2;
      uStack_28 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_2c);
    }
  }
LAB_143ff5ab3:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar6 = *(longlong *)(param_1 + 0x460);
  if ((lVar6 != 0) && ((*(uint *)(lVar6 + 8) >> 0x1e & 1) == 0)) {
    *(undefined4 *)(lVar6 + 0x674) = local_2c;
  }
  if ((CONCAT44(uStack_24,uStack_28) ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ff5bda FUN_143ff5bda body=759 status=ok
// SIG undefined FUN_143ff5bda(void)

void FUN_143ff5bda(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined4 *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_28 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_78);
  uStack_24 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_78) >> 0x20);
  local_2c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_40 = FUN_1408a629c;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar6 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar6;
      *(longlong *)(param_2 + 0x40) = lVar6;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar6,&local_2c);
            goto LAB_143ff5dab;
          }
        }
        _Src = (undefined4 *)(lVar6 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &local_2c) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_2c,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&local_2c,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_2c,lVar6,1);
      }
      else {
        (*pcVar3)(plVar4,&local_2c,lVar6);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar8;
        puVar8 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
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
      local_2c = (undefined4)uVar2;
      uStack_28 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_2c);
    }
  }
LAB_143ff5dab:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar6 = *(longlong *)(param_1 + 0x460);
  if ((lVar6 != 0) && ((*(uint *)(lVar6 + 8) >> 0x1e & 1) == 0)) {
    *(undefined4 *)(lVar6 + 0x66c) = local_2c;
  }
  if ((CONCAT44(uStack_24,uStack_28) ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ff5ed2 FUN_143ff5ed2 body=11 status=ok
// SIG undefined FUN_143ff5ed2(void)

void FUN_143ff5ed2(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x5e0) = param_2;
  FUN_143ffb8d0();
  return;
}



// FUNCTION 143ff5ede FUN_143ff5ede body=3145 status=ok
// SIG undefined FUN_143ff5ede(void)

void FUN_143ff5ede(longlong param_1,char param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  bool bVar19;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined2 *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  code **local_110;
  undefined1 *local_108;
  code *local_100;
  longlong local_f0;
  code *local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  longlong local_c0;
  longlong *local_b8;
  undefined8 uStack_b0;
  longlong local_a0;
  longlong *local_98;
  undefined8 uStack_90;
  longlong local_80;
  longlong *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  *(char *)(param_1 + 0x5e4) = param_2;
  if (param_2 == '\0') {
    local_78 = (longlong *)0x0;
    uStack_70 = 0;
    if (DAT_14cb5b388 == 0) {
      local_110 = &local_e8;
      local_e8 = FUN_141864c34;
      local_100 = FUN_14081d0ea;
      local_108 = &LAB_146431698;
      local_118 = &LAB_1486775cb;
      local_120 = &LAB_1464cee35;
      local_128 = &DAT_149e063b2;
      local_130 = 0;
      local_138 = 0x10000005;
      local_140 = 0x10;
      local_148 = 0x3a20;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
    }
    local_80 = DAT_14cb5b388;
    if ((DAT_14cb5b388 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    uVar5 = FUN_1447210f0(param_1);
    FUN_1434f53e8(uVar5,&local_80);
    if ((longlong)(int)uStack_70 != 0) {
      plVar9 = local_78 + (int)uStack_70;
      local_f0 = param_1 + 0x798;
      plVar11 = local_78;
      do {
        plVar8 = (longlong *)*plVar11;
        if (plVar8 == (longlong *)0x0) {
LAB_143ff6072:
          plVar8 = (longlong *)0x0;
        }
        else {
          if (DAT_14cb5b388 == 0) {
            local_e8 = FUN_141864c34;
            local_100 = FUN_14081d0ea;
            local_108 = &LAB_146431698;
            local_110 = &local_e8;
            local_118 = &LAB_1486775cb;
            local_120 = &LAB_1464cee35;
            local_128 = &DAT_149e063b2;
            local_130 = 0;
            local_138 = 0x10000005;
            local_140 = 0x10;
            local_148 = 0x3a20;
            FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
          }
          if ((*(int *)(plVar8[2] + 0x38) < *(int *)(DAT_14cb5b388 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(plVar8[2] + 0x30) + (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) !=
              DAT_14cb5b388 + 0x30)) goto LAB_143ff6072;
        }
        plVar7 = plVar8 + 0x6e;
        if ((longlong *)plVar8[0x70] != (longlong *)0x0) {
          plVar7 = (longlong *)plVar8[0x70];
        }
        if ((longlong)(int)plVar8[0x71] != 0) {
          lVar18 = 0;
          do {
            if (*(longlong *)((longlong)plVar7 + lVar18) == DAT_14cb9ea00) goto LAB_143ff61d0;
            lVar18 = lVar18 + 8;
          } while ((longlong)(int)plVar8[0x71] * 8 != lVar18);
        }
        pcVar1 = *(code **)(*plVar8 + 0x5e8);
        if (pcVar1 == FUN_140972dde) {
          if (plVar8[0x76] == 0) {
            pcVar1 = *(code **)(*plVar8 + 0x5f8);
            if (pcVar1 == FUN_144784df4) {
              if (*(code **)(plVar8[0x784] + 0x18) == (code *)&LAB_144904684) {
                if ((((*(int *)((longlong)plVar8 + 0x75b4) != 0) &&
                     (uVar14 = *(uint *)(plVar8 + 0xeb6), -1 < (int)uVar14)) &&
                    ((int)uVar14 < DAT_14c9647dc)) &&
                   (((plVar7 = (longlong *)
                               ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8)),
                     plVar7 != (longlong *)0x0 &&
                     ((int)plVar7[2] == *(int *)((longlong)plVar8 + 0x75b4))) &&
                    ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)))) {
                  if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
                    lVar18 = *plVar7;
                  }
                  else {
                    lVar18 = 0;
                  }
                  lVar18 = lVar18 + 0x110;
                  goto LAB_143ff621c;
                }
              }
              else {
                lVar18 = (**(code **)(plVar8[0x784] + 0x18))(plVar8 + 0x784);
LAB_143ff621c:
                if (lVar18 != 0) {
                  lVar18 = *(longlong *)(lVar18 + 0x20);
                  goto LAB_143ff6229;
                }
              }
            }
            else {
              lVar18 = (*pcVar1)(plVar8);
LAB_143ff6229:
              if (lVar18 != 0) {
                lVar18 = *(longlong *)(lVar18 + 0x3b0);
                goto LAB_143ff6239;
              }
            }
            goto LAB_143ff6127;
          }
        }
        else {
          lVar18 = (*pcVar1)(plVar8);
LAB_143ff6239:
          if (lVar18 == 0) {
LAB_143ff6127:
            iVar3 = FUN_14486116a(plVar8 + 0x113,*(undefined8 *)(param_1 + 0x450));
            if (iVar3 == 2) {
              if (plVar8 == (longlong *)0x0) {
                uVar10 = 0;
                uVar17 = 0;
              }
              else {
                uVar14 = *(uint *)((longlong)plVar8 + 0xc);
                uVar10 = (ulonglong)uVar14;
                if ((int)uVar14 < DAT_14c9647dc) {
                  lVar18 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
                }
                else {
                  lVar18 = 0;
                }
                uVar17 = (ulonglong)*(uint *)(lVar18 + 0x10);
                if (*(uint *)(lVar18 + 0x10) == 0) {
                  LOCK();
                  iVar3 = DAT_14c964868 + 1;
                  UNLOCK();
                  uVar14 = DAT_14c964868 + 1;
                  bVar19 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar3;
                  if (bVar19) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                 );
                  }
                  LOCK();
                  uVar15 = *(uint *)(lVar18 + 0x10);
                  bVar19 = uVar15 == 0;
                  if (bVar19) {
                    *(uint *)(lVar18 + 0x10) = uVar14;
                    uVar15 = 0;
                  }
                  UNLOCK();
                  if (bVar19) {
                    uVar15 = uVar14;
                  }
                  uVar17 = (ulonglong)uVar15;
                }
              }
              iVar3 = *(int *)(param_1 + 0x7a0);
              *(uint *)(param_1 + 0x7a0) = iVar3 + 1U;
              if (*(uint *)(param_1 + 0x7a4) < iVar3 + 1U) {
                FUN_1489081e6(local_f0,iVar3);
              }
              *(ulonglong *)(*(longlong *)(param_1 + 0x798) + (longlong)iVar3 * 8) =
                   uVar10 | uVar17 << 0x20;
              FUN_143ff5592(param_1,plVar8);
            }
          }
        }
LAB_143ff61d0:
        plVar11 = plVar11 + 1;
      } while (plVar11 != plVar9);
    }
    local_98 = (longlong *)0x0;
    uStack_90 = 0;
    local_a0 = FUN_140aed36c();
    if ((local_a0 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_a0);
    }
    uVar5 = FUN_1447210f0(param_1);
    FUN_1434f53e8(uVar5,&local_a0);
    if ((longlong)(int)uStack_90 != 0) {
      plVar11 = local_98 + (int)uStack_90;
      plVar9 = local_98;
      do {
        lVar18 = *plVar9;
        if (lVar18 == 0) {
LAB_143ff64b7:
          lVar13 = 0;
        }
        else {
          lVar16 = FUN_140aed36c();
          if ((*(int *)(*(longlong *)(lVar18 + 0x10) + 0x38) < *(int *)(lVar16 + 0x38)) ||
             (lVar13 = lVar18,
             *(longlong *)
              (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar16 + 0x38) * 8) != lVar16 + 0x30)) goto LAB_143ff64b7;
        }
        lVar16 = lVar13 + 0x370;
        if (*(longlong *)(lVar13 + 0x380) != 0) {
          lVar16 = *(longlong *)(lVar13 + 0x380);
        }
        if ((longlong)*(int *)(lVar13 + 0x388) != 0) {
          lVar12 = 0;
          do {
            if (*(longlong *)(lVar16 + lVar12) == DAT_14cb9ea00) goto LAB_143ff658d;
            lVar12 = lVar12 + 8;
          } while ((longlong)*(int *)(lVar13 + 0x388) * 8 != lVar12);
        }
        cVar2 = FUN_143ff3e10(param_1,lVar13);
        if ((cVar2 != '\0') && (cVar2 = FUN_140940f38(lVar18), cVar2 == '\0')) {
          if (lVar13 == 0) {
            uVar17 = 0;
            uVar10 = 0;
          }
          else {
            uVar14 = *(uint *)(lVar13 + 0xc);
            uVar17 = (ulonglong)uVar14;
            if ((int)uVar14 < DAT_14c9647dc) {
              lVar18 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
            }
            else {
              lVar18 = 0;
            }
            uVar10 = (ulonglong)*(uint *)(lVar18 + 0x10);
            if (*(uint *)(lVar18 + 0x10) == 0) {
              LOCK();
              iVar3 = DAT_14c964868 + 1;
              UNLOCK();
              uVar14 = DAT_14c964868 + 1;
              bVar19 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar3;
              if (bVar19) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                             );
              }
              LOCK();
              uVar15 = *(uint *)(lVar18 + 0x10);
              bVar19 = uVar15 == 0;
              if (bVar19) {
                *(uint *)(lVar18 + 0x10) = uVar14;
                uVar15 = 0;
              }
              UNLOCK();
              if (bVar19) {
                uVar15 = uVar14;
              }
              uVar10 = (ulonglong)uVar15;
            }
          }
          iVar3 = *(int *)(param_1 + 0x7b0);
          *(uint *)(param_1 + 0x7b0) = iVar3 + 1U;
          if (*(uint *)(param_1 + 0x7b4) < iVar3 + 1U) {
            FUN_144002394(param_1 + 0x7a8,iVar3);
          }
          *(ulonglong *)(*(longlong *)(param_1 + 0x7a8) + (longlong)iVar3 * 8) =
               uVar17 | uVar10 << 0x20;
          FUN_143ff5592(param_1,lVar13);
        }
LAB_143ff658d:
        plVar9 = plVar9 + 1;
      } while (plVar9 != plVar11);
    }
    local_b8 = (longlong *)0x0;
    uStack_b0 = 0;
    local_c0 = FUN_140d12354();
    if ((local_c0 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_c0);
    }
    uVar5 = FUN_1447210f0(param_1);
    FUN_1434f53e8(uVar5,&local_c0);
    if ((longlong)(int)uStack_b0 != 0) {
      plVar9 = local_b8 + (int)uStack_b0;
      local_f0 = param_1 + 0x7b8;
      plVar11 = local_b8;
LAB_143ff6729:
      lVar18 = *plVar11;
      if (lVar18 == 0) {
LAB_143ff6751:
        lVar18 = 0;
      }
      else {
        lVar16 = FUN_140d12354();
        if ((*(int *)(*(longlong *)(lVar18 + 0x10) + 0x38) < *(int *)(lVar16 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar16 + 0x38) * 8) != lVar16 + 0x30)) goto LAB_143ff6751;
      }
      lVar16 = lVar18 + 0x370;
      if (*(longlong *)(lVar18 + 0x380) != 0) {
        lVar16 = *(longlong *)(lVar18 + 0x380);
      }
      if ((longlong)*(int *)(lVar18 + 0x388) != 0) {
        lVar13 = 0;
        do {
          if (*(longlong *)(lVar16 + lVar13) == DAT_14cb9ea00) goto LAB_143ff68de;
          lVar13 = lVar13 + 8;
        } while ((longlong)*(int *)(lVar18 + 0x388) * 8 != lVar13);
      }
      lVar16 = (**(code **)(*(longlong *)(lVar18 + 0x390) + 0x28))(lVar18 + 0x390);
      local_e8 = (code *)0x0;
      uStack_e0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      FUN_1403de7ba(&local_e8,lVar16 + 0x78);
      if ((longlong)*(int *)(param_1 + 0x528) != 0) {
        plVar7 = *(longlong **)(param_1 + 0x520);
        plVar8 = plVar7 + *(int *)(param_1 + 0x528);
        do {
          if ((int)uStack_e0 != 0) {
            lVar16 = 0;
            do {
              if (*(longlong *)(local_e8 + lVar16) == *plVar7) goto LAB_143ff682f;
              lVar16 = lVar16 + 8;
            } while ((longlong)(int)uStack_e0 << 3 != lVar16);
          }
          if ((int)uStack_d0 != 0) {
            lVar16 = 0;
            do {
              if (*(longlong *)(local_d8 + lVar16) == *plVar7) goto LAB_143ff682f;
              lVar16 = lVar16 + 8;
            } while ((longlong)(int)uStack_d0 << 3 != lVar16);
          }
          plVar7 = plVar7 + 1;
        } while (plVar7 != plVar8);
      }
      goto LAB_143ff68ba;
    }
LAB_143ff6a0c:
    if (local_b8 != (longlong *)0x0) {
      FUN_1400020a8(local_b8);
    }
    if (local_98 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_78 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x7a0);
    if ((longlong)iVar3 != 0) {
      lVar18 = *(longlong *)(param_1 + 0x798);
      lVar16 = 0;
      do {
        uVar10 = *(ulonglong *)(lVar18 + lVar16);
        if (((((uVar10 >> 0x20 != 0) && (uVar14 = (uint)uVar10, -1 < (int)uVar14)) &&
             ((int)uVar14 < DAT_14c9647dc)) &&
            ((puVar6 = (undefined8 *)
                       ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0xd & 0x3fff8))),
             puVar6 != (undefined8 *)0x0 && (*(int *)(puVar6 + 2) == (int)(uVar10 >> 0x20))))) &&
           ((*(uint *)(puVar6 + 1) & 0x10200000) == 0)) {
          if ((*(uint *)(puVar6 + 1) & 0x10200000) == 0) {
            uVar5 = *puVar6;
          }
          else {
            uVar5 = 0;
          }
          FUN_143ff5592(param_1,uVar5,0);
        }
        lVar16 = lVar16 + 8;
      } while ((longlong)iVar3 * 8 != lVar16);
    }
    iVar3 = *(int *)(param_1 + 0x7b0);
    if ((longlong)iVar3 != 0) {
      lVar18 = *(longlong *)(param_1 + 0x7a8);
      lVar16 = 0;
      do {
        uVar10 = *(ulonglong *)(lVar18 + lVar16);
        if (((uVar10 >> 0x20 != 0) && (uVar14 = (uint)uVar10, -1 < (int)uVar14)) &&
           (((int)uVar14 < DAT_14c9647dc &&
            (((puVar6 = (undefined8 *)
                        ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0xd & 0x3fff8))),
              puVar6 != (undefined8 *)0x0 && (*(int *)(puVar6 + 2) == (int)(uVar10 >> 0x20))) &&
             ((*(uint *)(puVar6 + 1) & 0x10200000) == 0)))))) {
          if ((*(uint *)(puVar6 + 1) & 0x10200000) == 0) {
            uVar5 = *puVar6;
          }
          else {
            uVar5 = 0;
          }
          FUN_143ff5592(param_1,uVar5,0);
        }
        lVar16 = lVar16 + 8;
      } while ((longlong)iVar3 * 8 != lVar16);
    }
    iVar3 = *(int *)(param_1 + 0x7c0);
    if ((longlong)iVar3 != 0) {
      lVar18 = *(longlong *)(param_1 + 0x7b8);
      lVar16 = 0;
      do {
        uVar10 = *(ulonglong *)(lVar18 + lVar16);
        if (((uVar10 >> 0x20 != 0) && (uVar14 = (uint)uVar10, -1 < (int)uVar14)) &&
           ((((int)uVar14 < DAT_14c9647dc &&
             ((puVar6 = (undefined8 *)
                        ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0xd & 0x3fff8))),
              puVar6 != (undefined8 *)0x0 && (*(int *)(puVar6 + 2) == (int)(uVar10 >> 0x20))))) &&
            ((*(uint *)(puVar6 + 1) & 0x10200000) == 0)))) {
          if ((*(uint *)(puVar6 + 1) & 0x10200000) == 0) {
            uVar5 = *puVar6;
          }
          else {
            uVar5 = 0;
          }
          FUN_143ff5592(param_1,uVar5,0);
        }
        lVar16 = lVar16 + 8;
      } while ((longlong)iVar3 * 8 != lVar16);
    }
    *(undefined4 *)(param_1 + 0x7a0) = 0;
    if (*(int *)(param_1 + 0x7a4) != 0) {
      FUN_148b77020(param_1 + 0x798,0);
    }
    *(undefined4 *)(param_1 + 0x7b0) = 0;
    if (*(int *)(param_1 + 0x7b4) != 0) {
      FUN_144002334(param_1 + 0x7a8);
    }
    *(undefined4 *)(param_1 + 0x7c0) = 0;
    if (*(int *)(param_1 + 0x7c4) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_168);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_143ff682f:
  cVar2 = FUN_140940f38(lVar18);
  if (cVar2 == '\0') {
    if (lVar18 == 0) {
      uVar14 = 0;
      uVar10 = 0;
    }
    else {
      uVar14 = *(uint *)(lVar18 + 0xc);
      if ((int)uVar14 < DAT_14c9647dc) {
        lVar16 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
      }
      else {
        lVar16 = 0;
      }
      uVar10 = (ulonglong)*(uint *)(lVar16 + 0x10);
      if (*(uint *)(lVar16 + 0x10) == 0) {
        LOCK();
        iVar3 = DAT_14c964868 + 1;
        UNLOCK();
        uVar15 = DAT_14c964868 + 1;
        bVar19 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar19) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).")
          ;
        }
        LOCK();
        uVar4 = *(uint *)(lVar16 + 0x10);
        bVar19 = uVar4 == 0;
        if (bVar19) {
          *(uint *)(lVar16 + 0x10) = uVar15;
          uVar4 = 0;
        }
        UNLOCK();
        if (bVar19) {
          uVar4 = uVar15;
        }
        uVar10 = (ulonglong)uVar4;
      }
    }
    iVar3 = *(int *)(param_1 + 0x7c0);
    *(uint *)(param_1 + 0x7c0) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x7c4) < iVar3 + 1U) {
      FUN_14893cfcc(local_f0,iVar3);
    }
    *(ulonglong *)(*(longlong *)(param_1 + 0x7b8) + (longlong)iVar3 * 8) =
         (ulonglong)uVar14 | uVar10 << 0x20;
    FUN_143ff5592(param_1,lVar18);
  }
LAB_143ff68ba:
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  if (local_e8 != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_143ff68de:
  plVar11 = plVar11 + 1;
  if (plVar11 == plVar9) goto LAB_143ff6a0c;
  goto LAB_143ff6729;
}



// FUNCTION 143ff6b4c FUN_143ff6b4c body=759 status=ok
// SIG undefined FUN_143ff6b4c(void)

void FUN_143ff6b4c(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined4 *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_28 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_78);
  uStack_24 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_78) >> 0x20);
  local_2c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_40 = FUN_1408a629c;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar6 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar6;
      *(longlong *)(param_2 + 0x40) = lVar6;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar6,&local_2c);
            goto LAB_143ff6d1d;
          }
        }
        _Src = (undefined4 *)(lVar6 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &local_2c) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_2c,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&local_2c,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_2c,lVar6,1);
      }
      else {
        (*pcVar3)(plVar4,&local_2c,lVar6);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar8;
        puVar8 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
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
      local_2c = (undefined4)uVar2;
      uStack_28 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_2c);
    }
  }
LAB_143ff6d1d:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar6 = *(longlong *)(param_1 + 0x460);
  if ((lVar6 != 0) && ((*(uint *)(lVar6 + 8) >> 0x1e & 1) == 0)) {
    *(undefined4 *)(lVar6 + 0x7ec) = local_2c;
  }
  if ((CONCAT44(uStack_24,uStack_28) ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ff6e44 FUN_143ff6e44 body=767 status=ok
// SIG undefined FUN_143ff6e44(void)

void FUN_143ff6e44(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  char cVar7;
  undefined8 *puVar8;
  float *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  float local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_28 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_78);
  uStack_24 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_78) >> 0x20);
  local_2c = 0.0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_40 = FUN_1408a629c;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar6 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar6;
      *(longlong *)(param_2 + 0x40) = lVar6;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar6,&local_2c);
            goto LAB_143ff7015;
          }
        }
        _Src = (float *)(lVar6 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &local_2c) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_2c,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&local_2c,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_2c,lVar6,1);
      }
      else {
        (*pcVar3)(plVar4,&local_2c,lVar6);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar8;
        puVar8 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
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
      local_2c = (float)uVar2;
      uStack_28 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_2c);
    }
  }
LAB_143ff7015:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar6 = *(longlong *)(param_1 + 0x460);
  if ((lVar6 != 0) && ((*(uint *)(lVar6 + 8) >> 0x1e & 1) == 0)) {
    *(float *)(lVar6 + 0x928) = local_2c / 100.0;
  }
  if ((CONCAT44(uStack_24,uStack_28) ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ff7144 FUN_143ff7144 body=380 status=ok
// SIG undefined FUN_143ff7144(void)

void FUN_143ff7144(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_1 + 0x460) != 0) &&
     ((*(uint *)(*(longlong *)(param_1 + 0x460) + 8) >> 0x1e & 1) == 0)) {
    FUN_140056680(&local_38,L"Hashtagnofilter");
    iVar5 = (int)param_2[1];
    if (iVar5 == local_30) {
      bVar8 = true;
      if (1 < iVar5) {
        lVar6 = 0;
        while( true ) {
          uVar1 = *(ushort *)(*param_2 + lVar6);
          uVar4 = (uint)uVar1;
          uVar2 = *(ushort *)(local_38 + lVar6);
          uVar7 = (uint)uVar2;
          if (uVar1 != uVar2) {
            if ((uVar2 | uVar1) < 0x80) {
              uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
              uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_143ff71ca;
            }
            iVar5 = uVar4 - uVar7;
            goto LAB_143ff7204;
          }
          if (uVar1 == 0) break;
LAB_143ff71ca:
          lVar6 = lVar6 + 2;
        }
        iVar5 = 0;
LAB_143ff7204:
        bVar8 = iVar5 == 0;
      }
    }
    else {
      bVar8 = local_30 + iVar5 == 1;
    }
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if (bVar8) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x460) + 0x9a0) = 0;
    }
    else {
      lVar6 = FUN_148b750a8(*(undefined8 *)(param_1 + 0x458),param_2);
      if ((lVar6 != 0) ||
         (lVar6 = FUN_148b752bc(*(undefined8 *)(param_1 + 0x458),param_2), lVar6 != 0)) {
        lVar3 = *(longlong *)(param_1 + 0x460);
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar6);
        }
        *(longlong *)(lVar3 + 0x9a0) = lVar6;
        *(undefined4 *)(*(longlong *)(param_1 + 0x460) + 0x998) = *(undefined4 *)(param_1 + 0x5c0);
      }
    }
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ff72c2 FUN_143ff72c2 body=246 status=ok
// SIG undefined FUN_143ff72c2(void)

void FUN_143ff72c2(longlong param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar3 = *(longlong *)(param_1 + 0x460);
  if ((lVar3 != 0) && ((*(uint *)(lVar3 + 8) >> 0x1e & 1) == 0)) {
    if (param_2 == 0) {
      *(undefined8 *)(lVar3 + 0x9a0) = 0;
    }
    else {
      lVar3 = *(longlong *)(param_1 + 0x458);
      if ((*(int *)(lVar3 + 0x88) == 0) && (FUN_141498992(lVar3), *(int *)(lVar3 + 0x88) == 0)) {
        return;
      }
      iVar1 = *(int *)(*(longlong *)(lVar3 + 0x80) + -4 + (longlong)param_2 * 8);
      if ((((iVar1 != 0) &&
           (uVar2 = *(uint *)(*(longlong *)(lVar3 + 0x80) + -8 + (longlong)param_2 * 8),
           -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc)) &&
         (((plVar5 = (longlong *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
           plVar5 != (longlong *)0x0 && ((int)plVar5[2] == iVar1)) &&
          (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (lVar3 = *plVar5, lVar3 != 0)))))) {
        lVar4 = *(longlong *)(param_1 + 0x460);
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar3);
        }
        *(longlong *)(lVar4 + 0x9a0) = lVar3;
        *(undefined4 *)(*(longlong *)(param_1 + 0x460) + 0x998) = *(undefined4 *)(param_1 + 0x5c0);
      }
    }
  }
  return;
}



// FUNCTION 143ff73b8 FUN_143ff73b8 body=775 status=ok
// SIG undefined FUN_143ff73b8(void)

void FUN_143ff73b8(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  char cVar7;
  undefined8 *puVar8;
  float *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  float local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_28 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_78);
  uStack_24 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_78) >> 0x20);
  local_2c = 0.0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_40 = FUN_1408a629c;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar6 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar6;
      *(longlong *)(param_2 + 0x40) = lVar6;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar6,&local_2c);
            goto LAB_143ff7589;
          }
        }
        _Src = (float *)(lVar6 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &local_2c) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_2c,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&local_2c,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_2c,lVar6,1);
      }
      else {
        (*pcVar3)(plVar4,&local_2c,lVar6);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar8;
        puVar8 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
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
      local_2c = (float)uVar2;
      uStack_28 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_2c);
    }
  }
LAB_143ff7589:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar6 = *(longlong *)(param_1 + 0x460);
  if ((lVar6 != 0) && ((*(uint *)(lVar6 + 8) >> 0x1e & 1) == 0)) {
    *(float *)(param_1 + 0x5c0) = local_2c / 100.0;
    *(float *)(lVar6 + 0x998) = local_2c / 100.0;
  }
  if ((CONCAT44(uStack_24,uStack_28) ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ff76c0 FUN_143ff76c0 body=759 status=ok
// SIG undefined FUN_143ff76c0(void)

void FUN_143ff76c0(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined4 *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_28 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_78);
  uStack_24 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_78) >> 0x20);
  local_2c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_40 = FUN_1408a629c;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar6 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar6;
      *(longlong *)(param_2 + 0x40) = lVar6;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar6,&local_2c);
            goto LAB_143ff7891;
          }
        }
        _Src = (undefined4 *)(lVar6 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &local_2c) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_2c,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&local_2c,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_2c,lVar6,1);
      }
      else {
        (*pcVar3)(plVar4,&local_2c,lVar6);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar8;
        puVar8 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
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
      local_2c = (undefined4)uVar2;
      uStack_28 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_2c);
    }
  }
LAB_143ff7891:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar6 = *(longlong *)(param_1 + 0x460);
  if ((lVar6 != 0) && ((*(uint *)(lVar6 + 8) >> 0x1e & 1) == 0)) {
    *(undefined4 *)(lVar6 + 0xc7c) = local_2c;
  }
  if ((CONCAT44(uStack_24,uStack_28) ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ff79b8 FUN_143ff79b8 body=764 status=ok
// SIG undefined FUN_143ff79b8(void)

void FUN_143ff79b8(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined4 *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_28 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_78);
  uStack_24 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_78) >> 0x20);
  local_2c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_40 = FUN_1408a629c;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar6 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar6;
      *(longlong *)(param_2 + 0x40) = lVar6;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar6,&local_2c);
            goto LAB_143ff7b89;
          }
        }
        _Src = (undefined4 *)(lVar6 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &local_2c) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_2c,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&local_2c,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_2c,lVar6,1);
      }
      else {
        (*pcVar3)(plVar4,&local_2c,lVar6);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar8;
        puVar8 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
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
      local_2c = (undefined4)uVar2;
      uStack_28 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_2c);
    }
  }
LAB_143ff7b89:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar6 = *(longlong *)(param_1 + 0x460);
  if (lVar6 != 0) {
    if ((*(uint *)(lVar6 + 8) >> 0x1e & 1) == 0) {
      *(undefined4 *)(lVar6 + 0xce0) = local_2c;
      FUN_140c89136();
    }
  }
  if ((CONCAT44(uStack_24,uStack_28) ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ff7cb6 FUN_143ff7cb6 body=759 status=ok
// SIG undefined FUN_143ff7cb6(void)

void FUN_143ff7cb6(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined4 *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_28 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_78);
  uStack_24 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_78) >> 0x20);
  local_2c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_40 = FUN_1408a629c;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar6 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar6;
      *(longlong *)(param_2 + 0x40) = lVar6;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar6,&local_2c);
            goto LAB_143ff7e87;
          }
        }
        _Src = (undefined4 *)(lVar6 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &local_2c) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_2c,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&local_2c,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_2c,lVar6,1);
      }
      else {
        (*pcVar3)(plVar4,&local_2c,lVar6);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar8;
        puVar8 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
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
      local_2c = (undefined4)uVar2;
      uStack_28 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_2c);
    }
  }
LAB_143ff7e87:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar6 = *(longlong *)(param_1 + 0x460);
  if ((lVar6 != 0) && ((*(uint *)(lVar6 + 8) >> 0x1e & 1) == 0)) {
    *(undefined4 *)(lVar6 + 0x870) = local_2c;
  }
  if ((CONCAT44(uStack_24,uStack_28) ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ff7fae FUN_143ff7fae body=3072 status=ok
// SIG undefined FUN_143ff7fae(void)

void FUN_143ff7fae(longlong param_1,char param_2)

{
  longlong *plVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined2 *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  code **local_110;
  undefined1 *local_108;
  code *local_100;
  longlong local_f0;
  code *local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  longlong local_c0;
  longlong *local_b8;
  undefined8 uStack_b0;
  longlong local_a0;
  longlong *local_98;
  undefined8 uStack_90;
  longlong local_80;
  longlong *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  *(char *)(param_1 + 0x5e3) = param_2;
  if (param_2 == '\0') {
    local_78 = (longlong *)0x0;
    uStack_70 = 0;
    if (DAT_14cb5b388 == 0) {
      local_110 = &local_e8;
      local_e8 = FUN_141864c34;
      local_100 = FUN_14081d0ea;
      local_108 = &LAB_146431698;
      local_118 = &LAB_1486775cb;
      local_120 = &LAB_1464cee35;
      local_128 = &DAT_149e063b2;
      local_130 = 0;
      local_138 = 0x10000005;
      local_140 = 0x10;
      local_148 = 0x3a20;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
    }
    local_80 = DAT_14cb5b388;
    if ((DAT_14cb5b388 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    uVar5 = FUN_1447210f0(param_1);
    FUN_1434f53e8(uVar5,&local_80);
    if ((longlong)(int)uStack_70 != 0) {
      plVar1 = local_78 + (int)uStack_70;
      local_f0 = param_1 + 0x778;
      plVar9 = local_78;
      do {
        plVar8 = (longlong *)*plVar9;
        if (plVar8 == (longlong *)0x0) {
LAB_143ff8142:
          plVar8 = (longlong *)0x0;
        }
        else {
          if (DAT_14cb5b388 == 0) {
            local_e8 = FUN_141864c34;
            local_100 = FUN_14081d0ea;
            local_108 = &LAB_146431698;
            local_110 = &local_e8;
            local_118 = &LAB_1486775cb;
            local_120 = &LAB_1464cee35;
            local_128 = &DAT_149e063b2;
            local_130 = 0;
            local_138 = 0x10000005;
            local_140 = 0x10;
            local_148 = 0x3a20;
            FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
          }
          if ((*(int *)(plVar8[2] + 0x38) < *(int *)(DAT_14cb5b388 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(plVar8[2] + 0x30) + (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) !=
              DAT_14cb5b388 + 0x30)) goto LAB_143ff8142;
        }
        plVar7 = plVar8 + 0x6e;
        if ((longlong *)plVar8[0x70] != (longlong *)0x0) {
          plVar7 = (longlong *)plVar8[0x70];
        }
        if ((longlong)(int)plVar8[0x71] != 0) {
          lVar16 = 0;
          do {
            if (*(longlong *)((longlong)plVar7 + lVar16) == DAT_14cb9ea00) goto LAB_143ff82a0;
            lVar16 = lVar16 + 8;
          } while ((longlong)(int)plVar8[0x71] * 8 != lVar16);
        }
        pcVar2 = *(code **)(*plVar8 + 0x5e8);
        if (pcVar2 == FUN_140972dde) {
          if (plVar8[0x76] == 0) {
            pcVar2 = *(code **)(*plVar8 + 0x5f8);
            if (pcVar2 == FUN_144784df4) {
              if (*(code **)(plVar8[0x784] + 0x18) == (code *)&LAB_144904684) {
                if ((((*(int *)((longlong)plVar8 + 0x75b4) != 0) &&
                     (uVar12 = *(uint *)(plVar8 + 0xeb6), -1 < (int)uVar12)) &&
                    ((int)uVar12 < DAT_14c9647dc)) &&
                   (((plVar7 = (longlong *)
                               ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8)),
                     plVar7 != (longlong *)0x0 &&
                     ((int)plVar7[2] == *(int *)((longlong)plVar8 + 0x75b4))) &&
                    ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)))) {
                  if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
                    lVar16 = *plVar7;
                  }
                  else {
                    lVar16 = 0;
                  }
                  lVar16 = lVar16 + 0x110;
                  goto LAB_143ff82ec;
                }
              }
              else {
                lVar16 = (**(code **)(plVar8[0x784] + 0x18))(plVar8 + 0x784);
LAB_143ff82ec:
                if (lVar16 != 0) {
                  lVar16 = *(longlong *)(lVar16 + 0x20);
                  goto LAB_143ff82f9;
                }
              }
            }
            else {
              lVar16 = (*pcVar2)(plVar8);
LAB_143ff82f9:
              if (lVar16 != 0) {
                lVar16 = *(longlong *)(lVar16 + 0x3b0);
                goto LAB_143ff8309;
              }
            }
            goto LAB_143ff81f7;
          }
        }
        else {
          lVar16 = (*pcVar2)(plVar8);
LAB_143ff8309:
          if (lVar16 == 0) {
LAB_143ff81f7:
            iVar3 = FUN_14486116a(plVar8 + 0x113,*(undefined8 *)(param_1 + 0x450));
            if (iVar3 != 2) {
              if (plVar8 == (longlong *)0x0) {
                uVar10 = 0;
                uVar14 = 0;
              }
              else {
                uVar12 = *(uint *)((longlong)plVar8 + 0xc);
                uVar10 = (ulonglong)uVar12;
                if ((int)uVar12 < DAT_14c9647dc) {
                  lVar16 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
                }
                else {
                  lVar16 = 0;
                }
                uVar14 = (ulonglong)*(uint *)(lVar16 + 0x10);
                if (*(uint *)(lVar16 + 0x10) == 0) {
                  LOCK();
                  iVar3 = DAT_14c964868 + 1;
                  UNLOCK();
                  uVar12 = DAT_14c964868 + 1;
                  bVar17 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar3;
                  if (bVar17) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                 );
                  }
                  LOCK();
                  uVar13 = *(uint *)(lVar16 + 0x10);
                  bVar17 = uVar13 == 0;
                  if (bVar17) {
                    *(uint *)(lVar16 + 0x10) = uVar12;
                    uVar13 = 0;
                  }
                  UNLOCK();
                  if (bVar17) {
                    uVar13 = uVar12;
                  }
                  uVar14 = (ulonglong)uVar13;
                }
              }
              iVar3 = *(int *)(param_1 + 0x780);
              *(uint *)(param_1 + 0x780) = iVar3 + 1U;
              if (*(uint *)(param_1 + 0x784) < iVar3 + 1U) {
                FUN_1489081e6(local_f0,iVar3);
              }
              *(ulonglong *)(*(longlong *)(param_1 + 0x778) + (longlong)iVar3 * 8) =
                   uVar10 | uVar14 << 0x20;
              FUN_143ff5592(param_1,plVar8);
            }
          }
        }
LAB_143ff82a0:
        plVar9 = plVar9 + 1;
      } while (plVar9 != plVar1);
    }
    local_98 = (longlong *)0x0;
    uStack_90 = 0;
    local_a0 = FUN_140a3aef4();
    if ((local_a0 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_a0);
    }
    uVar5 = FUN_1447210f0(param_1);
    FUN_1434f53e8(uVar5,&local_a0);
    if ((longlong)(int)uStack_90 != 0) {
      plVar1 = local_98 + (int)uStack_90;
      plVar9 = local_98;
      do {
        lVar16 = *plVar9;
        if (lVar16 == 0) {
LAB_143ff857b:
          lVar16 = 0;
        }
        else {
          lVar15 = FUN_140a3aef4();
          if ((*(int *)(*(longlong *)(lVar16 + 0x10) + 0x38) < *(int *)(lVar15 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar15 + 0x38) * 8) != lVar15 + 0x30)) goto LAB_143ff857b;
        }
        lVar15 = lVar16 + 0x370;
        if (*(longlong *)(lVar16 + 0x380) != 0) {
          lVar15 = *(longlong *)(lVar16 + 0x380);
        }
        if ((longlong)*(int *)(lVar16 + 0x388) != 0) {
          lVar11 = 0;
          do {
            if (*(longlong *)(lVar15 + lVar11) == DAT_14cb9ea00) goto LAB_143ff862a;
            lVar11 = lVar11 + 8;
          } while ((longlong)*(int *)(lVar16 + 0x388) * 8 != lVar11);
        }
        if (lVar16 == 0) {
          uVar10 = 0;
          uVar14 = 0;
        }
        else {
          uVar12 = *(uint *)(lVar16 + 0xc);
          uVar10 = (ulonglong)uVar12;
          if ((int)uVar12 < DAT_14c9647dc) {
            lVar15 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
          }
          else {
            lVar15 = 0;
          }
          uVar14 = (ulonglong)*(uint *)(lVar15 + 0x10);
          if (*(uint *)(lVar15 + 0x10) == 0) {
            LOCK();
            iVar3 = DAT_14c964868 + 1;
            UNLOCK();
            uVar12 = DAT_14c964868 + 1;
            bVar17 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar3;
            if (bVar17) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                           );
            }
            LOCK();
            uVar13 = *(uint *)(lVar15 + 0x10);
            bVar17 = uVar13 == 0;
            if (bVar17) {
              *(uint *)(lVar15 + 0x10) = uVar12;
              uVar13 = 0;
            }
            UNLOCK();
            if (bVar17) {
              uVar13 = uVar12;
            }
            uVar14 = (ulonglong)uVar13;
          }
        }
        iVar3 = *(int *)(param_1 + 0x790);
        *(uint *)(param_1 + 0x790) = iVar3 + 1U;
        if (*(uint *)(param_1 + 0x794) < iVar3 + 1U) {
          FUN_144002080(param_1 + 0x788,iVar3);
        }
        *(ulonglong *)(*(longlong *)(param_1 + 0x788) + (longlong)iVar3 * 8) =
             uVar10 | uVar14 << 0x20;
        FUN_143ff5592(param_1,lVar16);
LAB_143ff862a:
        plVar9 = plVar9 + 1;
      } while (plVar9 != plVar1);
    }
    local_b8 = (longlong *)0x0;
    uStack_b0 = 0;
    local_c0 = FUN_1412308c8();
    if ((local_c0 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_c0);
    }
    uVar5 = FUN_1447210f0(param_1);
    FUN_1434f53e8(uVar5,&local_c0);
    if ((longlong)(int)uStack_b0 != 0) {
      plVar1 = local_b8 + (int)uStack_b0;
      local_f0 = param_1 + 0x7d8;
      plVar9 = local_b8;
LAB_143ff87c5:
      lVar16 = *plVar9;
      if (lVar16 == 0) {
LAB_143ff87ed:
        lVar16 = 0;
      }
      else {
        lVar15 = FUN_1412308c8();
        if ((*(int *)(*(longlong *)(lVar16 + 0x10) + 0x38) < *(int *)(lVar15 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar15 + 0x38) * 8) != lVar15 + 0x30)) goto LAB_143ff87ed;
      }
      lVar15 = lVar16 + 0x370;
      if (*(longlong *)(lVar16 + 0x380) != 0) {
        lVar15 = *(longlong *)(lVar16 + 0x380);
      }
      if ((longlong)*(int *)(lVar16 + 0x388) != 0) {
        lVar11 = 0;
        do {
          if (*(longlong *)(lVar15 + lVar11) == DAT_14cb9ea00) goto LAB_143ff8977;
          lVar11 = lVar11 + 8;
        } while ((longlong)*(int *)(lVar16 + 0x388) * 8 != lVar11);
      }
      lVar15 = (**(code **)(*(longlong *)(lVar16 + 0x390) + 0x28))(lVar16 + 0x390);
      local_e8 = (code *)0x0;
      uStack_e0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      FUN_1403de7ba(&local_e8,lVar15 + 0x78);
      if ((longlong)*(int *)(param_1 + 0x4e8) != 0) {
        plVar7 = *(longlong **)(param_1 + 0x4e0);
        plVar8 = plVar7 + *(int *)(param_1 + 0x4e8);
        do {
          if ((int)uStack_e0 != 0) {
            lVar15 = 0;
            do {
              if (*(longlong *)(local_e8 + lVar15) == *plVar7) goto LAB_143ff88cb;
              lVar15 = lVar15 + 8;
            } while ((longlong)(int)uStack_e0 << 3 != lVar15);
          }
          if ((int)uStack_d0 != 0) {
            lVar15 = 0;
            do {
              if (*(longlong *)(local_d8 + lVar15) == *plVar7) goto LAB_143ff88cb;
              lVar15 = lVar15 + 8;
            } while ((longlong)(int)uStack_d0 << 3 != lVar15);
          }
          plVar7 = plVar7 + 1;
        } while (plVar7 != plVar8);
      }
      goto LAB_143ff895b;
    }
LAB_143ff8a93:
    if (local_b8 != (longlong *)0x0) {
      FUN_1400020a8(local_b8);
    }
    if (local_98 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_78 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x780);
    if ((longlong)iVar3 != 0) {
      lVar16 = *(longlong *)(param_1 + 0x778);
      lVar15 = 0;
      do {
        uVar10 = *(ulonglong *)(lVar16 + lVar15);
        if (((((uVar10 >> 0x20 != 0) && (uVar12 = (uint)uVar10, -1 < (int)uVar12)) &&
             ((int)uVar12 < DAT_14c9647dc)) &&
            ((puVar6 = (undefined8 *)
                       ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0xd & 0x3fff8))),
             puVar6 != (undefined8 *)0x0 && (*(int *)(puVar6 + 2) == (int)(uVar10 >> 0x20))))) &&
           ((*(uint *)(puVar6 + 1) & 0x10200000) == 0)) {
          if ((*(uint *)(puVar6 + 1) & 0x10200000) == 0) {
            uVar5 = *puVar6;
          }
          else {
            uVar5 = 0;
          }
          FUN_143ff5592(param_1,uVar5,0);
        }
        lVar15 = lVar15 + 8;
      } while ((longlong)iVar3 * 8 != lVar15);
    }
    iVar3 = *(int *)(param_1 + 0x790);
    if ((longlong)iVar3 != 0) {
      lVar16 = *(longlong *)(param_1 + 0x788);
      lVar15 = 0;
      do {
        uVar10 = *(ulonglong *)(lVar16 + lVar15);
        if (((uVar10 >> 0x20 != 0) && (uVar12 = (uint)uVar10, -1 < (int)uVar12)) &&
           (((int)uVar12 < DAT_14c9647dc &&
            (((puVar6 = (undefined8 *)
                        ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0xd & 0x3fff8))),
              puVar6 != (undefined8 *)0x0 && (*(int *)(puVar6 + 2) == (int)(uVar10 >> 0x20))) &&
             ((*(uint *)(puVar6 + 1) & 0x10200000) == 0)))))) {
          if ((*(uint *)(puVar6 + 1) & 0x10200000) == 0) {
            uVar5 = *puVar6;
          }
          else {
            uVar5 = 0;
          }
          FUN_143ff5592(param_1,uVar5,0);
        }
        lVar15 = lVar15 + 8;
      } while ((longlong)iVar3 * 8 != lVar15);
    }
    iVar3 = *(int *)(param_1 + 0x7e0);
    if ((longlong)iVar3 != 0) {
      lVar16 = *(longlong *)(param_1 + 0x7d8);
      lVar15 = 0;
      do {
        uVar10 = *(ulonglong *)(lVar16 + lVar15);
        if (((uVar10 >> 0x20 != 0) && (uVar12 = (uint)uVar10, -1 < (int)uVar12)) &&
           ((((int)uVar12 < DAT_14c9647dc &&
             ((puVar6 = (undefined8 *)
                        ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0xd & 0x3fff8))),
              puVar6 != (undefined8 *)0x0 && (*(int *)(puVar6 + 2) == (int)(uVar10 >> 0x20))))) &&
            ((*(uint *)(puVar6 + 1) & 0x10200000) == 0)))) {
          if ((*(uint *)(puVar6 + 1) & 0x10200000) == 0) {
            uVar5 = *puVar6;
          }
          else {
            uVar5 = 0;
          }
          FUN_143ff5592(param_1,uVar5,0);
        }
        lVar15 = lVar15 + 8;
      } while ((longlong)iVar3 * 8 != lVar15);
    }
    *(undefined4 *)(param_1 + 0x780) = 0;
    if (*(int *)(param_1 + 0x784) != 0) {
      FUN_148b77020(param_1 + 0x778,0);
    }
    *(undefined4 *)(param_1 + 0x790) = 0;
    if (*(int *)(param_1 + 0x794) != 0) {
      FUN_144002020(param_1 + 0x788);
    }
    *(undefined4 *)(param_1 + 0x7e0) = 0;
    if (*(int *)(param_1 + 0x7e4) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_168);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_143ff88cb:
  if (lVar16 == 0) {
    uVar12 = 0;
    uVar10 = 0;
  }
  else {
    uVar12 = *(uint *)(lVar16 + 0xc);
    if ((int)uVar12 < DAT_14c9647dc) {
      lVar15 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
    }
    else {
      lVar15 = 0;
    }
    uVar10 = (ulonglong)*(uint *)(lVar15 + 0x10);
    if (*(uint *)(lVar15 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      uVar13 = DAT_14c964868 + 1;
      bVar17 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar17) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).");
      }
      LOCK();
      uVar4 = *(uint *)(lVar15 + 0x10);
      bVar17 = uVar4 == 0;
      if (bVar17) {
        *(uint *)(lVar15 + 0x10) = uVar13;
        uVar4 = 0;
      }
      UNLOCK();
      if (bVar17) {
        uVar4 = uVar13;
      }
      uVar10 = (ulonglong)uVar4;
    }
  }
  iVar3 = *(int *)(param_1 + 0x7e0);
  *(uint *)(param_1 + 0x7e0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x7e4) < iVar3 + 1U) {
    FUN_1440021da(local_f0,iVar3);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x7d8) + (longlong)iVar3 * 8) =
       (ulonglong)uVar12 | uVar10 << 0x20;
  FUN_143ff5592(param_1,lVar16);
LAB_143ff895b:
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  if (local_e8 != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_143ff8977:
  plVar9 = plVar9 + 1;
  if (plVar9 == plVar1) goto LAB_143ff8a93;
  goto LAB_143ff87c5;
}



// FUNCTION 143ff8bd2 FUN_143ff8bd2 body=760 status=ok
// SIG undefined FUN_143ff8bd2(void)

void FUN_143ff8bd2(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined4 *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_28 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_78);
  uStack_24 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_78) >> 0x20);
  local_2c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_40 = FUN_1408a629c;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar6 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar6[3];
    if ((*(byte *)((longlong)plVar6 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar6 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar3 = *(code **)(*plVar6 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar6 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar6);
          if (cVar7 != '\0') {
            (**(code **)(*plVar6 + 0xa0))(plVar6,lVar4,&local_2c);
            goto LAB_143ff8da3;
          }
        }
        _Src = (undefined4 *)(lVar4 + *(int *)((longlong)plVar6 + 0x44));
        if (_Src != &local_2c) {
          if ((*(byte *)((longlong)plVar6 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar6 + 0x100))(plVar6,&local_2c,_Src,(int)plVar6[6]);
          }
          else {
            memcpy(&local_2c,_Src,
                   (longlong)(int)plVar6[6] * (longlong)*(int *)((longlong)plVar6 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar6[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar6,&local_2c,lVar4,1);
      }
      else {
        (*pcVar3)(plVar6,&local_2c,lVar4);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar8;
        puVar8 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar6);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
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
      local_2c = (undefined4)uVar2;
      uStack_28 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_2c);
    }
  }
LAB_143ff8da3:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar6 = *(longlong **)(param_1 + 0x460);
  if ((plVar6 != (longlong *)0x0) && ((*(uint *)(plVar6 + 1) >> 0x1e & 1) == 0)) {
    (**(code **)(*plVar6 + 0x5d8))(plVar6,local_2c);
  }
  if ((CONCAT44(uStack_24,uStack_28) ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ff8ecc FUN_143ff8ecc body=821 status=ok
// SIG undefined FUN_143ff8ecc(void)

void FUN_143ff8ecc(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  float *_Src;
  float fVar9;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  float local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_28 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_78);
  uStack_24 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_78) >> 0x20);
  local_2c = 0.0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9523c8) && (FUN_144b3d300(&DAT_14c9523c8), DAT_14c9523c8 == -1)) {
    FUN_14475b26a();
    local_40 = FUN_1408a629c;
    local_48 = &DAT_14c9520b8;
    local_50 = 0;
    local_58 = 0x1008101;
    FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
    atexit(FUN_14281708e);
    _Init_thread_footer(&DAT_14c9523c8);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if ((pcVar3 == (code *)&LAB_1447713a0) || (cVar7 = (*pcVar3)(plVar4), cVar7 == '\0')) {
          _Src = (float *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
          if (_Src != &local_2c) {
            if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar4 + 0x100))(plVar4,&local_2c,_Src,(int)plVar4[6]);
            }
            else {
              memcpy(&local_2c,_Src,
                     (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
            }
          }
        }
        else {
          (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_2c);
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_2c,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_2c,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
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
      local_2c = (float)uVar2;
      uStack_28 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_2c);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  for (fVar9 = local_2c; 180.0 < fVar9; fVar9 = fVar9 + -360.0) {
  }
  for (; fVar9 < -180.0; fVar9 = fVar9 + 360.0) {
  }
  if (179.9 <= fVar9) {
    fVar9 = 179.9;
  }
  if (fVar9 <= -179.9) {
    fVar9 = -179.9;
  }
  *(float *)(param_1 + 0x800) = fVar9;
  if ((CONCAT44(uStack_24,uStack_28) ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ff9202 FUN_143ff9202 body=962 status=ok
// SIG undefined FUN_143ff9202(void)

void FUN_143ff9202(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  bool bVar12;
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
  code *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar11 = *(longlong *)(param_1 + 0x450);
  if ((lVar11 == 0) || ((*(uint *)(lVar11 + 8) >> 0x1e & 1) != 0)) goto LAB_143ff943b;
  if (DAT_14cb5b388 == 0) {
    local_60 = &local_40;
    local_40 = FUN_141864c34;
    local_50 = FUN_14081d0ea;
    local_58 = &LAB_146431698;
    local_68 = &LAB_1486775cb;
    local_70 = &LAB_1464cee35;
    local_78 = &DAT_149e063b2;
    local_80 = 0;
    local_88 = 0x10000005;
    local_90 = 0x10;
    local_98 = 0x3a20;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
    lVar11 = *(longlong *)(param_1 + 0x450);
    if (lVar11 == 0) goto LAB_143ff943b;
  }
  if ((((DAT_14cb5b388 == 0) || (lVar6 = *(longlong *)(lVar11 + 0x10), lVar6 == 0)) ||
      (*(int *)(lVar6 + 0x38) < *(int *)(DAT_14cb5b388 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) !=
      DAT_14cb5b388 + 0x30)) goto LAB_143ff943b;
  if ((((*(int *)(param_1 + 0x49c) == 0) || (uVar3 = *(uint *)(param_1 + 0x498), (int)uVar3 < 0)) ||
      ((DAT_14c9647dc <= (int)uVar3 ||
       ((lVar6 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar6 == 0 ||
        (*(int *)(lVar6 + 0x10) != *(int *)(param_1 + 0x49c))))))) ||
     ((*(uint *)(lVar6 + 8) & 0x10200000) != 0)) {
    lVar6 = FUN_1407351d2(*(undefined8 *)(lVar11 + 0x428));
    if (lVar6 == 0) {
      *(undefined4 *)(param_1 + 0x498) = 0;
      iVar4 = 0;
    }
    else {
      uVar3 = *(uint *)(lVar6 + 0xc);
      *(uint *)(param_1 + 0x498) = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      iVar4 = *(int *)(lVar6 + 0x10);
      if (*(int *)(lVar6 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        iVar9 = DAT_14c964868 + 1;
        bVar12 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar12) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar9);
        }
        LOCK();
        iVar4 = *(int *)(lVar6 + 0x10);
        bVar12 = iVar4 == 0;
        if (bVar12) {
          *(int *)(lVar6 + 0x10) = iVar9;
          iVar4 = 0;
        }
        UNLOCK();
        if (bVar12) {
          iVar4 = iVar9;
        }
      }
    }
    *(int *)(param_1 + 0x49c) = iVar4;
  }
  FUN_140056680(&local_40,L"default");
  iVar4 = (int)param_2[1];
  if (iVar4 == local_38) {
    bVar12 = true;
    if (1 < iVar4) {
      lVar6 = 0;
      while( true ) {
        uVar1 = *(ushort *)(*param_2 + lVar6);
        uVar3 = (uint)uVar1;
        uVar2 = *(ushort *)(local_40 + lVar6);
        uVar10 = (uint)uVar2;
        if (uVar1 != uVar2) {
          if ((uVar2 | uVar1) < 0x80) {
            uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_143ff9370;
          }
          iVar4 = uVar3 - uVar10;
          goto LAB_143ff93aa;
        }
        if (uVar1 == 0) break;
LAB_143ff9370:
        lVar6 = lVar6 + 2;
      }
      iVar4 = 0;
LAB_143ff93aa:
      bVar12 = iVar4 == 0;
    }
  }
  else {
    bVar12 = local_38 + iVar4 == 1;
  }
  if (local_40 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (bVar12) {
    plVar5 = *(longlong **)(lVar11 + 0x428);
LAB_143ff93c8:
    if (*(int *)(param_1 + 0x49c) == 0) {
LAB_143ff94af:
      uVar7 = 0;
    }
    else {
      uVar3 = *(uint *)(param_1 + 0x498);
      uVar7 = 0;
      if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
        puVar8 = (undefined8 *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if ((puVar8 == (undefined8 *)0x0) ||
           ((*(int *)(puVar8 + 2) != *(int *)(param_1 + 0x49c) ||
            ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)))) goto LAB_143ff94af;
        uVar7 = *puVar8;
      }
    }
    (**(code **)(*plVar5 + 0xc48))(plVar5,uVar7);
  }
  else {
    lVar6 = FUN_148b749d6(*(undefined8 *)(param_1 + 0x458),param_2);
    plVar5 = *(longlong **)(lVar11 + 0x428);
    if (lVar6 != 0) {
      if (plVar5 != (longlong *)0x0) {
        FUN_14348c25a(plVar5,lVar6,1);
      }
      goto LAB_143ff943b;
    }
    if (plVar5 != (longlong *)0x0) goto LAB_143ff93c8;
  }
  *(undefined8 *)(param_1 + 0x498) = 0;
LAB_143ff943b:
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ff95c6 FUN_143ff95c6 body=1893 status=ok
// SIG undefined FUN_143ff95c6(void)

void FUN_143ff95c6(longlong param_1,char param_2)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  uint uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined2 *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  code **local_d0;
  undefined1 *local_c8;
  code *local_c0;
  longlong local_b8;
  longlong local_b0;
  code *local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_80;
  longlong *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  *(char *)(param_1 + 0x5e1) = param_2;
  if (param_2 == '\0') {
    local_78 = (longlong *)0x0;
    uStack_70 = 0;
    if (DAT_14cb5b388 == 0) {
      local_d0 = &local_a8;
      local_a8 = FUN_141864c34;
      local_c0 = FUN_14081d0ea;
      local_c8 = &LAB_146431698;
      local_d8 = &LAB_1486775cb;
      local_e0 = &LAB_1464cee35;
      local_e8 = &DAT_149e063b2;
      local_f0 = 0;
      local_f8 = 0x10000005;
      local_100 = 0x10;
      local_108 = 0x3a20;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
    }
    local_80 = DAT_14cb5b388;
    if ((DAT_14cb5b388 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    uVar5 = FUN_1447210f0(param_1);
    FUN_1434f53e8(uVar5,&local_80);
    if ((longlong)(int)uStack_70 != 0) {
      plVar1 = local_78 + (int)uStack_70;
      local_b8 = param_1 + 0x748;
      local_b0 = param_1 + 0x7c8;
      plVar10 = local_78;
LAB_143ff9723:
      plVar12 = (longlong *)*plVar10;
      if (plVar12 == (longlong *)0x0) {
LAB_143ff9757:
        plVar12 = (longlong *)0x0;
      }
      else {
        if (DAT_14cb5b388 == 0) {
          local_a8 = FUN_141864c34;
          local_c0 = FUN_14081d0ea;
          local_c8 = &LAB_146431698;
          local_d8 = &LAB_1486775cb;
          local_e0 = &LAB_1464cee35;
          local_e8 = &DAT_149e063b2;
          local_f0 = 0;
          local_f8 = 0x10000005;
          local_100 = 0x10;
          local_108 = 0x3a20;
          local_d0 = &local_a8;
          FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
        }
        if ((*(int *)(plVar12[2] + 0x38) < *(int *)(DAT_14cb5b388 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(plVar12[2] + 0x30) + (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) !=
            DAT_14cb5b388 + 0x30)) goto LAB_143ff9757;
      }
      plVar6 = plVar12 + 0x6e;
      if ((longlong *)plVar12[0x70] != (longlong *)0x0) {
        plVar6 = (longlong *)plVar12[0x70];
      }
      if ((longlong)(int)plVar12[0x71] != 0) {
        lVar7 = 0;
        do {
          if (*(longlong *)((longlong)plVar6 + lVar7) == DAT_14cb9ea00) goto LAB_143ff99ab;
          lVar7 = lVar7 + 8;
        } while ((longlong)(int)plVar12[0x71] * 8 != lVar7);
      }
      lVar7 = (**(code **)(plVar12[0x216] + 0x28))(plVar12 + 0x216);
      local_a8 = (code *)0x0;
      uStack_a0 = 0;
      local_98 = 0;
      uStack_90 = 0;
      FUN_1403de7ba(&local_a8,lVar7 + 0x78);
      if ((longlong)*(int *)(param_1 + 0x4a8) != 0) {
        plVar8 = *(longlong **)(param_1 + 0x4a0);
        plVar6 = plVar8 + *(int *)(param_1 + 0x4a8);
        do {
          if ((int)uStack_a0 != 0) {
            lVar7 = 0;
            do {
              if (*(longlong *)(local_a8 + lVar7) == *plVar8) goto LAB_143ff983a;
              lVar7 = lVar7 + 8;
            } while ((longlong)(int)uStack_a0 << 3 != lVar7);
          }
          if ((int)uStack_90 != 0) {
            lVar7 = 0;
            do {
              if (*(longlong *)(local_98 + lVar7) == *plVar8) goto LAB_143ff983a;
              lVar7 = lVar7 + 8;
            } while ((longlong)(int)uStack_90 << 3 != lVar7);
          }
          plVar8 = plVar8 + 1;
        } while (plVar8 != plVar6);
      }
      goto LAB_143ff9987;
    }
LAB_143ff9c4e:
    if (local_78 != (longlong *)0x0) {
      FUN_1400020a8(local_78);
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x750);
    if ((longlong)iVar2 != 0) {
      lVar7 = *(longlong *)(param_1 + 0x748);
      lVar15 = 0;
      do {
        uVar13 = *(ulonglong *)(lVar7 + lVar15);
        if (((((uVar13 >> 0x20 != 0) && (uVar14 = (uint)uVar13, -1 < (int)uVar14)) &&
             ((int)uVar14 < DAT_14c9647dc)) &&
            ((puVar9 = (undefined8 *)
                       ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0xd & 0x3fff8))),
             puVar9 != (undefined8 *)0x0 && (*(int *)(puVar9 + 2) == (int)(uVar13 >> 0x20))))) &&
           ((*(uint *)(puVar9 + 1) & 0x10200000) == 0)) {
          if ((*(uint *)(puVar9 + 1) & 0x10200000) == 0) {
            uVar5 = *puVar9;
          }
          else {
            uVar5 = 0;
          }
          FUN_143ff5592(param_1,uVar5,0);
        }
        lVar15 = lVar15 + 8;
      } while ((longlong)iVar2 * 8 != lVar15);
    }
    iVar2 = *(int *)(param_1 + 2000);
    if ((longlong)iVar2 != 0) {
      lVar7 = *(longlong *)(param_1 + 0x7c8);
      lVar15 = 0;
      do {
        uVar13 = *(ulonglong *)(lVar7 + lVar15);
        if (((uVar13 >> 0x20 != 0) && (uVar14 = (uint)uVar13, -1 < (int)uVar14)) &&
           (((int)uVar14 < DAT_14c9647dc &&
            (((puVar9 = (undefined8 *)
                        ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0xd & 0x3fff8))),
              puVar9 != (undefined8 *)0x0 && (*(int *)(puVar9 + 2) == (int)(uVar13 >> 0x20))) &&
             ((*(uint *)(puVar9 + 1) & 0x10200000) == 0)))))) {
          if ((*(uint *)(puVar9 + 1) & 0x10200000) == 0) {
            uVar5 = *puVar9;
          }
          else {
            uVar5 = 0;
          }
          FUN_143ff5592(param_1,uVar5,0);
        }
        lVar15 = lVar15 + 8;
      } while ((longlong)iVar2 * 8 != lVar15);
    }
    *(undefined4 *)(param_1 + 0x750) = 0;
    if (*(int *)(param_1 + 0x754) != 0) {
      FUN_148b77020(param_1 + 0x748,0);
    }
    *(undefined4 *)(param_1 + 2000) = 0;
    if (*(int *)(param_1 + 0x7d4) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_128);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_143ff983a:
  cVar3 = FUN_140940f38(plVar12);
  if (cVar3 == '\0') {
    if (plVar12 == (longlong *)0x0) {
      uVar14 = 0;
      uVar13 = 0;
    }
    else {
      uVar14 = *(uint *)((longlong)plVar12 + 0xc);
      if ((int)uVar14 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      uVar13 = (ulonglong)*(uint *)(lVar7 + 0x10);
      if (*(uint *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar2 = DAT_14c964868 + 1;
        UNLOCK();
        uVar11 = DAT_14c964868 + 1;
        bVar16 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar2;
        if (bVar16) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).")
          ;
        }
        LOCK();
        uVar4 = *(uint *)(lVar7 + 0x10);
        bVar16 = uVar4 == 0;
        if (bVar16) {
          *(uint *)(lVar7 + 0x10) = uVar11;
          uVar4 = 0;
        }
        UNLOCK();
        if (bVar16) {
          uVar4 = uVar11;
        }
        uVar13 = (ulonglong)uVar4;
      }
    }
    iVar2 = *(int *)(param_1 + 0x750);
    *(uint *)(param_1 + 0x750) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x754) < iVar2 + 1U) {
      FUN_1489081e6(local_b8,iVar2);
    }
    *(ulonglong *)(*(longlong *)(param_1 + 0x748) + (longlong)iVar2 * 8) =
         (ulonglong)uVar14 | uVar13 << 0x20;
    FUN_143ff5592(param_1,plVar12);
    lVar7 = (**(code **)(*plVar12 + 0x5f8))(plVar12);
    if (lVar7 != 0) {
      lVar7 = (**(code **)(*plVar12 + 0x5f8))(plVar12);
      if (lVar7 == 0) {
        uVar14 = 0;
        uVar13 = 0;
      }
      else {
        uVar14 = *(uint *)(lVar7 + 0xc);
        if ((int)uVar14 < DAT_14c9647dc) {
          lVar7 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
        }
        else {
          lVar7 = 0;
        }
        uVar13 = (ulonglong)*(uint *)(lVar7 + 0x10);
        if (*(uint *)(lVar7 + 0x10) == 0) {
          LOCK();
          iVar2 = DAT_14c964868 + 1;
          UNLOCK();
          uVar11 = DAT_14c964868 + 1;
          bVar16 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar2;
          if (bVar16) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                         );
          }
          LOCK();
          uVar4 = *(uint *)(lVar7 + 0x10);
          bVar16 = uVar4 == 0;
          if (bVar16) {
            *(uint *)(lVar7 + 0x10) = uVar11;
            uVar4 = 0;
          }
          UNLOCK();
          if (bVar16) {
            uVar4 = uVar11;
          }
          uVar13 = (ulonglong)uVar4;
        }
      }
      iVar2 = *(int *)(param_1 + 2000);
      *(uint *)(param_1 + 2000) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x7d4) < iVar2 + 1U) {
        FUN_140585342(local_b0,iVar2);
      }
      *(ulonglong *)(*(longlong *)(param_1 + 0x7c8) + (longlong)iVar2 * 8) =
           (ulonglong)uVar14 | uVar13 << 0x20;
      uVar5 = (**(code **)(*plVar12 + 0x5f8))(plVar12);
      FUN_143ff5592(param_1,uVar5);
    }
  }
LAB_143ff9987:
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_143ff99ab:
  plVar10 = plVar10 + 1;
  if (plVar10 == plVar1) goto LAB_143ff9c4e;
  goto LAB_143ff9723;
}



// FUNCTION 143ff9d50 FUN_143ff9d50 body=807 status=ok
// SIG undefined FUN_143ff9d50(void)

void FUN_143ff9d50(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  char cVar7;
  undefined8 *puVar8;
  float *_Src;
  double dVar9;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  float local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_28 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_78);
  uStack_24 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_78) >> 0x20);
  local_2c = 0.0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_40 = FUN_1408a629c;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar6 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar6;
      *(longlong *)(param_2 + 0x40) = lVar6;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar6,&local_2c);
            goto LAB_143ff9f21;
          }
        }
        _Src = (float *)(lVar6 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &local_2c) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_2c,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&local_2c,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_2c,lVar6,1);
      }
      else {
        (*pcVar3)(plVar4,&local_2c,lVar6);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar8;
        puVar8 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
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
      local_2c = (float)uVar2;
      uStack_28 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_2c);
    }
  }
LAB_143ff9f21:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar6 = *(longlong *)(param_1 + 0x460);
  if ((lVar6 != 0) && ((*(uint *)(lVar6 + 8) >> 0x1e & 1) == 0)) {
    dVar9 = (double)(local_2c / 100.0);
    *(double *)(lVar6 + 0x3d0) = dVar9;
    *(double *)(lVar6 + 0x3d8) = dVar9;
    *(double *)(lVar6 + 0x3e0) = dVar9;
    *(undefined8 *)(lVar6 + 1000) = 0x3ff0000000000000;
  }
  if ((CONCAT44(uStack_24,uStack_28) ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ffa078 FUN_143ffa078 body=807 status=ok
// SIG undefined FUN_143ffa078(void)

void FUN_143ffa078(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  char cVar7;
  undefined8 *puVar8;
  float *_Src;
  double dVar9;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  float local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_28 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_78);
  uStack_24 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_78) >> 0x20);
  local_2c = 0.0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_40 = FUN_1408a629c;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar6 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar6;
      *(longlong *)(param_2 + 0x40) = lVar6;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar6,&local_2c);
            goto LAB_143ffa249;
          }
        }
        _Src = (float *)(lVar6 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &local_2c) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_2c,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&local_2c,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_2c,lVar6,1);
      }
      else {
        (*pcVar3)(plVar4,&local_2c,lVar6);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar8;
        puVar8 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
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
      local_2c = (float)uVar2;
      uStack_28 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_2c);
    }
  }
LAB_143ffa249:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar6 = *(longlong *)(param_1 + 0x460);
  if ((lVar6 != 0) && ((*(uint *)(lVar6 + 8) >> 0x1e & 1) == 0)) {
    dVar9 = (double)(local_2c / 100.0);
    *(double *)(lVar6 + 0x410) = dVar9;
    *(double *)(lVar6 + 0x418) = dVar9;
    *(double *)(lVar6 + 0x420) = dVar9;
    *(undefined8 *)(lVar6 + 0x428) = 0x3ff0000000000000;
  }
  if ((CONCAT44(uStack_24,uStack_28) ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ffa3a0 FUN_143ffa3a0 body=807 status=ok
// SIG undefined FUN_143ffa3a0(void)

void FUN_143ffa3a0(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  char cVar7;
  undefined8 *puVar8;
  float *_Src;
  double dVar9;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  float local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_28 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_78);
  uStack_24 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_78) >> 0x20);
  local_2c = 0.0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_40 = FUN_1408a629c;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar6 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar6;
      *(longlong *)(param_2 + 0x40) = lVar6;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar6,&local_2c);
            goto LAB_143ffa571;
          }
        }
        _Src = (float *)(lVar6 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &local_2c) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_2c,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&local_2c,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_2c,lVar6,1);
      }
      else {
        (*pcVar3)(plVar4,&local_2c,lVar6);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar8;
        puVar8 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
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
      local_2c = (float)uVar2;
      uStack_28 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_2c);
    }
  }
LAB_143ffa571:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar6 = *(longlong *)(param_1 + 0x460);
  if ((lVar6 != 0) && ((*(uint *)(lVar6 + 8) >> 0x1e & 1) == 0)) {
    dVar9 = (double)(local_2c / 100.0);
    *(double *)(lVar6 + 0x3f0) = dVar9;
    *(double *)(lVar6 + 0x3f8) = dVar9;
    *(double *)(lVar6 + 0x400) = dVar9;
    *(undefined8 *)(lVar6 + 0x408) = 0x3ff0000000000000;
  }
  if ((CONCAT44(uStack_24,uStack_28) ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ffa6c8 FUN_143ffa6c8 body=807 status=ok
// SIG undefined FUN_143ffa6c8(void)

void FUN_143ffa6c8(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  char cVar7;
  undefined8 *puVar8;
  float *_Src;
  double dVar9;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  float local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_28 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_78);
  uStack_24 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_78) >> 0x20);
  local_2c = 0.0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_40 = FUN_1408a629c;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar6 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar6;
      *(longlong *)(param_2 + 0x40) = lVar6;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar6,&local_2c);
            goto LAB_143ffa899;
          }
        }
        _Src = (float *)(lVar6 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &local_2c) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_2c,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&local_2c,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_2c,lVar6,1);
      }
      else {
        (*pcVar3)(plVar4,&local_2c,lVar6);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar8;
        puVar8 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
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
      local_2c = (float)uVar2;
      uStack_28 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_2c);
    }
  }
LAB_143ffa899:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar6 = *(longlong *)(param_1 + 0x460);
  if ((lVar6 != 0) && ((*(uint *)(lVar6 + 8) >> 0x1e & 1) == 0)) {
    dVar9 = (double)(local_2c / 100.0);
    *(double *)(lVar6 + 0x3b0) = dVar9;
    *(double *)(lVar6 + 0x3b8) = dVar9;
    *(double *)(lVar6 + 0x3c0) = dVar9;
    *(undefined8 *)(lVar6 + 0x3c8) = 0x3ff0000000000000;
  }
  if ((CONCAT44(uStack_24,uStack_28) ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ffa9f0 FUN_143ffa9f0 body=390 status=ok
// SIG undefined FUN_143ffa9f0(void)

void FUN_143ffa9f0(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar4 = &DAT_14c846480;
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x1c8) + 0x240);
  }
  puVar5 = (undefined8 *)(param_1 + 0x600);
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  plVar1 = *(longlong **)(param_1 + 0x3c0);
  if (plVar1 == (longlong *)0x0) {
    local_28 = DAT_14c846508;
    local_38 = DAT_14c8464f8;
    uStack_30 = DAT_14c846500;
  }
  else {
    (**(code **)(*plVar1 + 0x680))(plVar1,&local_38);
  }
  *(undefined8 *)(param_1 + 0x670) = local_28;
  *(undefined8 *)(param_1 + 0x660) = local_38;
  *(undefined8 *)(param_1 + 0x668) = uStack_30;
  local_58 = *(undefined8 *)(param_1 + 0x620);
  uStack_50 = *(undefined8 *)(param_1 + 0x628);
  local_48 = *(undefined8 *)(param_1 + 0x630);
  FUN_143ff1654(param_1,&local_38);
  *(undefined8 *)(param_1 + 0x688) = local_28;
  *(undefined8 *)(param_1 + 0x678) = local_38;
  *(undefined8 *)(param_1 + 0x680) = uStack_30;
  if ((*(double *)(param_1 + 0x620) == *(double *)(param_1 + 0x678)) &&
     (!NAN(*(double *)(param_1 + 0x620)) && !NAN(*(double *)(param_1 + 0x678)))) {
    if ((*(double *)(param_1 + 0x628) == *(double *)(param_1 + 0x680)) &&
       (!NAN(*(double *)(param_1 + 0x628)) && !NAN(*(double *)(param_1 + 0x680)))) {
      bVar2 = -(*(double *)(param_1 + 0x630) == *(double *)(param_1 + 0x688)) & 1;
      goto LAB_143ffaaeb;
    }
  }
  bVar2 = 0;
LAB_143ffaaeb:
  *(byte *)(param_1 + 0x5f4) = bVar2;
  if (*(longlong **)(param_1 + 0x3c0) != (longlong *)0x0) {
    bVar2 = (**(code **)(**(longlong **)(param_1 + 0x3c0) + 0x788))();
    bVar2 = bVar2 ^ 1 | *(byte *)(param_1 + 0x5f4);
    *(byte *)(param_1 + 0x5f4) = bVar2;
  }
  if (((*(longlong *)(param_1 + 0x468) != 0) &&
      ((*(uint *)(*(longlong *)(param_1 + 0x468) + 8) >> 0x1e & 1) == 0)) && (bVar2 == 0)) {
    *(undefined1 *)(param_1 + 0x478) = 1;
    FUN_147d73772();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ffab78 FUN_143ffab78 body=2314 status=ok
// SIG undefined FUN_143ffab78(void)

void FUN_143ffab78(longlong param_1,char param_2)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined2 *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  code **local_e0;
  undefined1 *local_d8;
  code *local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong *local_b8;
  undefined8 uStack_b0;
  code *local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_80;
  longlong *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  *(char *)(param_1 + 0x5e2) = param_2;
  if (param_2 == '\0') {
    local_78 = (longlong *)0x0;
    uStack_70 = 0;
    if (DAT_14cb5b388 == 0) {
      local_e0 = &local_a8;
      local_a8 = FUN_141864c34;
      local_d0 = FUN_14081d0ea;
      local_d8 = &LAB_146431698;
      local_e8 = &LAB_1486775cb;
      local_f0 = &LAB_1464cee35;
      local_f8 = &DAT_149e063b2;
      local_100 = 0;
      local_108 = 0x10000005;
      local_110 = 0x10;
      local_118 = 0x3a20;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
    }
    local_80 = DAT_14cb5b388;
    if ((DAT_14cb5b388 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    uVar5 = FUN_1447210f0(param_1);
    FUN_1434f53e8(uVar5,&local_80);
    if ((longlong)(int)uStack_70 != 0) {
      plVar11 = local_78 + (int)uStack_70;
      local_c8 = param_1 + 0x768;
      plVar9 = local_78;
      do {
        lVar14 = *plVar9;
        if (lVar14 == 0) {
LAB_143ffad09:
          lVar14 = 0;
        }
        else {
          if (DAT_14cb5b388 == 0) {
            local_a8 = FUN_141864c34;
            local_d0 = FUN_14081d0ea;
            local_d8 = &LAB_146431698;
            local_e8 = &LAB_1486775cb;
            local_f0 = &LAB_1464cee35;
            local_f8 = &DAT_149e063b2;
            local_100 = 0;
            local_108 = 0x10000005;
            local_110 = 0x10;
            local_118 = 0x3a20;
            local_e0 = &local_a8;
            FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
          }
          if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x38) < *(int *)(DAT_14cb5b388 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) != DAT_14cb5b388 + 0x30))
          goto LAB_143ffad09;
        }
        lVar15 = lVar14 + 0x370;
        if (*(longlong *)(lVar14 + 0x380) != 0) {
          lVar15 = *(longlong *)(lVar14 + 0x380);
        }
        if ((longlong)*(int *)(lVar14 + 0x388) != 0) {
          lVar12 = 0;
          do {
            if (*(longlong *)(lVar15 + lVar12) == DAT_14cb9ea00) goto LAB_143ffaea0;
            lVar12 = lVar12 + 8;
          } while ((longlong)*(int *)(lVar14 + 0x388) * 8 != lVar12);
        }
        lVar15 = (**(code **)(*(longlong *)(lVar14 + 0x10b0) + 0x28))(lVar14 + 0x10b0);
        local_a8 = (code *)0x0;
        uStack_a0 = 0;
        local_98 = 0;
        uStack_90 = 0;
        FUN_1403de7ba(&local_a8,lVar15 + 0x78);
        if ((longlong)*(int *)(param_1 + 0x508) != 0) {
          plVar6 = *(longlong **)(param_1 + 0x500);
          plVar1 = plVar6 + *(int *)(param_1 + 0x508);
          do {
            if ((int)uStack_a0 != 0) {
              lVar15 = 0;
              do {
                if (*(longlong *)(local_a8 + lVar15) == *plVar6) goto LAB_143ffae7c;
                lVar15 = lVar15 + 8;
              } while ((longlong)(int)uStack_a0 << 3 != lVar15);
            }
            if ((int)uStack_90 != 0) {
              lVar15 = 0;
              do {
                if (*(longlong *)(local_98 + lVar15) == *plVar6) goto LAB_143ffae7c;
                lVar15 = lVar15 + 8;
              } while ((longlong)(int)uStack_90 << 3 != lVar15);
            }
            plVar6 = plVar6 + 1;
          } while (plVar6 != plVar1);
          cVar3 = FUN_140940f38(lVar14);
          if (cVar3 == '\0') {
            if (lVar14 == 0) {
              uVar7 = 0;
              uVar10 = 0;
            }
            else {
              uVar7 = *(uint *)(lVar14 + 0xc);
              if ((int)uVar7 < DAT_14c9647dc) {
                lVar15 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
              }
              else {
                lVar15 = 0;
              }
              uVar10 = (ulonglong)*(uint *)(lVar15 + 0x10);
              if (*(uint *)(lVar15 + 0x10) == 0) {
                LOCK();
                iVar2 = DAT_14c964868 + 1;
                UNLOCK();
                uVar13 = DAT_14c964868 + 1;
                bVar16 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar2;
                if (bVar16) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                               );
                }
                LOCK();
                uVar4 = *(uint *)(lVar15 + 0x10);
                bVar16 = uVar4 == 0;
                if (bVar16) {
                  *(uint *)(lVar15 + 0x10) = uVar13;
                  uVar4 = 0;
                }
                UNLOCK();
                if (bVar16) {
                  uVar4 = uVar13;
                }
                uVar10 = (ulonglong)uVar4;
              }
            }
            iVar2 = *(int *)(param_1 + 0x770);
            *(uint *)(param_1 + 0x770) = iVar2 + 1U;
            if (*(uint *)(param_1 + 0x774) < iVar2 + 1U) {
              FUN_1489081e6(local_c8,iVar2);
            }
            *(ulonglong *)(*(longlong *)(param_1 + 0x768) + (longlong)iVar2 * 8) =
                 (ulonglong)uVar7 | uVar10 << 0x20;
            FUN_143ff5592(param_1,lVar14);
          }
        }
LAB_143ffae7c:
        if (local_98 != 0) {
          FUN_1400020a8();
        }
        if (local_a8 != (code *)0x0) {
          FUN_1400020a8();
        }
LAB_143ffaea0:
        plVar9 = plVar9 + 1;
      } while (plVar9 != plVar11);
    }
    local_b8 = (longlong *)0x0;
    uStack_b0 = 0;
    local_c0 = FUN_140d12354();
    if ((local_c0 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_c0);
    }
    uVar5 = FUN_1447210f0(param_1);
    FUN_1434f53e8(uVar5,&local_c0);
    if ((longlong)(int)uStack_b0 != 0) {
      plVar9 = local_b8 + (int)uStack_b0;
      local_c8 = param_1 + 0x758;
      plVar11 = local_b8;
LAB_143ffb0ec:
      lVar14 = *plVar11;
      if (lVar14 == 0) {
LAB_143ffb114:
        lVar14 = 0;
      }
      else {
        lVar15 = FUN_140d12354();
        if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x38) < *(int *)(lVar15 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar15 + 0x38) * 8) != lVar15 + 0x30)) goto LAB_143ffb114;
      }
      lVar15 = lVar14 + 0x370;
      if (*(longlong *)(lVar14 + 0x380) != 0) {
        lVar15 = *(longlong *)(lVar14 + 0x380);
      }
      if ((longlong)*(int *)(lVar14 + 0x388) != 0) {
        lVar12 = 0;
        do {
          if (*(longlong *)(lVar15 + lVar12) == DAT_14cb9ea00) goto LAB_143ffb2a1;
          lVar12 = lVar12 + 8;
        } while ((longlong)*(int *)(lVar14 + 0x388) * 8 != lVar12);
      }
      lVar15 = (**(code **)(*(longlong *)(lVar14 + 0x390) + 0x28))(lVar14 + 0x390);
      local_a8 = (code *)0x0;
      uStack_a0 = 0;
      local_98 = 0;
      uStack_90 = 0;
      FUN_1403de7ba(&local_a8,lVar15 + 0x78);
      if ((longlong)*(int *)(param_1 + 0x548) != 0) {
        plVar6 = *(longlong **)(param_1 + 0x540);
        plVar1 = plVar6 + *(int *)(param_1 + 0x548);
        do {
          if ((int)uStack_a0 != 0) {
            lVar15 = 0;
            do {
              if (*(longlong *)(local_a8 + lVar15) == *plVar6) goto LAB_143ffb1f2;
              lVar15 = lVar15 + 8;
            } while ((longlong)(int)uStack_a0 << 3 != lVar15);
          }
          if ((int)uStack_90 != 0) {
            lVar15 = 0;
            do {
              if (*(longlong *)(local_98 + lVar15) == *plVar6) goto LAB_143ffb1f2;
              lVar15 = lVar15 + 8;
            } while ((longlong)(int)uStack_90 << 3 != lVar15);
          }
          plVar6 = plVar6 + 1;
        } while (plVar6 != plVar1);
      }
      goto LAB_143ffb27d;
    }
LAB_143ffb39b:
    if (local_b8 != (longlong *)0x0) {
      FUN_1400020a8(local_b8);
    }
    if (local_78 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x770);
    if ((longlong)iVar2 != 0) {
      lVar14 = *(longlong *)(param_1 + 0x768);
      lVar15 = 0;
      do {
        uVar10 = *(ulonglong *)(lVar14 + lVar15);
        if (((((uVar10 >> 0x20 != 0) && (uVar7 = (uint)uVar10, -1 < (int)uVar7)) &&
             ((int)uVar7 < DAT_14c9647dc)) &&
            ((puVar8 = (undefined8 *)
                       ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0xd & 0x3fff8))),
             puVar8 != (undefined8 *)0x0 && (*(int *)(puVar8 + 2) == (int)(uVar10 >> 0x20))))) &&
           ((*(uint *)(puVar8 + 1) & 0x10200000) == 0)) {
          if ((*(uint *)(puVar8 + 1) & 0x10200000) == 0) {
            uVar5 = *puVar8;
          }
          else {
            uVar5 = 0;
          }
          FUN_143ff5592(param_1,uVar5,0);
        }
        lVar15 = lVar15 + 8;
      } while ((longlong)iVar2 * 8 != lVar15);
    }
    iVar2 = *(int *)(param_1 + 0x760);
    if ((longlong)iVar2 != 0) {
      lVar14 = *(longlong *)(param_1 + 0x758);
      lVar15 = 0;
      do {
        uVar10 = *(ulonglong *)(lVar14 + lVar15);
        if (((uVar10 >> 0x20 != 0) && (uVar7 = (uint)uVar10, -1 < (int)uVar7)) &&
           (((int)uVar7 < DAT_14c9647dc &&
            (((puVar8 = (undefined8 *)
                        ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0xd & 0x3fff8))),
              puVar8 != (undefined8 *)0x0 && (*(int *)(puVar8 + 2) == (int)(uVar10 >> 0x20))) &&
             ((*(uint *)(puVar8 + 1) & 0x10200000) == 0)))))) {
          if ((*(uint *)(puVar8 + 1) & 0x10200000) == 0) {
            uVar5 = *puVar8;
          }
          else {
            uVar5 = 0;
          }
          FUN_143ff5592(param_1,uVar5,0);
        }
        lVar15 = lVar15 + 8;
      } while ((longlong)iVar2 * 8 != lVar15);
    }
    *(undefined4 *)(param_1 + 0x770) = 0;
    if (*(int *)(param_1 + 0x774) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_138);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_143ffb1f2:
  cVar3 = FUN_140940f38(lVar14);
  if (cVar3 == '\0') {
    if (lVar14 == 0) {
      uVar7 = 0;
      uVar10 = 0;
    }
    else {
      uVar7 = *(uint *)(lVar14 + 0xc);
      if ((int)uVar7 < DAT_14c9647dc) {
        lVar15 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
      }
      else {
        lVar15 = 0;
      }
      uVar10 = (ulonglong)*(uint *)(lVar15 + 0x10);
      if (*(uint *)(lVar15 + 0x10) == 0) {
        LOCK();
        iVar2 = DAT_14c964868 + 1;
        UNLOCK();
        uVar13 = DAT_14c964868 + 1;
        bVar16 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar2;
        if (bVar16) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).")
          ;
        }
        LOCK();
        uVar4 = *(uint *)(lVar15 + 0x10);
        bVar16 = uVar4 == 0;
        if (bVar16) {
          *(uint *)(lVar15 + 0x10) = uVar13;
          uVar4 = 0;
        }
        UNLOCK();
        if (bVar16) {
          uVar4 = uVar13;
        }
        uVar10 = (ulonglong)uVar4;
      }
    }
    iVar2 = *(int *)(param_1 + 0x760);
    *(uint *)(param_1 + 0x760) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x764) < iVar2 + 1U) {
      FUN_14893cfcc(local_c8,iVar2);
    }
    *(ulonglong *)(*(longlong *)(param_1 + 0x758) + (longlong)iVar2 * 8) =
         (ulonglong)uVar7 | uVar10 << 0x20;
    FUN_143ff5592(param_1,lVar14);
  }
LAB_143ffb27d:
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_143ffb2a1:
  plVar11 = plVar11 + 1;
  if (plVar11 == plVar9) goto LAB_143ffb39b;
  goto LAB_143ffb0ec;
}



// FUNCTION 143ffb4a8 FUN_143ffb4a8 body=767 status=ok
// SIG undefined FUN_143ffb4a8(void)

void FUN_143ffb4a8(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  char cVar7;
  undefined8 *puVar8;
  float *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  float local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_28 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_78);
  uStack_24 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_78) >> 0x20);
  local_2c = 0.0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_40 = FUN_1408a629c;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar6 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar6;
      *(longlong *)(param_2 + 0x40) = lVar6;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar6,&local_2c);
            goto LAB_143ffb679;
          }
        }
        _Src = (float *)(lVar6 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &local_2c) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_2c,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&local_2c,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_2c,lVar6,1);
      }
      else {
        (*pcVar3)(plVar4,&local_2c,lVar6);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar8;
        puVar8 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
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
      local_2c = (float)uVar2;
      uStack_28 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_2c);
    }
  }
LAB_143ffb679:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar6 = *(longlong *)(param_1 + 0x460);
  if ((lVar6 != 0) && ((*(uint *)(lVar6 + 8) >> 0x1e & 1) == 0)) {
    *(float *)(lVar6 + 0x918) = local_2c / 100.0;
  }
  if ((CONCAT44(uStack_24,uStack_28) ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ffb7a8 FUN_143ffb7a8 body=47 status=ok
// SIG undefined FUN_143ffb7a8(void)

longlong FUN_143ffb7a8(void)

{
  if (DAT_14cb9e8d8 == 0) {
    FUN_14000fc22(&DAT_14cb9e8d8,&PTR_FUN_14b5aa9a8);
  }
  return DAT_14cb9e8d8;
}



// FUNCTION 143ffb7d8 FUN_143ffb7d8 body=38 status=ok
// SIG undefined FUN_143ffb7d8(void)

void FUN_143ffb7d8(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_143ffb7fe();
  *param_3 = uVar1;
  return;
}



// FUNCTION 143ffb7fe FUN_143ffb7fe body=140 status=ok
// SIG undefined FUN_143ffb7fe(void)

longlong FUN_143ffb7fe(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x3c0);
  if (lVar1 == 0) {
    lVar1 = FUN_1410b7fb6();
    if (lVar1 != 0) {
      lVar1 = FUN_1410b7fb6(param_1);
      return lVar1;
    }
    lVar1 = FUN_1447210f0(param_1);
    if (lVar1 != 0) {
      uVar2 = FUN_1447210f0(param_1);
      lVar1 = FUN_145866520(uVar2);
      if (lVar1 != 0) {
        uVar2 = FUN_1447210f0(param_1);
        uVar2 = FUN_145866520(uVar2);
        uVar3 = FUN_1447210f0(param_1);
        lVar1 = FUN_140334a94(uVar2,uVar3);
        if (lVar1 != 0) {
          return lVar1;
        }
      }
    }
    lVar1 = *(longlong *)(param_1 + 0x3c0);
  }
  return lVar1;
}



// FUNCTION 143ffb88a FUN_143ffb88a body=47 status=ok
// SIG undefined FUN_143ffb88a(void)

longlong FUN_143ffb88a(void)

{
  if (DAT_14cb9e8e0 == 0) {
    FUN_14000fc22(&DAT_14cb9e8e0,&PTR_FUN_14b5aaa08);
  }
  return DAT_14cb9e8e0;
}



// FUNCTION 143ffb8d0 FUN_143ffb8d0 body=2691 status=ok
// SIG undefined FUN_143ffb8d0(void)

void FUN_143ffb8d0(longlong param_1)

{
  ulonglong *puVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  code **ppcVar12;
  ulonglong *puVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong lVar17;
  uint uVar18;
  int iVar19;
  undefined8 *puVar20;
  bool bVar21;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  wchar_t *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  code **local_b0;
  undefined1 *local_a8;
  code *local_a0;
  longlong local_98;
  code *local_90;
  int local_88;
  longlong local_80;
  longlong *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_98 = param_1;
  lVar7 = FUN_1447210f0();
  if ((*(longlong *)(lVar7 + 0x30) != 0) &&
     (lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0x30) + 0x2b0), lVar7 != 0)) {
    local_78 = (longlong *)0x0;
    uStack_70 = 0;
    if (DAT_14cb39ca0 == 0) {
      local_b0 = &local_90;
      local_90 = FUN_144a7958c;
      local_a0 = FUN_14081d0ea;
      local_a8 = &LAB_14638c6c0;
      local_b8 = &LAB_14811044c;
      local_c0 = &LAB_1407f5cf8;
      local_c8 = L"Engine";
      local_d0 = 0;
      local_d8 = 0x10000004;
      local_e0 = 0x10;
      local_e8 = 0x8e0;
      FUN_14081cfa3(L"/Script/Niagara",L"NiagaraComponent",&DAT_14cb39ca0,FUN_14646d392);
    }
    local_80 = DAT_14cb39ca0;
    if ((DAT_14cb39ca0 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_143ffe6b8(lVar7,&local_80,&local_78,1);
    if ((longlong)(int)uStack_70 != 0) {
      plVar8 = local_78 + (int)uStack_70;
      plVar16 = local_78;
      do {
        lVar7 = *plVar16;
        lVar17 = *(longlong *)(lVar7 + 0x668);
        if (lVar17 != 0) {
          local_68 = *(undefined8 *)(lVar17 + 0x18);
          ppcVar12 = &local_90;
          FUN_1400021e4(&local_68,&local_90);
          if (local_88 == DAT_14cb9ea10) {
            bVar21 = true;
            if (1 < local_88) {
              lVar17 = 0;
              while( true ) {
                uVar3 = *(ushort *)(local_90 + lVar17);
                uVar14 = (uint)uVar3;
                uVar4 = *(ushort *)((longlong)DAT_14cb9ea08 + lVar17);
                uVar18 = (uint)uVar4;
                if (uVar3 != uVar4) {
                  if ((uVar4 | uVar3) < 0x80) {
                    uVar14 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                    uVar18 = (uint)(byte)(&DAT_149e05da0)[uVar4];
                    if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4]) goto LAB_143ffba05;
                  }
                  iVar6 = uVar14 - uVar18;
                  goto LAB_143ffba40;
                }
                if (uVar3 == 0) break;
LAB_143ffba05:
                lVar17 = lVar17 + 2;
              }
              iVar6 = 0;
LAB_143ffba40:
              bVar21 = iVar6 == 0;
              ppcVar12 = DAT_14cb9ea08;
            }
          }
          else {
            bVar21 = DAT_14cb9ea10 + local_88 == 1;
          }
          if (local_90 != (code *)0x0) {
            FUN_1400020a8();
          }
          if (bVar21) {
            FUN_1449e3cec(lVar7,CONCAT71((int7)((ulonglong)ppcVar12 >> 8),
                                         *(undefined1 *)(local_98 + 0x5e0)) ^ 1);
          }
        }
        plVar16 = plVar16 + 1;
      } while (plVar16 != plVar8);
    }
    if (local_78 != (longlong *)0x0) {
      FUN_1400020a8(local_78);
    }
  }
  iVar6 = *(int *)(local_98 + 0x770);
  if ((longlong)iVar6 != 0) {
    lVar7 = *(longlong *)(local_98 + 0x768);
    lVar17 = 0;
    do {
      uVar5 = *(ulonglong *)(lVar7 + lVar17);
      if (((uVar5 >> 0x20 != 0) && (uVar14 = (uint)uVar5, -1 < (int)uVar14)) &&
         ((int)uVar14 < DAT_14c9647dc)) {
        uVar15 = (ulonglong)((uint)(uVar5 >> 0x10) & 0x7fff);
        plVar8 = (longlong *)
                 ((ulonglong)((uVar14 & 0xffff) * 0x18) + *(longlong *)(DAT_14c9647c8 + uVar15 * 8))
        ;
        if (((plVar8 != (longlong *)0x0) &&
            (iVar19 = (int)(uVar5 >> 0x20), (int)plVar8[2] == iVar19)) &&
           ((*(uint *)(plVar8 + 1) & 0x10200000) == 0)) {
          if ((*(uint *)(plVar8 + 1) & 0x10200000) == 0) {
            lVar9 = *plVar8;
          }
          else {
            lVar9 = 0;
          }
          lVar9 = (**(code **)(*(longlong *)(lVar9 + 0x10a0) + 0x20))();
          if (lVar9 != 0) {
            bVar2 = *(byte *)(local_98 + 0x5e0);
            if ((((int)uVar14 < DAT_14c9647dc) &&
                (plVar8 = (longlong *)
                          ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + uVar15 * 8)), plVar8 != (longlong *)0x0)) &&
               (((int)plVar8[2] == iVar19 && ((*(uint *)(plVar8 + 1) & 0x10200000) == 0)))) {
              lVar9 = *plVar8;
            }
            else {
              lVar9 = 0;
            }
            lVar9 = (**(code **)(*(longlong *)(lVar9 + 0x10a0) + 0x20))(lVar9 + 0x10a0);
            *(byte *)(lVar9 + 0x7c) = *(byte *)(lVar9 + 0x7c) & 0xfe | bVar2;
          }
        }
      }
      lVar17 = lVar17 + 8;
    } while ((longlong)iVar6 * 8 != lVar17);
  }
  iVar6 = *(int *)(local_98 + 0x780);
  if ((longlong)iVar6 != 0) {
    lVar7 = *(longlong *)(local_98 + 0x778);
    lVar17 = 0;
    do {
      uVar5 = *(ulonglong *)(lVar7 + lVar17);
      if (((uVar5 >> 0x20 != 0) && (uVar14 = (uint)uVar5, -1 < (int)uVar14)) &&
         ((int)uVar14 < DAT_14c9647dc)) {
        uVar15 = (ulonglong)((uint)(uVar5 >> 0x10) & 0x7fff);
        plVar8 = (longlong *)
                 ((ulonglong)((uVar14 & 0xffff) * 0x18) + *(longlong *)(DAT_14c9647c8 + uVar15 * 8))
        ;
        if (((plVar8 != (longlong *)0x0) &&
            (iVar19 = (int)(uVar5 >> 0x20), (int)plVar8[2] == iVar19)) &&
           ((*(uint *)(plVar8 + 1) & 0x10200000) == 0)) {
          if ((*(uint *)(plVar8 + 1) & 0x10200000) == 0) {
            lVar9 = *plVar8;
          }
          else {
            lVar9 = 0;
          }
          lVar9 = (**(code **)(*(longlong *)(lVar9 + 0x10a0) + 0x20))();
          if (lVar9 != 0) {
            bVar2 = *(byte *)(local_98 + 0x5e0);
            if ((((int)uVar14 < DAT_14c9647dc) &&
                (plVar8 = (longlong *)
                          ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + uVar15 * 8)), plVar8 != (longlong *)0x0)) &&
               (((int)plVar8[2] == iVar19 && ((*(uint *)(plVar8 + 1) & 0x10200000) == 0)))) {
              lVar9 = *plVar8;
            }
            else {
              lVar9 = 0;
            }
            lVar9 = (**(code **)(*(longlong *)(lVar9 + 0x10a0) + 0x20))(lVar9 + 0x10a0);
            *(byte *)(lVar9 + 0x7c) = *(byte *)(lVar9 + 0x7c) & 0xfe | bVar2;
          }
        }
      }
      lVar17 = lVar17 + 8;
    } while ((longlong)iVar6 * 8 != lVar17);
  }
  iVar6 = *(int *)(local_98 + 0x790);
  if ((longlong)iVar6 != 0) {
    lVar7 = *(longlong *)(local_98 + 0x788);
    lVar17 = 0;
    do {
      uVar5 = *(ulonglong *)(lVar7 + lVar17);
      if (((uVar5 >> 0x20 != 0) && (uVar14 = (uint)uVar5, -1 < (int)uVar14)) &&
         ((int)uVar14 < DAT_14c9647dc)) {
        uVar15 = (ulonglong)((uint)(uVar5 >> 0x10) & 0x7fff);
        plVar8 = (longlong *)
                 ((ulonglong)((uVar14 & 0xffff) * 0x18) + *(longlong *)(DAT_14c9647c8 + uVar15 * 8))
        ;
        if (((plVar8 != (longlong *)0x0) &&
            (iVar19 = (int)(uVar5 >> 0x20), (int)plVar8[2] == iVar19)) &&
           ((*(uint *)(plVar8 + 1) & 0x10200000) == 0)) {
          if ((*(uint *)(plVar8 + 1) & 0x10200000) == 0) {
            lVar9 = *plVar8;
          }
          else {
            lVar9 = 0;
          }
          lVar9 = (**(code **)(*(longlong *)(lVar9 + 0x448) + 0x20))();
          if (lVar9 != 0) {
            bVar2 = *(byte *)(local_98 + 0x5e0);
            if ((((int)uVar14 < DAT_14c9647dc) &&
                (plVar8 = (longlong *)
                          ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + uVar15 * 8)), plVar8 != (longlong *)0x0)) &&
               (((int)plVar8[2] == iVar19 && ((*(uint *)(plVar8 + 1) & 0x10200000) == 0)))) {
              lVar9 = *plVar8;
            }
            else {
              lVar9 = 0;
            }
            lVar9 = (**(code **)(*(longlong *)(lVar9 + 0x448) + 0x20))(lVar9 + 0x448);
            *(byte *)(lVar9 + 0x7c) = *(byte *)(lVar9 + 0x7c) & 0xfe | bVar2;
          }
        }
      }
      lVar17 = lVar17 + 8;
    } while ((longlong)iVar6 * 8 != lVar17);
  }
  if ((longlong)*(int *)(local_98 + 0x7a0) != 0) {
    puVar13 = *(ulonglong **)(local_98 + 0x798);
    puVar1 = puVar13 + *(int *)(local_98 + 0x7a0);
    do {
      uVar5 = *puVar13;
      if (((uVar5 >> 0x20 != 0) && (uVar14 = (uint)uVar5, -1 < (int)uVar14)) &&
         ((int)uVar14 < DAT_14c9647dc)) {
        uVar18 = uVar14 & 0xffff;
        uVar15 = (ulonglong)((uint)(uVar5 >> 0x10) & 0x7fff);
        plVar8 = (longlong *)
                 ((ulonglong)(uVar18 * 0x18) + *(longlong *)(DAT_14c9647c8 + uVar15 * 8));
        if (((plVar8 != (longlong *)0x0) && (iVar6 = (int)(uVar5 >> 0x20), (int)plVar8[2] == iVar6))
           && ((*(uint *)(plVar8 + 1) & 0x10200000) == 0)) {
          if ((*(uint *)(plVar8 + 1) & 0x10200000) == 0) {
            lVar7 = *plVar8;
          }
          else {
            lVar7 = 0;
          }
          lVar7 = (**(code **)(*(longlong *)(lVar7 + 0x10a0) + 0x20))();
          if (lVar7 != 0) {
            bVar2 = *(byte *)(local_98 + 0x5e0);
            if ((((int)uVar14 < DAT_14c9647dc) &&
                (plVar8 = (longlong *)
                          ((ulonglong)(uVar18 * 0x18) + *(longlong *)(DAT_14c9647c8 + uVar15 * 8)),
                plVar8 != (longlong *)0x0)) &&
               (((int)plVar8[2] == iVar6 && ((*(uint *)(plVar8 + 1) & 0x10200000) == 0)))) {
              lVar7 = *plVar8;
            }
            else {
              lVar7 = 0;
            }
            lVar7 = (**(code **)(*(longlong *)(lVar7 + 0x10a0) + 0x20))(lVar7 + 0x10a0);
            *(byte *)(lVar7 + 0x7c) = *(byte *)(lVar7 + 0x7c) & 0xfe | bVar2;
            local_78 = (longlong *)0x0;
            uStack_70 = 0;
            if (((((int)uVar14 < DAT_14c9647dc) &&
                 (puVar20 = (undefined8 *)
                            ((ulonglong)(uVar18 * 0x18) + *(longlong *)(DAT_14c9647c8 + uVar15 * 8))
                 , puVar20 != (undefined8 *)0x0)) && (*(int *)(puVar20 + 2) == iVar6)) &&
               ((*(uint *)(puVar20 + 1) & 0x10200000) == 0)) {
              uVar11 = *puVar20;
            }
            else {
              uVar11 = 0;
            }
            FUN_14490f2e4(uVar11,&local_78,1,1);
            plVar8 = local_78;
            lVar7 = (longlong)(int)uStack_70;
            if (lVar7 != 0) {
              lVar17 = 0;
              do {
                lVar9 = *(longlong *)((longlong)plVar8 + lVar17);
                if (lVar9 != 0) {
                  if (DAT_14cb5b388 == 0) {
                    local_90 = FUN_141864c34;
                    local_a0 = FUN_14081d0ea;
                    local_a8 = &LAB_146431698;
                    local_b0 = &local_90;
                    local_b8 = &LAB_1486775cb;
                    local_c0 = &LAB_1464cee35;
                    local_c8 = L"Game";
                    local_d0 = 0;
                    local_d8 = 0x10000005;
                    local_e0 = 0x10;
                    local_e8 = 0x3a20;
                    FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
                  }
                  if ((*(int *)(DAT_14cb5b388 + 0x38) <=
                       *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
                       (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) == DAT_14cb5b388 + 0x30)) {
                    bVar2 = *(byte *)(local_98 + 0x5e0);
                    lVar10 = (**(code **)(*(longlong *)(lVar9 + 0x10a0) + 0x20))(lVar9 + 0x10a0);
                    *(byte *)(lVar10 + 0x7c) = *(byte *)(lVar10 + 0x7c) & 0xfe | bVar2;
                  }
                  lVar10 = FUN_140aed36c();
                  if (((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
                      (*(longlong *)
                        (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
                        (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) &&
                     (lVar9 = (**(code **)(*(longlong *)(lVar9 + 0x448) + 0x20))(lVar9 + 0x448),
                     lVar9 != 0)) {
                    *(byte *)(lVar9 + 0x7c) =
                         *(byte *)(lVar9 + 0x7c) & 0xfe | *(byte *)(local_98 + 0x5e0);
                  }
                }
                lVar17 = lVar17 + 8;
              } while (lVar7 * 8 != lVar17);
            }
            if (local_78 != (longlong *)0x0) {
              FUN_1400020a8(local_78);
            }
          }
        }
      }
      puVar13 = puVar13 + 1;
    } while (puVar13 != puVar1);
  }
  iVar6 = *(int *)(local_98 + 0x7b0);
  if ((longlong)iVar6 != 0) {
    lVar7 = *(longlong *)(local_98 + 0x7a8);
    lVar17 = 0;
    do {
      uVar5 = *(ulonglong *)(lVar7 + lVar17);
      if (((uVar5 >> 0x20 != 0) && (uVar14 = (uint)uVar5, -1 < (int)uVar14)) &&
         ((int)uVar14 < DAT_14c9647dc)) {
        uVar15 = (ulonglong)((uint)(uVar5 >> 0x10) & 0x7fff);
        plVar8 = (longlong *)
                 ((ulonglong)((uVar14 & 0xffff) * 0x18) + *(longlong *)(DAT_14c9647c8 + uVar15 * 8))
        ;
        if (((plVar8 != (longlong *)0x0) &&
            (iVar19 = (int)(uVar5 >> 0x20), (int)plVar8[2] == iVar19)) &&
           ((*(uint *)(plVar8 + 1) & 0x10200000) == 0)) {
          if ((*(uint *)(plVar8 + 1) & 0x10200000) == 0) {
            lVar9 = *plVar8;
          }
          else {
            lVar9 = 0;
          }
          lVar9 = (**(code **)(*(longlong *)(lVar9 + 0x448) + 0x20))();
          if (lVar9 != 0) {
            bVar2 = *(byte *)(local_98 + 0x5e0);
            if ((((int)uVar14 < DAT_14c9647dc) &&
                (plVar8 = (longlong *)
                          ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + uVar15 * 8)), plVar8 != (longlong *)0x0)) &&
               (((int)plVar8[2] == iVar19 && ((*(uint *)(plVar8 + 1) & 0x10200000) == 0)))) {
              lVar9 = *plVar8;
            }
            else {
              lVar9 = 0;
            }
            lVar9 = (**(code **)(*(longlong *)(lVar9 + 0x448) + 0x20))(lVar9 + 0x448);
            *(byte *)(lVar9 + 0x7c) = *(byte *)(lVar9 + 0x7c) & 0xfe | bVar2;
          }
        }
      }
      lVar17 = lVar17 + 8;
    } while ((longlong)iVar6 * 8 != lVar17);
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ffc38c FUN_143ffc38c body=372 status=ok
// SIG undefined FUN_143ffc38c(void)

/* WARNING: Removing unreachable block (ram,0x000143ffc4b4) */

longlong * FUN_143ffc38c(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  param_2[1] = 0;
  iVar3 = *(int *)(param_1 + 0x88);
  if (0 < iVar3) {
    lVar6 = 0;
    do {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x80) + 4 + lVar6 * 8);
      if ((((iVar1 != 0) &&
           (uVar2 = *(uint *)(*(longlong *)(param_1 + 0x80) + lVar6 * 8), -1 < (int)uVar2)) &&
          ((int)uVar2 < DAT_14c9647dc)) &&
         (((plVar5 = (longlong *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
           plVar5 != (longlong *)0x0 && ((int)plVar5[2] == iVar1)) &&
          ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)))) {
        if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
          lVar4 = *plVar5;
        }
        else {
          lVar4 = 0;
        }
        local_48 = *(undefined8 *)(lVar4 + 0x18);
        FUN_1400021e4(&local_48,&local_58);
        iVar3 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
          FUN_1447a1bd6(param_2,iVar3);
        }
        lVar4 = *param_2;
        lVar7 = (longlong)iVar3 * 0x10;
        *(undefined8 *)(lVar4 + lVar7) = 0;
        *(undefined8 *)(lVar4 + lVar7) = local_58;
        *(undefined4 *)(lVar4 + 8 + lVar7) = (undefined4)local_50;
        *(undefined4 *)(lVar4 + 0xc + lVar7) = local_50._4_4_;
        local_50 = 0;
        local_58 = 0;
        iVar3 = *(int *)(param_1 + 0x88);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar3);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ffc502 FUN_143ffc502 body=1515 status=ok
// SIG undefined FUN_143ffc502(void)

void FUN_143ffc502(longlong param_1,double *param_2,undefined8 *param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  char cVar11;
  int iVar12;
  double dVar13;
  double *pdVar14;
  uint uVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  longlong lVar18;
  float fVar19;
  double dVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 auStack_168 [32];
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if ((((((*(int *)(param_1 + 0x4c) == 0) || (uVar15 = *(uint *)(param_1 + 0x48), (int)uVar15 < 0))
        || (DAT_14c9647dc <= (int)uVar15)) ||
       ((lVar18 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8), lVar18 == 0 ||
        (*(int *)(lVar18 + 0x10) != *(int *)(param_1 + 0x4c))))) ||
      ((*(uint *)(lVar18 + 8) & 0x10200000) != 0)) ||
     (((*(int *)(param_1 + 0x44) == 0 || (uVar15 = *(uint *)(param_1 + 0x40), (int)uVar15 < 0)) ||
      ((DAT_14c9647dc <= (int)uVar15 ||
       (((plVar16 = (longlong *)
                    ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8)),
         plVar16 == (longlong *)0x0 || ((int)plVar16[2] != *(int *)(param_1 + 0x44))) ||
        ((*(uint *)(plVar16 + 1) & 0x10200000) != 0)))))))) goto LAB_143ffc5f8;
  if ((*(uint *)(plVar16 + 1) & 0x10200000) == 0) {
    lVar18 = *plVar16;
  }
  else {
    lVar18 = 0;
  }
  lVar18 = *(longlong *)(lVar18 + 0x3d0);
  if (lVar18 == 0) goto LAB_143ffc5f8;
  plVar16 = (longlong *)FUN_140849bbe();
  if (plVar16 == (longlong *)0x0) {
    if (*(int *)(param_1 + 0x44) == 0) {
LAB_143ffcae0:
      plVar16 = (longlong *)0x0;
    }
    else {
      uVar15 = *(uint *)(param_1 + 0x40);
      plVar16 = (longlong *)0x0;
      if ((-1 < (int)uVar15) && ((int)uVar15 < DAT_14c9647dc)) {
        puVar17 = (undefined8 *)
                  ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8));
        if ((puVar17 == (undefined8 *)0x0) ||
           ((*(int *)(puVar17 + 2) != *(int *)(param_1 + 0x44) ||
            ((*(uint *)(puVar17 + 1) & 0x10200000) != 0)))) goto LAB_143ffcae0;
        plVar16 = (longlong *)*puVar17;
      }
    }
    (**(code **)(*plVar16 + 0x588))(plVar16,&local_148,&local_e8);
    dVar5 = uStack_e0 * 0.01745329238474369;
    dVar13 = sin(0.0);
    dVar1 = sin(dVar5);
    dVar20 = cos(0.0);
    dVar5 = cos(dVar5);
    dVar5 = dVar5 * dVar20;
    dVar1 = dVar1 * dVar20;
    dVar20 = dVar13 * dVar13 + dVar5 * dVar5 + dVar1 * dVar1;
    if (((dVar20 != 1.0) || (dVar2 = dVar5, dVar6 = dVar1, dVar7 = dVar13, NAN(dVar20))) &&
       (dVar2 = DAT_14c8464e0, dVar6 = DAT_14c8464e8, dVar7 = DAT_14c8464f0,
       9.99999993922529e-09 <= dVar20)) {
      dVar20 = 1.0 / SQRT(dVar20);
      dVar2 = dVar5 * dVar20;
      dVar6 = dVar1 * dVar20;
      dVar7 = dVar13 * dVar20;
    }
    *param_2 = local_148 - dVar2 * 50.0;
    param_2[1] = local_140 - dVar6 * 50.0;
    param_2[2] = local_138 - dVar7 * 50.0;
    param_3[2] = local_d8;
    *(undefined4 *)param_3 = (undefined4)local_e8;
    *(undefined4 *)((longlong)param_3 + 4) = local_e8._4_4_;
    *(undefined4 *)(param_3 + 1) = (undefined4)uStack_e0;
    *(undefined4 *)((longlong)param_3 + 0xc) = uStack_e0._4_4_;
    goto LAB_143ffc5f8;
  }
  FUN_14487e4ca(plVar16,&local_148);
  dVar20 = local_120;
  dVar1 = local_128;
  uVar24 = SUB84(local_128,0);
  uVar9 = (ulonglong)local_128 >> 0x20;
  uVar23 = SUB84(local_120,0);
  uVar10 = (ulonglong)local_120 >> 0x20;
  dVar13 = (double)(**(code **)(*plVar16 + 0x4a8))(plVar16,&local_148,DAT_14cb9ea28,0);
  uVar25 = SUB84(plVar16,0);
  lVar18 = *(longlong *)(lVar18 + 0x1c8);
  if (lVar18 == 0) {
    uVar25 = SUB84(DAT_14c846500,0);
    uVar26 = (undefined4)((ulonglong)DAT_14c846500 >> 0x20);
  }
  else {
    dVar5 = *(double *)(lVar18 + 0x240);
    dVar2 = *(double *)(lVar18 + 0x248);
    dVar6 = *(double *)(lVar18 + 0x250);
    dVar7 = *(double *)(lVar18 + 600);
    pdVar14 = *(double **)(lVar18 + 0x228);
    local_e8 = dVar5;
    uStack_e0 = dVar2;
    local_d8 = dVar6;
    uStack_d0 = dVar7;
    if (pdVar14 == (double *)0x0) {
      uVar25 = 0x40;
      pdVar14 = (double *)FUN_14001cc68(0x40,0x10);
      dVar13 = DAT_14c8463d8;
      *pdVar14 = DAT_14c8463d0;
      pdVar14[1] = dVar13;
      dVar13 = DAT_14c8463e8;
      pdVar14[2] = DAT_14c8463e0;
      pdVar14[3] = dVar13;
      dVar13 = DAT_14c846500;
      pdVar14[4] = DAT_14c8464f8;
      pdVar14[5] = dVar13;
      dVar13 = DAT_14c846508;
      pdVar14[6] = DAT_14c846508;
      *(double **)(lVar18 + 0x228) = pdVar14;
    }
    auVar3._8_4_ = (int)-(ulonglong)(dVar2 != pdVar14[1]);
    auVar3._0_8_ = -(ulonglong)(dVar5 != *pdVar14);
    auVar3._12_4_ = (int)(-(ulonglong)(dVar2 != pdVar14[1]) >> 0x20);
    iVar12 = movmskpd(SUB84(dVar13,0),auVar3);
    auVar4._8_4_ = (int)-(ulonglong)(dVar7 != pdVar14[3]);
    auVar4._0_8_ = -(ulonglong)(dVar6 != pdVar14[2]);
    auVar4._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar14[3]) >> 0x20);
    uVar15 = movmskpd(uVar25,auVar4);
    if ((uVar15 & 0x3fffffff) != 0 || iVar12 != 0) {
      *(undefined4 *)(pdVar14 + 2) = (undefined4)local_d8;
      *(undefined4 *)((longlong)pdVar14 + 0x14) = local_d8._4_4_;
      *(undefined4 *)(pdVar14 + 3) = (undefined4)uStack_d0;
      *(undefined4 *)((longlong)pdVar14 + 0x1c) = uStack_d0._4_4_;
      *(undefined4 *)pdVar14 = (undefined4)local_e8;
      *(undefined4 *)((longlong)pdVar14 + 4) = local_e8._4_4_;
      *(undefined4 *)(pdVar14 + 1) = (undefined4)uStack_e0;
      *(undefined4 *)((longlong)pdVar14 + 0xc) = uStack_e0._4_4_;
      FUN_1448052ee(&local_e8,&local_c8);
      pdVar14[6] = local_b8;
      pdVar14[4] = local_c8;
      pdVar14[5] = dStack_c0;
    }
    uVar25 = SUB84(pdVar14[5],0);
    uVar26 = (undefined4)((ulonglong)pdVar14[5] >> 0x20);
  }
  dVar5 = (double)CONCAT44(uVar26,uVar25) * 0.01745329238474369;
  dVar13 = sin(dVar5);
  dVar5 = cos(dVar5);
  dVar2 = dVar5 * dVar5 + dVar13 * dVar13;
  if ((dVar2 != 1.0) || (NAN(dVar2))) {
    dVar6 = DAT_14c8464f0;
    dVar7 = DAT_14c8464e8;
    dVar8 = DAT_14c8464e0;
    if (9.99999993922529e-09 <= dVar2) {
      dVar2 = 1.0 / SQRT(dVar2);
      dVar6 = dVar2 * 0.0;
      dVar7 = dVar13 * dVar2;
      dVar8 = dVar5 * dVar2;
    }
  }
  else {
    dVar6 = 0.0;
    dVar7 = dVar13;
    dVar8 = dVar5;
  }
  if (*(int *)(param_1 + 0x44) == 0) {
LAB_143ffca90:
    plVar16 = (longlong *)0x0;
  }
  else {
    uVar15 = *(uint *)(param_1 + 0x40);
    plVar16 = (longlong *)0x0;
    if ((-1 < (int)uVar15) && ((int)uVar15 < DAT_14c9647dc)) {
      puVar17 = (undefined8 *)
                ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8));
      if ((puVar17 == (undefined8 *)0x0) ||
         ((*(int *)(puVar17 + 2) != *(int *)(param_1 + 0x44) ||
          ((*(uint *)(puVar17 + 1) & 0x10200000) != 0)))) goto LAB_143ffca90;
      plVar16 = (longlong *)*puVar17;
    }
  }
  cVar11 = (**(code **)(*plVar16 + 0x788))();
  if (cVar11 == '\0') {
    uVar21 = SUB84(local_130,0);
    uVar22 = (int)((ulonglong)local_130 >> 0x20);
    if (local_130 <= dVar1) {
      uVar21 = uVar24;
      uVar22 = (int)uVar9;
    }
    if ((double)CONCAT44(uVar22,uVar21) <= dVar20) {
      uVar21 = uVar23;
      uVar22 = (int)uVar10;
    }
    fVar19 = (float)(double)CONCAT44(uVar22,uVar21) + 50.0;
    dVar6 = 0.0;
  }
  else {
    fVar19 = 50.0;
  }
  dVar13 = (double)-fVar19;
  *param_2 = dVar8 * dVar13 + local_128;
  param_2[1] = dVar7 * dVar13 + local_120;
  param_2[2] = dVar6 * dVar13 + local_118;
  *param_3 = 0;
  param_3[1] = CONCAT44(uVar26,uVar25);
  param_3[2] = 0;
LAB_143ffc5f8:
  if ((local_b0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ffcaee FUN_143ffcaee body=194 status=ok
// SIG undefined FUN_143ffcaee(void)

void FUN_143ffcaee(longlong param_1,longlong *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  if (param_2 != (longlong *)0x0) {
    uVar2 = FUN_1410b7fb6(param_2);
    (**(code **)(*param_2 + 0x318))(param_2,uVar2);
    *(byte *)((longlong)param_2 + 0x62) = *(byte *)((longlong)param_2 + 0x62) | 8;
    if (((*(int *)(param_1 + 0x44) != 0) && (uVar1 = *(uint *)(param_1 + 0x40), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) {
      puVar4 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if (((puVar4 != (undefined8 *)0x0) && (*(int *)(puVar4 + 2) == *(int *)(param_1 + 0x44))) &&
         ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)) {
        if ((*(uint *)(puVar4 + 1) & 0x10200000) == 0) {
          uVar2 = *puVar4;
        }
        else {
          uVar2 = 0;
        }
        FUN_1457e35f8(param_2,uVar2);
      }
    }
    plVar3 = (longlong *)(**(code **)(*param_2 + 0x5f8))(param_2);
    if (plVar3 != (longlong *)0x0) {
      uVar2 = FUN_1410b7fb6(plVar3);
      (**(code **)(*plVar3 + 0x318))(plVar3,uVar2);
      *(byte *)((longlong)plVar3 + 0x62) = *(byte *)((longlong)plVar3 + 0x62) | 8;
    }
  }
  return;
}



// FUNCTION 143ffcbb0 FUN_143ffcbb0 body=381 status=ok
// SIG undefined FUN_143ffcbb0(void)

void FUN_143ffcbb0(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 0x4c) == 0) {
LAB_143ffcd1c:
    uVar4 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x48);
    uVar4 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar5 = (undefined8 *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar5 == (undefined8 *)0x0) ||
         ((*(int *)(puVar5 + 2) != *(int *)(param_1 + 0x4c) ||
          ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)))) goto LAB_143ffcd1c;
      uVar4 = *puVar5;
    }
  }
  FUN_143ffcd2e(param_1,uVar4);
  puVar1 = (uint *)(param_1 + 0x40);
  if (((*(int *)(param_1 + 0x44) == 0) || (uVar2 = *puVar1, (int)uVar2 < 0)) ||
     (DAT_14c9647dc <= (int)uVar2)) goto LAB_143ffcc6f;
  puVar5 = (undefined8 *)
           ((ulonglong)((uVar2 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
  if (((puVar5 == (undefined8 *)0x0) || (*(int *)(puVar5 + 2) != *(int *)(param_1 + 0x44))) ||
     ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)) goto LAB_143ffcc6f;
  if ((*(uint *)(puVar5 + 1) & 0x10200000) == 0) {
    plVar3 = (longlong *)*puVar5;
  }
  else {
    plVar3 = (longlong *)0x0;
  }
  local_28 = 0;
  local_24 = 1;
  local_20 = 0x40000000;
  if (*(int *)(param_1 + 0x5c) == 0) {
LAB_143ffcd23:
    uVar4 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x58);
    uVar4 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar5 = (undefined8 *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar5 == (undefined8 *)0x0) ||
         ((*(int *)(puVar5 + 2) != *(int *)(param_1 + 0x5c) ||
          ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)))) goto LAB_143ffcd23;
      uVar4 = *puVar5;
    }
  }
  (**(code **)(*plVar3 + 0xe38))(plVar3,uVar4,&local_28);
  FUN_148b76880(param_1);
LAB_143ffcc6f:
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  puVar1[0] = 0;
  puVar1[1] = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ffcd2e FUN_143ffcd2e body=194 status=ok
// SIG undefined FUN_143ffcd2e(void)

void FUN_143ffcd2e(longlong param_1,longlong *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  if (param_2 != (longlong *)0x0) {
    uVar2 = FUN_1410b7fb6(param_2);
    (**(code **)(*param_2 + 0x308))(param_2,uVar2);
    *(byte *)((longlong)param_2 + 0x62) = *(byte *)((longlong)param_2 + 0x62) & 0xf7;
    if (((*(int *)(param_1 + 0x44) != 0) && (uVar1 = *(uint *)(param_1 + 0x40), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) {
      puVar4 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if (((puVar4 != (undefined8 *)0x0) && (*(int *)(puVar4 + 2) == *(int *)(param_1 + 0x44))) &&
         ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)) {
        if ((*(uint *)(puVar4 + 1) & 0x10200000) == 0) {
          uVar2 = *puVar4;
        }
        else {
          uVar2 = 0;
        }
        FUN_1459808ee(param_2,uVar2);
      }
    }
    plVar3 = (longlong *)(**(code **)(*param_2 + 0x5f8))(param_2);
    if (plVar3 != (longlong *)0x0) {
      uVar2 = FUN_1410b7fb6(plVar3);
      (**(code **)(*plVar3 + 0x308))(plVar3,uVar2);
      *(byte *)((longlong)plVar3 + 0x62) = *(byte *)((longlong)plVar3 + 0x62) & 0xf7;
    }
  }
  return;
}



// FUNCTION 143ffceae FUN_143ffceae body=934 status=ok
// SIG undefined FUN_143ffceae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ffceae(longlong param_1,undefined8 param_2,longlong param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [16];
  double local_c8;
  double dStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1406701d4();
  auVar11 = divpd(*(undefined1 (*) [16])(param_3 + 0x18),_DAT_1499387d0);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = *(double *)(param_3 + 0x28);
  auVar12 = divpd(auVar12,_DAT_1499387d0);
  auVar11 = roundpd(auVar11,auVar11,3);
  auVar12 = roundpd(auVar12,auVar12,3);
  dVar4 = (*(double *)*(undefined1 (*) [16])(param_3 + 0x18) - auVar11._0_8_ * (double)DAT_1499387d0
          ) * 0.008726646259971648;
  dVar5 = (*(double *)(param_3 + 0x20) - auVar11._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648
  ;
  dVar7 = (*(double *)(param_3 + 0x28) - auVar12._0_8_ * (double)DAT_1499387d0) *
          0.008726646259971648;
  dVar8 = (0.0 - auVar12._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar1 = sin(dVar4);
  dVar2 = sin(dVar5);
  dVar3 = sin(dVar7);
  sin(dVar8);
  dVar4 = cos(dVar4);
  dVar5 = cos(dVar5);
  dVar7 = cos(dVar7);
  cos(dVar8);
  dVar8 = -(dVar5 * dVar1 * dVar3) + dVar2 * dVar4 * dVar7;
  dVar6 = dVar2 * dVar1 * dVar3 + dVar5 * dVar4 * dVar7;
  dVar9 = dVar1 * dVar2 * dVar7 - dVar4 * dVar5 * dVar3;
  dVar4 = -(dVar1 * dVar5 * dVar7) - dVar4 * dVar2 * dVar3;
  dVar1 = dVar8 - dVar9 * 0.0;
  dVar10 = dVar9 * 0.0 - dVar4;
  dVar13 = dVar4 * 0.0 + dVar8 * -0.0;
  dVar10 = dVar10 + dVar10;
  dVar1 = dVar1 + dVar1;
  dVar13 = dVar13 + dVar13;
  dVar3 = (double)(*(float *)(param_1 + 0x800) * 0.017453292) * 0.5;
  dVar2 = sin(dVar3);
  dVar3 = cos(dVar3);
  dVar5 = ((dVar4 * dVar10 - dVar1 * dVar8) + dVar6 * dVar13 + 1.0) * dVar2;
  dVar7 = ((dVar8 * dVar13 - dVar10 * dVar9) + dVar6 * dVar1 + 0.0) * dVar2;
  dVar2 = ((dVar9 * dVar1 - dVar13 * dVar4) + dVar6 * dVar10 + 0.0) * dVar2;
  dVar1 = dVar9 * dVar2 * 1.0 + dVar6 * dVar7 + dVar8 * dVar5 * -1.0 + dVar3 * dVar4;
  local_c8 = dVar6 * dVar2 * 1.0 + ((dVar5 * dVar4 * 1.0 + dVar3 * dVar8) - dVar9 * dVar7);
  dStack_c0 = dVar8 * dVar2 * -1.0 + ((dVar5 * dVar9 * -1.0 + dVar3 * dVar6) - dVar4 * dVar7);
  local_d8._8_4_ = SUB84(dVar1,0);
  local_d8._0_8_ = dVar4 * dVar2 * -1.0 + dVar8 * dVar7 + dVar6 * dVar5 * 1.0 + dVar3 * dVar9;
  local_d8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  FUN_1448052ee(local_d8,&local_b8);
  *(undefined8 *)(param_3 + 0x28) = local_a8;
  *(undefined4 *)(param_3 + 0x18) = local_b8;
  *(undefined4 *)(param_3 + 0x1c) = uStack_b4;
  *(undefined4 *)(param_3 + 0x20) = uStack_b0;
  *(undefined4 *)(param_3 + 0x24) = uStack_ac;
  if ((local_a0 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ffd256 FUN_143ffd256 body=1829 status=ok
// SIG undefined FUN_143ffd256(void)

void FUN_143ffd256(longlong param_1)

{
  byte *pbVar1;
  uint uVar2;
  char *pcVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  bool bVar14;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_78;
  char *local_70;
  ulonglong uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1405f1eac();
  FUN_140c1abcc(&DAT_14caf6fc8,param_1);
  if ((((*(longlong *)(param_1 + 0x468) != 0) &&
       ((*(uint *)(*(longlong *)(param_1 + 0x468) + 8) >> 0x1e & 1) == 0)) &&
      (*(longlong *)(param_1 + 0x470) != 0)) &&
     ((*(uint *)(*(longlong *)(param_1 + 0x470) + 8) >> 0x1e & 1) == 0)) {
    lVar11 = param_1 + 0x598;
    lVar8 = FUN_1447e736e(lVar11);
    if (lVar8 != 0) {
      local_70 = "OnStartTimelineFinished";
      uStack_68 = CONCAT35(uStack_68._5_3_,0x17);
      uVar5 = FUN_14001a6c0(&local_70,1);
      if (param_1 == 0) {
        uRam0000000000000718 = 0;
        iVar6 = 0;
      }
      else {
        uVar2 = *(uint *)(param_1 + 0xc);
        *(uint *)(param_1 + 0x718) = uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar8 = 0;
        }
        iVar6 = *(int *)(lVar8 + 0x10);
        if (*(int *)(lVar8 + 0x10) == 0) {
          LOCK();
          iVar6 = DAT_14c964868 + 1;
          UNLOCK();
          iVar13 = DAT_14c964868 + 1;
          bVar14 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar6;
          if (bVar14) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar13);
          }
          LOCK();
          iVar6 = *(int *)(lVar8 + 0x10);
          bVar14 = iVar6 == 0;
          if (bVar14) {
            *(int *)(lVar8 + 0x10) = iVar13;
            iVar6 = 0;
          }
          UNLOCK();
          if (bVar14) {
            iVar6 = iVar13;
          }
        }
      }
      *(int *)(param_1 + 0x71c) = iVar6;
      *(ulonglong *)(param_1 + 0x720) = (ulonglong)uVar5;
      lVar8 = *(longlong *)(param_1 + 0x468);
      *(undefined8 *)(lVar8 + 0x170) = *(undefined8 *)(param_1 + 0x718);
      *(ulonglong *)(lVar8 + 0x178) = (ulonglong)uVar5;
      local_70 = "OnStartTimelineUpdate";
      uStack_68 = CONCAT35(uStack_68._5_3_,0x15);
      uVar5 = FUN_14001a6c0(&local_70,1);
      if (param_1 == 0) {
        uRam0000000000000708 = 0;
        iVar6 = 0;
      }
      else {
        uVar2 = *(uint *)(param_1 + 0xc);
        *(uint *)(param_1 + 0x708) = uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar8 = 0;
        }
        iVar6 = *(int *)(lVar8 + 0x10);
        if (*(int *)(lVar8 + 0x10) == 0) {
          LOCK();
          iVar6 = DAT_14c964868 + 1;
          UNLOCK();
          iVar13 = DAT_14c964868 + 1;
          bVar14 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar6;
          if (bVar14) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar13);
          }
          LOCK();
          iVar6 = *(int *)(lVar8 + 0x10);
          bVar14 = iVar6 == 0;
          if (bVar14) {
            *(int *)(lVar8 + 0x10) = iVar13;
            iVar6 = 0;
          }
          UNLOCK();
          if (bVar14) {
            iVar6 = iVar13;
          }
        }
      }
      *(int *)(param_1 + 0x70c) = iVar6;
      *(ulonglong *)(param_1 + 0x710) = (ulonglong)uVar5;
      lVar8 = *(longlong *)(param_1 + 0x468);
      local_70 = "FloatTrack";
      uStack_68 = CONCAT35(uStack_68._5_3_,10);
      uVar7 = FUN_14001a6c0(&local_70,1);
      pcVar3 = *(char **)(param_1 + 0x708);
      uVar10 = *(undefined8 *)(param_1 + 0x710);
      uVar9 = FUN_1447e736e(lVar11);
      local_88 = 0;
      local_70 = pcVar3;
      uStack_68 = uVar10;
      FUN_1408c9146(lVar8 + 0x110,uVar9,&local_70,uVar7);
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x468) + 0x111);
      *pbVar1 = *pbVar1 & 0xfe;
      *(undefined4 *)(*(longlong *)(param_1 + 0x468) + 0x118) = 0x3f800000;
      local_70 = "OnEndTimelineFinished";
      uStack_68 = CONCAT35(uStack_68._5_3_,0x15);
      uVar5 = FUN_14001a6c0(&local_70,1);
      if (param_1 == 0) {
        uRam0000000000000738 = 0;
        iVar6 = 0;
      }
      else {
        uVar2 = *(uint *)(param_1 + 0xc);
        *(uint *)(param_1 + 0x738) = uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar8 = 0;
        }
        iVar6 = *(int *)(lVar8 + 0x10);
        if (*(int *)(lVar8 + 0x10) == 0) {
          LOCK();
          iVar6 = DAT_14c964868 + 1;
          UNLOCK();
          iVar13 = DAT_14c964868 + 1;
          bVar14 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar6;
          if (bVar14) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar13);
          }
          LOCK();
          iVar6 = *(int *)(lVar8 + 0x10);
          bVar14 = iVar6 == 0;
          if (bVar14) {
            *(int *)(lVar8 + 0x10) = iVar13;
            iVar6 = 0;
          }
          UNLOCK();
          if (bVar14) {
            iVar6 = iVar13;
          }
        }
      }
      *(int *)(param_1 + 0x73c) = iVar6;
      *(ulonglong *)(param_1 + 0x740) = (ulonglong)uVar5;
      lVar8 = *(longlong *)(param_1 + 0x470);
      *(undefined8 *)(lVar8 + 0x170) = *(undefined8 *)(param_1 + 0x738);
      *(ulonglong *)(lVar8 + 0x178) = (ulonglong)uVar5;
      local_70 = "OnEndTimelineUpdate";
      uStack_68 = CONCAT35(uStack_68._5_3_,0x13);
      uVar5 = FUN_14001a6c0(&local_70,1);
      if (param_1 == 0) {
        uRam0000000000000728 = 0;
        iVar6 = 0;
      }
      else {
        uVar2 = *(uint *)(param_1 + 0xc);
        *(uint *)(param_1 + 0x728) = uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar8 = 0;
        }
        iVar6 = *(int *)(lVar8 + 0x10);
        if (*(int *)(lVar8 + 0x10) == 0) {
          LOCK();
          iVar6 = DAT_14c964868 + 1;
          UNLOCK();
          iVar13 = DAT_14c964868 + 1;
          bVar14 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar6;
          if (bVar14) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar13);
          }
          LOCK();
          iVar6 = *(int *)(lVar8 + 0x10);
          bVar14 = iVar6 == 0;
          if (bVar14) {
            *(int *)(lVar8 + 0x10) = iVar13;
            iVar6 = 0;
          }
          UNLOCK();
          if (bVar14) {
            iVar6 = iVar13;
          }
        }
      }
      *(int *)(param_1 + 0x72c) = iVar6;
      *(ulonglong *)(param_1 + 0x730) = (ulonglong)uVar5;
      lVar8 = *(longlong *)(param_1 + 0x470);
      local_70 = "FloatTrack";
      uStack_68 = CONCAT35(uStack_68._5_3_,10);
      uVar7 = FUN_14001a6c0(&local_70,1);
      pcVar3 = *(char **)(param_1 + 0x728);
      uVar4 = *(ulonglong *)(param_1 + 0x730);
      uVar10 = FUN_1447e736e(lVar11);
      local_88 = 0;
      local_70 = pcVar3;
      uStack_68 = uVar4;
      FUN_1408c9146(lVar8 + 0x110,uVar10,&local_70,uVar7);
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x470) + 0x111);
      *pbVar1 = *pbVar1 & 0xfe;
      *(undefined4 *)(*(longlong *)(param_1 + 0x470) + 0x118) = 0x3f800000;
    }
  }
  FUN_148b73fa0(param_1);
  lVar11 = FUN_1447210f0(param_1);
  if (lVar11 != 0) {
    local_70 = (char *)0x0;
    uStack_68 = uStack_68 & 0xffffffff00000000;
    FUN_1446efa72(&local_70,0,3,0x10);
    pcVar3 = local_70;
    uStack_68 = CONCAT44(uStack_68._4_4_,3);
    *(undefined ***)local_70 = &PTR_LAB_14a3a3510;
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
    *(longlong *)(local_70 + 0x10) = lVar12;
    *(undefined ***)local_70 = &PTR_FUN_14b5af760;
    pcVar3[0x18] = '\0';
    pcVar3[0x19] = '\0';
    pcVar3[0x1a] = '\0';
    pcVar3[0x1b] = '\0';
    pcVar3[0x1c] = '\0';
    pcVar3[0x1d] = '\0';
    pcVar3[0x1e] = '\0';
    pcVar3[0x1f] = '\0';
    iVar6 = 0;
    if (param_1 != 0) {
      uVar5 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_70 + 0x18) = uVar5;
      if ((int)uVar5 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      iVar6 = *(int *)(lVar8 + 0x10);
      if (*(int *)(lVar8 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        iVar13 = DAT_14c964868 + 1;
        bVar14 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar14) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar13);
        }
        LOCK();
        iVar6 = *(int *)(lVar8 + 0x10);
        bVar14 = iVar6 == 0;
        if (bVar14) {
          *(int *)(lVar8 + 0x10) = iVar13;
          iVar6 = 0;
        }
        UNLOCK();
        if (bVar14) {
          iVar6 = iVar13;
        }
      }
    }
    *(int *)(pcVar3 + 0x1c) = iVar6;
    *(code **)(pcVar3 + 0x20) = FUN_143ffd97c;
    pcVar3[0x28] = '\0';
    pcVar3[0x29] = '\0';
    pcVar3[0x2a] = '\0';
    pcVar3[0x2b] = '\0';
    FUN_140244bba(lVar11,&local_78,&local_70);
    *(undefined8 *)(param_1 + 0x808) = local_78;
    if ((int)uStack_68 != 0) {
      if (local_70 == (char *)0x0) goto LAB_143ffd74c;
      (*(code *)**(undefined8 **)local_70)(local_70,0);
      FUN_1446efa72(&local_70,0,0,0x10);
      uStack_68 = uStack_68 & 0xffffffff00000000;
    }
    if (local_70 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143ffd74c:
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ffd97c FUN_143ffd97c body=730 status=ok
// SIG undefined FUN_143ffd97c(void)

void FUN_143ffd97c(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_e8 [32];
  undefined2 *local_c8;
  undefined8 *local_c0;
  int local_b8;
  undefined2 local_b0 [2];
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  byte local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar4 = FUN_1447210f0();
  if (lVar4 == 0) goto LAB_143ffdb9f;
  if (*(longlong *)(lVar4 + 0x1f0) == 0) {
    puVar5 = (undefined8 *)(lVar4 + 0x458);
  }
  else {
    puVar5 = (undefined8 *)(*(longlong *)(lVar4 + 0x1f0) + 0xf0);
  }
  uVar3 = *puVar5;
  if (*(int *)(param_1 + 0x480) == 0) {
LAB_143ffdbd3:
    lVar4 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x47c);
    lVar4 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar6 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar6 == (longlong *)0x0) ||
         (((int)plVar6[2] != *(int *)(param_1 + 0x480) ||
          ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)))) goto LAB_143ffdbd3;
      lVar4 = *plVar6;
    }
  }
  uVar1 = *(undefined4 *)(lVar4 + 0x3d8);
  local_c0 = (undefined8 *)0x0;
  local_b8 = 0;
  FUN_1446efa72(&local_c0,0,3,0x10);
  puVar5 = local_c0;
  local_b8 = 3;
  *local_c0 = &PTR_LAB_14a1c8830;
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
  local_c0[2] = lVar7;
  *local_c0 = &PTR_FUN_14b5afae0;
  local_c0[3] = 0;
  iVar8 = 0;
  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_c0 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar8 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar8 = *(int *)(lVar4 + 0x10);
      bVar10 = iVar8 == 0;
      if (bVar10) {
        *(int *)(lVar4 + 0x10) = iVar9;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar8 = iVar9;
      }
    }
  }
  *(int *)((longlong)puVar5 + 0x1c) = iVar8;
  puVar5[4] = param_2;
  puVar5[5] = param_1;
  local_a8 = 0;
  local_a0 = 0;
  FUN_14487d8d8(&local_a8,&local_c0);
  local_68 = 1;
  local_c8 = local_b0;
  local_b0[0] = 0;
  local_ac = 0xbf800000;
  FUN_1406f4044(uVar3,param_1 + 0x810,&local_a8,uVar1);
  (*(code *)(&PTR_LAB_14a1c87a0)[local_68])(&local_a8);
  if (local_b8 != 0) {
    if (local_c0 == (undefined8 *)0x0) goto LAB_143ffdb9f;
    (**(code **)*local_c0)(local_c0,0);
    FUN_1446efa72(&local_c0,0,0,0x10);
    local_b8 = 0;
  }
  if (local_c0 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143ffdb9f:
  if ((local_50 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ffdc58 FUN_143ffdc58 body=1483 status=ok
// SIG undefined FUN_143ffdc58(void)

void FUN_143ffdc58(longlong param_1,float param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  param_2 = *(float *)(param_1 + 0x818) - param_2;
  *(float *)(param_1 + 0x818) = param_2;
  if (param_2 <= 0.0) {
    *(undefined4 *)(param_1 + 0x818) = 0x3f800000;
    if (*(char *)(param_1 + 0x5e1) == '\0') {
      iVar1 = *(int *)(param_1 + 0x750);
      if ((longlong)iVar1 != 0) {
        lVar2 = *(longlong *)(param_1 + 0x748);
        lVar7 = 0;
        do {
          uVar3 = *(ulonglong *)(lVar2 + lVar7);
          if ((((uVar3 >> 0x20 != 0) && (uVar4 = (uint)uVar3, -1 < (int)uVar4)) &&
              ((int)uVar4 < DAT_14c9647dc)) &&
             (((puVar5 = (undefined8 *)
                         ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0xd & 0x3fff8))),
               puVar5 != (undefined8 *)0x0 && (*(int *)(puVar5 + 2) == (int)(uVar3 >> 0x20))) &&
              ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)))) {
            if ((*(uint *)(puVar5 + 1) & 0x10200000) == 0) {
              uVar6 = *puVar5;
            }
            else {
              uVar6 = 0;
            }
            FUN_143ff5592(param_1,uVar6,
                          CONCAT71((int7)((ulonglong)DAT_14c9647c8 >> 8),
                                   *(undefined1 *)(param_1 + 0x5e1)) ^ 1);
          }
          lVar7 = lVar7 + 8;
        } while ((longlong)iVar1 * 8 != lVar7);
      }
      iVar1 = *(int *)(param_1 + 2000);
      if ((longlong)iVar1 != 0) {
        lVar2 = *(longlong *)(param_1 + 0x7c8);
        lVar7 = 0;
        do {
          uVar3 = *(ulonglong *)(lVar2 + lVar7);
          if (((uVar3 >> 0x20 != 0) && (uVar4 = (uint)uVar3, -1 < (int)uVar4)) &&
             (((int)uVar4 < DAT_14c9647dc &&
              (((puVar5 = (undefined8 *)
                          ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0xd & 0x3fff8))),
                puVar5 != (undefined8 *)0x0 && (*(int *)(puVar5 + 2) == (int)(uVar3 >> 0x20))) &&
               ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)))))) {
            if ((*(uint *)(puVar5 + 1) & 0x10200000) == 0) {
              uVar6 = *puVar5;
            }
            else {
              uVar6 = 0;
            }
            FUN_143ff5592(param_1,uVar6,
                          CONCAT71((int7)((ulonglong)DAT_14c9647c8 >> 8),
                                   *(undefined1 *)(param_1 + 0x5e1)) ^ 1);
          }
          lVar7 = lVar7 + 8;
        } while ((longlong)iVar1 * 8 != lVar7);
      }
    }
    if ((*(char *)(param_1 + 0x5e2) == '\0') &&
       (iVar1 = *(int *)(param_1 + 0x770), (longlong)iVar1 != 0)) {
      lVar2 = *(longlong *)(param_1 + 0x768);
      lVar7 = 0;
      do {
        uVar3 = *(ulonglong *)(lVar2 + lVar7);
        if (((uVar3 >> 0x20 != 0) && (uVar4 = (uint)uVar3, -1 < (int)uVar4)) &&
           (((int)uVar4 < DAT_14c9647dc &&
            (((puVar5 = (undefined8 *)
                        ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0xd & 0x3fff8))),
              puVar5 != (undefined8 *)0x0 && (*(int *)(puVar5 + 2) == (int)(uVar3 >> 0x20))) &&
             ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)))))) {
          if ((*(uint *)(puVar5 + 1) & 0x10200000) == 0) {
            uVar6 = *puVar5;
          }
          else {
            uVar6 = 0;
          }
          FUN_143ff5592(param_1,uVar6,
                        CONCAT71((int7)((ulonglong)DAT_14c9647c8 >> 8),
                                 *(undefined1 *)(param_1 + 0x5e2)) ^ 1);
        }
        lVar7 = lVar7 + 8;
      } while ((longlong)iVar1 * 8 != lVar7);
    }
    if (*(char *)(param_1 + 0x5e3) == '\0') {
      iVar1 = *(int *)(param_1 + 0x780);
      if ((longlong)iVar1 != 0) {
        lVar2 = *(longlong *)(param_1 + 0x778);
        lVar7 = 0;
        do {
          uVar3 = *(ulonglong *)(lVar2 + lVar7);
          if (((uVar3 >> 0x20 != 0) && (uVar4 = (uint)uVar3, -1 < (int)uVar4)) &&
             ((((int)uVar4 < DAT_14c9647dc &&
               ((puVar5 = (undefined8 *)
                          ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0xd & 0x3fff8))),
                puVar5 != (undefined8 *)0x0 && (*(int *)(puVar5 + 2) == (int)(uVar3 >> 0x20))))) &&
              ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)))) {
            if ((*(uint *)(puVar5 + 1) & 0x10200000) == 0) {
              uVar6 = *puVar5;
            }
            else {
              uVar6 = 0;
            }
            FUN_143ff5592(param_1,uVar6,
                          CONCAT71((int7)((ulonglong)DAT_14c9647c8 >> 8),
                                   *(undefined1 *)(param_1 + 0x5e3)) ^ 1);
          }
          lVar7 = lVar7 + 8;
        } while ((longlong)iVar1 * 8 != lVar7);
      }
      iVar1 = *(int *)(param_1 + 0x790);
      if ((longlong)iVar1 != 0) {
        lVar2 = *(longlong *)(param_1 + 0x788);
        lVar7 = 0;
        do {
          uVar3 = *(ulonglong *)(lVar2 + lVar7);
          if (((((uVar3 >> 0x20 != 0) && (uVar4 = (uint)uVar3, -1 < (int)uVar4)) &&
               ((int)uVar4 < DAT_14c9647dc)) &&
              ((puVar5 = (undefined8 *)
                         ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0xd & 0x3fff8))),
               puVar5 != (undefined8 *)0x0 && (*(int *)(puVar5 + 2) == (int)(uVar3 >> 0x20))))) &&
             ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)) {
            if ((*(uint *)(puVar5 + 1) & 0x10200000) == 0) {
              uVar6 = *puVar5;
            }
            else {
              uVar6 = 0;
            }
            FUN_143ff5592(param_1,uVar6,
                          CONCAT71((int7)((ulonglong)DAT_14c9647c8 >> 8),
                                   *(undefined1 *)(param_1 + 0x5e3)) ^ 1);
          }
          lVar7 = lVar7 + 8;
        } while ((longlong)iVar1 * 8 != lVar7);
      }
      iVar1 = *(int *)(param_1 + 0x7e0);
      if ((longlong)iVar1 != 0) {
        lVar2 = *(longlong *)(param_1 + 0x7d8);
        lVar7 = 0;
        do {
          uVar3 = *(ulonglong *)(lVar2 + lVar7);
          if (((uVar3 >> 0x20 != 0) && (uVar4 = (uint)uVar3, -1 < (int)uVar4)) &&
             (((int)uVar4 < DAT_14c9647dc &&
              (((puVar5 = (undefined8 *)
                          ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0xd & 0x3fff8))),
                puVar5 != (undefined8 *)0x0 && (*(int *)(puVar5 + 2) == (int)(uVar3 >> 0x20))) &&
               ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)))))) {
            if ((*(uint *)(puVar5 + 1) & 0x10200000) == 0) {
              uVar6 = *puVar5;
            }
            else {
              uVar6 = 0;
            }
            FUN_143ff5592(param_1,uVar6,
                          CONCAT71((int7)((ulonglong)DAT_14c9647c8 >> 8),
                                   *(undefined1 *)(param_1 + 0x5e3)) ^ 1);
          }
          lVar7 = lVar7 + 8;
        } while ((longlong)iVar1 * 8 != lVar7);
      }
    }
    if (*(char *)(param_1 + 0x5e4) == '\0') {
      iVar1 = *(int *)(param_1 + 0x7a0);
      if ((longlong)iVar1 != 0) {
        lVar2 = *(longlong *)(param_1 + 0x798);
        lVar7 = 0;
        do {
          uVar3 = *(ulonglong *)(lVar2 + lVar7);
          if (((uVar3 >> 0x20 != 0) && (uVar4 = (uint)uVar3, -1 < (int)uVar4)) &&
             ((((int)uVar4 < DAT_14c9647dc &&
               ((puVar5 = (undefined8 *)
                          ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0xd & 0x3fff8))),
                puVar5 != (undefined8 *)0x0 && (*(int *)(puVar5 + 2) == (int)(uVar3 >> 0x20))))) &&
              ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)))) {
            if ((*(uint *)(puVar5 + 1) & 0x10200000) == 0) {
              uVar6 = *puVar5;
            }
            else {
              uVar6 = 0;
            }
            FUN_143ff5592(param_1,uVar6,
                          CONCAT71((int7)((ulonglong)DAT_14c9647c8 >> 8),
                                   *(undefined1 *)(param_1 + 0x5e4)) ^ 1);
          }
          lVar7 = lVar7 + 8;
        } while ((longlong)iVar1 * 8 != lVar7);
      }
      iVar1 = *(int *)(param_1 + 0x7b0);
      if ((longlong)iVar1 != 0) {
        lVar2 = *(longlong *)(param_1 + 0x7a8);
        lVar7 = 0;
        do {
          uVar3 = *(ulonglong *)(lVar2 + lVar7);
          if ((((uVar3 >> 0x20 != 0) && (uVar4 = (uint)uVar3, -1 < (int)uVar4)) &&
              ((int)uVar4 < DAT_14c9647dc)) &&
             (((puVar5 = (undefined8 *)
                         ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0xd & 0x3fff8))),
               puVar5 != (undefined8 *)0x0 && (*(int *)(puVar5 + 2) == (int)(uVar3 >> 0x20))) &&
              ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)))) {
            if ((*(uint *)(puVar5 + 1) & 0x10200000) == 0) {
              uVar6 = *puVar5;
            }
            else {
              uVar6 = 0;
            }
            FUN_143ff5592(param_1,uVar6,
                          CONCAT71((int7)((ulonglong)DAT_14c9647c8 >> 8),
                                   *(undefined1 *)(param_1 + 0x5e4)) ^ 1);
          }
          lVar7 = lVar7 + 8;
        } while ((longlong)iVar1 * 8 != lVar7);
      }
      iVar1 = *(int *)(param_1 + 0x7c0);
      if ((longlong)iVar1 != 0) {
        lVar2 = *(longlong *)(param_1 + 0x7b8);
        lVar7 = 0;
        do {
          uVar3 = *(ulonglong *)(lVar2 + lVar7);
          if (((uVar3 >> 0x20 != 0) && (uVar4 = (uint)uVar3, -1 < (int)uVar4)) &&
             (((int)uVar4 < DAT_14c9647dc &&
              (((puVar5 = (undefined8 *)
                          ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0xd & 0x3fff8))),
                puVar5 != (undefined8 *)0x0 && (*(int *)(puVar5 + 2) == (int)(uVar3 >> 0x20))) &&
               ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)))))) {
            if ((*(uint *)(puVar5 + 1) & 0x10200000) == 0) {
              uVar6 = *puVar5;
            }
            else {
              uVar6 = 0;
            }
            FUN_143ff5592(param_1,uVar6,
                          CONCAT71((int7)((ulonglong)DAT_14c9647c8 >> 8),
                                   *(undefined1 *)(param_1 + 0x5e4)) ^ 1);
          }
          lVar7 = lVar7 + 8;
        } while ((longlong)iVar1 * 8 != lVar7);
      }
    }
    if (*(char *)(param_1 + 0x5e0) == '\0') {
      FUN_143ffb8d0(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 143ffe226 FUN_143ffe226 body=824 status=ok
// SIG undefined FUN_143ffe226(void)

void FUN_143ffe226(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_1 + 0x800) = 0;
  plVar1 = *(longlong **)(param_1 + 0x460);
  if ((plVar1 != (longlong *)0x0) && ((*(uint *)(plVar1 + 1) >> 0x1e & 1) == 0)) {
    (**(code **)(*plVar1 + 0x5d8))(plVar1,0x42b40000);
  }
  FUN_143ff1530(param_1,0);
  lVar2 = *(longlong *)(param_1 + 0x460);
  if (lVar2 != 0) {
    if ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0) {
      *(undefined4 *)(lVar2 + 0xc7c) = 0x42c80000;
      lVar2 = *(longlong *)(param_1 + 0x460);
      if (lVar2 == 0) goto LAB_143ffe288;
    }
    if ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0) {
      *(undefined4 *)(lVar2 + 0xce0) = 0x40333333;
      FUN_140c89136();
      lVar2 = *(longlong *)(param_1 + 0x460);
      if (lVar2 == 0) goto LAB_143ffe288;
    }
    if ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0) {
      *(undefined4 *)(lVar2 + 0x7ec) = 0x3f800000;
      lVar2 = *(longlong *)(param_1 + 0x460);
      if (lVar2 == 0) goto LAB_143ffe288;
    }
    if ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0) {
      *(undefined8 *)(lVar2 + 0x3d0) = 0x3ff0000000000000;
      *(undefined8 *)(lVar2 + 0x3d8) = 0x3ff0000000000000;
      *(undefined8 *)(lVar2 + 0x3e0) = 0x3ff0000000000000;
      *(undefined8 *)(lVar2 + 1000) = 0x3ff0000000000000;
      lVar2 = *(longlong *)(param_1 + 0x460);
      if (lVar2 == 0) goto LAB_143ffe288;
    }
    if ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0) {
      *(undefined8 *)(lVar2 + 0x3b0) = 0x3ff0000000000000;
      *(undefined8 *)(lVar2 + 0x3b8) = 0x3ff0000000000000;
      *(undefined8 *)(lVar2 + 0x3c0) = 0x3ff0000000000000;
      *(undefined8 *)(lVar2 + 0x3c8) = 0x3ff0000000000000;
      lVar2 = *(longlong *)(param_1 + 0x460);
      if (lVar2 == 0) goto LAB_143ffe288;
    }
    if ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0) {
      *(undefined8 *)(lVar2 + 0x3f0) = 0x3ff0000000000000;
      *(undefined8 *)(lVar2 + 0x3f8) = 0x3ff0000000000000;
      *(undefined8 *)(lVar2 + 0x400) = 0x3ff0000000000000;
      *(undefined8 *)(lVar2 + 0x408) = 0x3ff0000000000000;
      lVar2 = *(longlong *)(param_1 + 0x460);
      if (lVar2 == 0) goto LAB_143ffe288;
    }
    if ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0) {
      *(undefined8 *)(lVar2 + 0x410) = 0x3ff0000000000000;
      *(undefined8 *)(lVar2 + 0x418) = 0x3ff0000000000000;
      *(undefined8 *)(lVar2 + 0x420) = 0x3ff0000000000000;
      *(undefined8 *)(lVar2 + 0x428) = 0x3ff0000000000000;
    }
  }
LAB_143ffe288:
  FUN_148b7476e(param_1,*(float *)(param_1 + 0x5c4) * 24.0);
  *(undefined1 *)(param_1 + 0x5e0) = 1;
  FUN_143ffb8d0(param_1);
  FUN_143ff95c6(param_1,1);
  FUN_143ffab78(param_1,1);
  FUN_143ff7fae(param_1,1);
  FUN_143ff5ede(param_1,1);
  FUN_140056680(local_28,L"default");
  FUN_143ff9202(param_1,local_28);
  lVar2 = *(longlong *)(param_1 + 0x460);
  if ((lVar2 != 0) && ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0)) {
    *(undefined4 *)(lVar2 + 0x928) = 0;
  }
  FUN_140056680(local_38,L"Hashtagnofilter");
  FUN_143ff7144(param_1,local_38);
  lVar2 = *(longlong *)(param_1 + 0x460);
  if (lVar2 != 0) {
    if ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0) {
      *(undefined4 *)(param_1 + 0x5c0) = 0x3f800000;
      *(undefined4 *)(lVar2 + 0x998) = 0x3f800000;
      lVar2 = *(longlong *)(param_1 + 0x460);
      if (lVar2 == 0) goto LAB_143ffe3da;
    }
    if ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0) {
      *(undefined4 *)(lVar2 + 0x918) = 0;
      lVar2 = *(longlong *)(param_1 + 0x460);
      if (lVar2 == 0) goto LAB_143ffe3da;
    }
    if ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0) {
      *(undefined4 *)(lVar2 + 0x674) = 0x3f2ccccd;
      lVar2 = *(longlong *)(param_1 + 0x460);
      if (lVar2 == 0) goto LAB_143ffe3da;
    }
    if ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0) {
      *(undefined4 *)(lVar2 + 0x66c) = 0;
      lVar2 = *(longlong *)(param_1 + 0x460);
      if (lVar2 == 0) goto LAB_143ffe3da;
    }
    if ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0) {
      *(undefined4 *)(lVar2 + 0x870) = 0x3f800000;
    }
  }
LAB_143ffe3da:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ffe560 FUN_143ffe560 body=342 status=ok
// SIG undefined FUN_143ffe560(void)

void FUN_143ffe560(longlong param_1,char param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 == '\0') {
    if ((*(longlong *)(param_1 + 0x470) != 0) &&
       ((*(uint *)(*(longlong *)(param_1 + 0x470) + 8) >> 0x1e & 1) == 0)) {
      lVar5 = *(longlong *)(param_1 + 0x1c8);
      if (lVar5 == 0) {
        puVar6 = &DAT_14c8464e0;
        uVar7 = (undefined4)DAT_14c8464f0;
        uVar8 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      }
      else {
        uVar7 = (undefined4)*(undefined8 *)(lVar5 + 0x270);
        uVar8 = (undefined4)((ulonglong)*(undefined8 *)(lVar5 + 0x270) >> 0x20);
        puVar6 = (undefined8 *)(lVar5 + 0x260);
      }
      uVar2 = *(undefined4 *)((longlong)puVar6 + 4);
      uVar3 = *(undefined4 *)(puVar6 + 1);
      uVar4 = *(undefined4 *)((longlong)puVar6 + 0xc);
      *(undefined4 *)(param_1 + 0x6a8) = *(undefined4 *)puVar6;
      *(undefined4 *)(param_1 + 0x6ac) = uVar2;
      *(undefined4 *)(param_1 + 0x6b0) = uVar3;
      *(undefined4 *)(param_1 + 0x6b4) = uVar4;
      *(ulonglong *)(param_1 + 0x6b8) = CONCAT44(uVar8,uVar7);
      plVar1 = *(longlong **)(param_1 + 0x3c0);
      if (plVar1 == (longlong *)0x0) {
        local_18 = DAT_14c846508;
        local_28 = DAT_14c8464f8;
        uStack_20 = DAT_14c846500;
      }
      else {
        (**(code **)(*plVar1 + 0x680))(plVar1,&local_28);
      }
      *(undefined8 *)(param_1 + 0x6d0) = local_18;
      *(undefined4 *)(param_1 + 0x6c0) = (undefined4)local_28;
      *(undefined4 *)(param_1 + 0x6c4) = local_28._4_4_;
      *(undefined4 *)(param_1 + 0x6c8) = (undefined4)uStack_20;
      *(undefined4 *)(param_1 + 0x6cc) = uStack_20._4_4_;
      lVar5 = *(longlong *)(param_1 + 0x458);
      if ((lVar5 != 0) && ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0)) {
        FUN_143ffc502(lVar5,param_1 + 0x6d8,param_1 + 0x6f0);
      }
      FUN_143ffe226(param_1);
      *(undefined1 *)(param_1 + 0x478) = 1;
      FUN_147d73772(*(undefined8 *)(param_1 + 0x470));
    }
  }
  else {
    FUN_143ffe226(param_1);
    FUN_143ff44b6(param_1);
  }
  lVar5 = FUN_1447210f0(param_1);
  if ((lVar5 != 0) && (*(longlong *)(param_1 + 0x808) != 0)) {
    FUN_14480f766(lVar5 + 0x3c8);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ffe6b8 FUN_143ffe6b8 body=2178 status=ok
// SIG undefined FUN_143ffe6b8(void)

void FUN_143ffe6b8(longlong *param_1,longlong *param_2,longlong *param_3,char param_4)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  ulonglong uVar17;
  bool bVar18;
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
  undefined4 local_80;
  uint local_7c;
  uint *local_78;
  longlong *local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *(undefined4 *)(param_3 + 1) = 0;
  plVar9 = param_1;
  if (*(int *)((longlong)param_3 + 0xc) < 0) {
    plVar9 = param_3;
    FUN_148122f88(param_3,0);
  }
  lVar15 = *param_2;
  bVar18 = lVar15 != 0;
  local_68 = lVar15;
  if ((DAT_14c950c29 & bVar18) == 1) {
    FUN_1456cec3c(lVar15);
LAB_143ffe729:
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
      if (DAT_14cad00c8 == 0) {
        local_80 = 0;
        goto LAB_143ffee94;
      }
    }
    local_7c = CONCAT31(local_7c._1_3_,1);
    if (*(int *)(lVar15 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) {
      local_80 = 0;
    }
    else {
      local_80 = 0;
      lVar14 = lVar15;
      if (*(longlong *)(*(longlong *)(lVar15 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8)
          == DAT_14cad00c8 + 0x30) goto LAB_143ffe777;
    }
  }
  else {
    if (lVar15 != 0) goto LAB_143ffe729;
    local_80 = (undefined4)CONCAT71((int7)((ulonglong)plVar9 >> 8),1);
    if (DAT_14cad00c8 == 0) {
LAB_143ffee94:
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
      lVar14 = 0;
      lVar15 = local_68;
    }
    else {
      lVar14 = 0;
    }
LAB_143ffe777:
    local_7c = CONCAT31(local_7c._1_3_,bVar18);
    if (lVar14 == DAT_14cad00c8) {
      if (param_4 == '\0') {
        if ((lVar15 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        iVar2 = (int)param_1[0x4d];
        if (iVar2 == 0) {
          uVar13 = 1;
          uVar17 = 0;
          iVar16 = 0;
          iVar3 = 0;
        }
        else {
          puVar6 = (uint *)param_1[0x4c];
          if ((uint *)param_1[0x4c] == (uint *)0x0) {
            puVar6 = (uint *)(param_1 + 0x4a);
          }
          uVar11 = *puVar6;
          if (uVar11 == 0) {
            iVar3 = iVar2 + 0x1e;
            if (-1 < iVar2 + -1) {
              iVar3 = iVar2 + -1;
            }
            uVar17 = 0;
            uVar13 = (ulonglong)(uint)(iVar3 >> 5);
            if (iVar3 >> 5 < 1) {
              uVar13 = uVar17;
            }
            iVar16 = 0;
            do {
              if (uVar13 == uVar17) goto LAB_143ffe8a7;
              iVar16 = iVar16 + 0x20;
              uVar11 = puVar6[uVar17 + 1];
              uVar17 = uVar17 + 1;
            } while (uVar11 == 0);
          }
          else {
            uVar17 = 0;
            iVar16 = 0;
          }
          uVar13 = (ulonglong)(-uVar11 & uVar11);
          uVar1 = uVar13 * 2 + 1;
          lVar15 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          iVar3 = (iVar16 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
          if (iVar2 <= iVar3) {
            iVar3 = iVar2;
          }
        }
        if (iVar3 != iVar2) {
          uVar11 = 0xffffffff;
          iVar4 = iVar2;
          local_70 = param_3;
          do {
            lVar15 = *(longlong *)(param_1[0x48] + (longlong)iVar3 * 0x10);
            if (lVar15 != 0) {
              iVar3 = (int)param_3[1];
              *(uint *)(param_3 + 1) = iVar3 + 1U;
              if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
                local_7c = uVar11;
                FUN_1456fde5c(param_3,iVar3);
                param_3 = local_70;
                uVar11 = local_7c;
              }
              *(longlong *)(*param_3 + (longlong)iVar3 * 8) = lVar15;
              iVar4 = (int)param_1[0x4d];
            }
            uVar11 = uVar11 & ~(uint)uVar13;
            puVar6 = (uint *)param_1[0x4c];
            if ((uint *)param_1[0x4c] == (uint *)0x0) {
              puVar6 = (uint *)(param_1 + 0x4a);
            }
            iVar3 = (int)uVar17;
            lVar15 = (longlong)iVar3;
            uVar10 = puVar6[lVar15] & uVar11;
            if (uVar10 == 0) {
              iVar7 = iVar4 + 0x1e;
              if (-1 < iVar4 + -1) {
                iVar7 = iVar4 + -1;
              }
              iVar7 = iVar7 >> 5;
              iVar16 = iVar16 + 0x20;
              iVar8 = iVar7;
              if (iVar7 < iVar3) {
                iVar8 = iVar3;
              }
              if (iVar3 < iVar7) {
                lVar14 = 0;
                do {
                  uVar10 = puVar6[lVar15 + lVar14 + 1];
                  if (uVar10 != 0) {
                    uVar17 = (ulonglong)(iVar3 + (int)lVar14 + 1);
                    uVar11 = 0xffffffff;
                    goto LAB_143ffed2a;
                  }
                  iVar16 = iVar16 + 0x20;
                  lVar14 = lVar14 + 1;
                } while (iVar8 - lVar15 != lVar14);
                uVar11 = 0xffffffff;
                iVar3 = iVar8;
              }
              uVar17 = (ulonglong)(iVar3 + 1);
              iVar3 = iVar4;
            }
            else {
LAB_143ffed2a:
              uVar13 = (ulonglong)(-uVar10 & uVar10);
              uVar1 = uVar13 * 2 + 1;
              lVar15 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
                }
              }
              iVar3 = (iVar16 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
              if (iVar4 <= iVar3) {
                iVar3 = iVar4;
              }
            }
          } while (iVar3 != iVar2);
        }
      }
      else {
        local_58 = lVar15;
        if ((lVar15 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar15);
        }
        FUN_144001632(param_1,&local_58,param_3);
      }
      goto LAB_143ffe8a7;
    }
  }
  if (param_4 == '\0') {
    if ((DAT_14c950c29 & (byte)local_7c) == 1) {
      FUN_1456cec3c(lVar15);
    }
    puVar6 = (uint *)(param_1 + 0x4a);
    iVar2 = (int)param_1[0x4d];
    if (iVar2 == 0) {
      uVar17 = 1;
      uVar13 = 0;
      iVar16 = 0;
      iVar3 = 0;
    }
    else {
      puVar5 = (uint *)param_1[0x4c];
      if ((uint *)param_1[0x4c] == (uint *)0x0) {
        puVar5 = puVar6;
      }
      uVar11 = *puVar5;
      if (uVar11 == 0) {
        iVar3 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar3 = iVar2 + -1;
        }
        uVar13 = 0;
        uVar17 = (ulonglong)(uint)(iVar3 >> 5);
        if (iVar3 >> 5 < 1) {
          uVar17 = uVar13;
        }
        iVar16 = 0;
        do {
          if (uVar17 == uVar13) goto LAB_143ffe8a7;
          iVar16 = iVar16 + 0x20;
          uVar11 = puVar5[uVar13 + 1];
          uVar13 = uVar13 + 1;
        } while (uVar11 == 0);
      }
      else {
        uVar13 = 0;
        iVar16 = 0;
      }
      uVar17 = (ulonglong)(-uVar11 & uVar11);
      uVar1 = uVar17 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar3 = (iVar16 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar3) {
        iVar3 = iVar2;
      }
    }
    if (iVar3 != iVar2) {
      uVar11 = 0xffffffff;
      uVar12 = local_80;
      local_78 = puVar6;
      do {
        lVar15 = *(longlong *)(param_1[0x48] + (longlong)iVar3 * 0x10);
        if (lVar15 != 0) {
          if ((DAT_14c950c29 & (byte)local_7c) == 1) {
            FUN_1456cec3c(local_68);
            puVar6 = local_78;
            uVar12 = local_80;
LAB_143ffe913:
            if (DAT_14cad00c8 == 0) {
              local_50 = FUN_144a7958c;
              local_90 = FUN_14081d0ea;
              local_98 = FUN_14081d0ea;
              local_a0 = &local_50;
              local_a8 = &LAB_1479b7a0c;
              local_b0 = &LAB_1463b464e;
              local_b8 = L"Engine";
              local_c0 = 0;
              local_c8 = 0x10000005;
              local_d0 = 8;
              local_d8 = 0x110;
              FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
              puVar6 = local_78;
              uVar12 = local_80;
              if (DAT_14cad00c8 == 0) goto LAB_143ffe935;
            }
            if (*(int *)(local_68 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) goto LAB_143ffe935;
            lVar14 = 0;
            if (*(longlong *)
                 (*(longlong *)(local_68 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) ==
                DAT_14cad00c8 + 0x30) {
              lVar14 = local_68;
            }
          }
          else {
            if ((char)uVar12 == '\0') goto LAB_143ffe913;
LAB_143ffe935:
            lVar14 = 0;
          }
          if ((*(int *)(lVar14 + 0x38) <= *(int *)(*(longlong *)(lVar15 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar14 + 0x38) * 8) == lVar14 + 0x30)) {
            iVar3 = (int)param_3[1];
            *(uint *)(param_3 + 1) = iVar3 + 1U;
            if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
              local_70 = param_3;
              FUN_1456fde5c(param_3,iVar3);
              puVar6 = local_78;
              param_3 = local_70;
            }
            *(longlong *)(*param_3 + (longlong)iVar3 * 8) = lVar15;
            uVar12 = local_80;
          }
        }
        uVar11 = uVar11 & ~(uint)uVar17;
        puVar5 = (uint *)param_1[0x4c];
        if ((uint *)param_1[0x4c] == (uint *)0x0) {
          puVar5 = puVar6;
        }
        iVar4 = (int)param_1[0x4d];
        iVar3 = (int)uVar13;
        lVar15 = (longlong)iVar3;
        uVar10 = puVar5[lVar15] & uVar11;
        if (uVar10 == 0) {
          iVar7 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar7 = iVar4 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar16 = iVar16 + 0x20;
          iVar8 = iVar7;
          if (iVar7 < iVar3) {
            iVar8 = iVar3;
          }
          puVar6 = local_78;
          if (iVar3 < iVar7) {
            lVar14 = 0;
            do {
              uVar10 = puVar5[lVar15 + lVar14 + 1];
              if (uVar10 != 0) {
                uVar13 = (ulonglong)(iVar3 + (int)lVar14 + 1);
                uVar11 = 0xffffffff;
                goto LAB_143ffea12;
              }
              iVar16 = iVar16 + 0x20;
              lVar14 = lVar14 + 1;
            } while (iVar8 - lVar15 != lVar14);
            uVar11 = 0xffffffff;
            iVar3 = iVar8;
          }
          uVar13 = (ulonglong)(iVar3 + 1);
          uVar12 = local_80;
          iVar3 = iVar4;
        }
        else {
LAB_143ffea12:
          uVar17 = (ulonglong)(-uVar10 & uVar10);
          uVar1 = uVar17 * 2 + 1;
          lVar15 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          iVar3 = (iVar16 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
          if (iVar4 <= iVar3) {
            iVar3 = iVar4;
          }
        }
      } while (iVar3 != iVar2);
    }
  }
  else {
    local_60 = lVar15;
    if (((byte)local_7c & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar15);
    }
    FUN_144001a6e(param_1,&local_60,param_3);
  }
LAB_143ffe8a7:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ffef3c FUN_143ffef3c body=5483 status=ok
// SIG undefined FUN_143ffef3c(void)

void FUN_143ffef3c(code *param_1,code *param_2,wchar_t *param_3)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  code *pcVar10;
  int iVar11;
  bool bVar12;
  undefined1 auStack_148 [32];
  undefined8 *local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined2 *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  code **local_f0;
  undefined1 *local_e8;
  code *local_e0;
  undefined8 local_d0;
  int local_c8;
  undefined8 local_c0;
  code **local_b8;
  ulonglong uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_90;
  code *local_88;
  undefined4 local_80;
  byte local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (((param_2 == (code *)0x0) || ((*(uint *)(param_2 + 8) >> 0x1e & 1) != 0)) ||
     (cVar4 = FUN_140940f38(param_2), cVar4 != '\0')) goto LAB_143ffffd0;
  pcVar10 = param_2 + 0x370;
  if (*(code **)(param_2 + 0x380) != (code *)0x0) {
    pcVar10 = *(code **)(param_2 + 0x380);
  }
  if ((longlong)*(int *)(param_2 + 0x388) != 0) {
    param_3 = (wchar_t *)0x0;
    do {
      if (*(longlong *)(pcVar10 + (longlong)param_3) == DAT_14cb9ea00) goto LAB_143ffffd0;
      param_3 = (wchar_t *)((longlong)param_3 + 8);
    } while ((code **)((longlong)*(int *)(param_2 + 0x388) * 8) != (code **)param_3);
  }
  if (param_1[0x5e1] == (code)0x0) {
    if (DAT_14cb5b388 == 0) {
      local_f0 = &local_88;
      local_88 = FUN_141864c34;
      local_e0 = FUN_14081d0ea;
      local_e8 = &LAB_146431698;
      local_f8 = &LAB_1486775cb;
      local_100 = &LAB_1464cee35;
      local_108 = &DAT_149e063b2;
      local_110 = 0;
      local_118 = 0x10000005;
      local_120 = 0x10;
      local_128 = (undefined8 *)CONCAT44(local_128._4_4_,0x3a20);
      param_3 = (wchar_t *)&DAT_14cb5b388;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
    }
    if ((*(int *)(DAT_14cb5b388 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) == DAT_14cb5b388 + 0x30)) {
      lVar6 = (**(code **)(*(longlong *)(param_2 + 0x10b0) + 0x28))(param_2 + 0x10b0);
      local_b8 = (code **)0x0;
      uStack_b0 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      FUN_1403de7ba(&local_b8,lVar6 + 0x78);
      if ((longlong)*(int *)(param_1 + 0x4a8) != 0) {
        plVar7 = *(longlong **)(param_1 + 0x4a0);
        plVar1 = plVar7 + *(int *)(param_1 + 0x4a8);
        do {
          if ((int)uStack_b0 != 0) {
            lVar6 = 0;
            do {
              if (*(longlong *)((longlong)local_b8 + lVar6) == *plVar7) goto LAB_143fff0cb;
              lVar6 = lVar6 + 8;
            } while ((longlong)(int)uStack_b0 << 3 != lVar6);
          }
          if ((int)uStack_a0 != 0) {
            lVar6 = 0;
            do {
              if (*(longlong *)(local_a8 + lVar6) == *plVar7) goto LAB_143fff0cb;
              lVar6 = lVar6 + 8;
            } while ((longlong)(int)uStack_a0 << 3 != lVar6);
          }
          plVar7 = plVar7 + 1;
          param_3 = (wchar_t *)local_b8;
        } while (plVar7 != plVar1);
      }
      goto LAB_143fff229;
    }
    goto LAB_143fff245;
  }
  goto LAB_143fff302;
LAB_143fff66b:
  local_c0 = 0;
  lVar6 = FUN_1447210f0(param_1);
  if (*(longlong *)(lVar6 + 0x1f0) == 0) {
    puVar8 = (undefined8 *)(lVar6 + 0x458);
  }
  else {
    puVar8 = (undefined8 *)(*(longlong *)(lVar6 + 0x1f0) + 0xf0);
  }
  uVar3 = *puVar8;
  local_d0 = (undefined8 *)0x0;
  local_c8 = 0;
  FUN_1446efa72(&local_d0,0,3,0x10);
  local_c8 = 3;
  *local_d0 = &PTR_LAB_14a1c8830;
  LOCK();
  UNLOCK();
  lVar9 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar9 == 0) {
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_d0[2] = lVar9;
  *local_d0 = &PTR_FUN_14b5af8b0;
  local_d0[3] = param_1;
  local_d0[4] = param_2;
  local_88 = (code *)0x0;
  local_80 = 0;
  FUN_14487d8d8(&local_88,&local_d0);
  local_48 = 1;
  local_128 = &local_90;
  local_90._0_4_ = (uint)local_90 & 0xffff0000;
  local_90 = CONCAT44(0xbf800000,(uint)local_90);
  FUN_1406f4044(uVar3,&local_c0,&local_88,0x3e800000);
  (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
  if (local_c8 == 0) {
LAB_143fff7b3:
    if (local_d0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_d0 != (undefined8 *)0x0) {
    (**(code **)*local_d0)(local_d0,0);
    FUN_1446efa72(&local_d0,0,0,0x10);
    local_c8 = 0;
    goto LAB_143fff7b3;
  }
  goto LAB_143fff7c9;
LAB_143fffa4d:
  local_c0 = 0;
  lVar6 = FUN_1447210f0(param_1);
  if (*(longlong *)(lVar6 + 0x1f0) == 0) {
    puVar8 = (undefined8 *)(lVar6 + 0x458);
  }
  else {
    puVar8 = (undefined8 *)(*(longlong *)(lVar6 + 0x1f0) + 0xf0);
  }
  uVar3 = *puVar8;
  local_d0 = (undefined8 *)0x0;
  local_c8 = 0;
  FUN_1446efa72(&local_d0,0,3,0x10);
  local_c8 = 3;
  *local_d0 = &PTR_LAB_14a1c8830;
  LOCK();
  UNLOCK();
  lVar9 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar9 == 0) {
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_d0[2] = lVar9;
  *local_d0 = &PTR_FUN_14b5af990;
  local_d0[3] = param_1;
  local_d0[4] = param_2;
  local_88 = (code *)0x0;
  local_80 = 0;
  FUN_14487d8d8(&local_88,&local_d0);
  local_48 = 1;
  local_128 = &local_90;
  local_90._0_4_ = (uint)local_90 & 0xffff0000;
  local_90 = CONCAT44(0xbf800000,(uint)local_90);
  FUN_1406f4044(uVar3,&local_c0,&local_88,0x3e800000);
  (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
  if (local_c8 == 0) {
LAB_143fffb95:
    if (local_d0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_d0 != (undefined8 *)0x0) {
    (**(code **)*local_d0)(local_d0,0);
    FUN_1446efa72(&local_d0,0,0,0x10);
    local_c8 = 0;
    goto LAB_143fffb95;
  }
  goto LAB_143fffbab;
LAB_143fffcbd:
  local_c0 = 0;
  lVar6 = FUN_1447210f0(param_1);
  if (*(longlong *)(lVar6 + 0x1f0) == 0) {
    puVar8 = (undefined8 *)(lVar6 + 0x458);
  }
  else {
    puVar8 = (undefined8 *)(*(longlong *)(lVar6 + 0x1f0) + 0xf0);
  }
  uVar3 = *puVar8;
  local_d0 = (undefined8 *)0x0;
  local_c8 = 0;
  FUN_1446efa72(&local_d0,0,3,0x10);
  local_c8 = 3;
  *local_d0 = &PTR_LAB_14a1c8830;
  LOCK();
  UNLOCK();
  lVar9 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar9 == 0) {
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_d0[2] = lVar9;
  *local_d0 = &PTR_FUN_14b5afa00;
  local_d0[3] = param_1;
  local_d0[4] = param_2;
  local_88 = (code *)0x0;
  local_80 = 0;
  FUN_14487d8d8(&local_88,&local_d0);
  local_48 = 1;
  local_128 = &local_90;
  local_90._0_4_ = (uint)local_90 & 0xffff0000;
  local_90 = CONCAT44(0xbf800000,(uint)local_90);
  FUN_1406f4044(uVar3,&local_c0,&local_88,0x3e800000);
  (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
  if (local_c8 == 0) {
LAB_143fffe05:
    if (local_d0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_d0 != (undefined8 *)0x0) {
    (**(code **)*local_d0)(local_d0,0);
    FUN_1446efa72(&local_d0,0,0,0x10);
    local_c8 = 0;
    goto LAB_143fffe05;
  }
  goto LAB_143fffe1b;
LAB_143fff0cb:
  local_c0 = 0;
  lVar6 = FUN_1447210f0(param_1);
  if (*(longlong *)(lVar6 + 0x1f0) == 0) {
    puVar8 = (undefined8 *)(lVar6 + 0x458);
  }
  else {
    puVar8 = (undefined8 *)(*(longlong *)(lVar6 + 0x1f0) + 0xf0);
  }
  uVar3 = *puVar8;
  local_d0 = (undefined8 *)0x0;
  local_c8 = 0;
  FUN_1446efa72(&local_d0,0,3,0x10);
  local_c8 = 3;
  *local_d0 = &PTR_LAB_14a1c8830;
  LOCK();
  UNLOCK();
  lVar9 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar9 == 0) {
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_d0[2] = lVar9;
  *local_d0 = &PTR_FUN_14b5af7d0;
  local_d0[3] = param_1;
  local_d0[4] = param_2;
  local_88 = (code *)0x0;
  local_80 = 0;
  FUN_14487d8d8(&local_88,&local_d0);
  local_48 = 1;
  local_128 = &local_90;
  local_90._0_4_ = (uint)local_90 & 0xffff0000;
  local_90 = CONCAT44(0xbf800000,(uint)local_90);
  param_3 = (wchar_t *)&local_88;
  FUN_1406f4044(uVar3,&local_c0,&local_88,0x3e800000);
  (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
  if (local_c8 == 0) {
LAB_143fff213:
    if (local_d0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_d0 != (undefined8 *)0x0) {
    (**(code **)*local_d0)(local_d0,0);
    param_3 = (wchar_t *)0x0;
    FUN_1446efa72(&local_d0,0,0,0x10);
    local_c8 = 0;
    goto LAB_143fff213;
  }
LAB_143fff229:
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != (code **)0x0) {
    FUN_1400020a8();
  }
LAB_143fff245:
  if (DAT_14cb99558 == 0) {
    local_f0 = &local_88;
    local_88 = FUN_141030f22;
    local_e0 = FUN_14081d0ea;
    local_e8 = &LAB_1463b216c;
    local_f8 = &LAB_148ad2965;
    local_100 = &LAB_14658d853;
    local_108 = &DAT_149e063b2;
    local_110 = 0;
    local_118 = 0x10000005;
    local_120 = 8;
    local_128 = (undefined8 *)CONCAT44(local_128._4_4_,0x438);
    param_3 = (wchar_t *)&DAT_14cb99558;
    FUN_14081cfa3(L"/Script/ChaosVehicles",L"WheeledVehiclePawn",&DAT_14cb99558,&DAT_148ad2964);
  }
  if ((*(int *)(DAT_14cb99558 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cb99558 + 0x38) * 8) == DAT_14cb99558 + 0x30)) {
    uVar2 = *(uint *)(param_2 + 0xc);
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar5 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar11 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar12) {
        param_3 = L"UObject serial numbers overflowed (trying to allocate serial number %d).";
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar11);
      }
      LOCK();
      iVar5 = *(int *)(lVar6 + 0x10);
      bVar12 = iVar5 == 0;
      if (bVar12) {
        *(int *)(lVar6 + 0x10) = iVar11;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar5 = iVar11;
      }
    }
    iVar11 = *(int *)(param_1 + 2000);
    *(uint *)(param_1 + 2000) = iVar11 + 1U;
    if (*(uint *)(param_1 + 0x7d4) < iVar11 + 1U) {
      FUN_140585342(param_1 + 0x7c8,iVar11);
    }
    *(ulonglong *)(*(longlong *)(param_1 + 0x7c8) + (longlong)iVar11 * 8) = CONCAT44(iVar5,uVar2);
    FUN_143ff5592(param_1,param_2,CONCAT71((int7)((ulonglong)param_3 >> 8),param_1[0x5e1]) ^ 1);
  }
LAB_143fff302:
  if (param_1[0x5e2] == (code)0x0) {
    if (DAT_14cb5b388 == 0) {
      local_f0 = &local_88;
      local_88 = FUN_141864c34;
      local_e0 = FUN_14081d0ea;
      local_e8 = &LAB_146431698;
      local_f8 = &LAB_1486775cb;
      local_100 = &LAB_1464cee35;
      local_108 = &DAT_149e063b2;
      local_110 = 0;
      local_118 = 0x10000005;
      local_120 = 0x10;
      local_128 = (undefined8 *)CONCAT44(local_128._4_4_,0x3a20);
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
    }
    if ((*(int *)(DAT_14cb5b388 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) == DAT_14cb5b388 + 0x30)) {
      lVar6 = (**(code **)(*(longlong *)(param_2 + 0x10b0) + 0x28))(param_2 + 0x10b0);
      local_b8 = (code **)0x0;
      uStack_b0 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      FUN_1403de7ba(&local_b8,lVar6 + 0x78);
      if ((longlong)*(int *)(param_1 + 0x508) != 0) {
        plVar7 = *(longlong **)(param_1 + 0x500);
        plVar1 = plVar7 + *(int *)(param_1 + 0x508);
        do {
          if ((int)uStack_b0 != 0) {
            lVar6 = 0;
            do {
              if (*(longlong *)((longlong)local_b8 + lVar6) == *plVar7) goto LAB_143fff559;
              lVar6 = lVar6 + 8;
            } while ((longlong)(int)uStack_b0 << 3 != lVar6);
          }
          if ((int)uStack_a0 != 0) {
            lVar6 = 0;
            do {
              if (*(longlong *)(local_a8 + lVar6) == *plVar7) goto LAB_143fff559;
              lVar6 = lVar6 + 8;
            } while ((longlong)(int)uStack_a0 << 3 != lVar6);
          }
          plVar7 = plVar7 + 1;
        } while (plVar7 != plVar1);
        local_c0 = 0;
        lVar6 = FUN_1447210f0(param_1);
        if (*(longlong *)(lVar6 + 0x1f0) == 0) {
          puVar8 = (undefined8 *)(lVar6 + 0x458);
        }
        else {
          puVar8 = (undefined8 *)(*(longlong *)(lVar6 + 0x1f0) + 0xf0);
        }
        uVar3 = *puVar8;
        local_d0 = (undefined8 *)0x0;
        local_c8 = 0;
        FUN_1446efa72(&local_d0,0,3,0x10);
        local_c8 = 3;
        *local_d0 = &PTR_LAB_14a1c8830;
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 1;
        lVar6 = DAT_14c758608 + 1;
        if (lVar9 == 0) {
          LOCK();
          UNLOCK();
          lVar9 = DAT_14c758608 + 2;
          lVar6 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar6;
        local_d0[2] = lVar9;
        *local_d0 = &PTR_FUN_14b5af840;
        local_d0[3] = param_1;
        local_d0[4] = param_2;
        local_88 = (code *)0x0;
        local_80 = 0;
        FUN_14487d8d8(&local_88,&local_d0);
        local_48 = 1;
        local_128 = &local_90;
        local_90._0_4_ = (uint)local_90 & 0xffff0000;
        local_90 = CONCAT44(0xbf800000,(uint)local_90);
        FUN_1406f4044(uVar3,&local_c0,&local_88,0x3e800000);
        (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
        if (local_c8 != 0) {
          if (local_d0 == (undefined8 *)0x0) goto LAB_143fff559;
          (**(code **)*local_d0)(local_d0,0);
          FUN_1446efa72(&local_d0,0,0,0x10);
          local_c8 = 0;
        }
        if (local_d0 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
LAB_143fff559:
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      if (local_b8 != (code **)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if (param_1[0x5e3] == (code)0x0) {
    if (DAT_14cb5b388 == 0) {
      local_f0 = &local_88;
      local_88 = FUN_141864c34;
      local_e0 = FUN_14081d0ea;
      local_e8 = &LAB_146431698;
      local_f8 = &LAB_1486775cb;
      local_100 = &LAB_1464cee35;
      local_108 = &DAT_149e063b2;
      local_110 = 0;
      local_118 = 0x10000005;
      local_120 = 0x10;
      local_128 = (undefined8 *)CONCAT44(local_128._4_4_,0x3a20);
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
    }
    if ((*(int *)(DAT_14cb5b388 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) == DAT_14cb5b388 + 0x30)) {
      lVar6 = (**(code **)(*(longlong *)(param_2 + 0x10b0) + 0x28))(param_2 + 0x10b0);
      local_b8 = (code **)0x0;
      uStack_b0 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      FUN_1403de7ba(&local_b8,lVar6 + 0x78);
      if ((longlong)*(int *)(param_1 + 0x4e8) != 0) {
        plVar7 = *(longlong **)(param_1 + 0x4e0);
        plVar1 = plVar7 + *(int *)(param_1 + 0x4e8);
        do {
          if ((int)uStack_b0 != 0) {
            lVar6 = 0;
            do {
              if (*(longlong *)((longlong)local_b8 + lVar6) == *plVar7) goto LAB_143fff66b;
              lVar6 = lVar6 + 8;
            } while ((longlong)(int)uStack_b0 << 3 != lVar6);
          }
          if ((int)uStack_a0 != 0) {
            lVar6 = 0;
            do {
              if (*(longlong *)(local_a8 + lVar6) == *plVar7) goto LAB_143fff66b;
              lVar6 = lVar6 + 8;
            } while ((longlong)(int)uStack_a0 << 3 != lVar6);
          }
          plVar7 = plVar7 + 1;
        } while (plVar7 != plVar1);
      }
LAB_143fff7c9:
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      if (local_b8 != (code **)0x0) {
        FUN_1400020a8();
      }
    }
    lVar6 = FUN_140a3aef4();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
         ) == lVar6 + 0x30)) {
      local_90 = 0;
      lVar6 = FUN_1447210f0(param_1);
      if (*(longlong *)(lVar6 + 0x1f0) == 0) {
        puVar8 = (undefined8 *)(lVar6 + 0x458);
      }
      else {
        puVar8 = (undefined8 *)(*(longlong *)(lVar6 + 0x1f0) + 0xf0);
      }
      uVar3 = *puVar8;
      local_b8 = (code **)0x0;
      uStack_b0 = uStack_b0 & 0xffffffff00000000;
      FUN_1446efa72(&local_b8,0,3,0x10);
      uStack_b0 = CONCAT44(uStack_b0._4_4_,3);
      *local_b8 = (code *)&PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      pcVar10 = (code *)(DAT_14c758608 + 1);
      lVar6 = DAT_14c758608 + 1;
      if (pcVar10 == (code *)0x0) {
        LOCK();
        UNLOCK();
        pcVar10 = (code *)(DAT_14c758608 + 2);
        lVar6 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar6;
      local_b8[2] = pcVar10;
      *local_b8 = (code *)&PTR_FUN_14b5af920;
      local_b8[3] = param_1;
      local_b8[4] = param_2;
      local_88 = (code *)0x0;
      local_80 = 0;
      FUN_14487d8d8(&local_88,&local_b8);
      local_48 = 1;
      local_128 = &local_d0;
      local_d0._0_4_ = (uint)local_d0 & 0xffff0000;
      local_d0 = (undefined8 *)CONCAT44(0xbf800000,(uint)local_d0);
      FUN_1406f4044(uVar3,&local_90,&local_88,0x3e800000);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
      if ((int)uStack_b0 != 0) {
        if (local_b8 == (code **)0x0) goto LAB_143fff96f;
        (**(code **)*local_b8)(local_b8,0);
        FUN_1446efa72(&local_b8,0,0,0x10);
        uStack_b0 = uStack_b0 & 0xffffffff00000000;
      }
      if (local_b8 != (code **)0x0) {
        FUN_1400020a8();
      }
    }
LAB_143fff96f:
    lVar6 = FUN_1412308c8();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
         ) == lVar6 + 0x30)) {
      lVar6 = (**(code **)(*(longlong *)(param_2 + 0x390) + 0x28))(param_2 + 0x390);
      local_b8 = (code **)0x0;
      uStack_b0 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      FUN_1403de7ba(&local_b8,lVar6 + 0x78);
      if ((longlong)*(int *)(param_1 + 0x4e8) != 0) {
        plVar7 = *(longlong **)(param_1 + 0x4e0);
        plVar1 = plVar7 + *(int *)(param_1 + 0x4e8);
        do {
          if ((int)uStack_b0 != 0) {
            lVar6 = 0;
            do {
              if (*(longlong *)((longlong)local_b8 + lVar6) == *plVar7) goto LAB_143fffa4d;
              lVar6 = lVar6 + 8;
            } while ((longlong)(int)uStack_b0 << 3 != lVar6);
          }
          if ((int)uStack_a0 != 0) {
            lVar6 = 0;
            do {
              if (*(longlong *)(local_a8 + lVar6) == *plVar7) goto LAB_143fffa4d;
              lVar6 = lVar6 + 8;
            } while ((longlong)(int)uStack_a0 << 3 != lVar6);
          }
          plVar7 = plVar7 + 1;
        } while (plVar7 != plVar1);
      }
LAB_143fffbab:
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      if (local_b8 != (code **)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if (param_1[0x5e4] == (code)0x0) {
    if (DAT_14cb5b388 == 0) {
      local_f0 = &local_88;
      local_88 = FUN_141864c34;
      local_e0 = FUN_14081d0ea;
      local_e8 = &LAB_146431698;
      local_f8 = &LAB_1486775cb;
      local_100 = &LAB_1464cee35;
      local_108 = &DAT_149e063b2;
      local_110 = 0;
      local_118 = 0x10000005;
      local_120 = 0x10;
      local_128 = (undefined8 *)CONCAT44(local_128._4_4_,0x3a20);
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
    }
    if ((*(int *)(DAT_14cb5b388 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) == DAT_14cb5b388 + 0x30)) {
      lVar6 = (**(code **)(*(longlong *)(param_2 + 0x10b0) + 0x28))(param_2 + 0x10b0);
      local_a8 = 0;
      uStack_a0 = 0;
      local_b8 = (code **)0x0;
      uStack_b0 = 0;
      FUN_1403de7ba(&local_b8,lVar6 + 0x78);
      if ((longlong)*(int *)(param_1 + 0x4c8) != 0) {
        plVar7 = *(longlong **)(param_1 + 0x4c0);
        plVar1 = plVar7 + *(int *)(param_1 + 0x4c8);
        do {
          if ((int)uStack_b0 != 0) {
            lVar6 = 0;
            do {
              if (*(longlong *)((longlong)local_b8 + lVar6) == *plVar7) goto LAB_143fffcbd;
              lVar6 = lVar6 + 8;
            } while ((longlong)(int)uStack_b0 << 3 != lVar6);
          }
          if ((int)uStack_a0 != 0) {
            lVar6 = 0;
            do {
              if (*(longlong *)(local_a8 + lVar6) == *plVar7) goto LAB_143fffcbd;
              lVar6 = lVar6 + 8;
            } while ((longlong)(int)uStack_a0 << 3 != lVar6);
          }
          plVar7 = plVar7 + 1;
        } while (plVar7 != plVar1);
      }
LAB_143fffe1b:
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      if (local_b8 != (code **)0x0) {
        FUN_1400020a8();
      }
    }
    lVar6 = FUN_140aed36c();
    if (((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) &&
       (cVar4 = FUN_143ff3e10(param_1,param_2), cVar4 != '\0')) {
      local_90 = 0;
      lVar6 = FUN_1447210f0(param_1);
      if (*(longlong *)(lVar6 + 0x1f0) == 0) {
        puVar8 = (undefined8 *)(lVar6 + 0x458);
      }
      else {
        puVar8 = (undefined8 *)(*(longlong *)(lVar6 + 0x1f0) + 0xf0);
      }
      uVar3 = *puVar8;
      local_b8 = (code **)0x0;
      uStack_b0 = uStack_b0 & 0xffffffff00000000;
      FUN_1446efa72(&local_b8,0,3,0x10);
      uStack_b0 = CONCAT44(uStack_b0._4_4_,3);
      *local_b8 = (code *)&PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      pcVar10 = (code *)(DAT_14c758608 + 1);
      lVar6 = DAT_14c758608 + 1;
      if (pcVar10 == (code *)0x0) {
        LOCK();
        UNLOCK();
        pcVar10 = (code *)(DAT_14c758608 + 2);
        lVar6 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar6;
      local_b8[2] = pcVar10;
      *local_b8 = (code *)&PTR_FUN_14b5afa70;
      local_b8[3] = param_1;
      local_b8[4] = param_2;
      local_88 = (code *)0x0;
      local_80 = 0;
      FUN_14487d8d8(&local_88,&local_b8);
      local_48 = 1;
      local_128 = &local_d0;
      local_d0._0_4_ = (uint)local_d0 & 0xffff0000;
      local_d0 = (undefined8 *)CONCAT44(0xbf800000,(uint)local_d0);
      FUN_1406f4044(uVar3,&local_90,&local_88,0x3e800000);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
      if ((int)uStack_b0 != 0) {
        if (local_b8 == (code **)0x0) goto LAB_143ffffd0;
        (**(code **)*local_b8)(local_b8,0);
        FUN_1446efa72(&local_b8,0,0,0x10);
        uStack_b0 = uStack_b0 & 0xffffffff00000000;
      }
      if (local_b8 != (code **)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_143ffffd0:
  if ((local_38 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440004a8 FUN_1440004a8 body=165 status=ok
// SIG undefined FUN_1440004a8(void)

void FUN_1440004a8(undefined4 param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb9ea38) {
    FUN_144b3d300(&DAT_14cb9ea38);
    if (DAT_14cb9ea38 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14cb9ea30 =
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.LumenScene.FastCameraMode",1);
      _Init_thread_footer(&DAT_14cb9ea38);
    }
  }
  if (DAT_14cb9ea30 != 0) {
    FUN_140635eb8(DAT_14cb9ea30,param_1,0xd000000,0);
    return;
  }
  return;
}



// FUNCTION 14400054e FUN_14400054e body=1935 status=ok
// SIG undefined FUN_14400054e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14400054e(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  bool bVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  undefined4 local_110;
  undefined1 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined1 local_e8 [24];
  undefined1 local_d0 [24];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined2 local_88;
  byte local_86;
  undefined1 local_85;
  undefined4 local_84;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (((((*(int *)((longlong)param_1 + 0x3c) == 0) ||
        (uVar1 = *(uint *)(param_1 + 7), (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1)) ||
      ((plVar9 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar9 == (longlong *)0x0 || ((int)plVar9[2] != *(int *)((longlong)param_1 + 0x3c))))) ||
     ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)) {
    if (param_2 == (longlong *)0x0) goto LAB_1440005f2;
  }
  else {
    if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
      lVar10 = *plVar9;
    }
    else {
      lVar10 = 0;
    }
    if ((param_2 == (longlong *)0x0) || (*(char *)(lVar10 + 0x478) != '\0')) goto LAB_1440005f2;
  }
  if (((*(byte *)(param_2 + 0x84) & 2) == 0) ||
     (cVar3 = (**(code **)(*param_2 + 0x6c8))(param_2), cVar3 == '\0')) goto LAB_1440005f2;
  FUN_1440004a8(1);
  FUN_148b76af6(param_1,param_2);
  if ((((*(int *)((longlong)param_1 + 0x44) == 0) ||
       (uVar1 = *(uint *)(param_1 + 8), (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1)) ||
     (((lVar10 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar10 == 0 ||
       (*(int *)(lVar10 + 0x10) != *(int *)((longlong)param_1 + 0x44))) ||
      ((*(uint *)(lVar10 + 8) & 0x10200000) != 0)))) goto LAB_1440005f2;
  FUN_145ac59b2(param_1);
  if (*(int *)((longlong)param_1 + 0x44) == 0) {
LAB_144000a02:
    uVar5 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 8);
    uVar5 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar8 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar8 == (undefined8 *)0x0) ||
         ((*(int *)(puVar8 + 2) != *(int *)((longlong)param_1 + 0x44) ||
          ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)))) goto LAB_144000a02;
      uVar5 = *puVar8;
    }
  }
  FUN_148b76282(uVar5,local_d0,local_e8);
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_86 = local_86 & 0xe0;
  local_85 = 0;
  local_78 = 0;
  local_68 = (longlong *)0x0;
  local_88 = 0x101;
  local_84 = 0x48;
  uVar5 = (**(code **)(*param_1 + 0x180))(param_1);
  uVar6 = FUN_145a88a8e();
  local_118 = &local_b8;
  lVar10 = FUN_141137228(uVar5,uVar6,local_d0,local_e8);
  if (lVar10 == 0) {
    param_1[7] = 0;
  }
  else {
    uVar1 = *(uint *)(lVar10 + 0xc);
    *(uint *)(param_1 + 7) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    iVar4 = *(int *)(lVar10 + 0x10);
    if (iVar4 == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar11 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar11);
      }
      LOCK();
      iVar4 = *(int *)(lVar10 + 0x10);
      bVar12 = iVar4 == 0;
      if (bVar12) {
        *(int *)(lVar10 + 0x10) = iVar11;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar4 = iVar11;
      }
      *(int *)((longlong)param_1 + 0x3c) = iVar4;
      if (iVar4 == 0) goto LAB_1440007c9;
    }
    else {
      *(int *)((longlong)param_1 + 0x3c) = iVar4;
    }
    uVar1 = *(uint *)(param_1 + 7);
    if ((((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) &&
        (plVar9 = (longlong *)
                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
        plVar9 != (longlong *)0x0)) &&
       (((int)plVar9[2] == iVar4 && ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)))) {
      if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
        lVar10 = *plVar9;
      }
      else {
        lVar10 = 0;
      }
      if (((*(int *)((longlong)param_1 + 0x54) == 0) ||
          (uVar1 = *(uint *)(param_1 + 10), (int)uVar1 < 0)) ||
         ((DAT_14c9647dc <= (int)uVar1 ||
          (((plVar9 = (longlong *)
                      ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
            plVar9 == (longlong *)0x0 || ((int)plVar9[2] != *(int *)((longlong)param_1 + 0x54))) ||
           ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)))))) {
        lVar7 = 0;
      }
      else {
        lVar7 = *plVar9;
        if (lVar7 != 0 && DAT_14c950c29 == 1) {
          FUN_1456cec3c(lVar7);
        }
      }
      bVar2 = DAT_14c950c29;
      *(longlong *)(lVar10 + 0x450) = lVar7;
      if ((param_1 != (longlong *)0x0) && ((bVar2 & 1) != 0)) {
        FUN_1456cec3c(param_1);
      }
      *(longlong **)(lVar10 + 0x458) = param_1;
      if (*(int *)((longlong)param_1 + 0x4c) == 0) {
LAB_144000c68:
        uVar5 = 0;
      }
      else {
        uVar1 = *(uint *)(param_1 + 9);
        uVar5 = 0;
        if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
          puVar8 = (undefined8 *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if ((puVar8 == (undefined8 *)0x0) ||
             ((*(int *)(puVar8 + 2) != *(int *)((longlong)param_1 + 0x4c) ||
              ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)))) goto LAB_144000c68;
          uVar5 = *puVar8;
        }
      }
      FUN_143ffcaee(param_1,uVar5);
      iVar4 = *(int *)((longlong)param_1 + 0x44);
      if (((iVar4 == 0) || (uVar1 = *(uint *)(param_1 + 8), (int)uVar1 < 0)) ||
         (DAT_14c9647dc <= (int)uVar1)) {
        if (_DAT_00000448 == 0) goto LAB_144000978;
LAB_144000c9a:
        lVar7 = 0;
LAB_144000a49:
        (**(code **)(**(longlong **)(lVar7 + 0x448) + 0x730))
                  (*(longlong **)(lVar7 + 0x448),&local_100);
        *(undefined8 *)(lVar10 + 0x7f8) = local_f0;
        *(undefined4 *)(lVar10 + 0x7e8) = local_100;
        *(undefined4 *)(lVar10 + 0x7ec) = uStack_fc;
        *(undefined4 *)(lVar10 + 0x7f0) = uStack_f8;
        *(undefined4 *)(lVar10 + 0x7f4) = uStack_f4;
      }
      else {
        plVar9 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if (((plVar9 == (longlong *)0x0) || ((int)plVar9[2] != iVar4)) ||
           ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)) {
          lVar7 = 0;
        }
        else {
          lVar7 = *plVar9;
        }
        if (*(longlong *)(lVar7 + 0x448) != 0) {
          if (((DAT_14c9647dc <= (int)uVar1) ||
              (plVar9 = (longlong *)
                        ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
              plVar9 == (longlong *)0x0)) ||
             (((int)plVar9[2] != iVar4 || ((*(uint *)(plVar9 + 1) & 0x10200000) != 0))))
          goto LAB_144000c9a;
          lVar7 = *plVar9;
          goto LAB_144000a49;
        }
LAB_144000978:
        if (((*(int *)((longlong)param_1 + 0x54) == 0) ||
            (uVar1 = *(uint *)(param_1 + 10), (int)uVar1 < 0)) ||
           ((DAT_14c9647dc <= (int)uVar1 ||
            (((plVar9 = (longlong *)
                        ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
              plVar9 == (longlong *)0x0 || ((int)plVar9[2] != *(int *)((longlong)param_1 + 0x54)))
             || ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)))))) {
LAB_1440009d8:
          puVar8 = &DAT_14c8464e0;
          uVar13 = (undefined4)DAT_14c8464f0;
          uVar14 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
        }
        else {
          if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
            lVar7 = *plVar9;
          }
          else {
            lVar7 = 0;
          }
          lVar7 = *(longlong *)(lVar7 + 0x1c8);
          if (lVar7 == 0) goto LAB_1440009d8;
          uVar13 = (undefined4)*(undefined8 *)(lVar7 + 0x270);
          uVar14 = (undefined4)((ulonglong)*(undefined8 *)(lVar7 + 0x270) >> 0x20);
          puVar8 = (undefined8 *)(lVar7 + 0x260);
        }
        uVar5 = puVar8[1];
        *(undefined8 *)(lVar10 + 0x7e8) = *puVar8;
        *(undefined8 *)(lVar10 + 0x7f0) = uVar5;
        *(ulonglong *)(lVar10 + 0x7f8) = CONCAT44(uVar14,uVar13);
      }
      if (*(int *)((longlong)param_1 + 0x44) == 0) {
LAB_144000c6f:
        plVar9 = (longlong *)0x0;
      }
      else {
        uVar1 = *(uint *)(param_1 + 8);
        plVar9 = (longlong *)0x0;
        if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
          puVar8 = (undefined8 *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if ((puVar8 == (undefined8 *)0x0) ||
             ((*(int *)(puVar8 + 2) != *(int *)((longlong)param_1 + 0x44) ||
              ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)))) goto LAB_144000c6f;
          plVar9 = (longlong *)*puVar8;
        }
      }
      local_110 = 0;
      local_10c = 1;
      local_108 = 0x40000000;
      if (*(int *)((longlong)param_1 + 0x3c) == 0) {
LAB_144000c76:
        uVar5 = 0;
      }
      else {
        uVar1 = *(uint *)(param_1 + 7);
        uVar5 = 0;
        if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
          puVar8 = (undefined8 *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if ((puVar8 == (undefined8 *)0x0) ||
             ((*(int *)(puVar8 + 2) != *(int *)((longlong)param_1 + 0x3c) ||
              ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)))) goto LAB_144000c76;
          uVar5 = *puVar8;
        }
      }
      (**(code **)(*plVar9 + 0xe38))(plVar9,uVar5,&local_110);
      if (*(int *)((longlong)param_1 + 0x3c) == 0) {
LAB_144000c7d:
        uVar5 = 0;
      }
      else {
        uVar1 = *(uint *)(param_1 + 7);
        uVar5 = 0;
        if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
          puVar8 = (undefined8 *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if ((puVar8 == (undefined8 *)0x0) ||
             ((*(int *)(puVar8 + 2) != *(int *)((longlong)param_1 + 0x3c) ||
              ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)))) goto LAB_144000c7d;
          uVar5 = *puVar8;
        }
      }
      if (*(int *)((longlong)param_1 + 0x44) == 0) {
LAB_144000c84:
        uVar6 = 0;
      }
      else {
        uVar1 = *(uint *)(param_1 + 8);
        uVar6 = 0;
        if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
          puVar8 = (undefined8 *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if ((puVar8 == (undefined8 *)0x0) ||
             ((*(int *)(puVar8 + 2) != *(int *)((longlong)param_1 + 0x44) ||
              ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)))) goto LAB_144000c84;
          uVar6 = *puVar8;
        }
      }
      FUN_143ff111c(uVar5,uVar6);
      FUN_148b76bda(param_1);
      FUN_140898514(param_1 + 0x14,1);
    }
  }
LAB_1440007c9:
  if (local_78 != 0) {
    plVar9 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar9 = local_58;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
LAB_1440005f2:
  if ((local_30 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144000cde FUN_144000cde body=291 status=ok
// SIG undefined FUN_144000cde(void)

void FUN_144000cde(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  if (((*(int *)(param_1 + 0x3c) == 0) || (uVar1 = *(uint *)(param_1 + 0x38), (int)uVar1 < 0)) ||
     (DAT_14c9647dc <= (int)uVar1)) {
LAB_144000d28:
    FUN_143ffcbb0(param_1);
    FUN_140898514(param_1 + 0xa0,0);
    return;
  }
  lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  if (((lVar6 == 0) || (*(int *)(lVar6 + 0x10) != *(int *)(param_1 + 0x3c))) ||
     ((*(uint *)(lVar6 + 8) & 0x10200000) != 0)) goto LAB_144000d28;
  FUN_1440004a8();
  iVar2 = *(int *)(param_1 + 0x3c);
  if ((char)param_2 == '\0') {
    if (iVar2 == 0) {
LAB_144000dfd:
      lVar6 = 0;
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x38);
      lVar6 = 0;
      if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
        plVar3 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if ((plVar3 == (longlong *)0x0) ||
           (((int)plVar3[2] != iVar2 || ((*(uint *)(plVar3 + 1) & 0x10200000) != 0))))
        goto LAB_144000dfd;
        lVar6 = *plVar3;
      }
    }
    if (*(char *)(lVar6 + 0x478) != '\0') {
      return;
    }
  }
  if (iVar2 != 0) {
    uVar1 = *(uint *)(param_1 + 0x38);
    uVar4 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_144000dec;
    puVar5 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar5 != (undefined8 *)0x0) &&
       ((*(int *)(puVar5 + 2) == iVar2 && ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)))) {
      uVar4 = *puVar5;
      goto LAB_144000dec;
    }
  }
  uVar4 = 0;
LAB_144000dec:
  FUN_143ffe560(uVar4,param_2);
  return;
}



// FUNCTION 144000e02 FUN_144000e02 body=163 status=ok
// SIG undefined FUN_144000e02(void)

void FUN_144000e02(longlong param_1,double *param_2)

{
  double dVar1;
  uint uVar2;
  longlong *plVar3;
  
  if (((*(int *)(param_1 + 0x3c) != 0) && (uVar2 = *(uint *)(param_1 + 0x38), -1 < (int)uVar2)) &&
     ((int)uVar2 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(param_1 + 0x3c))) {
      dVar1 = param_2[1];
      if (((*(uint *)(plVar3 + 1) & 0x10200000) == 0) &&
         ((plVar3 = (longlong *)*plVar3, plVar3 != (longlong *)0x0 && ((char)plVar3[0x8f] == '\0')))
         ) {
        (**(code **)(*plVar3 + 0x7b0))(plVar3,(float)*param_2);
                    /* WARNING: Could not recover jumptable at 0x000144000ea2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x7a8))(plVar3,(float)dVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 144000ea6 FUN_144000ea6 body=163 status=ok
// SIG undefined FUN_144000ea6(void)

void FUN_144000ea6(longlong param_1,double *param_2)

{
  double dVar1;
  uint uVar2;
  longlong *plVar3;
  
  if (((*(int *)(param_1 + 0x3c) != 0) && (uVar2 = *(uint *)(param_1 + 0x38), -1 < (int)uVar2)) &&
     ((int)uVar2 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(param_1 + 0x3c))) {
      dVar1 = param_2[1];
      if (((*(uint *)(plVar3 + 1) & 0x10200000) == 0) &&
         ((plVar3 = (longlong *)*plVar3, plVar3 != (longlong *)0x0 && ((char)plVar3[0x8f] == '\0')))
         ) {
        (**(code **)(*plVar3 + 0x7c0))(plVar3,(float)*param_2);
                    /* WARNING: Could not recover jumptable at 0x000144000f46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x7c8))(plVar3,(float)dVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 144000fcc FUN_144000fcc body=445 status=ok
// SIG undefined FUN_144000fcc(void)

void FUN_144000fcc(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  double local_70;
  double local_68;
  double local_60;
  longlong local_58;
  longlong lStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((((((*(int *)(param_1 + 0x3c) != 0) && (uVar1 = *(uint *)(param_1 + 0x38), -1 < (int)uVar1))
        && ((int)uVar1 < DAT_14c9647dc)) &&
       ((plVar4 = (longlong *)
                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
        plVar4 != (longlong *)0x0 && ((int)plVar4[2] == *(int *)(param_1 + 0x3c))))) &&
      (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 &&
       ((lVar2 = *plVar4, lVar2 != 0 && (lVar3 = *(longlong *)(lVar2 + 0x458), lVar3 != 0)))))) &&
     ((*(uint *)(lVar3 + 8) >> 0x1e & 1) == 0)) {
    FUN_143ffc502(lVar3,lVar2 + 0x6d8,lVar2 + 0x6f0);
    local_88 = *(undefined4 *)(lVar2 + 0x6d8);
    uStack_84 = *(undefined4 *)(lVar2 + 0x6dc);
    uStack_80 = *(undefined4 *)(lVar2 + 0x6e0);
    uStack_7c = *(undefined4 *)(lVar2 + 0x6e4);
    local_78 = *(undefined8 *)(lVar2 + 0x6e8);
    FUN_143ff1654(lVar2,&local_70);
    plVar4 = *(longlong **)(lVar2 + 0x1c8);
    if (plVar4 != (longlong *)0x0) {
      local_20 = (local_60 + (double)plVar4[0x4e]) - (double)plVar4[0x4e];
      local_28 = (local_68 + (double)plVar4[0x4d]) - (double)plVar4[0x4d];
      local_30 = (local_70 + (double)plVar4[0x4c]) - (double)plVar4[0x4c];
      local_58 = plVar4[0x48];
      lStack_50 = plVar4[0x49];
      local_48 = (undefined4)plVar4[0x4a];
      uStack_44 = *(undefined4 *)((longlong)plVar4 + 0x254);
      uStack_40 = (undefined4)plVar4[0x4b];
      uStack_3c = *(undefined4 *)((longlong)plVar4 + 0x25c);
      local_98 = 0;
      local_a0 = 0;
      local_a8 = 0;
      (**(code **)(*plVar4 + 0x510))(plVar4,&local_30,&local_58,0);
    }
    plVar4 = (longlong *)FUN_143ffb7fe(lVar2);
    (**(code **)(*plVar4 + 0x688))(plVar4,lVar2 + 0x6f0,1);
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14400118a FUN_14400118a body=48 status=ok
// SIG undefined FUN_14400118a(void)

longlong FUN_14400118a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_14163d78a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440011ba FUN_1440011ba body=29 status=ok
// SIG undefined FUN_1440011ba(void)

undefined8 FUN_1440011ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144001360 FUN_144001360 body=101 status=ok
// SIG undefined FUN_144001360(void)

void FUN_144001360(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5af760;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1440013c6 FUN_1440013c6 body=101 status=ok
// SIG undefined FUN_1440013c6(void)

void FUN_1440013c6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5af760;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14400142c FUN_14400142c body=134 status=ok
// SIG undefined FUN_14400142c(void)

void FUN_14400142c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a3a3510;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b5af760;
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
                    /* WARNING: Could not recover jumptable at 0x0001440014a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144001514 FUN_144001514 body=284 status=ok
// SIG undefined FUN_144001514(void)

undefined8 FUN_144001514(longlong param_1,undefined8 param_2)

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
    if (iVar1 == 2) goto LAB_14400162a;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14400162a;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_14400162a:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440015dd;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_1440015dd;
    }
  }
  uVar6 = 0;
LAB_1440015dd:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144001632 FUN_144001632 body=1083 status=ok
// SIG undefined FUN_144001632(void)

void FUN_144001632(longlong param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  uint uVar5;
  uint *puVar6;
  longlong lVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  undefined4 local_190;
  undefined4 local_188;
  undefined8 local_180;
  wchar_t *local_178;
  code *local_170;
  undefined1 *local_168;
  code **local_160;
  code *local_158;
  code *local_150;
  uint *local_140;
  ulonglong local_138;
  longlong *local_130;
  longlong local_128;
  code *local_120;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  puVar13 = (uint *)(param_1 + 0x250);
  uVar11 = *(uint *)(param_1 + 0x268);
  uVar14 = (ulonglong)uVar11;
  if (uVar11 == 0) {
    uVar16 = 1;
    uVar18 = 0;
    iVar12 = 0;
    uVar5 = 0;
  }
  else {
    puVar6 = *(uint **)(param_1 + 0x260);
    if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
      puVar6 = puVar13;
    }
    uVar5 = *puVar6;
    if (uVar5 == 0) {
      iVar12 = uVar11 + 0x1e;
      if (-1 < (int)(uVar11 - 1)) {
        iVar12 = uVar11 - 1;
      }
      uVar18 = 0;
      uVar16 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar16 = uVar18;
      }
      iVar12 = 0;
      do {
        if (uVar16 == uVar18) goto LAB_144001a36;
        iVar12 = iVar12 + 0x20;
        uVar5 = puVar6[uVar18 + 1];
        uVar18 = uVar18 + 1;
      } while (uVar5 == 0);
    }
    else {
      uVar18 = 0;
      iVar12 = 0;
    }
    uVar16 = (ulonglong)(-uVar5 & uVar5);
    uVar1 = uVar16 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar5 = (iVar12 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    if ((int)uVar11 <= (int)uVar5) {
      uVar5 = uVar11;
    }
  }
  if (uVar5 != uVar11) {
    uVar11 = 0xffffffff;
    local_140 = puVar13;
    local_138 = uVar14;
    local_130 = param_2;
    do {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x240) + (longlong)(int)uVar5 * 0x10);
      if (plVar3 != (longlong *)0x0) {
        iVar17 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar17 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar17 + 1U) {
          FUN_1456fde5c(param_3,iVar17);
          puVar13 = local_140;
        }
        *(longlong **)(*param_3 + (longlong)iVar17 * 8) = plVar3;
        if (DAT_14cabf8d0 == 0) {
          local_120 = FUN_144a7958c;
          local_150 = FUN_14081d0ea;
          local_158 = FUN_142b47bc4;
          local_160 = &local_120;
          local_168 = &LAB_147860ffd;
          local_170 = FUN_1463713dc;
          local_178 = L"Engine";
          local_180 = 0;
          local_188 = 0x10000005;
          local_190 = 0x10;
          local_198 = 0x2b0;
          FUN_14081cfa3(L"/Script/Engine",L"ChildActorBaseComponent",&DAT_14cabf8d0,&DAT_147860ffc);
          puVar13 = local_140;
        }
        uVar14 = local_138;
        if (((*(int *)(DAT_14cabf8d0 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(DAT_14cabf8d0 + 0x38) * 8) ==
             DAT_14cabf8d0 + 0x30)) &&
           (lVar7 = (**(code **)(*plVar3 + 0x5d8))(plVar3), uVar1 = local_50, puVar13 = local_140,
           lVar7 != 0)) {
          lVar15 = (longlong)(int)local_50;
          uVar5 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar5);
          if (local_50._4_4_ < uVar5) {
            FUN_1470e9d72(local_118,uVar1 & 0xffffffff);
          }
          puVar8 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar8 = local_118;
          }
          *(longlong *)(puVar8 + lVar15 * 8) = lVar7;
          puVar13 = local_140;
          uVar14 = local_138;
        }
      }
      plVar3 = local_130;
      uVar11 = uVar11 & ~(uint)uVar16;
      puVar6 = *(uint **)(param_1 + 0x260);
      if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
        puVar6 = puVar13;
      }
      uVar2 = *(uint *)(param_1 + 0x268);
      iVar17 = (int)uVar18;
      lVar7 = (longlong)iVar17;
      uVar5 = puVar6[lVar7] & uVar11;
      if (uVar5 == 0) {
        iVar9 = uVar2 + 0x1e;
        if (-1 < (int)(uVar2 - 1)) {
          iVar9 = uVar2 - 1;
        }
        iVar9 = iVar9 >> 5;
        iVar12 = iVar12 + 0x20;
        iVar10 = iVar9;
        if (iVar9 < iVar17) {
          iVar10 = iVar17;
        }
        if (iVar17 < iVar9) {
          lVar15 = 0;
          do {
            uVar5 = puVar6[lVar7 + lVar15 + 1];
            if (uVar5 != 0) {
              uVar18 = (ulonglong)(iVar17 + (int)lVar15 + 1);
              uVar11 = 0xffffffff;
              goto LAB_14400187f;
            }
            iVar12 = iVar12 + 0x20;
            lVar15 = lVar15 + 1;
          } while (iVar10 - lVar7 != lVar15);
          uVar11 = 0xffffffff;
          iVar17 = iVar10;
        }
        uVar18 = (ulonglong)(iVar17 + 1);
        puVar13 = local_140;
        uVar14 = local_138;
        uVar5 = uVar2;
      }
      else {
LAB_14400187f:
        uVar16 = (ulonglong)(-uVar5 & uVar5);
        uVar1 = uVar16 * 2 + 1;
        lVar7 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        uVar5 = (iVar12 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
        if ((int)uVar2 <= (int)uVar5) {
          uVar5 = uVar2;
        }
      }
    } while (uVar5 != (uint)uVar14);
    lVar7 = (longlong)(int)local_50;
    puVar8 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar8 = local_58;
    }
    if (lVar7 != 0) {
      lVar15 = 0;
      do {
        uVar4 = *(undefined8 *)(puVar8 + lVar15);
        local_128 = *plVar3;
        if ((local_128 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_144001632(uVar4,&local_128,param_3);
        lVar15 = lVar15 + 8;
      } while (lVar7 * 8 != lVar15);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_144001a36:
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144001a6e FUN_144001a6e body=1409 status=ok
// SIG undefined FUN_144001a6e(void)

void FUN_144001a6e(longlong param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint *puVar17;
  ulonglong uVar18;
  int iVar19;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  undefined4 local_190;
  undefined4 local_188;
  undefined8 local_180;
  wchar_t *local_178;
  code *local_170;
  undefined1 *local_168;
  code **local_160;
  code *local_158;
  code *local_150;
  ulonglong local_148;
  uint *local_140;
  longlong *local_138;
  longlong *local_130;
  longlong local_128;
  code *local_120;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  puVar17 = (uint *)(param_1 + 0x250);
  uVar15 = *(uint *)(param_1 + 0x268);
  uVar16 = (ulonglong)uVar15;
  local_138 = param_3;
  if (uVar15 == 0) {
    uVar18 = 1;
    uVar14 = 0;
    iVar19 = 0;
    uVar6 = 0;
  }
  else {
    puVar7 = *(uint **)(param_1 + 0x260);
    if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
      puVar7 = puVar17;
    }
    uVar6 = *puVar7;
    if (uVar6 == 0) {
      iVar19 = uVar15 + 0x1e;
      if (-1 < (int)(uVar15 - 1)) {
        iVar19 = uVar15 - 1;
      }
      uVar14 = 0;
      uVar18 = (ulonglong)(uint)(iVar19 >> 5);
      if (iVar19 >> 5 < 1) {
        uVar18 = uVar14;
      }
      iVar19 = 0;
      do {
        if (uVar18 == uVar14) goto LAB_144001fb8;
        iVar19 = iVar19 + 0x20;
        uVar6 = puVar7[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar6 == 0);
    }
    else {
      uVar14 = 0;
      iVar19 = 0;
    }
    uVar18 = (ulonglong)(-uVar6 & uVar6);
    uVar1 = uVar18 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar6 = (iVar19 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    if ((int)uVar15 <= (int)uVar6) {
      uVar6 = uVar15;
    }
  }
  if (uVar6 != uVar15) {
    uVar15 = 0xffffffff;
    local_148 = uVar16;
    local_140 = puVar17;
    local_130 = param_2;
    do {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x240) + (longlong)(int)uVar6 * 0x10);
      if (plVar3 != (longlong *)0x0) {
        lVar8 = *param_2;
        if ((lVar8 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar8);
          uVar16 = local_148;
          puVar17 = local_140;
LAB_144001ba9:
          if (DAT_14cad00c8 == 0) {
            local_120 = FUN_144a7958c;
            local_150 = FUN_14081d0ea;
            local_158 = FUN_14081d0ea;
            local_160 = &local_120;
            local_168 = &LAB_1479b7a0c;
            local_170 = (code *)&LAB_1463b464e;
            local_178 = L"Engine";
            local_180 = 0;
            local_188 = 0x10000005;
            local_190 = 8;
            local_198 = 0x110;
            FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
            uVar16 = local_148;
            puVar17 = local_140;
            if (DAT_14cad00c8 == 0) goto LAB_144001bc3;
          }
          if (*(int *)(lVar8 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) goto LAB_144001bc3;
          if (*(longlong *)
               (*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) !=
              DAT_14cad00c8 + 0x30) {
            lVar8 = 0;
          }
        }
        else {
          if (lVar8 != 0) goto LAB_144001ba9;
LAB_144001bc3:
          lVar8 = 0;
        }
        plVar5 = local_138;
        if ((*(int *)(lVar8 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
            lVar8 + 0x30)) {
          iVar13 = (int)local_138[1];
          *(uint *)(local_138 + 1) = iVar13 + 1U;
          if (*(uint *)((longlong)local_138 + 0xc) < iVar13 + 1U) {
            FUN_1456fde5c(local_138,iVar13);
            uVar16 = local_148;
            puVar17 = local_140;
          }
          *(longlong **)(*plVar5 + (longlong)iVar13 * 8) = plVar3;
          param_2 = local_130;
        }
        if (DAT_14cabf8d0 == 0) {
          local_120 = FUN_144a7958c;
          local_150 = FUN_14081d0ea;
          local_158 = FUN_142b47bc4;
          local_160 = &local_120;
          local_168 = &LAB_147860ffd;
          local_170 = FUN_1463713dc;
          local_178 = L"Engine";
          local_180 = 0;
          local_188 = 0x10000005;
          local_190 = 0x10;
          local_198 = 0x2b0;
          FUN_14081cfa3(L"/Script/Engine",L"ChildActorBaseComponent",&DAT_14cabf8d0,&DAT_147860ffc);
          uVar16 = local_148;
          puVar17 = local_140;
        }
        if (((*(int *)(DAT_14cabf8d0 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(DAT_14cabf8d0 + 0x38) * 8) ==
             DAT_14cabf8d0 + 0x30)) &&
           (lVar8 = (**(code **)(*plVar3 + 0x5d8))(plVar3), uVar1 = local_50, uVar16 = local_148,
           puVar17 = local_140, lVar8 != 0)) {
          lVar12 = (longlong)(int)local_50;
          uVar6 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar6);
          if (local_50._4_4_ < uVar6) {
            FUN_1470e9d72(local_118,uVar1 & 0xffffffff);
          }
          puVar9 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar9 = local_118;
          }
          *(longlong *)(puVar9 + lVar12 * 8) = lVar8;
          uVar16 = local_148;
          puVar17 = local_140;
        }
      }
      plVar3 = local_138;
      uVar15 = uVar15 & ~(uint)uVar18;
      puVar7 = *(uint **)(param_1 + 0x260);
      if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
        puVar7 = puVar17;
      }
      uVar2 = *(uint *)(param_1 + 0x268);
      iVar13 = (int)uVar14;
      lVar8 = (longlong)iVar13;
      uVar6 = puVar7[lVar8] & uVar15;
      if (uVar6 == 0) {
        iVar10 = uVar2 + 0x1e;
        if (-1 < (int)(uVar2 - 1)) {
          iVar10 = uVar2 - 1;
        }
        iVar10 = iVar10 >> 5;
        iVar19 = iVar19 + 0x20;
        iVar11 = iVar10;
        if (iVar10 < iVar13) {
          iVar11 = iVar13;
        }
        uVar16 = local_148;
        if (iVar13 < iVar10) {
          lVar12 = 0;
          do {
            uVar6 = puVar7[lVar8 + lVar12 + 1];
            if (uVar6 != 0) {
              uVar14 = (ulonglong)(iVar13 + (int)lVar12 + 1);
              uVar15 = 0xffffffff;
              goto LAB_144001d2f;
            }
            iVar19 = iVar19 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar11 - lVar8 != lVar12);
          uVar15 = 0xffffffff;
          iVar13 = iVar11;
        }
        uVar14 = (ulonglong)(iVar13 + 1);
        puVar17 = local_140;
        uVar6 = uVar2;
      }
      else {
LAB_144001d2f:
        uVar18 = (ulonglong)(-uVar6 & uVar6);
        uVar1 = uVar18 * 2 + 1;
        lVar8 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        uVar6 = (iVar19 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
        if ((int)uVar2 <= (int)uVar6) {
          uVar6 = uVar2;
        }
      }
    } while (uVar6 != (uint)uVar16);
    lVar8 = (longlong)(int)local_50;
    puVar9 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar9 = local_58;
    }
    if (lVar8 != 0) {
      lVar12 = 0;
      do {
        uVar4 = *(undefined8 *)(puVar9 + lVar12);
        local_128 = *param_2;
        if ((local_128 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_144001a6e(uVar4,&local_128,plVar3);
        lVar12 = lVar12 + 8;
      } while (lVar8 * 8 != lVar12);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_144001fb8:
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144002020 FUN_144002020 body=48 status=ok
// SIG undefined FUN_144002020(void)

void FUN_144002020(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,4);
  }
  return;
}



// FUNCTION 144002080 FUN_144002080 body=346 status=ok
// SIG undefined FUN_144002080(void)

void FUN_144002080(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_144002112;
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
LAB_144002112:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 1440021da FUN_1440021da body=346 status=ok
// SIG undefined FUN_1440021da(void)

void FUN_1440021da(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14400226c;
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
LAB_14400226c:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 144002334 FUN_144002334 body=48 status=ok
// SIG undefined FUN_144002334(void)

void FUN_144002334(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,4);
  }
  return;
}



// FUNCTION 144002394 FUN_144002394 body=346 status=ok
// SIG undefined FUN_144002394(void)

void FUN_144002394(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_144002426;
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
LAB_144002426:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 1440024ee FUN_1440024ee body=29 status=ok
// SIG undefined FUN_1440024ee(void)

undefined8 FUN_1440024ee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


