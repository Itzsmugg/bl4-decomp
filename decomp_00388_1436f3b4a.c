// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1436f3b4a FUN_1436f3b4a body=71 status=ok
// SIG undefined FUN_1436f3b4a(void)

undefined8 * FUN_1436f3b4a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14aa98a50;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1436f3b92 FUN_1436f3b92 body=282 status=ok
// SIG undefined FUN_1436f3b92(void)

undefined8 * FUN_1436f3b92(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1436ef87f);
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



// FUNCTION 1436f3cac FUN_1436f3cac body=148 status=ok
// SIG undefined FUN_1436f3cac(void)

void FUN_1436f3cac(undefined8 *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  pcVar2 = (code *)param_1[0x16];
  plVar4 = (longlong *)param_1[0x18];
  if ((longlong *)param_1[0x18] == (longlong *)0x0) {
    plVar4 = param_1 + 0x1a;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,&DAT_14ca85100);
  if (param_1[0x16] != 0) {
    plVar4 = param_1 + 0x1a;
    if ((longlong *)param_1[0x18] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x18];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001436f3d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1436f3d40 FUN_1436f3d40 body=2275 status=ok
// SIG undefined FUN_1436f3d40(void)

void FUN_1436f3d40(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  uint *puVar11;
  longlong lVar12;
  char cVar13;
  undefined7 uVar14;
  code *pcVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  longlong *plVar19;
  longlong *plVar20;
  bool bVar21;
  bool bVar22;
  undefined1 auStack_1b8 [32];
  code **local_198;
  int *local_190;
  ulonglong local_188;
  ulonglong local_180;
  undefined8 *local_178;
  longlong *local_170;
  longlong local_168;
  undefined8 *local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong local_128;
  code *local_118;
  longlong *local_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  code *local_d8;
  longlong *local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  code *local_98 [2];
  longlong *local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  byte local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar12 = (longlong)*(int *)(*(longlong *)(param_1 + 0x40) + 0x20);
  if (lVar12 != 0) {
    plVar19 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x18);
    plVar20 = plVar19 + lVar12;
    lVar12 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar2 = (undefined8 *)(lVar12 + 0x308);
    local_178 = (undefined8 *)(lVar12 + 0x310);
    local_168 = 0x527800b400;
    local_160 = (undefined8 *)(lVar12 + 0xec0);
    local_190 = (int *)(lVar12 + 0xc60);
    local_170 = (longlong *)(lVar12 + 0x2b8);
    do {
      lVar12 = *plVar19;
      if (lVar12 != 0) {
        local_128 = *(longlong *)(param_1 + 0x38);
        local_158 = *(undefined4 *)(param_1 + 8);
        uStack_154 = *(undefined4 *)(param_1 + 0xc);
        uStack_150 = *(undefined4 *)(param_1 + 0x10);
        uStack_14c = *(undefined4 *)(param_1 + 0x14);
        local_148 = *(undefined4 *)(param_1 + 0x18);
        uStack_144 = *(undefined4 *)(param_1 + 0x1c);
        uStack_140 = *(undefined4 *)(param_1 + 0x20);
        uStack_13c = *(undefined4 *)(param_1 + 0x24);
        local_138 = *(undefined4 *)(param_1 + 0x28);
        uStack_134 = *(undefined4 *)(param_1 + 0x2c);
        uStack_130 = *(undefined4 *)(param_1 + 0x30);
        uStack_12c = *(undefined4 *)(param_1 + 0x34);
        local_118 = (code *)0x0;
        local_108 = (longlong *)0x0;
        local_108 = (longlong *)FUN_14001cc68(0x48,8);
        *local_108 = (longlong)&PTR_LAB_14aa98ba0;
        local_108[1] = lVar12;
        local_108[8] = local_128;
        *(undefined4 *)(local_108 + 6) = local_138;
        *(undefined4 *)((longlong)local_108 + 0x34) = uStack_134;
        *(undefined4 *)(local_108 + 7) = uStack_130;
        *(undefined4 *)((longlong)local_108 + 0x3c) = uStack_12c;
        *(undefined4 *)(local_108 + 4) = local_148;
        *(undefined4 *)((longlong)local_108 + 0x24) = uStack_144;
        *(undefined4 *)(local_108 + 5) = uStack_140;
        *(undefined4 *)((longlong)local_108 + 0x2c) = uStack_13c;
        *(undefined4 *)(local_108 + 2) = local_158;
        *(undefined4 *)((longlong)local_108 + 0x14) = uStack_154;
        *(undefined4 *)(local_108 + 3) = uStack_150;
        *(undefined4 *)((longlong)local_108 + 0x1c) = uStack_14c;
        if (local_108 + 1 != (longlong *)0x0) {
          local_118 = FUN_1436f4c6a;
        }
        if (DAT_14ca9a43c == 2) {
          LOCK();
          bVar21 = DAT_14cb00c10 == '\0';
          if (bVar21) {
            DAT_14cb00c10 = '\x01';
          }
          UNLOCK();
          if (!bVar21) {
            FUN_1447d2058(&DAT_14cb00c10);
          }
          if ((undefined *)*local_160 == &DAT_14cb00c08) {
            local_98[0] = local_118;
            local_88 = local_108;
            local_108 = (longlong *)0x0;
            local_68 = local_e8;
            uStack_64 = uStack_e4;
            uStack_60 = uStack_e0;
            uStack_5c = uStack_dc;
            local_78 = local_f8;
            uStack_74 = uStack_f4;
            uStack_70 = uStack_f0;
            uStack_6c = uStack_ec;
            if (local_118 != (code *)0x0) {
              local_118 = (code *)0x0;
            }
            local_58 = 1;
            FUN_1401a96bc(&DAT_14cb00c08,local_98,L"UpdateGPUSkinVertexFactory",&DAT_14cb083c0);
LAB_1436f4005:
            (*(code *)(&PTR_LAB_14a3931f0)[local_58])(local_98);
            bVar21 = false;
          }
          else {
            if (DAT_14cb00c18 != 0) {
              local_98[0] = local_118;
              local_88 = local_108;
              local_108 = (longlong *)0x0;
              local_68 = local_e8;
              uStack_64 = uStack_e4;
              uStack_60 = uStack_e0;
              uStack_5c = uStack_dc;
              local_78 = local_f8;
              uStack_74 = uStack_f4;
              uStack_70 = uStack_f0;
              uStack_6c = uStack_ec;
              if (local_118 != (code *)0x0) {
                local_118 = (code *)0x0;
              }
              local_58 = 1;
              FUN_1401a98c8(&DAT_14cb00c08,local_98,L"UpdateGPUSkinVertexFactory",&DAT_14cb083c0);
              goto LAB_1436f4005;
            }
            bVar21 = true;
          }
          LOCK();
          bVar22 = DAT_14cb00c10 == '\x01';
          if (bVar22) {
            DAT_14cb00c10 = '\0';
          }
          UNLOCK();
          if (!bVar22) {
            FUN_14008cdb0(&DAT_14cb00c10);
          }
          if (bVar21) goto LAB_1436f404b;
        }
        else {
LAB_1436f404b:
          local_d8 = local_118;
          local_c8 = local_108;
          local_108 = (longlong *)0x0;
          local_a8 = local_e8;
          uStack_a4 = uStack_e4;
          uStack_a0 = uStack_e0;
          uStack_9c = uStack_dc;
          local_b8 = local_f8;
          uStack_b4 = uStack_f4;
          uStack_b0 = uStack_f0;
          uStack_ac = uStack_ec;
          if (local_118 != (code *)0x0) {
            local_118 = (code *)0x0;
          }
          iVar4 = *local_190;
          if (DAT_14c86a9fc == 0) {
            if (iVar4 != 2) {
              if (iVar4 != 1) goto LAB_1436f40a0;
              DVar6 = FUN_140ad26c0();
              DVar7 = GetCurrentThreadId();
              if (DVar6 == DVar7) goto LAB_1436f40a5;
              goto LAB_1436f40f3;
            }
LAB_1436f40a5:
            pcVar15 = local_d8;
            plVar8 = local_c8;
            if (local_c8 == (longlong *)0x0) {
              plVar8 = (longlong *)&local_b8;
            }
            uVar9 = (**(code **)(*plVar8 + 8))(plVar8);
LAB_1436f40b5:
            (*pcVar15)(uVar9,&DAT_14ca85100);
          }
          else {
LAB_1436f40a0:
            if (iVar4 == 0x10) goto LAB_1436f40a5;
LAB_1436f40f3:
            if (DAT_14ca9a438 == '\0') {
              if ((DAT_14c86a9f8 == '\x01') && (*local_190 != 2)) {
                if (*local_190 == 1) {
                  DVar6 = FUN_140ad26c0();
                  DVar7 = GetCurrentThreadId();
                  if (DVar6 == DVar7) goto LAB_1436f45a4;
                }
                goto LAB_1436f4122;
              }
LAB_1436f45a4:
              pcVar15 = local_d8;
              plVar8 = local_c8;
              if (local_c8 == (longlong *)0x0) {
                plVar8 = (longlong *)&local_b8;
              }
              uVar9 = (**(code **)(*plVar8 + 8))();
              goto LAB_1436f40b5;
            }
LAB_1436f4122:
            if (DAT_14ca9a43c == 0) {
              puVar11 = (uint *)*puVar2;
              if (puVar11 != (uint *)0x0) goto LAB_1436f42c8;
              do {
                puVar17 = local_178;
                uVar5 = *(uint *)(*(longlong *)
                                   ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                 + 0x318);
                if ((uVar5 & 1) == 0) {
                  *(uint *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x318) = uVar5 | 1;
                  __tlregdtor(&LAB_1436ef87f);
                }
                puVar10 = (undefined4 *)*puVar17;
                *puVar17 = 0;
                if (puVar10 == (undefined4 *)0x0) {
                  puVar10 = _aligned_malloc(0x10000,0x10000);
                }
                *puVar10 = 0xffffffff;
                *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
                puVar10[0x12] = 0;
                *puVar2 = puVar10;
                FUN_140217a48(puVar2);
                puVar11 = (uint *)*puVar2;
LAB_1436f42c8:
                uVar16 = *(longlong *)(puVar11 + 0x10) + 0xf;
                uVar5 = puVar11[0x12];
                while( true ) {
                  puVar17 = (undefined8 *)(uVar16 & 0xfffffffffffffff0);
                  if (puVar17 + 0x1e <= puVar11 + 0x4000) {
                    *(undefined8 **)(puVar11 + 0x10) = puVar17 + 0x1e;
                    puVar11[0x12] = uVar5 + 1;
                    uVar9 = 0;
                    FUN_1447247dc(puVar17,0);
                    *puVar17 = &PTR_FUN_14aa98b90;
                    puVar17[0x16] = local_d8;
                    puVar17[0x18] = local_c8;
                    local_c8 = (longlong *)0x0;
                    *(undefined4 *)(puVar17 + 0x1c) = local_a8;
                    *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_a4;
                    *(undefined4 *)(puVar17 + 0x1d) = uStack_a0;
                    *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_9c;
                    *(undefined4 *)(puVar17 + 0x1a) = local_b8;
                    *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_b4;
                    *(undefined4 *)(puVar17 + 0x1b) = uStack_b0;
                    *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_ac;
                    if (local_d8 != (code *)0x0) {
                      local_d8 = (code *)0x0;
                    }
                    uVar14 = (undefined7)((ulonglong)uVar9 >> 8);
                    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                      uVar5 = DAT_14c7585c8 >> 10 & 3;
                      uVar18 = 0;
                      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar5 < 2) {
                        uVar16 = CONCAT71(uVar14,(&DAT_149e38edc)[uVar5]);
                      }
                      else {
                        uVar16 = CONCAT71(uVar14,2);
                      }
                    }
                    else {
                      uVar18 = (ulonglong)
                               ((DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                               *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4));
                      uVar16 = CONCAT71(uVar14,5);
                    }
                    if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
                      local_188 = uVar16;
                      local_180 = uVar18;
                      (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
                      uVar16 = local_188;
                      uVar18 = local_180;
                    }
                    puVar17[0xe] = LowLevelTasks::
                                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                                   ::
                                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                                   ::vftable;
                    puVar17[9] = puVar17;
                    puVar17[10] = puVar17;
                    lVar12 = *local_170;
                    cVar13 = (char)uVar16;
                    if (lVar12 == 0) {
                      uVar16 = uVar16 & 0xff;
                      if (cVar13 == '\x06') {
                        uVar16 = 1;
                      }
                      uVar9 = 0;
                    }
                    else {
                      if (cVar13 == '\x06') {
                        uVar16 = *(ulonglong *)(lVar12 + 0x38) >> 0x3b;
                      }
                      uVar9 = *(undefined8 *)(lVar12 + 0x30);
                    }
                    puVar17[0xf] = uVar9;
                    puVar17[0x10] = (uVar16 << 0x3b) + local_168 | 0xc000000000000000;
                    *(int *)((longlong)puVar17 + 0x1c) = (int)uVar18;
                    if (puVar17 == (undefined8 *)0x0) {
                      local_98[0] = (code *)CONCAT71(local_98[0]._1_7_,1);
                      FUN_1447439e4(0,local_98);
                    }
                    else {
                      LOCK();
                      *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
                      UNLOCK();
                      local_98[0] = (code *)CONCAT71(local_98[0]._1_7_,1);
                      FUN_1447439e4(puVar17,local_98);
                      LOCK();
                      piVar1 = (int *)(puVar17 + 1);
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (*piVar1 == 0) {
                        (**(code **)*puVar17)(puVar17,1);
                      }
                    }
                    goto LAB_1436f4204;
                  }
                  *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
                  LOCK();
                  uVar3 = *puVar11;
                  *puVar11 = *puVar11 + uVar5 + 1;
                  UNLOCK();
                  if ((uVar3 ^ uVar5) != 0xffffffff) break;
                  puVar11 = (uint *)*puVar2;
                  *puVar11 = 0xffffffff;
                  *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
                  puVar11[0x12] = 0;
                  *puVar2 = puVar11;
                  uVar16 = (longlong)puVar11 + 0x67;
                  uVar5 = 0;
                }
              } while( true );
            }
            local_98[0] = (code *)0x0;
            local_88 = (longlong *)0x0;
            local_88 = (longlong *)FUN_14001cc68(0x50,0x10);
            *local_88 = (longlong)&PTR_LAB_14aa98b70;
            local_88[2] = (longlong)local_d8;
            local_88[4] = (longlong)local_c8;
            local_c8 = (longlong *)0x0;
            *(undefined4 *)(local_88 + 8) = local_a8;
            *(undefined4 *)((longlong)local_88 + 0x44) = uStack_a4;
            *(undefined4 *)(local_88 + 9) = uStack_a0;
            *(undefined4 *)((longlong)local_88 + 0x4c) = uStack_9c;
            *(undefined4 *)(local_88 + 6) = local_b8;
            *(undefined4 *)((longlong)local_88 + 0x34) = uStack_b4;
            *(undefined4 *)(local_88 + 7) = uStack_b0;
            *(undefined4 *)((longlong)local_88 + 0x3c) = uStack_ac;
            if (local_d8 != (code *)0x0) {
              local_d8 = (code *)0x0;
            }
            if (local_88 != (longlong *)&DAT_fffffffffffffff0) {
              local_98[0] = FUN_1436f4a18;
            }
            local_198 = local_98;
            FUN_14005a792(&DAT_14ca9a440,L"UpdateGPUSkinVertexFactory",&DAT_14cb083c0);
            if (local_98[0] != (code *)0x0) {
              plVar8 = local_88;
              if (local_88 == (longlong *)0x0) {
                plVar8 = (longlong *)&local_78;
              }
              (**(code **)(*plVar8 + 0x10))();
            }
          }
LAB_1436f4204:
          if (local_d8 != (code *)0x0) {
            plVar8 = local_c8;
            if (local_c8 == (longlong *)0x0) {
              plVar8 = (longlong *)&local_b8;
            }
            (**(code **)(*plVar8 + 0x10))();
          }
        }
        if (local_118 != (code *)0x0) {
          plVar8 = local_108;
          if (local_108 == (longlong *)0x0) {
            plVar8 = (longlong *)&local_f8;
          }
          (**(code **)(*plVar8 + 0x10))();
        }
      }
      plVar19 = plVar19 + 1;
    } while (plVar19 != plVar20);
  }
  if ((local_48 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436f462e FUN_1436f462e body=29 status=ok
// SIG undefined FUN_1436f462e(void)

void FUN_1436f462e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1436f464c FUN_1436f464c body=29 status=ok
// SIG undefined FUN_1436f464c(void)

undefined8 FUN_1436f464c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1436f466a FUN_1436f466a body=51 status=ok
// SIG undefined FUN_1436f466a(void)

void FUN_1436f466a(undefined8 *param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = (code *)*param_1;
  plVar2 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[2];
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001436f469a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_2);
  return;
}



// FUNCTION 1436f46a8 FUN_1436f46a8 body=29 status=ok
// SIG undefined FUN_1436f46a8(void)

void FUN_1436f46a8(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1436f46c6 FUN_1436f46c6 body=71 status=ok
// SIG undefined FUN_1436f46c6(void)

undefined8 * FUN_1436f46c6(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14aa98ae0;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1436f470e FUN_1436f470e body=282 status=ok
// SIG undefined FUN_1436f470e(void)

undefined8 * FUN_1436f470e(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1436ef87f);
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



// FUNCTION 1436f4828 FUN_1436f4828 body=148 status=ok
// SIG undefined FUN_1436f4828(void)

void FUN_1436f4828(undefined8 *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  pcVar2 = (code *)param_1[0x16];
  plVar4 = (longlong *)param_1[0x18];
  if ((longlong *)param_1[0x18] == (longlong *)0x0) {
    plVar4 = param_1 + 0x1a;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,&DAT_14ca85100);
  if (param_1[0x16] != 0) {
    plVar4 = param_1 + 0x1a;
    if ((longlong *)param_1[0x18] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x18];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001436f48b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1436f48bc FUN_1436f48bc body=276 status=ok
// SIG undefined FUN_1436f48bc(void)

void FUN_1436f48bc(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined2 local_ac;
  undefined1 local_aa;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined6 uStack_60;
  undefined2 uStack_5a;
  undefined6 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_f8 = 0x400000000;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0xffffffff;
  local_ac = 0xff;
  local_aa = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_5a = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  FUN_1448d2a4c(&local_168,param_1 + 1,*param_1);
  (**(code **)(*(longlong *)*param_1 + 0x58))((longlong *)*param_1,param_2,&local_168);
  (**(code **)(*(longlong *)*param_1 + 0x18))((longlong *)*param_1,param_2);
  FUN_1436efc53(param_1[8],*param_1,param_2);
  if ((local_20 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436f49dc FUN_1436f49dc body=29 status=ok
// SIG undefined FUN_1436f49dc(void)

void FUN_1436f49dc(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1436f49fa FUN_1436f49fa body=29 status=ok
// SIG undefined FUN_1436f49fa(void)

undefined8 FUN_1436f49fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1436f4a18 FUN_1436f4a18 body=51 status=ok
// SIG undefined FUN_1436f4a18(void)

void FUN_1436f4a18(undefined8 *param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = (code *)*param_1;
  plVar2 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[2];
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001436f4a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_2);
  return;
}



// FUNCTION 1436f4a56 FUN_1436f4a56 body=29 status=ok
// SIG undefined FUN_1436f4a56(void)

void FUN_1436f4a56(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1436f4a74 FUN_1436f4a74 body=71 status=ok
// SIG undefined FUN_1436f4a74(void)

undefined8 * FUN_1436f4a74(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14aa98b70;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1436f4abc FUN_1436f4abc body=282 status=ok
// SIG undefined FUN_1436f4abc(void)

undefined8 * FUN_1436f4abc(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1436ef87f);
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



// FUNCTION 1436f4bd6 FUN_1436f4bd6 body=148 status=ok
// SIG undefined FUN_1436f4bd6(void)

void FUN_1436f4bd6(undefined8 *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  pcVar2 = (code *)param_1[0x16];
  plVar4 = (longlong *)param_1[0x18];
  if ((longlong *)param_1[0x18] == (longlong *)0x0) {
    plVar4 = param_1 + 0x1a;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,&DAT_14ca85100);
  if (param_1[0x16] != 0) {
    plVar4 = param_1 + 0x1a;
    if ((longlong *)param_1[0x18] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x18];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001436f4c5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1436f4c6a FUN_1436f4c6a body=425 status=ok
// SIG undefined FUN_1436f4c6a(void)

void FUN_1436f4c6a(undefined8 *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined2 local_cc;
  undefined1 local_ca;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined6 uStack_80;
  undefined2 uStack_7a;
  undefined6 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  longlong lStack_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_118 = 0x400000000;
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0xffffffff;
  local_cc = 0xff;
  local_ca = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_7a = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  lStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  FUN_1448d2a4c(&local_188,param_1 + 1,*param_1);
  FUN_1417f01d8(&local_188,param_1 + 1);
  (**(code **)(*(longlong *)*param_1 + 0x58))((longlong *)*param_1,param_2,&local_188);
  (**(code **)(*(longlong *)*param_1 + 0x18))((longlong *)*param_1,param_2);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  lVar4 = lStack_48;
  if (lStack_48 != 0) {
    LOCK();
    puVar1 = (uint *)(lStack_48 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lStack_48 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lStack_48 + 0xd);
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
  if ((local_28 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1436f4e1e FUN_1436f4e1e body=29 status=ok
// SIG undefined FUN_1436f4e1e(void)

void FUN_1436f4e1e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1436f4e3c FUN_1436f4e3c body=29 status=ok
// SIG undefined FUN_1436f4e3c(void)

undefined8 FUN_1436f4e3c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1436f4e5a FUN_1436f4e5a body=51 status=ok
// SIG undefined FUN_1436f4e5a(void)

void FUN_1436f4e5a(undefined8 *param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = (code *)*param_1;
  plVar2 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[2];
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001436f4e8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_2);
  return;
}



// FUNCTION 1436f4e98 FUN_1436f4e98 body=29 status=ok
// SIG undefined FUN_1436f4e98(void)

void FUN_1436f4e98(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1436f4eb6 FUN_1436f4eb6 body=71 status=ok
// SIG undefined FUN_1436f4eb6(void)

undefined8 * FUN_1436f4eb6(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14aa98bc0;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1436f4efe FUN_1436f4efe body=282 status=ok
// SIG undefined FUN_1436f4efe(void)

undefined8 * FUN_1436f4efe(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1436ef87f);
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



// FUNCTION 1436f5018 FUN_1436f5018 body=148 status=ok
// SIG undefined FUN_1436f5018(void)

void FUN_1436f5018(undefined8 *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  pcVar2 = (code *)param_1[0x16];
  plVar4 = (longlong *)param_1[0x18];
  if ((longlong *)param_1[0x18] == (longlong *)0x0) {
    plVar4 = param_1 + 0x1a;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,&DAT_14ca85100);
  if (param_1[0x16] != 0) {
    plVar4 = param_1 + 0x1a;
    if ((longlong *)param_1[0x18] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x18];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001436f50a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1436f50d8 FUN_1436f50d8 body=5 status=ok
// SIG undefined FUN_1436f50d8(void)

longlong FUN_1436f50d8(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 1436f50de FUN_1436f50de body=12 status=ok
// SIG undefined FUN_1436f50de(void)

void FUN_1436f50de(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001436f50e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1436f50ea FUN_1436f50ea body=29 status=ok
// SIG undefined FUN_1436f50ea(void)

undefined8 FUN_1436f50ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1436f5108 FUN_1436f5108 body=51 status=ok
// SIG undefined FUN_1436f5108(void)

void FUN_1436f5108(undefined8 *param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = (code *)*param_1;
  plVar2 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[2];
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001436f5138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_2);
  return;
}



// FUNCTION 1436f5146 FUN_1436f5146 body=29 status=ok
// SIG undefined FUN_1436f5146(void)

void FUN_1436f5146(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1436f5164 FUN_1436f5164 body=71 status=ok
// SIG undefined FUN_1436f5164(void)

undefined8 * FUN_1436f5164(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14aa98c10;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1436f51ac FUN_1436f51ac body=282 status=ok
// SIG undefined FUN_1436f51ac(void)

undefined8 * FUN_1436f51ac(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1436ef87f);
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



// FUNCTION 1436f52c6 FUN_1436f52c6 body=148 status=ok
// SIG undefined FUN_1436f52c6(void)

void FUN_1436f52c6(undefined8 *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  pcVar2 = (code *)param_1[0x16];
  plVar4 = (longlong *)param_1[0x18];
  if ((longlong *)param_1[0x18] == (longlong *)0x0) {
    plVar4 = param_1 + 0x1a;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,&DAT_14ca85100);
  if (param_1[0x16] != 0) {
    plVar4 = param_1 + 0x1a;
    if ((longlong *)param_1[0x18] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x18];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001436f534e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1436f535a FUN_1436f535a body=217 status=ok
// SIG undefined FUN_1436f535a(void)

void FUN_1436f535a(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  
  plVar4 = *(longlong **)(param_1 + 8);
  if (*plVar4 != 0) {
    lVar1 = *(longlong *)(*plVar4 + 0x10);
    FUN_147adb9f4(lVar1 + 0x20);
    lVar3 = *plVar4;
    if (*(char *)(lVar3 + 0x36) == '\x01') {
      iVar2 = *(int *)(lVar1 + 0x78);
      if (0 < iVar2) {
        uVar5 = 0;
        do {
          lVar3 = *(longlong *)(lVar1 + 0x70);
          if (*(longlong *)(lVar3 + (longlong)(int)uVar5 * 0x10) == *plVar4) {
            iVar6 = ~uVar5 + iVar2;
            if (iVar6 != 0) {
              if (0 < iVar6) {
                iVar6 = 1;
              }
              memmove((void *)((longlong)(int)uVar5 * 0x10 + lVar3),
                      (void *)((longlong)(iVar2 - iVar6) * 0x10 + lVar3),(longlong)iVar6 << 4);
              iVar2 = *(int *)(lVar1 + 0x78);
            }
            *(int *)(lVar1 + 0x78) = iVar2 + -1;
            FUN_147ae4610((longlong *)(lVar1 + 0x70));
            iVar2 = *(int *)(lVar1 + 0x78);
          }
          else {
            uVar5 = uVar5 + 1;
          }
        } while ((int)uVar5 < iVar2);
        lVar3 = *plVar4;
      }
      *(undefined1 *)(lVar3 + 0x36) = 0;
      lVar3 = *plVar4;
    }
    FUN_1435165cc(lVar3);
    *plVar4 = 0;
    plVar4 = *(longlong **)(param_1 + 8);
  }
  *plVar4 = 0;
  return;
}



// FUNCTION 1436f5438 FUN_1436f5438 body=5 status=ok
// SIG undefined FUN_1436f5438(void)

longlong FUN_1436f5438(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 1436f543e FUN_1436f543e body=12 status=ok
// SIG undefined FUN_1436f543e(void)

void FUN_1436f543e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001436f5447. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1436f544a FUN_1436f544a body=29 status=ok
// SIG undefined FUN_1436f544a(void)

undefined8 FUN_1436f544a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1436f5468 FUN_1436f5468 body=51 status=ok
// SIG undefined FUN_1436f5468(void)

void FUN_1436f5468(undefined8 *param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = (code *)*param_1;
  plVar2 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[2];
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001436f5498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_2);
  return;
}



// FUNCTION 1436f54a6 FUN_1436f54a6 body=29 status=ok
// SIG undefined FUN_1436f54a6(void)

void FUN_1436f54a6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1436f54c4 FUN_1436f54c4 body=71 status=ok
// SIG undefined FUN_1436f54c4(void)

undefined8 * FUN_1436f54c4(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14aa98c60;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1436f550c FUN_1436f550c body=282 status=ok
// SIG undefined FUN_1436f550c(void)

undefined8 * FUN_1436f550c(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1436ef87f);
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



// FUNCTION 1436f5626 FUN_1436f5626 body=148 status=ok
// SIG undefined FUN_1436f5626(void)

void FUN_1436f5626(undefined8 *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  pcVar2 = (code *)param_1[0x16];
  plVar4 = (longlong *)param_1[0x18];
  if ((longlong *)param_1[0x18] == (longlong *)0x0) {
    plVar4 = param_1 + 0x1a;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,&DAT_14ca85100);
  if (param_1[0x16] != 0) {
    plVar4 = param_1 + 0x1a;
    if ((longlong *)param_1[0x18] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x18];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001436f56ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1436f56dc FUN_1436f56dc body=12 status=ok
// SIG undefined FUN_1436f56dc(void)

void FUN_1436f56dc(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001436f56e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1436f56e8 FUN_1436f56e8 body=29 status=ok
// SIG undefined FUN_1436f56e8(void)

undefined8 FUN_1436f56e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1436f5706 FUN_1436f5706 body=51 status=ok
// SIG undefined FUN_1436f5706(void)

void FUN_1436f5706(undefined8 *param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = (code *)*param_1;
  plVar2 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[2];
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001436f5736. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_2);
  return;
}



// FUNCTION 1436f5744 FUN_1436f5744 body=29 status=ok
// SIG undefined FUN_1436f5744(void)

void FUN_1436f5744(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1436f5762 FUN_1436f5762 body=71 status=ok
// SIG undefined FUN_1436f5762(void)

undefined8 * FUN_1436f5762(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14aa98cb0;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1436f57aa FUN_1436f57aa body=282 status=ok
// SIG undefined FUN_1436f57aa(void)

undefined8 * FUN_1436f57aa(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1436ef87f);
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



// FUNCTION 1436f58c4 FUN_1436f58c4 body=148 status=ok
// SIG undefined FUN_1436f58c4(void)

void FUN_1436f58c4(undefined8 *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  pcVar2 = (code *)param_1[0x16];
  plVar4 = (longlong *)param_1[0x18];
  if ((longlong *)param_1[0x18] == (longlong *)0x0) {
    plVar4 = param_1 + 0x1a;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,&DAT_14ca85100);
  if (param_1[0x16] != 0) {
    plVar4 = param_1 + 0x1a;
    if ((longlong *)param_1[0x18] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x18];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001436f594c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1436f5958 FUN_1436f5958 body=65 status=ok
// SIG undefined FUN_1436f5958(void)

void FUN_1436f5958(undefined8 *param_1,undefined8 param_2)

{
  FUN_147d2466e(*param_1,param_2,param_1[3],param_1[1],*(undefined4 *)(param_1 + 2),
                *(undefined4 *)((longlong)param_1 + 0x14),param_1[4],
                *(undefined1 *)((longlong)param_1 + 0x2c));
  return;
}



// FUNCTION 1436f59a4 FUN_1436f59a4 body=29 status=ok
// SIG undefined FUN_1436f59a4(void)

void FUN_1436f59a4(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1436f59c2 FUN_1436f59c2 body=29 status=ok
// SIG undefined FUN_1436f59c2(void)

undefined8 FUN_1436f59c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1436f59e0 FUN_1436f59e0 body=51 status=ok
// SIG undefined FUN_1436f59e0(void)

void FUN_1436f59e0(undefined8 *param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = (code *)*param_1;
  plVar2 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[2];
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001436f5a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_2);
  return;
}



// FUNCTION 1436f5a1e FUN_1436f5a1e body=29 status=ok
// SIG undefined FUN_1436f5a1e(void)

void FUN_1436f5a1e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1436f5a3c FUN_1436f5a3c body=71 status=ok
// SIG undefined FUN_1436f5a3c(void)

undefined8 * FUN_1436f5a3c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14aa98d00;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1436f5a84 FUN_1436f5a84 body=282 status=ok
// SIG undefined FUN_1436f5a84(void)

undefined8 * FUN_1436f5a84(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1436ef87f);
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



// FUNCTION 1436f5b9e FUN_1436f5b9e body=148 status=ok
// SIG undefined FUN_1436f5b9e(void)

void FUN_1436f5b9e(undefined8 *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  pcVar2 = (code *)param_1[0x16];
  plVar4 = (longlong *)param_1[0x18];
  if ((longlong *)param_1[0x18] == (longlong *)0x0) {
    plVar4 = param_1 + 0x1a;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,&DAT_14ca85100);
  if (param_1[0x16] != 0) {
    plVar4 = param_1 + 0x1a;
    if ((longlong *)param_1[0x18] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x18];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001436f5c26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1436f5c4a FUN_1436f5c4a body=12 status=ok
// SIG undefined FUN_1436f5c4a(void)

void FUN_1436f5c4a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001436f5c53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1436f5c56 FUN_1436f5c56 body=29 status=ok
// SIG undefined FUN_1436f5c56(void)

undefined8 FUN_1436f5c56(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1436f5c74 FUN_1436f5c74 body=51 status=ok
// SIG undefined FUN_1436f5c74(void)

void FUN_1436f5c74(undefined8 *param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = (code *)*param_1;
  plVar2 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[2];
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001436f5ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_2);
  return;
}



// FUNCTION 1436f5cb2 FUN_1436f5cb2 body=29 status=ok
// SIG undefined FUN_1436f5cb2(void)

void FUN_1436f5cb2(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1436f5cd0 FUN_1436f5cd0 body=71 status=ok
// SIG undefined FUN_1436f5cd0(void)

undefined8 * FUN_1436f5cd0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14aa98db0;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1436f5d18 FUN_1436f5d18 body=282 status=ok
// SIG undefined FUN_1436f5d18(void)

undefined8 * FUN_1436f5d18(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1436ef87f);
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



// FUNCTION 1436f5e32 FUN_1436f5e32 body=148 status=ok
// SIG undefined FUN_1436f5e32(void)

void FUN_1436f5e32(undefined8 *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  pcVar2 = (code *)param_1[0x16];
  plVar4 = (longlong *)param_1[0x18];
  if ((longlong *)param_1[0x18] == (longlong *)0x0) {
    plVar4 = param_1 + 0x1a;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,&DAT_14ca85100);
  if (param_1[0x16] != 0) {
    plVar4 = param_1 + 0x1a;
    if ((longlong *)param_1[0x18] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x18];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001436f5eba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1436f5ec6 FUN_1436f5ec6 body=1738 status=ok
// SIG undefined FUN_1436f5ec6(void)

void FUN_1436f5ec6(longlong *param_1,undefined8 param_2)

{
  uint *puVar1;
  char **ppcVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 uVar19;
  bool bVar20;
  undefined1 auStack_138 [40];
  longlong *local_110;
  longlong local_108;
  undefined8 local_100;
  char *local_f8;
  undefined4 local_f0;
  uint uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  longlong local_e0;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined4 uStack_90;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  undefined4 uStack_88;
  undefined1 uStack_84;
  undefined1 uStack_83;
  undefined1 local_82;
  undefined1 local_81;
  undefined7 uStack_80;
  undefined1 uStack_79;
  undefined4 uStack_78;
  undefined3 uStack_74;
  undefined8 local_71;
  undefined8 uStack_69;
  undefined1 local_61;
  undefined7 uStack_60;
  undefined1 uStack_59;
  int iStack_58;
  undefined3 uStack_54;
  undefined5 uStack_51;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_83 = 0;
  local_98 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_8a = 0;
  local_82 = 1;
  local_81 = 0;
  uStack_80 = 0;
  uStack_79 = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  local_71 = 0;
  uStack_69 = 0;
  local_61 = 0;
  uStack_60 = 0;
  uStack_59 = 0;
  iStack_58 = 0;
  uStack_54 = 0;
  uStack_51 = 0;
  lVar11 = 0;
  local_110 = param_1;
  local_100 = param_2;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb083e8) {
    FUN_144b3d300(&DAT_14cb083e8);
    if (DAT_14cb083e8 == -1) {
      local_f8 = "FSkeletalMeshObjectLOD";
      local_f0 = 0x16;
      uStack_ec = uStack_ec & 0xffffff00;
      uVar9 = FUN_14001a6c0(&local_f8,1);
      DAT_14cb083e0 = (ulonglong)uVar9;
      _Init_thread_footer(&DAT_14cb083e8);
      lVar11 = local_98;
    }
    else {
      lVar11 = 0;
    }
  }
  iVar16 = DAT_14cb083ec + 1;
  uStack_60 = (undefined7)DAT_14cb083e0;
  uStack_59 = (undefined1)(DAT_14cb083e0 >> 0x38);
  iStack_58 = DAT_14cb083ec;
  lVar17 = *(longlong *)(local_110[1] + 0x10);
  DAT_14cb083ec = iVar16;
  if (lVar11 != lVar17) {
    if (lVar17 != 0) {
      LOCK();
      *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
      UNLOCK();
    }
    local_98 = lVar17;
    if (lVar11 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar11 + 8);
      uVar9 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar9 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar11 + 8);
        LOCK();
        uVar9 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar9 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar11 + 0xd);
          plVar10 = (longlong *)FUN_14001cc68(0x10,8);
          plVar10[1] = lVar11;
          plVar14 = DAT_14ca843c0;
          plVar13 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar10 = (longlong)plVar14;
              LOCK();
              bVar20 = plVar14 != DAT_14ca843c0;
              plVar13 = plVar10;
              if (bVar20) {
                plVar14 = DAT_14ca843c0;
                plVar13 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar13;
              UNLOCK();
            } while (bVar20);
          }
          else {
            do {
              *plVar10 = (longlong)plVar13;
              LOCK();
              bVar20 = plVar13 != DAT_14ca843c8;
              plVar14 = plVar10;
              if (bVar20) {
                plVar13 = DAT_14ca843c8;
                plVar14 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar14;
              UNLOCK();
            } while (bVar20);
          }
        }
      }
    }
  }
  uStack_88 = (undefined4)local_110[2];
  uStack_8c = 0;
  uStack_8a = 0;
  uStack_84 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  iVar16 = *(int *)(local_110[3] + 8);
  if (iVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar16);
  }
  if (iVar16 != 0) {
    FUN_1472c1754(&local_a8);
    lVar11 = (longlong)(int)((longlong *)local_110[3])[1];
    if (lVar11 != 0) {
      lVar18 = *(longlong *)local_110[3];
      lVar11 = lVar11 * 0xf8;
      lVar17 = lVar18 + lVar11;
      lVar15 = 0;
      iVar16 = 0;
      do {
        iVar16 = iVar16 + *(int *)(lVar18 + 0x48 + lVar15);
        lVar15 = lVar15 + 0xf8;
        plVar14 = local_110;
        local_108 = lVar17;
      } while (lVar11 - lVar15 != 0);
      do {
        uVar7 = uStack_a0;
        lVar11 = *plVar14;
        lVar15 = *(longlong *)(lVar11 + 0x10);
        if (lVar15 != 0) {
          LOCK();
          *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
          UNLOCK();
          lVar11 = *plVar14;
        }
        uVar4 = *(undefined4 *)(lVar11 + 0x30);
        uVar9 = *(uint *)(lVar18 + 4);
        uVar5 = *(undefined4 *)(lVar18 + 8);
        if (*(char *)(lVar18 + 0xf0) == '\0') {
          uVar19 = *(undefined1 *)(lVar18 + 0xe);
        }
        else {
          uVar19 = 0;
        }
        lVar11 = (longlong)(int)uStack_a0;
        uVar8 = (int)uStack_a0 + 1;
        uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar8);
        if (uStack_a0._4_4_ < uVar8) {
          FUN_1471b2628(&local_a8,uVar7 & 0xffffffff);
          plVar14 = local_110;
          lVar17 = local_108;
        }
        *(longlong *)(local_a8 + lVar11 * 0x28) = lVar15;
        if (lVar15 != 0) {
          LOCK();
          *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
          UNLOCK();
        }
        lVar11 = local_a8 + lVar11 * 0x28;
        *(undefined8 *)(lVar11 + 8) = 3;
        *(undefined4 *)(lVar11 + 0x10) = uVar4;
        *(int *)(lVar11 + 0x14) = iVar16;
        *(uint *)(lVar11 + 0x18) = uVar9 / 3;
        *(undefined4 *)(lVar11 + 0x1c) = uVar5;
        *(undefined2 *)(lVar11 + 0x20) = 0x100;
        *(undefined1 *)(lVar11 + 0x22) = uVar19;
        if (lVar15 != 0) {
          LOCK();
          puVar1 = (uint *)(lVar15 + 8);
          uVar9 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar9 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(lVar15 + 8);
            LOCK();
            uVar9 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar9 >> 0x1e & 1) == 0) {
              bVar3 = *(byte *)(lVar15 + 0xd);
              plVar12 = (longlong *)FUN_14001cc68(0x10,8);
              plVar12[1] = lVar15;
              plVar13 = DAT_14ca843c0;
              plVar10 = DAT_14ca843c8;
              plVar14 = local_110;
              lVar17 = local_108;
              if ((bVar3 & 2) == 0) {
                do {
                  *plVar12 = (longlong)plVar13;
                  LOCK();
                  bVar20 = plVar13 != DAT_14ca843c0;
                  plVar10 = plVar12;
                  if (bVar20) {
                    plVar13 = DAT_14ca843c0;
                    plVar10 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar10;
                  UNLOCK();
                } while (bVar20);
              }
              else {
                do {
                  *plVar12 = (longlong)plVar10;
                  LOCK();
                  bVar20 = plVar10 != DAT_14ca843c8;
                  plVar13 = plVar12;
                  if (bVar20) {
                    plVar10 = DAT_14ca843c8;
                    plVar13 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar13;
                  UNLOCK();
                } while (bVar20);
              }
            }
          }
        }
        lVar18 = lVar18 + 0xf8;
      } while (lVar18 != lVar17);
    }
  }
  FUN_14737756a(&uStack_80,&local_a8);
  if ((int)local_110[4] < (int)(uint)*(byte *)(local_110[5] + 0x1b)) {
    local_81 = 1;
  }
  *(undefined4 *)(local_110[6] + 0x98) = *(undefined4 *)(local_110[5] + 0x20);
  *(char *)(local_110[6] + 0x9c) = (char)local_110[4];
  lVar11 = local_110[6];
  FUN_147377468(&local_f8,&local_98);
  ppcVar2 = (char **)(lVar11 + 0x40);
  if (ppcVar2 != &local_f8) {
    pcVar6 = *ppcVar2;
    *ppcVar2 = local_f8;
    local_f8 = (char *)0x0;
    if (pcVar6 != (char *)0x0) {
      LOCK();
      puVar1 = (uint *)(pcVar6 + 8);
      uVar9 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar9 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(pcVar6 + 8);
        LOCK();
        uVar9 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar9 >> 0x1e & 1) == 0) {
          bVar3 = pcVar6[0xd];
          plVar10 = (longlong *)FUN_14001cc68(0x10,8);
          plVar10[1] = (longlong)pcVar6;
          plVar14 = DAT_14ca843c0;
          plVar13 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar10 = (longlong)plVar14;
              LOCK();
              bVar20 = plVar14 != DAT_14ca843c0;
              plVar13 = plVar10;
              if (bVar20) {
                plVar14 = DAT_14ca843c0;
                plVar13 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar13;
              UNLOCK();
            } while (bVar20);
          }
          else {
            do {
              *plVar10 = (longlong)plVar13;
              LOCK();
              bVar20 = plVar13 != DAT_14ca843c8;
              plVar14 = plVar10;
              if (bVar20) {
                plVar13 = DAT_14ca843c8;
                plVar14 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar14;
              UNLOCK();
            } while (bVar20);
          }
        }
      }
    }
  }
  *(undefined4 *)(lVar11 + 0x48) = local_f0;
  *(uint *)(lVar11 + 0x4c) = uStack_ec;
  *(undefined4 *)(lVar11 + 0x50) = uStack_e8;
  *(undefined4 *)(lVar11 + 0x54) = uStack_e4;
  FUN_140520998(lVar11 + 0x58,&local_e0);
  *(undefined4 *)(lVar11 + 0x68) = local_d0;
  *(undefined4 *)(lVar11 + 0x6c) = uStack_cc;
  *(undefined4 *)(lVar11 + 0x70) = uStack_c8;
  *(undefined4 *)(lVar11 + 0x74) = uStack_c4;
  *(undefined4 *)(lVar11 + 0x78) = local_c0;
  *(undefined4 *)(lVar11 + 0x7c) = uStack_bc;
  *(undefined4 *)(lVar11 + 0x80) = uStack_b8;
  *(undefined4 *)(lVar11 + 0x84) = uStack_b4;
  *(undefined4 *)(lVar11 + 0x88) = local_b0;
  FUN_14005bcf4(local_e0,local_d8);
  if (local_e0 != 0) {
    FUN_1400020a8();
  }
  pcVar6 = local_f8;
  if (local_f8 != (char *)0x0) {
    LOCK();
    puVar1 = (uint *)(local_f8 + 8);
    uVar9 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar9 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_f8 + 8);
      LOCK();
      uVar9 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar9 >> 0x1e & 1) == 0) {
        bVar3 = local_f8[0xd];
        plVar10 = (longlong *)FUN_14001cc68(0x10,8);
        plVar10[1] = (longlong)pcVar6;
        plVar14 = DAT_14ca843c0;
        plVar13 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar10 = (longlong)plVar14;
            LOCK();
            bVar20 = plVar14 != DAT_14ca843c0;
            plVar13 = plVar10;
            if (bVar20) {
              plVar14 = DAT_14ca843c0;
              plVar13 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar13;
            UNLOCK();
          } while (bVar20);
        }
        else {
          do {
            *plVar10 = (longlong)plVar13;
            LOCK();
            bVar20 = plVar13 != DAT_14ca843c8;
            plVar14 = plVar10;
            if (bVar20) {
              plVar13 = DAT_14ca843c8;
              plVar14 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar14;
            UNLOCK();
          } while (bVar20);
        }
      }
    }
  }
  plVar14 = local_110;
  (**(code **)(*(longlong *)local_110[6] + 0x18))((longlong *)local_110[6],local_100);
  *(undefined1 *)plVar14[7] = 1;
  FUN_14005bcf4(local_a8,uStack_a0 & 0xffffffff);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  FUN_14005bcf4(CONCAT17(uStack_79,uStack_80),uStack_78);
  if (CONCAT17(uStack_79,uStack_80) != 0) {
    FUN_1400020a8();
  }
  lVar11 = local_98;
  if (local_98 != 0) {
    LOCK();
    puVar1 = (uint *)(local_98 + 8);
    uVar9 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar9 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_98 + 8);
      LOCK();
      uVar9 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar9 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_98 + 0xd);
        plVar10 = (longlong *)FUN_14001cc68(0x10,8);
        plVar10[1] = lVar11;
        plVar14 = DAT_14ca843c0;
        plVar13 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar10 = (longlong)plVar14;
            LOCK();
            bVar20 = plVar14 != DAT_14ca843c0;
            plVar13 = plVar10;
            if (bVar20) {
              plVar14 = DAT_14ca843c0;
              plVar13 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar13;
            UNLOCK();
          } while (bVar20);
        }
        else {
          do {
            *plVar10 = (longlong)plVar13;
            LOCK();
            bVar20 = plVar13 != DAT_14ca843c8;
            plVar14 = plVar10;
            if (bVar20) {
              plVar13 = DAT_14ca843c8;
              plVar14 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar14;
            UNLOCK();
          } while (bVar20);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1436f659c FUN_1436f659c body=29 status=ok
// SIG undefined FUN_1436f659c(void)

void FUN_1436f659c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1436f65ba FUN_1436f65ba body=29 status=ok
// SIG undefined FUN_1436f65ba(void)

undefined8 FUN_1436f65ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1436f65d8 FUN_1436f65d8 body=43 status=ok
// SIG undefined FUN_1436f65d8(void)

void FUN_1436f65d8(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = (code *)*param_1;
  plVar2 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[2];
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001436f6600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}



// FUNCTION 1436f660e FUN_1436f660e body=29 status=ok
// SIG undefined FUN_1436f660e(void)

void FUN_1436f660e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1436f662c FUN_1436f662c body=71 status=ok
// SIG undefined FUN_1436f662c(void)

undefined8 * FUN_1436f662c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14aa98e50;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1436f6674 FUN_1436f6674 body=282 status=ok
// SIG undefined FUN_1436f6674(void)

undefined8 * FUN_1436f6674(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1436ef87f);
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



// FUNCTION 1436f678e FUN_1436f678e body=141 status=ok
// SIG undefined FUN_1436f678e(void)

void FUN_1436f678e(undefined8 *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  pcVar2 = (code *)param_1[0x16];
  plVar4 = (longlong *)param_1[0x18];
  if ((longlong *)param_1[0x18] == (longlong *)0x0) {
    plVar4 = param_1 + 0x1a;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3);
  if (param_1[0x16] != 0) {
    plVar4 = param_1 + 0x1a;
    if ((longlong *)param_1[0x18] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x18];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001436f680f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1436f682e FUN_1436f682e body=12 status=ok
// SIG undefined FUN_1436f682e(void)

void FUN_1436f682e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001436f6837. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1436f683a FUN_1436f683a body=29 status=ok
// SIG undefined FUN_1436f683a(void)

undefined8 FUN_1436f683a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1436f6858 FUN_1436f6858 body=51 status=ok
// SIG undefined FUN_1436f6858(void)

void FUN_1436f6858(undefined8 *param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = (code *)*param_1;
  plVar2 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[2];
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001436f6888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_2);
  return;
}



// FUNCTION 1436f6896 FUN_1436f6896 body=29 status=ok
// SIG undefined FUN_1436f6896(void)

void FUN_1436f6896(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1436f68b4 FUN_1436f68b4 body=71 status=ok
// SIG undefined FUN_1436f68b4(void)

undefined8 * FUN_1436f68b4(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14aa98ef0;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1436f68fc FUN_1436f68fc body=282 status=ok
// SIG undefined FUN_1436f68fc(void)

undefined8 * FUN_1436f68fc(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1436ef87f);
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



// FUNCTION 1436f6a16 FUN_1436f6a16 body=148 status=ok
// SIG undefined FUN_1436f6a16(void)

void FUN_1436f6a16(undefined8 *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  pcVar2 = (code *)param_1[0x16];
  plVar4 = (longlong *)param_1[0x18];
  if ((longlong *)param_1[0x18] == (longlong *)0x0) {
    plVar4 = param_1 + 0x1a;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,&DAT_14ca85100);
  if (param_1[0x16] != 0) {
    plVar4 = param_1 + 0x1a;
    if ((longlong *)param_1[0x18] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x18];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001436f6a9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1436f6aaa FUN_1436f6aaa body=656 status=ok
// SIG undefined FUN_1436f6aaa(void)

void FUN_1436f6aaa(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined1 auStack_128 [40];
  longlong local_100;
  undefined4 local_f8;
  undefined1 local_f4;
  undefined1 local_f3;
  undefined2 local_f2;
  longlong local_f0;
  undefined4 local_e8;
  undefined1 local_e4;
  char local_e3;
  char local_e2;
  undefined1 local_e1;
  longlong local_e0;
  undefined4 local_d8;
  char local_d4;
  char local_d3;
  char local_d2;
  undefined1 local_d1;
  undefined8 local_90;
  longlong local_88;
  int7 iStack_80;
  undefined1 uStack_79;
  undefined8 *local_78;
  int6 iStack_70;
  undefined2 uStack_6a;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined2 local_44;
  undefined1 local_42;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_90 = 0x400000000;
  local_88 = 0;
  _iStack_80 = 0;
  local_78 = (undefined8 *)0x0;
  _iStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0xff;
  local_42 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  (**(code **)(*(longlong *)param_1[1] + 0x18))();
  (**(code **)(*(longlong *)param_1[2] + 0x18))((longlong *)param_1[2],param_2);
  (**(code **)(*(longlong *)param_1[3] + 0x18))((longlong *)param_1[3],param_2);
  local_100 = param_1[1];
  local_f3 = *(undefined1 *)(local_100 + 0x30);
  local_f8 = 0;
  local_f4 = 0;
  local_f2 = 3;
  local_68 = *(undefined8 *)(local_100 + 0x18);
  lVar2 = param_1[2];
  uStack_60 = *(undefined8 *)(lVar2 + 0x48);
  cVar1 = *(char *)(lVar2 + 0x81);
  local_f0 = lVar2 + 0x10;
  local_e3 = cVar1 * '\b' + '\b';
  local_e2 = (cVar1 != '\0') * '\t' + '\x05';
  local_e8 = 0;
  local_e4 = 0;
  local_e1 = 4;
  local_d4 = cVar1 * '\x04' + '\x04';
  local_d8 = 0;
  local_d1 = 4;
  local_e0 = local_f0;
  local_d3 = local_e3;
  local_d2 = local_e2;
  FUN_14472d638(lVar2,*param_1,&local_100,0xffffffff);
  lVar2 = param_1[2];
  uVar4 = *(int *)(lVar2 + 0x78) - 1;
  if (0 < *(int *)(lVar2 + 0x78)) {
    uVar4 = 0;
  }
  local_44 = CONCAT11(*(undefined1 *)(lVar2 + 0x78),(char)uVar4);
  local_58 = *(undefined8 *)(lVar2 + 0x58);
  if ((-1 < (int)uVar4) && (uVar4 < *(uint *)(lVar2 + 0x78))) {
    bVar3 = *(char *)(lVar2 + 0x80) + 2;
    local_88 = lVar2 + 0x28;
    uVar5 = 0xc;
    if (*(char *)(lVar2 + 0x80) != '\0') {
      uVar5 = 2;
    }
    _iStack_80 = CONCAT17(4,(uint7)CONCAT12(uVar5,CONCAT11((char)(*(uint *)(lVar2 + 0x78) <<
                                                                 (bVar3 & 0x1f)),
                                                           (char)(uVar4 << (bVar3 & 0x1f)))) << 0x20
                         );
  }
  local_78 = (undefined8 *)param_1[3];
  if (*(int *)((longlong)local_78 + 0x34) == 0) {
    local_78 = &DAT_14ca94d98;
    uStack_50 = DAT_14ca94db0;
    local_48 = 0;
    bVar3 = 0;
  }
  else {
    uStack_50 = local_78[4];
    local_48 = 0xffffffff;
    bVar3 = *(byte *)(local_78 + 6);
  }
  _iStack_70 = CONCAT26(0x408,(uint6)bVar3 << 0x28);
  FUN_140ba0b60(*param_1,param_2);
  (**(code **)(*(longlong *)*param_1 + 0x18))((longlong *)*param_1,param_2);
  if ((local_28 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436f6d46 FUN_1436f6d46 body=29 status=ok
// SIG undefined FUN_1436f6d46(void)

void FUN_1436f6d46(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1436f6d64 FUN_1436f6d64 body=29 status=ok
// SIG undefined FUN_1436f6d64(void)

undefined8 FUN_1436f6d64(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1436f6d9c FUN_1436f6d9c body=12 status=ok
// SIG undefined FUN_1436f6d9c(void)

void FUN_1436f6d9c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001436f6da5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1436f6da8 FUN_1436f6da8 body=29 status=ok
// SIG undefined FUN_1436f6da8(void)

undefined8 FUN_1436f6da8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1436f6dc6 FUN_1436f6dc6 body=282 status=ok
// SIG undefined FUN_1436f6dc6(void)

undefined8 * FUN_1436f6dc6(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1436ef87f);
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



// FUNCTION 1436f6ee0 FUN_1436f6ee0 body=122 status=ok
// SIG undefined FUN_1436f6ee0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436f6ee0(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_147d8dfd0(*(undefined8 *)(_DAT_000000a8 + 0x18),&DAT_14ca85100,1);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_147d8dfd0(*(undefined8 *)(param_1[0x15] + 0x18),&DAT_14ca85100,1);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001436f6f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1436f6f80 FUN_1436f6f80 body=12 status=ok
// SIG undefined FUN_1436f6f80(void)

void FUN_1436f6f80(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001436f6f89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1436f6f8c FUN_1436f6f8c body=29 status=ok
// SIG undefined FUN_1436f6f8c(void)

undefined8 FUN_1436f6f8c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1436f6faa FUN_1436f6faa body=282 status=ok
// SIG undefined FUN_1436f6faa(void)

undefined8 * FUN_1436f6faa(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1436ef87f);
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



// FUNCTION 1436f70c4 FUN_1436f70c4 body=93 status=ok
// SIG undefined FUN_1436f70c4(void)

void FUN_1436f70c4(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  plVar2 = *(longlong **)(param_1[0x15] + 0x30);
  if (plVar2 != (longlong *)0x0) {
    *(undefined8 *)(param_1[0x15] + 0x30) = 0;
    (**(code **)(*plVar2 + 0x38))();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001436f7117. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1436f712e FUN_1436f712e body=12 status=ok
// SIG undefined FUN_1436f712e(void)

void FUN_1436f712e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001436f7137. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1436f713a FUN_1436f713a body=83 status=ok
// SIG undefined FUN_1436f713a(void)

undefined8 * FUN_1436f713a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14aa99050;
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



// FUNCTION 1436f718e FUN_1436f718e body=282 status=ok
// SIG undefined FUN_1436f718e(void)

undefined8 * FUN_1436f718e(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1436ef87f);
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



// FUNCTION 1436f72a8 FUN_1436f72a8 body=107 status=ok
// SIG undefined FUN_1436f72a8(void)

ulonglong FUN_1436f72a8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar4 = (ulonglong)DAT_14c7585c8;
  plVar3 = (longlong *)param_1[0x16];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      uVar4 = (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(param_1 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001436f7308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)*param_1)(param_1,1);
      return uVar4;
    }
  }
  return uVar4;
}



// FUNCTION 1436f7314 FUN_1436f7314 body=514 status=ok
// SIG undefined FUN_1436f7314(void)

void FUN_1436f7314(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar9 = param_1[1];
  plVar4 = (longlong *)param_1[2];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar10 = *(longlong *)(*param_1 + 0x18);
  plVar8 = *(longlong **)(*param_1 + 0x20);
  plVar7 = plVar4;
  if (plVar8 == (longlong *)0x0) {
    if (lVar10 == 0) goto LAB_1436f73d0;
    if (lVar9 != 0) goto LAB_1436f7381;
LAB_1436f749d:
    plVar8 = (longlong *)0x0;
LAB_1436f749f:
    plVar7 = plVar8;
    lVar9 = lVar10;
    if (plVar4 == (longlong *)0x0) goto LAB_1436f73df;
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_1436f73df;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar4;
    plVar4 = plVar8;
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    if (lVar10 == 0) {
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
        if (*piVar2 == 0) goto LAB_1436f73c7;
      }
LAB_1436f73d0:
      if (lVar9 != 0) goto LAB_1436f73df;
    }
    else {
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
      if (lVar9 != 0) {
LAB_1436f7381:
        lVar10 = *param_1;
        *(undefined8 *)(lVar10 + 0x18) = 0;
        plVar8 = *(longlong **)(lVar10 + 0x20);
        if (plVar8 == (longlong *)0x0) goto LAB_1436f73df;
        *(undefined8 *)(lVar10 + 0x20) = 0;
        LOCK();
        plVar1 = plVar8 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 != 0) goto LAB_1436f73df;
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 != 0) goto LAB_1436f73df;
LAB_1436f73c7:
        (**(code **)(*plVar8 + 0x10))(plVar8);
        goto LAB_1436f73d0;
      }
    }
    lVar10 = *(longlong *)(*param_1 + 0x18);
    plVar8 = *(longlong **)(*param_1 + 0x20);
    if (plVar8 == (longlong *)0x0) goto LAB_1436f749d;
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    if (plVar8 != plVar4) goto LAB_1436f749f;
    LOCK();
    plVar1 = plVar8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    lVar9 = lVar10;
    if ((int)*plVar1 != 0) goto LAB_1436f73df;
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar2 = (int *)((longlong)plVar8 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar8;
  }
  plVar7 = plVar4;
  lVar9 = lVar10;
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))();
  }
LAB_1436f73df:
  lVar10 = *param_1;
  lVar5 = *(longlong *)(lVar10 + 0x28);
  if (*(char *)(lVar9 + 0xa1) == '\x01') {
    lVar6 = *(longlong *)(lVar9 + 0xa4);
    *(undefined8 *)(lVar5 + 0x18) = 0;
  }
  else {
    *(longlong *)(lVar5 + 0x18) = param_1[3];
    lVar6 = param_1[4];
  }
  *(longlong *)(lVar5 + 0x20) = lVar6;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(lVar10 + 0x20);
  *(longlong *)(lVar10 + 0x18) = lVar9;
  *(longlong **)(lVar10 + 0x20) = plVar7;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar4 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar7 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001436f744c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x10))(plVar7);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1436f7526 FUN_1436f7526 body=29 status=ok
// SIG undefined FUN_1436f7526(void)

void FUN_1436f7526(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1436f7544 FUN_1436f7544 body=83 status=ok
// SIG undefined FUN_1436f7544(void)

undefined8 * FUN_1436f7544(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14aa990c0;
  plVar3 = (longlong *)param_1[3];
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



// FUNCTION 1436f7598 FUN_1436f7598 body=282 status=ok
// SIG undefined FUN_1436f7598(void)

undefined8 * FUN_1436f7598(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1436ef87f);
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



// FUNCTION 1436f76b2 FUN_1436f76b2 body=119 status=ok
// SIG undefined FUN_1436f76b2(void)

void FUN_1436f76b2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1436f7314(param_1 + 0x15);
  plVar3 = (longlong *)param_1[0x17];
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
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(param_1 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001436f771e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1436f772a FUN_1436f772a body=312 status=ok
// SIG undefined FUN_1436f772a(void)

ulonglong FUN_1436f772a(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  lVar4 = *(longlong *)(param_1 + 0x10) + 8;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar4 = 0;
  }
  uVar1 = FUN_14493c560();
  if (uVar1 == 0) {
    uVar2 = 0;
    uVar7 = 0;
    lVar6 = 0;
  }
  else {
    uVar7 = (ulonglong)(uVar1 >> 0xe);
    uVar2 = uVar1 & 0x3fff;
    lVar6 = (ulonglong)(uVar2 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
  }
  *(longlong *)(lVar6 + 8) = lVar4;
  do {
    uVar5 = DAT_14ca96680;
    uVar3 = (DAT_14ca96680 & 0xfffffffffc000000) + 0x4000000;
    if (uVar3 >> 0x1a < DAT_14ca96680 >> 0x1a) {
      FUN_14000f986(0x3a83126f);
    }
    if (uVar1 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar2 * 0x18);
    }
    *(uint *)(lVar4 + 0x10) = (uint)uVar5 & 0x3ffffff;
    LOCK();
    bVar8 = uVar5 != DAT_14ca96680;
    uVar3 = uVar3 | uVar1;
    if (bVar8) {
      uVar5 = DAT_14ca96680;
      uVar3 = DAT_14ca96680;
    }
    DAT_14ca96680 = uVar3;
    UNLOCK();
  } while (bVar8);
  return uVar5;
}



// FUNCTION 1436f7862 FUN_1436f7862 body=29 status=ok
// SIG undefined FUN_1436f7862(void)

undefined8 FUN_1436f7862(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1436f7880 FUN_1436f7880 body=93 status=ok
// SIG undefined FUN_1436f7880(void)

void FUN_1436f7880(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = (int)param_1[1];
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(*param_1 + lVar3 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1,1);
        iVar2 = (int)param_1[1];
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  plVar1 = (longlong *)param_1[2];
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001436f78d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 1436f78e8 FUN_1436f78e8 body=12 status=ok
// SIG undefined FUN_1436f78e8(void)

void FUN_1436f78e8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001436f78f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1436f78f4 FUN_1436f78f4 body=57 status=ok
// SIG undefined FUN_1436f78f4(void)

undefined8 * FUN_1436f78f4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14aa99200;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1436f792e FUN_1436f792e body=282 status=ok
// SIG undefined FUN_1436f792e(void)

undefined8 * FUN_1436f792e(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1436ef87f);
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



// FUNCTION 1436f7a48 FUN_1436f7a48 body=162 status=ok
// SIG undefined FUN_1436f7a48(void)

void FUN_1436f7a48(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  iVar3 = *(int *)(param_1 + 0x16);
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      plVar2 = *(longlong **)(param_1[0x15] + lVar4 * 8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x28))(plVar2,1);
        iVar3 = *(int *)(param_1 + 0x16);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  plVar2 = (longlong *)param_1[0x17];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,1);
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001436f7adf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1436f7b08 FUN_1436f7b08 body=12 status=ok
// SIG undefined FUN_1436f7b08(void)

void FUN_1436f7b08(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001436f7b11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1436f7b14 FUN_1436f7b14 body=163 status=ok
// SIG undefined FUN_1436f7b14(void)

undefined8 * FUN_1436f7b14(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_LAB_14aa99260;
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



// FUNCTION 1436f7bb8 FUN_1436f7bb8 body=282 status=ok
// SIG undefined FUN_1436f7bb8(void)

undefined8 * FUN_1436f7bb8(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1436ef87f);
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



// FUNCTION 1436f7cd2 FUN_1436f7cd2 body=206 status=ok
// SIG undefined FUN_1436f7cd2(void)

void FUN_1436f7cd2(undefined8 *param_1)

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
  (**(code **)(*(longlong *)param_1[0x15] + 0x10))((longlong *)param_1[0x15],param_1 + 0x16);
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
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(param_1 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001436f7d7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1436f7de4 FUN_1436f7de4 body=12 status=ok
// SIG undefined FUN_1436f7de4(void)

void FUN_1436f7de4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001436f7ded. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1436f7df0 FUN_1436f7df0 body=29 status=ok
// SIG undefined FUN_1436f7df0(void)

undefined8 FUN_1436f7df0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1436f7e0e FUN_1436f7e0e body=282 status=ok
// SIG undefined FUN_1436f7e0e(void)

undefined8 * FUN_1436f7e0e(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1436ef87f);
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



// FUNCTION 1436f7f28 FUN_1436f7f28 body=97 status=ok
// SIG undefined FUN_1436f7f28(void)

void FUN_1436f7f28(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar2 = param_1[0x15];
  *(undefined8 *)(lVar2 + 0x30) = param_1[0x16];
  FUN_1447fd100(lVar2 + 0x20,&DAT_14ca85100);
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001436f7f7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1436f7fa4 FUN_1436f7fa4 body=12 status=ok
// SIG undefined FUN_1436f7fa4(void)

void FUN_1436f7fa4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001436f7fad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1436f7fb0 FUN_1436f7fb0 body=57 status=ok
// SIG undefined FUN_1436f7fb0(void)

undefined8 * FUN_1436f7fb0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14aa99780;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1436f7fea FUN_1436f7fea body=282 status=ok
// SIG undefined FUN_1436f7fea(void)

undefined8 * FUN_1436f7fea(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1436ef87f);
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



// FUNCTION 1436f8104 FUN_1436f8104 body=99 status=ok
// SIG undefined FUN_1436f8104(void)

void FUN_1436f8104(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1436ee070(param_1[0x15],param_1 + 0x16);
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001436f815d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1436f8168 FUN_1436f8168 body=68 status=ok
// SIG undefined FUN_1436f8168(void)

void FUN_1436f8168(longlong *param_1)

{
  longlong *plVar1;
  
  (**(code **)(*(longlong *)(*param_1 + 0x10) + 0x28))(*param_1 + 0x10,param_1[1]);
  plVar1 = (longlong *)param_1[1];
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar1);
    return;
  }
  return;
}



// FUNCTION 1436f81b6 FUN_1436f81b6 body=12 status=ok
// SIG undefined FUN_1436f81b6(void)

void FUN_1436f81b6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001436f81bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1436f81c2 FUN_1436f81c2 body=29 status=ok
// SIG undefined FUN_1436f81c2(void)

undefined8 FUN_1436f81c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1436f81e0 FUN_1436f81e0 body=282 status=ok
// SIG undefined FUN_1436f81e0(void)

undefined8 * FUN_1436f81e0(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1436ef87f);
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



// FUNCTION 1436f82fa FUN_1436f82fa body=124 status=ok
// SIG undefined FUN_1436f82fa(void)

void FUN_1436f82fa(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  (**(code **)(*(longlong *)(param_1[0x15] + 0x10) + 0x28))(param_1[0x15] + 0x10,param_1[0x16]);
  plVar2 = (longlong *)param_1[0x16];
  if (plVar2 != (longlong *)0x0) {
    if (*plVar2 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar2);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001436f836b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1436f8376 FUN_1436f8376 body=144 status=ok
// SIG undefined FUN_1436f8376(void)

void FUN_1436f8376(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  iVar2 = (*(code *)**(undefined8 **)*param_1)();
  iVar3 = *(int *)(param_1[1] + 0x10);
  if (iVar2 == iVar3) {
    iVar3 = (**(code **)(*(longlong *)*param_1 + 8))();
    lVar4 = param_1[1];
    iVar2 = *(int *)(lVar4 + 0x14);
    if (iVar3 == iVar2) goto LAB_1436f83ce;
    iVar3 = *(int *)(lVar4 + 0x10);
  }
  else {
    iVar2 = *(int *)(param_1[1] + 0x14);
  }
  lVar4 = *param_1;
  *(int *)(lVar4 + 0x30) = iVar3;
  *(int *)(lVar4 + 0x34) = iVar2;
  FUN_1447fd100(lVar4 + 0x20,&DAT_14ca85100);
  lVar4 = param_1[1];
LAB_1436f83ce:
  (**(code **)(*(longlong *)(*param_1 + 0x10) + 0x28))(*param_1 + 0x10,lVar4);
  plVar1 = (longlong *)param_1[1];
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar1);
    return;
  }
  return;
}



// FUNCTION 1436f8410 FUN_1436f8410 body=12 status=ok
// SIG undefined FUN_1436f8410(void)

void FUN_1436f8410(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001436f8419. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1436f841c FUN_1436f841c body=29 status=ok
// SIG undefined FUN_1436f841c(void)

undefined8 FUN_1436f841c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1436f843a FUN_1436f843a body=282 status=ok
// SIG undefined FUN_1436f843a(void)

undefined8 * FUN_1436f843a(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1436ef87f);
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



// FUNCTION 1436f8554 FUN_1436f8554 body=218 status=ok
// SIG undefined FUN_1436f8554(void)

void FUN_1436f8554(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  iVar3 = (*(code *)**(undefined8 **)param_1[0x15])();
  iVar4 = *(int *)(param_1[0x16] + 0x10);
  if (iVar3 == iVar4) {
    iVar4 = (**(code **)(*(longlong *)param_1[0x15] + 8))();
    lVar5 = param_1[0x16];
    iVar3 = *(int *)(lVar5 + 0x14);
    if (iVar4 == iVar3) goto LAB_1436f85d1;
    iVar4 = *(int *)(lVar5 + 0x10);
  }
  else {
    iVar3 = *(int *)(param_1[0x16] + 0x14);
  }
  lVar5 = param_1[0x15];
  *(int *)(lVar5 + 0x30) = iVar4;
  *(int *)(lVar5 + 0x34) = iVar3;
  FUN_1447fd100(lVar5 + 0x20,&DAT_14ca85100);
  lVar5 = param_1[0x16];
LAB_1436f85d1:
  (**(code **)(*(longlong *)(param_1[0x15] + 0x10) + 0x28))(param_1[0x15] + 0x10,lVar5);
  plVar2 = (longlong *)param_1[0x16];
  if (plVar2 != (longlong *)0x0) {
    if (*plVar2 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar2);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001436f8623. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1436f862e FUN_1436f862e body=9 status=ok
// SIG undefined FUN_1436f862e(void)

void FUN_1436f862e(longlong param_1)

{
  FUN_147d3060c(param_1 + 0x10);
  return;
}



// FUNCTION 1436f8638 FUN_1436f8638 body=29 status=ok
// SIG undefined FUN_1436f8638(void)

undefined8 FUN_1436f8638(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1436f8656 FUN_1436f8656 body=9 status=ok
// SIG undefined FUN_1436f8656(void)

void FUN_1436f8656(longlong param_1)

{
  FUN_147d3060c(param_1 + 0x10);
  return;
}



// FUNCTION 1436f8660 FUN_1436f8660 body=29 status=ok
// SIG undefined FUN_1436f8660(void)

undefined8 FUN_1436f8660(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1436f867e FUN_1436f867e body=9 status=ok
// SIG undefined FUN_1436f867e(void)

void FUN_1436f867e(longlong param_1)

{
  FUN_147d3060c(param_1 + 0x10);
  return;
}



// FUNCTION 1436f8688 FUN_1436f8688 body=29 status=ok
// SIG undefined FUN_1436f8688(void)

undefined8 FUN_1436f8688(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1436f86a6 FUN_1436f86a6 body=9 status=ok
// SIG undefined FUN_1436f86a6(void)

void FUN_1436f86a6(longlong param_1)

{
  FUN_147d3060c(param_1 + 0x10);
  return;
}



// FUNCTION 1436f86b0 FUN_1436f86b0 body=29 status=ok
// SIG undefined FUN_1436f86b0(void)

undefined8 FUN_1436f86b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1436f873a FUN_1436f873a body=2127 status=ok
// SIG undefined FUN_1436f873a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436f873a(void)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  char *pcVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  char *local_50;
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  ppuStack_60 = &PTR_FUN_14aa90be0;
  uStack_58 = 1;
  local_68 = (char **)0x3;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aa90c80,1,&PTR_FUN_14aa90c00);
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_50,&DAT_14cb07938);
  if (cVar2 == '\0') {
    _DAT_14cb07938 = 0;
    uRam000000014cb07940 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = (char **)0x3;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14aa91040);
  local_68 = (char **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb07998,L"r.SkeletalMesh.KeepMobileMinLODSettingOnDesktop",&DAT_14cb07990,
                L"If non-zero, mobile setting for MinLOD will be stored in the cooked data for desktop platforms"
               );
  atexit(FUN_1436be2a7);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = (char **)0x7;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14aa91bc0);
  local_68 = (char **)0x0;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aa920d0,1,0);
  local_68._0_4_ = 4;
  FUN_1463e9db8(&DAT_14cb07a68,L"r.SkeletalMeshReductionModule",L"SkeletalMeshReduction",
                L"Name of what skeletal mesh reduction module to choose. If blank it chooses any that exist.\n"
               );
  atexit(FUN_1436bfc6f);
  local_68._0_4_ = 0;
  FUN_1415c789c(&DAT_14cb07a98,L"r.MorphTarget.MaxBlendWeight",&DAT_14c761b38,
                L"Maximum value accepted as a morph target blend weight..\nBlend target weights will be checked against this value for validation.Values smaller than this number will be clamped.\n"
               );
  atexit(FUN_1436bfcb4);
  local_50 = (char *)CONCAT71(local_50._1_7_,1);
  local_68._0_4_ = 0;
  FUN_140bd5914(&DAT_14cb07ab8,L"r.SkeletalMeshClothBlend.Enabled",&local_50,
                L"Enable the use of the cloth blend weight value set by the skeletal mesh component. When disabled all cloth blend weight will become 0."
               );
  atexit(FUN_1436bfcf9);
  local_50 = "bone";
  local_48 = (code *)CONCAT35(local_48._5_3_,4);
  FUN_14001a6c0(&local_50,1);
  _DAT_14cb07ae0 = 0;
  uRam000000014cb07ae8 = 0;
  _DAT_14cb07af0 = 0;
  uRam000000014cb07af4 = 0;
  uRam000000014cb07af8 = 0;
  uRam000000014cb07afc = 0x3ff00000;
  local_50 = (char *)((ulonglong)local_50 & 0xffffffff00000000);
  local_68._0_4_ = 0x21;
  FUN_14078dbce(&DAT_14cb07b00,L"r.MotionBlurDebug",&local_50,
                L"Defines if we log debugging output for motion blur rendering.\n 0: off (default)\n 1: on"
               );
  atexit(FUN_1436db90f);
  local_68._0_4_ = 4;
  FUN_141471170(&DAT_14cb07b18,L"r.MorphTarget.Mode",&DAT_14c761b3c,
                L"Use GPU for computing morph targets.\n 0: Use original CPU method (loop per morph then by vertex)\n 1: Enable GPU method (default)\n"
               );
  atexit(FUN_1436db954);
  local_68._0_4_ = 0;
  FUN_141471170(&DAT_14cb07b28,L"r.MorphTarget.ForceUpdate",&DAT_14cb07b38,
                L"Force morph target deltas to be calculated every frame.\n 0: Default\n 1: Force Update\n"
               );
  atexit(FUN_1436db999);
  FUN_140002266(&local_50,L"Set MorphTarget Weight Threshold (Default : %f).\n",0x3e45798ee0000000);
  pcVar5 = local_50;
  if ((int)local_48 == 0) {
    pcVar5 = "";
  }
  local_68 = (char **)((ulonglong)local_68._4_4_ << 0x20);
  FUN_1415c789c(&DAT_14cb07b40,L"r.MorphTarget.WeightThreshold",&DAT_14c761b40,pcVar5);
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  atexit(FUN_1436db9de);
  DAT_14cb07b60 = 0;
  _DAT_14cb07b68 = 0;
  atexit((_func_5014 *)&LAB_1436e5048);
  local_48 = FUN_145dbd2b4;
  local_50 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb07c88,&local_50);
  local_48 = FUN_145feca04;
  local_50 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb07db0,&local_50);
  DAT_14cb07dd0 = 0;
  _DAT_14cb07dd8 = 0;
  atexit((_func_5014 *)&LAB_1436e50c2);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cb07de0);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cb07de0,4000);
  atexit((_func_5014 *)&LAB_1436e50d3);
  local_68 = (char **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb07e08,L"r.GpuSkin.Pool",&DAT_14c761b44,
                L"Should we pool gpu skins.\n 0: Don\'t pool anything\n 1: Pool gpu skins bro (default)\n"
               );
  atexit(FUN_1436e50e1);
  uStack_58 = 0;
  local_68 = (char **)0x0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aa93ad0,1,0);
  ppuStack_60 = &PTR_FUN_14aa947d0;
  uStack_58 = 2;
  local_68 = (char **)0x4;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14aa94810);
  uStack_58 = 0;
  local_68 = (char **)0x0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aa94c20,1,0);
  uStack_58 = 0;
  local_68 = (char **)0x0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aa94fc0,1,0);
  FUN_1446f470e(&DAT_14cb08720,L"SceneViewport",1);
  local_50 = (char *)0x0;
  local_48 = (code *)((ulonglong)local_48 & 0xffffffff00000000);
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48._0_4_ = 2;
  *(undefined ***)local_50 = &PTR_LAB_149e170a0;
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
  *(longlong *)(local_50 + 0x10) = lVar4;
  *(undefined ***)local_50 = &PTR_FUN_149e17030;
  *(code **)(local_50 + 0x18) = FUN_1436ed229;
  ppuStack_60 = (undefined **)((ulonglong)ppuStack_60 & 0xffffffff00000000);
  local_68 = &local_50;
  FUN_141703554(&DAT_14cb07f70,L"Slate.AllowPerUserHitTesting",&DAT_14c761b48,
                L"Toggles between widgets mapping to a user id and requring a matching user id from an input event or allowing all users to interact with widget"
               );
  if ((int)local_48 != 0) {
    if (local_50 == (char *)0x0) goto LAB_1436f8cbe;
    (*(code *)**(undefined8 **)local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48._0_4_ = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_1436f8cbe:
  atexit(FUN_1436ed25b);
  uStack_58 = 0;
  local_68 = (char **)0x0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aa95ee0,1,0);
  local_50 = "AssetRegistry";
  local_48._0_5_ = 0xd;
  uVar3 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb07fd8 = (ulonglong)uVar3;
  uStack_58 = 0;
  local_68 = (char **)0x0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aa96240,1,0);
  local_50 = "UE.Attenuation";
  local_48._0_5_ = 0xe;
  uVar3 = FUN_14001a6c0(&local_50,1);
  DAT_14cb07ff8 = (ulonglong)uVar3;
  local_50 = "UE.Attenuation.Distance";
  local_48._0_5_ = 0x17;
  uVar3 = FUN_14001a6c0(&local_50,1);
  DAT_14cb086e8 = (ulonglong)uVar3;
  local_50 = "UE.Spatialization";
  local_48._0_5_ = 0x11;
  uVar3 = FUN_14001a6c0(&local_50,1);
  DAT_14cb08018 = (ulonglong)uVar3;
  local_50 = "UE.Spatialization.Azimuth";
  local_48._0_5_ = 0x19;
  uVar3 = FUN_14001a6c0(&local_50,1);
  DAT_14cb086f0 = (ulonglong)uVar3;
  local_50 = "UE.Spatialization.Elevation";
  local_48._0_5_ = 0x1b;
  uVar3 = FUN_14001a6c0(&local_50,1);
  DAT_14cb086f8 = (ulonglong)uVar3;
  local_50 = "UE.Source.Orientation";
  local_48._0_5_ = 0x15;
  uVar3 = FUN_14001a6c0(&local_50,1);
  DAT_14cb08038 = (ulonglong)uVar3;
  local_50 = "UE.Source.Orientation.Azimuth";
  local_48._0_5_ = 0x1d;
  uVar3 = FUN_14001a6c0(&local_50,1);
  DAT_14cb08700 = (ulonglong)uVar3;
  local_50 = "UE.Source.Orientation.Elevation";
  local_48._0_5_ = 0x1f;
  uVar3 = FUN_14001a6c0(&local_50,1);
  DAT_14cb08708 = (ulonglong)uVar3;
  local_50 = "UE.Listener.Orientation";
  local_48._0_5_ = 0x17;
  uVar3 = FUN_14001a6c0(&local_50,1);
  DAT_14cb08058 = (ulonglong)uVar3;
  local_50 = "UE.Listener.Orientation.Azimuth";
  local_48._0_5_ = 0x1f;
  uVar3 = FUN_14001a6c0(&local_50,1);
  DAT_14cb08710 = (ulonglong)uVar3;
  local_50 = "UE.Listener.Orientation.Elevation";
  local_48 = (code *)CONCAT35(local_48._5_3_,0x21);
  uVar3 = FUN_14001a6c0(&local_50,1);
  DAT_14cb08718 = (ulonglong)uVar3;
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1436f8f8c FUN_1436f8f8c body=55 status=ok
// SIG undefined FUN_1436f8f8c(void)

void FUN_1436f8f8c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb08730 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb08730 = FUN_14171c317(FUN_1464022df,uVar1,L"EVirtualizationMode");
  }
  return;
}



// FUNCTION 1436f8fc3 FUN_1436f8fc3 body=55 status=ok
// SIG undefined FUN_1436f8fc3(void)

void FUN_1436f8fc3(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb087c8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb087c8 = FUN_14171c317(FUN_146402667,uVar1,L"EMaxConcurrentResolutionRule");
  }
  return;
}



// FUNCTION 1436f8ffa FUN_1436f8ffa body=55 status=ok
// SIG undefined FUN_1436f8ffa(void)

void FUN_1436f8ffa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb087e0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb087e0 = FUN_14171c317(FUN_146402696,uVar1,L"EConcurrencyVolumeScaleMode");
  }
  return;
}



// FUNCTION 1436f9031 FUN_1436f9031 body=69 status=ok
// SIG undefined FUN_1436f9031(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436f9031(void)

{
  _DAT_14cb08820 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436f9073. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb08828,1);
  return;
}



// FUNCTION 1436f9076 FUN_1436f9076 body=3237 status=ok
// SIG undefined FUN_1436f9076(void)

void FUN_1436f9076(longlong *param_1,longlong param_2)

{
  uint uVar1;
  bool bVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  float fVar18;
  float _X;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_458 [40];
  longlong *local_430;
  longlong *local_428;
  longlong *local_420;
  longlong *local_418;
  longlong *local_410;
  longlong local_408;
  float local_400;
  float local_3fc;
  longlong local_3f8;
  longlong local_3f0;
  undefined4 local_3e8 [190];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_458;
  uVar1 = *(uint *)(param_1 + 5);
  local_408 = param_2;
  if (uVar1 == 0) goto LAB_1436f9c96;
  iVar9 = (int)param_1[1];
  local_418 = param_1;
  if (1 < (longlong)iVar9) {
    lVar7 = *param_1;
    memset(local_3e8,0,0x2f0);
    local_3f0 = lVar7 + (longlong)iVar9 * 8 + -8;
    local_3f8 = lVar7;
    fVar18 = logf((float)iVar9);
    local_3e8[0] = (int)(longlong)(fVar18 + fVar18);
    plVar4 = &local_3f8;
LAB_1436f9168:
    plVar8 = (longlong *)*plVar4;
    plVar10 = (longlong *)plVar4[1];
    iVar9 = (int)plVar4[2];
    iVar15 = (int)((ulonglong)((longlong)plVar10 - (longlong)plVar8) >> 3);
    plVar5 = (longlong *)(ulonglong)(iVar15 + 1);
    local_430 = plVar4;
    if (iVar9 != 0) {
LAB_1436f9195:
      if (8 < (int)(uint)plVar5) {
        local_428 = (longlong *)CONCAT44(local_428._4_4_,iVar9);
        uVar12 = (uint)plVar5 >> 1;
        lVar7 = plVar8[uVar12];
        plVar8[uVar12] = *plVar8;
        *plVar8 = lVar7;
        plVar6 = plVar10 + 1;
        plVar5 = plVar8;
        local_420 = plVar10;
        do {
          plVar5 = plVar5 + 1;
          if (plVar5 <= plVar10 && uVar1 < 3) {
            do {
              lVar7 = *plVar5;
              lVar13 = *plVar8;
              if (uVar1 == 1) {
                local_3fc = 0.0;
                local_400 = 0.0;
                FUN_14796292a(*(undefined8 *)(lVar13 + 0x58),lVar13 + 0x2b0,&local_3fc);
                FUN_14796292a(*(undefined8 *)(lVar7 + 0x58),lVar7 + 0x2b0,&local_400);
                bVar2 = local_400 < local_3fc;
                if (ABS(local_3fc - local_400) <= 0.0001) {
                  bVar2 = *(uint *)(lVar13 + 0x54) < *(uint *)(lVar7 + 0x54);
                }
                if (bVar2) break;
              }
              else {
                fVar18 = (float)FUN_1478b3d66(lVar13);
                fVar20 = (float)FUN_1478b3d66(lVar7);
                if (ABS(fVar18 - fVar20) <= 0.0001) {
                  if (*(uint *)(lVar13 + 0x54) < *(uint *)(lVar7 + 0x54)) break;
                }
                else if (fVar18 < fVar20) break;
              }
              plVar5 = plVar5 + 1;
            } while (plVar5 <= plVar10);
          }
          plVar3 = plVar6 + -1;
          if (plVar8 < plVar3 && uVar1 < 3) {
            do {
              plVar4 = plVar3;
              lVar7 = *plVar8;
              lVar13 = plVar6[-1];
              plVar3 = plVar4;
              if (uVar1 == 1) {
                local_3fc = 0.0;
                local_400 = 0.0;
                FUN_14796292a(*(undefined8 *)(lVar13 + 0x58),lVar13 + 0x2b0,&local_3fc);
                FUN_14796292a(*(undefined8 *)(lVar7 + 0x58),lVar7 + 0x2b0,&local_400);
                bVar2 = local_400 < local_3fc;
                if (ABS(local_3fc - local_400) <= 0.0001) {
                  bVar2 = *(uint *)(lVar13 + 0x54) < *(uint *)(lVar7 + 0x54);
                }
                if (bVar2) break;
              }
              else {
                fVar18 = (float)FUN_1478b3d66(lVar13);
                fVar20 = (float)FUN_1478b3d66(lVar7);
                if (ABS(fVar18 - fVar20) <= 0.0001) {
                  if (*(uint *)(lVar13 + 0x54) < *(uint *)(lVar7 + 0x54)) {
                    plVar6 = plVar4 + 1;
                    break;
                  }
                }
                else if (fVar18 < fVar20) break;
              }
              plVar3 = plVar4 + -1;
              plVar6 = plVar4;
            } while (plVar8 < plVar3);
          }
          if (plVar3 < plVar5) goto LAB_1436f9396;
          lVar7 = *plVar5;
          *plVar5 = *plVar3;
          *plVar3 = lVar7;
          plVar6 = plVar3;
        } while( true );
      }
      plVar4 = local_430;
      if (plVar10 <= plVar8) goto LAB_1436f9a71;
      local_428 = plVar8 + 1;
      plVar5 = plVar8;
      plVar6 = local_428;
      goto joined_r0x0001436f9977;
    }
LAB_1436f9443:
    plVar4 = local_430;
    if ((int)plVar5 != 0) {
      uVar12 = (iVar15 - (iVar15 + -1 >> 0x1f)) + -1 >> 1;
      local_420 = plVar5;
      do {
        plVar4 = (longlong *)(ulonglong)uVar12;
        uVar16 = uVar12 * 2 + 1;
        local_428 = plVar4;
        if ((int)uVar16 < (int)plVar5) {
          do {
            uVar12 = uVar12 * 2 + 2;
            iVar9 = (int)plVar4;
            if ((int)uVar12 < (int)plVar5) {
              plVar4 = plVar8 + (int)uVar12;
              plVar10 = plVar8 + (int)uVar16;
              lVar7 = *plVar10;
              lVar13 = *plVar4;
              if (uVar1 == 2) {
                local_410 = plVar10;
                fVar18 = (float)FUN_1478b3d66(lVar13);
                fVar20 = (float)FUN_1478b3d66(lVar7);
                if (ABS(fVar18 - fVar20) <= 0.0001) {
                  if (*(uint *)(lVar13 + 0x54) < *(uint *)(lVar7 + 0x54)) goto LAB_1436f9657;
                }
                else if (fVar18 < fVar20) {
LAB_1436f9657:
                  plVar4 = local_410;
                  uVar12 = uVar16;
                }
                uVar16 = uVar12;
                plVar6 = plVar8 + iVar9;
                lVar7 = *plVar4;
                lVar13 = *plVar6;
                plVar10 = plVar4;
                goto LAB_1436f966e;
              }
              if (uVar1 != 1) goto LAB_1436f954a;
              local_3fc = 0.0;
              local_400 = 0.0;
              local_410 = plVar10;
              FUN_14796292a(*(undefined8 *)(lVar13 + 0x58),lVar13 + 0x2b0,&local_3fc);
              FUN_14796292a(*(undefined8 *)(lVar7 + 0x58),lVar7 + 0x2b0,&local_400);
              bVar2 = local_400 < local_3fc;
              if (ABS(local_3fc - local_400) <= 0.0001) {
                bVar2 = *(uint *)(lVar13 + 0x54) < *(uint *)(lVar7 + 0x54);
              }
              plVar10 = local_410;
              if (!bVar2) {
                plVar10 = plVar4;
                uVar16 = uVar12;
              }
              plVar6 = plVar8 + iVar9;
              lVar13 = *plVar6;
              lVar7 = *plVar10;
LAB_1436f9592:
              local_3fc = 0.0;
              local_400 = 0.0;
              FUN_14796292a(*(undefined8 *)(lVar13 + 0x58),lVar13 + 0x2b0,&local_3fc);
              FUN_14796292a(*(undefined8 *)(lVar7 + 0x58),lVar7 + 0x2b0,&local_400);
              bVar2 = local_400 < local_3fc;
              if (ABS(local_3fc - local_400) <= 0.0001) {
                bVar2 = *(uint *)(lVar13 + 0x54) < *(uint *)(lVar7 + 0x54);
              }
              plVar5 = local_420;
              uVar12 = uVar16;
              if (!bVar2) break;
            }
            else {
              lVar7 = plVar8[(int)uVar16];
LAB_1436f954a:
              plVar6 = plVar8 + iVar9;
              plVar10 = plVar8 + (int)uVar16;
              lVar13 = *plVar6;
              if (uVar1 == 2) {
LAB_1436f966e:
                fVar18 = (float)FUN_1478b3d66(lVar13);
                fVar20 = (float)FUN_1478b3d66(lVar7);
                plVar5 = local_420;
                uVar12 = uVar16;
                if (ABS(fVar18 - fVar20) <= 0.0001) {
                  if (*(uint *)(lVar7 + 0x54) <= *(uint *)(lVar13 + 0x54)) break;
                }
                else if (fVar20 <= fVar18) break;
              }
              else {
                uVar12 = uVar16;
                if (uVar1 == 1) goto LAB_1436f9592;
              }
            }
            plVar4 = (longlong *)(ulonglong)uVar12;
            lVar7 = *plVar6;
            *plVar6 = *plVar10;
            *plVar10 = lVar7;
            uVar16 = uVar12 * 2 + 1;
          } while ((int)uVar16 < (int)plVar5);
        }
        uVar12 = (int)local_428 - 1;
      } while ((int)local_428 != 0);
      plVar4 = local_430;
      if (1 < (int)plVar5) {
        plVar10 = (longlong *)((ulonglong)plVar5 & 0xffffffff);
        lVar7 = *plVar8;
        *plVar8 = plVar8[(longlong)plVar10 + -1];
        plVar8[(longlong)plVar10 + -1] = lVar7;
        if ((int)plVar5 != 2) {
          do {
            plVar10 = (longlong *)((longlong)plVar10 + -1);
            iVar15 = 0;
            iVar9 = 1;
            local_428 = plVar10;
            iVar14 = 0;
            do {
              iVar17 = iVar9;
              iVar15 = iVar15 + 2;
              if ((longlong)iVar15 < (longlong)plVar10) {
                plVar4 = plVar8 + iVar15;
                plVar5 = plVar8 + iVar17;
                lVar7 = *plVar5;
                lVar13 = *plVar4;
                if (uVar1 == 2) {
                  local_420 = plVar5;
                  fVar18 = (float)FUN_1478b3d66(lVar13);
                  fVar20 = (float)FUN_1478b3d66(lVar7);
                  if (ABS(fVar18 - fVar20) <= 0.0001) {
                    if (*(uint *)(lVar13 + 0x54) < *(uint *)(lVar7 + 0x54)) goto LAB_1436f98da;
                  }
                  else if (fVar18 < fVar20) {
LAB_1436f98da:
                    plVar4 = local_420;
                    iVar15 = iVar17;
                  }
                  iVar17 = iVar15;
                  plVar6 = plVar8 + iVar14;
                  lVar7 = *plVar4;
                  lVar13 = *plVar6;
                  plVar5 = plVar4;
                  goto LAB_1436f98f0;
                }
                if (uVar1 != 1) goto LAB_1436f97c9;
                local_3fc = 0.0;
                local_400 = 0.0;
                local_420 = plVar5;
                FUN_14796292a(*(undefined8 *)(lVar13 + 0x58),lVar13 + 0x2b0,&local_3fc);
                FUN_14796292a(*(undefined8 *)(lVar7 + 0x58),lVar7 + 0x2b0,&local_400);
                bVar2 = local_400 < local_3fc;
                if (ABS(local_3fc - local_400) <= 0.0001) {
                  bVar2 = *(uint *)(lVar13 + 0x54) < *(uint *)(lVar7 + 0x54);
                }
                plVar5 = local_420;
                if (!bVar2) {
                  plVar5 = plVar4;
                  iVar17 = iVar15;
                }
                plVar6 = plVar8 + iVar14;
                lVar13 = *plVar6;
                lVar7 = *plVar5;
LAB_1436f9815:
                local_3fc = 0.0;
                local_400 = 0.0;
                FUN_14796292a(*(undefined8 *)(lVar13 + 0x58),lVar13 + 0x2b0,&local_3fc);
                FUN_14796292a(*(undefined8 *)(lVar7 + 0x58),lVar7 + 0x2b0,&local_400);
                bVar2 = local_400 < local_3fc;
                if (ABS(local_3fc - local_400) <= 0.0001) {
                  bVar2 = *(uint *)(lVar13 + 0x54) < *(uint *)(lVar7 + 0x54);
                }
                plVar10 = local_428;
                if (!bVar2) break;
              }
              else {
                lVar7 = plVar8[iVar17];
LAB_1436f97c9:
                plVar6 = plVar8 + iVar14;
                plVar5 = plVar8 + iVar17;
                lVar13 = *plVar6;
                if (uVar1 == 2) {
LAB_1436f98f0:
                  fVar18 = (float)FUN_1478b3d66(lVar13);
                  fVar20 = (float)FUN_1478b3d66(lVar7);
                  plVar10 = local_428;
                  if (ABS(fVar18 - fVar20) <= 0.0001) {
                    if (*(uint *)(lVar7 + 0x54) <= *(uint *)(lVar13 + 0x54)) break;
                  }
                  else if (fVar20 <= fVar18) break;
                }
                else if (uVar1 == 1) goto LAB_1436f9815;
              }
              lVar7 = *plVar6;
              *plVar6 = *plVar5;
              *plVar5 = lVar7;
              iVar15 = iVar17 * 2;
              iVar9 = iVar17 * 2 + 1;
              iVar14 = iVar17;
            } while ((longlong)iVar9 < (longlong)plVar10);
            lVar7 = *plVar8;
            *plVar8 = plVar8[(longlong)plVar10 + -1];
            plVar8[(longlong)plVar10 + -1] = lVar7;
            plVar4 = local_430;
          } while ((longlong *)0x2 < plVar10);
        }
      }
    }
    goto LAB_1436f9a71;
  }
  goto LAB_1436f9a8b;
LAB_1436f9396:
  lVar7 = *plVar8;
  *plVar8 = *plVar3;
  *plVar3 = lVar7;
  iVar9 = (int)local_428 + -1;
  plVar6 = plVar6 + -2;
  if ((longlong)plVar6 - (longlong)plVar8 < (longlong)local_420 - (longlong)plVar5) {
    if (plVar5 < plVar10) {
      *local_430 = (longlong)plVar5;
      local_430[1] = (longlong)plVar10;
      *(int *)(local_430 + 2) = iVar9;
      local_430 = local_430 + 3;
    }
    plVar4 = local_430;
    if (plVar3 <= plVar8 + 1) goto LAB_1436f9a71;
  }
  else {
    plVar4 = local_430;
    if (plVar8 + 1 < plVar3) {
      *local_430 = (longlong)plVar8;
      local_430[1] = (longlong)plVar6;
      *(int *)(local_430 + 2) = iVar9;
      plVar4 = local_430 + 3;
    }
    plVar6 = plVar10;
    plVar8 = plVar5;
    if (plVar10 <= plVar5) goto LAB_1436f9a71;
  }
  local_430 = plVar4;
  iVar15 = (int)((ulonglong)((longlong)plVar6 - (longlong)plVar8) >> 3);
  plVar5 = (longlong *)(ulonglong)(iVar15 + 1);
  plVar10 = plVar6;
  if (iVar9 == 0) goto LAB_1436f9443;
  goto LAB_1436f9195;
  while( true ) {
    lVar7 = *plVar5;
    *plVar5 = *plVar10;
    *plVar10 = lVar7;
    plVar10 = plVar10 + -1;
    plVar4 = local_430;
    plVar5 = plVar8;
    plVar6 = local_428;
    if (plVar10 <= plVar8) break;
joined_r0x0001436f9977:
    if (plVar6 <= plVar10) {
      lVar7 = *plVar6;
      lVar13 = *plVar5;
      if (uVar1 == 2) {
        fVar18 = (float)FUN_1478b3d66(lVar13);
        fVar20 = (float)FUN_1478b3d66(lVar7);
        if (ABS(fVar18 - fVar20) <= 0.0001) {
          if (*(uint *)(lVar13 + 0x54) < *(uint *)(lVar7 + 0x54)) goto LAB_1436f99af;
        }
        else if (fVar18 < fVar20) goto LAB_1436f99af;
      }
      else {
        if (uVar1 == 1) {
          local_3fc = 0.0;
          local_400 = 0.0;
          FUN_14796292a(*(undefined8 *)(lVar13 + 0x58),lVar13 + 0x2b0,&local_3fc);
          FUN_14796292a(*(undefined8 *)(lVar7 + 0x58),lVar7 + 0x2b0,&local_400);
          bVar2 = local_400 < local_3fc;
          if (ABS(local_3fc - local_400) <= 0.0001) {
            bVar2 = *(uint *)(lVar13 + 0x54) < *(uint *)(lVar7 + 0x54);
          }
          if (!bVar2) goto LAB_1436f99b2;
        }
LAB_1436f99af:
        plVar5 = plVar6;
      }
LAB_1436f99b2:
      plVar6 = plVar6 + 1;
      goto joined_r0x0001436f9977;
    }
  }
LAB_1436f9a71:
  plVar4 = plVar4 + -3;
  if (plVar4 < &local_3f8) goto code_r0x0001436f9a83;
  goto LAB_1436f9168;
code_r0x0001436f9a83:
  iVar9 = (int)local_418[1];
LAB_1436f9a8b:
  if (0 < iVar9) {
    lVar7 = 0;
    plVar4 = local_418;
    do {
      lVar13 = *(longlong *)(*plVar4 + lVar7 * 8);
      if (*(int *)(lVar13 + 0x68) != *(int *)(lVar13 + 0x94)) {
        lVar11 = lVar13 + 0x98;
        if (*(longlong *)(lVar13 + 0xa0) != 0) {
          lVar11 = *(longlong *)(lVar13 + 0xa0);
        }
        iVar9 = *(int *)(lVar11 + (ulonglong)(*(int *)(lVar13 + 0xa8) - 1U & *(uint *)(plVar4 + 2))
                                  * 4);
        if (iVar9 != -1) {
          do {
            lVar11 = *(longlong *)(lVar13 + 0x60) + (longlong)iVar9 * 0x20;
            if (*(uint *)(*(longlong *)(lVar13 + 0x60) + (longlong)iVar9 * 0x20) ==
                *(uint *)(plVar4 + 2)) {
              if ((int *)(lVar11 + 4) == (int *)0x0 || lVar11 == 0) break;
              *(int *)(lVar11 + 4) = (int)lVar7;
              fVar18 = *(float *)((longlong)plVar4 + 0x24);
              if (1.0 <= fVar18) {
                fVar18 = 1.0;
              }
              if (fVar18 <= 0.0) {
                fVar18 = 0.0;
              }
              _X = powf(fVar18,(float)((int)plVar4[1] - (int)lVar7) + -1.0);
              fVar20 = DAT_14c761b4c;
              fVar18 = 0.0;
              if (lVar13 != local_408) {
                fVar18 = *(float *)((longlong)local_418 + 0x2c);
              }
              if (1.0 <= _X) {
                _X = 1.0;
              }
              if (_X <= 0.0) {
                _X = 0.0;
              }
              fVar19 = *(float *)(lVar11 + 8);
              if (ABS(fVar18 - fVar19) <= 1e-08) {
                fVar19 = powf(10.0,*(float *)(lVar11 + 0x10) / 20.0);
                fVar21 = 0.0;
                if (DAT_14c761b4c <= fVar19) {
                  fVar21 = (float)(~-(uint)(ABS(fVar19 - DAT_14c761b4c) <= 1e-08) & (uint)fVar19);
                }
                plVar4 = local_418;
                if (ABS(fVar21 - _X) <= fVar20) break;
                fVar19 = *(float *)(lVar11 + 8);
              }
              if (fVar19 <= 1e-08) {
                fVar19 = 1e-08;
              }
              fVar19 = *(float *)(lVar11 + 0xc) / fVar19;
              if (1.0 <= fVar19) {
                fVar19 = 1.0;
              }
              if (fVar19 <= 0.0) {
                fVar19 = 0.0;
              }
              *(float *)(lVar11 + 0x14) =
                   (*(float *)(lVar11 + 0x10) - *(float *)(lVar11 + 0x14)) * fVar19 +
                   *(float *)(lVar11 + 0x14);
              if (_X <= DAT_14c761b4c) {
                _X = DAT_14c761b4c;
              }
              fVar20 = logf(_X);
              *(float *)(lVar11 + 0x10) = (fVar20 / 2.3025851) * 20.0;
              if (fVar18 <= 0.0) {
                fVar18 = 0.0;
              }
              *(float *)(lVar11 + 8) = fVar18;
              *(undefined4 *)(lVar11 + 0xc) = 0;
              plVar4 = local_418;
              break;
            }
            iVar9 = *(int *)(lVar11 + 0x18);
          } while (iVar9 != -1);
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < (int)plVar4[1]);
  }
LAB_1436f9c96:
  if ((local_f0 ^ (ulonglong)auStack_458) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1436f9d1c FUN_1436f9d1c body=183 status=ok
// SIG undefined FUN_1436f9d1c(void)

longlong FUN_1436f9d1c(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  FUN_1478b49e4(param_2,&local_38);
  if ((int)uStack_30 == 0) {
    lVar1 = FUN_14001cc68(0x960,0x10);
    FUN_1478b2b9c(lVar1,param_2);
    *(undefined4 *)(lVar1 + 0x1ac) = 0;
    *(undefined8 *)(lVar1 + 0x58) = *param_1;
  }
  else {
    lVar1 = FUN_147d32616(param_1,param_2,&local_38,param_3);
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436f9dd4 FUN_1436f9dd4 body=350 status=ok
// SIG undefined FUN_1436f9dd4(void)

longlong FUN_1436f9dd4(longlong param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                      undefined1 param_5)

{
  uint *puVar1;
  uint uVar2;
  undefined8 unaff_RBP;
  longlong lVar3;
  float fVar4;
  undefined1 auStack_68 [40];
  LARGE_INTEGER local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x150) != *(int *)(param_1 + 0x17c)) {
    lVar3 = param_1 + 0x180;
    if (*(longlong *)(param_1 + 0x188) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x188);
    }
    uVar2 = *(uint *)(lVar3 + (ulonglong)(*(int *)(param_1 + 400) - 1U & param_3) * 4);
    if (uVar2 != 0xffffffff) {
      lVar3 = 0;
      do {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x148) + (longlong)(int)uVar2 * 0x18);
        if (*puVar1 == param_3) {
          if ((puVar1 == (uint *)0x0) || (lVar3 = *(longlong *)(puVar1 + 2), lVar3 == 0))
          goto LAB_1436f9efb;
          QueryPerformanceCounter(&local_40);
          fVar4 = (float)((((double)CONCAT44(0x43300000,local_40.s.LowPart) - 4503599627370496.0) +
                          ((double)CONCAT44(0x45300000,local_40.s.HighPart) - 1.9342813113834067e+25
                          )) * DAT_14c83f418);
          if ((0.0 < *(float *)(lVar3 + 0x20)) &&
             (fVar4 - *(float *)(lVar3 + 0x38) < *(float *)(lVar3 + 0x20))) goto LAB_1436f9efb;
          *(float *)(lVar3 + 0x38) = fVar4;
          if ((*(byte *)(lVar3 + 0x1d) - 7 < 0xfffffffd) &&
             (*(int *)(lVar3 + 0x18) <= *(int *)(lVar3 + 8))) {
            local_40.QuadPart =
                 FUN_147d32a0a(param_1,param_2,lVar3,
                               CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5) & 0xffffffff);
            if (local_40.QuadPart == 0) goto LAB_1436f9efb;
            FUN_14796f638(param_4,&local_40);
          }
          break;
        }
        uVar2 = puVar1[4];
      } while (uVar2 != 0xffffffff);
      goto LAB_1436f9efd;
    }
  }
LAB_1436f9efb:
  lVar3 = 0;
LAB_1436f9efd:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 1436f9f34 FUN_1436f9f34 body=1326 status=ok
// SIG undefined FUN_1436f9f34(void)

longlong FUN_1436f9f34(undefined8 *param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  undefined2 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong lVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
  undefined4 extraout_XMM0_Da;
  float fVar20;
  float fVar21;
  undefined1 auStack_178 [32];
  longlong *local_158;
  ulonglong local_150;
  longlong local_148;
  longlong *local_140;
  longlong local_138;
  longlong *local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  int iStack_120;
  float fStack_11c;
  undefined4 local_118;
  longlong *local_108;
  undefined4 *local_100;
  undefined1 local_f4 [4];
  ulonglong local_f0;
  ulonglong uVar15;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar7 = FUN_14001cc68(0x960,0x10);
  FUN_1478b2b9c(lVar7,param_2);
  *(undefined8 *)(lVar7 + 0x58) = *param_1;
  if ((longlong)(int)param_3[1] != 0) {
    plVar13 = (longlong *)*param_3;
    local_130 = plVar13 + (int)param_3[1];
    local_158 = (longlong *)(lVar7 + 0x60);
    local_138 = lVar7 + 0x98;
    uVar14 = 0;
    local_148 = lVar7;
    local_140 = param_4;
    do {
      plVar2 = (longlong *)*plVar13;
      local_150 = uVar14;
      if ((int)plVar2[5] == 0) {
        fVar20 = *(float *)((longlong)plVar2 + 0x24);
        if (1.0 <= fVar20) {
          fVar20 = 1.0;
        }
        if (fVar20 <= 0.0) {
          fVar20 = 0.0;
        }
        if (1e-08 < ABS(fVar20 + -1.0)) {
          iVar10 = (int)plVar2[1];
          if ((longlong)iVar10 != 0) {
            plVar12 = (longlong *)*plVar2;
            plVar1 = plVar12 + iVar10;
            do {
              lVar7 = *plVar12;
              if (*(int *)(lVar7 + 0x68) != *(int *)(lVar7 + 0x94)) {
                lVar8 = lVar7 + 0x98;
                if (*(longlong *)(lVar7 + 0xa0) != 0) {
                  lVar8 = *(longlong *)(lVar7 + 0xa0);
                }
                iVar9 = *(int *)(lVar8 + (ulonglong)
                                         (*(int *)(lVar7 + 0xa8) - 1U & *(uint *)(plVar2 + 2)) * 4);
                if (iVar9 != -1) {
                  do {
                    lVar8 = *(longlong *)(lVar7 + 0x60) + (longlong)iVar9 * 0x20;
                    if (*(uint *)(*(longlong *)(lVar7 + 0x60) + (longlong)iVar9 * 0x20) ==
                        *(uint *)(plVar2 + 2)) goto LAB_1436fa11a;
                    iVar9 = *(int *)(lVar8 + 0x18);
                  } while (iVar9 != -1);
                }
              }
              lVar8 = 0;
LAB_1436fa11a:
              fVar18 = powf(fVar20,(float)iVar10 - (float)*(int *)(lVar8 + 4));
              if ((*(byte *)((longlong)plVar2 + 0x1c) & 2) == 0) {
LAB_1436fa183:
                fVar5 = DAT_14c761b4c;
                fVar21 = *(float *)((longlong)plVar2 + 0x2c);
                fVar19 = *(float *)(lVar8 + 8);
                if (fVar19 <= 1e-08) {
                  fVar19 = 1e-08;
                }
                fVar19 = *(float *)(lVar8 + 0xc) / fVar19;
                if (1.0 <= fVar19) {
                  fVar19 = 1.0;
                }
                if (fVar19 <= 0.0) {
                  fVar19 = 0.0;
                }
                *(float *)(lVar8 + 0x14) =
                     (*(float *)(lVar8 + 0x10) - *(float *)(lVar8 + 0x14)) * fVar19 +
                     *(float *)(lVar8 + 0x14);
                if (fVar18 <= fVar5) {
                  fVar18 = fVar5;
                }
                fVar18 = logf(fVar18);
                *(float *)(lVar8 + 0x10) = (fVar18 / 2.3025851) * 20.0;
                if (fVar21 <= 0.0) {
                  fVar21 = 0.0;
                }
                *(float *)(lVar8 + 8) = fVar21;
                *(undefined4 *)(lVar8 + 0xc) = 0;
              }
              else {
                fVar21 = powf(10.0,*(float *)(lVar8 + 0x10) / 20.0);
                fVar19 = 0.0;
                if (DAT_14c761b4c <= fVar21) {
                  fVar19 = (float)(~-(uint)(ABS(fVar21 - DAT_14c761b4c) <= 1e-08) & (uint)fVar21);
                }
                if (fVar18 <= fVar19) goto LAB_1436fa183;
              }
              plVar12 = plVar12 + 1;
            } while (plVar12 != plVar1);
          }
        }
      }
      lVar7 = local_148;
      bVar17 = *(char *)((longlong)plVar2 + 0x1d) == '\x05';
      if (*(int *)(local_148 + 0x68) != *(int *)(local_148 + 0x94)) {
        lVar8 = *(longlong *)(local_148 + 0xa0);
        if (*(longlong *)(local_148 + 0xa0) == 0) {
          lVar8 = local_138;
        }
        iVar10 = *(int *)(lVar8 + (ulonglong)
                                  (*(int *)(local_148 + 0xa8) - 1U & *(uint *)(plVar2 + 2)) * 4);
        if (iVar10 != -1) {
          do {
            if (*(uint *)(*local_158 + (longlong)iVar10 * 0x20) == *(uint *)(plVar2 + 2)) {
              FUN_1478b3f56(local_148,&local_128);
              puVar11 = &DAT_149dfb77a;
              if (iStack_120 != 0) {
                puVar11 = (undefined2 *)CONCAT44(uStack_124,local_128);
              }
              FUN_140033559(".\\Runtime/Engine/Private/SoundConcurrency.cpp",0xb3,
                            L"Attempting to add active sound \'%s\' to concurrency group multiple times."
                            ,puVar11);
              uVar15 = local_150;
              if (CONCAT44(uStack_124,local_128) != 0) {
                FUN_1400020a8();
              }
              goto LAB_1436fa312;
            }
            iVar10 = *(int *)((longlong)iVar10 * 0x20 + *local_158 + 0x18);
          } while (iVar10 != -1);
        }
      }
      local_128 = 0;
      uStack_124 = 0;
      iStack_120 = 0;
      fStack_11c = 0.0;
      local_118 = 0;
      if ((int)plVar2[5] == 0) {
        local_128 = (undefined4)plVar2[1];
        fVar20 = 1.0;
        if (1.0 <= DAT_14c761b4c) {
          fVar20 = DAT_14c761b4c;
        }
        fVar20 = logf(fVar20);
        fStack_11c = (fVar20 / 2.3025851) * 20.0;
      }
      iStack_120 = 0;
      uStack_124 = 0;
      iVar10 = (int)plVar2[1];
      *(uint *)(plVar2 + 1) = iVar10 + 1U;
      if (*(uint *)((longlong)plVar2 + 0xc) < iVar10 + 1U) {
        FUN_14796ccec(plVar2,iVar10);
      }
      lVar7 = local_148;
      local_108 = plVar2 + 2;
      *(longlong *)(*plVar2 + (longlong)iVar10 * 8) = local_148;
      local_100 = &local_128;
      FUN_147d45622(local_158,local_f4,&local_108);
      FUN_1436f9076(plVar2,lVar7);
      uVar15 = local_150;
LAB_1436fa312:
      uVar14 = CONCAT71((int7)(uVar15 >> 8),(byte)uVar15 | bVar17);
      plVar13 = plVar13 + 1;
    } while (plVar13 != local_130);
    param_4 = local_140;
    if ((uVar15 & 1) != 0 || bVar17) goto LAB_1436fa38b;
  }
  *(undefined4 *)(lVar7 + 0x220) = 0xbf800000;
LAB_1436fa38b:
  lVar8 = param_4[1];
  if ((longlong)(int)lVar8 != 0) {
    lVar3 = *param_4;
    lVar16 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar16);
      FUN_1436fa464(param_1,lVar4);
      if ((*(char *)(lVar4 + 0x19e) != '\x02') &&
         (cVar6 = FUN_1479602ba(*param_1,lVar4), cVar6 == '\0')) {
        FUN_1436fabc4(extraout_XMM0_Da,lVar4);
      }
      lVar16 = lVar16 + 8;
    } while ((longlong)(int)lVar8 * 8 != lVar16);
  }
  if ((local_f0 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar7;
}



// FUNCTION 1436fa464 FUN_1436fa464 body=1886 status=ok
// SIG undefined FUN_1436fa464(void)

void FUN_1436fa464(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  ulonglong uVar16;
  longlong *plVar17;
  int iVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_168 [32];
  longlong *local_148;
  longlong local_140;
  ulonglong local_138;
  uint *local_130;
  longlong *local_128;
  longlong *local_120;
  longlong *local_118;
  longlong *local_110;
  longlong *local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  plVar17 = (longlong *)(param_2 + 0x60);
  puVar12 = (uint *)(param_2 + 0x70);
  uVar19 = *(uint *)(param_2 + 0x88);
  uVar16 = (ulonglong)uVar19;
  if (uVar19 == 0) {
    uVar10 = 1;
    uVar11 = 0;
    iVar18 = 0;
    uVar8 = 0;
  }
  else {
    puVar3 = *(uint **)(param_2 + 0x80);
    if (*(uint **)(param_2 + 0x80) == (uint *)0x0) {
      puVar3 = puVar12;
    }
    uVar8 = *puVar3;
    if (uVar8 == 0) {
      iVar18 = uVar19 + 0x1e;
      if (-1 < (int)(uVar19 - 1)) {
        iVar18 = uVar19 - 1;
      }
      uVar11 = 0;
      uVar7 = (ulonglong)(uint)(iVar18 >> 5);
      if (iVar18 >> 5 < 1) {
        uVar7 = uVar11;
      }
      iVar18 = 0;
      do {
        if (uVar7 == uVar11) goto LAB_1436fa55d;
        iVar18 = iVar18 + 0x20;
        uVar8 = puVar3[uVar11 + 1];
        uVar11 = uVar11 + 1;
      } while (uVar8 == 0);
    }
    else {
      uVar11 = 0;
      iVar18 = 0;
    }
    uVar10 = (ulonglong)(-uVar8 & uVar8);
    uVar7 = uVar10 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar8 = (iVar18 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if ((int)uVar19 <= (int)uVar8) {
      uVar8 = uVar19;
    }
  }
  if (uVar8 == uVar19) {
LAB_1436fa55d:
    if ((local_c0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    FUN_1478c3caa(plVar17);
    return;
  }
  local_108 = (longlong *)(param_1 + 0x148);
  local_d0 = param_1 + 0x180;
  local_e8 = param_1 + 8;
  local_f0 = param_1 + 0xf8;
  local_118 = (longlong *)(param_1 + 0x58);
  local_f8 = param_1 + 0x90;
  local_120 = (longlong *)(param_1 + 0xa8);
  local_100 = param_1 + 0xe0;
  local_e0 = param_2 + 0x98;
  uVar19 = 0xffffffff;
  local_140 = param_2;
  local_138 = uVar16;
  local_130 = puVar12;
  local_110 = plVar17;
LAB_1436fa687:
  if (*(int *)(param_1 + 0x150) != *(int *)(param_1 + 0x17c)) {
    uVar8 = *(uint *)(*plVar17 + (longlong)(int)uVar8 * 0x20);
    lVar13 = *(longlong *)(param_1 + 0x188);
    if (*(longlong *)(param_1 + 0x188) == 0) {
      lVar13 = local_d0;
    }
    uVar4 = *(uint *)(lVar13 + (ulonglong)(*(int *)(param_1 + 400) - 1U & uVar8) * 4);
    if (uVar4 != 0xffffffff) {
      do {
        puVar3 = (uint *)(*local_108 + (longlong)(int)uVar4 * 0x18);
        if (*puVar3 == uVar8) {
          if ((puVar3 != (uint *)0x0) &&
             (plVar15 = *(longlong **)(puVar3 + 2), plVar15 != (longlong *)0x0)) {
            local_148 = plVar15;
            local_c8 = param_2;
            iVar2 = FUN_147962730(plVar15,&local_c8,1);
            plVar15 = local_148;
            param_2 = local_140;
            if (iVar2 == 0) goto LAB_1436fa9b0;
            if (*(int *)(local_140 + 0x68) == *(int *)(local_140 + 0x94)) goto LAB_1436fa83f;
            lVar13 = *(longlong *)(local_140 + 0xa0);
            if (*(longlong *)(local_140 + 0xa0) == 0) {
              lVar13 = local_e0;
            }
            iVar2 = *(int *)(lVar13 + (ulonglong)
                                      (*(int *)(local_140 + 0xa8) - 1U & *(uint *)(local_148 + 2)) *
                                      4);
            if (iVar2 == -1) goto LAB_1436fa83f;
            goto LAB_1436fa826;
          }
          break;
        }
        uVar4 = puVar3[4];
      } while (uVar4 != 0xffffffff);
    }
  }
  goto LAB_1436fa6fd;
  while (iVar2 = *(int *)(lVar13 + 0x18), iVar2 != -1) {
LAB_1436fa826:
    lVar13 = *local_110 + (longlong)iVar2 * 0x20;
    if (*(uint *)(*local_110 + (longlong)iVar2 * 0x20) == *(uint *)(local_148 + 2))
    goto LAB_1436fa842;
  }
LAB_1436fa83f:
  lVar13 = 0;
LAB_1436fa842:
  if ((longlong)(int)local_148[1] != 0) {
    plVar17 = (longlong *)*local_148;
    local_128 = plVar17 + (int)local_148[1];
    local_d8 = lVar13;
    do {
      lVar14 = *plVar17;
      if (*(int *)(lVar14 + 0x68) != *(int *)(lVar14 + 0x94)) {
        lVar9 = lVar14 + 0x98;
        if (*(longlong *)(lVar14 + 0xa0) != 0) {
          lVar9 = *(longlong *)(lVar14 + 0xa0);
        }
        iVar2 = *(int *)(lVar9 + (ulonglong)(*(int *)(lVar14 + 0xa8) - 1U & *(uint *)(plVar15 + 2))
                                 * 4);
        if (iVar2 != -1) {
          do {
            lVar9 = *(longlong *)(lVar14 + 0x60) + (longlong)iVar2 * 0x20;
            if (*(uint *)(*(longlong *)(lVar14 + 0x60) + (longlong)iVar2 * 0x20) ==
                *(uint *)(plVar15 + 2)) goto LAB_1436fa8c6;
            iVar2 = *(int *)(lVar9 + 0x18);
          } while (iVar2 != -1);
        }
      }
      lVar9 = 0;
LAB_1436fa8c6:
      iVar2 = *(int *)(lVar9 + 4);
      if (*(int *)(lVar13 + 4) < iVar2) {
        iVar2 = iVar2 + -1;
        *(int *)(lVar9 + 4) = iVar2;
      }
      if (((*(byte *)((longlong)plVar15 + 0x1c) & 2) != 0) && ((int)plVar15[5] == 0)) {
        fVar20 = *(float *)((longlong)plVar15 + 0x24);
        if (1.0 <= fVar20) {
          fVar20 = 1.0;
        }
        if (fVar20 <= 0.0) {
          fVar20 = 0.0;
        }
        fVar20 = powf(fVar20,(float)((int)plVar15[1] - iVar2) + -1.0);
        if (1.0 <= fVar20) {
          fVar20 = 1.0;
        }
        if (fVar20 <= 0.0) {
          fVar20 = 0.0;
        }
        fVar22 = *(float *)(local_148 + 6);
        fVar21 = *(float *)(lVar9 + 8);
        if (fVar21 <= 1e-08) {
          fVar21 = 1e-08;
        }
        fVar21 = *(float *)(lVar9 + 0xc) / fVar21;
        if (1.0 <= fVar21) {
          fVar21 = 1.0;
        }
        if (fVar21 <= 0.0) {
          fVar21 = 0.0;
        }
        *(float *)(lVar9 + 0x14) =
             (*(float *)(lVar9 + 0x10) - *(float *)(lVar9 + 0x14)) * fVar21 +
             *(float *)(lVar9 + 0x14);
        if (fVar20 <= DAT_14c761b4c) {
          fVar20 = DAT_14c761b4c;
        }
        fVar20 = logf(fVar20);
        *(float *)(lVar9 + 0x10) = (fVar20 / 2.3025851) * 20.0;
        if (fVar22 <= 0.0) {
          fVar22 = 0.0;
        }
        *(float *)(lVar9 + 8) = fVar22;
        *(undefined4 *)(lVar9 + 0xc) = 0;
        plVar15 = local_148;
        lVar13 = local_d8;
        param_2 = local_140;
      }
      plVar17 = plVar17 + 1;
      puVar12 = local_130;
    } while (plVar17 != local_128);
  }
LAB_1436fa9b0:
  plVar17 = local_110;
  uVar16 = local_138;
  if (((int)plVar15[1] == 0) && (*(float *)(plVar15 + 4) <= 0.0)) {
    uVar1 = *(undefined4 *)((longlong)plVar15 + 0x14);
    FUN_147d469c8(local_108,uVar8);
    local_128 = (longlong *)CONCAT44(local_128._4_4_,uVar1);
    FUN_1409a11ae(local_e8,uVar1);
    if (*(longlong *)(local_140 + 0x18) != 0) {
      FUN_1409a11ae(local_f0,*(undefined4 *)(*(longlong *)(local_140 + 0x18) + 0xc));
    }
    uVar8 = *(uint *)(local_140 + 0x40);
    if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
      lVar13 = *(longlong *)(param_1 + 0x98);
      if (*(longlong *)(param_1 + 0x98) == 0) {
        lVar13 = local_f8;
      }
      iVar2 = *(int *)(lVar13 + (ulonglong)(*(int *)(param_1 + 0xa0) - 1U & uVar8) * 4);
      if (iVar2 != -1) {
        do {
          lVar13 = *local_118 + (longlong)iVar2 * 0x60;
          if (*(uint *)(*local_118 + (longlong)iVar2 * 0x60) == uVar8) {
            if (((lVar13 + 8 != 0 && lVar13 != 0) &&
                (iVar2 = FUN_1409a11ae(lVar13 + 8,(ulonglong)local_128 & 0xffffffff), iVar2 != 0))
               && (*(int *)(lVar13 + 0x10) == *(int *)(lVar13 + 0x3c))) {
              FUN_147d46a72(local_118,uVar8);
            }
            break;
          }
          iVar2 = *(int *)(lVar13 + 0x58);
        } while (iVar2 != -1);
      }
    }
    if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
      lVar13 = *(longlong *)(param_1 + 0xe8);
      if (*(longlong *)(param_1 + 0xe8) == 0) {
        lVar13 = local_100;
      }
      iVar2 = *(int *)(lVar13 + (ulonglong)(*(int *)(param_1 + 0xf0) - 1U & uVar8) * 4);
      if (iVar2 != -1) {
        do {
          lVar13 = *local_120 + (longlong)iVar2 * 0x60;
          if (*(uint *)(*local_120 + (longlong)iVar2 * 0x60) == uVar8) {
            if (((lVar13 + 8 != 0 && lVar13 != 0) && (*(longlong *)(local_140 + 0x18) != 0)) &&
               ((iVar2 = FUN_1409a11ae(lVar13 + 8,
                                       *(undefined4 *)(*(longlong *)(local_140 + 0x18) + 0xc)),
                iVar2 != 0 && (*(int *)(lVar13 + 0x10) == *(int *)(lVar13 + 0x3c))))) {
              FUN_147d46b7a(local_120,uVar8);
            }
            break;
          }
          iVar2 = *(int *)(lVar13 + 0x58);
        } while (iVar2 != -1);
      }
    }
    if (*local_148 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_148);
    puVar12 = local_130;
    uVar16 = local_138;
    param_2 = local_140;
  }
LAB_1436fa6fd:
  uVar19 = uVar19 & ~(uint)uVar10;
  puVar3 = *(uint **)(param_2 + 0x80);
  if (*(uint **)(param_2 + 0x80) == (uint *)0x0) {
    puVar3 = puVar12;
  }
  uVar4 = *(uint *)(param_2 + 0x88);
  iVar2 = (int)uVar11;
  lVar13 = (longlong)iVar2;
  uVar8 = puVar3[lVar13] & uVar19;
  if (uVar8 == 0) {
    iVar5 = uVar4 + 0x1e;
    if (-1 < (int)(uVar4 - 1)) {
      iVar5 = uVar4 - 1;
    }
    iVar5 = iVar5 >> 5;
    iVar18 = iVar18 + 0x20;
    iVar6 = iVar5;
    if (iVar5 < iVar2) {
      iVar6 = iVar2;
    }
    uVar16 = local_138;
    if (iVar2 < iVar5) {
      lVar14 = 0;
      do {
        uVar8 = puVar3[lVar13 + lVar14 + 1];
        if (uVar8 != 0) {
          uVar11 = (ulonglong)(iVar2 + (int)lVar14 + 1);
          uVar19 = 0xffffffff;
          goto LAB_1436fa786;
        }
        iVar18 = iVar18 + 0x20;
        lVar14 = lVar14 + 1;
      } while (iVar6 - lVar13 != lVar14);
      uVar19 = 0xffffffff;
      iVar2 = iVar6;
    }
    uVar11 = (ulonglong)(iVar2 + 1);
    puVar12 = local_130;
    param_2 = local_140;
    uVar8 = uVar4;
  }
  else {
LAB_1436fa786:
    uVar10 = (ulonglong)(-uVar8 & uVar8);
    uVar7 = uVar10 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar8 = (iVar18 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if ((int)uVar4 <= (int)uVar8) {
      uVar8 = uVar4;
    }
  }
  if (uVar8 == (uint)uVar16) goto LAB_1436fa55d;
  goto LAB_1436fa687;
}



// FUNCTION 1436fabc4 FUN_1436fabc4 body=286 status=ok
// SIG undefined FUN_1436fabc4(void)

void FUN_1436fabc4(undefined8 param_1,longlong param_2)

{
  float fVar1;
  char cVar2;
  char cVar3;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  float local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_44 = 0.0;
  cVar2 = FUN_1478b4c10(param_2);
  if (cVar2 == '\0') {
    FUN_14796095e(*(undefined8 *)(param_2 + 0x58),param_2);
  }
  else {
    FUN_1479620d4();
  }
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  cVar3 = FUN_143413712(param_2,*(undefined8 *)(param_2 + 0x58),0);
  if (cVar3 != '\0') {
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined4 *)(param_2 + 0x50) = 0;
    FUN_143401e76(*(undefined8 *)(param_2 + 0x58),&local_60);
  }
  fVar1 = local_44;
  if (cVar2 != '\0') {
    *(undefined1 *)(param_2 + 0x19e) = 2;
    FUN_147041432(param_2 + 0x1c8,0,local_44,1);
    if (0.0 <= fVar1) {
      *(float *)(param_2 + 0x1d0) = fVar1;
      *(undefined4 *)(param_2 + 0x1d8) = 0;
    }
    else if ((*(float *)(param_2 + 0x1d0) == 0.0) && (!NAN(*(float *)(param_2 + 0x1d0)))) {
      *(undefined4 *)(param_2 + 0x1d0) = 0xbf800000;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436face4 FUN_1436face4 body=442 status=ok
// SIG undefined FUN_1436face4(void)

void FUN_1436face4(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  code *local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)(param_1[2] + 0xd5) & 4) != 0) {
    local_48 = 0;
    uStack_40 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar3 = FUN_1400439fc(param_1,0,&local_38);
  if (cVar3 != '\0') {
    (**(code **)(*param_1 + 0x268))(param_1);
  }
  lVar5 = DAT_14cb0d2b0;
  if (((((DAT_14cb0d2b0 == 0) || (lVar1 = *(longlong *)(DAT_14cb0d2b0 + 0x2c0), lVar1 == 0)) ||
       (lVar4 = FUN_1458b5420(), lVar4 == 0)) ||
      ((*(int *)(lVar1 + 0x38) < *(int *)(lVar4 + 0x38) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
        lVar4 + 0x30)))) || (*(longlong *)(lVar5 + 0x2c0) == 0)) {
    local_38 = FUN_147d33126;
    local_30 = 0;
    FUN_147d3302c(&local_28,param_1);
    param_1[0xab] = local_28;
  }
  else {
    FUN_1436faea0(param_1,0);
  }
  FUN_147d32f54(param_1);
  lVar5 = (**(code **)(*param_1 + 0x318))(param_1);
  if (lVar5 == 0) {
    if ((*(byte *)(param_1 + 0xaa) & 1) == 0) goto LAB_1436fae43;
  }
  else {
    do {
      cVar3 = *(char *)(lVar5 + 0x1b1);
      if (cVar3 != '\0') break;
      lVar5 = *(longlong *)(lVar5 + 0x1e0);
    } while (lVar5 != 0);
    if (cVar3 == '\x01') {
      plVar2 = (longlong *)param_1[0x2d];
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x328))(plVar2,1);
      }
      *(byte *)((longlong)param_1 + 0x551) = *(byte *)((longlong)param_1 + 0x551) | 1;
      goto LAB_1436fae43;
    }
    if ((cVar3 != '\x02') && ((*(byte *)(param_1 + 0xaa) & 1) == 0)) {
      if ((cVar3 == '\x03') && (plVar2 = (longlong *)param_1[0x2d], plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x330))(plVar2,1,3);
      }
      goto LAB_1436fae43;
    }
  }
  plVar2 = (longlong *)param_1[0x2d];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 800))(plVar2,1);
  }
LAB_1436fae43:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1436faea0 FUN_1436faea0 body=275 status=ok
// SIG undefined FUN_1436faea0(void)

void FUN_1436faea0(longlong param_1,undefined1 param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_c8 [39];
  undefined1 local_a1;
  undefined8 local_a0;
  code *local_98 [2];
  undefined ***local_88;
  undefined **local_78;
  undefined1 *local_70;
  code **local_68;
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  undefined1 *local_30;
  code **local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a1 = param_2;
  FUN_147d33168();
  local_28 = local_58;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_14aaafdf0;
  local_58[0] = FUN_143700a16;
  local_68 = local_98;
  local_88 = (undefined ***)0x0;
  local_78 = &PTR_LAB_14aaafe10;
  local_98[0] = FUN_143700bd2;
  local_a0 = *(undefined8 *)(param_1 + 0x168);
  local_70 = &local_a1;
  local_30 = &local_a1;
  if (*(int *)(param_1 + 0x554) == -1) {
    FUN_143700a16(&local_30);
  }
  else {
    FUN_143700bd2(&local_70);
  }
  if (local_98[0] != (code *)0x0) {
    pppuVar1 = local_88;
    if (local_88 == (undefined ***)0x0) {
      pppuVar1 = &local_78;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436fafb4 FUN_1436fafb4 body=101 status=ok
// SIG undefined FUN_1436fafb4(void)

void FUN_1436fafb4(longlong *param_1,longlong param_2,int param_3,char param_4)

{
  int iVar1;
  int iVar2;
  
  FUN_147d34b96();
  iVar2 = param_3;
  if (param_4 == '\0') {
    iVar1 = (**(code **)(*param_1 + 0x10))(param_1);
    iVar2 = iVar1;
    if (param_3 < iVar1) {
      iVar2 = param_3;
    }
    if (iVar1 < param_3) {
      memset((void *)(param_2 + (longlong)iVar2 * 4),0,(longlong)(param_3 - iVar2) << 2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001436fb016. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,param_2,iVar2);
  return;
}



// FUNCTION 1436fb01a FUN_1436fb01a body=313 status=ok
// SIG undefined FUN_1436fb01a(void)

void FUN_1436fb01a(longlong param_1)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_a8 [44];
  undefined4 local_7c;
  uint *local_78;
  longlong local_70;
  undefined8 uStack_68;
  byte local_60;
  undefined4 local_5c;
  undefined4 *local_58;
  uint **local_50;
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar4 = 0;
    lVar3 = 0;
    do {
      local_70 = *(longlong *)(param_1 + 0x28) + lVar4;
      local_44 = (uint)*(byte *)(*(longlong *)(param_1 + 0x28) + lVar4);
      local_78 = &local_44;
      FUN_147d477f8(param_1 + 0x38,&local_58,&local_78,0);
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0x20;
    } while (lVar3 < *(int *)(param_1 + 0x30));
  }
  if (*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x6c)) {
    piVar2 = (int *)(param_1 + 0x70);
    if (*(int **)(param_1 + 0x78) != (int *)0x0) {
      piVar2 = *(int **)(param_1 + 0x78);
    }
    iVar1 = *piVar2;
    if (iVar1 != -1) {
      lVar3 = *(longlong *)(param_1 + 0x38);
      do {
        lVar4 = lVar3 + (longlong)iVar1 * 0x30;
        if (*(int *)(lVar3 + (longlong)iVar1 * 0x30) == 0) {
          if ((lVar4 != 0) && (lVar4 != -8)) goto LAB_1436fb0e5;
          break;
        }
        iVar1 = *(int *)(lVar4 + 0x28);
      } while (iVar1 != -1);
    }
  }
  local_50 = &local_78;
  local_78 = (uint *)((ulonglong)local_78 & 0xffffffffffffff00);
  local_70 = 0;
  uStack_68 = 0;
  local_60 = local_60 & 0xfe;
  local_5c = 0;
  local_58 = &local_7c;
  local_7c = 0;
  FUN_147d47d6a((longlong *)(param_1 + 0x38),&local_44,&local_58,0);
  if (local_70 != 0) {
    FUN_1400020a8();
  }
LAB_1436fb0e5:
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1436fb154 FUN_1436fb154 body=219 status=ok
// SIG undefined FUN_1436fb154(void)

longlong FUN_1436fb154(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int *piVar5;
  
  iVar2 = *(int *)(param_1 + 0x40);
  iVar1 = *(int *)(param_1 + 0x6c);
  if (iVar2 == iVar1) {
    FUN_1436fb01a(param_1);
    iVar2 = *(int *)(param_1 + 0x40);
    iVar1 = *(int *)(param_1 + 0x6c);
  }
  if (iVar2 != iVar1) {
    lVar3 = param_1 + 0x70;
    if (*(longlong *)(param_1 + 0x78) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x78);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x80) - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x38) + (longlong)iVar2 * 0x30;
        if (*(uint *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar2 * 0x30) == param_2) {
          if (lVar3 != 0) goto LAB_1436fb220;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x28);
      } while (iVar2 != -1);
    }
  }
  uVar4 = FUN_140851d9a();
  lVar3 = 0;
  FUN_140277b32(uVar4,0,L"/Script/Engine.ESoundGroup",0);
  if (*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x6c)) {
    piVar5 = (int *)(param_1 + 0x70);
    if (*(int **)(param_1 + 0x78) != (int *)0x0) {
      piVar5 = *(int **)(param_1 + 0x78);
    }
    iVar2 = *piVar5;
    if (iVar2 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x38) + (longlong)iVar2 * 0x30;
        if (*(int *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar2 * 0x30) == 0)
        goto LAB_1436fb220;
        iVar2 = *(int *)(lVar3 + 0x28);
      } while (iVar2 != -1);
    }
    lVar3 = 0;
  }
LAB_1436fb220:
  return lVar3 + 8;
}



// FUNCTION 1436fb22f FUN_1436fb22f body=55 status=ok
// SIG undefined FUN_1436fb22f(void)

void FUN_1436fb22f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb08900 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb08900 = FUN_14171c317(FUN_146402bea,uVar1,L"EModulationRouting");
  }
  return;
}



// FUNCTION 1436fb266 FUN_1436fb266 body=55 status=ok
// SIG undefined FUN_1436fb266(void)

void FUN_1436fb266(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb08918 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb08918 = FUN_14171c317(FUN_146402c1b,uVar1,L"EModulationDestination");
  }
  return;
}



// FUNCTION 1436fb29e FUN_1436fb29e body=89 status=ok
// SIG undefined FUN_1436fb29e(void)

void FUN_1436fb29e(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  FUN_147d4865f(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001436fb2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1436fb2f7 FUN_1436fb2f7 body=69 status=ok
// SIG undefined FUN_1436fb2f7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436fb2f7(void)

{
  _DAT_14cb08988 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436fb339. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb08990,1);
  return;
}



// FUNCTION 1436fb33c FUN_1436fb33c body=69 status=ok
// SIG undefined FUN_1436fb33c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436fb33c(void)

{
  _DAT_14cb089a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436fb37e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb089a8,1);
  return;
}



// FUNCTION 1436fb382 FUN_1436fb382 body=431 status=ok
// SIG undefined FUN_1436fb382(void)

undefined4 FUN_1436fb382(longlong param_1)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1;
  if (*(longlong *)(param_1 + 0x3e0) != 0) {
    return *(undefined4 *)(*(longlong *)(param_1 + 0x3e0) + 0x20);
  }
  for (; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x20)) {
    if ((*(uint *)(lVar3 + 8) & 0x30) != 0) {
      return 0;
    }
  }
LAB_1436fb3be:
  lVar4 = param_1;
  lVar3 = lVar4;
  if (*(longlong *)(lVar4 + 0x20) != 0) goto code_r0x0001436fb3cd;
  goto LAB_1436fb3de;
code_r0x0001436fb3cd:
  param_1 = *(longlong *)(lVar4 + 0x20);
  if ((*(uint *)(lVar4 + 8) >> 0x1c & 1) != 0) {
    lVar3 = FUN_142840154(lVar4);
LAB_1436fb3de:
    if (lVar3 != 0) {
      if ((*(byte *)(lVar3 + 0x2f) & 0x40) != 0) {
        return 0;
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14caced84) && (FUN_144b3d300(&DAT_14caced84), DAT_14caced84 == -1))
      {
        if (DAT_14c846b14 == '\0') {
          FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                        L"Attempting to get the command line but it hasn\'t been initialized yet.");
        }
        cVar1 = FUN_14054d46e(&DAT_14c846b20,L"nosound");
        if (cVar1 == '\0') {
          DAT_14caced80 = 0;
        }
        else {
          if (DAT_14c846b14 == '\0') {
            FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                          L"Attempting to get the command line but it hasn\'t been initialized yet."
                         );
          }
          bVar2 = FUN_14054d46e(&DAT_14c846b20,L"enablesound");
          DAT_14caced80 = bVar2 ^ 1;
        }
        _Init_thread_footer(&DAT_14caced84);
      }
      if (DAT_14caced8c <=
          *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110)) {
        return 0;
      }
      FUN_144b3d300(&DAT_14caced8c);
      if (DAT_14caced8c != -1) {
        return 0;
      }
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
      return 0;
    }
    param_1 = *(longlong *)(lVar4 + 0x20);
  }
  goto LAB_1436fb3be;
}



// FUNCTION 1436fb532 FUN_1436fb532 body=130 status=ok
// SIG undefined FUN_1436fb532(void)

longlong * FUN_1436fb532(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x38,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14aab0140;
  FUN_1436ffe44(plVar3 + 2,param_1);
  *param_2 = (longlong)(plVar3 + 2);
  param_2[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  return param_2;
}



// FUNCTION 1436fb5b4 FUN_1436fb5b4 body=936 status=ok
// SIG undefined FUN_1436fb5b4(void)

void FUN_1436fb5b4(longlong param_1,byte param_2)

{
  longlong *plVar1;
  int *piVar2;
  byte *pbVar3;
  longlong *plVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  byte bVar10;
  int iVar11;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined1 local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined1 *local_78;
  undefined8 local_68;
  undefined **local_58;
  undefined *local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  bVar6 = *(byte *)(param_1 + 0x34e);
  if (bVar6 == 4) goto LAB_1436fb6e5;
  if (bVar6 == 0) {
    lVar8 = *(longlong *)(param_1 + 0x3e0);
    bVar10 = *(byte *)(lVar8 + 0xe4);
LAB_1436fb60d:
    if ((bVar10 & 0x20) == 0) {
      iVar11 = 3;
      if (DAT_14c761b58 < 3) {
        iVar11 = DAT_14c761b58;
      }
      bVar6 = 1;
      if (1 < iVar11) {
        bVar6 = (byte)iVar11;
      }
    }
    else {
      bVar6 = *(byte *)(lVar8 + 0x78);
    }
  }
  else {
    lVar8 = *(longlong *)(param_1 + 0x3e0);
    bVar10 = *(byte *)(lVar8 + 0xe4);
    if ((bVar10 & 0x20) != 0) goto LAB_1436fb60d;
  }
  uVar7 = *(uint *)(param_1 + 8);
  if (param_2 <= bVar6) {
    *(byte *)(lVar8 + 0x78) = param_2;
    pbVar3 = (byte *)(*(longlong *)(param_1 + 0x3e0) + 0xe4);
    *pbVar3 = *pbVar3 | 0x20;
    lVar8 = param_1;
LAB_1436fb652:
    lVar9 = lVar8;
    lVar8 = lVar9;
    if (*(longlong *)(lVar9 + 0x20) != 0) goto code_r0x0001436fb661;
    goto LAB_1436fb672;
  }
LAB_1436fb6e5:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x0001436fb661:
  lVar8 = *(longlong *)(lVar9 + 0x20);
  if ((*(uint *)(lVar9 + 8) >> 0x1c & 1) == 0) goto LAB_1436fb652;
  lVar8 = FUN_142840154(lVar9);
LAB_1436fb672:
  if (lVar8 == 0) {
    lVar8 = *(longlong *)(lVar9 + 0x20);
    goto LAB_1436fb652;
  }
  if ((*(byte *)(lVar8 + 0x2f) & 0x40) != 0) goto LAB_1436fb6e5;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14caced84) && (FUN_144b3d300(&DAT_14caced84), DAT_14caced84 == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar5 = FUN_14054d46e(&DAT_14c846b20,L"nosound");
    if (cVar5 == '\0') {
      DAT_14caced80 = 0;
    }
    else {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      bVar6 = FUN_14054d46e(&DAT_14c846b20,L"enablesound");
      DAT_14caced80 = bVar6 ^ 1;
    }
    _Init_thread_footer(&DAT_14caced84);
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
  }
  if (((((uVar7 >> 10 & 1) != 0) || (DAT_14caced88 != 0)) || ((DAT_14caced80 & 1) != 0)) ||
     (cVar5 = FUN_147d35f64(param_1,0), cVar5 == '\0')) goto LAB_1436fb6e5;
  if (param_2 != 2) {
    if (param_2 == 1) {
      FUN_1400337aa(param_1);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_b8);
    }
    goto LAB_1436fb6e5;
  }
  uVar7 = FUN_1436fb382(param_1);
  if (uVar7 < 2) goto LAB_1436fb6e5;
  if (*(longlong *)(param_1 + 0x188) == 0) {
    FUN_1436fb532(param_1,&local_88);
    plVar1 = local_80;
    *(undefined8 *)(param_1 + 0x188) = local_88;
    local_88 = 0;
    plVar4 = *(longlong **)(param_1 + 400);
    if (local_80 != plVar4) {
      local_80 = (longlong *)0x0;
      *(longlong **)(param_1 + 400) = plVar1;
      if (plVar4 == (longlong *)0x0) goto LAB_1436fb773;
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
    plVar4 = local_80;
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_80 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_80)(local_80);
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
LAB_1436fb773:
  lVar8 = FUN_140083894();
  local_68 = 0;
  local_58 = &PTR_LAB_14a7fed80;
  local_50 = &DAT_143701ee4;
  local_78 = &LAB_1479879bc;
  local_90 = 0;
  local_98 = 0xff;
  (**(code **)(**(longlong **)(lVar8 + 0x38) + 0xa8))
            (*(longlong **)(lVar8 + 0x38),param_1 + 0x188,1);
  goto LAB_1436fb6e5;
}



// FUNCTION 1436fb972 FUN_1436fb972 body=69 status=ok
// SIG undefined FUN_1436fb972(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436fb972(void)

{
  _DAT_14cb08a28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436fb9b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb08a30,1);
  return;
}



// FUNCTION 1436fb9b7 FUN_1436fb9b7 body=41 status=ok
// SIG undefined FUN_1436fb9b7(void)

void FUN_1436fb9b7(void)

{
  DAT_14cb08b18 = 0;
  if (DAT_14cb08b10 != 0) {
    FUN_1400020a8();
  }
  FUN_146192140();
  return;
}



// FUNCTION 1436fb9e0 FUN_1436fb9e0 body=936 status=ok
// SIG undefined FUN_1436fb9e0(void)

void FUN_1436fb9e0(longlong param_1,undefined8 param_2,ulonglong param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  int iVar4;
  int *piVar5;
  ulonglong **ppuVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  ulonglong *local_78;
  undefined8 uStack_70;
  int local_64;
  ulonglong local_60;
  ulonglong *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_60 = param_3;
  if (*(int *)(param_4 + 0x778) != *(int *)(param_4 + 0x7a4)) {
    lVar7 = param_4 + 0x7a8;
    if (*(longlong *)(param_4 + 0x7b0) != 0) {
      lVar7 = *(longlong *)(param_4 + 0x7b0);
    }
    iVar4 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(param_4 + 0x7b8) - 1U &
                             (int)param_3 + (int)(param_3 >> 0x20) * 0x17) * 4);
    if (iVar4 != -1) {
      do {
        puVar2 = (ulonglong *)(*(longlong *)(param_4 + 0x770) + (longlong)iVar4 * 0x18);
        if (*puVar2 == param_3) {
          if (puVar2 != (ulonglong *)0x0) {
            iVar4 = (int)puVar2[1];
            lVar7 = *(longlong *)(param_4 + 0x7c0);
            piVar5 = (int *)(iVar4 + lVar7);
            goto LAB_1436fbb0c;
          }
          break;
        }
        iVar4 = (int)puVar2[2];
      } while (iVar4 != -1);
    }
  }
  plVar1 = (longlong *)(param_4 + 0x7c0);
  iVar4 = *(int *)(param_4 + 0x7c8);
  *(int *)(param_4 + 0x7c8) = iVar4 + 8;
  if ((uint)(*(int *)(param_4 + 0x7cc) - iVar4) < 8) {
    FUN_1447403be(plVar1,iVar4);
  }
  *(undefined8 *)(*plVar1 + (longlong)iVar4) = 0;
  uStack_50 = &local_64;
  local_58 = &local_60;
  local_64 = iVar4;
  FUN_1402eaea6((longlong *)(param_4 + 0x770),&local_78,&local_58,0);
  piVar5 = (int *)(*plVar1 + (longlong)local_64);
  *(undefined4 *)(*plVar1 + (longlong)local_64) = 1;
  lVar7 = *plVar1;
  iVar4 = local_64;
LAB_1436fbb0c:
  lVar8 = (longlong)(iVar4 + 4);
  if (*piVar5 != 0) {
    *piVar5 = 0;
    local_58 = (ulonglong *)0x0;
    uStack_50 = (int *)0x0;
    iVar4 = *(int *)(param_1 + 0x30);
    if (iVar4 < 0) {
LAB_1436fbd81:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar4);
    }
    if (iVar4 == 0) {
      local_78 = (ulonglong *)0x0;
      uStack_70 = 0;
    }
    else {
      FUN_14481578e(&local_58);
      iVar4 = *(int *)(param_1 + 0x30);
      local_78 = (ulonglong *)0x0;
      uStack_70 = 0;
      if (iVar4 < 0) goto LAB_1436fbd81;
      if ((iVar4 != 0) && (FUN_14481578e(&local_78), 0 < *(int *)(param_1 + 0x30))) {
        lVar9 = 0;
        do {
          if (*(longlong *)(*(longlong *)(param_1 + 0x28) + lVar9 * 8) != 0) {
            iVar4 = FUN_147d3a250();
            piVar5 = uStack_50;
            uVar3 = uStack_70;
            if (iVar4 == 2) {
              iVar4 = (int)uStack_70;
              uVar11 = (int)uStack_70 + 1;
              uStack_70 = CONCAT44(uStack_70._4_4_,uVar11);
              if (uStack_70._4_4_ < uVar11) {
                FUN_1446f48e2(&local_78,uVar3 & 0xffffffff);
              }
              ppuVar6 = &local_78;
            }
            else {
              if (iVar4 != 1) goto LAB_1436fbb89;
              iVar4 = (int)uStack_50;
              uVar11 = (int)uStack_50 + 1;
              uStack_50 = (int *)CONCAT44(uStack_50._4_4_,uVar11);
              ppuVar6 = &local_58;
              if (uStack_50._4_4_ < uVar11) {
                FUN_1446f48e2(&local_58,(ulonglong)piVar5 & 0xffffffff);
              }
            }
            *(int *)((longlong)*ppuVar6 + (longlong)iVar4 * 4) = (int)lVar9;
          }
LAB_1436fbb89:
          lVar9 = lVar9 + 1;
        } while (lVar9 < *(int *)(param_1 + 0x30));
      }
    }
    *(undefined4 *)(lVar7 + lVar8) = 0xffffffff;
    if (((*(byte *)(DAT_14cb0d2b0 + 0xd80) & 1) == 0) || ((int)uStack_50 < 1)) {
      if (0 < (int)uStack_70) {
        *(int *)(lVar7 + lVar8) = (int)*local_78;
      }
    }
    else {
      *(int *)(lVar7 + lVar8) = (int)*local_58;
    }
    if (local_78 != (ulonglong *)0x0) {
      FUN_1400020a8();
    }
    if (local_58 != (ulonglong *)0x0) {
      FUN_1400020a8();
    }
  }
  iVar4 = *(int *)(lVar7 + lVar8);
  if (((-1 < (longlong)iVar4) && (iVar4 < *(int *)(param_1 + 0x30))) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x28) + (longlong)iVar4 * 8),
     plVar1 != (longlong *)0x0)) {
    uVar11 = ((uint)((ulonglong)plVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar1 >> 4)) *
             -0x7a143595;
    uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
    uVar11 = uVar11 >> 0x10 ^ uVar11;
    uVar10 = ((uint)(local_60 >> 0x14) & 0xffff ^ (uint)(local_60 >> 4)) * -0x7a143595;
    uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
    uVar10 = uVar10 >> 0x10 ^ uVar10;
    local_80 = param_6;
    local_88 = param_5;
    (**(code **)(*plVar1 + 0x2e0))
              (plVar1,param_2,
               (uVar10 >> 2) + uVar10 * 0x40 + -0x61c88647 +
               ((uVar11 >> 2) + 0x9e3779b9 + uVar11 * 0x40 + iVar4 ^ uVar11) ^ uVar10,param_4);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1436fbd8a FUN_1436fbd8a body=127 status=ok
// SIG undefined FUN_1436fbd8a(void)

void FUN_1436fbd8a(longlong param_1)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0xd5) & 4) != 0) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar1 = FUN_1400439fc(param_1,0,&local_19);
  if (cVar1 == '\0') {
    if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 1436fbe1d FUN_1436fbe1d body=69 status=ok
// SIG undefined FUN_1436fbe1d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436fbe1d(void)

{
  _DAT_14cb08be0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436fbe5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb08be8,1);
  return;
}



// FUNCTION 1436fbe62 FUN_1436fbe62 body=69 status=ok
// SIG undefined FUN_1436fbe62(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436fbe62(void)

{
  _DAT_14cb08bf8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436fbea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb08c00,1);
  return;
}



// FUNCTION 1436fbea8 FUN_1436fbea8 body=803 status=ok
// SIG undefined FUN_1436fbea8(void)

void FUN_1436fbea8(longlong param_1,char param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 *local_58;
  undefined4 local_50;
  longlong local_48;
  int local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar3 = (*(code *)PTR_FUN_14c75b120)();
  if (cVar3 == '\0') {
    lVar4 = FUN_147d3c7be(param_1 + 0x48);
    if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar4);
      *(longlong *)(param_1 + 0x70) = lVar4;
LAB_1436fbf64:
      if (param_2 != '\0') {
        uVar1 = *(uint *)(lVar4 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar4 = 0;
        }
        FUN_1447f71cc(lVar4,0x40000000);
        lVar4 = *(longlong *)(param_1 + 0x70);
      }
      FUN_1406555d4(lVar4,param_1,0);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
    }
    *(longlong *)(param_1 + 0x70) = lVar4;
    if (lVar4 != 0) goto LAB_1436fbf64;
    goto LAB_1436fc13d;
  }
  lVar4 = FUN_147d3c660();
  if ((lVar4 == 0) || (DAT_14c950c29 == '\0')) {
    *(longlong *)(param_1 + 0x70) = lVar4;
    if (lVar4 != 0) goto LAB_1436fbefc;
LAB_1436fbfa0:
    local_38 = *(longlong *)(param_1 + 0x50);
    if (local_38 != 0) {
      FUN_1400021e4(&local_38,&local_48);
      if (1 < local_40) {
        *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) | 1;
        local_58 = (undefined8 *)0x0;
        local_50 = 0;
        FUN_1446efa72(&local_58,0,3,0x10);
        puVar2 = local_58;
        local_50 = 3;
        *local_58 = &PTR_LAB_14aaafff0;
        *(char *)(local_58 + 1) = param_2;
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
        local_58[2] = lVar5;
        *local_58 = &PTR_FUN_14aaaff80;
        local_58[3] = 0;
        iVar7 = 0;
        if (param_1 != 0) {
          uVar1 = *(uint *)(param_1 + 0xc);
          *(uint *)(local_58 + 3) = uVar1;
          if ((int)uVar1 < DAT_14c9647dc) {
            lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          }
          else {
            lVar4 = 0;
          }
          iVar7 = *(int *)(lVar4 + 0x10);
          if (*(int *)(lVar4 + 0x10) == 0) {
            LOCK();
            iVar7 = DAT_14c964868 + 1;
            UNLOCK();
            iVar6 = DAT_14c964868 + 1;
            bVar8 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar7;
            if (bVar8) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar6);
            }
            LOCK();
            iVar7 = *(int *)(lVar4 + 0x10);
            bVar8 = iVar7 == 0;
            if (bVar8) {
              *(int *)(lVar4 + 0x10) = iVar6;
              iVar7 = 0;
            }
            UNLOCK();
            if (bVar8) {
              iVar7 = iVar6;
            }
          }
        }
        *(int *)((longlong)puVar2 + 0x1c) = iVar7;
        puVar2[4] = FUN_147d3c726;
        local_68 = 0xffffffff;
        FUN_1427d6730(&local_48,&local_58,0,0);
      }
      if (local_48 != 0) {
        FUN_1400020a8();
      }
    }
LAB_1436fc119:
    lVar4 = *(longlong *)(param_1 + 0x70);
    if (lVar4 == 0) goto LAB_1436fc13d;
  }
  else {
    FUN_1456cec3c(lVar4);
    *(longlong *)(param_1 + 0x70) = lVar4;
LAB_1436fbefc:
    if ((*(uint *)(lVar4 + 8) >> 10 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x70) = 0;
      goto LAB_1436fbfa0;
    }
    if (param_2 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      FUN_1447f71cc(lVar4,0x40000000);
      goto LAB_1436fc119;
    }
  }
  FUN_1406555d4(lVar4,param_1,1);
  (**(code **)(**(longlong **)(param_1 + 0x70) + 0x348))();
LAB_1436fc13d:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1436fc1e4 FUN_1436fc1e4 body=1361 status=ok
// SIG undefined FUN_1436fc1e4(void)

void FUN_1436fc1e4(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong **param_5,longlong param_6)

{
  int *piVar1;
  longlong *plVar2;
  byte bVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  int *piVar12;
  uint uVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_338 [32];
  longlong **local_318;
  longlong local_310;
  int local_304;
  longlong local_300;
  int local_2f8;
  undefined4 uStack_2f4;
  longlong *local_2f0;
  longlong local_2e8;
  longlong *local_2e0;
  int *local_2d8;
  undefined1 local_2cc [4];
  code *local_2c8;
  undefined8 local_2b8;
  undefined **local_2a8;
  ulonglong local_2a0;
  longlong *local_288;
  int *local_280;
  longlong local_278;
  ulonglong uStack_270;
  undefined4 local_268;
  byte local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_338;
  local_2e8 = param_3;
  if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
    if (*(longlong *)(param_1 + 0x70) == 0) {
      if ((*(longlong *)(param_1 + 0x50) != 0) && (*(int *)(param_1 + 0x7c) == 0)) {
        LOCK();
        *(undefined4 *)(param_1 + 0x7c) = 1;
        UNLOCK();
        if (param_1 == 0) {
          uVar10 = 0;
          uVar8 = 0;
        }
        else {
          uVar10 = *(uint *)(param_1 + 0xc);
          if ((int)uVar10 < DAT_14c9647dc) {
            lVar11 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
          }
          else {
            lVar11 = 0;
          }
          uVar8 = (ulonglong)*(uint *)(lVar11 + 0x10);
          if (*(uint *)(lVar11 + 0x10) == 0) {
            LOCK();
            iVar9 = DAT_14c964868 + 1;
            UNLOCK();
            uVar13 = DAT_14c964868 + 1;
            bVar15 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar9;
            if (bVar15) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,uVar13);
            }
            LOCK();
            uVar6 = *(uint *)(lVar11 + 0x10);
            bVar15 = uVar6 == 0;
            if (bVar15) {
              *(uint *)(lVar11 + 0x10) = uVar13;
              uVar6 = 0;
            }
            UNLOCK();
            if (bVar15) {
              uVar6 = uVar13;
            }
            uVar8 = (ulonglong)uVar6;
          }
        }
        local_2a0 = (ulonglong)uVar10 | uVar8 << 0x20;
        local_2b8 = 0;
        local_2a8 = &PTR_LAB_14aab0060;
        local_2c8 = FUN_1437013bc;
        FUN_1407461b0(1);
      }
    }
    else {
      if (*(int *)(param_4 + 0x778) != *(int *)(param_4 + 0x7a4)) {
        lVar11 = param_4 + 0x7a8;
        if (*(longlong *)(param_4 + 0x7b0) != 0) {
          lVar11 = *(longlong *)(param_4 + 0x7b0);
        }
        iVar9 = *(int *)(lVar11 + (ulonglong)
                                  (*(int *)(param_4 + 0x7b8) - 1U &
                                  (int)param_3 + (int)((ulonglong)param_3 >> 0x20) * 0x17) * 4);
        if (iVar9 != -1) {
          do {
            plVar2 = (longlong *)(*(longlong *)(param_4 + 0x770) + (longlong)iVar9 * 0x18);
            if (*plVar2 == param_3) {
              if (plVar2 != (longlong *)0x0) {
                iVar9 = (int)plVar2[1];
                lVar11 = *(longlong *)(param_4 + 0x7c0);
                piVar12 = (int *)(iVar9 + lVar11);
                goto LAB_1436fc3eb;
              }
              break;
            }
            iVar9 = (int)plVar2[2];
          } while (iVar9 != -1);
        }
      }
      plVar2 = (longlong *)(param_4 + 0x7c0);
      iVar9 = *(int *)(param_4 + 0x7c8);
      *(int *)(param_4 + 0x7c8) = iVar9 + 8;
      if ((uint)(*(int *)(param_4 + 0x7cc) - iVar9) < 8) {
        FUN_1447403be(plVar2,iVar9);
      }
      *(undefined8 *)(*plVar2 + (longlong)iVar9) = 0;
      local_280 = &local_2f8;
      local_288 = &local_2e8;
      local_2f8 = iVar9;
      FUN_1402eaea6((longlong *)(param_4 + 0x770),&local_2e0,&local_288,0);
      piVar12 = (int *)(*plVar2 + (longlong)local_2f8);
      *(undefined4 *)(*plVar2 + (longlong)local_2f8) = 1;
      lVar11 = *plVar2;
      iVar9 = local_2f8;
LAB_1436fc3eb:
      lVar14 = (longlong)(iVar9 + 4);
      if (*piVar12 != 0) {
        *(undefined4 *)(lVar11 + lVar14) = 0;
        plVar2 = *(longlong **)(param_4 + 0x188);
        if (plVar2 != (longlong *)0x0) {
          local_288 = (longlong *)0xffffffffffffffff;
          local_280 = (int *)((ulonglong)local_280 & 0xffffffff00000000);
          local_278 = 0;
          uStack_270 = 0;
          local_268 = 0xffffffff;
          uVar7 = (**(code **)(*plVar2 + 0x30))(plVar2);
          FUN_1477c2298(&local_278,uVar7);
          uVar10 = (int)*(ulonglong *)(param_4 + 0x30) +
                   (int)(*(ulonglong *)(param_4 + 0x30) / 0xffffffff);
          local_288 = (longlong *)
                      (ulonglong)
                      ((uVar10 >> 2) + *(int *)(param_4 + 0x54) + (int)local_2e8 + uVar10 * 0x40 +
                       0x9e3779b9 ^ uVar10);
          local_280 = (int *)CONCAT44(local_280._4_4_,(float)*(int *)(param_2 + 0x74));
          local_268 = *(undefined4 *)(param_2 + 0x90);
          (**(code **)(**(longlong **)(param_1 + 0x70) + 0x340))
                    (*(longlong **)(param_1 + 0x70),&local_278,0);
          (**(code **)(**(longlong **)(param_1 + 0x70) + 0x368))
                    (*(longlong **)(param_1 + 0x70),&local_2f8,&local_288);
          if (CONCAT44(uStack_2f4,local_2f8) != 0) {
            local_2e0 = &local_2e8;
            local_2d8 = &local_2f8;
            FUN_147d49da4(plVar2 + 6,local_2cc);
          }
          if (local_2f0 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_2f0 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_2f0)(local_2f0);
              LOCK();
              piVar1 = (int *)((longlong)local_2f0 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_2f0 + 0x10))(local_2f0);
              }
            }
          }
          FUN_145aa5488(local_278,uStack_270 & 0xffffffff);
          if (local_278 != 0) {
            FUN_1400020a8();
          }
        }
        *piVar12 = 0;
      }
      bVar3 = *(byte *)(*(longlong *)(param_1 + 0x70) + 0x183);
      *(byte *)(*(longlong *)(param_1 + 0x70) + 0x183) = bVar3 & 0xfe;
      if (((*(byte *)(param_1 + 0x78) & 2) == 0) &&
         (((*(byte *)((longlong)*(longlong **)(param_1 + 0x70) + 0x34c) & 1) == 0 ||
          (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x308))(), cVar5 != '\0')))) {
        if ((*(byte *)((longlong)param_5 + 0x23c) & 0x40) == 0) {
          if ((-1 < *(char *)(param_4 + 0x198)) && (*(int *)(lVar11 + lVar14) == 0)) {
            iVar9 = *(int *)(param_4 + 0x140);
            iVar4 = *(int *)(param_4 + 0x16c);
            local_304 = *(int *)(param_6 + 8);
            local_310 = param_6;
            local_318 = param_5;
            local_300 = lVar11;
            (**(code **)(**(longlong **)(param_1 + 0x70) + 0x310))
                      (*(longlong **)(param_1 + 0x70),param_2,local_2e8,param_4);
            if ((*(int *)(param_4 + 0x140) - *(int *)(param_4 + 0x16c) == iVar9 - iVar4) &&
               (*(int *)(param_6 + 8) == local_304)) {
              *(undefined4 *)(local_300 + lVar14) = 1;
            }
          }
        }
        else {
          local_310 = param_6;
          local_318 = param_5;
          (**(code **)(**(longlong **)(param_1 + 0x70) + 0x310))
                    (*(longlong **)(param_1 + 0x70),param_2,local_2e8,param_4);
        }
      }
      else {
        FUN_147d36b2c(&local_288,param_5);
        local_4c = local_4c | 2;
        local_310 = param_6;
        local_318 = &local_288;
        (**(code **)(**(longlong **)(param_1 + 0x70) + 0x310))
                  (*(longlong **)(param_1 + 0x70),param_2,local_2e8,param_4);
        FUN_1478b5da6(&local_288);
      }
      *(byte *)(*(longlong *)(param_1 + 0x70) + 0x183) =
           *(byte *)(*(longlong *)(param_1 + 0x70) + 0x183) & 0xfe | bVar3 & 1;
    }
  }
  else {
    *(byte *)(param_4 + 0x198) = *(byte *)(param_4 + 0x198) & 0xef;
  }
  if ((local_48 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1436fc736 FUN_1436fc736 body=55 status=ok
// SIG undefined FUN_1436fc736(void)

void FUN_1436fc736(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb08c78 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb08c78 = FUN_14171c317(FUN_1464036b3,uVar1,L"ESourceBusChannels");
  }
  return;
}



// FUNCTION 1436fc76e FUN_1436fc76e body=2658 status=ok
// SIG undefined FUN_1436fc76e(void)

void FUN_1436fc76e(longlong *param_1)

{
  int *piVar1;
  float fVar2;
  uint5 uVar3;
  undefined4 uVar4;
  char cVar5;
  byte bVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 uVar14;
  longlong *plVar15;
  byte bVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  bool bVar20;
  undefined4 uVar21;
  float fVar22;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  ulonglong uStack_90;
  longlong local_88;
  longlong *local_80;
  undefined1 *local_78;
  undefined8 local_68;
  undefined **local_58;
  undefined *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(byte *)(param_1[2] + 0xd5) & 4) != 0) {
    local_98 = 0;
    uStack_90 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar5 = FUN_1400439fc(param_1,0,&local_88);
  plVar11 = param_1;
  if (cVar5 != '\0') {
    (**(code **)(*param_1 + 0x268))(param_1);
  }
LAB_1436fc7bd:
  plVar13 = plVar11;
  plVar11 = plVar13;
  if ((longlong *)plVar13[4] != (longlong *)0x0) goto code_r0x0001436fc7cc;
  goto LAB_1436fc7dd;
code_r0x0001436fc7cc:
  plVar11 = (longlong *)plVar13[4];
  if ((*(uint *)(plVar13 + 1) >> 0x1c & 1) == 0) goto LAB_1436fc7bd;
  plVar11 = (longlong *)FUN_142840154(plVar13);
LAB_1436fc7dd:
  if (plVar11 == (longlong *)0x0) {
    plVar11 = (longlong *)plVar13[4];
    goto LAB_1436fc7bd;
  }
  if ((*(byte *)((longlong)plVar11 + 0x2f) & 0x40) != 0) goto LAB_1436fc7ee;
  uVar21 = (**(code **)(*param_1 + 0x390))(param_1);
  *(undefined4 *)((longlong)param_1 + 0x104) = uVar21;
  lVar12 = FUN_14588a7e8();
  if (((*(int *)(lVar12 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
      (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8) ==
       lVar12 + 0x30)) || ((*(byte *)((longlong)param_1 + 0x34c) & 1) != 0)) goto LAB_1436fc7ee;
  FUN_147d4081e(param_1);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14caced84) && (FUN_144b3d300(&DAT_14caced84), DAT_14caced84 == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar5 = FUN_14054d46e(&DAT_14c846b20,L"nosound");
    if (cVar5 == '\0') {
      DAT_14caced80 = 0;
    }
    else {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      bVar6 = FUN_14054d46e(&DAT_14c846b20,L"enablesound");
      DAT_14caced80 = bVar6 ^ 1;
    }
    _Init_thread_footer(&DAT_14caced84);
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
  }
  plVar11 = param_1;
  if ((DAT_14caced88 == 0) && ((DAT_14caced80 & 1) == 0)) {
    if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14caced84) && (FUN_144b3d300(&DAT_14caced84), DAT_14caced84 == -1))
      {
        if (DAT_14c846b14 == '\0') {
          FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                        L"Attempting to get the command line but it hasn\'t been initialized yet.");
        }
        cVar5 = FUN_14054d46e(&DAT_14c846b20,L"nosound");
        if (cVar5 == '\0') {
          DAT_14caced80 = 0;
        }
        else {
          if (DAT_14c846b14 == '\0') {
            FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                          L"Attempting to get the command line but it hasn\'t been initialized yet."
                         );
          }
          bVar6 = FUN_14054d46e(&DAT_14c846b20,L"enablesound");
          DAT_14caced80 = bVar6 ^ 1;
        }
        _Init_thread_footer(&DAT_14caced84);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14caced8c) && (FUN_144b3d300(&DAT_14caced8c), DAT_14caced8c == -1))
      {
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
      }
      if ((DAT_14caced88 == 0) && ((DAT_14caced80 & 1) == 0)) {
        lVar12 = param_1[0x7c];
        *(longlong *)(lVar12 + 0x7c) = param_1[3];
        plVar13 = param_1;
LAB_1436fcd7c:
        plVar15 = plVar13;
        plVar13 = plVar15;
        if ((longlong *)plVar15[4] != (longlong *)0x0) goto code_r0x0001436fcd8b;
        goto LAB_1436fcd9c;
      }
    }
    goto LAB_1436fcf0e;
  }
  goto joined_r0x0001436fc8c0;
code_r0x0001436fcd8b:
  plVar13 = (longlong *)plVar15[4];
  if ((*(uint *)(plVar15 + 1) >> 0x1c & 1) == 0) goto LAB_1436fcd7c;
  plVar13 = (longlong *)FUN_142840154(plVar15);
LAB_1436fcd9c:
  if (plVar13 == (longlong *)0x0) {
    plVar13 = (longlong *)plVar15[4];
    goto LAB_1436fcd7c;
  }
  *(longlong *)(lVar12 + 0x84) = plVar13[3];
  if (param_1 == (longlong *)0x0) {
    uVar14 = 0;
  }
  else {
    uVar9 = *(uint *)((longlong)param_1 + 0xc);
    if ((int)uVar9 < DAT_14c9647dc) {
      lVar19 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
    }
    else {
      lVar19 = 0;
    }
    iVar10 = *(int *)(lVar19 + 0x10);
    if (*(int *)(lVar19 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      iVar17 = DAT_14c964868 + 1;
      bVar20 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar20) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar17);
      }
      LOCK();
      iVar10 = *(int *)(lVar19 + 0x10);
      bVar20 = iVar10 == 0;
      if (bVar20) {
        *(int *)(lVar19 + 0x10) = iVar17;
        iVar10 = 0;
      }
      UNLOCK();
      if (bVar20) {
        iVar10 = iVar17;
      }
    }
    uVar14 = CONCAT44(iVar10,uVar9);
  }
  *(undefined8 *)(lVar12 + 0x94) = uVar14;
  fVar22 = (float)FUN_147d3f71a(param_1);
  *(float *)(lVar12 + 0xd4) = fVar22;
  fVar2 = *(float *)(param_1 + 0x20);
  *(float *)(lVar12 + 0xd8) = fVar2;
  *(undefined4 *)(lVar12 + 0xdc) = *(undefined4 *)((longlong)param_1 + 0x36c);
  *(int *)(lVar12 + 0xe0) = (int)(fVar22 * fVar2);
  uVar21 = *(undefined4 *)((longlong)param_1 + 0x3c4);
  lVar19 = param_1[0x79];
  uVar4 = *(undefined4 *)((longlong)param_1 + 0x3cc);
  *(int *)(lVar12 + 0xc4) = (int)param_1[0x78];
  *(undefined4 *)(lVar12 + 200) = uVar21;
  *(int *)(lVar12 + 0xcc) = (int)lVar19;
  *(undefined4 *)(lVar12 + 0xd0) = uVar4;
  bVar16 = 0;
  cVar5 = FUN_147d35f64(param_1,0);
  *(byte *)(lVar12 + 0xe4) = *(byte *)(lVar12 + 0xe4) & 0xfb | cVar5 << 2;
  bVar6 = (**(code **)(*param_1 + 0x300))(param_1);
  bVar6 = *(byte *)(lVar12 + 0xe4) & 0xfe | bVar6;
  *(byte *)(lVar12 + 0xe4) = bVar6;
  plVar13 = param_1;
  if (param_1 != (longlong *)0x0) {
    do {
      if ((*(uint *)(plVar13 + 1) & 0x30) != 0) {
        bVar16 = 2;
        goto LAB_1436fcea1;
      }
      plVar15 = plVar13 + 4;
      plVar13 = (longlong *)*plVar15;
    } while ((longlong *)*plVar15 != (longlong *)0x0);
    bVar16 = 0;
  }
LAB_1436fcea1:
  *(byte *)(lVar12 + 0xe4) = bVar6 & 0xf5 | bVar16;
  uVar7 = FUN_147d3f7c4(param_1);
  *(undefined1 *)(lVar12 + 0xc0) = uVar7;
  cVar5 = FUN_147d35f64(param_1,0);
  *(byte *)(param_1[0x7c] + 0xe4) = *(byte *)(param_1[0x7c] + 0xe4) & 0xef | cVar5 << 4;
  *(byte *)(lVar12 + 0xe4) = *(byte *)(lVar12 + 0xe4) & 0xef | cVar5 << 4;
  FUN_147d3f840(lVar12,&local_88,param_1);
  FUN_147d3f6ba(lVar12,local_88);
LAB_1436fcf0e:
  cVar5 = *(char *)(param_1[0x7c] + 0x78);
  if (cVar5 == -1) {
    FUN_147d4081e(param_1);
    cVar5 = *(char *)(param_1[0x7c] + 0x78);
  }
  if ((cVar5 != '\x04') && (param_1[0x31] == 0)) {
    FUN_1436fb532(param_1,&local_88);
    plVar15 = local_80;
    param_1[0x31] = local_88;
    local_88 = 0;
    plVar13 = (longlong *)param_1[0x32];
    if (local_80 != plVar13) {
      local_80 = (longlong *)0x0;
      param_1[0x32] = (longlong)plVar15;
      if (plVar13 == (longlong *)0x0) goto LAB_1436fcfd4;
      LOCK();
      plVar15 = plVar13 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
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
    plVar13 = local_80;
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_80 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
        (**(code **)*local_80)(local_80);
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
LAB_1436fcfd4:
  cVar8 = FUN_147d35f64(param_1,0);
  *(byte *)(param_1[0x7c] + 0xe4) = *(byte *)(param_1[0x7c] + 0xe4) & 0xef | cVar8 << 4;
  if (cVar8 != '\0') {
    if ((cVar5 == '\x01') && (DAT_14cb08f88 == 0)) {
      FUN_1436fe8a2(param_1);
    }
    else {
      FUN_147d361a4(param_1);
      if ((cVar5 == '\x02') && (uVar9 = FUN_1436fb382(param_1), 1 < uVar9)) {
        lVar12 = FUN_140083894();
        local_68 = 0;
        local_58 = &PTR_LAB_14a7fed80;
        local_50 = &DAT_1437017a8;
        local_78 = &LAB_1479879bc;
        uStack_90 = uStack_90 & 0xffffffffffffff00;
        local_98 = CONCAT44(local_98._4_4_,0xff);
        (**(code **)(**(longlong **)(lVar12 + 0x38) + 0xa8))
                  (*(longlong **)(lVar12 + 0x38),param_1 + 0x31,1);
      }
    }
    if (DAT_14cb08f88 != 0) {
      FUN_147d361a4(param_1);
    }
    cVar5 = FUN_147d35f64(param_1,0);
    *(byte *)((longlong)param_1 + 0x183) =
         *(byte *)((longlong)param_1 + 0x183) & 0xfd | cVar5 * '\x02';
  }
joined_r0x0001436fc8c0:
  for (; plVar11 != (longlong *)0x0; plVar11 = (longlong *)plVar11[4]) {
    if ((*(uint *)(plVar11 + 1) & 0x10) != 0) goto LAB_1436fc8f2;
  }
  if ((((DAT_14cb0d2b0 != 0) && (*(longlong *)(DAT_14cb0d2b0 + 0xf50) != 0)) &&
      (*(longlong *)(DAT_14cb0d2b0 + 0xf60) != 0)) &&
     (plVar11 = (longlong *)FUN_1479735a4(*(longlong *)(DAT_14cb0d2b0 + 0xf50) + 0x90),
     plVar11 != (longlong *)0x0)) {
    local_98 = local_98 & 0xffffffffffffff00;
    (**(code **)(*plVar11 + 0x60))(plVar11,param_1,0,1);
  }
LAB_1436fc8f2:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14caced84) && (FUN_144b3d300(&DAT_14caced84), DAT_14caced84 == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar5 = FUN_14054d46e(&DAT_14c846b20,L"nosound");
    if (cVar5 == '\0') {
      DAT_14caced80 = 0;
    }
    else {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      bVar6 = FUN_14054d46e(&DAT_14c846b20,L"enablesound");
      DAT_14caced80 = bVar6 ^ 1;
    }
    _Init_thread_footer(&DAT_14caced84);
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
  }
  if (((DAT_14caced88 == 0) && ((DAT_14caced80 & 1) == 0)) &&
     (cVar5 = FUN_147d35f64(param_1,0), cVar5 != '\0')) {
    uVar21 = FUN_147d35f64(param_1,0);
    *(byte *)(param_1[0x7c] + 0xe4) = *(byte *)(param_1[0x7c] + 0xe4) & 0xef | (char)uVar21 << 4;
    if ((((char)uVar21 != '\0') && (lVar12 = param_1[0x7c], *(longlong *)(lVar12 + 8) < 1)) &&
       (0 < *(int *)(lVar12 + 0x20))) {
      lVar12 = **(longlong **)(lVar12 + 0x18);
      iVar10 = *(int *)(lVar12 + 4);
      uVar3 = *(uint5 *)(lVar12 + 0x18);
      local_88 = 0;
      FUN_14143acfc(lVar12 + 0x10,&local_88,CONCAT71((uint7)(uint3)((uint)uVar21 >> 8),1));
      lVar12 = local_88;
      uVar18 = (ulonglong)uVar3;
      if (0 < (longlong)iVar10) {
        uVar18 = (longlong)iVar10;
      }
      plVar11 = (longlong *)param_1[0x7c];
      if (*plVar11 != 0) {
        FUN_1400020a8();
      }
      *plVar11 = lVar12;
      plVar11[1] = uVar18;
    }
  }
LAB_1436fc7ee:
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1436fd1d1 FUN_1436fd1d1 body=55 status=ok
// SIG undefined FUN_1436fd1d1(void)

void FUN_1436fd1d1(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb08cc0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb08cc0 = FUN_14171c317(FUN_1464037a3,uVar1,L"EFFTSize");
  }
  return;
}



// FUNCTION 1436fd208 FUN_1436fd208 body=55 status=ok
// SIG undefined FUN_1436fd208(void)

void FUN_1436fd208(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb08cd8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb08cd8 = FUN_14171c317(FUN_1464037d2,uVar1,L"EFFTPeakInterpolationMethod");
  }
  return;
}



// FUNCTION 1436fd23f FUN_1436fd23f body=55 status=ok
// SIG undefined FUN_1436fd23f(void)

void FUN_1436fd23f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb08cf0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb08cf0 = FUN_14171c317(FUN_146403801,uVar1,L"EFFTWindowType");
  }
  return;
}



// FUNCTION 1436fd276 FUN_1436fd276 body=55 status=ok
// SIG undefined FUN_1436fd276(void)

void FUN_1436fd276(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb08d08 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb08d08 = FUN_14171c317(FUN_146403830,uVar1,L"EAudioSpectrumType");
  }
  return;
}



// FUNCTION 1436fd2ad FUN_1436fd2ad body=55 status=ok
// SIG undefined FUN_1436fd2ad(void)

void FUN_1436fd2ad(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb08d80 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb08d80 = FUN_14171c317(FUN_146403a67,uVar1,L"EGainParamMode");
  }
  return;
}



// FUNCTION 1436fd2e4 FUN_1436fd2e4 body=69 status=ok
// SIG undefined FUN_1436fd2e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436fd2e4(void)

{
  _DAT_14cb08e70 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436fd326. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb08e78,1);
  return;
}



// FUNCTION 1436fd32a FUN_1436fd32a body=579 status=ok
// SIG undefined FUN_1436fd32a(void)

void FUN_1436fd32a(longlong *param_1)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined2 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ushort uVar9;
  ushort uVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 *local_98;
  undefined8 uStack_90;
  longlong *local_80;
  undefined1 *local_78 [2];
  undefined8 local_68;
  undefined **local_58;
  longlong **local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((*(byte *)(param_1[2] + 0xd5) & 4) != 0) {
    local_a8 = 0;
    uStack_a0 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar3 = FUN_1400439fc(param_1,0,local_78);
  if (cVar3 != '\0') {
    (**(code **)(*param_1 + 0x268))(param_1);
  }
  if (DAT_14cb08e80 != 0) {
    iVar2 = (int)param_1[7];
    if (0 < (longlong)iVar2) {
      iVar12 = -iVar2;
      uVar7 = (longlong)iVar2;
      do {
        lVar8 = *(longlong *)(param_1[6] + -8 + uVar7 * 8);
        if (lVar8 != 0) {
          lVar13 = FUN_1459e9f38();
          if (((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar13 + 0x38)) ||
              (*(longlong *)
                (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar13 + 0x38) * 8) != lVar13 + 0x30)) ||
             (*(longlong **)(lVar8 + 0x90) != param_1)) {
            uVar4 = *(uint *)(param_1 + 7);
            if (uVar7 != uVar4) {
              iVar2 = uVar4 + iVar12;
              if (0 < (int)(uVar4 + iVar12)) {
                iVar2 = 1;
              }
              memmove((void *)(param_1[6] + uVar7 * 8 + -8),
                      (void *)(param_1[6] + (longlong)(int)(uVar4 - iVar2) * 8),(longlong)iVar2 << 3
                     );
              uVar4 = *(uint *)(param_1 + 7);
            }
            *(uint *)(param_1 + 7) = uVar4 - 1;
            FUN_147d4a50e(param_1 + 6);
          }
        }
        iVar12 = iVar12 + 1;
        bVar1 = 1 < uVar7;
        uVar7 = uVar7 - 1;
      } while (bVar1);
    }
  }
  if (DAT_14cb0d2b0 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = *(longlong *)(DAT_14cb0d2b0 + 0xf50);
  }
  local_98 = (undefined2 *)0x0;
  uStack_90 = 0;
  lVar13 = 0;
  FUN_1401031ac(param_1,0,&local_98);
  puVar5 = &DAT_149dfb77a;
  if ((int)uStack_90 != 0) {
    puVar5 = local_98;
  }
  lVar6 = 6;
  while( true ) {
    uVar9 = *(ushort *)((longlong)puVar5 + lVar13);
    uVar7 = (ulonglong)uVar9;
    uVar10 = *(ushort *)((longlong)&DAT_149e3fcfc + lVar13);
    if (uVar9 != uVar10) break;
    if (uVar9 == 0) goto LAB_1436fd50c;
LAB_1436fd49c:
    lVar6 = lVar6 + -1;
    if (lVar6 == 0) goto LAB_1436fd50c;
    lVar13 = lVar13 + 2;
  }
  if ((uVar10 | uVar9) < 0x80) {
    uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
    uVar11 = (ulonglong)uVar10;
    uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
    if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar11]) goto LAB_1436fd49c;
  }
  if ((lVar8 != 0) && (uVar9 != uVar10)) {
    local_50 = &local_80;
    local_68 = 0;
    local_58 = &PTR_LAB_14a7fe970;
    local_78[0] = &LAB_143419982;
    local_80 = param_1;
    FUN_14797347e(lVar8);
  }
LAB_1436fd50c:
  if (local_98 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1436fd56e FUN_1436fd56e body=129 status=ok
// SIG undefined FUN_1436fd56e(void)

void FUN_1436fd56e(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1400020a8();
  }
  FUN_14117d2fe(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  FUN_14117d2fe(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_14117d2fe(param_1 + 8);
  return;
}



// FUNCTION 1436fd5f0 FUN_1436fd5f0 body=727 status=ok
// SIG undefined FUN_1436fd5f0(void)

ulonglong FUN_1436fd5f0(longlong ****param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined ***pppuVar7;
  ulonglong uVar8;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined4 local_b0;
  longlong ***local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  longlong ****local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  undefined1 *local_50;
  undefined4 local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((param_2 == (longlong *)0x0) || (lVar3 = (**(code **)(*param_2 + 0x180))(param_2), lVar3 == 0)
     ) {
    uVar8 = 0;
    goto LAB_1436fd721;
  }
  FUN_14051bf56(lVar3,local_c0);
  cVar2 = (*(code *)(*param_1)[0x57])(param_1,0);
  if (cVar2 == '\0') {
    (*(code *)(*param_1)[0x56])(param_1);
LAB_1436fd715:
    uVar8 = 0;
  }
  else {
    if (local_b8 == (longlong *)0x0) goto LAB_1436fd715;
    if (param_3 != 0) {
      cVar2 = FUN_147d3ea58(param_1,param_3);
      if (cVar2 != '\0') {
        local_98 = 0;
        uStack_90 = 0;
        local_88 = 0xffffffff;
        FUN_147973aee(&local_98,local_c0);
        cVar2 = FUN_147d3ed43(param_3,param_1,&local_98);
        if (cVar2 == '\0') goto LAB_1436fd66f;
      }
      goto LAB_1436fd715;
    }
LAB_1436fd66f:
    local_9c = local_b0;
    plVar4 = (longlong *)FUN_147d4a5aa(param_1 + 0x13);
    lVar3 = *plVar4;
    if (lVar3 == param_3) goto LAB_1436fd715;
    if (lVar3 != 0) {
      uVar5 = FUN_1477c8dc2(lVar3 + 0x40,local_9c);
      local_a8 = (longlong ***)param_1;
      if ((param_1 != (longlong ****)0x0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(param_1);
      }
      local_78[0] = &local_a8;
      FUN_147d4aaf0(uVar5);
    }
    if ((param_3 == 0) || (DAT_14c950c29 == '\0')) {
      *plVar4 = param_3;
      if (param_3 != 0) goto LAB_1436fd79d;
    }
    else {
      FUN_1456cec3c(param_3);
      *plVar4 = param_3;
LAB_1436fd79d:
      uVar5 = FUN_1477c8dc2(param_3 + 0x40,local_9c);
      local_78[0] = param_1;
      if ((param_1 != (longlong ****)0x0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(param_1);
      }
      FUN_147d4ac20(uVar5,local_78);
      plVar1 = local_b8;
      lVar3 = *plVar4;
      if (lVar3 == 0) {
LAB_1436fd809:
        lVar3 = 0;
      }
      else {
        lVar6 = FUN_14105a990();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar6 + 0x38) * 8) != lVar6 + 0x30)) goto LAB_1436fd809;
      }
      (**(code **)(*plVar1 + 0x160))(plVar1,lVar3,0);
    }
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_14aab00e0;
    local_48 = local_9c;
    local_78[0] = (longlong ****)&LAB_1437016e6;
    local_50 = local_c0;
    FUN_147d3ef0c(param_1,local_78);
    if (local_78[0] != (longlong ****)0x0) {
      pppuVar7 = local_68;
      if (local_68 == (undefined ***)0x0) {
        pppuVar7 = &local_58;
      }
      (*(code *)(*pppuVar7)[2])();
    }
    lVar3 = *plVar4;
    if (param_1 == (longlong ****)0x0) {
LAB_1436fd8a3:
      param_1 = (longlong ****)0x0;
    }
    else {
      lVar6 = FUN_14105a990();
      if ((*(int *)(param_1[2] + 7) < *(int *)(lVar6 + 0x38)) ||
         (param_1[2][6][*(int *)(lVar6 + 0x38)] != (longlong *)(lVar6 + 0x30))) goto LAB_1436fd8a3;
    }
    (**(code **)(*local_b8 + 0x160))(local_b8,param_1,lVar3 == 0);
    uVar8 = CONCAT71((int7)((ulonglong)param_1 >> 8),*plVar4 != 0);
  }
  FUN_14051bf10(local_c0);
LAB_1436fd721:
  if ((local_30 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 1436fd8c8 FUN_1436fd8c8 body=404 status=ok
// SIG undefined FUN_1436fd8c8(void)

bool FUN_1436fd8c8(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined ***pppuVar5;
  bool bVar6;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined4 local_90;
  longlong *local_88;
  undefined4 local_7c;
  longlong **local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  undefined1 *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_2 + 0x180))(param_2);
    if (lVar2 != 0) {
      FUN_14051bf56(lVar2,local_a0);
      if (local_98 == (longlong *)0x0) {
        bVar6 = false;
      }
      else {
        bVar6 = false;
        cVar1 = (**(code **)(*param_1 + 0x2b8))(param_1,0);
        if (cVar1 != '\0') {
          local_7c = local_90;
          plVar3 = (longlong *)FUN_147d4a5aa(param_1 + 0x13);
          bVar6 = *plVar3 != 0;
          if (bVar6) {
            uVar4 = FUN_1477c8dc2(*plVar3 + 0x40,local_7c);
            local_88 = param_1;
            if ((param_1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(param_1);
            }
            local_78[0] = &local_88;
            FUN_147d4aaf0(uVar4,local_78);
            *plVar3 = 0;
            local_68 = (undefined ***)0x0;
            local_58 = &PTR_LAB_14aab0100;
            local_78[0] = (longlong **)&LAB_143701746;
            local_50 = local_a0;
            FUN_147d3ef0c(param_1,local_78);
            if (local_78[0] != (longlong **)0x0) {
              pppuVar5 = local_68;
              if (local_68 == (undefined ***)0x0) {
                pppuVar5 = &local_58;
              }
              (*(code *)(*pppuVar5)[2])();
            }
            if (param_1[0x12] != 0) {
              (**(code **)(*local_98 + 0x78))(local_98,param_1,0);
            }
          }
        }
      }
      FUN_14051bf10(local_a0);
      goto LAB_1436fda30;
    }
  }
  bVar6 = false;
LAB_1436fda30:
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436fda5e FUN_1436fda5e body=155 status=ok
// SIG undefined FUN_1436fda5e(void)

void FUN_1436fda5e(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14704403a(&local_28);
  if ((longlong)local_20 != 0) {
    lVar1 = 0;
    do {
      if (*(longlong *)(local_28 + lVar1) == *(longlong *)(param_1 + 0x90)) goto LAB_1436fdac5;
      lVar1 = lVar1 + 8;
    } while ((longlong)local_20 * 8 != lVar1);
  }
  FUN_145cbb262(&local_30);
  *(undefined8 *)(param_1 + 0x90) = local_30;
LAB_1436fdac5:
  FUN_1436fd32a(param_1);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436fdafa FUN_1436fdafa body=163 status=ok
// SIG undefined FUN_1436fdafa(void)

void FUN_1436fdafa(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147045c68(&local_28);
  if ((longlong)local_20 != 0) {
    lVar1 = 0;
    do {
      if (*(longlong *)(local_28 + lVar1) == *(longlong *)(param_1 + 0xf0)) goto LAB_1436fdb69;
      lVar1 = lVar1 + 8;
    } while ((longlong)local_20 * 8 != lVar1);
  }
  FUN_1470459da(&local_30);
  *(undefined8 *)(param_1 + 0xf0) = local_30;
  FUN_147d3f26c(param_1);
LAB_1436fdb69:
  FUN_1436fd32a(param_1);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436fdb9e FUN_1436fdb9e body=163 status=ok
// SIG undefined FUN_1436fdb9e(void)

void FUN_1436fdb9e(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1470458aa(&local_28);
  if ((longlong)local_20 != 0) {
    lVar1 = 0;
    do {
      if (*(longlong *)(local_28 + lVar1) == *(longlong *)(param_1 + 0x90)) goto LAB_1436fdc0d;
      lVar1 = lVar1 + 8;
    } while ((longlong)local_20 * 8 != lVar1);
  }
  FUN_145cdd878(&local_30);
  *(undefined8 *)(param_1 + 0x90) = local_30;
  FUN_147d3f4e2(param_1);
LAB_1436fdc0d:
  FUN_1436fd32a(param_1);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436fdc4e FUN_1436fdc4e body=55 status=ok
// SIG undefined FUN_1436fdc4e(void)

void FUN_1436fdc4e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb08ea0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb08ea0 = FUN_14171c317(FUN_146403f2f,uVar1,L"EAudioSpectrumBandPresetType");
  }
  return;
}



// FUNCTION 1436fdc85 FUN_1436fdc85 body=55 status=ok
// SIG undefined FUN_1436fdc85(void)

void FUN_1436fdc85(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb08ee0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb08ee0 = FUN_14171c317(FUN_146403db7,uVar1,L"EAudioRecordingExportType");
  }
  return;
}



// FUNCTION 1436fdcbc FUN_1436fdcbc body=55 status=ok
// SIG undefined FUN_1436fdcbc(void)

void FUN_1436fdcbc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb08ef8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb08ef8 = FUN_14171c317(FUN_146403fc6,uVar1,L"ESendLevelControlMethod");
  }
  return;
}



// FUNCTION 1436fdcf3 FUN_1436fdcf3 body=55 status=ok
// SIG undefined FUN_1436fdcf3(void)

void FUN_1436fdcf3(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb08f28 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb08f28 = FUN_14171c317(FUN_14640408c,uVar1,L"ESubmixSendStage");
  }
  return;
}



// FUNCTION 1436fdd2a FUN_1436fdd2a body=69 status=ok
// SIG undefined FUN_1436fdd2a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436fdd2a(void)

{
  _DAT_14cb08f50 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436fdd6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb08f58,1);
  return;
}



// FUNCTION 1436fdd6f FUN_1436fdd6f body=69 status=ok
// SIG undefined FUN_1436fdd6f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436fdd6f(void)

{
  _DAT_14cb08f60 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436fddb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb08f68,1);
  return;
}



// FUNCTION 1436fddb4 FUN_1436fddb4 body=69 status=ok
// SIG undefined FUN_1436fddb4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436fddb4(void)

{
  _DAT_14cb08f78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436fddf6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb08f80,1);
  return;
}



// FUNCTION 1436fddf9 FUN_1436fddf9 body=69 status=ok
// SIG undefined FUN_1436fddf9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436fddf9(void)

{
  _DAT_14cb08f90 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436fde3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb08f98,1);
  return;
}



// FUNCTION 1436fde3e FUN_1436fde3e body=69 status=ok
// SIG undefined FUN_1436fde3e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436fde3e(void)

{
  _DAT_14cb08fa8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436fde80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb08fb0,1);
  return;
}



// FUNCTION 1436fde83 FUN_1436fde83 body=69 status=ok
// SIG undefined FUN_1436fde83(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436fde83(void)

{
  _DAT_14cb08fb8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436fdec5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb08fc0,1);
  return;
}



// FUNCTION 1436fdec8 FUN_1436fdec8 body=97 status=ok
// SIG undefined FUN_1436fdec8(void)

void FUN_1436fdec8(longlong param_1)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_18 = 0xffffffff00000000;
  FUN_1434a218e(param_1 + 0x28,&local_38);
  FUN_141289612(&local_38);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436fdf2a FUN_1436fdf2a body=132 status=ok
// SIG undefined FUN_1436fdf2a(void)

longlong FUN_1436fdf2a(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1 + 0xe4) & 2) == 0) {
    FUN_147d3fcd4(&local_20);
    cVar1 = FUN_1401cf654(param_1 + 0x50,local_20);
    if (cVar1 != '\0') {
      lVar3 = FUN_14043030a(param_1 + 0x50,local_20);
      lVar2 = 0;
      if (*(char *)(lVar3 + 0xc) != '\0' || *(int *)(lVar3 + 8) != 0) {
        lVar2 = lVar3;
      }
      goto LAB_1436fdf4a;
    }
  }
  lVar2 = 0;
LAB_1436fdf4a:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 1436fdfb0 FUN_1436fdfb0 body=525 status=ok
// SIG undefined FUN_1436fdfb0(void)

void FUN_1436fdfb0(uint *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined1 local_30;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = 0;
  if ((*(byte *)(param_2 + 5) & 4) != 0) {
    local_24 = 0;
    if (param_2[0xd] != 0) {
      local_24 = (uint)(*(longlong *)(param_2[0xd] + 0x10) != 0);
    }
    local_24 = local_24 + (uint)(param_1[2] != 0xffffffff) * 2;
  }
  puVar1 = (ulonglong *)param_2[1];
  puVar2 = (uint *)*puVar1 + 1;
  if ((uint *)puVar1[1] < puVar2) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    }
    else {
      FUN_14572512c(param_2,&local_24);
    }
  }
  else {
    local_24 = *(uint *)*puVar1;
    *puVar1 = (ulonglong)puVar2;
  }
  if ((*(byte *)(param_2 + 5) & 4) != 0) {
    uVar4 = 0x40;
    if ((local_24 & 4) == 0) {
      uVar4 = 0x400;
    }
    param_1[9] = param_1[9] | uVar4;
  }
  local_30 = 0;
  local_38 = 1;
  FUN_140430222(param_1 + 4,param_2,param_3,0);
  puVar2 = *(uint **)param_2[1];
  if ((uint *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1,4);
    }
    else {
      FUN_14572512c(param_2,param_1);
    }
  }
  else {
    *param_1 = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar2 = param_1 + 1;
  puVar3 = *(uint **)param_2[1];
  if ((uint *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,puVar2,4);
    }
    else {
      FUN_14572512c(param_2,puVar2);
    }
  }
  else {
    *puVar2 = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    uVar4 = *param_1;
    if ((int)uVar4 < 1) {
      *param_1 = 0;
      uVar4 = 0;
    }
    if ((int)*puVar2 < 1) {
      uVar4 = 0;
    }
    else if (*puVar2 <= uVar4) goto LAB_1436fe11b;
    *puVar2 = uVar4;
  }
LAB_1436fe11b:
  if ((local_24 & 2) != 0) {
    param_1 = param_1 + 2;
    puVar2 = *(uint **)param_2[1];
    if ((uint *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1,4);
      }
      else {
        FUN_14572512c(param_2,param_1);
      }
    }
    else {
      *param_1 = *puVar2;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1436fe1be FUN_1436fe1be body=1361 status=ok
// SIG undefined FUN_1436fe1be(void)

void FUN_1436fe1be(longlong *param_1,longlong *param_2,wchar_t *param_3)

{
  uint *puVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  uint uVar4;
  longlong *plVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  undefined2 *puVar12;
  undefined **ppuVar13;
  float fVar14;
  undefined1 auStack_248 [32];
  undefined1 local_228;
  undefined2 local_220;
  byte local_218;
  byte local_210;
  undefined2 *local_208;
  int local_200;
  undefined2 *local_1f8;
  int local_1f0;
  undefined *local_1e8;
  uint local_1dc;
  undefined **local_1d8;
  undefined8 uStack_1d0;
  undefined ***local_1c8;
  undefined ****local_1c0;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_248;
  local_1c0 = &local_1c8;
  local_1d8 = &PTR_FUN_149e37810;
  local_1c8 = &local_1d8;
  uStack_1d0 = param_2;
  switchD_143c3d4dc::caseD_20();
  local_1dc = 0;
  if ((((*(byte *)(param_2 + 5) & 4) != 0) && (param_2[0xd] != 0)) &&
     (*(longlong *)(param_2[0xd] + 0x10) != 0)) {
    local_1dc = 1;
  }
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      param_3 = (wchar_t *)0x0;
      (**(code **)(*param_2 + 0x170))(param_2,&local_1dc,4);
    }
    else {
      FUN_14572512c(param_2,&local_1dc);
    }
  }
  else {
    local_1dc = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  uVar4 = local_1dc;
  if (((local_1dc & 1) == 0) && ((*(byte *)(param_2 + 5) & 1) != 0)) {
    FUN_144750a86(param_1,&local_1d8,0,0);
    ppuVar13 = local_1d8;
    if ((int)uStack_1d0 == 0) {
      ppuVar13 = (undefined **)&DAT_149dfb77a;
    }
    param_3 = L"This platform requires cooked packages, and audio data was not cooked into %s.";
    FUN_140033559(".\\Runtime/Engine/Private/SoundWave.cpp",0x483,
                  L"This platform requires cooked packages, and audio data was not cooked into %s.",
                  ppuVar13);
    if (local_1d8 != (undefined **)0x0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbd8);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  if ((((*(byte *)(param_2 + 5) & 1) != 0) && (0x187 < (int)param_2[8])) &&
     (iVar9 = FUN_1448332aa(param_2,&DAT_149e3cbd8), iVar9 < 0xc)) {
    local_1d8 = (undefined **)0x0;
    (**(code **)(*param_2 + 0x160))(param_2);
  }
  lVar11 = param_2[0xd];
  if ((*(byte *)(param_2 + 5) & 4) == 0) {
    if ((lVar11 == 0) || (*(longlong *)(lVar11 + 0x10) == 0)) {
      bVar6 = FUN_147d35f64(param_1,0);
      goto LAB_1436fe370;
    }
LAB_1436fe361:
    plVar3 = *(longlong **)(lVar11 + 8);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))(plVar3,&local_1d8);
      ppuVar13 = local_1d8;
      if ((int)uStack_1d0 == 0) {
        ppuVar13 = (undefined **)&DAT_149dfb77a;
      }
      bVar6 = FUN_147d35f64(param_1,ppuVar13);
      if (local_1d8 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1436fe370;
    }
  }
  else if (lVar11 != 0) goto LAB_1436fe361;
  bVar6 = 0;
LAB_1436fe370:
  bVar7 = 1;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    lVar11 = param_2[0xd];
    if ((lVar11 == 0) || (*(longlong *)(lVar11 + 0x10) == 0)) {
      bVar7 = 0;
    }
    else {
      bVar7 = (**(code **)(**(longlong **)(lVar11 + 8) + 0xb8))(*(longlong **)(lVar11 + 8),0);
    }
  }
  if ((uVar4 & 1) == 0) {
    (**(code **)(*param_1 + 0x398))(param_1,param_2,0);
  }
  else {
    (**(code **)(*param_1 + 0x398))
              (param_1,param_2,
               CONCAT71((int7)((ulonglong)param_3 >> 8),(char)param_2[5]) & 0xffffffffffffff01);
    if ((bVar6 & bVar7) == 0) {
      lVar11 = param_2[0xd];
      if ((lVar11 == 0) || (*(longlong *)(lVar11 + 0x10) == 0)) {
        local_218 = 1;
        local_228 = 1;
        local_210 = 0;
        local_220 = 0;
        FUN_14042ff5c(param_1[0x7c] + 0x50,param_2,param_1,0);
      }
      else {
        local_1d8 = (undefined **)0x0;
        uStack_1d0 = (longlong *)0x0;
        plVar3 = *(longlong **)(lVar11 + 8);
        cVar8 = (**(code **)(plVar3[1] + 0x168))(plVar3 + 1);
        if (cVar8 != '\0') {
          (**(code **)(plVar3[1] + 0x150))(plVar3 + 1,&local_1e8,param_1);
          (**(code **)(*plVar3 + 8))(plVar3,&local_1f8);
          puVar12 = local_1f8;
          if (local_1f0 == 0) {
            puVar12 = &DAT_149dfb77a;
          }
          lVar11 = FUN_1461a8840(puVar12,0);
          if (local_1f8 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          (**(code **)(*param_1 + 0x3f0))(param_1,local_1e8,lVar11,0);
          plVar5 = uStack_1d0;
          if (lVar11 == 0) {
            lVar11 = (longlong)(int)uStack_1d0;
            uVar10 = (int)uStack_1d0 + 1;
            uStack_1d0 = (longlong *)CONCAT44(uStack_1d0._4_4_,uVar10);
            if (uStack_1d0._4_4_ < uVar10) {
              FUN_1446f84a2(&local_1d8,(ulonglong)plVar5 & 0xffffffff);
            }
            local_1d8[lVar11] = local_1e8;
          }
          else {
            FUN_1400021e4(&local_1e8,&local_208);
            puVar12 = local_208;
            if (local_200 == 0) {
              puVar12 = &DAT_149dfb77a;
            }
            FUN_140056680(&local_1f8,puVar12);
            if (local_208 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            FUN_14706473c(lVar11,&local_1f8);
            puVar12 = local_1f8;
            if (local_1f0 == 0) {
              puVar12 = &DAT_149dfb77a;
            }
            FUN_1446f470e(&local_208,puVar12,1);
            plVar5 = uStack_1d0;
            lVar11 = (longlong)(int)uStack_1d0;
            uVar10 = (int)uStack_1d0 + 1;
            uStack_1d0 = (longlong *)CONCAT44(uStack_1d0._4_4_,uVar10);
            if (uStack_1d0._4_4_ < uVar10) {
              FUN_1446f84a2(&local_1d8,(ulonglong)plVar5 & 0xffffffff);
            }
            local_1d8[lVar11] = (undefined *)local_208;
            if (local_1f8 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
          }
        }
        cVar8 = (**(code **)(*plVar3 + 0xb8))(plVar3,0x12);
        if (cVar8 == '\0') {
          local_210 = 0;
        }
        else {
          local_210 = (**(code **)(*plVar3 + 0xb8))(plVar3,0x13);
        }
        local_218 = local_210 ^ 1;
        local_220 = 0;
        local_228 = 1;
        FUN_14042ff5c(param_1[0x7c] + 0x50,param_2,param_1,&local_1d8);
        if (local_1d8 != (undefined **)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
  FUN_1402ac1b3(param_2,param_1 + 0x78);
  if ((((*(byte *)(param_2 + 5) & 1) != 0) && ((~local_1dc & 3) == 0)) &&
     (*(char *)((longlong)param_1 + 0x34e) != '\x04')) {
    *(byte *)((longlong)param_1 + 0x34e) = (byte)local_1dc >> 2 & 7;
  }
  plVar3 = param_1;
  if (((uVar4 & 1) != 0) && ((bVar6 & bVar7) != 0)) {
    (**(code **)(*param_1 + 0x400))(param_1,param_2);
  }
  for (; plVar3 != (longlong *)0x0; plVar3 = (longlong *)plVar3[4]) {
    if ((*(uint *)(plVar3 + 1) & 0x30) != 0) goto LAB_1436fe518;
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    fVar14 = (float)FUN_147d3f71a(param_1);
    *(int *)(param_1 + 0x6e) = (int)fVar14;
  }
LAB_1436fe518:
  if ((local_48 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1436fe712 FUN_1436fe712 body=156 status=ok
// SIG undefined FUN_1436fe712(void)

longlong FUN_1436fe712(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != 0) {
    lVar1 = param_1;
    do {
      lVar2 = 0;
      if ((*(uint *)(lVar1 + 8) & 0x30) != 0) goto LAB_1436fe791;
      lVar1 = *(longlong *)(lVar1 + 0x20);
    } while (lVar1 != 0);
  }
  FUN_147d3fcd4(&local_20);
  FUN_1401cf654(*(longlong *)(param_1 + 0x3e0) + 0x50,local_20);
  lVar1 = FUN_14043030a(*(longlong *)(param_1 + 0x3e0) + 0x50,local_20);
  lVar2 = 0;
  if (*(char *)(lVar1 + 0xc) != '\0' || *(int *)(lVar1 + 8) != 0) {
    lVar2 = lVar1;
  }
LAB_1436fe791:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436fe7b0 FUN_1436fe7b0 body=242 status=ok
// SIG undefined FUN_1436fe7b0(void)

void FUN_1436fe7b0(longlong param_1,char param_2)

{
  byte bVar1;
  byte bVar2;
  
  if (((DAT_14cb0d2b0 != 0) && (DAT_14c872a72 == '\0')) &&
     (param_2 == '\x01' && *(longlong *)(DAT_14cb0d2b0 + 0xf50) != 0)) {
    FUN_147973608(*(longlong *)(DAT_14cb0d2b0 + 0xf50),param_1,0);
    if (*(int *)(param_1 + 0x374) != 0) {
      *(undefined1 *)(param_1 + 0x181) = 0;
      LOCK();
      *(undefined4 *)(param_1 + 0x330) = 0;
      UNLOCK();
      *(undefined4 *)(param_1 + 0x374) = 0;
    }
  }
  if (*(longlong *)(param_1 + 0x3a8) != 0) {
    FUN_1400020a8();
    *(undefined8 *)(param_1 + 0x3a8) = 0;
  }
  if (*(longlong *)(param_1 + 0x3b8) != 0) {
    FUN_1400020a8();
    *(undefined8 *)(param_1 + 0x3b8) = 0;
  }
  *(undefined8 *)(param_1 + 0x374) = 0;
  *(byte *)(param_1 + 0x34c) = *(byte *)(param_1 + 0x34c) & 0xef;
  *(undefined1 *)(param_1 + 0x181) = 0;
  LOCK();
  *(undefined4 *)(param_1 + 0x330) = 0;
  UNLOCK();
  bVar1 = *(byte *)(param_1 + 0x34d);
  bVar2 = bVar1 & 0xcd | 0x20;
  if ((bVar1 & 0x30) != 0x10) {
    bVar2 = bVar1 & 0xfd;
  }
  *(byte *)(param_1 + 0x34d) = bVar2;
  return;
}



// FUNCTION 1436fe8a2 FUN_1436fe8a2 body=695 status=ok
// SIG undefined FUN_1436fe8a2(void)

void FUN_1436fe8a2(longlong param_1)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  code *local_68;
  undefined8 local_58;
  undefined **local_48;
  ulonglong local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  for (lVar8 = param_1; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x20)) {
    if ((*(uint *)(lVar8 + 8) & 0x30) != 0) goto LAB_1436fe96c;
  }
  cVar2 = FUN_147d35f64(param_1,0);
  if (cVar2 != '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14caced84) && (FUN_144b3d300(&DAT_14caced84), DAT_14caced84 == -1)) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      cVar2 = FUN_14054d46e(&DAT_14c846b20,L"nosound");
      if (cVar2 == '\0') {
        DAT_14caced80 = 0;
      }
      else {
        if (DAT_14c846b14 == '\0') {
          FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                        L"Attempting to get the command line but it hasn\'t been initialized yet.");
        }
        bVar3 = FUN_14054d46e(&DAT_14c846b20,L"enablesound");
        DAT_14caced80 = bVar3 ^ 1;
      }
      _Init_thread_footer(&DAT_14caced84);
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
    }
    if ((((DAT_14caced88 == 0) && ((DAT_14caced80 & 1) == 0)) && (DAT_14cb08f88 == 0)) &&
       ((uVar4 = FUN_1436fb382(param_1), 1 < uVar4 &&
        (*(longlong *)(*(longlong *)(param_1 + 0x3e0) + 0x28) == 0)))) {
      if (param_1 == 0) {
        uVar4 = 0;
        uVar6 = 0;
      }
      else {
        uVar4 = *(uint *)(param_1 + 0xc);
        if ((int)uVar4 < DAT_14c9647dc) {
          lVar8 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
        }
        else {
          lVar8 = 0;
        }
        uVar6 = (ulonglong)*(uint *)(lVar8 + 0x10);
        if (*(uint *)(lVar8 + 0x10) == 0) {
          LOCK();
          iVar1 = DAT_14c964868 + 1;
          UNLOCK();
          uVar7 = DAT_14c964868 + 1;
          bVar9 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar1;
          if (bVar9) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar7);
          }
          LOCK();
          uVar5 = *(uint *)(lVar8 + 0x10);
          bVar9 = uVar5 == 0;
          if (bVar9) {
            *(uint *)(lVar8 + 0x10) = uVar7;
            uVar5 = 0;
          }
          UNLOCK();
          if (bVar9) {
            uVar5 = uVar7;
          }
          uVar6 = (ulonglong)uVar5;
        }
      }
      local_58 = 0;
      local_48 = &PTR_LAB_14aab01a0;
      local_40 = (ulonglong)uVar4 | uVar6 << 0x20;
      local_68 = FUN_143701cd6;
      FUN_147d411a6(param_1);
    }
  }
LAB_1436fe96c:
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436feb5a FUN_1436feb5a body=468 status=ok
// SIG undefined FUN_1436feb5a(void)

void FUN_1436feb5a(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)(param_1 + 0x3e0) + 0x60) == 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x3e0) + 0x60) = *(undefined4 *)(param_2 + 8);
    if ((0 < *(int *)(*(longlong *)(param_1 + 0x3e0) + 0x60)) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x3e0) + 0x68) == 0)) {
      local_38 = 0;
      if ((*(byte *)(param_2 + 0x17) & 0x40) == 0) {
        plVar4 = (longlong *)FUN_14688876a(param_2,param_2);
        local_38 = *plVar4;
        if (local_38 == 0) {
          if (plVar4[2] == 0) {
            local_38 = 0;
          }
          else {
            local_38 = *(longlong *)(plVar4[2] + 8);
          }
        }
      }
      else {
        FUN_14143acfc(param_2,&local_38,0);
      }
      lVar3 = local_38;
      lVar2 = *(longlong *)(param_1 + 0x3e0);
      iVar1 = *(int *)(lVar2 + 0x60);
      if (*(longlong *)(lVar2 + 0x68) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(lVar2 + 0x68) = lVar3;
      *(longlong *)(lVar2 + 0x70) = (longlong)iVar1;
      if (local_38 == 0) {
        FUN_14031515e(param_2);
        if ((*(byte *)(param_2 + 0x17) & 0x40) == 0) {
          plVar4 = (longlong *)FUN_14688876a(param_2,param_2);
          local_38 = *plVar4;
          if (local_38 == 0) {
            if (plVar4[2] == 0) {
              local_38 = 0;
            }
            else {
              local_38 = *(longlong *)(plVar4[2] + 8);
            }
          }
        }
        else {
          FUN_14143acfc(param_2,&local_38,0);
        }
        lVar3 = local_38;
        lVar2 = *(longlong *)(param_1 + 0x3e0);
        iVar1 = *(int *)(lVar2 + 0x60);
        if (*(longlong *)(lVar2 + 0x68) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(lVar2 + 0x68) = lVar3;
        *(longlong *)(lVar2 + 0x70) = (longlong)iVar1;
        if (local_38 == 0) {
          FUN_144750a86(param_1,&local_48,0,0);
          puVar5 = local_48;
          if (local_40 == 0) {
            puVar5 = &DAT_149dfb77a;
          }
          FUN_140033559(".\\Runtime/Engine/Private/SoundWave.cpp",0x92f,
                        L"Soundwave \'%s\' failed to load even after forcing a sync load.",puVar5);
          if (local_48 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1436fed30 FUN_1436fed30 body=114 status=ok
// SIG undefined FUN_1436fed30(void)

undefined8 FUN_1436fed30(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*(int *)(param_1[0x7c] + 0x60) == 0) {
    cVar1 = FUN_147d35f64(param_1,0);
    if (cVar1 == '\0') {
      uVar2 = FUN_1461a8840(0,0);
      lVar3 = (**(code **)(*param_1 + 0x3f0))(param_1,param_2,uVar2,0);
      if (lVar3 != 0) {
        (**(code **)(*param_1 + 0x3c8))(param_1,lVar3);
      }
    }
  }
  return CONCAT71((int7)((ulonglong)param_1[0x7c] >> 8),0 < *(int *)(param_1[0x7c] + 0x60));
}



// FUNCTION 1436feda2 FUN_1436feda2 body=150 status=ok
// SIG undefined FUN_1436feda2(void)

ulonglong FUN_1436feda2(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x3a0);
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x10) == 0) {
      if (*(longlong *)(lVar1 + 0x20) != 0) {
        (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x20))
                  (*(longlong **)(lVar1 + 0x18),0xffffffff,0);
        *(undefined8 *)(lVar1 + 0x20) = 0;
      }
    }
    else {
      if (param_2 == '\0') {
        uVar3 = 0;
        goto LAB_1436fee2e;
      }
      FUN_140187fa0(*(undefined8 *)(param_1 + 0x3a0),1,0);
    }
    plVar2 = *(longlong **)(param_1 + 0x3a0);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2,1);
    }
    *(undefined8 *)(param_1 + 0x3a0) = 0;
    LOCK();
    *(undefined4 *)(param_1 + 0x330) = 2;
    UNLOCK();
  }
LAB_1436fee2e:
  return uVar3 & 0xffffffff;
}



// FUNCTION 1436fee38 FUN_1436fee38 body=319 status=ok
// SIG undefined FUN_1436fee38(void)

undefined8 FUN_1436fee38(longlong param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  char *pcVar8;
  char *pcVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined8 local_68;
  undefined **local_58;
  longlong local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  pcVar8 = (char *)(param_1 + 0x34f);
  LOCK();
  bVar11 = *(char *)(param_1 + 0x34f) == '\0';
  if (bVar11) {
    *(char *)(param_1 + 0x34f) = '\x01';
  }
  UNLOCK();
  if (!bVar11) {
    FUN_1447d2058();
  }
  iVar3 = *(int *)(param_1 + 0x340);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x338);
    lVar10 = 0;
    do {
      plVar5 = *(longlong **)(lVar4 + lVar10);
      (**(code **)(*plVar5 + 0x10))(plVar5,param_1);
      lVar10 = lVar10 + 8;
    } while ((longlong)iVar3 * 8 != lVar10);
  }
  LOCK();
  cVar1 = *pcVar8;
  if (cVar1 == '\x01') {
    *pcVar8 = '\0';
  }
  UNLOCK();
  if (cVar1 != '\x01') {
    FUN_14008cdb0();
  }
  LOCK();
  cVar1 = *pcVar8;
  if (cVar1 == '\0') {
    *pcVar8 = '\x01';
  }
  UNLOCK();
  if (cVar1 != '\0') {
    FUN_1447d2058();
  }
  iVar3 = *(int *)(param_1 + 0x340);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x338);
    lVar10 = 0;
    do {
      plVar5 = *(longlong **)(lVar4 + lVar10);
      (**(code **)(*plVar5 + 0x10))(plVar5,param_1);
      lVar10 = lVar10 + 8;
    } while ((longlong)iVar3 * 8 != lVar10);
  }
  LOCK();
  cVar1 = *pcVar8;
  if (cVar1 == '\x01') {
    *pcVar8 = '\0';
  }
  UNLOCK();
  pcVar9 = (char *)0x0;
  if (cVar1 != '\x01') {
    FUN_14008cdb0(pcVar8);
    pcVar9 = pcVar8;
  }
  bVar2 = *(byte *)(param_1 + 0x34d);
  uVar6 = CONCAT71((int7)((ulonglong)pcVar9 >> 8),bVar2) & 0xffffffff;
  if ((bVar2 & 0x30) == 0) {
    *(byte *)(param_1 + 0x34d) = bVar2 | 0x10;
    local_68 = 0;
    local_58 = &PTR_LAB_14aab0120;
    local_78 = &LAB_1437017aa;
    local_50 = param_1;
    uVar7 = FUN_1415826cc();
    uVar6 = CONCAT71((int7)((ulonglong)uVar7 >> 8),*(undefined1 *)(param_1 + 0x34d));
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((uVar6 & 0xffffffffffffff30) >> 8),
                  (char)(uVar6 & 0xffffffffffffff30) == ' ');
}



// FUNCTION 1436fef78 FUN_1436fef78 body=3548 status=ok
// SIG undefined FUN_1436fef78(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436fef78(longlong *param_1,void *param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  float *pfVar10;
  longlong *plVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  byte bVar17;
  longlong lVar18;
  int iVar19;
  bool bVar20;
  float fVar21;
  double dVar22;
  undefined1 auStack_c8 [40];
  void *local_a0;
  longlong local_98;
  float *local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  void *local_70;
  int local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar8 = (longlong *)FUN_1478b6144(param_4);
  if (plVar8 == (longlong *)0x0) {
    if ((*(byte *)(param_4 + 0x199) & 1) == 0) {
      FUN_1478b64b0(param_4,param_5);
    }
    plVar9 = (longlong *)FUN_147d408b0(param_1,param_4,param_3);
  }
  else {
    plVar9 = plVar8;
    if ((((~*(uint *)((longlong)plVar8 + 0xcc) & 0xc0) == 0) &&
        ((*(byte *)((longlong)param_1 + 0x34c) & 1) != 0)) &&
       (*(char *)((longlong)param_1 + 0x39) == '\0')) goto LAB_1436ff02c;
  }
  cVar4 = (**(code **)(*param_1 + 0x308))(param_1);
  if ((cVar4 == '\0') || ((*(byte *)(param_5 + 0x23c) & 2) != 0)) {
    *(byte *)((longlong)plVar9 + 0xcc) = *(byte *)((longlong)plVar9 + 0xcc) & 0xbf;
    (**(code **)(**(longlong **)(param_4 + 0x18) + 0x308))();
  }
  uVar6 = *(uint *)((longlong)plVar9 + 0xcc);
  if ((uVar6 & 0x40) != 0) goto LAB_1436ff02c;
  *(float *)(plVar9 + 0x12) = *(float *)(param_5 + 0x98) * *(float *)((longlong)param_1 + 0x364);
  *(undefined4 *)((longlong)plVar9 + 0x9c) = *(undefined4 *)(param_5 + 0xa4);
  *(undefined4 *)((longlong)plVar9 + 0x94) = *(undefined4 *)(param_5 + 0x9c);
  *(undefined4 *)(plVar9 + 0x13) = *(undefined4 *)(param_5 + 0xa0);
  *(float *)(plVar9 + 0x23) = *(float *)(param_5 + 0xb8) * *(float *)(param_1 + 0x6d);
  uVar13 = (*(uint *)(param_5 + 0x23c) & 4) << 8;
  *(uint *)((longlong)plVar9 + 0xcc) = uVar6 & 0xfffffbbf | uVar13;
  uVar14 = (*(uint *)(param_5 + 0x23c) & 8) << 8;
  *(uint *)((longlong)plVar9 + 0xcc) = uVar6 & 0xfffff3bf | uVar13 | uVar14;
  uVar15 = (*(uint *)(param_5 + 0x23c) & 0x10) << 8;
  *(uint *)((longlong)plVar9 + 0xcc) = uVar6 & 0xffffe3bf | uVar13 | uVar14 | uVar15;
  *(undefined4 *)((longlong)plVar9 + 0xfc) = *(undefined4 *)(param_5 + 0x220);
  *(undefined4 *)(plVar9 + 0x20) = *(undefined4 *)(param_5 + 0x224);
  *(undefined4 *)(plVar9 + 0x21) = *(undefined4 *)(param_5 + 0x230);
  *(undefined4 *)(plVar9 + 0x22) = *(undefined4 *)(param_5 + 0x228);
  *(undefined4 *)((longlong)plVar9 + 0x114) = *(undefined4 *)(param_5 + 0x22c);
  *(undefined4 *)((longlong)plVar9 + 0x10c) = *(undefined4 *)(param_5 + 0x234);
  *(uint *)((longlong)plVar9 + 0xcc) =
       (uVar6 & 0xffffe3af | uVar13 | uVar14 | uVar15) + (*(byte *)(param_4 + 0x199) & 2) * 8;
  *(undefined4 *)(plVar9 + 0x19) = *(undefined4 *)(param_5 + 0xbc);
  *(undefined1 *)(plVar9 + 0x31) = *(undefined1 *)(param_4 + 0x19d);
  *(undefined4 *)(plVar9 + 0x27) = *(undefined4 *)(param_5 + 0xc0);
  *(undefined4 *)((longlong)plVar9 + 0x13c) = *(undefined4 *)(param_5 + 0xc4);
  *(undefined1 *)(plVar9 + 0x28) = *(undefined1 *)(param_5 + 200);
  *(undefined4 *)((longlong)plVar9 + 0x144) = *(undefined4 *)(param_5 + 0x1e0);
  *(undefined4 *)(plVar9 + 0x29) = *(undefined4 *)(param_5 + 0xcc);
  *(undefined4 *)((longlong)plVar9 + 0x14c) = *(undefined4 *)(param_5 + 0xd0);
  *(undefined4 *)(plVar9 + 0x2a) = *(undefined4 *)(param_5 + 0xd4);
  *(undefined4 *)((longlong)plVar9 + 0x154) = *(undefined4 *)(param_5 + 0xd8);
  lVar12 = *(longlong *)(param_5 + 0x218);
  if (lVar12 != 0) {
    local_90 = (float *)CONCAT44(local_90._4_4_,*(undefined4 *)((longlong)param_1 + 0x36c));
    iVar7 = *(int *)(lVar12 + 0x30);
    iVar5 = 2;
    if ((longlong)iVar7 != 0) {
      lVar12 = *(longlong *)(lVar12 + 0x28);
      iVar19 = 9;
      lVar18 = 0;
      local_a0 = param_2;
      local_98 = param_3;
      do {
        plVar11 = *(longlong **)(lVar12 + lVar18);
        if ((plVar11 != (longlong *)0x0) &&
           (iVar5 = (**(code **)(*plVar11 + 0x2e8))(), iVar5 < iVar19)) {
          iVar19 = iVar5;
        }
        lVar18 = lVar18 + 0x10;
      } while ((longlong)iVar7 * 0x10 != lVar18);
      iVar5 = 2;
      if (iVar19 < 9) {
        iVar5 = iVar19;
      }
      lVar12 = *(longlong *)(param_5 + 0x218);
      param_3 = local_98;
      param_2 = local_a0;
    }
    lVar18 = 0;
    if ((int)local_90 <= iVar5) {
      lVar18 = lVar12;
    }
    plVar9[9] = lVar18;
  }
  lVar12 = *(longlong *)(param_5 + 0x10);
  if ((lVar12 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar12);
  }
  plVar9[1] = lVar12;
  if ((*(longlong *)(param_5 + 0x10) == 0) ||
     (pfVar10 = (float *)FUN_1479633e0(param_2), pfVar10 == (float *)0x0)) {
    *(undefined8 *)((longlong)plVar9 + 0xb4) = 0;
    *(undefined8 *)((longlong)plVar9 + 0xbc) = 0;
    uVar13 = (*(byte *)(param_4 + 0x199) & 0x80) << 6;
    uVar6 = *(uint *)((longlong)plVar9 + 0xcc);
    *(uint *)((longlong)plVar9 + 0xcc) = uVar6 & 0xffffdfff | uVar13;
    uVar14 = (*(byte *)(param_4 + 0x19a) & 1) << 0xe;
    *(uint *)((longlong)plVar9 + 0xcc) = uVar6 & 0xffff9fff | uVar13 | uVar14;
    uVar15 = (*(byte *)(param_4 + 0x19a) & 2) << 0xe;
    *(uint *)((longlong)plVar9 + 0xcc) = uVar6 & 0xffff1fff | uVar13 | uVar14 | uVar15;
    uVar6 = uVar6 & 0xfffe1fff | uVar13 | uVar14 | uVar15 | (*(byte *)(param_4 + 0x19a) & 4) << 0xe;
    *(uint *)((longlong)plVar9 + 0xcc) = uVar6;
    bVar17 = *(byte *)(param_4 + 0x199) >> 6;
  }
  else {
    *(float *)((longlong)plVar9 + 0x9c) = *(float *)((longlong)plVar9 + 0x9c) * *pfVar10;
    *(float *)(plVar9 + 0x23) = *(float *)(plVar9 + 0x23) * pfVar10[1];
    *(float *)((longlong)plVar9 + 0x104) = pfVar10[2];
    *(float *)((longlong)plVar9 + 0xb4) = pfVar10[5];
    *(float *)(plVar9 + 0x17) = pfVar10[6] * *(float *)(param_5 + 0xa4);
    *(float *)((longlong)plVar9 + 0xbc) = pfVar10[7] * *(float *)(param_5 + 0xa4);
    *(float *)(plVar9 + 0x18) = pfVar10[4];
    uVar6 = 0x2000;
    if (-1 < *(char *)(param_4 + 0x199)) {
      uVar6 = (uint)(*(byte *)(pfVar10 + 8) & 4) << 0xb;
    }
    uVar13 = *(uint *)((longlong)plVar9 + 0xcc);
    *(uint *)((longlong)plVar9 + 0xcc) = uVar13 & 0xffffdfff | uVar6;
    if (((*(byte *)(param_4 + 0x19a) & 1) != 0) || (uVar14 = 0, ((uint)pfVar10[8] & 8) != 0)) {
      uVar14 = 0x4000;
    }
    *(uint *)((longlong)plVar9 + 0xcc) = uVar13 & 0xffff9fff | uVar6 | uVar14;
    if (((*(byte *)(param_4 + 0x19a) & 4) != 0) || (uVar15 = 0, ((uint)pfVar10[8] & 0x10) != 0)) {
      uVar15 = 0x10000;
    }
    *(uint *)((longlong)plVar9 + 0xcc) = uVar13 & 0xfffe9fff | uVar6 | uVar14 | uVar15;
    if (((*(byte *)(param_4 + 0x19a) & 2) != 0) || (uVar16 = 0, ((uint)pfVar10[8] & 0x40) != 0)) {
      uVar16 = 0x8000;
    }
    *(uint *)((longlong)plVar9 + 0xcc) = uVar13 & 0xfffe1fff | uVar6 | uVar14 | uVar15 | uVar16;
    *(uint *)(plVar9 + 0x1f) = (uint)*(byte *)(pfVar10 + 0x62);
    if (((uint)pfVar10[8] & 1) == 0) {
      if (*(longlong *)(pfVar10 + 100) != 0) {
        plVar9[2] = *(longlong *)(pfVar10 + 100);
      }
    }
    else {
      local_90 = pfVar10;
      plVar11 = (longlong *)FUN_145b54fcc();
      lVar12 = plVar11[0x22];
      if (lVar12 == 0) {
        (**(code **)(*plVar11 + 1000))();
        lVar12 = plVar11[0x22];
      }
      local_88 = 0;
      local_80 = *(undefined4 *)(lVar12 + 0x138);
      uStack_7c = *(undefined4 *)(lVar12 + 0x13c);
      uStack_78 = *(undefined4 *)(lVar12 + 0x140);
      uStack_74 = *(undefined4 *)(lVar12 + 0x144);
      local_70 = (void *)0x0;
      local_68 = *(int *)(lVar12 + 0x150);
      lVar18 = (longlong)local_68;
      if (lVar18 == 0) {
        local_64 = 0;
LAB_1436ff58a:
        lVar12 = 0;
      }
      else {
        local_a0 = *(void **)(lVar12 + 0x148);
        FUN_1446dd670(&local_70,local_68,0);
        memcpy(local_70,local_a0,lVar18 * 2);
        if (local_88._4_4_ == 0) goto LAB_1436ff58a;
        lVar12 = 0;
        if ((-1 < (int)(uint)local_88) && ((int)(uint)local_88 < DAT_14c9647dc)) {
          plVar11 = (longlong *)
                    ((ulonglong)(((uint)local_88 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_88 >> 0x10) * 8));
          if ((plVar11 == (longlong *)0x0) ||
             (((int)plVar11[2] != local_88._4_4_ || ((*(uint *)(plVar11 + 1) & 0x10200000) != 0))))
          goto LAB_1436ff58a;
          lVar12 = *plVar11;
        }
      }
      if ((lVar12 == 0) && (CONCAT44(uStack_7c,local_80) != 0)) {
        lVar12 = FUN_140007850(&local_80);
        cVar4 = (*(code *)PTR_FUN_14c758760)();
        local_98 = lVar12;
        if ((lVar12 == 0) || (cVar4 == '\0')) {
          if (lVar12 != 0) {
            uVar6 = *(uint *)(lVar12 + 0xc);
            local_88 = CONCAT44(local_88._4_4_,uVar6);
            if (DAT_14c9647dc <= (int)uVar6) goto LAB_1436ff6bb;
            lVar12 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
            goto LAB_1436ff6bd;
          }
          local_88 = 0;
        }
        else {
          uVar6 = *(uint *)(lVar12 + 0xc);
          if ((int)uVar6 < DAT_14c9647dc) {
            if ((*(uint *)(*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8) + 8 +
                          (ulonglong)(uVar6 & 0xffff) * 0x18) & 0x8400000) == 0) {
              local_88 = CONCAT44(local_88._4_4_,uVar6);
              lVar12 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
LAB_1436ff6bd:
              iVar7 = *(int *)(lVar12 + 0x10);
              if (*(int *)(lVar12 + 0x10) == 0) {
                LOCK();
                iVar7 = DAT_14c964868 + 1;
                UNLOCK();
                iVar5 = DAT_14c964868 + 1;
                bVar20 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar7;
                local_a0 = param_2;
                if (bVar20) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar5);
                }
                LOCK();
                iVar7 = *(int *)(lVar12 + 0x10);
                bVar20 = iVar7 == 0;
                if (bVar20) {
                  *(int *)(lVar12 + 0x10) = iVar5;
                  iVar7 = 0;
                }
                UNLOCK();
                param_2 = local_a0;
                if (bVar20) {
                  iVar7 = iVar5;
                }
              }
              local_88 = CONCAT44(iVar7,(uint)local_88);
            }
          }
          else if ((_DAT_00000008 & 0x8400000) == 0) {
            local_88 = CONCAT44(local_88._4_4_,uVar6);
LAB_1436ff6bb:
            lVar12 = 0;
            goto LAB_1436ff6bd;
          }
          lVar12 = local_98;
          if ((*(uint *)(local_98 + 8) >> 0x1e & 1) == 0) goto LAB_1436ff6da;
        }
LAB_1436ff705:
        lVar12 = 0;
      }
      else {
        if (lVar12 == 0) goto LAB_1436ff705;
LAB_1436ff6da:
        lVar18 = FUN_14105a990();
        if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x38) < *(int *)(lVar18 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar18 + 0x38) * 8) != lVar18 + 0x30)) goto LAB_1436ff705;
      }
      plVar9[2] = lVar12;
      pfVar10 = local_90;
      if (local_70 != (void *)0x0) {
        FUN_1400020a8();
        pfVar10 = local_90;
      }
    }
    if (((uint)pfVar10[8] & 0x20) != 0) {
      *(float *)((longlong)plVar9 + 0x9c) =
           *(float *)((longlong)plVar9 + 0x9c) * *(float *)(param_5 + 0xb0);
      *(float *)(plVar9 + 0x17) = *(float *)(param_5 + 0xb0) * *(float *)(plVar9 + 0x17);
      *(float *)((longlong)plVar9 + 0xbc) =
           *(float *)(param_5 + 0xb0) * *(float *)((longlong)plVar9 + 0xbc);
    }
    bVar17 = 1;
    if ((*(byte *)(param_4 + 0x199) & 0x40) == 0) {
      bVar17 = (*(byte *)(pfVar10 + 8) & 2) >> 1;
    }
    uVar6 = *(uint *)((longlong)plVar9 + 0xcc);
  }
  *(uint *)((longlong)plVar9 + 0xcc) =
       uVar6 & 0xfff7ffff | (*(byte *)((longlong)param_1 + 0x34d) & 1) << 0x13;
  lVar12 = *(longlong *)(param_5 + 0xe0);
  if ((lVar12 != 0) || (lVar12 = (**(code **)(*param_1 + 800))(param_1), lVar12 != 0)) {
    plVar9[2] = lVar12;
  }
  if ((bVar17 & 1) == 0) {
    fVar21 = *(float *)(param_5 + 0xb4);
    if (100.0 <= fVar21) {
      fVar21 = 100.0;
    }
    if (fVar21 <= 0.0) {
      fVar21 = 0.0;
    }
  }
  else {
    fVar21 = 8.5070587e+37;
  }
  *(float *)(plVar9 + 0x16) = fVar21;
  uVar1 = *(undefined4 *)(param_5 + 0x44);
  uVar2 = *(undefined4 *)(param_5 + 0x48);
  uVar3 = *(undefined4 *)(param_5 + 0x4c);
  lVar12 = *(longlong *)(param_5 + 0x50);
  *(undefined4 *)(plVar9 + 0x24) = *(undefined4 *)(param_5 + 0x40);
  *(undefined4 *)((longlong)plVar9 + 0x124) = uVar1;
  *(undefined4 *)(plVar9 + 0x25) = uVar2;
  *(undefined4 *)((longlong)plVar9 + 300) = uVar3;
  plVar9[0x26] = lVar12;
  *(uint *)((longlong)plVar9 + 0xcc) = *(uint *)((longlong)plVar9 + 0xcc) & 0xffffff5f | 0x20;
  if ((param_1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_1);
  }
  *plVar9 = (longlong)param_1;
  FUN_147d44e8a(plVar9 + 10,param_5);
  bVar17 = (**(code **)(*param_1 + 0x308))(param_1);
  *(uint *)((longlong)plVar9 + 0xc4) =
       (uint)(byte)((*(byte *)(param_5 + 0x23c) & 2) >> 1 | bVar17 ^ 1) * 2;
  uVar6 = *(uint *)((longlong)plVar9 + 0xcc);
  uVar13 = (*(uint *)(param_5 + 0x23c) & 0x20) << 0xc;
  *(uint *)((longlong)plVar9 + 0xcc) = uVar6 & 0xfffdffff | uVar13;
  uVar14 = *(byte *)(param_5 + 0x23c) & 1;
  *(uint *)((longlong)plVar9 + 0xcc) = uVar6 & 0xfffdfdff | uVar13 | uVar14 << 9;
  if ((DAT_14c7612fc != 0) && ((char)uVar14 != '\0')) {
    *(undefined4 *)(plVar9 + 0x1a) = *(undefined4 *)(param_5 + 0x1e4);
    bVar17 = FUN_14795fb04(param_2);
    iVar7 = *(int *)(param_5 + 0x1e4);
    if ((iVar7 == 0 & bVar17) == 1) {
      *(undefined4 *)(plVar9 + 0x1a) = 1;
LAB_1436ff91c:
      *(uint *)((longlong)plVar9 + 0xcc) =
           *(uint *)((longlong)plVar9 + 0xcc) & 0xfffffeff | (uint)*(byte *)(param_5 + 0x1e8) << 8;
    }
    else {
      *(int *)(plVar9 + 0x1a) = iVar7;
      if (iVar7 == 1) goto LAB_1436ff91c;
    }
    if ((*(char *)(param_5 + 0x23c) < '\0') && (*(int *)((longlong)param_1 + 0x36c) == 2)) {
      *(float *)(plVar9 + 0x12) =
           *(float *)(plVar9 + 0x12) * *(float *)((longlong)plVar9 + 0x9c) * 0.5;
    }
  }
  if (((*(uint *)((longlong)plVar9 + 0xcc) & 0xc000) == 0x8000) &&
     ((DAT_14c761b60 != 0 || (*(int *)(*plVar9 + 0x36c) < 3)))) {
    if (*(char *)(param_5 + 0x128) == '\x02') {
      fVar21 = *(float *)(param_5 + 0x150);
      if (1.0 <= fVar21) {
        fVar21 = 1.0;
      }
      if (fVar21 <= 0.0) {
        fVar21 = 0.0;
      }
    }
    else {
      dVar22 = *(double *)(param_5 + 0x148) - *(double *)(param_5 + 0x140);
      if (dVar22 <= 1.0) {
        dVar22 = 1.0;
      }
      dVar22 = ((double)*(float *)((longlong)plVar9 + 0x14c) - *(double *)(param_5 + 0x140)) /
               (double)(float)dVar22;
      if (1.0 <= dVar22) {
        dVar22 = 1.0;
      }
      if (dVar22 <= 0.0) {
        dVar22 = 0.0;
      }
      if (*(char *)(param_5 + 0x128) == '\0') {
        dVar22 = (*(double *)(param_5 + 0x138) - *(double *)(param_5 + 0x130)) *
                 (double)(float)dVar22 + *(double *)(param_5 + 0x130);
        if (1.0 <= dVar22) {
          dVar22 = 1.0;
        }
        if (dVar22 <= 0.0) {
          dVar22 = 0.0;
        }
        fVar21 = (float)dVar22;
      }
      else {
        lVar12 = *(longlong *)(param_5 + 0x1d8);
        lVar18 = lVar12 + 0x30;
        if (lVar12 == 0) {
          lVar18 = param_5 + 0x158;
        }
        fVar21 = (float)FUN_1448c9f94(lVar18,lVar12,0);
        if (1.0 <= fVar21) {
          fVar21 = 1.0;
        }
        if (fVar21 <= 0.0) {
          fVar21 = 0.0;
        }
      }
    }
    *(float *)((longlong)plVar9 + 0x15c) = fVar21;
  }
  else {
    *(uint *)((longlong)plVar9 + 0xcc) = *(uint *)((longlong)plVar9 + 0xcc) & 0xffff7fff;
  }
  FUN_1477e7f90(plVar9 + 0x2d,param_5 + 0xf8);
  FUN_1477daebe(plVar9 + 3,param_5 + 0xe8);
  *(undefined4 *)(plVar9 + 0x15) = *(undefined4 *)(param_5 + 0xa8);
  *(undefined4 *)((longlong)plVar9 + 0xac) = *(undefined4 *)(param_5 + 0xac);
  if ((*(byte *)(plVar9[0xc] + 0x19a) & 8) == 0) {
    uVar13 = *(uint *)(param_5 + 0x238) & 1;
    uVar6 = *(uint *)((longlong)plVar9 + 0xcc);
    *(uint *)((longlong)plVar9 + 0xcc) = uVar6 & 0xfffffffe | uVar13;
    if ((uVar6 >> 8 & 1) == 0 || (int)plVar9[0x1a] != 1) {
      if (*(char *)(param_4 + 0x19b) < '\0') {
        uVar14 = *(uint *)(param_4 + 0x19c) >> 1;
      }
      else {
        uVar14 = *(uint *)(param_5 + 0x238);
      }
      uVar13 = uVar6 & 0xfffffffc | uVar13 | uVar14 & 2;
    }
    else {
      uVar13 = uVar6 & 0xfffffffc | uVar13;
    }
    *(uint *)((longlong)plVar9 + 0xcc) = uVar13;
    uVar14 = *(uint *)(param_5 + 0x238) & 4;
    uVar6 = uVar13 & 0xfffffffb;
    *(uint *)((longlong)plVar9 + 0xcc) = uVar14 | uVar6;
    if ((*(byte *)(param_4 + 0x19b) & 0x40) != 0) {
      uVar6 = *(uint *)(param_4 + 0x19c) >> 1 & 1;
      *(uint *)((longlong)plVar9 + 0xcc) = uVar14 | uVar13 & 0xfffffffa | uVar6;
      uVar6 = uVar13 & 0xfffffffa | uVar6;
    }
    if ((*(byte *)(param_4 + 0x19c) & 1) != 0) {
      uVar13 = *(byte *)(param_4 + 0x19c) >> 1 & 4;
      goto LAB_1436ffbff;
    }
  }
  else {
    cVar4 = (**(code **)(*param_1 + 0x380))(param_1);
    if (cVar4 == '\0') {
      uVar6 = *(uint *)((longlong)plVar9 + 0xcc) | 2;
    }
    else {
      uVar13 = *(uint *)(param_5 + 0x238) & 4;
      uVar6 = *(uint *)((longlong)plVar9 + 0xcc);
      *(uint *)((longlong)plVar9 + 0xcc) = uVar6 & 0xfffffffb | uVar13;
      uVar6 = uVar6 & 0xfffffff9 | uVar13 | *(uint *)(param_5 + 0x238) & 2;
    }
    *(uint *)((longlong)plVar9 + 0xcc) = uVar6;
    uVar13 = *(uint *)(param_5 + 0x238) & 1;
    uVar6 = uVar6 & 0xfffffffe;
LAB_1436ffbff:
    *(uint *)((longlong)plVar9 + 0xcc) = uVar6 | uVar13;
  }
  FUN_1477daf1e(plVar9 + 5,param_5 + 0x108);
  FUN_1477daf1e(plVar9 + 7,param_5 + 0x118);
  plVar9[0x1b] = *(longlong *)(param_5 + 0x1f0);
  plVar9[0x1c] = *(longlong *)(param_5 + 0x1f8);
  plVar9[0x1d] = *(longlong *)(param_5 + 0x200);
  plVar9[0x1e] = *(longlong *)(param_5 + 0x208);
  *(uint *)((longlong)plVar9 + 0xcc) =
       *(uint *)((longlong)plVar9 + 0xcc) & 0xfffffff7 | *(uint *)(param_5 + 0x238) & 8;
  *(byte *)((longlong)plVar9 + 0x81) = *(byte *)(param_5 + 0x238) >> 4 & 1;
  plVar9[0x11] = *(longlong *)(param_5 + 0x210);
  cVar4 = FUN_14795c2f4(plVar9);
  if (cVar4 == '\0') {
    if (*(int *)((longlong)plVar9 + 0xc4) != 2) {
      if (plVar8 == (longlong *)0x0) {
        FUN_1478b5e76(param_4,param_3);
      }
      goto LAB_1436ff02c;
    }
  }
  else {
    iVar7 = (int)param_6[1];
    *(uint *)(param_6 + 1) = iVar7 + 1U;
    if (*(uint *)((longlong)param_6 + 0xc) < iVar7 + 1U) {
      FUN_1478c4d20(param_6,iVar7);
    }
    *(longlong **)(*param_6 + (longlong)iVar7 * 8) = plVar9;
  }
  *(byte *)(param_4 + 0x198) = *(byte *)(param_4 + 0x198) & 0xef;
LAB_1436ff02c:
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1436ffd56 FUN_1436ffd56 body=237 status=ok
// SIG undefined FUN_1436ffd56(void)

longlong * FUN_1436ffd56(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (lVar4 != 0) goto LAB_1436ffe0c;
  FUN_1436fb532(param_1 + -0x168,&local_38);
  plVar1 = local_30;
  *(undefined8 *)(param_1 + 0x20) = local_38;
  local_38 = 0;
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (local_30 == plVar3) {
LAB_1436ffde6:
    plVar3 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
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
  else {
    local_30 = (longlong *)0x0;
    *(longlong **)(param_1 + 0x28) = plVar1;
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
      goto LAB_1436ffde6;
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x20);
LAB_1436ffe0c:
  *param_2 = lVar4;
  lVar4 = *(longlong *)(param_1 + 0x28);
  param_2[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1436ffe44 FUN_1436ffe44 body=202 status=ok
// SIG undefined FUN_1436ffe44(void)

undefined8 * FUN_1436ffe44(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_147d4b54e(&local_28);
  param_1[1] = local_28;
  *param_1 = &PTR_FUN_14aaad080;
  param_1[2] = param_2[0x7c];
  lVar1 = param_2[0x7d];
  param_1[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  FUN_147d35f64(param_2,0);
  (**(code **)(*param_2 + 0x3c0))(param_2,*(undefined8 *)(param_1[2] + 0x8c));
  uVar2 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
          -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  *(uint *)(param_1 + 4) = uVar2 >> 0x10 ^ uVar2;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436fff0f FUN_1436fff0f body=69 status=ok
// SIG undefined FUN_1436fff0f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436fff0f(void)

{
  _DAT_14cb09028 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436fff51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb09030,1);
  return;
}



// FUNCTION 1436fff54 FUN_1436fff54 body=69 status=ok
// SIG undefined FUN_1436fff54(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436fff54(void)

{
  _DAT_14cb09050 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436fff96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb09058,1);
  return;
}



// FUNCTION 1436fff99 FUN_1436fff99 body=69 status=ok
// SIG undefined FUN_1436fff99(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436fff99(void)

{
  _DAT_14cb09068 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436fffdb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb09070,1);
  return;
}



// FUNCTION 1436fffde FUN_1436fffde body=69 status=ok
// SIG undefined FUN_1436fffde(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436fffde(void)

{
  _DAT_14cb09078 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143700020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb09080,1);
  return;
}



// FUNCTION 143700024 FUN_143700024 body=177 status=ok
// SIG undefined FUN_143700024(void)

int * FUN_143700024(longlong *param_1,int *param_2,uint param_3,int param_4,uint param_5)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  lVar4 = *param_1;
  uVar2 = *(ushort *)(param_1[2] + (longlong)(int)param_3 * 2);
  iVar8 = (uint)uVar2 * param_4;
  iVar3 = *(int *)(lVar4 + (longlong)(int)param_3 * 4);
  *param_2 = iVar3;
  iVar6 = *(int *)(lVar4 + (longlong)(int)(param_3 + 1) * 4) - iVar3;
  iVar10 = 0x2dc;
  iVar9 = 0;
  if (param_4 != 0) {
    iVar9 = 0x2dc;
  }
  if (param_5 == 0) {
    iVar10 = 0;
  }
  iVar1 = iVar8 + iVar10 + iVar9;
  param_2[1] = iVar6;
  uVar7 = iVar6 - iVar1;
  uVar5 = 0;
  param_2[2] = 0;
  param_2[3] = iVar9;
  param_2[4] = iVar9;
  param_2[5] = iVar10;
  param_2[6] = iVar10 + iVar9;
  param_2[7] = iVar1;
  param_2[8] = iVar8;
  param_2[9] = uVar7;
  param_2[10] = (uint)uVar2;
  if (param_5 != 0) {
    uVar5 = uVar7 / param_5;
  }
  param_2[0xb] = uVar5;
  if (*(uint *)(param_1 + 4) <= param_3) {
    *param_2 = iVar3 - *(int *)(lVar4 + (longlong)(int)*(uint *)(param_1 + 4) * 4);
  }
  return param_2;
}



// FUNCTION 1437000d6 FUN_1437000d6 body=194 status=ok
// SIG undefined FUN_1437000d6(void)

void FUN_1437000d6(longlong *param_1,uint param_2,int param_3,int param_4,uint param_5,
                  longlong param_6,int *param_7,int *param_8)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  
  *param_7 = 0;
  *param_8 = 0;
  if (param_2 < param_3 + param_2) {
    do {
      if (param_6 == 0) {
LAB_14370013f:
        uVar3 = (uint)*(ushort *)(param_1[2] + (longlong)(int)param_2 * 2);
        *param_7 = *param_7 + uVar3;
        if (param_5 != 0) {
          iVar1 = -0x5b8;
          if (param_4 == 0) {
            iVar1 = -0x2dc;
          }
          *param_8 = *param_8 +
                     ((iVar1 + *(int *)(*param_1 + (longlong)(int)(param_2 + 1) * 4)) -
                     (uVar3 * param_4 + *(int *)(*param_1 + (longlong)(int)param_2 * 4))) / param_5;
        }
      }
      else {
        lVar2 = *(longlong *)(param_6 + 0x10);
        if (*(longlong *)(param_6 + 0x10) == 0) {
          lVar2 = param_6;
        }
        uVar3 = param_2 + 0x1f;
        if (-1 < (int)param_2) {
          uVar3 = param_2;
        }
        if ((*(uint *)(lVar2 + (longlong)((int)uVar3 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0)
        goto LAB_14370013f;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 143700198 FUN_143700198 body=1589 status=ok
// SIG undefined FUN_143700198(void)

void FUN_143700198(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  uint *puVar10;
  uint uVar11;
  undefined ***pppuVar12;
  uint *puVar13;
  longlong lVar14;
  longlong *plVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined1 auStack_98 [32];
  code **local_78;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong *local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  for (lVar17 = param_1; lVar17 != 0; lVar17 = *(longlong *)(lVar17 + 0x20)) {
    if ((*(uint *)(lVar17 + 8) & 0x30) != 0) goto LAB_1437003c5;
  }
  if ((*(longlong *)(param_1 + 0x28) != 0) &&
     ((*(uint *)(*(longlong *)(param_1 + 0x28) + 8) >> 0x1e & 1) == 0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
      _Init_thread_footer(&DAT_14c8442bc);
    }
    bVar3 = DAT_14c8442b8;
    if (DAT_14c872bf0 == '\x01') {
      if (DAT_14c872bf1 != '\x01') goto LAB_1437002b5;
      bVar3 = DAT_14c8442b8 & 1;
    }
    if (bVar3 == 0) {
      plVar2 = *(longlong **)(param_1 + 0x28);
      iVar5 = (**(code **)(*plVar2 + 0x2b8))(plVar2);
      if (0 < iVar5) {
        lVar17 = 0;
        do {
          if (lVar17 < (int)plVar2[0x14]) {
            lVar14 = *(longlong *)(plVar2[0x13] + lVar17 * 8);
            if ((DAT_14c950c29 == '\x01') && (lVar14 != 0)) {
              FUN_1456cec3c(lVar14);
            }
          }
          else {
            lVar14 = 0;
          }
          if (lVar14 == param_1) {
            (**(code **)(DAT_14cb091a0 + 8))(&DAT_14cb091a0,plVar2);
            break;
          }
          lVar17 = lVar17 + 1;
          iVar5 = (**(code **)(*plVar2 + 0x2b8))(plVar2);
        } while (lVar17 < iVar5);
      }
    }
  }
LAB_1437002b5:
  plVar2 = *(longlong **)(param_1 + 0x1c0);
  if (plVar2 == (longlong *)0x0) goto LAB_1437003c5;
  lVar17 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar5 = *(int *)(lVar17 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar5 != 2) {
      if (iVar5 != 1) goto LAB_1437002e8;
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      if (DVar6 == DVar7) goto LAB_1437002ed;
      goto LAB_143700323;
    }
LAB_1437002ed:
    (**(code **)(*plVar2 + 0x20))(plVar2);
    puVar8 = (undefined8 *)*plVar2;
    plVar15 = plVar2;
LAB_1437002fc:
    (*(code *)*puVar8)(plVar15,1);
  }
  else {
LAB_1437002e8:
    if (iVar5 == 0x10) goto LAB_1437002ed;
LAB_143700323:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar5 = *(int *)(lVar17 + 0xc60), iVar5 == 2))
      goto LAB_1437002ed;
      if (iVar5 == 1) {
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        if (DVar6 == DVar7) goto LAB_1437002ed;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar8 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar10 = (uint *)*puVar8;
      if (puVar10 != (uint *)0x0) goto LAB_14370048e;
      while( true ) {
        uVar11 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar11 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar11 | 1;
          __tlregdtor(&LAB_1437009ee);
        }
        lVar17 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar9 = *(undefined4 **)(lVar17 + 0x310);
        *(undefined8 *)(lVar17 + 0x310) = 0;
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar9 = 0xffffffff;
        *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
        puVar9[0x12] = 0;
        *puVar8 = puVar9;
        FUN_140217a48(puVar8);
        puVar10 = (uint *)*puVar8;
LAB_14370048e:
        plVar15 = (longlong *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar13 = (uint *)(plVar15 + 0x16);
        uVar11 = puVar10[0x12];
        if (puVar13 <= puVar10 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
          LOCK();
          uVar1 = *puVar10;
          *puVar10 = *puVar10 + uVar11 + 1;
          UNLOCK();
          if ((uVar1 ^ uVar11) != 0xffffffff) break;
          puVar10 = (uint *)*puVar8;
          *puVar10 = 0xffffffff;
          *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar8 = puVar10;
          plVar15 = (longlong *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
          puVar13 = (uint *)(plVar15 + 0x16);
          uVar11 = 0;
          if (puVar13 <= puVar10 + 0x4000) {
            uVar11 = 1;
            goto LAB_14370050e;
          }
        }
      }
      uVar11 = uVar11 + 1;
LAB_14370050e:
      *(uint **)(puVar10 + 0x10) = puVar13;
      puVar10[0x12] = uVar11;
      iVar5 = 0;
      FUN_1447247dc(plVar15,0);
      *plVar15 = (longlong)&PTR_FUN_14aab0320;
      plVar15[0x15] = (longlong)plVar2;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar11 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar11 < 2) {
          uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar11];
          iVar5 = 0;
        }
        else {
          uVar16 = 2;
        }
      }
      else {
        iVar5 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar16 = 5;
      }
      if (*(code **)(plVar15[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(plVar15[0xe] + 0x18))(plVar15 + 0xe,plVar15 + 9);
      }
      plVar15[0xe] = (longlong)
                     LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      plVar15[9] = (longlong)plVar15;
      plVar15[10] = (longlong)plVar15;
      lVar17 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar17 == 0) {
        uVar4 = 1;
        if ((char)uVar16 != '\x06') {
          uVar4 = uVar16;
        }
        uVar16 = uVar4;
        lVar17 = 0;
      }
      else {
        if ((char)uVar16 == '\x06') {
          uVar16 = *(ulonglong *)(lVar17 + 0x38) >> 0x3b;
        }
        lVar17 = *(longlong *)(lVar17 + 0x30);
      }
      plVar15[0xf] = lVar17;
      plVar15[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)plVar15 + 0x1c) = iVar5;
      if (plVar15 == (longlong *)0x0) {
        local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
        FUN_1447439e4(0);
        goto LAB_1437003ba;
      }
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
      local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(plVar15);
      LOCK();
      plVar2 = plVar15 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 != 0) goto LAB_1437003ba;
      puVar8 = (undefined8 *)*plVar15;
      goto LAB_1437002fc;
    }
    local_78 = local_68;
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14aab0290;
    local_68[0] = FUN_1437020c0;
    local_40 = plVar2;
    FUN_14005a792(&DAT_14ca9a440,L"USparseVolumeTextureFrame_DeleteTextureRenderResources",
                  &DAT_14cb09098);
    if (local_68[0] != (code *)0x0) {
      pppuVar12 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar12 = &local_48;
      }
      (*(code *)(*pppuVar12)[2])();
    }
  }
LAB_1437003ba:
  *(undefined8 *)(param_1 + 0x1c0) = 0;
LAB_1437003c5:
  switchD_143c3d4dc::caseD_1d(param_1);
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1437007ce FUN_1437007ce body=164 status=ok
// SIG undefined FUN_1437007ce(void)

undefined8 FUN_1437007ce(longlong *param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar1 = *(uint *)(param_2 + 1);
  uVar6 = (ulonglong)uVar1;
  if (uVar6 != 0) {
    lVar2 = param_3[1];
    cVar3 = (**(code **)(*param_1 + 0x308))(param_1,uVar6);
    if (cVar3 != '\0') {
      if (0 < (int)uVar1) {
        uVar7 = 0;
        do {
          puVar5 = (undefined8 *)(uVar7 * 0x60 + *param_3);
          if ((int)lVar2 < (int)uVar1) {
            puVar5 = &DAT_14c846480;
          }
          cVar3 = (**(code **)(*param_1 + 0x310))(param_1,uVar7 * 0xa0 + *param_2,puVar5);
          if (cVar3 == '\0') {
            return 0;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 != uVar6);
      }
                    /* WARNING: Could not recover jumptable at 0x00014370085a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*param_1 + 0x318))(param_1);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 143700872 FUN_143700872 body=151 status=ok
// SIG undefined FUN_143700872(void)

void FUN_143700872(longlong param_1)

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



// FUNCTION 143700a16 FUN_143700a16 body=346 status=ok
// SIG undefined FUN_143700a16(void)

void FUN_143700a16(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar5 = FUN_145a7318a();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) {
      FUN_1400337aa(lVar2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
    }
    lVar5 = FUN_145b5a78c();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        != lVar5 + 0x30)) {
      iVar1 = *(int *)(lVar2 + 0x30);
      if ((longlong)iVar1 != 0) {
        lVar2 = *(longlong *)(lVar2 + 0x28);
        lVar5 = 0;
        do {
          local_40 = *(undefined8 *)(lVar2 + lVar5);
          puVar3 = *(undefined8 **)(param_1 + 8);
          pcVar4 = (code *)*puVar3;
          plVar7 = puVar3 + 4;
          if ((longlong *)puVar3[2] != (longlong *)0x0) {
            plVar7 = (longlong *)puVar3[2];
          }
          uVar6 = (**(code **)(*plVar7 + 8))();
          (*pcVar4)(uVar6,&local_40);
          lVar5 = lVar5 + 8;
        } while ((longlong)iVar1 * 8 != lVar5);
      }
    }
    else if ((-1 < (longlong)DAT_14c761b50) && (DAT_14c761b50 < *(int *)(lVar2 + 0x30))) {
      puVar3 = *(undefined8 **)(param_1 + 8);
      local_40 = *(undefined8 *)(*(longlong *)(lVar2 + 0x28) + (longlong)DAT_14c761b50 * 8);
      pcVar4 = (code *)*puVar3;
      plVar7 = puVar3 + 4;
      if ((longlong *)puVar3[2] != (longlong *)0x0) {
        plVar7 = (longlong *)puVar3[2];
      }
      uVar6 = (**(code **)(*plVar7 + 8))();
      (*pcVar4)(uVar6,&local_40);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143700ba8 FUN_143700ba8 body=12 status=ok
// SIG undefined FUN_143700ba8(void)

void FUN_143700ba8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143700bb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143700bb4 FUN_143700bb4 body=29 status=ok
// SIG undefined FUN_143700bb4(void)

undefined8 FUN_143700bb4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143700bd2 FUN_143700bd2 body=381 status=ok
// SIG undefined FUN_143700bd2(void)

void FUN_143700bd2(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined ***pppuVar8;
  longlong lVar9;
  undefined1 auStack_98 [32];
  code *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  ushort local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    lVar5 = FUN_145a7318a();
    if ((*(int *)(param_2[2] + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
        lVar5 + 0x30)) {
      lVar5 = FUN_145b5a78c();
      if ((*(int *)(param_2[2] + 0x38) < *(int *)(lVar5 + 0x38)) ||
         (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
          lVar5 + 0x30)) {
        lVar5 = param_2[6];
        if ((longlong)(int)lVar5 != 0) {
          lVar1 = param_2[5];
          lVar9 = 0;
          do {
            local_78[0] = *(code **)(lVar1 + lVar9);
            puVar2 = (undefined8 *)param_1[1];
            pcVar3 = (code *)*puVar2;
            plVar7 = puVar2 + 4;
            if ((longlong *)puVar2[2] != (longlong *)0x0) {
              plVar7 = (longlong *)puVar2[2];
            }
            uVar6 = (**(code **)(*plVar7 + 8))();
            (*pcVar3)(uVar6,local_78);
            lVar9 = lVar9 + 8;
          } while ((longlong)(int)lVar5 * 8 != lVar9);
        }
      }
      else {
        local_68 = (undefined ***)0x0;
        local_58 = &PTR_LAB_14aaaff60;
        local_50 = *(byte *)*param_1 | 0x100;
        local_78[0] = FUN_143701308;
        (**(code **)(*param_2 + 0x350))(param_2,local_78);
        if (local_78[0] != (code *)0x0) {
          pppuVar8 = local_68;
          if (local_68 == (undefined ***)0x0) {
            pppuVar8 = &local_58;
          }
          (*(code *)(*pppuVar8)[2])();
        }
      }
    }
    else {
      cVar4 = (**(code **)(*param_2 + 0x360))(param_2);
      if (cVar4 != '\0') {
        FUN_1400337aa(param_2);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_98);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143700d86 FUN_143700d86 body=12 status=ok
// SIG undefined FUN_143700d86(void)

void FUN_143700d86(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143700d8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143700d92 FUN_143700d92 body=29 status=ok
// SIG undefined FUN_143700d92(void)

undefined8 FUN_143700d92(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143700e3a FUN_143700e3a body=29 status=ok
// SIG undefined FUN_143700e3a(void)

undefined8 FUN_143700e3a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143700e62 FUN_143700e62 body=496 status=ok
// SIG undefined FUN_143700e62(void)

void FUN_143700e62(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_2b8 [40];
  longlong local_290;
  longlong local_288;
  undefined1 local_27c [4];
  undefined1 local_278 [256];
  undefined1 local_178 [224];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    iVar8 = (int)plVar3[1];
    do {
      if (iVar8 == 0) goto LAB_143700ec6;
      LOCK();
      iVar7 = (int)plVar3[1];
      bVar10 = iVar8 == iVar7;
      if (bVar10) {
        *(int *)(plVar3 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar10);
    lVar4 = *param_1;
    if (lVar4 != 0) {
      plVar5 = (longlong *)param_1[3];
      if (plVar5 == (longlong *)0x0) {
LAB_143700efd:
        FUN_147d35104(lVar4);
      }
      else {
        iVar8 = (int)plVar5[1];
        do {
          if (iVar8 == 0) goto LAB_143700efd;
          LOCK();
          iVar7 = (int)plVar5[1];
          bVar10 = iVar8 == iVar7;
          if (bVar10) {
            *(int *)(plVar5 + 1) = iVar8 + 1;
            iVar7 = iVar8;
          }
          iVar8 = iVar7;
          UNLOCK();
        } while (!bVar10);
        lVar9 = param_1[2];
        if (lVar9 == 0) {
          FUN_147d35104(lVar4);
        }
        else {
          local_78 = 0;
          local_70 = 0;
          local_98 = 0;
          uStack_90 = 0;
          local_6c = 0xffffffff00000080;
          local_64 = 0;
          local_58 = 0;
          local_50 = 0;
          lVar6 = param_1[5];
          local_288 = lVar9;
          if ((longlong)(int)lVar6 != 0) {
            local_290 = param_1[4];
            lVar9 = 0;
            do {
              FUN_147044584(local_178,lVar4 + 0x70);
              FUN_147044c7a(local_278,local_288,*(undefined8 *)(local_290 + lVar9),local_178);
              FUN_147d48120(&local_98,local_27c,local_278);
              FUN_1470451b4(local_278);
              FUN_14704513c(local_178);
              lVar9 = lVar9 + 8;
            } while ((longlong)(int)lVar6 * 8 != lVar9);
          }
          FUN_147d35b48(lVar4,&local_98);
          local_50 = 0;
          if (local_58 != 0) {
            FUN_1400020a8();
          }
          FUN_1477cb0bc(&local_98);
        }
        LOCK();
        plVar2 = plVar5 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
  }
LAB_143700ec6:
  if ((local_48 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14370105e FUN_14370105e body=29 status=ok
// SIG undefined FUN_14370105e(void)

void FUN_14370105e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14370107c FUN_14370107c body=111 status=ok
// SIG undefined FUN_14370107c(void)

undefined8 * FUN_14370107c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14aaafee0;
  FUN_147d4865f(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
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



// FUNCTION 1437010ee FUN_1437010ee body=262 status=ok
// SIG undefined FUN_1437010ee(void)

void FUN_1437010ee(longlong param_1,int param_2)

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



// FUNCTION 143701226 FUN_143701226 body=12 status=ok
// SIG undefined FUN_143701226(void)

void FUN_143701226(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014370122f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143701232 FUN_143701232 body=29 status=ok
// SIG undefined FUN_143701232(void)

undefined8 FUN_143701232(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143701282 FUN_143701282 body=12 status=ok
// SIG undefined FUN_143701282(void)

void FUN_143701282(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014370128b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14370128e FUN_14370128e body=29 status=ok
// SIG undefined FUN_14370128e(void)

undefined8 FUN_14370128e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437012de FUN_1437012de body=12 status=ok
// SIG undefined FUN_1437012de(void)

void FUN_1437012de(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001437012e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1437012ea FUN_1437012ea body=29 status=ok
// SIG undefined FUN_1437012ea(void)

undefined8 FUN_1437012ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143701308 FUN_143701308 body=108 status=ok
// SIG undefined FUN_143701308(void)

void FUN_143701308(undefined1 *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int7 iVar3;
  
  param_2 = (longlong *)*param_2;
  if (param_2 == (longlong *)0x0) {
    return;
  }
  lVar2 = FUN_145b5ac1e();
  iVar1 = *(int *)(lVar2 + 0x38);
  iVar3 = (int7)(int3)((uint)iVar1 >> 8);
  if ((iVar1 <= *(int *)(param_2[2] + 0x38)) &&
     (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)iVar1 * 8) == lVar2 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x000143701371. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x350))(param_2,CONCAT71(iVar3,*param_1));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000143701359. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x348))(param_2,CONCAT71(iVar3,*param_1),param_1[1]);
  return;
}



// FUNCTION 143701392 FUN_143701392 body=12 status=ok
// SIG undefined FUN_143701392(void)

void FUN_143701392(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014370139b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14370139e FUN_14370139e body=29 status=ok
// SIG undefined FUN_14370139e(void)

undefined8 FUN_14370139e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437013bc FUN_1437013bc body=194 status=ok
// SIG undefined FUN_1437013bc(void)

void FUN_1437013bc(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  if (param_1[1] == 0) {
    return;
  }
  uVar1 = *param_1;
  if ((int)uVar1 < 0) {
    return;
  }
  if (DAT_14c9647dc <= (int)uVar1) {
    return;
  }
  puVar4 = (undefined8 *)
           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  if (*(uint *)(puVar4 + 2) != param_1[1]) {
    return;
  }
  if ((*(uint *)(puVar4 + 1) & 0x10200000) != 0) {
    return;
  }
  if ((*(uint *)(puVar4 + 1) & 0x10200000) == 0) {
    plVar3 = (longlong *)*puVar4;
  }
  else {
    plVar3 = (longlong *)0x0;
  }
  (**(code **)(*plVar3 + 0x350))(plVar3,0);
  if (param_1[1] != 0) {
    uVar1 = *param_1;
    lVar2 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_14370146c;
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar3 != (longlong *)0x0) &&
       ((*(uint *)(plVar3 + 2) == param_1[1] && ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)))) {
      lVar2 = *plVar3;
      goto LAB_14370146c;
    }
  }
  lVar2 = 0;
LAB_14370146c:
  LOCK();
  *(undefined4 *)(lVar2 + 0x7c) = 0;
  UNLOCK();
  return;
}



// FUNCTION 143701494 FUN_143701494 body=29 status=ok
// SIG undefined FUN_143701494(void)

undefined8 FUN_143701494(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437014b2 FUN_1437014b2 body=81 status=ok
// SIG undefined FUN_1437014b2(void)

void FUN_1437014b2(longlong *param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (0 < *(int *)(*param_1 + 0x238)) {
    local_10 = *param_2;
    FUN_1447cd2ec(*param_1 + 0x230);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14370152e FUN_14370152e body=29 status=ok
// SIG undefined FUN_14370152e(void)

undefined8 FUN_14370152e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14370154c FUN_14370154c body=82 status=ok
// SIG undefined FUN_14370154c(void)

void FUN_14370154c(longlong *param_1)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (0 < *(int *)(*param_1 + 0x238)) {
    local_10 = 0;
    FUN_1447cd2ec(*param_1 + 0x230);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437015ca FUN_1437015ca body=29 status=ok
// SIG undefined FUN_1437015ca(void)

undefined8 FUN_1437015ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437015e8 FUN_1437015e8 body=57 status=ok
// SIG undefined FUN_1437015e8(void)

void FUN_1437015e8(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  param_3 = (longlong *)*param_3;
  if (param_3 != (longlong *)0x0) {
    (**(code **)(*param_3 + 0x170))(param_3,*param_1,param_1 + 1,param_1 + 0xb,param_1 + 0x15);
  }
  return;
}



// FUNCTION 14370162c FUN_14370162c body=29 status=ok
// SIG undefined FUN_14370162c(void)

void FUN_14370162c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14370164a FUN_14370164a body=156 status=ok
// SIG undefined FUN_14370164a(void)

undefined8 * FUN_14370164a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14aab00c0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_14117d2fe(param_1 + 0x16);
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_14117d2fe(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_14117d2fe(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14370171c FUN_14370171c body=12 status=ok
// SIG undefined FUN_14370171c(void)

void FUN_14370171c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143701725. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143701728 FUN_143701728 body=29 status=ok
// SIG undefined FUN_143701728(void)

undefined8 FUN_143701728(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14370177e FUN_14370177e body=12 status=ok
// SIG undefined FUN_14370177e(void)

void FUN_14370177e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143701787. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}


